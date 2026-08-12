// Find the code that references Paradox field-name literals, then decompile it.
// Delphi 1 keeps string literals in the code segment and loads them as CS:offset,
// so we scan each segment's instructions for a scalar operand equal to the
// literal's offset inside that same segment.
// @category Simstrat
import ghidra.app.script.GhidraScript;
import ghidra.app.decompiler.*;
import ghidra.program.model.address.*;
import ghidra.program.model.lang.OperandType;
import ghidra.program.model.listing.*;
import ghidra.program.model.mem.MemoryBlock;
import ghidra.program.model.scalar.Scalar;
import java.io.*;
import java.util.*;

public class ScanFields extends GhidraScript {

    static final String[] NEEDLES = {
        "PartMarche", "EffetGlobal", "EffetPrix", "EffetPub", "EffetFV",
        "EffetQualite", "EffetCredit", "VolumeMarche", "PoidsPrix",
        "PoidsFidelisation", "DemandeNonSatisfaite", "VentesPrises"
    };

    @Override
    public void run() throws Exception {
        File outDir = new File(getScriptArgs().length > 0 ? getScriptArgs()[0] : "/tmp");
        outDir.mkdirs();
        PrintWriter w = new PrintWriter(new File(outDir, "champs_refs.txt"));

        // literal offset -> set of needles seen there, grouped per block
        Map<MemoryBlock, Map<Integer, Set<String>>> lits = new LinkedHashMap<>();
        for (String n : NEEDLES) {
            Address a = null;
            while (true) {
                a = find(a == null ? currentProgram.getMinAddress() : a.add(1), n.getBytes());
                if (a == null) break;
                MemoryBlock b = getMemoryBlock(a);
                if (b == null || !b.isExecute()) continue;
                int off = (a instanceof SegmentedAddress)
                        ? ((SegmentedAddress) a).getSegmentOffset()
                        : (int) a.getOffset();
                w.printf("  literal %-22s %s  -> offset segment %#06x%n", n, a, off);
                lits.computeIfAbsent(b, k -> new TreeMap<>())
                    .computeIfAbsent(off, k -> new TreeSet<>()).add(n);
                // Delphi pascal strings are length-prefixed: the pointer used by
                // the code is one byte before the text.
                lits.get(b).computeIfAbsent(off - 1, k -> new TreeSet<>()).add(n + "(pfx)");
            }
        }
        w.println("literaux trouves dans " + lits.size() + " segments de code\n");

        Set<Function> hits = new LinkedHashSet<>();
        for (Map.Entry<MemoryBlock, Map<Integer, Set<String>>> e : lits.entrySet()) {
            MemoryBlock b = e.getKey();
            Map<Integer, Set<String>> want = e.getValue();
            InstructionIterator it = currentProgram.getListing()
                    .getInstructions(new AddressSet(b.getStart(), b.getEnd()), true);
            while (it.hasNext() && !monitor.isCancelled()) {
                Instruction ins = it.next();
                for (int i = 0; i < ins.getNumOperands(); i++) {
                    for (Object o : ins.getOpObjects(i)) {
                        if (!(o instanceof Scalar)) continue;
                        int v = (int) ((Scalar) o).getUnsignedValue();
                        Set<String> names = want.get(v);
                        if (names == null) continue;
                        Function f = getFunctionContaining(ins.getAddress());
                        w.printf("%-28s <- %s  %-34s  %s%n",
                                 String.join(",", names), ins.getAddress(),
                                 ins.toString(),
                                 f != null ? f.getName() + " @" + f.getEntryPoint() : "(hors fonction)");
                        if (f != null) hits.add(f);
                    }
                }
            }
        }
        w.println("\nfonctions candidates : " + hits.size());
        for (Function f : hits) w.println("   " + f.getName() + " @" + f.getEntryPoint()
                                          + "  (" + f.getBody().getNumAddresses() + " octets)");
        w.close();

        DecompInterface di = new DecompInterface();
        di.setOptions(new DecompileOptions());
        di.openProgram(currentProgram);
        PrintWriter c = new PrintWriter(new File(outDir, "champs_decompile.c"));
        int ok = 0;
        for (Function f : hits) {
            if (monitor.isCancelled()) break;
            DecompileResults r = di.decompileFunction(f, 180, monitor);
            c.println("/* ===== " + f.getName() + " @ " + f.getEntryPoint()
                      + "  (" + f.getBody().getNumAddresses() + " octets) ===== */");
            c.println(r != null && r.decompileCompleted()
                      ? r.getDecompiledFunction().getC()
                      : "/* echec */");
            c.println();
            if (r != null && r.decompileCompleted()) ok++;
        }
        c.close();
        di.dispose();
        println("candidates=" + hits.size() + " decompilees=" + ok);
    }
}

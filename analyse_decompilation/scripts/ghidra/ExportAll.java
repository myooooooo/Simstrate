// Decompile every function to C, one file per code segment.
// @category Simstrat
import ghidra.app.script.GhidraScript;
import ghidra.app.decompiler.*;
import ghidra.program.model.listing.*;
import ghidra.program.model.mem.MemoryBlock;
import java.io.*;
import java.util.*;
import java.util.concurrent.*;

public class ExportAll extends GhidraScript {
    @Override
    public void run() throws Exception {
        File outDir = new File(getScriptArgs()[0]);
        outDir.mkdirs();

        Map<String, List<Function>> bySeg = new TreeMap<>();
        for (Function f : currentProgram.getFunctionManager().getFunctions(true)) {
            MemoryBlock b = getMemoryBlock(f.getEntryPoint());
            bySeg.computeIfAbsent(b == null ? "inconnu" : b.getName(),
                                  k -> new ArrayList<>()).add(f);
        }

        DecompInterface di = new DecompInterface();
        DecompileOptions o = new DecompileOptions();
        di.setOptions(o);
        di.openProgram(currentProgram);

        int ok = 0, fail = 0;
        PrintWriter inv = new PrintWriter(new File(outDir, "inventaire_fonctions.txt"));
        for (Map.Entry<String, List<Function>> e : bySeg.entrySet()) {
            PrintWriter w = new PrintWriter(new File(outDir, e.getKey() + ".c"));
            w.println("/* Simstrat (FR).EXE - segment " + e.getKey()
                      + " - " + e.getValue().size() + " fonctions");
            w.println("   Decompile par Ghidra 11.2.1 (x86 16 bits, chargeur NE). */\n");
            for (Function f : e.getValue()) {
                if (monitor.isCancelled()) break;
                inv.printf("%-12s %-22s %s  %d octets%n", e.getKey(), f.getName(),
                           f.getEntryPoint(), f.getBody().getNumAddresses());
                DecompileResults r = di.decompileFunction(f, 60, monitor);
                w.println("/* ---- " + f.getName() + " @ " + f.getEntryPoint()
                          + "  (" + f.getBody().getNumAddresses() + " octets) ---- */");
                if (r != null && r.decompileCompleted()) {
                    w.println(r.getDecompiledFunction().getC());
                    ok++;
                } else {
                    w.println("/* echec : " + (r == null ? "null" : r.getErrorMessage()) + " */");
                    fail++;
                }
                w.println();
            }
            w.close();
            println("segment " + e.getKey() + " : " + e.getValue().size() + " fonctions");
        }
        inv.close();
        di.dispose();
        println("TERMINE ok=" + ok + " echecs=" + fail);
    }
}

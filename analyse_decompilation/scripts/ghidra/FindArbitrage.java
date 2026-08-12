// Locate the Simstrat arbitrage routine and decompile it (plus its callees).
// @category Simstrat
import ghidra.app.script.GhidraScript;
import ghidra.app.decompiler.*;
import ghidra.program.model.address.*;
import ghidra.program.model.listing.*;
import ghidra.program.model.symbol.*;
import ghidra.program.model.data.StringDataInstance;
import ghidra.program.util.DefinedDataIterator;
import java.io.*;
import java.util.*;

public class FindArbitrage extends GhidraScript {

    // Strings that should sit inside or next to the arbitrage code path.
    static final String[] NEEDLES = {
        "Calculs en cours", "ARBITRAGE", "Arbitrer", "Arbitrage",
        "PartMarche", "EffetGlobal", "non valid"
    };

    @Override
    public void run() throws Exception {
        File outDir = new File(getScriptArgs().length > 0 ? getScriptArgs()[0] : "/tmp/ghidra_out");
        outDir.mkdirs();

        // 1. map interesting strings -> the functions that reference them
        PrintWriter idx = new PrintWriter(new File(outDir, "arbitrage_index.txt"));
        Set<Function> targets = new LinkedHashSet<>();

        for (Data d : DefinedDataIterator.definedStrings(currentProgram)) {
            String s = StringDataInstance.getStringDataInstance(d).getStringValue();
            if (s == null) continue;
            for (String needle : NEEDLES) {
                if (!s.contains(needle)) continue;
                idx.println("STRING @" + d.getAddress() + " : " + s.replace("\n", " "));
                for (Reference r : getReferencesTo(d.getAddress())) {
                    Function f = getFunctionContaining(r.getFromAddress());
                    if (f != null) {
                        idx.println("    referencee par " + f.getName() + " @" + f.getEntryPoint());
                        targets.add(f);
                    }
                }
                break;
            }
        }
        idx.println();
        idx.println("fonctions retenues : " + targets.size());

        // 2. pull in everything those functions call (one level down)
        Set<Function> all = new LinkedHashSet<>(targets);
        for (Function f : targets) all.addAll(f.getCalledFunctions(monitor));
        idx.println("avec les appelees : " + all.size());
        idx.close();

        // 3. decompile them
        DecompInterface di = new DecompInterface();
        di.setOptions(new DecompileOptions());
        di.openProgram(currentProgram);

        PrintWriter out = new PrintWriter(new File(outDir, "arbitrage_decompile.c"));
        int ok = 0, fail = 0;
        for (Function f : all) {
            if (monitor.isCancelled()) break;
            DecompileResults res = di.decompileFunction(f, 120, monitor);
            out.println("/* ============================================================");
            out.println("   " + f.getName() + "  @ " + f.getEntryPoint()
                        + "   (" + f.getBody().getNumAddresses() + " octets)");
            out.println("   ============================================================ */");
            if (res != null && res.decompileCompleted()) {
                out.println(res.getDecompiledFunction().getC());
                ok++;
            } else {
                out.println("/* echec de decompilation : "
                            + (res == null ? "null" : res.getErrorMessage()) + " */");
                fail++;
            }
            out.println();
        }
        out.close();
        di.dispose();
        println("decompilees=" + ok + " echecs=" + fail + " -> " + outDir);
    }
}

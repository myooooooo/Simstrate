// Overview of what Ghidra found, plus byte-level search for arbitrage markers.
// @category Simstrat
import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.*;
import ghidra.program.model.listing.*;
import ghidra.program.model.mem.*;
import ghidra.program.model.symbol.*;
import java.io.*;
import java.util.*;

public class Recon extends GhidraScript {
    @Override
    public void run() throws Exception {
        File out = new File(getScriptArgs().length > 0 ? getScriptArgs()[0] : "/tmp");
        PrintWriter w = new PrintWriter(new File(out, "recon.txt"));

        FunctionManager fm = currentProgram.getFunctionManager();
        w.println("fonctions definies : " + fm.getFunctionCount());
        long insn = currentProgram.getListing().getNumInstructions();
        w.println("instructions       : " + insn);

        w.println("\n== blocs memoire ==");
        for (MemoryBlock b : currentProgram.getMemory().getBlocks()) {
            w.printf("  %-14s %s - %s  %d octets %s%n", b.getName(), b.getStart(),
                     b.getEnd(), b.getSize(), b.isExecute() ? "EXEC" : "");
        }

        String[] needles = {"Arbitr", "ARBITRAGE", "Calculs en cours",
                            "SJDA", "PartMarche", "demonstration", "Simstra1"};
        w.println("\n== recherche d'octets ==");
        for (String n : needles) {
            Address a = null;
            int found = 0;
            while (found < 12) {
                a = find(a == null ? currentProgram.getMinAddress() : a.add(1), n.getBytes());
                if (a == null) break;
                found++;
                StringBuilder sb = new StringBuilder();
                sb.append("  \"").append(n).append("\" @ ").append(a);
                Function f = getFunctionContaining(a);
                if (f != null) sb.append("   DANS ").append(f.getName());
                Reference[] refs = getReferencesTo(a);
                if (refs.length > 0) {
                    sb.append("   refs:");
                    for (Reference r : refs) {
                        Function rf = getFunctionContaining(r.getFromAddress());
                        sb.append(" ").append(r.getFromAddress())
                          .append(rf != null ? "(" + rf.getName() + ")" : "");
                    }
                }
                w.println(sb);
            }
            if (found == 0) w.println("  \"" + n + "\" : introuvable");
        }
        w.close();
        println("recon ecrit");
    }
}

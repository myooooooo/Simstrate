// Profile x87 usage per function: find the ones that actually compute.
// @category Simstrat
import ghidra.app.script.GhidraScript;
import ghidra.program.model.listing.*;
import java.io.*;
import java.util.*;

public class FpProfile extends GhidraScript {
    @Override
    public void run() throws Exception {
        File out = new File(getScriptArgs()[0]);
        out.mkdirs();
        PrintWriter w = new PrintWriter(new File(out, "profil_x87.txt"));

        List<Object[]> rows = new ArrayList<>();
        for (Function f : currentProgram.getFunctionManager().getFunctions(true)) {
            if (monitor.isCancelled()) break;
            int fld = 0, fst = 0, fmul = 0, fdiv = 0, fadd = 0, fsub = 0,
                fcom = 0, fild = 0, total = 0;
            InstructionIterator it =
                currentProgram.getListing().getInstructions(f.getBody(), true);
            while (it.hasNext()) {
                String m = it.next().getMnemonicString().toUpperCase();
                if (!m.startsWith("F")) continue;
                total++;
                if (m.startsWith("FLD")) fld++;
                else if (m.startsWith("FST") || m.startsWith("FIST")) fst++;
                else if (m.startsWith("FMUL")) fmul++;
                else if (m.startsWith("FDIV")) fdiv++;
                else if (m.startsWith("FADD")) fadd++;
                else if (m.startsWith("FSUB")) fsub++;
                else if (m.startsWith("FCOM")) fcom++;
                else if (m.startsWith("FILD")) fild++;
            }
            if (total > 0)
                rows.add(new Object[]{f, total, fld, fst, fmul, fdiv, fadd, fsub, fcom, fild});
        }
        // rank by division count first (market share needs a divide), then by density
        rows.sort((a, b) -> {
            int c = Integer.compare((Integer) b[5], (Integer) a[5]);
            return c != 0 ? c : Integer.compare((Integer) b[1], (Integer) a[1]);
        });

        w.printf("%-22s %-12s %5s %4s %4s %4s %4s %4s %4s %4s %4s%n",
                 "fonction", "adresse", "x87", "fld", "fst", "mul", "DIV",
                 "add", "sub", "cmp", "ild");
        for (Object[] r : rows) {
            Function f = (Function) r[0];
            w.printf("%-22s %-12s %5d %4d %4d %4d %4d %4d %4d %4d %4d%n",
                     f.getName(), f.getEntryPoint().toString(),
                     r[1], r[2], r[3], r[4], r[5], r[6], r[7], r[8], r[9]);
        }
        w.println("\nfonctions utilisant le x87 : " + rows.size());
        w.close();
        println("profil ecrit : " + rows.size() + " fonctions");
    }
}

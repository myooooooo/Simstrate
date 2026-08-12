// Walk the call graph down from the arbitrage handler and flag x87 users.
// @category Simstrat
import ghidra.app.script.GhidraScript;
import ghidra.program.model.listing.*;
import java.io.*;
import java.util.*;

public class CallTree extends GhidraScript {

    Map<Function, int[]> fp = new HashMap<>();   // {total, fld, fst, mul, div, add, sub, cmp}

    int[] profile(Function f) {
        int[] c = new int[8];
        InstructionIterator it = currentProgram.getListing().getInstructions(f.getBody(), true);
        while (it.hasNext()) {
            String m = it.next().getMnemonicString().toUpperCase();
            if (!m.startsWith("F")) continue;
            c[0]++;
            if (m.startsWith("FLD") || m.startsWith("FILD")) c[1]++;
            else if (m.startsWith("FST") || m.startsWith("FIST")) c[2]++;
            else if (m.startsWith("FMUL")) c[3]++;
            else if (m.startsWith("FDIV")) c[4]++;
            else if (m.startsWith("FADD")) c[5]++;
            else if (m.startsWith("FSUB")) c[6]++;
            else if (m.startsWith("FCOM")) c[7]++;
        }
        return c;
    }

    @Override
    public void run() throws Exception {
        File out = new File(getScriptArgs()[0]);
        out.mkdirs();
        String rootName = getScriptArgs().length > 1 ? getScriptArgs()[1]
                        : "TFormSJDA_Arbitrage_BitBtnArbitrerClick";
        int maxDepth = getScriptArgs().length > 2 ? Integer.parseInt(getScriptArgs()[2]) : 6;

        Function root = null;
        for (Function f : currentProgram.getFunctionManager().getFunctions(true))
            if (f.getName().equals(rootName)) { root = f; break; }
        if (root == null) { println("racine introuvable: " + rootName); return; }

        PrintWriter w = new PrintWriter(new File(out, "arbre_arbitrage.txt"));
        Set<Function> seen = new LinkedHashSet<>();
        Deque<Object[]> stack = new ArrayDeque<>();
        stack.push(new Object[]{root, 0});
        List<Function> fpFuncs = new ArrayList<>();

        while (!stack.isEmpty() && !monitor.isCancelled()) {
            Object[] cur = stack.pop();
            Function f = (Function) cur[0];
            int depth = (Integer) cur[1];
            if (depth > maxDepth) continue;
            boolean isNew = seen.add(f);
            int[] c = fp.computeIfAbsent(f, this::profile);
            StringBuilder sb = new StringBuilder();
            for (int i = 0; i < depth; i++) sb.append("  ");
            sb.append(f.getName()).append(" @").append(f.getEntryPoint());
            if (c[0] > 0) {
                sb.append(String.format("   [x87 %d : ld%d st%d mul%d DIV%d add%d sub%d cmp%d]",
                                        c[0], c[1], c[2], c[3], c[4], c[5], c[6], c[7]));
                if (isNew) fpFuncs.add(f);
            }
            if (!isNew) sb.append("   (deja vu)");
            w.println(sb);
            if (!isNew) continue;
            List<Function> callees = new ArrayList<>(f.getCalledFunctions(monitor));
            Collections.reverse(callees);
            for (Function g : callees) stack.push(new Object[]{g, depth + 1});
        }
        w.println("\nfonctions atteintes : " + seen.size());
        w.println("dont utilisant le x87 : " + fpFuncs.size() + "\n");
        fpFuncs.sort((a, b) -> Integer.compare(fp.get(b)[0], fp.get(a)[0]));
        w.printf("%-34s %-12s %5s %4s %4s %4s %4s %4s %4s %4s%n",
                 "fonction", "adresse", "x87", "ld", "st", "mul", "DIV", "add", "sub", "cmp");
        for (Function f : fpFuncs) {
            int[] c = fp.get(f);
            w.printf("%-34s %-12s %5d %4d %4d %4d %4d %4d %4d %4d%n",
                     f.getName(), f.getEntryPoint().toString(),
                     c[0], c[1], c[2], c[3], c[4], c[5], c[6], c[7]);
        }
        w.close();
        println("arbre ecrit : " + seen.size() + " fonctions, " + fpFuncs.size() + " avec x87");
    }
}

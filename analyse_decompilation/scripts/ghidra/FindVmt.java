// Locate Delphi VMTs by searching memory for far pointers to the published
// method tables, then dump each VMT's slots as resolved code addresses.
// @category Simstrat
import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.*;
import ghidra.program.model.listing.*;
import ghidra.program.model.mem.*;
import java.io.*;
import java.util.*;

public class FindVmt extends GhidraScript {
    @Override
    public void run() throws Exception {
        File outDir = new File(getScriptArgs()[0]);
        outDir.mkdirs();
        BufferedReader br = new BufferedReader(new FileReader(getScriptArgs()[1]));
        PrintWriter w = new PrintWriter(new File(outDir, "vmt.txt"));

        List<String[]> classes = new ArrayList<>();
        String line;
        while ((line = br.readLine()) != null) {
            String[] p = line.trim().split("\\s+");
            if (p.length >= 2) classes.add(p);
        }
        br.close();
        w.println("classes a localiser : " + classes.size() + "\n");

        Memory mem = currentProgram.getMemory();
        int located = 0;
        for (String[] c : classes) {
            Address tbl;
            try { tbl = currentProgram.getAddressFactory().getAddress(c[0]); }
            catch (Exception e) { continue; }
            if (tbl == null) continue;
            SegmentedAddress sa = (SegmentedAddress) tbl;
            // far pointer stored little-endian as [offset:word][segment:word]
            byte[] pat = new byte[]{
                (byte) (sa.getSegmentOffset() & 0xFF),
                (byte) ((sa.getSegmentOffset() >> 8) & 0xFF),
                (byte) (sa.getSegment() & 0xFF),
                (byte) ((sa.getSegment() >> 8) & 0xFF)};

            Address at = null;
            List<Address> hits = new ArrayList<>();
            while (hits.size() < 8) {
                at = mem.findBytes(at == null ? currentProgram.getMinAddress() : at.add(1),
                                   pat, null, true, monitor);
                if (at == null) break;
                hits.add(at);
            }
            w.println("== " + c[1] + "   table " + c[0]
                      + "   (" + (c.length > 2 ? c[2] : "?") + " methodes publiees)");
            if (hits.isEmpty()) { w.println("   aucun pointeur trouve\n"); continue; }
            located++;
            for (Address h : hits) {
                MemoryBlock b = getMemoryBlock(h);
                w.println("   pointeur en " + h + "  bloc " + (b == null ? "?" : b.getName()));
                // the VMT slots follow; dump 24 far pointers after this field
                for (int k = 1; k <= 24; k++) {
                    Address slot = h.add(4L * k);
                    try {
                        int off = mem.getShort(slot) & 0xFFFF;
                        int seg = mem.getShort(slot.add(2)) & 0xFFFF;
                        if (seg < 0x1000 || seg > 0x1200) continue;
                        Address tgt = currentProgram.getAddressFactory()
                                .getAddressSpace("ram")
                                .getAddress(String.format("%04x:%04x", seg, off));
                        Function f = getFunctionContaining(tgt);
                        w.printf("      slot %-3d -> %04x:%04x  %s%n", k, seg, off,
                                 f == null ? "(pas une fonction connue)" : f.getName());
                    } catch (Exception ignored) { }
                }
                w.println();
            }
        }
        w.println("classes localisees : " + located + "/" + classes.size());
        w.close();
        println("vmt.txt ecrit, " + located + " classes localisees");
    }
}

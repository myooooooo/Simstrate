// Rename functions from the Delphi published-method map (segment:offset  Class.Method).
// @category Simstrat
import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.listing.Function;
import ghidra.program.model.symbol.SourceType;
import java.io.*;
import java.util.*;

public class ApplyNames extends GhidraScript {
    @Override
    public void run() throws Exception {
        File map = new File(getScriptArgs()[0]);
        int renamed = 0, created = 0, missed = 0;
        BufferedReader r = new BufferedReader(new FileReader(map));
        String line;
        while ((line = r.readLine()) != null) {
            line = line.trim();
            if (line.isEmpty() || line.startsWith("#")) continue;
            String[] parts = line.split("\\s+");
            if (parts.length < 2) continue;
            Address a;
            try {
                a = currentProgram.getAddressFactory().getAddress(parts[0]);
            } catch (Exception e) { missed++; continue; }
            if (a == null) { missed++; continue; }
            String name = parts[1].replace('.', '_');
            Function f = getFunctionAt(a);
            if (f == null) {
                f = createFunction(a, name);
                if (f != null) created++;
            }
            if (f == null) { missed++; continue; }
            f.setName(name, SourceType.IMPORTED);
            renamed++;
        }
        r.close();
        println("renommees=" + renamed + " creees=" + created + " echecs=" + missed);
    }
}

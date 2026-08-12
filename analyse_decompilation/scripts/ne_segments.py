#!/usr/bin/env python3
"""Extract the code/data segments of a 16-bit NE executable."""
import struct, sys, os

def segments(path):
    d = open(path, "rb").read()
    ne = struct.unpack_from("<I", d, 0x3C)[0]
    cseg = struct.unpack_from("<H", ne + 0x1C, 0)[0] if False else struct.unpack_from("<H", d, ne + 0x1C)[0]
    segtab = struct.unpack_from("<H", d, ne + 0x22)[0]
    align = struct.unpack_from("<H", d, ne + 0x32)[0] or 9
    base = ne + segtab
    out = []
    for i in range(cseg):
        off, ln, flags, minalloc = struct.unpack_from("<HHHH", d, base + i * 8)
        filepos = off << align
        length = ln if ln else 0x10000
        kind = "DATA" if (flags & 0x0001) else "CODE"
        out.append(dict(index=i + 1, filepos=filepos, length=length,
                        flags=flags, kind=kind,
                        data=d[filepos:filepos + length] if off else b""))
    return out

if __name__ == "__main__":
    path = sys.argv[1]
    outdir = sys.argv[2] if len(sys.argv) > 2 else None
    segs = segments(path)
    tot_code = tot_data = 0
    print(f"{'seg':>4} {'type':>5} {'offset':>9} {'taille':>8}  flags")
    for s in segs:
        print(f"{s['index']:>4} {s['kind']:>5} {s['filepos']:>9} {s['length']:>8}  {s['flags']:#06x}")
        if s["kind"] == "CODE": tot_code += s["length"]
        else: tot_data += s["length"]
        if outdir:
            os.makedirs(outdir, exist_ok=True)
            with open(f"{outdir}/seg{s['index']:02d}_{s['kind']}.bin", "wb") as f:
                f.write(s["data"])
    print(f"\ntotal CODE = {tot_code} octets, total DATA = {tot_data} octets")

#!/usr/bin/env python3
"""Extract RT_BITMAP / RT_ICON resources from a 16-bit NE file as .bmp images."""
import struct, sys, os

RT = {0x8001: "cursor", 0x8002: "bitmap", 0x8003: "icon",
      0x8004: "menu", 0x8005: "dialog", 0x8006: "string",
      0x800A: "rcdata", 0x800E: "groupicon", 0x8010: "version"}

def resources(path):
    d = open(path, "rb").read()
    ne = struct.unpack_from("<I", d, 0x3C)[0]
    rsrctab = ne + struct.unpack_from("<H", d, ne + 0x24)[0]
    shift = struct.unpack_from("<H", d, rsrctab)[0]
    p = rsrctab + 2
    while True:
        type_id, count, _ = struct.unpack_from("<HHI", d, p)
        if type_id == 0:
            break
        p += 8
        tname = RT.get(type_id, f"type{type_id:04x}")
        for _ in range(count):
            off, ln, flags, rid, _h, _u = struct.unpack_from("<HHHHHH", d, p)
            p += 12
            if rid & 0x8000:
                name = f"{rid & 0x7fff}"
            else:
                np = rsrctab + rid
                name = d[np + 1: np + 1 + d[np]].decode("latin-1", "replace")
            yield tname, name, d[off << shift: (off << shift) + (ln << shift)]

def dib_to_bmp(dib):
    """Prepend a BITMAPFILEHEADER to a bare DIB so it becomes a .bmp file."""
    if len(dib) < 40:
        return None
    hdrsize, w, h, planes, bpp = struct.unpack_from("<IiiHH", dib, 0)
    if hdrsize != 40 or bpp not in (1, 4, 8, 16, 24, 32):
        return None
    ncol = struct.unpack_from("<I", dib, 32)[0] or (1 << bpp if bpp <= 8 else 0)
    offbits = 14 + hdrsize + ncol * 4
    return struct.pack("<2sIHHI", b"BM", 14 + len(dib), 0, 0, offbits) + dib

if __name__ == "__main__":
    src, outdir = sys.argv[1], sys.argv[2]
    os.makedirs(outdir, exist_ok=True)
    n = ok = 0
    for tname, name, blob in resources(src):
        if tname not in ("bitmap", "icon", "cursor"):
            continue
        n += 1
        raw = blob[4:] if tname == "cursor" else blob   # cursors carry a hotspot
        bmp = dib_to_bmp(raw)
        if bmp:
            open(f"{outdir}/{tname}_{name}.bmp", "wb").write(bmp)
            ok += 1
    print(f"{ok}/{n} images ecrites dans {outdir}")

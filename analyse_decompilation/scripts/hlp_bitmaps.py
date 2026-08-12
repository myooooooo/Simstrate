#!/usr/bin/env python3
"""Extract the |bmN pictures embedded in a WinHelp file as .bmp images."""
import struct, sys, os
sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
from hlp_parse import Hlp


def cword(d, p):
    """WinHelp compressed unsigned short."""
    b = d[p]
    if b & 1:
        return (struct.unpack_from("<H", d, p)[0] >> 1), p + 2
    return b >> 1, p + 1


def clong(d, p):
    """WinHelp compressed unsigned long."""
    w = struct.unpack_from("<H", d, p)[0]
    if w & 1:
        return (struct.unpack_from("<I", d, p)[0] >> 1), p + 4
    return w >> 1, p + 2


def derun(src, expected):
    """WinHelp RunLen decompression."""
    out = bytearray()
    p = 0
    while p < len(src) and len(out) < expected:
        n = src[p]; p += 1
        if n & 0x80:
            n &= 0x7F
            out += src[p:p + n]; p += n
        else:
            if p >= len(src):
                break
            out += bytes([src[p]]) * n; p += 1
    return bytes(out)


def extract(hlp, name):
    d = hlp.get(name)
    magic, count = struct.unpack_from("<HH", d, 0)
    if magic != 0x706C:
        return None
    off = struct.unpack_from("<I", d, 4)[0]
    ptype, packing = d[off], d[off + 1]
    p = off + 2
    xdpi, p = clong(d, p)
    ydpi, p = clong(d, p)
    planes, p = cword(d, p)
    bitcount, p = cword(d, p)
    width, p = clong(d, p)
    height, p = clong(d, p)
    colorsused, p = clong(d, p)
    colorsimportant, p = clong(d, p)
    datasize, p = clong(d, p)
    hotspotsize, p = clong(d, p)
    compressedoffset = struct.unpack_from("<I", d, p)[0]; p += 4
    hotspotoffset = struct.unpack_from("<I", d, p)[0]; p += 4

    ncol = colorsused or (1 << bitcount if bitcount <= 8 else 0)
    palette = d[p:p + ncol * 4]
    p += ncol * 4
    raw = d[p:p + datasize]

    rowbytes = ((width * bitcount + 31) // 32) * 4
    expected = rowbytes * height
    bits = derun(raw, expected) if packing == 1 else raw
    bits = bits[:expected].ljust(expected, b"\x00")

    dib = struct.pack("<IiiHHIIiiII", 40, width, height, 1, bitcount,
                      0, expected, xdpi * 39, ydpi * 39, ncol, colorsimportant)
    dib += palette + bits
    offbits = 14 + 40 + len(palette)
    bmp = struct.pack("<2sIHHI", b"BM", 14 + len(dib), 0, 0, offbits) + dib
    info = dict(type=ptype, packing=packing, w=width, h=height,
                bpp=bitcount, colors=ncol, packed=len(raw), unpacked=len(bits))
    return bmp, info


if __name__ == "__main__":
    h = Hlp(sys.argv[1])
    outdir = sys.argv[2]
    os.makedirs(outdir, exist_ok=True)
    for name in sorted(n for n in h.files if n.startswith("|bm")):
        r = extract(h, name)
        if not r:
            print(f"{name}: format non reconnu"); continue
        bmp, info = r
        fn = f"{outdir}/aide_{name.strip('|')}.bmp"
        open(fn, "wb").write(bmp)
        print(f"{name}: {info['w']}x{info['h']} {info['bpp']}bpp "
              f"{info['colors']} couleurs, {info['packed']} -> {info['unpacked']} octets"
              f"  -> {os.path.basename(fn)}")

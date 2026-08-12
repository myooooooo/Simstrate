#!/usr/bin/env python3
"""Recover Delphi 1 published-method tables from a 16-bit NE binary.

Layout discovered in Simstrat (FR).EXE:
    [len:byte][ClassName][count:word]  then count entries of
    [code_offset:word][link:word][len:byte][MethodName]
The resulting map  segment:offset -> Class.Method  can be fed to Ghidra.
"""
import sys, struct, re, os
sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
from ne_segments import segments

IDENT = re.compile(rb"^[A-Za-z_][A-Za-z0-9_]*$")

def parse_segment(data):
    out = []
    n = len(data)
    for i in range(n - 4):
        ln = data[i]
        if not (4 <= ln <= 60) or i + 1 + ln + 2 > n:
            continue
        name = data[i + 1:i + 1 + ln]
        if name[:1] != b"T" or not IDENT.match(name):
            continue
        p = i + 1 + ln
        count = struct.unpack_from("<H", data, p)[0]
        if not (1 <= count <= 200):
            continue
        p += 2
        methods, ok = [], True
        for _ in range(count):
            if p + 5 > n:
                ok = False; break
            code, link = struct.unpack_from("<HH", data, p)
            mlen = data[p + 4]
            if not (2 <= mlen <= 60) or p + 5 + mlen > n:
                ok = False; break
            mname = data[p + 5:p + 5 + mlen]
            if not IDENT.match(mname):
                ok = False; break
            methods.append((code, mname.decode("latin-1")))
            p += 5 + mlen
        if ok and methods:
            out.append((name.decode("latin-1"), methods))
    return out

if __name__ == "__main__":
    segs = segments(sys.argv[1])
    total_c = total_m = 0
    rows = []
    for s in segs:
        if s["kind"] != "CODE":
            continue
        for cls, methods in parse_segment(s["data"]):
            total_c += 1
            for code, m in methods:
                total_m += 1
                # Ghidra block selectors are 0x1000 + (index-1)*8
                sel = 0x1000 + (s["index"] - 1) * 8
                rows.append((f"{sel:04x}:{code:04x}", f"{cls}.{m}"))
    for addr, name in rows:
        print(f"{addr}  {name}")
    print(f"\n# {total_c} classes, {total_m} methodes publiees", file=sys.stderr)

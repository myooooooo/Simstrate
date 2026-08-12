#!/usr/bin/env python3
"""Minimal NE (New Executable / Win16) header + resource table parser."""
import struct, sys, os

RT_NAMES = {
    0x8001: "RT_CURSOR", 0x8002: "RT_BITMAP", 0x8003: "RT_ICON",
    0x8004: "RT_MENU", 0x8005: "RT_DIALOG", 0x8006: "RT_STRING",
    0x8007: "RT_FONTDIR", 0x8008: "RT_FONT", 0x8009: "RT_ACCELERATOR",
    0x800A: "RT_RCDATA", 0x800B: "RT_MESSAGETABLE", 0x800C: "RT_GROUP_CURSOR",
    0x800E: "RT_GROUP_ICON", 0x8010: "RT_VERSION",
}

def parse(path):
    data = open(path, "rb").read()
    if data[:2] != b"MZ":
        print("Not an MZ/NE file"); return
    e_lfanew = struct.unpack_from("<I", data, 0x3C)[0]
    if data[e_lfanew:e_lfanew+2] != b"NE":
        print("Not NE at", hex(e_lfanew)); return
    ne = e_lfanew
    (magic, ver, rev, enttab, cbenttab, crc, flags, autodata, heap, stack,
     csip, sssp, cseg, cmod, cbnrestab, segtab, rsrctab, restab, modtab,
     imptab, nrestab, cmovent, align, cres, exetyp, flagsother, pretthunks,
     psegrefbytes, swaparea, expver) = struct.unpack_from(
        "<2sBBHHIHHHHIIHHHHHHHHIHHHBBHHHH", data, ne)

    print(f"== NE header ({path}) ==")
    print(f"Linker version: {ver}.{rev}")
    print(f"Segments: {cseg}   Module refs: {cmod}   Resource segs: {cres}")
    print(f"Auto data segment index: {autodata}")
    print(f"Expected Windows version: {expver >> 8}.{expver & 0xff}")
    print(f"Target OS byte: {exetyp} (2=Windows)")
    print(f"Entry point CS:IP = seg#{csip & 0xffff}:{csip >> 16 & 0xffff}" if False else "")

    # Resident name table (module name + exported entry names)
    restab_off = ne + restab
    print("\n== Resident-name table (module name + exported names) ==")
    off = restab_off
    first = True
    while True:
        ln = data[off]
        if ln == 0:
            break
        name = data[off+1:off+1+ln].decode("latin-1")
        ordv = struct.unpack_from("<H", data, off+1+ln)[0]
        label = "MODULE NAME" if first else f"ordinal {ordv}"
        print(f"  [{label}] {name!r}")
        first = False
        off += 1 + ln + 2

    # Module reference table -> imported DLL names (via imptab)
    modtab_off = ne + modtab
    imptab_off = ne + imptab
    print("\n== Imported module (DLL) references ==")
    mod_offsets = struct.unpack_from(f"<{cmod}H", data, modtab_off)
    for i, name_off in enumerate(mod_offsets):
        p = imptab_off + name_off
        ln = data[p]
        name = data[p+1:p+1+ln].decode("latin-1", "replace")
        print(f"  [{i+1}] {name}")

    # Resource table
    rsrctab_off = ne + rsrctab
    print(f"\n== Resource table (offset {hex(rsrctab_off)}) ==")
    if rsrctab_off == ne:
        print("  (no resource table / empty)")
        return
    align_shift = struct.unpack_from("<H", data, rsrctab_off)[0]
    p = rsrctab_off + 2
    rcdata_entries = []
    while True:
        type_id, count, reserved = struct.unpack_from("<HHI", data, p)
        if type_id == 0:
            break
        p += 8
        if type_id & 0x8000:
            tname = RT_NAMES.get(type_id, f"0x{type_id:04x}")
        else:
            # offset to a length-prefixed name string, relative to rsrctab_off
            np = rsrctab_off + type_id
            ln = data[np]
            tname = data[np+1:np+1+ln].decode("latin-1", "replace")
        print(f"  Type {tname}: {count} resource(s)")
        for _ in range(count):
            roff, rlen, rflags, rid, rhandle, rusage = struct.unpack_from("<HHHHHH", data, p)
            p += 12
            if rid & 0x8000:
                rname = f"#{rid & 0x7fff}"
            else:
                np = rsrctab_off + rid
                ln = data[np]
                rname = data[np+1:np+1+ln].decode("latin-1", "replace")
            real_off = roff << align_shift
            real_len = rlen << align_shift
            print(f"      - id={rname:<20} offset={hex(real_off):<10} size={real_len}")
            if tname == "RT_RCDATA":
                rcdata_entries.append((rname, real_off, real_len))
    return rcdata_entries

if __name__ == "__main__":
    parse(sys.argv[1])

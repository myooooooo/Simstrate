#!/usr/bin/env python3
"""Paradox .DB schema reader: dumps table name, field names and types."""
import struct, sys, os

TYPES = {
    0x01: "Alpha", 0x02: "Date", 0x03: "Short", 0x04: "Long", 0x05: "Currency",
    0x06: "Number", 0x09: "Logical", 0x0C: "Memo", 0x0D: "BLOB",
    0x0E: "FmtMemo", 0x0F: "OLE", 0x10: "Graphic", 0x14: "Time",
    0x15: "Timestamp", 0x16: "AutoInc", 0x17: "BCD", 0x18: "Bytes",
}

def read_header(path):
    d = open(path, "rb").read()
    recordsize, headersize = struct.unpack_from("<HH", d, 0)
    filetype = d[4]
    numrecords = struct.unpack_from("<i", d, 6)[0]
    numfields, keyfields = struct.unpack_from("<hh", d, 0x21)
    versionid = d[0x39]

    fi = 0x78 if versionid >= 0x05 else 0x58
    fields = []
    for i in range(numfields):
        ftype, fsize = struct.unpack_from("<BB", d, fi + 2 * i)
        fields.append([ftype, fsize, None])

    # pointer array: 1 table-name ptr + numfields field-name ptrs
    p = fi + 2 * numfields + 4 * (numfields + 1)
    end = d.index(b"\x00", p)
    tablename = d[p:end].decode("latin-1", "replace")
    p = end + 1
    while d[p] == 0:            # skip padding of the fixed-size name area
        p += 1
    for f in fields:
        end = d.index(b"\x00", p)
        f[2] = d[p:end].decode("latin-1", "replace")
        p = end + 1
    return {"path": path, "table": tablename, "records": numrecords,
            "recordsize": recordsize, "numfields": numfields,
            "keyfields": keyfields, "version": versionid, "fields": fields}

def dump(h):
    print(f"### {os.path.basename(h['path'])}  (table '{h['table']}')")
    print(f"    {h['records']} enreg. | {h['numfields']} champs | "
          f"{h['keyfields']} champ(s) clé | taille enreg. {h['recordsize']}")
    for i, (t, s, n) in enumerate(h["fields"], 1):
        key = "  [CLE]" if i <= h["keyfields"] else ""
        print(f"      {i:3d}. {n:<26} {TYPES.get(t, hex(t)):<9} ({s}){key}")
    print()

if __name__ == "__main__":
    for path in sys.argv[1:]:
        try:
            dump(read_header(path))
        except Exception as e:
            print(f"### {os.path.basename(path)}: ERREUR ({e})\n")

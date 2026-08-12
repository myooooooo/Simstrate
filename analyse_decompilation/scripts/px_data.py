#!/usr/bin/env python3
"""Paradox .DB record reader (data blocks + field decoding)."""
import struct, sys, os, datetime
sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
from px_schema import read_header

def dec_long(b):
    if b == b"\x00" * 4:
        return None
    return struct.unpack(">i", bytes([b[0] ^ 0x80]) + b[1:])[0]

def dec_short(b):
    if b == b"\x00" * 2:
        return None
    return struct.unpack(">h", bytes([b[0] ^ 0x80]) + b[1:])[0]

def dec_double(b):
    if b == b"\x00" * 8:
        return None
    if b[0] & 0x80:
        # positive: the sign bit was set on storage, clear it to get the IEEE bits
        return struct.unpack(">d", bytes([b[0] & 0x7F]) + b[1:])[0]
    # negative: every bit was inverted on storage; undoing that restores the
    # original IEEE double, sign bit included — so do NOT negate again.
    return struct.unpack(">d", bytes(x ^ 0xFF for x in b))[0]

def dec_date(b):
    v = dec_long(b)
    if v is None:
        return None
    try:
        return (datetime.date(1, 1, 1) + datetime.timedelta(days=v - 1)).isoformat()
    except Exception:
        return f"<date {v}>"

def dec_logical(b):
    if b[0] == 0:
        return None
    return bool(b[0] & 0x01)

def dec_alpha(b):
    return b.split(b"\x00")[0].decode("latin-1", "replace").rstrip()

def dec_bcd(b, decimals, raw=False):
    if raw:
        return b.hex()
    if all(x == 0 for x in b):
        return None
    neg = not (b[0] & 0x80)
    body = b[1:]
    if neg:
        # negative values store each nibble complemented to 0xF
        body = bytes(x ^ 0xFF for x in body)
    digits = []
    for byte in body:
        digits.append(byte >> 4)
        digits.append(byte & 0x0F)
    if any(d > 9 for d in digits):
        return f"<bcd {b.hex()}>"
    val = int("".join(str(d) for d in digits)) / (10 ** decimals)
    return -val if neg else val

SIZE_ON_DISK = {0x01: None, 0x02: 4, 0x03: 2, 0x04: 4, 0x05: 8,
                0x06: 8, 0x09: 1, 0x14: 4, 0x15: 8, 0x16: 4, 0x17: 17}

def field_disk_size(ftype, fsize):
    s = SIZE_ON_DISK.get(ftype)
    return fsize if s is None else s

def read_records(path, raw_bcd=False, limit=None):
    h = read_header(path)
    d = open(path, "rb").read()
    blocksize = d[0x05] * 1024
    recsize = h["recordsize"]
    rows = []
    off = h["recordsize"] and struct.unpack_from("<H", d, 2)[0]  # headersize
    pos = off
    while pos + 6 <= len(d):
        nxt, prv, adds = struct.unpack_from("<hhh", d, pos)
        n = adds // recsize + 1
        if adds < 0 or n <= 0:
            pos += blocksize
            continue
        for i in range(n):
            rp = pos + 6 + i * recsize
            if rp + recsize > len(d):
                break
            rec = d[rp:rp + recsize]
            fp, row = 0, {}
            for ftype, fsize, fname in h["fields"]:
                dsz = field_disk_size(ftype, fsize)
                raw = rec[fp:fp + dsz]; fp += dsz
                if ftype == 0x01:   v = dec_alpha(raw)
                elif ftype == 0x02: v = dec_date(raw)
                elif ftype == 0x03: v = dec_short(raw)
                elif ftype == 0x04: v = dec_long(raw)
                elif ftype == 0x06: v = dec_double(raw)
                elif ftype == 0x09: v = dec_logical(raw)
                elif ftype == 0x17: v = dec_bcd(raw, fsize, raw_bcd)
                else:               v = raw.hex()
                row[fname] = v
            rows.append(row)
            if limit and len(rows) >= limit:
                return h, rows
        pos += blocksize
    return h, rows

if __name__ == "__main__":
    raw = "--raw" in sys.argv
    args = [a for a in sys.argv[1:] if not a.startswith("--")]
    for path in args:
        h, rows = read_records(path, raw_bcd=raw)
        print(f"=== {os.path.basename(path)} : {len(rows)} enregistrements lus "
              f"(entête annonce {h['records']}) ===")
        for r in rows:
            print("  " + "  ".join(f"{k}={v}" for k, v in r.items() if v is not None))
        print()

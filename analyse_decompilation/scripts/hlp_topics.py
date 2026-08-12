#!/usr/bin/env python3
"""Extract topic titles and topic text from an uncompressed WinHelp 3.x file."""
import struct, sys, os, re
sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
from hlp_parse import Hlp


def btree_entries(data):
    """Yield (key, values...) for any WinHelp internal B+ tree file."""
    pagesize = struct.unpack_from("<H", data, 4)[0]
    structure = data[6:22].split(bytes([0]))[0].decode("latin-1")
    root, negone, totpages, nlevels = struct.unpack_from("<hhhh", data, 26)
    pages_off = 38

    def read_field(code, p):
        if code == "z":
            end = data.index(b"\x00", p)
            return data[p:end].decode("latin-1", "replace"), end + 1
        if code in ("L", "4"):
            return struct.unpack_from("<i", data, p)[0], p + 4
        if code in ("2", "i"):
            return struct.unpack_from("<h", data, p)[0], p + 2
        raise ValueError(f"structure code {code!r} non gere")

    # descend to leftmost leaf
    page = root
    for _ in range(nlevels - 1):
        p = pages_off + page * pagesize
        page = struct.unpack_from("<h", data, p + 4)[0]   # PreviousPage = first child

    while page != -1:
        p = pages_off + page * pagesize
        _unused, nent, prev, nxt = struct.unpack_from("<hhhh", data, p)
        q = p + 8
        for _ in range(nent):
            row = []
            for code in structure:
                v, q = read_field(code, q)
                row.append(v)
            yield row
        page = nxt


def topic_records(topic):
    """Yield (offset, recordtype, data1, data2) for every TOPICLINK.

    |TOPIC is a series of 4096-byte blocks each starting with a 12-byte
    TOPICBLOCKHEADER, but a TOPICLINK may straddle a block boundary. So the
    block payloads are concatenated into one continuous stream first.
    """
    BLOCK, HDR = 4096, 12
    payload = BLOCK - HDR
    stream = b"".join(topic[b:b + BLOCK][HDR:]
                      for b in range(0, len(topic), BLOCK))
    p = 0
    while p + 21 <= len(stream):
        blocksize, datalen2, prev, nxt, datalen1 = struct.unpack_from("<iiiii", stream, p)
        if blocksize <= 21 or p + blocksize > len(stream) or datalen1 < 21:
            # end-of-block zero padding: resume at the next block boundary
            nxt_b = ((p // payload) + 1) * payload
            if nxt_b <= p or nxt_b + 21 > len(stream):
                break
            p = nxt_b
            continue
        rectype = stream[p + 20]
        d1 = stream[p + 21: p + datalen1]
        d2 = stream[p + datalen1: p + blocksize]
        yield p, rectype, d1, d2
        p += blocksize


def clean_text(raw):
    """Turn a topic's Data2 byte soup into readable lines."""
    parts = [s.decode("cp1252", "replace") for s in raw.split(b"\x00")]
    out = []
    for s in parts:
        s = "".join(ch for ch in s if ch >= " " or ch == "\t")
        if s.strip():
            out.append(s)
    return out


if __name__ == "__main__":
    h = Hlp(sys.argv[1])

    titles = {}
    for off, title in btree_entries(h.get("|TTLBTREE")):
        titles[off] = title

    print(f"== {len(titles)} rubriques d'aide ==\n")
    for off in sorted(titles):
        print(f"  [{off:>8}] {titles[off]}")

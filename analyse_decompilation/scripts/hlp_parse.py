#!/usr/bin/env python3
"""WinHelp 3.x (.HLP) reader: internal-file directory + topic text extraction."""
import struct, sys, os

class Hlp:
    def __init__(self, path):
        self.d = open(path, "rb").read()
        magic, self.dirstart, self.free, self.total = struct.unpack_from("<iiii", self.d, 0)
        if magic != 0x00035F3F:
            raise ValueError("not a WinHelp 3.x file")
        self.files = {}
        self._read_dir()

    def _file_data(self, off):
        """Return the payload of the internal file whose FILEHEADER is at off."""
        reserved, used, flags = struct.unpack_from("<iiB", self.d, off)
        return self.d[off + 9: off + 9 + used], reserved, used, flags

    def _read_dir(self):
        data, *_ = self._file_data(self.dirstart)
        bmagic = struct.unpack_from("<H", data, 0)[0]
        bver, bflags = data[2], data[3]
        pagesize = struct.unpack_from("<H", data, 4)[0]
        structure = data[6:22].split(b"\x00")[0].decode("latin-1", "replace")
        (zero, splits, root, negone, totpages, nlevels, totent) = \
            struct.unpack_from("<hhhhhhi", data, 22)
        self.btree = dict(magic=hex(bmagic), version=bver, pagesize=pagesize,
                          structure=structure, root=root, totalpages=totpages,
                          nlevels=nlevels, entries=totent)
        pages_off = 38
        # walk down to the leftmost leaf, then follow NextPage links
        page = root
        for _ in range(nlevels - 1):
            p = pages_off + page * pagesize
            nent, pageno = struct.unpack_from("<hh", data, p + 2)
            page = pageno            # first child
        while page != -1:
            p = pages_off + page * pagesize
            unused, nent, prev, nxt = struct.unpack_from("<hhhh", data, p)
            q = p + 8
            for _ in range(nent):
                end = data.index(b"\x00", q)
                name = data[q:end].decode("latin-1", "replace")
                q = end + 1
                (offset,) = struct.unpack_from("<i", data, q); q += 4
                self.files[name] = offset
            page = nxt

    def get(self, name):
        if name not in self.files:
            return None
        return self._file_data(self.files[name])[0]

if __name__ == "__main__":
    h = Hlp(sys.argv[1])
    print("== B-tree ==", h.btree)
    print(f"== {len(h.files)} fichiers internes ==")
    for n, o in sorted(h.files.items(), key=lambda kv: kv[1]):
        data, res, used, flags = h._file_data(o)
        print(f"   {n:<24} offset={o:<8} taille={used}")

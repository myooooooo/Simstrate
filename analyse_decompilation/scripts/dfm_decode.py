#!/usr/bin/env python3
"""Best-effort decoder for classic Delphi 1-7 binary DFM (form resource) streams."""
import struct, sys, os, glob

class ParseError(Exception): pass

def read_shortstr(buf, pos):
    if pos >= len(buf):
        raise ParseError("EOF reading shortstr")
    ln = buf[pos]; pos += 1
    s = buf[pos:pos+ln]; pos += ln
    return s, pos

def read_value(buf, pos):
    if pos >= len(buf):
        raise ParseError("EOF reading value")
    vtype = buf[pos]; pos += 1
    if vtype == 0:
        return None, pos
    if vtype == 1:  # vaList
        vals = []
        while buf[pos] != 0:
            v, pos = read_value(buf, pos)
            vals.append(v)
        pos += 1
        return vals, pos
    if vtype == 2:
        v = struct.unpack_from('<b', buf, pos)[0]; return v, pos+1
    if vtype == 3:
        v = struct.unpack_from('<h', buf, pos)[0]; return v, pos+2
    if vtype == 4:
        v = struct.unpack_from('<i', buf, pos)[0]; return v, pos+4
    if vtype == 5:  # extended 10 bytes
        b = buf[pos:pos+10]; return f"<extended {b.hex()}>", pos+10
    if vtype in (6, 7):  # vaString / vaIdent
        ln = buf[pos]; pos += 1
        s = buf[pos:pos+ln].decode('latin-1'); pos += ln
        return s, pos
    if vtype == 8:
        return False, pos
    if vtype == 9:
        return True, pos
    if vtype == 10:  # vaBinary
        ln = struct.unpack_from('<I', buf, pos)[0]; pos += 4
        b = buf[pos:pos+ln]; pos += ln
        return f"<binary {len(b)} bytes>", pos
    if vtype == 11:  # vaSet
        items = []
        while True:
            ln = buf[pos]; pos += 1
            if ln == 0:
                break
            items.append(buf[pos:pos+ln].decode('latin-1')); pos += ln
        return items, pos
    if vtype == 12:  # vaLString
        ln = struct.unpack_from('<I', buf, pos)[0]; pos += 4
        s = buf[pos:pos+ln].decode('latin-1', 'replace'); pos += ln
        return s, pos
    if vtype == 13:
        return None, pos
    if vtype == 14:  # vaCollection (best-effort: nested prop lists)
        items = []
        while buf[pos] != 0:
            item_props = []
            while True:
                pln = buf[pos]; pos += 1
                if pln == 0:
                    break
                pname = buf[pos:pos+pln].decode('latin-1'); pos += pln
                v, pos = read_value(buf, pos)
                item_props.append((pname, v))
            items.append(item_props)
        pos += 1
        return items, pos
    if vtype == 15:
        v = struct.unpack_from('<f', buf, pos)[0]; return v, pos+4
    if vtype == 16:
        v = struct.unpack_from('<q', buf, pos)[0]; return v/10000.0, pos+8
    if vtype == 17:
        v = struct.unpack_from('<d', buf, pos)[0]; return v, pos+8
    if vtype == 18:  # vaWString
        ln = struct.unpack_from('<I', buf, pos)[0]; pos += 4
        s = buf[pos:pos+ln*2].decode('utf-16-le', 'replace'); pos += ln*2
        return s, pos
    if vtype == 19:
        v = struct.unpack_from('<q', buf, pos)[0]; return v, pos+8
    if vtype == 20:  # vaUTF8String
        ln = struct.unpack_from('<I', buf, pos)[0]; pos += 4
        s = buf[pos:pos+ln].decode('utf-8', 'replace'); pos += ln
        return s, pos
    raise ParseError(f"unknown value type {vtype} at offset {pos-1}")

def parse_component(buf, pos):
    cls, pos = read_shortstr(buf, pos)
    name, pos = read_shortstr(buf, pos)
    props = []
    while True:
        pname, pos = read_shortstr(buf, pos)
        if len(pname) == 0:
            break
        val, pos = read_value(buf, pos)
        props.append((pname.decode('latin-1'), val))
    children = []
    while True:
        if pos >= len(buf) or buf[pos] == 0:
            pos += 1
            break
        child, pos = parse_component(buf, pos)
        children.append(child)
    return {'class': cls.decode('latin-1'), 'name': name.decode('latin-1'),
            'props': props, 'children': children}, pos

def render(comp, indent=0):
    pad = '  ' * indent
    hdr = f"{pad}object {comp['name']}: {comp['class']}" if comp['name'] else f"{pad}object {comp['class']}"
    lines = [hdr]
    for pname, val in comp['props']:
        lines.append(f"{pad}  {pname} = {fmt_val(val)}")
    for child in comp['children']:
        lines.append(render(child, indent+1))
    lines.append(f"{pad}end")
    return '\n'.join(lines)

def fmt_val(v):
    if isinstance(v, str):
        return repr(v)
    if isinstance(v, list):
        return '[' + ', '.join(fmt_val(x) for x in v) + ']'
    return str(v)

def decode_file(path):
    data = open(path, 'rb').read()
    if data[:4] != b'TPF0':
        raise ParseError("missing TPF0 signature")
    comp, pos = parse_component(data, 4)
    return render(comp), pos, len(data)

if __name__ == '__main__':
    for path in sys.argv[1:]:
        name = os.path.basename(path)
        try:
            text, consumed, total = decode_file(path)
            status = "OK" if total - consumed <= 16 else f"PARTIAL (consumed {consumed}/{total})"
            print(f"=== {name}: {status} ===")
            print(text)
            print()
        except Exception as e:
            print(f"=== {name}: FAILED ({e}) ===\n")

#!/usr/bin/env python3
"""Make data/pipeline_seed.bin from pipelines.bin lists kept by the game.

    tools/make_pipeline_seed.py data/pipeline_seed.bin LIST...

A list holds the game's vertex programs, which are the game's code and must
not be published. The seed keeps only each record's GPU settings: surface
format, depth, blend and the register combiner words, with the vertex stage
reduced to "none" (0) or "the interpreter" (1). The program words that follow
each key are skipped, not copied.
"""
import struct
import sys

LIST_MAGIC = b"NV2APL1\0"
SEED_MAGIC = b"NV2APS1\0"
VSH_OFFSET = 7 * 4  # PipeKey.vsh


def keys(path):
    data = open(path, "rb").read()
    if data[:8] != LIST_MAGIC:
        raise SystemExit(f"{path}: not a pipeline list")
    size = struct.unpack_from("<I", data, 8)[0]
    at = 12
    while at + 4 + size + 4 <= len(data):
        n = struct.unpack_from("<I", data, at)[0]
        key = bytearray(data[at + 4:at + 4 + size])
        struct.pack_into("<I", key, VSH_OFFSET, 1 if n else 0)
        yield size, bytes(key)
        at += 4 + size + n * 32 + 4


def main():
    if len(sys.argv) < 3:
        raise SystemExit(__doc__)
    found = {}
    for path in sys.argv[2:]:
        for size, key in keys(path):
            found.setdefault(size, set()).add(key)
    if len(found) != 1:
        raise SystemExit(f"lists of different key sizes: {sorted(found)}")
    size, seed = found.popitem()
    with open(sys.argv[1], "wb") as out:
        out.write(SEED_MAGIC + struct.pack("<I", size))
        for key in sorted(seed):
            out.write(key)
    print(f"{sys.argv[1]}: {len(seed)} keys of {size} bytes")


if __name__ == "__main__":
    main()

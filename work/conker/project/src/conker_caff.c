/*
 * Rare's CAFF packages (aid\zpackage\...\default.rbm): unpacking one with
 * the game's own decompressor.
 *
 * A package is a 0x180-byte header and, from header.data_offset on, each
 * section (.data, then .gpu) stored one after the other. The header holds
 * the section count (+0x3D), a compressed flag (+0x3E) and, per section
 * (0x28 bytes from +0x40), its size unpacked (+0x10) and as stored (+0x24).
 * The game also loads a package stored unpacked: the flag clear, both sizes
 * equal, and the header checksum (+0x14) recomputed.
 *
 * A packed section is a run of blocks {u32 unpacked, u32 stored, bytes}.
 * sub_00416170 (ecx source, edx destination, eax stored size) undoes them,
 * as the asset loader calls it (sub_00063100); a block stored as it is is
 * copied, the rest go through sub_0054AE40 with a 64 KB window. It runs on
 * guest memory, so the sections are copied into a part of guest RAM nothing
 * uses before the game starts.
 *
 * Inside the unpacked .data, at header +0x34, is the table of contents: a
 * name block (u32 size, u32 offset per file, the names), the index of the
 * files' parts (14 bytes each: file, offset in its section, size, section
 * 1 .data or 2 .gpu, log2 of its alignment), two tables Conker leaves empty,
 * the relocations ({u32 source part, target part, count}, parts counted
 * from 1) and the offsets they apply to: on load the target part's address
 * is added to each of those dwords of the source part, so a pointer is
 * stored as an offset into the part it points at. A zpackage's file 1 is
 * its directory: at +0x20 a count, then {name offset, pointer} pairs, each
 * pointer relocated to the part of the resource it names.
 *
 * conker_caff_extract writes one resource of a package, with every part it
 * reaches through relocations, as a loose file of its own: the parts as they
 * are, at their alignment, and a table of contents with the relocations
 * numbered anew. The game loads such a file wherever it would look for the
 * resource on disc (aid\<type>\<name>\default.<ext>).
 *
 * The decompressor's place in another build of the game was published by
 * birdytsc's clr_unpack (github.com/birdytsc/clr_unpack); this is written
 * against the retail build the recompilation is made from.
 */
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "recomp_types.h"

void sub_00416170(void);

#define CAFF_HEADER        0x180u
#define CAFF_SECTIONS_MAX  4u
#define GUEST_SRC          0x04000000u   /* stored section */
#define GUEST_DST          0x05000000u   /* unpacked section */
#define GUEST_END          0x08000000u   /* the 128 MB of RAM */

static uint32_t get32(const uint8_t *p) { uint32_t v; memcpy(&v, p, 4); return v; }
static void put32(uint8_t *p, uint32_t v) { memcpy(p, &v, 4); }

/* The header checksum: an ELF hash of the 0x180 header bytes, taken as
 * signed, with the checksum's own four counted as zero. */
uint32_t conker_caff_checksum(const uint8_t *hdr)
{
    uint32_t c = 0, i;

    for (i = 0; i < CAFF_HEADER; i++) {
        int32_t b = (i >= 0x14 && i < 0x18) ? 0 : (int8_t)hdr[i];
        uint32_t top;
        c = (c << 4) + (uint32_t)b;
        if ((top = c & 0xF0000000u))
            c ^= top | (top >> 24);
    }
    return c;
}

static int read_all(const char *path, uint8_t **data, size_t *size)
{
    FILE *f = fopen(path, "rb");
    long n;

    if (!f)
        return 0;
    if (fseek(f, 0, SEEK_END) || (n = ftell(f)) < 0 || fseek(f, 0, SEEK_SET)
        || !(*data = malloc((size_t)n ? (size_t)n : 1))
        || fread(*data, 1, (size_t)n, f) != (size_t)n) {
        fclose(f);
        return 0;
    }
    fclose(f);
    *size = (size_t)n;
    return 1;
}

/* The package at `in`, unpacked, in a malloc'd buffer (*size bytes).
 * Call with the XBE in guest memory and before the game runs: the sections
 * go through guest RAM. NULL on failure. */
uint8_t *conker_caff_unpack_mem(const char *in, size_t *size_out)
{
    uint8_t *file = NULL, *out = NULL, *hdr;
    size_t size = 0, at, total;
    uint32_t data_off, nsec, i;

    if (!read_all(in, &file, &size) || size < CAFF_HEADER
        || memcmp(file, "CAFF28.01.05.0031", 17)) {
        fprintf(stderr, "[CAFF] %s: not a CAFF28 package\n", in);
        goto fail;
    }
    data_off = get32(file + 0x38);
    nsec = file[0x3D];
    if (conker_caff_checksum(file) != get32(file + 0x14) || nsec > CAFF_SECTIONS_MAX
        || data_off < CAFF_HEADER || data_off > size) {
        fprintf(stderr, "[CAFF] %s: bad header\n", in);
        goto fail;
    }
    if (!file[0x3E]) {                         /* stored unpacked already */
        *size_out = size;
        return file;
    }
    total = data_off;
    for (i = 0; i < nsec; i++)
        total += get32(file + 0x40 + i * 0x28 + 0x10);
    if (!(out = malloc(total)))
        goto fail;
    memcpy(out, file, data_off);
    hdr = out;
    at = data_off;
    total = data_off;
    for (i = 0; i < nsec; i++) {
        uint8_t *sec = hdr + 0x40 + i * 0x28;
        uint32_t usize = get32(sec + 0x10), csize = get32(sec + 0x24);

        if (csize > size - at || csize > GUEST_DST - GUEST_SRC
            || usize > GUEST_END - GUEST_DST) {
            fprintf(stderr, "[CAFF] %s: section %u does not fit (%u -> %u)\n", in, i,
                    csize, usize);
            goto fail;
        }
        memcpy((uint8_t *)XBOX_PTR(GUEST_SRC), file + at, csize);
        memset((uint8_t *)XBOX_PTR(GUEST_DST), 0, usize);
        MEM32(0x84BE2C) = 0x630A0u;        /* as sub_00063100 sets them */
        MEM32(0x84BE30) = 0x630C0u;
        MEM32(0x84BE38) = 1u;
        g_ecx = GUEST_SRC;
        g_edx = GUEST_DST;
        g_eax = csize;
        PUSH32(g_esp, 0u);                  /* return address, popped by ret */
        sub_00416170();
        MEM32(0x84BE38) = 0u;
        memcpy(out + total, (uint8_t *)XBOX_PTR(GUEST_DST), usize);
        put32(sec + 0x24, usize);
        at += csize;
        total += usize;
    }
    hdr[0x3E] = 0;
    put32(hdr + 0x14, conker_caff_checksum(hdr));
    free(file);
    *size_out = total;
    return out;

fail:
    free(file);
    free(out);
    return NULL;
}

static int write_all(const char *path, const void *data, size_t size)
{
    FILE *f = fopen(path, "wb");
    int ok = f && fwrite(data, 1, size, f) == size;
    if (f && fclose(f))
        ok = 0;
    return ok;
}

/* Unpack the package at `in` into `out`. Returns 0 on success. */
int conker_caff_unpack(const char *in, const char *out)
{
    size_t size;
    uint8_t *pkg = conker_caff_unpack_mem(in, &size);
    int ok = pkg && write_all(out, pkg, size);

    free(pkg);
    if (!ok)
        fprintf(stderr, "[CAFF] unpacking %s failed\n", in);
    return ok ? 0 : 1;
}

/* ── One resource as a loose file ─────────────────────────────────────── */

typedef struct { uint32_t file, off, size; uint8_t sec, align; } Part;

static Part part_at(const uint8_t *p)
{
    Part r;
    r.file = get32(p);
    r.off = get32(p + 4);
    r.size = get32(p + 8);
    r.sec = p[12];
    r.align = p[13];
    return r;
}

static void grow(uint8_t **buf, size_t *len, size_t *cap, const void *src, size_t n)
{
    if (*len + n > *cap) {
        *cap = (*len + n) * 2 + 4096;
        *buf = realloc(*buf, *cap);
    }
    if (src)
        memcpy(*buf + *len, src, n);
    else
        memset(*buf + *len, 0, n);
    *len += n;
}

static void pad_to(uint8_t **buf, size_t *len, size_t *cap, size_t a)
{
    size_t want = (*len + a - 1) & ~(a - 1);
    grow(buf, len, cap, NULL, want - *len);
}

/* Write the resource `name` (as the package's directory names it, e.g.
 * "aid\\bfdmodel\\attach\\FryingPanBound\\default.rbm") of the unpacked
 * package `pkg` to `out`. Returns 0 on success. */
int conker_caff_extract(const uint8_t *pkg, size_t size, const char *name, const char *out)
{
    const uint8_t *data, *gpu, *p;
    uint32_t data_off, dsize, gsize, toc, nfiles, nparts, ntab1, ntab2, nrel, nroff;
    uint32_t i, k, start = 0, nsel = 0, nf = 0;
    const uint8_t *index, *rel, *roff;
    uint32_t *sel = NULL, *files = NULL, *newpart = NULL, *newfile = NULL, *roff_at = NULL;
    uint8_t *dbuf = NULL, *gbuf = NULL, *tbuf = NULL, hdr[CAFF_HEADER];
    size_t dlen = 0, dcap = 0, glen = 0, gcap = 0, tlen = 0, tcap = 0;
    int ok = 0;

    if (size < CAFF_HEADER || pkg[0x3E] || pkg[0x3D] < 1)
        return 1;
    data_off = get32(pkg + 0x38);
    dsize = get32(pkg + 0x40 + 0x10);
    gsize = pkg[0x3D] > 1 ? get32(pkg + 0x68 + 0x10) : 0;
    if ((size_t)data_off + dsize + gsize > size)
        return 1;
    data = pkg + data_off;
    gpu = data + dsize;
    nfiles = get32(pkg + 0x18);
    nparts = get32(pkg + 0x1C);
    ntab1 = get32(pkg + 0x20);
    ntab2 = get32(pkg + 0x24);
    nrel = get32(pkg + 0x28);
    nroff = get32(pkg + 0x2C);
    toc = get32(pkg + 0x34);
    if (toc + 4 > dsize)
        return 1;
    p = data + toc;
    k = get32(p);                                /* name block */
    p += 4 + (k ? 4 * nfiles : 0) + k;
    index = p;
    p += 14 * nparts + 12 * ntab1 + 4 * ntab2;
    rel = p;
    roff = rel + 12 * nrel;
    if ((size_t)(roff + 4 * nroff - data) > dsize || nparts == 0)
        return 1;

    /* Where each relocation's offsets begin. */
    roff_at = calloc(nrel + 1, sizeof *roff_at);
    sel = calloc(nparts + 1, sizeof *sel);
    newpart = calloc(nparts + 1, sizeof *newpart);
    newfile = calloc(nfiles + 2, sizeof *newfile);
    files = calloc(nfiles + 2, sizeof *files);
    if (!roff_at || !sel || !newpart || !newfile || !files)
        goto done;
    for (i = 0, k = 0; i < nrel; i++) {
        roff_at[i] = k;
        k += get32(rel + 12 * i + 8);
    }
    if (k != nroff)
        goto done;

    /* The directory (file 1): the relocated pointer of the entry named
     * `name` says which part holds the resource. */
    {
        uint32_t n = get32(data + 0x20);
        for (i = 0; i < n && !start; i++) {
            uint32_t no = get32(data + 0x24 + 8 * i), slot = 0x24 + 8 * i + 4, r, j;
            if (no >= dsize || strncmp((const char *)data + no, name, dsize - no))
                continue;
            for (r = 0; r < nrel && !start; r++) {
                if (get32(rel + 12 * r) != 1)
                    continue;
                for (j = 0; j < get32(rel + 12 * r + 8); j++)
                    if (get32(roff + 4 * (roff_at[r] + j)) == slot)
                        start = get32(rel + 12 * r + 4);
            }
        }
    }
    if (!start || start > nparts) {
        fprintf(stderr, "[CAFF] %s is not in the package\n", name);
        goto done;
    }

    /* Every part it reaches, and every part of each file reached. */
    {
        int changed = 1;
        sel[start] = 1;
        while (changed) {
            changed = 0;
            for (i = 1; i <= nparts; i++) {
                if (!sel[i])
                    continue;
                for (k = 1; k <= nparts; k++)
                    if (!sel[k] && part_at(index + 14 * (k - 1)).file == part_at(index + 14 * (i - 1)).file)
                        sel[k] = changed = 1;
                for (k = 0; k < nrel; k++)
                    if (get32(rel + 12 * k) == i && get32(rel + 12 * k + 4) <= nparts
                        && !sel[get32(rel + 12 * k + 4)])
                        sel[get32(rel + 12 * k + 4)] = changed = 1;
            }
        }
    }
    /* Files numbered anew, the resource's first; parts in file order, .data
     * before .gpu. */
    files[nf++] = part_at(index + 14 * (start - 1)).file;
    for (i = 1; i <= nparts; i++) {
        uint32_t f = part_at(index + 14 * (i - 1)).file, j;
        if (!sel[i])
            continue;
        for (j = 0; j < nf && files[j] != f; j++) ;
        if (j == nf)
            files[nf++] = f;
    }
    for (i = 0; i < nf; i++)
        if (files[i] <= nfiles + 1)
            newfile[files[i]] = i + 1;

    /* The parts' bytes, and their index entries. */
    {
        uint8_t ent[14];
        uint32_t fi, sec, i2;
        uint8_t *ibuf = NULL;
        size_t ilen = 0, icap = 0;
        for (fi = 0; fi < nf; fi++)
            for (sec = 1; sec <= 2; sec++)
                for (i2 = 1; i2 <= nparts; i2++) {
                    Part e = part_at(index + 14 * (i2 - 1));
                    uint8_t **b = sec == 1 ? &dbuf : &gbuf;
                    size_t *l = sec == 1 ? &dlen : &glen, *c = sec == 1 ? &dcap : &gcap;
                    const uint8_t *src = sec == 1 ? data : gpu;
                    uint32_t lim = sec == 1 ? dsize : gsize;
                    if (!sel[i2] || e.file != files[fi] || e.sec != sec)
                        continue;
                    if ((uint64_t)e.off + e.size > lim || e.align > 12)
                        goto done;
                    pad_to(b, l, c, (size_t)1 << e.align);
                    put32(ent, fi + 1);
                    put32(ent + 4, (uint32_t)*l);
                    put32(ent + 8, e.size);
                    ent[12] = e.sec;
                    ent[13] = e.align;
                    grow(&ibuf, &ilen, &icap, ent, 14);
                    grow(b, l, c, src + e.off, e.size);
                    newpart[i2] = ++nsel;
                }
        pad_to(&dbuf, &dlen, &dcap, 4);
        toc = (uint32_t)dlen;

        /* Names: one per file, as the loose files carry them. */
        {
            char nm[64];
            uint8_t *nb = NULL;
            size_t nlen = 0, ncap = 0;
            uint32_t *offs = calloc(nf, sizeof *offs);
            if (!offs) {
                free(ibuf);
                goto done;
            }
            for (fi = 0; fi < nf; fi++) {
                offs[fi] = (uint32_t)nlen;
                snprintf(nm, sizeof nm, fi ? "C:\\Temp\\part%u.bin" : "resource.bin", files[fi]);
                grow(&nb, &nlen, &ncap, fi ? nm : name, strlen(fi ? nm : name) + 1);
            }
            put32(ent, (uint32_t)nlen);
            grow(&tbuf, &tlen, &tcap, ent, 4);
            for (fi = 0; fi < nf; fi++) {
                put32(ent, offs[fi]);
                grow(&tbuf, &tlen, &tcap, ent, 4);
            }
            grow(&tbuf, &tlen, &tcap, nb, nlen);
            free(nb);
            free(offs);
        }
        grow(&tbuf, &tlen, &tcap, ibuf, ilen);
        free(ibuf);
    }

    /* The relocations among the parts taken, numbered anew. */
    {
        uint8_t e[12];
        uint32_t nr = 0, no = 0;
        uint8_t *ob = NULL;
        size_t olen = 0, ocap = 0;
        for (i = 0; i < nrel; i++) {
            uint32_t s2 = get32(rel + 12 * i), t2 = get32(rel + 12 * i + 4), n2 = get32(rel + 12 * i + 8);
            if (s2 > nparts || !newpart[s2])
                continue;
            if (t2 > nparts || !newpart[t2]) {
                free(ob);
                goto done;                       /* the closure is incomplete */
            }
            put32(e, newpart[s2]);
            put32(e + 4, newpart[t2]);
            put32(e + 8, n2);
            grow(&tbuf, &tlen, &tcap, e, 12);
            grow(&ob, &olen, &ocap, roff + 4 * roff_at[i], 4 * (size_t)n2);
            nr++;
            no += n2;
        }
        grow(&tbuf, &tlen, &tcap, ob, olen);
        free(ob);
        grow(&dbuf, &dlen, &dcap, tbuf, tlen);
        pad_to(&dbuf, &dlen, &dcap, 4);
        pad_to(&gbuf, &glen, &gcap, 128);

        memcpy(hdr, pkg, CAFF_HEADER);
        put32(hdr + 0x18, nf);
        put32(hdr + 0x1C, nsel);
        put32(hdr + 0x20, 0);
        put32(hdr + 0x24, 0);
        put32(hdr + 0x28, nr);
        put32(hdr + 0x2C, no);
        put32(hdr + 0x30, 0);
        put32(hdr + 0x34, toc);
        put32(hdr + 0x38, CAFF_HEADER);
        hdr[0x3D] = glen ? 2 : 1;
        hdr[0x3E] = 0;
        for (i = 0; i < CAFF_SECTIONS_MAX; i++) {
            uint8_t *sec = hdr + 0x40 + 0x28 * i;
            if (i >= hdr[0x3D]) {
                memset(sec, 0, 0x28);
                continue;
            }
            put32(sec + 0x0C, 0);
            put32(sec + 0x10, (uint32_t)(i ? glen : dlen));
            put32(sec + 0x24, (uint32_t)(i ? glen : dlen));
        }
        put32(hdr + 0x14, conker_caff_checksum(hdr));
    }
    {
        FILE *f = fopen(out, "wb");
        ok = f && fwrite(hdr, 1, CAFF_HEADER, f) == CAFF_HEADER
           && fwrite(dbuf, 1, dlen, f) == dlen && (!glen || fwrite(gbuf, 1, glen, f) == glen);
        if (f && fclose(f))
            ok = 0;
    }
    if (ok)
        fprintf(stderr, "[CAFF] %s: %u files, %u parts written to %s\n", name, nf, nsel, out);

done:
    free(roff_at);
    free(sel);
    free(newpart);
    free(newfile);
    free(files);
    free(dbuf);
    free(gbuf);
    free(tbuf);
    return ok ? 0 : 1;
}

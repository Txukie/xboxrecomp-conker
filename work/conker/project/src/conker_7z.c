/*
 * A .7z archive unpacked into a folder, with the LZMA SDK's decoder
 * (third_party/lzma-sdk, public domain), for the Uncensor download
 * (conker_mods.c): Wine and Proton have no tar.exe or 7-Zip to run, and
 * this way no host needs them for it.
 *
 * The SDK decodes a whole solid block into memory before handing out its
 * files: the mod's blocks are a few hundred MB, which a 64-bit process can
 * hold. Names are checked before anything is written: no absolute paths,
 * no drive letters, no ".." -- every file lands inside the folder.
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>

#include "7z.h"
#include "7zAlloc.h"
#include "7zCrc.h"
#include "7zFile.h"

#if defined(_WIN32)
#include <windows.h>
#include <direct.h>
#endif

#define IN_BUF_SIZE ((size_t)1 << 18)

static void *alloc(ISzAllocPtr p, size_t size) { (void)p; return size ? malloc(size) : NULL; }
static void dealloc(ISzAllocPtr p, void *a) { (void)p; free(a); }
static const ISzAlloc s_alloc = { alloc, dealloc };

/* UTF-16 from the archive to UTF-8; 0 when it does not fit. */
static int to_utf8(const UInt16 *w, char *out, size_t size)
{
    size_t n = 0;
    for (; *w; w++) {
        unsigned c = *w;
        if (c >= 0xD800 && c < 0xDC00 && w[1] >= 0xDC00 && w[1] < 0xE000) {
            c = 0x10000 + ((c - 0xD800) << 10) + (w[1] - 0xDC00);
            w++;
        }
        if (n + 5 >= size)
            return 0;
        if (c < 0x80) {
            out[n++] = (char)c;
        } else if (c < 0x800) {
            out[n++] = (char)(0xC0 | c >> 6);
            out[n++] = (char)(0x80 | (c & 0x3F));
        } else if (c < 0x10000) {
            out[n++] = (char)(0xE0 | c >> 12);
            out[n++] = (char)(0x80 | (c >> 6 & 0x3F));
            out[n++] = (char)(0x80 | (c & 0x3F));
        } else {
            out[n++] = (char)(0xF0 | c >> 18);
            out[n++] = (char)(0x80 | (c >> 12 & 0x3F));
            out[n++] = (char)(0x80 | (c >> 6 & 0x3F));
            out[n++] = (char)(0x80 | (c & 0x3F));
        }
    }
    out[n] = 0;
    return 1;
}

/* A name inside the archive that stays inside the folder, with '/'. */
static int safe_name(char *name)
{
    char *p, *seg;
    for (p = name; *p; p++)
        if (*p == '\\')
            *p = '/';
    if (name[0] == '/' || !name[0] || strchr(name, ':'))
        return 0;
    for (seg = name; seg; seg = strchr(seg, '/') ? strchr(seg, '/') + 1 : NULL)
        if (seg[0] == '.' && seg[1] == '.' && (seg[2] == '/' || seg[2] == 0))
            return 0;
    return 1;
}

#if defined(_WIN32)
static int wide(const char *utf8, wchar_t *out, int n)
{
    return MultiByteToWideChar(CP_UTF8, 0, utf8, -1, out, n) > 0;
}

static void make_dir(const char *p)
{
    wchar_t w[4200];
    if (wide(p, w, 4200))
        _wmkdir(w);
}

static FILE *open_out(const char *p)
{
    wchar_t w[4200];
    return wide(p, w, 4200) ? _wfopen(w, L"wb") : NULL;
}
#else
static void make_dir(const char *p) { mkdir(p, 0755); }
static FILE *open_out(const char *p) { return fopen(p, "wb"); }
#endif

/* Every folder on the way to PATH (not PATH itself). */
static void make_parents(char *path, size_t from)
{
    size_t i;
    for (i = from; path[i]; i++)
        if (path[i] == '/') {
            path[i] = 0;
            make_dir(path);
            path[i] = '/';
        }
}

/* ARCHIVE's files into DIR (which exists). 0, or -1 with a reason in ERR. */
int conker_7z_extract(const char *archive, const char *dir, char *err, size_t err_size)
{
    CFileInStream in;
    CLookToRead2 look;
    CSzArEx db;
    SRes res;
    UInt32 i, block = 0xFFFFFFFF;
    Byte *out_buf = NULL;
    size_t out_size = 0;
    UInt16 *wname = NULL;
    size_t wname_cap = 0;
    int rc = -1;

    snprintf(err, err_size, "%s", "");
    if (InFile_Open(&in.file, archive) != 0) {
        snprintf(err, err_size, "cannot open %s", archive);
        return -1;
    }
    FileInStream_CreateVTable(&in);
    in.wres = 0;
    LookToRead2_CreateVTable(&look, False);
    look.buf = malloc(IN_BUF_SIZE);
    if (!look.buf) {
        File_Close(&in.file);
        snprintf(err, err_size, "%s", "out of memory");
        return -1;
    }
    look.bufSize = IN_BUF_SIZE;
    look.realStream = &in.vt;
    LookToRead2_INIT(&look)
    CrcGenerateTable();
    SzArEx_Init(&db);

    res = SzArEx_Open(&db, &look.vt, &s_alloc, &s_alloc);
    if (res != SZ_OK) {
        snprintf(err, err_size, "not a 7z archive it can read (error %d)", (int)res);
        goto out;
    }
    for (i = 0; i < db.NumFiles; i++) {
        size_t len = SzArEx_GetFileNameUtf16(&db, i, NULL), offset = 0, got = 0;
        char name[2048], path[4400];
        FILE *f;

        if (len > wname_cap) {
            free(wname);
            wname_cap = len;
            wname = malloc(wname_cap * sizeof *wname);
            if (!wname) {
                snprintf(err, err_size, "%s", "out of memory");
                goto out;
            }
        }
        SzArEx_GetFileNameUtf16(&db, i, wname);
        if (!to_utf8(wname, name, sizeof name) || !safe_name(name)) {
            snprintf(err, err_size, "unsafe name in the archive (%s)", name);
            goto out;
        }
        snprintf(path, sizeof path, "%s/%s", dir, name);
        make_parents(path, strlen(dir) + 1);
        if (SzArEx_IsDir(&db, i)) {
            make_dir(path);
            continue;
        }
        res = SzArEx_Extract(&db, &look.vt, i, &block, &out_buf, &out_size,
                             &offset, &got, &s_alloc, &s_alloc);
        if (res != SZ_OK) {
            snprintf(err, err_size, "cannot decode %s (error %d)", name, (int)res);
            goto out;
        }
        if (!(f = open_out(path)) || fwrite(out_buf + offset, 1, got, f) != got) {
            if (f)
                fclose(f);
            snprintf(err, err_size, "cannot write %s", path);
            goto out;
        }
        if (fclose(f) != 0) {
            snprintf(err, err_size, "cannot write %s", path);
            goto out;
        }
    }
    rc = 0;
out:
    free(wname);
    free(out_buf);
    SzArEx_Free(&db, &s_alloc);
    free(look.buf);
    File_Close(&in.file);
    return rc;
}

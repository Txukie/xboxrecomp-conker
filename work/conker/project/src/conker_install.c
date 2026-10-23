/*
 * The game's files: found, checked, and installed from the player's disc
 * image on first launch (conker_install.h).
 *
 * An Xbox disc image is XDVDFS: a volume descriptor at sector 32 of the
 * game partition, then directories stored as binary trees of entries. The
 * game partition starts at 0 in an "XISO" and further in a full disc dump
 * (Redump: after the video partition). Installing unpacks that partition's
 * files into <data>/game.partial and renames it to <data>/game when
 * everything is there and the XBE checks out, so an interrupted install
 * never passes for a game.
 */
#include "conker_install.h"

#include <errno.h>
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>

#if defined(_WIN32)
#include <direct.h>
#include <io.h>
#include <process.h>
#include <windows.h>
#define strcasecmp _stricmp
#define fseeko _fseeki64
#define ftello _ftelli64
typedef __int64 off_type;
static int make_dir(const char *p) { return _mkdir(p); }
#else
#include <dirent.h>
#include <signal.h>
#include <strings.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>
typedef off_t off_type;
static int make_dir(const char *p) { return mkdir(p, 0755); }
#endif

#define XBE_NAME        "default.xbe"
/* The XBE this build was recompiled from: Conker: Live & Reloaded (USA).
 * Its sections' raw bytes, in order, hashed with 64-bit FNV-1a. The header
 * and certificate are left out: a disc patched to boot from a DVD-R
 * changes those and nothing the code depends on. */
#define XBE_SECTIONS    27u
#define XBE_SECTION_FNV 0x8575f739b8e455b0ull

#define SECTOR          2048u
static const char k_media[20] = { 'M','I','C','R','O','S','O','F','T','*',
                                  'X','B','O','X','*','M','E','D','I','A' };
/* Where a game partition can start: an XISO; a Redump dump (after the
 * ~387 MB video partition); and the offsets of two older dump layouts. */
static const uint64_t k_partitions[] = { 0, 0x18300000ull, 0xFD90000ull, 0x30600ull };

static char s_error[1024];
static conker_progress_fn s_progress;
static void *s_progress_ud;
static volatile int s_cancelled;

static void set_error(const char *fmt, ...)
{
    va_list ap;
    va_start(ap, fmt);
    vsnprintf(s_error, sizeof s_error, fmt, ap);
    va_end(ap);
    fprintf(stderr, "[INSTALL] %s\n", s_error);
}

const char *conker_install_error(void) { return s_error; }

void conker_install_set_progress(conker_progress_fn fn, void *ud)
{
    s_progress = fn;
    s_progress_ud = ud;
}

/* ── Files ─────────────────────────────────────────────────────────────── */

static int is_dir(const char *p)
{
    struct stat st;
    return stat(p, &st) == 0 && (st.st_mode & S_IFMT) == S_IFDIR;
}

static int is_file(const char *p)
{
    struct stat st;
    return stat(p, &st) == 0 && (st.st_mode & S_IFMT) == S_IFREG;
}

static int has_xbe(const char *dir)
{
    char p[4200];
    snprintf(p, sizeof p, "%s/" XBE_NAME, dir);
    return is_file(p);
}

static const char *extension(const char *path)
{
    const char *slash = strrchr(path, '/'), *dot = strrchr(path, '.');
    return dot && (!slash || dot > slash) ? dot : "";
}

/* mkdir -p. 0 on success. */
static int make_dirs(const char *path)
{
    char tmp[4200];
    size_t i, len;

    snprintf(tmp, sizeof tmp, "%s", path);
    len = strlen(tmp);
    for (i = 1; i <= len; i++) {
        if (tmp[i] != '/' && tmp[i] != '\\' && tmp[i] != 0)
            continue;
        if (i == 2 && tmp[1] == ':')
            continue;                       /* a drive, "C:" */
        tmp[i] = 0;
        if (make_dir(tmp) != 0 && errno != EEXIST) {
            set_error("Cannot create the folder %s: %s", tmp, strerror(errno));
            return -1;
        }
        if (!is_dir(tmp)) {
            set_error("Cannot create the folder %s: something else is there.", tmp);
            return -1;
        }
        if (i < len)
            tmp[i] = '/';
    }
    return 0;
}

static void remove_tree(const char *path)
{
#if defined(_WIN32)
    char cmd[4400];
    if (!is_dir(path))
        return;
    snprintf(cmd, sizeof cmd, "rmdir /s /q \"%s\"", path);
    system(cmd);
#else
    DIR *d = opendir(path);
    struct dirent *e;
    if (!d) {
        unlink(path);
        return;
    }
    while ((e = readdir(d)) != NULL) {
        char p[4400];
        if (!strcmp(e->d_name, ".") || !strcmp(e->d_name, ".."))
            continue;
        snprintf(p, sizeof p, "%s/%s", path, e->d_name);
        if (is_dir(p))
            remove_tree(p);
        else
            unlink(p);
    }
    closedir(d);
    rmdir(path);
#endif
}

/* ── The XBE check ─────────────────────────────────────────────────────── */

static uint32_t rd32(const unsigned char *p)
{
    return p[0] | (uint32_t)p[1] << 8 | (uint32_t)p[2] << 16 | (uint32_t)p[3] << 24;
}

int conker_check_xbe(const char *dir)
{
    char path[4200];
    unsigned char *xbe;
    long size;
    FILE *f;
    uint32_t base, count, table, i;
    uint64_t h = 0xcbf29ce484222325ull;
    int ok = 1;

    snprintf(path, sizeof path, "%s/" XBE_NAME, dir);
    if (!(f = fopen(path, "rb")))
        return -1;
    fseek(f, 0, SEEK_END);
    size = ftell(f);
    fseek(f, 0, SEEK_SET);
    xbe = size > 0x200 && size < (64l << 20) ? malloc((size_t)size) : NULL;
    if (!xbe || fread(xbe, 1, (size_t)size, f) != (size_t)size) {
        fclose(f);
        free(xbe);
        return 1;
    }
    fclose(f);

    base = rd32(xbe + 0x104);
    count = rd32(xbe + 0x11C);
    table = rd32(xbe + 0x120) - base;
    if (memcmp(xbe, "XBEH", 4) != 0 || count != XBE_SECTIONS
            || (uint64_t)table + count * 56u > (uint64_t)size)
        ok = 0;
    for (i = 0; ok && i < count; i++) {
        const unsigned char *s = xbe + table + i * 56u;
        uint32_t raw = rd32(s + 12), len = rd32(s + 16), k;
        if ((uint64_t)raw + len > (uint64_t)size) {
            ok = 0;
            break;
        }
        for (k = 0; k < len; k++)
            h = (h ^ xbe[raw + k]) * 0x100000001b3ull;
    }
    free(xbe);
    if (ok && h != XBE_SECTION_FNV)
        ok = 0;
    if (!ok)
        fprintf(stderr, "[INSTALL] %s is not the USA Conker: Live & Reloaded this "
                        "build was made from\n", path);
    return ok ? 0 : 1;
}

/* ── XDVDFS ────────────────────────────────────────────────────────────── */

typedef struct {
    FILE *f;
    uint64_t start;                 /* the game partition */
    uint64_t total, done;           /* bytes of file data */
    int counting;                   /* first pass: sizes only */
} Disc;

static int disc_read(Disc *d, uint64_t sector, void *buf, size_t len)
{
    if (fseeko(d->f, (off_type)(d->start + sector * SECTOR), SEEK_SET) != 0)
        return -1;
    return fread(buf, 1, len, d->f) == len ? 0 : -1;
}

static int unpack_file(Disc *d, uint32_t sector, uint32_t size, const char *dest)
{
    static unsigned char buf[1u << 20];
    FILE *out;
    uint32_t left = size;

    if (!(out = fopen(dest, "wb"))) {
        set_error("Cannot write %s: %s", dest, strerror(errno));
        return -1;
    }
    if (fseeko(d->f, (off_type)(d->start + (uint64_t)sector * SECTOR), SEEK_SET) != 0) {
        fclose(out);
        set_error("The disc image cannot be read at sector %u.", sector);
        return -1;
    }
    while (left) {
        size_t chunk = left < sizeof buf ? left : sizeof buf;
        if (s_cancelled) {
            fclose(out);
            set_error("Cancelled.");
            return -1;
        }
        if (fread(buf, 1, chunk, d->f) != chunk) {
            fclose(out);
            set_error("The disc image ends early: the file is damaged or incomplete.");
            return -1;
        }
        if (fwrite(buf, 1, chunk, out) != chunk) {
            fclose(out);
            set_error("Cannot write %s: %s", dest, strerror(errno));
            return -1;
        }
        left -= (uint32_t)chunk;
        d->done += chunk;
        if (s_progress)
            s_progress(d->done, d->total, s_progress_ud);
    }
    if (fclose(out) != 0) {
        set_error("Cannot write %s: %s", dest, strerror(errno));
        return -1;
    }
    return 0;
}

static int unpack_dir(Disc *d, uint32_t sector, uint32_t size, const char *dest, int depth);

/* The entry at byte offset off (a multiple of 4) of a directory's data,
 * then its left and right subtrees. */
static int unpack_entry(Disc *d, const unsigned char *data, uint32_t size,
                        uint32_t off, const char *dest, int depth, int steps)
{
    const unsigned char *e;
    uint16_t left, right;
    uint32_t sector, len;
    unsigned attr, nlen;
    char name[256], path[4400];
    int rc;

    if (steps > 4096 || off + 14 > size)
        return 0;                           /* malformed tree: stop here */
    e = data + off;
    left = (uint16_t)(e[0] | e[1] << 8);
    right = (uint16_t)(e[2] | e[3] << 8);
    if (left == 0xFFFF && right == 0xFFFF)
        return 0;                           /* sector padding */
    sector = rd32(e + 4);
    len = rd32(e + 8);
    attr = e[12];
    nlen = e[13];
    if (nlen == 0 || off + 14 + nlen > size)
        return 0;
    memcpy(name, e + 14, nlen);
    name[nlen] = 0;
    if (strpbrk(name, "/\\:") || !strcmp(name, ".") || !strcmp(name, "..")) {
        set_error("The disc image has an unexpected file name: \"%s\"", name);
        return -1;
    }
    snprintf(path, sizeof path, "%s/%s", dest, name);

    if (left && (rc = unpack_entry(d, data, size, left * 4u, dest, depth, steps + 1)) != 0)
        return rc;
    if (attr & 0x10) {
        if (!d->counting && make_dirs(path) != 0)
            return -1;
        if ((rc = unpack_dir(d, sector, len, path, depth + 1)) != 0)
            return rc;
    } else if (d->counting) {
        d->total += len;
    } else if ((rc = unpack_file(d, sector, len, path)) != 0) {
        return rc;
    }
    if (right && (rc = unpack_entry(d, data, size, right * 4u, dest, depth, steps + 1)) != 0)
        return rc;
    return 0;
}

static int unpack_dir(Disc *d, uint32_t sector, uint32_t size, const char *dest, int depth)
{
    unsigned char *data;
    int rc;

    if (size == 0)
        return 0;
    if (depth > 32 || size > (16u << 20)) {
        set_error("The disc image's folders are damaged.");
        return -1;
    }
    data = malloc(size);
    if (!data || disc_read(d, sector, data, size) != 0) {
        free(data);
        set_error("The disc image cannot be read (a folder at sector %u).", sector);
        return -1;
    }
    rc = unpack_entry(d, data, size, 0, dest, depth, 0);
    free(data);
    return rc;
}

static int unpack_disc(const char *image, const char *dest)
{
    Disc d;
    unsigned char vd[SECTOR];
    size_t i;
    int rc = -1;

    memset(&d, 0, sizeof d);
    if (!(d.f = fopen(image, "rb"))) {
        set_error("Cannot open %s: %s", image, strerror(errno));
        return -1;
    }
    for (i = 0; i < sizeof k_partitions / sizeof k_partitions[0]; i++) {
        d.start = k_partitions[i];
        if (disc_read(&d, 32, vd, sizeof vd) == 0 && !memcmp(vd, k_media, sizeof k_media))
            break;
    }
    if (i == sizeof k_partitions / sizeof k_partitions[0]) {
        fclose(d.f);
        set_error("%s is not an Xbox disc image.", image);
        return -1;
    }
    fprintf(stderr, "[INSTALL] unpacking %s (game partition at 0x%llx)\n", image,
            (unsigned long long)d.start);
    d.counting = 1;
    rc = unpack_dir(&d, rd32(vd + 20), rd32(vd + 24), dest, 0);
    d.counting = 0;
    if (rc == 0 && (rc = make_dirs(dest)) == 0)
        rc = unpack_dir(&d, rd32(vd + 20), rd32(vd + 24), dest, 0);
    fclose(d.f);
    if (rc == 0)
        fprintf(stderr, "[INSTALL] %llu MB unpacked\n", (unsigned long long)(d.done >> 20));
    return rc;
}

/* ── Archives ──────────────────────────────────────────────────────────── */

#if defined(_WIN32)
static HANDLE volatile s_child;
#else
static volatile pid_t s_child;
#endif

void conker_install_cancel(void)
{
    s_cancelled = 1;
#if defined(_WIN32)
    if (s_child)
        TerminateProcess(s_child, 1);
#else
    if (s_child > 0)
        kill(s_child, SIGTERM);
#endif
}

/* Run argv (searched in PATH) with its output discarded; its exit status,
 * or -1 when it could not run. */
static int run(char *const argv[])
{
#if defined(_WIN32)
    intptr_t rc;
    if (s_cancelled)
        return -1;
    rc = _spawnvp(_P_WAIT, argv[0], (const char *const *)argv);
    return (int)rc;
#else
    pid_t pid;
    int status;
    if (s_cancelled)
        return -1;
    pid = fork();
    if (pid == 0) {
        freopen("/dev/null", "w", stdout);
        execvp(argv[0], argv);
        _exit(127);
    }
    if (pid < 0)
        return -1;
    s_child = pid;
    while (waitpid(pid, &status, 0) < 0 && errno == EINTR)
        ;
    s_child = 0;
    return WIFEXITED(status) ? WEXITSTATUS(status) : -1;
#endif
}

/* An archive's contents into dir, with the system's bsdtar (libarchive)
 * or 7-Zip. */
static int unpack_archive(const char *archive, const char *dir)
{
    char opt[4300];
    char *bsdtar[] = { "bsdtar", "-xf", (char *)archive, "-C", (char *)dir, NULL };
    char *sevenz[] = { "7z", "x", "-y", opt, (char *)archive, NULL };
    char *sevenza[] = { "7za", "x", "-y", opt, (char *)archive, NULL };

    snprintf(opt, sizeof opt, "-o%s", dir);
    if (s_progress)
        s_progress(0, 0, s_progress_ud);
    if (run(bsdtar) == 0 || run(sevenz) == 0 || run(sevenza) == 0)
        return 0;
    if (s_cancelled)
        set_error("Cancelled.");
    else
        set_error("Cannot unpack %s. Install bsdtar (libarchive) or 7-Zip, or unpack "
                  "the .iso yourself and choose that.", archive);
    return -1;
}

/* The first disc image found in dir or a folder below it. */
static int find_image(const char *dir, char *out, size_t n, int depth)
{
#if defined(_WIN32)
    char pat[4300];
    WIN32_FIND_DATAA fd;
    HANDLE h;
    int found = 0;
    snprintf(pat, sizeof pat, "%s\\*", dir);
    if ((h = FindFirstFileA(pat, &fd)) == INVALID_HANDLE_VALUE)
        return 0;
    do {
        char p[4300];
        if (!strcmp(fd.cFileName, ".") || !strcmp(fd.cFileName, ".."))
            continue;
        snprintf(p, sizeof p, "%s/%s", dir, fd.cFileName);
        if (fd.dwFileAttributes & FILE_ATTRIBUTE_DIRECTORY)
            found = depth < 3 && find_image(p, out, n, depth + 1);
        else if (!strcasecmp(extension(p), ".iso") || !strcasecmp(extension(p), ".xiso")) {
            snprintf(out, n, "%s", p);
            found = 1;
        }
    } while (!found && FindNextFileA(h, &fd));
    FindClose(h);
    return found;
#else
    DIR *d = opendir(dir);
    struct dirent *e;
    int found = 0;
    if (!d)
        return 0;
    while (!found && (e = readdir(d)) != NULL) {
        char p[4300];
        if (!strcmp(e->d_name, ".") || !strcmp(e->d_name, ".."))
            continue;
        snprintf(p, sizeof p, "%s/%s", dir, e->d_name);
        if (is_dir(p))
            found = depth < 3 && find_image(p, out, n, depth + 1);
        else if (!strcasecmp(extension(p), ".iso") || !strcasecmp(extension(p), ".xiso")) {
            snprintf(out, n, "%s", p);
            found = 1;
        }
    }
    closedir(d);
    return found;
#endif
}

/* ── Installing ────────────────────────────────────────────────────────── */

static int is_image(const char *p)
{
    const char *x = extension(p);
    return !strcasecmp(x, ".iso") || !strcasecmp(x, ".xiso");
}

static int is_archive(const char *p)
{
    const char *x = extension(p);
    return !strcasecmp(x, ".7z") || !strcasecmp(x, ".zip") || !strcasecmp(x, ".rar");
}

int conker_install(const char *src, const char *installed, char *out, size_t n)
{
    char part[4200], tmp[4200], image[4400];
    int rc;

    s_error[0] = 0;
    s_cancelled = 0;

    /* A folder of the disc's files, or its default.xbe: run from there. */
    if (is_dir(src) || !strcasecmp(extension(src), ".xbe")) {
        char dir[4200];
        snprintf(dir, sizeof dir, "%s", src);
        if (!is_dir(src)) {
            char *slash = strrchr(dir, '/');
            if (slash)
                *slash = 0;
        }
        switch (conker_check_xbe(dir)) {
        case 0:
            snprintf(out, n, "%s", dir);
            return 0;
        case 1:
            set_error("The default.xbe in %s is not the USA release of Conker: Live & "
                      "Reloaded this build was made from.", dir);
            return -1;
        default:
            set_error("There is no default.xbe in %s.", dir);
            return -1;
        }
    }
    if (!is_image(src) && !is_archive(src)) {
        set_error("%s is not a disc image (.iso), an archive (.7z, .zip) or a game "
                  "folder.", src);
        return -1;
    }

    snprintf(part, sizeof part, "%s.partial", installed);
    remove_tree(part);
    if (is_archive(src)) {
        snprintf(tmp, sizeof tmp, "%s.unpack", installed);
        remove_tree(tmp);
        if (make_dirs(tmp) != 0)
            return -1;
        rc = unpack_archive(src, tmp);
        if (rc == 0 && !find_image(tmp, image, sizeof image, 0)) {
            set_error("There is no .iso inside %s.", src);
            rc = -1;
        }
        if (rc == 0)
            rc = unpack_disc(image, part);
        remove_tree(tmp);
    } else {
        rc = unpack_disc(src, part);
    }
    if (rc == 0 && conker_check_xbe(part) != 0) {
        set_error("This disc is not the USA release of Conker: Live & Reloaded this "
                  "build was made from.");
        rc = -1;
    }
    if (rc == 0) {
        remove_tree(installed);
        if (rename(part, installed) != 0) {
            set_error("Cannot move the game into %s: %s", installed, strerror(errno));
            rc = -1;
        }
    }
    if (rc != 0) {
        remove_tree(part);
        return -1;
    }
    snprintf(out, n, "%s", installed);
    return 0;
}

/* ── Finding the game ──────────────────────────────────────────────────── */

static void location_path(const char *data_dir, char *p, size_t n)
{
    snprintf(p, n, "%s/game-location.txt", data_dir);
}

static int remembered(const char *data_dir, char *out, size_t n)
{
    char p[4200], line[4096];
    FILE *f;

    location_path(data_dir, p, sizeof p);
    if (!(f = fopen(p, "r")))
        return 0;
    if (!fgets(line, sizeof line, f))
        line[0] = 0;
    fclose(f);
    line[strcspn(line, "\r\n")] = 0;
    if (!line[0] || !has_xbe(line))
        return 0;                           /* moved or gone: ask again */
    snprintf(out, n, "%s", line);
    return 1;
}

static void remember(const char *data_dir, const char *installed, const char *dir)
{
    char p[4200];
    FILE *f;

    if (!strcmp(dir, installed))
        return;                             /* found there anyway */
    make_dirs(data_dir);
    location_path(data_dir, p, sizeof p);
    if ((f = fopen(p, "w"))) {
        fprintf(f, "%s\n", dir);
        fclose(f);
    }
}

#if !defined(_WIN32)
/* The setup window: conker-setup beside the executable. It asks for the
 * disc, installs it and prints the folder to run from. 1 when it did, 0
 * when the player closed it, -1 when it could not run (no display, no
 * libraries): then a desktop file dialog asks instead. */
static int run_setup(const char *exe_dir, const char *installed, char *out, size_t n)
{
    char exe[4200];
    int fds[2], status;
    pid_t pid;
    size_t got = 0;
    ssize_t r;

    snprintf(exe, sizeof exe, "%sconker-setup", exe_dir);
    if (access(exe, X_OK) != 0 || pipe(fds) != 0)
        return -1;
    pid = fork();
    if (pid == 0) {
        char *argv[] = { exe, "--install-to", (char *)installed, NULL };
        dup2(fds[1], 1);
        close(fds[0]);
        close(fds[1]);
        unsetenv("QT_PLUGIN_PATH");         /* its own Qt's plugins */
        execv(exe, argv);
        _exit(127);
    }
    close(fds[1]);
    if (pid < 0) {
        close(fds[0]);
        return -1;
    }
    while (got + 1 < n && (r = read(fds[0], out + got, n - 1 - got)) != 0) {
        if (r < 0) {
            if (errno == EINTR)
                continue;
            break;
        }
        got += (size_t)r;
    }
    out[got] = 0;
    close(fds[0]);
    while (waitpid(pid, &status, 0) < 0 && errno == EINTR)
        ;
    out[strcspn(out, "\r\n")] = 0;
    if (!WIFEXITED(status) || WEXITSTATUS(status) > 1)
        return -1;
    return WEXITSTATUS(status) == 0 && out[0] ? 1 : 0;
}

/* zenity or kdialog, where the setup window cannot run. */
static int pick_file(char *out, size_t n)
{
    static const char *cmds[] = {
        "zenity --file-selection --title='Conker: choose your disc image (.iso, .7z, "
        ".zip) or the default.xbe of the extracted disc' 2>/dev/null",
        "kdialog --title 'Conker: choose your disc image' --getopenfilename \"$HOME\" "
        "'*.iso *.xiso *.7z *.zip default.xbe' 2>/dev/null",
    };
    size_t i;
    for (i = 0; i < sizeof cmds / sizeof cmds[0]; i++) {
        FILE *p = popen(cmds[i], "r");
        int ok = 0;
        if (!p)
            continue;
        if (fgets(out, (int)n, p)) {
            out[strcspn(out, "\r\n")] = 0;
            ok = out[0] != 0;
        }
        if (pclose(p) == 0 && ok)
            return 1;
    }
    return 0;
}
#endif

int conker_find_game(const char *arg, const char *data_dir, const char *exe_dir,
                     char *out, size_t n)
{
    char installed[4200], picked[4200];
    const char *src = arg && *arg ? arg : getenv("CONKER_GAME_DIR");
    int from_arg = src && *src;

    snprintf(installed, sizeof installed, "%s/game", data_dir);
    if (!from_arg) {
        if (has_xbe(installed) && conker_check_xbe(installed) == 0) {
            snprintf(out, n, "%s", installed);
            return 0;
        }
        if (remembered(data_dir, out, n) && conker_check_xbe(out) == 0)
            return 0;
#if !defined(_WIN32)
        switch (run_setup(exe_dir, installed, out, n)) {
        case 1:
            remember(data_dir, installed, out);
            return 0;
        case 0:
            fprintf(stderr, "[INSTALL] setup closed: no game\n");
            return -1;
        }
        if (!pick_file(picked, sizeof picked)) {
            fprintf(stderr,
                    "No game found. Start it once with your disc image or the folder of "
                    "the extracted disc:\n  Conker-Recomp.AppImage /path/to/Conker.iso\n"
                    "The image is installed into %s.\n", installed);
            return -1;
        }
        src = picked;
#else
        (void)exe_dir;
        (void)picked;
        fprintf(stderr, "No game found: pass the extracted disc's folder or the .iso.\n");
        return -1;
#endif
    }
    if (make_dirs(data_dir) != 0 || conker_install(src, installed, out, n) != 0) {
        fprintf(stderr, "The game could not be set up: %s\n", conker_install_error());
        return -1;
    }
    if (!from_arg)
        remember(data_dir, installed, out);
    return 0;
}

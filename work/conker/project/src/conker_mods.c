/*
 * Mods laid over the game directory, and the Uncensor mod's download
 * (conker_mods.h).
 *
 * The download asks GameBanana's public API for the mod's files, takes the
 * newest archive, checks it against the MD5 GameBanana lists, and unpacks
 * it next to the installed copy before swapping the two, so a failed or
 * interrupted update leaves the old one working. The system's curl fetches
 * and bsdtar (or 7-Zip) unpacks; the game ships neither.
 */
#include "conker_mods.h"

#include <errno.h>
#include <stdarg.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>

#include <xbox/xboxrecomp.h>

#if !defined(_WIN32)
#include <dirent.h>
#include <pthread.h>
#include <signal.h>
#include <sys/wait.h>
#include <unistd.h>
#include <openssl/evp.h>
#endif

#define MODS_DIR        "mods"
#define DISABLED_MARK   ".disabled"
#define VERSION_FILE    ".version"
#define APPLIED_FILE    "mods-applied.txt"
#define UNCENSOR        "uncensor"
#define UNCENSOR_API    "https://gamebanana.com/apiv11/Mod/697391/ProfilePage"
#define MAX_MODS        XBOX_PATH_MAX_OVERLAYS

static char s_mods[2048];                   /* <data>/mods */
static char s_cache[2048];                  /* <saves>/Cache: Z: */

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

/* The first line of a small file into buf ("" when there is none). */
static void read_line(const char *path, char *buf, size_t size)
{
    FILE *f = fopen(path, "r");
    buf[0] = 0;
    if (!f)
        return;
    if (!fgets(buf, (int)size, f))
        buf[0] = 0;
    fclose(f);
    buf[strcspn(buf, "\r\n")] = 0;
}

static int write_text(const char *path, const char *text)
{
    FILE *f = fopen(path, "w");
    if (!f)
        return -1;
    fputs(text, f);
    return fclose(f);
}

#if !defined(_WIN32)

static void remove_tree(const char *path)
{
    DIR *d = opendir(path);
    struct dirent *e;
    if (!d) {
        unlink(path);
        return;
    }
    while ((e = readdir(d)) != NULL) {
        char p[4200];
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
}

static int cmp_names(const void *a, const void *b)
{
    return strcmp((const char *)a, (const char *)b);
}

/* The active mods' folder names, sorted. */
static int active_mods(char names[][256], int max)
{
    DIR *d = opendir(s_mods);
    struct dirent *e;
    int n = 0;
    if (!d)
        return 0;
    while (n < max && (e = readdir(d)) != NULL) {
        char p[4200];
        if (e->d_name[0] == '.' || strlen(e->d_name) >= 256)
            continue;
        snprintf(p, sizeof p, "%s/%s", s_mods, e->d_name);
        if (!is_dir(p))
            continue;
        snprintf(p, sizeof p, "%s/%s/" DISABLED_MARK, s_mods, e->d_name);
        if (is_file(p))
            continue;
        snprintf(names[n++], 256, "%s", e->d_name);
    }
    closedir(d);
    qsort(names, (size_t)n, sizeof names[0], cmp_names);
    return n;
}

void conker_mods_init(const char *data_dir, const char *save_dir)
{
    static char paths[MAX_MODS][2304];
    const char *dirs[MAX_MODS];
    char names[MAX_MODS][256], applied_path[2304], applied[4096], now[4096];
    int n, i;

    snprintf(s_mods, sizeof s_mods, "%s/" MODS_DIR, data_dir);
    snprintf(s_cache, sizeof s_cache, "%s/Cache", save_dir);
    mkdir(data_dir, 0755);
    mkdir(s_mods, 0755);

    /* The active set, with each mod's version: a changed set or an updated
     * mod empties the cache. */
    n = active_mods(names, MAX_MODS);
    now[0] = 0;
    for (i = 0; i < n; i++) {
        char vp[2600], ver[256];
        size_t len = strlen(now);
        snprintf(vp, sizeof vp, "%s/%s/" VERSION_FILE, s_mods, names[i]);
        read_line(vp, ver, sizeof ver);
        snprintf(now + len, sizeof now - len, "%s %s\n", names[i], ver);
    }
    snprintf(applied_path, sizeof applied_path, "%s/" APPLIED_FILE, save_dir);
    {
        FILE *f = fopen(applied_path, "r");
        size_t got = f ? fread(applied, 1, sizeof applied - 1, f) : 0;
        applied[got] = 0;
        if (f)
            fclose(f);
        if (!f && !n)
            strcpy(applied, now);          /* never had mods: nothing cached from one */
    }
    if (strcmp(applied, now) != 0 && is_dir(s_cache)) {
        DIR *d = opendir(s_cache);
        struct dirent *e;
        fprintf(stderr, "[MODS] the active mods changed: emptying %s\n", s_cache);
        while (d && (e = readdir(d)) != NULL) {
            char p[4200];
            if (!strcmp(e->d_name, ".") || !strcmp(e->d_name, ".."))
                continue;
            snprintf(p, sizeof p, "%s/%s", s_cache, e->d_name);
            remove_tree(p);
        }
        if (d)
            closedir(d);
    }
    mkdir(save_dir, 0755);
    write_text(applied_path, now);

    for (i = 0; i < n; i++) {
        snprintf(paths[i], sizeof paths[i], "%s/%s", s_mods, names[i]);
        dirs[i] = paths[i];
        fprintf(stderr, "[MODS] active: %s\n", names[i]);
    }
    /* Files the recomp makes from the player's game (the frying pan,
     * conker_weapon.c): laid over it like a mod, but not one, so choosing
     * them does not empty the cache. */
    {
        extern const char *conker_weapon_overlay(void);
        const char *gen = conker_weapon_overlay();
        if (gen && n < MAX_MODS)
            dirs[n++] = gen;
    }
    xbox_path_set_overlays(dirs, n);
}

#else /* _WIN32 */

void conker_mods_init(const char *data_dir, const char *save_dir)
{
    (void)save_dir;
    snprintf(s_mods, sizeof s_mods, "%s\\" MODS_DIR, data_dir);
}

#endif

/* ── Uncensor ──────────────────────────────────────────────────────────── */

static char s_status[128];
static volatile int s_busy;

#if !defined(_WIN32)
static pthread_mutex_t s_status_lock = PTHREAD_MUTEX_INITIALIZER;
#endif

static void set_status(const char *fmt, ...)
{
    va_list ap;
#if !defined(_WIN32)
    pthread_mutex_lock(&s_status_lock);
#endif
    va_start(ap, fmt);
    vsnprintf(s_status, sizeof s_status, fmt, ap);
    va_end(ap);
#if !defined(_WIN32)
    pthread_mutex_unlock(&s_status_lock);
#endif
    fprintf(stderr, "[MODS] uncensor: %s\n", s_status);
}

void conker_mods_uncensor_clear_status(void)
{
    if (!s_busy)
        set_status("%s", "");
}

void conker_mods_uncensor_status(char *buf, size_t size)
{
#if !defined(_WIN32)
    pthread_mutex_lock(&s_status_lock);
#endif
    snprintf(buf, size, "%s", s_status);
#if !defined(_WIN32)
    pthread_mutex_unlock(&s_status_lock);
#endif
}

static void uncensor_path(char *buf, size_t size, const char *leaf)
{
    snprintf(buf, size, "%s/" UNCENSOR "%s%s", s_mods, leaf ? "/" : "", leaf ? leaf : "");
}

static int uncensor_installed(void)
{
    char p[2400];
    uncensor_path(p, sizeof p, "dvddata");
    return is_dir(p);
}

int conker_mods_uncensor_choice(void)
{
    char p[2400];
    uncensor_path(p, sizeof p, DISABLED_MARK);
    return uncensor_installed() && !is_file(p) ? CONKER_UNCENSOR_ENABLE
                                               : CONKER_UNCENSOR_DISABLE;
}

static void set_enabled(int on)
{
    char p[2400];
    uncensor_path(p, sizeof p, DISABLED_MARK);
    if (on)
        remove(p);
    else if (uncensor_installed())
        write_text(p, "Delete this file to turn the mod on again.\n");
}

#if !defined(_WIN32)

/* ── The download, on its own thread ───────────────────────────────────── */

typedef struct {
    char id[32], file[256], url[512], md5[40], version[64];
    unsigned long long size, added;
} Release;

/* argv run to completion, stdout to out_path (or discarded). Its exit
 * status, -1 when it could not start. While it runs, progress() gets the
 * size of out_path every quarter second. */
static int run(char *const argv[], const char *out_path,
               void (*progress)(unsigned long long bytes, void *), void *ud)
{
    pid_t pid = fork();
    int status = -1;
    if (pid == 0) {
        if (!out_path)
            freopen("/dev/null", "w", stdout);
        freopen("/dev/null", "w", stderr);
        execvp(argv[0], argv);
        _exit(127);
    }
    if (pid < 0)
        return -1;
    for (;;) {
        pid_t r = waitpid(pid, &status, WNOHANG);
        if (r == pid)
            break;
        if (r < 0 && errno != EINTR)
            return -1;
        if (progress && out_path) {
            struct stat st;
            if (stat(out_path, &st) == 0)
                progress((unsigned long long)st.st_size, ud);
        }
        usleep(250000);
    }
    return WIFEXITED(status) ? WEXITSTATUS(status) : -1;
}

/* The string value after "key": in json (from p), unescaped, into out. */
static const char *json_string(const char *p, const char *end, const char *key,
                               char *out, size_t size)
{
    char pat[64];
    const char *q;
    size_t n = 0;

    snprintf(pat, sizeof pat, "\"%s\"", key);
    out[0] = 0;
    q = strstr(p, pat);
    if (!q || q >= end)
        return NULL;
    q += strlen(pat);
    while (*q == ' ' || *q == ':' || *q == '\n' || *q == '\r' || *q == '\t')
        q++;
    if (*q != '"')
        return NULL;
    for (q++; *q && *q != '"' && n + 1 < size; q++) {
        if (*q == '\\' && q[1])
            q++;                            /* \/ and \" are all this needs */
        out[n++] = *q;
    }
    out[n] = 0;
    return q;
}

static unsigned long long json_number(const char *p, const char *end, const char *key)
{
    char pat[64];
    const char *q;
    snprintf(pat, sizeof pat, "\"%s\"", key);
    q = strstr(p, pat);
    if (!q || q >= end)
        return 0;
    q += strlen(pat);
    while (*q == ' ' || *q == ':')
        q++;
    return strtoull(q, NULL, 10);
}

/* The newest archive among the mod's files. */
static int newest_release(const char *json, Release *best)
{
    const char *files = strstr(json, "\"_aFiles\"");
    const char *p, *next;
    int found = 0;

    if (!files)
        return 0;
    for (p = strstr(files, "\"_idRow\""); p; p = next) {
        Release r;
        const char *end;
        char archived[8] = "";
        next = strstr(p + 8, "\"_idRow\"");
        end = next ? next : p + strlen(p);
        memset(&r, 0, sizeof r);
        snprintf(r.id, sizeof r.id, "%llu", json_number(p, end, "_idRow"));
        json_string(p, end, "_sFile", r.file, sizeof r.file);
        json_string(p, end, "_sDownloadUrl", r.url, sizeof r.url);
        json_string(p, end, "_sMd5Checksum", r.md5, sizeof r.md5);
        json_string(p, end, "_sVersion", r.version, sizeof r.version);
        r.size = json_number(p, end, "_nFilesize");
        r.added = json_number(p, end, "_tsDateAdded");
        {
            const char *a = strstr(p, "\"_bIsArchived\"");
            if (a && a < end && strstr(a, "true") && strstr(a, "true") < a + 24)
                strcpy(archived, "yes");
        }
        {
            const char *x = strrchr(r.file, '.');
            if (!x || (strcmp(x, ".7z") && strcmp(x, ".zip")) || !r.url[0] || archived[0])
                continue;
        }
        if (strncmp(r.url, "https://", 8) != 0)
            continue;
        if (!found || r.added > best->added) {
            *best = r;
            found = 1;
        }
    }
    return found;
}

static int md5_matches(const char *path, const char *want)
{
    unsigned char buf[1 << 16], digest[EVP_MAX_MD_SIZE];
    unsigned int len = 0, i;
    char hex[2 * EVP_MAX_MD_SIZE + 1];
    EVP_MD_CTX *ctx;
    FILE *f;
    size_t n;

    if (!want[0])
        return 1;                           /* nothing to check against */
    if (!(f = fopen(path, "rb")))
        return 0;
    ctx = EVP_MD_CTX_new();
    EVP_DigestInit_ex(ctx, EVP_md5(), NULL);
    while ((n = fread(buf, 1, sizeof buf, f)) > 0)
        EVP_DigestUpdate(ctx, buf, n);
    fclose(f);
    EVP_DigestFinal_ex(ctx, digest, &len);
    EVP_MD_CTX_free(ctx);
    for (i = 0; i < len; i++)
        sprintf(hex + 2 * i, "%02x", digest[i]);
    hex[2 * len] = 0;
    return strcasecmp(hex, want) == 0;
}

/* The folder holding dvddata/ in an unpacked archive (the archive's top
 * level, or one folder down). */
static int find_payload(const char *root, char *out, size_t size)
{
    char p[4200];
    DIR *d;
    struct dirent *e;
    int found = 0;

    snprintf(p, sizeof p, "%s/dvddata", root);
    if (is_dir(p)) {
        snprintf(out, size, "%s", root);
        return 1;
    }
    if (!(d = opendir(root)))
        return 0;
    while (!found && (e = readdir(d)) != NULL) {
        if (e->d_name[0] == '.')
            continue;
        snprintf(p, sizeof p, "%s/%s/dvddata", root, e->d_name);
        if (is_dir(p)) {
            snprintf(out, size, "%s/%s", root, e->d_name);
            found = 1;
        }
    }
    closedir(d);
    return found;
}

static void download_progress(unsigned long long bytes, void *ud)
{
    const Release *r = ud;
    static unsigned long long last = ~0ull;
    unsigned long long pct = r->size ? bytes * 100 / r->size : bytes >> 20;
    if (pct == last)
        return;
    last = pct;
    if (r->size)
        set_status("Downloading %llu%%", pct);
    else
        set_status("Downloading %lluMB", pct);
}

typedef struct {
    int enable_after;                       /* Enable: turn it on once installed */
} Job;

static void *uncensor_thread(void *arg)
{
    Job job = *(Job *)arg;
    char json_path[2400], part[2400], unpack[2400], payload[4400], installed[2400];
    char ver_path[2400], have[256], marker[2400], old[2400], fresh[2400];
    char *json = NULL;
    Release r;
    FILE *f;
    long len;
    int was_disabled;

    free(arg);
    set_status("Checking...");
    snprintf(json_path, sizeof json_path, "%s/.uncensor-api.json", s_mods);
    {
        char *argv[] = { "curl", "-sfL", "--max-time", "60", "-o", json_path,
                         UNCENSOR_API, NULL };
        if (run(argv, json_path, NULL, NULL) != 0) {
            fprintf(stderr, "[MODS] cannot reach %s (is curl installed?)\n", UNCENSOR_API);
            set_status("No connection");
            goto out;
        }
    }
    if (!(f = fopen(json_path, "rb"))) {
        set_status("Bad reply");
        goto out;
    }
    fseek(f, 0, SEEK_END);
    len = ftell(f);
    fseek(f, 0, SEEK_SET);
    json = len > 0 && len < (16l << 20) ? calloc(1, (size_t)len + 1) : NULL;
    if (!json || fread(json, 1, (size_t)len, f) != (size_t)len) {
        fclose(f);
        set_status("Bad reply");
        goto out;
    }
    fclose(f);
    remove(json_path);
    if (!newest_release(json, &r)) {
        set_status("No download found");
        goto out;
    }

    uncensor_path(ver_path, sizeof ver_path, VERSION_FILE);
    read_line(ver_path, have, sizeof have);
    if (uncensor_installed() && !strncmp(have, r.id, strlen(r.id)) && have[strlen(r.id)] == ' ') {
        if (job.enable_after)
            set_enabled(1);
        set_status(job.enable_after ? "Restart to apply" : "Up to date");
        goto out;
    }

    snprintf(part, sizeof part, "%s/.uncensor-%s.part", s_mods, r.id);
    {
        char *argv[] = { "curl", "-sfL", "--retry", "2", "-o", part, r.url, NULL };
        set_status("Downloading 0%%");
        if (run(argv, part, download_progress, &r) != 0) {
            remove(part);
            set_status("Download failed");
            goto out;
        }
    }
    set_status("Verifying...");
    if (!md5_matches(part, r.md5)) {
        remove(part);
        fprintf(stderr, "[MODS] %s: MD5 does not match %s\n", part, r.md5);
        set_status("Bad download");
        goto out;
    }

    set_status("Unpacking...");
    snprintf(unpack, sizeof unpack, "%s/.uncensor-unpack", s_mods);
    remove_tree(unpack);
    mkdir(unpack, 0755);
    {
        char opt[2500];
        char *bsdtar[] = { "bsdtar", "-xf", part, "-C", unpack, NULL };
        char *sevenz[] = { "7z", "x", "-y", opt, part, NULL };
        char *sevenza[] = { "7za", "x", "-y", opt, part, NULL };
        snprintf(opt, sizeof opt, "-o%s", unpack);
        if (run(bsdtar, NULL, NULL, NULL) != 0 && run(sevenz, NULL, NULL, NULL) != 0
                && run(sevenza, NULL, NULL, NULL) != 0) {
            remove(part);
            remove_tree(unpack);
            fprintf(stderr, "[MODS] cannot unpack %s: install bsdtar (libarchive) or 7-Zip\n", part);
            set_status("Need bsdtar or 7z");
            goto out;
        }
    }
    remove(part);
    if (!find_payload(unpack, payload, sizeof payload)) {
        remove_tree(unpack);
        set_status("Bad download");
        goto out;
    }

    /* The new copy beside the old one, then swapped in. */
    uncensor_path(installed, sizeof installed, NULL);
    uncensor_path(marker, sizeof marker, DISABLED_MARK);
    was_disabled = is_file(marker);
    snprintf(fresh, sizeof fresh, "%s/.uncensor-new", s_mods);
    snprintf(old, sizeof old, "%s/.uncensor-old", s_mods);
    remove_tree(fresh);
    remove_tree(old);
    mkdir(fresh, 0755);
    {
        char from[4500], to[2500], line[400];
        snprintf(from, sizeof from, "%s/dvddata", payload);
        snprintf(to, sizeof to, "%s/dvddata", fresh);
        if (rename(from, to) != 0) {
            remove_tree(unpack);
            remove_tree(fresh);
            fprintf(stderr, "[MODS] cannot install the mod: %s\n", strerror(errno));
            set_status("Install failed");
            goto out;
        }
        snprintf(to, sizeof to, "%s/" VERSION_FILE, fresh);
        snprintf(line, sizeof line, "%s %s %s\n", r.id, r.version, r.file);
        write_text(to, line);
        if (was_disabled && !job.enable_after) {
            snprintf(to, sizeof to, "%s/" DISABLED_MARK, fresh);
            write_text(to, "Delete this file to turn the mod on again.\n");
        }
    }
    remove_tree(unpack);
    if (is_dir(installed) && rename(installed, old) != 0) {
        remove_tree(fresh);
        fprintf(stderr, "[MODS] cannot replace the old copy: %s\n", strerror(errno));
        set_status("Install failed");
        goto out;
    }
    if (rename(fresh, installed) != 0) {
        rename(old, installed);
        fprintf(stderr, "[MODS] cannot install the mod: %s\n", strerror(errno));
            set_status("Install failed");
        goto out;
    }
    remove_tree(old);
    fprintf(stderr, "[MODS] %s %s\n", have[0] ? "updated to" : "installed", r.version);
    set_status("Restart to apply");

out:
    free(json);
    s_busy = 0;
    return NULL;
}

static void start_job(int enable_after)
{
    pthread_t t;
    Job *job;
    if (s_busy)
        return;
    job = malloc(sizeof *job);
    if (!job)
        return;
    job->enable_after = enable_after;
    s_busy = 1;
    if (pthread_create(&t, NULL, uncensor_thread, job) != 0) {
        free(job);
        s_busy = 0;
        set_status("Install failed");
        return;
    }
    pthread_detach(t);
}

#else

static void start_job(int enable_after)
{
    (void)enable_after;
    set_status("Not supported");
}

#endif

void conker_mods_uncensor_apply(int choice)
{
    if (s_busy) {
        return;
        return;
    }
    switch (choice) {
    case CONKER_UNCENSOR_ENABLE:
        if (uncensor_installed()) {
            set_enabled(1);
            set_status("Restart to apply");
        } else {
            start_job(1);
        }
        break;
    case CONKER_UNCENSOR_DISABLE:
        if (uncensor_installed()) {
            set_enabled(0);
            set_status("Restart to apply");
        } else {
            set_status("");
        }
        break;
    case CONKER_UNCENSOR_UPDATE:
        start_job(0);
        break;
    }
}

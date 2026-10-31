/*
 * Intro Fix (Recomp Options): Conker holds a glass of milk in the opening
 * scene instead of the goblet.
 *
 * The goblet is effects_models_conker_milk, object 49 of the held-object name
 * table (0x006A6108). The game has a low fluted glass with a drink in it,
 * effects_models_whiskey_glass_filled, in the front end's package; it was made
 * for the same hand, so it fits with no change of place or size.
 *
 * As with the frying pan (conker_weapon.c), the first start with the option on
 * unpacks that package from the player's copy of the game and writes the glass
 * as a loose file under <data>/generated/intro, laid over the game like a mod.
 * Nothing of the game's is shipped. The file differs from the game's in the
 * glass, a third as opaque, and in the drink: its colour is opaque, its texture
 * white, its level half the glass's inside, and its normals all up, as its
 * sides would otherwise take the throne room's light as dark as a drink's. Then
 * the object's name, in the XBE's strings, gets one letter changed: the name is
 * the path, and the throne room's package has no such entry, so it loads the
 * file. The glass in the pub's own scenes is untouched.
 *
 * All of it happens at start, before the game runs: see conker_weapon.c.
 */
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>

#include "conker_settings.h"

extern ptrdiff_t g_xbox_mem_offset;

uint8_t *conker_caff_unpack_mem(const char *in, size_t *size);
int conker_caff_extract(const uint8_t *pkg, size_t size, const char *name, const char *out);

#define GLASS_RESOURCE "aid\\bfdmodel\\attach\\effects_models_whiskey_glass_filled\\default.rbm"
#define GLASS_PACKAGE  "dvddata/aid/zpackage/Level/Frontend/default.rbm"
#define GLASS_FILE     "dvddata/aid/bfdmodel/attach/effects_models_conker_mil2/default.rbm"
#define NAME_LAST_VA   0x005EDF99u      /* the k of effects_models_conker_milk */

/* In the model's .gpu part. */
#define GLASS_COLOURS  0x0000u
#define GLASS_VERTS    161u
#define DRINK_COLOURS  0x08D0u
#define DRINK_POS      0x09B4u
#define DRINK_NORMALS  0x0B0Cu
#define NORMAL_UP      0x7FC00000u      /* 11:11:10 (0, 0, 1) */
#define DRINK_VERTS    57u
#define DRINK_TEXTURE  0x3500u          /* the second, 64x64 DXT1 with mips */
#define DRINK_TEX_SIZE 2816u
#define DRINK_Z_LOW    2188             /* its bottom */
#define DRINK_Z_HIGH   8397             /* its top, as made */
#define MILK_Z_HIGH    7151             /* halfway up the glass's inside */

static char s_overlay[2304];
static int s_active, s_failed;

static void mkdirs(const char *path)
{
    char p[2600];
    size_t i;

    snprintf(p, sizeof p, "%s", path);
    for (i = 1; p[i]; i++)
        if (p[i] == '/' || p[i] == '\\') {
            char c = p[i];
            p[i] = 0;
#ifdef _WIN32
            mkdir(p);
#else
            mkdir(p, 0755);
#endif
            p[i] = c;
        }
}

static uint32_t get32(const uint8_t *p) { uint32_t v; memcpy(&v, p, 4); return v; }

/* The drink becomes milk, in the file conker_caff_extract wrote. */
static int make_milk(const char *path)
{
    FILE *f = fopen(path, "rb");
    uint8_t *file = NULL, *gpu;
    long size;
    const uint32_t normal_up = NORMAL_UP;
    uint32_t i;
    int ok = 0;

    if (!f)
        return 0;
    if (fseek(f, 0, SEEK_END) != 0 || (size = ftell(f)) < 0x180
            || fseek(f, 0, SEEK_SET) != 0 || !(file = malloc((size_t)size))
            || fread(file, 1, (size_t)size, f) != (size_t)size) {
        fclose(f);
        free(file);
        return 0;
    }
    fclose(f);
    {
        uint64_t off = (uint64_t)get32(file + 0x38) + get32(file + 0x40 + 0x10);
        if (off + DRINK_TEXTURE + DRINK_TEX_SIZE > (uint64_t)size)
            goto done;
        gpu = file + off;
    }
    /* The glass we looked at: its colours, the drink's, its amber texture. */
    if (get32(gpu + GLASS_COLOURS) != 0x99FFFFFFu || get32(gpu + DRINK_COLOURS) != 0xCCFFFFFFu
            || get32(gpu + DRINK_TEXTURE) != 0x00000820u)
        goto done;
    /* Clearer: as made it is dark over anything but a bright pub. */
    for (i = 0; i < GLASS_VERTS; i++)
        gpu[GLASS_COLOURS + 4 * i + 3] /= 3;
    for (i = 0; i < DRINK_VERTS; i++) {
        uint8_t *c = gpu + DRINK_COLOURS + 4 * i;
        uint8_t *p = gpu + DRINK_POS + 6 * i + 4;
        int16_t z;

        c[3] = 0xFF;
        memcpy(gpu + DRINK_NORMALS + 4 * i, &normal_up, 4);
        memcpy(&z, p, 2);
        z = (int16_t)(DRINK_Z_LOW + (z - DRINK_Z_LOW) * (MILK_Z_HIGH - DRINK_Z_LOW)
                                    / (DRINK_Z_HIGH - DRINK_Z_LOW));
        memcpy(p, &z, 2);
    }
    /* DXT1 blocks all of one white. */
    for (i = 0; i + 8 <= DRINK_TEX_SIZE; i += 8) {
        static const uint8_t white[8] = { 0xFF, 0xFF, 0xFF, 0xFF, 0, 0, 0, 0 };
        memcpy(gpu + DRINK_TEXTURE + i, white, 8);
    }
    f = fopen(path, "wb");
    if (f) {
        ok = fwrite(file, 1, (size_t)size, f) == (size_t)size;
        ok = fclose(f) == 0 && ok;
    }
done:
    free(file);
    return ok;
}

/* main(), before the mods are laid over the game (conker_mods_init). */
void conker_intro_init(const char *data_dir)
{
    snprintf(s_overlay, sizeof s_overlay, "%s/generated/intro", data_dir);
}

/* The folder to lay over the game, or NULL with the option off. */
const char *conker_intro_overlay(void)
{
    return conker_intro_choice() && s_overlay[0] ? s_overlay : NULL;
}

int conker_intro_active(void) { return s_active; }
int conker_intro_failed(void) { return s_failed; }

/* conker_boot(), with the XBE in guest memory and before the game starts. */
void conker_intro_boot(const char *game_dir)
{
    char glass[2600], pkg_path[2600];
    volatile char *last = (volatile char *)(g_xbox_mem_offset + NAME_LAST_VA);
    struct stat st;

    if (!conker_intro_choice() || !s_overlay[0])
        return;
    if (*last != 'k') {
        fprintf(stderr, "[INTRO] the goblet's name is not where it should be\n");
        s_failed = 1;
        return;
    }
    snprintf(glass, sizeof glass, "%s/" GLASS_FILE, s_overlay);
    if (stat(glass, &st) != 0 || st.st_size == 0) {
        uint8_t *pkg;
        size_t size;
        snprintf(pkg_path, sizeof pkg_path, "%s/" GLASS_PACKAGE, game_dir);
        fprintf(stderr, "[INTRO] making the glass of milk from %s\n", pkg_path);
        mkdirs(glass);
        pkg = conker_caff_unpack_mem(pkg_path, &size);
        if (!pkg || conker_caff_extract(pkg, size, GLASS_RESOURCE, glass) != 0
                || !make_milk(glass)) {
            fprintf(stderr, "[INTRO] no glass of milk: the goblet stays\n");
            remove(glass);
            free(pkg);
            s_failed = 1;
            return;
        }
        free(pkg);
    }
    *last = '2';
    s_active = 1;
    fprintf(stderr, "[INTRO] Conker holds a glass of milk\n");
}

/*
 * The debug build's sound (conker_debug.c has the rest): what the audio
 * device is given, recorded a file a level, and checked as it goes.
 *
 * From the APU's output tap (g_apu_output_tap, xboxrecomp patch 0037), on the
 * APU's frame thread. Each level the game enters starts a file in the run's
 * folder, audio-NN-<level id>.wav: IMA ADPCM, 48 kHz stereo, a quarter of the
 * size of the samples and readable by any player or ffmpeg. The log says when
 * each file starts ([AUDIO] ... recording), so a time in the log is a place
 * in the file; audio-index.txt lists the files with their level's name (the
 * level package open 5 s into the file: the id and the package do not change
 * together).
 *
 * The check runs on the samples before the compression: a stretch of digital
 * silence of up to 1024 samples (21 ms) in the middle of sound is a dropout,
 * which the ear hears as a click or a pop, and the log gets a line for it
 * ([AUDIO] dropout) with its time, level and place in the file. A minute of
 * them is summed up as well.
 *
 * Also, RECOMP_APU_RING=1 unless set: the APU's own check that a streamed
 * voice played data it had played before ([APU-RING]).
 */
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "conker_host.h"

extern void (*g_apu_output_tap)(const int16_t *stereo, int frames);
const char *conker_debug_run_dir(void);
double conker_debug_time(void);
uint32_t conker_debug_level(void);
const char *conker_debug_level_name(void);

#define RATE          48000
#define BLOCK_ALIGN   2048                 /* bytes a block, both channels */
#define BLOCK_SAMPLES 2041                 /* (2048 - 8) * 8 / 8 + 1 */
#define FRAME         32                   /* the APU's frame, in samples */
#define LOUD          8000                 /* |L| + |R| summed over a frame */
#define GAP_MAX       1024                 /* longer silences are the game's own */

/* ── IMA ADPCM ────────────────────────────────────────────────────────── */

static const int k_step[89] = {
    7, 8, 9, 10, 11, 12, 13, 14, 16, 17, 19, 21, 23, 25, 28, 31, 34, 37, 41, 45,
    50, 55, 60, 66, 73, 80, 88, 97, 107, 118, 130, 143, 157, 173, 190, 209, 230,
    253, 279, 307, 337, 371, 408, 449, 494, 544, 598, 658, 724, 796, 876, 963,
    1060, 1166, 1282, 1411, 1552, 1707, 1878, 2066, 2272, 2499, 2749, 3024, 3327,
    3660, 4026, 4428, 4871, 5358, 5894, 6484, 7132, 7845, 8630, 9493, 10442,
    11487, 12635, 13899, 15289, 16818, 18500, 20350, 22385, 24623, 27086, 29794,
    32767
};
static const int k_index[16] = { -1, -1, -1, -1, 2, 4, 6, 8, -1, -1, -1, -1, 2, 4, 6, 8 };

typedef struct { int pred, index; } Adpcm;

/* One sample to a nibble, stepping the predictor as a decoder will. */
static int adpcm_nibble(Adpcm *a, int sample)
{
    int step = k_step[a->index], diff = sample - a->pred, code = 0, delta = step >> 3;

    if (diff < 0) {
        code = 8;
        diff = -diff;
    }
    if (diff >= step) { code |= 4; diff -= step; delta += step; }
    step >>= 1;
    if (diff >= step) { code |= 2; diff -= step; delta += step; }
    step >>= 1;
    if (diff >= step) { code |= 1; delta += step; }
    a->pred += code & 8 ? -delta : delta;
    if (a->pred > 32767) a->pred = 32767;
    if (a->pred < -32768) a->pred = -32768;
    a->index += k_index[code];
    if (a->index < 0) a->index = 0;
    if (a->index > 88) a->index = 88;
    return code;
}

/* ── The file ─────────────────────────────────────────────────────────── */

typedef struct {
    FILE *f;
    char path[1200];
    const char *file;                  /* the name inside path */
    int indexed;
    double started;                    /* run time of its first sample */
    uint32_t level;
    uint64_t samples;                  /* sample pairs written */
    uint32_t blocks;
    Adpcm ch[2];
    int16_t pending[BLOCK_SAMPLES][2];
    int npending;
    unsigned dropouts;
} Track;

static Track s_track;
static int s_tracks;

static void put16(uint8_t *p, unsigned v) { p[0] = (uint8_t)v; p[1] = (uint8_t)(v >> 8); }
static void put32(uint8_t *p, uint32_t v) { put16(p, v & 0xFFFF); put16(p + 2, v >> 16); }

/* RIFF with a 20-byte fmt (WAVE_FORMAT_IMA_ADPCM), fact and data: 60 bytes. */
static void write_header(Track *t)
{
    uint8_t h[60];
    uint32_t data = t->blocks * BLOCK_ALIGN;

    memcpy(h, "RIFF", 4);
    put32(h + 4, 52 + data);
    memcpy(h + 8, "WAVEfmt ", 8);
    put32(h + 16, 20);
    put16(h + 20, 0x11);
    put16(h + 22, 2);
    put32(h + 24, RATE);
    put32(h + 28, (uint32_t)((uint64_t)RATE * BLOCK_ALIGN / BLOCK_SAMPLES));
    put16(h + 32, BLOCK_ALIGN);
    put16(h + 34, 4);
    put16(h + 36, 2);
    put16(h + 38, BLOCK_SAMPLES);
    memcpy(h + 40, "fact", 4);
    put32(h + 44, 4);
    put32(h + 48, t->blocks * BLOCK_SAMPLES);
    memcpy(h + 52, "data", 4);
    put32(h + 56, data);
    fseek(t->f, 0, SEEK_SET);
    fwrite(h, 1, sizeof h, t->f);
    fseek(t->f, 0, SEEK_END);
}

/* A block: each channel's first sample and step as is, then the rest eight at
 * a time, four bytes of the left and four of the right. */
static void write_block(Track *t)
{
    uint8_t b[BLOCK_ALIGN];
    int c, i, k, o = 8;

    for (c = 0; c < 2; c++) {
        t->ch[c].pred = t->pending[0][c];
        put16(b + c * 4, (uint16_t)t->ch[c].pred);
        b[c * 4 + 2] = (uint8_t)t->ch[c].index;
        b[c * 4 + 3] = 0;
    }
    for (i = 1; i < BLOCK_SAMPLES; i += 8)
        for (c = 0; c < 2; c++)
            for (k = 0; k < 8; k += 2) {
                int lo = adpcm_nibble(&t->ch[c], t->pending[i + k][c]);
                int hi = adpcm_nibble(&t->ch[c], t->pending[i + k + 1][c]);
                b[o++] = (uint8_t)(lo | hi << 4);
            }
    fwrite(b, 1, sizeof b, t->f);
    t->blocks++;
    t->npending = 0;
    if (t->blocks % 120 == 0) {           /* about every 5 s */
        write_header(t);
        fflush(t->f);
    }
}

static void index_track(Track *t);

static void close_track(Track *t)
{
    if (!t->f)
        return;
    if (!t->indexed && t->samples)
        index_track(t);
    if (t->npending) {                    /* the last block, padded with silence */
        memset(t->pending[t->npending], 0, sizeof t->pending[0] * (BLOCK_SAMPLES - t->npending));
        write_block(t);
    }
    write_header(t);
    fclose(t->f);
    t->f = NULL;
    fprintf(stderr, "[AUDIO] t=%.1f closed %s: %.1f s, %u dropouts\n", conker_debug_time(),
            t->file, t->samples / (double)RATE, t->dropouts);
}

static void open_track(Track *t, uint32_t level)
{
    close_track(t);
    memset(t, 0, sizeof *t);
    t->level = level;
    t->started = conker_debug_time();
    snprintf(t->path, sizeof t->path, "%s/audio-%02d-%02X.wav", conker_debug_run_dir(),
             ++s_tracks, level);
    t->file = strrchr(t->path, '/') + 1;
    t->f = fopen(t->path, "wb");
    if (!t->f) {
        fprintf(stderr, "[AUDIO] cannot write %s\n", t->path);
        return;
    }
    write_header(t);
    fprintf(stderr, "[AUDIO] t=%.1f level 0x%02X: recording %s\n", t->started, level, t->file);
}

/* A line of audio-index.txt, 5 s into the file. */
static void index_track(Track *t)
{
    char path[1100];
    FILE *f;

    t->indexed = 1;
    snprintf(path, sizeof path, "%s/audio-index.txt", conker_debug_run_dir());
    if (!(f = fopen(path, "a")))
        return;
    fprintf(f, "%s  level 0x%02X  %s  from t=%.1f\n", t->file, t->level,
            conker_debug_level_name()[0] ? conker_debug_level_name() : "-", t->started);
    fclose(f);
}

/* ── The check ────────────────────────────────────────────────────────── */

typedef struct {
    int loud_before;                      /* the frame before the silence was loud */
    unsigned silent;                      /* samples of silence so far */
    uint64_t silent_from;                 /* its first sample, in the file */
    unsigned minute_dropouts;
    double minute_start;
} Check;

static Check s_check;

static void check_frame(Track *t, const int16_t *s, int n, uint64_t at)
{
    int i;
    long energy = 0;

    for (i = 0; i < n * 2; i++)
        energy += s[i] < 0 ? -s[i] : s[i];
    if (energy == 0) {
        if (!s_check.silent)
            s_check.silent_from = at;
        s_check.silent += (unsigned)n;
        return;
    }
    if (s_check.silent && s_check.loud_before && s_check.silent <= GAP_MAX && energy > LOUD) {
        double t0 = t->started + s_check.silent_from / (double)RATE;
        t->dropouts++;
        s_check.minute_dropouts++;
        fprintf(stderr, "[AUDIO] dropout t=%.2f level 0x%02X: %u samples of silence in sound "
                "(%s at %.2f s)\n", t0, t->level, s_check.silent, t->file,
                s_check.silent_from / (double)RATE);
    }
    s_check.silent = 0;
    s_check.loud_before = energy > LOUD;
}

static void tap(const int16_t *stereo, int frames)
{
    uint32_t level = conker_debug_level();
    double now = conker_debug_time();
    int i;

    if (!conker_debug_run_dir()[0])
        return;
    if (!s_track.f || level != s_track.level) {
        open_track(&s_track, level);
        s_check.silent = 0;
        s_check.loud_before = 0;
    }
    if (!s_track.f)
        return;
    for (i = 0; i < frames; i += FRAME) {
        int n = frames - i < FRAME ? frames - i : FRAME;
        check_frame(&s_track, stereo + i * 2, n, s_track.samples + (uint64_t)i);
    }
    for (i = 0; i < frames; i++) {
        s_track.pending[s_track.npending][0] = stereo[i * 2];
        s_track.pending[s_track.npending][1] = stereo[i * 2 + 1];
        if (++s_track.npending == BLOCK_SAMPLES)
            write_block(&s_track);
    }
    s_track.samples += (uint64_t)frames;
    if (!s_track.indexed && s_track.samples >= 5 * RATE)
        index_track(&s_track);
    if (now - s_check.minute_start >= 60.0) {
        if (s_check.minute_dropouts)
            fprintf(stderr, "[AUDIO] t=%.1f %u dropouts in the last minute\n", now,
                    s_check.minute_dropouts);
        s_check.minute_dropouts = 0;
        s_check.minute_start = now;
    }
}

static void at_exit(void)
{
    g_apu_output_tap = NULL;
    if (s_track.f && !s_track.indexed)
        index_track(&s_track);
    close_track(&s_track);
}

void conker_debug_audio_install(void)
{
    conker_host_setenv_default("RECOMP_APU_RING", "1");
    g_apu_output_tap = tap;
    atexit(at_exit);
}

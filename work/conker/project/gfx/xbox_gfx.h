/*
 * xbox_gfx - host GPU abstraction for the NV2A renderer
 *
 * Host-side renderers speak only this interface (the intended client is an
 * Nv2aBackend adapter under xboxrecomp's pushbuffer executor). Each host
 * graphics API is a backend behind it:
 *
 *   vulkan     Windows, Linux (and macOS through MoltenVK)
 *   metal      macOS
 *   d3d8compat the legacy xbox_d3d8 device (D3D11 on Windows, OpenGL on POSIX)
 *   null       headless; accepts and counts everything (tests, bring-up)
 *
 * The interface is deliberately small and NV2A-shaped rather than D3D8-shaped:
 * state is a plain struct the translator fills from PGRAPH registers, and the
 * backend turns it into whatever pipeline objects its API needs. Primitive
 * types the host APIs lack (quads, fans, quad strips) are expanded to
 * triangle lists in common code before a backend sees them.
 *
 * Threading: all calls must come from one thread (the one that called
 * xbox_gfx_init), matching the single PFIFO/PGRAPH consumer.
 */

#ifndef XBOX_GFX_H
#define XBOX_GFX_H

#include <stddef.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef enum {
    XBOX_GFX_BACKEND_AUTO = 0,   /* best available for this host */
    XBOX_GFX_BACKEND_NULL,
    XBOX_GFX_BACKEND_D3D8COMPAT,
    XBOX_GFX_BACKEND_VULKAN,
    XBOX_GFX_BACKEND_METAL,
} xbox_gfx_backend;

typedef struct {
    xbox_gfx_backend backend;    /* AUTO honours $XBOX_GFX_BACKEND */
    const char *window_title;
    uint32_t width, height;      /* window size; NV2A output is scaled to it */
    int vsync;
    int validation;              /* enable API validation layers if present */
    int headless;                /* no window: render offscreen only (tests, CI) */
} xbox_gfx_config;

/* ── Pipeline state ────────────────────────────────────────────────────
 * Enum values are the NV2A/OpenGL encodings so the translator can pass
 * register contents through without remapping. */

typedef enum {
    XBOX_GFX_PRIM_POINTS         = 1,
    XBOX_GFX_PRIM_LINES          = 2,
    XBOX_GFX_PRIM_LINE_LOOP      = 3,
    XBOX_GFX_PRIM_LINE_STRIP     = 4,
    XBOX_GFX_PRIM_TRIANGLES      = 5,
    XBOX_GFX_PRIM_TRIANGLE_STRIP = 6,
    XBOX_GFX_PRIM_TRIANGLE_FAN   = 7,
    XBOX_GFX_PRIM_QUADS          = 8,
    XBOX_GFX_PRIM_QUAD_STRIP     = 9,
    XBOX_GFX_PRIM_POLYGON        = 10,
} xbox_gfx_primitive;

typedef enum {
    XBOX_GFX_BLEND_ZERO                = 0x0000,
    XBOX_GFX_BLEND_ONE                 = 0x0001,
    XBOX_GFX_BLEND_SRC_COLOR           = 0x0300,
    XBOX_GFX_BLEND_ONE_MINUS_SRC_COLOR = 0x0301,
    XBOX_GFX_BLEND_SRC_ALPHA           = 0x0302,
    XBOX_GFX_BLEND_ONE_MINUS_SRC_ALPHA = 0x0303,
    XBOX_GFX_BLEND_DST_ALPHA           = 0x0304,
    XBOX_GFX_BLEND_ONE_MINUS_DST_ALPHA = 0x0305,
    XBOX_GFX_BLEND_DST_COLOR           = 0x0306,
    XBOX_GFX_BLEND_ONE_MINUS_DST_COLOR = 0x0307,
    XBOX_GFX_BLEND_SRC_ALPHA_SATURATE  = 0x0308,
} xbox_gfx_blend_factor;

typedef enum {
    XBOX_GFX_CMP_NEVER    = 0x0200,
    XBOX_GFX_CMP_LESS     = 0x0201,
    XBOX_GFX_CMP_EQUAL    = 0x0202,
    XBOX_GFX_CMP_LEQUAL   = 0x0203,
    XBOX_GFX_CMP_GREATER  = 0x0204,
    XBOX_GFX_CMP_NOTEQUAL = 0x0205,
    XBOX_GFX_CMP_GEQUAL   = 0x0206,
    XBOX_GFX_CMP_ALWAYS   = 0x0207,
} xbox_gfx_compare;

typedef enum {
    XBOX_GFX_CULL_NONE = 0,
    XBOX_GFX_CULL_FRONT,
    XBOX_GFX_CULL_BACK,
} xbox_gfx_cull;

typedef struct {
    uint8_t  blend_enable;
    uint16_t blend_src;          /* xbox_gfx_blend_factor */
    uint16_t blend_dst;
    uint8_t  depth_test;
    uint8_t  depth_write;
    uint16_t depth_func;         /* xbox_gfx_compare */
    uint8_t  cull;               /* xbox_gfx_cull */
    uint8_t  front_ccw;
    uint8_t  color_write_mask;   /* bit0 R, bit1 G, bit2 B, bit3 A */
    uint8_t  alpha_test;
    uint16_t alpha_func;         /* xbox_gfx_compare */
    float    alpha_ref;          /* 0..1 */
} xbox_gfx_state;

void xbox_gfx_state_default(xbox_gfx_state *st);

/* ── Textures ──────────────────────────────────────────────────────────
 * Data handed to the backend is already linear (unswizzled); converting
 * NV2A swizzled/palettized formats is the translator's job. */

typedef enum {
    XBOX_GFX_FMT_BGRA8 = 1,      /* D3DCOLOR / A8R8G8B8 byte order */
    XBOX_GFX_FMT_RGBA8,
    XBOX_GFX_FMT_BC1,            /* DXT1 */
    XBOX_GFX_FMT_BC2,            /* DXT3 */
    XBOX_GFX_FMT_BC3,            /* DXT5 */
} xbox_gfx_format;

typedef struct xbox_gfx_texture xbox_gfx_texture;

xbox_gfx_texture *xbox_gfx_texture_create(uint32_t width, uint32_t height,
                                          xbox_gfx_format format);
/* Replace the whole top mip level. pitch is bytes per row (or per block row). */
int  xbox_gfx_texture_upload(xbox_gfx_texture *tex, const void *data,
                             size_t size, uint32_t pitch);
void xbox_gfx_texture_destroy(xbox_gfx_texture *tex);

/* ── Drawing ───────────────────────────────────────────────────────────
 * Screen-space vertices: x/y in NV2A surface pixels (as produced by the
 * viewport transform), z in 0..1, rhw for perspective-correct varyings. */

typedef struct {
    float x, y, z, rhw;
    float u, v;
    uint32_t color;              /* D3DCOLOR: 0xAARRGGBB */
} xbox_gfx_vertex;

/* Set the NV2A render surface size that vertex coordinates refer to. */
void xbox_gfx_set_surface_size(uint32_t width, uint32_t height);

#define XBOX_GFX_CLEAR_COLOR   1u
#define XBOX_GFX_CLEAR_DEPTH   2u
#define XBOX_GFX_CLEAR_STENCIL 4u

void xbox_gfx_clear(uint32_t flags, uint32_t argb, float depth, uint32_t stencil);
void xbox_gfx_set_state(const xbox_gfx_state *st);
void xbox_gfx_bind_texture(uint32_t stage, xbox_gfx_texture *tex);
void xbox_gfx_draw(xbox_gfx_primitive prim, const xbox_gfx_vertex *verts,
                   uint32_t count);

/* Finish the frame and show it (NV2A flip). */
void xbox_gfx_present(void);

/* ── Lifetime / host integration ───────────────────────────────────── */

/* Returns 0 on failure; AUTO falls back down the list and ends at null. */
int  xbox_gfx_init(const xbox_gfx_config *cfg);
void xbox_gfx_shutdown(void);
xbox_gfx_backend xbox_gfx_active_backend(void);
const char *xbox_gfx_backend_name(xbox_gfx_backend b);

/* Process window events; returns 0 once the user asked to quit. */
int  xbox_gfx_pump_events(void);

/* Copy the current NV2A surface as tightly packed RGBA8 into rgba, which
 * must hold width*height*4 bytes for the size set by
 * xbox_gfx_set_surface_size. Waits for the GPU. Returns 0 if the backend
 * cannot read back. Intended for tests and screenshots. */
int  xbox_gfx_read_surface(uint8_t *rgba, size_t size);

typedef struct {
    uint64_t frames;
    uint64_t draws;
    uint64_t vertices;
    uint64_t clears;
    uint64_t state_changes;
} xbox_gfx_stats;

void xbox_gfx_get_stats(xbox_gfx_stats *out);

#ifdef __cplusplus
}
#endif

#endif /* XBOX_GFX_H */

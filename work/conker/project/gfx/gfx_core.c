/*
 * xbox_gfx common layer: backend selection, call statistics, and expansion
 * of NV2A primitive types that host APIs do not have.
 */

#include "gfx_internal.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static const xbox_gfx_backend_ops *s_ops;
static xbox_gfx_backend s_active = XBOX_GFX_BACKEND_NULL;
static xbox_gfx_stats s_stats;

static xbox_gfx_vertex *s_scratch;
static uint32_t s_scratch_cap;

/* ── Backend registry ──────────────────────────────────────────────── */

static const xbox_gfx_backend_ops *ops_for(xbox_gfx_backend b)
{
    switch (b) {
    case XBOX_GFX_BACKEND_NULL:       return &xbox_gfx_null_ops;
#if defined(XBOX_GFX_HAVE_D3D8COMPAT)
    case XBOX_GFX_BACKEND_D3D8COMPAT: return &xbox_gfx_d3d8compat_ops;
#endif
#if defined(XBOX_GFX_HAVE_VULKAN)
    case XBOX_GFX_BACKEND_VULKAN:     return &xbox_gfx_vulkan_ops;
#endif
#if defined(XBOX_GFX_HAVE_METAL)
    case XBOX_GFX_BACKEND_METAL:      return &xbox_gfx_metal_ops;
#endif
    default:                          return NULL;
    }
}

const char *xbox_gfx_backend_name(xbox_gfx_backend b)
{
    switch (b) {
    case XBOX_GFX_BACKEND_AUTO:       return "auto";
    case XBOX_GFX_BACKEND_NULL:       return "null";
    case XBOX_GFX_BACKEND_D3D8COMPAT: return "d3d8compat";
    case XBOX_GFX_BACKEND_VULKAN:     return "vulkan";
    case XBOX_GFX_BACKEND_METAL:      return "metal";
    }
    return "unknown";
}

static xbox_gfx_backend backend_from_env(void)
{
    const char *e = getenv("XBOX_GFX_BACKEND");
    if (!e || !*e) return XBOX_GFX_BACKEND_AUTO;
    if (!strcmp(e, "null"))       return XBOX_GFX_BACKEND_NULL;
    if (!strcmp(e, "d3d8compat")) return XBOX_GFX_BACKEND_D3D8COMPAT;
    if (!strcmp(e, "vulkan"))     return XBOX_GFX_BACKEND_VULKAN;
    if (!strcmp(e, "metal"))      return XBOX_GFX_BACKEND_METAL;
    fprintf(stderr, "[GFX] unknown XBOX_GFX_BACKEND=%s, using auto\n", e);
    return XBOX_GFX_BACKEND_AUTO;
}

static int try_backend(xbox_gfx_backend b, const xbox_gfx_config *cfg)
{
    const xbox_gfx_backend_ops *ops = ops_for(b);
    if (!ops) {
        fprintf(stderr, "[GFX] backend %s not built in\n", xbox_gfx_backend_name(b));
        return 0;
    }
    if (!ops->init(cfg)) {
        fprintf(stderr, "[GFX] backend %s failed to initialize\n", ops->name);
        return 0;
    }
    s_ops = ops;
    s_active = b;
    fprintf(stderr, "[GFX] using %s backend\n", ops->name);
    return 1;
}

int xbox_gfx_init(const xbox_gfx_config *cfg_in)
{
    /* Preferred order per host; null always terminates the list. */
    static const xbox_gfx_backend auto_order[] = {
#if defined(__APPLE__)
        XBOX_GFX_BACKEND_METAL,
#endif
        XBOX_GFX_BACKEND_VULKAN,
        XBOX_GFX_BACKEND_D3D8COMPAT,
        XBOX_GFX_BACKEND_NULL,
    };
    xbox_gfx_config cfg;
    xbox_gfx_backend want;
    size_t i;

    if (s_ops)
        return 1;
    memset(&cfg, 0, sizeof(cfg));
    if (cfg_in)
        cfg = *cfg_in;
    if (!cfg.window_title) cfg.window_title = "xboxrecomp";
    if (!cfg.width)  cfg.width = 1280;
    if (!cfg.height) cfg.height = 960;
    if (getenv("XBOX_GFX_VALIDATION"))
        cfg.validation = 1;

    want = cfg.backend;
    if (want == XBOX_GFX_BACKEND_AUTO)
        want = backend_from_env();
    if (want != XBOX_GFX_BACKEND_AUTO)
        return try_backend(want, &cfg);

    for (i = 0; i < sizeof(auto_order) / sizeof(auto_order[0]); i++) {
        if (ops_for(auto_order[i]) && try_backend(auto_order[i], &cfg))
            return 1;
    }
    return 0;
}

void xbox_gfx_shutdown(void)
{
    if (s_ops)
        s_ops->shutdown();
    s_ops = NULL;
    s_active = XBOX_GFX_BACKEND_NULL;
    free(s_scratch);
    s_scratch = NULL;
    s_scratch_cap = 0;
}

xbox_gfx_backend xbox_gfx_active_backend(void)
{
    return s_active;
}

int xbox_gfx_pump_events(void)
{
    return s_ops ? s_ops->pump_events() : 1;
}

void xbox_gfx_get_stats(xbox_gfx_stats *out)
{
    if (out) *out = s_stats;
}

/* ── State ─────────────────────────────────────────────────────────── */

void xbox_gfx_state_default(xbox_gfx_state *st)
{
    memset(st, 0, sizeof(*st));
    st->blend_src = XBOX_GFX_BLEND_ONE;
    st->blend_dst = XBOX_GFX_BLEND_ZERO;
    st->depth_func = XBOX_GFX_CMP_LESS;
    st->depth_write = 1;
    st->cull = XBOX_GFX_CULL_NONE;
    st->color_write_mask = 0xF;
    st->alpha_func = XBOX_GFX_CMP_ALWAYS;
}

void xbox_gfx_set_surface_size(uint32_t width, uint32_t height)
{
    if (s_ops && width && height)
        s_ops->set_surface_size(width, height);
}

void xbox_gfx_clear(uint32_t flags, uint32_t argb, float depth, uint32_t stencil)
{
    if (!s_ops) return;
    s_stats.clears++;
    s_ops->clear(flags, argb, depth, stencil);
}

void xbox_gfx_set_state(const xbox_gfx_state *st)
{
    if (!s_ops || !st) return;
    s_stats.state_changes++;
    s_ops->set_state(st);
}

/* ── Textures ──────────────────────────────────────────────────────── */

int xbox_gfx_format_is_compressed(xbox_gfx_format fmt)
{
    return fmt == XBOX_GFX_FMT_BC1 || fmt == XBOX_GFX_FMT_BC2 ||
           fmt == XBOX_GFX_FMT_BC3;
}

size_t xbox_gfx_format_size(xbox_gfx_format fmt, uint32_t w, uint32_t h)
{
    size_t bw = (w + 3) / 4, bh = (h + 3) / 4;
    switch (fmt) {
    case XBOX_GFX_FMT_BGRA8:
    case XBOX_GFX_FMT_RGBA8: return (size_t)w * h * 4;
    case XBOX_GFX_FMT_BC1:   return bw * bh * 8;
    case XBOX_GFX_FMT_BC2:
    case XBOX_GFX_FMT_BC3:   return bw * bh * 16;
    }
    return 0;
}

xbox_gfx_texture *xbox_gfx_texture_create(uint32_t width, uint32_t height,
                                          xbox_gfx_format format)
{
    xbox_gfx_texture *t;
    if (!s_ops || !width || !height || !xbox_gfx_format_size(format, width, height))
        return NULL;
    t = s_ops->texture_create(width, height, format);
    if (t) {
        t->width = width;
        t->height = height;
        t->format = format;
    }
    return t;
}

int xbox_gfx_texture_upload(xbox_gfx_texture *tex, const void *data,
                            size_t size, uint32_t pitch)
{
    if (!s_ops || !tex || !data)
        return 0;
    if (size < xbox_gfx_format_size(tex->format, tex->width, tex->height))
        return 0;
    return s_ops->texture_upload(tex, data, size, pitch);
}

void xbox_gfx_texture_destroy(xbox_gfx_texture *tex)
{
    if (s_ops && tex)
        s_ops->texture_destroy(tex);
}

void xbox_gfx_bind_texture(uint32_t stage, xbox_gfx_texture *tex)
{
    if (s_ops && stage < 4)
        s_ops->bind_texture(stage, tex);
}

/* ── Primitive expansion ───────────────────────────────────────────── */

static xbox_gfx_vertex *scratch(uint32_t n)
{
    if (n > s_scratch_cap) {
        uint32_t cap = s_scratch_cap ? s_scratch_cap : 1024;
        xbox_gfx_vertex *p;
        while (cap < n) cap *= 2;
        p = (xbox_gfx_vertex *)realloc(s_scratch, cap * sizeof(*p));
        if (!p) return NULL;
        s_scratch = p;
        s_scratch_cap = cap;
    }
    return s_scratch;
}

void xbox_gfx_draw(xbox_gfx_primitive prim, const xbox_gfx_vertex *v,
                   uint32_t count)
{
    xbox_gfx_vertex *out;
    uint32_t i, n = 0;

    if (!s_ops || !v || !count)
        return;
    s_stats.draws++;
    s_stats.vertices += count;

    switch (prim) {
    case XBOX_GFX_PRIM_POINTS:
    case XBOX_GFX_PRIM_LINES:
    case XBOX_GFX_PRIM_LINE_STRIP:
    case XBOX_GFX_PRIM_TRIANGLES:
    case XBOX_GFX_PRIM_TRIANGLE_STRIP:
        s_ops->draw(prim, v, count);
        return;

    case XBOX_GFX_PRIM_LINE_LOOP:
        if (count < 2 || !(out = scratch(count + 1))) return;
        memcpy(out, v, count * sizeof(*v));
        out[count] = v[0];
        s_ops->draw(XBOX_GFX_PRIM_LINE_STRIP, out, count + 1);
        return;

    case XBOX_GFX_PRIM_TRIANGLE_FAN:
    case XBOX_GFX_PRIM_POLYGON:
        if (count < 3 || !(out = scratch((count - 2) * 3))) return;
        for (i = 1; i + 1 < count; i++) {
            out[n++] = v[0];
            out[n++] = v[i];
            out[n++] = v[i + 1];
        }
        break;

    case XBOX_GFX_PRIM_QUADS:
        if (count < 4 || !(out = scratch(count / 4 * 6))) return;
        for (i = 0; i + 3 < count; i += 4) {
            out[n++] = v[i];     out[n++] = v[i + 1]; out[n++] = v[i + 2];
            out[n++] = v[i];     out[n++] = v[i + 2]; out[n++] = v[i + 3];
        }
        break;

    case XBOX_GFX_PRIM_QUAD_STRIP:
        /* Quad k is (2k, 2k+1, 2k+3, 2k+2) in winding order. */
        if (count < 4 || !(out = scratch((count - 2) / 2 * 6))) return;
        for (i = 0; i + 3 < count; i += 2) {
            out[n++] = v[i];     out[n++] = v[i + 1]; out[n++] = v[i + 3];
            out[n++] = v[i];     out[n++] = v[i + 3]; out[n++] = v[i + 2];
        }
        break;

    default:
        return;
    }
    if (n)
        s_ops->draw(XBOX_GFX_PRIM_TRIANGLES, out, n);
}

void xbox_gfx_present(void)
{
    if (!s_ops) return;
    s_stats.frames++;
    s_ops->present();
}

int xbox_gfx_read_surface(uint8_t *rgba, size_t size)
{
    if (!s_ops || !s_ops->read_surface || !rgba)
        return 0;
    return s_ops->read_surface(rgba, size);
}

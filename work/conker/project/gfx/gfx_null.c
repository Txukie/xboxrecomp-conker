/* Headless backend: accepts everything, draws nothing. */

#include "gfx_internal.h"

#include <stdlib.h>

static int  null_init(const xbox_gfx_config *cfg) { (void)cfg; return 1; }
static void null_shutdown(void) {}
static int  null_pump_events(void) { return 1; }
static void null_set_surface_size(uint32_t w, uint32_t h) { (void)w; (void)h; }
static void null_clear(uint32_t flags, uint32_t argb, float depth, uint32_t stencil)
{ (void)flags; (void)argb; (void)depth; (void)stencil; }
static void null_set_state(const xbox_gfx_state *st) { (void)st; }

static xbox_gfx_texture *null_texture_create(uint32_t w, uint32_t h, xbox_gfx_format fmt)
{
    (void)w; (void)h; (void)fmt;
    return (xbox_gfx_texture *)calloc(1, sizeof(xbox_gfx_texture));
}

static int null_texture_upload(xbox_gfx_texture *t, const void *d, size_t s, uint32_t p)
{ (void)t; (void)d; (void)s; (void)p; return 1; }

static void null_texture_destroy(xbox_gfx_texture *t) { free(t); }
static void null_bind_texture(uint32_t stage, xbox_gfx_texture *t) { (void)stage; (void)t; }
static void null_draw(xbox_gfx_primitive p, const xbox_gfx_vertex *v, uint32_t n)
{ (void)p; (void)v; (void)n; }
static void null_present(void) {}

const xbox_gfx_backend_ops xbox_gfx_null_ops = {
    "null",
    null_init, null_shutdown, null_pump_events, null_set_surface_size,
    null_clear, null_set_state,
    null_texture_create, null_texture_upload, null_texture_destroy,
    null_bind_texture, null_draw, null_present,
    NULL,
};

/* Backend contract for xbox_gfx. Only the gfx/ sources include this. */

#ifndef XBOX_GFX_INTERNAL_H
#define XBOX_GFX_INTERNAL_H

#include "xbox_gfx.h"

/* Textures are allocated by the backend; the common header comes first so
 * gfx_core can validate uploads without knowing backend types. */
struct xbox_gfx_texture {
    uint32_t width, height;
    xbox_gfx_format format;
};

/* Every backend implements all of these. draw() only ever receives
 * POINTS, LINES, LINE_STRIP, TRIANGLES or TRIANGLE_STRIP: gfx_core expands
 * everything else first. */
typedef struct {
    const char *name;
    int  (*init)(const xbox_gfx_config *cfg);
    void (*shutdown)(void);
    int  (*pump_events)(void);
    void (*set_surface_size)(uint32_t width, uint32_t height);
    void (*clear)(uint32_t flags, uint32_t argb, float depth, uint32_t stencil);
    void (*set_state)(const xbox_gfx_state *st);
    xbox_gfx_texture *(*texture_create)(uint32_t w, uint32_t h, xbox_gfx_format fmt);
    int  (*texture_upload)(xbox_gfx_texture *tex, const void *data, size_t size,
                           uint32_t pitch);
    void (*texture_destroy)(xbox_gfx_texture *tex);
    void (*bind_texture)(uint32_t stage, xbox_gfx_texture *tex);
    void (*draw)(xbox_gfx_primitive prim, const xbox_gfx_vertex *verts,
                 uint32_t count);
    void (*present)(void);
    int  (*read_surface)(uint8_t *rgba, size_t size);   /* may be NULL */
} xbox_gfx_backend_ops;

extern const xbox_gfx_backend_ops xbox_gfx_null_ops;
#if defined(XBOX_GFX_HAVE_D3D8COMPAT)
extern const xbox_gfx_backend_ops xbox_gfx_d3d8compat_ops;
#endif
#if defined(XBOX_GFX_HAVE_VULKAN)
extern const xbox_gfx_backend_ops xbox_gfx_vulkan_ops;
#endif
#if defined(XBOX_GFX_HAVE_METAL)
extern const xbox_gfx_backend_ops xbox_gfx_metal_ops;
#endif

/* Byte size of one top-level image of the given format. */
size_t xbox_gfx_format_size(xbox_gfx_format fmt, uint32_t w, uint32_t h);
int    xbox_gfx_format_is_compressed(xbox_gfx_format fmt);

#endif /* XBOX_GFX_INTERNAL_H */

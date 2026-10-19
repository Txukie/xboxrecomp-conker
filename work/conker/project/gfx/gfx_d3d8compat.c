/*
 * Legacy backend: draws through the xbox_d3d8 HLE device (D3D11 on Windows,
 * OpenGL on POSIX). It only works once that device exists, i.e. when the
 * title went through the HLE Direct3D path; D3D8LTCG titles such as Conker
 * never create it, so this backend mainly keeps the old renderers usable
 * while Vulkan and Metal mature.
 */

#include "gfx_internal.h"
#include "d3d8_xbox.h"

#include <stdlib.h>
#include <string.h>

typedef struct {
    xbox_gfx_texture base;
    IDirect3DTexture8 *tex;
} compat_texture;

static IDirect3DDevice8 *s_dev;
static int s_in_scene;

static IDirect3DDevice8 *dev(void)
{
    if (!s_dev)
        s_dev = xbox_GetD3DDevice();
    return s_dev;
}

static int compat_init(const xbox_gfx_config *cfg)
{
    (void)cfg;
    return dev() != NULL;
}

static void compat_shutdown(void)
{
    s_dev = NULL;
    s_in_scene = 0;
}

static int compat_pump_events(void) { return 1; }
static void compat_set_surface_size(uint32_t w, uint32_t h) { (void)w; (void)h; }

static void begin_scene(IDirect3DDevice8 *d)
{
    if (!s_in_scene) {
        d->lpVtbl->BeginScene(d);
        s_in_scene = 1;
    }
}

static void compat_clear(uint32_t flags, uint32_t argb, float depth, uint32_t stencil)
{
    IDirect3DDevice8 *d = dev();
    DWORD f = 0;
    if (!d) return;
    if (flags & XBOX_GFX_CLEAR_COLOR)   f |= D3DCLEAR_TARGET;
    if (flags & XBOX_GFX_CLEAR_DEPTH)   f |= D3DCLEAR_ZBUFFER;
    if (flags & XBOX_GFX_CLEAR_STENCIL) f |= D3DCLEAR_STENCIL;
    d->lpVtbl->Clear(d, 0, NULL, f, argb, depth, stencil);
}

/* NV2A/GL encodings → D3D8 enums. */
static DWORD blend_to_d3d(uint16_t gl)
{
    switch (gl) {
    case XBOX_GFX_BLEND_ZERO:                return D3DBLEND_ZERO;
    case XBOX_GFX_BLEND_ONE:                 return D3DBLEND_ONE;
    case XBOX_GFX_BLEND_SRC_COLOR:           return D3DBLEND_SRCCOLOR;
    case XBOX_GFX_BLEND_ONE_MINUS_SRC_COLOR: return D3DBLEND_INVSRCCOLOR;
    case XBOX_GFX_BLEND_SRC_ALPHA:           return D3DBLEND_SRCALPHA;
    case XBOX_GFX_BLEND_ONE_MINUS_SRC_ALPHA: return D3DBLEND_INVSRCALPHA;
    case XBOX_GFX_BLEND_DST_ALPHA:           return D3DBLEND_DESTALPHA;
    case XBOX_GFX_BLEND_ONE_MINUS_DST_ALPHA: return D3DBLEND_INVDESTALPHA;
    case XBOX_GFX_BLEND_DST_COLOR:           return D3DBLEND_DESTCOLOR;
    case XBOX_GFX_BLEND_ONE_MINUS_DST_COLOR: return D3DBLEND_INVDESTCOLOR;
    case XBOX_GFX_BLEND_SRC_ALPHA_SATURATE:  return D3DBLEND_SRCALPHASAT;
    }
    return D3DBLEND_ONE;
}

static DWORD cmp_to_d3d(uint16_t gl)
{
    /* GL NEVER..ALWAYS (0x200..0x207) map in order onto D3DCMP 1..8. */
    if (gl >= XBOX_GFX_CMP_NEVER && gl <= XBOX_GFX_CMP_ALWAYS)
        return (DWORD)(gl - XBOX_GFX_CMP_NEVER) + D3DCMP_NEVER;
    return D3DCMP_ALWAYS;
}

static void compat_set_state(const xbox_gfx_state *st)
{
    IDirect3DDevice8 *d = dev();
    DWORD cull = D3DCULL_NONE;
    if (!d) return;
    if (st->cull == XBOX_GFX_CULL_BACK)
        cull = st->front_ccw ? D3DCULL_CW : D3DCULL_CCW;
    else if (st->cull == XBOX_GFX_CULL_FRONT)
        cull = st->front_ccw ? D3DCULL_CCW : D3DCULL_CW;

    d->lpVtbl->SetRenderState(d, D3DRS_LIGHTING, FALSE);
    d->lpVtbl->SetRenderState(d, D3DRS_ZENABLE, st->depth_test);
    d->lpVtbl->SetRenderState(d, D3DRS_ZWRITEENABLE, st->depth_write);
    d->lpVtbl->SetRenderState(d, D3DRS_ZFUNC, cmp_to_d3d(st->depth_func));
    d->lpVtbl->SetRenderState(d, D3DRS_CULLMODE, cull);
    d->lpVtbl->SetRenderState(d, D3DRS_ALPHABLENDENABLE, st->blend_enable);
    d->lpVtbl->SetRenderState(d, D3DRS_SRCBLEND, blend_to_d3d(st->blend_src));
    d->lpVtbl->SetRenderState(d, D3DRS_DESTBLEND, blend_to_d3d(st->blend_dst));
    d->lpVtbl->SetRenderState(d, D3DRS_ALPHATESTENABLE, st->alpha_test);
    d->lpVtbl->SetRenderState(d, D3DRS_ALPHAFUNC, cmp_to_d3d(st->alpha_func));
    d->lpVtbl->SetRenderState(d, D3DRS_ALPHAREF, (DWORD)(st->alpha_ref * 255.0f));
    d->lpVtbl->SetRenderState(d, D3DRS_COLORWRITEENABLE, st->color_write_mask);
}

static D3DFORMAT fmt_to_d3d(xbox_gfx_format f)
{
    switch (f) {
    case XBOX_GFX_FMT_BC1: return D3DFMT_DXT1;
    case XBOX_GFX_FMT_BC2: return D3DFMT_DXT3;
    case XBOX_GFX_FMT_BC3: return D3DFMT_DXT5;
    default:               return D3DFMT_A8R8G8B8;  /* RGBA8 is swizzled on upload */
    }
}

static xbox_gfx_texture *compat_texture_create(uint32_t w, uint32_t h, xbox_gfx_format fmt)
{
    IDirect3DDevice8 *d = dev();
    compat_texture *t;
    if (!d) return NULL;
    t = (compat_texture *)calloc(1, sizeof(*t));
    if (!t) return NULL;
    if (d->lpVtbl->CreateTexture(d, w, h, 1, 0, fmt_to_d3d(fmt), D3DPOOL_DEFAULT,
                                 &t->tex) != 0 /* D3D_OK */ || !t->tex) {
        free(t);
        return NULL;
    }
    return &t->base;
}

static int compat_texture_upload(xbox_gfx_texture *base, const void *data,
                                 size_t size, uint32_t pitch)
{
    compat_texture *t = (compat_texture *)base;
    D3DLOCKED_RECT lr;
    const uint8_t *src = (const uint8_t *)data;
    uint32_t rows, row_bytes, y;
    (void)size;

    if (xbox_gfx_format_is_compressed(base->format)) {
        rows = (base->height + 3) / 4;
        row_bytes = (uint32_t)(xbox_gfx_format_size(base->format, base->width, 4));
    } else {
        rows = base->height;
        row_bytes = base->width * 4;
    }
    if (!pitch) pitch = row_bytes;

    memset(&lr, 0, sizeof(lr));
    if (t->tex->lpVtbl->LockRect(t->tex, 0, &lr, NULL, 0) != 0 /* D3D_OK */ || !lr.pBits)
        return 0;
    for (y = 0; y < rows; y++) {
        uint8_t *dst = (uint8_t *)lr.pBits + (size_t)y * lr.Pitch;
        const uint8_t *s = src + (size_t)y * pitch;
        if (base->format == XBOX_GFX_FMT_RGBA8) {
            uint32_t x;
            for (x = 0; x < base->width; x++) {
                dst[x * 4 + 0] = s[x * 4 + 2];
                dst[x * 4 + 1] = s[x * 4 + 1];
                dst[x * 4 + 2] = s[x * 4 + 0];
                dst[x * 4 + 3] = s[x * 4 + 3];
            }
        } else {
            memcpy(dst, s, row_bytes);
        }
    }
    t->tex->lpVtbl->UnlockRect(t->tex, 0);
    return 1;
}

static void compat_texture_destroy(xbox_gfx_texture *base)
{
    compat_texture *t = (compat_texture *)base;
    if (t->tex)
        t->tex->lpVtbl->Release(t->tex);
    free(t);
}

static void compat_bind_texture(uint32_t stage, xbox_gfx_texture *base)
{
    IDirect3DDevice8 *d = dev();
    compat_texture *t = (compat_texture *)base;
    if (!d) return;
    if (t) {
        d->lpVtbl->SetTexture(d, stage, (IDirect3DBaseTexture8 *)t->tex);
        d->lpVtbl->SetTextureStageState(d, stage, D3DTSS_COLOROP, D3DTOP_MODULATE);
        d->lpVtbl->SetTextureStageState(d, stage, D3DTSS_COLORARG1, D3DTA_TEXTURE);
        d->lpVtbl->SetTextureStageState(d, stage, D3DTSS_COLORARG2, D3DTA_DIFFUSE);
        d->lpVtbl->SetTextureStageState(d, stage, D3DTSS_ALPHAOP, D3DTOP_MODULATE);
        d->lpVtbl->SetTextureStageState(d, stage, D3DTSS_ALPHAARG1, D3DTA_TEXTURE);
        d->lpVtbl->SetTextureStageState(d, stage, D3DTSS_ALPHAARG2, D3DTA_DIFFUSE);
    } else {
        d->lpVtbl->SetTexture(d, stage, NULL);
        d->lpVtbl->SetTextureStageState(d, stage, D3DTSS_COLOROP, D3DTOP_SELECTARG1);
        d->lpVtbl->SetTextureStageState(d, stage, D3DTSS_COLORARG1, D3DTA_DIFFUSE);
        d->lpVtbl->SetTextureStageState(d, stage, D3DTSS_ALPHAOP, D3DTOP_SELECTARG1);
        d->lpVtbl->SetTextureStageState(d, stage, D3DTSS_ALPHAARG1, D3DTA_DIFFUSE);
    }
}

static void compat_draw(xbox_gfx_primitive prim, const xbox_gfx_vertex *v, uint32_t n)
{
    IDirect3DDevice8 *d = dev();
    D3DPRIMITIVETYPE pt;
    UINT prims;
    if (!d) return;

    switch (prim) {
    case XBOX_GFX_PRIM_POINTS:         pt = D3DPT_POINTLIST;     prims = n;     break;
    case XBOX_GFX_PRIM_LINES:          pt = D3DPT_LINELIST;      prims = n / 2; break;
    case XBOX_GFX_PRIM_LINE_STRIP:     pt = D3DPT_LINESTRIP;     prims = n - 1; break;
    case XBOX_GFX_PRIM_TRIANGLE_STRIP: pt = D3DPT_TRIANGLESTRIP; prims = n - 2; break;
    default:                           pt = D3DPT_TRIANGLELIST;  prims = n / 3; break;
    }
    if (!prims) return;

    begin_scene(d);
    /* xbox_gfx_vertex matches the XYZRHW|DIFFUSE|TEX1 FVF layout except for
     * field order (D3D8 wants color before texcoords), so repack. */
    {
        struct { float x, y, z, rhw; uint32_t color; float u, v; } *fvf;
        uint32_t i;
        fvf = malloc(n * sizeof(*fvf));
        if (!fvf) return;
        for (i = 0; i < n; i++) {
            fvf[i].x = v[i].x; fvf[i].y = v[i].y; fvf[i].z = v[i].z;
            fvf[i].rhw = v[i].rhw; fvf[i].color = v[i].color;
            fvf[i].u = v[i].u; fvf[i].v = v[i].v;
        }
        d->lpVtbl->SetVertexShader(d, D3DFVF_XYZRHW | D3DFVF_DIFFUSE | D3DFVF_TEX1);
        d->lpVtbl->DrawPrimitiveUP(d, pt, prims, fvf, sizeof(*fvf));
        free(fvf);
    }
}

static void compat_present(void)
{
    IDirect3DDevice8 *d = dev();
    if (!d) return;
    if (s_in_scene) {
        d->lpVtbl->EndScene(d);
        s_in_scene = 0;
    }
    d->lpVtbl->Present(d, NULL, NULL, NULL, NULL);
}

const xbox_gfx_backend_ops xbox_gfx_d3d8compat_ops = {
    "d3d8compat",
    compat_init, compat_shutdown, compat_pump_events, compat_set_surface_size,
    compat_clear, compat_set_state,
    compat_texture_create, compat_texture_upload, compat_texture_destroy,
    compat_bind_texture, compat_draw, compat_present,
    NULL,
};

/*
 * Renders a known scene through an xbox_gfx backend headlessly and checks
 * pixels read back from the NV2A surface.
 *
 *   gfx_render_test [backend] [--window]   backend defaults to vulkan
 *
 * --window opens a real window and presents ~2 s of frames before checking,
 * exercising the swapchain path as well.
 *
 * Exit 0 = pass, 1 = wrong pixels, 77 = backend unavailable (CTest skip).
 */

#include "xbox_gfx.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define W 64
#define H 48

static int failures;

static void expect(const uint8_t *px, int x, int y, uint32_t want_rgba, const char *what)
{
    const uint8_t *p = px + ((size_t)y * W + x) * 4;
    uint32_t got = (uint32_t)p[0] << 24 | (uint32_t)p[1] << 16 | (uint32_t)p[2] << 8 | p[3];
    int i, ok = 1;
    for (i = 0; i < 4; i++) {
        int g = (got >> (24 - 8 * i)) & 0xFF, w = (want_rgba >> (24 - 8 * i)) & 0xFF;
        if (abs(g - w) > 2) ok = 0;
    }
    printf("%-34s (%2d,%2d) = %08X %s\n", what, x, y, got, ok ? "ok" : "FAIL");
    if (!ok) {
        printf("    expected %08X\n", want_rgba);
        failures++;
    }
}

static xbox_gfx_vertex vtx(float x, float y, float u, float v, uint32_t argb)
{
    xbox_gfx_vertex r;
    r.x = x; r.y = y; r.z = 0.5f; r.rhw = 1.0f;
    r.u = u; r.v = v; r.color = argb;
    return r;
}

int main(int argc, char **argv)
{
    const char *name = argc > 1 ? argv[1] : "vulkan";
    int windowed = argc > 2 && !strcmp(argv[2], "--window");
    xbox_gfx_config cfg;
    xbox_gfx_state st;
    xbox_gfx_vertex quad[4], tri[3];
    xbox_gfx_texture *tex;
    uint8_t texels[2 * 2 * 4] = {
        255, 255, 0, 255,   255, 255, 0, 255,     /* RGBA8 yellow */
        255, 255, 0, 255,   255, 255, 0, 255,
    };
    static uint8_t px[W * H * 4];

    memset(&cfg, 0, sizeof(cfg));
    cfg.headless = !windowed;
    cfg.window_title = "xbox_gfx render test";
    cfg.vsync = 1;
    cfg.validation = getenv("XBOX_GFX_VALIDATION") != NULL;
    if (!strcmp(name, "vulkan"))     cfg.backend = XBOX_GFX_BACKEND_VULKAN;
    else if (!strcmp(name, "metal")) cfg.backend = XBOX_GFX_BACKEND_METAL;
    else                             cfg.backend = XBOX_GFX_BACKEND_NULL;

    if (!xbox_gfx_init(&cfg)) {
        printf("backend %s unavailable, skipping\n", name);
        return 77;
    }
    xbox_gfx_set_surface_size(W, H);

    /* 1. clear to opaque red */
    xbox_gfx_clear(XBOX_GFX_CLEAR_COLOR | XBOX_GFX_CLEAR_DEPTH, 0xFFFF0000u, 1.0f, 0);

    /* 2. opaque green quad over the left half, via QUADS expansion */
    xbox_gfx_state_default(&st);
    st.depth_test = 0;
    xbox_gfx_set_state(&st);
    xbox_gfx_bind_texture(0, NULL);
    quad[0] = vtx(0, 0, 0, 0, 0xFF00FF00u);
    quad[1] = vtx(W / 2, 0, 0, 0, 0xFF00FF00u);
    quad[2] = vtx(W / 2, H, 0, 0, 0xFF00FF00u);
    quad[3] = vtx(0, H, 0, 0, 0xFF00FF00u);
    xbox_gfx_draw(XBOX_GFX_PRIM_QUADS, quad, 4);

    /* 3. 50% blue blended over the top-right quarter, as a fan */
    st.blend_enable = 1;
    st.blend_src = XBOX_GFX_BLEND_SRC_ALPHA;
    st.blend_dst = XBOX_GFX_BLEND_ONE_MINUS_SRC_ALPHA;
    xbox_gfx_set_state(&st);
    quad[0] = vtx(W / 2, 0, 0, 0, 0x800000FFu);
    quad[1] = vtx(W, 0, 0, 0, 0x800000FFu);
    quad[2] = vtx(W, H / 2, 0, 0, 0x800000FFu);
    quad[3] = vtx(W / 2, H / 2, 0, 0, 0x800000FFu);
    xbox_gfx_draw(XBOX_GFX_PRIM_TRIANGLE_FAN, quad, 4);

    /* 4. textured (yellow) triangle in the bottom-right, white diffuse */
    st.blend_enable = 0;
    xbox_gfx_set_state(&st);
    tex = xbox_gfx_texture_create(2, 2, XBOX_GFX_FMT_RGBA8);
    if (!tex || !xbox_gfx_texture_upload(tex, texels, sizeof(texels), 8)) {
        printf("texture create/upload failed\n");
        return 1;
    }
    xbox_gfx_bind_texture(0, tex);
    tri[0] = vtx(W / 2, H / 2, 0, 0, 0xFFFFFFFFu);
    tri[1] = vtx(W, H / 2, 1, 0, 0xFFFFFFFFu);
    tri[2] = vtx(W, H, 1, 1, 0xFFFFFFFFu);
    xbox_gfx_draw(XBOX_GFX_PRIM_TRIANGLES, tri, 3);

    /* 5. alpha test rejects a fully transparent quad over everything */
    st.alpha_test = 1;
    st.alpha_func = XBOX_GFX_CMP_GREATER;
    st.alpha_ref = 0.5f;
    xbox_gfx_set_state(&st);
    xbox_gfx_bind_texture(0, NULL);
    quad[0] = vtx(0, 0, 0, 0, 0x00FFFFFFu);
    quad[1] = vtx(W, 0, 0, 0, 0x00FFFFFFu);
    quad[2] = vtx(0, H, 0, 0, 0x00FFFFFFu);
    quad[3] = vtx(W, H, 0, 0, 0x00FFFFFFu);
    xbox_gfx_draw(XBOX_GFX_PRIM_TRIANGLE_STRIP, quad, 4);

    xbox_gfx_present();
    if (windowed) {
        /* Re-present the accumulated surface; nothing below clears it. */
        int i;
        for (i = 0; i < 120 && xbox_gfx_pump_events(); i++)
            xbox_gfx_present();
    }

    if (!xbox_gfx_read_surface(px, sizeof(px))) {
        printf("backend %s cannot read back, skipping pixel checks\n", name);
        xbox_gfx_shutdown();
        return 77;
    }
    expect(px, 8, 24, 0x00FF00FFu, "green quad (QUADS)");
    expect(px, 48, 8, 0x800080BFu, "blue over red (blend, FAN)");  /* alpha blends too */
    expect(px, 60, 40, 0xFFFF00FFu, "yellow texel (texture)");
    expect(px, 36, 44, 0xFF0000FFu, "red clear under nothing");

    {
        xbox_gfx_stats s;
        xbox_gfx_get_stats(&s);
        printf("stats: frames=%llu draws=%llu clears=%llu\n",
               (unsigned long long)s.frames, (unsigned long long)s.draws,
               (unsigned long long)s.clears);
    }
    xbox_gfx_shutdown();
    printf("%s\n", failures ? "FAILED" : "PASSED");
    return failures ? 1 : 0;
}

# xbox_gfx — host GPU backends

Backend-neutral rendering interface for Conker's host GPU backends. It is
meant to sit under upstream xboxrecomp's pushbuffer executor as an
`Nv2aBackend` (adapter still to write). See `xbox_gfx.h` for the API and
[docs/technical/porting.md](../../../../docs/technical/porting.md) for the design.

| File | Backend | Status |
|---|---|---|
| `gfx_core.c` | — | selection, stats, primitive expansion |
| `gfx_null.c` | `null` | complete (headless, draws nothing) |
| `gfx_vulkan.c` | `vulkan` | working: clears, draws, blending, alpha test, textures (stage 0), swapchain, read-back |
| `gfx_metal.m` | `metal` | skeleton: clear + present only, never compiled |
| `gfx_d3d8compat.c` | `d3d8compat` | adapter over the legacy D3D11/OpenGL `xbox_d3d8` device |

Pick a backend with `XBOX_GFX_BACKEND=vulkan|metal|d3d8compat|null`;
`XBOX_GFX_VALIDATION=1` enables Vulkan validation layers.

Shaders live in `shaders/`. After editing them, run
`./compile_shaders.sh` (needs `glslc`) and commit the regenerated
`gfx_vulkan_shaders.h`.

Test: `xbox_gfx_render_test [vulkan|null] [--window]` (registered with CTest).

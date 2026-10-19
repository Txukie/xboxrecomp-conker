# Porting: Windows, Linux, macOS — Vulkan and Metal

Plan and current state for shipping the Conker recompilation as a native
Windows, Linux and macOS executable, with Vulkan (Windows/Linux) and Metal
(macOS) rendering.

## Basis: upstream xboxrecomp

The runtime and tools are [xboxrecomp](https://github.com/sp00nznet/xboxrecomp),
pinned as a submodule in `external/xboxrecomp` (v0.15.0). Upstream already
provides most of the porting work:

- Linux and macOS hosts, x86-64 and arm64, with SDL2 for window, input and
  audio. Device registers (APU, AC'97, USB) are trapped through
  `xbox_VehMmioFault` (Windows) or `xbox_PosixMmioFault` (POSIX, decoded by
  `mmio_decode_a64.h` on arm64).
- The NV2A register window backed as ordinary memory, with a poll thread
  following `DMA_PUT`. No instruction decoding is involved on any host, which
  is what makes arm64 work.
- **The push-buffer executor** (`external/xboxrecomp/src/kernel/nv2a_pb_exec.c`,
  `RECOMP_PB_EXEC=1`) for titles that statically link D3D8LTCG, which is
  Conker's case. It walks the ring like the DMA engine and answers D3D's
  fences and semaphores. Vertex programs (`nv2a_vsh_interp.c`), fixed-function
  transform, combiners and four texture stages all run on the CPU, and the
  executor either rasterises into guest memory itself or hands the work to a
  registered `Nv2aBackend` (`src/kernel/nv2a_backend.h` in the submodule).
- 348 kernel bridges, and a recompiler that routes calls into the middle of a
  function to the function that contains it (#207).

Conker's own runtime patches, from before the move, were checked against
v0.15.0:

| Conker patch | In v0.15.0 |
|---|---|
| `RtlInitAnsiString`, `FscSetCacheSize` bridges | yes |
| Handles passed by value | yes (separate by-value accessor) |
| Waits on guest-built dispatcher objects | yes (`ke_guest_event`) |
| XBE TLS (`fs:[4]` slot vector; Conker's index at `0x75F014`) | yes, generic XBE TLS loader |
| Fake KPCR Prcb, kernel window at `0x80000000` | yes |
| Code-range check for indirect calls | yes (from the XBE) |
| 128 MiB pool | runtime call: `xbox_SetTotalRam(XBOX_DEVKIT_RAM)` in `main.c` |
| Extra `fprintf` tracing in file-open bridges | dropped (debug only) |

## Rendering architecture

```
recompiled D3D8LTCG ──push buffer──▶ nv2a_pb_scan / nv2a_pb_exec (upstream)
                                       │ vertex programs, FFP, clipping on CPU
                                       ▼
                                  Nv2aBackend { clear, draw, flip }
                                       │
              ┌────────────────────────┼─────────────────────────┐
     CPU rasteriser (upstream)   xbox_gfx adapter (todo)   ...
                                       │
                         work/conker/project/gfx (xbox_gfx)
                          vulkan │ metal │ d3d8compat │ null
```

`Nv2aBackend` hands over triangles already in surface pixels, with
per-vertex colour, texel-space UVs, the stage-0 texture and NV2A/GL-encoded
render state. `xbox_gfx` was designed around the same shape (screen-space
vertices, GL enum encodings, linear textures), so the adapter is small:

- `clear` maps to `xbox_gfx_clear`, using the surface size and the Z24S8
  split of `zstencil`.
- `draw` maps to `xbox_gfx_set_state` plus `xbox_gfx_draw(TRIANGLES)`.
  Textures go through `nv2a_backend_decode_texture`, which returns ARGB, then
  `xbox_gfx_texture_*`, cached by offset, format and size. UVs are divided by
  the texture size, because the executor gives texels and xbox_gfx wants
  normalised coordinates.
- `flip` maps to `xbox_gfx_present` and `xbox_gfx_pump_events`.

Gaps to close in `xbox_gfx` for that: stencil state, blend equation and
blend colour, texture wrap modes, and anti-aliased surfaces (`aa_sx`/`aa_sy`).

### Vulkan backend (`gfx/gfx_vulkan.c`)

Draws into an offscreen colour + depth/stencil surface at NV2A resolution
inside one `LOAD`/`STORE` render pass, and blits it letterboxed into the
swapchain on flip. Pipelines are cached by state and topology. The GLSL
shaders in `gfx/shaders` are compiled to the committed
`gfx_vulkan_shaders.h` by `gfx/compile_shaders.sh`. On macOS it runs through
MoltenVK: it enables the portability enumeration and subset extensions when
they are present. It is tested by `gfx_render_vulkan`, which runs headless
and checks the read-back pixels.

### Metal backend (`gfx/gfx_metal.m`)

A skeleton: window, device, surface, clear and present. It has never been
compiled. To finish it, mirror the Vulkan backend and cross-compile the same
GLSL to MSL with SPIRV-Cross. The recommendation is to use Vulkan everywhere
(MoltenVK on macOS) until rendering is correct, then fill in Metal against
known-good output.

## Status by host

| | Windows x64 | Linux x86-64 | macOS arm64 / x86-64 |
|---|---|---|---|
| Runtime (upstream) | supported upstream | **builds here** | supported upstream |
| Conker host code | written (VEH + dbghelp) | **builds, links** | written (sigaction), not compiled |
| Vulkan backend | needs Vulkan SDK + SDL2 | **tested** | via MoltenVK, not compiled |
| Metal backend | — | — | skeleton |

## Runtime fixes carried locally

`work/conker/patches/xboxrecomp/` holds fixes that the CMake configure step
applies to the submodule. Each should go upstream:

1. **POSIX: hold the whole guest window above 64 MB of RAM.** With 128 MB
   the span stops at `0x80000000` and Linux's top-down placement puts the
   contiguous window on the next mapping (EEXIST). Conker's first
   `MmAllocateContiguousMemory` faulted at guest `0x80001000`.
2. **`NtQueryVirtualMemory`: fail above the user range, report free space
   as one region, and use the runtime RAM size.** Conker walks its address
   space; with every address answered as a 4 KB free page up to `0xFFFFFFFF`
   the walk wrapped and ran forever (770 M queries in 30 s).

## Next steps

1. **GPU progress for D3D8LTCG.** After its first flip D3D spins waiting for
   the GPU. Register the semaphore target
   (`nv2a_pb_set_semaphore_target`, the pointer at device+0x30) and, if
   needed, a fence mirror (`xbox_Nv2aMirrorFence`); see upstream's
   `docs/technical/pushbuffer-executor.md` and `d3d8ltcg-device-context.md`.
2. **First frames** from the CPU rasteriser (`[GPU] ... pixels written`).
3. **Write the `Nv2aBackend` → `xbox_gfx` adapter** and register it from
   `main.c`.
4. **Compile on Windows and macOS.**

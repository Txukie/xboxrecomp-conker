# Porting: Windows, Linux, macOS — Vulkan and Metal

Plan and current state for shipping the Conker recompilation as a native
Windows, Linux and macOS executable, with Vulkan (Windows/Linux) and Metal
(macOS) rendering.

## Basis: upstream xboxrecomp

The runtime and tools are [xboxrecomp](https://github.com/sp00nznet/xboxrecomp),
pinned as a submodule in `external/xboxrecomp` (v0.16.0). Upstream already
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
| Runtime (upstream) | **builds here** | **builds here** | supported upstream |
| Conker host code | **tested** (VEH + dbghelp, MinGW-w64) | **tested** | written (sigaction), not compiled |
| Vulkan backend | **tested** | **tested** | via MoltenVK, not compiled |
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
4. **Compile on macOS.**

## Performance

Goal: a steady frame rate on the Steam Deck at 1X render and the Deck's own
1280x800 (16:10), where 0.2.1 averaged low and its frame times jumped
around.

What profiling found on a desktop (Ryzen 7 5800X, RX 9070 XT), uncapped in
the first garden, and what 0.2.2 changed (patch 0027):

- The game's main thread spends most of the frame in D3D's wait for the GPU
  to go idle (`sub_0053C450`, spinning on the FIFO put/get and PGRAPH
  status). The frame is bound by the push-buffer executor's thread and,
  through it, by every point where that thread waits for the GPU.
- Conker's glow samples the 640x480 Z24S8 depth buffer as a LIN_R8G8B8A8
  texture every frame, from the front end on. Each frame read depth back
  (a full GPU wait), converted it on the CPU, hashed it and decoded it a
  texel at a time (`sample_tex`, a quarter of the executor thread). It is
  now made on the GPU from the depth image (`shaders/zeta_pack.frag`).
  `RECOMP_VK_ZETA_READBACK=1` brings back the old path.
- Four render targets a frame (two 128x128 and one 64x64 16-bit, one
  256x256 32-bit) are drawn as linear surfaces and then as swizzled ones at
  the same address. Each switch went through guest memory with a full GPU
  wait: about 8 ms of waiting per frame on the desktop. The new view is
  redrawn from the old one on the GPU (`shaders/surf_alias.frag`, the same
  byte permutation, checked texel for texel against the CPU's swizzle).
  `RECOMP_VK_ALIAS_READBACK=1` brings back the old path.
- Result on the desktop, standing in the garden uncapped: about 49 fps
  before, 62 after. Full flushes went from about 5 a frame to 2.

On the Steam Deck (1280x800, 1X, 30 fps cap, first garden), 0.2.2 ran at
about 24 fps. The GPU was not short of power (13 W of 15) nor of speed:
with its clock fixed at 1600 MHz the game held 30 fps at 42% GPU load. Its
clock was the problem. The renderer recorded a whole frame and submitted it
at the flip, so the GPU idled while the CPU recorded; the Deck's governor
took that for low load and kept the clock at 1040 MHz, often at 200. 0.3.0
(patch 0028):

- Submits every 64 draws (`RECOMP_VK_SUBMIT_DRAWS`, 0 for once a frame),
  so the GPU works while the CPU records. The Deck then holds 30 fps with
  the clock on automatic, at about 80% GPU load.
- D3D's GPU-idle wait (`sub_0053C450`) and its flush wait (`sub_0053C630`)
  sleep after their first 64 polls instead of spinning, and the executor's
  ack thread sleeps when nothing has been submitted for 1 ms: about 5 W
  instead of 13 at the same frame rate. Pausing those waits exposed that
  the kick latch (PGRAPH 0x400B10, which `sub_0053C120` waits on) was only
  written by the DMA walk; it is now written in both modes.

The slingshot section then ran at 24 fps on the Deck, at 1X as at 2X, so
not bound by pixels. With the vertex programs on the CPU
(`RECOMP_VK_CPU_VSH=1`) the GPU's load fell from 78% to 9%: the GPU's
frame was the vertex-program interpreter (`shaders/nv2a_vsh.vert`), which
indexes its registers with values read from the program and so took all
192 VGPRs and 56 KB of code per pipeline. 0.3.0 (also patch 0028):

- Each program is translated to GLSL (`src/vulkan/nv2a_vk_vprog.c`, from
  `nv2a_vsh.vert`'s own text with the program in place of the loop) and
  compiled with glslang on a compile thread; the interpreter runs it until
  then. 24 to 48 VGPRs and 4 to 16 KB each. The slingshot section: 30 fps
  at about 20% GPU load. glslang is linked statically (its archive, with
  local `cosh`/`sinh` so the binary keeps needing glibc 2.43, which SteamOS
  has); SPIRV-Tools and libstdc++ go in the AppImage.
- Pipelines are built from `VK_EXT_graphics_pipeline_library` parts (vertex
  input, vertex shader, combiner, output) and linked on first use; a
  compile thread builds the optimised pipeline and swaps it in.
  `RECOMP_VK_GPL=0` compiles them whole.
- Every pipeline the game asks for is listed in
  `<data>/pipelines.bin` (`RECOMP_VK_PIPELINE_LIST`) and built again at
  each start: on the Deck, 190 pipelines in 2.9 s, and a menu that took a
  minute of compiling on the first run of a build ran smoothly on the next.
  A new build changes the shaders, so its first run still compiles.

Also in 0.3.0: the barn level's light shafts flashed orange over the scene
every few seconds on the Deck, and on the desktop only with the vertex
programs on the CPU. They are drawn from an INLINE_ARRAY whose vertex
carries a 16-bit pair, and the executor sized 16-bit attributes as floats
when laying out inline vertices: every vertex after the first was read
from misaligned dwords, positions up to 1e34. The layout now uses
attr_elem_bytes. Found by skipping draws by texture at run time, then
logging the shaft draws' attributes.

Next steps, in the order they would be taken (none investigated yet):

1. **Uncapped on the Deck.** At 20% GPU load at 30 fps, 60 fps should be
   in reach; the executor thread (about 70% of a core at 30) is then the
   likely limit.
2. **Hashing.** Every surface and texture in use is hashed once a frame to
   notice CPU writes: about 20 MB a frame, now the largest cost on the
   executor thread. Split it into textures and surfaces first; then a SIMD
   hash, or skipping memory known not to have been written (page write
   tracking, e.g. soft-dirty bits or a write-protect fault) instead of
   rereading it.
3. **Presentation without a wait.** Every flip reads back each drawn surface
   and the frame to show, and waits for the GPU (`vk_resolve`). Submitting
   that without waiting and presenting it at the next flip would let the
   CPU and GPU overlap, at a frame of latency. Mind the front end's
   256x256 luminance downsample, which the CPU reads to set the exposure.
4. **Visibility tests without a wait.** Draining the occlusion reports at a
   semaphore release flushes when a result is not in yet (about once a
   frame). Writing a report only once its fence has signalled, leaving it
   incomplete until then as D3D expects, would remove that wait, if Conker
   does not spin on the result.
5. **The executor's own cost.** `nv2a_pb_exec_method`, `note` and
   `pb_walk_segment` are about a sixth of its thread: profile which
   methods are hot.
6. **Texture decode fast paths** for the formats that still go texel by
   texel through `sample_tex` (seen: 0x00, 0x13, 0x1A, 0x24, 0x28), which
   matter on level loads.

## Language and the loading screen

A save slot's name (+8 of the slot object at 0x84B120, `Name=` in SaveMeta.xbx)
is in the language the save was made in, and the game finds the save on disk by
it (sub_0034FC90): changing it gives the "damaged save" page. Only what is drawn
changes: sub_00204E80/EE0/F40, which copy a slot's title into its text, give the
default name in this launch's language (+0x2C4) instead.

The game takes its language from the console (XGetLanguage, sub_0042C91F,
read once at start by sub_002A7840, which picks `aid/text/<language>` and the
Japanese fonts); toolkit patch 0030 makes that answer settable. The disc has
every language's text, and the voices are English in all of them. Strings this
port adds are in `src/conker_lang.c`, looked up by their English text. The menu
pages draw in the title font (`aid/font/FrontendTitle[Japanese]`), far smaller
than the text font: its character table is the open-addressed list of
`{UTF-16 code, glyph}` pairs in the font's file, and a character it lacks draws
as a box, so check strings against it.

Level loads (sub_002AB0C0) flip nothing while they run. Their first act is now
the game's own message screen, main_init_DrawSplashScreen (sub_002A6EA0: wide
text, x, y, scale), which stays up until the level's first frame; the text is
the game's TRANS_Loading in each language. The hook is hand-added to the
generated sub_002AB0C0, matching what `regenerate.sh` emits for
`sub_002AB0C0_enter`. `misc\loading_screen` and `misc\loading_disk` are names
nothing in the XBE points at, with no files on the disc.

## Parked

- **Weapon: Original (frying pan instead of the bat).** Parked 2026-10-27,
  to come back to. Findings so far:
  - The remake has no Conker animations for the pan: the training section
    ("Pan Handled") uses the bat's 23 body animations
    (`characters\conker\Weapons\BaseballBat\*`), which every level loads.
  - Held objects are named by the table at 0x006A6108, indexed by object id
    (0x280 `BaseballBat`, 0x281 `FryingPanBound`). The name builds the path
    `aid\bfdmodel\attach\<name>\default.rbm`.
  - The pan's model (`FryingPanBound`) and its six hand animations
    (`anim\attach\FryingPan\*`) exist only inside the training level's
    package, `zpackage\Level\TrainingLevel\default.rbm`.
  - The cutscene prop `fryingpan` (object 0x18), loaded everywhere, does not
    work as a drop-in: naming the bat object after it hangs the game when
    the weapon comes out.
  - Plan: an extractor for the packages (Rare's CAFF; header 0x180, section
    entries with a compression type at +0xC, 0 = none, 2 = a custom
    compression that is not deflate; the parser is around 0x00405C00-0x00407700).
    The pan's files would then be shipped as uncompressed loose files
    through the mods overlay.

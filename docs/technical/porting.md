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

### The window through Vulkan (0.7.0, patch 0045)

Until 0.6.0 the window showed every frame with an SDL renderer (OpenGL on
Linux, Direct3D on Windows): the renderer drew the frame on the GPU, read it
back into memory (with FSR at 4K, 33 MB a frame) and SDL uploaded it again
to show it. No Vulkan overlay saw the window either: MangoHud started with
`MANGOHUD=1` (Steam's launch options, GOverlay) found no swapchain and drew
nothing; only the `mangohud` command, through its OpenGL hook, did.

Now the window has a Vulkan surface and swapchain of its own
(`src/vulkan/vk_window.c`), on a present thread:

- the renderer's frame, post-processed, is copied on the GPU into one of
  three images and shown from there: nothing goes through memory;
- the CPU's frames (the launcher's page, the pipeline build's picture, the
  CPU rasteriser, the display surface before the first flip) are uploaded;
- before the renderer's device exists (the launcher runs first) the window
  shows the CPU's frames on a small device of its own, which goes when the
  renderer's takes over; the launcher's window, made with
  `SDL_WINDOW_VULKAN`, is still the game's;
- vsync is mailbox where the window has it (each refresh shows the latest
  frame, and a present never waits for the display while it holds the
  queue the renderer submits to), FIFO elsewhere; off is immediate.

The debug readout and F12 marks go through the window's overlay and
screenshot calls (`xbox_WindowSetOverlay`, `xbox_WindowShot`), which both
paths implement. `RECOMP_PRESENT=sdl` brings back the SDL renderer, which is
also what the window falls back to when Vulkan cannot present.

Measured in headless gamescope (RX 9070 XT, 1280x960 window, 4X render
scale, vsync off, 240 fps), the last 20 s of an 80 s run of the attract
sequence: 198 frames a second shown through Vulkan against 93 through the
SDL renderer, median frame time 3.3 ms against 11.0 ms.

### The executor's frame (0.7.0, patch 0046)

Profiled uncapped in the pub (desktop; `perf` cannot open events here, so
by sampling the debug build's threads with `eu-stack`): the push-buffer
executor (`nv2a_ack_thread`) was busy about 85% of the time and the game's
thread 36%, waiting on it. `RECOMP_VK_VERBOSE` now also reports, every 300
frames, the time per frame, the flip's resolve and write-back, texture
hashing, soft-flush waits, every full flush by caller with its wait, and
every surface written back to guest memory. What changed:

- **The flip's readbacks a flip late.** Each frame wrote about 2 MB of
  drawn surfaces back to guest memory (two 256x256, two 128x128, a 64x64,
  a 128x256 and a 128x128 target, the 640x480 frame every other frame, and
  some 32x32 ones), after waiting for the GPU. With the window shown
  through Vulkan nothing reads the frame from guest memory, so they are now
  submitted without waiting and written at the next flip (the CPU sees them
  a frame later; the exposure's luminance read is the only reader found).
  Resolve went from 0.9 to 0.45 ms a frame, the GPU wait at the flip is
  gone, and frames that flip often (loading, the intro) went from about
  760 to 1100 a second. `RECOMP_VK_RESOLVE=now` brings back the wait.
- **Writing back in one pass**: the copy and the hash of what was written
  are one loop (`hash_copy`, checked equal to `hash_bytes` on random data).
- **Indices and inline vertices in bulk**: `ARRAY_ELEMENT16` and
  `INLINE_ARRAY` are most of the push buffer's words (118 and 60 million of
  637 million in a 90 s run); a run of them goes to the executor in one
  call (`nv2a_pb_exec_run`) instead of one per word.
- **The method inventory only when asked**: `note()` counted every word
  for `RECOMP_PB_SCAN`'s report, about 8% of the executor without it.
- **The fog carry on a slice**: after each program batch the whole vertex
  program ran once on the CPU to carry oFog (xemu's model). It now runs
  only the instructions oFog depends on (typically 7 of 35), and nothing
  for a program that does not write it (about 40% of them); over 3.6
  million runs checked against the whole program, none differed.
- **The program once per change**: each draw exported the decoded program
  and hashed and compared it to find its compiled shader; a generation
  number that changes with the program skips both while it repeats.
- A `getenv` on every draw (`RECOMP_PB_EXEC_VERBOSE`) is read once.
- **Texture hashing with AVX2.** Textures are hashed every frame they are
  used, to notice what the CPU wrote into them: about 180 textures and
  6.2 MB a frame in the pub, at 14 GB/s, bound by the hash's multiplies. An
  AVX2 hash (`tex_hash`, XXH3's accumulator shape, picked at run time;
  `hash_bytes` without AVX2) runs at 66 GB/s from cache, and no 1-3 byte
  change in a million left it unchanged. In the game: 0.44 to 0.27 ms a
  frame, now bound by memory. Skipping the hash altogether would need
  write tracking on guest memory (below).

Measured with the machine loaded by another job (frames about 25 ms), run
alternately twice each: 45.0 and 47.6 fps against 40.5 and 42.2 without
patch 0046, the same frames on screen. Still open: texture hashing (0.27 ms
a frame on the desktop, memory-bound; skipping it means trapping the CPU's
writes to texture pages, in every view of them -- the contiguous window
and the tiled aperture -- and keeping file reads into guest memory from
failing on a protected page), the visibility-test wait (about 0.15 ms,
one full flush a frame; larger on the Deck, untested there) and one submit
every 64 draws.

### In-between frames: noise, floating eyes, cuts (0.7.0, patch 0047)

Two faults of frame interpolation (patch 0041; Frame Rate above 30), first
seen on the Deck in the barn's opening cutscene:

- **Loading screens as noise.** An in-between frame is drawn again after
  the title's own, and it sampled its textures from guest memory as it was
  then. The frame before a load showed the loading screen's art, and by
  the time it was drawn again the level's data had been read over it: the
  screen came out as noise with "Loading..." on it. An in-between frame now
  samples the textures the title's own draw used (`tex_get` under
  `s_replay`), without hashing them again.
- **Eyes and eyelids that float off a creature for a frame.** A draw of A
  is blended toward the same draw of B, found by key: the n-th of a key in
  A went with the n-th in B. In the barn's crowd every creature's eyes are
  drawn alike, so one drawn earlier or later than in the frame before, or
  one creature blinking, paired one creature's eyes with another's and
  blended them halfway across. Now several of a key are paired nearest
  first, by the constants that tell them apart (those that differ among
  them in one frame, scaled by how far apart they are there; the camera,
  shared, does not count), and one whose nearest is still more than a
  quarter of the way to another is drawn as in A. A draw alone of its key
  in both frames could still be another one (one creature's eyelids in A,
  another's in B): when it moved far more than the frame's draws did, it
  is blended only if a neighbour in the frame went with the neighbour on
  its side in B, as one character's parts are drawn one after another.

Checked by capturing every shown frame of the cutscene at the Deck's
settings (render scale 2, 60 fps) and scoring each 8x8 block against the
average of the frames either side: before, 96 frames scored 60 or more,
the crowd's eyes among them; after, about 20, and those looked at are the
paint pot's own bouncing. At 30 fps (the title's frames only) the eyes
never float.

Two more, from the next Deck run:

- **A flash at camera cuts.** A frame where most draws jump (a cut) is
  meant to be shown without blending, but how far a draw moved was
  measured over all its constants, and huge placeholders among them made
  every draw look still: a cut was never found, and the frame between two
  shots was drawn from a camera halfway between them -- through walls, or
  into the sky. Only the constants that changed now count, and huge or
  non-finite ones not at all. In the barn's cutscene, a draw moves 0.002 to
  0.01 between frames, 0.12 in a fast pan and 0.4 to 0.6 at a cut, and
  every cut there is now one.
- **Below 60 fps in heavy cutscenes on the Deck.** The executor was 92%
  busy in game 3's opening cutscene, at 46-49 fps: each in-between frame
  cost it 5 to 11 ms. Of the two frames shown per frame drawn, one is A as
  the title drew it, and it was drawn again from the record. It is now
  shown from the title's own surface, which still holds it (the title's
  next frame goes into the other buffer), unless the title has drawn there
  since (a loading screen flips one buffer over and over): then it is
  drawn again as before. On the desktop an in-between frame went from 1.7
  to 2.7 ms to 1.2 to 1.5. The share of draws blended is
unchanged (70 to 99% by scene).

And from the run after that:

- **White lines along edges, at render scale 1.** Once the measure of how
  far a draw moved worked (above), the rule that leaves a draw that moved
  far (0.5 or more) unblended began to act on single draws, where a few
  small constants crossing zero read as far. A draw left where it was
  while its neighbours moved opened a seam along their shared edge, a
  pixel wide at render scale 1 and blended away at 2. Every paired draw is
  blended again, as before the fix; the measure only finds cuts, where most
  draws jump, and the lone-draw rule above only acts on one that moved
  four times as far as the frame's draws do. Not seen on the desktop
  either way; to be confirmed on the Deck.
- **Uneven frame times.** An in-between frame went to the window when it
  was drawn, not when it was due: at 6 ms a frame on the Deck, it came
  6 ms late after the title's frame and as early before the next, and a
  frame-time graph jumped between about 10 and 24 ms. It is now drawn
  ahead of its time by what drawing one takes and the window holds it
  until then (`vkw_publish_at`). With a 6 ms draw simulated on the desktop,
  the time between presents had a deviation of 0.6 to 1.4 ms against 6.8
  to 9.4 without (`RECOMP_VK_PACE=0` turns it off;
  `RECOMP_VK_VERBOSE` reports it every 600 presents).
- **120 frames a second where the title draws 60.** The setting's factor
  assumes the title draws 30 a second; game 3's opening titles draw 60 and
  were shown at 120, half of it for nothing. The factor now follows the
  title's rate: none in between where it draws 60.

### Shader stand-ins, texture decode, in-between holes (0.7.0, patch 0048)

The Deck run after that (1X, 30 fps limit, no white lines seen) still
stopped twice where the player noticed: the tutorial's explosion, 0.8 s,
and a cut in the castle cutscene before the first level, 1.4 s. Both were
the fragment stage of a new combiner program compiled on the thread that
records the frame (`parts compiled: pixel 1, 827 ms`), each a pipeline the
seed and the player's list did not have yet.

- **Stand-ins.** `nv2a.frag` builds twice: specialised, as before, and as
  `NV2A_DYN`, where the combiner program and its switches are read from the
  uniform block the draw fills anyway. When a draw's fragment stage is not
  compiled, `pipe_get` draws it with the stand-in (one per render state,
  its fragment stage compiled at start by the compile threads) and queues
  the draw's own pipeline ahead of the optimisation jobs; it replaces the
  stand-in when ready. The stand-in costs more per pixel, for a few frames.
  Checked on the desktop with every draw a stand-in
  (`RECOMP_VK_STANDIN=2`): the barn cutscene matches the specialised run
  frame for frame; without the seed, no fragment stage was compiled on the
  recording thread. `RECOMP_VK_STANDIN=0` turns it off; the slow-frame
  report counts stand-ins.
- **DXT textures by block.** An upload decoded a DXT image texel by texel,
  each texel decoding its whole 4x4 block: sixteen decodes per block. The
  Deck log had runs of frames with one upload taking 17 ms, three taking
  35 to 50. `d3d8_dxt_decode_block` decodes a block once (the executor's
  block cache uses it too); bit-identical to the texel decoder on 6
  million random blocks, and a 1024x1024 DXT1 image takes 3.5 ms instead
  of 13 on the desktop.

The run after that (1X, 60 fps): no freeze at the explosion or the castle
cut. Still seen:

- **One-frame white streaks** over the training level's water, some 100
  pixels long, absent at 30 fps. An in-between frame moved a pre-transformed
  (screen-space) draw vertex by vertex with no check: a triangle whose
  corners belonged to something else in B (a particle born elsewhere) was
  drawn stretched between the two places. Such a triangle (a corner moving
  more than four times the draw's mean and over 24 pixels) is now drawn
  whole as it is in A or B; the interpolation report counts them. To be
  confirmed on the Deck: if streaks remain, they come from program draws.
- **Regular frame-time spikes.** Single texture uploads took 11 to 17 ms.
  Not the queue: the window holds it 0.6 ms a present, at most 1.6, and no
  upload waited for it (both measured on the Deck and reported now: queue
  waits in the slow-frame line, `[VK] slow upload` with its split, the
  window's hold in its report). They were decoding: 80 of 86 a 512x512 L8
  texture with its mips, reloaded every few frames in the training level,
  every texel through `sample_tex` and its bit-by-bit Morton index. Every
  swizzled format now unswizzles the image in one pass and converts it with
  the same per-format code (`texel_decode`, split out of `sample_tex`);
  identical to the texel path on 972 textures of four formats in game 3's
  intro.
The streaks, found on the desktop with a copy of the Deck's save (game 3 in
the training level, the camera turned by the test pad), were not one fault:

- **The far plane through holes.** Most were what lies past the cave's
  walls, white (the level's haze over the far plane) and blue (the sky),
  showing where in-between geometry left holes: the edge the view turns
  toward holds what only B's frustum had, and near and far pieces part
  where a camera that moves and turns is blended in a straight line, white
  along the edges of near walls. After A's last solid draw on the shown
  surface, `rec_holefill` draws B's picture and B's depth wherever the depth
  is still as A cleared it (`hole_fill.frag`; B's depth is copied at each
  flip, `s_zsnap`, since the title is drawing its next frame into the same
  buffer by then). B's colour alone, laid under the geometry, did nothing:
  the haze pass reads depth. B's depth everywhere hid A's blended geometry
  behind B's and doubled the glow. Drawing what B had and A did not (objects
  entering the view) brought a camera cut's new shot into the barn
  cutscene, black behind Conker; the fill covers that edge anyway. With
  MSAA or no depth sampling the old way stays: B's colour under the
  geometry, after the sky (`rec_underlay`). `RECOMP_VK_FILL=0` turns both
  off.
- **Programs blended by their output.** The vertex program now runs on A's
  constants and on B's and the GPU blends what comes out (`nv2a_vsh.vert`,
  binding 13 for B's constants, `VkVshDraw.ip`; the translated programs read
  constants through `KC()`), where blending the constants put a vertex
  behind the eye in one frame at w near 0 in between. (Only in the
  in-between variant since; see below.)
- **Second passes.** A draw that puts its vertices where a draw shortly
  before it did (checked on the CPU: `rec_vpos` runs the exported program,
  `rec_same_place`) is a second pass over the first one's depth: it follows
  the first pass's pairing or is left out of the in-between frame
  (`rec_passes`); paired on its own it passed an EQUAL depth test in
  stripes.
- **Torn pairs.** A draw whose constants jump (more than 0.5 and most of
  their size) has a few vertices run on both sets; if they do not move as
  one thing (a plant's bone palette paired with another plant's) it is not
  blended (`rec_coherent`).

On the desktop, in the training level at render scale 1 and 2, no shard is
left in four runs (what the detector still finds is a lamp moving), the
barn cutscene unchanged; an in-between frame costs 1 to 3 ms there.

- **Berri's window.** A highlight hopping across the panes on the Deck only,
  not an occlusion query (every test forced visible changed nothing on the
  desktop). Taken to be a NaN colour: a clamp leaves NaN to the GPU, black
  on one AMD generation and white on another. Vertex colours (`sat()`) and
  the combiner's output now take NaN as 0, tested on the bits. To be
  confirmed on the Deck.
- **Still open.** The training cave's doors cast a dark band with hard
  edges into the air when they open, a projected shadow drawn past its
  frustum; not reproduced (the copied save is past the doors).

The Deck run of that build (1X, 60 fps): the white lines gone, but frame
times all over the place, far more slow frames (74 of about 50 ms against
20), in-between frames dropped (up to 81 in 300, none before), a long first
compile, and new shards over the training level's water as the camera
turned, plus a tree trunk filling the screen for a frame.

- **Every draw ran the in-between program.** The second run and B's
  constants were built into every vertex program, read through a select on
  every constant: the title's own frames paid for them. `nv2a_vsh.vert` now
  has them only under `VSH_BLEND`; a program's in-between variant
  (`s_vprogs[].bmod`, PipeKey vsh with `VSH_BLEND_BIT`, left out of the
  pipeline list) is compiled by the compile threads when an in-between
  frame first draws the program, and until then (and in the interpreter)
  the draw takes A's and B's constants blended on the CPU. The
  interpolation report counts those draws; in the training level they fall
  to none within a few hundred frames. The long first compile was the
  driver's cache, keyed on the SPIR-V, which every template change
  invalidates: the first start after an update compiles again.
- **Shards: pieces paired with other pieces.** The level's rock is drawn in
  pieces with the same count, program and textures, and their constants
  alike; a run of such draws was paired by constants, and a piece drawn
  with another's constants (moved whole to the other's place, so the torn
  check passed it) left the sky showing through the wall. Found on the
  desktop by unblending draws by kind until they went, then comparing every
  vertex of A's draw on B's constants with its partner: different index
  lists. The pairing key now holds the mesh (the first 48 indices relative
  to the lowest, and the vertex span). The hole fill had only greyed them:
  the haze pass reads a depth texture copied before the fill.
- **The trunk.** Blended in clip space, a point the camera swings past
  (off one side of the screen in A, off the other in B) comes close to the
  eye in between and is magnified. Where w is positive in both, the
  in-between variant blends screen position and depth (as the screen-space
  draws are) and w on its own; in clip space only where w crosses zero.
- **A black frame in the barn cutscene** (missed by the checks before: the
  detector looked for white). The cutscene's full-screen passes are all in
  the same place, so `rec_passes` took them for second passes and left one
  out when B had none to match. It now only takes draws into the same
  surface that test depth EQUAL or LEQUAL.

The Deck run of that build: the white lines and shards gone, but still
slower than before 0047 (19% of the seconds under 57 fps against 4%, most
in cutscenes: Berri's place, the bar, the throne room), with 237 in-between
frames skipped where earlier builds skipped none to 7. The log's profile
blocks (`[PROF]`, CPU per thread and function) gave two causes:

- **The torn check ran on hundreds of draws a frame.** Its trigger (a
  constant that jumps) fires on grass and skinned characters every frame:
  `rv_run` was 50 to 70 ms a second on the executor, which went from 560 to
  640 ms a second to 710 to 770, near full. It now skips a draw that is the
  only one of its key in both frames: the key holds the mesh, so it has no
  look-alike to be paired with. On the desktop's training run the checks
  cost 5 to 20 times less (the report counts them and their time), and they
  tore nothing before or after.
- **The in-between variant's pipelines were optimised.** Every new
  pipeline is linked from its parts at once and optimised on a compile
  thread; the variant doubled them, none in the pipeline list, and each new
  scene kept both compile threads busy for 30 to 60 s (on the Deck, CPU and
  GPU share one power budget). The variant's pipelines now stay linked.

Also: `now_us` read the wall clock, which steps when the system sets it
(the log had a frame 18446744073709 s long, and the in-between frames are
paced on it); it reads the monotonic clock now.

Berri's window after the NaN clamps, against the desktop at the same
cutscene frames (569 and 635, render scale 1): the Deck still draws a yellow
glow over the upper left pane that the desktop has nowhere. Both are RADV
with the same depth format (the desktop GFX1201, the Deck VANGOGH); both
read back the same occlusion queries and 32x32 surfaces per frame there.
Still open: it needs the window's draws logged on the Deck. The debug
build's mark (F12) now also arms a draw trace (`nv2a_vk_trace_arm`): from
the next flip to the one after, every draw's state on a line of
`trace-NN.txt` and, for draws into a frame-sized surface, the part of it
`RECOMP_VK_TRACE_BOX` covers (then 0.40,0.12,0.78,0.62, the window; see
below for the default now) as it stood after the draw, into `trace-NN.bin` (only crops that changed it;
in-between frames included). `RECOMP_VK_TRACE_AT=flip,path` arms one
without a mark.

The Deck's traces found it. The title's frame and the in-between frame
drew the window alike up to the glass (draw 140 of the in-between frame,
390 of the title's), which samples a 32x32 light map the title drew once,
when the scene began (82BC2B00; Conker keeps several and draws one a frame,
none of them that one). The in-between frame's own surfaces held a copy of
it from an in-between frame drawn while the title drew it: another frame's
light, a yellow glare over the upper panes, then doubled by the bloom
passes (a threshold on the frame and its depth into 256x256, blurred, added
back). Whether one was drawn at that moment is timing: the Deck, not the
desktop. The training level's sky by the scarecrow samples light maps the
same way (82DB4500, 82DB7680). `drawn_source` now takes an in-between
frame's own surface only when that frame drew it (`s_replay_w0`), else the
title's, as the title's draw read it.

The same run: 9% of the seconds under 57 fps (marks left out) against 22%
the run before, almost no in-between frame skipped. What is left are
frames of 65 to 75 ms every 150 title frames (5 s) in cutscenes, with
nothing uploaded or compiled and the GPU idle; the slow-frame line now says
how long the executor spent on the title's commands (`nv2a_pb_busy_ns`,
around the pushbuffer walk) and on in-between frames, to tell the
renderer's time from the title's.

The next run: the window right, the scarecrow's sky still glaring, and
those frames all spend 50 to 70 ms on the title's commands (in-between
frames under 10, nothing uploaded); the desktop has no such rhythm in the
same cutscenes. The slow-frame line now also gives the executor thread's
own CPU time over those walks (`nv2a_pb_cpu_ns`: far below the wall time
it was held up, not working), the draws, flushes, read-backs, resolves
and texture hashing of that frame, and `RECOMP_VK_SLOW_MS` sets the
threshold. The scarecrow's trace ran out of room (1700 draws a frame) and
its title-frame crops were wrong: the trace read them after a full flush
that returns at once when the last draws went to the GPU with a soft
flush, before the GPU wrote them. It now waits for that too, and without
`RECOMP_VK_TRACE_BOX` keeps the whole surface at a quarter of its size
after each draw (blitted), so a frame of that size fits.

With those, the Deck: the scarecrow's view through the cave mouth is
drawn bright by the title's own geometry under its teal fog, the same in
the title's frame and the in-between one (a sky quad behind it, the bloom
adding little); nothing there that the in-between frames change. The
5-second frames: 50 to 70 ms on the title's commands of which only 15 to
34 ms on the executor's CPU, so held up, not working. The executor hands
the title its interrupts through the one-CPU gate (`RECOMP_DISPATCH_GATE`,
on for Conker), which waits while a title thread is at DISPATCH; the
slow-frame line now gives that wait (`xbox_DispatchGateWaitNs`, per
thread, summed over the walks as `nv2a_pb_gate_ns`). Suspect: the title's
audio streaming, a 256 KB read about every 5 s and its decode at raised
IRQL, slower on the Deck's CPU. The next run: no wait at the gate at all
(0 ms in every one of them), and the title's threads are not pinned
(`RECOMP_GUEST_CPUS` unset). With `RECOMP_VK_VERBOSE` the walk now times
every method and the slow-frame line names the slowest (method, argument,
time): on the desktop the flip stall (0x130), 1 to 3 ms.

On the Deck it named the method: in every 5-second frame END of a draw
(SET_BEGIN_END, 0x17FC), 30 to 37 ms, while the frame's CPU time stayed
low. Five seconds is ext4's journal commit, and the debug build's log was
stderr pointed at log.txt unbuffered: every line a write() from whichever
thread printed it, the executor's own every 200 draws ("[GPU] draw #"),
and a write held during the commit. The release build writes no log file
on Linux (`conker_host_open_log` is empty there). The debug build now
prints into a pipe of a megabyte that a thread of its own writes to the
file (`conker_debug.c`, Linux), which notes its own stalls in the log; a
crash report (`conker_dump_xbox_state`) and exit wait for the pipe to
drain.

Confirmed on the Deck: the writer noted 34 stalls of 23 to 38 ms, and the
frames every 150 are gone. The scarecrow, from a video: the view through
the cave mouth alternates hazy and clear frame by frame, the in-between
frames the clear ones. The traces put it at the bloom: up to the pass that
adds the 128x128 bloom surface over the frame (blend SRC_ALPHA, ONE) the
two frames match, after it the in-between one is brighter (in the cave
mouth 12 levels against 0); the two draws' state is the same, so the
128x128 surface differs. The trace now keeps surfaces up to 256x256 whole
(those stages were not kept). The per-method timing is gone again: two clock reads
for each of tens of thousands of methods a frame took the Deck from 8% of
the seconds under 57 fps to 26 and 35% (with RECOMP_VK_VERBOSE only, which
the Deck's runs set).

The next run's traces kept the 128x128 glow surface: the same frame in,
a different 128x128 out of the in-between frame's downsample, a pass
that does not move. Every stage of the glow is a quad or a triangle over
a whole surface with no depth test, several alike (count, program,
target), and the in-between frame paired each with one of B's and
blended their constants: one stage read the frame at another's offsets
and scale. The windmill's cutscene showed it worst (a video: every other
frame washed out to white over the sky). Such a pass (6 vertices or
fewer, depth test off) is now drawn as A drew it; on the desktop's
training run about 15 a frame. The cave doors' dark band is the title's
own frame (in both of a pair), not a projected texture bordered from
itself (that note never fired): it wants a trace at the doors.

Also: `CONKER_DEBUG_STDERR=1` keeps the debug build's log on stderr, for
the test rig, which reads it.

That did not end the scarecrow's glare. The next marks' traces had the
in-between frame's first glow pass (the frame scaled to 256x256) read a
sky about 82 where the frame it was drawing held 71. The frame had been
changed between its last crop and that pass by rec_holefill, which runs
after A's solid geometry and writes B's colour wherever the depth is
still as cleared. The sky behind the cave mouth writes no depth, so it
counted as a hole, and B's colour there is B's finished picture, with
its glow already added. The in-between frame's own glow passes then
added theirs on top: a brighter sky every second frame. A pixel that is
also empty in B's depth is not a hole and is now left alone; the
desktop's training run shows no more pale shards than before.

The doors' band, traced: the game draws Conker's shadow as a 128x128
R5G6B5 picture of him, then lays it over the ground near him with a
multiply blend (DST_COLOR, ZERO), projecting it with a vertex program:
`oT0 = (dph(v0, c103), dph(v0, c104), -, dph(v0, c106))` and
`oD0 = 1 + 0.0005 * view z`, a fade to nothing 2000 units from the
camera. The pixel stages give `t0 + 1 - oD0`, white where the fade is
done. The band is that same draw putting a second, stretched copy on the
scenery seen through the doorway. To see why the fade leaves it, the
trace now writes each multiply-blended program draw's program, constants
and vertices (inputs and the CPU interpreter's oPos, oD0, oT0), and
crops 16-bit surfaces up to 256x256 too.

What that dump showed (Deck, 2026-11-17): among the ground the game hands
the shadow draw are tall thin pieces at the doorway (world y 4 to 410,
about x 710-727, z 709-722). Their tops are nearer the light than Conker
(q about 1300 against his 1680), and their texture coordinates run
through his silhouette, so the projection puts a stretched copy on them;
the copy fades by distance to the camera, not by depth from the light, so
nothing removes it. Every number in the draw comes out the same in the
CPU interpreter, the texture is right, and the real shadow under him is
in place, so the draw looks like it is doing what the game asks. xemu
(2026-11-17) shows it too: a dark strip of the shadow on the door's edge
in the same doorway, seen from one side only and gone after a jump. It
is the game's own; left as it is.

Camera cuts in cutscenes. The cut test counted a cut only when most of A
was gone from B, or most of its draws' constants moved far. A cutscene's
cut keeps its characters, whose bone constants change about as much as
between two frames, so the in-between frame drew a camera halfway
between the two shots (the scarecrow's, the cave doors' and Berri's
cutscenes). rec_shift runs the middle vertex of up to 48 depth-tested
draws with A's and B's constants; when most move more than a fifth of
the surface, it is a cut. Pub-intro capture on the PC: old build two
half-way frames, new build none.

A shrub that stood by the windmill's path for one in-between frame (Deck
clip), where neither frame had one: one of many alike draws paired with
another of them, and drawn halfway. The lone-draw rule (blinking
eyelids) only looked at draws alone of their key, and its neighbour test
cannot help here, as the neighbours are alike too. Now a draw of a run
whose constants moved far more than the frame's median gets its middle
vertex run in both frames (rec_shift, close_only: in front of the eye and
within half a surface of it in both, since near the eye any step lands
far out); more than 8% of the surface while the frame's sampled draws
moved less than a quarter of that, it is drawn as A drew it. Windmill
walk on the PC: about one to three checks a frame, four caught in 45 s
(one crossed the whole surface between the two frames). The verbose
interpolation line counts them ("alike draws jumped").

That missed it: the next Deck clip had a clump of bushes on the path
behind Conker for one in-between frame (frame 71 of the 8 s clip), in
neither neighbour. Its copy in one frame was out of view or hidden, so
the "near the surface in both" bound skipped it, and its constants (its
place, among the camera's) need not move far for the frame. Now every
draw of a key drawn more or fewer times in B than in A (or of a run over
256, paired in frame order) is looked at, whatever its constants did,
with rec_shift mode 2: both ends in front of the eye, each held to two
surfaces around it, and one end behind the eye counts as far. Windmill
walk on the PC (meadow, cave, water): 0 to 40 checks a frame, a few
hundred caught in 45 s, mostly the water's particles; no draw caught
there looks wrong drawn as A drew it.

Still not enough: a third Deck clip showed a shrub smeared along the path
by the signpost (frame 306), and half a second later a whole one on the
path where neither frame had one (frame 340). The plants there are drawn
as several leaf clusters, each drawn 2 to 7 times a frame with the same
key and program. Their constants differ mostly in how the wind bends
each one, so nearest-first pairing by constants can pick another plant,
even when A and B draw the same number of them. Only runs whose count
changed were looked at. Now every depth-tested draw of a run gets
rec_shift (each end held); far, rec_repair decides. The partner is
another plant's when another of A's draws of that key lands near it
under the partner's constants. Then, or when the count changed, the draw
takes one of B's where it lands near and where no other of A's does, or
is drawn as A drew it. Otherwise it moved that far by itself (grass just
in front of the eye) and is blended, unless one of B's lands as near as
the frame's draws move. A wider version, with also a check on every draw
that reads a constant table through a0, cost about 2 ms a frame on the
PC; this one costs 0.1 to 0.25 ms a frame. Draws alone of their key are
not run: the fur shells of Conker's tail read as moving more than a
surface while they look right. Taking the Deck's save onto the PC (a
copy) and walking the clip's path did not bring the big jumps back;
with the Deck's guard the walk showed a few hundred wrong pairs of 30
to 60 px (most out of view).

A fourth Deck clip still had a bush on the path for two in-between
frames, right of the mushroom. Walking from the clip's first position
(2683, -2995, -3591) facing 229, the PC showed it in about one walk in
three, while the camera came up through the tall grass. It was a draw
alone of its key (798 indices, 8 instructions): a bush at the right edge
of A paired, by the looser key without textures, with another bush far
left in B. The next frame did the same the other way round. Blended
halfway, it stood on the path. The singles rule did not look at it: its
constants moved 0.015 against a median of 0.002, under the rule's
4 × median + 0.02, and the plants drawn before and after it went with
theirs. Now a depth-tested single whose constants moved more than
1.5 × median gets rec_shift too. Far, it is drawn as A drew it, unless a
neighbour paired with its partner's neighbour moves at least half as far
(rec_goes_along), as one character's parts do. Running rec_shift on
every single caught it too, but cost about 0.75 ms a frame on the PC
(720 singles a frame). The 1.5 × median gate checks about 67 a frame,
caught the bush in all 10 frames where it went wrong, and the whole
check stays at 0.1 to 0.2 ms a frame. In six walks after the change the
bush was never blended, and Conker's tail looked right.

## Polygon offset and the intro's glass

NV2A's polygon offset (SET_POLY_OFFSET_FILL_ENABLE, 0x384 factor, 0x388 units)
is a dynamic depth bias in the Vulkan backend (toolkit patch 0031). Conker's
blob shadows draw over the floor with factor -4, units -16, depth LEQUAL; with
no bias they fought the floor and came out hatched.

Intro Fix (`src/conker_intro.c`) swaps the goblet, object 49 of the held-object
name table, for `effects_models_whiskey_glass_filled`: the same hand's
coordinates, so no fitting. Its .gpu part holds, in order, colours, positions
(3 int16) and normals (11:11:10) of the glass (161 vertices at 0, 0x284, 0x64C)
and of the drink (57 at 0x8D0, 0x9B4, 0xB0C), then the push buffer; textures
follow, 128-aligned.

## Music and ambience at a level's start

A level asks for its music and its ambience set in the same frame. The music
starts at once from the audio manager's command queue, but the ambience waits
until its banks are ready, then stops every tune outside its set
(`sub_0001EFC0`). With the banks a few frames late it stopped the music it had
just started. In the intro, the track came back only 77 s later, when the
monologue's volume command found it gone and played it again from the top.
`conker_music_commands_wait` (`src/recomp_manual.c`, hook in
`recomp/gen/recomp_0001.c`) holds the queue until the ambience is in.

## The launcher and the pipeline seed

At every start, `src/conker_firstrun.c` shows the options in tabs before the
game: most rows are the in-game submenu's, plus the monitor, audio device,
volume, each player's controller and buttons, and the mods folder's mods. It
is drawn by CPU into an SDL texture (wood and chalk from noise, a 5x8 font
drawn for this port), as wide as the window's shape, so one page serves
Linux, the Deck and Windows, by pad, keys or mouse. Its window is the game's
(`xbox_WindowAdopt`): the display rows reach it at once through
`xbox_WindowApplyTo`. Japanese runs in English there, since its letters are
Latin only. Nothing is saved until Start; `CONKER_SKIP_LAUNCHER=1` (the test
rig's) skips it. The toolkit side is patch 0043: `xbox_InputSetPortDevice` /
`xbox_InputSetPortMap` (which pad a port takes, by SDL GUID and ordinal, and
its buttons through `input_map.c`), `xa2_set_device` / `xa2_set_volume`
(SDL's device by name; on Windows the endpoint of that friendly name for
XAudio2), and `xbox_WindowSetDisplay`.

`data/pipeline_seed.bin` goes in the executable and is built at every start on
top of the player's `pipelines.bin` (toolkit patch 0032). A player's list holds
the game's vertex programs, so it is not what ships: the seed keeps each
record's GPU settings and points the vertex stage at the interpreter. That
compiles the fragment stages, which is where the stalls were; a program's own
pipeline links to them when it comes. On a fresh shader cache, the intro's
level through to the first 50 s took 27 s of compiling on the game thread
without the seed and none with it.

The wait happens before `xbox_OhciInit`: placed after it, the game came up with
the pad's input filter never called, which also silences `conker_pub.c`.

Remake the seed from lists kept by the game:
`tools/make_pipeline_seed.py data/pipeline_seed.bin LIST...`

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

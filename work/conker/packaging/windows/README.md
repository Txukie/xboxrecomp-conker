# Windows build

Cross-compiled on Linux with MinGW-w64 (GCC), tested under Wine and
Proton. The executable uses the same SDL2 window, game controllers and
Vulkan renderer as the Linux build (`XBOXRECOMP_WIN32_SDL`, toolkit patch
0029); audio goes through XAudio2.

```sh
cd work/conker/project
../packaging/windows/fetch-deps.sh build-win/deps   # SDL2, glslang, Vulkan import library
cmake -S . -B build-win -DCMAKE_BUILD_TYPE=Release \
    <the options fetch-deps.sh prints>
cmake --build build-win --target windows-zip
```

`windows-zip` writes `Conker-Recomp-<version>-windows-x86_64.zip` beside the
AppImages (`appimage/` at the repository root): `conker_recomp.exe` (the
GCC runtime and winpthreads linked in), `SDL2.dll`, and `README.txt`.

Needs: `mingw-w64-gcc`, CMake, `glslc` (shaderc) and the Vulkan headers on
the build machine. `vulkan-1.dll` itself is the system's.

Files here: `conker-recomp.ico` (from `../appimage/conker-recomp.svg`),
`conker-recomp.rc.in` (icon and version resource), `README.txt` (shipped in
the zip).

## Differences from Linux

- Data in `%LOCALAPPDATA%\ConkerRecomp` (settings, saves, mods, the
  installed game, `pipelines.bin`); the log goes to `conker.log` there when
  there is no console.
- First launch: a message and the Windows file dialog instead of the Qt
  setup window. Archives unpack with `tar.exe` (Windows 10+) or 7-Zip.
- The Uncensor download goes through WinHTTP instead of curl (Wine and
  Proton have no curl.exe). Its `.7z` is unpacked by the game on every
  host (`src/conker_7z.c`, LZMA SDK in `third_party/lzma-sdk`).
- The whole 4 GB guest window is reserved up front
  (`RECOMP_WIN_PLACEHOLDER`): otherwise Wine had already taken the host
  range of the tiled aperture (0xF0000000).

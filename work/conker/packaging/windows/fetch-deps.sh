#!/bin/sh
# fetch-deps.sh DEPS_DIR
#
# What the Windows cross build (MinGW-w64) needs besides the toolchain, into
# DEPS_DIR: SDL2's MinGW development files, a pinned release checked against
# its SHA-256; glslang, a pinned release built here as static libraries
# without its optimizer (so without SPIRV-Tools), for the vertex programs
# compiled at run time; the Vulkan headers, copied from the build machine
# (/usr/include/vulkan, or VULKAN_INCLUDE); and an import library for
# vulkan-1.dll, made with dlltool from the functions those headers declare
# (the loader is the system's: Windows' GPU driver, or Wine's/Proton's).
#
# Prints the CMake options that point the build at them (README.md here).
set -eu

deps=$1
sdl_version=2.32.10
sdl_sha256=83a5d74012311edc3c0d40ea6faecbe57ad692aa033fa5dc273cc937e3938ff2
sdl_tar="SDL2-devel-$sdl_version-mingw.tar.gz"
sdl_url="https://github.com/libsdl-org/SDL/releases/download/release-$sdl_version/$sdl_tar"
glslang_version=16.6.0
glslang_sha256=9c09b901149c729df745057dafa815278aaa101b84d2b6e14f16a42de52f97f2
glslang_url="https://github.com/KhronosGroup/glslang/archive/refs/tags/$glslang_version.tar.gz"
vk_include=${VULKAN_INCLUDE:-/usr/include}
triplet=${MINGW_TRIPLET:-x86_64-w64-mingw32}
here=$(cd "$(dirname "$0")" && pwd)
toolchain="$here/../../../external/xboxrecomp/cmake/mingw-w64-x86_64.cmake"

mkdir -p "$deps/dl" "$deps/include" "$deps/lib"
deps=$(cd "$deps" && pwd)

# fetch URL SHA256 FILE: download once, checked.
fetch() {
    [ -f "$3" ] && return 0
    echo "fetch-deps: downloading $(basename "$3")"
    curl -sSfL -o "$3.part" "$1"
    echo "$2  $3.part" | sha256sum -c - >/dev/null || {
        echo "fetch-deps: $(basename "$3"): checksum mismatch" >&2
        rm -f "$3.part"; exit 1; }
    mv "$3.part" "$3"
}

fetch "$sdl_url" "$sdl_sha256" "$deps/dl/$sdl_tar"
[ -d "$deps/dl/SDL2-$sdl_version" ] || tar -xzf "$deps/dl/$sdl_tar" -C "$deps/dl"
sdl="$deps/dl/SDL2-$sdl_version/$triplet"

if [ ! -f "$deps/glslang/lib/libglslang.a" ]; then
    gl_tar="$deps/dl/glslang-$glslang_version.tar.gz"
    fetch "$glslang_url" "$glslang_sha256" "$gl_tar"
    rm -rf "$deps/dl/glslang-$glslang_version" "$deps/dl/glslang-build"
    tar -xzf "$gl_tar" -C "$deps/dl"
    echo "fetch-deps: building glslang $glslang_version"
    cmake -S "$deps/dl/glslang-$glslang_version" -B "$deps/dl/glslang-build" \
        -DCMAKE_TOOLCHAIN_FILE="$toolchain" -DMINGW_TRIPLET="$triplet" \
        -DCMAKE_BUILD_TYPE=Release -DCMAKE_INSTALL_PREFIX="$deps/glslang" \
        -DBUILD_SHARED_LIBS=OFF -DENABLE_OPT=OFF -DENABLE_HLSL=OFF \
        -DENABLE_GLSLANG_BINARIES=OFF -DENABLE_SPVREMAPPER=OFF \
        -DGLSLANG_TESTS=OFF -DGLSLANG_ENABLE_INSTALL=ON >/dev/null
    cmake --build "$deps/dl/glslang-build" -j"$(nproc)" >/dev/null
    cmake --install "$deps/dl/glslang-build" >/dev/null
fi

[ -f "$vk_include/vulkan/vulkan_core.h" ] || {
    echo "fetch-deps: no Vulkan headers in $vk_include (set VULKAN_INCLUDE)" >&2; exit 1; }
rm -rf "$deps/include/vulkan" "$deps/include/vk_video"
cp -r "$vk_include/vulkan" "$deps/include/"
[ -d "$vk_include/vk_video" ] && cp -r "$vk_include/vk_video" "$deps/include/"
{
    echo "LIBRARY vulkan-1.dll"
    echo "EXPORTS"
    grep -ohE 'VKAPI_CALL vk[A-Za-z0-9]+' "$deps/include/vulkan/vulkan_core.h" \
        "$deps/include/vulkan/vulkan_win32.h" | awk '{ print $2 }' | sort -u
} > "$deps/vulkan-1.def"
"$triplet-dlltool" -d "$deps/vulkan-1.def" -l "$deps/lib/libvulkan-1.dll.a"

cat <<EOF
fetch-deps: done. Configure with
  -DCMAKE_TOOLCHAIN_FILE=<repo>/external/xboxrecomp/cmake/mingw-w64-x86_64.cmake
  -DSDL2_DIR=$sdl/lib/cmake/SDL2
  -DXBOXRECOMP_GLSLANG_INCLUDE=$deps/glslang/include
  -DXBOXRECOMP_GLSLANG_LIB=$deps/glslang/lib/libglslang.a
  -DXBOXRECOMP_GLSLANG_RES_LIB=$deps/glslang/lib/libglslang-default-resource-limits.a
  -DVulkan_INCLUDE_DIR=$deps/include
  -DVulkan_LIBRARY=$deps/lib/libvulkan-1.dll.a
EOF

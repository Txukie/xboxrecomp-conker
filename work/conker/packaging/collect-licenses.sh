#!/bin/sh
# collect-licenses.sh DEST [linux APPDIR | windows SDL_DIR GLSLANG_DIR]
#
# The license and notice files of everything a package carries, into DEST:
# this project's, the toolkit's (LGPL-2.1 code derived from xemu), the
# SMAA and AMD FidelityFX FSR 1 shaders and the LZMA SDK compiled into the
# executable, then what each package bundles besides:
#
#   linux APPDIR    every library in APPDIR/usr/lib and APPDIR/usr/plugins,
#                   by the system package that owns it (pacman), with that
#                   package's /usr/share/licenses directory (or the standard
#                   texts of its licenses, /usr/share/licenses/spdx, when it
#                   has none of its own); glslang and the
#                   C++ runtime, linked in statically, the same way. A list
#                   of library, package, version and license goes in
#                   DEST/bundled-libraries.txt.
#   windows SDL_DIR GLSLANG_DIR
#                   SDL2 (SDL2.dll) from its package, glslang (linked in)
#                   from GLSLANG_DIR -- the prefix fetch-deps.sh installs it
#                   to, which holds its LICENSE.txt, or the sources beside
#                   it -- and the MinGW-w64 runtime, linked in statically.
set -eu

dest=$1
kind=${2:-}
here=$(cd "$(dirname "$0")" && pwd)
repo=$(cd "$here/../../.." && pwd)
tk="$repo/external/xboxrecomp"

mkdir -p "$dest"

put() {   # put SUBDIR FILE...: FILEs into DEST/SUBDIR, each that exists
    sub=$1
    shift
    mkdir -p "$dest/$sub"
    for f in "$@"; do
        if [ -f "$f" ]; then
            cp "$f" "$dest/$sub/"
        else
            echo "collect-licenses: missing $f" >&2
            exit 1
        fi
    done
}

put conker-recomp "$repo/LICENSE"
put xboxrecomp "$tk/LICENSE" "$tk/NOTICE" "$tk/LICENSES/LGPL-2.1.txt"
put smaa "$tk/src/vulkan/shaders/third_party/smaa/LICENSE.txt"
put fidelityfx-fsr1 "$tk/src/vulkan/shaders/third_party/fsr/LICENSE.txt"
put lzma-sdk "$repo/work/conker/project/third_party/lzma-sdk/lzma-sdk.txt"

case "$kind" in
linux)
    appdir=$3
    list="$dest/bundled-libraries.txt"
    command -v pacman >/dev/null || {
        echo "collect-licenses: no pacman here to find the libraries' packages" >&2
        exit 1
    }
    : > "$list.tmp"
    for f in $(find "$appdir/usr/lib" "$appdir/usr/plugins" -name '*.so*' -type f 2>/dev/null | sort); do
        name=$(basename "$f")
        # The bundled copy is the system's, found by name where it was taken.
        sys=$(ldconfig -p | awk -v n="$name" '$1 == n && /x86-64/ { print $NF; exit }')
        [ -n "$sys" ] || sys=$(find /usr/lib -name "$name" 2>/dev/null | head -n 1)
        pkg=$( [ -n "$sys" ] && pacman -Qqo "$sys" 2>/dev/null || true)
        [ -n "$pkg" ] || { echo "collect-licenses: no package for $name" >&2; exit 1; }
        echo "$name|$pkg" >> "$list.tmp"
    done
    # Linked in statically: glslang, and the C++ runtime it needs.
    echo "glslang (linked in)|glslang" >> "$list.tmp"
    echo "C++ runtime (linked in)|gcc-libs" >> "$list.tmp"
    {
        echo "Libraries bundled in this AppImage, the package each came from, its"
        echo "version and license. Each package's license files are in the"
        echo "directory of the same name."
        echo
        while IFS='|' read -r lib pkg; do
            info=$(LC_ALL=C pacman -Qi "$pkg")
            ver=$(echo "$info" | awk -F': ' '/^Version/ { print $2 }')
            lic=$(echo "$info" | awk -F': ' '/^Licenses/ { print $2 }')
            echo "$lib  $pkg $ver  ($lic)"
        done < "$list.tmp"
    } > "$list"
    for pkg in $(cut -d'|' -f2 "$list.tmp" | sort -u); do
        mkdir -p "$dest/$pkg"
        if [ -d "/usr/share/licenses/$pkg" ]; then
            cp -rL "/usr/share/licenses/$pkg/." "$dest/$pkg/"
        else
            # A package under standard licenses only: their texts, by the
            # SPDX names its license field gives.
            for id in $(LC_ALL=C pacman -Qi "$pkg" | awk -F': ' '/^Licenses/ { print $2 }' \
                        | tr ' ()' '\n\n\n' | grep -v -e '^$' -e '^OR$' -e '^AND$' -e '^WITH$'); do
                [ -f "/usr/share/licenses/spdx/$id.txt" ] && cp "/usr/share/licenses/spdx/$id.txt" "$dest/$pkg/"
                [ -f "/usr/share/licenses/spdx/exceptions/$id.txt" ] && cp "/usr/share/licenses/spdx/exceptions/$id.txt" "$dest/$pkg/"
            done
            [ -n "$(ls "$dest/$pkg")" ] || { echo "collect-licenses: no license text for $pkg" >&2; exit 1; }
        fi
    done
    rm -f "$list.tmp"
    ;;
windows)
    sdl=$3
    glslang=$4
    put sdl2 "$sdl/LICENSE.txt"
    gl="$glslang/LICENSE.txt"
    [ -f "$gl" ] || gl=$(ls "$glslang"/../dl/glslang-*/LICENSE.txt 2>/dev/null | head -n 1)
    put glslang "$gl"
    put mingw-w64-runtime /usr/share/licenses/mingw-w64-winpthreads/COPYING.MinGW-w64-runtime.txt
    ;;
"")
    ;;
*)
    echo "collect-licenses: unknown kind $kind" >&2
    exit 1
    ;;
esac
echo "collect-licenses: $(find "$dest" -type f | wc -l) files in $dest"

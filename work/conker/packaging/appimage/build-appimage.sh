#!/bin/sh
# build-appimage.sh BINARY OUTPUT_DIR
#
# Packs the Linux build of conker_recomp into OUTPUT_DIR/Conker-Recomp-x86_64.AppImage.
# Run through the CMake target (`cmake --build <build> --target appimage`),
# which passes both arguments.
#
# Bundled: the binary, AppRun, the desktop entry and icon, and the libraries
# a desktop may lack (SDL2, libepoxy, OpenSSL's libcrypto). Not bundled, on
# purpose: glibc, the Vulkan loader and GPU drivers, which have to match the
# host -- so the AppImage runs on distributions with a glibc at least as new
# as the build machine's.
#
# appimagetool comes from APPIMAGETOOL, then PATH, then a pinned release
# downloaded into OUTPUT_DIR and checked against its SHA-256.
set -eu

bin=$1
out=$2
here=$(cd "$(dirname "$0")" && pwd)
appdir="$out/AppDir"

tool_version=1.9.0
tool_sha256=46fdd785094c7f6e545b61afcfb0f3d98d8eab243f644b4b17698c01d06083d1
tool_url="https://github.com/AppImage/appimagetool/releases/download/$tool_version/appimagetool-x86_64.AppImage"

[ -x "$bin" ] || { echo "build-appimage: no executable at $bin" >&2; exit 1; }

rm -rf "$appdir"
mkdir -p "$appdir/usr/bin" "$appdir/usr/lib" \
         "$appdir/usr/share/applications" "$appdir/usr/share/icons/hicolor/scalable/apps"
cp "$bin" "$appdir/usr/bin/conker_recomp"
cp "$here/AppRun" "$appdir/AppRun"
chmod +x "$appdir/AppRun"
cp "$here/conker-recomp.desktop" "$appdir/"
cp "$here/conker-recomp.desktop" "$appdir/usr/share/applications/"
cp "$here/conker-recomp.svg" "$appdir/"
cp "$here/conker-recomp.svg" "$appdir/usr/share/icons/hicolor/scalable/apps/"

# The libraries to carry, as this build resolved them.
ldd "$bin" | awk '/=> \// { print $1, $3 }' | while read -r name path; do
    case "$name" in
        libSDL2-2.0.so.*|libepoxy.so.*|libcrypto.so.*)
            cp -L "$path" "$appdir/usr/lib/$name"
            echo "build-appimage: bundled $name" ;;
    esac
done

tool=${APPIMAGETOOL:-}
if [ -z "$tool" ]; then
    tool=$(command -v appimagetool || command -v appimagetool-x86_64.AppImage || true)
fi
if [ -z "$tool" ]; then
    tool="$out/appimagetool-$tool_version-x86_64.AppImage"
    if [ ! -x "$tool" ]; then
        echo "build-appimage: downloading appimagetool $tool_version"
        curl -sSfL -o "$tool.part" "$tool_url"
        echo "$tool_sha256  $tool.part" | sha256sum -c - >/dev/null || {
            echo "build-appimage: appimagetool checksum mismatch" >&2
            rm -f "$tool.part"; exit 1; }
        mv "$tool.part" "$tool"
        chmod +x "$tool"
    fi
fi

version=$(git -C "$here" describe --always --dirty 2>/dev/null || echo dev)
# --appimage-extract-and-run: appimagetool is itself an AppImage, and this
# way building needs no FUSE.
ARCH=x86_64 VERSION="$version" "$tool" --appimage-extract-and-run --no-appstream \
    "$appdir" "$out/Conker-Recomp-x86_64.AppImage"
echo "build-appimage: $out/Conker-Recomp-x86_64.AppImage ($version)"

#!/bin/sh
# build-appimage.sh BINARY WORK_DIR OUTPUT_DIR VERSION [SETUP]
#
# Packs the Linux build of conker_recomp into
# OUTPUT_DIR/Conker-Recomp-VERSION-x86_64.AppImage, assembling it in WORK_DIR.
# Run through the CMake target (`cmake --build <build> --target appimage`),
# which passes them (VERSION is the CMake project version; SETUP the
# first-launch window, conker-setup, when Qt 6 was found).
#
# Bundled: the binary, AppRun, the desktop entry and icon, and the libraries
# a desktop may lack (SDL2, libepoxy, OpenSSL's libcrypto, SPIRV-Tools and
# the C++ runtime for glslang, which is linked in). With SETUP also
# conker-setup, the Qt it links and Qt's X11/Wayland plugins. Not bundled, on
# purpose: glibc, the Vulkan loader and GPU drivers, which have to match the
# host -- so the AppImage runs on distributions with a glibc at least as new
# as the build machine's.
#
# appimagetool comes from APPIMAGETOOL, then PATH, then a pinned release
# downloaded into WORK_DIR and checked against its SHA-256; the runtime it
# packs from APPIMAGE_RUNTIME, or downloaded once into WORK_DIR.
set -eu

bin=$1
out=$2
dest=$3
version=$4
setup=${5:-}
here=$(cd "$(dirname "$0")" && pwd)
appdir="$out/AppDir"
image="$dest/Conker-Recomp-$version-x86_64.AppImage"
mkdir -p "$out" "$dest"

tool_version=1.9.0
tool_sha256=46fdd785094c7f6e545b61afcfb0f3d98d8eab243f644b4b17698c01d06083d1
tool_url="https://github.com/AppImage/appimagetool/releases/download/$tool_version/appimagetool-x86_64.AppImage"
runtime_url="https://github.com/AppImage/type2-runtime/releases/download/continuous/runtime-x86_64"

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
        libSDL2-2.0.so.*|libepoxy.so.*|libcrypto.so.*|libSPIRV-Tools*|libstdc++.so.*|libgcc_s.so.*)
            cp -L "$path" "$appdir/usr/lib/$name"
            echo "build-appimage: bundled $name" ;;
    esac
done


# The setup window and what it needs: Qt and the libraries Qt pulls in that
# a system may lack, and its platform plugins (found through qt.conf). The
# libraries every desktop has, or that have to be the host's (glibc, GL,
# the X11 and Wayland client libraries, fonts), stay out.
if [ -n "$setup" ] && [ -x "$setup" ]; then
    cp "$setup" "$appdir/usr/bin/conker-setup"
    qtplugins=$(dirname "$(dirname "$(find /usr/lib /usr/lib64 -path '*qt6/plugins/platforms/libqxcb.so' 2>/dev/null | head -1)")")
    mkdir -p "$appdir/usr/plugins"
    for d in platforms/libqxcb.so platforms/libqwayland.so platforms/libqoffscreen.so \
             platformthemes/libqxdgdesktopportal.so xcbglintegrations \
             wayland-decoration-client wayland-graphics-integration-client \
             wayland-shell-integration; do
        [ -e "$qtplugins/$d" ] || continue
        mkdir -p "$appdir/usr/plugins/$(dirname "$d")"
        cp -rL "$qtplugins/$d" "$appdir/usr/plugins/$(dirname "$d")/"
    done
    printf '[Paths]\nPrefix = ..\nPlugins = plugins\n' > "$appdir/usr/bin/qt.conf"
    keep_out='^(linux-vdso|ld-linux[-a-z0-9_]*|libc|libm|libdl|libpthread|librt|libresolv|libutil|libGL|libEGL|libGLX|libGLdispatch|libOpenGL|libvulkan|libdrm|libgbm|libX11|libX11-xcb|libxcb|libXau|libXdmcp|libwayland-client|libwayland-cursor|libwayland-egl|libfontconfig|libfreetype|libexpat|libz|libasound|libpulse|libudev|libsystemd)\.so'
    { echo "$appdir/usr/bin/conker-setup"; find "$appdir/usr/plugins" -name '*.so'; } |
    while read -r f; do ldd "$f"; done | awk '/=> \// { print $1, $3 }' | sort -u |
    while read -r name path; do
        name=${name##*/}
        echo "$name" | grep -Eq "$keep_out" && continue
        [ -e "$appdir/usr/lib/$name" ] && continue
        cp -L "$path" "$appdir/usr/lib/$name"
    done
    echo "build-appimage: bundled conker-setup and $(ls "$appdir/usr/lib" | wc -l) libraries"
fi

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

# The AppImage runtime, which appimagetool would download itself on every
# build: its own download failed outright for a while (status code 0) while
# curl fetched the same file. Fetched once into WORK_DIR, or from
# APPIMAGE_RUNTIME.
runtime=${APPIMAGE_RUNTIME:-$out/runtime-x86_64}
if [ ! -s "$runtime" ]; then
    echo "build-appimage: downloading the AppImage runtime"
    curl -sSfL -o "$runtime.part" "$runtime_url"
    mv "$runtime.part" "$runtime"
fi

commit=$(git -C "$here" rev-parse --short HEAD 2>/dev/null || echo unknown)
# --appimage-extract-and-run: appimagetool is itself an AppImage, and this
# way building needs no FUSE.
ARCH=x86_64 VERSION="$version" "$tool" --appimage-extract-and-run --no-appstream \
    --runtime-file "$runtime" "$appdir" "$image"
echo "build-appimage: $image ($version, $commit)"

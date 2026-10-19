#!/bin/sh
# Linux/macOS launcher; counterpart of run_conker.ps1.
#   ./work/conker/run_conker.sh [game-directory]
# The directory must hold the extracted disc (default.xbe). Without an
# argument, work/conker/game_files/Conker is used, then ~/Downloads/Conker.
set -eu
here=$(cd "$(dirname "$0")" && pwd)
exe="$here/project/build/bin/conker_recomp"
game="${1:-}"

if [ -z "$game" ]; then
    if [ -f "$here/game_files/Conker/default.xbe" ]; then
        game="$here/game_files/Conker"
    else
        game="$HOME/Downloads/Conker"
    fi
fi

[ -x "$exe" ] || { echo "Conker executable not found: $exe" >&2; exit 1; }
[ -f "$game/default.xbe" ] || {
    echo "The extracted game directory must contain default.xbe: $game" >&2; exit 1; }

exec "$exe" "$game"

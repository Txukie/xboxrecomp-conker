#!/bin/sh
# Regenerate Conker's recompiled C with the xboxrecomp submodule's tools.
#
#   ./work/conker/regenerate.sh [--install] [--seeds] [--from STAGE]
#
#   --install    replace project/src/recomp/gen with the new output
#                (otherwise it stays in work/conker/pipeline/gen to inspect)
#   seed_callbacks.json (always passed) lists function starts the detector
#                misses: callbacks after int3 padding, each with a note.
#   --seeds      also pass seed_functions.json to the disassembler. Off by default:
#                most of those seeds are mid-function continuations, which the
#                current disassembler treats as function starts that truncate
#                the function they sit in. The recompiler is run with
#                --entry-stubs instead, which compiles each such target as a
#                copy of its containing function entered there (#207).
#   --from STAGE skip earlier stages: parse | disasm | func_id | abi | recomp
#
# Needs work/conker/game_files/Conker/default.xbe (extract the disc there) and
# a Python with capstone; work/conker/.venv is used when present.
set -eu

here=$(cd "$(dirname "$0")" && pwd)
root=$(cd "$here/../.." && pwd)
tk="$root/external/xboxrecomp"
xbe="${CONKER_XBE:-$here/game_files/Conker/default.xbe}"
analysis="$here/conker_analysis.json"
stage_dir="$here/pipeline"
gen_out="$stage_dir/gen"
gen_dst="$here/project/src/recomp/gen"
py="$here/.venv/bin/python"
[ -x "$py" ] || py=python3

# .text plus the XDK libraries Conker links statically. D3D is D3D8LTCG, so
# without it every D3D call would be an empty stub. DOLBY (DSP image) and the
# *_RD / bitmap sections are data and stay out.
code_sections=D3D,D3DX,DSOUND,EFFECTS_,EFFECT_C,EFFECT_U,PAGELK,WMADEC,XACTENG,XGRPH,XMV,XNET,XONLINE,XPP

install=0
seeds=0
from=parse
while [ $# -gt 0 ]; do
    case "$1" in
        --install) install=1 ;;
        --seeds) seeds=1 ;;
        --from) shift; from="$1" ;;
        *) echo "unknown option: $1" >&2; exit 2 ;;
    esac
    shift
done

[ -f "$xbe" ] || { echo "default.xbe not found: $xbe" >&2; exit 1; }
"$py" -c 'import capstone' 2>/dev/null || {
    echo "capstone missing: python3 -m venv $here/.venv && $here/.venv/bin/pip install capstone" >&2
    exit 1; }

mkdir -p "$stage_dir"
log() { echo "== $*"; }
run_from() {  # stage order check
    order="parse disasm func_id abi recomp"
    reached=0
    for s in $order; do
        [ "$s" = "$from" ] && reached=1
        [ "$s" = "$1" ] && { [ $reached -eq 1 ] && return 0 || return 1; }
    done
    return 1
}

cd "$tk"

if run_from parse; then
    log "xbe_parser"
    "$py" -m tools.xbe_parser "$xbe" --json "$analysis" > "$stage_dir/parse.log" 2>&1
fi

if run_from disasm; then
    log "disasm (.text + $code_sections)"
    set -- --text-only --extra-sections "$code_sections" \
        --seed-functions "$here/seed_callbacks.json"
    [ $seeds -eq 1 ] && set -- "$@" --seed-functions "$here/seed_functions.json"
    "$py" -m tools.disasm "$xbe" --analysis-json "$analysis" "$@" -v \
        > "$stage_dir/disasm.log" 2>&1
fi

if run_from func_id; then
    log "func_id"
    "$py" -m tools.func_id "$xbe" -v > "$stage_dir/func_id.log" 2>&1
fi

if run_from abi; then
    log "abi_analysis"
    "$py" -m tools.abi_analysis "$xbe" -v > "$stage_dir/abi.log" 2>&1
fi

if run_from recomp; then
    log "recomp -> $gen_out"
    rm -rf "$gen_out"
    mkdir -p "$gen_out"
    # --entry-stubs: a call into the middle of a function runs a copy of
    # that function entered at the target, instead of an empty stub. This is
    # what the hand-made recomp_single_* continuations used to provide.
    # --exclude-manual: functions defined in recomp_manual.c are not
    # generated, and sub_X_enter hooks there are called at the top of the
    # generated sub_X (e.g. the D3D semaphore registration).
    "$py" -m tools.recomp "$xbe" --all --split 250 --game-name "Conker" --entry-stubs \
        --exclude-manual "$here/project/src/recomp_manual.c" \
        --gen-dir "$gen_out" > "$stage_dir/recomp.log" 2>&1
fi

echo "logs: $stage_dir/*.log"
if [ $install -eq 1 ]; then
    [ -f "$gen_out/recomp_dispatch.c" ] || { echo "no generated output to install" >&2; exit 1; }
    log "installing into $gen_dst"
    # The generator does not remove files it no longer writes (the old
    # recomp_seeded_continuations.c would duplicate functions), so replace
    # the directory wholesale.
    rm -rf "$gen_dst"
    cp -r "$gen_out" "$gen_dst"
fi

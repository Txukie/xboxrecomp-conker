/**
 * Conker - Recompiled code chunk 60
 * Functions: 250 (0x0047F108 - 0x0047FE50)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_0047F108
 * Original: 0x0047F108 - 0x0047F113 (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047F108(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0047F108: ;
    ecx = MEM32(ebp + -16);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_00014900(); return; /* tail jmp 0x00014900 */

}

/**
 * sub_0047F113
 * Original: 0x0047F113 - 0x0047F11E (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047F113(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0047F113: ;
    ecx = MEM32(ebp + -16);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_00014900(); return; /* tail jmp 0x00014900 */

}

/**
 * sub_0047F11E
 * Original: 0x0047F11E - 0x0047F129 (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047F11E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0047F11E: ;
    ecx = MEM32(ebp + -16);
    _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x3C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_00014900(); return; /* tail jmp 0x00014900 */

}

/**
 * sub_0047F129
 * Original: 0x0047F129 - 0x0047F134 (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047F129(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0047F129: ;
    ecx = MEM32(ebp + -16);
    _fb = (uint32_t)(0x58) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x58;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_00014900(); return; /* tail jmp 0x00014900 */

}

/**
 * sub_0047F134
 * Original: 0x0047F134 - 0x0047F13E (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047F134(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0047F134: ;
    eax = 0x64B5BC;
    g_seh_ebp = ebp; sub_00471D41(); return; /* tail jmp 0x00471D41 */

}

/**
 * sub_0047F13E
 * Original: 0x0047F13E - 0x0047F146 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047F13E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0047F13E: ;
    ecx = ebp + -16;
    g_seh_ebp = ebp; sub_0046E3E7(); return; /* tail jmp 0x0046E3E7 */

}

/**
 * sub_0047F146
 * Original: 0x0047F146 - 0x0047F150 (10 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047F146(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0047F146: ;
    PUSH32(esp, MEM32(ebp + -20));
    PUSH32(esp, 0x0047F14Eu); RECOMP_ABI_CALL(0x002AF410u, sub_002AF410); /* call 0x002AF410 */

loc_0047F14E: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0047F150
 * Original: 0x0047F150 - 0x0047F15A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047F150(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0047F150: ;
    eax = 0x64B5E8;
    g_seh_ebp = ebp; sub_00471D41(); return; /* tail jmp 0x00471D41 */

}

/**
 * sub_0047F160
 * Original: 0x0047F160 - 0x0047F16A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047F160(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0047F160: ;
    eax = 0x64BD78;
    g_seh_ebp = ebp; sub_00471D41(); return; /* tail jmp 0x00471D41 */

}

/**
 * sub_0047F170
 * Original: 0x0047F170 - 0x0047F17A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047F170(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0047F170: ;
    eax = 0x64B8E4;
    g_seh_ebp = ebp; sub_00471D41(); return; /* tail jmp 0x00471D41 */

}

/**
 * sub_0047F180
 * Original: 0x0047F180 - 0x0047F18A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047F180(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0047F180: ;
    eax = 0x64B894;
    g_seh_ebp = ebp; sub_00471D41(); return; /* tail jmp 0x00471D41 */

}

/**
 * sub_0047F190
 * Original: 0x0047F190 - 0x0047F19A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047F190(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0047F190: ;
    eax = 0x64B984;
    g_seh_ebp = ebp; sub_00471D41(); return; /* tail jmp 0x00471D41 */

}

/**
 * sub_0047F1A0
 * Original: 0x0047F1A0 - 0x0047F1AA (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047F1A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0047F1A0: ;
    eax = 0x64B754;
    g_seh_ebp = ebp; sub_00471D41(); return; /* tail jmp 0x00471D41 */

}

/**
 * sub_0047F1B0
 * Original: 0x0047F1B0 - 0x0047F1BA (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047F1B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0047F1B0: ;
    eax = 0x64B7A4;
    g_seh_ebp = ebp; sub_00471D41(); return; /* tail jmp 0x00471D41 */

}

/**
 * sub_0047F1C0
 * Original: 0x0047F1C0 - 0x0047F1CA (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047F1C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0047F1C0: ;
    eax = 0x64B7F4;
    g_seh_ebp = ebp; sub_00471D41(); return; /* tail jmp 0x00471D41 */

}

/**
 * sub_0047F1D0
 * Original: 0x0047F1D0 - 0x0047F1DA (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047F1D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0047F1D0: ;
    eax = 0x64B844;
    g_seh_ebp = ebp; sub_00471D41(); return; /* tail jmp 0x00471D41 */

}

/**
 * sub_0047F1E0
 * Original: 0x0047F1E0 - 0x0047F1EA (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047F1E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0047F1E0: ;
    eax = 0x64BC38;
    g_seh_ebp = ebp; sub_00471D41(); return; /* tail jmp 0x00471D41 */

}

/**
 * sub_0047F1F0
 * Original: 0x0047F1F0 - 0x0047F1FA (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047F1F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0047F1F0: ;
    eax = 0x64B934;
    g_seh_ebp = ebp; sub_00471D41(); return; /* tail jmp 0x00471D41 */

}

/**
 * sub_0047F200
 * Original: 0x0047F200 - 0x0047F20A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047F200(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0047F200: ;
    eax = 0x64BCD8;
    g_seh_ebp = ebp; sub_00471D41(); return; /* tail jmp 0x00471D41 */

}

/**
 * sub_0047F20A
 * Original: 0x0047F20A - 0x0047F212 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047F20A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0047F20A: ;
    ecx = ebp + 0xC;
    g_seh_ebp = ebp; sub_00529ECB(); return; /* tail jmp 0x00529ECB */

}

/**
 * sub_0047F212
 * Original: 0x0047F212 - 0x0047F21A (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047F212(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0047F212: ;
    ecx = ebp + -24;
    g_seh_ebp = ebp; sub_00529ECB(); return; /* tail jmp 0x00529ECB */

}

/**
 * sub_0047F21A
 * Original: 0x0047F21A - 0x0047F222 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047F21A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0047F21A: ;
    ecx = ebp + -24;
    g_seh_ebp = ebp; sub_00529ECB(); return; /* tail jmp 0x00529ECB */

}

/**
 * sub_0047F222
 * Original: 0x0047F222 - 0x0047F22C (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047F222(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0047F222: ;
    eax = 0x64B9B8;
    g_seh_ebp = ebp; sub_00471D41(); return; /* tail jmp 0x00471D41 */

}

/**
 * sub_0047F230
 * Original: 0x0047F230 - 0x0047F23A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047F230(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0047F230: ;
    eax = 0x64BB98;
    g_seh_ebp = ebp; sub_00471D41(); return; /* tail jmp 0x00471D41 */

}

/**
 * sub_0047F240
 * Original: 0x0047F240 - 0x0047F24A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047F240(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0047F240: ;
    eax = 0x64BA08;
    g_seh_ebp = ebp; sub_00471D41(); return; /* tail jmp 0x00471D41 */

}

/**
 * sub_0047F250
 * Original: 0x0047F250 - 0x0047F25A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047F250(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0047F250: ;
    eax = 0x64BBE8;
    g_seh_ebp = ebp; sub_00471D41(); return; /* tail jmp 0x00471D41 */

}

/**
 * sub_0047F260
 * Original: 0x0047F260 - 0x0047F26A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047F260(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0047F260: ;
    eax = 0x64BD28;
    g_seh_ebp = ebp; sub_00471D41(); return; /* tail jmp 0x00471D41 */

}

/**
 * sub_0047F270
 * Original: 0x0047F270 - 0x0047F27A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047F270(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0047F270: ;
    eax = 0x64BA58;
    g_seh_ebp = ebp; sub_00471D41(); return; /* tail jmp 0x00471D41 */

}

/**
 * sub_0047F280
 * Original: 0x0047F280 - 0x0047F28A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047F280(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0047F280: ;
    eax = 0x64BAA8;
    g_seh_ebp = ebp; sub_00471D41(); return; /* tail jmp 0x00471D41 */

}

/**
 * sub_0047F290
 * Original: 0x0047F290 - 0x0047F29A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047F290(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0047F290: ;
    eax = 0x64BAF8;
    g_seh_ebp = ebp; sub_00471D41(); return; /* tail jmp 0x00471D41 */

}

/**
 * sub_0047F2A0
 * Original: 0x0047F2A0 - 0x0047F2AA (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047F2A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0047F2A0: ;
    eax = 0x64BB48;
    g_seh_ebp = ebp; sub_00471D41(); return; /* tail jmp 0x00471D41 */

}

/**
 * sub_0047F2B0
 * Original: 0x0047F2B0 - 0x0047F2BA (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047F2B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0047F2B0: ;
    eax = 0x64BC88;
    g_seh_ebp = ebp; sub_00471D41(); return; /* tail jmp 0x00471D41 */

}

/**
 * sub_0047F2C0
 * Original: 0x0047F2C0 - 0x0047F2CA (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047F2C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0047F2C0: ;
    eax = 0x64BDC8;
    g_seh_ebp = ebp; sub_00471D41(); return; /* tail jmp 0x00471D41 */

}

/**
 * sub_0047F2D0
 * Original: 0x0047F2D0 - 0x0047F2DA (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047F2D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0047F2D0: ;
    eax = 0x64BE18;
    g_seh_ebp = ebp; sub_00471D41(); return; /* tail jmp 0x00471D41 */

}

/**
 * sub_0047F2E0
 * Original: 0x0047F2E0 - 0x0047F2EA (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047F2E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0047F2E0: ;
    eax = 0x64BE68;
    g_seh_ebp = ebp; sub_00471D41(); return; /* tail jmp 0x00471D41 */

}

/**
 * sub_0047F2EA
 * Original: 0x0047F2EA - 0x0047F2F2 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047F2EA(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0047F2EA: ;
    ecx = MEM32(ebp + -16);
    g_seh_ebp = ebp; sub_00529E4F(); return; /* tail jmp 0x00529E4F */

}

/**
 * sub_0047F2F2
 * Original: 0x0047F2F2 - 0x0047F2FD (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047F2F2(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0047F2F2: ;
    ecx = MEM32(ebp + -16);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_00531CE6(); return; /* tail jmp 0x00531CE6 */

}

/**
 * sub_0047F2FD
 * Original: 0x0047F2FD - 0x0047F308 (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047F2FD(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0047F2FD: ;
    ecx = MEM32(ebp + -16);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x14;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_0052F8CB(); return; /* tail jmp 0x0052F8CB */

}

/**
 * sub_0047F308
 * Original: 0x0047F308 - 0x0047F313 (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047F308(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0047F308: ;
    ecx = MEM32(ebp + -16);
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x28;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_0052F8CB(); return; /* tail jmp 0x0052F8CB */

}

/**
 * sub_0047F313
 * Original: 0x0047F313 - 0x0047F31E (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047F313(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0047F313: ;
    ecx = MEM32(ebp + -16);
    _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x3C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_0052F8CB(); return; /* tail jmp 0x0052F8CB */

}

/**
 * sub_0047F31E
 * Original: 0x0047F31E - 0x0047F328 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047F31E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0047F31E: ;
    eax = 0x64BEAC;
    g_seh_ebp = ebp; sub_00471D41(); return; /* tail jmp 0x00471D41 */

}

/**
 * sub_0047F328
 * Original: 0x0047F328 - 0x0047F330 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047F328(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0047F328: ;
    ecx = ebp + 0x18;
    g_seh_ebp = ebp; sub_00529ECB(); return; /* tail jmp 0x00529ECB */

}

/**
 * sub_0047F330
 * Original: 0x0047F330 - 0x0047F338 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047F330(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0047F330: ;
    ecx = ebp + 0x10;
    g_seh_ebp = ebp; sub_00529ECB(); return; /* tail jmp 0x00529ECB */

}

/**
 * sub_0047F338
 * Original: 0x0047F338 - 0x0047F342 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047F338(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0047F338: ;
    eax = 0x64BED8;
    g_seh_ebp = ebp; sub_00471D41(); return; /* tail jmp 0x00471D41 */

}

/**
 * sub_0047F350
 * Original: 0x0047F350 - 0x0047F35A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047F350(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0047F350: ;
    eax = 0x64BF70;
    g_seh_ebp = ebp; sub_00471D41(); return; /* tail jmp 0x00471D41 */

}

/**
 * sub_0047F360
 * Original: 0x0047F360 - 0x0047F36A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047F360(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0047F360: ;
    eax = 0x64BFC0;
    g_seh_ebp = ebp; sub_00471D41(); return; /* tail jmp 0x00471D41 */

}

/**
 * sub_0047F370
 * Original: 0x0047F370 - 0x0047F37A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047F370(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0047F370: ;
    eax = 0x64C010;
    g_seh_ebp = ebp; sub_00471D41(); return; /* tail jmp 0x00471D41 */

}

/**
 * sub_0047F380
 * Original: 0x0047F380 - 0x0047F38A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047F380(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0047F380: ;
    eax = 0x64C060;
    g_seh_ebp = ebp; sub_00471D41(); return; /* tail jmp 0x00471D41 */

}

/**
 * sub_0047F390
 * Original: 0x0047F390 - 0x0047F39A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047F390(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0047F390: ;
    eax = 0x64C0B0;
    g_seh_ebp = ebp; sub_00471D41(); return; /* tail jmp 0x00471D41 */

}

/**
 * sub_0047F39A
 * Original: 0x0047F39A - 0x0047F3A2 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047F39A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0047F39A: ;
    ecx = MEM32(ebp + -16);
    g_seh_ebp = ebp; sub_0052F8F4(); return; /* tail jmp 0x0052F8F4 */

}

/**
 * sub_0047F3A2
 * Original: 0x0047F3A2 - 0x0047F3AC (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047F3A2(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0047F3A2: ;
    eax = 0x64C0D4;
    g_seh_ebp = ebp; sub_00471D41(); return; /* tail jmp 0x00471D41 */

}

/**
 * sub_0047F3AC
 * Original: 0x0047F3AC - 0x0047F3B4 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047F3AC(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0047F3AC: ;
    ecx = MEM32(ebp + -20);
    g_seh_ebp = ebp; sub_00529E4F(); return; /* tail jmp 0x00529E4F */

}

/**
 * sub_0047F3B4
 * Original: 0x0047F3B4 - 0x0047F3BF (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047F3B4(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0047F3B4: ;
    ecx = MEM32(ebp + -20);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x14;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_00529ECB(); return; /* tail jmp 0x00529ECB */

}

/**
 * sub_0047F3BF
 * Original: 0x0047F3BF - 0x0047F3CA (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047F3BF(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0047F3BF: ;
    ecx = MEM32(ebp + -20);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x1C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_00529ECB(); return; /* tail jmp 0x00529ECB */

}

/**
 * sub_0047F3CA
 * Original: 0x0047F3CA - 0x0047F3D5 (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047F3CA(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0047F3CA: ;
    ecx = MEM32(ebp + -20);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x24;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_00529ECB(); return; /* tail jmp 0x00529ECB */

}

/**
 * sub_0047F3D5
 * Original: 0x0047F3D5 - 0x0047F3DF (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047F3D5(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0047F3D5: ;
    eax = 0x64C110;
    g_seh_ebp = ebp; sub_00471D41(); return; /* tail jmp 0x00471D41 */

}

/**
 * sub_0047F3DF
 * Original: 0x0047F3DF - 0x0047F3E7 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047F3DF(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0047F3DF: ;
    ecx = ebp + 0xC;
    g_seh_ebp = ebp; sub_0052A065(); return; /* tail jmp 0x0052A065 */

}

/**
 * sub_0047F3E7
 * Original: 0x0047F3E7 - 0x0047F3EF (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047F3E7(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0047F3E7: ;
    ecx = ebp + -76;
    g_seh_ebp = ebp; sub_0052A065(); return; /* tail jmp 0x0052A065 */

}

/**
 * sub_0047F3EF
 * Original: 0x0047F3EF - 0x0047F3F7 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047F3EF(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0047F3EF: ;
    ecx = ebp + -56;
    g_seh_ebp = ebp; sub_0052A065(); return; /* tail jmp 0x0052A065 */

}

/**
 * sub_0047F3F7
 * Original: 0x0047F3F7 - 0x0047F401 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047F3F7(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0047F3F7: ;
    eax = 0x64C144;
    g_seh_ebp = ebp; sub_00471D41(); return; /* tail jmp 0x00471D41 */

}

/**
 * sub_0047F401
 * Original: 0x0047F401 - 0x0047F409 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047F401(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0047F401: ;
    ecx = ebp + -24;
    g_seh_ebp = ebp; sub_00529ECB(); return; /* tail jmp 0x00529ECB */

}

/**
 * sub_0047F409
 * Original: 0x0047F409 - 0x0047F413 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047F409(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0047F409: ;
    eax = 0x64C168;
    g_seh_ebp = ebp; sub_00471D41(); return; /* tail jmp 0x00471D41 */

}

/**
 * sub_0047F420
 * Original: 0x0047F420 - 0x0047F42A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047F420(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0047F420: ;
    eax = 0x64C1B8;
    g_seh_ebp = ebp; sub_00471D41(); return; /* tail jmp 0x00471D41 */

}

/**
 * sub_0047F430
 * Original: 0x0047F430 - 0x0047F43A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047F430(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0047F430: ;
    eax = 0x64C208;
    g_seh_ebp = ebp; sub_00471D41(); return; /* tail jmp 0x00471D41 */

}

/**
 * sub_0047F440
 * Original: 0x0047F440 - 0x0047F44A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047F440(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0047F440: ;
    eax = 0x64C258;
    g_seh_ebp = ebp; sub_00471D41(); return; /* tail jmp 0x00471D41 */

}

/**
 * sub_0047F450
 * Original: 0x0047F450 - 0x0047F45A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047F450(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0047F450: ;
    eax = 0x64C2A8;
    g_seh_ebp = ebp; sub_00471D41(); return; /* tail jmp 0x00471D41 */

}

/**
 * sub_0047F460
 * Original: 0x0047F460 - 0x0047F46A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047F460(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0047F460: ;
    eax = 0x64C2F8;
    g_seh_ebp = ebp; sub_00471D41(); return; /* tail jmp 0x00471D41 */

}

/**
 * sub_0047F470
 * Original: 0x0047F470 - 0x0047F47A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047F470(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0047F470: ;
    eax = 0x64C348;
    g_seh_ebp = ebp; sub_00471D41(); return; /* tail jmp 0x00471D41 */

}

/**
 * sub_0047F480
 * Original: 0x0047F480 - 0x0047F48A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047F480(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0047F480: ;
    eax = 0x64C398;
    g_seh_ebp = ebp; sub_00471D41(); return; /* tail jmp 0x00471D41 */

}

/**
 * sub_0047F490
 * Original: 0x0047F490 - 0x0047F49A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047F490(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0047F490: ;
    eax = 0x64C3E8;
    g_seh_ebp = ebp; sub_00471D41(); return; /* tail jmp 0x00471D41 */

}

/**
 * sub_0047F4A0
 * Original: 0x0047F4A0 - 0x0047F4AA (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047F4A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0047F4A0: ;
    eax = 0x64C438;
    g_seh_ebp = ebp; sub_00471D41(); return; /* tail jmp 0x00471D41 */

}

/**
 * sub_0047F4B0
 * Original: 0x0047F4B0 - 0x0047F4BA (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047F4B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0047F4B0: ;
    eax = 0x64C488;
    g_seh_ebp = ebp; sub_00471D41(); return; /* tail jmp 0x00471D41 */

}

/**
 * sub_0047F4C0
 * Original: 0x0047F4C0 - 0x0047F4CA (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047F4C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0047F4C0: ;
    eax = 0x64C4D8;
    g_seh_ebp = ebp; sub_00471D41(); return; /* tail jmp 0x00471D41 */

}

/**
 * sub_0047F4D0
 * Original: 0x0047F4D0 - 0x0047F4DA (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047F4D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0047F4D0: ;
    eax = 0x64C528;
    g_seh_ebp = ebp; sub_00471D41(); return; /* tail jmp 0x00471D41 */

}

/**
 * sub_0047F4E0
 * Original: 0x0047F4E0 - 0x0047F4EA (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047F4E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0047F4E0: ;
    eax = 0x64C578;
    g_seh_ebp = ebp; sub_00471D41(); return; /* tail jmp 0x00471D41 */

}

/**
 * sub_0047F4F0
 * Original: 0x0047F4F0 - 0x0047F4FA (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047F4F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0047F4F0: ;
    eax = 0x64C5C8;
    g_seh_ebp = ebp; sub_00471D41(); return; /* tail jmp 0x00471D41 */

}

/**
 * sub_0047F500
 * Original: 0x0047F500 - 0x0047F50A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047F500(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0047F500: ;
    eax = 0x64C618;
    g_seh_ebp = ebp; sub_00471D41(); return; /* tail jmp 0x00471D41 */

}

/**
 * sub_0047F510
 * Original: 0x0047F510 - 0x0047F51A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047F510(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0047F510: ;
    eax = 0x64C668;
    g_seh_ebp = ebp; sub_00471D41(); return; /* tail jmp 0x00471D41 */

}

/**
 * sub_0047F520
 * Original: 0x0047F520 - 0x0047F52A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047F520(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0047F520: ;
    eax = 0x64C6B8;
    g_seh_ebp = ebp; sub_00471D41(); return; /* tail jmp 0x00471D41 */

}

/**
 * sub_0047F530
 * Original: 0x0047F530 - 0x0047F53A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047F530(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0047F530: ;
    eax = 0x64C708;
    g_seh_ebp = ebp; sub_00471D41(); return; /* tail jmp 0x00471D41 */

}

/**
 * sub_0047F540
 * Original: 0x0047F540 - 0x0047F54A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047F540(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0047F540: ;
    eax = 0x64C758;
    g_seh_ebp = ebp; sub_00471D41(); return; /* tail jmp 0x00471D41 */

}

/**
 * sub_0047F550
 * Original: 0x0047F550 - 0x0047F55A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047F550(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0047F550: ;
    eax = 0x64C7A8;
    g_seh_ebp = ebp; sub_00471D41(); return; /* tail jmp 0x00471D41 */

}

/**
 * sub_0047F560
 * Original: 0x0047F560 - 0x0047F56A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047F560(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0047F560: ;
    eax = 0x64C7F8;
    g_seh_ebp = ebp; sub_00471D41(); return; /* tail jmp 0x00471D41 */

}

/**
 * sub_0047F570
 * Original: 0x0047F570 - 0x0047F57A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047F570(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0047F570: ;
    eax = 0x64C848;
    g_seh_ebp = ebp; sub_00471D41(); return; /* tail jmp 0x00471D41 */

}

/**
 * sub_0047F580
 * Original: 0x0047F580 - 0x0047F58A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047F580(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0047F580: ;
    eax = 0x64C898;
    g_seh_ebp = ebp; sub_00471D41(); return; /* tail jmp 0x00471D41 */

}

/**
 * sub_0047F590
 * Original: 0x0047F590 - 0x0047F59A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047F590(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0047F590: ;
    eax = 0x64C8E8;
    g_seh_ebp = ebp; sub_00471D41(); return; /* tail jmp 0x00471D41 */

}

/**
 * sub_0047F5A0
 * Original: 0x0047F5A0 - 0x0047F5AA (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047F5A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0047F5A0: ;
    eax = 0x64C938;
    g_seh_ebp = ebp; sub_00471D41(); return; /* tail jmp 0x00471D41 */

}

/**
 * sub_0047F5B0
 * Original: 0x0047F5B0 - 0x0047F5BA (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047F5B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0047F5B0: ;
    eax = 0x64C988;
    g_seh_ebp = ebp; sub_00471D41(); return; /* tail jmp 0x00471D41 */

}

/**
 * sub_0047F5C0
 * Original: 0x0047F5C0 - 0x0047F5CA (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047F5C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0047F5C0: ;
    eax = 0x64C9D8;
    g_seh_ebp = ebp; sub_00471D41(); return; /* tail jmp 0x00471D41 */

}

/**
 * sub_0047F5D0
 * Original: 0x0047F5D0 - 0x0047F5DA (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047F5D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0047F5D0: ;
    eax = 0x64CA28;
    g_seh_ebp = ebp; sub_00471D41(); return; /* tail jmp 0x00471D41 */

}

/**
 * sub_0047F5E0
 * Original: 0x0047F5E0 - 0x0047F5EA (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047F5E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0047F5E0: ;
    eax = 0x64CA78;
    g_seh_ebp = ebp; sub_00471D41(); return; /* tail jmp 0x00471D41 */

}

/**
 * sub_0047F5F0
 * Original: 0x0047F5F0 - 0x0047F5FA (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047F5F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0047F5F0: ;
    eax = 0x64CAC8;
    g_seh_ebp = ebp; sub_00471D41(); return; /* tail jmp 0x00471D41 */

}

/**
 * sub_0047F600
 * Original: 0x0047F600 - 0x0047F60A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047F600(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0047F600: ;
    eax = 0x64CB18;
    g_seh_ebp = ebp; sub_00471D41(); return; /* tail jmp 0x00471D41 */

}

/**
 * sub_0047F610
 * Original: 0x0047F610 - 0x0047F61A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047F610(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0047F610: ;
    eax = 0x64CB68;
    g_seh_ebp = ebp; sub_00471D41(); return; /* tail jmp 0x00471D41 */

}

/**
 * sub_0047F620
 * Original: 0x0047F620 - 0x0047F62A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047F620(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0047F620: ;
    eax = 0x64CBB8;
    g_seh_ebp = ebp; sub_00471D41(); return; /* tail jmp 0x00471D41 */

}

/**
 * sub_0047F630
 * Original: 0x0047F630 - 0x0047F63A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047F630(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0047F630: ;
    eax = 0x64CC08;
    g_seh_ebp = ebp; sub_00471D41(); return; /* tail jmp 0x00471D41 */

}

/**
 * sub_0047F640
 * Original: 0x0047F640 - 0x0047F64A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047F640(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0047F640: ;
    eax = 0x64CC58;
    g_seh_ebp = ebp; sub_00471D41(); return; /* tail jmp 0x00471D41 */

}

/**
 * sub_0047F650
 * Original: 0x0047F650 - 0x0047F65A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047F650(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0047F650: ;
    eax = 0x64CCA8;
    g_seh_ebp = ebp; sub_00471D41(); return; /* tail jmp 0x00471D41 */

}

/**
 * sub_0047F660
 * Original: 0x0047F660 - 0x0047F66A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047F660(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0047F660: ;
    eax = 0x64CCF8;
    g_seh_ebp = ebp; sub_00471D41(); return; /* tail jmp 0x00471D41 */

}

/**
 * sub_0047F670
 * Original: 0x0047F670 - 0x0047F67A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047F670(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0047F670: ;
    eax = 0x64CD48;
    g_seh_ebp = ebp; sub_00471D41(); return; /* tail jmp 0x00471D41 */

}

/**
 * sub_0047F680
 * Original: 0x0047F680 - 0x0047F68A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047F680(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0047F680: ;
    eax = 0x64CD98;
    g_seh_ebp = ebp; sub_00471D41(); return; /* tail jmp 0x00471D41 */

}

/**
 * sub_0047F690
 * Original: 0x0047F690 - 0x0047F69A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047F690(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0047F690: ;
    eax = 0x64CE1C;
    g_seh_ebp = ebp; sub_00471D41(); return; /* tail jmp 0x00471D41 */

}

/**
 * sub_0047F6A0
 * Original: 0x0047F6A0 - 0x0047F6AA (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047F6A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0047F6A0: ;
    eax = 0x64CE6C;
    g_seh_ebp = ebp; sub_00471D41(); return; /* tail jmp 0x00471D41 */

}

/**
 * sub_0047F6B0
 * Original: 0x0047F6B0 - 0x0047F6BA (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047F6B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0047F6B0: ;
    eax = 0x64CEBC;
    g_seh_ebp = ebp; sub_00471D41(); return; /* tail jmp 0x00471D41 */

}

/**
 * sub_0047F6C0
 * Original: 0x0047F6C0 - 0x0047F6CA (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047F6C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0047F6C0: ;
    eax = 0x64CF0C;
    g_seh_ebp = ebp; sub_00471D41(); return; /* tail jmp 0x00471D41 */

}

/**
 * sub_0047F6D0
 * Original: 0x0047F6D0 - 0x0047F6DA (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047F6D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0047F6D0: ;
    eax = 0x64CF90;
    g_seh_ebp = ebp; sub_00471D41(); return; /* tail jmp 0x00471D41 */

}

/**
 * sub_0047F6E0
 * Original: 0x0047F6E0 - 0x0047F6EA (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047F6E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0047F6E0: ;
    eax = 0x64CFE0;
    g_seh_ebp = ebp; sub_00471D41(); return; /* tail jmp 0x00471D41 */

}

/**
 * sub_0047F6F0
 * Original: 0x0047F6F0 - 0x0047F6FA (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047F6F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0047F6F0: ;
    eax = 0x64D030;
    g_seh_ebp = ebp; sub_00471D41(); return; /* tail jmp 0x00471D41 */

}

/**
 * sub_0047F700
 * Original: 0x0047F700 - 0x0047F70A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047F700(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0047F700: ;
    eax = 0x64D080;
    g_seh_ebp = ebp; sub_00471D41(); return; /* tail jmp 0x00471D41 */

}

/**
 * sub_0047F710
 * Original: 0x0047F710 - 0x0047F71A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047F710(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0047F710: ;
    eax = 0x64D0D0;
    g_seh_ebp = ebp; sub_00471D41(); return; /* tail jmp 0x00471D41 */

}

/**
 * sub_0047F720
 * Original: 0x0047F720 - 0x0047F72A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047F720(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0047F720: ;
    eax = 0x64D120;
    g_seh_ebp = ebp; sub_00471D41(); return; /* tail jmp 0x00471D41 */

}

/**
 * sub_0047F730
 * Original: 0x0047F730 - 0x0047F73A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047F730(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0047F730: ;
    eax = 0x64D170;
    g_seh_ebp = ebp; sub_00471D41(); return; /* tail jmp 0x00471D41 */

}

/**
 * sub_0047F740
 * Original: 0x0047F740 - 0x0047F74A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047F740(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0047F740: ;
    eax = 0x64D1C0;
    g_seh_ebp = ebp; sub_00471D41(); return; /* tail jmp 0x00471D41 */

}

/**
 * sub_0047F750
 * Original: 0x0047F750 - 0x0047F75A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047F750(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0047F750: ;
    eax = 0x64D210;
    g_seh_ebp = ebp; sub_00471D41(); return; /* tail jmp 0x00471D41 */

}

/**
 * sub_0047F760
 * Original: 0x0047F760 - 0x0047F76A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047F760(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0047F760: ;
    eax = 0x64D260;
    g_seh_ebp = ebp; sub_00471D41(); return; /* tail jmp 0x00471D41 */

}

/**
 * sub_0047F76A
 * Original: 0x0047F76A - 0x0047F772 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047F76A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0047F76A: ;
    ecx = ebp + -28;
    g_seh_ebp = ebp; sub_00531D63(); return; /* tail jmp 0x00531D63 */

}

/**
 * sub_0047F772
 * Original: 0x0047F772 - 0x0047F77C (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047F772(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0047F772: ;
    eax = 0x64D284;
    g_seh_ebp = ebp; sub_00471D41(); return; /* tail jmp 0x00471D41 */

}

/**
 * sub_0047F77C
 * Original: 0x0047F77C - 0x0047F784 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047F77C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0047F77C: ;
    ecx = ebp + 0xC;
    g_seh_ebp = ebp; sub_00529ECB(); return; /* tail jmp 0x00529ECB */

}

/**
 * sub_0047F784
 * Original: 0x0047F784 - 0x0047F78E (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047F784(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0047F784: ;
    eax = 0x64BF20;
    g_seh_ebp = ebp; sub_00471D41(); return; /* tail jmp 0x00471D41 */

}

/**
 * sub_0047F790
 * Original: 0x0047F790 - 0x0047F79A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047F790(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0047F790: ;
    eax = 0x64D2D4;
    g_seh_ebp = ebp; sub_00471D41(); return; /* tail jmp 0x00471D41 */

}

/**
 * sub_0047F7A0
 * Original: 0x0047F7A0 - 0x0047F7AA (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047F7A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0047F7A0: ;
    eax = 0x64D324;
    g_seh_ebp = ebp; sub_00471D41(); return; /* tail jmp 0x00471D41 */

}

/**
 * sub_0047F7B0
 * Original: 0x0047F7B0 - 0x0047F7BA (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047F7B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0047F7B0: ;
    eax = 0x64D374;
    g_seh_ebp = ebp; sub_00471D41(); return; /* tail jmp 0x00471D41 */

}

/**
 * sub_0047F7C0
 * Original: 0x0047F7C0 - 0x0047F7CA (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047F7C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0047F7C0: ;
    eax = 0x64D3C4;
    g_seh_ebp = ebp; sub_00471D41(); return; /* tail jmp 0x00471D41 */

}

/**
 * sub_0047F7D0
 * Original: 0x0047F7D0 - 0x0047F7DA (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047F7D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0047F7D0: ;
    eax = 0x64D414;
    g_seh_ebp = ebp; sub_00471D41(); return; /* tail jmp 0x00471D41 */

}

/**
 * sub_0047F7DA
 * Original: 0x0047F7DA - 0x0047F7E2 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047F7DA(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0047F7DA: ;
    ecx = ebp + -72;
    g_seh_ebp = ebp; sub_0052A065(); return; /* tail jmp 0x0052A065 */

}

/**
 * sub_0047F7E2
 * Original: 0x0047F7E2 - 0x0047F7EA (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047F7E2(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0047F7E2: ;
    ecx = ebp + -28;
    g_seh_ebp = ebp; sub_00529ECB(); return; /* tail jmp 0x00529ECB */

}

/**
 * sub_0047F7EA
 * Original: 0x0047F7EA - 0x0047F7F2 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047F7EA(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0047F7EA: ;
    ecx = ebp + -36;
    g_seh_ebp = ebp; sub_00529ECB(); return; /* tail jmp 0x00529ECB */

}

/**
 * sub_0047F7F2
 * Original: 0x0047F7F2 - 0x0047F7FC (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047F7F2(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0047F7F2: ;
    eax = 0x64D448;
    g_seh_ebp = ebp; sub_00471D41(); return; /* tail jmp 0x00471D41 */

}

/**
 * sub_0047F7FC
 * Original: 0x0047F7FC - 0x0047F804 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047F7FC(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0047F7FC: ;
    ecx = ebp + -40;
    g_seh_ebp = ebp; sub_00529ECB(); return; /* tail jmp 0x00529ECB */

}

/**
 * sub_0047F804
 * Original: 0x0047F804 - 0x0047F80E (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047F804(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0047F804: ;
    eax = 0x64D46C;
    g_seh_ebp = ebp; sub_00471D41(); return; /* tail jmp 0x00471D41 */

}

/**
 * sub_0047F80E
 * Original: 0x0047F80E - 0x0047F816 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047F80E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0047F80E: ;
    ecx = MEM32(ebp + 8);
    g_seh_ebp = ebp; sub_00529E4F(); return; /* tail jmp 0x00529E4F */

}

/**
 * sub_0047F816
 * Original: 0x0047F816 - 0x0047F821 (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047F816(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0047F816: ;
    ecx = MEM32(ebp + 8);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x18;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_0052A065(); return; /* tail jmp 0x0052A065 */

}

/**
 * sub_0047F821
 * Original: 0x0047F821 - 0x0047F82B (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047F821(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0047F821: ;
    eax = 0x64D498;
    g_seh_ebp = ebp; sub_00471D41(); return; /* tail jmp 0x00471D41 */

}

/**
 * sub_0047F830
 * Original: 0x0047F830 - 0x0047F83A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047F830(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0047F830: ;
    eax = 0x64E954;
    g_seh_ebp = ebp; sub_00471D41(); return; /* tail jmp 0x00471D41 */

}

/**
 * sub_0047F840
 * Original: 0x0047F840 - 0x0047F84A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047F840(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0047F840: ;
    eax = 0x64D4E8;
    g_seh_ebp = ebp; sub_00471D41(); return; /* tail jmp 0x00471D41 */

}

/**
 * sub_0047F850
 * Original: 0x0047F850 - 0x0047F85A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047F850(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0047F850: ;
    eax = 0x64D538;
    g_seh_ebp = ebp; sub_00471D41(); return; /* tail jmp 0x00471D41 */

}

/**
 * sub_0047F860
 * Original: 0x0047F860 - 0x0047F86A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047F860(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0047F860: ;
    eax = 0x64D5BC;
    g_seh_ebp = ebp; sub_00471D41(); return; /* tail jmp 0x00471D41 */

}

/**
 * sub_0047F870
 * Original: 0x0047F870 - 0x0047F87A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047F870(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0047F870: ;
    eax = 0x64D60C;
    g_seh_ebp = ebp; sub_00471D41(); return; /* tail jmp 0x00471D41 */

}

/**
 * sub_0047F880
 * Original: 0x0047F880 - 0x0047F88A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047F880(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0047F880: ;
    eax = 0x64D690;
    g_seh_ebp = ebp; sub_00471D41(); return; /* tail jmp 0x00471D41 */

}

/**
 * sub_0047F890
 * Original: 0x0047F890 - 0x0047F89A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047F890(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0047F890: ;
    eax = 0x64D714;
    g_seh_ebp = ebp; sub_00471D41(); return; /* tail jmp 0x00471D41 */

}

/**
 * sub_0047F8A0
 * Original: 0x0047F8A0 - 0x0047F8AA (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047F8A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0047F8A0: ;
    eax = 0x64D764;
    g_seh_ebp = ebp; sub_00471D41(); return; /* tail jmp 0x00471D41 */

}

/**
 * sub_0047F8B0
 * Original: 0x0047F8B0 - 0x0047F8BA (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047F8B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0047F8B0: ;
    eax = 0x64D7B4;
    g_seh_ebp = ebp; sub_00471D41(); return; /* tail jmp 0x00471D41 */

}

/**
 * sub_0047F8C0
 * Original: 0x0047F8C0 - 0x0047F8CA (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047F8C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0047F8C0: ;
    eax = 0x64D838;
    g_seh_ebp = ebp; sub_00471D41(); return; /* tail jmp 0x00471D41 */

}

/**
 * sub_0047F8D0
 * Original: 0x0047F8D0 - 0x0047F8DA (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047F8D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0047F8D0: ;
    eax = 0x64E128;
    g_seh_ebp = ebp; sub_00471D41(); return; /* tail jmp 0x00471D41 */

}

/**
 * sub_0047F8E0
 * Original: 0x0047F8E0 - 0x0047F8EA (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047F8E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0047F8E0: ;
    eax = 0x64DB04;
    g_seh_ebp = ebp; sub_00471D41(); return; /* tail jmp 0x00471D41 */

}

/**
 * sub_0047F8F0
 * Original: 0x0047F8F0 - 0x0047F8FA (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047F8F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0047F8F0: ;
    eax = 0x64D8BC;
    g_seh_ebp = ebp; sub_00471D41(); return; /* tail jmp 0x00471D41 */

}

/**
 * sub_0047F900
 * Original: 0x0047F900 - 0x0047F90A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047F900(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0047F900: ;
    eax = 0x64D90C;
    g_seh_ebp = ebp; sub_00471D41(); return; /* tail jmp 0x00471D41 */

}

/**
 * sub_0047F910
 * Original: 0x0047F910 - 0x0047F91A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047F910(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0047F910: ;
    eax = 0x64DD9C;
    g_seh_ebp = ebp; sub_00471D41(); return; /* tail jmp 0x00471D41 */

}

/**
 * sub_0047F920
 * Original: 0x0047F920 - 0x0047F92A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047F920(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0047F920: ;
    eax = 0x64D990;
    g_seh_ebp = ebp; sub_00471D41(); return; /* tail jmp 0x00471D41 */

}

/**
 * sub_0047F930
 * Original: 0x0047F930 - 0x0047F93A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047F930(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0047F930: ;
    eax = 0x64D9E0;
    g_seh_ebp = ebp; sub_00471D41(); return; /* tail jmp 0x00471D41 */

}

/**
 * sub_0047F940
 * Original: 0x0047F940 - 0x0047F94A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047F940(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0047F940: ;
    eax = 0x64DA30;
    g_seh_ebp = ebp; sub_00471D41(); return; /* tail jmp 0x00471D41 */

}

/**
 * sub_0047F950
 * Original: 0x0047F950 - 0x0047F95A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047F950(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0047F950: ;
    eax = 0x64DA80;
    g_seh_ebp = ebp; sub_00471D41(); return; /* tail jmp 0x00471D41 */

}

/**
 * sub_0047F960
 * Original: 0x0047F960 - 0x0047F96A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047F960(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0047F960: ;
    eax = 0x64DB88;
    g_seh_ebp = ebp; sub_00471D41(); return; /* tail jmp 0x00471D41 */

}

/**
 * sub_0047F970
 * Original: 0x0047F970 - 0x0047F97A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047F970(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0047F970: ;
    eax = 0x64DBD8;
    g_seh_ebp = ebp; sub_00471D41(); return; /* tail jmp 0x00471D41 */

}

/**
 * sub_0047F980
 * Original: 0x0047F980 - 0x0047F98A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047F980(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0047F980: ;
    eax = 0x64DC28;
    g_seh_ebp = ebp; sub_00471D41(); return; /* tail jmp 0x00471D41 */

}

/**
 * sub_0047F990
 * Original: 0x0047F990 - 0x0047F99A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047F990(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0047F990: ;
    eax = 0x64DC78;
    g_seh_ebp = ebp; sub_00471D41(); return; /* tail jmp 0x00471D41 */

}

/**
 * sub_0047F9A0
 * Original: 0x0047F9A0 - 0x0047F9AA (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047F9A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0047F9A0: ;
    eax = 0x64DCC8;
    g_seh_ebp = ebp; sub_00471D41(); return; /* tail jmp 0x00471D41 */

}

/**
 * sub_0047F9B0
 * Original: 0x0047F9B0 - 0x0047F9BA (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047F9B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0047F9B0: ;
    eax = 0x64DD18;
    g_seh_ebp = ebp; sub_00471D41(); return; /* tail jmp 0x00471D41 */

}

/**
 * sub_0047F9C0
 * Original: 0x0047F9C0 - 0x0047F9CA (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047F9C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0047F9C0: ;
    eax = 0x64DDEC;
    g_seh_ebp = ebp; sub_00471D41(); return; /* tail jmp 0x00471D41 */

}

/**
 * sub_0047F9D0
 * Original: 0x0047F9D0 - 0x0047F9DA (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047F9D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0047F9D0: ;
    eax = 0x64E9D8;
    g_seh_ebp = ebp; sub_00471D41(); return; /* tail jmp 0x00471D41 */

}

/**
 * sub_0047F9E0
 * Original: 0x0047F9E0 - 0x0047F9EA (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047F9E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0047F9E0: ;
    eax = 0x64DE3C;
    g_seh_ebp = ebp; sub_00471D41(); return; /* tail jmp 0x00471D41 */

}

/**
 * sub_0047F9F0
 * Original: 0x0047F9F0 - 0x0047F9FA (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047F9F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0047F9F0: ;
    eax = 0x64DE8C;
    g_seh_ebp = ebp; sub_00471D41(); return; /* tail jmp 0x00471D41 */

}

/**
 * sub_0047FA00
 * Original: 0x0047FA00 - 0x0047FA0A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047FA00(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0047FA00: ;
    eax = 0x64DF10;
    g_seh_ebp = ebp; sub_00471D41(); return; /* tail jmp 0x00471D41 */

}

/**
 * sub_0047FA10
 * Original: 0x0047FA10 - 0x0047FA1A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047FA10(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0047FA10: ;
    eax = 0x64DF60;
    g_seh_ebp = ebp; sub_00471D41(); return; /* tail jmp 0x00471D41 */

}

/**
 * sub_0047FA1A
 * Original: 0x0047FA1A - 0x0047FA24 (10 bytes, 4 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047FA1A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0047FA1A: ;
    PUSH32(esp, MEM32(ebp + -16));
    PUSH32(esp, 0x0047FA22u); RECOMP_ABI_CALL(0x00529E23u, sub_00529E23); /* call 0x00529E23 */

loc_0047FA22: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0047FA24
 * Original: 0x0047FA24 - 0x0047FA2E (10 bytes, 4 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047FA24(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0047FA24: ;
    PUSH32(esp, MEM32(ebp + -16));
    PUSH32(esp, 0x0047FA2Cu); RECOMP_ABI_CALL(0x00529E23u, sub_00529E23); /* call 0x00529E23 */

loc_0047FA2C: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0047FA2E
 * Original: 0x0047FA2E - 0x0047FA38 (10 bytes, 4 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047FA2E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0047FA2E: ;
    PUSH32(esp, MEM32(ebp + -16));
    PUSH32(esp, 0x0047FA36u); RECOMP_ABI_CALL(0x00529E23u, sub_00529E23); /* call 0x00529E23 */

loc_0047FA36: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0047FA38
 * Original: 0x0047FA38 - 0x0047FA42 (10 bytes, 4 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047FA38(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0047FA38: ;
    PUSH32(esp, MEM32(ebp + -16));
    PUSH32(esp, 0x0047FA40u); RECOMP_ABI_CALL(0x00529E23u, sub_00529E23); /* call 0x00529E23 */

loc_0047FA40: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0047FA42
 * Original: 0x0047FA42 - 0x0047FA4C (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047FA42(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0047FA42: ;
    eax = 0x64E020;
    g_seh_ebp = ebp; sub_00471D41(); return; /* tail jmp 0x00471D41 */

}

/**
 * sub_0047FA4C
 * Original: 0x0047FA4C - 0x0047FA54 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047FA4C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0047FA4C: ;
    ecx = ebp + 0x10;
    g_seh_ebp = ebp; sub_00529ECB(); return; /* tail jmp 0x00529ECB */

}

/**
 * sub_0047FA54
 * Original: 0x0047FA54 - 0x0047FA5E (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047FA54(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0047FA54: ;
    eax = 0x64E044;
    g_seh_ebp = ebp; sub_00471D41(); return; /* tail jmp 0x00471D41 */

}

/**
 * sub_0047FA5E
 * Original: 0x0047FA5E - 0x0047FA66 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047FA5E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0047FA5E: ;
    ecx = ebp + 0x1C;
    g_seh_ebp = ebp; sub_00529ECB(); return; /* tail jmp 0x00529ECB */

}

/**
 * sub_0047FA66
 * Original: 0x0047FA66 - 0x0047FA6E (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047FA66(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0047FA66: ;
    ecx = MEM32(ebp + 8);
    g_seh_ebp = ebp; sub_00529E4F(); return; /* tail jmp 0x00529E4F */

}

/**
 * sub_0047FA6E
 * Original: 0x0047FA6E - 0x0047FA79 (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047FA6E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0047FA6E: ;
    ecx = MEM32(ebp + 8);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_00531BD4(); return; /* tail jmp 0x00531BD4 */

}

/**
 * sub_0047FA79
 * Original: 0x0047FA79 - 0x0047FA83 (10 bytes, 4 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047FA79(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0047FA79: ;
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, 0x0047FA81u); RECOMP_ABI_CALL(0x00529E23u, sub_00529E23); /* call 0x00529E23 */

loc_0047FA81: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0047FA83
 * Original: 0x0047FA83 - 0x0047FA8D (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047FA83(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0047FA83: ;
    eax = 0x64E0A4;
    g_seh_ebp = ebp; sub_00471D41(); return; /* tail jmp 0x00471D41 */

}

/**
 * sub_0047FA90
 * Original: 0x0047FA90 - 0x0047FA9A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047FA90(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0047FA90: ;
    eax = 0x64E1FC;
    g_seh_ebp = ebp; sub_00471D41(); return; /* tail jmp 0x00471D41 */

}

/**
 * sub_0047FAA0
 * Original: 0x0047FAA0 - 0x0047FAAA (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047FAA0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0047FAA0: ;
    eax = 0x64E280;
    g_seh_ebp = ebp; sub_00471D41(); return; /* tail jmp 0x00471D41 */

}

/**
 * sub_0047FAB0
 * Original: 0x0047FAB0 - 0x0047FABA (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047FAB0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0047FAB0: ;
    eax = 0x64E2D0;
    g_seh_ebp = ebp; sub_00471D41(); return; /* tail jmp 0x00471D41 */

}

/**
 * sub_0047FAC0
 * Original: 0x0047FAC0 - 0x0047FACA (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047FAC0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0047FAC0: ;
    eax = 0x64E354;
    g_seh_ebp = ebp; sub_00471D41(); return; /* tail jmp 0x00471D41 */

}

/**
 * sub_0047FAD0
 * Original: 0x0047FAD0 - 0x0047FADA (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047FAD0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0047FAD0: ;
    eax = 0x64E3D8;
    g_seh_ebp = ebp; sub_00471D41(); return; /* tail jmp 0x00471D41 */

}

/**
 * sub_0047FAE0
 * Original: 0x0047FAE0 - 0x0047FAEA (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047FAE0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0047FAE0: ;
    eax = 0x64E428;
    g_seh_ebp = ebp; sub_00471D41(); return; /* tail jmp 0x00471D41 */

}

/**
 * sub_0047FAF0
 * Original: 0x0047FAF0 - 0x0047FAFA (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047FAF0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0047FAF0: ;
    eax = 0x64E478;
    g_seh_ebp = ebp; sub_00471D41(); return; /* tail jmp 0x00471D41 */

}

/**
 * sub_0047FB00
 * Original: 0x0047FB00 - 0x0047FB0A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047FB00(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0047FB00: ;
    eax = 0x64E4FC;
    g_seh_ebp = ebp; sub_00471D41(); return; /* tail jmp 0x00471D41 */

}

/**
 * sub_0047FB10
 * Original: 0x0047FB10 - 0x0047FB1A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047FB10(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0047FB10: ;
    eax = 0x64E580;
    g_seh_ebp = ebp; sub_00471D41(); return; /* tail jmp 0x00471D41 */

}

/**
 * sub_0047FB20
 * Original: 0x0047FB20 - 0x0047FB2A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047FB20(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0047FB20: ;
    eax = 0x64E5D0;
    g_seh_ebp = ebp; sub_00471D41(); return; /* tail jmp 0x00471D41 */

}

/**
 * sub_0047FB30
 * Original: 0x0047FB30 - 0x0047FB3A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047FB30(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0047FB30: ;
    eax = 0x64E620;
    g_seh_ebp = ebp; sub_00471D41(); return; /* tail jmp 0x00471D41 */

}

/**
 * sub_0047FB40
 * Original: 0x0047FB40 - 0x0047FB4A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047FB40(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0047FB40: ;
    eax = 0x64E6A4;
    g_seh_ebp = ebp; sub_00471D41(); return; /* tail jmp 0x00471D41 */

}

/**
 * sub_0047FB50
 * Original: 0x0047FB50 - 0x0047FB5A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047FB50(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0047FB50: ;
    eax = 0x64E728;
    g_seh_ebp = ebp; sub_00471D41(); return; /* tail jmp 0x00471D41 */

}

/**
 * sub_0047FB60
 * Original: 0x0047FB60 - 0x0047FB6A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047FB60(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0047FB60: ;
    eax = 0x64E778;
    g_seh_ebp = ebp; sub_00471D41(); return; /* tail jmp 0x00471D41 */

}

/**
 * sub_0047FB70
 * Original: 0x0047FB70 - 0x0047FB7A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047FB70(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0047FB70: ;
    eax = 0x64E7C8;
    g_seh_ebp = ebp; sub_00471D41(); return; /* tail jmp 0x00471D41 */

}

/**
 * sub_0047FB80
 * Original: 0x0047FB80 - 0x0047FB8A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047FB80(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0047FB80: ;
    eax = 0x64E84C;
    g_seh_ebp = ebp; sub_00471D41(); return; /* tail jmp 0x00471D41 */

}

/**
 * sub_0047FB90
 * Original: 0x0047FB90 - 0x0047FB9A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047FB90(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0047FB90: ;
    eax = 0x64E8D0;
    g_seh_ebp = ebp; sub_00471D41(); return; /* tail jmp 0x00471D41 */

}

/**
 * sub_0047FBA0
 * Original: 0x0047FBA0 - 0x0047FBAA (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047FBA0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0047FBA0: ;
    eax = 0x64E1AC;
    g_seh_ebp = ebp; sub_00471D41(); return; /* tail jmp 0x00471D41 */

}

/**
 * sub_0047FBB0
 * Original: 0x0047FBB0 - 0x0047FBBA (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047FBB0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0047FBB0: ;
    eax = 0x64EA5C;
    g_seh_ebp = ebp; sub_00471D41(); return; /* tail jmp 0x00471D41 */

}

/**
 * sub_0047FBC0
 * Original: 0x0047FBC0 - 0x0047FBCA (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047FBC0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0047FBC0: ;
    eax = 0x64EAAC;
    g_seh_ebp = ebp; sub_00471D41(); return; /* tail jmp 0x00471D41 */

}

/**
 * sub_0047FBD0
 * Original: 0x0047FBD0 - 0x0047FBDA (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047FBD0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0047FBD0: ;
    eax = 0x64EB30;
    g_seh_ebp = ebp; sub_00471D41(); return; /* tail jmp 0x00471D41 */

}

/**
 * sub_0047FBE0
 * Original: 0x0047FBE0 - 0x0047FBEA (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047FBE0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0047FBE0: ;
    eax = 0x64EBB4;
    g_seh_ebp = ebp; sub_00471D41(); return; /* tail jmp 0x00471D41 */

}

/**
 * sub_0047FBF0
 * Original: 0x0047FBF0 - 0x0047FBFA (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047FBF0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0047FBF0: ;
    eax = 0x64EC38;
    g_seh_ebp = ebp; sub_00471D41(); return; /* tail jmp 0x00471D41 */

}

/**
 * sub_0047FC00
 * Original: 0x0047FC00 - 0x0047FC0A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047FC00(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0047FC00: ;
    eax = 0x64EC88;
    g_seh_ebp = ebp; sub_00471D41(); return; /* tail jmp 0x00471D41 */

}

/**
 * sub_0047FC10
 * Original: 0x0047FC10 - 0x0047FC1A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047FC10(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0047FC10: ;
    eax = 0x64ECD8;
    g_seh_ebp = ebp; sub_00471D41(); return; /* tail jmp 0x00471D41 */

}

/**
 * sub_0047FC20
 * Original: 0x0047FC20 - 0x0047FC2A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047FC20(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0047FC20: ;
    eax = 0x64DFE4;
    g_seh_ebp = ebp; sub_00471D41(); return; /* tail jmp 0x00471D41 */

}

/**
 * sub_0047FC2A
 * Original: 0x0047FC2A - 0x0047FC34 (10 bytes, 4 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047FC2A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0047FC2A: ;
    PUSH32(esp, MEM32(ebp + -16));
    PUSH32(esp, 0x0047FC32u); RECOMP_ABI_CALL(0x00529E23u, sub_00529E23); /* call 0x00529E23 */

loc_0047FC32: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0047FC34
 * Original: 0x0047FC34 - 0x0047FC3E (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047FC34(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0047FC34: ;
    eax = 0x64E068;
    g_seh_ebp = ebp; sub_00471D41(); return; /* tail jmp 0x00471D41 */

}

/**
 * sub_0047FC3E
 * Original: 0x0047FC3E - 0x0047FC46 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047FC3E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0047FC3E: ;
    ecx = ebp + 0x1C;
    g_seh_ebp = ebp; sub_00529ECB(); return; /* tail jmp 0x00529ECB */

}

/**
 * sub_0047FC46
 * Original: 0x0047FC46 - 0x0047FC50 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047FC46(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0047FC46: ;
    eax = 0x64BEFC;
    g_seh_ebp = ebp; sub_00471D41(); return; /* tail jmp 0x00471D41 */

}

/**
 * sub_0047FC50
 * Original: 0x0047FC50 - 0x0047FC58 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047FC50(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0047FC50: ;
    ecx = MEM32(ebp + -16);
    g_seh_ebp = ebp; sub_00529E4F(); return; /* tail jmp 0x00529E4F */

}

/**
 * sub_0047FC58
 * Original: 0x0047FC58 - 0x0047FC63 (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047FC58(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0047FC58: ;
    ecx = MEM32(ebp + -16);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x18;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_0052A065(); return; /* tail jmp 0x0052A065 */

}

/**
 * sub_0047FC63
 * Original: 0x0047FC63 - 0x0047FC6D (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047FC63(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0047FC63: ;
    eax = 0x64ED04;
    g_seh_ebp = ebp; sub_00471D41(); return; /* tail jmp 0x00471D41 */

}

/**
 * sub_0047FC6D
 * Original: 0x0047FC6D - 0x0047FC75 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047FC6D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0047FC6D: ;
    ecx = ebp + 0x1C;
    g_seh_ebp = ebp; sub_00529ECB(); return; /* tail jmp 0x00529ECB */

}

/**
 * sub_0047FC75
 * Original: 0x0047FC75 - 0x0047FC7D (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047FC75(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0047FC75: ;
    ecx = ebp + 0x14;
    g_seh_ebp = ebp; sub_00529ECB(); return; /* tail jmp 0x00529ECB */

}

/**
 * sub_0047FC7D
 * Original: 0x0047FC7D - 0x0047FC85 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047FC7D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0047FC7D: ;
    ecx = ebp + -68;
    g_seh_ebp = ebp; sub_00531D63(); return; /* tail jmp 0x00531D63 */

}

/**
 * sub_0047FC85
 * Original: 0x0047FC85 - 0x0047FC8D (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047FC85(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0047FC85: ;
    ecx = ebp + -72;
    g_seh_ebp = ebp; sub_0052A065(); return; /* tail jmp 0x0052A065 */

}

/**
 * sub_0047FC8D
 * Original: 0x0047FC8D - 0x0047FC97 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047FC8D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0047FC8D: ;
    eax = 0x64ED40;
    g_seh_ebp = ebp; sub_00471D41(); return; /* tail jmp 0x00471D41 */

}

/**
 * sub_0047FC97
 * Original: 0x0047FC97 - 0x0047FC9F (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047FC97(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0047FC97: ;
    ecx = ebp + -36;
    g_seh_ebp = ebp; sub_00529ECB(); return; /* tail jmp 0x00529ECB */

}

/**
 * sub_0047FC9F
 * Original: 0x0047FC9F - 0x0047FCA9 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047FC9F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0047FC9F: ;
    eax = 0x64ED64;
    g_seh_ebp = ebp; sub_00471D41(); return; /* tail jmp 0x00471D41 */

}

/**
 * sub_0047FCA9
 * Original: 0x0047FCA9 - 0x0047FCC2 (25 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047FCA9(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0047FCA9: ;
    eax = MEM32(ebp + -16);
    eax = eax & 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if ((_fa == 0)) goto loc_0047FCC1; /* je: equal / zero */

loc_0047FCB5: ;
    MEM32(ebp + -16) = MEM32(ebp + -16) & 0xFFFFFFFEu;
    _fa = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ebp + -52;
    g_seh_ebp = ebp; sub_0052A065(); return; /* tail jmp 0x0052A065 */

loc_0047FCC1: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0047FCC2
 * Original: 0x0047FCC2 - 0x0047FCCC (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047FCC2(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0047FCC2: ;
    eax = 0x64ED88;
    g_seh_ebp = ebp; sub_00471D41(); return; /* tail jmp 0x00471D41 */

}

/**
 * sub_0047FCCC
 * Original: 0x0047FCCC - 0x0047FCD4 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047FCCC(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0047FCCC: ;
    ecx = MEM32(ebp + -20);
    g_seh_ebp = ebp; sub_00529E4F(); return; /* tail jmp 0x00529E4F */

}

/**
 * sub_0047FCD4
 * Original: 0x0047FCD4 - 0x0047FCDF (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047FCD4(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0047FCD4: ;
    ecx = MEM32(ebp + -20);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_00531BD4(); return; /* tail jmp 0x00531BD4 */

}

/**
 * sub_0047FCDF
 * Original: 0x0047FCDF - 0x0047FCE9 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047FCDF(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0047FCDF: ;
    eax = 0x64EDB4;
    g_seh_ebp = ebp; sub_00471D41(); return; /* tail jmp 0x00471D41 */

}

/**
 * sub_0047FCE9
 * Original: 0x0047FCE9 - 0x0047FCF1 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047FCE9(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0047FCE9: ;
    ecx = ebp + 0x1C;
    g_seh_ebp = ebp; sub_00529ECB(); return; /* tail jmp 0x00529ECB */

}

/**
 * sub_0047FCF1
 * Original: 0x0047FCF1 - 0x0047FCF9 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047FCF1(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0047FCF1: ;
    ecx = ebp + 0x14;
    g_seh_ebp = ebp; sub_00529ECB(); return; /* tail jmp 0x00529ECB */

}

/**
 * sub_0047FCF9
 * Original: 0x0047FCF9 - 0x0047FD03 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047FCF9(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0047FCF9: ;
    eax = 0x64EDE0;
    g_seh_ebp = ebp; sub_00471D41(); return; /* tail jmp 0x00471D41 */

}

/**
 * sub_0047FD10
 * Original: 0x0047FD10 - 0x0047FD1A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047FD10(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0047FD10: ;
    eax = 0x64EE30;
    g_seh_ebp = ebp; sub_00471D41(); return; /* tail jmp 0x00471D41 */

}

/**
 * sub_0047FD20
 * Original: 0x0047FD20 - 0x0047FD2A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047FD20(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0047FD20: ;
    eax = 0x64EE80;
    g_seh_ebp = ebp; sub_00471D41(); return; /* tail jmp 0x00471D41 */

}

/**
 * sub_0047FD30
 * Original: 0x0047FD30 - 0x0047FD3A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047FD30(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0047FD30: ;
    eax = 0x64EF04;
    g_seh_ebp = ebp; sub_00471D41(); return; /* tail jmp 0x00471D41 */

}

/**
 * sub_0047FD40
 * Original: 0x0047FD40 - 0x0047FD4A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047FD40(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0047FD40: ;
    eax = 0x64EF54;
    g_seh_ebp = ebp; sub_00471D41(); return; /* tail jmp 0x00471D41 */

}

/**
 * sub_0047FD50
 * Original: 0x0047FD50 - 0x0047FD5A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047FD50(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0047FD50: ;
    eax = 0x64EFA4;
    g_seh_ebp = ebp; sub_00471D41(); return; /* tail jmp 0x00471D41 */

}

/**
 * sub_0047FD60
 * Original: 0x0047FD60 - 0x0047FD6A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047FD60(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0047FD60: ;
    eax = 0x64EFF4;
    g_seh_ebp = ebp; sub_00471D41(); return; /* tail jmp 0x00471D41 */

}

/**
 * sub_0047FD70
 * Original: 0x0047FD70 - 0x0047FD7A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047FD70(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0047FD70: ;
    eax = 0x64F044;
    g_seh_ebp = ebp; sub_00471D41(); return; /* tail jmp 0x00471D41 */

}

/**
 * sub_0047FD7A
 * Original: 0x0047FD7A - 0x0047FD82 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047FD7A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0047FD7A: ;
    ecx = ebp + 0x18;
    g_seh_ebp = ebp; sub_00529ECB(); return; /* tail jmp 0x00529ECB */

}

/**
 * sub_0047FD82
 * Original: 0x0047FD82 - 0x0047FD8A (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047FD82(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0047FD82: ;
    ecx = ebp + -20;
    g_seh_ebp = ebp; sub_00529ECB(); return; /* tail jmp 0x00529ECB */

}

/**
 * sub_0047FD8A
 * Original: 0x0047FD8A - 0x0047FD94 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047FD8A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0047FD8A: ;
    eax = 0x64F070;
    g_seh_ebp = ebp; sub_00471D41(); return; /* tail jmp 0x00471D41 */

}

/**
 * sub_0047FD94
 * Original: 0x0047FD94 - 0x0047FD9C (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047FD94(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0047FD94: ;
    ecx = ebp + -44;
    g_seh_ebp = ebp; sub_00529ECB(); return; /* tail jmp 0x00529ECB */

}

/**
 * sub_0047FD9C
 * Original: 0x0047FD9C - 0x0047FDA6 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047FD9C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0047FD9C: ;
    eax = 0x64F094;
    g_seh_ebp = ebp; sub_00471D41(); return; /* tail jmp 0x00471D41 */

}

/**
 * sub_0047FDA6
 * Original: 0x0047FDA6 - 0x0047FDB0 (10 bytes, 4 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047FDA6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0047FDA6: ;
    PUSH32(esp, MEM32(ebp + -28));
    PUSH32(esp, 0x0047FDAEu); RECOMP_ABI_CALL(0x00529E23u, sub_00529E23); /* call 0x00529E23 */

loc_0047FDAE: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0047FDB0
 * Original: 0x0047FDB0 - 0x0047FDBA (10 bytes, 4 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047FDB0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0047FDB0: ;
    PUSH32(esp, MEM32(ebp + -24));
    PUSH32(esp, 0x0047FDB8u); RECOMP_ABI_CALL(0x00529E23u, sub_00529E23); /* call 0x00529E23 */

loc_0047FDB8: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0047FDBA
 * Original: 0x0047FDBA - 0x0047FDC4 (10 bytes, 4 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047FDBA(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0047FDBA: ;
    PUSH32(esp, MEM32(ebp + -20));
    PUSH32(esp, 0x0047FDC2u); RECOMP_ABI_CALL(0x00529E23u, sub_00529E23); /* call 0x00529E23 */

loc_0047FDC2: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0047FDC4
 * Original: 0x0047FDC4 - 0x0047FDCE (10 bytes, 4 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047FDC4(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0047FDC4: ;
    PUSH32(esp, MEM32(ebp + -20));
    PUSH32(esp, 0x0047FDCCu); RECOMP_ABI_CALL(0x00529E23u, sub_00529E23); /* call 0x00529E23 */

loc_0047FDCC: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0047FDCE
 * Original: 0x0047FDCE - 0x0047FDD8 (10 bytes, 4 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047FDCE(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0047FDCE: ;
    PUSH32(esp, MEM32(ebp + -24));
    PUSH32(esp, 0x0047FDD6u); RECOMP_ABI_CALL(0x00529E23u, sub_00529E23); /* call 0x00529E23 */

loc_0047FDD6: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0047FDD8
 * Original: 0x0047FDD8 - 0x0047FDE2 (10 bytes, 4 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047FDD8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0047FDD8: ;
    PUSH32(esp, MEM32(ebp + -20));
    PUSH32(esp, 0x0047FDE0u); RECOMP_ABI_CALL(0x00529E23u, sub_00529E23); /* call 0x00529E23 */

loc_0047FDE0: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0047FDE2
 * Original: 0x0047FDE2 - 0x0047FDEC (10 bytes, 4 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047FDE2(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0047FDE2: ;
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0x0047FDEAu); RECOMP_ABI_CALL(0x00529E23u, sub_00529E23); /* call 0x00529E23 */

loc_0047FDEA: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0047FDEC
 * Original: 0x0047FDEC - 0x0047FDF6 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047FDEC(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0047FDEC: ;
    eax = 0x64F0E8;
    g_seh_ebp = ebp; sub_00471D41(); return; /* tail jmp 0x00471D41 */

}

/**
 * sub_0047FE00
 * Original: 0x0047FE00 - 0x0047FE0A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047FE00(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0047FE00: ;
    eax = 0x64F138;
    g_seh_ebp = ebp; sub_00471D41(); return; /* tail jmp 0x00471D41 */

}

/**
 * sub_0047FE10
 * Original: 0x0047FE10 - 0x0047FE1A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047FE10(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0047FE10: ;
    eax = 0x64F1BC;
    g_seh_ebp = ebp; sub_00471D41(); return; /* tail jmp 0x00471D41 */

}

/**
 * sub_0047FE20
 * Original: 0x0047FE20 - 0x0047FE2A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047FE20(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0047FE20: ;
    eax = 0x64F20C;
    g_seh_ebp = ebp; sub_00471D41(); return; /* tail jmp 0x00471D41 */

}

/**
 * sub_0047FE30
 * Original: 0x0047FE30 - 0x0047FE3A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047FE30(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0047FE30: ;
    eax = 0x64F25C;
    g_seh_ebp = ebp; sub_00471D41(); return; /* tail jmp 0x00471D41 */

}

/**
 * sub_0047FE40
 * Original: 0x0047FE40 - 0x0047FE4A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047FE40(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0047FE40: ;
    eax = 0x64F2E0;
    g_seh_ebp = ebp; sub_00471D41(); return; /* tail jmp 0x00471D41 */

}

/**
 * sub_0047FE50
 * Original: 0x0047FE50 - 0x0047FE5A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047FE50(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0047FE50: ;
    eax = 0x64F330;
    g_seh_ebp = ebp; sub_00471D41(); return; /* tail jmp 0x00471D41 */

}

/**
 * Conker - Recompiled code chunk 38
 * Functions: 250 (0x00302AA0 - 0x0030AB60)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_00302AA0
 * Original: 0x00302AA0 - 0x00302AEE (78 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00302AA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00302AA0: ;
    PUSH32(esp, ebx);
    ebx = ecx;
    SET_LO8(ecx, MEM8(0x7819D5));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00302AD1; /* jne: not equal / not zero */

loc_00302AAD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00302AB8; /* jne: not equal / not zero */

loc_00302AB1: ;
    PUSH32(esp, 0x00302AB6u); RECOMP_ABI_CALL(0x00021560u, sub_00021560); /* call 0x00021560 */

loc_00302AB6: ;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00302AB8: ;
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    eax = MEM32(0x847024);
    ecx = MEM32(eax + 0x40);
    PUSH32(esp, ecx);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x00302ACFu); RECOMP_ABI_CALL(0x00024FA0u, sub_00024FA0); /* call 0x00024FA0 */

loc_00302ACF: ;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00302AD1: ;
    edx = MEM32(0x847024);
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    eax = MEM32(edx + 0x40);
    PUSH32(esp, eax);
    eax = 2;
    PUSH32(esp, 0x00302AECu); RECOMP_ABI_CALL(0x00024FA0u, sub_00024FA0); /* call 0x00024FA0 */

loc_00302AEC: ;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00302AF0
 * Original: 0x00302AF0 - 0x00302B05 (21 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00302AF0(void)
{

loc_00302AF0: ;
    eax = MEM32(esp + 4);
    xmm0.f[0] = (float)(int32_t)MEM32(0x7FDBF8); /* cvtsi2ss */
    MEMF(eax + 0xD0) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00302B10
 * Original: 0x00302B10 - 0x00302BC3 (179 bytes, 45 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00302B10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00302B10: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(MEM32(esi + 0x64)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x16) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x64), 0x16 (32-bit) */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x7C)); /* movss */
    if (CMP_NE(_fa, _fb)) goto loc_00302B93; /* jne: not equal / not zero */

loc_00302B20: ;
    _fca = xmm0.f[0]; _fcb = MEMF(esi + 0x294); /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((0) ? 0x80u : 0u) | (((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00302BC1; /* jp: parity */

loc_00302B31: ;
    PUSH32(esp, 0x00302B36u); RECOMP_ABI_CALL(0x003E2480u, sub_003E2480); /* call 0x003E2480 */

loc_00302B36: ;
    eax = eax & 0x80000007u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if ((_fas >= 0)) goto loc_00302B42; /* jns: not sign (positive) */

loc_00302B3D: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = eax | 0xFFFFFFF8u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00302B42: ;
    _fb = (uint32_t)(MEM32(0x7FDBF8)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(0x7FDBF8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 8) = eax;
    fp_push((double)SMEM32(esp + 8)); /* fild */
    if (CMP_GE(_fas, _fbs)) goto loc_00302B5A; /* jge: greater or equal (signed >=) */

loc_00302B54: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x648CE8)); /* fadd dword ptr [0x648ce8] */

loc_00302B5A: ;
    xmm1 = XMM_SCALAR(MEMF(esi + 0x110)); /* movss */
    MEMF(esp + 8) = (float)fp_top(); /* fst */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esi + 0xD0) = (float)fp_top(); fp_pop(); /* fstp */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((0) ? 0x80u : 0u) | (((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_00302BB9; /* jnp: not parity */

loc_00302B78: ;
    xmm0 = xmm1; /* movaps */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x648EF4); /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 8); /* mulss */
    MEMF(esi + 0xD0) = xmm0.f[0]; /* movss */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00302B93: ;
    xmm0.f[0] = xmm0.f[0] - MEMF(esi + 0x294); /* subss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x649354); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00302BC1; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x649354)) */

loc_00302BA4: ;
    xmm1 = XMM_SCALAR(MEMF(0x648D1C)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00302BC1; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_00302BB1: ;
    xmm0.f[0] = (float)(int32_t)MEM32(0x7FDBF8); /* cvtsi2ss */

loc_00302BB9: ;
    MEMF(esi + 0xD0) = xmm0.f[0]; /* movss */

loc_00302BC1: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00302BD0
 * Original: 0x00302BD0 - 0x00302BF3 (35 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00302BD0(void)
{
    int _flags = 0; /* fallback flag var */
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_00302BD0: ;
    eax = MEM32(esp + 4);
    xmm0 = XMM_SCALAR(MEMF(0x648F0C)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(eax + 0x7C); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00302BF2; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(eax + 0x7C)) */

loc_00302BE2: ;
    xmm0.f[0] = (float)(int32_t)MEM32(0x7FDBF8); /* cvtsi2ss */
    MEMF(eax + 0xD0) = xmm0.f[0]; /* movss */

loc_00302BF2: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00302C00
 * Original: 0x00302C00 - 0x00302C15 (21 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00302C00(void)
{

loc_00302C00: ;
    eax = MEM32(esp + 4);
    xmm0.f[0] = (float)(int32_t)MEM32(0x7FDBF8); /* cvtsi2ss */
    MEMF(eax + 0xD4) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00302C20
 * Original: 0x00302C20 - 0x00302C3D (29 bytes, 5 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00302C20(void)
{

loc_00302C20: ;
    xmm0.f[0] = (float)(int32_t)MEM32(0x7FDBF8); /* cvtsi2ss */
    eax = MEM32(esp + 4);
    xmm0.f[0] = xmm0.f[0] * MEMF(0x648D80); /* mulss */
    MEMF(eax + 0xD4) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00302C40
 * Original: 0x00302C40 - 0x00302C4C (12 bytes, 3 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00302C40(void)
{

loc_00302C40: ;
    eax = MEM32(esp + 4);
    MEM8(eax + 0x180) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_00302C50
 * Original: 0x00302C50 - 0x00302C65 (21 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00302C50(void)
{

loc_00302C50: ;
    eax = MEM32(esp + 4);
    xmm0.f[0] = (float)(int32_t)MEM32(0x7FDBF8); /* cvtsi2ss */
    MEMF(eax + 0x1C8) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00302C70
 * Original: 0x00302C70 - 0x00302C81 (17 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00302C70(void)
{

loc_00302C70: ;
    eax = MEM32(esp + 4);
    SET_LO8(ecx, MEM8(0x7FDBF8));
    MEM8(eax + 0x180) = LO8(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00302C90
 * Original: 0x00302C90 - 0x00302CFB (107 bytes, 23 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00302C90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_00302C90: ;
    _fa = (uint32_t)(MEM32(0x7FA1F8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x13) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x7FA1F8), 0x13 (32-bit) */
    ecx = MEM32(esp + 4);
    if (CMP_NE(_fa, _fb)) goto loc_00302CDA; /* jne: not equal / not zero */

loc_00302C9D: ;
    _fa = (uint32_t)(MEM32(ecx + 0x68)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x66) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x68), 0x66 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00302CDA; /* jne: not equal / not zero */

loc_00302CA3: ;
    xmm0 = XMM_SCALAR(MEMF(0x7F9F5C)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x648F08); /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((0) ? 0x80u : 0u) | (((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00302CC9; /* jp: parity */

loc_00302CB8: ;
    xmm0 = XMM_SCALAR(MEMF(0x648F04)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x84A628); /* comiss */
    goto loc_00302CD8;

loc_00302CC9: ;
    xmm0 = XMM_SCALAR(MEMF(0x84A628)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x648F00); /* comiss */

loc_00302CD8: ;
    if ((_fca > _fcb)) goto loc_00302CFA; /* ja: above (unsigned >) (xmm0.f[0] vs MEMF(0x84A628)) */

loc_00302CDA: ;
    SET_LO8(eax, MEM8(0x7FDBF8));
    MEM8(ecx + 0x1D8) = LO8(eax);
    edx = MEM32(0x7FDBF8);
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((8) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    xmm0.f[0] = (float)(int32_t)edx; /* cvtsi2ss */
    MEMF(ecx + 0x224) = xmm0.f[0]; /* movss */

loc_00302CFA: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00302D00
 * Original: 0x00302D00 - 0x00302D25 (37 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00302D00(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00302D00: ;
    SET_LO8(eax, MEM8(0x7819D5));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00302D24; /* jne: not equal / not zero */

loc_00302D09: ;
    eax = MEM32(esp + 4);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x7C)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(eax + 0x228); /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00302D24; /* jb: below (unsigned <) (xmm0.f[0] vs MEMF(eax + 0x228)) */

loc_00302D1B: ;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_00302D30(); return; /* tail jmp 0x00302D30 */

loc_00302D24: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00302D30
 * Original: 0x00302D30 - 0x00302FA6 (630 bytes, 207 insns)
 * Category: game_debug
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00302D30(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00302D30: ;
    PUSH32(esp, ecx);
    SET_LO8(eax, MEM8(0x7819D5));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00302FA4; /* jne: not equal / not zero */

loc_00302D3E: ;
    edx = ZX8(MEM8(0x7FDBFB));
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    eax = MEM32(ebp + 0x70);
    PUSH32(esp, esi);
    esi = MEM32(0x7FDBF8);
    ebx = esi;
    ebx = ebx & 0x7FF;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x80 (32-bit) */
    SET_LO8(ecx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x75) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x75 (32-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x80 (32-bit) */
    ecx = ZX8(LO8(ecx));
    eax = ZX8(LO8(eax));
    if (CMP_NE(_fa, _fb)) goto loc_00302D81; /* jne: not equal / not zero */

loc_00302D79: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00302D8E; /* je: equal / zero */

loc_00302D7D: ;
    ecx = edx;
    goto loc_00302DAA;

loc_00302D81: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x75) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x75 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00302D8E; /* jne: not equal / not zero */

loc_00302D86: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00302D8E; /* je: equal / zero */

loc_00302D8A: ;
    ecx = edx;
    goto loc_00302DAA;

loc_00302D8E: ;
    eax = MEM32(ebp + 0x74);
    SET_LO8(ecx, MEM8(eax + 4));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00302DA7; /* je: equal / zero */

loc_00302D98: ;
    eax = ZX8(MEM8(eax + 5));
    ecx = MEM32(eax * 4 + 0x6C8708);
    ecx = MEM32(ecx);
    goto loc_00302DAA;

loc_00302DA7: ;
    ecx = MEM32(ebp + 0x68);

loc_00302DAA: ;
    eax = esi;
    eax = eax & 0xC000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x4000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x4000 (32-bit) */
    MEM32(0x7FDBE0) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_00302DD3; /* je: equal / zero */

loc_00302DC2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x8000 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00302DDB; /* jne: not equal / not zero */

loc_00302DC9: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00302FA1; /* je: equal / zero */

loc_00302DD1: ;
    goto loc_00302DDB;

loc_00302DD3: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00302FA1; /* jne: not equal / not zero */

loc_00302DDB: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, 0x10000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00302DEF; /* je: equal / zero */

loc_00302DE3: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x7FDBE0) = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_00302DEF: ;
    esi = esi & 0x3800;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x2000 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00302F3C; /* jg: greater (signed >) */

loc_00302E01: ;
    if (CMP_EQ(_fa, _fb)) goto loc_00302E67; /* je: equal / zero */

loc_00302E03: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00302E33; /* je: equal / zero */

loc_00302E07: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x1000 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00302FA1; /* jne: not equal / not zero */

loc_00302E13: ;
    edx = MEM32(0x847024);
    eax = MEM32(edx + 0x40);
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, ebp);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    eax = 1;
    PUSH32(esp, 0x00302E2Eu); RECOMP_ABI_CALL(0x00024FA0u, sub_00024FA0); /* call 0x00024FA0 */

loc_00302E2E: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_00302E33: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    ecx = MEM32(0x847024);
    edx = MEM32(ecx + 0x40);
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, ebp);
    if (CMP_EQ(_fa, _fb)) goto loc_00302E54; /* je: equal / zero */

loc_00302E46: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x00302E4Fu); RECOMP_ABI_CALL(0x00024FA0u, sub_00024FA0); /* call 0x00024FA0 */

loc_00302E4F: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_00302E54: ;
    eax = MEM32(0x7FDBF4);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x00302E62u); RECOMP_ABI_CALL(0x00024FA0u, sub_00024FA0); /* call 0x00024FA0 */

loc_00302E62: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_00302E67: ;
    _fa = (uint32_t)(MEM32(0x84A144)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x84A144), 1 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00302FA1; /* jg: greater (signed >) */

loc_00302E74: ;
    esi = MEM32(ebp + 0x298);
    esi = esi & 0x1F;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xF (32-bit) */
    MEM32(esp + 0xC) = esi;
    if (CMP_NE(_fa, _fb)) goto loc_00302EB0; /* jne: not equal / not zero */

loc_00302E86: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + 0x1D4);
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x649A98); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00302EB0; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x649A98)) */

loc_00302E9A: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x9C);
    edi = 2;
    PUSH32(esp, 0x00302EAAu); RECOMP_ABI_CALL(0x000213E0u, sub_000213E0); /* call 0x000213E0 */

loc_00302EAA: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    goto loc_00302EEE;

loc_00302EB0: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + 0x228)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x648E60); /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((0) ? 0x80u : 0u) | (((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_00302EE5; /* jnp: not parity */

loc_00302EC5: ;
    _fca = xmm0.f[0]; _fcb = MEMF(ebp + 0x7C); /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00302EE5; /* jb: below (unsigned <) (xmm0.f[0] vs MEMF(ebp + 0x7C)) */

loc_00302ECB: ;
    eax = ebp;
    ecx = 0x10;
    PUSH32(esp, 0x00302ED7u); RECOMP_ABI_CALL(0x00021630u, sub_00021630); /* call 0x00021630 */

loc_00302ED7: ;
    MEM32(esp + 0xC) = 0x10;
    esi = MEM32(esp + 0xC);
    goto loc_00302EEE;

loc_00302EE5: ;
    eax = ebp;
    ecx = esi;
    PUSH32(esp, 0x00302EEEu); RECOMP_ABI_CALL(0x00021630u, sub_00021630); /* call 0x00021630 */

loc_00302EEE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00302F17; /* jne: not equal / not zero */

loc_00302EF2: ;
    SET_LO8(eax, MEM8(0x846FF8));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00302F12; /* je: equal / zero */

loc_00302EFB: ;
    esi = MEM32(0x847024);
    PUSH32(esp, 0x63837C);
    PUSH32(esp, 0x00302F0Bu); RECOMP_ABI_CALL(0x00018B30u, sub_00018B30); /* call 0x00018B30 */

loc_00302F0B: ;
    esi = MEM32(esp + 0x10);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00302F12: ;
    eax = 0xBA0;

loc_00302F17: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x10 (32-bit) */
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    if (CMP_NE(_fa, _fb)) goto loc_00302F8E; /* jne: not equal / not zero */

loc_00302F23: ;
    ecx = MEM32(0x847024);
    edx = MEM32(ecx + 0x40);
    PUSH32(esp, edx);
    eax = 2;
    PUSH32(esp, 0x00302F37u); RECOMP_ABI_CALL(0x00024FA0u, sub_00024FA0); /* call 0x00024FA0 */

loc_00302F37: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_00302F3C: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x3000 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00302F7A; /* je: equal / zero */

loc_00302F44: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3800) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x3800 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00302FA1; /* jne: not equal / not zero */

loc_00302F4C: ;
    edx = MEM32(0x847024);
    esi = MEM32(edx + 0x40);
    eax = MEM32(ebp + 0x188);
    ecx = esi;
    PUSH32(esp, 0x00302F62u); RECOMP_ABI_CALL(0x000255F0u, sub_000255F0); /* call 0x000255F0 */

loc_00302F62: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00302FA1; /* je: equal / zero */

loc_00302F66: ;
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, ebp);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x00302F75u); RECOMP_ABI_CALL(0x00024FA0u, sub_00024FA0); /* call 0x00024FA0 */

loc_00302F75: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_00302F7A: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, ebp);
    if (CMP_EQ(_fa, _fb)) goto loc_00302F87; /* je: equal / zero */

loc_00302F84: ;
    PUSH32(esp, ebx);
    goto loc_00302F8E;

loc_00302F87: ;
    edx = MEM32(0x7FDBF4);
    PUSH32(esp, edx);

loc_00302F8E: ;
    eax = MEM32(0x847024);
    ecx = MEM32(eax + 0x40);
    PUSH32(esp, ecx);
    eax = 2;
    PUSH32(esp, 0x00302FA1u); RECOMP_ABI_CALL(0x00024FA0u, sub_00024FA0); /* call 0x00024FA0 */

loc_00302FA1: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_00302FA4: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00302FB0
 * Original: 0x00302FB0 - 0x00302FDF (47 bytes, 13 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00302FB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00302FB0: ;
    eax = MEM32(0x7FDBF4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00302FDE; /* jae: above or equal (unsigned >=) */

loc_00302FBA: ;
    SET_LO8(ecx, MEM8(eax + 0x7FDBDC));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00302FDE; /* je: equal / zero */

loc_00302FC4: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00302FCEu); RECOMP_ABI_CALL(0x00302D30u, sub_00302D30); /* call 0x00302D30 */

loc_00302FCE: ;
    ecx = MEM32(0x7FDBF4);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(ecx + 0x7FDBDC) = 0;

loc_00302FDE: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00302FE0
 * Original: 0x00302FE0 - 0x00303098 (184 bytes, 58 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00302FE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00302FE0: ;
    SET_LO8(eax, MEM8(0x7819D5));
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00303094; /* jne: not equal / not zero */

loc_00302FF0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(0x7FDBE0);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00303093; /* je: equal / zero */

loc_00302FFF: ;
    eax = MEM32(0x7FDBF8);
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = eax;
    PUSH32(esp, esi);
    edx = eax;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((0xB) & 31u));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    esi = ebx;
    esi = esi & 0x7FF;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = edx & 0x7FF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx & 0x7FF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((0x16) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    eax = eax & 0x7FF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, edi);
    MEM32(0x7FDBE0) = ebx;
    MEM32(esp + 0xC) = esi;
    MEM32(esp + 0x10) = edx;
    MEM32(esp + 0x14) = ecx;
    MEM32(esp + 0x18) = eax;
    if ((_fa == 0)) goto loc_00303049; /* je: equal / zero */

loc_00303042: ;
    edi = 4;
    goto loc_0030305E;

loc_00303049: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00303054; /* je: equal / zero */

loc_0030304D: ;
    edi = 3;
    goto loc_0030305E;

loc_00303054: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi = eax;

loc_0030305E: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00303064u); RECOMP_ABI_CALL(0x000213E0u, sub_000213E0); /* call 0x000213E0 */

loc_00303064: ;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + eax * 4 + 0x10);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, edi);
    POP32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_00303093; /* je: equal / zero */

loc_00303073: ;
    ecx = MEM32(esp + 0x18);
    ebx = ebx & 0xFFFEF800u;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax | ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, ecx);
    MEM32(0x7FDBE0) = ebx;
    MEM32(0x7FDBF8) = eax;
    PUSH32(esp, 0x00303090u); RECOMP_ABI_CALL(0x00302D30u, sub_00302D30); /* call 0x00302D30 */

loc_00303090: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00303093: ;
    POP32(esp, ebx);

loc_00303094: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_003030A0
 * Original: 0x003030A0 - 0x003030B0 (16 bytes, 12 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003030A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003030A0: ;
    g_seh_ebp = ebp; sub_000215C0(); return; /* tail jmp 0x000215C0 */

    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_003030B0
 * Original: 0x003030B0 - 0x003030BC (12 bytes, 5 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003030B0(void)
{

loc_003030B0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, 0x003030BAu); RECOMP_ABI_CALL(0x00021560u, sub_00021560); /* call 0x00021560 */

loc_003030BA: ;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_003030C0
 * Original: 0x003030C0 - 0x0030426A (4522 bytes, 1136 insns)
 * Category: game_io
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003030C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003030C0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0xF4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xF4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = eax;
    SET_LO8(eax, MEM8(0x863D11));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_0030310F; /* je: equal / zero */

loc_003030DA: ;
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 0x568);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0030310F; /* je: equal / zero */

loc_003030E7: ;
    _fa = (uint32_t)(MEM32(eax + 0xBC)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0xBC), 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0030310F; /* jne: not equal / not zero */

loc_003030F0: ;
    eax = MEM32(eax + 0x368);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00303101; /* jne: not equal / not zero */

loc_003030FA: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00303101: ;
    ecx = (uint32_t)(int32_t)SMEM8(eax + 0xC);
    MEM32(ebp + 0x2C) = 1;
    MEM32(ebp + 0x20) = ecx;

loc_0030310F: ;
    ecx = MEM32(0x84A5FC);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_00303120: ;
    _fa = (uint32_t)(MEM8(ecx + eax)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + eax), 4 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00303127; /* jne: not equal / not zero */

loc_00303126: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00303127: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x80 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00303120; /* jl: less (signed <) */

loc_0030312F: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xA (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00303158; /* jl: less (signed <) */

loc_00303134: ;
    edx = esp + 0x18;
    PUSH32(esp, edx);
    esi = 4;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00303143u); RECOMP_ABI_CALL(0x002F2DA0u, sub_002F2DA0); /* call 0x002F2DA0 */

loc_00303143: ;
    PUSH32(esp, 1);
    edi = eax;
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    MEM32(esp + 0x2C) = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00303153u); RECOMP_ABI_CALL(0x002F50C0u, sub_002F50C0); /* call 0x002F50C0 */

loc_00303153: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_003031B2;

loc_00303158: ;
    ecx = 0x10;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00303162u); RECOMP_ABI_CALL(0x002F2CE0u, sub_002F2CE0); /* call 0x002F2CE0 */

loc_00303162: ;
    edx = MEM32(0x84A5F8);
    ecx = eax;
    MEM32(esp + 0x1C) = eax;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = 0x964FDA6Du;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((0xA) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    eax = edx;
    eax = eax >> 0x1F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x80 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_003031AE; /* jb: below (unsigned <) */

loc_0030318A: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_003031AE; /* jle: less or equal (signed <=) */

loc_0030318E: ;
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    esi = 4;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0030319Du); RECOMP_ABI_CALL(0x002F2DA0u, sub_002F2DA0); /* call 0x002F2DA0 */

loc_0030319D: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    MEM32(esp + 0x2C) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003031ABu); RECOMP_ABI_CALL(0x002F50C0u, sub_002F50C0); /* call 0x002F50C0 */

loc_003031AB: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003031AE: ;
    edi = MEM32(esp + 0x1C);

loc_003031B2: ;
    eax = MEM32(edi + 0x238);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003031D5; /* je: equal / zero */

loc_003031BC: ;
    edx = MEM32(ebp + 8);
    ecx = MEM32(edx + 0x238);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00303200; /* je: equal / zero */

loc_003031C9: ;
    edx = MEM32(ecx);
    MEM32(eax) = edx;
    SET_LO8(ecx, MEM8(ecx + 4));
    MEM8(eax + 4) = LO8(ecx);
    goto loc_00303200;

loc_003031D5: ;
    PUSH32(esp, 8);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003031DCu); RECOMP_ABI_CALL(0x00137530u, sub_00137530); /* call 0x00137530 */

loc_003031DC: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003031F8; /* je: equal / zero */

loc_003031E3: ;
    edx = MEM32(ebp + 8);
    ecx = MEM32(edx + 0x238);
    edx = MEM32(ecx);
    MEM32(eax) = edx;
    SET_LO8(ecx, MEM8(ecx + 4));
    MEM8(eax + 4) = LO8(ecx);
    goto loc_003031FA;

loc_003031F8: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_003031FA: ;
    MEM32(edi + 0x238) = eax;

loc_00303200: ;
    SET_LO16(eax, MEM16(edi + 0x60));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0xFFFF) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0xFFFF (16-bit) */
    MEM32(edi + 0x5DC) = 0;
    MEM8(edi + 0x24A) = 0xB;
    MEM32(edi + 0x64) = 4;
    if (CMP_EQ(_fa, _fb)) goto loc_00303230; /* je: equal / zero */

loc_00303222: ;
    edx = ZX16(LO16(eax));
    eax = MEM32(0x84A5FC);
    MEM8(edx + eax) = 4;
    goto loc_00303256;

loc_00303230: ;
    eax = MEM32(0x84A5F8);
    ecx = edi;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = 0x964FDA6Du;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((0xA) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ecx = edx;
    ecx = ecx >> 0x1F;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(0x84A5FC);
    MEM8(ecx + edx) = 4;

loc_00303256: ;
    eax = MEM32(ebp + 8);
    MEM16(edi + 0x3AE) = 1;
    MEM32(edi + 0x70) = 0xFFFF;
    SET_LO16(ecx, MEM16(eax + 0x174));
    MEM16(edi + 0x174) = LO16(ecx);
    SET_LO16(edx, MEM16(0x862CCE));
    MEM16(edi + 0xCC) = LO16(edx);
    MEM16(0x862CCE) = MEM16(0x862CCE) + 1;
    _fa = (uint32_t)(MEM16(0x862CCE)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003032A9; /* je: equal / zero */

loc_00303290: ;
    eax = MEM32(ebx);
    esi = edi + 0x78;
    MEM32(esi) = eax;
    ecx = MEM32(ebx + 4);
    MEM32(esi + 4) = ecx;
    edx = MEM32(ebx + 8);
    MEM32(esp + 0x28) = esi;
    MEM32(esi + 8) = edx;
    goto loc_003032BD;

loc_003032A9: ;
    eax = MEM32(ebp + 0x20);
    ecx = MEM32(ebp + 8);
    ebx = edi + 0x78;
    MEM32(esp + 0x28) = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003032BBu); RECOMP_ABI_CALL(0x00304860u, sub_00304860); /* call 0x00304860 */

loc_003032BB: ;
    esi = ebx;

loc_003032BD: ;
    xmm0 = XMM_SCALAR(MEMF(edi + 0x7C)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(ebp + 0x38); /* addss */
    xmm5 = XMM_ZERO(); /* xorps self = zero */
    MEMF(edi + 0x7C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + 0x3C)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm5.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((0) ? 0x80u : 0u) | (((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_0030341C; /* jnp: not parity */

loc_003032E1: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + 0xC)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x648E18); /* mulss */
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0);
    eax = esp + 0x3C;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00303303u); RECOMP_ABI_CALL(0x003E46C0u, sub_003E46C0); /* call 0x003E46C0 */

loc_00303303: ;
    xmm5 = XMM_SCALAR(MEMF(esp + 0x44)); /* movss */
    xmm3 = XMM_ZERO(); /* xorps self = zero */
    xmm6 = XMM_SCALAR(MEMF(esp + 0x40)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x48)); /* movss */
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] * MEMF(ebp + 0x3C); /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    xmm4 = xmm5; /* movaps */
    xmm4.f[0] = xmm4.f[0] * xmm3.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] - xmm4.f[0]; /* subss */
    xmm0 = xmm6; /* movaps */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm0.f[0]; /* addss */
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x3C)); /* movss */
    xmm7 = xmm0; /* movaps */
    xmm7.f[0] = xmm7.f[0] * xmm3.f[0]; /* mulss */
    MEMF(esp + 0x38) = xmm7.f[0]; /* movss */
    xmm3 = xmm5; /* movaps */
    xmm3.f[0] = xmm3.f[0] * MEMF(ebp + 0x3C); /* mulss */
    MEMF(esp + 0x24) = xmm3.f[0]; /* movss */
    xmm3 = xmm1; /* movaps */
    xmm3.f[0] = xmm3.f[0] - xmm7.f[0]; /* subss */
    xmm7 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    xmm7.f[0] = xmm7.f[0] + xmm3.f[0]; /* addss */
    MEMF(esp + 0x24) = xmm7.f[0]; /* movss */
    xmm7 = XMM_SCALAR(MEMF(ebp + 0x3C)); /* movss */
    xmm3 = xmm6; /* movaps */
    xmm3.f[0] = xmm3.f[0] * xmm7.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] - xmm3.f[0]; /* subss */
    xmm1.f[0] = xmm1.f[0] + MEMF(esp + 0x38); /* addss */
    xmm3 = xmm0; /* movaps */
    xmm3.f[0] = xmm3.f[0] * xmm7.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + MEMF(esp + 0x2C); /* addss */
    MEMF(esp + 0x38) = xmm1.f[0]; /* movss */
    xmm3.f[0] = xmm3.f[0] + xmm4.f[0]; /* addss */
    xmm4 = xmm0; /* movaps */
    xmm7 = xmm6; /* movaps */
    xmm7.f[0] = xmm7.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x48)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm2.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] * xmm3.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] + xmm7.f[0]; /* addss */
    xmm4.f[0] = xmm4.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm7 = xmm5; /* movaps */
    xmm7.f[0] = xmm7.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x48)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(esp + 0x38); /* mulss */
    xmm5.f[0] = xmm5.f[0] * xmm3.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm5.f[0]; /* addss */
    xmm5 = XMM_ZERO(); /* xorps self = zero */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(esi)); /* movss */
    xmm6.f[0] = xmm6.f[0] * xmm2.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] - xmm7.f[0]; /* subss */
    xmm0.f[0] = xmm0.f[0] - xmm6.f[0]; /* subss */
    xmm0.f[0] = xmm0.f[0] + MEMF(edi + 0x80); /* addss */
    xmm1.f[0] = xmm1.f[0] + xmm4.f[0]; /* addss */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esi) = xmm1.f[0]; /* movss */
    MEMF(edi + 0x80) = xmm0.f[0]; /* movss */

loc_0030341C: ;
    eax = MEM32(esi);
    xmm1 = XMM_SCALAR(MEMF(ebp + 0x24)); /* movss */
    MEM32(edi + 0x84) = eax;
    ecx = MEM32(esi + 4);
    _fca = xmm1.f[0]; _fcb = xmm5.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((0) ? 0x80u : 0u) | (((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    MEM32(edi + 0x88) = ecx;
    edx = MEM32(esi + 8);
    MEM32(edi + 0x8C) = edx;
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_0030345B; /* jnp: not parity */

loc_00303444: ;
    eax = MEM32(ebp + 8);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x7C)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    _fca = xmm0.f[0]; _fcb = MEMF(edi + 0x7C); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0030345B; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(edi + 0x7C)) */

loc_00303456: ;
    MEMF(edi + 0x7C) = xmm0.f[0]; /* movss */

loc_0030345B: ;
    ebx = MEM32(0x84A5F8);
    ecx = edi;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - ebx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = 0x964FDA6Du;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    eax = MEM32(ebp + 0x20);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((0xA) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ecx = edx;
    ecx = ecx >> 0x1F;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO8(edx, LO8(edx) | 0xFF);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* sub source, before the write */
    SET_LO8(edx, LO8(edx) - LO8(ecx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    MEM16(edi + 0x274) = 0x6E;
    MEM8(edi + 0x10B) = LO8(edx);
    if (CMP_NE(_fa, _fb)) goto loc_003034A7; /* jne: not equal / not zero */

loc_00303494: ;
    MEM8(edi + 0xA1) = 2;
    MEM8(edi + 0x20B) = 1;
    goto loc_003035EF;

loc_003034A7: ;
    eax = MEM32(0x84A144);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM8(edi + 0xA1) = 5;
    if (CMP_L(_fas, _fbs)) goto loc_003034EF; /* jl: less (signed <) */

loc_003034B9: ;
    ebx = edi + 0x550;
    /* nop */

loc_003034C0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x1BD);
    PUSH32(esp, 0x5F3FA0);
    PUSH32(esp, 4);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003034D3u); RECOMP_ABI_CALL(0x002AF0E0u, sub_002AF0E0); /* call 0x002AF0E0 */

loc_003034D3: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003034E0; /* je: equal / zero */

loc_003034DA: ;
    MEM32(eax) = 0;

loc_003034E0: ;
    MEM32(ebx) = eax;
    eax = MEM32(0x84A144);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_003034C0; /* jle: less or equal (signed <=) */

loc_003034EF: ;
    eax = MEM32(edi + esi * 4 + 0x54C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00303501; /* je: equal / zero */

loc_003034FA: ;
    MEM8(edi + 0x54A) = 1;

loc_00303501: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00303506u); RECOMP_ABI_CALL(0x00123FA0u, sub_00123FA0); /* call 0x00123FA0 */

loc_00303506: ;
    MEM32(edi + 0x560) = eax;
    eax = MEM32(ebp + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x28) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x28 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_003035D2; /* ja: above (unsigned >) */

loc_00303518: ;
    eax = ZX8(MEM8(eax + 0x3042B4));
    { uint32_t _jt = MEM32(eax * 4 + 0x30426C); /* switch: 18 entries, 18 targets */
    if (_jt == 0x00303526u) goto loc_00303526;
    if (_jt == 0x00303530u) goto loc_00303530;
    if (_jt == 0x0030353Au) goto loc_0030353A;
    if (_jt == 0x00303544u) goto loc_00303544;
    if (_jt == 0x0030354Bu) goto loc_0030354B;
    if (_jt == 0x00303552u) goto loc_00303552;
    if (_jt == 0x00303559u) goto loc_00303559;
    if (_jt == 0x00303560u) goto loc_00303560;
    if (_jt == 0x0030357Eu) goto loc_0030357E;
    if (_jt == 0x0030359Au) goto loc_0030359A;
    if (_jt == 0x003035A1u) goto loc_003035A1;
    if (_jt == 0x003035A8u) goto loc_003035A8;
    if (_jt == 0x003035AFu) goto loc_003035AF;
    if (_jt == 0x003035B6u) goto loc_003035B6;
    if (_jt == 0x003035BDu) goto loc_003035BD;
    if (_jt == 0x003035C4u) goto loc_003035C4;
    if (_jt == 0x003035CBu) goto loc_003035CB;
    if (_jt == 0x003035D2u) goto loc_003035D2;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00303526: ;
    esi = 0xEE;
    goto loc_003035D7;

loc_00303530: ;
    esi = 0xC2;
    goto loc_003035D7;

loc_0030353A: ;
    esi = 0xEC;
    goto loc_003035D7;

loc_00303544: ;
    esi = 0x2A;
    goto loc_00303565;

loc_0030354B: ;
    esi = 0xBC;
    goto loc_00303565;

loc_00303552: ;
    esi = 0xEF;
    goto loc_00303565;

loc_00303559: ;
    esi = 0xF0;
    goto loc_00303565;

loc_00303560: ;
    esi = 0x22;

loc_00303565: ;
    xmm0 = XMM_SCALAR(MEMF(0x649298)); /* movss */
    MEMF(edi + 0x1C0) = xmm0.f[0]; /* movss */
    MEM8(edi + 0x20B) = 1;
    goto loc_003035D7;

loc_0030357E: ;
    esi = 0x6D;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00303588u); RECOMP_ABI_CALL(0x003E1D70u, sub_003E1D70); /* call 0x003E1D70 */

loc_00303588: ;
    xmm0.f[0] = xmm0.f[0] * MEMF(0x648F60); /* mulss */
    MEMF(edi + 0x1CC) = xmm0.f[0]; /* movss */
    goto loc_003035D7;

loc_0030359A: ;
    esi = 0x6B;
    goto loc_003035D7;

loc_003035A1: ;
    esi = 0x39;
    goto loc_003035D7;

loc_003035A8: ;
    esi = 0x51;
    goto loc_003035D7;

loc_003035AF: ;
    esi = 0x93;
    goto loc_003035D7;

loc_003035B6: ;
    esi = 0x111;
    goto loc_003035D7;

loc_003035BD: ;
    esi = 0xED;
    goto loc_003035D7;

loc_003035C4: ;
    esi = 0xF6;
    goto loc_003035D7;

loc_003035CB: ;
    esi = 0xF7;
    goto loc_003035D7;

loc_003035D2: ;
    esi = 0x50;

loc_003035D7: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003035E9u); RECOMP_ABI_CALL(0x002B37D0u, sub_002B37D0); /* call 0x002B37D0 */

loc_003035E9: ;
    xmm5 = XMM_ZERO(); /* xorps self = zero */
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003035EF: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + 0xC)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x648F1C); /* mulss */
    SET_LO8(eax, MEM8(0x7819D5));
    ecx = (uint32_t)recomp_cvt_si32((double)xmm0.f[0], g_mxcsr, 1); /* cvttss2si */
    ebx = 0xFFFFC000u;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - ecx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    ecx = MEM32(ebp + 0x20);
    if (CMP_EQ(_fa, _fb)) goto loc_00303750; /* je: equal / zero */

loc_00303617: ;
    _fa = (uint32_t)(MEM8(ebp + 0x2C)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + 0x2C), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00303750; /* jne: not equal / not zero */

loc_00303621: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 5 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00303750; /* je: equal / zero */

loc_0030362A: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(9) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 9 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00303750; /* je: equal / zero */

loc_00303633: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xA (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00303750; /* je: equal / zero */

loc_0030363C: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 4 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00303750; /* je: equal / zero */

loc_00303645: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x26) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x26 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00303750; /* je: equal / zero */

loc_0030364E: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x25) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x25 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00303750; /* je: equal / zero */

loc_00303657: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x13) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x13 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00303750; /* je: equal / zero */

loc_00303660: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x17) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x17 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00303750; /* je: equal / zero */

loc_00303669: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x18) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x18 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00303750; /* je: equal / zero */

loc_00303672: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x19) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x19 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00303750; /* je: equal / zero */

loc_0030367B: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x24) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x24 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00303750; /* je: equal / zero */

loc_00303684: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1A) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x1A (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00303750; /* je: equal / zero */

loc_0030368D: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1B) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x1B (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00303750; /* je: equal / zero */

loc_00303696: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x1C (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00303750; /* je: equal / zero */

loc_0030369F: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1D) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x1D (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00303750; /* je: equal / zero */

loc_003036A8: ;
    edx = MEM32(ebp + 0x14);
    xmm1 = XMM_SCALAR(MEMF(ebp + 0x10)); /* movss */
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003036B6u); RECOMP_ABI_CALL(0x002EBA00u, sub_002EBA00); /* call 0x002EBA00 */

loc_003036B6: ;
    PUSH32(esp, 0x14);
    PUSH32(esp, 0xFF);
    ecx = esp + 0x2C;
    MEM32(esp + 0x2C) = eax;
    eax = MEM32(esp + 0x2D);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003036D0u); RECOMP_ABI_CALL(0x002F11E0u, sub_002F11E0); /* call 0x002F11E0 */

loc_003036D0: ;
    esi = MEM32(0x84A5F8);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xFF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xFF (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00303744; /* je: equal / zero */

loc_003036DD: ;
    ecx = MEM32(ebp + 8);
    edx = ZX8(LO8(eax));
    edx = (uint32_t)((int32_t)edx * (int32_t)0x6D0);
    xmm0 = XMM_SCALAR(MEMF(edx + esi + 0x7C)); /* movss */
    eax = edx + esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003036F7u); RECOMP_ABI_CALL(0x002EBA60u, sub_002EBA60); /* call 0x002EBA60 */

loc_003036F7: ;
    eax = MEM32(ebp + 0x20);
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    ebx = MEM32(esp + 0x20);
    if (CMP_EQ(_fa, _fb)) goto loc_0030371B; /* je: equal / zero */

loc_00303707: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x14) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x14 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0030371B; /* je: equal / zero */

loc_0030370C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x15) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x15 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0030371B; /* je: equal / zero */

loc_00303711: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x16) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x16 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0030371B; /* je: equal / zero */

loc_00303716: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x12) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x12 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00303723; /* jne: not equal / not zero */

loc_0030371B: ;
    xmm0.f[0] = xmm0.f[0] - MEMF(0x648E5C); /* subss */

loc_00303723: ;
    xmm0.f[0] = xmm0.f[0] - MEMF(ecx + 0x7C); /* subss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    xmm1.f[0] = xmm1.f[0] / MEMF(ebp + 0x10); /* divss */
    xmm0.f[0] = xmm0.f[0] / xmm1.f[0]; /* divss */
    MEMF(ebp + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(ebp + 0x18) = xmm0.f[0]; /* movss */

loc_00303744: ;
    xmm5 = XMM_ZERO(); /* xorps self = zero */
    edi = MEM32(esp + 0x1C);
    ecx = MEM32(ebp + 0x20);
    goto loc_00303756;

loc_00303750: ;
    esi = MEM32(0x84A5F8);

loc_00303756: ;
    SET_LO8(eax, MEM8(ebp + 0x2C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003037D1; /* je: equal / zero */

loc_0030375D: ;
    eax = MEM32(esp + 0x28);
    xmm0 = XMM_SCALAR(MEMF(esi + 0x78)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax); /* subss */
    xmm1 = XMM_SCALAR(MEMF(edi + 0x80)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(esi + 0x80); /* subss */
    _fca = xmm0.f[0]; _fcb = xmm5.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((0) ? 0x80u : 0u) | (((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    MEMF(esp + 0x18) = xmm1.f[0]; /* movss */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00303796; /* jp: parity */

loc_00303789: ;
    _fca = xmm1.f[0]; _fcb = xmm5.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((0) ? 0x80u : 0u) | (((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00303796; /* jp: parity */

loc_00303792: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_003037C8;

loc_00303796: ;
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    xmm5.f[0] = xmm5.f[0] - xmm0.f[0]; /* subss */
    MEMF(esp) = xmm5.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003037AAu); RECOMP_ABI_CALL(0x003E3CA0u, sub_003E3CA0); /* call 0x003E3CA0 */

loc_003037AA: ;
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x649434)); /* fmul dword ptr [0x649434] */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003037C2u); RECOMP_ABI_CALL(0x00471288u, sub_00471288); /* call 0x00471288 */

loc_003037C2: ;
    xmm5 = XMM_ZERO(); /* xorps self = zero */
    ecx = MEM32(ebp + 0x20);

loc_003037C8: ;
    ebx = eax + 0x4000;
    SET_LO8(eax, MEM8(ebp + 0x2C));

loc_003037D1: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00303812; /* je: equal / zero */

loc_003037D5: ;
    edx = MEM32(esp + 0x28);
    fp_push(MEMF(edx)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi + 0x78)); /* fsub dword ptr [esi + 0x78] */
    fp_push(MEMF(edi + 0x80)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi + 0x80)); /* fsub dword ptr [esi + 0x80] */
    fp_push(MEMF(esi + 0x7C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x648E38)); /* fadd dword ptr [0x648e38] */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(edi + 0x7C)); /* fsub dword ptr [edi + 0x7c] */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 2) & 7]); /* fmul st(2) */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 4) & 7]); /* fmul st(4) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    g_fp_stack[(g_fp_top + 3) & 7] = fp_top(); fp_pop(); /* fstp st(3) */
    { double _t = fp_top(); fp_top() = g_fp_stack[(g_fp_top + 2) & 7]; g_fp_stack[(g_fp_top + 2) & 7] = _t; } /* fxch st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(ebp + 0x10)); /* fdiv dword ptr [ebp + 0x10] */
    g_fp_stack[(g_fp_top + 2) & 7] = RECOMP_FP_PC(g_fp_stack[(g_fp_top + 2) & 7] / fp_top()); fp_pop(); /* fdivp st(2) */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEMF(ebp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */

loc_00303812: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 8 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0030382D; /* je: equal / zero */

loc_00303816: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0030381Bu); RECOMP_ABI_CALL(0x003E2480u, sub_003E2480); /* call 0x003E2480 */

loc_0030381B: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x1200;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    ecx = MEM32(ebp + 0x20);
    ebx = ebx + edx + -2304;

loc_0030382D: ;
    _fa = (uint32_t)(MEM8(ebp + 0x2C)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + 0x2C), 0x10 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003039C8; /* je: equal / zero */

loc_00303837: ;
    fp_push(MEMD(0x648F30)); /* fld double */
    edx = MEM32(ebp + 8);
    if (recomp_fp_trig_in_range(fp_top())) fp_top() = recomp_x87_cos(fp_top()); /* fcos */
    eax = ZX8(MEM8(edx + 0x42E));
    edx = MEM32(esp + 0x28);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    eax = (uint32_t)((int32_t)eax * (int32_t)0x6D0);
    fp_push(MEMF(eax + esi + 0x110)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x648D18)); /* fmul dword ptr [0x648d18] */
    ecx = ZX16(MEM16(eax + esi + 0x170));
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x28) = ecx;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x648D10)); /* fmul dword ptr [0x648d10] */
    xmm4 = XMM_SCALAR(MEMF(eax + 0x80)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(eax + 0x78)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0xD0)); /* movss */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x20)); /* fmul dword ptr [esp + 0x20] */
    fp_push((double)SMEM32(esp + 0x28)); /* fild */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x648D18); /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(eax + 0x7C); /* addss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x648E5C); /* addss */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x648F28)); /* fmul dword ptr [0x648f28] */
    xmm0.f[0] = xmm0.f[0] - MEMF(edi + 0x7C); /* subss */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    if (recomp_fp_trig_in_range(fp_top())) fp_top() = recomp_x87_cos(fp_top()); /* fcos */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 2) & 7]); /* fmul st(2) */
    MEMF(esp + 0x38) = (float)fp_top(); fp_pop(); /* fstp */
    xmm3.f[0] = xmm3.f[0] + MEMF(esp + 0x38); /* addss */
    xmm3.f[0] = xmm3.f[0] - MEMF(edx); /* subss */
    if (recomp_fp_trig_in_range(fp_top())) fp_top() = recomp_x87_sin(fp_top()); /* fsin */
    MEMF(esp + 0x28) = xmm3.f[0]; /* movss */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    fp_top() = -fp_top(); /* fchs */
    MEMF(esp + 0x40) = (float)fp_top(); fp_pop(); /* fstp */
    xmm4.f[0] = xmm4.f[0] + MEMF(esp + 0x40); /* addss */
    xmm4.f[0] = xmm4.f[0] - MEMF(edi + 0x80); /* subss */
    fp_pop(); /* fstp st(0) */
    MEMF(esp + 0x34) = xmm4.f[0]; /* movss */
    fp_push(MEMF(esp + 0x34)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x34)); /* fmul dword ptr [esp + 0x34] */
    fp_push(MEMF(esp + 0x28)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x28)); /* fmul dword ptr [esp + 0x28] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(esp) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00303914u); RECOMP_ABI_CALL(0x003E3CA0u, sub_003E3CA0); /* call 0x003E3CA0 */

loc_00303914: ;
    xmm0.f[0] = xmm0.f[0] * MEMF(0x649434); /* mulss */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fca = xmm3.f[0]; _fcb = xmm5.f[0]; /* ucomiss */
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((0) ? 0x80u : 0u) | (((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    xmm0 = xmm5; /* movaps */
    xmm0.f[0] = xmm0.f[0] - xmm4.f[0]; /* subss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00303948; /* jp: parity */

loc_0030393B: ;
    _fca = xmm0.f[0]; _fcb = xmm5.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((0) ? 0x80u : 0u) | (((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00303948; /* jp: parity */

loc_00303944: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00303974;

loc_00303948: ;
    eax = MEM32(esp + 0x20);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    xmm5.f[0] = xmm5.f[0] - xmm3.f[0]; /* subss */
    MEMF(esp) = xmm5.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0030395Cu); RECOMP_ABI_CALL(0x003E3CA0u, sub_003E3CA0); /* call 0x003E3CA0 */

loc_0030395C: ;
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    fp_push(MEMF(esp + 0x28)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x649434)); /* fmul dword ptr [0x649434] */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00303974u); RECOMP_ABI_CALL(0x00471288u, sub_00471288); /* call 0x00471288 */

loc_00303974: ;
    fp_push(MEMF(ebp + 0x10)); /* fld float */
    ebx = eax + 0x4000;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x648D10)); /* fmul dword ptr [0x648d10] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x18)); /* fmul dword ptr [esp + 0x18] */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00303994u); RECOMP_ABI_CALL(0x00471288u, sub_00471288); /* call 0x00471288 */

loc_00303994: ;
    ecx = ZX16(LO16(eax));
    MEM32(esp + 0x18) = ecx;
    ecx = MEM32(ebp + 0x20);
    fp_push((double)SMEM32(esp + 0x18)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x648F28)); /* fmul dword ptr [0x648f28] */
    MEMF(esp + 0x18) = (float)fp_top(); /* fst */
    if (recomp_fp_trig_in_range(fp_top())) fp_top() = recomp_x87_cos(fp_top()); /* fcos */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x20)); /* fmul dword ptr [esp + 0x20] */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    if (recomp_fp_trig_in_range(fp_top())) fp_top() = recomp_x87_sin(fp_top()); /* fsin */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x20)); /* fmul dword ptr [esp + 0x20] */
    fp_top() = -fp_top(); /* fchs */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEMF(ebp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = -fp_top(); /* fchs */
    MEMF(ebp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */

loc_003039C8: ;
    SET_LO8(eax, MEM8(0x863D11));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00303AE1; /* je: equal / zero */

loc_003039D5: ;
    edx = MEM32(ebp + 8);
    eax = MEM32(edx + 0x568);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00303AE1; /* je: equal / zero */

loc_003039E6: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x17) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x17 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00303AE1; /* je: equal / zero */

loc_003039EF: ;
    edx = MEM32(eax + 0xBC);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00303C1F; /* jne: not equal / not zero */

loc_003039FD: ;
    eax = MEM32(0x84A19C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00303A0B; /* jne: not equal / not zero */

loc_00303A06: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00303A0Bu); RECOMP_ABI_CALL(0x002AED70u, sub_002AED70); /* call 0x002AED70 */

loc_00303A0B: ;
    edx = MEM32(0x7FA494);
    ecx = MEM32(0x7FA4B4);
    esi = MEM32(0x84A190);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    MEM32(0x7FA494) = edx;
    MEM32(0x7FA4B4) = ecx;
    MEM32(esp + 0x18) = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_00303A57; /* je: equal / zero */

loc_00303A33: ;
    _fa = (uint32_t)(MEM32(esi + 0x80)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x24) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x80), 0x24 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00303A57; /* jb: below (unsigned <) */

loc_00303A3C: ;
    ecx = 0x10;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00303A46u); RECOMP_ABI_CALL(0x003E62A0u, sub_003E62A0); /* call 0x003E62A0 */

loc_00303A46: ;
    eax = esi;
    PUSH32(esp, 0x24);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00303A50u); RECOMP_ABI_CALL(0x003E6BD0u, sub_003E6BD0); /* call 0x003E6BD0 */

loc_00303A50: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00303A7C; /* jne: not equal / not zero */

loc_00303A57: ;
    esi = MEM32(0x84A184);
    ecx = 0x10;
    MEM32(esp + 0x18) = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00303A6Bu); RECOMP_ABI_CALL(0x003E62A0u, sub_003E62A0); /* call 0x003E62A0 */

loc_00303A6B: ;
    ecx = esi;
    PUSH32(esp, 0x24);
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00303A75u); RECOMP_ABI_CALL(0x003E6BD0u, sub_003E6BD0); /* call 0x003E6BD0 */

loc_00303A75: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00303ADE; /* je: equal / zero */

loc_00303A7C: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + 0x10)); /* movss */
    SET_LO8(edx, MEM8(ebp + 0x20));
    ecx = MEM32(esp + 0x28);
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + 0x14)); /* movss */
    MEM8(eax) = 0;
    MEM16(eax + 2) = LO16(ebx);
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    MEM8(eax + 0xC) = LO8(edx);
    edx = MEM32(ecx);
    MEM32(eax + 0x10) = edx;
    ecx = MEM32(edi + 0x7C);
    MEM32(eax + 0x14) = ecx;
    edx = MEM32(edi + 0x80);
    MEM32(eax + 0x18) = edx;
    SET_LO16(ecx, MEM16(edi + 0xCC));
    MEM16(eax + 0x1E) = LO16(ecx);
    ecx = MEM32(ebp + 8);
    edx = MEM32(ecx + 0x568);
    edx = MEM32(edx + 0x368);
    MEM32(eax + 0x20) = edx;
    ecx = MEM32(ecx + 0x568);
    MEM32(ecx + 0x368) = eax;

loc_00303ADE: ;
    ecx = MEM32(ebp + 0x20);

loc_00303AE1: ;
    SET_LO8(eax, MEM8(ebp + 0x1C));
    MEM16(edi + 0x174) = LO16(ebx);
    MEM16(edi + 0x170) = LO16(ebx);
    _fb = (uint32_t)(0x4000) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x4000;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = SX16(LO16(ebx));
    xmm0.f[0] = (float)(int32_t)edx; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x648F48); /* mulss */
    MEMF(edi + 0x114) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + 0x18)); /* movss */
    MEMF(edi + 0xD4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + 0x14)); /* movss */
    MEM8(edi + 0x17D) = LO8(eax);
    _fa = (uint32_t)(MEM8(ebp + 0x2C)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + 0x2C), 0x20 (8-bit) */
    MEMF(edi + 0xD0) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + 0x10)); /* movss */
    MEMF(edi + 0x110) = xmm0.f[0]; /* movss */
    MEM8(edi + 0x17B) = 0;
    MEM8(edi + 0x179) = 0;
    MEM8(edi + 0x17A) = 0xFF;
    if (TEST_Z(_fa, _fb)) goto loc_00303B6C; /* je: equal / zero */

loc_00303B57: ;
    edx = MEM32(ebp + 8);
    SET_LO8(eax, MEM8(edx + 0x42E));
    MEM8(edi + 0x17A) = LO8(eax);
    MEM8(edi + 0x235) = LO8(eax);

loc_00303B6C: ;
    ebx = MEM32(ebp + 0x30);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    MEM8(edi + 0x17C) = 0x26;
    if (CMP_NE(_fa, _fb)) goto loc_00303B88; /* jne: not equal / not zero */

loc_00303B7A: ;
    SET_LO8(eax, MEM8(ecx + 0x59DA58));
    SET_LO8(eax, LO8(eax) + 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    MEM8(edi + 0x1D8) = LO8(eax);

loc_00303B88: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x24) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x24 (32-bit) */
    xmm0 = XMM_SCALAR(MEMF(0x648EA4)); /* movss */
    MEMF(edi + 0xDC) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x648EEC)); /* movss */
    MEMF(edi + 0x224) = xmm0.f[0]; /* movss */
    eax = 5;
    if (CMP_NE(_fa, _fb)) goto loc_00303BB7; /* jne: not equal / not zero */

loc_00303BB2: ;
    eax = 0x96;

loc_00303BB7: ;
    xmm0 = XMM_SCALAR(MEMF(0x648D14)); /* movss */
    PUSH32(esp, 0x1C);
    MEM16(edi + 0x1EC) = LO16(eax);
    MEM16(edi + 0x1EE) = LO16(eax);
    MEMF(edi + 0x1F4) = xmm0.f[0]; /* movss */
    MEMF(edi + 0x1F8) = xmm0.f[0]; /* movss */
    MEMF(edi + 0x1E4) = xmm0.f[0]; /* movss */
    MEMF(edi + 0x1E8) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00303BF4u); RECOMP_ABI_CALL(0x000ADA00u, sub_000ADA00); /* call 0x000ADA00 */

loc_00303BF4: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00303CC5; /* je: equal / zero */

loc_00303BFF: ;
    MEM32(eax) = 0;
    MEM32(eax + 4) = 0;
    MEM8(eax + 8) = 0;
    MEM8(eax + 0x10) = 0;
    MEM8(eax + 0x18) = 1;
    ecx = eax;
    goto loc_00303CC7;

loc_00303C1F: ;
    eax = MEM32(eax + 0x368);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00303AE1; /* je: equal / zero */

loc_00303C2D: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 4 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00303AE1; /* je: equal / zero */

loc_00303C36: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x25) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x25 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00303AE1; /* je: equal / zero */

loc_00303C3F: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x26) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x26 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00303AE1; /* je: equal / zero */

loc_00303C48: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x13) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x13 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00303AE1; /* je: equal / zero */

loc_00303C51: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x18) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x18 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00303AE1; /* je: equal / zero */

loc_00303C5A: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x19) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x19 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00303AE1; /* je: equal / zero */

loc_00303C63: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x24) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x24 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00303AE1; /* je: equal / zero */

loc_00303C6C: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1A) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x1A (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00303AE1; /* je: equal / zero */

loc_00303C75: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1B) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x1B (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00303AE1; /* je: equal / zero */

loc_00303C7E: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x1C (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00303AE1; /* je: equal / zero */

loc_00303C87: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1D) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x1D (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00303AE1; /* je: equal / zero */

loc_00303C90: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    edx = MEM32(eax + 0x10);
    SET_LO16(ebx, MEM16(eax + 2));
    esi = MEM32(esp + 0x28);
    MEMF(ebp + 0x10) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    MEM32(esi) = edx;
    edx = MEM32(eax + 0x14);
    MEM32(edi + 0x7C) = edx;
    eax = MEM32(eax + 0x18);
    MEMF(ebp + 0x14) = xmm0.f[0]; /* movss */
    MEM32(edi + 0x80) = eax;
    goto loc_00303AE1;

loc_00303CC5: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00303CC7: ;
    eax = MEM32(ebp + 8);
    MEM32(edi + 0x23C) = ecx;
    edi = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00303CD7u); RECOMP_ABI_CALL(0x003153A0u, sub_003153A0); /* call 0x003153A0 */

loc_00303CD7: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    esi = MEM32(esp + 0x1C);
    MEM8(esi + 0x232) = 0x11;
    MEM8(esi + 0x43D) = 0;
    MEM8(esi + 0x234) = 0xFF;
    MEM32(esi + 0x200) = 0x8000100Eu;
    if (CMP_EQ(_fa, _fb)) goto loc_00303D0F; /* je: equal / zero */

loc_00303CFE: ;
    MEM32(esi + 0x200) = 0x8000900Eu;
    MEM8(esi + 0x20B) = 1;

loc_00303D0F: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + 0x28)); /* movss */
    ebx = MEM32(ebp + 8);
    edi = MEM32(ebp + 0x20);
    SET_LO8(edx, MEM8(ebp + 0x30));
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEMF(esi + 0x260) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x264) = xmm0.f[0]; /* movss */
    SET_LO8(ecx, MEM8(ebx + 0x136));
    MEM16(esi + 0x476) = LO16(edi);
    MEM8(esi + 0x482) = LO8(edx);
    ecx = ecx & 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 2 (32-bit) */
    MEM16(esi + 0x136) = LO16(ecx);
    if (CMP_NE(_fa, _fb)) goto loc_00303D5C; /* jne: not equal / not zero */

loc_00303D51: ;
    MEM16(esi + 0x480) = 0x3C;
    goto loc_00303D82;

loc_00303D5C: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x14) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x14 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00303D70; /* je: equal / zero */

loc_00303D61: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x12) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x12 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00303D70; /* je: equal / zero */

loc_00303D66: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x15) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x15 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00303D70; /* je: equal / zero */

loc_00303D6B: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x16) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x16 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00303D79; /* jne: not equal / not zero */

loc_00303D70: ;
    MEM16(esi + 0x480) = 0xF;

loc_00303D79: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x26) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x26 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00304125; /* ja: above (unsigned >) */

loc_00303D82: ;
    eax = ZX8(MEM8(edi + 0x30430C));
    { uint32_t _jt = MEM32(eax * 4 + 0x3042E0); /* switch: 11 entries, 11 targets */
    if (_jt == 0x00303D90u) goto loc_00303D90;
    if (_jt == 0x00303D9Au) goto loc_00303D9A;
    if (_jt == 0x00303DA4u) goto loc_00303DA4;
    if (_jt == 0x00303E21u) goto loc_00303E21;
    if (_jt == 0x00303EB7u) goto loc_00303EB7;
    if (_jt == 0x00303ED1u) goto loc_00303ED1;
    if (_jt == 0x00303FBAu) goto loc_00303FBA;
    if (_jt == 0x00303FF9u) goto loc_00303FF9;
    if (_jt == 0x00304089u) goto loc_00304089;
    if (_jt == 0x003040E6u) goto loc_003040E6;
    if (_jt == 0x00304125u) goto loc_00304125;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00303D90: ;
    eax = MEM32(0x59C9FC);
    goto loc_00303FFE;

loc_00303D9A: ;
    eax = MEM32(0x59CA2C);
    goto loc_00303E42;

loc_00303DA4: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x3CA3D70A);
    PUSH32(esp, 0x43070000);
    PUSH32(esp, 0x43070000);
    PUSH32(esp, 0x50);
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0x43160000);
    ecx = esp + 0x38;
    SET_LO8(eax, 0xC8);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    edi = 2;
    MEM8(esp + 0x40) = LO8(eax);
    MEM8(esp + 0x41) = LO8(eax);
    MEM8(esp + 0x42) = 0xFF;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00303DE0u); RECOMP_ABI_CALL(0x001B9770u, sub_001B9770); /* call 0x001B9770 */

loc_00303DE0: ;
    eax = MEM32(ebx + 0x564);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00304125; /* jne: not equal / not zero */

loc_00303DF1: ;
    edx = MEM32(esp + 0x28);
    eax = MEM32(0x847024);
    ecx = MEM32(eax + 0x40);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 4);
    PUSH32(esp, edx);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x68);
    PUSH32(esp, ecx);
    edx = edx | 0xFFFFFFFFu;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = 0xB5C;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00303E1Cu); RECOMP_ABI_CALL(0x00022D90u, sub_00022D90); /* call 0x00022D90 */

loc_00303E1C: ;
    goto loc_00304125;

loc_00303E21: ;
    edx = MEM32(0x847024);
    eax = MEM32(edx + 0x40);
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, esi);
    PUSH32(esp, 0x237);
    PUSH32(esp, eax);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00303E3Du); RECOMP_ABI_CALL(0x00024FA0u, sub_00024FA0); /* call 0x00024FA0 */

loc_00303E3D: ;
    eax = MEM32(0x59CA34);

loc_00303E42: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x84)); /* movss */
    MEMF(0x7FCB64) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x88)); /* movss */
    MEMF(0x7FCB68) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x8C)); /* movss */
    MEMF(0x7FCB6C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7FDD38)); /* movss */
    MEMF(0x7FCB58) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7FDD34)); /* movss */
    MEMF(0x7FCB5C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7FDD30)); /* movss */
    MEMF(0x7FCB60) = xmm0.f[0]; /* movss */
    if (CMP_EQ(_fa, _fb)) goto loc_00304125; /* je: equal / zero */

loc_00303EAA: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    { uint32_t _icall_target = eax; PUSH32(esp, 0x00303EAFu); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x00303EADu); } /* indirect call */
    }

loc_00303EAF: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00304125;

loc_00303EB7: ;
    eax = MEM32(ebx + 0x564);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00303ED1; /* je: equal / zero */

loc_00303EC1: ;
    SET_LO8(ecx, MEM8(eax + 0x2A8));
    SET_LO8(edx, 1);
    SET_LO8(edx, LO8(edx) << LO8(ecx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    MEM8(esi + 0x543) = LO8(edx);

loc_00303ED1: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x84)); /* movss */
    eax = MEM32(0x59CA34);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEMF(0x7FCB64) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x88)); /* movss */
    MEMF(0x7FCB68) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x8C)); /* movss */
    MEMF(0x7FCB6C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7FDD38)); /* movss */
    MEMF(0x7FCB58) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7FDD34)); /* movss */
    MEMF(0x7FCB5C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7FDD30)); /* movss */
    MEMF(0x7FCB60) = xmm0.f[0]; /* movss */
    if (CMP_EQ(_fa, _fb)) goto loc_00303F42; /* je: equal / zero */

loc_00303F3A: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    { uint32_t _icall_target = eax; PUSH32(esp, 0x00303F3Fu); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x00303F3Du); } /* indirect call */
    }

loc_00303F3F: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00303F42: ;
    eax = MEM32(ebx + 0x564);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00303F78; /* jne: not equal / not zero */

loc_00303F4C: ;
    eax = MEM32(esp + 0x28);
    ecx = MEM32(0x847024);
    edx = MEM32(ecx + 0x40);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x68);
    PUSH32(esp, edx);
    edx = edx | 0xFFFFFFFFu;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = 0xB5C;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00303F78u); RECOMP_ABI_CALL(0x00022D90u, sub_00022D90); /* call 0x00022D90 */

loc_00303F78: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 5 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00304125; /* jne: not equal / not zero */

loc_00303F81: ;
    SET_LO8(eax, MEM8(0x7819D5));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00304125; /* jne: not equal / not zero */

loc_00303F8E: ;
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F000000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x48F42400);
    PUSH32(esp, 2);
    PUSH32(esp, 3);
    ecx = 0x12C;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00303FB2u); RECOMP_ABI_CALL(0x0011F960u, sub_0011F960); /* call 0x0011F960 */

loc_00303FB2: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00304125;

loc_00303FBA: ;
    eax = MEM32(ebx + 0x564);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00304125; /* jne: not equal / not zero */

loc_00303FC8: ;
    eax = MEM32(esp + 0x28);
    ecx = MEM32(0x847024);
    edx = MEM32(ecx + 0x40);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x68);
    PUSH32(esp, edx);
    edx = edx | 0xFFFFFFFFu;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = 0xC0E;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00303FF4u); RECOMP_ABI_CALL(0x00022D90u, sub_00022D90); /* call 0x00022D90 */

loc_00303FF4: ;
    goto loc_00304125;

loc_00303FF9: ;
    eax = MEM32(0x59CA18);

loc_00303FFE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x84)); /* movss */
    MEMF(0x7FCB64) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x88)); /* movss */
    MEMF(0x7FCB68) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x8C)); /* movss */
    MEMF(0x7FCB6C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7FDD38)); /* movss */
    MEMF(0x7FCB58) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7FDD34)); /* movss */
    MEMF(0x7FCB5C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7FDD30)); /* movss */
    MEMF(0x7FCB60) = xmm0.f[0]; /* movss */
    if (CMP_EQ(_fa, _fb)) goto loc_0030406A; /* je: equal / zero */

loc_00304062: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    { uint32_t _icall_target = eax; PUSH32(esp, 0x00304067u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x00304065u); } /* indirect call */
    }

loc_00304067: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0030406A: ;
    PUSH32(esp, 0x13);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    eax = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00304077u); RECOMP_ABI_CALL(0x0018D7B0u, sub_0018D7B0); /* call 0x0018D7B0 */

loc_00304077: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00304081u); RECOMP_ABI_CALL(0x001C4C90u, sub_001C4C90); /* call 0x001C4C90 */

loc_00304081: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00304125;

loc_00304089: ;
    eax = MEM32(0x847024);
    edi = MEM32(eax + 0x40);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00304096u); RECOMP_ABI_CALL(0x002F82C0u, sub_002F82C0); /* call 0x002F82C0 */

loc_00304096: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00304125; /* je: equal / zero */

loc_0030409E: ;
    eax = MEM32(esi + 0x564);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003040BB; /* je: equal / zero */

loc_003040A8: ;
    ecx = MEM32(0x847024);
    eax = MEM32(ecx + 0x44);
    eax = MEM32(eax + 0xC);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(eax);
    goto loc_003040C1;

loc_003040BB: ;
    eax = MEM32(esi + 0x580);

loc_003040C1: ;
    edx = MEM32(esp + 0x28);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    edx = edx | 0xFFFFFFFFu;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx = 0xB25;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003040E4u); RECOMP_ABI_CALL(0x00022D90u, sub_00022D90); /* call 0x00022D90 */

loc_003040E4: ;
    goto loc_00304125;

loc_003040E6: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x37A7C5AC);
    PUSH32(esp, 0x41A00000);
    PUSH32(esp, 0x42C80000);
    PUSH32(esp, 0xA);
    SET_LO8(eax, 0x1E);
    PUSH32(esp, 0xFF);
    MEM8(esp + 0x35) = LO8(eax);
    MEM8(esp + 0x36) = LO8(eax);
    PUSH32(esp, 0x41C80000);
    eax = esp + 0x38;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    edi = 2;
    MEM8(esp + 0x40) = 0xFF;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00304122u); RECOMP_ABI_CALL(0x001B9770u, sub_001B9770); /* call 0x001B9770 */

loc_00304122: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00304125: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x9C)); /* movss */
    ecx = esi + 0x90;
    edx = MEM32(ecx);
    eax = MEM32(ecx + 4);
    ecx = MEM32(ecx + 8);
    MEM32(esp + 0x34) = eax;
    MEM32(esp + 0x38) = ecx;
    ecx = MEM32(0x870ED4);
    PUSH32(esp, esi);
    eax = esp + 0x34;
    MEM32(esp + 0x34) = edx;
    MEMF(esp + 0x40) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0030415Du); RECOMP_ABI_CALL(0x003560A0u, sub_003560A0); /* call 0x003560A0 */

loc_0030415D: ;
    MEM32(esi + 0x5DC) = eax;
    _fa = (uint32_t)(MEM32(esi + 0x68)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x5E) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x68), 0x5E (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00304176; /* jne: not equal / not zero */

loc_00304169: ;
    _fa = (uint32_t)(MEM32(0x7FA1F8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x18) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x7FA1F8), 0x18 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003041F1; /* je: equal / zero */

loc_00304176: ;
    eax = MEM32(0x8496E0);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003041A8; /* jne: not equal / not zero */

loc_00304181: ;
    PUSH32(esp, 0x18);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00304188u); RECOMP_ABI_CALL(0x001E5920u, sub_001E5920); /* call 0x001E5920 */

loc_00304188: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003041A2; /* je: equal / zero */

loc_0030418F: ;
    MEM32(eax + 0x10) = edi;
    MEM32(eax + 0x14) = edi;
    MEM32(eax + 0xC) = eax;
    MEM32(eax + 8) = eax;
    MEM32(0x8496E0) = eax;
    goto loc_003041A8;

loc_003041A2: ;
    MEM32(0x8496E0) = edi;

loc_003041A8: ;
    PUSH32(esp, edi);
    edx = esi;
    eax = esp + 0x44;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003041B4u); RECOMP_ABI_CALL(0x00354EF0u, sub_00354EF0); /* call 0x00354EF0 */

loc_003041B4: ;
    _fa = (uint32_t)(MEM32(esp + 0x4C)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x4C), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003041E8; /* je: equal / zero */

loc_003041BA: ;
    eax = 0x5D5174;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003041C4u); RECOMP_ABI_CALL(0x0029CDD0u, sub_0029CDD0); /* call 0x0029CDD0 */

loc_003041C4: ;
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, 1);
    PUSH32(esp, 0xBF800000u);
    edx = esp + 0x4C;
    PUSH32(esp, edx);
    edx = MEM32(0x8496B8);
    ecx = esp + 0x28;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    edx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003041E8u); RECOMP_ABI_CALL(0x001DCA70u, sub_001DCA70); /* call 0x001DCA70 */

loc_003041E8: ;
    eax = esp + 0x40;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003041F1u); RECOMP_ABI_CALL(0x00355040u, sub_00355040); /* call 0x00355040 */

loc_003041F1: ;
    eax = MEM32(ebp + 0x34);
    MEM32(esi + 0x5E0) = eax;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = esi + 0x5A6;
    goto loc_00304210;

    /* nop */
    goto loc_00304210;

    /* nop */

loc_00304210: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x84A144)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(0x84A144) (32-bit) */
    MEM16(edi) = 0;
    MEM8(edi + -2) = 0;
    if (CMP_G(_fas, _fbs)) goto loc_0030423E; /* jg: greater (signed >) */

loc_00304221: ;
    edx = edi + 2;
    ecx = 1;
    MEM32(edx) = ecx;
    MEM32(edx + 4) = ecx;
    MEM32(edx + 8) = ecx;
    MEM32(edx + 0xC) = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00304239u); RECOMP_ABI_CALL(0x00313B70u, sub_00313B70); /* call 0x00313B70 */

loc_00304239: ;
    MEM32(edi + -6) = eax;
    goto loc_00304258;

loc_0030423E: ;
    ecx = edi + 2;
    eax = 1;
    MEM32(ecx) = eax;
    MEM32(ecx + 4) = eax;
    MEM32(ecx + 8) = eax;
    MEM32(ecx + 0xC) = eax;
    MEM32(edi + -6) = 0xFFFFFFFFu;

loc_00304258: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x18;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 2 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00304210; /* jl: less (signed <) */

loc_00304261: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00304340
 * Original: 0x00304340 - 0x003047EE (1198 bytes, 279 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00304340(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00304340: ;
    _fb = (uint32_t)(0x44) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x44;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x7FDBF4);
    ecx = MEM32(0x7FDBF8);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x50);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    MEM32(esp + 0x24) = edi;
    MEM32(esp + 0x1C) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_0030437A; /* je: equal / zero */

loc_00304364: ;
    edx = MEM32(ebp + 0x568);
    SET_LO8(ebx, MEM8(edx + 0xB1));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0030437A; /* je: equal / zero */

loc_00304374: ;
    MEM32(esp + 0x1C) = eax;
    ecx = eax;

loc_0030437A: ;
    xmm0 = XMM_SCALAR(MEMF(0x6490B0)); /* movss */
    eax = ZX16(MEM16(ebp + 0x174));
    xmm4 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x649500)); /* movss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x648D10)); /* movss */
    _fb = (uint32_t)(0x4000) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x4000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 5 (32-bit) */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x648F48); /* mulss */
    MEMF(esp + 0x58) = xmm4.f[0]; /* movss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x28) = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_003043E2; /* je: equal / zero */

loc_003043D4: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(9) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 9 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003043E2; /* je: equal / zero */

loc_003043D9: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xA (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00304532; /* jne: not equal / not zero */

loc_003043E2: ;
    ecx = MEM32(ebp + 0x4B0);
    edx = MEM32(ecx + 0x24);
    eax = MEM32(edx + 8);
    eax = MEM32(eax + 0x10);
    ecx = esp + 0x2C;
    PUSH32(esp, ecx);
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    ebx = 0x5F0C94;
    PUSH32(esp, 0x00304403u); RECOMP_ABI_CALL(0x00415EC0u, sub_00415EC0); /* call 0x00415EC0 */

loc_00304403: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00304419; /* je: equal / zero */

loc_0030440A: ;
    eax = MEM32(esp + 0x2C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00304419; /* je: equal / zero */

loc_00304412: ;
    eax = MEM32(eax + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0030441D; /* jne: not equal / not zero */

loc_00304419: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00304426;

loc_0030441D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0030452F; /* je: equal / zero */

loc_00304426: ;
    ecx = MEM32(ebp + 0x3C8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    xmm6 = XMM_SCALAR(MEMF(0x648D14)); /* movss */
    if (CMP_EQ(_fa, _fb)) goto loc_003045C3; /* je: equal / zero */

loc_0030443C: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    eax = eax << 6;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esi = eax + ecx;
    PUSH32(esp, esi);
    edx = esp + 0x40;
    PUSH32(esp, edx);
    eax = esp + 0x50;
    PUSH32(esp, eax);
    MEMF(esp + 0x48) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x4C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x50) = xmm6.f[0]; /* movss */
    PUSH32(esp, 0x00304467u); RECOMP_ABI_CALL(0x00428393u, sub_00428393); /* call 0x00428393 */

loc_00304467: ;
    xmm1 = XMM_SCALAR(MEMF(esi + 0x30)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x48)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esi + 0x38)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(esi + 0x34)); /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x50)); /* movss */
    xmm1.f[0] = xmm1.f[0] - xmm2.f[0]; /* subss */
    xmm2 = xmm0; /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    xmm0 = xmm1; /* movaps */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm0.f[0]; /* addss */
    MEMF(esp + 0x30) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x2C) = xmm2.f[0]; /* movss */
    xmm0.f[0] = sqrtf(MEMF(esp + 0x2C)); /* sqrtss */
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */
    ecx = MEM32(esp + 0x30);
    edx = MEM32(esp + 0x34);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x003044C9u); RECOMP_ABI_CALL(0x003E3CA0u, sub_003E3CA0); /* call 0x003E3CA0 */

loc_003044C9: ;
    eax = MEM32(esp + 0x40);
    xmm5 = XMM_SCALAR(MEMF(0x648D78)); /* movss */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm3 = xmm0; /* movaps */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x4C)); /* movss */
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    xmm0.f[0] = xmm0.f[0] - xmm4.f[0]; /* subss */
    xmm3.f[0] = xmm3.f[0] * xmm5.f[0]; /* mulss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x003044F5u); RECOMP_ABI_CALL(0x003E3CA0u, sub_003E3CA0); /* call 0x003E3CA0 */

loc_003044F5: ;
    xmm1 = XMM_SCALAR(MEMF(0x648E6C)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(0x648F60)); /* movss */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fca = xmm3.f[0]; _fcb = xmm1.f[0]; /* comiss */
    xmm0.f[0] = xmm0.f[0] * xmm5.f[0]; /* mulss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00304515; /* jbe: below or equal (unsigned <=) (xmm3.f[0] vs xmm1.f[0]) */

loc_00304511: ;
    xmm3.f[0] = xmm3.f[0] - xmm2.f[0]; /* subss */

loc_00304515: ;
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0030451E; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_0030451A: ;
    xmm0.f[0] = xmm0.f[0] - xmm2.f[0]; /* subss */

loc_0030451E: ;
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x20) = xmm3.f[0]; /* movss */
    goto loc_003045C9;

loc_0030452F: ;
    xmm4 = XMM_ZERO(); /* xorps self = zero */

loc_00304532: ;
    eax = MEM32(ebp + 0x564);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003045A8; /* je: equal / zero */

loc_0030453C: ;
    _fa = (uint32_t)(MEM32(eax + 0xC0)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x100) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0xC0), 0x100 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003045A8; /* jne: not equal / not zero */

loc_00304548: ;
    xmm1 = XMM_SCALAR(MEMF(eax + 0x604)); /* movss */
    _fca = xmm4.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0030457E; /* jbe: below or equal (unsigned <=) (xmm4.f[0] vs xmm1.f[0]) */

loc_00304555: ;
    xmm0 = xmm1; /* movaps */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x648E1C); /* mulss */
    xmm1.f[0] = xmm1.f[0] * MEMF(0x64B19C); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x648F98); /* addss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x649794); /* mulss */
    goto loc_003045B3;

loc_0030457E: ;
    xmm0 = XMM_SCALAR(MEMF(0x648E38)); /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x64B198); /* mulss */
    xmm1.f[0] = xmm1.f[0] * MEMF(0x648E1C); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x649794); /* mulss */
    goto loc_003045B3;

loc_003045A8: ;
    xmm0 = xmm4; /* movaps */
    xmm0.f[0] = xmm0.f[0] - MEMF(ebp + 0x3BC); /* subss */

loc_003045B3: ;
    xmm6 = XMM_SCALAR(MEMF(0x648D14)); /* movss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    goto loc_003045CC;

loc_003045C3: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */

loc_003045C9: ;
    xmm4 = XMM_ZERO(); /* xorps self = zero */

loc_003045CC: ;
    ebx = MEM32(esp + 0x1C);
    eax = ebx + -1;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x25) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x25 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0030476B; /* ja: above (unsigned >) */

loc_003045DE: ;
    ecx = ZX8(MEM8(eax + 0x30482C));
    { uint32_t _jt = MEM32(ecx * 4 + 0x3047F0); /* switch: 15 entries, 15 targets */
    if (_jt == 0x003045ECu) goto loc_003045EC;
    if (_jt == 0x003045F6u) goto loc_003045F6;
    if (_jt == 0x0030461Fu) goto loc_0030461F;
    if (_jt == 0x00304632u) goto loc_00304632;
    if (_jt == 0x0030469Cu) goto loc_0030469C;
    if (_jt == 0x003046BBu) goto loc_003046BB;
    if (_jt == 0x003046E2u) goto loc_003046E2;
    if (_jt == 0x003046F8u) goto loc_003046F8;
    if (_jt == 0x0030470Eu) goto loc_0030470E;
    if (_jt == 0x0030471Cu) goto loc_0030471C;
    if (_jt == 0x00304721u) goto loc_00304721;
    if (_jt == 0x00304737u) goto loc_00304737;
    if (_jt == 0x0030473Cu) goto loc_0030473C;
    if (_jt == 0x00304766u) goto loc_00304766;
    if (_jt == 0x0030476Bu) goto loc_0030476B;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_003045EC: ;
    esi = 0xA;
    goto loc_00304766;

loc_003045F6: ;
    xmm0.f[0] = xmm0.f[0] * MEMF(0x64A248); /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x648F98); /* addss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x64942C)); /* movss */
    MEMF(esp + 0x58) = xmm0.f[0]; /* movss */
    goto loc_0030476B;

loc_0030461F: ;
    xmm0 = XMM_SCALAR(MEMF(0x64AC18)); /* movss */
    MEMF(esp + 0x58) = xmm0.f[0]; /* movss */
    goto loc_0030476B;

loc_00304632: ;
    edx = MEM32(0x84A5F8);
    edi = MEM32(edx + 0x568);
    xmm0 = XMM_SCALAR(MEMF(0x5A0060)); /* movss */
    eax = esp + 0x20;
    PUSH32(esp, eax);
    eax = edi + 0x128;
    edx = esp + 0x14;
    MEMF(esp + 0x5C) = xmm4.f[0]; /* movss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00304666u); RECOMP_ABI_CALL(0x001118D0u, sub_001118D0); /* call 0x001118D0 */

loc_00304666: ;
    xmm4.f[0] = xmm4.f[0] - MEMF(esp + 0x14); /* subss */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x11C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x11C;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(edi);
    edx = MEM32(edi + 4);
    eax = MEM32(edi + 8);
    MEM32(esp + 0x48) = ecx;
    ecx = esp + 0x48;
    MEM32(esp + 0x4C) = edx;
    MEM32(esp + 0x50) = eax;
    MEM32(esp + 0x28) = ecx;
    MEMF(esp + 0x10) = xmm4.f[0]; /* movss */
    goto loc_00304766;

loc_0030469C: ;
    xmm0 = XMM_SCALAR(MEMF(0x5A0060)); /* movss */
    MEMF(esp + 0x58) = xmm4.f[0]; /* movss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x10) = xmm4.f[0]; /* movss */
    goto loc_00304766;

loc_003046BB: ;
    xmm0 = XMM_SCALAR(MEMF(0x648EB8)); /* movss */
    MEMF(esp + 0x58) = xmm4.f[0]; /* movss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x10) = xmm4.f[0]; /* movss */
    MEM32(esp + 0x24) = 0x30;
    goto loc_0030476B;

loc_003046E2: ;
    xmm0 = XMM_SCALAR(MEMF(0x648EB8)); /* movss */
    MEMF(esp + 0x58) = xmm4.f[0]; /* movss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    goto loc_0030476B;

loc_003046F8: ;
    xmm0 = XMM_SCALAR(MEMF(0x648D20)); /* movss */
    MEMF(esp + 0x58) = xmm4.f[0]; /* movss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    goto loc_0030476B;

loc_0030470E: ;
    MEMF(esp + 0x58) = xmm4.f[0]; /* movss */
    MEMF(esp + 0x14) = xmm6.f[0]; /* movss */
    goto loc_0030476B;

loc_0030471C: ;
    esi = 0x2B;

loc_00304721: ;
    xmm0 = XMM_SCALAR(MEMF(0x648D1C)); /* movss */
    MEMF(esp + 0x58) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x14) = xmm6.f[0]; /* movss */
    goto loc_0030476B;

loc_00304737: ;
    esi = 0x37;

loc_0030473C: ;
    xmm0 = XMM_SCALAR(MEMF(0x648D1C)); /* movss */
    MEMF(esp + 0x58) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x64B194)); /* movss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x648CF0)); /* movss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */

loc_00304766: ;
    edi = 1;

loc_0030476B: ;
    fp_push(MEMD(0x648F30)); /* fld double */
    if (recomp_fp_trig_in_range(fp_top())) fp_top() = recomp_x87_cos(fp_top()); /* fcos */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x648D10)); /* fmul dword ptr [0x648d10] */
    fp_st1() = RECOMP_FP_PC(fp_st1() * fp_top()); fp_pop(); /* fmulp st(1) */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x6491F8)); /* fmul dword ptr [0x6491f8] */
    PUSH32(esp, 0x0030478Eu); RECOMP_ABI_CALL(0x00471288u, sub_00471288); /* call 0x00471288 */

loc_0030478E: ;
    edx = ZX16(LO16(eax));
    MEM32(esp + 0x38) = edx;
    eax = MEM32(esp + 0x24);
    fp_push((double)SMEM32(esp + 0x38)); /* fild */
    ecx = MEM32(esp + 0x14);
    edx = MEM32(esp + 0x58);
    PUSH32(esp, 0);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x648F28)); /* fmul dword ptr [0x648f28] */
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    PUSH32(esp, eax);
    if (recomp_fp_trig_in_range(fp_top())) fp_top() = recomp_x87_cos(fp_top()); /* fcos */
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x64);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x4C);
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 2) & 7]); /* fmul st(2) */
    MEMF(esp + 0x68) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 0x68);
    if (recomp_fp_trig_in_range(fp_top())) fp_top() = recomp_x87_sin(fp_top()); /* fsin */
    fp_st1() = RECOMP_FP_PC(fp_st1() * fp_top()); fp_pop(); /* fmulp st(1) */
    fp_top() = -fp_top(); /* fchs */
    fp_top() = -fp_top(); /* fchs */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x58);
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x003047E3u); RECOMP_ABI_CALL(0x003030C0u, sub_003030C0); /* call 0x003030C0 */

loc_003047E3: ;
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x44) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x44;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00304860
 * Original: 0x00304860 - 0x0030493C (220 bytes, 68 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00304860(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00304860: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x58) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x58;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax + eax * 2;
    edi = edi << 2;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = MEM32(edi + 0x59DA90);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    esi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_003048C1; /* je: equal / zero */

loc_0030487D: ;
    ecx = MEM32(esi + 0x3C8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00304894; /* je: equal / zero */

loc_00304887: ;
    ecx = MEM32(esi + 0x64);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2E) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x2E (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00304894; /* je: equal / zero */

loc_0030488F: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x42) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x42 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003048C1; /* jne: not equal / not zero */

loc_00304894: ;
    _fb = (uint32_t)(0x78) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x78;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(esi);
    eax = ebx;
    MEM32(eax) = ecx;
    edx = MEM32(esi + 4);
    MEM32(eax + 4) = edx;
    ecx = MEM32(esi + 8);
    MEM32(eax + 8) = ecx;
    xmm0 = XMM_SCALAR(MEMF(ebx + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x648F08); /* addss */
    MEMF(ebx + 4) = xmm0.f[0]; /* movss */
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_003048C1: ;
    edx = esp + 0x20;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003048CCu); RECOMP_ABI_CALL(0x002F7810u, sub_002F7810); /* call 0x002F7810 */

loc_003048CC: ;
    eax = (uint32_t)(int32_t)SMEM16(edi + 0x59DA88);
    ecx = (uint32_t)(int32_t)SMEM16(edi + 0x59DA8A);
    edx = (uint32_t)(int32_t)SMEM16(edi + 0x59DA8C);
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    xmm0.f[0] = (float)(int32_t)ecx; /* cvtsi2ss */
    eax = esp + 0x20;
    PUSH32(esp, eax);
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    xmm0.f[0] = (float)(int32_t)edx; /* cvtsi2ss */
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00304916u); RECOMP_ABI_CALL(0x00428393u, sub_00428393); /* call 0x00428393 */

loc_00304916: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    MEMF(ebx) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    MEMF(ebx + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    POP32(esp, edi);
    MEMF(ebx + 8) = xmm0.f[0]; /* movss */
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00304940
 * Original: 0x00304940 - 0x00304B97 (599 bytes, 164 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00304940(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00304940: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(0x7FDBF8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x34);
    eax = MEM32(edi + 0x568);
    _fa = (uint32_t)(MEM32(eax + 0xBC)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0xBC), 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0030499C; /* je: equal / zero */

loc_00304960: ;
    ecx = eax + 0x21C;
    edx = MEM32(ecx);
    _fb = (uint32_t)(0x358) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x358;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = edx;
    edx = MEM32(ecx + 4);
    MEM32(eax + 4) = edx;
    ecx = MEM32(ecx + 8);
    MEM32(eax + 8) = ecx;
    eax = MEM32(edi + 0x568);
    edx = eax + 0x228;
    ecx = MEM32(edx);
    _fb = (uint32_t)(0x34C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x34C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = ecx;
    ecx = MEM32(edx + 4);
    MEM32(eax + 4) = ecx;
    edx = MEM32(edx + 8);
    MEM32(eax + 8) = edx;

loc_0030499C: ;
    PUSH32(esp, 0x4100000);
    ecx = 0xAD4;
    eax = 0x63834C;
    esi = edi;
    PUSH32(esp, 0x003049B2u); RECOMP_ABI_CALL(0x002A33F0u, sub_002A33F0); /* call 0x002A33F0 */

loc_003049B2: ;
    eax = MEM32(edi + 0x568);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 1);
    PUSH32(esp, ebx);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    ecx = eax + 0x358;
    esi = eax + 0xF0;
    PUSH32(esp, ecx);
    _fb = (uint32_t)(0x34C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x34C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x003049DEu); RECOMP_ABI_CALL(0x002D1F60u, sub_002D1F60); /* call 0x002D1F60 */

loc_003049DE: ;
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0x15) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0x15 (32-bit) */
    MEM32(0x780AB0) = ebx;
    MEM32(0x6C0210) = 0xFFFFFFFFu;
    MEM8(0x84B538) = LO8(ebx);
    MEM32(0x74FA2C) = ebx;
    if (CMP_L(_fas, _fbs)) goto loc_00304B8F; /* jl: less (signed <) */

loc_00304A06: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0x16) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0x16 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00304B8F; /* jg: greater (signed >) */

loc_00304A0F: ;
    edx = MEM32(edi + 0x568);
    _fb = (uint32_t)(0x34C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x34C;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(edx);
    ecx = MEM32(edx + 4);
    edx = MEM32(edx + 8);
    MEM32(esp + 0x18) = eax;
    MEM32(esp + 0x1C) = ecx;
    ebx = esp + 0x18;
    eax = ebp;
    ecx = edi;
    MEM32(esp + 0x20) = edx;
    PUSH32(esp, 0x00304A3Cu); RECOMP_ABI_CALL(0x00304860u, sub_00304860); /* call 0x00304860 */

loc_00304A3C: ;
    ecx = MEM32(edi + 0x568);
    eax = MEM32(ecx + 0x1D4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    eax = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_00304AA5; /* jne: not equal / not zero */

loc_00304A4E: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + 0x25C); /* subss */
    _fa = (uint32_t)(MEM32(eax + 0xBC)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0xBC), 1 (32-bit) */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x258)); /* movss */
    if (CMP_NE(_fa, _fb)) goto loc_00304A8C; /* jne: not equal / not zero */

loc_00304A70: ;
    xmm0.f[0] = xmm0.f[0] + MEMF(0x648E3C); /* addss */
    eax = esp + 0x34;
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00304A87u); RECOMP_ABI_CALL(0x002AF7C0u, sub_002AF7C0); /* call 0x002AF7C0 */

loc_00304A87: ;
    goto loc_00304B1E;

loc_00304A8C: ;
    xmm0.f[0] = xmm0.f[0] + MEMF(0x648E6C); /* addss */
    eax = esp + 0x34;
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00304AA3u); RECOMP_ABI_CALL(0x002AF7C0u, sub_002AF7C0); /* call 0x002AF7C0 */

loc_00304AA3: ;
    goto loc_00304B1E;

loc_00304AA5: ;
    fp_push(MEMF(eax + 0xF8)); /* fld float */
    xmm0 = XMM_SCALAR(MEMF(eax + 0xFC)); /* movss */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x18)); /* fsub dword ptr [esp + 0x18] */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x1C); /* subss */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax + 0x100)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x28)); /* fsub dword ptr [esp + 0x28] */
    MEMF(esp + 0x3C) = (float)fp_top(); /* fst */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x3C)); /* fmul dword ptr [esp + 0x3c] */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x18)); /* fmul dword ptr [esp + 0x18] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(esp) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00304AF0u); RECOMP_ABI_CALL(0x003E3CA0u, sub_003E3CA0); /* call 0x003E3CA0 */

loc_00304AF0: ;
    eax = MEM32(esp + 0x3C);
    ecx = MEM32(esp + 0x18);
    xmm3 = XMM_SCALAR(MEMF(0x648D78)); /* movss */
    PUSH32(esp, eax);
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    PUSH32(esp, ecx);
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00304B11u); RECOMP_ABI_CALL(0x003E3CA0u, sub_003E3CA0); /* call 0x003E3CA0 */

loc_00304B11: ;
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */

loc_00304B1E: ;
    fp_push(MEMD(0x648F30)); /* fld double */
    if (recomp_fp_trig_in_range(fp_top())) fp_top() = recomp_x87_cos(fp_top()); /* fcos */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x64925C)); /* fmul dword ptr [0x64925c] */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x6491F8)); /* fmul dword ptr [0x6491f8] */
    PUSH32(esp, 0x00304B3Bu); RECOMP_ABI_CALL(0x00471288u, sub_00471288); /* call 0x00471288 */

loc_00304B3B: ;
    edx = ZX16(LO16(eax));
    MEM32(esp + 0x14) = edx;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    fp_push((double)SMEM32(esp + 0x1C)); /* fild */
    PUSH32(esp, 0xA);
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x648F28)); /* fmul dword ptr [0x648f28] */
    PUSH32(esp, 0x3F000000);
    PUSH32(esp, 0);
    PUSH32(esp, ebp);
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    PUSH32(esp, 0x64);
    if (recomp_fp_trig_in_range(fp_top())) fp_top() = recomp_x87_cos(fp_top()); /* fcos */
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x60);
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 2) & 7]); /* fmul st(2) */
    MEMF(esp + 0x50) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 0x50);
    if (recomp_fp_trig_in_range(fp_top())) fp_top() = recomp_x87_sin(fp_top()); /* fsin */
    fp_st1() = RECOMP_FP_PC(fp_st1() * fp_top()); fp_pop(); /* fmulp st(1) */
    fp_top() = -fp_top(); /* fchs */
    fp_top() = -fp_top(); /* fchs */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    eax = esp + 0x50;
    PUSH32(esp, 0x00304B8Cu); RECOMP_ABI_CALL(0x003030C0u, sub_003030C0); /* call 0x003030C0 */

loc_00304B8C: ;
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00304B8F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00304BA0
 * Original: 0x00304BA0 - 0x00304D54 (436 bytes, 93 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00304BA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00304BA0: ;
    SET_LO8(edx, MEM8(0x7FDBF8));
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x00304BAFu); RECOMP_ABI_CALL(0x002B3F20u, sub_002B3F20); /* call 0x002B3F20 */

loc_00304BAF: ;
    esi = eax;
    PUSH32(esp, 0x00304BB6u); RECOMP_ABI_CALL(0x002F2E20u, sub_002F2E20); /* call 0x002F2E20 */

loc_00304BB6: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00304D4F; /* je: equal / zero */

loc_00304BC0: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, edi);
    PUSH32(esp, 0xFF);
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00304BD4u); RECOMP_ABI_CALL(0x00139840u, sub_00139840); /* call 0x00139840 */

loc_00304BD4: ;
    eax = MEM32(0x7FDBF8);
    edi = MEM32(esp + 0x20);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0xFF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0xFF (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00304C01; /* je: equal / zero */

loc_00304BE5: ;
    eax = MEM32(edi + 0x564);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x604)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(0x648F38); /* subss */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */

loc_00304C01: ;
    fp_push(MEMF(esp + 8)); /* fld float */
    SET_LO16(eax, MEM16(edi + 0x174));
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x648E18)); /* fmul dword ptr [0x648e18] */
    ecx = ZX16(LO16(eax));
    MEM32(esp + 8) = ecx;
    MEM16(esi + 0x172) = LO16(eax);
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    MEM16(esi + 0x174) = LO16(eax);
    if (recomp_fp_trig_in_range(fp_top())) fp_top() = recomp_x87_sin(fp_top()); /* fsin */
    MEM16(esi + 0x170) = LO16(eax);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x64ABBC)); /* fmul dword ptr [0x64abbc] */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    if (recomp_fp_trig_in_range(fp_top())) fp_top() = recomp_x87_cos(fp_top()); /* fcos */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x649234)); /* fmul dword ptr [0x649234] */
    fp_push((double)SMEM32(esp + 8)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x648F28)); /* fmul dword ptr [0x648f28] */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    if (recomp_fp_trig_in_range(fp_top())) fp_top() = recomp_x87_cos(fp_top()); /* fcos */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 2) & 7]); /* fmul st(2) */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    if (recomp_fp_trig_in_range(fp_top())) fp_top() = recomp_x87_sin(fp_top()); /* fsin */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    fp_top() = -fp_top(); /* fchs */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(edi + 0x78)); /* fadd dword ptr [edi + 0x78] */
    PUSH32(esp, 0x00304C6Eu); RECOMP_ABI_CALL(0x00471288u, sub_00471288); /* call 0x00471288 */

loc_00304C6E: ;
    edx = ZX8(MEM8(esi + 0x253));
    ecx = MEM32(0x84A1A0);
    edx = MEM32(ecx + edx * 4);
    MEM16(edx + 8) = LO16(eax);
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(edi + 0x7C)); /* fadd dword ptr [edi + 0x7c] */
    PUSH32(esp, 0x00304C8Au); RECOMP_ABI_CALL(0x00471288u, sub_00471288); /* call 0x00471288 */

loc_00304C8A: ;
    fp_push(MEMF(esp + 0x14)); /* fld float */
    ecx = ZX8(MEM8(esi + 0x253));
    edx = MEM32(0x84A1A0);
    ecx = MEM32(edx + ecx * 4);
    MEM16(ecx + 0xA) = LO16(eax);
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(edi + 0x80)); /* fadd dword ptr [edi + 0x80] */
    PUSH32(esp, 0x00304CADu); RECOMP_ABI_CALL(0x00471288u, sub_00471288); /* call 0x00471288 */

loc_00304CAD: ;
    edx = ZX8(MEM8(esi + 0x253));
    ecx = MEM32(0x84A1A0);
    edx = MEM32(ecx + edx * 4);
    MEM16(edx + 0xC) = LO16(eax);
    MEM8(esi + 0x135) = 0;
    MEM32(esi + 0x420) = 0;
    eax = MEM32(0x7FDBF8);
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0xFF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0xFF (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00304CFF; /* je: equal / zero */

loc_00304CDC: ;
    xmm0 = XMM_SCALAR(MEMF(edi + 0x7C)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x6490B4); /* addss */
    MEMF(esi + 0x7C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x648E14)); /* movss */
    MEM8(esi + 0x43D) = 4;
    goto loc_00304D3E;

loc_00304CFF: ;
    xmm0 = XMM_SCALAR(MEMF(0x58BCCC)); /* movss */
    MEMF(esi + 0x110) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x6498B8)); /* movss */
    MEMF(esi + 0xD0) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x648E2C)); /* movss */
    MEMF(esi + 0xD4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x648D10)); /* movss */
    MEM8(esi + 0x43D) = 2;

loc_00304D3E: ;
    MEMF(esi + 0x260) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x264) = xmm0.f[0]; /* movss */
    POP32(esp, edi);

loc_00304D4F: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00304D60
 * Original: 0x00304D60 - 0x00304D81 (33 bytes, 11 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00304D60(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00304D60: ;
    eax = MEM32(esp + 4);
    edx = MEM32(eax + 0xA4);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3C23D70A);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00304D7Du); RECOMP_ABI_CALL(0x002F1620u, sub_002F1620); /* call 0x002F1620 */

loc_00304D7D: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00304D90
 * Original: 0x00304D90 - 0x00304DA7 (23 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00304D90(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00304D90: ;
    _fa = (uint32_t)(MEM8(0x76F0E0)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x76F0E0), 1 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00304DA6; /* je: equal / zero */

loc_00304D99: ;
    eax = MEM32(esp + 4);
    eax = ZX16(MEM16(eax + 0x60));
    g_seh_ebp = ebp; sub_002CCD90(); return; /* tail jmp 0x002CCD90 */

loc_00304DA6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00304DB0
 * Original: 0x00304DB0 - 0x00304DBC (12 bytes, 3 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00304DB0(void)
{

loc_00304DB0: ;
    eax = MEM32(esp + 4);
    MEM8(eax + 0x13F) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_00304DC0
 * Original: 0x00304DC0 - 0x00304E67 (167 bytes, 49 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00304DC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00304DC0: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    _fa = (uint32_t)(MEM8(edi + 0x141)) & 0xFFu; _fb = (uint32_t)(0x2A) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi + 0x141), 0x2A (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00304E62; /* je: equal / zero */

loc_00304DD5: ;
    SET_LO16(eax, MEM16(0x7FDBFA));
    MEM8(esp + 0xC) = HI8(eax);
    MEM8(esp + 8) = LO8(eax);
    eax = MEM32(edi + 0x3C4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    esi = MEM32(0x7FDBF8);
    if (CMP_EQ(_fa, _fb)) goto loc_00304E21; /* je: equal / zero */

loc_00304DF4: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x00304DFEu); RECOMP_ABI_CALL(0x00036760u, sub_00036760); /* call 0x00036760 */

loc_00304DFE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00304E0F; /* je: equal / zero */

loc_00304E05: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 0xE4)); /* movss */
    goto loc_00304E12;

loc_00304E0F: ;
    xmm0 = xmm1; /* movaps */

loc_00304E12: ;
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((0) ? 0x80u : 0u) | (((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00304E2F; /* jp: parity */

loc_00304E21: ;
    xmm0 = XMM_SCALAR(MEMF(0x648E54)); /* movss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */

loc_00304E2F: ;
    _fa = (uint32_t)(LO16(esi)) & 0xFFFFu; _fb = (uint32_t)(0xFFFF) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(esi), 0xFFFF (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00304E4C; /* je: equal / zero */

loc_00304E36: ;
    eax = ZX16(LO16(esi));
    MEM32(esp + 8) = eax;
    fp_push((double)SMEM32(esp + 8)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(esp + 0x18)); /* fdiv dword ptr [esp + 0x18] */
    PUSH32(esp, 0x00304E4Au); RECOMP_ABI_CALL(0x00471288u, sub_00471288); /* call 0x00471288 */

loc_00304E4A: ;
    esi = eax;

loc_00304E4C: ;
    ecx = MEM32(esp + 0xC);
    edx = MEM32(esp + 0x10);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00304E5Eu); RECOMP_ABI_CALL(0x002CEFC0u, sub_002CEFC0); /* call 0x002CEFC0 */

loc_00304E5E: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);

loc_00304E62: ;
    POP32(esp, edi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00304E70
 * Original: 0x00304E70 - 0x00304ED1 (97 bytes, 23 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00304E70(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00304E70: ;
    ecx = MEM32(esp + 4);
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x228)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x648E60); /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((0) ? 0x80u : 0u) | (((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_00304ED0; /* jnp: not parity */

loc_00304E89: ;
    eax = (uint32_t)(int32_t)SMEM16(ecx + 0x38E);
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    _fca = xmm0.f[0]; _fcb = MEMF(ecx + 0x228); /* comiss */
    if ((_fca > _fcb)) goto loc_00304ED0; /* ja: above (unsigned >) (xmm0.f[0] vs MEMF(ecx + 0x228)) */

loc_00304E9D: ;
    SET_LO16(edx, 1);
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu; _fb = (uint32_t)(MEM16(ecx + 0x3AE)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edx), MEM16(ecx + 0x3AE) (16-bit) */
    _cf = (int)(_fa < _fb);
    edx = MEM32(0x7FDBF8);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    eax = eax & 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x29) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x29)) >> 32) & 1);
    eax = eax + 0x29;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = 0; /* logical op clears CF */
    edx = edx & 0xFFFF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if (0x18) _cf = (int)(((eax) >> (32 - (0x18))) & 1);
    eax = eax << 0x18;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _cf = 0; /* logical op clears CF */
    edx = edx | eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(0x7FDBF8) = edx;
    MEM32(esp + 4) = ecx;
    g_seh_ebp = ebp; sub_00304DC0(); return; /* tail jmp 0x00304DC0 */

loc_00304ED0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00304EE0
 * Original: 0x00304EE0 - 0x003050BE (478 bytes, 110 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00304EE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00304EE0: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x14);
    SET_LO8(eax, MEM8(esi + 0x1B5));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00304F0D; /* jne: not equal / not zero */

loc_00304EF2: ;
    xmm0 = XMM_SCALAR(MEMF(0x648D1C)); /* movss */
    MEMF(esi + 0xD4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esi + 0xD0) = xmm0.f[0]; /* movss */

loc_00304F0D: ;
    fp_push(MEMD(0x648F30)); /* fld double */
    xmm0.f[0] = (float)(int32_t)MEM32(0x7FDBF4); /* cvtsi2ss */
    if (recomp_fp_trig_in_range(fp_top())) fp_top() = recomp_x87_cos(fp_top()); /* fcos */
    xmm0.f[0] = xmm0.f[0] + MEMF(esi + 0x7C); /* addss */
    eax = ZX16(MEM16(esi + 0x170));
    MEMF(esi + 0x7C) = xmm0.f[0]; /* movss */
    MEM8(esi + 0x24B) = 0;
    MEM8(esi + 0x180) = 0;
    MEM32(esp + 0x14) = eax;
    eax = MEM32(esi + 0x68);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFF (32-bit) */
    fp_push((double)SMEM32(0x7FDBF8)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x648D10)); /* fmul dword ptr [0x648d10] */
    fp_st1() = RECOMP_FP_PC(fp_st1() * fp_top()); fp_pop(); /* fmulp st(1) */
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x648F28)); /* fmul dword ptr [0x648f28] */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    if (recomp_fp_trig_in_range(fp_top())) fp_top() = recomp_x87_cos(fp_top()); /* fcos */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 2) & 7]); /* fmul st(2) */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    if (recomp_fp_trig_in_range(fp_top())) fp_top() = recomp_x87_sin(fp_top()); /* fsin */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    fp_top() = -fp_top(); /* fchs */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    if (CMP_EQ(_fa, _fb)) goto loc_00304FE5; /* je: equal / zero */

loc_00304F78: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x205) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x205 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00304FE5; /* jge: greater or equal (signed >=) */

loc_00304F7F: ;
    ecx = MEM32(esi + 0x74);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00304FE5; /* je: equal / zero */

loc_00304F86: ;
    edx = MEM32(ecx + 0x50);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00304FE5; /* je: equal / zero */

loc_00304F8D: ;
    edx = MEM32(edx + 0xB4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00304FE5; /* je: equal / zero */

loc_00304F97: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3E7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x3E7 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00304FAA; /* je: equal / zero */

loc_00304F9F: ;
    _fa = (uint32_t)(MEM16(eax * 2 + 0x770390)) & 0xFFFFu; _fb = (uint32_t)(0xF) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax * 2 + 0x770390), 0xF (16-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00304FB1; /* ja: above (unsigned >) */

loc_00304FAA: ;
    PUSH32(esp, 0x00304FAFu); RECOMP_ABI_CALL(0x002F65F0u, sub_002F65F0); /* call 0x002F65F0 */

loc_00304FAF: ;
    goto loc_00304FE5;

loc_00304FB1: ;
    eax = MEM32(ecx + 0x50);
    edx = MEM32(eax + 0xBC);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(ecx, MEM16(eax + 0xB8));
    eax = MEM32(eax + 0xB4);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0xF);
    PUSH32(esp, eax);
    SET_LO8(edx, 1);
    eax = esi;
    PUSH32(esp, 0x00304FE2u); RECOMP_ABI_CALL(0x002F1790u, sub_002F1790); /* call 0x002F1790 */

loc_00304FE2: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00304FE5: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esi + 0x78); /* addss */
    MEMF(esi + 0x78) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esi + 0x80); /* addss */
    MEMF(esi + 0x80) = xmm0.f[0]; /* movss */
    edx = MEM32(esi + 0x78);
    eax = MEM32(esi + 0x7C);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    ecx = esi + 0x84;
    MEM32(ecx) = edx;
    edx = MEM32(esi + 0x80);
    MEM32(ecx + 4) = eax;
    MEM8(esi + 0x208) = MEM8(esi + 0x208) | 2;
    _fa = (uint32_t)(MEM8(esi + 0x208)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    eax = MEM32(esi + 0x568);
    MEM32(ecx + 8) = edx;
    MEMF(esi + 0xDC) = xmm0.f[0]; /* movss */
    MEM8(esi + 0x17D) = 0x14;
    MEM8(eax + 0x5C) = 0xC;
    ecx = MEM32(esi + 0x568);
    MEM8(ecx + 0x6C) = 0xA;
    edx = ZX16(MEM16(esi + 0x60));
    PUSH32(esp, 1);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0030505Eu); RECOMP_ABI_CALL(0x000808F0u, sub_000808F0); /* call 0x000808F0 */

loc_0030505E: ;
    xmm0 = XMM_SCALAR(MEMF(0x648F40)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x648F3C)); /* movss */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esi + 0x2E0) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x2E4) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x2E8) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x2EC) = xmm1.f[0]; /* movss */
    MEMF(esi + 0x2F0) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x2F4) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x2F8) = xmm1.f[0]; /* movss */
    MEMF(esi + 0x2FC) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x300) = xmm1.f[0]; /* movss */
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003050C0
 * Original: 0x003050C0 - 0x0030518C (204 bytes, 54 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003050C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003050C0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    xmm0 = XMM_SCALAR(MEMF(esi + 0x7C)); /* movss */
    eax = MEM32(esi + 0x68);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFF (32-bit) */
    xmm0.f[0] = xmm0.f[0] - MEMF(0x6493A8); /* subss */
    MEMF(esi + 0x7C) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x34) = xmm0.f[0]; /* movss */
    if (CMP_EQ(_fa, _fb)) goto loc_00305157; /* je: equal / zero */

loc_003050E6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x205) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x205 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00305157; /* jge: greater or equal (signed >=) */

loc_003050ED: ;
    ecx = MEM32(esi + 0x74);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00305157; /* je: equal / zero */

loc_003050F4: ;
    edx = MEM32(ecx + 0x50);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00305157; /* je: equal / zero */

loc_003050FB: ;
    edx = MEM32(edx + 0x1F14);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00305157; /* je: equal / zero */

loc_00305105: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3E7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x3E7 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00305119; /* je: equal / zero */

loc_0030510D: ;
    _fa = (uint32_t)(MEM16(eax * 2 + 0x770390)) & 0xFFFFu; _fb = (uint32_t)(0x297) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax * 2 + 0x770390), 0x297 (16-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00305120; /* ja: above (unsigned >) */

loc_00305119: ;
    PUSH32(esp, 0x0030511Eu); RECOMP_ABI_CALL(0x002F65F0u, sub_002F65F0); /* call 0x002F65F0 */

loc_0030511E: ;
    goto loc_00305157;

loc_00305120: ;
    eax = MEM32(ecx + 0x50);
    edx = MEM32(eax + 0x1F1C);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(ecx, MEM16(eax + 0x1F18));
    eax = MEM32(eax + 0x1F14);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x297);
    PUSH32(esp, eax);
    SET_LO8(edx, 1);
    eax = esi;
    PUSH32(esp, 0x00305154u); RECOMP_ABI_CALL(0x002F1790u, sub_002F1790); /* call 0x002F1790 */

loc_00305154: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00305157: ;
    SET_LO8(eax, MEM8(esi + 0x208));
    ecx = MEM32(esi + 0x568);
    SET_LO8(eax, LO8(eax) & 0xDF);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    MEM8(esi + 0x208) = LO8(eax);
    MEM8(esi + 0x17D) = 0;
    MEM8(esi + 0x180) = 0;
    MEM8(ecx + 0xD9) = 0;
    edx = MEM32(esi + 0x568);
    MEM8(edx + 0x5C) = 0xC;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00305190
 * Original: 0x00305190 - 0x003051A1 (17 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00305190(void)
{

loc_00305190: ;
    eax = MEM32(esp + 4);
    SET_LO8(ecx, MEM8(0x7FDBF8));
    MEM8(eax + 0x20B) = LO8(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_003051B0
 * Original: 0x003051B0 - 0x003051C8 (24 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003051B0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003051B0: ;
    eax = MEM32(0x7FDBF8);
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0xC);
    PUSH32(esp, 0x003051C4u); RECOMP_ABI_CALL(0x00021840u, sub_00021840); /* call 0x00021840 */

loc_003051C4: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_003051D0
 * Original: 0x003051D0 - 0x00305243 (115 bytes, 34 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003051D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_003051D0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00305241; /* je: equal / zero */

loc_003051D9: ;
    eax = MEM32(esi + 0x568);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00305241; /* je: equal / zero */

loc_003051E3: ;
    ecx = MEM32(eax + 0xA0);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x5D) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x5D (32-bit) */
    PUSH32(esp, edi);
    if (CMP_L(_fas, _fbs)) goto loc_003051FA; /* jl: less (signed <) */

loc_003051EF: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x61) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x61 (32-bit) */
    edi = MEM32(0x7FDBF4);
    if (CMP_LE(_fas, _fbs)) goto loc_00305200; /* jle: less or equal (signed <=) */

loc_003051FA: ;
    edi = MEM32(0x7FDBF8);

loc_00305200: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 0x514)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x648D1C); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00305240; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x648D1C)) */

loc_00305211: ;
    PUSH32(esp, 0x00305216u); RECOMP_ABI_CALL(0x003E2480u, sub_003E2480); /* call 0x003E2480 */

loc_00305216: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x64;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x32) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x32 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00305240; /* jg: greater (signed >) */

loc_00305223: ;
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, edi);
    eax = esi;
    PUSH32(esp, 0x00305230u); RECOMP_ABI_CALL(0x00021840u, sub_00021840); /* call 0x00021840 */

loc_00305230: ;
    edx = MEM32(esi + 0x568);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(edx + 0x4F5) = 1;

loc_00305240: ;
    POP32(esp, edi);

loc_00305241: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00305250
 * Original: 0x00305250 - 0x00305385 (309 bytes, 87 insns)
 * Category: game_debug
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00305250(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_00305250: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 8);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00305383; /* je: equal / zero */

loc_0030525D: ;
    ecx = MEM32(edi + 0x568);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00305383; /* je: equal / zero */

loc_0030526B: ;
    eax = MEM32(0x7FDBF8);
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_00305362; /* je: equal / zero */

loc_00305279: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_003052E1; /* je: equal / zero */

loc_0030527C: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00305383; /* jne: not equal / not zero */

loc_00305283: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x4F8)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x648CF8); /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((0) ? 0x80u : 0u) | (((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00305383; /* jp: parity */

loc_0030529C: ;
    SET_LO8(eax, MEM8(0x7819D5));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    eax = MEM32(0x7FDBF4);
    if (CMP_EQ(_fa, _fb)) goto loc_003052C5; /* je: equal / zero */

loc_003052AA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xB52) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xB52 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003052C5; /* jne: not equal / not zero */

loc_003052B1: ;
    ecx = MEM32(ecx + 0x3F4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003052C5; /* je: equal / zero */

loc_003052BB: ;
    _fa = (uint32_t)(MEM32(ecx + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x18), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00305383; /* jne: not equal / not zero */

loc_003052C5: ;
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    eax = MEM32(0x847024);
    ecx = MEM32(eax + 0x40);
    PUSH32(esp, ecx);
    eax = 2;
    PUSH32(esp, 0x003052DFu); RECOMP_ABI_CALL(0x00024FA0u, sub_00024FA0); /* call 0x00024FA0 */

loc_003052DF: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_003052E1: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x4F8)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x648CF8); /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((0) ? 0x80u : 0u) | (((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00305383; /* jp: parity */

loc_003052FA: ;
    xmm0 = XMM_SCALAR(MEMF(edi + 0x228)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x648E60); /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((0) ? 0x80u : 0u) | (((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    PUSH32(esp, ebx);
    ebx = MEM32(0x7FDBF4);
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_00305321; /* jnp: not parity */

loc_00305316: ;
    _fca = xmm0.f[0]; _fcb = MEMF(edi + 0x7C); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00305321; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(edi + 0x7C)) */

loc_0030531C: ;
    ebx = 4;

loc_00305321: ;
    ecx = MEM32(edi + 0x298);
    ecx = ecx & 0x1F;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = edi;
    PUSH32(esp, 0x00305331u); RECOMP_ABI_CALL(0x00021630u, sub_00021630); /* call 0x00021630 */

loc_00305331: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, ebx);
    if (CMP_G(_fas, _fbs)) goto loc_00305359; /* jg: greater (signed >) */

loc_00305336: ;
    SET_LO8(eax, MEM8(0x846FF8));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00305354; /* je: equal / zero */

loc_0030533F: ;
    PUSH32(esp, esi);
    esi = MEM32(0x847024);
    PUSH32(esp, 0x63837C);
    PUSH32(esp, 0x00305350u); RECOMP_ABI_CALL(0x00018B30u, sub_00018B30); /* call 0x00018B30 */

loc_00305350: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);

loc_00305354: ;
    eax = 0xBA0;

loc_00305359: ;
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    goto loc_0030536F;

loc_00305362: ;
    ecx = MEM32(0x7FDBF4);
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);

loc_0030536F: ;
    edx = MEM32(0x847024);
    eax = MEM32(edx + 0x40);
    PUSH32(esp, eax);
    eax = 2;
    PUSH32(esp, 0x00305383u); RECOMP_ABI_CALL(0x00024FA0u, sub_00024FA0); /* call 0x00024FA0 */

loc_00305383: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_00305390
 * Original: 0x00305390 - 0x003053A1 (17 bytes, 6 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00305390(void)
{

loc_00305390: ;
    eax = MEM32(0x7FDBF8);
    PUSH32(esp, eax);
    eax = MEM32(esp + 8);
    PUSH32(esp, 0x0030539Fu); RECOMP_ABI_CALL(0x00021960u, sub_00021960); /* call 0x00021960 */

loc_0030539F: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_003053B0
 * Original: 0x003053B0 - 0x003053E3 (51 bytes, 19 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003053B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003053B0: ;
    ecx = MEM32(0x7FDBF8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003053E2; /* je: equal / zero */

loc_003053BA: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0);
    _fb = (uint32_t)(0x78) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x78;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    eax = MEM32(0x847024);
    edx = MEM32(eax + 0x40);
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x003053E2u); RECOMP_ABI_CALL(0x00022D90u, sub_00022D90); /* call 0x00022D90 */

loc_003053E2: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003053F0
 * Original: 0x003053F0 - 0x00305416 (38 bytes, 11 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003053F0(void)
{

loc_003053F0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(0x7FDBF4);
    edx = MEM32(0x847024);
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, eax);
    eax = MEM32(edx + 0x40);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    eax = MEM32(0x7FDBF8);
    PUSH32(esp, 0x00305415u); RECOMP_ABI_CALL(0x00024FA0u, sub_00024FA0); /* call 0x00024FA0 */

loc_00305415: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00305420
 * Original: 0x00305420 - 0x0030545D (61 bytes, 11 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00305420(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00305420: ;
    eax = MEM32(esp + 4);
    edx = MEM32(eax + 0x568);
    ecx = MEM32(eax + 0xA4);
    _fa = (uint32_t)(MEM32(edx + 0x4FC)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx + 0x4FC), ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0030545C; /* je: equal / zero */

loc_00305438: ;
    MEM32(edx + 0x4FC) = ecx;
    xmm0.f[0] = (float)(int32_t)MEM32(0x7FDBF8); /* cvtsi2ss */
    eax = MEM32(eax + 0x568);
    xmm0.f[0] = xmm0.f[0] * MEMF(0x7F9F58); /* mulss */
    MEMF(eax + 0x4F8) = xmm0.f[0]; /* movss */

loc_0030545C: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00305460
 * Original: 0x00305460 - 0x003054DF (127 bytes, 44 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00305460(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00305460: ;
    eax = MEM32(0x7FDBF8);
    ecx = MEM32(0x84A5F8);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    edx = eax;
    PUSH32(esp, esi);
    esi = MEM32(0x84A5FC);
    ebx = ZX8(HI8(eax));
    edx = edx & 0xFF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    _fb = (uint32_t)(0x135) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x135;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00305488: ;
    _fa = (uint32_t)(MEM8(esi + eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003054A6; /* je: equal / zero */

loc_0030548E: ;
    edi = ZX8(MEM8(ecx + 0x7E));
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003054A6; /* jne: not equal / not zero */

loc_00305496: ;
    edi = MEM32(esp + 0x14);
    edi = ZX16(MEM16(edi + 0x60));
    ebp = ZX8(MEM8(ecx));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003054B9; /* je: equal / zero */

loc_003054A6: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x6D0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x6D0;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x80 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00305488; /* jl: less (signed <) */

loc_003054B4: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_003054B9: ;
    ecx = MEM32(0x84A5F8);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x6D0);
    SET_LO8(edx, MEM8(eax + ecx + 0x209));
    eax = eax + ecx + 0x209;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(edx, LO8(edx) & 0xFE);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    SET_LO8(edx, LO8(edx) | LO8(ebx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    POP32(esp, ebp);
    MEM8(eax) = LO8(edx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_003054E0
 * Original: 0x003054E0 - 0x003054F1 (17 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003054E0(void)
{

loc_003054E0: ;
    eax = MEM32(esp + 4);
    SET_LO8(ecx, MEM8(0x7FDBF8));
    MEM8(eax + 0x234) = LO8(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00305500
 * Original: 0x00305500 - 0x0030555A (90 bytes, 23 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00305500(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_00305500: ;
    eax = MEM32(0x7FDBF8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    eax = MEM32(esp + 4);
    if (CMP_EQ(_fa, _fb)) goto loc_00305536; /* je: equal / zero */

loc_0030550D: ;
    xmm1 = XMM_SCALAR(MEMF(eax + 0x118)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x64908C)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00305536; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_00305522: ;
    xmm1 = XMM_SCALAR(MEMF(eax + 0x110)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00305536; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_0030552F: ;
    MEM8(eax + 0x17D) = 0;

loc_00305536: ;
    ecx = ZX16(MEM16(eax + 0x60));
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0xAA);
    PUSH32(esp, 4);
    PUSH32(esp, 0);
    PUSH32(esp, 0x18);
    PUSH32(esp, 0);
    eax = 0x199;
    PUSH32(esp, 0x00305556u); RECOMP_ABI_CALL(0x00174300u, sub_00174300); /* call 0x00174300 */

loc_00305556: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00305560
 * Original: 0x00305560 - 0x0030556B (11 bytes, 3 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00305560(void)
{

loc_00305560: ;
    SET_LO8(eax, MEM8(0x7FDBF8));
    MEM8(0x7FAADB) = LO8(eax);
    esp += 4; return; /* ret */

}

/**
 * sub_00305570
 * Original: 0x00305570 - 0x00305585 (21 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00305570(void)
{

loc_00305570: ;
    eax = MEM32(esp + 4);
    xmm0.f[0] = (float)(int32_t)MEM32(0x7FDBF8); /* cvtsi2ss */
    MEMF(eax + 0x110) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00305590
 * Original: 0x00305590 - 0x003055A1 (17 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00305590(void)
{

loc_00305590: ;
    eax = MEM32(esp + 4);
    SET_LO8(ecx, MEM8(0x7FDBF8));
    MEM8(eax + 0x444) = LO8(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_003055B0
 * Original: 0x003055B0 - 0x003055D0 (32 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003055B0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003055B0: ;
    eax = MEM32(esp + 4);
    SET_LO8(ecx, MEM8(0x7FDBF8));
    MEM8(eax + 0x3EE) = LO8(ecx);
    edx = MEM32(0x7FDBF8);
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((8) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    MEM8(eax + 0x3EF) = LO8(edx);
    esp += 4; return; /* ret */

}

/**
 * sub_003055D0
 * Original: 0x003055D0 - 0x003055F1 (33 bytes, 15 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003055D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003055D0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = esi;
    PUSH32(esp, 0x003055DFu); RECOMP_ABI_CALL(0x00308AA0u, sub_00308AA0); /* call 0x00308AA0 */

loc_003055DF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003055EE; /* je: equal / zero */

loc_003055E3: ;
    PUSH32(esp, eax);
    eax = esi;
    PUSH32(esp, 0x003055EBu); RECOMP_ABI_CALL(0x002DD720u, sub_002DD720); /* call 0x002DD720 */

loc_003055EB: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003055EE: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00305600
 * Original: 0x00305600 - 0x00305683 (131 bytes, 36 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00305600(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_00305600: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    xmm0 = XMM_SCALAR(MEMF(esi + 0x228)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(0x648E38); /* subss */
    xmm1 = XMM_SCALAR(MEMF(esi + 0x7C)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_0030563B; /* ja: above (unsigned >) (xmm1.f[0] vs xmm0.f[0]) */

loc_0030561F: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x228)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x648E60); /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((0) ? 0x80u : 0u) | (((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_0030563B; /* jnp: not parity */

loc_00305634: ;
    eax = 9;
    goto loc_00305654;

loc_0030563B: ;
    PUSH32(esp, 0x00305640u); RECOMP_ABI_CALL(0x003E2480u, sub_003E2480); /* call 0x003E2480 */

loc_00305640: ;
    eax = eax & 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0030564F; /* jl: less (signed <) */

loc_00305648: ;
    _fb = (uint32_t)(0x612) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x612;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00305654;

loc_0030564F: ;
    _fb = (uint32_t)(0x8F) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x8F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00305654: ;
    SET_LO8(ecx, MEM8(0x7819D5));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00305681; /* jne: not equal / not zero */

loc_0030565E: ;
    _fa = (uint32_t)(MEM32(0x7FA1F8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x48) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x7FA1F8), 0x48 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00305681; /* je: equal / zero */

loc_00305667: ;
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    eax = MEM32(0x847024);
    ecx = MEM32(eax + 0x40);
    PUSH32(esp, ecx);
    eax = 2;
    PUSH32(esp, 0x00305681u); RECOMP_ABI_CALL(0x00024FA0u, sub_00024FA0); /* call 0x00024FA0 */

loc_00305681: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00305690
 * Original: 0x00305690 - 0x003056A1 (17 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00305690(void)
{

loc_00305690: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(0x7FDBF8);
    MEM32(eax + 0x530) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_003056B0
 * Original: 0x003056B0 - 0x003056C1 (17 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003056B0(void)
{

loc_003056B0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(0x7FDBF8);
    MEM32(eax + 0x534) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_003056D0
 * Original: 0x003056D0 - 0x003056E3 (19 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003056D0(void)
{

loc_003056D0: ;
    eax = MEM32(esp + 4);
    SET_LO16(ecx, MEM16(0x7FDBF8));
    MEM16(eax + 0x3AE) = LO16(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_003056F0
 * Original: 0x003056F0 - 0x00305715 (37 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003056F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003056F0: ;
    ecx = MEM32(0x7FDBF8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    eax = MEM32(esp + 4);
    if (CMP_NE(_fa, _fb)) goto loc_0030570E; /* jne: not equal / not zero */

loc_003056FE: ;
    ecx = MEM32(eax + 0x258);
    edx = MEM32(ecx + 0x28);
    MEM32(eax + 0x200) = edx;
    esp += 4; return; /* ret */

loc_0030570E: ;
    MEM32(eax + 0x200) = MEM32(eax + 0x200) | ecx;
    _fa = (uint32_t)(MEM32(eax + 0x200)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esp += 4; return; /* ret */

}

/**
 * sub_00305720
 * Original: 0x00305720 - 0x0030573B (27 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00305720(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00305720: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(0x7FDBF8);
    edx = MEM32(eax + 0x200);
    ecx = ~ecx;
    edx = edx & ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(eax + 0x200) = edx;
    esp += 4; return; /* ret */

}

/**
 * sub_00305740
 * Original: 0x00305740 - 0x00305775 (53 bytes, 13 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00305740(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00305740: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(ecx + 0x568);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0030575D; /* je: equal / zero */

loc_0030574E: ;
    SET_LO8(edx, MEM8(0x7FDBF8));
    SET_LO8(edx, LO8(edx) & 0x7F);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    MEM8(eax + 0xB2) = LO8(edx);

loc_0030575D: ;
    eax = MEM32(0x7FDBF8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00305774; /* jne: not equal / not zero */

loc_00305766: ;
    SET_LO16(eax, MEM16(ecx + 0x174));
    MEM16(ecx + 0x170) = LO16(eax);

loc_00305774: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00305780
 * Original: 0x00305780 - 0x003057B9 (57 bytes, 21 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00305780(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00305780: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    esi = 2;
    goto loc_00305790;

    /* nop */

loc_00305790: ;
    ecx = ZX16(MEM16(edi + 0x60));
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0xAA);
    PUSH32(esp, 4);
    PUSH32(esp, 0xC);
    PUSH32(esp, 0x12);
    PUSH32(esp, 0xA);
    eax = 0x199;
    PUSH32(esp, 0x003057B0u); RECOMP_ABI_CALL(0x00174300u, sub_00174300); /* call 0x00174300 */

loc_003057B0: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00305790; /* jne: not equal / not zero */

loc_003057B6: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003057C0
 * Original: 0x003057C0 - 0x003058D0 (272 bytes, 98 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003057C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003057C0: ;
    eax = MEM32(0x7FDBF8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xD) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xD (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_A(_fa, _fb)) goto loc_0030588F; /* ja: above (unsigned >) */

loc_003057CE: ;
    PUSH32(esp, esi);
    { uint32_t _jt = MEM32(eax * 4 + 0x305890); /* switch: 14 entries, 10 targets */
    if (_jt == 0x003057D6u) goto loc_003057D6;
    if (_jt == 0x0030581Cu) goto loc_0030581C;
    if (_jt == 0x00305822u) goto loc_00305822;
    if (_jt == 0x00305830u) goto loc_00305830;
    if (_jt == 0x0030583Eu) goto loc_0030583E;
    if (_jt == 0x00305849u) goto loc_00305849;
    if (_jt == 0x00305859u) goto loc_00305859;
    if (_jt == 0x00305869u) goto loc_00305869;
    if (_jt == 0x00305873u) goto loc_00305873;
    if (_jt == 0x00305881u) goto loc_00305881;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_003057D6: ;
    ecx = MEM32(esp + 8);
    xmm0 = XMM_SCALAR(MEMF(ecx + 0xDC)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x648CF8); /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((0) ? 0x80u : 0u) | (((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0030588E; /* jp: parity */

loc_003057F3: ;
    eax = MEM32(ecx + 0x80);
    edx = MEM32(ecx + 0x7C);
    PUSH32(esp, 0x3DCCCCCD);
    PUSH32(esp, 0x3DCCCCCD);
    PUSH32(esp, 7);
    PUSH32(esp, 0x1E);
    PUSH32(esp, 0x1E);
    PUSH32(esp, eax);
    eax = MEM32(ecx + 0x78);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00305817u); RECOMP_ABI_CALL(0x00114C10u, sub_00114C10); /* call 0x00114C10 */

loc_00305817: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x20)) >> 32) & 1);
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0030581C: ;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_003E2480(); return; /* tail jmp 0x003E2480 */

loc_00305822: ;
    ecx = MEM32(esp + 8);
    eax = ZX16(MEM16(ecx + 0x60));
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_000DDE20(); return; /* tail jmp 0x000DDE20 */

loc_00305830: ;
    edx = MEM32(esp + 8);
    eax = ZX16(MEM16(edx + 0x60));
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_000DE080(); return; /* tail jmp 0x000DE080 */

loc_0030583E: ;
    esi = MEM32(esp + 8);
    PUSH32(esp, 0x00305847u); RECOMP_ABI_CALL(0x003058D0u, sub_003058D0); /* call 0x003058D0 */

loc_00305847: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00305849: ;
    esi = MEM32(esp + 8);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00305854u); RECOMP_ABI_CALL(0x00165650u, sub_00165650); /* call 0x00165650 */

loc_00305854: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00305859: ;
    esi = MEM32(esp + 8);
    PUSH32(esp, 1);
    PUSH32(esp, 0x00305864u); RECOMP_ABI_CALL(0x00165650u, sub_00165650); /* call 0x00165650 */

loc_00305864: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00305869: ;
    eax = MEM32(esp + 8);
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_003058F0(); return; /* tail jmp 0x003058F0 */

loc_00305873: ;
    eax = MEM32(esp + 8);
    eax = ZX16(MEM16(eax + 0x60));
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_000DE080(); return; /* tail jmp 0x000DE080 */

loc_00305881: ;
    ecx = MEM32(esp + 8);
    esi = ZX16(MEM16(ecx + 0x60));
    PUSH32(esp, 0x0030588Eu); RECOMP_ABI_CALL(0x001655B0u, sub_001655B0); /* call 0x001655B0 */

loc_0030588E: ;
    POP32(esp, esi);

loc_0030588F: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003058D0
 * Original: 0x003058D0 - 0x003058E3 (19 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003058D0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003058D0: ;
    PUSH32(esp, 0x3FA66666);
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0x003058DFu); RECOMP_ABI_CALL(0x000DBDA0u, sub_000DBDA0); /* call 0x000DBDA0 */

loc_003058DF: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_003058F0
 * Original: 0x003058F0 - 0x0030594D (93 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003058F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_003058F0: ;
    PUSH32(esp, esi);
    esi = eax;
    _fa = (uint32_t)(MEM32(0x7FA1F8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x13) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x7FA1F8), 0x13 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00305939; /* jne: not equal / not zero */

loc_003058FC: ;
    _fa = (uint32_t)(MEM32(esi + 0x68)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x66) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x68), 0x66 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00305939; /* jne: not equal / not zero */

loc_00305902: ;
    xmm0 = XMM_SCALAR(MEMF(0x7F9F5C)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x648F08); /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((0) ? 0x80u : 0u) | (((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00305928; /* jp: parity */

loc_00305917: ;
    xmm0 = XMM_SCALAR(MEMF(0x648F04)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x84A628); /* comiss */
    goto loc_00305937;

loc_00305928: ;
    xmm0 = XMM_SCALAR(MEMF(0x84A628)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x648F00); /* comiss */

loc_00305937: ;
    if ((_fca > _fcb)) goto loc_0030594B; /* ja: above (unsigned >) (xmm0.f[0] vs MEMF(0x648F00)) */

loc_00305939: ;
    PUSH32(esp, 0x3FA66666);
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0x00305948u); RECOMP_ABI_CALL(0x000DBDA0u, sub_000DBDA0); /* call 0x000DBDA0 */

loc_00305948: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0030594B: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00305950
 * Original: 0x00305950 - 0x00305A3B (235 bytes, 94 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00305950(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00305950: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = MEM32(ebp);
    ecx = esi;
    ecx = ecx & 0x7FFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xDDA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xDDA (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0030599E; /* jb: below (unsigned <) */

loc_00305969: ;
    edx = ZX8(MEM8(eax + 0x486));
    edx = MEM32(edx * 4 + 0x6CB4A8);
    ecx = MEM32(edx + ecx * 4 + -14184);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0030598A; /* jne: not equal / not zero */

loc_00305982: ;
    POP32(esp, esi);
    MEM32(ebp) = ecx;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0030598A: ;
    esi = esi & 0xFF200000u;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if ((_fa == 0)) goto loc_0030599C; /* je: equal / zero */

loc_00305992: ;
    ecx = ecx & 0xFFFFFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = esi | ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_0030599E;

loc_0030599C: ;
    esi = ecx;

loc_0030599E: ;
    PUSH32(esp, edi);
    edi = esi;
    edi = edi & 0x7FFF;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x200000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, 0x200000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003059E6; /* je: equal / zero */

loc_003059AF: ;
    ecx = MEM32(esp + 0x14);
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_003059DD; /* je: equal / zero */

loc_003059B8: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_003059CE; /* je: equal / zero */

loc_003059BB: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_003059E6; /* jne: not equal / not zero */

loc_003059BE: ;
    PUSH32(esp, 0x003059C3u); RECOMP_ABI_CALL(0x0001B140u, sub_0001B140); /* call 0x0001B140 */

loc_003059C3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003059E6; /* jne: not equal / not zero */

loc_003059C8: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_003059CE: ;
    PUSH32(esp, 0x003059D3u); RECOMP_ABI_CALL(0x00021510u, sub_00021510); /* call 0x00021510 */

loc_003059D3: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003059E6; /* je: equal / zero */

loc_003059D7: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_003059DD: ;
    PUSH32(esp, 0x003059E2u); RECOMP_ABI_CALL(0x000214C0u, sub_000214C0); /* call 0x000214C0 */

loc_003059E2: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003059C8; /* jne: not equal / not zero */

loc_003059E6: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xDDA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0xDDA (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003059FB; /* jl: less (signed <) */

loc_003059EE: ;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ebp) = 0;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_003059FB: ;
    PUSH32(esp, ebx);
    ebx = esi;
    ebx = ebx >> 0x10;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00305A2A; /* je: equal / zero */

loc_00305A05: ;
    PUSH32(esp, 0x00305A0Au); RECOMP_ABI_CALL(0x003E2480u, sub_003E2480); /* call 0x003E2480 */

loc_00305A0A: ;
    eax = eax & 0xFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = esi >> 0x18;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00305A34; /* jb: below (unsigned <) */

loc_00305A16: ;
    ebx = ebx & 0x1F;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = edi;
    if ((_fa == 0)) goto loc_00305A2A; /* je: equal / zero */

loc_00305A1D: ;
    PUSH32(esp, edi);
    edi = ebx;
    PUSH32(esp, 0x00305A25u); RECOMP_ABI_CALL(0x000213E0u, sub_000213E0); /* call 0x000213E0 */

loc_00305A25: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = eax;

loc_00305A2A: ;
    POP32(esp, ebx);
    POP32(esp, edi);
    MEM32(ebp) = esi;
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00305A34: ;
    POP32(esp, ebx);
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00305A40
 * Original: 0x00305A40 - 0x00305A69 (41 bytes, 15 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00305A40(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00305A40: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, 0);
    PUSH32(esp, 0x7FDBF8);
    eax = esi;
    PUSH32(esp, 0x00305A53u); RECOMP_ABI_CALL(0x00305950u, sub_00305950); /* call 0x00305950 */

loc_00305A53: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00305A67; /* je: equal / zero */

loc_00305A5A: ;
    eax = MEM32(0x7FDBF8);
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00302AA0(); return; /* tail jmp 0x00302AA0 */

loc_00305A67: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00305A70
 * Original: 0x00305A70 - 0x00305AAC (60 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00305A70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00305A70: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, 0);
    PUSH32(esp, 0x7FDBF8);
    eax = esi;
    PUSH32(esp, 0x00305A83u); RECOMP_ABI_CALL(0x00305950u, sub_00305950); /* call 0x00305950 */

loc_00305A83: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00305AAA; /* je: equal / zero */

loc_00305A8A: ;
    eax = MEM32(0x7FDBF8);
    ecx = MEM32(0x847024);
    edx = MEM32(ecx + 0x40);
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    eax = 2;
    PUSH32(esp, 0x00305AAAu); RECOMP_ABI_CALL(0x00024FA0u, sub_00024FA0); /* call 0x00024FA0 */

loc_00305AAA: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00305AB0
 * Original: 0x00305AB0 - 0x00305B28 (120 bytes, 33 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00305AB0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00305AB0: ;
    _fa = (uint32_t)(MEM32(0x7FA1F8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x13) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x7FA1F8), 0x13 (32-bit) */
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    if (CMP_NE(_fa, _fb)) goto loc_00305AFB; /* jne: not equal / not zero */

loc_00305ABE: ;
    _fa = (uint32_t)(MEM32(esi + 0x68)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x66) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x68), 0x66 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00305AFB; /* jne: not equal / not zero */

loc_00305AC4: ;
    xmm0 = XMM_SCALAR(MEMF(0x7F9F5C)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x648F08); /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((0) ? 0x80u : 0u) | (((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00305AEA; /* jp: parity */

loc_00305AD9: ;
    xmm0 = XMM_SCALAR(MEMF(0x648F04)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x84A628); /* comiss */
    goto loc_00305AF9;

loc_00305AEA: ;
    xmm0 = XMM_SCALAR(MEMF(0x84A628)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x648F00); /* comiss */

loc_00305AF9: ;
    if ((_fca > _fcb)) goto loc_00305B26; /* ja: above (unsigned >) (xmm0.f[0] vs MEMF(0x84A628)) */

loc_00305AFB: ;
    SET_LO8(eax, MEM8(0x7819D5));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00305B26; /* jne: not equal / not zero */

loc_00305B04: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x7FDBF8);
    eax = esi;
    PUSH32(esp, 0x00305B12u); RECOMP_ABI_CALL(0x00305950u, sub_00305950); /* call 0x00305950 */

loc_00305B12: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00305B26; /* je: equal / zero */

loc_00305B19: ;
    eax = MEM32(0x7FDBF8);
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00302AA0(); return; /* tail jmp 0x00302AA0 */

loc_00305B26: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00305B30
 * Original: 0x00305B30 - 0x00305B62 (50 bytes, 18 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00305B30(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00305B30: ;
    SET_LO8(eax, MEM8(0x7819D5));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00305B61; /* jne: not equal / not zero */

loc_00305B39: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, 0);
    PUSH32(esp, 0x7FDBF8);
    eax = esi;
    PUSH32(esp, 0x00305B4Cu); RECOMP_ABI_CALL(0x00305950u, sub_00305950); /* call 0x00305950 */

loc_00305B4C: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00305B60; /* je: equal / zero */

loc_00305B53: ;
    eax = MEM32(0x7FDBF8);
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00302AA0(); return; /* tail jmp 0x00302AA0 */

loc_00305B60: ;
    POP32(esp, esi);

loc_00305B61: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00305B70
 * Original: 0x00305B70 - 0x00305BA6 (54 bytes, 15 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00305B70(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00305B70: ;
    SET_LO8(eax, MEM8(0x7819D5));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00305BA5; /* jne: not equal / not zero */

loc_00305B79: ;
    ecx = MEM32(esp + 4);
    xmm0 = XMM_SCALAR(MEMF(ecx + 0xDC)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x648CF8); /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((0) ? 0x80u : 0u) | (((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00305BA5; /* jp: parity */

loc_00305B92: ;
    SET_LO8(eax, MEM8(ecx + 0x214));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00305BA5; /* jne: not equal / not zero */

loc_00305B9C: ;
    MEM32(esp + 4) = ecx;
    g_seh_ebp = ebp; sub_00305A40(); return; /* tail jmp 0x00305A40 */

loc_00305BA5: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00305BB0
 * Original: 0x00305BB0 - 0x00305BFC (76 bytes, 28 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00305BB0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00305BB0: ;
    SET_LO8(eax, MEM8(0x7819D5));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00305BFB; /* jne: not equal / not zero */

loc_00305BB9: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, 0);
    PUSH32(esp, 0x7FDBF8);
    eax = esi;
    PUSH32(esp, 0x00305BCCu); RECOMP_ABI_CALL(0x00305950u, sub_00305950); /* call 0x00305950 */

loc_00305BCC: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00305BFA; /* je: equal / zero */

loc_00305BD3: ;
    ecx = MEM32(0x847024);
    ecx = MEM32(ecx + 0x40);
    PUSH32(esp, edi);
    edi = MEM32(0x7FDBF8);
    eax = edi;
    PUSH32(esp, 0x00305BEAu); RECOMP_ABI_CALL(0x00024D90u, sub_00024D90); /* call 0x00024D90 */

loc_00305BEA: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00305BF9; /* jne: not equal / not zero */

loc_00305BEE: ;
    eax = edi;
    POP32(esp, edi);
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00302AA0(); return; /* tail jmp 0x00302AA0 */

loc_00305BF9: ;
    POP32(esp, edi);

loc_00305BFA: ;
    POP32(esp, esi);

loc_00305BFB: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00305C00
 * Original: 0x00305C00 - 0x00305CD0 (208 bytes, 69 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00305C00(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00305C00: ;
    SET_LO8(eax, MEM8(0x7819D5));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00305CCF; /* jne: not equal / not zero */

loc_00305C0D: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = MEM32(0x7FDBF8);
    eax = esi;
    eax = eax & 0x7FFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xDDA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xDDA (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00305C5B; /* jb: below (unsigned <) */

loc_00305C27: ;
    ecx = ZX8(MEM8(ebx + 0x486));
    edx = MEM32(ecx * 4 + 0x6CB4A8);
    eax = MEM32(edx + eax * 4 + -14184);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00305C48; /* jne: not equal / not zero */

loc_00305C40: ;
    POP32(esp, esi);
    MEM32(0x7FDBF8) = eax;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00305C48: ;
    esi = esi & 0xFF200000u;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if ((_fa == 0)) goto loc_00305C59; /* je: equal / zero */

loc_00305C50: ;
    eax = eax & 0xFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = esi | eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_00305C5B;

loc_00305C59: ;
    esi = eax;

loc_00305C5B: ;
    PUSH32(esp, ebp);
    ebp = esi;
    ebp = ebp & 0x7FFF;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x200000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, 0x200000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00305C76; /* je: equal / zero */

loc_00305C6C: ;
    PUSH32(esp, 0x00305C71u); RECOMP_ABI_CALL(0x0001B140u, sub_0001B140); /* call 0x0001B140 */

loc_00305C71: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00305CCC; /* je: equal / zero */

loc_00305C76: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0xDDA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0xDDA (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00305C8C; /* jl: less (signed <) */

loc_00305C7E: ;
    POP32(esp, ebp);
    POP32(esp, esi);
    MEM32(0x7FDBF8) = 0;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00305C8C: ;
    PUSH32(esp, edi);
    edi = esi;
    edi = edi >> 0x10;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00305CB9; /* je: equal / zero */

loc_00305C96: ;
    PUSH32(esp, 0x00305C9Bu); RECOMP_ABI_CALL(0x003E2480u, sub_003E2480); /* call 0x003E2480 */

loc_00305C9B: ;
    eax = eax & 0xFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = esi >> 0x18;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00305CCB; /* jb: below (unsigned <) */

loc_00305CA7: ;
    edi = edi & 0x1F;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = ebp;
    if ((_fa == 0)) goto loc_00305CB9; /* je: equal / zero */

loc_00305CAE: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x00305CB4u); RECOMP_ABI_CALL(0x000213E0u, sub_000213E0); /* call 0x000213E0 */

loc_00305CB4: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = eax;

loc_00305CB9: ;
    PUSH32(esp, 1);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    MEM32(0x7FDBF8) = esi;
    PUSH32(esp, 0x00305CC8u); RECOMP_ABI_CALL(0x0001AF70u, sub_0001AF70); /* call 0x0001AF70 */

loc_00305CC8: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00305CCB: ;
    POP32(esp, edi);

loc_00305CCC: ;
    POP32(esp, ebp);
    POP32(esp, esi);
    POP32(esp, ebx);

loc_00305CCF: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00305CD0
 * Original: 0x00305CD0 - 0x00305DA0 (208 bytes, 69 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00305CD0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00305CD0: ;
    SET_LO8(eax, MEM8(0x7819D5));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00305D9F; /* jne: not equal / not zero */

loc_00305CDD: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = MEM32(0x7FDBF8);
    eax = esi;
    eax = eax & 0x7FFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xDDA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xDDA (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00305D2B; /* jb: below (unsigned <) */

loc_00305CF7: ;
    ecx = ZX8(MEM8(ebx + 0x486));
    edx = MEM32(ecx * 4 + 0x6CB4A8);
    eax = MEM32(edx + eax * 4 + -14184);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00305D18; /* jne: not equal / not zero */

loc_00305D10: ;
    POP32(esp, esi);
    MEM32(0x7FDBF8) = eax;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00305D18: ;
    esi = esi & 0xFF200000u;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if ((_fa == 0)) goto loc_00305D29; /* je: equal / zero */

loc_00305D20: ;
    eax = eax & 0xFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = esi | eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_00305D2B;

loc_00305D29: ;
    esi = eax;

loc_00305D2B: ;
    PUSH32(esp, ebp);
    ebp = esi;
    ebp = ebp & 0x7FFF;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x200000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, 0x200000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00305D46; /* je: equal / zero */

loc_00305D3C: ;
    PUSH32(esp, 0x00305D41u); RECOMP_ABI_CALL(0x0001B140u, sub_0001B140); /* call 0x0001B140 */

loc_00305D41: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00305D9C; /* je: equal / zero */

loc_00305D46: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0xDDA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0xDDA (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00305D5C; /* jl: less (signed <) */

loc_00305D4E: ;
    POP32(esp, ebp);
    POP32(esp, esi);
    MEM32(0x7FDBF8) = 0;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00305D5C: ;
    PUSH32(esp, edi);
    edi = esi;
    edi = edi >> 0x10;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00305D89; /* je: equal / zero */

loc_00305D66: ;
    PUSH32(esp, 0x00305D6Bu); RECOMP_ABI_CALL(0x003E2480u, sub_003E2480); /* call 0x003E2480 */

loc_00305D6B: ;
    eax = eax & 0xFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = esi >> 0x18;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00305D9B; /* jb: below (unsigned <) */

loc_00305D77: ;
    edi = edi & 0x1F;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = ebp;
    if ((_fa == 0)) goto loc_00305D89; /* je: equal / zero */

loc_00305D7E: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x00305D84u); RECOMP_ABI_CALL(0x000213E0u, sub_000213E0); /* call 0x000213E0 */

loc_00305D84: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = eax;

loc_00305D89: ;
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    MEM32(0x7FDBF8) = esi;
    PUSH32(esp, 0x00305D98u); RECOMP_ABI_CALL(0x0001AF70u, sub_0001AF70); /* call 0x0001AF70 */

loc_00305D98: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00305D9B: ;
    POP32(esp, edi);

loc_00305D9C: ;
    POP32(esp, ebp);
    POP32(esp, esi);
    POP32(esp, ebx);

loc_00305D9F: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00305D5C
 * Original: 0x00305D5C - 0x00305DA0 (68 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00305D5C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00305D5C: ;
    PUSH32(esp, edi);
    edi = esi;
    edi = edi >> 0x10;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00305D89; /* je: equal / zero */

loc_00305D66: ;
    PUSH32(esp, 0x00305D6Bu); RECOMP_ABI_CALL(0x003E2480u, sub_003E2480); /* call 0x003E2480 */

loc_00305D6B: ;
    eax = eax & 0xFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = esi >> 0x18;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00305D9B; /* jb: below (unsigned <) */

loc_00305D77: ;
    edi = edi & 0x1F;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = ebp;
    if ((_fa == 0)) goto loc_00305D89; /* je: equal / zero */

loc_00305D7E: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x00305D84u); RECOMP_ABI_CALL(0x000213E0u, sub_000213E0); /* call 0x000213E0 */

loc_00305D84: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = eax;

loc_00305D89: ;
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    MEM32(0x7FDBF8) = esi;
    PUSH32(esp, 0x00305D98u); RECOMP_ABI_CALL(0x0001AF70u, sub_0001AF70); /* call 0x0001AF70 */

loc_00305D98: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00305D9B: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00305DA0
 * Original: 0x00305DA0 - 0x00305E40 (160 bytes, 55 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00305DA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00305DA0: ;
    SET_LO8(eax, MEM8(0x7819D5));
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00305E37; /* jne: not equal / not zero */

loc_00305DB0: ;
    ecx = MEM32(0x7FDBF8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00305E37; /* je: equal / zero */

loc_00305DBA: ;
    eax = MEM32(0x7FDBF4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_00305E27; /* je: equal / zero */

loc_00305DC6: ;
    MEM32(esp + 4) = eax;
    eax = MEM32(0x7FDBF0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    esi = 2;
    if (CMP_EQ(_fa, _fb)) goto loc_00305E06; /* je: equal / zero */

loc_00305DD9: ;
    MEM32(esp + 0xC) = eax;
    eax = MEM32(0x7FDBEC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    esi = 3;
    if (CMP_EQ(_fa, _fb)) goto loc_00305E06; /* je: equal / zero */

loc_00305DEB: ;
    MEM32(esp + 0x10) = eax;
    eax = MEM32(0x7FDBE8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    esi = 4;
    if (CMP_EQ(_fa, _fb)) goto loc_00305E06; /* je: equal / zero */

loc_00305DFD: ;
    MEM32(esp + 0x14) = eax;
    esi = 5;

loc_00305E06: ;
    eax = MEM32(esp + 0x1C);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00305E12u); RECOMP_ABI_CALL(0x003E2480u, sub_003E2480); /* call 0x003E2480 */

loc_00305E12: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)esi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)esi)); }
    ecx = MEM32(esp + edx * 4 + 0xC);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00305E1Fu); RECOMP_ABI_CALL(0x0001AF70u, sub_0001AF70); /* call 0x0001AF70 */

loc_00305E1F: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00305E27: ;
    edx = MEM32(esp + 0x18);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00305E34u); RECOMP_ABI_CALL(0x0001AF70u, sub_0001AF70); /* call 0x0001AF70 */

loc_00305E34: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00305E37: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00305E40
 * Original: 0x00305E40 - 0x00305F33 (243 bytes, 84 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00305E40(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00305E40: ;
    SET_LO8(eax, MEM8(0x7819D5));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00305F32; /* jne: not equal / not zero */

loc_00305E4D: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = MEM32(0x7FDBF8);
    eax = esi;
    eax = eax & 0x7FFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xDDA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xDDA (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00305E9B; /* jb: below (unsigned <) */

loc_00305E67: ;
    ecx = ZX8(MEM8(ebx + 0x486));
    edx = MEM32(ecx * 4 + 0x6CB4A8);
    eax = MEM32(edx + eax * 4 + -14184);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00305E88; /* jne: not equal / not zero */

loc_00305E80: ;
    POP32(esp, esi);
    MEM32(0x7FDBF8) = eax;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00305E88: ;
    esi = esi & 0xFF200000u;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if ((_fa == 0)) goto loc_00305E99; /* je: equal / zero */

loc_00305E90: ;
    eax = eax & 0xFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = esi | eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_00305E9B;

loc_00305E99: ;
    esi = eax;

loc_00305E9B: ;
    PUSH32(esp, edi);
    edi = esi;
    edi = edi & 0x7FFF;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x200000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, 0x200000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00305EB7; /* je: equal / zero */

loc_00305EAC: ;
    eax = ebx;
    PUSH32(esp, 0x00305EB3u); RECOMP_ABI_CALL(0x00021510u, sub_00021510); /* call 0x00021510 */

loc_00305EB3: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00305F2F; /* jne: not equal / not zero */

loc_00305EB7: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xDDA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0xDDA (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00305ECD; /* jl: less (signed <) */

loc_00305EBF: ;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(0x7FDBF8) = 0;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00305ECD: ;
    PUSH32(esp, ebp);
    ebp = esi;
    ebp = ebp >> 0x10;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00305EFC; /* je: equal / zero */

loc_00305ED7: ;
    PUSH32(esp, 0x00305EDCu); RECOMP_ABI_CALL(0x003E2480u, sub_003E2480); /* call 0x003E2480 */

loc_00305EDC: ;
    eax = eax & 0xFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = esi >> 0x18;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00305F2E; /* jb: below (unsigned <) */

loc_00305EE8: ;
    ebp = ebp & 0x1F;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = edi;
    if ((_fa == 0)) goto loc_00305EFC; /* je: equal / zero */

loc_00305EEF: ;
    PUSH32(esp, edi);
    edi = ebp;
    PUSH32(esp, 0x00305EF7u); RECOMP_ABI_CALL(0x000213E0u, sub_000213E0); /* call 0x000213E0 */

loc_00305EF7: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = eax;

loc_00305EFC: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    MEM32(0x7FDBF8) = esi;
    if (CMP_NE(_fa, _fb)) goto loc_00305F14; /* jne: not equal / not zero */

loc_00305F06: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00305F0Cu); RECOMP_ABI_CALL(0x000215C0u, sub_000215C0); /* call 0x000215C0 */

loc_00305F0C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebp);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00305F14: ;
    eax = MEM32(0x847024);
    ecx = MEM32(eax + 0x40);
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    eax = 0x4000001;
    PUSH32(esp, 0x00305F2Eu); RECOMP_ABI_CALL(0x00024FA0u, sub_00024FA0); /* call 0x00024FA0 */

loc_00305F2E: ;
    POP32(esp, ebp);

loc_00305F2F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);

loc_00305F32: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00305F40
 * Original: 0x00305F40 - 0x0030605F (287 bytes, 95 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00305F40(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00305F40: ;
    SET_LO8(eax, MEM8(0x7819D5));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0030605E; /* jne: not equal / not zero */

loc_00305F4D: ;
    eax = MEM32(0x8498D4);
    PUSH32(esp, ebp);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00305F63; /* je: equal / zero */

loc_00305F59: ;
    _fa = (uint32_t)(MEM8(eax + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 4), 1 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0030605D; /* je: equal / zero */

loc_00305F63: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    esi = MEM32(0x7FDBF8);
    eax = esi;
    eax = eax & 0x7FFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xDDA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xDDA (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00305FB3; /* jb: below (unsigned <) */

loc_00305F7D: ;
    ecx = ZX8(MEM8(ebx + 0x486));
    edx = MEM32(ecx * 4 + 0x6CB4A8);
    eax = MEM32(edx + eax * 4 + -14184);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00305FA0; /* jne: not equal / not zero */

loc_00305F96: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    MEM32(0x7FDBF8) = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00305FA0: ;
    esi = esi & 0xFF200000u;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if ((_fa == 0)) goto loc_00305FB1; /* je: equal / zero */

loc_00305FA8: ;
    eax = eax & 0xFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = esi | eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_00305FB3;

loc_00305FB1: ;
    esi = eax;

loc_00305FB3: ;
    PUSH32(esp, edi);
    edi = esi;
    edi = edi & 0x7FFF;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x200000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, 0x200000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00305FD3; /* je: equal / zero */

loc_00305FC4: ;
    eax = ebx;
    PUSH32(esp, 0x00305FCBu); RECOMP_ABI_CALL(0x00021510u, sub_00021510); /* call 0x00021510 */

loc_00305FCB: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0030605A; /* jne: not equal / not zero */

loc_00305FD3: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xDDA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0xDDA (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00305FE6; /* jl: less (signed <) */

loc_00305FDB: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    MEM32(0x7FDBF8) = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00305FE6: ;
    ebp = esi;
    ebp = ebp >> 0x10;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00306014; /* je: equal / zero */

loc_00305FEF: ;
    PUSH32(esp, 0x00305FF4u); RECOMP_ABI_CALL(0x003E2480u, sub_003E2480); /* call 0x003E2480 */

loc_00305FF4: ;
    eax = eax & 0xFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = esi >> 0x18;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0030605A; /* jb: below (unsigned <) */

loc_00306000: ;
    ebp = ebp & 0x1F;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = edi;
    if ((_fa == 0)) goto loc_00306014; /* je: equal / zero */

loc_00306007: ;
    PUSH32(esp, edi);
    edi = ebp;
    PUSH32(esp, 0x0030600Fu); RECOMP_ABI_CALL(0x000213E0u, sub_000213E0); /* call 0x000213E0 */

loc_0030600F: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = eax;

loc_00306014: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    MEM32(0x7FDBF8) = esi;
    if (CMP_NE(_fa, _fb)) goto loc_00306029; /* jne: not equal / not zero */

loc_0030601E: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00306024u); RECOMP_ABI_CALL(0x000215C0u, sub_000215C0); /* call 0x000215C0 */

loc_00306024: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00306043;

loc_00306029: ;
    eax = MEM32(0x847024);
    ecx = MEM32(eax + 0x40);
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    eax = 1;
    PUSH32(esp, 0x00306043u); RECOMP_ABI_CALL(0x00024FA0u, sub_00024FA0); /* call 0x00024FA0 */

loc_00306043: ;
    _fa = (uint32_t)(MEM32(ebx + 0x68)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0x68), 0x3C (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0030605A; /* jne: not equal / not zero */

loc_00306049: ;
    edx = MEM32(0x7FDBF8);
    PUSH32(esp, edx);
    eax = ebx;
    PUSH32(esp, 0x00306057u); RECOMP_ABI_CALL(0x000E0500u, sub_000E0500); /* call 0x000E0500 */

loc_00306057: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0030605A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);

loc_0030605D: ;
    POP32(esp, ebp);

loc_0030605E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00305F45
 * Original: 0x00305F45 - 0x0030605F (282 bytes, 94 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00305F45(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00305F45: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0030605E; /* jne: not equal / not zero */

loc_00305F4D: ;
    eax = MEM32(0x8498D4);
    PUSH32(esp, ebp);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00305F63; /* je: equal / zero */

loc_00305F59: ;
    _fa = (uint32_t)(MEM8(eax + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 4), 1 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0030605D; /* je: equal / zero */

loc_00305F63: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    esi = MEM32(0x7FDBF8);
    eax = esi;
    eax = eax & 0x7FFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xDDA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xDDA (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00305FB3; /* jb: below (unsigned <) */

loc_00305F7D: ;
    ecx = ZX8(MEM8(ebx + 0x486));
    edx = MEM32(ecx * 4 + 0x6CB4A8);
    eax = MEM32(edx + eax * 4 + -14184);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00305FA0; /* jne: not equal / not zero */

loc_00305F96: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    MEM32(0x7FDBF8) = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00305FA0: ;
    esi = esi & 0xFF200000u;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if ((_fa == 0)) goto loc_00305FB1; /* je: equal / zero */

loc_00305FA8: ;
    eax = eax & 0xFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = esi | eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_00305FB3;

loc_00305FB1: ;
    esi = eax;

loc_00305FB3: ;
    PUSH32(esp, edi);
    edi = esi;
    edi = edi & 0x7FFF;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x200000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, 0x200000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00305FD3; /* je: equal / zero */

loc_00305FC4: ;
    eax = ebx;
    PUSH32(esp, 0x00305FCBu); RECOMP_ABI_CALL(0x00021510u, sub_00021510); /* call 0x00021510 */

loc_00305FCB: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0030605A; /* jne: not equal / not zero */

loc_00305FD3: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xDDA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0xDDA (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00305FE6; /* jl: less (signed <) */

loc_00305FDB: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    MEM32(0x7FDBF8) = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00305FE6: ;
    ebp = esi;
    ebp = ebp >> 0x10;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00306014; /* je: equal / zero */

loc_00305FEF: ;
    PUSH32(esp, 0x00305FF4u); RECOMP_ABI_CALL(0x003E2480u, sub_003E2480); /* call 0x003E2480 */

loc_00305FF4: ;
    eax = eax & 0xFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = esi >> 0x18;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0030605A; /* jb: below (unsigned <) */

loc_00306000: ;
    ebp = ebp & 0x1F;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = edi;
    if ((_fa == 0)) goto loc_00306014; /* je: equal / zero */

loc_00306007: ;
    PUSH32(esp, edi);
    edi = ebp;
    PUSH32(esp, 0x0030600Fu); RECOMP_ABI_CALL(0x000213E0u, sub_000213E0); /* call 0x000213E0 */

loc_0030600F: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = eax;

loc_00306014: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    MEM32(0x7FDBF8) = esi;
    if (CMP_NE(_fa, _fb)) goto loc_00306029; /* jne: not equal / not zero */

loc_0030601E: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00306024u); RECOMP_ABI_CALL(0x000215C0u, sub_000215C0); /* call 0x000215C0 */

loc_00306024: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00306043;

loc_00306029: ;
    eax = MEM32(0x847024);
    ecx = MEM32(eax + 0x40);
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    eax = 1;
    PUSH32(esp, 0x00306043u); RECOMP_ABI_CALL(0x00024FA0u, sub_00024FA0); /* call 0x00024FA0 */

loc_00306043: ;
    _fa = (uint32_t)(MEM32(ebx + 0x68)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0x68), 0x3C (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0030605A; /* jne: not equal / not zero */

loc_00306049: ;
    edx = MEM32(0x7FDBF8);
    PUSH32(esp, edx);
    eax = ebx;
    PUSH32(esp, 0x00306057u); RECOMP_ABI_CALL(0x000E0500u, sub_000E0500); /* call 0x000E0500 */

loc_00306057: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0030605A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);

loc_0030605D: ;
    POP32(esp, ebp);

loc_0030605E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00306060
 * Original: 0x00306060 - 0x00306153 (243 bytes, 84 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00306060(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00306060: ;
    SET_LO8(eax, MEM8(0x7819D5));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00306152; /* jne: not equal / not zero */

loc_0030606D: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = MEM32(0x7FDBF8);
    eax = esi;
    eax = eax & 0x7FFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xDDA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xDDA (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_003060BB; /* jb: below (unsigned <) */

loc_00306087: ;
    ecx = ZX8(MEM8(ebx + 0x486));
    edx = MEM32(ecx * 4 + 0x6CB4A8);
    eax = MEM32(edx + eax * 4 + -14184);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003060A8; /* jne: not equal / not zero */

loc_003060A0: ;
    POP32(esp, esi);
    MEM32(0x7FDBF8) = eax;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_003060A8: ;
    esi = esi & 0xFF200000u;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if ((_fa == 0)) goto loc_003060B9; /* je: equal / zero */

loc_003060B0: ;
    eax = eax & 0xFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = esi | eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_003060BB;

loc_003060B9: ;
    esi = eax;

loc_003060BB: ;
    PUSH32(esp, edi);
    edi = esi;
    edi = edi & 0x7FFF;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x200000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, 0x200000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003060D7; /* je: equal / zero */

loc_003060CC: ;
    eax = ebx;
    PUSH32(esp, 0x003060D3u); RECOMP_ABI_CALL(0x00021510u, sub_00021510); /* call 0x00021510 */

loc_003060D3: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0030614F; /* jne: not equal / not zero */

loc_003060D7: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xDDA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0xDDA (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003060ED; /* jl: less (signed <) */

loc_003060DF: ;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(0x7FDBF8) = 0;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_003060ED: ;
    PUSH32(esp, ebp);
    ebp = esi;
    ebp = ebp >> 0x10;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0030611C; /* je: equal / zero */

loc_003060F7: ;
    PUSH32(esp, 0x003060FCu); RECOMP_ABI_CALL(0x003E2480u, sub_003E2480); /* call 0x003E2480 */

loc_003060FC: ;
    eax = eax & 0xFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = esi >> 0x18;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0030614E; /* jb: below (unsigned <) */

loc_00306108: ;
    ebp = ebp & 0x1F;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = edi;
    if ((_fa == 0)) goto loc_0030611C; /* je: equal / zero */

loc_0030610F: ;
    PUSH32(esp, edi);
    edi = ebp;
    PUSH32(esp, 0x00306117u); RECOMP_ABI_CALL(0x000213E0u, sub_000213E0); /* call 0x000213E0 */

loc_00306117: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = eax;

loc_0030611C: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    MEM32(0x7FDBF8) = esi;
    if (CMP_NE(_fa, _fb)) goto loc_00306134; /* jne: not equal / not zero */

loc_00306126: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0030612Cu); RECOMP_ABI_CALL(0x000215C0u, sub_000215C0); /* call 0x000215C0 */

loc_0030612C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebp);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00306134: ;
    eax = MEM32(0x847024);
    ecx = MEM32(eax + 0x40);
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    eax = 1;
    PUSH32(esp, 0x0030614Eu); RECOMP_ABI_CALL(0x00024FA0u, sub_00024FA0); /* call 0x00024FA0 */

loc_0030614E: ;
    POP32(esp, ebp);

loc_0030614F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);

loc_00306152: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00306160
 * Original: 0x00306160 - 0x0030627C (284 bytes, 60 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00306160(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00306160: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    SET_LO8(ecx, MEM8(ebp + 0x250));
    SET_LO8(eax, LO8(ecx));
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(eax, LO8(eax) - 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x7Fu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00306279; /* je: equal / zero */

loc_0030617A: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ZX8(LO8(eax));
    eax = MEM32(0x84A5F8);
    edi = (uint32_t)((int32_t)edi * (int32_t)0x6D0);
    esi = edi + eax;
    _fa = (uint32_t)(MEM8(esi + 0x251)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x251), 1 (8-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00306271; /* jb: below (unsigned <) */

loc_0030619A: ;
    xmm0 = XMM_SCALAR(MEMF(0x648CFC)); /* movss */
    _fa = (uint32_t)(MEM32(esi + 0x68)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x68), 0x20 (32-bit) */
    MEMF(esi + 0x110) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x6490B8)); /* movss */
    MEMF(esi + 0xD0) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x6490F4)); /* movss */
    MEMF(esi + 0xD4) = xmm0.f[0]; /* movss */
    MEM8(esi + 0x251) = LO8(ebx);
    SET_LO16(ecx, MEM16(ebp + 0x174));
    MEM16(esi + 0x170) = LO16(ecx);
    MEM8(esi + 0x135) = LO8(ebx);
    if (CMP_NE(_fa, _fb)) goto loc_00306216; /* jne: not equal / not zero */

loc_003061EA: ;
    eax = MEM32(esi + 0x200);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    eax = eax | 0x204;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEMF(esi + 0xD0) = xmm0.f[0]; /* movss */
    MEMF(esi + 0xD4) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x110) = xmm0.f[0]; /* movss */
    MEM32(esi + 0x200) = eax;

loc_00306216: ;
    eax = esi;
    ecx = 0xC;
    MEM8(esi + 0x20C) = 0xFE;
    MEM8(esi + 0x20D) = LO8(ebx);
    PUSH32(esp, 0x0030622Fu); RECOMP_ABI_CALL(0x002F1D20u, sub_002F1D20); /* call 0x002F1D20 */

loc_0030622F: ;
    xmm0 = XMM_SCALAR(MEMF(0x6493BC)); /* movss */
    MEM32(esi + 0x210) = eax;
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    eax = esi;
    MEM32(esi + 0xA4) = 0xFFFFFFFFu;
    MEMF(esi + 0x3B8) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00306258u); RECOMP_ABI_CALL(0x002F2950u, sub_002F2950); /* call 0x002F2950 */

loc_00306258: ;
    eax = MEM32(0x84A5F8);
    ecx = MEM32(edi + eax + 0x468);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = ecx | 0x40;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(edi + eax + 0x468) = ecx;

loc_00306271: ;
    POP32(esp, edi);
    MEM8(ebp + 0x250) = LO8(ebx);
    POP32(esp, esi);

loc_00306279: ;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00306280
 * Original: 0x00306280 - 0x00306359 (217 bytes, 71 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00306280(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00306280: ;
    SET_LO8(eax, MEM8(0x7819D5));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_00306349; /* je: equal / zero */

loc_00306293: ;
    edx = MEM32(0x84A5F8);
    PUSH32(esp, ebx);
    ebx = ebp;
    ebx = (uint32_t)((int32_t)ebx * (int32_t)0x6D0);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + edx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = ebx;
    PUSH32(esp, 0x003062ABu); RECOMP_ABI_CALL(0x003B8010u, sub_003B8010); /* call 0x003B8010 */

loc_003062AB: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00306348; /* je: equal / zero */

loc_003062B3: ;
    eax = MEM32(ebx + 0x68);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xA8 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003062D2; /* je: equal / zero */

loc_003062BD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA9) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xA9 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003062D2; /* je: equal / zero */

loc_003062C4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x118) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x118 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003062D2; /* je: equal / zero */

loc_003062CB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x117) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x117 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003062DC; /* jne: not equal / not zero */

loc_003062D2: ;
    eax = MEM32(ebx + 0x52C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00306348; /* jne: not equal / not zero */

loc_003062DC: ;
    esi = MEM32(ebx + 0x570);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00306348; /* je: equal / zero */

loc_003062E6: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x28); PUSH32(esp, 0x003062EDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003062EAu); } /* indirect call */
    }

loc_003062ED: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00306348; /* jne: not equal / not zero */

loc_003062F1: ;
    PUSH32(esp, edi);
    SET_LO16(edi, MEM16(esi + 0x4E));
    ecx = 0x862C40;
    PUSH32(esp, 0x00306300u); RECOMP_ABI_CALL(0x00296370u, sub_00296370); /* call 0x00296370 */

loc_00306300: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00306347; /* je: equal / zero */

loc_00306306: ;
    PUSH32(esp, 0x44);
    PUSH32(esp, 0x0030630Du); RECOMP_ABI_CALL(0x002AF3F0u, sub_002AF3F0); /* call 0x002AF3F0 */

loc_0030630D: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0030631D; /* je: equal / zero */

loc_00306314: ;
    PUSH32(esp, 0x00306319u); RECOMP_ABI_CALL(0x0027D3C0u, sub_0027D3C0); /* call 0x0027D3C0 */

loc_00306319: ;
    esi = eax;
    goto loc_0030631F;

loc_0030631D: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0030631F: ;
    MEM8(esi + 0x40) = 1;
    ecx = (uint32_t)(int32_t)SMEM16(ebx + 0xAC);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x1F4);
    MEM32(esi + 0x3C) = ecx;
    PUSH32(esp, 0x00306339u); RECOMP_ABI_CALL(0x004168D0u, sub_004168D0); /* call 0x004168D0 */

loc_00306339: ;
    eax = MEM32(edi + 0x9DC);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00306347u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00306344u); } /* indirect call */
    }

loc_00306347: ;
    POP32(esp, edi);

loc_00306348: ;
    POP32(esp, ebx);

loc_00306349: ;
    esi = MEM32(esp + 0xC);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x00306353u); RECOMP_ABI_CALL(0x002E9F80u, sub_002E9F80); /* call 0x002E9F80 */

loc_00306353: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00306360
 * Original: 0x00306360 - 0x003063BF (95 bytes, 35 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00306360(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00306360: ;
    eax = MEM32(0x7FDBF8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003063A2; /* je: equal / zero */

loc_00306369: ;
    edx = MEM32(0x84A5F8);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = eax;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x6D0);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(ecx + 0x64);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003063BE; /* je: equal / zero */

loc_00306381: ;
    edx = MEM32(esp + 4);
    ecx = ZX8(MEM8(ecx + 0x251));
    PUSH32(esp, esi);
    esi = ZX16(MEM16(edx + 0x60));
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    POP32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_003063BE; /* jne: not equal / not zero */

loc_00306397: ;
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0030639Eu); RECOMP_ABI_CALL(0x00306280u, sub_00306280); /* call 0x00306280 */

loc_0030639E: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_003063A2: ;
    edx = MEM32(esp + 4);
    SET_LO8(ecx, MEM8(edx + 0x250));
    eax = ZX8(LO8(ecx));
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003063BE; /* je: equal / zero */

loc_003063B4: ;
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x003063BBu); RECOMP_ABI_CALL(0x00306280u, sub_00306280); /* call 0x00306280 */

loc_003063BB: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003063BE: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003063C0
 * Original: 0x003063C0 - 0x00306419 (89 bytes, 19 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003063C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_003063C0: ;
    ecx = MEM32(esp + 4);
    xmm0 = XMM_SCALAR(MEMF(ecx + 0xDC)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x648E64); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00306418; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x648E64)) */

loc_003063D5: ;
    eax = MEM32(0x7FDBF8);
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp HI8(eax), 0 (8-bit) */
    if ((((uint8_t)((uint8_t)(_fa) - (uint8_t)(_fb)) >> 7) == 0)) goto loc_003063EF; /* jns: not sign (positive) */

loc_003063DE: ;
    edx = MEM32(0x84A5F8);
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x7C)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(edx + 0x7C); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00306418; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(edx + 0x7C)) */

loc_003063EF: ;
    eax = eax & 0xFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    SET_LO8(eax, MEM8(ecx + 0x24C));
    SET_LO8(eax, LO8(eax) - 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x7Fu); /* dec result/SF/OF; CF unchanged */
    MEMF(0x7FDBE4) = xmm0.f[0]; /* movss */
    MEM32(0x7FDBD8) = 0;
    MEM8(ecx + 0x24C) = LO8(eax);

loc_00306418: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00306420
 * Original: 0x00306420 - 0x00306455 (53 bytes, 13 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00306420(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00306420: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax + 0x3C4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00306454; /* je: equal / zero */

loc_0030642E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x00306438u); RECOMP_ABI_CALL(0x00036760u, sub_00036760); /* call 0x00036760 */

loc_00306438: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00306454; /* je: equal / zero */

loc_0030643C: ;
    MEM32(eax + 0xF4) = 1;
    MEM16(eax + 0x1DA) = LO16(edx);
    MEM16(eax + 0x1D8) = LO16(edx);

loc_00306454: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00306460
 * Original: 0x00306460 - 0x00306471 (17 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00306460(void)
{

loc_00306460: ;
    eax = MEM32(esp + 4);
    SET_LO8(ecx, MEM8(0x7FDBF8));
    MEM8(eax + 0x10A) = LO8(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00306480
 * Original: 0x00306480 - 0x003064A2 (34 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00306480(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00306480: ;
    eax = MEM32(esp + 4);
    SET_LO8(ecx, MEM8(0x7FDBF8));
    edx = MEM32(eax + 0x568);
    MEM8(eax + 0x17D) = LO8(ecx);
    MEM8(eax + 0x208) = MEM8(eax + 0x208) | 0x10;
    _fa = (uint32_t)(MEM8(eax + 0x208)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    MEM8(edx + 0x45) = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_003064B0
 * Original: 0x003064B0 - 0x003064C1 (17 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003064B0(void)
{

loc_003064B0: ;
    eax = MEM32(esp + 4);
    SET_LO8(ecx, MEM8(0x7FDBF8));
    MEM8(eax + 0x208) = LO8(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_003064D0
 * Original: 0x003064D0 - 0x003064E6 (22 bytes, 5 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003064D0(void)
{

loc_003064D0: ;
    eax = MEM32(esp + 4);
    MEM8(eax + 0x1B1) = 5;
    eax = MEM32(eax + 0x568);
    MEM8(eax + 0x45) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_003064F0
 * Original: 0x003064F0 - 0x00306503 (19 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003064F0(void)
{

loc_003064F0: ;
    eax = MEM32(esp + 4);
    SET_LO16(ecx, MEM16(0x7FDBF8));
    MEM16(eax + 0x428) = LO16(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00306510
 * Original: 0x00306510 - 0x00306521 (17 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00306510(void)
{

loc_00306510: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(0x7FDBF8);
    MEM32(eax + 0x1FC) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_00306530
 * Original: 0x00306530 - 0x0030654B (27 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00306530(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00306530: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(0x7FDBF8);
    edx = MEM32(eax + 0x1FC);
    ecx = ~ecx;
    edx = edx & ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(eax + 0x1FC) = edx;
    esp += 4; return; /* ret */

}

/**
 * sub_00306550
 * Original: 0x00306550 - 0x00306561 (17 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00306550(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00306550: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(0x7FDBF8);
    MEM32(eax + 0x1FC) = MEM32(eax + 0x1FC) | ecx;
    _fa = (uint32_t)(MEM32(eax + 0x1FC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esp += 4; return; /* ret */

}

/**
 * sub_00306570
 * Original: 0x00306570 - 0x00306581 (17 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00306570(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00306570: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(0x7FDBF8);
    MEM32(eax + 0x468) = MEM32(eax + 0x468) | ecx;
    _fa = (uint32_t)(MEM32(eax + 0x468)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esp += 4; return; /* ret */

}

/**
 * sub_00306590
 * Original: 0x00306590 - 0x003065AB (27 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00306590(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00306590: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(0x7FDBF8);
    edx = MEM32(eax + 0x468);
    ecx = ~ecx;
    edx = edx & ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(eax + 0x468) = edx;
    esp += 4; return; /* ret */

}

/**
 * sub_003065B0
 * Original: 0x003065B0 - 0x00306601 (81 bytes, 25 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003065B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003065B0: ;
    eax = MEM32(0x7FDBF8);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003065D9; /* je: equal / zero */

loc_003065BC: ;
    ecx = (uint32_t)(int32_t)SMEM16(0x7FDBFA);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x18);
    eax = eax & 0xFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, 0x003065D2u); RECOMP_ABI_CALL(0x00140900u, sub_00140900); /* call 0x00140900 */

loc_003065D2: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_003065D9: ;
    edx = MEM32(esp + 0x14);
    MEM32(esp) = edx;
    SET_LO8(edx, MEM8(esp + 4));
    PUSH32(esp, ebx);
    ebx = MEM32(0x774A5C);
    eax = esp + 4;
    SET_LO8(edx, LO8(edx) | 1);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    PUSH32(esp, eax);
    MEM8(esp + 0xC) = LO8(edx);
    PUSH32(esp, 0x003065FCu); RECOMP_ABI_CALL(0x00140D60u, sub_00140D60); /* call 0x00140D60 */

loc_003065FC: ;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00306610
 * Original: 0x00306610 - 0x00306637 (39 bytes, 14 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00306610(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00306610: ;
    eax = MEM32(0x774A60);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00306636; /* je: equal / zero */

loc_00306619: ;
    ecx = MEM32(esp + 4);
    /* nop */

loc_00306620: ;
    _fa = (uint32_t)(MEM32(eax + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x10), ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0030662D; /* je: equal / zero */

loc_00306625: ;
    eax = MEM32(eax + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00306620; /* jne: not equal / not zero */

loc_0030662C: ;
    esp += 4; return; /* ret */

loc_0030662D: ;
    ecx = MEM32(0x7FDBF8);
    MEM32(eax + 0x14) = ecx;

loc_00306636: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00306640
 * Original: 0x00306640 - 0x00306651 (17 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00306640(void)
{

loc_00306640: ;
    eax = MEM32(esp + 4);
    SET_LO8(ecx, MEM8(0x7FDBF8));
    MEM8(eax + 0x459) = LO8(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00306660
 * Original: 0x00306660 - 0x00306700 (160 bytes, 44 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00306660(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00306660: ;
    SET_LO8(eax, MEM8(0x7FDBFA));
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM8(esi + 0x474) = LO8(eax);
    SET_LO8(ecx, MEM8(0x7FDBFB));
    ecx = ecx & 0xFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 3 (8-bit) */
    MEM16(esi + 0x476) = LO16(ecx);
    SET_LO16(edx, MEM16(0x7FDBF8));
    MEM16(esi + 0x480) = LO16(edx);
    if (CMP_NE(_fa, _fb)) goto loc_003066E4; /* jne: not equal / not zero */

loc_00306697: ;
    eax = MEM32(esi + 0x4B0);
    ecx = MEM32(eax + 0x24);
    edx = MEM32(ecx + 8);
    eax = MEM32(edx + 0x10);
    PUSH32(esp, ebx);
    ebx = MEM32(0x7FDBF4);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0x003066BBu); RECOMP_ABI_CALL(0x00415EC0u, sub_00415EC0); /* call 0x00415EC0 */

loc_003066BB: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_003066D9; /* je: equal / zero */

loc_003066C5: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003066D9; /* je: equal / zero */

loc_003066CD: ;
    eax = MEM32(eax + 8);
    MEM16(esi + 0x476) = LO16(eax);
    goto loc_003066E6;

loc_003066D9: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM16(esi + 0x476) = LO16(eax);
    goto loc_003066E6;

loc_003066E4: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_003066E6: ;
    MEM8(esi + 0x482) = LO8(ecx);
    MEM8(esi + 0x483) = LO8(ecx);
    MEM8(esi + 0x484) = LO8(ecx);
    MEM8(esi + 0x485) = LO8(ecx);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00306700
 * Original: 0x00306700 - 0x00306740 (64 bytes, 15 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00306700(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00306700: ;
    ecx = MEM32(0x7FDBF8);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(edx, MEM8(0x7FDBFA));
    PUSH32(esp, ebx);
    SET_LO8(ebx, LO8(ecx));
    eax = ecx;
    ecx = MEM32(esp + 8);
    MEM16(ecx + 0x480) = 0xFFFF;
    MEM8(ecx + 0x474) = 5;
    edx = edx & 0xFF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((8) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    MEM8(ecx + edx * 2 + 0x483) = LO8(ebx);
    MEM8(ecx + edx * 2 + 0x482) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00306740
 * Original: 0x00306740 - 0x00306750 (16 bytes, 5 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00306740(void)
{

loc_00306740: ;
    eax = MEM32(esp + 4);
    MEM16(eax + 0x480) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_00306750
 * Original: 0x00306750 - 0x00306765 (21 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00306750(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00306750: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(MEM32(esi + 0x68)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x68), 0x8C (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00306763; /* je: equal / zero */

loc_0030675E: ;
    PUSH32(esp, 0x00306763u); RECOMP_ABI_CALL(0x000E43E0u, sub_000E43E0); /* call 0x000E43E0 */

loc_00306763: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00306770
 * Original: 0x00306770 - 0x0030677C (12 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00306770(void)
{

loc_00306770: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 8);
    PUSH32(esp, 0x0030677Au); RECOMP_ABI_CALL(0x000E5050u, sub_000E5050); /* call 0x000E5050 */

loc_0030677A: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_00306780
 * Original: 0x00306780 - 0x00306794 (20 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00306780(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00306780: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0x0030678Fu); RECOMP_ABI_CALL(0x00179FD0u, sub_00179FD0); /* call 0x00179FD0 */

loc_0030678F: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003067A0
 * Original: 0x003067A0 - 0x003067B9 (25 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003067A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003067A0: ;
    ecx = MEM32(esp + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003067B8; /* je: equal / zero */

loc_003067A8: ;
    PUSH32(esp, 0xFF);
    eax = 0x32;
    PUSH32(esp, 0x003067B7u); RECOMP_ABI_CALL(0x000E5B10u, sub_000E5B10); /* call 0x000E5B10 */

loc_003067B7: ;
    POP32(esp, ecx);

loc_003067B8: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003067C0
 * Original: 0x003067C0 - 0x003067D7 (23 bytes, 8 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003067C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003067C0: ;
    ecx = MEM32(esp + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003067D6; /* je: equal / zero */

loc_003067C8: ;
    PUSH32(esp, 0xFF);
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, 0x003067D5u); RECOMP_ABI_CALL(0x000E5B10u, sub_000E5B10); /* call 0x000E5B10 */

loc_003067D5: ;
    POP32(esp, ecx);

loc_003067D6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003067E0
 * Original: 0x003067E0 - 0x003067F1 (17 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003067E0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003067E0: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 8);
    PUSH32(esp, 0);
    PUSH32(esp, 0x003067ECu); RECOMP_ABI_CALL(0x001571C0u, sub_001571C0); /* call 0x001571C0 */

loc_003067EC: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_00306800
 * Original: 0x00306800 - 0x00306811 (17 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00306800(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00306800: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 8);
    PUSH32(esp, 1);
    PUSH32(esp, 0x0030680Cu); RECOMP_ABI_CALL(0x001571C0u, sub_001571C0); /* call 0x001571C0 */

loc_0030680C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_00306820
 * Original: 0x00306820 - 0x00306834 (20 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00306820(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00306820: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00306830u); RECOMP_ABI_CALL(0x00181300u, sub_00181300); /* call 0x00181300 */

loc_00306830: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00306840
 * Original: 0x00306840 - 0x00306854 (20 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00306840(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00306840: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, 0xFF);
    PUSH32(esp, 1);
    PUSH32(esp, 0x00306850u); RECOMP_ABI_CALL(0x00181300u, sub_00181300); /* call 0x00181300 */

loc_00306850: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00306860
 * Original: 0x00306860 - 0x0030686C (12 bytes, 5 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00306860(void)
{

loc_00306860: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, 0x0030686Au); RECOMP_ABI_CALL(0x00116BB0u, sub_00116BB0); /* call 0x00116BB0 */

loc_0030686A: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00306870
 * Original: 0x00306870 - 0x00306936 (198 bytes, 50 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00306870(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00306870: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    MEM8(0x84A60C) = 1;
    PUSH32(esp, 0x00306880u); RECOMP_ABI_CALL(0x0042B72Au, sub_0042B72A); /* call 0x0042B72A */

loc_00306880: ;
    esi = MEM32(esp + 0x1C);
    MEM32(0x747628) = eax;
    eax = MEM32(0x8496E0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(0x84A610) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_003068BB; /* je: equal / zero */

loc_0030689C: ;
    eax = 0x5E0B88;
    PUSH32(esp, 0x003068A6u); RECOMP_ABI_CALL(0x0029CDD0u, sub_0029CDD0); /* call 0x0029CDD0 */

loc_003068A6: ;
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, eax);
    edx = esi;
    PUSH32(esp, 0x003068B8u); RECOMP_ABI_CALL(0x001DE960u, sub_001DE960); /* call 0x001DE960 */

loc_003068B8: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003068BB: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, esi);
    eax = esp + 0x10;
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x649148)); /* movss */
    PUSH32(esp, eax);
    ecx = eax;
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x648EB8)); /* movss */
    PUSH32(esp, ecx);
    MEM8(esp + 0x10) = 3;
    MEM8(esp + 0x11) = 0x1A;
    MEM16(esp + 0x12) = 0xA0;
    MEM8(esp + 0x16) = 0;
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00306904u); RECOMP_ABI_CALL(0x00428393u, sub_00428393); /* call 0x00428393 */

loc_00306904: ;
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0);
    PUSH32(esp, 0x7F);
    PUSH32(esp, 0);
    PUSH32(esp, 0x42C80000);
    PUSH32(esp, 0x43160000);
    edx = esp + 0x1C;
    PUSH32(esp, 0x47435000);
    PUSH32(esp, edx);
    SET_LO8(edx, 0); /* xor self */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    ecx = esp + 0x2C;
    PUSH32(esp, 0x0030692Eu); RECOMP_ABI_CALL(0x0011E790u, sub_0011E790); /* call 0x0011E790 */

loc_0030692E: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00306940
 * Original: 0x00306940 - 0x0030696C (44 bytes, 13 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00306940(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00306940: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0xC);
    PUSH32(esp, 0x26);
    ecx = esp + 4;
    PUSH32(esp, ecx);
    MEM32(esp + 8) = eax;
    SET_LO8(eax, MEM8(eax + 0x10B));
    PUSH32(esp, 2);
    PUSH32(esp, 0x6B7728);
    MEM8(esp + 0x14) = LO8(eax);
    PUSH32(esp, 0x00306968u); RECOMP_ABI_CALL(0x000DAA60u, sub_000DAA60); /* call 0x000DAA60 */

loc_00306968: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00306970
 * Original: 0x00306970 - 0x003069ED (125 bytes, 23 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00306970(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00306970: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    eax = MEM32(esp + 0x28);
    MEMF(esp) = xmm0.f[0]; /* movss */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x648EEC)); /* movss */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x649020)); /* movss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x648F78)); /* movss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x648D3C)); /* movss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x64908C)); /* movss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x6490B8)); /* movss */
    PUSH32(esp, eax);
    eax = esp + 4;
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x003069E9u); RECOMP_ABI_CALL(0x000D16D0u, sub_000D16D0); /* call 0x000D16D0 */

loc_003069E9: ;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_003069F0
 * Original: 0x003069F0 - 0x00306A20 (48 bytes, 15 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003069F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003069F0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0x4B0);
    edx = MEM32(ecx + 0x24);
    eax = MEM32(edx + 8);
    eax = MEM32(eax + 0x10);
    PUSH32(esp, ebx);
    ecx = esp + 8;
    PUSH32(esp, ecx);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    ebx = 0x638344;
    PUSH32(esp, 0x00306A17u); RECOMP_ABI_CALL(0x00415EC0u, sub_00415EC0); /* call 0x00415EC0 */

loc_00306A17: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_003E1D70(); return; /* tail jmp 0x003E1D70 */

}

/**
 * sub_00306A20
 * Original: 0x00306A20 - 0x00306A50 (48 bytes, 15 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00306A20(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00306A20: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0x4B0);
    edx = MEM32(ecx + 0x24);
    eax = MEM32(edx + 8);
    eax = MEM32(eax + 0x10);
    PUSH32(esp, ebx);
    ecx = esp + 8;
    PUSH32(esp, ecx);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    ebx = 0x63833C;
    PUSH32(esp, 0x00306A47u); RECOMP_ABI_CALL(0x00415EC0u, sub_00415EC0); /* call 0x00415EC0 */

loc_00306A47: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_003E1D70(); return; /* tail jmp 0x003E1D70 */

}

/**
 * sub_00306A50
 * Original: 0x00306A50 - 0x00306AB0 (96 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00306A50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00306A50: ;
    eax = MEM32(0x84A5F8);
    eax = MEM32(eax + 0x568);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00306A87; /* je: equal / zero */

loc_00306A5F: ;
    SET_LO8(ecx, MEM8(eax + 0xB2));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00306A87; /* je: equal / zero */

loc_00306A69: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(ecx, MEM8(esp + 8));
    _fb = (uint32_t)(0x13) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* sub source, before the write */
    SET_LO8(ecx, LO8(ecx) - 0x13);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, 0xFF);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00306A82u); RECOMP_ABI_CALL(0x000E9040u, sub_000E9040); /* call 0x000E9040 */

loc_00306A82: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00306A87: ;
    eax = MEM32(esp + 4);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(edx, MEM8(esp + 8));
    PUSH32(esp, 0xFF);
    _fb = (uint32_t)(0x13) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* sub source, before the write */
    SET_LO8(edx, LO8(edx) - 0x13);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sub result */
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00306AA4u); RECOMP_ABI_CALL(0x000E86C0u, sub_000E86C0); /* call 0x000E86C0 */

loc_00306AA4: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00306AB0
 * Original: 0x00306AB0 - 0x00306AC4 (20 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00306AB0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00306AB0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0x46);
    PUSH32(esp, 0x00306AC0u); RECOMP_ABI_CALL(0x0013FBF0u, sub_0013FBF0); /* call 0x0013FBF0 */

loc_00306AC0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00306AD0
 * Original: 0x00306AD0 - 0x00306AD5 (5 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00306AD0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00306AD0: ;
    g_seh_ebp = ebp; sub_000D9010(); return; /* tail jmp 0x000D9010 */

}

/**
 * sub_00306AE0
 * Original: 0x00306AE0 - 0x00306AEC (12 bytes, 5 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00306AE0(void)
{

loc_00306AE0: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 8);
    PUSH32(esp, 0x00306AEAu); RECOMP_ABI_CALL(0x000D9060u, sub_000D9060); /* call 0x000D9060 */

loc_00306AEA: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_00306AF0
 * Original: 0x00306AF0 - 0x00306AFF (15 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00306AF0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00306AF0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, ebx);
    SET_LO8(ebx, LO8(ebx) | 0xFF);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    PUSH32(esp, 0x00306AFDu); RECOMP_ABI_CALL(0x00114520u, sub_00114520); /* call 0x00114520 */

loc_00306AFD: ;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00306B00
 * Original: 0x00306B00 - 0x00306B15 (21 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00306B00(void)
{

loc_00306B00: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, 0xFF);
    ecx = 6;
    PUSH32(esp, 0x00306B13u); RECOMP_ABI_CALL(0x000CA540u, sub_000CA540); /* call 0x000CA540 */

loc_00306B13: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00306B20
 * Original: 0x00306B20 - 0x00306B35 (21 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00306B20(void)
{

loc_00306B20: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, 0xFF);
    ecx = 5;
    PUSH32(esp, 0x00306B33u); RECOMP_ABI_CALL(0x000CA540u, sub_000CA540); /* call 0x000CA540 */

loc_00306B33: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00306B40
 * Original: 0x00306B40 - 0x00306B70 (48 bytes, 15 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00306B40(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00306B40: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0x4B0);
    edx = MEM32(ecx + 0x24);
    eax = MEM32(edx + 8);
    eax = MEM32(eax + 0x10);
    PUSH32(esp, ebx);
    ecx = esp + 8;
    PUSH32(esp, ecx);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    ebx = 0x5F0C6C;
    PUSH32(esp, 0x00306B67u); RECOMP_ABI_CALL(0x00415EC0u, sub_00415EC0); /* call 0x00415EC0 */

loc_00306B67: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_003E1D70(); return; /* tail jmp 0x003E1D70 */

}

/**
 * sub_00306B70
 * Original: 0x00306B70 - 0x00306B90 (32 bytes, 22 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00306B70(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00306B70: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00306B7Cu); RECOMP_ABI_CALL(0x00192EE0u, sub_00192EE0); /* call 0x00192EE0 */

loc_00306B7C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00306B90
 * Original: 0x00306B90 - 0x00306BA1 (17 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00306B90(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00306B90: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, 1);
    PUSH32(esp, 0x00306B9Cu); RECOMP_ABI_CALL(0x00192EE0u, sub_00192EE0); /* call 0x00192EE0 */

loc_00306B9C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00306BB0
 * Original: 0x00306BB0 - 0x00306BC1 (17 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00306BB0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00306BB0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, 2);
    PUSH32(esp, 0x00306BBCu); RECOMP_ABI_CALL(0x00192EE0u, sub_00192EE0); /* call 0x00192EE0 */

loc_00306BBC: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00306BD0
 * Original: 0x00306BD0 - 0x00306BE1 (17 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00306BD0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00306BD0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, 3);
    PUSH32(esp, 0x00306BDCu); RECOMP_ABI_CALL(0x00192EE0u, sub_00192EE0); /* call 0x00192EE0 */

loc_00306BDC: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00306BF0
 * Original: 0x00306BF0 - 0x00306C1C (44 bytes, 14 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00306BF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_00306BF0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    xmm0 = XMM_SCALAR(MEMF(ebx + 0x228)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x648E60); /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((0) ? 0x80u : 0u) | (((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_00306C1A; /* jnp: not parity */

loc_00306C0A: ;
    _fca = xmm0.f[0]; _fcb = MEMF(ebx + 0x7C); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00306C1A; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(ebx + 0x7C)) */

loc_00306C10: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x00306C17u); RECOMP_ABI_CALL(0x00192EE0u, sub_00192EE0); /* call 0x00192EE0 */

loc_00306C17: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00306C1A: ;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00306C20
 * Original: 0x00306C20 - 0x00306C4C (44 bytes, 14 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00306C20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_00306C20: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    xmm0 = XMM_SCALAR(MEMF(ebx + 0x228)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x648E60); /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((0) ? 0x80u : 0u) | (((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_00306C4A; /* jnp: not parity */

loc_00306C3A: ;
    _fca = xmm0.f[0]; _fcb = MEMF(ebx + 0x7C); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00306C4A; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(ebx + 0x7C)) */

loc_00306C40: ;
    PUSH32(esp, 3);
    PUSH32(esp, 0x00306C47u); RECOMP_ABI_CALL(0x00192EE0u, sub_00192EE0); /* call 0x00192EE0 */

loc_00306C47: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00306C4A: ;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00306C50
 * Original: 0x00306C50 - 0x00306C59 (9 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00306C50(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00306C50: ;
    eax = MEM32(esp + 4);
    g_seh_ebp = ebp; sub_00193710(); return; /* tail jmp 0x00193710 */

}

/**
 * sub_00306C60
 * Original: 0x00306C60 - 0x00306C76 (22 bytes, 8 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00306C60(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00306C60: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00306C71u); RECOMP_ABI_CALL(0x00555B20u, sub_00555B20); /* call 0x00555B20 */

loc_00306C71: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00306C80
 * Original: 0x00306C80 - 0x00306C96 (22 bytes, 8 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00306C80(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00306C80: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, 0xFF);
    PUSH32(esp, 1);
    PUSH32(esp, 0x00306C91u); RECOMP_ABI_CALL(0x00555B20u, sub_00555B20); /* call 0x00555B20 */

loc_00306C91: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00306CA0
 * Original: 0x00306CA0 - 0x00306CB6 (22 bytes, 8 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00306CA0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00306CA0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, 0xFF);
    PUSH32(esp, 2);
    PUSH32(esp, 0x00306CB1u); RECOMP_ABI_CALL(0x00555B20u, sub_00555B20); /* call 0x00555B20 */

loc_00306CB1: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00306CC0
 * Original: 0x00306CC0 - 0x00306CCC (12 bytes, 5 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00306CC0(void)
{

loc_00306CC0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, 0x00306CCAu); RECOMP_ABI_CALL(0x005561C0u, sub_005561C0); /* call 0x005561C0 */

loc_00306CCA: ;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00306CD0
 * Original: 0x00306CD0 - 0x00306CF5 (37 bytes, 13 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00306CD0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00306CD0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = esi;
    PUSH32(esp, 0x00306CDEu); RECOMP_ABI_CALL(0x000B7350u, sub_000B7350); /* call 0x000B7350 */

loc_00306CDE: ;
    PUSH32(esp, 0xFF);
    PUSH32(esp, esi);
    ecx = 0x3E8;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x00306CF0u); RECOMP_ABI_CALL(0x000B79A0u, sub_000B79A0); /* call 0x000B79A0 */

loc_00306CF0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00306D00
 * Original: 0x00306D00 - 0x00306D14 (20 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00306D00(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00306D00: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0x00306D0Fu); RECOMP_ABI_CALL(0x000B8F00u, sub_000B8F00); /* call 0x000B8F00 */

loc_00306D0F: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00306D20
 * Original: 0x00306D20 - 0x00306D34 (20 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00306D20(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00306D20: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0x00306D2Fu); RECOMP_ABI_CALL(0x000B74E0u, sub_000B74E0); /* call 0x000B74E0 */

loc_00306D2F: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00306D40
 * Original: 0x00306D40 - 0x00306D54 (20 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00306D40(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00306D40: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 8);
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0x00306D4Fu); RECOMP_ABI_CALL(0x001402B0u, sub_001402B0); /* call 0x001402B0 */

loc_00306D4F: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_00306D60
 * Original: 0x00306D60 - 0x00306D69 (9 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00306D60(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00306D60: ;
    eax = MEM32(esp + 4);
    g_seh_ebp = ebp; sub_00140450(); return; /* tail jmp 0x00140450 */

}

/**
 * sub_00306D70
 * Original: 0x00306D70 - 0x00306DAE (62 bytes, 20 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00306D70(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00306D70: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x18);
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    MEM32(esp + 0x14) = eax;
    MEM32(esp + 0x18) = eax;
    PUSH32(esp, 0xFF);
    PUSH32(esp, esi);
    eax = esp + 0x14;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x14) = 1;
    MEM32(esp + 0x18) = esi;
    PUSH32(esp, 0x00306DA1u); RECOMP_ABI_CALL(0x000AC710u, sub_000AC710); /* call 0x000AC710 */

loc_00306DA1: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00306DA9u); RECOMP_ABI_CALL(0x000AD960u, sub_000AD960); /* call 0x000AD960 */

loc_00306DA9: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00306DB0
 * Original: 0x00306DB0 - 0x00306DBE (14 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00306DB0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00306DB0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    SET_LO8(eax, LO8(eax) | 0xFF);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    PUSH32(esp, 0x00306DBCu); RECOMP_ABI_CALL(0x000E6FA0u, sub_000E6FA0); /* call 0x000E6FA0 */

loc_00306DBC: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00306DC0
 * Original: 0x00306DC0 - 0x00306DD3 (19 bytes, 8 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00306DC0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00306DC0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    SET_LO8(ebx, LO8(ebx) | 0xFF);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    PUSH32(esp, 0x00306DCEu); RECOMP_ABI_CALL(0x00138B90u, sub_00138B90); /* call 0x00138B90 */

loc_00306DCE: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00306DE0
 * Original: 0x00306DE0 - 0x00306E4F (111 bytes, 32 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00306DE0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00306DE0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM8(esp) = 3;
    MEM8(esp + 1) = 0xFF;
    PUSH32(esp, 0x00306DF1u); RECOMP_ABI_CALL(0x003E2480u, sub_003E2480); /* call 0x003E2480 */

loc_00306DF1: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 5;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0);
    PUSH32(esp, 0x7F);
    PUSH32(esp, 0x437F0000);
    PUSH32(esp, 0x437F0000);
    PUSH32(esp, 0x437F0000);
    MEM8(esp + 0x1E) = 0;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(esp + 0x1A) = LO16(edx);
    PUSH32(esp, 0x00306E23u); RECOMP_ABI_CALL(0x003E2480u, sub_003E2480); /* call 0x003E2480 */

loc_00306E23: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 3;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x28);
    _fb = (uint32_t)(0x78) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x78;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm0.f[0] = (float)(int32_t)edx; /* cvtsi2ss */
    edx = esp + 0x1C;
    MEMF(esp) = xmm0.f[0]; /* movss */
    PUSH32(esp, edx);
    SET_LO8(edx, 0); /* xor self */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    PUSH32(esp, 0x00306E4Bu); RECOMP_ABI_CALL(0x0011E790u, sub_0011E790); /* call 0x0011E790 */

loc_00306E4B: ;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00306E50
 * Original: 0x00306E50 - 0x0030708D (573 bytes, 145 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00306E50(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00306E50: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x84) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x84;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    eax = MEM32(ebx + 0x68);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x77) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x77 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00306EB5; /* jne: not equal / not zero */

loc_00306E6C: ;
    SET_LO8(eax, MEM8(ebx + 0x60));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 2 (8-bit) */
    MEM32(esp + 0x14) = ebx;
    MEM8(esp + 0x13) = 1;
    if (CMP_AE(_fa, _fb)) goto loc_00306EA0; /* jae: above or equal (unsigned >=) */

loc_00306E7C: ;
    eax = ZX8(LO8(eax));
    SET_LO8(eax, MEM8(eax + 0x776564));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00306EA0; /* je: equal / zero */

loc_00306E89: ;
    edi = SX8(LO8(eax));
    eax = MEM32(0x84A5F8);
    edi = (uint32_t)((int32_t)edi * (int32_t)0x6D0);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(esp + 0x12) = 1;
    goto loc_00306EF2;

loc_00306EA0: ;
    ecx = MEM32(ebx + 0x568);
    eax = MEM32(ecx + 0x2B0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM8(esp + 0x12) = (CMP_NE(_fa, _fb)) ? 1 : 0; /* setne */
    goto loc_00306EF2;

loc_00306EB5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x28) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x28 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00307086; /* jne: not equal / not zero */

loc_00306EBE: ;
    eax = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00306EC5u); RECOMP_ABI_CALL(0x0030E670u, sub_0030E670); /* call 0x0030E670 */

loc_00306EC5: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x14) = eax;
    MEM8(esp + 0x13) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_00306EED; /* je: equal / zero */

loc_00306ED4: ;
    eax = MEM32(eax + 0x568);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00306EED; /* je: equal / zero */

loc_00306EDE: ;
    ecx = MEM32(eax + 0x2B0);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM8(esp + 0x12) = 1;
    if (CMP_NE(_fa, _fb)) goto loc_00306EF2; /* jne: not equal / not zero */

loc_00306EED: ;
    MEM8(esp + 0x12) = 0;

loc_00306EF2: ;
    esi = MEM32(esp + 0x14);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00306EFF; /* je: equal / zero */

loc_00306EFA: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00306EFFu); RECOMP_ABI_CALL(0x000AD960u, sub_000AD960); /* call 0x000AD960 */

loc_00306EFF: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00306F0A; /* je: equal / zero */

loc_00306F03: ;
    esi = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00306F0Au); RECOMP_ABI_CALL(0x000AD960u, sub_000AD960); /* call 0x000AD960 */

loc_00306F0A: ;
    SET_LO8(eax, MEM8(0x7819D5));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00306F4C; /* je: equal / zero */

loc_00306F13: ;
    edx = MEM32(ebx + 0x568);
    _fa = (uint32_t)(MEM8(edx + 0x217)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edx + 0x217), 0x10 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00306F40; /* je: equal / zero */

loc_00306F22: ;
    MEM32(0x7FDBF8) = 0xA;
    eax = MEM32(ebx + 0x568);
    MEM16(eax + 0x21A) = MEM16(eax + 0x21A) - 1;
    _fa = (uint32_t)(MEM16(eax + 0x21A)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x7FFFu); /* dec result/SF/OF; CF unchanged */
    MEM8(esp + 0x13) = 2;
    goto loc_00306F56;

loc_00306F40: ;
    MEM32(0x7FDBF8) = 9;
    goto loc_00306F56;

loc_00306F4C: ;
    MEM32(0x7FDBF8) = 5;

loc_00306F56: ;
    SET_LO8(eax, MEM8(esp + 0x12));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00306F90; /* je: equal / zero */

loc_00306F5E: ;
    eax = MEM32(esp + 0x14);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0xFF);
    MEM32(esp + 0x2C) = eax;
    PUSH32(esp, eax);
    eax = esp + 0x2C;
    ecx = edi;
    MEM32(esp + 0x2C) = 3;
    MEM32(esp + 0x34) = edi;
    MEM32(esp + 0x38) = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00306F8Bu); RECOMP_ABI_CALL(0x000AC710u, sub_000AC710); /* call 0x000AC710 */

loc_00306F8B: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00306F99;

loc_00306F90: ;
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00306F96u); RECOMP_ABI_CALL(0x00304340u, sub_00304340); /* call 0x00304340 */

loc_00306F96: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00306F99: ;
    eax = MEM32(ebx + 0x3C8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00307086; /* je: equal / zero */

loc_00306FA7: ;
    SET_LO8(eax, MEM8(ebx + 0x16E));
    SET_LO8(eax, LO8(eax) & 0xF);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xF (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00307086; /* je: equal / zero */

loc_00306FB7: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x649030)); /* movss */
    eax = esp + 0x50;
    PUSH32(esp, eax);
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x648EA0)); /* movss */
    ecx = esp + 0x30;
    edx = esp + 0x20;
    PUSH32(esp, 0x5F24FC);
    esi = ebx;
    MEMF(esp + 0x3C) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x20) = ecx;
    MEM32(esp + 0x1C) = edx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00306FFDu); RECOMP_ABI_CALL(0x002F7810u, sub_002F7810); /* call 0x002F7810 */

loc_00306FFD: ;
    ecx = esp + 0x58;
    PUSH32(esp, ecx);
    edx = esp + 0x20;
    PUSH32(esp, edx);
    eax = 1;
    ecx = esp + 0x28;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00307015u); RECOMP_ABI_CALL(0x00111C60u, sub_00111C60); /* call 0x00111C60 */

loc_00307015: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x90)); /* movss */
    MEMF(esp + 0x54) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x94)); /* movss */
    MEMF(esp + 0x58) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x98)); /* movss */
    MEMF(esp + 0x5C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x80)); /* movss */
    MEMF(esp + 0x48) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x84)); /* movss */
    PUSH32(esp, 0x40000000);
    eax = esp + 0x4C;
    PUSH32(esp, eax);
    ecx = esp + 0x5C;
    MEMF(esp + 0x54) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x90)); /* movss */
    PUSH32(esp, ecx);
    MEMF(esp + 0x5C) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00307083u); RECOMP_ABI_CALL(0x0019F960u, sub_0019F960); /* call 0x0019F960 */

loc_00307083: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00307086: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00307090
 * Original: 0x00307090 - 0x003070A3 (19 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00307090(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00307090: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(esp + 0xC));
    _fb = (uint32_t)(0x3E) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* sub source, before the write */
    SET_LO8(ebx, LO8(ebx) - 0x3E);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sub result */
    PUSH32(esp, 0x003070A1u); RECOMP_ABI_CALL(0x0018A280u, sub_0018A280); /* call 0x0018A280 */

loc_003070A1: ;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_003070B0
 * Original: 0x003070B0 - 0x003070E7 (55 bytes, 16 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003070B0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003070B0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0xC);
    SET_LO8(ecx, MEM8(esp + 0x10));
    PUSH32(esp, 0x43);
    edx = esp + 4;
    PUSH32(esp, edx);
    MEM32(esp + 8) = eax;
    SET_LO8(eax, MEM8(eax + 0x10B));
    _fb = (uint32_t)(0x3E) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* sub source, before the write */
    SET_LO8(ecx, LO8(ecx) - 0x3E);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sub result */
    PUSH32(esp, 4);
    PUSH32(esp, 0x6B710C);
    MEM8(esp + 0x14) = LO8(eax);
    MEM8(esp + 0x15) = LO8(ecx);
    PUSH32(esp, 0x003070E3u); RECOMP_ABI_CALL(0x000DAA60u, sub_000DAA60); /* call 0x000DAA60 */

loc_003070E3: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_003070F0
 * Original: 0x003070F0 - 0x0030713B (75 bytes, 25 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003070F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003070F0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, 0x605B44);
    PUSH32(esp, 0x00307100u); RECOMP_ABI_CALL(0x002F7C30u, sub_002F7C30); /* call 0x002F7C30 */

loc_00307100: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00307118; /* jne: not equal / not zero */

loc_00307107: ;
    PUSH32(esp, 0xFF);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    ebx = esi;
    PUSH32(esp, 0x00307115u); RECOMP_ABI_CALL(0x0018B690u, sub_0018B690); /* call 0x0018B690 */

loc_00307115: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00307118: ;
    PUSH32(esp, 0x605B4C);
    PUSH32(esp, 0x00307122u); RECOMP_ABI_CALL(0x002F7C30u, sub_002F7C30); /* call 0x002F7C30 */

loc_00307122: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00307138; /* jne: not equal / not zero */

loc_00307129: ;
    PUSH32(esp, 0xFF);
    ebx = esi;
    PUSH32(esp, 0x00307135u); RECOMP_ABI_CALL(0x0018B690u, sub_0018B690); /* call 0x0018B690 */

loc_00307135: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00307138: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00307140
 * Original: 0x00307140 - 0x00307156 (22 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00307140(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00307140: ;
    ecx = MEM32(esp + 4);
    PUSH32(esp, 0);
    PUSH32(esp, 0xFF);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    PUSH32(esp, 0x00307152u); RECOMP_ABI_CALL(0x001377D0u, sub_001377D0); /* call 0x001377D0 */

loc_00307152: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00307160
 * Original: 0x00307160 - 0x00307176 (22 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00307160(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00307160: ;
    ecx = MEM32(esp + 4);
    PUSH32(esp, 0);
    PUSH32(esp, 0xFF);
    SET_LO8(eax, 1);
    PUSH32(esp, 0x00307172u); RECOMP_ABI_CALL(0x001377D0u, sub_001377D0); /* call 0x001377D0 */

loc_00307172: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00307180
 * Original: 0x00307180 - 0x0030718D (13 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00307180(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00307180: ;
    MEM32(esp + 8) = 0xFF;
    g_seh_ebp = ebp; sub_0019FC30(); return; /* tail jmp 0x0019FC30 */

}

/**
 * sub_00307190
 * Original: 0x00307190 - 0x003071AA (26 bytes, 11 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00307190(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00307190: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, 0);
    PUSH32(esp, 0xFF);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x003071A4u); RECOMP_ABI_CALL(0x0019FD80u, sub_0019FD80); /* call 0x0019FD80 */

loc_003071A4: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_003071B0
 * Original: 0x003071B0 - 0x003071BD (13 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003071B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003071B0: ;
    MEM32(esp + 8) = 0xFF;
    g_seh_ebp = ebp; sub_0019E2C0(); return; /* tail jmp 0x0019E2C0 */

}

/**
 * sub_003071C0
 * Original: 0x003071C0 - 0x003071DA (26 bytes, 11 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003071C0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003071C0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, 0xFF);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x003071D4u); RECOMP_ABI_CALL(0x0019E6A0u, sub_0019E6A0); /* call 0x0019E6A0 */

loc_003071D4: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_003071E0
 * Original: 0x003071E0 - 0x003071EC (12 bytes, 5 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003071E0(void)
{

loc_003071E0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, 0x003071EAu); RECOMP_ABI_CALL(0x000D0920u, sub_000D0920); /* call 0x000D0920 */

loc_003071EA: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003071F0
 * Original: 0x003071F0 - 0x0030725E (110 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003071F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003071F0: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x78)); /* movss */
    eax = MEM32(esi + 0x23C);
    MEMF(esp) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x7C)); /* movss */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x80)); /* movss */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00307221u); RECOMP_ABI_CALL(0x00315260u, sub_00315260); /* call 0x00315260 */

loc_00307221: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00307237; /* je: equal / zero */

loc_00307225: ;
    eax = MEM32(esi + 0x23C);
    PUSH32(esp, 0x00307230u); RECOMP_ABI_CALL(0x00315260u, sub_00315260); /* call 0x00315260 */

loc_00307230: ;
    ecx = MEM32(eax + 0x64);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00307239; /* jne: not equal / not zero */

loc_00307237: ;
    eax = esi;

loc_00307239: ;
    ecx = MEM32(esi + 0x5E0);
    edx = MEM32(esp + 0x10);
    PUSH32(esp, 1);
    PUSH32(esp, ecx);
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0030725Au); RECOMP_ABI_CALL(0x0019BE40u, sub_0019BE40); /* call 0x0019BE40 */

loc_0030725A: ;
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00307260
 * Original: 0x00307260 - 0x00307271 (17 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00307260(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00307260: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, 1);
    PUSH32(esp, 0x0030726Cu); RECOMP_ABI_CALL(0x003071F0u, sub_003071F0); /* call 0x003071F0 */

loc_0030726C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00307280
 * Original: 0x00307280 - 0x00307291 (17 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00307280(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00307280: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0030728Cu); RECOMP_ABI_CALL(0x003071F0u, sub_003071F0); /* call 0x003071F0 */

loc_0030728C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003072A0
 * Original: 0x003072A0 - 0x003073F4 (340 bytes, 100 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003072A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003072A0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x64) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x64;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0x4E);
    eax = 0x44;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003072BDu); RECOMP_ABI_CALL(0x000D9C60u, sub_000D9C60); /* call 0x000D9C60 */

loc_003072BD: ;
    esi = MEM32(ebp + 8);
    edi = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00307317; /* je: equal / zero */

loc_003072CB: ;
    xmm0 = XMM_SCALAR(MEMF(0x648D80)); /* movss */
    MEMF(edi + 0x38) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEM32(edi + 0x34) = eax;
    MEM32(edi + 0x30) = eax;
    eax = esi;
    MEM32(edi + 0x2C) = esi;
    MEMF(edi + 0x3C) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003072F0u); RECOMP_ABI_CALL(0x001A7EF0u, sub_001A7EF0); /* call 0x001A7EF0 */

loc_003072F0: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00307313; /* je: equal / zero */

loc_003072F6: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003072FBu); RECOMP_ABI_CALL(0x003E2480u, sub_003E2480); /* call 0x003E2480 */

loc_003072FB: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ebx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ebx)); }
    MEM32(edi + 0x34) = edx;
    eax = MEM32(edx * 4 + 0x6B8CE8);
    PUSH32(esp, eax);
    eax = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00307310u); RECOMP_ABI_CALL(0x002F7B90u, sub_002F7B90); /* call 0x002F7B90 */

loc_00307310: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00307313: ;
    MEM8(edi + 0x40) = MEM8(edi + 0x40) | 1;
    _fa = (uint32_t)(MEM8(edi + 0x40)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */

loc_00307317: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    eax = MEM32(esi + 0x3C8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x649DB8)); /* movss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    if (CMP_EQ(_fa, _fb)) goto loc_003073ED; /* je: equal / zero */

loc_00307342: ;
    SET_LO8(ecx, MEM8(esi + 0x16E));
    SET_LO8(ecx, LO8(ecx) & 0xF);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0xF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0xF (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003073ED; /* je: equal / zero */

loc_00307354: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00307359u); RECOMP_ABI_CALL(0x003E1D70u, sub_003E1D70); /* call 0x003E1D70 */

loc_00307359: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0030735Eu); RECOMP_ABI_CALL(0x003E1D70u, sub_003E1D70); /* call 0x003E1D70 */

loc_0030735E: ;
    edx = esp + 0x30;
    PUSH32(esp, edx);
    PUSH32(esp, 0x5F47CC);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0030736Du); RECOMP_ABI_CALL(0x002F7810u, sub_002F7810); /* call 0x002F7810 */

loc_0030736D: ;
    eax = esp + 0x38;
    PUSH32(esp, eax);
    ecx = esp + 0x30;
    PUSH32(esp, ecx);
    edx = esp + 0x28;
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00307381u); RECOMP_ABI_CALL(0x001101F0u, sub_001101F0); /* call 0x001101F0 */

loc_00307381: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(esp + 0x10) = 3;
    MEM8(esp + 0x11) = 0xFF;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00307393u); RECOMP_ABI_CALL(0x003E2480u, sub_003E2480); /* call 0x003E2480 */

loc_00307393: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 6;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0);
    PUSH32(esp, 0x7F);
    PUSH32(esp, 0x437F0000);
    PUSH32(esp, 0x437F0000);
    PUSH32(esp, 0x437F0000);
    MEM8(esp + 0x2E) = 0;
    _fb = (uint32_t)(0xA) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0xA;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(esp + 0x2A) = LO16(edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003073C5u); RECOMP_ABI_CALL(0x003E2480u, sub_003E2480); /* call 0x003E2480 */

loc_003073C5: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0xC9;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    PUSH32(esp, ecx);
    ecx = esp + 0x40;
    _fb = (uint32_t)(0x37) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x37;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm0.f[0] = (float)(int32_t)edx; /* cvtsi2ss */
    edx = esp + 0x2C;
    MEMF(esp) = xmm0.f[0]; /* movss */
    PUSH32(esp, edx);
    SET_LO8(edx, 0); /* xor self */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003073EAu); RECOMP_ABI_CALL(0x0011E790u, sub_0011E790); /* call 0x0011E790 */

loc_003073EA: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003073ED: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00307400
 * Original: 0x00307400 - 0x0030760C (524 bytes, 140 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00307400(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00307400: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x78) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x78;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm1 = XMM_SCALAR(MEMF(0x64A5A0)); /* movss */
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(esi + 0x3C8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x649014)); /* movss */
    PUSH32(esp, edi);
    MEMF(esp + 0x24) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x3C) = xmm0.f[0]; /* movss */
    if (CMP_EQ(_fa, _fb)) goto loc_00307606; /* je: equal / zero */

loc_00307452: ;
    SET_LO8(eax, MEM8(esi + 0x16E));
    SET_LO8(eax, LO8(eax) & 0xF);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xF (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00307606; /* je: equal / zero */

loc_00307462: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00307467u); RECOMP_ABI_CALL(0x003E1D70u, sub_003E1D70); /* call 0x003E1D70 */

loc_00307467: ;
    xmm0.f[0] = xmm0.f[0] * MEMF(0x648E6C); /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x648EC8); /* addss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00307482u); RECOMP_ABI_CALL(0x003E1D70u, sub_003E1D70); /* call 0x003E1D70 */

loc_00307482: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x648CE0); /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x648CF4); /* addss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    if (CMP_EQ(_fa, _fb)) goto loc_003074A8; /* je: equal / zero */

loc_0030749C: ;
    ecx = esp + 0x40;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x5F47CC);
    goto loc_003074B2;

loc_003074A8: ;
    edx = esp + 0x40;
    PUSH32(esp, edx);
    PUSH32(esp, 0x638334);

loc_003074B2: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003074B7u); RECOMP_ABI_CALL(0x002F7810u, sub_002F7810); /* call 0x002F7810 */

loc_003074B7: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esp + 0x40;
    PUSH32(esp, eax);
    ecx = esp + 0x2C;
    PUSH32(esp, ecx);
    edx = esp + 0x24;
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003074CEu); RECOMP_ABI_CALL(0x001101F0u, sub_001101F0); /* call 0x001101F0 */

loc_003074CE: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    eax = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_003074DE; /* je: equal / zero */

loc_003074D7: ;
    PUSH32(esp, 0x5F47CC);
    goto loc_003074E3;

loc_003074DE: ;
    PUSH32(esp, 0x638334);

loc_003074E3: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003074E8u); RECOMP_ABI_CALL(0x002F77D0u, sub_002F77D0); /* call 0x002F77D0 */

loc_003074E8: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0);
    edi = eax;
    eax = esp + 0x34;
    PUSH32(esp, 0xFF);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00307505u); RECOMP_ABI_CALL(0x003E1D70u, sub_003E1D70); /* call 0x003E1D70 */

loc_00307505: ;
    xmm1 = xmm0; /* movaps */
    xmm0 = XMM_SCALAR(MEMF(0x649834)); /* movss */
    PUSH32(esp, ecx);
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    MEMF(esp) = xmm1.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00307523u); RECOMP_ABI_CALL(0x003E2480u, sub_003E2480); /* call 0x003E2480 */

loc_00307523: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x9C;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    _fb = (uint32_t)(0x64) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(edx, LO8(edx) + 0x64);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00307534u); RECOMP_ABI_CALL(0x003E2480u, sub_003E2480); /* call 0x003E2480 */

loc_00307534: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 5;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    eax = esp + 0x50;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    edx = esp + 0x34;
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    ecx = esp + 0x48;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00307553u); RECOMP_ABI_CALL(0x00185E10u, sub_00185E10); /* call 0x00185E10 */

loc_00307553: ;
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(esp + 0x14) = 3;
    MEM8(esp + 0x15) = 0xFF;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00307565u); RECOMP_ABI_CALL(0x003E2480u, sub_003E2480); /* call 0x003E2480 */

loc_00307565: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 5;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0);
    PUSH32(esp, 0x7F);
    PUSH32(esp, 0x437F0000);
    PUSH32(esp, 0x437F0000);
    PUSH32(esp, 0x437F0000);
    MEM8(esp + 0x32) = 0;
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 3;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(esp + 0x2E) = LO16(edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00307597u); RECOMP_ABI_CALL(0x003E2480u, sub_003E2480); /* call 0x003E2480 */

loc_00307597: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0xC9;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    PUSH32(esp, ecx);
    ecx = esp + 0x44;
    _fb = (uint32_t)(0x37) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x37;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm0.f[0] = (float)(int32_t)edx; /* cvtsi2ss */
    edx = esp + 0x30;
    MEMF(esp) = xmm0.f[0]; /* movss */
    PUSH32(esp, edx);
    SET_LO8(edx, 0); /* xor self */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003075BCu); RECOMP_ABI_CALL(0x0011E790u, sub_0011E790); /* call 0x0011E790 */

loc_003075BC: ;
    xmm0 = XMM_SCALAR(MEMF(0x64A200)); /* movss */
    PUSH32(esp, 0x14);
    PUSH32(esp, 0xF);
    PUSH32(esp, 0x3A8163D3);
    PUSH32(esp, 0x447D4000);
    eax = esp + 0x58;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003075DBu); RECOMP_ABI_CALL(0x0019B600u, sub_0019B600); /* call 0x0019B600 */

loc_003075DB: ;
    xmm2 = XMM_SCALAR(MEMF(0x64A59C)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x64A598)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x64A200)); /* movss */
    PUSH32(esp, 0xFF);
    PUSH32(esp, 5);
    eax = esp + 0x60;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00307603u); RECOMP_ABI_CALL(0x0019B530u, sub_0019B530); /* call 0x0019B530 */

loc_00307603: ;
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00307606: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00307610
 * Original: 0x00307610 - 0x0030761E (14 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00307610(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00307610: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, ebx);
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    PUSH32(esp, 0x0030761Cu); RECOMP_ABI_CALL(0x00307400u, sub_00307400); /* call 0x00307400 */

loc_0030761C: ;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00307620
 * Original: 0x00307620 - 0x0030762E (14 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00307620(void)
{

loc_00307620: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, ebx);
    SET_LO8(ebx, 1);
    PUSH32(esp, 0x0030762Cu); RECOMP_ABI_CALL(0x00307400u, sub_00307400); /* call 0x00307400 */

loc_0030762C: ;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00307630
 * Original: 0x00307630 - 0x0030764E (30 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00307630(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00307630: ;
    eax = MEM32(esp + 4);
    SET_LO16(edx, MEM16(eax + 0xA4));
    MEM32(esp + 8) = 0;
    MEM32(esp + 4) = eax;
    SET_LO8(ecx, 1);
    g_seh_ebp = ebp; sub_000E8120(); return; /* tail jmp 0x000E8120 */

}

/**
 * sub_00307650
 * Original: 0x00307650 - 0x003076F2 (162 bytes, 42 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00307650(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00307650: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x18);
    PUSH32(esp, 0xFF);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00307663u); RECOMP_ABI_CALL(0x001A0040u, sub_001A0040); /* call 0x001A0040 */

loc_00307663: ;
    eax = MEM32(esi + 0x564);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003076ED; /* je: equal / zero */

loc_00307670: ;
    MEM8(esp + 4) = 1;
    PUSH32(esp, 0x0030767Au); RECOMP_ABI_CALL(0x003E2480u, sub_003E2480); /* call 0x003E2480 */

loc_0030767A: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 7;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    SET_LO8(eax, 1);
    _fb = (uint32_t)(0xA) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0xA;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(esp + 6) = LO16(edx);
    edx = MEM32(esi + 0x564);
    SET_LO8(ecx, MEM8(edx + 0x2A8));
    SET_LO8(eax, LO8(eax) << LO8(ecx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    MEM8(esp + 0x10) = LO8(eax);
    PUSH32(esp, 0x003076A3u); RECOMP_ABI_CALL(0x003E1D70u, sub_003E1D70); /* call 0x003E1D70 */

loc_003076A3: ;
    xmm5 = XMM_SCALAR(MEMF(0x648F58)); /* movss */
    xmm6 = XMM_SCALAR(MEMF(0x648E14)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm5.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm6.f[0]; /* addss */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x003076C6u); RECOMP_ABI_CALL(0x003E1D70u, sub_003E1D70); /* call 0x003E1D70 */

loc_003076C6: ;
    PUSH32(esp, 0xFF);
    ecx = esp + 8;
    xmm0.f[0] = xmm0.f[0] * xmm5.f[0]; /* mulss */
    PUSH32(esp, 0);
    xmm0.f[0] = xmm0.f[0] + xmm6.f[0]; /* addss */
    PUSH32(esp, ecx);
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    MEM8(esp + 0x1D) = 0xFF;
    PUSH32(esp, 0x003076EAu); RECOMP_ABI_CALL(0x0015A3F0u, sub_0015A3F0); /* call 0x0015A3F0 */

loc_003076EA: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003076ED: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00307700
 * Original: 0x00307700 - 0x00307869 (361 bytes, 116 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00307700(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00307700: ;
    eax = MEM32(0x84A5F8);
    eax = MEM32(eax + 0x568);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_00307766; /* je: equal / zero */

loc_00307713: ;
    SET_LO8(ecx, MEM8(eax + 0xB2));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00307766; /* je: equal / zero */

loc_0030771D: ;
    esi = MEM32(esp + 0x18);
    PUSH32(esp, 0xFF);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0030772Cu); RECOMP_ABI_CALL(0x0019DCF0u, sub_0019DCF0); /* call 0x0019DCF0 */

loc_0030772C: ;
    ecx = MEM32(0x847024);
    eax = MEM32(ecx + 0x40);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00307750; /* je: equal / zero */

loc_0030773C: ;
    ecx = MEM32(esi + 0x564);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00307750; /* je: equal / zero */

loc_00307746: ;
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    ecx = 0xC9B;
    goto loc_003077CF;

loc_00307750: ;
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0);
    edx = esi + 0x78;
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    ecx = 0xC9B;
    goto loc_003077D9;

loc_00307766: ;
    esi = MEM32(esp + 0x18);
    PUSH32(esp, 0xFF);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00307775u); RECOMP_ABI_CALL(0x0019D720u, sub_0019D720); /* call 0x0019D720 */

loc_00307775: ;
    eax = MEM32(0x847024);
    eax = MEM32(eax + 0x40);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0030779D; /* je: equal / zero */

loc_00307784: ;
    ecx = MEM32(esi + 0x564);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0030779D; /* je: equal / zero */

loc_0030778E: ;
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    goto loc_003077AC;

loc_0030779D: ;
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0);
    ecx = esi + 0x78;
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, 0);

loc_003077AC: ;
    PUSH32(esp, eax);
    ecx = 0xC9C;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx = edx | 0xFFFFFFFFu;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, 0x003077BDu); RECOMP_ABI_CALL(0x00022D90u, sub_00022D90); /* call 0x00022D90 */

loc_003077BD: ;
    edx = MEM32(0x847024);
    eax = MEM32(edx + 0x40);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    ecx = 0xCA7;

loc_003077CF: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 4);

loc_003077D9: ;
    PUSH32(esp, eax);
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx = edx | 0xFFFFFFFFu;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, 0x003077E5u); RECOMP_ABI_CALL(0x00022D90u, sub_00022D90); /* call 0x00022D90 */

loc_003077E5: ;
    eax = MEM32(esi + 0x564);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00307864; /* je: equal / zero */

loc_003077EF: ;
    MEM8(esp + 4) = 1;
    PUSH32(esp, 0x003077F9u); RECOMP_ABI_CALL(0x003E2480u, sub_003E2480); /* call 0x003E2480 */

loc_003077F9: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 5;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    SET_LO8(eax, 1);
    _fb = (uint32_t)(0xF) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0xF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(esp + 6) = LO16(edx);
    edx = MEM32(esi + 0x564);
    SET_LO8(ecx, MEM8(edx + 0x2A8));
    SET_LO8(eax, LO8(eax) << LO8(ecx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    MEM8(esp + 0x10) = LO8(eax);
    PUSH32(esp, 0x00307822u); RECOMP_ABI_CALL(0x003E1D70u, sub_003E1D70); /* call 0x003E1D70 */

loc_00307822: ;
    xmm5 = XMM_SCALAR(MEMF(0x649B80)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm5.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm5.f[0]; /* addss */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x0030783Du); RECOMP_ABI_CALL(0x003E1D70u, sub_003E1D70); /* call 0x003E1D70 */

loc_0030783D: ;
    PUSH32(esp, 0xFF);
    ecx = esp + 8;
    xmm0.f[0] = xmm0.f[0] * xmm5.f[0]; /* mulss */
    PUSH32(esp, 0);
    xmm0.f[0] = xmm0.f[0] + xmm5.f[0]; /* addss */
    PUSH32(esp, ecx);
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    MEM8(esp + 0x1D) = 0xFF;
    PUSH32(esp, 0x00307861u); RECOMP_ABI_CALL(0x0015A3F0u, sub_0015A3F0); /* call 0x0015A3F0 */

loc_00307861: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00307864: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00307870
 * Original: 0x00307870 - 0x00307886 (22 bytes, 9 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00307870(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00307870: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    SET_LO8(ebx, LO8(ebx) | 0xFF);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    PUSH32(esp, 0x00307881u); RECOMP_ABI_CALL(0x0019EC20u, sub_0019EC20); /* call 0x0019EC20 */

loc_00307881: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00307890
 * Original: 0x00307890 - 0x003078A6 (22 bytes, 9 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00307890(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00307890: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    SET_LO8(ebx, LO8(ebx) | 0xFF);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    PUSH32(esp, 0x003078A1u); RECOMP_ABI_CALL(0x0019EC20u, sub_0019EC20); /* call 0x0019EC20 */

loc_003078A1: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_003078B0
 * Original: 0x003078B0 - 0x003078C6 (22 bytes, 9 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003078B0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003078B0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    SET_LO8(ebx, LO8(ebx) | 0xFF);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    PUSH32(esp, 0x003078C1u); RECOMP_ABI_CALL(0x0019EC20u, sub_0019EC20); /* call 0x0019EC20 */

loc_003078C1: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_003078D0
 * Original: 0x003078D0 - 0x00307930 (96 bytes, 32 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003078D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003078D0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(0x6B8160);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    eax = MEM32(esi + 0x4B0);
    ecx = MEM32(eax + 0x24);
    edx = MEM32(ecx + 8);
    eax = MEM32(edx + 0x10);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0x003078F9u); RECOMP_ABI_CALL(0x00415EC0u, sub_00415EC0); /* call 0x00415EC0 */

loc_003078F9: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0030790D; /* je: equal / zero */

loc_00307900: ;
    eax = MEM32(esp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0030790D; /* je: equal / zero */

loc_00307908: ;
    edx = MEM32(eax + 8);
    goto loc_0030790F;

loc_0030790D: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0030790F: ;
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x599AD0);
    PUSH32(esp, 0x599AC4);
    eax = esi;
    PUSH32(esp, 0x0030792Au); RECOMP_ABI_CALL(0x0019B7E0u, sub_0019B7E0); /* call 0x0019B7E0 */

loc_0030792A: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00307930
 * Original: 0x00307930 - 0x00307971 (65 bytes, 21 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00307930(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00307930: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    SET_LO8(eax, MEM8(esi + 0x10B));
    PUSH32(esp, 0x3C);
    ecx = esp + 8;
    PUSH32(esp, ecx);
    PUSH32(esp, 2);
    PUSH32(esp, 0x6B3F84);
    MEM32(esp + 0x14) = esi;
    MEM8(esp + 0x18) = LO8(eax);
    PUSH32(esp, 0x00307959u); RECOMP_ABI_CALL(0x000DAA60u, sub_000DAA60); /* call 0x000DAA60 */

loc_00307959: ;
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0x78);
    SET_LO8(ecx, 4);
    eax = esi;
    PUSH32(esp, 0x00307969u); RECOMP_ABI_CALL(0x0019A800u, sub_0019A800); /* call 0x0019A800 */

loc_00307969: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00307980
 * Original: 0x00307980 - 0x003079C1 (65 bytes, 21 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00307980(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00307980: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    SET_LO8(eax, MEM8(esi + 0x10B));
    PUSH32(esp, 0x3C);
    ecx = esp + 8;
    PUSH32(esp, ecx);
    PUSH32(esp, 2);
    PUSH32(esp, 0x6B3F84);
    MEM32(esp + 0x14) = esi;
    MEM8(esp + 0x18) = LO8(eax);
    PUSH32(esp, 0x003079A9u); RECOMP_ABI_CALL(0x000DAA60u, sub_000DAA60); /* call 0x000DAA60 */

loc_003079A9: ;
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0x78);
    SET_LO8(ecx, 2);
    eax = esi;
    PUSH32(esp, 0x003079B9u); RECOMP_ABI_CALL(0x0019A800u, sub_0019A800); /* call 0x0019A800 */

loc_003079B9: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_003079D0
 * Original: 0x003079D0 - 0x00307A11 (65 bytes, 21 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003079D0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003079D0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    SET_LO8(eax, MEM8(esi + 0x10B));
    PUSH32(esp, 0x3C);
    ecx = esp + 8;
    PUSH32(esp, ecx);
    PUSH32(esp, 2);
    PUSH32(esp, 0x6B3F84);
    MEM32(esp + 0x14) = esi;
    MEM8(esp + 0x18) = LO8(eax);
    PUSH32(esp, 0x003079F9u); RECOMP_ABI_CALL(0x000DAA60u, sub_000DAA60); /* call 0x000DAA60 */

loc_003079F9: ;
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0x78);
    SET_LO8(ecx, 3);
    eax = esi;
    PUSH32(esp, 0x00307A09u); RECOMP_ABI_CALL(0x0019A800u, sub_0019A800); /* call 0x0019A800 */

loc_00307A09: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00307A20
 * Original: 0x00307A20 - 0x00307A3B (27 bytes, 9 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00307A20(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00307A20: ;
    SET_LO8(ecx, MEM8(esp + 8));
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, 0xFF);
    _fb = (uint32_t)(0x55) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* sub source, before the write */
    SET_LO8(ecx, LO8(ecx) - 0x55);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sub result */
    PUSH32(esp, 0x00307A36u); RECOMP_ABI_CALL(0x0014CD70u, sub_0014CD70); /* call 0x0014CD70 */

loc_00307A36: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00307A40
 * Original: 0x00307A40 - 0x00307A6C (44 bytes, 13 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00307A40(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00307A40: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0xC);
    PUSH32(esp, 0x18);
    ecx = esp + 4;
    PUSH32(esp, ecx);
    MEM32(esp + 8) = eax;
    SET_LO8(eax, MEM8(eax + 0x10B));
    PUSH32(esp, 2);
    PUSH32(esp, 0x6B3F84);
    MEM8(esp + 0x14) = LO8(eax);
    PUSH32(esp, 0x00307A68u); RECOMP_ABI_CALL(0x000DAA60u, sub_000DAA60); /* call 0x000DAA60 */

loc_00307A68: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00307A70
 * Original: 0x00307A70 - 0x00307ACE (94 bytes, 33 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00307A70(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00307A70: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x58) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x58;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    eax = MEM32(esi + 0x3C8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_00307AC8; /* je: equal / zero */

loc_00307A88: ;
    SET_LO8(eax, MEM8(esi + 0x16E));
    SET_LO8(eax, LO8(eax) & 0xF);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xF (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00307AC8; /* je: equal / zero */

loc_00307A94: ;
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x5F45C8);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00307AA3u); RECOMP_ABI_CALL(0x002F7810u, sub_002F7810); /* call 0x002F7810 */

loc_00307AA3: ;
    edx = esp + 0x28;
    PUSH32(esp, edx);
    eax = esp + 0x20;
    PUSH32(esp, eax);
    PUSH32(esp, 0x597F70);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00307AB7u); RECOMP_ABI_CALL(0x001101F0u, sub_001101F0); /* call 0x001101F0 */

loc_00307AB7: ;
    PUSH32(esp, 0xFF);
    edi = esp + 0x2C;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00307AC5u); RECOMP_ABI_CALL(0x0015DAF0u, sub_0015DAF0); /* call 0x0015DAF0 */

loc_00307AC5: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00307AC8: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00307AD0
 * Original: 0x00307AD0 - 0x00307B1E (78 bytes, 17 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00307AD0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00307AD0: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0x10);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x78)); /* movss */
    PUSH32(esp, 0xF);
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x7C)); /* movss */
    PUSH32(esp, 0xC);
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x80)); /* movss */
    PUSH32(esp, 0x39AEC33E);
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x64A244)); /* movss */
    PUSH32(esp, 0x453B8000);
    eax = esp + 0x10;
    PUSH32(esp, 0x00307B1Au); RECOMP_ABI_CALL(0x0019B600u, sub_0019B600); /* call 0x0019B600 */

loc_00307B1A: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00307B20
 * Original: 0x00307B20 - 0x00307B82 (98 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00307B20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00307B20: ;
    PUSH32(esp, esi);
    esi = MEM32(0x84A5F8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(ecx, 0x12);
    goto loc_00307B30;

    /* nop */

loc_00307B30: ;
    edx = MEM32(esi + 0x64);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00307B3F; /* je: equal / zero */

loc_00307B37: ;
    _fa = (uint32_t)(MEM8(esi + 0x10B)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x10B), LO8(ecx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00307B4F; /* je: equal / zero */

loc_00307B3F: ;
    _fb = (uint32_t)(0x6D0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x6D0;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x81) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x81 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00307B30; /* jl: less (signed <) */

loc_00307B4D: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00307B4F: ;
    PUSH32(esp, 0x00307B54u); RECOMP_ABI_CALL(0x0018C010u, sub_0018C010); /* call 0x0018C010 */

loc_00307B54: ;
    PUSH32(esp, 0x00307B59u); RECOMP_ABI_CALL(0x0018C400u, sub_0018C400); /* call 0x0018C400 */

loc_00307B59: ;
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0);
    PUSH32(esp, 0x43020000);
    PUSH32(esp, 0x437F0000);
    PUSH32(esp, 0x428C0000);
    PUSH32(esp, 2);
    PUSH32(esp, 1);
    ecx = 0x12C;
    PUSH32(esp, 0x00307B7Du); RECOMP_ABI_CALL(0x0011F960u, sub_0011F960); /* call 0x0011F960 */

loc_00307B7D: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00307B90
 * Original: 0x00307B90 - 0x00307C16 (134 bytes, 41 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00307B90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00307B90: ;
    eax = MEM32(0x84A5F8);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(edx, 0x12);
    PUSH32(esp, esi);
    /* nop */

loc_00307BA0: ;
    esi = MEM32(eax + 0x64);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00307BAF; /* je: equal / zero */

loc_00307BA7: ;
    _fa = (uint32_t)(MEM8(eax + 0x10B)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x10B), LO8(edx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00307BC2; /* je: equal / zero */

loc_00307BAF: ;
    _fb = (uint32_t)(0x6D0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x6D0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x81) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x81 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00307BA0; /* jl: less (signed <) */

loc_00307BBD: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00307BC2: ;
    PUSH32(esp, 0x43);
    ecx = esp + 8;
    PUSH32(esp, ecx);
    MEM32(esp + 0xC) = eax;
    SET_LO8(eax, MEM8(eax + 0x10B));
    edx = esp + 0x14;
    PUSH32(esp, 3);
    PUSH32(esp, edx);
    MEM8(esp + 0x18) = LO8(eax);
    MEM32(esp + 0x1C) = 0x32;
    MEM32(esp + 0x20) = 0x5F;
    MEM32(esp + 0x24) = 0x6C;
    PUSH32(esp, 0x00307BFBu); RECOMP_ABI_CALL(0x000DAA60u, sub_000DAA60); /* call 0x000DAA60 */

loc_00307BFB: ;
    PUSH32(esp, 0x43);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    PUSH32(esp, 2);
    PUSH32(esp, 0x6B3F84);
    PUSH32(esp, 0x00307C0Eu); RECOMP_ABI_CALL(0x000DAA60u, sub_000DAA60); /* call 0x000DAA60 */

loc_00307C0E: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00307C20
 * Original: 0x00307C20 - 0x00307C2D (13 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00307C20(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00307C20: ;
    MEM32(esp + 8) = 0xFF;
    g_seh_ebp = ebp; sub_0016D7E0(); return; /* tail jmp 0x0016D7E0 */

}

/**
 * sub_00307C30
 * Original: 0x00307C30 - 0x00307C39 (9 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00307C30(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00307C30: ;
    eax = MEM32(esp + 4);
    g_seh_ebp = ebp; sub_000C8E10(); return; /* tail jmp 0x000C8E10 */

}

/**
 * sub_00307C40
 * Original: 0x00307C40 - 0x00307CA0 (96 bytes, 32 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00307C40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00307C40: ;
    PUSH32(esp, ebx);
    ebx = MEM32(0x6B8158);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    eax = MEM32(esi + 0x4B0);
    ecx = MEM32(eax + 0x24);
    edx = MEM32(ecx + 8);
    eax = MEM32(edx + 0x10);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00307C69u); RECOMP_ABI_CALL(0x00415EC0u, sub_00415EC0); /* call 0x00415EC0 */

loc_00307C69: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00307C7D; /* je: equal / zero */

loc_00307C70: ;
    eax = MEM32(esp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00307C7D; /* je: equal / zero */

loc_00307C78: ;
    edx = MEM32(eax + 8);
    goto loc_00307C7F;

loc_00307C7D: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00307C7F: ;
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0x3F333333);
    PUSH32(esp, 0x599A70);
    PUSH32(esp, 0x599A64);
    eax = esi;
    PUSH32(esp, 0x00307C9Au); RECOMP_ABI_CALL(0x0019B7E0u, sub_0019B7E0); /* call 0x0019B7E0 */

loc_00307C9A: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00307CA0
 * Original: 0x00307CA0 - 0x003081D0 (1328 bytes, 259 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00307CA0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00307CA0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x108) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x108;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    eax = MEM32(esi + 0x3C8);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003081CA; /* je: equal / zero */

loc_00307CC1: ;
    eax = MEM32(esi + 0x68);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(esp + 0xC0) = 0x606204;
    MEM32(esp + 0xC4) = 0x6061E4;
    MEM32(esp + 0xC8) = 0x6061B8;
    MEM32(esp + 0xCC) = 0x6061A8;
    MEM32(esp + 0x14) = 0x60647C;
    MEM32(esp + 0x18) = 0x5F44D0;
    MEM32(esp + 0x1C) = 0x5F2480;
    MEM32(esp + 0x20) = 0x5F3558;
    if (CMP_NE(_fa, _fb)) goto loc_00307D51; /* jne: not equal / not zero */

loc_00307D14: ;
    xmm0 = XMM_SCALAR(MEMF(0x648CE4)); /* movss */
    MEMF(esp + 0xB4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x64938C)); /* movss */
    MEMF(esp + 0xB8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x648E3C)); /* movss */
    MEMF(esp + 0xBC) = xmm0.f[0]; /* movss */
    eax = 0x5D58C4;
    goto loc_00307DDC;

loc_00307D51: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x99) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x99 (32-bit) */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esp + 0xB4) = xmm0.f[0]; /* movss */
    MEMF(esp + 0xB8) = xmm0.f[0]; /* movss */
    MEMF(esp + 0xBC) = xmm0.f[0]; /* movss */
    if (CMP_NE(_fa, _fb)) goto loc_00307DC4; /* jne: not equal / not zero */

loc_00307D76: ;
    eax = MEM32(ebp + 0xC);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_00307DAD; /* je: equal / zero */

loc_00307D7C: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_00307D96; /* je: equal / zero */

loc_00307D7F: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00307D84u); RECOMP_ABI_CALL(0x003E2480u, sub_003E2480); /* call 0x003E2480 */

loc_00307D84: ;
    eax = eax & 0x80000003u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if ((_fas >= 0)) goto loc_00307D90; /* jns: not sign (positive) */

loc_00307D8B: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = eax | 0xFFFFFFFCu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00307D90: ;
    eax = MEM32(esp + eax * 4 + 0x14);
    goto loc_00307DDC;

loc_00307D96: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00307D9Bu); RECOMP_ABI_CALL(0x003E2480u, sub_003E2480); /* call 0x003E2480 */

loc_00307D9B: ;
    eax = eax & 0x80000001u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if ((_fas >= 0)) goto loc_00307DA7; /* jns: not sign (positive) */

loc_00307DA2: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = eax | 0xFFFFFFFEu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00307DA7: ;
    eax = MEM32(esp + eax * 4 + 0x1C);
    goto loc_00307DDC;

loc_00307DAD: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00307DB2u); RECOMP_ABI_CALL(0x003E2480u, sub_003E2480); /* call 0x003E2480 */

loc_00307DB2: ;
    eax = eax & 0x80000001u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if ((_fas >= 0)) goto loc_00307DBE; /* jns: not sign (positive) */

loc_00307DB9: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = eax | 0xFFFFFFFEu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00307DBE: ;
    eax = MEM32(esp + eax * 4 + 0x14);
    goto loc_00307DDC;

loc_00307DC4: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00307DC9u); RECOMP_ABI_CALL(0x003E2480u, sub_003E2480); /* call 0x003E2480 */

loc_00307DC9: ;
    eax = eax & 0x80000003u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if ((_fas >= 0)) goto loc_00307DD5; /* jns: not sign (positive) */

loc_00307DD0: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = eax | 0xFFFFFFFCu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00307DD5: ;
    eax = MEM32(esp + eax * 4 + 0xC0);

loc_00307DDC: ;
    ecx = esp + 0xD0;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00307DEAu); RECOMP_ABI_CALL(0x002F7810u, sub_002F7810); /* call 0x002F7810 */

loc_00307DEA: ;
    edx = esp + 0xD8;
    PUSH32(esp, edx);
    eax = esp + 0x30;
    PUSH32(esp, eax);
    ecx = esp + 0xC4;
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00307E04u); RECOMP_ABI_CALL(0x001101F0u, sub_001101F0); /* call 0x001101F0 */

loc_00307E04: ;
    eax = MEM32(esi + 0x68);
    xmm1 = XMM_SCALAR(MEMF(esi + 0x294)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(0x648D14)); /* movss */
    xmm1.f[0] = xmm1.f[0] + MEMF(0x64908C); /* addss */
    xmm2 = XMM_SCALAR(MEMF(0x648D20)); /* movss */
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x5E) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x5E (32-bit) */
    xmm0 = xmm3; /* movaps */
    MEMF(esp + 0x28) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    if (CMP_NE(_fa, _fb)) goto loc_00307E4D; /* jne: not equal / not zero */

loc_00307E3E: ;
    MEMF(esp + 0x28) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x10) = xmm2.f[0]; /* movss */
    xmm0 = xmm2; /* movaps */

loc_00307E4D: ;
    eax = MEM32(esp + 0x24);
    ecx = MEM32(esp + 0x28);
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] * MEMF(0x648F98); /* mulss */
    edx = (uint32_t)recomp_cvt_si32((double)xmm1.f[0], g_mxcsr, 1); /* cvttss2si */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] * MEMF(0x6490F4); /* mulss */
    MEMF(esp + 0x48) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x648D34)); /* movss */
    MEM32(esp + 0x38) = eax;
    MEMF(esp + 0x4C) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x648D10)); /* movss */
    eax = (uint32_t)recomp_cvt_si32((double)xmm0.f[0], g_mxcsr, 1); /* cvttss2si */
    MEMF(esp + 0x50) = xmm1.f[0]; /* movss */
    MEM32(esp + 0x68) = eax;
    SET_LO8(eax, 0xB4);
    MEM32(esp + 0x3C) = ecx;
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] * MEMF(0x648D1C); /* mulss */
    MEM32(esp + 0x34) = edx;
    edx = MEM32(esp + 0x2C);
    MEM8(esp + 0x77) = LO8(eax);
    MEM8(esp + 0x76) = LO8(eax);
    SET_LO8(eax, 0xC8);
    ecx = esp + 0x30;
    MEMF(esp + 0x54) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x648CE4)); /* movss */
    PUSH32(esp, 0xFF);
    esi = 2;
    PUSH32(esp, ecx);
    MEM32(esp + 0x38) = 0x14;
    MEM32(esp + 0x48) = edx;
    MEMF(esp + 0x4C) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x60) = xmm1.f[0]; /* movss */
    MEM16(esp + 0x64) = LO16(ebx);
    MEM16(esp + 0x66) = 0xFF;
    MEM16(esp + 0x68) = 0xFFC0;
    MEM16(esp + 0x6A) = 0x50;
    MEM32(esp + 0x6C) = esi;
    MEM16(esp + 0x74) = 0xA;
    MEM16(esp + 0x76) = 0xF;
    MEM16(esp + 0x78) = 1;
    MEM8(esp + 0x7A) = 4;
    MEM8(esp + 0x7B) = 2;
    MEM8(esp + 0x7C) = 3;
    MEM8(esp + 0x7D) = 0xFF;
    MEM8(esp + 0x80) = 0xFF;
    MEM8(esp + 0x83) = LO8(ebx);
    MEM8(esp + 0x82) = LO8(ebx);
    MEM8(esp + 0x81) = LO8(ebx);
    MEM8(esp + 0x84) = LO8(ebx);
    MEM8(esp + 0x87) = LO8(eax);
    MEM8(esp + 0x86) = LO8(eax);
    MEM8(esp + 0x85) = 0xFF;
    MEM8(esp + 0x88) = 0xFF;
    MEM8(esp + 0x8B) = LO8(ebx);
    MEM8(esp + 0x8A) = LO8(ebx);
    MEM8(esp + 0x89) = LO8(ebx);
    MEM8(esp + 0x8C) = LO8(ebx);
    MEM8(esp + 0x8D) = 0xFF;
    MEM8(esp + 0x8E) = LO8(ebx);
    MEM32(esp + 0x90) = 0x205;
    MEM32(esp + 0x94) = 0x63000;
    MEM16(esp + 0x98) = 8;
    MEM16(esp + 0x9A) = 0x1F;
    MEM16(esp + 0x9C) = 1;
    MEM8(esp + 0x9E) = LO8(ebx);
    MEMF(esp + 0xA0) = xmm3.f[0]; /* movss */
    MEM8(esp + 0xA4) = 0xFF;
    MEM8(esp + 0xA5) = LO8(ebx);
    MEM8(esp + 0xA6) = 0xFF;
    MEM8(esp + 0xA7) = 0xFF;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00308011u); RECOMP_ABI_CALL(0x000F4BF0u, sub_000F4BF0); /* call 0x000F4BF0 */

loc_00308011: ;
    MEM32(esp + 0x64) = 0x2B;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0030801Eu); RECOMP_ABI_CALL(0x003E2480u, sub_003E2480); /* call 0x003E2480 */

loc_0030801E: ;
    xmm5 = XMM_ZERO(); /* xorps self = zero */
    MEM16(esp + 0x38) = 5;
    MEMF(esp + 0x3C) = xmm5.f[0]; /* movss */
    MEMF(esp + 0x40) = xmm5.f[0]; /* movss */
    MEM8(esp + 0x44) = 0xFF;
    MEM8(esp + 0x45) = 0xFF;
    MEM8(esp + 0x46) = 0xFF;
    MEM8(esp + 0x47) = 0xFF;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0030804Du); RECOMP_ABI_CALL(0x003E1D70u, sub_003E1D70); /* call 0x003E1D70 */

loc_0030804D: ;
    xmm0.f[0] = xmm0.f[0] * MEMF(0x6493A8); /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x648EA0); /* addss */
    edx = MEM32(esp + 0x2C);
    eax = MEM32(esp + 0x30);
    ecx = MEM32(esp + 0x34);
    MEMF(esp + 0x78) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x74) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x648D14)); /* movss */
    MEM32(esp + 0x7C) = edx;
    MEM32(esp + 0x80) = eax;
    MEM32(esp + 0x84) = ecx;
    MEMF(esp + 0x88) = xmm5.f[0]; /* movss */
    MEMF(esp + 0x8C) = xmm5.f[0]; /* movss */
    MEMF(esp + 0x90) = xmm5.f[0]; /* movss */
    MEMF(esp + 0x94) = xmm5.f[0]; /* movss */
    MEMF(esp + 0x98) = xmm5.f[0]; /* movss */
    MEMF(esp + 0x9C) = xmm5.f[0]; /* movss */
    MEMF(esp + 0xA0) = xmm5.f[0]; /* movss */
    MEM16(esp + 0x68) = 4;
    MEM16(esp + 0x6A) = 0x3F;
    MEM16(esp + 0x6C) = 1;
    MEMF(esp + 0x70) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003080EEu); RECOMP_ABI_CALL(0x003E2480u, sub_003E2480); /* call 0x003E2480 */

loc_003080EE: ;
    eax = eax & 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax << 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(esp + 0x1C) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003080FCu); RECOMP_ABI_CALL(0x003E2480u, sub_003E2480); /* call 0x003E2480 */

loc_003080FC: ;
    ecx = MEM32(esp + 0x1C);
    PUSH32(esp, 0xFF);
    eax = eax & 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ebx);
    ecx = ecx | eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, ebx);
    ecx = ecx << 6;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = esp + 0x44;
    ecx = ecx | 0xC201;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, 1);
    PUSH32(esp, edx);
    MEM32(esp + 0xB8) = ecx;
    MEM8(esp + 0xC0) = 0xFF;
    MEM8(esp + 0xC1) = 0xFF;
    MEM8(esp + 0xC2) = 0xFF;
    MEM8(esp + 0xC3) = 4;
    MEM32(esp + 0x5C) = esi;
    MEM32(esp + 0x60) = esi;
    MEM32(esp + 0x64) = ebx;
    MEM32(esp + 0x68) = 4;
    MEM32(esp + 0x6C) = esi;
    MEM32(esp + 0x70) = ebx;
    MEM32(esp + 0x74) = 0x303;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0030816Cu); RECOMP_ABI_CALL(0x00105450u, sub_00105450); /* call 0x00105450 */

loc_0030816C: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x2C)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x59D948); /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x64A240); /* addss */
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0xFF);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x7F);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, ecx);
    eax = esp + 0x30;
    MEMF(esp) = xmm0.f[0]; /* movss */
    PUSH32(esp, eax);
    SET_LO8(edx, 0); /* xor self */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    ecx = esp + 0x44;
    MEM8(esp + 0x34) = 3;
    MEM8(esp + 0x35) = 0x18;
    MEM16(esp + 0x36) = 6;
    MEM8(esp + 0x3A) = LO8(ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003081C7u); RECOMP_ABI_CALL(0x0011E790u, sub_0011E790); /* call 0x0011E790 */

loc_003081C7: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003081CA: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_003081D0
 * Original: 0x003081D0 - 0x003081F4 (36 bytes, 15 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003081D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003081D0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(0x84A5F8);
    ecx = MEM32(eax + 0x64);
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003081F0; /* je: equal / zero */

loc_003081E2: ;
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    eax = MEM32(ebp + 8);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003081EDu); RECOMP_ABI_CALL(0x001318F0u, sub_001318F0); /* call 0x001318F0 */

loc_003081ED: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003081F0: ;
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00308200
 * Original: 0x00308200 - 0x003082C1 (193 bytes, 56 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00308200(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00308200: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0xFC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xFC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    eax = MEM32(esi + 0x3C8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003082BC; /* je: equal / zero */

loc_0030821E: ;
    SET_LO8(eax, MEM8(esi + 0x16E));
    SET_LO8(eax, LO8(eax) & 0xF);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xF (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003082BC; /* je: equal / zero */

loc_0030822E: ;
    eax = MEM32(0x84A5F8);
    SET_LO8(ecx, MEM8(eax + 0x20C));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003082BC; /* je: equal / zero */

loc_0030823D: ;
    _fa = (uint32_t)(MEM16(eax + 0x3AE)) & 0xFFFFu; _fb = (uint32_t)(1) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax + 0x3AE), 1 (16-bit) */
    if (CMP_B(_fa, _fb)) goto loc_003082BC; /* jb: below (unsigned <) */

loc_00308247: ;
    edx = esi;
    eax = esp + 0x50;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00308252u); RECOMP_ABI_CALL(0x002A0430u, sub_002A0430); /* call 0x002A0430 */

loc_00308252: ;
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x5F0CA0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00308261u); RECOMP_ABI_CALL(0x002F7810u, sub_002F7810); /* call 0x002F7810 */

loc_00308261: ;
    edx = esp + 0x18;
    PUSH32(esp, edx);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, 0x59DC74);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00308275u); RECOMP_ABI_CALL(0x001101F0u, sub_001101F0); /* call 0x001101F0 */

loc_00308275: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = 3;
    /* nop */

loc_00308280: ;
    PUSH32(esp, 0xFF);
    ecx = esp + 0x54;
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    eax = esp + 0x10;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00308295u); RECOMP_ABI_CALL(0x00144C70u, sub_00144C70); /* call 0x00144C70 */

loc_00308295: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00308280; /* jne: not equal / not zero */

loc_0030829B: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003082A0u); RECOMP_ABI_CALL(0x003E1D70u, sub_003E1D70); /* call 0x003E1D70 */

loc_003082A0: ;
    xmm0.f[0] = xmm0.f[0] * MEMF(0x6493F4); /* mulss */
    edx = (uint32_t)recomp_cvt_si32((double)xmm0.f[0], g_mxcsr, 1); /* cvttss2si */
    eax = 2;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003082B9u); RECOMP_ABI_CALL(0x000B6F30u, sub_000B6F30); /* call 0x000B6F30 */

loc_003082B9: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003082BC: ;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_003082D0
 * Original: 0x003082D0 - 0x00308466 (406 bytes, 94 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003082D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003082D0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x13C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x13C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    eax = MEM32(esi + 0x3C8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00308461; /* je: equal / zero */

loc_003082EE: ;
    SET_LO8(eax, MEM8(esi + 0x16E));
    SET_LO8(eax, LO8(eax) & 0xF);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xF (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00308461; /* je: equal / zero */

loc_003082FE: ;
    ecx = esp + 0x50;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x5D58CC);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0030830Du); RECOMP_ABI_CALL(0x002F7810u, sub_002F7810); /* call 0x002F7810 */

loc_0030830D: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = esp + 0x50;
    PUSH32(esp, edx);
    eax = esp + 0xC;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0030831Fu); RECOMP_ABI_CALL(0x003E2480u, sub_003E2480); /* call 0x003E2480 */

loc_0030831F: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 3;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    edx = edx + edx * 2;
    eax = edx * 4 + 0x59DC80;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00308337u); RECOMP_ABI_CALL(0x001101F0u, sub_001101F0); /* call 0x001101F0 */

loc_00308337: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = esi;
    eax = esp + 0x90;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00308348u); RECOMP_ABI_CALL(0x002A0430u, sub_002A0430); /* call 0x002A0430 */

loc_00308348: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0030834Du); RECOMP_ABI_CALL(0x003E2480u, sub_003E2480); /* call 0x003E2480 */

loc_0030834D: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00308384; /* je: equal / zero */

loc_00308351: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00308356u); RECOMP_ABI_CALL(0x003E2480u, sub_003E2480); /* call 0x003E2480 */

loc_00308356: ;
    PUSH32(esp, 0xFF);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    PUSH32(esp, 0);
    eax = esp + 0x10;
    if (TEST_Z(_fa, _fb)) goto loc_00308374; /* je: equal / zero */

loc_00308365: ;
    ecx = esp + 0x98;
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00308372u); RECOMP_ABI_CALL(0x00144AA0u, sub_00144AA0); /* call 0x00144AA0 */

loc_00308372: ;
    goto loc_00308381;

loc_00308374: ;
    edx = esp + 0x98;
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00308381u); RECOMP_ABI_CALL(0x00144C70u, sub_00144C70); /* call 0x00144C70 */

loc_00308381: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00308384: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00308389u); RECOMP_ABI_CALL(0x003E2480u, sub_003E2480); /* call 0x003E2480 */

loc_00308389: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00308461; /* je: equal / zero */

loc_00308391: ;
    xmm0 = XMM_SCALAR(MEMF(0x648CE4)); /* movss */
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 0xC);
    edx = MEM32(esp + 0x10);
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x64AE50)); /* movss */
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x649564)); /* movss */
    PUSH32(esp, 0xFF);
    MEMF(esp + 0x40) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x64AE4C)); /* movss */
    PUSH32(esp, 0x41C80000);
    MEMF(esp + 0x4C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x649574)); /* movss */
    PUSH32(esp, 6);
    MEM32(esp + 0x28) = eax;
    MEMF(esp + 0x54) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x64AE48)); /* movss */
    PUSH32(esp, 0x638304);
    PUSH32(esp, 0x63831C);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esi = esp + 0x28;
    MEM32(esp + 0x28) = 8;
    MEM32(esp + 0x2C) = 5;
    MEM32(esp + 0x34) = ecx;
    MEM32(esp + 0x38) = edx;
    MEM16(esp + 0x3C) = 0;
    MEM16(esp + 0x3E) = 0xFF;
    MEM16(esp + 0x40) = 0xFFC0;
    MEM16(esp + 0x42) = 0x3C;
    MEM16(esp + 0x54) = 0x19;
    MEM16(esp + 0x56) = 0x14;
    MEMF(esp + 0x60) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0030845Eu); RECOMP_ABI_CALL(0x000F4550u, sub_000F4550); /* call 0x000F4550 */

loc_0030845E: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00308461: ;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00308470
 * Original: 0x00308470 - 0x00308480 (16 bytes, 5 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00308470(void)
{

loc_00308470: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0x0030847Eu); RECOMP_ABI_CALL(0x0016B6D0u, sub_0016B6D0); /* call 0x0016B6D0 */

loc_0030847E: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00308480
 * Original: 0x00308480 - 0x003084A0 (32 bytes, 19 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00308480(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00308480: ;
    eax = MEM32(0x7FDBF4);
    PUSH32(esp, edi);
    edi = MEM32(esp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00308490u); RECOMP_ABI_CALL(0x001E5B20u, sub_001E5B20); /* call 0x001E5B20 */

loc_00308490: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_003084A0
 * Original: 0x003084A0 - 0x003084D5 (53 bytes, 17 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003084A0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003084A0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    SET_LO8(eax, MEM8(esi + 0x10B));
    ecx = esp + 4;
    MEM8(esp + 8) = LO8(eax);
    PUSH32(esp, 0x6A);
    PUSH32(esp, ecx);
    eax = 0x57;
    MEM32(esp + 0xC) = esi;
    PUSH32(esp, 0x003084C7u); RECOMP_ABI_CALL(0x000DAC40u, sub_000DAC40); /* call 0x000DAC40 */

loc_003084C7: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x003084CDu); RECOMP_ABI_CALL(0x0030AA60u, sub_0030AA60); /* call 0x0030AA60 */

loc_003084CD: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_003084E0
 * Original: 0x003084E0 - 0x0030850D (45 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003084E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003084E0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0x568);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0030850C; /* je: equal / zero */

loc_003084EE: ;
    edx = MEM32(eax + 0xA4);
    MEM32(ecx + 0x480) = edx;
    ecx = MEM32(eax + 0x568);
    edx = MEM32(eax + 0xA4);
    MEM32(ecx + 0x484) = edx;

loc_0030850C: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00308510
 * Original: 0x00308510 - 0x0030852D (29 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00308510(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00308510: ;
    ecx = MEM32(0x7FDBF8);
    eax = MEM32(ecx * 4 + 0x59DCA8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0030852C; /* je: equal / zero */

loc_00308521: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 8);
    PUSH32(esp, ecx);
    { uint32_t _icall_target = eax; PUSH32(esp, 0x00308529u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x00308527u); } /* indirect call */
    }

loc_00308529: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0030852C: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00308530
 * Original: 0x00308530 - 0x0030855A (42 bytes, 16 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00308530(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00308530: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x0030853Cu); RECOMP_ABI_CALL(0x00308AA0u, sub_00308AA0); /* call 0x00308AA0 */

loc_0030853C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_00308559; /* je: equal / zero */

loc_00308541: ;
    edx = MEM32(0x7FDBF8);
    ecx = MEM32(edx * 4 + 0x59DCA8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00308559; /* je: equal / zero */

loc_00308552: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    { uint32_t _icall_target = ecx; PUSH32(esp, 0x00308556u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x00308554u); } /* indirect call */
    }

loc_00308556: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00308559: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00308560
 * Original: 0x00308560 - 0x00308575 (21 bytes, 8 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00308560(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00308560: ;
    eax = MEM32(0x7FDBF8);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00308570u); RECOMP_ABI_CALL(0x0010C010u, sub_0010C010); /* call 0x0010C010 */

loc_00308570: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00308580
 * Original: 0x00308580 - 0x00308589 (9 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00308580(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00308580: ;
    edx = MEM32(esp + 4);
    g_seh_ebp = ebp; sub_00174280(); return; /* tail jmp 0x00174280 */

}

/**
 * sub_00308590
 * Original: 0x00308590 - 0x0030862B (155 bytes, 48 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00308590(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00308590: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x5C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x5C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00308626; /* je: equal / zero */

loc_003085A5: ;
    eax = MEM32(esi + 0x3C8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003085EC; /* je: equal / zero */

loc_003085AF: ;
    eax = esp + 0x20;
    PUSH32(esp, eax);
    PUSH32(esp, 0x5D4CB4);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003085BEu); RECOMP_ABI_CALL(0x002F7810u, sub_002F7810); /* call 0x002F7810 */

loc_003085BE: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    ecx = esp + 0x28;
    PUSH32(esp, ecx);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    eax = esp + 0x24;
    PUSH32(esp, eax);
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003085E7u); RECOMP_ABI_CALL(0x001101F0u, sub_001101F0); /* call 0x001101F0 */

loc_003085E7: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00308603;

loc_003085EC: ;
    ecx = esi + 0x78;
    edx = MEM32(ecx);
    eax = MEM32(ecx + 4);
    ecx = MEM32(ecx + 8);
    MEM32(esp + 8) = edx;
    MEM32(esp + 0xC) = eax;
    MEM32(esp + 0x10) = ecx;

loc_00308603: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x7C)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x648D14); /* addss */
    edx = esp + 8;
    PUSH32(esp, edx);
    PUSH32(esp, 3);
    PUSH32(esp, esi);
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00308623u); RECOMP_ABI_CALL(0x00119F50u, sub_00119F50); /* call 0x00119F50 */

loc_00308623: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00308626: ;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00308630
 * Original: 0x00308630 - 0x00308642 (18 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00308630(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00308630: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00308641; /* je: equal / zero */

loc_00308638: ;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_0014EFA0(); return; /* tail jmp 0x0014EFA0 */

loc_00308641: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00308650
 * Original: 0x00308650 - 0x003086F9 (169 bytes, 52 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00308650(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00308650: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003086F4; /* je: equal / zero */

loc_00308660: ;
    eax = MEM32(0x7FDBF8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    eax = MEM32(0x7FDBF4);
    if (CMP_EQ(_fa, _fb)) goto loc_003086CF; /* je: equal / zero */

loc_0030866E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    eax = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_0030867B; /* je: equal / zero */

loc_00308674: ;
    PUSH32(esp, 0x5F4A48);
    goto loc_00308680;

loc_0030867B: ;
    PUSH32(esp, 0x60D4C4);

loc_00308680: ;
    PUSH32(esp, 0x00308685u); RECOMP_ABI_CALL(0x002F7B90u, sub_002F7B90); /* call 0x002F7B90 */

loc_00308685: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0);
    PUSH32(esp, 0x7F);
    PUSH32(esp, 0);
    PUSH32(esp, 0x40000000);
    PUSH32(esp, 0x40000000);
    eax = esp + 0x1C;
    PUSH32(esp, 0x49F42400);
    ecx = esi + 0x78;
    PUSH32(esp, eax);
    SET_LO8(edx, 0); /* xor self */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    MEM8(esp + 0x24) = 3;
    MEM8(esp + 0x25) = 0x18;
    MEM16(esp + 0x26) = 0x14;
    MEM8(esp + 0x2A) = 0;
    PUSH32(esp, 0x003086C7u); RECOMP_ABI_CALL(0x0011E790u, sub_0011E790); /* call 0x0011E790 */

loc_003086C7: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_003086CF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    eax = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_003086E7; /* je: equal / zero */

loc_003086D5: ;
    PUSH32(esp, 0x5F4A48);
    PUSH32(esp, 0x003086DFu); RECOMP_ABI_CALL(0x002F7BE0u, sub_002F7BE0); /* call 0x002F7BE0 */

loc_003086DF: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_003086E7: ;
    PUSH32(esp, 0x60D4C4);
    PUSH32(esp, 0x003086F1u); RECOMP_ABI_CALL(0x002F7BE0u, sub_002F7BE0); /* call 0x002F7BE0 */

loc_003086F1: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003086F4: ;
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00308700
 * Original: 0x00308700 - 0x00308711 (17 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00308700(void)
{

loc_00308700: ;
    eax = MEM32(esp + 4);
    SET_LO8(ecx, MEM8(0x7FDBF8));
    MEM8(eax + 0x453) = LO8(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00308720
 * Original: 0x00308720 - 0x00308731 (17 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00308720(void)
{

loc_00308720: ;
    eax = MEM32(esp + 4);
    SET_LO8(ecx, MEM8(0x7FDBF8));
    MEM8(eax + 0x454) = LO8(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00308740
 * Original: 0x00308740 - 0x0030878F (79 bytes, 22 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00308740(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00308740: ;
    PUSH32(esp, ecx);
    eax = MEM32(0x7FDBF8);
    ecx = eax;
    ecx = ecx & 0xFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esp) = ecx;
    fp_push((double)SMEM32(esp)); /* fild */
    ecx = MEM32(esp + 8);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    MEMF(0x7FDBE4) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(0x7FDBE4);
    PUSH32(esp, edx);
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((8) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    eax = eax & 0xFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, 0x40400000);
    PUSH32(esp, 0x3F99999A);
    edx = ZX16(LO16(eax));
    PUSH32(esp, ecx);
    MEM16(ecx + 0x450) = LO16(eax);
    PUSH32(esp, 0x0030878Bu); RECOMP_ABI_CALL(0x002F1620u, sub_002F1620); /* call 0x002F1620 */

loc_0030878B: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00308790
 * Original: 0x00308790 - 0x0030883D (173 bytes, 52 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00308790(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00308790: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 0x568);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003087A6; /* je: equal / zero */

loc_0030879F: ;
    MEM8(eax + 0x48D) = 0;

loc_003087A6: ;
    eax = MEM32(esi + 0x68);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFF (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0030882A; /* je: equal / zero */

loc_003087B0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x205) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x205 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0030882A; /* jge: greater or equal (signed >=) */

loc_003087B7: ;
    ecx = MEM32(esi + 0x74);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0030882A; /* je: equal / zero */

loc_003087BE: ;
    ecx = MEM32(ecx + 0x50);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0030882A; /* je: equal / zero */

loc_003087C5: ;
    ecx = MEM32(ecx + 0x42C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0030882A; /* je: equal / zero */

loc_003087CF: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3E7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x3E7 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003087DE; /* jne: not equal / not zero */

loc_003087D7: ;
    PUSH32(esp, 0x003087DCu); RECOMP_ABI_CALL(0x002F65F0u, sub_002F65F0); /* call 0x002F65F0 */

loc_003087DC: ;
    goto loc_0030882A;

loc_003087DE: ;
    _fa = (uint32_t)(MEM16(eax * 2 + 0x770390)) & 0xFFFFu; _fb = (uint32_t)(0x59) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax * 2 + 0x770390), 0x59 (16-bit) */
    if (CMP_A(_fa, _fb)) goto loc_003087F0; /* ja: above (unsigned >) */

loc_003087E9: ;
    PUSH32(esp, 0x003087EEu); RECOMP_ABI_CALL(0x002F65F0u, sub_002F65F0); /* call 0x002F65F0 */

loc_003087EE: ;
    goto loc_0030882A;

loc_003087F0: ;
    eax = MEM32(esi + 0x74);
    eax = MEM32(eax + 0x50);
    edx = MEM32(eax + 0x434);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(ecx, MEM16(eax + 0x430));
    eax = MEM32(eax + 0x42C);
    PUSH32(esp, 0x40400000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x59);
    PUSH32(esp, eax);
    SET_LO8(edx, 1);
    eax = esi;
    PUSH32(esp, 0x00308827u); RECOMP_ABI_CALL(0x002F1790u, sub_002F1790); /* call 0x002F1790 */

loc_00308827: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0030882A: ;
    esi = MEM32(esi + 0x568);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0030883B; /* je: equal / zero */

loc_00308834: ;
    MEM8(esi + 0x48D) = 1;

loc_0030883B: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00308840
 * Original: 0x00308840 - 0x003088EF (175 bytes, 49 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00308840(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00308840: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 0x568);
    MEM8(eax + 0x48D) = 0;
    eax = MEM32(esi + 0x68);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFF (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003088E0; /* je: equal / zero */

loc_00308860: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x205) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x205 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_003088E0; /* jge: greater or equal (signed >=) */

loc_00308867: ;
    ecx = MEM32(esi + 0x74);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003088E0; /* je: equal / zero */

loc_0030886E: ;
    ecx = MEM32(ecx + 0x50);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003088E0; /* je: equal / zero */

loc_00308875: ;
    ecx = MEM32(ecx + 0x1B0);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003088E0; /* je: equal / zero */

loc_0030887F: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3E7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x3E7 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00308892; /* je: equal / zero */

loc_00308887: ;
    _fa = (uint32_t)(MEM16(eax * 2 + 0x770390)) & 0xFFFFu; _fb = (uint32_t)(0x24) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax * 2 + 0x770390), 0x24 (16-bit) */
    if (CMP_A(_fa, _fb)) goto loc_003088A6; /* ja: above (unsigned >) */

loc_00308892: ;
    PUSH32(esp, 0x00308897u); RECOMP_ABI_CALL(0x002F65F0u, sub_002F65F0); /* call 0x002F65F0 */

loc_00308897: ;
    eax = MEM32(esi + 0x568);
    MEM8(eax + 0x48D) = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_003088A6: ;
    ecx = MEM32(esi + 0x74);
    eax = MEM32(ecx + 0x50);
    ecx = MEM32(eax + 0x1B8);
    PUSH32(esp, 0);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(edx, MEM16(eax + 0x1B4));
    PUSH32(esp, 0);
    PUSH32(esp, 0x40400000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, edx);
    edx = MEM32(eax + 0x1B0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x24);
    PUSH32(esp, edx);
    SET_LO8(edx, 1);
    eax = esi;
    PUSH32(esp, 0x003088DDu); RECOMP_ABI_CALL(0x002F1790u, sub_002F1790); /* call 0x002F1790 */

loc_003088DD: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003088E0: ;
    eax = MEM32(esi + 0x568);
    MEM8(eax + 0x48D) = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003088F0
 * Original: 0x003088F0 - 0x00308919 (41 bytes, 13 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003088F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003088F0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 0x568);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00308908; /* je: equal / zero */

loc_003088FF: ;
    _fa = (uint32_t)(MEM32(eax + 0xBC)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0xBC), 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00308917; /* je: equal / zero */

loc_00308908: ;
    eax = MEM32(0x7FDBF8);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x00308914u); RECOMP_ABI_CALL(0x002CB810u, sub_002CB810); /* call 0x002CB810 */

loc_00308914: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00308917: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00308920
 * Original: 0x00308920 - 0x00308934 (20 bytes, 5 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00308920(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00308920: ;
    _fa = (uint32_t)(MEM8(0x76F0E0)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x76F0E0), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00308933; /* jne: not equal / not zero */

loc_00308929: ;
    eax = MEM32(esp + 4);
    MEM8(eax + 0x24C) = MEM8(eax + 0x24C) + 1;
    _fa = (uint32_t)(MEM8(eax + 0x24C)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */

loc_00308933: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00308940
 * Original: 0x00308940 - 0x00308963 (35 bytes, 8 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00308940(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_00308940: ;
    ecx = MEM32(esp + 4);
    xmm0 = XMM_SCALAR(MEMF(ecx + 0xDC)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x648CF8); /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((0) ? 0x80u : 0u) | (((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00308962; /* jp: parity */

loc_00308959: ;
    MEM16(ecx + 0x21A) = 0;

loc_00308962: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00308970
 * Original: 0x00308970 - 0x00308A6F (255 bytes, 67 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00308970(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00308970: ;
    PUSH32(esp, ecx);
    eax = MEM32(0x7FDBF8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(0x84A5F8);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    MEM32(esp + 0xC) = 0x194;
    if (CMP_NE(_fa, _fb)) goto loc_003089FF; /* jne: not equal / not zero */

loc_0030898F: ;
    ecx = ZX16(MEM16(edi + 0x60));
    PUSH32(esp, ebp);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebp = ebp | 0xFFFFFFFFu;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebx = esi + 0x135;

loc_003089A0: ;
    edx = MEM32(0x84A5FC);
    _fa = (uint32_t)(MEM8(edx + eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edx + eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003089B3; /* je: equal / zero */

loc_003089AC: ;
    edx = ZX8(MEM8(ebx));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003089C3; /* je: equal / zero */

loc_003089B3: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x6D0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x6D0;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x80 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003089A0; /* jl: less (signed <) */

loc_003089C1: ;
    goto loc_003089C5;

loc_003089C3: ;
    ebp = eax;

loc_003089C5: ;
    eax = ZX8(MEM8(esi + 0x470));
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    POP32(esp, ebp);
    if (CMP_NE(_fa, _fb)) goto loc_00308A6A; /* jne: not equal / not zero */

loc_003089D6: ;
    SET_LO16(ecx, MEM16(edi + 0x170));
    xmm0 = XMM_SCALAR(MEMF(0x58BC2C)); /* movss */
    edx = MEM32(esp + 0xC);
    _fb = (uint32_t)(0x8000) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* add source, before the write */
    SET_LO16(ecx, LO16(ecx) + 0x8000);
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* add result */
    MEM16(esi + 0x170) = LO16(ecx);
    MEMF(esi + 0x3B8) = xmm0.f[0]; /* movss */
    goto loc_00308A19;

loc_003089FF: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(edi + 0x528) = xmm0.f[0]; /* movss */
    edx = 0x2E5;
    MEM32(edi + 0x52C) = 0x32;

loc_00308A19: ;
    eax = MEM32(edi + 0x520);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x40C00000);
    MEM32(esi + 0xD0) = eax;
    ecx = MEM32(edi + 0x524);
    PUSH32(esp, 0x40000000);
    MEM32(esi + 0xD4) = ecx;
    eax = MEM32(edi + 0x528);
    PUSH32(esp, 0x3F800000);
    SET_LO8(ebx, 1);
    PUSH32(esp, esi);
    MEM32(esi + 0x110) = eax;
    MEM8(esi + 0x17B) = LO8(ebx);
    PUSH32(esp, 0x00308A5Eu); RECOMP_ABI_CALL(0x002F1620u, sub_002F1620); /* call 0x002F1620 */

loc_00308A5E: ;
    ecx = MEM32(esi + 0x568);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(ecx + 0x45) = LO8(ebx);

loc_00308A6A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00308A70
 * Original: 0x00308A70 - 0x00308A94 (36 bytes, 12 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00308A70(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00308A70: ;
    ecx = MEM32(0x7FDBF8);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(edx, MEM8(0x7FDBFA));
    eax = ecx;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((8) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    PUSH32(esp, eax);
    eax = MEM32(esp + 8);
    PUSH32(esp, edx);
    SET_LO8(edx, 0); /* xor self */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    PUSH32(esp, 0x00308A90u); RECOMP_ABI_CALL(0x002F5D20u, sub_002F5D20); /* call 0x002F5D20 */

loc_00308A90: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00308AA0
 * Original: 0x00308AA0 - 0x00308AE1 (65 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00308AA0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00308AA0: ;
    edx = ZX16(MEM16(eax + 0x60));
    eax = MEM32(0x84A5F8);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(0x84A5FC);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00308AB7: ;
    _fa = (uint32_t)(MEM8(edi + ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi + ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00308ACD; /* je: equal / zero */

loc_00308ABD: ;
    ebp = ZX8(MEM8(eax + 0x135));
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00308ACD; /* jne: not equal / not zero */

loc_00308AC8: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00308ADD; /* je: equal / zero */

loc_00308ACC: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00308ACD: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x6D0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x6D0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x80 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00308AB7; /* jl: less (signed <) */

loc_00308ADB: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00308ADD: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00308AF0
 * Original: 0x00308AF0 - 0x00308B39 (73 bytes, 22 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00308AF0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00308AF0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x00308AFCu); RECOMP_ABI_CALL(0x00308AA0u, sub_00308AA0); /* call 0x00308AA0 */

loc_00308AFC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00308B37; /* je: equal / zero */

loc_00308B00: ;
    ecx = MEM32(0x7FDBF8);
    edx = ecx;
    SET_LO8(ebx, 2);
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((8) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ecx = ecx & 0xFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(MEM8(eax + 0xB7)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0xB7), LO8(ebx) (8-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00308B37; /* ja: above (unsigned >) */

loc_00308B1B: ;
    MEM8(eax + 0xB7) = LO8(ebx);
    MEM8(eax + 0xB5) = LO8(edx);
    MEM8(eax + 0xB6) = LO8(ecx);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = eax;
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_002F60E0(); return; /* tail jmp 0x002F60E0 */

loc_00308B37: ;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00308B40
 * Original: 0x00308B40 - 0x00308B55 (21 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00308B40(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00308B40: ;
    eax = MEM32(0x7FDBF8);
    ecx = MEM32(esp + 4);
    eax = eax | 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = ~eax;
    MEM32(ecx + 0x19C) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00308B60
 * Original: 0x00308B60 - 0x00308BCB (107 bytes, 39 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00308B60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00308B60: ;
    eax = MEM32(0x7FDBF8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    if (CMP_EQ(_fa, _fb)) goto loc_00308B79; /* je: equal / zero */

loc_00308B6E: ;
    PUSH32(esp, eax);
    eax = esi;
    PUSH32(esp, 0x00308B76u); RECOMP_ABI_CALL(0x002F7B90u, sub_002F7B90); /* call 0x002F7B90 */

loc_00308B76: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00308B79: ;
    eax = MEM32(0x7FDBF4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00308B8D; /* je: equal / zero */

loc_00308B82: ;
    PUSH32(esp, eax);
    eax = esi;
    PUSH32(esp, 0x00308B8Au); RECOMP_ABI_CALL(0x002F7B90u, sub_002F7B90); /* call 0x002F7B90 */

loc_00308B8A: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00308B8D: ;
    eax = MEM32(0x7FDBF0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00308BA1; /* je: equal / zero */

loc_00308B96: ;
    PUSH32(esp, eax);
    eax = esi;
    PUSH32(esp, 0x00308B9Eu); RECOMP_ABI_CALL(0x002F7B90u, sub_002F7B90); /* call 0x002F7B90 */

loc_00308B9E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00308BA1: ;
    eax = MEM32(0x7FDBEC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00308BB5; /* je: equal / zero */

loc_00308BAA: ;
    PUSH32(esp, eax);
    eax = esi;
    PUSH32(esp, 0x00308BB2u); RECOMP_ABI_CALL(0x002F7B90u, sub_002F7B90); /* call 0x002F7B90 */

loc_00308BB2: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00308BB5: ;
    eax = MEM32(0x7FDBE8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00308BC9; /* je: equal / zero */

loc_00308BBE: ;
    PUSH32(esp, eax);
    eax = esi;
    PUSH32(esp, 0x00308BC6u); RECOMP_ABI_CALL(0x002F7B90u, sub_002F7B90); /* call 0x002F7B90 */

loc_00308BC6: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00308BC9: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00308BD0
 * Original: 0x00308BD0 - 0x00308C3B (107 bytes, 39 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00308BD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00308BD0: ;
    eax = MEM32(0x7FDBF8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    if (CMP_EQ(_fa, _fb)) goto loc_00308BE9; /* je: equal / zero */

loc_00308BDE: ;
    PUSH32(esp, eax);
    eax = esi;
    PUSH32(esp, 0x00308BE6u); RECOMP_ABI_CALL(0x002F7BE0u, sub_002F7BE0); /* call 0x002F7BE0 */

loc_00308BE6: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00308BE9: ;
    eax = MEM32(0x7FDBF4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00308BFD; /* je: equal / zero */

loc_00308BF2: ;
    PUSH32(esp, eax);
    eax = esi;
    PUSH32(esp, 0x00308BFAu); RECOMP_ABI_CALL(0x002F7BE0u, sub_002F7BE0); /* call 0x002F7BE0 */

loc_00308BFA: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00308BFD: ;
    eax = MEM32(0x7FDBF0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00308C11; /* je: equal / zero */

loc_00308C06: ;
    PUSH32(esp, eax);
    eax = esi;
    PUSH32(esp, 0x00308C0Eu); RECOMP_ABI_CALL(0x002F7BE0u, sub_002F7BE0); /* call 0x002F7BE0 */

loc_00308C0E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00308C11: ;
    eax = MEM32(0x7FDBEC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00308C25; /* je: equal / zero */

loc_00308C1A: ;
    PUSH32(esp, eax);
    eax = esi;
    PUSH32(esp, 0x00308C22u); RECOMP_ABI_CALL(0x002F7BE0u, sub_002F7BE0); /* call 0x002F7BE0 */

loc_00308C22: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00308C25: ;
    eax = MEM32(0x7FDBE8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00308C39; /* je: equal / zero */

loc_00308C2E: ;
    PUSH32(esp, eax);
    eax = esi;
    PUSH32(esp, 0x00308C36u); RECOMP_ABI_CALL(0x002F7BE0u, sub_002F7BE0); /* call 0x002F7BE0 */

loc_00308C36: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00308C39: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00308C40
 * Original: 0x00308C40 - 0x00308C5D (29 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00308C40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00308C40: ;
    SET_LO8(edx, MEM8(0x7FDBF8));
    PUSH32(esp, 0x00308C4Bu); RECOMP_ABI_CALL(0x002B3F70u, sub_002B3F70); /* call 0x002B3F70 */

loc_00308C4B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00308C5C; /* je: equal / zero */

loc_00308C4F: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00308C59u); RECOMP_ABI_CALL(0x002F50C0u, sub_002F50C0); /* call 0x002F50C0 */

loc_00308C59: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00308C5C: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00308C60
 * Original: 0x00308C60 - 0x00308C87 (39 bytes, 13 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00308C60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00308C60: ;
    SET_LO8(edx, MEM8(0x7FDBF8));
    PUSH32(esp, 0x00308C6Bu); RECOMP_ABI_CALL(0x002B3F70u, sub_002B3F70); /* call 0x002B3F70 */

loc_00308C6B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00308C86; /* je: equal / zero */

loc_00308C6F: ;
    SET_LO8(ecx, MEM8(eax + 0x135));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00308C86; /* je: equal / zero */

loc_00308C79: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00308C83u); RECOMP_ABI_CALL(0x002F50C0u, sub_002F50C0); /* call 0x002F50C0 */

loc_00308C83: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00308C86: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00308C90
 * Original: 0x00308C90 - 0x00308E38 (424 bytes, 118 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00308C90(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00308C90: ;
    PUSH32(esp, ecx);
    eax = MEM32(0x7FDBEC);
    SET_LO8(edx, MEM8(0x7FDBF8));
    PUSH32(esp, ebx);
    ebx = MEM32(0x7FDBF0);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    MEM32(esp + 0xC) = eax;
    PUSH32(esp, 0x00308CAEu); RECOMP_ABI_CALL(0x002B3F20u, sub_002B3F20); /* call 0x002B3F20 */

loc_00308CAE: ;
    esi = eax;
    ebp = ebp | 0xFFFFFFFFu;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00308E33; /* je: equal / zero */

loc_00308CBB: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    ecx = MEM32(0x84A1B0);
    PUSH32(esp, edi);
    MEM8(ecx + esi) = 0;
    if ((((uint8_t)((uint8_t)(_fas) - (uint8_t)(_fbs)) >> 7) != 0)) goto loc_00308CE8; /* js: sign (negative) */

loc_00308CCA: ;
    PUSH32(esp, 0x00308CCFu); RECOMP_ABI_CALL(0x002F2E20u, sub_002F2E20); /* call 0x002F2E20 */

loc_00308CCF: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00308CE8; /* je: equal / zero */

loc_00308CD5: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00308CDFu); RECOMP_ABI_CALL(0x002F50C0u, sub_002F50C0); /* call 0x002F50C0 */

loc_00308CDF: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00308CE5u); RECOMP_ABI_CALL(0x002F2E90u, sub_002F2E90); /* call 0x002F2E90 */

loc_00308CE5: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00308CE8: ;
    edx = MEM32(0x84A1AC);
    eax = esi;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x54);
    MEM8(eax + edx + 0xA) = 0;
    ecx = MEM32(0x84A1AC);
    PUSH32(esp, 0);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x00308D0Bu); RECOMP_ABI_CALL(0x002B2690u, sub_002B2690); /* call 0x002B2690 */

loc_00308D0B: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00308E32; /* je: equal / zero */

loc_00308D16: ;
    edx = MEM32(0x84A5F8);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x6D0);
    esi = eax + edx + -1744;
    eax = MEM32(0x7FDBF4);
    MEM32(esi + 0x580) = ebp;
    MEM32(esi + 0x184) = ebp;
    MEM32(esi + 0x188) = ebp;
    MEM32(esi + 0x18C) = ebp;
    MEM32(esi + 0x190) = ebp;
    ebp = MEM32(esp + 0x18);
    PUSH32(esp, eax);
    eax = ebp;
    MEM8(esi + 0x584) = 0;
    MEM8(esi + 0x194) = 0;
    MEM8(esi + 0x195) = 0;
    PUSH32(esp, 0x00308D6Du); RECOMP_ABI_CALL(0x002F77D0u, sub_002F77D0); /* call 0x002F77D0 */

loc_00308D6D: ;
    SET_LO8(ecx, MEM8(ebp + 0x60));
    edi = MEM32(esi + 0x23C);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO8(ecx, LO8(ecx) + 1);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    MEM8(esi + 0x135) = LO8(ecx);
    ecx = MEM32(esp + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    SET_LO8(edx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    SET_LO8(edx, LO8(edx) - 1);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x7Fu); /* dec result/SF/OF; CF unchanged */
    MEM32(esi + 0x12C) = eax;
    SET_LO8(ebx, LO8(ebx) & 0x7F);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    eax = ebp;
    MEM8(esi + 0x43D) = LO8(ebx);
    edx = edx & 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM8(esi + 0x209) = LO8(edx);
    PUSH32(esp, 0x00308DABu); RECOMP_ABI_CALL(0x003153A0u, sub_003153A0); /* call 0x003153A0 */

loc_00308DAB: ;
    eax = ebp + 0x78;
    edx = MEM32(eax);
    ecx = esi + 0x78;
    MEM32(ecx) = edx;
    edx = MEM32(eax + 4);
    MEM32(ecx + 4) = edx;
    eax = MEM32(eax + 8);
    MEM32(ecx + 8) = eax;
    SET_LO8(eax, MEM8(0x7819D5));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00308DD9; /* je: equal / zero */

loc_00308DCA: ;
    _fa = (uint32_t)(MEM32(ebp + 0x68)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x53) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x68), 0x53 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00308DD9; /* jne: not equal / not zero */

loc_00308DD0: ;
    SET_LO8(ecx, MEM8(esi + 0x60));
    MEM8(ebp + 0x42E) = LO8(ecx);

loc_00308DD9: ;
    _fa = (uint32_t)(MEM32(0x7FA1F8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x7FA1F8), 0x3F (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00308DF7; /* jne: not equal / not zero */

loc_00308DE2: ;
    _fa = (uint32_t)(MEM32(esi + 0x68)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x16) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x68), 0x16 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00308E32; /* jne: not equal / not zero */

loc_00308DE8: ;
    PUSH32(esp, 0x6382FC);
    eax = esi;
    PUSH32(esp, 0x00308DF4u); RECOMP_ABI_CALL(0x002F7BE0u, sub_002F7BE0); /* call 0x002F7BE0 */

loc_00308DF4: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00308DF7: ;
    _fa = (uint32_t)(MEM32(0x7FA1F8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x35) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x7FA1F8), 0x35 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00308E32; /* jne: not equal / not zero */

loc_00308E00: ;
    _fa = (uint32_t)(MEM32(esi + 0x68)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x25) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x68), 0x25 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00308E32; /* jne: not equal / not zero */

loc_00308E06: ;
    edx = MEM32(esi + 0x238);
    MEM32(edx) = 1;
    eax = MEM32(ebp + 0x23C);
    PUSH32(esp, 0x00308E1Du); RECOMP_ABI_CALL(0x00315260u, sub_00315260); /* call 0x00315260 */

loc_00308E1D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) ebp = eax; /* cmovne */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00308E32; /* je: equal / zero */

loc_00308E26: ;
    eax = MEM32(ebp + 0x238);
    MEM32(eax) = 1;

loc_00308E32: ;
    POP32(esp, edi);

loc_00308E33: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00308E40
 * Original: 0x00308E40 - 0x00308F4E (270 bytes, 68 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00308E40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00308E40: ;
    SET_LO8(eax, MEM8(0x7819D5));
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    if (CMP_NE(_fa, _fb)) goto loc_00308E5F; /* jne: not equal / not zero */

loc_00308E51: ;
    SET_LO8(eax, MEM8(esi + 0x42E));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00308F49; /* je: equal / zero */

loc_00308E5F: ;
    ecx = MEM32(esi + 0x4B0);
    edx = MEM32(ecx + 0x24);
    eax = MEM32(0x7FDBF8);
    PUSH32(esp, ebx);
    ebx = MEM32(0x7FDBF4);
    ecx = esp + 8;
    PUSH32(esp, ecx);
    MEM32(esp + 0x10) = eax;
    eax = MEM32(edx + 8);
    eax = MEM32(eax + 0x10);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00308E8Cu); RECOMP_ABI_CALL(0x00415EC0u, sub_00415EC0); /* call 0x00415EC0 */

loc_00308E8C: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00308EA2; /* je: equal / zero */

loc_00308E95: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00308EA2; /* je: equal / zero */

loc_00308E9D: ;
    ecx = MEM32(eax + 8);
    goto loc_00308EA4;

loc_00308EA2: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00308EA4: ;
    eax = ZX8(MEM8(esi + 0x42E));
    eax = (uint32_t)((int32_t)eax * (int32_t)0x6D0);
    PUSH32(esp, edi);
    _fb = (uint32_t)(MEM32(0x84A5F8)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(0x84A5F8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = MEM32(eax + 0x68);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x33) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x33 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00308F47; /* je: equal / zero */

loc_00308EC4: ;
    SET_LO8(ebx, MEM8(esi + 0x60));
    xmm0 = XMM_SCALAR(MEMF(0x648D14)); /* movss */
    MEM32(eax + 0x12C) = ecx;
    SET_LO8(ecx, MEM8(esp + 0x10));
    SET_LO8(ebx, LO8(ebx) + 1);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    MEM8(eax + 0x135) = LO8(ebx);
    MEM8(eax + 0x209) = 4;
    MEM8(eax + 0x20C) = LO8(edx);
    MEM8(eax + 0x234) = 0xFF;
    MEM32(eax + 0x420) = edx;
    MEM8(eax + 0x43D) = LO8(ecx);
    MEM16(eax + 0x1EC) = LO16(edx);
    MEM16(eax + 0x1EE) = LO16(edx);
    MEMF(eax + 0x1F4) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x1F8) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x1E4) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x1E8) = xmm0.f[0]; /* movss */
    _fa = (uint32_t)(MEM32(esi + 0x68)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x53) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x68), 0x53 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00308F47; /* jne: not equal / not zero */

loc_00308F35: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x16) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x16 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00308F47; /* jne: not equal / not zero */

loc_00308F3A: ;
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0x00308F44u); RECOMP_ABI_CALL(0x000B9900u, sub_000B9900); /* call 0x000B9900 */

loc_00308F44: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00308F47: ;
    POP32(esp, edi);
    POP32(esp, ebx);

loc_00308F49: ;
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00308F50
 * Original: 0x00308F50 - 0x00308FD1 (129 bytes, 39 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00308F50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00308F50: ;
    PUSH32(esp, ebx);
    ebx = MEM32(0x7FDBF8);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    eax = MEM32(esi + 0x4B0);
    ecx = MEM32(eax + 0x24);
    edx = MEM32(ecx + 8);
    eax = MEM32(edx + 0x10);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00308F79u); RECOMP_ABI_CALL(0x00415EC0u, sub_00415EC0); /* call 0x00415EC0 */

loc_00308F79: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00308F8D; /* je: equal / zero */

loc_00308F80: ;
    eax = MEM32(esp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00308F8D; /* je: equal / zero */

loc_00308F88: ;
    ecx = MEM32(eax + 8);
    goto loc_00308F8F;

loc_00308F8D: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00308F8F: ;
    eax = ZX8(MEM8(esi + 0x42E));
    SET_LO8(edx, MEM8(esi + 0x60));
    eax = (uint32_t)((int32_t)eax * (int32_t)0x6D0);
    _fb = (uint32_t)(MEM32(0x84A5F8)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(0x84A5F8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO8(edx, LO8(edx) + 1);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(eax + 0x60)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax + 0x60), 0 (16-bit) */
    MEM8(eax + 0x135) = LO8(edx);
    MEM32(eax + 0x12C) = ecx;
    MEM8(eax + 0x209) = 4;
    if (CMP_NE(_fa, _fb)) goto loc_00308FCE; /* jne: not equal / not zero */

loc_00308FC1: ;
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x23C);
    PUSH32(esp, 0x00308FCDu); RECOMP_ABI_CALL(0x003153A0u, sub_003153A0); /* call 0x003153A0 */

loc_00308FCD: ;
    POP32(esp, edi);

loc_00308FCE: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00308FE0
 * Original: 0x00308FE0 - 0x00309023 (67 bytes, 19 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00308FE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00308FE0: ;
    PUSH32(esp, ecx);
    xmm2.f[0] = (float)(int32_t)MEM32(0x7FDBF8); /* cvtsi2ss */
    xmm2.f[0] = xmm2.f[0] * MEMF(0x648D80); /* mulss */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    eax = MEM32(esi + 0x3C4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEMF(esp + 4) = xmm2.f[0]; /* movss */
    if (CMP_EQ(_fa, _fb)) goto loc_00309018; /* je: equal / zero */

loc_00309006: ;
    ecx = MEM32(esp + 4);
    PUSH32(esp, ecx);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x00309015u); RECOMP_ABI_CALL(0x00036830u, sub_00036830); /* call 0x00036830 */

loc_00309015: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00309018: ;
    MEMF(esi + 0x120) = xmm2.f[0]; /* movss */
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00309030
 * Original: 0x00309030 - 0x00309087 (87 bytes, 28 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00309030(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00309030: ;
    ecx = MEM32(0x84A5F8);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(0x84A5FC);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(0x420) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x420;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00309050;

    /* nop */

loc_00309050: ;
    _fa = (uint32_t)(MEM8(esi + eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00309075; /* je: equal / zero */

loc_00309056: ;
    edx = ZX16(MEM16(edi + 0x60));
    ebx = ZX8(MEM8(ecx + -747));
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00309075; /* jne: not equal / not zero */

loc_00309066: ;
    MEM32(ecx) = 0;
    SET_LO8(edx, MEM8(0x7FDBF8));
    MEM8(ecx + 0x1D) = LO8(edx);

loc_00309075: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x6D0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x6D0;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x80 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00309050; /* jl: less (signed <) */

loc_00309083: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00309090
 * Original: 0x00309090 - 0x003090A2 (18 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00309090(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00309090: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0030909Eu); RECOMP_ABI_CALL(0x002F50C0u, sub_002F50C0); /* call 0x002F50C0 */

loc_0030909E: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_003090B0
 * Original: 0x003090B0 - 0x003090C2 (18 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003090B0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003090B0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, 0x003090BEu); RECOMP_ABI_CALL(0x002F50C0u, sub_002F50C0); /* call 0x002F50C0 */

loc_003090BE: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_003090D0
 * Original: 0x003090D0 - 0x0030915F (143 bytes, 44 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003090D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003090D0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 0x68);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFF (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00309156; /* je: equal / zero */

loc_003090DF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x205) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x205 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00309156; /* jge: greater or equal (signed >=) */

loc_003090E6: ;
    ecx = MEM32(esi + 0x74);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00309156; /* je: equal / zero */

loc_003090ED: ;
    edx = MEM32(ecx + 0x50);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00309156; /* je: equal / zero */

loc_003090F4: ;
    edx = MEM32(edx + 0x210);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00309156; /* je: equal / zero */

loc_003090FE: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3E7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x3E7 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00309111; /* je: equal / zero */

loc_00309106: ;
    _fa = (uint32_t)(MEM16(eax * 2 + 0x770390)) & 0xFFFFu; _fb = (uint32_t)(0x2C) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax * 2 + 0x770390), 0x2C (16-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0030911F; /* ja: above (unsigned >) */

loc_00309111: ;
    PUSH32(esp, 0x00309116u); RECOMP_ABI_CALL(0x002F65F0u, sub_002F65F0); /* call 0x002F65F0 */

loc_00309116: ;
    MEM8(esi + 0x180) = 0x19;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0030911F: ;
    eax = MEM32(ecx + 0x50);
    edx = MEM32(eax + 0x218);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(ecx, MEM16(eax + 0x214));
    eax = MEM32(eax + 0x210);
    PUSH32(esp, 0x41400000);
    PUSH32(esp, 0x3FC00000);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x2C);
    PUSH32(esp, eax);
    SET_LO8(edx, 1);
    eax = esi;
    PUSH32(esp, 0x00309153u); RECOMP_ABI_CALL(0x002F1790u, sub_002F1790); /* call 0x002F1790 */

loc_00309153: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00309156: ;
    MEM8(esi + 0x180) = 0x19;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00309160
 * Original: 0x00309160 - 0x00309171 (17 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00309160(void)
{

loc_00309160: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(0x7FDBF8);
    MEM32(eax + 0x52C) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_00309180
 * Original: 0x00309180 - 0x003091C3 (67 bytes, 19 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00309180(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00309180: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 0x568);
    MEM16(eax + 8) = 1;
    SET_LO8(ecx, MEM8(esi + 0x141));
    SET_LO8(eax, 0x15);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), LO8(eax) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003091AA; /* je: equal / zero */

loc_0030919D: ;
    MEM8(esi + 0x141) = LO8(eax);
    eax = esi;
    PUSH32(esp, 0x003091AAu); RECOMP_ABI_CALL(0x002CF1C0u, sub_002CF1C0); /* call 0x002CF1C0 */

loc_003091AA: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    MEM8(esi + 0x180) = LO8(eax);
    MEM8(esi + 0x17D) = LO8(eax);
    PUSH32(esp, 0x003091BEu); RECOMP_ABI_CALL(0x0030FFA0u, sub_0030FFA0); /* call 0x0030FFA0 */

loc_003091BE: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003091D0
 * Original: 0x003091D0 - 0x003091EC (28 bytes, 5 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003091D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003091D0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0x568);
    MEM16(ecx + 0x80) = 0;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_0030FFA0(); return; /* tail jmp 0x0030FFA0 */

}

/**
 * sub_003091F0
 * Original: 0x003091F0 - 0x00309217 (39 bytes, 8 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003091F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003091F0: ;
    eax = MEM32(esp + 4);
    edx = MEM32(eax + 0x568);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM8(edx + 0x2C2) = LO8(ecx);
    edx = MEM32(eax + 0x568);
    MEM32(edx + 0xA0) = ecx;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_0030FFA0(); return; /* tail jmp 0x0030FFA0 */

}

/**
 * sub_00309220
 * Original: 0x00309220 - 0x003092D8 (184 bytes, 52 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00309220(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00309220: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 0x568);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003092D6; /* je: equal / zero */

loc_00309233: ;
    MEM8(eax + 0x2D7) = MEM8(eax + 0x2D7) + 1;
    _fa = (uint32_t)(MEM8(eax + 0x2D7)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0x0030923Eu); RECOMP_ABI_CALL(0x003E2480u, sub_003E2480); /* call 0x003E2480 */

loc_0030923E: ;
    ecx = MEM32(esi + 0x568);
    edx = ZX8(MEM8(ecx + 0x2D7));
    eax = eax & 7;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_003092D6; /* jle: less or equal (signed <=) */

loc_00309256: ;
    eax = MEM32(esi + 0x68);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFF (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003092D6; /* je: equal / zero */

loc_00309260: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x205) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x205 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_003092D6; /* jge: greater or equal (signed >=) */

loc_00309267: ;
    ecx = MEM32(esi + 0x74);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003092D6; /* je: equal / zero */

loc_0030926E: ;
    ecx = MEM32(ecx + 0x50);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003092D6; /* je: equal / zero */

loc_00309275: ;
    ecx = MEM32(ecx + 0x1278);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003092D6; /* je: equal / zero */

loc_0030927F: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3E7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x3E7 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00309293; /* je: equal / zero */

loc_00309287: ;
    _fa = (uint32_t)(MEM16(eax * 2 + 0x770390)) & 0xFFFFu; _fb = (uint32_t)(0x18A) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax * 2 + 0x770390), 0x18A (16-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00309299; /* ja: above (unsigned >) */

loc_00309293: ;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_002F65F0(); return; /* tail jmp 0x002F65F0 */

loc_00309299: ;
    eax = MEM32(esi + 0x74);
    eax = MEM32(eax + 0x50);
    edx = MEM32(eax + 0x1280);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(ecx, MEM16(eax + 0x127C));
    eax = MEM32(eax + 0x1278);
    PUSH32(esp, 0x40800000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x18A);
    PUSH32(esp, eax);
    SET_LO8(edx, 1);
    eax = esi;
    PUSH32(esp, 0x003092D3u); RECOMP_ABI_CALL(0x002F1790u, sub_002F1790); /* call 0x002F1790 */

loc_003092D3: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003092D6: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003092E0
 * Original: 0x003092E0 - 0x00309445 (357 bytes, 93 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003092E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003092E0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    eax = MEM32(esi + 0x568);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM8(esp + 7) = 0;
    MEM8(esp + 8) = 0;
    MEM8(esp + 9) = 0;
    MEM8(esp + 0xA) = 0;
    MEM8(esp + 0xB) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_00309420; /* je: equal / zero */

loc_0030930F: ;
    ecx = MEM32(esi + 0xA4);
    PUSH32(esp, ebx);
    _fa = (uint32_t)(MEM32(eax + 0x474)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x474), ecx (32-bit) */
    SET_LO8(edx, 1);
    if (CMP_NE(_fa, _fb)) goto loc_00309324; /* jne: not equal / not zero */

loc_00309320: ;
    MEM8(esp + 0xB) = LO8(edx);

loc_00309324: ;
    _fa = (uint32_t)(MEM32(eax + 0x478)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x478), ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00309330; /* jne: not equal / not zero */

loc_0030932C: ;
    MEM8(esp + 0xC) = LO8(edx);

loc_00309330: ;
    _fa = (uint32_t)(MEM32(eax + 0x47C)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x47C), ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0030933C; /* jne: not equal / not zero */

loc_00309338: ;
    MEM8(esp + 0xD) = LO8(edx);

loc_0030933C: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0030934D; /* je: equal / zero */

loc_00309341: ;
    _fa = (uint32_t)(MEM32(eax + 0x480)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x480), ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0030934D; /* jne: not equal / not zero */

loc_00309349: ;
    MEM8(esp + 0xE) = LO8(edx);

loc_0030934D: ;
    _fa = (uint32_t)(MEM32(eax + 0x484)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x484), ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00309359; /* jne: not equal / not zero */

loc_00309355: ;
    MEM8(esp + 0xF) = LO8(edx);

loc_00309359: ;
    eax = MEM32(esi + 0x568);
    SET_LO8(ebx, MEM8(eax + 0x48D));
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x40C00000);
    MEM8(eax + 0x48D) = 0;
    edx = MEM32(esi + 0xA4);
    PUSH32(esp, 0x3F800000);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, esi);
    PUSH32(esp, 0x00309389u); RECOMP_ABI_CALL(0x002F1620u, sub_002F1620); /* call 0x002F1620 */

loc_00309389: ;
    eax = MEM32(esi + 0x568);
    MEM8(eax + 0x48D) = LO8(ebx);
    SET_LO8(eax, MEM8(esp + 0x23));
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    POP32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_003093B3; /* je: equal / zero */

loc_003093A1: ;
    ecx = MEM32(esi + 0x568);
    edx = MEM32(esi + 0xA4);
    MEM32(ecx + 0x474) = edx;

loc_003093B3: ;
    SET_LO8(eax, MEM8(esp + 8));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003093CD; /* je: equal / zero */

loc_003093BB: ;
    eax = MEM32(esi + 0x568);
    ecx = MEM32(esi + 0xA4);
    MEM32(eax + 0x478) = ecx;

loc_003093CD: ;
    SET_LO8(eax, MEM8(esp + 9));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003093E7; /* je: equal / zero */

loc_003093D5: ;
    edx = MEM32(esi + 0x568);
    eax = MEM32(esi + 0xA4);
    MEM32(edx + 0x47C) = eax;

loc_003093E7: ;
    SET_LO8(eax, MEM8(esp + 0xA));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00309401; /* je: equal / zero */

loc_003093EF: ;
    ecx = MEM32(esi + 0x568);
    edx = MEM32(esi + 0xA4);
    MEM32(ecx + 0x480) = edx;

loc_00309401: ;
    SET_LO8(eax, MEM8(esp + 0xB));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0030941B; /* je: equal / zero */

loc_00309409: ;
    eax = MEM32(esi + 0x568);
    ecx = MEM32(esi + 0xA4);
    MEM32(eax + 0x484) = ecx;

loc_0030941B: ;
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00309420: ;
    edx = MEM32(esi + 0xA4);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x40C00000);
    PUSH32(esp, 0x3F800000);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, esi);
    PUSH32(esp, 0x0030943Du); RECOMP_ABI_CALL(0x002F1620u, sub_002F1620); /* call 0x002F1620 */

loc_0030943D: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00309450
 * Original: 0x00309450 - 0x003094FA (170 bytes, 56 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00309450(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00309450: ;
    PUSH32(esp, ecx);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    eax = MEM32(ebx + 0x568);
    MEM32(eax + 0x47C) = 0xFFFFFFFFu;
    xmm1 = XMM_SCALAR(MEMF(ebx + 0xDC)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003094D0; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_00309476: ;
    PUSH32(esp, ebp);
    ebp = MEM32(ebx + 0x568);
    eax = MEM32(ebp + 0x444);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0xA0);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0030949Au); RECOMP_ABI_CALL(0x0032FDA0u, sub_0032FDA0); /* call 0x0032FDA0 */

loc_0030949A: ;
    edi = MEM32(ebp + 0x5A4);
    PUSH32(esp, eax);
    esi = 8;
    eax = ebx;
    PUSH32(esp, 0x003094ADu); RECOMP_ABI_CALL(0x002B14A0u, sub_002B14A0); /* call 0x002B14A0 */

loc_003094AD: ;
    eax = MEM32(esp + 0x24);
    edx = MEM32(esp + 0x1C);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x40C00000);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x003094C7u); RECOMP_ABI_CALL(0x002F1620u, sub_002F1620); /* call 0x002F1620 */

loc_003094C7: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_003094D0: ;
    ecx = MEM32(ebx + 0x568);
    xmm1 = XMM_SCALAR(MEMF(ecx + 0x390)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    PUSH32(esp, ebx);
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003094EF; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_003094E4: ;
    PUSH32(esp, 0x003094E9u); RECOMP_ABI_CALL(0x0030AA60u, sub_0030AA60); /* call 0x0030AA60 */

loc_003094E9: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_003094EF: ;
    PUSH32(esp, 0x003094F4u); RECOMP_ABI_CALL(0x003092E0u, sub_003092E0); /* call 0x003092E0 */

loc_003094F4: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00309500
 * Original: 0x00309500 - 0x003095E7 (231 bytes, 70 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00309500(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00309500: ;
    PUSH32(esp, ecx);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    eax = MEM32(ebx + 0x568);
    MEM32(eax + 0x47C) = 0xFFFFFFFFu;
    xmm1 = XMM_SCALAR(MEMF(ebx + 0xDC)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00309580; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_00309526: ;
    PUSH32(esp, ebp);
    ebp = MEM32(ebx + 0x568);
    eax = MEM32(ebp + 0x444);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0xA0);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0030954Au); RECOMP_ABI_CALL(0x0032FDA0u, sub_0032FDA0); /* call 0x0032FDA0 */

loc_0030954A: ;
    edi = MEM32(ebp + 0x5A4);
    PUSH32(esp, eax);
    esi = 8;
    eax = ebx;
    PUSH32(esp, 0x0030955Du); RECOMP_ABI_CALL(0x002B14A0u, sub_002B14A0); /* call 0x002B14A0 */

loc_0030955D: ;
    eax = MEM32(esp + 0x24);
    edx = MEM32(esp + 0x1C);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x40C00000);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00309577u); RECOMP_ABI_CALL(0x002F1620u, sub_002F1620); /* call 0x002F1620 */

loc_00309577: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_00309580: ;
    eax = MEM32(ebx + 0x568);
    xmm1 = XMM_SCALAR(MEMF(eax + 0x390)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_003095DB; /* ja: above (unsigned >) (xmm1.f[0] vs xmm0.f[0]) */

loc_00309593: ;
    edx = MEM32(eax + 0x544);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003095DB; /* je: equal / zero */

loc_0030959D: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x40C00000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x003095B3u); RECOMP_ABI_CALL(0x002F1620u, sub_002F1620); /* call 0x002F1620 */

loc_003095B3: ;
    eax = MEM32(ebx + 0x568);
    ecx = MEM32(eax + 0x544);
    MEM32(eax + 0x474) = ecx;
    edx = MEM32(ebx + 0x568);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edx + 0x544) = 0;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_003095DB: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x003095E1u); RECOMP_ABI_CALL(0x0030AA60u, sub_0030AA60); /* call 0x0030AA60 */

loc_003095E1: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_003095F0
 * Original: 0x003095F0 - 0x003098E7 (759 bytes, 248 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003095F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003095F0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    ecx = MEM32(esi + 0xA4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x176) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x176 (32-bit) */
    eax = 1;
    if (CMP_G(_fas, _fbs)) goto loc_003096BB; /* jg: greater (signed >) */

loc_0030960C: ;
    if (CMP_EQ(_fa, _fb)) goto loc_00309740; /* je: equal / zero */

loc_00309612: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x12C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x12C (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0030966F; /* jg: greater (signed >) */

loc_0030961A: ;
    if (CMP_EQ(_fa, _fb)) goto loc_0030968C; /* je: equal / zero */

loc_0030961C: ;
    edx = ecx + -53;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xD7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xD7 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00309773; /* ja: above (unsigned >) */

loc_0030962B: ;
    edx = ZX8(MEM8(edx + 0x3097B8));
    { uint32_t _jt = MEM32(edx * 4 + 0x3097A4); /* switch: 5 entries, 5 targets */
    if (_jt == 0x00309639u) goto loc_00309639;
    if (_jt == 0x00309645u) goto loc_00309645;
    if (_jt == 0x0030964Fu) goto loc_0030964F;
    if (_jt == 0x00309663u) goto loc_00309663;
    if (_jt == 0x00309773u) goto loc_00309773;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00309639: ;
    edx = 0x3A;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_003096EF;

loc_00309645: ;
    edx = 0xFE;
    goto loc_003096EF;

loc_0030964F: ;
    eax = MEM32(esi + 0x568);
    ecx = MEM32(eax + 0x2B0);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00309768; /* je: equal / zero */

loc_00309663: ;
    edx = 0x10A;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_003096EF;

loc_0030966F: ;
    eax = ecx + -312;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3D) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3D (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00309773; /* ja: above (unsigned >) */

loc_0030967E: ;
    edx = ZX8(MEM8(eax + 0x3098A8));
    { uint32_t _jt = MEM32(edx * 4 + 0x309890); /* switch: 6 entries, 6 targets */
    if (_jt == 0x0030968Cu) goto loc_0030968C;
    if (_jt == 0x00309695u) goto loc_00309695;
    if (_jt == 0x0030969Eu) goto loc_0030969E;
    if (_jt == 0x00309740u) goto loc_00309740;
    if (_jt == 0x00309749u) goto loc_00309749;
    if (_jt == 0x00309773u) goto loc_00309773;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0030968C: ;
    edx = 0x12D;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_003096EF;

loc_00309695: ;
    edx = 0x3E;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_003096EF;

loc_0030969E: ;
    eax = MEM32(esi + 0x568);
    ecx = MEM32(eax + 0x2B0);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00309768; /* je: equal / zero */

loc_003096B2: ;
    edx = 0x165;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_003096EF;

loc_003096BB: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x274) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x274 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00309727; /* jg: greater (signed >) */

loc_003096C3: ;
    if (CMP_EQ(_fa, _fb)) goto loc_00309720; /* je: equal / zero */

loc_003096C5: ;
    edx = ecx + -461;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xA6 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00309773; /* ja: above (unsigned >) */

loc_003096D7: ;
    edx = ZX8(MEM8(edx + 0x3098FC));
    { uint32_t _jt = MEM32(edx * 4 + 0x3098E8); /* switch: 5 entries, 5 targets */
    if (_jt == 0x003096E5u) goto loc_003096E5;
    if (_jt == 0x00309709u) goto loc_00309709;
    if (_jt == 0x00309710u) goto loc_00309710;
    if (_jt == 0x00309717u) goto loc_00309717;
    if (_jt == 0x00309773u) goto loc_00309773;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_003096E5: ;
    edx = ecx + 1;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00309707; /* je: equal / zero */

loc_003096EF: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x40800000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00309704u); RECOMP_ABI_CALL(0x002F1620u, sub_002F1620); /* call 0x002F1620 */

loc_00309704: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00309707: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00309709: ;
    edx = 0x1D7;
    goto loc_003096EF;

loc_00309710: ;
    edx = 0x1D8;
    goto loc_003096EF;

loc_00309717: ;
    edx = 0x1CE;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_003096EF;

loc_00309720: ;
    edx = 0x26F;
    goto loc_003096EF;

loc_00309727: ;
    eax = ecx + -865;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xF (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00309773; /* ja: above (unsigned >) */

loc_00309732: ;
    eax = ZX8(MEM8(eax + 0x3099B0));
    { uint32_t _jt = MEM32(eax * 4 + 0x3099A4); /* switch: 3 entries, 3 targets */
    if (_jt == 0x00309740u) goto loc_00309740;
    if (_jt == 0x00309749u) goto loc_00309749;
    if (_jt == 0x00309773u) goto loc_00309773;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00309740: ;
    edx = 0x177;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_003096EF;

loc_00309749: ;
    ecx = MEM32(esi + 0x568);
    eax = MEM32(ecx + 0x2B0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00309768; /* je: equal / zero */

loc_00309759: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = 0x157;
    MEM8(esi + 0x17D) = LO8(eax);
    goto loc_003096EF;

loc_00309768: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0030976Eu); RECOMP_ABI_CALL(0x0030FFA0u, sub_0030FFA0); /* call 0x0030FFA0 */

loc_0030976E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00309773: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xBE) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xBE (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00309795; /* je: equal / zero */

loc_0030977B: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xC1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00309707; /* jne: not equal / not zero */

loc_00309783: ;
    edx = MEM32(esi + 0x568);
    eax = MEM32(edx + 0x4C);
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x40 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00309707; /* jne: not equal / not zero */

loc_00309795: ;
    edx = 0xBF;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_003096EF;

    /* nop */
    _fa = (uint32_t)(MEM32(esi + -1773862864)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + -1773862864), edx (32-bit) */
    MEM8(eax) = MEM8(eax) ^ LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    RECOMP_UNIMPL("arpl word ptr [esi - 0x69b0ffd0], dx", 0x003097ACu); /* TODO: arpl word ptr [esi - 0x69b0ffd0], dx */
    MEM8(eax) = MEM8(eax) ^ LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    if (1) (void)0; /* goto loc_0030974D - dead code, label not in function */ /* jae: above or equal (unsigned >=) */

loc_003097B6: ;
    MEM8(eax) = MEM8(eax) ^ LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    MEM8(esp + eax) = MEM8(esp + eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(esp + eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(eax, LO8(eax) + 4);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(eax, LO8(eax) + 4);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(eax, LO8(eax) + 4);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(0) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(eax, LO8(eax) + 0);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(eax, LO8(eax) + 4);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(eax, LO8(eax) + 4);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(eax, LO8(eax) + 4);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(eax, LO8(eax) + 4);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(eax, LO8(eax) + 4);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(eax, LO8(eax) + 4);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(eax, LO8(eax) + 4);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(eax, LO8(eax) + 4);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(eax, LO8(eax) + 4);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(eax, LO8(eax) + 4);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(eax, LO8(eax) + 4);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(eax, LO8(eax) + 4);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(eax, LO8(eax) + 4);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(eax, LO8(eax) + 4);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(eax, LO8(eax) + 4);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(eax, LO8(eax) + 4);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(eax, LO8(eax) + 4);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(eax, LO8(eax) + 4);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(eax, LO8(eax) + 4);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(eax, LO8(eax) + 4);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(eax, LO8(eax) + 4);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(eax, LO8(eax) + 4);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(eax, LO8(eax) + 4);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(eax, LO8(eax) + 4);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(eax, LO8(eax) + 4);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(eax, LO8(eax) + 4);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(eax, LO8(eax) + 4);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(eax, LO8(eax) + 4);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(eax, LO8(eax) + 4);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(eax, LO8(eax) + 4);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(eax, LO8(eax) + 4);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(eax, LO8(eax) + 4);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(eax, LO8(eax) + 4);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(eax, LO8(eax) + 4);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(eax, LO8(eax) + 4);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(eax, LO8(eax) + 4);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(eax, LO8(eax) + 4);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(eax, LO8(eax) + 4);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(eax, LO8(eax) + 4);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(eax, LO8(eax) + 4);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(eax, LO8(eax) + 4);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(eax, LO8(eax) + 4);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(eax, LO8(eax) + 4);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(eax, LO8(eax) + 4);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(eax, LO8(eax) + 4);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(eax, LO8(eax) + 4);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(eax, LO8(eax) + 4);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(eax, LO8(eax) + 4);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(eax, LO8(eax) + 4);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(eax, LO8(eax) + 4);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(eax, LO8(eax) + 4);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(eax, LO8(eax) + 4);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(eax, LO8(eax) + 4);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(eax, LO8(eax) + 4);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(eax, LO8(eax) + 4);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(eax, LO8(eax) + 4);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(eax, LO8(eax) + 4);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(eax, LO8(eax) + 4);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(eax, LO8(eax) + 4);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(eax, LO8(eax) + 4);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(eax, LO8(eax) + 4);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */

loc_0030983D: ;
    _fb = (uint32_t)(4) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(eax, LO8(eax) + 4);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(eax, LO8(eax) + 4);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(eax, LO8(eax) + 4);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(eax, LO8(eax) + 4);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(eax, LO8(eax) + 4);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(eax, LO8(eax) + 4);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(eax, LO8(eax) + 4);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(eax, LO8(eax) + 4);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(eax, LO8(eax) + 4);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(eax, LO8(eax) + 4);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(eax, LO8(eax) + 4);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(eax, LO8(eax) + 4);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(eax, LO8(eax) + 4);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(eax, LO8(eax) + 4);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(eax, LO8(eax) + 4);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(eax, LO8(eax) + 4);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(eax, LO8(eax) + 4);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(eax, LO8(eax) + 4);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(eax, LO8(eax) + 4);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(eax, LO8(eax) + 4);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(eax, LO8(eax) + 4);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(eax, LO8(eax) + 4);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(eax, LO8(eax) + 4);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(eax, LO8(eax) + 4);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(eax, LO8(eax) + 4);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(eax, LO8(eax) + 4);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(eax, LO8(eax) + 4);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(eax, LO8(eax) + 4);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(eax, LO8(eax) + 4);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(eax, LO8(eax) + 4);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(eax, LO8(eax) + 4);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(eax, LO8(eax) + 4);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(eax, LO8(eax) + 4);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(1) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(eax, LO8(eax) + 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(eax, LO8(eax) + 4);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(eax, LO8(eax) + 4);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(eax, LO8(eax) + 4);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(eax, LO8(eax) + 4);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(eax, LO8(eax) + 4);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(eax, LO8(eax) + 4);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(MEM8(ebx + eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(eax, LO8(eax) + MEM8(ebx + eax));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    { uint32_t _tmp = ebp;
    ebp = eax;
    eax = _tmp; }
    { uint32_t _tmp = esi;
    esi = eax;
    eax = _tmp; }
    MEM8(eax) = MEM8(eax) ^ LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    MEM16(esi + -1756823504) = 0 /* seg:ss */;
    MEM8(eax) = MEM8(eax) ^ LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    _fb = ((0 != 0)) != 0; /* SAHF preserves OF */
    _fa = ((eax >> 8) & 0xD5u) | (_fb << 11); /* sahf */
    { uint32_t _tmp = esi;
    esi = eax;
    eax = _tmp; }
    MEM8(eax) = MEM8(eax) ^ LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    { uint32_t _tmp = edi;
    edi = eax;
    eax = _tmp; }
    MEM8(eax) = MEM8(eax) ^ LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    if (1) goto loc_0030983D; /* jae: above or equal (unsigned >=) */

loc_003098A6: ;
    MEM8(eax) = MEM8(eax) ^ LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    MEM8(0x5050505) = MEM8(0x5050505) + LO8(eax);
    _fa = (uint32_t)(MEM8(0x5050505)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(0x1050505) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x1050505;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x5050505) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x5050505;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x5050505) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x5050505;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x5050505) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x5050505;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x2050505) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x2050505;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x5050505) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x5050505;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x5050505) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x5050505;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x5050505) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x5050505;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x5050503) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x5050503;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x5050505) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x5050505;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x5050505) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x5050505;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x8B) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(eax, LO8(eax) + 0x8B);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */

}

/**
 * sub_003099C0
 * Original: 0x003099C0 - 0x003099E4 (36 bytes, 8 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003099C0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003099C0: ;
    eax = MEM32(esp + 4);
    MEM8(eax + 0x540) = MEM8(eax + 0x540) & 0xF8;
    _fa = (uint32_t)(MEM8(eax + 0x540)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    edx = MEM32(0x7FDBF8);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(ecx, MEM16(eax + 0x540));
    ecx = ecx | edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM16(eax + 0x540) = LO16(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_003099F0
 * Original: 0x003099F0 - 0x00309A69 (121 bytes, 42 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003099F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003099F0: ;
    edx = MEM32(0x7FDBF4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    eax = MEM32(0x7FDBF8);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    if (CMP_EQ(_fa, _fb)) goto loc_00309A25; /* je: equal / zero */

loc_00309A05: ;
    ecx = MEM32(esi + 0x568);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00309A25; /* je: equal / zero */

loc_00309A0F: ;
    SET_LO8(ebx, MEM8(ecx + 0xB1));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00309A25; /* je: equal / zero */

loc_00309A19: ;
    eax = edx;
    edx = MEM32(0x7FDBEC);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    goto loc_00309A37;

loc_00309A25: ;
    edx = MEM32(0x7FDBF0);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00309A47; /* je: equal / zero */

loc_00309A2F: ;
    ecx = MEM32(esi + 0x568);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */

loc_00309A37: ;
    if (CMP_EQ(_fa, _fb)) goto loc_00309A47; /* je: equal / zero */

loc_00309A39: ;
    ecx = MEM32(ecx + 0x3F4);
    _fa = (uint32_t)(MEM32(ecx + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 8), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00309A47; /* jne: not equal / not zero */

loc_00309A45: ;
    eax = edx;

loc_00309A47: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00309A66; /* je: equal / zero */

loc_00309A4B: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00309A5Du); RECOMP_ABI_CALL(0x002B37D0u, sub_002B37D0); /* call 0x002B37D0 */

loc_00309A5D: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00309A63u); RECOMP_ABI_CALL(0x00309B30u, sub_00309B30); /* call 0x00309B30 */

loc_00309A63: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00309A66: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00309A70
 * Original: 0x00309A70 - 0x00309B22 (178 bytes, 52 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00309A70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00309A70: ;
    edx = MEM32(0x7FDBF4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    eax = MEM32(0x7FDBF8);
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    edi = MEM32(0x7FDBE8);
    if (CMP_EQ(_fa, _fb)) goto loc_00309AAB; /* je: equal / zero */

loc_00309A8B: ;
    ecx = MEM32(esi + 0x568);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00309AAB; /* je: equal / zero */

loc_00309A95: ;
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(ecx + 0xB0));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    POP32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_00309AAB; /* je: equal / zero */

loc_00309AA1: ;
    ecx = MEM32(0x7FDBEC);
    eax = edx;
    goto loc_00309AB1;

loc_00309AAB: ;
    ecx = MEM32(0x7FDBF0);

loc_00309AB1: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00309ABD; /* je: equal / zero */

loc_00309AB5: ;
    _fa = (uint32_t)(MEM32(esi + 0x70)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x75) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x70), 0x75 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00309ABD; /* jne: not equal / not zero */

loc_00309ABB: ;
    eax = ecx;

loc_00309ABD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00309B1F; /* je: equal / zero */

loc_00309AC1: ;
    PUSH32(esp, eax);
    eax = esi;
    PUSH32(esp, 0x00309AC9u); RECOMP_ABI_CALL(0x002B38F0u, sub_002B38F0); /* call 0x002B38F0 */

loc_00309AC9: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00309B1F; /* jne: not equal / not zero */

loc_00309AD0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00309AD6u); RECOMP_ABI_CALL(0x00309B90u, sub_00309B90); /* call 0x00309B90 */

loc_00309AD6: ;
    eax = MEM32(esi + 0x568);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00309B1F; /* je: equal / zero */

loc_00309AE3: ;
    MEM32(eax + 0x1F8) = edi;
    eax = MEM32(esi + 0x568);
    ecx = MEM32(eax + 0x2F8);
    MEM32(eax + 0x2FC) = ecx;
    eax = MEM32(esi + 0x568);
    edx = MEM32(eax + 0x300);
    MEM32(eax + 0x304) = edx;
    esi = MEM32(esi + 0x568);
    SET_LO8(eax, MEM8(esi + 0xB1));
    MEM8(esi + 0xB0) = LO8(eax);

loc_00309B1F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00309B30
 * Original: 0x00309B30 - 0x00309B88 (88 bytes, 17 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00309B30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00309B30: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0x568);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00309B87; /* je: equal / zero */

loc_00309B3E: ;
    _fa = (uint32_t)(MEM32(ecx + 0x1F8)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x1F8), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00309B87; /* jne: not equal / not zero */

loc_00309B47: ;
    MEM32(ecx + 0x1F8) = 2;
    ecx = MEM32(eax + 0x568);
    edx = MEM32(ecx + 0x2F8);
    MEM32(ecx + 0x2FC) = edx;
    ecx = MEM32(eax + 0x568);
    edx = MEM32(ecx + 0x300);
    MEM32(ecx + 0x304) = edx;
    eax = MEM32(eax + 0x568);
    SET_LO8(ecx, MEM8(eax + 0xB1));
    MEM8(eax + 0xB0) = LO8(ecx);

loc_00309B87: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00309B90
 * Original: 0x00309B90 - 0x00309BDF (79 bytes, 15 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00309B90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00309B90: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0x568);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00309BDE; /* je: equal / zero */

loc_00309B9E: ;
    MEM32(ecx + 0x1F8) = 0;
    ecx = MEM32(eax + 0x568);
    edx = MEM32(ecx + 0x2F8);
    MEM32(ecx + 0x2FC) = edx;
    ecx = MEM32(eax + 0x568);
    edx = MEM32(ecx + 0x300);
    MEM32(ecx + 0x304) = edx;
    eax = MEM32(eax + 0x568);
    SET_LO8(ecx, MEM8(eax + 0xB1));
    MEM8(eax + 0xB0) = LO8(ecx);

loc_00309BDE: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00309BE0
 * Original: 0x00309BE0 - 0x00309C46 (102 bytes, 29 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00309BE0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00309BE0: ;
    eax = MEM32(0x7FDBF4);
    ecx = MEM32(esp + 4);
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    _cf = (int)(_fa < _fb);
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_00309C03; /* jne: not equal / not zero */

loc_00309BF0: ;
    SET_LO8(eax, MEM8(0x7819D5));
    _cf = (int)((LO8(eax)) != 0);
    SET_LO8(eax, (uint32_t)(0u - (uint32_t)(LO8(eax))));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    eax = eax & 0x94;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x2D) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x2D)) >> 32) & 1);
    eax = eax + 0x2D;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00309C23;

loc_00309C03: ;
    _fa = (uint32_t)(MEM8(0x7819D5)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x7819D5), LO8(edx) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00309C1E; /* je: equal / zero */

loc_00309C0B: ;
    esi = MEM32(ecx + 0x70);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x80 (32-bit) */
    _cf = (int)(_fa < _fb);
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    _fb = (uint32_t)(0x25) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x25)) >> 32) & 1);
    eax = eax + 0x25;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00309C23;

loc_00309C1E: ;
    eax = 0x17;

loc_00309C23: ;
    _fa = (uint32_t)(MEM32(0x7FDBF8)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x7FDBF8), 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    POP32(esp, esi);
    MEM32(esp + 4) = ecx;
    MEM32(0x7FDBF4) = edx;
    MEM32(0x7FDBF8) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_00309C41; /* jne: not equal / not zero */

loc_00309C3C: ;
    g_seh_ebp = ebp; sub_003099F0(); return; /* tail jmp 0x003099F0 */

loc_00309C41: ;
    g_seh_ebp = ebp; sub_00309A70(); return; /* tail jmp 0x00309A70 */

}

/**
 * sub_00309C50
 * Original: 0x00309C50 - 0x00309C80 (48 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00309C50(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00309C50: ;
    xmm0 = XMM_SCALAR(MEMF(0x648EFC)); /* movss */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = eax;
    MEM32(edx) = ecx;
    MEM32(edx + 4) = ecx;
    MEM32(edx + 8) = ecx;
    MEM32(edx + 0xC) = ecx;
    MEM32(edx + 0x10) = ecx;
    MEM32(edx + 0x14) = ecx;
    MEM32(edx + 0x18) = ecx;
    MEMF(eax + 0x14) = xmm0.f[0]; /* movss */
    MEM32(eax + 8) = 0x1A;
    MEM32(eax + 0xC) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_00309C80
 * Original: 0x00309C80 - 0x00309CB0 (48 bytes, 22 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00309C80(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00309C80: ;
    eax = MEM32(0x7FDBF8);
    ecx = MEM32(eax + 0x14);
    edx = MEM32(eax + 0x18);
    PUSH32(esp, ecx);
    ecx = MEM32(eax + 0x10);
    PUSH32(esp, edx);
    edx = MEM32(eax + 0xC);
    PUSH32(esp, ecx);
    ecx = MEM32(eax + 8);
    PUSH32(esp, edx);
    edx = MEM32(eax + 4);
    eax = MEM32(eax);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00309CAAu); RECOMP_ABI_CALL(0x000E8CD0u, sub_000E8CD0); /* call 0x000E8CD0 */

loc_00309CAA: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00309CB0
 * Original: 0x00309CB0 - 0x00309CF8 (72 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00309CB0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00309CB0: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(0x7FDBF8) = eax;
    edx = MEM32(eax + 0x18);
    MEM32(0x7FDBF4) = ecx;
    MEM32(0x7FDBF0) = ecx;
    MEM32(0x7FDBEC) = ecx;
    MEM32(0x7FDBE8) = ecx;
    ecx = MEM32(eax + 0x14);
    PUSH32(esp, ecx);
    ecx = MEM32(eax + 0x10);
    PUSH32(esp, edx);
    edx = MEM32(eax + 0xC);
    PUSH32(esp, ecx);
    ecx = MEM32(eax + 8);
    PUSH32(esp, edx);
    edx = MEM32(eax + 4);
    eax = MEM32(eax);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00309CF4u); RECOMP_ABI_CALL(0x000E8CD0u, sub_000E8CD0); /* call 0x000E8CD0 */

loc_00309CF4: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00309D00
 * Original: 0x00309D00 - 0x00309D13 (19 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00309D00(void)
{

loc_00309D00: ;
    eax = MEM32(esp + 4);
    SET_LO16(ecx, MEM16(0x7FDBF8));
    MEM16(eax + 0x21A) = LO16(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00309D20
 * Original: 0x00309D20 - 0x00309D6F (79 bytes, 25 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00309D20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00309D20: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x3C4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00309D47; /* je: equal / zero */

loc_00309D2F: ;
    eax = esi + 4;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x00309D39u); RECOMP_ABI_CALL(0x00036760u, sub_00036760); /* call 0x00036760 */

loc_00309D39: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00309D47; /* je: equal / zero */

loc_00309D3D: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 0xE4)); /* movss */
    goto loc_00309D4A;

loc_00309D47: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */

loc_00309D4A: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00309D6D; /* je: equal / zero */

loc_00309D4E: ;
    xmm1 = XMM_SCALAR(MEMF(0x7FDBFC)); /* movss */
    PUSH32(esp, ecx);
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    eax = esi + 4;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEMF(esp) = xmm1.f[0]; /* movss */
    PUSH32(esp, 0x00309D6Au); RECOMP_ABI_CALL(0x00036830u, sub_00036830); /* call 0x00036830 */

loc_00309D6A: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00309D6D: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00309D70
 * Original: 0x00309D70 - 0x00309DB2 (66 bytes, 19 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00309D70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_00309D70: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 0x3C4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00309D97; /* je: equal / zero */

loc_00309D7F: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x00309D89u); RECOMP_ABI_CALL(0x00036760u, sub_00036760); /* call 0x00036760 */

loc_00309D89: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00309D97; /* je: equal / zero */

loc_00309D8D: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 0xE4)); /* movss */
    goto loc_00309D9A;

loc_00309D97: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */

loc_00309D9A: ;
    xmm1 = XMM_SCALAR(MEMF(0x7FDBFC)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00309DB0; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_00309DA7: ;
    MEM16(esi + 0x21A) = 0;

loc_00309DB0: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00309DC0
 * Original: 0x00309DC0 - 0x00309DD1 (17 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00309DC0(void)
{

loc_00309DC0: ;
    eax = MEM32(esp + 4);
    SET_LO8(ecx, MEM8(0x7FDBF8));
    MEM8(eax + 0x20C) = LO8(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00309DE0
 * Original: 0x00309DE0 - 0x00309EC4 (228 bytes, 64 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00309DE0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00309DE0: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x14);
    eax = MEM32(esi + 0x568);
    MEM16(eax + 0x36) = MEM16(eax + 0x36) - 1;
    _fa = (uint32_t)(MEM16(eax + 0x36)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x7FFFu); /* dec result/SF/OF; CF unchanged */
    fp_push(MEMF(esi + 0x3BC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x648E18)); /* fmul dword ptr [0x648e18] */
    eax = MEM32(esi + 0x568);
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    if (recomp_fp_trig_in_range(fp_top())) fp_top() = recomp_x87_sin(fp_top()); /* fsin */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x6491DC)); /* fmul dword ptr [0x6491dc] */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    if (recomp_fp_trig_in_range(fp_top())) fp_top() = recomp_x87_cos(fp_top()); /* fcos */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x59D944)); /* fmul dword ptr [0x59d944] */
    fp_push(MEMF(eax + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x6491F8)); /* fmul dword ptr [0x6491f8] */
    PUSH32(esp, 0x00309E26u); RECOMP_ABI_CALL(0x00471288u, sub_00471288); /* call 0x00471288 */

loc_00309E26: ;
    SET_LO16(ecx, MEM16(esi + 0x174));
    _fb = (uint32_t)(LO16(eax)) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* sub source, before the write */
    SET_LO16(ecx, LO16(ecx) - LO16(eax));
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* sub result */
    edx = ZX16(LO16(ecx));
    MEM32(esp + 0x14) = edx;
    eax = ZX16(MEM16(esi + 0x60));
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    PUSH32(esp, 0x12);
    PUSH32(esp, eax);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x648F28)); /* fmul dword ptr [0x648f28] */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    if (recomp_fp_trig_in_range(fp_top())) fp_top() = recomp_x87_cos(fp_top()); /* fcos */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 2) & 7]); /* fmul st(2) */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    if (recomp_fp_trig_in_range(fp_top())) fp_top() = recomp_x87_sin(fp_top()); /* fsin */
    fp_st1() = RECOMP_FP_PC(fp_st1() * fp_top()); fp_pop(); /* fmulp st(1) */
    fp_top() = -fp_top(); /* fchs */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x59D948)); /* fmul dword ptr [0x59d948] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x78)); /* fadd dword ptr [esi + 0x78] */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 0xC);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x59D948)); /* fmul dword ptr [0x59d948] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x80)); /* fadd dword ptr [esi + 0x80] */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, ecx);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x59D948)); /* fmul dword ptr [0x59d948] */
    ecx = MEM32(esi + 0x80);
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x7C)); /* fadd dword ptr [esi + 0x7c] */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esp + 0x14);
    PUSH32(esp, edx);
    edx = (uint32_t)(int32_t)SMEM16(esi + 0x1DE);
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x78);
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    xmm0.f[0] = (float)(int32_t)edx; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esi + 0x7C); /* addss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00309EBCu); RECOMP_ABI_CALL(0x002BA800u, sub_002BA800); /* call 0x002BA800 */

loc_00309EBC: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00309ED0
 * Original: 0x00309ED0 - 0x00309EE3 (19 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00309ED0(void)
{

loc_00309ED0: ;
    eax = MEM32(esp + 4);
    SET_LO16(ecx, MEM16(0x7FDBF8));
    MEM16(eax + 0x43A) = LO16(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00309EF0
 * Original: 0x00309EF0 - 0x00309F10 (32 bytes, 11 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00309EF0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00309EF0: ;
    ecx = MEM32(0x7FDBF8);
    edx = MEM32(0x8470DC);
    MEM32(esp + 4) = 1;
    g_seh_ebp = ebp; sub_00047FA0(); return; /* tail jmp 0x00047FA0 */

    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_00309F10
 * Original: 0x00309F10 - 0x00309F28 (24 bytes, 5 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00309F10(void)
{

loc_00309F10: ;
    eax = MEM32(esp + 4);
    MEM8(eax + 0x3FF) = 3;
    SET_LO8(ecx, MEM8(0x7FDBF8));
    MEM8(eax + 0x400) = LO8(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00309F30
 * Original: 0x00309F30 - 0x00309F4D (29 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00309F30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00309F30: ;
    _fa = (uint32_t)(MEM32(0x7FDBF8)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x7FDBF8), 1 (32-bit) */
    eax = MEM32(esp + 4);
    if (CMP_NE(_fa, _fb)) goto loc_00309F45; /* jne: not equal / not zero */

loc_00309F3D: ;
    MEM8(eax + 0x541) = MEM8(eax + 0x541) | 1;
    _fa = (uint32_t)(MEM8(eax + 0x541)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    esp += 4; return; /* ret */

loc_00309F45: ;
    MEM8(eax + 0x541) = MEM8(eax + 0x541) & 0xFE;
    _fa = (uint32_t)(MEM8(eax + 0x541)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    esp += 4; return; /* ret */

}

/**
 * sub_00309F50
 * Original: 0x00309F50 - 0x0030A2C3 (883 bytes, 230 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00309F50(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00309F50: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x64) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x64;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ecx = 0x10;
    edi = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00309F68u); RECOMP_ABI_CALL(0x002F2CE0u, sub_002F2CE0); /* call 0x002F2CE0 */

loc_00309F68: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + 0x28)); /* movss */
    ebx = MEM32(ebp + 8);
    esi = eax;
    SET_LO8(eax, MEM8(ebp + 0x2C));
    MEMF(esi + 0xD4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + 0x24)); /* movss */
    MEMF(esi + 0xD0) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + 0x20)); /* movss */
    MEMF(esi + 0x110) = xmm0.f[0]; /* movss */
    MEM8(esi + 0x17D) = LO8(eax);
    eax = MEM32(ebx + 0x3C8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0030A003; /* je: equal / zero */

loc_00309FA7: ;
    edx = MEM32(ebp + 0xC);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0030A003; /* je: equal / zero */

loc_00309FAF: ;
    PUSH32(esp, ebx);
    eax = esp + 0x34;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00309FB9u); RECOMP_ABI_CALL(0x002F7870u, sub_002F7870); /* call 0x002F7870 */

loc_00309FB9: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + 0x10)); /* movss */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = eax;
    PUSH32(esp, ecx);
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + 0x14)); /* movss */
    edx = esp + 0x18;
    PUSH32(esp, edx);
    eax = esp + 0x28;
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + 0x18)); /* movss */
    PUSH32(esp, eax);
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00309FEFu); RECOMP_ABI_CALL(0x00428393u, sub_00428393); /* call 0x00428393 */

loc_00309FEF: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    goto loc_0030A015;

loc_0030A003: ;
    xmm0 = XMM_SCALAR(MEMF(ebx + 0x78)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(ebx + 0x7C)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(ebx + 0x80)); /* movss */

loc_0030A015: ;
    fp_push(MEMF(ebp + 0x1C)); /* fld float */
    MEMF(esi + 0x78) = xmm0.f[0]; /* movss */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x648F1C)); /* fmul dword ptr [0x648f1c] */
    MEMF(esi + 0x7C) = xmm1.f[0]; /* movss */
    MEMF(esi + 0x80) = xmm2.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0030A035u); RECOMP_ABI_CALL(0x00471288u, sub_00471288); /* call 0x00471288 */

loc_0030A035: ;
    SET_LO16(ecx, MEM16(ebx + 0x174));
    ebx = MEM32(0x84A5F8);
    _fb = (uint32_t)(LO16(eax)) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* sub source, before the write */
    SET_LO16(ecx, LO16(ecx) - LO16(eax));
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* sub result */
    SET_LO16(eax, MEM16(esi + 0x60));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0xFFFF) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0xFFFF (16-bit) */
    MEM16(esi + 0x174) = LO16(ecx);
    MEM16(esi + 0x170) = LO16(ecx);
    MEM32(esi + 0x64) = 0x21;
    if (CMP_EQ(_fa, _fb)) goto loc_0030A073; /* je: equal / zero */

loc_0030A064: ;
    edx = MEM32(0x84A5FC);
    ecx = ZX16(LO16(eax));
    MEM8(ecx + edx) = 0x21;
    goto loc_0030A094;

loc_0030A073: ;
    ecx = esi;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - ebx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = 0x964FDA6Du;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(0x84A5FC);
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((0xA) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    eax = edx;
    eax = eax >> 0x1F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(eax + ecx) = 0x21;

loc_0030A094: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x42) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x42 (32-bit) */
    MEM8(esi + 0x234) = 0xFF;
    MEM32(esi + 0x200) = 2;
    if (CMP_EQ(_fa, _fb)) goto loc_0030A0B4; /* je: equal / zero */

loc_0030A0AA: ;
    MEM32(esi + 0x200) = 0x100E;

loc_0030A0B4: ;
    edx = MEM32(ebp + 8);
    xmm0 = XMM_SCALAR(MEMF(0x648D10)); /* movss */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(eax, MEM8(edx + 0x136));
    MEMF(esi + 0x260) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x264) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x648D14)); /* movss */
    MEMF(esi + 0x1F4) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x1F8) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x1E4) = xmm0.f[0]; /* movss */
    eax = eax & 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x1F (32-bit) */
    MEM16(esi + 0x136) = LO16(eax);
    eax = 0xA;
    MEM16(esi + 0x1EC) = LO16(eax);
    MEM16(esi + 0x1EE) = LO16(eax);
    MEMF(esi + 0x1E8) = xmm0.f[0]; /* movss */
    if (CMP_NE(_fa, _fb)) goto loc_0030A131; /* jne: not equal / not zero */

loc_0030A121: ;
    xmm0 = XMM_SCALAR(MEMF(0x648CE4)); /* movss */
    MEMF(esi + 0x1D0) = xmm0.f[0]; /* movss */

loc_0030A131: ;
    ecx = esi;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - ebx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = 0x964FDA6Du;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((0xA) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    PUSH32(esp, 0);
    ecx = edx;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    ecx = ecx >> 0x1F;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x3F800000);
    SET_LO8(edx, LO8(edx) | 0xFF);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* sub source, before the write */
    SET_LO8(edx, LO8(edx) - LO8(ecx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sub result */
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    MEM16(esi + 0x476) = LO16(edi);
    MEM8(esi + 0xA1) = 5;
    MEM8(esi + 0x10B) = LO8(edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0030A173u); RECOMP_ABI_CALL(0x002B37D0u, sub_002B37D0); /* call 0x002B37D0 */

loc_0030A173: ;
    eax = MEM32(0x84A144);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0030A1BF; /* jl: less (signed <) */

loc_0030A181: ;
    ebx = esi + 0x550;
    goto loc_0030A190;

    /* nop */

loc_0030A190: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x1BD);
    PUSH32(esp, 0x5F3FA0);
    PUSH32(esp, 4);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0030A1A3u); RECOMP_ABI_CALL(0x002AF0E0u, sub_002AF0E0); /* call 0x002AF0E0 */

loc_0030A1A3: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0030A1B0; /* je: equal / zero */

loc_0030A1AA: ;
    MEM32(eax) = 0;

loc_0030A1B0: ;
    MEM32(ebx) = eax;
    eax = MEM32(0x84A144);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0030A190; /* jle: less or equal (signed <=) */

loc_0030A1BF: ;
    eax = MEM32(esi + edi * 4 + 0x54C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    ebx = 1;
    if (CMP_EQ(_fa, _fb)) goto loc_0030A1D5; /* je: equal / zero */

loc_0030A1CF: ;
    MEM8(esi + 0x54A) = LO8(ebx);

loc_0030A1D5: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0030A1DAu); RECOMP_ABI_CALL(0x00123FA0u, sub_00123FA0); /* call 0x00123FA0 */

loc_0030A1DA: ;
    PUSH32(esp, 0x13);
    MEM32(esi + 0x560) = eax;
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    eax = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0030A1ECu); RECOMP_ABI_CALL(0x0018D7B0u, sub_0018D7B0); /* call 0x0018D7B0 */

loc_0030A1EC: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0030A1F6u); RECOMP_ABI_CALL(0x001C4C90u, sub_001C4C90); /* call 0x001C4C90 */

loc_0030A1F6: ;
    PUSH32(esp, 0x1C);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0030A1FDu); RECOMP_ABI_CALL(0x000ADA00u, sub_000ADA00); /* call 0x000ADA00 */

loc_0030A1FD: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0030A218; /* je: equal / zero */

loc_0030A206: ;
    MEM32(eax) = edi;
    MEM32(eax + 4) = edi;
    MEM8(eax + 8) = 0;
    MEM8(eax + 0x10) = 0;
    MEM8(eax + 0x18) = LO8(ebx);
    edi = eax;

loc_0030A218: ;
    eax = MEM32(ebp + 8);
    MEM32(esi + 0x23C) = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0030A226u); RECOMP_ABI_CALL(0x003153A0u, sub_003153A0); /* call 0x003153A0 */

loc_0030A226: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x9C)); /* movss */
    eax = esi + 0x90;
    ecx = MEM32(eax);
    edx = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    MEM32(esp + 0x20) = ecx;
    ecx = MEM32(0x870ED4);
    MEM32(esp + 0x28) = eax;
    PUSH32(esp, esi);
    eax = esp + 0x24;
    MEM32(esp + 0x28) = edx;
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0030A25Eu); RECOMP_ABI_CALL(0x003560A0u, sub_003560A0); /* call 0x003560A0 */

loc_0030A25E: ;
    MEM32(esi + 0x5DC) = eax;
    _fa = (uint32_t)(MEM32(esi + 0x68)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x5E) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x68), 0x5E (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0030A273; /* jne: not equal / not zero */

loc_0030A26A: ;
    _fa = (uint32_t)(MEM32(0x7FA1F8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x18) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x7FA1F8), 0x18 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0030A2BA; /* je: equal / zero */

loc_0030A273: ;
    eax = MEM32(0x8496E0);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0030A2B3; /* jne: not equal / not zero */

loc_0030A27E: ;
    PUSH32(esp, 0x18);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0030A285u); RECOMP_ABI_CALL(0x001E5920u, sub_001E5920); /* call 0x001E5920 */

loc_0030A285: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0030A2AD; /* je: equal / zero */

loc_0030A28C: ;
    edx = esi;
    MEM32(eax + 0x10) = edi;
    MEM32(eax + 0x14) = edi;
    MEM32(eax + 0xC) = eax;
    MEM32(eax + 8) = eax;
    MEM32(0x8496E0) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0030A2A4u); RECOMP_ABI_CALL(0x001DD3B0u, sub_001DD3B0); /* call 0x001DD3B0 */

loc_0030A2A4: ;
    eax = esi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0030A2AD: ;
    MEM32(0x8496E0) = edi;

loc_0030A2B3: ;
    edx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0030A2BAu); RECOMP_ABI_CALL(0x001DD3B0u, sub_001DD3B0); /* call 0x001DD3B0 */

loc_0030A2BA: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0030A2D0
 * Original: 0x0030A2D0 - 0x0030A7A8 (1240 bytes, 324 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030A2D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0030A2D0: ;
    eax = MEM32(0x7FDBF8);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_0030A5B1; /* jne: not equal / not zero */

loc_0030A2E1: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x2C);
    ecx = MEM32(ebp + 0x4B0);
    edx = MEM32(ecx + 0x24);
    MEM32(esp + 0x14) = eax;
    eax = MEM32(ebp + 0x564);
    PUSH32(esp, edi);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    MEM32(esp + 0x18) = eax;
    eax = MEM32(edx + 8);
    eax = MEM32(eax + 0x10);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    ebx = 0x5F3628;
    PUSH32(esp, 0x0030A318u); RECOMP_ABI_CALL(0x00415EC0u, sub_00415EC0); /* call 0x00415EC0 */

loc_0030A318: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0030A32C; /* je: equal / zero */

loc_0030A31F: ;
    eax = MEM32(esp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0030A32C; /* je: equal / zero */

loc_0030A327: ;
    eax = MEM32(eax + 8);
    goto loc_0030A32E;

loc_0030A32C: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0030A32E: ;
    ecx = MEM32(ebp + 0x3C8);
    edx = MEM32(0x84A5F8);
    eax = eax << 6;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = eax;
    eax = ZX16(MEM16(ebp + 0x60));
    eax = (uint32_t)((int32_t)eax * (int32_t)0x6D0);
    ecx = MEM32(edx + eax + 0x3C8);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0030A449; /* je: equal / zero */

loc_0030A35C: ;
    eax = edi;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((6) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    esi = esp + 0x20;
    PUSH32(esp, 0x0030A36Cu); RECOMP_ABI_CALL(0x002F7940u, sub_002F7940); /* call 0x002F7940 */

loc_0030A36C: ;
    eax = MEM32(esp + 0x14);
    xmm1 = XMM_SCALAR(MEMF(eax + 0x334)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(esp + 0x24); /* subss */
    xmm2 = XMM_SCALAR(MEMF(eax + 0x338)); /* movss */
    xmm2.f[0] = xmm2.f[0] - MEMF(esp + 0x28); /* subss */
    xmm3 = XMM_SCALAR(MEMF(edi + 8)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(edi + 4)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x330)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x20); /* subss */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] * xmm1.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm4.f[0]; /* addss */
    xmm4 = XMM_SCALAR(MEMF(edi)); /* movss */
    xmm4.f[0] = xmm4.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm4.f[0]; /* addss */
    MEMF(esp + 0x1C) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(edi + 0x28)); /* movss */
    ecx = MEM32(esp + 0x1C);
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    xmm2 = XMM_SCALAR(MEMF(edi + 0x24)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = XMM_SCALAR(MEMF(edi + 0x20)); /* movss */
    xmm3.f[0] = xmm3.f[0] + xmm2.f[0]; /* addss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm1.f[0]; /* addss */
    MEMF(esp + 0x10) = xmm3.f[0]; /* movss */
    eax = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0030A3FAu); RECOMP_ABI_CALL(0x003E3CA0u, sub_003E3CA0); /* call 0x003E3CA0 */

loc_0030A3FA: ;
    xmm0.f[0] = xmm0.f[0] * MEMF(0x648D78); /* mulss */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fca = xmm0.f[0]; _fcb = MEMF(0x648E6C); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0030A416; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x648E6C)) */

loc_0030A40E: ;
    xmm0.f[0] = xmm0.f[0] - MEMF(0x648F60); /* subss */

loc_0030A416: ;
    xmm1 = XMM_SCALAR(MEMF(0x648E5C)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0030A449; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_0030A423: ;
    _fca = xmm0.f[0]; _fcb = MEMF(0x649388); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0030A449; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x649388)) */

loc_0030A42C: ;
    PUSH32(esp, 0x0030A431u); RECOMP_ABI_CALL(0x003E2480u, sub_003E2480); /* call 0x003E2480 */

loc_0030A431: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x3E8;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xC8 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0030A449; /* jge: greater or equal (signed >=) */

loc_0030A441: ;
    MEM32(esp + 0x18) = 1;

loc_0030A449: ;
    edx = MEM32(ebp + 0x4B0);
    eax = MEM32(edx + 0x24);
    ecx = MEM32(eax + 8);
    eax = MEM32(ecx + 0x10);
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    ebx = 0x5F3628;
    PUSH32(esp, 0x0030A46Bu); RECOMP_ABI_CALL(0x00415EC0u, sub_00415EC0); /* call 0x00415EC0 */

loc_0030A46B: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0030A47F; /* je: equal / zero */

loc_0030A472: ;
    eax = MEM32(esp + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0030A47F; /* je: equal / zero */

loc_0030A47A: ;
    eax = MEM32(eax + 8);
    goto loc_0030A481;

loc_0030A47F: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0030A481: ;
    PUSH32(esp, 0x64);
    PUSH32(esp, 0x4039999A);
    PUSH32(esp, 0x4247999A);
    PUSH32(esp, 0x422B3333);
    PUSH32(esp, 0);
    PUSH32(esp, 0x41800000);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    eax = 0x1F;
    PUSH32(esp, 0x0030A4A9u); RECOMP_ABI_CALL(0x00309F50u, sub_00309F50); /* call 0x00309F50 */

loc_0030A4A9: ;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = eax;
    ecx = MEM32(esi + 0x200);
    eax = MEM32(esp + 0x18);
    POP32(esp, edi);
    ecx = ecx | 0x1000000;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, ebp);
    MEM32(esi + 0x200) = ecx;
    POP32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_0030A5A2; /* je: equal / zero */

loc_0030A4CF: ;
    eax = MEM32(esp + 8);
    fp_push(MEMF(eax + 0x330)); /* fld float */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x334)); /* movss */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi + 0x78)); /* fsub dword ptr [esi + 0x78] */
    xmm0.f[0] = xmm0.f[0] - MEMF(esi + 0x7C); /* subss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax + 0x338)); /* fld float */
    ecx = MEM32(esp + 8);
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi + 0x80)); /* fsub dword ptr [esi + 0x80] */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0030A512u); RECOMP_ABI_CALL(0x003E3CA0u, sub_003E3CA0); /* call 0x003E3CA0 */

loc_0030A512: ;
    xmm0.f[0] = xmm0.f[0] * MEMF(0x648D78); /* mulss */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fca = xmm0.f[0]; _fcb = MEMF(0x648E6C); /* comiss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0030A53A; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x648E6C)) */

loc_0030A52C: ;
    xmm0.f[0] = xmm0.f[0] - MEMF(0x648F60); /* subss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */

loc_0030A53A: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x110)); /* fmul dword ptr [esi + 0x110] */
    MEMF(esi + 0xD4) = xmm0.f[0]; /* movss */
    fp_push(MEMF(esp + 4)); /* fld float */
    MEM32(esi + 0x52C) = 1;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 4)); /* fmul dword ptr [esp + 4] */
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 8)); /* fmul dword ptr [esp + 8] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_st1() = RECOMP_FP_PC(fp_st1() / fp_top()); fp_pop(); /* fdivp st(1) */
    MEMF(esi + 0xD0) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x648F1C)); /* fmul dword ptr [0x648f1c] */
    PUSH32(esp, 0x0030A588u); RECOMP_ABI_CALL(0x00471288u, sub_00471288); /* call 0x00471288 */

loc_0030A588: ;
    ecx = 0xC000;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM16(esi + 0x174) = LO16(ecx);
    MEM16(esi + 0x170) = LO16(ecx);
    POP32(esp, esi);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0030A5A2: ;
    MEM32(esi + 0x52C) = 0;
    POP32(esp, esi);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0030A5B1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0030A67A; /* jne: not equal / not zero */

loc_0030A5BA: ;
    esi = MEM32(esp + 0x24);
    xmm0.f[0] = (float)(int32_t)MEM32(esi + 0x52C); /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x648E54); /* mulss */
    PUSH32(esp, 0x0030A5D3u); RECOMP_ABI_CALL(0x003E2480u, sub_003E2480); /* call 0x003E2480 */

loc_0030A5D3: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x28;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - 0x14;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm1.f[0] = (float)(int32_t)edx; /* cvtsi2ss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + MEMF(0x64B190); /* addss */
    MEMF(esp + 8) = xmm1.f[0]; /* movss */
    PUSH32(esp, 0x0030A5F9u); RECOMP_ABI_CALL(0x003E2480u, sub_003E2480); /* call 0x003E2480 */

loc_0030A5F9: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x28;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - 0x14;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm1.f[0] = (float)(int32_t)edx; /* cvtsi2ss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + MEMF(0x64B18C); /* addss */
    MEMF(esp + 4) = xmm1.f[0]; /* movss */
    PUSH32(esp, 0x0030A61Fu); RECOMP_ABI_CALL(0x003E2480u, sub_003E2480); /* call 0x003E2480 */

loc_0030A61F: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x28;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    eax = MEM32(esp + 4);
    PUSH32(esp, 0x64);
    PUSH32(esp, 0x4039999A);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - 0x14;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm1.f[0] = (float)(int32_t)edx; /* cvtsi2ss */
    edx = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0x1C) = xmm1.f[0]; /* movss */
    ecx = MEM32(esp + 0x1C);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x41800000);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x5E7460);
    eax = esi;
    PUSH32(esp, 0x0030A663u); RECOMP_ABI_CALL(0x002F77D0u, sub_002F77D0); /* call 0x002F77D0 */

loc_0030A663: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    eax = 0x42;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0030A672u); RECOMP_ABI_CALL(0x00309F50u, sub_00309F50); /* call 0x00309F50 */

loc_0030A672: ;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0030A67A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0030A6E7; /* jne: not equal / not zero */

loc_0030A67F: ;
    esi = MEM32(esp + 0x24);
    PUSH32(esp, 0x64);
    PUSH32(esp, 0x40600000);
    PUSH32(esp, 0x4234CCCD);
    PUSH32(esp, 0x41BB3333);
    PUSH32(esp, 0x43340000);
    PUSH32(esp, 0);
    PUSH32(esp, 0x41DA6666);
    PUSH32(esp, 0);
    PUSH32(esp, 0x5D58C4);
    eax = esi;
    PUSH32(esp, 0x0030A6AEu); RECOMP_ABI_CALL(0x002F77D0u, sub_002F77D0); /* call 0x002F77D0 */

loc_0030A6AE: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    eax = 0x35;
    PUSH32(esp, 0x0030A6BDu); RECOMP_ABI_CALL(0x00309F50u, sub_00309F50); /* call 0x00309F50 */

loc_0030A6BD: ;
    ecx = MEM32(eax + 0x200);
    xmm0 = XMM_SCALAR(MEMF(0x648E6C)); /* movss */
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = ecx | 0x1000000;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEMF(eax + 0x1C0) = xmm0.f[0]; /* movss */
    MEM32(eax + 0x200) = ecx;
    POP32(esp, esi);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0030A6E7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0030A7A3; /* jne: not equal / not zero */

loc_0030A6F0: ;
    PUSH32(esp, 0x0030A6F5u); RECOMP_ABI_CALL(0x003E2480u, sub_003E2480); /* call 0x003E2480 */

loc_0030A6F5: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x28;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - 0x14;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esp + 0x10) = edx;
    fp_push((double)SMEM32(esp + 0x10)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x648CE4)); /* fmul dword ptr [0x648ce4] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x64B190)); /* fadd dword ptr [0x64b190] */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0030A71Du); RECOMP_ABI_CALL(0x003E2480u, sub_003E2480); /* call 0x003E2480 */

loc_0030A71D: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x28;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - 0x14;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esp + 0x10) = edx;
    fp_push((double)SMEM32(esp + 0x10)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x648CE4)); /* fmul dword ptr [0x648ce4] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x64B18C)); /* fadd dword ptr [0x64b18c] */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0030A745u); RECOMP_ABI_CALL(0x003E2480u, sub_003E2480); /* call 0x003E2480 */

loc_0030A745: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x28;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    eax = MEM32(esp + 4);
    esi = MEM32(esp + 0x24);
    PUSH32(esp, 0x64);
    PUSH32(esp, 0x4039999A);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - 0x14;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esp + 0x18) = edx;
    fp_push((double)SMEM32(esp + 0x18)); /* fild */
    edx = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x648CE4)); /* fmul dword ptr [0x648ce4] */
    PUSH32(esp, eax);
    eax = esi;
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esp + 0x1C);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x41800000);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x5E7460);
    PUSH32(esp, 0x0030A791u); RECOMP_ABI_CALL(0x002F77D0u, sub_002F77D0); /* call 0x002F77D0 */

loc_0030A791: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    eax = 0x88;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0030A7A0u); RECOMP_ABI_CALL(0x00309F50u, sub_00309F50); /* call 0x00309F50 */

loc_0030A7A0: ;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0030A7A3: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0030A7B0
 * Original: 0x0030A7B0 - 0x0030A8A6 (246 bytes, 65 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030A7B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0030A7B0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    SET_LO8(ecx, MEM8(esi + 0x250));
    SET_LO8(eax, LO8(ecx));
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(eax, LO8(eax) - 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x7Fu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), LO8(edx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0030A8A4; /* je: equal / zero */

loc_0030A7C9: ;
    ecx = MEM32(0x84A5F8);
    eax = ZX8(LO8(eax));
    eax = (uint32_t)((int32_t)eax * (int32_t)0x6D0);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(esi + 0x250) = LO8(edx);
    MEM32(ecx + 0x200) = 0x8200;
    MEM8(ecx + 0x251) = LO8(edx);
    SET_LO16(eax, MEM16(esi + 0x174));
    MEM16(ecx + 0x170) = LO16(eax);
    MEM8(ecx + 0x135) = LO8(edx);
    MEM8(ecx + 0x43D) = 6;
    MEM32(ecx + 0x420) = edx;
    MEM8(ecx + 0x20C) = LO8(edx);
    MEM16(ecx + 0x174) = 0xE000;
    MEM8(ecx + 0x544) = LO8(edx);
    eax = MEM32(esi + 0x68);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFF (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0030A8A4; /* je: equal / zero */

loc_0030A830: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x205) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x205 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0030A8A4; /* jge: greater or equal (signed >=) */

loc_0030A837: ;
    ecx = MEM32(esi + 0x74);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0030A8A4; /* je: equal / zero */

loc_0030A83E: ;
    PUSH32(esp, edi);
    edi = MEM32(ecx + 0x50);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0030A8A3; /* je: equal / zero */

loc_0030A846: ;
    edi = MEM32(edi + 0x714);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0030A8A3; /* je: equal / zero */

loc_0030A850: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3E7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x3E7 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0030A864; /* je: equal / zero */

loc_0030A858: ;
    _fa = (uint32_t)(MEM16(eax * 2 + 0x770390)) & 0xFFFFu; _fb = (uint32_t)(0x97) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax * 2 + 0x770390), 0x97 (16-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0030A86B; /* ja: above (unsigned >) */

loc_0030A864: ;
    POP32(esp, edi);
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_002F65F0(); return; /* tail jmp 0x002F65F0 */

loc_0030A86B: ;
    eax = MEM32(ecx + 0x50);
    PUSH32(esp, edx);
    PUSH32(esp, edx);
    edx = MEM32(eax + 0x71C);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(ecx, MEM16(eax + 0x718));
    eax = MEM32(eax + 0x714);
    PUSH32(esp, 0x40A00000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x97);
    PUSH32(esp, eax);
    SET_LO8(edx, 1);
    eax = esi;
    PUSH32(esp, 0x0030A8A0u); RECOMP_ABI_CALL(0x002F1790u, sub_002F1790); /* call 0x002F1790 */

loc_0030A8A0: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0030A8A3: ;
    POP32(esp, edi);

loc_0030A8A4: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0030A8B0
 * Original: 0x0030A8B0 - 0x0030A8C1 (17 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030A8B0(void)
{

loc_0030A8B0: ;
    eax = MEM32(esp + 4);
    SET_LO8(ecx, MEM8(0x7FDBF8));
    MEM8(eax + 0x134) = LO8(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0030A8D0
 * Original: 0x0030A8D0 - 0x0030A90B (59 bytes, 11 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030A8D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0030A8D0: ;
    eax = MEM32(esp + 4);
    SET_LO8(edx, MEM8(eax + 0x134));
    SET_LO8(ecx, MEM8(0x7FA250));
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* sub source, before the write */
    SET_LO8(edx, LO8(edx) - LO8(ecx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sub result */
    MEM8(eax + 0x134) = LO8(edx);
    if ((_fas < 0)) goto loc_0030A90A; /* js: sign (negative) */

loc_0030A8EA: ;
    MEM8(eax + 0x24C) = MEM8(eax + 0x24C) - 1;
    _fa = (uint32_t)(MEM8(eax + 0x24C)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x7Fu); /* dec result/SF/OF; CF unchanged */
    xmm0.f[0] = (float)(int32_t)MEM32(0x7FDBF8); /* cvtsi2ss */
    MEM32(0x7FDBD8) = 0;
    MEMF(0x7FDBE4) = xmm0.f[0]; /* movss */

loc_0030A90A: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0030A910
 * Original: 0x0030A910 - 0x0030A925 (21 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030A910(void)
{

loc_0030A910: ;
    eax = MEM32(esp + 4);
    xmm0.f[0] = (float)(int32_t)MEM32(0x7FDBF8); /* cvtsi2ss */
    MEMF(eax + 0x118) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0030A930
 * Original: 0x0030A930 - 0x0030A9FD (205 bytes, 58 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030A930(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0030A930: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    eax = MEM32(edi + 0x23C);
    PUSH32(esp, 0x0030A942u); RECOMP_ABI_CALL(0x00315260u, sub_00315260); /* call 0x00315260 */

loc_0030A942: ;
    esi = eax;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0030A9F9; /* je: equal / zero */

loc_0030A94E: ;
    _fa = (uint32_t)(MEM8(esi + 0x135)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x135), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0030A9F9; /* je: equal / zero */

loc_0030A95A: ;
    PUSH32(esp, ebp);
    ebp = MEM32(0x7FDBF8);
    PUSH32(esp, 0x3F800000);
    MEM8(edi + 0x250) = LO8(ebx);
    PUSH32(esp, ebx);
    MEM8(esi + 0x234) = LO8(ebx);
    eax = ZX16(MEM16(edi + 0x60));
    ecx = MEM32(0x7FDBF8);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    ecx = ecx & 0xFF00FF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    eax = esi;
    PUSH32(esp, 0x0030A98Fu); RECOMP_ABI_CALL(0x002F0470u, sub_002F0470); /* call 0x002F0470 */

loc_0030A98F: ;
    xmm0 = XMM_SCALAR(MEMF(0x648E94)); /* movss */
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, 0x40000000 (32-bit) */
    MEMF(esi + 0x3B8) = xmm0.f[0]; /* movss */
    if (TEST_Z(_fa, _fb)) goto loc_0030A9B3; /* je: equal / zero */

loc_0030A9AA: ;
    edx = MEM32(edi + 0x7C);
    MEM32(esi + 0x3B8) = edx;

loc_0030A9B3: ;
    MEM8(esi + 0x234) = 0x14;
    SET_LO16(eax, MEM16(edi + 0x174));
    _fb = (uint32_t)(LO16(ebp)) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* add source, before the write */
    SET_LO16(eax, LO16(eax) + LO16(ebp));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* add result */
    MEM16(esi + 0x170) = LO16(eax);
    eax = MEM32(edi + 0x68);
    _fb = (uint32_t)(0x53) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x53;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    POP32(esp, ebp);
    if ((_fa == 0)) goto loc_0030A9D9; /* je: equal / zero */

loc_0030A9D4: ;
    _fb = (uint32_t)(0x3B) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x3B;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa != 0)) goto loc_0030A9F9; /* jne: not equal / not zero */

loc_0030A9D9: ;
    eax = MEM32(edi + 0x23C);
    PUSH32(esp, 0x0030A9E4u); RECOMP_ABI_CALL(0x00315260u, sub_00315260); /* call 0x00315260 */

loc_0030A9E4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0030A9F9; /* je: equal / zero */

loc_0030A9E8: ;
    edi = MEM32(edi + 0x23C);
    MEM8(edi + 0x10) = LO8(ebx);
    MEM8(edi + 8) = LO8(ebx);
    MEM32(edi) = ebx;
    MEM32(edi + 4) = ebx;

loc_0030A9F9: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0030AA00
 * Original: 0x0030AA00 - 0x0030AA4A (74 bytes, 14 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030AA00(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0030AA00: ;
    ecx = MEM32(0x7FDBF8);
    eax = MEM32(esp + 4);
    edx = MEM32(eax + 0x568);
    ecx = ecx & 0xFFFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    xmm0.f[0] = (float)(int32_t)ecx; /* cvtsi2ss */
    MEMF(edx + 0xE8) = xmm0.f[0]; /* movss */
    ecx = MEM32(eax + 0x568);
    SET_LO8(edx, MEM8(0x7FDBFA));
    MEM8(ecx + 0xEC) = LO8(edx);
    ecx = MEM32(0x7FDBF8);
    edx = MEM32(eax + 0x568);
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((0x17) & 31u));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    MEM8(edx + 0xED) = LO8(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0030AA50
 * Original: 0x0030AA50 - 0x0030AA55 (5 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030AA50(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0030AA50: ;
    g_seh_ebp = ebp; sub_0030FFA0(); return; /* tail jmp 0x0030FFA0 */

}

/**
 * sub_0030AA60
 * Original: 0x0030AA60 - 0x0030AB51 (241 bytes, 68 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030AA60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_0030AA60: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    eax = MEM32(ebx + 0x568);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0030AAB7; /* je: equal / zero */

loc_0030AA70: ;
    ecx = eax;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(ecx + 0x474) = eax;
    edx = MEM32(ebx + 0x568);
    MEM32(edx + 0x478) = eax;
    ecx = MEM32(ebx + 0x568);
    MEM32(ecx + 0x3DC) = eax;
    edx = MEM32(ebx + 0x568);
    MEM32(edx + 0x47C) = eax;
    ecx = MEM32(ebx + 0x568);
    MEM32(ecx + 0x480) = eax;
    edx = MEM32(ebx + 0x568);
    MEM32(edx + 0x484) = eax;

loc_0030AAB7: ;
    eax = ebx;
    PUSH32(esp, 0x0030AABEu); RECOMP_ABI_CALL(0x0030FF20u, sub_0030FF20); /* call 0x0030FF20 */

loc_0030AABE: ;
    xmm0 = XMM_SCALAR(MEMF(ebx + 0xDC)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x648CF8); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0030AB40; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x648CF8)) */

loc_0030AACF: ;
    eax = MEM32(ebx + 0x568);
    xmm0 = XMM_SCALAR(MEMF(0x648D14)); /* movss */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(eax + 0xA0);
    eax = MEM32(eax + 0x444);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    edx = esp + 0x18;
    PUSH32(esp, edx);
    MEM32(esp + 0x1C) = 0;
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x0030AB08u); RECOMP_ABI_CALL(0x0032FDA0u, sub_0032FDA0); /* call 0x0032FDA0 */

loc_0030AB08: ;
    PUSH32(esp, eax);
    esi = 8;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = ebx;
    PUSH32(esp, 0x0030AB17u); RECOMP_ABI_CALL(0x002B14A0u, sub_002B14A0); /* call 0x002B14A0 */

loc_0030AB17: ;
    edx = MEM32(esp + 0x20);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    POP32(esp, edi);
    POP32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_0030AB4E; /* je: equal / zero */

loc_0030AB24: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x40800000);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0030AB3Au); RECOMP_ABI_CALL(0x002F1620u, sub_002F1620); /* call 0x002F1620 */

loc_0030AB3A: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_0030AB40: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    eax = ebx;
    PUSH32(esp, 0x0030AB4Bu); RECOMP_ABI_CALL(0x002D5B30u, sub_002D5B30); /* call 0x002D5B30 */

loc_0030AB4B: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0030AB4E: ;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0030AB34
 * Original: 0x0030AB34 - 0x0030AB51 (29 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030AB34(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0030AB34: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0030AB3Au); RECOMP_ABI_CALL(0x002F1620u, sub_002F1620); /* call 0x002F1620 */

loc_0030AB3A: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0030AB60
 * Original: 0x0030AB60 - 0x0030AB8B (43 bytes, 8 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030AB60(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0030AB60: ;
    eax = MEM32(esp + 4);
    ecx = ZX8(MEM8(eax + 0x42E));
    edx = MEM32(0x84A5F8);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x6D0);
    ecx = (uint32_t)recomp_cvt_si32((double)MEMF(ecx + edx + 0x7C), g_mxcsr, 1); /* cvttss2si */
    _fb = (uint32_t)(MEM32(0x7FDBF8)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + MEM32(0x7FDBF8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(eax + 0x430) = LO16(ecx);
    esp += 4; return; /* ret */

}

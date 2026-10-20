/**
 * Conker - Recompiled code chunk 0
 * Functions: 250 (0x00011000 - 0x00019B20)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_00011000
 * Original: 0x00011000 - 0x0001106B (107 bytes, 28 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00011000(void)
{

loc_00011000: ;
    PUSH32(esp, edi);
    edi = eax;
    PUSH32(esp, 0x00011008u); RECOMP_ABI_CALL(0x0029E6B0u, sub_0029E6B0); /* call 0x0029E6B0 */

loc_00011008: ;
    eax = 0xFF;
    edx = 0x32;
    ecx = 0x80;
    MEM32(edi + 0x30) = eax;
    MEM32(edi + 0x34) = eax;
    MEM32(edi + 0x38) = eax;
    MEM32(edi + 0x40) = eax;
    MEM32(edi + 0x50) = eax;
    MEM32(edi + 0x54) = eax;
    MEM32(edi + 0x60) = eax;
    MEM32(edi) = 0x587BD4;
    MEM32(edi + 0x24) = 0;
    MEM32(edi + 0x28) = 0xC8;
    MEM32(edi + 0x2C) = 0;
    MEM32(edi + 0x3C) = edx;
    MEM32(edi + 0x44) = ecx;
    MEM32(edi + 0x48) = ecx;
    MEM32(edi + 0x4C) = ecx;
    MEM32(edi + 0x58) = edx;
    MEM32(edi + 0x5C) = edx;
    MEM32(edi + 0x64) = 0;
    eax = edi;
    MEM8(0x847047) = 1;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_00011070
 * Original: 0x00011070 - 0x000110A3 (51 bytes, 15 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00011070(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00011070: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x587BD4;
    MEM8(0x847047) = 0;
    PUSH32(esp, 0x00011085u); RECOMP_ABI_CALL(0x0029E7C0u, sub_0029E7C0); /* call 0x0029E7C0 */

loc_00011085: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0001109D; /* je: equal / zero */

loc_0001108C: ;
    eax = esp + 8;
    PUSH32(esp, eax);
    MEM32(esp + 0xC) = esi;
    PUSH32(esp, 0x0001109Au); RECOMP_ABI_CALL(0x002AF1C0u, sub_002AF1C0); /* call 0x002AF1C0 */

loc_0001109A: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0001109D: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000110B0
 * Original: 0x000110B0 - 0x000116C3 (1555 bytes, 499 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000110B0(void)
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

loc_000110B0: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0xC));
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x18);
    eax = MEM32(ebp + 4);
    PUSH32(esp, edi);
    edi = ecx;
    MEM32(edi + 8) = eax;
    if (2) _cf = (int)(((eax) >> (32 - (2))) & 1);
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x000110CBu); RECOMP_ABI_CALL(0x0046DAB2u, sub_0046DAB2); /* call 0x0046DAB2 */

loc_000110CB: ;
    _cf = 0; /* xor clears CF */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(edi + 4) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_000110F3; /* jne: not equal / not zero */

loc_000110D7: ;
    PUSH32(esp, 0x587BE4);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x587BE4);
    PUSH32(esp, 0x000110E7u); RECOMP_ABI_CALL(0x001F0620u, sub_001F0620); /* call 0x001F0620 */

loc_000110E7: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 20; return; /* ret 16 */

loc_000110F3: ;
    eax = MEM32(edi + 8);
    PUSH32(esp, esi);
    _cf = 0; /* xor clears CF */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM8(esp + 0x13) = 1;
    MEM32(esp + 0x18) = esi;
    if (CMP_LE(_fas, _fbs)) goto loc_0001143D; /* jle: less or equal (signed <=) */

loc_0001110A: ;
    MEM32(esp + 0x14) = ebx;
    goto loc_00011114;

loc_00011110: ;
    ebp = MEM32(esp + 0x20);

loc_00011114: ;
    ecx = MEM32(ebp);
    edx = MEM32(esp + 0x14);
    eax = MEM32(ecx + edx + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 6 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_A(_fa, _fb)) goto loc_00011414; /* ja: above (unsigned >) */

loc_00011128: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x11494); /* switch: 7 entries, 5 targets */
    if (_jt == 0x0001112Fu) goto loc_0001112F;
    if (_jt == 0x0001113Au) goto loc_0001113A;
    if (_jt == 0x000111F0u) goto loc_000111F0;
    if (_jt == 0x000112A1u) goto loc_000112A1;
    if (_jt == 0x00011341u) goto loc_00011341;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0001112F: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x00011135u); RECOMP_ABI_CALL(0x000118A0u, sub_000118A0); /* call 0x000118A0 */

loc_00011135: ;
    goto loc_00011418;

loc_0001113A: ;
    _fa = (uint32_t)(MEM32(0x84A19C)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x84A19C), ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00011147; /* jne: not equal / not zero */

loc_00011142: ;
    PUSH32(esp, 0x00011147u); RECOMP_ABI_CALL(0x002AED70u, sub_002AED70); /* call 0x002AED70 */

loc_00011147: ;
    edx = MEM32(0x7FA494);
    ecx = MEM32(0x7FA4B4);
    esi = MEM32(0x84A190);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(0x7FA494) = edx;
    MEM32(0x7FA4B4) = ecx;
    ebp = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_0001118F; /* je: equal / zero */

loc_0001116D: ;
    _fa = (uint32_t)(MEM32(esi + 0x80)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x30) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x80), 0x30 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_0001118F; /* jb: below (unsigned <) */

loc_00011176: ;
    ecx = 0x10;
    PUSH32(esp, 0x00011180u); RECOMP_ABI_CALL(0x003E62A0u, sub_003E62A0); /* call 0x003E62A0 */

loc_00011180: ;
    PUSH32(esp, 0x30);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x00011188u); RECOMP_ABI_CALL(0x003E6BD0u, sub_003E6BD0); /* call 0x003E6BD0 */

loc_00011188: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_000111B4; /* jne: not equal / not zero */

loc_0001118F: ;
    esi = MEM32(0x84A184);
    ecx = 0x10;
    ebp = esi;
    PUSH32(esp, 0x000111A1u); RECOMP_ABI_CALL(0x003E62A0u, sub_003E62A0); /* call 0x003E62A0 */

loc_000111A1: ;
    PUSH32(esp, 0x30);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x000111A9u); RECOMP_ABI_CALL(0x003E6BD0u, sub_003E6BD0); /* call 0x003E6BD0 */

loc_000111A9: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_000113D1; /* je: equal / zero */

loc_000111B4: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _cf = 0; /* logical op clears CF */
    ecx = ecx | 0xFFFFFFFFu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ebx;
    MEM32(eax + 0xC) = ebx;
    MEM32(eax + 0x10) = ecx;
    MEM32(eax + 0x14) = ecx;
    MEM32(eax) = 0x5AC558;
    MEMF(eax + 0x18) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x1C) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x20) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x24) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x28) = xmm0.f[0]; /* movss */
    MEM32(eax + 0x2C) = ebx;
    goto loc_000113D3;

loc_000111F0: ;
    _fa = (uint32_t)(MEM32(0x84A19C)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x84A19C), ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_000111FD; /* jne: not equal / not zero */

loc_000111F8: ;
    PUSH32(esp, 0x000111FDu); RECOMP_ABI_CALL(0x002AED70u, sub_002AED70); /* call 0x002AED70 */

loc_000111FD: ;
    edx = MEM32(0x7FA494);
    ecx = MEM32(0x7FA4B4);
    esi = MEM32(0x84A190);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(0x7FA494) = edx;
    MEM32(0x7FA4B4) = ecx;
    ebp = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_00011245; /* je: equal / zero */

loc_00011223: ;
    _fa = (uint32_t)(MEM32(esi + 0x80)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x80), 0x2C (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_00011245; /* jb: below (unsigned <) */

loc_0001122C: ;
    ecx = 0x10;
    PUSH32(esp, 0x00011236u); RECOMP_ABI_CALL(0x003E62A0u, sub_003E62A0); /* call 0x003E62A0 */

loc_00011236: ;
    PUSH32(esp, 0x2C);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0001123Eu); RECOMP_ABI_CALL(0x003E6BD0u, sub_003E6BD0); /* call 0x003E6BD0 */

loc_0001123E: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0001126A; /* jne: not equal / not zero */

loc_00011245: ;
    esi = MEM32(0x84A184);
    ecx = 0x10;
    ebp = esi;
    PUSH32(esp, 0x00011257u); RECOMP_ABI_CALL(0x003E62A0u, sub_003E62A0); /* call 0x003E62A0 */

loc_00011257: ;
    PUSH32(esp, 0x2C);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0001125Fu); RECOMP_ABI_CALL(0x003E6BD0u, sub_003E6BD0); /* call 0x003E6BD0 */

loc_0001125F: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_000113D1; /* je: equal / zero */

loc_0001126A: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _cf = 0; /* logical op clears CF */
    ecx = ecx | 0xFFFFFFFFu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ebx;
    MEM32(eax + 0xC) = ebx;
    MEM32(eax + 0x10) = ecx;
    MEM32(eax + 0x14) = ecx;
    MEM32(eax) = 0x5AC588;
    MEMF(eax + 0x18) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x1C) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x20) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x24) = xmm0.f[0]; /* movss */
    MEM32(eax + 0x28) = ebx;
    goto loc_000113D3;

loc_000112A1: ;
    _fa = (uint32_t)(MEM32(0x84A19C)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x84A19C), ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_000112AE; /* jne: not equal / not zero */

loc_000112A9: ;
    PUSH32(esp, 0x000112AEu); RECOMP_ABI_CALL(0x002AED70u, sub_002AED70); /* call 0x002AED70 */

loc_000112AE: ;
    edx = MEM32(0x7FA494);
    ecx = MEM32(0x7FA4B4);
    esi = MEM32(0x84A190);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(0x7FA494) = edx;
    MEM32(0x7FA4B4) = ecx;
    ebp = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_000112F6; /* je: equal / zero */

loc_000112D4: ;
    _fa = (uint32_t)(MEM32(esi + 0x80)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x24) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x80), 0x24 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_000112F6; /* jb: below (unsigned <) */

loc_000112DD: ;
    ecx = 0x10;
    PUSH32(esp, 0x000112E7u); RECOMP_ABI_CALL(0x003E62A0u, sub_003E62A0); /* call 0x003E62A0 */

loc_000112E7: ;
    PUSH32(esp, 0x24);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x000112EFu); RECOMP_ABI_CALL(0x003E6BD0u, sub_003E6BD0); /* call 0x003E6BD0 */

loc_000112EF: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0001131B; /* jne: not equal / not zero */

loc_000112F6: ;
    esi = MEM32(0x84A184);
    ecx = 0x10;
    ebp = esi;
    PUSH32(esp, 0x00011308u); RECOMP_ABI_CALL(0x003E62A0u, sub_003E62A0); /* call 0x003E62A0 */

loc_00011308: ;
    PUSH32(esp, 0x24);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x00011310u); RECOMP_ABI_CALL(0x003E6BD0u, sub_003E6BD0); /* call 0x003E6BD0 */

loc_00011310: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_000113D1; /* je: equal / zero */

loc_0001131B: ;
    _cf = 0; /* logical op clears CF */
    ecx = ecx | 0xFFFFFFFFu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ebx;
    MEM32(eax + 0xC) = ebx;
    MEM32(eax + 0x10) = ecx;
    MEM32(eax + 0x14) = ecx;
    MEM32(eax) = 0x5AC5B8;
    MEM32(eax + 0x18) = ebx;
    MEM32(eax + 0x1C) = ebx;
    MEM32(eax + 0x20) = ebx;
    goto loc_000113D3;

loc_00011341: ;
    _fa = (uint32_t)(MEM32(0x84A19C)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x84A19C), ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0001134E; /* jne: not equal / not zero */

loc_00011349: ;
    PUSH32(esp, 0x0001134Eu); RECOMP_ABI_CALL(0x002AED70u, sub_002AED70); /* call 0x002AED70 */

loc_0001134E: ;
    edx = MEM32(0x7FA494);
    ecx = MEM32(0x7FA4B4);
    esi = MEM32(0x84A190);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(0x7FA494) = edx;
    MEM32(0x7FA4B4) = ecx;
    ebp = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_00011396; /* je: equal / zero */

loc_00011374: ;
    _fa = (uint32_t)(MEM32(esi + 0x80)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x18) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x80), 0x18 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_00011396; /* jb: below (unsigned <) */

loc_0001137D: ;
    ecx = 4;
    PUSH32(esp, 0x00011387u); RECOMP_ABI_CALL(0x003E62A0u, sub_003E62A0); /* call 0x003E62A0 */

loc_00011387: ;
    PUSH32(esp, 0x18);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0001138Fu); RECOMP_ABI_CALL(0x003E6BD0u, sub_003E6BD0); /* call 0x003E6BD0 */

loc_0001138F: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_000113B7; /* jne: not equal / not zero */

loc_00011396: ;
    esi = MEM32(0x84A184);
    ecx = 4;
    ebp = esi;
    PUSH32(esp, 0x000113A8u); RECOMP_ABI_CALL(0x003E62A0u, sub_003E62A0); /* call 0x003E62A0 */

loc_000113A8: ;
    PUSH32(esp, 0x18);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x000113B0u); RECOMP_ABI_CALL(0x003E6BD0u, sub_003E6BD0); /* call 0x003E6BD0 */

loc_000113B0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_000113D1; /* je: equal / zero */

loc_000113B7: ;
    _cf = 0; /* logical op clears CF */
    ecx = ecx | 0xFFFFFFFFu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ebx;
    MEM32(eax + 0xC) = ebx;
    MEM32(eax + 0x10) = ecx;
    MEM32(eax + 0x14) = ecx;
    MEM32(eax) = 0x5AC5E8;
    goto loc_000113D3;

loc_000113D1: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000113D3: ;
    ecx = MEM32(esp + 0x18);
    edx = MEM32(edi + 4);
    MEM32(edx + ecx * 4) = eax;
    eax = MEM32(edi + 4);
    eax = eax + ecx * 4;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_000113FC; /* jne: not equal / not zero */

loc_000113E7: ;
    PUSH32(esp, 0x587BE4);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x587BE4);
    PUSH32(esp, 0x000113F7u); RECOMP_ABI_CALL(0x001F0620u, sub_001F0620); /* call 0x001F0620 */

loc_000113F7: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00011418;

loc_000113FC: ;
    ecx = MEM32(esp + 0x20);
    ecx = MEM32(ecx);
    ebp = MEM32(esp + 0x14);
    eax = MEM32(eax);
    edx = MEM32(eax);
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(ebp)) >> 32) & 1);
    ecx = ecx + ebp;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x00011412u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0001140Fu); } /* indirect call */
    }

loc_00011412: ;
    goto loc_00011418;

loc_00011414: ;
    MEM8(esp + 0x13) = LO8(ebx);

loc_00011418: ;
    esi = MEM32(esp + 0x18);
    ecx = MEM32(esp + 0x14);
    eax = MEM32(edi + 8);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(0x2C)) >> 32) & 1);
    ecx = ecx + 0x2C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(esp + 0x18) = esi;
    MEM32(esp + 0x14) = ecx;
    if (CMP_L(_fas, _fbs)) goto loc_00011110; /* jl: less (signed <) */

loc_00011437: ;
    _fa = (uint32_t)(MEM8(esp + 0x13)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esp + 0x13), LO8(ebx) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00011488; /* je: equal / zero */

loc_0001143D: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    edx = MEM32(edi + 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    MEMF(edi + 0x10) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    MEMF(edi + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x2C)); /* movss */
    MEMF(edi + 0x18) = xmm0.f[0]; /* movss */
    MEM32(edi + 0xC) = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_00011488; /* je: equal / zero */

loc_00011468: ;
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx), ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00011488; /* je: equal / zero */

loc_0001146C: ;
    esi = 5;

loc_00011471: ;
    ecx = MEM32(edi + 0xC);
    eax = MEM32(edx + ecx * 4);
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 4), esi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00011482; /* je: equal / zero */

loc_0001147C: ;
    _fa = (uint32_t)(MEM32(eax + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x10), 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00011488; /* jne: not equal / not zero */

loc_00011482: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(edi + 0xC) = ecx;
    goto loc_00011471;

loc_00011488: ;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 20; return; /* ret 16 */

    eax = MEM32(esi + 8);
    _cf = 0; /* xor clears CF */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_LE(_fas, _fbs)) goto loc_000114E3; /* jle: less or equal (signed <=) */

loc_000114C9: ;
    /* nop */

loc_000114D0: ;
    eax = MEM32(esi + 4);
    ecx = MEM32(eax + edi * 4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x000114DBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000114D8u); } /* indirect call */
    }

loc_000114DB: ;
    eax = MEM32(esi + 8);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_000114D0; /* jl: less (signed <) */

loc_000114E3: ;
    eax = MEM32(0x847104);
    _fa = (uint32_t)(MEM8(eax + 0x31)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x31), LO8(ebx) (8-bit) */
    _cf = (int)(_fa < _fb);
    edx = eax;
    if (CMP_BE(_fa, _fb)) goto loc_000114F2; /* jbe: below or equal (unsigned <=) */

loc_000114EF: ;
    MEM32(esi + 0x64) = ebx;

loc_000114F2: ;
    ecx = MEM32(esi + 0x64);
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    xmm0 = xmm1; /* movaps */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    ebp = 5;
    if (CMP_NE(_fa, _fb)) goto loc_0001152E; /* jne: not equal / not zero */

loc_0001150C: ;
    MEM32(esi + 0x64) = 4;
    eax = MEM32(edx + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFBu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFBu (32-bit) */
    _cf = (int)(_fa < _fb);
    xmm0 = XMM_SCALAR(MEMF(edx + 0x28)); /* movss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    if (CMP_L(_fas, _fbs)) goto loc_00011532; /* jl: less (signed <) */

loc_00011526: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_G(_fas, _fbs)) goto loc_00011532; /* jg: greater (signed >) */

loc_0001152A: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00011532;

loc_0001152E: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esi + 0x64) = ecx;

loc_00011532: ;
    ecx = MEM32(edx + 8);
    _fa = (uint32_t)(HI8(ecx)) & 0xFFu; _fb = (uint32_t)(0x11) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(ecx), 0x11 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_NZ(_fa, _fb)) goto loc_0001165F; /* jne: not equal / not zero */

loc_0001153E: ;
    _fa = (uint32_t)(HI8(ecx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(ecx), 2 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_NZ(_fa, _fb)) goto loc_00011655; /* jne: not equal / not zero */

loc_00011547: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 0x20 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_NZ(_fa, _fb)) goto loc_00011655; /* jne: not equal / not zero */

loc_00011550: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_NZ(_fa, _fb)) goto loc_0001160C; /* jne: not equal / not zero */

loc_00011559: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_G(_fas, _fbs)) goto loc_0001160C; /* jg: greater (signed >) */

loc_00011561: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 2 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_NZ(_fa, _fb)) goto loc_000115BE; /* jne: not equal / not zero */

loc_00011566: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_000115BE; /* jl: less (signed <) */

loc_0001156A: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 4 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_00011590; /* je: equal / zero */

loc_0001156F: ;
    eax = MEM32(esi + 0xC);
    ecx = MEM32(esi + 4);
    ecx = MEM32(ecx + eax * 4);
    edx = MEM32(ecx);
    PUSH32(esp, 0xB8D1B717u);

loc_0001157F: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00011582u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0001157Fu); } /* indirect call */
    }

loc_00011582: ;
    edx = MEM32(esi);
    POP32(esp, edi);
    ecx = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx + 0xC)); return; /* indirect tail jmp */

loc_00011590: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 8 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_000115A3; /* je: equal / zero */

loc_00011595: ;
    eax = MEM32(esi + 0xC);
    ecx = MEM32(esi + 4);
    ecx = MEM32(ecx + eax * 4);
    edx = MEM32(ecx);
    PUSH32(esp, ebx);
    goto loc_0001157F;

loc_000115A3: ;
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((0) ? 0x80u : 0u) | (((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_00011582; /* jnp: not parity */

loc_000115AC: ;
    eax = MEM32(esi + 0xC);
    ecx = MEM32(esi + 4);
    ecx = MEM32(ecx + eax * 4);
    eax = MEM32(esp + 0x10);
    edx = MEM32(ecx);
    PUSH32(esp, eax);
    goto loc_0001157F;

loc_000115BE: ;
    edx = MEM32(esi + 0xC);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = edx;
    MEM32(esi + 0xC) = edx;
    edx = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_000115DE; /* jl: less (signed <) */

loc_000115CE: ;
    _fa = (uint32_t)(MEM8(esi + 0x1C)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x1C), LO8(ebx) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_000115D8; /* je: equal / zero */

loc_000115D3: ;
    MEM32(esi + 0xC) = ebx;
    goto loc_000115DE;

loc_000115D8: ;
    ecx = edx + -1;
    MEM32(esi + 0xC) = ecx;

loc_000115DE: ;
    edi = MEM32(esi + 4);

loc_000115E1: ;
    eax = MEM32(esi + 0xC);
    ecx = MEM32(edi + eax * 4);
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 4), ebp (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_000115F2; /* je: equal / zero */

loc_000115EC: ;
    _fa = (uint32_t)(MEM32(ecx + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x10), 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00011582; /* jne: not equal / not zero */

loc_000115F2: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(esi + 0xC) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_000115E1; /* jl: less (signed <) */

loc_000115FA: ;
    _fa = (uint32_t)(MEM8(esi + 0x1C)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x1C), LO8(ebx) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00011604; /* je: equal / zero */

loc_000115FF: ;
    MEM32(esi + 0xC) = ebx;
    goto loc_000115E1;

loc_00011604: ;
    eax = edx + -1;
    MEM32(esi + 0xC) = eax;
    goto loc_000115E1;

loc_0001160C: ;
    MEM32(esi + 0xC) = MEM32(esi + 0xC) - 1;
    _fa = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas >= 0)) goto loc_00011622; /* jns: not sign (positive) */

loc_00011611: ;
    _fa = (uint32_t)(MEM8(esi + 0x1C)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x1C), LO8(ebx) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0001161F; /* je: equal / zero */

loc_00011616: ;
    ecx = MEM32(esi + 8);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esi + 0xC) = ecx;
    goto loc_00011622;

loc_0001161F: ;
    MEM32(esi + 0xC) = ebx;

loc_00011622: ;
    edx = MEM32(esi + 4);

loc_00011625: ;
    eax = MEM32(esi + 0xC);
    ecx = MEM32(edx + eax * 4);
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 4), ebp (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0001163A; /* je: equal / zero */

loc_00011630: ;
    _fa = (uint32_t)(MEM32(ecx + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x10), 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00011582; /* jne: not equal / not zero */

loc_0001163A: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(esi + 0xC) = eax;
    if (CMP_GE(_fas, _fbs)) goto loc_00011625; /* jge: greater or equal (signed >=) */

loc_00011642: ;
    _fa = (uint32_t)(MEM8(esi + 0x1C)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x1C), LO8(ebx) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00011650; /* je: equal / zero */

loc_00011647: ;
    eax = MEM32(esi + 8);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esi + 0xC) = eax;
    goto loc_00011625;

loc_00011650: ;
    MEM32(esi + 0xC) = ebx;
    goto loc_00011625;

loc_00011655: ;
    PUSH32(esp, 0x0001165Au); RECOMP_ABI_CALL(0x0029E9C0u, sub_0029E9C0); /* call 0x0029E9C0 */

loc_0001165A: ;
    goto loc_00011582;

loc_0001165F: ;
    ecx = MEM32(esi + 0xC);
    edx = MEM32(esi + 4);
    eax = MEM32(edx + ecx * 4);
    edi = MEM32(eax + 4);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    ecx = edx + ecx * 4;
    if (CMP_EQ(_fa, _fb)) goto loc_00011683; /* je: equal / zero */

loc_00011673: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 6 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00011683; /* je: equal / zero */

loc_00011678: ;
    ecx = eax;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0001167Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0001167Cu); } /* indirect call */
    }

loc_0001167E: ;
    goto loc_00011582;

loc_00011683: ;
    ebp = MEM32(eax + 0x14);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_00011582; /* jl: less (signed <) */

loc_0001168E: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0x1C (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_GE(_fas, _fbs)) goto loc_00011582; /* jge: greater or equal (signed >=) */

loc_00011697: ;
    ebx = esi;
    PUSH32(esp, 0x0001169Eu); RECOMP_ABI_CALL(0x0029E910u, sub_0029E910); /* call 0x0029E910 */

loc_0001169E: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 6 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_000116BD; /* je: equal / zero */

loc_000116A3: ;
    eax = MEM32(esi + 0x18);
    ecx = MEM32(esi + 0x14);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x10);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    ecx = ebp * 8 + 0x657B90;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x000116BDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000116BBu); } /* indirect call */
    }

loc_000116BD: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00011471
 * Original: 0x00011471 - 0x000116C3 (594 bytes, 225 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00011471(void)
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

loc_00011471: ;
    ecx = MEM32(edi + 0xC);
    eax = MEM32(edx + ecx * 4);
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 4), esi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00011482; /* je: equal / zero */

loc_0001147C: ;
    _fa = (uint32_t)(MEM32(eax + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x10), 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00011488; /* jne: not equal / not zero */

loc_00011482: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(edi + 0xC) = ecx;
    goto loc_00011471;

loc_00011488: ;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 20; return; /* ret 16 */

    eax = MEM32(esi + 8);
    _cf = 0; /* xor clears CF */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_LE(_fas, _fbs)) goto loc_000114E3; /* jle: less or equal (signed <=) */

loc_000114C9: ;
    /* nop */

loc_000114D0: ;
    eax = MEM32(esi + 4);
    ecx = MEM32(eax + edi * 4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x000114DBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000114D8u); } /* indirect call */
    }

loc_000114DB: ;
    eax = MEM32(esi + 8);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_000114D0; /* jl: less (signed <) */

loc_000114E3: ;
    eax = MEM32(0x847104);
    _fa = (uint32_t)(MEM8(eax + 0x31)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x31), LO8(ebx) (8-bit) */
    _cf = (int)(_fa < _fb);
    edx = eax;
    if (CMP_BE(_fa, _fb)) goto loc_000114F2; /* jbe: below or equal (unsigned <=) */

loc_000114EF: ;
    MEM32(esi + 0x64) = ebx;

loc_000114F2: ;
    ecx = MEM32(esi + 0x64);
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    xmm0 = xmm1; /* movaps */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    ebp = 5;
    if (CMP_NE(_fa, _fb)) goto loc_0001152E; /* jne: not equal / not zero */

loc_0001150C: ;
    MEM32(esi + 0x64) = 4;
    eax = MEM32(edx + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFBu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFBu (32-bit) */
    _cf = (int)(_fa < _fb);
    xmm0 = XMM_SCALAR(MEMF(edx + 0x28)); /* movss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    if (CMP_L(_fas, _fbs)) goto loc_00011532; /* jl: less (signed <) */

loc_00011526: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_G(_fas, _fbs)) goto loc_00011532; /* jg: greater (signed >) */

loc_0001152A: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00011532;

loc_0001152E: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esi + 0x64) = ecx;

loc_00011532: ;
    ecx = MEM32(edx + 8);
    _fa = (uint32_t)(HI8(ecx)) & 0xFFu; _fb = (uint32_t)(0x11) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(ecx), 0x11 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_NZ(_fa, _fb)) goto loc_0001165F; /* jne: not equal / not zero */

loc_0001153E: ;
    _fa = (uint32_t)(HI8(ecx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(ecx), 2 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_NZ(_fa, _fb)) goto loc_00011655; /* jne: not equal / not zero */

loc_00011547: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 0x20 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_NZ(_fa, _fb)) goto loc_00011655; /* jne: not equal / not zero */

loc_00011550: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_NZ(_fa, _fb)) goto loc_0001160C; /* jne: not equal / not zero */

loc_00011559: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_G(_fas, _fbs)) goto loc_0001160C; /* jg: greater (signed >) */

loc_00011561: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 2 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_NZ(_fa, _fb)) goto loc_000115BE; /* jne: not equal / not zero */

loc_00011566: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_000115BE; /* jl: less (signed <) */

loc_0001156A: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 4 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_00011590; /* je: equal / zero */

loc_0001156F: ;
    eax = MEM32(esi + 0xC);
    ecx = MEM32(esi + 4);
    ecx = MEM32(ecx + eax * 4);
    edx = MEM32(ecx);
    PUSH32(esp, 0xB8D1B717u);

loc_0001157F: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00011582u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0001157Fu); } /* indirect call */
    }

loc_00011582: ;
    edx = MEM32(esi);
    POP32(esp, edi);
    ecx = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx + 0xC)); return; /* indirect tail jmp */

loc_00011590: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 8 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_000115A3; /* je: equal / zero */

loc_00011595: ;
    eax = MEM32(esi + 0xC);
    ecx = MEM32(esi + 4);
    ecx = MEM32(ecx + eax * 4);
    edx = MEM32(ecx);
    PUSH32(esp, ebx);
    goto loc_0001157F;

loc_000115A3: ;
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((0) ? 0x80u : 0u) | (((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_00011582; /* jnp: not parity */

loc_000115AC: ;
    eax = MEM32(esi + 0xC);
    ecx = MEM32(esi + 4);
    ecx = MEM32(ecx + eax * 4);
    eax = MEM32(esp + 0x10);
    edx = MEM32(ecx);
    PUSH32(esp, eax);
    goto loc_0001157F;

loc_000115BE: ;
    edx = MEM32(esi + 0xC);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = edx;
    MEM32(esi + 0xC) = edx;
    edx = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_000115DE; /* jl: less (signed <) */

loc_000115CE: ;
    _fa = (uint32_t)(MEM8(esi + 0x1C)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x1C), LO8(ebx) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_000115D8; /* je: equal / zero */

loc_000115D3: ;
    MEM32(esi + 0xC) = ebx;
    goto loc_000115DE;

loc_000115D8: ;
    ecx = edx + -1;
    MEM32(esi + 0xC) = ecx;

loc_000115DE: ;
    edi = MEM32(esi + 4);

loc_000115E1: ;
    eax = MEM32(esi + 0xC);
    ecx = MEM32(edi + eax * 4);
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 4), ebp (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_000115F2; /* je: equal / zero */

loc_000115EC: ;
    _fa = (uint32_t)(MEM32(ecx + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x10), 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00011582; /* jne: not equal / not zero */

loc_000115F2: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(esi + 0xC) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_000115E1; /* jl: less (signed <) */

loc_000115FA: ;
    _fa = (uint32_t)(MEM8(esi + 0x1C)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x1C), LO8(ebx) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00011604; /* je: equal / zero */

loc_000115FF: ;
    MEM32(esi + 0xC) = ebx;
    goto loc_000115E1;

loc_00011604: ;
    eax = edx + -1;
    MEM32(esi + 0xC) = eax;
    goto loc_000115E1;

loc_0001160C: ;
    MEM32(esi + 0xC) = MEM32(esi + 0xC) - 1;
    _fa = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas >= 0)) goto loc_00011622; /* jns: not sign (positive) */

loc_00011611: ;
    _fa = (uint32_t)(MEM8(esi + 0x1C)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x1C), LO8(ebx) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0001161F; /* je: equal / zero */

loc_00011616: ;
    ecx = MEM32(esi + 8);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esi + 0xC) = ecx;
    goto loc_00011622;

loc_0001161F: ;
    MEM32(esi + 0xC) = ebx;

loc_00011622: ;
    edx = MEM32(esi + 4);

loc_00011625: ;
    eax = MEM32(esi + 0xC);
    ecx = MEM32(edx + eax * 4);
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 4), ebp (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0001163A; /* je: equal / zero */

loc_00011630: ;
    _fa = (uint32_t)(MEM32(ecx + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x10), 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00011582; /* jne: not equal / not zero */

loc_0001163A: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(esi + 0xC) = eax;
    if (CMP_GE(_fas, _fbs)) goto loc_00011625; /* jge: greater or equal (signed >=) */

loc_00011642: ;
    _fa = (uint32_t)(MEM8(esi + 0x1C)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x1C), LO8(ebx) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00011650; /* je: equal / zero */

loc_00011647: ;
    eax = MEM32(esi + 8);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esi + 0xC) = eax;
    goto loc_00011625;

loc_00011650: ;
    MEM32(esi + 0xC) = ebx;
    goto loc_00011625;

loc_00011655: ;
    PUSH32(esp, 0x0001165Au); RECOMP_ABI_CALL(0x0029E9C0u, sub_0029E9C0); /* call 0x0029E9C0 */

loc_0001165A: ;
    goto loc_00011582;

loc_0001165F: ;
    ecx = MEM32(esi + 0xC);
    edx = MEM32(esi + 4);
    eax = MEM32(edx + ecx * 4);
    edi = MEM32(eax + 4);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    ecx = edx + ecx * 4;
    if (CMP_EQ(_fa, _fb)) goto loc_00011683; /* je: equal / zero */

loc_00011673: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 6 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00011683; /* je: equal / zero */

loc_00011678: ;
    ecx = eax;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0001167Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0001167Cu); } /* indirect call */
    }

loc_0001167E: ;
    goto loc_00011582;

loc_00011683: ;
    ebp = MEM32(eax + 0x14);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_00011582; /* jl: less (signed <) */

loc_0001168E: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0x1C (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_GE(_fas, _fbs)) goto loc_00011582; /* jge: greater or equal (signed >=) */

loc_00011697: ;
    ebx = esi;
    PUSH32(esp, 0x0001169Eu); RECOMP_ABI_CALL(0x0029E910u, sub_0029E910); /* call 0x0029E910 */

loc_0001169E: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 6 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_000116BD; /* je: equal / zero */

loc_000116A3: ;
    eax = MEM32(esi + 0x18);
    ecx = MEM32(esi + 0x14);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x10);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    ecx = ebp * 8 + 0x657B90;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x000116BDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000116BBu); } /* indirect call */
    }

loc_000116BD: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00011486
 * Original: 0x00011486 - 0x000116C3 (573 bytes, 217 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00011486(void)
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

loc_00011486: ;
    g_seh_ebp = ebp; sub_00011471(); return; /* tail jmp 0x00011471 */

    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 20; return; /* ret 16 */

    eax = MEM32(esi + 8);
    _cf = 0; /* xor clears CF */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_LE(_fas, _fbs)) goto loc_000114E3; /* jle: less or equal (signed <=) */

loc_000114C9: ;
    /* nop */

loc_000114D0: ;
    eax = MEM32(esi + 4);
    ecx = MEM32(eax + edi * 4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x000114DBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000114D8u); } /* indirect call */
    }

loc_000114DB: ;
    eax = MEM32(esi + 8);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_000114D0; /* jl: less (signed <) */

loc_000114E3: ;
    eax = MEM32(0x847104);
    _fa = (uint32_t)(MEM8(eax + 0x31)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x31), LO8(ebx) (8-bit) */
    _cf = (int)(_fa < _fb);
    edx = eax;
    if (CMP_BE(_fa, _fb)) goto loc_000114F2; /* jbe: below or equal (unsigned <=) */

loc_000114EF: ;
    MEM32(esi + 0x64) = ebx;

loc_000114F2: ;
    ecx = MEM32(esi + 0x64);
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    xmm0 = xmm1; /* movaps */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    ebp = 5;
    if (CMP_NE(_fa, _fb)) goto loc_0001152E; /* jne: not equal / not zero */

loc_0001150C: ;
    MEM32(esi + 0x64) = 4;
    eax = MEM32(edx + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFBu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFBu (32-bit) */
    _cf = (int)(_fa < _fb);
    xmm0 = XMM_SCALAR(MEMF(edx + 0x28)); /* movss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    if (CMP_L(_fas, _fbs)) goto loc_00011532; /* jl: less (signed <) */

loc_00011526: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_G(_fas, _fbs)) goto loc_00011532; /* jg: greater (signed >) */

loc_0001152A: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00011532;

loc_0001152E: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esi + 0x64) = ecx;

loc_00011532: ;
    ecx = MEM32(edx + 8);
    _fa = (uint32_t)(HI8(ecx)) & 0xFFu; _fb = (uint32_t)(0x11) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(ecx), 0x11 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_NZ(_fa, _fb)) goto loc_0001165F; /* jne: not equal / not zero */

loc_0001153E: ;
    _fa = (uint32_t)(HI8(ecx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(ecx), 2 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_NZ(_fa, _fb)) goto loc_00011655; /* jne: not equal / not zero */

loc_00011547: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 0x20 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_NZ(_fa, _fb)) goto loc_00011655; /* jne: not equal / not zero */

loc_00011550: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_NZ(_fa, _fb)) goto loc_0001160C; /* jne: not equal / not zero */

loc_00011559: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_G(_fas, _fbs)) goto loc_0001160C; /* jg: greater (signed >) */

loc_00011561: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 2 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_NZ(_fa, _fb)) goto loc_000115BE; /* jne: not equal / not zero */

loc_00011566: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_000115BE; /* jl: less (signed <) */

loc_0001156A: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 4 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_00011590; /* je: equal / zero */

loc_0001156F: ;
    eax = MEM32(esi + 0xC);
    ecx = MEM32(esi + 4);
    ecx = MEM32(ecx + eax * 4);
    edx = MEM32(ecx);
    PUSH32(esp, 0xB8D1B717u);

loc_0001157F: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00011582u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0001157Fu); } /* indirect call */
    }

loc_00011582: ;
    edx = MEM32(esi);
    POP32(esp, edi);
    ecx = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx + 0xC)); return; /* indirect tail jmp */

loc_00011590: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 8 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_000115A3; /* je: equal / zero */

loc_00011595: ;
    eax = MEM32(esi + 0xC);
    ecx = MEM32(esi + 4);
    ecx = MEM32(ecx + eax * 4);
    edx = MEM32(ecx);
    PUSH32(esp, ebx);
    goto loc_0001157F;

loc_000115A3: ;
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((0) ? 0x80u : 0u) | (((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_00011582; /* jnp: not parity */

loc_000115AC: ;
    eax = MEM32(esi + 0xC);
    ecx = MEM32(esi + 4);
    ecx = MEM32(ecx + eax * 4);
    eax = MEM32(esp + 0x10);
    edx = MEM32(ecx);
    PUSH32(esp, eax);
    goto loc_0001157F;

loc_000115BE: ;
    edx = MEM32(esi + 0xC);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = edx;
    MEM32(esi + 0xC) = edx;
    edx = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_000115DE; /* jl: less (signed <) */

loc_000115CE: ;
    _fa = (uint32_t)(MEM8(esi + 0x1C)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x1C), LO8(ebx) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_000115D8; /* je: equal / zero */

loc_000115D3: ;
    MEM32(esi + 0xC) = ebx;
    goto loc_000115DE;

loc_000115D8: ;
    ecx = edx + -1;
    MEM32(esi + 0xC) = ecx;

loc_000115DE: ;
    edi = MEM32(esi + 4);

loc_000115E1: ;
    eax = MEM32(esi + 0xC);
    ecx = MEM32(edi + eax * 4);
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 4), ebp (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_000115F2; /* je: equal / zero */

loc_000115EC: ;
    _fa = (uint32_t)(MEM32(ecx + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x10), 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00011582; /* jne: not equal / not zero */

loc_000115F2: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(esi + 0xC) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_000115E1; /* jl: less (signed <) */

loc_000115FA: ;
    _fa = (uint32_t)(MEM8(esi + 0x1C)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x1C), LO8(ebx) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00011604; /* je: equal / zero */

loc_000115FF: ;
    MEM32(esi + 0xC) = ebx;
    goto loc_000115E1;

loc_00011604: ;
    eax = edx + -1;
    MEM32(esi + 0xC) = eax;
    goto loc_000115E1;

loc_0001160C: ;
    MEM32(esi + 0xC) = MEM32(esi + 0xC) - 1;
    _fa = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas >= 0)) goto loc_00011622; /* jns: not sign (positive) */

loc_00011611: ;
    _fa = (uint32_t)(MEM8(esi + 0x1C)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x1C), LO8(ebx) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0001161F; /* je: equal / zero */

loc_00011616: ;
    ecx = MEM32(esi + 8);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esi + 0xC) = ecx;
    goto loc_00011622;

loc_0001161F: ;
    MEM32(esi + 0xC) = ebx;

loc_00011622: ;
    edx = MEM32(esi + 4);

loc_00011625: ;
    eax = MEM32(esi + 0xC);
    ecx = MEM32(edx + eax * 4);
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 4), ebp (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0001163A; /* je: equal / zero */

loc_00011630: ;
    _fa = (uint32_t)(MEM32(ecx + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x10), 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00011582; /* jne: not equal / not zero */

loc_0001163A: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(esi + 0xC) = eax;
    if (CMP_GE(_fas, _fbs)) goto loc_00011625; /* jge: greater or equal (signed >=) */

loc_00011642: ;
    _fa = (uint32_t)(MEM8(esi + 0x1C)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x1C), LO8(ebx) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00011650; /* je: equal / zero */

loc_00011647: ;
    eax = MEM32(esi + 8);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esi + 0xC) = eax;
    goto loc_00011625;

loc_00011650: ;
    MEM32(esi + 0xC) = ebx;
    goto loc_00011625;

loc_00011655: ;
    PUSH32(esp, 0x0001165Au); RECOMP_ABI_CALL(0x0029E9C0u, sub_0029E9C0); /* call 0x0029E9C0 */

loc_0001165A: ;
    goto loc_00011582;

loc_0001165F: ;
    ecx = MEM32(esi + 0xC);
    edx = MEM32(esi + 4);
    eax = MEM32(edx + ecx * 4);
    edi = MEM32(eax + 4);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    ecx = edx + ecx * 4;
    if (CMP_EQ(_fa, _fb)) goto loc_00011683; /* je: equal / zero */

loc_00011673: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 6 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00011683; /* je: equal / zero */

loc_00011678: ;
    ecx = eax;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0001167Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0001167Cu); } /* indirect call */
    }

loc_0001167E: ;
    goto loc_00011582;

loc_00011683: ;
    ebp = MEM32(eax + 0x14);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_00011582; /* jl: less (signed <) */

loc_0001168E: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0x1C (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_GE(_fas, _fbs)) goto loc_00011582; /* jge: greater or equal (signed >=) */

loc_00011697: ;
    ebx = esi;
    PUSH32(esp, 0x0001169Eu); RECOMP_ABI_CALL(0x0029E910u, sub_0029E910); /* call 0x0029E910 */

loc_0001169E: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 6 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_000116BD; /* je: equal / zero */

loc_000116A3: ;
    eax = MEM32(esi + 0x18);
    ecx = MEM32(esi + 0x14);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x10);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    ecx = ebp * 8 + 0x657B90;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x000116BDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000116BBu); } /* indirect call */
    }

loc_000116BD: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0001148F
 * Original: 0x0001148F - 0x000116C3 (564 bytes, 211 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001148F(void)
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

loc_0001148F: ;
    esp += 20; return; /* ret 16 */

    eax = MEM32(esi + 8);
    _cf = 0; /* xor clears CF */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_LE(_fas, _fbs)) goto loc_000114E3; /* jle: less or equal (signed <=) */

loc_000114C9: ;
    /* nop */

loc_000114D0: ;
    eax = MEM32(esi + 4);
    ecx = MEM32(eax + edi * 4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x000114DBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000114D8u); } /* indirect call */
    }

loc_000114DB: ;
    eax = MEM32(esi + 8);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_000114D0; /* jl: less (signed <) */

loc_000114E3: ;
    eax = MEM32(0x847104);
    _fa = (uint32_t)(MEM8(eax + 0x31)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x31), LO8(ebx) (8-bit) */
    _cf = (int)(_fa < _fb);
    edx = eax;
    if (CMP_BE(_fa, _fb)) goto loc_000114F2; /* jbe: below or equal (unsigned <=) */

loc_000114EF: ;
    MEM32(esi + 0x64) = ebx;

loc_000114F2: ;
    ecx = MEM32(esi + 0x64);
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    xmm0 = xmm1; /* movaps */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    ebp = 5;
    if (CMP_NE(_fa, _fb)) goto loc_0001152E; /* jne: not equal / not zero */

loc_0001150C: ;
    MEM32(esi + 0x64) = 4;
    eax = MEM32(edx + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFBu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFBu (32-bit) */
    _cf = (int)(_fa < _fb);
    xmm0 = XMM_SCALAR(MEMF(edx + 0x28)); /* movss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    if (CMP_L(_fas, _fbs)) goto loc_00011532; /* jl: less (signed <) */

loc_00011526: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_G(_fas, _fbs)) goto loc_00011532; /* jg: greater (signed >) */

loc_0001152A: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00011532;

loc_0001152E: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esi + 0x64) = ecx;

loc_00011532: ;
    ecx = MEM32(edx + 8);
    _fa = (uint32_t)(HI8(ecx)) & 0xFFu; _fb = (uint32_t)(0x11) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(ecx), 0x11 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_NZ(_fa, _fb)) goto loc_0001165F; /* jne: not equal / not zero */

loc_0001153E: ;
    _fa = (uint32_t)(HI8(ecx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(ecx), 2 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_NZ(_fa, _fb)) goto loc_00011655; /* jne: not equal / not zero */

loc_00011547: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 0x20 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_NZ(_fa, _fb)) goto loc_00011655; /* jne: not equal / not zero */

loc_00011550: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_NZ(_fa, _fb)) goto loc_0001160C; /* jne: not equal / not zero */

loc_00011559: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_G(_fas, _fbs)) goto loc_0001160C; /* jg: greater (signed >) */

loc_00011561: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 2 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_NZ(_fa, _fb)) goto loc_000115BE; /* jne: not equal / not zero */

loc_00011566: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_000115BE; /* jl: less (signed <) */

loc_0001156A: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 4 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_00011590; /* je: equal / zero */

loc_0001156F: ;
    eax = MEM32(esi + 0xC);
    ecx = MEM32(esi + 4);
    ecx = MEM32(ecx + eax * 4);
    edx = MEM32(ecx);
    PUSH32(esp, 0xB8D1B717u);

loc_0001157F: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00011582u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0001157Fu); } /* indirect call */
    }

loc_00011582: ;
    edx = MEM32(esi);
    POP32(esp, edi);
    ecx = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx + 0xC)); return; /* indirect tail jmp */

loc_00011590: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 8 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_000115A3; /* je: equal / zero */

loc_00011595: ;
    eax = MEM32(esi + 0xC);
    ecx = MEM32(esi + 4);
    ecx = MEM32(ecx + eax * 4);
    edx = MEM32(ecx);
    PUSH32(esp, ebx);
    goto loc_0001157F;

loc_000115A3: ;
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((0) ? 0x80u : 0u) | (((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_00011582; /* jnp: not parity */

loc_000115AC: ;
    eax = MEM32(esi + 0xC);
    ecx = MEM32(esi + 4);
    ecx = MEM32(ecx + eax * 4);
    eax = MEM32(esp + 0x10);
    edx = MEM32(ecx);
    PUSH32(esp, eax);
    goto loc_0001157F;

loc_000115BE: ;
    edx = MEM32(esi + 0xC);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = edx;
    MEM32(esi + 0xC) = edx;
    edx = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_000115DE; /* jl: less (signed <) */

loc_000115CE: ;
    _fa = (uint32_t)(MEM8(esi + 0x1C)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x1C), LO8(ebx) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_000115D8; /* je: equal / zero */

loc_000115D3: ;
    MEM32(esi + 0xC) = ebx;
    goto loc_000115DE;

loc_000115D8: ;
    ecx = edx + -1;
    MEM32(esi + 0xC) = ecx;

loc_000115DE: ;
    edi = MEM32(esi + 4);

loc_000115E1: ;
    eax = MEM32(esi + 0xC);
    ecx = MEM32(edi + eax * 4);
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 4), ebp (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_000115F2; /* je: equal / zero */

loc_000115EC: ;
    _fa = (uint32_t)(MEM32(ecx + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x10), 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00011582; /* jne: not equal / not zero */

loc_000115F2: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(esi + 0xC) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_000115E1; /* jl: less (signed <) */

loc_000115FA: ;
    _fa = (uint32_t)(MEM8(esi + 0x1C)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x1C), LO8(ebx) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00011604; /* je: equal / zero */

loc_000115FF: ;
    MEM32(esi + 0xC) = ebx;
    goto loc_000115E1;

loc_00011604: ;
    eax = edx + -1;
    MEM32(esi + 0xC) = eax;
    goto loc_000115E1;

loc_0001160C: ;
    MEM32(esi + 0xC) = MEM32(esi + 0xC) - 1;
    _fa = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas >= 0)) goto loc_00011622; /* jns: not sign (positive) */

loc_00011611: ;
    _fa = (uint32_t)(MEM8(esi + 0x1C)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x1C), LO8(ebx) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0001161F; /* je: equal / zero */

loc_00011616: ;
    ecx = MEM32(esi + 8);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esi + 0xC) = ecx;
    goto loc_00011622;

loc_0001161F: ;
    MEM32(esi + 0xC) = ebx;

loc_00011622: ;
    edx = MEM32(esi + 4);

loc_00011625: ;
    eax = MEM32(esi + 0xC);
    ecx = MEM32(edx + eax * 4);
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 4), ebp (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0001163A; /* je: equal / zero */

loc_00011630: ;
    _fa = (uint32_t)(MEM32(ecx + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x10), 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00011582; /* jne: not equal / not zero */

loc_0001163A: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(esi + 0xC) = eax;
    if (CMP_GE(_fas, _fbs)) goto loc_00011625; /* jge: greater or equal (signed >=) */

loc_00011642: ;
    _fa = (uint32_t)(MEM8(esi + 0x1C)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x1C), LO8(ebx) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00011650; /* je: equal / zero */

loc_00011647: ;
    eax = MEM32(esi + 8);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esi + 0xC) = eax;
    goto loc_00011625;

loc_00011650: ;
    MEM32(esi + 0xC) = ebx;
    goto loc_00011625;

loc_00011655: ;
    PUSH32(esp, 0x0001165Au); RECOMP_ABI_CALL(0x0029E9C0u, sub_0029E9C0); /* call 0x0029E9C0 */

loc_0001165A: ;
    goto loc_00011582;

loc_0001165F: ;
    ecx = MEM32(esi + 0xC);
    edx = MEM32(esi + 4);
    eax = MEM32(edx + ecx * 4);
    edi = MEM32(eax + 4);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    ecx = edx + ecx * 4;
    if (CMP_EQ(_fa, _fb)) goto loc_00011683; /* je: equal / zero */

loc_00011673: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 6 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00011683; /* je: equal / zero */

loc_00011678: ;
    ecx = eax;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0001167Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0001167Cu); } /* indirect call */
    }

loc_0001167E: ;
    goto loc_00011582;

loc_00011683: ;
    ebp = MEM32(eax + 0x14);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_00011582; /* jl: less (signed <) */

loc_0001168E: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0x1C (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_GE(_fas, _fbs)) goto loc_00011582; /* jge: greater or equal (signed >=) */

loc_00011697: ;
    ebx = esi;
    PUSH32(esp, 0x0001169Eu); RECOMP_ABI_CALL(0x0029E910u, sub_0029E910); /* call 0x0029E910 */

loc_0001169E: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 6 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_000116BD; /* je: equal / zero */

loc_000116A3: ;
    eax = MEM32(esi + 0x18);
    ecx = MEM32(esi + 0x14);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x10);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    ecx = ebp * 8 + 0x657B90;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x000116BDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000116BBu); } /* indirect call */
    }

loc_000116BD: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_000116D0
 * Original: 0x000116D0 - 0x0001189B (459 bytes, 129 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000116D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000116D0: ;
    PUSH32(esp, ecx);
    eax = MEM32(0x8086E8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_000116E6; /* jne: not equal / not zero */

loc_000116DF: ;
    PUSH32(esp, 0x000116E4u); RECOMP_ABI_CALL(0x003D2A40u, sub_003D2A40); /* call 0x003D2A40 */

loc_000116E4: ;
    goto loc_000116EB;

loc_000116E6: ;
    PUSH32(esp, 0x000116EBu); RECOMP_ABI_CALL(0x003D2EF0u, sub_003D2EF0); /* call 0x003D2EF0 */

loc_000116EB: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x18)); /* movss */
    xmm1 = xmm0; /* movaps */
    MEMF(0x80765C) = xmm1.f[0]; /* movss */
    MEMF(0x807660) = xmm0.f[0]; /* movss */
    eax = MEM32(esi + 8);
    xmm0 = XMM_SCALAR(MEMF(esi + 0x14)); /* movss */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    if (CMP_LE(_fas, _fbs)) goto loc_00011812; /* jle: less or equal (signed <=) */

loc_0001171B: ;
    goto loc_00011720;

    /* nop */

loc_00011720: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(esi + 0xC) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00011733; /* jne: not equal / not zero */

loc_00011725: ;
    SET_LO8(eax, MEM8(esi + 0x40));
    SET_LO8(ecx, MEM8(esi + 0x3C));
    SET_LO8(edx, MEM8(esi + 0x38));
    SET_LO8(ebx, MEM8(esi + 0x34));
    goto loc_00011797;

loc_00011733: ;
    ecx = MEM32(esi + 4);
    eax = MEM32(ecx + edi * 4);
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 4), 5 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00011785; /* jne: not equal / not zero */

loc_0001173F: ;
    SET_LO8(eax, MEM8(esi + 0x60));
    SET_LO8(ecx, MEM8(esi + 0x5C));
    SET_LO8(edx, MEM8(esi + 0x58));
    SET_LO8(ebx, MEM8(esi + 0x54));
    MEM8(0x807665) = LO8(edx);
    MEM8(0x807664) = LO8(ebx);
    MEM8(0x807666) = LO8(ecx);
    MEM8(0x807667) = LO8(eax);
    edx = MEM32(esi + 4);
    ecx = MEM32(edx + edi * 4);
    edx = MEM32(esp + 0xC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = MEM32(esi + 0x10);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x00011776u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00011773u); } /* indirect call */
    }

loc_00011776: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x18)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x648F00); /* mulss */
    goto loc_000117FA;

loc_00011785: ;
    _fa = (uint32_t)(MEM32(eax + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x10), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000117B6; /* jne: not equal / not zero */

loc_0001178B: ;
    SET_LO8(eax, MEM8(esi + 0x50));
    SET_LO8(ecx, MEM8(esi + 0x4C));
    SET_LO8(edx, MEM8(esi + 0x48));
    SET_LO8(ebx, MEM8(esi + 0x44));

loc_00011797: ;
    MEM8(0x807664) = LO8(ebx);
    MEM8(0x807665) = LO8(edx);
    MEM8(0x807666) = LO8(ecx);
    MEM8(0x807667) = LO8(eax);
    eax = MEM32(esi + 4);
    ecx = MEM32(eax + edi * 4);
    goto loc_000117DF;

loc_000117B6: ;
    SET_LO8(ecx, MEM8(esi + 0x2C));
    SET_LO8(eax, MEM8(esi + 0x30));
    SET_LO8(edx, MEM8(esi + 0x28));
    SET_LO8(ebx, MEM8(esi + 0x24));
    MEM8(0x807664) = LO8(ebx);
    MEM8(0x807665) = LO8(edx);
    MEM8(0x807666) = LO8(ecx);
    MEM8(0x807667) = LO8(eax);
    ecx = MEM32(esi + 4);
    ecx = MEM32(ecx + edi * 4);

loc_000117DF: ;
    eax = MEM32(esp + 0xC);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x10);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x000117EDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000117EAu); } /* indirect call */
    }

loc_000117ED: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x18)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x649108); /* mulss */

loc_000117FA: ;
    eax = MEM32(esi + 8);
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0xC); /* addss */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    if (CMP_L(_fas, _fbs)) goto loc_00011720; /* jl: less (signed <) */

loc_00011812: ;
    esi = MEM32(0x5499E8);
    edi = MEM32(esi + 0xF88);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00011842; /* je: equal / zero */

loc_00011824: ;
    ecx = MEM32(esi + 0x2C);
    MEM32(edi + 8) = ecx;
    ecx = MEM32(edi);
    _fb = (uint32_t)(0xFFF80000u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xFFF80000u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x78FFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x78FFFF (32-bit) */
    MEM32(edi) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_00011842; /* jne: not equal / not zero */

loc_0001183D: ;
    PUSH32(esp, 0x00011842u); RECOMP_ABI_CALL(0x0053B720u, sub_0053B720); /* call 0x0053B720 */

loc_00011842: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 4) (32-bit) */
    MEM32(esi + 0xF88) = ebx;
    if (CMP_B(_fa, _fb)) goto loc_0001185E; /* jb: below (unsigned <) */

loc_0001184F: ;
    eax = MEM32(0x54A8B8);
    edx = eax;
    edx = edx >> 1;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, edx);
    PUSH32(esp, 0x0001185Eu); RECOMP_ABI_CALL(0x0053C300u, sub_0053C300); /* call 0x0053C300 */

loc_0001185E: ;
    ecx = MEM32(0x5499F0);
    MEM32(eax) = 0x41B0C;
    MEM32(eax + 4) = ebx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi) = eax;
    MEM32(esi + 0xC) = 0x80000000u;
    eax = MEM32(0x8072F0);
    POP32(esp, edi);
    ecx = ecx | 0x4800;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    POP32(esp, esi);
    MEM32(0x5499F0) = ecx;
    MEM32(0x8072F0) = eax;
    POP32(esp, ebx);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_001F6060(); return; /* tail jmp 0x001F6060 */

}

/**
 * sub_000118A0
 * Original: 0x000118A0 - 0x00011B2A (650 bytes, 240 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000118A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000118A0: ;
    PUSH32(esp, ebx);
    ebx = esi;
    ebx = (uint32_t)((int32_t)ebx * (int32_t)0x2C);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    eax = MEM32(ebp);
    eax = MEM32(ebx + eax + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xB) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xB (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_A(_fa, _fb)) goto loc_00011A6E; /* ja: above (unsigned >) */

loc_000118BB: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x11AC4); /* switch: 12 entries, 9 targets */
    if (_jt == 0x000118C2u) goto loc_000118C2;
    if (_jt == 0x00011901u) goto loc_00011901;
    if (_jt == 0x00011940u) goto loc_00011940;
    if (_jt == 0x0001197Fu) goto loc_0001197F;
    if (_jt == 0x000119BEu) goto loc_000119BE;
    if (_jt == 0x000119F9u) goto loc_000119F9;
    if (_jt == 0x00011A34u) goto loc_00011A34;
    if (_jt == 0x00011A6Eu) goto loc_00011A6E;
    if (_jt == 0x00011A89u) goto loc_00011A89;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_000118C2: ;
    PUSH32(esp, 0x24);
    PUSH32(esp, 0x000118C9u); RECOMP_ABI_CALL(0x002AF3F0u, sub_002AF3F0); /* call 0x002AF3F0 */

loc_000118C9: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_000118D7; /* je: equal / zero */

loc_000118D0: ;
    PUSH32(esp, 0x000118D5u); RECOMP_ABI_CALL(0x00011F90u, sub_00011F90); /* call 0x00011F90 */

loc_000118D5: ;
    goto loc_000118D9;

loc_000118D7: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000118D9: ;
    ecx = MEM32(edi + 4);
    MEM32(ecx + esi * 4) = eax;
    edx = MEM32(edi + 4);
    _fa = (uint32_t)(MEM32(edx + esi * 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx + esi * 4), 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00011A5A; /* je: equal / zero */

loc_000118EC: ;
    eax = edx;
    ecx = MEM32(eax + esi * 4);
    eax = MEM32(ebp);
    edx = MEM32(ecx);
    POP32(esp, ebp);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(ebx)) >> 32) & 1);
    eax = eax + ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx + 0xC)); return; /* indirect tail jmp */

loc_00011901: ;
    PUSH32(esp, 0x24);
    PUSH32(esp, 0x00011908u); RECOMP_ABI_CALL(0x002AF3F0u, sub_002AF3F0); /* call 0x002AF3F0 */

loc_00011908: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00011916; /* je: equal / zero */

loc_0001190F: ;
    PUSH32(esp, 0x00011914u); RECOMP_ABI_CALL(0x000120A0u, sub_000120A0); /* call 0x000120A0 */

loc_00011914: ;
    goto loc_00011918;

loc_00011916: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00011918: ;
    ecx = MEM32(edi + 4);
    MEM32(ecx + esi * 4) = eax;
    edx = MEM32(edi + 4);
    _fa = (uint32_t)(MEM32(edx + esi * 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx + esi * 4), 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00011A5A; /* je: equal / zero */

loc_0001192B: ;
    eax = edx;
    ecx = MEM32(eax + esi * 4);
    eax = MEM32(ebp);
    edx = MEM32(ecx);
    POP32(esp, ebp);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(ebx)) >> 32) & 1);
    eax = eax + ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx + 0xC)); return; /* indirect tail jmp */

loc_00011940: ;
    PUSH32(esp, 0x18);
    PUSH32(esp, 0x00011947u); RECOMP_ABI_CALL(0x002AF3F0u, sub_002AF3F0); /* call 0x002AF3F0 */

loc_00011947: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00011955; /* je: equal / zero */

loc_0001194E: ;
    PUSH32(esp, 0x00011953u); RECOMP_ABI_CALL(0x00012210u, sub_00012210); /* call 0x00012210 */

loc_00011953: ;
    goto loc_00011957;

loc_00011955: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00011957: ;
    ecx = MEM32(edi + 4);
    MEM32(ecx + esi * 4) = eax;
    edx = MEM32(edi + 4);
    _fa = (uint32_t)(MEM32(edx + esi * 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx + esi * 4), 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00011A5A; /* je: equal / zero */

loc_0001196A: ;
    eax = edx;
    ecx = MEM32(eax + esi * 4);
    eax = MEM32(ebp);
    edx = MEM32(ecx);
    POP32(esp, ebp);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(ebx)) >> 32) & 1);
    eax = eax + ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx + 0xC)); return; /* indirect tail jmp */

loc_0001197F: ;
    PUSH32(esp, 0x18);
    PUSH32(esp, 0x00011986u); RECOMP_ABI_CALL(0x002AF3F0u, sub_002AF3F0); /* call 0x002AF3F0 */

loc_00011986: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00011994; /* je: equal / zero */

loc_0001198D: ;
    PUSH32(esp, 0x00011992u); RECOMP_ABI_CALL(0x000122C0u, sub_000122C0); /* call 0x000122C0 */

loc_00011992: ;
    goto loc_00011996;

loc_00011994: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00011996: ;
    ecx = MEM32(edi + 4);
    MEM32(ecx + esi * 4) = eax;
    edx = MEM32(edi + 4);
    _fa = (uint32_t)(MEM32(edx + esi * 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx + esi * 4), 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00011A5A; /* je: equal / zero */

loc_000119A9: ;
    eax = edx;
    ecx = MEM32(eax + esi * 4);
    eax = MEM32(ebp);
    edx = MEM32(ecx);
    POP32(esp, ebp);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(ebx)) >> 32) & 1);
    eax = eax + ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx + 0xC)); return; /* indirect tail jmp */

loc_000119BE: ;
    PUSH32(esp, 0x18);
    PUSH32(esp, 0x000119C5u); RECOMP_ABI_CALL(0x002AF3F0u, sub_002AF3F0); /* call 0x002AF3F0 */

loc_000119C5: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_000119D3; /* je: equal / zero */

loc_000119CC: ;
    PUSH32(esp, 0x000119D1u); RECOMP_ABI_CALL(0x00012310u, sub_00012310); /* call 0x00012310 */

loc_000119D1: ;
    goto loc_000119D5;

loc_000119D3: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000119D5: ;
    ecx = MEM32(edi + 4);
    MEM32(ecx + esi * 4) = eax;
    edx = MEM32(edi + 4);
    _fa = (uint32_t)(MEM32(edx + esi * 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx + esi * 4), 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00011A5A; /* je: equal / zero */

loc_000119E4: ;
    eax = edx;
    ecx = MEM32(eax + esi * 4);
    eax = MEM32(ebp);
    edx = MEM32(ecx);
    POP32(esp, ebp);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(ebx)) >> 32) & 1);
    eax = eax + ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx + 0xC)); return; /* indirect tail jmp */

loc_000119F9: ;
    PUSH32(esp, 0x24);
    PUSH32(esp, 0x00011A00u); RECOMP_ABI_CALL(0x002AF3F0u, sub_002AF3F0); /* call 0x002AF3F0 */

loc_00011A00: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00011A0E; /* je: equal / zero */

loc_00011A07: ;
    PUSH32(esp, 0x00011A0Cu); RECOMP_ABI_CALL(0x00012380u, sub_00012380); /* call 0x00012380 */

loc_00011A0C: ;
    goto loc_00011A10;

loc_00011A0E: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00011A10: ;
    ecx = MEM32(edi + 4);
    MEM32(ecx + esi * 4) = eax;
    edx = MEM32(edi + 4);
    _fa = (uint32_t)(MEM32(edx + esi * 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx + esi * 4), 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00011A5A; /* je: equal / zero */

loc_00011A1F: ;
    eax = edx;
    ecx = MEM32(eax + esi * 4);
    eax = MEM32(ebp);
    edx = MEM32(ecx);
    POP32(esp, ebp);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(ebx)) >> 32) & 1);
    eax = eax + ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx + 0xC)); return; /* indirect tail jmp */

loc_00011A34: ;
    PUSH32(esp, 0x18);
    PUSH32(esp, 0x00011A3Bu); RECOMP_ABI_CALL(0x002AF3F0u, sub_002AF3F0); /* call 0x002AF3F0 */

loc_00011A3B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00011A49; /* je: equal / zero */

loc_00011A42: ;
    PUSH32(esp, 0x00011A47u); RECOMP_ABI_CALL(0x000123E0u, sub_000123E0); /* call 0x000123E0 */

loc_00011A47: ;
    goto loc_00011A4B;

loc_00011A49: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00011A4B: ;
    ecx = MEM32(edi + 4);
    MEM32(ecx + esi * 4) = eax;
    edx = MEM32(edi + 4);
    _fa = (uint32_t)(MEM32(edx + esi * 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx + esi * 4), 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00011A73; /* jne: not equal / not zero */

loc_00011A5A: ;
    PUSH32(esp, 0x587BE4);
    PUSH32(esp, 0);
    PUSH32(esp, 0x587BE4);
    PUSH32(esp, 0x00011A6Bu); RECOMP_ABI_CALL(0x001F0620u, sub_001F0620); /* call 0x001F0620 */

loc_00011A6B: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00011A6E: ;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_00011A73: ;
    eax = MEM32(edi + 4);
    ecx = MEM32(eax + esi * 4);
    eax = MEM32(ebp);
    edx = MEM32(ecx);
    POP32(esp, ebp);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(ebx)) >> 32) & 1);
    eax = eax + ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx + 0xC)); return; /* indirect tail jmp */

loc_00011A89: ;
    PUSH32(esp, 0x24);
    PUSH32(esp, 0x00011A90u); RECOMP_ABI_CALL(0x002AF3F0u, sub_002AF3F0); /* call 0x002AF3F0 */

loc_00011A90: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00011A9E; /* je: equal / zero */

loc_00011A97: ;
    PUSH32(esp, 0x00011A9Cu); RECOMP_ABI_CALL(0x00012410u, sub_00012410); /* call 0x00012410 */

loc_00011A9C: ;
    goto loc_00011AA0;

loc_00011A9E: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00011AA0: ;
    ecx = MEM32(edi + 4);
    MEM32(ecx + esi * 4) = eax;
    edx = MEM32(edi + 4);
    _fa = (uint32_t)(MEM32(edx + esi * 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx + esi * 4), 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00011A5A; /* je: equal / zero */

loc_00011AAF: ;
    eax = edx;
    ecx = MEM32(eax + esi * 4);
    eax = MEM32(ebp);
    edx = MEM32(ecx);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(ebx)) >> 32) & 1);
    eax = eax + ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebp);
    POP32(esp, ebx);
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx + 0xC)); return; /* indirect tail jmp */

    esp += 284; return; /* ret 280 */

    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM32(eax)) + (uint64_t)(eax)) >> 32) & 1);
    MEM32(eax) = MEM32(eax) + eax;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = 0xBE000119u;
    { uint64_t _t = (uint64_t)(MEM32(ecx)) - (uint64_t)(eax) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); MEM32(ecx) = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _fb = (uint32_t)(HI8(ebx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(esi + -1107295975)) + (uint64_t)(HI8(ebx))) >> 8) & 1);
    MEM8(esi + -1107295975) = MEM8(esi + -1107295975) + HI8(ebx);
    _fa = (uint32_t)(MEM8(esi + -1107295975)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    { uint64_t _t = (uint64_t)(MEM32(ecx)) - (uint64_t)(eax) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); MEM32(ecx) = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _fb = (uint32_t)(HI8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(esi + 0x1A)) + (uint64_t)(HI8(ecx))) >> 8) & 1);
    MEM8(esi + 0x1A) = MEM8(esi + 0x1A) + HI8(ecx);
    _fa = (uint32_t)(MEM8(esi + 0x1A)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM32(eax)) + (uint64_t)(eax)) >> 32) & 1);
    MEM32(eax) = MEM32(eax) + eax;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = 1; /* stc */
    { uint64_t _t = (uint64_t)(MEM32(ecx)) - (uint64_t)(eax) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); MEM32(ecx) = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */

loc_00011AEB: ;
    _fb = (uint32_t)(HI8(edx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(edx + ebx)) + (uint64_t)(HI8(edx))) >> 8) & 1);
    MEM8(edx + ebx) = MEM8(edx + ebx) + HI8(edx);
    _fa = (uint32_t)(MEM8(edx + ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM32(eax)) + (uint64_t)(eax)) >> 32) & 1);
    MEM32(eax) = MEM32(eax) + eax;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edx) = ebx;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM32(eax)) + (uint64_t)(eax)) >> 32) & 1);
    MEM32(eax) = MEM32(eax) + eax;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
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
    /* int3: debug-trap slide byte, stepped over */
    eax = MEM32(ecx + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00011B0F; /* je: equal / zero */

loc_00011B07: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    SET_LO8(edx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    MEM8(eax) = LO8(edx);

loc_00011B0F: ;
    eax = MEM32(ecx + 0x20);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00011B29; /* je: equal / zero */

loc_00011B17: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00011B1Du); RECOMP_ABI_CALL(0x00018030u, sub_00018030); /* call 0x00018030 */

loc_00011B1D: ;
    esi = MEM32(0x847024);
    PUSH32(esp, 0x00011B28u); RECOMP_ABI_CALL(0x00018330u, sub_00018330); /* call 0x00018330 */

loc_00011B28: ;
    POP32(esp, esi);

loc_00011B29: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00011B00
 * Original: 0x00011B00 - 0x00011B2A (42 bytes, 15 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00011B00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00011B00: ;
    eax = MEM32(ecx + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00011B0F; /* je: equal / zero */

loc_00011B07: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0 (8-bit) */
    SET_LO8(edx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    MEM8(eax) = LO8(edx);

loc_00011B0F: ;
    eax = MEM32(ecx + 0x20);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00011B29; /* je: equal / zero */

loc_00011B17: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00011B1Du); RECOMP_ABI_CALL(0x00018030u, sub_00018030); /* call 0x00018030 */

loc_00011B1D: ;
    esi = MEM32(0x847024);
    PUSH32(esp, 0x00011B28u); RECOMP_ABI_CALL(0x00018330u, sub_00018330); /* call 0x00018330 */

loc_00011B28: ;
    POP32(esp, esi);

loc_00011B29: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00011B30
 * Original: 0x00011B30 - 0x00011B60 (48 bytes, 22 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00011B30(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00011B30: ;
    eax = MEM32(esp + 0xC);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas < 0)) goto loc_00011B5D; /* js: sign (negative) */

loc_00011B37: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x14);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    edi = eax + 1;
    /* nop */

loc_00011B50: ;
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = ebx; PUSH32(esp, 0x00011B54u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00011B52u); } /* indirect call */
    }

loc_00011B54: ;
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + ebp;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00011B50; /* jne: not equal / not zero */

loc_00011B59: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_00011B5D: ;
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00011B60
 * Original: 0x00011B60 - 0x00011B80 (32 bytes, 14 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00011B60(void)
{

loc_00011B60: ;
    eax = MEM32(ecx + 0xC);
    xmm1 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    PUSH32(esp, eax);
    PUSH32(esp, 0x00011B75u); RECOMP_ABI_CALL(0x001F6340u, sub_001F6340); /* call 0x001F6340 */

loc_00011B75: ;
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00011B80
 * Original: 0x00011B80 - 0x00011BAA (42 bytes, 15 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00011B80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00011B80: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00011B88u); RECOMP_ABI_CALL(0x00011BB0u, sub_00011BB0); /* call 0x00011BB0 */

loc_00011B88: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00011BA4; /* je: equal / zero */

loc_00011B8F: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    MEM32(esp + 8) = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_00011BA4; /* je: equal / zero */

loc_00011B97: ;
    eax = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00011BA1u); RECOMP_ABI_CALL(0x002AF1C0u, sub_002AF1C0); /* call 0x002AF1C0 */

loc_00011BA1: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00011BA4: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00011BB0
 * Original: 0x00011BB0 - 0x00011C06 (86 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00011BB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00011BB0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi) = 0x5AC5B8;
    if (CMP_EQ(_fa, _fb)) goto loc_00011BD0; /* je: equal / zero */

loc_00011BC0: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00011BC6u); RECOMP_ABI_CALL(0x0046E4B6u, sub_0046E4B6); /* call 0x0046E4B6 */

loc_00011BC6: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x18) = 0;

loc_00011BD0: ;
    eax = MEM32(esi + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00011BE7; /* je: equal / zero */

loc_00011BD7: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00011BDDu); RECOMP_ABI_CALL(0x0046E4B6u, sub_0046E4B6); /* call 0x0046E4B6 */

loc_00011BDD: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x1C) = 0;

loc_00011BE7: ;
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi) = 0x60654C;
    if (CMP_EQ(_fa, _fb)) goto loc_00011C04; /* je: equal / zero */

loc_00011BF4: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00011BFAu); RECOMP_ABI_CALL(0x0046E4B6u, sub_0046E4B6); /* call 0x0046E4B6 */

loc_00011BFA: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0xC) = 0;

loc_00011C04: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00011C10
 * Original: 0x00011C10 - 0x00011D0A (250 bytes, 89 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00011C10(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00011C10: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 8);
    eax = MEM32(ebp + 4);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    MEM32(esi + 4) = eax;
    edi = MEM32(ebp);
    PUSH32(esp, 0x00011C27u); RECOMP_ABI_CALL(0x0029ECC0u, sub_0029ECC0); /* call 0x0029ECC0 */

loc_00011C27: ;
    ecx = MEM32(ebp + 0x24);
    MEM32(esi + 0x14) = ecx;
    eax = MEM32(ebp + 0x28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi + 8) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_00011C3C; /* jne: not equal / not zero */

loc_00011C37: ;
    MEM32(esi + 0x10) = eax;
    goto loc_00011C48;

loc_00011C3C: ;
    SET_LO8(ecx, MEM8(eax));
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    SET_LO8(edx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    MEM32(esi + 0x10) = edx;

loc_00011C48: ;
    eax = MEM32(esi + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00011C5F; /* je: equal / zero */

loc_00011C4F: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00011C55u); RECOMP_ABI_CALL(0x0046E4B6u, sub_0046E4B6); /* call 0x0046E4B6 */

loc_00011C55: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x18) = 0;

loc_00011C5F: ;
    eax = MEM32(ebp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00011C68u); RECOMP_ABI_CALL(0x0046E45Au, sub_0046E45A); /* call 0x0046E45A */

loc_00011C68: ;
    ecx = eax + eax + 2;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00011C72u); RECOMP_ABI_CALL(0x0046DAB2u, sub_0046DAB2); /* call 0x0046DAB2 */

loc_00011C72: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi + 0x18) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_00011C91; /* jne: not equal / not zero */

loc_00011C7C: ;
    PUSH32(esp, 0x587BE4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x587BE4);
    PUSH32(esp, 0x00011C8Cu); RECOMP_ABI_CALL(0x001F0620u, sub_001F0620); /* call 0x001F0620 */

loc_00011C8C: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00011C9E;

loc_00011C91: ;
    edx = MEM32(ebp + 8);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00011C9Bu); RECOMP_ABI_CALL(0x0046E49Au, sub_0046E49A); /* call 0x0046E49A */

loc_00011C9B: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00011C9E: ;
    eax = MEM32(esi + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00011CB5; /* je: equal / zero */

loc_00011CA5: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00011CABu); RECOMP_ABI_CALL(0x0046E4B6u, sub_0046E4B6); /* call 0x0046E4B6 */

loc_00011CAB: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x1C) = 0;

loc_00011CB5: ;
    eax = MEM32(ebp + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00011CBEu); RECOMP_ABI_CALL(0x0046E45Au, sub_0046E45A); /* call 0x0046E45A */

loc_00011CBE: ;
    ecx = eax + eax + 2;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00011CC8u); RECOMP_ABI_CALL(0x0046DAB2u, sub_0046DAB2); /* call 0x0046DAB2 */

loc_00011CC8: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi + 0x1C) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_00011CF1; /* jne: not equal / not zero */

loc_00011CD2: ;
    PUSH32(esp, 0x587BE4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x587BE4);
    PUSH32(esp, 0x00011CE2u); RECOMP_ABI_CALL(0x001F0620u, sub_001F0620); /* call 0x001F0620 */

loc_00011CE2: ;
    edx = MEM32(ebp + 0x20);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    MEM32(esi + 0x20) = edx;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

loc_00011CF1: ;
    ecx = MEM32(ebp + 0xC);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00011CFBu); RECOMP_ABI_CALL(0x0046E49Au, sub_0046E49A); /* call 0x0046E49A */

loc_00011CFB: ;
    edx = MEM32(ebp + 0x20);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    MEM32(esi + 0x20) = edx;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00011D10
 * Original: 0x00011D10 - 0x00011D4E (62 bytes, 22 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00011D10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00011D10: ;
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x20);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00011D4A; /* je: equal / zero */

loc_00011D18: ;
    edx = MEM32(ecx + 0x1C);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00011D4A; /* je: equal / zero */

loc_00011D1F: ;
    eax = MEM32(ecx + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00011D4A; /* je: equal / zero */

loc_00011D26: ;
    xmm1 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) eax = edx; /* cmove */
    PUSH32(esp, eax);
    eax = MEM32(ecx + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, 0x5AC660);
    PUSH32(esp, 0x00011D47u); RECOMP_ABI_CALL(0x001F6340u, sub_001F6340); /* call 0x001F6340 */

loc_00011D47: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00011D4A: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00011D50
 * Original: 0x00011D50 - 0x00011D60 (16 bytes, 7 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00011D50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00011D50: ;
    eax = MEM32(ecx + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00011D5F; /* je: equal / zero */

loc_00011D57: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0 (8-bit) */
    SET_LO8(ecx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    MEM8(eax) = LO8(ecx);

loc_00011D5F: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00011D60
 * Original: 0x00011D60 - 0x00011DBB (91 bytes, 36 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00011D60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00011D60: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    eax = MEM32(ebx + 4);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    MEM32(esi + 4) = eax;
    edi = MEM32(ebx);
    PUSH32(esp, 0x00011D76u); RECOMP_ABI_CALL(0x0029ECC0u, sub_0029ECC0); /* call 0x0029ECC0 */

loc_00011D76: ;
    ecx = MEM32(ebx + 0x24);
    MEM32(esi + 0x14) = ecx;
    eax = MEM32(ebx + 0x28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi + 8) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_00011D8B; /* jne: not equal / not zero */

loc_00011D86: ;
    MEM32(esi + 0x10) = eax;
    goto loc_00011D97;

loc_00011D8B: ;
    SET_LO8(ecx, MEM8(eax));
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    SET_LO8(edx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    MEM32(esi + 0x10) = edx;

loc_00011D97: ;
    eax = MEM32(ebx + 0x10);
    MEM32(esi + 0x18) = eax;
    ecx = MEM32(ebx + 0x14);
    MEM32(esi + 0x1C) = ecx;
    edx = MEM32(ebx + 0x18);
    MEM32(esi + 0x20) = edx;
    eax = MEM32(ebx + 0x1C);
    MEM32(esi + 0x24) = eax;
    ecx = MEM32(ebx + 0x20);
    POP32(esp, edi);
    MEM32(esi + 0x28) = ecx;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00011DC0
 * Original: 0x00011DC0 - 0x00011E35 (117 bytes, 34 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00011DC0(void)
{
    int _flags = 0; /* fallback flag var */
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00011DC0: ;
    PUSH32(esp, ecx);
    fp_push(MEMF(esp + 8)); /* fld float */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = MEMF(esp + 8); /* comiss */
    fp_top() = fabs(fp_top()); /* fabs */
    xmm0 = XMM_SCALAR(MEMF(0x648D34)); /* movss */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    if ((_fca > _fcb)) goto loc_00011DE4; /* ja: above (unsigned >) (xmm0.f[0] vs MEMF(esp + 8)) */

loc_00011DDC: ;
    xmm0 = XMM_SCALAR(MEMF(0x648D14)); /* movss */

loc_00011DE4: ;
    xmm1 = XMM_SCALAR(MEMF(ecx + 0x24)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(ecx + 0x20); /* subss */
    xmm1.f[0] = xmm1.f[0] * MEMF(esp); /* mulss */
    eax = MEM32(ecx + 0x28);
    xmm1.f[0] = xmm1.f[0] + MEMF(ecx + 0x20); /* addss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + MEMF(eax); /* addss */
    MEMF(eax) = xmm1.f[0]; /* movss */
    eax = MEM32(ecx + 0x28);
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x18)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(eax); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00011E1F; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(eax)) */

loc_00011E14: ;
    edx = eax;
    eax = MEM32(ecx + 0x18);
    MEM32(edx) = eax;
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

loc_00011E1F: ;
    eax = MEM32(ecx + 0x28);
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(ecx + 0x1C); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00011E31; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(ecx + 0x1C)) */

loc_00011E2C: ;
    ecx = MEM32(ecx + 0x1C);
    MEM32(eax) = ecx;

loc_00011E31: ;
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00011E07
 * Original: 0x00011E07 - 0x00011E35 (46 bytes, 17 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00011E07(void)
{
    int _flags = 0; /* fallback flag var */
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_00011E07: ;
    eax = MEM32(ecx + 0x28);
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x18)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(eax); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00011E1F; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(eax)) */

loc_00011E14: ;
    edx = eax;
    eax = MEM32(ecx + 0x18);
    MEM32(edx) = eax;
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

loc_00011E1F: ;
    eax = MEM32(ecx + 0x28);
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(ecx + 0x1C); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00011E31; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(ecx + 0x1C)) */

loc_00011E2C: ;
    ecx = MEM32(ecx + 0x1C);
    MEM32(eax) = ecx;

loc_00011E31: ;
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00011E40
 * Original: 0x00011E40 - 0x00011E6F (47 bytes, 14 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00011E40(void)
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

loc_00011E40: ;
    eax = MEM32(ecx + 0x28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00011E6C; /* je: equal / zero */

loc_00011E47: ;
    fp_push(MEMF(eax)); /* fld float */
    eax = MEM32(ecx + 0xC);
    xmm1 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEMD(esp) = fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, eax);
    PUSH32(esp, 0x5AC654);
    PUSH32(esp, 0x00011E69u); RECOMP_ABI_CALL(0x001F6340u, sub_001F6340); /* call 0x001F6340 */

loc_00011E69: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00011E6C: ;
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00011E70
 * Original: 0x00011E70 - 0x00011ED8 (104 bytes, 40 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00011E70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00011E70: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    eax = MEM32(ebx + 4);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    MEM32(esi + 4) = eax;
    edi = MEM32(ebx);
    PUSH32(esp, 0x00011E86u); RECOMP_ABI_CALL(0x0029ECC0u, sub_0029ECC0); /* call 0x0029ECC0 */

loc_00011E86: ;
    ecx = MEM32(ebx + 0x24);
    MEM32(esi + 0x14) = ecx;
    eax = MEM32(ebx + 0x28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi + 8) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_00011E9B; /* jne: not equal / not zero */

loc_00011E96: ;
    MEM32(esi + 0x10) = eax;
    goto loc_00011EA7;

loc_00011E9B: ;
    SET_LO8(ecx, MEM8(eax));
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    SET_LO8(edx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    MEM32(esi + 0x10) = edx;

loc_00011EA7: ;
    eax = MEM32(ebx + 0x10);
    MEM32(esi + 0x18) = eax;
    ecx = MEM32(ebx + 0x14);
    MEM32(esi + 0x1C) = ecx;
    edx = MEM32(ebx + 0x18);
    MEM32(esi + 0x20) = edx;
    eax = MEM32(ebx + 0x1C);
    MEM32(esi + 0x24) = eax;
    ebx = MEM32(ebx + 0x20);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    MEM32(esi + 0x2C) = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_00011ED2; /* je: equal / zero */

loc_00011EC9: ;
    xmm0.f[0] = (float)(int32_t)MEM32(ebx); /* cvtsi2ss */
    MEMF(esi + 0x28) = xmm0.f[0]; /* movss */

loc_00011ED2: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00011EE0
 * Original: 0x00011EE0 - 0x00011F5E (126 bytes, 35 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00011EE0(void)
{
    int _flags = 0; /* fallback flag var */
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00011EE0: ;
    PUSH32(esp, ecx);
    fp_push(MEMF(esp + 8)); /* fld float */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = MEMF(esp + 8); /* comiss */
    fp_top() = fabs(fp_top()); /* fabs */
    xmm1 = XMM_SCALAR(MEMF(0x648D34)); /* movss */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    if ((_fca > _fcb)) goto loc_00011F04; /* ja: above (unsigned >) (xmm0.f[0] vs MEMF(esp + 8)) */

loc_00011EFC: ;
    xmm1 = XMM_SCALAR(MEMF(0x648D14)); /* movss */

loc_00011F04: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x24)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(ecx + 0x20); /* subss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp); /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(ecx + 0x20); /* addss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(ecx + 0x28); /* addss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 0x18)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    MEMF(ecx + 0x28) = xmm0.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00011F44; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_00011F30: ;
    eax = MEM32(ecx + 0x18);
    MEM32(ecx + 0x28) = eax;
    eax = (uint32_t)recomp_cvt_si32((double)MEMF(ecx + 0x28), g_mxcsr, 1); /* cvttss2si */
    ecx = MEM32(ecx + 0x2C);
    MEM32(ecx) = eax;
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

loc_00011F44: ;
    _fca = xmm0.f[0]; _fcb = MEMF(ecx + 0x1C); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00011F50; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(ecx + 0x1C)) */

loc_00011F4A: ;
    edx = MEM32(ecx + 0x1C);
    MEM32(ecx + 0x28) = edx;

loc_00011F50: ;
    eax = (uint32_t)recomp_cvt_si32((double)MEMF(ecx + 0x28), g_mxcsr, 1); /* cvttss2si */
    ecx = MEM32(ecx + 0x2C);
    MEM32(ecx) = eax;
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00011F60
 * Original: 0x00011F60 - 0x00011F8A (42 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00011F60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00011F60: ;
    eax = MEM32(ecx + 0x2C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00011F87; /* je: equal / zero */

loc_00011F67: ;
    eax = MEM32(eax);
    ecx = MEM32(ecx + 0xC);
    xmm1 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x5AC648);
    PUSH32(esp, 0x00011F84u); RECOMP_ABI_CALL(0x001F6340u, sub_001F6340); /* call 0x001F6340 */

loc_00011F84: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00011F87: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00011F90
 * Original: 0x00011F90 - 0x00011FB5 (37 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00011F90(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00011F90: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = edx | 0xFFFFFFFFu;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(eax + 4) = edx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = ecx;
    MEM32(eax + 0x10) = edx;
    MEM32(eax + 0x14) = edx;
    MEM32(eax) = 0x5AC540;
    MEM32(eax + 0x18) = ecx;
    MEM32(eax + 0x1C) = ecx;
    MEM8(eax + 0x20) = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_00011FC0
 * Original: 0x00011FC0 - 0x00011FEA (42 bytes, 15 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00011FC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00011FC0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00011FC8u); RECOMP_ABI_CALL(0x00011FF0u, sub_00011FF0); /* call 0x00011FF0 */

loc_00011FC8: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00011FE4; /* je: equal / zero */

loc_00011FCF: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    MEM32(esp + 8) = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_00011FE4; /* je: equal / zero */

loc_00011FD7: ;
    eax = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00011FE1u); RECOMP_ABI_CALL(0x002AF1C0u, sub_002AF1C0); /* call 0x002AF1C0 */

loc_00011FE1: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00011FE4: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00011FF0
 * Original: 0x00011FF0 - 0x00012046 (86 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00011FF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00011FF0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi) = 0x5AC540;
    if (CMP_EQ(_fa, _fb)) goto loc_00012010; /* je: equal / zero */

loc_00012000: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00012006u); RECOMP_ABI_CALL(0x0046E4B6u, sub_0046E4B6); /* call 0x0046E4B6 */

loc_00012006: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x18) = 0;

loc_00012010: ;
    eax = MEM32(esi + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00012027; /* je: equal / zero */

loc_00012017: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0001201Du); RECOMP_ABI_CALL(0x0046E4B6u, sub_0046E4B6); /* call 0x0046E4B6 */

loc_0001201D: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x1C) = 0;

loc_00012027: ;
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi) = 0x60654C;
    if (CMP_EQ(_fa, _fb)) goto loc_00012044; /* je: equal / zero */

loc_00012034: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0001203Au); RECOMP_ABI_CALL(0x0046E4B6u, sub_0046E4B6); /* call 0x0046E4B6 */

loc_0001203A: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0xC) = 0;

loc_00012044: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00012050
 * Original: 0x00012050 - 0x00012097 (71 bytes, 19 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00012050(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00012050: ;
    SET_LO8(eax, MEM8(ecx + 0x20));
    MEM8(0x846FE8) = LO8(eax);
    SET_LO8(edx, MEM8(ecx + 0x20));
    MEM8(0x846FE9) = LO8(edx);
    SET_LO8(eax, MEM8(ecx + 0x20));
    MEM8(0x846FEA) = LO8(eax);
    SET_LO8(edx, MEM8(ecx + 0x20));
    MEM8(0x846FEB) = LO8(edx);
    SET_LO8(eax, MEM8(ecx + 0x20));
    MEM8(0x846FEC) = LO8(eax);
    SET_LO8(edx, MEM8(ecx + 0x20));
    MEM8(0x846FED) = LO8(edx);
    SET_LO8(eax, MEM8(ecx + 0x20));
    MEM8(0x846FEE) = LO8(eax);
    SET_LO8(eax, MEM8(ecx + 0x20));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    SET_LO8(edx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    MEM8(ecx + 0x20) = LO8(edx);
    esp += 4; return; /* ret */

}

/**
 * sub_0001208E
 * Original: 0x0001208E - 0x00012097 (9 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001208E(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0001208E: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    SET_LO8(edx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    MEM8(ecx + 0x20) = LO8(edx);
    esp += 4; return; /* ret */

}

/**
 * sub_000120A0
 * Original: 0x000120A0 - 0x000120C5 (37 bytes, 12 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000120A0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000120A0: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = edx | 0xFFFFFFFFu;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(eax + 4) = edx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = ecx;
    MEM32(eax + 0x10) = edx;
    MEM32(eax + 0x14) = edx;
    MEM32(eax) = 0x5AC528;
    MEM32(eax + 0x18) = ecx;
    MEM32(eax + 0x1C) = ecx;
    MEM8(eax + 0x20) = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_000120D0
 * Original: 0x000120D0 - 0x000120FA (42 bytes, 15 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000120D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000120D0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x000120D8u); RECOMP_ABI_CALL(0x00012100u, sub_00012100); /* call 0x00012100 */

loc_000120D8: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000120F4; /* je: equal / zero */

loc_000120DF: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    MEM32(esp + 8) = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_000120F4; /* je: equal / zero */

loc_000120E7: ;
    eax = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000120F1u); RECOMP_ABI_CALL(0x002AF1C0u, sub_002AF1C0); /* call 0x002AF1C0 */

loc_000120F1: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000120F4: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00012100
 * Original: 0x00012100 - 0x00012156 (86 bytes, 27 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00012100(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00012100: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi) = 0x5AC528;
    if (CMP_EQ(_fa, _fb)) goto loc_00012120; /* je: equal / zero */

loc_00012110: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00012116u); RECOMP_ABI_CALL(0x0046E4B6u, sub_0046E4B6); /* call 0x0046E4B6 */

loc_00012116: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x18) = 0;

loc_00012120: ;
    eax = MEM32(esi + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00012137; /* je: equal / zero */

loc_00012127: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0001212Du); RECOMP_ABI_CALL(0x0046E4B6u, sub_0046E4B6); /* call 0x0046E4B6 */

loc_0001212D: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x1C) = 0;

loc_00012137: ;
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi) = 0x60654C;
    if (CMP_EQ(_fa, _fb)) goto loc_00012154; /* je: equal / zero */

loc_00012144: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0001214Au); RECOMP_ABI_CALL(0x0046E4B6u, sub_0046E4B6); /* call 0x0046E4B6 */

loc_0001214A: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0xC) = 0;

loc_00012154: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00012160
 * Original: 0x00012160 - 0x00012201 (161 bytes, 40 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00012160(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00012160: ;
    SET_LO8(eax, MEM8(ecx + 0x20));
    MEM8(0x846FEF) = LO8(eax);
    SET_LO8(edx, MEM8(ecx + 0x20));
    MEM8(0x846FF0) = LO8(edx);
    SET_LO8(eax, MEM8(ecx + 0x20));
    MEM8(0x846FF1) = LO8(eax);
    SET_LO8(edx, MEM8(ecx + 0x20));
    MEM8(0x846FF2) = LO8(edx);
    SET_LO8(eax, MEM8(ecx + 0x20));
    MEM8(0x846FF3) = LO8(eax);
    SET_LO8(edx, MEM8(ecx + 0x20));
    MEM8(0x846FF4) = LO8(edx);
    SET_LO8(eax, MEM8(ecx + 0x20));
    MEM8(0x846FF5) = LO8(eax);
    SET_LO8(edx, MEM8(ecx + 0x20));
    MEM8(0x846FF6) = LO8(edx);
    SET_LO8(eax, MEM8(ecx + 0x20));
    MEM8(0x846FF7) = LO8(eax);
    SET_LO8(edx, MEM8(ecx + 0x20));
    MEM8(0x846FF8) = LO8(edx);
    SET_LO8(eax, MEM8(ecx + 0x20));
    MEM8(0x846FFC) = LO8(eax);
    SET_LO8(edx, MEM8(ecx + 0x20));
    MEM8(0x846FFD) = LO8(edx);
    SET_LO8(eax, MEM8(ecx + 0x20));
    MEM8(0x846FFE) = LO8(eax);
    SET_LO8(eax, MEM8(ecx + 0x20));
    MEM8(0x846FFF) = LO8(eax);
    SET_LO8(edx, MEM8(ecx + 0x20));
    MEM8(0x846FF9) = LO8(edx);
    MEM8(0x847031) = LO8(eax);
    SET_LO8(eax, MEM8(ecx + 0x20));
    MEM8(0x846FFA) = LO8(eax);
    SET_LO8(edx, MEM8(ecx + 0x20));
    MEM8(0x846FFB) = LO8(edx);
    SET_LO8(eax, MEM8(ecx + 0x20));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    MEM8(ecx + 0x20) = LO8(eax);
    esp += 4; return; /* ret */

}

/**
 * sub_00012200
 * Original: 0x00012200 - 0x00012201 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00012200(void)
{

loc_00012200: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00012210
 * Original: 0x00012210 - 0x0001222B (27 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00012210(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00012210: ;
    ecx = ecx | 0xFFFFFFFFu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = edx;
    MEM32(eax + 0xC) = edx;
    MEM32(eax + 0x10) = ecx;
    MEM32(eax + 0x14) = ecx;
    MEM32(eax) = 0x5AC630;
    esp += 4; return; /* ret */

}

/**
 * sub_00012230
 * Original: 0x00012230 - 0x0001226E (62 bytes, 20 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00012230(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00012230: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi) = 0x60654C;
    if (CMP_EQ(_fa, _fb)) goto loc_00012250; /* je: equal / zero */

loc_00012240: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00012246u); RECOMP_ABI_CALL(0x0046E4B6u, sub_0046E4B6); /* call 0x0046E4B6 */

loc_00012246: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0xC) = 0;

loc_00012250: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00012268; /* je: equal / zero */

loc_00012257: ;
    eax = esp + 8;
    PUSH32(esp, eax);
    MEM32(esp + 0xC) = esi;
    PUSH32(esp, 0x00012265u); RECOMP_ABI_CALL(0x002AF1C0u, sub_002AF1C0); /* call 0x002AF1C0 */

loc_00012265: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00012268: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00012270
 * Original: 0x00012270 - 0x000122B8 (72 bytes, 23 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00012270(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00012270: ;
    eax = MEM32(0x8470DC);
    eax = MEM32(eax + 0x3E0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000122B7; /* je: equal / zero */

loc_0001227F: ;
    ecx = MEM32(0x657C4C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000122B0; /* je: equal / zero */

loc_00012289: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0xB);
    _fb = (uint32_t)(0x78) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x78;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    eax = MEM32(0x847024);
    edx = MEM32(eax + 0x40);
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, 8);
    PUSH32(esp, edx);
    edx = edx | 0xFFFFFFFFu;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, 0x000122B0u); RECOMP_ABI_CALL(0x00022D90u, sub_00022D90); /* call 0x00022D90 */

loc_000122B0: ;
    MEM8(0x847034) = 1;

loc_000122B7: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000122C0
 * Original: 0x000122C0 - 0x000122DB (27 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000122C0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000122C0: ;
    ecx = ecx | 0xFFFFFFFFu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = edx;
    MEM32(eax + 0xC) = edx;
    MEM32(eax + 0x10) = ecx;
    MEM32(eax + 0x14) = ecx;
    MEM32(eax) = 0x5AC618;
    esp += 4; return; /* ret */

}

/**
 * sub_000122E0
 * Original: 0x000122E0 - 0x00012309 (41 bytes, 12 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000122E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000122E0: ;
    SET_LO8(eax, MEM8(0x847034));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00012308; /* je: equal / zero */

loc_000122E9: ;
    eax = MEM32(0x847024);
    ecx = MEM32(eax + 0x40);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, ecx);
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx = 0xB;
    PUSH32(esp, 0x00012301u); RECOMP_ABI_CALL(0x00025660u, sub_00025660); /* call 0x00025660 */

loc_00012301: ;
    MEM8(0x847034) = 0;

loc_00012308: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00012310
 * Original: 0x00012310 - 0x0001232B (27 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00012310(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00012310: ;
    ecx = ecx | 0xFFFFFFFFu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = edx;
    MEM32(eax + 0xC) = edx;
    MEM32(eax + 0x10) = ecx;
    MEM32(eax + 0x14) = ecx;
    MEM32(eax) = 0x5AC600;
    esp += 4; return; /* ret */

}

/**
 * sub_00012330
 * Original: 0x00012330 - 0x00012368 (56 bytes, 14 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00012330(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00012330: ;
    ecx = MEM32(ecx + 0x14);
    eax = ecx + -4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00012367; /* ja: above (unsigned >) */

loc_0001233B: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x12368); /* switch: 4 entries, 4 targets */
    if (_jt == 0x00012342u) goto loc_00012342;
    if (_jt == 0x00012347u) goto loc_00012347;
    if (_jt == 0x0001234Cu) goto loc_0001234C;
    if (_jt == 0x00012351u) goto loc_00012351;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00012342: ;
    g_seh_ebp = ebp; sub_00015FC0(); return; /* tail jmp 0x00015FC0 */

loc_00012347: ;
    g_seh_ebp = ebp; sub_00015F80(); return; /* tail jmp 0x00015F80 */

loc_0001234C: ;
    g_seh_ebp = ebp; sub_000160B0(); return; /* tail jmp 0x000160B0 */

loc_00012351: ;
    PUSH32(esp, 0x00012356u); RECOMP_ABI_CALL(0x00015FC0u, sub_00015FC0); /* call 0x00015FC0 */

loc_00012356: ;
    SET_LO8(eax, 1);
    MEM8(0x846FE8) = LO8(eax);
    MEM8(0x846FE9) = LO8(eax);
    MEM8(0x846FEA) = LO8(eax);

loc_00012367: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00012380
 * Original: 0x00012380 - 0x000123A4 (36 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00012380(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00012380: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = edx | 0xFFFFFFFFu;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(eax + 4) = edx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = ecx;
    MEM32(eax + 0x10) = edx;
    MEM32(eax + 0x14) = edx;
    MEM32(eax + 0x18) = ecx;
    MEM32(eax + 0x1C) = ecx;
    MEM32(eax + 0x20) = ecx;
    MEM32(eax) = 0x5AC5D0;
    esp += 4; return; /* ret */

}

/**
 * sub_000123B0
 * Original: 0x000123B0 - 0x000123DC (44 bytes, 14 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000123B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000123B0: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x5AC5D0;
    PUSH32(esp, 0x000123BEu); RECOMP_ABI_CALL(0x00011BB0u, sub_00011BB0); /* call 0x00011BB0 */

loc_000123BE: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000123D6; /* je: equal / zero */

loc_000123C5: ;
    eax = esp + 8;
    PUSH32(esp, eax);
    MEM32(esp + 0xC) = esi;
    PUSH32(esp, 0x000123D3u); RECOMP_ABI_CALL(0x002AF1C0u, sub_002AF1C0); /* call 0x002AF1C0 */

loc_000123D3: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000123D6: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000123E0
 * Original: 0x000123E0 - 0x000123FB (27 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000123E0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000123E0: ;
    ecx = ecx | 0xFFFFFFFFu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = edx;
    MEM32(eax + 0xC) = edx;
    MEM32(eax + 0x10) = ecx;
    MEM32(eax + 0x14) = ecx;
    MEM32(eax) = 0x5AC5A0;
    esp += 4; return; /* ret */

}

/**
 * sub_00012400
 * Original: 0x00012400 - 0x0001240C (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00012400(void)
{

loc_00012400: ;
    eax = MEM32(0x847024);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0001240Bu); RECOMP_ABI_CALL(0x00018430u, sub_00018430); /* call 0x00018430 */

loc_0001240B: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00012410
 * Original: 0x00012410 - 0x00012435 (37 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00012410(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00012410: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = edx | 0xFFFFFFFFu;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(eax + 4) = edx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = ecx;
    MEM32(eax + 0x10) = edx;
    MEM32(eax + 0x14) = edx;
    MEM32(eax) = 0x5AC570;
    MEM32(eax + 0x18) = ecx;
    MEM32(eax + 0x1C) = ecx;
    MEM8(eax + 0x20) = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_00012424
 * Original: 0x00012424 - 0x00012435 (17 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00012424(void)
{

loc_00012424: ;
    MEM32(eax) = 0x5AC570;
    MEM32(eax + 0x18) = ecx;
    MEM32(eax + 0x1C) = ecx;
    MEM8(eax + 0x20) = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_00012440
 * Original: 0x00012440 - 0x0001246A (42 bytes, 15 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00012440(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00012440: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00012448u); RECOMP_ABI_CALL(0x00012470u, sub_00012470); /* call 0x00012470 */

loc_00012448: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00012464; /* je: equal / zero */

loc_0001244F: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    MEM32(esp + 8) = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_00012464; /* je: equal / zero */

loc_00012457: ;
    eax = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00012461u); RECOMP_ABI_CALL(0x002AF1C0u, sub_002AF1C0); /* call 0x002AF1C0 */

loc_00012461: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00012464: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00012470
 * Original: 0x00012470 - 0x000124C6 (86 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00012470(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00012470: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi) = 0x5AC570;
    if (CMP_EQ(_fa, _fb)) goto loc_00012490; /* je: equal / zero */

loc_00012480: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00012486u); RECOMP_ABI_CALL(0x0046E4B6u, sub_0046E4B6); /* call 0x0046E4B6 */

loc_00012486: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x18) = 0;

loc_00012490: ;
    eax = MEM32(esi + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000124A7; /* je: equal / zero */

loc_00012497: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0001249Du); RECOMP_ABI_CALL(0x0046E4B6u, sub_0046E4B6); /* call 0x0046E4B6 */

loc_0001249D: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x1C) = 0;

loc_000124A7: ;
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi) = 0x60654C;
    if (CMP_EQ(_fa, _fb)) goto loc_000124C4; /* je: equal / zero */

loc_000124B4: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000124BAu); RECOMP_ABI_CALL(0x0046E4B6u, sub_0046E4B6); /* call 0x0046E4B6 */

loc_000124BA: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0xC) = 0;

loc_000124C4: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000124D0
 * Original: 0x000124D0 - 0x000125BE (238 bytes, 85 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000124D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000124D0: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 8);
    eax = MEM32(ebp + 4);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    MEM32(esi + 4) = eax;
    edi = MEM32(ebp);
    PUSH32(esp, 0x000124E7u); RECOMP_ABI_CALL(0x0029ECC0u, sub_0029ECC0); /* call 0x0029ECC0 */

loc_000124E7: ;
    ecx = MEM32(ebp + 0x24);
    MEM32(esi + 0x14) = ecx;
    eax = MEM32(ebp + 0x28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi + 8) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_000124FC; /* jne: not equal / not zero */

loc_000124F7: ;
    MEM32(esi + 0x10) = eax;
    goto loc_00012508;

loc_000124FC: ;
    SET_LO8(ecx, MEM8(eax));
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    SET_LO8(edx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    MEM32(esi + 0x10) = edx;

loc_00012508: ;
    eax = MEM32(esi + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0001251F; /* je: equal / zero */

loc_0001250F: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00012515u); RECOMP_ABI_CALL(0x0046E4B6u, sub_0046E4B6); /* call 0x0046E4B6 */

loc_00012515: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x18) = 0;

loc_0001251F: ;
    eax = MEM32(ebp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00012528u); RECOMP_ABI_CALL(0x0046E45Au, sub_0046E45A); /* call 0x0046E45A */

loc_00012528: ;
    ecx = eax + eax + 2;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00012532u); RECOMP_ABI_CALL(0x0046DAB2u, sub_0046DAB2); /* call 0x0046DAB2 */

loc_00012532: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi + 0x18) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_00012551; /* jne: not equal / not zero */

loc_0001253C: ;
    PUSH32(esp, 0x587BE4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x587BE4);
    PUSH32(esp, 0x0001254Cu); RECOMP_ABI_CALL(0x001F0620u, sub_001F0620); /* call 0x001F0620 */

loc_0001254C: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0001255E;

loc_00012551: ;
    edx = MEM32(ebp + 8);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0001255Bu); RECOMP_ABI_CALL(0x0046E49Au, sub_0046E49A); /* call 0x0046E49A */

loc_0001255B: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0001255E: ;
    eax = MEM32(esi + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00012575; /* je: equal / zero */

loc_00012565: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0001256Bu); RECOMP_ABI_CALL(0x0046E4B6u, sub_0046E4B6); /* call 0x0046E4B6 */

loc_0001256B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x1C) = 0;

loc_00012575: ;
    eax = MEM32(ebp + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0001257Eu); RECOMP_ABI_CALL(0x0046E45Au, sub_0046E45A); /* call 0x0046E45A */

loc_0001257E: ;
    ecx = eax + eax + 2;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00012588u); RECOMP_ABI_CALL(0x0046DAB2u, sub_0046DAB2); /* call 0x0046DAB2 */

loc_00012588: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi + 0x1C) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_000125AB; /* jne: not equal / not zero */

loc_00012592: ;
    PUSH32(esp, 0x587BE4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x587BE4);
    PUSH32(esp, 0x000125A2u); RECOMP_ABI_CALL(0x001F0620u, sub_001F0620); /* call 0x001F0620 */

loc_000125A2: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

loc_000125AB: ;
    edx = MEM32(ebp + 0xC);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000125B5u); RECOMP_ABI_CALL(0x0046E49Au, sub_0046E49A); /* call 0x0046E49A */

loc_000125B5: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000125C0
 * Original: 0x000125C0 - 0x000125F9 (57 bytes, 20 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000125C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000125C0: ;
    edx = MEM32(ecx + 0x1C);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000125F6; /* je: equal / zero */

loc_000125C7: ;
    eax = MEM32(ecx + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000125F6; /* je: equal / zero */

loc_000125CE: ;
    xmm1 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(ecx + 0x20));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    POP32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) eax = edx; /* cmove */
    PUSH32(esp, eax);
    eax = MEM32(ecx + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, 0x5AC660);
    PUSH32(esp, 0x000125F3u); RECOMP_ABI_CALL(0x001F6340u, sub_001F6340); /* call 0x001F6340 */

loc_000125F3: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000125F6: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00012600
 * Original: 0x00012600 - 0x00012637 (55 bytes, 16 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00012600(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00012600: ;
    SET_LO8(eax, MEM8(ecx + 0x20));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    edx = MEM32(0x802024);
    if (CMP_EQ(_fa, _fb)) goto loc_00012622; /* je: equal / zero */

loc_0001260D: ;
    edx = edx | 0x80000000u;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    MEM32(0x802024) = edx;
    MEM8(ecx + 0x20) = LO8(eax);
    esp += 4; return; /* ret */

loc_00012622: ;
    edx = edx & 0x7FFFFFFF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    MEM32(0x802024) = edx;
    MEM8(ecx + 0x20) = LO8(eax);
    esp += 4; return; /* ret */

}

/**
 * sub_00012640
 * Original: 0x00012640 - 0x00012676 (54 bytes, 17 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00012640(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_00012640: ;
    eax = MEM32(ecx + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esp + 4) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00012671; /* jne: not equal / not zero */

loc_00012649: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x14)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(esp + 8); /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((0) ? 0x80u : 0u) | (((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00012671; /* jp: parity */

loc_00012659: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x18)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(esp + 0xC); /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((0) ? 0x80u : 0u) | (((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00012671; /* jp: parity */

loc_00012669: ;
    eax = 1;
    esp += 16; return; /* ret 12 */

loc_00012671: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00012680
 * Original: 0x00012680 - 0x000126A7 (39 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00012680(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00012680: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x5AC670;
    if (TEST_Z(_fa, _fb)) goto loc_000126A1; /* je: equal / zero */

loc_00012690: ;
    eax = esp + 8;
    PUSH32(esp, eax);
    MEM32(esp + 0xC) = esi;
    PUSH32(esp, 0x0001269Eu); RECOMP_ABI_CALL(0x002AF1C0u, sub_002AF1C0); /* call 0x002AF1C0 */

loc_0001269E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000126A1: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000126B0
 * Original: 0x000126B0 - 0x000127F4 (324 bytes, 104 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000126B0(void)
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

loc_000126B0: ;
    PUSH32(esp, ecx);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, ebp);
    ebp = ecx;
    _fca = xmm0.f[0]; _fcb = MEMF(ebp + 0x1C); /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000127DD; /* jb: below (unsigned <) (xmm0.f[0] vs MEMF(ebp + 0x1C)) */

loc_000126C1: ;
    xmm5 = XMM_SCALAR(MEMF(ebp + 0x18)); /* movss */
    xmm6 = XMM_SCALAR(MEMF(ebp + 0x14)); /* movss */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000126D2u); RECOMP_ABI_CALL(0x003E1D70u, sub_003E1D70); /* call 0x003E1D70 */

loc_000126D2: ;
    xmm5.f[0] = xmm5.f[0] - xmm6.f[0]; /* subss */
    xmm0.f[0] = xmm0.f[0] * xmm5.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm6.f[0]; /* addss */
    MEMF(ebp + 0x1C) = xmm0.f[0]; /* movss */
    SET_LO8(eax, MEM8(0x846FEF));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    if (CMP_EQ(_fa, _fb)) goto loc_0001270F; /* je: equal / zero */

loc_000126F2: ;
    fp_push(MEMF(esp + 0xC)); /* fld float */
    esi = MEM32(0x847024);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEMD(esp) = fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x5AC688);
    PUSH32(esp, 0x0001270Cu); RECOMP_ABI_CALL(0x00018B30u, sub_00018B30); /* call 0x00018B30 */

loc_0001270C: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0001270F: ;
    eax = MEM32(0x84A19C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0001271D; /* jne: not equal / not zero */

loc_00012718: ;
    PUSH32(esp, 0x0001271Du); RECOMP_ABI_CALL(0x002AED70u, sub_002AED70); /* call 0x002AED70 */

loc_0001271D: ;
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
    edi = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_00012765; /* je: equal / zero */

loc_00012743: ;
    _fa = (uint32_t)(MEM32(esi + 0x80)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x44) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x80), 0x44 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00012765; /* jb: below (unsigned <) */

loc_0001274C: ;
    ecx = 0x10;
    PUSH32(esp, 0x00012756u); RECOMP_ABI_CALL(0x003E62A0u, sub_003E62A0); /* call 0x003E62A0 */

loc_00012756: ;
    PUSH32(esp, 0x44);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0001275Eu); RECOMP_ABI_CALL(0x003E6BD0u, sub_003E6BD0); /* call 0x003E6BD0 */

loc_0001275E: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00012786; /* jne: not equal / not zero */

loc_00012765: ;
    esi = MEM32(0x84A184);
    ecx = 0x10;
    edi = esi;
    PUSH32(esp, 0x00012777u); RECOMP_ABI_CALL(0x003E62A0u, sub_003E62A0); /* call 0x003E62A0 */

loc_00012777: ;
    PUSH32(esp, 0x44);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0001277Fu); RECOMP_ABI_CALL(0x003E6BD0u, sub_003E6BD0); /* call 0x003E6BD0 */

loc_0001277F: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00012791; /* je: equal / zero */

loc_00012786: ;
    PUSH32(esp, 0x0001278Bu); RECOMP_ABI_CALL(0x000209B0u, sub_000209B0); /* call 0x000209B0 */

loc_0001278B: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000127AC; /* jne: not equal / not zero */

loc_00012791: ;
    PUSH32(esp, 0x587BE4);
    PUSH32(esp, 0);
    PUSH32(esp, 0x587BE4);
    PUSH32(esp, 0x000127A2u); RECOMP_ABI_CALL(0x001F0620u, sub_001F0620); /* call 0x001F0620 */

loc_000127A2: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebp);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_000127AC: ;
    eax = MEM32(ebp + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000127BA; /* je: equal / zero */

loc_000127B3: ;
    eax = eax ^ 0xFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_000127BC;

loc_000127BA: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000127BC: ;
    ecx = MEM32(ebp + 0x20);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x64);
    ebx = ebx | 0xFFFFFFFFu;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, 0x000127CAu); RECOMP_ABI_CALL(0x00020D10u, sub_00020D10); /* call 0x00020D10 */

loc_000127CA: ;
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0x28);
    PUSH32(esp, 0x000127D5u); RECOMP_ABI_CALL(0x00034080u, sub_00034080); /* call 0x00034080 */

loc_000127D5: ;
    POP32(esp, ebx);
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebp);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_000127DD: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + 0x1C)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(0x7FA218); /* subss */
    MEMF(ebp + 0x1C) = xmm0.f[0]; /* movss */
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, ebp);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00012800
 * Original: 0x00012800 - 0x000128B4 (180 bytes, 53 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00012800(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00012800: ;
    eax = MEM32(0x84700C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000128B3; /* jne: not equal / not zero */

loc_0001280D: ;
    eax = MEM32(0x84A19C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0001281B; /* jne: not equal / not zero */

loc_00012816: ;
    PUSH32(esp, 0x0001281Bu); RECOMP_ABI_CALL(0x002AED70u, sub_002AED70); /* call 0x002AED70 */

loc_0001281B: ;
    edx = MEM32(0x7FA494);
    ecx = MEM32(0x7FA4B4);
    PUSH32(esp, esi);
    esi = MEM32(0x84A190);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    PUSH32(esp, edi);
    MEM32(0x7FA494) = edx;
    MEM32(0x7FA4B4) = ecx;
    edi = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_00012865; /* je: equal / zero */

loc_00012843: ;
    _fa = (uint32_t)(MEM32(esi + 0x80)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x80), 4 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00012865; /* jb: below (unsigned <) */

loc_0001284C: ;
    ecx = 4;
    PUSH32(esp, 0x00012856u); RECOMP_ABI_CALL(0x003E62A0u, sub_003E62A0); /* call 0x003E62A0 */

loc_00012856: ;
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0001285Eu); RECOMP_ABI_CALL(0x003E6BD0u, sub_003E6BD0); /* call 0x003E6BD0 */

loc_0001285E: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00012886; /* jne: not equal / not zero */

loc_00012865: ;
    esi = MEM32(0x84A184);
    ecx = 4;
    edi = esi;
    PUSH32(esp, 0x00012877u); RECOMP_ABI_CALL(0x003E62A0u, sub_003E62A0); /* call 0x003E62A0 */

loc_00012877: ;
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0001287Fu); RECOMP_ABI_CALL(0x003E6BD0u, sub_003E6BD0); /* call 0x003E6BD0 */

loc_0001287F: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0001288E; /* je: equal / zero */

loc_00012886: ;
    POP32(esp, edi);
    MEM32(0x84700C) = eax;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0001288E: ;
    PUSH32(esp, 0x587BE4);
    PUSH32(esp, 0);
    PUSH32(esp, 0x587BE4);
    MEM32(0x84700C) = 0;
    PUSH32(esp, 0x000128A9u); RECOMP_ABI_CALL(0x001F0620u, sub_001F0620); /* call 0x001F0620 */

loc_000128A9: ;
    eax = MEM32(0x84700C);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);

loc_000128B3: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000128C0
 * Original: 0x000128C0 - 0x00012948 (136 bytes, 35 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000128C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_000128C0: ;
    SET_LO8(ecx, MEM8(eax + 9));
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(8));
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_000128F7; /* jne: not equal / not zero */

loc_000128CA: ;
    MEMF(eax + 0xC) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    MEM8(eax + 9) = 1;
    MEMF(eax + 0x10) = xmm0.f[0]; /* movss */

loc_000128DE: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */

loc_000128E4: ;
    MEMF(eax + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(eax + 0x18) = xmm0.f[0]; /* movss */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_000128F7: ;
    fp_push(MEMF(esp + 0xC)); /* fld float */
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(eax + 0x10)); /* fsub dword ptr [eax + 0x10] */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    MEMF(eax + 0xC) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    fp_top() = fabs(fp_top()); /* fabs */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    MEMF(eax + 0x10) = xmm0.f[0]; /* movss */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 4)); /* fsub dword ptr [esp + 4] */
    fp_top() = fabs(fp_top()); /* fabs */
    MEMF(esp + 0xC) = (float)fp_top(); /* fst */
    fp_push(MEMF(esp)); /* fld float */
    _fa = RECOMP_FCMP_CC(RECOMP_FCMP(fp_top(), fp_st1())) >> 8; fp_pop(); /* fcompi */
    _cf = _fa & 1u;
    fp_pop(); /* fstp st(0) */
    if (((_fa & 1u) || (_fa & 0x40u)) /* fcompi */) goto loc_000128DE; /* jbe: below or equal (unsigned <=) */

loc_00012935: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(esp); /* divss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x10); /* mulss */
    goto loc_000128E4;

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00012950
 * Original: 0x00012950 - 0x00012A15 (197 bytes, 54 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00012950(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_00012950: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00012A12; /* je: equal / zero */

loc_00012958: ;
    SET_LO8(edx, MEM8(eax + 0x1C));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00012A12; /* jne: not equal / not zero */

loc_00012963: ;
    SET_LO8(edx, MEM8(eax + 9));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000129AD; /* je: equal / zero */

loc_0001296A: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 0x18)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x7FA218); /* addss */
    _fca = xmm0.f[0]; _fcb = MEMF(eax + 0x14); /* comiss */
    MEMF(eax + 0x18) = xmm0.f[0]; /* movss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0001298E; /* jb: below (unsigned <) (xmm0.f[0] vs MEMF(eax + 0x14)) */

loc_00012982: ;
    edx = MEM32(eax + 0x10);
    MEM32(eax + 4) = edx;
    MEM8(eax + 9) = 0;
    goto loc_000129B5;

loc_0001298E: ;
    xmm0.f[0] = xmm0.f[0] / MEMF(eax + 0x14); /* divss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x10)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(eax + 0xC); /* subss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(eax + 0xC); /* addss */
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    goto loc_000129B5;

loc_000129AD: ;
    SET_LO8(edx, MEM8(esp + 4));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00012A12; /* je: equal / zero */

loc_000129B5: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x648D2C)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000129EC; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_000129CD: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    edx = MEM32(esp + 8);
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000129E6u); RECOMP_ABI_CALL(0x00400E40u, sub_00400E40); /* call 0x00400E40 */

loc_000129E6: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_000129EC: ;
    xmm1 = XMM_SCALAR(MEMF(0x648D14)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000129FF; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_000129F9: ;
    MEMF(esp + 4) = xmm1.f[0]; /* movss */

loc_000129FF: ;
    eax = MEM32(esp + 4);
    edx = MEM32(esp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00012A0Fu); RECOMP_ABI_CALL(0x00400E40u, sub_00400E40); /* call 0x00400E40 */

loc_00012A0F: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00012A12: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00012A20
 * Original: 0x00012A20 - 0x00012A66 (70 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00012A20(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00012A20: ;
    MEM32(esi) = 0x5AC6A4;
    MEM32(esi + 4) = 0xFFFFFFFFu;
    PUSH32(esp, 0x00012A32u); RECOMP_ABI_CALL(0x000140A0u, sub_000140A0); /* call 0x000140A0 */

loc_00012A32: ;
    MEM32(esi + 0xC) = eax;
    MEM8(eax + 0x1D) = 1;
    eax = MEM32(esi + 0xC);
    MEM32(eax + 4) = eax;
    eax = MEM32(esi + 0xC);
    MEM32(eax) = eax;
    eax = MEM32(esi + 0xC);
    MEM32(eax + 8) = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x10) = eax;
    MEM8(esi + 0x14) = LO8(eax);
    MEM8(esi + 0x15) = LO8(eax);
    MEM32(esi + 0x18) = 0xFFFFFFFFu;
    MEM32(esi + 0x1C) = 0xFFFFFFFFu;
    eax = esi;
    esp += 4; return; /* ret */

}

/**
 * sub_00012A70
 * Original: 0x00012A70 - 0x00012A9A (42 bytes, 15 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00012A70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00012A70: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00012A78u); RECOMP_ABI_CALL(0x00012AA0u, sub_00012AA0); /* call 0x00012AA0 */

loc_00012A78: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00012A94; /* je: equal / zero */

loc_00012A7F: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    MEM32(esp + 8) = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_00012A94; /* je: equal / zero */

loc_00012A87: ;
    eax = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00012A91u); RECOMP_ABI_CALL(0x002AF1C0u, sub_002AF1C0); /* call 0x002AF1C0 */

loc_00012A91: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00012A94: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00012AA0
 * Original: 0x00012AA0 - 0x00012B03 (99 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00012AA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00012AA0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx + 8;
    MEM32(ecx) = 0x5AC6A4;
    eax = MEM32(esi + 4);
    ecx = MEM32(eax + 4);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x00012ABAu); RECOMP_ABI_CALL(0x00013830u, sub_00013830); /* call 0x00013830 */

loc_00012ABA: ;
    eax = MEM32(esi + 4);
    MEM32(eax + 4) = eax;
    eax = MEM32(esi + 4);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 8) = edi;
    MEM32(eax) = eax;
    eax = MEM32(esi + 4);
    MEM32(eax + 8) = eax;
    eax = MEM32(esi + 4);
    ecx = MEM32(eax);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    edx = esp + 0x10;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00012AE1u); RECOMP_ABI_CALL(0x00013950u, sub_00013950); /* call 0x00013950 */

loc_00012AE1: ;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    MEM32(esp + 8) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_00012AF9; /* je: equal / zero */

loc_00012AEC: ;
    eax = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00012AF6u); RECOMP_ABI_CALL(0x002AF1C0u, sub_002AF1C0); /* call 0x002AF1C0 */

loc_00012AF6: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00012AF9: ;
    MEM32(esi + 4) = edi;
    MEM32(esi + 8) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00012B10
 * Original: 0x00012B10 - 0x00012B96 (134 bytes, 59 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00012B10(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00012B10: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    ebx = ecx;
    edi = eax;
    SET_LO8(eax, MEM8(ebx + 0x15));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00012B47; /* jne: not equal / not zero */

loc_00012B1E: ;
    eax = MEM32(ebx + 0xC);
    PUSH32(esp, ebp);
    edx = esp + 0xC;
    MEM32(esp + 0xC) = eax;
    PUSH32(esp, 0x00012B2Fu); RECOMP_ABI_CALL(0x00013BB0u, sub_00013BB0); /* call 0x00013BB0 */

loc_00012B2F: ;
    ecx = MEM32(ebx + 0x10);
    edx = MEM32(esp + 0xC);
    ebp = MEM32(edx + 0xC);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, ecx (32-bit) */
    SET_LO8(eax, 1);
    POP32(esp, ebp);
    if (CMP_NE(_fa, _fb)) goto loc_00012B44; /* jne: not equal / not zero */

loc_00012B41: ;
    MEM8(ebx + 0x14) = LO8(eax);

loc_00012B44: ;
    MEM8(ebx + 0x15) = LO8(eax);

loc_00012B47: ;
    SET_LO8(eax, MEM8(ebx + 0x14));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00012B92; /* je: equal / zero */

loc_00012B4E: ;
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00012B55u); RECOMP_ABI_CALL(0x00012BA0u, sub_00012BA0); /* call 0x00012BA0 */

loc_00012B55: ;
    _fa = (uint32_t)(MEM32(ebx + 0x1C)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0x1C), eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00012B64; /* je: equal / zero */

loc_00012B5A: ;
    MEM32(ebx + 0x1C) = eax;
    MEM32(ebx + 0x18) = 0xFFFFFFFFu;

loc_00012B64: ;
    eax = MEM32(ebx + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00012B7F; /* jne: not equal / not zero */

loc_00012B6C: ;
    PUSH32(esp, esi);
    eax = ebx;
    PUSH32(esp, 0x00012B74u); RECOMP_ABI_CALL(0x00012CD0u, sub_00012CD0); /* call 0x00012CD0 */

loc_00012B74: ;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00012B7Bu); RECOMP_ABI_CALL(0x00013220u, sub_00013220); /* call 0x00013220 */

loc_00012B7B: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_00012B7F: ;
    PUSH32(esp, eax);
    eax = MEM32(ebx + 0x1C);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00012B8Bu); RECOMP_ABI_CALL(0x00013050u, sub_00013050); /* call 0x00013050 */

loc_00012B8B: ;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00012B92u); RECOMP_ABI_CALL(0x00013220u, sub_00013220); /* call 0x00013220 */

loc_00012B92: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00012BA0
 * Original: 0x00012BA0 - 0x00012CC7 (295 bytes, 93 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00012BA0(void)
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

loc_00012BA0: ;
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm0 = XMM_SCALAR(MEMF(0x648E84)); /* movss */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x3C);
    ecx = MEM32(ebp + 0x10);
    PUSH32(esp, edi);
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    MEM32(esp + 0xC) = eax;
    if (CMP_LE(_fas, _fbs)) goto loc_00012CBF; /* jle: less or equal (signed <=) */

loc_00012BCB: ;
    eax = esp + 0x20;
    PUSH32(esp, ebx);
    ecx = eax;
    PUSH32(esp, esi);
    ebx = ebp + 8;
    MEM32(esp + 0x18) = eax;
    MEM32(esp + 0x20) = ecx;
    edi = edi;

loc_00012BE0: ;
    ecx = MEM32(ebx + 4);
    eax = MEM32(ecx + 4);
    SET_LO8(edx, MEM8(eax + 0x1D));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00012C05; /* jne: not equal / not zero */

loc_00012BED: ;
    /* nop */

loc_00012BF0: ;
    _fa = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0xC), edi (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00012BFA; /* jge: greater or equal (signed >=) */

loc_00012BF5: ;
    eax = MEM32(eax + 8);
    goto loc_00012BFE;

loc_00012BFA: ;
    ecx = eax;
    eax = MEM32(eax);

loc_00012BFE: ;
    SET_LO8(edx, MEM8(eax + 0x1D));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00012BF0; /* je: equal / zero */

loc_00012C05: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(ebx + 4) (32-bit) */
    eax = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_00012C11; /* je: equal / zero */

loc_00012C0C: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(ecx + 0xC) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00012C37; /* jge: greater or equal (signed >=) */

loc_00012C11: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = eax;
    MEM32(esp + 0x38) = eax;
    MEM32(esp + 0x40) = eax;
    PUSH32(esp, ecx);
    eax = esp + 0x38;
    esi = esp + 0x4C;
    ecx = ebx;
    MEM32(esp + 0x38) = edi;
    MEM32(esp + 0x40) = edx;
    PUSH32(esp, 0x00012C35u); RECOMP_ABI_CALL(0x000136E0u, sub_000136E0); /* call 0x000136E0 */

loc_00012C35: ;
    eax = MEM32(eax);

loc_00012C37: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x1C) = eax;
    ecx = MEM32(esp + 0x1C);
    xmm0 = XMM_SCALAR(MEMF(ecx)); /* movss */
    XMM_LOAD_HIGH(xmm0, ecx + 4); /* movhps */
    edx = MEM32(esp + 0x4C);
    xmm1 = XMM_SCALAR(MEMF(edx)); /* movss */
    XMM_LOAD_HIGH(xmm1, edx + 4); /* movhps */
    xmm0 = XMM_SUB(xmm0, xmm1); /* subps */
    eax = MEM32(esp + 0x18);
    MEMF(eax) = xmm0.f[0]; /* movss */
    XMM_STORE_HIGH(eax + 4, xmm0); /* movhps */
    edx = MEM32(esp + 0x20);
    xmm1 = XMM_SCALAR(MEMF(edx)); /* movss */
    XMM_LOAD_HIGH(xmm1, edx + 4); /* movhps */
    xmm2 = xmm1; /* movaps */
    xmm1 = XMM_MUL(xmm1, xmm2); /* mulps */
    xmm0 = xmm1; /* movaps */
    xmm0 = XMM_SHUFFLE(xmm0, xmm0, 0x32); /* shufps */
    xmm1 = XMM_ADD(xmm1, xmm0); /* addps */
    xmm0 = XMM_SHUFFLE(xmm0, xmm0, 0x32); /* shufps */
    xmm1 = XMM_ADD(xmm1, xmm0); /* addps */
    xmm1.f[0] = sqrtf(xmm1.f[0]); /* sqrtss */
    MEMF(esp + 0x24) = xmm1.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00012CAD; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_00012CA3: ;
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x14) = edi;

loc_00012CAD: ;
    eax = MEM32(ebp + 0x10);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00012BE0; /* jl: less (signed <) */

loc_00012CB9: ;
    eax = MEM32(esp + 0x14);
    POP32(esp, esi);
    POP32(esp, ebx);

loc_00012CBF: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00012CD0
 * Original: 0x00012CD0 - 0x00012D3D (109 bytes, 55 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00012CD0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00012CD0: ;
    PUSH32(esp, ebx);
    ebx = eax;
    ecx = MEM32(ebx + 0x1C);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    edx = ecx + -1;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    PUSH32(esp, esi);
    esi = MEM32(ebx + 0x10);
    if (CMP_GE(_fas, _fbs)) goto loc_00012CEF; /* jge: greater or equal (signed >=) */

loc_00012CE6: ;
    _fa = (uint32_t)(MEM32(ebx + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 4), 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00012CEF; /* jne: not equal / not zero */

loc_00012CEC: ;
    edx = esi + -1;

loc_00012CEF: ;
    eax = ecx + 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00012CFE; /* jne: not equal / not zero */

loc_00012CF6: ;
    eax = MEM32(ebx + 4);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */

loc_00012CFE: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00012D29; /* je: equal / zero */

loc_00012D03: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00012D1A; /* je: equal / zero */

loc_00012D08: ;
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    esi = ebx;
    PUSH32(esp, 0x00012D14u); RECOMP_ABI_CALL(0x00012D40u, sub_00012D40); /* call 0x00012D40 */

loc_00012D14: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_00012D1A: ;
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x00012D23u); RECOMP_ABI_CALL(0x00013050u, sub_00013050); /* call 0x00013050 */

loc_00012D23: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_00012D29: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00012D37; /* je: equal / zero */

loc_00012D2E: ;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x00012D37u); RECOMP_ABI_CALL(0x00013050u, sub_00013050); /* call 0x00013050 */

loc_00012D37: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00012D40
 * Original: 0x00012D40 - 0x00013042 (770 bytes, 198 insns)
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00012D40(void)
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

loc_00012D40: ;
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x44);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x54);
    PUSH32(esp, edi);
    edi = esi + 8;
    eax = esp + 0x50;
    PUSH32(esp, 0x00012D5Au); RECOMP_ABI_CALL(0x00013690u, sub_00013690); /* call 0x00013690 */

loc_00012D5A: ;
    MEM32(esp + 0x10) = eax;
    eax = esp + 0x20;
    MEM32(esp + 0xC) = eax;
    ecx = MEM32(esp + 0x48);
    xmm0 = XMM_SCALAR(MEMF(ecx)); /* movss */
    XMM_LOAD_HIGH(xmm0, ecx + 4); /* movhps */
    edx = MEM32(esp + 0x10);
    xmm1 = XMM_SCALAR(MEMF(edx)); /* movss */
    XMM_LOAD_HIGH(xmm1, edx + 4); /* movhps */
    xmm0 = XMM_SUB(xmm0, xmm1); /* subps */
    eax = MEM32(esp + 0xC);
    MEMF(eax) = xmm0.f[0]; /* movss */
    XMM_STORE_HIGH(eax + 4, xmm0); /* movhps */
    ecx = esp + 0x20;
    MEM32(esp + 0x48) = ecx;
    edx = MEM32(esp + 0x48);
    xmm1 = XMM_SCALAR(MEMF(edx)); /* movss */
    XMM_LOAD_HIGH(xmm1, edx + 4); /* movhps */
    xmm2 = xmm1; /* movaps */
    xmm1 = XMM_MUL(xmm1, xmm2); /* mulps */
    xmm0 = xmm1; /* movaps */
    xmm0 = XMM_SHUFFLE(xmm0, xmm0, 0x32); /* shufps */
    xmm1 = XMM_ADD(xmm1, xmm0); /* addps */
    xmm0 = XMM_SHUFFLE(xmm0, xmm0, 0x32); /* shufps */
    xmm1 = XMM_ADD(xmm1, xmm0); /* addps */
    MEMF(esp + 0xC) = xmm1.f[0]; /* movss */
    eax = esp + 0x50;
    PUSH32(esp, 0x00012DC7u); RECOMP_ABI_CALL(0x00013690u, sub_00013690); /* call 0x00013690 */

loc_00012DC7: ;
    MEM32(esp + 0x48) = eax;
    eax = esp + 0x58;
    PUSH32(esp, 0x00012DD4u); RECOMP_ABI_CALL(0x00013690u, sub_00013690); /* call 0x00013690 */

loc_00012DD4: ;
    edx = esp + 0x38;
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 0x58) = edx;
    ecx = MEM32(esp + 0x10);
    xmm0 = XMM_SCALAR(MEMF(ecx)); /* movss */
    XMM_LOAD_HIGH(xmm0, ecx + 4); /* movhps */
    edx = MEM32(esp + 0x48);
    xmm1 = XMM_SCALAR(MEMF(edx)); /* movss */
    XMM_LOAD_HIGH(xmm1, edx + 4); /* movhps */
    xmm0 = XMM_SUB(xmm0, xmm1); /* subps */
    eax = MEM32(esp + 0x58);
    MEMF(eax) = xmm0.f[0]; /* movss */
    XMM_STORE_HIGH(eax + 4, xmm0); /* movhps */
    eax = esp + 0x38;
    MEM32(esp + 0x58) = eax;
    edx = MEM32(esp + 0x58);
    xmm1 = XMM_SCALAR(MEMF(edx)); /* movss */
    XMM_LOAD_HIGH(xmm1, edx + 4); /* movhps */
    xmm2 = xmm1; /* movaps */
    xmm1 = XMM_MUL(xmm1, xmm2); /* mulps */
    xmm0 = xmm1; /* movaps */
    xmm0 = XMM_SHUFFLE(xmm0, xmm0, 0x32); /* shufps */
    xmm1 = XMM_ADD(xmm1, xmm0); /* addps */
    xmm0 = XMM_SHUFFLE(xmm0, xmm0, 0x32); /* shufps */
    xmm1 = XMM_ADD(xmm1, xmm0); /* addps */
    MEMF(esp + 0x48) = xmm1.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x40)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x28); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x3C)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(esp + 0x24); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x38)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(esp + 0x20); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(0x648D14)); /* movss */
    xmm1.f[0] = xmm1.f[0] / MEMF(esp + 0x48); /* divss */
    MEMF(esp + 0x1C) = xmm1.f[0]; /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    eax = esp + 0x50;
    MEMF(esp + 0x58) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x18) = xmm1.f[0]; /* movss */
    PUSH32(esp, 0x00012E91u); RECOMP_ABI_CALL(0x00013690u, sub_00013690); /* call 0x00013690 */

loc_00012E91: ;
    MEM32(esp + 0x10) = eax;
    eax = esp + 0x54;
    PUSH32(esp, 0x00012E9Eu); RECOMP_ABI_CALL(0x00013690u, sub_00013690); /* call 0x00013690 */

loc_00012E9E: ;
    ecx = esp + 0x2C;
    MEM32(esp + 0x14) = eax;
    MEM32(esp + 0x48) = ecx;
    ecx = MEM32(esp + 0x14);
    xmm0 = XMM_SCALAR(MEMF(ecx)); /* movss */
    XMM_LOAD_HIGH(xmm0, ecx + 4); /* movhps */
    edx = MEM32(esp + 0x10);
    xmm1 = XMM_SCALAR(MEMF(edx)); /* movss */
    XMM_LOAD_HIGH(xmm1, edx + 4); /* movhps */
    xmm0 = XMM_SUB(xmm0, xmm1); /* subps */
    eax = MEM32(esp + 0x48);
    MEMF(eax) = xmm0.f[0]; /* movss */
    XMM_STORE_HIGH(eax + 4, xmm0); /* movhps */
    edx = esp + 0x2C;
    MEM32(esp + 0x48) = edx;
    edx = MEM32(esp + 0x48);
    xmm1 = XMM_SCALAR(MEMF(edx)); /* movss */
    XMM_LOAD_HIGH(xmm1, edx + 4); /* movhps */
    xmm2 = xmm1; /* movaps */
    xmm1 = XMM_MUL(xmm1, xmm2); /* mulps */
    xmm0 = xmm1; /* movaps */
    xmm0 = XMM_SHUFFLE(xmm0, xmm0, 0x32); /* shufps */
    xmm1 = XMM_ADD(xmm1, xmm0); /* addps */
    xmm0 = XMM_SHUFFLE(xmm0, xmm0, 0x32); /* shufps */
    xmm1 = XMM_ADD(xmm1, xmm0); /* addps */
    MEMF(esp + 0x14) = xmm1.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x34)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x28); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x30)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(esp + 0x24); /* mulss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x2C)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(esp + 0x20); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(0x648D14)); /* movss */
    xmm1.f[0] = xmm1.f[0] / MEMF(esp + 0x14); /* divss */
    MEMF(esp + 0x14) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x48) = xmm0.f[0]; /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm2.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00012F9D; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs xmm0.f[0]) */

loc_00012F5A: ;
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00012F8D; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_00012F5F: ;
    fp_push(MEMF(esp + 0x58)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x58)); /* fmul dword ptr [esp + 0x58] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x1C)); /* fmul dword ptr [esp + 0x1c] */
    fp_top() = RECOMP_FP_PC(MEMF(esp + 0xC) - fp_top()); /* fsubr dword ptr [esp + 0xc] */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    fp_push(MEMF(esp + 0x48)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x48)); /* fmul dword ptr [esp + 0x48] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x14)); /* fmul dword ptr [esp + 0x14] */
    fp_top() = RECOMP_FP_PC(MEMF(esp + 0xC) - fp_top()); /* fsubr dword ptr [esp + 0xc] */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    _fa = RECOMP_FCMP_CC(RECOMP_FCMP(fp_top(), fp_st1())) >> 8; fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if (((_fa & 1u) || (_fa & 0x40u)) /* fcompi */) goto loc_00012FA2; /* jbe: below or equal (unsigned <=) */

loc_00012F8D: ;
    eax = esp + 0x38;
    xmm1 = xmm2; /* movaps */
    MEM32(esp + 0x58) = eax;
    MEM32(esi + 0x18) = ebp;
    goto loc_00012FB1;

loc_00012F9D: ;
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00013019; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_00012FA2: ;
    edx = MEM32(esp + 0x54);
    ecx = esp + 0x2C;
    MEM32(esp + 0x58) = ecx;
    MEM32(esi + 0x18) = edx;

loc_00012FB1: ;
    MEMF(esp + 0x54) = xmm1.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x54)); /* movss */
    xmm0 = XMM_SHUFFLE(xmm0, xmm0, 0); /* shufps */
    edx = MEM32(esp + 0x58);
    xmm1 = XMM_SCALAR(MEMF(edx)); /* movss */
    XMM_LOAD_HIGH(xmm1, edx + 4); /* movhps */
    xmm0 = XMM_MUL(xmm0, xmm1); /* mulps */
    eax = MEM32(esp + 0x4C);
    MEMF(eax) = xmm0.f[0]; /* movss */
    XMM_STORE_HIGH(eax + 4, xmm0); /* movhps */
    eax = esp + 0x50;
    PUSH32(esp, 0x00012FE5u); RECOMP_ABI_CALL(0x00013690u, sub_00013690); /* call 0x00013690 */

loc_00012FE5: ;
    MEM32(esp + 0x50) = eax;
    ecx = MEM32(esp + 0x50);
    xmm0 = XMM_SCALAR(MEMF(ecx)); /* movss */
    XMM_LOAD_HIGH(xmm0, ecx + 4); /* movhps */
    edx = MEM32(esp + 0x4C);
    xmm1 = XMM_SCALAR(MEMF(edx)); /* movss */
    XMM_LOAD_HIGH(xmm1, edx + 4); /* movhps */
    xmm0 = XMM_ADD(xmm0, xmm1); /* addps */
    eax = MEM32(esp + 0x4C);
    MEMF(eax) = xmm0.f[0]; /* movss */
    XMM_STORE_HIGH(eax + 4, xmm0); /* movhps */
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 24; return; /* ret 20 */

loc_00013019: ;
    eax = esp + 0x50;
    PUSH32(esp, 0x00013022u); RECOMP_ABI_CALL(0x00013690u, sub_00013690); /* call 0x00013690 */

loc_00013022: ;
    ecx = MEM32(eax);
    MEM32(ebx) = ecx;
    edx = MEM32(eax + 4);
    MEM32(ebx + 4) = edx;
    eax = MEM32(eax + 8);
    POP32(esp, edi);
    MEM32(ebx + 8) = eax;
    POP32(esp, ebp);
    MEM32(esi + 0x18) = 0xFFFFFFFFu;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 24; return; /* ret 20 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00013050
 * Original: 0x00013050 - 0x0001321A (458 bytes, 119 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00013050(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_00013050: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x2C);
    PUSH32(esp, edi);
    edi = ebx + 8;
    eax = esp + 0x34;
    PUSH32(esp, 0x00013065u); RECOMP_ABI_CALL(0x00013690u, sub_00013690); /* call 0x00013690 */

loc_00013065: ;
    MEM32(esp + 0xC) = eax;
    eax = esp + 0x1C;
    MEM32(esp + 8) = eax;
    ecx = MEM32(esp + 0x2C);
    xmm0 = XMM_SCALAR(MEMF(ecx)); /* movss */
    XMM_LOAD_HIGH(xmm0, ecx + 4); /* movhps */
    edx = MEM32(esp + 0xC);
    xmm1 = XMM_SCALAR(MEMF(edx)); /* movss */
    XMM_LOAD_HIGH(xmm1, edx + 4); /* movhps */
    xmm0 = XMM_SUB(xmm0, xmm1); /* subps */
    eax = MEM32(esp + 8);
    MEMF(eax) = xmm0.f[0]; /* movss */
    XMM_STORE_HIGH(eax + 4, xmm0); /* movhps */
    ecx = esp + 0x1C;
    MEM32(esp + 0x2C) = ecx;
    edx = MEM32(esp + 0x2C);
    xmm1 = XMM_SCALAR(MEMF(edx)); /* movss */
    XMM_LOAD_HIGH(xmm1, edx + 4); /* movhps */
    xmm2 = xmm1; /* movaps */
    xmm1 = XMM_MUL(xmm1, xmm2); /* mulps */
    xmm0 = xmm1; /* movaps */
    xmm0 = XMM_SHUFFLE(xmm0, xmm0, 0x32); /* shufps */
    xmm1 = XMM_ADD(xmm1, xmm0); /* addps */
    xmm0 = XMM_SHUFFLE(xmm0, xmm0, 0x32); /* shufps */
    xmm1 = XMM_ADD(xmm1, xmm0); /* addps */
    MEMF(esp + 0xC) = xmm1.f[0]; /* movss */
    eax = esp + 0x34;
    PUSH32(esp, 0x000130D2u); RECOMP_ABI_CALL(0x00013690u, sub_00013690); /* call 0x00013690 */

loc_000130D2: ;
    MEM32(esp + 0xC) = eax;
    eax = esp + 0x38;
    PUSH32(esp, 0x000130DFu); RECOMP_ABI_CALL(0x00013690u, sub_00013690); /* call 0x00013690 */

loc_000130DF: ;
    edx = esp + 0x10;
    MEM32(esp + 8) = eax;
    MEM32(esp + 0x2C) = edx;
    ecx = MEM32(esp + 8);
    xmm0 = XMM_SCALAR(MEMF(ecx)); /* movss */
    XMM_LOAD_HIGH(xmm0, ecx + 4); /* movhps */
    edx = MEM32(esp + 0xC);
    xmm1 = XMM_SCALAR(MEMF(edx)); /* movss */
    XMM_LOAD_HIGH(xmm1, edx + 4); /* movhps */
    xmm0 = XMM_SUB(xmm0, xmm1); /* subps */
    eax = MEM32(esp + 0x2C);
    MEMF(eax) = xmm0.f[0]; /* movss */
    XMM_STORE_HIGH(eax + 4, xmm0); /* movhps */
    eax = esp + 0x10;
    MEM32(esp + 0x2C) = eax;
    edx = MEM32(esp + 0x2C);
    xmm1 = XMM_SCALAR(MEMF(edx)); /* movss */
    XMM_LOAD_HIGH(xmm1, edx + 4); /* movhps */
    xmm2 = xmm1; /* movaps */
    xmm1 = XMM_MUL(xmm1, xmm2); /* mulps */
    xmm0 = xmm1; /* movaps */
    xmm0 = XMM_SHUFFLE(xmm0, xmm0, 0x32); /* shufps */
    xmm1 = XMM_ADD(xmm1, xmm0); /* addps */
    xmm0 = XMM_SHUFFLE(xmm0, xmm0, 0x32); /* shufps */
    xmm1 = XMM_ADD(xmm1, xmm0); /* addps */
    MEMF(esp + 0xC) = xmm1.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x24); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(esp + 0x20); /* mulss */
    ecx = MEM32(esp + 0x38);
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(esp + 0x1C); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm0.f[0] = xmm0.f[0] / MEMF(esp + 0xC); /* divss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x648CF8); /* comiss */
    MEM32(ebx + 0x18) = ecx;
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000131F2; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x648CF8)) */

loc_00013185: ;
    edx = eax;
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x38) = edx;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x2C)); /* movss */
    xmm0 = XMM_SHUFFLE(xmm0, xmm0, 0); /* shufps */
    edx = MEM32(esp + 0x38);
    xmm1 = XMM_SCALAR(MEMF(edx)); /* movss */
    XMM_LOAD_HIGH(xmm1, edx + 4); /* movhps */
    xmm0 = XMM_MUL(xmm0, xmm1); /* mulps */
    eax = MEM32(esp + 0x30);
    MEMF(eax) = xmm0.f[0]; /* movss */
    XMM_STORE_HIGH(eax + 4, xmm0); /* movhps */
    eax = esp + 0x34;
    PUSH32(esp, 0x000131BFu); RECOMP_ABI_CALL(0x00013690u, sub_00013690); /* call 0x00013690 */

loc_000131BF: ;
    MEM32(esp + 0x34) = eax;
    ecx = MEM32(esp + 0x34);
    xmm0 = XMM_SCALAR(MEMF(ecx)); /* movss */
    XMM_LOAD_HIGH(xmm0, ecx + 4); /* movhps */
    edx = MEM32(esp + 0x30);
    xmm1 = XMM_SCALAR(MEMF(edx)); /* movss */
    XMM_LOAD_HIGH(xmm1, edx + 4); /* movhps */
    xmm0 = XMM_ADD(xmm0, xmm1); /* addps */
    eax = MEM32(esp + 0x30);
    MEMF(eax) = xmm0.f[0]; /* movss */
    XMM_STORE_HIGH(eax + 4, xmm0); /* movhps */
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 20; return; /* ret 16 */

loc_000131F2: ;
    eax = esp + 0x34;
    PUSH32(esp, 0x000131FBu); RECOMP_ABI_CALL(0x00013690u, sub_00013690); /* call 0x00013690 */

loc_000131FB: ;
    ecx = MEM32(eax);
    MEM32(esi) = ecx;
    edx = MEM32(eax + 4);
    MEM32(esi + 4) = edx;
    eax = MEM32(eax + 8);
    MEM32(esi + 8) = eax;
    POP32(esp, edi);
    MEM32(ebx + 0x18) = 0xFFFFFFFFu;
    POP32(esp, esi);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00013220
 * Original: 0x00013220 - 0x00013685 (1125 bytes, 355 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00013220(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00013220: ;
    SET_LO8(eax, MEM8(0x846FEC));
    _fb = (uint32_t)(0xA0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xA0;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0001367C; /* je: equal / zero */

loc_00013233: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xAC);
    eax = MEM32(ebp + 0x10);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x10) = edi;
    if (CMP_LE(_fas, _fbs)) goto loc_0001356C; /* jle: less or equal (signed <=) */

loc_00013250: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 8;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00013270;

loc_0001326A: ;
    edi = MEM32(esp + 0x10);
    edi = edi;

loc_00013270: ;
    ecx = MEM32(ebp + 4);
    eax = MEM32(ecx + 4);
    SET_LO8(edx, MEM8(eax + 0x1D));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00013295; /* jne: not equal / not zero */

loc_0001327D: ;
    /* nop */

loc_00013280: ;
    _fa = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0xC), edi (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0001328A; /* jge: greater or equal (signed >=) */

loc_00013285: ;
    eax = MEM32(eax + 8);
    goto loc_0001328E;

loc_0001328A: ;
    ecx = eax;
    eax = MEM32(eax);

loc_0001328E: ;
    SET_LO8(edx, MEM8(eax + 0x1D));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00013280; /* je: equal / zero */

loc_00013295: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(ebp + 4) (32-bit) */
    eax = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_000132A1; /* je: equal / zero */

loc_0001329C: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(ecx + 0xC) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000132CA; /* jge: greater or equal (signed >=) */

loc_000132A1: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = eax;
    MEM32(esp + 0x5C) = eax;
    MEM32(esp + 0x64) = eax;
    PUSH32(esp, ecx);
    eax = esp + 0x5C;
    esi = esp + 0xA4;
    ecx = ebp;
    MEM32(esp + 0x5C) = edi;
    MEM32(esp + 0x64) = edx;
    PUSH32(esp, 0x000132C8u); RECOMP_ABI_CALL(0x000136E0u, sub_000136E0); /* call 0x000136E0 */

loc_000132C8: ;
    eax = MEM32(eax);

loc_000132CA: ;
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0);
    PUSH32(esp, 0x43480000);
    PUSH32(esp, 0xFF);
    PUSH32(esp, 5);
    PUSH32(esp, 0);
    ecx = eax + 0x10;
    PUSH32(esp, 0);
    eax = esp + 0x48;
    PUSH32(esp, 0x000132FFu); RECOMP_ABI_CALL(0x00141FC0u, sub_00141FC0); /* call 0x00141FC0 */

loc_000132FF: ;
    ecx = MEM32(ebp + 4);
    eax = MEM32(ecx + 4);
    SET_LO8(ebx, MEM8(eax + 0x1D));
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    edx = edi + 1;
    MEM32(esp + 0x34) = edx;
    if (CMP_NE(_fa, _fb)) goto loc_0001332B; /* jne: not equal / not zero */

loc_00013316: ;
    _fa = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0xC), edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00013320; /* jge: greater or equal (signed >=) */

loc_0001331B: ;
    eax = MEM32(eax + 8);
    goto loc_00013324;

loc_00013320: ;
    ecx = eax;
    eax = MEM32(eax);

loc_00013324: ;
    SET_LO8(ebx, MEM8(eax + 0x1D));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00013316; /* je: equal / zero */

loc_0001332B: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(ebp + 4) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00013335; /* je: equal / zero */

loc_00013330: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ecx + 0xC) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00013362; /* jge: greater or equal (signed >=) */

loc_00013335: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = eax;
    MEM32(esp + 0x7C) = eax;
    MEM32(esp + 0x80) = esi;
    MEM32(esp + 0x84) = eax;
    PUSH32(esp, ecx);
    eax = esp + 0x7C;
    esi = esp + 0xAC;
    ecx = ebp;
    MEM32(esp + 0x7C) = edx;
    PUSH32(esp, 0x00013362u); RECOMP_ABI_CALL(0x000136E0u, sub_000136E0); /* call 0x000136E0 */

loc_00013362: ;
    ecx = MEM32(ebp + 4);
    eax = MEM32(ecx + 4);
    SET_LO8(edx, MEM8(eax + 0x1D));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00013385; /* jne: not equal / not zero */

loc_0001336F: ;
    /* nop */

loc_00013370: ;
    _fa = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0xC), edi (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0001337A; /* jge: greater or equal (signed >=) */

loc_00013375: ;
    eax = MEM32(eax + 8);
    goto loc_0001337E;

loc_0001337A: ;
    ecx = eax;
    eax = MEM32(eax);

loc_0001337E: ;
    SET_LO8(edx, MEM8(eax + 0x1D));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00013370; /* je: equal / zero */

loc_00013385: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(ebp + 4) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0001338F; /* je: equal / zero */

loc_0001338A: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(ecx + 0xC) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000133B6; /* jge: greater or equal (signed >=) */

loc_0001338F: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = eax;
    MEM32(esp + 0x4C) = eax;
    MEM32(esp + 0x54) = eax;
    PUSH32(esp, ecx);
    eax = esp + 0x4C;
    esi = esp + 0xA0;
    ecx = ebp;
    MEM32(esp + 0x4C) = edi;
    MEM32(esp + 0x54) = edx;
    PUSH32(esp, 0x000133B6u); RECOMP_ABI_CALL(0x000136E0u, sub_000136E0); /* call 0x000136E0 */

loc_000133B6: ;
    ecx = MEM32(ebp + 4);
    eax = MEM32(ecx + 4);
    SET_LO8(edx, MEM8(eax + 0x1D));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000133D8; /* jne: not equal / not zero */

loc_000133C3: ;
    _fa = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0xC), edi (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000133CD; /* jge: greater or equal (signed >=) */

loc_000133C8: ;
    eax = MEM32(eax + 8);
    goto loc_000133D1;

loc_000133CD: ;
    ecx = eax;
    eax = MEM32(eax);

loc_000133D1: ;
    SET_LO8(edx, MEM8(eax + 0x1D));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000133C3; /* je: equal / zero */

loc_000133D8: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(ebp + 4) (32-bit) */
    MEM32(esp + 0x20) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_000133E6; /* je: equal / zero */

loc_000133E1: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(ecx + 0xC) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00013413; /* jge: greater or equal (signed >=) */

loc_000133E6: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = eax;
    MEM32(esp + 0x6C) = eax;
    MEM32(esp + 0x74) = eax;
    PUSH32(esp, ecx);
    eax = esp + 0x6C;
    esi = esp + 0xA8;
    ecx = ebp;
    MEM32(esp + 0x6C) = edi;
    MEM32(esp + 0x74) = edx;
    PUSH32(esp, 0x0001340Du); RECOMP_ABI_CALL(0x000136E0u, sub_000136E0); /* call 0x000136E0 */

loc_0001340D: ;
    ecx = MEM32(eax);
    MEM32(esp + 0x20) = ecx;

loc_00013413: ;
    ecx = MEM32(ebp + 4);
    eax = MEM32(ecx + 4);
    SET_LO8(edx, MEM8(eax + 0x1D));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00013435; /* jne: not equal / not zero */

loc_00013420: ;
    _fa = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0xC), edi (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0001342A; /* jge: greater or equal (signed >=) */

loc_00013425: ;
    eax = MEM32(eax + 8);
    goto loc_0001342E;

loc_0001342A: ;
    ecx = eax;
    eax = MEM32(eax);

loc_0001342E: ;
    SET_LO8(edx, MEM8(eax + 0x1D));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00013420; /* je: equal / zero */

loc_00013435: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(ebp + 4) (32-bit) */
    ebx = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_00013441; /* je: equal / zero */

loc_0001343C: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(ecx + 0xC) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00013479; /* jge: greater or equal (signed >=) */

loc_00013441: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = eax;
    MEM32(esp + 0x8C) = eax;
    MEM32(esp + 0x94) = eax;
    PUSH32(esp, ecx);
    eax = esp + 0x8C;
    esi = esp + 0xB0;
    ecx = ebp;
    MEM32(esp + 0x8C) = edi;
    MEM32(esp + 0x94) = edx;
    PUSH32(esp, 0x00013477u); RECOMP_ABI_CALL(0x000136E0u, sub_000136E0); /* call 0x000136E0 */

loc_00013477: ;
    ebx = MEM32(eax);

loc_00013479: ;
    ecx = MEM32(ebp + 4);
    eax = MEM32(ecx + 4);
    SET_LO8(edx, MEM8(eax + 0x1D));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0001349B; /* jne: not equal / not zero */

loc_00013486: ;
    _fa = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0xC), edi (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00013490; /* jge: greater or equal (signed >=) */

loc_0001348B: ;
    eax = MEM32(eax + 8);
    goto loc_00013494;

loc_00013490: ;
    ecx = eax;
    eax = MEM32(eax);

loc_00013494: ;
    SET_LO8(edx, MEM8(eax + 0x1D));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00013486; /* je: equal / zero */

loc_0001349B: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(ebp + 4) (32-bit) */
    eax = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_000134A7; /* je: equal / zero */

loc_000134A2: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(ecx + 0xC) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000134D0; /* jge: greater or equal (signed >=) */

loc_000134A7: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = eax;
    MEM32(esp + 0x28) = eax;
    MEM32(esp + 0x30) = eax;
    PUSH32(esp, ecx);
    eax = esp + 0x28;
    esi = esp + 0x9C;
    ecx = ebp;
    MEM32(esp + 0x28) = edi;
    MEM32(esp + 0x30) = edx;
    PUSH32(esp, 0x000134CEu); RECOMP_ABI_CALL(0x000136E0u, sub_000136E0); /* call 0x000136E0 */

loc_000134CE: ;
    eax = MEM32(eax);

loc_000134D0: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 0x10)); /* movss */
    PUSH32(esp, 0x47C35000);
    edx = esp + 0x3C;
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x28);
    ecx = esp + 0x4C;
    PUSH32(esp, ecx);
    ecx = MEM32(edx + 0x18);
    edx = MEM32(ebx + 0x14);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    edi = esp + 0x54;
    ebx = esp + 0x50;
    PUSH32(esp, 0x000134FDu); RECOMP_ABI_CALL(0x003565D0u, sub_003565D0); /* call 0x003565D0 */

loc_000134FD: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0001354F; /* je: equal / zero */

loc_00013504: ;
    SET_LO8(eax, MEM8(0x7819D5));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    xmm0 = XMM_SCALAR(MEMF(0x656CA8)); /* movss */
    MEMF(0x77615C) = xmm0.f[0]; /* movss */
    if (CMP_EQ(_fa, _fb)) goto loc_0001352D; /* je: equal / zero */

loc_0001351D: ;
    xmm0.f[0] = xmm0.f[0] * MEMF(0x648F10); /* mulss */
    MEMF(0x77615C) = xmm0.f[0]; /* movss */

loc_0001352D: ;
    eax = MEM32(esp + 0x10);
    ecx = (uint32_t)recomp_cvt_si32((double)MEMF(esp + 0x40), g_mxcsr, 1); /* cvttss2si */
    edx = (uint32_t)recomp_cvt_si32((double)MEMF(esp + 0x3C), g_mxcsr, 1); /* cvttss2si */
    PUSH32(esp, eax);
    PUSH32(esp, 0x5AC6D8);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    SET_LO8(ecx, 0x81);
    PUSH32(esp, 0x0001354Cu); RECOMP_ABI_CALL(0x001F25F0u, sub_001F25F0); /* call 0x001F25F0 */

loc_0001354C: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0001354F: ;
    ecx = MEM32(esp + 0xB4);
    edx = MEM32(ecx + 0x10);
    eax = MEM32(esp + 0x34);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    MEM32(esp + 0x10) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_0001326A; /* jl: less (signed <) */

loc_0001356A: ;
    ebp = ecx;

loc_0001356C: ;
    edx = MEM32(ebp + 0xC);
    eax = MEM32(edx + 4);
    ecx = MEM32(ebp + 0x10);
    SET_LO8(ebx, MEM8(eax + 0x1D));
    edi = ebp + 8;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00013595; /* jne: not equal / not zero */

loc_00013580: ;
    _fa = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0xC), ecx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0001358A; /* jge: greater or equal (signed >=) */

loc_00013585: ;
    eax = MEM32(eax + 8);
    goto loc_0001358E;

loc_0001358A: ;
    edx = eax;
    eax = MEM32(eax);

loc_0001358E: ;
    SET_LO8(ebx, MEM8(eax + 0x1D));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00013580; /* je: equal / zero */

loc_00013595: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(edi + 4) (32-bit) */
    eax = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_000135A1; /* je: equal / zero */

loc_0001359C: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(edx + 0xC) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000135C7; /* jge: greater or equal (signed >=) */

loc_000135A1: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = eax;
    MEM32(esp + 0x24) = ecx;
    MEM32(esp + 0x28) = eax;
    MEM32(esp + 0x2C) = esi;
    MEM32(esp + 0x30) = eax;
    PUSH32(esp, edx);
    eax = esp + 0x28;
    esi = esp + 0x3C;
    ecx = edi;
    PUSH32(esp, 0x000135C5u); RECOMP_ABI_CALL(0x000136E0u, sub_000136E0); /* call 0x000136E0 */

loc_000135C5: ;
    eax = MEM32(eax);

loc_000135C7: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0);
    PUSH32(esp, 0x43480000);
    PUSH32(esp, 0xFF);
    PUSH32(esp, 5);
    PUSH32(esp, 0);
    ecx = eax + 0x10;
    PUSH32(esp, 0);
    eax = esp + 0x48;
    MEMF(esp + 0x48) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x4C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x50) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00013611u); RECOMP_ABI_CALL(0x00141FC0u, sub_00141FC0); /* call 0x00141FC0 */

loc_00013611: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0);
    ecx = MEM32(esp + 0xF4);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0);
    PUSH32(esp, 0x43480000);
    PUSH32(esp, 0xFF);
    PUSH32(esp, 5);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    eax = esp + 0x7C;
    MEMF(esp + 0x7C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x80) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x84) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00013665u); RECOMP_ABI_CALL(0x00141FC0u, sub_00141FC0); /* call 0x00141FC0 */

loc_00013665: ;
    ecx = MEM32(ebp + 0x1C);
    eax = ebp + 0x1C;
    _fb = (uint32_t)(0x68) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x68;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00013678; /* je: equal / zero */

loc_00013673: ;
    PUSH32(esp, 0x00013678u); RECOMP_ABI_CALL(0x00013690u, sub_00013690); /* call 0x00013690 */

loc_00013678: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_0001367C: ;
    _fb = (uint32_t)(0xA0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xA0;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00013690
 * Original: 0x00013690 - 0x000136DA (74 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00013690(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00013690: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = eax;
    PUSH32(esp, esi);
    eax = edi;
    PUSH32(esp, 0x0001369Eu); RECOMP_ABI_CALL(0x00013B80u, sub_00013B80); /* call 0x00013B80 */

loc_0001369E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(edi + 4) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000136AA; /* je: equal / zero */

loc_000136A3: ;
    ecx = MEM32(esi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(eax + 0xC) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000136D2; /* jge: greater or equal (signed >=) */

loc_000136AA: ;
    esi = MEM32(esi);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = ecx;
    MEM32(esp + 8) = esi;
    MEM32(esp + 0xC) = ecx;
    MEM32(esp + 0x14) = ecx;
    PUSH32(esp, eax);
    eax = esp + 0xC;
    esi = esp + 8;
    ecx = edi;
    MEM32(esp + 0x14) = edx;
    PUSH32(esp, 0x000136D0u); RECOMP_ABI_CALL(0x000136E0u, sub_000136E0); /* call 0x000136E0 */

loc_000136D0: ;
    eax = MEM32(eax);

loc_000136D2: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000136E0
 * Original: 0x000136E0 - 0x00013822 (322 bytes, 138 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000136E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000136E0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = ecx;
    ebx = eax;
    eax = MEM32(edi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    eax = MEM32(edi + 4);
    if (CMP_NE(_fa, _fb)) goto loc_00013706; /* jne: not equal / not zero */

loc_000136F3: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000136FCu); RECOMP_ABI_CALL(0x000139D0u, sub_000139D0); /* call 0x000139D0 */

loc_000136FC: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_00013706: ;
    ecx = MEM32(eax);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x18);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00013734; /* jne: not equal / not zero */

loc_00013711: ;
    eax = MEM32(ebx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + 0xC) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00013809; /* jge: greater or equal (signed >=) */

loc_0001371C: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    eax = ebp;
    ecx = edi;
    PUSH32(esp, 0x00013729u); RECOMP_ABI_CALL(0x000139D0u, sub_000139D0); /* call 0x000139D0 */

loc_00013729: ;
    POP32(esp, ebp);
    POP32(esp, edi);
    eax = esi;
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_00013734: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0001375C; /* jne: not equal / not zero */

loc_00013738: ;
    eax = MEM32(eax + 8);
    ecx = MEM32(eax + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(ebx) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00013809; /* jge: greater or equal (signed >=) */

loc_00013746: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x00013751u); RECOMP_ABI_CALL(0x000139D0u, sub_000139D0); /* call 0x000139D0 */

loc_00013751: ;
    POP32(esp, ebp);
    POP32(esp, edi);
    eax = esi;
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_0001375C: ;
    eax = MEM32(ebx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + 0xC) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000137B0; /* jge: greater or equal (signed >=) */

loc_00013763: ;
    edx = esp + 0x18;
    MEM32(esp + 0x18) = ebp;
    PUSH32(esp, 0x00013770u); RECOMP_ABI_CALL(0x00013BB0u, sub_00013BB0); /* call 0x00013BB0 */

loc_00013770: ;
    eax = MEM32(esp + 0x18);
    ecx = MEM32(ebx);
    _fa = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0xC), ecx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000137B0; /* jge: greater or equal (signed >=) */

loc_0001377B: ;
    edx = MEM32(eax + 8);
    SET_LO8(ecx, MEM8(edx + 0x1D));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    PUSH32(esp, ebx);
    ecx = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_0001379B; /* je: equal / zero */

loc_00013788: ;
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00013790u); RECOMP_ABI_CALL(0x000139D0u, sub_000139D0); /* call 0x000139D0 */

loc_00013790: ;
    POP32(esp, ebp);
    POP32(esp, edi);
    eax = esi;
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_0001379B: ;
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    eax = ebp;
    PUSH32(esp, 0x000137A5u); RECOMP_ABI_CALL(0x000139D0u, sub_000139D0); /* call 0x000139D0 */

loc_000137A5: ;
    POP32(esp, ebp);
    POP32(esp, edi);
    eax = esi;
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_000137B0: ;
    eax = MEM32(ebx);
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00013809; /* jge: greater or equal (signed >=) */

loc_000137B7: ;
    edx = esp + 0x18;
    MEM32(esp + 0x18) = ebp;
    PUSH32(esp, 0x000137C4u); RECOMP_ABI_CALL(0x00014260u, sub_00014260); /* call 0x00014260 */

loc_000137C4: ;
    eax = MEM32(esp + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(edi + 4) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000137D4; /* je: equal / zero */

loc_000137CD: ;
    ecx = MEM32(ebx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(eax + 0xC) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00013809; /* jge: greater or equal (signed >=) */

loc_000137D4: ;
    ecx = MEM32(ebp + 8);
    SET_LO8(edx, MEM8(ecx + 0x1D));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    ecx = edi;
    PUSH32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_000137F6; /* je: equal / zero */

loc_000137E1: ;
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    eax = ebp;
    PUSH32(esp, 0x000137EBu); RECOMP_ABI_CALL(0x000139D0u, sub_000139D0); /* call 0x000139D0 */

loc_000137EB: ;
    POP32(esp, ebp);
    POP32(esp, edi);
    eax = esi;
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_000137F6: ;
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000137FEu); RECOMP_ABI_CALL(0x000139D0u, sub_000139D0); /* call 0x000139D0 */

loc_000137FE: ;
    POP32(esp, ebp);
    POP32(esp, edi);
    eax = esi;
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_00013809: ;
    PUSH32(esp, edi);
    edi = esp + 0x10;
    PUSH32(esp, 0x00013813u); RECOMP_ABI_CALL(0x00013890u, sub_00013890); /* call 0x00013890 */

loc_00013813: ;
    edx = MEM32(eax);
    POP32(esp, ebp);
    POP32(esp, edi);
    MEM32(esi) = edx;
    eax = esi;
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00013830
 * Original: 0x00013830 - 0x0001388D (93 bytes, 37 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00013830(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00013830: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    SET_LO8(eax, MEM8(edi + 0x1D));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    ebx = ecx;
    esi = edi;
    if (CMP_NE(_fa, _fb)) goto loc_00013887; /* jne: not equal / not zero */

loc_00013842: ;
    eax = MEM32(esi + 8);
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0x0001384Du); RECOMP_ABI_CALL(0x00013830u, sub_00013830); /* call 0x00013830 */

loc_0001384D: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    esi = MEM32(esi);
    if (CMP_EQ(_fa, _fb)) goto loc_0001387E; /* je: equal / zero */

loc_00013853: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00013859u); RECOMP_ABI_CALL(0x0042C911u, sub_0042C911); /* call 0x0042C911 */

loc_00013859: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0001387E; /* jne: not equal / not zero */

loc_0001385D: ;
    eax = MEM32(0x7FA490);
    edx = MEM32(0x7FA4B4);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, edi);
    MEM32(0x7FA490) = eax;
    MEM32(0x7FA4B4) = edx;
    PUSH32(esp, 0x0001387Bu); RECOMP_ABI_CALL(0x003E7080u, sub_003E7080); /* call 0x003E7080 */

loc_0001387B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0001387E: ;
    SET_LO8(eax, MEM8(esi + 0x1D));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    edi = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_00013842; /* je: equal / zero */

loc_00013887: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00013890
 * Original: 0x00013890 - 0x00013945 (181 bytes, 75 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00013890(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00013890: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 4);
    eax = MEM32(esi + 4);
    SET_LO8(edx, MEM8(eax + 0x1D));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    SET_LO8(ecx, 1);
    MEM8(esp + 8) = LO8(ecx);
    if (CMP_NE(_fa, _fb)) goto loc_000138CD; /* jne: not equal / not zero */

loc_000138AA: ;
    edx = MEM32(ebx);
    /* nop */

loc_000138B0: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(eax + 0xC) (32-bit) */
    SET_LO8(ecx, (CMP_L(_fas, _fbs)) ? 1 : 0); /* setl */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    esi = eax;
    MEM8(esp + 8) = LO8(ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_000138C4; /* je: equal / zero */

loc_000138C0: ;
    eax = MEM32(eax);
    goto loc_000138C7;

loc_000138C4: ;
    eax = MEM32(eax + 8);

loc_000138C7: ;
    _fa = (uint32_t)(MEM8(eax + 0x1D)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x1D), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000138B0; /* je: equal / zero */

loc_000138CD: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    eax = esi;
    MEM32(esp + 0x10) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0001390C; /* je: equal / zero */

loc_000138D7: ;
    eax = MEM32(ebp + 4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(eax) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000138FF; /* jne: not equal / not zero */

loc_000138DE: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 1);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    eax = esi;
    ecx = ebp;
    PUSH32(esp, 0x000138EFu); RECOMP_ABI_CALL(0x000139D0u, sub_000139D0); /* call 0x000139D0 */

loc_000138EF: ;
    edx = MEM32(eax);
    POP32(esp, esi);
    MEM32(edi) = edx;
    MEM8(edi + 4) = 1;
    eax = edi;
    POP32(esp, ebp);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

loc_000138FF: ;
    edx = esp + 0x10;
    PUSH32(esp, 0x00013908u); RECOMP_ABI_CALL(0x00013BB0u, sub_00013BB0); /* call 0x00013BB0 */

loc_00013908: ;
    eax = MEM32(esp + 0x10);

loc_0001390C: ;
    ecx = MEM32(eax + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(ebx) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00013937; /* jge: greater or equal (signed >=) */

loc_00013913: ;
    edx = MEM32(esp + 8);
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    eax = esi;
    ecx = ebp;
    PUSH32(esp, 0x00013927u); RECOMP_ABI_CALL(0x000139D0u, sub_000139D0); /* call 0x000139D0 */

loc_00013927: ;
    ecx = MEM32(eax);
    POP32(esp, esi);
    MEM32(edi) = ecx;
    MEM8(edi + 4) = 1;
    eax = edi;
    POP32(esp, ebp);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

loc_00013937: ;
    POP32(esp, esi);
    MEM32(edi) = eax;
    MEM8(edi + 4) = 0;
    eax = edi;
    POP32(esp, ebp);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00013950
 * Original: 0x00013950 - 0x000139CA (122 bytes, 48 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00013950(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00013950: ;
    ecx = MEM32(esi + 4);
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx) (32-bit) */
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x10);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    if (CMP_NE(_fa, _fb)) goto loc_0001399B; /* jne: not equal / not zero */

loc_00013965: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0001399B; /* jne: not equal / not zero */

loc_00013969: ;
    eax = MEM32(ecx + 4);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00013974u); RECOMP_ABI_CALL(0x00013830u, sub_00013830); /* call 0x00013830 */

loc_00013974: ;
    eax = MEM32(esi + 4);
    MEM32(eax + 4) = eax;
    eax = MEM32(esi + 4);
    MEM32(esi + 8) = 0;
    MEM32(eax) = eax;
    eax = MEM32(esi + 4);
    MEM32(eax + 8) = eax;
    ecx = MEM32(esi + 4);
    edx = MEM32(ecx);
    MEM32(ebp) = edx;
    eax = ebp;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

loc_0001399B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000139C0; /* je: equal / zero */

loc_0001399F: ;
    PUSH32(esp, edi);

loc_000139A0: ;
    edx = esp + 0x14;
    edi = eax;
    PUSH32(esp, 0x000139ABu); RECOMP_ABI_CALL(0x00014260u, sub_00014260); /* call 0x00014260 */

loc_000139AB: ;
    PUSH32(esp, edi);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000139B7u); RECOMP_ABI_CALL(0x00013CD0u, sub_00013CD0); /* call 0x00013CD0 */

loc_000139B7: ;
    eax = MEM32(esp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000139A0; /* jne: not equal / not zero */

loc_000139BF: ;
    POP32(esp, edi);

loc_000139C0: ;
    MEM32(ebp) = eax;
    eax = ebp;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_000139D0
 * Original: 0x000139D0 - 0x00013B74 (420 bytes, 144 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000139D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000139D0: ;
    _fb = (uint32_t)(0x44) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x44;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    esi = eax;
    _fa = (uint32_t)(MEM32(edi + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFE) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 8), 0xFFFFFFE (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00013A4C; /* jb: below (unsigned <) */

loc_000139E2: ;
    PUSH32(esp, 0x13);
    edi = 0xF;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x5AC6C4);
    ecx = esp + 0x10;
    MEM32(esp + 0x28) = edi;
    MEM32(esp + 0x24) = esi;
    MEM8(esp + 0x14) = 0;
    PUSH32(esp, 0x00013A06u); RECOMP_ABI_CALL(0x000143C0u, sub_000143C0); /* call 0x000143C0 */

loc_00013A06: ;
    ecx = esp + 0x24;
    PUSH32(esp, 0x00013A0Fu); RECOMP_ABI_CALL(0x0046E531u, sub_0046E531); /* call 0x0046E531 */

loc_00013A0F: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, esi);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    ecx = esp + 0x3C;
    MEM32(esp + 0x30) = 0x5AC69C;
    MEM32(esp + 0x54) = edi;
    MEM32(esp + 0x50) = esi;
    MEM8(esp + 0x40) = 0;
    PUSH32(esp, 0x00013A35u); RECOMP_ABI_CALL(0x000144B0u, sub_000144B0); /* call 0x000144B0 */

loc_00013A35: ;
    PUSH32(esp, 0x64B640);
    ecx = esp + 0x28;
    PUSH32(esp, ecx);
    MEM32(esp + 0x2C) = 0x5AC694;
    PUSH32(esp, 0x00013A4Cu); RECOMP_ABI_CALL(0x004720B3u, sub_004720B3); /* call 0x004720B3 */

loc_00013A4C: ;
    edx = MEM32(esp + 0x58);
    eax = MEM32(edi + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00013A5Fu); RECOMP_ABI_CALL(0x00014160u, sub_00014160); /* call 0x00014160 */

loc_00013A5F: ;
    ebx = MEM32(edi + 8);
    ecx = eax;
    eax = MEM32(edi + 4);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    MEM32(esp + 0x5C) = ecx;
    MEM32(edi + 8) = ebx;
    if (CMP_NE(_fa, _fb)) goto loc_00013A83; /* jne: not equal / not zero */

loc_00013A73: ;
    MEM32(eax + 4) = ecx;
    eax = MEM32(edi + 4);
    MEM32(eax) = ecx;
    edx = MEM32(edi + 4);
    MEM32(edx + 8) = ecx;
    goto loc_00013AA6;

loc_00013A83: ;
    SET_LO8(eax, MEM8(esp + 0x58));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00013A98; /* je: equal / zero */

loc_00013A8B: ;
    MEM32(esi) = ecx;
    eax = MEM32(edi + 4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(eax) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00013AA6; /* jne: not equal / not zero */

loc_00013A94: ;
    MEM32(eax) = ecx;
    goto loc_00013AA6;

loc_00013A98: ;
    MEM32(esi + 8) = ecx;
    eax = MEM32(edi + 4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(eax + 8) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00013AA6; /* jne: not equal / not zero */

loc_00013AA3: ;
    MEM32(eax + 8) = ecx;

loc_00013AA6: ;
    edx = MEM32(ecx + 4);
    _fa = (uint32_t)(MEM8(edx + 0x1C)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edx + 0x1C), 0 (8-bit) */
    eax = ecx + 4;
    esi = ecx;
    SET_LO8(ebx, 1);
    if (CMP_NE(_fa, _fb)) goto loc_00013B5C; /* jne: not equal / not zero */

loc_00013ABA: ;
    PUSH32(esp, ebp);
    goto loc_00013AC0;

    /* nop */

loc_00013AC0: ;
    ecx = MEM32(eax);
    ebp = MEM32(ecx + 4);
    edx = MEM32(ebp);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00013B18; /* jne: not equal / not zero */

loc_00013ACC: ;
    edx = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM8(edx + 0x1C)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edx + 0x1C), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00013AED; /* jne: not equal / not zero */

loc_00013AD5: ;
    ecx = MEM32(eax);
    MEM8(ecx + 0x1C) = LO8(ebx);
    MEM8(edx + 0x1C) = LO8(ebx);
    edx = MEM32(eax);
    ecx = MEM32(edx + 4);
    MEM8(ecx + 0x1C) = 0;
    edx = MEM32(eax);
    esi = MEM32(edx + 4);
    goto loc_00013B46;

loc_00013AED: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(ecx + 8) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00013AFA; /* jne: not equal / not zero */

loc_00013AF2: ;
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x00013AFAu); RECOMP_ABI_CALL(0x00013FC0u, sub_00013FC0); /* call 0x00013FC0 */

loc_00013AFA: ;
    eax = MEM32(esi + 4);
    MEM8(eax + 0x1C) = LO8(ebx);
    ecx = MEM32(esi + 4);
    edx = MEM32(ecx + 4);
    MEM8(edx + 0x1C) = 0;
    eax = MEM32(esi + 4);
    ecx = MEM32(eax + 4);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00013B16u); RECOMP_ABI_CALL(0x00014040u, sub_00014040); /* call 0x00014040 */

loc_00013B16: ;
    goto loc_00013B46;

loc_00013B18: ;
    _fa = (uint32_t)(MEM8(edx + 0x1C)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edx + 0x1C), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00013AD5; /* je: equal / zero */

loc_00013B1E: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(ecx) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00013B2A; /* jne: not equal / not zero */

loc_00013B22: ;
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x00013B2Au); RECOMP_ABI_CALL(0x00014040u, sub_00014040); /* call 0x00014040 */

loc_00013B2A: ;
    eax = MEM32(esi + 4);
    MEM8(eax + 0x1C) = LO8(ebx);
    ecx = MEM32(esi + 4);
    edx = MEM32(ecx + 4);
    MEM8(edx + 0x1C) = 0;
    eax = MEM32(esi + 4);
    ecx = MEM32(eax + 4);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00013B46u); RECOMP_ABI_CALL(0x00013FC0u, sub_00013FC0); /* call 0x00013FC0 */

loc_00013B46: ;
    ecx = MEM32(esi + 4);
    SET_LO8(edx, MEM8(ecx + 0x1C));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    eax = esi + 4;
    if (CMP_EQ(_fa, _fb)) goto loc_00013AC0; /* je: equal / zero */

loc_00013B57: ;
    ecx = MEM32(esp + 0x60);
    POP32(esp, ebp);

loc_00013B5C: ;
    edx = MEM32(edi + 4);
    eax = MEM32(edx + 4);
    MEM8(eax + 0x1C) = LO8(ebx);
    eax = MEM32(esp + 0x54);
    POP32(esp, ebx);
    POP32(esp, edi);
    MEM32(eax) = ecx;
    POP32(esp, esi);
    _fb = (uint32_t)(0x44) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x44;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00013B80
 * Original: 0x00013B80 - 0x00013BAD (45 bytes, 19 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00013B80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00013B80: ;
    eax = MEM32(eax + 4);
    ecx = MEM32(eax + 4);
    SET_LO8(edx, MEM8(ecx + 0x1D));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00013BAA; /* jne: not equal / not zero */

loc_00013B8D: ;
    edx = MEM32(esp + 4);
    edx = MEM32(edx);
    PUSH32(esp, ebx);

loc_00013B94: ;
    _fa = (uint32_t)(MEM32(ecx + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0xC), edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00013B9E; /* jge: greater or equal (signed >=) */

loc_00013B99: ;
    ecx = MEM32(ecx + 8);
    goto loc_00013BA2;

loc_00013B9E: ;
    eax = ecx;
    ecx = MEM32(ecx);

loc_00013BA2: ;
    SET_LO8(ebx, MEM8(ecx + 0x1D));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00013B94; /* je: equal / zero */

loc_00013BA9: ;
    POP32(esp, ebx);

loc_00013BAA: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00013BB0
 * Original: 0x00013BB0 - 0x00013C0D (93 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00013BB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00013BB0: ;
    eax = MEM32(edx);
    SET_LO8(ecx, MEM8(eax + 0x1D));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00013BBF; /* je: equal / zero */

loc_00013BB9: ;
    eax = MEM32(eax + 8);
    MEM32(edx) = eax;
    esp += 4; return; /* ret */

loc_00013BBF: ;
    ecx = MEM32(eax);
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(ecx + 0x1D));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00013BE3; /* jne: not equal / not zero */

loc_00013BC9: ;
    eax = MEM32(ecx + 8);
    SET_LO8(ebx, MEM8(eax + 0x1D));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00013BDF; /* jne: not equal / not zero */

loc_00013BD3: ;
    ecx = eax;
    eax = MEM32(ecx + 8);
    SET_LO8(ebx, MEM8(eax + 0x1D));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00013BD3; /* je: equal / zero */

loc_00013BDF: ;
    MEM32(edx) = ecx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00013BE3: ;
    eax = MEM32(eax + 4);
    SET_LO8(ecx, MEM8(eax + 0x1D));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00013C0B; /* jne: not equal / not zero */

loc_00013BED: ;
    /* nop */

loc_00013BF0: ;
    ecx = MEM32(edx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(eax) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00013C02; /* jne: not equal / not zero */

loc_00013BF6: ;
    MEM32(edx) = eax;
    eax = MEM32(eax + 4);
    SET_LO8(ecx, MEM8(eax + 0x1D));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00013BF0; /* je: equal / zero */

loc_00013C02: ;
    SET_LO8(ecx, MEM8(eax + 0x1D));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00013C0B; /* jne: not equal / not zero */

loc_00013C09: ;
    MEM32(edx) = eax;

loc_00013C0B: ;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00013C10
 * Original: 0x00013C10 - 0x00013C4F (63 bytes, 22 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00013C10(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00013C10: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x00013C1Eu); RECOMP_ABI_CALL(0x0046E587u, sub_0046E587); /* call 0x0046E587 */

loc_00013C1E: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0xFFFFFFFFu);
    ecx = esi + 0xC;
    MEM32(esi) = 0x5AC69C;
    PUSH32(esp, eax);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0xC;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx + 0x18) = 0xF;
    MEM32(ecx + 0x14) = eax;
    PUSH32(esp, edi);
    MEM8(ecx + 4) = LO8(eax);
    PUSH32(esp, 0x00013C42u); RECOMP_ABI_CALL(0x000144B0u, sub_000144B0); /* call 0x000144B0 */

loc_00013C42: ;
    POP32(esp, edi);
    MEM32(esi) = 0x5AC694;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00013C50
 * Original: 0x00013C50 - 0x00013C89 (57 bytes, 21 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00013C50(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00013C50: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x00013C5Eu); RECOMP_ABI_CALL(0x0046E587u, sub_0046E587); /* call 0x0046E587 */

loc_00013C5E: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0xFFFFFFFFu);
    ecx = esi + 0xC;
    MEM32(esi) = 0x5AC69C;
    PUSH32(esp, eax);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0xC;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx + 0x18) = 0xF;
    MEM32(ecx + 0x14) = eax;
    PUSH32(esp, edi);
    MEM8(ecx + 4) = LO8(eax);
    PUSH32(esp, 0x00013C82u); RECOMP_ABI_CALL(0x000144B0u, sub_000144B0); /* call 0x000144B0 */

loc_00013C82: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00013C86
 * Original: 0x00013C86 - 0x00013C89 (3 bytes, 1 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00013C86(void)
{

loc_00013C86: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00013C90
 * Original: 0x00013C90 - 0x00013CC9 (57 bytes, 23 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00013C90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00013C90: ;
    edx = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = ecx;
    eax = edx;
    PUSH32(esp, edi);
    MEM32(esi + 0x18) = 0xF;
    MEM32(esi + 0x14) = 0;
    MEM8(esi + 4) = 0;
    edi = eax + 1;
    /* nop */

loc_00013CB0: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00013CB0; /* jne: not equal / not zero */

loc_00013CB7: ;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x00013CC2u); RECOMP_ABI_CALL(0x000143C0u, sub_000143C0); /* call 0x000143C0 */

loc_00013CC2: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00013CD0
 * Original: 0x00013CD0 - 0x00013FB4 (740 bytes, 257 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00013CD0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00013CD0: ;
    eax = MEM32(esp + 0xC);
    SET_LO8(ecx, MEM8(eax + 0x1D));
    _fb = (uint32_t)(0x44) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x44;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_00013D4A; /* je: equal / zero */

loc_00013CE0: ;
    PUSH32(esp, 0x1B);
    edi = 0xF;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x5AC6A8);
    ecx = esp + 0x10;
    MEM32(esp + 0x28) = edi;
    MEM32(esp + 0x24) = esi;
    MEM8(esp + 0x14) = 0;
    PUSH32(esp, 0x00013D04u); RECOMP_ABI_CALL(0x000143C0u, sub_000143C0); /* call 0x000143C0 */

loc_00013D04: ;
    ecx = esp + 0x24;
    PUSH32(esp, 0x00013D0Du); RECOMP_ABI_CALL(0x0046E531u, sub_0046E531); /* call 0x0046E531 */

loc_00013D0D: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, esi);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    ecx = esp + 0x3C;
    MEM32(esp + 0x30) = 0x5AC69C;
    MEM32(esp + 0x54) = edi;
    MEM32(esp + 0x50) = esi;
    MEM8(esp + 0x40) = 0;
    PUSH32(esp, 0x00013D33u); RECOMP_ABI_CALL(0x000144B0u, sub_000144B0); /* call 0x000144B0 */

loc_00013D33: ;
    PUSH32(esp, 0x64B604);
    ecx = esp + 0x28;
    PUSH32(esp, ecx);
    MEM32(esp + 0x2C) = 0x5AC68C;
    PUSH32(esp, 0x00013D4Au); RECOMP_ABI_CALL(0x004720B3u, sub_004720B3); /* call 0x004720B3 */

loc_00013D4A: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    edx = esp + 0x60;
    ebp = eax;
    PUSH32(esp, 0x00013D57u); RECOMP_ABI_CALL(0x00014260u, sub_00014260); /* call 0x00014260 */

loc_00013D57: ;
    eax = MEM32(ebp);
    SET_LO8(ecx, MEM8(eax + 0x1D));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00013D66; /* je: equal / zero */

loc_00013D61: ;
    edi = MEM32(ebp + 8);
    goto loc_00013D7F;

loc_00013D66: ;
    edx = MEM32(ebp + 8);
    SET_LO8(ecx, MEM8(edx + 0x1D));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00013D74; /* je: equal / zero */

loc_00013D70: ;
    edi = eax;
    goto loc_00013D7F;

loc_00013D74: ;
    ecx = MEM32(esp + 0x60);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebp (32-bit) */
    edi = MEM32(ecx + 8);
    if (CMP_NE(_fa, _fb)) goto loc_00013DED; /* jne: not equal / not zero */

loc_00013D7F: ;
    SET_LO8(eax, MEM8(edi + 0x1D));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    esi = MEM32(ebp + 4);
    if (CMP_NE(_fa, _fb)) goto loc_00013D8C; /* jne: not equal / not zero */

loc_00013D89: ;
    MEM32(edi + 4) = esi;

loc_00013D8C: ;
    edx = MEM32(esp + 0x58);
    eax = MEM32(edx + 4);
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 4), ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00013D9D; /* jne: not equal / not zero */

loc_00013D98: ;
    MEM32(eax + 4) = edi;
    goto loc_00013DA8;

loc_00013D9D: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00013DA5; /* jne: not equal / not zero */

loc_00013DA1: ;
    MEM32(esi) = edi;
    goto loc_00013DA8;

loc_00013DA5: ;
    MEM32(esi + 8) = edi;

loc_00013DA8: ;
    ebx = MEM32(edx + 4);
    _fa = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx), ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00013DC7; /* jne: not equal / not zero */

loc_00013DAF: ;
    SET_LO8(eax, MEM8(edi + 0x1D));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00013DBA; /* je: equal / zero */

loc_00013DB6: ;
    eax = esi;
    goto loc_00013DC5;

loc_00013DBA: ;
    eax = edi;
    PUSH32(esp, 0x00013DC1u); RECOMP_ABI_CALL(0x00014240u, sub_00014240); /* call 0x00014240 */

loc_00013DC1: ;
    edx = MEM32(esp + 0x58);

loc_00013DC5: ;
    MEM32(ebx) = eax;

loc_00013DC7: ;
    ebx = MEM32(edx + 4);
    _fa = (uint32_t)(MEM32(ebx + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 8), ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00013E4E; /* jne: not equal / not zero */

loc_00013DCF: ;
    SET_LO8(eax, MEM8(edi + 0x1D));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00013DDD; /* je: equal / zero */

loc_00013DD6: ;
    eax = esi;
    MEM32(ebx + 8) = eax;
    goto loc_00013E4E;

loc_00013DDD: ;
    eax = edi;
    PUSH32(esp, 0x00013DE4u); RECOMP_ABI_CALL(0x00014020u, sub_00014020); /* call 0x00014020 */

loc_00013DE4: ;
    edx = MEM32(esp + 0x58);
    MEM32(ebx + 8) = eax;
    goto loc_00013E4E;

loc_00013DED: ;
    MEM32(eax + 4) = ecx;
    eax = MEM32(ebp);
    MEM32(ecx) = eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(ebp + 8) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00013DFE; /* jne: not equal / not zero */

loc_00013DFA: ;
    esi = ecx;
    goto loc_00013E19;

loc_00013DFE: ;
    SET_LO8(eax, MEM8(edi + 0x1D));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    esi = MEM32(ecx + 4);
    if (CMP_NE(_fa, _fb)) goto loc_00013E0B; /* jne: not equal / not zero */

loc_00013E08: ;
    MEM32(edi + 4) = esi;

loc_00013E0B: ;
    MEM32(esi) = edi;
    edx = MEM32(ebp + 8);
    MEM32(ecx + 8) = edx;
    eax = MEM32(ebp + 8);
    MEM32(eax + 4) = ecx;

loc_00013E19: ;
    edx = MEM32(esp + 0x58);
    eax = MEM32(edx + 4);
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 4), ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00013E2A; /* jne: not equal / not zero */

loc_00013E25: ;
    MEM32(eax + 4) = ecx;
    goto loc_00013E38;

loc_00013E2A: ;
    eax = MEM32(ebp + 4);
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00013E35; /* jne: not equal / not zero */

loc_00013E31: ;
    MEM32(eax) = ecx;
    goto loc_00013E38;

loc_00013E35: ;
    MEM32(eax + 8) = ecx;

loc_00013E38: ;
    eax = MEM32(ebp + 4);
    MEM32(ecx + 4) = eax;
    SET_LO8(edx, MEM8(ebp + 0x1C));
    SET_LO8(eax, MEM8(ecx + 0x1C));
    MEM8(ecx + 0x1C) = LO8(edx);
    edx = MEM32(esp + 0x58);
    MEM8(ebp + 0x1C) = LO8(eax);

loc_00013E4E: ;
    SET_LO8(eax, MEM8(ebp + 0x1C));
    SET_LO8(ebx, 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00013F64; /* jne: not equal / not zero */

loc_00013E5B: ;
    eax = MEM32(edx + 4);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(eax + 4) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00013F61; /* je: equal / zero */

loc_00013E67: ;
    _fa = (uint32_t)(MEM8(edi + 0x1C)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi + 0x1C), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00013F61; /* jne: not equal / not zero */

loc_00013E70: ;
    ecx = MEM32(esi);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00013EE3; /* jne: not equal / not zero */

loc_00013E76: ;
    ecx = MEM32(esi + 8);
    SET_LO8(eax, MEM8(ecx + 0x1C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00013E96; /* jne: not equal / not zero */

loc_00013E80: ;
    MEM8(ecx + 0x1C) = LO8(ebx);
    PUSH32(esp, edx);
    ecx = esi;
    MEM8(esi + 0x1C) = 0;
    PUSH32(esp, 0x00013E8Fu); RECOMP_ABI_CALL(0x00013FC0u, sub_00013FC0); /* call 0x00013FC0 */

loc_00013E8F: ;
    ecx = MEM32(esi + 8);
    edx = MEM32(esp + 0x58);

loc_00013E96: ;
    SET_LO8(eax, MEM8(ecx + 0x1D));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00013F19; /* jne: not equal / not zero */

loc_00013E9D: ;
    eax = MEM32(ecx);
    _fa = (uint32_t)(MEM8(eax + 0x1C)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x1C), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00013EAC; /* jne: not equal / not zero */

loc_00013EA4: ;
    eax = MEM32(ecx + 8);
    _fa = (uint32_t)(MEM8(eax + 0x1C)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x1C), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00013F15; /* je: equal / zero */

loc_00013EAC: ;
    eax = MEM32(ecx + 8);
    _fa = (uint32_t)(MEM8(eax + 0x1C)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x1C), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00013ECA; /* jne: not equal / not zero */

loc_00013EB4: ;
    eax = MEM32(ecx);
    MEM8(eax + 0x1C) = LO8(ebx);
    PUSH32(esp, edx);
    MEM8(ecx + 0x1C) = 0;
    PUSH32(esp, 0x00013EC3u); RECOMP_ABI_CALL(0x00014040u, sub_00014040); /* call 0x00014040 */

loc_00013EC3: ;
    ecx = MEM32(esi + 8);
    edx = MEM32(esp + 0x58);

loc_00013ECA: ;
    SET_LO8(eax, MEM8(esi + 0x1C));
    MEM8(ecx + 0x1C) = LO8(eax);
    MEM8(esi + 0x1C) = LO8(ebx);
    ecx = MEM32(ecx + 8);
    MEM8(ecx + 0x1C) = LO8(ebx);
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x00013EE1u); RECOMP_ABI_CALL(0x00013FC0u, sub_00013FC0); /* call 0x00013FC0 */

loc_00013EE1: ;
    goto loc_00013F61;

loc_00013EE3: ;
    SET_LO8(eax, MEM8(ecx + 0x1C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00013EFF; /* jne: not equal / not zero */

loc_00013EEA: ;
    MEM8(ecx + 0x1C) = LO8(ebx);
    PUSH32(esp, edx);
    ecx = esi;
    MEM8(esi + 0x1C) = 0;
    PUSH32(esp, 0x00013EF9u); RECOMP_ABI_CALL(0x00014040u, sub_00014040); /* call 0x00014040 */

loc_00013EF9: ;
    ecx = MEM32(esi);
    edx = MEM32(esp + 0x58);

loc_00013EFF: ;
    SET_LO8(eax, MEM8(ecx + 0x1D));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00013F19; /* jne: not equal / not zero */

loc_00013F06: ;
    eax = MEM32(ecx + 8);
    _fa = (uint32_t)(MEM8(eax + 0x1C)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x1C), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00013F2E; /* jne: not equal / not zero */

loc_00013F0E: ;
    eax = MEM32(ecx);
    _fa = (uint32_t)(MEM8(eax + 0x1C)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x1C), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00013F2E; /* jne: not equal / not zero */

loc_00013F15: ;
    MEM8(ecx + 0x1C) = 0;

loc_00013F19: ;
    ecx = MEM32(edx + 4);
    eax = MEM32(ecx + 4);
    edi = esi;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    esi = MEM32(esi + 4);
    if (CMP_NE(_fa, _fb)) goto loc_00013E67; /* jne: not equal / not zero */

loc_00013F2C: ;
    goto loc_00013F61;

loc_00013F2E: ;
    eax = MEM32(ecx);
    _fa = (uint32_t)(MEM8(eax + 0x1C)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x1C), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00013F4B; /* jne: not equal / not zero */

loc_00013F35: ;
    eax = MEM32(ecx + 8);
    MEM8(eax + 0x1C) = LO8(ebx);
    PUSH32(esp, edx);
    MEM8(ecx + 0x1C) = 0;
    PUSH32(esp, 0x00013F45u); RECOMP_ABI_CALL(0x00013FC0u, sub_00013FC0); /* call 0x00013FC0 */

loc_00013F45: ;
    ecx = MEM32(esi);
    edx = MEM32(esp + 0x58);

loc_00013F4B: ;
    SET_LO8(eax, MEM8(esi + 0x1C));
    MEM8(ecx + 0x1C) = LO8(eax);
    MEM8(esi + 0x1C) = LO8(ebx);
    ecx = MEM32(ecx);
    MEM8(ecx + 0x1C) = LO8(ebx);
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x00013F61u); RECOMP_ABI_CALL(0x00014040u, sub_00014040); /* call 0x00014040 */

loc_00013F61: ;
    MEM8(edi + 0x1C) = LO8(ebx);

loc_00013F64: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x00013F6Au); RECOMP_ABI_CALL(0x0042C911u, sub_0042C911); /* call 0x0042C911 */

loc_00013F6A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00013F91; /* jne: not equal / not zero */

loc_00013F6E: ;
    esi = MEM32(0x7FA490);
    edx = MEM32(0x7FA4B4);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, ebp);
    MEM32(0x7FA490) = esi;
    MEM32(0x7FA4B4) = edx;
    PUSH32(esp, 0x00013F8Eu); RECOMP_ABI_CALL(0x003E7080u, sub_003E7080); /* call 0x003E7080 */

loc_00013F8E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00013F91: ;
    ecx = MEM32(esp + 0x58);
    eax = MEM32(ecx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, ebp);
    POP32(esp, ebx);
    if (CMP_BE(_fa, _fb)) goto loc_00013FA2; /* jbe: below or equal (unsigned <=) */

loc_00013F9E: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(ecx + 8) = eax;

loc_00013FA2: ;
    edx = MEM32(esp + 0x58);
    eax = MEM32(esp + 0x54);
    POP32(esp, edi);
    MEM32(eax) = edx;
    POP32(esp, esi);
    _fb = (uint32_t)(0x44) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x44;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00013FC0
 * Original: 0x00013FC0 - 0x00014011 (81 bytes, 33 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00013FC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00013FC0: ;
    eax = MEM32(ecx + 8);
    edx = MEM32(eax);
    MEM32(ecx + 8) = edx;
    edx = MEM32(eax);
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(edx + 0x1D));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00013FD5; /* jne: not equal / not zero */

loc_00013FD2: ;
    MEM32(edx + 4) = ecx;

loc_00013FD5: ;
    edx = MEM32(ecx + 4);
    MEM32(eax + 4) = edx;
    edx = MEM32(esp + 8);
    edx = MEM32(edx + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(edx + 4) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00013FF3; /* jne: not equal / not zero */

loc_00013FE7: ;
    MEM32(edx + 4) = eax;
    MEM32(eax) = ecx;
    MEM32(ecx + 4) = eax;
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_00013FF3: ;
    edx = MEM32(ecx + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(edx) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00014005; /* jne: not equal / not zero */

loc_00013FFA: ;
    MEM32(edx) = eax;
    MEM32(eax) = ecx;
    MEM32(ecx + 4) = eax;
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_00014005: ;
    MEM32(edx + 8) = eax;
    MEM32(eax) = ecx;
    MEM32(ecx + 4) = eax;
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00014020
 * Original: 0x00014020 - 0x0001403D (29 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00014020(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00014020: ;
    ecx = MEM32(eax + 8);
    SET_LO8(edx, MEM8(ecx + 0x1D));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0001403C; /* jne: not equal / not zero */

loc_0001402A: ;
    /* nop */

loc_00014030: ;
    eax = ecx;
    ecx = MEM32(eax + 8);
    SET_LO8(edx, MEM8(ecx + 0x1D));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00014030; /* je: equal / zero */

loc_0001403C: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00014040
 * Original: 0x00014040 - 0x00014095 (85 bytes, 33 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00014040(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00014040: ;
    eax = MEM32(ecx);
    edx = MEM32(eax + 8);
    MEM32(ecx) = edx;
    edx = MEM32(eax + 8);
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(edx + 0x1D));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00014055; /* jne: not equal / not zero */

loc_00014052: ;
    MEM32(edx + 4) = ecx;

loc_00014055: ;
    edx = MEM32(ecx + 4);
    MEM32(eax + 4) = edx;
    edx = MEM32(esp + 8);
    edx = MEM32(edx + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(edx + 4) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00014074; /* jne: not equal / not zero */

loc_00014067: ;
    MEM32(edx + 4) = eax;
    MEM32(eax + 8) = ecx;
    MEM32(ecx + 4) = eax;
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_00014074: ;
    edx = MEM32(ecx + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(edx + 8) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00014089; /* jne: not equal / not zero */

loc_0001407C: ;
    MEM32(edx + 8) = eax;
    MEM32(eax + 8) = ecx;
    MEM32(ecx + 4) = eax;
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_00014089: ;
    MEM32(edx) = eax;
    MEM32(eax + 8) = ecx;
    MEM32(ecx + 4) = eax;
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000140A0
 * Original: 0x000140A0 - 0x00014136 (150 bytes, 52 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000140A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000140A0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x47F6F0);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(ebp + -16) = esp;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x461);
    PUSH32(esp, 0x606A34);
    PUSH32(esp, 0x20);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000140D4u); RECOMP_ABI_CALL(0x002AF0E0u, sub_002AF0E0); /* call 0x002AF0E0 */

loc_000140D4: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -24) = eax;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ebp + -4) = ebx;
    MEM32(ebp + -32) = ebx;
    MEM32(ebp + -36) = eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000140EB; /* je: equal / zero */

loc_000140E9: ;
    MEM32(eax) = ebx;

loc_000140EB: ;
    edx = 1;
    MEM32(ebp + -20) = edx;
    MEM32(ebp + -40) = ebx;
    ecx = eax + 4;
    MEM32(ebp + -44) = ecx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00014102; /* je: equal / zero */

loc_00014100: ;
    MEM32(ecx) = ebx;

loc_00014102: ;
    MEM32(ebp + -20) = 2;
    MEM32(ebp + -48) = ebx;
    ecx = eax + 8;
    MEM32(ebp + -52) = ecx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00014118; /* je: equal / zero */

loc_00014116: ;
    MEM32(ecx) = ebx;

loc_00014118: ;
    MEM32(ebp + -4) = 0xFFFFFFFFu;
    MEM8(eax + 0x1C) = LO8(edx);
    MEM8(eax + 0x1D) = LO8(ebx);
    ecx = MEM32(ebp + -12);
    MEM32(XBOX_FS_BASE) = ecx;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00014136
 * Original: 0x00014136 - 0x00014160 (42 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00014136(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00014136: ;
    eax = MEM32(ebp + -24);
    MEM32(ebp + -28) = eax;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0001414E; /* je: equal / zero */

loc_00014142: ;
    eax = ebp + -28;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0001414Bu); RECOMP_ABI_CALL(0x002AF1C0u, sub_002AF1C0); /* call 0x002AF1C0 */

loc_0001414B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0001414E: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00014155u); RECOMP_ABI_CALL(0x004720B3u, sub_004720B3); /* call 0x004720B3 */

loc_00014155: ;
    (void)0;
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
 * sub_00014160
 * Original: 0x00014160 - 0x000141DF (127 bytes, 44 insns)
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00014160(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00014160: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x47F6E0);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(ebp + -16) = esp;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x461);
    PUSH32(esp, 0x606A34);
    PUSH32(esp, 0x20);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00014194u); RECOMP_ABI_CALL(0x002AF0E0u, sub_002AF0E0); /* call 0x002AF0E0 */

loc_00014194: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = eax;
    MEM32(ebp + -20) = esi;
    MEM32(ebp + -4) = 0;
    MEM32(ebp + -28) = esi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000141C3; /* je: equal / zero */

loc_000141AA: ;
    eax = MEM32(ebp + 0x18);
    PUSH32(esp, eax);
    ecx = MEM32(ebp + 0x10);
    PUSH32(esp, ecx);
    edx = MEM32(ebp + 0xC);
    PUSH32(esp, edx);
    ecx = MEM32(ebp + 0x14);
    edx = MEM32(ebp + 8);
    eax = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000141C3u); RECOMP_ABI_CALL(0x000142C0u, sub_000142C0); /* call 0x000142C0 */

loc_000141C3: ;
    MEM32(ebp + -4) = 0xFFFFFFFFu;
    eax = esi;
    ecx = MEM32(ebp + -12);
    MEM32(XBOX_FS_BASE) = ecx;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 24; return; /* ret 20 */

}

/**
 * sub_000141DF
 * Original: 0x000141DF - 0x00014240 (97 bytes, 36 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000141DF(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000141DF: ;
    eax = MEM32(ebp + -20);
    MEM32(ebp + -24) = eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000141F5; /* je: equal / zero */

loc_000141E9: ;
    eax = ebp + -24;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000141F2u); RECOMP_ABI_CALL(0x002AF1C0u, sub_002AF1C0); /* call 0x002AF1C0 */

loc_000141F2: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000141F5: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x000141FEu); RECOMP_ABI_CALL(0x004720B3u, sub_004720B3); /* call 0x004720B3 */

loc_000141FE: ;
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x0001420Eu); RECOMP_ABI_CALL(0x0046E587u, sub_0046E587); /* call 0x0046E587 */

loc_0001420E: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0xFFFFFFFFu);
    ecx = esi + 0xC;
    MEM32(esi) = 0x5AC69C;
    PUSH32(esp, eax);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0xC;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx + 0x18) = 0xF;
    MEM32(ecx + 0x14) = eax;
    PUSH32(esp, edi);
    MEM8(ecx + 4) = LO8(eax);
    PUSH32(esp, 0x00014232u); RECOMP_ABI_CALL(0x000144B0u, sub_000144B0); /* call 0x000144B0 */

loc_00014232: ;
    POP32(esp, edi);
    MEM32(esi) = 0x5AC68C;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00014200
 * Original: 0x00014200 - 0x00014240 (64 bytes, 23 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00014200(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00014200: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x0001420Eu); RECOMP_ABI_CALL(0x0046E587u, sub_0046E587); /* call 0x0046E587 */

loc_0001420E: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0xFFFFFFFFu);
    ecx = esi + 0xC;
    MEM32(esi) = 0x5AC69C;
    PUSH32(esp, eax);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0xC;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx + 0x18) = 0xF;
    MEM32(ecx + 0x14) = eax;
    PUSH32(esp, edi);
    MEM8(ecx + 4) = LO8(eax);
    PUSH32(esp, 0x00014232u); RECOMP_ABI_CALL(0x000144B0u, sub_000144B0); /* call 0x000144B0 */

loc_00014232: ;
    POP32(esp, edi);
    MEM32(esi) = 0x5AC68C;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00014240
 * Original: 0x00014240 - 0x0001425C (28 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00014240(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00014240: ;
    ecx = MEM32(eax);
    SET_LO8(edx, MEM8(ecx + 0x1D));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0001425B; /* jne: not equal / not zero */

loc_00014249: ;
    /* nop */

loc_00014250: ;
    eax = ecx;
    ecx = MEM32(eax);
    SET_LO8(edx, MEM8(ecx + 0x1D));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00014250; /* je: equal / zero */

loc_0001425B: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00014260
 * Original: 0x00014260 - 0x000142B7 (87 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00014260(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00014260: ;
    eax = MEM32(edx);
    SET_LO8(ecx, MEM8(eax + 0x1D));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000142B6; /* jne: not equal / not zero */

loc_00014269: ;
    ecx = MEM32(eax + 8);
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(ecx + 0x1D));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0001428F; /* jne: not equal / not zero */

loc_00014274: ;
    eax = MEM32(ecx);
    SET_LO8(ebx, MEM8(eax + 0x1D));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0001428B; /* jne: not equal / not zero */

loc_0001427D: ;
    /* nop */

loc_00014280: ;
    ecx = eax;
    eax = MEM32(ecx);
    SET_LO8(ebx, MEM8(eax + 0x1D));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00014280; /* je: equal / zero */

loc_0001428B: ;
    MEM32(edx) = ecx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0001428F: ;
    eax = MEM32(eax + 4);
    SET_LO8(ecx, MEM8(eax + 0x1D));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000142B3; /* jne: not equal / not zero */

loc_00014299: ;
    /* nop */

loc_000142A0: ;
    ecx = MEM32(edx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(eax + 8) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000142B3; /* jne: not equal / not zero */

loc_000142A7: ;
    MEM32(edx) = eax;
    eax = MEM32(eax + 4);
    SET_LO8(ecx, MEM8(eax + 0x1D));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000142A0; /* je: equal / zero */

loc_000142B3: ;
    MEM32(edx) = eax;
    POP32(esp, ebx);

loc_000142B6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000142C0
 * Original: 0x000142C0 - 0x000142F9 (57 bytes, 20 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000142C0(void)
{

loc_000142C0: ;
    MEM32(eax) = edx;
    edx = MEM32(esp + 4);
    MEM32(eax + 4) = edx;
    edx = MEM32(esp + 8);
    MEM32(eax + 8) = edx;
    PUSH32(esp, esi);
    esi = MEM32(ecx);
    edx = eax + 0xC;
    MEM32(edx) = esi;
    esi = MEM32(ecx + 4);
    MEM32(edx + 4) = esi;
    esi = MEM32(ecx + 8);
    MEM32(edx + 8) = esi;
    ecx = MEM32(ecx + 0xC);
    MEM32(edx + 0xC) = ecx;
    SET_LO8(edx, MEM8(esp + 0x10));
    MEM8(eax + 0x1C) = LO8(edx);
    MEM8(eax + 0x1D) = 0;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00014300
 * Original: 0x00014300 - 0x0001432C (44 bytes, 14 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00014300(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00014300: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x5AC68C;
    PUSH32(esp, 0x0001430Eu); RECOMP_ABI_CALL(0x000148A0u, sub_000148A0); /* call 0x000148A0 */

loc_0001430E: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00014326; /* je: equal / zero */

loc_00014315: ;
    eax = esp + 8;
    PUSH32(esp, eax);
    MEM32(esp + 0xC) = esi;
    PUSH32(esp, 0x00014323u); RECOMP_ABI_CALL(0x002AF1C0u, sub_002AF1C0); /* call 0x002AF1C0 */

loc_00014323: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00014326: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00014330
 * Original: 0x00014330 - 0x0001433E (14 bytes, 6 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00014330(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00014330: ;
    _fa = (uint32_t)(MEM32(ecx + 0x24)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x24), 0x10 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0001433A; /* jb: below (unsigned <) */

loc_00014336: ;
    eax = MEM32(ecx + 0x10);
    esp += 4; return; /* ret */

loc_0001433A: ;
    eax = ecx + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_00014340
 * Original: 0x00014340 - 0x0001434B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00014340(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00014340: ;
    MEM32(ecx) = 0x5AC68C;
    g_seh_ebp = ebp; sub_000148A0(); return; /* tail jmp 0x000148A0 */

}

/**
 * sub_00014350
 * Original: 0x00014350 - 0x00014383 (51 bytes, 17 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00014350(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00014350: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00014358u); RECOMP_ABI_CALL(0x0046E531u, sub_0046E531); /* call 0x0046E531 */

loc_00014358: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = esi + 0xC;
    MEM32(esi) = 0x5AC69C;
    PUSH32(esp, 0xFFFFFFFFu);
    MEM32(ecx + 0x14) = eax;
    MEM32(ecx + 0x18) = 0xF;
    PUSH32(esp, eax);
    MEM8(ecx + 4) = LO8(eax);
    eax = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0001437Du); RECOMP_ABI_CALL(0x000144B0u, sub_000144B0); /* call 0x000144B0 */

loc_0001437D: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00014390
 * Original: 0x00014390 - 0x000143B5 (37 bytes, 18 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00014390(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00014390: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = esi;
    PUSH32(esp, edi);
    edi = eax + 1;
    goto loc_000143A0;

    /* nop */

loc_000143A0: ;
    SET_LO8(edx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000143A0; /* jne: not equal / not zero */

loc_000143A7: ;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000143B0u); RECOMP_ABI_CALL(0x000143C0u, sub_000143C0); /* call 0x000143C0 */

loc_000143B0: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000143C0
 * Original: 0x000143C0 - 0x000144AA (234 bytes, 105 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000143C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000143C0: ;
    PUSH32(esp, ebx);
    ebx = ecx;
    edx = MEM32(ebx + 0x18);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x10 (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_B(_fa, _fb)) goto loc_000143D2; /* jb: below (unsigned <) */

loc_000143CD: ;
    eax = MEM32(ebx + 4);
    goto loc_000143D5;

loc_000143D2: ;
    eax = ebx + 4;

loc_000143D5: ;
    esi = MEM32(esp + 0x10);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00014411; /* jb: below (unsigned <) */

loc_000143DD: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x10 (32-bit) */
    eax = ebx + 4;
    if (CMP_B(_fa, _fb)) goto loc_000143E9; /* jb: below (unsigned <) */

loc_000143E5: ;
    ecx = MEM32(eax);
    goto loc_000143EB;

loc_000143E9: ;
    ecx = eax;

loc_000143EB: ;
    edi = MEM32(ebx + 0x14);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + ecx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, esi (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00014411; /* jbe: below or equal (unsigned <=) */

loc_000143F4: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x10 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000143FB; /* jb: below (unsigned <) */

loc_000143F9: ;
    eax = MEM32(eax);

loc_000143FB: ;
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, ecx);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    ecx = ebx;
    PUSH32(esp, 0x0001440Bu); RECOMP_ABI_CALL(0x000144B0u, sub_000144B0); /* call 0x000144B0 */

loc_0001440B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_00014411: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x18);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFEu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0xFFFFFFFEu (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00014422; /* jbe: below or equal (unsigned <=) */

loc_0001441B: ;
    ecx = ebx;
    PUSH32(esp, 0x00014422u); RECOMP_ABI_CALL(0x0046DAF7u, sub_0046DAF7); /* call 0x0046DAF7 */

loc_00014422: ;
    eax = MEM32(ebx + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00014444; /* jae: above or equal (unsigned >=) */

loc_00014429: ;
    edx = MEM32(ebx + 0x14);
    PUSH32(esp, edx);
    PUSH32(esp, ebp);
    ecx = ebx;
    PUSH32(esp, 0x00014435u); RECOMP_ABI_CALL(0x00014620u, sub_00014620); /* call 0x00014620 */

loc_00014435: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */

loc_00014437: ;
    if (CMP_BE(_fa, _fb)) goto loc_000144A1; /* jbe: below or equal (unsigned <=) */

loc_00014439: ;
    _fa = (uint32_t)(MEM32(ebx + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0x18), 0x10 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0001446E; /* jb: below (unsigned <) */

loc_0001443F: ;
    edi = MEM32(ebx + 4);
    goto loc_00014471;

loc_00014444: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00014437; /* jne: not equal / not zero */

loc_00014448: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x10 (32-bit) */
    MEM32(ebx + 0x14) = ebp;
    if (CMP_B(_fa, _fb)) goto loc_0001445F; /* jb: below (unsigned <) */

loc_00014450: ;
    eax = MEM32(ebx + 4);
    POP32(esp, ebp);
    POP32(esp, edi);
    MEM8(eax) = 0;
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_0001445F: ;
    POP32(esp, ebp);
    eax = ebx + 4;
    POP32(esp, edi);
    MEM8(eax) = 0;
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_0001446E: ;
    edi = ebx + 4;

loc_00014471: ;
    ecx = ebp;
    eax = ecx;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    { uint64_t _n = (uint64_t)ecx * 4u;
    if (!g_df && esi < 0xFD000000u && edi < 0xFD000000u && (uint64_t)esi + _n <= 0xFD000000u && (uint64_t)edi + _n <= 0xFD000000u) {
      uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi);
      if ((uint64_t)edi + _n <= esi || (uint64_t)esi + _n <= edi) memcpy(_d, _s, (size_t)_n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4u) = MEM32(esi + _i*4u); }
      esi += ecx * 4u; edi += ecx * 4u; }
    else { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4);
      for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = MEM32(esi + _i*_st);
      esi += ecx * _st; edi += ecx * _st; }
    ecx = 0; } /* rep movsd */
    ecx = eax;
    ecx = ecx & 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint64_t _n = (uint64_t)ecx * 1u;
    if (!g_df && esi < 0xFD000000u && edi < 0xFD000000u && (uint64_t)esi + _n <= 0xFD000000u && (uint64_t)edi + _n <= 0xFD000000u) {
      uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi);
      if ((uint64_t)edi + _n <= esi || (uint64_t)esi + _n <= edi) memcpy(_d, _s, (size_t)_n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM8(edi + _i*1u) = MEM8(esi + _i*1u); }
      esi += ecx * 1u; edi += ecx * 1u; }
    else { uint32_t _i; int32_t _st = RECOMP_DF_STEP(1);
      for (_i = 0; _i < ecx; _i++) MEM8(edi + _i*_st) = MEM8(esi + _i*_st);
      esi += ecx * _st; edi += ecx * _st; }
    ecx = 0; } /* rep movsb */
    _fa = (uint32_t)(MEM32(ebx + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0x18), 0x10 (32-bit) */
    MEM32(ebx + 0x14) = ebp;
    if (CMP_B(_fa, _fb)) goto loc_0001449A; /* jb: below (unsigned <) */

loc_0001448A: ;
    eax = MEM32(ebx + 4);
    MEM8(eax + ebp) = 0;
    POP32(esp, ebp);
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_0001449A: ;
    eax = ebx + 4;
    MEM8(eax + ebp) = 0;

loc_000144A1: ;
    POP32(esp, ebp);
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000144B0
 * Original: 0x000144B0 - 0x00014592 (226 bytes, 99 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000144B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000144B0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x14);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    _fa = (uint32_t)(MEM32(edi + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x14), esi (32-bit) */
    ebx = ecx;
    if (CMP_AE(_fa, _fb)) goto loc_000144C8; /* jae: above or equal (unsigned >=) */

loc_000144C3: ;
    PUSH32(esp, 0x000144C8u); RECOMP_ABI_CALL(0x0046DAB7u, sub_0046DAB7); /* call 0x0046DAB7 */

loc_000144C8: ;
    ebp = MEM32(edi + 0x14);
    eax = MEM32(esp + 0x1C);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebp = ebp - esi;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_B(_fa, _fb)) ebp = eax; /* cmovb */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000144F9; /* jne: not equal / not zero */

loc_000144DA: ;
    PUSH32(esp, 0xFFFFFFFFu);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + esi;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ebp);
    ecx = ebx;
    PUSH32(esp, 0x000144E6u); RECOMP_ABI_CALL(0x000145A0u, sub_000145A0); /* call 0x000145A0 */

loc_000144E6: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    ecx = ebx;
    PUSH32(esp, 0x000144F0u); RECOMP_ABI_CALL(0x000145A0u, sub_000145A0); /* call 0x000145A0 */

loc_000144F0: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = ebx;
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

loc_000144F9: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFEu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0xFFFFFFFEu (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00014505; /* jbe: below or equal (unsigned <=) */

loc_000144FE: ;
    ecx = ebx;
    PUSH32(esp, 0x00014505u); RECOMP_ABI_CALL(0x0046DAF7u, sub_0046DAF7); /* call 0x0046DAF7 */

loc_00014505: ;
    eax = MEM32(ebx + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0001452D; /* jae: above or equal (unsigned >=) */

loc_0001450C: ;
    eax = MEM32(ebx + 0x14);
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    ecx = ebx;
    PUSH32(esp, 0x00014518u); RECOMP_ABI_CALL(0x00014620u, sub_00014620); /* call 0x00014620 */

loc_00014518: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */

loc_0001451A: ;
    if (CMP_BE(_fa, _fb)) goto loc_00014589; /* jbe: below or equal (unsigned <=) */

loc_0001451C: ;
    ecx = MEM32(edi + 0x18);
    eax = 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00014557; /* jb: below (unsigned <) */

loc_00014528: ;
    edx = MEM32(edi + 4);
    goto loc_0001455A;

loc_0001452D: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0001451A; /* jne: not equal / not zero */

loc_00014531: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x10 (32-bit) */
    MEM32(ebx + 0x14) = ebp;
    if (CMP_B(_fa, _fb)) goto loc_00014548; /* jb: below (unsigned <) */

loc_00014539: ;
    eax = MEM32(ebx + 4);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM8(eax) = 0;
    POP32(esp, ebp);
    eax = ebx;
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

loc_00014548: ;
    POP32(esp, edi);
    eax = ebx + 4;
    POP32(esp, esi);
    MEM8(eax) = 0;
    POP32(esp, ebp);
    eax = ebx;
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

loc_00014557: ;
    edx = edi + 4;

loc_0001455A: ;
    _fa = (uint32_t)(MEM32(ebx + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0x18), eax (32-bit) */
    eax = ebx + 4;
    if (CMP_B(_fa, _fb)) goto loc_00014566; /* jb: below (unsigned <) */

loc_00014562: ;
    edi = MEM32(eax);
    goto loc_00014568;

loc_00014566: ;
    edi = eax;

loc_00014568: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = ebp;
    edx = ecx;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    { uint64_t _n = (uint64_t)ecx * 4u;
    if (!g_df && esi < 0xFD000000u && edi < 0xFD000000u && (uint64_t)esi + _n <= 0xFD000000u && (uint64_t)edi + _n <= 0xFD000000u) {
      uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi);
      if ((uint64_t)edi + _n <= esi || (uint64_t)esi + _n <= edi) memcpy(_d, _s, (size_t)_n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4u) = MEM32(esi + _i*4u); }
      esi += ecx * 4u; edi += ecx * 4u; }
    else { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4);
      for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = MEM32(esi + _i*_st);
      esi += ecx * _st; edi += ecx * _st; }
    ecx = 0; } /* rep movsd */
    ecx = edx;
    ecx = ecx & 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint64_t _n = (uint64_t)ecx * 1u;
    if (!g_df && esi < 0xFD000000u && edi < 0xFD000000u && (uint64_t)esi + _n <= 0xFD000000u && (uint64_t)edi + _n <= 0xFD000000u) {
      uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi);
      if ((uint64_t)edi + _n <= esi || (uint64_t)esi + _n <= edi) memcpy(_d, _s, (size_t)_n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM8(edi + _i*1u) = MEM8(esi + _i*1u); }
      esi += ecx * 1u; edi += ecx * 1u; }
    else { uint32_t _i; int32_t _st = RECOMP_DF_STEP(1);
      for (_i = 0; _i < ecx; _i++) MEM8(edi + _i*_st) = MEM8(esi + _i*_st);
      esi += ecx * _st; edi += ecx * _st; }
    ecx = 0; } /* rep movsb */
    _fa = (uint32_t)(MEM32(ebx + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0x18), 0x10 (32-bit) */
    MEM32(ebx + 0x14) = ebp;
    if (CMP_B(_fa, _fb)) goto loc_00014585; /* jb: below (unsigned <) */

loc_00014583: ;
    eax = MEM32(eax);

loc_00014585: ;
    MEM8(eax + ebp) = 0;

loc_00014589: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = ebx;
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_000145A0
 * Original: 0x000145A0 - 0x00014614 (116 bytes, 51 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000145A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000145A0: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM32(esi + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x14), ebp (32-bit) */
    PUSH32(esp, edi);
    if (CMP_AE(_fa, _fb)) goto loc_000145B3; /* jae: above or equal (unsigned >=) */

loc_000145AE: ;
    PUSH32(esp, 0x000145B3u); RECOMP_ABI_CALL(0x0046DAB7u, sub_0046DAB7); /* call 0x0046DAB7 */

loc_000145B3: ;
    eax = MEM32(esi + 0x14);
    edi = MEM32(esp + 0x14);
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ebp;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_B(_fa, _fb)) edi = eax; /* cmovb */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0001460C; /* jbe: below or equal (unsigned <=) */

loc_000145C5: ;
    ecx = MEM32(esi + 0x18);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x10 (32-bit) */
    PUSH32(esp, ebx);
    ebx = esi + 4;
    if (CMP_B(_fa, _fb)) goto loc_000145D5; /* jb: below (unsigned <) */

loc_000145D1: ;
    edx = MEM32(ebx);
    goto loc_000145D7;

loc_000145D5: ;
    edx = ebx;

loc_000145D7: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x10 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000145E0; /* jb: below (unsigned <) */

loc_000145DC: ;
    ecx = MEM32(ebx);
    goto loc_000145E2;

loc_000145E0: ;
    ecx = ebx;

loc_000145E2: ;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ebp;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + ebp;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000145F2u); RECOMP_ABI_CALL(0x0046E670u, sub_0046E670); /* call 0x0046E670 */

loc_000145F2: ;
    eax = MEM32(esi + 0x14);
    ecx = MEM32(esi + 0x18);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x10 (32-bit) */
    MEM32(esi + 0x14) = eax;
    if (CMP_B(_fa, _fb)) goto loc_00014607; /* jb: below (unsigned <) */

loc_00014605: ;
    ebx = MEM32(ebx);

loc_00014607: ;
    MEM8(ebx + eax) = 0;
    POP32(esp, ebx);

loc_0001460C: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00014620
 * Original: 0x00014620 - 0x00014748 (296 bytes, 105 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00014620(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00014620: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x47F6D0);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(ebp + -16) = esp;
    ebx = ecx;
    MEM32(ebp + -28) = ebx;
    eax = MEM32(ebp + 8);
    esi = eax;
    esi = esi | 0xF;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(ebp + -20) = esi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFEu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xFFFFFFFEu (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0001465B; /* jbe: below or equal (unsigned <=) */

loc_00014656: ;
    MEM32(ebp + -20) = eax;
    goto loc_0001467F;

loc_0001465B: ;
    edi = MEM32(ebx + 0x18);
    ecx = edi;
    ecx = ecx >> 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = 0xAAAAAAABu;
    { uint64_t _r = (uint64_t)eax * (uint64_t)esi;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = edx >> 1;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00014682; /* jae: above or equal (unsigned >=) */

loc_0001466F: ;
    eax = 0xFFFFFFFEu;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00014682; /* ja: above (unsigned >) */

loc_0001467A: ;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -20) = ecx;

loc_0001467F: ;
    esi = MEM32(ebp + -20);

loc_00014682: ;
    MEM32(ebp + -4) = 0;
    ecx = esi + 1;
    PUSH32(esp, ecx);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00014694u); RECOMP_ABI_CALL(0x00014790u, sub_00014790); /* call 0x00014790 */

loc_00014694: ;
    MEM32(ebp + -24) = eax;
    goto loc_000146C9;

    MEM32(ebp + -16) = esp;
    eax = MEM32(ebp + 8);
    MEM32(ebp + -20) = eax;
    MEM8(ebp + -4) = 2;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    ecx = MEM32(ebp + -28);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000146B0u); RECOMP_ABI_CALL(0x00014790u, sub_00014790); /* call 0x00014790 */

loc_000146B0: ;
    MEM32(ebp + -24) = eax;
    MEM32(ebp + -4) = 1;
    eax = 0x146C0;
    esp += 4; return; /* ret */

loc_000146C9: ;
    MEM32(ebp + -4) = 0xFFFFFFFFu;
    edx = MEM32(ebp + 0xC);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000146FB; /* jbe: below or equal (unsigned <=) */

loc_000146D7: ;
    _fa = (uint32_t)(MEM32(ebx + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0x18), 0x10 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000146E2; /* jb: below (unsigned <) */

loc_000146DD: ;
    esi = MEM32(ebx + 4);
    goto loc_000146E5;

loc_000146E2: ;
    esi = ebx + 4;

loc_000146E5: ;
    ecx = edx;
    edi = eax;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    { uint64_t _n = (uint64_t)ecx * 4u;
    if (!g_df && esi < 0xFD000000u && edi < 0xFD000000u && (uint64_t)esi + _n <= 0xFD000000u && (uint64_t)edi + _n <= 0xFD000000u) {
      uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi);
      if ((uint64_t)edi + _n <= esi || (uint64_t)esi + _n <= edi) memcpy(_d, _s, (size_t)_n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4u) = MEM32(esi + _i*4u); }
      esi += ecx * 4u; edi += ecx * 4u; }
    else { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4);
      for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = MEM32(esi + _i*_st);
      esi += ecx * _st; edi += ecx * _st; }
    ecx = 0; } /* rep movsd */
    ecx = edx;
    ecx = ecx & 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint64_t _n = (uint64_t)ecx * 1u;
    if (!g_df && esi < 0xFD000000u && edi < 0xFD000000u && (uint64_t)esi + _n <= 0xFD000000u && (uint64_t)edi + _n <= 0xFD000000u) {
      uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi);
      if ((uint64_t)edi + _n <= esi || (uint64_t)esi + _n <= edi) memcpy(_d, _s, (size_t)_n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM8(edi + _i*1u) = MEM8(esi + _i*1u); }
      esi += ecx * 1u; edi += ecx * 1u; }
    else { uint32_t _i; int32_t _st = RECOMP_DF_STEP(1);
      for (_i = 0; _i < ecx; _i++) MEM8(edi + _i*_st) = MEM8(esi + _i*_st);
      esi += ecx * _st; edi += ecx * _st; }
    ecx = 0; } /* rep movsb */
    esi = MEM32(ebp + -20);
    edx = MEM32(ebp + 0xC);

loc_000146FB: ;
    _fa = (uint32_t)(MEM32(ebx + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0x18), 0x10 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0001471D; /* jb: below (unsigned <) */

loc_00014701: ;
    ecx = MEM32(ebx + 4);
    MEM32(ebp + -32) = ecx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0001471D; /* je: equal / zero */

loc_0001470B: ;
    eax = ebp + -32;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00014714u); RECOMP_ABI_CALL(0x002AF1C0u, sub_002AF1C0); /* call 0x002AF1C0 */

loc_00014714: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(ebp + 0xC);
    eax = MEM32(ebp + -24);

loc_0001471D: ;
    ecx = ebx + 4;
    MEM8(ecx) = 0;
    MEM32(ecx) = eax;
    MEM32(ebx + 0x18) = esi;
    MEM32(ebx + 0x14) = edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x10 (32-bit) */
    if (CMP_B(_fa, _fb)) eax = ecx; /* cmovb */
    MEM8(eax + edx) = 0;
    ecx = MEM32(ebp + -12);
    MEM32(XBOX_FS_BASE) = ecx;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00014699
 * Original: 0x00014699 - 0x00014748 (175 bytes, 61 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00014699(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00014699: ;
    MEM32(ebp + -16) = esp;
    eax = MEM32(ebp + 8);
    MEM32(ebp + -20) = eax;
    MEM8(ebp + -4) = 2;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    ecx = MEM32(ebp + -28);
    PUSH32(esp, 0x000146B0u); RECOMP_ABI_CALL(0x00014790u, sub_00014790); /* call 0x00014790 */

loc_000146B0: ;
    MEM32(ebp + -24) = eax;
    MEM32(ebp + -4) = 1;
    eax = 0x146C0;
    esp += 4; return; /* ret */

    _fa = (uint32_t)(MEM32(ebx + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0x18), 0x10 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000146E2; /* jb: below (unsigned <) */

loc_000146DD: ;
    esi = MEM32(ebx + 4);
    goto loc_000146E5;

loc_000146E2: ;
    esi = ebx + 4;

loc_000146E5: ;
    ecx = edx;
    edi = eax;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    { uint64_t _n = (uint64_t)ecx * 4u;
    if (!g_df && esi < 0xFD000000u && edi < 0xFD000000u && (uint64_t)esi + _n <= 0xFD000000u && (uint64_t)edi + _n <= 0xFD000000u) {
      uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi);
      if ((uint64_t)edi + _n <= esi || (uint64_t)esi + _n <= edi) memcpy(_d, _s, (size_t)_n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4u) = MEM32(esi + _i*4u); }
      esi += ecx * 4u; edi += ecx * 4u; }
    else { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4);
      for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = MEM32(esi + _i*_st);
      esi += ecx * _st; edi += ecx * _st; }
    ecx = 0; } /* rep movsd */
    ecx = edx;
    ecx = ecx & 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint64_t _n = (uint64_t)ecx * 1u;
    if (!g_df && esi < 0xFD000000u && edi < 0xFD000000u && (uint64_t)esi + _n <= 0xFD000000u && (uint64_t)edi + _n <= 0xFD000000u) {
      uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi);
      if ((uint64_t)edi + _n <= esi || (uint64_t)esi + _n <= edi) memcpy(_d, _s, (size_t)_n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM8(edi + _i*1u) = MEM8(esi + _i*1u); }
      esi += ecx * 1u; edi += ecx * 1u; }
    else { uint32_t _i; int32_t _st = RECOMP_DF_STEP(1);
      for (_i = 0; _i < ecx; _i++) MEM8(edi + _i*_st) = MEM8(esi + _i*_st);
      esi += ecx * _st; edi += ecx * _st; }
    ecx = 0; } /* rep movsb */
    esi = MEM32(ebp + -20);
    edx = MEM32(ebp + 0xC);

loc_000146FB: ;
    _fa = (uint32_t)(MEM32(ebx + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0x18), 0x10 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0001471D; /* jb: below (unsigned <) */

loc_00014701: ;
    ecx = MEM32(ebx + 4);
    MEM32(ebp + -32) = ecx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0001471D; /* je: equal / zero */

loc_0001470B: ;
    eax = ebp + -32;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00014714u); RECOMP_ABI_CALL(0x002AF1C0u, sub_002AF1C0); /* call 0x002AF1C0 */

loc_00014714: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(ebp + 0xC);
    eax = MEM32(ebp + -24);

loc_0001471D: ;
    ecx = ebx + 4;
    MEM8(ecx) = 0;
    MEM32(ecx) = eax;
    MEM32(ebx + 0x18) = esi;
    MEM32(ebx + 0x14) = edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x10 (32-bit) */
    if (CMP_B(_fa, _fb)) eax = ecx; /* cmovb */
    MEM8(eax + edx) = 0;
    ecx = MEM32(ebp + -12);
    MEM32(XBOX_FS_BASE) = ecx;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00014748
 * Original: 0x00014748 - 0x00014790 (72 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00014748(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00014748: ;
    esi = MEM32(ebp + -28);
    _fa = (uint32_t)(MEM32(esi + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x18), 0x10 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00014767; /* jb: below (unsigned <) */

loc_00014751: ;
    eax = MEM32(esi + 4);
    MEM32(ebp + -36) = eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00014767; /* je: equal / zero */

loc_0001475B: ;
    ecx = ebp + -36;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00014764u); RECOMP_ABI_CALL(0x002AF1C0u, sub_002AF1C0); /* call 0x002AF1C0 */

loc_00014764: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00014767: ;
    MEM32(esi + 0x18) = 0xF;
    MEM32(esi + 0x14) = 0;
    MEM8(esi + 4) = 0;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00014782u); RECOMP_ABI_CALL(0x004720B3u, sub_004720B3); /* call 0x004720B3 */

loc_00014782: ;
    (void)0;
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
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_00014790
 * Original: 0x00014790 - 0x000147AC (28 bytes, 8 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00014790(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00014790: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x461);
    PUSH32(esp, 0x606A34);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000147A6u); RECOMP_ABI_CALL(0x002AF0E0u, sub_002AF0E0); /* call 0x002AF0E0 */

loc_000147A6: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000147B0
 * Original: 0x000147B0 - 0x0001480F (95 bytes, 38 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000147B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000147B0: ;
    SET_LO8(eax, MEM8(esp + 4));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    ebx = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_000147FB; /* je: equal / zero */

loc_000147C0: ;
    _fa = (uint32_t)(MEM32(ebx + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0x18), 0x10 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000147FB; /* jb: below (unsigned <) */

loc_000147C6: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    eax = MEM32(ebx + 4);
    PUSH32(esp, edi);
    edi = ebx + 4;
    if (CMP_BE(_fa, _fb)) goto loc_000147E5; /* jbe: below or equal (unsigned <=) */

loc_000147D1: ;
    PUSH32(esp, esi);
    ecx = ebp;
    edx = ecx;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esi = eax;
    { uint64_t _n = (uint64_t)ecx * 4u;
    if (!g_df && esi < 0xFD000000u && edi < 0xFD000000u && (uint64_t)esi + _n <= 0xFD000000u && (uint64_t)edi + _n <= 0xFD000000u) {
      uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi);
      if ((uint64_t)edi + _n <= esi || (uint64_t)esi + _n <= edi) memcpy(_d, _s, (size_t)_n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4u) = MEM32(esi + _i*4u); }
      esi += ecx * 4u; edi += ecx * 4u; }
    else { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4);
      for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = MEM32(esi + _i*_st);
      esi += ecx * _st; edi += ecx * _st; }
    ecx = 0; } /* rep movsd */
    ecx = edx;
    ecx = ecx & 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint64_t _n = (uint64_t)ecx * 1u;
    if (!g_df && esi < 0xFD000000u && edi < 0xFD000000u && (uint64_t)esi + _n <= 0xFD000000u && (uint64_t)edi + _n <= 0xFD000000u) {
      uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi);
      if ((uint64_t)edi + _n <= esi || (uint64_t)esi + _n <= edi) memcpy(_d, _s, (size_t)_n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM8(edi + _i*1u) = MEM8(esi + _i*1u); }
      esi += ecx * 1u; edi += ecx * 1u; }
    else { uint32_t _i; int32_t _st = RECOMP_DF_STEP(1);
      for (_i = 0; _i < ecx; _i++) MEM8(edi + _i*_st) = MEM8(esi + _i*_st);
      esi += ecx * _st; edi += ecx * _st; }
    ecx = 0; } /* rep movsb */
    POP32(esp, esi);

loc_000147E5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x10) = eax;
    POP32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_000147FB; /* je: equal / zero */

loc_000147EE: ;
    eax = esp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000147F8u); RECOMP_ABI_CALL(0x002AF1C0u, sub_002AF1C0); /* call 0x002AF1C0 */

loc_000147F8: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000147FB: ;
    MEM32(ebx + 0x14) = ebp;
    MEM32(ebx + 0x18) = 0xF;
    MEM8(ebx + ebp + 4) = 0;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00014810
 * Original: 0x00014810 - 0x00014835 (37 bytes, 14 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00014810(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00014810: ;
    PUSH32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = ecx;
    PUSH32(esp, 0xFFFFFFFFu);
    MEM32(esi + 0x14) = eax;
    MEM32(esi + 0x18) = 0xF;
    PUSH32(esp, eax);
    MEM8(esi + 4) = LO8(eax);
    eax = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0001482Fu); RECOMP_ABI_CALL(0x000144B0u, sub_000144B0); /* call 0x000144B0 */

loc_0001482F: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00014840
 * Original: 0x00014840 - 0x0001486A (42 bytes, 15 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00014840(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00014840: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00014848u); RECOMP_ABI_CALL(0x000148A0u, sub_000148A0); /* call 0x000148A0 */

loc_00014848: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00014864; /* je: equal / zero */

loc_0001484F: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    MEM32(esp + 8) = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_00014864; /* je: equal / zero */

loc_00014857: ;
    eax = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00014861u); RECOMP_ABI_CALL(0x002AF1C0u, sub_002AF1C0); /* call 0x002AF1C0 */

loc_00014861: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00014864: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00014870
 * Original: 0x00014870 - 0x0001489C (44 bytes, 14 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00014870(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00014870: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x5AC694;
    PUSH32(esp, 0x0001487Eu); RECOMP_ABI_CALL(0x000148A0u, sub_000148A0); /* call 0x000148A0 */

loc_0001487E: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00014896; /* je: equal / zero */

loc_00014885: ;
    eax = esp + 8;
    PUSH32(esp, eax);
    MEM32(esp + 0xC) = esi;
    PUSH32(esp, 0x00014893u); RECOMP_ABI_CALL(0x002AF1C0u, sub_002AF1C0); /* call 0x002AF1C0 */

loc_00014893: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00014896: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000148A0
 * Original: 0x000148A0 - 0x000148E4 (68 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000148A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000148A0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x5AC69C;
    _fa = (uint32_t)(MEM32(esi + 0x24)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x24), 0x10 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000148C8; /* jb: below (unsigned <) */

loc_000148B0: ;
    eax = MEM32(esi + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 4) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_000148C8; /* je: equal / zero */

loc_000148BB: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000148C5u); RECOMP_ABI_CALL(0x002AF1C0u, sub_002AF1C0); /* call 0x002AF1C0 */

loc_000148C5: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000148C8: ;
    MEM32(esi + 0x24) = 0xF;
    MEM32(esi + 0x20) = 0;
    ecx = esi;
    MEM8(esi + 0x10) = 0;
    PUSH32(esp, 0x000148E1u); RECOMP_ABI_CALL(0x0046E5D6u, sub_0046E5D6); /* call 0x0046E5D6 */

loc_000148E1: ;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_000148F0
 * Original: 0x000148F0 - 0x000148FB (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000148F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000148F0: ;
    MEM32(ecx) = 0x5AC694;
    g_seh_ebp = ebp; sub_000148A0(); return; /* tail jmp 0x000148A0 */

}

/**
 * sub_00014900
 * Original: 0x00014900 - 0x00014937 (55 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00014900(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00014900: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM32(esi + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x18), 0x10 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00014922; /* jb: below (unsigned <) */

loc_0001490A: ;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 4) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_00014922; /* je: equal / zero */

loc_00014915: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0001491Fu); RECOMP_ABI_CALL(0x002AF1C0u, sub_002AF1C0); /* call 0x002AF1C0 */

loc_0001491F: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00014922: ;
    MEM32(esi + 0x18) = 0xF;
    MEM32(esi + 0x14) = 0;
    MEM8(esi + 4) = 0;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00014940
 * Original: 0x00014940 - 0x00014DBE (1150 bytes, 355 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00014940(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00014940: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax) = edi;
    MEM32(eax + 4) = edi;
    MEM32(eax + 8) = edi;
    MEM32(eax + 0xC) = edi;
    MEM32(eax + 0x10) = edi;
    MEM32(eax + 0x14) = edi;
    _fa = (uint32_t)(MEM32(0x84A19C)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x84A19C), edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00014968; /* jne: not equal / not zero */

loc_00014963: ;
    PUSH32(esp, 0x00014968u); RECOMP_ABI_CALL(0x002AED70u, sub_002AED70); /* call 0x002AED70 */

loc_00014968: ;
    edx = MEM32(0x7FA494);
    ecx = MEM32(0x7FA4B4);
    esi = MEM32(0x84A190);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    MEM32(0x7FA494) = edx;
    MEM32(0x7FA4B4) = ecx;
    ebp = esi;
    ebx = 0xC;
    if (CMP_EQ(_fa, _fb)) goto loc_000149B5; /* je: equal / zero */

loc_00014993: ;
    _fa = (uint32_t)(MEM32(esi + 0x80)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x80), ebx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000149B5; /* jb: below (unsigned <) */

loc_0001499B: ;
    ecx = 4;
    PUSH32(esp, 0x000149A5u); RECOMP_ABI_CALL(0x003E62A0u, sub_003E62A0); /* call 0x003E62A0 */

loc_000149A5: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x000149ACu); RECOMP_ABI_CALL(0x003E6BD0u, sub_003E6BD0); /* call 0x003E6BD0 */

loc_000149AC: ;
    esi = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000149D7; /* jne: not equal / not zero */

loc_000149B5: ;
    esi = MEM32(0x84A184);
    ecx = 4;
    ebp = esi;
    PUSH32(esp, 0x000149C7u); RECOMP_ABI_CALL(0x003E62A0u, sub_003E62A0); /* call 0x003E62A0 */

loc_000149C7: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x000149CEu); RECOMP_ABI_CALL(0x003E6BD0u, sub_003E6BD0); /* call 0x003E6BD0 */

loc_000149CE: ;
    esi = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000149F9; /* je: equal / zero */

loc_000149D7: ;
    PUSH32(esp, 0x000149DCu); RECOMP_ABI_CALL(0x0002B580u, sub_0002B580); /* call 0x0002B580 */

loc_000149DC: ;
    MEM32(esi + 4) = eax;
    MEM8(eax + 0x15) = 1;
    eax = MEM32(esi + 4);
    MEM32(eax + 4) = eax;
    eax = MEM32(esi + 4);
    MEM32(eax) = eax;
    eax = MEM32(esi + 4);
    MEM32(eax + 8) = eax;
    MEM32(esi + 8) = edi;
    goto loc_000149FB;

loc_000149F9: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000149FB: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    eax = MEM32(esp + 0x14);
    MEM32(eax) = esi;
    if (CMP_NE(_fa, _fb)) goto loc_00014A18; /* jne: not equal / not zero */

loc_00014A05: ;
    PUSH32(esp, 0x587BE4);
    PUSH32(esp, edi);
    PUSH32(esp, 0x587BE4);
    PUSH32(esp, 0x00014A15u); RECOMP_ABI_CALL(0x001F0620u, sub_001F0620); /* call 0x001F0620 */

loc_00014A15: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00014A18: ;
    _fa = (uint32_t)(MEM32(0x84A19C)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x84A19C), edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00014A25; /* jne: not equal / not zero */

loc_00014A20: ;
    PUSH32(esp, 0x00014A25u); RECOMP_ABI_CALL(0x002AED70u, sub_002AED70); /* call 0x002AED70 */

loc_00014A25: ;
    edx = MEM32(0x7FA494);
    ecx = MEM32(0x7FA4B4);
    esi = MEM32(0x84A190);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    MEM32(0x7FA494) = edx;
    MEM32(0x7FA4B4) = ecx;
    ebp = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_00014A6D; /* je: equal / zero */

loc_00014A4B: ;
    _fa = (uint32_t)(MEM32(esi + 0x80)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x80), ebx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00014A6D; /* jb: below (unsigned <) */

loc_00014A53: ;
    ecx = 4;
    PUSH32(esp, 0x00014A5Du); RECOMP_ABI_CALL(0x003E62A0u, sub_003E62A0); /* call 0x003E62A0 */

loc_00014A5D: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x00014A64u); RECOMP_ABI_CALL(0x003E6BD0u, sub_003E6BD0); /* call 0x003E6BD0 */

loc_00014A64: ;
    esi = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00014A8F; /* jne: not equal / not zero */

loc_00014A6D: ;
    esi = MEM32(0x84A184);
    ecx = 4;
    ebp = esi;
    PUSH32(esp, 0x00014A7Fu); RECOMP_ABI_CALL(0x003E62A0u, sub_003E62A0); /* call 0x003E62A0 */

loc_00014A7F: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x00014A86u); RECOMP_ABI_CALL(0x003E6BD0u, sub_003E6BD0); /* call 0x003E6BD0 */

loc_00014A86: ;
    esi = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00014AB1; /* je: equal / zero */

loc_00014A8F: ;
    PUSH32(esp, 0x00014A94u); RECOMP_ABI_CALL(0x0002B580u, sub_0002B580); /* call 0x0002B580 */

loc_00014A94: ;
    MEM32(esi + 4) = eax;
    MEM8(eax + 0x15) = 1;
    eax = MEM32(esi + 4);
    MEM32(eax + 4) = eax;
    eax = MEM32(esi + 4);
    MEM32(eax) = eax;
    eax = MEM32(esi + 4);
    MEM32(eax + 8) = eax;
    MEM32(esi + 8) = edi;
    goto loc_00014AB3;

loc_00014AB1: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00014AB3: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    ecx = MEM32(esp + 0x14);
    MEM32(ecx + 4) = esi;
    if (CMP_NE(_fa, _fb)) goto loc_00014AD1; /* jne: not equal / not zero */

loc_00014ABE: ;
    PUSH32(esp, 0x587BE4);
    PUSH32(esp, edi);
    PUSH32(esp, 0x587BE4);
    PUSH32(esp, 0x00014ACEu); RECOMP_ABI_CALL(0x001F0620u, sub_001F0620); /* call 0x001F0620 */

loc_00014ACE: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00014AD1: ;
    _fa = (uint32_t)(MEM32(0x84A19C)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x84A19C), edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00014ADE; /* jne: not equal / not zero */

loc_00014AD9: ;
    PUSH32(esp, 0x00014ADEu); RECOMP_ABI_CALL(0x002AED70u, sub_002AED70); /* call 0x002AED70 */

loc_00014ADE: ;
    edx = MEM32(0x7FA494);
    ecx = MEM32(0x7FA4B4);
    esi = MEM32(0x84A190);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    MEM32(0x7FA494) = edx;
    MEM32(0x7FA4B4) = ecx;
    ebp = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_00014B26; /* je: equal / zero */

loc_00014B04: ;
    _fa = (uint32_t)(MEM32(esi + 0x80)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x80), ebx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00014B26; /* jb: below (unsigned <) */

loc_00014B0C: ;
    ecx = 4;
    PUSH32(esp, 0x00014B16u); RECOMP_ABI_CALL(0x003E62A0u, sub_003E62A0); /* call 0x003E62A0 */

loc_00014B16: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x00014B1Du); RECOMP_ABI_CALL(0x003E6BD0u, sub_003E6BD0); /* call 0x003E6BD0 */

loc_00014B1D: ;
    esi = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00014B48; /* jne: not equal / not zero */

loc_00014B26: ;
    esi = MEM32(0x84A184);
    ecx = 4;
    ebp = esi;
    PUSH32(esp, 0x00014B38u); RECOMP_ABI_CALL(0x003E62A0u, sub_003E62A0); /* call 0x003E62A0 */

loc_00014B38: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x00014B3Fu); RECOMP_ABI_CALL(0x003E6BD0u, sub_003E6BD0); /* call 0x003E6BD0 */

loc_00014B3F: ;
    esi = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00014B6A; /* je: equal / zero */

loc_00014B48: ;
    PUSH32(esp, 0x00014B4Du); RECOMP_ABI_CALL(0x0002B580u, sub_0002B580); /* call 0x0002B580 */

loc_00014B4D: ;
    MEM32(esi + 4) = eax;
    MEM8(eax + 0x15) = 1;
    eax = MEM32(esi + 4);
    MEM32(eax + 4) = eax;
    eax = MEM32(esi + 4);
    MEM32(eax) = eax;
    eax = MEM32(esi + 4);
    MEM32(eax + 8) = eax;
    MEM32(esi + 8) = edi;
    goto loc_00014B6C;

loc_00014B6A: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00014B6C: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    edx = MEM32(esp + 0x14);
    MEM32(edx + 8) = esi;
    if (CMP_NE(_fa, _fb)) goto loc_00014B8A; /* jne: not equal / not zero */

loc_00014B77: ;
    PUSH32(esp, 0x587BE4);
    PUSH32(esp, edi);
    PUSH32(esp, 0x587BE4);
    PUSH32(esp, 0x00014B87u); RECOMP_ABI_CALL(0x001F0620u, sub_001F0620); /* call 0x001F0620 */

loc_00014B87: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00014B8A: ;
    _fa = (uint32_t)(MEM32(0x84A19C)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x84A19C), edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00014B97; /* jne: not equal / not zero */

loc_00014B92: ;
    PUSH32(esp, 0x00014B97u); RECOMP_ABI_CALL(0x002AED70u, sub_002AED70); /* call 0x002AED70 */

loc_00014B97: ;
    edx = MEM32(0x7FA494);
    ecx = MEM32(0x7FA4B4);
    esi = MEM32(0x84A190);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    MEM32(0x7FA494) = edx;
    MEM32(0x7FA4B4) = ecx;
    ebp = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_00014BDF; /* je: equal / zero */

loc_00014BBD: ;
    _fa = (uint32_t)(MEM32(esi + 0x80)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x80), ebx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00014BDF; /* jb: below (unsigned <) */

loc_00014BC5: ;
    ecx = 4;
    PUSH32(esp, 0x00014BCFu); RECOMP_ABI_CALL(0x003E62A0u, sub_003E62A0); /* call 0x003E62A0 */

loc_00014BCF: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x00014BD6u); RECOMP_ABI_CALL(0x003E6BD0u, sub_003E6BD0); /* call 0x003E6BD0 */

loc_00014BD6: ;
    esi = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00014C01; /* jne: not equal / not zero */

loc_00014BDF: ;
    esi = MEM32(0x84A184);
    ecx = 4;
    ebp = esi;
    PUSH32(esp, 0x00014BF1u); RECOMP_ABI_CALL(0x003E62A0u, sub_003E62A0); /* call 0x003E62A0 */

loc_00014BF1: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x00014BF8u); RECOMP_ABI_CALL(0x003E6BD0u, sub_003E6BD0); /* call 0x003E6BD0 */

loc_00014BF8: ;
    esi = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00014C23; /* je: equal / zero */

loc_00014C01: ;
    PUSH32(esp, 0x00014C06u); RECOMP_ABI_CALL(0x0002B580u, sub_0002B580); /* call 0x0002B580 */

loc_00014C06: ;
    MEM32(esi + 4) = eax;
    MEM8(eax + 0x15) = 1;
    eax = MEM32(esi + 4);
    MEM32(eax + 4) = eax;
    eax = MEM32(esi + 4);
    MEM32(eax) = eax;
    eax = MEM32(esi + 4);
    MEM32(eax + 8) = eax;
    MEM32(esi + 8) = edi;
    goto loc_00014C25;

loc_00014C23: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00014C25: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    eax = MEM32(esp + 0x14);
    MEM32(eax + 0xC) = esi;
    if (CMP_NE(_fa, _fb)) goto loc_00014C43; /* jne: not equal / not zero */

loc_00014C30: ;
    PUSH32(esp, 0x587BE4);
    PUSH32(esp, edi);
    PUSH32(esp, 0x587BE4);
    PUSH32(esp, 0x00014C40u); RECOMP_ABI_CALL(0x001F0620u, sub_001F0620); /* call 0x001F0620 */

loc_00014C40: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00014C43: ;
    _fa = (uint32_t)(MEM32(0x84A19C)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x84A19C), edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00014C50; /* jne: not equal / not zero */

loc_00014C4B: ;
    PUSH32(esp, 0x00014C50u); RECOMP_ABI_CALL(0x002AED70u, sub_002AED70); /* call 0x002AED70 */

loc_00014C50: ;
    edx = MEM32(0x7FA494);
    ecx = MEM32(0x7FA4B4);
    esi = MEM32(0x84A190);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    MEM32(0x7FA494) = edx;
    MEM32(0x7FA4B4) = ecx;
    ebp = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_00014C98; /* je: equal / zero */

loc_00014C76: ;
    _fa = (uint32_t)(MEM32(esi + 0x80)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x80), ebx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00014C98; /* jb: below (unsigned <) */

loc_00014C7E: ;
    ecx = 4;
    PUSH32(esp, 0x00014C88u); RECOMP_ABI_CALL(0x003E62A0u, sub_003E62A0); /* call 0x003E62A0 */

loc_00014C88: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x00014C8Fu); RECOMP_ABI_CALL(0x003E6BD0u, sub_003E6BD0); /* call 0x003E6BD0 */

loc_00014C8F: ;
    esi = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00014CBA; /* jne: not equal / not zero */

loc_00014C98: ;
    esi = MEM32(0x84A184);
    ecx = 4;
    ebp = esi;
    PUSH32(esp, 0x00014CAAu); RECOMP_ABI_CALL(0x003E62A0u, sub_003E62A0); /* call 0x003E62A0 */

loc_00014CAA: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x00014CB1u); RECOMP_ABI_CALL(0x003E6BD0u, sub_003E6BD0); /* call 0x003E6BD0 */

loc_00014CB1: ;
    esi = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00014CDC; /* je: equal / zero */

loc_00014CBA: ;
    PUSH32(esp, 0x00014CBFu); RECOMP_ABI_CALL(0x0002B580u, sub_0002B580); /* call 0x0002B580 */

loc_00014CBF: ;
    MEM32(esi + 4) = eax;
    MEM8(eax + 0x15) = 1;
    eax = MEM32(esi + 4);
    MEM32(eax + 4) = eax;
    eax = MEM32(esi + 4);
    MEM32(eax) = eax;
    eax = MEM32(esi + 4);
    MEM32(eax + 8) = eax;
    MEM32(esi + 8) = edi;
    goto loc_00014CDE;

loc_00014CDC: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00014CDE: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    ecx = MEM32(esp + 0x14);
    MEM32(ecx + 0x10) = esi;
    if (CMP_NE(_fa, _fb)) goto loc_00014CFC; /* jne: not equal / not zero */

loc_00014CE9: ;
    PUSH32(esp, 0x587BE4);
    PUSH32(esp, edi);
    PUSH32(esp, 0x587BE4);
    PUSH32(esp, 0x00014CF9u); RECOMP_ABI_CALL(0x001F0620u, sub_001F0620); /* call 0x001F0620 */

loc_00014CF9: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00014CFC: ;
    _fa = (uint32_t)(MEM32(0x84A19C)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x84A19C), edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00014D09; /* jne: not equal / not zero */

loc_00014D04: ;
    PUSH32(esp, 0x00014D09u); RECOMP_ABI_CALL(0x002AED70u, sub_002AED70); /* call 0x002AED70 */

loc_00014D09: ;
    edx = MEM32(0x7FA494);
    ecx = MEM32(0x7FA4B4);
    esi = MEM32(0x84A190);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    MEM32(0x7FA494) = edx;
    MEM32(0x7FA4B4) = ecx;
    ebp = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_00014D51; /* je: equal / zero */

loc_00014D2F: ;
    _fa = (uint32_t)(MEM32(esi + 0x80)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x80), ebx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00014D51; /* jb: below (unsigned <) */

loc_00014D37: ;
    ecx = 4;
    PUSH32(esp, 0x00014D41u); RECOMP_ABI_CALL(0x003E62A0u, sub_003E62A0); /* call 0x003E62A0 */

loc_00014D41: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x00014D48u); RECOMP_ABI_CALL(0x003E6BD0u, sub_003E6BD0); /* call 0x003E6BD0 */

loc_00014D48: ;
    esi = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00014D73; /* jne: not equal / not zero */

loc_00014D51: ;
    esi = MEM32(0x84A184);
    ecx = 4;
    ebp = esi;
    PUSH32(esp, 0x00014D63u); RECOMP_ABI_CALL(0x003E62A0u, sub_003E62A0); /* call 0x003E62A0 */

loc_00014D63: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x00014D6Au); RECOMP_ABI_CALL(0x003E6BD0u, sub_003E6BD0); /* call 0x003E6BD0 */

loc_00014D6A: ;
    esi = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00014D95; /* je: equal / zero */

loc_00014D73: ;
    PUSH32(esp, 0x00014D78u); RECOMP_ABI_CALL(0x0002B580u, sub_0002B580); /* call 0x0002B580 */

loc_00014D78: ;
    MEM32(esi + 4) = eax;
    MEM8(eax + 0x15) = 1;
    eax = MEM32(esi + 4);
    MEM32(eax + 4) = eax;
    eax = MEM32(esi + 4);
    MEM32(eax) = eax;
    eax = MEM32(esi + 4);
    MEM32(eax + 8) = eax;
    MEM32(esi + 8) = edi;
    goto loc_00014D97;

loc_00014D95: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00014D97: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    ebx = MEM32(esp + 0x14);
    MEM32(ebx + 0x14) = esi;
    if (CMP_NE(_fa, _fb)) goto loc_00014DB5; /* jne: not equal / not zero */

loc_00014DA2: ;
    PUSH32(esp, 0x587BE4);
    PUSH32(esp, edi);
    PUSH32(esp, 0x587BE4);
    PUSH32(esp, 0x00014DB2u); RECOMP_ABI_CALL(0x001F0620u, sub_001F0620); /* call 0x001F0620 */

loc_00014DB2: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00014DB5: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = ebx;
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00014DC0
 * Original: 0x00014DC0 - 0x00014E29 (105 bytes, 40 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00014DC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00014DC0: ;
    edx = MEM32(esp + 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = MEM32(eax);
    ecx = MEM32(edi + 4);
    eax = MEM32(ecx + 4);
    SET_LO8(ebx, MEM8(eax + 0x15));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00014DED; /* jne: not equal / not zero */

loc_00014DD8: ;
    _fa = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0xC), edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00014DE2; /* jge: greater or equal (signed >=) */

loc_00014DDD: ;
    eax = MEM32(eax + 8);
    goto loc_00014DE6;

loc_00014DE2: ;
    ecx = eax;
    eax = MEM32(eax);

loc_00014DE6: ;
    SET_LO8(ebx, MEM8(eax + 0x15));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00014DD8; /* je: equal / zero */

loc_00014DED: ;
    eax = MEM32(edi + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    MEM32(esp + 8) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_00014E03; /* je: equal / zero */

loc_00014DF8: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ecx + 0xC) (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00014E03; /* jl: less (signed <) */

loc_00014DFD: ;
    eax = esp + 8;
    goto loc_00014E0B;

loc_00014E03: ;
    MEM32(esp + 0xC) = eax;
    eax = esp + 0xC;

loc_00014E0B: ;
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(edi + 4) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00014E21; /* jne: not equal / not zero */

loc_00014E12: ;
    eax = esp + 0x14;
    PUSH32(esp, 0x00014E1Bu); RECOMP_ABI_CALL(0x0002B0A0u, sub_0002B0A0); /* call 0x0002B0A0 */

loc_00014E1B: ;
    ecx = MEM32(esp + 0x18);
    MEM32(eax) = ecx;

loc_00014E21: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00014E30
 * Original: 0x00014E30 - 0x00014EA1 (113 bytes, 41 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00014E30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00014E30: ;
    edx = MEM32(esp + 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = MEM32(eax + 4);
    ecx = MEM32(edi + 4);
    eax = MEM32(ecx + 4);
    SET_LO8(ebx, MEM8(eax + 0x15));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00014E65; /* jne: not equal / not zero */

loc_00014E49: ;
    /* nop */

loc_00014E50: ;
    _fa = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0xC), edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00014E5A; /* jge: greater or equal (signed >=) */

loc_00014E55: ;
    eax = MEM32(eax + 8);
    goto loc_00014E5E;

loc_00014E5A: ;
    ecx = eax;
    eax = MEM32(eax);

loc_00014E5E: ;
    SET_LO8(ebx, MEM8(eax + 0x15));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00014E50; /* je: equal / zero */

loc_00014E65: ;
    eax = MEM32(edi + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    MEM32(esp + 8) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_00014E7B; /* je: equal / zero */

loc_00014E70: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ecx + 0xC) (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00014E7B; /* jl: less (signed <) */

loc_00014E75: ;
    eax = esp + 8;
    goto loc_00014E83;

loc_00014E7B: ;
    MEM32(esp + 0xC) = eax;
    eax = esp + 0xC;

loc_00014E83: ;
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(edi + 4) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00014E99; /* jne: not equal / not zero */

loc_00014E8A: ;
    eax = esp + 0x14;
    PUSH32(esp, 0x00014E93u); RECOMP_ABI_CALL(0x0002B0A0u, sub_0002B0A0); /* call 0x0002B0A0 */

loc_00014E93: ;
    ecx = MEM32(esp + 0x18);
    MEM32(eax) = ecx;

loc_00014E99: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00014EB0
 * Original: 0x00014EB0 - 0x00014F21 (113 bytes, 41 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00014EB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00014EB0: ;
    edx = MEM32(esp + 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = MEM32(eax + 8);
    ecx = MEM32(edi + 4);
    eax = MEM32(ecx + 4);
    SET_LO8(ebx, MEM8(eax + 0x15));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00014EE5; /* jne: not equal / not zero */

loc_00014EC9: ;
    /* nop */

loc_00014ED0: ;
    _fa = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0xC), edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00014EDA; /* jge: greater or equal (signed >=) */

loc_00014ED5: ;
    eax = MEM32(eax + 8);
    goto loc_00014EDE;

loc_00014EDA: ;
    ecx = eax;
    eax = MEM32(eax);

loc_00014EDE: ;
    SET_LO8(ebx, MEM8(eax + 0x15));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00014ED0; /* je: equal / zero */

loc_00014EE5: ;
    eax = MEM32(edi + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    MEM32(esp + 8) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_00014EFB; /* je: equal / zero */

loc_00014EF0: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ecx + 0xC) (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00014EFB; /* jl: less (signed <) */

loc_00014EF5: ;
    eax = esp + 8;
    goto loc_00014F03;

loc_00014EFB: ;
    MEM32(esp + 0xC) = eax;
    eax = esp + 0xC;

loc_00014F03: ;
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(edi + 4) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00014F19; /* jne: not equal / not zero */

loc_00014F0A: ;
    eax = esp + 0x14;
    PUSH32(esp, 0x00014F13u); RECOMP_ABI_CALL(0x0002B0A0u, sub_0002B0A0); /* call 0x0002B0A0 */

loc_00014F13: ;
    ecx = MEM32(esp + 0x18);
    MEM32(eax) = ecx;

loc_00014F19: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00014F30
 * Original: 0x00014F30 - 0x00014FA1 (113 bytes, 41 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00014F30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00014F30: ;
    edx = MEM32(esp + 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = MEM32(eax + 0xC);
    ecx = MEM32(edi + 4);
    eax = MEM32(ecx + 4);
    SET_LO8(ebx, MEM8(eax + 0x15));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00014F65; /* jne: not equal / not zero */

loc_00014F49: ;
    /* nop */

loc_00014F50: ;
    _fa = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0xC), edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00014F5A; /* jge: greater or equal (signed >=) */

loc_00014F55: ;
    eax = MEM32(eax + 8);
    goto loc_00014F5E;

loc_00014F5A: ;
    ecx = eax;
    eax = MEM32(eax);

loc_00014F5E: ;
    SET_LO8(ebx, MEM8(eax + 0x15));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00014F50; /* je: equal / zero */

loc_00014F65: ;
    eax = MEM32(edi + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    MEM32(esp + 8) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_00014F7B; /* je: equal / zero */

loc_00014F70: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ecx + 0xC) (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00014F7B; /* jl: less (signed <) */

loc_00014F75: ;
    eax = esp + 8;
    goto loc_00014F83;

loc_00014F7B: ;
    MEM32(esp + 0xC) = eax;
    eax = esp + 0xC;

loc_00014F83: ;
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(edi + 4) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00014F99; /* jne: not equal / not zero */

loc_00014F8A: ;
    eax = esp + 0x14;
    PUSH32(esp, 0x00014F93u); RECOMP_ABI_CALL(0x0002B0A0u, sub_0002B0A0); /* call 0x0002B0A0 */

loc_00014F93: ;
    ecx = MEM32(esp + 0x18);
    MEM32(eax) = ecx;

loc_00014F99: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00014FB0
 * Original: 0x00014FB0 - 0x00015021 (113 bytes, 41 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00014FB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00014FB0: ;
    edx = MEM32(esp + 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = MEM32(eax + 0x10);
    ecx = MEM32(edi + 4);
    eax = MEM32(ecx + 4);
    SET_LO8(ebx, MEM8(eax + 0x15));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00014FE5; /* jne: not equal / not zero */

loc_00014FC9: ;
    /* nop */

loc_00014FD0: ;
    _fa = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0xC), edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00014FDA; /* jge: greater or equal (signed >=) */

loc_00014FD5: ;
    eax = MEM32(eax + 8);
    goto loc_00014FDE;

loc_00014FDA: ;
    ecx = eax;
    eax = MEM32(eax);

loc_00014FDE: ;
    SET_LO8(ebx, MEM8(eax + 0x15));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00014FD0; /* je: equal / zero */

loc_00014FE5: ;
    eax = MEM32(edi + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    MEM32(esp + 8) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_00014FFB; /* je: equal / zero */

loc_00014FF0: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ecx + 0xC) (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00014FFB; /* jl: less (signed <) */

loc_00014FF5: ;
    eax = esp + 8;
    goto loc_00015003;

loc_00014FFB: ;
    MEM32(esp + 0xC) = eax;
    eax = esp + 0xC;

loc_00015003: ;
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(edi + 4) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00015019; /* jne: not equal / not zero */

loc_0001500A: ;
    eax = esp + 0x14;
    PUSH32(esp, 0x00015013u); RECOMP_ABI_CALL(0x0002B0A0u, sub_0002B0A0); /* call 0x0002B0A0 */

loc_00015013: ;
    ecx = MEM32(esp + 0x18);
    MEM32(eax) = ecx;

loc_00015019: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00015030
 * Original: 0x00015030 - 0x000150A1 (113 bytes, 41 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00015030(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00015030: ;
    edx = MEM32(esp + 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = MEM32(eax + 0x14);
    ecx = MEM32(edi + 4);
    eax = MEM32(ecx + 4);
    SET_LO8(ebx, MEM8(eax + 0x15));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00015065; /* jne: not equal / not zero */

loc_00015049: ;
    /* nop */

loc_00015050: ;
    _fa = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0xC), edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0001505A; /* jge: greater or equal (signed >=) */

loc_00015055: ;
    eax = MEM32(eax + 8);
    goto loc_0001505E;

loc_0001505A: ;
    ecx = eax;
    eax = MEM32(eax);

loc_0001505E: ;
    SET_LO8(ebx, MEM8(eax + 0x15));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00015050; /* je: equal / zero */

loc_00015065: ;
    eax = MEM32(edi + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    MEM32(esp + 8) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_0001507B; /* je: equal / zero */

loc_00015070: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ecx + 0xC) (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0001507B; /* jl: less (signed <) */

loc_00015075: ;
    eax = esp + 8;
    goto loc_00015083;

loc_0001507B: ;
    MEM32(esp + 0xC) = eax;
    eax = esp + 0xC;

loc_00015083: ;
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(edi + 4) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00015099; /* jne: not equal / not zero */

loc_0001508A: ;
    eax = esp + 0x14;
    PUSH32(esp, 0x00015093u); RECOMP_ABI_CALL(0x0002B0A0u, sub_0002B0A0); /* call 0x0002B0A0 */

loc_00015093: ;
    ecx = MEM32(esp + 0x18);
    MEM32(eax) = ecx;

loc_00015099: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000150B0
 * Original: 0x000150B0 - 0x0001510B (91 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000150B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000150B0: ;
    edx = MEM32(eax);
    ecx = MEM32(edx + 4);
    eax = MEM32(ecx + 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(eax + 0x15));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000150D8; /* jne: not equal / not zero */

loc_000150C3: ;
    _fa = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0xC), esi (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000150CD; /* jge: greater or equal (signed >=) */

loc_000150C8: ;
    eax = MEM32(eax + 8);
    goto loc_000150D1;

loc_000150CD: ;
    ecx = eax;
    eax = MEM32(eax);

loc_000150D1: ;
    SET_LO8(ebx, MEM8(eax + 0x15));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000150C3; /* je: equal / zero */

loc_000150D8: ;
    eax = MEM32(edx + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    MEM32(esp + 4) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_000150EE; /* je: equal / zero */

loc_000150E3: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(ecx + 0xC) (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000150EE; /* jl: less (signed <) */

loc_000150E8: ;
    eax = esp + 4;
    goto loc_000150F6;

loc_000150EE: ;
    MEM32(esp + 8) = eax;
    eax = esp + 8;

loc_000150F6: ;
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(edx + 4) (32-bit) */
    POP32(esp, ebx);
    if (CMP_NE(_fa, _fb)) goto loc_00015104; /* jne: not equal / not zero */

loc_000150FE: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00015104: ;
    eax = MEM32(eax + 0x10);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00015110
 * Original: 0x00015110 - 0x0001516C (92 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00015110(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00015110: ;
    edx = MEM32(eax + 4);
    ecx = MEM32(edx + 4);
    eax = MEM32(ecx + 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(eax + 0x15));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00015139; /* jne: not equal / not zero */

loc_00015124: ;
    _fa = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0xC), esi (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0001512E; /* jge: greater or equal (signed >=) */

loc_00015129: ;
    eax = MEM32(eax + 8);
    goto loc_00015132;

loc_0001512E: ;
    ecx = eax;
    eax = MEM32(eax);

loc_00015132: ;
    SET_LO8(ebx, MEM8(eax + 0x15));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00015124; /* je: equal / zero */

loc_00015139: ;
    eax = MEM32(edx + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    MEM32(esp + 4) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_0001514F; /* je: equal / zero */

loc_00015144: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(ecx + 0xC) (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0001514F; /* jl: less (signed <) */

loc_00015149: ;
    eax = esp + 4;
    goto loc_00015157;

loc_0001514F: ;
    MEM32(esp + 8) = eax;
    eax = esp + 8;

loc_00015157: ;
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(edx + 4) (32-bit) */
    POP32(esp, ebx);
    if (CMP_NE(_fa, _fb)) goto loc_00015165; /* jne: not equal / not zero */

loc_0001515F: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00015165: ;
    eax = MEM32(eax + 0x10);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00015170
 * Original: 0x00015170 - 0x000151CC (92 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00015170(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00015170: ;
    edx = MEM32(eax + 8);
    ecx = MEM32(edx + 4);
    eax = MEM32(ecx + 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(eax + 0x15));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00015199; /* jne: not equal / not zero */

loc_00015184: ;
    _fa = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0xC), esi (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0001518E; /* jge: greater or equal (signed >=) */

loc_00015189: ;
    eax = MEM32(eax + 8);
    goto loc_00015192;

loc_0001518E: ;
    ecx = eax;
    eax = MEM32(eax);

loc_00015192: ;
    SET_LO8(ebx, MEM8(eax + 0x15));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00015184; /* je: equal / zero */

loc_00015199: ;
    eax = MEM32(edx + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    MEM32(esp + 4) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_000151AF; /* je: equal / zero */

loc_000151A4: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(ecx + 0xC) (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000151AF; /* jl: less (signed <) */

loc_000151A9: ;
    eax = esp + 4;
    goto loc_000151B7;

loc_000151AF: ;
    MEM32(esp + 8) = eax;
    eax = esp + 8;

loc_000151B7: ;
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(edx + 4) (32-bit) */
    POP32(esp, ebx);
    if (CMP_NE(_fa, _fb)) goto loc_000151C5; /* jne: not equal / not zero */

loc_000151BF: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000151C5: ;
    eax = MEM32(eax + 0x10);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000151D0
 * Original: 0x000151D0 - 0x0001522C (92 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000151D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000151D0: ;
    edx = MEM32(eax + 0xC);
    ecx = MEM32(edx + 4);
    eax = MEM32(ecx + 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(eax + 0x15));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000151F9; /* jne: not equal / not zero */

loc_000151E4: ;
    _fa = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0xC), esi (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000151EE; /* jge: greater or equal (signed >=) */

loc_000151E9: ;
    eax = MEM32(eax + 8);
    goto loc_000151F2;

loc_000151EE: ;
    ecx = eax;
    eax = MEM32(eax);

loc_000151F2: ;
    SET_LO8(ebx, MEM8(eax + 0x15));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000151E4; /* je: equal / zero */

loc_000151F9: ;
    eax = MEM32(edx + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    MEM32(esp + 4) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_0001520F; /* je: equal / zero */

loc_00015204: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(ecx + 0xC) (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0001520F; /* jl: less (signed <) */

loc_00015209: ;
    eax = esp + 4;
    goto loc_00015217;

loc_0001520F: ;
    MEM32(esp + 8) = eax;
    eax = esp + 8;

loc_00015217: ;
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(edx + 4) (32-bit) */
    POP32(esp, ebx);
    if (CMP_NE(_fa, _fb)) goto loc_00015225; /* jne: not equal / not zero */

loc_0001521F: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00015225: ;
    eax = MEM32(eax + 0x10);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00015230
 * Original: 0x00015230 - 0x0001528C (92 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00015230(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00015230: ;
    edx = MEM32(eax + 0x10);
    ecx = MEM32(edx + 4);
    eax = MEM32(ecx + 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(eax + 0x15));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00015259; /* jne: not equal / not zero */

loc_00015244: ;
    _fa = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0xC), esi (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0001524E; /* jge: greater or equal (signed >=) */

loc_00015249: ;
    eax = MEM32(eax + 8);
    goto loc_00015252;

loc_0001524E: ;
    ecx = eax;
    eax = MEM32(eax);

loc_00015252: ;
    SET_LO8(ebx, MEM8(eax + 0x15));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00015244; /* je: equal / zero */

loc_00015259: ;
    eax = MEM32(edx + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    MEM32(esp + 4) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_0001526F; /* je: equal / zero */

loc_00015264: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(ecx + 0xC) (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0001526F; /* jl: less (signed <) */

loc_00015269: ;
    eax = esp + 4;
    goto loc_00015277;

loc_0001526F: ;
    MEM32(esp + 8) = eax;
    eax = esp + 8;

loc_00015277: ;
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(edx + 4) (32-bit) */
    POP32(esp, ebx);
    if (CMP_NE(_fa, _fb)) goto loc_00015285; /* jne: not equal / not zero */

loc_0001527F: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00015285: ;
    eax = MEM32(eax + 0x10);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00015290
 * Original: 0x00015290 - 0x000152EC (92 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00015290(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00015290: ;
    edx = MEM32(eax + 0x14);
    ecx = MEM32(edx + 4);
    eax = MEM32(ecx + 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(eax + 0x15));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000152B9; /* jne: not equal / not zero */

loc_000152A4: ;
    _fa = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0xC), esi (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000152AE; /* jge: greater or equal (signed >=) */

loc_000152A9: ;
    eax = MEM32(eax + 8);
    goto loc_000152B2;

loc_000152AE: ;
    ecx = eax;
    eax = MEM32(eax);

loc_000152B2: ;
    SET_LO8(ebx, MEM8(eax + 0x15));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000152A4; /* je: equal / zero */

loc_000152B9: ;
    eax = MEM32(edx + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    MEM32(esp + 4) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_000152CF; /* je: equal / zero */

loc_000152C4: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(ecx + 0xC) (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000152CF; /* jl: less (signed <) */

loc_000152C9: ;
    eax = esp + 4;
    goto loc_000152D7;

loc_000152CF: ;
    MEM32(esp + 8) = eax;
    eax = esp + 8;

loc_000152D7: ;
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(edx + 4) (32-bit) */
    POP32(esp, ebx);
    if (CMP_NE(_fa, _fb)) goto loc_000152E5; /* jne: not equal / not zero */

loc_000152DF: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000152E5: ;
    eax = MEM32(eax + 0x10);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000152F0
 * Original: 0x000152F0 - 0x00015432 (322 bytes, 138 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000152F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000152F0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = ecx;
    ebx = eax;
    eax = MEM32(edi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    eax = MEM32(edi + 4);
    if (CMP_NE(_fa, _fb)) goto loc_00015316; /* jne: not equal / not zero */

loc_00015303: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0001530Cu); RECOMP_ABI_CALL(0x00015440u, sub_00015440); /* call 0x00015440 */

loc_0001530C: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_00015316: ;
    ecx = MEM32(eax);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x18);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00015344; /* jne: not equal / not zero */

loc_00015321: ;
    eax = MEM32(ebx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + 0xC) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00015419; /* jge: greater or equal (signed >=) */

loc_0001532C: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    eax = ebp;
    ecx = edi;
    PUSH32(esp, 0x00015339u); RECOMP_ABI_CALL(0x00015440u, sub_00015440); /* call 0x00015440 */

loc_00015339: ;
    POP32(esp, ebp);
    POP32(esp, edi);
    eax = esi;
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_00015344: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0001536C; /* jne: not equal / not zero */

loc_00015348: ;
    eax = MEM32(eax + 8);
    ecx = MEM32(eax + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(ebx) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00015419; /* jge: greater or equal (signed >=) */

loc_00015356: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x00015361u); RECOMP_ABI_CALL(0x00015440u, sub_00015440); /* call 0x00015440 */

loc_00015361: ;
    POP32(esp, ebp);
    POP32(esp, edi);
    eax = esi;
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_0001536C: ;
    eax = MEM32(ebx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + 0xC) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000153C0; /* jge: greater or equal (signed >=) */

loc_00015373: ;
    edx = esp + 0x18;
    MEM32(esp + 0x18) = ebp;
    PUSH32(esp, 0x00015380u); RECOMP_ABI_CALL(0x0002B6A0u, sub_0002B6A0); /* call 0x0002B6A0 */

loc_00015380: ;
    eax = MEM32(esp + 0x18);
    ecx = MEM32(ebx);
    _fa = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0xC), ecx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000153C0; /* jge: greater or equal (signed >=) */

loc_0001538B: ;
    edx = MEM32(eax + 8);
    SET_LO8(ecx, MEM8(edx + 0x15));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    PUSH32(esp, ebx);
    ecx = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_000153AB; /* je: equal / zero */

loc_00015398: ;
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000153A0u); RECOMP_ABI_CALL(0x00015440u, sub_00015440); /* call 0x00015440 */

loc_000153A0: ;
    POP32(esp, ebp);
    POP32(esp, edi);
    eax = esi;
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_000153AB: ;
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    eax = ebp;
    PUSH32(esp, 0x000153B5u); RECOMP_ABI_CALL(0x00015440u, sub_00015440); /* call 0x00015440 */

loc_000153B5: ;
    POP32(esp, ebp);
    POP32(esp, edi);
    eax = esi;
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_000153C0: ;
    eax = MEM32(ebx);
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00015419; /* jge: greater or equal (signed >=) */

loc_000153C7: ;
    edx = esp + 0x18;
    MEM32(esp + 0x18) = ebp;
    PUSH32(esp, 0x000153D4u); RECOMP_ABI_CALL(0x0002B700u, sub_0002B700); /* call 0x0002B700 */

loc_000153D4: ;
    eax = MEM32(esp + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(edi + 4) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000153E4; /* je: equal / zero */

loc_000153DD: ;
    ecx = MEM32(ebx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(eax + 0xC) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00015419; /* jge: greater or equal (signed >=) */

loc_000153E4: ;
    ecx = MEM32(ebp + 8);
    SET_LO8(edx, MEM8(ecx + 0x15));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    ecx = edi;
    PUSH32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_00015406; /* je: equal / zero */

loc_000153F1: ;
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    eax = ebp;
    PUSH32(esp, 0x000153FBu); RECOMP_ABI_CALL(0x00015440u, sub_00015440); /* call 0x00015440 */

loc_000153FB: ;
    POP32(esp, ebp);
    POP32(esp, edi);
    eax = esi;
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_00015406: ;
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0001540Eu); RECOMP_ABI_CALL(0x00015440u, sub_00015440); /* call 0x00015440 */

loc_0001540E: ;
    POP32(esp, ebp);
    POP32(esp, edi);
    eax = esi;
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_00015419: ;
    PUSH32(esp, edi);
    edi = esp + 0x10;
    PUSH32(esp, 0x00015423u); RECOMP_ABI_CALL(0x000155F0u, sub_000155F0); /* call 0x000155F0 */

loc_00015423: ;
    edx = MEM32(eax);
    POP32(esp, ebp);
    POP32(esp, edi);
    MEM32(esi) = edx;
    eax = esi;
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00015440
 * Original: 0x00015440 - 0x000155E4 (420 bytes, 144 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00015440(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00015440: ;
    _fb = (uint32_t)(0x44) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x44;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    esi = eax;
    _fa = (uint32_t)(MEM32(edi + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1FFFFFFE) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 8), 0x1FFFFFFE (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000154BC; /* jb: below (unsigned <) */

loc_00015452: ;
    PUSH32(esp, 0x13);
    edi = 0xF;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x5AC6C4);
    ecx = esp + 0x10;
    MEM32(esp + 0x28) = edi;
    MEM32(esp + 0x24) = esi;
    MEM8(esp + 0x14) = 0;
    PUSH32(esp, 0x00015476u); RECOMP_ABI_CALL(0x000143C0u, sub_000143C0); /* call 0x000143C0 */

loc_00015476: ;
    ecx = esp + 0x24;
    PUSH32(esp, 0x0001547Fu); RECOMP_ABI_CALL(0x0046E531u, sub_0046E531); /* call 0x0046E531 */

loc_0001547F: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, esi);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    ecx = esp + 0x3C;
    MEM32(esp + 0x30) = 0x5AC69C;
    MEM32(esp + 0x54) = edi;
    MEM32(esp + 0x50) = esi;
    MEM8(esp + 0x40) = 0;
    PUSH32(esp, 0x000154A5u); RECOMP_ABI_CALL(0x000144B0u, sub_000144B0); /* call 0x000144B0 */

loc_000154A5: ;
    PUSH32(esp, 0x64B640);
    ecx = esp + 0x28;
    PUSH32(esp, ecx);
    MEM32(esp + 0x2C) = 0x5AC694;
    PUSH32(esp, 0x000154BCu); RECOMP_ABI_CALL(0x004720B3u, sub_004720B3); /* call 0x004720B3 */

loc_000154BC: ;
    edx = MEM32(esp + 0x58);
    eax = MEM32(edi + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000154CFu); RECOMP_ABI_CALL(0x0002B4E0u, sub_0002B4E0); /* call 0x0002B4E0 */

loc_000154CF: ;
    ebx = MEM32(edi + 8);
    ecx = eax;
    eax = MEM32(edi + 4);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    MEM32(esp + 0x5C) = ecx;
    MEM32(edi + 8) = ebx;
    if (CMP_NE(_fa, _fb)) goto loc_000154F3; /* jne: not equal / not zero */

loc_000154E3: ;
    MEM32(eax + 4) = ecx;
    eax = MEM32(edi + 4);
    MEM32(eax) = ecx;
    edx = MEM32(edi + 4);
    MEM32(edx + 8) = ecx;
    goto loc_00015516;

loc_000154F3: ;
    SET_LO8(eax, MEM8(esp + 0x58));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00015508; /* je: equal / zero */

loc_000154FB: ;
    MEM32(esi) = ecx;
    eax = MEM32(edi + 4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(eax) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00015516; /* jne: not equal / not zero */

loc_00015504: ;
    MEM32(eax) = ecx;
    goto loc_00015516;

loc_00015508: ;
    MEM32(esi + 8) = ecx;
    eax = MEM32(edi + 4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(eax + 8) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00015516; /* jne: not equal / not zero */

loc_00015513: ;
    MEM32(eax + 8) = ecx;

loc_00015516: ;
    edx = MEM32(ecx + 4);
    _fa = (uint32_t)(MEM8(edx + 0x14)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edx + 0x14), 0 (8-bit) */
    eax = ecx + 4;
    esi = ecx;
    SET_LO8(ebx, 1);
    if (CMP_NE(_fa, _fb)) goto loc_000155CC; /* jne: not equal / not zero */

loc_0001552A: ;
    PUSH32(esp, ebp);
    goto loc_00015530;

    /* nop */

loc_00015530: ;
    ecx = MEM32(eax);
    ebp = MEM32(ecx + 4);
    edx = MEM32(ebp);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00015588; /* jne: not equal / not zero */

loc_0001553C: ;
    edx = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM8(edx + 0x14)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edx + 0x14), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0001555D; /* jne: not equal / not zero */

loc_00015545: ;
    ecx = MEM32(eax);
    MEM8(ecx + 0x14) = LO8(ebx);
    MEM8(edx + 0x14) = LO8(ebx);
    edx = MEM32(eax);
    ecx = MEM32(edx + 4);
    MEM8(ecx + 0x14) = 0;
    edx = MEM32(eax);
    esi = MEM32(edx + 4);
    goto loc_000155B6;

loc_0001555D: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(ecx + 8) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0001556A; /* jne: not equal / not zero */

loc_00015562: ;
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x0001556Au); RECOMP_ABI_CALL(0x0002B480u, sub_0002B480); /* call 0x0002B480 */

loc_0001556A: ;
    eax = MEM32(esi + 4);
    MEM8(eax + 0x14) = LO8(ebx);
    ecx = MEM32(esi + 4);
    edx = MEM32(ecx + 4);
    MEM8(edx + 0x14) = 0;
    eax = MEM32(esi + 4);
    ecx = MEM32(eax + 4);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00015586u); RECOMP_ABI_CALL(0x0002B110u, sub_0002B110); /* call 0x0002B110 */

loc_00015586: ;
    goto loc_000155B6;

loc_00015588: ;
    _fa = (uint32_t)(MEM8(edx + 0x14)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edx + 0x14), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00015545; /* je: equal / zero */

loc_0001558E: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(ecx) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0001559A; /* jne: not equal / not zero */

loc_00015592: ;
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x0001559Au); RECOMP_ABI_CALL(0x0002B110u, sub_0002B110); /* call 0x0002B110 */

loc_0001559A: ;
    eax = MEM32(esi + 4);
    MEM8(eax + 0x14) = LO8(ebx);
    ecx = MEM32(esi + 4);
    edx = MEM32(ecx + 4);
    MEM8(edx + 0x14) = 0;
    eax = MEM32(esi + 4);
    ecx = MEM32(eax + 4);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000155B6u); RECOMP_ABI_CALL(0x0002B480u, sub_0002B480); /* call 0x0002B480 */

loc_000155B6: ;
    ecx = MEM32(esi + 4);
    SET_LO8(edx, MEM8(ecx + 0x14));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    eax = esi + 4;
    if (CMP_EQ(_fa, _fb)) goto loc_00015530; /* je: equal / zero */

loc_000155C7: ;
    ecx = MEM32(esp + 0x60);
    POP32(esp, ebp);

loc_000155CC: ;
    edx = MEM32(edi + 4);
    eax = MEM32(edx + 4);
    MEM8(eax + 0x14) = LO8(ebx);
    eax = MEM32(esp + 0x54);
    POP32(esp, ebx);
    POP32(esp, edi);
    MEM32(eax) = ecx;
    POP32(esp, esi);
    _fb = (uint32_t)(0x44) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x44;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_000155F0
 * Original: 0x000155F0 - 0x000156A5 (181 bytes, 75 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000155F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000155F0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 4);
    eax = MEM32(esi + 4);
    SET_LO8(edx, MEM8(eax + 0x15));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    SET_LO8(ecx, 1);
    MEM8(esp + 8) = LO8(ecx);
    if (CMP_NE(_fa, _fb)) goto loc_0001562D; /* jne: not equal / not zero */

loc_0001560A: ;
    edx = MEM32(ebx);
    /* nop */

loc_00015610: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(eax + 0xC) (32-bit) */
    SET_LO8(ecx, (CMP_L(_fas, _fbs)) ? 1 : 0); /* setl */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    esi = eax;
    MEM8(esp + 8) = LO8(ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_00015624; /* je: equal / zero */

loc_00015620: ;
    eax = MEM32(eax);
    goto loc_00015627;

loc_00015624: ;
    eax = MEM32(eax + 8);

loc_00015627: ;
    _fa = (uint32_t)(MEM8(eax + 0x15)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x15), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00015610; /* je: equal / zero */

loc_0001562D: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    eax = esi;
    MEM32(esp + 0x10) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0001566C; /* je: equal / zero */

loc_00015637: ;
    eax = MEM32(ebp + 4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(eax) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0001565F; /* jne: not equal / not zero */

loc_0001563E: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 1);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    eax = esi;
    ecx = ebp;
    PUSH32(esp, 0x0001564Fu); RECOMP_ABI_CALL(0x00015440u, sub_00015440); /* call 0x00015440 */

loc_0001564F: ;
    edx = MEM32(eax);
    POP32(esp, esi);
    MEM32(edi) = edx;
    MEM8(edi + 4) = 1;
    eax = edi;
    POP32(esp, ebp);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

loc_0001565F: ;
    edx = esp + 0x10;
    PUSH32(esp, 0x00015668u); RECOMP_ABI_CALL(0x0002B6A0u, sub_0002B6A0); /* call 0x0002B6A0 */

loc_00015668: ;
    eax = MEM32(esp + 0x10);

loc_0001566C: ;
    ecx = MEM32(eax + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(ebx) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00015697; /* jge: greater or equal (signed >=) */

loc_00015673: ;
    edx = MEM32(esp + 8);
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    eax = esi;
    ecx = ebp;
    PUSH32(esp, 0x00015687u); RECOMP_ABI_CALL(0x00015440u, sub_00015440); /* call 0x00015440 */

loc_00015687: ;
    ecx = MEM32(eax);
    POP32(esp, esi);
    MEM32(edi) = ecx;
    MEM8(edi + 4) = 1;
    eax = edi;
    POP32(esp, ebp);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

loc_00015697: ;
    POP32(esp, esi);
    MEM32(edi) = eax;
    MEM8(edi + 4) = 0;
    eax = edi;
    POP32(esp, ebp);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000156B0
 * Original: 0x000156B0 - 0x000156C8 (24 bytes, 7 insns)
 * Category: game_audio
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000156B0(void)
{

loc_000156B0: ;
    eax = ecx;
    ecx = MEM32(esp + 8);
    PUSH32(esp, 0x5ACA88);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, 0x000156C5u); RECOMP_ABI_CALL(0x00012950u, sub_00012950); /* call 0x00012950 */

loc_000156C5: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000156D0
 * Original: 0x000156D0 - 0x000156E8 (24 bytes, 7 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000156D0(void)
{

loc_000156D0: ;
    eax = ecx;
    ecx = MEM32(esp + 8);
    PUSH32(esp, 0x5ACA7C);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, 0x000156E5u); RECOMP_ABI_CALL(0x00012950u, sub_00012950); /* call 0x00012950 */

loc_000156E5: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000156F0
 * Original: 0x000156F0 - 0x00015708 (24 bytes, 7 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000156F0(void)
{

loc_000156F0: ;
    eax = ecx;
    ecx = MEM32(esp + 8);
    PUSH32(esp, 0x5ACA74);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, 0x00015705u); RECOMP_ABI_CALL(0x00012950u, sub_00012950); /* call 0x00012950 */

loc_00015705: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00015710
 * Original: 0x00015710 - 0x00015728 (24 bytes, 7 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00015710(void)
{

loc_00015710: ;
    eax = ecx;
    ecx = MEM32(esp + 8);
    PUSH32(esp, 0x5ACA64);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, 0x00015725u); RECOMP_ABI_CALL(0x00012950u, sub_00012950); /* call 0x00012950 */

loc_00015725: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00015730
 * Original: 0x00015730 - 0x00015748 (24 bytes, 7 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00015730(void)
{

loc_00015730: ;
    eax = ecx;
    ecx = MEM32(esp + 8);
    PUSH32(esp, 0x5ACA5C);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, 0x00015745u); RECOMP_ABI_CALL(0x00012950u, sub_00012950); /* call 0x00012950 */

loc_00015745: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00015750
 * Original: 0x00015750 - 0x00015768 (24 bytes, 7 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00015750(void)
{

loc_00015750: ;
    eax = ecx;
    ecx = MEM32(esp + 8);
    PUSH32(esp, 0x5ACA50);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, 0x00015765u); RECOMP_ABI_CALL(0x00012950u, sub_00012950); /* call 0x00012950 */

loc_00015765: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00015770
 * Original: 0x00015770 - 0x00015788 (24 bytes, 7 insns)
 * Category: game_audio
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00015770(void)
{

loc_00015770: ;
    eax = ecx;
    ecx = MEM32(esp + 8);
    PUSH32(esp, 0x5ACA44);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, 0x00015785u); RECOMP_ABI_CALL(0x00012950u, sub_00012950); /* call 0x00012950 */

loc_00015785: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00015790
 * Original: 0x00015790 - 0x000157A8 (24 bytes, 7 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00015790(void)
{

loc_00015790: ;
    eax = ecx;
    ecx = MEM32(esp + 8);
    PUSH32(esp, 0x5ACA38);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, 0x000157A5u); RECOMP_ABI_CALL(0x00012950u, sub_00012950); /* call 0x00012950 */

loc_000157A5: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000157B0
 * Original: 0x000157B0 - 0x000157C8 (24 bytes, 7 insns)
 * Category: game_audio
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000157B0(void)
{

loc_000157B0: ;
    eax = ecx;
    ecx = MEM32(esp + 8);
    PUSH32(esp, 0x5ACA28);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, 0x000157C5u); RECOMP_ABI_CALL(0x00012950u, sub_00012950); /* call 0x00012950 */

loc_000157C5: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000157D0
 * Original: 0x000157D0 - 0x000157E8 (24 bytes, 7 insns)
 * Category: game_audio
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000157D0(void)
{

loc_000157D0: ;
    eax = ecx;
    ecx = MEM32(esp + 8);
    PUSH32(esp, 0x5ACA18);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, 0x000157E5u); RECOMP_ABI_CALL(0x00012950u, sub_00012950); /* call 0x00012950 */

loc_000157E5: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000157F0
 * Original: 0x000157F0 - 0x00015808 (24 bytes, 7 insns)
 * Category: game_audio
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000157F0(void)
{

loc_000157F0: ;
    eax = ecx;
    ecx = MEM32(esp + 8);
    PUSH32(esp, 0x5ACA08);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, 0x00015805u); RECOMP_ABI_CALL(0x00012950u, sub_00012950); /* call 0x00012950 */

loc_00015805: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00015810
 * Original: 0x00015810 - 0x00015828 (24 bytes, 7 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00015810(void)
{

loc_00015810: ;
    eax = ecx;
    ecx = MEM32(esp + 8);
    PUSH32(esp, 0x5AC9F8);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, 0x00015825u); RECOMP_ABI_CALL(0x00012950u, sub_00012950); /* call 0x00012950 */

loc_00015825: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00015830
 * Original: 0x00015830 - 0x00015848 (24 bytes, 7 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00015830(void)
{

loc_00015830: ;
    eax = ecx;
    ecx = MEM32(esp + 8);
    PUSH32(esp, 0x5AC9E8);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, 0x00015845u); RECOMP_ABI_CALL(0x00012950u, sub_00012950); /* call 0x00012950 */

loc_00015845: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00015850
 * Original: 0x00015850 - 0x00015868 (24 bytes, 7 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00015850(void)
{

loc_00015850: ;
    eax = ecx;
    ecx = MEM32(esp + 8);
    PUSH32(esp, 0x5AC9E0);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, 0x00015865u); RECOMP_ABI_CALL(0x00012950u, sub_00012950); /* call 0x00012950 */

loc_00015865: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00015870
 * Original: 0x00015870 - 0x00015888 (24 bytes, 7 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00015870(void)
{

loc_00015870: ;
    eax = ecx;
    ecx = MEM32(esp + 8);
    PUSH32(esp, 0x5AC9D0);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, 0x00015885u); RECOMP_ABI_CALL(0x00012950u, sub_00012950); /* call 0x00012950 */

loc_00015885: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00015890
 * Original: 0x00015890 - 0x000158A8 (24 bytes, 7 insns)
 * Category: game_audio
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00015890(void)
{

loc_00015890: ;
    eax = ecx;
    ecx = MEM32(esp + 8);
    PUSH32(esp, 0x5AC9C4);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, 0x000158A5u); RECOMP_ABI_CALL(0x00012950u, sub_00012950); /* call 0x00012950 */

loc_000158A5: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000158B0
 * Original: 0x000158B0 - 0x000158C8 (24 bytes, 7 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000158B0(void)
{

loc_000158B0: ;
    eax = ecx;
    ecx = MEM32(esp + 8);
    PUSH32(esp, 0x5AC9B8);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, 0x000158C5u); RECOMP_ABI_CALL(0x00012950u, sub_00012950); /* call 0x00012950 */

loc_000158C5: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000158D0
 * Original: 0x000158D0 - 0x000158E8 (24 bytes, 7 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000158D0(void)
{

loc_000158D0: ;
    eax = ecx;
    ecx = MEM32(esp + 8);
    PUSH32(esp, 0x5AC9B4);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, 0x000158E5u); RECOMP_ABI_CALL(0x00012950u, sub_00012950); /* call 0x00012950 */

loc_000158E5: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000158F0
 * Original: 0x000158F0 - 0x00015908 (24 bytes, 7 insns)
 * Category: game_vehicle
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000158F0(void)
{

loc_000158F0: ;
    eax = ecx;
    ecx = MEM32(esp + 8);
    PUSH32(esp, 0x5AC9AC);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, 0x00015905u); RECOMP_ABI_CALL(0x00012950u, sub_00012950); /* call 0x00012950 */

loc_00015905: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00015910
 * Original: 0x00015910 - 0x00015928 (24 bytes, 7 insns)
 * Category: game_audio
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00015910(void)
{

loc_00015910: ;
    eax = ecx;
    ecx = MEM32(esp + 8);
    PUSH32(esp, 0x5AC99C);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, 0x00015925u); RECOMP_ABI_CALL(0x00012950u, sub_00012950); /* call 0x00012950 */

loc_00015925: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00015930
 * Original: 0x00015930 - 0x00015948 (24 bytes, 7 insns)
 * Category: game_audio
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00015930(void)
{

loc_00015930: ;
    eax = ecx;
    ecx = MEM32(esp + 8);
    PUSH32(esp, 0x5AC98C);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, 0x00015945u); RECOMP_ABI_CALL(0x00012950u, sub_00012950); /* call 0x00012950 */

loc_00015945: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00015950
 * Original: 0x00015950 - 0x00015968 (24 bytes, 7 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00015950(void)
{

loc_00015950: ;
    eax = ecx;
    ecx = MEM32(esp + 8);
    PUSH32(esp, 0x5AC97C);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, 0x00015965u); RECOMP_ABI_CALL(0x00012950u, sub_00012950); /* call 0x00012950 */

loc_00015965: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00015970
 * Original: 0x00015970 - 0x00015988 (24 bytes, 7 insns)
 * Category: game_audio
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00015970(void)
{

loc_00015970: ;
    eax = ecx;
    ecx = MEM32(esp + 8);
    PUSH32(esp, 0x5AC970);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, 0x00015985u); RECOMP_ABI_CALL(0x00012950u, sub_00012950); /* call 0x00012950 */

loc_00015985: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00015990
 * Original: 0x00015990 - 0x000159A8 (24 bytes, 7 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00015990(void)
{

loc_00015990: ;
    eax = ecx;
    ecx = MEM32(esp + 8);
    PUSH32(esp, 0x5AC968);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, 0x000159A5u); RECOMP_ABI_CALL(0x00012950u, sub_00012950); /* call 0x00012950 */

loc_000159A5: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000159B0
 * Original: 0x000159B0 - 0x00015A01 (81 bytes, 20 insns)
 * Category: game_vtable
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000159B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_000159B0: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x648D2C)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000159D4; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_000159C9: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    goto loc_000159E7;

loc_000159D4: ;
    xmm1 = XMM_SCALAR(MEMF(0x648D14)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000159E7; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_000159E1: ;
    MEMF(esp + 8) = xmm1.f[0]; /* movss */

loc_000159E7: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x5AC968);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000159FBu); RECOMP_ABI_CALL(0x00400E40u, sub_00400E40); /* call 0x00400E40 */

loc_000159FB: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00015A10
 * Original: 0x00015A10 - 0x00015A3F (47 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00015A10(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00015A10: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    SET_LO8(ecx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    MEM8(eax + 8) = LO8(ecx);
    MEM8(eax + 9) = LO8(ecx);
    MEMF(eax + 0xC) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x10) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x14) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x18) = xmm0.f[0]; /* movss */
    MEM32(eax) = 0x5AC7B0;
    MEM8(eax + 0x1C) = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_00015A40
 * Original: 0x00015A40 - 0x00015A58 (24 bytes, 7 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00015A40(void)
{

loc_00015A40: ;
    eax = ecx;
    ecx = MEM32(esp + 8);
    PUSH32(esp, 0x5AC960);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, 0x00015A55u); RECOMP_ABI_CALL(0x00012950u, sub_00012950); /* call 0x00012950 */

loc_00015A55: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00015A60
 * Original: 0x00015A60 - 0x00015AB1 (81 bytes, 20 insns)
 * Category: game_vtable
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00015A60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_00015A60: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x648D2C)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00015A84; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_00015A79: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    goto loc_00015A97;

loc_00015A84: ;
    xmm1 = XMM_SCALAR(MEMF(0x648D14)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00015A97; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_00015A91: ;
    MEMF(esp + 8) = xmm1.f[0]; /* movss */

loc_00015A97: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x5AC960);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00015AABu); RECOMP_ABI_CALL(0x00400E40u, sub_00400E40); /* call 0x00400E40 */

loc_00015AAB: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00015AC0
 * Original: 0x00015AC0 - 0x00015AEF (47 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00015AC0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00015AC0: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    SET_LO8(ecx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    MEM8(eax + 8) = LO8(ecx);
    MEM8(eax + 9) = LO8(ecx);
    MEMF(eax + 0xC) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x10) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x14) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x18) = xmm0.f[0]; /* movss */
    MEM32(eax) = 0x5AC788;
    MEM8(eax + 0x1C) = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_00015AF0
 * Original: 0x00015AF0 - 0x00015B1F (47 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00015AF0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00015AF0: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    SET_LO8(ecx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    MEM8(eax + 8) = LO8(ecx);
    MEM8(eax + 9) = LO8(ecx);
    MEMF(eax + 0xC) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x10) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x14) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x18) = xmm0.f[0]; /* movss */
    MEM32(eax) = 0x5AC7F8;
    MEM8(eax + 0x1C) = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_00015B20
 * Original: 0x00015B20 - 0x00015B4F (47 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00015B20(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00015B20: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    SET_LO8(ecx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    MEM8(eax + 8) = LO8(ecx);
    MEM8(eax + 9) = LO8(ecx);
    MEMF(eax + 0xC) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x10) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x14) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x18) = xmm0.f[0]; /* movss */
    MEM32(eax) = 0x5AC720;
    MEM8(eax + 0x1C) = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_00015B50
 * Original: 0x00015B50 - 0x00015B68 (24 bytes, 7 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00015B50(void)
{

loc_00015B50: ;
    eax = ecx;
    ecx = MEM32(esp + 8);
    PUSH32(esp, 0x5AC958);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, 0x00015B65u); RECOMP_ABI_CALL(0x00012950u, sub_00012950); /* call 0x00012950 */

loc_00015B65: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00015B70
 * Original: 0x00015B70 - 0x00015BC1 (81 bytes, 20 insns)
 * Category: game_vtable
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00015B70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_00015B70: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x648D2C)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00015B94; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_00015B89: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    goto loc_00015BA7;

loc_00015B94: ;
    xmm1 = XMM_SCALAR(MEMF(0x648D14)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00015BA7; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_00015BA1: ;
    MEMF(esp + 8) = xmm1.f[0]; /* movss */

loc_00015BA7: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x5AC958);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00015BBBu); RECOMP_ABI_CALL(0x00400E40u, sub_00400E40); /* call 0x00400E40 */

loc_00015BBB: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00015BD0
 * Original: 0x00015BD0 - 0x00015C21 (81 bytes, 20 insns)
 * Category: game_vtable
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00015BD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_00015BD0: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x648D2C)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00015BF4; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_00015BE9: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    goto loc_00015C07;

loc_00015BF4: ;
    xmm1 = XMM_SCALAR(MEMF(0x648D14)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00015C07; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_00015C01: ;
    MEMF(esp + 8) = xmm1.f[0]; /* movss */

loc_00015C07: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x5AC9B4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00015C1Bu); RECOMP_ABI_CALL(0x00400E40u, sub_00400E40); /* call 0x00400E40 */

loc_00015C1B: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00015C30
 * Original: 0x00015C30 - 0x00015C5F (47 bytes, 12 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00015C30(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00015C30: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    SET_LO8(ecx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    MEM8(eax + 8) = LO8(ecx);
    MEM8(eax + 9) = LO8(ecx);
    MEMF(eax + 0xC) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x10) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x14) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x18) = xmm0.f[0]; /* movss */
    MEM32(eax) = 0x5AC6F0;
    MEM8(eax + 0x1C) = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_00015C60
 * Original: 0x00015C60 - 0x00015CB1 (81 bytes, 20 insns)
 * Category: game_vehicle
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00015C60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_00015C60: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x648D2C)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00015C84; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_00015C79: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    goto loc_00015C97;

loc_00015C84: ;
    xmm1 = XMM_SCALAR(MEMF(0x648D14)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00015C97; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_00015C91: ;
    MEMF(esp + 8) = xmm1.f[0]; /* movss */

loc_00015C97: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x5AC9AC);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00015CABu); RECOMP_ABI_CALL(0x00400E40u, sub_00400E40); /* call 0x00400E40 */

loc_00015CAB: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00015CC0
 * Original: 0x00015CC0 - 0x00015CD8 (24 bytes, 7 insns)
 * Category: game_audio
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00015CC0(void)
{

loc_00015CC0: ;
    eax = ecx;
    ecx = MEM32(esp + 8);
    PUSH32(esp, 0x5AC948);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, 0x00015CD5u); RECOMP_ABI_CALL(0x00012950u, sub_00012950); /* call 0x00012950 */

loc_00015CD5: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00015CE0
 * Original: 0x00015CE0 - 0x00015CF8 (24 bytes, 7 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00015CE0(void)
{

loc_00015CE0: ;
    eax = ecx;
    ecx = MEM32(esp + 8);
    PUSH32(esp, 0x5AC938);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, 0x00015CF5u); RECOMP_ABI_CALL(0x00012950u, sub_00012950); /* call 0x00012950 */

loc_00015CF5: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00015D00
 * Original: 0x00015D00 - 0x00015D18 (24 bytes, 7 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00015D00(void)
{

loc_00015D00: ;
    eax = ecx;
    ecx = MEM32(esp + 8);
    PUSH32(esp, 0x5AC928);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, 0x00015D15u); RECOMP_ABI_CALL(0x00012950u, sub_00012950); /* call 0x00012950 */

loc_00015D15: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00015D20
 * Original: 0x00015D20 - 0x00015D38 (24 bytes, 7 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00015D20(void)
{

loc_00015D20: ;
    eax = ecx;
    ecx = MEM32(esp + 8);
    PUSH32(esp, 0x5AC918);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, 0x00015D35u); RECOMP_ABI_CALL(0x00012950u, sub_00012950); /* call 0x00012950 */

loc_00015D35: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00015D40
 * Original: 0x00015D40 - 0x00015D91 (81 bytes, 20 insns)
 * Category: game_vtable
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00015D40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_00015D40: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x648D2C)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00015D64; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_00015D59: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    goto loc_00015D77;

loc_00015D64: ;
    xmm1 = XMM_SCALAR(MEMF(0x648D14)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00015D77; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_00015D71: ;
    MEMF(esp + 8) = xmm1.f[0]; /* movss */

loc_00015D77: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x5AC918);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00015D8Bu); RECOMP_ABI_CALL(0x00400E40u, sub_00400E40); /* call 0x00400E40 */

loc_00015D8B: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00015DA0
 * Original: 0x00015DA0 - 0x00015DCF (47 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00015DA0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00015DA0: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    SET_LO8(ecx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    MEM8(eax + 8) = LO8(ecx);
    MEM8(eax + 9) = LO8(ecx);
    MEMF(eax + 0xC) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x10) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x14) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x18) = xmm0.f[0]; /* movss */
    MEM32(eax) = 0x5AC730;
    MEM8(eax + 0x1C) = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_00015DD0
 * Original: 0x00015DD0 - 0x00015E07 (55 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00015DD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00015DD0: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x29) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x29 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00015E06; /* jge: greater or equal (signed >=) */

loc_00015DD5: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00015E06; /* jl: less (signed <) */

loc_00015DD9: ;
    ecx = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = MEM32(0x847010);
    eax = MEM32(esi + edx * 4);
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00015DF7u); RECOMP_ABI_CALL(0x000128C0u, sub_000128C0); /* call 0x000128C0 */

loc_00015DF7: ;
    edx = MEM32(esi + edx * 4);
    SET_LO8(eax, MEM8(edx + 8));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    POP32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_00015E06; /* jne: not equal / not zero */

loc_00015E02: ;
    MEM8(edx + 8) = 1;

loc_00015E06: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00015E10
 * Original: 0x00015E10 - 0x00015E87 (119 bytes, 44 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00015E10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00015E10: ;
    ecx = MEM32(eax + 0xC);
    edx = MEM32(eax + 0xC);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    edi = eax + 8;
    eax = MEM32(ecx + 4);
    _fa = (uint32_t)(MEM8(eax + 0x1D)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x1D), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00015E44; /* jne: not equal / not zero */

loc_00015E2B: ;
    goto loc_00015E30;

    /* nop */

loc_00015E30: ;
    _fa = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0xC), esi (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00015E3A; /* jge: greater or equal (signed >=) */

loc_00015E35: ;
    eax = MEM32(eax + 8);
    goto loc_00015E3E;

loc_00015E3A: ;
    ecx = eax;
    eax = MEM32(eax);

loc_00015E3E: ;
    _fa = (uint32_t)(MEM8(eax + 0x1D)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x1D), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00015E30; /* je: equal / zero */

loc_00015E44: ;
    eax = MEM32(edi + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    MEM32(esp + 8) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_00015E5A; /* je: equal / zero */

loc_00015E4F: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(ecx + 0xC) (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00015E5A; /* jl: less (signed <) */

loc_00015E54: ;
    eax = esp + 8;
    goto loc_00015E62;

loc_00015E5A: ;
    MEM32(esp + 0xC) = eax;
    eax = esp + 0xC;

loc_00015E62: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00015E7F; /* jne: not equal / not zero */

loc_00015E66: ;
    eax = esp + 0x14;
    PUSH32(esp, 0x00015E6Fu); RECOMP_ABI_CALL(0x00013690u, sub_00013690); /* call 0x00013690 */

loc_00015E6F: ;
    ecx = MEM32(ebx);
    MEM32(eax) = ecx;
    edx = MEM32(ebx + 4);
    MEM32(eax + 4) = edx;
    ecx = MEM32(ebx + 8);
    MEM32(eax + 8) = ecx;

loc_00015E7F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00015E90
 * Original: 0x00015E90 - 0x00015EAB (27 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00015E90(void)
{

loc_00015E90: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = MEM32(esi + 4);
    SET_LO8(ebx, 1);
    PUSH32(esp, 0x00015E9Cu); RECOMP_ABI_CALL(0x0002E7A0u, sub_0002E7A0); /* call 0x0002E7A0 */

loc_00015E9C: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00015EA2u); RECOMP_ABI_CALL(0x00024C00u, sub_00024C00); /* call 0x00024C00 */

loc_00015EA2: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00015EA8u); RECOMP_ABI_CALL(0x00024C90u, sub_00024C90); /* call 0x00024C90 */

loc_00015EA8: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00015EB0
 * Original: 0x00015EB0 - 0x00015F7B (203 bytes, 62 insns)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00015EB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00015EB0: ;
    SET_LO8(ecx, MEM8(0x847267));
    PUSH32(esp, ebx);
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    PUSH32(esp, esi);
    SET_LO8(eax, 1);
    if (CMP_EQ(_fa, _fb)) goto loc_00015EC7; /* je: equal / zero */

loc_00015EC0: ;
    MEM8(0x847001) = LO8(eax);
    SET_LO8(ebx, LO8(eax));

loc_00015EC7: ;
    SET_LO8(ecx, MEM8(0x847266));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00015ED6; /* je: equal / zero */

loc_00015ED1: ;
    MEM8(0x847032) = LO8(eax);

loc_00015ED6: ;
    PUSH32(esp, 0x00015EDBu); RECOMP_ABI_CALL(0x000164F0u, sub_000164F0); /* call 0x000164F0 */

loc_00015EDB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(0x847024) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_00015F60; /* je: equal / zero */

loc_00015EE4: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00015EEAu); RECOMP_ABI_CALL(0x000162A0u, sub_000162A0); /* call 0x000162A0 */

loc_00015EEA: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00015EF3; /* je: equal / zero */

loc_00015EEE: ;
    PUSH32(esp, 0x00015EF3u); RECOMP_ABI_CALL(0x00018030u, sub_00018030); /* call 0x00018030 */

loc_00015EF3: ;
    PUSH32(esp, edi);
    edi = MEM32(0x847024);
    PUSH32(esp, 0x00015EFFu); RECOMP_ABI_CALL(0x000179D0u, sub_000179D0); /* call 0x000179D0 */

loc_00015EFF: ;
    SET_LO8(eax, MEM8(0x846FF0));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    POP32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_00015F1C; /* je: equal / zero */

loc_00015F09: ;
    esi = MEM32(0x847024);
    PUSH32(esp, 0x5AC8F4);
    PUSH32(esp, 0x00015F19u); RECOMP_ABI_CALL(0x00018B30u, sub_00018B30); /* call 0x00018B30 */

loc_00015F19: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00015F1C: ;
    PUSH32(esp, 0x00015F21u); RECOMP_ABI_CALL(0x00012800u, sub_00012800); /* call 0x00012800 */

loc_00015F21: ;
    MEM32(0x847028) = eax;
    eax = MEM32(0x847024);
    ecx = MEM32(eax + 0x40);
    PUSH32(esp, 0xDDA);
    MEM32(0x84706C) = ecx;
    PUSH32(esp, 0x00015F3Eu); RECOMP_ABI_CALL(0x0046DAB2u, sub_0046DAB2); /* call 0x0046DAB2 */

loc_00015F3E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(0x847070) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_00015F78; /* jne: not equal / not zero */

loc_00015F4A: ;
    PUSH32(esp, 0x587BE4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x587BE4);
    PUSH32(esp, 0x00015F5Au); RECOMP_ABI_CALL(0x001F0620u, sub_001F0620); /* call 0x001F0620 */

loc_00015F5A: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00015F60: ;
    SET_LO8(eax, MEM8(0x846FF0));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00015F78; /* je: equal / zero */

loc_00015F69: ;
    PUSH32(esp, 0x5AC8C4);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x00015F75u); RECOMP_ABI_CALL(0x00018B30u, sub_00018B30); /* call 0x00018B30 */

loc_00015F75: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00015F78: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00015F80
 * Original: 0x00015F80 - 0x00015FB1 (49 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00015F80(void)
{

loc_00015F80: ;
    PUSH32(esp, 0x00015F85u); RECOMP_ABI_CALL(0x00015FC0u, sub_00015FC0); /* call 0x00015FC0 */

loc_00015F85: ;
    xmm0 = XMM_SCALAR(MEMF(0x648F08)); /* movss */
    SET_LO8(eax, 1);
    MEM8(0x847008) = LO8(eax);
    MEMF(0x656CA4) = xmm0.f[0]; /* movss */
    MEM8(0x846FE8) = LO8(eax);
    MEM8(0x846FE9) = LO8(eax);
    MEM8(0x846FEA) = LO8(eax);
    MEM8(0x846FEB) = LO8(eax);
    esp += 4; return; /* ret */

}

/**
 * sub_00015FC0
 * Original: 0x00015FC0 - 0x000160A2 (226 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00015FC0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00015FC0: ;
    xmm0 = XMM_SCALAR(MEMF(0x648F08)); /* movss */
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    MEMF(0x656CA4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x648D10)); /* movss */
    MEMF(0x656CA8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x648EA8)); /* movss */
    MEM8(0x846FE8) = LO8(eax);
    MEM8(0x846FE9) = LO8(eax);
    MEM8(0x846FEA) = LO8(eax);
    MEM8(0x846FEB) = LO8(eax);
    MEM8(0x847008) = LO8(eax);
    MEMF(0x656CAC) = xmm0.f[0]; /* movss */
    MEM8(0x846FEC) = LO8(eax);
    MEM8(0x846FED) = LO8(eax);
    MEM8(0x846FEF) = LO8(eax);
    MEM8(0x846FF0) = LO8(eax);
    MEM8(0x846FF1) = LO8(eax);
    MEM8(0x846FF2) = LO8(eax);
    MEM8(0x846FF3) = LO8(eax);
    MEM8(0x846FF4) = LO8(eax);
    MEM8(0x846FF5) = LO8(eax);
    MEM8(0x846FF6) = LO8(eax);
    MEM8(0x846FF7) = LO8(eax);
    MEM8(0x846FF8) = LO8(eax);
    MEM8(0x846FFC) = LO8(eax);
    MEM8(0x846FFD) = LO8(eax);
    MEM8(0x846FFE) = LO8(eax);
    MEM8(0x847031) = LO8(eax);
    MEM8(0x846FFF) = LO8(eax);
    MEM8(0x846FF9) = LO8(eax);
    MEM8(0x846FFA) = LO8(eax);
    MEM8(0x846FFB) = LO8(eax);
    MEM8(0x847000) = LO8(eax);
    MEM8(0x847032) = LO8(eax);
    MEM8(0x847003) = LO8(eax);
    MEM8(0x847006) = LO8(eax);
    MEM8(0x847007) = LO8(eax);
    MEM8(0x847004) = LO8(eax);
    MEM8(0x847005) = LO8(eax);
    MEM32(0x657C4C) = 0xB37;
    MEM8(0x847034) = LO8(eax);
    esp += 4; return; /* ret */

}

/**
 * sub_000160B0
 * Original: 0x000160B0 - 0x000160DC (44 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000160B0(void)
{

loc_000160B0: ;
    PUSH32(esp, 0x000160B5u); RECOMP_ABI_CALL(0x00015FC0u, sub_00015FC0); /* call 0x00015FC0 */

loc_000160B5: ;
    xmm0 = XMM_SCALAR(MEMF(0x648F08)); /* movss */
    SET_LO8(eax, 1);
    MEM8(0x846FE8) = LO8(eax);
    MEM8(0x846FE9) = LO8(eax);
    MEM8(0x846FEA) = LO8(eax);
    MEM8(0x847008) = LO8(eax);
    MEMF(0x656CA4) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_000160E0
 * Original: 0x000160E0 - 0x00016125 (69 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000160E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000160E0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, 0);
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    MEM32(esp + 0x14) = 0;
    PUSH32(esp, 0x000160FAu); RECOMP_ABI_CALL(0x0042BC84u, sub_0042BC84); /* call 0x0042BC84 */

loc_000160FA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0001610C; /* jne: not equal / not zero */

loc_000160FE: ;
    PUSH32(esp, 0x00016103u); RECOMP_ABI_CALL(0x0042C2ACu, sub_0042C2AC); /* call 0x0042C2AC */

loc_00016103: ;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_001F04F0(); return; /* tail jmp 0x001F04F0 */

loc_0001610C: ;
    _fa = (uint32_t)(MEM32(esp)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp), esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0001611F; /* je: equal / zero */

loc_00016111: ;
    PUSH32(esp, 0x00016116u); RECOMP_ABI_CALL(0x0042C2ACu, sub_0042C2AC); /* call 0x0042C2AC */

loc_00016116: ;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_001F04F0(); return; /* tail jmp 0x001F04F0 */

loc_0001611F: ;
    SET_LO8(eax, 1);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00016130
 * Original: 0x00016130 - 0x0001625D (301 bytes, 69 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00016130(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00016130: ;
    xmm1 = XMM_SCALAR(MEMF(0x648D14)); /* movss */
    SET_LO8(edx, MEM8(0x847262));
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), LO8(ecx) (8-bit) */
    MEM32(eax) = ecx;
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = ecx;
    MEM32(eax + 0x10) = ecx;
    MEM8(eax + 0x14) = LO8(ecx);
    MEM8(eax + 0x15) = LO8(ecx);
    MEM8(eax + 0x16) = LO8(ecx);
    MEM32(eax + 0x18) = ecx;
    MEMF(eax + 0x1C) = xmm1.f[0]; /* movss */
    MEMF(eax + 0x20) = xmm1.f[0]; /* movss */
    MEMF(eax + 0x24) = xmm1.f[0]; /* movss */
    MEMF(eax + 0x28) = xmm1.f[0]; /* movss */
    xmm2 = xmm0; /* movaps */
    if (CMP_NE(_fa, _fb)) goto loc_0001617B; /* jne: not equal / not zero */

loc_00016178: ;
    xmm2 = xmm1; /* movaps */

loc_0001617B: ;
    _fa = (uint32_t)(MEM8(0x847261)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x847261), LO8(ecx) (8-bit) */
    MEMF(eax + 0x2C) = xmm2.f[0]; /* movss */
    xmm2 = xmm0; /* movaps */
    if (CMP_NE(_fa, _fb)) goto loc_0001618E; /* jne: not equal / not zero */

loc_0001618B: ;
    xmm2 = xmm1; /* movaps */

loc_0001618E: ;
    SET_LO8(edx, MEM8(0x847263));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), LO8(ecx) (8-bit) */
    MEMF(eax + 0x30) = xmm2.f[0]; /* movss */
    xmm2 = xmm0; /* movaps */
    if (CMP_NE(_fa, _fb)) goto loc_000161A3; /* jne: not equal / not zero */

loc_000161A0: ;
    xmm2 = xmm1; /* movaps */

loc_000161A3: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), LO8(ecx) (8-bit) */
    MEMF(eax + 0x34) = xmm2.f[0]; /* movss */
    if (CMP_EQ(_fa, _fb)) goto loc_000161AF; /* je: equal / zero */

loc_000161AC: ;
    xmm1 = xmm0; /* movaps */

loc_000161AF: ;
    MEMF(eax + 0x38) = xmm1.f[0]; /* movss */
    MEM32(eax + 0x3C) = ecx;
    MEM32(eax + 0x40) = ecx;
    MEM32(eax + 0x44) = ecx;
    MEM32(eax + 0x48) = ecx;
    MEM32(eax + 0x50) = ecx;
    MEM32(eax + 0x54) = ecx;
    MEM32(eax + 0x58) = ecx;
    MEM32(eax + 0x5C) = ecx;
    MEM8(eax + 0x60) = LO8(ecx);
    MEM8(eax + 0x61) = LO8(ecx);
    MEM32(eax + 0x64) = ecx;
    MEM32(eax + 0x68) = 0x19;
    MEM32(eax + 0x6C) = 0xFF;
    MEM32(eax + 0x74) = 0x19;
    MEM32(eax + 0x78) = 0xFF;
    MEM32(eax + 0x80) = ecx;
    MEM8(eax + 0x84) = LO8(ecx);
    MEM8(eax + 0x85) = LO8(ecx);
    MEM8(eax + 0x86) = LO8(ecx);
    edx = 2;
    MEM32(eax + 0x70) = edx;
    MEM32(eax + 0x7C) = edx;
    MEMF(eax + 0x88) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x8C) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x90) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x94) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x98) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x9C) = xmm0.f[0]; /* movss */
    MEMF(eax + 0xA0) = xmm0.f[0]; /* movss */
    MEMF(eax + 0xA4) = xmm0.f[0]; /* movss */
    MEMF(eax + 0xA8) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00016260
 * Original: 0x00016260 - 0x00016291 (49 bytes, 24 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00016260(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00016260: ;
    eax = MEM32(esp + 0xC);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    ecx = ebx;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)eax);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas < 0)) goto loc_0001628C; /* js: sign (negative) */

loc_00016278: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x1C);
    PUSH32(esp, edi);
    edi = eax + 1;

loc_00016281: ;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - ebx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = ebp; PUSH32(esp, 0x00016287u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00016285u); } /* indirect call */
    }

loc_00016287: ;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00016281; /* jne: not equal / not zero */

loc_0001628A: ;
    POP32(esp, edi);
    POP32(esp, ebp);

loc_0001628C: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_000162A0
 * Original: 0x000162A0 - 0x000164F0 (592 bytes, 171 insns)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000162A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000162A0: ;
    _fb = (uint32_t)(0x10C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x114);
    SET_LO8(eax, MEM8(ebp + 0x60));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000164C6; /* jne: not equal / not zero */

loc_000162B9: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    MEM8(ebp + 0x60) = 1;
    PUSH32(esp, edi);
    ebx = 0x16620;
    edi = 0x165C0;
    MEM32(0x84B89C) = 0x18E20;
    MEM32(0x84B8A0) = 0x630C0;
    MEM32(0x84B8A4) = 0x18DF0;
    PUSH32(esp, 0x000162EDu); RECOMP_ABI_CALL(0x00400FB0u, sub_00400FB0); /* call 0x00400FB0 */

loc_000162ED: ;
    PUSH32(esp, 0x1C);
    PUSH32(esp, 0x000162F4u); RECOMP_ABI_CALL(0x00019010u, sub_00019010); /* call 0x00019010 */

loc_000162F4: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00016306; /* je: equal / zero */

loc_000162FD: ;
    esi = eax;
    PUSH32(esp, 0x00016304u); RECOMP_ABI_CALL(0x00018CD0u, sub_00018CD0); /* call 0x00018CD0 */

loc_00016304: ;
    goto loc_00016308;

loc_00016306: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00016308: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(ebp + 0x80) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_00016325; /* jne: not equal / not zero */

loc_00016312: ;
    PUSH32(esp, 0x587BE4);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x587BE4);
    PUSH32(esp, 0x00016322u); RECOMP_ABI_CALL(0x001F0620u, sub_001F0620); /* call 0x001F0620 */

loc_00016322: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00016325: ;
    MEM32(0x84BCA4) = 0x18E40;
    PUSH32(esp, 0x00016334u); RECOMP_ABI_CALL(0x00401000u, sub_00401000); /* call 0x00401000 */

loc_00016334: ;
    PUSH32(esp, 0x00016339u); RECOMP_ABI_CALL(0x0001DE60u, sub_0001DE60); /* call 0x0001DE60 */

loc_00016339: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(ebp + 0x3C) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_000164C3; /* je: equal / zero */

loc_00016344: ;
    PUSH32(esp, 0x00016349u); RECOMP_ABI_CALL(0x00022CC0u, sub_00022CC0); /* call 0x00022CC0 */

loc_00016349: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(ebp + 0x40) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_000164C3; /* je: equal / zero */

loc_00016354: ;
    PUSH32(esp, 0x00016359u); RECOMP_ABI_CALL(0x00034260u, sub_00034260); /* call 0x00034260 */

loc_00016359: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(ebp + 0x44) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_000164C3; /* je: equal / zero */

loc_00016364: ;
    PUSH32(esp, 0x780AB8);
    PUSH32(esp, 0x5AC8A8);
    eax = esp + 0x20;
    PUSH32(esp, 0x102);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0001637Du); RECOMP_ABI_CALL(0x0046E9ADu, sub_0046E9AD); /* call 0x0046E9AD */

loc_0001637D: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ebx);
    PUSH32(esp, 0x80);
    PUSH32(esp, 3);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x80000000u);
    ecx = esp + 0x30;
    PUSH32(esp, ecx);
    MEM8(esp + 0x137) = LO8(ebx);
    PUSH32(esp, 0x000163A0u); RECOMP_ABI_CALL(0x0042C37Eu, sub_0042C37E); /* call 0x0042C37E */

loc_000163A0: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000164DE; /* je: equal / zero */

loc_000163AB: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000163B2u); RECOMP_ABI_CALL(0x0042C271u, sub_0042C271); /* call 0x0042C271 */

loc_000163B2: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000164D0; /* je: equal / zero */

loc_000163BC: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000163C2u); RECOMP_ABI_CALL(0x0046DAB2u, sub_0046DAB2); /* call 0x0046DAB2 */

loc_000163C2: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(ebp + 0x5C) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_000163DF; /* jne: not equal / not zero */

loc_000163CC: ;
    PUSH32(esp, 0x587BE4);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x587BE4);
    PUSH32(esp, 0x000163DCu); RECOMP_ABI_CALL(0x001F0620u, sub_001F0620); /* call 0x001F0620 */

loc_000163DC: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000163DF: ;
    eax = MEM32(ebp + 0x5C);
    PUSH32(esp, ebx);
    edx = esp + 0x18;
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    MEM32(esp + 0x28) = ebx;
    PUSH32(esp, 0x000163F4u); RECOMP_ABI_CALL(0x0042BC84u, sub_0042BC84); /* call 0x0042BC84 */

loc_000163F4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00016406; /* jne: not equal / not zero */

loc_000163F8: ;
    PUSH32(esp, 0x000163FDu); RECOMP_ABI_CALL(0x0042C2ACu, sub_0042C2AC); /* call 0x0042C2AC */

loc_000163FD: ;
    MEM32(esp + 0x10) = eax;
    PUSH32(esp, 0x00016406u); RECOMP_ABI_CALL(0x001F04F0u, sub_001F04F0); /* call 0x001F04F0 */

loc_00016406: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0001640Cu); RECOMP_ABI_CALL(0x0042C509u, sub_0042C509); /* call 0x0042C509 */

loc_0001640C: ;
    ecx = MEM32(ebp + 0x5C);
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    ecx = 5;
    eax = 4;
    PUSH32(esp, 0x00016420u); RECOMP_ABI_CALL(0x00401A10u, sub_00401A10); /* call 0x00401A10 */

loc_00016420: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00016435; /* jne: not equal / not zero */

loc_00016427: ;
    PUSH32(esp, 0x0001642Cu); RECOMP_ABI_CALL(0x0042C2ACu, sub_0042C2AC); /* call 0x0042C2AC */

loc_0001642C: ;
    MEM32(esp + 0x10) = eax;
    PUSH32(esp, 0x00016435u); RECOMP_ABI_CALL(0x001F04F0u, sub_001F04F0); /* call 0x001F04F0 */

loc_00016435: ;
    xmm0 = XMM_SCALAR(MEMF(0x648D14)); /* movss */
    PUSH32(esp, ebp);
    MEMF(0x84B908) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x0001644Bu); RECOMP_ABI_CALL(0x00017360u, sub_00017360); /* call 0x00017360 */

loc_0001644B: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x00016451u); RECOMP_ABI_CALL(0x00017520u, sub_00017520); /* call 0x00017520 */

loc_00016451: ;
    PUSH32(esp, 0x00016456u); RECOMP_ABI_CALL(0x00016680u, sub_00016680); /* call 0x00016680 */

loc_00016456: ;
    edx = MEM32(ebp + 0x44);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0001645Fu); RECOMP_ABI_CALL(0x00034320u, sub_00034320); /* call 0x00034320 */

loc_0001645F: ;
    PUSH32(esp, 0x28);
    PUSH32(esp, 0x00016466u); RECOMP_ABI_CALL(0x0046DAB2u, sub_0046DAB2); /* call 0x0046DAB2 */

loc_00016466: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(ebp + 0x64) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_00016483; /* jne: not equal / not zero */

loc_00016470: ;
    PUSH32(esp, 0x587BE4);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x587BE4);
    PUSH32(esp, 0x00016480u); RECOMP_ABI_CALL(0x001F0620u, sub_001F0620); /* call 0x001F0620 */

loc_00016480: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00016483: ;
    eax = MEM32(ebp + 0x64);
    MEM32(eax) = ebx;
    ecx = MEM32(ebp + 0x64);
    MEM32(ecx + 4) = ebx;
    edx = MEM32(ebp + 0x64);
    MEM32(edx + 8) = ebx;
    eax = MEM32(ebp + 0x64);
    MEM32(eax + 0xC) = ebx;
    ecx = MEM32(ebp + 0x64);
    MEM32(ecx + 0x10) = ebx;
    edx = MEM32(ebp + 0x64);
    MEM32(edx + 0x14) = ebx;
    eax = MEM32(ebp + 0x64);
    MEM32(eax + 0x18) = ebx;
    ecx = MEM32(ebp + 0x64);
    MEM32(ecx + 0x1C) = ebx;
    edx = MEM32(ebp + 0x64);
    MEM32(edx + 0x20) = ebx;
    eax = MEM32(ebp + 0x64);
    MEM32(eax + 0x24) = ebx;
    PUSH32(esp, 0x000164C3u); RECOMP_ABI_CALL(0x00401190u, sub_00401190); /* call 0x00401190 */

loc_000164C3: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);

loc_000164C6: ;
    POP32(esp, ebp);
    _fb = (uint32_t)(0x10C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_000164D0: ;
    PUSH32(esp, 0x000164D5u); RECOMP_ABI_CALL(0x0042C2ACu, sub_0042C2AC); /* call 0x0042C2AC */

loc_000164D5: ;
    MEM32(esp + 0x10) = eax;
    PUSH32(esp, 0x000164DEu); RECOMP_ABI_CALL(0x001F04F0u, sub_001F04F0); /* call 0x001F04F0 */

loc_000164DE: ;
    PUSH32(esp, 0x000164E3u); RECOMP_ABI_CALL(0x0042C2ACu, sub_0042C2AC); /* call 0x0042C2AC */

loc_000164E3: ;
    MEM32(esp + 0x10) = eax;
    PUSH32(esp, 0x000164ECu); RECOMP_ABI_CALL(0x001F04F0u, sub_001F04F0); /* call 0x001F04F0 */

loc_000164EC: ;
    (void)0;
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_000164F0
 * Original: 0x000164F0 - 0x000165B5 (197 bytes, 54 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000164F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000164F0: ;
    eax = MEM32(0x847014);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000165A8; /* jne: not equal / not zero */

loc_000164FD: ;
    eax = MEM32(0x84A19C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0001650B; /* jne: not equal / not zero */

loc_00016506: ;
    PUSH32(esp, 0x0001650Bu); RECOMP_ABI_CALL(0x002AED70u, sub_002AED70); /* call 0x002AED70 */

loc_0001650B: ;
    edx = MEM32(0x7FA494);
    ecx = MEM32(0x7FA4B4);
    PUSH32(esp, esi);
    esi = MEM32(0x84A190);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    PUSH32(esp, edi);
    MEM32(0x7FA494) = edx;
    MEM32(0x7FA4B4) = ecx;
    edi = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_0001655B; /* je: equal / zero */

loc_00016533: ;
    _fa = (uint32_t)(MEM32(esi + 0x80)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xAC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x80), 0xAC (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0001655B; /* jb: below (unsigned <) */

loc_0001653F: ;
    ecx = 0x10;
    PUSH32(esp, 0x00016549u); RECOMP_ABI_CALL(0x003E62A0u, sub_003E62A0); /* call 0x003E62A0 */

loc_00016549: ;
    PUSH32(esp, 0xAC);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00016554u); RECOMP_ABI_CALL(0x003E6BD0u, sub_003E6BD0); /* call 0x003E6BD0 */

loc_00016554: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0001657F; /* jne: not equal / not zero */

loc_0001655B: ;
    esi = MEM32(0x84A184);
    ecx = 0x10;
    edi = esi;
    PUSH32(esp, 0x0001656Du); RECOMP_ABI_CALL(0x003E62A0u, sub_003E62A0); /* call 0x003E62A0 */

loc_0001656D: ;
    PUSH32(esp, 0xAC);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00016578u); RECOMP_ABI_CALL(0x003E6BD0u, sub_003E6BD0); /* call 0x003E6BD0 */

loc_00016578: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000165A9; /* je: equal / zero */

loc_0001657F: ;
    PUSH32(esp, 0x00016584u); RECOMP_ABI_CALL(0x00016130u, sub_00016130); /* call 0x00016130 */

loc_00016584: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(0x847014) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_000165A6; /* jne: not equal / not zero */

loc_0001658D: ;
    PUSH32(esp, 0x587BE4);
    PUSH32(esp, 0);
    PUSH32(esp, 0x587BE4);
    PUSH32(esp, 0x0001659Eu); RECOMP_ABI_CALL(0x001F0620u, sub_001F0620); /* call 0x001F0620 */

loc_0001659E: ;
    eax = MEM32(0x847014);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000165A6: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_000165A8: ;
    esp += 4; return; /* ret */

loc_000165A9: ;
    MEM32(0x847014) = 0;
    goto loc_0001658D;

}

/**
 * sub_000165C0
 * Original: 0x000165C0 - 0x00016620 (96 bytes, 34 insns)
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000165C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000165C0: ;
    eax = MEM32(esp + 0x14);
    ecx = MEM32(esp + 0x10);
    edx = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000165DFu); RECOMP_ABI_CALL(0x0042BC84u, sub_0042BC84); /* call 0x0042BC84 */

loc_000165DF: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00016612; /* jne: not equal / not zero */

loc_000165E5: ;
    PUSH32(esp, 0x000165EAu); RECOMP_ABI_CALL(0x0042C2ACu, sub_0042C2AC); /* call 0x0042C2AC */

loc_000165EA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3E4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3E4 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00016618; /* jl: less (signed <) */

loc_000165F1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3E5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3E5 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00016612; /* jle: less or equal (signed <=) */

loc_000165F8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x5AA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x5AA (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00016618; /* jne: not equal / not zero */

loc_000165FF: ;
    PUSH32(esp, 0x587BE4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x587BE4);
    PUSH32(esp, 0x0001660Fu); RECOMP_ABI_CALL(0x001F0620u, sub_001F0620); /* call 0x001F0620 */

loc_0001660F: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00016612: ;
    eax = esi;
    POP32(esp, esi);
    esp += 24; return; /* ret 20 */

loc_00016618: ;
    PUSH32(esp, 0x0001661Du); RECOMP_ABI_CALL(0x001F04F0u, sub_001F04F0); /* call 0x001F04F0 */

loc_0001661D: ;
    (void)0;
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_00016620
 * Original: 0x00016620 - 0x00016680 (96 bytes, 37 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00016620(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00016620: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0xC);
    edx = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0xC);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0001663Au); RECOMP_ABI_CALL(0x0042C319u, sub_0042C319); /* call 0x0042C319 */

loc_0001663A: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0001666D; /* jne: not equal / not zero */

loc_00016640: ;
    PUSH32(esp, 0x00016645u); RECOMP_ABI_CALL(0x0042C2ACu, sub_0042C2AC); /* call 0x0042C2AC */

loc_00016645: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3E4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3E4 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00016673; /* jl: less (signed <) */

loc_0001664C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3E5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3E5 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0001666D; /* jle: less or equal (signed <=) */

loc_00016653: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x5AA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x5AA (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00016673; /* jne: not equal / not zero */

loc_0001665A: ;
    PUSH32(esp, 0x587BE4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x587BE4);
    PUSH32(esp, 0x0001666Au); RECOMP_ABI_CALL(0x001F0620u, sub_001F0620); /* call 0x001F0620 */

loc_0001666A: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0001666D: ;
    eax = esi;
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

loc_00016673: ;
    PUSH32(esp, 0x00016678u); RECOMP_ABI_CALL(0x001F04F0u, sub_001F04F0); /* call 0x001F04F0 */

loc_00016678: ;
    (void)0;
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
 * sub_00016680
 * Original: 0x00016680 - 0x000172B1 (3121 bytes, 797 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00016680(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00016680: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0xA4);
    PUSH32(esp, 0x0001668Bu); RECOMP_ABI_CALL(0x0046DAB2u, sub_0046DAB2); /* call 0x0046DAB2 */

loc_0001668B: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(0x847010) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_000166AE; /* jne: not equal / not zero */

loc_00016699: ;
    PUSH32(esp, 0x587BE4);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x587BE4);
    PUSH32(esp, 0x000166A9u); RECOMP_ABI_CALL(0x001F0620u, sub_001F0620); /* call 0x001F0620 */

loc_000166A9: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_000166AE: ;
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000166B1: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x28) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x28 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_000172A4; /* ja: above (unsigned >) */

loc_000166BA: ;
    { uint32_t _jt = MEM32(esi * 4 + 0x172B4); /* switch: 41 entries, 41 targets */
    if (_jt == 0x000166C1u) goto loc_000166C1;
    if (_jt == 0x00016716u) goto loc_00016716;
    if (_jt == 0x0001676Du) goto loc_0001676D;
    if (_jt == 0x000167C4u) goto loc_000167C4;
    if (_jt == 0x0001681Bu) goto loc_0001681B;
    if (_jt == 0x00016872u) goto loc_00016872;
    if (_jt == 0x000168C9u) goto loc_000168C9;
    if (_jt == 0x00016920u) goto loc_00016920;
    if (_jt == 0x00016977u) goto loc_00016977;
    if (_jt == 0x000169CEu) goto loc_000169CE;
    if (_jt == 0x00016A25u) goto loc_00016A25;
    if (_jt == 0x00016A7Cu) goto loc_00016A7C;
    if (_jt == 0x00016AD3u) goto loc_00016AD3;
    if (_jt == 0x00016B2Au) goto loc_00016B2A;
    if (_jt == 0x00016B81u) goto loc_00016B81;
    if (_jt == 0x00016BD8u) goto loc_00016BD8;
    if (_jt == 0x00016C2Fu) goto loc_00016C2F;
    if (_jt == 0x00016C86u) goto loc_00016C86;
    if (_jt == 0x00016CDDu) goto loc_00016CDD;
    if (_jt == 0x00016D34u) goto loc_00016D34;
    if (_jt == 0x00016D8Bu) goto loc_00016D8B;
    if (_jt == 0x00016DE2u) goto loc_00016DE2;
    if (_jt == 0x00016E39u) goto loc_00016E39;
    if (_jt == 0x00016E90u) goto loc_00016E90;
    if (_jt == 0x00016EC1u) goto loc_00016EC1;
    if (_jt == 0x00016EF2u) goto loc_00016EF2;
    if (_jt == 0x00016F23u) goto loc_00016F23;
    if (_jt == 0x00016F54u) goto loc_00016F54;
    if (_jt == 0x00016F85u) goto loc_00016F85;
    if (_jt == 0x00016FB6u) goto loc_00016FB6;
    if (_jt == 0x00016FE7u) goto loc_00016FE7;
    if (_jt == 0x00017018u) goto loc_00017018;
    if (_jt == 0x00017049u) goto loc_00017049;
    if (_jt == 0x00017080u) goto loc_00017080;
    if (_jt == 0x000170B7u) goto loc_000170B7;
    if (_jt == 0x000170EEu) goto loc_000170EE;
    if (_jt == 0x00017125u) goto loc_00017125;
    if (_jt == 0x0001715Cu) goto loc_0001715C;
    if (_jt == 0x000171B9u) goto loc_000171B9;
    if (_jt == 0x00017213u) goto loc_00017213;
    if (_jt == 0x0001726Au) goto loc_0001726A;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_000166C1: ;
    PUSH32(esp, 0x20);
    PUSH32(esp, 0x000166C8u); RECOMP_ABI_CALL(0x002AF3F0u, sub_002AF3F0); /* call 0x002AF3F0 */

loc_000166C8: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00016707; /* je: equal / zero */

loc_000166CF: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    ecx = MEM32(0x847010);
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    MEM8(eax + 8) = LO8(ebx);
    MEM8(eax + 9) = LO8(ebx);
    MEMF(eax + 0xC) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x10) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x14) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x18) = xmm0.f[0]; /* movss */
    MEM8(eax + 0x1C) = LO8(ebx);
    MEM32(eax) = 0x5AC700;
    MEM32(ecx) = eax;
    goto loc_0001728D;

loc_00016707: ;
    ecx = MEM32(0x847010);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ecx) = eax;
    goto loc_0001728D;

loc_00016716: ;
    PUSH32(esp, 0x20);
    PUSH32(esp, 0x0001671Du); RECOMP_ABI_CALL(0x002AF3F0u, sub_002AF3F0); /* call 0x002AF3F0 */

loc_0001671D: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0001675D; /* je: equal / zero */

loc_00016724: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    edx = MEM32(0x847010);
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    MEM8(eax + 8) = LO8(ebx);
    MEM8(eax + 9) = LO8(ebx);
    MEMF(eax + 0xC) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x10) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x14) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x18) = xmm0.f[0]; /* movss */
    MEM8(eax + 0x1C) = LO8(ebx);
    MEM32(eax) = 0x5AC7F0;
    MEM32(edx + 4) = eax;
    goto loc_0001728D;

loc_0001675D: ;
    edx = MEM32(0x847010);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(edx + 4) = eax;
    goto loc_0001728D;

loc_0001676D: ;
    PUSH32(esp, 0x20);
    PUSH32(esp, 0x00016774u); RECOMP_ABI_CALL(0x002AF3F0u, sub_002AF3F0); /* call 0x002AF3F0 */

loc_00016774: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000167B4; /* je: equal / zero */

loc_0001677B: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    ecx = MEM32(0x847010);
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    MEM8(eax + 8) = LO8(ebx);
    MEM8(eax + 9) = LO8(ebx);
    MEMF(eax + 0xC) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x10) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x14) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x18) = xmm0.f[0]; /* movss */
    MEM8(eax + 0x1C) = LO8(ebx);
    MEM32(eax) = 0x5AC7D8;
    MEM32(ecx + 8) = eax;
    goto loc_0001728D;

loc_000167B4: ;
    ecx = MEM32(0x847010);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ecx + 8) = eax;
    goto loc_0001728D;

loc_000167C4: ;
    PUSH32(esp, 0x20);
    PUSH32(esp, 0x000167CBu); RECOMP_ABI_CALL(0x002AF3F0u, sub_002AF3F0); /* call 0x002AF3F0 */

loc_000167CB: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0001680B; /* je: equal / zero */

loc_000167D2: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    edx = MEM32(0x847010);
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    MEM8(eax + 8) = LO8(ebx);
    MEM8(eax + 9) = LO8(ebx);
    MEMF(eax + 0xC) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x10) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x14) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x18) = xmm0.f[0]; /* movss */
    MEM8(eax + 0x1C) = LO8(ebx);
    MEM32(eax) = 0x5AC7C0;
    MEM32(edx + 0xC) = eax;
    goto loc_0001728D;

loc_0001680B: ;
    edx = MEM32(0x847010);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(edx + 0xC) = eax;
    goto loc_0001728D;

loc_0001681B: ;
    PUSH32(esp, 0x20);
    PUSH32(esp, 0x00016822u); RECOMP_ABI_CALL(0x002AF3F0u, sub_002AF3F0); /* call 0x002AF3F0 */

loc_00016822: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00016862; /* je: equal / zero */

loc_00016829: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    ecx = MEM32(0x847010);
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    MEM8(eax + 8) = LO8(ebx);
    MEM8(eax + 9) = LO8(ebx);
    MEMF(eax + 0xC) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x10) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x14) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x18) = xmm0.f[0]; /* movss */
    MEM8(eax + 0x1C) = LO8(ebx);
    MEM32(eax) = 0x5AC798;
    MEM32(ecx + 0x10) = eax;
    goto loc_0001728D;

loc_00016862: ;
    ecx = MEM32(0x847010);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ecx + 0x10) = eax;
    goto loc_0001728D;

loc_00016872: ;
    PUSH32(esp, 0x20);
    PUSH32(esp, 0x00016879u); RECOMP_ABI_CALL(0x002AF3F0u, sub_002AF3F0); /* call 0x002AF3F0 */

loc_00016879: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000168B9; /* je: equal / zero */

loc_00016880: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    edx = MEM32(0x847010);
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    MEM8(eax + 8) = LO8(ebx);
    MEM8(eax + 9) = LO8(ebx);
    MEMF(eax + 0xC) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x10) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x14) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x18) = xmm0.f[0]; /* movss */
    MEM8(eax + 0x1C) = LO8(ebx);
    MEM32(eax) = 0x5AC780;
    MEM32(edx + 0x14) = eax;
    goto loc_0001728D;

loc_000168B9: ;
    edx = MEM32(0x847010);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(edx + 0x14) = eax;
    goto loc_0001728D;

loc_000168C9: ;
    PUSH32(esp, 0x20);
    PUSH32(esp, 0x000168D0u); RECOMP_ABI_CALL(0x002AF3F0u, sub_002AF3F0); /* call 0x002AF3F0 */

loc_000168D0: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00016910; /* je: equal / zero */

loc_000168D7: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    ecx = MEM32(0x847010);
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    MEM8(eax + 8) = LO8(ebx);
    MEM8(eax + 9) = LO8(ebx);
    MEMF(eax + 0xC) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x10) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x14) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x18) = xmm0.f[0]; /* movss */
    MEM8(eax + 0x1C) = LO8(ebx);
    MEM32(eax) = 0x5AC768;
    MEM32(ecx + 0x18) = eax;
    goto loc_0001728D;

loc_00016910: ;
    ecx = MEM32(0x847010);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ecx + 0x18) = eax;
    goto loc_0001728D;

loc_00016920: ;
    PUSH32(esp, 0x20);
    PUSH32(esp, 0x00016927u); RECOMP_ABI_CALL(0x002AF3F0u, sub_002AF3F0); /* call 0x002AF3F0 */

loc_00016927: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00016967; /* je: equal / zero */

loc_0001692E: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    edx = MEM32(0x847010);
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    MEM8(eax + 8) = LO8(ebx);
    MEM8(eax + 9) = LO8(ebx);
    MEMF(eax + 0xC) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x10) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x14) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x18) = xmm0.f[0]; /* movss */
    MEM8(eax + 0x1C) = LO8(ebx);
    MEM32(eax) = 0x5AC750;
    MEM32(edx + 0x1C) = eax;
    goto loc_0001728D;

loc_00016967: ;
    edx = MEM32(0x847010);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(edx + 0x1C) = eax;
    goto loc_0001728D;

loc_00016977: ;
    PUSH32(esp, 0x20);
    PUSH32(esp, 0x0001697Eu); RECOMP_ABI_CALL(0x002AF3F0u, sub_002AF3F0); /* call 0x002AF3F0 */

loc_0001697E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000169BE; /* je: equal / zero */

loc_00016985: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    ecx = MEM32(0x847010);
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    MEM8(eax + 8) = LO8(ebx);
    MEM8(eax + 9) = LO8(ebx);
    MEMF(eax + 0xC) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x10) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x14) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x18) = xmm0.f[0]; /* movss */
    MEM8(eax + 0x1C) = LO8(ebx);
    MEM32(eax) = 0x5AC738;
    MEM32(ecx + 0x20) = eax;
    goto loc_0001728D;

loc_000169BE: ;
    ecx = MEM32(0x847010);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ecx + 0x20) = eax;
    goto loc_0001728D;

loc_000169CE: ;
    PUSH32(esp, 0x20);
    PUSH32(esp, 0x000169D5u); RECOMP_ABI_CALL(0x002AF3F0u, sub_002AF3F0); /* call 0x002AF3F0 */

loc_000169D5: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00016A15; /* je: equal / zero */

loc_000169DC: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    edx = MEM32(0x847010);
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    MEM8(eax + 8) = LO8(ebx);
    MEM8(eax + 9) = LO8(ebx);
    MEMF(eax + 0xC) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x10) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x14) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x18) = xmm0.f[0]; /* movss */
    MEM8(eax + 0x1C) = LO8(ebx);
    MEM32(eax) = 0x5AC718;
    MEM32(edx + 0x24) = eax;
    goto loc_0001728D;

loc_00016A15: ;
    edx = MEM32(0x847010);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(edx + 0x24) = eax;
    goto loc_0001728D;

loc_00016A25: ;
    PUSH32(esp, 0x20);
    PUSH32(esp, 0x00016A2Cu); RECOMP_ABI_CALL(0x002AF3F0u, sub_002AF3F0); /* call 0x002AF3F0 */

loc_00016A2C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00016A6C; /* je: equal / zero */

loc_00016A33: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    ecx = MEM32(0x847010);
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    MEM8(eax + 8) = LO8(ebx);
    MEM8(eax + 9) = LO8(ebx);
    MEMF(eax + 0xC) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x10) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x14) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x18) = xmm0.f[0]; /* movss */
    MEM8(eax + 0x1C) = LO8(ebx);
    MEM32(eax) = 0x5AC708;
    MEM32(ecx + 0x28) = eax;
    goto loc_0001728D;

loc_00016A6C: ;
    ecx = MEM32(0x847010);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ecx + 0x28) = eax;
    goto loc_0001728D;

loc_00016A7C: ;
    PUSH32(esp, 0x20);
    PUSH32(esp, 0x00016A83u); RECOMP_ABI_CALL(0x002AF3F0u, sub_002AF3F0); /* call 0x002AF3F0 */

loc_00016A83: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00016AC3; /* je: equal / zero */

loc_00016A8A: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    edx = MEM32(0x847010);
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    MEM8(eax + 8) = LO8(ebx);
    MEM8(eax + 9) = LO8(ebx);
    MEMF(eax + 0xC) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x10) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x14) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x18) = xmm0.f[0]; /* movss */
    MEM8(eax + 0x1C) = LO8(ebx);
    MEM32(eax) = 0x5AC7E8;
    MEM32(edx + 0x2C) = eax;
    goto loc_0001728D;

loc_00016AC3: ;
    edx = MEM32(0x847010);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(edx + 0x2C) = eax;
    goto loc_0001728D;

loc_00016AD3: ;
    PUSH32(esp, 0x20);
    PUSH32(esp, 0x00016ADAu); RECOMP_ABI_CALL(0x002AF3F0u, sub_002AF3F0); /* call 0x002AF3F0 */

loc_00016ADA: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00016B1A; /* je: equal / zero */

loc_00016AE1: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    ecx = MEM32(0x847010);
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    MEM8(eax + 8) = LO8(ebx);
    MEM8(eax + 9) = LO8(ebx);
    MEMF(eax + 0xC) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x10) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x14) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x18) = xmm0.f[0]; /* movss */
    MEM8(eax + 0x1C) = LO8(ebx);
    MEM32(eax) = 0x5AC7D0;
    MEM32(ecx + 0x30) = eax;
    goto loc_0001728D;

loc_00016B1A: ;
    ecx = MEM32(0x847010);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ecx + 0x30) = eax;
    goto loc_0001728D;

loc_00016B2A: ;
    PUSH32(esp, 0x20);
    PUSH32(esp, 0x00016B31u); RECOMP_ABI_CALL(0x002AF3F0u, sub_002AF3F0); /* call 0x002AF3F0 */

loc_00016B31: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00016B71; /* je: equal / zero */

loc_00016B38: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    edx = MEM32(0x847010);
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    MEM8(eax + 8) = LO8(ebx);
    MEM8(eax + 9) = LO8(ebx);
    MEMF(eax + 0xC) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x10) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x14) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x18) = xmm0.f[0]; /* movss */
    MEM8(eax + 0x1C) = LO8(ebx);
    MEM32(eax) = 0x5AC7B8;
    MEM32(edx + 0x34) = eax;
    goto loc_0001728D;

loc_00016B71: ;
    edx = MEM32(0x847010);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(edx + 0x34) = eax;
    goto loc_0001728D;

loc_00016B81: ;
    PUSH32(esp, 0x20);
    PUSH32(esp, 0x00016B88u); RECOMP_ABI_CALL(0x002AF3F0u, sub_002AF3F0); /* call 0x002AF3F0 */

loc_00016B88: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00016BC8; /* je: equal / zero */

loc_00016B8F: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    ecx = MEM32(0x847010);
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    MEM8(eax + 8) = LO8(ebx);
    MEM8(eax + 9) = LO8(ebx);
    MEMF(eax + 0xC) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x10) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x14) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x18) = xmm0.f[0]; /* movss */
    MEM8(eax + 0x1C) = LO8(ebx);
    MEM32(eax) = 0x5AC790;
    MEM32(ecx + 0x38) = eax;
    goto loc_0001728D;

loc_00016BC8: ;
    ecx = MEM32(0x847010);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ecx + 0x38) = eax;
    goto loc_0001728D;

loc_00016BD8: ;
    PUSH32(esp, 0x20);
    PUSH32(esp, 0x00016BDFu); RECOMP_ABI_CALL(0x002AF3F0u, sub_002AF3F0); /* call 0x002AF3F0 */

loc_00016BDF: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00016C1F; /* je: equal / zero */

loc_00016BE6: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    edx = MEM32(0x847010);
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    MEM8(eax + 8) = LO8(ebx);
    MEM8(eax + 9) = LO8(ebx);
    MEMF(eax + 0xC) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x10) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x14) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x18) = xmm0.f[0]; /* movss */
    MEM8(eax + 0x1C) = LO8(ebx);
    MEM32(eax) = 0x5AC778;
    MEM32(edx + 0x3C) = eax;
    goto loc_0001728D;

loc_00016C1F: ;
    edx = MEM32(0x847010);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(edx + 0x3C) = eax;
    goto loc_0001728D;

loc_00016C2F: ;
    PUSH32(esp, 0x20);
    PUSH32(esp, 0x00016C36u); RECOMP_ABI_CALL(0x002AF3F0u, sub_002AF3F0); /* call 0x002AF3F0 */

loc_00016C36: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00016C76; /* je: equal / zero */

loc_00016C3D: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    ecx = MEM32(0x847010);
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    MEM8(eax + 8) = LO8(ebx);
    MEM8(eax + 9) = LO8(ebx);
    MEMF(eax + 0xC) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x10) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x14) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x18) = xmm0.f[0]; /* movss */
    MEM8(eax + 0x1C) = LO8(ebx);
    MEM32(eax) = 0x5AC760;
    MEM32(ecx + 0x40) = eax;
    goto loc_0001728D;

loc_00016C76: ;
    ecx = MEM32(0x847010);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ecx + 0x40) = eax;
    goto loc_0001728D;

loc_00016C86: ;
    PUSH32(esp, 0x20);
    PUSH32(esp, 0x00016C8Du); RECOMP_ABI_CALL(0x002AF3F0u, sub_002AF3F0); /* call 0x002AF3F0 */

loc_00016C8D: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00016CCD; /* je: equal / zero */

loc_00016C94: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    edx = MEM32(0x847010);
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    MEM8(eax + 8) = LO8(ebx);
    MEM8(eax + 9) = LO8(ebx);
    MEMF(eax + 0xC) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x10) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x14) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x18) = xmm0.f[0]; /* movss */
    MEM8(eax + 0x1C) = LO8(ebx);
    MEM32(eax) = 0x5AC748;
    MEM32(edx + 0x44) = eax;
    goto loc_0001728D;

loc_00016CCD: ;
    edx = MEM32(0x847010);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(edx + 0x44) = eax;
    goto loc_0001728D;

loc_00016CDD: ;
    PUSH32(esp, 0x20);
    PUSH32(esp, 0x00016CE4u); RECOMP_ABI_CALL(0x002AF3F0u, sub_002AF3F0); /* call 0x002AF3F0 */

loc_00016CE4: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00016D24; /* je: equal / zero */

loc_00016CEB: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    ecx = MEM32(0x847010);
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    MEM8(eax + 8) = LO8(ebx);
    MEM8(eax + 9) = LO8(ebx);
    MEMF(eax + 0xC) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x10) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x14) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x18) = xmm0.f[0]; /* movss */
    MEM8(eax + 0x1C) = LO8(ebx);
    MEM32(eax) = 0x5AC728;
    MEM32(ecx + 0x48) = eax;
    goto loc_0001728D;

loc_00016D24: ;
    ecx = MEM32(0x847010);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ecx + 0x48) = eax;
    goto loc_0001728D;

loc_00016D34: ;
    PUSH32(esp, 0x20);
    PUSH32(esp, 0x00016D3Bu); RECOMP_ABI_CALL(0x002AF3F0u, sub_002AF3F0); /* call 0x002AF3F0 */

loc_00016D3B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00016D7B; /* je: equal / zero */

loc_00016D42: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    edx = MEM32(0x847010);
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    MEM8(eax + 8) = LO8(ebx);
    MEM8(eax + 9) = LO8(ebx);
    MEMF(eax + 0xC) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x10) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x14) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x18) = xmm0.f[0]; /* movss */
    MEM8(eax + 0x1C) = LO8(ebx);
    MEM32(eax) = 0x5AC710;
    MEM32(edx + 0x4C) = eax;
    goto loc_0001728D;

loc_00016D7B: ;
    edx = MEM32(0x847010);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(edx + 0x4C) = eax;
    goto loc_0001728D;

loc_00016D8B: ;
    PUSH32(esp, 0x20);
    PUSH32(esp, 0x00016D92u); RECOMP_ABI_CALL(0x002AF3F0u, sub_002AF3F0); /* call 0x002AF3F0 */

loc_00016D92: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00016DD2; /* je: equal / zero */

loc_00016D99: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    ecx = MEM32(0x847010);
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    MEM8(eax + 8) = LO8(ebx);
    MEM8(eax + 9) = LO8(ebx);
    MEMF(eax + 0xC) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x10) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x14) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x18) = xmm0.f[0]; /* movss */
    MEM8(eax + 0x1C) = LO8(ebx);
    MEM32(eax) = 0x5AC6F8;
    MEM32(ecx + 0x50) = eax;
    goto loc_0001728D;

loc_00016DD2: ;
    ecx = MEM32(0x847010);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ecx + 0x50) = eax;
    goto loc_0001728D;

loc_00016DE2: ;
    PUSH32(esp, 0x20);
    PUSH32(esp, 0x00016DE9u); RECOMP_ABI_CALL(0x002AF3F0u, sub_002AF3F0); /* call 0x002AF3F0 */

loc_00016DE9: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00016E29; /* je: equal / zero */

loc_00016DF0: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    edx = MEM32(0x847010);
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    MEM8(eax + 8) = LO8(ebx);
    MEM8(eax + 9) = LO8(ebx);
    MEMF(eax + 0xC) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x10) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x14) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x18) = xmm0.f[0]; /* movss */
    MEM8(eax + 0x1C) = LO8(ebx);
    MEM32(eax) = 0x5AC7E0;
    MEM32(edx + 0x54) = eax;
    goto loc_0001728D;

loc_00016E29: ;
    edx = MEM32(0x847010);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(edx + 0x54) = eax;
    goto loc_0001728D;

loc_00016E39: ;
    PUSH32(esp, 0x20);
    PUSH32(esp, 0x00016E40u); RECOMP_ABI_CALL(0x002AF3F0u, sub_002AF3F0); /* call 0x002AF3F0 */

loc_00016E40: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00016E80; /* je: equal / zero */

loc_00016E47: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    ecx = MEM32(0x847010);
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    MEM8(eax + 8) = LO8(ebx);
    MEM8(eax + 9) = LO8(ebx);
    MEMF(eax + 0xC) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x10) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x14) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x18) = xmm0.f[0]; /* movss */
    MEM8(eax + 0x1C) = LO8(ebx);
    MEM32(eax) = 0x5AC7C8;
    MEM32(ecx + 0x58) = eax;
    goto loc_0001728D;

loc_00016E80: ;
    ecx = MEM32(0x847010);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ecx + 0x58) = eax;
    goto loc_0001728D;

loc_00016E90: ;
    PUSH32(esp, 0x20);
    PUSH32(esp, 0x00016E97u); RECOMP_ABI_CALL(0x002AF3F0u, sub_002AF3F0); /* call 0x002AF3F0 */

loc_00016E97: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00016EB1; /* je: equal / zero */

loc_00016E9E: ;
    PUSH32(esp, 0x00016EA3u); RECOMP_ABI_CALL(0x00015A10u, sub_00015A10); /* call 0x00015A10 */

loc_00016EA3: ;
    edx = MEM32(0x847010);
    MEM32(edx + 0x5C) = eax;
    goto loc_0001728D;

loc_00016EB1: ;
    edx = MEM32(0x847010);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(edx + 0x5C) = eax;
    goto loc_0001728D;

loc_00016EC1: ;
    PUSH32(esp, 0x20);
    PUSH32(esp, 0x00016EC8u); RECOMP_ABI_CALL(0x002AF3F0u, sub_002AF3F0); /* call 0x002AF3F0 */

loc_00016EC8: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00016EE2; /* je: equal / zero */

loc_00016ECF: ;
    PUSH32(esp, 0x00016ED4u); RECOMP_ABI_CALL(0x00015AC0u, sub_00015AC0); /* call 0x00015AC0 */

loc_00016ED4: ;
    ecx = MEM32(0x847010);
    MEM32(ecx + 0x60) = eax;
    goto loc_0001728D;

loc_00016EE2: ;
    ecx = MEM32(0x847010);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ecx + 0x60) = eax;
    goto loc_0001728D;

loc_00016EF2: ;
    PUSH32(esp, 0x20);
    PUSH32(esp, 0x00016EF9u); RECOMP_ABI_CALL(0x002AF3F0u, sub_002AF3F0); /* call 0x002AF3F0 */

loc_00016EF9: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00016F13; /* je: equal / zero */

loc_00016F00: ;
    PUSH32(esp, 0x00016F05u); RECOMP_ABI_CALL(0x00015B20u, sub_00015B20); /* call 0x00015B20 */

loc_00016F05: ;
    edx = MEM32(0x847010);
    MEM32(edx + 0x64) = eax;
    goto loc_0001728D;

loc_00016F13: ;
    edx = MEM32(0x847010);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(edx + 0x64) = eax;
    goto loc_0001728D;

loc_00016F23: ;
    PUSH32(esp, 0x20);
    PUSH32(esp, 0x00016F2Au); RECOMP_ABI_CALL(0x002AF3F0u, sub_002AF3F0); /* call 0x002AF3F0 */

loc_00016F2A: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00016F44; /* je: equal / zero */

loc_00016F31: ;
    PUSH32(esp, 0x00016F36u); RECOMP_ABI_CALL(0x00015AF0u, sub_00015AF0); /* call 0x00015AF0 */

loc_00016F36: ;
    ecx = MEM32(0x847010);
    MEM32(ecx + 0x68) = eax;
    goto loc_0001728D;

loc_00016F44: ;
    ecx = MEM32(0x847010);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ecx + 0x68) = eax;
    goto loc_0001728D;

loc_00016F54: ;
    PUSH32(esp, 0x20);
    PUSH32(esp, 0x00016F5Bu); RECOMP_ABI_CALL(0x002AF3F0u, sub_002AF3F0); /* call 0x002AF3F0 */

loc_00016F5B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00016F75; /* je: equal / zero */

loc_00016F62: ;
    PUSH32(esp, 0x00016F67u); RECOMP_ABI_CALL(0x00015B20u, sub_00015B20); /* call 0x00015B20 */

loc_00016F67: ;
    edx = MEM32(0x847010);
    MEM32(edx + 0x6C) = eax;
    goto loc_0001728D;

loc_00016F75: ;
    edx = MEM32(0x847010);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(edx + 0x6C) = eax;
    goto loc_0001728D;

loc_00016F85: ;
    PUSH32(esp, 0x20);
    PUSH32(esp, 0x00016F8Cu); RECOMP_ABI_CALL(0x002AF3F0u, sub_002AF3F0); /* call 0x002AF3F0 */

loc_00016F8C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00016FA6; /* je: equal / zero */

loc_00016F93: ;
    PUSH32(esp, 0x00016F98u); RECOMP_ABI_CALL(0x00015C30u, sub_00015C30); /* call 0x00015C30 */

loc_00016F98: ;
    ecx = MEM32(0x847010);
    MEM32(ecx + 0x70) = eax;
    goto loc_0001728D;

loc_00016FA6: ;
    ecx = MEM32(0x847010);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ecx + 0x70) = eax;
    goto loc_0001728D;

loc_00016FB6: ;
    PUSH32(esp, 0x20);
    PUSH32(esp, 0x00016FBDu); RECOMP_ABI_CALL(0x002AF3F0u, sub_002AF3F0); /* call 0x002AF3F0 */

loc_00016FBD: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00016FD7; /* je: equal / zero */

loc_00016FC4: ;
    PUSH32(esp, 0x00016FC9u); RECOMP_ABI_CALL(0x00015AF0u, sub_00015AF0); /* call 0x00015AF0 */

loc_00016FC9: ;
    edx = MEM32(0x847010);
    MEM32(edx + 0x74) = eax;
    goto loc_0001728D;

loc_00016FD7: ;
    edx = MEM32(0x847010);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(edx + 0x74) = eax;
    goto loc_0001728D;

loc_00016FE7: ;
    PUSH32(esp, 0x20);
    PUSH32(esp, 0x00016FEEu); RECOMP_ABI_CALL(0x002AF3F0u, sub_002AF3F0); /* call 0x002AF3F0 */

loc_00016FEE: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00017008; /* je: equal / zero */

loc_00016FF5: ;
    PUSH32(esp, 0x00016FFAu); RECOMP_ABI_CALL(0x00015B20u, sub_00015B20); /* call 0x00015B20 */

loc_00016FFA: ;
    ecx = MEM32(0x847010);
    MEM32(ecx + 0x7C) = eax;
    goto loc_0001728D;

loc_00017008: ;
    ecx = MEM32(0x847010);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ecx + 0x7C) = eax;
    goto loc_0001728D;

loc_00017018: ;
    PUSH32(esp, 0x20);
    PUSH32(esp, 0x0001701Fu); RECOMP_ABI_CALL(0x002AF3F0u, sub_002AF3F0); /* call 0x002AF3F0 */

loc_0001701F: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00017039; /* je: equal / zero */

loc_00017026: ;
    PUSH32(esp, 0x0001702Bu); RECOMP_ABI_CALL(0x00015AF0u, sub_00015AF0); /* call 0x00015AF0 */

loc_0001702B: ;
    edx = MEM32(0x847010);
    MEM32(edx + 0x78) = eax;
    goto loc_0001728D;

loc_00017039: ;
    edx = MEM32(0x847010);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(edx + 0x78) = eax;
    goto loc_0001728D;

loc_00017049: ;
    PUSH32(esp, 0x20);
    PUSH32(esp, 0x00017050u); RECOMP_ABI_CALL(0x002AF3F0u, sub_002AF3F0); /* call 0x002AF3F0 */

loc_00017050: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0001706D; /* je: equal / zero */

loc_00017057: ;
    PUSH32(esp, 0x0001705Cu); RECOMP_ABI_CALL(0x00015C30u, sub_00015C30); /* call 0x00015C30 */

loc_0001705C: ;
    ecx = MEM32(0x847010);
    MEM32(ecx + 0x80) = eax;
    goto loc_0001728D;

loc_0001706D: ;
    ecx = MEM32(0x847010);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ecx + 0x80) = eax;
    goto loc_0001728D;

loc_00017080: ;
    PUSH32(esp, 0x20);
    PUSH32(esp, 0x00017087u); RECOMP_ABI_CALL(0x002AF3F0u, sub_002AF3F0); /* call 0x002AF3F0 */

loc_00017087: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000170A4; /* je: equal / zero */

loc_0001708E: ;
    PUSH32(esp, 0x00017093u); RECOMP_ABI_CALL(0x00015AF0u, sub_00015AF0); /* call 0x00015AF0 */

loc_00017093: ;
    edx = MEM32(0x847010);
    MEM32(edx + 0x84) = eax;
    goto loc_0001728D;

loc_000170A4: ;
    edx = MEM32(0x847010);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(edx + 0x84) = eax;
    goto loc_0001728D;

loc_000170B7: ;
    PUSH32(esp, 0x20);
    PUSH32(esp, 0x000170BEu); RECOMP_ABI_CALL(0x002AF3F0u, sub_002AF3F0); /* call 0x002AF3F0 */

loc_000170BE: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000170DB; /* je: equal / zero */

loc_000170C5: ;
    PUSH32(esp, 0x000170CAu); RECOMP_ABI_CALL(0x00015B20u, sub_00015B20); /* call 0x00015B20 */

loc_000170CA: ;
    ecx = MEM32(0x847010);
    MEM32(ecx + 0x88) = eax;
    goto loc_0001728D;

loc_000170DB: ;
    ecx = MEM32(0x847010);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ecx + 0x88) = eax;
    goto loc_0001728D;

loc_000170EE: ;
    PUSH32(esp, 0x20);
    PUSH32(esp, 0x000170F5u); RECOMP_ABI_CALL(0x002AF3F0u, sub_002AF3F0); /* call 0x002AF3F0 */

loc_000170F5: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00017112; /* je: equal / zero */

loc_000170FC: ;
    PUSH32(esp, 0x00017101u); RECOMP_ABI_CALL(0x00015AF0u, sub_00015AF0); /* call 0x00015AF0 */

loc_00017101: ;
    edx = MEM32(0x847010);
    MEM32(edx + 0x8C) = eax;
    goto loc_0001728D;

loc_00017112: ;
    edx = MEM32(0x847010);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(edx + 0x8C) = eax;
    goto loc_0001728D;

loc_00017125: ;
    PUSH32(esp, 0x20);
    PUSH32(esp, 0x0001712Cu); RECOMP_ABI_CALL(0x002AF3F0u, sub_002AF3F0); /* call 0x002AF3F0 */

loc_0001712C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00017149; /* je: equal / zero */

loc_00017133: ;
    PUSH32(esp, 0x00017138u); RECOMP_ABI_CALL(0x00015AF0u, sub_00015AF0); /* call 0x00015AF0 */

loc_00017138: ;
    ecx = MEM32(0x847010);
    MEM32(ecx + 0x90) = eax;
    goto loc_0001728D;

loc_00017149: ;
    ecx = MEM32(0x847010);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ecx + 0x90) = eax;
    goto loc_0001728D;

loc_0001715C: ;
    PUSH32(esp, 0x20);
    PUSH32(esp, 0x00017163u); RECOMP_ABI_CALL(0x002AF3F0u, sub_002AF3F0); /* call 0x002AF3F0 */

loc_00017163: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000171A6; /* je: equal / zero */

loc_0001716A: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    edx = MEM32(0x847010);
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    MEM8(eax + 8) = LO8(ebx);
    MEM8(eax + 9) = LO8(ebx);
    MEMF(eax + 0xC) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x10) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x14) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x18) = xmm0.f[0]; /* movss */
    MEM8(eax + 0x1C) = LO8(ebx);
    MEM32(eax) = 0x5AC770;
    MEM32(edx + 0x94) = eax;
    goto loc_0001728D;

loc_000171A6: ;
    edx = MEM32(0x847010);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(edx + 0x94) = eax;
    goto loc_0001728D;

loc_000171B9: ;
    PUSH32(esp, 0x20);
    PUSH32(esp, 0x000171C0u); RECOMP_ABI_CALL(0x002AF3F0u, sub_002AF3F0); /* call 0x002AF3F0 */

loc_000171C0: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00017203; /* je: equal / zero */

loc_000171C7: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    ecx = MEM32(0x847010);
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    MEM8(eax + 8) = LO8(ebx);
    MEM8(eax + 9) = LO8(ebx);
    MEMF(eax + 0xC) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x10) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x14) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x18) = xmm0.f[0]; /* movss */
    MEM8(eax + 0x1C) = LO8(ebx);
    MEM32(eax) = 0x5AC740;
    MEM32(ecx + 0x98) = eax;
    goto loc_0001728D;

loc_00017203: ;
    ecx = MEM32(0x847010);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ecx + 0x98) = eax;
    goto loc_0001728D;

loc_00017213: ;
    PUSH32(esp, 0x20);
    PUSH32(esp, 0x0001721Au); RECOMP_ABI_CALL(0x002AF3F0u, sub_002AF3F0); /* call 0x002AF3F0 */

loc_0001721A: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0001725A; /* je: equal / zero */

loc_00017221: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    edx = MEM32(0x847010);
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    MEM8(eax + 8) = LO8(ebx);
    MEM8(eax + 9) = LO8(ebx);
    MEMF(eax + 0xC) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x10) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x14) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x18) = xmm0.f[0]; /* movss */
    MEM8(eax + 0x1C) = LO8(ebx);
    MEM32(eax) = 0x5AC758;
    MEM32(edx + 0x9C) = eax;
    goto loc_0001728D;

loc_0001725A: ;
    edx = MEM32(0x847010);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(edx + 0x9C) = eax;
    goto loc_0001728D;

loc_0001726A: ;
    PUSH32(esp, 0x20);
    PUSH32(esp, 0x00017271u); RECOMP_ABI_CALL(0x002AF3F0u, sub_002AF3F0); /* call 0x002AF3F0 */

loc_00017271: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0001727F; /* je: equal / zero */

loc_00017278: ;
    PUSH32(esp, 0x0001727Du); RECOMP_ABI_CALL(0x00015DA0u, sub_00015DA0); /* call 0x00015DA0 */

loc_0001727D: ;
    goto loc_00017281;

loc_0001727F: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00017281: ;
    ecx = MEM32(0x847010);
    MEM32(ecx + 0xA0) = eax;

loc_0001728D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000172A4; /* jne: not equal / not zero */

loc_00017291: ;
    PUSH32(esp, 0x587BE4);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x587BE4);
    PUSH32(esp, 0x000172A1u); RECOMP_ABI_CALL(0x001F0620u, sub_001F0620); /* call 0x001F0620 */

loc_000172A1: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000172A4: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x29) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x29 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000166B1; /* jl: less (signed <) */

loc_000172AE: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00017360
 * Original: 0x00017360 - 0x000174B4 (340 bytes, 104 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00017360(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00017360: ;
    PUSH32(esp, 0x130);
    PUSH32(esp, 0x0001736Au); RECOMP_ABI_CALL(0x0046DAB2u, sub_0046DAB2); /* call 0x0046DAB2 */

loc_0001736A: ;
    ecx = MEM32(esp + 8);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ecx + 4) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_0001738E; /* jne: not equal / not zero */

loc_00017378: ;
    PUSH32(esp, 0x587BE4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x587BE4);
    PUSH32(esp, 0x00017388u); RECOMP_ABI_CALL(0x001F0620u, sub_001F0620); /* call 0x001F0620 */

loc_00017388: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_0001738E: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = 0x687F80;
    /* nop */

loc_000173A0: ;
    eax = MEM32(0x84A19C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000173AE; /* jne: not equal / not zero */

loc_000173A9: ;
    PUSH32(esp, 0x000173AEu); RECOMP_ABI_CALL(0x002AED70u, sub_002AED70); /* call 0x002AED70 */

loc_000173AE: ;
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
    ebx = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_000173F6; /* je: equal / zero */

loc_000173D4: ;
    _fa = (uint32_t)(MEM32(esi + 0x80)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x30) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x80), 0x30 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000173F6; /* jb: below (unsigned <) */

loc_000173DD: ;
    ecx = 0x10;
    PUSH32(esp, 0x000173E7u); RECOMP_ABI_CALL(0x003E62A0u, sub_003E62A0); /* call 0x003E62A0 */

loc_000173E7: ;
    PUSH32(esp, 0x30);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x000173EFu); RECOMP_ABI_CALL(0x003E6BD0u, sub_003E6BD0); /* call 0x003E6BD0 */

loc_000173EF: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00017417; /* jne: not equal / not zero */

loc_000173F6: ;
    esi = MEM32(0x84A184);
    ecx = 0x10;
    ebx = esi;
    PUSH32(esp, 0x00017408u); RECOMP_ABI_CALL(0x003E62A0u, sub_003E62A0); /* call 0x003E62A0 */

loc_00017408: ;
    PUSH32(esp, 0x30);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00017410u); RECOMP_ABI_CALL(0x003E6BD0u, sub_003E6BD0); /* call 0x003E6BD0 */

loc_00017410: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00017420; /* je: equal / zero */

loc_00017417: ;
    esi = eax;
    PUSH32(esp, 0x0001741Eu); RECOMP_ABI_CALL(0x00035690u, sub_00035690); /* call 0x00035690 */

loc_0001741E: ;
    goto loc_00017422;

loc_00017420: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00017422: ;
    ecx = MEM32(esp + 0x14);
    edx = MEM32(ecx + 4);
    MEM32(edx + ebp) = eax;
    eax = MEM32(ecx + 4);
    _fa = (uint32_t)(MEM32(eax + ebp)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + ebp), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00017449; /* jne: not equal / not zero */

loc_00017435: ;
    PUSH32(esp, 0x587BE4);
    PUSH32(esp, 0);
    PUSH32(esp, 0x587BE4);
    PUSH32(esp, 0x00017446u); RECOMP_ABI_CALL(0x001F0620u, sub_001F0620); /* call 0x001F0620 */

loc_00017446: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00017449: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x18;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 4;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x6886A0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x6886A0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000173A0; /* jl: less (signed <) */

loc_0001745B: ;
    eax = MEM32(0x847040);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0001746E; /* jge: greater or equal (signed >=) */

loc_00017466: ;
    MEM32(0x847040) = esi;
    goto loc_00017473;

loc_0001746E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_000174AD; /* jg: greater (signed >) */

loc_00017473: ;
    edi = 1;
    goto loc_00017480;

    /* nop */

loc_00017480: ;
    ecx = MEM32(esp + 0x14);
    edx = MEM32(ecx + 4);
    ebx = MEM32(esi + edx);
    eax = MEM32(ebx + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000174A2; /* jne: not equal / not zero */

loc_00017491: ;
    _fa = (uint32_t)(MEM32(ebx + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 8), edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000174A2; /* jne: not equal / not zero */

loc_00017496: ;
    SET_LO8(eax, MEM8(ebx + 0x22));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000174A2; /* jne: not equal / not zero */

loc_0001749D: ;
    PUSH32(esp, 0x000174A2u); RECOMP_ABI_CALL(0x00035950u, sub_00035950); /* call 0x00035950 */

loc_000174A2: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x130) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x130 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00017480; /* jl: less (signed <) */

loc_000174AD: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000174C0
 * Original: 0x000174C0 - 0x00017511 (81 bytes, 31 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000174C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000174C0: ;
    eax = MEM32(0x847040);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 8);
    if (CMP_LE(_fas, _fbs)) goto loc_000174D5; /* jle: less or equal (signed <=) */

loc_000174CE: ;
    eax = edi;
    MEM32(0x847040) = eax;

loc_000174D5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000174DF; /* jle: less or equal (signed <=) */

loc_000174DA: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0001750D; /* jne: not equal / not zero */

loc_000174DF: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000174E3: ;
    eax = MEM32(ebp + 4);
    ebx = MEM32(esi + eax);
    _fa = (uint32_t)(MEM32(ebx + 0x24)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0x24), edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00017500; /* jne: not equal / not zero */

loc_000174EE: ;
    _fa = (uint32_t)(MEM32(ebx + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 8), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00017500; /* jne: not equal / not zero */

loc_000174F4: ;
    SET_LO8(eax, MEM8(ebx + 0x22));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00017500; /* jne: not equal / not zero */

loc_000174FB: ;
    PUSH32(esp, 0x00017500u); RECOMP_ABI_CALL(0x00035950u, sub_00035950); /* call 0x00035950 */

loc_00017500: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x130) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x130 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000174E3; /* jl: less (signed <) */

loc_0001750B: ;
    POP32(esp, esi);
    POP32(esp, ebx);

loc_0001750D: ;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00017520
 * Original: 0x00017520 - 0x00017620 (256 bytes, 81 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00017520(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00017520: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0001752Bu); RECOMP_ABI_CALL(0x00017620u, sub_00017620); /* call 0x00017620 */

loc_0001752B: ;
    PUSH32(esp, 0xE8);
    PUSH32(esp, 0x00017535u); RECOMP_ABI_CALL(0x0046DAB2u, sub_0046DAB2); /* call 0x0046DAB2 */

loc_00017535: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_00017555; /* jne: not equal / not zero */

loc_0001753E: ;
    PUSH32(esp, 0x587BE4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x587BE4);
    PUSH32(esp, 0x0001754Eu); RECOMP_ABI_CALL(0x001F0620u, sub_001F0620); /* call 0x001F0620 */

loc_0001754E: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_00017555: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = 0x688860;
    /* nop */

loc_00017560: ;
    eax = MEM32(0x84A19C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0001756E; /* jne: not equal / not zero */

loc_00017569: ;
    PUSH32(esp, 0x0001756Eu); RECOMP_ABI_CALL(0x002AED70u, sub_002AED70); /* call 0x002AED70 */

loc_0001756E: ;
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
    ebx = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_000175B6; /* je: equal / zero */

loc_00017594: ;
    _fa = (uint32_t)(MEM32(esi + 0x80)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x24) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x80), 0x24 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000175B6; /* jb: below (unsigned <) */

loc_0001759D: ;
    ecx = 0x10;
    PUSH32(esp, 0x000175A7u); RECOMP_ABI_CALL(0x003E62A0u, sub_003E62A0); /* call 0x003E62A0 */

loc_000175A7: ;
    PUSH32(esp, 0x24);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x000175AFu); RECOMP_ABI_CALL(0x003E6BD0u, sub_003E6BD0); /* call 0x003E6BD0 */

loc_000175AF: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000175D7; /* jne: not equal / not zero */

loc_000175B6: ;
    esi = MEM32(0x84A184);
    ecx = 0x10;
    ebx = esi;
    PUSH32(esp, 0x000175C8u); RECOMP_ABI_CALL(0x003E62A0u, sub_003E62A0); /* call 0x003E62A0 */

loc_000175C8: ;
    PUSH32(esp, 0x24);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x000175D0u); RECOMP_ABI_CALL(0x003E6BD0u, sub_003E6BD0); /* call 0x003E6BD0 */

loc_000175D0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000175E0; /* je: equal / zero */

loc_000175D7: ;
    esi = eax;
    PUSH32(esp, 0x000175DEu); RECOMP_ABI_CALL(0x0002D010u, sub_0002D010); /* call 0x0002D010 */

loc_000175DE: ;
    goto loc_000175E2;

loc_000175E0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000175E2: ;
    ecx = MEM32(esp + 0x14);
    edx = MEM32(ecx);
    MEM32(edx + ebp) = eax;
    eax = MEM32(ecx);
    _fa = (uint32_t)(MEM32(eax + ebp)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + ebp), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00017607; /* jne: not equal / not zero */

loc_000175F3: ;
    PUSH32(esp, 0x587BE4);
    PUSH32(esp, 0);
    PUSH32(esp, 0x587BE4);
    PUSH32(esp, 0x00017604u); RECOMP_ABI_CALL(0x001F0620u, sub_001F0620); /* call 0x001F0620 */

loc_00017604: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00017607: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x18;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 4;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x688DD0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x688DD0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00017560; /* jl: less (signed <) */

loc_00017619: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00017620
 * Original: 0x00017620 - 0x00017950 (816 bytes, 261 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00017620(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00017620: ;
    eax = 0x780AB8;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = eax + 1;
    goto loc_00017630;

    /* nop */

loc_00017630: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00017630; /* jne: not equal / not zero */

loc_00017637: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    edx = eax;
    eax = 0x657C38;
    PUSH32(esp, edi);
    esi = eax + 1;

loc_00017646: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00017646; /* jne: not equal / not zero */

loc_0001764D: ;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    esi = eax + edx + 1;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00017659u); RECOMP_ABI_CALL(0x0046DAB2u, sub_0046DAB2); /* call 0x0046DAB2 */

loc_00017659: ;
    edi = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    MEM32(esp + 0xC) = edi;
    if (CMP_NE(_fa, _fb)) goto loc_0001767B; /* jne: not equal / not zero */

loc_00017666: ;
    PUSH32(esp, 0x587BE4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x587BE4);
    PUSH32(esp, 0x00017676u); RECOMP_ABI_CALL(0x001F0620u, sub_001F0620); /* call 0x001F0620 */

loc_00017676: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00017694;

loc_0001767B: ;
    PUSH32(esp, 0x657C38);
    PUSH32(esp, 0x780AB8);
    PUSH32(esp, 0x5AC8A0);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00017691u); RECOMP_ABI_CALL(0x0046E9ADu, sub_0046E9AD); /* call 0x0046E9AD */

loc_00017691: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00017694: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x80);
    PUSH32(esp, 3);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x80000000u);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000176ACu); RECOMP_ABI_CALL(0x0042C37Eu, sub_0042C37E); /* call 0x0042C37E */

loc_000176AC: ;
    ebp = eax;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0001793C; /* je: equal / zero */

loc_000176B7: ;
    esi = 0x10;
    ecx = esp + 0x14;
    edx = ebp;
    PUSH32(esp, 0x000176C7u); RECOMP_ABI_CALL(0x000160E0u, sub_000160E0); /* call 0x000160E0 */

loc_000176C7: ;
    _fa = (uint32_t)(MEM32(esp + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x14), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00017924; /* jne: not equal / not zero */

loc_000176D2: ;
    eax = MEM32(esp + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00017924; /* jne: not equal / not zero */

loc_000176DE: ;
    eax = MEM32(esp + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    ecx = MEM32(esp + 0x20);
    MEM32(esp + 0x10) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_00017910; /* je: equal / zero */

loc_000176F2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3A) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3A (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00017910; /* jne: not equal / not zero */

loc_000176FB: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00017910; /* je: equal / zero */

loc_00017703: ;
    PUSH32(esp, 0x2BC);
    PUSH32(esp, 0x0001770Du); RECOMP_ABI_CALL(0x0046DAB2u, sub_0046DAB2); /* call 0x0046DAB2 */

loc_0001770D: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0001772E; /* je: equal / zero */

loc_00017714: ;
    PUSH32(esp, 0x2D150);
    PUSH32(esp, 0x3A);
    edi = eax + 4;
    PUSH32(esp, 0xC);
    PUSH32(esp, edi);
    MEM32(eax) = 0x3A;
    PUSH32(esp, 0x0001772Cu); RECOMP_ABI_CALL(0x00011B30u, sub_00011B30); /* call 0x00011B30 */

loc_0001772C: ;
    goto loc_00017730;

loc_0001772E: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00017730: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    esi = MEM32(esp + 0x34);
    MEM32(esi + 0x58) = edi;
    if (CMP_NE(_fa, _fb)) goto loc_0001774E; /* jne: not equal / not zero */

loc_0001773B: ;
    PUSH32(esp, 0x587BE4);
    PUSH32(esp, edi);
    PUSH32(esp, 0x587BE4);
    PUSH32(esp, 0x0001774Bu); RECOMP_ABI_CALL(0x001F0620u, sub_001F0620); /* call 0x001F0620 */

loc_0001774B: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0001774E: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, ebx);

loc_00017751: ;
    eax = MEM32(esi + 0x58);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = ebp;
    PUSH32(esp, 0x0001775Du); RECOMP_ABI_CALL(0x0002D160u, sub_0002D160); /* call 0x0002D160 */

loc_0001775D: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0001783C; /* je: equal / zero */

loc_00017765: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0xC;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2B8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x2B8 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00017751; /* jl: less (signed <) */

loc_00017770: ;
    edi = MEM32(esp + 0x14);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0001777Au); RECOMP_ABI_CALL(0x0046DAB2u, sub_0046DAB2); /* call 0x0046DAB2 */

loc_0001777A: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(esi + 0x50) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_00017799; /* jne: not equal / not zero */

loc_00017786: ;
    PUSH32(esp, 0x587BE4);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x587BE4);
    PUSH32(esp, 0x00017796u); RECOMP_ABI_CALL(0x001F0620u, sub_001F0620); /* call 0x001F0620 */

loc_00017796: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00017799: ;
    ecx = MEM32(esp + 0x38);
    ecx = MEM32(ecx + 0x50);
    esi = edi;
    edx = ebp;
    PUSH32(esp, 0x000177A9u); RECOMP_ABI_CALL(0x000160E0u, sub_000160E0); /* call 0x000160E0 */

loc_000177A9: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x000177AFu); RECOMP_ABI_CALL(0x0042C509u, sub_0042C509); /* call 0x0042C509 */

loc_000177AF: ;
    edx = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000177B9u); RECOMP_ABI_CALL(0x0046E4B6u, sub_0046E4B6); /* call 0x0046E4B6 */

loc_000177B9: ;
    eax = MEM32(0x84A19C);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000177CA; /* jne: not equal / not zero */

loc_000177C5: ;
    PUSH32(esp, 0x000177CAu); RECOMP_ABI_CALL(0x002AED70u, sub_002AED70); /* call 0x002AED70 */

loc_000177CA: ;
    edx = MEM32(0x7FA494);
    ecx = MEM32(0x7FA4B4);
    esi = MEM32(0x84A190);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    MEM32(0x7FA494) = edx;
    MEM32(0x7FA4B4) = ecx;
    edi = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_00017812; /* je: equal / zero */

loc_000177F0: ;
    _fa = (uint32_t)(MEM32(esi + 0x80)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x80), 0xC (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00017812; /* jb: below (unsigned <) */

loc_000177F9: ;
    ecx = 4;
    PUSH32(esp, 0x00017803u); RECOMP_ABI_CALL(0x003E62A0u, sub_003E62A0); /* call 0x003E62A0 */

loc_00017803: ;
    PUSH32(esp, 0xC);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0001780Bu); RECOMP_ABI_CALL(0x003E6BD0u, sub_003E6BD0); /* call 0x003E6BD0 */

loc_0001780B: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00017833; /* jne: not equal / not zero */

loc_00017812: ;
    esi = MEM32(0x84A184);
    ecx = 4;
    edi = esi;
    PUSH32(esp, 0x00017824u); RECOMP_ABI_CALL(0x003E62A0u, sub_003E62A0); /* call 0x003E62A0 */

loc_00017824: ;
    PUSH32(esp, 0xC);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0001782Cu); RECOMP_ABI_CALL(0x003E6BD0u, sub_003E6BD0); /* call 0x003E6BD0 */

loc_0001782C: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00017859; /* je: equal / zero */

loc_00017833: ;
    esi = eax;
    PUSH32(esp, 0x0001783Au); RECOMP_ABI_CALL(0x000190C0u, sub_000190C0); /* call 0x000190C0 */

loc_0001783A: ;
    goto loc_0001785B;

loc_0001783C: ;
    eax = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00017846u); RECOMP_ABI_CALL(0x0046E4B6u, sub_0046E4B6); /* call 0x0046E4B6 */

loc_00017846: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0001784Fu); RECOMP_ABI_CALL(0x0042C509u, sub_0042C509); /* call 0x0042C509 */

loc_0001784F: ;
    POP32(esp, ebx);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_00017859: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0001785B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    ebp = MEM32(esp + 0x38);
    MEM32(ebp + 0x54) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_00017879; /* jne: not equal / not zero */

loc_00017866: ;
    PUSH32(esp, 0x587BE4);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x587BE4);
    PUSH32(esp, 0x00017876u); RECOMP_ABI_CALL(0x001F0620u, sub_001F0620); /* call 0x001F0620 */

loc_00017876: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00017879: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00017880;

    /* nop */

loc_00017880: ;
    eax = MEM32(ebp + 0x58);
    ecx = MEM32(esi + eax);
    eax = ecx;
    MEM32(esp + 0x30) = 0xF;
    MEM32(esp + 0x2C) = ebx;
    MEM8(esp + 0x1C) = LO8(ebx);
    edi = eax + 1;
    goto loc_000178A0;

    /* nop */

loc_000178A0: ;
    SET_LO8(edx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000178A0; /* jne: not equal / not zero */

loc_000178A7: ;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esp + 0x20;
    PUSH32(esp, 0x000178B4u); RECOMP_ABI_CALL(0x000143C0u, sub_000143C0); /* call 0x000143C0 */

loc_000178B4: ;
    ecx = MEM32(ebp + 0x54);
    eax = esp + 0x18;
    PUSH32(esp, 0x000178C0u); RECOMP_ABI_CALL(0x000190F0u, sub_000190F0); /* call 0x000190F0 */

loc_000178C0: ;
    ecx = MEM32(ebp + 0x58);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = ecx;
    _fa = (uint32_t)(MEM32(esp + 0x30)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x30), 0x10 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000178E7; /* jb: below (unsigned <) */

loc_000178CE: ;
    eax = MEM32(esp + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(esp + 0x38) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_000178E7; /* je: equal / zero */

loc_000178DA: ;
    edx = esp + 0x38;
    PUSH32(esp, edx);
    PUSH32(esp, 0x000178E4u); RECOMP_ABI_CALL(0x002AF1C0u, sub_002AF1C0); /* call 0x002AF1C0 */

loc_000178E4: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000178E7: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xC;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2B8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x2B8 (32-bit) */
    MEM32(esp + 0x30) = 0xF;
    MEM32(esp + 0x2C) = ebx;
    MEM8(esp + 0x1C) = LO8(ebx);
    if (CMP_L(_fas, _fbs)) goto loc_00017880; /* jl: less (signed <) */

loc_00017906: ;
    POP32(esp, ebx);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_00017910: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x00017916u); RECOMP_ABI_CALL(0x0042C509u, sub_0042C509); /* call 0x0042C509 */

loc_00017916: ;
    PUSH32(esp, 0x0001791Bu); RECOMP_ABI_CALL(0x0042C2ACu, sub_0042C2AC); /* call 0x0042C2AC */

loc_0001791B: ;
    MEM32(esp + 0x34) = eax;
    PUSH32(esp, 0x00017924u); RECOMP_ABI_CALL(0x001F04F0u, sub_001F04F0); /* call 0x001F04F0 */

loc_00017924: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0001792Au); RECOMP_ABI_CALL(0x0046E4B6u, sub_0046E4B6); /* call 0x0046E4B6 */

loc_0001792A: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ebp);
    PUSH32(esp, 0x00017933u); RECOMP_ABI_CALL(0x0042C509u, sub_0042C509); /* call 0x0042C509 */

loc_00017933: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_0001793C: ;
    PUSH32(esp, 0x00017941u); RECOMP_ABI_CALL(0x0042C2ACu, sub_0042C2AC); /* call 0x0042C2AC */

loc_00017941: ;
    MEM32(esp + 0x34) = eax;
    PUSH32(esp, 0x0001794Au); RECOMP_ABI_CALL(0x001F04F0u, sub_001F04F0); /* call 0x001F04F0 */

loc_0001794A: ;
    (void)0;
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_00017950
 * Original: 0x00017950 - 0x000179CD (125 bytes, 45 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00017950(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00017950: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = edx;
    PUSH32(esp, esi);
    MEM32(esp + 0x28) = 0xF;
    MEM32(esp + 0x24) = ebx;
    MEM8(esp + 0x14) = LO8(ebx);
    esi = eax + 1;
    /* nop */

loc_00017970: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00017970; /* jne: not equal / not zero */

loc_00017977: ;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    ecx = esp + 0x18;
    PUSH32(esp, 0x00017984u); RECOMP_ABI_CALL(0x000143C0u, sub_000143C0); /* call 0x000143C0 */

loc_00017984: ;
    esi = MEM32(edi + 0x54);
    eax = esp + 0x10;
    ebx = esp + 0xC;
    PUSH32(esp, 0x00017994u); RECOMP_ABI_CALL(0x000191A0u, sub_000191A0); /* call 0x000191A0 */

loc_00017994: ;
    _fa = (uint32_t)(MEM32(esp + 0x28)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x28), 0x10 (32-bit) */
    POP32(esp, esi);
    POP32(esp, ebx);
    if (CMP_B(_fa, _fb)) goto loc_000179B4; /* jb: below (unsigned <) */

loc_0001799D: ;
    eax = MEM32(esp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_000179B4; /* je: equal / zero */

loc_000179A8: ;
    eax = esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000179B1u); RECOMP_ABI_CALL(0x002AF1C0u, sub_002AF1C0); /* call 0x002AF1C0 */

loc_000179B1: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000179B4: ;
    ecx = MEM32(edi + 0x54);
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 4) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000179C7; /* je: equal / zero */

loc_000179C0: ;
    eax = MEM32(eax + 0x28);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000179C7: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000179D0
 * Original: 0x000179D0 - 0x00017A38 (104 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000179D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000179D0: ;
    PUSH32(esp, 0x000179D5u); RECOMP_ABI_CALL(0x0042B72Au, sub_0042B72A); /* call 0x0042B72A */

loc_000179D5: ;
    MEM32(0x847038) = eax;
    eax = MEM32(edi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00017A37; /* je: equal / zero */

loc_000179E1: ;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00017A37; /* je: equal / zero */

loc_000179E6: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = 0x687E50;
    /* nop */

loc_000179F0: ;
    eax = MEM32(esi);
    ecx = MEM32(edi + 4);
    ebx = MEM32(ecx + eax * 4);
    SET_LO8(eax, MEM8(ebx + 0x14));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00017A0C; /* je: equal / zero */

loc_000179FF: ;
    PUSH32(esp, 0x00017A04u); RECOMP_ABI_CALL(0x00035760u, sub_00035760); /* call 0x00035760 */

loc_00017A04: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00017A0C; /* je: equal / zero */

loc_00017A09: ;
    MEM32(edi + 0xC) = MEM32(edi + 0xC) + 1;
    _fa = (uint32_t)(MEM32(edi + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00017A0C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x687F80) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x687F80 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000179F0; /* jl: less (signed <) */

loc_00017A17: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_00017A20: ;
    edx = MEM32(edi);
    ebx = MEM32(esi + edx);
    PUSH32(esp, 0x00017A2Au); RECOMP_ABI_CALL(0x0002D0C0u, sub_0002D0C0); /* call 0x0002D0C0 */

loc_00017A2A: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xE8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xE8 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00017A20; /* jl: less (signed <) */

loc_00017A35: ;
    POP32(esp, esi);
    POP32(esp, ebx);

loc_00017A37: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00017A40
 * Original: 0x00017A40 - 0x00017B40 (256 bytes, 91 insns)
 * Category: game_audio
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00017A40(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00017A40: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00017A50;

    /* nop */

loc_00017A50: ;
    eax = MEM32(ebx + 4);
    eax = MEM32(edi + eax);
    ecx = MEM32(eax + 0x18);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebp (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00017A83; /* jle: less or equal (signed <=) */

loc_00017A5D: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(eax + 0x18) = ecx;
    SET_LO8(edx, MEM8(0x846FF3));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00017A83; /* je: equal / zero */

loc_00017A6B: ;
    esi = MEM32(0x847024);
    PUSH32(esp, ecx);
    ecx = MEM32(eax + 4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x5D3C20);
    PUSH32(esp, 0x00017A80u); RECOMP_ABI_CALL(0x00018B30u, sub_00018B30); /* call 0x00018B30 */

loc_00017A80: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00017A83: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x130) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x130 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00017A50; /* jl: less (signed <) */

loc_00017A8E: ;
    eax = MEM32(esp + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0xC) = ebp;
    if (CMP_LE(_fas, _fbs)) goto loc_00017B2E; /* jle: less or equal (signed <=) */

loc_00017A9E: ;
    edi = edi;

loc_00017AA0: ;
    edx = MEM32(esp + 0x14);
    eax = MEM32(edx + ebp * 4);
    ecx = MEM32(ebx + 4);
    edi = MEM32(ecx + eax * 4);
    SET_LO8(eax, MEM8(edi + 0x15));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00017ABF; /* jne: not equal / not zero */

loc_00017AB4: ;
    SET_LO8(eax, MEM8(edi + 0x22));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00017B21; /* jne: not equal / not zero */

loc_00017ABB: ;
    MEM32(esp + 0xC) = MEM32(esp + 0xC) + 1;
    _fa = (uint32_t)(MEM32(esp + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00017ABF: ;
    SET_LO8(eax, MEM8(edi + 0x22));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00017B21; /* jne: not equal / not zero */

loc_00017AC6: ;
    SET_LO8(eax, MEM8(edi + 0x14));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00017B21; /* jne: not equal / not zero */

loc_00017ACD: ;
    edx = MEM32(edi + 0x18);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(edi + 0x18) = edx;
    SET_LO8(ecx, MEM8(0x846FF3));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    eax = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_00017AF8; /* je: equal / zero */

loc_00017AE0: ;
    edx = MEM32(edi + 4);
    esi = MEM32(0x847024);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x5D3E40);
    PUSH32(esp, 0x00017AF5u); RECOMP_ABI_CALL(0x00018B30u, sub_00018B30); /* call 0x00018B30 */

loc_00017AF5: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00017AF8: ;
    SET_LO8(eax, MEM8(edi + 0x15));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00017B03; /* jne: not equal / not zero */

loc_00017AFF: ;
    MEM8(edi + 0x20) = 1;

loc_00017B03: ;
    eax = MEM32(esp + 0x14);
    ecx = MEM32(eax + ebp * 4);
    edx = MEM32(ebx + 4);
    eax = MEM32(edx + ecx * 4);
    SET_LO8(ecx, MEM8(eax + 0x15));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00017B21; /* jne: not equal / not zero */

loc_00017B17: ;
    SET_LO8(ecx, MEM8(eax + 0x22));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00017B21; /* jne: not equal / not zero */

loc_00017B1E: ;
    MEM32(ebx + 0xC) = MEM32(ebx + 0xC) + 1;
    _fa = (uint32_t)(MEM32(ebx + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00017B21: ;
    eax = MEM32(esp + 0x18);
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00017AA0; /* jl: less (signed <) */

loc_00017B2E: ;
    ecx = ebx;
    PUSH32(esp, 0x00017B35u); RECOMP_ABI_CALL(0x00017B40u, sub_00017B40); /* call 0x00017B40 */

loc_00017B35: ;
    eax = MEM32(esp + 0xC);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00017B40
 * Original: 0x00017B40 - 0x00017C29 (233 bytes, 80 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00017B40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00017B40: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    MEM32(ecx + 8) = 0;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(ebx, 1);
    /* nop */

loc_00017B50: ;
    eax = MEM32(ecx + 4);
    eax = MEM32(edx + eax);
    _fa = (uint32_t)(MEM8(eax + 0x15)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x15), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00017B68; /* jne: not equal / not zero */

loc_00017B5C: ;
    _fa = (uint32_t)(MEM8(eax + 0x22)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x22), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00017B81; /* je: equal / zero */

loc_00017B62: ;
    _fa = (uint32_t)(MEM8(eax + 0x15)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x15), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00017B81; /* je: equal / zero */

loc_00017B68: ;
    esi = MEM32(eax + 0x18);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00017B81; /* jne: not equal / not zero */

loc_00017B6F: ;
    _fa = (uint32_t)(MEM8(eax + 0x14)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x14), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00017B81; /* jne: not equal / not zero */

loc_00017B75: ;
    _fa = (uint32_t)(MEM8(eax + 0x21)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x21), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00017B7E; /* jne: not equal / not zero */

loc_00017B7B: ;
    MEM8(eax + 0x21) = LO8(ebx);

loc_00017B7E: ;
    MEM32(ecx + 8) = MEM32(ecx + 8) + 1;
    _fa = (uint32_t)(MEM32(ecx + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00017B81: ;
    eax = MEM32(ecx + 4);
    eax = MEM32(eax + edx + 4);
    _fa = (uint32_t)(MEM8(eax + 0x15)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x15), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00017B9A; /* jne: not equal / not zero */

loc_00017B8E: ;
    _fa = (uint32_t)(MEM8(eax + 0x22)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x22), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00017BB3; /* je: equal / zero */

loc_00017B94: ;
    _fa = (uint32_t)(MEM8(eax + 0x15)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x15), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00017BB3; /* je: equal / zero */

loc_00017B9A: ;
    esi = MEM32(eax + 0x18);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00017BB3; /* jne: not equal / not zero */

loc_00017BA1: ;
    _fa = (uint32_t)(MEM8(eax + 0x14)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x14), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00017BB3; /* jne: not equal / not zero */

loc_00017BA7: ;
    _fa = (uint32_t)(MEM8(eax + 0x21)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x21), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00017BB0; /* jne: not equal / not zero */

loc_00017BAD: ;
    MEM8(eax + 0x21) = LO8(ebx);

loc_00017BB0: ;
    MEM32(ecx + 8) = MEM32(ecx + 8) + 1;
    _fa = (uint32_t)(MEM32(ecx + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00017BB3: ;
    eax = MEM32(ecx + 4);
    eax = MEM32(edx + eax + 8);
    _fa = (uint32_t)(MEM8(eax + 0x15)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x15), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00017BCC; /* jne: not equal / not zero */

loc_00017BC0: ;
    _fa = (uint32_t)(MEM8(eax + 0x22)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x22), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00017BE5; /* je: equal / zero */

loc_00017BC6: ;
    _fa = (uint32_t)(MEM8(eax + 0x15)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x15), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00017BE5; /* je: equal / zero */

loc_00017BCC: ;
    esi = MEM32(eax + 0x18);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00017BE5; /* jne: not equal / not zero */

loc_00017BD3: ;
    _fa = (uint32_t)(MEM8(eax + 0x14)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x14), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00017BE5; /* jne: not equal / not zero */

loc_00017BD9: ;
    _fa = (uint32_t)(MEM8(eax + 0x21)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x21), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00017BE2; /* jne: not equal / not zero */

loc_00017BDF: ;
    MEM8(eax + 0x21) = LO8(ebx);

loc_00017BE2: ;
    MEM32(ecx + 8) = MEM32(ecx + 8) + 1;
    _fa = (uint32_t)(MEM32(ecx + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00017BE5: ;
    eax = MEM32(ecx + 4);
    eax = MEM32(edx + eax + 0xC);
    _fa = (uint32_t)(MEM8(eax + 0x15)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x15), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00017BFE; /* jne: not equal / not zero */

loc_00017BF2: ;
    _fa = (uint32_t)(MEM8(eax + 0x22)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x22), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00017C17; /* je: equal / zero */

loc_00017BF8: ;
    _fa = (uint32_t)(MEM8(eax + 0x15)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x15), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00017C17; /* je: equal / zero */

loc_00017BFE: ;
    esi = MEM32(eax + 0x18);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00017C17; /* jne: not equal / not zero */

loc_00017C05: ;
    _fa = (uint32_t)(MEM8(eax + 0x14)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x14), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00017C17; /* jne: not equal / not zero */

loc_00017C0B: ;
    _fa = (uint32_t)(MEM8(eax + 0x21)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x21), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00017C14; /* jne: not equal / not zero */

loc_00017C11: ;
    MEM8(eax + 0x21) = LO8(ebx);

loc_00017C14: ;
    MEM32(ecx + 8) = MEM32(ecx + 8) + 1;
    _fa = (uint32_t)(MEM32(ecx + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00017C17: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x130) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x130 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00017B50; /* jl: less (signed <) */

loc_00017C26: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00017C30
 * Original: 0x00017C30 - 0x00017C78 (72 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00017C30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00017C30: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00017C34: ;
    eax = MEM32(edi + 4);
    ebx = MEM32(esi + eax);
    SET_LO8(eax, MEM8(ebx + 0x15));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00017C6A; /* jne: not equal / not zero */

loc_00017C41: ;
    SET_LO8(eax, MEM8(ebx + 0x22));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00017C6A; /* jne: not equal / not zero */

loc_00017C48: ;
    SET_LO8(eax, MEM8(ebx + 0x20));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00017C6A; /* je: equal / zero */

loc_00017C4F: ;
    PUSH32(esp, 0x00017C54u); RECOMP_ABI_CALL(0x00035760u, sub_00035760); /* call 0x00035760 */

loc_00017C54: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00017C6A; /* jne: not equal / not zero */

loc_00017C59: ;
    SET_LO8(eax, MEM8(0x849DB4));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00017C67; /* je: equal / zero */

loc_00017C62: ;
    PUSH32(esp, 0x00017C67u); RECOMP_ABI_CALL(0x0025BB80u, sub_0025BB80); /* call 0x0025BB80 */

loc_00017C67: ;
    MEM32(edi + 0xC) = MEM32(edi + 0xC) - 1;
    _fa = (uint32_t)(MEM32(edi + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_00017C6A: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x130) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x130 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00017C34; /* jl: less (signed <) */

loc_00017C75: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00017C80
 * Original: 0x00017C80 - 0x00017C93 (19 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00017C80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00017C80: ;
    PUSH32(esp, 0x00017C85u); RECOMP_ABI_CALL(0x00017B40u, sub_00017B40); /* call 0x00017B40 */

loc_00017C85: ;
    eax = MEM32(ecx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00017C92; /* je: equal / zero */

loc_00017C8C: ;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00017C92u); RECOMP_ABI_CALL(0x00017EF0u, sub_00017EF0); /* call 0x00017EF0 */

loc_00017C92: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00017CA0
 * Original: 0x00017CA0 - 0x00017CE5 (69 bytes, 26 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00017CA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00017CA0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00017CA4: ;
    eax = MEM32(ebx + 4);
    eax = MEM32(edi + eax);
    ecx = MEM32(eax + 0x18);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00017CD7; /* jle: less or equal (signed <=) */

loc_00017CB1: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(eax + 0x18) = ecx;
    SET_LO8(edx, MEM8(0x846FF3));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00017CD7; /* je: equal / zero */

loc_00017CBF: ;
    esi = MEM32(0x847024);
    PUSH32(esp, ecx);
    ecx = MEM32(eax + 4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x5D3C20);
    PUSH32(esp, 0x00017CD4u); RECOMP_ABI_CALL(0x00018B30u, sub_00018B30); /* call 0x00018B30 */

loc_00017CD4: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00017CD7: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x130) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x130 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00017CA4; /* jl: less (signed <) */

loc_00017CE2: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00017CF0
 * Original: 0x00017CF0 - 0x00017E1C (300 bytes, 103 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00017CF0(void)
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

loc_00017CF0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    ebp = ecx;
    PUSH32(esp, 0x00017CFAu); RECOMP_ABI_CALL(0x0042B72Au, sub_0042B72A); /* call 0x0042B72A */

loc_00017CFA: ;
    esi = MEM32(ebp + 0x18);
    ecx = eax;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x10 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00017E18; /* jb: below (unsigned <) */

loc_00017D0A: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esp + 8) = ecx;
    fp_push((double)SMEM32(esp + 8)); /* fild */
    if (CMP_GE(_fas, _fbs)) goto loc_00017D1C; /* jge: greater or equal (signed >=) */

loc_00017D16: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x648CE8)); /* fadd dword ptr [0x648ce8] */

loc_00017D1C: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x648D2C)); /* fmul dword ptr [0x648d2c] */
    MEM32(ebp + 0x18) = eax;
    SET_LO8(ecx, MEM8(0x846FFB));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    if (CMP_EQ(_fa, _fb)) goto loc_00017D47; /* je: equal / zero */

loc_00017D33: ;
    esi = MEM32(0x847024);
    PUSH32(esp, eax);
    PUSH32(esp, 0x5AC884);
    PUSH32(esp, 0x00017D44u); RECOMP_ABI_CALL(0x00018B30u, sub_00018B30); /* call 0x00018B30 */

loc_00017D44: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00017D47: ;
    SET_LO8(eax, MEM8(ebp + 0x14));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_00017D9C; /* je: equal / zero */

loc_00017D4F: ;
    SET_LO8(eax, MEM8(ebp + 0x15));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00017D9C; /* je: equal / zero */

loc_00017D56: ;
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 0x10);
    edi = MEM32(ebx + 0x1C);
    esi = MEM32(ebx + 0x18);
    eax = ebp;
    PUSH32(esp, 0x00017D67u); RECOMP_ABI_CALL(0x00017FF0u, sub_00017FF0); /* call 0x00017FF0 */

loc_00017D67: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00017D9B; /* je: equal / zero */

loc_00017D6B: ;
    eax = MEM32(ebp + 0x3C);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00017D75u); RECOMP_ABI_CALL(0x0001ED00u, sub_0001ED00); /* call 0x0001ED00 */

loc_00017D75: ;
    esi = MEM32(ebp + 0x10);
    SET_LO8(eax, MEM8(esi + 0x20));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00017D90; /* je: equal / zero */

loc_00017D7F: ;
    PUSH32(esp, 0x00017D84u); RECOMP_ABI_CALL(0x00018F50u, sub_00018F50); /* call 0x00018F50 */

loc_00017D84: ;
    ecx = MEM32(ebp + 0x10);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00017D8Du); RECOMP_ABI_CALL(0x002AF410u, sub_002AF410); /* call 0x002AF410 */

loc_00017D8D: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00017D90: ;
    MEM32(ebp + 0x10) = 0;
    MEM8(ebp + 0x14) = 0;

loc_00017D9B: ;
    POP32(esp, ebx);

loc_00017D9C: ;
    eax = ebp;
    PUSH32(esp, 0x00017DA3u); RECOMP_ABI_CALL(0x00017E20u, sub_00017E20); /* call 0x00017E20 */

loc_00017DA3: ;
    eax = MEM32(ebp + 0x3C);
    PUSH32(esp, 0x00017DABu); RECOMP_ABI_CALL(0x0001DF20u, sub_0001DF20); /* call 0x0001DF20 */

loc_00017DAB: ;
    eax = MEM32(ebp + 0x40);
    PUSH32(esp, 0x00017DB3u); RECOMP_ABI_CALL(0x00024630u, sub_00024630); /* call 0x00024630 */

loc_00017DB3: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(ecx, MEM8(ebp + 0x86));
    edx = ebp + 0xA0;
    PUSH32(esp, edx);
    eax = ebp + 0x94;
    PUSH32(esp, eax);
    eax = MEM32(ebp + 0x44);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00017DD2u); RECOMP_ABI_CALL(0x00034AB0u, sub_00034AB0); /* call 0x00034AB0 */

loc_00017DD2: ;
    SET_LO8(eax, MEM8(ebp + 0x61));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00017DE4; /* je: equal / zero */

loc_00017DD9: ;
    SET_LO8(eax, MEM8(ebp + 0x16));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00017DE4; /* je: equal / zero */

loc_00017DE0: ;
    MEM8(ebp + 0x61) = 0;

loc_00017DE4: ;
    PUSH32(esp, 0x00017DE9u); RECOMP_ABI_CALL(0x00401190u, sub_00401190); /* call 0x00401190 */

loc_00017DE9: ;
    eax = MEM32(ebp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00017DFE; /* je: equal / zero */

loc_00017DF0: ;
    SET_LO8(eax, MEM8(ebp + 0x16));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00017DFE; /* je: equal / zero */

loc_00017DF7: ;
    edi = ebp;
    PUSH32(esp, 0x00017DFEu); RECOMP_ABI_CALL(0x00017C30u, sub_00017C30); /* call 0x00017C30 */

loc_00017DFE: ;
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_00017E18; /* je: equal / zero */

loc_00017E06: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x00017E0Cu); RECOMP_ABI_CALL(0x00017EF0u, sub_00017EF0); /* call 0x00017EF0 */

loc_00017E0C: ;
    POP32(esp, esi);
    ecx = ebp;
    POP32(esp, ebp);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_00017B40(); return; /* tail jmp 0x00017B40 */

loc_00017E18: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00017E20
 * Original: 0x00017E20 - 0x00017EE4 (196 bytes, 50 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00017E20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00017E20: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm0 = XMM_SCALAR(MEMF(0x84B944)); /* movss */
    PUSH32(esp, esi);
    esi = eax;
    ecx = esi + 0x88;
    MEMF(ecx) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x84B948)); /* movss */
    MEMF(ecx + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x84B94C)); /* movss */
    MEMF(ecx + 8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x6497E4)); /* movss */
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = ecx;
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    xmm0 = XMM_SHUFFLE(xmm0, xmm0, 0); /* shufps */
    edx = MEM32(esp + 8);
    xmm1 = XMM_SCALAR(MEMF(edx)); /* movss */
    XMM_LOAD_HIGH(xmm1, edx + 4); /* movhps */
    xmm0 = XMM_MUL(xmm0, xmm1); /* mulps */
    eax = MEM32(esp + 4);
    MEMF(eax) = xmm0.f[0]; /* movss */
    XMM_STORE_HIGH(eax + 4, xmm0); /* movhps */
    edx = MEM32(ecx);
    eax = esi + 0x94;
    MEM32(eax) = edx;
    edx = MEM32(ecx + 4);
    ecx = MEM32(ecx + 8);
    MEM32(eax + 4) = edx;
    edx = MEM32(0x84A144);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    MEM32(eax + 8) = ecx;
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    MEM8(esi + 0x86) = LO8(eax);
    if (CMP_EQ(_fa, _fb)) goto loc_00017EDF; /* je: equal / zero */

loc_00017EB8: ;
    eax = MEM32(0x8470DC);
    _fb = (uint32_t)(0x770) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x770;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    if ((_fa == 0)) goto loc_00017EDF; /* je: equal / zero */

loc_00017EC4: ;
    _fb = (uint32_t)(0x2F4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x2F4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(eax);
    _fb = (uint32_t)(0xA0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xA0;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi) = edx;
    ecx = MEM32(eax + 4);
    MEM32(esi + 4) = ecx;
    edx = MEM32(eax + 8);
    MEM32(esi + 8) = edx;

loc_00017EDF: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00017EF0
 * Original: 0x00017EF0 - 0x00017FEA (250 bytes, 80 insns)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00017EF0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00017EF0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00017F00;

    /* nop */

loc_00017F00: ;
    eax = MEM32(esp + 0x14);
    ecx = MEM32(eax + 4);
    edi = MEM32(ecx + ebp);
    _fa = (uint32_t)(MEM8(edi + 0x15)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi + 0x15), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00017FD4; /* je: equal / zero */

loc_00017F13: ;
    _fa = (uint32_t)(MEM32(edi + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x18), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00017FD4; /* jne: not equal / not zero */

loc_00017F1C: ;
    _fa = (uint32_t)(MEM8(edi + 0x14)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi + 0x14), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00017FD4; /* jne: not equal / not zero */

loc_00017F25: ;
    _fa = (uint32_t)(MEM8(edi + 0x15)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi + 0x15), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00017FB8; /* je: equal / zero */

loc_00017F2E: ;
    _fa = (uint32_t)(MEM8(edi + 0x14)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi + 0x14), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00017FB8; /* jne: not equal / not zero */

loc_00017F37: ;
    _fa = (uint32_t)(MEM32(edi + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x18), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00017FB8; /* jne: not equal / not zero */

loc_00017F3C: ;
    esi = MEM32(0x847024);
    eax = MEM32(edi + 0x28);
    ecx = esi;
    PUSH32(esp, 0x00017F4Cu); RECOMP_ABI_CALL(0x00018BA0u, sub_00018BA0); /* call 0x00018BA0 */

loc_00017F4C: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00017F9F; /* je: equal / zero */

loc_00017F50: ;
    esi = edi + 0x1C;
    eax = esi;
    PUSH32(esp, 0x00017F5Au); RECOMP_ABI_CALL(0x00402A70u, sub_00402A70); /* call 0x00402A70 */

loc_00017F5A: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), ebx (32-bit) */
    SET_LO8(eax, MEM8(0x846FF3));
    if (CMP_NE(_fa, _fb)) goto loc_00017F8A; /* jne: not equal / not zero */

loc_00017F63: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00017F82; /* je: equal / zero */

loc_00017F67: ;
    edx = MEM32(edi + 8);
    eax = MEM32(edi + 4);
    esi = MEM32(0x847024);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x5D3D14);
    PUSH32(esp, 0x00017F7Fu); RECOMP_ABI_CALL(0x00018B30u, sub_00018B30); /* call 0x00018B30 */

loc_00017F7F: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00017F82: ;
    MEM8(edi + 0x15) = LO8(ebx);
    MEM8(edi + 0x21) = LO8(ebx);
    goto loc_00017FB8;

loc_00017F8A: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00017FB8; /* je: equal / zero */

loc_00017F8E: ;
    ecx = MEM32(edi + 4);
    esi = MEM32(0x847024);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x5D3CD0);
    goto loc_00017FB0;

loc_00017F9F: ;
    _fa = (uint32_t)(MEM8(0x846FF3)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x846FF3), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00017FB8; /* je: equal / zero */

loc_00017FA7: ;
    edx = MEM32(edi + 4);
    PUSH32(esp, edx);
    PUSH32(esp, 0x5D3C68);

loc_00017FB0: ;
    PUSH32(esp, 0x00017FB5u); RECOMP_ABI_CALL(0x00018B30u, sub_00018B30); /* call 0x00018B30 */

loc_00017FB5: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00017FB8: ;
    ecx = MEM32(esp + 0x14);
    eax = MEM32(ecx + 4);
    eax = MEM32(eax + ebp);
    _fa = (uint32_t)(MEM8(eax + 0x15)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x15), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00017FD4; /* jne: not equal / not zero */

loc_00017FC7: ;
    _fa = (uint32_t)(MEM8(eax + 0x22)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x22), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00017FD4; /* jne: not equal / not zero */

loc_00017FCC: ;
    MEM32(ecx + 8) = MEM32(ecx + 8) - 1;
    _fa = (uint32_t)(MEM32(ecx + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas >= 0)) goto loc_00017FD4; /* jns: not sign (positive) */

loc_00017FD1: ;
    MEM32(ecx + 8) = ebx;

loc_00017FD4: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 4;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0x130) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0x130 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00017F00; /* jl: less (signed <) */

loc_00017FE3: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00017FF0
 * Original: 0x00017FF0 - 0x00018021 (49 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00017FF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00017FF0: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    PUSH32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_00018019; /* je: equal / zero */

loc_00017FF5: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00018019; /* jle: less or equal (signed <=) */

loc_00017FFB: ;
    edx = MEM32(eax + 4);
    edi = edi;

loc_00018000: ;
    eax = MEM32(esi + ecx * 4);
    eax = MEM32(edx + eax * 4);
    SET_LO8(ebx, MEM8(eax + 0x15));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00018014; /* jne: not equal / not zero */

loc_0001800D: ;
    SET_LO8(ebx, MEM8(eax + 0x22));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0001801D; /* je: equal / zero */

loc_00018014: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00018000; /* jl: less (signed <) */

loc_00018019: ;
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0001801D: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00018030
 * Original: 0x00018030 - 0x000180A3 (115 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00018030(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00018030: ;
    SET_LO8(eax, MEM8(0x84725D));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000180A2; /* je: equal / zero */

loc_00018039: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x2000000);
    PUSH32(esp, 3);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x80000000u);
    PUSH32(esp, 0x657BE8);
    PUSH32(esp, 0x00018055u); RECOMP_ABI_CALL(0x0042C37Eu, sub_0042C37E); /* call 0x0042C37E */

loc_00018055: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00018068; /* jne: not equal / not zero */

loc_0001805A: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x657BE8);
    PUSH32(esp, 0x00018066u); RECOMP_ABI_CALL(0x0042C54Du, sub_0042C54D); /* call 0x0042C54D */

loc_00018066: ;
    goto loc_0001806E;

loc_00018068: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0001806Eu); RECOMP_ABI_CALL(0x0042C509u, sub_0042C509); /* call 0x0042C509 */

loc_0001806E: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x2000000);
    PUSH32(esp, 3);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x80000000u);
    PUSH32(esp, 0x657BFC);
    PUSH32(esp, 0x0001808Au); RECOMP_ABI_CALL(0x0042C37Eu, sub_0042C37E); /* call 0x0042C37E */

loc_0001808A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0001809C; /* jne: not equal / not zero */

loc_0001808F: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x657BFC);
    PUSH32(esp, 0x0001809Bu); RECOMP_ABI_CALL(0x0042C54Du, sub_0042C54D); /* call 0x0042C54D */

loc_0001809B: ;
    esp += 4; return; /* ret */

loc_0001809C: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000180A2u); RECOMP_ABI_CALL(0x0042C509u, sub_0042C509); /* call 0x0042C509 */

loc_000180A2: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00018080
 * Original: 0x00018080 - 0x000180A3 (35 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00018080(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00018080: ;
    PUSH32(esp, 0x657BFC);
    PUSH32(esp, 0x0001808Au); RECOMP_ABI_CALL(0x0042C37Eu, sub_0042C37E); /* call 0x0042C37E */

loc_0001808A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0001809C; /* jne: not equal / not zero */

loc_0001808F: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x657BFC);
    PUSH32(esp, 0x0001809Bu); RECOMP_ABI_CALL(0x0042C54Du, sub_0042C54D); /* call 0x0042C54D */

loc_0001809B: ;
    esp += 4; return; /* ret */

loc_0001809C: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000180A2u); RECOMP_ABI_CALL(0x0042C509u, sub_0042C509); /* call 0x0042C509 */

loc_000180A2: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00018085
 * Original: 0x00018085 - 0x000180A3 (30 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00018085(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00018085: ;
    PUSH32(esp, 0x0001808Au); RECOMP_ABI_CALL(0x0042C37Eu, sub_0042C37E); /* call 0x0042C37E */

loc_0001808A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0001809C; /* jne: not equal / not zero */

loc_0001808F: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x657BFC);
    PUSH32(esp, 0x0001809Bu); RECOMP_ABI_CALL(0x0042C54Du, sub_0042C54D); /* call 0x0042C54D */

loc_0001809B: ;
    esp += 4; return; /* ret */

loc_0001809C: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000180A2u); RECOMP_ABI_CALL(0x0042C509u, sub_0042C509); /* call 0x0042C509 */

loc_000180A2: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000180B0
 * Original: 0x000180B0 - 0x00018153 (163 bytes, 47 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000180B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000180B0: ;
    eax = MEM32(edi + 0x48);
    _fb = (uint32_t)(0x108) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x108;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0001814C; /* je: equal / zero */

loc_000180C1: ;
    eax = MEM32(edi + 0x4C);
    ecx = MEM32(eax * 4 + 0x69CF90);
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x657BE8);
    PUSH32(esp, 0x5AC878);
    edx = esp + 0x14;
    PUSH32(esp, 0x102);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000180E6u); RECOMP_ABI_CALL(0x0046E9ADu, sub_0046E9AD); /* call 0x0046E9AD */

loc_000180E6: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    PUSH32(esp, 0x80);
    PUSH32(esp, 2);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0xD0000000u);
    eax = esp + 0x20;
    PUSH32(esp, eax);
    MEM8(esp + 0x127) = 0;
    PUSH32(esp, 0x0001810Du); RECOMP_ABI_CALL(0x0042C37Eu, sub_0042C37E); /* call 0x0042C37E */

loc_0001810D: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00018138; /* je: equal / zero */

loc_00018114: ;
    edx = MEM32(edi + 0x48);
    PUSH32(esp, 0);
    ecx = esp + 8;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x3768);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    MEM32(esp + 0x18) = 0;
    PUSH32(esp, 0x00018132u); RECOMP_ABI_CALL(0x0042BD71u, sub_0042BD71); /* call 0x0042BD71 */

loc_00018132: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00018138u); RECOMP_ABI_CALL(0x0042C509u, sub_0042C509); /* call 0x0042C509 */

loc_00018138: ;
    eax = MEM32(edi + 0x48);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00018141u); RECOMP_ABI_CALL(0x0046E4B6u, sub_0046E4B6); /* call 0x0046E4B6 */

loc_00018141: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi + 0x48) = 0;
    POP32(esp, esi);

loc_0001814C: ;
    _fb = (uint32_t)(0x108) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x108;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000180FF
 * Original: 0x000180FF - 0x00018153 (84 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000180FF(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000180FF: ;
    PUSH32(esp, eax);
    MEM8(esp + 0x127) = 0;
    PUSH32(esp, 0x0001810Du); RECOMP_ABI_CALL(0x0042C37Eu, sub_0042C37E); /* call 0x0042C37E */

loc_0001810D: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00018138; /* je: equal / zero */

loc_00018114: ;
    edx = MEM32(edi + 0x48);
    PUSH32(esp, 0);
    ecx = esp + 8;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x3768);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    MEM32(esp + 0x18) = 0;
    PUSH32(esp, 0x00018132u); RECOMP_ABI_CALL(0x0042BD71u, sub_0042BD71); /* call 0x0042BD71 */

loc_00018132: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00018138u); RECOMP_ABI_CALL(0x0042C509u, sub_0042C509); /* call 0x0042C509 */

loc_00018138: ;
    eax = MEM32(edi + 0x48);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00018141u); RECOMP_ABI_CALL(0x0046E4B6u, sub_0046E4B6); /* call 0x0046E4B6 */

loc_00018141: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi + 0x48) = 0;
    POP32(esp, esi);
    _fb = (uint32_t)(0x108) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x108;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00018100
 * Original: 0x00018100 - 0x00018153 (83 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00018100(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00018100: ;
    MEM8(esp + 0x127) = 0;
    PUSH32(esp, 0x0001810Du); RECOMP_ABI_CALL(0x0042C37Eu, sub_0042C37E); /* call 0x0042C37E */

loc_0001810D: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00018138; /* je: equal / zero */

loc_00018114: ;
    edx = MEM32(edi + 0x48);
    PUSH32(esp, 0);
    ecx = esp + 8;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x3768);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    MEM32(esp + 0x18) = 0;
    PUSH32(esp, 0x00018132u); RECOMP_ABI_CALL(0x0042BD71u, sub_0042BD71); /* call 0x0042BD71 */

loc_00018132: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00018138u); RECOMP_ABI_CALL(0x0042C509u, sub_0042C509); /* call 0x0042C509 */

loc_00018138: ;
    eax = MEM32(edi + 0x48);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00018141u); RECOMP_ABI_CALL(0x0046E4B6u, sub_0046E4B6); /* call 0x0046E4B6 */

loc_00018141: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi + 0x48) = 0;
    POP32(esp, esi);
    _fb = (uint32_t)(0x108) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x108;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00018160
 * Original: 0x00018160 - 0x00018321 (449 bytes, 139 insns)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00018160(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00018160: ;
    _fb = (uint32_t)(0x508) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x508;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x514);
    eax = MEM32(esi + 0x48);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00018316; /* je: equal / zero */

loc_0001817C: ;
    eax = MEM32(eax);
    ecx = MEM32(eax * 4 + 0x69CF90);
    PUSH32(esp, ebp);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x657BFC);
    PUSH32(esp, 0x5AC86C);
    edx = esp + 0x1C;
    PUSH32(esp, 0x102);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000181A0u); RECOMP_ABI_CALL(0x0046E9ADu, sub_0046E9AD); /* call 0x0046E9AD */

loc_000181A0: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ebx);
    PUSH32(esp, 0x80);
    PUSH32(esp, 2);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0xD0000000u);
    eax = esp + 0x28;
    PUSH32(esp, eax);
    MEM8(esp + 0x12F) = LO8(ebx);
    PUSH32(esp, 0x000181C3u); RECOMP_ABI_CALL(0x0042C37Eu, sub_0042C37E); /* call 0x0042C37E */

loc_000181C3: ;
    ebp = eax;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00018315; /* je: equal / zero */

loc_000181CE: ;
    ecx = MEM32(esi + 0x48);
    edx = MEM32(ecx);
    eax = MEM32(edx * 4 + 0x69CF90);
    PUSH32(esp, eax);
    PUSH32(esp, 0x5AC864);
    ecx = esp + 0x11C;
    PUSH32(esp, 0x3FE);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000181F2u); RECOMP_ABI_CALL(0x0046E9ADu, sub_0046E9AD); /* call 0x0046E9AD */

loc_000181F2: ;
    eax = esp + 0x124;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(esp + 0x513) = LO8(ebx);
    MEM32(esp + 0xC) = ebx;
    edx = eax + 1;
    /* nop */

loc_00018210: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00018210; /* jne: not equal / not zero */

loc_00018217: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    edx = esp + 0x10;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = esp + 0x120;
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0001822Eu); RECOMP_ABI_CALL(0x0042BD71u, sub_0042BD71); /* call 0x0042BD71 */

loc_0001822E: ;
    PUSH32(esp, 0x5AC834);
    ecx = esp + 0x118;
    PUSH32(esp, 0x3FE);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00018245u); RECOMP_ABI_CALL(0x0046E9ADu, sub_0046E9AD); /* call 0x0046E9AD */

loc_00018245: ;
    eax = esp + 0x120;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0xC) = ebx;
    edx = eax + 1;

loc_00018256: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00018256; /* jne: not equal / not zero */

loc_0001825D: ;
    PUSH32(esp, edi);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = esp + 0x124;
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x00018275u); RECOMP_ABI_CALL(0x0042BD71u, sub_0042BD71); /* call 0x0042BD71 */

loc_00018275: ;
    esi = 1;
    edi = 0x65E090;
    /* nop */

loc_00018280: ;
    ecx = MEM32(esp + 0x51C);
    edx = MEM32(ecx + 0x48);
    ecx = MEM32(edx + esi * 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000182FE; /* je: equal / zero */

loc_00018291: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x65E060) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x65E060 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000182A5; /* jl: less (signed <) */

loc_00018299: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x687940) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x687940 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000182A5; /* jge: greater or equal (signed >=) */

loc_000182A1: ;
    eax = edi;
    goto loc_000182A7;

loc_000182A5: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000182A7: ;
    edx = MEM32(eax + 0x14);
    PUSH32(esp, ecx);
    ecx = MEM32(eax + 4);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x5AC824);
    eax = esp + 0x12C;
    PUSH32(esp, 0x102);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000182C8u); RECOMP_ABI_CALL(0x0046E9ADu, sub_0046E9AD); /* call 0x0046E9AD */

loc_000182C8: ;
    eax = esp + 0x134;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x10) = ebx;
    edx = eax + 1;
    /* nop */

loc_000182E0: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000182E0; /* jne: not equal / not zero */

loc_000182E7: ;
    PUSH32(esp, ebx);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, eax);
    edx = esp + 0x124;
    PUSH32(esp, edx);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x000182FEu); RECOMP_ABI_CALL(0x0042BD71u, sub_0042BD71); /* call 0x0042BD71 */

loc_000182FE: ;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x30;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x687940) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x687940 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00018280; /* jl: less (signed <) */

loc_0001830E: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x00018314u); RECOMP_ABI_CALL(0x0042C509u, sub_0042C509); /* call 0x0042C509 */

loc_00018314: ;
    POP32(esp, edi);

loc_00018315: ;
    POP32(esp, ebp);

loc_00018316: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x508) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x508;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00018330
 * Original: 0x00018330 - 0x00018429 (249 bytes, 73 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00018330(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00018330: ;
    _fb = (uint32_t)(0x108) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x108;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edi);
    edi = esi;
    PUSH32(esp, 0x0001833Eu); RECOMP_ABI_CALL(0x000180B0u, sub_000180B0); /* call 0x000180B0 */

loc_0001833E: ;
    SET_LO8(eax, MEM8(0x847001));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00018421; /* je: equal / zero */

loc_0001834B: ;
    eax = MEM32(0x7FA1F8);
    PUSH32(esp, 0x3768);
    MEM32(esi + 0x4C) = eax;
    PUSH32(esp, 0x0001835Du); RECOMP_ABI_CALL(0x0046DAB2u, sub_0046DAB2); /* call 0x0046DAB2 */

loc_0001835D: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi + 0x48) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0001840D; /* je: equal / zero */

loc_0001836B: ;
    ecx = MEM32(esi + 0x4C);
    edx = MEM32(ecx * 4 + 0x69CF90);
    PUSH32(esp, edx);
    PUSH32(esp, 0x657BE8);
    PUSH32(esp, 0x5AC878);
    eax = esp + 0x14;
    PUSH32(esp, 0x102);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0001838Fu); RECOMP_ABI_CALL(0x0046E9ADu, sub_0046E9AD); /* call 0x0046E9AD */

loc_0001838F: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    PUSH32(esp, 0x80);
    PUSH32(esp, 3);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0xD0000000u);
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    MEM8(esp + 0x127) = 0;
    PUSH32(esp, 0x000183B6u); RECOMP_ABI_CALL(0x0042C37Eu, sub_0042C37E); /* call 0x0042C37E */

loc_000183B6: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000183F1; /* je: equal / zero */

loc_000183BD: ;
    eax = MEM32(esi + 0x48);
    PUSH32(esp, 0);
    edx = esp + 8;
    PUSH32(esp, edx);
    PUSH32(esp, 0x3768);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    MEM32(esp + 0x18) = 0;
    PUSH32(esp, 0x000183DBu); RECOMP_ABI_CALL(0x0042BC84u, sub_0042BC84); /* call 0x0042BC84 */

loc_000183DB: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x000183E1u); RECOMP_ABI_CALL(0x0042C509u, sub_0042C509); /* call 0x0042C509 */

loc_000183E1: ;
    ecx = MEM32(esi + 0x48);
    edx = MEM32(esi + 0x4C);
    MEM32(ecx) = edx;
    POP32(esp, edi);
    _fb = (uint32_t)(0x108) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x108;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000183F1: ;
    edi = MEM32(esi + 0x48);
    ecx = 0xDDA;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = MEM32(esi + 0x48);
    edx = MEM32(esi + 0x4C);
    MEM32(ecx) = edx;
    POP32(esp, edi);
    _fb = (uint32_t)(0x108) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x108;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0001840D: ;
    PUSH32(esp, 0x587BE4);
    PUSH32(esp, 0);
    PUSH32(esp, 0x587BE4);
    PUSH32(esp, 0x0001841Eu); RECOMP_ABI_CALL(0x001F0620u, sub_001F0620); /* call 0x001F0620 */

loc_0001841E: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00018421: ;
    POP32(esp, edi);
    _fb = (uint32_t)(0x108) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x108;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00018430
 * Original: 0x00018430 - 0x00018555 (293 bytes, 90 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00018430(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00018430: ;
    _fb = (uint32_t)(0x24C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x24C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x258);
    PUSH32(esp, edi);
    edi = ebp;
    PUSH32(esp, 0x00018447u); RECOMP_ABI_CALL(0x000180B0u, sub_000180B0); /* call 0x000180B0 */

loc_00018447: ;
    PUSH32(esp, 0x657BE8);
    PUSH32(esp, 0x5AC818);
    eax = esp + 0x1C;
    PUSH32(esp, 0x102);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00018460u); RECOMP_ABI_CALL(0x0046E9ADu, sub_0046E9AD); /* call 0x0046E9AD */

loc_00018460: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esp + 0x118;
    PUSH32(esp, ecx);
    edx = esp + 0x18;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edx);
    MEM8(esp + 0x11F) = LO8(ebx);
    PUSH32(esp, 0x0001847Eu); RECOMP_ABI_CALL(0x0042C6B3u, sub_0042C6B3); /* call 0x0042C6B3 */

loc_0001847E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    MEM32(esp + 0xC) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_00018549; /* je: equal / zero */

loc_0001848B: ;
    PUSH32(esp, 0x3768);
    PUSH32(esp, 0x00018495u); RECOMP_ABI_CALL(0x0046DAB2u, sub_0046DAB2); /* call 0x0046DAB2 */

loc_00018495: ;
    edi = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = 0xDDA;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ebp + 0x48) = edi;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    PUSH32(esp, esi);
    goto loc_000184B0;

    /* nop */

loc_000184B0: ;
    eax = esp + 0x148;
    PUSH32(esp, eax);
    PUSH32(esp, 0x657BE8);
    PUSH32(esp, 0x5AC810);
    ecx = esp + 0x24;
    PUSH32(esp, 0x102);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000184D1u); RECOMP_ABI_CALL(0x0046E9ADu, sub_0046E9AD); /* call 0x0046E9AD */

loc_000184D1: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ebx);
    PUSH32(esp, 0x80);
    PUSH32(esp, 3);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0xD0000000u);
    edx = esp + 0x30;
    PUSH32(esp, edx);
    PUSH32(esp, 0x000184EDu); RECOMP_ABI_CALL(0x0042C37Eu, sub_0042C37E); /* call 0x0042C37E */

loc_000184ED: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00018519; /* je: equal / zero */

loc_000184F4: ;
    ecx = MEM32(ebp + 0x48);
    PUSH32(esp, ebx);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    PUSH32(esp, 0x3768);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    MEM32(esp + 0x28) = ebx;
    PUSH32(esp, 0x0001850Du); RECOMP_ABI_CALL(0x0042BC84u, sub_0042BC84); /* call 0x0042BC84 */

loc_0001850D: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00018513u); RECOMP_ABI_CALL(0x0042C509u, sub_0042C509); /* call 0x0042C509 */

loc_00018513: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x00018519u); RECOMP_ABI_CALL(0x00018160u, sub_00018160); /* call 0x00018160 */

loc_00018519: ;
    eax = MEM32(esp + 0x10);
    edx = esp + 0x11C;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0001852Bu); RECOMP_ABI_CALL(0x0042C7C0u, sub_0042C7C0); /* call 0x0042C7C0 */

loc_0001852B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000184B0; /* jne: not equal / not zero */

loc_0001852F: ;
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00018539u); RECOMP_ABI_CALL(0x0042C509u, sub_0042C509); /* call 0x0042C509 */

loc_00018539: ;
    edx = MEM32(ebp + 0x48);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00018542u); RECOMP_ABI_CALL(0x0046E4B6u, sub_0046E4B6); /* call 0x0046E4B6 */

loc_00018542: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + 0x48) = ebx;
    POP32(esp, esi);

loc_00018549: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x24C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00018560
 * Original: 0x00018560 - 0x000187BD (605 bytes, 151 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00018560(void)
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

loc_00018560: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    esi = edi;
    PUSH32(esp, 0x0001856Eu); RECOMP_ABI_CALL(0x00018330u, sub_00018330); /* call 0x00018330 */

loc_0001856E: ;
    eax = MEM32(ebp + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00018581; /* je: equal / zero */

loc_00018575: ;
    PUSH32(esp, eax);
    eax = MEM32(ebp + 0x18);
    PUSH32(esp, eax);
    ebx = edi;
    PUSH32(esp, 0x00018581u); RECOMP_ABI_CALL(0x00017A40u, sub_00017A40); /* call 0x00017A40 */

loc_00018581: ;
    MEM8(edi + 0x14) = 1;
    MEM8(edi + 0x15) = 0;
    MEM32(edi + 0x10) = ebp;
    ecx = MEM32(ebp + 0xC);
    MEM32(edi + 0x74) = ecx;
    edx = MEM32(ebp + 0x10);
    MEM32(edi + 0x78) = edx;
    eax = MEM32(ebp + 0x14);
    MEM32(edi + 0x7C) = eax;
    PUSH32(esp, eax);
    ebx = edx;
    esi = ecx;
    eax = edi;
    PUSH32(esp, 0x000185AAu); RECOMP_ABI_CALL(0x00018A60u, sub_00018A60); /* call 0x00018A60 */

loc_000185AA: ;
    SET_LO8(eax, MEM8(ebp + 0x21));
    POP32(esp, esi);
    POP32(esp, ebp);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    SET_LO8(eax, MEM8(0x847262));
    POP32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_0001864A; /* je: equal / zero */

loc_000185BD: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    if (CMP_NE(_fa, _fb)) goto loc_000185CC; /* jne: not equal / not zero */

loc_000185C4: ;
    xmm0 = XMM_SCALAR(MEMF(0x648D14)); /* movss */

loc_000185CC: ;
    MEMF(edi + 0x1C) = xmm0.f[0]; /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x759EA0); /* mulss */
    eax = (uint32_t)recomp_cvt_si32((double)xmm0.f[0], g_mxcsr, 1); /* cvttss2si */
    PUSH32(esp, eax);
    PUSH32(esp, 0x91);
    PUSH32(esp, 0x000185E8u); RECOMP_ABI_CALL(0x00401EE0u, sub_00401EE0); /* call 0x00401EE0 */

loc_000185E8: ;
    SET_LO8(eax, MEM8(0x847261));
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000185FF; /* jne: not equal / not zero */

loc_000185F7: ;
    xmm0 = XMM_SCALAR(MEMF(0x648D14)); /* movss */

loc_000185FF: ;
    ecx = (uint32_t)recomp_cvt_si32((double)MEMF(0x759EA0), g_mxcsr, 1); /* cvttss2si */
    PUSH32(esp, ecx);
    MEMF(edi + 0x20) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x648D14)); /* movss */
    PUSH32(esp, 0x93);
    MEMF(edi + 0x28) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00018624u); RECOMP_ABI_CALL(0x00401EE0u, sub_00401EE0); /* call 0x00401EE0 */

loc_00018624: ;
    edx = (uint32_t)recomp_cvt_si32((double)MEMF(0x759EA0), g_mxcsr, 1); /* cvttss2si */
    xmm0 = XMM_SCALAR(MEMF(0x648D14)); /* movss */
    PUSH32(esp, edx);
    PUSH32(esp, 0x92);
    MEMF(edi + 0x24) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00018644u); RECOMP_ABI_CALL(0x00401EE0u, sub_00401EE0); /* call 0x00401EE0 */

loc_00018644: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_0001864A: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000186DF; /* je: equal / zero */

loc_00018652: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */

loc_00018655: ;
    MEMF(edi + 0x1C) = xmm0.f[0]; /* movss */

loc_0001865A: ;
    xmm0 = XMM_SCALAR(MEMF(edi + 0x1C)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x759EA0); /* mulss */
    eax = (uint32_t)recomp_cvt_si32((double)xmm0.f[0], g_mxcsr, 1); /* cvttss2si */
    PUSH32(esp, eax);
    PUSH32(esp, 0x91);
    PUSH32(esp, 0x00018676u); RECOMP_ABI_CALL(0x00401EE0u, sub_00401EE0); /* call 0x00401EE0 */

loc_00018676: ;
    SET_LO8(eax, MEM8(0x847261));
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00018711; /* je: equal / zero */

loc_00018686: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm1 = XMM_SCALAR(MEMF(0x648D14)); /* movss */

loc_00018691: ;
    MEMF(edi + 0x20) = xmm0.f[0]; /* movss */

loc_00018696: ;
    SET_LO8(eax, MEM8(0x847263));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0001874B; /* je: equal / zero */

loc_000186A3: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */

loc_000186A6: ;
    MEMF(edi + 0x28) = xmm0.f[0]; /* movss */

loc_000186AB: ;
    xmm0 = XMM_SCALAR(MEMF(0x759EA0)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(edi + 0x28); /* mulss */
    ecx = (uint32_t)recomp_cvt_si32((double)xmm0.f[0], g_mxcsr, 1); /* cvttss2si */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x93);
    PUSH32(esp, 0x000186C7u); RECOMP_ABI_CALL(0x00401EE0u, sub_00401EE0); /* call 0x00401EE0 */

loc_000186C7: ;
    SET_LO8(eax, MEM8(0x847263));
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00018775; /* je: equal / zero */

loc_000186D7: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    goto loc_00018796;

loc_000186DF: ;
    xmm0 = XMM_SCALAR(MEMF(edi + 0x2C)); /* movss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000186F6; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_000186EC: ;
    MEMF(edi + 0x1C) = xmm1.f[0]; /* movss */
    goto loc_0001865A;

loc_000186F6: ;
    xmm1 = XMM_SCALAR(MEMF(0x648D14)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00018655; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_00018707: ;
    MEMF(edi + 0x1C) = xmm1.f[0]; /* movss */
    goto loc_0001865A;

loc_00018711: ;
    xmm0 = XMM_SCALAR(MEMF(edi + 0x30)); /* movss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00018730; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_0001871E: ;
    MEMF(edi + 0x20) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x648D14)); /* movss */
    goto loc_00018696;

loc_00018730: ;
    xmm1 = XMM_SCALAR(MEMF(0x648D14)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00018691; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_00018741: ;
    MEMF(edi + 0x20) = xmm1.f[0]; /* movss */
    goto loc_00018696;

loc_0001874B: ;
    xmm0 = XMM_SCALAR(MEMF(edi + 0x38)); /* movss */
    xmm2 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm2.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00018762; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs xmm0.f[0]) */

loc_00018758: ;
    MEMF(edi + 0x28) = xmm2.f[0]; /* movss */
    goto loc_000186AB;

loc_00018762: ;
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000186A6; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_0001876B: ;
    MEMF(edi + 0x28) = xmm1.f[0]; /* movss */
    goto loc_000186AB;

loc_00018775: ;
    xmm0 = XMM_SCALAR(MEMF(edi + 0x34)); /* movss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00018789; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_00018782: ;
    MEMF(edi + 0x24) = xmm1.f[0]; /* movss */
    goto loc_0001879B;

loc_00018789: ;
    xmm1 = XMM_SCALAR(MEMF(0x648D14)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_00018782; /* ja: above (unsigned >) (xmm0.f[0] vs xmm1.f[0]) */

loc_00018796: ;
    MEMF(edi + 0x24) = xmm0.f[0]; /* movss */

loc_0001879B: ;
    xmm0 = XMM_SCALAR(MEMF(edi + 0x24)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x759EA0); /* mulss */
    edx = (uint32_t)recomp_cvt_si32((double)xmm0.f[0], g_mxcsr, 1); /* cvttss2si */
    PUSH32(esp, edx);
    PUSH32(esp, 0x92);
    PUSH32(esp, 0x000187B7u); RECOMP_ABI_CALL(0x00401EE0u, sub_00401EE0); /* call 0x00401EE0 */

loc_000187B7: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000187C0
 * Original: 0x000187C0 - 0x0001886E (174 bytes, 47 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000187C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000187C0: ;
    eax = MEM32(esi + 0x44);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    MEM8(eax + 0x1C) = 0;
    ebp = MEM32(esi + 0x40);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 4);
    SET_LO8(ebx, 1);
    PUSH32(esp, 0x000187D7u); RECOMP_ABI_CALL(0x0002E7A0u, sub_0002E7A0); /* call 0x0002E7A0 */

loc_000187D7: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x000187DDu); RECOMP_ABI_CALL(0x00024C00u, sub_00024C00); /* call 0x00024C00 */

loc_000187DD: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x000187E3u); RECOMP_ABI_CALL(0x00024C90u, sub_00024C90); /* call 0x00024C90 */

loc_000187E3: ;
    edi = MEM32(esi + 0x3C);
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000187EEu); RECOMP_ABI_CALL(0x0001E570u, sub_0001E570); /* call 0x0001E570 */

loc_000187EE: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x000187F4u); RECOMP_ABI_CALL(0x0001E5D0u, sub_0001E5D0); /* call 0x0001E5D0 */

loc_000187F4: ;
    eax = edi;
    PUSH32(esp, 0x000187FBu); RECOMP_ABI_CALL(0x0001E710u, sub_0001E710); /* call 0x0001E710 */

loc_000187FB: ;
    ecx = (uint32_t)recomp_cvt_si32((double)MEMF(0x759EA0), g_mxcsr, 1); /* cvttss2si */
    xmm0 = XMM_SCALAR(MEMF(0x648D14)); /* movss */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x91);
    MEMF(esi + 0x1C) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x0001881Bu); RECOMP_ABI_CALL(0x00401EE0u, sub_00401EE0); /* call 0x00401EE0 */

loc_0001881B: ;
    edx = (uint32_t)recomp_cvt_si32((double)MEMF(0x759EA0), g_mxcsr, 1); /* cvttss2si */
    xmm0 = XMM_SCALAR(MEMF(0x648D14)); /* movss */
    PUSH32(esp, edx);
    PUSH32(esp, 0x93);
    MEMF(esi + 0x20) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x28) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00018840u); RECOMP_ABI_CALL(0x00401EE0u, sub_00401EE0); /* call 0x00401EE0 */

loc_00018840: ;
    eax = (uint32_t)recomp_cvt_si32((double)MEMF(0x759EA0), g_mxcsr, 1); /* cvttss2si */
    xmm0 = XMM_SCALAR(MEMF(0x648D14)); /* movss */
    PUSH32(esp, eax);
    PUSH32(esp, 0x92);
    MEMF(esi + 0x24) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00018860u); RECOMP_ABI_CALL(0x00401EE0u, sub_00401EE0); /* call 0x00401EE0 */

loc_00018860: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = esi;
    PUSH32(esp, 0x0001886Au); RECOMP_ABI_CALL(0x00018900u, sub_00018900); /* call 0x00018900 */

loc_0001886A: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00018870
 * Original: 0x00018870 - 0x000188FB (139 bytes, 58 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00018870(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00018870: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    eax = MEM32(ebp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(ebx, 1);
    if (CMP_EQ(_fa, _fb)) goto loc_000188ED; /* je: equal / zero */

loc_0001887F: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00018883: ;
    eax = MEM32(ebp + 4);
    ecx = MEM32(esi + eax);
    SET_LO8(eax, MEM8(ecx + 0x22));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000188E0; /* jne: not equal / not zero */

loc_00018890: ;
    SET_LO8(eax, MEM8(ecx + 0x15));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0001889E; /* jne: not equal / not zero */

loc_00018897: ;
    SET_LO8(eax, MEM8(ecx + 0x22));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000188E0; /* je: equal / zero */

loc_0001889E: ;
    SET_LO8(eax, MEM8(ecx + 0x14));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000188E0; /* jne: not equal / not zero */

loc_000188A5: ;
    SET_LO8(eax, MEM8(ecx + 0x15));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000188D9; /* je: equal / zero */

loc_000188AC: ;
    eax = MEM32(ecx + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000188D9; /* jne: not equal / not zero */

loc_000188B3: ;
    SET_LO8(eax, MEM8(ecx + 0x14));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000188D9; /* jne: not equal / not zero */

loc_000188BA: ;
    PUSH32(esp, 1);
    edi = ecx;
    PUSH32(esp, 0x000188C3u); RECOMP_ABI_CALL(0x00035860u, sub_00035860); /* call 0x00035860 */

loc_000188C3: ;
    ecx = MEM32(ebp + 4);
    eax = MEM32(esi + ecx);
    SET_LO8(ecx, MEM8(eax + 0x15));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000188DE; /* jne: not equal / not zero */

loc_000188D0: ;
    SET_LO8(ecx, MEM8(eax + 0x22));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000188E0; /* je: equal / zero */

loc_000188D7: ;
    goto loc_000188DE;

loc_000188D9: ;
    PUSH32(esp, 0x000188DEu); RECOMP_ABI_CALL(0x00035920u, sub_00035920); /* call 0x00035920 */

loc_000188DE: ;
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */

loc_000188E0: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x130) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x130 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00018883; /* jl: less (signed <) */

loc_000188EB: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_000188ED: ;
    ecx = ebp;
    PUSH32(esp, 0x000188F4u); RECOMP_ABI_CALL(0x00017CF0u, sub_00017CF0); /* call 0x00017CF0 */

loc_000188F4: ;
    POP32(esp, ebp);
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00018900
 * Original: 0x00018900 - 0x00018947 (71 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00018900(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00018900: ;
    eax = MEM32(edi + 0x64);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00018946; /* je: equal / zero */

loc_00018907: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00018910;

    /* nop */

loc_00018910: ;
    eax = MEM32(edi + 0x64);
    ebx = MEM32(esi + eax);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0001893C; /* je: equal / zero */

loc_0001891A: ;
    eax = MEM32(edi + 0x44);
    PUSH32(esp, 0x00018922u); RECOMP_ABI_CALL(0x00035070u, sub_00035070); /* call 0x00035070 */

loc_00018922: ;
    ecx = MEM32(edi + 0x64);
    ecx = MEM32(esi + ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00018932; /* je: equal / zero */

loc_0001892C: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00018932u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00018930u); } /* indirect call */
    }

loc_00018932: ;
    eax = MEM32(edi + 0x64);
    MEM32(esi + eax) = 0;

loc_0001893C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x28) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x28 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00018910; /* jl: less (signed <) */

loc_00018944: ;
    POP32(esp, esi);
    POP32(esp, ebx);

loc_00018946: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00018950
 * Original: 0x00018950 - 0x00018A53 (259 bytes, 80 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00018950(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00018950: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    ebx = eax;
    if (CMP_L(_fas, _fbs)) goto loc_00018A4E; /* jl: less (signed <) */

loc_00018960: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0xA (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00018A4E; /* jge: greater or equal (signed >=) */

loc_00018969: ;
    eax = MEM32(ebx + 0x64);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00018A4E; /* je: equal / zero */

loc_00018974: ;
    _fa = (uint32_t)(MEM32(eax + ebp * 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + ebp * 4), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00018A27; /* jne: not equal / not zero */

loc_0001897E: ;
    eax = MEM32(0x84A19C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0001898C; /* jne: not equal / not zero */

loc_00018987: ;
    PUSH32(esp, 0x0001898Cu); RECOMP_ABI_CALL(0x002AED70u, sub_002AED70); /* call 0x002AED70 */

loc_0001898C: ;
    edx = MEM32(0x7FA494);
    ecx = MEM32(0x7FA4B4);
    PUSH32(esp, esi);
    esi = MEM32(0x84A190);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    PUSH32(esp, edi);
    MEM32(0x7FA494) = edx;
    MEM32(0x7FA4B4) = ecx;
    edi = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_000189D6; /* je: equal / zero */

loc_000189B4: ;
    _fa = (uint32_t)(MEM32(esi + 0x80)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x80), 0x20 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000189D6; /* jb: below (unsigned <) */

loc_000189BD: ;
    ecx = 0x10;
    PUSH32(esp, 0x000189C7u); RECOMP_ABI_CALL(0x003E62A0u, sub_003E62A0); /* call 0x003E62A0 */

loc_000189C7: ;
    PUSH32(esp, 0x20);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000189CFu); RECOMP_ABI_CALL(0x003E6BD0u, sub_003E6BD0); /* call 0x003E6BD0 */

loc_000189CF: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000189F7; /* jne: not equal / not zero */

loc_000189D6: ;
    esi = MEM32(0x84A184);
    ecx = 0x10;
    edi = esi;
    PUSH32(esp, 0x000189E8u); RECOMP_ABI_CALL(0x003E62A0u, sub_003E62A0); /* call 0x003E62A0 */

loc_000189E8: ;
    PUSH32(esp, 0x20);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000189F0u); RECOMP_ABI_CALL(0x003E6BD0u, sub_003E6BD0); /* call 0x003E6BD0 */

loc_000189F0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00018A00; /* je: equal / zero */

loc_000189F7: ;
    esi = eax;
    PUSH32(esp, 0x000189FEu); RECOMP_ABI_CALL(0x00012A20u, sub_00012A20); /* call 0x00012A20 */

loc_000189FE: ;
    goto loc_00018A02;

loc_00018A00: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00018A02: ;
    ecx = MEM32(ebx + 0x64);
    MEM32(ecx + ebp * 4) = eax;
    edx = MEM32(ebx + 0x64);
    _fa = (uint32_t)(MEM32(edx + ebp * 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx + ebp * 4), 0 (32-bit) */
    POP32(esp, edi);
    POP32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_00018A27; /* jne: not equal / not zero */

loc_00018A13: ;
    PUSH32(esp, 0x587BE4);
    PUSH32(esp, 0);
    PUSH32(esp, 0x587BE4);
    PUSH32(esp, 0x00018A24u); RECOMP_ABI_CALL(0x001F0620u, sub_001F0620); /* call 0x001F0620 */

loc_00018A24: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00018A27: ;
    eax = MEM32(ebx + 0x64);
    eax = MEM32(eax + ebp * 4);
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 4), 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00018A3A; /* jne: not equal / not zero */

loc_00018A33: ;
    ecx = MEM32(esp + 0x10);
    MEM32(eax + 4) = ecx;

loc_00018A3A: ;
    eax = MEM32(ebx + 0x64);
    edx = MEM32(esp + 0x14);
    ebx = MEM32(esp + 0x18);
    eax = MEM32(eax + ebp * 4);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00018A4Eu); RECOMP_ABI_CALL(0x00015E10u, sub_00015E10); /* call 0x00015E10 */

loc_00018A4E: ;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00018A60
 * Original: 0x00018A60 - 0x00018B29 (201 bytes, 71 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00018A60(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00018A60: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xFF (32-bit) */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 8);
    PUSH32(esp, edi);
    edi = eax;
    if (CMP_NE(_fa, _fb)) goto loc_00018A78; /* jne: not equal / not zero */

loc_00018A70: ;
    eax = MEM32(edi + 0x74);
    MEM32(edi + 0x68) = eax;
    goto loc_00018A8E;

loc_00018A78: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFE) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xFE (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00018A93; /* je: equal / zero */

loc_00018A80: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00018A93; /* jl: less (signed <) */

loc_00018A84: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1A) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x1A (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00018A93; /* jge: greater or equal (signed >=) */

loc_00018A89: ;
    MEM32(edi + 0x68) = esi;
    eax = esi;

loc_00018A8E: ;
    PUSH32(esp, 0x00018A93u); RECOMP_ABI_CALL(0x00025C80u, sub_00025C80); /* call 0x00025C80 */

loc_00018A93: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0xFF (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00018AB1; /* jne: not equal / not zero */

loc_00018A9B: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    eax = MEM32(edi + 0x78);
    MEM32(edi + 0x6C) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_00018AC6; /* jne: not equal / not zero */

loc_00018AA5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00018AC6; /* jl: less (signed <) */

loc_00018AA9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x7F (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00018AC6; /* jg: greater (signed >) */

loc_00018AAE: ;
    PUSH32(esp, eax);
    goto loc_00018ABE;

loc_00018AB1: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00018AC6; /* jl: less (signed <) */

loc_00018AB5: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x7F (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00018AC6; /* jg: greater (signed >) */

loc_00018ABA: ;
    MEM32(edi + 0x6C) = ebx;
    PUSH32(esp, ebx);

loc_00018ABE: ;
    PUSH32(esp, 0x00018AC3u); RECOMP_ABI_CALL(0x00402010u, sub_00402010); /* call 0x00402010 */

loc_00018AC3: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00018AC6: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0xFF (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00018AD6; /* jne: not equal / not zero */

loc_00018ACE: ;
    eax = MEM32(edi + 0x7C);
    MEM32(edi + 0x70) = eax;
    goto loc_00018AE2;

loc_00018AD6: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00018AE2; /* jl: less (signed <) */

loc_00018ADA: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 3 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00018AE2; /* jge: greater or equal (signed >=) */

loc_00018ADF: ;
    MEM32(edi + 0x70) = ebp;

loc_00018AE2: ;
    edi = MEM32(edi + 0x70);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00018AFC; /* je: equal / zero */

loc_00018AE9: ;
    if (CMP_LE(_fas, _fbs)) goto loc_00018B24; /* jle: less or equal (signed <=) */

loc_00018AEB: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 2 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00018B24; /* jg: greater (signed >) */

loc_00018AF0: ;
    PUSH32(esp, 0x40200000);
    PUSH32(esp, 0x3F800000);
    goto loc_00018B03;

loc_00018AFC: ;
    PUSH32(esp, 0x40200000);
    PUSH32(esp, 0);

loc_00018B03: ;
    edx = MEM32(0x847010);
    eax = MEM32(edx + 0xC);
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    PUSH32(esp, 0x00018B16u); RECOMP_ABI_CALL(0x000128C0u, sub_000128C0); /* call 0x000128C0 */

loc_00018B16: ;
    eax = MEM32(edx + 0xC);
    SET_LO8(ecx, MEM8(eax + 8));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00018B24; /* jne: not equal / not zero */

loc_00018B20: ;
    MEM8(eax + 8) = 1;

loc_00018B24: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00018B30
 * Original: 0x00018B30 - 0x00018B96 (102 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00018B30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00018B30: ;
    SET_LO8(eax, MEM8(0x84725D));
    _fb = (uint32_t)(0x400) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x400;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00018B8F; /* je: equal / zero */

loc_00018B3F: ;
    ecx = MEM32(esp + 0x404);
    eax = esp + 0x408;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    edx = esp + 8;
    PUSH32(esp, 0x400);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00018B5Eu); RECOMP_ABI_CALL(0x0046EA04u, sub_0046EA04); /* call 0x0046EA04 */

loc_00018B5E: ;
    eax = MEM32(esi + 0x80);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00018B86; /* je: equal / zero */

loc_00018B6B: ;
    SET_LO8(ecx, MEM8(esi + 0x84));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00018B86; /* jne: not equal / not zero */

loc_00018B75: ;
    PUSH32(esp, eax);
    edx = esp + 4;
    PUSH32(esp, 0x00018B7Fu); RECOMP_ABI_CALL(0x00018D90u, sub_00018D90); /* call 0x00018D90 */

loc_00018B7F: ;
    _fb = (uint32_t)(0x400) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x400;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00018B86: ;
    eax = esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00018B8Fu); RECOMP_ABI_CALL(0x0042C811u, sub_0042C811); /* call 0x0042C811 */

loc_00018B8F: ;
    _fb = (uint32_t)(0x400) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x400;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00018BA0
 * Original: 0x00018BA0 - 0x00018BDF (63 bytes, 26 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00018BA0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00018BA0: ;
    PUSH32(esp, edi);
    edi = eax;
    eax = edi + -1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xF (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_A(_fa, _fb)) goto loc_00018BDB; /* ja: above (unsigned >) */

loc_00018BAB: ;
    eax = ZX8(MEM8(eax + 0x18BEC));
    { uint32_t _jt = MEM32(eax * 4 + 0x18BE0); /* switch: 3 entries, 3 targets */
    if (_jt == 0x00018BB9u) goto loc_00018BB9;
    if (_jt == 0x00018BC8u) goto loc_00018BC8;
    if (_jt == 0x00018BDBu) goto loc_00018BDB;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00018BB9: ;
    eax = MEM32(ecx + 0x3C);
    PUSH32(esp, 0x00018BC1u); RECOMP_ABI_CALL(0x0001E420u, sub_0001E420); /* call 0x0001E420 */

loc_00018BC1: ;
    _cf = (int)((LO8(eax)) != 0);
    SET_LO8(eax, (uint32_t)(0u - (uint32_t)(LO8(eax))));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* neg result */
    POP32(esp, edi);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 4; return; /* ret */

loc_00018BC8: ;
    ecx = MEM32(ecx + 0x40);
    eax = MEM32(ecx + 4);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00018BD4u); RECOMP_ABI_CALL(0x0002F310u, sub_0002F310); /* call 0x0002F310 */

loc_00018BD4: ;
    _cf = (int)((LO8(eax)) != 0);
    SET_LO8(eax, (uint32_t)(0u - (uint32_t)(LO8(eax))));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* neg result */
    POP32(esp, edi);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 4; return; /* ret */

loc_00018BDB: ;
    SET_LO8(eax, 1);
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_00018C00
 * Original: 0x00018C00 - 0x00018C42 (66 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00018C00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00018C00: ;
    ecx = MEM32(eax + 4);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, ebx);

loc_00018C06: ;
    eax = MEM32(ecx);
    SET_LO8(ebx, MEM8(eax + 0x15));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00018C22; /* jne: not equal / not zero */

loc_00018C0F: ;
    SET_LO8(ebx, MEM8(eax + 0x22));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00018C22; /* jne: not equal / not zero */

loc_00018C16: ;
    _fa = (uint32_t)(MEM32(eax + 0x24)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x24), esi (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00018C22; /* jg: greater (signed >) */

loc_00018C1B: ;
    SET_LO8(ebx, MEM8(eax + 0x20));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00018C3E; /* jne: not equal / not zero */

loc_00018C22: ;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x4C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x4C (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00018C06; /* jl: less (signed <) */

loc_00018C2B: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00018C3A; /* jne: not equal / not zero */

loc_00018C30: ;
    MEM32(0x847040) = 5;

loc_00018C3A: ;
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00018C3E: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00018C50
 * Original: 0x00018C50 - 0x00018C7E (46 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00018C50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00018C50: ;
    ecx = MEM32(eax + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00018C5A; /* jne: not equal / not zero */

loc_00018C57: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

loc_00018C5A: ;
    SET_LO8(ecx, MEM8(eax + 0x14));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00018C7B; /* je: equal / zero */

loc_00018C61: ;
    SET_LO8(ecx, MEM8(eax + 0x15));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00018C7B; /* je: equal / zero */

loc_00018C68: ;
    ecx = MEM32(eax + 0x10);
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x18);
    PUSH32(esp, edi);
    edi = MEM32(ecx + 0x1C);
    PUSH32(esp, 0x00018C78u); RECOMP_ABI_CALL(0x00017FF0u, sub_00017FF0); /* call 0x00017FF0 */

loc_00018C78: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00018C7B: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00018C80
 * Original: 0x00018C80 - 0x00018CC4 (68 bytes, 21 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00018C80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00018C80: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi) = 0x5AC7A0;
    if (CMP_EQ(_fa, _fb)) goto loc_00018CA0; /* je: equal / zero */

loc_00018C90: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00018C96u); RECOMP_ABI_CALL(0x0046E4B6u, sub_0046E4B6); /* call 0x0046E4B6 */

loc_00018C96: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x14) = 0;

loc_00018CA0: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    MEM32(esi) = 0x5F0FD4;
    if (TEST_Z(_fa, _fb)) goto loc_00018CBE; /* je: equal / zero */

loc_00018CAD: ;
    eax = esp + 8;
    PUSH32(esp, eax);
    MEM32(esp + 0xC) = esi;
    PUSH32(esp, 0x00018CBBu); RECOMP_ABI_CALL(0x002AF1C0u, sub_002AF1C0); /* call 0x002AF1C0 */

loc_00018CBB: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00018CBE: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00018CD0
 * Original: 0x00018CD0 - 0x00018D15 (69 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00018CD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00018CD0: ;
    PUSH32(esp, 0x400);
    MEM32(esi + 4) = 0;
    MEM32(esi) = 0x5AC7A0;
    MEM32(esi + 0x14) = 0;
    MEM32(esi + 0x18) = 0x400;
    PUSH32(esp, 0x00018CF5u); RECOMP_ABI_CALL(0x0046DAB2u, sub_0046DAB2); /* call 0x0046DAB2 */

loc_00018CF5: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi + 0x14) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_00018D12; /* jne: not equal / not zero */

loc_00018CFF: ;
    PUSH32(esp, 0x587BE4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x587BE4);
    PUSH32(esp, 0x00018D0Fu); RECOMP_ABI_CALL(0x001F0620u, sub_001F0620); /* call 0x001F0620 */

loc_00018D0F: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00018D12: ;
    eax = esi;
    esp += 4; return; /* ret */

}

/**
 * sub_00018D20
 * Original: 0x00018D20 - 0x00018D87 (103 bytes, 42 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00018D20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00018D20: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 8);
    eax = MEM32(edi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00018D85; /* je: equal / zero */

loc_00018D2C: ;
    ecx = MEM32(esp + 0xC);
    edx = MEM32(edi + 0x18);
    PUSH32(esp, ebx);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    eax = MEM32(edi + 0x14);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00018D44u); RECOMP_ABI_CALL(0x0046EA04u, sub_0046EA04); /* call 0x0046EA04 */

loc_00018D44: ;
    ebx = eax;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00018D5A; /* jge: greater or equal (signed >=) */

loc_00018D4D: ;
    ebx = MEM32(edi + 0x18);
    ecx = MEM32(edi + 0x14);
    MEM8(ecx + ebx + -1) = 0;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */

loc_00018D5A: ;
    if (CMP_LE(_fas, _fbs)) goto loc_00018D6E; /* jle: less or equal (signed <=) */

loc_00018D5C: ;
    edx = MEM32(edi + 0x14);
    PUSH32(esp, esi);
    esi = MEM32(edi + 4);
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00018D6Au); RECOMP_ABI_CALL(0x001F18F0u, sub_001F18F0); /* call 0x001F18F0 */

loc_00018D6A: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);

loc_00018D6E: ;
    eax = MEM32(edi + 0x14);
    _fa = (uint32_t)(MEM8(eax + ebx + -1)) & 0xFFu; _fb = (uint32_t)(0xA) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + ebx + -1), 0xA (8-bit) */
    POP32(esp, ebx);
    if (CMP_NE(_fa, _fb)) goto loc_00018D85; /* jne: not equal / not zero */

loc_00018D79: ;
    ecx = MEM32(edi + 4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00018D82u); RECOMP_ABI_CALL(0x001F1A10u, sub_001F1A10); /* call 0x001F1A10 */

loc_00018D82: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00018D85: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_00018D90
 * Original: 0x00018D90 - 0x00018DE9 (89 bytes, 42 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00018D90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00018D90: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = MEM32(ebx + 4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00018DE4; /* je: equal / zero */

loc_00018D9D: ;
    eax = edx;
    PUSH32(esp, edi);
    edi = eax + 1;

loc_00018DA3: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00018DA3; /* jne: not equal / not zero */

loc_00018DAA: ;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(MEM8(eax + edx + -1)) & 0xFFu; _fb = (uint32_t)(0xA) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + edx + -1), 0xA (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00018DC8; /* je: equal / zero */

loc_00018DB3: ;
    eax = MEM32(ebx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x5AC80C);
    PUSH32(esp, ebx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x00018DBFu); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x00018DBCu); } /* indirect call */
    }

loc_00018DBF: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_00018DC8: ;
    eax = edx;
    edi = eax + 1;
    /* nop */

loc_00018DD0: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00018DD0; /* jne: not equal / not zero */

loc_00018DD7: ;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00018DE0u); RECOMP_ABI_CALL(0x001F18F0u, sub_001F18F0); /* call 0x001F18F0 */

loc_00018DE0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);

loc_00018DE4: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00018DF0
 * Original: 0x00018DF0 - 0x00018E17 (39 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00018DF0(void)
{

loc_00018DF0: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(esp + 0x10);
    edx = MEM32(esp + 0x14);
    MEM32(0x847018) = eax;
    eax = MEM32(esp + 0x18);
    MEM32(0x84701C) = ecx;
    MEM32(0x762D60) = edx;
    MEM32(0x847020) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00018E20
 * Original: 0x00018E20 - 0x00018E3D (29 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00018E20(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00018E20: ;
    eax = MEM32(0x762D60);
    ecx = MEM32(0x847018);
    edx = MEM32(esp + 4);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00018E39u); RECOMP_ABI_CALL(0x002AF0E0u, sub_002AF0E0); /* call 0x002AF0E0 */

loc_00018E39: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00018E40
 * Original: 0x00018E40 - 0x00018E5B (27 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00018E40(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00018E40: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = MEM32(0x847024);
    PUSH32(esp, eax);
    PUSH32(esp, 0x5AC808);
    PUSH32(esp, 0x00018E56u); RECOMP_ABI_CALL(0x00018B30u, sub_00018B30); /* call 0x00018B30 */

loc_00018E56: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00018E60
 * Original: 0x00018E60 - 0x00018F48 (232 bytes, 79 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00018E60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00018E60: ;
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(esi + 4) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_00018ECE; /* je: equal / zero */

loc_00018E6A: ;
    eax = eax + eax * 4;
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x00018E76u); RECOMP_ABI_CALL(0x0046DAB2u, sub_0046DAB2); /* call 0x0046DAB2 */

loc_00018E76: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(esi) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_00018E94; /* jne: not equal / not zero */

loc_00018E7F: ;
    PUSH32(esp, 0x587BE4);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x587BE4);
    PUSH32(esp, 0x00018E8Fu); RECOMP_ABI_CALL(0x001F0620u, sub_001F0620); /* call 0x001F0620 */

loc_00018E8F: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00018ED0;

loc_00018E94: ;
    eax = MEM32(esi + 4);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00018ED0; /* jle: less or equal (signed <=) */

loc_00018E9D: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_00018EA0: ;
    edx = MEM32(esi);
    MEM32(eax + edx) = 0xFFFFFFFFu;
    edx = MEM32(esi);
    MEM32(eax + edx + 4) = ebx;
    edx = MEM32(esi);
    MEM32(eax + edx + 8) = ebx;
    edx = MEM32(esi);
    MEM32(eax + edx + 0xC) = ebx;
    edx = MEM32(esi);
    MEM32(eax + edx + 0x10) = ebx;
    edx = MEM32(esi + 4);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x14;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00018EA0; /* jl: less (signed <) */

loc_00018ECC: ;
    goto loc_00018ED0;

loc_00018ECE: ;
    MEM32(esi) = ebx;

loc_00018ED0: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    MEM32(esi + 0x1C) = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_00018F24; /* je: equal / zero */

loc_00018ED7: ;
    eax = edi * 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00018EE4u); RECOMP_ABI_CALL(0x0046DAB2u, sub_0046DAB2); /* call 0x0046DAB2 */

loc_00018EE4: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(esi + 0x18) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_00018F03; /* jne: not equal / not zero */

loc_00018EEE: ;
    PUSH32(esp, 0x587BE4);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x587BE4);
    PUSH32(esp, 0x00018EFEu); RECOMP_ABI_CALL(0x001F0620u, sub_001F0620); /* call 0x001F0620 */

loc_00018EFE: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00018F27;

loc_00018F03: ;
    ecx = MEM32(esi + 0x1C);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00018F27; /* jle: less or equal (signed <=) */

loc_00018F0C: ;
    /* nop */

loc_00018F10: ;
    ecx = MEM32(esi + 0x18);
    MEM32(ecx + eax * 4) = 0xFFFFFFFFu;
    ecx = MEM32(esi + 0x1C);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00018F10; /* jl: less (signed <) */

loc_00018F22: ;
    goto loc_00018F27;

loc_00018F24: ;
    MEM32(esi + 0x18) = ebx;

loc_00018F27: ;
    MEM32(esi + 8) = ebx;
    MEM8(esi + 0x21) = LO8(ebx);
    MEM32(esi + 0xC) = 0x19;
    MEM32(esi + 0x10) = 0xFF;
    MEM32(esi + 0x14) = 2;
    MEM8(esi + 0x20) = 1;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00018F50
 * Original: 0x00018F50 - 0x00018F7D (45 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00018F50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00018F50: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00018F65; /* je: equal / zero */

loc_00018F56: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00018F5Cu); RECOMP_ABI_CALL(0x0046E4B6u, sub_0046E4B6); /* call 0x0046E4B6 */

loc_00018F5C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi) = 0;

loc_00018F65: ;
    eax = MEM32(esi + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00018F7C; /* je: equal / zero */

loc_00018F6C: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00018F72u); RECOMP_ABI_CALL(0x0046E4B6u, sub_0046E4B6); /* call 0x0046E4B6 */

loc_00018F72: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x18) = 0;

loc_00018F7C: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00018F80
 * Original: 0x00018F80 - 0x00018FDD (93 bytes, 35 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00018F80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00018F80: ;
    ecx = MEM32(edx + 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00018FDA; /* jle: less or equal (signed <=) */

loc_00018F89: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(edx);
    esi = edi;
    /* nop */

loc_00018F90: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00018FA2; /* je: equal / zero */

loc_00018F95: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x14;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00018F90; /* jl: less (signed <) */

loc_00018F9D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

loc_00018FA2: ;
    ecx = MEM32(esp + 0xC);
    eax = eax + eax * 4;
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(edi + eax) = ecx;
    ecx = ZX16(MEM16(esp + 0x10));
    esi = MEM32(edx);
    xmm0.f[0] = (float)(int32_t)ecx; /* cvtsi2ss */
    ecx = MEM32(0x847024);
    xmm0.f[0] = xmm0.f[0] * MEMF(ecx + 0x20); /* mulss */
    ecx = (uint32_t)recomp_cvt_si32((double)xmm0.f[0], g_mxcsr, 1); /* cvttss2si */
    MEM32(eax + esi + 4) = ecx;
    ecx = ZX16(MEM16(esp + 0x14));
    edx = MEM32(edx);
    POP32(esp, edi);
    MEM32(eax + edx + 8) = ecx;
    POP32(esp, esi);

loc_00018FDA: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00018FE0
 * Original: 0x00018FE0 - 0x0001900C (44 bytes, 20 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00018FE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00018FE0: ;
    edx = MEM32(ecx + 0x1C);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00019009; /* jle: less or equal (signed <=) */

loc_00018FE9: ;
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x18);
    ecx = esi;
    /* nop */

loc_00018FF0: ;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00019001; /* je: equal / zero */

loc_00018FF5: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00018FF0; /* jl: less (signed <) */

loc_00018FFD: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_00019001: ;
    ecx = MEM32(esp + 8);
    MEM32(esi + eax * 4) = ecx;
    POP32(esp, esi);

loc_00019009: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00019010
 * Original: 0x00019010 - 0x000190B4 (164 bytes, 44 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00019010(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00019010: ;
    _fb = (uint32_t)(0x200) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x200;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    SET_LO8(eax, MEM8(0x84B680));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    MEM8(esp) = 0;
    MEM8(esp + 0xFF) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_00019094; /* je: equal / zero */

loc_0001902B: ;
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0x84B680);
    eax = esp + 8;
    PUSH32(esp, eax);

loc_0001903A: ;
    PUSH32(esp, 0x0001903Fu); RECOMP_ABI_CALL(0x0046EEC0u, sub_0046EEC0); /* call 0x0046EEC0 */

loc_0001903F: ;
    SET_LO8(eax, MEM8(esp + 0xC));
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00019074; /* je: equal / zero */

loc_0001904A: ;
    ecx = 0x75DA48;
    PUSH32(esp, 0x00019054u); RECOMP_ABI_CALL(0x0046EA5Au, sub_0046EA5A); /* call 0x0046EA5A */

loc_00019054: ;
    PUSH32(esp, eax);
    edx = esp + 4;
    PUSH32(esp, edx);
    PUSH32(esp, 0x5AC800);
    eax = esp + 0x10C;
    PUSH32(esp, 0x100);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00019071u); RECOMP_ABI_CALL(0x0046E9ADu, sub_0046E9AD); /* call 0x0046E9AD */

loc_00019071: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00019074: ;
    ecx = MEM32(esp + 0x204);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x461);
    PUSH32(esp, 0x606A34);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0001908Du); RECOMP_ABI_CALL(0x002AF0E0u, sub_002AF0E0); /* call 0x002AF0E0 */

loc_0001908D: ;
    _fb = (uint32_t)(0x210) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x210;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00019094: ;
    SET_LO8(eax, MEM8(0x84B578));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000190AE; /* je: equal / zero */

loc_0001909D: ;
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0x84B578);
    ecx = esp + 8;
    PUSH32(esp, ecx);
    goto loc_0001903A;

loc_000190AE: ;
    MEM8(esp) = 0;
    goto loc_00019074;

}

/**
 * sub_000190C0
 * Original: 0x000190C0 - 0x000190E7 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000190C0(void)
{

loc_000190C0: ;
    PUSH32(esp, 0x000190C5u); RECOMP_ABI_CALL(0x00019770u, sub_00019770); /* call 0x00019770 */

loc_000190C5: ;
    MEM32(esi + 4) = eax;
    MEM8(eax + 0x2D) = 1;
    eax = MEM32(esi + 4);
    MEM32(eax + 4) = eax;
    eax = MEM32(esi + 4);
    MEM32(eax) = eax;
    eax = MEM32(esi + 4);
    MEM32(eax + 8) = eax;
    MEM32(esi + 8) = 0;
    eax = esi;
    esp += 4; return; /* ret */

}

/**
 * sub_000190F0
 * Original: 0x000190F0 - 0x00019191 (161 bytes, 56 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000190F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000190F0: ;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebx = ecx;
    edi = eax;
    eax = ebx;
    PUSH32(esp, 0x00019101u); RECOMP_ABI_CALL(0x00019660u, sub_00019660); /* call 0x00019660 */

loc_00019101: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(ebx + 4) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0001912C; /* je: equal / zero */

loc_00019108: ;
    _fa = (uint32_t)(MEM32(esi + 0x24)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x24), 0x10 (32-bit) */
    ecx = MEM32(esi + 0x20);
    if (CMP_B(_fa, _fb)) goto loc_00019116; /* jb: below (unsigned <) */

loc_00019111: ;
    eax = MEM32(esi + 0x10);
    goto loc_00019119;

loc_00019116: ;
    eax = esi + 0x10;

loc_00019119: ;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    eax = MEM32(edi + 0x14);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x00019128u); RECOMP_ABI_CALL(0x000199E0u, sub_000199E0); /* call 0x000199E0 */

loc_00019128: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00019187; /* jge: greater or equal (signed >=) */

loc_0001912C: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    ecx = esp + 0x20;
    MEM32(esp + 0x38) = 0xF;
    MEM32(esp + 0x34) = 0;
    MEM8(esp + 0x24) = 0;
    PUSH32(esp, 0x0001914Fu); RECOMP_ABI_CALL(0x000144B0u, sub_000144B0); /* call 0x000144B0 */

loc_0001914F: ;
    PUSH32(esp, esi);
    eax = esp + 0x18;
    esi = esp + 0x14;
    MEM32(esp + 0x34) = 0;
    PUSH32(esp, 0x00019165u); RECOMP_ABI_CALL(0x00019200u, sub_00019200); /* call 0x00019200 */

loc_00019165: ;
    esi = MEM32(eax);
    _fa = (uint32_t)(MEM32(esp + 0x2C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x2C), 0x10 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00019187; /* jb: below (unsigned <) */

loc_0001916E: ;
    eax = MEM32(esp + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0xC) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_00019187; /* je: equal / zero */

loc_0001917A: ;
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00019184u); RECOMP_ABI_CALL(0x002AF1C0u, sub_002AF1C0); /* call 0x002AF1C0 */

loc_00019184: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00019187: ;
    POP32(esp, edi);
    eax = esi + 0x28;
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000191A0
 * Original: 0x000191A0 - 0x000191FF (95 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000191A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000191A0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edi);
    edi = eax;
    eax = esi;
    PUSH32(esp, 0x000191ADu); RECOMP_ABI_CALL(0x00019660u, sub_00019660); /* call 0x00019660 */

loc_000191AD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 4) (32-bit) */
    MEM32(esp + 4) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_000191E9; /* je: equal / zero */

loc_000191B6: ;
    _fa = (uint32_t)(MEM32(eax + 0x24)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x24), 0x10 (32-bit) */
    ecx = MEM32(eax + 0x20);
    if (CMP_B(_fa, _fb)) goto loc_000191C4; /* jb: below (unsigned <) */

loc_000191BF: ;
    eax = MEM32(eax + 0x10);
    goto loc_000191C7;

loc_000191C4: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000191C7: ;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    eax = MEM32(edi + 0x14);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x000191D6u); RECOMP_ABI_CALL(0x000199E0u, sub_000199E0); /* call 0x000199E0 */

loc_000191D6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000191E9; /* jl: less (signed <) */

loc_000191DA: ;
    eax = esp + 4;
    edx = MEM32(eax);
    MEM32(ebx) = edx;
    eax = ebx;
    POP32(esp, edi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000191E9: ;
    ecx = MEM32(esi + 4);
    eax = esp + 8;
    MEM32(esp + 8) = ecx;
    edx = MEM32(eax);
    MEM32(ebx) = edx;
    eax = ebx;
    POP32(esp, edi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00019200
 * Original: 0x00019200 - 0x00019372 (370 bytes, 146 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00019200(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00019200: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edi);
    edi = eax;
    eax = MEM32(ebx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    eax = MEM32(ebx + 4);
    if (CMP_NE(_fa, _fb)) goto loc_00019224; /* jne: not equal / not zero */

loc_00019210: ;
    PUSH32(esp, edi);
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    ecx = ebx;
    PUSH32(esp, 0x0001921Bu); RECOMP_ABI_CALL(0x000194B0u, sub_000194B0); /* call 0x000194B0 */

loc_0001921B: ;
    eax = esi;
    POP32(esp, edi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_00019224: ;
    ecx = MEM32(eax);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x14);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00019258; /* jne: not equal / not zero */

loc_0001922F: ;
    eax = ebp + 0xC;
    ecx = edi;
    PUSH32(esp, 0x00019239u); RECOMP_ABI_CALL(0x00019380u, sub_00019380); /* call 0x00019380 */

loc_00019239: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00019359; /* je: equal / zero */

loc_00019241: ;
    PUSH32(esp, edi);
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    eax = ebp;
    ecx = ebx;
    PUSH32(esp, 0x0001924Eu); RECOMP_ABI_CALL(0x000194B0u, sub_000194B0); /* call 0x000194B0 */

loc_0001924E: ;
    POP32(esp, ebp);
    eax = esi;
    POP32(esp, edi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_00019258: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0001928C; /* jne: not equal / not zero */

loc_0001925C: ;
    ecx = MEM32(eax + 8);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = edi;
    PUSH32(esp, 0x00019269u); RECOMP_ABI_CALL(0x00019380u, sub_00019380); /* call 0x00019380 */

loc_00019269: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00019359; /* je: equal / zero */

loc_00019271: ;
    eax = MEM32(ebx + 4);
    eax = MEM32(eax + 8);
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    ecx = ebx;
    PUSH32(esp, 0x00019282u); RECOMP_ABI_CALL(0x000194B0u, sub_000194B0); /* call 0x000194B0 */

loc_00019282: ;
    POP32(esp, ebp);
    eax = esi;
    POP32(esp, edi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_0001928C: ;
    eax = ebp + 0xC;
    ecx = edi;
    PUSH32(esp, 0x00019296u); RECOMP_ABI_CALL(0x00019380u, sub_00019380); /* call 0x00019380 */

loc_00019296: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000192F0; /* je: equal / zero */

loc_0001929A: ;
    edx = esp + 0x14;
    MEM32(esp + 0x14) = ebp;
    PUSH32(esp, 0x000192A7u); RECOMP_ABI_CALL(0x000198D0u, sub_000198D0); /* call 0x000198D0 */

loc_000192A7: ;
    ecx = MEM32(esp + 0x14);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = edi;
    PUSH32(esp, 0x000192B5u); RECOMP_ABI_CALL(0x00019380u, sub_00019380); /* call 0x00019380 */

loc_000192B5: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000192F0; /* je: equal / zero */

loc_000192B9: ;
    eax = MEM32(esp + 0x14);
    ecx = MEM32(eax + 8);
    SET_LO8(edx, MEM8(ecx + 0x2D));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    ecx = ebx;
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_000192DC; /* je: equal / zero */

loc_000192CA: ;
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000192D2u); RECOMP_ABI_CALL(0x000194B0u, sub_000194B0); /* call 0x000194B0 */

loc_000192D2: ;
    POP32(esp, ebp);
    eax = esi;
    POP32(esp, edi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_000192DC: ;
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    eax = ebp;
    PUSH32(esp, 0x000192E6u); RECOMP_ABI_CALL(0x000194B0u, sub_000194B0); /* call 0x000194B0 */

loc_000192E6: ;
    POP32(esp, ebp);
    eax = esi;
    POP32(esp, edi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_000192F0: ;
    eax = edi;
    ecx = ebp + 0xC;
    PUSH32(esp, 0x000192FAu); RECOMP_ABI_CALL(0x00019380u, sub_00019380); /* call 0x00019380 */

loc_000192FA: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00019359; /* je: equal / zero */

loc_000192FE: ;
    edx = esp + 0x14;
    MEM32(esp + 0x14) = ebp;
    PUSH32(esp, 0x0001930Bu); RECOMP_ABI_CALL(0x00019930u, sub_00019930); /* call 0x00019930 */

loc_0001930B: ;
    eax = MEM32(esp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebx + 4) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00019326; /* je: equal / zero */

loc_00019314: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = edi;
    PUSH32(esp, 0x0001931Eu); RECOMP_ABI_CALL(0x00019380u, sub_00019380); /* call 0x00019380 */

loc_0001931E: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00019359; /* je: equal / zero */

loc_00019322: ;
    eax = MEM32(esp + 0x14);

loc_00019326: ;
    edx = MEM32(ebp + 8);
    SET_LO8(ecx, MEM8(edx + 0x2D));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    PUSH32(esp, edi);
    ecx = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_00019347; /* je: equal / zero */

loc_00019333: ;
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    eax = ebp;
    PUSH32(esp, 0x0001933Du); RECOMP_ABI_CALL(0x000194B0u, sub_000194B0); /* call 0x000194B0 */

loc_0001933D: ;
    POP32(esp, ebp);
    eax = esi;
    POP32(esp, edi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_00019347: ;
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0001934Fu); RECOMP_ABI_CALL(0x000194B0u, sub_000194B0); /* call 0x000194B0 */

loc_0001934F: ;
    POP32(esp, ebp);
    eax = esi;
    POP32(esp, edi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_00019359: ;
    eax = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00019364u); RECOMP_ABI_CALL(0x000193B0u, sub_000193B0); /* call 0x000193B0 */

loc_00019364: ;
    ecx = MEM32(eax);
    POP32(esp, ebp);
    MEM32(esi) = ecx;
    eax = esi;
    POP32(esp, edi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00019380
 * Original: 0x00019380 - 0x000193A8 (40 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00019380(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00019380: ;
    edx = MEM32(eax + 0x14);
    _fa = (uint32_t)(MEM32(eax + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x18), 0x10 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0001938E; /* jb: below (unsigned <) */

loc_00019389: ;
    eax = MEM32(eax + 4);
    goto loc_00019391;

loc_0001938E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00019391: ;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = MEM32(ecx + 0x14);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0001939Eu); RECOMP_ABI_CALL(0x000199E0u, sub_000199E0); /* call 0x000199E0 */

loc_0001939E: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(ecx, (CMP_L(_fas, _fbs)) ? 1 : 0); /* setl */
    SET_LO8(eax, LO8(ecx));
    esp += 4; return; /* ret */

}

/**
 * sub_000193B0
 * Original: 0x000193B0 - 0x000194AE (254 bytes, 105 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000193B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000193B0: ;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 8);
    eax = MEM32(ecx + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x14);
    PUSH32(esp, esi);
    esi = MEM32(eax + 4);
    SET_LO8(edx, MEM8(esi + 0x2D));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    ebx = eax;
    SET_LO8(eax, 1);
    MEM8(esp + 0xC) = LO8(eax);
    if (CMP_NE(_fa, _fb)) goto loc_00019412; /* jne: not equal / not zero */

loc_000193D1: ;
    _fa = (uint32_t)(MEM32(esi + 0x24)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x24), 0x10 (32-bit) */
    ecx = MEM32(esi + 0x20);
    ebx = esi;
    if (CMP_B(_fa, _fb)) goto loc_000193E1; /* jb: below (unsigned <) */

loc_000193DC: ;
    eax = MEM32(esi + 0x10);
    goto loc_000193E4;

loc_000193E1: ;
    eax = esi + 0x10;

loc_000193E4: ;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    eax = MEM32(edi + 0x14);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x000193F3u); RECOMP_ABI_CALL(0x000199E0u, sub_000199E0); /* call 0x000199E0 */

loc_000193F3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(eax, (CMP_L(_fas, _fbs)) ? 1 : 0); /* setl */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    MEM8(esp + 0xC) = LO8(eax);
    if (CMP_EQ(_fa, _fb)) goto loc_00019404; /* je: equal / zero */

loc_00019400: ;
    esi = MEM32(esi);
    goto loc_00019407;

loc_00019404: ;
    esi = MEM32(esi + 8);

loc_00019407: ;
    SET_LO8(ecx, MEM8(esi + 0x2D));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000193D1; /* je: equal / zero */

loc_0001940E: ;
    ecx = MEM32(esp + 0x14);

loc_00019412: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    esi = ebx;
    MEM32(esp + 0x18) = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_00019451; /* je: equal / zero */

loc_0001941C: ;
    edx = MEM32(ecx + 4);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(edx) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00019444; /* jne: not equal / not zero */

loc_00019423: ;
    PUSH32(esp, edi);
    PUSH32(esp, 1);
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    eax = ebx;
    PUSH32(esp, 0x00019432u); RECOMP_ABI_CALL(0x000194B0u, sub_000194B0); /* call 0x000194B0 */

loc_00019432: ;
    ecx = MEM32(eax);
    POP32(esp, esi);
    MEM32(ebp) = ecx;
    MEM8(ebp + 4) = 1;
    eax = ebp;
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

loc_00019444: ;
    edx = esp + 0x18;
    PUSH32(esp, 0x0001944Du); RECOMP_ABI_CALL(0x000198D0u, sub_000198D0); /* call 0x000198D0 */

loc_0001944D: ;
    esi = MEM32(esp + 0x18);

loc_00019451: ;
    _fa = (uint32_t)(MEM32(edi + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x18), 0x10 (32-bit) */
    edx = MEM32(edi + 0x14);
    ecx = esi + 0xC;
    if (CMP_B(_fa, _fb)) goto loc_00019462; /* jb: below (unsigned <) */

loc_0001945D: ;
    eax = MEM32(edi + 4);
    goto loc_00019465;

loc_00019462: ;
    eax = edi + 4;

loc_00019465: ;
    PUSH32(esp, edx);
    edx = MEM32(ecx + 0x14);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00019472u); RECOMP_ABI_CALL(0x000199E0u, sub_000199E0); /* call 0x000199E0 */

loc_00019472: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0001949E; /* jge: greater or equal (signed >=) */

loc_00019476: ;
    eax = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x20);
    eax = ebx;
    PUSH32(esp, 0x0001948Cu); RECOMP_ABI_CALL(0x000194B0u, sub_000194B0); /* call 0x000194B0 */

loc_0001948C: ;
    edx = MEM32(eax);
    POP32(esp, esi);
    MEM32(ebp) = edx;
    MEM8(ebp + 4) = 1;
    eax = ebp;
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

loc_0001949E: ;
    MEM32(ebp) = esi;
    POP32(esp, esi);
    MEM8(ebp + 4) = 0;
    eax = ebp;
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000194B0
 * Original: 0x000194B0 - 0x00019654 (420 bytes, 144 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000194B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000194B0: ;
    _fb = (uint32_t)(0x44) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x44;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    esi = eax;
    _fa = (uint32_t)(MEM32(edi + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFFE) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 8), 0x7FFFFFE (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0001952C; /* jb: below (unsigned <) */

loc_000194C2: ;
    PUSH32(esp, 0x13);
    edi = 0xF;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x5AC6C4);
    ecx = esp + 0x10;
    MEM32(esp + 0x28) = edi;
    MEM32(esp + 0x24) = esi;
    MEM8(esp + 0x14) = 0;
    PUSH32(esp, 0x000194E6u); RECOMP_ABI_CALL(0x000143C0u, sub_000143C0); /* call 0x000143C0 */

loc_000194E6: ;
    ecx = esp + 0x24;
    PUSH32(esp, 0x000194EFu); RECOMP_ABI_CALL(0x0046E531u, sub_0046E531); /* call 0x0046E531 */

loc_000194EF: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, esi);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    ecx = esp + 0x3C;
    MEM32(esp + 0x30) = 0x5AC69C;
    MEM32(esp + 0x54) = edi;
    MEM32(esp + 0x50) = esi;
    MEM8(esp + 0x40) = 0;
    PUSH32(esp, 0x00019515u); RECOMP_ABI_CALL(0x000144B0u, sub_000144B0); /* call 0x000144B0 */

loc_00019515: ;
    PUSH32(esp, 0x64B640);
    ecx = esp + 0x28;
    PUSH32(esp, ecx);
    MEM32(esp + 0x2C) = 0x5AC694;
    PUSH32(esp, 0x0001952Cu); RECOMP_ABI_CALL(0x004720B3u, sub_004720B3); /* call 0x004720B3 */

loc_0001952C: ;
    edx = MEM32(esp + 0x58);
    eax = MEM32(edi + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0001953Fu); RECOMP_ABI_CALL(0x00019830u, sub_00019830); /* call 0x00019830 */

loc_0001953F: ;
    ebx = MEM32(edi + 8);
    ecx = eax;
    eax = MEM32(edi + 4);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    MEM32(esp + 0x5C) = ecx;
    MEM32(edi + 8) = ebx;
    if (CMP_NE(_fa, _fb)) goto loc_00019563; /* jne: not equal / not zero */

loc_00019553: ;
    MEM32(eax + 4) = ecx;
    eax = MEM32(edi + 4);
    MEM32(eax) = ecx;
    edx = MEM32(edi + 4);
    MEM32(edx + 8) = ecx;
    goto loc_00019586;

loc_00019563: ;
    SET_LO8(eax, MEM8(esp + 0x58));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00019578; /* je: equal / zero */

loc_0001956B: ;
    MEM32(esi) = ecx;
    eax = MEM32(edi + 4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(eax) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00019586; /* jne: not equal / not zero */

loc_00019574: ;
    MEM32(eax) = ecx;
    goto loc_00019586;

loc_00019578: ;
    MEM32(esi + 8) = ecx;
    eax = MEM32(edi + 4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(eax + 8) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00019586; /* jne: not equal / not zero */

loc_00019583: ;
    MEM32(eax + 8) = ecx;

loc_00019586: ;
    edx = MEM32(ecx + 4);
    _fa = (uint32_t)(MEM8(edx + 0x2C)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edx + 0x2C), 0 (8-bit) */
    eax = ecx + 4;
    esi = ecx;
    SET_LO8(ebx, 1);
    if (CMP_NE(_fa, _fb)) goto loc_0001963C; /* jne: not equal / not zero */

loc_0001959A: ;
    PUSH32(esp, ebp);
    goto loc_000195A0;

    /* nop */

loc_000195A0: ;
    ecx = MEM32(eax);
    ebp = MEM32(ecx + 4);
    edx = MEM32(ebp);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000195F8; /* jne: not equal / not zero */

loc_000195AC: ;
    edx = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM8(edx + 0x2C)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edx + 0x2C), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000195CD; /* jne: not equal / not zero */

loc_000195B5: ;
    ecx = MEM32(eax);
    MEM8(ecx + 0x2C) = LO8(ebx);
    MEM8(edx + 0x2C) = LO8(ebx);
    edx = MEM32(eax);
    ecx = MEM32(edx + 4);
    MEM8(ecx + 0x2C) = 0;
    edx = MEM32(eax);
    esi = MEM32(edx + 4);
    goto loc_00019626;

loc_000195CD: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(ecx + 8) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000195DA; /* jne: not equal / not zero */

loc_000195D2: ;
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x000195DAu); RECOMP_ABI_CALL(0x000196B0u, sub_000196B0); /* call 0x000196B0 */

loc_000195DA: ;
    eax = MEM32(esi + 4);
    MEM8(eax + 0x2C) = LO8(ebx);
    ecx = MEM32(esi + 4);
    edx = MEM32(ecx + 4);
    MEM8(edx + 0x2C) = 0;
    eax = MEM32(esi + 4);
    ecx = MEM32(eax + 4);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000195F6u); RECOMP_ABI_CALL(0x00019710u, sub_00019710); /* call 0x00019710 */

loc_000195F6: ;
    goto loc_00019626;

loc_000195F8: ;
    _fa = (uint32_t)(MEM8(edx + 0x2C)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edx + 0x2C), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000195B5; /* je: equal / zero */

loc_000195FE: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(ecx) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0001960A; /* jne: not equal / not zero */

loc_00019602: ;
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x0001960Au); RECOMP_ABI_CALL(0x00019710u, sub_00019710); /* call 0x00019710 */

loc_0001960A: ;
    eax = MEM32(esi + 4);
    MEM8(eax + 0x2C) = LO8(ebx);
    ecx = MEM32(esi + 4);
    edx = MEM32(ecx + 4);
    MEM8(edx + 0x2C) = 0;
    eax = MEM32(esi + 4);
    ecx = MEM32(eax + 4);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00019626u); RECOMP_ABI_CALL(0x000196B0u, sub_000196B0); /* call 0x000196B0 */

loc_00019626: ;
    ecx = MEM32(esi + 4);
    SET_LO8(edx, MEM8(ecx + 0x2C));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    eax = esi + 4;
    if (CMP_EQ(_fa, _fb)) goto loc_000195A0; /* je: equal / zero */

loc_00019637: ;
    ecx = MEM32(esp + 0x60);
    POP32(esp, ebp);

loc_0001963C: ;
    edx = MEM32(edi + 4);
    eax = MEM32(edx + 4);
    MEM8(eax + 0x2C) = LO8(ebx);
    eax = MEM32(esp + 0x54);
    POP32(esp, ebx);
    POP32(esp, edi);
    MEM32(eax) = ecx;
    POP32(esp, esi);
    _fb = (uint32_t)(0x44) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x44;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00019660
 * Original: 0x00019660 - 0x000196AE (78 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00019660(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00019660: ;
    eax = MEM32(eax + 4);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(eax + 4);
    ebp = eax;
    SET_LO8(eax, MEM8(esi + 0x2D));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000196A9; /* jne: not equal / not zero */

loc_00019671: ;
    PUSH32(esp, ebx);
    ebx = edi + 4;

loc_00019675: ;
    _fa = (uint32_t)(MEM32(edi + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x18), 0x10 (32-bit) */
    edx = MEM32(edi + 0x14);
    ecx = esi + 0xC;
    if (CMP_B(_fa, _fb)) goto loc_00019685; /* jb: below (unsigned <) */

loc_00019681: ;
    eax = MEM32(ebx);
    goto loc_00019687;

loc_00019685: ;
    eax = ebx;

loc_00019687: ;
    PUSH32(esp, edx);
    edx = MEM32(ecx + 0x14);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00019694u); RECOMP_ABI_CALL(0x000199E0u, sub_000199E0); /* call 0x000199E0 */

loc_00019694: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0001969D; /* jge: greater or equal (signed >=) */

loc_00019698: ;
    esi = MEM32(esi + 8);
    goto loc_000196A1;

loc_0001969D: ;
    ebp = esi;
    esi = MEM32(esi);

loc_000196A1: ;
    SET_LO8(eax, MEM8(esi + 0x2D));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00019675; /* je: equal / zero */

loc_000196A8: ;
    POP32(esp, ebx);

loc_000196A9: ;
    POP32(esp, esi);
    eax = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_000196B0
 * Original: 0x000196B0 - 0x00019701 (81 bytes, 33 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000196B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000196B0: ;
    eax = MEM32(ecx + 8);
    edx = MEM32(eax);
    MEM32(ecx + 8) = edx;
    edx = MEM32(eax);
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(edx + 0x2D));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000196C5; /* jne: not equal / not zero */

loc_000196C2: ;
    MEM32(edx + 4) = ecx;

loc_000196C5: ;
    edx = MEM32(ecx + 4);
    MEM32(eax + 4) = edx;
    edx = MEM32(esp + 8);
    edx = MEM32(edx + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(edx + 4) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000196E3; /* jne: not equal / not zero */

loc_000196D7: ;
    MEM32(edx + 4) = eax;
    MEM32(eax) = ecx;
    MEM32(ecx + 4) = eax;
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_000196E3: ;
    edx = MEM32(ecx + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(edx) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000196F5; /* jne: not equal / not zero */

loc_000196EA: ;
    MEM32(edx) = eax;
    MEM32(eax) = ecx;
    MEM32(ecx + 4) = eax;
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_000196F5: ;
    MEM32(edx + 8) = eax;
    MEM32(eax) = ecx;
    MEM32(ecx + 4) = eax;
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00019710
 * Original: 0x00019710 - 0x00019765 (85 bytes, 33 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00019710(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00019710: ;
    eax = MEM32(ecx);
    edx = MEM32(eax + 8);
    MEM32(ecx) = edx;
    edx = MEM32(eax + 8);
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(edx + 0x2D));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00019725; /* jne: not equal / not zero */

loc_00019722: ;
    MEM32(edx + 4) = ecx;

loc_00019725: ;
    edx = MEM32(ecx + 4);
    MEM32(eax + 4) = edx;
    edx = MEM32(esp + 8);
    edx = MEM32(edx + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(edx + 4) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00019744; /* jne: not equal / not zero */

loc_00019737: ;
    MEM32(edx + 4) = eax;
    MEM32(eax + 8) = ecx;
    MEM32(ecx + 4) = eax;
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_00019744: ;
    edx = MEM32(ecx + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(edx + 8) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00019759; /* jne: not equal / not zero */

loc_0001974C: ;
    MEM32(edx + 8) = eax;
    MEM32(eax + 8) = ecx;
    MEM32(ecx + 4) = eax;
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_00019759: ;
    MEM32(edx) = eax;
    MEM32(eax + 8) = ecx;
    MEM32(ecx + 4) = eax;
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00019770
 * Original: 0x00019770 - 0x00019806 (150 bytes, 52 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00019770(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00019770: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x47F6C0);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(ebp + -16) = esp;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x461);
    PUSH32(esp, 0x606A34);
    PUSH32(esp, 0x30);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000197A4u); RECOMP_ABI_CALL(0x002AF0E0u, sub_002AF0E0); /* call 0x002AF0E0 */

loc_000197A4: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -24) = eax;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ebp + -4) = ebx;
    MEM32(ebp + -32) = ebx;
    MEM32(ebp + -36) = eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000197BB; /* je: equal / zero */

loc_000197B9: ;
    MEM32(eax) = ebx;

loc_000197BB: ;
    edx = 1;
    MEM32(ebp + -20) = edx;
    MEM32(ebp + -40) = ebx;
    ecx = eax + 4;
    MEM32(ebp + -44) = ecx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000197D2; /* je: equal / zero */

loc_000197D0: ;
    MEM32(ecx) = ebx;

loc_000197D2: ;
    MEM32(ebp + -20) = 2;
    MEM32(ebp + -48) = ebx;
    ecx = eax + 8;
    MEM32(ebp + -52) = ecx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000197E8; /* je: equal / zero */

loc_000197E6: ;
    MEM32(ecx) = ebx;

loc_000197E8: ;
    MEM32(ebp + -4) = 0xFFFFFFFFu;
    MEM8(eax + 0x2C) = LO8(edx);
    MEM8(eax + 0x2D) = LO8(ebx);
    ecx = MEM32(ebp + -12);
    MEM32(XBOX_FS_BASE) = ecx;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00019806
 * Original: 0x00019806 - 0x00019830 (42 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00019806(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00019806: ;
    eax = MEM32(ebp + -24);
    MEM32(ebp + -28) = eax;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0001981E; /* je: equal / zero */

loc_00019812: ;
    eax = ebp + -28;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0001981Bu); RECOMP_ABI_CALL(0x002AF1C0u, sub_002AF1C0); /* call 0x002AF1C0 */

loc_0001981B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0001981E: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00019825u); RECOMP_ABI_CALL(0x004720B3u, sub_004720B3); /* call 0x004720B3 */

loc_00019825: ;
    (void)0;
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
 * sub_00019816
 * Original: 0x00019816 - 0x00019830 (26 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00019816(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00019816: ;
    PUSH32(esp, 0x0001981Bu); RECOMP_ABI_CALL(0x002AF1C0u, sub_002AF1C0); /* call 0x002AF1C0 */

loc_0001981B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00019825u); RECOMP_ABI_CALL(0x004720B3u, sub_004720B3); /* call 0x004720B3 */

loc_00019825: ;
    (void)0;
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
 * sub_00019830
 * Original: 0x00019830 - 0x000198AC (124 bytes, 42 insns)
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00019830(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00019830: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x47F7D0);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(ebp + -16) = esp;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x461);
    PUSH32(esp, 0x606A34);
    PUSH32(esp, 0x30);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00019864u); RECOMP_ABI_CALL(0x002AF0E0u, sub_002AF0E0); /* call 0x002AF0E0 */

loc_00019864: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = eax;
    MEM32(ebp + -20) = esi;
    MEM32(ebp + -4) = 0;
    MEM32(ebp + -28) = esi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00019890; /* je: equal / zero */

loc_0001987A: ;
    eax = MEM32(ebp + 0x18);
    PUSH32(esp, eax);
    ecx = MEM32(ebp + 0x14);
    PUSH32(esp, ecx);
    edx = MEM32(ebp + 0x10);
    ecx = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00019890u); RECOMP_ABI_CALL(0x00019990u, sub_00019990); /* call 0x00019990 */

loc_00019890: ;
    MEM32(ebp + -4) = 0xFFFFFFFFu;
    eax = esi;
    ecx = MEM32(ebp + -12);
    MEM32(XBOX_FS_BASE) = ecx;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 24; return; /* ret 20 */

}

/**
 * sub_000198AC
 * Original: 0x000198AC - 0x000198D0 (36 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000198AC(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000198AC: ;
    eax = MEM32(ebp + -20);
    MEM32(ebp + -24) = eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000198C2; /* je: equal / zero */

loc_000198B6: ;
    edx = ebp + -24;
    PUSH32(esp, edx);
    PUSH32(esp, 0x000198BFu); RECOMP_ABI_CALL(0x002AF1C0u, sub_002AF1C0); /* call 0x002AF1C0 */

loc_000198BF: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000198C2: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x000198CBu); RECOMP_ABI_CALL(0x004720B3u, sub_004720B3); /* call 0x004720B3 */

loc_000198CB: ;
    (void)0;
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_000198D0
 * Original: 0x000198D0 - 0x0001992D (93 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000198D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000198D0: ;
    eax = MEM32(edx);
    SET_LO8(ecx, MEM8(eax + 0x2D));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000198DF; /* je: equal / zero */

loc_000198D9: ;
    eax = MEM32(eax + 8);
    MEM32(edx) = eax;
    esp += 4; return; /* ret */

loc_000198DF: ;
    ecx = MEM32(eax);
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(ecx + 0x2D));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00019903; /* jne: not equal / not zero */

loc_000198E9: ;
    eax = MEM32(ecx + 8);
    SET_LO8(ebx, MEM8(eax + 0x2D));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000198FF; /* jne: not equal / not zero */

loc_000198F3: ;
    ecx = eax;
    eax = MEM32(ecx + 8);
    SET_LO8(ebx, MEM8(eax + 0x2D));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000198F3; /* je: equal / zero */

loc_000198FF: ;
    MEM32(edx) = ecx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00019903: ;
    eax = MEM32(eax + 4);
    SET_LO8(ecx, MEM8(eax + 0x2D));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0001992B; /* jne: not equal / not zero */

loc_0001990D: ;
    /* nop */

loc_00019910: ;
    ecx = MEM32(edx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(eax) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00019922; /* jne: not equal / not zero */

loc_00019916: ;
    MEM32(edx) = eax;
    eax = MEM32(eax + 4);
    SET_LO8(ecx, MEM8(eax + 0x2D));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00019910; /* je: equal / zero */

loc_00019922: ;
    SET_LO8(ecx, MEM8(eax + 0x2D));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0001992B; /* jne: not equal / not zero */

loc_00019929: ;
    MEM32(edx) = eax;

loc_0001992B: ;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00019930
 * Original: 0x00019930 - 0x00019987 (87 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00019930(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00019930: ;
    eax = MEM32(edx);
    SET_LO8(ecx, MEM8(eax + 0x2D));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00019986; /* jne: not equal / not zero */

loc_00019939: ;
    ecx = MEM32(eax + 8);
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(ecx + 0x2D));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0001995F; /* jne: not equal / not zero */

loc_00019944: ;
    eax = MEM32(ecx);
    SET_LO8(ebx, MEM8(eax + 0x2D));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0001995B; /* jne: not equal / not zero */

loc_0001994D: ;
    /* nop */

loc_00019950: ;
    ecx = eax;
    eax = MEM32(ecx);
    SET_LO8(ebx, MEM8(eax + 0x2D));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00019950; /* je: equal / zero */

loc_0001995B: ;
    MEM32(edx) = ecx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0001995F: ;
    eax = MEM32(eax + 4);
    SET_LO8(ecx, MEM8(eax + 0x2D));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00019983; /* jne: not equal / not zero */

loc_00019969: ;
    /* nop */

loc_00019970: ;
    ecx = MEM32(edx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(eax + 8) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00019983; /* jne: not equal / not zero */

loc_00019977: ;
    MEM32(edx) = eax;
    eax = MEM32(eax + 4);
    SET_LO8(ecx, MEM8(eax + 0x2D));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00019970; /* je: equal / zero */

loc_00019983: ;
    MEM32(edx) = eax;
    POP32(esp, ebx);

loc_00019986: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00019990
 * Original: 0x00019990 - 0x000199D7 (71 bytes, 24 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00019990(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */

loc_00019990: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 8);
    PUSH32(esp, edi);
    PUSH32(esp, 0xFFFFFFFFu);
    MEM32(esi + 4) = ecx;
    edi = esi + 0xC;
    MEM32(esi) = eax;
    MEM32(esi + 8) = edx;
    PUSH32(esp, 0);
    MEM32(edi + 0x18) = 0xF;
    MEM32(edi + 0x14) = 0;
    PUSH32(esp, ebp);
    ecx = edi;
    MEM8(edi + 4) = 0;
    PUSH32(esp, 0x000199BFu); RECOMP_ABI_CALL(0x000144B0u, sub_000144B0); /* call 0x000144B0 */

loc_000199BF: ;
    eax = MEM32(ebp + 0x1C);
    SET_LO8(ecx, MEM8(esp + 0x10));
    MEM32(edi + 0x1C) = eax;
    POP32(esp, edi);
    MEM8(esi + 0x2C) = LO8(ecx);
    MEM8(esi + 0x2D) = 0;
    eax = esi;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000199E0
 * Original: 0x000199E0 - 0x00019A52 (114 bytes, 50 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000199E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000199E0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM32(esi + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x14), ebp (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_AE(_fa, _fb)) goto loc_000199F3; /* jae: above or equal (unsigned >=) */

loc_000199EE: ;
    PUSH32(esp, 0x000199F3u); RECOMP_ABI_CALL(0x0046DAB7u, sub_0046DAB7); /* call 0x0046DAB7 */

loc_000199F3: ;
    eax = MEM32(esi + 0x14);
    edx = MEM32(esp + 0x14);
    ebx = MEM32(esp + 0x1C);
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(ebp));
    eax = eax - ebp;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) edx = eax; /* cmovb */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00019A38; /* je: equal / zero */

loc_00019A09: ;
    eax = MEM32(esi + 0x18);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    ecx = edx;
    if (CMP_AE(_fa, _fb)) ecx = ebx; /* cmovae */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x10 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_00019A1D; /* jb: below (unsigned <) */

loc_00019A18: ;
    eax = MEM32(esi + 4);
    goto loc_00019A20;

loc_00019A1D: ;
    eax = esi + 4;

loc_00019A20: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x1C);
    esi = eax + ebp;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        _cf = (MEM8(esi) < MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    POP32(esp, edi);
    if ((_flags != 0)) goto loc_00019A34; /* je: equal / zero */

loc_00019A2F: ;
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(0xFFFFFFFFu) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */

loc_00019A34: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00019A4C; /* jne: not equal / not zero */

loc_00019A38: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_AE(_fa, _fb)) goto loc_00019A45; /* jae: above or equal (unsigned >=) */

loc_00019A3C: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    _cf = 0; /* logical op clears CF */
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, ebx);
    esp += 20; return; /* ret 16 */

loc_00019A45: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */

loc_00019A4C: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00019A60
 * Original: 0x00019A60 - 0x00019A9A (58 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00019A60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_00019A60: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x29) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x29 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00019A99; /* jge: greater or equal (signed >=) */

loc_00019A65: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00019A99; /* jl: less (signed <) */

loc_00019A69: ;
    PUSH32(esp, esi);
    esi = MEM32(0x847010);
    ecx = MEM32(esi + edx * 4);
    xmm1 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((0) ? 0x80u : 0u) | (((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_00019A86; /* jnp: not parity */

loc_00019A81: ;
    MEMF(ecx + 4) = xmm0.f[0]; /* movss */

loc_00019A86: ;
    MEM8(ecx + 9) = 0;
    eax = MEM32(esi + edx * 4);
    SET_LO8(ecx, MEM8(eax + 8));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    POP32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_00019A99; /* jne: not equal / not zero */

loc_00019A95: ;
    MEM8(eax + 8) = 1;

loc_00019A99: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00019AA0
 * Original: 0x00019AA0 - 0x00019B20 (128 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00019AA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00019AA0: ;
    eax = MEM32(esi + 0x10);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00019AF0; /* je: equal / zero */

loc_00019AA9: ;
    ecx = MEM32(esi + 0xE4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00019AF0; /* je: equal / zero */

loc_00019AB4: ;
    _fa = (uint32_t)(MEM8(esi + 5)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 5), LO8(edx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00019AF0; /* jne: not equal / not zero */

loc_00019AB9: ;
    _fa = (uint32_t)(MEM8(esi + 0xB)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0xB), LO8(edx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00019AF0; /* jne: not equal / not zero */

loc_00019ABE: ;
    _fa = (uint32_t)(MEM8(esi + 7)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 7), LO8(edx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00019AD3; /* jne: not equal / not zero */

loc_00019AC3: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00019AD3; /* jne: not equal / not zero */

loc_00019AC8: ;
    MEM8(esi + 6) = 1;
    MEM8(esi + 0x155) = LO8(ebx);
    esp += 4; return; /* ret */

loc_00019AD3: ;
    ecx = ZX8(LO8(ebx));
    PUSH32(esp, 0x00019ADBu); RECOMP_ABI_CALL(0x00400B80u, sub_00400B80); /* call 0x00400B80 */

loc_00019ADB: ;
    xmm0 = XMM_SCALAR(MEMF(0x649108)); /* movss */
    MEM8(esi + 5) = 1;
    MEMF(esi + 0x168) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

loc_00019AF0: ;
    _fa = (uint32_t)(MEM8(esi + 8)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 8), LO8(edx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00019AFA; /* jne: not equal / not zero */

loc_00019AF5: ;
    _fa = (uint32_t)(MEM8(esi + 0xB)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0xB), LO8(edx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00019B1F; /* je: equal / zero */

loc_00019AFA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00019B0C; /* je: equal / zero */

loc_00019AFE: ;
    _fa = (uint32_t)(MEM8(esi + 7)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 7), LO8(edx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00019AC8; /* jne: not equal / not zero */

loc_00019B03: ;
    _fa = (uint32_t)(MEM32(esi + 0xE4)) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0xE4), 3 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00019AC8; /* je: equal / zero */

loc_00019B0C: ;
    MEM8(esi + 8) = LO8(edx);
    MEM8(esi + 0xB) = LO8(edx);
    MEM8(esi + 5) = LO8(edx);
    MEM32(esi + 0xE4) = 1;

loc_00019B1F: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00019B20
 * Original: 0x00019B20 - 0x00019B37 (23 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00019B20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00019B20: ;
    eax = MEM32(eax + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00019B34; /* je: equal / zero */

loc_00019B27: ;
    eax = MEM32(eax + 0x38);
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) & 4);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _fb = (uint32_t)(4) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(LO8(eax)) < (uint32_t)(4));
    SET_LO8(eax, LO8(eax) - 4);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sub result */
    _cf = (int)((LO8(eax)) != 0);
    SET_LO8(eax, (uint32_t)(0u - (uint32_t)(LO8(eax))));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 4; return; /* ret */

loc_00019B34: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

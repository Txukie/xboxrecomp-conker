/**
 * Conker - Recompiled code chunk 79
 * Functions: 250 (0x005561C0 - 0x0055FD47)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_005561C0
 * Original: 0x005561C0 - 0x005563EA (554 bytes, 136 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_005561C0(void)
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

loc_005561C0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x108) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x108;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM8(esp + 0x13) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_005563E4; /* je: equal / zero */

loc_005561DB: ;
    edx = ebx;
    eax = esp + 0x60;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x005561E6u); RECOMP_ABI_CALL(0x002A0430u, sub_002A0430); /* call 0x002A0430 */

loc_005561E6: ;
    edx = MEM32(0x7FA200);
    esi = MEM32(0x8470DC);
    edx = (uint32_t)((int32_t)edx * (int32_t)0x770);
    PUSH32(esp, 1);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = 7;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00556206u); RECOMP_ABI_CALL(0x00047FA0u, sub_00047FA0); /* call 0x00047FA0 */

loc_00556206: ;
    xmm0 = XMM_SCALAR(MEMF(ebx + 0x78)); /* movss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebx + 0x7C)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x648EA4); /* addss */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebx + 0x80)); /* movss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebx + 0x7C)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(0x64925C); /* subss */
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0);
    esi = esp + 0x6C;
    edi = esp + 0x24;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00556259u); RECOMP_ABI_CALL(0x002A0180u, sub_002A0180); /* call 0x002A0180 */

loc_00556259: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055626D; /* je: equal / zero */

loc_00556260: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x60)); /* movss */
    MEM8(esp + 0x13) = 1;
    goto loc_00556275;

loc_0055626D: ;
    xmm0 = XMM_SCALAR(MEMF(ebx + 0x294)); /* movss */

loc_00556275: ;
    eax = esp + 0x28;
    PUSH32(esp, eax);
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    eax = esp + 0x30;
    ecx = esp + 0x28;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00556293u); RECOMP_ABI_CALL(0x00555A40u, sub_00555A40); /* call 0x00555A40 */

loc_00556293: ;
    xmm0 = XMM_SCALAR(MEMF(0x5A0060)); /* movss */
    PUSH32(esp, 0xF);
    PUSH32(esp, 0xC);
    PUSH32(esp, 0x3951B717);
    PUSH32(esp, 0x459C4000);
    eax = esp + 0x2C;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x005562B2u); RECOMP_ABI_CALL(0x0019B600u, sub_0019B600); /* call 0x0019B600 */

loc_005562B2: ;
    xmm0 = XMM_SCALAR(MEMF(0x64A978)); /* movss */
    ecx = MEM32(esp + 0x2C);
    edx = MEM32(esp + 0x30);
    eax = MEM32(esp + 0x34);
    MEMF(esp + 0x54) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x64A974)); /* movss */
    MEMF(esp + 0x60) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x64A970)); /* movss */
    MEM32(esp + 0x44) = ecx;
    ecx = esp + 0x44;
    MEM32(esp + 0x48) = edx;
    MEM32(esp + 0x4C) = eax;
    MEMF(esp + 0x68) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x64A120)); /* movss */
    PUSH32(esp, ecx);
    SET_LO8(eax, LO8(eax) | 0xFF);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM8(esp + 0x54) = 1;
    MEM8(esp + 0x55) = 0xFF;
    MEM32(esp + 0x5C) = 0x19;
    MEM16(esp + 0x60) = 0x65;
    MEM16(esp + 0x62) = 0x58;
    MEM16(esp + 0x68) = 0x13;
    MEMF(esp + 0x70) = xmm0.f[0]; /* movss */
    MEM8(esp + 0x74) = 0;
    MEM8(esp + 0x75) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00556341u); RECOMP_ABI_CALL(0x00156070u, sub_00156070); /* call 0x00156070 */

loc_00556341: ;
    SET_LO8(eax, MEM8(esp + 0x2B));
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005563D3; /* je: equal / zero */

loc_00556350: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00556355u); RECOMP_ABI_CALL(0x003E2480u, sub_003E2480); /* call 0x003E2480 */

loc_00556355: ;
    fp_push(MEMF(esp + 0x28)); /* fld float */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x15;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    esi = edx;
    _fb = (uint32_t)(0xA) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xA;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055636Bu); RECOMP_ABI_CALL(0x00471288u, sub_00471288); /* call 0x00471288 */

loc_0055636B: ;
    fp_push(MEMF(esp + 0x24)); /* fld float */
    MEM8(esp + 0x14) = LO8(eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00556378u); RECOMP_ABI_CALL(0x00471288u, sub_00471288); /* call 0x00471288 */

loc_00556378: ;
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    MEM8(esp + 0x15) = LO8(eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00556385u); RECOMP_ABI_CALL(0x00471288u, sub_00471288); /* call 0x00471288 */

loc_00556385: ;
    PUSH32(esp, 0xFF);
    edx = esp + 0x18;
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x14);
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    MEM8(esp + 0x32) = LO8(eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x005563A1u); RECOMP_ABI_CALL(0x003E1D70u, sub_003E1D70); /* call 0x003E1D70 */

loc_005563A1: ;
    xmm0.f[0] = xmm0.f[0] * MEMF(0x64964C); /* mulss */
    eax = MEM32(esp + 0x3C);
    xmm0.f[0] = xmm0.f[0] + MEMF(0x648EC8); /* addss */
    edx = MEM32(esp + 0x34);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x3C);
    MEMF(esp) = xmm0.f[0]; /* movss */
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    eax = 0xFF;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x005563D0u); RECOMP_ABI_CALL(0x00112C50u, sub_00112C50); /* call 0x00112C50 */

loc_005563D0: ;
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_005563D3: ;
    eax = esp + 0x18;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    eax = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x005563E1u); RECOMP_ABI_CALL(0x00185180u, sub_00185180); /* call 0x00185180 */

loc_005563E1: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_005563E4: ;
    POP32(esp, edi);
    POP32(esp, esi);
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
 * sub_005563F0
 * Original: 0x005563F0 - 0x00556415 (37 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005563F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005563F0: ;
    ecx = MEM32(esp + 4);
    SET_LO16(eax, MEM16(ecx + 0x38));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0x20 (16-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0055640F; /* jge: greater or equal (signed >=) */

loc_005563FE: ;
    edx = ZX8(MEM8(ecx + 0x4C));
    eax = SX16(LO16(eax));
    eax = eax << 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0055640F; /* jle: less or equal (signed <=) */

loc_0055640C: ;
    MEM8(ecx + 0x4C) = LO8(eax);

loc_0055640F: ;
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_00556420
 * Original: 0x00556420 - 0x005565E3 (451 bytes, 94 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00556420(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00556420: ;
    _fb = (uint32_t)(0x80) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x80;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edi);
    MEM32(esp + 0x30) = 0x303;
    MEM32(esp + 0x34) = 0x29;
    PUSH32(esp, 0x0055643Cu); RECOMP_ABI_CALL(0x003E2480u, sub_003E2480); /* call 0x003E2480 */

loc_0055643C: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x1A;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    xmm6 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esp + 0xC) = xmm6.f[0]; /* movss */
    MEMF(esp + 0x10) = xmm6.f[0]; /* movss */
    MEM8(esp + 0x14) = 0xB0;
    MEM8(esp + 0x15) = 0xA0;
    MEM8(esp + 0x16) = 0x2A;
    _fb = (uint32_t)(0x19) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x19;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(esp + 8) = LO16(edx);
    PUSH32(esp, 0x0055646Fu); RECOMP_ABI_CALL(0x003E2480u, sub_003E2480); /* call 0x003E2480 */

loc_0055646F: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x9C;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    _fb = (uint32_t)(0x64) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(edx, LO8(edx) + 0x64);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    MEM8(esp + 0x17) = LO8(edx);
    PUSH32(esp, 0x00556483u); RECOMP_ABI_CALL(0x003E1D70u, sub_003E1D70); /* call 0x003E1D70 */

loc_00556483: ;
    xmm0.f[0] = xmm0.f[0] * MEMF(0x64A330); /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x648EBC); /* addss */
    MEMF(esp + 0x48) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x44) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x90)); /* movss */
    MEMF(esp + 0x4C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x94)); /* movss */
    MEMF(esp + 0x50) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x98)); /* movss */
    MEMF(esp + 0x54) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x005564D1u); RECOMP_ABI_CALL(0x003E1D70u, sub_003E1D70); /* call 0x003E1D70 */

loc_005564D1: ;
    xmm0.f[0] = xmm0.f[0] * MEMF(0x64925C); /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x649BB0); /* addss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x648D80); /* mulss */
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x005564F4u); RECOMP_ABI_CALL(0x003E2480u, sub_003E2480); /* call 0x003E2480 */

loc_005564F4: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0xC;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    edi = esp + 0x68;
    _fb = (uint32_t)(0x15) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - 0x15;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edx);
    edx = MEM32(esp + 0xB0);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00556511u); RECOMP_ABI_CALL(0x00110510u, sub_00110510); /* call 0x00110510 */

loc_00556511: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esp + 0x70) = xmm6.f[0]; /* movss */
    MEM32(esp + 0x74) = 0xE05;
    PUSH32(esp, 0x00556527u); RECOMP_ABI_CALL(0x003E2480u, sub_003E2480); /* call 0x003E2480 */

loc_00556527: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    POP32(esp, edi);
    if (TEST_Z(_fa, _fb)) goto loc_00556534; /* je: equal / zero */

loc_0055652C: ;
    MEM32(esp + 0x70) = 0xE45;

loc_00556534: ;
    PUSH32(esp, 0x00556539u); RECOMP_ABI_CALL(0x003E2480u, sub_003E2480); /* call 0x003E2480 */

loc_00556539: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00556545; /* je: equal / zero */

loc_0055653D: ;
    MEM32(esp + 0x70) = MEM32(esp + 0x70) | 0x80;
    _fa = (uint32_t)(MEM32(esp + 0x70)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_00556545: ;
    xmm0 = XMM_SCALAR(MEMF(0x64A32C)); /* movss */
    eax = 2;
    MEM32(esp + 0x1C) = eax;
    MEM32(esp + 0x28) = eax;
    eax = MEM32(esp + 0xBC);
    PUSH32(esp, eax);
    ecx = 4;
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    MEM32(esp + 0x20) = ecx;
    MEM32(esp + 0x2C) = ecx;
    ecx = esp + 0x10;
    MEMF(esp + 0x48) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x64A328)); /* movss */
    PUSH32(esp, 1);
    PUSH32(esp, ecx);
    MEM8(esp + 0x8C) = 9;
    MEM8(esp + 0x8D) = 0xFF;
    MEM16(esp + 0x48) = 0x19;
    MEM16(esp + 0x4A) = 0xA;
    MEM16(esp + 0x4C) = 0x20;
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x2C) = 0;
    MEM32(esp + 0x38) = 0;
    PUSH32(esp, 0x005565C7u); RECOMP_ABI_CALL(0x00105450u, sub_00105450); /* call 0x00105450 */

loc_005565C7: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005565D7; /* je: equal / zero */

loc_005565CE: ;
    edx = MEM32(esp);
    MEM32(eax + 0x170) = edx;

loc_005565D7: ;
    eax = 1;
    _fb = (uint32_t)(0x80) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x80;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_005565F0
 * Original: 0x005565F0 - 0x00556636 (70 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005565F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005565F0: ;
    ecx = MEM32(0x7FA20C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    eax = MEM32(esp + 4);
    if (CMP_EQ(_fa, _fb)) goto loc_00556633; /* je: equal / zero */

loc_005565FE: ;
    edi = edi;

loc_00556600: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x88)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(eax + 0x170); /* mulss */
    MEMF(eax + 0x88) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x170)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(eax + 0x90); /* mulss */
    MEMF(eax + 0x90) = xmm0.f[0]; /* movss */
    if ((_fa != 0)) goto loc_00556600; /* jne: not equal / not zero */

loc_00556633: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}

/**
 * sub_00556640
 * Original: 0x00556640 - 0x00556877 (567 bytes, 109 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00556640(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00556640: ;
    _fb = (uint32_t)(0xD4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xD4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm0 = XMM_SCALAR(MEMF(esp + 0xE0)); /* movss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    xmm2 = XMM_SCALAR(MEMF(0x648E64)); /* movss */
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0xE4)); /* movss */
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0xE8)); /* movss */
    PUSH32(esp, ebx);
    MEMF(esp + 0x40) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x648D14)); /* movss */
    PUSH32(esp, edi);
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x70) = 0x29E8;
    MEMF(esp + 0x18) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x1C) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x20) = xmm1.f[0]; /* movss */
    MEMF(esp + 0xC) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x64) = xmm1.f[0]; /* movss */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x78) = 0x20;
    PUSH32(esp, 0x005566D3u); RECOMP_ABI_CALL(0x003E1D70u, sub_003E1D70); /* call 0x003E1D70 */

loc_005566D3: ;
    xmm0.f[0] = xmm0.f[0] * MEMF(0x64A4A8); /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x5A0060); /* addss */
    xmm6 = XMM_SCALAR(MEMF(0x648D80)); /* movss */
    PUSH32(esp, ecx);
    xmm0.f[0] = xmm0.f[0] * xmm6.f[0]; /* mulss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x005566FAu); RECOMP_ABI_CALL(0x003E2480u, sub_003E2480); /* call 0x003E2480 */

loc_005566FA: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x15;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    edi = esp + 0x58;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - 0x28;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x108);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00556717u); RECOMP_ABI_CALL(0x00110510u, sub_00110510); /* call 0x00110510 */

loc_00556717: ;
    PUSH32(esp, 0x0055671Cu); RECOMP_ABI_CALL(0x003E1D70u, sub_003E1D70); /* call 0x003E1D70 */

loc_0055671C: ;
    xmm5 = XMM_SCALAR(MEMF(0x649298)); /* movss */
    xmm7 = XMM_SCALAR(MEMF(0x649248)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm5.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm7.f[0]; /* subss */
    xmm0.f[0] = xmm0.f[0] * xmm6.f[0]; /* mulss */
    MEMF(esp + 0x6C) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00556743u); RECOMP_ABI_CALL(0x003E1D70u, sub_003E1D70); /* call 0x003E1D70 */

loc_00556743: ;
    xmm0.f[0] = xmm0.f[0] * xmm5.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm7.f[0]; /* subss */
    xmm0.f[0] = xmm0.f[0] * xmm6.f[0]; /* mulss */
    MEMF(esp + 0x74) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x0055675Au); RECOMP_ABI_CALL(0x003E2480u, sub_003E2480); /* call 0x003E2480 */

loc_0055675A: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x33;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    _fb = (uint32_t)(0x32) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x32;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x80) = edx;
    PUSH32(esp, 0x00556771u); RECOMP_ABI_CALL(0x003E1D70u, sub_003E1D70); /* call 0x003E1D70 */

loc_00556771: ;
    xmm0.f[0] = xmm0.f[0] * MEMF(0x64AF68); /* mulss */
    xmm0.f[0] = xmm0.f[0] - MEMF(0x64AF64); /* subss */
    xmm5 = XMM_SCALAR(MEMF(0x648D2C)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm5.f[0]; /* mulss */
    MEMF(esp + 0x78) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00556798u); RECOMP_ABI_CALL(0x003E1D70u, sub_003E1D70); /* call 0x003E1D70 */

loc_00556798: ;
    xmm0.f[0] = xmm0.f[0] * MEMF(0x64AF60); /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x5A005C); /* addss */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    xmm0.f[0] = xmm0.f[0] * xmm5.f[0]; /* mulss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    MEM8(esp + 0x88) = LO8(ebx);
    MEM32(esp + 0x8C) = ebx;
    PUSH32(esp, 0x005567CDu); RECOMP_ABI_CALL(0x003E2480u, sub_003E2480); /* call 0x003E2480 */

loc_005567CD: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x4C;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    MEM32(esp + 0x94) = 0x556880;
    MEM32(esp + 0x98) = ebx;
    MEM32(esp + 0x9C) = ebx;
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* sub source, before the write */
    SET_LO8(edx, LO8(edx) - LO8(ecx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sub result */
    MEM8(esp + 0x90) = LO8(edx);
    edx = MEM32(esp + 0x124);
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x7F);
    PUSH32(esp, 3);
    eax = esp + 0x2C;
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    MEM32(esp + 0xC0) = ebx;
    MEM32(esp + 0xC4) = ebx;
    MEM32(esp + 0xC8) = ebx;
    MEM32(esp + 0xCC) = 0x13E6E0;
    MEM32(esp + 0xD0) = 0x13E8F0;
    MEM8(esp + 0xD8) = 2;
    MEM32(esp + 0xDC) = ebx;
    MEM8(esp + 0xE0) = LO8(ebx);
    MEM16(esp + 0xE2) = 0x20;
    MEM16(esp + 0xE4) = 7;
    PUSH32(esp, 0x00556866u); RECOMP_ABI_CALL(0x0013D5D0u, sub_0013D5D0); /* call 0x0013D5D0 */

loc_00556866: ;
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    eax = 1;
    POP32(esp, ebx);
    _fb = (uint32_t)(0xD4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xD4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00556880
 * Original: 0x00556880 - 0x00556935 (181 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00556880(void)
{

loc_00556880: ;
    eax = MEM32(esp + 4);
    xmm0 = XMM_SCALAR(MEMF(0x7FA24C)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x78)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + MEMF(eax + 0x60); /* addss */
    MEMF(eax + 0x60) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x90)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] * MEMF(0x648D10); /* mulss */
    xmm2.f[0] = xmm2.f[0] + MEMF(eax + 0x7C); /* addss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] + MEMF(eax + 0x64); /* addss */
    MEMF(eax + 0x64) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(eax + 0x80)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] + MEMF(eax + 0x68); /* addss */
    MEMF(eax + 0x68) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(eax + 0x7C)); /* movss */
    xmm2.f[0] = xmm2.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x84)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + MEMF(eax + 0x3C); /* addss */
    MEMF(eax + 0x3C) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x88)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + MEMF(eax + 0x40); /* addss */
    MEMF(eax + 0x40) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x8C)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + MEMF(eax + 0x44); /* addss */
    MEMF(eax + 0x7C) = xmm2.f[0]; /* movss */
    MEMF(eax + 0x44) = xmm1.f[0]; /* movss */
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_005569E0
 * Original: 0x005569E0 - 0x00556A29 (73 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005569E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005569E0: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x2D);
    eax = 0x48;
    PUSH32(esp, 0x005569EDu); RECOMP_ABI_CALL(0x000D9C60u, sub_000D9C60); /* call 0x000D9C60 */

loc_005569ED: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005569F5; /* jne: not equal / not zero */

loc_005569F4: ;
    esp += 4; return; /* ret */

loc_005569F5: ;
    ecx = MEM32(esp + 0x10);
    edx = MEM32(esp + 0x14);
    MEM32(eax + 0x34) = ecx;
    SET_LO16(ecx, MEM16(esp + 4));
    MEM32(eax + 0x38) = edx;
    SET_LO8(edx, MEM8(esp + 0xC));
    MEM16(eax + 0x3C) = LO16(ecx);
    ecx = MEM32(esp + 8);
    MEM8(eax + 0x44) = LO8(edx);
    MEM32(eax + 0x40) = ecx;
    MEM32(eax + 0x2C) = 1;
    MEM32(eax + 0x30) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_00556A30
 * Original: 0x00556A30 - 0x00556A95 (101 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00556A30(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00556A30: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(MEM8(esi + 0x2C)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x2C), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00556A86; /* je: equal / zero */

loc_00556A3B: ;
    SET_LO16(eax, MEM16(0x7FA20C));
    _fb = (uint32_t)(LO16(eax)) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* sub source, before the write */
    MEM16(esi + 0x3C) = MEM16(esi + 0x3C) - LO16(eax);
    _fa = (uint32_t)(MEM16(esi + 0x3C)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* sub result */
    SET_LO16(eax, MEM16(esi + 0x3C));
    if ((_fas >= 0)) goto loc_00556A86; /* jns: not sign (positive) */

loc_00556A4B: ;
    SET_LO8(eax, MEM8(esi + 0x44));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00556A5C; /* jne: not equal / not zero */

loc_00556A52: ;
    ecx = MEM32(esi + 0x40);
    MEM32(ecx + 0x4C) = 0;

loc_00556A5C: ;
    SET_LO8(eax, MEM8(0x8472BD));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00556A86; /* jne: not equal / not zero */

loc_00556A65: ;
    edx = esi;
    PUSH32(esp, 0x00556A6Cu); RECOMP_ABI_CALL(0x000DAD90u, sub_000DAD90); /* call 0x000DAD90 */

loc_00556A6C: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00556A86; /* jl: less (signed <) */

loc_00556A73: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x70);
    eax = MEM32(eax + 0x5906BC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00556A88; /* je: equal / zero */

loc_00556A80: ;
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = eax; PUSH32(esp, 0x00556A83u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x00556A81u); } /* indirect call */
    }

loc_00556A83: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00556A86: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00556A88: ;
    eax = esi;
    edx = 1;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_000DA5E0(); return; /* tail jmp 0x000DA5E0 */

}

/**
 * sub_00556AA0
 * Original: 0x00556AA0 - 0x00556B8E (238 bytes, 49 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00556AA0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00556AA0: ;
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = MEM32(eax + 4);
    xmm0 = XMM_SCALAR(MEMF(0x648CE4)); /* movss */
    ecx = MEM32(eax);
    eax = MEM32(eax + 8);
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x648CDC)); /* movss */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x64ADD8)); /* movss */
    PUSH32(esp, esi);
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x64ADD4)); /* movss */
    MEM32(esp + 0x14) = edx;
    edx = MEM32(esp + 0x50);
    PUSH32(esp, edx);
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x649228)); /* movss */
    MEM32(esp + 0x14) = ecx;
    ecx = MEM32(esp + 0x4C);
    MEMF(esp + 0x3C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x648E68)); /* movss */
    PUSH32(esp, 0);
    MEM32(esp + 0x20) = eax;
    eax = esp + 0x50;
    MEMF(esp + 0x44) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x64ADD0)); /* movss */
    PUSH32(esp, 1);
    MEM32(esp + 0x10) = ecx;
    PUSH32(esp, eax);
    ecx = esp + 0x14;
    MEMF(esp + 0x50) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x5C)); /* movss */
    PUSH32(esp, ecx);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esi = esp + 0x1C;
    MEM32(esp + 0x1C) = 0xA;
    MEM32(esp + 0x20) = 7;
    MEM16(esp + 0x30) = 0;
    MEM16(esp + 0x32) = 0xFF;
    MEM16(esp + 0x34) = 0xFFCB;
    MEM16(esp + 0x36) = 0x18;
    MEM16(esp + 0x48) = 0x32;
    MEM16(esp + 0x4A) = 0x14;
    MEMF(esp + 0x5C) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00556B86u); RECOMP_ABI_CALL(0x000F4550u, sub_000F4550); /* call 0x000F4550 */

loc_00556B86: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00556B90
 * Original: 0x00556B90 - 0x00556D58 (456 bytes, 84 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00556B90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00556B90: ;
    _fb = (uint32_t)(0xD4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xD4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = MEM32(0x595D1C);
    eax = MEM32(0x595D14);
    xmm0 = XMM_SCALAR(MEMF(0x648D14)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x648D80)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esi + 0x18)); /* movss */
    ecx = MEM32(0x595D18);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, ebx);
    MEM32(esp + 0x54) = eax;
    MEM32(esp + 0x60) = eax;
    eax = (uint32_t)(int32_t)SMEM16(esp + 0xE4);
    MEM32(esp + 0x5C) = edx;
    MEM32(esp + 0x68) = edx;
    edx = MEM32(esp + 0xE8);
    PUSH32(esp, edx);
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    PUSH32(esp, 4);
    MEM32(esp + 0x7C) = eax;
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x3C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x40) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi)); /* movss */
    PUSH32(esp, ebx);
    eax = 0xFF;
    MEMF(esp + 0x1C) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(esi + 0x1C)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = XMM_SCALAR(MEMF(esi + 0xC)); /* movss */
    MEMF(esp + 0x48) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 4)); /* movss */
    MEM8(esp + 0x90) = LO8(eax);
    MEM16(esp + 0xC4) = LO16(eax);
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, 0x7F);
    MEMF(esp + 0x28) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esi + 0x10)); /* movss */
    MEMF(esp + 0x50) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 8)); /* movss */
    PUSH32(esp, 3);
    MEM32(esp + 0xE8) = eax;
    MEM32(esp + 0xEC) = eax;
    MEM32(esp + 0x6C) = ecx;
    MEM32(esp + 0x78) = ecx;
    ecx = MEM32(esp + 0xF4);
    eax = esp + 0x1C;
    MEMF(esp + 0x30) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esi + 0x14)); /* movss */
    MEMF(esp + 0x58) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    MEMF(esp + 0x30) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x3C) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x88) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x8C) = 0x980;
    MEM32(esp + 0x94) = ecx;
    MEM8(esp + 0x98) = LO8(ebx);
    MEM32(esp + 0x9C) = ebx;
    MEM32(esp + 0xC4) = 0xCF570;
    MEM32(esp + 0xA4) = 0x556D60;
    MEM32(esp + 0xA8) = ebx;
    MEM32(esp + 0xAC) = ebx;
    MEM32(esp + 0xB0) = ebx;
    MEM32(esp + 0xB4) = ebx;
    MEM32(esp + 0xB8) = ebx;
    MEM32(esp + 0xBC) = 0x13E6E0;
    MEM32(esp + 0xC0) = 0x13EC40;
    MEM8(esp + 0xC8) = LO8(ebx);
    MEM32(esp + 0xCC) = ebx;
    MEM8(esp + 0xD0) = LO8(ebx);
    MEM16(esp + 0xD2) = 1;
    MEM32(esp + 0xEC) = ebx;
    PUSH32(esp, 0x00556D43u); RECOMP_ABI_CALL(0x0013D5D0u, sub_0013D5D0); /* call 0x0013D5D0 */

loc_00556D43: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    POP32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_00556D51; /* je: equal / zero */

loc_00556D4B: ;
    MEM32(eax + 0x290) = esi;

loc_00556D51: ;
    _fb = (uint32_t)(0xD4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xD4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00556D60
 * Original: 0x00556D60 - 0x00556DB7 (87 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00556D60(void)
{

loc_00556D60: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0x290);
    xmm1 = XMM_SCALAR(MEMF(ecx + 0x18)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x648D80)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(eax + 0x34) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 0x1C)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(eax + 0x38) = xmm1.f[0]; /* movss */
    edx = MEM32(ecx + 0xC);
    MEM32(eax + 0x3C) = edx;
    edx = MEM32(ecx + 0x10);
    MEM32(eax + 0x40) = edx;
    edx = MEM32(ecx + 0x14);
    MEM32(eax + 0x44) = edx;
    edx = MEM32(ecx);
    MEM32(eax + 0x60) = edx;
    edx = MEM32(ecx + 4);
    MEM32(eax + 0x64) = edx;
    ecx = MEM32(ecx + 8);
    MEM32(eax + 0x68) = ecx;
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_00556DC0
 * Original: 0x00556DC0 - 0x00556F34 (372 bytes, 79 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00556DC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00556DC0: ;
    _fb = (uint32_t)(0x114) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x114;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    eax = esp + 4;
    PUSH32(esp, 0x00556DD0u); RECOMP_ABI_CALL(0x000AF180u, sub_000AF180); /* call 0x000AF180 */

loc_00556DD0: ;
    eax = MEM32(esp + 0x11C);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm1 = XMM_SCALAR(MEMF(esi + 0x18)); /* movss */
    SET_LO16(edx, MEM16(esp + 0x120));
    MEM32(esp + 0x58) = eax;
    eax = 2;
    MEM32(esp + 0x64) = eax;
    MEM32(esp + 0x6C) = eax;
    MEM32(esp + 0x80) = eax;
    eax = 0xFF;
    MEMF(esp + 0x50) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x5C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x60) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x648CE4)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEM8(esp + 0x48) = LO8(eax);
    MEM8(esp + 0x49) = LO8(eax);
    MEM8(esp + 0x4A) = LO8(eax);
    MEM8(esp + 0x4B) = LO8(eax);
    MEM8(esp + 0x3C) = LO8(eax);
    MEM16(esp + 0x46) = LO16(eax);
    eax = MEM32(esp + 0x124);
    PUSH32(esp, eax);
    PUSH32(esp, 4);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x7F);
    MEMF(esp + 0x14) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esi + 0x1C)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm0 = XMM_SCALAR(MEMF(esi)); /* movss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 4)); /* movss */
    PUSH32(esp, 3);
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 8)); /* movss */
    PUSH32(esp, ebx);
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0xC)); /* movss */
    PUSH32(esp, 0x17);
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x10)); /* movss */
    PUSH32(esp, ebx);
    MEMF(esp + 0x3C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x14)); /* movss */
    PUSH32(esp, ebx);
    ecx = 1;
    MEMF(esp + 0x44) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x648D14)); /* movss */
    PUSH32(esp, 0x27);
    PUSH32(esp, 0x597978);
    eax = esp + 0x2C;
    MEM32(esp + 0x74) = 0x303;
    MEM8(esp + 0x2C) = LO8(ebx);
    MEM8(esp + 0x7C) = LO8(ecx);
    MEM32(esp + 0x98) = ebx;
    MEM32(esp + 0x9C) = 4;
    MEM32(esp + 0xA4) = ebx;
    MEM16(esp + 0x2E) = LO16(edx);
    MEM32(esp + 0xAC) = ebx;
    MEMF(esp + 0x34) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x50) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x54) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x58) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x5C) = 0x4400081;
    MEM32(esp + 0x60) = ebx;
    MEM32(esp + 0x68) = ebx;
    MEM16(esp + 0x6C) = LO16(ecx);
    PUSH32(esp, 0x00556F1Fu); RECOMP_ABI_CALL(0x00150630u, sub_00150630); /* call 0x00150630 */

loc_00556F1F: ;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    POP32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_00556F2D; /* je: equal / zero */

loc_00556F27: ;
    MEM32(eax + 0x310) = esi;

loc_00556F2D: ;
    _fb = (uint32_t)(0x114) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x114;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00556F40
 * Original: 0x00556F40 - 0x00556F97 (87 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00556F40(void)
{

loc_00556F40: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0x310);
    xmm1 = XMM_SCALAR(MEMF(ecx + 0x18)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x648CE4)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(eax + 0x38) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 0x1C)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(eax + 0x3C) = xmm1.f[0]; /* movss */
    edx = MEM32(ecx + 0xC);
    MEM32(eax + 0x4C) = edx;
    edx = MEM32(ecx + 0x10);
    MEM32(eax + 0x50) = edx;
    edx = MEM32(ecx + 0x14);
    MEM32(eax + 0x54) = edx;
    edx = MEM32(ecx);
    MEM32(eax + 0x40) = edx;
    edx = MEM32(ecx + 4);
    MEM32(eax + 0x44) = edx;
    ecx = MEM32(ecx + 8);
    MEM32(eax + 0x48) = ecx;
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_00556FA0
 * Original: 0x00556FA0 - 0x00557077 (215 bytes, 50 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00556FA0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00556FA0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x3C4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x3C4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    eax = MEM32(ebx + 0x3C8);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_005572D6(); return; } /* je: equal / zero */

loc_00556FC2: ;
    eax = MEM32(ebx + 0x68);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xE0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xE0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_00557128(); return; } /* je: equal / zero */

loc_00556FD0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xEA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xEA (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_00557128(); return; } /* je: equal / zero */

loc_00556FDB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xDF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xDF (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_00557128(); return; } /* je: equal / zero */

loc_00556FE6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xE9) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xE9 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_00557128(); return; } /* je: equal / zero */

loc_00556FF1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x12F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x12F (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_00557128(); return; } /* je: equal / zero */

loc_00556FFC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xEC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xEC (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_00557128(); return; } /* je: equal / zero */

loc_00557007: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x12C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x12C (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_00557128(); return; } /* je: equal / zero */

loc_00557012: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xE2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xE2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_00557128(); return; } /* je: equal / zero */

loc_0055701D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xDE) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xDE (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_00557128(); return; } /* je: equal / zero */

loc_00557028: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xE8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xE8 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_00557128(); return; } /* je: equal / zero */

loc_00557033: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xDD) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xDD (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_00557128(); return; } /* je: equal / zero */

loc_0055703E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xC1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_00557077(); return; } /* je: equal / zero */

loc_00557045: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xCC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xCC (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_00557077(); return; } /* je: equal / zero */

loc_0055704C: ;
    eax = ZX8(MEM8(ebp + 0x10));
    ecx = MEM32(eax * 4 + 0x5582C0);
    edx = MEM32(ebx + 0x4B0);
    eax = MEM32(edx + 0x24);
    eax = MEM32(eax + 8);
    PUSH32(esp, ecx);
    esi = esp + 0x20;
    edi = 0x5F369C;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00557072u); RECOMP_ABI_CALL(0x003ECD90u, sub_003ECD90); /* call 0x003ECD90 */

loc_00557072: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_005570DF(); return; /* tail jmp 0x005570DF */

}

/**
 * sub_00558560
 * Original: 0x00558560 - 0x005585C7 (103 bytes, 37 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00558560(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00558560: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    esi = edi + ebx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055858A; /* je: equal / zero */

loc_00558573: ;
    eax = esi;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x380);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x6B776168);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x56118C); PUSH32(esp, 0x00558587u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00558581u); } /* indirect call */
    }

loc_00558587: ;
    MEM32(ebp + 8) = eax;

loc_0055858A: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    MEM32(0x558320) = eax;
    if (CMP_BE(_fa, _fb)) goto loc_005585AA; /* jbe: below or equal (unsigned <=) */

loc_00558595: ;
    ecx = MEM32(ebp + 8);

loc_00558598: ;
    MEM32(ecx) = eax;
    eax = ecx;
    _fb = (uint32_t)(0x380) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x380;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00558598; /* jne: not equal / not zero */

loc_005585A5: ;
    MEM32(0x558320) = eax;

loc_005585AA: ;
    MEM16(0x55831C) = LO16(edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = 0x75F144;
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    POP32(esp, edi);
    POP32(esp, esi);
    MEM16(0x558318) = LO16(ebx);
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_005585C7
 * Original: 0x005585C7 - 0x0055866A (163 bytes, 56 insns)
 * Category: game_input
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_005585C7(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005585C7: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fa = (uint32_t)(MEM32(0x5583B0)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x5583B0), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00558666; /* jne: not equal / not zero */

loc_005585D7: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    PUSH32(esp, edi);
    ecx = esi;
    MEM32(0x5583B0) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x005585EEu); RECOMP_ABI_CALL(0x00558850u, sub_00558850); /* call 0x00558850 */

loc_005585EE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005585F9; /* je: equal / zero */

loc_005585F2: ;
    PUSH32(esp, 4);
    POP32(esp, eax);
    ebx = eax;
    goto loc_00558634;

loc_005585F9: ;
    PUSH32(esp, 0x55835C);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00558605u); RECOMP_ABI_CALL(0x00558819u, sub_00558819); /* call 0x00558819 */

loc_00558605: ;
    PUSH32(esp, 0x558344);
    ecx = esi;
    edi = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00558613u); RECOMP_ABI_CALL(0x00558819u, sub_00558819); /* call 0x00558819 */

loc_00558613: ;
    PUSH32(esp, 0x558350);
    ecx = esi;
    ebx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00558621u); RECOMP_ABI_CALL(0x00558819u, sub_00558819); /* call 0x00558819 */

loc_00558621: ;
    PUSH32(esp, 4);
    MEM32(ebp + 8) = eax;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + edi;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, eax);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0055862F; /* jbe: below or equal (unsigned <=) */

loc_0055862D: ;
    ebx = eax;

loc_0055862F: ;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), eax (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00558637; /* jbe: below or equal (unsigned <=) */

loc_00558634: ;
    MEM32(ebp + 8) = eax;

loc_00558637: ;
    edi = 0x5583A4;
    PUSH32(esp, edi);
    ecx = esi;
    MEM8(0x5583A5) = LO8(ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055864Au); RECOMP_ABI_CALL(0x0055885Cu, sub_0055885C); /* call 0x0055885C */

loc_0055864A: ;
    SET_LO8(eax, MEM8(ebp + 8));
    PUSH32(esp, edi);
    ecx = esi;
    MEM8(0x5583A5) = LO8(eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055865Au); RECOMP_ABI_CALL(0x0055885Cu, sub_0055885C); /* call 0x0055885C */

loc_0055865A: ;
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00558663u); RECOMP_ABI_CALL(0x00558560u, sub_00558560); /* call 0x00558560 */

loc_00558663: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);

loc_00558666: ;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0055866A
 * Original: 0x0055866A - 0x00558776 (268 bytes, 95 insns)
 * Category: game_input
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0055866A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055866A: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0xC04;
    edi = 0x75FAE8;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    eax = 0x75FAEC;
    PUSH32(esp, 0x5F5F554D);
    PUSH32(esp, 0x60);
    MEM32(0x75FAF0) = eax;
    MEM32(0x75FAEC) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055869Cu); RECOMP_ABI_CALL(0x0055CB7Fu, sub_0055CB7F); /* call 0x0055CB7F */

loc_0055869C: ;
    edi = eax;
    PUSH32(esp, 0x18);
    POP32(esp, ecx);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(0x762AF4) = edi;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = MEM32(ebp + 8);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x005586B3u); RECOMP_ABI_CALL(0x00558850u, sub_00558850); /* call 0x00558850 */

loc_005586B3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005586CC; /* jne: not equal / not zero */

loc_005586B7: ;
    ecx = MEM32(ebp + 8);
    PUSH32(esp, 0x5583D8);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x005586C4u); RECOMP_ABI_CALL(0x00558819u, sub_00558819); /* call 0x00558819 */

loc_005586C4: ;
    ebx = eax;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 8 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_005586CF; /* jbe: below or equal (unsigned <=) */

loc_005586CC: ;
    PUSH32(esp, 8);
    POP32(esp, ebx);

loc_005586CF: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x560FA8);
    eax = ebp + -12;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x561060); PUSH32(esp, 0x005586DEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x005586D8u); } /* indirect call */
    }

loc_005586DE: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00558751; /* jbe: below or equal (unsigned <=) */

loc_005586E4: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(9) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 9 (32-bit) */
    eax = esi + 0x41;
    if (CMP_A(_fa, _fb)) goto loc_005586EF; /* ja: above (unsigned >) */

loc_005586EC: ;
    eax = esi + 0x30;

loc_005586EF: ;
    ecx = MEM32(ebp + -8);
    MEM8(ecx + 0xB) = LO8(eax);
    eax = ebp + -4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3A);
    eax = ebp + -12;
    PUSH32(esp, eax);
    PUSH32(esp, 0x170);
    PUSH32(esp, 0x558410);
    { uint32_t _icall_target = MEM32(0x561228); PUSH32(esp, 0x00558711u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0055870Bu); } /* indirect call */
    }

loc_00558711: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00558751; /* jl: less (signed <) */

loc_00558715: ;
    eax = MEM32(ebp + -4);
    edx = MEM32(eax + 0x18);
    PUSH32(esp, 0x5C);
    POP32(esp, ecx);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = edx;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    eax = MEM32(ebp + -4);
    MEM32(edx) = eax;
    MEM32(edx + 4) = esi;
    PUSH32(esp, 4);
    POP32(esp, ecx);
    MEM32(edx + 0xC) = ecx;
    eax = MEM32(ebp + -4);
    MEM8(eax + 0x1E) = 1;
    eax = MEM32(ebp + -4);
    MEM32(eax + 0x14) = MEM32(eax + 0x14) | ecx;
    _fa = (uint32_t)(MEM32(eax + 0x14)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = MEM32(ebp + -4);
    MEM32(eax + 0x14) = MEM32(eax + 0x14) & 0xFFFFFFEFu;
    _fa = (uint32_t)(MEM32(eax + 0x14)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055874Cu); RECOMP_ABI_CALL(0x0055A5C1u, sub_0055A5C1); /* call 0x0055A5C1 */

loc_0055874C: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_005586E4; /* jb: below (unsigned <) */

loc_00558751: ;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM8(0x558401) = LO8(ebx);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 1 (32-bit) */
    POP32(esp, ebx);
    if (CMP_BE(_fa, _fb)) goto loc_00558765; /* jbe: below or equal (unsigned <=) */

loc_0055875F: ;
    MEM8(0x558407) = MEM8(0x558407) << 1;
    _fa = (uint32_t)(MEM8(0x558407)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */

loc_00558765: ;
    ecx = MEM32(ebp + 8);
    PUSH32(esp, 0x558400);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00558772u); RECOMP_ABI_CALL(0x0055885Cu, sub_0055885C); /* call 0x0055885C */

loc_00558772: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00558776
 * Original: 0x00558776 - 0x00558819 (163 bytes, 62 insns)
 * Category: game_input
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00558776(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00558776: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    SET_LO8(eax, MEM8(ebp + 8));
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    edi = ZX8(LO8(eax));
    MEM8(esi + 0x7A) = LO8(eax);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = edi;
    PUSH32(esp, 0x44425355);
    eax = eax << 5;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    MEM8(esi) = LO8(ebx);
    MEM8(esi + 0x79) = LO8(ebx);
    MEM32(esi + 0x7C) = ebx;
    MEM32(esi + 0x80) = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x005587A7u); RECOMP_ABI_CALL(0x0055CB7Fu, sub_0055CB7F); /* call 0x0055CB7F */

loc_005587A7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(ebp + 8) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_005587C1; /* je: equal / zero */

loc_005587AE: ;
    PUSH32(esp, 0x55AA16);
    PUSH32(esp, edi);
    PUSH32(esp, 0x20);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x005587BCu); RECOMP_ABI_CALL(0x00011B30u, sub_00011B30); /* call 0x00011B30 */

loc_005587BC: ;
    eax = MEM32(ebp + 8);
    goto loc_005587C3;

loc_005587C1: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_005587C3: ;
    ecx = ZX8(MEM8(esi + 0x7A));
    MEM32(esi + 0xE0) = eax;
    SET_LO8(eax, MEM8(ebp + 0xC));
    MEM8(esi + 0x7B) = LO8(eax);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_005587F7; /* jle: less or equal (signed <=) */

loc_005587DA: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_005587DC: ;
    edx = MEM32(esi + 0xE0);
    SET_LO8(eax, LO8(eax) + 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    ecx = ecx << 5;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM8(ecx + edx + 1) = LO8(eax);
    edx = ZX8(MEM8(esi + 0x7A));
    ecx = SX8(LO8(eax));
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_005587DC; /* jl: less (signed <) */

loc_005587F7: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x55B7F2);
    eax = esi + 0x34;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x5610E4); PUSH32(esp, 0x00558807u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00558801u); } /* indirect call */
    }

loc_00558807: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    _fb = (uint32_t)(0x50) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x50;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(0x561148); PUSH32(esp, 0x00558812u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0055880Cu); } /* indirect call */
    }

loc_00558812: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00558819
 * Original: 0x00558819 - 0x00558850 (55 bytes, 23 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00558819(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00558819: ;
    edx = MEM32(ecx + 0x9C);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00558847; /* je: equal / zero */

loc_00558825: ;
    ecx = MEM32(ecx + 0x98);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_BE(_fa, _fb)) goto loc_00558843; /* jbe: below or equal (unsigned <=) */

loc_00558831: ;
    esi = edx;

loc_00558833: ;
    edi = MEM32(esi);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(esp + 0xC) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055884A; /* je: equal / zero */

loc_0055883B: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00558833; /* jb: below (unsigned <) */

loc_00558843: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00558845: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_00558847: ;
    esp += 8; return; /* ret 4 */

loc_0055884A: ;
    eax = MEM32(edx + eax * 8 + 4);
    goto loc_00558845;

}

/**
 * sub_00558850
 * Original: 0x00558850 - 0x0055885C (12 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00558850(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00558850: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(ecx + 0x9C)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x9C), eax (32-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    esp += 4; return; /* ret */

}

/**
 * sub_0055885C
 * Original: 0x0055885C - 0x00558A5E (514 bytes, 198 insns)
 * Category: game_input
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0055885C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055885C: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    eax = ZX8(MEM8(esi + 1));
    MEM32(ebp + -8) = eax;
    eax = ZX8(MEM8(esi));
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = ecx;
    PUSH32(esp, edi);
    MEM32(ebp + -12) = edx;
    if ((_fa == 0)) goto loc_005588BC; /* je: equal / zero */

loc_0055887C: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_005588B7; /* je: equal / zero */

loc_0055887F: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_005588C0; /* jne: not equal / not zero */

loc_00558882: ;
    SET_LO8(eax, MEM8(esi + 2));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(MEM8(edx + 0x34)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), MEM8(edx + 0x34) (8-bit) */
    ebx = edx + 0x64;
    if (CMP_BE(_fa, _fb)) goto loc_00558890; /* jbe: below or equal (unsigned <=) */

loc_0055888D: ;
    MEM8(edx + 0x34) = LO8(eax);

loc_00558890: ;
    SET_LO8(eax, MEM8(esi + 1));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 4 (8-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_005588C3; /* jbe: below or equal (unsigned <=) */

loc_00558897: ;
    _fb = (uint32_t)(4) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* sub source, before the write */
    SET_LO8(eax, LO8(eax) - 4);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    ecx = edx;
    MEM8(esi + 1) = LO8(eax);
    MEM8(esi) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x005588A7u); RECOMP_ABI_CALL(0x0055885Cu, sub_0055885C); /* call 0x0055885C */

loc_005588A7: ;
    _fb = (uint32_t)(4) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    MEM8(esi + 1) = MEM8(esi + 1) + 4;
    _fa = (uint32_t)(MEM8(esi + 1)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    MEM32(ebp + -8) = MEM32(ebp + -8) - 4;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = MEM32(ebp + -12);
    MEM8(esi) = 2;
    goto loc_005588C3;

loc_005588B7: ;
    ebx = edx + 0x32;
    goto loc_005588C3;

loc_005588BC: ;
    ebx = edx;
    goto loc_005588C3;

loc_005588C0: ;
    ebx = MEM32(ebp + 8);

loc_005588C3: ;
    SET_LO8(eax, MEM8(esi + 2));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(MEM8(ebx + 2)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), MEM8(ebx + 2) (8-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_005588CE; /* jbe: below or equal (unsigned <=) */

loc_005588CB: ;
    MEM8(ebx + 2) = LO8(eax);

loc_005588CE: ;
    eax = MEM32(ebp + -8);
    MEM32(ebp + 8) = MEM32(ebp + 8) & 0;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebp + -4) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_00558925; /* je: equal / zero */

loc_005588DC: ;
    edi = ebx + 3;

loc_005588DF: ;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 4 (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00558925; /* jae: above or equal (unsigned >=) */

loc_005588E5: ;
    SET_LO8(eax, MEM8(edi));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(MEM8(esi + 3)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), MEM8(esi + 3) (8-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_005588F4; /* jbe: below or equal (unsigned <=) */

loc_005588EC: ;
    MEM32(ebp + 8) = MEM32(ebp + 8) + 1;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0xA) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0xA;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0055891F;

loc_005588F4: ;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 4 (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00558911; /* jae: above or equal (unsigned >=) */

loc_005588FA: ;
    PUSH32(esp, 4);
    POP32(esp, eax);
    _fb = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(ebp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = ebx + 0x2B;

loc_00558903: ;
    SET_LO8(edx, MEM8(ecx + -10));
    MEM8(ecx) = LO8(edx);
    _fb = (uint32_t)(0xA) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0xA;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00558903; /* jne: not equal / not zero */

loc_0055890E: ;
    edx = MEM32(ebp + -12);

loc_00558911: ;
    SET_LO8(eax, MEM8(esi + 3));
    MEM32(ebp + 8) = MEM32(ebp + 8) + 1;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM8(edi) = LO8(eax);
    _fb = (uint32_t)(0xA) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0xA;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -4) = MEM32(ebp + -4) - 1;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_0055891F: ;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005588DF; /* jne: not equal / not zero */

loc_00558925: ;
    eax = MEM32(ebp + -8);
    MEM32(ebp + 8) = MEM32(ebp + 8) & 0;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebp + -4) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0055897C; /* je: equal / zero */

loc_00558933: ;
    edi = ebx + 4;

loc_00558936: ;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 4 (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0055897C; /* jae: above or equal (unsigned >=) */

loc_0055893C: ;
    SET_LO8(eax, MEM8(edi));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(MEM8(esi + 4)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), MEM8(esi + 4) (8-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0055894B; /* jbe: below or equal (unsigned <=) */

loc_00558943: ;
    MEM32(ebp + 8) = MEM32(ebp + 8) + 1;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0xA) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0xA;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00558976;

loc_0055894B: ;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 4 (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00558968; /* jae: above or equal (unsigned >=) */

loc_00558951: ;
    PUSH32(esp, 4);
    POP32(esp, eax);
    _fb = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(ebp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = ebx + 0x2C;

loc_0055895A: ;
    SET_LO8(edx, MEM8(ecx + -10));
    MEM8(ecx) = LO8(edx);
    _fb = (uint32_t)(0xA) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0xA;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0055895A; /* jne: not equal / not zero */

loc_00558965: ;
    edx = MEM32(ebp + -12);

loc_00558968: ;
    SET_LO8(eax, MEM8(esi + 4));
    MEM32(ebp + 8) = MEM32(ebp + 8) + 1;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM8(edi) = LO8(eax);
    _fb = (uint32_t)(0xA) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0xA;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -4) = MEM32(ebp + -4) - 1;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_00558976: ;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00558936; /* jne: not equal / not zero */

loc_0055897C: ;
    eax = MEM32(ebp + -8);
    MEM32(ebp + 8) = MEM32(ebp + 8) & 0;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebp + -4) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_005589D3; /* je: equal / zero */

loc_0055898A: ;
    edi = ebx + 5;

loc_0055898D: ;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 4 (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_005589D3; /* jae: above or equal (unsigned >=) */

loc_00558993: ;
    SET_LO8(eax, MEM8(edi));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(MEM8(esi + 5)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), MEM8(esi + 5) (8-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_005589A2; /* jbe: below or equal (unsigned <=) */

loc_0055899A: ;
    MEM32(ebp + 8) = MEM32(ebp + 8) + 1;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0xA) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0xA;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_005589CD;

loc_005589A2: ;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 4 (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_005589BF; /* jae: above or equal (unsigned >=) */

loc_005589A8: ;
    PUSH32(esp, 4);
    POP32(esp, eax);
    _fb = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(ebp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = ebx + 0x2D;

loc_005589B1: ;
    SET_LO8(edx, MEM8(ecx + -10));
    MEM8(ecx) = LO8(edx);
    _fb = (uint32_t)(0xA) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0xA;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_005589B1; /* jne: not equal / not zero */

loc_005589BC: ;
    edx = MEM32(ebp + -12);

loc_005589BF: ;
    SET_LO8(eax, MEM8(esi + 5));
    MEM32(ebp + 8) = MEM32(ebp + 8) + 1;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM8(edi) = LO8(eax);
    _fb = (uint32_t)(0xA) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0xA;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -4) = MEM32(ebp + -4) - 1;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_005589CD: ;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055898D; /* jne: not equal / not zero */

loc_005589D3: ;
    eax = MEM32(ebp + -8);
    MEM32(ebp + 8) = MEM32(ebp + 8) & 0;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebp + -4) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_00558A2A; /* je: equal / zero */

loc_005589E1: ;
    edi = ebx + 8;

loc_005589E4: ;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 4 (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00558A2A; /* jae: above or equal (unsigned >=) */

loc_005589EA: ;
    SET_LO8(eax, MEM8(edi));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(MEM8(esi + 8)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), MEM8(esi + 8) (8-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_005589F9; /* jbe: below or equal (unsigned <=) */

loc_005589F1: ;
    MEM32(ebp + 8) = MEM32(ebp + 8) + 1;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0xA) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0xA;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00558A24;

loc_005589F9: ;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 4 (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00558A16; /* jae: above or equal (unsigned >=) */

loc_005589FF: ;
    PUSH32(esp, 4);
    POP32(esp, eax);
    _fb = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(ebp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = ebx + 0x30;

loc_00558A08: ;
    SET_LO8(edx, MEM8(ecx + -10));
    MEM8(ecx) = LO8(edx);
    _fb = (uint32_t)(0xA) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0xA;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00558A08; /* jne: not equal / not zero */

loc_00558A13: ;
    edx = MEM32(ebp + -12);

loc_00558A16: ;
    SET_LO8(eax, MEM8(esi + 8));
    MEM32(ebp + 8) = MEM32(ebp + 8) + 1;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM8(edi) = LO8(eax);
    _fb = (uint32_t)(0xA) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0xA;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -4) = MEM32(ebp + -4) - 1;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_00558A24: ;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005589E4; /* jne: not equal / not zero */

loc_00558A2A: ;
    SET_LO8(eax, MEM8(esi + 6));
    ecx = edx + 0xB0;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(MEM8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), MEM8(ecx) (8-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00558A39; /* jbe: below or equal (unsigned <=) */

loc_00558A37: ;
    MEM8(ecx) = LO8(eax);

loc_00558A39: ;
    SET_LO8(eax, MEM8(esi + 7));
    ecx = edx + 0xB1;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(MEM8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), MEM8(ecx) (8-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00558A48; /* jbe: below or equal (unsigned <=) */

loc_00558A46: ;
    MEM8(ecx) = LO8(eax);

loc_00558A48: ;
    SET_LO8(eax, MEM8(esi + 9));
    POP32(esp, edi);
    ecx = edx + 0xB2;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(MEM8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), MEM8(ecx) (8-bit) */
    POP32(esp, esi);
    POP32(esp, ebx);
    if (CMP_BE(_fa, _fb)) goto loc_00558A5A; /* jbe: below or equal (unsigned <=) */

loc_00558A58: ;
    MEM8(ecx) = LO8(eax);

loc_00558A5A: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00558A5E
 * Original: 0x00558A5E - 0x00558BA7 (329 bytes, 96 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00558A5E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00558A5E: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM8(ecx + 0xA0) = 0x10;
    _fa = (uint32_t)(MEM8(0x558310)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x558310), LO8(eax) (8-bit) */
    PUSH32(esp, edi);
    MEM32(ebp + -4) = eax;
    MEM32(ebp + -8) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_00558A87; /* je: equal / zero */

loc_00558A80: ;
    MEM8(ecx + 0xA0) = 0x30;

loc_00558A87: ;
    SET_LO8(eax, MEM8(ecx + 2));
    SET_LO8(edx, MEM8(ecx + 0x34));
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(edx, LO8(edx) + LO8(eax));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(MEM8(ecx + 0x66)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(edx, LO8(edx) + MEM8(ecx + 0x66));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    SET_LO8(edx, LO8(edx) << 2);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    _fb = (uint32_t)(3) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(edx, LO8(edx) + 3);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(edx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    MEM8(ecx + 0xA0) = MEM8(ecx + 0xA0) + LO8(edx);
    _fa = (uint32_t)(MEM8(ecx + 0xA0)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(MEM8(ecx + 0xA1)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), MEM8(ecx + 0xA1) (8-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00558AAC; /* jbe: below or equal (unsigned <=) */

loc_00558AA6: ;
    MEM8(ecx + 0xA1) = LO8(eax);

loc_00558AAC: ;
    SET_LO8(eax, MEM8(ecx + 0x66));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(MEM8(ecx + 0xA1)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), MEM8(ecx + 0xA1) (8-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00558ABD; /* jbe: below or equal (unsigned <=) */

loc_00558AB7: ;
    MEM8(ecx + 0xA1) = LO8(eax);

loc_00558ABD: ;
    SET_LO8(eax, MEM8(ecx + 0x34));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(MEM8(ecx + 0xA1)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), MEM8(ecx + 0xA1) (8-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00558ACE; /* jbe: below or equal (unsigned <=) */

loc_00558AC8: ;
    MEM8(ecx + 0xA1) = LO8(eax);

loc_00558ACE: ;
    SET_LO8(eax, MEM8(ecx + 0xA1));
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    MEM8(ecx + 0xA0) = MEM8(ecx + 0xA0) + LO8(eax);
    _fa = (uint32_t)(MEM8(ecx + 0xA0)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    eax = ecx + 0x37;
    MEM32(ebp + -12) = 4;

loc_00558AE4: ;
    edi = ZX8(MEM8(eax + 0x32));
    edx = ZX8(MEM8(eax + -50));
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = ZX8(MEM8(eax));
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + esi;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = edi + edx;
    edi = ZX8(MEM8(eax + 0x30));
    edx = ZX8(MEM8(eax + -52));
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = ZX8(MEM8(eax + -2));
    _fb = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + MEM32(ebp + -4);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0xA) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xA;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + edx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = ZX8(MEM8(eax + -61));
    MEM32(ebp + -4) = edi;
    edi = ZX8(MEM8(eax + 0x27));
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = ZX8(MEM8(eax + -11));
    _fb = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + MEM32(ebp + -8);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + edx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = ZX8(MEM8(eax + -57));
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ecx + 0xA8) = MEM32(ecx + 0xA8) + edx;
    _fa = (uint32_t)(MEM32(ecx + 0xA8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = ZX8(MEM8(eax + 0x2B));
    edx = MEM32(ecx + 0xA8);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ebx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx + 0xA8) = edx;
    ebx = ZX8(MEM8(eax + -7));
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + edx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -12) = MEM32(ebp + -12) - 1;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(ebp + -8) = edi;
    MEM32(ecx + 0xA8) = ebx;
    if ((_fa != 0)) goto loc_00558AE4; /* jne: not equal / not zero */

loc_00558B52: ;
    _fa = (uint32_t)(MEM8(0x558310)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x558310), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00558B64; /* je: equal / zero */

loc_00558B5B: ;
    _fb = (uint32_t)(0xD) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xD;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0xD) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + -4) = MEM32(ebp + -4) + 0xD;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00558B6B;

loc_00558B64: ;
    _fb = (uint32_t)(5) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 5;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(5) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + -4) = MEM32(ebp + -4) + 5;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00558B6B: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) + 1;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = ecx + 0xB0;
    _fa = (uint32_t)(MEM8(edx)) & 0xFFu; _fb = (uint32_t)(0xD) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edx), 0xD (8-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00558B7C; /* jae: above or equal (unsigned >=) */

loc_00558B79: ;
    MEM8(edx) = 0xD;

loc_00558B7C: ;
    eax = MEM32(ebp + -4);
    edx = ZX8(MEM8(edx));
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = ZX8(MEM8(ecx + 0xB1));
    ebx = eax + esi * 2;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + esi;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + edi;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ebx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    MEM32(ecx + 0xAC) = edx;
    MEM32(ecx + 0xA4) = eax;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_00558BA7
 * Original: 0x00558BA7 - 0x00558C20 (121 bytes, 41 insns)
 * Category: game_input
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00558BA7(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00558BA7: ;
    PUSH32(esp, ebp);
    ebp = esp + -112;
    _fb = (uint32_t)(0xB4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xB4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + 0x7C));
    ecx = ebp + -68;
    PUSH32(esp, MEM32(ebp + 0x78));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00558BC2u); RECOMP_ABI_CALL(0x0055BF00u, sub_0055BF00); /* call 0x0055BF00 */

loc_00558BC2: ;
    eax = 0x5582F4;
    esi = 0x55830C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    edi = eax;
    if (CMP_AE(_fa, _fb)) goto loc_00558BE6; /* jae: above or equal (unsigned >=) */

loc_00558BD2: ;
    eax = MEM32(edi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00558BDF; /* je: equal / zero */

loc_00558BD8: ;
    ecx = ebp + -68;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00558BDFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00558BDCu); } /* indirect call */
    }

loc_00558BDF: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, esi (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00558BD2; /* jb: below (unsigned <) */

loc_00558BE6: ;
    ecx = ebp + -68;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00558BEEu); RECOMP_ABI_CALL(0x00558A5Eu, sub_00558A5E); /* call 0x00558A5E */

loc_00558BEE: ;
    eax = ebp + 0x60;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00558BF7u); RECOMP_ABI_CALL(0x00558DB9u, sub_00558DB9); /* call 0x00558DB9 */

loc_00558BF7: ;
    eax = ZX8(MEM8(ebp + 0x5D));
    PUSH32(esp, eax);
    eax = ZX8(MEM8(ebp + 0x5C));
    PUSH32(esp, eax);
    ecx = 0x762AF8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00558C0Bu); RECOMP_ABI_CALL(0x00558776u, sub_00558776); /* call 0x00558776 */

loc_00558C0B: ;
    MEM8(0x762BE0) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00558C17u); RECOMP_ABI_CALL(0x00558DC5u, sub_00558DC5); /* call 0x00558DC5 */

loc_00558C17: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0x70) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0x70;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00558C20
 * Original: 0x00558C20 - 0x00558C9D (125 bytes, 45 insns)
 * Category: game_input
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00558C20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00558C20: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    PUSH32(esp, 0x44425355);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x18;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    PUSH32(esp, 0x00558C34u); RECOMP_ABI_CALL(0x0055CB7Fu, sub_0055CB7F); /* call 0x0055CB7F */

loc_00558C34: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00558C98; /* je: equal / zero */

loc_00558C3A: ;
    ecx = edi;
    edx = ecx;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = esi;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = edx;
    ecx = ecx & 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if (!g_df) { memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx); edi += ecx; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM8(edi - _i) = LO8(eax); edi -= ecx; }
    ecx = 0; /* rep stosb */
    MEM8(0x762BE0) = MEM8(0x762BE0) + 1;
    _fa = (uint32_t)(MEM8(0x762BE0)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    eax = ZX8(MEM8(0x762BE0));
    ecx = 0x762AF8;
    MEM32(esi) = eax;
    PUSH32(esp, 0x00558C67u); RECOMP_ABI_CALL(0x0055AA28u, sub_0055AA28); /* call 0x0055AA28 */

loc_00558C67: ;
    PUSH32(esp, MEM32(esp + 0xC));
    ecx = esi + 4;
    MEM32(ecx) = eax;
    MEM8(eax) = 0;
    eax = MEM32(ecx);
    MEM8(eax + 2) = 0x80;
    eax = MEM32(ecx);
    MEM8(eax + 1) = 0x80;
    eax = MEM32(ecx);
    MEM8(eax + 3) = 0x80;
    eax = MEM32(ecx);
    MEM32(eax + 0xC) = esi;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(eax, MEM8(esi));
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x18;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00558C98u); RECOMP_ABI_CALL(0x00558E07u, sub_00558E07); /* call 0x00558E07 */

loc_00558C98: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00558C9D
 * Original: 0x00558C9D - 0x00558D09 (108 bytes, 29 insns)
 * Category: game_input
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00558C9D(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00558C9D: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM8(0x558310)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x558310), LO8(eax) (8-bit) */
    PUSH32(esp, edi);
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    MEM16(0x762CA2) = MEM16(0x762CA2) & 0;
    _fa = (uint32_t)(MEM16(0x762CA2)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    PUSH32(esp, 0x48425355);
    eax = eax * 8 + 6;
    MEM16(0x762CA0) = LO16(eax);
    eax = ZX16(LO16(eax));
    eax = eax << 6;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x00558CCFu); RECOMP_ABI_CALL(0x0055CB7Fu, sub_0055CB7F); /* call 0x0055CB7F */

loc_00558CCF: ;
    ecx = ZX16(MEM16(0x762CA0));
    ecx = ecx << 6;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = ecx;
    edi = eax;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(0x762CA4) = edi;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = edx;
    PUSH32(esp, 0);
    ecx = ecx & 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, 0x762C50);
    if (!g_df) { memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx); edi += ecx; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM8(edi - _i) = LO8(eax); edi -= ecx; }
    ecx = 0; /* rep stosb */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x561148); PUSH32(esp, 0x00558CFEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00558CF8u); } /* indirect call */
    }

loc_00558CFE: ;
    MEM32(0x762C98) = MEM32(0x762C98) & 0;
    _fa = (uint32_t)(MEM32(0x762C98)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00558D09
 * Original: 0x00558D09 - 0x00558DB9 (176 bytes, 61 insns)
 * Category: game_input
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00558D09(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00558D09: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    ebx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    eax = esi + 0x478;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x561148); PUSH32(esp, 0x00558D24u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00558D1Eu); } /* indirect call */
    }

loc_00558D24: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0x55E113);
    eax = esi + 0x4A0;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x5610E4); PUSH32(esp, 0x00558D37u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00558D31u); } /* indirect call */
    }

loc_00558D37: ;
    MEM8(esi + 0x460) = 4;
    eax = MEM32(ebx + 0x50);
    MEM32(ebp + -8) = eax;
    MEM16(ebp + -8) = MEM16(ebp + -8) & 0;
    _fa = (uint32_t)(MEM16(ebp + -8)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    eax = MEM32(ebp + -8);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ebx + 0x50) = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = ebp + -4;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM8(esi + 0x460)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x460), LO8(edx) (8-bit) */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    if (CMP_BE(_fa, _fb)) goto loc_00558D93; /* jbe: below or equal (unsigned <=) */

loc_00558D62: ;
    eax = ebx + 0x54;

loc_00558D65: ;
    edi = MEM32(eax);
    MEM32(ebp + -8) = edi;
    _fa = (uint32_t)(MEM8(ebp + -8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + -8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00558D78; /* je: equal / zero */

loc_00558D70: ;
    MEM16(ebp + -2) = MEM16(ebp + -2) | LO16(ecx);
    _fa = (uint32_t)(MEM16(ebp + -2)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* or result */
    MEM16(ebp + -4) = MEM16(ebp + -4) | LO16(ecx);
    _fa = (uint32_t)(MEM16(ebp + -4)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* or result */

loc_00558D78: ;
    MEM16(ebp + -8) = MEM16(ebp + -8) & 0;
    _fa = (uint32_t)(MEM16(ebp + -8)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    edi = MEM32(ebp + -8);
    MEM32(eax) = edi;
    edi = ZX8(MEM8(esi + 0x460));
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = ecx << 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, edi (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00558D65; /* jb: below (unsigned <) */

loc_00558D93: ;
    MEM32(ebx + 0x10) = 0x40;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x5610F0); PUSH32(esp, 0x00558DA0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00558D9Au); } /* indirect call */
    }

loc_00558DA0: ;
    edx = ebp + -4;
    ecx = esi;
    SET_LO8(ebx, LO8(eax));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00558DACu); RECOMP_ABI_CALL(0x0055E01Au, sub_0055E01A); /* call 0x0055E01A */

loc_00558DAC: ;
    SET_LO8(ecx, LO8(ebx));
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x5610E8); PUSH32(esp, 0x00558DB4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00558DAEu); } /* indirect call */
    }

loc_00558DB4: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_00558DB9
 * Original: 0x00558DB9 - 0x00558DC5 (12 bytes, 3 insns)
 * Category: game_input
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00558DB9(void)
{

loc_00558DB9: ;
    ecx = MEM32(esp + 4);
    PUSH32(esp, 0x00558DC2u); RECOMP_ABI_CALL(0x0055918Du, sub_0055918D); /* call 0x0055918D */

loc_00558DC2: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00558DC5
 * Original: 0x00558DC5 - 0x00558E07 (66 bytes, 20 insns)
 * Category: game_input
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00558DC5(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00558DC5: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x561128);
    _fa = (uint32_t)(MEM8(eax + 5)) & 0xFFu; _fb = (uint32_t)(0xA1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 5), 0xA1 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00558E05; /* je: equal / zero */

loc_00558DD6: ;
    eax = ebp + -4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    MEM8(ebp + -24) = 3;
    MEM32(ebp + -16) = 0x1000;
    MEM32(ebp + -20) = 0xFED00000u;
    { uint32_t _icall_target = MEM32(0x561168); PUSH32(esp, 0x00558DF4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00558DEEu); } /* indirect call */
    }

loc_00558DF4: ;
    MEM32(ebp + -12) = eax;
    PUSH32(esp, 0x4E0);
    eax = ebp + -40;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00558E05u); RECOMP_ABI_CALL(0x00558C20u, sub_00558C20); /* call 0x00558C20 */

loc_00558E05: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_00558E07
 * Original: 0x00558E07 - 0x00558F82 (379 bytes, 114 insns)
 * Category: game_input
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00558E07(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00558E07: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    MEM8(ebp + 0xC) = MEM8(ebp + 0xC) - 1;
    _fa = (uint32_t)(MEM8(ebp + 0xC)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x7Fu); /* dec result/SF/OF; CF unchanged */
    eax = MEM32(ebp + 0x10);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    PUSH32(esp, edi);
    edi = ZX8(MEM8(ebp + 0xC));
    MEM32(esi + 0x45C) = edi;
    ecx = MEM32(eax + 0x18);
    MEM32(esi + 4) = ecx;
    eax = MEM32(eax + 0x14);
    PUSH32(esp, esi);
    MEM32(ebp + -4) = edi;
    MEM32(esi) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00558E35u); RECOMP_ABI_CALL(0x005593B3u, sub_005593B3); /* call 0x005593B3 */

loc_00558E35: ;
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00558E3Bu); RECOMP_ABI_CALL(0x005593BEu, sub_005593BE); /* call 0x005593BE */

loc_00558E3B: ;
    ebx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0x56024E);
    eax = esi + 0x440;
    MEM32(ebx + 0x48) = 0x1200;
    MEM32(ebx + 0x4C) = 0;
    MEM32(ebx + 0x50) = 0x80000000u;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x5610E4); PUSH32(esp, 0x00558E65u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00558E5Fu); } /* indirect call */
    }

loc_00558E65: ;
    eax = MEM32(edi * 4 + 0x87C944);
    MEM32(esi + 8) = eax;
    eax = MEM32(ebx + 8);
    MEM32(ebp + 8) = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x5610F0); PUSH32(esp, 0x00558E7Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00558E75u); } /* indirect call */
    }

loc_00558E7B: ;
    MEM8(ebp + 0xF) = LO8(eax);
    eax = MEM32(ebp + 8);
    eax = eax | 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(ebx + 8) = eax;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xA);
    { uint32_t _icall_target = MEM32(0x561178); PUSH32(esp, 0x00558E8Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00558E89u); } /* indirect call */
    }

loc_00558E8F: ;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00558E96u); RECOMP_ABI_CALL(0x00559352u, sub_00559352); /* call 0x00559352 */

loc_00558E96: ;
    MEM32(ebx + 4) = 0xBE;
    eax = MEM32(ebx + 0x34);
    eax = eax & 0xA772EED8u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax | 0x27722ED8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx = eax;
    ecx = ~ecx;
    ecx = ecx ^ eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = ecx & 0x7FFFFFFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = ~eax;
    ecx = ecx ^ eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ebx + 0x34) = ecx;
    eax = MEM32(0x561128);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00558F0A; /* jne: not equal / not zero */

loc_00558EC7: ;
    MEM32(ebp + 8) = 2;

loc_00558ECE: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00558ED3u); RECOMP_ABI_CALL(0x0055E1FDu, sub_0055E1FD); /* call 0x0055E1FD */

loc_00558ED3: ;
    edx = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0xC);
    POP32(esp, ecx);
    edi = edx;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    eax = edx;
    _fb = (uint32_t)(MEM32(0x87C940)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(0x87C940);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = esi;
    MEM32(edx + 0x14) = eax;
    eax = MEM32(edx);
    eax = eax & 0xF808FFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax | 0x80000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM8(edx + 0x11) = 0;
    MEM32(edx) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00558F02u); RECOMP_ABI_CALL(0x0055F70Bu, sub_0055F70B); /* call 0x0055F70B */

loc_00558F02: ;
    MEM32(ebp + 8) = MEM32(ebp + 8) - 1;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00558ECE; /* jne: not equal / not zero */

loc_00558F07: ;
    edi = MEM32(ebp + -4);

loc_00558F0A: ;
    SET_LO8(ecx, MEM8(ebp + 0xF));
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x5610E8); PUSH32(esp, 0x00558F13u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00558F0Du); } /* indirect call */
    }

loc_00558F13: ;
    edi = (uint32_t)((int32_t)edi * (int32_t)0x70);
    eax = MEM32(ebp + 0x10);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(ecx, MEM8(eax + 0x24));
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    edi = edi + 0x87C980;
    PUSH32(esp, ecx);
    PUSH32(esp, MEM32(eax + 0x1C));
    PUSH32(esp, esi);
    PUSH32(esp, 0x55FB7A);
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(0x56116C); PUSH32(esp, 0x00558F39u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00558F33u); } /* indirect call */
    }

loc_00558F39: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(0x561164); PUSH32(esp, 0x00558F40u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00558F3Au); } /* indirect call */
    }

loc_00558F40: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = esi + 0x4C0;
    eax = esi + 0x4C8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    MEM32(ecx) = 0x55E527;
    MEM32(esi + 0x4C4) = edx;
    MEM32(esi + 0x4CC) = eax;
    MEM32(eax) = eax;
    { uint32_t _icall_target = MEM32(0x56112C); PUSH32(esp, 0x00558F6Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00558F65u); } /* indirect call */
    }

loc_00558F6B: ;
    ecx = esi;
    MEM32(ebx + 0x10) = 0x80000033u;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00558F79u); RECOMP_ABI_CALL(0x00558D09u, sub_00558D09); /* call 0x00558D09 */

loc_00558F79: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00558F82
 * Original: 0x00558F82 - 0x0055918D (523 bytes, 165 insns)
 * Category: game_input
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00558F82(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00558F82: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x60;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(0x55855C)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x55855C), esi (32-bit) */
    MEM32(ebp + -8) = esi;
    MEM32(ebp + -4) = esi;
    MEM32(ebp + -12) = esi;
    if (CMP_NE(_fa, _fb)) goto loc_00559188; /* jne: not equal / not zero */

loc_00558FA0: ;
    ecx = MEM32(ebp + 8);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    MEM32(0x55855C) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00558FB4u); RECOMP_ABI_CALL(0x00558850u, sub_00558850); /* call 0x00558850 */

loc_00558FB4: ;
    MEM32(ebp + -16) = eax;
    eax = 0x5582E4;
    ebx = 0x5582EC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    edi = eax;
    if (CMP_AE(_fa, _fb)) goto loc_0055903B; /* jae: above or equal (unsigned >=) */

loc_00558FC7: ;
    eax = MEM32(edi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00559014; /* je: equal / zero */

loc_00558FCD: ;
    eax = MEM32(eax + 4);
    MEM32(ebp + esi * 4 + -96) = eax;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -16), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00558FE9; /* jne: not equal / not zero */

loc_00558FDB: ;
    ecx = MEM32(ebp + 8);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00558FE4u); RECOMP_ABI_CALL(0x00558819u, sub_00558819); /* call 0x00558819 */

loc_00558FE4: ;
    ecx = MEM32(edi);
    MEM8(ecx + 1) = LO8(eax);

loc_00558FE9: ;
    eax = MEM32(edi);
    eax = MEM32(eax + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00558FF4; /* je: equal / zero */

loc_00558FF2: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = eax; PUSH32(esp, 0x00558FF4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00558FF2u); } /* indirect call */
    }

loc_00558FF4: ;
    eax = MEM32(edi);
    ecx = MEM32(eax + 0x28);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 4 (8-bit) */
    eax = ZX8(MEM8(eax + 1));
    if (TEST_Z(_fa, _fb)) goto loc_00559007; /* je: equal / zero */

loc_00559002: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + -4) = MEM32(ebp + -4) + eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00559014;

loc_00559007: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 8 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00559011; /* je: equal / zero */

loc_0055900C: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + -12) = MEM32(ebp + -12) + eax;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00559014;

loc_00559011: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + -8) = MEM32(ebp + -8) + eax;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00559014: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00558FC7; /* jb: below (unsigned <) */

loc_0055901B: ;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -12), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055902C; /* je: equal / zero */

loc_00559021: ;
    MEM16(0x762CB0) = 0xC;
    goto loc_00559044;

loc_0055902C: ;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    MEM16(0x762CB0) = 8;
    if (CMP_NE(_fa, _fb)) goto loc_00559044; /* jne: not equal / not zero */

loc_0055903B: ;
    MEM16(0x762CB0) = 4;

loc_00559044: ;
    PUSH32(esp, 4);
    POP32(esp, eax);
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), eax (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0055904F; /* jbe: below or equal (unsigned <=) */

loc_0055904C: ;
    MEM32(ebp + -8) = eax;

loc_0055904F: ;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), eax (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00559057; /* jbe: below or equal (unsigned <=) */

loc_00559054: ;
    MEM32(ebp + -4) = eax;

loc_00559057: ;
    ecx = MEM32(ebp + -12);
    eax = MEM32(ebp + -4);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 8);
    POP32(esp, ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(ebp + -16) = eax;
    if (CMP_BE(_fa, _fb)) goto loc_0055906C; /* jbe: below or equal (unsigned <=) */

loc_00559069: ;
    MEM32(ebp + -16) = ecx;

loc_0055906C: ;
    eax = MEM32(ebp + -16);
    _fb = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(ebp + -8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = ZX16(MEM16(0x762CB0));
    MEM32(ebp + -16) = eax;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x16);
    eax = (uint32_t)((int32_t)eax * (int32_t)0xAB);
    ebx = esi;
    ebx = ebx << 2;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + ebx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x5F444958);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00559099u); RECOMP_ABI_CALL(0x0055CB7Fu, sub_0055CB7F); /* call 0x0055CB7F */

loc_00559099: ;
    ecx = ebx;
    edx = ecx;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(0x558530) = esi;
    MEM32(0x558548) = esi;
    MEM32(0x558534) = eax;
    MEM32(0x55854C) = eax;
    edi = eax;
    esi = ebp + -96;
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
    edx = MEM32(ebp + -16);
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
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, edi (32-bit) */
    MEM32(0x762CB8) = ecx;
    if (CMP_BE(_fa, _fb)) goto loc_005590ED; /* jbe: below or equal (unsigned <=) */

loc_005590D7: ;
    MEM32(eax + 0xA7) = ecx;
    ecx = eax;
    _fb = (uint32_t)(0xAB) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xAB;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_005590D7; /* jne: not equal / not zero */

loc_005590E7: ;
    MEM32(0x762CB8) = ecx;

loc_005590ED: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM16(0x762CB0)) & 0xFFFFu; _fb = (uint32_t)(LO16(edi)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(0x762CB0), LO16(edi) (16-bit) */
    MEM32(0x762CB4) = eax;
    MEM16(0x762CB2) = LO16(edi);
    if (CMP_BE(_fa, _fb)) goto loc_00559121; /* jbe: below or equal (unsigned <=) */

loc_00559104: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00559106: ;
    eax = MEM32(0x762CB4);
    eax = ecx + eax + 4;
    MEM8(eax) = MEM8(eax) & 0xFE;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    eax = ZX16(MEM16(0x762CB0));
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x16) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x16;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00559106; /* jb: below (unsigned <) */

loc_00559121: ;
    eax = MEM32(ebp + -8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    esi = 0x558550;
    if (CMP_EQ(_fa, _fb)) goto loc_00559142; /* je: equal / zero */

loc_0055912D: ;
    ecx = MEM32(ebp + 8);
    PUSH32(esp, esi);
    MEM8(0x558550) = 0;
    MEM8(0x558551) = LO8(eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00559142u); RECOMP_ABI_CALL(0x0055885Cu, sub_0055885C); /* call 0x0055885C */

loc_00559142: ;
    eax = MEM32(ebp + -12);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055915E; /* je: equal / zero */

loc_00559149: ;
    ecx = MEM32(ebp + 8);
    PUSH32(esp, esi);
    MEM8(0x558550) = 2;
    MEM8(0x558551) = LO8(eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055915Eu); RECOMP_ABI_CALL(0x0055885Cu, sub_0055885C); /* call 0x0055885C */

loc_0055915E: ;
    eax = MEM32(ebp + -4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055917A; /* je: equal / zero */

loc_00559165: ;
    ecx = MEM32(ebp + 8);
    PUSH32(esp, esi);
    MEM8(0x558550) = 1;
    MEM8(0x558551) = LO8(eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055917Au); RECOMP_ABI_CALL(0x0055885Cu, sub_0055885C); /* call 0x0055885C */

loc_0055917A: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, 0x762D08);
    { uint32_t _icall_target = MEM32(0x561148); PUSH32(esp, 0x00559186u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00559180u); } /* indirect call */
    }

loc_00559186: ;
    POP32(esp, edi);
    POP32(esp, ebx);

loc_00559188: ;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0055918D
 * Original: 0x0055918D - 0x00559352 (453 bytes, 142 insns)
 * Category: game_input
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0055918D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055918D: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = ecx;
    ecx = ZX8(MEM8(ebx + 0xE));
    eax = MEM32(ebx + 4);
    ecx = ecx << 6;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x30;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx), eax (32-bit) */
    PUSH32(esp, esi);
    MEM32(ebp + -8) = ecx;
    if (CMP_AE(_fa, _fb)) goto loc_005591AD; /* jae: above or equal (unsigned >=) */

loc_005591AB: ;
    MEM32(ebx) = eax;

loc_005591AD: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx);
    ecx = MEM32(ebx + 8);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = ecx << 5;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(ebx);
    ecx = ecx + ecx * 2;
    ecx = ecx << 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = eax;
    eax = ecx + 0xFFF;
    eax = eax >> 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = eax;
    edx = edx << 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = eax;
    ecx = ecx << 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_005591E1; /* jae: above or equal (unsigned >=) */

loc_005591E0: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_005591E1: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    eax = eax << 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edi = eax;
    PUSH32(esp, edi);
    MEM32(ebp + -4) = edi;
    { uint32_t _icall_target = MEM32(0x56110C); PUSH32(esp, 0x005591F1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x005591EBu); } /* indirect call */
    }

loc_005591F1: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    esi = eax;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(0x5611D0); PUSH32(esp, 0x005591FDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x005591F7u); } /* indirect call */
    }

loc_005591FD: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(0x5611D4); PUSH32(esp, 0x00559204u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x005591FEu); } /* indirect call */
    }

loc_00559204: ;
    ecx = esi;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(0x87C940) = ecx;
    ecx = edi;
    edx = ecx;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = esi;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = edx;
    ecx = ecx & 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if (!g_df) { memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx); edi += ecx; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM8(edi - _i) = LO8(eax); edi -= ecx; }
    ecx = 0; /* rep stosb */
    eax = edx;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(0x87C944) = esi;
    MEM32(0x87C948) = edx;
    edi = ZX8(MEM8(ebx + 0xE));
    ecx = esi + eax;
    _fb = (uint32_t)(0x100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x100;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(0x87C96C) = edi;
    MEM32(0x87C968) = edx;
    _fa = (uint32_t)(MEM32(ebx + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 4), edx (32-bit) */
    MEM32(ebp + -12) = ecx;
    if (CMP_BE(_fa, _fb)) goto loc_00559293; /* jbe: below or equal (unsigned <=) */

loc_00559255: ;
    edi = MEM32(0x87C968);
    MEM32(esi) = edi;
    edi = MEM32(0x87C948);
    MEM32(0x87C968) = esi;
    _fb = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + MEM32(ebp + -8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x18) = edi;
    MEM32(0x87C948) = esi;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x30;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebx + 4) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00559255; /* jb: below (unsigned <) */

loc_0055927E: ;
    goto loc_00559293;

loc_00559280: ;
    edi = MEM32(0x87C948);
    MEM32(esi + 0x18) = edi;
    MEM32(0x87C948) = esi;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x30;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00559293: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebx) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00559280; /* jb: below (unsigned <) */

loc_00559297: ;
    edi = esi + 0x20;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ecx (32-bit) */
    MEM32(ebp + -4) = edx;
    MEM32(0x87C94C) = edx;
    MEM32(0x87C950) = esi;
    if (CMP_A(_fa, _fb)) goto loc_005592D1; /* ja: above (unsigned >) */

loc_005592AD: ;
    eax = esi;
    _fb = (uint32_t)(MEM32(0x87C940)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(0x87C940);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    MEM32(ebp + -8) = esi;
    MEM32(edi + -16) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x005592C1u); RECOMP_ABI_CALL(0x0055F6EEu, sub_0055F6EE); /* call 0x0055F6EE */

loc_005592C1: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x20;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x20;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -4) = MEM32(ebp + -4) + 1;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(ebp + -12) (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_005592AD; /* jbe: below or equal (unsigned <=) */

loc_005592CF: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_005592D1: ;
    eax = MEM32(ebp + -8);
    ecx = MEM32(ebp + -4);
    MEM32(0x87C954) = eax;
    MEM32(0x87C958) = edx;
    MEM32(0x87C95C) = 0x3E8;
    SET_LO16(eax, ZX8(MEM8(ebx + 0xC)));
    MEM16(0x87C960) = LO16(eax);
    SET_LO16(eax, ZX8(MEM8(ebx + 0xD)));
    MEM16(0x87C964) = LO16(eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(ebx + 8) (32-bit) */
    POP32(esp, edi);
    if (CMP_BE(_fa, _fb)) goto loc_0055933A; /* jbe: below or equal (unsigned <=) */

loc_00559308: ;
    _fb = (uint32_t)(MEM8(ebx + 8)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* sub source, before the write */
    SET_LO8(ecx, LO8(ecx) - MEM8(ebx + 8));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sub result */
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(LO16(edx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), LO16(edx) (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00559323; /* je: equal / zero */

loc_00559310: ;
    SET_LO8(edx, LO8(ecx));
    SET_LO8(edx, LO8(edx) >> 1);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    SET_LO16(esi, ZX8(LO8(edx)));
    _fb = (uint32_t)(LO16(esi)) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* add source, before the write */
    SET_LO16(eax, LO16(eax) + LO16(esi));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* add result */
    MEM16(0x87C964) = LO16(eax);
    _fb = (uint32_t)(LO8(edx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* sub source, before the write */
    SET_LO8(ecx, LO8(ecx) - LO8(edx));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sub result */

loc_00559323: ;
    SET_LO16(eax, ZX8(LO8(ecx)));
    _fb = (uint32_t)(LO16(eax)) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* add source, before the write */
    MEM16(0x87C960) = MEM16(0x87C960) + LO16(eax);
    _fa = (uint32_t)(MEM16(0x87C960)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* add result */
    eax = MEM32(ebp + -4);
    MEM32(ebx + 8) = eax;
    SET_LO16(eax, MEM16(0x87C964));

loc_0055933A: ;
    SET_LO16(ecx, MEM16(0x87C960));
    POP32(esp, esi);
    MEM16(0x87C962) = LO16(ecx);
    MEM16(0x87C966) = LO16(eax);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_00559352
 * Original: 0x00559352 - 0x005593B3 (97 bytes, 32 insns)
 * Category: game_input
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00559352(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00559352: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 8);
    _fb = (uint32_t)(MEM32(0x87C940)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(0x87C940);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(esi);
    MEM32(ecx + 0x18) = eax;
    ecx = MEM32(esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ecx + 0x1C) = eax;
    ecx = MEM32(esi);
    MEM32(ecx + 0x20) = eax;
    ecx = MEM32(esi);
    MEM32(ecx + 0x24) = eax;
    ecx = MEM32(esi);
    MEM32(ecx + 0x28) = eax;
    ecx = MEM32(esi);
    MEM32(ecx + 0x2C) = eax;
    ecx = MEM32(esi);
    MEM32(ecx + 0x30) = eax;
    PUSH32(esp, 1);
    MEM16(esi + 0x416) = 0x2772;
    eax = MEM32(esi);
    PUSH32(esp, 3);
    MEM32(eax + 0x40) = 0x2A29;
    PUSH32(esp, 8);
    MEM16(esi + 0x414) = 0x236F;
    PUSH32(esp, 0x005593A9u); RECOMP_ABI_CALL(0x0055BF6Eu, sub_0055BF6E); /* call 0x0055BF6E */

loc_005593A9: ;
    ecx = MEM32(esi);
    eax = ZX16(LO16(eax));
    MEM32(ecx + 0x44) = eax;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_005593B3
 * Original: 0x005593B3 - 0x005593BE (11 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005593B3(void)
{

loc_005593B3: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax);
    eax = MEM32(eax);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_005593BE
 * Original: 0x005593BE - 0x00559420 (98 bytes, 37 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_005593BE(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005593BE: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    edx = MEM32(ebp + 8);
    eax = MEM32(edx);
    ecx = MEM32(eax + 4);
    PUSH32(esp, esi);
    esi = 0x100;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_005593E7; /* je: equal / zero */

loc_005593D5: ;
    ecx = MEM32(eax + 8);
    ecx = ecx | 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(eax + 8) = ecx;
    edx = MEM32(edx);

loc_005593E0: ;
    _fa = (uint32_t)(MEM32(edx + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(edx + 4), esi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_005593E0; /* jne: not equal / not zero */

loc_005593E5: ;
    goto loc_0055941B;

loc_005593E7: ;
    edx = ecx;
    edx = edx >> 6;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx & 3;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if ((_fa == 0)) goto loc_0055941B; /* je: equal / zero */

loc_005593F1: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055941B; /* je: equal / zero */

loc_005593F6: ;
    ecx = ecx & 0xFFFFFF7Fu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx | 0x40;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(eax + 4) = ecx;
    MEM32(ebp + -4) = MEM32(ebp + -4) | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = ebp + -8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    MEM32(ebp + -8) = 0xFFFCF2C0u;
    { uint32_t _icall_target = MEM32(0x561104); PUSH32(esp, 0x0055941Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00559415u); } /* indirect call */
    }

loc_0055941B: ;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00559420
 * Original: 0x00559420 - 0x0055943E (30 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00559420(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00559420: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(ecx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055942E; /* je: equal / zero */

loc_0055942B: ;
    MEM32(eax) = MEM32(eax) & 0;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_0055942E: ;
    eax = MEM32(ecx + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055943B; /* je: equal / zero */

loc_00559435: ;
    MEM32(eax) = 0x8000000Au;

loc_0055943B: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0055943E
 * Original: 0x0055943E - 0x00559482 (68 bytes, 28 insns)
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0055943E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055943E: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 8);
    ecx = MEM32(eax + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00559450; /* je: equal / zero */

loc_0055944B: ;
    edx = MEM32(ebp + 0xC);
    MEM32(ecx) = edx;

loc_00559450: ;
    ecx = MEM32(eax + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    edx = MEM32(ebp + 0x18);
    if (CMP_EQ(_fa, _fb)) goto loc_0055945C; /* je: equal / zero */

loc_0055945A: ;
    MEM32(ecx) = edx;

loc_0055945C: ;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055946E; /* je: equal / zero */

loc_00559462: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, MEM32(eax + 0x10));
    PUSH32(esp, MEM32(ebp + 0x14));
    { uint32_t _icall_target = MEM32(ebp + 0x10); PUSH32(esp, 0x0055946Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00559469u); } /* indirect call */
    }

loc_0055946C: ;
    goto loc_0055947E;

loc_0055946E: ;
    eax = MEM32(eax + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055947E; /* je: equal / zero */

loc_00559475: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x5610FC); PUSH32(esp, 0x0055947Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00559478u); } /* indirect call */
    }

loc_0055947E: ;
    POP32(esp, ebp);
    esp += 24; return; /* ret 20 */

}

/**
 * sub_00559482
 * Original: 0x00559482 - 0x00559569 (231 bytes, 84 insns)
 * Category: game_input
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00559482(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00559482: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00559492u); RECOMP_ABI_CALL(0x0055B9DFu, sub_0055B9DF); /* call 0x0055B9DF */

loc_00559492: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x10 (32-bit) */
    _cf = (int)(_fa < _fb);
    ecx = ebx;
    if (CMP_AE(_fa, _fb)) goto loc_00559558; /* jae: above or equal (unsigned >=) */

loc_0055949F: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x005594A4u); RECOMP_ABI_CALL(0x0055B963u, sub_0055B963); /* call 0x0055B963 */

loc_005594A4: ;
    SET_LO8(eax, MEM8(eax + 6));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_005594B1; /* jne: not equal / not zero */

loc_005594AB: ;
    _cf = 0; /* logical op clears CF */
    MEM32(ebp + 8) = MEM32(ebp + 8) & 0;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    goto loc_005594C0;

loc_005594B1: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00559556; /* jne: not equal / not zero */

loc_005594B9: ;
    MEM32(ebp + 8) = 1;

loc_005594C0: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x005594CDu); RECOMP_ABI_CALL(0x0055B969u, sub_0055B969); /* call 0x0055B969 */

loc_005594CD: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_005594F0; /* je: equal / zero */

loc_005594D3: ;
    SET_LO8(ecx, MEM8(ebp + 8));
    esi = (uint32_t)((int32_t)esi * (int32_t)0x1C);
    _fb = (uint32_t)(0x75F148) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(0x75F148)) >> 32) & 1);
    esi = esi + 0x75F148;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO8(eax, MEM8(esi + 0xB));
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) & 0x6F);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    if (7) _cf = (int)(((LO8(ecx)) >> (8 - (7))) & 1);
    SET_LO8(ecx, LO8(ecx) << 7);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) | LO8(ecx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) | 0x10);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    MEM8(esi + 0xB) = LO8(eax);
    goto loc_00559516;

loc_005594F0: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x005594FDu); RECOMP_ABI_CALL(0x0055B969u, sub_0055B969); /* call 0x0055B969 */

loc_005594FD: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00559556; /* je: equal / zero */

loc_00559503: ;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00559556; /* jne: not equal / not zero */

loc_00559509: ;
    esi = (uint32_t)((int32_t)esi * (int32_t)0x1C);
    _fb = (uint32_t)(0x75F1B8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(0x75F1B8)) >> 32) & 1);
    esi = esi + 0x75F1B8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = 0; /* logical op clears CF */
    MEM8(esi + 0xB) = MEM8(esi + 0xB) & 0xEF;
    _fa = (uint32_t)(MEM8(esi + 0xB)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */

loc_00559516: ;
    _cf = 0; /* logical op clears CF */
    MEM8(esi + 0xB) = MEM8(esi + 0xB) | 1;
    _fa = (uint32_t)(MEM8(esi + 0xB)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    PUSH32(esp, esi);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00559522u); RECOMP_ABI_CALL(0x0055B86Eu, sub_0055B86E); /* call 0x0055B86E */

loc_00559522: ;
    _fa = (uint32_t)(MEM8(esi + 0xB)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0xB), 0x10 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(esi + 4) = ebx;
    SET_LO8(eax, MEM8(edi + 2));
    MEM8(esi + 0xA) = LO8(eax);
    SET_LO16(eax, MEM16(edi + 4));
    MEM16(esi + 8) = LO16(eax);
    if (TEST_Z(_fa, _fb)) goto loc_00559545; /* je: equal / zero */

loc_00559539: ;
    eax = MEM32(ebp + 8);
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    eax = eax & 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    goto loc_00559548;

loc_00559545: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00559548: ;
    PUSH32(esp, eax);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00559550u); RECOMP_ABI_CALL(0x0055B87Fu, sub_0055B87F); /* call 0x0055B87F */

loc_00559550: ;
    PUSH32(esp, 0);
    ecx = ebx;
    goto loc_0055955D;

loc_00559556: ;
    ecx = ebx;

loc_00559558: ;
    PUSH32(esp, 0x80000400u);

loc_0055955D: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00559562u); RECOMP_ABI_CALL(0x0055B10Cu, sub_0055B10C); /* call 0x0055B10C */

loc_00559562: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00559569
 * Original: 0x00559569 - 0x00559585 (28 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00559569(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00559569: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 8);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + 8) = eax;
    eax = 1;
    ecx = MEM32(ebp + 8);
    { uint32_t _add = eax;
      uint32_t _old = RECOMP_ATOMIC_ADD32(XBOX_PTR(ecx), _add);
      _fa = _old + _add; _fas = (int32_t)_fa; /* xadd result */
      eax = _old; }  /* xadd */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00559585
 * Original: 0x00559585 - 0x005595D0 (75 bytes, 22 insns)
 * CC: cdecl, 2 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00559585(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00559585: ;
    ecx = MEM32(esp + 4);
    _fa = (uint32_t)(MEM8(ecx + 0xB)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ecx + 0xB), 0x10 (8-bit) */
    eax = MEM32(esp + 8);
    if (TEST_Z(_fa, _fb)) goto loc_005595AE; /* je: equal / zero */

loc_00559593: ;
    MEM32(eax) = 9;
    ecx = MEM32(ecx + 0x18);
    ecx = (uint32_t)(int32_t)SMEM8(ecx + 0x14);
    ecx = ecx + ecx * 4;
    ecx = ecx << 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(eax + 4) = MEM32(eax + 4) & 0;
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(eax + 8) = ecx;
    goto loc_005595C7;

loc_005595AE: ;
    MEM32(eax) = 5;
    ecx = MEM32(ecx + 0x18);
    ecx = (uint32_t)(int32_t)SMEM8(ecx + 0x14);
    ecx = ecx + ecx * 4;
    ecx = ecx << 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(eax + 8) = MEM32(eax + 8) & 0;
    _fa = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(eax + 4) = ecx;

loc_005595C7: ;
    MEM32(eax + 0xC) = MEM32(eax + 0xC) & 0;
    _fa = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_005595D0
 * Original: 0x005595D0 - 0x005595D8 (8 bytes, 2 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005595D0(void)
{

loc_005595D0: ;
    eax = 0x80004001u;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_005595D8
 * Original: 0x005595D8 - 0x005595DD (5 bytes, 2 insns)
 * CC: cdecl, 1 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_005595D8(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005595D8: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_005595DD
 * Original: 0x005595DD - 0x00559620 (67 bytes, 24 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005595DD(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005595DD: ;
    PUSH32(esp, ebx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x5610F0); PUSH32(esp, 0x005595E4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x005595DEu); } /* indirect call */
    }

loc_005595E4: ;
    edx = MEM32(esp + 8);
    SET_LO8(ebx, MEM8(edx + 0xB));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 0x20 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0055960B; /* je: equal / zero */

loc_005595F0: ;
    ecx = MEM32(edx + 0x18);
    _fa = (uint32_t)(MEM32(ecx + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0xC), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055960B; /* je: equal / zero */

loc_005595F9: ;
    edx = MEM32(esp + 0xC);
    PUSH32(esp, 0);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 0x10 (8-bit) */
    POP32(esp, ecx);
    SET_LO8(ecx, (TEST_NZ(_fa, _fb)) ? 1 : 0); /* setne */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(edx) = ecx;
    goto loc_00559612;

loc_0055960B: ;
    ecx = MEM32(esp + 0xC);
    MEM32(ecx) = MEM32(ecx) & 0;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_00559612: ;
    SET_LO8(ecx, LO8(eax));
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x5610E8); PUSH32(esp, 0x0055961Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00559614u); } /* indirect call */
    }

loc_0055961A: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00559620
 * Original: 0x00559620 - 0x0055972F (271 bytes, 86 insns)
 * Category: game_input
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00559620(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00559620: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM8(esi + 0xB)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0xB), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00559639; /* jne: not equal / not zero */

loc_0055962F: ;
    eax = 0x8007048Fu;
    goto loc_0055972A;

loc_00559639: ;
    ecx = MEM32(esi + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    eax = ebp + -48;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, eax);
    MEM8(ebp + -48) = 0x20;
    MEM8(ebp + -47) = 0x82;
    MEM32(ebp + -40) = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00559654u); RECOMP_ABI_CALL(0x0055BC1Fu, sub_0055BC1F); /* call 0x0055BC1F */

loc_00559654: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00559707; /* jl: less (signed <) */

loc_0055965E: ;
    SET_LO8(ecx, MEM8(ebp + 0xC));
    MEM8(esi + 0xB) = MEM8(esi + 0xB) | 4;
    _fa = (uint32_t)(MEM8(esi + 0xB)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x5610E8); PUSH32(esp, 0x0055966Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00559665u); } /* indirect call */
    }

loc_0055966B: ;
    SET_LO16(eax, ZX8(MEM8(ebp + 8)));
    ecx = MEM32(esi + 4);
    SET_LO16(eax, LO16(eax) | 0x100);
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* or result */
    MEM16(ebp + -6) = LO16(eax);
    eax = ebp + -48;
    PUSH32(esp, eax);
    MEM8(ebp + -48) = 0x30;
    MEM8(ebp + -47) = 0x40;
    MEM32(ebp + -40) = ebx;
    MEM32(ebp + -36) = ebx;
    MEM32(ebp + -32) = ebx;
    MEM32(ebp + -24) = ebx;
    MEM32(ebp + -28) = ebx;
    MEM8(ebp + -20) = LO8(ebx);
    MEM8(ebp + -19) = LO8(ebx);
    MEM8(ebp + -18) = LO8(ebx);
    MEM8(ebp + -8) = 0x41;
    MEM8(ebp + -7) = 3;
    MEM16(ebp + -4) = LO16(ebx);
    MEM16(ebp + -2) = LO16(ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x005596B4u); RECOMP_ABI_CALL(0x0055BC1Fu, sub_0055BC1F); /* call 0x0055BC1F */

loc_005596B4: ;
    ecx = MEM32(esi + 4);
    edi = eax;
    eax = ebp + -48;
    PUSH32(esp, eax);
    MEM8(ebp + -48) = 0x1C;
    MEM8(ebp + -47) = 0xC3;
    MEM32(ebp + -40) = ebx;
    MEM32(ebp + -36) = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x005596D0u); RECOMP_ABI_CALL(0x0055BC1Fu, sub_0055BC1F); /* call 0x0055BC1F */

loc_005596D0: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x5610F0); PUSH32(esp, 0x005596D6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x005596D0u); } /* indirect call */
    }

loc_005596D6: ;
    MEM8(esi + 0xB) = MEM8(esi + 0xB) & 0xF9;
    _fa = (uint32_t)(MEM8(esi + 0xB)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _fa = (uint32_t)(MEM8(esi + 0xB)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0xB), 8 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_005596FF; /* je: equal / zero */

loc_005596E0: ;
    ecx = MEM32(esi + 4);
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x005596E9u); RECOMP_ABI_CALL(0x0055B86Eu, sub_0055B86E); /* call 0x0055B86E */

loc_005596E9: ;
    ecx = MEM32(esi + 4);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x005596F1u); RECOMP_ABI_CALL(0x0055AD40u, sub_0055AD40); /* call 0x0055AD40 */

loc_005596F1: ;
    MEM8(esi + 0xB) = MEM8(esi + 0xB) & 0xF7;
    _fa = (uint32_t)(MEM8(esi + 0xB)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    MEM32(esi + 4) = ebx;
    eax = 0x8007048Fu;
    goto loc_00559728;

loc_005596FF: ;
    _fa = (uint32_t)(MEM8(ebp + 8)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + 8), 2 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00559707; /* jne: not equal / not zero */

loc_00559705: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00559707: ;
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055970Du); RECOMP_ABI_CALL(0x0055B889u, sub_0055B889); /* call 0x0055B889 */

loc_0055970D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_G(_fas, _fbs)) goto loc_00559719; /* jg: greater (signed >) */

loc_00559712: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00559717u); RECOMP_ABI_CALL(0x0055B889u, sub_0055B889); /* call 0x0055B889 */

loc_00559717: ;
    goto loc_00559728;

loc_00559719: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055971Eu); RECOMP_ABI_CALL(0x0055B889u, sub_0055B889); /* call 0x0055B889 */

loc_0055971E: ;
    eax = eax & 0xFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax | 0x80070000u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_00559728: ;
    POP32(esp, edi);
    POP32(esp, ebx);

loc_0055972A: ;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0055972F
 * Original: 0x0055972F - 0x00559834 (261 bytes, 82 insns)
 * Category: game_input
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0055972F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055972F: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM8(esi + 0xB)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0xB), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00559748; /* jne: not equal / not zero */

loc_0055973E: ;
    eax = 0x8007048Fu;
    goto loc_0055982F;

loc_00559748: ;
    ecx = MEM32(esi + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    eax = ebp + -48;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, eax);
    MEM8(ebp + -48) = 0x20;
    MEM8(ebp + -47) = 0x82;
    MEM32(ebp + -40) = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00559763u); RECOMP_ABI_CALL(0x0055BC1Fu, sub_0055BC1F); /* call 0x0055BC1F */

loc_00559763: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0055980C; /* jl: less (signed <) */

loc_0055976D: ;
    SET_LO8(ecx, MEM8(ebp + 0xC));
    MEM8(esi + 0xB) = MEM8(esi + 0xB) | 4;
    _fa = (uint32_t)(MEM8(esi + 0xB)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x5610E8); PUSH32(esp, 0x0055977Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00559774u); } /* indirect call */
    }

loc_0055977A: ;
    SET_LO16(eax, ZX8(MEM8(ebp + 8)));
    ecx = MEM32(esi + 4);
    MEM16(ebp + -6) = LO16(eax);
    eax = ebp + -48;
    PUSH32(esp, eax);
    MEM8(ebp + -48) = 0x30;
    MEM8(ebp + -47) = 0x40;
    MEM32(ebp + -40) = ebx;
    MEM32(ebp + -36) = ebx;
    MEM32(ebp + -32) = ebx;
    MEM32(ebp + -24) = ebx;
    MEM32(ebp + -28) = ebx;
    MEM8(ebp + -20) = LO8(ebx);
    MEM8(ebp + -19) = LO8(ebx);
    MEM8(ebp + -18) = LO8(ebx);
    MEM8(ebp + -8) = 0x41;
    MEM8(ebp + -7) = 3;
    MEM16(ebp + -4) = 1;
    MEM16(ebp + -2) = LO16(ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x005597C1u); RECOMP_ABI_CALL(0x0055BC1Fu, sub_0055BC1F); /* call 0x0055BC1F */

loc_005597C1: ;
    ecx = MEM32(esi + 4);
    edi = eax;
    eax = ebp + -48;
    PUSH32(esp, eax);
    MEM8(ebp + -48) = 0x1C;
    MEM8(ebp + -47) = 0xC3;
    MEM32(ebp + -40) = ebx;
    MEM32(ebp + -36) = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x005597DDu); RECOMP_ABI_CALL(0x0055BC1Fu, sub_0055BC1F); /* call 0x0055BC1F */

loc_005597DD: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x5610F0); PUSH32(esp, 0x005597E3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x005597DDu); } /* indirect call */
    }

loc_005597E3: ;
    MEM8(esi + 0xB) = MEM8(esi + 0xB) & 0xF9;
    _fa = (uint32_t)(MEM8(esi + 0xB)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _fa = (uint32_t)(MEM8(esi + 0xB)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0xB), 8 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0055980C; /* je: equal / zero */

loc_005597ED: ;
    ecx = MEM32(esi + 4);
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x005597F6u); RECOMP_ABI_CALL(0x0055B86Eu, sub_0055B86E); /* call 0x0055B86E */

loc_005597F6: ;
    ecx = MEM32(esi + 4);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x005597FEu); RECOMP_ABI_CALL(0x0055AD40u, sub_0055AD40); /* call 0x0055AD40 */

loc_005597FE: ;
    MEM8(esi + 0xB) = MEM8(esi + 0xB) & 0xF7;
    _fa = (uint32_t)(MEM8(esi + 0xB)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    MEM32(esi + 4) = ebx;
    eax = 0x8007048Fu;
    goto loc_0055982D;

loc_0055980C: ;
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00559812u); RECOMP_ABI_CALL(0x0055B889u, sub_0055B889); /* call 0x0055B889 */

loc_00559812: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_G(_fas, _fbs)) goto loc_0055981E; /* jg: greater (signed >) */

loc_00559817: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055981Cu); RECOMP_ABI_CALL(0x0055B889u, sub_0055B889); /* call 0x0055B889 */

loc_0055981C: ;
    goto loc_0055982D;

loc_0055981E: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00559823u); RECOMP_ABI_CALL(0x0055B889u, sub_0055B889); /* call 0x0055B889 */

loc_00559823: ;
    eax = eax & 0xFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax | 0x80070000u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_0055982D: ;
    POP32(esp, edi);
    POP32(esp, ebx);

loc_0055982F: ;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00559834
 * Original: 0x00559834 - 0x00559850 (28 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00559834(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00559834: ;
    eax = MEM32(esp + 4);
    MEM32(eax + 0x18) = MEM32(eax + 0x18) & 0;
    _fa = (uint32_t)(MEM32(eax + 0x18)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = MEM32(ecx + 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00559848; /* je: equal / zero */

loc_00559843: ;
    MEM32(edx + 0x18) = eax;
    goto loc_0055984A;

loc_00559848: ;
    MEM32(ecx) = eax;

loc_0055984A: ;
    MEM32(ecx + 4) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00559850
 * Original: 0x00559850 - 0x00559866 (22 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00559850(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00559850: ;
    eax = MEM32(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00559863; /* je: equal / zero */

loc_00559856: ;
    edx = MEM32(eax + 0x18);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    MEM32(ecx) = edx;
    if (CMP_NE(_fa, _fb)) goto loc_00559865; /* jne: not equal / not zero */

loc_0055985F: ;
    MEM32(ecx + 4) = MEM32(ecx + 4) & edx;
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esp += 4; return; /* ret */

loc_00559863: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00559865: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00559866
 * Original: 0x00559866 - 0x005599B8 (338 bytes, 112 insns)
 * Category: game_input
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00559866(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00559866: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x3C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    esi = (uint32_t)((int32_t)esi * (int32_t)0x1C);
    PUSH32(esp, 0x6B776168);
    PUSH32(esp, esi);
    ebx = ecx;
    { uint32_t _icall_target = MEM32(0x56118C); PUSH32(esp, 0x00559882u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0055987Cu); } /* indirect call */
    }

loc_00559882: ;
    edx = eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    MEM32(ebp + -4) = edx;
    if (CMP_NE(_fa, _fb)) goto loc_00559895; /* jne: not equal / not zero */

loc_0055988B: ;
    eax = 0x8007000Eu;
    goto loc_005599B2;

loc_00559895: ;
    PUSH32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = esi;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edi = edx;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = esi;
    ecx = ecx & 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if (!g_df) { memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx); edi += ecx; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM8(edi - _i) = LO8(eax); edi -= ecx; }
    ecx = 0; /* rep stosb */
    esi = MEM32(0x558320);
    eax = MEM32(esi);
    MEM32(0x558320) = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0xE0;
    edi = esi;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi) = edx;
    if (CMP_BE(_fa, _fb)) goto loc_005598DF; /* jbe: below or equal (unsigned <=) */

loc_005598C9: ;
    ecx = esi + 0xC;
    edi = edx;
    MEM32(ebp + 8) = eax;

loc_005598D1: ;
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x005598D7u); RECOMP_ABI_CALL(0x00559834u, sub_00559834); /* call 0x00559834 */

loc_005598D7: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x1C;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + 8) = MEM32(ebp + 8) - 1;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_005598D1; /* jne: not equal / not zero */

loc_005598DF: ;
    eax = MEM32(ebp + 0xC);
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    SET_LO8(ecx, MEM8(eax + 0x558326));
    MEM8(esi + 0x14) = LO8(ecx);
    SET_LO8(eax, MEM8(eax + 0x558327));
    MEM8(esi + 0x15) = LO8(eax);
    MEM8(esi + 0x17) = 3;
    MEM32(esi + 0x2C) = ebx;
    MEM32(esi + 0x18) = ebx;
    MEM8(esi + 0x2A) = 1;
    MEM8(esi + 0x3E) = 2;
    SET_LO8(ecx, MEM8(ebx + 0xA));
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM8(ebp + -11) = LO8(ecx);
    SET_LO16(ecx, MEM16(ebx + 8));
    MEM32(ebp + -24) = eax;
    MEM32(ebp + -20) = eax;
    MEM16(ebp + -8) = LO16(eax);
    eax = ebp + -32;
    MEM16(ebp + -10) = LO16(ecx);
    ecx = MEM32(ebx + 4);
    PUSH32(esp, eax);
    MEM8(ebp + -32) = 0x1C;
    MEM8(ebp + -31) = 9;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00559937u); RECOMP_ABI_CALL(0x0055BC1Fu, sub_0055BC1F); /* call 0x0055BC1F */

loc_00559937: ;
    edi = eax;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ecx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00559978; /* jge: greater or equal (signed >=) */

loc_0055993F: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + -4));
    { uint32_t _icall_target = MEM32(0x561190); PUSH32(esp, 0x00559948u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00559942u); } /* indirect call */
    }

loc_00559948: ;
    eax = MEM32(0x558320);
    MEM32(esi) = eax;
    PUSH32(esp, edi);
    MEM32(0x558320) = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055995Bu); RECOMP_ABI_CALL(0x0055B889u, sub_0055B889); /* call 0x0055B889 */

loc_0055995B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_G(_fas, _fbs)) goto loc_00559967; /* jg: greater (signed >) */

loc_00559960: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00559965u); RECOMP_ABI_CALL(0x0055B889u, sub_0055B889); /* call 0x0055B889 */

loc_00559965: ;
    goto loc_005599B1;

loc_00559967: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055996Cu); RECOMP_ABI_CALL(0x0055B889u, sub_0055B889); /* call 0x0055B889 */

loc_0055996C: ;
    eax = eax & 0xFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax | 0x80070000u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_005599B1;

loc_00559978: ;
    edx = MEM32(ebp + -16);
    eax = esi + 0x37C;
    MEM32(eax) = edx;
    MEM32(ebp + -52) = ecx;
    MEM32(ebp + -48) = ecx;
    MEM8(ebp + -60) = 0x1C;
    MEM8(ebp + -59) = 0xC;
    eax = MEM32(eax);
    MEM32(ebp + -44) = eax;
    eax = ebp + -60;
    MEM32(ebp + -40) = ecx;
    ecx = MEM32(ebx + 4);
    PUSH32(esp, eax);
    MEM32(ebp + -36) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x005599ACu); RECOMP_ABI_CALL(0x0055BC1Fu, sub_0055BC1F); /* call 0x0055BC1F */

loc_005599AC: ;
    MEM32(ebx + 0x18) = esi;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_005599B1: ;
    POP32(esp, edi);

loc_005599B2: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_005599B8
 * Original: 0x005599B8 - 0x00559BEA (562 bytes, 192 insns)
 * Category: game_input
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_005599B8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005599B8: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x48;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = ecx;
    MEM32(ebp + -12) = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x5610F0); PUSH32(esp, 0x005599CBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x005599C5u); } /* indirect call */
    }

loc_005599CB: ;
    MEM8(ebp + -1) = LO8(eax);
    eax = MEM32(edi + 0x18);
    SET_LO8(eax, MEM8(eax + 0x17));
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_005599E9; /* je: equal / zero */

loc_005599DA: ;
    eax = MEM32(edi + 0x18);
    MEM8(eax + 0x17) = MEM8(eax + 0x17) & 0xFE;
    _fa = (uint32_t)(MEM8(eax + 0x17)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    ebx = MEM32(edi + 0x18);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x18;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_005599FA;

loc_005599E9: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_005599FA; /* je: equal / zero */

loc_005599ED: ;
    eax = MEM32(edi + 0x18);
    MEM8(eax + 0x17) = MEM8(eax + 0x17) & 0xFD;
    _fa = (uint32_t)(MEM8(eax + 0x17)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    ebx = MEM32(edi + 0x18);
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x2C;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_005599FA: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    MEM32(ebp + -48) = 0x559BEA;
    if (CMP_EQ(_fa, _fb)) goto loc_00559BDD; /* je: equal / zero */

loc_00559A09: ;
    PUSH32(esp, esi);

loc_00559A0A: ;
    eax = MEM32(edi + 0x18);
    eax = MEM32(eax + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00559BD3; /* je: equal / zero */

loc_00559A18: ;
    MEM32(ebx + 4) = eax;
    ecx = MEM32(eax);
    MEM32(ebx + 0xC) = MEM32(ebx + 0xC) & 0;
    _fa = (uint32_t)(MEM32(ebx + 0xC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebp + -8) = MEM32(ebp + -8) & 0;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebx + 8) = ecx;
    ecx = MEM32(edi + 0x18);
    SET_LO8(ecx, MEM8(ecx + 0x16));
    MEM8(ebx + 0x11) = LO8(ecx);
    MEM8(ebx + 0x10) = 0;
    MEM8(ebx + 0x13) = 0;

loc_00559A39: ;
    ecx = MEM32(edi + 0x18);
    esi = MEM32(ebp + -8);
    SET_LO16(edx, (uint32_t)(int32_t)SMEM8(ecx + 0x14));
    esi = ebp + esi * 2 + -64;
    MEM16(esi) = LO16(edx);
    _fa = (uint32_t)(MEM8(ecx + 0x15)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + 0x15), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00559A67; /* je: equal / zero */

loc_00559A51: ;
    MEM8(ecx + 0x16) = MEM8(ecx + 0x16) + 1;
    _fa = (uint32_t)(MEM8(ecx + 0x16)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    ecx = MEM32(edi + 0x18);
    SET_LO8(edx, MEM8(ecx + 0x16));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(MEM8(ecx + 0x15)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), MEM8(ecx + 0x15) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00559A67; /* jne: not equal / not zero */

loc_00559A5F: ;
    _fb = (uint32_t)(2) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* add source, before the write */
    MEM16(esi) = MEM16(esi) + 2;
    _fa = (uint32_t)(MEM16(esi)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* add result */
    MEM8(ecx + 0x16) = 0;

loc_00559A67: ;
    ecx = ZX16(MEM16(esi));
    edx = MEM32(ebx + 0xC);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebx + 0xC) = ecx;
    edx = MEM32(eax + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00559AAA; /* jbe: below or equal (unsigned <=) */

loc_00559A79: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = MEM32(edi + 0x18);
    MEM32(edx + 0x48) = ecx;
    ecx = MEM32(eax + 4);
    MEM32(ebx + 0xC) = ecx;
    MEM8(ebx + 0x10) = 1;
    _fa = (uint32_t)(MEM8(edi + 0xB)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edi + 0xB), 0x10 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00559AAA; /* jne: not equal / not zero */

loc_00559A91: ;
    edi = MEM32(edi + 0x18);
    esi = MEM32(eax);
    edx = ecx;
    _fb = (uint32_t)(0x4C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x4C;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
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
    edi = MEM32(ebp + -12);

loc_00559AAA: ;
    ecx = MEM32(ebx + 0xC);
    MEM32(ebp + -8) = MEM32(ebp + -8) + 1;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(eax + 4) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00559AC1; /* je: equal / zero */

loc_00559AB5: ;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), 8 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00559A39; /* jl: less (signed <) */

loc_00559ABF: ;
    goto loc_00559AC5;

loc_00559AC1: ;
    MEM8(ebx + 0x13) = 1;

loc_00559AC5: ;
    ecx = MEM32(ebx + 0xC);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    MEM32(eax + 4) = MEM32(eax + 4) - ecx;
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(ebp + -8);
    MEM32(ebp + -44) = ebx;
    MEM32(ebp + -72) = ecx;
    ecx = MEM32(eax);
    MEM32(ebp + -68) = ecx;
    ecx = MEM32(ebx + 0xC);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(eax) = MEM32(eax) + ecx;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM8(ebx + 0x13)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebx + 0x13), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00559AEF; /* je: equal / zero */

loc_00559AE4: ;
    ecx = MEM32(edi + 0x18);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00559AEFu); RECOMP_ABI_CALL(0x00559850u, sub_00559850); /* call 0x00559850 */

loc_00559AEF: ;
    _fa = (uint32_t)(MEM8(ebx + 0x10)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebx + 0x10), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00559B69; /* je: equal / zero */

loc_00559AF5: ;
    edx = MEM32(edi + 0x18);
    eax = edx + 0x4C;
    MEM32(ebp + -68) = eax;
    eax = MEM32(edx + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00559B3E; /* je: equal / zero */

loc_00559B05: ;
    MEM32(edx + 0x40) = eax;
    esi = MEM32(eax);
    MEM32(edx + 0x44) = esi;
    _fa = (uint32_t)(MEM8(edi + 0xB)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edi + 0xB), 0x10 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00559B2E; /* jne: not equal / not zero */

loc_00559B13: ;
    ecx = MEM32(edx + 0x48);
    edi = MEM32(ebx + 0xC);
    ebx = ecx;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edi = edi + edx + 0x4C;
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
    ecx = ebx;
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
    edi = MEM32(ebp + -12);

loc_00559B2E: ;
    ecx = MEM32(edx + 0x48);
    _fb = (uint32_t)(MEM32(edx + 0x44)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + MEM32(edx + 0x44);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = ecx;
    ecx = MEM32(edx + 0x48);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    MEM32(eax + 4) = MEM32(eax + 4) - ecx;
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    goto loc_00559B69;

loc_00559B3E: ;
    MEM32(edx + 0x40) = MEM32(edx + 0x40) & 0;
    _fa = (uint32_t)(MEM32(edx + 0x40)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(edx + 0x44) = MEM32(edx + 0x44) & 0;
    _fa = (uint32_t)(MEM32(edx + 0x44)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(MEM8(edi + 0xB)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edi + 0xB), 0x10 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00559B69; /* jne: not equal / not zero */

loc_00559B4C: ;
    esi = MEM32(ebx + 0xC);
    ecx = MEM32(edx + 0x48);
    edi = esi + edx + 0x4C;
    edx = ecx;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = edx;
    ecx = ecx & 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if (!g_df) { memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx); edi += ecx; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM8(edi - _i) = LO8(eax); edi -= ecx; }
    ecx = 0; /* rep stosb */
    edi = MEM32(ebp + -12);

loc_00559B69: ;
    eax = MEM32(edi + 0x18);
    MEM32(ebp + -32) = MEM32(ebp + -32) & 0;
    _fa = (uint32_t)(MEM32(ebp + -32)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebp + -28) = MEM32(ebp + -28) & 0;
    _fa = (uint32_t)(MEM32(ebp + -28)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = MEM32(edi + 4);
    MEM8(ebp + -40) = 0x1C;
    MEM8(ebp + -39) = 0xB;
    eax = MEM32(eax + 0x37C);
    MEM32(ebp + -24) = eax;
    eax = ebp + -72;
    MEM32(ebp + -16) = eax;
    eax = ebp + -40;
    PUSH32(esp, eax);
    MEM8(ebp + -20) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00559B9Bu); RECOMP_ABI_CALL(0x0055BC1Fu, sub_0055BC1F); /* call 0x0055BC1F */

loc_00559B9B: ;
    eax = MEM32(edi + 0x18);
    SET_LO8(eax, MEM8(eax + 0x17));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00559BB4; /* je: equal / zero */

loc_00559BA5: ;
    eax = MEM32(edi + 0x18);
    MEM8(eax + 0x17) = MEM8(eax + 0x17) & 0xFE;
    _fa = (uint32_t)(MEM8(eax + 0x17)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    ebx = MEM32(edi + 0x18);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x18;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00559BC9;

loc_00559BB4: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00559BC7; /* je: equal / zero */

loc_00559BB8: ;
    eax = MEM32(edi + 0x18);
    MEM8(eax + 0x17) = MEM8(eax + 0x17) & 0xFD;
    _fa = (uint32_t)(MEM8(eax + 0x17)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    ebx = MEM32(edi + 0x18);
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x2C;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00559BC9;

loc_00559BC7: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00559BC9: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00559A0A; /* jne: not equal / not zero */

loc_00559BD1: ;
    goto loc_00559BDC;

loc_00559BD3: ;
    edi = MEM32(edi + 0x18);
    SET_LO8(eax, MEM8(ebx + 0x12));
    MEM8(edi + 0x17) = MEM8(edi + 0x17) | LO8(eax);
    _fa = (uint32_t)(MEM8(edi + 0x17)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */

loc_00559BDC: ;
    POP32(esp, esi);

loc_00559BDD: ;
    SET_LO8(ecx, MEM8(ebp + -1));
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x5610E8); PUSH32(esp, 0x00559BE6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00559BE0u); } /* indirect call */
    }

loc_00559BE6: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_00559BEA
 * Original: 0x00559BEA - 0x00559DD0 (486 bytes, 177 insns)
 * Category: game_input
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00559BEA(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00559BEA: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x30));
    esp = esp - 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 0xC);
    ecx = MEM32(eax + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(eax);
    edx = MEM32(esi + 0x18);
    MEM32(ebp + -20) = ecx;
    SET_LO8(ecx, MEM8(edx + 0x15));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    PUSH32(esp, edi);
    MEM32(ebp + -24) = esi;
    MEM8(ebp + -1) = LO8(ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_00559C11; /* je: equal / zero */

loc_00559C0E: ;
    MEM8(ebp + -1) = MEM8(ebp + -1) - 1;
    _fa = (uint32_t)(MEM8(ebp + -1)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x7Fu); /* dec result/SF/OF; CF unchanged */

loc_00559C11: ;
    _fa = (uint32_t)(MEM8(esi + 0xB)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0xB), 0x10 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_00559D50; /* je: equal / zero */

loc_00559C1B: ;
    _fa = (uint32_t)(MEM8(eax + 0x10)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x10), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    esi = edx + 0x4C;
    if (CMP_NE(_fa, _fb)) goto loc_00559C27; /* jne: not equal / not zero */

loc_00559C24: ;
    esi = MEM32(eax + 8);

loc_00559C27: ;
    ecx = MEM32(ebp + 8);
    _cf = 0; /* logical op clears CF */
    MEM32(ebp + -12) = MEM32(ebp + -12) & 0;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 4), 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_BE(_fa, _fb)) goto loc_00559D12; /* jbe: below or equal (unsigned <=) */

loc_00559C38: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(8)) >> 32) & 1);
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -8) = ecx;

loc_00559C3E: ;
    _fa = (uint32_t)(MEM8(ebp + -1)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -1), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    ecx = (uint32_t)(int32_t)SMEM8(edx + 0x14);
    MEM32(ebp + -16) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_00559C5F; /* je: equal / zero */

loc_00559C4B: ;
    edi = (uint32_t)(int32_t)SMEM8(eax + 0x11);
    ebx = (uint32_t)(int32_t)SMEM8(ebp + -1);
    _fb = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(MEM32(ebp + -12))) >> 32) & 1);
    edi = edi + MEM32(ebp + -12);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00559C5F; /* jne: not equal / not zero */

loc_00559C5A: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebp + -16) = ecx;

loc_00559C5F: ;
    edi = MEM32(ebp + -8);
    edi = ZX16(MEM16(edi));
    ebx = edi;
    _cf = 0; /* logical op clears CF */
    SET_LO16(ebx, LO16(ebx) & 0xF000);
    _fa = (uint32_t)(LO16(ebx)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    _fa = (uint32_t)(LO16(ebx)) & 0xFFFFu; _fb = (uint32_t)(0x9000) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ebx), 0x9000 (16-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00559CD6; /* jne: not equal / not zero */

loc_00559C73: ;
    _fa = (uint32_t)(LO16(edi)) & 0xFFFFu; _fb = (uint32_t)(0xFFF) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* test LO16(edi), 0xFFF (16-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_00559CBF; /* je: equal / zero */

loc_00559C7A: ;
    edi = MEM32(ebp + -8);
    edi = ZX16(MEM16(edi));
    _cf = 0; /* logical op clears CF */
    edi = edi & 0xFFF;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(ecx) < (uint32_t)(edi));
    ecx = ecx - edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    esi = esi + edi + -2;
    _cf = 0; /* xor clears CF */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(edi, MEM16(esi));
    if (1) _cf = (int)(((ecx) >> ((1) - 1)) & 1);
    ecx = ecx >> 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(ebp + -16) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_00559CD8; /* je: equal / zero */

loc_00559C9C: ;
    eax = edi;
    SET_LO16(ebx, LO16(eax));
    edi = esi;
    if (0x10) _cf = (int)(((ebx) >> (32 - (0x10))) & 1);
    ebx = ebx << 0x10;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    SET_LO16(ebx, LO16(eax));
    if (1) _cf = (int)(((ecx) >> ((1) - 1)) & 1);
    ecx = ecx >> 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = ebx;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    { uint64_t _t = (uint64_t)(ecx) + (uint64_t)(ecx) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); ecx = (uint32_t)_t; }  /* adc */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* adc result */
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(2); for (_i = 0; _i < ecx; _i++) MEM16(edi + _i*_st) = LO16(eax); edi += ecx * _st; }
    ecx = 0; /* rep stosw */
    eax = MEM32(ebp + -16);
    esi = esi + eax * 2;

loc_00559CBA: ;
    eax = MEM32(ebp + 0xC);
    goto loc_00559CD8;

loc_00559CBF: ;
    ebx = ecx;
    if (2) _cf = (int)(((ecx) >> ((2) - 1)) & 1);
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = esi;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = ebx;
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(MEM32(ebp + -16))) >> 32) & 1);
    esi = esi + MEM32(ebp + -16);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    if (!g_df) { memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx); edi += ecx; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM8(edi - _i) = LO8(eax); edi -= ecx; }
    ecx = 0; /* rep stosb */
    goto loc_00559CBA;

loc_00559CD6: ;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(ecx)) >> 32) & 1);
    esi = esi + ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00559CD8: ;
    _fa = (uint32_t)(MEM8(ebp + -1)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -1), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00559CFC; /* je: equal / zero */

loc_00559CDE: ;
    ecx = MEM32(ebp + -8);
    SET_LO16(ecx, MEM16(ecx));
    _cf = 0; /* logical op clears CF */
    SET_LO16(ecx, LO16(ecx) & 0xF000);
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(0x8000) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), 0x8000 (16-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00559CFC; /* jne: not equal / not zero */

loc_00559CF0: ;
    SET_LO8(ecx, MEM8(ebp + -1));
    _fb = (uint32_t)(MEM8(eax + 0x11)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(LO8(ecx)) < (uint32_t)(MEM8(eax + 0x11)));
    SET_LO8(ecx, LO8(ecx) - MEM8(eax + 0x11));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sub result */
    _fb = (uint32_t)(MEM8(ebp + -12)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(LO8(ecx)) < (uint32_t)(MEM8(ebp + -12)));
    SET_LO8(ecx, LO8(ecx) - MEM8(ebp + -12));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sub result */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(edx + 0x16)) + (uint64_t)(LO8(ecx))) >> 8) & 1);
    MEM8(edx + 0x16) = MEM8(edx + 0x16) + LO8(ecx);
    _fa = (uint32_t)(MEM8(edx + 0x16)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */

loc_00559CFC: ;
    MEM32(ebp + -12) = MEM32(ebp + -12) + 1;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = MEM32(ebp + 8);
    edi = MEM32(ebp + -12);
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM32(ebp + -8)) + (uint64_t)(2)) >> 32) & 1);
    MEM32(ebp + -8) = MEM32(ebp + -8) + 2;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(ecx + 4) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_00559C3E; /* jb: below (unsigned <) */

loc_00559D12: ;
    _fa = (uint32_t)(MEM8(eax + 0x10)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x10), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00559D50; /* je: equal / zero */

loc_00559D18: ;
    ecx = MEM32(eax + 0xC);
    edi = MEM32(eax + 8);
    ebx = ecx;
    if (2) _cf = (int)(((ecx) >> ((2) - 1)) & 1);
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esi = edx + 0x4C;
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
    ecx = ebx;
    _cf = 0; /* logical op clears CF */
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
    _fa = (uint32_t)(MEM32(edx + 0x40)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx + 0x40), 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00559D50; /* je: equal / zero */

loc_00559D35: ;
    ecx = MEM32(edx + 0x48);
    esi = MEM32(eax + 0xC);
    edi = MEM32(edx + 0x44);
    ebx = ecx;
    if (2) _cf = (int)(((ecx) >> ((2) - 1)) & 1);
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esi = edx + esi + 0x4C;
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
    ecx = ebx;
    _cf = 0; /* logical op clears CF */
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

loc_00559D50: ;
    esi = MEM32(ebp + -20);
    _cf = 0; /* xor clears CF */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 8), ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00559D62; /* je: equal / zero */

loc_00559D5A: ;
    ecx = MEM32(esi + 8);
    edi = MEM32(eax + 0xC);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM32(ecx)) + (uint64_t)(edi)) >> 32) & 1);
    MEM32(ecx) = MEM32(ecx) + edi;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00559D62: ;
    _fa = (uint32_t)(MEM8(eax + 0x10)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x10), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00559D7C; /* je: equal / zero */

loc_00559D68: ;
    ecx = MEM32(edx + 0x40);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00559D7C; /* je: equal / zero */

loc_00559D6F: ;
    _fa = (uint32_t)(MEM32(ecx + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 8), ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00559D7C; /* je: equal / zero */

loc_00559D74: ;
    ecx = MEM32(ecx + 8);
    edi = MEM32(edx + 0x48);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM32(ecx)) + (uint64_t)(edi)) >> 32) & 1);
    MEM32(ecx) = MEM32(ecx) + edi;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00559D7C: ;
    ecx = ZX8(MEM8(eax + 0x13));
    SET_LO8(eax, MEM8(eax + 0x12));
    _cf = 0; /* logical op clears CF */
    MEM8(edx + 0x17) = MEM8(edx + 0x17) | LO8(eax);
    _fa = (uint32_t)(MEM8(edx + 0x17)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00559DBB; /* je: equal / zero */

loc_00559D8A: ;
    PUSH32(esp, 6);
    POP32(esp, ecx);
    edi = ebp + -48;
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
    eax = MEM32(ebp + -40);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00559D9B; /* je: equal / zero */

loc_00559D99: ;
    ebx = MEM32(eax);

loc_00559D9B: ;
    PUSH32(esp, MEM32(ebp + -20));
    ecx = edx + 0xC;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00559DA6u); RECOMP_ABI_CALL(0x00559834u, sub_00559834); /* call 0x00559834 */

loc_00559DA6: ;
    eax = MEM32(ebp + -24);
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(eax + 0x14));
    PUSH32(esp, MEM32(eax + 0x10));
    eax = ebp + -48;
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00559DBBu); RECOMP_ABI_CALL(0x0055943Eu, sub_0055943E); /* call 0x0055943E */

loc_00559DBB: ;
    ecx = MEM32(ebp + -24);
    _fa = (uint32_t)(MEM8(ecx + 0xB)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ecx + 0xB), 0x20 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    if (TEST_Z(_fa, _fb)) goto loc_00559DCC; /* je: equal / zero */

loc_00559DC7: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00559DCCu); RECOMP_ABI_CALL(0x005599B8u, sub_005599B8); /* call 0x005599B8 */

loc_00559DCC: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00559DD0
 * Original: 0x00559DD0 - 0x00559E51 (129 bytes, 53 insns)
 * Category: game_input
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00559DD0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00559DD0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = ecx;
    ecx = MEM32(ebx + 0x18);
    SET_LO8(edx, MEM8(ecx + 0x17));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00559DF1; /* jne: not equal / not zero */

loc_00559DE4: ;
    _fa = (uint32_t)(MEM8(ecx + 0x2B)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + 0x2B), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00559DF1; /* je: equal / zero */

loc_00559DEA: ;
    eax = MEM32(ecx + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00559E0F; /* jne: not equal / not zero */

loc_00559DF1: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 2 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00559E03; /* jne: not equal / not zero */

loc_00559DF6: ;
    _fa = (uint32_t)(MEM8(ecx + 0x3F)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + 0x3F), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00559E03; /* je: equal / zero */

loc_00559DFC: ;
    eax = MEM32(ecx + 0x30);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00559E0F; /* jne: not equal / not zero */

loc_00559E03: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00559E0Bu); RECOMP_ABI_CALL(0x00559850u, sub_00559850); /* call 0x00559850 */

loc_00559E0B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00559E4E; /* je: equal / zero */

loc_00559E0F: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);

loc_00559E11: ;
    PUSH32(esp, 6);
    POP32(esp, ecx);
    esi = eax;
    edi = ebp + -24;
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
    ecx = MEM32(ebx + 0x18);
    PUSH32(esp, eax);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00559E27u); RECOMP_ABI_CALL(0x00559834u, sub_00559834); /* call 0x00559834 */

loc_00559E27: ;
    PUSH32(esp, 0x80004004u);
    PUSH32(esp, MEM32(ebx + 0x14));
    eax = ebp + -24;
    PUSH32(esp, MEM32(ebx + 0x10));
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00559E3Du); RECOMP_ABI_CALL(0x0055943Eu, sub_0055943E); /* call 0x0055943E */

loc_00559E3D: ;
    ecx = MEM32(ebx + 0x18);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00559E48u); RECOMP_ABI_CALL(0x00559850u, sub_00559850); /* call 0x00559850 */

loc_00559E48: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00559E11; /* jne: not equal / not zero */

loc_00559E4C: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_00559E4E: ;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_00559E51
 * Original: 0x00559E51 - 0x00559EE6 (149 bytes, 52 insns)
 * Category: game_input
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00559E51(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00559E51: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM8(ebx + 0xB)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebx + 0xB), 0x10 (8-bit) */
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0x10);
    PUSH32(esp, edi);
    if (TEST_NZ(_fa, _fb)) goto loc_00559E6B; /* jne: not equal / not zero */

loc_00559E68: ;
    esi = MEM32(ebp + 0xC);

loc_00559E6B: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x5610F0); PUSH32(esp, 0x00559E71u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00559E6Bu); } /* indirect call */
    }

loc_00559E71: ;
    _fa = (uint32_t)(MEM8(ebx + 0xB)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebx + 0xB), 0x20 (8-bit) */
    MEM8(ebp + 0xB) = LO8(eax);
    if (TEST_Z(_fa, _fb)) goto loc_00559EB9; /* je: equal / zero */

loc_00559E7A: ;
    ecx = MEM32(ebx + 0x18);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00559E85u); RECOMP_ABI_CALL(0x00559850u, sub_00559850); /* call 0x00559850 */

loc_00559E85: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    MEM32(ebp + 0x10) = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_00559EB0; /* je: equal / zero */

loc_00559E8E: ;
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00559E94u); RECOMP_ABI_CALL(0x00559420u, sub_00559420); /* call 0x00559420 */

loc_00559E94: ;
    PUSH32(esp, 6);
    POP32(esp, ecx);
    PUSH32(esp, MEM32(ebp + 0x10));
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
    ecx = MEM32(ebx + 0x18);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00559EA7u); RECOMP_ABI_CALL(0x00559834u, sub_00559834); /* call 0x00559834 */

loc_00559EA7: ;
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00559EAEu); RECOMP_ABI_CALL(0x005599B8u, sub_005599B8); /* call 0x005599B8 */

loc_00559EAE: ;
    goto loc_00559ED3;

loc_00559EB0: ;
    MEM32(ebp + -4) = 0x800700AAu;
    goto loc_00559EC0;

loc_00559EB9: ;
    MEM32(ebp + -4) = 0x8007048Fu;

loc_00559EC0: ;
    PUSH32(esp, 0x80004005u);
    PUSH32(esp, MEM32(ebx + 0x14));
    PUSH32(esp, MEM32(ebx + 0x10));
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00559ED3u); RECOMP_ABI_CALL(0x0055943Eu, sub_0055943E); /* call 0x0055943E */

loc_00559ED3: ;
    SET_LO8(ecx, MEM8(ebp + 0xB));
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x5610E8); PUSH32(esp, 0x00559EDCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00559ED6u); } /* indirect call */
    }

loc_00559EDC: ;
    eax = MEM32(ebp + -4);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00559EE6
 * Original: 0x00559EE6 - 0x0055A0A1 (443 bytes, 143 insns)
 * Category: game_input
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00559EE6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00559EE6: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM8(ebp + -4) = 2;
    SET_LO8(ebx, 0x1F);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x5610F0); PUSH32(esp, 0x00559EFCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00559EF6u); } /* indirect call */
    }

loc_00559EFC: ;
    ecx = MEM32(ebp + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x558344) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x558344 (32-bit) */
    edi = MEM32(ebp + 0xC);
    MEM8(ebp + -8) = LO8(eax);
    eax = 0x55835C;
    if (CMP_EQ(_fa, _fb)) goto loc_00559F34; /* je: equal / zero */

loc_00559F12: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00559F34; /* je: equal / zero */

loc_00559F16: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x558350) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x558350 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00559F71; /* jne: not equal / not zero */

loc_00559F1E: ;
    _fa = (uint32_t)(MEM16(0x558318)) & 0xFFFFu; _fb = (uint32_t)(LO16(esi)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(0x558318), LO16(esi) (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00559F3E; /* je: equal / zero */

loc_00559F27: ;
    esi = edi;
    esi = (uint32_t)((int32_t)esi * (int32_t)0x1C);
    _fb = (uint32_t)(0x75F1B8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x75F1B8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00559F71;

loc_00559F34: ;
    _fa = (uint32_t)(MEM16(0x55831C)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(0x55831C), 0 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00559F48; /* jne: not equal / not zero */

loc_00559F3E: ;
    esi = 0x8007000Eu;
    goto loc_00559FF8;

loc_00559F48: ;
    esi = edi;
    esi = (uint32_t)((int32_t)esi * (int32_t)0x1C);
    _fb = (uint32_t)(0x75F148) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x75F148;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00559F6B; /* jne: not equal / not zero */

loc_00559F57: ;
    _fa = (uint32_t)(MEM8(esi + 0xB)) & 0xFFu; _fb = (uint32_t)(0x80) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0xB), 0x80 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00559F67; /* jne: not equal / not zero */

loc_00559F5D: ;
    esi = 0x8007048Fu;
    goto loc_00559FF8;

loc_00559F67: ;
    SET_LO8(ebx, 0xB5);
    goto loc_00559F71;

loc_00559F6B: ;
    _fa = (uint32_t)(MEM8(esi + 0xB)) & 0xFFu; _fb = (uint32_t)(0x80) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0xB), 0x80 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00559F5D; /* jne: not equal / not zero */

loc_00559F71: ;
    eax = MEM32(ebp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00559FA8; /* je: equal / zero */

loc_00559F78: ;
    eax = MEM32(eax + 4);
    SET_LO8(ecx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    MEM8(ebp + -4) = LO8(ecx);

loc_00559F80: ;
    edx = ZX8(LO8(ecx));
    edx = ZX16(MEM16(edx * 4 + 0x558324));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00559F9B; /* je: equal / zero */

loc_00559F8F: ;
    SET_LO8(ecx, LO8(ecx) + 1);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 8 (8-bit) */
    MEM8(ebp + -4) = LO8(ecx);
    if (CMP_B(_fa, _fb)) goto loc_00559F80; /* jb: below (unsigned <) */

loc_00559F99: ;
    goto loc_00559FA8;

loc_00559F9B: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = eax << LO8(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00559FA8; /* jne: not equal / not zero */

loc_00559FA4: ;
    MEM8(ebp + -4) = 8;

loc_00559FA8: ;
    SET_LO8(eax, MEM8(esi + 0xB));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00559FBB; /* je: equal / zero */

loc_00559FAF: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebx = 0x80070020u;
    goto loc_0055A08A;

loc_00559FBB: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0055A069; /* je: equal / zero */

loc_00559FC3: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if ((((uint8_t)((uint8_t)(_fa) - (uint8_t)(_fb)) >> 7) == 0)) goto loc_00559FD6; /* jns: not sign (positive) */

loc_00559FC7: ;
    PUSH32(esp, MEM32(ebp + -8));
    ecx = esi;
    PUSH32(esp, MEM32(ebp + -4));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00559FD4u); RECOMP_ABI_CALL(0x00559620u, sub_00559620); /* call 0x00559620 */

loc_00559FD4: ;
    goto loc_0055A037;

loc_00559FD6: ;
    SET_LO8(eax, MEM8(edi + 0x75F144));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055A008; /* je: equal / zero */

loc_00559FE0: ;
    SET_LO8(eax, LO8(eax) + 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    MEM8(edi + 0x75F144) = LO8(eax);
    SET_LO8(eax, MEM8(edi + 0x75F140));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(MEM8(ebp + -4)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), MEM8(ebp + -4) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055A03D; /* je: equal / zero */

loc_00559FF3: ;
    esi = 0x80070057u;

loc_00559FF8: ;
    SET_LO8(ecx, MEM8(ebp + -8));
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x5610E8); PUSH32(esp, 0x0055A001u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00559FFBu); } /* indirect call */
    }

loc_0055A001: ;
    eax = esi;
    goto loc_0055A09A;

loc_0055A008: ;
    PUSH32(esp, MEM32(ebp + -8));
    SET_LO8(eax, MEM8(ebp + -4));
    PUSH32(esp, MEM32(ebp + -4));
    ecx = esi;
    MEM8(edi + 0x75F144) = 1;
    MEM8(edi + 0x75F140) = LO8(eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055A025u); RECOMP_ABI_CALL(0x00559620u, sub_00559620); /* call 0x00559620 */

loc_0055A025: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0055A05F; /* jl: less (signed <) */

loc_0055A02B: ;
    PUSH32(esp, MEM32(ebp + -8));
    ecx = esi;
    PUSH32(esp, 0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055A037u); RECOMP_ABI_CALL(0x0055972Fu, sub_0055972F); /* call 0x0055972F */

loc_0055A037: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0055A05F; /* jl: less (signed <) */

loc_0055A03D: ;
    eax = ZX8(MEM8(ebp + -4));
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0x10));
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055A04Cu); RECOMP_ABI_CALL(0x00559866u, sub_00559866); /* call 0x00559866 */

loc_0055A04C: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0055A05F; /* jl: less (signed <) */

loc_0055A052: ;
    MEM8(esi + 0xB) = MEM8(esi + 0xB) | 0x22;
    _fa = (uint32_t)(MEM8(esi + 0xB)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    MEM32(esi + 0xC) = 1;
    goto loc_0055A070;

loc_0055A05F: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM8(edi + 0x75F144) = MEM8(edi + 0x75F144) - 1;
    _fa = (uint32_t)(MEM8(edi + 0x75F144)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x7Fu); /* dec result/SF/OF; CF unchanged */
    goto loc_0055A070;

loc_0055A069: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebx = 0x8007048Fu;

loc_0055A070: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055A08A; /* je: equal / zero */

loc_0055A074: ;
    _fa = (uint32_t)(MEM8(esi + 0xB)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0xB), 0x10 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0055A083; /* je: equal / zero */

loc_0055A07A: ;
    MEM16(0x55831C) = MEM16(0x55831C) - 1;
    _fa = (uint32_t)(MEM16(0x55831C)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x7FFFu); /* dec result/SF/OF; CF unchanged */
    goto loc_0055A08A;

loc_0055A083: ;
    MEM16(0x558318) = MEM16(0x558318) - 1;
    _fa = (uint32_t)(MEM16(0x558318)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x7FFFu); /* dec result/SF/OF; CF unchanged */

loc_0055A08A: ;
    SET_LO8(ecx, MEM8(ebp + -8));
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x5610E8); PUSH32(esp, 0x0055A093u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0055A08Du); } /* indirect call */
    }

loc_0055A093: ;
    eax = MEM32(ebp + 0x18);
    MEM32(eax) = esi;
    eax = ebx;

loc_0055A09A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 24; return; /* ret 20 */

}

/**
 * sub_0055A0A1
 * Original: 0x0055A0A1 - 0x0055A11D (124 bytes, 43 insns)
 * Category: game_input
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055A0A1(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055A0A1: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    eax = MEM32(esi + 0x18);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 0x37C) = edi;
    _fa = (uint32_t)(MEM8(esi + 0xB)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0xB), 0x10 (8-bit) */
    PUSH32(esp, 0x1C);
    eax = esi;
    POP32(esp, ecx);
    if (TEST_Z(_fa, _fb)) goto loc_0055A0C4; /* je: equal / zero */

loc_0055A0BD: ;
    _fb = (uint32_t)(0x75F148) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x75F148;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    goto loc_0055A0C9;

loc_0055A0C4: ;
    _fb = (uint32_t)(0x75F1B8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x75F1B8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_0055A0C9: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    ecx = esi;
    MEM8(eax + 0x75F144) = MEM8(eax + 0x75F144) - 1;
    _fa = (uint32_t)(MEM8(eax + 0x75F144)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x7Fu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, 0x0055A0D9u); RECOMP_ABI_CALL(0x00559DD0u, sub_00559DD0); /* call 0x00559DD0 */

loc_0055A0D9: ;
    _fa = (uint32_t)(MEM8(esi + 0xB)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0xB), 8 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0055A0F7; /* je: equal / zero */

loc_0055A0DF: ;
    ecx = MEM32(esi + 4);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0055A0E8u); RECOMP_ABI_CALL(0x0055B86Eu, sub_0055B86E); /* call 0x0055B86E */

loc_0055A0E8: ;
    ecx = MEM32(esi + 4);
    PUSH32(esp, 0x0055A0F0u); RECOMP_ABI_CALL(0x0055AD40u, sub_0055AD40); /* call 0x0055AD40 */

loc_0055A0F0: ;
    MEM8(esi + 0xB) = MEM8(esi + 0xB) & 0xF7;
    _fa = (uint32_t)(MEM8(esi + 0xB)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    MEM32(esi + 4) = edi;

loc_0055A0F7: ;
    SET_LO8(eax, MEM8(esi + 0xB));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0055A114; /* je: equal / zero */

loc_0055A0FE: ;
    SET_LO8(eax, LO8(eax) & 0xF9);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    MEM8(esi + 0xB) = LO8(eax);
    eax = MEM32(esi + 0x18);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    _fb = (uint32_t)(0x350) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x350;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x56114C); PUSH32(esp, 0x0055A114u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0055A10Eu); } /* indirect call */
    }

loc_0055A114: ;
    MEM8(esi + 0xB) = MEM8(esi + 0xB) & 0xBF;
    _fa = (uint32_t)(MEM8(esi + 0xB)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0055A11D
 * Original: 0x0055A11D - 0x0055A14D (48 bytes, 20 insns)
 * Category: game_input
 * CC: cdecl, 7 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0055A11D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055A11D: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0x20);
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055A136u); RECOMP_ABI_CALL(0x00559EE6u, sub_00559EE6); /* call 0x00559EE6 */

loc_0055A136: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0055A148; /* jl: less (signed <) */

loc_0055A13A: ;
    ecx = MEM32(esi);
    edx = MEM32(ebp + 0x1C);
    MEM32(ecx + 0x14) = edx;
    edx = MEM32(ebp + 0x18);
    MEM32(ecx + 0x10) = edx;

loc_0055A148: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 32; return; /* ret 28 */

}

/**
 * sub_0055A14D
 * Original: 0x0055A14D - 0x0055A1A8 (91 bytes, 23 insns)
 * Category: game_input
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055A14D(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055A14D: ;
    MEM8(ecx + 0xB) = MEM8(ecx + 0xB) & 0xDF;
    _fa = (uint32_t)(MEM8(ecx + 0xB)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    SET_LO8(eax, MEM8(ecx + 0xB));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x40 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0055A1A7; /* jne: not equal / not zero */

loc_0055A158: ;
    SET_LO8(eax, LO8(eax) | 0x40);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    MEM8(ecx + 0xB) = LO8(eax);
    eax = MEM32(ecx + 0x18);
    MEM8(eax + 0x360) = 0x1C;
    eax = MEM32(ecx + 0x18);
    MEM8(eax + 0x361) = 0x4A;
    eax = MEM32(ecx + 0x18);
    MEM32(eax + 0x368) = 0x55A0A1;
    eax = MEM32(ecx + 0x18);
    MEM32(eax + 0x36C) = ecx;
    eax = MEM32(ecx + 0x18);
    edx = MEM32(eax + 0x37C);
    MEM32(eax + 0x370) = edx;
    eax = MEM32(ecx + 0x18);
    ecx = MEM32(ecx + 4);
    _fb = (uint32_t)(0x360) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x360;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x0055A1A7u); RECOMP_ABI_CALL(0x0055BC1Fu, sub_0055BC1F); /* call 0x0055BC1F */

loc_0055A1A7: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0055A1A8
 * Original: 0x0055A1A8 - 0x0055A26F (199 bytes, 58 insns)
 * Category: game_input
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055A1A8(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055A1A8: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    esi = ecx;
    { uint32_t _icall_target = MEM32(0x5610F0); PUSH32(esp, 0x0055A1B3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0055A1ADu); } /* indirect call */
    }

loc_0055A1B3: ;
    SET_LO8(ebx, LO8(eax));
    eax = MEM32(esi + 0x18);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(eax + 0x37C)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x37C), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055A228; /* je: equal / zero */

loc_0055A1C2: ;
    MEM8(esi + 0xB) = MEM8(esi + 0xB) | 4;
    _fa = (uint32_t)(MEM8(esi + 0xB)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    MEM8(eax + 0x350) = 1;
    eax = MEM32(esi + 0x18);
    MEM8(eax + 0x352) = 4;
    eax = MEM32(esi + 0x18);
    MEM32(eax + 0x354) = edi;
    eax = MEM32(esi + 0x18);
    ecx = eax + 0x358;
    MEM32(eax + 0x35C) = ecx;
    eax = MEM32(esi + 0x18);
    ecx = MEM32(eax + 0x35C);
    MEM32(eax + 0x358) = ecx;
    _fa = (uint32_t)(MEM8(esi + 0xB)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0xB), 8 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0055A20B; /* jne: not equal / not zero */

loc_0055A204: ;
    ecx = esi;
    PUSH32(esp, 0x0055A20Bu); RECOMP_ABI_CALL(0x0055A14Du, sub_0055A14D); /* call 0x0055A14D */

loc_0055A20B: ;
    SET_LO8(ecx, LO8(ebx));
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x5610E8); PUSH32(esp, 0x0055A213u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0055A20Du); } /* indirect call */
    }

loc_0055A213: ;
    eax = MEM32(esi + 0x18);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    _fb = (uint32_t)(0x350) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x350;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x561150); PUSH32(esp, 0x0055A226u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0055A220u); } /* indirect call */
    }

loc_0055A226: ;
    goto loc_0055A234;

loc_0055A228: ;
    MEM8(esi + 0xB) = MEM8(esi + 0xB) & 0xFD;
    _fa = (uint32_t)(MEM8(esi + 0xB)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    SET_LO8(ecx, LO8(ebx));
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x5610E8); PUSH32(esp, 0x0055A234u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0055A22Eu); } /* indirect call */
    }

loc_0055A234: ;
    _fa = (uint32_t)(MEM8(esi + 0xB)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0xB), 0x10 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0055A243; /* je: equal / zero */

loc_0055A23A: ;
    MEM16(0x55831C) = MEM16(0x55831C) + 1;
    _fa = (uint32_t)(MEM16(0x55831C)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */
    goto loc_0055A24A;

loc_0055A243: ;
    MEM16(0x558318) = MEM16(0x558318) + 1;
    _fa = (uint32_t)(MEM16(0x558318)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */

loc_0055A24A: ;
    eax = MEM32(esi + 0x18);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(eax));
    { uint32_t _icall_target = MEM32(0x561190); PUSH32(esp, 0x0055A255u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0055A24Fu); } /* indirect call */
    }

loc_0055A255: ;
    eax = MEM32(esi + 0x18);
    ecx = MEM32(0x558320);
    MEM32(eax) = ecx;
    eax = MEM32(esi + 0x18);
    MEM32(0x558320) = eax;
    MEM32(esi + 0x18) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0055A26F
 * Original: 0x0055A26F - 0x0055A2B6 (71 bytes, 27 insns)
 * Category: game_input
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055A26F(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055A26F: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    ecx = edi;
    PUSH32(esp, 0x0055A27Cu); RECOMP_ABI_CALL(0x0055B86Au, sub_0055B86A); /* call 0x0055B86A */

loc_0055A27C: ;
    esi = eax;
    SET_LO8(eax, MEM8(esi + 0xB));
    SET_LO8(eax, LO8(eax) & 0xFE);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    SET_LO8(eax, LO8(eax) | 8);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x20 (8-bit) */
    MEM8(esi + 0xB) = LO8(eax);
    if (TEST_Z(_fa, _fb)) goto loc_0055A295; /* je: equal / zero */

loc_0055A28C: ;
    ecx = esi;
    PUSH32(esp, 0x0055A293u); RECOMP_ABI_CALL(0x0055A14Du, sub_0055A14D); /* call 0x0055A14D */

loc_0055A293: ;
    goto loc_0055A2B1;

loc_0055A295: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 4 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0055A2B1; /* jne: not equal / not zero */

loc_0055A299: ;
    MEM32(esi + 4) = MEM32(esi + 4) & 0;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x0055A2A6u); RECOMP_ABI_CALL(0x0055B86Eu, sub_0055B86E); /* call 0x0055B86E */

loc_0055A2A6: ;
    ecx = edi;
    PUSH32(esp, 0x0055A2ADu); RECOMP_ABI_CALL(0x0055AD40u, sub_0055AD40); /* call 0x0055AD40 */

loc_0055A2AD: ;
    MEM8(esi + 0xB) = MEM8(esi + 0xB) & 0xF7;
    _fa = (uint32_t)(MEM8(esi + 0xB)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */

loc_0055A2B1: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0055A2B6
 * Original: 0x0055A2B6 - 0x0055A2E9 (51 bytes, 22 insns)
 * Category: game_input
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0055A2B6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055A2B6: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    edx = MEM32(ebp + 8);
    eax = edx + 0xC;
    PUSH32(esp, esi);
    MEM32(ebp + 8) = eax;
    eax = 0xFFFFFFFFu;
    ecx = MEM32(ebp + 8);
    { uint32_t _add = eax;
      uint32_t _old = RECOMP_ATOMIC_ADD32(XBOX_PTR(ecx), _add);
      _fa = _old + _add; _fas = (int32_t)_fa; /* xadd result */
      eax = _old; }  /* xadd */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0055A2D9; /* jge: greater or equal (signed >=) */

loc_0055A2D5: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_0055A2E4;

loc_0055A2D9: ;
    if (CMP_NE(_fa, _fb)) goto loc_0055A2E2; /* jne: not equal / not zero */

loc_0055A2DB: ;
    ecx = edx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055A2E2u); RECOMP_ABI_CALL(0x0055A1A8u, sub_0055A1A8); /* call 0x0055A1A8 */

loc_0055A2E2: ;
    eax = esi;

loc_0055A2E4: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0055A2E9
 * Original: 0x0055A2E9 - 0x0055A319 (48 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055A2E9(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055A2E9: ;
    PUSH32(esp, 4);
    eax = 0x75F150;
    POP32(esp, edx);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0055A2F3: ;
    MEM32(eax + -8) = 0x561BFC;
    MEM32(eax + -4) = ecx;
    MEM16(eax) = LO16(ecx);
    MEM8(eax + 2) = LO8(ecx);
    MEM8(eax + 3) = LO8(ecx);
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = ecx;
    MEM32(eax + 0x10) = ecx;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x1C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0055A2F3; /* jne: not equal / not zero */

loc_0055A318: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0055A319
 * Original: 0x0055A319 - 0x0055A349 (48 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055A319(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055A319: ;
    PUSH32(esp, 4);
    eax = 0x75F1C0;
    POP32(esp, edx);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0055A323: ;
    MEM32(eax + -8) = 0x561BFC;
    MEM32(eax + -4) = ecx;
    MEM16(eax) = LO16(ecx);
    MEM8(eax + 2) = LO8(ecx);
    MEM8(eax + 3) = LO8(ecx);
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = ecx;
    MEM32(eax + 0x10) = ecx;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x1C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0055A323; /* jne: not equal / not zero */

loc_0055A348: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0055A349
 * Original: 0x0055A349 - 0x0055A4B4 (363 bytes, 128 insns)
 * Category: game_input
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0055A349(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055A349: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x94) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x94;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(ebp + 8));
    _fb = (uint32_t)(0x23) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(ebx, LO8(ebx) + 0x23);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    PUSH32(esp, edi);
    SET_LO8(ebx, LO8(ebx) << 1);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    _fb = (uint32_t)(MEM8(ebp + 0xC)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(ebx, LO8(ebx) + MEM8(ebp + 0xC));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    PUSH32(esp, 0x5583B4);
    { uint32_t _icall_target = MEM32(0x561004); PUSH32(esp, 0x0055A36Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0055A364u); } /* indirect call */
    }

loc_0055A36A: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(ecx, LO8(ebx));
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(0x46) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x46;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = eax << LO8(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(MEM32(0x75F004)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(0x75F004), eax (32-bit) */
    MEM32(ebp + -20) = eax;
    if (TEST_NZ(_fa, _fb)) goto loc_0055A3A9; /* jne: not equal / not zero */

loc_0055A383: ;
    eax = ebp + -148;
    MEM32(ebp + -12) = eax;
    eax = ebp + -16;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0xC));
    MEM16(ebp + -16) = LO16(ebx);
    PUSH32(esp, MEM32(ebp + 8));
    MEM16(ebp + -14) = 0x3E;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055A3A5u); RECOMP_ABI_CALL(0x0055A82Au, sub_0055A82A); /* call 0x0055A82A */

loc_0055A3A5: ;
    edi = eax;
    goto loc_0055A3AB;

loc_0055A3A9: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0055A3AB: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0055A49C; /* jl: less (signed <) */

loc_0055A3B3: ;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055A3BFu); RECOMP_ABI_CALL(0x0055A67Fu, sub_0055A67F); /* call 0x0055A67F */

loc_0055A3BF: ;
    esi = MEM32(0x561224);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x18);
    ecx = ebp + -84;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x70000);
    MEM32(ebp + -4) = eax;
    { uint32_t _icall_target = esi; PUSH32(esp, 0x0055A3DAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0055A3D8u); } /* indirect call */
    }

loc_0055A3DA: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0055A485; /* jl: less (signed <) */

loc_0055A3E4: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x20);
    eax = ebp + -60;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, 0x74004);
    { uint32_t _icall_target = esi; PUSH32(esp, 0x0055A3F8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0055A3F6u); } /* indirect call */
    }

loc_0055A3F8: ;
    _fa = (uint32_t)(MEM32(ebp + -48)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -48), ebx (32-bit) */
    edi = eax;
    esi = 0x1000;
    if (CMP_G(_fas, _fbs)) goto loc_0055A410; /* jg: greater (signed >) */

loc_0055A404: ;
    if (CMP_L(_fas, _fbs)) goto loc_0055A40B; /* jl: less (signed <) */

loc_0055A406: ;
    _fa = (uint32_t)(MEM32(ebp + -52)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -52), esi (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0055A410; /* jae: above or equal (unsigned >=) */

loc_0055A40B: ;
    edi = 0xC000014Fu;

loc_0055A410: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0055A485; /* jl: less (signed <) */

loc_0055A414: ;
    PUSH32(esp, 0x24830000);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055A41Fu); RECOMP_ABI_CALL(0x002AF430u, sub_002AF430); /* call 0x002AF430 */

loc_0055A41F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(ebp + -8) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0055A480; /* je: equal / zero */

loc_0055A426: ;
    ecx = ebp + -28;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + -4));
    MEM32(ebp + -28) = ebx;
    PUSH32(esp, 2);
    MEM32(ebp + -24) = ebx;
    { uint32_t _icall_target = MEM32(0x561220); PUSH32(esp, 0x0055A43Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0055A437u); } /* indirect call */
    }

loc_0055A43D: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0055A471; /* jl: less (signed <) */

loc_0055A443: ;
    eax = MEM32(ebp + -8);
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x58544146) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0x58544146 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055A46C; /* jne: not equal / not zero */

loc_0055A44E: ;
    edx = MEM32(ebp + 0x14);
    ecx = MEM32(ebp + 0x18);
    edi = MEM32(ebp + 0x10);
    esi = eax + edx;
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
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_0055A471;

loc_0055A46C: ;
    edi = 0xC000014Fu;

loc_0055A471: ;
    PUSH32(esp, 0x24830000);
    PUSH32(esp, MEM32(ebp + -8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055A47Eu); RECOMP_ABI_CALL(0x002AF670u, sub_002AF670); /* call 0x002AF670 */

loc_0055A47E: ;
    goto loc_0055A485;

loc_0055A480: ;
    edi = 0xC000009Au;

loc_0055A485: ;
    eax = MEM32(ebp + -20);
    _fa = (uint32_t)(MEM32(0x75F004)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(0x75F004), eax (32-bit) */
    POP32(esp, esi);
    if (TEST_NZ(_fa, _fb)) goto loc_0055A49C; /* jne: not equal / not zero */

loc_0055A491: ;
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055A49Cu); RECOMP_ABI_CALL(0x0055A7BDu, sub_0055A7BD); /* call 0x0055A7BD */

loc_0055A49C: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x5583B4);
    { uint32_t _icall_target = MEM32(0x561008); PUSH32(esp, 0x0055A4A7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0055A4A1u); } /* indirect call */
    }

loc_0055A4A7: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(0x561054); PUSH32(esp, 0x0055A4AEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0055A4A8u); } /* indirect call */
    }

loc_0055A4AE: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 24; return; /* ret 20 */

}

/**
 * sub_0055A4B4
 * Original: 0x0055A4B4 - 0x0055A4D6 (34 bytes, 13 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055A4B4(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055A4B4: ;
    ecx = MEM32(esp + 8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = eax << LO8(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = MEM32(esp + 4);
    MEM32(ecx + 4) = MEM32(ecx + 4) | eax;
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(MEM8(esp + 0xC)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esp + 0xC), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055A4CF; /* je: equal / zero */

loc_0055A4CB: ;
    MEM32(ecx) = MEM32(ecx) | eax;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_0055A4D3;

loc_0055A4CF: ;
    eax = ~eax;
    MEM32(ecx) = MEM32(ecx) & eax;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_0055A4D3: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0055A4D6
 * Original: 0x0055A4D6 - 0x0055A512 (60 bytes, 23 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055A4D6(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055A4D6: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x5610F0); PUSH32(esp, 0x0055A4DEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0055A4D8u); } /* indirect call */
    }

loc_0055A4DE: ;
    edi = MEM32(esp + 0x10);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    edx = MEM32(esp + 0xC);
    esi = MEM32(edx);
    if (CMP_EQ(_fa, _fb)) goto loc_0055A4F1; /* je: equal / zero */

loc_0055A4EC: ;
    ecx = MEM32(edx + 8);
    MEM32(edi) = ecx;

loc_0055A4F1: ;
    edi = MEM32(esp + 0x14);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055A503; /* je: equal / zero */

loc_0055A4F9: ;
    ecx = MEM32(edx + 8);
    ecx = ecx & MEM32(edx + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx & MEM32(edx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(edi) = ecx;

loc_0055A503: ;
    SET_LO8(ecx, LO8(eax));
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x5610E8); PUSH32(esp, 0x0055A50Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0055A505u); } /* indirect call */
    }

loc_0055A50B: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0055A512
 * Original: 0x0055A512 - 0x0055A517 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055A512(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0055A512: ;
    g_seh_ebp = ebp; sub_00558BA7(); return; /* tail jmp 0x00558BA7 */

}

/**
 * sub_0055A517
 * Original: 0x0055A517 - 0x0055A539 (34 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055A517(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055A517: ;
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x5610F0); PUSH32(esp, 0x0055A51Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0055A518u); } /* indirect call */
    }

loc_0055A51E: ;
    edx = MEM32(esp + 8);
    esi = MEM32(edx);
    MEM32(edx + 4) = MEM32(edx + 4) & 0;
    _fa = (uint32_t)(MEM32(edx + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    SET_LO8(ecx, LO8(eax));
    MEM32(edx + 8) = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x5610E8); PUSH32(esp, 0x0055A533u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0055A52Du); } /* indirect call */
    }

loc_0055A533: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0055A539
 * Original: 0x0055A539 - 0x0055A5A6 (109 bytes, 47 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0055A539(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_0055A539: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 4), eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0055A553; /* jne: not equal / not zero */

loc_0055A547: ;
    ecx = MEM32(ebp + 0xC);
    MEM32(ecx) = eax;
    ecx = MEM32(ebp + 0x10);
    MEM32(ecx) = eax;
    goto loc_0055A5A1;

loc_0055A553: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x5610F0); PUSH32(esp, 0x0055A55Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0055A555u); } /* indirect call */
    }

loc_0055A55B: ;
    ecx = MEM32(esi + 8);
    ebx = MEM32(ebp + 0xC);
    ecx = ~ecx;
    _cf = 0; /* logical op clears CF */
    ecx = ecx & MEM32(esi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebx) = ecx;
    edx = MEM32(esi);
    ecx = MEM32(ebp + 0x10);
    edx = ~edx;
    _cf = 0; /* logical op clears CF */
    edx = edx & MEM32(esi + 8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ecx) = edx;
    edi = MEM32(esi + 4);
    _cf = 0; /* logical op clears CF */
    edi = edi & MEM32(esi + 8);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = 0; /* logical op clears CF */
    edi = edi & MEM32(esi);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = 0; /* logical op clears CF */
    edx = edx | edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(ecx) = edx;
    _cf = 0; /* logical op clears CF */
    MEM32(ebx) = MEM32(ebx) | edi;
    _fa = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx = MEM32(esi);
    _cf = 0; /* logical op clears CF */
    MEM32(esi + 4) = MEM32(esi + 4) & 0;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi + 8) = ecx;
    SET_LO8(ecx, LO8(eax));
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x5610E8); PUSH32(esp, 0x0055A592u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0055A58Cu); } /* indirect call */
    }

loc_0055A592: ;
    eax = MEM32(ebx);
    ecx = MEM32(ebp + 0x10);
    _cf = 0; /* logical op clears CF */
    eax = eax | MEM32(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, edi);
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    POP32(esp, ebx);

loc_0055A5A1: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0055A5A6
 * Original: 0x0055A5A6 - 0x0055A5C1 (27 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055A5A6(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055A5A6: ;
    eax = MEM32(0x75FAE8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055A5C0; /* je: equal / zero */

loc_0055A5AF: ;
    ecx = MEM32(eax + 8);
    MEM32(0x75FAE8) = ecx;
    MEM32(eax + 0xC) = MEM32(eax + 0xC) & 0;
    _fa = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(eax + 8) = MEM32(eax + 8) & 0;
    _fa = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_0055A5C0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0055A5C1
 * Original: 0x0055A5C1 - 0x0055A5E9 (40 bytes, 13 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055A5C1(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055A5C1: ;
    edx = MEM32(esp + 4);
    PUSH32(esp, edi);
    PUSH32(esp, 0x58);
    POP32(esp, ecx);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = edx + 0x10;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    MEM32(edx + 0xC) = 4;
    eax = MEM32(0x75FAE8);
    MEM32(edx + 8) = eax;
    MEM32(0x75FAE8) = edx;
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0055A5E9
 * Original: 0x0055A5E9 - 0x0055A67F (150 bytes, 58 insns)
 * Category: game_input
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055A5E9(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055A5E9: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    ecx = edi;
    PUSH32(esp, 0x0055A5F7u); RECOMP_ABI_CALL(0x0055B9DFu, sub_0055B9DF); /* call 0x0055B9DF */

loc_0055A5F7: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x10 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0055A604; /* jb: below (unsigned <) */

loc_0055A600: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0055A604: ;
    eax = ecx + eax * 2;
    ecx = MEM32(0x762AF4);
    PUSH32(esp, ebx);
    eax = eax + eax * 2;
    PUSH32(esp, 1);
    esi = ecx + eax * 4;
    PUSH32(esp, 2);
    ecx = edi;
    PUSH32(esp, 0x0055A61Fu); RECOMP_ABI_CALL(0x0055B969u, sub_0055B969); /* call 0x0055B969 */

loc_0055A61F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055A66D; /* je: equal / zero */

loc_0055A623: ;
    SET_LO8(ecx, MEM8(eax + 2));
    MEM8(esi + 5) = LO8(ecx);
    _fa = (uint32_t)(MEM16(eax + 4)) & 0xFFFFu; _fb = (uint32_t)(0x40) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax + 4), 0x40 (16-bit) */
    ecx = edi;
    if (CMP_NE(_fa, _fb)) goto loc_0055A66F; /* jne: not equal / not zero */

loc_0055A632: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 2);
    PUSH32(esp, 0x0055A63Bu); RECOMP_ABI_CALL(0x0055B969u, sub_0055B969); /* call 0x0055B969 */

loc_0055A63B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055A66D; /* je: equal / zero */

loc_0055A63F: ;
    SET_LO8(ecx, MEM8(eax + 2));
    MEM8(esi + 6) = LO8(ecx);
    _fa = (uint32_t)(MEM16(eax + 4)) & 0xFFFFu; _fb = (uint32_t)(0x40) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax + 4), 0x40 (16-bit) */
    ecx = edi;
    if (CMP_NE(_fa, _fb)) goto loc_0055A66F; /* jne: not equal / not zero */

loc_0055A64E: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0055A654u); RECOMP_ABI_CALL(0x0055B86Eu, sub_0055B86E); /* call 0x0055B86E */

loc_0055A654: ;
    ecx = edi;
    MEM32(esi) = edi;
    PUSH32(esp, 0x0055A65Du); RECOMP_ABI_CALL(0x0055B87Bu, sub_0055B87B); /* call 0x0055B87B */

loc_0055A65D: ;
    PUSH32(esp, ebx);
    ecx = edi;
    MEM8(esi + 4) = LO8(eax);
    PUSH32(esp, 0x0055A668u); RECOMP_ABI_CALL(0x0055B87Fu, sub_0055B87F); /* call 0x0055B87F */

loc_0055A668: ;
    PUSH32(esp, ebx);
    ecx = edi;
    goto loc_0055A674;

loc_0055A66D: ;
    ecx = edi;

loc_0055A66F: ;
    PUSH32(esp, 0x80000400u);

loc_0055A674: ;
    PUSH32(esp, 0x0055A679u); RECOMP_ABI_CALL(0x0055B10Cu, sub_0055B10C); /* call 0x0055B10C */

loc_0055A679: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0055A67F
 * Original: 0x0055A67F - 0x0055A69C (29 bytes, 8 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055A67F(void)
{

loc_0055A67F: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(esp + 8);
    eax = eax + ecx * 2;
    ecx = MEM32(0x762AF4);
    eax = eax + eax * 2;
    eax = MEM32(ecx + eax * 4 + 8);
    eax = MEM32(eax);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0055A69C
 * Original: 0x0055A69C - 0x0055A76E (210 bytes, 61 insns)
 * Category: game_input
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055A69C(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055A69C: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x40000 (32-bit) */
    PUSH32(esp, edi);
    edi = MEM32(esi + 8);
    if (TEST_Z(_fa, _fb)) goto loc_0055A6CA; /* je: equal / zero */

loc_0055A6AF: ;
    edx = MEM32(esi + 0x24);
    MEM32(esi + 0x24) = MEM32(esi + 0x24) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x24)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM8(esi + 0x111) = 0x43;
    MEM32(esi + 0x120) = edx;
    eax = eax & 0xFFFBFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    goto loc_0055A6FF;

loc_0055A6CA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x20000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0055A6EC; /* je: equal / zero */

loc_0055A6D1: ;
    edx = MEM32(esi + 0x20);
    MEM32(esi + 0x20) = MEM32(esi + 0x20) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x20)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM8(esi + 0x111) = 0x43;
    MEM32(esi + 0x120) = edx;
    eax = eax & 0xFFFDFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    goto loc_0055A6FF;

loc_0055A6EC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x10000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0055A725; /* je: equal / zero */

loc_0055A6F3: ;
    MEM8(esi + 0x111) = 0xC3;
    eax = eax & 0xFFFEFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_0055A6FF: ;
    ecx = esi + 0x110;
    MEM8(ecx) = 0x1C;
    MEM32(esi + 0x118) = 0x55A69C;
    MEM32(esi + 0x11C) = esi;
    MEM32(esi + 0xC) = eax;
    PUSH32(esp, ecx);
    ecx = MEM32(edi);
    PUSH32(esp, 0x0055A723u); RECOMP_ABI_CALL(0x0055BC1Fu, sub_0055BC1F); /* call 0x0055BC1F */

loc_0055A723: ;
    goto loc_0055A769;

loc_0055A725: ;
    eax = eax & 0xFFF7FFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    MEM32(esi + 0xC) = eax;
    MEM32(esi + 8) = ebx;
    if (TEST_Z(_fa, _fb)) goto loc_0055A74D; /* je: equal / zero */

loc_0055A737: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    eax = esi + 0x12C;
    PUSH32(esp, eax);
    MEM32(edi + 8) = ebx;
    { uint32_t _icall_target = MEM32(0x56114C); PUSH32(esp, 0x0055A749u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0055A743u); } /* indirect call */
    }

loc_0055A749: ;
    MEM32(esi + 0xC) = MEM32(esi + 0xC) & 0xFFFFFFFEu;
    _fa = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_0055A74D: ;
    _fa = (uint32_t)(MEM8(esi + 0xC)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0xC), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0055A768; /* je: equal / zero */

loc_0055A753: ;
    ecx = MEM32(edi);
    PUSH32(esp, 0x0055A75Au); RECOMP_ABI_CALL(0x0055AD40u, sub_0055AD40); /* call 0x0055AD40 */

loc_0055A75A: ;
    MEM32(edi) = ebx;
    eax = MEM32(esi + 0xC);
    eax = eax & 0xFFFFFFFDu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax | 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esi + 0xC) = eax;

loc_0055A768: ;
    POP32(esp, ebx);

loc_0055A769: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0055A76E
 * Original: 0x0055A76E - 0x0055A788 (26 bytes, 10 insns)
 * Category: game_input
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055A76E(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055A76E: ;
    eax = MEM32(ecx + 0xC);
    edx = 0x80000;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0055A787; /* jne: not equal / not zero */

loc_0055A77A: ;
    PUSH32(esp, ecx);
    eax = eax | edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, 0);
    MEM32(ecx + 0xC) = eax;
    PUSH32(esp, 0x0055A787u); RECOMP_ABI_CALL(0x0055A69Cu, sub_0055A69C); /* call 0x0055A69C */

loc_0055A787: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0055A788
 * Original: 0x0055A788 - 0x0055A7BD (53 bytes, 19 insns)
 * Category: game_input
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055A788(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055A788: ;
    ecx = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0055A792u); RECOMP_ABI_CALL(0x0055B86Au, sub_0055B86A); /* call 0x0055B86A */

loc_0055A792: ;
    esi = eax;
    ecx = MEM32(esi + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055A7AF; /* je: equal / zero */

loc_0055A79B: ;
    eax = MEM32(ecx + 0xC);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 4 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0055A7AF; /* jne: not equal / not zero */

loc_0055A7A2: ;
    eax = eax | 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(ecx + 0xC) = eax;
    PUSH32(esp, 0x0055A7ADu); RECOMP_ABI_CALL(0x0055A76Eu, sub_0055A76E); /* call 0x0055A76E */

loc_0055A7AD: ;
    goto loc_0055A7B9;

loc_0055A7AF: ;
    ecx = MEM32(esi);
    PUSH32(esp, 0x0055A7B6u); RECOMP_ABI_CALL(0x0055AD40u, sub_0055AD40); /* call 0x0055AD40 */

loc_0055A7B6: ;
    MEM32(esi) = MEM32(esi) & 0;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_0055A7B9: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0055A7BD
 * Original: 0x0055A7BD - 0x0055A82A (109 bytes, 40 insns)
 * Category: game_input
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0055A7BD(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055A7BD: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    ecx = MEM32(ebp + 8);
    eax = MEM32(ebp + 0xC);
    PUSH32(esp, ebx);
    eax = eax + ecx * 2;
    ecx = MEM32(0x762AF4);
    PUSH32(esp, esi);
    eax = eax + eax * 2;
    PUSH32(esp, edi);
    edi = ecx + eax * 4;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x5610F0); PUSH32(esp, 0x0055A7DEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0055A7D8u); } /* indirect call */
    }

loc_0055A7DE: ;
    esi = MEM32(edi + 8);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 8), ebx (32-bit) */
    SET_LO8(ecx, LO8(eax));
    MEM8(ebp + 0xF) = LO8(ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_0055A814; /* je: equal / zero */

loc_0055A7ED: ;
    MEM32(esi + 0xC) = MEM32(esi + 0xC) | 1;
    _fa = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055A7F8u); RECOMP_ABI_CALL(0x0055A76Eu, sub_0055A76E); /* call 0x0055A76E */

loc_0055A7F8: ;
    SET_LO8(ecx, MEM8(ebp + 0xF));
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x5610E8); PUSH32(esp, 0x0055A801u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0055A7FBu); } /* indirect call */
    }

loc_0055A801: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    eax = esi + 0x12C;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x561150); PUSH32(esp, 0x0055A812u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0055A80Cu); } /* indirect call */
    }

loc_0055A812: ;
    goto loc_0055A81D;

loc_0055A814: ;
    MEM32(edi + 8) = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x5610E8); PUSH32(esp, 0x0055A81Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0055A817u); } /* indirect call */
    }

loc_0055A81D: ;
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055A823u); RECOMP_ABI_CALL(0x0055A5C1u, sub_0055A5C1); /* call 0x0055A5C1 */

loc_0055A823: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0055A82A
 * Original: 0x0055A82A - 0x0055A9DE (436 bytes, 118 insns)
 * Category: game_input
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0055A82A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055A82A: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + 8);
    eax = MEM32(ebp + 0xC);
    PUSH32(esp, ebx);
    eax = eax + ecx * 2;
    ecx = MEM32(0x762AF4);
    PUSH32(esp, esi);
    eax = eax + eax * 2;
    PUSH32(esp, edi);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ebp + -8) = ebx;
    edi = ecx + eax * 4;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x5610F0); PUSH32(esp, 0x0055A852u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0055A84Cu); } /* indirect call */
    }

loc_0055A852: ;
    MEM8(ebp + -1) = LO8(eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055A85Au); RECOMP_ABI_CALL(0x0055A5A6u, sub_0055A5A6); /* call 0x0055A5A6 */

loc_0055A85A: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055A867; /* jne: not equal / not zero */

loc_0055A860: ;
    esi = 0xC0000017u;
    goto loc_0055A876;

loc_0055A867: ;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi), ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_0055A886; /* jne: not equal / not zero */

loc_0055A86C: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055A871u); RECOMP_ABI_CALL(0x0055A5C1u, sub_0055A5C1); /* call 0x0055A5C1 */

loc_0055A871: ;
    esi = 0xC000009Du;

loc_0055A876: ;
    SET_LO8(ecx, MEM8(ebp + -1));
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x5610E8); PUSH32(esp, 0x0055A87Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0055A879u); } /* indirect call */
    }

loc_0055A87F: ;
    eax = esi;
    goto loc_0055A9D7;

loc_0055A886: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x55CBE7);
    eax = esi + 0x98;
    MEM32(edi + 8) = esi;
    PUSH32(esp, eax);
    MEM32(esi + 8) = edi;
    { uint32_t _icall_target = MEM32(0x5610E4); PUSH32(esp, 0x0055A89Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0055A898u); } /* indirect call */
    }

loc_0055A89E: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    eax = esi + 0x70;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x561148); PUSH32(esp, 0x0055A8A9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0055A8A3u); } /* indirect call */
    }

loc_0055A8A9: ;
    MEM32(esi + 0xC0) = MEM32(esi + 0xC0) & 0;
    _fa = (uint32_t)(MEM32(esi + 0xC0)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi + 0x130) = ebx;
    eax = esi + 0x134;
    ebx = esi + 0xB8;
    MEM8(esi + 0x12C) = 0;
    MEM8(esi + 0x12E) = 4;
    MEM32(esi + 0x138) = eax;
    MEM32(eax) = eax;
    MEM8(ebx) = 0x20;
    MEM8(esi + 0xB9) = 0x82;
    ecx = MEM32(edi);
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055A8EAu); RECOMP_ABI_CALL(0x0055BC1Fu, sub_0055BC1F); /* call 0x0055BC1F */

loc_0055A8EA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0055A98C; /* jl: less (signed <) */

loc_0055A8F2: ;
    MEM8(esi + 0xE) = MEM8(esi + 0xE) | 1;
    _fa = (uint32_t)(MEM8(esi + 0xE)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    MEM32(esi + 0xC0) = MEM32(esi + 0xC0) & 0;
    _fa = (uint32_t)(MEM32(esi + 0xC0)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM8(ebx) = 0x20;
    MEM8(esi + 0xB9) = 2;
    SET_LO8(eax, MEM8(edi + 5));
    MEM8(esi + 0xCD) = LO8(eax);
    MEM8(esi + 0xCE) = 2;
    MEM8(esi + 0xCF) = 0;
    MEM16(esi + 0xD4) = 0x40;
    ecx = MEM32(edi);
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055A92Fu); RECOMP_ABI_CALL(0x0055BC1Fu, sub_0055BC1F); /* call 0x0055BC1F */

loc_0055A92F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0055A98C; /* jl: less (signed <) */

loc_0055A933: ;
    eax = MEM32(esi + 0xC8);
    MEM8(esi + 0xE) = MEM8(esi + 0xE) | 2;
    _fa = (uint32_t)(MEM8(esi + 0xE)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    MEM32(esi + 0xC0) = MEM32(esi + 0xC0) & 0;
    _fa = (uint32_t)(MEM32(esi + 0xC0)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi + 0x20) = eax;
    MEM8(ebx) = 0x20;
    MEM8(esi + 0xB9) = 2;
    SET_LO8(eax, MEM8(edi + 6));
    MEM8(esi + 0xCD) = LO8(eax);
    MEM8(esi + 0xCE) = 2;
    MEM8(esi + 0xCF) = 0;
    MEM16(esi + 0xD4) = 0x40;
    ecx = MEM32(edi);
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055A979u); RECOMP_ABI_CALL(0x0055BC1Fu, sub_0055BC1F); /* call 0x0055BC1F */

loc_0055A979: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0055A98C; /* jl: less (signed <) */

loc_0055A97D: ;
    eax = MEM32(esi + 0xC8);
    MEM8(esi + 0xE) = MEM8(esi + 0xE) | 4;
    _fa = (uint32_t)(MEM8(esi + 0xE)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    MEM32(esi + 0x24) = eax;
    goto loc_0055A995;

loc_0055A98C: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055A992u); RECOMP_ABI_CALL(0x0055B8F7u, sub_0055B8F7); /* call 0x0055B8F7 */

loc_0055A992: ;
    MEM32(ebp + -8) = eax;

loc_0055A995: ;
    SET_LO8(ecx, MEM8(ebp + -1));
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x5610E8); PUSH32(esp, 0x0055A99Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0055A998u); } /* indirect call */
    }

loc_0055A99E: ;
    ecx = MEM32(ebp + -8);
    eax = 0xC0000000u;
    ecx = ecx & eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055A9B9; /* jne: not equal / not zero */

loc_0055A9AC: ;
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055A9B7u); RECOMP_ABI_CALL(0x0055A7BDu, sub_0055A7BD); /* call 0x0055A7BD */

loc_0055A9B7: ;
    goto loc_0055A9D4;

loc_0055A9B9: ;
    eax = MEM32(ebp + 0x10);
    MEM16(eax) = 0xC;
    PUSH32(esp, MEM32(esi + 4));
    PUSH32(esp, 0x560FB8);
    PUSH32(esp, MEM32(eax + 4));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055A9D1u); RECOMP_ABI_CALL(0x0046EC2Du, sub_0046EC2D); /* call 0x0046EC2D */

loc_0055A9D1: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0055A9D4: ;
    eax = MEM32(ebp + -8);

loc_0055A9D7: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0055A9DE
 * Original: 0x0055A9DE - 0x0055AA16 (56 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055A9DE(void)
{

loc_0055A9DE: ;
    eax = MEM32(0x56122C);
    MEM32(0x55841C) = eax;
    MEM32(0x558420) = eax;
    MEM32(0x55842C) = eax;
    MEM32(0x558430) = eax;
    MEM32(0x558434) = eax;
    MEM32(0x558438) = eax;
    MEM32(0x55843C) = eax;
    MEM32(0x558440) = eax;
    MEM32(0x55844C) = eax;
    MEM32(0x558450) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_0055AA16
 * Original: 0x0055AA16 - 0x0055AA28 (18 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055AA16(void)
{

loc_0055AA16: ;
    eax = ecx;
    MEM8(eax) = 0xFF;
    MEM8(eax + 1) = 0x80;
    MEM8(eax + 2) = 0x80;
    MEM8(eax + 3) = 0x80;
    esp += 4; return; /* ret */

}

/**
 * sub_0055AA28
 * Original: 0x0055AA28 - 0x0055AA78 (80 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055AA28(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055AA28: ;
    edx = ZX8(MEM8(ecx + 0x79));
    eax = MEM32(ecx + 0xE0);
    edx = edx << 5;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, esi);
    esi = eax + edx + 1;
    SET_LO8(eax, MEM8(esi));
    MEM8(ecx + 0x79) = LO8(eax);
    MEM8(esi) = 0x80;
    eax = MEM32(ecx + 0xE0);
    MEM8(eax + edx + 2) = 0x80;
    eax = MEM32(ecx + 0xE0);
    MEM8(eax + edx + 3) = 0x80;
    eax = MEM32(ecx + 0xE0);
    MEM32(eax + edx + 0x1C) = MEM32(eax + edx + 0x1C) & 0;
    _fa = (uint32_t)(MEM32(eax + edx + 0x1C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = MEM32(ecx + 0xE0);
    MEM8(eax + edx + 7) = 0xFF;
    eax = MEM32(ecx + 0xE0);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0055AA78
 * Original: 0x0055AA78 - 0x0055AAAA (50 bytes, 17 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055AA78(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055AA78: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0xE0);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((5) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    edx = ZX8(LO8(eax));
    edx = edx << 5;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM8(edx + ecx) = 0xFF;
    SET_LO8(ebx, MEM8(esi + 0x79));
    ecx = MEM32(esi + 0xE0);
    MEM8(edx + ecx + 1) = LO8(ebx);
    MEM8(esi + 0x79) = LO8(eax);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0055AAAA
 * Original: 0x0055AAAA - 0x0055AAC1 (23 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0055AAAA(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055AAAA: ;
    SET_LO8(eax, MEM8(ecx + 1));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x80) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x80 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055AABE; /* je: equal / zero */

loc_0055AAB1: ;
    eax = ZX8(LO8(eax));
    eax = eax << 5;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(MEM32(0x762BD8)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(0x762BD8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0055AABE: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_0055AAC1
 * Original: 0x0055AAC1 - 0x0055AAD8 (23 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0055AAC1(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055AAC1: ;
    SET_LO8(eax, MEM8(ecx + 2));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x80) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x80 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055AAD5; /* je: equal / zero */

loc_0055AAC8: ;
    eax = ZX8(LO8(eax));
    eax = eax << 5;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(MEM32(0x762BD8)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(0x762BD8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0055AAD5: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_0055AAD8
 * Original: 0x0055AAD8 - 0x0055AAEF (23 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0055AAD8(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055AAD8: ;
    SET_LO8(eax, MEM8(ecx + 3));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x80) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x80 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055AAEC; /* je: equal / zero */

loc_0055AADF: ;
    eax = ZX8(LO8(eax));
    eax = eax << 5;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(MEM32(0x762BD8)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(0x762BD8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0055AAEC: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_0055AAEF
 * Original: 0x0055AAEF - 0x0055ABB3 (196 bytes, 58 insns)
 * Category: game_input
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055AAEF(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_0055AAEF: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = 0x762AF8;
    PUSH32(esp, 0x0055AAFEu); RECOMP_ABI_CALL(0x0055AA28u, sub_0055AA28); /* call 0x0055AA28 */

loc_0055AAFE: ;
    esi = eax;
    _cf = 0; /* xor clears CF */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0055ABAD; /* je: equal / zero */

loc_0055AB0A: ;
    SET_LO8(eax, MEM8(esp + 0x10));
    MEM8(esi) = 0xFE;
    MEM8(esi + 4) = LO8(eax);
    MEM32(esi + 0x10) = ebx;
    eax = MEM32(edi + 0xC);
    PUSH32(esp, esi);
    ecx = edi;
    MEM32(esi + 0xC) = eax;
    PUSH32(esp, 0x0055AB25u); RECOMP_ABI_CALL(0x0055BB06u, sub_0055BB06); /* call 0x0055BB06 */

loc_0055AB25: ;
    _fa = (uint32_t)(MEM8(0x762AF8)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x762AF8), LO8(ebx) (8-bit) */
    _cf = (int)(_fa < _fb);
    SET_LO8(eax, MEM8(esp + 0x14));
    if (CMP_EQ(_fa, _fb)) goto loc_0055AB68; /* je: equal / zero */

loc_0055AB31: ;
    edi = esi + 0x18;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    MEM8(esi + 5) = LO8(eax);
    { uint32_t _icall_target = MEM32(0x561010); PUSH32(esp, 0x0055AB3Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0055AB38u); } /* indirect call */
    }

loc_0055AB3E: ;
    _fb = (uint32_t)(0xF4240) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM32(edi)) + (uint64_t)(0xF4240)) >> 32) & 1);
    MEM32(edi) = MEM32(edi) + 0xF4240;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x10) = ebx;
    { uint64_t _t = (uint64_t)(MEM32(edi + 4)) + (uint64_t)(ebx) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); MEM32(edi + 4) = (uint32_t)_t; }  /* adc */
    _fa = (uint32_t)(MEM32(edi + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* adc result */
    eax = MEM32(0x762B74);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0055AB5E; /* jne: not equal / not zero */

loc_0055AB53: ;
    MEM32(0x762B74) = esi;
    goto loc_0055ABAD;

loc_0055AB5B: ;
    eax = MEM32(eax + 0x10);

loc_0055AB5E: ;
    _fa = (uint32_t)(MEM32(eax + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x10), ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0055AB5B; /* jne: not equal / not zero */

loc_0055AB63: ;
    MEM32(eax + 0x10) = esi;
    goto loc_0055ABAD;

loc_0055AB68: ;
    MEM8(esi) = 0xFD;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x762B2C);
    MEM8(0x762AFA) = LO8(eax);
    _cf = 0; /* logical op clears CF */
    ecx = ecx | 0xFFFFFFFFu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, ecx);
    eax = 0xFFF0BDC0u;
    PUSH32(esp, eax);
    MEM8(0x762AF8) = 1;
    MEM8(0x762AF9) = LO8(ebx);
    MEM32(0x762B78) = esi;
    MEM8(0x762AFB) = 0x80;
    MEM8(esi + 5) = LO8(ebx);
    PUSH32(esp, 0x762B48);
    MEM8(0x762B70) = LO8(ebx);
    { uint32_t _icall_target = MEM32(0x561140); PUSH32(esp, 0x0055ABADu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0055ABA7u); } /* indirect call */
    }

loc_0055ABAD: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0055ABB3
 * Original: 0x0055ABB3 - 0x0055ABD5 (34 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055ABB3(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055ABB3: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x762B2C);
    ecx = ecx | 0xFFFFFFFFu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, ecx);
    eax = 0xFD050F80u;
    PUSH32(esp, eax);
    PUSH32(esp, 0x762B48);
    MEM8(0x762B70) = 1;
    { uint32_t _icall_target = MEM32(0x561140); PUSH32(esp, 0x0055ABD4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0055ABCEu); } /* indirect call */
    }

loc_0055ABD4: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0055ABD5
 * Original: 0x0055ABD5 - 0x0055AC26 (81 bytes, 20 insns)
 * Category: game_input
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055ABD5(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055ABD5: ;
    _fa = (uint32_t)(MEM32(esp + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 4), 0 (32-bit) */
    MEM8(0x762AFB) = 0x81;
    if (CMP_GE(_fas, _fbs)) goto loc_0055ABF0; /* jge: greater or equal (signed >=) */

loc_0055ABE3: ;
    PUSH32(esp, MEM32(esp + 8));
    PUSH32(esp, 0);
    PUSH32(esp, 0x0055ABEEu); RECOMP_ABI_CALL(0x0055B03Au, sub_0055B03A); /* call 0x0055B03A */

loc_0055ABEE: ;
    goto loc_0055AC23;

loc_0055ABF0: ;
    _fa = (uint32_t)(MEM32(esp + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 4), 0x1000000 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055AC02; /* jne: not equal / not zero */

loc_0055ABFA: ;
    eax = MEM32(esp + 8);
    MEM8(eax + 4) = MEM8(eax + 4) | 0x80;
    _fa = (uint32_t)(MEM8(eax + 4)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */

loc_0055AC02: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x762B2C);
    ecx = ecx | 0xFFFFFFFFu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, ecx);
    eax = 0xFFFE7960u;
    PUSH32(esp, eax);
    PUSH32(esp, 0x762B48);
    MEM8(0x762B70) = 2;
    { uint32_t _icall_target = MEM32(0x561140); PUSH32(esp, 0x0055AC23u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0055AC1Du); } /* indirect call */
    }

loc_0055AC23: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0055AC26
 * Original: 0x0055AC26 - 0x0055AC51 (43 bytes, 10 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055AC26(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055AC26: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x762B2C);
    ecx = ecx | 0xFFFFFFFFu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, ecx);
    eax = 0xFFFFB1E0u;
    PUSH32(esp, eax);
    PUSH32(esp, 0x762B48);
    MEM8(0x762AFB) = 0x84;
    MEM8(0x762B70) = 3;
    { uint32_t _icall_target = MEM32(0x561140); PUSH32(esp, 0x0055AC4Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0055AC48u); } /* indirect call */
    }

loc_0055AC4E: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0055AC51
 * Original: 0x0055AC51 - 0x0055AC82 (49 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055AC51(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055AC51: ;
    PUSH32(esp, ebx);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, esi);
    SET_LO8(eax, LO8(edx));

loc_0055AC5A: ;
    esi = ZX8(LO8(ebx));
    _fa = (uint32_t)(MEM32(ecx + esi * 4 + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(ecx + esi * 4 + 8), edx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0055AC74; /* je: equal / zero */

loc_0055AC63: ;
    edx = edx << 1;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    if ((_fa != 0)) goto loc_0055AC6C; /* jne: not equal / not zero */

loc_0055AC67: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(ebx, LO8(ebx) + 1);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0055AC6C: ;
    SET_LO8(eax, LO8(eax) + 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x80) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x80 (8-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0055AC5A; /* jb: below (unsigned <) */

loc_0055AC72: ;
    goto loc_0055AC7D;

loc_0055AC74: ;
    esi = ZX8(LO8(ebx));
    ecx = ecx + esi * 4 + 8;
    MEM32(ecx) = MEM32(ecx) | edx;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_0055AC7D: ;
    POP32(esp, esi);
    SET_LO8(eax, LO8(eax) & 0x7F);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0055AC82
 * Original: 0x0055AC82 - 0x0055ACB6 (52 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055AC82(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055AC82: ;
    PUSH32(esp, ebx);
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    SET_LO8(edx, LO8(edx) - 1);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x7Fu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0x1F) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0x1F (8-bit) */
    PUSH32(esp, esi);
    if (CMP_BE(_fa, _fb)) goto loc_0055ACA1; /* jbe: below or equal (unsigned <=) */

loc_0055AC8D: ;
    SET_LO8(eax, LO8(edx));
    _fb = (uint32_t)(0x20) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* sub source, before the write */
    SET_LO8(eax, LO8(eax) - 0x20);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sub result */
    SET_LO8(eax, LO8(eax) >> 5);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    SET_LO8(eax, LO8(eax) + 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    eax = ZX8(LO8(eax));
    SET_LO8(ebx, LO8(eax));

loc_0055AC9B: ;
    _fb = (uint32_t)(0xE0) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(edx, LO8(edx) + 0xE0);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0055AC9B; /* jne: not equal / not zero */

loc_0055ACA1: ;
    eax = ZX8(LO8(ebx));
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = ecx + eax * 4 + 8;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    SET_LO8(ecx, LO8(edx));
    esi = esi << LO8(ecx);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esi = ~esi;
    MEM32(eax) = MEM32(eax) & esi;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0055ACB6
 * Original: 0x0055ACB6 - 0x0055ACBD (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055ACB6(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055ACB6: ;
    MEM32(0x762BDC) = MEM32(0x762BDC) + 1;
    _fa = (uint32_t)(MEM32(0x762BDC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 4; return; /* ret */

}

/**
 * sub_0055ACBD
 * Original: 0x0055ACBD - 0x0055ACC4 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055ACBD(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055ACBD: ;
    MEM32(0x762BDC) = MEM32(0x762BDC) - 1;
    _fa = (uint32_t)(MEM32(0x762BDC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    esp += 4; return; /* ret */

}

/**
 * sub_0055ACC4
 * Original: 0x0055ACC4 - 0x0055ACD9 (21 bytes, 6 insns)
 * Category: game_input
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055ACC4(void)
{

loc_0055ACC4: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + -20);
    PUSH32(esp, 5);
    PUSH32(esp, MEM32(esp + 0xC));
    PUSH32(esp, 0x0055ACD6u); RECOMP_ABI_CALL(0x0055AAEFu, sub_0055AAEF); /* call 0x0055AAEF */

loc_0055ACD6: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0055ACD9
 * Original: 0x0055ACD9 - 0x0055AD3B (98 bytes, 39 insns)
 * Category: game_input
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055ACD9(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055ACD9: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(0x762B78);
    PUSH32(esp, edi);
    edi = MEM32(esi + 0xC);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x18;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM8(0x762AF9)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x762AF9), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055ACFB; /* je: equal / zero */

loc_0055ACF2: ;
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0055ACF9u); RECOMP_ABI_CALL(0x0055B03Au, sub_0055B03A); /* call 0x0055B03A */

loc_0055ACF9: ;
    goto loc_0055AD37;

loc_0055ACFB: ;
    ecx = esi;
    MEM8(0x762AFB) = LO8(ebx);
    PUSH32(esp, 0x0055AD08u); RECOMP_ABI_CALL(0x0055AAAAu, sub_0055AAAA); /* call 0x0055AAAA */

loc_0055AD08: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055AD23; /* jne: not equal / not zero */

loc_0055AD0C: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(eax, MEM8(esi + 4));
    PUSH32(esp, esi);
    PUSH32(esp, 0x55ABD5);
    eax = eax & 0x7F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0055AD21u); RECOMP_ABI_CALL(0x0055E0A9u, sub_0055E0A9); /* call 0x0055E0A9 */

loc_0055AD21: ;
    goto loc_0055AD37;

loc_0055AD23: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(ecx, MEM8(esi + 4));
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ecx = ecx & 0xFFFFFF7Fu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0055AD37u); RECOMP_ABI_CALL(0x0055D69Fu, sub_0055D69F); /* call 0x0055D69F */

loc_0055AD37: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0055AD3B
 * Original: 0x0055AD3B - 0x0055AD40 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055AD3B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0055AD3B: ;
    g_seh_ebp = ebp; sub_0055ABD5(); return; /* tail jmp 0x0055ABD5 */

}

/**
 * sub_0055AD40
 * Original: 0x0055AD40 - 0x0055ADB6 (118 bytes, 47 insns)
 * Category: game_input
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055AD40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055AD40: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(eax, MEM8(esi + 7));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xFF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xFF (8-bit) */
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_0055AD67; /* je: equal / zero */

loc_0055AD4C: ;
    ecx = MEM32(esi + 0x10);
    ecx = MEM32(ecx + 0x14);
    eax = ZX8(LO8(eax));
    eax = MEM32(ecx + eax * 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055AD67; /* je: equal / zero */

loc_0055AD5C: ;
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(esi + 0x14));
    PUSH32(esp, eax);
    PUSH32(esp, 0x0055AD67u); RECOMP_ABI_CALL(0x0055A4B4u, sub_0055A4B4); /* call 0x0055A4B4 */

loc_0055AD67: ;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi), 5 (8-bit) */
    ebx = 0x762AF8;
    if (CMP_NE(_fa, _fb)) goto loc_0055AD9B; /* jne: not equal / not zero */

loc_0055AD71: ;
    ecx = esi;
    PUSH32(esp, 0x0055AD78u); RECOMP_ABI_CALL(0x0055AAAAu, sub_0055AAAA); /* call 0x0055AAAA */

loc_0055AD78: ;
    edi = eax;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x0055AD82u); RECOMP_ABI_CALL(0x0055BB4Eu, sub_0055BB4E); /* call 0x0055BB4E */

loc_0055AD82: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055ADAA; /* jne: not equal / not zero */

loc_0055AD86: ;
    SET_LO8(edx, MEM8(edi + 5));
    ecx = MEM32(edi + 0xC);
    PUSH32(esp, 0x0055AD91u); RECOMP_ABI_CALL(0x0055AC82u, sub_0055AC82); /* call 0x0055AC82 */

loc_0055AD91: ;
    PUSH32(esp, edi);
    ecx = ebx;
    PUSH32(esp, 0x0055AD99u); RECOMP_ABI_CALL(0x0055AA78u, sub_0055AA78); /* call 0x0055AA78 */

loc_0055AD99: ;
    goto loc_0055ADAA;

loc_0055AD9B: ;
    SET_LO8(edx, MEM8(esi + 5));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055ADAA; /* je: equal / zero */

loc_0055ADA2: ;
    ecx = MEM32(esi + 0xC);
    PUSH32(esp, 0x0055ADAAu); RECOMP_ABI_CALL(0x0055AC82u, sub_0055AC82); /* call 0x0055AC82 */

loc_0055ADAA: ;
    PUSH32(esp, esi);
    ecx = ebx;
    PUSH32(esp, 0x0055ADB2u); RECOMP_ABI_CALL(0x0055AA78u, sub_0055AA78); /* call 0x0055AA78 */

loc_0055ADB2: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0055ADB6
 * Original: 0x0055ADB6 - 0x0055AE08 (82 bytes, 34 insns)
 * Category: game_input
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055ADB6(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055ADB6: ;
    ecx = MEM32(esp + 4);
    _fa = (uint32_t)(MEM8(ecx)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx), 4 (8-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_0055ADF2; /* jne: not equal / not zero */

loc_0055ADC0: ;
    PUSH32(esp, 0x0055ADC5u); RECOMP_ABI_CALL(0x0055AAC1u, sub_0055AAC1); /* call 0x0055AAC1 */

loc_0055ADC5: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055AE04; /* je: equal / zero */

loc_0055ADCB: ;
    PUSH32(esp, edi);

loc_0055ADCC: ;
    ecx = esi;
    PUSH32(esp, 0x0055ADD3u); RECOMP_ABI_CALL(0x0055AAD8u, sub_0055AAD8); /* call 0x0055AAD8 */

loc_0055ADD3: ;
    edi = eax;
    eax = MEM32(esi + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055ADE2; /* je: equal / zero */

loc_0055ADDC: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x0055ADE0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0055ADDDu); } /* indirect call */
    }

loc_0055ADE0: ;
    goto loc_0055ADE9;

loc_0055ADE2: ;
    ecx = esi;
    PUSH32(esp, 0x0055ADE9u); RECOMP_ABI_CALL(0x0055AD40u, sub_0055AD40); /* call 0x0055AD40 */

loc_0055ADE9: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    esi = edi;
    if (CMP_NE(_fa, _fb)) goto loc_0055ADCC; /* jne: not equal / not zero */

loc_0055ADEF: ;
    POP32(esp, edi);
    goto loc_0055AE04;

loc_0055ADF2: ;
    eax = MEM32(ecx + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055ADFF; /* je: equal / zero */

loc_0055ADF9: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x0055ADFDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0055ADFAu); } /* indirect call */
    }

loc_0055ADFD: ;
    goto loc_0055AE04;

loc_0055ADFF: ;
    PUSH32(esp, 0x0055AE04u); RECOMP_ABI_CALL(0x0055AD40u, sub_0055AD40); /* call 0x0055AD40 */

loc_0055AE04: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0055AE08
 * Original: 0x0055AE08 - 0x0055AEB7 (175 bytes, 50 insns)
 * Category: game_input
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0055AE08(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055AE08: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM8(0x762AF9)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x762AF9), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055AE20; /* je: equal / zero */

loc_0055AE18: ;
    PUSH32(esp, MEM32(ebp + 0xC));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055AE20u); RECOMP_ABI_CALL(0x0055ADB6u, sub_0055ADB6); /* call 0x0055ADB6 */

loc_0055AE20: ;
    eax = MEM32(0x762B74);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM8(0x762AF9) = LO8(ebx);
    if (CMP_NE(_fa, _fb)) goto loc_0055AE3D; /* jne: not equal / not zero */

loc_0055AE2F: ;
    MEM32(0x762B78) = ebx;
    MEM8(0x762AF8) = LO8(ebx);
    goto loc_0055AEB2;

loc_0055AE3D: ;
    MEM32(0x762B78) = eax;
    ecx = MEM32(eax + 0x10);
    MEM32(0x762B74) = ecx;
    SET_LO8(ecx, MEM8(eax + 5));
    MEM8(0x762AFA) = LO8(ecx);
    MEM8(0x762AFB) = 0x80;
    MEM8(eax) = 0xFD;
    eax = MEM32(0x762B78);
    MEM32(eax + 0x10) = ebx;
    eax = MEM32(0x762B78);
    MEM8(eax + 5) = LO8(ebx);
    eax = ebp + -8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x561010); PUSH32(esp, 0x0055AE78u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0055AE72u); } /* indirect call */
    }

loc_0055AE78: ;
    eax = MEM32(0x762B78);
    ecx = MEM32(ebp + -4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 0x1C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(eax + 0x1C) (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0055AE96; /* jl: less (signed <) */

loc_0055AE85: ;
    if (CMP_G(_fas, _fbs)) goto loc_0055AE8F; /* jg: greater (signed >) */

loc_0055AE87: ;
    ecx = MEM32(ebp + -8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 0x18)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(eax + 0x18) (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0055AE96; /* jbe: below or equal (unsigned <=) */

loc_0055AE8F: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055AE94u); RECOMP_ABI_CALL(0x0055ACD9u, sub_0055ACD9); /* call 0x0055ACD9 */

loc_0055AE94: ;
    goto loc_0055AEB2;

loc_0055AE96: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x762B2C);
    MEM8(0x762B70) = LO8(ebx);
    PUSH32(esp, MEM32(eax + 0x1C));
    PUSH32(esp, MEM32(eax + 0x18));
    PUSH32(esp, 0x762B48);
    { uint32_t _icall_target = MEM32(0x561140); PUSH32(esp, 0x0055AEB2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0055AEACu); } /* indirect call */
    }

loc_0055AEB2: ;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0055AEB7
 * Original: 0x0055AEB7 - 0x0055AF2E (119 bytes, 40 insns)
 * Category: game_input
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055AEB7(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055AEB7: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esp + 0xC));
    edi = ecx;
    PUSH32(esp, 0x0055AEC4u); RECOMP_ABI_CALL(0x0055BAD5u, sub_0055BAD5); /* call 0x0055BAD5 */

loc_0055AEC4: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055AF29; /* je: equal / zero */

loc_0055AECA: ;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x0055AED2u); RECOMP_ABI_CALL(0x0055BB4Eu, sub_0055BB4E); /* call 0x0055BB4E */

loc_0055AED2: ;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(0xFE) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi), 0xFE (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055AF09; /* jne: not equal / not zero */

loc_0055AED7: ;
    eax = MEM32(0x762B74);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055AEED; /* jne: not equal / not zero */

loc_0055AEE0: ;
    eax = MEM32(esi + 0x10);
    MEM32(0x762B74) = eax;
    goto loc_0055AEF8;

loc_0055AEEA: ;
    eax = MEM32(eax + 0x10);

loc_0055AEED: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(eax + 0x10) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055AEEA; /* jne: not equal / not zero */

loc_0055AEF2: ;
    ecx = MEM32(esi + 0x10);
    MEM32(eax + 0x10) = ecx;

loc_0055AEF8: ;
    MEM32(esi + 0x10) = MEM32(esi + 0x10) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x10)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, esi);
    ecx = 0x762AF8;
    PUSH32(esp, 0x0055AF07u); RECOMP_ABI_CALL(0x0055AA78u, sub_0055AA78); /* call 0x0055AA78 */

loc_0055AF07: ;
    goto loc_0055AF29;

loc_0055AF09: ;
    _fa = (uint32_t)(MEM8(0x762AF8)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x762AF8), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055AF23; /* je: equal / zero */

loc_0055AF12: ;
    _fa = (uint32_t)(MEM32(0x762B78)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x762B78), esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055AF23; /* jne: not equal / not zero */

loc_0055AF1A: ;
    MEM8(0x762AF9) = 1;
    goto loc_0055AF29;

loc_0055AF23: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0055AF29u); RECOMP_ABI_CALL(0x0055ADB6u, sub_0055ADB6); /* call 0x0055ADB6 */

loc_0055AF29: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0055AF2E
 * Original: 0x0055AF2E - 0x0055AF73 (69 bytes, 30 insns)
 * Category: game_input
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0055AF2E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055AF2E: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    _fa = (uint32_t)(MEM8(ecx)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx), 5 (8-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_0055AF42; /* jne: not equal / not zero */

loc_0055AF39: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055AF3Eu); RECOMP_ABI_CALL(0x0055AAAAu, sub_0055AAAA); /* call 0x0055AAAA */

loc_0055AF3E: ;
    esi = eax;
    goto loc_0055AF44;

loc_0055AF42: ;
    esi = ecx;

loc_0055AF44: ;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055AF4Bu); RECOMP_ABI_CALL(0x0055AAAAu, sub_0055AAAA); /* call 0x0055AAAA */

loc_0055AF4B: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055AF6F; /* je: equal / zero */

loc_0055AF51: ;
    SET_LO8(eax, MEM8(esi + 4));
    SET_LO8(eax, LO8(eax) & 0x7F);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    MEM8(ebp + -4) = LO8(eax);
    PUSH32(esp, MEM32(ebp + -4));
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055AF63u); RECOMP_ABI_CALL(0x0055AEB7u, sub_0055AEB7); /* call 0x0055AEB7 */

loc_0055AF63: ;
    PUSH32(esp, 5);
    PUSH32(esp, MEM32(ebp + -4));
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055AF6Fu); RECOMP_ABI_CALL(0x0055AAEFu, sub_0055AAEF); /* call 0x0055AAEF */

loc_0055AF6F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_0055AF73
 * Original: 0x0055AF73 - 0x0055AFF4 (129 bytes, 49 insns)
 * Category: game_input
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0055AF73(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055AF73: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM8(0x762AF9)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x762AF9), 0 (8-bit) */
    esi = ecx;
    MEM8(ebp + -4) = LO8(ebx);
    MEM8(0x762AFB) = 0xA;
    if (CMP_NE(_fa, _fb)) goto loc_0055AFB5; /* jne: not equal / not zero */

loc_0055AF93: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055AF98u); RECOMP_ABI_CALL(0x0055AAAAu, sub_0055AAAA); /* call 0x0055AAAA */

loc_0055AF98: ;
    edi = eax;
    PUSH32(esp, esi);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055AFA2u); RECOMP_ABI_CALL(0x0055BB4Eu, sub_0055BB4E); /* call 0x0055BB4E */

loc_0055AFA2: ;
    SET_LO8(eax, MEM8(0x762AFA));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055AFB5; /* je: equal / zero */

loc_0055AFAB: ;
    SET_LO8(ebx, LO8(eax));
    SET_LO8(eax, MEM8(esi + 4));
    SET_LO8(eax, LO8(eax) & 0x7F);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    MEM8(ebp + -4) = LO8(eax);

loc_0055AFB5: ;
    SET_LO8(edx, MEM8(esi + 5));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055AFC4; /* je: equal / zero */

loc_0055AFBC: ;
    ecx = MEM32(esi + 0xC);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055AFC4u); RECOMP_ABI_CALL(0x0055AC82u, sub_0055AC82); /* call 0x0055AC82 */

loc_0055AFC4: ;
    PUSH32(esp, esi);
    ecx = 0x762AF8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055AFCFu); RECOMP_ABI_CALL(0x0055AA78u, sub_0055AA78); /* call 0x0055AA78 */

loc_0055AFCF: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055AFE0; /* je: equal / zero */

loc_0055AFD3: ;
    SET_LO8(ebx, LO8(ebx) - 1);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x7Fu); /* dec result/SF/OF; CF unchanged */
    ecx = edi;
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(ebp + -4));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055AFE0u); RECOMP_ABI_CALL(0x0055AAEFu, sub_0055AAEF); /* call 0x0055AAEF */

loc_0055AFE0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    MEM8(0x762AF9) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055AFEFu); RECOMP_ABI_CALL(0x0055AE08u, sub_0055AE08); /* call 0x0055AE08 */

loc_0055AFEF: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_0055AFF4
 * Original: 0x0055AFF4 - 0x0055B007 (19 bytes, 5 insns)
 * Category: game_input
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055AFF4(void)
{

loc_0055AFF4: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, MEM32(esp + 8));
    ecx = MEM32(eax + -20);
    PUSH32(esp, 0x0055B004u); RECOMP_ABI_CALL(0x0055AEB7u, sub_0055AEB7); /* call 0x0055AEB7 */

loc_0055B004: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0055B007
 * Original: 0x0055B007 - 0x0055B03A (51 bytes, 13 insns)
 * Category: game_input
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055B007(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055B007: ;
    ecx = MEM32(esp + 8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(esp + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 4), eax (32-bit) */
    MEM8(0x762AFB) = 9;
    if (CMP_GE(_fas, _fbs)) goto loc_0055B025; /* jge: greater or equal (signed >=) */

loc_0055B01A: ;
    _fa = (uint32_t)(MEM8(0x762AF9)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x762AF9), LO8(eax) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055B02D; /* jne: not equal / not zero */

loc_0055B022: ;
    MEM8(ecx + 5) = LO8(eax);

loc_0055B025: ;
    _fa = (uint32_t)(MEM8(0x762AF9)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x762AF9), LO8(eax) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055B032; /* je: equal / zero */

loc_0055B02D: ;
    MEM8(0x762AFA) = LO8(eax);

loc_0055B032: ;
    PUSH32(esp, 0x0055B037u); RECOMP_ABI_CALL(0x0055AF73u, sub_0055AF73); /* call 0x0055AF73 */

loc_0055B037: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0055B03A
 * Original: 0x0055B03A - 0x0055B0A7 (109 bytes, 36 insns)
 * Category: game_input
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055B03A(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055B03A: ;
    _fa = (uint32_t)(MEM8(0x762AF9)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x762AF9), 0 (8-bit) */
    PUSH32(esp, esi);
    MEM8(0x762AFB) = 8;
    if (CMP_NE(_fa, _fb)) goto loc_0055B093; /* jne: not equal / not zero */

loc_0055B04B: ;
    esi = MEM32(esp + 0xC);
    ecx = esi;
    PUSH32(esp, 0x0055B056u); RECOMP_ABI_CALL(0x0055AAAAu, sub_0055AAAA); /* call 0x0055AAAA */

loc_0055B056: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055B07C; /* jne: not equal / not zero */

loc_0055B05B: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(eax, MEM8(esi + 4));
    eax = eax & 0x7F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, eax);
    eax = MEM32(esi + 0xC);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x18;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x0055B070u); RECOMP_ABI_CALL(0x0055E0F6u, sub_0055E0F6); /* call 0x0055E0F6 */

loc_0055B070: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0x0055B07Au); RECOMP_ABI_CALL(0x0055B007u, sub_0055B007); /* call 0x0055B007 */

loc_0055B07A: ;
    goto loc_0055B0A3;

loc_0055B07C: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(ecx, MEM8(esi + 4));
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    ecx = ecx & 0xFFFFFF7Fu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0055B091u); RECOMP_ABI_CALL(0x0055D69Fu, sub_0055D69F); /* call 0x0055D69F */

loc_0055B091: ;
    goto loc_0055B0A3;

loc_0055B093: ;
    ecx = MEM32(esp + 0xC);
    MEM8(0x762AFA) = 0;
    PUSH32(esp, 0x0055B0A3u); RECOMP_ABI_CALL(0x0055AF73u, sub_0055AF73); /* call 0x0055AF73 */

loc_0055B0A3: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0055B0A7
 * Original: 0x0055B0A7 - 0x0055B10C (101 bytes, 22 insns)
 * Category: game_input
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055B0A7(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055B0A7: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x762B48);
    { uint32_t _icall_target = MEM32(0x5611CC); PUSH32(esp, 0x0055B0B2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0055B0ACu); } /* indirect call */
    }

loc_0055B0B2: ;
    eax = MEM32(esp + 4);
    MEM8(0x762AFB) = 3;
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 4), 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0055B0D6; /* jl: less (signed <) */

loc_0055B0C3: ;
    _fa = (uint32_t)(MEM8(0x762AF9)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x762AF9), 0 (8-bit) */
    MEM32(0x762B04) = 0x55AC26;
    if (CMP_EQ(_fa, _fb)) goto loc_0055B0E0; /* je: equal / zero */

loc_0055B0D6: ;
    MEM32(0x762B04) = 0x55B03A;

loc_0055B0E0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    MEM8(0x762AFC) = 0x1C;
    MEM8(0x762AFD) = 0x43;
    eax = MEM32(esi + 0xC);
    PUSH32(esp, 0x762AFC);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x18;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x0055B104u); RECOMP_ABI_CALL(0x0055E6D3u, sub_0055E6D3); /* call 0x0055E6D3 */

loc_0055B104: ;
    MEM32(esi + 8) = MEM32(esi + 8) & 0;
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0055B10C
 * Original: 0x0055B10C - 0x0055B298 (396 bytes, 126 insns)
 * Category: game_input
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0055B10C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055B10C: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), ebx (32-bit) */
    PUSH32(esp, edi);
    MEM32(ebp + -4) = ecx;
    MEM8(0x762AFB) = 7;
    if (CMP_GE(_fas, _fbs)) goto loc_0055B13C; /* jge: greater or equal (signed >=) */

loc_0055B12B: ;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80000400u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 0x80000400u (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055B137; /* jne: not equal / not zero */

loc_0055B134: ;
    MEM32(ebp + -4) = ebx;

loc_0055B137: ;
    MEM32(esi + 0x10) = ebx;
    goto loc_0055B15D;

loc_0055B13C: ;
    SET_LO8(eax, MEM8(esi + 7));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xFF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xFF (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055B15D; /* je: equal / zero */

loc_0055B143: ;
    edx = MEM32(esi + 0x10);
    edx = MEM32(edx + 0x14);
    eax = ZX8(LO8(eax));
    eax = MEM32(edx + eax * 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055B15D; /* je: equal / zero */

loc_0055B153: ;
    PUSH32(esp, ecx);
    PUSH32(esp, MEM32(esi + 0x14));
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055B15Du); RECOMP_ABI_CALL(0x0055A4B4u, sub_0055A4B4); /* call 0x0055A4B4 */

loc_0055B15D: ;
    SET_LO8(eax, MEM8(esi));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 2 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055B272; /* je: equal / zero */

loc_0055B167: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055B272; /* je: equal / zero */

loc_0055B16F: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 5 (8-bit) */
    ecx = MEM32(esi + 8);
    edi = esi;
    MEM32(ebp + -12) = ecx;
    MEM32(esi + 8) = ebx;
    MEM32(ebp + -8) = 0x55AE08;
    if (CMP_NE(_fa, _fb)) goto loc_0055B223; /* jne: not equal / not zero */

loc_0055B189: ;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055B190u); RECOMP_ABI_CALL(0x0055AAD8u, sub_0055AAD8); /* call 0x0055AAD8 */

loc_0055B190: ;
    ecx = esi;
    ebx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055B199u); RECOMP_ABI_CALL(0x0055AAAAu, sub_0055AAAA); /* call 0x0055AAAA */

loc_0055B199: ;
    _fa = (uint32_t)(MEM8(0x762AF9)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x762AF9), 0 (8-bit) */
    edi = eax;
    if (CMP_NE(_fa, _fb)) goto loc_0055B23B; /* jne: not equal / not zero */

loc_0055B1A8: ;
    _fa = (uint32_t)(MEM32(esi + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x10), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055B1DD; /* jne: not equal / not zero */

loc_0055B1AE: ;
    PUSH32(esp, esi);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055B1B6u); RECOMP_ABI_CALL(0x0055BB4Eu, sub_0055BB4E); /* call 0x0055BB4E */

loc_0055B1B6: ;
    PUSH32(esp, esi);
    ecx = 0x762AF8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055B1C1u); RECOMP_ABI_CALL(0x0055AA78u, sub_0055AA78); /* call 0x0055AA78 */

loc_0055B1C1: ;
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055B1C8u); RECOMP_ABI_CALL(0x0055AAC1u, sub_0055AAC1); /* call 0x0055AAC1 */

loc_0055B1C8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055B1DD; /* jne: not equal / not zero */

loc_0055B1CC: ;
    PUSH32(esp, edi);
    MEM8(0x762AFA) = LO8(eax);
    PUSH32(esp, eax);

loc_0055B1D3: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055B1D8u); RECOMP_ABI_CALL(0x0055B03Au, sub_0055B03A); /* call 0x0055B03A */

loc_0055B1D8: ;
    goto loc_0055B291;

loc_0055B1DD: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055B23B; /* je: equal / zero */

loc_0055B1E1: ;
    eax = MEM32(0x762BD4);

loc_0055B1E6: ;
    ecx = ZX8(MEM8(eax));
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM8(eax + 1)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 1), 4 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055B1E6; /* jne: not equal / not zero */

loc_0055B1F1: ;
    MEM32(0x762BD4) = eax;
    SET_LO8(eax, MEM8(eax + 2));
    MEM8(ebx + 2) = LO8(eax);
    eax = MEM32(0x762BD4);
    SET_LO8(ecx, MEM8(eax + 5));
    MEM8(ebp + 9) = LO8(ecx);
    SET_LO8(ecx, MEM8(eax + 6));
    SET_LO8(eax, MEM8(eax + 7));
    MEM8(ebp + 0xA) = LO8(ecx);
    MEM8(ebp + 0xB) = LO8(eax);
    MEM8(ebp + 8) = 0x82;
    PUSH32(esp, MEM32(ebp + 8));
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055B221u); RECOMP_ABI_CALL(0x0055B298u, sub_0055B298); /* call 0x0055B298 */

loc_0055B221: ;
    goto loc_0055B291;

loc_0055B223: ;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), ebx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0055B23B; /* jge: greater or equal (signed >=) */

loc_0055B228: ;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055B234; /* jne: not equal / not zero */

loc_0055B22D: ;
    MEM8(0x762AFA) = 0;

loc_0055B234: ;
    MEM32(ebp + -8) = 0x55B03A;

loc_0055B23B: ;
    eax = MEM32(ebp + -8);
    MEM32(0x762B04) = eax;
    eax = MEM32(ebp + -12);
    MEM32(0x762B0C) = eax;
    MEM8(0x762AFC) = 0x1C;
    MEM8(0x762AFD) = 0x43;
    MEM32(0x762B08) = edi;
    eax = MEM32(edi + 0xC);
    PUSH32(esp, 0x762AFC);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x18;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055B270u); RECOMP_ABI_CALL(0x0055E6D3u, sub_0055E6D3); /* call 0x0055E6D3 */

loc_0055B270: ;
    goto loc_0055B291;

loc_0055B272: ;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), ebx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0055B28A; /* jge: greater or equal (signed >=) */

loc_0055B277: ;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055B283; /* jne: not equal / not zero */

loc_0055B27C: ;
    MEM8(0x762AFA) = 0;

loc_0055B283: ;
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    goto loc_0055B1D3;

loc_0055B28A: ;
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055B291u); RECOMP_ABI_CALL(0x0055AE08u, sub_0055AE08); /* call 0x0055AE08 */

loc_0055B291: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0055B298
 * Original: 0x0055B298 - 0x0055B2CC (52 bytes, 18 insns)
 * Category: game_input
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055B298(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055B298: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0055B2A0u); RECOMP_ABI_CALL(0x0055BD4Bu, sub_0055BD4B); /* call 0x0055BD4B */

loc_0055B2A0: ;
    _fa = (uint32_t)(MEM32(esi + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x14), 0x20 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055B2BC; /* je: equal / zero */

loc_0055B2A6: ;
    PUSH32(esp, MEM32(esp + 8));
    PUSH32(esp, 0x0055B2AFu); RECOMP_ABI_CALL(0x0055BFB7u, sub_0055BFB7); /* call 0x0055BFB7 */

loc_0055B2AF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi + 0x10) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0055B2BC; /* je: equal / zero */

loc_0055B2B6: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x0055B2BAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0055B2B7u); } /* indirect call */
    }

loc_0055B2BA: ;
    goto loc_0055B2C8;

loc_0055B2BC: ;
    ecx = esi;
    PUSH32(esp, 0x80000400u);
    PUSH32(esp, 0x0055B2C8u); RECOMP_ABI_CALL(0x0055B10Cu, sub_0055B10C); /* call 0x0055B10C */

loc_0055B2C8: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0055B2CC
 * Original: 0x0055B2CC - 0x0055B3A7 (219 bytes, 51 insns)
 * Category: game_input
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055B2CC(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055B2CC: ;
    PUSH32(esp, ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x762B48);
    { uint32_t _icall_target = MEM32(0x5611CC); PUSH32(esp, 0x0055B2D8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0055B2D2u); } /* indirect call */
    }

loc_0055B2D8: ;
    edx = MEM32(esp + 8);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM8(0x762AFB) = 2;
    _fa = (uint32_t)(MEM32(edx + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx + 4), ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0055B399; /* jl: less (signed <) */

loc_0055B2EE: ;
    _fa = (uint32_t)(MEM8(0x762AF9)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x762AF9), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055B399; /* jne: not equal / not zero */

loc_0055B2FA: ;
    _fa = (uint32_t)(MEM32(edx + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx + 0x14), 8 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0055B392; /* jb: below (unsigned <) */

loc_0055B304: ;
    SET_LO8(eax, MEM8(0x762B83));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x40 (8-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0055B392; /* ja: above (unsigned >) */

loc_0055B311: ;
    _fa = (uint32_t)(MEM8(0x762B7D)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x762B7D), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055B392; /* jne: not equal / not zero */

loc_0055B31A: ;
    SET_LO8(ecx, MEM8(0x762B7C));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 8 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055B32A; /* je: equal / zero */

loc_0055B325: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x12) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x12 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055B392; /* jne: not equal / not zero */

loc_0055B32A: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    ecx = MEM32(esi + 0xC);
    MEM8(esi + 6) = LO8(eax);
    PUSH32(esp, 0x0055B33Au); RECOMP_ABI_CALL(0x0055AC51u, sub_0055AC51); /* call 0x0055AC51 */

loc_0055B33A: ;
    MEM8(esi + 5) = LO8(eax);
    MEM32(0x762B04) = 0x55B0A7;
    MEM32(0x762B14) = ebx;
    MEM32(0x762B10) = ebx;
    MEM8(0x762B24) = LO8(ebx);
    MEM8(0x762B25) = 5;
    SET_LO16(eax, ZX8(MEM8(esi + 5)));
    MEM16(0x762B26) = LO16(eax);
    MEM16(0x762B28) = LO16(ebx);
    MEM16(0x762B2A) = LO16(ebx);
    PUSH32(esp, 0x0055B37Eu); RECOMP_ABI_CALL(0x0055ABB3u, sub_0055ABB3); /* call 0x0055ABB3 */

loc_0055B37E: ;
    eax = MEM32(esi + 0xC);
    PUSH32(esp, 0x762AFC);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x18;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x0055B38Fu); RECOMP_ABI_CALL(0x0055E6D3u, sub_0055E6D3); /* call 0x0055E6D3 */

loc_0055B38F: ;
    POP32(esp, esi);
    goto loc_0055B3A3;

loc_0055B392: ;
    MEM32(edx + 4) = 0x80000600u;

loc_0055B399: ;
    PUSH32(esp, MEM32(esp + 0xC));
    PUSH32(esp, edx);
    PUSH32(esp, 0x0055B3A3u); RECOMP_ABI_CALL(0x0055B0A7u, sub_0055B0A7); /* call 0x0055B0A7 */

loc_0055B3A3: ;
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0055B3A7
 * Original: 0x0055B3A7 - 0x0055B4EE (327 bytes, 96 insns)
 * Category: game_input
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0055B3A7(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055B3A7: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0x762B48);
    { uint32_t _icall_target = MEM32(0x5611CC); PUSH32(esp, 0x0055B3B7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0055B3B1u); } /* indirect call */
    }

loc_0055B3B7: ;
    ecx = MEM32(ebp + 8);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM8(0x762AFB) = 6;
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 4), ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0055B4DF; /* jl: less (signed <) */

loc_0055B3CC: ;
    _fa = (uint32_t)(MEM8(0x762AF9)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x762AF9), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055B4DF; /* jne: not equal / not zero */

loc_0055B3D8: ;
    esi = MEM32(ebp + 0xC);
    MEM32(esi + 0x18) = ebx;
    eax = 0x762B84;

loc_0055B3E3: ;
    edx = ZX8(MEM8(eax));
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x762BD4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x762BD4 (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0055B4CE; /* jae: above or equal (unsigned >=) */

loc_0055B3F3: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055B4CE; /* je: equal / zero */

loc_0055B3FC: ;
    _fa = (uint32_t)(MEM8(eax + 1)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 1), 4 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055B3E3; /* jne: not equal / not zero */

loc_0055B402: ;
    _fa = (uint32_t)(MEM8(0x762B88)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x762B88), 1 (8-bit) */
    MEM32(0x762BD4) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0055B499; /* je: equal / zero */

loc_0055B414: ;
    _fa = (uint32_t)(MEM8(0x762B73)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x762B73), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055B499; /* je: equal / zero */

loc_0055B41D: ;
    MEM8(esi) = 4;
    MEM8(esi + 2) = 0x80;
    _fa = (uint32_t)(MEM8(0x762B88)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x762B88), 0 (8-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0055B48A; /* jbe: below or equal (unsigned <=) */

loc_0055B42D: ;
    eax = ZX8(MEM8(0x762B73));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0055B48A; /* jbe: below or equal (unsigned <=) */

loc_0055B438: ;
    ecx = 0x762AF8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055B442u); RECOMP_ABI_CALL(0x0055AA28u, sub_0055AA28); /* call 0x0055AA28 */

loc_0055B442: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055B48A; /* je: equal / zero */

loc_0055B446: ;
    MEM8(eax) = 5;
    SET_LO8(ecx, MEM8(esi + 4));
    SET_LO8(ecx, LO8(ecx) & 0x80);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    SET_LO8(edx, LO8(ebx));
    SET_LO8(edx, LO8(edx) + 1);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    SET_LO8(ecx, LO8(ecx) | LO8(edx));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    MEM8(eax + 4) = LO8(ecx);
    SET_LO8(ecx, MEM8(esi + 5));
    MEM8(eax + 5) = LO8(ecx);
    ecx = MEM32(esi + 8);
    MEM32(eax + 8) = ecx;
    ecx = MEM32(esi + 0xC);
    MEM32(eax + 0xC) = ecx;
    SET_LO8(ecx, MEM8(esi + 6));
    MEM8(eax + 6) = LO8(ecx);
    ecx = MEM32(esi + 0x18);
    MEM32(eax + 0x18) = ecx;
    PUSH32(esp, eax);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055B47Eu); RECOMP_ABI_CALL(0x0055BB06u, sub_0055BB06); /* call 0x0055BB06 */

loc_0055B47E: ;
    eax = ZX8(MEM8(0x762B88));
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0055B42D; /* jb: below (unsigned <) */

loc_0055B48A: ;
    MEM32(esi + 8) = MEM32(esi + 8) & 0;
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055B495u); RECOMP_ABI_CALL(0x0055AAC1u, sub_0055AAC1); /* call 0x0055AAC1 */

loc_0055B495: ;
    esi = eax;
    goto loc_0055B49C;

loc_0055B499: ;
    MEM8(esi) = 3;

loc_0055B49C: ;
    eax = MEM32(0x762BD4);
    SET_LO8(eax, MEM8(eax + 2));
    MEM8(esi + 2) = LO8(eax);
    eax = MEM32(0x762BD4);
    SET_LO8(ecx, MEM8(eax + 5));
    MEM8(ebp + 0xD) = LO8(ecx);
    SET_LO8(ecx, MEM8(eax + 6));
    SET_LO8(eax, MEM8(eax + 7));
    MEM8(ebp + 0xE) = LO8(ecx);
    MEM8(ebp + 0xF) = LO8(eax);
    MEM8(ebp + 0xC) = 0x82;
    PUSH32(esp, MEM32(ebp + 0xC));
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055B4CCu); RECOMP_ABI_CALL(0x0055B298u, sub_0055B298); /* call 0x0055B298 */

loc_0055B4CC: ;
    goto loc_0055B4E8;

loc_0055B4CE: ;
    MEM8(0x762AFA) = 0;
    MEM32(ecx + 4) = 0x80000400u;
    PUSH32(esp, esi);
    goto loc_0055B4E2;

loc_0055B4DF: ;
    PUSH32(esp, MEM32(ebp + 0xC));

loc_0055B4E2: ;
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055B4E8u); RECOMP_ABI_CALL(0x0055B0A7u, sub_0055B0A7); /* call 0x0055B0A7 */

loc_0055B4E8: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0055B4EE
 * Original: 0x0055B4EE - 0x0055B5EE (256 bytes, 60 insns)
 * Category: game_input
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055B4EE(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0055B4EE: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    edi = MEM32(esi + 0xC);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x18;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM8(0x762AF9)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x762AF9), LO8(ebx) (8-bit) */
    MEM8(0x762AFB) = 1;
    if (CMP_EQ(_fa, _fb)) goto loc_0055B516; /* je: equal / zero */

loc_0055B50A: ;
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0055B511u); RECOMP_ABI_CALL(0x0055B03Au, sub_0055B03A); /* call 0x0055B03A */

loc_0055B511: ;
    goto loc_0055B5EA;

loc_0055B516: ;
    MEM32(esi + 0x18) = ebx;
    PUSH32(esp, ebp);
    MEM8(0x762AFC) = 0x20;
    MEM8(0x762AFD) = 2;
    MEM32(0x762B04) = ebx;
    MEM8(0x762B11) = LO8(ebx);
    MEM8(0x762B12) = LO8(ebx);
    MEM8(0x762B13) = LO8(ebx);
    MEM16(0x762B18) = 8;
    SET_LO8(eax, MEM8(esi + 4));
    ebp = 0x762AFC;
    PUSH32(esp, ebp);
    SET_LO8(eax, LO8(eax) >> 7);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    PUSH32(esp, edi);
    MEM8(0x762B1A) = LO8(eax);
    MEM8(0x762B10) = LO8(ebx);
    PUSH32(esp, 0x0055B566u); RECOMP_ABI_CALL(0x0055E6D3u, sub_0055E6D3); /* call 0x0055E6D3 */

loc_0055B566: ;
    eax = MEM32(0x762B0C);
    MEM32(esi + 8) = eax;
    MEM8(0x762AFC) = 0x30;
    MEM8(0x762AFD) = 0x40;
    MEM32(0x762B04) = 0x55B2CC;
    MEM32(0x762B08) = esi;
    eax = MEM32(esi + 8);
    PUSH32(esp, 8);
    MEM32(0x762B0C) = eax;
    POP32(esp, eax);
    MEM32(0x762B14) = 0x762B7C;
    MEM32(0x762B10) = eax;
    MEM8(0x762B18) = 2;
    MEM8(0x762B19) = LO8(ebx);
    MEM8(0x762B1A) = LO8(ebx);
    MEM8(0x762B24) = 0x80;
    MEM8(0x762B25) = 6;
    MEM16(0x762B26) = 0x100;
    MEM16(0x762B28) = LO16(ebx);
    MEM16(0x762B2A) = LO16(eax);
    PUSH32(esp, 0x0055B5E2u); RECOMP_ABI_CALL(0x0055ABB3u, sub_0055ABB3); /* call 0x0055ABB3 */

loc_0055B5E2: ;
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0055B5E9u); RECOMP_ABI_CALL(0x0055E6D3u, sub_0055E6D3); /* call 0x0055E6D3 */

loc_0055B5E9: ;
    POP32(esp, ebp);

loc_0055B5EA: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0055B5EE
 * Original: 0x0055B5EE - 0x0055B6A7 (185 bytes, 43 insns)
 * Category: game_input
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0055B5EE(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055B5EE: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x762B48);
    { uint32_t _icall_target = MEM32(0x5611CC); PUSH32(esp, 0x0055B5FCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0055B5F6u); } /* indirect call */
    }

loc_0055B5FC: ;
    eax = MEM32(ebp + 8);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM8(0x762AFB) = 5;
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 4), edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0055B62F; /* jl: less (signed <) */

loc_0055B60D: ;
    _fa = (uint32_t)(MEM8(0x762AF9)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x762AF9), LO8(edx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055B62F; /* jne: not equal / not zero */

loc_0055B615: ;
    SET_LO16(ecx, MEM16(0x762B86));
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(0x50) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), 0x50 (16-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0055B63C; /* jbe: below or equal (unsigned <=) */

loc_0055B622: ;
    MEM8(0x762AFA) = LO8(edx);
    MEM32(eax + 4) = 0x80000400u;

loc_0055B62F: ;
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055B638u); RECOMP_ABI_CALL(0x0055B0A7u, sub_0055B0A7); /* call 0x0055B0A7 */

loc_0055B638: ;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

loc_0055B63C: ;
    ecx = ZX16(LO16(ecx));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(eax + 0x14) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055B64D; /* je: equal / zero */

loc_0055B644: ;
    MEM32(eax + 4) = 0x80000000u;
    goto loc_0055B62F;

loc_0055B64D: ;
    SET_LO16(eax, ZX8(MEM8(0x762B89)));
    MEM32(0x762B04) = 0x55B3A7;
    MEM32(0x762B14) = edx;
    MEM32(0x762B10) = edx;
    MEM8(0x762B24) = LO8(edx);
    MEM8(0x762B25) = 9;
    MEM16(0x762B26) = LO16(eax);
    MEM16(0x762B28) = LO16(edx);
    MEM16(0x762B2A) = LO16(edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055B691u); RECOMP_ABI_CALL(0x0055ABB3u, sub_0055ABB3); /* call 0x0055ABB3 */

loc_0055B691: ;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(eax + 0xC);
    PUSH32(esp, 0x762AFC);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x18;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055B6A5u); RECOMP_ABI_CALL(0x0055E6D3u, sub_0055E6D3); /* call 0x0055E6D3 */

loc_0055B6A5: ;
    goto loc_0055B638;

}

/**
 * sub_0055B6A7
 * Original: 0x0055B6A7 - 0x0055B7F2 (331 bytes, 83 insns)
 * Category: game_input
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0055B6A7(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055B6A7: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM8(0x762AF9)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x762AF9), LO8(ebx) (8-bit) */
    PUSH32(esp, esi);
    esi = edx;
    MEM8(0x762AFB) = 4;
    if (CMP_EQ(_fa, _fb)) goto loc_0055B6CC; /* je: equal / zero */

loc_0055B6C0: ;
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055B6C7u); RECOMP_ABI_CALL(0x0055B03Au, sub_0055B03A); /* call 0x0055B03A */

loc_0055B6C7: ;
    goto loc_0055B7EE;

loc_0055B6CC: ;
    SET_LO8(eax, MEM8(0x762B80));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055B709; /* je: equal / zero */

loc_0055B6D5: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(9) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 9 (8-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    SET_LO8(eax, LO8(eax) + 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    MEM8(esi) = LO8(eax);
    SET_LO8(eax, MEM8(0x762B80));
    MEM8(ebp + -3) = LO8(eax);
    SET_LO8(eax, MEM8(0x762B81));
    MEM8(ebp + -2) = LO8(eax);
    SET_LO8(eax, MEM8(0x762B82));
    MEM8(ebp + -1) = LO8(eax);
    MEM8(ebp + -4) = 0x81;
    PUSH32(esp, MEM32(ebp + -4));
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055B704u); RECOMP_ABI_CALL(0x0055B298u, sub_0055B298); /* call 0x0055B298 */

loc_0055B704: ;
    goto loc_0055B7EE;

loc_0055B709: ;
    SET_LO16(eax, ZX8(MEM8(0x762B83)));
    MEM16(0x762B18) = LO16(eax);
    MEM8(0x762AFC) = 0x20;
    MEM8(0x762AFD) = 2;
    MEM32(0x762B04) = ebx;
    MEM8(0x762B11) = LO8(ebx);
    MEM8(0x762B12) = LO8(ebx);
    MEM8(0x762B13) = LO8(ebx);
    SET_LO8(eax, MEM8(esi + 4));
    SET_LO8(eax, LO8(eax) >> 7);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    MEM8(0x762B1A) = LO8(eax);
    SET_LO8(eax, MEM8(esi + 5));
    PUSH32(esp, edi);
    MEM8(0x762B10) = LO8(eax);
    eax = MEM32(esi + 0xC);
    edi = 0x762AFC;
    PUSH32(esp, edi);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x18;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055B763u); RECOMP_ABI_CALL(0x0055E6D3u, sub_0055E6D3); /* call 0x0055E6D3 */

loc_0055B763: ;
    eax = MEM32(0x762B0C);
    MEM32(esi + 8) = eax;
    MEM8(0x762AFC) = 0x30;
    MEM8(0x762AFD) = 0x40;
    MEM32(0x762B04) = 0x55B5EE;
    MEM32(0x762B08) = esi;
    eax = MEM32(esi + 8);
    PUSH32(esp, 0x50);
    MEM32(0x762B0C) = eax;
    POP32(esp, eax);
    MEM32(0x762B14) = 0x762B84;
    MEM32(0x762B10) = eax;
    MEM8(0x762B18) = 2;
    MEM8(0x762B19) = 1;
    MEM8(0x762B1A) = LO8(ebx);
    MEM8(0x762B24) = 0x80;
    MEM8(0x762B25) = 6;
    MEM16(0x762B26) = 0x200;
    MEM16(0x762B28) = LO16(ebx);
    MEM16(0x762B2A) = LO16(eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055B7E0u); RECOMP_ABI_CALL(0x0055ABB3u, sub_0055ABB3); /* call 0x0055ABB3 */

loc_0055B7E0: ;
    eax = MEM32(esi + 0xC);
    PUSH32(esp, edi);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x18;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055B7EDu); RECOMP_ABI_CALL(0x0055E6D3u, sub_0055E6D3); /* call 0x0055E6D3 */

loc_0055B7ED: ;
    POP32(esp, edi);

loc_0055B7EE: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_0055B7F2
 * Original: 0x0055B7F2 - 0x0055B846 (84 bytes, 25 insns)
 * Category: game_input
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055B7F2(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055B7F2: ;
    eax = ZX8(MEM8(0x762B70));
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_0055B83E; /* je: equal / zero */

loc_0055B7FE: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0055B826; /* je: equal / zero */

loc_0055B801: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0055B819; /* je: equal / zero */

loc_0055B804: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0055B843; /* jne: not equal / not zero */

loc_0055B807: ;
    edx = MEM32(0x762B78);
    ecx = 0x762AFC;
    PUSH32(esp, 0x0055B817u); RECOMP_ABI_CALL(0x0055B6A7u, sub_0055B6A7); /* call 0x0055B6A7 */

loc_0055B817: ;
    goto loc_0055B843;

loc_0055B819: ;
    ecx = MEM32(0x762B78);
    PUSH32(esp, 0x0055B824u); RECOMP_ABI_CALL(0x0055B4EEu, sub_0055B4EE); /* call 0x0055B4EE */

loc_0055B824: ;
    goto loc_0055B843;

loc_0055B826: ;
    eax = MEM32(0x762B78);
    eax = MEM32(eax + 0xC);
    PUSH32(esp, 0x762AFC);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x18;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x0055B83Cu); RECOMP_ABI_CALL(0x0055E562u, sub_0055E562); /* call 0x0055E562 */

loc_0055B83C: ;
    goto loc_0055B843;

loc_0055B83E: ;
    PUSH32(esp, 0x0055B843u); RECOMP_ABI_CALL(0x0055ACD9u, sub_0055ACD9); /* call 0x0055ACD9 */

loc_0055B843: ;
    esp += 20; return; /* ret 16 */

}

/**
 * sub_0055B846
 * Original: 0x0055B846 - 0x0055B857 (17 bytes, 5 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055B846(void)
{

loc_0055B846: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(esp + 0x10));
    { uint32_t _icall_target = MEM32(0x56114C); PUSH32(esp, 0x0055B854u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0055B84Eu); } /* indirect call */
    }

loc_0055B854: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0055B857
 * Original: 0x0055B857 - 0x0055B86A (19 bytes, 6 insns)
 * Category: game_input
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055B857(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055B857: ;
    eax = MEM32(ecx + 0xC);
    PUSH32(esp, MEM32(esp + 4));
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x18;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x0055B867u); RECOMP_ABI_CALL(0x0055E562u, sub_0055E562); /* call 0x0055E562 */

loc_0055B867: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0055B86A
 * Original: 0x0055B86A - 0x0055B86E (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055B86A(void)
{

loc_0055B86A: ;
    eax = MEM32(ecx + 0x1C);
    esp += 4; return; /* ret */

}

/**
 * sub_0055B86E
 * Original: 0x0055B86E - 0x0055B87B (13 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055B86E(void)
{

loc_0055B86E: ;
    edx = MEM32(esp + 4);
    eax = MEM32(ecx + 0x1C);
    MEM32(ecx + 0x1C) = edx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0055B87B
 * Original: 0x0055B87B - 0x0055B87F (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055B87B(void)
{

loc_0055B87B: ;
    SET_LO8(eax, MEM8(ecx + 2));
    esp += 4; return; /* ret */

}

/**
 * sub_0055B87F
 * Original: 0x0055B87F - 0x0055B889 (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055B87F(void)
{

loc_0055B87F: ;
    SET_LO8(eax, MEM8(esp + 4));
    MEM8(ecx + 7) = LO8(eax);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0055B889
 * Original: 0x0055B889 - 0x0055B8F7 (110 bytes, 36 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055B889(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055B889: ;
    eax = MEM32(esp + 4);
    ecx = 0xC000000Fu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0055B8D6; /* jg: greater (signed >) */

loc_0055B896: ;
    if (CMP_EQ(_fa, _fb)) goto loc_0055B8CF; /* je: equal / zero */

loc_0055B898: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80000000u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x80000000u (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055B8BB; /* je: equal / zero */

loc_0055B89F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80000100u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x80000100u (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055B8CA; /* je: equal / zero */

loc_0055B8A6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80000800u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x80000800u (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055B8C3; /* je: equal / zero */

loc_0055B8AD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xBFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xBFFFFFFFu (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0055B8E8; /* jle: less or equal (signed <=) */

loc_0055B8B4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC000000Eu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xC000000Eu (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0055B8E8; /* jg: greater (signed >) */

loc_0055B8BB: ;
    eax = 0x45D;

loc_0055B8C0: ;
    esp += 8; return; /* ret 4 */

loc_0055B8C3: ;
    eax = 0x5AA;
    goto loc_0055B8C0;

loc_0055B8CA: ;
    PUSH32(esp, 0xE);

loc_0055B8CC: ;
    POP32(esp, eax);
    goto loc_0055B8C0;

loc_0055B8CF: ;
    eax = 0x4C7;
    goto loc_0055B8C0;

loc_0055B8D6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC0000010u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xC0000010u (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055B8BB; /* je: equal / zero */

loc_0055B8DD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055B8F3; /* je: equal / zero */

loc_0055B8E1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x40000000 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055B8EC; /* je: equal / zero */

loc_0055B8E8: ;
    PUSH32(esp, 0x1F);
    goto loc_0055B8CC;

loc_0055B8EC: ;
    eax = 0x3E5;
    goto loc_0055B8C0;

loc_0055B8F3: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_0055B8C0;

}

/**
 * sub_0055B8F7
 * Original: 0x0055B8F7 - 0x0055B963 (108 bytes, 33 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055B8F7(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055B8F7: ;
    eax = MEM32(esp + 4);
    ecx = 0xC000000Fu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0055B93F; /* jg: greater (signed >) */

loc_0055B904: ;
    if (CMP_EQ(_fa, _fb)) goto loc_0055B938; /* je: equal / zero */

loc_0055B906: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80000000u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x80000000u (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055B929; /* je: equal / zero */

loc_0055B90D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80000100u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x80000100u (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055B931; /* je: equal / zero */

loc_0055B914: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80000800u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x80000800u (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055B931; /* je: equal / zero */

loc_0055B91B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xBFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xBFFFFFFFu (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0055B951; /* jle: less or equal (signed <=) */

loc_0055B922: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC000000Eu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xC000000Eu (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0055B951; /* jg: greater (signed >) */

loc_0055B929: ;
    eax = 0xC0000185u;

loc_0055B92E: ;
    esp += 8; return; /* ret 4 */

loc_0055B931: ;
    eax = 0xC000009Au;
    goto loc_0055B92E;

loc_0055B938: ;
    eax = 0xC0000120u;
    goto loc_0055B92E;

loc_0055B93F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC0000010u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xC0000010u (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055B929; /* je: equal / zero */

loc_0055B946: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055B95F; /* je: equal / zero */

loc_0055B94A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x40000000 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055B958; /* je: equal / zero */

loc_0055B951: ;
    eax = 0xC0000001u;
    goto loc_0055B92E;

loc_0055B958: ;
    eax = 0x103;
    goto loc_0055B92E;

loc_0055B95F: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_0055B92E;

}

/**
 * sub_0055B963
 * Original: 0x0055B963 - 0x0055B969 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055B963(void)
{

loc_0055B963: ;
    eax = MEM32(0x762BD4);
    esp += 4; return; /* ret */

}

/**
 * sub_0055B969
 * Original: 0x0055B969 - 0x0055B9DF (118 bytes, 49 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0055B969(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055B969: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    ecx = MEM32(0x762BD4);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ZX16(MEM16(0x762B86));
    PUSH32(esp, edi);
    _fb = (uint32_t)(0x762B84) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x762B84;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0055B984: ;
    SET_LO8(edx, MEM8(ecx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055B9D6; /* je: equal / zero */

loc_0055B98A: ;
    eax = ZX8(LO8(edx));
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0055B9D6; /* jae: above or equal (unsigned >=) */

loc_0055B993: ;
    SET_LO8(eax, MEM8(ecx + 1));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 5 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055B9CE; /* jne: not equal / not zero */

loc_0055B99A: ;
    SET_LO8(edx, MEM8(ecx + 3));
    SET_LO8(edx, LO8(edx) & 3);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(MEM8(ebp + 8)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), MEM8(ebp + 8) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055B9CE; /* jne: not equal / not zero */

loc_0055B9A5: ;
    _fa = (uint32_t)(MEM8(ebp + 8)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + 8), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055B9CE; /* je: equal / zero */

loc_0055B9AB: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(edx, MEM8(ecx + 2));
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = edx >> 7;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = ~edx;
    edx = edx & 1;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(MEM8(ebp + 0xC)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + 0xC), LO8(ebx) (8-bit) */
    SET_LO8(ebx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055B9CE; /* jne: not equal / not zero */

loc_0055B9C4: ;
    SET_LO8(edx, MEM8(ebp + 0x10));
    MEM8(ebp + 0x10) = MEM8(ebp + 0x10) - 1;
    _fa = (uint32_t)(MEM8(ebp + 0x10)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x7Fu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055B9D4; /* je: equal / zero */

loc_0055B9CE: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 4 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055B984; /* jne: not equal / not zero */

loc_0055B9D2: ;
    goto loc_0055B9D6;

loc_0055B9D4: ;
    edi = ecx;

loc_0055B9D6: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0055B9DF
 * Original: 0x0055B9DF - 0x0055B9E3 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055B9DF(void)
{

loc_0055B9DF: ;
    eax = MEM32(ecx + 0x14);
    esp += 4; return; /* ret */

}

/**
 * sub_0055B9E3
 * Original: 0x0055B9E3 - 0x0055BA69 (134 bytes, 49 insns)
 * Category: game_input
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055B9E3(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055B9E3: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = ecx;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM8(edi)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi), 5 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055BA11; /* jne: not equal / not zero */

loc_0055B9EE: ;
    PUSH32(esp, 0x0055B9F3u); RECOMP_ABI_CALL(0x0055AAAAu, sub_0055AAAA); /* call 0x0055AAAA */

loc_0055B9F3: ;
    ebx = eax;
    eax = MEM32(ebx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055BA11; /* je: equal / zero */

loc_0055B9FC: ;
    MEM32(edi + 8) = eax;
    eax = MEM32(esp + 0xC);
    MEM32(eax + 4) = MEM32(eax + 4) & 0;
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x0055BA0Du); RECOMP_ABI_CALL(0x0055BF5Au, sub_0055BF5A); /* call 0x0055BF5A */

loc_0055BA0D: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_0055BA64;

loc_0055BA11: ;
    SET_LO8(eax, MEM8(edi + 5));
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    MEM8(esi + 0x14) = LO8(eax);
    MEM8(esi + 0x15) = 0;
    MEM8(esi + 0x16) = 0;
    SET_LO16(eax, ZX8(MEM8(edi + 6)));
    MEM16(esi + 0x1C) = LO16(eax);
    SET_LO8(eax, MEM8(edi + 4));
    MEM32(esi + 0x18) = MEM32(esi + 0x18) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x18)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    SET_LO8(eax, LO8(eax) >> 7);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    MEM8(esi + 0x1E) = LO8(eax);
    MEM8(esi + 1) = 2;
    eax = MEM32(edi + 0xC);
    PUSH32(esp, esi);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x18;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x0055BA4Bu); RECOMP_ABI_CALL(0x0055E6D3u, sub_0055E6D3); /* call 0x0055E6D3 */

loc_0055BA4B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0055BA5F; /* jl: less (signed <) */

loc_0055BA4F: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    ecx = MEM32(esi + 0x10);
    MEM32(edi + 8) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_0055BA5F; /* je: equal / zero */

loc_0055BA59: ;
    ecx = MEM32(esi + 0x10);
    MEM32(ebx + 8) = ecx;

loc_0055BA5F: ;
    MEM32(esi + 0x10) = MEM32(esi + 0x10) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x10)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    POP32(esp, esi);

loc_0055BA64: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0055BA69
 * Original: 0x0055BA69 - 0x0055BAD5 (108 bytes, 38 insns)
 * Category: game_input
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055BA69(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055BA69: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = MEM32(esi + 8);
    MEM32(esi + 8) = MEM32(esi + 8) & 0;
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi), 5 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055BAA2; /* jne: not equal / not zero */

loc_0055BA79: ;
    PUSH32(esp, 0x0055BA7Eu); RECOMP_ABI_CALL(0x0055AAAAu, sub_0055AAAA); /* call 0x0055AAAA */

loc_0055BA7E: ;
    ecx = eax;
    PUSH32(esp, 0x0055BA85u); RECOMP_ABI_CALL(0x0055AAC1u, sub_0055AAC1); /* call 0x0055AAC1 */

loc_0055BA85: ;
    goto loc_0055BA93;

loc_0055BA87: ;
    _fa = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 8), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055BAC3; /* je: equal / zero */

loc_0055BA8C: ;
    ecx = eax;
    PUSH32(esp, 0x0055BA93u); RECOMP_ABI_CALL(0x0055AAD8u, sub_0055AAD8); /* call 0x0055AAD8 */

loc_0055BA93: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055BA87; /* jne: not equal / not zero */

loc_0055BA97: ;
    ecx = esi;
    PUSH32(esp, 0x0055BA9Eu); RECOMP_ABI_CALL(0x0055AAAAu, sub_0055AAAA); /* call 0x0055AAAA */

loc_0055BA9E: ;
    MEM32(eax + 8) = MEM32(eax + 8) & 0;
    _fa = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_0055BAA2: ;
    eax = MEM32(esp + 0xC);
    MEM32(eax + 0x18) = MEM32(eax + 0x18) & 0;
    _fa = (uint32_t)(MEM32(eax + 0x18)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, eax);
    MEM8(eax + 1) = 0x43;
    MEM32(eax + 0x10) = edi;
    eax = MEM32(esi + 0xC);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x18;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x0055BABEu); RECOMP_ABI_CALL(0x0055E6D3u, sub_0055E6D3); /* call 0x0055E6D3 */

loc_0055BABE: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0055BAC3: ;
    eax = MEM32(esp + 0xC);
    MEM32(eax + 4) = MEM32(eax + 4) & 0;
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x0055BAD1u); RECOMP_ABI_CALL(0x0055BF5Au, sub_0055BF5A); /* call 0x0055BF5A */

loc_0055BAD1: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_0055BABE;

}

/**
 * sub_0055BAD5
 * Original: 0x0055BAD5 - 0x0055BB06 (49 bytes, 19 insns)
 * Category: game_input
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055BAD5(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055BAD5: ;
    PUSH32(esp, 0x0055BADAu); RECOMP_ABI_CALL(0x0055AAC1u, sub_0055AAC1); /* call 0x0055AAC1 */

loc_0055BADA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055BB03; /* je: equal / zero */

loc_0055BADE: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ZX8(MEM8(esp + 0xC));
    esi = 0xFFFFFF7Fu;
    edi = edi & esi;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_0055BAEC: ;
    ecx = ZX8(MEM8(eax + 4));
    ecx = ecx & esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055BB01; /* je: equal / zero */

loc_0055BAF6: ;
    ecx = eax;
    PUSH32(esp, 0x0055BAFDu); RECOMP_ABI_CALL(0x0055AAD8u, sub_0055AAD8); /* call 0x0055AAD8 */

loc_0055BAFD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055BAEC; /* jne: not equal / not zero */

loc_0055BB01: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_0055BB03: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0055BB06
 * Original: 0x0055BB06 - 0x0055BB4E (72 bytes, 25 insns)
 * Category: game_input
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055BB06(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055BB06: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, ebx);
    ebx = eax;
    _fb = (uint32_t)(MEM32(0x762BD8)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - MEM32(0x762BD8);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    MEM8(eax + 3) = 0x80;
    _fb = (uint32_t)(MEM32(0x762BD8)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - MEM32(0x762BD8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((5) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    MEM8(eax + 1) = LO8(ecx);
    ecx = esi;
    PUSH32(esp, 0x0055BB30u); RECOMP_ABI_CALL(0x0055AAC1u, sub_0055AAC1); /* call 0x0055AAC1 */

loc_0055BB30: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055BB40; /* jne: not equal / not zero */

loc_0055BB34: ;
    MEM8(esi + 2) = LO8(ebx);
    goto loc_0055BB49;

loc_0055BB39: ;
    ecx = eax;
    PUSH32(esp, 0x0055BB40u); RECOMP_ABI_CALL(0x0055AAD8u, sub_0055AAD8); /* call 0x0055AAD8 */

loc_0055BB40: ;
    _fa = (uint32_t)(MEM8(eax + 3)) & 0xFFu; _fb = (uint32_t)(0x80) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 3), 0x80 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055BB39; /* jne: not equal / not zero */

loc_0055BB46: ;
    MEM8(eax + 3) = LO8(ebx);

loc_0055BB49: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0055BB4E
 * Original: 0x0055BB4E - 0x0055BBAA (92 bytes, 40 insns)
 * Category: game_input
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055BB4E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0055BB4E: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebp = ecx;
    PUSH32(esp, 0x0055BB59u); RECOMP_ABI_CALL(0x0055AAC1u, sub_0055AAC1); /* call 0x0055AAC1 */

loc_0055BB59: ;
    esi = MEM32(esp + 0x14);
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, esi (32-bit) */
    SET_LO8(ebx, 1);
    if (CMP_NE(_fa, _fb)) goto loc_0055BB73; /* jne: not equal / not zero */

loc_0055BB65: ;
    SET_LO8(eax, MEM8(esi + 3));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x80) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x80 (8-bit) */
    MEM8(ebp + 2) = LO8(eax);
    if (CMP_NE(_fa, _fb)) goto loc_0055BB99; /* jne: not equal / not zero */

loc_0055BB6F: ;
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    goto loc_0055BB99;

loc_0055BB73: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055BB99; /* je: equal / zero */

loc_0055BB77: ;
    ecx = edi;
    PUSH32(esp, 0x0055BB7Eu); RECOMP_ABI_CALL(0x0055AAD8u, sub_0055AAD8); /* call 0x0055AAD8 */

loc_0055BB7E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055BB8F; /* je: equal / zero */

loc_0055BB82: ;
    ecx = edi;
    PUSH32(esp, 0x0055BB89u); RECOMP_ABI_CALL(0x0055AAD8u, sub_0055AAD8); /* call 0x0055AAD8 */

loc_0055BB89: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055BB77; /* jne: not equal / not zero */

loc_0055BB8F: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055BB99; /* je: equal / zero */

loc_0055BB93: ;
    SET_LO8(eax, MEM8(esi + 3));
    MEM8(edi + 3) = LO8(eax);

loc_0055BB99: ;
    POP32(esp, edi);
    MEM8(esi + 3) = 0x80;
    MEM8(esi + 1) = 0x80;
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0055BBAA
 * Original: 0x0055BBAA - 0x0055BC1F (117 bytes, 41 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055BBAA(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055BBAA: ;
    eax = MEM32(esp + 4);
    edx = MEM32(eax + 4);
    edx = ZX8(MEM8(edx + 4));
    edx = edx & 0x7F;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 4 (32-bit) */
    MEM32(ecx + 0x14) = edx;
    if (CMP_L(_fas, _fbs)) goto loc_0055BBCA; /* jl: less (signed <) */

loc_0055BBC1: ;
    MEM32(ecx + 0x14) = 0x20;
    goto loc_0055BC1C;

loc_0055BBCA: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    edx = edx ^ 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ecx + 0x14) = edx;
    PUSH32(esp, edi);
    edi = MEM32(eax + esi * 4);
    _fa = (uint32_t)(MEM8(edi)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055BBFA; /* jne: not equal / not zero */

loc_0055BBDE: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055BC1A; /* je: equal / zero */

loc_0055BBE3: ;
    _fa = (uint32_t)(MEM8(0x558310)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x558310), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055BBF1; /* je: equal / zero */

loc_0055BBEC: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055BC1A; /* je: equal / zero */

loc_0055BBF1: ;
    MEM32(ecx + 0x14) = 0x20;
    goto loc_0055BC1A;

loc_0055BBFA: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 1 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0055BC1A; /* jbe: below or equal (unsigned <=) */

loc_0055BBFF: ;
    eax = MEM32(eax + 8);
    eax = ZX8(MEM8(eax + 4));
    eax = eax & 0x7F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0055BBF1; /* ja: above (unsigned >) */

loc_0055BC0F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055BC1A; /* jne: not equal / not zero */

loc_0055BC14: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx + 0x14) = edx;

loc_0055BC1A: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_0055BC1C: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0055BC1F
 * Original: 0x0055BC1F - 0x0055BD09 (234 bytes, 89 insns)
 * Category: game_input
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0055BC1F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055BC1F: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    SET_LO8(eax, MEM8(esi + 1));
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x40 (8-bit) */
    MEM8(ebp + -1) = LO8(ebx);
    if (TEST_Z(_fa, _fb)) goto loc_0055BC5F; /* je: equal / zero */

loc_0055BC36: ;
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 8), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055BC5F; /* jne: not equal / not zero */

loc_0055BC3B: ;
    edx = ebp + -12;
    MEM32(ebp + -8) = edx;
    MEM32(ebp + -12) = edx;
    edx = ebp + -20;
    MEM8(ebp + -1) = 1;
    MEM8(ebp + -20) = LO8(ebx);
    MEM8(ebp + -18) = 4;
    MEM32(ebp + -16) = ebx;
    MEM32(esi + 8) = 0x55B846;
    MEM32(esi + 0xC) = edx;

loc_0055BC5F: ;
    eax = ZX8(LO8(eax));
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0055BCB5; /* je: equal / zero */

loc_0055BC66: ;
    _fb = (uint32_t)(7) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 7;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_0055BCAD; /* je: equal / zero */

loc_0055BC6B: ;
    _fb = (uint32_t)(0x37) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x37;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_0055BC97; /* je: equal / zero */

loc_0055BC70: ;
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_0055BC8F; /* je: equal / zero */

loc_0055BC75: ;
    _fb = (uint32_t)(0x3F) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x3F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_0055BC87; /* je: equal / zero */

loc_0055BC7A: ;
    _fb = (uint32_t)(0x41) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x41;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa != 0)) goto loc_0055BCCA; /* jne: not equal / not zero */

loc_0055BC7F: ;
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055BC85u); RECOMP_ABI_CALL(0x0055BA69u, sub_0055BA69); /* call 0x0055BA69 */

loc_0055BC85: ;
    goto loc_0055BCD7;

loc_0055BC87: ;
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055BC8Du); RECOMP_ABI_CALL(0x0055B9E3u, sub_0055B9E3); /* call 0x0055B9E3 */

loc_0055BC8D: ;
    goto loc_0055BCD7;

loc_0055BC8F: ;
    eax = ecx + 0x18;
    MEM32(esi + 0x18) = eax;
    goto loc_0055BCCA;

loc_0055BC97: ;
    _fa = (uint32_t)(MEM32(esi + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x10), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055BCA2; /* jne: not equal / not zero */

loc_0055BC9C: ;
    eax = MEM32(ecx + 8);
    MEM32(esi + 0x10) = eax;

loc_0055BCA2: ;
    _fa = (uint32_t)(MEM8(esi + 0x29)) & 0xFFu; _fb = (uint32_t)(9) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x29), 9 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055BCCA; /* jne: not equal / not zero */

loc_0055BCA8: ;
    MEM32(ecx + 0x18) = ebx;
    goto loc_0055BCCA;

loc_0055BCAD: ;
    SET_LO8(eax, MEM8(ecx + 5));
    MEM8(esi + 0x14) = LO8(eax);
    goto loc_0055BCCA;

loc_0055BCB5: ;
    SET_LO8(eax, MEM8(ecx + 5));
    MEM8(esi + 0x14) = LO8(eax);
    eax = ecx + 0x18;
    MEM32(esi + 0x18) = eax;
    SET_LO8(eax, MEM8(ecx + 4));
    SET_LO8(eax, LO8(eax) >> 7);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    MEM8(esi + 0x1E) = LO8(eax);

loc_0055BCCA: ;
    eax = MEM32(ecx + 0xC);
    PUSH32(esp, esi);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x18;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055BCD7u); RECOMP_ABI_CALL(0x0055E6D3u, sub_0055E6D3); /* call 0x0055E6D3 */

loc_0055BCD7: ;
    _fa = (uint32_t)(MEM8(ebp + -1)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -1), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055BD03; /* je: equal / zero */

loc_0055BCDC: ;
    ecx = eax;
    ecx = ecx & 0xC0000000u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x40000000 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055BCFD; /* jne: not equal / not zero */

loc_0055BCEC: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    eax = ebp + -20;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x561150); PUSH32(esp, 0x0055BCFAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0055BCF4u); } /* indirect call */
    }

loc_0055BCFA: ;
    eax = MEM32(esi + 4);

loc_0055BCFD: ;
    MEM32(esi + 8) = ebx;
    MEM32(esi + 0xC) = ebx;

loc_0055BD03: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0055BD09
 * Original: 0x0055BD09 - 0x0055BD4B (66 bytes, 25 insns)
 * Category: game_input
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055BD09(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055BD09: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = esi + 4;
    edx = MEM32(eax);
    _fa = (uint32_t)(MEM8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edx), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055BD23; /* jne: not equal / not zero */

loc_0055BD18: ;
    SET_LO8(edx, MEM8(edx + 4));
    SET_LO8(edx, LO8(edx) & 0x7F);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 1 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055BD2C; /* je: equal / zero */

loc_0055BD23: ;
    MEM32(ecx + 0x14) = 0x20;
    goto loc_0055BD47;

loc_0055BD2C: ;
    edx = MEM32(esp + 0xC);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055BD3B; /* jne: not equal / not zero */

loc_0055BD35: ;
    MEM32(ecx + 0x14) = MEM32(ecx + 0x14) & 0;
    _fa = (uint32_t)(MEM32(ecx + 0x14)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    goto loc_0055BD47;

loc_0055BD3B: ;
    esi = MEM32(esi);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    MEM32(eax) = esi;
    PUSH32(esp, 0x0055BD47u); RECOMP_ABI_CALL(0x0055BBAAu, sub_0055BBAA); /* call 0x0055BBAA */

loc_0055BD47: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0055BD4B
 * Original: 0x0055BD4B - 0x0055BD96 (75 bytes, 32 insns)
 * Category: game_input
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0055BD4B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055BD4B: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    PUSH32(esp, 5);
    POP32(esp, esi);
    MEM32(ebp + -4) = edi;

loc_0055BD5B: ;
    ecx = MEM32(ebp + esi * 4 + -24);
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055BD65u); RECOMP_ABI_CALL(0x0055AAAAu, sub_0055AAAA); /* call 0x0055AAAA */

loc_0055BD65: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0 (8-bit) */
    MEM32(ebp + esi * 4 + -24) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_0055BD5B; /* jne: not equal / not zero */

loc_0055BD6E: ;
    edx = MEM32(0x561128);
    PUSH32(esp, 5);
    POP32(esp, eax);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(MEM8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edx), 1 (8-bit) */
    ecx = ebp + esi * 4 + -24;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = edi;
    if (TEST_Z(_fa, _fb)) goto loc_0055BD8D; /* je: equal / zero */

loc_0055BD86: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055BD8Bu); RECOMP_ABI_CALL(0x0055BD09u, sub_0055BD09); /* call 0x0055BD09 */

loc_0055BD8B: ;
    goto loc_0055BD92;

loc_0055BD8D: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055BD92u); RECOMP_ABI_CALL(0x0055BBAAu, sub_0055BBAA); /* call 0x0055BBAA */

loc_0055BD92: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_0055BD96
 * Original: 0x0055BD96 - 0x0055BDEC (86 bytes, 34 insns)
 * Category: game_input
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0055BD96(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055BD96: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + 8);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055BDA6u); RECOMP_ABI_CALL(0x0055BED5u, sub_0055BED5); /* call 0x0055BED5 */

loc_0055BDA6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055BDB5; /* jne: not equal / not zero */

loc_0055BDAA: ;
    PUSH32(esp, 0x57);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055BDB1u); RECOMP_ABI_CALL(0x0042C2D4u, sub_0042C2D4); /* call 0x0042C2D4 */

loc_0055BDB1: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_0055BDE8;

loc_0055BDB5: ;
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0x14);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055BDC0; /* jne: not equal / not zero */

loc_0055BDBD: ;
    esi = MEM32(eax + 0x10);

loc_0055BDC0: ;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), 1 (32-bit) */
    edx = MEM32(ebp + 0xC);
    if (CMP_NE(_fa, _fb)) goto loc_0055BDCC; /* jne: not equal / not zero */

loc_0055BDC9: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0055BDCC: ;
    PUSH32(esp, esi);
    ecx = ebp + -4;
    PUSH32(esp, ecx);
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055BDD8u); RECOMP_ABI_CALL(0x0055F34Au, sub_0055F34A); /* call 0x0055F34A */

loc_0055BDD8: ;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    POP32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_0055BDE5; /* jne: not equal / not zero */

loc_0055BDDF: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055BDE5u); RECOMP_ABI_CALL(0x0042C2D4u, sub_0042C2D4); /* call 0x0042C2D4 */

loc_0055BDE5: ;
    eax = MEM32(ebp + -4);

loc_0055BDE8: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_0055BDEC
 * Original: 0x0055BDEC - 0x0055BDF8 (12 bytes, 3 insns)
 * Category: game_input
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055BDEC(void)
{

loc_0055BDEC: ;
    ecx = MEM32(esp + 4);
    PUSH32(esp, 0x0055BDF5u); RECOMP_ABI_CALL(0x0055EFB6u, sub_0055EFB6); /* call 0x0055EFB6 */

loc_0055BDF5: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0055BDF8
 * Original: 0x0055BDF8 - 0x0055BE6B (115 bytes, 41 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055BDF8(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055BDF8: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x5610F0); PUSH32(esp, 0x0055BE02u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0055BDFCu); } /* indirect call */
    }

loc_0055BE02: ;
    edx = MEM32(esp + 0xC);
    ecx = MEM32(edx + 0xA3);
    _fa = (uint32_t)(MEM8(ecx + 0x28)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ecx + 0x28), 0x10 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0055BE17; /* je: equal / zero */

loc_0055BE12: ;
    PUSH32(esp, 0x57);
    POP32(esp, esi);
    goto loc_0055BE5C;

loc_0055BE17: ;
    ecx = MEM32(edx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055BE23; /* je: equal / zero */

loc_0055BE1D: ;
    _fa = (uint32_t)(MEM8(ecx + 4)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ecx + 4), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0055BE28; /* je: equal / zero */

loc_0055BE23: ;
    ebx = 0x48F;

loc_0055BE28: ;
    ecx = MEM32(edx + 8);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    MEM32(edi) = ecx;
    MEM8(edx + 0xA2) = MEM8(edx + 0xA2) & 0xEF;
    _fa = (uint32_t)(MEM8(edx + 0xA2)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    ecx = MEM32(edx + 0xA3);
    ecx = MEM32(ecx + 8);
    ecx = ZX8(MEM8(ecx));
    esi = edx + 0x14;
    edx = ecx;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
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
    esi = ebx;
    POP32(esp, edi);

loc_0055BE5C: ;
    SET_LO8(ecx, LO8(eax));
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x5610E8); PUSH32(esp, 0x0055BE64u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0055BE5Eu); } /* indirect call */
    }

loc_0055BE64: ;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0055BE6B
 * Original: 0x0055BE6B - 0x0055BE9E (51 bytes, 17 insns)
 * Category: game_input
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055BE6B(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055BE6B: ;
    ecx = MEM32(esp + 4);
    eax = ecx + 0xA3;
    edx = MEM32(eax);
    _fa = (uint32_t)(MEM8(edx + 0x28)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edx + 0x28), 0x20 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0055BE82; /* je: equal / zero */

loc_0055BE7D: ;
    PUSH32(esp, 0x57);
    POP32(esp, eax);
    goto loc_0055BE9B;

loc_0055BE82: ;
    edx = MEM32(esp + 8);
    MEM8(edx + 0x40) = 0;
    eax = MEM32(eax);
    eax = MEM32(eax + 0xC);
    SET_LO8(eax, MEM8(eax));
    _fb = (uint32_t)(2) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(eax, LO8(eax) + 2);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    MEM8(edx + 0x41) = LO8(eax);
    PUSH32(esp, 0x0055BE9Bu); RECOMP_ABI_CALL(0x0055F04Au, sub_0055F04A); /* call 0x0055F04A */

loc_0055BE9B: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0055BE9E
 * Original: 0x0055BE9E - 0x0055BED5 (55 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055BE9E(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055BE9E: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    eax = 0x5582E4;
    PUSH32(esp, edi);
    edi = eax;
    esi = 0x5582EC;
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, esi (32-bit) */
    MEM8(edx) = 0;
    if (CMP_AE(_fa, _fb)) goto loc_0055BEC9; /* jae: above or equal (unsigned >=) */

loc_0055BEB6: ;
    edi = MEM32(eax);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055BEC2; /* je: equal / zero */

loc_0055BEBC: ;
    _fa = (uint32_t)(MEM8(edi)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi), LO8(ecx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055BECF; /* je: equal / zero */

loc_0055BEC0: ;
    SET_LO8(ebx, LO8(ebx) + 1);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */

loc_0055BEC2: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0055BEB6; /* jb: below (unsigned <) */

loc_0055BEC9: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0055BECB: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0055BECF: ;
    MEM8(edx) = LO8(ebx);
    eax = MEM32(eax);
    goto loc_0055BECB;

}

/**
 * sub_0055BED5
 * Original: 0x0055BED5 - 0x0055BF00 (43 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055BED5(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055BED5: ;
    eax = 0x5582E4;
    PUSH32(esp, esi);
    edx = eax;
    esi = 0x5582EC;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, esi (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0055BEF8; /* jae: above or equal (unsigned >=) */

loc_0055BEE6: ;
    edx = MEM32(eax);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055BEF1; /* je: equal / zero */

loc_0055BEEC: ;
    _fa = (uint32_t)(MEM32(edx + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx + 4), ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055BEFC; /* je: equal / zero */

loc_0055BEF1: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0055BEE6; /* jb: below (unsigned <) */

loc_0055BEF8: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0055BEFC: ;
    eax = MEM32(eax);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0055BF00
 * Original: 0x0055BF00 - 0x0055BF5A (90 bytes, 35 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055BF00(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055BF00: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, edi);
    edx = ecx;
    MEM32(edx + 0x98) = eax;
    eax = MEM32(esp + 0xC);
    MEM32(edx + 0x9C) = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM8(edx + 0xA0) = 0;
    MEM8(edx + 0xA1) = 0;
    PUSH32(esp, 0xC);
    POP32(esp, ecx);
    edi = edx;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    MEM16(edi) = LO16(eax); edi += RECOMP_DF_STEP(2); /* stosw */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0xC);
    POP32(esp, ecx);
    edi = edx + 0x32;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    MEM16(edi) = LO16(eax); edi += RECOMP_DF_STEP(2); /* stosw */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0xC);
    POP32(esp, ecx);
    edi = edx + 0x64;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    MEM16(edi) = LO16(eax); edi += RECOMP_DF_STEP(2); /* stosw */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = edx + 0xA4;
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    eax = edx;
    POP32(esp, edi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0055BF5A
 * Original: 0x0055BF5A - 0x0055BF6E (20 bytes, 8 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055BF5A(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055BF5A: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055BF6B; /* je: equal / zero */

loc_0055BF65: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(eax + 0xC));
    PUSH32(esp, eax);
    { uint32_t _icall_target = ecx; PUSH32(esp, 0x0055BF6Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0055BF69u); } /* indirect call */
    }

loc_0055BF6B: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0055BF6E
 * Original: 0x0055BF6E - 0x0055BFB7 (73 bytes, 26 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0055BF6E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055BF6E: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = ZX8(MEM8(ebp + 0xC));
    MEM32(ebp + -16) = MEM32(ebp + -16) & 0;
    _fa = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebp + -8) = MEM32(ebp + -8) & 0;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebp + -12) = 9;
    MEM32(ebp + -4) = 0xD;
    ecx = MEM32(ebp + eax * 4 + -16);
    eax = ZX16(MEM16(ebp + 8));
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = (uint32_t)((int32_t)eax * (int32_t)0x38);
    PUSH32(esp, esi);
    PUSH32(esp, 6);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)esi);
      edx = (uint32_t)(_dividend % (uint32_t)esi); }
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    POP32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_0055BFAA; /* jne: not equal / not zero */

loc_0055BFA8: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0055BFAA: ;
    _fa = (uint32_t)(MEM8(ebp + 0x10)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + 0x10), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055BFB3; /* je: equal / zero */

loc_0055BFB0: ;
    eax = eax << 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */

loc_0055BFB3: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0055BFB7
 * Original: 0x0055BFB7 - 0x0055BFEC (53 bytes, 22 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055BFB7(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055BFB7: ;
    PUSH32(esp, esi);
    eax = 0x5582F4;
    esi = 0x55830C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    ecx = eax;
    if (CMP_AE(_fa, _fb)) goto loc_0055BFE2; /* jae: above or equal (unsigned >=) */

loc_0055BFC8: ;
    edx = MEM32(esp + 8);

loc_0055BFCC: ;
    eax = MEM32(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055BFDB; /* je: equal / zero */

loc_0055BFD2: ;
    _fa = (uint32_t)(HI8(edx)) & 0xFFu; _fb = (uint32_t)(MEM8(eax + 1)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp HI8(edx), MEM8(eax + 1) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055BFDB; /* jne: not equal / not zero */

loc_0055BFD7: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(MEM8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), MEM8(eax) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055BFE8; /* je: equal / zero */

loc_0055BFDB: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0055BFCC; /* jb: below (unsigned <) */

loc_0055BFE2: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0055BFE4: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0055BFE8: ;
    eax = MEM32(ecx);
    goto loc_0055BFE4;

}

/**
 * sub_0055BFEC
 * Original: 0x0055BFEC - 0x0055C00C (32 bytes, 13 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0055BFEC(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */

loc_0055BFEC: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    SET_LO8(eax, MEM8(ebp + 0xB));
    MEM8(ebp + -4) = LO8(eax);
    SET_LO8(eax, MEM8(ebp + 0xA));
    MEM8(ebp + -3) = LO8(eax);
    eax = MEM32(ebp + 8);
    MEM8(ebp + -2) = HI8(eax);
    MEM8(ebp + -1) = LO8(eax);
    eax = MEM32(ebp + -4);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0055C00C
 * Original: 0x0055C00C - 0x0055C066 (90 bytes, 33 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0055C00C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055C00C: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    esi = MEM32(edi + 0x18);
    ebx = 0x103;
    { uint32_t _icall_target = MEM32(0x5610F0); PUSH32(esp, 0x0055C023u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0055C01Du); } /* indirect call */
    }

loc_0055C023: ;
    _fa = (uint32_t)(MEM8(esi + 0xC)) & 0xFFu; _fb = (uint32_t)(6) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0xC), 6 (8-bit) */
    ecx = MEM32(ebp + 0xC);
    MEM8(ebp + 0xB) = LO8(eax);
    if (TEST_Z(_fa, _fb)) goto loc_0055C043; /* je: equal / zero */

loc_0055C02F: ;
    eax = 0xC000009Du;
    SET_LO8(edx, 0); /* xor self */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    ebx = eax;
    MEM32(ecx + 0x10) = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x5610DC); PUSH32(esp, 0x0055C041u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0055C03Bu); } /* indirect call */
    }

loc_0055C041: ;
    goto loc_0055C054;

loc_0055C043: ;
    eax = MEM32(ecx + 0x5C);
    MEM8(eax + 3) = MEM8(eax + 3) | 1;
    _fa = (uint32_t)(MEM8(eax + 3)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(0x561230); PUSH32(esp, 0x0055C054u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0055C04Eu); } /* indirect call */
    }

loc_0055C054: ;
    SET_LO8(ecx, MEM8(ebp + 0xB));
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x5610E8); PUSH32(esp, 0x0055C05Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0055C057u); } /* indirect call */
    }

loc_0055C05D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0055C066
 * Original: 0x0055C066 - 0x0055C0A6 (64 bytes, 21 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055C066(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055C066: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    ecx = MEM32(esi + 0x10);
    MEM32(ecx + 0x10) = eax;
    ecx = 0xC0000000u;
    eax = eax & ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    eax = MEM32(esi + 0x10);
    if (CMP_NE(_fa, _fb)) goto loc_0055C089; /* jne: not equal / not zero */

loc_0055C083: ;
    MEM32(eax + 0x14) = MEM32(eax + 0x14) & 0;
    _fa = (uint32_t)(MEM32(eax + 0x14)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    goto loc_0055C08F;

loc_0055C089: ;
    ecx = MEM32(esi + 0x2C);
    MEM32(eax + 0x14) = ecx;

loc_0055C08F: ;
    ecx = MEM32(esi + 0x10);
    SET_LO8(edx, 0); /* xor self */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x5610DC); PUSH32(esp, 0x0055C09Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0055C094u); } /* indirect call */
    }

loc_0055C09A: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esi));
    { uint32_t _icall_target = MEM32(0x561234); PUSH32(esp, 0x0055C0A2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0055C09Cu); } /* indirect call */
    }

loc_0055C0A2: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0055C0A6
 * Original: 0x0055C0A6 - 0x0055C0C2 (28 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055C0A6(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055C0A6: ;
    eax = MEM32(0x75FAEC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x75FAEC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x75FAEC (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055C0C1; /* je: equal / zero */

loc_0055C0B2: ;
    eax = MEM32(eax + 8);
    eax = MEM32(eax + 0x14);
    eax = MEM32(eax + 0x18);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(eax + 0x30); PUSH32(esp, 0x0055C0C1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0055C0BEu); } /* indirect call */
    }

loc_0055C0C1: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0055C0C2
 * Original: 0x0055C0C2 - 0x0055C0E9 (39 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055C0C2(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055C0C2: ;
    eax = ecx;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 4), edx (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0055C0E8; /* jbe: below or equal (unsigned <=) */

loc_0055C0CB: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);

loc_0055C0CD: ;
    edi = MEM32(eax);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + edx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 8);
    POP32(esp, ecx);
    esi = 0x560FC8;
    _fb = (uint32_t)(0x1000) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x1000;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
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
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(eax + 4) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0055C0CD; /* jb: below (unsigned <) */

loc_0055C0E6: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_0055C0E8: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0055C0E9
 * Original: 0x0055C0E9 - 0x0055C103 (26 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0055C0E9(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055C0E9: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0055C0FE; /* jbe: below or equal (unsigned <=) */

loc_0055C0F2: ;
    ecx = eax + -1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, ecx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0055C0FE; /* jne: not equal / not zero */

loc_0055C0F9: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_0055C100;

loc_0055C0FE: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0055C100: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0055C103
 * Original: 0x0055C103 - 0x0055C119 (22 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055C103(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055C103: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0055C108: ;
    _fa = (uint32_t)(MEM32(esp + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(esp + 4), ecx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0055C116; /* jne: not equal / not zero */

loc_0055C10E: ;
    SET_LO8(eax, LO8(eax) + 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    ecx = ecx << 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x20 (8-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0055C108; /* jb: below (unsigned <) */

loc_0055C116: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0055C119
 * Original: 0x0055C119 - 0x0055C2FF (486 bytes, 139 insns)
 * Category: game_input
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0055C119(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055C119: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = MEM32(ebp + 0xC);
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    ecx = MEM32(ebx + 0x10);
    eax = MEM32(ecx + 0x5C);
    PUSH32(esp, esi);
    MEM32(ebp + -12) = eax;
    eax = 0xC0000000u;
    esi = edx;
    PUSH32(esp, edi);
    edi = MEM32(ebx + 0x28);
    esi = esi & eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    MEM32(ebp + -8) = edi;
    MEM32(ebp + -4) = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_0055C156; /* jne: not equal / not zero */

loc_0055C147: ;
    MEM32(ecx + 0x14) = MEM32(ecx + 0x14) & 0;
    _fa = (uint32_t)(MEM32(ecx + 0x14)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = MEM32(ebx + 0x10);
    MEM32(eax + 0x10) = edx;
    goto loc_0055C2CB;

loc_0055C156: ;
    SET_LO16(eax, MEM16(edi + 6));
    PUSH32(esp, MEM32(edi));
    MEM8(ebp + 0xA) = HI8(eax);
    MEM8(ebp + 0xB) = LO8(eax);
    SET_LO16(eax, MEM16(edi + 4));
    ecx = ZX16(MEM16(ebp + 0xA));
    MEM8(ebp + 0xE) = HI8(eax);
    MEM8(ebp + 0xF) = LO8(eax);
    esi = ZX16(MEM16(ebp + 0xE));
    esi = (uint32_t)((int32_t)esi * (int32_t)ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055C17Cu); RECOMP_ABI_CALL(0x0055BFECu, sub_0055BFEC); /* call 0x0055BFEC */

loc_0055C17C: ;
    ecx = ZX16(MEM16(ebp + 0xA));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebp + 0xC) = eax;
    { uint64_t _r = (uint64_t)eax * (uint64_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    MEM32(ebp + -20) = eax;
    MEM32(ebp + -16) = edx;
    if (CMP_NE(_fa, _fb)) goto loc_0055C195; /* jne: not equal / not zero */

loc_0055C190: ;
    esi = 0x2000;

loc_0055C195: ;
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055C19Bu); RECOMP_ABI_CALL(0x0055C0E9u, sub_0055C0E9); /* call 0x0055C0E9 */

loc_0055C19B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055C2EC; /* je: equal / zero */

loc_0055C1A3: ;
    edx = ZX16(MEM16(ebp + 0xA));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x1000 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0055C2EC; /* ja: above (unsigned >) */

loc_0055C1B3: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x4000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x4000 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0055C2EC; /* ja: above (unsigned >) */

loc_0055C1BF: ;
    _fa = (uint32_t)(LO16(esi)) & 0xFFFFu; _fb = (uint32_t)(0xFFF) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* test LO16(esi), 0xFFF (16-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0055C2EC; /* jne: not equal / not zero */

loc_0055C1CA: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055C2EC; /* je: equal / zero */

loc_0055C1D5: ;
    eax = MEM32(ebp + -16);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0055C2EC; /* jb: below (unsigned <) */

loc_0055C1E0: ;
    if (CMP_A(_fa, _fb)) goto loc_0055C1EB; /* ja: above (unsigned >) */

loc_0055C1E2: ;
    _fa = (uint32_t)(MEM32(ebp + -20)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -20), esi (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0055C2EC; /* jb: below (unsigned <) */

loc_0055C1EB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0055C2EC; /* ja: above (unsigned >) */

loc_0055C1F4: ;
    if (CMP_B(_fa, _fb)) goto loc_0055C200; /* jb: below (unsigned <) */

loc_0055C1F6: ;
    _fa = (uint32_t)(MEM32(ebp + -20)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -20), 0 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0055C2EC; /* ja: above (unsigned >) */

loc_0055C200: ;
    ecx = MEM32(ebp + -20);
    PUSH32(esp, edx);
    MEM32(ebx + 0x160) = ecx;
    MEM32(ebx + 0x164) = eax;
    MEM32(ebx + 0x168) = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055C21Bu); RECOMP_ABI_CALL(0x0055C103u, sub_0055C103); /* call 0x0055C103 */

loc_0055C21B: ;
    eax = ZX8(LO8(eax));
    MEM32(ebx + 0x158) = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + -16));
    MEM32(ebx + 0x148) = 0xC;
    PUSH32(esp, MEM32(ebp + -20));
    edi = ebx + 0x140;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055C243u); RECOMP_ABI_CALL(0x00470EA0u, sub_00470EA0); /* call 0x00470EA0 */

loc_0055C243: ;
    MEM32(edi) = eax;
    eax = MEM32(ebp + -12);
    esi = esi >> 0xC;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(edi + 4) = edx;
    MEM32(ebx + 0x14C) = 1;
    MEM32(ebx + 0x150) = esi;
    MEM32(ebx + 0x154) = 0x1000;
    eax = MEM32(eax + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x70000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x70000 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055C2AA; /* je: equal / zero */

loc_0055C272: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x74004) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x74004 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055C2C8; /* jne: not equal / not zero */

loc_0055C279: ;
    eax = MEM32(ebp + -4);
    edx = MEM32(eax + 0x30);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 8);
    POP32(esp, ecx);
    edi = edx;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    eax = MEM32(ebx + 0x160);
    MEM32(edx + 8) = eax;
    eax = MEM32(ebx + 0x164);
    MEM32(edx + 0xC) = eax;
    MEM8(edx + 0x1A) = 1;
    eax = MEM32(ebx + 0x10);
    MEM32(eax + 0x14) = 0x20;
    goto loc_0055C2C1;

loc_0055C2AA: ;
    eax = MEM32(ebp + -4);
    PUSH32(esp, 6);
    esi = edi;
    edi = MEM32(eax + 0x30);
    POP32(esp, ecx);
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
    eax = MEM32(ebx + 0x10);
    MEM32(eax + 0x14) = 0x18;

loc_0055C2C1: ;
    eax = MEM32(ebx + 0x10);
    MEM32(eax + 0x10) = MEM32(eax + 0x10) & 0;
    _fa = (uint32_t)(MEM32(eax + 0x10)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_0055C2C8: ;
    edi = MEM32(ebp + -8);

loc_0055C2CB: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(0x561190); PUSH32(esp, 0x0055C2D2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0055C2CCu); } /* indirect call */
    }

loc_0055C2D2: ;
    ecx = MEM32(ebx + 0x10);
    SET_LO8(edx, 0); /* xor self */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x5610DC); PUSH32(esp, 0x0055C2DDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0055C2D7u); } /* indirect call */
    }

loc_0055C2DD: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebx));
    { uint32_t _icall_target = MEM32(0x561234); PUSH32(esp, 0x0055C2E5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0055C2DFu); } /* indirect call */
    }

loc_0055C2E5: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

loc_0055C2EC: ;
    eax = MEM32(ebp + -4);
    MEM32(eax + 0x14) = MEM32(eax + 0x14) & 0;
    _fa = (uint32_t)(MEM32(eax + 0x14)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = MEM32(ebx + 0x10);
    MEM32(eax + 0x10) = 0xC000014Fu;
    goto loc_0055C2CB;

}

/**
 * sub_0055C2FF
 * Original: 0x0055C2FF - 0x0055C380 (129 bytes, 48 insns)
 * Category: game_input
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0055C2FF(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055C2FF: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    eax = MEM32(edx + 0x5C);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = MEM32(eax + 8);
    MEM8(esi + 0x4F) = 0x2F;
    ecx = MEM32(esi + 0x158);
    eax = MEM32(edi);
    edx = MEM32(edi + 4);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055C322u); RECOMP_ABI_CALL(0x0047F030u, sub_0047F030); /* call 0x0047F030 */

loc_0055C322: ;
    ecx = MEM32(esi + 0x158);
    ebx = MEM32(edi + 8);
    edx = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x28) = eax;
    MEM32(esi + 0x2C) = eax;
    MEM32(esi + 0x30) = 0x55C066;
    ebx = ebx >> LO8(ecx);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    SET_LO16(ecx, MEM16(edi + 0xA));
    SET_LO16(ecx, (uint32_t)((int32_t)LO16(ecx) * (int32_t)0x64));
    MEM16(esi + 0x34) = LO16(ecx);
    ecx = esi + 0x4F;
    MEM8(esi + 0x37) = LO8(eax);
    MEM8(esi + 0x36) = 2;
    edi = ecx;
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    PUSH32(esp, edx);
    MEM8(ecx) = 0x2F;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055C363u); RECOMP_ABI_CALL(0x0055BFECu, sub_0055BFEC); /* call 0x0055BFEC */

loc_0055C363: ;
    MEM32(esi + 0x51) = eax;
    MEM8(ebp + -4) = HI8(ebx);
    MEM8(ebp + -3) = LO8(ebx);
    SET_LO16(eax, MEM16(ebp + -4));
    ecx = esi;
    MEM16(esi + 0x56) = LO16(eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055C37Bu); RECOMP_ABI_CALL(0x0055D309u, sub_0055D309); /* call 0x0055D309 */

loc_0055C37B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_0055C380
 * Original: 0x0055C380 - 0x0055C44E (206 bytes, 72 insns)
 * Category: game_input
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0055C380(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055C380: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 8);
    ecx = MEM32(eax + 0x2C);
    PUSH32(esp, edi);
    edi = MEM32(eax + 0x28);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ecx (32-bit) */
    MEM32(ebp + -8) = ecx;
    if (CMP_AE(_fa, _fb)) goto loc_0055C440; /* jae: above or equal (unsigned >=) */

loc_0055C39D: ;
    edx = edi;
    _fb = (uint32_t)(0x560FC8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - 0x560FC8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    MEM32(ebp + -12) = edx;
    PUSH32(esp, esi);

loc_0055C3AA: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x46313539) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi), 0x46313539 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055C424; /* jne: not equal / not zero */

loc_0055C3B4: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 8 (32-bit) */
    MEM32(ebp + -4) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0055C3CF; /* je: equal / zero */

loc_0055C3BD: ;
    esi = MEM32(edx + eax * 4 + 0x560FC8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax * 4 + 0x560FC8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(eax * 4 + 0x560FC8) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055C3B4; /* je: equal / zero */

loc_0055C3CD: ;
    goto loc_0055C424;

loc_0055C3CF: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(0x5610C0); PUSH32(esp, 0x0055C3D6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0055C3D0u); } /* indirect call */
    }

loc_0055C3D6: ;
    esi = esi | 0xFFFFFFFFu;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 0 (32-bit) */
    ebx = eax;
    if (CMP_L(_fas, _fbs)) goto loc_0055C3E8; /* jl: less (signed <) */

loc_0055C3E1: ;
    MEM32(ebp + 0xC) = 0xC000003Eu;

loc_0055C3E8: ;
    eax = ebx;
    eax = eax & 6;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 2 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055C403; /* jne: not equal / not zero */

loc_0055C3F1: ;
    esi = ebx;
    esi = esi & 0xFFFFFFFDu;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = esi | 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0x20);
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(0x5610B8); PUSH32(esp, 0x0055C403u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0055C3FDu); } /* indirect call */
    }

loc_0055C403: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) - 1;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = MEM32(ebp + -4);
    MEM32(edi + eax * 4) = 0x4C494146;
    if ((_fa != 0)) goto loc_0055C403; /* jne: not equal / not zero */

loc_0055C412: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055C421; /* je: equal / zero */

loc_0055C417: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x20);
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(0x5610B8); PUSH32(esp, 0x0055C421u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0055C41Bu); } /* indirect call */
    }

loc_0055C421: ;
    ecx = MEM32(ebp + -8);

loc_0055C424: ;
    edx = MEM32(ebp + -12);
    eax = 0x1000;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ecx (32-bit) */
    MEM32(ebp + -12) = edx;
    if (CMP_B(_fa, _fb)) goto loc_0055C3AA; /* jb: below (unsigned <) */

loc_0055C43B: ;
    eax = MEM32(ebp + 8);
    POP32(esp, esi);
    POP32(esp, ebx);

loc_0055C440: ;
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055C449u); RECOMP_ABI_CALL(0x0055C066u, sub_0055C066); /* call 0x0055C066 */

loc_0055C449: ;
    POP32(esp, edi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0055C44E
 * Original: 0x0055C44E - 0x0055C634 (486 bytes, 133 insns)
 * Category: game_input
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0055C44E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055C44E: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    ebx = MEM32(esi + 0xC);
    ecx = MEM32(esi + 0x10);
    ebx = ebx & 0xF0000000u;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 0 (32-bit) */
    PUSH32(esp, edi);
    edi = MEM32(ecx + 0x5C);
    MEM32(ebp + 8) = ecx;
    if (CMP_L(_fas, _fbs)) goto loc_0055C524; /* jl: less (signed <) */

loc_0055C473: ;
    _fb = (uint32_t)(0x10000000) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x10000000;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x20000000 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055C48C; /* jne: not equal / not zero */

loc_0055C481: ;
    _fa = (uint32_t)(MEM8(esi + 0xF)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0xF), 2 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0055C49F; /* jne: not equal / not zero */

loc_0055C487: ;
    ebx = 0x40000000;

loc_0055C48C: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x40000000 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055C49F; /* jne: not equal / not zero */

loc_0055C494: ;
    _fa = (uint32_t)(MEM8(esi + 0xF)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0xF), 4 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0055C49F; /* jne: not equal / not zero */

loc_0055C49A: ;
    ebx = 0x60000000;

loc_0055C49F: ;
    eax = MEM32(esi + 0xC);
    edx = 0xFFFFFFF;
    eax = eax & edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax | ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x20000000 (32-bit) */
    MEM32(esi + 0xC) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0055C5DD; /* je: equal / zero */

loc_0055C4BA: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x30000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x30000000 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055C5B1; /* je: equal / zero */

loc_0055C4C6: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x40000000 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055C591; /* je: equal / zero */

loc_0055C4D2: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x50000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x50000000 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055C55F; /* je: equal / zero */

loc_0055C4DE: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x60000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x60000000 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055C62D; /* jne: not equal / not zero */

loc_0055C4EA: ;
    eax = eax & edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi + 0xC) = eax;
    eax = MEM32(0x75FAEC);
    edx = MEM32(eax);
    eax = MEM32(eax + 4);
    MEM32(eax) = edx;
    MEM32(edx + 4) = eax;
    eax = MEM32(edi + 4);
    MEM32(ecx + 0x14) = eax;
    eax = MEM32(ebp + 0xC);
    SET_LO8(edx, 0); /* xor self */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    MEM32(ecx + 0x10) = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x5610DC); PUSH32(esp, 0x0055C512u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0055C50Cu); } /* indirect call */
    }

loc_0055C512: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055C517u); RECOMP_ABI_CALL(0x0055C0A6u, sub_0055C0A6); /* call 0x0055C0A6 */

loc_0055C517: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esi));
    { uint32_t _icall_target = MEM32(0x561234); PUSH32(esp, 0x0055C51Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0055C519u); } /* indirect call */
    }

loc_0055C51F: ;
    goto loc_0055C62D;

loc_0055C524: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x20000000 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055C538; /* je: equal / zero */

loc_0055C52C: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x40000000 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055C49A; /* jne: not equal / not zero */

loc_0055C538: ;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC000003Eu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 0xC000003Eu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055C49A; /* jne: not equal / not zero */

loc_0055C545: ;
    ecx = esi + 0x28;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055C54Du); RECOMP_ABI_CALL(0x0055C0C2u, sub_0055C0C2); /* call 0x0055C0C2 */

loc_0055C54D: ;
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) & 0;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = MEM32(ebp + 8);
    _fb = (uint32_t)(0x10000000) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x10000000;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0055C49F;

loc_0055C55F: ;
    MEM32(esi + 0x38) = MEM32(esi + 0x38) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x38)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM8(esi + 0x37) = 6;
    eax = MEM32(esi + 0x1C);
    MEM32(esi + 0x3C) = eax;
    MEM8(esi + 0x4F) = 0x2A;
    eax = MEM32(edi + 8);
    _fb = (uint32_t)(MEM32(esi + 0x1C)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(esi + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(MEM32(edi + 4)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(edi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x28) = eax;
    eax = MEM32(esi + 0x168);
    MEM32(esi + 0x2C) = eax;
    eax = MEM32(edi + 0xC);
    _fb = (uint32_t)(MEM32(esi + 0x1C)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(esi + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_0055C58C: ;
    _fb = (uint32_t)(MEM32(edi + 4)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(edi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0055C5FE;

loc_0055C591: ;
    MEM32(esi + 0x28) = 0x75FAF4;
    eax = MEM32(esi + 0x168);
    _fb = (uint32_t)(MEM32(esi + 0x1C)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(esi + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM8(esi + 0x37) = 1;
    MEM32(esi + 0x2C) = eax;
    MEM8(esi + 0x4F) = 0x28;
    eax = MEM32(edi + 0xC);
    goto loc_0055C58C;

loc_0055C5B1: ;
    eax = MEM32(esi + 0x2C);
    MEM32(esi + 0x38) = eax;
    MEM8(esi + 0x37) = 6;
    eax = esi + 0x168;
    ecx = MEM32(eax);
    MEM32(esi + 0x3C) = ecx;
    ecx = MEM32(edi + 8);
    MEM32(esi + 0x28) = ecx;
    eax = MEM32(eax);
    MEM32(esi + 0x2C) = eax;
    MEM8(esi + 0x4F) = 0x2A;
    eax = MEM32(edi + 0xC);
    _fb = (uint32_t)(MEM32(esi + 0x38)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(esi + 0x38);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    goto loc_0055C5FE;

loc_0055C5DD: ;
    MEM32(esi + 0x28) = 0x75FAF4;
    eax = MEM32(esi + 0x168);
    _fb = (uint32_t)(MEM32(esi + 0x18)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(esi + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM8(esi + 0x37) = 1;
    MEM32(esi + 0x2C) = eax;
    MEM8(esi + 0x4F) = 0x28;
    eax = MEM32(edi + 0xC);
    _fb = (uint32_t)(MEM32(esi + 0x2C)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(esi + 0x2C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_0055C5FE: ;
    edi = esi + 0x158;
    ecx = MEM32(edi);
    eax = eax >> LO8(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055C60Eu); RECOMP_ABI_CALL(0x0055BFECu, sub_0055BFEC); /* call 0x0055BFEC */

loc_0055C60E: ;
    MEM32(esi + 0x51) = eax;
    ecx = MEM32(edi);
    eax = MEM32(esi + 0x2C);
    eax = eax >> LO8(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = esi;
    MEM8(ebp + 0xE) = HI8(eax);
    MEM8(ebp + 0xF) = LO8(eax);
    SET_LO16(eax, MEM16(ebp + 0xE));
    MEM16(esi + 0x56) = LO16(eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055C62Du); RECOMP_ABI_CALL(0x0055D309u, sub_0055D309); /* call 0x0055D309 */

loc_0055C62D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0055C634
 * Original: 0x0055C634 - 0x0055C7AF (379 bytes, 110 insns)
 * Category: game_input
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0055C634(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055C634: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    ebx = MEM32(esi + 0x10);
    edx = MEM32(ebx + 0x5C);
    PUSH32(esp, edi);
    edi = MEM32(esi + 0xC);
    edi = edi & 0xF0000000u;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 0 (32-bit) */
    MEM32(ebp + 8) = edx;
    if (CMP_L(_fas, _fbs)) goto loc_0055C65D; /* jl: less (signed <) */

loc_0055C655: ;
    _fb = (uint32_t)(0x10000000) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x10000000;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0055C692;

loc_0055C65D: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x20000000 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055C66D; /* je: equal / zero */

loc_0055C665: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x30000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x30000000 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055C68D; /* jne: not equal / not zero */

loc_0055C66D: ;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC000003Eu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 0xC000003Eu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055C68D; /* jne: not equal / not zero */

loc_0055C676: ;
    ecx = esi + 0x28;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055C67Eu); RECOMP_ABI_CALL(0x0055C0C2u, sub_0055C0C2); /* call 0x0055C0C2 */

loc_0055C67E: ;
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) & 0;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = MEM32(ebp + 8);
    _fb = (uint32_t)(0x10000000) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x10000000;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0055C692;

loc_0055C68D: ;
    edi = 0x50000000;

loc_0055C692: ;
    eax = MEM32(esi + 0xC);
    ecx = 0xFFFFFFF;
    eax = eax & ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax | edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x20000000 (32-bit) */
    MEM32(esi + 0xC) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0055C759; /* je: equal / zero */

loc_0055C6AD: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x30000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x30000000 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055C740; /* je: equal / zero */

loc_0055C6B9: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x40000000 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055C709; /* je: equal / zero */

loc_0055C6C1: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x50000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x50000000 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055C7A8; /* jne: not equal / not zero */

loc_0055C6CD: ;
    eax = eax & ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi + 0xC) = eax;
    eax = MEM32(0x75FAEC);
    ecx = MEM32(eax);
    eax = MEM32(eax + 4);
    MEM32(eax) = ecx;
    MEM32(ecx + 4) = eax;
    eax = MEM32(edx + 4);
    MEM32(ebx + 0x14) = eax;
    eax = MEM32(ebp + 0xC);
    SET_LO8(edx, 0); /* xor self */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    ecx = ebx;
    MEM32(ebx + 0x10) = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x5610DC); PUSH32(esp, 0x0055C6F7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0055C6F1u); } /* indirect call */
    }

loc_0055C6F7: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055C6FCu); RECOMP_ABI_CALL(0x0055C0A6u, sub_0055C0A6); /* call 0x0055C0A6 */

loc_0055C6FC: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esi));
    { uint32_t _icall_target = MEM32(0x561234); PUSH32(esp, 0x0055C704u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0055C6FEu); } /* indirect call */
    }

loc_0055C704: ;
    goto loc_0055C7A8;

loc_0055C709: ;
    MEM8(esi + 0x4F) = 0x2A;
    MEM8(esi + 0x37) = 6;
    eax = MEM32(esi + 0x168);
    _fb = (uint32_t)(MEM32(esi + 0x18)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(esi + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esi + 0x38) = eax;
    eax = MEM32(esi + 0x168);
    _fb = (uint32_t)(MEM32(esi + 0x1C)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(esi + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esi + 0x3C) = eax;
    eax = MEM32(edx + 8);
    MEM32(esi + 0x28) = eax;
    eax = MEM32(esi + 0x168);
    MEM32(esi + 0x2C) = eax;
    eax = MEM32(edx + 0xC);
    _fb = (uint32_t)(MEM32(esi + 0x38)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(esi + 0x38);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    goto loc_0055C779;

loc_0055C740: ;
    eax = MEM32(esi + 0x2C);
    _fb = (uint32_t)(0x75FAF4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x75FAF4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x28) = eax;
    eax = MEM32(esi + 0x1C);
    MEM32(esi + 0x2C) = eax;
    eax = MEM32(edx + 0xC);
    _fb = (uint32_t)(MEM32(edx + 4)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(edx + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0055C779;

loc_0055C759: ;
    MEM8(esi + 0x37) = 1;
    MEM8(esi + 0x4F) = 0x28;
    MEM32(esi + 0x28) = 0x75FAF4;
    ecx = MEM32(esi + 0x168);
    _fb = (uint32_t)(MEM32(esi + 0x18)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - MEM32(esi + 0x18);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esi + 0x2C) = ecx;
    eax = MEM32(edx + 0xC);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_0055C779: ;
    edi = esi + 0x158;
    ecx = MEM32(edi);
    eax = eax >> LO8(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055C789u); RECOMP_ABI_CALL(0x0055BFECu, sub_0055BFEC); /* call 0x0055BFEC */

loc_0055C789: ;
    MEM32(esi + 0x51) = eax;
    ecx = MEM32(edi);
    eax = MEM32(esi + 0x2C);
    eax = eax >> LO8(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = esi;
    MEM8(ebp + 0xE) = HI8(eax);
    MEM8(ebp + 0xF) = LO8(eax);
    SET_LO16(eax, MEM16(ebp + 0xE));
    MEM16(esi + 0x56) = LO16(eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055C7A8u); RECOMP_ABI_CALL(0x0055D309u, sub_0055D309); /* call 0x0055D309 */

loc_0055C7A8: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0055C7AF
 * Original: 0x0055C7AF - 0x0055C80C (93 bytes, 34 insns)
 * Category: game_input
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055C7AF(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055C7AF: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x5F5F554D);
    PUSH32(esp, 8);
    POP32(esp, edi);
    PUSH32(esp, edi);
    esi = ecx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x56118C); PUSH32(esp, 0x0055C7C2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0055C7BCu); } /* indirect call */
    }

loc_0055C7C2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055C7D4; /* jne: not equal / not zero */

loc_0055C7C6: ;
    eax = MEM32(esi + 0x10);
    MEM32(eax + 0x14) = MEM32(eax + 0x14) & 0;
    _fa = (uint32_t)(MEM32(eax + 0x14)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = 0xC000009Au;
    goto loc_0055C809;

loc_0055C7D4: ;
    MEM32(esi + 0x28) = eax;
    MEM32(esi + 0x2C) = edi;
    ecx = esi + 0x4F;
    MEM32(esi + 0x30) = 0x55C119;
    MEM16(esi + 0x34) = 0xA;
    MEM8(esi + 0x36) = 2;
    MEM8(esi + 0x37) = 1;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = ecx;
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM8(ecx) = 0x25;
    ecx = esi;
    PUSH32(esp, 0x0055C804u); RECOMP_ABI_CALL(0x0055D309u, sub_0055D309); /* call 0x0055D309 */

loc_0055C804: ;
    eax = 0x103;

loc_0055C809: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0055C80C
 * Original: 0x0055C80C - 0x0055C8AE (162 bytes, 53 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055C80C(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055C80C: ;
    edx = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    MEM8(esi + 0xF) = MEM8(esi + 0xF) & 0xF;
    _fa = (uint32_t)(MEM8(esi + 0xF)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    ecx = MEM32(esi + 0x10);
    PUSH32(esp, edi);
    eax = 0xC0000000u;
    edi = edx;
    edi = edi & eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055C843; /* jne: not equal / not zero */

loc_0055C82A: ;
    MEM32(ecx + 0x14) = MEM32(ecx + 0x14) & 0;
    _fa = (uint32_t)(MEM32(ecx + 0x14)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ecx + 0x10) = edx;
    SET_LO8(edx, 0); /* xor self */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x5610DC); PUSH32(esp, 0x0055C839u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0055C833u); } /* indirect call */
    }

loc_0055C839: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esi));
    { uint32_t _icall_target = MEM32(0x561234); PUSH32(esp, 0x0055C841u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0055C83Bu); } /* indirect call */
    }

loc_0055C841: ;
    goto loc_0055C8A9;

loc_0055C843: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = esi + 0x4F;
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM16(esi + 0x34) = 8;
    MEM8(esi + 0x36) = 2;
    _fa = (uint32_t)(MEM8(esi + 0xF)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0xF), 8 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0055C865; /* je: equal / zero */

loc_0055C85C: ;
    MEM32(esi + 0x30) = 0x55C634;
    goto loc_0055C86C;

loc_0055C865: ;
    MEM32(esi + 0x30) = 0x55C44E;

loc_0055C86C: ;
    MEM8(esi + 0xF) = MEM8(esi + 0xF) | 0x10;
    _fa = (uint32_t)(MEM8(esi + 0xF)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    edi = MEM32(0x75FAEC);
    edx = 0x75FAEC;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, edx (32-bit) */
    eax = ecx + 0x54;
    if (CMP_NE(_fa, _fb)) goto loc_0055C897; /* jne: not equal / not zero */

loc_0055C882: ;
    MEM32(eax) = edi;
    MEM32(ecx + 0x58) = edx;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    MEM32(edi + 4) = eax;
    PUSH32(esp, esi);
    MEM32(0x75FAEC) = eax;
    { uint32_t _icall_target = MEM32(esi + 0x30); PUSH32(esp, 0x0055C895u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0055C892u); } /* indirect call */
    }

loc_0055C895: ;
    goto loc_0055C8A9;

loc_0055C897: ;
    esi = MEM32(0x75FAF0);
    MEM32(eax) = edx;
    MEM32(ecx + 0x58) = esi;
    MEM32(esi) = eax;
    MEM32(0x75FAF0) = eax;

loc_0055C8A9: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0055C8AE
 * Original: 0x0055C8AE - 0x0055C97E (208 bytes, 67 insns)
 * Category: game_input
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0055C8AE(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055C8AE: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0xC);
    eax = MEM32(esi + 0x5C);
    eax = MEM32(eax + 0x10);
    _fb = (uint32_t)(0x70000) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x70000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edi);
    if ((_fa == 0)) goto loc_0055C931; /* je: equal / zero */

loc_0055C8C7: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x14;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_0055C925; /* je: equal / zero */

loc_0055C8CC: ;
    _fb = (uint32_t)(0x3FF0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x3FF0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_0055C8E1; /* je: equal / zero */

loc_0055C8D3: ;
    MEM32(esi + 0x14) = MEM32(esi + 0x14) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x14)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = 0xC0000010u;
    goto loc_0055C962;

loc_0055C8E1: ;
    edx = MEM32(esi + 0x30);
    PUSH32(esp, 8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ecx);
    edi = edx;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    eax = MEM32(ebx + 0x160);
    eax = eax | MEM32(ebx + 0x164);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    if ((_fa != 0)) goto loc_0055C906; /* jne: not equal / not zero */

loc_0055C8FB: ;
    edx = esi;
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055C904u); RECOMP_ABI_CALL(0x0055C7AFu, sub_0055C7AF); /* call 0x0055C7AF */

loc_0055C904: ;
    goto loc_0055C95B;

loc_0055C906: ;
    eax = MEM32(ebx + 0x160);
    MEM32(edx + 8) = eax;
    eax = MEM32(ebx + 0x164);
    MEM32(edx + 0xC) = eax;
    MEM8(edx + 0x1A) = 1;
    MEM32(esi + 0x14) = 0x20;
    goto loc_0055C959;

loc_0055C925: ;
    ecx = MEM32(ebp + 8);
    edx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055C92Fu); RECOMP_ABI_CALL(0x0055C2FFu, sub_0055C2FF); /* call 0x0055C2FF */

loc_0055C92F: ;
    goto loc_0055C977;

loc_0055C931: ;
    eax = MEM32(ebx + 0x160);
    eax = eax | MEM32(ebx + 0x164);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edi = MEM32(esi + 0x30);
    if ((_fa == 0)) goto loc_0055C8FB; /* je: equal / zero */

loc_0055C942: ;
    PUSH32(esp, 6);
    esi = ebx + 0x140;
    POP32(esp, ecx);
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
    ecx = MEM32(ebp + 0xC);
    MEM32(ecx + 0x14) = 0x18;
    esi = ecx;

loc_0055C959: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0055C95B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x103) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x103 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055C977; /* je: equal / zero */

loc_0055C962: ;
    SET_LO8(edx, 0); /* xor self */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    ecx = esi;
    MEM32(esi + 0x10) = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x5610DC); PUSH32(esp, 0x0055C96Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0055C969u); } /* indirect call */
    }

loc_0055C96F: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebx));
    { uint32_t _icall_target = MEM32(0x561234); PUSH32(esp, 0x0055C977u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0055C971u); } /* indirect call */
    }

loc_0055C977: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0055C97E
 * Original: 0x0055C97E - 0x0055CB0E (400 bytes, 138 insns)
 * Category: game_input
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0055C97E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_0055C97E: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0xC));
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _cf = 0; /* logical op clears CF */
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ebx);
    eax = edx;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(eax + 0x5C);
    edx = MEM32(ecx + 0xC);
    ebx = MEM32(ecx + 4);
    PUSH32(esp, edi);
    edi = 0xFFF;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edx (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(ebp + -8) = eax;
    MEM32(ebp + -12) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0055C9FA; /* jne: not equal / not zero */

loc_0055C9A7: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, ebx (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_NZ(_fa, _fb)) goto loc_0055C9FA; /* jne: not equal / not zero */

loc_0055C9AB: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = ebx;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(edx)) >> 32) & 1);
    edi = edi + edx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint64_t _t = (uint64_t)(eax) + (uint64_t)(MEM32(ecx + 0x10)) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* adc */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* adc result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x164)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 0x164) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_G(_fas, _fbs)) goto loc_0055C9F7; /* jg: greater (signed >) */

loc_0055C9BC: ;
    if (CMP_L(_fas, _fbs)) goto loc_0055C9C6; /* jl: less (signed <) */

loc_0055C9BE: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x160)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(esi + 0x160) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_A(_fa, _fb)) goto loc_0055C9F7; /* ja: above (unsigned >) */

loc_0055C9C6: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0055C9D2; /* jne: not equal / not zero */

loc_0055C9CA: ;
    eax = MEM32(ebp + -8);
    _cf = 0; /* logical op clears CF */
    MEM32(eax + 0x10) = MEM32(eax + 0x10) & ebx;
    _fa = (uint32_t)(MEM32(eax + 0x10)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    goto loc_0055CA07;

loc_0055C9D2: ;
    _fa = (uint32_t)(MEM8(ecx + 2)) & 0xFFu; _fb = (uint32_t)(0x80) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ecx + 2), 0x80 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_0055C9E3; /* je: equal / zero */

loc_0055C9D8: ;
    eax = MEM32(ecx + 8);
    MEM32(ebp + -4) = eax;
    eax = MEM32(ebp + -8);
    goto loc_0055C9EF;

loc_0055C9E3: ;
    eax = MEM32(ebp + -8);
    edi = MEM32(eax + 0x30);
    _fb = (uint32_t)(MEM32(ecx + 8)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(MEM32(ecx + 8))) >> 32) & 1);
    edi = edi + MEM32(ecx + 8);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -4) = edi;

loc_0055C9EF: ;
    edi = MEM32(ebp + -4);
    MEM32(ecx + 8) = edi;
    goto loc_0055CA01;

loc_0055C9F7: ;
    eax = MEM32(ebp + -8);

loc_0055C9FA: ;
    MEM32(eax + 0x10) = 0xC000000Du;

loc_0055CA01: ;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0055CA22; /* jne: not equal / not zero */

loc_0055CA07: ;
    _cf = 0; /* logical op clears CF */
    MEM32(eax + 0x14) = MEM32(eax + 0x14) & 0;
    _fa = (uint32_t)(MEM32(eax + 0x14)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = 0; /* xor clears CF */
    SET_LO8(edx, 0); /* xor self */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x5610DC); PUSH32(esp, 0x0055CA15u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0055CA0Fu); } /* indirect call */
    }

loc_0055CA15: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esi));
    { uint32_t _icall_target = MEM32(0x561234); PUSH32(esp, 0x0055CA1Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0055CA17u); } /* indirect call */
    }

loc_0055CA1D: ;
    goto loc_0055CB09;

loc_0055CA22: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = esi + 0x4F;
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    _fa = (uint32_t)(MEM8(ecx)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx), 3 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0055CABB; /* jne: not equal / not zero */

loc_0055CA34: ;
    edi = MEM32(esi + 0x168);
    eax = edx;
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)edi);
      edx = (uint32_t)(_dividend % (uint32_t)edi); }
    _cf = 0; /* logical op clears CF */
    MEM8(esi + 0xF) = MEM8(esi + 0xF) & 0xF1;
    _fa = (uint32_t)(MEM8(esi + 0xF)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    ecx = MEM32(esi + 0xC);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0055CA77; /* je: equal / zero */

loc_0055CA4B: ;
    eax = edi;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(edx));
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(esi + 0x18) = eax;
    if (CMP_BE(_fa, _fb)) goto loc_0055CA66; /* jbe: below or equal (unsigned <=) */

loc_0055CA56: ;
    _cf = 0; /* logical op clears CF */
    ecx = ecx | 0x8000000;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(ebx));
    eax = eax - ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esi + 0xC) = ecx;
    MEM32(esi + 0x1C) = eax;
    goto loc_0055CA8E;

loc_0055CA66: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM32(ebp + -12)) + (uint64_t)(eax)) >> 32) & 1);
    MEM32(ebp + -12) = MEM32(ebp + -12) + eax;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM32(ebp + -4)) + (uint64_t)(eax)) >> 32) & 1);
    MEM32(ebp + -4) = MEM32(ebp + -4) + eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(ebx) < (uint32_t)(eax));
    ebx = ebx - eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx | 0x2000000;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esi + 0xC) = ecx;

loc_0055CA77: ;
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = ebx;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)edi);
      edx = (uint32_t)(_dividend % (uint32_t)edi); }
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0055CA8A; /* je: equal / zero */

loc_0055CA81: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(ebx) < (uint32_t)(edx));
    ebx = ebx - edx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _cf = 0; /* logical op clears CF */
    MEM8(esi + 0xF) = MEM8(esi + 0xF) | 4;
    _fa = (uint32_t)(MEM8(esi + 0xF)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    MEM32(esi + 0x1C) = edx;

loc_0055CA8A: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0055CA98; /* jne: not equal / not zero */

loc_0055CA8E: ;
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055CA96u); RECOMP_ABI_CALL(0x0055C80Cu, sub_0055C80C); /* call 0x0055C80C */

loc_0055CA96: ;
    goto loc_0055CB09;

loc_0055CA98: ;
    _fa = (uint32_t)(MEM8(esi + 0xF)) & 0xFFu; _fb = (uint32_t)(0xE) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0xF), 0xE (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_0055CAA7; /* je: equal / zero */

loc_0055CA9E: ;
    MEM32(esi + 0x30) = 0x55C80C;
    goto loc_0055CAAE;

loc_0055CAA7: ;
    MEM32(esi + 0x30) = 0x55C066;

loc_0055CAAE: ;
    edx = MEM32(ebp + -12);
    MEM8(esi + 0x37) = 2;
    MEM8(esi + 0x4F) = 0x2A;
    goto loc_0055CACA;

loc_0055CABB: ;
    MEM32(esi + 0x30) = 0x55C380;
    MEM8(esi + 0x37) = 1;
    MEM8(esi + 0x4F) = 0x28;

loc_0055CACA: ;
    edi = MEM32(esi + 0x158);
    eax = MEM32(ebp + -4);
    ecx = edi;
    if (LO8(ecx)) _cf = (int)(((edx) >> ((LO8(ecx)) - 1)) & 1);
    edx = edx >> LO8(ecx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(esi + 0x28) = eax;
    MEM32(esi + 0x2C) = ebx;
    MEM16(esi + 0x34) = 8;
    PUSH32(esp, edx);
    MEM8(esi + 0x36) = 2;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055CAEDu); RECOMP_ABI_CALL(0x0055BFECu, sub_0055BFEC); /* call 0x0055BFEC */

loc_0055CAED: ;
    ecx = edi;
    if (LO8(ecx)) _cf = (int)(((ebx) >> ((LO8(ecx)) - 1)) & 1);
    ebx = ebx >> LO8(ecx);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(esi + 0x51) = eax;
    ecx = esi;
    MEM8(ebp + -2) = HI8(ebx);
    MEM8(ebp + -1) = LO8(ebx);
    SET_LO16(eax, MEM16(ebp + -2));
    MEM16(esi + 0x56) = LO16(eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055CB09u); RECOMP_ABI_CALL(0x0055D309u, sub_0055D309); /* call 0x0055D309 */

loc_0055CB09: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_0055CB0E
 * Original: 0x0055CB0E - 0x0055CB7F (113 bytes, 45 insns)
 * Category: game_input
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0055CB0E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055CB0E: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    eax = MEM32(ebx + 0x18);
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0xC);
    esi = MEM32(edi + 0x5C);
    MEM32(ebp + 8) = eax;
    { uint32_t _icall_target = MEM32(0x56123C); PUSH32(esp, 0x0055CB29u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0055CB23u); } /* indirect call */
    }

loc_0055CB29: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055CB47; /* je: equal / zero */

loc_0055CB2D: ;
    SET_LO8(edx, 0); /* xor self */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    ecx = edi;
    MEM32(edi + 0x10) = 0xC0000240u;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x5610DC); PUSH32(esp, 0x0055CB3Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0055CB38u); } /* indirect call */
    }

loc_0055CB3E: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(0x561234); PUSH32(esp, 0x0055CB45u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0055CB3Fu); } /* indirect call */
    }

loc_0055CB45: ;
    goto loc_0055CB78;

loc_0055CB47: ;
    MEM32(esi + 0x14) = ebx;
    ebx = MEM32(ebp + 8);
    MEM32(ebx + 0x10) = edi;
    eax = ZX8(MEM8(esi));
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0055CB6F; /* je: equal / zero */

loc_0055CB57: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0055CB68; /* je: equal / zero */

loc_0055CB5A: ;
    _fb = (uint32_t)(7) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 7;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa != 0)) goto loc_0055CB78; /* jne: not equal / not zero */

loc_0055CB5F: ;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055CB66u); RECOMP_ABI_CALL(0x0055C8AEu, sub_0055C8AE); /* call 0x0055C8AE */

loc_0055CB66: ;
    goto loc_0055CB78;

loc_0055CB68: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(0x561238); PUSH32(esp, 0x0055CB6Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0055CB69u); } /* indirect call */
    }

loc_0055CB6F: ;
    edx = edi;
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055CB78u); RECOMP_ABI_CALL(0x0055C97Eu, sub_0055C97E); /* call 0x0055C97E */

loc_0055CB78: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0055CB7F
 * Original: 0x0055CB7F - 0x0055CBE7 (104 bytes, 34 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055CB7F(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055CB7F: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    esi = edi + 3;
    esi = esi & 0xFFFFFFFCu;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint32_t _icall_target = MEM32(0x5610F0); PUSH32(esp, 0x0055CB92u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0055CB8Cu); } /* indirect call */
    }

loc_0055CB92: ;
    _fa = (uint32_t)(MEM32(0x558500)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x558500), esi (32-bit) */
    SET_LO8(ecx, LO8(eax));
    if (CMP_B(_fa, _fb)) goto loc_0055CBCC; /* jb: below (unsigned <) */

loc_0055CB9C: ;
    ebx = 0x80001000u;
    _fb = (uint32_t)(MEM32(0x558500)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - MEM32(0x558500);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    MEM32(0x558500) = MEM32(0x558500) - esi;
    _fa = (uint32_t)(MEM32(0x558500)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x5610E8); PUSH32(esp, 0x0055CBB3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0055CBADu); } /* indirect call */
    }

loc_0055CBB3: ;
    ecx = esi;
    edx = ecx;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = 0xCCCCCCCCu;
    edi = ebx;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = edx;
    ecx = ecx & 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if (!g_df) { memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx); edi += ecx; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM8(edi - _i) = LO8(eax); edi -= ecx; }
    ecx = 0; /* rep stosb */
    goto loc_0055CBDF;

loc_0055CBCC: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x5610E8); PUSH32(esp, 0x0055CBD2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0055CBCCu); } /* indirect call */
    }

loc_0055CBD2: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esp + 0x14));
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(0x56118C); PUSH32(esp, 0x0055CBDDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0055CBD7u); } /* indirect call */
    }

loc_0055CBDD: ;
    ebx = eax;

loc_0055CBDF: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0055CBE7
 * Original: 0x0055CBE7 - 0x0055CC22 (59 bytes, 19 insns)
 * Category: game_input
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055CBE7(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055CBE7: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    MEM8(esi + 0xD) = MEM8(esi + 0xD) & 0xFE;
    _fa = (uint32_t)(MEM8(esi + 0xD)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _fa = (uint32_t)(MEM8(esi + 0xD)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0xD), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0055CC07; /* je: equal / zero */

loc_0055CBF6: ;
    eax = esi + 0xB8;
    PUSH32(esp, eax);
    eax = MEM32(esi + 8);
    ecx = MEM32(eax);
    PUSH32(esp, 0x0055CC07u); RECOMP_ABI_CALL(0x0055B857u, sub_0055B857); /* call 0x0055B857 */

loc_0055CC07: ;
    _fa = (uint32_t)(MEM8(esi + 0xD)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0xD), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0055CC1E; /* je: equal / zero */

loc_0055CC0D: ;
    eax = esi + 0xE8;
    PUSH32(esp, eax);
    eax = MEM32(esi + 8);
    ecx = MEM32(eax);
    PUSH32(esp, 0x0055CC1Eu); RECOMP_ABI_CALL(0x0055B857u, sub_0055B857); /* call 0x0055B857 */

loc_0055CC1E: ;
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_0055CC22
 * Original: 0x0055CC22 - 0x0055CD28 (262 bytes, 68 insns)
 * Category: game_input
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0055CC22(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055CC22: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM8(esi + 0xD)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0xD), 1 (8-bit) */
    ebp = MEM32(esi + 8);
    PUSH32(esp, edi);
    edi = edx;
    if (TEST_Z(_fa, _fb)) goto loc_0055CC40; /* je: equal / zero */

loc_0055CC32: ;
    eax = esi + 0x70;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x5611CC); PUSH32(esp, 0x0055CC3Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0055CC36u); } /* indirect call */
    }

loc_0055CC3C: ;
    MEM8(esi + 0xD) = MEM8(esi + 0xD) & 0xFE;
    _fa = (uint32_t)(MEM8(esi + 0xD)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */

loc_0055CC40: ;
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(6) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 6 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0055CC55; /* je: equal / zero */

loc_0055CC47: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xC000009Du);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(esi + 0x30); PUSH32(esp, 0x0055CC50u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0055CC4Du); } /* indirect call */
    }

loc_0055CC50: ;
    goto loc_0055CD24;

loc_0055CC55: ;
    eax = eax | 0x1000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, ebx);
    MEM32(esi + 0xC) = eax;
    eax = MEM32(esi + 0x20);
    MEM32(esi + 0x6C) = edi;
    edi = esi + 0xB8;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM8(edi) = 0x18;
    MEM8(esi + 0xB9) = 5;
    MEM32(esi + 0xC0) = ebx;
    MEM32(esi + 0xC8) = eax;
    MEM32(esi + 0xCC) = 4;
    ecx = MEM32(ebp);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0055CC95u); RECOMP_ABI_CALL(0x0055BC1Fu, sub_0055BC1F); /* call 0x0055BC1F */

loc_0055CC95: ;
    MEM8(esi + 0xD) = MEM8(esi + 0xD) | 3;
    _fa = (uint32_t)(MEM8(esi + 0xD)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    edx = esi + 0x98;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    ecx = ecx | 0xFFFFFFFFu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, ecx);
    eax = 0xFFF0BDC0u;
    PUSH32(esp, eax);
    eax = esi + 0x70;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x561140); PUSH32(esp, 0x0055CCB4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0055CCAEu); } /* indirect call */
    }

loc_0055CCB4: ;
    MEM8(edi) = 0x30;
    MEM8(esi + 0xB9) = 0x40;
    MEM32(esi + 0xC0) = 0x55D109;
    MEM32(esi + 0xC4) = esi;
    MEM32(esi + 0xC8) = ebx;
    MEM32(esi + 0xD0) = ebx;
    MEM32(esi + 0xCC) = ebx;
    MEM8(esi + 0xD4) = LO8(ebx);
    MEM8(esi + 0xD5) = LO8(ebx);
    MEM8(esi + 0xD6) = LO8(ebx);
    MEM8(esi + 0xE0) = 2;
    MEM8(esi + 0xE1) = 1;
    MEM16(esi + 0xE2) = LO16(ebx);
    SET_LO16(eax, ZX8(MEM8(ebp + 5)));
    MEM16(esi + 0xE4) = LO16(eax);
    MEM16(esi + 0xE6) = LO16(ebx);
    ecx = MEM32(ebp);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0055CD23u); RECOMP_ABI_CALL(0x0055BC1Fu, sub_0055BC1F); /* call 0x0055BC1F */

loc_0055CD23: ;
    POP32(esp, ebx);

loc_0055CD24: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_0055CD28
 * Original: 0x0055CD28 - 0x0055CDAC (132 bytes, 48 insns)
 * Category: game_input
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055CD28(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055CD28: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM8(esi + 0xD)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0xD), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0055CD44; /* je: equal / zero */

loc_0055CD36: ;
    eax = esi + 0x70;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x5611CC); PUSH32(esp, 0x0055CD40u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0055CD3Au); } /* indirect call */
    }

loc_0055CD40: ;
    MEM8(esi + 0xD) = MEM8(esi + 0xD) & 0xFE;
    _fa = (uint32_t)(MEM8(esi + 0xD)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */

loc_0055CD44: ;
    MEM8(esi + 0xD) = MEM8(esi + 0xD) & 0xFD;
    _fa = (uint32_t)(MEM8(esi + 0xD)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    eax = MEM32(esp + 0xC);
    eax = MEM32(eax + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0055CD5B; /* jge: greater or equal (signed >=) */

loc_0055CD53: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0055CD59u); RECOMP_ABI_CALL(0x0055B8F7u, sub_0055B8F7); /* call 0x0055B8F7 */

loc_0055CD59: ;
    edi = eax;

loc_0055CD5B: ;
    _fa = (uint32_t)(MEM32(esi + 0x5F)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x53425355) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x5F), 0x53425355 (32-bit) */
    eax = 0xC0000001u;
    if (CMP_EQ(_fa, _fb)) goto loc_0055CD6B; /* je: equal / zero */

loc_0055CD69: ;
    edi = eax;

loc_0055CD6B: ;
    ecx = MEM32(esi + 0x63);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x44)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(esi + 0x44) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055CD75; /* je: equal / zero */

loc_0055CD73: ;
    edi = eax;

loc_0055CD75: ;
    SET_LO8(ecx, MEM8(esi + 0x6B));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 2 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055CD7F; /* jne: not equal / not zero */

loc_0055CD7D: ;
    edi = eax;

loc_0055CD7F: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055CD89; /* jne: not equal / not zero */

loc_0055CD84: ;
    edi = 0xC000003Eu;

loc_0055CD89: ;
    eax = 0xC0000000u;
    ecx = edi;
    ecx = ecx & eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055CDA1; /* jne: not equal / not zero */

loc_0055CD96: ;
    edx = edi;
    ecx = esi;
    PUSH32(esp, 0x0055CD9Fu); RECOMP_ABI_CALL(0x0055CC22u, sub_0055CC22); /* call 0x0055CC22 */

loc_0055CD9F: ;
    goto loc_0055CDA7;

loc_0055CDA1: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(esi + 0x30); PUSH32(esp, 0x0055CDA7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0055CDA4u); } /* indirect call */
    }

loc_0055CDA7: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0055CDAC
 * Original: 0x0055CDAC - 0x0055CE35 (137 bytes, 37 insns)
 * Category: game_input
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055CDAC(void)
{

loc_0055CDAC: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x20);
    MEM32(esi + 0xC8) = eax;
    PUSH32(esp, edi);
    eax = esi + 0x5F;
    MEM32(esi + 0xD0) = eax;
    eax = ZX16(MEM16(esi + 0x34));
    PUSH32(esp, 0xFFFFFFFFu);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    PUSH32(esp, 0xFFFE7960u);
    PUSH32(esp, edx);
    edi = esi + 0xB8;
    PUSH32(esp, eax);
    MEM8(edi) = 0x28;
    MEM8(esi + 0xB9) = 0x41;
    MEM32(esi + 0xC0) = 0x55CD28;
    MEM32(esi + 0xC4) = esi;
    MEM32(esi + 0xCC) = 0xD;
    MEM8(esi + 0xD4) = 2;
    MEM8(esi + 0xD5) = 0;
    MEM8(esi + 0xD6) = 0;
    PUSH32(esp, 0x0055CE14u); RECOMP_ABI_CALL(0x00470A00u, sub_00470A00); /* call 0x00470A00 */

loc_0055CE14: ;
    ecx = esi + 0x98;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = esi + 0x70;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x561140); PUSH32(esp, 0x0055CE27u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0055CE21u); } /* indirect call */
    }

loc_0055CE27: ;
    eax = MEM32(esi + 8);
    ecx = MEM32(eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0055CE32u); RECOMP_ABI_CALL(0x0055BC1Fu, sub_0055BC1F); /* call 0x0055BC1F */

loc_0055CE32: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0055CE35
 * Original: 0x0055CE35 - 0x0055CF32 (253 bytes, 80 insns)
 * Category: game_input
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055CE35(void)
{
    int _flags = 0; /* fallback flag var */
    int _jf_0055CEC7 = 0; /* per-edge flags of joins */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055CE35: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    eax = MEM32(esi + 0xC);
    edx = 0x800;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0055CE84; /* je: equal / zero */

loc_0055CE46: ;
    eax = eax & 0xFFFFF7FFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = esi + 0xB8;
    _fa = (uint32_t)(MEM32(esp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 8), ecx (32-bit) */
    MEM32(esi + 0xC) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_0055CE62; /* jne: not equal / not zero */

loc_0055CE5A: ;
    ecx = MEM32(esi + 0xEC);
    goto loc_0055CE68;

loc_0055CE62: ;
    ecx = MEM32(esi + 0xBC);

loc_0055CE68: ;
    eax = eax & 0xFFFFF9FFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ecx);
    MEM32(esi + 0xC) = eax;
    PUSH32(esp, 0x0055CE76u); RECOMP_ABI_CALL(0x0055B8F7u, sub_0055B8F7); /* call 0x0055B8F7 */

loc_0055CE76: ;
    edx = eax;
    ecx = esi;
    PUSH32(esp, 0x0055CE7Fu); RECOMP_ABI_CALL(0x0055CC22u, sub_0055CC22); /* call 0x0055CC22 */

loc_0055CE7F: ;
    goto loc_0055CF2E;

loc_0055CE84: ;
    ecx = MEM32(esp + 8);
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 4), 0 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_L(_fas, _fbs)) goto loc_0055CED8; /* jl: less (signed <) */

loc_0055CE8F: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(6) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 6 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0055CED8; /* jne: not equal / not zero */

loc_0055CE93: ;
    edx = MEM32(esi + 0x6C);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x2C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(esi + 0x2C) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0055CEA7; /* jae: above or equal (unsigned >=) */

loc_0055CE9B: ;
    edx = esi;
    PUSH32(esp, 0x0055CEA2u); RECOMP_ABI_CALL(0x0055CF32u, sub_0055CF32); /* call 0x0055CF32 */

loc_0055CEA2: ;
    goto loc_0055CF2D;

loc_0055CEA7: ;
    edi = esi + 0xB8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    edx = 0x200;
    if (CMP_NE(_fa, _fb)) goto loc_0055CEC0; /* jne: not equal / not zero */

loc_0055CEB6: ;
    eax = eax & 0xFFFFFDFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 4 (8-bit) */
    _jf_0055CEC7 = (TEST_NZ(_fa, _fb)) ? 1 : 0; /* flags of this edge */
    goto loc_0055CEC7;

loc_0055CEC0: ;
    eax = eax & 0xFFFFFBFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, eax (32-bit) */
    _jf_0055CEC7 = (TEST_NZ(_fa, _fb)) ? 1 : 0; /* flags of this edge */

loc_0055CEC7: ;
    MEM32(esi + 0xC) = eax;
    if (_jf_0055CEC7 /* jne: not equal / not zero */) goto loc_0055CF2D;

loc_0055CECC: ;
    MEM32(esi + 0xC) = MEM32(esi + 0xC) | edx;
    _fa = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx = esi;
    PUSH32(esp, 0x0055CED6u); RECOMP_ABI_CALL(0x0055CDACu, sub_0055CDAC); /* call 0x0055CDAC */

loc_0055CED6: ;
    goto loc_0055CF2D;

loc_0055CED8: ;
    edi = esi + 0xB8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055CF07; /* jne: not equal / not zero */

loc_0055CEE2: ;
    eax = eax & 0xFFFFFDFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 4 (8-bit) */
    MEM32(esi + 0xC) = eax;
    if (TEST_Z(_fa, _fb)) goto loc_0055CF1C; /* je: equal / zero */

loc_0055CEEF: ;
    eax = eax | edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esi + 0xC) = eax;
    eax = esi + 0xE8;
    PUSH32(esp, eax);

loc_0055CEFB: ;
    eax = MEM32(esi + 8);
    ecx = MEM32(eax);
    PUSH32(esp, 0x0055CF05u); RECOMP_ABI_CALL(0x0055B857u, sub_0055B857); /* call 0x0055B857 */

loc_0055CF05: ;
    goto loc_0055CF2D;

loc_0055CF07: ;
    eax = eax & 0xFFFFFBFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 2 (8-bit) */
    MEM32(esi + 0xC) = eax;
    if (TEST_Z(_fa, _fb)) goto loc_0055CF1C; /* je: equal / zero */

loc_0055CF14: ;
    eax = eax | edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esi + 0xC) = eax;
    PUSH32(esp, edi);
    goto loc_0055CEFB;

loc_0055CF1C: ;
    PUSH32(esp, MEM32(ecx + 4));
    PUSH32(esp, 0x0055CF24u); RECOMP_ABI_CALL(0x0055B8F7u, sub_0055B8F7); /* call 0x0055B8F7 */

loc_0055CF24: ;
    edx = eax;
    ecx = esi;
    PUSH32(esp, 0x0055CF2Du); RECOMP_ABI_CALL(0x0055CC22u, sub_0055CC22); /* call 0x0055CC22 */

loc_0055CF2D: ;
    POP32(esp, edi);

loc_0055CF2E: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0055CF32
 * Original: 0x0055CF32 - 0x0055CFF8 (198 bytes, 73 insns)
 * Category: game_input
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0055CF32(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055CF32: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = edx;
    SET_LO8(eax, MEM8(edi + 0x37));
    esi = ecx;
    SET_LO8(ecx, LO8(eax));
    SET_LO8(ecx, LO8(ecx) & 3);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055CF53; /* jne: not equal / not zero */

loc_0055CF4A: ;
    ebx = MEM32(edi + 0x20);
    MEM8(ebp + -1) = 2;
    goto loc_0055CF5A;

loc_0055CF53: ;
    ebx = MEM32(edi + 0x24);
    MEM8(ebp + -1) = 1;

loc_0055CF5A: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 4 (8-bit) */
    edx = MEM32(edi + 0x6C);
    if (TEST_Z(_fa, _fb)) goto loc_0055CF89; /* je: equal / zero */

loc_0055CF61: ;
    ecx = MEM32(edi + 0x38);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0055CF70; /* jae: above or equal (unsigned >=) */

loc_0055CF68: ;
    eax = edx + 0x75FAF4;
    goto loc_0055CF8E;

loc_0055CF70: ;
    eax = MEM32(edi + 0x3C);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0055CF7E; /* jae: above or equal (unsigned >=) */

loc_0055CF77: ;
    eax = MEM32(edi + 0x28);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    goto loc_0055CF8C;

loc_0055CF7E: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = ecx + edx + 0x75FAF4;
    goto loc_0055CF8E;

loc_0055CF89: ;
    eax = MEM32(edi + 0x28);

loc_0055CF8C: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0055CF8E: ;
    ecx = MEM32(edi + 0x2C);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x400) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x400 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0055CFA0; /* jbe: below or equal (unsigned <=) */

loc_0055CF9B: ;
    ecx = 0x400;

loc_0055CFA0: ;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi + 0x6C) = edx;
    MEM32(esi + 0x18) = eax;
    SET_LO8(eax, MEM8(ebp + -1));
    edx = edi + 0x98;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    MEM32(esi + 0x14) = ecx;
    MEM8(esi + 0x1C) = LO8(eax);
    ecx = ecx | 0xFFFFFFFFu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, ecx);
    eax = 0xFFE91CA0u;
    PUSH32(esp, eax);
    eax = edi + 0x70;
    PUSH32(esp, eax);
    MEM8(esi) = 0x28;
    MEM8(esi + 1) = 0x41;
    MEM32(esi + 8) = 0x55CE35;
    MEM32(esi + 0xC) = edi;
    MEM32(esi + 0x10) = ebx;
    MEM8(esi + 0x1D) = 0;
    MEM8(esi + 0x1E) = 0;
    { uint32_t _icall_target = MEM32(0x561140); PUSH32(esp, 0x0055CFE8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0055CFE2u); } /* indirect call */
    }

loc_0055CFE8: ;
    eax = MEM32(edi + 8);
    ecx = MEM32(eax);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055CFF3u); RECOMP_ABI_CALL(0x0055BC1Fu, sub_0055BC1F); /* call 0x0055BC1F */

loc_0055CFF3: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_0055CFF8
 * Original: 0x0055CFF8 - 0x0055D060 (104 bytes, 33 insns)
 * Category: game_input
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055CFF8(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055CFF8: ;
    eax = MEM32(esp + 4);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 4), ecx (32-bit) */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    if (CMP_L(_fas, _fbs)) goto loc_0055D047; /* jl: less (signed <) */

loc_0055D008: ;
    _fa = (uint32_t)(MEM8(esi + 0xC)) & 0xFFu; _fb = (uint32_t)(6) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0xC), 6 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0055D047; /* jne: not equal / not zero */

loc_0055D00E: ;
    _fa = (uint32_t)(MEM32(esi + 0x28)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x28), ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055D03E; /* je: equal / zero */

loc_0055D013: ;
    MEM32(esi + 0x6C) = ecx;
    ecx = esi + 0xB8;
    edx = esi;
    PUSH32(esp, 0x0055D023u); RECOMP_ABI_CALL(0x0055CF32u, sub_0055CF32); /* call 0x0055CF32 */

loc_0055D023: ;
    eax = MEM32(esi + 0x6C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x2C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 0x2C) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0055D05C; /* jae: above or equal (unsigned >=) */

loc_0055D02B: ;
    MEM8(esi + 0xD) = MEM8(esi + 0xD) | 4;
    _fa = (uint32_t)(MEM8(esi + 0xD)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    ecx = esi + 0xE8;
    edx = esi;
    PUSH32(esp, 0x0055D03Cu); RECOMP_ABI_CALL(0x0055CF32u, sub_0055CF32); /* call 0x0055CF32 */

loc_0055D03C: ;
    goto loc_0055D05C;

loc_0055D03E: ;
    ecx = esi;
    PUSH32(esp, 0x0055D045u); RECOMP_ABI_CALL(0x0055CDACu, sub_0055CDAC); /* call 0x0055CDAC */

loc_0055D045: ;
    goto loc_0055D05C;

loc_0055D047: ;
    MEM8(esi + 0xD) = MEM8(esi + 0xD) & 0xFD;
    _fa = (uint32_t)(MEM8(esi + 0xD)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    PUSH32(esp, MEM32(eax + 4));
    PUSH32(esp, 0x0055D053u); RECOMP_ABI_CALL(0x0055B8F7u, sub_0055B8F7); /* call 0x0055B8F7 */

loc_0055D053: ;
    edx = eax;
    ecx = esi;
    PUSH32(esp, 0x0055D05Cu); RECOMP_ABI_CALL(0x0055CC22u, sub_0055CC22); /* call 0x0055CC22 */

loc_0055D05C: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0055D060
 * Original: 0x0055D060 - 0x0055D109 (169 bytes, 44 insns)
 * Category: game_input
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055D060(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055D060: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = esi + 0x40;
    MEM32(edi) = 0x43425355;
    eax = MEM32(esi + 0x10);
    MEM32(edi + 4) = eax;
    eax = MEM32(esi + 0x2C);
    MEM32(edi + 8) = eax;
    SET_LO8(eax, MEM8(esi + 0x37));
    SET_LO8(eax, LO8(eax) << 7);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    edx = esi + 0x98;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    MEM8(edi + 0xC) = LO8(eax);
    ecx = ecx | 0xFFFFFFFFu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, ecx);
    eax = 0xFFF3CB00u;
    PUSH32(esp, eax);
    eax = esi + 0x70;
    MEM8(edi + 0xD) = 0;
    MEM8(edi + 0xE) = 0xA;
    MEM8(esi + 0xD) = MEM8(esi + 0xD) | 1;
    _fa = (uint32_t)(MEM8(esi + 0xD)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x561140); PUSH32(esp, 0x0055D0A9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0055D0A3u); } /* indirect call */
    }

loc_0055D0A9: ;
    ecx = MEM32(esi + 0x24);
    MEM8(esi + 0xD) = MEM8(esi + 0xD) | 2;
    _fa = (uint32_t)(MEM8(esi + 0xD)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    eax = esi + 0xB8;
    MEM8(eax) = 0x28;
    PUSH32(esp, eax);
    eax = MEM32(esi + 8);
    MEM8(esi + 0xB9) = 0x41;
    MEM32(esi + 0xC0) = 0x55CFF8;
    MEM32(esi + 0xC4) = esi;
    MEM32(esi + 0xC8) = ecx;
    MEM32(esi + 0xD0) = edi;
    MEM32(esi + 0xCC) = 0x1F;
    MEM8(esi + 0xD4) = 1;
    MEM8(esi + 0xD5) = 0;
    MEM8(esi + 0xD6) = 0;
    ecx = MEM32(eax);
    PUSH32(esp, 0x0055D106u); RECOMP_ABI_CALL(0x0055BC1Fu, sub_0055BC1F); /* call 0x0055BC1F */

loc_0055D106: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0055D109
 * Original: 0x0055D109 - 0x0055D309 (512 bytes, 120 insns)
 * Category: game_input
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055D109(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055D109: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    eax = MEM32(esi + 0xC);
    ebx = MEM32(esi + 8);
    PUSH32(esp, edi);
    edi = eax;
    eax = eax & 0xFFFFFDFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edi = edi & 0x7000;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    MEM32(esi + 0xC) = eax;
    if (TEST_Z(_fa, _fb)) goto loc_0055D139; /* je: equal / zero */

loc_0055D12B: ;
    eax = esi + 0x70;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x5611CC); PUSH32(esp, 0x0055D135u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0055D12Fu); } /* indirect call */
    }

loc_0055D135: ;
    MEM8(esi + 0xD) = MEM8(esi + 0xD) & 0xFE;
    _fa = (uint32_t)(MEM8(esi + 0xD)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */

loc_0055D139: ;
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(6) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 6 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0055D147; /* je: equal / zero */

loc_0055D140: ;
    PUSH32(esp, 0xC000009Du);
    goto loc_0055D1A8;

loc_0055D147: ;
    edx = MEM32(esp + 0x10);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(edx + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx + 4), ecx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0055D163; /* jge: greater or equal (signed >=) */

loc_0055D152: ;
    eax = eax & 0xFFFF8FFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi + 0xC) = eax;
    ecx = MEM32(ebx);
    PUSH32(esp, 0x0055D161u); RECOMP_ABI_CALL(0x0055AF2Eu, sub_0055AF2E); /* call 0x0055AF2E */

loc_0055D161: ;
    goto loc_0055D140;

loc_0055D163: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x1000 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055D232; /* je: equal / zero */

loc_0055D16F: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x2000 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055D1B1; /* je: equal / zero */

loc_0055D177: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x4000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x4000 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055D303; /* jne: not equal / not zero */

loc_0055D183: ;
    eax = eax & 0xFFFFBFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi + 0xC) = eax;
    SET_LO8(eax, MEM8(esi + 0x36));
    SET_LO8(ecx, LO8(eax));
    SET_LO8(ecx, LO8(ecx) - 1);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x7Fu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    MEM8(esi + 0x36) = LO8(ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_0055D1A5; /* je: equal / zero */

loc_0055D199: ;
    ecx = esi;
    PUSH32(esp, 0x0055D1A0u); RECOMP_ABI_CALL(0x0055D060u, sub_0055D060); /* call 0x0055D060 */

loc_0055D1A0: ;
    goto loc_0055D303;

loc_0055D1A5: ;
    PUSH32(esp, MEM32(esi + 0x6C));

loc_0055D1A8: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(esi + 0x30); PUSH32(esp, 0x0055D1ACu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0055D1A9u); } /* indirect call */
    }

loc_0055D1AC: ;
    goto loc_0055D303;

loc_0055D1B1: ;
    eax = eax & 0xFFFFDFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax | 0x4000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edi = esi + 0xB8;
    MEM32(esi + 0xC) = eax;
    MEM8(edi) = 0x30;
    MEM8(esi + 0xB9) = 0x40;
    MEM32(esi + 0xC0) = 0x55D109;
    MEM32(esi + 0xC4) = esi;
    MEM32(esi + 0xC8) = ecx;
    MEM32(esi + 0xD0) = ecx;
    MEM32(esi + 0xCC) = ecx;
    MEM8(esi + 0xD4) = 1;
    MEM8(esi + 0xD5) = 0;
    MEM8(esi + 0xD6) = 0;
    MEM8(esi + 0xE0) = 0x21;
    MEM8(esi + 0xE1) = 0xFF;
    MEM16(esi + 0xE2) = LO16(ecx);
    SET_LO16(eax, ZX8(MEM8(ebx + 4)));
    MEM16(esi + 0xE4) = LO16(eax);
    MEM16(esi + 0xE6) = LO16(ecx);
    goto loc_0055D2D8;

loc_0055D232: ;
    eax = eax & 0xFFFFEFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax | 0x2000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esi + 0xC) = eax;
    eax = MEM32(esi + 0x24);
    edi = esi + 0xB8;
    MEM8(edi) = 0x18;
    MEM8(esi + 0xB9) = 5;
    MEM32(esi + 0xC0) = ecx;
    MEM32(esi + 0xC8) = eax;
    MEM32(esi + 0xCC) = 4;
    ecx = MEM32(ebx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0055D270u); RECOMP_ABI_CALL(0x0055BC1Fu, sub_0055BC1F); /* call 0x0055BC1F */

loc_0055D270: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM8(edi) = 0x30;
    MEM8(esi + 0xB9) = 0x40;
    MEM32(esi + 0xC0) = 0x55D109;
    MEM32(esi + 0xC4) = esi;
    MEM32(esi + 0xC8) = eax;
    MEM32(esi + 0xD0) = eax;
    MEM32(esi + 0xCC) = eax;
    MEM8(esi + 0xD4) = LO8(eax);
    MEM8(esi + 0xD5) = LO8(eax);
    MEM8(esi + 0xD6) = LO8(eax);
    MEM8(esi + 0xE0) = 2;
    MEM8(esi + 0xE1) = 1;
    MEM16(esi + 0xE2) = LO16(eax);
    SET_LO16(ecx, ZX8(MEM8(ebx + 6)));
    MEM16(esi + 0xE4) = LO16(ecx);
    MEM16(esi + 0xE6) = LO16(eax);

loc_0055D2D8: ;
    MEM8(esi + 0xD) = MEM8(esi + 0xD) | 3;
    _fa = (uint32_t)(MEM8(esi + 0xD)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    edx = esi + 0x98;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    ecx = ecx | 0xFFFFFFFFu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, ecx);
    eax = 0xFFF0BDC0u;
    PUSH32(esp, eax);
    eax = esi + 0x70;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x561140); PUSH32(esp, 0x0055D2F7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0055D2F1u); } /* indirect call */
    }

loc_0055D2F7: ;
    MEM8(esi + 0xD) = MEM8(esi + 0xD) | 2;
    _fa = (uint32_t)(MEM8(esi + 0xD)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    ecx = MEM32(ebx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0055D303u); RECOMP_ABI_CALL(0x0055BC1Fu, sub_0055BC1F); /* call 0x0055BC1F */

loc_0055D303: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0055D309
 * Original: 0x0055D309 - 0x0055D337 (46 bytes, 17 insns)
 * Category: game_input
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055D309(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0055D309: ;
    PUSH32(esp, ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    esi = ecx;
    { uint32_t _icall_target = MEM32(0x5610F0); PUSH32(esp, 0x0055D313u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0055D30Du); } /* indirect call */
    }

loc_0055D313: ;
    _fa = (uint32_t)(MEM8(esi + 0xC)) & 0xFFu; _fb = (uint32_t)(6) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0xC), 6 (8-bit) */
    SET_LO8(ebx, LO8(eax));
    if (TEST_Z(_fa, _fb)) goto loc_0055D326; /* je: equal / zero */

loc_0055D31B: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xC000009Du);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(esi + 0x30); PUSH32(esp, 0x0055D324u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0055D321u); } /* indirect call */
    }

loc_0055D324: ;
    goto loc_0055D32D;

loc_0055D326: ;
    ecx = esi;
    PUSH32(esp, 0x0055D32Du); RECOMP_ABI_CALL(0x0055D060u, sub_0055D060); /* call 0x0055D060 */

loc_0055D32D: ;
    POP32(esp, esi);
    SET_LO8(ecx, LO8(ebx));
    POP32(esp, ebx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(0x5610E8)); return; /* indirect tail jmp */

}

/**
 * sub_0055D337
 * Original: 0x0055D337 - 0x0055D363 (44 bytes, 12 insns)
 * Category: game_input
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055D337(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055D337: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 4), 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0055D35F; /* jge: greater or equal (signed >=) */

loc_0055D342: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x762C50);
    { uint32_t _icall_target = MEM32(0x5611CC); PUSH32(esp, 0x0055D34Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0055D347u); } /* indirect call */
    }

loc_0055D34D: ;
    PUSH32(esp, MEM32(0x762C48));
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, MEM32(esi + 4));
    PUSH32(esp, 0x0055D35Fu); RECOMP_ABI_CALL(0x0055AD3Bu, sub_0055AD3B); /* call 0x0055AD3B */

loc_0055D35F: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0055D363
 * Original: 0x0055D363 - 0x0055D387 (36 bytes, 8 insns)
 * Category: game_input
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055D363(void)
{

loc_0055D363: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x762C50);
    { uint32_t _icall_target = MEM32(0x5611CC); PUSH32(esp, 0x0055D36Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0055D368u); } /* indirect call */
    }

loc_0055D36E: ;
    PUSH32(esp, MEM32(0x762C48));
    eax = MEM32(esp + 8);
    PUSH32(esp, MEM32(eax + 4));
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, 0x0055D384u); RECOMP_ABI_CALL(0x0055B007u, sub_0055B007); /* call 0x0055B007 */

loc_0055D384: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0055D387
 * Original: 0x0055D387 - 0x0055D3E4 (93 bytes, 29 insns)
 * Category: game_input
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055D387(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055D387: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0055D394u); RECOMP_ABI_CALL(0x0055B86Au, sub_0055B86A); /* call 0x0055B86A */

loc_0055D394: ;
    SET_LO16(edi, ZX8(MEM8(eax + 3)));
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = eax + 8;
    MEM8(ecx) = 0x30;
    PUSH32(esp, ecx);
    ecx = esi;
    MEM8(eax + 9) = 0x40;
    MEM32(eax + 0x10) = 0x55DC6B;
    MEM32(eax + 0x14) = esi;
    MEM32(eax + 0x18) = edx;
    MEM32(eax + 0x20) = edx;
    MEM32(eax + 0x1C) = edx;
    MEM8(eax + 0x24) = LO8(edx);
    MEM8(eax + 0x25) = LO8(edx);
    MEM8(eax + 0x26) = LO8(edx);
    MEM8(eax + 0x30) = 0x23;
    MEM8(eax + 0x31) = 1;
    MEM16(eax + 0x32) = 1;
    MEM16(eax + 0x34) = LO16(edi);
    MEM16(eax + 0x36) = LO16(edx);
    PUSH32(esp, 0x0055D3DFu); RECOMP_ABI_CALL(0x0055BC1Fu, sub_0055BC1F); /* call 0x0055BC1F */

loc_0055D3DF: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0055D3E4
 * Original: 0x0055D3E4 - 0x0055D41A (54 bytes, 19 insns)
 * Category: game_input
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055D3E4(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055D3E4: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    SET_LO8(eax, MEM8(esi));
    SET_LO8(eax, LO8(eax) >> 4);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    SET_LO8(eax, LO8(eax) & 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    if ((_fa == 0)) goto loc_0055D403; /* je: equal / zero */

loc_0055D3F2: ;
    _fa = (uint32_t)(MEM32(esp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0xC), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055D403; /* jne: not equal / not zero */

loc_0055D3F9: ;
    PUSH32(esp, 0x0055D3FEu); RECOMP_ABI_CALL(0x0055ACBDu, sub_0055ACBD); /* call 0x0055ACBD */

loc_0055D3FE: ;
    MEM8(esi) = MEM8(esi) & 0xEF;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    goto loc_0055D416;

loc_0055D403: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055D416; /* jne: not equal / not zero */

loc_0055D407: ;
    _fa = (uint32_t)(MEM32(esp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0xC), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055D416; /* je: equal / zero */

loc_0055D40E: ;
    PUSH32(esp, 0x0055D413u); RECOMP_ABI_CALL(0x0055ACB6u, sub_0055ACB6); /* call 0x0055ACB6 */

loc_0055D413: ;
    MEM8(esi) = MEM8(esi) | 0x10;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */

loc_0055D416: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0055D41A
 * Original: 0x0055D41A - 0x0055D48B (113 bytes, 37 insns)
 * Category: game_input
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055D41A(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055D41A: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    ecx = esi;
    PUSH32(esp, 0x0055D426u); RECOMP_ABI_CALL(0x0055B86Au, sub_0055B86A); /* call 0x0055B86A */

loc_0055D426: ;
    ecx = MEM32(0x762C94);
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_0055D47C; /* je: equal / zero */

loc_0055D431: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0055D468; /* je: equal / zero */

loc_0055D434: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0055D454; /* je: equal / zero */

loc_0055D437: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0055D487; /* jne: not equal / not zero */

loc_0055D43A: ;
    eax = MEM32(0x762C98);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055D487; /* je: equal / zero */

loc_0055D443: ;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0055D44Bu); RECOMP_ABI_CALL(0x0055D3E4u, sub_0055D3E4); /* call 0x0055D3E4 */

loc_0055D44B: ;
    MEM32(0x762C98) = MEM32(0x762C98) & 0;
    _fa = (uint32_t)(MEM32(0x762C98)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    goto loc_0055D487;

loc_0055D454: ;
    PUSH32(esp, MEM32(0x762C48));
    ecx = esi;
    PUSH32(esp, 0x80000600u);
    PUSH32(esp, 0x0055D466u); RECOMP_ABI_CALL(0x0055B007u, sub_0055B007); /* call 0x0055B007 */

loc_0055D466: ;
    goto loc_0055D487;

loc_0055D468: ;
    PUSH32(esp, MEM32(0x762C48));
    ecx = esi;
    PUSH32(esp, 0x80000600u);
    PUSH32(esp, 0x0055D47Au); RECOMP_ABI_CALL(0x0055AD3Bu, sub_0055AD3B); /* call 0x0055AD3B */

loc_0055D47A: ;
    goto loc_0055D487;

loc_0055D47C: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0055D487u); RECOMP_ABI_CALL(0x0055B857u, sub_0055B857); /* call 0x0055B857 */

loc_0055D487: ;
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_0055D48B
 * Original: 0x0055D48B - 0x0055D4EE (99 bytes, 28 insns)
 * Category: game_input
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055D48B(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055D48B: ;
    _fa = (uint32_t)(MEM32(0x762C98)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x762C98), 0 (32-bit) */
    PUSH32(esp, esi);
    esi = 0x762C50;
    if (CMP_EQ(_fa, _fb)) goto loc_0055D4B5; /* je: equal / zero */

loc_0055D49A: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(0x5611CC); PUSH32(esp, 0x0055D4A1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0055D49Bu); } /* indirect call */
    }

loc_0055D4A1: ;
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(0x762C98));
    PUSH32(esp, 0x0055D4AEu); RECOMP_ABI_CALL(0x0055D3E4u, sub_0055D3E4); /* call 0x0055D3E4 */

loc_0055D4AE: ;
    MEM32(0x762C98) = MEM32(0x762C98) & 0;
    _fa = (uint32_t)(MEM32(0x762C98)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_0055D4B5: ;
    edx = MEM32(esp + 8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055D4C4; /* jne: not equal / not zero */

loc_0055D4BD: ;
    eax = 0xFA0A1F00u;
    goto loc_0055D4D3;

loc_0055D4C4: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 3 (32-bit) */
    eax = 0xFFF48E50u;
    if (CMP_EQ(_fa, _fb)) goto loc_0055D4D3; /* je: equal / zero */

loc_0055D4CE: ;
    eax = 0xFFB3B4C0u;

loc_0055D4D3: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x762C78);
    ecx = ecx | 0xFFFFFFFFu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    MEM32(0x762C94) = edx;
    { uint32_t _icall_target = MEM32(0x561140); PUSH32(esp, 0x0055D4EAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0055D4E4u); } /* indirect call */
    }

loc_0055D4EA: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0055D4EE
 * Original: 0x0055D4EE - 0x0055D63C (334 bytes, 117 insns)
 * Category: game_input
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0055D4EE(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055D4EE: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055D4FEu); RECOMP_ABI_CALL(0x0055B86Au, sub_0055B86A); /* call 0x0055B86A */

loc_0055D4FE: ;
    esi = eax;
    SET_LO16(eax, MEM16(esi + 0x3A));
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x10 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0055D565; /* je: equal / zero */

loc_0055D50A: ;
    _fa = (uint32_t)(MEM32(0x762C94)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x762C94), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055D55D; /* jne: not equal / not zero */

loc_0055D513: ;
    _fa = (uint32_t)(MEM32(0x762C48)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x762C48), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055D55D; /* je: equal / zero */

loc_0055D51B: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x762C50);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint32_t _icall_target = MEM32(0x5611CC); PUSH32(esp, 0x0055D528u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0055D522u); } /* indirect call */
    }

loc_0055D528: ;
    SET_LO16(eax, MEM16(esi + 0x38));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0055D540; /* je: equal / zero */

loc_0055D530: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x10 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0055D540; /* jne: not equal / not zero */

loc_0055D534: ;
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0055D545; /* je: equal / zero */

loc_0055D539: ;
    edi = 0x1000000;
    goto loc_0055D545;

loc_0055D540: ;
    edi = 0x80000600u;

loc_0055D545: ;
    eax = MEM32(0x762C48);
    ecx = MEM32(ebp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    MEM32(0x762C48) = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055D55Au); RECOMP_ABI_CALL(0x0055AD3Bu, sub_0055AD3B); /* call 0x0055AD3B */

loc_0055D55A: ;
    edi = MEM32(ebp + 8);

loc_0055D55D: ;
    MEM8(esi + 0x3A) = MEM8(esi + 0x3A) & 0xEF;
    _fa = (uint32_t)(MEM8(esi + 0x3A)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    PUSH32(esp, 0x14);
    goto loc_0055D5DC;

loc_0055D565: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0055D5B6; /* je: equal / zero */

loc_0055D569: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(ecx, MEM8(esi + 3));
    MEM8(ebp + 8) = LO8(ecx);
    SET_LO8(eax, 1);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    SET_LO8(eax, LO8(eax) << LO8(ecx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    _fa = (uint32_t)(MEM8(esi + 0x38)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x38), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0055D596; /* je: equal / zero */

loc_0055D57C: ;
    _fa = (uint32_t)(MEM8(esi + 5)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 5), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0055D58B; /* je: equal / zero */

loc_0055D581: ;
    PUSH32(esp, MEM32(ebp + 8));
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055D58Bu); RECOMP_ABI_CALL(0x0055AEB7u, sub_0055AEB7); /* call 0x0055AEB7 */

loc_0055D58B: ;
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055D591u); RECOMP_ABI_CALL(0x0055D387u, sub_0055D387); /* call 0x0055D387 */

loc_0055D591: ;
    goto loc_0055D635;

loc_0055D596: ;
    SET_LO8(ecx, MEM8(esi + 5));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(ecx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0055D5AE; /* je: equal / zero */

loc_0055D59D: ;
    PUSH32(esp, MEM32(ebp + 8));
    SET_LO8(eax, ~LO8(eax));
    SET_LO8(eax, LO8(eax) & LO8(ecx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    ecx = edi;
    MEM8(esi + 5) = LO8(eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055D5AEu); RECOMP_ABI_CALL(0x0055AEB7u, sub_0055AEB7); /* call 0x0055AEB7 */

loc_0055D5AE: ;
    MEM8(esi + 0x3A) = MEM8(esi + 0x3A) & 0xFE;
    _fa = (uint32_t)(MEM8(esi + 0x3A)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    PUSH32(esp, 0x10);
    goto loc_0055D5DC;

loc_0055D5B6: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0055D5C2; /* je: equal / zero */

loc_0055D5BA: ;
    SET_LO16(eax, LO16(eax) & 0xFFFD);
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    PUSH32(esp, 0x11);
    goto loc_0055D5D8;

loc_0055D5C2: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0055D5CE; /* je: equal / zero */

loc_0055D5C6: ;
    SET_LO16(eax, LO16(eax) & 0xFFFB);
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    PUSH32(esp, 0x12);
    goto loc_0055D5D8;

loc_0055D5CE: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 8 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0055D626; /* je: equal / zero */

loc_0055D5D2: ;
    SET_LO16(eax, LO16(eax) & 0xFFF7);
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    PUSH32(esp, 0x13);

loc_0055D5D8: ;
    MEM16(esi + 0x3A) = LO16(eax);

loc_0055D5DC: ;
    POP32(esp, ecx);
    MEM16(esi + 0x32) = LO16(ecx);
    SET_LO16(ecx, ZX8(MEM8(esi + 3)));
    eax = esi + 8;
    MEM16(esi + 0x34) = LO16(ecx);
    PUSH32(esp, eax);
    ecx = edi;
    MEM8(eax) = 0x30;
    MEM8(esi + 9) = 0x40;
    MEM32(esi + 0x10) = 0x55DC3B;
    MEM32(esi + 0x14) = edi;
    MEM32(esi + 0x18) = ebx;
    MEM32(esi + 0x20) = ebx;
    MEM32(esi + 0x1C) = ebx;
    MEM8(esi + 0x24) = LO8(ebx);
    MEM8(esi + 0x25) = LO8(ebx);
    MEM8(esi + 0x26) = LO8(ebx);
    MEM8(esi + 0x30) = 0x23;
    MEM8(esi + 0x31) = 1;
    MEM16(esi + 0x36) = LO16(ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055D624u); RECOMP_ABI_CALL(0x0055BC1Fu, sub_0055BC1F); /* call 0x0055BC1F */

loc_0055D624: ;
    goto loc_0055D635;

loc_0055D626: ;
    MEM16(esi + 0x3A) = MEM16(esi + 0x3A) & 0;
    _fa = (uint32_t)(MEM16(esi + 0x3A)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    PUSH32(esp, edi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055D635u); RECOMP_ABI_CALL(0x0055DC3Bu, sub_0055DC3B); /* call 0x0055DC3B */

loc_0055D635: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0055D63C
 * Original: 0x0055D63C - 0x0055D69F (99 bytes, 30 insns)
 * Category: game_input
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055D63C(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055D63C: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    ecx = edi;
    PUSH32(esp, 0x0055D649u); RECOMP_ABI_CALL(0x0055B86Au, sub_0055B86A); /* call 0x0055B86A */

loc_0055D649: ;
    PUSH32(esp, 0);
    ecx = edi;
    esi = eax;
    PUSH32(esp, 0x0055D654u); RECOMP_ABI_CALL(0x0055B86Eu, sub_0055B86E); /* call 0x0055B86E */

loc_0055D654: ;
    MEM8(esi) = MEM8(esi) & 0xFE;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    MEM16(0x762CA2) = MEM16(0x762CA2) - 1;
    _fa = (uint32_t)(MEM16(0x762CA2)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x7FFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0055D68E; /* je: equal / zero */

loc_0055D663: ;
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0055D66Bu); RECOMP_ABI_CALL(0x0055D3E4u, sub_0055D3E4); /* call 0x0055D3E4 */

loc_0055D66B: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x762C98)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(0x762C98) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055D685; /* jne: not equal / not zero */

loc_0055D673: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x762C50);
    { uint32_t _icall_target = MEM32(0x5611CC); PUSH32(esp, 0x0055D67Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0055D678u); } /* indirect call */
    }

loc_0055D67E: ;
    MEM32(0x762C98) = MEM32(0x762C98) & 0;
    _fa = (uint32_t)(MEM32(0x762C98)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_0055D685: ;
    ecx = edi;
    PUSH32(esp, 0x0055D68Cu); RECOMP_ABI_CALL(0x0055AD40u, sub_0055AD40); /* call 0x0055AD40 */

loc_0055D68C: ;
    goto loc_0055D69A;

loc_0055D68E: ;
    PUSH32(esp, 0x80000100u);
    ecx = edi;
    PUSH32(esp, 0x0055D69Au); RECOMP_ABI_CALL(0x0055B10Cu, sub_0055B10C); /* call 0x0055B10C */

loc_0055D69A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0055D69F
 * Original: 0x0055D69F - 0x0055D786 (231 bytes, 60 insns)
 * Category: game_input
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0055D69F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055D69F: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + 8);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055D6AEu); RECOMP_ABI_CALL(0x0055B86Au, sub_0055B86A); /* call 0x0055B86A */

loc_0055D6AE: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    PUSH32(esp, 4);
    SET_LO8(edx, 3);
    POP32(esp, esi);
    MEM32(ebp + -4) = 1;
    edi = 0x55D337;
    if (CMP_EQ(_fa, _fb)) goto loc_0055D76F; /* je: equal / zero */

loc_0055D6C9: ;
    SET_LO8(ebx, MEM8(ebp + 0xC));
    _fa = (uint32_t)(MEM8(eax + 2)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 2), LO8(ebx) (8-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0055D76F; /* jb: below (unsigned <) */

loc_0055D6D5: ;
    _fa = (uint32_t)(MEM8(ebp + 0x14)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + 0x14), LO8(ecx) (8-bit) */
    eax = MEM32(ebp + 0x10);
    MEM32(0x762C48) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0055D6F3; /* je: equal / zero */

loc_0055D6E2: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi = edx;
    edi = 0x55D363;
    MEM32(ebp + -4) = 2;

loc_0055D6F3: ;
    PUSH32(esp, MEM32(ebp + -4));
    SET_LO16(eax, ZX8(LO8(ebx)));
    MEM32(0x762C20) = edi;
    edi = MEM32(ebp + 8);
    MEM8(0x762C18) = 0x30;
    MEM8(0x762C19) = 0x40;
    MEM32(0x762C24) = edi;
    MEM32(0x762C28) = ecx;
    MEM32(0x762C30) = ecx;
    MEM32(0x762C2C) = ecx;
    MEM8(0x762C34) = LO8(ecx);
    MEM8(0x762C35) = LO8(ecx);
    MEM8(0x762C36) = LO8(ecx);
    MEM8(0x762C40) = 0x23;
    MEM8(0x762C41) = LO8(edx);
    MEM16(0x762C42) = LO16(esi);
    MEM16(0x762C44) = LO16(eax);
    MEM16(0x762C46) = LO16(ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055D761u); RECOMP_ABI_CALL(0x0055D48Bu, sub_0055D48B); /* call 0x0055D48B */

loc_0055D761: ;
    PUSH32(esp, 0x762C18);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055D76Du); RECOMP_ABI_CALL(0x0055BC1Fu, sub_0055BC1F); /* call 0x0055BC1F */

loc_0055D76D: ;
    goto loc_0055D77F;

loc_0055D76F: ;
    PUSH32(esp, MEM32(ebp + 0x10));
    ecx = MEM32(ebp + 8);
    PUSH32(esp, 0x80000300u);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055D77Fu); RECOMP_ABI_CALL(0x0055AD3Bu, sub_0055AD3B); /* call 0x0055AD3B */

loc_0055D77F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_0055D786
 * Original: 0x0055D786 - 0x0055D7A8 (34 bytes, 9 insns)
 * Category: game_input
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055D786(void)
{

loc_0055D786: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(esp + 8);
    PUSH32(esp, eax);
    MEM8(eax) = 0x1C;
    MEM8(eax + 1) = 0xC3;
    MEM32(eax + 8) = 0x55D63C;
    MEM32(eax + 0xC) = ecx;
    PUSH32(esp, 0x0055D7A5u); RECOMP_ABI_CALL(0x0055BC1Fu, sub_0055BC1F); /* call 0x0055BC1F */

loc_0055D7A5: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0055D7A8
 * Original: 0x0055D7A8 - 0x0055D7DA (50 bytes, 16 insns)
 * Category: game_input
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055D7A8(void)
{

loc_0055D7A8: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    ecx = esi;
    PUSH32(esp, 0x0055D7B4u); RECOMP_ABI_CALL(0x0055B86Au, sub_0055B86A); /* call 0x0055B86A */

loc_0055D7B4: ;
    edx = MEM32(eax + 0x3C);
    ecx = eax + 8;
    MEM8(ecx) = 0x1C;
    PUSH32(esp, ecx);
    ecx = esi;
    MEM8(eax + 9) = 0x43;
    MEM32(eax + 0x10) = 0x55D786;
    MEM32(eax + 0x14) = esi;
    MEM32(eax + 0x18) = edx;
    PUSH32(esp, 0x0055D7D6u); RECOMP_ABI_CALL(0x0055BC1Fu, sub_0055BC1F); /* call 0x0055BC1F */

loc_0055D7D6: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0055D7DA
 * Original: 0x0055D7DA - 0x0055D86B (145 bytes, 49 insns)
 * Category: game_input
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055D7DA(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055D7DA: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    ecx = ebx;
    PUSH32(esp, 0x0055D7E7u); RECOMP_ABI_CALL(0x0055B86Au, sub_0055B86A); /* call 0x0055B86A */

loc_0055D7E7: ;
    edi = eax;
    SET_LO8(eax, MEM8(edi));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0055D7F7; /* je: equal / zero */

loc_0055D7EF: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0055D7F5u); RECOMP_ABI_CALL(0x0055D7A8u, sub_0055D7A8); /* call 0x0055D7A8 */

loc_0055D7F5: ;
    goto loc_0055D866;

loc_0055D7F7: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 4), 0 (32-bit) */
    ecx = ebx;
    if (CMP_GE(_fas, _fbs)) goto loc_0055D80F; /* jge: greater or equal (signed >=) */

loc_0055D804: ;
    SET_LO8(eax, LO8(eax) | 8);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    MEM8(edi) = LO8(eax);
    PUSH32(esp, 0x0055D80Du); RECOMP_ABI_CALL(0x0055AF2Eu, sub_0055AF2E); /* call 0x0055AF2E */

loc_0055D80D: ;
    goto loc_0055D865;

loc_0055D80F: ;
    MEM32(esi + 8) = MEM32(esi + 8) & 0;
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM8(esi) = 0x18;
    MEM8(esi + 1) = 5;
    eax = MEM32(edi + 0x3C);
    PUSH32(esp, esi);
    MEM32(esi + 0x10) = eax;
    MEM32(esi + 0x14) = 4;
    PUSH32(esp, 0x0055D82Du); RECOMP_ABI_CALL(0x0055BC1Fu, sub_0055BC1F); /* call 0x0055BC1F */

loc_0055D82D: ;
    MEM8(esi) = 0x28;
    MEM8(esi + 1) = 0x41;
    MEM32(esi + 8) = 0x55D971;
    MEM32(esi + 0xC) = ebx;
    eax = MEM32(edi + 0x3C);
    MEM32(esi + 0x10) = eax;
    eax = edi + 0x38;
    MEM32(esi + 0x18) = eax;
    eax = ZX8(MEM8(edi + 7));
    PUSH32(esp, esi);
    ecx = ebx;
    MEM32(esi + 0x14) = eax;
    MEM8(esi + 0x1C) = 2;
    MEM8(esi + 0x1D) = 1;
    MEM8(esi + 0x1E) = 0;
    PUSH32(esp, 0x0055D865u); RECOMP_ABI_CALL(0x0055BC1Fu, sub_0055BC1F); /* call 0x0055BC1F */

loc_0055D865: ;
    POP32(esp, esi);

loc_0055D866: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0055D86B
 * Original: 0x0055D86B - 0x0055D8C6 (91 bytes, 31 insns)
 * Category: game_input
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055D86B(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055D86B: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    ecx = esi;
    PUSH32(esp, 0x0055D877u); RECOMP_ABI_CALL(0x0055B86Au, sub_0055B86A); /* call 0x0055B86A */

loc_0055D877: ;
    SET_LO8(ecx, MEM8(eax));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0055D886; /* je: equal / zero */

loc_0055D87E: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0055D884u); RECOMP_ABI_CALL(0x0055D7A8u, sub_0055D7A8); /* call 0x0055D7A8 */

loc_0055D884: ;
    goto loc_0055D8C2;

loc_0055D886: ;
    edx = MEM32(esp + 8);
    _fa = (uint32_t)(MEM32(edx + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx + 4), 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0055D89C; /* jl: less (signed <) */

loc_0055D890: ;
    PUSH32(esp, esi);
    MEM8(eax + 6) = 0;
    PUSH32(esp, 0x0055D89Au); RECOMP_ABI_CALL(0x0055D4EEu, sub_0055D4EE); /* call 0x0055D4EE */

loc_0055D89A: ;
    goto loc_0055D8C2;

loc_0055D89C: ;
    MEM8(eax + 6) = MEM8(eax + 6) + 1;
    _fa = (uint32_t)(MEM8(eax + 6)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM8(eax + 6)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 6), 3 (8-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0055D8B3; /* jbe: below or equal (unsigned <=) */

loc_0055D8A5: ;
    SET_LO8(ecx, LO8(ecx) | 8);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    MEM8(eax) = LO8(ecx);
    ecx = esi;
    PUSH32(esp, 0x0055D8B1u); RECOMP_ABI_CALL(0x0055AF2Eu, sub_0055AF2E); /* call 0x0055AF2E */

loc_0055D8B1: ;
    goto loc_0055D8C2;

loc_0055D8B3: ;
    PUSH32(esp, edx);
    ecx = esi;
    MEM32(edx + 0x14) = 4;
    PUSH32(esp, 0x0055D8C2u); RECOMP_ABI_CALL(0x0055BC1Fu, sub_0055BC1F); /* call 0x0055BC1F */

loc_0055D8C2: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0055D8C6
 * Original: 0x0055D8C6 - 0x0055D921 (91 bytes, 31 insns)
 * Category: game_input
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055D8C6(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055D8C6: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    ecx = esi;
    PUSH32(esp, 0x0055D8D2u); RECOMP_ABI_CALL(0x0055B86Au, sub_0055B86A); /* call 0x0055B86A */

loc_0055D8D2: ;
    SET_LO8(ecx, MEM8(eax));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0055D8E1; /* je: equal / zero */

loc_0055D8D9: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0055D8DFu); RECOMP_ABI_CALL(0x0055D7A8u, sub_0055D7A8); /* call 0x0055D7A8 */

loc_0055D8DF: ;
    goto loc_0055D91D;

loc_0055D8E1: ;
    edx = MEM32(esp + 8);
    _fa = (uint32_t)(MEM32(edx + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx + 4), 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0055D913; /* jge: greater or equal (signed >=) */

loc_0055D8EB: ;
    MEM8(eax + 6) = MEM8(eax + 6) + 1;
    _fa = (uint32_t)(MEM8(eax + 6)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM8(eax + 6)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 6), 3 (8-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0055D902; /* jbe: below or equal (unsigned <=) */

loc_0055D8F4: ;
    SET_LO8(ecx, LO8(ecx) | 8);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    MEM8(eax) = LO8(ecx);
    ecx = esi;
    PUSH32(esp, 0x0055D900u); RECOMP_ABI_CALL(0x0055AF2Eu, sub_0055AF2E); /* call 0x0055AF2E */

loc_0055D900: ;
    goto loc_0055D91D;

loc_0055D902: ;
    PUSH32(esp, edx);
    ecx = esi;
    MEM32(edx + 0x14) = 4;
    PUSH32(esp, 0x0055D911u); RECOMP_ABI_CALL(0x0055BC1Fu, sub_0055BC1F); /* call 0x0055BC1F */

loc_0055D911: ;
    goto loc_0055D91D;

loc_0055D913: ;
    PUSH32(esp, esi);
    MEM8(eax + 6) = 0;
    PUSH32(esp, 0x0055D91Du); RECOMP_ABI_CALL(0x0055DB68u, sub_0055DB68); /* call 0x0055DB68 */

loc_0055D91D: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0055D921
 * Original: 0x0055D921 - 0x0055D971 (80 bytes, 33 insns)
 * Category: game_input
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0055D921(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055D921: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + 8);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055D92Fu); RECOMP_ABI_CALL(0x0055B86Au, sub_0055B86A); /* call 0x0055B86A */

loc_0055D92F: ;
    esi = eax;
    MEM8(esi) = MEM8(esi) | 2;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM8(ebp + -4) = LO8(ebx);

loc_0055D93A: ;
    _fa = (uint32_t)(MEM8(esi + 5)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 5), LO8(ebx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0055D951; /* je: equal / zero */

loc_0055D93F: ;
    PUSH32(esp, MEM32(ebp + -4));
    ecx = MEM32(ebp + 8);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055D94Au); RECOMP_ABI_CALL(0x0055AEB7u, sub_0055AEB7); /* call 0x0055AEB7 */

loc_0055D94A: ;
    SET_LO8(eax, LO8(ebx));
    SET_LO8(eax, ~LO8(eax));
    MEM8(esi + 5) = MEM8(esi + 5) & LO8(eax);
    _fa = (uint32_t)(MEM8(esi + 5)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */

loc_0055D951: ;
    ebx = ebx << 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM8(ebp + -4) = MEM8(ebp + -4) + 1;
    _fa = (uint32_t)(MEM8(ebp + -4)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    SET_LO8(eax, MEM8(ebp + -4));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(MEM8(esi + 2)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), MEM8(esi + 2) (8-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0055D93A; /* jbe: below or equal (unsigned <=) */

loc_0055D95E: ;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi), 8 (8-bit) */
    POP32(esp, esi);
    POP32(esp, ebx);
    if (TEST_Z(_fa, _fb)) goto loc_0055D96D; /* je: equal / zero */

loc_0055D965: ;
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055D96Du); RECOMP_ABI_CALL(0x0055D7A8u, sub_0055D7A8); /* call 0x0055D7A8 */

loc_0055D96D: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0055D971
 * Original: 0x0055D971 - 0x0055DA3D (204 bytes, 68 insns)
 * Category: game_input
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055D971(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055D971: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    ecx = edi;
    PUSH32(esp, 0x0055D97Eu); RECOMP_ABI_CALL(0x0055B86Au, sub_0055B86A); /* call 0x0055B86A */

loc_0055D97E: ;
    esi = eax;
    SET_LO8(ecx, MEM8(esi));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0055D992; /* je: equal / zero */

loc_0055D987: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0055D98Du); RECOMP_ABI_CALL(0x0055D7A8u, sub_0055D7A8); /* call 0x0055D7A8 */

loc_0055D98D: ;
    goto loc_0055DA38;

loc_0055D992: ;
    eax = MEM32(esp + 0xC);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 4), ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0055D9DC; /* jl: less (signed <) */

loc_0055D99E: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x762C98)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(0x762C98) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055D9B7; /* jne: not equal / not zero */

loc_0055D9A6: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x762C50);
    { uint32_t _icall_target = MEM32(0x5611CC); PUSH32(esp, 0x0055D9B1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0055D9ABu); } /* indirect call */
    }

loc_0055D9B1: ;
    MEM32(0x762C98) = ebx;

loc_0055D9B7: ;
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0055D9BFu); RECOMP_ABI_CALL(0x0055D3E4u, sub_0055D3E4); /* call 0x0055D3E4 */

loc_0055D9BF: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(ecx, MEM8(esi + 2));
    SET_LO8(eax, 1);
    PUSH32(esp, edi);
    MEM8(esi + 6) = LO8(ebx);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    SET_LO8(eax, LO8(eax) << LO8(ecx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    SET_LO8(eax, LO8(eax) - 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x7Fu); /* dec result/SF/OF; CF unchanged */
    SET_LO8(eax, LO8(eax) & MEM8(esi + 0x38));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    MEM8(esi + 4) = LO8(eax);
    PUSH32(esp, 0x0055D9DAu); RECOMP_ABI_CALL(0x0055DB68u, sub_0055DB68); /* call 0x0055DB68 */

loc_0055D9DA: ;
    goto loc_0055DA37;

loc_0055D9DC: ;
    MEM8(esi + 6) = MEM8(esi + 6) + 1;
    _fa = (uint32_t)(MEM8(esi + 6)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM8(esi + 6)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 6), 3 (8-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0055D9F3; /* jbe: below or equal (unsigned <=) */

loc_0055D9E5: ;
    SET_LO8(ecx, LO8(ecx) | 8);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    MEM8(esi) = LO8(ecx);
    ecx = edi;
    PUSH32(esp, 0x0055D9F1u); RECOMP_ABI_CALL(0x0055AF2Eu, sub_0055AF2E); /* call 0x0055AF2E */

loc_0055D9F1: ;
    goto loc_0055DA37;

loc_0055D9F3: ;
    MEM8(eax) = 0x30;
    MEM8(eax + 1) = 0x40;
    MEM32(eax + 8) = 0x55D7DA;
    MEM32(eax + 0xC) = edi;
    MEM32(eax + 0x10) = ebx;
    MEM32(eax + 0x18) = ebx;
    MEM32(eax + 0x14) = ebx;
    MEM8(eax + 0x1C) = LO8(ebx);
    MEM8(eax + 0x1D) = LO8(ebx);
    MEM8(eax + 0x1E) = LO8(ebx);
    MEM8(eax + 0x28) = 2;
    MEM8(eax + 0x29) = 1;
    MEM16(eax + 0x2A) = LO16(ebx);
    SET_LO16(ecx, ZX8(MEM8(esi + 1)));
    MEM16(eax + 0x2C) = LO16(ecx);
    PUSH32(esp, eax);
    ecx = edi;
    MEM16(eax + 0x2E) = LO16(ebx);
    PUSH32(esp, 0x0055DA37u); RECOMP_ABI_CALL(0x0055BC1Fu, sub_0055BC1F); /* call 0x0055BC1F */

loc_0055DA37: ;
    POP32(esp, ebx);

loc_0055DA38: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0055DA3D
 * Original: 0x0055DA3D - 0x0055DAFD (192 bytes, 64 insns)
 * Category: game_input
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055DA3D(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055DA3D: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    ecx = edi;
    PUSH32(esp, 0x0055DA49u); RECOMP_ABI_CALL(0x0055B86Au, sub_0055B86A); /* call 0x0055B86A */

loc_0055DA49: ;
    SET_LO8(ecx, MEM8(eax));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0055DA5B; /* je: equal / zero */

loc_0055DA50: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0055DA56u); RECOMP_ABI_CALL(0x0055D7A8u, sub_0055D7A8); /* call 0x0055D7A8 */

loc_0055DA56: ;
    goto loc_0055DAF9;

loc_0055DA5B: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 4), edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0055DA8F; /* jge: greater or equal (signed >=) */

loc_0055DA67: ;
    MEM8(eax + 6) = MEM8(eax + 6) + 1;
    _fa = (uint32_t)(MEM8(eax + 6)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM8(eax + 6)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 6), 3 (8-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0055DA7E; /* jbe: below or equal (unsigned <=) */

loc_0055DA70: ;
    SET_LO8(ecx, LO8(ecx) | 8);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    MEM8(eax) = LO8(ecx);
    ecx = edi;
    PUSH32(esp, 0x0055DA7Cu); RECOMP_ABI_CALL(0x0055AF2Eu, sub_0055AF2E); /* call 0x0055AF2E */

loc_0055DA7C: ;
    goto loc_0055DAF8;

loc_0055DA7E: ;
    MEM32(esi + 0x14) = 4;
    PUSH32(esp, esi);

loc_0055DA86: ;
    ecx = edi;
    PUSH32(esp, 0x0055DA8Du); RECOMP_ABI_CALL(0x0055BC1Fu, sub_0055BC1F); /* call 0x0055BC1F */

loc_0055DA8D: ;
    goto loc_0055DAF8;

loc_0055DA8F: ;
    SET_LO16(ecx, MEM16(eax + 0x3A));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    MEM8(eax + 6) = LO8(edx);
    if (TEST_Z(_fa, _fb)) goto loc_0055DAA4; /* je: equal / zero */

loc_0055DA9B: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(ecx, LO16(ecx) & 0xFFFE);
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    goto loc_0055DAB1;

loc_0055DAA4: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0055DAF2; /* je: equal / zero */

loc_0055DAA9: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    SET_LO16(ecx, LO16(ecx) & 0xFFFD);
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */

loc_0055DAB1: ;
    MEM16(eax + 0x3A) = LO16(ecx);
    ecx = eax + 8;
    MEM8(ecx) = 0x30;
    MEM8(eax + 9) = 0x40;
    MEM32(eax + 0x10) = 0x55D8C6;
    MEM32(eax + 0x14) = edi;
    MEM32(eax + 0x18) = edx;
    MEM32(eax + 0x20) = edx;
    MEM32(eax + 0x1C) = edx;
    MEM8(eax + 0x24) = LO8(edx);
    MEM8(eax + 0x25) = LO8(edx);
    MEM8(eax + 0x26) = LO8(edx);
    MEM8(eax + 0x30) = 0x20;
    MEM8(eax + 0x31) = 1;
    MEM16(eax + 0x32) = LO16(esi);
    MEM16(eax + 0x34) = LO16(edx);
    MEM16(eax + 0x36) = LO16(edx);
    PUSH32(esp, ecx);
    goto loc_0055DA86;

loc_0055DAF2: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0055DAF8u); RECOMP_ABI_CALL(0x0055DB68u, sub_0055DB68); /* call 0x0055DB68 */

loc_0055DAF8: ;
    POP32(esp, esi);

loc_0055DAF9: ;
    POP32(esp, edi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0055DAFD
 * Original: 0x0055DAFD - 0x0055DB68 (107 bytes, 33 insns)
 * Category: game_input
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055DAFD(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055DAFD: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    ecx = esi;
    PUSH32(esp, 0x0055DB09u); RECOMP_ABI_CALL(0x0055B86Au, sub_0055B86A); /* call 0x0055B86A */

loc_0055DB09: ;
    SET_LO8(ecx, MEM8(eax + 3));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(MEM8(eax + 2)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), MEM8(eax + 2) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055DB48; /* jne: not equal / not zero */

loc_0055DB11: ;
    ecx = MEM32(eax + 0x3C);
    MEM32(eax + 0x18) = ecx;
    ecx = eax + 0x38;
    MEM32(eax + 0x20) = ecx;
    ecx = ZX8(MEM8(eax + 7));
    MEM8(eax + 3) = 0;
    MEM8(eax + 8) = 0x28;
    MEM8(eax + 9) = 0x41;
    MEM32(eax + 0x10) = 0x55D971;
    MEM32(eax + 0x14) = esi;
    MEM32(eax + 0x1C) = ecx;
    MEM8(eax + 0x24) = 2;
    MEM8(eax + 0x25) = 1;
    MEM8(eax + 0x26) = 0;
    goto loc_0055DB59;

loc_0055DB48: ;
    edx = MEM32(esp + 8);
    SET_LO8(ecx, LO8(ecx) + 1);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    MEM8(eax + 3) = LO8(ecx);
    SET_LO16(ecx, ZX8(LO8(ecx)));
    MEM16(edx + 0x2C) = LO16(ecx);

loc_0055DB59: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0055DB64u); RECOMP_ABI_CALL(0x0055BC1Fu, sub_0055BC1F); /* call 0x0055BC1F */

loc_0055DB64: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0055DB68
 * Original: 0x0055DB68 - 0x0055DC3B (211 bytes, 74 insns)
 * Category: game_input
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0055DB68(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055DB68: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055DB78u); RECOMP_ABI_CALL(0x0055B86Au, sub_0055B86A); /* call 0x0055B86A */

loc_0055DB78: ;
    SET_LO8(ebx, MEM8(eax + 4));
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(edx, 1);
    MEM8(eax + 3) = LO8(ecx);
    MEM8(ebp + 0xB) = LO8(ebx);

loc_0055DB85: ;
    _fa = (uint32_t)(MEM8(ebp + 0xB)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + 0xB), LO8(edx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0055DB99; /* jne: not equal / not zero */

loc_0055DB8A: ;
    MEM8(eax + 3) = MEM8(eax + 3) + 1;
    _fa = (uint32_t)(MEM8(eax + 3)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    SET_LO8(ebx, MEM8(eax + 3));
    SET_LO8(edx, LO8(edx) << 1);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(MEM8(eax + 2)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), MEM8(eax + 2) (8-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0055DB85; /* jbe: below or equal (unsigned <=) */

loc_0055DB97: ;
    goto loc_0055DBA1;

loc_0055DB99: ;
    SET_LO8(edx, ~LO8(edx));
    SET_LO8(edx, LO8(edx) & MEM8(eax + 4));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    MEM8(eax + 4) = LO8(edx);

loc_0055DBA1: ;
    SET_LO8(ebx, MEM8(eax + 3));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(MEM8(eax + 2)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), MEM8(eax + 2) (8-bit) */
    MEM8(eax + 0x26) = LO8(ecx);
    MEM8(eax + 0x24) = 2;
    MEM32(eax + 0x14) = edi;
    esi = eax + 8;
    if (CMP_BE(_fa, _fb)) goto loc_0055DBE4; /* jbe: below or equal (unsigned <=) */

loc_0055DBB6: ;
    edx = MEM32(eax + 0x3C);
    MEM32(eax + 0x18) = edx;
    edx = eax + 0x38;
    MEM32(eax + 0x20) = edx;
    edx = ZX8(MEM8(eax + 7));
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    MEM8(esi) = 0x28;
    MEM8(eax + 9) = 0x41;
    MEM32(eax + 0x10) = 0x55D971;
    MEM32(eax + 0x1C) = edx;
    MEM8(eax + 0x25) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055DBE2u); RECOMP_ABI_CALL(0x0055D3E4u, sub_0055D3E4); /* call 0x0055D3E4 */

loc_0055DBE2: ;
    goto loc_0055DC2C;

loc_0055DBE4: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), LO8(ecx) (8-bit) */
    edx = eax + 0x38;
    PUSH32(esp, 4);
    MEM32(eax + 0x20) = edx;
    POP32(esp, edx);
    MEM16(eax + 0x32) = LO16(ecx);
    MEM8(eax + 0x31) = LO8(ecx);
    MEM8(eax + 0x25) = LO8(ecx);
    MEM32(eax + 0x18) = ecx;
    MEM8(eax + 9) = 0x40;
    MEM8(esi) = 0x30;
    MEM16(eax + 0x36) = LO16(edx);
    MEM32(eax + 0x1C) = edx;
    if (CMP_NE(_fa, _fb)) goto loc_0055DC19; /* jne: not equal / not zero */

loc_0055DC0C: ;
    MEM32(eax + 0x10) = 0x55DA3D;
    MEM8(eax + 0x30) = 0xA0;
    goto loc_0055DC28;

loc_0055DC19: ;
    MEM32(eax + 0x10) = 0x55D86B;
    MEM8(eax + 0x30) = 0xA3;
    SET_LO16(ecx, ZX8(LO8(ebx)));

loc_0055DC28: ;
    MEM16(eax + 0x34) = LO16(ecx);

loc_0055DC2C: ;
    PUSH32(esp, esi);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055DC34u); RECOMP_ABI_CALL(0x0055BC1Fu, sub_0055BC1F); /* call 0x0055BC1F */

loc_0055DC34: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0055DC3B
 * Original: 0x0055DC3B - 0x0055DC6B (48 bytes, 16 insns)
 * Category: game_input
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055DC3B(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055DC3B: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    ecx = esi;
    PUSH32(esp, 0x0055DC47u); RECOMP_ABI_CALL(0x0055B86Au, sub_0055B86A); /* call 0x0055B86A */

loc_0055DC47: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax), 2 (8-bit) */
    PUSH32(esp, esi);
    if (TEST_Z(_fa, _fb)) goto loc_0055DC54; /* je: equal / zero */

loc_0055DC4D: ;
    PUSH32(esp, 0x0055DC52u); RECOMP_ABI_CALL(0x0055D7A8u, sub_0055D7A8); /* call 0x0055D7A8 */

loc_0055DC52: ;
    goto loc_0055DC67;

loc_0055DC54: ;
    _fa = (uint32_t)(MEM16(eax + 0x3A)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax + 0x3A), 0 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055DC62; /* je: equal / zero */

loc_0055DC5B: ;
    PUSH32(esp, 0x0055DC60u); RECOMP_ABI_CALL(0x0055D4EEu, sub_0055D4EE); /* call 0x0055D4EE */

loc_0055DC60: ;
    goto loc_0055DC67;

loc_0055DC62: ;
    PUSH32(esp, 0x0055DC67u); RECOMP_ABI_CALL(0x0055DB68u, sub_0055DB68); /* call 0x0055DB68 */

loc_0055DC67: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0055DC6B
 * Original: 0x0055DC6B - 0x0055DCEB (128 bytes, 45 insns)
 * Category: game_input
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055DC6B(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055DC6B: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    ecx = edi;
    PUSH32(esp, 0x0055DC79u); RECOMP_ABI_CALL(0x0055B86Au, sub_0055B86A); /* call 0x0055B86A */

loc_0055DC79: ;
    esi = eax;
    MEM8(esi + 0x3A) = MEM8(esi + 0x3A) & 0xFE;
    _fa = (uint32_t)(MEM8(esi + 0x3A)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(eax, MEM8(esi + 3));
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(ecx, LO8(eax));
    SET_LO8(ebx, 1);
    PUSH32(esp, 5);
    PUSH32(esp, eax);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    SET_LO8(ebx, LO8(ebx) << LO8(ecx));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    ecx = edi;
    PUSH32(esp, 0x0055DC97u); RECOMP_ABI_CALL(0x0055AAEFu, sub_0055AAEF); /* call 0x0055AAEF */

loc_0055DC97: ;
    SET_LO16(edx, ZX8(MEM8(esi + 3)));
    MEM8(esi + 5) = MEM8(esi + 5) | LO8(ebx);
    _fa = (uint32_t)(MEM8(esi + 5)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = esi + 8;
    MEM32(esi + 0x18) = ecx;
    MEM32(esi + 0x20) = ecx;
    MEM32(esi + 0x1C) = ecx;
    MEM8(esi + 0x24) = LO8(ecx);
    MEM8(esi + 0x25) = LO8(ecx);
    MEM8(esi + 0x26) = LO8(ecx);
    MEM16(esi + 0x36) = LO16(ecx);
    PUSH32(esp, eax);
    ecx = edi;
    MEM8(eax) = 0x30;
    MEM8(esi + 9) = 0x40;
    MEM32(esi + 0x10) = 0x55DC3B;
    MEM32(esi + 0x14) = edi;
    MEM8(esi + 0x30) = 0x23;
    MEM8(esi + 0x31) = 1;
    MEM16(esi + 0x32) = 0x10;
    MEM16(esi + 0x34) = LO16(edx);
    PUSH32(esp, 0x0055DCE5u); RECOMP_ABI_CALL(0x0055BC1Fu, sub_0055BC1F); /* call 0x0055BC1F */

loc_0055DCE5: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0055DCEB
 * Original: 0x0055DCEB - 0x0055DD96 (171 bytes, 54 insns)
 * Category: game_input
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055DCEB(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055DCEB: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    ecx = edi;
    PUSH32(esp, 0x0055DCF9u); RECOMP_ABI_CALL(0x0055B86Au, sub_0055B86A); /* call 0x0055B86A */

loc_0055DCF9: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x762C50);
    esi = eax;
    { uint32_t _icall_target = MEM32(0x5611CC); PUSH32(esp, 0x0055DD06u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0055DD00u); } /* indirect call */
    }

loc_0055DD06: ;
    eax = MEM32(esp + 0x10);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 4), ebx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0055DD19; /* jge: greater or equal (signed >=) */

loc_0055DD11: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0055DD17u); RECOMP_ABI_CALL(0x0055D7A8u, sub_0055D7A8); /* call 0x0055D7A8 */

loc_0055DD17: ;
    goto loc_0055DD90;

loc_0055DD19: ;
    SET_LO8(eax, MEM8(0x762BEA));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(7) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 7 (8-bit) */
    MEM8(esi + 2) = LO8(eax);
    if (CMP_BE(_fa, _fb)) goto loc_0055DD29; /* jbe: below or equal (unsigned <=) */

loc_0055DD25: ;
    MEM8(esi + 2) = 7;

loc_0055DD29: ;
    PUSH32(esp, 3);
    PUSH32(esp, 0x0055DD30u); RECOMP_ABI_CALL(0x0055D48Bu, sub_0055D48B); /* call 0x0055D48B */

loc_0055DD30: ;
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    MEM32(0x762C98) = esi;
    PUSH32(esp, 0x0055DD3Eu); RECOMP_ABI_CALL(0x0055D3E4u, sub_0055D3E4); /* call 0x0055D3E4 */

loc_0055DD3E: ;
    PUSH32(esp, ebx);
    ecx = edi;
    PUSH32(esp, 0x0055DD46u); RECOMP_ABI_CALL(0x0055B10Cu, sub_0055B10C); /* call 0x0055B10C */

loc_0055DD46: ;
    eax = esi + 8;
    PUSH32(esp, eax);
    ecx = edi;
    MEM8(esi + 3) = 1;
    MEM8(eax) = 0x30;
    MEM8(esi + 9) = 0x40;
    MEM32(esi + 0x10) = 0x55DAFD;
    MEM32(esi + 0x14) = edi;
    MEM32(esi + 0x18) = ebx;
    MEM32(esi + 0x20) = ebx;
    MEM32(esi + 0x1C) = ebx;
    MEM8(esi + 0x24) = LO8(ebx);
    MEM8(esi + 0x25) = LO8(ebx);
    MEM8(esi + 0x26) = LO8(ebx);
    MEM8(esi + 0x30) = 0x23;
    MEM8(esi + 0x31) = 3;
    MEM16(esi + 0x32) = 8;
    MEM16(esi + 0x34) = 1;
    MEM16(esi + 0x36) = LO16(ebx);
    PUSH32(esp, 0x0055DD90u); RECOMP_ABI_CALL(0x0055BC1Fu, sub_0055BC1F); /* call 0x0055BC1F */

loc_0055DD90: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0055DD96
 * Original: 0x0055DD96 - 0x0055DE12 (124 bytes, 37 insns)
 * Category: game_input
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055DD96(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055DD96: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0x762C50);
    { uint32_t _icall_target = MEM32(0x5611CC); PUSH32(esp, 0x0055DDA2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0055DD9Cu); } /* indirect call */
    }

loc_0055DDA2: ;
    esi = MEM32(esp + 8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 4), eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0055DDB8; /* jge: greater or equal (signed >=) */

loc_0055DDAD: ;
    PUSH32(esp, MEM32(esp + 0xC));
    PUSH32(esp, 0x0055DDB6u); RECOMP_ABI_CALL(0x0055D7A8u, sub_0055D7A8); /* call 0x0055D7A8 */

loc_0055DDB6: ;
    goto loc_0055DE0E;

loc_0055DDB8: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    PUSH32(esp, 8);
    POP32(esp, ecx);
    PUSH32(esp, eax);
    MEM8(esi) = 0x30;
    MEM8(esi + 1) = 0x40;
    MEM32(esi + 8) = 0x55DCEB;
    MEM32(esi + 0xC) = edi;
    MEM32(esi + 0x10) = eax;
    MEM32(esi + 0x18) = 0x762BE8;
    MEM32(esi + 0x14) = ecx;
    MEM8(esi + 0x1C) = 2;
    MEM8(esi + 0x1D) = 1;
    MEM8(esi + 0x1E) = LO8(eax);
    MEM8(esi + 0x28) = 0xA0;
    MEM8(esi + 0x29) = 6;
    MEM16(esi + 0x2A) = 0x2900;
    MEM16(esi + 0x2C) = LO16(eax);
    MEM16(esi + 0x2E) = LO16(ecx);
    PUSH32(esp, 0x0055DE05u); RECOMP_ABI_CALL(0x0055D48Bu, sub_0055D48B); /* call 0x0055D48B */

loc_0055DE05: ;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x0055DE0Du); RECOMP_ABI_CALL(0x0055BC1Fu, sub_0055BC1F); /* call 0x0055BC1F */

loc_0055DE0D: ;
    POP32(esp, edi);

loc_0055DE0E: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0055DE12
 * Original: 0x0055DE12 - 0x0055DF38 (294 bytes, 90 insns)
 * Category: game_input
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0055DE12(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055DE12: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    ecx = MEM32(ebp + 0xC);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055DE20u); RECOMP_ABI_CALL(0x0055B86Au, sub_0055B86A); /* call 0x0055B86A */

loc_0055DE20: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x762C50);
    edi = eax;
    { uint32_t _icall_target = MEM32(0x5611CC); PUSH32(esp, 0x0055DE2Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0055DE27u); } /* indirect call */
    }

loc_0055DE2D: ;
    esi = MEM32(ebp + 8);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 4), ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0055DF28; /* jl: less (signed <) */

loc_0055DE3B: ;
    SET_LO16(ecx, MEM16(0x762BEA));
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(0x30) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), 0x30 (16-bit) */
    eax = 0x762BE8;
    if (CMP_A(_fa, _fb)) goto loc_0055DF28; /* ja: above (unsigned >) */

loc_0055DE53: ;
    ecx = ZX16(LO16(ecx));
    _fa = (uint32_t)(MEM32(esi + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x14), ecx (32-bit) */
    MEM32(ebp + 8) = ecx;
    if (CMP_B(_fa, _fb)) goto loc_0055DF28; /* jb: below (unsigned <) */

loc_0055DE62: ;
    SET_LO8(eax, MEM8(eax));
    ecx = ZX8(LO8(eax));
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055DF28; /* je: equal / zero */

loc_0055DE71: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ebp + 8) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0055DF28; /* jae: above or equal (unsigned >=) */

loc_0055DE7A: ;
    eax = edx + 0x762BE8;
    _fa = (uint32_t)(MEM8(eax + 1)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 1), 5 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055DE62; /* jne: not equal / not zero */

loc_0055DE86: ;
    _fa = (uint32_t)(MEM16(eax + 4)) & 0xFFFFu; _fb = (uint32_t)(4) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax + 4), 4 (16-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0055DE95; /* ja: above (unsigned >) */

loc_0055DE8D: ;
    SET_LO8(ecx, MEM8(eax + 4));
    MEM8(edi + 7) = LO8(ecx);
    goto loc_0055DE99;

loc_0055DE95: ;
    MEM8(edi + 7) = 4;

loc_0055DE99: ;
    SET_LO8(ecx, MEM8(eax + 2));
    MEM8(edi + 1) = LO8(ecx);
    MEM8(esi) = 0x20;
    MEM8(esi + 1) = 2;
    MEM32(esi + 8) = ebx;
    SET_LO8(ecx, MEM8(eax + 2));
    MEM8(esi + 0x15) = LO8(ecx);
    SET_LO8(eax, MEM8(eax + 3));
    ecx = MEM32(ebp + 0xC);
    SET_LO8(eax, LO8(eax) & 3);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    MEM8(esi + 0x16) = LO8(eax);
    MEM8(esi + 0x17) = 0x10;
    SET_LO16(eax, ZX8(MEM8(edi + 7)));
    PUSH32(esp, esi);
    MEM16(esi + 0x1C) = LO16(eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055DECDu); RECOMP_ABI_CALL(0x0055BC1Fu, sub_0055BC1F); /* call 0x0055BC1F */

loc_0055DECD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0055DF28; /* jl: less (signed <) */

loc_0055DED1: ;
    eax = MEM32(esi + 0x10);
    MEM32(edi + 0x3C) = eax;
    edi = MEM32(ebp + 0xC);
    MEM8(esi) = 0x30;
    MEM8(esi + 1) = 0x40;
    MEM32(esi + 8) = 0x55DD96;
    MEM32(esi + 0xC) = edi;
    MEM32(esi + 0x10) = ebx;
    MEM32(esi + 0x18) = ebx;
    MEM32(esi + 0x14) = ebx;
    MEM8(esi + 0x1C) = LO8(ebx);
    MEM8(esi + 0x1D) = LO8(ebx);
    MEM8(esi + 0x1E) = LO8(ebx);
    MEM8(esi + 0x28) = LO8(ebx);
    MEM8(esi + 0x29) = 9;
    SET_LO16(eax, ZX8(MEM8(0x762BED)));
    PUSH32(esp, ebx);
    MEM16(esi + 0x2A) = LO16(eax);
    MEM16(esi + 0x2C) = LO16(ebx);
    MEM16(esi + 0x2E) = LO16(ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055DF1Eu); RECOMP_ABI_CALL(0x0055D48Bu, sub_0055D48B); /* call 0x0055D48B */

loc_0055DF1E: ;
    PUSH32(esp, esi);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055DF26u); RECOMP_ABI_CALL(0x0055BC1Fu, sub_0055BC1F); /* call 0x0055BC1F */

loc_0055DF26: ;
    goto loc_0055DF31;

loc_0055DF28: ;
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055DF31u); RECOMP_ABI_CALL(0x0055D786u, sub_0055D786); /* call 0x0055D786 */

loc_0055DF31: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0055DF38
 * Original: 0x0055DF38 - 0x0055E01A (226 bytes, 72 insns)
 * Category: game_input
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055DF38(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0055DF38: ;
    SET_LO16(eax, MEM16(0x762CA2));
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(MEM16(0x762CA0)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), MEM16(0x762CA0) (16-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0055E007; /* jae: above or equal (unsigned >=) */

loc_0055DF51: ;
    eax = MEM32(0x762CA4);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0055DF66; /* je: equal / zero */

loc_0055DF5B: ;
    ecx = eax;

loc_0055DF5D: ;
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x40;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0055DF5D; /* jne: not equal / not zero */

loc_0055DF66: ;
    MEM16(0x762CA2) = MEM16(0x762CA2) + 1;
    _fa = (uint32_t)(MEM16(0x762CA2)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    esi = esi << 6;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, edi);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    ecx = ebp;
    PUSH32(esp, 0x0055DF80u); RECOMP_ABI_CALL(0x0055B86Eu, sub_0055B86E); /* call 0x0055B86E */

loc_0055DF80: ;
    SET_LO8(eax, MEM8(esi));
    SET_LO8(eax, LO8(eax) & 0xF5);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    edi = esi + 8;
    SET_LO8(eax, LO8(eax) | 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    PUSH32(esp, edi);
    ecx = ebp;
    MEM8(esi) = LO8(eax);
    MEM8(esi + 5) = LO8(ebx);
    MEM8(esi + 6) = LO8(ebx);
    MEM8(edi) = 0x20;
    MEM8(esi + 9) = 0x82;
    MEM32(esi + 0x10) = ebx;
    PUSH32(esp, 0x0055DFA3u); RECOMP_ABI_CALL(0x0055BC1Fu, sub_0055BC1F); /* call 0x0055BC1F */

loc_0055DFA3: ;
    PUSH32(esp, 0x30);
    POP32(esp, eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x55D41A);
    PUSH32(esp, 0x762C78);
    MEM8(edi) = LO8(eax);
    MEM8(esi + 9) = 0x40;
    MEM32(esi + 0x10) = 0x55DE12;
    MEM32(esi + 0x14) = ebp;
    MEM32(esi + 0x18) = ebx;
    MEM32(esi + 0x20) = 0x762BE8;
    MEM32(esi + 0x1C) = eax;
    MEM8(esi + 0x24) = 2;
    MEM8(esi + 0x25) = 1;
    MEM8(esi + 0x26) = LO8(ebx);
    MEM8(esi + 0x30) = 0x80;
    MEM8(esi + 0x31) = 6;
    MEM16(esi + 0x32) = 0x200;
    MEM16(esi + 0x34) = LO16(ebx);
    MEM16(esi + 0x36) = LO16(eax);
    { uint32_t _icall_target = MEM32(0x5610E4); PUSH32(esp, 0x0055DFF5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0055DFEFu); } /* indirect call */
    }

loc_0055DFF5: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0055DFFBu); RECOMP_ABI_CALL(0x0055D48Bu, sub_0055D48B); /* call 0x0055D48B */

loc_0055DFFB: ;
    PUSH32(esp, edi);
    ecx = ebp;
    PUSH32(esp, 0x0055E003u); RECOMP_ABI_CALL(0x0055BC1Fu, sub_0055BC1F); /* call 0x0055BC1F */

loc_0055E003: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    goto loc_0055E015;

loc_0055E007: ;
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, 0x80000100u);
    PUSH32(esp, 0x0055E015u); RECOMP_ABI_CALL(0x0055B10Cu, sub_0055B10C); /* call 0x0055B10C */

loc_0055E015: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0055E01A
 * Original: 0x0055E01A - 0x0055E0A9 (143 bytes, 56 insns)
 * Category: game_input
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055E01A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0055E01A: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM8(esi + 0x460)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x460), 0 (8-bit) */
    ebp = edx;
    SET_LO8(ebx, 1);
    if (CMP_BE(_fa, _fb)) goto loc_0055E0A4; /* jbe: below or equal (unsigned <=) */

loc_0055E02D: ;
    MEM8(esp + 0xC) = LO8(ebx);
    PUSH32(esp, edi);

loc_0055E032: ;
    SET_LO16(eax, ZX8(LO8(ebx)));
    _fa = (uint32_t)(MEM16(ebp)) & 0xFFFFu; _fb = (uint32_t)(LO16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* test MEM16(ebp), LO16(eax) (16-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0055E08F; /* je: equal / zero */

loc_0055E03C: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(ecx, MEM16(ebp + 2));
    ecx = ecx & eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), 0 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055E071; /* je: equal / zero */

loc_0055E049: ;
    ecx = esi + 0x461;
    SET_LO8(eax, MEM8(ecx));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0055E061; /* je: equal / zero */

loc_0055E055: ;
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, esi);
    PUSH32(esp, 0x0055E05Fu); RECOMP_ABI_CALL(0x0055AFF4u, sub_0055AFF4); /* call 0x0055AFF4 */

loc_0055E05F: ;
    goto loc_0055E065;

loc_0055E061: ;
    SET_LO8(eax, LO8(eax) | LO8(ebx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    MEM8(ecx) = LO8(eax);

loc_0055E065: ;
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, esi);
    PUSH32(esp, 0x0055E06Fu); RECOMP_ABI_CALL(0x0055ACC4u, sub_0055ACC4); /* call 0x0055ACC4 */

loc_0055E06F: ;
    goto loc_0055E08F;

loc_0055E071: ;
    edi = esi + 0x461;
    SET_LO8(eax, MEM8(edi));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0055E08F; /* je: equal / zero */

loc_0055E07D: ;
    PUSH32(esp, MEM32(esp + 0x10));
    SET_LO8(ecx, LO8(ebx));
    SET_LO8(ecx, ~LO8(ecx));
    SET_LO8(ecx, LO8(ecx) & LO8(eax));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    PUSH32(esp, esi);
    MEM8(edi) = LO8(ecx);
    PUSH32(esp, 0x0055E08Fu); RECOMP_ABI_CALL(0x0055AFF4u, sub_0055AFF4); /* call 0x0055AFF4 */

loc_0055E08F: ;
    MEM8(esp + 0x10) = MEM8(esp + 0x10) + 1;
    _fa = (uint32_t)(MEM8(esp + 0x10)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    SET_LO8(eax, MEM8(esp + 0x10));
    SET_LO8(ebx, LO8(ebx) << 1);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    SET_LO8(eax, LO8(eax) - 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x7Fu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(MEM8(esi + 0x460)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), MEM8(esi + 0x460) (8-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0055E032; /* jb: below (unsigned <) */

loc_0055E0A3: ;
    POP32(esp, edi);

loc_0055E0A4: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0055E0A9
 * Original: 0x0055E0A9 - 0x0055E0F6 (77 bytes, 25 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0055E0A9(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055E0A9: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + 0x10);
    edx = MEM32(ebp + 0xC);
    MEM32(eax + 0x470) = ecx;
    ecx = MEM32(ebp + 0x14);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    MEM32(eax + 0x474) = ecx;
    ecx = MEM32(eax);
    MEM16(ebp + 8) = 0x10;
    esi = MEM32(ebp + 8);
    MEM32(ecx + edx * 4 + 0x50) = esi;
    esi = eax + 0x4A0;
    PUSH32(esp, esi);
    edx = edx | 0xFFFFFFFFu;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, edx);
    ecx = 0xFFF0BDC0u;
    PUSH32(esp, ecx);
    _fb = (uint32_t)(0x478) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x478;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x561140); PUSH32(esp, 0x0055E0F1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0055E0EBu); } /* indirect call */
    }

loc_0055E0F1: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_0055E0F6
 * Original: 0x0055E0F6 - 0x0055E113 (29 bytes, 11 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0055E0F6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */

loc_0055E0F6: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    eax = MEM32(ebp + 8);
    eax = MEM32(eax);
    ecx = MEM32(ebp + 0xC);
    MEM16(ebp + -4) = 1;
    edx = MEM32(ebp + -4);
    MEM32(eax + ecx * 4 + 0x50) = edx;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0055E113
 * Original: 0x0055E113 - 0x0055E13E (43 bytes, 15 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055E113(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055E113: ;
    ecx = MEM32(esp + 8);
    eax = ecx + 0x470;
    edx = MEM32(eax);
    _fb = (uint32_t)(0x474) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x474;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    PUSH32(esp, esi);
    esi = MEM32(ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_0055E13A; /* je: equal / zero */

loc_0055E12C: ;
    MEM32(eax) = MEM32(eax) & 0;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ecx) = MEM32(ecx) & 0;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0x80000600u);
    { uint32_t _icall_target = edx; PUSH32(esp, 0x0055E13Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0055E138u); } /* indirect call */
    }

loc_0055E13A: ;
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_0055E13E
 * Original: 0x0055E13E - 0x0055E1FD (191 bytes, 64 insns)
 * Category: game_input
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0055E13E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055E13E: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    edx = ZX8(MEM8(esi + 0x460));
    ecx = eax + 0x54;
    eax = MEM32(ecx);
    PUSH32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    edi = ebp + -8;
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(ebp + -12) = 1;
    if (CMP_BE(_fa, _fb)) goto loc_0055E1EF; /* jbe: below or equal (unsigned <=) */

loc_0055E16B: ;
    MEM32(ebp + -16) = ecx;
    MEM32(ebp + -20) = edx;
    PUSH32(esp, ebx);

loc_0055E172: ;
    edi = MEM32(ecx);
    MEM32(ebp + -4) = edi;
    _fa = (uint32_t)(MEM8(ebp + -2)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + -2), 0x10 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0055E1BC; /* je: equal / zero */

loc_0055E17D: ;
    ecx = MEM32(esi + 0x474);
    ebx = esi + 0x470;
    eax = MEM32(ebx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebp + -28) = eax;
    MEM32(ebp + -24) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_0055E1BC; /* je: equal / zero */

loc_0055E195: ;
    eax = esi + 0x478;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x5611CC); PUSH32(esp, 0x0055E1A2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0055E19Cu); } /* indirect call */
    }

loc_0055E1A2: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + -24));
    MEM32(ebx) = MEM32(ebx) & 0;
    _fa = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi + 0x474) = MEM32(esi + 0x474) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x474)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edi = edi & 0x200;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edi = edi << 0xF;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(ebp + -28); PUSH32(esp, 0x0055E1BCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0055E1B9u); } /* indirect call */
    }

loc_0055E1BC: ;
    _fa = (uint32_t)(MEM8(ebp + -2)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + -2), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0055E1D3; /* je: equal / zero */

loc_0055E1C2: ;
    eax = MEM32(ebp + -12);
    MEM16(ebp + -8) = MEM16(ebp + -8) | LO16(eax);
    _fa = (uint32_t)(MEM16(ebp + -8)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* or result */
    _fa = (uint32_t)(MEM8(ebp + -4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + -4), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0055E1D3; /* je: equal / zero */

loc_0055E1CF: ;
    MEM16(ebp + -6) = MEM16(ebp + -6) | LO16(eax);
    _fa = (uint32_t)(MEM16(ebp + -6)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* or result */

loc_0055E1D3: ;
    MEM16(ebp + -4) = MEM16(ebp + -4) & 0;
    _fa = (uint32_t)(MEM16(ebp + -4)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    ecx = MEM32(ebp + -16);
    eax = MEM32(ebp + -4);
    MEM32(ebp + -12) = MEM32(ebp + -12) << 1;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(ecx) = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -20) = MEM32(ebp + -20) - 1;
    _fa = (uint32_t)(MEM32(ebp + -20)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(ebp + -16) = ecx;
    if ((_fa != 0)) goto loc_0055E172; /* jne: not equal / not zero */

loc_0055E1EE: ;
    POP32(esp, ebx);

loc_0055E1EF: ;
    edx = ebp + -8;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055E1F9u); RECOMP_ABI_CALL(0x0055E01Au, sub_0055E01A); /* call 0x0055E01A */

loc_0055E1F9: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_0055E1FD
 * Original: 0x0055E1FD - 0x0055E210 (19 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055E1FD(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055E1FD: ;
    eax = MEM32(0x87C948);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055E20F; /* je: equal / zero */

loc_0055E206: ;
    ecx = MEM32(eax + 0x18);
    MEM32(0x87C948) = ecx;

loc_0055E20F: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0055E210
 * Original: 0x0055E210 - 0x0055E384 (372 bytes, 133 insns)
 * Category: game_input
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0055E210(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055E210: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(ebp + -8) = MEM32(ebp + -8) & 0;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ebx = edx;
    MEM32(ebp + -12) = ecx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x5610F0); PUSH32(esp, 0x0055E227u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0055E221u); } /* indirect call */
    }

loc_0055E227: ;
    MEM8(ebp + -1) = LO8(eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055E22Fu); RECOMP_ABI_CALL(0x0055E1FDu, sub_0055E1FD); /* call 0x0055E1FD */

loc_0055E22F: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055E241; /* jne: not equal / not zero */

loc_0055E235: ;
    MEM32(ebp + -8) = 0x80000100u;
    goto loc_0055E36F;

loc_0055E241: ;
    PUSH32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0xC);
    POP32(esp, ecx);
    edi = esi;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    eax = esi;
    _fb = (uint32_t)(MEM32(0x87C940)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(0x87C940);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esi + 0x14) = eax;
    SET_LO8(eax, MEM8(ebx + 0x16));
    MEM8(esi + 0x11) = LO8(eax);
    SET_LO8(eax, MEM8(ebx + 0x17));
    MEM8(esi + 0x13) = LO8(eax);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(eax, MEM8(ebx + 0x1E));
    PUSH32(esp, eax);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(eax, MEM8(esi + 0x11));
    PUSH32(esp, eax);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(eax, MEM16(ebx + 0x1C));
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055E27Au); RECOMP_ABI_CALL(0x0055BF6Eu, sub_0055BF6E); /* call 0x0055BF6E */

loc_0055E27A: ;
    MEM16(esi + 0x22) = LO16(eax);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(eax, MEM8(ebx + 0x14));
    eax = eax ^ MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = eax & 0x7F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi) = MEM32(esi) ^ eax;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = ZX8(MEM8(ebx + 0x15));
    ecx = MEM32(esi);
    eax = eax << 7;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax ^ ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = eax & 0x780;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax ^ ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM8(esi + 0x11)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x11), 0 (8-bit) */
    MEM32(esi) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_0055E2AD; /* jne: not equal / not zero */

loc_0055E2A4: ;
    eax = eax & 0xFFFFE7FFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi) = eax;
    goto loc_0055E2C7;

loc_0055E2AD: ;
    _fa = (uint32_t)(MEM8(ebx + 0x15)) & 0xFFu; _fb = (uint32_t)(0x80) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebx + 0x15), 0x80 (8-bit) */
    PUSH32(esp, 0);
    POP32(esp, ecx);
    SET_LO8(ecx, (TEST_NZ(_fa, _fb)) ? 1 : 0); /* setne */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = ecx << 0xB;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx ^ eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = ecx & 0x1800;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx ^ eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi) = ecx;

loc_0055E2C7: ;
    ecx = MEM32(esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(eax, MEM8(ebx + 0x1E));
    ecx = ecx & 0xFFFF5FFFu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax & 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax | 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = eax << 0xD;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax | ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esi) = eax;
    ecx = ZX16(MEM16(ebx + 0x1C));
    ecx = ecx << 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx ^ eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = ecx & 0x7FF0000;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx ^ eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi) = ecx;
    MEM32(esi + 0xC) = eax;
    MEM32(esi + 8) = eax;
    MEM32(esi + 4) = eax;
    edx = MEM32(ebx + 0x18);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055E32D; /* je: equal / zero */

loc_0055E306: ;
    eax = ecx;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = ecx >> 7;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx & 0xF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = eax & 0x1800;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edi = edi << LO8(ecx);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1000 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055E322; /* jne: not equal / not zero */

loc_0055E31F: ;
    edi = edi << 0x10;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */

loc_0055E322: ;
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(edx), edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0055E32D; /* je: equal / zero */

loc_0055E326: ;
    MEM32(esi + 8) = 2;

loc_0055E32D: ;
    SET_LO8(eax, MEM8(esi + 0x11));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    POP32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_0055E348; /* je: equal / zero */

loc_0055E335: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 2 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055E348; /* je: equal / zero */

loc_0055E339: ;
    ecx = MEM32(ebp + -12);
    edx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055E343u); RECOMP_ABI_CALL(0x0055F825u, sub_0055F825); /* call 0x0055F825 */

loc_0055E343: ;
    MEM32(ebp + -8) = eax;
    goto loc_0055E352;

loc_0055E348: ;
    ecx = MEM32(ebp + -12);
    edx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055E352u); RECOMP_ABI_CALL(0x0055F70Bu, sub_0055F70B); /* call 0x0055F70B */

loc_0055E352: ;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0055E35D; /* jl: less (signed <) */

loc_0055E358: ;
    MEM32(ebx + 0x10) = esi;
    goto loc_0055E36F;

loc_0055E35D: ;
    MEM32(ebx + 0x10) = MEM32(ebx + 0x10) & 0;
    _fa = (uint32_t)(MEM32(ebx + 0x10)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = MEM32(0x87C948);
    MEM32(esi + 0x18) = eax;
    MEM32(0x87C948) = esi;

loc_0055E36F: ;
    esi = MEM32(ebp + -8);
    SET_LO8(ecx, MEM8(ebp + -1));
    MEM32(ebx + 4) = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x5610E8); PUSH32(esp, 0x0055E37Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0055E378u); } /* indirect call */
    }

loc_0055E37E: ;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_0055E384
 * Original: 0x0055E384 - 0x0055E3A5 (33 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0055E384(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055E384: ;
    ecx = MEM32(edx + 0x10);
    eax = MEM32(ecx + 8);
    eax = eax & 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(edx + 0x14) = eax;
    _fa = (uint32_t)(MEM8(ecx + 0x26)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + 0x26), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055E39C; /* jne: not equal / not zero */

loc_0055E396: ;
    _fa = (uint32_t)(MEM8(ecx + 0x27)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + 0x27), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055E3A2; /* je: equal / zero */

loc_0055E39C: ;
    eax = eax | 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(edx + 0x14) = eax;

loc_0055E3A2: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_0055E3A5
 * Original: 0x0055E3A5 - 0x0055E3D3 (46 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0055E3A5(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055E3A5: ;
    eax = MEM32(edx + 0x10);
    edx = MEM32(edx + 0x14);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0055E3B4; /* je: equal / zero */

loc_0055E3B0: ;
    MEM32(eax + 8) = MEM32(eax + 8) & 0xFFFFFFFDu;
    _fa = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_0055E3B4: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 8 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0055E3BD; /* je: equal / zero */

loc_0055E3B9: ;
    MEM32(eax + 8) = MEM32(eax + 8) | 2;
    _fa = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_0055E3BD: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0055E3D0; /* jne: not equal / not zero */

loc_0055E3C2: ;
    ecx = MEM32(eax + 8);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0055E3D0; /* je: equal / zero */

loc_0055E3CA: ;
    ecx = ecx & 0xFFFFFFFEu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(eax + 8) = ecx;

loc_0055E3D0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_0055E3D3
 * Original: 0x0055E3D3 - 0x0055E40C (57 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055E3D3(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055E3D3: ;
    eax = MEM32(ecx + 0x41C);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055E3ED; /* je: equal / zero */

loc_0055E3E0: ;
    esi = eax;
    eax = MEM32(eax + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055E3E0; /* jne: not equal / not zero */

loc_0055E3E9: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055E3F8; /* jne: not equal / not zero */

loc_0055E3ED: ;
    eax = MEM32(eax + 0x24);
    MEM32(ecx + 0x41C) = eax;
    goto loc_0055E3FE;

loc_0055E3F8: ;
    eax = MEM32(eax + 0x24);
    MEM32(esi + 0x24) = eax;

loc_0055E3FE: ;
    eax = ecx + 0x420;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(eax) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055E40A; /* jne: not equal / not zero */

loc_0055E408: ;
    MEM32(eax) = esi;

loc_0055E40A: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0055E40C
 * Original: 0x0055E40C - 0x0055E445 (57 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055E40C(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055E40C: ;
    eax = MEM32(ecx + 0x424);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055E426; /* je: equal / zero */

loc_0055E419: ;
    esi = eax;
    eax = MEM32(eax + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055E419; /* jne: not equal / not zero */

loc_0055E422: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055E431; /* jne: not equal / not zero */

loc_0055E426: ;
    eax = MEM32(eax + 0x24);
    MEM32(ecx + 0x424) = eax;
    goto loc_0055E437;

loc_0055E431: ;
    eax = MEM32(eax + 0x24);
    MEM32(esi + 0x24) = eax;

loc_0055E437: ;
    eax = ecx + 0x428;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(eax) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055E443; /* jne: not equal / not zero */

loc_0055E441: ;
    MEM32(eax) = esi;

loc_0055E443: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0055E445
 * Original: 0x0055E445 - 0x0055E474 (47 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055E445(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055E445: ;
    eax = MEM32(ecx + 0x28);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055E45C; /* je: equal / zero */

loc_0055E44F: ;
    esi = eax;
    eax = MEM32(eax + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055E44F; /* jne: not equal / not zero */

loc_0055E458: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055E464; /* jne: not equal / not zero */

loc_0055E45C: ;
    eax = MEM32(eax + 0x24);
    MEM32(ecx + 0x28) = eax;
    goto loc_0055E46A;

loc_0055E464: ;
    eax = MEM32(eax + 0x24);
    MEM32(esi + 0x24) = eax;

loc_0055E46A: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x2C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ecx + 0x2C) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055E472; /* jne: not equal / not zero */

loc_0055E46F: ;
    MEM32(ecx + 0x2C) = esi;

loc_0055E472: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0055E474
 * Original: 0x0055E474 - 0x0055E4EA (118 bytes, 46 insns)
 * Category: game_input
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055E474(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0055E474: ;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    edi = edx;
    _fa = (uint32_t)(MEM8(edi + 0x26)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi + 0x26), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055E4E7; /* je: equal / zero */

loc_0055E47E: ;
    eax = ZX8(MEM8(edi + 0x11));
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    if ((_fa == 0)) goto loc_0055E4A6; /* je: equal / zero */

loc_0055E489: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0055E498; /* je: equal / zero */

loc_0055E48D: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0055E4E5; /* jne: not equal / not zero */

loc_0055E490: ;
    ebx = edi + 0x28;
    ebp = edi + 0x2C;
    goto loc_0055E4B2;

loc_0055E498: ;
    ebx = ecx + 0x424;
    ebp = ecx + 0x428;
    goto loc_0055E4B2;

loc_0055E4A6: ;
    ebx = ecx + 0x41C;
    ebp = ecx + 0x420;

loc_0055E4B2: ;
    PUSH32(esp, esi);

loc_0055E4B3: ;
    esi = MEM32(ebx);
    _fa = (uint32_t)(MEM32(esi + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x10), edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055E4D1; /* jne: not equal / not zero */

loc_0055E4BA: ;
    eax = MEM32(esi + 0x24);
    MEM32(ebx) = eax;
    MEM32(esi + 4) = 0xC000000Fu;
    MEM8(edi + 0x26) = MEM8(edi + 0x26) - 1;
    _fa = (uint32_t)(MEM8(edi + 0x26)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x7Fu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, esi);
    PUSH32(esp, 0x0055E4CFu); RECOMP_ABI_CALL(0x0055BF5Au, sub_0055BF5A); /* call 0x0055BF5A */

loc_0055E4CF: ;
    goto loc_0055E4D8;

loc_0055E4D1: ;
    MEM32(esp + 0x10) = esi;
    ebx = esi + 0x24;

loc_0055E4D8: ;
    _fa = (uint32_t)(MEM32(ebp)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp), esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055E4B3; /* jne: not equal / not zero */

loc_0055E4DD: ;
    eax = MEM32(esp + 0x10);
    MEM32(ebp) = eax;
    POP32(esp, esi);

loc_0055E4E5: ;
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_0055E4E7: ;
    POP32(esp, edi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0055E4EA
 * Original: 0x0055E4EA - 0x0055E527 (61 bytes, 24 insns)
 * Category: game_input
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055E4EA(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055E4EA: ;
    PUSH32(esp, esi);
    esi = edx;
    MEM8(esi + 0x20) = MEM8(esi + 0x20) + 1;
    _fa = (uint32_t)(MEM8(esi + 0x20)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM8(esi + 0x10)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x10), 0x20 (8-bit) */
    PUSH32(esp, edi);
    edi = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_0055E524; /* jne: not equal / not zero */

loc_0055E4F9: ;
    MEM8(esi + 1) = MEM8(esi + 1) | 0x40;
    _fa = (uint32_t)(MEM8(esi + 1)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    PUSH32(esp, 0x0055E502u); RECOMP_ABI_CALL(0x0055FC10u, sub_0055FC10); /* call 0x0055FC10 */

loc_0055E502: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi + 0x1C) = eax;
    _fa = (uint32_t)(MEM32(edi + 0x438)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x438), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055E513; /* je: equal / zero */

loc_0055E50F: ;
    MEM8(esi + 0x10) = MEM8(esi + 0x10) | 0x40;
    _fa = (uint32_t)(MEM8(esi + 0x10)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */

loc_0055E513: ;
    ecx = MEM32(edi);
    PUSH32(esp, 4);
    POP32(esp, eax);
    MEM32(ecx + 0xC) = eax;
    ecx = MEM32(edi);
    MEM32(ecx + 0x10) = eax;
    MEM8(esi + 0x10) = MEM8(esi + 0x10) | 0x20;
    _fa = (uint32_t)(MEM8(esi + 0x10)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */

loc_0055E524: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0055E527
 * Original: 0x0055E527 - 0x0055E562 (59 bytes, 15 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055E527(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055E527: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + -100);
    _fb = (uint32_t)(0xFFFFFB40u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xFFFFFB40u;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = (uint32_t)((int32_t)eax * (int32_t)0x70);
    SET_LO8(ecx, MEM8(eax + 0x87C98C));
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x561204); PUSH32(esp, 0x0055E544u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0055E53Eu); } /* indirect call */
    }

loc_0055E544: ;
    ecx = MEM32(esi);
    MEM32(ecx + 0x14) = 0x80000033u;
    ecx = MEM32(esi);
    MEM32(ecx + 4) = 2;
    SET_LO8(ecx, LO8(eax));
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x5610E8); PUSH32(esp, 0x0055E55Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0055E558u); } /* indirect call */
    }

loc_0055E55E: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0055E562
 * Original: 0x0055E562 - 0x0055E619 (183 bytes, 61 insns)
 * Category: game_input
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055E562(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055E562: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    _fa = (uint32_t)(MEM8(esi + 0x22)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x22), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0055E577; /* je: equal / zero */

loc_0055E56D: ;
    eax = 0x40020000;
    goto loc_0055E615;

loc_0055E577: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x5610F0); PUSH32(esp, 0x0055E57Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0055E579u); } /* indirect call */
    }

loc_0055E57F: ;
    edi = MEM32(esi + 0x10);
    _fa = (uint32_t)(MEM8(edi + 0x10)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edi + 0x10), 0x10 (8-bit) */
    SET_LO8(ebx, LO8(eax));
    if (TEST_NZ(_fa, _fb)) goto loc_0055E604; /* jne: not equal / not zero */

loc_0055E58A: ;
    SET_LO16(eax, MEM16(esi + 0x22));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0055E5E4; /* je: equal / zero */

loc_0055E592: ;
    eax = ZX8(MEM8(edi + 0x11));
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_0055E5C1; /* je: equal / zero */

loc_0055E59B: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0055E5B4; /* je: equal / zero */

loc_0055E59F: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0055E5A9; /* je: equal / zero */

loc_0055E5A2: ;
    esi = 0x80000600u;
    goto loc_0055E609;

loc_0055E5A9: ;
    edx = esi;
    ecx = edi;
    PUSH32(esp, 0x0055E5B2u); RECOMP_ABI_CALL(0x0055E445u, sub_0055E445); /* call 0x0055E445 */

loc_0055E5B2: ;
    goto loc_0055E5CC;

loc_0055E5B4: ;
    ecx = MEM32(esp + 0x10);
    edx = esi;
    PUSH32(esp, 0x0055E5BFu); RECOMP_ABI_CALL(0x0055E40Cu, sub_0055E40C); /* call 0x0055E40C */

loc_0055E5BF: ;
    goto loc_0055E5CC;

loc_0055E5C1: ;
    ecx = MEM32(esp + 0x10);
    edx = esi;
    PUSH32(esp, 0x0055E5CCu); RECOMP_ABI_CALL(0x0055E3D3u, sub_0055E3D3); /* call 0x0055E3D3 */

loc_0055E5CC: ;
    MEM8(edi + 0x26) = MEM8(edi + 0x26) - 1;
    _fa = (uint32_t)(MEM8(edi + 0x26)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x7Fu); /* dec result/SF/OF; CF unchanged */
    MEM8(esi + 0x22) = MEM8(esi + 0x22) | 1;
    _fa = (uint32_t)(MEM8(esi + 0x22)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    PUSH32(esp, esi);
    MEM32(esi + 4) = 0xC000000Fu;
    PUSH32(esp, 0x0055E5E0u); RECOMP_ABI_CALL(0x0055BF5Au, sub_0055BF5A); /* call 0x0055BF5A */

loc_0055E5E0: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_0055E609;

loc_0055E5E4: ;
    ecx = MEM32(esp + 0x10);
    SET_LO16(eax, LO16(eax) | 1);
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* or result */
    MEM16(esi + 0x22) = LO16(eax);
    eax = ecx + 0x42C;
    edx = MEM32(eax);
    MEM32(esi + 0x24) = edx;
    edx = edi;
    MEM32(eax) = esi;
    PUSH32(esp, 0x0055E604u); RECOMP_ABI_CALL(0x0055E4EAu, sub_0055E4EA); /* call 0x0055E4EA */

loc_0055E604: ;
    esi = 0x40020000;

loc_0055E609: ;
    SET_LO8(ecx, LO8(ebx));
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x5610E8); PUSH32(esp, 0x0055E611u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0055E60Bu); } /* indirect call */
    }

loc_0055E611: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, ebx);

loc_0055E615: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0055E619
 * Original: 0x0055E619 - 0x0055E680 (103 bytes, 40 insns)
 * Category: game_input
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055E619(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0055E619: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = edx;
    esi = MEM32(edi + 0x10);
    ebp = ecx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x5610F0); PUSH32(esp, 0x0055E62Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0055E624u); } /* indirect call */
    }

loc_0055E62A: ;
    MEM8(esi + 0x10) = MEM8(esi + 0x10) | 0x10;
    _fa = (uint32_t)(MEM8(esi + 0x10)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    edx = esi;
    ecx = ebp;
    SET_LO8(ebx, LO8(eax));
    PUSH32(esp, 0x0055E639u); RECOMP_ABI_CALL(0x0055E474u, sub_0055E474); /* call 0x0055E474 */

loc_0055E639: ;
    SET_LO8(eax, MEM8(esi + 0x11));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055E64F; /* je: equal / zero */

loc_0055E640: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 2 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055E64F; /* je: equal / zero */

loc_0055E644: ;
    edx = esi;
    ecx = ebp;
    PUSH32(esp, 0x0055E64Du); RECOMP_ABI_CALL(0x0055FA01u, sub_0055FA01); /* call 0x0055FA01 */

loc_0055E64D: ;
    goto loc_0055E658;

loc_0055E64F: ;
    edx = esi;
    ecx = ebp;
    PUSH32(esp, 0x0055E658u); RECOMP_ABI_CALL(0x0055F748u, sub_0055F748); /* call 0x0055F748 */

loc_0055E658: ;
    edx = esi;
    ecx = ebp;
    PUSH32(esp, 0x0055E661u); RECOMP_ABI_CALL(0x0055E4EAu, sub_0055E4EA); /* call 0x0055E4EA */

loc_0055E661: ;
    eax = ebp + 0x434;
    ecx = MEM32(eax);
    MEM32(edi + 0x14) = ecx;
    SET_LO8(ecx, LO8(ebx));
    MEM32(eax) = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x5610E8); PUSH32(esp, 0x0055E676u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0055E670u); } /* indirect call */
    }

loc_0055E676: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0x40000000;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0055E680
 * Original: 0x0055E680 - 0x0055E6D3 (83 bytes, 33 insns)
 * Category: game_input
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055E680(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0055E680: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = edx;
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x10);
    ebp = ecx;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x5610F0); PUSH32(esp, 0x0055E694u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0055E68Eu); } /* indirect call */
    }

loc_0055E694: ;
    edx = edi;
    ecx = ebp;
    MEM8(esp + 0x13) = LO8(eax);
    PUSH32(esp, 0x0055E6A1u); RECOMP_ABI_CALL(0x0055E474u, sub_0055E474); /* call 0x0055E474 */

loc_0055E6A1: ;
    _fa = (uint32_t)(MEM8(edi + 0x27)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi + 0x27), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055E6C1; /* je: equal / zero */

loc_0055E6A6: ;
    eax = ebp + 0x430;
    ecx = MEM32(eax);
    MEM32(esi + 0x14) = ecx;
    edx = edi;
    ecx = ebp;
    MEM32(eax) = esi;
    PUSH32(esp, 0x0055E6BCu); RECOMP_ABI_CALL(0x0055E4EAu, sub_0055E4EA); /* call 0x0055E4EA */

loc_0055E6BC: ;
    ebx = 0x40000000;

loc_0055E6C1: ;
    SET_LO8(ecx, MEM8(esp + 0x13));
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x5610E8); PUSH32(esp, 0x0055E6CBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0055E6C5u); } /* indirect call */
    }

loc_0055E6CB: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = ebx;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0055E6D3
 * Original: 0x0055E6D3 - 0x0055E7EB (280 bytes, 98 insns)
 * Category: game_input
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0055E6D3(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055E6D3: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0xC);
    eax = ZX8(MEM8(edi + 1));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xC (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0055E76B; /* jg: greater (signed >) */

loc_0055E6E8: ;
    if (CMP_EQ(_fa, _fb)) goto loc_0055E75F; /* je: equal / zero */

loc_0055E6EA: ;
    PUSH32(esp, 2);
    POP32(esp, ecx);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_0055E753; /* je: equal / zero */

loc_0055E6F1: ;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_0055E747; /* je: equal / zero */

loc_0055E6F5: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0055E738; /* je: equal / zero */

loc_0055E6F8: ;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_0055E726; /* je: equal / zero */

loc_0055E6FC: ;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_0055E717; /* je: equal / zero */

loc_0055E700: ;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa != 0)) goto loc_0055E7B9; /* jne: not equal / not zero */

loc_0055E708: ;
    ecx = MEM32(ebp + 8);
    edx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055E712u); RECOMP_ABI_CALL(0x005605F0u, sub_005605F0); /* call 0x005605F0 */

loc_0055E712: ;
    goto loc_0055E7CA;

loc_0055E717: ;
    ecx = MEM32(ebp + 8);
    edx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055E721u); RECOMP_ABI_CALL(0x00560376u, sub_00560376); /* call 0x00560376 */

loc_0055E721: ;
    goto loc_0055E7CA;

loc_0055E726: ;
    ecx = MEM32(ebp + 8);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055E72Eu); RECOMP_ABI_CALL(0x0055FC10u, sub_0055FC10); /* call 0x0055FC10 */

loc_0055E72E: ;
    MEM32(edi + 0x14) = eax;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_0055E7CC;

loc_0055E738: ;
    ecx = MEM32(ebp + 8);
    edx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055E742u); RECOMP_ABI_CALL(0x0055E3A5u, sub_0055E3A5); /* call 0x0055E3A5 */

loc_0055E742: ;
    goto loc_0055E7CA;

loc_0055E747: ;
    ecx = MEM32(ebp + 8);
    edx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055E751u); RECOMP_ABI_CALL(0x0055E384u, sub_0055E384); /* call 0x0055E384 */

loc_0055E751: ;
    goto loc_0055E7CA;

loc_0055E753: ;
    ecx = MEM32(ebp + 8);
    edx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055E75Du); RECOMP_ABI_CALL(0x0055E210u, sub_0055E210); /* call 0x0055E210 */

loc_0055E75D: ;
    goto loc_0055E7CA;

loc_0055E75F: ;
    ecx = MEM32(ebp + 8);
    edx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055E769u); RECOMP_ABI_CALL(0x00560757u, sub_00560757); /* call 0x00560757 */

loc_0055E769: ;
    goto loc_0055E7CA;

loc_0055E76B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xD) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xD (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055E7C0; /* je: equal / zero */

loc_0055E770: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3F (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0055E7B9; /* jle: less or equal (signed <=) */

loc_0055E775: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x41) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x41 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0055E7AD; /* jle: less or equal (signed <=) */

loc_0055E77A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x43) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x43 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055E7A1; /* je: equal / zero */

loc_0055E77F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x46) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x46 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055E795; /* je: equal / zero */

loc_0055E784: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x4A) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x4A (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055E7B9; /* jne: not equal / not zero */

loc_0055E789: ;
    ecx = MEM32(ebp + 8);
    edx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055E793u); RECOMP_ABI_CALL(0x00560523u, sub_00560523); /* call 0x00560523 */

loc_0055E793: ;
    goto loc_0055E7CA;

loc_0055E795: ;
    ecx = MEM32(ebp + 8);
    edx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055E79Fu); RECOMP_ABI_CALL(0x0055E680u, sub_0055E680); /* call 0x0055E680 */

loc_0055E79F: ;
    goto loc_0055E7CA;

loc_0055E7A1: ;
    ecx = MEM32(ebp + 8);
    edx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055E7ABu); RECOMP_ABI_CALL(0x0055E619u, sub_0055E619); /* call 0x0055E619 */

loc_0055E7AB: ;
    goto loc_0055E7CA;

loc_0055E7AD: ;
    ecx = MEM32(ebp + 8);
    edx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055E7B7u); RECOMP_ABI_CALL(0x00560F20u, sub_00560F20); /* call 0x00560F20 */

loc_0055E7B7: ;
    goto loc_0055E7CA;

loc_0055E7B9: ;
    esi = 0x80000200u;
    goto loc_0055E7CC;

loc_0055E7C0: ;
    ecx = MEM32(ebp + 8);
    edx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055E7CAu); RECOMP_ABI_CALL(0x00560876u, sub_00560876); /* call 0x00560876 */

loc_0055E7CA: ;
    esi = eax;

loc_0055E7CC: ;
    eax = esi;
    eax = eax & 0xC0000000u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x40000000 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055E7E3; /* je: equal / zero */

loc_0055E7DA: ;
    PUSH32(esp, edi);
    MEM32(edi + 4) = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055E7E3u); RECOMP_ABI_CALL(0x0055BF5Au, sub_0055BF5A); /* call 0x0055BF5A */

loc_0055E7E3: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0055E7EB
 * Original: 0x0055E7EB - 0x0055E806 (27 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055E7EB(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055E7EB: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x762D30);
    ecx = ecx | 0xFFFFFFFFu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, ecx);
    eax = 0xFD050F80u;
    PUSH32(esp, eax);
    PUSH32(esp, 0x762D08);
    { uint32_t _icall_target = MEM32(0x561140); PUSH32(esp, 0x0055E805u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0055E7FFu); } /* indirect call */
    }

loc_0055E805: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0055E806
 * Original: 0x0055E806 - 0x0055E817 (17 bytes, 4 insns)
 * Category: game_input
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055E806(void)
{

loc_0055E806: ;
    ecx = MEM32(esp + 8);
    PUSH32(esp, 0x762CD0);
    PUSH32(esp, 0x0055E814u); RECOMP_ABI_CALL(0x0055B857u, sub_0055B857); /* call 0x0055B857 */

loc_0055E814: ;
    esp += 20; return; /* ret 16 */

}

/**
 * sub_0055E817
 * Original: 0x0055E817 - 0x0055E83A (35 bytes, 12 insns)
 * Category: game_input
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055E817(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055E817: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0055E823u); RECOMP_ABI_CALL(0x0055B86Eu, sub_0055B86E); /* call 0x0055B86E */

loc_0055E823: ;
    ecx = MEM32(esi);
    PUSH32(esp, 0x0055E82Au); RECOMP_ABI_CALL(0x0055AD40u, sub_0055AD40); /* call 0x0055AD40 */

loc_0055E82A: ;
    MEM32(esi) = MEM32(esi) & 0;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM8(esi + 4) = MEM8(esi + 4) & 0xFE;
    _fa = (uint32_t)(MEM8(esi + 4)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    MEM16(0x762CB2) = MEM16(0x762CB2) - 1;
    _fa = (uint32_t)(MEM16(0x762CB2)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x7FFFu); /* dec result/SF/OF; CF unchanged */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0055E83A
 * Original: 0x0055E83A - 0x0055E8A4 (106 bytes, 42 insns)
 * Category: game_input
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055E83A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0055E83A: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM16(0x762CB0)) & 0xFFFFu; _fb = (uint32_t)(LO16(ebx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(0x762CB0), LO16(ebx) (16-bit) */
    PUSH32(esp, edi);
    MEM32(esp + 0xC) = edx;
    edi = ecx;
    if (CMP_BE(_fa, _fb)) goto loc_0055E89D; /* jbe: below or equal (unsigned <=) */

loc_0055E851: ;
    PUSH32(esp, esi);

loc_0055E852: ;
    eax = MEM32(0x762CB4);
    esi = ZX8(LO8(ebx));
    esi = (uint32_t)((int32_t)esi * (int32_t)0x16);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM8(eax + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 4), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0055E88D; /* je: equal / zero */

loc_0055E865: ;
    ecx = MEM32(eax);
    PUSH32(esp, 0x0055E86Cu); RECOMP_ABI_CALL(0x0055B9DFu, sub_0055B9DF); /* call 0x0055B9DF */

loc_0055E86C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esp + 0x10) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055E88D; /* jne: not equal / not zero */

loc_0055E872: ;
    eax = MEM32(0x762CB4);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM32(eax + 0xE)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0xE), edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055E88D; /* jne: not equal / not zero */

loc_0055E87E: ;
    SET_LO8(ecx, MEM8(eax + 4));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 8 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0055E88D; /* je: equal / zero */

loc_0055E886: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 2 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0055E88D; /* jne: not equal / not zero */

loc_0055E88B: ;
    ebp = eax;

loc_0055E88D: ;
    SET_LO8(ebx, LO8(ebx) + 1);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    SET_LO16(eax, ZX8(LO8(ebx)));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(MEM16(0x762CB0)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), MEM16(0x762CB0) (16-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0055E852; /* jb: below (unsigned <) */

loc_0055E89C: ;
    POP32(esp, esi);

loc_0055E89D: ;
    POP32(esp, edi);
    eax = ebp;
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0055E8A4
 * Original: 0x0055E8A4 - 0x0055E94F (171 bytes, 62 insns)
 * Category: game_input
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0055E8A4(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055E8A4: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi + 0x5A) = MEM32(esi + 0x5A) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x5A)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, edi);
    edi = MEM32(esi);
    ebx = esi + 0x52;
    MEM8(ebx) = 0x20;
    MEM8(esi + 0x53) = 0x82;
    ecx = MEM32(edi);
    PUSH32(esp, ebx);
    MEM32(ebp + -4) = edx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055E8C8u); RECOMP_ABI_CALL(0x0055BC1Fu, sub_0055BC1F); /* call 0x0055BC1F */

loc_0055E8C8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0055E94A; /* jl: less (signed <) */

loc_0055E8CC: ;
    MEM8(esi + 0xA2) = MEM8(esi + 0xA2) | 2;
    _fa = (uint32_t)(MEM8(esi + 0xA2)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    MEM32(esi + 0x5A) = MEM32(esi + 0x5A) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x5A)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM8(ebx) = 0x20;
    MEM8(esi + 0x53) = 2;
    SET_LO8(eax, MEM8(edi + 8));
    MEM8(esi + 0x67) = LO8(eax);
    eax = MEM32(ebp + -4);
    MEM8(esi + 0x68) = 3;
    SET_LO8(eax, MEM8(eax + 1));
    MEM8(esi + 0x69) = LO8(eax);
    MEM16(esi + 0x6E) = 0x20;
    ecx = MEM32(edi);
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055E8FFu); RECOMP_ABI_CALL(0x0055BC1Fu, sub_0055BC1F); /* call 0x0055BC1F */

loc_0055E8FF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0055E94A; /* jl: less (signed <) */

loc_0055E903: ;
    ecx = MEM32(esi + 0x62);
    MEM32(esi + 0xC) = ecx;
    ecx = MEM32(ebp + -4);
    _fa = (uint32_t)(MEM8(ecx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ecx), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0055E94A; /* je: equal / zero */

loc_0055E911: ;
    _fa = (uint32_t)(MEM8(edi + 9)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi + 9), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055E94A; /* je: equal / zero */

loc_0055E917: ;
    MEM32(esi + 0x5A) = MEM32(esi + 0x5A) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x5A)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM8(ebx) = 0x20;
    MEM8(esi + 0x53) = 2;
    SET_LO8(eax, MEM8(edi + 9));
    MEM8(esi + 0x67) = LO8(eax);
    MEM8(esi + 0x68) = 3;
    SET_LO8(eax, MEM8(ecx + 2));
    MEM8(esi + 0x69) = LO8(eax);
    MEM16(esi + 0x6E) = 0x20;
    ecx = MEM32(edi);
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055E940u); RECOMP_ABI_CALL(0x0055BC1Fu, sub_0055BC1F); /* call 0x0055BC1F */

loc_0055E940: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0055E94A; /* jl: less (signed <) */

loc_0055E944: ;
    ecx = MEM32(esi + 0x62);
    MEM32(esi + 0x10) = ecx;

loc_0055E94A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_0055E94F
 * Original: 0x0055E94F - 0x0055EA00 (177 bytes, 54 insns)
 * Category: game_input
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055E94F(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055E94F: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    _fa = (uint32_t)(MEM8(esi + 0xA2)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0xA2), 2 (8-bit) */
    eax = MEM32(esi);
    ecx = MEM32(eax);
    PUSH32(esp, edi);
    if (TEST_Z(_fa, _fb)) goto loc_0055E980; /* je: equal / zero */

loc_0055E962: ;
    eax = MEM32(esp + 0xC);
    MEM8(eax) = 0x1C;
    MEM8(eax + 1) = 0xC3;
    MEM32(eax + 8) = 0x55E94F;
    MEM32(eax + 0xC) = esi;
    MEM8(esi + 0xA2) = MEM8(esi + 0xA2) & 0xFD;
    _fa = (uint32_t)(MEM8(esi + 0xA2)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    goto loc_0055E9CA;

loc_0055E980: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0xC), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055E9A7; /* je: equal / zero */

loc_0055E987: ;
    eax = MEM32(esp + 0xC);
    MEM8(eax) = 0x1C;
    MEM8(eax + 1) = 0x43;
    MEM32(eax + 8) = 0x55E94F;
    MEM32(eax + 0xC) = esi;
    edx = MEM32(esi + 0xC);
    MEM32(eax + 0x10) = edx;
    MEM32(esi + 0xC) = edi;
    goto loc_0055E9CA;

loc_0055E9A7: ;
    _fa = (uint32_t)(MEM32(esi + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x10), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055E9D2; /* je: equal / zero */

loc_0055E9AC: ;
    eax = MEM32(esp + 0xC);
    MEM8(eax) = 0x1C;
    MEM8(eax + 1) = 0x43;
    MEM32(eax + 8) = 0x55E94F;
    MEM32(eax + 0xC) = esi;
    edx = MEM32(esi + 0x10);
    MEM32(eax + 0x10) = edx;
    MEM32(esi + 0x10) = edi;

loc_0055E9CA: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0055E9D0u); RECOMP_ABI_CALL(0x0055BC1Fu, sub_0055BC1F); /* call 0x0055BC1F */

loc_0055E9D0: ;
    goto loc_0055E9FB;

loc_0055E9D2: ;
    MEM32(eax + 0x12) = edi;
    MEM32(esi) = edi;
    _fa = (uint32_t)(MEM8(eax + 4)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 4), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0055E9E4; /* je: equal / zero */

loc_0055E9DD: ;
    ecx = eax;
    PUSH32(esp, 0x0055E9E4u); RECOMP_ABI_CALL(0x0055E817u, sub_0055E817); /* call 0x0055E817 */

loc_0055E9E4: ;
    _fa = (uint32_t)(MEM8(esi + 0xA2)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0xA2), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0055E9FB; /* je: equal / zero */

loc_0055E9ED: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esi + 0x9E));
    { uint32_t _icall_target = MEM32(0x56114C); PUSH32(esp, 0x0055E9FBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0055E9F5u); } /* indirect call */
    }

loc_0055E9FB: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0055EA00
 * Original: 0x0055EA00 - 0x0055EABC (188 bytes, 62 insns)
 * Category: game_input
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055EA00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055EA00: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    _fa = (uint32_t)(MEM8(ebx + 0xA2)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebx + 0xA2), 1 (8-bit) */
    PUSH32(esp, edi);
    edi = MEM32(ebx);
    if (TEST_NZ(_fa, _fb)) goto loc_0055EA58; /* jne: not equal / not zero */

loc_0055EA11: ;
    SET_LO8(eax, MEM8(edi + 4));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 2 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0055EA58; /* jne: not equal / not zero */

loc_0055EA18: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 4), ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0055EA5D; /* jl: less (signed <) */

loc_0055EA24: ;
    SET_LO8(eax, LO8(eax) & 0xF);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    MEM8(edi + 4) = LO8(eax);
    eax = MEM32(edi + 0xE);
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x0055EA31u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0055EA2Eu); } /* indirect call */
    }

loc_0055EA31: ;
    MEM8(ebx + 0xA2) = MEM8(ebx + 0xA2) | 0x10;
    _fa = (uint32_t)(MEM8(ebx + 0xA2)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    MEM32(ebx + 8) = MEM32(ebx + 8) + 1;
    _fa = (uint32_t)(MEM32(ebx + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebx + 4) = MEM32(ebx + 4) & 0;
    _fa = (uint32_t)(MEM32(ebx + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = ZX8(MEM8(edi + 0xC));
    MEM32(esi + 0x14) = eax;
    _fa = (uint32_t)(MEM8(ebx + 0xA2)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebx + 0xA2), 8 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0055EA57; /* je: equal / zero */

loc_0055EA4F: ;
    ecx = MEM32(edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0055EA57u); RECOMP_ABI_CALL(0x0055BC1Fu, sub_0055BC1F); /* call 0x0055BC1F */

loc_0055EA57: ;
    POP32(esp, esi);

loc_0055EA58: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_0055EA5D: ;
    MEM32(esi + 0x10) = ecx;
    MEM32(esi + 0x18) = ecx;
    MEM32(esi + 0x14) = ecx;
    MEM16(esi + 0x2A) = LO16(ecx);
    MEM8(esi) = 0x30;
    MEM8(esi + 1) = 0x40;
    MEM32(esi + 8) = 0x55EABC;
    MEM32(esi + 0xC) = ebx;
    MEM8(esi + 0x1C) = 0;
    MEM8(esi + 0x1D) = 0;
    MEM8(esi + 0x1E) = 0;
    MEM8(esi + 0x28) = 2;
    MEM8(esi + 0x29) = 1;
    SET_LO16(eax, ZX8(MEM8(edi + 8)));
    MEM16(esi + 0x2C) = LO16(eax);
    MEM16(esi + 0x2E) = LO16(ecx);
    SET_LO8(ecx, MEM8(edi + 4));
    SET_LO8(eax, LO8(ecx));
    SET_LO8(eax, LO8(eax) & 0xF0);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _fb = (uint32_t)(0x10) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(eax, LO8(eax) + 0x10);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    SET_LO8(ecx, LO8(ecx) & 0xF);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    SET_LO8(eax, LO8(eax) ^ LO8(ecx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    MEM8(edi + 4) = LO8(eax);
    SET_LO8(eax, LO8(eax) & 0xF0);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x40 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055EA4F; /* jne: not equal / not zero */

loc_0055EAB3: ;
    ecx = MEM32(edi);
    PUSH32(esp, 0x0055EABAu); RECOMP_ABI_CALL(0x0055AF2Eu, sub_0055AF2E); /* call 0x0055AF2E */

loc_0055EABA: ;
    goto loc_0055EA57;

}

/**
 * sub_0055EABC
 * Original: 0x0055EABC - 0x0055EB46 (138 bytes, 44 insns)
 * Category: game_input
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055EABC(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055EABC: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    ebx = MEM32(esi);
    _fa = (uint32_t)(MEM8(ebx + 4)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebx + 4), 2 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0055EB41; /* jne: not equal / not zero */

loc_0055EACA: ;
    _fa = (uint32_t)(MEM8(esi + 0xA2)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0xA2), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0055EB41; /* jne: not equal / not zero */

loc_0055EAD3: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    _fa = (uint32_t)(MEM32(edi + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 4), 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0055EB39; /* jl: less (signed <) */

loc_0055EADE: ;
    MEM32(edi + 8) = MEM32(edi + 8) & 0;
    _fa = (uint32_t)(MEM32(edi + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM8(edi) = 0x18;
    MEM8(edi + 1) = 5;
    eax = MEM32(esi + 0xC);
    MEM32(edi + 0x10) = eax;
    MEM32(edi + 0x14) = 4;
    ecx = MEM32(ebx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0055EAFEu); RECOMP_ABI_CALL(0x0055BC1Fu, sub_0055BC1F); /* call 0x0055BC1F */

loc_0055EAFE: ;
    eax = MEM32(esi + 0xC);
    MEM32(esi + 0x62) = eax;
    eax = esi + 0x32;
    MEM8(esi + 0x52) = 0x28;
    MEM8(esi + 0x53) = 0x41;
    MEM32(esi + 0x5A) = 0x55EA00;
    MEM32(esi + 0x5E) = esi;
    MEM32(esi + 0x6A) = eax;
    eax = ZX8(MEM8(ebx + 0xC));
    MEM32(esi + 0x66) = eax;
    MEM8(esi + 0x6E) = 2;
    MEM8(esi + 0x6F) = 1;
    MEM8(esi + 0x70) = 0;
    ecx = MEM32(ebx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0055EB37u); RECOMP_ABI_CALL(0x0055BC1Fu, sub_0055BC1F); /* call 0x0055BC1F */

loc_0055EB37: ;
    goto loc_0055EB40;

loc_0055EB39: ;
    ecx = MEM32(ebx);
    PUSH32(esp, 0x0055EB40u); RECOMP_ABI_CALL(0x0055AF2Eu, sub_0055AF2E); /* call 0x0055AF2E */

loc_0055EB40: ;
    POP32(esp, edi);

loc_0055EB41: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0055EB46
 * Original: 0x0055EB46 - 0x0055EB98 (82 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055EB46(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0055EB46: ;
    eax = ecx;
    ecx = MEM32(eax + 0x66);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 2 (32-bit) */
    edx = eax + 0x14;
    if (CMP_B(_fa, _fb)) goto loc_0055EB96; /* jb: below (unsigned <) */

loc_0055EB56: ;
    PUSH32(esp, esi);
    _fb = (uint32_t)(0xFFFFFFFEu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xFFFFFFFEu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    esi = eax + 0x34;
    eax = ecx;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edi = edx;
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
    PUSH32(esp, 8);
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
    POP32(esp, ecx);
    POP32(esp, edi);
    eax = edx + 2;
    POP32(esp, esi);

loc_0055EB76: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0x20 (8-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0055EB80; /* jae: above or equal (unsigned >=) */

loc_0055EB7B: ;
    MEM8(eax) = 0;
    goto loc_0055EB83;

loc_0055EB80: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0055EB83: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0055EB76; /* jne: not equal / not zero */

loc_0055EB87: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055EB90; /* jne: not equal / not zero */

loc_0055EB8B: ;
    _fa = (uint32_t)(MEM8(edx)) & 0xFFu; _fb = (uint32_t)(0x3F) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edx), 0x3F (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0055EB96; /* je: equal / zero */

loc_0055EB90: ;
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_00432F07(); return; /* tail jmp 0x00432F07 */

loc_0055EB96: ;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0055EB98
 * Original: 0x0055EB98 - 0x0055EBBC (36 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055EB98(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0055EB98: ;
    eax = ecx;
    ecx = MEM32(eax + 0x66);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, esi);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, edi);
    esi = eax + 0x34;
    edi = eax + 0x14;
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
    POP32(esp, edi);
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00432F07(); return; /* tail jmp 0x00432F07 */

}

/**
 * sub_0055EBBC
 * Original: 0x0055EBBC - 0x0055EBE9 (45 bytes, 20 insns)
 * Category: game_input
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055EBBC(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0055EBBC: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ecx + 4));
    esi = edx;
    edi = MEM32(esi + 0xC);
    PUSH32(esp, 0x0055EBCBu); RECOMP_ABI_CALL(0x0055B889u, sub_0055B889); /* call 0x0055B889 */

loc_0055EBCB: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    MEM32(esi) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0055EBE6; /* je: equal / zero */

loc_0055EBD1: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x56114C); PUSH32(esp, 0x0055EBDCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0055EBD6u); } /* indirect call */
    }

loc_0055EBDC: ;
    ecx = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(0x561044)); return; /* indirect tail jmp */

loc_0055EBE6: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0055EBE9
 * Original: 0x0055EBE9 - 0x0055EC4F (102 bytes, 31 insns)
 * Category: game_input
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055EBE9(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055EBE9: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    eax = MEM32(edi + 8);
    _fa = (uint32_t)(MEM8(eax + 0xA2)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0xA2), 1 (8-bit) */
    ecx = MEM32(eax);
    if (TEST_NZ(_fa, _fb)) goto loc_0055EC36; /* jne: not equal / not zero */

loc_0055EBFD: ;
    _fa = (uint32_t)(MEM8(ecx + 4)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ecx + 4), 2 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0055EC36; /* jne: not equal / not zero */

loc_0055EC03: ;
    esi = MEM32(esp + 0xC);
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 4), 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0055EC2D; /* jl: less (signed <) */

loc_0055EC0D: ;
    MEM32(esi + 8) = MEM32(esi + 8) & 0;
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM8(esi) = 0x18;
    MEM8(esi + 1) = 5;
    eax = MEM32(eax + 0x10);
    MEM32(esi + 0x10) = eax;
    MEM32(esi + 0x14) = 4;
    ecx = MEM32(ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0055EC2Du); RECOMP_ABI_CALL(0x0055BC1Fu, sub_0055BC1F); /* call 0x0055BC1F */

loc_0055EC2D: ;
    MEM32(esi + 4) = 0xC0000004u;
    goto loc_0055EC41;

loc_0055EC36: ;
    esi = MEM32(esp + 0xC);
    MEM32(esi + 4) = 0x80000700u;

loc_0055EC41: ;
    edx = edi;
    ecx = esi;
    PUSH32(esp, 0x0055EC4Au); RECOMP_ABI_CALL(0x0055EBBCu, sub_0055EBBC); /* call 0x0055EBBC */

loc_0055EC4A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0055EC4F
 * Original: 0x0055EC4F - 0x0055EC9C (77 bytes, 35 insns)
 * Category: game_input
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0055EC4F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055EC4F: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(ebp + -8) = MEM32(ebp + -8) | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(0x561150);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    eax = ebp + -12;
    PUSH32(esp, eax);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + 8));
    ebx = edx;
    MEM32(ebp + -4) = ecx;
    MEM32(ebp + -12) = 0xFFF85EE0u;
    { uint32_t _icall_target = esi; PUSH32(esp, 0x0055EC7Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0055EC7Au); } /* indirect call */
    }

loc_0055EC7C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x102) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x102 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055EC95; /* jne: not equal / not zero */

loc_0055EC83: ;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055EC8Cu); RECOMP_ABI_CALL(0x0055B857u, sub_0055B857); /* call 0x0055B857 */

loc_0055EC8C: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + 8));
    { uint32_t _icall_target = esi; PUSH32(esp, 0x0055EC95u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0055EC93u); } /* indirect call */
    }

loc_0055EC95: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0055EC9C
 * Original: 0x0055EC9C - 0x0055ED26 (138 bytes, 47 insns)
 * Category: game_input
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055EC9C(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055EC9C: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x762D08);
    { uint32_t _icall_target = MEM32(0x5611CC); PUSH32(esp, 0x0055ECAAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0055ECA4u); } /* indirect call */
    }

loc_0055ECAA: ;
    esi = MEM32(esp + 0x14);
    edi = esi + 0xA;
    edx = edi;
    SET_LO8(ecx, 2);
    PUSH32(esp, 0x0055ECBAu); RECOMP_ABI_CALL(0x0055BE9Eu, sub_0055BE9E); /* call 0x0055BE9E */

loc_0055ECBA: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055ECFB; /* je: equal / zero */

loc_0055ECC0: ;
    ecx = MEM32(esi);
    PUSH32(esp, 0x0055ECC7u); RECOMP_ABI_CALL(0x0055B9DFu, sub_0055B9DF); /* call 0x0055B9DF */

loc_0055ECC7: ;
    edx = eax;
    ecx = ebx;
    PUSH32(esp, 0x0055ECD0u); RECOMP_ABI_CALL(0x0055E83Au, sub_0055E83A); /* call 0x0055E83A */

loc_0055ECD0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055ECFB; /* jne: not equal / not zero */

loc_0055ECD4: ;
    ecx = MEM32(esi);
    MEM8(esi + 0xB) = LO8(eax);
    SET_LO8(eax, MEM8(edi));
    MEM32(esi + 0xE) = ebx;
    MEM8(esi + 0xC) = 8;
    MEM8(esi + 0xD) = 1;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0055ECECu); RECOMP_ABI_CALL(0x0055B87Fu, sub_0055B87F); /* call 0x0055B87F */

loc_0055ECEC: ;
    ecx = MEM32(esi);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0055ECF5u); RECOMP_ABI_CALL(0x0055B10Cu, sub_0055B10C); /* call 0x0055B10C */

loc_0055ECF5: ;
    MEM8(esi + 4) = MEM8(esi + 4) | 8;
    _fa = (uint32_t)(MEM8(esi + 4)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    goto loc_0055ED20;

loc_0055ECFB: ;
    edi = MEM32(esi);
    MEM32(esi) = MEM32(esi) & 0;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM8(esi + 4) = MEM8(esi + 4) & 0xFE;
    _fa = (uint32_t)(MEM8(esi + 4)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    MEM16(0x762CB2) = MEM16(0x762CB2) - 1;
    _fa = (uint32_t)(MEM16(0x762CB2)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x7FFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x0055ED14u); RECOMP_ABI_CALL(0x0055B86Eu, sub_0055B86E); /* call 0x0055B86E */

loc_0055ED14: ;
    PUSH32(esp, 0x80000400u);
    ecx = edi;
    PUSH32(esp, 0x0055ED20u); RECOMP_ABI_CALL(0x0055B10Cu, sub_0055B10C); /* call 0x0055B10C */

loc_0055ED20: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0055ED26
 * Original: 0x0055ED26 - 0x0055EDC3 (157 bytes, 58 insns)
 * Category: game_input
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055ED26(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0055ED26: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x762D08);
    { uint32_t _icall_target = MEM32(0x5611CC); PUSH32(esp, 0x0055ED35u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0055ED2Fu); } /* indirect call */
    }

loc_0055ED35: ;
    esi = MEM32(esp + 0x18);
    ebp = esi + 0xA;
    edx = ebp;
    SET_LO8(ecx, 4);
    PUSH32(esp, 0x0055ED45u); RECOMP_ABI_CALL(0x0055BE9Eu, sub_0055BE9E); /* call 0x0055BE9E */

loc_0055ED45: ;
    edi = eax;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055ED99; /* je: equal / zero */

loc_0055ED4D: ;
    ecx = MEM32(esi);
    PUSH32(esp, 0x0055ED54u); RECOMP_ABI_CALL(0x0055B9DFu, sub_0055B9DF); /* call 0x0055B9DF */

loc_0055ED54: ;
    edx = eax;
    ecx = edi;
    PUSH32(esp, 0x0055ED5Du); RECOMP_ABI_CALL(0x0055E83Au, sub_0055E83A); /* call 0x0055E83A */

loc_0055ED5D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055ED99; /* jne: not equal / not zero */

loc_0055ED61: ;
    SET_LO8(ecx, MEM8(esi + 6));
    MEM32(esi + 0xE) = edi;
    MEM8(esi + 0xB) = LO8(ebx);
    eax = MEM32(edi + 8);
    SET_LO8(eax, MEM8(eax));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), LO8(eax) (8-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0055ED78; /* jae: above or equal (unsigned >=) */

loc_0055ED73: ;
    MEM8(esi + 0xC) = LO8(ecx);
    goto loc_0055ED7B;

loc_0055ED78: ;
    MEM8(esi + 0xC) = LO8(eax);

loc_0055ED7B: ;
    ecx = MEM32(esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(eax, MEM8(ebp));
    MEM8(esi + 0xD) = LO8(ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0055ED8Bu); RECOMP_ABI_CALL(0x0055B87Fu, sub_0055B87F); /* call 0x0055B87F */

loc_0055ED8B: ;
    ecx = MEM32(esi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0055ED93u); RECOMP_ABI_CALL(0x0055B10Cu, sub_0055B10C); /* call 0x0055B10C */

loc_0055ED93: ;
    MEM8(esi + 4) = MEM8(esi + 4) | 8;
    _fa = (uint32_t)(MEM8(esi + 4)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    goto loc_0055EDBC;

loc_0055ED99: ;
    edi = MEM32(esi);
    MEM8(esi + 4) = MEM8(esi + 4) & 0xFE;
    _fa = (uint32_t)(MEM8(esi + 4)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    MEM32(esi) = ebx;
    MEM16(0x762CB2) = MEM16(0x762CB2) - 1;
    _fa = (uint32_t)(MEM16(0x762CB2)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x7FFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, ebx);
    ecx = edi;
    PUSH32(esp, 0x0055EDB0u); RECOMP_ABI_CALL(0x0055B86Eu, sub_0055B86E); /* call 0x0055B86E */

loc_0055EDB0: ;
    PUSH32(esp, 0x80000400u);
    ecx = edi;
    PUSH32(esp, 0x0055EDBCu); RECOMP_ABI_CALL(0x0055B10Cu, sub_0055B10C); /* call 0x0055B10C */

loc_0055EDBC: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0055EDC3
 * Original: 0x0055EDC3 - 0x0055EDE1 (30 bytes, 11 insns)
 * Category: game_input
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055EDC3(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055EDC3: ;
    edx = ecx + 0xA2;
    SET_LO8(eax, MEM8(edx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 4 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0055EDE0; /* jne: not equal / not zero */

loc_0055EDCF: ;
    PUSH32(esp, ecx);
    _fb = (uint32_t)(0x82) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x82;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO8(eax, LO8(eax) | 4);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    PUSH32(esp, ecx);
    MEM8(edx) = LO8(eax);
    PUSH32(esp, 0x0055EDE0u); RECOMP_ABI_CALL(0x0055E94Fu, sub_0055E94F); /* call 0x0055E94F */

loc_0055EDE0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0055EDE1
 * Original: 0x0055EDE1 - 0x0055EE65 (132 bytes, 38 insns)
 * Category: game_input
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055EDE1(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055EDE1: ;
    edx = MEM32(esp + 8);
    ecx = MEM32(edx + 8);
    eax = MEM32(ecx);
    _fa = (uint32_t)(MEM8(ecx + 0xA2)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ecx + 0xA2), 1 (8-bit) */
    ecx = MEM32(esp + 4);
    if (TEST_NZ(_fa, _fb)) goto loc_0055EDFD; /* jne: not equal / not zero */

loc_0055EDF7: ;
    _fa = (uint32_t)(MEM8(eax + 4)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 4), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0055EE04; /* je: equal / zero */

loc_0055EDFD: ;
    MEM32(ecx + 4) = 0x80000700u;

loc_0055EE04: ;
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC0000004u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 4), 0xC0000004u (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055EE5D; /* jne: not equal / not zero */

loc_0055EE0D: ;
    _fa = (uint32_t)(MEM8(ecx + 1)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + 1), 0x41 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055EE5D; /* jne: not equal / not zero */

loc_0055EE13: ;
    MEM32(ecx + 0xC) = edx;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    MEM8(ecx) = 0x30;
    MEM8(ecx + 1) = 0x40;
    MEM32(ecx + 8) = 0x55EBE9;
    MEM32(ecx + 0x10) = edx;
    MEM32(ecx + 0x18) = edx;
    MEM32(ecx + 0x14) = edx;
    MEM8(ecx + 0x1C) = LO8(edx);
    MEM8(ecx + 0x1D) = LO8(edx);
    MEM8(ecx + 0x1E) = LO8(edx);
    MEM8(ecx + 0x28) = 2;
    MEM8(ecx + 0x29) = 1;
    MEM16(ecx + 0x2A) = LO16(edx);
    SET_LO16(esi, ZX8(MEM8(eax + 9)));
    MEM16(ecx + 0x2C) = LO16(esi);
    MEM16(ecx + 0x2E) = LO16(edx);
    PUSH32(esp, ecx);
    ecx = MEM32(eax);
    PUSH32(esp, 0x0055EE5Au); RECOMP_ABI_CALL(0x0055BC1Fu, sub_0055BC1F); /* call 0x0055BC1F */

loc_0055EE5A: ;
    POP32(esp, esi);
    goto loc_0055EE62;

loc_0055EE5D: ;
    PUSH32(esp, 0x0055EE62u); RECOMP_ABI_CALL(0x0055EBBCu, sub_0055EBBC); /* call 0x0055EBBC */

loc_0055EE62: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0055EE65
 * Original: 0x0055EE65 - 0x0055EEF0 (139 bytes, 27 insns)
 * Category: game_input
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055EE65(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055EE65: ;
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x762D08);
    { uint32_t _icall_target = MEM32(0x5611CC); PUSH32(esp, 0x0055EE71u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0055EE6Bu); } /* indirect call */
    }

loc_0055EE71: ;
    esi = MEM32(esp + 0xC);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM8(0x762CD0) = 0x30;
    MEM8(0x762CD1) = 0x40;
    MEM32(0x762CD8) = 0x55EC9C;
    MEM32(0x762CDC) = esi;
    MEM32(0x762CE0) = eax;
    MEM32(0x762CE8) = eax;
    MEM32(0x762CE4) = eax;
    MEM8(0x762CEC) = LO8(eax);
    MEM8(0x762CED) = 1;
    MEM8(0x762CEE) = LO8(eax);
    MEM8(0x762CF8) = 0x21;
    MEM8(0x762CF9) = 0xA;
    MEM16(0x762CFA) = LO16(eax);
    SET_LO16(ecx, ZX8(MEM8(esi + 5)));
    MEM16(0x762CFC) = LO16(ecx);
    MEM16(0x762CFE) = LO16(eax);
    PUSH32(esp, 0x0055EEE0u); RECOMP_ABI_CALL(0x0055E7EBu, sub_0055E7EB); /* call 0x0055E7EB */

loc_0055EEE0: ;
    ecx = MEM32(esi);
    PUSH32(esp, 0x762CD0);
    PUSH32(esp, 0x0055EEECu); RECOMP_ABI_CALL(0x0055BC1Fu, sub_0055BC1F); /* call 0x0055BC1F */

loc_0055EEEC: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0055EEF0
 * Original: 0x0055EEF0 - 0x0055EF7B (139 bytes, 27 insns)
 * Category: game_input
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055EEF0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055EEF0: ;
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x762D08);
    { uint32_t _icall_target = MEM32(0x5611CC); PUSH32(esp, 0x0055EEFCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0055EEF6u); } /* indirect call */
    }

loc_0055EEFC: ;
    esi = MEM32(esp + 0xC);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM8(0x762CD0) = 0x30;
    MEM8(0x762CD1) = 0x40;
    MEM32(0x762CD8) = 0x55ED26;
    MEM32(0x762CDC) = esi;
    MEM32(0x762CE0) = eax;
    MEM32(0x762CE8) = eax;
    MEM32(0x762CE4) = eax;
    MEM8(0x762CEC) = LO8(eax);
    MEM8(0x762CED) = 1;
    MEM8(0x762CEE) = LO8(eax);
    MEM8(0x762CF8) = 0x21;
    MEM8(0x762CF9) = 0xA;
    MEM16(0x762CFA) = LO16(eax);
    SET_LO16(ecx, ZX8(MEM8(esi + 5)));
    MEM16(0x762CFC) = LO16(ecx);
    MEM16(0x762CFE) = LO16(eax);
    PUSH32(esp, 0x0055EF6Bu); RECOMP_ABI_CALL(0x0055E7EBu, sub_0055E7EB); /* call 0x0055E7EB */

loc_0055EF6B: ;
    ecx = MEM32(esi);
    PUSH32(esp, 0x762CD0);
    PUSH32(esp, 0x0055EF77u); RECOMP_ABI_CALL(0x0055BC1Fu, sub_0055BC1F); /* call 0x0055BC1F */

loc_0055EF77: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0055EF7B
 * Original: 0x0055EF7B - 0x0055EFB6 (59 bytes, 20 insns)
 * Category: game_input
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055EF7B(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055EF7B: ;
    ecx = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0055EF85u); RECOMP_ABI_CALL(0x0055B86Au, sub_0055B86A); /* call 0x0055B86A */

loc_0055EF85: ;
    esi = eax;
    ecx = MEM32(esi + 0x12);
    MEM8(esi + 4) = MEM8(esi + 4) | 2;
    _fa = (uint32_t)(MEM8(esi + 4)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055EFAB; /* je: equal / zero */

loc_0055EF92: ;
    eax = MEM32(ecx + 0xA3);
    eax = MEM32(eax + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055EFA1; /* je: equal / zero */

loc_0055EF9F: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = eax; PUSH32(esp, 0x0055EFA1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0055EF9Fu); } /* indirect call */
    }

loc_0055EFA1: ;
    ecx = MEM32(esi + 0x12);
    PUSH32(esp, 0x0055EFA9u); RECOMP_ABI_CALL(0x0055EDC3u, sub_0055EDC3); /* call 0x0055EDC3 */

loc_0055EFA9: ;
    goto loc_0055EFB2;

loc_0055EFAB: ;
    ecx = esi;
    PUSH32(esp, 0x0055EFB2u); RECOMP_ABI_CALL(0x0055E817u, sub_0055E817); /* call 0x0055E817 */

loc_0055EFB2: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0055EFB6
 * Original: 0x0055EFB6 - 0x0055F04A (148 bytes, 49 insns)
 * Category: game_input
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0055EFB6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055EFB6: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x5610F0); PUSH32(esp, 0x0055EFC6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0055EFC0u); } /* indirect call */
    }

loc_0055EFC6: ;
    MEM8(ebp + -1) = LO8(eax);
    eax = MEM32(esi + 0xA3);
    eax = MEM32(eax + 0x1C);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055EFDC; /* je: equal / zero */

loc_0055EFD8: ;
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = eax; PUSH32(esp, 0x0055EFDCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0055EFDAu); } /* indirect call */
    }

loc_0055EFDC: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055F023; /* je: equal / zero */

loc_0055EFE0: ;
    MEM8(esi + 0xA2) = MEM8(esi + 0xA2) | 1;
    _fa = (uint32_t)(MEM8(esi + 0xA2)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    eax = ebp + -12;
    MEM32(ebp + -8) = eax;
    MEM32(ebp + -12) = eax;
    eax = ebp + -20;
    ecx = esi;
    MEM8(ebp + -20) = LO8(ebx);
    MEM8(ebp + -18) = 4;
    MEM32(ebp + -16) = ebx;
    MEM32(esi + 0x9E) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055F00Au); RECOMP_ABI_CALL(0x0055EDC3u, sub_0055EDC3); /* call 0x0055EDC3 */

loc_0055F00A: ;
    SET_LO8(ecx, MEM8(ebp + -1));
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x5610E8); PUSH32(esp, 0x0055F013u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0055F00Du); } /* indirect call */
    }

loc_0055F013: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    eax = ebp + -20;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x561150); PUSH32(esp, 0x0055F021u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0055F01Bu); } /* indirect call */
    }

loc_0055F021: ;
    goto loc_0055F02C;

loc_0055F023: ;
    SET_LO8(ecx, MEM8(ebp + -1));
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x5610E8); PUSH32(esp, 0x0055F02Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0055F026u); } /* indirect call */
    }

loc_0055F02C: ;
    eax = MEM32(esi + 0xA3);
    MEM8(eax + 1) = MEM8(eax + 1) + 1;
    _fa = (uint32_t)(MEM8(eax + 1)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    eax = MEM32(0x762CB8);
    MEM32(esi + 0xA7) = eax;
    MEM32(0x762CB8) = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_0055F04A
 * Original: 0x0055F04A - 0x0055F178 (302 bytes, 100 insns)
 * Category: game_input
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0055F04A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055F04A: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ecx);
    esi = edx;
    MEM32(ebp + -8) = ecx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x5610F0); PUSH32(esp, 0x0055F05Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0055F059u); } /* indirect call */
    }

loc_0055F05F: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    MEM8(ebp + -2) = LO8(eax);
    if (CMP_EQ(_fa, _fb)) goto loc_0055F162; /* je: equal / zero */

loc_0055F06C: ;
    _fa = (uint32_t)(MEM8(edi + 4)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edi + 4), 2 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0055F162; /* jne: not equal / not zero */

loc_0055F076: ;
    _fa = (uint32_t)(MEM8(edi + 0xD)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi + 0xD), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055F086; /* jne: not equal / not zero */

loc_0055F07B: ;
    MEM32(esi) = 0x32;
    goto loc_0055F168;

loc_0055F086: ;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055F0A5; /* je: equal / zero */

loc_0055F08D: ;
    ecx = esi + 0xC;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, MEM32(0x5610F8));
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x56104C); PUSH32(esp, 0x0055F09Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0055F098u); } /* indirect call */
    }

loc_0055F09E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0055F0A8; /* jge: greater or equal (signed >=) */

loc_0055F0A2: ;
    MEM32(esi + 4) = ebx;

loc_0055F0A5: ;
    MEM32(esi + 0xC) = ebx;

loc_0055F0A8: ;
    ecx = esi + 0x40;
    SET_LO8(eax, MEM8(ecx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ebx) (8-bit) */
    MEM8(ebp + -1) = LO8(eax);
    if (CMP_NE(_fa, _fb)) goto loc_0055F0BF; /* jne: not equal / not zero */

loc_0055F0B4: ;
    SET_LO8(eax, MEM8(edi + 0xD));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(MEM8(esi + 0x41)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), MEM8(esi + 0x41) (8-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0055F0BF; /* jae: above or equal (unsigned >=) */

loc_0055F0BC: ;
    MEM8(esi + 0x41) = LO8(eax);

loc_0055F0BF: ;
    eax = MEM32(edi + 0xE);
    _fa = (uint32_t)(MEM8(eax + 0x28)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0x28), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0055F0CB; /* je: equal / zero */

loc_0055F0C8: ;
    ecx = esi + 0x42;

loc_0055F0CB: ;
    edx = MEM32(ebp + -8);
    _fa = (uint32_t)(MEM32(edx + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx + 0x10), ebx (32-bit) */
    eax = esi + 0x10;
    MEM32(esi + 0x1C) = esi;
    MEM32(esi + 0x18) = 0x55EDE1;
    if (CMP_EQ(_fa, _fb)) goto loc_0055F103; /* je: equal / zero */

loc_0055F0E0: ;
    MEM8(eax) = 0x28;
    MEM8(esi + 0x11) = 0x41;
    edx = MEM32(edx + 0x10);
    MEM32(esi + 0x28) = ecx;
    ecx = ZX8(MEM8(esi + 0x41));
    MEM32(esi + 0x20) = edx;
    MEM32(esi + 0x24) = ecx;
    MEM8(esi + 0x2C) = 1;
    MEM8(esi + 0x2D) = LO8(ebx);
    MEM8(esi + 0x2E) = LO8(ebx);
    goto loc_0055F14A;

loc_0055F103: ;
    MEM32(esi + 0x28) = ecx;
    SET_LO8(ecx, MEM8(esi + 0x41));
    edx = ZX8(LO8(ecx));
    MEM32(esi + 0x24) = edx;
    SET_LO16(edx, ZX8(MEM8(ebp + -1)));
    SET_LO16(edx, LO16(edx) | 0x200);
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* or result */
    MEM8(eax) = 0x30;
    MEM8(esi + 0x11) = 0x40;
    MEM32(esi + 0x20) = ebx;
    MEM8(esi + 0x2C) = 1;
    MEM8(esi + 0x2D) = LO8(ebx);
    MEM8(esi + 0x2E) = LO8(ebx);
    MEM8(esi + 0x38) = 0x21;
    MEM8(esi + 0x39) = 9;
    MEM16(esi + 0x3A) = LO16(edx);
    SET_LO16(edx, ZX8(MEM8(edi + 5)));
    SET_LO16(ecx, ZX8(LO8(ecx)));
    MEM16(esi + 0x3C) = LO16(edx);
    MEM16(esi + 0x3E) = LO16(ecx);

loc_0055F14A: ;
    ecx = MEM32(ebp + -8);
    MEM32(esi + 8) = ecx;
    ecx = MEM32(edi);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055F158u); RECOMP_ABI_CALL(0x0055BC1Fu, sub_0055BC1F); /* call 0x0055BC1F */

loc_0055F158: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055F15Eu); RECOMP_ABI_CALL(0x0055B889u, sub_0055B889); /* call 0x0055B889 */

loc_0055F15E: ;
    MEM32(esi) = eax;
    goto loc_0055F168;

loc_0055F162: ;
    MEM32(esi) = 0x48F;

loc_0055F168: ;
    SET_LO8(ecx, MEM8(ebp + -2));
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x5610E8); PUSH32(esp, 0x0055F171u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0055F16Bu); } /* indirect call */
    }

loc_0055F171: ;
    eax = MEM32(esi);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_0055F178
 * Original: 0x0055F178 - 0x0055F256 (222 bytes, 55 insns)
 * Category: game_input
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055F178(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055F178: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    ecx = MEM32(esi);
    PUSH32(esp, 0x0055F184u); RECOMP_ABI_CALL(0x0055B963u, sub_0055B963); /* call 0x0055B963 */

loc_0055F184: ;
    SET_LO8(ecx, MEM8(eax + 5));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 3 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055F22B; /* jne: not equal / not zero */

loc_0055F190: ;
    _fa = (uint32_t)(MEM8(eax + 7)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 7), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055F20F; /* jne: not equal / not zero */

loc_0055F196: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM8(0x762CD0) = 0x30;
    MEM8(0x762CD1) = 0x40;
    MEM32(0x762CD8) = 0x55EE65;
    MEM32(0x762CDC) = esi;
    MEM32(0x762CE0) = eax;
    MEM32(0x762CE8) = eax;
    MEM32(0x762CE4) = eax;
    MEM8(0x762CEC) = LO8(eax);
    MEM8(0x762CED) = 1;
    MEM8(0x762CEE) = LO8(eax);
    MEM8(0x762CF8) = 0x21;
    MEM8(0x762CF9) = 0xB;
    MEM16(0x762CFA) = LO16(eax);
    SET_LO16(ecx, ZX8(MEM8(esi + 5)));
    MEM16(0x762CFC) = LO16(ecx);
    MEM16(0x762CFE) = LO16(eax);
    PUSH32(esp, 0x0055F201u); RECOMP_ABI_CALL(0x0055E7EBu, sub_0055E7EB); /* call 0x0055E7EB */

loc_0055F201: ;
    ecx = MEM32(esi);
    PUSH32(esp, 0x762CD0);
    PUSH32(esp, 0x0055F20Du); RECOMP_ABI_CALL(0x0055BC1Fu, sub_0055BC1F); /* call 0x0055BC1F */

loc_0055F20D: ;
    goto loc_0055F252;

loc_0055F20F: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 3 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055F22B; /* jne: not equal / not zero */

loc_0055F214: ;
    _fa = (uint32_t)(MEM8(eax + 7)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 7), 2 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055F22B; /* jne: not equal / not zero */

loc_0055F21A: ;
    PUSH32(esp, 0x0055F21Fu); RECOMP_ABI_CALL(0x0055E7EBu, sub_0055E7EB); /* call 0x0055E7EB */

loc_0055F21F: ;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(esp + 0xC));
    PUSH32(esp, 0x0055F229u); RECOMP_ABI_CALL(0x0055EEF0u, sub_0055EEF0); /* call 0x0055EEF0 */

loc_0055F229: ;
    goto loc_0055F252;

loc_0055F22B: ;
    MEM8(esi + 4) = MEM8(esi + 4) & 0xFE;
    _fa = (uint32_t)(MEM8(esi + 4)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    PUSH32(esp, edi);
    edi = MEM32(esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi) = eax;
    MEM16(0x762CB2) = MEM16(0x762CB2) - 1;
    _fa = (uint32_t)(MEM16(0x762CB2)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x7FFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x0055F245u); RECOMP_ABI_CALL(0x0055B86Eu, sub_0055B86E); /* call 0x0055B86E */

loc_0055F245: ;
    PUSH32(esp, 0x80000400u);
    ecx = edi;
    PUSH32(esp, 0x0055F251u); RECOMP_ABI_CALL(0x0055B10Cu, sub_0055B10C); /* call 0x0055B10C */

loc_0055F251: ;
    POP32(esp, edi);

loc_0055F252: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0055F256
 * Original: 0x0055F256 - 0x0055F34A (244 bytes, 72 insns)
 * Category: game_input
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055F256(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055F256: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x762D08);
    { uint32_t _icall_target = MEM32(0x5611CC); PUSH32(esp, 0x0055F264u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0055F25Eu); } /* indirect call */
    }

loc_0055F264: ;
    eax = MEM32(esp + 0x10);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 4), ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0055F33A; /* jl: less (signed <) */

loc_0055F273: ;
    _fa = (uint32_t)(MEM32(eax + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x14), 8 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0055F33A; /* jb: below (unsigned <) */

loc_0055F27D: ;
    _fa = (uint32_t)(MEM8(0x762CBC)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x762CBC), 8 (8-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0055F33A; /* jb: below (unsigned <) */

loc_0055F28A: ;
    _fa = (uint32_t)(MEM8(0x762CBD)) & 0xFFu; _fb = (uint32_t)(0x42) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x762CBD), 0x42 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055F33A; /* jne: not equal / not zero */

loc_0055F297: ;
    _fa = (uint32_t)(MEM16(0x762CBE)) & 0xFFFFu; _fb = (uint32_t)(LO16(ebx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(0x762CBE), LO16(ebx) (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055F33A; /* je: equal / zero */

loc_0055F2A4: ;
    esi = MEM32(esp + 0x14);
    SET_LO8(ecx, MEM8(0x762CC0));
    edi = esi + 0xA;
    edx = edi;
    PUSH32(esp, 0x0055F2B8u); RECOMP_ABI_CALL(0x0055BE9Eu, sub_0055BE9E); /* call 0x0055BE9E */

loc_0055F2B8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(esi + 0xE) = eax;
    SET_LO8(ecx, MEM8(0x762CC1));
    MEM8(esi + 0xB) = LO8(ecx);
    SET_LO8(ecx, MEM8(0x762CC2));
    MEM8(esi + 0xC) = LO8(ecx);
    SET_LO8(ecx, MEM8(0x762CC3));
    MEM8(esi + 0xD) = LO8(ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_0055F315; /* je: equal / zero */

loc_0055F2DA: ;
    SET_LO8(eax, MEM8(0x762CC2));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 2 (8-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0055F315; /* jb: below (unsigned <) */

loc_0055F2E3: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x20 (8-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0055F315; /* ja: above (unsigned >) */

loc_0055F2E7: ;
    SET_LO8(eax, MEM8(esi + 0xC));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(MEM8(esi + 6)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), MEM8(esi + 6) (8-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0055F315; /* ja: above (unsigned >) */

loc_0055F2EF: ;
    _fa = (uint32_t)(MEM8(esi + 9)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 9), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055F2FB; /* je: equal / zero */

loc_0055F2F4: ;
    SET_LO8(eax, LO8(ecx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(MEM8(esi + 7)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), MEM8(esi + 7) (8-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0055F315; /* ja: above (unsigned >) */

loc_0055F2FB: ;
    ecx = MEM32(esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(eax, MEM8(edi));
    PUSH32(esp, eax);
    PUSH32(esp, 0x0055F307u); RECOMP_ABI_CALL(0x0055B87Fu, sub_0055B87F); /* call 0x0055B87F */

loc_0055F307: ;
    ecx = MEM32(esi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0055F30Fu); RECOMP_ABI_CALL(0x0055B10Cu, sub_0055B10C); /* call 0x0055B10C */

loc_0055F30F: ;
    MEM8(esi + 4) = MEM8(esi + 4) | 8;
    _fa = (uint32_t)(MEM8(esi + 4)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    goto loc_0055F344;

loc_0055F315: ;
    edi = MEM32(esi);
    MEM8(esi + 4) = MEM8(esi + 4) & 0xFE;
    _fa = (uint32_t)(MEM8(esi + 4)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    MEM32(esi) = ebx;
    MEM16(0x762CB2) = MEM16(0x762CB2) - 1;
    _fa = (uint32_t)(MEM16(0x762CB2)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x7FFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, ebx);
    ecx = edi;
    PUSH32(esp, 0x0055F32Cu); RECOMP_ABI_CALL(0x0055B86Eu, sub_0055B86E); /* call 0x0055B86E */

loc_0055F32C: ;
    PUSH32(esp, 0x80000400u);
    ecx = edi;
    PUSH32(esp, 0x0055F338u); RECOMP_ABI_CALL(0x0055B10Cu, sub_0055B10C); /* call 0x0055B10C */

loc_0055F338: ;
    goto loc_0055F344;

loc_0055F33A: ;
    PUSH32(esp, MEM32(esp + 0x14));
    PUSH32(esp, eax);
    PUSH32(esp, 0x0055F344u); RECOMP_ABI_CALL(0x0055F178u, sub_0055F178); /* call 0x0055F178 */

loc_0055F344: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0055F34A
 * Original: 0x0055F34A - 0x0055F59A (592 bytes, 182 insns)
 * Category: game_input
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0055F34A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_0055F34A: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x28));
    esp = esp - 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 8);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    _cf = 0; /* xor clears CF */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = ecx;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    edi = edx;
    MEM32(ebp + -16) = esi;
    MEM32(ebp + -8) = ebx;
    MEM32(ebp + -12) = ebx;
    MEM32(eax) = ebx;
    { uint32_t _icall_target = MEM32(0x5610F0); PUSH32(esp, 0x0055F36Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0055F367u); } /* indirect call */
    }

loc_0055F36D: ;
    edx = edi;
    ecx = esi;
    MEM8(ebp + -1) = LO8(eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055F379u); RECOMP_ABI_CALL(0x0055E83Au, sub_0055E83A); /* call 0x0055E83A */

loc_0055F379: ;
    edx = eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(ebp + -20) = edx;
    if (CMP_NE(_fa, _fb)) goto loc_0055F38E; /* jne: not equal / not zero */

loc_0055F382: ;
    MEM32(ebp + -8) = 0x48F;
    goto loc_0055F579;

loc_0055F38E: ;
    _fa = (uint32_t)(MEM32(edx + 0x12)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx + 0x12), ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0055F39F; /* je: equal / zero */

loc_0055F393: ;
    MEM32(ebp + -8) = 0x20;
    goto loc_0055F579;

loc_0055F39F: ;
    SET_LO8(eax, MEM8(esi + 1));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0055F3B2; /* jne: not equal / not zero */

loc_0055F3A6: ;
    MEM32(ebp + -8) = 0xE;
    goto loc_0055F579;

loc_0055F3B2: ;
    SET_LO8(eax, LO8(eax) - 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x7Fu); /* dec result/SF/OF; CF unchanged */
    MEM8(esi + 1) = LO8(eax);
    ebx = MEM32(0x762CB8);
    eax = MEM32(ebx + 0xA7);
    MEM32(0x762CB8) = eax;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x2A);
    POP32(esp, ecx);
    edi = ebx;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    MEM16(edi) = LO16(eax); edi += RECOMP_DF_STEP(2); /* stosw */
    MEM8(edi) = LO8(eax); edi += RECOMP_DF_STEP(1); /* stosb */
    edi = MEM32(ebp + 0xC);
    SET_LO8(ecx, MEM8(ebx + 0xA2));
    MEM32(ebx) = edx;
    MEM32(ebx + 0xA3) = esi;
    SET_LO8(eax, MEM8(edi));
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) & 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _cf = 0; /* logical op clears CF */
    SET_LO8(ecx, LO8(ecx) & 0xE7);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    if (3) _cf = (int)(((LO8(eax)) >> (8 - (3))) & 1);
    SET_LO8(eax, LO8(eax) << 3);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) | LO8(ecx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    MEM8(ebx + 0xA2) = LO8(eax);
    MEM32(edx + 0x12) = ebx;
    edx = edi;
    ecx = ebx;
    MEM32(ebp + -24) = ebx;
    MEM32(ebp + -12) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055F40Du); RECOMP_ABI_CALL(0x0055E8A4u, sub_0055E8A4); /* call 0x0055E8A4 */

loc_0055F40D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_L(_fas, _fbs)) goto loc_0055F570; /* jl: less (signed <) */

loc_0055F415: ;
    edx = MEM32(esi + 0x18);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0055F42E; /* je: equal / zero */

loc_0055F41C: ;
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = edx; PUSH32(esp, 0x0055F420u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0055F41Eu); } /* indirect call */
    }

loc_0055F420: ;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    eax = eax & 0x7FFFFF00;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x80000100u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x80000100u)) >> 32) & 1);
    eax = eax + 0x80000100u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0055F42E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_L(_fas, _fbs)) goto loc_0055F570; /* jl: less (signed <) */

loc_0055F436: ;
    esi = MEM32(esi + 8);
    ecx = ZX8(MEM8(esi));
    esi = MEM32(esi + 1);
    edx = ecx;
    if (2) _cf = (int)(((ecx) >> ((2) - 1)) & 1);
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = ebx + 0x34;
    edi = eax;
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
    _cf = 0; /* logical op clears CF */
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
    PUSH32(esp, 7);
    esi = eax;
    eax = MEM32(ebp + -16);
    edi = ebx + 0x14;
    POP32(esp, ecx);
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
    MEM16(edi) = MEM16(esi); esi += RECOMP_DF_STEP(2); edi += RECOMP_DF_STEP(2); /* movsw */
    _fa = (uint32_t)(MEM8(eax + 0x28)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0x28), 0x40 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    esi = MEM32(ebp + -20);
    if (TEST_NZ(_fa, _fb)) goto loc_0055F51D; /* jne: not equal / not zero */

loc_0055F46E: ;
    _cf = 0; /* logical op clears CF */
    MEM32(ebp + -36) = MEM32(ebp + -36) & 0;
    _fa = (uint32_t)(MEM32(ebp + -36)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = ebp + -32;
    MEM32(ebp + -28) = eax;
    MEM32(ebp + -32) = eax;
    eax = ZX8(MEM8(esi + 0xC));
    _cf = 0; /* logical op clears CF */
    MEM32(ebx + 0x62) = MEM32(ebx + 0x62) & 0;
    _fa = (uint32_t)(MEM32(ebx + 0x62)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ebp + -40;
    MEM32(ebx + 0x5E) = ecx;
    ecx = ebx + 0x32;
    edi = ebx + 0x52;
    MEM8(edi) = 0x30;
    MEM8(ebx + 0x53) = 0x40;
    MEM32(ebx + 0x5A) = 0x55B846;
    MEM32(ebx + 0x6A) = ecx;
    MEM32(ebx + 0x66) = eax;
    MEM8(ebx + 0x6E) = 2;
    MEM8(ebx + 0x6F) = 1;
    MEM8(ebx + 0x70) = 0;
    MEM8(ebx + 0x7A) = 0xA1;
    MEM8(ebx + 0x7B) = 1;
    MEM16(ebx + 0x7C) = 0x100;
    SET_LO16(ecx, ZX8(MEM8(esi + 5)));
    MEM16(ebx + 0x7E) = LO16(ecx);
    MEM16(ebx + 0x80) = LO16(eax);
    ecx = MEM32(esi);
    PUSH32(esp, edi);
    MEM8(ebp + -40) = 1;
    MEM8(ebp + -38) = 4;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055F4DDu); RECOMP_ABI_CALL(0x0055BC1Fu, sub_0055BC1F); /* call 0x0055BC1F */

loc_0055F4DD: ;
    SET_LO8(ecx, MEM8(ebp + -1));
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x5610E8); PUSH32(esp, 0x0055F4E6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0055F4E0u); } /* indirect call */
    }

loc_0055F4E6: ;
    ecx = MEM32(esi);
    eax = ebp + -40;
    PUSH32(esp, eax);
    edx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055F4F3u); RECOMP_ABI_CALL(0x0055EC4Fu, sub_0055EC4F); /* call 0x0055EC4F */

loc_0055F4F3: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x5610F0); PUSH32(esp, 0x0055F4F9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0055F4F3u); } /* indirect call */
    }

loc_0055F4F9: ;
    _fa = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx), 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM8(ebp + -1) = LO8(eax);
    if (CMP_EQ(_fa, _fb)) goto loc_0055F382; /* je: equal / zero */

loc_0055F505: ;
    _fa = (uint32_t)(MEM8(esi + 4)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 4), 2 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_NZ(_fa, _fb)) goto loc_0055F382; /* jne: not equal / not zero */

loc_0055F50F: ;
    _fa = (uint32_t)(MEM32(ebx + 0x56)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0x56), 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_L(_fas, _fbs)) goto loc_0055F51D; /* jl: less (signed <) */

loc_0055F515: ;
    eax = MEM32(ebp + -16);
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x0055F51Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0055F51Au); } /* indirect call */
    }

loc_0055F51D: ;
    ecx = MEM32(ebx + 0xC);
    MEM32(ebx + 0x62) = ecx;
    ecx = ebx + 0x32;
    eax = ebx + 0x52;
    MEM8(eax) = 0x28;
    MEM8(ebx + 0x53) = 0x41;
    MEM32(ebx + 0x5A) = 0x55EA00;
    MEM32(ebx + 0x5E) = ebx;
    MEM32(ebx + 0x6A) = ecx;
    ecx = ZX8(MEM8(esi + 0xC));
    MEM32(ebx + 0x66) = ecx;
    MEM8(ebx + 0x6E) = 2;
    MEM8(ebx + 0x6F) = 1;
    MEM8(ebx + 0x70) = 0;
    _cf = 0; /* logical op clears CF */
    MEM8(esi + 4) = MEM8(esi + 4) & 0xF;
    _fa = (uint32_t)(MEM8(esi + 4)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _fa = (uint32_t)(MEM8(ebx + 0xA2)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebx + 0xA2), 8 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_0055F565; /* je: equal / zero */

loc_0055F55D: ;
    ecx = MEM32(esi);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055F565u); RECOMP_ABI_CALL(0x0055BC1Fu, sub_0055BC1F); /* call 0x0055BC1F */

loc_0055F565: ;
    eax = MEM32(ebp + 8);
    _cf = 0; /* logical op clears CF */
    MEM32(ebp + -12) = MEM32(ebp + -12) & 0;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(eax) = ebx;
    goto loc_0055F579;

loc_0055F570: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055F576u); RECOMP_ABI_CALL(0x0055B889u, sub_0055B889); /* call 0x0055B889 */

loc_0055F576: ;
    MEM32(ebp + -8) = eax;

loc_0055F579: ;
    SET_LO8(ecx, MEM8(ebp + -1));
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x5610E8); PUSH32(esp, 0x0055F582u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0055F57Cu); } /* indirect call */
    }

loc_0055F582: ;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -12), 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_0055F593; /* je: equal / zero */

loc_0055F58B: ;
    ecx = MEM32(ebp + -24);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055F593u); RECOMP_ABI_CALL(0x0055EFB6u, sub_0055EFB6); /* call 0x0055EFB6 */

loc_0055F593: ;
    eax = MEM32(ebp + -8);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0055F59A
 * Original: 0x0055F59A - 0x0055F6EE (340 bytes, 91 insns)
 * Category: game_input
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055F59A(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055F59A: ;
    SET_LO16(eax, MEM16(0x762CB2));
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(ecx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(MEM16(0x762CB0)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), MEM16(0x762CB0) (16-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0055F6DC; /* jae: above or equal (unsigned >=) */

loc_0055F5B2: ;
    eax = MEM32(0x762CB4);
    _fa = (uint32_t)(MEM8(eax + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 4), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0055F5CC; /* je: equal / zero */

loc_0055F5BD: ;
    SET_LO8(ecx, LO8(ecx) + 1);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    edx = ZX8(LO8(ecx));
    edx = (uint32_t)((int32_t)edx * (int32_t)0x16);
    _fa = (uint32_t)(MEM8(edx + eax + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edx + eax + 4), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0055F5BD; /* jne: not equal / not zero */

loc_0055F5CC: ;
    MEM16(0x762CB2) = MEM16(0x762CB2) + 1;
    _fa = (uint32_t)(MEM16(0x762CB2)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, esi);
    esi = ZX8(LO8(ecx));
    esi = (uint32_t)((int32_t)esi * (int32_t)0x16);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(0x762D00) = LO8(ecx);
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x0055F5EFu); RECOMP_ABI_CALL(0x0055B86Eu, sub_0055B86E); /* call 0x0055B86E */

loc_0055F5EF: ;
    SET_LO8(eax, MEM8(esi + 4));
    SET_LO8(eax, LO8(eax) & 0xF1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    SET_LO8(eax, LO8(eax) | 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    ecx = edi;
    MEM32(esi) = edi;
    MEM8(esi + 4) = LO8(eax);
    PUSH32(esp, 0x0055F602u); RECOMP_ABI_CALL(0x0055B87Bu, sub_0055B87B); /* call 0x0055B87B */

loc_0055F602: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 1);
    PUSH32(esp, 3);
    ecx = edi;
    MEM8(esi + 5) = LO8(eax);
    MEM32(esi + 0x12) = ebx;
    PUSH32(esp, 0x0055F614u); RECOMP_ABI_CALL(0x0055B969u, sub_0055B969); /* call 0x0055B969 */

loc_0055F614: ;
    SET_LO8(ecx, MEM8(eax + 2));
    PUSH32(esp, ebx);
    MEM8(esi + 8) = LO8(ecx);
    SET_LO8(eax, MEM8(eax + 4));
    PUSH32(esp, ebx);
    PUSH32(esp, 3);
    ecx = edi;
    MEM8(esi + 6) = LO8(eax);
    PUSH32(esp, 0x0055F62Bu); RECOMP_ABI_CALL(0x0055B969u, sub_0055B969); /* call 0x0055B969 */

loc_0055F62B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055F63D; /* je: equal / zero */

loc_0055F62F: ;
    SET_LO8(ecx, MEM8(eax + 2));
    MEM8(esi + 9) = LO8(ecx);
    SET_LO8(eax, MEM8(eax + 4));
    MEM8(esi + 7) = LO8(eax);
    goto loc_0055F643;

loc_0055F63D: ;
    MEM8(esi + 9) = LO8(ebx);
    MEM8(esi + 7) = LO8(ebx);

loc_0055F643: ;
    PUSH32(esp, 0x10);
    POP32(esp, eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    MEM8(0x762CD0) = 0x30;
    MEM8(0x762CD1) = 0x40;
    MEM32(0x762CD8) = 0x55F256;
    MEM32(0x762CDC) = esi;
    MEM32(0x762CE0) = ebx;
    MEM32(0x762CE8) = 0x762CBC;
    MEM32(0x762CE4) = eax;
    MEM8(0x762CEC) = 2;
    MEM8(0x762CED) = 1;
    MEM8(0x762CEE) = LO8(ebx);
    MEM8(0x762CF8) = 0xC1;
    MEM8(0x762CF9) = 6;
    MEM16(0x762CFA) = 0x4200;
    SET_LO16(ecx, ZX8(MEM8(esi + 5)));
    PUSH32(esp, 0x55E806);
    PUSH32(esp, 0x762D30);
    MEM16(0x762CFC) = LO16(ecx);
    MEM16(0x762CFE) = LO16(eax);
    { uint32_t _icall_target = MEM32(0x5610E4); PUSH32(esp, 0x0055F6C7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0055F6C1u); } /* indirect call */
    }

loc_0055F6C7: ;
    PUSH32(esp, 0x0055F6CCu); RECOMP_ABI_CALL(0x0055E7EBu, sub_0055E7EB); /* call 0x0055E7EB */

loc_0055F6CC: ;
    PUSH32(esp, 0x762CD0);
    ecx = edi;
    PUSH32(esp, 0x0055F6D8u); RECOMP_ABI_CALL(0x0055BC1Fu, sub_0055BC1F); /* call 0x0055BC1F */

loc_0055F6D8: ;
    POP32(esp, edi);
    POP32(esp, esi);
    goto loc_0055F6EA;

loc_0055F6DC: ;
    ecx = MEM32(esp + 8);
    PUSH32(esp, 0x80000100u);
    PUSH32(esp, 0x0055F6EAu); RECOMP_ABI_CALL(0x0055B10Cu, sub_0055B10C); /* call 0x0055B10C */

loc_0055F6EA: ;
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0055F6EE
 * Original: 0x0055F6EE - 0x0055F70B (29 bytes, 7 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055F6EE(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055F6EE: ;
    eax = MEM32(esp + 4);
    MEM32(eax + 8) = MEM32(eax + 8) | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM8(eax + 0x1F) = 0xFF;
    ecx = MEM32(0x87C94C);
    MEM32(eax + 0x14) = ecx;
    MEM32(0x87C94C) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0055F70B
 * Original: 0x0055F70B - 0x0055F748 (61 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055F70B(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055F70B: ;
    _fa = (uint32_t)(MEM8(edx + 0x11)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edx + 0x11), 0 (8-bit) */
    eax = MEM32(ecx);
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_0055F71F; /* jne: not equal / not zero */

loc_0055F714: ;
    esi = ecx + 0x40C;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0055F728;

loc_0055F71F: ;
    esi = ecx + 0x410;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x28;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0055F728: ;
    ecx = MEM32(esi);
    MEM32(edx + 0x18) = ecx;
    MEM32(esi) = edx;
    ecx = MEM32(edx + 0x18);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    POP32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_0055F73C; /* jne: not equal / not zero */

loc_0055F737: ;
    MEM32(edx + 0xC) = MEM32(edx + 0xC) & ecx;
    _fa = (uint32_t)(MEM32(edx + 0xC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    goto loc_0055F742;

loc_0055F73C: ;
    ecx = MEM32(ecx + 0x14);
    MEM32(edx + 0xC) = ecx;

loc_0055F742: ;
    ecx = MEM32(edx + 0x14);
    MEM32(eax) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_0055F748
 * Original: 0x0055F748 - 0x0055F798 (80 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055F748(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055F748: ;
    _fa = (uint32_t)(MEM8(edx + 0x11)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edx + 0x11), 0 (8-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_0055F75D; /* jne: not equal / not zero */

loc_0055F750: ;
    esi = ecx + 0x40C;
    ecx = MEM32(ecx);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0055F768;

loc_0055F75D: ;
    esi = ecx + 0x410;
    ecx = MEM32(ecx);
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x28;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0055F768: ;
    eax = MEM32(esi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0055F76C: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055F779; /* je: equal / zero */

loc_0055F770: ;
    edi = eax;
    eax = MEM32(eax + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055F76C; /* jne: not equal / not zero */

loc_0055F779: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055F78B; /* je: equal / zero */

loc_0055F77D: ;
    ecx = MEM32(eax + 0x18);
    MEM32(edi + 0x18) = ecx;
    eax = MEM32(eax + 0xC);
    MEM32(edi + 0xC) = eax;
    goto loc_0055F795;

loc_0055F78B: ;
    edx = MEM32(eax + 0x18);
    MEM32(esi) = edx;
    eax = MEM32(eax + 0xC);
    MEM32(ecx) = eax;

loc_0055F795: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0055F798
 * Original: 0x0055F798 - 0x0055F7AE (22 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055F798(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055F798: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0055F7AD; /* jbe: below or equal (unsigned <=) */

loc_0055F79E: ;
    PUSH32(esp, esi);

loc_0055F79F: ;
    esi = edx;
    esi = esi & 1;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = edx >> 1;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = esi + eax * 2;
    if ((_fa != 0)) goto loc_0055F79F; /* jne: not equal / not zero */

loc_0055F7AC: ;
    POP32(esp, esi);

loc_0055F7AD: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0055F7AE
 * Original: 0x0055F7AE - 0x0055F825 (119 bytes, 50 insns)
 * Category: game_input
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0055F7AE(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055F7AE: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(ecx, MEM8(ebp + 8));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x20 (8-bit) */
    PUSH32(esp, edi);
    edi = edx;
    if (CMP_B(_fa, _fb)) goto loc_0055F7D6; /* jb: below (unsigned <) */

loc_0055F7C0: ;
    edx = ZX8(LO8(ecx));
    PUSH32(esp, 5);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    POP32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055F7CEu); RECOMP_ABI_CALL(0x0055F798u, sub_0055F798); /* call 0x0055F798 */

loc_0055F7CE: ;
    ecx = MEM32(esi + 8);
    MEM32(ecx + eax * 4) = edi;
    goto loc_0055F81F;

loc_0055F7D6: ;
    SET_LO8(eax, LO8(ecx));
    SET_LO8(eax, LO8(eax) << 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    PUSH32(esp, ebx);
    SET_LO8(eax, LO8(eax) + 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    SET_LO8(ebx, LO8(ecx));
    MEM8(ebp + -4) = LO8(eax);
    MEM8(ebp + 0xB) = 0;
    SET_LO8(ebx, LO8(ebx) << 1);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */

loc_0055F7E8: ;
    eax = ZX8(LO8(eax));
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax + esi + 0xC;
    _fa = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 8), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055F806; /* jne: not equal / not zero */

loc_0055F7F8: ;
    PUSH32(esp, MEM32(ebp + -4));
    edx = edi;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055F804u); RECOMP_ABI_CALL(0x0055F7AEu, sub_0055F7AE); /* call 0x0055F7AE */

loc_0055F804: ;
    goto loc_0055F80C;

loc_0055F806: ;
    eax = MEM32(eax + 0xC);
    MEM32(eax + 0xC) = edi;

loc_0055F80C: ;
    SET_LO8(eax, LO8(ebx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    MEM8(ebp + -4) = LO8(eax);
    if (CMP_EQ(_fa, _fb)) goto loc_0055F81E; /* je: equal / zero */

loc_0055F815: ;
    MEM8(ebp + 0xB) = MEM8(ebp + 0xB) + 1;
    _fa = (uint32_t)(MEM8(ebp + 0xB)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM8(ebp + 0xB)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + 0xB), 2 (8-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0055F7E8; /* jb: below (unsigned <) */

loc_0055F81E: ;
    POP32(esp, ebx);

loc_0055F81F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0055F825
 * Original: 0x0055F825 - 0x0055FA01 (476 bytes, 172 insns)
 * Category: game_input
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0055F825(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055F825: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = edx;
    _fa = (uint32_t)(MEM8(esi + 0x11)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x11), 3 (8-bit) */
    PUSH32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_0055F889; /* jne: not equal / not zero */

loc_0055F836: ;
    SET_LO8(eax, 0x20);
    _fa = (uint32_t)(MEM8(esi + 0x13)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x13), LO8(eax) (8-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0055F846; /* jae: above or equal (unsigned >=) */

loc_0055F83D: ;
    SET_LO8(edx, MEM8(esi + 0x13));

loc_0055F840: ;
    SET_LO8(eax, LO8(eax) >> 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(edx) (8-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0055F840; /* ja: above (unsigned >) */

loc_0055F846: ;
    SET_LO8(ebx, LO8(eax));
    SET_LO8(ebx, LO8(ebx) << 1);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    SET_LO8(ebx, LO8(ebx) - 1);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x7Fu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ebx) (8-bit) */
    edi = 0x2EE0;
    MEM8(ebp + -1) = LO8(eax);
    if (CMP_A(_fa, _fb)) goto loc_0055F895; /* ja: above (unsigned >) */

loc_0055F858: ;
    eax = ZX8(LO8(eax));
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = eax + ecx + 0x10;

loc_0055F862: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(eax, MEM16(edx + -2));
    _fb = (uint32_t)(MEM16(edx + 2)) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* add source, before the write */
    SET_LO16(eax, LO16(eax) + MEM16(edx + 2));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* add result */
    _fb = (uint32_t)(MEM16(edx)) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* add source, before the write */
    SET_LO16(eax, LO16(eax) + MEM16(edx));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* add result */
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(LO16(edi)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), LO16(edi) (16-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0055F87C; /* jae: above or equal (unsigned >=) */

loc_0055F874: ;
    edi = eax;
    SET_LO8(eax, MEM8(ebp + -1));
    MEM8(ebp + -5) = LO8(eax);

loc_0055F87C: ;
    MEM8(ebp + -1) = MEM8(ebp + -1) + 1;
    _fa = (uint32_t)(MEM8(ebp + -1)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM8(ebp + -1)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -1), LO8(ebx) (8-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0055F862; /* jbe: below or equal (unsigned <=) */

loc_0055F887: ;
    goto loc_0055F895;

loc_0055F889: ;
    SET_LO16(edi, MEM16(ecx + 0x10));
    _fb = (uint32_t)(MEM16(ecx + 0xE)) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* add source, before the write */
    SET_LO16(edi, LO16(edi) + MEM16(ecx + 0xE));
    _fa = (uint32_t)(LO16(edi)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* add result */
    MEM8(ebp + -5) = 0;

loc_0055F895: ;
    SET_LO16(eax, MEM16(esi + 0x22));
    edi = ZX16(LO16(edi));
    edx = ZX16(LO16(eax));
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = ZX16(MEM16(ecx + 0x414));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, edi (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0055F8B6; /* jle: less or equal (signed <=) */

loc_0055F8AC: ;
    eax = 0x80000800u;
    goto loc_0055F9FC;

loc_0055F8B6: ;
    SET_LO8(edx, MEM8(ebp + -5));
    edi = ZX8(LO8(edx));
    edi = edi << 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edi = edi + ecx + 0xC;
    MEM8(esi + 0x12) = LO8(edx);
    _fb = (uint32_t)(LO16(eax)) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* add source, before the write */
    MEM16(edi + 2) = MEM16(edi + 2) + LO16(eax);
    _fa = (uint32_t)(MEM16(edi + 2)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055F8D5; /* jne: not equal / not zero */

loc_0055F8CE: ;
    SET_LO8(eax, 1);
    MEM8(ebp + -1) = LO8(eax);
    goto loc_0055F8E6;

loc_0055F8D5: ;
    SET_LO8(eax, LO8(edx));
    SET_LO8(eax, LO8(eax) << 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    MEM8(ebp + -1) = LO8(eax);
    SET_LO8(eax, LO8(edx));
    SET_LO8(eax, LO8(eax) << 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    SET_LO8(eax, LO8(eax) + 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x40 (8-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0055F926; /* ja: above (unsigned >) */

loc_0055F8E6: ;
    _fa = (uint32_t)(MEM8(ebp + -1)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -1), LO8(eax) (8-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0055F918; /* ja: above (unsigned >) */

loc_0055F8EB: ;
    edx = ZX8(MEM8(ebp + -1));
    edx = edx << 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx + ecx + 0x12;
    MEM32(ebp + -16) = edx;
    SET_LO8(edx, LO8(eax));
    _fb = (uint32_t)(MEM8(ebp + -1)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* sub source, before the write */
    SET_LO8(edx, LO8(edx) - MEM8(ebp + -1));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sub result */
    SET_LO8(edx, LO8(edx) + 1);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    edx = ZX8(LO8(edx));
    MEM32(ebp + -12) = edx;
    edx = MEM32(ebp + -16);

loc_0055F909: ;
    SET_LO16(ebx, MEM16(esi + 0x22));
    _fb = (uint32_t)(LO16(ebx)) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* add source, before the write */
    MEM16(edx) = MEM16(edx) + LO16(ebx);
    _fa = (uint32_t)(MEM16(edx)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* add result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -12) = MEM32(ebp + -12) - 1;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0055F909; /* jne: not equal / not zero */

loc_0055F918: ;
    MEM8(ebp + -1) = MEM8(ebp + -1) << 1;
    _fa = (uint32_t)(MEM8(ebp + -1)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    SET_LO8(eax, LO8(eax) << 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    SET_LO8(eax, LO8(eax) + 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x40 (8-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0055F8E6; /* jbe: below or equal (unsigned <=) */

loc_0055F923: ;
    SET_LO8(edx, MEM8(ebp + -5));

loc_0055F926: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 1 (8-bit) */
    MEM8(ebp + -1) = LO8(edx);
    if (CMP_BE(_fa, _fb)) goto loc_0055F98F; /* jbe: below or equal (unsigned <=) */

loc_0055F92E: ;
    SET_LO8(eax, MEM8(ebp + -1));
    edx = ZX8(MEM8(ebp + -1));
    SET_LO8(eax, LO8(eax) ^ 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    eax = ZX8(LO8(eax));
    edx = edx << 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx + ecx + 0xC;
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(ebx, MEM16(edx + 4));
    SET_LO16(edx, MEM16(edx + 2));
    eax = eax + ecx + 0xC;
    MEM16(ebp + -12) = LO16(edx);
    edx = ZX16(MEM16(eax + 4));
    eax = ZX16(MEM16(eax + 2));
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = ZX16(MEM16(ebp + -12));
    MEM32(ebp + -16) = ebx;
    ebx = ZX16(LO16(ebx));
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0055F98F; /* jle: less or equal (signed <=) */

loc_0055F970: ;
    SET_LO8(eax, MEM8(ebp + -1));
    ebx = MEM32(ebp + -16);
    edx = MEM32(ebp + -12);
    SET_LO8(eax, LO8(eax) >> 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ebx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = ZX8(LO8(eax));
    ebx = ebx << 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    MEM16(ebx + ecx + 0x10) = LO16(edx);
    MEM8(ebp + -1) = LO8(eax);
    if (CMP_A(_fa, _fb)) goto loc_0055F92E; /* ja: above (unsigned >) */

loc_0055F98F: ;
    _fa = (uint32_t)(MEM8(ebp + -1)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -1), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055F9A1; /* jne: not equal / not zero */

loc_0055F995: ;
    SET_LO16(eax, MEM16(ecx + 0x20));
    _fb = (uint32_t)(MEM16(ecx + 0x1E)) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* add source, before the write */
    SET_LO16(eax, LO16(eax) + MEM16(ecx + 0x1E));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* add result */
    MEM16(ecx + 0x10) = LO16(eax);

loc_0055F9A1: ;
    eax = MEM32(edi + 8);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055F9E0; /* jne: not equal / not zero */

loc_0055F9AA: ;
    SET_LO8(eax, MEM8(ebp + -5));
    goto loc_0055F9B3;

loc_0055F9AF: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055F9C1; /* je: equal / zero */

loc_0055F9B3: ;
    SET_LO8(eax, LO8(eax) >> 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    ebx = ZX8(LO8(eax));
    ebx = ebx << 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(MEM32(ebx + ecx + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + ecx + 0x14), edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055F9AF; /* je: equal / zero */

loc_0055F9C1: ;
    eax = ZX8(LO8(eax));
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = MEM32(eax + ecx + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055F9D5; /* je: equal / zero */

loc_0055F9CF: ;
    eax = MEM32(eax + 0x14);
    MEM32(esi + 0xC) = eax;

loc_0055F9D5: ;
    MEM32(edi + 8) = esi;
    MEM32(edi + 0xC) = esi;
    MEM32(esi + 0x18) = edx;
    goto loc_0055F9EF;

loc_0055F9E0: ;
    MEM32(esi + 0x18) = eax;
    MEM32(edi + 8) = esi;
    eax = MEM32(esi + 0x18);
    eax = MEM32(eax + 0x14);
    MEM32(esi + 0xC) = eax;

loc_0055F9EF: ;
    PUSH32(esp, MEM32(ebp + -5));
    edx = MEM32(esi + 0x14);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055F9FAu); RECOMP_ABI_CALL(0x0055F7AEu, sub_0055F7AE); /* call 0x0055F7AE */

loc_0055F9FA: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0055F9FC: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_0055FA01
 * Original: 0x0055FA01 - 0x0055FB7A (377 bytes, 138 insns)
 * Category: game_input
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0055FA01(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055FA01: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    SET_LO16(eax, MEM16(edx + 0x22));
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(edx + 0x12));
    MEM16(ebp + -16) = LO16(eax);
    eax = ZX8(LO8(ebx));
    PUSH32(esp, esi);
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esi = ecx;
    PUSH32(esp, edi);
    edi = eax + esi + 0xC;
    eax = MEM32(edi + 8);
    MEM32(ebp + -20) = edx;
    MEM8(ebp + -12) = LO8(ebx);

loc_0055FA2E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055FA3C; /* je: equal / zero */

loc_0055FA32: ;
    MEM32(ebp + -4) = eax;
    eax = MEM32(eax + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055FA2E; /* jne: not equal / not zero */

loc_0055FA3C: ;
    ecx = MEM32(eax + 0x18);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055FA77; /* jne: not equal / not zero */

loc_0055FA43: ;
    ecx = MEM32(ebp + -4);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    MEM32(edi + 0xC) = ecx;
    MEM32(ebp + -8) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_0055FA7F; /* je: equal / zero */

loc_0055FA52: ;
    SET_LO8(edx, LO8(ebx));
    goto loc_0055FA5A;

loc_0055FA56: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055FA69; /* je: equal / zero */

loc_0055FA5A: ;
    SET_LO8(edx, LO8(edx) >> 1);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    ecx = ZX8(LO8(edx));
    ecx = ecx << 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(MEM32(ecx + esi + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + esi + 0x14), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055FA56; /* je: equal / zero */

loc_0055FA69: ;
    ecx = ZX8(LO8(edx));
    ecx = ecx << 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = MEM32(ecx + esi + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055FA7C; /* je: equal / zero */

loc_0055FA77: ;
    edx = MEM32(ecx + 0x14);
    goto loc_0055FA7F;

loc_0055FA7C: ;
    edx = MEM32(ebp + -8);

loc_0055FA7F: ;
    ecx = MEM32(ebp + -4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    eax = MEM32(eax + 0x18);
    if (CMP_NE(_fa, _fb)) goto loc_0055FA98; /* jne: not equal / not zero */

loc_0055FA89: ;
    PUSH32(esp, MEM32(ebp + -12));
    ecx = esi;
    MEM32(edi + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055FA96u); RECOMP_ABI_CALL(0x0055F7AEu, sub_0055F7AE); /* call 0x0055F7AE */

loc_0055FA96: ;
    goto loc_0055FA9E;

loc_0055FA98: ;
    MEM32(ecx + 0x18) = eax;
    MEM32(ecx + 0xC) = edx;

loc_0055FA9E: ;
    SET_LO16(eax, MEM16(ebp + -16));
    _fb = (uint32_t)(LO16(eax)) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* sub source, before the write */
    MEM16(edi + 2) = MEM16(edi + 2) - LO16(eax);
    _fa = (uint32_t)(MEM16(edi + 2)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* sub result */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055FB71; /* jne: not equal / not zero */

loc_0055FAAE: ;
    SET_LO8(eax, 1);
    SET_LO8(ecx, LO8(eax));

loc_0055FAB2: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), LO8(eax) (8-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0055FADE; /* ja: above (unsigned >) */

loc_0055FAB6: ;
    edx = ZX8(LO8(ecx));
    edx = edx << 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edi = edx + esi + 0x12;
    SET_LO8(edx, LO8(eax));
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* sub source, before the write */
    SET_LO8(edx, LO8(edx) - LO8(ecx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sub result */
    SET_LO8(edx, LO8(edx) + 1);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    edx = ZX8(LO8(edx));
    MEM32(ebp + -4) = edx;

loc_0055FACC: ;
    edx = MEM32(ebp + -20);
    SET_LO16(edx, MEM16(edx + 0x22));
    _fb = (uint32_t)(LO16(edx)) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* sub source, before the write */
    MEM16(edi) = MEM16(edi) - LO16(edx);
    _fa = (uint32_t)(MEM16(edi)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* sub result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x10;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -4) = MEM32(ebp + -4) - 1;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0055FACC; /* jne: not equal / not zero */

loc_0055FADE: ;
    SET_LO8(eax, LO8(eax) << 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    SET_LO8(ecx, LO8(ecx) << 1);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    SET_LO8(eax, LO8(eax) + 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x40 (8-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0055FAB2; /* jbe: below or equal (unsigned <=) */

loc_0055FAE8: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 1 (8-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0055FB5E; /* jbe: below or equal (unsigned <=) */

loc_0055FAED: ;
    SET_LO8(edx, LO8(ebx));
    SET_LO8(edx, LO8(edx) ^ 1);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    ecx = ZX8(LO8(edx));
    ecx = ecx << 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx + esi + 0xC;
    edi = ZX16(MEM16(ecx + 4));
    ecx = ZX16(MEM16(ecx + 2));
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + ecx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = ZX8(LO8(ebx));
    ecx = ecx << 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(ebp + -4) = edi;
    ecx = ecx + esi + 0xC;
    edi = ZX16(MEM16(ecx + 4));
    ecx = ZX16(MEM16(ecx + 2));
    SET_LO8(eax, LO8(ebx));
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + ecx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO8(eax, LO8(eax) >> 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(ebp + -4) (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0055FB38; /* jg: greater (signed >) */

loc_0055FB26: ;
    ecx = ZX8(LO8(eax));
    ecx = ecx << 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ZX16(MEM16(ecx + esi + 0x10));
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055FB5B; /* je: equal / zero */

loc_0055FB36: ;
    SET_LO8(ebx, LO8(edx));

loc_0055FB38: ;
    ecx = ZX8(LO8(ebx));
    ecx = ecx << 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx + esi + 0xC;
    SET_LO16(edx, MEM16(ecx + 4));
    _fb = (uint32_t)(MEM16(ecx + 2)) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* add source, before the write */
    SET_LO16(edx, LO16(edx) + MEM16(ecx + 2));
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* add result */
    ecx = ZX8(LO8(eax));
    ecx = ecx << 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    MEM16(ecx + esi + 0x10) = LO16(edx);
    SET_LO8(ebx, LO8(eax));
    if (CMP_A(_fa, _fb)) goto loc_0055FAED; /* ja: above (unsigned >) */

loc_0055FB5B: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 1 (8-bit) */

loc_0055FB5E: ;
    if (CMP_NE(_fa, _fb)) goto loc_0055FB6C; /* jne: not equal / not zero */

loc_0055FB60: ;
    SET_LO16(eax, MEM16(esi + 0x20));
    _fb = (uint32_t)(MEM16(esi + 0x1E)) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* add source, before the write */
    SET_LO16(eax, LO16(eax) + MEM16(esi + 0x1E));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* add result */
    MEM16(esi + 0x10) = LO16(eax);

loc_0055FB6C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

loc_0055FB71: ;
    SET_LO8(ecx, LO8(ebx));
    SET_LO8(eax, LO8(ebx));
    goto loc_0055FADE;

}

/**
 * sub_0055FB7A
 * Original: 0x0055FB7A - 0x0055FC10 (150 bytes, 51 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055FB7A(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055FB7A: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    ecx = MEM32(esi);
    MEM32(0x762D50) = MEM32(0x762D50) + 1;
    _fa = (uint32_t)(MEM32(0x762D50)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = MEM32(ecx + 0x10);
    edx = MEM32(ecx + 0xC);
    edx = edx & eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, edi);
    if ((_fa == 0)) goto loc_0055FC09; /* je: equal / zero */

loc_0055FB92: ;
    edi = 0x80000000u;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0055FC09; /* je: equal / zero */

loc_0055FB9B: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(edx) (8-bit) */
    MEM32(ecx + 0x14) = edi;
    if (TEST_Z(_fa, _fb)) goto loc_0055FBAB; /* je: equal / zero */

loc_0055FBA5: ;
    MEM32(ecx + 0xC) = eax;
    edx = edx & 0xFFFFFFFEu;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_0055FBAB: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 0x20 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0055FBDF; /* je: equal / zero */

loc_0055FBB0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esi + 8);
    ebx = ZX16(MEM16(ebx + 0x80));
    edi = esi + 0x418;
    eax = MEM32(edi);
    ebx = ebx ^ eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebx = ebx & 0x8000;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(0x10000) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi) = eax;
    MEM32(ecx + 0xC) = 0x20;
    edx = edx & 0xFFFFFFDFu;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    POP32(esp, ebx);

loc_0055FBDF: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055FBFC; /* je: equal / zero */

loc_0055FBE3: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    MEM32(esi + 0x438) = edx;
    PUSH32(esp, 0);
    _fb = (uint32_t)(0x440) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x440;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(0x5610E0); PUSH32(esp, 0x0055FBFAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0055FBF4u); } /* indirect call */
    }

loc_0055FBFA: ;
    goto loc_0055FC05;

loc_0055FBFC: ;
    eax = MEM32(esi);
    MEM32(eax + 0x10) = 0x80000000u;

loc_0055FC05: ;
    SET_LO8(eax, 1);
    goto loc_0055FC0B;

loc_0055FC09: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */

loc_0055FC0B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0055FC10
 * Original: 0x0055FC10 - 0x0055FC34 (36 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055FC10(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055FC10: ;
    eax = MEM32(ecx + 8);
    edx = MEM32(ecx + 0x418);
    ecx = ZX16(MEM16(eax + 0x80));
    eax = ecx;
    eax = eax ^ edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = ecx & 0x7FFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax & 0x8000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx | edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0055FC34
 * Original: 0x0055FC34 - 0x0055FD47 (275 bytes, 97 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0055FC34(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055FC34: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    edx = MEM32(ecx + 0x418);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    RECOMP_UNIMPL("cli", 0x0055FC40u); /* TODO: cli */
    eax = MEM32(ecx + 8);
    eax = ZX16(MEM16(eax + 0x80));
    ebx = MEM32(-25157620);
    RECOMP_UNIMPL("sti", 0x0055FC51u); /* TODO: sti */
    esi = eax;
    eax = eax & 0x7FFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = esi ^ edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = eax | edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esi = esi & 0x8000;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;
    _fb = (uint32_t)(MEM32(ecx + 0x4D8)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(ecx + 0x4D8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x14) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x14 (32-bit) */
    MEM32(ebp + -4) = eax;
    if (CMP_B(_fa, _fb)) goto loc_0055FD43; /* jb: below (unsigned <) */

loc_0055FC79: ;
    edx = MEM32(ecx + 0x4D0);
    PUSH32(esp, edi);
    edi = esi + esi * 2;
    edi = edi << 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - ebx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055FCA4; /* jne: not equal / not zero */

loc_0055FC8C: ;
    MEM32(ecx + 0x4D4) = MEM32(ecx + 0x4D4) & 0;
    _fa = (uint32_t)(MEM32(ecx + 0x4D4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ecx + 0x4D0) = edi;
    MEM32(ecx + 0x4D8) = esi;
    goto loc_0055FD42;

loc_0055FCA4: ;
    eax = edi;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fas >= 0)) goto loc_0055FCAD; /* jns: not sign (positive) */

loc_0055FCAA: ;
    _fb = (uint32_t)(0x2F) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x2F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0055FCAD: ;
    PUSH32(esp, 0x30);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    POP32(esp, ebx);
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ebx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ebx)); }
    ebx = MEM32(ecx + 0x4D4);
    edx = eax;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - ebx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa != 0)) goto loc_0055FCD4; /* jne: not equal / not zero */

loc_0055FCBF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055FD42; /* je: equal / zero */

loc_0055FCC3: ;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x61A8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0x61A8 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0055FD42; /* jbe: below or equal (unsigned <=) */

loc_0055FCCC: ;
    MEM32(ecx + 0x4D8) = esi;
    goto loc_0055FCFE;

loc_0055FCD4: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 3 (32-bit) */
    MEM32(ecx + 0x4D4) = eax;
    MEM32(ecx + 0x4D8) = esi;
    if (CMP_G(_fas, _fbs)) goto loc_0055FC8C; /* jg: greater (signed >) */

loc_0055FCE5: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFDu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xFFFFFFFDu (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0055FC8C; /* jl: less (signed <) */

loc_0055FCEA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055FD42; /* je: equal / zero */

loc_0055FCEE: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0055FCF8; /* jle: less or equal (signed <=) */

loc_0055FCF2: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0055FCFE; /* jge: greater or equal (signed >=) */

loc_0055FCF6: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */

loc_0055FCF8: ;
    if (CMP_GE(_fas, _fbs)) goto loc_0055FD42; /* jge: greater or equal (signed >=) */

loc_0055FCFA: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0055FD42; /* jg: greater (signed >) */

loc_0055FCFE: ;
    ecx = MEM32(ecx);
    edx = MEM32(ecx + 0x34);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    esi = edx;
    eax = 0x3FFF;
    if (CMP_LE(_fas, _fbs)) goto loc_0055FD1D; /* jle: less or equal (signed <=) */

loc_0055FD0E: ;
    esi = esi & eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2EE1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x2EE1 (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0055FD30; /* jae: above or equal (unsigned >=) */

loc_0055FD18: ;
    esi = edx + 1;
    goto loc_0055FD2A;

loc_0055FD1D: ;
    esi = esi & eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2ED1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x2ED1 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0055FD30; /* jbe: below or equal (unsigned <=) */

loc_0055FD27: ;
    esi = edx + -1;

loc_0055FD2A: ;
    esi = esi ^ edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = esi & eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = edx ^ esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0055FD30: ;
    eax = edx;
    eax = ~eax;
    eax = eax ^ edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = ~edx;
    eax = eax ^ edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ecx + 0x34) = eax;

loc_0055FD42: ;
    POP32(esp, edi);

loc_0055FD43: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_0055FD47
 * Original: 0x0055FD47 - 0x0055FDC3 (124 bytes, 48 insns)
 * Category: game_input
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055FD47(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055FD47: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    esi = edx;
    MEM8(esi + 0x27) = MEM8(esi + 0x27) - 1;
    _fa = (uint32_t)(MEM8(esi + 0x27)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x7Fu); /* dec result/SF/OF; CF unchanged */
    eax = MEM32(edi + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    ebx = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_0055FD6A; /* je: equal / zero */

loc_0055FD5C: ;
    ecx = ZX16(MEM16(edi + 0x20));
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x5611D0); PUSH32(esp, 0x0055FD6Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0055FD64u); } /* indirect call */
    }

loc_0055FD6A: ;
    _fa = (uint32_t)(MEM8(edi + 0x22)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edi + 0x22), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0055FDB3; /* je: equal / zero */

loc_0055FD70: ;
    eax = MEM32(ebx + 0x42C);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055FDB3; /* je: equal / zero */

loc_0055FD7C: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055FD89; /* je: equal / zero */

loc_0055FD80: ;
    ecx = eax;
    eax = MEM32(eax + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055FD7C; /* jne: not equal / not zero */

loc_0055FD89: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055FDB3; /* je: equal / zero */

loc_0055FD8D: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055FD9C; /* jne: not equal / not zero */

loc_0055FD91: ;
    ecx = MEM32(eax + 0x24);
    MEM32(ebx + 0x42C) = ecx;
    goto loc_0055FDA2;

loc_0055FD9C: ;
    edx = MEM32(eax + 0x24);
    MEM32(ecx + 0x24) = edx;

loc_0055FDA2: ;
    MEM32(eax + 0x24) = MEM32(eax + 0x24) & 0;
    _fa = (uint32_t)(MEM32(eax + 0x24)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM8(esi + 0x20) = MEM8(esi + 0x20) - 1;
    _fa = (uint32_t)(MEM8(esi + 0x20)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x7Fu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0055FDB3; /* jne: not equal / not zero */

loc_0055FDAB: ;
    MEM8(esi + 0x10) = MEM8(esi + 0x10) & 0xDF;
    _fa = (uint32_t)(MEM8(esi + 0x10)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    MEM8(esi + 1) = MEM8(esi + 1) & 0xBF;
    _fa = (uint32_t)(MEM8(esi + 1)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */

loc_0055FDB3: ;
    MEM8(edi + 0x22) = MEM8(edi + 0x22) | 8;
    _fa = (uint32_t)(MEM8(edi + 0x22)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    PUSH32(esp, edi);
    PUSH32(esp, 0x0055FDBDu); RECOMP_ABI_CALL(0x0055BF5Au, sub_0055BF5A); /* call 0x0055BF5A */

loc_0055FDBD: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

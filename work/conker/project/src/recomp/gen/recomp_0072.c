/**
 * Conker - Recompiled code chunk 72
 * Functions: 250 (0x004C1DD4 - 0x004C7093)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_004C1DD4
 * Original: 0x004C1DD4 - 0x004C1F06 (306 bytes, 117 insns)
 * Category: game_network
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004C1DD4(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004C1DD4: ;
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
    PUSH32(esp, edi);
    eax = ebp + -8;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0xC));
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    MEM32(ebp + -4) = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C1DF2u); RECOMP_ABI_CALL(0x004C1209u, sub_004C1209); /* call 0x004C1209 */

loc_004C1DF2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C1EFD; /* je: equal / zero */

loc_004C1DFA: ;
    eax = ebp + -12;
    PUSH32(esp, eax);
    eax = ebp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C1E08u); RECOMP_ABI_CALL(0x004C129Bu, sub_004C129B); /* call 0x004C129B */

loc_004C1E08: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C1EFD; /* je: equal / zero */

loc_004C1E10: ;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C1EC1; /* je: equal / zero */

loc_004C1E19: ;
    ebx = MEM32(ebp + 0x10);
    eax = ebp + 0xC;
    PUSH32(esp, eax);
    eax = ebp + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + -12));
    MEM32(ebx) = edi;
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C1E32u); RECOMP_ABI_CALL(0x004C119Au, sub_004C119A); /* call 0x004C119A */

loc_004C1E32: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C1EFD; /* je: equal / zero */

loc_004C1E3A: ;
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ebp + 0x10));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C1E45u); RECOMP_ABI_CALL(0x004C15EAu, sub_004C15EA); /* call 0x004C15EA */

loc_004C1E45: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C1EB3; /* je: equal / zero */

loc_004C1E49: ;
    eax = ebp + -4;
    PUSH32(esp, eax);
    PUSH32(esp, 4);
    PUSH32(esp, MEM32(ebp + 0x10));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C1E57u); RECOMP_ABI_CALL(0x004C1DD4u, sub_004C1DD4); /* call 0x004C1DD4 */

loc_004C1E57: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C1EFD; /* je: equal / zero */

loc_004C1E5F: ;
    PUSH32(esp, MEM32(ebx));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C1E66u); RECOMP_ABI_CALL(0x004C0A61u, sub_004C0A61); /* call 0x004C0A61 */

loc_004C1E66: ;
    PUSH32(esp, MEM32(ebp + -4));
    edi = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C1E70u); RECOMP_ABI_CALL(0x004C0A61u, sub_004C0A61); /* call 0x004C0A61 */

loc_004C1E70: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C1EA1; /* je: equal / zero */

loc_004C1E76: ;
    eax = esi + edi + 1;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebx));
    PUSH32(esp, MEM32(ebp + 0x10));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C1E85u); RECOMP_ABI_CALL(0x004C1694u, sub_004C1694); /* call 0x004C1694 */

loc_004C1E85: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebx) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_004C1EFD; /* je: equal / zero */

loc_004C1E8B: ;
    ecx = esi + 1;
    esi = MEM32(ebp + -4);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
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

loc_004C1EA1: ;
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ebp + 0x10));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C1EACu); RECOMP_ABI_CALL(0x004C15EAu, sub_004C15EA); /* call 0x004C15EA */

loc_004C1EAC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004C1E49; /* jne: not equal / not zero */

loc_004C1EB0: ;
    esi = MEM32(ebp + 8);

loc_004C1EB3: ;
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C1EBFu); RECOMP_ABI_CALL(0x004C156Fu, sub_004C156F); /* call 0x004C156F */

loc_004C1EBF: ;
    goto loc_004C1EFF;

loc_004C1EC1: ;
    ebx = MEM32(ebp + 0xC);
    eax = ebx + 1;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C1ECEu); RECOMP_ABI_CALL(0x004C1629u, sub_004C1629); /* call 0x004C1629 */

loc_004C1ECE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    edx = MEM32(ebp + 0x10);
    MEM32(edx) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_004C1EFD; /* je: equal / zero */

loc_004C1ED7: ;
    esi = MEM32(esi + 0x24);
    edi = eax;
    ecx = ebx;
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
    eax = MEM32(edx);
    MEM8(ebx + eax) = 0;
    eax = MEM32(ebp + 8);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(eax + 0x24) = MEM32(eax + 0x24) + ebx;
    _fa = (uint32_t)(MEM32(eax + 0x24)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_004C1EFF;

loc_004C1EFD: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004C1EFF: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_004C1F06
 * Original: 0x004C1F06 - 0x004C1F37 (49 bytes, 19 insns)
 * Category: game_network
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C1F06(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004C1F06: ;
    eax = MEM32(esp + 4);
    edx = MEM32(eax + 0x10);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C1F2C; /* je: equal / zero */

loc_004C1F11: ;
    ecx = MEM32(eax + 0x24);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004C1F1E; /* jne: not equal / not zero */

loc_004C1F18: ;
    MEM8(ecx) = 0;
    MEM32(eax + 0x24) = MEM32(eax + 0x24) + 1;
    _fa = (uint32_t)(MEM32(eax + 0x24)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_004C1F1E: ;
    ecx = MEM32(eax + 0x24);
    _fb = (uint32_t)(MEM32(eax + 0x10)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - MEM32(eax + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(eax + 0x18) = ecx;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_004C1F34;

loc_004C1F2C: ;
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, 0x004C1F34u); RECOMP_ABI_CALL(0x004C0F1Au, sub_004C0F1A); /* call 0x004C0F1A */

loc_004C1F34: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004C1F37
 * Original: 0x004C1F37 - 0x004C2002 (203 bytes, 83 insns)
 * Category: game_network
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004C1F37(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004C1F37: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 0xC);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 5);
    ebx = eax;
    eax = eax & 0x1FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, 0x882EC4);
    ebx = ebx >> 0x18;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    ebx = ebx & 0xE0;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebp + 0xC) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C1F60u); RECOMP_ABI_CALL(0x004C07F7u, sub_004C07F7); /* call 0x004C07F7 */

loc_004C1F60: ;
    esi = MEM32(ebp + 8);
    edi = eax;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C1F6Cu); RECOMP_ABI_CALL(0x004C0F1Au, sub_004C0F1A); /* call 0x004C0F1A */

loc_004C1F6C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C1FF9; /* je: equal / zero */

loc_004C1F74: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004C1F85; /* jne: not equal / not zero */

loc_004C1F79: ;
    SET_LO8(eax, MEM8(ebp + 0xC));
    ecx = MEM32(esi + 0x24);
    SET_LO8(eax, LO8(eax) | LO8(ebx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    MEM8(ecx) = LO8(eax);
    goto loc_004C1FF1;

loc_004C1F85: ;
    eax = MEM32(esi + 0x24);
    SET_LO8(ebx, LO8(ebx) | 0x1F);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    MEM8(eax) = LO8(ebx);
    MEM32(esi + 0x24) = MEM32(esi + 0x24) + 1;
    _fa = (uint32_t)(MEM32(esi + 0x24)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = MEM32(esi + 0x24);
    ecx = edi;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_004C1FE9; /* je: equal / zero */

loc_004C1F99: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_004C1FD8; /* je: equal / zero */

loc_004C1F9C: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_004C1FC7; /* je: equal / zero */

loc_004C1F9F: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_004C1FB6; /* je: equal / zero */

loc_004C1FA2: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_004C1FF4; /* jne: not equal / not zero */

loc_004C1FA5: ;
    ecx = MEM32(ebp + 0xC);
    ecx = ecx >> 0x1C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    SET_LO8(ecx, LO8(ecx) | 0x80);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    MEM8(eax) = LO8(ecx);
    MEM32(esi + 0x24) = MEM32(esi + 0x24) + 1;
    _fa = (uint32_t)(MEM32(esi + 0x24)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = MEM32(esi + 0x24);

loc_004C1FB6: ;
    ecx = MEM32(ebp + 0xC);
    ecx = ecx >> 0x15;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    SET_LO8(ecx, LO8(ecx) | 0x80);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    MEM8(eax) = LO8(ecx);
    MEM32(esi + 0x24) = MEM32(esi + 0x24) + 1;
    _fa = (uint32_t)(MEM32(esi + 0x24)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = MEM32(esi + 0x24);

loc_004C1FC7: ;
    ecx = MEM32(ebp + 0xC);
    ecx = ecx >> 0xE;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    SET_LO8(ecx, LO8(ecx) | 0x80);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    MEM8(eax) = LO8(ecx);
    MEM32(esi + 0x24) = MEM32(esi + 0x24) + 1;
    _fa = (uint32_t)(MEM32(esi + 0x24)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = MEM32(esi + 0x24);

loc_004C1FD8: ;
    ecx = MEM32(ebp + 0xC);
    ecx = ecx >> 7;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    SET_LO8(ecx, LO8(ecx) | 0x80);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    MEM8(eax) = LO8(ecx);
    MEM32(esi + 0x24) = MEM32(esi + 0x24) + 1;
    _fa = (uint32_t)(MEM32(esi + 0x24)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = MEM32(esi + 0x24);

loc_004C1FE9: ;
    SET_LO8(ecx, MEM8(ebp + 0xC));
    SET_LO8(ecx, LO8(ecx) & 0x7F);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    MEM8(eax) = LO8(ecx);

loc_004C1FF1: ;
    MEM32(esi + 0x24) = MEM32(esi + 0x24) + 1;
    _fa = (uint32_t)(MEM32(esi + 0x24)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_004C1FF4: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_004C1FFB;

loc_004C1FF9: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004C1FFB: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004C2002
 * Original: 0x004C2002 - 0x004C203F (61 bytes, 25 insns)
 * Category: game_network
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C2002(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004C2002: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    PUSH32(esp, 4);
    PUSH32(esp, 0x882ED8);
    PUSH32(esp, esi);
    PUSH32(esp, 0x004C2015u); RECOMP_ABI_CALL(0x004C07F7u, sub_004C07F7); /* call 0x004C07F7 */

loc_004C2015: ;
    edi = eax;
    eax = edi + esi;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, 0x004C2024u); RECOMP_ABI_CALL(0x004C0F1Au, sub_004C0F1A); /* call 0x004C0F1A */

loc_004C2024: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C2038; /* je: equal / zero */

loc_004C2028: ;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(esp + 0x14));
    PUSH32(esp, 0x004C2033u); RECOMP_ABI_CALL(0x004C081Bu, sub_004C081B); /* call 0x004C081B */

loc_004C2033: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_004C203A;

loc_004C2038: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004C203A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004C203F
 * Original: 0x004C203F - 0x004C208A (75 bytes, 35 insns)
 * Category: game_network
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004C203F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004C203F: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(ebp + 0xC));
    ebx = MEM32(ebp + 8);
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C204Fu); RECOMP_ABI_CALL(0x004C1F37u, sub_004C1F37); /* call 0x004C1F37 */

loc_004C204F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C2083; /* je: equal / zero */

loc_004C2053: ;
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C205Cu); RECOMP_ABI_CALL(0x004C2002u, sub_004C2002); /* call 0x004C2002 */

loc_004C205C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C2083; /* je: equal / zero */

loc_004C2060: ;
    ecx = MEM32(ebp + 0x10);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0x14);
    eax = ecx;
    PUSH32(esp, edi);
    edi = MEM32(ebx + 0x24);
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
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebx + 0x24) = MEM32(ebx + 0x24) + eax;
    _fa = (uint32_t)(MEM32(ebx + 0x24)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, edi);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, esi);
    goto loc_004C2085;

loc_004C2083: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004C2085: ;
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_004C208A
 * Original: 0x004C208A - 0x004C20CB (65 bytes, 25 insns)
 * Category: game_network
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C208A(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004C208A: ;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(esp + 0xC));
    esi = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, 0x004C2099u); RECOMP_ABI_CALL(0x004C1F37u, sub_004C1F37); /* call 0x004C1F37 */

loc_004C2099: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C20C5; /* je: equal / zero */

loc_004C209D: ;
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0x004C20A5u); RECOMP_ABI_CALL(0x004C2002u, sub_004C2002); /* call 0x004C2002 */

loc_004C20A5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C20C5; /* je: equal / zero */

loc_004C20A9: ;
    _fa = (uint32_t)(MEM8(esp + 0x10)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esp + 0x10), 0 (8-bit) */
    ecx = MEM32(esi + 0x24);
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    SET_LO8(eax, LO8(eax) - 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x7Fu); /* dec result/SF/OF; CF unchanged */
    eax = eax & 0xFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM8(ecx) = LO8(eax);
    MEM32(esi + 0x24) = MEM32(esi + 0x24) + 1;
    _fa = (uint32_t)(MEM32(esi + 0x24)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_004C20C7;

loc_004C20C5: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004C20C7: ;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_004C20CB
 * Original: 0x004C20CB - 0x004C2154 (137 bytes, 60 insns)
 * Category: game_network
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C20CB(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004C20CB: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esp + 0x14));
    PUSH32(esp, esi);
    PUSH32(esp, 0x004C20DCu); RECOMP_ABI_CALL(0x004C1F37u, sub_004C1F37); /* call 0x004C1F37 */

loc_004C20DC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C214C; /* je: equal / zero */

loc_004C20E0: ;
    ebx = MEM32(esp + 0x18);
    PUSH32(esp, 4);
    PUSH32(esp, 0x882EE8);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x004C20F1u); RECOMP_ABI_CALL(0x004C07F7u, sub_004C07F7); /* call 0x004C07F7 */

loc_004C20F1: ;
    edi = eax;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x004C20FAu); RECOMP_ABI_CALL(0x004C2002u, sub_004C2002); /* call 0x004C2002 */

loc_004C20FA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C214C; /* je: equal / zero */

loc_004C20FE: ;
    eax = edi;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_004C213F; /* je: equal / zero */

loc_004C2103: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_004C2132; /* je: equal / zero */

loc_004C2106: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_004C2125; /* je: equal / zero */

loc_004C2109: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_004C2118; /* je: equal / zero */

loc_004C210C: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_004C2147; /* jne: not equal / not zero */

loc_004C210F: ;
    eax = MEM32(esi + 0x24);
    MEM8(eax) = 0;
    MEM32(esi + 0x24) = MEM32(esi + 0x24) + 1;
    _fa = (uint32_t)(MEM32(esi + 0x24)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_004C2118: ;
    ecx = MEM32(esi + 0x24);
    eax = ebx;
    eax = eax >> 0x18;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM8(ecx) = LO8(eax);
    MEM32(esi + 0x24) = MEM32(esi + 0x24) + 1;
    _fa = (uint32_t)(MEM32(esi + 0x24)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_004C2125: ;
    ecx = MEM32(esi + 0x24);
    eax = ebx;
    eax = eax >> 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM8(ecx) = LO8(eax);
    MEM32(esi + 0x24) = MEM32(esi + 0x24) + 1;
    _fa = (uint32_t)(MEM32(esi + 0x24)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_004C2132: ;
    ecx = MEM32(esi + 0x24);
    eax = ebx;
    eax = eax >> 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM8(ecx) = LO8(eax);
    MEM32(esi + 0x24) = MEM32(esi + 0x24) + 1;
    _fa = (uint32_t)(MEM32(esi + 0x24)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_004C213F: ;
    eax = MEM32(esi + 0x24);
    MEM8(eax) = LO8(ebx);
    MEM32(esi + 0x24) = MEM32(esi + 0x24) + 1;
    _fa = (uint32_t)(MEM32(esi + 0x24)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_004C2147: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_004C214E;

loc_004C214C: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004C214E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_004C2154
 * Original: 0x004C2154 - 0x004C228D (313 bytes, 125 insns)
 * Category: game_network
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004C2154(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004C2154: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 0x18);
    MEM32(ebp + 0x18) = MEM32(ebp + 0x18) - 1;
    _fa = (uint32_t)(MEM32(ebp + 0x18)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004C2176; /* jne: not equal / not zero */

loc_004C2164: ;
    PUSH32(esp, 0xFFFFFC15u);
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C2171u); RECOMP_ABI_CALL(0x004C0A95u, sub_004C0A95); /* call 0x004C0A95 */

loc_004C2171: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_004C21EF;

loc_004C2176: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    PUSH32(esp, edi);
    eax = ebp + -4;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C2189u); RECOMP_ABI_CALL(0x004C1209u, sub_004C1209); /* call 0x004C1209 */

loc_004C2189: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C21EA; /* je: equal / zero */

loc_004C218D: ;
    eax = ebp + -8;
    PUSH32(esp, eax);
    eax = ebp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C219Bu); RECOMP_ABI_CALL(0x004C129Bu, sub_004C129B); /* call 0x004C129B */

loc_004C219B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C21EA; /* je: equal / zero */

loc_004C219F: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004C21CA; /* jne: not equal / not zero */

loc_004C21A6: ;
    _fa = (uint32_t)(MEM32(ebp + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x14), edi (32-bit) */
    ecx = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 0x10);
    MEM32(eax) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_004C21C1; /* je: equal / zero */

loc_004C21B3: ;
    edx = MEM32(esi + 0x24);
    MEM32(eax + 4) = edx;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(esi + 0x24) = MEM32(esi + 0x24) + ecx;
    _fa = (uint32_t)(MEM32(esi + 0x24)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_004C21BC: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_004C21EC;

loc_004C21C1: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004C21B3; /* jne: not equal / not zero */

loc_004C21C5: ;
    MEM32(eax + 4) = edi;
    goto loc_004C21BC;

loc_004C21CA: ;
    ebx = MEM32(ebp + 0x10);
    eax = ebp + 0xC;
    PUSH32(esp, eax);
    eax = ebp + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + -8));
    MEM32(ebx) = edi;
    PUSH32(esp, MEM32(ebp + 0xC));
    MEM32(ebx + 4) = edi;
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C21E6u); RECOMP_ABI_CALL(0x004C119Au, sub_004C119A); /* call 0x004C119A */

loc_004C21E6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004C225B; /* jne: not equal / not zero */

loc_004C21EA: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004C21EC: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);

loc_004C21EF: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 24; return; /* ret 20 */

loc_004C21F3: ;
    PUSH32(esp, MEM32(ebp + 0x18));
    eax = ebp + -12;
    PUSH32(esp, MEM32(ebp + 0x14));
    MEM32(ebp + -12) = edi;
    PUSH32(esp, eax);
    PUSH32(esp, 4);
    PUSH32(esp, MEM32(ebp + 0x10));
    MEM32(ebp + -8) = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C220Du); RECOMP_ABI_CALL(0x004C2154u, sub_004C2154); /* call 0x004C2154 */

loc_004C220D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C226C; /* je: equal / zero */

loc_004C2212: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C225B; /* je: equal / zero */

loc_004C2216: ;
    eax = MEM32(ebp + -12);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C225B; /* je: equal / zero */

loc_004C221D: ;
    _fa = (uint32_t)(MEM32(ebp + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x14), edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004C2274; /* jne: not equal / not zero */

loc_004C2222: ;
    ecx = MEM32(ebx);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, MEM32(ebx + 4));
    PUSH32(esp, MEM32(ebp + 0x10));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C2232u); RECOMP_ABI_CALL(0x004C1694u, sub_004C1694); /* call 0x004C1694 */

loc_004C2232: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    MEM32(ebx + 4) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_004C21EA; /* je: equal / zero */

loc_004C2239: ;
    edi = MEM32(ebx);
    ecx = MEM32(ebp + -12);
    esi = MEM32(ebp + -8);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
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
    eax = MEM32(ebp + -12);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebx) = MEM32(ebx) + eax;
    _fa = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = MEM32(ebp + 8);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004C225B: ;
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ebp + 0x10));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C2266u); RECOMP_ABI_CALL(0x004C15EAu, sub_004C15EA); /* call 0x004C15EA */

loc_004C2266: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004C21F3; /* jne: not equal / not zero */

loc_004C226A: ;
    goto loc_004C227C;

loc_004C226C: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_004C21EC;

loc_004C2274: ;
    MEM32(ebx) = eax;
    eax = MEM32(ebp + -8);
    MEM32(ebx + 4) = eax;

loc_004C227C: ;
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C2288u); RECOMP_ABI_CALL(0x004C156Fu, sub_004C156F); /* call 0x004C156F */

loc_004C2288: ;
    goto loc_004C21EC;

}

/**
 * sub_004C228D
 * Original: 0x004C228D - 0x004C22AE (33 bytes, 10 insns)
 * Category: game_network
 * CC: cdecl, 4 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_004C228D(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004C228D: ;
    PUSH32(esp, 2);
    PUSH32(esp, MEM32(esp + 0x14));
    PUSH32(esp, MEM32(esp + 0x14));
    PUSH32(esp, MEM32(esp + 0x14));
    PUSH32(esp, MEM32(esp + 0x14));
    PUSH32(esp, 0x004C22A4u); RECOMP_ABI_CALL(0x004C2154u, sub_004C2154); /* call 0x004C2154 */

loc_004C22A4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004C22AB; /* jne: not equal / not zero */

loc_004C22A9: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004C22AB: ;
    esp += 20; return; /* ret 16 */

}

/**
 * sub_004C22AE
 * Original: 0x004C22AE - 0x004C22C4 (22 bytes, 6 insns)
 * Category: game_network
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C22AE(void)
{

loc_004C22AE: ;
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, 0x004C22C1u); RECOMP_ABI_CALL(0x004C228Du, sub_004C228D); /* call 0x004C228D */

loc_004C22C1: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_004C22C4
 * Original: 0x004C22C4 - 0x004C231B (87 bytes, 32 insns)
 * Category: game_network
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C22C4(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004C22C4: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = eax | 0x20000000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x004C22D9u); RECOMP_ABI_CALL(0x004C1F37u, sub_004C1F37); /* call 0x004C1F37 */

loc_004C22D9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C2315; /* je: equal / zero */

loc_004C22DD: ;
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0x004C22E5u); RECOMP_ABI_CALL(0x004C0F1Au, sub_004C0F1A); /* call 0x004C0F1A */

loc_004C22E5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C2315; /* je: equal / zero */

loc_004C22E9: ;
    _fa = (uint32_t)(MEM32(esi + 0x2C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x200) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x2C), 0x200 (32-bit) */
    eax = MEM32(esi + 0x24);
    if (CMP_EQ(_fa, _fb)) goto loc_004C2303; /* je: equal / zero */

loc_004C22F5: ;
    _fb = (uint32_t)(MEM32(esi + 0x10)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(esi + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(esp + 0x10);
    MEM32(ecx) = eax;
    MEM32(esi + 0x24) = MEM32(esi + 0x24) + 1;
    _fa = (uint32_t)(MEM32(esi + 0x24)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_004C2310;

loc_004C2303: ;
    MEM8(eax) = 0x80;
    eax = MEM32(esp + 0x10);
    MEM32(esi + 0x24) = MEM32(esi + 0x24) + 1;
    _fa = (uint32_t)(MEM32(esi + 0x24)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(eax) = MEM32(eax) & 0;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_004C2310: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_004C2317;

loc_004C2315: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004C2317: ;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_004C231B
 * Original: 0x004C231B - 0x004C23B4 (153 bytes, 66 insns)
 * Category: game_network
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004C231B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004C231B: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM32(esi + 0x2C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x200) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x2C), 0x200 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_004C2389; /* je: equal / zero */

loc_004C232D: ;
    edi = MEM32(esi + 0x10);
    _fb = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + MEM32(ebp + 0xC);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = MEM32(esi + 0x24);
    PUSH32(esp, 4);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - edi;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, 0x882ED8);
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C2346u); RECOMP_ABI_CALL(0x004C07F7u, sub_004C07F7); /* call 0x004C07F7 */

loc_004C2346: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    MEM32(ebp + 8) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_004C2352; /* jne: not equal / not zero */

loc_004C234E: ;
    MEM8(edi) = LO8(ebx);
    goto loc_004C23A6;

loc_004C2352: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C235Au); RECOMP_ABI_CALL(0x004C0F1Au, sub_004C0F1A); /* call 0x004C0F1A */

loc_004C235A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C23AB; /* je: equal / zero */

loc_004C235E: ;
    edi = MEM32(esi + 0x10);
    _fb = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + MEM32(ebp + 0xC);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ebx);
    eax = edi + 1;
    PUSH32(esp, eax);
    eax = MEM32(ebp + 8);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C2374u); RECOMP_ABI_CALL(0x0046E670u, sub_0046E670); /* call 0x0046E670 */

loc_004C2374: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, MEM32(ebp + 8));
    MEM32(esi + 0x24) = edi;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C2384u); RECOMP_ABI_CALL(0x004C081Bu, sub_004C081B); /* call 0x004C081B */

loc_004C2384: ;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(esi + 0x24) = MEM32(esi + 0x24) + ebx;
    _fa = (uint32_t)(MEM32(esi + 0x24)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_004C23A6;

loc_004C2389: ;
    PUSH32(esp, 2);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C2391u); RECOMP_ABI_CALL(0x004C0F1Au, sub_004C0F1A); /* call 0x004C0F1A */

loc_004C2391: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C23AB; /* je: equal / zero */

loc_004C2395: ;
    eax = esi + 0x24;
    ecx = MEM32(eax);
    MEM8(ecx) = 0;
    MEM32(eax) = MEM32(eax) + 1;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = MEM32(eax);
    MEM8(ecx) = 0;
    MEM32(eax) = MEM32(eax) + 1;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_004C23A6: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_004C23AD;

loc_004C23AB: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004C23AD: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004C23B4
 * Original: 0x004C23B4 - 0x004C23B9 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C23B4(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004C23B4: ;
    g_seh_ebp = ebp; sub_004C1629(); return; /* tail jmp 0x004C1629 */

}

/**
 * sub_004C23B9
 * Original: 0x004C23B9 - 0x004C24F3 (314 bytes, 119 insns)
 * Category: game_network
 * CC: cdecl, 6 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004C23B9(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004C23B9: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C24E7; /* je: equal / zero */

loc_004C23CC: ;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C23D3u); RECOMP_ABI_CALL(0x004C0A78u, sub_004C0A78); /* call 0x004C0A78 */

loc_004C23D3: ;
    ebx = MEM32(ebp + 0x14);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 8 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004C23F0; /* je: equal / zero */

loc_004C23DB: ;
    eax = MEM32(ebp + 0x18);
    MEM32(esi + 0x30) = MEM32(esi + 0x30) | 8;
    _fa = (uint32_t)(MEM32(esi + 0x30)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esi + 0x10) = eax;
    MEM32(esi + 0x24) = eax;
    eax = MEM32(ebp + 0x1C);
    MEM32(esi + 0x14) = eax;
    goto loc_004C241D;

loc_004C23F0: ;
    eax = MEM32(esi + 0x30);
    ecx = eax;
    ecx = ecx | ebx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 0x10 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004C240D; /* je: equal / zero */

loc_004C23FC: ;
    eax = eax & 0xFFFFFFF7u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi + 0x30) = eax;
    MEM32(esi + 0x10) = edi;
    MEM32(esi + 0x24) = edi;
    MEM32(esi + 0x14) = edi;
    goto loc_004C241D;

loc_004C240D: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 4 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_004C2417; /* jne: not equal / not zero */

loc_004C2412: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_004C2423; /* jne: not equal / not zero */

loc_004C2417: ;
    eax = MEM32(esi + 0x10);
    MEM32(esi + 0x24) = eax;

loc_004C241D: ;
    MEM32(esi + 0x18) = edi;
    MEM32(esi + 0x20) = edi;

loc_004C2423: ;
    eax = MEM32(esi + 0xC);
    ecx = MEM32(ebp + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(eax + 0xC) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_004C24DA; /* jae: above or equal (unsigned >=) */

loc_004C2432: ;
    edx = MEM32(esi + 0x2C);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 3 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004C245A; /* je: equal / zero */

loc_004C243A: ;
    eax = MEM32(eax + 0x18);
    ecx = MEM32(eax + ecx * 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C24DA; /* je: equal / zero */

loc_004C2448: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, esi);
    { uint32_t _icall_target = ecx; PUSH32(esp, 0x004C244Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C244Cu); } /* indirect call */
    }

loc_004C244E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C247C; /* je: equal / zero */

loc_004C2452: ;
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C2458u); RECOMP_ABI_CALL(0x004C172Du, sub_004C172D); /* call 0x004C172D */

loc_004C2458: ;
    goto loc_004C248F;

loc_004C245A: ;
    _fa = (uint32_t)(HI8(edx)) & 0xFFu; _fb = (uint32_t)(7) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(edx), 7 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004C24D3; /* je: equal / zero */

loc_004C245F: ;
    eax = MEM32(eax + 0x18);
    ecx = MEM32(eax + ecx * 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C24DA; /* je: equal / zero */

loc_004C2469: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    { uint32_t _icall_target = ecx; PUSH32(esp, 0x004C2470u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C246Eu); } /* indirect call */
    }

loc_004C2470: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C247C; /* je: equal / zero */

loc_004C2474: ;
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C247Au); RECOMP_ABI_CALL(0x004C1F06u, sub_004C1F06); /* call 0x004C1F06 */

loc_004C247A: ;
    goto loc_004C248F;

loc_004C247C: ;
    eax = MEM32(esi + 0x34);
    _fa = (uint32_t)(MEM32(eax + 0x1C)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x1C), edi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_004C248F; /* jl: less (signed <) */

loc_004C2484: ;
    PUSH32(esp, 0xFFFFFC15u);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C248Fu); RECOMP_ABI_CALL(0x004C0A78u, sub_004C0A78); /* call 0x004C0A78 */

loc_004C248F: ;
    eax = MEM32(esi + 0x34);
    _fa = (uint32_t)(MEM32(eax + 0x1C)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x1C), edi (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_004C24CB; /* jge: greater or equal (signed >=) */

loc_004C2497: ;
    eax = MEM32(esi + 0x30);
    eax = eax | ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x10 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004C24AF; /* je: equal / zero */

loc_004C24A0: ;
    MEM32(esi + 0x10) = edi;
    MEM32(esi + 0x24) = edi;
    MEM32(esi + 0x20) = edi;
    MEM32(esi + 0x18) = edi;
    MEM32(esi + 0x14) = edi;

loc_004C24AF: ;
    eax = MEM32(esi + 0x38);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C24C8; /* je: equal / zero */

loc_004C24B6: ;
    edx = MEM32(eax + 0x38);
    PUSH32(esp, eax);
    MEM32(eax + 0x34) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C24C2u); RECOMP_ABI_CALL(0x004C075Cu, sub_004C075C); /* call 0x004C075C */

loc_004C24C2: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, edi (32-bit) */
    eax = edx;
    if (CMP_NE(_fa, _fb)) goto loc_004C24B6; /* jne: not equal / not zero */

loc_004C24C8: ;
    MEM32(esi + 0x38) = edi;

loc_004C24CB: ;
    eax = MEM32(esi + 0x34);
    eax = MEM32(eax + 0x1C);
    goto loc_004C24EC;

loc_004C24D3: ;
    PUSH32(esp, 0xFFFFFC0Bu);
    goto loc_004C24DF;

loc_004C24DA: ;
    PUSH32(esp, 0xFFFFFC10u);

loc_004C24DF: ;
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C24E5u); RECOMP_ABI_CALL(0x004C0A78u, sub_004C0A78); /* call 0x004C0A78 */

loc_004C24E5: ;
    goto loc_004C24EC;

loc_004C24E7: ;
    eax = 0xFFFFFC0Fu;

loc_004C24EC: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 28; return; /* ret 24 */

}

/**
 * sub_004C24F3
 * Original: 0x004C24F3 - 0x004C2535 (66 bytes, 25 insns)
 * Category: game_network
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004C24F3(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004C24F3: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = ebp + -4;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C250Au); RECOMP_ABI_CALL(0x004C1DD4u, sub_004C1DD4); /* call 0x004C1DD4 */

loc_004C250A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C252F; /* je: equal / zero */

loc_004C250E: ;
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, MEM32(ebp + 0x10));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C2519u); RECOMP_ABI_CALL(0x004C0C65u, sub_004C0C65); /* call 0x004C0C65 */

loc_004C2519: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C2522; /* je: equal / zero */

loc_004C251D: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_004C2531;

loc_004C2522: ;
    PUSH32(esp, 0xFFFFFC15u);
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C252Fu); RECOMP_ABI_CALL(0x004C0A95u, sub_004C0A95); /* call 0x004C0A95 */

loc_004C252F: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004C2531: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_004C2535
 * Original: 0x004C2535 - 0x004C2600 (203 bytes, 82 insns)
 * Category: game_network
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004C2535(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004C2535: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0x10);
    esi = 0x3E8;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, esi (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_004C2588; /* ja: above (unsigned >) */

loc_004C254A: ;
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C2553u); RECOMP_ABI_CALL(0x004C1F37u, sub_004C1F37); /* call 0x004C1F37 */

loc_004C2553: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C25F7; /* je: equal / zero */

loc_004C255B: ;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C2562u); RECOMP_ABI_CALL(0x004C2002u, sub_004C2002); /* call 0x004C2002 */

loc_004C2562: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C25F7; /* je: equal / zero */

loc_004C256A: ;
    esi = MEM32(ebp + 0x14);
    ecx = edi;
    edi = MEM32(ebx + 0x24);
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
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebx + 0x24) = MEM32(ebx + 0x24) + eax;
    _fa = (uint32_t)(MEM32(ebx + 0x24)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_004C25F9;

loc_004C2588: ;
    eax = ebp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C2595u); RECOMP_ABI_CALL(0x004C22C4u, sub_004C22C4); /* call 0x004C22C4 */

loc_004C2595: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C25F7; /* je: equal / zero */

loc_004C2599: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C25EC; /* je: equal / zero */

loc_004C259D: ;
    goto loc_004C25A7;

loc_004C259F: ;
    edi = MEM32(ebp + 0x10);
    esi = 0x3E8;

loc_004C25A7: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, esi (32-bit) */
    MEM32(ebp + 0xC) = esi;
    if (CMP_A(_fa, _fb)) goto loc_004C25B1; /* ja: above (unsigned >) */

loc_004C25AE: ;
    MEM32(ebp + 0xC) = edi;

loc_004C25B1: ;
    PUSH32(esp, 4);
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C25B9u); RECOMP_ABI_CALL(0x004C1F37u, sub_004C1F37); /* call 0x004C1F37 */

loc_004C25B9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C25F7; /* je: equal / zero */

loc_004C25BD: ;
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C25C6u); RECOMP_ABI_CALL(0x004C2002u, sub_004C2002); /* call 0x004C2002 */

loc_004C25C6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C25F7; /* je: equal / zero */

loc_004C25CA: ;
    ecx = MEM32(ebp + 0xC);
    edi = MEM32(ebx + 0x24);
    esi = MEM32(ebp + 0x14);
    eax = ecx;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + 0x14) = MEM32(ebp + 0x14) + eax;
    _fa = (uint32_t)(MEM32(ebp + 0x14)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
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
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebx + 0x24) = MEM32(ebx + 0x24) + eax;
    _fa = (uint32_t)(MEM32(ebx + 0x24)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) - eax;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa != 0)) goto loc_004C259F; /* jne: not equal / not zero */

loc_004C25EC: ;
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C25F5u); RECOMP_ABI_CALL(0x004C231Bu, sub_004C231B); /* call 0x004C231B */

loc_004C25F5: ;
    goto loc_004C25F9;

loc_004C25F7: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004C25F9: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_004C2600
 * Original: 0x004C2600 - 0x004C267C (124 bytes, 56 insns)
 * Category: game_network
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004C2600(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004C2600: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0x10);
    PUSH32(esp, MEM32(ebp + 0xC));
    esi = edi + 7;
    esi = esi >> 3;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, ebx);
    MEM32(ebp + 0x10) = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C261Eu); RECOMP_ABI_CALL(0x004C1F37u, sub_004C1F37); /* call 0x004C1F37 */

loc_004C261E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C2673; /* je: equal / zero */

loc_004C2622: ;
    eax = esi + 1;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C262Cu); RECOMP_ABI_CALL(0x004C2002u, sub_004C2002); /* call 0x004C2002 */

loc_004C262C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C2673; /* je: equal / zero */

loc_004C2630: ;
    ecx = MEM32(ebx + 0x24);
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, 7);
    POP32(esp, eax);
    edi = edi & eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM8(ecx) = LO8(eax);
    MEM32(ebx + 0x24) = MEM32(ebx + 0x24) + 1;
    _fa = (uint32_t)(MEM32(ebx + 0x24)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi = MEM32(ebx + 0x24);
    ecx = esi;
    esi = MEM32(ebp + 0x14);
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
    ecx = edx;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebx + 0x24) = MEM32(ebx + 0x24) + ecx;
    _fa = (uint32_t)(MEM32(ebx + 0x24)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    ebx = MEM32(ebx + 0x24);
    if (CMP_EQ(_fa, _fb)) goto loc_004C266E; /* je: equal / zero */

loc_004C2662: ;
    ecx = 0x882EB4;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    SET_LO8(eax, MEM8(ecx));
    MEM8(ebx + -1) = MEM8(ebx + -1) & LO8(eax);
    _fa = (uint32_t)(MEM8(ebx + -1)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */

loc_004C266E: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_004C2675;

loc_004C2673: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004C2675: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_004C267C
 * Original: 0x004C267C - 0x004C26AC (48 bytes, 18 insns)
 * Category: game_network
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004C267C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004C267C: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, MEM32(ebp + 0x10));
    eax = ebp + -32;
    PUSH32(esp, eax);
    MEM8(ebp + -32) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C2692u); RECOMP_ABI_CALL(0x004C0AF1u, sub_004C0AF1); /* call 0x004C0AF1 */

loc_004C2692: ;
    eax = ebp + -32;
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C269Cu); RECOMP_ABI_CALL(0x004C0A61u, sub_004C0A61); /* call 0x004C0A61 */

loc_004C269C: ;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C26A8u); RECOMP_ABI_CALL(0x004C2535u, sub_004C2535); /* call 0x004C2535 */

loc_004C26A8: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_004C26AC
 * Original: 0x004C26AC - 0x004C2785 (217 bytes, 81 insns)
 * Category: game_network
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C26AC(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004C26AC: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(esp + 0x10));
    esi = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    PUSH32(esp, 0x004C26BCu); RECOMP_ABI_CALL(0x004C1F37u, sub_004C1F37); /* call 0x004C1F37 */

loc_004C26BC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C26F1; /* je: equal / zero */

loc_004C26C0: ;
    ebx = MEM32(esp + 0x14);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFF8000u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0xFFFF8000u (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_004C271A; /* jl: less (signed <) */

loc_004C26CC: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x8000 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_004C271A; /* jge: greater or equal (signed >=) */

loc_004C26D4: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFF80u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0xFFFFFF80u (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_004C26F8; /* jl: less (signed <) */

loc_004C26D9: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x80 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_004C26F8; /* jge: greater or equal (signed >=) */

loc_004C26E1: ;
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0x004C26E9u); RECOMP_ABI_CALL(0x004C2002u, sub_004C2002); /* call 0x004C2002 */

loc_004C26E9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004C2775; /* jne: not equal / not zero */

loc_004C26F1: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004C26F3: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

loc_004C26F8: ;
    PUSH32(esp, 2);
    PUSH32(esp, esi);
    PUSH32(esp, 0x004C2700u); RECOMP_ABI_CALL(0x004C2002u, sub_004C2002); /* call 0x004C2002 */

loc_004C2700: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C26F1; /* je: equal / zero */

loc_004C2704: ;
    eax = esi + 0x24;
    edx = MEM32(eax);
    ecx = ebx;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((8) & 31u));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    MEM8(edx) = LO8(ecx);
    MEM32(eax) = MEM32(eax) + 1;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = MEM32(eax);
    MEM8(ecx) = LO8(ebx);
    MEM32(eax) = MEM32(eax) + 1;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_004C277D;

loc_004C271A: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFF800000u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0xFF800000u (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_004C2742; /* jl: less (signed <) */

loc_004C2722: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x800000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x800000 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_004C2742; /* jge: greater or equal (signed >=) */

loc_004C272A: ;
    PUSH32(esp, 3);
    PUSH32(esp, esi);
    PUSH32(esp, 0x004C2732u); RECOMP_ABI_CALL(0x004C2002u, sub_004C2002); /* call 0x004C2002 */

loc_004C2732: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C26F1; /* je: equal / zero */

loc_004C2736: ;
    ecx = MEM32(esi + 0x24);
    eax = ebx;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((0x10) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    MEM8(ecx) = LO8(eax);
    goto loc_004C2765;

loc_004C2742: ;
    PUSH32(esp, 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x004C274Au); RECOMP_ABI_CALL(0x004C2002u, sub_004C2002); /* call 0x004C2002 */

loc_004C274A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C26F1; /* je: equal / zero */

loc_004C274E: ;
    ecx = MEM32(esi + 0x24);
    eax = ebx;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((0x18) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    MEM8(ecx) = LO8(eax);
    MEM32(esi + 0x24) = MEM32(esi + 0x24) + 1;
    _fa = (uint32_t)(MEM32(esi + 0x24)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = MEM32(esi + 0x24);
    ecx = ebx;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((0x10) & 31u));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    MEM8(eax) = LO8(ecx);

loc_004C2765: ;
    MEM32(esi + 0x24) = MEM32(esi + 0x24) + 1;
    _fa = (uint32_t)(MEM32(esi + 0x24)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = MEM32(esi + 0x24);
    ecx = ebx;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((8) & 31u));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    MEM8(eax) = LO8(ecx);
    MEM32(esi + 0x24) = MEM32(esi + 0x24) + 1;
    _fa = (uint32_t)(MEM32(esi + 0x24)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_004C2775: ;
    eax = MEM32(esi + 0x24);
    MEM8(eax) = LO8(ebx);
    MEM32(esi + 0x24) = MEM32(esi + 0x24) + 1;
    _fa = (uint32_t)(MEM32(esi + 0x24)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_004C277D: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_004C26F3;

}

/**
 * sub_004C2785
 * Original: 0x004C2785 - 0x004C27E5 (96 bytes, 43 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C2785(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004C2785: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    edx = MEM32(edi);
    PUSH32(esp, 0x1E);
    POP32(esp, ecx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_004C27D5; /* jb: below (unsigned <) */

loc_004C2794: ;
    eax = MEM32(esp + 0xC);
    ecx = ZX16(MEM16(eax + 0x1C));
    _fb = (uint32_t)(0x1E) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x1E;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_004C27D5; /* ja: above (unsigned >) */

loc_004C27A3: ;
    esi = ZX16(MEM16(eax));
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_004C27C0; /* je: equal / zero */

loc_004C27A9: ;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_004C27B1; /* je: equal / zero */

loc_004C27AC: ;
    PUSH32(esp, 0x32);
    POP32(esp, eax);
    goto loc_004C27E0;

loc_004C27B1: ;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0xA) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xA;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_004C27D5; /* ja: above (unsigned >) */

loc_004C27BA: ;
    eax = ZX16(MEM16(eax + 8));
    goto loc_004C27CD;

loc_004C27C0: ;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x16) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x16;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_004C27D5; /* ja: above (unsigned >) */

loc_004C27C9: ;
    eax = ZX16(MEM16(eax + 0x14));

loc_004C27CD: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_004C27D5; /* ja: above (unsigned >) */

loc_004C27D3: ;
    if (CMP_EQ(_fa, _fb)) goto loc_004C27DC; /* je: equal / zero */

loc_004C27D5: ;
    eax = 0x8015C005u;
    goto loc_004C27DE;

loc_004C27DC: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004C27DE: ;
    MEM32(edi) = ecx;

loc_004C27E0: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004C27E5
 * Original: 0x004C27E5 - 0x004C27F9 (20 bytes, 7 insns)
 * Category: game_network
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C27E5(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004C27E5: ;
    eax = MEM32(esp + 4);
    ecx = eax + 0x18;
    PUSH32(esp, ecx);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x1C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x004C27F6u); RECOMP_ABI_CALL(0x004C2785u, sub_004C2785); /* call 0x004C2785 */

loc_004C27F6: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004C27F9
 * Original: 0x004C27F9 - 0x004C281C (35 bytes, 11 insns)
 * CC: cdecl, 2 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_004C27F9(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004C27F9: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x198) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x198 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_004C280E; /* jbe: below or equal (unsigned <=) */

loc_004C2807: ;
    eax = 0x8015C005u;
    goto loc_004C2819;

loc_004C280E: ;
    ecx = MEM32(esp + 8);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x1C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx) = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004C2819: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004C281C
 * Original: 0x004C281C - 0x004C2836 (26 bytes, 8 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C281C(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004C281C: ;
    _fa = (uint32_t)(MEM32(esp + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 4), 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_004C282E; /* jbe: below or equal (unsigned <=) */

loc_004C2823: ;
    _fa = (uint32_t)(MEM32(esp + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 4), 5 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_004C282E; /* ja: above (unsigned >) */

loc_004C282A: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_004C2833;

loc_004C282E: ;
    eax = 0x8015C009u;

loc_004C2833: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004C2836
 * Original: 0x004C2836 - 0x004C2A53 (541 bytes, 196 insns)
 * Category: game_network
 * CC: cdecl, 12 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004C2836(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004C2836: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    eax = MEM32(ebp + 0x14);
    PUSH32(esp, ebx);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    MEM32(ebp + -4) = ecx;
    MEM32(ebp + -8) = edx;
    ecx = eax + 1;
    PUSH32(esp, edi);

loc_004C284C: ;
    SET_LO8(ebx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004C284C; /* jne: not equal / not zero */

loc_004C2853: ;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 3 (32-bit) */
    edi = eax;
    if (CMP_NE(_fa, _fb)) goto loc_004C2860; /* jne: not equal / not zero */

loc_004C285D: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_004C2860: ;
    esi = MEM32(ebp + 0x34);
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1E) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0x1E (32-bit) */
    ebx = MEM32(ebp + 0x30);
    if (CMP_B(_fa, _fb)) goto loc_004C28D4; /* jb: below (unsigned <) */

loc_004C286B: ;
    SET_LO16(eax, MEM16(ebp + 0xC));
    ecx = MEM32(ebp + -4);
    MEM16(ebx) = LO16(eax);
    eax = ebx + 0x14;
    PUSH32(esp, eax);
    MEM16(ebx + 2) = 1;
    MEM32(ebx + 4) = 0xF;
    MEM32(ebx + 8) = edx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C288Eu); RECOMP_ABI_CALL(0x004A073Au, sub_004A073A); /* call 0x004A073A */

loc_004C288E: ;
    ecx = MEM32(ebp + -4);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C2896u); RECOMP_ABI_CALL(0x004A10E2u, sub_004A10E2); /* call 0x004A10E2 */

loc_004C2896: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebp + 0x30) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_004C28A7; /* jne: not equal / not zero */

loc_004C289D: ;
    eax = 0x80150003u;
    goto loc_004C2A4C;

loc_004C28A7: ;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), 4 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_004C28B7; /* jb: below (unsigned <) */

loc_004C28AD: ;
    eax = 0x80151006u;
    goto loc_004C2A4C;

loc_004C28B7: ;
    ecx = MEM32(ebp + 0x10);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x70);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(eax);
    MEM32(ebx + 0xC) = ecx;
    ecx = MEM32(eax + 4);
    MEM32(ebx + 0x10) = ecx;
    SET_LO8(eax, MEM8(eax + 9));
    MEM8(ebp + 0xB) = LO8(eax);
    MEM16(ebx + 0x1C) = LO16(edi);

loc_004C28D4: ;
    edx = edi + 0x1E;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(esi) (32-bit) */
    eax = ebx + 0x1E;
    if (CMP_A(_fa, _fb)) goto loc_004C28F6; /* ja: above (unsigned >) */

loc_004C28DE: ;
    esi = MEM32(ebp + 0x14);
    ecx = edi;
    edi = eax;
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
    esi = MEM32(ebp + 0x34);

loc_004C28F6: ;
    _fa = (uint32_t)(MEM16(ebp + 0xC)) & 0xFFFFu; _fb = (uint32_t)(1) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ebp + 0xC), 1 (16-bit) */
    ecx = edx + ebx;
    if (CMP_NE(_fa, _fb)) goto loc_004C2929; /* jne: not equal / not zero */

loc_004C2900: ;
    _fb = (uint32_t)(0x16) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x16;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(esi) (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_004C293B; /* ja: above (unsigned >) */

loc_004C2907: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = ecx;
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    edi = MEM32(ebp + 0x28);
    eax = MEM32(edi);
    MEM32(ecx + 8) = eax;
    eax = MEM32(edi + 4);
    MEM16(ecx + 0x14) = MEM16(ecx + 0x14) & 0;
    _fa = (uint32_t)(MEM16(ecx + 0x14)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    MEM32(ecx + 0xC) = eax;
    MEM32(ecx + 0x10) = 0x5F5E100;
    goto loc_004C293E;

loc_004C2929: ;
    _fb = (uint32_t)(0xA) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0xA;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(esi) (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_004C293B; /* ja: above (unsigned >) */

loc_004C2930: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = ecx;
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM16(ecx + 8) = MEM16(ecx + 8) & 0;
    _fa = (uint32_t)(MEM16(ecx + 8)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */

loc_004C293B: ;
    edi = MEM32(ebp + 0x28);

loc_004C293E: ;
    eax = ZX16(MEM16(ebp + 0xC));
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_004C29C2; /* je: equal / zero */

loc_004C2945: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_004C2952; /* je: equal / zero */

loc_004C2948: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_004C2996; /* je: equal / zero */

loc_004C294B: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_004C2A3C; /* jne: not equal / not zero */

loc_004C2952: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + edx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x19) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x19;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(esi) (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_004C2A40; /* ja: above (unsigned >) */

loc_004C295F: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    eax = MEM32(ebp + -4);
    ecx = MEM32(eax + 0x1850);
    MEM32(ebx) = ecx;
    eax = MEM32(eax + 8);
    MEM32(ebx + 4) = eax;
    SET_LO8(eax, MEM8(ebp + 0xB));
    MEM8(ebx + 8) = LO8(eax);
    eax = MEM32(ebp + 0x20);
    MEM32(ebx + 9) = eax;
    eax = MEM32(ebp + 0x24);
    MEM32(ebx + 0xD) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_004C29B9; /* je: equal / zero */

loc_004C2986: ;
    eax = MEM32(edi);
    MEM32(ebx + 0x11) = eax;
    eax = MEM32(edi + 4);
    MEM32(ebx + 0x15) = eax;
    goto loc_004C2A3C;

loc_004C2996: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + edx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(esi) (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_004C2A40; /* ja: above (unsigned >) */

loc_004C29A3: ;
    eax = MEM32(ebp + -4);
    ecx = MEM32(eax + 0x1850);
    MEM32(ebx) = ecx;
    eax = MEM32(eax + 8);
    MEM32(ebx + 4) = eax;
    goto loc_004C2A3C;

loc_004C29B9: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = ebx + 0x11;
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    goto loc_004C2A3C;

loc_004C29C2: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + edx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x90) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x90;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(esi) (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_004C2A40; /* ja: above (unsigned >) */

loc_004C29CE: ;
    eax = MEM32(ebp + -4);
    ecx = MEM32(eax + 0x1850);
    edi = MEM32(ebp + 0x10);
    MEM32(ebx) = ecx;
    edi = (uint32_t)((int32_t)edi * (int32_t)0x70);
    eax = MEM32(eax + 8);
    MEM32(ebx + 4) = eax;
    SET_LO8(eax, MEM8(ebp + 0x18));
    MEM8(ebx + 9) = LO8(eax);
    eax = MEM32(ebp + 0x1C);
    MEM32(ebx + 0xA) = eax;
    eax = MEM32(ebp + 0x20);
    MEM32(ebx + 0x86) = eax;
    eax = MEM32(ebp + 0x24);
    MEM32(ebx + 0x8C) = eax;
    eax = MEM32(ebp + 0x30);
    SET_LO8(eax, MEM8(edi + eax + 9));
    MEM16(ebx + 0x8A) = MEM16(ebx + 0x8A) & 0;
    _fa = (uint32_t)(MEM16(ebx + 0x8A)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    _fa = (uint32_t)(MEM32(ebp + 0x2C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x2C), 0 (32-bit) */
    MEM8(ebx + 8) = LO8(eax);
    edi = ebx + 0xE;
    if (CMP_EQ(_fa, _fb)) goto loc_004C2A2B; /* je: equal / zero */

loc_004C2A1E: ;
    esi = MEM32(ebp + 0x2C);
    PUSH32(esp, 5);
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
    esi = MEM32(ebp + 0x34);
    goto loc_004C2A32;

loc_004C2A2B: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */

loc_004C2A32: ;
    PUSH32(esp, 0x19);
    POP32(esp, ecx);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = ebx + 0x22;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */

loc_004C2A3C: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(esi) (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_004C2A47; /* jbe: below or equal (unsigned <=) */

loc_004C2A40: ;
    MEM32(ebp + -8) = 0x8007007Au;

loc_004C2A47: ;
    eax = MEM32(ebp + -8);
    MEM32(esi) = edx;

loc_004C2A4C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 52; return; /* ret 48 */

}

/**
 * sub_004C2A53
 * Original: 0x004C2A53 - 0x004C2A95 (66 bytes, 24 insns)
 * Category: game_network
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004C2A53(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004C2A53: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    eax = ebp + -12;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    esi = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C2A68u); RECOMP_ABI_CALL(0x004C2FAFu, sub_004C2FAF); /* call 0x004C2FAF */

loc_004C2A68: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_004C2A90; /* jl: less (signed <) */

loc_004C2A6C: ;
    eax = MEM32(ebp + 0xC);
    SET_LO16(ecx, MEM16(ebp + -8));
    MEM16(eax + 0xA) = MEM16(eax + 0xA) & 0;
    _fa = (uint32_t)(MEM16(eax + 0xA)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    MEM16(eax + 8) = LO16(ecx);
    MEM32(eax) = 0xF;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + -12));
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C2A90u); RECOMP_ABI_CALL(0x004C350Du, sub_004C350D); /* call 0x004C350D */

loc_004C2A90: ;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004C2A95
 * Original: 0x004C2A95 - 0x004C2C0C (375 bytes, 130 insns)
 * Category: game_network
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004C2A95(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_004C2A95: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0xC));
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    eax = MEM32(ebx + 0xC);
    PUSH32(esp, esi);
    _cf = 0; /* xor clears CF */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    _cf = (int)(_fa < _fb);
    PUSH32(esp, edi);
    edi = ecx;
    MEM32(ebp + -8) = edi;
    MEM32(ebp + -4) = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_004C2AF0; /* je: equal / zero */

loc_004C2AB2: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C2AB8u); RECOMP_ABI_CALL(0x004A5F72u, sub_004A5F72); /* call 0x004A5F72 */

loc_004C2AB8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(ebp + -4) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_004C2AF0; /* je: equal / zero */

loc_004C2ABF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_004C2C02; /* jl: less (signed <) */

loc_004C2AC7: ;
    eax = MEM32(ebx + 0x14);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x30)) >> 32) & 1);
    eax = eax + 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebx + 0xC));
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C2AD8u); RECOMP_ABI_CALL(0x004C2A53u, sub_004C2A53); /* call 0x004C2A53 */

loc_004C2AD8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(ebp + -4) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_004C2C02; /* jl: less (signed <) */

loc_004C2AE3: ;
    PUSH32(esp, MEM32(ebx + 0xC));
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C2AEDu); RECOMP_ABI_CALL(0x004A5F87u, sub_004A5F87); /* call 0x004A5F87 */

loc_004C2AED: ;
    MEM32(ebx + 0xC) = esi;

loc_004C2AF0: ;
    eax = MEM32(ebx + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_004C2BF1; /* je: equal / zero */

loc_004C2AFB: ;
    PUSH32(esp, eax);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C2B03u); RECOMP_ABI_CALL(0x004A5F72u, sub_004A5F72); /* call 0x004A5F72 */

loc_004C2B03: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(ebp + -4) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_004C2BF1; /* je: equal / zero */

loc_004C2B0E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_004C2C02; /* jl: less (signed <) */

loc_004C2B16: ;
    eax = MEM32(ebx + 0x24);
    ecx = MEM32(ebx + 0x28);
    esi = MEM32(ebx + 0x14);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(ecx) < (uint32_t)(eax));
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(ebp + 8) = ecx;
    ecx = ebp + 8;
    PUSH32(esp, ecx);
    ecx = MEM32(ebx + 0x20);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(eax)) >> 32) & 1);
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    ecx = MEM32(ebx + 0x18);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    if (LO8(ecx)) _cf = (int)(((eax) >> (32 - (LO8(ecx)))) & 1);
    eax = eax << LO8(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = edi;
    MEM32(ebp + -12) = esi;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C2B41u); RECOMP_ABI_CALL(0x004C016Cu, sub_004C016C); /* call 0x004C016C */

loc_004C2B41: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(ebp + -4) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_004C2C02; /* jl: less (signed <) */

loc_004C2B4C: ;
    PUSH32(esp, MEM32(ebx + 0x10));
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C2B56u); RECOMP_ABI_CALL(0x004A5F87u, sub_004A5F87); /* call 0x004A5F87 */

loc_004C2B56: ;
    _cf = 0; /* logical op clears CF */
    MEM32(ebx + 0x10) = MEM32(ebx + 0x10) & 0;
    _fa = (uint32_t)(MEM32(ebx + 0x10)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = MEM32(ebx + 0x24);
    PUSH32(esp, MEM32(esi + 0x18));
    ecx = MEM32(esi + 0xEC);
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(MEM32(esi + 0xE8)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(MEM32(esi + 0xE8))) >> 32) & 1);
    eax = eax + MEM32(esi + 0xE8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint64_t _t = (uint64_t)(ecx) + (uint64_t)(edx) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); ecx = (uint32_t)_t; }  /* adc */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* adc result */
    edx = MEM32(ebp + 8);
    _cf = 0; /* xor clears CF */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(edx)) >> 32) & 1);
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(esi + 0xB4);
    { uint64_t _t = (uint64_t)(ecx) + (uint64_t)(edi) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); ecx = (uint32_t)_t; }  /* adc */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* adc result */
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + -8);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    edi = esi + 0xA8;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esi + 0xB0));
    MEM32(edi) = edx;
    PUSH32(esp, MEM32(esi + 0x34));
    PUSH32(esp, MEM32(ebx + 0x1C));
    PUSH32(esp, MEM32(esi + 0x30));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C2BA5u); RECOMP_ABI_CALL(0x004B4936u, sub_004B4936); /* call 0x004B4936 */

loc_004C2BA5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(ebp + -4) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_004C2C02; /* jl: less (signed <) */

loc_004C2BAC: ;
    ecx = MEM32(ebx + 0x24);
    _fb = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(MEM32(ebp + 8))) >> 32) & 1);
    ecx = ecx + MEM32(ebp + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = MEM32(edi);
    edx = MEM32(ebp + -12);
    _fb = (uint32_t)(MEM32(edx + 0xB0)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(MEM32(edx + 0xB0))) >> 32) & 1);
    edi = edi + MEM32(edx + 0xB0);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = MEM32(ebx + 0x20);
    eax = ecx;
    if (2) _cf = (int)(((ecx) >> ((2) - 1)) & 1);
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
    ecx = MEM32(ebx + 0x24);
    _fb = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(MEM32(ebp + 8))) >> 32) & 1);
    ecx = ecx + MEM32(ebp + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = edx + 0xA8;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM32(eax)) + (uint64_t)(ecx)) >> 32) & 1);
    MEM32(eax) = MEM32(eax) + ecx;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx + 0xB4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(edx + 0xB4) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_BE(_fa, _fb)) goto loc_004C2BEF; /* jbe: below or equal (unsigned <=) */

loc_004C2BE6: ;
    MEM32(ebp + -4) = 0x8007007Au;
    goto loc_004C2C02;

loc_004C2BEF: ;
    _cf = 0; /* xor clears CF */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004C2BF1: ;
    _fa = (uint32_t)(MEM32(ebx + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0xC), esi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_004C2C02; /* jne: not equal / not zero */

loc_004C2BF6: ;
    _fa = (uint32_t)(MEM32(ebx + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0x10), esi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_004C2C02; /* jne: not equal / not zero */

loc_004C2BFB: ;
    MEM32(ebp + -4) = 0x1500F0;

loc_004C2C02: ;
    eax = MEM32(ebp + -4);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004C2C0C
 * Original: 0x004C2C0C - 0x004C2C47 (59 bytes, 24 insns)
 * Category: game_network
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C2C0C(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004C2C0C: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    esi = edi + 0x15C;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    ebx = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_004C2C2A; /* je: equal / zero */

loc_004C2C21: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004C2C27u); RECOMP_ABI_CALL(0x004A5F87u, sub_004A5F87); /* call 0x004A5F87 */

loc_004C2C27: ;
    MEM32(esi) = MEM32(esi) & 0;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_004C2C2A: ;
    esi = edi + 0x160;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C2C41; /* je: equal / zero */

loc_004C2C36: ;
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0x004C2C3Eu); RECOMP_ABI_CALL(0x004A5F87u, sub_004A5F87); /* call 0x004A5F87 */

loc_004C2C3E: ;
    MEM32(esi) = MEM32(esi) & 0;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_004C2C41: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004C2C47
 * Original: 0x004C2C47 - 0x004C2CE4 (157 bytes, 63 insns)
 * Category: game_network
 * CC: cdecl, 6 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004C2C47(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004C2C47: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0x1C);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0x14);
    eax = MEM32(edi);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 3 (32-bit) */
    MEM32(ebp + -4) = ecx;
    MEM32(ebp + -8) = eax;
    MEM32(esi) = ebx;
    if (CMP_NE(_fa, _fb)) goto loc_004C2CD9; /* jne: not equal / not zero */

loc_004C2C67: ;
    ecx = MEM32(ebp + 0xC);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + 0x10));
    MEM32(ebp + 0x14) = 1;
    MEM32(ebp + 0x14) = MEM32(ebp + 0x14) << LO8(ecx);
    _fa = (uint32_t)(MEM32(ebp + 0x14)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, MEM32(ebp + 0x14));
    ecx = MEM32(ebp + -4);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C2C83u); RECOMP_ABI_CALL(0x004C016Cu, sub_004C016C); /* call 0x004C016C */

loc_004C2C83: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80152102u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x80152102u (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004C2CB1; /* jne: not equal / not zero */

loc_004C2C8D: ;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + -8));
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(ebp + 0x18));
    PUSH32(esp, MEM32(ebp + 0x14));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C2CA4u); RECOMP_ABI_CALL(0x004C06B0u, sub_004C06B0); /* call 0x004C06B0 */

loc_004C2CA4: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_004C2CC1; /* jl: less (signed <) */

loc_004C2CAA: ;
    ebx = 0x80152102u;
    goto loc_004C2CDB;

loc_004C2CB1: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_004C2CC1; /* jl: less (signed <) */

loc_004C2CB5: ;
    eax = MEM32(ebp + -8);
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi), eax (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_004C2CD5; /* jbe: below or equal (unsigned <=) */

loc_004C2CBC: ;
    ebx = 0x8007007Au;

loc_004C2CC1: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C2CDB; /* je: equal / zero */

loc_004C2CC7: ;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C2CD0u); RECOMP_ABI_CALL(0x004A5F87u, sub_004A5F87); /* call 0x004A5F87 */

loc_004C2CD0: ;
    MEM32(esi) = MEM32(esi) & 0;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    goto loc_004C2CDB;

loc_004C2CD5: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_004C2CDB;

loc_004C2CD9: ;
    MEM32(edi) = ebx;

loc_004C2CDB: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 28; return; /* ret 24 */

}

/**
 * sub_004C2CE4
 * Original: 0x004C2CE4 - 0x004C2D39 (85 bytes, 26 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C2CE4(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004C2CE4: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004C2CEF; /* jne: not equal / not zero */

loc_004C2CE8: ;
    eax = 0x80150005u;
    goto loc_004C2D36;

loc_004C2CEF: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(MEM32(eax + 0x188)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x188), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C2D31; /* je: equal / zero */

loc_004C2CFC: ;
    ecx = MEM32(esp + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C2D0C; /* je: equal / zero */

loc_004C2D04: ;
    edx = MEM32(eax + 0x198);
    MEM32(ecx) = edx;

loc_004C2D0C: ;
    ecx = MEM32(esp + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C2D1C; /* je: equal / zero */

loc_004C2D14: ;
    edx = MEM32(eax + 0x194);
    MEM32(ecx) = edx;

loc_004C2D1C: ;
    ecx = MEM32(esp + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C2D2C; /* je: equal / zero */

loc_004C2D24: ;
    edx = MEM32(eax + 0x1A4);
    MEM32(ecx) = edx;

loc_004C2D2C: ;
    eax = MEM32(eax + 0xC);
    goto loc_004C2D36;

loc_004C2D31: ;
    eax = 0x8000000Au;

loc_004C2D36: ;
    esp += 20; return; /* ret 16 */

}

/**
 * sub_004C2D39
 * Original: 0x004C2D39 - 0x004C2F2E (501 bytes, 151 insns)
 * Category: game_network
 * CC: cdecl, 20 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004C2D39(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004C2D39: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    MEM32(ebp + -4) = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_004C2D51; /* jne: not equal / not zero */

loc_004C2D47: ;
    eax = 0x80150005u;
    goto loc_004C2F29;

loc_004C2D51: ;
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0x10);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C2D5Cu); RECOMP_ABI_CALL(0x004A5F61u, sub_004A5F61); /* call 0x004A5F61 */

loc_004C2D5C: ;
    eax = MEM32(ebp + 0x44);
    MEM32(esi + 0x24) = MEM32(esi + 0x24) | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(esi + 0x24)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esi + 8) = eax;
    eax = MEM32(ebp + 0x2C);
    MEM32(esi + 0xB0) = eax;
    eax = MEM32(ebp + 0x30);
    MEM32(esi + 0xB4) = eax;
    eax = MEM32(ebp + 0x40);
    MEM32(esi + 0x1C) = eax;
    eax = MEM32(ebp + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(esi + 0x140) = 0x4AD438;
    MEM32(esi + 0x14C) = ebx;
    MEM32(esi + 0xC) = ebx;
    MEM32(esi + 0xE0) = ebx;
    MEM32(esi + 0xE4) = ebx;
    MEM32(esi + 0xD8) = ebx;
    MEM32(esi + 0xDC) = ebx;
    MEM32(esi + 0xD0) = ebx;
    MEM32(esi + 0xD4) = ebx;
    MEM32(esi + 0x28) = ebx;
    if (CMP_BE(_fa, _fb)) goto loc_004C2DD8; /* jbe: below or equal (unsigned <=) */

loc_004C2DBF: ;
    ecx = MEM32(ebp + 0x18);
    MEM8(esi + 0x1A) = MEM8(esi + 0x1A) | 8;
    _fa = (uint32_t)(MEM8(esi + 0x1A)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    MEM32(esi + 0xF8) = ecx;
    MEM32(esi + 0xFC) = ebx;
    MEM32(esi + 0x100) = eax;

loc_004C2DD8: ;
    edi = MEM32(ebp + 0x48);
    ecx = MEM32(ebp + -4);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C2DE4u); RECOMP_ABI_CALL(0x004A5F61u, sub_004A5F61); /* call 0x004A5F61 */

loc_004C2DE4: ;
    eax = MEM32(ebp + 0x44);
    ecx = MEM32(ebp + -4);
    MEM32(edi + 8) = eax;
    eax = MEM32(ebp + 0x4C);
    MEM32(edi) = eax;
    eax = MEM32(ebp + 0xC);
    MEM32(edi + 0x18) = eax;
    eax = MEM32(ebp + 0x28);
    MEM32(edi + 0x1C) = eax;
    eax = MEM32(ebp + 0x18);
    MEM32(edi + 0x20) = eax;
    eax = MEM32(ebp + 0x1C);
    MEM32(edi + 0x24) = eax;
    eax = MEM32(ebp + 0x20);
    MEM32(edi + 0x28) = eax;
    eax = esi + 0x140;
    PUSH32(esp, eax);
    MEM32(edi + 4) = ebx;
    MEM32(edi + 0x14) = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C2E22u); RECOMP_ABI_CALL(0x004A5F61u, sub_004A5F61); /* call 0x004A5F61 */

loc_004C2E22: ;
    edx = MEM32(ebp + 0x44);
    ecx = MEM32(ebp + 0x54);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    eax = esi + 0x140;
    MEM32(esi + 0x148) = edx;
    MEM32(eax) = 0x4AD438;
    MEM32(esi + 0x14C) = ebx;
    MEM32(esi + 0x104) = 0x4AD3A7;
    if (CMP_NE(_fa, _fb)) goto loc_004C2E53; /* jne: not equal / not zero */

loc_004C2E4E: ;
    ecx = 0x4ACBA9;

loc_004C2E53: ;
    MEM32(esi + 0x118) = eax;
    eax = edi + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 1);
    MEM32(esi + 0x108) = ecx;
    ecx = MEM32(ebp + 0x50);
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(ebp + 0x14));
    MEM32(esi + 0x110) = ecx;
    ecx = MEM32(ebp + -4);
    MEM32(esi + 0x10C) = 0x4AD3D3;
    MEM32(esi + 0x114) = edi;
    MEM32(esi + 0x11C) = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C2E91u); RECOMP_ABI_CALL(0x004C3558u, sub_004C3558); /* call 0x004C3558 */

loc_004C2E91: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(ebp + 0x10) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_004C2F04; /* jl: less (signed <) */

loc_004C2E98: ;
    ecx = MEM32(ebp + 0x1C);
    eax = edi + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0x44));
    eax = ebp + 0x20;
    PUSH32(esp, eax);
    eax = MEM32(ebp + 0x18);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(ebp + -4);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C2EBAu); RECOMP_ABI_CALL(0x004C2C47u, sub_004C2C47); /* call 0x004C2C47 */

loc_004C2EBA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(ebp + 0x10) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_004C2EC9; /* jl: less (signed <) */

loc_004C2EC1: ;
    ecx = MEM32(ebp + 0x1C);
    _fb = (uint32_t)(MEM32(ebp + 0x20)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + MEM32(ebp + 0x20);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_004C2ED3;

loc_004C2EC9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80152102u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x80152102u (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004C2F04; /* jne: not equal / not zero */

loc_004C2ED0: ;
    ecx = MEM32(ebp + 0x1C);

loc_004C2ED3: ;
    eax = MEM32(ebp + 0x34);
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    PUSH32(esp, MEM32(ebp + 0x18));
    ecx = MEM32(ebp + -4);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(ebp + 0x28));
    MEM32(esi + 0x4C) = eax;
    eax = MEM32(ebp + 0x38);
    MEM32(esi + 0x50) = eax;
    MEM32(esi + 0xE8) = eax;
    MEM32(esi + 0xEC) = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C2EFDu); RECOMP_ABI_CALL(0x004AD238u, sub_004AD238); /* call 0x004AD238 */

loc_004C2EFD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(ebp + 0x10) = eax;
    if (CMP_GE(_fas, _fbs)) goto loc_004C2F24; /* jge: greater or equal (signed >=) */

loc_004C2F04: ;
    eax = MEM32(edi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C2F14; /* je: equal / zero */

loc_004C2F0B: ;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C2F14u); RECOMP_ABI_CALL(0x004A5F87u, sub_004A5F87); /* call 0x004A5F87 */

loc_004C2F14: ;
    edi = MEM32(edi + 0x10);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C2F24; /* je: equal / zero */

loc_004C2F1B: ;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C2F24u); RECOMP_ABI_CALL(0x004A5F87u, sub_004A5F87); /* call 0x004A5F87 */

loc_004C2F24: ;
    eax = MEM32(ebp + 0x10);
    POP32(esp, edi);
    POP32(esp, esi);

loc_004C2F29: ;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 84; return; /* ret 80 */

}

/**
 * sub_004C2F2E
 * Original: 0x004C2F2E - 0x004C2FAF (129 bytes, 52 insns)
 * Category: game_network
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C2F2E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004C2F2E: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    edi = esi + 0x4F8;
    eax = MEM32(edi);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    ebx = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_004C2F4E; /* je: equal / zero */

loc_004C2F46: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004C2F4Cu); RECOMP_ABI_CALL(0x004A5F87u, sub_004A5F87); /* call 0x004A5F87 */

loc_004C2F4C: ;
    MEM32(edi) = ebp;

loc_004C2F4E: ;
    edi = esi + 0x610;
    eax = MEM32(edi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C2F64; /* je: equal / zero */

loc_004C2F5A: ;
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0x004C2F62u); RECOMP_ABI_CALL(0x004B2AA6u, sub_004B2AA6); /* call 0x004B2AA6 */

loc_004C2F62: ;
    MEM32(edi) = ebp;

loc_004C2F64: ;
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C2F91; /* je: equal / zero */

loc_004C2F6B: ;
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0x004C2F73u); RECOMP_ABI_CALL(0x004B5278u, sub_004B5278); /* call 0x004B5278 */

loc_004C2F73: ;
    _fa = (uint32_t)(MEM32(esi + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x18), ebp (32-bit) */
    ecx = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_004C2F84; /* je: equal / zero */

loc_004C2F7A: ;
    PUSH32(esp, MEM32(esi + 0xC));
    PUSH32(esp, 0x004C2F82u); RECOMP_ABI_CALL(0x004B5402u, sub_004B5402); /* call 0x004B5402 */

loc_004C2F82: ;
    goto loc_004C2F8E;

loc_004C2F84: ;
    PUSH32(esp, 0x50);
    PUSH32(esp, MEM32(esi + 0xC));
    PUSH32(esp, 0x004C2F8Eu); RECOMP_ABI_CALL(0x004B53C7u, sub_004B53C7); /* call 0x004B53C7 */

loc_004C2F8E: ;
    MEM32(esi + 0xC) = ebp;

loc_004C2F91: ;
    _fa = (uint32_t)(MEM32(esi + 0x1C)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x1C), ebp (32-bit) */
    ecx = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_004C2FA0; /* je: equal / zero */

loc_004C2F98: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004C2F9Eu); RECOMP_ABI_CALL(0x004B5402u, sub_004B5402); /* call 0x004B5402 */

loc_004C2F9E: ;
    goto loc_004C2FA8;

loc_004C2FA0: ;
    PUSH32(esp, 0x50);
    PUSH32(esp, esi);
    PUSH32(esp, 0x004C2FA8u); RECOMP_ABI_CALL(0x004B53C7u, sub_004B53C7); /* call 0x004B53C7 */

loc_004C2FA8: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004C2FAF
 * Original: 0x004C2FAF - 0x004C2FDB (44 bytes, 18 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C2FAF(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004C2FAF: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004C2FBA; /* jne: not equal / not zero */

loc_004C2FB3: ;
    eax = 0x80150005u;
    goto loc_004C2FD8;

loc_004C2FBA: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(MEM32(eax + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(9) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x10), 9 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004C2FD5; /* jne: not equal / not zero */

loc_004C2FC4: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    esi = eax + 0x57C;
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    POP32(esp, edi);
    POP32(esp, esi);

loc_004C2FD5: ;
    eax = MEM32(eax + 0x14);

loc_004C2FD8: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004C2FDB
 * Original: 0x004C2FDB - 0x004C3045 (106 bytes, 50 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C2FDB(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004C2FDB: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    PUSH32(esp, esi);
    PUSH32(esp, 0x004C2FECu); RECOMP_ABI_CALL(0x0046E45Au, sub_0046E45A); /* call 0x0046E45A */

loc_004C2FEC: ;
    PUSH32(esp, edi);
    ebx = eax;
    PUSH32(esp, 0x004C2FF4u); RECOMP_ABI_CALL(0x0046E45Au, sub_0046E45A); /* call 0x0046E45A */

loc_004C2FF4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (CMP_BE(_fa, _fb)) goto loc_004C2FFE; /* jbe: below or equal (unsigned <=) */

loc_004C2FFA: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_004C303B;

loc_004C2FFE: ;
    PUSH32(esp, ebp);
    goto loc_004C3023;

loc_004C3001: ;
    SET_LO16(ebx, MEM16(esi));
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(eax, MEM16(edi));
    PUSH32(esp, eax);
    PUSH32(esp, 0x004C300Fu); RECOMP_ABI_CALL(0x0047123Fu, sub_0047123F); /* call 0x0047123F */

loc_004C300F: ;
    PUSH32(esp, ebx);
    SET_LO16(ebp, LO16(eax));
    PUSH32(esp, 0x004C3018u); RECOMP_ABI_CALL(0x0047123Fu, sub_0047123F); /* call 0x0047123F */

loc_004C3018: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, ecx);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(LO16(ebp)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), LO16(ebp) (16-bit) */
    POP32(esp, ecx);
    if (CMP_NE(_fa, _fb)) goto loc_004C3041; /* jne: not equal / not zero */

loc_004C3023: ;
    _fa = (uint32_t)(MEM16(edi)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(edi), 0 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004C3001; /* jne: not equal / not zero */

loc_004C3029: ;
    SET_LO16(esi, MEM16(esi));
    _fa = (uint32_t)(LO16(esi)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(esi), 0 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C3037; /* je: equal / zero */

loc_004C3031: ;
    _fa = (uint32_t)(LO16(esi)) & 0xFFFFu; _fb = (uint32_t)(0x2E) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(esi), 0x2E (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004C3041; /* jne: not equal / not zero */

loc_004C3037: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_004C303A: ;
    POP32(esp, ebp);

loc_004C303B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_004C3041: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_004C303A;

}

/**
 * sub_004C3045
 * Original: 0x004C3045 - 0x004C3077 (50 bytes, 21 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C3045(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004C3045: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x2F);
    PUSH32(esp, eax);
    PUSH32(esp, 0x004C3055u); RECOMP_ABI_CALL(0x00470133u, sub_00470133); /* call 0x00470133 */

loc_004C3055: ;
    esi = eax;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0x2F);
    PUSH32(esp, esi);
    PUSH32(esp, 0x004C3061u); RECOMP_ABI_CALL(0x00470133u, sub_00470133); /* call 0x00470133 */

loc_004C3061: ;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(esp + 0x24));
    PUSH32(esp, 0x004C3070u); RECOMP_ABI_CALL(0x0046FCD6u, sub_0046FCD6); /* call 0x0046FCD6 */

loc_004C3070: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004C3077
 * Original: 0x004C3077 - 0x004C34E5 (1134 bytes, 334 insns)
 * Category: game_network
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004C3077(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004C3077: ;
    PUSH32(esp, ebp);
    ebp = esp + -116;
    _fb = (uint32_t)(0xA4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xA4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(ebp + 0x70) = MEM32(ebp + 0x70) & 0;
    _fa = (uint32_t)(MEM32(ebp + 0x70)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 0x7C);
    eax = MEM32(ebx + 0x10);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 9);
    POP32(esp, edi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    esi = ecx;
    MEM32(ebp + 0x6C) = esi;
    if (CMP_A(_fa, _fb)) goto loc_004C34D8; /* ja: above (unsigned >) */

loc_004C309F: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x4C34E5); /* switch: 10 entries, 9 targets */
    if (_jt == 0x004C30A6u) goto loc_004C30A6;
    if (_jt == 0x004C30E9u) goto loc_004C30E9;
    if (_jt == 0x004C32DCu) goto loc_004C32DC;
    if (_jt == 0x004C334Cu) goto loc_004C334C;
    if (_jt == 0x004C33C0u) goto loc_004C33C0;
    if (_jt == 0x004C3452u) goto loc_004C3452;
    if (_jt == 0x004C3476u) goto loc_004C3476;
    if (_jt == 0x004C34A1u) goto loc_004C34A1;
    if (_jt == 0x004C34D2u) goto loc_004C34D2;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_004C30A6: ;
    PUSH32(esp, MEM32(ebx + 0x4F8));
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C30B3u); RECOMP_ABI_CALL(0x004A5F72u, sub_004A5F72); /* call 0x004A5F72 */

loc_004C30B3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebp + 0x70) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_004C34D8; /* je: equal / zero */

loc_004C30BE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_004C30D1; /* jge: greater or equal (signed >=) */

loc_004C30C2: ;
    MEM32(ebx + 0x14) = eax;
    MEM32(ebx + 0x10) = 8;
    goto loc_004C34D8;

loc_004C30D1: ;
    MEM32(ebx + 0x10) = 1;

loc_004C30D8: ;
    PUSH32(esp, MEM32(ebx + 8));
    MEM32(ebp + 0x70) = MEM32(ebp + 0x70) & 0;
    _fa = (uint32_t)(MEM32(ebp + 0x70)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C30E4u); RECOMP_ABI_CALL(0x0042E2B1u, sub_0042E2B1); /* call 0x0042E2B1 */

loc_004C30E4: ;
    goto loc_004C34D8;

loc_004C30E9: ;
    PUSH32(esp, 0x25);
    POP32(esp, ecx);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = ebp + -48;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    eax = ebp + 0x64;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C30FCu); RECOMP_ABI_CALL(0x0042B5F7u, sub_0042B5F7); /* call 0x0042B5F7 */

loc_004C30FC: ;
    MEM32(ebp + 0x7C) = MEM32(ebp + 0x7C) & 0;
    _fa = (uint32_t)(MEM32(ebp + 0x7C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, 0x4C2FDB);
    PUSH32(esp, MEM32(ebx + 0x610));
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C3112u); RECOMP_ABI_CALL(0x004B20A7u, sub_004B20A7); /* call 0x004B20A7 */

loc_004C3112: ;
    eax = ebx + 0x590;
    edi = ebx + 0x4FC;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    MEM32(ebx + 0x61C) = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C312Bu); RECOMP_ABI_CALL(0x0046E49Au, sub_0046E49A); /* call 0x0046E49A */

loc_004C312B: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    eax = ebx + 0x614;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebx + 0x610));
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C3141u); RECOMP_ABI_CALL(0x004B38ACu, sub_004B38AC); /* call 0x004B38AC */

loc_004C3141: ;
    goto loc_004C31A8;

loc_004C3143: ;
    eax = ebp + 0x64;
    PUSH32(esp, eax);
    eax = ebx + 0x588;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C3153u); RECOMP_ABI_CALL(0x0042B812u, sub_0042B812); /* call 0x0042B812 */

loc_004C3153: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_004C31F0; /* jle: less or equal (signed <=) */

loc_004C315B: ;
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C3161u); RECOMP_ABI_CALL(0x0046E45Au, sub_0046E45A); /* call 0x0046E45A */

loc_004C3161: ;
    esi = eax;
    eax = ebp + -48;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C316Cu); RECOMP_ABI_CALL(0x0046E45Au, sub_0046E45A); /* call 0x0046E45A */

loc_004C316C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (CMP_AE(_fa, _fb)) goto loc_004C317C; /* jae: above or equal (unsigned >=) */

loc_004C3172: ;
    PUSH32(esp, 0x25);
    esi = edi;
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

loc_004C317C: ;
    esi = MEM32(ebp + 0x6C);

loc_004C317F: ;
    eax = ebx + 0x590;
    PUSH32(esp, eax);
    edi = ebx + 0x4FC;
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C3192u); RECOMP_ABI_CALL(0x0046E49Au, sub_0046E49A); /* call 0x0046E49A */

loc_004C3192: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    eax = ebx + 0x614;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebx + 0x610));
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C31A8u); RECOMP_ABI_CALL(0x004B390Eu, sub_004B390E); /* call 0x004B390E */

loc_004C31A8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebp + 0x70) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_004C30C2; /* jl: less (signed <) */

loc_004C31B3: ;
    _fa = (uint32_t)(MEM32(ebx + 0x614)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0x614), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004C3143; /* jne: not equal / not zero */

loc_004C31BC: ;
    eax = ebp + -48;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C31C5u); RECOMP_ABI_CALL(0x0046E45Au, sub_0046E45A); /* call 0x0046E45A */

loc_004C31C5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, ecx);
    if (CMP_BE(_fa, _fb)) goto loc_004C31F9; /* jbe: below or equal (unsigned <=) */

loc_004C31CA: ;
    PUSH32(esp, MEM32(ebx + 8));
    MEM32(ebp + 0x70) = MEM32(ebp + 0x70) & 0;
    _fa = (uint32_t)(MEM32(ebp + 0x70)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebx + 0x10) = 6;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C31DDu); RECOMP_ABI_CALL(0x0042E2B1u, sub_0042E2B1); /* call 0x0042E2B1 */

loc_004C31DD: ;
    PUSH32(esp, 0x25);
    edi = ebx + 0x57C;
    POP32(esp, ecx);
    esi = ebp + 0x50;
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
    esi = MEM32(ebp + 0x6C);
    goto loc_004C322E;

loc_004C31F0: ;
    MEM32(ebp + 0x7C) = 1;
    goto loc_004C317F;

loc_004C31F9: ;
    PUSH32(esp, 0x50);
    PUSH32(esp, 0x150);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C3207u); RECOMP_ABI_CALL(0x004B53EEu, sub_004B53EE); /* call 0x004B53EE */

loc_004C3207: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebx + 0xC) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_004C321B; /* jne: not equal / not zero */

loc_004C320E: ;
    eax = 0x8007000Eu;
    MEM32(ebx + 0x14) = eax;
    goto loc_004C34D5;

loc_004C321B: ;
    PUSH32(esp, MEM32(ebx + 8));
    MEM32(ebp + 0x70) = MEM32(ebp + 0x70) & 0;
    _fa = (uint32_t)(MEM32(ebp + 0x70)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebx + 0x10) = 2;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C322Eu); RECOMP_ABI_CALL(0x0042E2B1u, sub_0042E2B1); /* call 0x0042E2B1 */

loc_004C322E: ;
    _fa = (uint32_t)(MEM32(ebp + 0x7C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x7C), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C34D8; /* je: equal / zero */

loc_004C3238: ;
    PUSH32(esp, 0x25);
    POP32(esp, ecx);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x4C2FDB);
    PUSH32(esp, MEM32(ebx + 0x610));
    edi = ebp + -48;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C3254u); RECOMP_ABI_CALL(0x004B20A7u, sub_004B20A7); /* call 0x004B20A7 */

loc_004C3254: ;
    eax = ebp + -48;
    MEM32(ebx + 0x61C) = eax;
    eax = ebx + 0x590;
    PUSH32(esp, eax);
    eax = ebp + -48;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C326Du); RECOMP_ABI_CALL(0x0046E49Au, sub_0046E49A); /* call 0x0046E49A */

loc_004C326D: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    edi = ebx + 0x614;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebx + 0x610));
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C3283u); RECOMP_ABI_CALL(0x004B38ACu, sub_004B38AC); /* call 0x004B38AC */

loc_004C3283: ;
    goto loc_004C32D0;

loc_004C3285: ;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C34D8; /* je: equal / zero */

loc_004C328E: ;
    eax = ebp + 0x64;
    PUSH32(esp, eax);
    eax = ebx + 0x588;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C329Eu); RECOMP_ABI_CALL(0x0042B812u, sub_0042B812); /* call 0x0042B812 */

loc_004C329E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_004C32B0; /* jge: greater or equal (signed >=) */

loc_004C32A2: ;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebx + 0x610));
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C32B0u); RECOMP_ABI_CALL(0x004B3961u, sub_004B3961); /* call 0x004B3961 */

loc_004C32B0: ;
    eax = ebx + 0x590;
    PUSH32(esp, eax);
    eax = ebp + -48;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C32C0u); RECOMP_ABI_CALL(0x0046E49Au, sub_0046E49A); /* call 0x0046E49A */

loc_004C32C0: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebx + 0x610));
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C32D0u); RECOMP_ABI_CALL(0x004B390Eu, sub_004B390E); /* call 0x004B390E */

loc_004C32D0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebp + 0x70) = eax;
    if (CMP_GE(_fas, _fbs)) goto loc_004C3285; /* jge: greater or equal (signed >=) */

loc_004C32D7: ;
    goto loc_004C34D8;

loc_004C32DC: ;
    eax = ebx + 0x590;
    PUSH32(esp, eax);
    eax = ebx + 0x22;
    PUSH32(esp, eax);
    edi = ebx + 0x20;
    PUSH32(esp, edi);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C32F2u); RECOMP_ABI_CALL(0x004ADEF6u, sub_004ADEF6); /* call 0x004ADEF6 */

loc_004C32F2: ;
    ecx = ZX16(MEM16(edi));
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebx + 0xC));
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, MEM32(ebx + 8));
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0xEA60);
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(0x883154));
    ecx = ebx + 0xDF;
    PUSH32(esp, MEM32(0x883150));
    PUSH32(esp, 0x416);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x883188);
    PUSH32(esp, eax);
    PUSH32(esp, 0xE);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C332Fu); RECOMP_ABI_CALL(0x004ADC62u, sub_004ADC62); /* call 0x004ADC62 */

loc_004C332F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebp + 0x70) = eax;
    if (CMP_GE(_fas, _fbs)) goto loc_004C3340; /* jge: greater or equal (signed >=) */

loc_004C3336: ;
    MEM32(ebx + 0x14) = eax;
    MEM32(ebx + 0x10) = 8;

loc_004C3340: ;
    MEM32(ebx + 0x10) = 3;
    goto loc_004C34D8;

loc_004C334C: ;
    PUSH32(esp, MEM32(ebx + 0xC));
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C3356u); RECOMP_ABI_CALL(0x004A5F72u, sub_004A5F72); /* call 0x004A5F72 */

loc_004C3356: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebp + 0x70) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_004C34D8; /* je: equal / zero */

loc_004C3361: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1500F0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1500F0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C3377; /* je: equal / zero */

loc_004C3368: ;
    MEM32(ebx + 0x10) = 8;
    MEM32(ebx + 0x14) = eax;
    goto loc_004C34D8;

loc_004C3377: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x25);
    POP32(esp, ecx);
    edi = ebx + 0x4FC;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    _fa = (uint32_t)(MEM32(ebx + 0x610)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0x610), 0 (32-bit) */
    eax = MEM32(ebx + 0xEB);
    esi = ebx + 0xDF;
    edi = ebx + 0x57C;
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(ebx + 0x588) = eax;
    eax = MEM32(ebx + 0xEF);
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(ebx + 0x58C) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_004C3432; /* je: equal / zero */

loc_004C33B4: ;
    MEM32(ebx + 0x10) = 4;
    goto loc_004C30D8;

loc_004C33C0: ;
    PUSH32(esp, 0x3F);
    eax = ebx + 0x4FC;
    PUSH32(esp, eax);
    eax = ZX16(MEM16(ebx + 0xF3));
    PUSH32(esp, eax);
    eax = ebx + 0xF5;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0xFDE9);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C33E4u); RECOMP_ABI_CALL(0x0047E7BEu, sub_0047E7BE); /* call 0x0047E7BE */

loc_004C33E4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004C3400; /* jne: not equal / not zero */

loc_004C33E8: ;
    _fa = (uint32_t)(MEM16(ebx + 0xF3)) & 0xFFFFu; _fb = (uint32_t)(LO16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ebx + 0xF3), LO16(eax) (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C3400; /* je: equal / zero */

loc_004C33F1: ;
    MEM32(ebx + 0x14) = 0x1500F1;
    MEM32(ebx + 0x10) = edi;
    goto loc_004C34D8;

loc_004C3400: ;
    PUSH32(esp, 0);
    edi = ebx + 0x610;
    PUSH32(esp, MEM32(edi));
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C3411u); RECOMP_ABI_CALL(0x004B20A7u, sub_004B20A7); /* call 0x004B20A7 */

loc_004C3411: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    eax = ebx + 0x4FC;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebx + 0x4F8));
    ecx = esi;
    PUSH32(esp, MEM32(edi));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C342Bu); RECOMP_ABI_CALL(0x004B4516u, sub_004B4516); /* call 0x004B4516 */

loc_004C342B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebp + 0x70) = eax;
    if (CMP_GE(_fas, _fbs)) goto loc_004C3446; /* jge: greater or equal (signed >=) */

loc_004C3432: ;
    eax = 0x1500F1;
    MEM32(ebx + 0x14) = eax;
    MEM32(ebx + 0x10) = 9;
    goto loc_004C34D5;

loc_004C3446: ;
    MEM32(ebx + 0x10) = 5;
    goto loc_004C34D8;

loc_004C3452: ;
    PUSH32(esp, MEM32(ebx + 0x4F8));
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C345Fu); RECOMP_ABI_CALL(0x004A5F72u, sub_004A5F72); /* call 0x004A5F72 */

loc_004C345F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebp + 0x70) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_004C34D8; /* je: equal / zero */

loc_004C3466: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_004C348D; /* jl: less (signed <) */

loc_004C346A: ;
    MEM32(ebx + 0x10) = 6;
    goto loc_004C30D8;

loc_004C3476: ;
    PUSH32(esp, MEM32(ebx + 0x4F8));
    ecx = esi;
    PUSH32(esp, MEM32(ebx + 0x610));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C3489u); RECOMP_ABI_CALL(0x004B39B7u, sub_004B39B7); /* call 0x004B39B7 */

loc_004C3489: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_004C349A; /* jge: greater or equal (signed >=) */

loc_004C348D: ;
    eax = 0x1500F1;
    MEM32(ebx + 0x14) = eax;
    MEM32(ebx + 0x10) = edi;
    goto loc_004C34D5;

loc_004C349A: ;
    MEM32(ebx + 0x10) = 7;

loc_004C34A1: ;
    PUSH32(esp, MEM32(ebx + 0x4F8));
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C34AEu); RECOMP_ABI_CALL(0x004A5F72u, sub_004A5F72); /* call 0x004A5F72 */

loc_004C34AE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebp + 0x70) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_004C34D8; /* je: equal / zero */

loc_004C34B5: ;
    _fa = (uint32_t)(MEM32(ebp + 0x70)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x70), 0 (32-bit) */
    eax = 0x1500F1;
    MEM32(ebx + 0x10) = edi;
    MEM32(ebx + 0x14) = eax;
    MEM32(ebp + 0x70) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_004C34D8; /* jl: less (signed <) */

loc_004C34C9: ;
    MEM32(ebx + 0x610) = MEM32(ebx + 0x610) & 0;
    _fa = (uint32_t)(MEM32(ebx + 0x610)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    goto loc_004C34D8;

loc_004C34D2: ;
    eax = MEM32(ebx + 0x14);

loc_004C34D5: ;
    MEM32(ebp + 0x70) = eax;

loc_004C34D8: ;
    eax = MEM32(ebp + 0x70);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x74) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0x74;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004C350D
 * Original: 0x004C350D - 0x004C3558 (75 bytes, 33 insns)
 * Category: game_network
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004C350D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004C350D: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = ebp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0xF);
    PUSH32(esp, MEM32(ebp + 8));
    esi = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C3522u); RECOMP_ABI_CALL(0x0048D86Fu, sub_0048D86F); /* call 0x0048D86F */

loc_004C3522: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004C3550; /* jne: not equal / not zero */

loc_004C3528: ;
    eax = ebp + 8;
    eax = MEM32(eax);
    _fb = (uint32_t)(0x1B9C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x1B9C;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C3548; /* je: equal / zero */

loc_004C3537: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C3543; /* je: equal / zero */

loc_004C353D: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C3543u); RECOMP_ABI_CALL(0x0048D89Du, sub_0048D89D); /* call 0x0048D89D */

loc_004C3543: ;
    eax = MEM32(ebp + 8);
    MEM32(esi) = eax;

loc_004C3548: ;
    eax = MEM32(ebp + 0xC);
    ecx = MEM32(ebp + 8);
    MEM32(eax) = ecx;

loc_004C3550: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004C3558
 * Original: 0x004C3558 - 0x004C3669 (273 bytes, 89 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004C3558(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004C3558: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ebx = ecx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    MEM32(ebp + -4) = ebx;
    if (CMP_NE(_fa, _fb)) goto loc_004C3570; /* jne: not equal / not zero */

loc_004C3566: ;
    eax = 0x80150005u;
    goto loc_004C3664;

loc_004C3570: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0x10);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    PUSH32(esp, 0x50);
    ecx = ebx;
    PUSH32(esp, 0x628);
    if (CMP_EQ(_fa, _fb)) goto loc_004C3589; /* je: equal / zero */

loc_004C3582: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C3587u); RECOMP_ABI_CALL(0x004B53EEu, sub_004B53EE); /* call 0x004B53EE */

loc_004C3587: ;
    goto loc_004C358E;

loc_004C3589: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C358Eu); RECOMP_ABI_CALL(0x004B5395u, sub_004B5395); /* call 0x004B5395 */

loc_004C358E: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004C35A0; /* jne: not equal / not zero */

loc_004C3594: ;
    MEM32(ebp + 8) = 0x8007000Eu;
    goto loc_004C365F;

loc_004C35A0: ;
    eax = esi + 0x590;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    MEM32(esi + 0x1C) = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C35B2u); RECOMP_ABI_CALL(0x004C3045u, sub_004C3045); /* call 0x004C3045 */

loc_004C35B2: ;
    PUSH32(esp, esi);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C35BAu); RECOMP_ABI_CALL(0x004A5F61u, sub_004A5F61); /* call 0x004A5F61 */

loc_004C35BA: ;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 0 (32-bit) */
    eax = MEM32(ebp + 0x14);
    MEM32(esi + 0x14) = 0x80004005u;
    MEM32(esi) = 0x4C3077;
    MEM32(esi + 4) = 0x4C2F2E;
    MEM32(esi + 8) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_004C3616; /* jne: not equal / not zero */

loc_004C35DA: ;
    ecx = MEM32(ebp + -4);
    MEM32(esi + 0x10) = MEM32(esi + 0x10) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x10)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edi = esi + 0x4F8;
    PUSH32(esp, edi);
    ebx = esi + 0x610;
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(ebp + 0x10));
    MEM32(esi + 0x18) = 1;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0xA);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C3603u); RECOMP_ABI_CALL(0x004B4419u, sub_004B4419); /* call 0x004B4419 */

loc_004C3603: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebp + 8) = eax;
    if (CMP_GE(_fas, _fbs)) goto loc_004C365A; /* jge: greater or equal (signed >=) */

loc_004C360A: ;
    MEM32(ebx) = MEM32(ebx) & 0;
    _fa = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(edi) = MEM32(edi) & 0;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebx = MEM32(ebp + -4);
    edi = MEM32(ebp + 0x10);

loc_004C3616: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    PUSH32(esp, 0x50);
    MEM32(esi + 0x18) = edi;
    ecx = ebx;
    PUSH32(esp, 0x150);
    if (CMP_EQ(_fa, _fb)) goto loc_004C362D; /* je: equal / zero */

loc_004C3626: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C362Bu); RECOMP_ABI_CALL(0x004B53EEu, sub_004B53EE); /* call 0x004B53EE */

loc_004C362B: ;
    goto loc_004C3632;

loc_004C362D: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C3632u); RECOMP_ABI_CALL(0x004B5395u, sub_004B5395); /* call 0x004B5395 */

loc_004C3632: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi + 0xC) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_004C364F; /* jne: not equal / not zero */

loc_004C3639: ;
    _fa = (uint32_t)(MEM32(esi + 0x1C)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x1C), eax (32-bit) */
    MEM32(ebp + 8) = 0x8007000Eu;
    if (CMP_EQ(_fa, _fb)) goto loc_004C365F; /* je: equal / zero */

loc_004C3645: ;
    PUSH32(esp, esi);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C364Du); RECOMP_ABI_CALL(0x004B5402u, sub_004B5402); /* call 0x004B5402 */

loc_004C364D: ;
    goto loc_004C365F;

loc_004C364F: ;
    MEM32(ebp + 8) = MEM32(ebp + 8) & 0;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi + 0x10) = 2;

loc_004C365A: ;
    eax = MEM32(ebp + 0x18);
    MEM32(eax) = esi;

loc_004C365F: ;
    eax = MEM32(ebp + 8);
    POP32(esp, edi);
    POP32(esp, esi);

loc_004C3664: ;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 24; return; /* ret 20 */

}

/**
 * sub_004C3680
 * Original: 0x004C3680 - 0x004C369F (31 bytes, 12 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C3680(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004C3680: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C369C; /* je: equal / zero */

loc_004C368A: ;
    edx = MEM32(eax + 4);
    MEM32(ecx + 4) = edx;
    ecx = MEM32(eax + 4);
    edx = MEM32(eax);
    MEM32(ecx) = edx;
    MEM32(eax + 4) = eax;
    MEM32(eax) = eax;

loc_004C369C: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004C369F
 * Original: 0x004C369F - 0x004C36B0 (17 bytes, 5 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C369F(void)
{

loc_004C369F: ;
    PUSH32(esp, 1);
    PUSH32(esp, MEM32(esp + 8));
    PUSH32(esp, 0x626F5344);
    PUSH32(esp, 0x004C36AFu); RECOMP_ABI_CALL(0x004C6B07u, sub_004C6B07); /* call 0x004C6B07 */

loc_004C36AF: ;
    esp += 4; return; /* ret */

}

/**
 * sub_004C36B0
 * Original: 0x004C36B0 - 0x004C36D2 (34 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C36B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_004C36B0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = ZX8(MEM8(XBOX_FS_BASE + 0x24));
    SET_LO8(ecx, 2);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ecx) (8-bit) */
    _cf = (int)(_fa < _fb);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(esi + 4) = eax;
    if ((_fa == 0)) goto loc_004C36D0; /* je: equal / zero */

loc_004C36C8: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x561204); PUSH32(esp, 0x004C36CEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C36C8u); } /* indirect call */
    }

loc_004C36CE: ;
    MEM8(esi) = LO8(eax);

loc_004C36D0: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004C36D2
 * Original: 0x004C36D2 - 0x004C36E9 (23 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C36D2(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004C36D2: ;
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C36E7; /* je: equal / zero */

loc_004C36DB: ;
    SET_LO8(ecx, MEM8(esi));
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x5610E8); PUSH32(esp, 0x004C36E3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C36DDu); } /* indirect call */
    }

loc_004C36E3: ;
    MEM32(esi + 4) = MEM32(esi + 4) & 0;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_004C36E7: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004C36E9
 * Original: 0x004C36E9 - 0x004C370E (37 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C36E9(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004C36E9: ;
    eax = MEM32(XBOX_FS_BASE + 0x58);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C370D; /* je: equal / zero */

loc_004C36F3: ;
    eax = MEM32(0x4E1620);
    MEM32(0x4E1620) = MEM32(0x4E1620) + 1;
    _fa = (uint32_t)(MEM32(0x4E1620)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004C370D; /* jne: not equal / not zero */

loc_004C3702: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x4E1CF4);
    { uint32_t _icall_target = MEM32(0x5611F8); PUSH32(esp, 0x004C370Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C3707u); } /* indirect call */
    }

loc_004C370D: ;
    esp += 4; return; /* ret */

}

/**
 * sub_004C370E
 * Original: 0x004C370E - 0x004C372C (30 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C370E(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004C370E: ;
    eax = MEM32(XBOX_FS_BASE + 0x58);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C372B; /* je: equal / zero */

loc_004C3718: ;
    MEM32(0x4E1620) = MEM32(0x4E1620) - 1;
    _fa = (uint32_t)(MEM32(0x4E1620)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_004C372B; /* jne: not equal / not zero */

loc_004C3720: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x4E1CF4);
    { uint32_t _icall_target = MEM32(0x5611F4); PUSH32(esp, 0x004C372Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C3725u); } /* indirect call */
    }

loc_004C372B: ;
    esp += 4; return; /* ret */

}

/**
 * sub_004C372C
 * Original: 0x004C372C - 0x004C3739 (13 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C372C(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004C372C: ;
    eax = MEM32(esp + 4);
    MEM32(eax + 4) = MEM32(eax + 4) + 1;
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = MEM32(eax + 4);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004C3739
 * Original: 0x004C3739 - 0x004C374A (17 bytes, 6 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C3739(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004C3739: ;
    ecx = MEM32(esp + 4);
    MEM32(ecx + 4) = MEM32(ecx + 4) & 0;
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004C3747u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C3745u); } /* indirect call */
    }

loc_004C3747: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004C374A
 * Original: 0x004C374A - 0x004C376B (33 bytes, 14 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C374A(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004C374A: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(ecx + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_004C3765; /* jbe: below or equal (unsigned <=) */

loc_004C3755: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(ecx + 4) = eax;
    if ((_fa != 0)) goto loc_004C3765; /* jne: not equal / not zero */

loc_004C375B: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x004C3761u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C375Eu); } /* indirect call */
    }

loc_004C3761: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_004C3768;

loc_004C3765: ;
    eax = MEM32(ecx + 4);

loc_004C3768: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004C376B
 * Original: 0x004C376B - 0x004C3774 (9 bytes, 2 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C376B(void)
{

loc_004C376B: ;
    eax = (uint32_t)recomp_cvt_si32((double)MEMF(esp + 4), g_mxcsr, 1); /* cvttss2si */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004C3774
 * Original: 0x004C3774 - 0x004C37BD (73 bytes, 23 insns)
 * Category: game_audio
 * CC: cdecl, 1 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_004C3774(void)
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

loc_004C3774: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x648CF8)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x648cf8] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_004C378C; /* jp: parity */

loc_004C3785: ;
    eax = 0xFFFFD8F0u;
    goto loc_004C37BA;

loc_004C378C: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x648D14)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x648d14] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_004C37A1; /* jne: not equal / not zero */

loc_004C379D: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_004C37BA;

loc_004C37A1: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    PUSH32(esp, ecx);
    fp_push(0.30102999566398119521); /* fldlg2 */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    { fp_st1() = fp_st1() * log2(fp_top()); fp_pop(); } /* fyl2x */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x6493C0)); /* fmul dword ptr [0x6493c0] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x004C37BAu); RECOMP_ABI_CALL(0x004C376Bu, sub_004C376B); /* call 0x004C376B */

loc_004C37BA: ;
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_004C37BD
 * Original: 0x004C37BD - 0x004C37C1 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C37BD(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004C37BD: ;
    { uint32_t _bs_v = (uint32_t)(ecx); int _bs_i;
      _fa = _bs_v; _fb = 0; _fas = (int32_t)_fa; _fbs = 0; /* bsf: ZF = src == 0 */
      if (_bs_v) {
        for (_bs_i = 0; _bs_i < 32; _bs_i++)
          if (_bs_v & (1u << _bs_i)) break;
        eax = (uint32_t)_bs_i;;
      } else { (void)(eax); } }
    esp += 4; return; /* ret */

}

/**
 * sub_004C37C1
 * Original: 0x004C37C1 - 0x004C37EA (41 bytes, 15 insns)
 * CC: cdecl, 8 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004C37C1(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_004C37C1: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + 0x24));
    fp_push(MEMF(ebp + 0x1C)); /* fld float */
    PUSH32(esp, MEM32(ebp + 0x20));
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, MEM32(ebp + 0x18));
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ebp + 8));
    { uint32_t _icall_target = MEM32(0x4E1D20); PUSH32(esp, 0x004C37E6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C37E0u); } /* indirect call */
    }

loc_004C37E6: ;
    POP32(esp, ebp);
    esp += 36; return; /* ret 32 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_004C37EA
 * Original: 0x004C37EA - 0x004C3821 (55 bytes, 19 insns)
 * CC: cdecl, 8 params, returns float_sse
 * Frame: standard_frame
 */
void sub_004C37EA(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
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

loc_004C37EA: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + 0x24));
    fp_push(MEMF(ebp + 0x1C)); /* fld float */
    PUSH32(esp, MEM32(ebp + 0x20));
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, MEM32(ebp + 0x18));
    fp_push(MEMF(ebp + 0x10)); /* fld float */
    PUSH32(esp, MEM32(ebp + 0x14));
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + 0xC)); /* fld float */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + 8)); /* fld float */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    { uint32_t _icall_target = MEM32(0x4E1D2C); PUSH32(esp, 0x004C381Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C3817u); } /* indirect call */
    }

loc_004C381D: ;
    POP32(esp, ebp);
    esp += 36; return; /* ret 32 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_004C3821
 * Original: 0x004C3821 - 0x004C3841 (32 bytes, 12 insns)
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004C3821(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_004C3821: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + 0x18));
    fp_push(MEMF(ebp + 0x14)); /* fld float */
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ebp + 8));
    { uint32_t _icall_target = MEM32(0x4E1D30); PUSH32(esp, 0x004C383Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C3837u); } /* indirect call */
    }

loc_004C383D: ;
    POP32(esp, ebp);
    esp += 24; return; /* ret 20 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_004C3841
 * Original: 0x004C3841 - 0x004C3875 (52 bytes, 17 insns)
 * CC: cdecl, 7 params, returns float_sse
 * Frame: standard_frame
 */
void sub_004C3841(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
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

loc_004C3841: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + 0x20));
    fp_push(MEMF(ebp + 0x14)); /* fld float */
    PUSH32(esp, MEM32(ebp + 0x1C));
    PUSH32(esp, MEM32(ebp + 0x18));
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + 0x10)); /* fld float */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + 0xC)); /* fld float */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + 8)); /* fld float */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    { uint32_t _icall_target = MEM32(0x4E1D34); PUSH32(esp, 0x004C3871u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C386Bu); } /* indirect call */
    }

loc_004C3871: ;
    POP32(esp, ebp);
    esp += 32; return; /* ret 28 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_004C3875
 * Original: 0x004C3875 - 0x004C3897 (34 bytes, 10 insns)
 * CC: cdecl, 4 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_004C3875(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_004C3875: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esp + 0x10));
    fp_push(MEMF(esp + 0xC)); /* fld float */
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    { uint32_t _icall_target = MEM32(0x4E1D38); PUSH32(esp, 0x004C3894u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C388Eu); } /* indirect call */
    }

loc_004C3894: ;
    esp += 20; return; /* ret 16 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_004C3897
 * Original: 0x004C3897 - 0x004C38BE (39 bytes, 10 insns)
 * CC: cdecl, 4 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_004C3897(void)
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

loc_004C3897: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esp + 0x10));
    fp_push(MEMF(esp + 0x10)); /* fld float */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    { uint32_t _icall_target = MEM32(0x4E1D3C); PUSH32(esp, 0x004C38BBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C38B5u); } /* indirect call */
    }

loc_004C38BB: ;
    esp += 20; return; /* ret 16 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_004C38BE
 * Original: 0x004C38BE - 0x004C38DC (30 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C38BE(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004C38BE: ;
    eax = ZX8(MEM8(XBOX_FS_BASE + 0x24));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C38CD; /* je: equal / zero */

loc_004C38CA: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_004C38CD: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x4E1674);
    { uint32_t _icall_target = MEM32(0x561004); PUSH32(esp, 0x004C38D8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C38D2u); } /* indirect call */
    }

loc_004C38D8: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 4; return; /* ret */

}

/**
 * sub_004C38DC
 * Original: 0x004C38DC - 0x004C390B (47 bytes, 14 insns)
 * Category: game_audio
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C38DC(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004C38DC: ;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(esp + 0x10));
    esi = ecx;
    PUSH32(esp, MEM32(esp + 0x10));
    ecx = MEM32(esi + 0x14);
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, 0x004C38F3u); RECOMP_ABI_CALL(0x004C78AAu, sub_004C78AA); /* call 0x004C78AA */

loc_004C38F3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_004C3900; /* jl: less (signed <) */

loc_004C38F7: ;
    MEM32(esi + 0x80) = MEM32(esi + 0x80) | 1;
    _fa = (uint32_t)(MEM32(esi + 0x80)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_004C3907;

loc_004C3900: ;
    MEM32(esi + 0x80) = MEM32(esi + 0x80) & 0xFFFFFFFEu;
    _fa = (uint32_t)(MEM32(esi + 0x80)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_004C3907: ;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_004C390B
 * Original: 0x004C390B - 0x004C394A (63 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C390B(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004C390B: ;
    eax = MEM32(ecx + 0x80);
    edx = ZX8(MEM8(eax + 0xF));
    PUSH32(esp, esi);
    esi = ZX8(MEM8(eax + 0xE));
    edx = (uint32_t)((int32_t)edx * (int32_t)esi);
    edx = edx >> 3;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx << 5;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(eax + 0x14) (32-bit) */
    POP32(esp, esi);
    if (CMP_BE(_fa, _fb)) goto loc_004C393E; /* jbe: below or equal (unsigned <=) */

loc_004C3929: ;
    ecx = eax;
    eax = ZX8(MEM8(ecx + 0xF));
    ecx = ZX8(MEM8(ecx + 0xE));
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx);
    eax = eax >> 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax << 5;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    goto loc_004C3947;

loc_004C393E: ;
    eax = MEM32(ecx + 0x80);
    eax = MEM32(eax + 0x14);

loc_004C3947: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_004C394A
 * Original: 0x004C394A - 0x004C3960 (22 bytes, 9 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C394A(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_004C394A: ;
    eax = MEM32(esp + 4);
    ecx = eax + -8;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    eax = eax & ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ecx + 8); PUSH32(esp, 0x004C395Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C395Au); } /* indirect call */
    }

loc_004C395D: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004C3960
 * Original: 0x004C3960 - 0x004C3976 (22 bytes, 9 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C3960(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_004C3960: ;
    eax = MEM32(esp + 4);
    ecx = eax + -28;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    eax = eax & ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ecx + 8); PUSH32(esp, 0x004C3973u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C3970u); } /* indirect call */
    }

loc_004C3973: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004C3976
 * Original: 0x004C3976 - 0x004C3995 (31 bytes, 10 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C3976(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004C3976: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004C397Cu); RECOMP_ABI_CALL(0x004C38BEu, sub_004C38BE); /* call 0x004C38BE */

loc_004C397C: ;
    esi = ZX8(LO8(eax));
    PUSH32(esp, 0x004C3984u); RECOMP_ABI_CALL(0x004C753Au, sub_004C753A); /* call 0x004C753A */

loc_004C3984: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    POP32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_004C3994; /* je: equal / zero */

loc_004C3989: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x4E1674);
    { uint32_t _icall_target = MEM32(0x561008); PUSH32(esp, 0x004C3994u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C398Eu); } /* indirect call */
    }

loc_004C3994: ;
    esp += 4; return; /* ret */

}

/**
 * sub_004C3995
 * Original: 0x004C3995 - 0x004C39DF (74 bytes, 26 insns)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004C3995(void)
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

loc_004C3995: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, esi);
    ecx = ebp + 8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C39A1u); RECOMP_ABI_CALL(0x004C36E9u, sub_004C36E9); /* call 0x004C36E9 */

loc_004C39A1: ;
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xBB80) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xBB80 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004C39AF; /* jne: not equal / not zero */

loc_004C39AB: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_004C39D0;

loc_004C39AF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebp + 8) = eax;
    fp_push((double)SMEM32(ebp + 8)); /* fild */
    if (CMP_GE(_fas, _fbs)) goto loc_004C39BF; /* jge: greater or equal (signed >=) */

loc_004C39B9: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x648CE8)); /* fadd dword ptr [0x648ce8] */

loc_004C39BF: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x649318)); /* fmul dword ptr [0x649318] */
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C39CEu); RECOMP_ABI_CALL(0x004C95A3u, sub_004C95A3); /* call 0x004C95A3 */

loc_004C39CE: ;
    esi = eax;

loc_004C39D0: ;
    ecx = ebp + 8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C39D8u); RECOMP_ABI_CALL(0x004C370Eu, sub_004C370E); /* call 0x004C370E */

loc_004C39D8: ;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_004C39DF
 * Original: 0x004C39DF - 0x004C39E4 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C39DF(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004C39DF: ;
    g_seh_ebp = ebp; sub_004C6BA3(); return; /* tail jmp 0x004C6BA3 */

}

/**
 * sub_004C39E4
 * Original: 0x004C39E4 - 0x004C39E9 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C39E4(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004C39E4: ;
    g_seh_ebp = ebp; sub_004C6BED(); return; /* tail jmp 0x004C6BED */

}

/**
 * sub_004C39E9
 * Original: 0x004C39E9 - 0x004C3A0B (34 bytes, 15 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C39E9(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004C39E9: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C39FE; /* je: equal / zero */

loc_004C39F1: ;
    edx = MEM32(eax);
    MEM32(ecx + 8) = edx;
    eax = MEM32(eax + 4);
    MEM32(ecx + 0xC) = eax;
    goto loc_004C3A08;

loc_004C39FE: ;
    PUSH32(esp, edi);
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edi = ecx + 8;
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    POP32(esp, edi);

loc_004C3A08: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004C3A0B
 * Original: 0x004C3A0B - 0x004C3A28 (29 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C3A0B(void)
{

loc_004C3A0B: ;
    eax = ecx;
    ecx = eax + 0x10;
    MEM32(eax + 4) = 2;
    MEM32(eax) = 0x585FE8;
    MEM32(0x4E1CF0) = eax;
    MEM32(eax + 0x14) = ecx;
    MEM32(ecx) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_004C3A28
 * Original: 0x004C3A28 - 0x004C3A6F (71 bytes, 21 insns)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C3A28(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004C3A28: ;
    PUSH32(esp, 0x004C3A2Du); RECOMP_ABI_CALL(0x004C38BEu, sub_004C38BE); /* call 0x004C38BE */

loc_004C3A2D: ;
    _fa = (uint32_t)(MEM32(0x4E1668)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x4E1668), 0 (32-bit) */
    ecx = ZX8(LO8(eax));
    if (CMP_EQ(_fa, _fb)) goto loc_004C3A4F; /* je: equal / zero */

loc_004C3A39: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C3A48; /* je: equal / zero */

loc_004C3A3D: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x4E1674);
    { uint32_t _icall_target = MEM32(0x561008); PUSH32(esp, 0x004C3A48u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C3A42u); } /* indirect call */
    }

loc_004C3A48: ;
    eax = 0x80004005u;
    goto loc_004C3A6C;

loc_004C3A4F: ;
    eax = MEM32(esp + 4);
    MEM32(eax + 4) = MEM32(eax + 4) + 1;
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    PUSH32(esp, esi);
    esi = MEM32(eax + 4);
    if (CMP_EQ(_fa, _fb)) goto loc_004C3A69; /* je: equal / zero */

loc_004C3A5E: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x4E1674);
    { uint32_t _icall_target = MEM32(0x561008); PUSH32(esp, 0x004C3A69u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C3A63u); } /* indirect call */
    }

loc_004C3A69: ;
    eax = esi;
    POP32(esp, esi);

loc_004C3A6C: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004C3A6F
 * Original: 0x004C3A6F - 0x004C3AA9 (58 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C3A6F(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004C3A6F: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x585FE8;
    MEM32(0x4E1CF0) = MEM32(0x4E1CF0) & 0;
    _fa = (uint32_t)(MEM32(0x4E1CF0)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C3A90; /* je: equal / zero */

loc_004C3A86: ;
    ecx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ecx + 8); PUSH32(esp, 0x004C3A8Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C3A89u); } /* indirect call */
    }

loc_004C3A8C: ;
    MEM32(esi + 0xC) = MEM32(esi + 0xC) & 0;
    _fa = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_004C3A90: ;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C3AA1; /* je: equal / zero */

loc_004C3A97: ;
    ecx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ecx + 8); PUSH32(esp, 0x004C3A9Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C3A9Au); } /* indirect call */
    }

loc_004C3A9D: ;
    MEM32(esi + 8) = MEM32(esi + 8) & 0;
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_004C3AA1: ;
    MEM32(esi) = 0x586074;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004C3AA9
 * Original: 0x004C3AA9 - 0x004C3B0D (100 bytes, 33 insns)
 * Category: game_audio
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004C3AA9(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004C3AA9: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C3AB2u); RECOMP_ABI_CALL(0x004C38BEu, sub_004C38BE); /* call 0x004C38BE */

loc_004C3AB2: ;
    _fa = (uint32_t)(MEM32(0x4E1668)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x4E1668), 0 (32-bit) */
    edi = ZX8(LO8(eax));
    if (CMP_EQ(_fa, _fb)) goto loc_004C3AD4; /* je: equal / zero */

loc_004C3ABE: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C3ACD; /* je: equal / zero */

loc_004C3AC2: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x4E1674);
    { uint32_t _icall_target = MEM32(0x561008); PUSH32(esp, 0x004C3ACDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C3AC7u); } /* indirect call */
    }

loc_004C3ACD: ;
    eax = 0x80004005u;
    goto loc_004C3B08;

loc_004C3AD4: ;
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    PUSH32(esp, MEM32(ebp + 0x14));
    ecx = MEM32(esi + 8);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C3AE3u); RECOMP_ABI_CALL(0x004C39E9u, sub_004C39E9); /* call 0x004C39E9 */

loc_004C3AE3: ;
    PUSH32(esp, MEM32(ebp + 0x18));
    ecx = MEM32(esi + 0xC);
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, MEM32(ebp + 0xC));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C3AF4u); RECOMP_ABI_CALL(0x004C38DCu, sub_004C38DC); /* call 0x004C38DC */

loc_004C3AF4: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    esi = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_004C3B05; /* je: equal / zero */

loc_004C3AFA: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x4E1674);
    { uint32_t _icall_target = MEM32(0x561008); PUSH32(esp, 0x004C3B05u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C3AFFu); } /* indirect call */
    }

loc_004C3B05: ;
    eax = esi;
    POP32(esp, esi);

loc_004C3B08: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    esp += 24; return; /* ret 20 */

}

/**
 * sub_004C3B0D
 * Original: 0x004C3B0D - 0x004C3B6F (98 bytes, 33 insns)
 * Category: game_audio
 * CC: cdecl, 6 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004C3B0D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004C3B0D: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C3B16u); RECOMP_ABI_CALL(0x004C38BEu, sub_004C38BE); /* call 0x004C38BE */

loc_004C3B16: ;
    _fa = (uint32_t)(MEM32(0x4E1668)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x4E1668), 0 (32-bit) */
    esi = ZX8(LO8(eax));
    if (CMP_EQ(_fa, _fb)) goto loc_004C3B38; /* je: equal / zero */

loc_004C3B22: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C3B31; /* je: equal / zero */

loc_004C3B26: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x4E1674);
    { uint32_t _icall_target = MEM32(0x561008); PUSH32(esp, 0x004C3B31u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C3B2Bu); } /* indirect call */
    }

loc_004C3B31: ;
    eax = 0x80004005u;
    goto loc_004C3B6A;

loc_004C3B38: ;
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 0xC);
    ecx = MEM32(eax + 0x14);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + 0x1C));
    PUSH32(esp, MEM32(ebp + 0x18));
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, MEM32(ebp + 0xC));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C3B56u); RECOMP_ABI_CALL(0x004C7943u, sub_004C7943); /* call 0x004C7943 */

loc_004C3B56: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    edi = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_004C3B67; /* je: equal / zero */

loc_004C3B5C: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x4E1674);
    { uint32_t _icall_target = MEM32(0x561008); PUSH32(esp, 0x004C3B67u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C3B61u); } /* indirect call */
    }

loc_004C3B67: ;
    eax = edi;
    POP32(esp, edi);

loc_004C3B6A: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 28; return; /* ret 24 */

}

/**
 * sub_004C3B6F
 * Original: 0x004C3B6F - 0x004C3BCE (95 bytes, 31 insns)
 * Category: game_audio
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C3B6F(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004C3B6F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004C3B75u); RECOMP_ABI_CALL(0x004C38BEu, sub_004C38BE); /* call 0x004C38BE */

loc_004C3B75: ;
    _fa = (uint32_t)(MEM32(0x4E1668)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x4E1668), 0 (32-bit) */
    esi = ZX8(LO8(eax));
    if (CMP_EQ(_fa, _fb)) goto loc_004C3B97; /* je: equal / zero */

loc_004C3B81: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C3B90; /* je: equal / zero */

loc_004C3B85: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x4E1674);
    { uint32_t _icall_target = MEM32(0x561008); PUSH32(esp, 0x004C3B90u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C3B8Au); } /* indirect call */
    }

loc_004C3B90: ;
    eax = 0x80004005u;
    goto loc_004C3BCA;

loc_004C3B97: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 0xC);
    edx = MEM32(eax + 8);
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(esp + 0x14));
    PUSH32(esp, edi);
    MEM8(edx + ecx + 0x10) = LO8(ebx);
    PUSH32(esp, ecx);
    ecx = MEM32(eax + 0xC);
    PUSH32(esp, 0x004C3BB5u); RECOMP_ABI_CALL(0x004C80DEu, sub_004C80DE); /* call 0x004C80DE */

loc_004C3BB5: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    edi = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_004C3BC6; /* je: equal / zero */

loc_004C3BBB: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x4E1674);
    { uint32_t _icall_target = MEM32(0x561008); PUSH32(esp, 0x004C3BC6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C3BC0u); } /* indirect call */
    }

loc_004C3BC6: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, ebx);

loc_004C3BCA: ;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_004C3BCE
 * Original: 0x004C3BCE - 0x004C3C1B (77 bytes, 24 insns)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C3BCE(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004C3BCE: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004C3BD4u); RECOMP_ABI_CALL(0x004C38BEu, sub_004C38BE); /* call 0x004C38BE */

loc_004C3BD4: ;
    _fa = (uint32_t)(MEM32(0x4E1668)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x4E1668), 0 (32-bit) */
    esi = ZX8(LO8(eax));
    if (CMP_EQ(_fa, _fb)) goto loc_004C3BF6; /* je: equal / zero */

loc_004C3BE0: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C3BEF; /* je: equal / zero */

loc_004C3BE4: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x4E1674);
    { uint32_t _icall_target = MEM32(0x561008); PUSH32(esp, 0x004C3BEFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C3BE9u); } /* indirect call */
    }

loc_004C3BEF: ;
    eax = 0x80004005u;
    goto loc_004C3C17;

loc_004C3BF6: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(eax + 0xC);
    PUSH32(esp, edi);
    PUSH32(esp, 0x004C3C03u); RECOMP_ABI_CALL(0x004C815Bu, sub_004C815B); /* call 0x004C815B */

loc_004C3C03: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    edi = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_004C3C14; /* je: equal / zero */

loc_004C3C09: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x4E1674);
    { uint32_t _icall_target = MEM32(0x561008); PUSH32(esp, 0x004C3C14u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C3C0Eu); } /* indirect call */
    }

loc_004C3C14: ;
    eax = edi;
    POP32(esp, edi);

loc_004C3C17: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004C3C1B
 * Original: 0x004C3C1B - 0x004C3C4C (49 bytes, 14 insns)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C3C1B(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004C3C1B: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004C3C21u); RECOMP_ABI_CALL(0x004C38BEu, sub_004C38BE); /* call 0x004C38BE */

loc_004C3C21: ;
    _fa = (uint32_t)(MEM32(0x4E1668)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x4E1668), 0 (32-bit) */
    esi = ZX8(LO8(eax));
    if (CMP_NE(_fa, _fb)) goto loc_004C3C39; /* jne: not equal / not zero */

loc_004C3C2D: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(eax + 0xC);
    PUSH32(esp, 0x004C3C39u); RECOMP_ABI_CALL(0x004C7FFFu, sub_004C7FFF); /* call 0x004C7FFF */

loc_004C3C39: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C3C48; /* je: equal / zero */

loc_004C3C3D: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x4E1674);
    { uint32_t _icall_target = MEM32(0x561008); PUSH32(esp, 0x004C3C48u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C3C42u); } /* indirect call */
    }

loc_004C3C48: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004C3C4C
 * Original: 0x004C3C4C - 0x004C3C71 (37 bytes, 17 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C3C4C(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004C3C4C: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), edx (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_004C3C6D; /* jbe: below or equal (unsigned <=) */

loc_004C3C57: ;
    PUSH32(esp, edi);

loc_004C3C58: ;
    eax = MEM32(esi + 4);
    eax = eax + edx * 8;
    edi = MEM32(eax);
    eax = MEM32(eax + 4);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ecx + edi * 4 + 0x30) = eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(esi) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_004C3C58; /* jb: below (unsigned <) */

loc_004C3C6C: ;
    POP32(esp, edi);

loc_004C3C6D: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004C3C71
 * Original: 0x004C3C71 - 0x004C3CDF (110 bytes, 50 insns)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004C3C71(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004C3C71: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = ebp + -8;
    MEM32(ebp + -4) = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C3C87u); RECOMP_ABI_CALL(0x004C36B0u, sub_004C36B0); /* call 0x004C36B0 */

loc_004C3C87: ;
    ecx = MEM32(esi + 0x24);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_004C3CA4; /* jbe: below or equal (unsigned <=) */

loc_004C3C90: ;
    edx = ecx;
    PUSH32(esp, ebx);

loc_004C3C93: ;
    ebx = ZX8(MEM8(esi + eax + 0x28));
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004C3C9E; /* jne: not equal / not zero */

loc_004C3C9D: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_004C3C9E: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_004C3C93; /* jb: below (unsigned <) */

loc_004C3CA3: ;
    POP32(esp, ebx);

loc_004C3CA4: ;
    eax = ZX8(MEM8(esi + 0xE));
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_004C3CD1; /* jae: above or equal (unsigned >=) */

loc_004C3CAC: ;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 8 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_004C3CBD; /* jbe: below or equal (unsigned <=) */

loc_004C3CB5: ;
    PUSH32(esp, 8);
    POP32(esp, ecx);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esi + 0x24) = ecx;

loc_004C3CBD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C3CD1; /* je: equal / zero */

loc_004C3CC1: ;
    ecx = MEM32(esi + 0x24);
    SET_LO8(edx, MEM8(ebp + 8));
    MEM8(esi + ecx + 0x28) = LO8(edx);
    MEM32(esi + 0x24) = MEM32(esi + 0x24) + 1;
    _fa = (uint32_t)(MEM32(esi + 0x24)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_004C3CC1; /* jne: not equal / not zero */

loc_004C3CD1: ;
    ecx = ebp + -8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C3CD9u); RECOMP_ABI_CALL(0x004C36D2u, sub_004C36D2); /* call 0x004C36D2 */

loc_004C3CD9: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004C3CDF
 * Original: 0x004C3CDF - 0x004C3D2C (77 bytes, 30 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C3CDF(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004C3CDF: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = esi + 0x14;
    PUSH32(esp, eax);
    MEM32(esi) = 0x586008;
    PUSH32(esp, 0x004C3CF1u); RECOMP_ABI_CALL(0x004C3680u, sub_004C3680); /* call 0x004C3680 */

loc_004C3CF1: ;
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C3D02; /* je: equal / zero */

loc_004C3CF8: ;
    ecx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ecx + 8); PUSH32(esp, 0x004C3CFEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C3CFBu); } /* indirect call */
    }

loc_004C3CFE: ;
    MEM32(esi + 0xC) = MEM32(esi + 0xC) & 0;
    _fa = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_004C3D02: ;
    eax = MEM32(esi + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C3D13; /* je: equal / zero */

loc_004C3D09: ;
    ecx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ecx + 8); PUSH32(esp, 0x004C3D0Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C3D0Cu); } /* indirect call */
    }

loc_004C3D0F: ;
    MEM32(esi + 0x10) = MEM32(esi + 0x10) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x10)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_004C3D13: ;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C3D24; /* je: equal / zero */

loc_004C3D1A: ;
    ecx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ecx + 8); PUSH32(esp, 0x004C3D20u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C3D1Du); } /* indirect call */
    }

loc_004C3D20: ;
    MEM32(esi + 8) = MEM32(esi + 8) & 0;
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_004C3D24: ;
    MEM32(esi) = 0x586074;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004C3D2C
 * Original: 0x004C3D2C - 0x004C3D45 (25 bytes, 7 insns)
 * Category: game_audio
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C3D2C(void)
{

loc_004C3D2C: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0x10);
    edx = MEM32(esp + 8);
    MEM32(ecx + 0x18) = edx;
    ecx = MEM32(eax + 0xC);
    PUSH32(esp, 0x004C3D42u); RECOMP_ABI_CALL(0x004CB155u, sub_004CB155); /* call 0x004CB155 */

loc_004C3D42: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004C3D45
 * Original: 0x004C3D45 - 0x004C3D61 (28 bytes, 8 insns)
 * Category: game_audio
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C3D45(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004C3D45: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(ecx + 0x10);
    edx = MEM32(esp + 8);
    _fb = (uint32_t)(MEM32(eax + 0x20)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - MEM32(eax + 0x20);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(eax + 0x1C) = edx;
    ecx = MEM32(ecx + 0xC);
    PUSH32(esp, 0x004C3D5Eu); RECOMP_ABI_CALL(0x004CB0BDu, sub_004CB0BD); /* call 0x004CB0BD */

loc_004C3D5E: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004C3D61
 * Original: 0x004C3D61 - 0x004C3D74 (19 bytes, 5 insns)
 * Category: game_audio
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C3D61(void)
{

loc_004C3D61: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, MEM32(esp + 8));
    ecx = MEM32(eax + 0xC);
    PUSH32(esp, 0x004C3D71u); RECOMP_ABI_CALL(0x004CA813u, sub_004CA813); /* call 0x004CA813 */

loc_004C3D71: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004C3D74
 * Original: 0x004C3D74 - 0x004C3D87 (19 bytes, 5 insns)
 * Category: game_audio
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C3D74(void)
{

loc_004C3D74: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, MEM32(esp + 8));
    ecx = MEM32(eax + 0xC);
    PUSH32(esp, 0x004C3D84u); RECOMP_ABI_CALL(0x004CA942u, sub_004CA942); /* call 0x004CA942 */

loc_004C3D84: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004C3D87
 * Original: 0x004C3D87 - 0x004C3D9A (19 bytes, 5 insns)
 * Category: game_audio
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C3D87(void)
{

loc_004C3D87: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, MEM32(esp + 8));
    ecx = MEM32(eax + 0xC);
    PUSH32(esp, 0x004C3D97u); RECOMP_ABI_CALL(0x004CAAD4u, sub_004CAAD4); /* call 0x004CAAD4 */

loc_004C3D97: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004C3D9A
 * Original: 0x004C3D9A - 0x004C3DBD (35 bytes, 12 insns)
 * Category: game_audio
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C3D9A(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004C3D9A: ;
    edx = MEM32(esp + 4);
    eax = MEM32(edx + 0x10);
    ecx = MEM32(eax + 0x20);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(eax + 0x1C) = MEM32(eax + 0x1C) + ecx;
    _fa = (uint32_t)(MEM32(eax + 0x1C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + 0x20) = esi;
    ecx = MEM32(edx + 0xC);
    PUSH32(esp, 0x004C3DB9u); RECOMP_ABI_CALL(0x004CB0BDu, sub_004CB0BD); /* call 0x004CB0BD */

loc_004C3DB9: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004C3DBD
 * Original: 0x004C3DBD - 0x004C3DDA (29 bytes, 9 insns)
 * Category: game_audio
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C3DBD(void)
{

loc_004C3DBD: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, MEM32(esp + 0xC));
    ecx = MEM32(esi + 0x10);
    PUSH32(esp, 0x004C3DCEu); RECOMP_ABI_CALL(0x004C3C4Cu, sub_004C3C4C); /* call 0x004C3C4C */

loc_004C3DCE: ;
    ecx = MEM32(esi + 0xC);
    PUSH32(esp, 0x004C3DD6u); RECOMP_ABI_CALL(0x004CB0BDu, sub_004CB0BD); /* call 0x004CB0BD */

loc_004C3DD6: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004C3DDA
 * Original: 0x004C3DDA - 0x004C3DEB (17 bytes, 5 insns)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_004C3DDA(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004C3DDA: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0xC);
    PUSH32(esp, 0x004C3DE6u); RECOMP_ABI_CALL(0x004CB40Bu, sub_004CB40B); /* call 0x004CB40B */

loc_004C3DE6: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004C3DEB
 * Original: 0x004C3DEB - 0x004C3DFE (19 bytes, 5 insns)
 * Category: game_audio
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C3DEB(void)
{

loc_004C3DEB: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, MEM32(esp + 8));
    ecx = MEM32(eax + 0xC);
    PUSH32(esp, 0x004C3DFBu); RECOMP_ABI_CALL(0x004CACA9u, sub_004CACA9); /* call 0x004CACA9 */

loc_004C3DFB: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004C3DFE
 * Original: 0x004C3DFE - 0x004C3F2F (305 bytes, 91 insns)
 * Category: game_audio
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C3DFE(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004C3DFE: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(ecx + 0x10);
    PUSH32(esp, esi);
    esi = MEM32(eax + 0xB8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    eax = MEM32(esp + 0xC);
    if (CMP_EQ(_fa, _fb)) goto loc_004C3F19; /* je: equal / zero */

loc_004C3E18: ;
    edx = MEM32(eax);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C3F19; /* je: equal / zero */

loc_004C3E22: ;
    MEM32(esi) = edx;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004C3E38; /* je: equal / zero */

loc_004C3E29: ;
    edx = MEM32(ecx + 0x10);
    edx = MEM32(edx + 0xB8);
    esi = MEM32(eax + 4);
    MEM32(edx + 4) = esi;

loc_004C3E38: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004C3E4C; /* je: equal / zero */

loc_004C3E3D: ;
    edx = MEM32(ecx + 0x10);
    edx = MEM32(edx + 0xB8);
    esi = MEM32(eax + 8);
    MEM32(edx + 8) = esi;

loc_004C3E4C: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004C3E6F; /* je: equal / zero */

loc_004C3E51: ;
    edx = MEM32(ecx + 0x10);
    edx = MEM32(edx + 0xB8);
    esi = MEM32(eax + 0xC);
    MEM32(edx + 0xC) = esi;
    edx = MEM32(ecx + 0x10);
    edx = MEM32(edx + 0xB8);
    esi = MEM32(eax + 0x10);
    MEM32(edx + 0x10) = esi;

loc_004C3E6F: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax), 8 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004C3E92; /* je: equal / zero */

loc_004C3E74: ;
    edx = MEM32(ecx + 0x10);
    edx = MEM32(edx + 0xB8);
    esi = MEM32(eax + 0x14);
    MEM32(edx + 0x14) = esi;
    edx = MEM32(ecx + 0x10);
    edx = MEM32(edx + 0xB8);
    esi = MEM32(eax + 0x18);
    MEM32(edx + 0x18) = esi;

loc_004C3E92: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax), 0x10 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004C3EB5; /* je: equal / zero */

loc_004C3E97: ;
    edx = MEM32(ecx + 0x10);
    edx = MEM32(edx + 0xB8);
    esi = MEM32(eax + 0x1C);
    MEM32(edx + 0x1C) = esi;
    edx = MEM32(ecx + 0x10);
    edx = MEM32(edx + 0xB8);
    esi = MEM32(eax + 0x20);
    MEM32(edx + 0x20) = esi;

loc_004C3EB5: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax), 0x20 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004C3EC9; /* je: equal / zero */

loc_004C3EBA: ;
    edx = MEM32(ecx + 0x10);
    edx = MEM32(edx + 0xB8);
    esi = MEM32(eax + 0x24);
    MEM32(edx + 0x24) = esi;

loc_004C3EC9: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax), 0x40 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004C3EEC; /* je: equal / zero */

loc_004C3ECE: ;
    edx = MEM32(ecx + 0x10);
    edx = MEM32(edx + 0xB8);
    esi = MEM32(eax + 0x28);
    MEM32(edx + 0x28) = esi;
    edx = MEM32(ecx + 0x10);
    edx = MEM32(edx + 0xB8);
    esi = MEM32(eax + 0x2C);
    MEM32(edx + 0x2C) = esi;

loc_004C3EEC: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0x80) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax), 0x80 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004C3F0F; /* je: equal / zero */

loc_004C3EF1: ;
    edx = MEM32(ecx + 0x10);
    edx = MEM32(edx + 0xB8);
    esi = MEM32(eax + 0x30);
    MEM32(edx + 0x30) = esi;
    edx = MEM32(ecx + 0x10);
    edx = MEM32(edx + 0xB8);
    eax = MEM32(eax + 0x34);
    MEM32(edx + 0x34) = eax;

loc_004C3F0F: ;
    ecx = MEM32(ecx + 0xC);
    PUSH32(esp, 0x004C3F17u); RECOMP_ABI_CALL(0x004CB203u, sub_004CB203); /* call 0x004CB203 */

loc_004C3F17: ;
    goto loc_004C3F29;

loc_004C3F19: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax), 0x40 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004C3F29; /* je: equal / zero */

loc_004C3F1E: ;
    ecx = MEM32(ecx + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0x004C3F29u); RECOMP_ABI_CALL(0x004CA6A4u, sub_004CA6A4); /* call 0x004CA6A4 */

loc_004C3F29: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004C3F2F
 * Original: 0x004C3F2F - 0x004C3F4C (29 bytes, 9 insns)
 * CC: cdecl, 2 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_004C3F2F(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004C3F2F: ;
    _fa = (uint32_t)(MEM32(esp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 8), 0 (32-bit) */
    eax = MEM32(esp + 4);
    eax = MEM32(eax + 0x10);
    if (CMP_EQ(_fa, _fb)) goto loc_004C3F43; /* je: equal / zero */

loc_004C3F3D: ;
    MEM8(eax + 0xB) = MEM8(eax + 0xB) | 1;
    _fa = (uint32_t)(MEM8(eax + 0xB)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    goto loc_004C3F47;

loc_004C3F43: ;
    MEM8(eax + 0xB) = MEM8(eax + 0xB) & 0xFE;
    _fa = (uint32_t)(MEM8(eax + 0xB)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */

loc_004C3F47: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004C3F4C
 * Original: 0x004C3F4C - 0x004C4021 (213 bytes, 75 insns)
 * Category: game_audio
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004C3F4C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_004C3F4C: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ebx = ecx;
    eax = MEM32(ebx + 0xD8);
    PUSH32(esp, edi);
    _cf = 0; /* xor clears CF */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(ebp + -8) = edi;
    MEM32(ebp + -4) = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_004C3F73; /* je: equal / zero */

loc_004C3F67: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C3F6Du); RECOMP_ABI_CALL(0x004C6B6Fu, sub_004C6B6F); /* call 0x004C6B6F */

loc_004C3F6D: ;
    MEM32(ebx + 0xD8) = edi;

loc_004C3F73: ;
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(ebx + 0xDC) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_004C4018; /* je: equal / zero */

loc_004C3F84: ;
    PUSH32(esp, esi);
    esi = eax;
    PUSH32(esp, edi);
    if (3) _cf = (int)(((esi) >> (32 - (3))) & 1);
    esi = esi << 3;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x61645344);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C3F96u); RECOMP_ABI_CALL(0x004C6B07u, sub_004C6B07); /* call 0x004C6B07 */

loc_004C3F96: ;
    ecx = eax;
    _cf = (int)((ecx) != 0);
    ecx = (uint32_t)(0u - (uint32_t)(ecx));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 0x7FF8FFF2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x8007000Eu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(0x8007000Eu)) >> 32) & 1);
    ecx = ecx + 0x8007000Eu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebx + 0xD8) = eax;
    MEM32(ebp + -8) = ecx;
    if ((_fas < 0)) goto loc_004C4017; /* js: sign (negative) */

loc_004C3FB3: ;
    ecx = esi;
    esi = MEM32(ebp + 0xC);
    edi = eax;
    eax = ecx;
    if (2) _cf = (int)(((ecx) >> ((2) - 1)) & 1);
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
    eax = MEM32(ebx + 0xDC);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_004C4017; /* je: equal / zero */

loc_004C3FD1: ;
    ecx = MEM32(ebp + -4);
    eax = MEM32(ebx + 0xD8);
    if (3) _cf = (int)(((ecx) >> (32 - (3))) & 1);
    ecx = ecx << 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(ecx)) >> 32) & 1);
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(eax);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(eax + 8) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_BE(_fa, _fb)) goto loc_004C4008; /* jbe: below or equal (unsigned <=) */

loc_004C3FE6: ;
    edi = MEM32(eax + 8);
    esi = MEM32(eax + 4);
    _cf = 0; /* logical op clears CF */
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(eax) = edi;
    edi = MEM32(eax + 0xC);
    MEM32(eax + 4) = edi;
    eax = MEM32(ebx + 0xD8);
    MEM32(ecx + eax + 8) = edx;
    MEM32(ecx + eax + 0xC) = esi;
    goto loc_004C400B;

loc_004C4008: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) + 1;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_004C400B: ;
    eax = MEM32(ebx + 0xDC);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_004C3FD1; /* jb: below (unsigned <) */

loc_004C4017: ;
    POP32(esp, esi);

loc_004C4018: ;
    eax = MEM32(ebp + -8);
    POP32(esp, edi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004C4021
 * Original: 0x004C4021 - 0x004C4054 (51 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C4021(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004C4021: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi) = 0x586018;
    if (CMP_EQ(_fa, _fb)) goto loc_004C403B; /* je: equal / zero */

loc_004C4031: ;
    ecx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ecx + 8); PUSH32(esp, 0x004C4037u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C4034u); } /* indirect call */
    }

loc_004C4037: ;
    MEM32(esi + 0x20) = MEM32(esi + 0x20) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x20)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_004C403B: ;
    eax = MEM32(esi + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C404C; /* je: equal / zero */

loc_004C4042: ;
    ecx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ecx + 8); PUSH32(esp, 0x004C4048u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C4045u); } /* indirect call */
    }

loc_004C4048: ;
    MEM32(esi + 0x1C) = MEM32(esi + 0x1C) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x1C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_004C404C: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_004C3CDF(); return; /* tail jmp 0x004C3CDF */

}

/**
 * sub_004C4054
 * Original: 0x004C4054 - 0x004C409E (74 bytes, 23 insns)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C4054(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004C4054: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004C405Au); RECOMP_ABI_CALL(0x004C38BEu, sub_004C38BE); /* call 0x004C38BE */

loc_004C405A: ;
    _fa = (uint32_t)(MEM32(0x4E1668)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x4E1668), 0 (32-bit) */
    esi = ZX8(LO8(eax));
    if (CMP_EQ(_fa, _fb)) goto loc_004C407C; /* je: equal / zero */

loc_004C4066: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C4075; /* je: equal / zero */

loc_004C406A: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x4E1674);
    { uint32_t _icall_target = MEM32(0x561008); PUSH32(esp, 0x004C4075u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C406Fu); } /* indirect call */
    }

loc_004C4075: ;
    eax = 0x80004005u;
    goto loc_004C409A;

loc_004C407C: ;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esp + 0xC));
    PUSH32(esp, 0x004C4086u); RECOMP_ABI_CALL(0x004C374Au, sub_004C374A); /* call 0x004C374A */

loc_004C4086: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    edi = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_004C4097; /* je: equal / zero */

loc_004C408C: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x4E1674);
    { uint32_t _icall_target = MEM32(0x561008); PUSH32(esp, 0x004C4097u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C4091u); } /* indirect call */
    }

loc_004C4097: ;
    eax = edi;
    POP32(esp, edi);

loc_004C409A: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004C409E
 * Original: 0x004C409E - 0x004C40EF (81 bytes, 25 insns)
 * Category: game_audio
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C409E(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004C409E: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004C40A4u); RECOMP_ABI_CALL(0x004C38BEu, sub_004C38BE); /* call 0x004C38BE */

loc_004C40A4: ;
    _fa = (uint32_t)(MEM32(0x4E1668)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x4E1668), 0 (32-bit) */
    esi = ZX8(LO8(eax));
    if (CMP_EQ(_fa, _fb)) goto loc_004C40C6; /* je: equal / zero */

loc_004C40B0: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C40BF; /* je: equal / zero */

loc_004C40B4: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x4E1674);
    { uint32_t _icall_target = MEM32(0x561008); PUSH32(esp, 0x004C40BFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C40B9u); } /* indirect call */
    }

loc_004C40BF: ;
    eax = 0x80004005u;
    goto loc_004C40EB;

loc_004C40C6: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(eax + 0x20);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esp + 0x18));
    PUSH32(esp, 0x004C40D7u); RECOMP_ABI_CALL(0x004CC0FBu, sub_004CC0FB); /* call 0x004CC0FB */

loc_004C40D7: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    edi = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_004C40E8; /* je: equal / zero */

loc_004C40DD: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x4E1674);
    { uint32_t _icall_target = MEM32(0x561008); PUSH32(esp, 0x004C40E8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C40E2u); } /* indirect call */
    }

loc_004C40E8: ;
    eax = edi;
    POP32(esp, edi);

loc_004C40EB: ;
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_004C40EF
 * Original: 0x004C40EF - 0x004C413E (79 bytes, 25 insns)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C40EF(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004C40EF: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004C40F5u); RECOMP_ABI_CALL(0x004C38BEu, sub_004C38BE); /* call 0x004C38BE */

loc_004C40F5: ;
    _fa = (uint32_t)(MEM32(0x4E1668)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x4E1668), 0 (32-bit) */
    esi = ZX8(LO8(eax));
    if (CMP_EQ(_fa, _fb)) goto loc_004C4117; /* je: equal / zero */

loc_004C4101: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C4110; /* je: equal / zero */

loc_004C4105: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x4E1674);
    { uint32_t _icall_target = MEM32(0x561008); PUSH32(esp, 0x004C4110u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C410Au); } /* indirect call */
    }

loc_004C4110: ;
    eax = 0x80004005u;
    goto loc_004C413A;

loc_004C4117: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(eax + 0x20);
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    PUSH32(esp, 0x004C4126u); RECOMP_ABI_CALL(0x004CC214u, sub_004CC214); /* call 0x004CC214 */

loc_004C4126: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    edi = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_004C4137; /* je: equal / zero */

loc_004C412C: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x4E1674);
    { uint32_t _icall_target = MEM32(0x561008); PUSH32(esp, 0x004C4137u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C4131u); } /* indirect call */
    }

loc_004C4137: ;
    eax = edi;
    POP32(esp, edi);

loc_004C413A: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004C413E
 * Original: 0x004C413E - 0x004C4197 (89 bytes, 27 insns)
 * Category: game_audio
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C413E(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004C413E: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004C4144u); RECOMP_ABI_CALL(0x004C38BEu, sub_004C38BE); /* call 0x004C38BE */

loc_004C4144: ;
    _fa = (uint32_t)(MEM32(0x4E1668)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x4E1668), 0 (32-bit) */
    esi = ZX8(LO8(eax));
    if (CMP_EQ(_fa, _fb)) goto loc_004C4166; /* je: equal / zero */

loc_004C4150: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C415F; /* je: equal / zero */

loc_004C4154: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x4E1674);
    { uint32_t _icall_target = MEM32(0x561008); PUSH32(esp, 0x004C415Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C4159u); } /* indirect call */
    }

loc_004C415F: ;
    eax = 0x80004005u;
    goto loc_004C4193;

loc_004C4166: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(eax + 0x20);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esp + 0x18));
    PUSH32(esp, MEM32(esp + 0x18));
    PUSH32(esp, MEM32(esp + 0x18));
    PUSH32(esp, 0x004C417Fu); RECOMP_ABI_CALL(0x004CC47Du, sub_004CC47D); /* call 0x004CC47D */

loc_004C417F: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    edi = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_004C4190; /* je: equal / zero */

loc_004C4185: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x4E1674);
    { uint32_t _icall_target = MEM32(0x561008); PUSH32(esp, 0x004C4190u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C418Au); } /* indirect call */
    }

loc_004C4190: ;
    eax = edi;
    POP32(esp, edi);

loc_004C4193: ;
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_004C4197
 * Original: 0x004C4197 - 0x004C41E8 (81 bytes, 25 insns)
 * Category: game_audio
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C4197(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004C4197: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004C419Du); RECOMP_ABI_CALL(0x004C38BEu, sub_004C38BE); /* call 0x004C38BE */

loc_004C419D: ;
    _fa = (uint32_t)(MEM32(0x4E1668)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x4E1668), 0 (32-bit) */
    esi = ZX8(LO8(eax));
    if (CMP_EQ(_fa, _fb)) goto loc_004C41BF; /* je: equal / zero */

loc_004C41A9: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C41B8; /* je: equal / zero */

loc_004C41AD: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x4E1674);
    { uint32_t _icall_target = MEM32(0x561008); PUSH32(esp, 0x004C41B8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C41B2u); } /* indirect call */
    }

loc_004C41B8: ;
    eax = 0x80004005u;
    goto loc_004C41E4;

loc_004C41BF: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(eax + 0x20);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, 0x004C41D0u); RECOMP_ABI_CALL(0x004CBCAFu, sub_004CBCAF); /* call 0x004CBCAF */

loc_004C41D0: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    edi = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_004C41E1; /* je: equal / zero */

loc_004C41D6: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x4E1674);
    { uint32_t _icall_target = MEM32(0x561008); PUSH32(esp, 0x004C41E1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C41DBu); } /* indirect call */
    }

loc_004C41E1: ;
    eax = edi;
    POP32(esp, edi);

loc_004C41E4: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004C41E8
 * Original: 0x004C41E8 - 0x004C426D (133 bytes, 43 insns)
 * Category: game_audio
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004C41E8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004C41E8: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C41F1u); RECOMP_ABI_CALL(0x004C38BEu, sub_004C38BE); /* call 0x004C38BE */

loc_004C41F1: ;
    _fa = (uint32_t)(MEM32(0x4E1668)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x4E1668), 0 (32-bit) */
    edi = ZX8(LO8(eax));
    if (CMP_EQ(_fa, _fb)) goto loc_004C4213; /* je: equal / zero */

loc_004C41FD: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C420C; /* je: equal / zero */

loc_004C4201: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x4E1674);
    { uint32_t _icall_target = MEM32(0x561008); PUSH32(esp, 0x004C420Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C4206u); } /* indirect call */
    }

loc_004C420C: ;
    eax = 0x80004005u;
    goto loc_004C4268;

loc_004C4213: ;
    ecx = MEM32(ebp + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    edx = MEM32(ebp + 8);
    eax = MEM32(edx + 0x1C);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0xC);
    if (CMP_EQ(_fa, _fb)) goto loc_004C4238; /* je: equal / zero */

loc_004C4224: ;
    PUSH32(esp, ebx);
    ebx = esi + ecx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 0xC8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(eax + 0xC8) (32-bit) */
    POP32(esp, ebx);
    if (CMP_BE(_fa, _fb)) goto loc_004C4240; /* jbe: below or equal (unsigned <=) */

loc_004C4231: ;
    esi = 0x88780032u;
    goto loc_004C4256;

loc_004C4238: ;
    ecx = MEM32(eax + 0xC8);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_004C4240: ;
    MEM32(eax + 0xCC) = esi;
    MEM32(eax + 0xD0) = ecx;
    ecx = MEM32(edx + 0x20);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C4254u); RECOMP_ABI_CALL(0x004CC1F6u, sub_004CC1F6); /* call 0x004CC1F6 */

loc_004C4254: ;
    esi = eax;

loc_004C4256: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C4265; /* je: equal / zero */

loc_004C425A: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x4E1674);
    { uint32_t _icall_target = MEM32(0x561008); PUSH32(esp, 0x004C4265u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C425Fu); } /* indirect call */
    }

loc_004C4265: ;
    eax = esi;
    POP32(esp, esi);

loc_004C4268: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_004C426D
 * Original: 0x004C426D - 0x004C42BE (81 bytes, 25 insns)
 * Category: game_audio
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C426D(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004C426D: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004C4273u); RECOMP_ABI_CALL(0x004C38BEu, sub_004C38BE); /* call 0x004C38BE */

loc_004C4273: ;
    _fa = (uint32_t)(MEM32(0x4E1668)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x4E1668), 0 (32-bit) */
    esi = ZX8(LO8(eax));
    if (CMP_EQ(_fa, _fb)) goto loc_004C4295; /* je: equal / zero */

loc_004C427F: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C428E; /* je: equal / zero */

loc_004C4283: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x4E1674);
    { uint32_t _icall_target = MEM32(0x561008); PUSH32(esp, 0x004C428Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C4288u); } /* indirect call */
    }

loc_004C428E: ;
    eax = 0x80004005u;
    goto loc_004C42BA;

loc_004C4295: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(eax + 0x20);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, 0x004C42A6u); RECOMP_ABI_CALL(0x004CC2A4u, sub_004CC2A4); /* call 0x004CC2A4 */

loc_004C42A6: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    edi = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_004C42B7; /* je: equal / zero */

loc_004C42AC: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x4E1674);
    { uint32_t _icall_target = MEM32(0x561008); PUSH32(esp, 0x004C42B7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C42B1u); } /* indirect call */
    }

loc_004C42B7: ;
    eax = edi;
    POP32(esp, edi);

loc_004C42BA: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004C42BE
 * Original: 0x004C42BE - 0x004C42FC (62 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C42BE(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004C42BE: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, edi);
    edi = esi + 4;
    MEM32(esi) = 0x586038;
    MEM32(edi) = 0x586028;
    if (CMP_EQ(_fa, _fb)) goto loc_004C42E2; /* je: equal / zero */

loc_004C42D8: ;
    ecx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ecx + 8); PUSH32(esp, 0x004C42DEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C42DBu); } /* indirect call */
    }

loc_004C42DE: ;
    MEM32(esi + 0x24) = MEM32(esi + 0x24) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x24)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_004C42E2: ;
    eax = MEM32(esi + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C42F3; /* je: equal / zero */

loc_004C42E9: ;
    ecx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ecx + 8); PUSH32(esp, 0x004C42EFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C42ECu); } /* indirect call */
    }

loc_004C42EF: ;
    MEM32(esi + 0x20) = MEM32(esi + 0x20) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x20)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_004C42F3: ;
    ecx = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_004C3CDF(); return; /* tail jmp 0x004C3CDF */

}

/**
 * sub_004C42FC
 * Original: 0x004C42FC - 0x004C4343 (71 bytes, 21 insns)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C42FC(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004C42FC: ;
    PUSH32(esp, 0x004C4301u); RECOMP_ABI_CALL(0x004C38BEu, sub_004C38BE); /* call 0x004C38BE */

loc_004C4301: ;
    _fa = (uint32_t)(MEM32(0x4E1668)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x4E1668), 0 (32-bit) */
    ecx = ZX8(LO8(eax));
    if (CMP_EQ(_fa, _fb)) goto loc_004C4323; /* je: equal / zero */

loc_004C430D: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C431C; /* je: equal / zero */

loc_004C4311: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x4E1674);
    { uint32_t _icall_target = MEM32(0x561008); PUSH32(esp, 0x004C431Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C4316u); } /* indirect call */
    }

loc_004C431C: ;
    eax = 0x80004005u;
    goto loc_004C4340;

loc_004C4323: ;
    eax = MEM32(esp + 4);
    MEM32(eax + 8) = MEM32(eax + 8) + 1;
    _fa = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    PUSH32(esp, esi);
    esi = MEM32(eax + 8);
    if (CMP_EQ(_fa, _fb)) goto loc_004C433D; /* je: equal / zero */

loc_004C4332: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x4E1674);
    { uint32_t _icall_target = MEM32(0x561008); PUSH32(esp, 0x004C433Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C4337u); } /* indirect call */
    }

loc_004C433D: ;
    eax = esi;
    POP32(esp, esi);

loc_004C4340: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004C4343
 * Original: 0x004C4343 - 0x004C4391 (78 bytes, 25 insns)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C4343(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004C4343: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004C4349u); RECOMP_ABI_CALL(0x004C38BEu, sub_004C38BE); /* call 0x004C38BE */

loc_004C4349: ;
    _fa = (uint32_t)(MEM32(0x4E1668)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x4E1668), 0 (32-bit) */
    esi = ZX8(LO8(eax));
    if (CMP_EQ(_fa, _fb)) goto loc_004C436B; /* je: equal / zero */

loc_004C4355: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C4364; /* je: equal / zero */

loc_004C4359: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x4E1674);
    { uint32_t _icall_target = MEM32(0x561008); PUSH32(esp, 0x004C4364u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C435Eu); } /* indirect call */
    }

loc_004C4364: ;
    eax = 0x80004005u;
    goto loc_004C438D;

loc_004C436B: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, edi);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x004C4379u); RECOMP_ABI_CALL(0x004C374Au, sub_004C374A); /* call 0x004C374A */

loc_004C4379: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    edi = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_004C438A; /* je: equal / zero */

loc_004C437F: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x4E1674);
    { uint32_t _icall_target = MEM32(0x561008); PUSH32(esp, 0x004C438Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C4384u); } /* indirect call */
    }

loc_004C438A: ;
    eax = edi;
    POP32(esp, edi);

loc_004C438D: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004C4391
 * Original: 0x004C4391 - 0x004C43F8 (103 bytes, 32 insns)
 * Category: game_audio
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C4391(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004C4391: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x004C4397u); RECOMP_ABI_CALL(0x004C38BEu, sub_004C38BE); /* call 0x004C38BE */

loc_004C4397: ;
    _fa = (uint32_t)(MEM32(0x4E1668)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x4E1668), 0 (32-bit) */
    ebx = ZX8(LO8(eax));
    if (CMP_EQ(_fa, _fb)) goto loc_004C43B9; /* je: equal / zero */

loc_004C43A3: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C43B2; /* je: equal / zero */

loc_004C43A7: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x4E1674);
    { uint32_t _icall_target = MEM32(0x561008); PUSH32(esp, 0x004C43B2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C43ACu); } /* indirect call */
    }

loc_004C43B2: ;
    eax = 0x80004005u;
    goto loc_004C43F4;

loc_004C43B9: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    MEM32(esi) = 5;
    ecx = MEM32(edi + 0x24);
    PUSH32(esp, 0x004C43D1u); RECOMP_ABI_CALL(0x004C390Bu, sub_004C390B); /* call 0x004C390B */

loc_004C43D1: ;
    MEM32(esi + 0xC) = eax;
    eax = MEM32(edi + 0x20);
    eax = MEM32(eax + 0x14);
    MEM32(esi + 8) = MEM32(esi + 8) & 0;
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    POP32(esp, edi);
    MEM32(esi + 4) = eax;
    POP32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_004C43F2; /* je: equal / zero */

loc_004C43E7: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x4E1674);
    { uint32_t _icall_target = MEM32(0x561008); PUSH32(esp, 0x004C43F2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C43ECu); } /* indirect call */
    }

loc_004C43F2: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004C43F4: ;
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004C43F8
 * Original: 0x004C43F8 - 0x004C4445 (77 bytes, 24 insns)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C43F8(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004C43F8: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004C43FEu); RECOMP_ABI_CALL(0x004C38BEu, sub_004C38BE); /* call 0x004C38BE */

loc_004C43FE: ;
    _fa = (uint32_t)(MEM32(0x4E1668)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x4E1668), 0 (32-bit) */
    esi = ZX8(LO8(eax));
    if (CMP_EQ(_fa, _fb)) goto loc_004C4420; /* je: equal / zero */

loc_004C440A: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C4419; /* je: equal / zero */

loc_004C440E: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x4E1674);
    { uint32_t _icall_target = MEM32(0x561008); PUSH32(esp, 0x004C4419u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C4413u); } /* indirect call */
    }

loc_004C4419: ;
    eax = 0x80004005u;
    goto loc_004C4441;

loc_004C4420: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(eax + 0x24);
    PUSH32(esp, edi);
    PUSH32(esp, 0x004C442Du); RECOMP_ABI_CALL(0x004C8EC0u, sub_004C8EC0); /* call 0x004C8EC0 */

loc_004C442D: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    edi = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_004C443E; /* je: equal / zero */

loc_004C4433: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x4E1674);
    { uint32_t _icall_target = MEM32(0x561008); PUSH32(esp, 0x004C443Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C4438u); } /* indirect call */
    }

loc_004C443E: ;
    eax = edi;
    POP32(esp, edi);

loc_004C4441: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004C4445
 * Original: 0x004C4445 - 0x004C4490 (75 bytes, 22 insns)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C4445(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004C4445: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004C444Bu); RECOMP_ABI_CALL(0x004C38BEu, sub_004C38BE); /* call 0x004C38BE */

loc_004C444B: ;
    _fa = (uint32_t)(MEM32(0x4E1668)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x4E1668), 0 (32-bit) */
    esi = ZX8(LO8(eax));
    if (CMP_EQ(_fa, _fb)) goto loc_004C446D; /* je: equal / zero */

loc_004C4457: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C4466; /* je: equal / zero */

loc_004C445B: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x4E1674);
    { uint32_t _icall_target = MEM32(0x561008); PUSH32(esp, 0x004C4466u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C4460u); } /* indirect call */
    }

loc_004C4466: ;
    eax = 0x80004005u;
    goto loc_004C448C;

loc_004C446D: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(eax + 0x24);
    PUSH32(esp, 0);
    PUSH32(esp, 0x004C447Bu); RECOMP_ABI_CALL(0x004C8FB0u, sub_004C8FB0); /* call 0x004C8FB0 */

loc_004C447B: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C448A; /* je: equal / zero */

loc_004C447F: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x4E1674);
    { uint32_t _icall_target = MEM32(0x561008); PUSH32(esp, 0x004C448Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C4484u); } /* indirect call */
    }

loc_004C448A: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004C448C: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004C4490
 * Original: 0x004C4490 - 0x004C44E1 (81 bytes, 25 insns)
 * Category: game_audio
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C4490(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004C4490: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004C4496u); RECOMP_ABI_CALL(0x004C38BEu, sub_004C38BE); /* call 0x004C38BE */

loc_004C4496: ;
    _fa = (uint32_t)(MEM32(0x4E1668)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x4E1668), 0 (32-bit) */
    esi = ZX8(LO8(eax));
    if (CMP_EQ(_fa, _fb)) goto loc_004C44B8; /* je: equal / zero */

loc_004C44A2: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C44B1; /* je: equal / zero */

loc_004C44A6: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x4E1674);
    { uint32_t _icall_target = MEM32(0x561008); PUSH32(esp, 0x004C44B1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C44ABu); } /* indirect call */
    }

loc_004C44B1: ;
    eax = 0x80004005u;
    goto loc_004C44DD;

loc_004C44B8: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(eax + 0x24);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, 0x004C44C9u); RECOMP_ABI_CALL(0x004C8943u, sub_004C8943); /* call 0x004C8943 */

loc_004C44C9: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    edi = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_004C44DA; /* je: equal / zero */

loc_004C44CF: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x4E1674);
    { uint32_t _icall_target = MEM32(0x561008); PUSH32(esp, 0x004C44DAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C44D4u); } /* indirect call */
    }

loc_004C44DA: ;
    eax = edi;
    POP32(esp, edi);

loc_004C44DD: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004C44E1
 * Original: 0x004C44E1 - 0x004C4558 (119 bytes, 43 insns)
 * Category: game_audio
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004C44E1(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004C44E1: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C44EBu); RECOMP_ABI_CALL(0x004C38BEu, sub_004C38BE); /* call 0x004C38BE */

loc_004C44EB: ;
    _fa = (uint32_t)(MEM32(0x4E1668)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x4E1668), 0 (32-bit) */
    ebx = ZX8(LO8(eax));
    if (CMP_EQ(_fa, _fb)) goto loc_004C450D; /* je: equal / zero */

loc_004C44F7: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C4506; /* je: equal / zero */

loc_004C44FB: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x4E1674);
    { uint32_t _icall_target = MEM32(0x561008); PUSH32(esp, 0x004C4506u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C4500u); } /* indirect call */
    }

loc_004C4506: ;
    eax = 0x80004005u;
    goto loc_004C4553;

loc_004C450D: ;
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    ecx = MEM32(esi + 0x24);
    PUSH32(esp, edi);
    eax = ebp + -4;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C451Eu); RECOMP_ABI_CALL(0x004C8943u, sub_004C8943); /* call 0x004C8943 */

loc_004C451E: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_004C4540; /* jl: less (signed <) */

loc_004C4524: ;
    _fa = (uint32_t)(MEM8(ebp + -4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + -4), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_004C452F; /* jne: not equal / not zero */

loc_004C452A: ;
    edi = 0x88780032u;

loc_004C452F: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_004C4540; /* jl: less (signed <) */

loc_004C4533: ;
    PUSH32(esp, MEM32(ebp + 0xC));
    ecx = MEM32(esi + 0x24);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C453Eu); RECOMP_ABI_CALL(0x004C9358u, sub_004C9358); /* call 0x004C9358 */

loc_004C453E: ;
    edi = eax;

loc_004C4540: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C454F; /* je: equal / zero */

loc_004C4544: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x4E1674);
    { uint32_t _icall_target = MEM32(0x561008); PUSH32(esp, 0x004C454Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C4549u); } /* indirect call */
    }

loc_004C454F: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);

loc_004C4553: ;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_004C4555
 * Original: 0x004C4555 - 0x004C4558 (3 bytes, 1 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C4555(void)
{

loc_004C4555: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_004C4558
 * Original: 0x004C4558 - 0x004C45A9 (81 bytes, 25 insns)
 * Category: game_audio
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C4558(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004C4558: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004C455Eu); RECOMP_ABI_CALL(0x004C38BEu, sub_004C38BE); /* call 0x004C38BE */

loc_004C455E: ;
    _fa = (uint32_t)(MEM32(0x4E1668)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x4E1668), 0 (32-bit) */
    esi = ZX8(LO8(eax));
    if (CMP_EQ(_fa, _fb)) goto loc_004C4580; /* je: equal / zero */

loc_004C456A: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C4579; /* je: equal / zero */

loc_004C456E: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x4E1674);
    { uint32_t _icall_target = MEM32(0x561008); PUSH32(esp, 0x004C4579u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C4573u); } /* indirect call */
    }

loc_004C4579: ;
    eax = 0x80004005u;
    goto loc_004C45A5;

loc_004C4580: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(eax + 0x24);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, 0x004C4591u); RECOMP_ABI_CALL(0x004C9426u, sub_004C9426); /* call 0x004C9426 */

loc_004C4591: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    edi = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_004C45A2; /* je: equal / zero */

loc_004C4597: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x4E1674);
    { uint32_t _icall_target = MEM32(0x561008); PUSH32(esp, 0x004C45A2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C459Cu); } /* indirect call */
    }

loc_004C45A2: ;
    eax = edi;
    POP32(esp, edi);

loc_004C45A5: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004C45A9
 * Original: 0x004C45A9 - 0x004C4613 (106 bytes, 36 insns)
 * Category: game_audio
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004C45A9(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004C45A9: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C45B2u); RECOMP_ABI_CALL(0x004C38BEu, sub_004C38BE); /* call 0x004C38BE */

loc_004C45B2: ;
    _fa = (uint32_t)(MEM32(0x4E1668)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x4E1668), 0 (32-bit) */
    esi = ZX8(LO8(eax));
    if (CMP_EQ(_fa, _fb)) goto loc_004C45D4; /* je: equal / zero */

loc_004C45BE: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C45CD; /* je: equal / zero */

loc_004C45C2: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x4E1674);
    { uint32_t _icall_target = MEM32(0x561008); PUSH32(esp, 0x004C45CDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C45C7u); } /* indirect call */
    }

loc_004C45CD: ;
    eax = 0x80004005u;
    goto loc_004C460E;

loc_004C45D4: ;
    _fa = (uint32_t)(MEM32(ebp + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x14), 0 (32-bit) */
    eax = MEM32(ebp + 8);
    ecx = MEM32(eax + 0x24);
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_004C45F3; /* je: equal / zero */

loc_004C45E1: ;
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, MEM32(ebp + 0xC));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C45EFu); RECOMP_ABI_CALL(0x004C8D82u, sub_004C8D82); /* call 0x004C8D82 */

loc_004C45EF: ;
    edi = eax;
    goto loc_004C45FC;

loc_004C45F3: ;
    PUSH32(esp, 0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C45FAu); RECOMP_ABI_CALL(0x004C8FB0u, sub_004C8FB0); /* call 0x004C8FB0 */

loc_004C45FA: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004C45FC: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C460B; /* je: equal / zero */

loc_004C4600: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x4E1674);
    { uint32_t _icall_target = MEM32(0x561008); PUSH32(esp, 0x004C460Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C4605u); } /* indirect call */
    }

loc_004C460B: ;
    eax = edi;
    POP32(esp, edi);

loc_004C460E: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_004C4613
 * Original: 0x004C4613 - 0x004C48F4 (737 bytes, 261 insns)
 * Category: game_audio
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004C4613(void)
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

loc_004C4613: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ecx = ebp + 8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C4624u); RECOMP_ABI_CALL(0x004C36E9u, sub_004C36E9); /* call 0x004C36E9 */

loc_004C4624: ;
    ebx = MEM32(ebp + 8);
    eax = MEM32(ebx);
    esi = MEM32(ebp + 0xC);
    eax = eax | MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x400000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x400000 (32-bit) */
    MEM32(ebp + 8) = eax;
    if (TEST_Z(_fa, _fb)) goto loc_004C4640; /* je: equal / zero */

loc_004C4638: ;
    eax = eax | 0xFFFF0000u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(ebp + 8) = eax;

loc_004C4640: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x15200010) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x15200010 (32-bit) */
    edi = MEM32(ebp + 0x18);
    if (TEST_Z(_fa, _fb)) goto loc_004C469F; /* je: equal / zero */

loc_004C464A: ;
    _fa = (uint32_t)(MEM32(esi + 0x40)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x40), 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C468F; /* je: equal / zero */

loc_004C4650: ;
    fp_push(MEMF(esi + 0x68)); /* fld float */
    eax = ebp + -52;
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x58);
    eax = eax >> 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax & 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, MEM32(esi + 0x54));
    fp_push(MEMF(esi + 0x3C)); /* fld float */
    PUSH32(esp, MEM32(esi + 0x50));
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x38)); /* fld float */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebx + 0x3C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x48)); /* fmul dword ptr [esi + 0x48] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C468Au); RECOMP_ABI_CALL(0x004C37EAu, sub_004C37EA); /* call 0x004C37EA */

loc_004C468A: ;
    eax = MEM32(ebp + -52);
    goto loc_004C4694;

loc_004C468F: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ebp + -52) = eax;

loc_004C4694: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(edi + 4) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C469F; /* je: equal / zero */

loc_004C4699: ;
    MEM32(edi) = MEM32(edi) | 1;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(edi + 4) = eax;

loc_004C469F: ;
    _fa = (uint32_t)(MEM16(ebp + 0xA)) & 0xFFFFu; _fb = (uint32_t)(0x4014) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* test MEM16(ebp + 0xA), 0x4014 (16-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004C46DB; /* je: equal / zero */

loc_004C46A7: ;
    _fa = (uint32_t)(MEM32(esi + 0x40)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x40), 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C46CB; /* je: equal / zero */

loc_004C46AD: ;
    fp_push(MEMF(esi + 0x70)); /* fld float */
    eax = ebp + -48;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, MEM32(esi + 0x34));
    PUSH32(esp, MEM32(esi + 0x24));
    PUSH32(esp, MEM32(esi + 0x20));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C46C6u); RECOMP_ABI_CALL(0x004C3821u, sub_004C3821); /* call 0x004C3821 */

loc_004C46C6: ;
    eax = MEM32(ebp + -48);
    goto loc_004C46D0;

loc_004C46CB: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ebp + -48) = eax;

loc_004C46D0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(edi + 8) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C46DB; /* je: equal / zero */

loc_004C46D5: ;
    MEM32(edi) = MEM32(edi) | 2;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(edi + 8) = eax;

loc_004C46DB: ;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x34800008) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(ebp + 8), 0x34800008 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004C4744; /* je: equal / zero */

loc_004C46E4: ;
    _fa = (uint32_t)(MEM32(esi + 0x40)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x40), 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C4727; /* je: equal / zero */

loc_004C46EA: ;
    fp_push(MEMF(esi + 0x78)); /* fld float */
    eax = ebp + -40;
    PUSH32(esp, eax);
    eax = ebp + -44;
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x58);
    eax = eax & 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, eax);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x74)); /* fld float */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x68)); /* fld float */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebx + 0x38)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x44)); /* fmul dword ptr [esi + 0x44] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C471Fu); RECOMP_ABI_CALL(0x004C3841u, sub_004C3841); /* call 0x004C3841 */

loc_004C471F: ;
    ecx = MEM32(ebp + -40);
    eax = MEM32(ebp + -44);
    goto loc_004C4731;

loc_004C4727: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ebp + -44) = eax;
    MEM32(ebp + -40) = ecx;

loc_004C4731: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(edi + 0xC) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004C473B; /* jne: not equal / not zero */

loc_004C4736: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(edi + 0x10) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C4744; /* je: equal / zero */

loc_004C473B: ;
    MEM32(edi) = MEM32(edi) | 4;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(edi + 0xC) = eax;
    MEM32(edi + 0x10) = ecx;

loc_004C4744: ;
    _fa = (uint32_t)(MEM8(ebp + 0xB)) & 0xFFu; _fb = (uint32_t)(0x24) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + 0xB), 0x24 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004C4797; /* je: equal / zero */

loc_004C474A: ;
    _fa = (uint32_t)(MEM32(esi + 0x40)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x40), 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C477A; /* je: equal / zero */

loc_004C4750: ;
    _fa = (uint32_t)(MEM8(esi + 0x58)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x58), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004C477A; /* je: equal / zero */

loc_004C4756: ;
    fp_push(MEMF(esi + 0x78)); /* fld float */
    eax = ebp + -32;
    PUSH32(esp, eax);
    eax = ebp + -36;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x74)); /* fld float */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C4772u); RECOMP_ABI_CALL(0x004C3875u, sub_004C3875); /* call 0x004C3875 */

loc_004C4772: ;
    ecx = MEM32(ebp + -32);
    eax = MEM32(ebp + -36);
    goto loc_004C4784;

loc_004C477A: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ebp + -36) = eax;
    MEM32(ebp + -32) = ecx;

loc_004C4784: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(edi + 0x14) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004C478E; /* jne: not equal / not zero */

loc_004C4789: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 0x18)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(edi + 0x18) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C4797; /* je: equal / zero */

loc_004C478E: ;
    MEM32(edi) = MEM32(edi) | 8;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(edi + 0x14) = eax;
    MEM32(edi + 0x18) = ecx;

loc_004C4797: ;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x82800028u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(ebp + 8), 0x82800028u (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004C47E1; /* je: equal / zero */

loc_004C47A0: ;
    _fa = (uint32_t)(MEM32(esi + 0x40)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x40), 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C47D1; /* je: equal / zero */

loc_004C47A6: ;
    fp_push(MEMF(esi + 0x6C)); /* fld float */
    eax = ebp + -20;
    PUSH32(esp, eax);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebx + 0x40)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x4C)); /* fmul dword ptr [esi + 0x4c] */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebx + 0x38)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x44)); /* fmul dword ptr [esi + 0x44] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C47CCu); RECOMP_ABI_CALL(0x004C3897u, sub_004C3897); /* call 0x004C3897 */

loc_004C47CC: ;
    eax = MEM32(ebp + -20);
    goto loc_004C47D6;

loc_004C47D1: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ebp + -20) = eax;

loc_004C47D6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 0x24)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(edi + 0x24) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C47E1; /* je: equal / zero */

loc_004C47DB: ;
    MEM32(edi) = MEM32(edi) | 0x20;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(edi + 0x24) = eax;

loc_004C47E1: ;
    _fa = (uint32_t)(MEM8(ebp + 0xB)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + 0xB), 0x20 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004C4832; /* je: equal / zero */

loc_004C47E7: ;
    _fa = (uint32_t)(MEM32(esi + 0x40)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x40), 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C47FB; /* je: equal / zero */

loc_004C47ED: ;
    fp_push(MEMF(esi + 0x74)); /* fld float */
    eax = MEM32(esi + 0x78);
    MEMF(ebp + -16) = (float)fp_top(); /* fst */
    MEM32(ebp + -12) = eax;
    goto loc_004C4805;

loc_004C47FB: ;
    fp_push(0.0); /* fldz */
    MEMF(ebp + -16) = (float)fp_top(); /* fst */
    fp_push(0.0); /* fldz */
    MEMF(ebp + -12) = (float)fp_top(); fp_pop(); /* fstp */

loc_004C4805: ;
    fp_push(MEMF(edi + 0x28)); /* fld float */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_004C4822; /* jp: parity */

loc_004C4813: ;
    fp_push(MEMF(edi + 0x2C)); /* fld float */
    fp_push(MEMF(ebp + -12)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_004C4830; /* jnp: not parity */

loc_004C4822: ;
    eax = MEM32(ebp + -12);
    MEMF(edi + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(edi) = MEM32(edi) | 0x40;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(edi + 0x2C) = eax;
    goto loc_004C4832;

loc_004C4830: ;
    fp_pop(); /* fstp st(0) */

loc_004C4832: ;
    eax = MEM32(ebp + 0x10);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C48E5; /* je: equal / zero */

loc_004C483F: ;
    ecx = MEM32(ebp + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C48E5; /* je: equal / zero */

loc_004C484A: ;
    _fa = (uint32_t)(MEM8(ebp + 0xB)) & 0xFFu; _fb = (uint32_t)(0x14) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + 0xB), 0x14 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_004C4860; /* jne: not equal / not zero */

loc_004C4850: ;
    ebx = MEM32(eax);
    ebx = ebx | MEM32(ecx);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7F0804) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, 0x7F0804 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004C48E5; /* je: equal / zero */

loc_004C4860: ;
    _fa = (uint32_t)(MEM32(esi + 0x40)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x40), 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C48A1; /* je: equal / zero */

loc_004C4866: ;
    fp_push(MEMF(eax + 0x30)); /* fld float */
    edx = ebp + -4;
    PUSH32(esp, edx);
    edx = ebp + -8;
    PUSH32(esp, edx);
    edx = ebp + -24;
    PUSH32(esp, edx);
    edx = ebp + -28;
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax + 0xC)); /* fld float */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x68)); /* fld float */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C4893u); RECOMP_ABI_CALL(0x004CCACDu, sub_004CCACD); /* call 0x004CCACD */

loc_004C4893: ;
    _fa = (uint32_t)(MEM8(esi + 0x58)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x58), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004C48AD; /* je: equal / zero */

loc_004C4899: ;
    eax = MEM32(ebp + -8);
    MEM32(ebp + -4) = eax;
    goto loc_004C48AD;

loc_004C48A1: ;
    MEM32(ebp + -28) = edx;
    MEM32(ebp + -24) = edx;
    MEM32(ebp + -8) = edx;
    MEM32(ebp + -4) = edx;

loc_004C48AD: ;
    eax = MEM32(ebp + -28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 0x1C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(edi + 0x1C) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004C48BD; /* jne: not equal / not zero */

loc_004C48B5: ;
    ecx = MEM32(ebp + -24);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 0x20)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(edi + 0x20) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C48C9; /* je: equal / zero */

loc_004C48BD: ;
    MEM32(edi) = MEM32(edi) | 0x10;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(edi + 0x1C) = eax;
    eax = MEM32(ebp + -24);
    MEM32(edi + 0x20) = eax;

loc_004C48C9: ;
    eax = MEM32(ebp + -8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 0x30)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(edi + 0x30) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004C48D9; /* jne: not equal / not zero */

loc_004C48D1: ;
    ecx = MEM32(ebp + -4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 0x34)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(edi + 0x34) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C48E5; /* je: equal / zero */

loc_004C48D9: ;
    MEM8(edi) = MEM8(edi) | 0x80;
    _fa = (uint32_t)(MEM8(edi)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    MEM32(edi + 0x30) = eax;
    eax = MEM32(ebp + -4);
    MEM32(edi + 0x34) = eax;

loc_004C48E5: ;
    ecx = ebp + 8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C48EDu); RECOMP_ABI_CALL(0x004C370Eu, sub_004C370E); /* call 0x004C370E */

loc_004C48ED: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 24; return; /* ret 20 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_004C48F4
 * Original: 0x004C48F4 - 0x004C492B (55 bytes, 17 insns)
 * Category: game_audio
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004C48F4(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004C48F4: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    ecx = ebp + 0xC;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C4900u); RECOMP_ABI_CALL(0x004C36E9u, sub_004C36E9); /* call 0x004C36E9 */

loc_004C4900: ;
    _fa = (uint32_t)(MEM32(0x4E1670)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x4E1670), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C4911; /* je: equal / zero */

loc_004C4909: ;
    ecx = ebp + -4;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C4911u); RECOMP_ABI_CALL(0x004CC82Bu, sub_004CC82B); /* call 0x004CC82B */

loc_004C4911: ;
    PUSH32(esp, MEM32(ebp + 0xC));
    ecx = ebp + -4;
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C491Fu); RECOMP_ABI_CALL(0x004CCCE6u, sub_004CCCE6); /* call 0x004CCCE6 */

loc_004C491F: ;
    ecx = ebp + 0xC;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C4927u); RECOMP_ABI_CALL(0x004C370Eu, sub_004C370E); /* call 0x004C370E */

loc_004C4927: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004C492B
 * Original: 0x004C492B - 0x004C4935 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C492B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004C492B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    MEM32(esp + 4) = MEM32(esp + 4) - 4;
    _fa = (uint32_t)(MEM32(esp + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_004C42FC(); return; /* tail jmp 0x004C42FC */

}

/**
 * sub_004C4935
 * Original: 0x004C4935 - 0x004C493F (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C4935(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004C4935: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    MEM32(esp + 4) = MEM32(esp + 4) - 4;
    _fa = (uint32_t)(MEM32(esp + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_004C4343(); return; /* tail jmp 0x004C4343 */

}

/**
 * sub_004C493F
 * Original: 0x004C493F - 0x004C495B (28 bytes, 10 insns)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C493F(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004C493F: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x586074;
    if (TEST_Z(_fa, _fb)) goto loc_004C4955; /* je: equal / zero */

loc_004C494F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004C4955u); RECOMP_ABI_CALL(0x004C6B6Fu, sub_004C6B6F); /* call 0x004C6B6F */

loc_004C4955: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004C494F
 * Original: 0x004C494F - 0x004C495B (12 bytes, 5 insns)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C494F(void)
{

loc_004C494F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004C4955u); RECOMP_ABI_CALL(0x004C6B6Fu, sub_004C6B6F); /* call 0x004C6B6F */

loc_004C4955: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004C495B
 * Original: 0x004C495B - 0x004C49A9 (78 bytes, 24 insns)
 * Category: game_audio
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C495B(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004C495B: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004C4961u); RECOMP_ABI_CALL(0x004C38BEu, sub_004C38BE); /* call 0x004C38BE */

loc_004C4961: ;
    _fa = (uint32_t)(MEM32(0x4E1668)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x4E1668), 0 (32-bit) */
    esi = ZX8(LO8(eax));
    if (CMP_EQ(_fa, _fb)) goto loc_004C4983; /* je: equal / zero */

loc_004C496D: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C497C; /* je: equal / zero */

loc_004C4971: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x4E1674);
    { uint32_t _icall_target = MEM32(0x561008); PUSH32(esp, 0x004C497Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C4976u); } /* indirect call */
    }

loc_004C497C: ;
    eax = 0x80004005u;
    goto loc_004C49A5;

loc_004C4983: ;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, 0x004C4991u); RECOMP_ABI_CALL(0x004C3D45u, sub_004C3D45); /* call 0x004C3D45 */

loc_004C4991: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    edi = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_004C49A2; /* je: equal / zero */

loc_004C4997: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x4E1674);
    { uint32_t _icall_target = MEM32(0x561008); PUSH32(esp, 0x004C49A2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C499Cu); } /* indirect call */
    }

loc_004C49A2: ;
    eax = edi;
    POP32(esp, edi);

loc_004C49A5: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004C49A9
 * Original: 0x004C49A9 - 0x004C49F7 (78 bytes, 24 insns)
 * Category: game_audio
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C49A9(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004C49A9: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004C49AFu); RECOMP_ABI_CALL(0x004C38BEu, sub_004C38BE); /* call 0x004C38BE */

loc_004C49AF: ;
    _fa = (uint32_t)(MEM32(0x4E1668)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x4E1668), 0 (32-bit) */
    esi = ZX8(LO8(eax));
    if (CMP_EQ(_fa, _fb)) goto loc_004C49D1; /* je: equal / zero */

loc_004C49BB: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C49CA; /* je: equal / zero */

loc_004C49BF: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x4E1674);
    { uint32_t _icall_target = MEM32(0x561008); PUSH32(esp, 0x004C49CAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C49C4u); } /* indirect call */
    }

loc_004C49CA: ;
    eax = 0x80004005u;
    goto loc_004C49F3;

loc_004C49D1: ;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, 0x004C49DFu); RECOMP_ABI_CALL(0x004C3D2Cu, sub_004C3D2C); /* call 0x004C3D2C */

loc_004C49DF: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    edi = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_004C49F0; /* je: equal / zero */

loc_004C49E5: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x4E1674);
    { uint32_t _icall_target = MEM32(0x561008); PUSH32(esp, 0x004C49F0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C49EAu); } /* indirect call */
    }

loc_004C49F0: ;
    eax = edi;
    POP32(esp, edi);

loc_004C49F3: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004C49F7
 * Original: 0x004C49F7 - 0x004C4A45 (78 bytes, 24 insns)
 * Category: game_audio
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C49F7(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004C49F7: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004C49FDu); RECOMP_ABI_CALL(0x004C38BEu, sub_004C38BE); /* call 0x004C38BE */

loc_004C49FD: ;
    _fa = (uint32_t)(MEM32(0x4E1668)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x4E1668), 0 (32-bit) */
    esi = ZX8(LO8(eax));
    if (CMP_EQ(_fa, _fb)) goto loc_004C4A1F; /* je: equal / zero */

loc_004C4A09: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C4A18; /* je: equal / zero */

loc_004C4A0D: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x4E1674);
    { uint32_t _icall_target = MEM32(0x561008); PUSH32(esp, 0x004C4A18u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C4A12u); } /* indirect call */
    }

loc_004C4A18: ;
    eax = 0x80004005u;
    goto loc_004C4A41;

loc_004C4A1F: ;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, 0x004C4A2Du); RECOMP_ABI_CALL(0x004C3D61u, sub_004C3D61); /* call 0x004C3D61 */

loc_004C4A2D: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    edi = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_004C4A3E; /* je: equal / zero */

loc_004C4A33: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x4E1674);
    { uint32_t _icall_target = MEM32(0x561008); PUSH32(esp, 0x004C4A3Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C4A38u); } /* indirect call */
    }

loc_004C4A3E: ;
    eax = edi;
    POP32(esp, edi);

loc_004C4A41: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004C4A45
 * Original: 0x004C4A45 - 0x004C4A93 (78 bytes, 24 insns)
 * Category: game_audio
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C4A45(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004C4A45: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004C4A4Bu); RECOMP_ABI_CALL(0x004C38BEu, sub_004C38BE); /* call 0x004C38BE */

loc_004C4A4B: ;
    _fa = (uint32_t)(MEM32(0x4E1668)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x4E1668), 0 (32-bit) */
    esi = ZX8(LO8(eax));
    if (CMP_EQ(_fa, _fb)) goto loc_004C4A6D; /* je: equal / zero */

loc_004C4A57: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C4A66; /* je: equal / zero */

loc_004C4A5B: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x4E1674);
    { uint32_t _icall_target = MEM32(0x561008); PUSH32(esp, 0x004C4A66u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C4A60u); } /* indirect call */
    }

loc_004C4A66: ;
    eax = 0x80004005u;
    goto loc_004C4A8F;

loc_004C4A6D: ;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, 0x004C4A7Bu); RECOMP_ABI_CALL(0x004C3D74u, sub_004C3D74); /* call 0x004C3D74 */

loc_004C4A7B: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    edi = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_004C4A8C; /* je: equal / zero */

loc_004C4A81: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x4E1674);
    { uint32_t _icall_target = MEM32(0x561008); PUSH32(esp, 0x004C4A8Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C4A86u); } /* indirect call */
    }

loc_004C4A8C: ;
    eax = edi;
    POP32(esp, edi);

loc_004C4A8F: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004C4A93
 * Original: 0x004C4A93 - 0x004C4AE1 (78 bytes, 24 insns)
 * Category: game_audio
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C4A93(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004C4A93: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004C4A99u); RECOMP_ABI_CALL(0x004C38BEu, sub_004C38BE); /* call 0x004C38BE */

loc_004C4A99: ;
    _fa = (uint32_t)(MEM32(0x4E1668)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x4E1668), 0 (32-bit) */
    esi = ZX8(LO8(eax));
    if (CMP_EQ(_fa, _fb)) goto loc_004C4ABB; /* je: equal / zero */

loc_004C4AA5: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C4AB4; /* je: equal / zero */

loc_004C4AA9: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x4E1674);
    { uint32_t _icall_target = MEM32(0x561008); PUSH32(esp, 0x004C4AB4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C4AAEu); } /* indirect call */
    }

loc_004C4AB4: ;
    eax = 0x80004005u;
    goto loc_004C4ADD;

loc_004C4ABB: ;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, 0x004C4AC9u); RECOMP_ABI_CALL(0x004C3D87u, sub_004C3D87); /* call 0x004C3D87 */

loc_004C4AC9: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    edi = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_004C4ADA; /* je: equal / zero */

loc_004C4ACF: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x4E1674);
    { uint32_t _icall_target = MEM32(0x561008); PUSH32(esp, 0x004C4ADAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C4AD4u); } /* indirect call */
    }

loc_004C4ADA: ;
    eax = edi;
    POP32(esp, edi);

loc_004C4ADD: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004C4AE1
 * Original: 0x004C4AE1 - 0x004C4B2F (78 bytes, 24 insns)
 * Category: game_audio
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C4AE1(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004C4AE1: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004C4AE7u); RECOMP_ABI_CALL(0x004C38BEu, sub_004C38BE); /* call 0x004C38BE */

loc_004C4AE7: ;
    _fa = (uint32_t)(MEM32(0x4E1668)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x4E1668), 0 (32-bit) */
    esi = ZX8(LO8(eax));
    if (CMP_EQ(_fa, _fb)) goto loc_004C4B09; /* je: equal / zero */

loc_004C4AF3: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C4B02; /* je: equal / zero */

loc_004C4AF7: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x4E1674);
    { uint32_t _icall_target = MEM32(0x561008); PUSH32(esp, 0x004C4B02u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C4AFCu); } /* indirect call */
    }

loc_004C4B02: ;
    eax = 0x80004005u;
    goto loc_004C4B2B;

loc_004C4B09: ;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, 0x004C4B17u); RECOMP_ABI_CALL(0x004C3D9Au, sub_004C3D9A); /* call 0x004C3D9A */

loc_004C4B17: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    edi = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_004C4B28; /* je: equal / zero */

loc_004C4B1D: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x4E1674);
    { uint32_t _icall_target = MEM32(0x561008); PUSH32(esp, 0x004C4B28u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C4B22u); } /* indirect call */
    }

loc_004C4B28: ;
    eax = edi;
    POP32(esp, edi);

loc_004C4B2B: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004C4B2F
 * Original: 0x004C4B2F - 0x004C4B7D (78 bytes, 24 insns)
 * Category: game_audio
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C4B2F(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004C4B2F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004C4B35u); RECOMP_ABI_CALL(0x004C38BEu, sub_004C38BE); /* call 0x004C38BE */

loc_004C4B35: ;
    _fa = (uint32_t)(MEM32(0x4E1668)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x4E1668), 0 (32-bit) */
    esi = ZX8(LO8(eax));
    if (CMP_EQ(_fa, _fb)) goto loc_004C4B57; /* je: equal / zero */

loc_004C4B41: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C4B50; /* je: equal / zero */

loc_004C4B45: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x4E1674);
    { uint32_t _icall_target = MEM32(0x561008); PUSH32(esp, 0x004C4B50u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C4B4Au); } /* indirect call */
    }

loc_004C4B50: ;
    eax = 0x80004005u;
    goto loc_004C4B79;

loc_004C4B57: ;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, 0x004C4B65u); RECOMP_ABI_CALL(0x004C3DBDu, sub_004C3DBD); /* call 0x004C3DBD */

loc_004C4B65: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    edi = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_004C4B76; /* je: equal / zero */

loc_004C4B6B: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x4E1674);
    { uint32_t _icall_target = MEM32(0x561008); PUSH32(esp, 0x004C4B76u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C4B70u); } /* indirect call */
    }

loc_004C4B76: ;
    eax = edi;
    POP32(esp, edi);

loc_004C4B79: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004C4B7D
 * Original: 0x004C4B7D - 0x004C4BCB (78 bytes, 24 insns)
 * Category: game_audio
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C4B7D(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004C4B7D: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004C4B83u); RECOMP_ABI_CALL(0x004C38BEu, sub_004C38BE); /* call 0x004C38BE */

loc_004C4B83: ;
    _fa = (uint32_t)(MEM32(0x4E1668)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x4E1668), 0 (32-bit) */
    esi = ZX8(LO8(eax));
    if (CMP_EQ(_fa, _fb)) goto loc_004C4BA5; /* je: equal / zero */

loc_004C4B8F: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C4B9E; /* je: equal / zero */

loc_004C4B93: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x4E1674);
    { uint32_t _icall_target = MEM32(0x561008); PUSH32(esp, 0x004C4B9Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C4B98u); } /* indirect call */
    }

loc_004C4B9E: ;
    eax = 0x80004005u;
    goto loc_004C4BC7;

loc_004C4BA5: ;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, 0x004C4BB3u); RECOMP_ABI_CALL(0x004C3DEBu, sub_004C3DEB); /* call 0x004C3DEB */

loc_004C4BB3: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    edi = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_004C4BC4; /* je: equal / zero */

loc_004C4BB9: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x4E1674);
    { uint32_t _icall_target = MEM32(0x561008); PUSH32(esp, 0x004C4BC4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C4BBEu); } /* indirect call */
    }

loc_004C4BC4: ;
    eax = edi;
    POP32(esp, edi);

loc_004C4BC7: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004C4BCB
 * Original: 0x004C4BCB - 0x004C4C19 (78 bytes, 24 insns)
 * Category: game_audio
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C4BCB(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004C4BCB: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004C4BD1u); RECOMP_ABI_CALL(0x004C38BEu, sub_004C38BE); /* call 0x004C38BE */

loc_004C4BD1: ;
    _fa = (uint32_t)(MEM32(0x4E1668)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x4E1668), 0 (32-bit) */
    esi = ZX8(LO8(eax));
    if (CMP_EQ(_fa, _fb)) goto loc_004C4BF3; /* je: equal / zero */

loc_004C4BDD: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C4BEC; /* je: equal / zero */

loc_004C4BE1: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x4E1674);
    { uint32_t _icall_target = MEM32(0x561008); PUSH32(esp, 0x004C4BECu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C4BE6u); } /* indirect call */
    }

loc_004C4BEC: ;
    eax = 0x80004005u;
    goto loc_004C4C15;

loc_004C4BF3: ;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, 0x004C4C01u); RECOMP_ABI_CALL(0x004C3DFEu, sub_004C3DFE); /* call 0x004C3DFE */

loc_004C4C01: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    edi = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_004C4C12; /* je: equal / zero */

loc_004C4C07: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x4E1674);
    { uint32_t _icall_target = MEM32(0x561008); PUSH32(esp, 0x004C4C12u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C4C0Cu); } /* indirect call */
    }

loc_004C4C12: ;
    eax = edi;
    POP32(esp, edi);

loc_004C4C15: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004C4C19
 * Original: 0x004C4C19 - 0x004C4C65 (76 bytes, 22 insns)
 * Category: game_audio
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C4C19(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004C4C19: ;
    PUSH32(esp, 0x004C4C1Eu); RECOMP_ABI_CALL(0x004C38BEu, sub_004C38BE); /* call 0x004C38BE */

loc_004C4C1E: ;
    _fa = (uint32_t)(MEM32(0x4E1668)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x4E1668), 0 (32-bit) */
    ecx = ZX8(LO8(eax));
    if (CMP_EQ(_fa, _fb)) goto loc_004C4C40; /* je: equal / zero */

loc_004C4C2A: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C4C39; /* je: equal / zero */

loc_004C4C2E: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x4E1674);
    { uint32_t _icall_target = MEM32(0x561008); PUSH32(esp, 0x004C4C39u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C4C33u); } /* indirect call */
    }

loc_004C4C39: ;
    eax = 0x80004005u;
    goto loc_004C4C62;

loc_004C4C40: ;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(esp + 0xC));
    PUSH32(esp, MEM32(esp + 0xC));
    PUSH32(esp, 0x004C4C4Eu); RECOMP_ABI_CALL(0x004C3F2Fu, sub_004C3F2F); /* call 0x004C3F2F */

loc_004C4C4E: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    esi = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_004C4C5F; /* je: equal / zero */

loc_004C4C54: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x4E1674);
    { uint32_t _icall_target = MEM32(0x561008); PUSH32(esp, 0x004C4C5Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C4C59u); } /* indirect call */
    }

loc_004C4C5F: ;
    eax = esi;
    POP32(esp, esi);

loc_004C4C62: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004C4C65
 * Original: 0x004C4C65 - 0x004C4CB7 (82 bytes, 26 insns)
 * Category: game_audio
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C4C65(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004C4C65: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004C4C6Bu); RECOMP_ABI_CALL(0x004C38BEu, sub_004C38BE); /* call 0x004C38BE */

loc_004C4C6B: ;
    _fa = (uint32_t)(MEM32(0x4E1668)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x4E1668), 0 (32-bit) */
    esi = ZX8(LO8(eax));
    if (CMP_EQ(_fa, _fb)) goto loc_004C4C8D; /* je: equal / zero */

loc_004C4C77: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C4C86; /* je: equal / zero */

loc_004C4C7B: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x4E1674);
    { uint32_t _icall_target = MEM32(0x561008); PUSH32(esp, 0x004C4C86u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C4C80u); } /* indirect call */
    }

loc_004C4C86: ;
    eax = 0x80004005u;
    goto loc_004C4CB3;

loc_004C4C8D: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esp + 0x10));
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x004C4C9Fu); RECOMP_ABI_CALL(0x004C3D2Cu, sub_004C3D2C); /* call 0x004C3D2C */

loc_004C4C9F: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    edi = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_004C4CB0; /* je: equal / zero */

loc_004C4CA5: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x4E1674);
    { uint32_t _icall_target = MEM32(0x561008); PUSH32(esp, 0x004C4CB0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C4CAAu); } /* indirect call */
    }

loc_004C4CB0: ;
    eax = edi;
    POP32(esp, edi);

loc_004C4CB3: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004C4CB7
 * Original: 0x004C4CB7 - 0x004C4D09 (82 bytes, 26 insns)
 * Category: game_audio
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C4CB7(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004C4CB7: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004C4CBDu); RECOMP_ABI_CALL(0x004C38BEu, sub_004C38BE); /* call 0x004C38BE */

loc_004C4CBD: ;
    _fa = (uint32_t)(MEM32(0x4E1668)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x4E1668), 0 (32-bit) */
    esi = ZX8(LO8(eax));
    if (CMP_EQ(_fa, _fb)) goto loc_004C4CDF; /* je: equal / zero */

loc_004C4CC9: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C4CD8; /* je: equal / zero */

loc_004C4CCD: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x4E1674);
    { uint32_t _icall_target = MEM32(0x561008); PUSH32(esp, 0x004C4CD8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C4CD2u); } /* indirect call */
    }

loc_004C4CD8: ;
    eax = 0x80004005u;
    goto loc_004C4D05;

loc_004C4CDF: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esp + 0x10));
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x004C4CF1u); RECOMP_ABI_CALL(0x004C3D45u, sub_004C3D45); /* call 0x004C3D45 */

loc_004C4CF1: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    edi = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_004C4D02; /* je: equal / zero */

loc_004C4CF7: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x4E1674);
    { uint32_t _icall_target = MEM32(0x561008); PUSH32(esp, 0x004C4D02u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C4CFCu); } /* indirect call */
    }

loc_004C4D02: ;
    eax = edi;
    POP32(esp, edi);

loc_004C4D05: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004C4D09
 * Original: 0x004C4D09 - 0x004C4D5B (82 bytes, 26 insns)
 * Category: game_audio
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C4D09(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004C4D09: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004C4D0Fu); RECOMP_ABI_CALL(0x004C38BEu, sub_004C38BE); /* call 0x004C38BE */

loc_004C4D0F: ;
    _fa = (uint32_t)(MEM32(0x4E1668)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x4E1668), 0 (32-bit) */
    esi = ZX8(LO8(eax));
    if (CMP_EQ(_fa, _fb)) goto loc_004C4D31; /* je: equal / zero */

loc_004C4D1B: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C4D2A; /* je: equal / zero */

loc_004C4D1F: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x4E1674);
    { uint32_t _icall_target = MEM32(0x561008); PUSH32(esp, 0x004C4D2Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C4D24u); } /* indirect call */
    }

loc_004C4D2A: ;
    eax = 0x80004005u;
    goto loc_004C4D57;

loc_004C4D31: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esp + 0x10));
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x004C4D43u); RECOMP_ABI_CALL(0x004C3D61u, sub_004C3D61); /* call 0x004C3D61 */

loc_004C4D43: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    edi = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_004C4D54; /* je: equal / zero */

loc_004C4D49: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x4E1674);
    { uint32_t _icall_target = MEM32(0x561008); PUSH32(esp, 0x004C4D54u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C4D4Eu); } /* indirect call */
    }

loc_004C4D54: ;
    eax = edi;
    POP32(esp, edi);

loc_004C4D57: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004C4D5B
 * Original: 0x004C4D5B - 0x004C4DAD (82 bytes, 26 insns)
 * Category: game_audio
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C4D5B(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004C4D5B: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004C4D61u); RECOMP_ABI_CALL(0x004C38BEu, sub_004C38BE); /* call 0x004C38BE */

loc_004C4D61: ;
    _fa = (uint32_t)(MEM32(0x4E1668)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x4E1668), 0 (32-bit) */
    esi = ZX8(LO8(eax));
    if (CMP_EQ(_fa, _fb)) goto loc_004C4D83; /* je: equal / zero */

loc_004C4D6D: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C4D7C; /* je: equal / zero */

loc_004C4D71: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x4E1674);
    { uint32_t _icall_target = MEM32(0x561008); PUSH32(esp, 0x004C4D7Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C4D76u); } /* indirect call */
    }

loc_004C4D7C: ;
    eax = 0x80004005u;
    goto loc_004C4DA9;

loc_004C4D83: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esp + 0x10));
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x004C4D95u); RECOMP_ABI_CALL(0x004C3D74u, sub_004C3D74); /* call 0x004C3D74 */

loc_004C4D95: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    edi = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_004C4DA6; /* je: equal / zero */

loc_004C4D9B: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x4E1674);
    { uint32_t _icall_target = MEM32(0x561008); PUSH32(esp, 0x004C4DA6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C4DA0u); } /* indirect call */
    }

loc_004C4DA6: ;
    eax = edi;
    POP32(esp, edi);

loc_004C4DA9: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004C4DAD
 * Original: 0x004C4DAD - 0x004C4DFF (82 bytes, 26 insns)
 * Category: game_audio
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C4DAD(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004C4DAD: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004C4DB3u); RECOMP_ABI_CALL(0x004C38BEu, sub_004C38BE); /* call 0x004C38BE */

loc_004C4DB3: ;
    _fa = (uint32_t)(MEM32(0x4E1668)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x4E1668), 0 (32-bit) */
    esi = ZX8(LO8(eax));
    if (CMP_EQ(_fa, _fb)) goto loc_004C4DD5; /* je: equal / zero */

loc_004C4DBF: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C4DCE; /* je: equal / zero */

loc_004C4DC3: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x4E1674);
    { uint32_t _icall_target = MEM32(0x561008); PUSH32(esp, 0x004C4DCEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C4DC8u); } /* indirect call */
    }

loc_004C4DCE: ;
    eax = 0x80004005u;
    goto loc_004C4DFB;

loc_004C4DD5: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esp + 0x10));
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x004C4DE7u); RECOMP_ABI_CALL(0x004C3D87u, sub_004C3D87); /* call 0x004C3D87 */

loc_004C4DE7: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    edi = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_004C4DF8; /* je: equal / zero */

loc_004C4DED: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x4E1674);
    { uint32_t _icall_target = MEM32(0x561008); PUSH32(esp, 0x004C4DF8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C4DF2u); } /* indirect call */
    }

loc_004C4DF8: ;
    eax = edi;
    POP32(esp, edi);

loc_004C4DFB: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004C4DFF
 * Original: 0x004C4DFF - 0x004C4E51 (82 bytes, 26 insns)
 * Category: game_audio
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C4DFF(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004C4DFF: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004C4E05u); RECOMP_ABI_CALL(0x004C38BEu, sub_004C38BE); /* call 0x004C38BE */

loc_004C4E05: ;
    _fa = (uint32_t)(MEM32(0x4E1668)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x4E1668), 0 (32-bit) */
    esi = ZX8(LO8(eax));
    if (CMP_EQ(_fa, _fb)) goto loc_004C4E27; /* je: equal / zero */

loc_004C4E11: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C4E20; /* je: equal / zero */

loc_004C4E15: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x4E1674);
    { uint32_t _icall_target = MEM32(0x561008); PUSH32(esp, 0x004C4E20u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C4E1Au); } /* indirect call */
    }

loc_004C4E20: ;
    eax = 0x80004005u;
    goto loc_004C4E4D;

loc_004C4E27: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esp + 0x10));
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x004C4E39u); RECOMP_ABI_CALL(0x004C3D9Au, sub_004C3D9A); /* call 0x004C3D9A */

loc_004C4E39: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    edi = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_004C4E4A; /* je: equal / zero */

loc_004C4E3F: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x4E1674);
    { uint32_t _icall_target = MEM32(0x561008); PUSH32(esp, 0x004C4E4Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C4E44u); } /* indirect call */
    }

loc_004C4E4A: ;
    eax = edi;
    POP32(esp, edi);

loc_004C4E4D: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004C4E51
 * Original: 0x004C4E51 - 0x004C4EA3 (82 bytes, 26 insns)
 * Category: game_audio
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C4E51(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004C4E51: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004C4E57u); RECOMP_ABI_CALL(0x004C38BEu, sub_004C38BE); /* call 0x004C38BE */

loc_004C4E57: ;
    _fa = (uint32_t)(MEM32(0x4E1668)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x4E1668), 0 (32-bit) */
    esi = ZX8(LO8(eax));
    if (CMP_EQ(_fa, _fb)) goto loc_004C4E79; /* je: equal / zero */

loc_004C4E63: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C4E72; /* je: equal / zero */

loc_004C4E67: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x4E1674);
    { uint32_t _icall_target = MEM32(0x561008); PUSH32(esp, 0x004C4E72u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C4E6Cu); } /* indirect call */
    }

loc_004C4E72: ;
    eax = 0x80004005u;
    goto loc_004C4E9F;

loc_004C4E79: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esp + 0x10));
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x004C4E8Bu); RECOMP_ABI_CALL(0x004C3DBDu, sub_004C3DBD); /* call 0x004C3DBD */

loc_004C4E8B: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    edi = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_004C4E9C; /* je: equal / zero */

loc_004C4E91: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x4E1674);
    { uint32_t _icall_target = MEM32(0x561008); PUSH32(esp, 0x004C4E9Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C4E96u); } /* indirect call */
    }

loc_004C4E9C: ;
    eax = edi;
    POP32(esp, edi);

loc_004C4E9F: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004C4EA3
 * Original: 0x004C4EA3 - 0x004C4EF5 (82 bytes, 26 insns)
 * Category: game_audio
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C4EA3(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004C4EA3: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004C4EA9u); RECOMP_ABI_CALL(0x004C38BEu, sub_004C38BE); /* call 0x004C38BE */

loc_004C4EA9: ;
    _fa = (uint32_t)(MEM32(0x4E1668)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x4E1668), 0 (32-bit) */
    esi = ZX8(LO8(eax));
    if (CMP_EQ(_fa, _fb)) goto loc_004C4ECB; /* je: equal / zero */

loc_004C4EB5: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C4EC4; /* je: equal / zero */

loc_004C4EB9: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x4E1674);
    { uint32_t _icall_target = MEM32(0x561008); PUSH32(esp, 0x004C4EC4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C4EBEu); } /* indirect call */
    }

loc_004C4EC4: ;
    eax = 0x80004005u;
    goto loc_004C4EF1;

loc_004C4ECB: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esp + 0x10));
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x004C4EDDu); RECOMP_ABI_CALL(0x004C3DEBu, sub_004C3DEB); /* call 0x004C3DEB */

loc_004C4EDD: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    edi = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_004C4EEE; /* je: equal / zero */

loc_004C4EE3: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x4E1674);
    { uint32_t _icall_target = MEM32(0x561008); PUSH32(esp, 0x004C4EEEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C4EE8u); } /* indirect call */
    }

loc_004C4EEE: ;
    eax = edi;
    POP32(esp, edi);

loc_004C4EF1: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004C4EF5
 * Original: 0x004C4EF5 - 0x004C4F47 (82 bytes, 26 insns)
 * Category: game_audio
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C4EF5(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004C4EF5: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004C4EFBu); RECOMP_ABI_CALL(0x004C38BEu, sub_004C38BE); /* call 0x004C38BE */

loc_004C4EFB: ;
    _fa = (uint32_t)(MEM32(0x4E1668)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x4E1668), 0 (32-bit) */
    esi = ZX8(LO8(eax));
    if (CMP_EQ(_fa, _fb)) goto loc_004C4F1D; /* je: equal / zero */

loc_004C4F07: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C4F16; /* je: equal / zero */

loc_004C4F0B: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x4E1674);
    { uint32_t _icall_target = MEM32(0x561008); PUSH32(esp, 0x004C4F16u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C4F10u); } /* indirect call */
    }

loc_004C4F16: ;
    eax = 0x80004005u;
    goto loc_004C4F43;

loc_004C4F1D: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esp + 0x10));
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x004C4F2Fu); RECOMP_ABI_CALL(0x004C3DFEu, sub_004C3DFE); /* call 0x004C3DFE */

loc_004C4F2F: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    edi = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_004C4F40; /* je: equal / zero */

loc_004C4F35: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x4E1674);
    { uint32_t _icall_target = MEM32(0x561008); PUSH32(esp, 0x004C4F40u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C4F3Au); } /* indirect call */
    }

loc_004C4F40: ;
    eax = edi;
    POP32(esp, edi);

loc_004C4F43: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004C4F47
 * Original: 0x004C4F47 - 0x004C4F97 (80 bytes, 24 insns)
 * Category: game_audio
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C4F47(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004C4F47: ;
    PUSH32(esp, 0x004C4F4Cu); RECOMP_ABI_CALL(0x004C38BEu, sub_004C38BE); /* call 0x004C38BE */

loc_004C4F4C: ;
    _fa = (uint32_t)(MEM32(0x4E1668)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x4E1668), 0 (32-bit) */
    ecx = ZX8(LO8(eax));
    if (CMP_EQ(_fa, _fb)) goto loc_004C4F6E; /* je: equal / zero */

loc_004C4F58: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C4F67; /* je: equal / zero */

loc_004C4F5C: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x4E1674);
    { uint32_t _icall_target = MEM32(0x561008); PUSH32(esp, 0x004C4F67u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C4F61u); } /* indirect call */
    }

loc_004C4F67: ;
    eax = 0x80004005u;
    goto loc_004C4F94;

loc_004C4F6E: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(esp + 0xC));
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x004C4F80u); RECOMP_ABI_CALL(0x004C3F2Fu, sub_004C3F2F); /* call 0x004C3F2F */

loc_004C4F80: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    esi = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_004C4F91; /* je: equal / zero */

loc_004C4F86: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x4E1674);
    { uint32_t _icall_target = MEM32(0x561008); PUSH32(esp, 0x004C4F91u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C4F8Bu); } /* indirect call */
    }

loc_004C4F91: ;
    eax = esi;
    POP32(esp, esi);

loc_004C4F94: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004C4F97
 * Original: 0x004C4F97 - 0x004C4FBE (39 bytes, 16 insns)
 * Category: game_audio
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004C4F97(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_004C4F97: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, MEM32(ebp + 0x18));
    eax = MEM32(ebp + 8);
    PUSH32(esp, MEM32(ebp + 0x14));
    ecx = eax;
    PUSH32(esp, MEM32(ebp + 0x10));
    _fb = (uint32_t)(0xFFFFFFF8u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xFFFFFFF8u)) >> 32) & 1);
    eax = eax + 0xFFFFFFF8u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, MEM32(ebp + 0xC));
    _cf = (int)((ecx) != 0);
    ecx = (uint32_t)(0u - (uint32_t)(ecx));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C4FBAu); RECOMP_ABI_CALL(0x004C3AA9u, sub_004C3AA9); /* call 0x004C3AA9 */

loc_004C4FBA: ;
    POP32(esp, ebp);
    esp += 24; return; /* ret 20 */

}

/**
 * sub_004C4FBE
 * Original: 0x004C4FBE - 0x004C4FE8 (42 bytes, 17 insns)
 * Category: game_audio
 * CC: cdecl, 6 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004C4FBE(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_004C4FBE: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, MEM32(ebp + 0x1C));
    eax = MEM32(ebp + 8);
    PUSH32(esp, MEM32(ebp + 0x18));
    ecx = eax;
    PUSH32(esp, MEM32(ebp + 0x14));
    _fb = (uint32_t)(0xFFFFFFF8u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xFFFFFFF8u)) >> 32) & 1);
    eax = eax + 0xFFFFFFF8u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, MEM32(ebp + 0x10));
    _cf = (int)((ecx) != 0);
    ecx = (uint32_t)(0u - (uint32_t)(ecx));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    PUSH32(esp, MEM32(ebp + 0xC));
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C4FE4u); RECOMP_ABI_CALL(0x004C3B0Du, sub_004C3B0D); /* call 0x004C3B0D */

loc_004C4FE4: ;
    POP32(esp, ebp);
    esp += 28; return; /* ret 24 */

}

/**
 * sub_004C4FE8
 * Original: 0x004C4FE8 - 0x004C5008 (32 bytes, 11 insns)
 * Category: game_audio
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C4FE8(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_004C4FE8: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, MEM32(esp + 0xC));
    ecx = eax;
    PUSH32(esp, MEM32(esp + 0xC));
    _fb = (uint32_t)(0xFFFFFFF8u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xFFFFFFF8u)) >> 32) & 1);
    eax = eax + 0xFFFFFFF8u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = (int)((ecx) != 0);
    ecx = (uint32_t)(0u - (uint32_t)(ecx));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x004C5005u); RECOMP_ABI_CALL(0x004C3B6Fu, sub_004C3B6F); /* call 0x004C3B6F */

loc_004C5005: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_004C5008
 * Original: 0x004C5008 - 0x004C5020 (24 bytes, 9 insns)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C5008(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_004C5008: ;
    eax = MEM32(esp + 4);
    ecx = eax;
    _fb = (uint32_t)(0xFFFFFFF8u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xFFFFFFF8u)) >> 32) & 1);
    eax = eax + 0xFFFFFFF8u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = (int)((ecx) != 0);
    ecx = (uint32_t)(0u - (uint32_t)(ecx));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x004C501Du); RECOMP_ABI_CALL(0x004C3BCEu, sub_004C3BCE); /* call 0x004C3BCE */

loc_004C501D: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004C5020
 * Original: 0x004C5020 - 0x004C503C (28 bytes, 10 insns)
 * Category: game_audio
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C5020(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_004C5020: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, MEM32(esp + 8));
    ecx = eax;
    _fb = (uint32_t)(0xFFFFFFE4u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xFFFFFFE4u)) >> 32) & 1);
    eax = eax + 0xFFFFFFE4u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = (int)((ecx) != 0);
    ecx = (uint32_t)(0u - (uint32_t)(ecx));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x004C5039u); RECOMP_ABI_CALL(0x004C495Bu, sub_004C495B); /* call 0x004C495B */

loc_004C5039: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004C503C
 * Original: 0x004C503C - 0x004C5058 (28 bytes, 10 insns)
 * Category: game_audio
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C503C(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_004C503C: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, MEM32(esp + 8));
    ecx = eax;
    _fb = (uint32_t)(0xFFFFFFE4u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xFFFFFFE4u)) >> 32) & 1);
    eax = eax + 0xFFFFFFE4u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = (int)((ecx) != 0);
    ecx = (uint32_t)(0u - (uint32_t)(ecx));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x004C5055u); RECOMP_ABI_CALL(0x004C49A9u, sub_004C49A9); /* call 0x004C49A9 */

loc_004C5055: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004C5058
 * Original: 0x004C5058 - 0x004C5074 (28 bytes, 10 insns)
 * Category: game_audio
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C5058(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_004C5058: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, MEM32(esp + 8));
    ecx = eax;
    _fb = (uint32_t)(0xFFFFFFE4u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xFFFFFFE4u)) >> 32) & 1);
    eax = eax + 0xFFFFFFE4u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = (int)((ecx) != 0);
    ecx = (uint32_t)(0u - (uint32_t)(ecx));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x004C5071u); RECOMP_ABI_CALL(0x004C49F7u, sub_004C49F7); /* call 0x004C49F7 */

loc_004C5071: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004C5074
 * Original: 0x004C5074 - 0x004C5090 (28 bytes, 10 insns)
 * Category: game_audio
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C5074(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_004C5074: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, MEM32(esp + 8));
    ecx = eax;
    _fb = (uint32_t)(0xFFFFFFE4u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xFFFFFFE4u)) >> 32) & 1);
    eax = eax + 0xFFFFFFE4u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = (int)((ecx) != 0);
    ecx = (uint32_t)(0u - (uint32_t)(ecx));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x004C508Du); RECOMP_ABI_CALL(0x004C4A45u, sub_004C4A45); /* call 0x004C4A45 */

loc_004C508D: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004C5090
 * Original: 0x004C5090 - 0x004C50AC (28 bytes, 10 insns)
 * Category: game_audio
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C5090(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_004C5090: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, MEM32(esp + 8));
    ecx = eax;
    _fb = (uint32_t)(0xFFFFFFE4u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xFFFFFFE4u)) >> 32) & 1);
    eax = eax + 0xFFFFFFE4u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = (int)((ecx) != 0);
    ecx = (uint32_t)(0u - (uint32_t)(ecx));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x004C50A9u); RECOMP_ABI_CALL(0x004C4A93u, sub_004C4A93); /* call 0x004C4A93 */

loc_004C50A9: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004C50AC
 * Original: 0x004C50AC - 0x004C50C8 (28 bytes, 10 insns)
 * Category: game_audio
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C50AC(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_004C50AC: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, MEM32(esp + 8));
    ecx = eax;
    _fb = (uint32_t)(0xFFFFFFE4u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xFFFFFFE4u)) >> 32) & 1);
    eax = eax + 0xFFFFFFE4u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = (int)((ecx) != 0);
    ecx = (uint32_t)(0u - (uint32_t)(ecx));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x004C50C5u); RECOMP_ABI_CALL(0x004C4AE1u, sub_004C4AE1); /* call 0x004C4AE1 */

loc_004C50C5: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004C50C8
 * Original: 0x004C50C8 - 0x004C50E4 (28 bytes, 10 insns)
 * Category: game_audio
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C50C8(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_004C50C8: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, MEM32(esp + 8));
    ecx = eax;
    _fb = (uint32_t)(0xFFFFFFE4u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xFFFFFFE4u)) >> 32) & 1);
    eax = eax + 0xFFFFFFE4u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = (int)((ecx) != 0);
    ecx = (uint32_t)(0u - (uint32_t)(ecx));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x004C50E1u); RECOMP_ABI_CALL(0x004C4B2Fu, sub_004C4B2F); /* call 0x004C4B2F */

loc_004C50E1: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004C50E4
 * Original: 0x004C50E4 - 0x004C5108 (36 bytes, 12 insns)
 * Category: game_audio
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C50E4(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_004C50E4: ;
    PUSH32(esp, MEM32(esp + 0x10));
    eax = MEM32(esp + 8);
    PUSH32(esp, MEM32(esp + 0x10));
    ecx = eax;
    PUSH32(esp, MEM32(esp + 0x10));
    _fb = (uint32_t)(0xFFFFFFE4u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xFFFFFFE4u)) >> 32) & 1);
    eax = eax + 0xFFFFFFE4u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = (int)((ecx) != 0);
    ecx = (uint32_t)(0u - (uint32_t)(ecx));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x004C5105u); RECOMP_ABI_CALL(0x004C409Eu, sub_004C409E); /* call 0x004C409E */

loc_004C5105: ;
    esp += 20; return; /* ret 16 */

}

/**
 * sub_004C5108
 * Original: 0x004C5108 - 0x004C5120 (24 bytes, 9 insns)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C5108(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_004C5108: ;
    eax = MEM32(esp + 4);
    ecx = eax;
    _fb = (uint32_t)(0xFFFFFFE4u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xFFFFFFE4u)) >> 32) & 1);
    eax = eax + 0xFFFFFFE4u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = (int)((ecx) != 0);
    ecx = (uint32_t)(0u - (uint32_t)(ecx));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x004C511Du); RECOMP_ABI_CALL(0x004C40EFu, sub_004C40EF); /* call 0x004C40EF */

loc_004C511D: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004C5120
 * Original: 0x004C5120 - 0x004C5144 (36 bytes, 12 insns)
 * Category: game_audio
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C5120(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_004C5120: ;
    PUSH32(esp, MEM32(esp + 0x10));
    eax = MEM32(esp + 8);
    PUSH32(esp, MEM32(esp + 0x10));
    ecx = eax;
    PUSH32(esp, MEM32(esp + 0x10));
    _fb = (uint32_t)(0xFFFFFFE4u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xFFFFFFE4u)) >> 32) & 1);
    eax = eax + 0xFFFFFFE4u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = (int)((ecx) != 0);
    ecx = (uint32_t)(0u - (uint32_t)(ecx));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x004C5141u); RECOMP_ABI_CALL(0x004C413Eu, sub_004C413E); /* call 0x004C413E */

loc_004C5141: ;
    esp += 20; return; /* ret 16 */

}

/**
 * sub_004C5144
 * Original: 0x004C5144 - 0x004C5164 (32 bytes, 11 insns)
 * Category: game_audio
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C5144(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_004C5144: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, MEM32(esp + 0xC));
    ecx = eax;
    PUSH32(esp, MEM32(esp + 0xC));
    _fb = (uint32_t)(0xFFFFFFE4u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xFFFFFFE4u)) >> 32) & 1);
    eax = eax + 0xFFFFFFE4u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = (int)((ecx) != 0);
    ecx = (uint32_t)(0u - (uint32_t)(ecx));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x004C5161u); RECOMP_ABI_CALL(0x004C41E8u, sub_004C41E8); /* call 0x004C41E8 */

loc_004C5161: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_004C5164
 * Original: 0x004C5164 - 0x004C5180 (28 bytes, 10 insns)
 * Category: game_audio
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C5164(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_004C5164: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, MEM32(esp + 8));
    ecx = eax;
    _fb = (uint32_t)(0xFFFFFFE4u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xFFFFFFE4u)) >> 32) & 1);
    eax = eax + 0xFFFFFFE4u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = (int)((ecx) != 0);
    ecx = (uint32_t)(0u - (uint32_t)(ecx));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x004C517Du); RECOMP_ABI_CALL(0x004C4197u, sub_004C4197); /* call 0x004C4197 */

loc_004C517D: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004C5180
 * Original: 0x004C5180 - 0x004C519C (28 bytes, 10 insns)
 * Category: game_audio
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C5180(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_004C5180: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, MEM32(esp + 8));
    ecx = eax;
    _fb = (uint32_t)(0xFFFFFFE4u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xFFFFFFE4u)) >> 32) & 1);
    eax = eax + 0xFFFFFFE4u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = (int)((ecx) != 0);
    ecx = (uint32_t)(0u - (uint32_t)(ecx));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x004C5199u); RECOMP_ABI_CALL(0x004C426Du, sub_004C426D); /* call 0x004C426D */

loc_004C5199: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004C519C
 * Original: 0x004C519C - 0x004C51B8 (28 bytes, 10 insns)
 * Category: game_audio
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C519C(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_004C519C: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, MEM32(esp + 8));
    ecx = eax;
    _fb = (uint32_t)(0xFFFFFFE4u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xFFFFFFE4u)) >> 32) & 1);
    eax = eax + 0xFFFFFFE4u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = (int)((ecx) != 0);
    ecx = (uint32_t)(0u - (uint32_t)(ecx));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x004C51B5u); RECOMP_ABI_CALL(0x004C4B7Du, sub_004C4B7D); /* call 0x004C4B7D */

loc_004C51B5: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004C51B8
 * Original: 0x004C51B8 - 0x004C51D4 (28 bytes, 10 insns)
 * Category: game_audio
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C51B8(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_004C51B8: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, MEM32(esp + 8));
    ecx = eax;
    _fb = (uint32_t)(0xFFFFFFE4u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xFFFFFFE4u)) >> 32) & 1);
    eax = eax + 0xFFFFFFE4u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = (int)((ecx) != 0);
    ecx = (uint32_t)(0u - (uint32_t)(ecx));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x004C51D1u); RECOMP_ABI_CALL(0x004C4BCBu, sub_004C4BCB); /* call 0x004C4BCB */

loc_004C51D1: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004C51D4
 * Original: 0x004C51D4 - 0x004C51F0 (28 bytes, 10 insns)
 * Category: game_audio
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C51D4(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_004C51D4: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, MEM32(esp + 8));
    ecx = eax;
    _fb = (uint32_t)(0xFFFFFFE4u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xFFFFFFE4u)) >> 32) & 1);
    eax = eax + 0xFFFFFFE4u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = (int)((ecx) != 0);
    ecx = (uint32_t)(0u - (uint32_t)(ecx));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x004C51EDu); RECOMP_ABI_CALL(0x004C4C19u, sub_004C4C19); /* call 0x004C4C19 */

loc_004C51ED: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004C51F0
 * Original: 0x004C51F0 - 0x004C51F5 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C51F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004C51F0: ;
    g_seh_ebp = ebp; sub_004C4CB7(); return; /* tail jmp 0x004C4CB7 */

}

/**
 * sub_004C51F5
 * Original: 0x004C51F5 - 0x004C51FA (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C51F5(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004C51F5: ;
    g_seh_ebp = ebp; sub_004C4C65(); return; /* tail jmp 0x004C4C65 */

}

/**
 * sub_004C51FA
 * Original: 0x004C51FA - 0x004C51FF (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C51FA(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004C51FA: ;
    g_seh_ebp = ebp; sub_004C4D09(); return; /* tail jmp 0x004C4D09 */

}

/**
 * sub_004C51FF
 * Original: 0x004C51FF - 0x004C5204 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C51FF(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004C51FF: ;
    g_seh_ebp = ebp; sub_004C4D5B(); return; /* tail jmp 0x004C4D5B */

}

/**
 * sub_004C5204
 * Original: 0x004C5204 - 0x004C5209 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C5204(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004C5204: ;
    g_seh_ebp = ebp; sub_004C4DAD(); return; /* tail jmp 0x004C4DAD */

}

/**
 * sub_004C5209
 * Original: 0x004C5209 - 0x004C520E (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C5209(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004C5209: ;
    g_seh_ebp = ebp; sub_004C4DFF(); return; /* tail jmp 0x004C4DFF */

}

/**
 * sub_004C520E
 * Original: 0x004C520E - 0x004C5213 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C520E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004C520E: ;
    g_seh_ebp = ebp; sub_004C4E51(); return; /* tail jmp 0x004C4E51 */

}

/**
 * sub_004C5213
 * Original: 0x004C5213 - 0x004C5218 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C5213(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004C5213: ;
    g_seh_ebp = ebp; sub_004C4558(); return; /* tail jmp 0x004C4558 */

}

/**
 * sub_004C5218
 * Original: 0x004C5218 - 0x004C5230 (24 bytes, 6 insns)
 * Category: game_audio
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C5218(void)
{

loc_004C5218: ;
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, 0x004C522Du); RECOMP_ABI_CALL(0x004C45A9u, sub_004C45A9); /* call 0x004C45A9 */

loc_004C522D: ;
    esp += 20; return; /* ret 16 */

}

/**
 * sub_004C5230
 * Original: 0x004C5230 - 0x004C5235 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C5230(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004C5230: ;
    g_seh_ebp = ebp; sub_004C4EA3(); return; /* tail jmp 0x004C4EA3 */

}

/**
 * sub_004C5235
 * Original: 0x004C5235 - 0x004C523A (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C5235(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004C5235: ;
    g_seh_ebp = ebp; sub_004C4EF5(); return; /* tail jmp 0x004C4EF5 */

}

/**
 * sub_004C523A
 * Original: 0x004C523A - 0x004C523F (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C523A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004C523A: ;
    g_seh_ebp = ebp; sub_004C4F47(); return; /* tail jmp 0x004C4F47 */

}

/**
 * sub_004C523F
 * Original: 0x004C523F - 0x004C5248 (9 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004C523F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */

loc_004C523F: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    POP32(esp, ebp);
    g_seh_ebp = ebp; sub_004C4613(); return; /* tail jmp 0x004C4613 */

}

/**
 * sub_004C5248
 * Original: 0x004C5248 - 0x004C5271 (41 bytes, 14 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C5248(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004C5248: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004C524Eu); RECOMP_ABI_CALL(0x004C38BEu, sub_004C38BE); /* call 0x004C38BE */

loc_004C524E: ;
    esi = ZX8(LO8(eax));
    eax = MEM32(0x4E1CF0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C5260; /* je: equal / zero */

loc_004C525A: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004C5260u); RECOMP_ABI_CALL(0x004C3C1Bu, sub_004C3C1B); /* call 0x004C3C1B */

loc_004C5260: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    POP32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_004C5270; /* je: equal / zero */

loc_004C5265: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x4E1674);
    { uint32_t _icall_target = MEM32(0x561008); PUSH32(esp, 0x004C5270u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C526Au); } /* indirect call */
    }

loc_004C5270: ;
    esp += 4; return; /* ret */

}

/**
 * sub_004C5271
 * Original: 0x004C5271 - 0x004C5473 (514 bytes, 172 insns)
 * Category: game_audio
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004C5271(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_004C5271: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0xC));
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    _cf = 0; /* xor clears CF */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _cf = 0; /* xor clears CF */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ebp + -4) = ebx;
    _cf = 0; /* xor clears CF */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C5288u); RECOMP_ABI_CALL(0x004C38BEu, sub_004C38BE); /* call 0x004C38BE */

loc_004C5288: ;
    _fa = (uint32_t)(MEM32(0x4E1CF0)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x4E1CF0), ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    eax = ZX8(LO8(eax));
    MEM32(ebp + -12) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_004C52A0; /* jne: not equal / not zero */

loc_004C5296: ;
    esi = 0x88780032u;
    goto loc_004C5427;

loc_004C52A0: ;
    _fa = (uint32_t)(MEM8(ebp + 0x10)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + 0x10), 1 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_004C532D; /* je: equal / zero */

loc_004C52AA: ;
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C52B2u); RECOMP_ABI_CALL(0x0042E055u, sub_0042E055); /* call 0x0042E055 */

loc_004C52B2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(ebp + 8) = eax;
    ebx = 0xFFFF;
    edi = 0x80070000u;
    if (CMP_NE(_fa, _fb)) goto loc_004C52E9; /* jne: not equal / not zero */

loc_004C52C4: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C52C9u); RECOMP_ABI_CALL(0x0042C2ACu, sub_0042C2AC); /* call 0x0042C2AC */

loc_004C52C9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_G(_fas, _fbs)) goto loc_004C52D6; /* jg: greater (signed >) */

loc_004C52CD: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C52D2u); RECOMP_ABI_CALL(0x0042C2ACu, sub_0042C2AC); /* call 0x0042C2AC */

loc_004C52D2: ;
    esi = eax;
    goto loc_004C52E1;

loc_004C52D6: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C52DBu); RECOMP_ABI_CALL(0x0042C2ACu, sub_0042C2AC); /* call 0x0042C2AC */

loc_004C52DB: ;
    esi = eax;
    _cf = 0; /* logical op clears CF */
    esi = esi & ebx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = 0; /* logical op clears CF */
    esi = esi | edi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_004C52E1: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_L(_fas, _fbs)) goto loc_004C5422; /* jl: less (signed <) */

loc_004C52E9: ;
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C52F1u); RECOMP_ABI_CALL(0x0042E131u, sub_0042E131); /* call 0x0042E131 */

loc_004C52F1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(ebp + -8) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_004C5315; /* jne: not equal / not zero */

loc_004C52F8: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C52FDu); RECOMP_ABI_CALL(0x0042C2ACu, sub_0042C2AC); /* call 0x0042C2AC */

loc_004C52FD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_G(_fas, _fbs)) goto loc_004C530A; /* jg: greater (signed >) */

loc_004C5301: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C5306u); RECOMP_ABI_CALL(0x0042C2ACu, sub_0042C2AC); /* call 0x0042C2AC */

loc_004C5306: ;
    esi = eax;
    goto loc_004C5315;

loc_004C530A: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C530Fu); RECOMP_ABI_CALL(0x0042C2ACu, sub_0042C2AC); /* call 0x0042C2AC */

loc_004C530F: ;
    esi = eax;
    _cf = 0; /* logical op clears CF */
    esi = esi & ebx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = 0; /* logical op clears CF */
    esi = esi | edi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_004C5315: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_L(_fas, _fbs)) goto loc_004C5422; /* jl: less (signed <) */

loc_004C531D: ;
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C5325u); RECOMP_ABI_CALL(0x0042E0BCu, sub_0042E0BC); /* call 0x0042E0BC */

loc_004C5325: ;
    MEM32(ebp + -4) = eax;
    goto loc_004C53E4;

loc_004C532D: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 3);
    PUSH32(esp, ebx);
    PUSH32(esp, 1);
    PUSH32(esp, 0x80000000u);
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C5341u); RECOMP_ABI_CALL(0x0042C37Eu, sub_0042C37E); /* call 0x0042C37E */

loc_004C5341: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(ebp + 8) = eax;
    ebx = 0xFFFF;
    edi = 0x80070000u;
    if (CMP_NE(_fa, _fb)) goto loc_004C5378; /* jne: not equal / not zero */

loc_004C5353: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C5358u); RECOMP_ABI_CALL(0x0042C2ACu, sub_0042C2AC); /* call 0x0042C2AC */

loc_004C5358: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_G(_fas, _fbs)) goto loc_004C5365; /* jg: greater (signed >) */

loc_004C535C: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C5361u); RECOMP_ABI_CALL(0x0042C2ACu, sub_0042C2AC); /* call 0x0042C2AC */

loc_004C5361: ;
    esi = eax;
    goto loc_004C5370;

loc_004C5365: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C536Au); RECOMP_ABI_CALL(0x0042C2ACu, sub_0042C2AC); /* call 0x0042C2AC */

loc_004C536A: ;
    esi = eax;
    _cf = 0; /* logical op clears CF */
    esi = esi & ebx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = 0; /* logical op clears CF */
    esi = esi | edi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_004C5370: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_L(_fas, _fbs)) goto loc_004C5422; /* jl: less (signed <) */

loc_004C5378: ;
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C5382u); RECOMP_ABI_CALL(0x0042C271u, sub_0042C271); /* call 0x0042C271 */

loc_004C5382: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(ebp + -8) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_004C53A6; /* jne: not equal / not zero */

loc_004C5389: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C538Eu); RECOMP_ABI_CALL(0x0042C2ACu, sub_0042C2AC); /* call 0x0042C2AC */

loc_004C538E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_G(_fas, _fbs)) goto loc_004C539B; /* jg: greater (signed >) */

loc_004C5392: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C5397u); RECOMP_ABI_CALL(0x0042C2ACu, sub_0042C2AC); /* call 0x0042C2AC */

loc_004C5397: ;
    esi = eax;
    goto loc_004C53A6;

loc_004C539B: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C53A0u); RECOMP_ABI_CALL(0x0042C2ACu, sub_0042C2AC); /* call 0x0042C2AC */

loc_004C53A0: ;
    esi = eax;
    _cf = 0; /* logical op clears CF */
    esi = esi & ebx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = 0; /* logical op clears CF */
    esi = esi | edi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_004C53A6: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_L(_fas, _fbs)) goto loc_004C5422; /* jl: less (signed <) */

loc_004C53AA: ;
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(ebp + -8));
    PUSH32(esp, 0x61645344);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C53B9u); RECOMP_ABI_CALL(0x004C6B07u, sub_004C6B07); /* call 0x004C6B07 */

loc_004C53B9: ;
    esi = eax;
    MEM32(ebp + -4) = esi;
    _cf = (int)((esi) != 0);
    esi = (uint32_t)(0u - (uint32_t)(esi));
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    esi = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    esi = esi & 0x7FF8FFF2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x8007000Eu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(0x8007000Eu)) >> 32) & 1);
    esi = esi + 0x8007000Eu;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    if ((_fas < 0)) goto loc_004C5422; /* js: sign (negative) */

loc_004C53D0: ;
    PUSH32(esp, 0);
    eax = ebp + -8;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + -8));
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C53E4u); RECOMP_ABI_CALL(0x0042BC84u, sub_0042BC84); /* call 0x0042BC84 */

loc_004C53E4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_004C5405; /* jne: not equal / not zero */

loc_004C53E8: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C53EDu); RECOMP_ABI_CALL(0x0042C2ACu, sub_0042C2AC); /* call 0x0042C2AC */

loc_004C53ED: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_G(_fas, _fbs)) goto loc_004C53FA; /* jg: greater (signed >) */

loc_004C53F1: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C53F6u); RECOMP_ABI_CALL(0x0042C2ACu, sub_0042C2AC); /* call 0x0042C2AC */

loc_004C53F6: ;
    esi = eax;
    goto loc_004C5405;

loc_004C53FA: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C53FFu); RECOMP_ABI_CALL(0x0042C2ACu, sub_0042C2AC); /* call 0x0042C2AC */

loc_004C53FF: ;
    esi = eax;
    _cf = 0; /* logical op clears CF */
    esi = esi & ebx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = 0; /* logical op clears CF */
    esi = esi | edi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_004C5405: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_L(_fas, _fbs)) goto loc_004C5422; /* jl: less (signed <) */

loc_004C5409: ;
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ebp + -8));
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, MEM32(0x4E1CF0));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C5420u); RECOMP_ABI_CALL(0x004C3AA9u, sub_004C3AA9); /* call 0x004C3AA9 */

loc_004C5420: ;
    esi = eax;

loc_004C5422: ;
    edi = MEM32(ebp + 8);
    _cf = 0; /* xor clears CF */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004C5427: ;
    _fa = (uint32_t)(MEM8(ebp + 0x10)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + 0x10), 1 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_004C543E; /* je: equal / zero */

loc_004C542D: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_004C545A; /* je: equal / zero */

loc_004C5431: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_004C545A; /* je: equal / zero */

loc_004C5436: ;
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C543Cu); RECOMP_ABI_CALL(0x0042E0DDu, sub_0042E0DD); /* call 0x0042E0DD */

loc_004C543C: ;
    goto loc_004C545A;

loc_004C543E: ;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_004C544B; /* je: equal / zero */

loc_004C5443: ;
    PUSH32(esp, MEM32(ebp + -4));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C544Bu); RECOMP_ABI_CALL(0x004C6B6Fu, sub_004C6B6F); /* call 0x004C6B6F */

loc_004C544B: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_004C545A; /* je: equal / zero */

loc_004C544F: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_004C545A; /* je: equal / zero */

loc_004C5454: ;
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C545Au); RECOMP_ABI_CALL(0x0042C509u, sub_0042C509); /* call 0x0042C509 */

loc_004C545A: ;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -12), ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_004C546A; /* je: equal / zero */

loc_004C545F: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x4E1674);
    { uint32_t _icall_target = MEM32(0x561008); PUSH32(esp, 0x004C546Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C5464u); } /* indirect call */
    }

loc_004C546A: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_004C5473
 * Original: 0x004C5473 - 0x004C548E (27 bytes, 10 insns)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C5473(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004C5473: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004C547Bu); RECOMP_ABI_CALL(0x004C3A6Fu, sub_004C3A6F); /* call 0x004C3A6F */

loc_004C547B: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004C5488; /* je: equal / zero */

loc_004C5482: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004C5488u); RECOMP_ABI_CALL(0x004C6B6Fu, sub_004C6B6F); /* call 0x004C6B6F */

loc_004C5488: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004C548E
 * Original: 0x004C548E - 0x004C5559 (203 bytes, 67 insns)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C548E(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004C548E: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004C54C7; /* jne: not equal / not zero */

loc_004C549B: ;
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x200010) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(esi + 8), 0x200010 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004C54AB; /* je: equal / zero */

loc_004C54A4: ;
    eax = 0x4E13B4;
    goto loc_004C54C7;

loc_004C54AB: ;
    _fa = (uint32_t)(MEM32(esi + 0xB0)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0xB0), ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C54BA; /* je: equal / zero */

loc_004C54B3: ;
    eax = 0x4CEBAC;
    goto loc_004C54C7;

loc_004C54BA: ;
    eax = ZX8(MEM8(esi + 0xE));
    eax = eax >> 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = MEM32(eax * 4 + 0x4CEB9C);

loc_004C54C7: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), ecx (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_004C54EA; /* jbe: below or equal (unsigned <=) */

loc_004C54CB: ;
    PUSH32(esp, edi);

loc_004C54CC: ;
    edx = MEM32(eax + 4);
    SET_LO8(edx, MEM8(edx + ecx * 8));
    MEM8(esi + ecx + 0x28) = LO8(edx);
    edi = MEM32(eax + 4);
    edi = MEM32(edi + ecx * 8 + 4);
    edx = ZX8(LO8(edx));
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi + edx * 4 + 0x30) = edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(eax) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_004C54CC; /* jb: below (unsigned <) */

loc_004C54E9: ;
    POP32(esp, edi);

loc_004C54EA: ;
    eax = MEM32(eax);
    MEM32(esi + 0x24) = eax;
    eax = MEM32(esi + 0xB0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C5512; /* je: equal / zero */

loc_004C54F9: ;
    eax = MEM32(eax + 0x1C);
    _fa = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x82000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(eax + 8), 0x82000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004C5512; /* je: equal / zero */

loc_004C5505: ;
    PUSH32(esp, MEM32(eax + 0xD4));
    ecx = esi;
    PUSH32(esp, 0x004C5512u); RECOMP_ABI_CALL(0x004C3C71u, sub_004C3C71); /* call 0x004C3C71 */

loc_004C5512: ;
    _fa = (uint32_t)(MEM8(esi + 8)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 8), 0x10 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004C5555; /* je: equal / zero */

loc_004C5518: ;
    _fa = (uint32_t)(MEM32(esi + 0x24)) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x24), 5 (32-bit) */
    PUSH32(esp, 2);
    POP32(esp, edx);
    if (CMP_B(_fa, _fb)) goto loc_004C553E; /* jb: below (unsigned <) */

loc_004C5521: ;
    _fa = (uint32_t)(MEM8(esi + 0x2C)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x2C), LO8(edx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004C553E; /* jne: not equal / not zero */

loc_004C5526: ;
    ecx = esi + 0xB4;
    eax = MEM32(ecx);
    _fa = (uint32_t)(MEM8(eax + 0x58)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0x58), LO8(edx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_004C5555; /* jne: not equal / not zero */

loc_004C5533: ;
    MEM32(eax + 0x58) = MEM32(eax + 0x58) | edx;
    _fa = (uint32_t)(MEM32(eax + 0x58)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = MEM32(ecx);
    MEM8(eax + 3) = MEM8(eax + 3) | 4;
    _fa = (uint32_t)(MEM8(eax + 3)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    goto loc_004C5555;

loc_004C553E: ;
    ecx = esi + 0xB4;
    eax = MEM32(ecx);
    _fa = (uint32_t)(MEM8(eax + 0x58)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0x58), LO8(edx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004C5555; /* je: equal / zero */

loc_004C554B: ;
    MEM32(eax + 0x58) = MEM32(eax + 0x58) & 0xFFFFFFFDu;
    _fa = (uint32_t)(MEM32(eax + 0x58)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = MEM32(ecx);
    MEM8(ecx + 3) = MEM8(ecx + 3) | 4;
    _fa = (uint32_t)(MEM8(ecx + 3)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */

loc_004C5555: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004C5559
 * Original: 0x004C5559 - 0x004C562C (211 bytes, 70 insns)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004C5559(void)
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

loc_004C5559: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(ebp + -20) = MEM32(ebp + -20) & 0;
    _fa = (uint32_t)(MEM32(ebp + -20)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    ecx = ebp + -24;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C556Fu); RECOMP_ABI_CALL(0x004C36B0u, sub_004C36B0); /* call 0x004C36B0 */

loc_004C556F: ;
    ecx = MEM32(esi + 0xB0);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C55D1; /* je: equal / zero */

loc_004C5579: ;
    eax = MEM32(ecx + 0x1C);
    _fa = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x82000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(eax + 8), 0x82000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004C55C4; /* je: equal / zero */

loc_004C5585: ;
    eax = MEM32(eax + 0xD4);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(esi + 0x24)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x24), edi (32-bit) */
    MEM32(ebp + -8) = eax;
    if (CMP_BE(_fa, _fb)) goto loc_004C55B5; /* jbe: below or equal (unsigned <=) */

loc_004C5595: ;
    eax = MEM32(esi + 0x24);
    edx = esi + 0x28;
    MEM32(ebp + -4) = eax;
    PUSH32(esp, ebx);

loc_004C559F: ;
    SET_LO8(eax, MEM8(edx));
    ebx = ZX8(LO8(eax));
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C55AE; /* je: equal / zero */

loc_004C55A9: ;
    MEM8(ebp + edi + -16) = LO8(eax);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_004C55AE: ;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebp + -4) = MEM32(ebp + -4) - 1;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_004C559F; /* jne: not equal / not zero */

loc_004C55B4: ;
    POP32(esp, ebx);

loc_004C55B5: ;
    eax = MEM32(ebp + -16);
    MEM32(esi + 0x28) = eax;
    eax = MEM32(ebp + -12);
    MEM32(esi + 0x2C) = eax;
    MEM32(esi + 0x24) = edi;

loc_004C55C4: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x004C55CAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C55C7u); } /* indirect call */
    }

loc_004C55CA: ;
    MEM32(esi + 0xB0) = MEM32(esi + 0xB0) & 0;
    _fa = (uint32_t)(MEM32(esi + 0xB0)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_004C55D1: ;
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C55D9u); RECOMP_ABI_CALL(0x004CAE38u, sub_004CAE38); /* call 0x004CAE38 */

loc_004C55D9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi + 0xB0) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_004C561E; /* je: equal / zero */

loc_004C55E3: ;
    eax = MEM32(eax + 0x1C);
    _fa = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x82000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(eax + 8), 0x82000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004C561E; /* je: equal / zero */

loc_004C55EF: ;
    edi = MEM32(eax + 0xD4);
    MEM32(esi + 0x24) = MEM32(esi + 0x24) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x24)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, edi);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C5601u); RECOMP_ABI_CALL(0x004C3C71u, sub_004C3C71); /* call 0x004C3C71 */

loc_004C5601: ;
    eax = ZX8(MEM8(esi + 0xE));
    MEM32(ebp + 8) = eax;
    PUSH32(esp, ecx);
    fp_push((double)SMEM32(ebp + 8)); /* fild */
    fp_top() = RECOMP_FP_PC(MEMF(0x648D14) / fp_top()); /* fdivr dword ptr [0x648d14] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C561Au); RECOMP_ABI_CALL(0x004C3774u, sub_004C3774); /* call 0x004C3774 */

loc_004C561A: ;
    MEM32(esi + edi * 4 + 0x30) = eax;

loc_004C561E: ;
    ecx = ebp + -24;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C5626u); RECOMP_ABI_CALL(0x004C36D2u, sub_004C36D2); /* call 0x004C36D2 */

loc_004C5626: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_004C562C
 * Original: 0x004C562C - 0x004C5656 (42 bytes, 13 insns)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C562C(void)
{

loc_004C562C: ;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(esp + 8));
    esi = ecx;
    eax = esi + 0x14;
    MEM32(esi + 4) = 1;
    MEM32(esi) = 0x586008;
    MEM32(esi + 0x18) = eax;
    MEM32(eax) = eax;
    PUSH32(esp, 0x004C564Du); RECOMP_ABI_CALL(0x004CAE38u, sub_004CAE38); /* call 0x004CAE38 */

loc_004C564D: ;
    MEM32(esi + 8) = eax;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004C5656
 * Original: 0x004C5656 - 0x004C5671 (27 bytes, 10 insns)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C5656(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004C5656: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004C565Eu); RECOMP_ABI_CALL(0x004C3CDFu, sub_004C3CDF); /* call 0x004C3CDF */

loc_004C565E: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004C566B; /* je: equal / zero */

loc_004C5665: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004C566Bu); RECOMP_ABI_CALL(0x004C6B6Fu, sub_004C6B6F); /* call 0x004C6B6F */

loc_004C566B: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004C5671
 * Original: 0x004C5671 - 0x004C5708 (151 bytes, 45 insns)
 * Category: game_audio
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C5671(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004C5671: ;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(esp + 0xC));
    PUSH32(esp, 0x004C567Bu); RECOMP_ABI_CALL(0x004CAE38u, sub_004CAE38); /* call 0x004CAE38 */

loc_004C567B: ;
    esi = MEM32(esp + 8);
    PUSH32(esp, MEM32(esp + 0x10));
    MEM32(esi + 0xC) = eax;
    PUSH32(esp, 0x004C568Bu); RECOMP_ABI_CALL(0x004CAE38u, sub_004CAE38); /* call 0x004CAE38 */

loc_004C568B: ;
    MEM32(esi + 0x10) = eax;
    _fa = (uint32_t)(MEM8(eax + 8)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 8), 0x10 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004C5704; /* je: equal / zero */

loc_004C5694: ;
    ecx = MEM32(esi + 8);
    eax = esi + 0x14;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = ecx;
    ecx = MEM32(ecx + 4);
    MEM32(eax + 4) = ecx;
    MEM32(ecx) = eax;
    ecx = MEM32(eax);
    MEM32(ecx + 4) = eax;
    eax = MEM32(0x4E1660);
    edx = eax;
    edx = edx & 0xFFFF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 2 (32-bit) */
    ecx = 0x4000000;
    if (CMP_EQ(_fa, _fb)) goto loc_004C56CA; /* je: equal / zero */

loc_004C56C3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x10000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004C56E6; /* je: equal / zero */

loc_004C56CA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if ((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) goto loc_004C56E6; /* js: sign (negative) */

loc_004C56CE: ;
    eax = MEM32(esi + 0x10);
    eax = MEM32(eax + 0xB4);
    MEM32(eax + 0x58) = MEM32(eax + 0x58) | 1;
    _fa = (uint32_t)(MEM32(eax + 0x58)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = MEM32(esi + 0x10);
    eax = MEM32(eax + 0xB4);
    MEM32(eax) = MEM32(eax) | ecx;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_004C56E6: ;
    eax = MEM32(esi + 0x10);
    _fa = (uint32_t)(MEM8(eax + 0xA)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0xA), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004C5704; /* je: equal / zero */

loc_004C56EF: ;
    eax = MEM32(eax + 0xB4);
    MEM32(eax + 0x58) = MEM32(eax + 0x58) | 4;
    _fa = (uint32_t)(MEM32(eax + 0x58)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = MEM32(esi + 0x10);
    eax = MEM32(eax + 0xB4);
    MEM32(eax) = MEM32(eax) | ecx;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_004C5704: ;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_004C5708
 * Original: 0x004C5708 - 0x004C575C (84 bytes, 34 insns)
 * Category: game_audio
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C5708(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_004C5708: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    eax = esi + -28;
    _cf = (int)((esi) != 0);
    esi = (uint32_t)(0u - (uint32_t)(esi));
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    esi = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    _cf = 0; /* logical op clears CF */
    esi = esi & eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = MEM32(edi + 0x10);
    eax = MEM32(eax + 0xB0);
    _cf = 0; /* xor clears CF */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_004C5754; /* je: equal / zero */

loc_004C572B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_004C573D; /* je: equal / zero */

loc_004C572F: ;
    ecx = MEM32(edi + 0xC);
    PUSH32(esp, 0x004C5737u); RECOMP_ABI_CALL(0x004CB59Du, sub_004CB59D); /* call 0x004CB59D */

loc_004C5737: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_L(_fas, _fbs)) goto loc_004C5754; /* jl: less (signed <) */

loc_004C573D: ;
    ecx = MEM32(edi + 0x10);
    PUSH32(esp, esi);
    PUSH32(esp, 0x004C5746u); RECOMP_ABI_CALL(0x004C5559u, sub_004C5559); /* call 0x004C5559 */

loc_004C5746: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_004C5754; /* je: equal / zero */

loc_004C574A: ;
    ecx = MEM32(edi + 0xC);
    PUSH32(esp, 0x004C5752u); RECOMP_ABI_CALL(0x004CB490u, sub_004CB490); /* call 0x004CB490 */

loc_004C5752: ;
    ebx = eax;

loc_004C5754: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004C575C
 * Original: 0x004C575C - 0x004C5779 (29 bytes, 9 insns)
 * Category: game_audio
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C575C(void)
{

loc_004C575C: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, MEM32(esp + 0xC));
    ecx = MEM32(esi + 0x10);
    PUSH32(esp, 0x004C576Du); RECOMP_ABI_CALL(0x004C548Eu, sub_004C548E); /* call 0x004C548E */

loc_004C576D: ;
    ecx = MEM32(esi + 0xC);
    PUSH32(esp, 0x004C5775u); RECOMP_ABI_CALL(0x004CAFFCu, sub_004CAFFC); /* call 0x004CAFFC */

loc_004C5775: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004C5779
 * Original: 0x004C5779 - 0x004C579D (36 bytes, 7 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C5779(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004C5779: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0xCC) = MEM32(ecx + 0xCC) & 0;
    _fa = (uint32_t)(MEM32(ecx + 0xCC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ecx + 0xC4) = eax;
    eax = MEM32(esp + 8);
    MEM32(ecx + 0xC8) = eax;
    MEM32(ecx + 0xD0) = eax;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004C579D
 * Original: 0x004C579D - 0x004C57B5 (24 bytes, 8 insns)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C579D(void)
{

loc_004C579D: ;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(esp + 8));
    esi = ecx;
    PUSH32(esp, 0x004C57A9u); RECOMP_ABI_CALL(0x004C562Cu, sub_004C562C); /* call 0x004C562C */

loc_004C57A9: ;
    MEM32(esi) = 0x586018;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004C57B5
 * Original: 0x004C57B5 - 0x004C57D0 (27 bytes, 10 insns)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C57B5(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004C57B5: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004C57BDu); RECOMP_ABI_CALL(0x004C4021u, sub_004C4021); /* call 0x004C4021 */

loc_004C57BD: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004C57CA; /* je: equal / zero */

loc_004C57C4: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004C57CAu); RECOMP_ABI_CALL(0x004C6B6Fu, sub_004C6B6F); /* call 0x004C6B6F */

loc_004C57CA: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004C57D0
 * Original: 0x004C57D0 - 0x004C5850 (128 bytes, 42 insns)
 * Category: game_audio
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004C57D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004C57D0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C57D9u); RECOMP_ABI_CALL(0x004C38BEu, sub_004C38BE); /* call 0x004C38BE */

loc_004C57D9: ;
    _fa = (uint32_t)(MEM32(0x4E1668)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x4E1668), 0 (32-bit) */
    edi = ZX8(LO8(eax));
    if (CMP_EQ(_fa, _fb)) goto loc_004C57FB; /* je: equal / zero */

loc_004C57E5: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C57F4; /* je: equal / zero */

loc_004C57E9: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x4E1674);
    { uint32_t _icall_target = MEM32(0x561008); PUSH32(esp, 0x004C57F4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C57EEu); } /* indirect call */
    }

loc_004C57F4: ;
    eax = 0x80004005u;
    goto loc_004C584B;

loc_004C57FB: ;
    eax = MEM32(ebp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    edx = MEM32(ebp + 8);
    ecx = MEM32(edx + 0x1C);
    PUSH32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_004C581D; /* je: equal / zero */

loc_004C5809: ;
    esi = MEM32(ebp + 0xC);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0xC0)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(ecx + 0xC0) (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_004C5826; /* jbe: below or equal (unsigned <=) */

loc_004C5816: ;
    esi = 0x88780032u;
    goto loc_004C5839;

loc_004C581D: ;
    eax = MEM32(ecx + 0xC0);
    _fb = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(ebp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_004C5826: ;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0xC));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C582Fu); RECOMP_ABI_CALL(0x004C5779u, sub_004C5779); /* call 0x004C5779 */

loc_004C582F: ;
    ecx = MEM32(edx + 0x20);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C5837u); RECOMP_ABI_CALL(0x004CC1ABu, sub_004CC1AB); /* call 0x004CC1AB */

loc_004C5837: ;
    esi = eax;

loc_004C5839: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C5848; /* je: equal / zero */

loc_004C583D: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x4E1674);
    { uint32_t _icall_target = MEM32(0x561008); PUSH32(esp, 0x004C5848u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C5842u); } /* indirect call */
    }

loc_004C5848: ;
    eax = esi;
    POP32(esp, esi);

loc_004C584B: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_004C5850
 * Original: 0x004C5850 - 0x004C586B (27 bytes, 10 insns)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C5850(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004C5850: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004C5858u); RECOMP_ABI_CALL(0x004C42BEu, sub_004C42BE); /* call 0x004C42BE */

loc_004C5858: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004C5865; /* je: equal / zero */

loc_004C585F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004C5865u); RECOMP_ABI_CALL(0x004C6B6Fu, sub_004C6B6F); /* call 0x004C6B6F */

loc_004C5865: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004C586B
 * Original: 0x004C586B - 0x004C58B9 (78 bytes, 24 insns)
 * Category: game_audio
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C586B(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004C586B: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004C5871u); RECOMP_ABI_CALL(0x004C38BEu, sub_004C38BE); /* call 0x004C38BE */

loc_004C5871: ;
    _fa = (uint32_t)(MEM32(0x4E1668)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x4E1668), 0 (32-bit) */
    esi = ZX8(LO8(eax));
    if (CMP_EQ(_fa, _fb)) goto loc_004C5893; /* je: equal / zero */

loc_004C587D: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C588C; /* je: equal / zero */

loc_004C5881: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x4E1674);
    { uint32_t _icall_target = MEM32(0x561008); PUSH32(esp, 0x004C588Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C5886u); } /* indirect call */
    }

loc_004C588C: ;
    eax = 0x80004005u;
    goto loc_004C58B5;

loc_004C5893: ;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, 0x004C58A1u); RECOMP_ABI_CALL(0x004C5708u, sub_004C5708); /* call 0x004C5708 */

loc_004C58A1: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    edi = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_004C58B2; /* je: equal / zero */

loc_004C58A7: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x4E1674);
    { uint32_t _icall_target = MEM32(0x561008); PUSH32(esp, 0x004C58B2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C58ACu); } /* indirect call */
    }

loc_004C58B2: ;
    eax = edi;
    POP32(esp, edi);

loc_004C58B5: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004C58B9
 * Original: 0x004C58B9 - 0x004C5907 (78 bytes, 24 insns)
 * Category: game_audio
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C58B9(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004C58B9: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004C58BFu); RECOMP_ABI_CALL(0x004C38BEu, sub_004C38BE); /* call 0x004C38BE */

loc_004C58BF: ;
    _fa = (uint32_t)(MEM32(0x4E1668)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x4E1668), 0 (32-bit) */
    esi = ZX8(LO8(eax));
    if (CMP_EQ(_fa, _fb)) goto loc_004C58E1; /* je: equal / zero */

loc_004C58CB: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C58DA; /* je: equal / zero */

loc_004C58CF: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x4E1674);
    { uint32_t _icall_target = MEM32(0x561008); PUSH32(esp, 0x004C58DAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C58D4u); } /* indirect call */
    }

loc_004C58DA: ;
    eax = 0x80004005u;
    goto loc_004C5903;

loc_004C58E1: ;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, 0x004C58EFu); RECOMP_ABI_CALL(0x004C575Cu, sub_004C575C); /* call 0x004C575C */

loc_004C58EF: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    edi = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_004C5900; /* je: equal / zero */

loc_004C58F5: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x4E1674);
    { uint32_t _icall_target = MEM32(0x561008); PUSH32(esp, 0x004C5900u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C58FAu); } /* indirect call */
    }

loc_004C5900: ;
    eax = edi;
    POP32(esp, edi);

loc_004C5903: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004C5907
 * Original: 0x004C5907 - 0x004C5959 (82 bytes, 26 insns)
 * Category: game_audio
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C5907(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004C5907: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004C590Du); RECOMP_ABI_CALL(0x004C38BEu, sub_004C38BE); /* call 0x004C38BE */

loc_004C590D: ;
    _fa = (uint32_t)(MEM32(0x4E1668)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x4E1668), 0 (32-bit) */
    esi = ZX8(LO8(eax));
    if (CMP_EQ(_fa, _fb)) goto loc_004C592F; /* je: equal / zero */

loc_004C5919: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C5928; /* je: equal / zero */

loc_004C591D: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x4E1674);
    { uint32_t _icall_target = MEM32(0x561008); PUSH32(esp, 0x004C5928u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C5922u); } /* indirect call */
    }

loc_004C5928: ;
    eax = 0x80004005u;
    goto loc_004C5955;

loc_004C592F: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esp + 0x10));
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x004C5941u); RECOMP_ABI_CALL(0x004C5708u, sub_004C5708); /* call 0x004C5708 */

loc_004C5941: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    edi = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_004C5952; /* je: equal / zero */

loc_004C5947: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x4E1674);
    { uint32_t _icall_target = MEM32(0x561008); PUSH32(esp, 0x004C5952u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C594Cu); } /* indirect call */
    }

loc_004C5952: ;
    eax = edi;
    POP32(esp, edi);

loc_004C5955: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004C5959
 * Original: 0x004C5959 - 0x004C59AB (82 bytes, 26 insns)
 * Category: game_audio
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C5959(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004C5959: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004C595Fu); RECOMP_ABI_CALL(0x004C38BEu, sub_004C38BE); /* call 0x004C38BE */

loc_004C595F: ;
    _fa = (uint32_t)(MEM32(0x4E1668)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x4E1668), 0 (32-bit) */
    esi = ZX8(LO8(eax));
    if (CMP_EQ(_fa, _fb)) goto loc_004C5981; /* je: equal / zero */

loc_004C596B: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C597A; /* je: equal / zero */

loc_004C596F: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x4E1674);
    { uint32_t _icall_target = MEM32(0x561008); PUSH32(esp, 0x004C597Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C5974u); } /* indirect call */
    }

loc_004C597A: ;
    eax = 0x80004005u;
    goto loc_004C59A7;

loc_004C5981: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esp + 0x10));
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x004C5993u); RECOMP_ABI_CALL(0x004C575Cu, sub_004C575C); /* call 0x004C575C */

loc_004C5993: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    edi = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_004C59A4; /* je: equal / zero */

loc_004C5999: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x4E1674);
    { uint32_t _icall_target = MEM32(0x561008); PUSH32(esp, 0x004C59A4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C599Eu); } /* indirect call */
    }

loc_004C59A4: ;
    eax = edi;
    POP32(esp, edi);

loc_004C59A7: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004C59AB
 * Original: 0x004C59AB - 0x004C59C7 (28 bytes, 10 insns)
 * Category: game_audio
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C59AB(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_004C59AB: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, MEM32(esp + 8));
    ecx = eax;
    _fb = (uint32_t)(0xFFFFFFE4u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xFFFFFFE4u)) >> 32) & 1);
    eax = eax + 0xFFFFFFE4u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = (int)((ecx) != 0);
    ecx = (uint32_t)(0u - (uint32_t)(ecx));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x004C59C4u); RECOMP_ABI_CALL(0x004C586Bu, sub_004C586B); /* call 0x004C586B */

loc_004C59C4: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004C59C7
 * Original: 0x004C59C7 - 0x004C59E3 (28 bytes, 10 insns)
 * Category: game_audio
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C59C7(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_004C59C7: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, MEM32(esp + 8));
    ecx = eax;
    _fb = (uint32_t)(0xFFFFFFE4u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xFFFFFFE4u)) >> 32) & 1);
    eax = eax + 0xFFFFFFE4u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = (int)((ecx) != 0);
    ecx = (uint32_t)(0u - (uint32_t)(ecx));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x004C59E0u); RECOMP_ABI_CALL(0x004C58B9u, sub_004C58B9); /* call 0x004C58B9 */

loc_004C59E0: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004C59E3
 * Original: 0x004C59E3 - 0x004C5A03 (32 bytes, 11 insns)
 * Category: game_audio
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C59E3(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_004C59E3: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, MEM32(esp + 0xC));
    ecx = eax;
    PUSH32(esp, MEM32(esp + 0xC));
    _fb = (uint32_t)(0xFFFFFFE4u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xFFFFFFE4u)) >> 32) & 1);
    eax = eax + 0xFFFFFFE4u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = (int)((ecx) != 0);
    ecx = (uint32_t)(0u - (uint32_t)(ecx));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x004C5A00u); RECOMP_ABI_CALL(0x004C57D0u, sub_004C57D0); /* call 0x004C57D0 */

loc_004C5A00: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_004C5A03
 * Original: 0x004C5A03 - 0x004C5A08 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C5A03(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004C5A03: ;
    g_seh_ebp = ebp; sub_004C5907(); return; /* tail jmp 0x004C5907 */

}

/**
 * sub_004C5A08
 * Original: 0x004C5A08 - 0x004C5A0D (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C5A08(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004C5A08: ;
    g_seh_ebp = ebp; sub_004C5959(); return; /* tail jmp 0x004C5959 */

}

/**
 * sub_004C5A0D
 * Original: 0x004C5A0D - 0x004C5AD6 (201 bytes, 73 insns)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004C5A0D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004C5A0D: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C5A17u); RECOMP_ABI_CALL(0x004C38BEu, sub_004C38BE); /* call 0x004C38BE */

loc_004C5A17: ;
    _fa = (uint32_t)(MEM32(0x4E1668)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x4E1668), 0 (32-bit) */
    eax = ZX8(LO8(eax));
    MEM32(ebp + -8) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_004C5A3F; /* je: equal / zero */

loc_004C5A26: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C5A35; /* je: equal / zero */

loc_004C5A2A: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x4E1674);
    { uint32_t _icall_target = MEM32(0x561008); PUSH32(esp, 0x004C5A35u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C5A2Fu); } /* indirect call */
    }

loc_004C5A35: ;
    eax = 0x80004005u;
    goto loc_004C5AD2;

loc_004C5A3F: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C5A4Au); RECOMP_ABI_CALL(0x004C374Au, sub_004C374A); /* call 0x004C374A */

loc_004C5A4A: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 5 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004C5ABD; /* jne: not equal / not zero */

loc_004C5A51: ;
    esi = edi + 0x18;
    PUSH32(esp, ebx);
    ebx = esi;
    MEM32(ebp + 8) = 4;

loc_004C5A5E: ;
    PUSH32(esp, MEM32(ebx));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C5A65u); RECOMP_ABI_CALL(0x004C5108u, sub_004C5108); /* call 0x004C5108 */

loc_004C5A65: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + 8) = MEM32(ebp + 8) - 1;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_004C5A5E; /* jne: not equal / not zero */

loc_004C5A6D: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004C5A6F: ;
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C5A75u); RECOMP_ABI_CALL(0x004C3C1Bu, sub_004C3C1B); /* call 0x004C3C1B */

loc_004C5A75: ;
    eax = MEM32(esi);
    ecx = ebp + -4;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C5A81u); RECOMP_ABI_CALL(0x004C5164u, sub_004C5164); /* call 0x004C5164 */

loc_004C5A81: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_004C5A8B; /* jl: less (signed <) */

loc_004C5A85: ;
    _fa = (uint32_t)(MEM8(ebp + -4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + -4), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_004C5A6F; /* jne: not equal / not zero */

loc_004C5A8B: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C5A9A; /* je: equal / zero */

loc_004C5A91: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C5A97u); RECOMP_ABI_CALL(0x004C3960u, sub_004C3960); /* call 0x004C3960 */

loc_004C5A97: ;
    MEM32(esi) = MEM32(esi) & 0;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_004C5A9A: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 4 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_004C5A6F; /* jb: below (unsigned <) */

loc_004C5AA3: ;
    eax = MEM32(edi + 0x28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_004C5AB5; /* je: equal / zero */

loc_004C5AAB: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C5AB1u); RECOMP_ABI_CALL(0x004C6B6Fu, sub_004C6B6F); /* call 0x004C6B6F */

loc_004C5AB1: ;
    MEM32(edi + 0x28) = MEM32(edi + 0x28) & 0;
    _fa = (uint32_t)(MEM32(edi + 0x28)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_004C5AB5: ;
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C5ABBu); RECOMP_ABI_CALL(0x004C374Au, sub_004C374A); /* call 0x004C374A */

loc_004C5ABB: ;
    esi = eax;

loc_004C5ABD: ;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C5ACE; /* je: equal / zero */

loc_004C5AC3: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x4E1674);
    { uint32_t _icall_target = MEM32(0x561008); PUSH32(esp, 0x004C5ACEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C5AC8u); } /* indirect call */
    }

loc_004C5ACE: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);

loc_004C5AD2: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004C5AD6
 * Original: 0x004C5AD6 - 0x004C5B23 (77 bytes, 26 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C5AD6(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004C5AD6: ;
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM32(esi + 0xB0)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0xB0), 0 (32-bit) */
    PUSH32(esp, edi);
    MEM32(esi) = 0x585FF8;
    if (CMP_EQ(_fa, _fb)) goto loc_004C5AF0; /* je: equal / zero */

loc_004C5AE9: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x004C5AF0u); RECOMP_ABI_CALL(0x004C5559u, sub_004C5559); /* call 0x004C5559 */

loc_004C5AF0: ;
    edi = esi + 0xB4;
    eax = MEM32(edi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C5B05; /* je: equal / zero */

loc_004C5AFC: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004C5B02u); RECOMP_ABI_CALL(0x004C6B6Fu, sub_004C6B6F); /* call 0x004C6B6F */

loc_004C5B02: ;
    MEM32(edi) = MEM32(edi) & 0;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_004C5B05: ;
    edi = esi + 0xB8;
    eax = MEM32(edi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C5B1A; /* je: equal / zero */

loc_004C5B11: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004C5B17u); RECOMP_ABI_CALL(0x004C6B6Fu, sub_004C6B6F); /* call 0x004C6B6F */

loc_004C5B17: ;
    MEM32(edi) = MEM32(edi) & 0;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_004C5B1A: ;
    POP32(esp, edi);
    MEM32(esi) = 0x586074;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004C5B23
 * Original: 0x004C5B23 - 0x004C5BA9 (134 bytes, 55 insns)
 * Category: game_audio
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004C5B23(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004C5B23: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x48;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + 8));
    esi = ecx;
    eax = esi + 0xC;
    PUSH32(esp, eax);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C5B3Cu); RECOMP_ABI_CALL(0x004C6CC9u, sub_004C6CC9); /* call 0x004C6CC9 */

loc_004C5B3C: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C5B95; /* je: equal / zero */

loc_004C5B42: ;
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x200010) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(esi + 8), 0x200010 (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_004C5B95; /* jne: not equal / not zero */

loc_004C5B4B: ;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C5B95; /* je: equal / zero */

loc_004C5B50: ;
    eax = ebp + -72;
    MEM32(ebp + -8) = ebx;
    MEM32(ebp + -4) = eax;

loc_004C5B59: ;
    eax = MEM32(ebp + -8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 8 (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_004C5B87; /* jae: above or equal (unsigned >=) */

loc_004C5B61: ;
    ecx = edi;
    edx = ebp + eax * 8 + -72;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C5B6Cu); RECOMP_ABI_CALL(0x004C37BDu, sub_004C37BD); /* call 0x004C37BD */

loc_004C5B6C: ;
    MEM32(edx) = eax;
    eax = MEM32(ebp + -8);
    MEM32(ebp + eax * 8 + -68) = ebx;
    ecx = MEM32(edx);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = eax << LO8(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = ~eax;
    edi = edi & eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebp + -8) = MEM32(ebp + -8) + 1;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004C5B59; /* jne: not equal / not zero */

loc_004C5B87: ;
    eax = ebp + -8;
    PUSH32(esp, eax);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C5B92u); RECOMP_ABI_CALL(0x004C548Eu, sub_004C548E); /* call 0x004C548E */

loc_004C5B92: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_004C5B95: ;
    PUSH32(esp, MEM32(esi + 0x10));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C5B9Du); RECOMP_ABI_CALL(0x004C3995u, sub_004C3995); /* call 0x004C3995 */

loc_004C5B9D: ;
    POP32(esp, edi);
    MEM32(esi + 0x18) = eax;
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004C5BA9
 * Original: 0x004C5BA9 - 0x004C5BED (68 bytes, 24 insns)
 * Category: game_audio
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C5BA9(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004C5BA9: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    ecx = MEM32(esi + 0x10);
    PUSH32(esp, 1);
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, 0x004C5BBCu); RECOMP_ABI_CALL(0x004C5B23u, sub_004C5B23); /* call 0x004C5B23 */

loc_004C5BBC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004C5BC9; /* jne: not equal / not zero */

loc_004C5BC0: ;
    ecx = MEM32(esi + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, 0x004C5BC9u); RECOMP_ABI_CALL(0x004C548Eu, sub_004C548E); /* call 0x004C548E */

loc_004C5BC9: ;
    ecx = MEM32(esi + 0xC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x004C5BD1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C5BCEu); } /* indirect call */
    }

loc_004C5BD1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_004C5BE9; /* jl: less (signed <) */

loc_004C5BD5: ;
    ecx = MEM32(esi + 0xC);
    PUSH32(esp, 0x004C5BDDu); RECOMP_ABI_CALL(0x004CAFFCu, sub_004CAFFC); /* call 0x004CAFFC */

loc_004C5BDD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_004C5BE9; /* jl: less (signed <) */

loc_004C5BE1: ;
    ecx = MEM32(esi + 0xC);
    PUSH32(esp, 0x004C5BE9u); RECOMP_ABI_CALL(0x004CB155u, sub_004CB155); /* call 0x004CB155 */

loc_004C5BE9: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004C5BED
 * Original: 0x004C5BED - 0x004C5C79 (140 bytes, 49 insns)
 * Category: game_audio
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004C5BED(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_004C5BED: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    _cf = 0; /* xor clears CF */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = 0x80000000u;
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(esi + 8), edi (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(ebp + -4) = ebx;
    if (TEST_NZ(_fa, _fb)) goto loc_004C5C15; /* jne: not equal / not zero */

loc_004C5C05: ;
    eax = MEM32(esi + 0xBC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_004C5C1B; /* je: equal / zero */

loc_004C5C0F: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C5C15u); RECOMP_ABI_CALL(0x004C6B6Fu, sub_004C6B6F); /* call 0x004C6B6F */

loc_004C5C15: ;
    MEM32(esi + 0xBC) = ebx;

loc_004C5C1B: ;
    eax = MEM32(ebp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(esi + 0xC0) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_004C5C61; /* je: equal / zero */

loc_004C5C28: ;
    ecx = MEM32(ebp + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_004C5C3A; /* je: equal / zero */

loc_004C5C2F: ;
    _cf = 0; /* logical op clears CF */
    MEM32(esi + 8) = MEM32(esi + 8) | edi;
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esi + 0xBC) = ecx;
    goto loc_004C5C61;

loc_004C5C3A: ;
    _cf = 0; /* logical op clears CF */
    MEM8(esi + 0xB) = MEM8(esi + 0xB) & 0x7F;
    _fa = (uint32_t)(MEM8(esi + 0xB)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x61645344);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C5C4Au); RECOMP_ABI_CALL(0x004C6B07u, sub_004C6B07); /* call 0x004C6B07 */

loc_004C5C4A: ;
    MEM32(esi + 0xBC) = eax;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    eax = eax & 0x7FF8FFF2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x8007000Eu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x8007000Eu)) >> 32) & 1);
    eax = eax + 0x8007000Eu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -4) = eax;

loc_004C5C61: ;
    PUSH32(esp, MEM32(esi + 0xC0));
    ecx = esi;
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C5C6Fu); RECOMP_ABI_CALL(0x004C5779u, sub_004C5779); /* call 0x004C5779 */

loc_004C5C6F: ;
    eax = MEM32(ebp + -4);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004C5C79
 * Original: 0x004C5C79 - 0x004C5D27 (174 bytes, 60 insns)
 * Category: game_audio
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004C5C79(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004C5C79: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 0xC);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004C5C90; /* jne: not equal / not zero */

loc_004C5C88: ;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), edi (32-bit) */
    MEM32(ebp + 0xC) = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_004C5C97; /* je: equal / zero */

loc_004C5C90: ;
    MEM32(ebp + 0xC) = 1;

loc_004C5C97: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C5C9Cu); RECOMP_ABI_CALL(0x004C38BEu, sub_004C38BE); /* call 0x004C38BE */

loc_004C5C9C: ;
    _fa = (uint32_t)(MEM32(0x4E1668)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x4E1668), edi (32-bit) */
    eax = ZX8(LO8(eax));
    MEM32(ebp + -4) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_004C5CC0; /* je: equal / zero */

loc_004C5CAA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C5CB9; /* je: equal / zero */

loc_004C5CAE: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x4E1674);
    { uint32_t _icall_target = MEM32(0x561008); PUSH32(esp, 0x004C5CB9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C5CB3u); } /* indirect call */
    }

loc_004C5CB9: ;
    eax = 0x80004005u;
    goto loc_004C5D21;

loc_004C5CC0: ;
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    eax = MEM32(esi + 0x1C);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 0xBC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(eax + 0xBC) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004C5CDA; /* jne: not equal / not zero */

loc_004C5CCF: ;
    ecx = MEM32(ebp + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 0xC0)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(eax + 0xC0) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C5D0D; /* je: equal / zero */

loc_004C5CDA: ;
    PUSH32(esp, MEM32(ebp + 0xC));
    ecx = MEM32(esi + 0x20);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C5CE5u); RECOMP_ABI_CALL(0x004CC50Eu, sub_004CC50E); /* call 0x004CC50E */

loc_004C5CE5: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_004C5D0D; /* jl: less (signed <) */

loc_004C5CEB: ;
    PUSH32(esp, MEM32(ebp + 0x10));
    ecx = MEM32(esi + 0x1C);
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C5CF7u); RECOMP_ABI_CALL(0x004C5BEDu, sub_004C5BED); /* call 0x004C5BED */

loc_004C5CF7: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_004C5D0D; /* jl: less (signed <) */

loc_004C5CFD: ;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C5D0D; /* je: equal / zero */

loc_004C5D03: ;
    ecx = MEM32(esi + 0x20);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C5D0Bu); RECOMP_ABI_CALL(0x004CC3BEu, sub_004CC3BE); /* call 0x004CC3BE */

loc_004C5D0B: ;
    edi = eax;

loc_004C5D0D: ;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    POP32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_004C5D1F; /* je: equal / zero */

loc_004C5D14: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x4E1674);
    { uint32_t _icall_target = MEM32(0x561008); PUSH32(esp, 0x004C5D1Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C5D19u); } /* indirect call */
    }

loc_004C5D1F: ;
    eax = edi;

loc_004C5D21: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_004C5D27
 * Original: 0x004C5D27 - 0x004C5D4C (37 bytes, 13 insns)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C5D27(void)
{

loc_004C5D27: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esp + 0xC));
    edi = esi + 4;
    ecx = edi;
    PUSH32(esp, 0x004C5D39u); RECOMP_ABI_CALL(0x004C562Cu, sub_004C562C); /* call 0x004C562C */

loc_004C5D39: ;
    MEM32(edi) = 0x586028;
    POP32(esp, edi);
    MEM32(esi) = 0x586038;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004C5D4C
 * Original: 0x004C5D4C - 0x004C5F8C (576 bytes, 216 insns)
 * Category: game_audio
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004C5D4C(void)
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

loc_004C5D4C: ;
    PUSH32(esp, ebp);
    ebp = esp + -112;
    _fb = (uint32_t)(0xD4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xD4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ecx = ebp + 0x78;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C5D61u); RECOMP_ABI_CALL(0x004C36E9u, sub_004C36E9); /* call 0x004C36E9 */

loc_004C5D61: ;
    esi = MEM32(ebp + 0x78);
    ebx = MEM32(ebp + 0x7C);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    eax = MEM32(esi);
    ecx = MEM32(esi + 4);
    MEM32(ebp + 0x6C) = eax;
    MEM32(ebp + 0x68) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_004C5D81; /* je: equal / zero */

loc_004C5D76: ;
    eax = eax | MEM32(ebx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx = ecx | MEM32(ebx + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(ebp + 0x6C) = eax;
    MEM32(ebp + 0x68) = ecx;

loc_004C5D81: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 4 (8-bit) */
    PUSH32(esp, edi);
    if (TEST_NZ(_fa, _fb)) goto loc_004C5D8B; /* jne: not equal / not zero */

loc_004C5D86: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 0x40 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_004C5DC0; /* jne: not equal / not zero */

loc_004C5D8B: ;
    eax = ebp + -32;
    PUSH32(esp, eax);
    eax = esi + 0x2C;
    PUSH32(esp, eax);
    eax = esi + 0x20;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C5D9Cu); RECOMP_ABI_CALL(0x004C6DC9u, sub_004C6DC9); /* call 0x004C6DC9 */

loc_004C5D9C: ;
    eax = esi + 0x44;
    PUSH32(esp, 3);
    POP32(esp, ecx);
    edi = eax;
    esi = ebp + -32;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(4);
    while (ecx != 0) {
        _flags = (MEM32(esi) == MEM32(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsd */
    if ((_flags != 0)) goto loc_004C5DB9; /* je: equal / zero */

loc_004C5DAD: ;
    MEM32(ebp + 0x6C) = MEM32(ebp + 0x6C) | 0x40;
    _fa = (uint32_t)(MEM32(ebp + 0x6C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esi = ebp + -32;
    edi = eax;
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */

loc_004C5DB9: ;
    MEM32(ebp + 0x68) = MEM32(ebp + 0x68) | 0x40;
    _fa = (uint32_t)(MEM32(ebp + 0x68)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esi = MEM32(ebp + 0x78);

loc_004C5DC0: ;
    eax = MEM32(ebp + 0x6C);
    eax = eax & 0x400000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if ((_fa == 0)) goto loc_004C5DDB; /* je: equal / zero */

loc_004C5DCA: ;
    _fa = (uint32_t)(MEM32(ebx + 0x40)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0x40), 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C5DD8; /* je: equal / zero */

loc_004C5DD0: ;
    MEM16(ebp + 0x6E) = MEM16(ebp + 0x6E) | 0x7FF;
    _fa = (uint32_t)(MEM16(ebp + 0x6E)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* or result */
    goto loc_004C5DDB;

loc_004C5DD8: ;
    MEM32(ebp + 0x6C) = eax;

loc_004C5DDB: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C5F4E; /* je: equal / zero */

loc_004C5DE3: ;
    ecx = MEM32(ebx + 0x40);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C5F4E; /* je: equal / zero */

loc_004C5DEF: ;
    _fa = (uint32_t)(MEM32(ebp + 0x6C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x410001) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(ebp + 0x6C), 0x410001 (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_004C5E06; /* jne: not equal / not zero */

loc_004C5DF8: ;
    edx = MEM32(ebp + 0x68);
    eax = 0x18000000;
    edx = edx & eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C5E5A; /* je: equal / zero */

loc_004C5E06: ;
    eax = ebp + 0x54;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = ebp + 0x48;
    PUSH32(esp, eax);
    eax = ebx + 8;
    PUSH32(esp, eax);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    { uint32_t _icall_target = MEM32(0x4E1D1C); PUSH32(esp, 0x004C5E1Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C5E17u); } /* indirect call */
    }

loc_004C5E1D: ;
    eax = ebx + 0x5C;
    PUSH32(esp, 3);
    POP32(esp, ecx);
    edi = eax;
    esi = ebp + 0x48;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(4);
    while (ecx != 0) {
        _flags = (MEM32(esi) == MEM32(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsd */
    if ((_flags != 0)) goto loc_004C5E3A; /* je: equal / zero */

loc_004C5E2E: ;
    MEM8(ebp + 0x6F) = MEM8(ebp + 0x6F) | 8;
    _fa = (uint32_t)(MEM8(ebp + 0x6F)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    esi = ebp + 0x48;
    edi = eax;
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */

loc_004C5E3A: ;
    fp_push(MEMF(ebx + 0x68)); /* fld float */
    fp_push(MEMF(ebp + 0x54)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_004C5E53; /* jnp: not parity */

loc_004C5E49: ;
    eax = MEM32(ebp + 0x54);
    MEM8(ebp + 0x6F) = MEM8(ebp + 0x6F) | 0x10;
    _fa = (uint32_t)(MEM8(ebp + 0x6F)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    MEM32(ebx + 0x68) = eax;

loc_004C5E53: ;
    MEM8(ebp + 0x6B) = MEM8(ebp + 0x6B) | 0x18;
    _fa = (uint32_t)(MEM8(ebp + 0x6B)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    esi = MEM32(ebp + 0x78);

loc_004C5E5A: ;
    _fa = (uint32_t)(MEM32(ebp + 0x6C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x18400044) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(ebp + 0x6C), 0x18400044 (32-bit) */
    edi = 0x20000000;
    if (TEST_NZ(_fa, _fb)) goto loc_004C5E6D; /* jne: not equal / not zero */

loc_004C5E68: ;
    _fa = (uint32_t)(MEM32(ebp + 0x68)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(ebp + 0x68), edi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_004C5EC4; /* jne: not equal / not zero */

loc_004C5E6D: ;
    fp_push(MEMF(ebx + 0x68)); /* fld float */
    eax = ebp + 0x64;
    PUSH32(esp, eax);
    eax = ebp + 0x60;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    eax = ebx + 0x5C;
    PUSH32(esp, eax);
    eax = esi + 0x44;
    PUSH32(esp, eax);
    eax = esi + 0x2C;
    PUSH32(esp, eax);
    eax = esi + 0x20;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebx + 0x40));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C5E94u); RECOMP_ABI_CALL(0x004C37C1u, sub_004C37C1); /* call 0x004C37C1 */

loc_004C5E94: ;
    fp_push(MEMF(ebx + 0x74)); /* fld float */
    fp_push(MEMF(ebp + 0x60)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_004C5EB2; /* jp: parity */

loc_004C5EA3: ;
    fp_push(MEMF(ebx + 0x78)); /* fld float */
    fp_push(MEMF(ebp + 0x64)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_004C5EC1; /* jnp: not parity */

loc_004C5EB2: ;
    eax = MEM32(ebp + 0x60);
    MEM32(ebp + 0x6C) = MEM32(ebp + 0x6C) | edi;
    _fa = (uint32_t)(MEM32(ebp + 0x6C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(ebx + 0x74) = eax;
    eax = MEM32(ebp + 0x64);
    MEM32(ebx + 0x78) = eax;

loc_004C5EC1: ;
    MEM32(ebp + 0x68) = MEM32(ebp + 0x68) | edi;
    _fa = (uint32_t)(MEM32(ebp + 0x68)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_004C5EC4: ;
    _fa = (uint32_t)(MEM16(ebp + 0x6E)) & 0xFFFFu; _fb = (uint32_t)(0x808) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* test MEM16(ebp + 0x6E), 0x808 (16-bit) */
    edi = 0x40000000;
    if (TEST_NZ(_fa, _fb)) goto loc_004C5ED6; /* jne: not equal / not zero */

loc_004C5ED1: ;
    _fa = (uint32_t)(MEM32(ebp + 0x68)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(ebp + 0x68), edi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_004C5F03; /* jne: not equal / not zero */

loc_004C5ED6: ;
    eax = ebp + 0x5C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = ebx + 0x5C;
    PUSH32(esp, eax);
    eax = ebx + 0x28;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x4E1D24); PUSH32(esp, 0x004C5EE8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C5EE2u); } /* indirect call */
    }

loc_004C5EE8: ;
    fp_push(MEMF(ebx + 0x70)); /* fld float */
    fp_push(MEMF(ebp + 0x5C)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_004C5F00; /* jnp: not parity */

loc_004C5EF7: ;
    eax = MEM32(ebp + 0x5C);
    MEM32(ebp + 0x6C) = MEM32(ebp + 0x6C) | edi;
    _fa = (uint32_t)(MEM32(ebp + 0x6C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(ebx + 0x70) = eax;

loc_004C5F00: ;
    MEM32(ebp + 0x68) = MEM32(ebp + 0x68) | edi;
    _fa = (uint32_t)(MEM32(ebp + 0x68)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_004C5F03: ;
    _fa = (uint32_t)(MEM32(ebp + 0x6C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8420002) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(ebp + 0x6C), 0x8420002 (32-bit) */
    edi = 0x80000000u;
    if (TEST_NZ(_fa, _fb)) goto loc_004C5F1A; /* jne: not equal / not zero */

loc_004C5F11: ;
    eax = MEM32(ebp + 0x68);
    eax = eax & edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C5F4E; /* je: equal / zero */

loc_004C5F1A: ;
    eax = ebp + 0x58;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = ebx + 0x5C;
    PUSH32(esp, eax);
    eax = ebx + 0x14;
    PUSH32(esp, eax);
    eax = esi + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebx + 0x40));
    { uint32_t _icall_target = MEM32(0x4E1D28); PUSH32(esp, 0x004C5F33u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C5F2Du); } /* indirect call */
    }

loc_004C5F33: ;
    fp_push(MEMF(ebx + 0x6C)); /* fld float */
    fp_push(MEMF(ebp + 0x58)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_004C5F4B; /* jnp: not parity */

loc_004C5F42: ;
    eax = MEM32(ebp + 0x58);
    MEM32(ebp + 0x6C) = MEM32(ebp + 0x6C) | edi;
    _fa = (uint32_t)(MEM32(ebp + 0x6C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(ebx + 0x6C) = eax;

loc_004C5F4B: ;
    MEM32(ebp + 0x68) = MEM32(ebp + 0x68) | edi;
    _fa = (uint32_t)(MEM32(ebp + 0x68)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_004C5F4E: ;
    ecx = MEM32(ebp + 0x6C);
    eax = ecx;
    eax = eax & 0x7F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    POP32(esp, edi);
    if ((_fa == 0)) goto loc_004C5F5B; /* je: equal / zero */

loc_004C5F59: ;
    MEM32(esi) = eax;

loc_004C5F5B: ;
    eax = MEM32(ebp + 0x68);
    eax = eax & 0x7F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if ((_fa == 0)) goto loc_004C5F66; /* je: equal / zero */

loc_004C5F63: ;
    MEM32(esi + 4) = eax;

loc_004C5F66: ;
    eax = 0xFFFF0000u;
    ecx = ecx & eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if ((_fa == 0)) goto loc_004C5F71; /* je: equal / zero */

loc_004C5F6F: ;
    MEM32(ebx) = ecx;

loc_004C5F71: ;
    ecx = MEM32(ebp + 0x68);
    ecx = ecx & eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if ((_fa == 0)) goto loc_004C5F7B; /* je: equal / zero */

loc_004C5F78: ;
    MEM32(ebx + 4) = ecx;

loc_004C5F7B: ;
    ecx = ebp + 0x78;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C5F83u); RECOMP_ABI_CALL(0x004C370Eu, sub_004C370E); /* call 0x004C370E */

loc_004C5F83: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x70) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0x70;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_004C5F8C
 * Original: 0x004C5F8C - 0x004C5FDA (78 bytes, 24 insns)
 * Category: game_audio
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C5F8C(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004C5F8C: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004C5F92u); RECOMP_ABI_CALL(0x004C38BEu, sub_004C38BE); /* call 0x004C38BE */

loc_004C5F92: ;
    _fa = (uint32_t)(MEM32(0x4E1668)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x4E1668), 0 (32-bit) */
    esi = ZX8(LO8(eax));
    if (CMP_EQ(_fa, _fb)) goto loc_004C5FB4; /* je: equal / zero */

loc_004C5F9E: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C5FAD; /* je: equal / zero */

loc_004C5FA2: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x4E1674);
    { uint32_t _icall_target = MEM32(0x561008); PUSH32(esp, 0x004C5FADu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C5FA7u); } /* indirect call */
    }

loc_004C5FAD: ;
    eax = 0x80004005u;
    goto loc_004C5FD6;

loc_004C5FB4: ;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, 0x004C5FC2u); RECOMP_ABI_CALL(0x004C5BA9u, sub_004C5BA9); /* call 0x004C5BA9 */

loc_004C5FC2: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    edi = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_004C5FD3; /* je: equal / zero */

loc_004C5FC8: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x4E1674);
    { uint32_t _icall_target = MEM32(0x561008); PUSH32(esp, 0x004C5FD3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C5FCDu); } /* indirect call */
    }

loc_004C5FD3: ;
    eax = edi;
    POP32(esp, edi);

loc_004C5FD6: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004C5FDA
 * Original: 0x004C5FDA - 0x004C602C (82 bytes, 26 insns)
 * Category: game_audio
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C5FDA(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004C5FDA: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004C5FE0u); RECOMP_ABI_CALL(0x004C38BEu, sub_004C38BE); /* call 0x004C38BE */

loc_004C5FE0: ;
    _fa = (uint32_t)(MEM32(0x4E1668)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x4E1668), 0 (32-bit) */
    esi = ZX8(LO8(eax));
    if (CMP_EQ(_fa, _fb)) goto loc_004C6002; /* je: equal / zero */

loc_004C5FEC: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C5FFB; /* je: equal / zero */

loc_004C5FF0: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x4E1674);
    { uint32_t _icall_target = MEM32(0x561008); PUSH32(esp, 0x004C5FFBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C5FF5u); } /* indirect call */
    }

loc_004C5FFB: ;
    eax = 0x80004005u;
    goto loc_004C6028;

loc_004C6002: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esp + 0x10));
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x004C6014u); RECOMP_ABI_CALL(0x004C5BA9u, sub_004C5BA9); /* call 0x004C5BA9 */

loc_004C6014: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    edi = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_004C6025; /* je: equal / zero */

loc_004C601A: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x4E1674);
    { uint32_t _icall_target = MEM32(0x561008); PUSH32(esp, 0x004C6025u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C601Fu); } /* indirect call */
    }

loc_004C6025: ;
    eax = edi;
    POP32(esp, edi);

loc_004C6028: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004C602C
 * Original: 0x004C602C - 0x004C6048 (28 bytes, 10 insns)
 * Category: game_audio
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C602C(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_004C602C: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, MEM32(esp + 8));
    ecx = eax;
    _fb = (uint32_t)(0xFFFFFFE4u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xFFFFFFE4u)) >> 32) & 1);
    eax = eax + 0xFFFFFFE4u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = (int)((ecx) != 0);
    ecx = (uint32_t)(0u - (uint32_t)(ecx));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x004C6045u); RECOMP_ABI_CALL(0x004C5F8Cu, sub_004C5F8C); /* call 0x004C5F8C */

loc_004C6045: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004C6048
 * Original: 0x004C6048 - 0x004C6068 (32 bytes, 11 insns)
 * Category: game_audio
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C6048(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_004C6048: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, MEM32(esp + 0xC));
    ecx = eax;
    PUSH32(esp, MEM32(esp + 0xC));
    _fb = (uint32_t)(0xFFFFFFE4u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xFFFFFFE4u)) >> 32) & 1);
    eax = eax + 0xFFFFFFE4u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = (int)((ecx) != 0);
    ecx = (uint32_t)(0u - (uint32_t)(ecx));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x004C6065u); RECOMP_ABI_CALL(0x004C5C79u, sub_004C5C79); /* call 0x004C5C79 */

loc_004C6065: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_004C6068
 * Original: 0x004C6068 - 0x004C606D (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C6068(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004C6068: ;
    g_seh_ebp = ebp; sub_004C5FDA(); return; /* tail jmp 0x004C5FDA */

}

/**
 * sub_004C606D
 * Original: 0x004C606D - 0x004C6072 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C606D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004C606D: ;
    g_seh_ebp = ebp; sub_004C5D4C(); return; /* tail jmp 0x004C5D4C */

}

/**
 * sub_004C6072
 * Original: 0x004C6072 - 0x004C6101 (143 bytes, 51 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C6072(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004C6072: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebx = ecx;
    PUSH32(esp, 0xF);
    POP32(esp, ecx);
    PUSH32(esp, 0x3F);
    POP32(esp, ebp);
    MEM32(ebx + 4) = 1;
    MEM32(ebx) = 0x586074;
    edi = ebx + 0x38;
    esi = 0x4E12F4;
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
    eax = ebx + 0x80;
    edx = 0xFFF;
    PUSH32(esp, 0xC);
    MEM32(ebx + 0x30) = ebp;
    MEM32(eax) = edx;
    edi = ebx + 0x84;
    POP32(esp, ecx);
    esi = 0x4E12C0;
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
    MEM32(ebx + 0x30) = ebp;
    MEM32(eax) = edx;
    eax = MEM32(0x4E1664);
    ecx = eax;
    ecx = ecx & 0xFFFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 2 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_004C60D3; /* ja: above (unsigned >) */

loc_004C60CC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFC0000u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0xFFFC0000u (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004C60D8; /* je: equal / zero */

loc_004C60D3: ;
    PUSH32(esp, 0x004C60D8u); RECOMP_ABI_CALL(0x0047EA70u, sub_0047EA70); /* call 0x0047EA70 */

loc_004C60D8: ;
    MEM32(0x4E1660) = eax;
    PUSH32(esp, 7);
    POP32(esp, ecx);
    edi = ebx + 0x10;
    eax = 0x1010101;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    MEM16(edi) = LO16(eax); edi += RECOMP_DF_STEP(2); /* stosw */
    MEM8(edi) = LO8(eax); edi += RECOMP_DF_STEP(1); /* stosb */
    PUSH32(esp, 0);
    ecx = ebx;
    MEM8(ebx + 0x2F) = 0;
    PUSH32(esp, 0x004C60FAu); RECOMP_ABI_CALL(0x004C39E9u, sub_004C39E9); /* call 0x004C39E9 */

loc_004C60FA: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = ebx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_004C6101
 * Original: 0x004C6101 - 0x004C619B (154 bytes, 53 insns)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004C6101(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004C6101: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C610Au); RECOMP_ABI_CALL(0x004C38BEu, sub_004C38BE); /* call 0x004C38BE */

loc_004C610A: ;
    _fa = (uint32_t)(MEM32(0x4E1668)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x4E1668), 0 (32-bit) */
    eax = ZX8(LO8(eax));
    MEM32(ebp + -4) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_004C612F; /* je: equal / zero */

loc_004C6119: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C6128; /* je: equal / zero */

loc_004C611D: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x4E1674);
    { uint32_t _icall_target = MEM32(0x561008); PUSH32(esp, 0x004C6128u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C6122u); } /* indirect call */
    }

loc_004C6128: ;
    eax = 0x80004005u;
    goto loc_004C6197;

loc_004C612F: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ecx = ebp + 8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C613Au); RECOMP_ABI_CALL(0x004C36E9u, sub_004C36E9); /* call 0x004C36E9 */

loc_004C613A: ;
    esi = MEM32(ebp + 8);
    eax = MEM32(esi + 8);
    PUSH32(esp, 0);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C614Bu); RECOMP_ABI_CALL(0x004C5D4Cu, sub_004C5D4C); /* call 0x004C5D4C */

loc_004C614B: ;
    ecx = MEM32(esi + 0xC);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C6153u); RECOMP_ABI_CALL(0x004C829Au, sub_004C829A); /* call 0x004C829A */

loc_004C6153: ;
    ebx = esi + 0x10;
    edi = MEM32(ebx);
    goto loc_004C6165;

loc_004C615A: ;
    eax = edi + -20;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C6163u); RECOMP_ABI_CALL(0x004C3DDAu, sub_004C3DDA); /* call 0x004C3DDA */

loc_004C6163: ;
    edi = MEM32(edi);

loc_004C6165: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004C615A; /* jne: not equal / not zero */

loc_004C6169: ;
    eax = MEM32(esi + 8);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 0x30) = edi;
    eax = MEM32(esi + 8);
    ecx = ebp + 8;
    MEM32(eax + 0x80) = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C6182u); RECOMP_ABI_CALL(0x004C370Eu, sub_004C370E); /* call 0x004C370E */

loc_004C6182: ;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), edi (32-bit) */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_004C6195; /* je: equal / zero */

loc_004C618A: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x4E1674);
    { uint32_t _icall_target = MEM32(0x561008); PUSH32(esp, 0x004C6195u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C618Fu); } /* indirect call */
    }

loc_004C6195: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004C6197: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004C619B
 * Original: 0x004C619B - 0x004C61B6 (27 bytes, 10 insns)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C619B(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004C619B: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004C61A3u); RECOMP_ABI_CALL(0x004C5AD6u, sub_004C5AD6); /* call 0x004C5AD6 */

loc_004C61A3: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004C61B0; /* je: equal / zero */

loc_004C61AA: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004C61B0u); RECOMP_ABI_CALL(0x004C6B6Fu, sub_004C6B6F); /* call 0x004C6B6F */

loc_004C61B0: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004C61B6
 * Original: 0x004C61B6 - 0x004C62B8 (258 bytes, 79 insns)
 * Category: game_audio
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C61B6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004C61B6: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebx = ecx;
    _cf = 0; /* xor clears CF */
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x182000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x182000 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(ebx + 8) = eax;
    if (TEST_Z(_fa, _fb)) goto loc_004C61CF; /* je: equal / zero */

loc_004C61CA: ;
    MEM32(ebx + 0x20) = ebp;
    goto loc_004C61DD;

loc_004C61CF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x200010) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x200010 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_NZ(_fa, _fb)) goto loc_004C61CA; /* jne: not equal / not zero */

loc_004C61D6: ;
    MEM32(ebx + 0x20) = 0x258;

loc_004C61DD: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x10 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_004C6250; /* je: equal / zero */

loc_004C61E1: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0xA4);
    PUSH32(esp, 0x61645344);
    PUSH32(esp, 0x004C61F2u); RECOMP_ABI_CALL(0x004C6B07u, sub_004C6B07); /* call 0x004C6B07 */

loc_004C61F2: ;
    ebp = eax;
    _cf = (int)((ebp) != 0);
    ebp = (uint32_t)(0u - (uint32_t)(ebp));
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    ebp = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    ebp = ebp & 0x7FF8FFF2;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x8007000Eu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ebp) + (uint64_t)(0x8007000Eu)) >> 32) & 1);
    ebp = ebp + 0x8007000Eu;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebx + 0xB4) = eax;
    if ((_fas < 0)) goto loc_004C62B1; /* js: sign (negative) */

loc_004C6210: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x12);
    POP32(esp, ecx);
    edi = eax + 8;
    esi = 0x4E135C;
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
    edi = MEM32(ebx + 0xB4);
    PUSH32(esp, 9);
    POP32(esp, ecx);
    _fb = (uint32_t)(0x80) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(0x80)) >> 32) & 1);
    edi = edi + 0x80;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = 0x4E1330;
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
    eax = MEM32(ebx + 0xB4);
    MEM32(eax) = 0x7FF0000;
    eax = MEM32(ebx + 0xB4);
    POP32(esp, edi);
    MEM32(eax + 0x7C) = 0x7F0000;
    POP32(esp, esi);

loc_004C6250: ;
    _fa = (uint32_t)(MEM32(ebx + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x400010) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(ebx + 8), 0x400010 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_004C6281; /* je: equal / zero */

loc_004C6259: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x38);
    PUSH32(esp, 0x61645344);
    PUSH32(esp, 0x004C6267u); RECOMP_ABI_CALL(0x004C6B07u, sub_004C6B07); /* call 0x004C6B07 */

loc_004C6267: ;
    MEM32(ebx + 0xB8) = eax;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    eax = eax & 0x7FF8FFF2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x8007000Eu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x8007000Eu)) >> 32) & 1);
    eax = eax + 0x8007000Eu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = 0; /* logical op clears CF */
    MEM8(ebx + 0xB) = MEM8(ebx + 0xB) | 1;
    _fa = (uint32_t)(MEM8(ebx + 0xB)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    ebp = eax;

loc_004C6281: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_L(_fas, _fbs)) goto loc_004C62B1; /* jl: less (signed <) */

loc_004C6285: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(esp + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x14), eax (32-bit) */
    _cf = (int)(_fa < _fb);
    ecx = ebx;
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esp + 0x14));
    PUSH32(esp, 0x004C629Au); RECOMP_ABI_CALL(0x004C5B23u, sub_004C5B23); /* call 0x004C5B23 */

loc_004C629A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_004C62A9; /* jne: not equal / not zero */

loc_004C629E: ;
    PUSH32(esp, MEM32(esp + 0x14));
    ecx = ebx;
    PUSH32(esp, 0x004C62A9u); RECOMP_ABI_CALL(0x004C548Eu, sub_004C548E); /* call 0x004C548E */

loc_004C62A9: ;
    eax = MEM32(ebx + 0x20);
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(ebx + 0x1C) = eax;

loc_004C62B1: ;
    eax = ebp;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_004C62B8
 * Original: 0x004C62B8 - 0x004C62DD (37 bytes, 13 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C62B8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004C62B8: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    esi = ecx;
    PUSH32(esp, 0);
    MEM32(esi) = 0x586054;
    PUSH32(esp, 0x004C62CAu); RECOMP_ABI_CALL(0x004C5BEDu, sub_004C5BED); /* call 0x004C5BED */

loc_004C62CA: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0x004C62D5u); RECOMP_ABI_CALL(0x004C3F4Cu, sub_004C3F4C); /* call 0x004C3F4C */

loc_004C62D5: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_004C5AD6(); return; /* tail jmp 0x004C5AD6 */

}

/**
 * sub_004C62DD
 * Original: 0x004C62DD - 0x004C6342 (101 bytes, 35 insns)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C62DD(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004C62DD: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x182000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x182000 (32-bit) */
    PUSH32(esp, edi);
    edi = ecx;
    ecx = 0x4CEB88;
    if (TEST_NZ(_fa, _fb)) goto loc_004C62F7; /* jne: not equal / not zero */

loc_004C62F4: ;
    ecx = MEM32(esi + 0xC);

loc_004C62F7: ;
    PUSH32(esp, MEM32(esi + 0x10));
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x004C6303u); RECOMP_ABI_CALL(0x004C61B6u, sub_004C61B6); /* call 0x004C61B6 */

loc_004C6303: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_004C633D; /* jl: less (signed <) */

loc_004C6307: ;
    ecx = MEM32(esi + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x180000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, 0x180000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004C631D; /* je: equal / zero */

loc_004C6312: ;
    ecx = MEM32(esi + 0x14);
    MEM32(edi + 0xD4) = ecx;
    goto loc_004C632C;

loc_004C631D: ;
    _fa = (uint32_t)(HI8(ecx)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(ecx), 0x20 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004C632C; /* je: equal / zero */

loc_004C6322: ;
    MEM32(edi + 0xD4) = 0x1F;

loc_004C632C: ;
    esi = MEM32(esi + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C633D; /* je: equal / zero */

loc_004C6333: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x004C633Du); RECOMP_ABI_CALL(0x004C5BEDu, sub_004C5BED); /* call 0x004C5BED */

loc_004C633D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004C6342
 * Original: 0x004C6342 - 0x004C6429 (231 bytes, 80 insns)
 * Category: game_audio
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C6342(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004C6342: ;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x004C6348u); RECOMP_ABI_CALL(0x004C38BEu, sub_004C38BE); /* call 0x004C38BE */

loc_004C6348: ;
    _fa = (uint32_t)(MEM32(0x4E1668)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x4E1668), 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    eax = ZX8(LO8(eax));
    MEM32(esp) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_004C6370; /* je: equal / zero */

loc_004C6357: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_004C6366; /* je: equal / zero */

loc_004C635B: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x4E1674);
    { uint32_t _icall_target = MEM32(0x561008); PUSH32(esp, 0x004C6366u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C6360u); } /* indirect call */
    }

loc_004C6366: ;
    eax = 0x80004005u;
    goto loc_004C6425;

loc_004C6370: ;
    PUSH32(esp, 0xE0);
    PUSH32(esp, 0x004C637Au); RECOMP_ABI_CALL(0x004C369Fu, sub_004C369F); /* call 0x004C369F */

loc_004C637A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    POP32(esp, ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_004C6390; /* je: equal / zero */

loc_004C637F: ;
    MEM32(eax + 4) = 1;
    MEM32(eax) = 0x586054;
    ecx = eax;
    goto loc_004C6392;

loc_004C6390: ;
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004C6392: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    _cf = (int)((esi) != 0);
    esi = (uint32_t)(0u - (uint32_t)(esi));
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    esi = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    ebp = 0x7FF8FFF2;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x18);
    _cf = 0; /* logical op clears CF */
    esi = esi & ebp;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebx = 0x8007000Eu;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(ebx)) >> 32) & 1);
    esi = esi + ebx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi + 0x1C) = ecx;
    if ((_fas < 0)) goto loc_004C640D; /* js: sign (negative) */

loc_004C63B3: ;
    PUSH32(esp, MEM32(esp + 0x1C));
    PUSH32(esp, 0x004C63BCu); RECOMP_ABI_CALL(0x004C62DDu, sub_004C62DD); /* call 0x004C62DD */

loc_004C63BC: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_L(_fas, _fbs)) goto loc_004C640D; /* jl: less (signed <) */

loc_004C63C2: ;
    PUSH32(esp, 0x158);
    PUSH32(esp, 0x004C63CCu); RECOMP_ABI_CALL(0x004C369Fu, sub_004C369F); /* call 0x004C369F */

loc_004C63CC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    POP32(esp, ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_004C63E3; /* je: equal / zero */

loc_004C63D1: ;
    PUSH32(esp, MEM32(edi + 0x1C));
    ecx = MEM32(edi + 8);
    PUSH32(esp, MEM32(ecx + 0xC));
    ecx = eax;
    PUSH32(esp, 0x004C63E1u); RECOMP_ABI_CALL(0x004CBEFBu, sub_004CBEFB); /* call 0x004CBEFB */

loc_004C63E1: ;
    goto loc_004C63E5;

loc_004C63E3: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004C63E5: ;
    esi = eax;
    _cf = (int)((esi) != 0);
    esi = (uint32_t)(0u - (uint32_t)(esi));
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    esi = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    esi = esi & ebp;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(ebx)) >> 32) & 1);
    esi = esi + ebx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi + 0x20) = eax;
    if ((_fas < 0)) goto loc_004C640D; /* js: sign (negative) */

loc_004C63F4: ;
    ecx = eax;
    PUSH32(esp, 0x004C63FBu); RECOMP_ABI_CALL(0x004CC39Au, sub_004CC39A); /* call 0x004CC39A */

loc_004C63FB: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_L(_fas, _fbs)) goto loc_004C640D; /* jl: less (signed <) */

loc_004C6401: ;
    PUSH32(esp, MEM32(edi + 0x1C));
    PUSH32(esp, MEM32(edi + 0x20));
    PUSH32(esp, edi);
    PUSH32(esp, 0x004C640Du); RECOMP_ABI_CALL(0x004C5671u, sub_004C5671); /* call 0x004C5671 */

loc_004C640D: ;
    _fa = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x10), 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_004C641F; /* je: equal / zero */

loc_004C6414: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x4E1674);
    { uint32_t _icall_target = MEM32(0x561008); PUSH32(esp, 0x004C641Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C6419u); } /* indirect call */
    }

loc_004C641F: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_004C6425: ;
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004C6429
 * Original: 0x004C6429 - 0x004C644A (33 bytes, 11 insns)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C6429(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004C6429: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x586064;
    PUSH32(esp, 0x004C6437u); RECOMP_ABI_CALL(0x004C5AD6u, sub_004C5AD6); /* call 0x004C5AD6 */

loc_004C6437: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004C6444; /* je: equal / zero */

loc_004C643E: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004C6444u); RECOMP_ABI_CALL(0x004C6B6Fu, sub_004C6B6F); /* call 0x004C6B6F */

loc_004C6444: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004C644A
 * Original: 0x004C644A - 0x004C6483 (57 bytes, 19 insns)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C644A(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004C644A: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esi + 0x14));
    edi = ecx;
    PUSH32(esp, MEM32(esi + 8));
    PUSH32(esp, MEM32(esi));
    PUSH32(esp, 0x004C645Fu); RECOMP_ABI_CALL(0x004C61B6u, sub_004C61B6); /* call 0x004C61B6 */

loc_004C645F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_004C647E; /* jl: less (signed <) */

loc_004C6463: ;
    ecx = MEM32(esi + 4);
    MEM32(edi + 0xBC) = ecx;
    ecx = MEM32(esi + 0xC);
    MEM32(edi + 0xC0) = ecx;
    ecx = MEM32(esi + 0x10);
    MEM32(edi + 0xC4) = ecx;

loc_004C647E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004C6483
 * Original: 0x004C6483 - 0x004C652D (170 bytes, 61 insns)
 * Category: game_audio
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C6483(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_004C6483: ;
    PUSH32(esp, 0xC8);
    PUSH32(esp, 0x004C648Du); RECOMP_ABI_CALL(0x004C369Fu, sub_004C369F); /* call 0x004C369F */

loc_004C648D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    POP32(esp, ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_004C64A3; /* je: equal / zero */

loc_004C6492: ;
    MEM32(eax + 4) = 1;
    MEM32(eax) = 0x586064;
    ecx = eax;
    goto loc_004C64A5;

loc_004C64A3: ;
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004C64A5: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    _cf = (int)((esi) != 0);
    esi = (uint32_t)(0u - (uint32_t)(esi));
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    esi = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    _cf = 0; /* logical op clears CF */
    esi = esi & 0x7FF8FFF2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebx = 0x8007000Eu;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(ebx)) >> 32) & 1);
    esi = esi + ebx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi + 0x20) = ecx;
    if ((_fas < 0)) goto loc_004C6525; /* js: sign (negative) */

loc_004C64C4: ;
    PUSH32(esp, MEM32(esp + 0x14));
    PUSH32(esp, 0x004C64CDu); RECOMP_ABI_CALL(0x004C644Au, sub_004C644A); /* call 0x004C644A */

loc_004C64CD: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_L(_fas, _fbs)) goto loc_004C6525; /* jl: less (signed <) */

loc_004C64D3: ;
    PUSH32(esp, 0x198);
    PUSH32(esp, 0x004C64DDu); RECOMP_ABI_CALL(0x004C369Fu, sub_004C369F); /* call 0x004C369F */

loc_004C64DD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    POP32(esp, ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_004C64F4; /* je: equal / zero */

loc_004C64E2: ;
    PUSH32(esp, MEM32(edi + 0x20));
    ecx = MEM32(edi + 0xC);
    PUSH32(esp, MEM32(ecx + 0xC));
    ecx = eax;
    PUSH32(esp, 0x004C64F2u); RECOMP_ABI_CALL(0x004C8CD7u, sub_004C8CD7); /* call 0x004C8CD7 */

loc_004C64F2: ;
    goto loc_004C64F6;

loc_004C64F4: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004C64F6: ;
    esi = eax;
    _cf = (int)((esi) != 0);
    esi = (uint32_t)(0u - (uint32_t)(esi));
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    esi = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    esi = esi & 0x7FF8FFF2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(ebx)) >> 32) & 1);
    esi = esi + ebx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi + 0x24) = eax;
    if ((_fas < 0)) goto loc_004C6525; /* js: sign (negative) */

loc_004C6509: ;
    ecx = eax;
    PUSH32(esp, 0x004C6510u); RECOMP_ABI_CALL(0x004C882Au, sub_004C882A); /* call 0x004C882A */

loc_004C6510: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_L(_fas, _fbs)) goto loc_004C6525; /* jl: less (signed <) */

loc_004C6516: ;
    PUSH32(esp, MEM32(edi + 0x20));
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(4)) >> 32) & 1);
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, MEM32(edi + 0x20));
    PUSH32(esp, edi);
    PUSH32(esp, 0x004C6525u); RECOMP_ABI_CALL(0x004C5671u, sub_004C5671); /* call 0x004C5671 */

loc_004C6525: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004C652D
 * Original: 0x004C652D - 0x004C6545 (24 bytes, 9 insns)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C652D(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_004C652D: ;
    eax = MEM32(esp + 4);
    ecx = eax;
    _fb = (uint32_t)(0xFFFFFFF8u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xFFFFFFF8u)) >> 32) & 1);
    eax = eax + 0xFFFFFFF8u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = (int)((ecx) != 0);
    ecx = (uint32_t)(0u - (uint32_t)(ecx));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x004C6542u); RECOMP_ABI_CALL(0x004C6101u, sub_004C6101); /* call 0x004C6101 */

loc_004C6542: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004C6545
 * Original: 0x004C6545 - 0x004C65E1 (156 bytes, 57 insns)
 * Category: game_audio
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C6545(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_004C6545: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x004C654Cu); RECOMP_ABI_CALL(0x004C38BEu, sub_004C38BE); /* call 0x004C38BE */

loc_004C654C: ;
    _cf = 0; /* xor clears CF */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(0x4E1668)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x4E1668), edi (32-bit) */
    _cf = (int)(_fa < _fb);
    ebx = ZX8(LO8(eax));
    if (CMP_EQ(_fa, _fb)) goto loc_004C656F; /* je: equal / zero */

loc_004C6559: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_004C6568; /* je: equal / zero */

loc_004C655D: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x4E1674);
    { uint32_t _icall_target = MEM32(0x561008); PUSH32(esp, 0x004C6568u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C6562u); } /* indirect call */
    }

loc_004C6568: ;
    eax = 0x80004005u;
    goto loc_004C65DC;

loc_004C656F: ;
    PUSH32(esp, 0x24);
    PUSH32(esp, 0x004C6576u); RECOMP_ABI_CALL(0x004C369Fu, sub_004C369F); /* call 0x004C369F */

loc_004C6576: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    POP32(esp, ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_004C6588; /* je: equal / zero */

loc_004C657B: ;
    PUSH32(esp, MEM32(esp + 0xC));
    ecx = eax;
    PUSH32(esp, 0x004C6586u); RECOMP_ABI_CALL(0x004C579Du, sub_004C579D); /* call 0x004C579D */

loc_004C6586: ;
    edi = eax;

loc_004C6588: ;
    PUSH32(esp, esi);
    esi = edi;
    _cf = (int)((esi) != 0);
    esi = (uint32_t)(0u - (uint32_t)(esi));
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    esi = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    esi = esi & 0x7FF8FFF2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x8007000Eu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(0x8007000Eu)) >> 32) & 1);
    esi = esi + 0x8007000Eu;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    if ((_fas < 0)) goto loc_004C65C0; /* js: sign (negative) */

loc_004C659D: ;
    PUSH32(esp, MEM32(esp + 0x14));
    PUSH32(esp, edi);
    PUSH32(esp, 0x004C65A7u); RECOMP_ABI_CALL(0x004C6342u, sub_004C6342); /* call 0x004C6342 */

loc_004C65A7: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_L(_fas, _fbs)) goto loc_004C65C0; /* jl: less (signed <) */

loc_004C65AD: ;
    ecx = MEM32(esp + 0x18);
    eax = edi;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(0x1C)) >> 32) & 1);
    edi = edi + 0x1C;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    eax = eax & edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ecx) = eax;
    goto loc_004C65CA;

loc_004C65C0: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_004C65CA; /* je: equal / zero */

loc_004C65C4: ;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x004C65CAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C65C7u); } /* indirect call */
    }

loc_004C65CA: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_004C65D9; /* je: equal / zero */

loc_004C65CE: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x4E1674);
    { uint32_t _icall_target = MEM32(0x561008); PUSH32(esp, 0x004C65D9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C65D3u); } /* indirect call */
    }

loc_004C65D9: ;
    eax = esi;
    POP32(esp, esi);

loc_004C65DC: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_004C65E1
 * Original: 0x004C65E1 - 0x004C6672 (145 bytes, 52 insns)
 * Category: game_audio
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C65E1(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_004C65E1: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x004C65E8u); RECOMP_ABI_CALL(0x004C38BEu, sub_004C38BE); /* call 0x004C38BE */

loc_004C65E8: ;
    _cf = 0; /* xor clears CF */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(0x4E1668)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x4E1668), edi (32-bit) */
    _cf = (int)(_fa < _fb);
    ebx = ZX8(LO8(eax));
    if (CMP_EQ(_fa, _fb)) goto loc_004C660B; /* je: equal / zero */

loc_004C65F5: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_004C6604; /* je: equal / zero */

loc_004C65F9: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x4E1674);
    { uint32_t _icall_target = MEM32(0x561008); PUSH32(esp, 0x004C6604u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C65FEu); } /* indirect call */
    }

loc_004C6604: ;
    eax = 0x80004005u;
    goto loc_004C666D;

loc_004C660B: ;
    PUSH32(esp, 0x28);
    PUSH32(esp, 0x004C6612u); RECOMP_ABI_CALL(0x004C369Fu, sub_004C369F); /* call 0x004C369F */

loc_004C6612: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    POP32(esp, ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_004C6624; /* je: equal / zero */

loc_004C6617: ;
    PUSH32(esp, MEM32(esp + 0xC));
    ecx = eax;
    PUSH32(esp, 0x004C6622u); RECOMP_ABI_CALL(0x004C5D27u, sub_004C5D27); /* call 0x004C5D27 */

loc_004C6622: ;
    edi = eax;

loc_004C6624: ;
    PUSH32(esp, esi);
    esi = edi;
    _cf = (int)((esi) != 0);
    esi = (uint32_t)(0u - (uint32_t)(esi));
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    esi = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    esi = esi & 0x7FF8FFF2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x8007000Eu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(0x8007000Eu)) >> 32) & 1);
    esi = esi + 0x8007000Eu;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    if ((_fas < 0)) goto loc_004C6651; /* js: sign (negative) */

loc_004C6639: ;
    PUSH32(esp, MEM32(esp + 0x14));
    PUSH32(esp, edi);
    PUSH32(esp, 0x004C6643u); RECOMP_ABI_CALL(0x004C6483u, sub_004C6483); /* call 0x004C6483 */

loc_004C6643: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_L(_fas, _fbs)) goto loc_004C6651; /* jl: less (signed <) */

loc_004C6649: ;
    eax = MEM32(esp + 0x18);
    MEM32(eax) = edi;
    goto loc_004C665B;

loc_004C6651: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_004C665B; /* je: equal / zero */

loc_004C6655: ;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004C665Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C6658u); } /* indirect call */
    }

loc_004C665B: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_004C666A; /* je: equal / zero */

loc_004C665F: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x4E1674);
    { uint32_t _icall_target = MEM32(0x561008); PUSH32(esp, 0x004C666Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C6664u); } /* indirect call */
    }

loc_004C666A: ;
    eax = esi;
    POP32(esp, esi);

loc_004C666D: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_004C6672
 * Original: 0x004C6672 - 0x004C677A (264 bytes, 72 insns)
 * Category: game_audio
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C6672(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004C6672: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x004C667Bu); RECOMP_ABI_CALL(0x004C38BEu, sub_004C38BE); /* call 0x004C38BE */

loc_004C667B: ;
    _fa = (uint32_t)(MEM32(0x4E1668)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x4E1668), edi (32-bit) */
    esi = ZX8(LO8(eax));
    if (CMP_EQ(_fa, _fb)) goto loc_004C669F; /* je: equal / zero */

loc_004C6686: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C6695; /* je: equal / zero */

loc_004C668A: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x4E1674);
    { uint32_t _icall_target = MEM32(0x561008); PUSH32(esp, 0x004C6695u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C668Fu); } /* indirect call */
    }

loc_004C6695: ;
    eax = 0x80004005u;
    goto loc_004C6775;

loc_004C669F: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(eax + 8);
    _fa = (uint32_t)(MEM32(ecx + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 8), 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004C66B6; /* jne: not equal / not zero */

loc_004C66AC: ;
    edi = 0x88780032u;
    goto loc_004C6764;

loc_004C66B6: ;
    edx = MEM32(eax + 8);
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, ebx);
    ebx = MEM32(ecx);
    MEM32(edx + 0x84) = ebx;
    ebx = MEM32(ecx + 4);
    edx = MEM32(eax + 8);
    MEM32(edx + 0x88) = ebx;
    ebx = MEM32(ecx + 8);
    edx = MEM32(eax + 8);
    MEM32(edx + 0x8C) = ebx;
    ebx = MEM32(ecx + 0xC);
    edx = MEM32(eax + 8);
    MEM32(edx + 0x90) = ebx;
    ebx = MEM32(ecx + 0x10);
    edx = MEM32(eax + 8);
    MEM32(edx + 0x94) = ebx;
    ebx = MEM32(ecx + 0x14);
    edx = MEM32(eax + 8);
    MEM32(edx + 0x98) = ebx;
    ebx = MEM32(ecx + 0x18);
    edx = MEM32(eax + 8);
    MEM32(edx + 0x9C) = ebx;
    ebx = MEM32(ecx + 0x1C);
    edx = MEM32(eax + 8);
    MEM32(edx + 0xA0) = ebx;
    ebx = MEM32(ecx + 0x20);
    edx = MEM32(eax + 8);
    MEM32(edx + 0xA4) = ebx;
    ebx = MEM32(ecx + 0x24);
    edx = MEM32(eax + 8);
    MEM32(edx + 0xA8) = ebx;
    ebx = MEM32(ecx + 0x28);
    edx = MEM32(eax + 8);
    MEM32(edx + 0xAC) = ebx;
    ecx = MEM32(ecx + 0x2C);
    edx = MEM32(eax + 8);
    MEM32(edx + 0xB0) = ecx;
    ecx = MEM32(eax + 8);
    MEM16(ecx + 0x80) = MEM16(ecx + 0x80) | 0xFFF;
    _fa = (uint32_t)(MEM16(ecx + 0x80)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* or result */
    _fa = (uint32_t)(MEM8(esp + 0x18)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 0x18), 1 (8-bit) */
    POP32(esp, ebx);
    if (TEST_NZ(_fa, _fb)) goto loc_004C6764; /* jne: not equal / not zero */

loc_004C675E: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004C6764u); RECOMP_ABI_CALL(0x004C6101u, sub_004C6101); /* call 0x004C6101 */

loc_004C6764: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C6773; /* je: equal / zero */

loc_004C6768: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x4E1674);
    { uint32_t _icall_target = MEM32(0x561008); PUSH32(esp, 0x004C6773u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C676Du); } /* indirect call */
    }

loc_004C6773: ;
    eax = edi;

loc_004C6775: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_004C677A
 * Original: 0x004C677A - 0x004C6795 (27 bytes, 10 insns)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C677A(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004C677A: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004C6782u); RECOMP_ABI_CALL(0x004C62B8u, sub_004C62B8); /* call 0x004C62B8 */

loc_004C6782: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004C678F; /* je: equal / zero */

loc_004C6789: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004C678Fu); RECOMP_ABI_CALL(0x004C6B6Fu, sub_004C6B6F); /* call 0x004C6B6F */

loc_004C678F: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004C6795
 * Original: 0x004C6795 - 0x004C67B9 (36 bytes, 12 insns)
 * Category: game_audio
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C6795(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_004C6795: ;
    PUSH32(esp, MEM32(esp + 0x10));
    eax = MEM32(esp + 8);
    PUSH32(esp, MEM32(esp + 0x10));
    ecx = eax;
    PUSH32(esp, MEM32(esp + 0x10));
    _fb = (uint32_t)(0xFFFFFFF8u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xFFFFFFF8u)) >> 32) & 1);
    eax = eax + 0xFFFFFFF8u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = (int)((ecx) != 0);
    ecx = (uint32_t)(0u - (uint32_t)(ecx));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x004C67B6u); RECOMP_ABI_CALL(0x004C6545u, sub_004C6545); /* call 0x004C6545 */

loc_004C67B6: ;
    esp += 20; return; /* ret 16 */

}

/**
 * sub_004C67B9
 * Original: 0x004C67B9 - 0x004C67DD (36 bytes, 12 insns)
 * Category: game_audio
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C67B9(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_004C67B9: ;
    PUSH32(esp, MEM32(esp + 0x10));
    eax = MEM32(esp + 8);
    PUSH32(esp, MEM32(esp + 0x10));
    ecx = eax;
    PUSH32(esp, MEM32(esp + 0x10));
    _fb = (uint32_t)(0xFFFFFFF8u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xFFFFFFF8u)) >> 32) & 1);
    eax = eax + 0xFFFFFFF8u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = (int)((ecx) != 0);
    ecx = (uint32_t)(0u - (uint32_t)(ecx));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x004C67DAu); RECOMP_ABI_CALL(0x004C65E1u, sub_004C65E1); /* call 0x004C65E1 */

loc_004C67DA: ;
    esp += 20; return; /* ret 16 */

}

/**
 * sub_004C67DD
 * Original: 0x004C67DD - 0x004C67FD (32 bytes, 11 insns)
 * Category: game_audio
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C67DD(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_004C67DD: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, MEM32(esp + 0xC));
    ecx = eax;
    PUSH32(esp, MEM32(esp + 0xC));
    _fb = (uint32_t)(0xFFFFFFF8u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xFFFFFFF8u)) >> 32) & 1);
    eax = eax + 0xFFFFFFF8u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = (int)((ecx) != 0);
    ecx = (uint32_t)(0u - (uint32_t)(ecx));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x004C67FAu); RECOMP_ABI_CALL(0x004C6672u, sub_004C6672); /* call 0x004C6672 */

loc_004C67FA: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_004C67FD
 * Original: 0x004C67FD - 0x004C6936 (313 bytes, 117 insns)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004C67FD(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_004C67FD: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x60));
    esp = esp - 0x60;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, 0xB4);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C680Du); RECOMP_ABI_CALL(0x004C369Fu, sub_004C369F); /* call 0x004C369F */

loc_004C680D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    POP32(esp, ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_004C681B; /* je: equal / zero */

loc_004C6812: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C6819u); RECOMP_ABI_CALL(0x004C6072u, sub_004C6072); /* call 0x004C6072 */

loc_004C6819: ;
    goto loc_004C681D;

loc_004C681B: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004C681D: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    MEM32(esi + 8) = eax;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    PUSH32(esp, edi);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    edi = 0x7FF8FFF2;
    _cf = 0; /* logical op clears CF */
    eax = eax & edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebx = 0x8007000Eu;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(ebx)) >> 32) & 1);
    eax = eax + ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    if ((_fas < 0)) goto loc_004C692F; /* js: sign (negative) */

loc_004C683E: ;
    PUSH32(esp, 0x540);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C6848u); RECOMP_ABI_CALL(0x004C369Fu, sub_004C369F); /* call 0x004C369F */

loc_004C6848: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    POP32(esp, ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_004C685B; /* je: equal / zero */

loc_004C684D: ;
    PUSH32(esp, MEM32(esi + 8));
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C6857u); RECOMP_ABI_CALL(0x004C7A50u, sub_004C7A50); /* call 0x004C7A50 */

loc_004C6857: ;
    ecx = eax;
    goto loc_004C685D;

loc_004C685B: ;
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004C685D: ;
    eax = ecx;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    eax = eax & edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(ebx)) >> 32) & 1);
    eax = eax + ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0xC) = ecx;
    if ((_fas < 0)) goto loc_004C692F; /* js: sign (negative) */

loc_004C6870: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C6875u); RECOMP_ABI_CALL(0x004C86ACu, sub_004C86AC); /* call 0x004C86AC */

loc_004C6875: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_L(_fas, _fbs)) goto loc_004C692F; /* jl: less (signed <) */

loc_004C687D: ;
    PUSH32(esp, 6);
    POP32(esp, ecx);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x10);
    edi = ebp + -32;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    POP32(esp, ecx);
    edi = ebp + -96;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    PUSH32(esp, 1);
    eax = ebp + -8;
    MEM32(ebp + -16) = eax;
    PUSH32(esp, 0x40);
    eax = ebp + -96;
    PUSH32(esp, 0x626F5344);
    MEM32(ebp + -32) = 0x18;
    MEM32(ebp + -20) = 0x4CEBB4;
    MEM32(ebp + -8) = 8;
    MEM32(ebp + -4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C68BEu); RECOMP_ABI_CALL(0x004C6B07u, sub_004C6B07); /* call 0x004C6B07 */

loc_004C68BE: ;
    MEM32(esi + 0x28) = eax;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    eax = eax & 0x7FF8FFF2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(ebx)) >> 32) & 1);
    eax = eax + ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    if ((_fas < 0)) goto loc_004C692F; /* js: sign (negative) */

loc_004C68CE: ;
    _cf = 0; /* xor clears CF */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ebp + 8) = edi;
    ebx = esi + 0x18;

loc_004C68D6: ;
    ecx = MEM32(ebp + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x20 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_AE(_fa, _fb)) goto loc_004C692F; /* jae: above or equal (unsigned >=) */

loc_004C68DE: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004C68E0: ;
    edx = ecx + eax;
    MEM32(ebp + eax * 8 + -96) = edx;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 8 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_004C68E0; /* jb: below (unsigned <) */

loc_004C68ED: ;
    _fa = (uint32_t)(MEM32(ebp + -40)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -40), 0x1F (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_004C68F6; /* jne: not equal / not zero */

loc_004C68F3: ;
    MEM32(ebp + -8) = MEM32(ebp + -8) - 1;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_004C68F6: ;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    eax = ebp + -32;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C6902u); RECOMP_ABI_CALL(0x004C6545u, sub_004C6545); /* call 0x004C6545 */

loc_004C6902: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_004C6924; /* jl: less (signed <) */

loc_004C6906: ;
    eax = MEM32(esi + 0x28);
    ecx = MEM32(ebx);
    PUSH32(esp, 0x40);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C6914u); RECOMP_ABI_CALL(0x004C6048u, sub_004C6048); /* call 0x004C6048 */

loc_004C6914: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_004C6924; /* jl: less (signed <) */

loc_004C6918: ;
    eax = MEM32(ebx);
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C6924u); RECOMP_ABI_CALL(0x004C50E4u, sub_004C50E4); /* call 0x004C50E4 */

loc_004C6924: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM32(ebp + 8)) + (uint64_t)(8)) >> 32) & 1);
    MEM32(ebp + 8) = MEM32(ebp + 8) + 8;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ebx) + (uint64_t)(4)) >> 32) & 1);
    ebx = ebx + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_GE(_fas, _fbs)) goto loc_004C68D6; /* jge: greater or equal (signed >=) */

loc_004C692F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004C6936
 * Original: 0x004C6936 - 0x004C69A3 (109 bytes, 44 insns)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C6936(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_004C6936: ;
    eax = MEM32(0x4E1CF0);
    PUSH32(esp, esi);
    _cf = 0; /* xor clears CF */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_004C6950; /* je: equal / zero */

loc_004C6942: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004C6948u); RECOMP_ABI_CALL(0x004CAE38u, sub_004CAE38); /* call 0x004CAE38 */

loc_004C6948: ;
    ecx = MEM32(esp + 8);
    MEM32(ecx) = eax;
    goto loc_004C699D;

loc_004C6950: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x2C);
    PUSH32(esp, 0x004C6958u); RECOMP_ABI_CALL(0x004C369Fu, sub_004C369F); /* call 0x004C369F */

loc_004C6958: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    POP32(esp, ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_004C6968; /* je: equal / zero */

loc_004C695D: ;
    ecx = eax;
    PUSH32(esp, 0x004C6964u); RECOMP_ABI_CALL(0x004C3A0Bu, sub_004C3A0B); /* call 0x004C3A0B */

loc_004C6964: ;
    edi = eax;
    goto loc_004C696A;

loc_004C6968: ;
    _cf = 0; /* xor clears CF */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004C696A: ;
    esi = edi;
    _cf = (int)((esi) != 0);
    esi = (uint32_t)(0u - (uint32_t)(esi));
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    esi = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    esi = esi & 0x7FF8FFF2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x8007000Eu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(0x8007000Eu)) >> 32) & 1);
    esi = esi + 0x8007000Eu;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    if ((_fas < 0)) goto loc_004C6992; /* js: sign (negative) */

loc_004C697E: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x004C6984u); RECOMP_ABI_CALL(0x004C67FDu, sub_004C67FD); /* call 0x004C67FD */

loc_004C6984: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_L(_fas, _fbs)) goto loc_004C6992; /* jl: less (signed <) */

loc_004C698A: ;
    eax = MEM32(esp + 0xC);
    MEM32(eax) = edi;
    goto loc_004C699C;

loc_004C6992: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_004C699C; /* je: equal / zero */

loc_004C6996: ;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x004C699Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C6999u); } /* indirect call */
    }

loc_004C699C: ;
    POP32(esp, edi);

loc_004C699D: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004C69A3
 * Original: 0x004C69A3 - 0x004C69EA (71 bytes, 30 insns)
 * Category: game_audio
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004C69A3(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_004C69A3: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C69AEu); RECOMP_ABI_CALL(0x004C38BEu, sub_004C38BE); /* call 0x004C38BE */

loc_004C69AE: ;
    esi = ZX8(LO8(eax));
    eax = ebp + -4;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C69BAu); RECOMP_ABI_CALL(0x004C6936u, sub_004C6936); /* call 0x004C6936 */

loc_004C69BA: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_L(_fas, _fbs)) goto loc_004C69D3; /* jl: less (signed <) */

loc_004C69C0: ;
    eax = MEM32(ebp + -4);
    ecx = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(8)) >> 32) & 1);
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = (int)((ecx) != 0);
    ecx = (uint32_t)(0u - (uint32_t)(ecx));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = MEM32(ebp + 0xC);
    MEM32(eax) = ecx;

loc_004C69D3: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_004C69E2; /* je: equal / zero */

loc_004C69D7: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x4E1674);
    { uint32_t _icall_target = MEM32(0x561008); PUSH32(esp, 0x004C69E2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C69DCu); } /* indirect call */
    }

loc_004C69E2: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_004C69EA
 * Original: 0x004C69EA - 0x004C6A41 (87 bytes, 37 insns)
 * Category: game_audio
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004C69EA(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004C69EA: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C69FAu); RECOMP_ABI_CALL(0x004C38BEu, sub_004C38BE); /* call 0x004C38BE */

loc_004C69FA: ;
    edi = ZX8(LO8(eax));
    eax = ebp + -4;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C6A06u); RECOMP_ABI_CALL(0x004C6936u, sub_004C6936); /* call 0x004C6936 */

loc_004C6A06: ;
    esi = MEM32(ebp + -4);
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_004C6A1F; /* jl: less (signed <) */

loc_004C6A0F: ;
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C6A1Du); RECOMP_ABI_CALL(0x004C65E1u, sub_004C65E1); /* call 0x004C65E1 */

loc_004C6A1D: ;
    ebx = eax;

loc_004C6A1F: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C6A29; /* je: equal / zero */

loc_004C6A23: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x004C6A29u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C6A26u); } /* indirect call */
    }

loc_004C6A29: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C6A38; /* je: equal / zero */

loc_004C6A2D: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x4E1674);
    { uint32_t _icall_target = MEM32(0x561008); PUSH32(esp, 0x004C6A38u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C6A32u); } /* indirect call */
    }

loc_004C6A38: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004C6A41
 * Original: 0x004C6A41 - 0x004C6A88 (71 bytes, 27 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C6A41(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004C6A41: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(esp + 8));
    PUSH32(esp, MEM32(esp + 0x10));
    { uint32_t _icall_target = MEM32(0x56118C); PUSH32(esp, 0x004C6A50u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C6A4Au); } /* indirect call */
    }

loc_004C6A50: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C6A82; /* je: equal / zero */

loc_004C6A56: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(0x561208); PUSH32(esp, 0x004C6A5Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C6A57u); } /* indirect call */
    }

loc_004C6A5D: ;
    edx = MEM32(0x4E1D18);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(edx) = MEM32(edx) + eax;
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x10), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C6A82; /* je: equal / zero */

loc_004C6A6C: ;
    ecx = eax;
    edx = ecx;
    PUSH32(esp, edi);
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
    POP32(esp, edi);

loc_004C6A82: ;
    eax = esi;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_004C6A88
 * Original: 0x004C6A88 - 0x004C6AA0 (24 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C6A88(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004C6A88: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esp + 4));
    { uint32_t _icall_target = MEM32(0x561208); PUSH32(esp, 0x004C6A92u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C6A8Cu); } /* indirect call */
    }

loc_004C6A92: ;
    ecx = MEM32(0x4E1D18);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    MEM32(ecx) = MEM32(ecx) - eax;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(0x561190)); return; /* indirect tail jmp */

}

/**
 * sub_004C6AA0
 * Original: 0x004C6AA0 - 0x004C6AEF (79 bytes, 30 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C6AA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004C6AA0: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(esp + 0x18));
    { uint32_t _icall_target = MEM32(0x5610B0); PUSH32(esp, 0x004C6AB7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C6AB1u); } /* indirect call */
    }

loc_004C6AB7: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C6AE9; /* je: equal / zero */

loc_004C6ABD: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(0x5610B4); PUSH32(esp, 0x004C6AC4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C6ABEu); } /* indirect call */
    }

loc_004C6AC4: ;
    edx = MEM32(0x4E1D14);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(edx) = MEM32(edx) + eax;
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM32(esp + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x14), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C6AE9; /* je: equal / zero */

loc_004C6AD3: ;
    ecx = eax;
    edx = ecx;
    PUSH32(esp, edi);
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
    POP32(esp, edi);

loc_004C6AE9: ;
    eax = esi;
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_004C6AEF
 * Original: 0x004C6AEF - 0x004C6B07 (24 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C6AEF(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004C6AEF: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esp + 4));
    { uint32_t _icall_target = MEM32(0x5610B4); PUSH32(esp, 0x004C6AF9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004C6AF3u); } /* indirect call */
    }

loc_004C6AF9: ;
    ecx = MEM32(0x4E1D14);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    MEM32(ecx) = MEM32(ecx) - eax;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(0x5610BC)); return; /* indirect tail jmp */

}

/**
 * sub_004C6B07
 * Original: 0x004C6B07 - 0x004C6B6F (104 bytes, 42 insns)
 * Category: game_audio
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C6B07(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004C6B07: ;
    ecx = MEM32(0x4E1C64);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    if (CMP_EQ(_fa, _fb)) goto loc_004C6B43; /* je: equal / zero */

loc_004C6B16: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004C6B1Cu); RECOMP_ABI_CALL(0x004C996Bu, sub_004C996B); /* call 0x004C996B */

loc_004C6B1C: ;
    edx = eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C6B49; /* je: equal / zero */

loc_004C6B22: ;
    _fa = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x10), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C6B45; /* je: equal / zero */

loc_004C6B29: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    ecx = esi;
    ebx = ecx;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = edx;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = ebx;
    ecx = ecx & 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if (!g_df) { memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx); edi += ecx; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM8(edi - _i) = LO8(eax); edi -= ecx; }
    ecx = 0; /* rep stosb */
    POP32(esp, edi);
    POP32(esp, ebx);
    goto loc_004C6B45;

loc_004C6B43: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004C6B45: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004C6B69; /* jne: not equal / not zero */

loc_004C6B49: ;
    PUSH32(esp, MEM32(esp + 0x10));
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, 0x004C6B5Au); RECOMP_ABI_CALL(0x004C6A41u, sub_004C6A41); /* call 0x004C6A41 */

loc_004C6B5A: ;
    edx = eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C6B69; /* je: equal / zero */

loc_004C6B60: ;
    MEM32(edx) = 0x6C6F6F70;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_004C6B69: ;
    eax = edx;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_004C6B6C
 * Original: 0x004C6B6C - 0x004C6B6F (3 bytes, 1 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C6B6C(void)
{

loc_004C6B6C: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_004C6B6F
 * Original: 0x004C6B6F - 0x004C6BA3 (52 bytes, 16 insns)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C6B6F(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004C6B6F: ;
    edx = MEM32(esp + 4);
    eax = edx + -4;
    ecx = MEM32(eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x6C6F6F70) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x6C6F6F70 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004C6B88; /* jne: not equal / not zero */

loc_004C6B80: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004C6B86u); RECOMP_ABI_CALL(0x004C6A88u, sub_004C6A88); /* call 0x004C6A88 */

loc_004C6B86: ;
    goto loc_004C6BA0;

loc_004C6B88: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x706F6C73) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x706F6C73 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004C6BA0; /* jne: not equal / not zero */

loc_004C6B90: ;
    ecx = MEM32(0x4E1C64);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C6BA0; /* je: equal / zero */

loc_004C6B9A: ;
    PUSH32(esp, edx);
    PUSH32(esp, 0x004C6BA0u); RECOMP_ABI_CALL(0x004C9B88u, sub_004C9B88); /* call 0x004C9B88 */

loc_004C6BA0: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004C6BA3
 * Original: 0x004C6BA3 - 0x004C6BED (74 bytes, 25 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C6BA3(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004C6BA3: ;
    ecx = MEM32(esp + 0x10);
    SET_LO16(eax, MEM16(esp + 4));
    SET_LO16(edx, MEM16(esp + 0xC));
    MEM16(ecx + 2) = LO16(eax);
    eax = ZX16(LO16(eax));
    MEM16(ecx + 0xE) = LO16(edx);
    edx = ZX16(LO16(edx));
    eax = (uint32_t)((int32_t)eax * (int32_t)edx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 8);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    POP32(esp, edi);
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)edi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)edi)); }
    esi = MEM32(esp + 0x10);
    MEM16(ecx + 0x10) = MEM16(ecx + 0x10) & 0;
    _fa = (uint32_t)(MEM16(ecx + 0x10)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    POP32(esp, edi);
    MEM32(ecx + 4) = esi;
    MEM16(ecx) = 1;
    MEM16(ecx + 0xC) = LO16(eax);
    eax = ZX16(LO16(eax));
    eax = (uint32_t)((int32_t)eax * (int32_t)esi);
    MEM32(ecx + 8) = eax;
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_004C6BED
 * Original: 0x004C6BED - 0x004C6C30 (67 bytes, 17 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C6BED(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004C6BED: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(esp + 8);
    edx = MEM32(esp + 4);
    MEM32(eax + 4) = ecx;
    ecx = ecx >> 6;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM16(eax + 2) = LO16(edx);
    edx = edx + edx * 8;
    ecx = ecx + ecx * 8;
    edx = edx << 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx << 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM16(eax) = 0x69;
    MEM16(eax + 0xE) = 4;
    MEM16(eax + 0xC) = LO16(edx);
    MEM32(eax + 8) = ecx;
    MEM16(eax + 0x10) = 2;
    MEM16(eax + 0x12) = 0x40;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_004C6C30
 * Original: 0x004C6C30 - 0x004C6C59 (41 bytes, 12 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C6C30(void)
{

loc_004C6C30: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(esp + 8);
    MEM16(eax) = 1;
    SET_LO8(edx, MEM8(ecx + 2));
    MEM8(eax + 2) = LO8(edx);
    SET_LO8(edx, MEM8(ecx + 0xE));
    MEM8(eax + 3) = LO8(edx);
    edx = MEM32(ecx + 4);
    MEM32(eax + 4) = edx;
    ecx = ZX8(MEM8(ecx + 0xC));
    MEM32(eax + 8) = ecx;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004C6C59
 * Original: 0x004C6C59 - 0x004C6C80 (39 bytes, 11 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C6C59(void)
{

loc_004C6C59: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(esp + 8);
    MEM16(eax) = 0x69;
    SET_LO8(edx, MEM8(ecx + 2));
    MEM8(eax + 2) = LO8(edx);
    MEM8(eax + 3) = 4;
    edx = MEM32(ecx + 4);
    MEM32(eax + 4) = edx;
    ecx = ZX8(MEM8(ecx + 0xC));
    MEM32(eax + 8) = ecx;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004C6C80
 * Original: 0x004C6C80 - 0x004C6CC9 (73 bytes, 31 insns)
 * Category: game_audio
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C6C80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004C6C80: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = ebx + 0x18;
    PUSH32(esp, 4);
    POP32(esp, ecx);
    edi = 0x4E12B0;
    esi = eax;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(4);
    while (ecx != 0) {
        _flags = (MEM32(esi) == MEM32(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsd */
    if ((_flags == 0)) goto loc_004C6CA6; /* jne: not equal / not zero */

loc_004C6C9A: ;
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(esp + 0x14));
    PUSH32(esp, 0x004C6CA4u); RECOMP_ABI_CALL(0x004C6C30u, sub_004C6C30); /* call 0x004C6C30 */

loc_004C6CA4: ;
    goto loc_004C6CC0;

loc_004C6CA6: ;
    PUSH32(esp, 4);
    esi = eax;
    POP32(esp, ecx);
    edi = 0x4E12A0;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(4);
    while (ecx != 0) {
        _flags = (MEM32(esi) == MEM32(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsd */
    if ((_flags == 0)) goto loc_004C6CC0; /* jne: not equal / not zero */

loc_004C6CB6: ;
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(esp + 0x14));
    PUSH32(esp, 0x004C6CC0u); RECOMP_ABI_CALL(0x004C6C59u, sub_004C6C59); /* call 0x004C6C59 */

loc_004C6CC0: ;
    eax = MEM32(ebx + 0x14);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004C6CC9
 * Original: 0x004C6CC9 - 0x004C6D0C (67 bytes, 25 insns)
 * Category: game_audio
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C6CC9(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004C6CC9: ;
    ecx = MEM32(esp + 8);
    eax = ZX16(MEM16(ecx));
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_004C6CFC; /* je: equal / zero */

loc_004C6CD6: ;
    _fb = (uint32_t)(0x68) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x68;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_004C6CF0; /* je: equal / zero */

loc_004C6CDB: ;
    _fb = (uint32_t)(0xFF95) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0xFF95;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa != 0)) goto loc_004C6D06; /* jne: not equal / not zero */

loc_004C6CE2: ;
    PUSH32(esp, ecx);
    PUSH32(esp, MEM32(esp + 0xC));
    PUSH32(esp, 0x004C6CECu); RECOMP_ABI_CALL(0x004C6C80u, sub_004C6C80); /* call 0x004C6C80 */

loc_004C6CEC: ;
    esi = eax;
    goto loc_004C6D06;

loc_004C6CF0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, MEM32(esp + 0xC));
    PUSH32(esp, 0x004C6CFAu); RECOMP_ABI_CALL(0x004C6C59u, sub_004C6C59); /* call 0x004C6C59 */

loc_004C6CFA: ;
    goto loc_004C6D06;

loc_004C6CFC: ;
    PUSH32(esp, ecx);
    PUSH32(esp, MEM32(esp + 0xC));
    PUSH32(esp, 0x004C6D06u); RECOMP_ABI_CALL(0x004C6C30u, sub_004C6C30); /* call 0x004C6C30 */

loc_004C6D06: ;
    eax = esi;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004C6D0C
 * Original: 0x004C6D0C - 0x004C6D17 (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C6D0C(void)
{

loc_004C6D0C: ;
    MEM32(0x4E1D18) = 0x4E163C;
    esp += 4; return; /* ret */

}

/**
 * sub_004C6D17
 * Original: 0x004C6D17 - 0x004C6D22 (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004C6D17(void)
{

loc_004C6D17: ;
    MEM32(0x4E1D14) = 0x4E1640;
    esp += 4; return; /* ret */

}

/**
 * sub_004C6D22
 * Original: 0x004C6D22 - 0x004C6D49 (39 bytes, 17 insns)
 * CC: cdecl, 1 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_004C6D22(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_004C6D22: ;
    eax = MEM32(esp + 4);
    fp_push(MEMF(eax + 8)); /* fld float */
    fp_push(MEMF(eax + 4)); /* fld float */
    fp_push(MEMF(eax)); /* fld float */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 3) & 7]); /* fmul st(3) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 4) & 7]); /* fmul st(4) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    g_fp_stack[(g_fp_top + 3) & 7] = fp_top(); fp_pop(); /* fstp st(3) */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_004C6D49
 * Original: 0x004C6D49 - 0x004C6D80 (55 bytes, 17 insns)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_004C6D49(void)
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

loc_004C6D49: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x648CF8)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x648cf8] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_004C6D7B; /* jne: not equal / not zero */

loc_004C6D5A: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    PUSH32(esp, ecx);
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x648D14)); /* fadd dword ptr [0x648d14] */
    fp_push(0.30102999566398119521); /* fldlg2 */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    { fp_st1() = fp_st1() * log2(fp_top()); fp_pop(); } /* fyl2x */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x649118)); /* fmul dword ptr [0x649118] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x004C6D79u); RECOMP_ABI_CALL(0x004C376Bu, sub_004C376B); /* call 0x004C376B */

loc_004C6D79: ;
    goto loc_004C6D7D;

loc_004C6D7B: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004C6D7D: ;
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_004C6D80
 * Original: 0x004C6D80 - 0x004C6DC9 (73 bytes, 23 insns)
 * Category: game_audio
 * CC: cdecl, 1 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_004C6D80(void)
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

loc_004C6D80: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x648CF8)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x648cf8] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_004C6D98; /* jp: parity */

loc_004C6D91: ;
    eax = 0xFFFFD8F0u;
    goto loc_004C6DC6;

loc_004C6D98: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x648D14)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x648d14] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_004C6DAD; /* jne: not equal / not zero */

loc_004C6DA9: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_004C6DC6;

loc_004C6DAD: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    PUSH32(esp, ecx);
    fp_push(0.30102999566398119521); /* fldlg2 */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    { fp_st1() = fp_st1() * log2(fp_top()); fp_pop(); } /* fyl2x */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x562F34)); /* fmul dword ptr [0x562f34] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x004C6DC6u); RECOMP_ABI_CALL(0x004C376Bu, sub_004C376B); /* call 0x004C376B */

loc_004C6DC6: ;
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_004C6DC9
 * Original: 0x004C6DC9 - 0x004C6E06 (61 bytes, 22 insns)
 * CC: cdecl, 3 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_004C6DC9(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_004C6DC9: ;
    ecx = MEM32(esp + 8);
    eax = MEM32(esp + 4);
    fp_push(MEMF(ecx + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 8)); /* fmul dword ptr [eax + 8] */
    edx = MEM32(esp + 0xC);
    fp_push(MEMF(ecx + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 4)); /* fmul dword ptr [eax + 4] */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    MEMF(edx) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 8)); /* fmul dword ptr [ecx + 8] */
    fp_push(MEMF(ecx)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 8)); /* fmul dword ptr [eax + 8] */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    MEMF(edx + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ecx)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 4)); /* fmul dword ptr [eax + 4] */
    fp_push(MEMF(eax)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 4)); /* fmul dword ptr [ecx + 4] */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    MEMF(edx + 8) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_004C6E06
 * Original: 0x004C6E06 - 0x004C6E4F (73 bytes, 28 insns)
 * Category: game_audio
 * CC: cdecl, 5 params, returns float_sse
 * Frame: standard_frame
 */
void sub_004C6E06(void)
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

loc_004C6E06: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 1 (32-bit) */
    ecx = MEM32(ebp + 0x10);
    fp_push(MEMF(ecx)); /* fld float */
    eax = MEM32(ebp + 0x14);
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(ecx + 4);
    MEM32(eax + 4) = edx;
    ecx = MEM32(ecx + 8);
    MEM32(eax + 8) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_004C6E40; /* je: equal / zero */

loc_004C6E25: ;
    ecx = MEM32(ebp + 0xC);
    fp_push(MEMF(eax)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ecx)); /* fsub dword ptr [ecx] */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ecx + 4)); /* fsub dword ptr [ecx + 4] */
    MEMF(eax + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ecx + 8)); /* fsub dword ptr [ecx + 8] */
    MEMF(eax + 8) = (float)fp_top(); fp_pop(); /* fstp */

loc_004C6E40: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C6E46u); RECOMP_ABI_CALL(0x004C951Au, sub_004C951A); /* call 0x004C951A */

loc_004C6E46: ;
    eax = MEM32(ebp + 0x18);
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    POP32(esp, ebp);
    esp += 24; return; /* ret 20 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_004C6E4F
 * Original: 0x004C6E4F - 0x004C6FB2 (355 bytes, 140 insns)
 * CC: cdecl, 8 params, returns float_sse
 * Frame: standard_frame
 */
void sub_004C6E4F(void)
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

loc_004C6E4F: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 1 (32-bit) */
    PUSH32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_004C6E67; /* je: equal / zero */

loc_004C6E5C: ;
    eax = MEM32(ebp + 0xC);
    esi = MEM32(ebp + 0x10);
    edx = MEM32(ebp + 0x14);
    goto loc_004C6E76;

loc_004C6E67: ;
    eax = 0x4E130C;
    esi = 0x4E1318;
    edx = 0x4CEC9C;

loc_004C6E76: ;
    ecx = MEM32(ebp + 0x18);
    fp_push(MEMF(eax + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 8)); /* fmul dword ptr [ecx + 8] */
    fp_push(MEMF(eax + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 4)); /* fmul dword ptr [ecx + 4] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(ecx)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax)); /* fmul dword ptr [eax] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    MEMF(ebp + -4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(edx + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 8)); /* fmul dword ptr [ecx + 8] */
    fp_push(MEMF(edx + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 4)); /* fmul dword ptr [ecx + 4] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(ecx)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx)); /* fmul dword ptr [edx] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(0x648CF8)); /* fld float */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_push(MEMF(ebp + 0x1C)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_004C6F1F; /* jnp: not parity */

loc_004C6EB8: ;
    fp_push(MEMF(esi + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 8)); /* fmul dword ptr [ecx + 8] */
    fp_push(MEMF(esi + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 4)); /* fmul dword ptr [ecx + 4] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(ecx)); /* fld float */
    ecx = MEM32(ebp + 0x24);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi)); /* fmul dword ptr [esi] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = fabs(fp_top()); /* fabs */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 4) & 7]); /* fmul st(4) */
    fp_push(MEMF(ebp + -4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + -4)); /* fmul dword ptr [ebp - 4] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp st(1) */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_004C6EFC; /* jp: parity */

loc_004C6EEC: ;
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() / fp_st1()); /* fdiv st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x6490B0)); /* fmul dword ptr [0x6490b0] */
    MEMF(ecx) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    goto loc_004C6F0C;

loc_004C6EFC: ;
    fp_top() = RECOMP_FP_PC(fp_top() / fp_st1()); /* fdiv st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x6490B0)); /* fmul dword ptr [0x6490b0] */
    fp_top() = RECOMP_FP_PC(MEMF(0x648E3C) - fp_top()); /* fsubr dword ptr [0x648e3c] */
    MEMF(ecx) = (float)fp_top(); fp_pop(); /* fstp */

loc_004C6F0C: ;
    fp_pop(); /* fstp st(0) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp st(1) */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_004C6F26; /* jp: parity */

loc_004C6F17: ;
    fp_push(MEMF(ecx)); /* fld float */
    fp_top() = -fp_top(); /* fchs */
    MEMF(ecx) = (float)fp_top(); fp_pop(); /* fstp */
    goto loc_004C6F26;

loc_004C6F1F: ;
    eax = MEM32(ebp + 0x24);
    fp_push(0.0); /* fldz */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */

loc_004C6F26: ;
    ecx = MEM32(ebp + 0x20);
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_push(MEMF(ebp + 0x1C)); /* fld float */
    POP32(esp, esi);
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_004C6F6B; /* jnp: not parity */

loc_004C6F38: ;
    fp_push(MEMF(ebp + -4)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = fabs(fp_top()); /* fabs */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp st(1) */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_004C6F5A; /* jne: not equal / not zero */

loc_004C6F4C: ;
    fp_top() = RECOMP_FP_PC(fp_top() / fp_st1()); /* fdiv st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x6490B0)); /* fmul dword ptr [0x6490b0] */
    MEMF(ecx) = (float)fp_top(); fp_pop(); /* fstp */

loc_004C6F56: ;
    fp_pop(); /* fstp st(0) */
    goto loc_004C6F6F;

loc_004C6F5A: ;
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_004C6F9C; /* jp: parity */

loc_004C6F67: ;
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */

loc_004C6F6B: ;
    fp_push(0.0); /* fldz */
    MEMF(ecx) = (float)fp_top(); fp_pop(); /* fstp */

loc_004C6F6F: ;
    fp_push(MEMF(ebp + -4)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp st(1) */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_004C6F85; /* jp: parity */

loc_004C6F7B: ;
    fp_push(MEMF(0x648E6C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ecx)); /* fsub dword ptr [ecx] */
    MEMF(ecx) = (float)fp_top(); fp_pop(); /* fstp */

loc_004C6F85: ;
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fcompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    fp_pop(); /* fstp st(0) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_004C6F98; /* jp: parity */

loc_004C6F92: ;
    fp_push(MEMF(ecx)); /* fld float */
    fp_top() = -fp_top(); /* fchs */
    MEMF(ecx) = (float)fp_top(); fp_pop(); /* fstp */

loc_004C6F98: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 36; return; /* ret 32 */

loc_004C6F9C: ;
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() / fp_st1()); /* fdiv st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x6490B0)); /* fmul dword ptr [0x6490b0] */
    fp_top() = RECOMP_FP_PC(MEMF(0x648E3C) - fp_top()); /* fsubr dword ptr [0x648e3c] */
    MEMF(ecx) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    goto loc_004C6F56;

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_004C6FB2
 * Original: 0x004C6FB2 - 0x004C7048 (150 bytes, 53 insns)
 * Category: game_audio
 * CC: cdecl, 3 params, returns float_sse
 * Frame: standard_frame
 */
void sub_004C6FB2(void)
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

loc_004C6FB2: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    fp_push(MEMF(esi)); /* fld float */
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0xC);
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(edi)); /* fsub dword ptr [edi] */
    eax = ebp + -12;
    PUSH32(esp, eax);
    MEMF(ebp + -12) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(edi + 4)); /* fsub dword ptr [edi + 4] */
    MEMF(ebp + -8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(edi + 8)); /* fsub dword ptr [edi + 8] */
    MEMF(ebp + -4) = (float)fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C6FE2u); RECOMP_ABI_CALL(0x004C6D22u, sub_004C6D22); /* call 0x004C6D22 */

loc_004C6FE2: ;
    MEMF(ebp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    eax = ebp + -12;
    fp_push(MEMF(esi)); /* fld float */
    PUSH32(esp, eax);
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(edi)); /* fadd dword ptr [edi] */
    MEMF(ebp + -12) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(edi + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 4)); /* fadd dword ptr [esi + 4] */
    MEMF(ebp + -8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(edi + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 8)); /* fadd dword ptr [esi + 8] */
    MEMF(ebp + -4) = (float)fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C7007u); RECOMP_ABI_CALL(0x004C6D22u, sub_004C6D22); /* call 0x004C6D22 */

loc_004C7007: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(ebp + 8)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [ebp + 8] */
    POP32(esp, edi);
    POP32(esp, esi);
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    eax = MEM32(ebp + 0x10);
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_004C7029; /* jp: parity */

loc_004C7016: ;
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(ebp + 8)); /* fdiv dword ptr [ebp + 8] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x6490B0)); /* fmul dword ptr [0x6490b0] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x648D18)); /* fmul dword ptr [0x648d18] */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    goto loc_004C7044;

loc_004C7029: ;
    fp_push(MEMF(ebp + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / fp_st1()); /* fdiv st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x6490B0)); /* fmul dword ptr [0x6490b0] */
    fp_top() = RECOMP_FP_PC(MEMF(0x648E3C) - fp_top()); /* fsubr dword ptr [0x648e3c] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x648D18)); /* fmul dword ptr [0x648d18] */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */

loc_004C7044: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_004C7048
 * Original: 0x004C7048 - 0x004C7093 (75 bytes, 30 insns)
 * CC: cdecl, 5 params, returns float_sse
 * Frame: standard_frame
 */
void sub_004C7048(void)
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

loc_004C7048: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 1 (32-bit) */
    eax = MEM32(ebp + 0x10);
    fp_push(MEMF(eax + 8)); /* fld float */
    if (CMP_NE(_fa, _fb)) goto loc_004C706B; /* jne: not equal / not zero */

loc_004C7057: ;
    ecx = MEM32(ebp + 0x14);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 8)); /* fmul dword ptr [ecx + 8] */
    fp_push(MEMF(eax + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 4)); /* fmul dword ptr [ecx + 4] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(eax)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx)); /* fmul dword ptr [ecx] */
    goto loc_004C7088;

loc_004C706B: ;
    ecx = MEM32(ebp + 0xC);
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ecx + 8)); /* fsub dword ptr [ecx + 8] */
    edx = MEM32(ebp + 0x14);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx + 8)); /* fmul dword ptr [edx + 8] */
    fp_push(MEMF(eax + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ecx + 4)); /* fsub dword ptr [ecx + 4] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx + 4)); /* fmul dword ptr [edx + 4] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(eax)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ecx)); /* fsub dword ptr [ecx] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx)); /* fmul dword ptr [edx] */

loc_004C7088: ;
    eax = MEM32(ebp + 0x18);
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    POP32(esp, ebp);
    esp += 24; return; /* ret 20 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_004C7093
 * Original: 0x004C7093 - 0x004C71A4 (273 bytes, 99 insns)
 * Category: game_audio
 * CC: cdecl, 8 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004C7093(void)
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

loc_004C7093: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    fp_push(MEMF(ebp + 0x1C)); /* fld float */
    PUSH32(esp, esi);
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(ebp + 0xC)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [ebp + 0xc] */
    PUSH32(esp, edi);
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_004C7198; /* jne: not equal / not zero */

loc_004C70AB: ;
    _fa = (uint32_t)(MEM32(ebp + 0x20)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x20), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C70CC; /* je: equal / zero */

loc_004C70B1: ;
    fp_push(MEMF(ebp + 0x1C)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(ebp + 0x10)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [ebp + 0x10] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_004C70CC; /* jne: not equal / not zero */

loc_004C70BE: ;
    eax = MEM32(ebp + 0x24);
    MEM32(eax) = 0xFFFFD8F0u;
    goto loc_004C719E;

loc_004C70CC: ;
    fp_push(MEMF(ebp + 0x1C)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(ebp + 0x10)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [ebp + 0x10] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_004C70DF; /* jne: not equal / not zero */

loc_004C70D9: ;
    eax = MEM32(ebp + 0x10);
    MEM32(ebp + 0x1C) = eax;

loc_004C70DF: ;
    edi = MEM32(ebp + 0x14);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C717E; /* je: equal / zero */

loc_004C70EA: ;
    esi = MEM32(ebp + 0x18);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004C717E; /* je: equal / zero */

loc_004C70F5: ;
    fp_push(MEMF(ebp + 0x1C)); /* fld float */
    MEM32(ebp + 0x1C) = esi;
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ebp + 0xC)); /* fsub dword ptr [ebp + 0xc] */
    fp_push(MEMF(ebp + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ebp + 0xC)); /* fsub dword ptr [ebp + 0xc] */
    fp_push((double)SMEM32(ebp + 0x1C)); /* fild */
    if (CMP_GE(_fas, _fbs)) goto loc_004C710F; /* jge: greater or equal (signed >=) */

loc_004C7109: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x648CE8)); /* fadd dword ptr [0x648ce8] */

loc_004C710F: ;
    fp_st1() = RECOMP_FP_PC(fp_st1() / fp_top()); fp_pop(); /* fdivp st(1) */
    fp_push(1.0); /* fld1 */
    fp_top() = RECOMP_FP_PC(fp_top() / fp_st1()); /* fdiv st(1) */
    MEMF(ebp + 0x1C) = (float)fp_top(); /* fst */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 2) & 7]); /* fmul st(2) */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C711Fu); RECOMP_ABI_CALL(0x00471288u, sub_00471288); /* call 0x00471288 */

loc_004C711F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_004C7126; /* jb: below (unsigned <) */

loc_004C7123: ;
    eax = esi + -1;

loc_004C7126: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004C7138; /* jne: not equal / not zero */

loc_004C712A: ;
    eax = MEM32(edi);
    fp_pop(); /* fstp st(0) */
    fp_push(1.0); /* fld1 */
    MEM32(ebp + -4) = eax;
    MEMF(ebp + -8) = (float)fp_top(); fp_pop(); /* fstp */
    goto loc_004C715C;

loc_004C7138: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    ecx = edi + eax * 4;
    edx = MEM32(ecx + -4);
    ecx = MEM32(ecx);
    MEM32(ebp + 0x10) = eax;
    fp_push((double)SMEM32(ebp + 0x10)); /* fild */
    MEM32(ebp + -8) = edx;
    MEM32(ebp + -4) = ecx;
    if (CMP_GE(_fas, _fbs)) goto loc_004C7156; /* jge: greater or equal (signed >=) */

loc_004C7150: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x648CE8)); /* fadd dword ptr [0x648ce8] */

loc_004C7156: ;
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    g_fp_stack[(g_fp_top + 2) & 7] = RECOMP_FP_PC(g_fp_stack[(g_fp_top + 2) & 7] - fp_top()); fp_pop(); /* fsubp st(2) */
    fp_pop(); /* fstp st(0) */

loc_004C715C: ;
    fp_push(MEMF(ebp + 0x1C)); /* fld float */
    PUSH32(esp, ecx);
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    fp_push(MEMF(ebp + -4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ebp + -8)); /* fsub dword ptr [ebp - 8] */
    fp_st1() = RECOMP_FP_PC(fp_st1() * fp_top()); fp_pop(); /* fmulp st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ebp + -8)); /* fadd dword ptr [ebp - 8] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C7177u); RECOMP_ABI_CALL(0x004C3774u, sub_004C3774); /* call 0x004C3774 */

loc_004C7177: ;
    ecx = MEM32(ebp + 0x24);
    MEM32(ecx) = eax;
    goto loc_004C719E;

loc_004C717E: ;
    fp_push(MEMF(ebp + 0x1C)); /* fld float */
    PUSH32(esp, ecx);
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(ebp + 0xC)); /* fdiv dword ptr [ebp + 0xc] */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x648D14)); /* fsub dword ptr [0x648d14] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + 8)); /* fmul dword ptr [ebp + 8] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004C7196u); RECOMP_ABI_CALL(0x004C6D49u, sub_004C6D49); /* call 0x004C6D49 */

loc_004C7196: ;
    goto loc_004C7177;

loc_004C7198: ;
    eax = MEM32(ebp + 0x24);
    MEM32(eax) = MEM32(eax) & 0;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_004C719E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 36; return; /* ret 32 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

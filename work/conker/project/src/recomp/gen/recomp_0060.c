/**
 * Conker - Recompiled code chunk 60
 * Functions: 250 (0x0047DF41 - 0x0047FC9F)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_0047DF41
 * Original: 0x0047DF41 - 0x0047E163 (546 bytes, 178 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0047DF41(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_0047DF41: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x24));
    esp = esp - 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 0xC);
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(ecx, MEM16(ebx + 0xA));
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    MEM32(ebp + -20) = eax;
    MEM32(ebp + -36) = eax;
    MEM32(ebp + -32) = eax;
    MEM32(ebp + -28) = eax;
    SET_LO16(eax, MEM16(esi + 0xA));
    PUSH32(esp, edi);
    edi = ecx;
    edx = 0x7FFF;
    _cf = 0; /* logical op clears CF */
    ecx = ecx & edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = 0; /* logical op clears CF */
    edi = edi ^ eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _cf = 0; /* logical op clears CF */
    eax = eax & edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = 0; /* logical op clears CF */
    edi = edi & 0x8000;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0x7FFF) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0x7FFF (16-bit) */
    _cf = (int)(_fa < _fb);
    edx = ecx + eax;
    MEM32(ebp + 8) = edx;
    if (CMP_AE(_fa, _fb)) goto loc_0047E143; /* jae: above or equal (unsigned >=) */

loc_0047DF8B: ;
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(0x7FFF) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), 0x7FFF (16-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_AE(_fa, _fb)) goto loc_0047E143; /* jae: above or equal (unsigned >=) */

loc_0047DF96: ;
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu; _fb = (uint32_t)(0xBFFD) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edx), 0xBFFD (16-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_A(_fa, _fb)) goto loc_0047E143; /* ja: above (unsigned >) */

loc_0047DFA1: ;
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu; _fb = (uint32_t)(0x3FBF) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edx), 0x3FBF (16-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_A(_fa, _fb)) goto loc_0047DFAC; /* ja: above (unsigned >) */

loc_0047DFA8: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_0047DFE6;

loc_0047DFAC: ;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0 (16-bit) */
    _cf = 0; /* nothing borrows from zero */
    edx = 0x7FFFFFFF;
    if (CMP_NE(_fa, _fb)) goto loc_0047DFCE; /* jne: not equal / not zero */

loc_0047DFB6: ;
    MEM32(ebp + 8) = MEM32(ebp + 8) + 1;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(esi + 8), edx (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_NZ(_fa, _fb)) goto loc_0047DFD0; /* jne: not equal / not zero */

loc_0047DFC0: ;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 4), eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0047DFD0; /* jne: not equal / not zero */

loc_0047DFC5: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0047DFD0; /* jne: not equal / not zero */

loc_0047DFC9: ;
    goto loc_0047E13D;

loc_0047DFCE: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0047DFD0: ;
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(LO16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), LO16(eax) (16-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0047DFF3; /* jne: not equal / not zero */

loc_0047DFD5: ;
    MEM32(ebp + 8) = MEM32(ebp + 8) + 1;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM32(ebx + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(ebx + 8), edx (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_NZ(_fa, _fb)) goto loc_0047DFF3; /* jne: not equal / not zero */

loc_0047DFDD: ;
    _fa = (uint32_t)(MEM32(ebx + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 4), eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0047DFF3; /* jne: not equal / not zero */

loc_0047DFE2: ;
    _fa = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx), eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0047DFF3; /* jne: not equal / not zero */

loc_0047DFE6: ;
    MEM32(esi + 8) = eax;
    MEM32(esi + 4) = eax;
    MEM32(esi) = eax;
    goto loc_0047E15E;

loc_0047DFF3: ;
    MEM32(ebp + -16) = eax;
    eax = ebp + -32;
    MEM32(ebp + -4) = eax;
    MEM32(ebp + 0xC) = 5;

loc_0047E003: ;
    eax = MEM32(ebp + -16);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(eax)) >> 32) & 1);
    eax = eax + eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_LE(_fas, _fbs)) goto loc_0047E057; /* jle: less or equal (signed <=) */

loc_0047E00E: ;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(esi)) >> 32) & 1);
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -8) = eax;
    eax = MEM32(ebp + 0xC);
    ecx = ebx + 8;
    MEM32(ebp + -12) = ecx;
    MEM32(ebp + -24) = eax;

loc_0047E01F: ;
    eax = MEM32(ebp + -12);
    ecx = MEM32(ebp + -8);
    ecx = ZX16(MEM16(ecx));
    eax = ZX16(MEM16(eax));
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx);
    ecx = MEM32(ebp + -4);
    _fb = (uint32_t)(0xFFFFFFFCu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(0xFFFFFFFCu)) >> 32) & 1);
    ecx = ecx + 0xFFFFFFFCu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ecx));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0047E03Du); RECOMP_ABI_CALL(0x0047DD99u, sub_0047DD99); /* call 0x0047DD99 */

loc_0047E03D: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0047E04A; /* je: equal / zero */

loc_0047E044: ;
    eax = MEM32(ebp + -4);
    MEM16(eax) = MEM16(eax) + 1;
    _fa = (uint32_t)(MEM16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */

loc_0047E04A: ;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM32(ebp + -8)) + (uint64_t)(2)) >> 32) & 1);
    MEM32(ebp + -8) = MEM32(ebp + -8) + 2;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(MEM32(ebp + -12)) < (uint32_t)(2));
    MEM32(ebp + -12) = MEM32(ebp + -12) - 2;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(ebp + -24) = MEM32(ebp + -24) - 1;
    _fa = (uint32_t)(MEM32(ebp + -24)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0047E01F; /* jne: not equal / not zero */

loc_0047E057: ;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM32(ebp + -4)) + (uint64_t)(2)) >> 32) & 1);
    MEM32(ebp + -4) = MEM32(ebp + -4) + 2;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -16) = MEM32(ebp + -16) + 1;
    _fa = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) - 1;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_G(_fas, _fbs)) goto loc_0047E003; /* jg: greater (signed >) */

loc_0047E067: ;
    _fb = (uint32_t)(0xC002) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM32(ebp + 8)) + (uint64_t)(0xC002)) >> 32) & 1);
    MEM32(ebp + 8) = MEM32(ebp + 8) + 0xC002;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM16(ebp + 8)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ebp + 8), 0 (16-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_LE(_fas, _fbs)) goto loc_0047E09A; /* jle: less or equal (signed <=) */

loc_0047E075: ;
    _fa = (uint32_t)(MEM8(ebp + -25)) & 0xFFu; _fb = (uint32_t)(0x80) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + -25), 0x80 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_NZ(_fa, _fb)) goto loc_0047E093; /* jne: not equal / not zero */

loc_0047E07B: ;
    eax = ebp + -36;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0047E084u); RECOMP_ABI_CALL(0x0047DE18u, sub_0047DE18); /* call 0x0047DE18 */

loc_0047E084: ;
    _fb = (uint32_t)(0xFFFF) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM32(ebp + 8)) + (uint64_t)(0xFFFF)) >> 32) & 1);
    MEM32(ebp + 8) = MEM32(ebp + 8) + 0xFFFF;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM16(ebp + 8)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ebp + 8), 0 (16-bit) */
    _cf = 0; /* nothing borrows from zero */
    POP32(esp, ecx);
    if (CMP_G(_fas, _fbs)) goto loc_0047E075; /* jg: greater (signed >) */

loc_0047E093: ;
    _fa = (uint32_t)(MEM16(ebp + 8)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ebp + 8), 0 (16-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_G(_fas, _fbs)) goto loc_0047E0D3; /* jg: greater (signed >) */

loc_0047E09A: ;
    _fb = (uint32_t)(0xFFFF) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM32(ebp + 8)) + (uint64_t)(0xFFFF)) >> 32) & 1);
    MEM32(ebp + 8) = MEM32(ebp + 8) + 0xFFFF;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM16(ebp + 8)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ebp + 8), 0 (16-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_GE(_fas, _fbs)) goto loc_0047E0D3; /* jge: greater or equal (signed >=) */

loc_0047E0A8: ;
    eax = MEM32(ebp + 8);
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    ebx = ZX16(LO16(eax));
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM32(ebp + 8)) + (uint64_t)(ebx)) >> 32) & 1);
    MEM32(ebp + 8) = MEM32(ebp + 8) + ebx;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0047E0B3: ;
    _fa = (uint32_t)(MEM8(ebp + -36)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + -36), 1 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_0047E0BC; /* je: equal / zero */

loc_0047E0B9: ;
    MEM32(ebp + -20) = MEM32(ebp + -20) + 1;
    _fa = (uint32_t)(MEM32(ebp + -20)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0047E0BC: ;
    eax = ebp + -36;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0047E0C5u); RECOMP_ABI_CALL(0x0047DE46u, sub_0047DE46); /* call 0x0047DE46 */

loc_0047E0C5: ;
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    POP32(esp, ecx);
    if ((_fa != 0)) goto loc_0047E0B3; /* jne: not equal / not zero */

loc_0047E0C9: ;
    _fa = (uint32_t)(MEM32(ebp + -20)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -20), 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0047E0D3; /* je: equal / zero */

loc_0047E0CF: ;
    _cf = 0; /* logical op clears CF */
    MEM8(ebp + -36) = MEM8(ebp + -36) | 1;
    _fa = (uint32_t)(MEM8(ebp + -36)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */

loc_0047E0D3: ;
    _fa = (uint32_t)(MEM16(ebp + -36)) & 0xFFFFu; _fb = (uint32_t)(0x8000) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ebp + -36), 0x8000 (16-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_A(_fa, _fb)) goto loc_0047E0EA; /* ja: above (unsigned >) */

loc_0047E0DB: ;
    eax = MEM32(ebp + -36);
    _cf = 0; /* logical op clears CF */
    eax = eax & 0x1FFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x18000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x18000 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0047E11F; /* jne: not equal / not zero */

loc_0047E0EA: ;
    _fa = (uint32_t)(MEM32(ebp + -34)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -34), 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0047E11C; /* jne: not equal / not zero */

loc_0047E0F0: ;
    _cf = 0; /* logical op clears CF */
    MEM32(ebp + -34) = MEM32(ebp + -34) & 0;
    _fa = (uint32_t)(MEM32(ebp + -34)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(MEM32(ebp + -30)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -30), 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0047E117; /* jne: not equal / not zero */

loc_0047E0FA: ;
    _cf = 0; /* logical op clears CF */
    MEM32(ebp + -30) = MEM32(ebp + -30) & 0;
    _fa = (uint32_t)(MEM32(ebp + -30)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(MEM16(ebp + -26)) & 0xFFFFu; _fb = (uint32_t)(0xFFFF) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ebp + -26), 0xFFFF (16-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0047E111; /* jne: not equal / not zero */

loc_0047E106: ;
    MEM32(ebp + 8) = MEM32(ebp + 8) + 1;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM16(ebp + -26) = 0x8000;
    goto loc_0047E11F;

loc_0047E111: ;
    MEM16(ebp + -26) = MEM16(ebp + -26) + 1;
    _fa = (uint32_t)(MEM16(ebp + -26)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */
    goto loc_0047E11F;

loc_0047E117: ;
    MEM32(ebp + -30) = MEM32(ebp + -30) + 1;
    _fa = (uint32_t)(MEM32(ebp + -30)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_0047E11F;

loc_0047E11C: ;
    MEM32(ebp + -34) = MEM32(ebp + -34) + 1;
    _fa = (uint32_t)(MEM32(ebp + -34)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0047E11F: ;
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0x7FFF) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0x7FFF (16-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_AE(_fa, _fb)) goto loc_0047E143; /* jae: above or equal (unsigned >=) */

loc_0047E128: ;
    SET_LO16(ecx, MEM16(ebp + -34));
    MEM16(esi) = LO16(ecx);
    ecx = MEM32(ebp + -32);
    MEM32(esi + 2) = ecx;
    ecx = MEM32(ebp + -28);
    MEM32(esi + 6) = ecx;
    _cf = 0; /* logical op clears CF */
    eax = eax | edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_0047E13D: ;
    MEM16(esi + 0xA) = LO16(eax);
    goto loc_0047E15E;

loc_0047E143: ;
    _cf = (int)((LO16(edi)) != 0);
    SET_LO16(edi, (uint32_t)(0u - (uint32_t)(LO16(edi))));
    _fa = (uint32_t)(LO16(edi)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* neg result */
    edi = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    MEM32(esi + 4) = MEM32(esi + 4) & 0;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = 0; /* logical op clears CF */
    edi = edi & 0x80000000u;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x7FFF8000) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(0x7FFF8000)) >> 32) & 1);
    edi = edi + 0x7FFF8000;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = 0; /* logical op clears CF */
    MEM32(esi) = MEM32(esi) & 0;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi + 8) = edi;

loc_0047E15E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_0047E163
 * Original: 0x0047E163 - 0x0047E1D9 (118 bytes, 50 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0047E163(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0047E163: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = 0x656340;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(0x60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - 0x60;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0047E1D6; /* je: equal / zero */

loc_0047E179: ;
    if (CMP_GE(_fas, _fbs)) goto loc_0047E186; /* jge: greater or equal (signed >=) */

loc_0047E17B: ;
    MEM32(ebp + 0xC) = (uint32_t)(0u - (uint32_t)(MEM32(ebp + 0xC)));
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    ebx = 0x6564A0;
    _fb = (uint32_t)(0x60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - 0x60;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_0047E186: ;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0047E191; /* jne: not equal / not zero */

loc_0047E18B: ;
    eax = MEM32(ebp + 8);
    MEM16(eax) = LO16(ecx);

loc_0047E191: ;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0047E1D6; /* je: equal / zero */

loc_0047E196: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);

loc_0047E198: ;
    eax = MEM32(ebp + 0xC);
    MEM32(ebp + 0xC) = (uint32_t)(((int32_t)(int32_t)(MEM32(ebp + 0xC))) >> ((3) & 31u));
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    eax = eax & 7;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x54) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x54;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0047E1CF; /* je: equal / zero */

loc_0047E1A9: ;
    eax = eax + eax * 2;
    esi = ebx + eax * 4;
    _fa = (uint32_t)(MEM16(esi)) & 0xFFFFu; _fb = (uint32_t)(0x8000) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi), 0x8000 (16-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0047E1C2; /* jb: below (unsigned <) */

loc_0047E1B6: ;
    edi = ebp + -12;
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(ebp + -10) = MEM32(ebp + -10) - 1;
    _fa = (uint32_t)(MEM32(ebp + -10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    esi = ebp + -12;

loc_0047E1C2: ;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0047E1CBu); RECOMP_ABI_CALL(0x0047DF41u, sub_0047DF41); /* call 0x0047DF41 */

loc_0047E1CB: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0047E1CF: ;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0047E198; /* jne: not equal / not zero */

loc_0047E1D4: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_0047E1D6: ;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_0047E1D9
 * Original: 0x0047E1D9 - 0x0047E2C5 (236 bytes, 81 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047E1D9(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_0047E1D9: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x83) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x83 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_0047E2BE; /* je: equal / zero */

loc_0047E1E9: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x40 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_NZ(_fa, _fb)) goto loc_0047E2BE; /* jne: not equal / not zero */

loc_0047E1F1: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 2 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_0047E200; /* je: equal / zero */

loc_0047E1F5: ;
    _cf = 0; /* logical op clears CF */
    eax = eax | 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esi + 0xC) = eax;
    goto loc_0047E2BE;

loc_0047E200: ;
    _cf = 0; /* logical op clears CF */
    eax = eax | 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0x10C) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* test LO16(eax), 0x10C (16-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(esi + 0xC) = eax;
    if (TEST_NZ(_fa, _fb)) goto loc_0047E215; /* jne: not equal / not zero */

loc_0047E20C: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0047E212u); RECOMP_ABI_CALL(0x004796E1u, sub_004796E1); /* call 0x004796E1 */

loc_0047E212: ;
    POP32(esp, ecx);
    goto loc_0047E21A;

loc_0047E215: ;
    eax = MEM32(esi + 8);
    MEM32(esi) = eax;

loc_0047E21A: ;
    PUSH32(esp, MEM32(esi + 0x18));
    PUSH32(esp, MEM32(esi + 8));
    PUSH32(esp, MEM32(esi + 0x10));
    PUSH32(esp, 0x0047E228u); RECOMP_ABI_CALL(0x0047BF33u, sub_0047BF33); /* call 0x0047BF33 */

loc_0047E228: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(esi + 4) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0047E2AD; /* je: equal / zero */

loc_0047E232: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0047E2AD; /* je: equal / zero */

loc_0047E237: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0047E2AD; /* je: equal / zero */

loc_0047E23C: ;
    edx = MEM32(esi + 0xC);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0x82) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 0x82 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_NZ(_fa, _fb)) goto loc_0047E27E; /* jne: not equal / not zero */

loc_0047E244: ;
    ecx = MEM32(esi + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_0047E264; /* je: equal / zero */

loc_0047E24D: ;
    edi = ecx;
    if (((5) & 31u)) _cf = (int)(((uint32_t)((int32_t)(int32_t)(edi)) >> ((((5) & 31u)) - 1)) & 1);
    edi = (uint32_t)(((int32_t)(int32_t)(edi)) >> ((5) & 31u));
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    edi = MEM32(edi * 4 + 0x881360);
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 0x1F;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx + ecx * 4;
    edi = edi + ecx * 8;
    goto loc_0047E269;

loc_0047E264: ;
    edi = 0x655E00;

loc_0047E269: ;
    SET_LO8(ecx, MEM8(edi + 4));
    _cf = 0; /* logical op clears CF */
    SET_LO8(ecx, LO8(ecx) & 0x82);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x82) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x82 (8-bit) */
    _cf = (int)(_fa < _fb);
    POP32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_0047E27E; /* jne: not equal / not zero */

loc_0047E275: ;
    _cf = 0; /* logical op clears CF */
    edx = edx | 0x2000;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esi + 0xC) = edx;

loc_0047E27E: ;
    _fa = (uint32_t)(MEM32(esi + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x200) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x18), 0x200 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0047E29B; /* jne: not equal / not zero */

loc_0047E287: ;
    ecx = MEM32(esi + 0xC);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 8 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_0047E29B; /* je: equal / zero */

loc_0047E28F: ;
    _fa = (uint32_t)(HI8(ecx)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(ecx), 4 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_NZ(_fa, _fb)) goto loc_0047E29B; /* jne: not equal / not zero */

loc_0047E294: ;
    MEM32(esi + 0x18) = 0x1000;

loc_0047E29B: ;
    ecx = MEM32(esi);
    _fb = (uint32_t)(0xFFFFFFFEu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xFFFFFFFEu)) >> 32) & 1);
    eax = eax + 0xFFFFFFFEu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 4) = eax;
    eax = ZX16(MEM16(ecx));
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(2)) >> 32) & 1);
    ecx = ecx + 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi) = ecx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0047E2AD: ;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    eax = eax & 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x10)) >> 32) & 1);
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = 0; /* logical op clears CF */
    MEM32(esi + 0xC) = MEM32(esi + 0xC) | eax;
    _fa = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _cf = 0; /* logical op clears CF */
    MEM32(esi + 4) = MEM32(esi + 4) & 0;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_0047E2BE: ;
    eax = 0xFFFF;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0047E2C5
 * Original: 0x0047E2C5 - 0x0047E53C (631 bytes, 223 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0047E2C5(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0047E2C5: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 0x10);
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 0x1C);
    PUSH32(esp, esi);
    ecx = eax;
    esi = 0x7FFF;
    ecx = ecx & 0x8000;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax & esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), 0 (16-bit) */
    PUSH32(esp, edi);
    MEM8(ebp + -32) = 0xCC;
    MEM8(ebp + -31) = 0xCC;
    MEM8(ebp + -30) = 0xCC;
    MEM8(ebp + -29) = 0xCC;
    MEM8(ebp + -28) = 0xCC;
    MEM8(ebp + -27) = 0xCC;
    MEM8(ebp + -26) = 0xCC;
    MEM8(ebp + -25) = 0xCC;
    MEM8(ebp + -24) = 0xCC;
    MEM8(ebp + -23) = 0xCC;
    MEM8(ebp + -22) = 0xFB;
    MEM8(ebp + -21) = 0x3F;
    MEM32(ebp + -4) = 1;
    edx = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0047E327; /* je: equal / zero */

loc_0047E321: ;
    MEM8(ebx + 2) = 0x2D;
    goto loc_0047E32B;

loc_0047E327: ;
    MEM8(ebx + 2) = 0x20;

loc_0047E32B: ;
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edx), 0 (16-bit) */
    edi = MEM32(ebp + 0xC);
    if (CMP_NE(_fa, _fb)) goto loc_0047E340; /* jne: not equal / not zero */

loc_0047E333: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0047E340; /* jne: not equal / not zero */

loc_0047E337: ;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0047E42C; /* je: equal / zero */

loc_0047E340: ;
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu; _fb = (uint32_t)(LO16(esi)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edx), LO16(esi) (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0047E3B6; /* jne: not equal / not zero */

loc_0047E345: ;
    eax = 0x80000000u;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    MEM16(ebx) = 1;
    if (CMP_NE(_fa, _fb)) goto loc_0047E359; /* jne: not equal / not zero */

loc_0047E353: ;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0047E368; /* je: equal / zero */

loc_0047E359: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, 0x40000000 (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0047E368; /* jne: not equal / not zero */

loc_0047E361: ;
    esi = 0x587A74;
    goto loc_0047E3A9;

loc_0047E368: ;
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), 0 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0047E382; /* je: equal / zero */

loc_0047E36D: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC0000000u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0xC0000000u (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0047E382; /* jne: not equal / not zero */

loc_0047E375: ;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0047E3A4; /* jne: not equal / not zero */

loc_0047E37B: ;
    esi = 0x587A6C;
    goto loc_0047E391;

loc_0047E382: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0047E3A4; /* jne: not equal / not zero */

loc_0047E386: ;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0047E3A4; /* jne: not equal / not zero */

loc_0047E38C: ;
    esi = 0x587A64;

loc_0047E391: ;
    edi = ebx + 4;
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM16(edi) = MEM16(esi); esi += RECOMP_DF_STEP(2); edi += RECOMP_DF_STEP(2); /* movsw */
    MEM8(ebx + 3) = 5;

loc_0047E39B: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    goto loc_0047E50E;

loc_0047E3A4: ;
    esi = 0x587A5C;

loc_0047E3A9: ;
    edi = ebx + 4;
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM16(edi) = MEM16(esi); esi += RECOMP_DF_STEP(2); edi += RECOMP_DF_STEP(2); /* movsw */
    MEM8(edi) = MEM8(esi); esi += RECOMP_DF_STEP(1); edi += RECOMP_DF_STEP(1); /* movsb */
    MEM8(ebx + 3) = 6;
    goto loc_0047E39B;

loc_0047E3B6: ;
    eax = ZX16(LO16(edx));
    esi = eax;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x4D10);
    MEM16(ebp + -20) = MEM16(ebp + -20) & 0;
    _fa = (uint32_t)(MEM16(ebp + -20)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    ecx = edi;
    ecx = ecx >> 0x18;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esi = esi >> 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = esi + ecx * 2;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x4D);
    esi = ecx + eax + -323162868;
    eax = MEM32(ebp + 8);
    MEM32(ebp + -18) = eax;
    esi = (uint32_t)(((int32_t)(int32_t)(esi)) >> ((0x10) & 31u));
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    eax = SX16(LO16(esi));
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    eax = ebp + -20;
    PUSH32(esp, eax);
    MEM16(ebp + -10) = LO16(edx);
    MEM32(ebp + -14) = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0047E3FCu); RECOMP_ABI_CALL(0x0047E163u, sub_0047E163); /* call 0x0047E163 */

loc_0047E3FC: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM16(ebp + -10)) & 0xFFFFu; _fb = (uint32_t)(0x3FFF) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ebp + -10), 0x3FFF (16-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0047E417; /* jb: below (unsigned <) */

loc_0047E407: ;
    eax = ebp + -32;
    PUSH32(esp, eax);
    eax = ebp + -20;
    PUSH32(esp, eax);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0047E415u); RECOMP_ABI_CALL(0x0047DF41u, sub_0047DF41); /* call 0x0047DF41 */

loc_0047E415: ;
    POP32(esp, ecx);
    POP32(esp, ecx);

loc_0047E417: ;
    _fa = (uint32_t)(MEM8(ebp + 0x18)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + 0x18), 1 (8-bit) */
    edi = MEM32(ebp + 0x14);
    MEM16(ebx) = LO16(esi);
    if (TEST_Z(_fa, _fb)) goto loc_0047E435; /* je: equal / zero */

loc_0047E423: ;
    eax = SX16(LO16(esi));
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0047E435; /* jg: greater (signed >) */

loc_0047E42C: ;
    MEM8(ebx + 4) = 0x30;
    goto loc_0047E527;

loc_0047E435: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x15) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x15 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0047E43D; /* jle: less or equal (signed <=) */

loc_0047E43A: ;
    PUSH32(esp, 0x15);
    POP32(esp, edi);

loc_0047E43D: ;
    esi = ZX16(MEM16(ebp + -10));
    _fb = (uint32_t)(0x3FFE) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - 0x3FFE;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM16(ebp + -10) = MEM16(ebp + -10) & 0;
    _fa = (uint32_t)(MEM16(ebp + -10)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    MEM32(ebp + 0x10) = 8;

loc_0047E453: ;
    eax = ebp + -20;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0047E45Cu); RECOMP_ABI_CALL(0x0047DE18u, sub_0047DE18); /* call 0x0047DE18 */

loc_0047E45C: ;
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) - 1;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    POP32(esp, ecx);
    if ((_fa != 0)) goto loc_0047E453; /* jne: not equal / not zero */

loc_0047E462: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0047E47D; /* jge: greater or equal (signed >=) */

loc_0047E466: ;
    esi = (uint32_t)(0u - (uint32_t)(esi));
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    esi = esi & 0xFF;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if ((_fas <= 0)) goto loc_0047E47D; /* jle: less or equal (signed <=) */

loc_0047E470: ;
    eax = ebp + -20;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0047E479u); RECOMP_ABI_CALL(0x0047DE46u, sub_0047DE46); /* call 0x0047DE46 */

loc_0047E479: ;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    POP32(esp, ecx);
    if ((_fa != 0)) goto loc_0047E470; /* jne: not equal / not zero */

loc_0047E47D: ;
    ecx = edi + 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    eax = ebx + 4;
    MEM32(ebp + 0x10) = eax;
    if (CMP_LE(_fas, _fbs)) goto loc_0047E4DA; /* jle: less or equal (signed <=) */

loc_0047E48A: ;
    MEM32(ebp + -8) = ecx;

loc_0047E48D: ;
    esi = ebp + -20;
    edi = ebp + -44;
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    eax = ebp + -20;
    PUSH32(esp, eax);
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0047E49Fu); RECOMP_ABI_CALL(0x0047DE18u, sub_0047DE18); /* call 0x0047DE18 */

loc_0047E49F: ;
    eax = ebp + -20;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0047E4A8u); RECOMP_ABI_CALL(0x0047DE18u, sub_0047DE18); /* call 0x0047DE18 */

loc_0047E4A8: ;
    eax = ebp + -44;
    PUSH32(esp, eax);
    eax = ebp + -20;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0047E4B5u); RECOMP_ABI_CALL(0x0047DDBAu, sub_0047DDBA); /* call 0x0047DDBA */

loc_0047E4B5: ;
    eax = ebp + -20;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0047E4BEu); RECOMP_ABI_CALL(0x0047DE18u, sub_0047DE18); /* call 0x0047DE18 */

loc_0047E4BE: ;
    SET_LO8(eax, MEM8(ebp + -9));
    ecx = MEM32(ebp + 0x10);
    _fb = (uint32_t)(0x30) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(eax, LO8(eax) + 0x30);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) + 1;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebp + -8) = MEM32(ebp + -8) - 1;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM8(ecx) = LO8(eax);
    MEM8(ebp + -9) = 0;
    if ((_fa != 0)) goto loc_0047E48D; /* jne: not equal / not zero */

loc_0047E4D7: ;
    eax = MEM32(ebp + 0x10);

loc_0047E4DA: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    SET_LO8(ecx, MEM8(eax));
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x35) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x35 (8-bit) */
    ecx = ebx + 4;
    if (CMP_L(_fas, _fbs)) goto loc_0047E51C; /* jl: less (signed <) */

loc_0047E4E6: ;
    goto loc_0047E4F1;

loc_0047E4E8: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0x39) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0x39 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0047E4F5; /* jne: not equal / not zero */

loc_0047E4ED: ;
    MEM8(eax) = 0x30;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_0047E4F1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0047E4E8; /* jae: above or equal (unsigned >=) */

loc_0047E4F5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0047E4FD; /* jae: above or equal (unsigned >=) */

loc_0047E4F9: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM16(ebx) = MEM16(ebx) + 1;
    _fa = (uint32_t)(MEM16(ebx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */

loc_0047E4FD: ;
    MEM8(eax) = MEM8(eax) + 1;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */

loc_0047E4FF: ;
    _fb = (uint32_t)(LO8(ebx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* sub source, before the write */
    SET_LO8(eax, LO8(eax) - LO8(ebx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sub result */
    _fb = (uint32_t)(3) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* sub source, before the write */
    SET_LO8(eax, LO8(eax) - 3);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sub result */
    MEM8(ebx + 3) = LO8(eax);
    eax = SX8(LO8(eax));
    MEM8(eax + ebx + 4) = 0;

loc_0047E50E: ;
    eax = MEM32(ebp + -4);

loc_0047E511: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

loc_0047E516: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0x30) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0x30 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0047E520; /* jne: not equal / not zero */

loc_0047E51B: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_0047E51C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0047E516; /* jae: above or equal (unsigned >=) */

loc_0047E520: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0047E4FF; /* jae: above or equal (unsigned >=) */

loc_0047E524: ;
    MEM8(ecx) = 0x30;

loc_0047E527: ;
    MEM16(ebx) = MEM16(ebx) & 0;
    _fa = (uint32_t)(MEM16(ebx)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM8(ebx + 2) = 0x20;
    MEM8(ebx + 3) = 1;
    MEM8(ebx + 5) = 0;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_0047E511;

}

/**
 * sub_0047E53C
 * Original: 0x0047E53C - 0x0047E5A8 (108 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047E53C(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_0047E53C: ;
    eax = MEM32(esp + 4);
    ecx = eax;
    if (((5) & 31u)) _cf = (int)(((uint32_t)((int32_t)(int32_t)(ecx)) >> ((((5) & 31u)) - 1)) & 1);
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _cf = 0; /* logical op clears CF */
    eax = eax & 0x1F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = ecx * 4 + 0x881360;
    ecx = eax + eax * 4;
    eax = MEM32(edx);
    if (3) _cf = (int)(((ecx) >> (32 - (3))) & 1);
    ecx = ecx << 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = ZX8(MEM8(eax + ecx + 4));
    PUSH32(esp, esi);
    esi = 0x8000;
    _cf = 0; /* logical op clears CF */
    eax = eax & 0x80;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(MEM32(esp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0xC), esi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0047E578; /* jne: not equal / not zero */

loc_0047E56D: ;
    edx = MEM32(edx);
    ecx = edx + ecx + 4;
    _cf = 0; /* logical op clears CF */
    MEM8(ecx) = MEM8(ecx) & 0x7F;
    _fa = (uint32_t)(MEM8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    goto loc_0047E58B;

loc_0047E578: ;
    _fa = (uint32_t)(MEM32(esp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x4000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0xC), 0x4000 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0047E598; /* jne: not equal / not zero */

loc_0047E582: ;
    edx = MEM32(edx);
    ecx = edx + ecx + 4;
    _cf = 0; /* logical op clears CF */
    MEM8(ecx) = MEM8(ecx) | 0x80;
    _fa = (uint32_t)(MEM8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */

loc_0047E58B: ;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    eax = eax & 0xFFFFC000u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(esi)) >> 32) & 1);
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0047E598: ;
    PUSH32(esp, 0x0047E59Du); RECOMP_ABI_CALL(0x00471B14u, sub_00471B14); /* call 0x00471B14 */

loc_0047E59D: ;
    MEM32(eax) = 0x16;
    _cf = 0; /* logical op clears CF */
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0047E5B0
 * Original: 0x0047E5B0 - 0x0047E706 (342 bytes, 130 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0047E5B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0047E5B0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + 8);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0x10);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 0xFFFFFFFFu (32-bit) */
    PUSH32(esp, edi);
    MEM32(ebp + -4) = ebx;
    edi = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_0047E5DB; /* jne: not equal / not zero */

loc_0047E5CB: ;
    edx = ecx + 1;

loc_0047E5CE: ;
    SET_LO8(eax, MEM8(ecx));
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0047E5CE; /* jne: not equal / not zero */

loc_0047E5D5: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebp + 0xC) = ecx;

loc_0047E5DB: ;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), ebx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0047E6E8; /* jle: less or equal (signed <=) */

loc_0047E5E4: ;
    MEM32(ebp + 0x10) = ebx;

loc_0047E5E7: ;
    ecx = ZX8(MEM8(edi));
    SET_LO16(eax, (uint32_t)(int32_t)SMEM8(ecx + 0x656618));
    eax = ZX16(LO16(eax));
    MEM32(ebp + -8) = eax;
    _fb = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(ebp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + 0xC) (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0047E6E8; /* jg: greater (signed >) */

loc_0047E608: ;
    ebx = MEM32(ebp + -8);
    eax = ebx;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_0047E659; /* je: equal / zero */

loc_0047E611: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0047E64D; /* je: equal / zero */

loc_0047E614: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0047E641; /* je: equal / zero */

loc_0047E617: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0047E635; /* je: equal / zero */

loc_0047E61A: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0047E629; /* je: equal / zero */

loc_0047E61D: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0047E662; /* jne: not equal / not zero */

loc_0047E620: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) + 1;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = ecx;
    edx = edx << 6;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */

loc_0047E629: ;
    eax = ZX8(MEM8(edi));
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) + 1;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = edx << 6;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */

loc_0047E635: ;
    eax = ZX8(MEM8(edi));
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) + 1;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = edx << 6;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */

loc_0047E641: ;
    eax = ZX8(MEM8(edi));
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) + 1;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = edx << 6;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */

loc_0047E64D: ;
    eax = ZX8(MEM8(edi));
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) + 1;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = edx << 6;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */

loc_0047E659: ;
    eax = ZX8(MEM8(edi));
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) + 1;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0047E662: ;
    _fb = (uint32_t)(MEM32(ebx * 4 + 0x656600)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - MEM32(ebx * 4 + 0x656600);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x65671C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(0x65671C) (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0047E681; /* ja: above (unsigned >) */

loc_0047E671: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) + 1;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = MEM32(ebp + -4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + 0x14) (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0047E6DC; /* jg: greater (signed >) */

loc_0047E67C: ;
    MEM16(esi) = LO16(edx);
    goto loc_0047E6DA;

loc_0047E681: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x656720)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(0x656720) (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0047E69C; /* jbe: below or equal (unsigned <=) */

loc_0047E689: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) + 1;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = MEM32(ebp + -4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + 0x14) (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0047E6DC; /* jg: greater (signed >) */

loc_0047E694: ;
    SET_LO16(eax, MEM16(0x656718));
    goto loc_0047E6D7;

loc_0047E69C: ;
    _fb = (uint32_t)(MEM32(0x656728)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - MEM32(0x656728);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(ebp + -4) = MEM32(ebp + -4) + 1;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = MEM32(ebp + 0x14);
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), eax (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0047E6C2; /* jg: greater (signed >) */

loc_0047E6AD: ;
    ecx = MEM32(0x656724);
    ebx = edx;
    ebx = ebx >> LO8(ecx);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(MEM32(0x656730)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + MEM32(0x656730);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(esi) = LO16(ebx);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0047E6C2: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) + 1;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), eax (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0047E6DC; /* jg: greater (signed >) */

loc_0047E6CA: ;
    eax = MEM32(0x65672C);
    eax = eax & edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(MEM32(0x656734)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(0x656734);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0047E6D7: ;
    MEM16(esi) = LO16(eax);

loc_0047E6DA: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0047E6DC: ;
    eax = MEM32(ebp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + 0xC) (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0047E5E7; /* jl: less (signed <) */

loc_0047E6E8: ;
    _fa = (uint32_t)(MEM32(ebp + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x14), 0 (32-bit) */
    eax = MEM32(ebp + -4);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_0047E702; /* je: equal / zero */

loc_0047E6F4: ;
    _fa = (uint32_t)(MEM32(ebp + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x14), eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0047E702; /* jge: greater or equal (signed >=) */

loc_0047E6F9: ;
    PUSH32(esp, 0x7A);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0047E700u); RECOMP_ABI_CALL(0x0042C2D4u, sub_0042C2D4); /* call 0x0042C2D4 */

loc_0047E700: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0047E702: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_0047E706
 * Original: 0x0047E706 - 0x0047E7BE (184 bytes, 84 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047E706(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0047E706: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0047E71F; /* jne: not equal / not zero */

loc_0047E717: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0047E71Du); RECOMP_ABI_CALL(0x0046E45Au, sub_0046E45A); /* call 0x0046E45A */

loc_0047E71D: ;
    POP32(esp, ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0047E71F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    edx = MEM32(esp + 0x18);
    if (CMP_LE(_fas, _fbs)) goto loc_0047E7A4; /* jle: less or equal (signed <=) */

loc_0047E727: ;
    PUSH32(esp, ebx);
    ebx = eax;
    eax = MEM32(esp + 0x18);

loc_0047E72E: ;
    SET_LO16(ecx, MEM16(esi));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(0x7F) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), 0x7F (16-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0047E742; /* ja: above (unsigned >) */

loc_0047E738: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, edx (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0047E79E; /* jg: greater (signed >) */

loc_0047E73C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0047E79E; /* je: equal / zero */

loc_0047E740: ;
    goto loc_0047E79B;

loc_0047E742: ;
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(0x7FF) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), 0x7FF (16-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0047E75C; /* ja: above (unsigned >) */

loc_0047E749: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, edx (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0047E78A; /* jg: greater (signed >) */

loc_0047E74D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0047E78A; /* je: equal / zero */

loc_0047E751: ;
    ecx = ecx >> 6;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    SET_LO8(ecx, LO8(ecx) & 0x1F);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    SET_LO8(ecx, LO8(ecx) | 0xC0);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    goto loc_0047E787;

loc_0047E75C: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, edx (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0047E770; /* jg: greater (signed >) */

loc_0047E760: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0047E770; /* je: equal / zero */

loc_0047E764: ;
    ecx = ecx >> 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    SET_LO8(ecx, LO8(ecx) & 0xF);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    SET_LO8(ecx, LO8(ecx) | 0xE0);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    MEM8(eax) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0047E770: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, edx (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0047E78A; /* jg: greater (signed >) */

loc_0047E775: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0047E78A; /* je: equal / zero */

loc_0047E779: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(ecx, MEM16(esi));
    ecx = ecx >> 6;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    SET_LO8(ecx, LO8(ecx) & 0x3F);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    SET_LO8(ecx, LO8(ecx) | 0x80);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */

loc_0047E787: ;
    MEM8(eax) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0047E78A: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, edx (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0047E79E; /* jg: greater (signed >) */

loc_0047E78F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0047E79E; /* je: equal / zero */

loc_0047E793: ;
    SET_LO8(ecx, MEM8(esi));
    SET_LO8(ecx, LO8(ecx) & 0x3F);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    SET_LO8(ecx, LO8(ecx) | 0x80);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */

loc_0047E79B: ;
    MEM8(eax) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0047E79E: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0047E72E; /* jne: not equal / not zero */

loc_0047E7A3: ;
    POP32(esp, ebx);

loc_0047E7A4: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0047E7B7; /* je: equal / zero */

loc_0047E7A8: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, edi (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0047E7B7; /* jge: greater or equal (signed >=) */

loc_0047E7AC: ;
    PUSH32(esp, 0x7A);
    PUSH32(esp, 0x0047E7B3u); RECOMP_ABI_CALL(0x0042C2D4u, sub_0042C2D4); /* call 0x0042C2D4 */

loc_0047E7B3: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_0047E7B9;

loc_0047E7B7: ;
    eax = edi;

loc_0047E7B9: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_0047E7BE
 * Original: 0x0047E7BE - 0x0047E879 (187 bytes, 70 insns)
 * Category: game_vtable
 * CC: cdecl, 6 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0047E7BE(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0047E7BE: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFDE8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 0xFDE8 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0047E7DB; /* jne: not equal / not zero */

loc_0047E7CD: ;
    PUSH32(esp, 0x57);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0047E7D4u); RECOMP_ABI_CALL(0x0042C2D4u, sub_0042C2D4); /* call 0x0042C2D4 */

loc_0047E7D4: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_0047E875;

loc_0047E7DB: ;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFDE9) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 0xFDE9 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0047E7F7; /* jne: not equal / not zero */

loc_0047E7E4: ;
    PUSH32(esp, MEM32(ebp + 0x1C));
    PUSH32(esp, MEM32(ebp + 0x18));
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, MEM32(ebp + 0x10));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0047E7F5u); RECOMP_ABI_CALL(0x0047E5B0u, sub_0047E5B0); /* call 0x0047E5B0 */

loc_0047E7F5: ;
    goto loc_0047E875;

loc_0047E7F7: ;
    eax = MEM32(ebp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0x10);
    if (CMP_NE(_fa, _fb)) goto loc_0047E811; /* jne: not equal / not zero */

loc_0047E803: ;
    eax = edi;
    edx = eax + 1;

loc_0047E808: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0047E808; /* jne: not equal / not zero */

loc_0047E80F: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_0047E811: ;
    edx = MEM32(ebp + 0x1C);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0047E81E; /* jne: not equal / not zero */

loc_0047E819: ;
    eax = ZX16(LO16(eax));
    goto loc_0047E874;

loc_0047E81E: ;
    PUSH32(esp, esi);
    esi = ZX16(LO16(eax));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, esi (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0047E82A; /* jge: greater or equal (signed >=) */

loc_0047E826: ;
    PUSH32(esp, 0x7A);
    goto loc_0047E86C;

loc_0047E82A: ;
    ecx = eax + -1;
    MEM16(ebp + -6) = LO16(eax);
    eax = MEM32(ebp + 0x18);
    MEM32(ebp + -12) = eax;
    eax = ecx + ecx;
    MEM16(ebp + -16) = LO16(eax);
    eax = edx + edx;
    MEM16(ebp + -14) = LO16(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    eax = ebp + -8;
    PUSH32(esp, eax);
    eax = ebp + -16;
    PUSH32(esp, eax);
    MEM32(ebp + -4) = edi;
    MEM16(ebp + -8) = LO16(ecx);
    { uint32_t _icall_target = MEM32(0x561218); PUSH32(esp, 0x0047E85Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0047E856u); } /* indirect call */
    }

loc_0047E85C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0047E864; /* jl: less (signed <) */

loc_0047E860: ;
    eax = esi;
    goto loc_0047E873;

loc_0047E864: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x561054); PUSH32(esp, 0x0047E86Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0047E865u); } /* indirect call */
    }

loc_0047E86B: ;
    PUSH32(esp, eax);

loc_0047E86C: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0047E871u); RECOMP_ABI_CALL(0x0042C2D4u, sub_0042C2D4); /* call 0x0042C2D4 */

loc_0047E871: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0047E873: ;
    POP32(esp, esi);

loc_0047E874: ;
    POP32(esp, edi);

loc_0047E875: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 28; return; /* ret 24 */

}

/**
 * sub_0047E879
 * Original: 0x0047E879 - 0x0047E941 (200 bytes, 71 insns)
 * Category: game_vtable
 * CC: thiscall, 8 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0047E879(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0047E879: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFDE8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 0xFDE8 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0047E896; /* jne: not equal / not zero */

loc_0047E888: ;
    PUSH32(esp, 0x57);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0047E88Fu); RECOMP_ABI_CALL(0x0042C2D4u, sub_0042C2D4); /* call 0x0042C2D4 */

loc_0047E88F: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_0047E93D;

loc_0047E896: ;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFDE9) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 0xFDE9 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0047E8B5; /* jne: not equal / not zero */

loc_0047E89F: ;
    PUSH32(esp, MEM32(ebp + 0x1C));
    PUSH32(esp, MEM32(ebp + 0x18));
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, MEM32(ebp + 0x10));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0047E8B0u); RECOMP_ABI_CALL(0x0047E706u, sub_0047E706); /* call 0x0047E706 */

loc_0047E8B0: ;
    goto loc_0047E93D;

loc_0047E8B5: ;
    _fa = (uint32_t)(MEM32(ebp + 0x20)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x20), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0047E888; /* jne: not equal / not zero */

loc_0047E8BB: ;
    eax = MEM32(ebp + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0047E8C5; /* je: equal / zero */

loc_0047E8C2: ;
    MEM32(eax) = MEM32(eax) & 0;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_0047E8C5: ;
    eax = MEM32(ebp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0x10);
    if (CMP_NE(_fa, _fb)) goto loc_0047E8D8; /* jne: not equal / not zero */

loc_0047E8D1: ;
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0047E8D7u); RECOMP_ABI_CALL(0x0046E45Au, sub_0046E45A); /* call 0x0046E45A */

loc_0047E8D7: ;
    POP32(esp, ecx);

loc_0047E8D8: ;
    ecx = MEM32(ebp + 0x1C);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0047E8E5; /* jne: not equal / not zero */

loc_0047E8E0: ;
    eax = ZX16(LO16(eax));
    goto loc_0047E93C;

loc_0047E8E5: ;
    PUSH32(esp, edi);
    edi = ZX16(LO16(eax));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0047E8F1; /* jge: greater or equal (signed >=) */

loc_0047E8ED: ;
    PUSH32(esp, 0x7A);
    goto loc_0047E934;

loc_0047E8F1: ;
    edx = MEM32(ebp + 0x18);
    MEM16(ebp + -16) = MEM16(ebp + -16) & 0;
    _fa = (uint32_t)(MEM16(ebp + -16)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    MEM16(ebp + -14) = LO16(ecx);
    ecx = eax + eax + 0xFFFE;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(ebp + -6) = LO16(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    eax = ebp + -8;
    PUSH32(esp, eax);
    eax = ebp + -16;
    PUSH32(esp, eax);
    MEM32(ebp + -12) = edx;
    MEM32(ebp + -4) = esi;
    MEM16(ebp + -8) = LO16(ecx);
    { uint32_t _icall_target = MEM32(0x56121C); PUSH32(esp, 0x0047E924u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0047E91Eu); } /* indirect call */
    }

loc_0047E924: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0047E92C; /* jl: less (signed <) */

loc_0047E928: ;
    eax = edi;
    goto loc_0047E93B;

loc_0047E92C: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x561054); PUSH32(esp, 0x0047E933u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0047E92Du); } /* indirect call */
    }

loc_0047E933: ;
    PUSH32(esp, eax);

loc_0047E934: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0047E939u); RECOMP_ABI_CALL(0x0042C2D4u, sub_0042C2D4); /* call 0x0042C2D4 */

loc_0047E939: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0047E93B: ;
    POP32(esp, edi);

loc_0047E93C: ;
    POP32(esp, esi);

loc_0047E93D: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 36; return; /* ret 32 */

}

/**
 * sub_0047E950
 * Original: 0x0047E950 - 0x0047EA70 (288 bytes, 121 insns)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047E950(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_0047E950: ;
    eax = MEM32(esp + 4);
    _cf = 0; /* logical op clears CF */
    eax = eax | eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    if ((_fas < 0)) goto loc_0047E990; /* js: sign (negative) */

loc_0047E958: ;
    edx = MEM32(esp + 8);
    _cf = 0; /* logical op clears CF */
    edx = edx | edx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    if ((_fas < 0)) goto loc_0047EA16; /* js: sign (negative) */

loc_0047E964: ;
    { uint64_t _r = (uint64_t)eax * (uint64_t)edx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    ecx = MEM32(esp + 0xC);
    _cf = 0; /* logical op clears CF */
    ecx = ecx | ecx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    if ((_fas < 0)) goto loc_0047EA58; /* js: sign (negative) */

loc_0047E972: ;
    if (((1) & 31u)) _cf = (int)(((uint32_t)((int32_t)(int32_t)(ecx)) >> ((((1) & 31u)) - 1)) & 1);
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((1) & 31u));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(ecx)) >> 32) & 1);
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint64_t _t = (uint64_t)(edx) + (uint64_t)(0) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); edx = (uint32_t)_t; }  /* adc */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* adc result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(esp + 0xC) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_AE(_fa, _fb)) goto loc_0047E98A; /* jae: above or equal (unsigned >=) */

loc_0047E97F: ;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)MEM32(esp + 0xC));
      edx = (uint32_t)(_dividend % (uint32_t)MEM32(esp + 0xC)); }
    _cf = 0; /* logical op clears CF */
    eax = eax | eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    if ((_fas < 0)) goto loc_0047E98A; /* js: sign (negative) */

loc_0047E987: ;
    esp += 16; return; /* ret 12 */

loc_0047E98A: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    esp += 16; return; /* ret 12 */

loc_0047E990: ;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    edx = MEM32(esp + 8);
    _cf = 0; /* logical op clears CF */
    edx = edx | edx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    if ((_fas < 0)) goto loc_0047E9BC; /* js: sign (negative) */

loc_0047E99A: ;
    { uint64_t _r = (uint64_t)eax * (uint64_t)edx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    ecx = MEM32(esp + 0xC);
    _cf = 0; /* logical op clears CF */
    ecx = ecx | ecx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    if ((_fas < 0)) goto loc_0047E9E6; /* js: sign (negative) */

loc_0047E9A4: ;
    if (((1) & 31u)) _cf = (int)(((uint32_t)((int32_t)(int32_t)(ecx)) >> ((((1) & 31u)) - 1)) & 1);
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((1) & 31u));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(ecx)) >> 32) & 1);
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint64_t _t = (uint64_t)(edx) + (uint64_t)(0) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); edx = (uint32_t)_t; }  /* adc */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* adc result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(esp + 0xC) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_AE(_fa, _fb)) goto loc_0047E9E0; /* jae: above or equal (unsigned >=) */

loc_0047E9B1: ;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)MEM32(esp + 0xC));
      edx = (uint32_t)(_dividend % (uint32_t)MEM32(esp + 0xC)); }
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    if ((_fas > 0)) goto loc_0047E9E0; /* jg: greater (signed >) */

loc_0047E9B9: ;
    esp += 16; return; /* ret 12 */

loc_0047E9BC: ;
    _cf = (int)((edx) != 0);
    edx = (uint32_t)(0u - (uint32_t)(edx));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    { uint64_t _r = (uint64_t)eax * (uint64_t)edx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    ecx = MEM32(esp + 0xC);
    _cf = 0; /* logical op clears CF */
    ecx = ecx | ecx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    if ((_fas < 0)) goto loc_0047E9FE; /* js: sign (negative) */

loc_0047E9C8: ;
    if (((1) & 31u)) _cf = (int)(((uint32_t)((int32_t)(int32_t)(ecx)) >> ((((1) & 31u)) - 1)) & 1);
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((1) & 31u));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(ecx)) >> 32) & 1);
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint64_t _t = (uint64_t)(edx) + (uint64_t)(0) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); edx = (uint32_t)_t; }  /* adc */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* adc result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(esp + 0xC) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_AE(_fa, _fb)) goto loc_0047E9E0; /* jae: above or equal (unsigned >=) */

loc_0047E9D5: ;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)MEM32(esp + 0xC));
      edx = (uint32_t)(_dividend % (uint32_t)MEM32(esp + 0xC)); }
    _cf = 0; /* logical op clears CF */
    eax = eax | eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    if ((_fas < 0)) goto loc_0047E9E0; /* js: sign (negative) */

loc_0047E9DD: ;
    esp += 16; return; /* ret 12 */

loc_0047E9E0: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    esp += 16; return; /* ret 12 */

loc_0047E9E6: ;
    _cf = (int)((ecx) != 0);
    ecx = (uint32_t)(0u - (uint32_t)(ecx));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    PUSH32(esp, ecx);
    if (((1) & 31u)) _cf = (int)(((uint32_t)((int32_t)(int32_t)(ecx)) >> ((((1) & 31u)) - 1)) & 1);
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((1) & 31u));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(ecx)) >> 32) & 1);
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint64_t _t = (uint64_t)(edx) + (uint64_t)(0) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); edx = (uint32_t)_t; }  /* adc */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* adc result */
    POP32(esp, ecx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_AE(_fa, _fb)) goto loc_0047E9E0; /* jae: above or equal (unsigned >=) */

loc_0047E9F5: ;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ecx);
      edx = (uint32_t)(_dividend % (uint32_t)ecx); }
    _cf = 0; /* logical op clears CF */
    eax = eax | eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    if ((_fas < 0)) goto loc_0047E9E0; /* js: sign (negative) */

loc_0047E9FB: ;
    esp += 16; return; /* ret 12 */

loc_0047E9FE: ;
    _cf = (int)((ecx) != 0);
    ecx = (uint32_t)(0u - (uint32_t)(ecx));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    PUSH32(esp, ecx);
    if (((1) & 31u)) _cf = (int)(((uint32_t)((int32_t)(int32_t)(ecx)) >> ((((1) & 31u)) - 1)) & 1);
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((1) & 31u));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(ecx)) >> 32) & 1);
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint64_t _t = (uint64_t)(edx) + (uint64_t)(0) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); edx = (uint32_t)_t; }  /* adc */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* adc result */
    POP32(esp, ecx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_AE(_fa, _fb)) goto loc_0047E9E0; /* jae: above or equal (unsigned >=) */

loc_0047EA0D: ;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ecx);
      edx = (uint32_t)(_dividend % (uint32_t)ecx); }
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    if ((_fas > 0)) goto loc_0047E9E0; /* jg: greater (signed >) */

loc_0047EA13: ;
    esp += 16; return; /* ret 12 */

loc_0047EA16: ;
    _cf = (int)((edx) != 0);
    edx = (uint32_t)(0u - (uint32_t)(edx));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    { uint64_t _r = (uint64_t)eax * (uint64_t)edx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    ecx = MEM32(esp + 0xC);
    _cf = 0; /* logical op clears CF */
    ecx = ecx | ecx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    if ((_fas < 0)) goto loc_0047EA40; /* js: sign (negative) */

loc_0047EA22: ;
    if (((1) & 31u)) _cf = (int)(((uint32_t)((int32_t)(int32_t)(ecx)) >> ((((1) & 31u)) - 1)) & 1);
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((1) & 31u));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(ecx)) >> 32) & 1);
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint64_t _t = (uint64_t)(edx) + (uint64_t)(0) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); edx = (uint32_t)_t; }  /* adc */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* adc result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(esp + 0xC) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_AE(_fa, _fb)) goto loc_0047EA3A; /* jae: above or equal (unsigned >=) */

loc_0047EA2F: ;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)MEM32(esp + 0xC));
      edx = (uint32_t)(_dividend % (uint32_t)MEM32(esp + 0xC)); }
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    if ((_fas > 0)) goto loc_0047EA3A; /* jg: greater (signed >) */

loc_0047EA37: ;
    esp += 16; return; /* ret 12 */

loc_0047EA3A: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    esp += 16; return; /* ret 12 */

loc_0047EA40: ;
    _cf = (int)((ecx) != 0);
    ecx = (uint32_t)(0u - (uint32_t)(ecx));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    PUSH32(esp, ecx);
    if (((1) & 31u)) _cf = (int)(((uint32_t)((int32_t)(int32_t)(ecx)) >> ((((1) & 31u)) - 1)) & 1);
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((1) & 31u));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(ecx)) >> 32) & 1);
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint64_t _t = (uint64_t)(edx) + (uint64_t)(0) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); edx = (uint32_t)_t; }  /* adc */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* adc result */
    POP32(esp, ecx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_AE(_fa, _fb)) goto loc_0047EA3A; /* jae: above or equal (unsigned >=) */

loc_0047EA4F: ;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ecx);
      edx = (uint32_t)(_dividend % (uint32_t)ecx); }
    _cf = 0; /* logical op clears CF */
    eax = eax | eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    if ((_fas < 0)) goto loc_0047E9E0; /* js: sign (negative) */

loc_0047EA55: ;
    esp += 16; return; /* ret 12 */

loc_0047EA58: ;
    _cf = (int)((ecx) != 0);
    ecx = (uint32_t)(0u - (uint32_t)(ecx));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    PUSH32(esp, ecx);
    if (((1) & 31u)) _cf = (int)(((uint32_t)((int32_t)(int32_t)(ecx)) >> ((((1) & 31u)) - 1)) & 1);
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((1) & 31u));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(ecx)) >> 32) & 1);
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint64_t _t = (uint64_t)(edx) + (uint64_t)(0) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); edx = (uint32_t)_t; }  /* adc */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* adc result */
    POP32(esp, ecx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_AE(_fa, _fb)) goto loc_0047EA3A; /* jae: above or equal (unsigned >=) */

loc_0047EA67: ;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ecx);
      edx = (uint32_t)(_dividend % (uint32_t)ecx); }
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    if ((_fas > 0)) goto loc_0047EA3A; /* jg: greater (signed >) */

loc_0047EA6D: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0047EA70
 * Original: 0x0047EA70 - 0x0047EAB2 (66 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0047EA70(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0047EA70: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    eax = ebp + -4;
    PUSH32(esp, eax);
    eax = ebp + -8;
    PUSH32(esp, eax);
    PUSH32(esp, 9);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0047EA88u); RECOMP_ABI_CALL(0x0046DA64u, sub_0046DA64); /* call 0x0046DA64 */

loc_0047EA88: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0047EA90; /* jge: greater or equal (signed >=) */

loc_0047EA8C: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_0047EA90: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0047EA95u); RECOMP_ABI_CALL(0x00430655u, sub_00430655); /* call 0x00430655 */

loc_0047EA95: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0047EAA6; /* je: equal / zero */

loc_0047EA9A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 6 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0047EAAD; /* jne: not equal / not zero */

loc_0047EA9F: ;
    MEM16(ebp + -2) = MEM16(ebp + -2) & 0;
    _fa = (uint32_t)(MEM16(ebp + -2)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    goto loc_0047EAAD;

loc_0047EAA6: ;
    MEM32(ebp + -4) = 1;

loc_0047EAAD: ;
    eax = MEM32(ebp + -4);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_0047EAB2
 * Original: 0x0047EAB2 - 0x0047EAF9 (71 bytes, 27 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047EAB2(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0047EAB2: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(ecx);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x7FFFFFED);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0x7FFFFFC3;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = 0x7FFFFFFF;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = ebx;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)esi);
      edx = (uint32_t)(_dividend % (uint32_t)esi); }
    esi = edx;
    eax = edx;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x7FFFFFED);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ebx);
      edx = (uint32_t)(_dividend % (uint32_t)ebx); }
    POP32(esp, edi);
    MEM32(ecx) = edx;
    edx = edx & 0x7F;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = edx * 4 + 0x656738;
    eax = MEM32(ecx);
    MEM32(ecx) = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0047EAF9
 * Original: 0x0047EAF9 - 0x0047EC8C (403 bytes, 111 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047EAF9(void)
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

loc_0047EAF9: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0x380);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x384);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    PUSH32(esp, edi);
    if (CMP_L(_fas, _fbs)) goto loc_0047EB12; /* jl: less (signed <) */

loc_0047EB10: ;
    ecx = esi;

loc_0047EB12: ;
    edx = ecx;
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - 0x40;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edi = 0x100;
    ebx = 0x200;
    if ((_fa == 0)) goto loc_0047EB72; /* je: equal / zero */

loc_0047EB23: ;
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - 0x40;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_0047EB6A; /* je: equal / zero */

loc_0047EB28: ;
    _fb = (uint32_t)(0x80) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - 0x80;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_0047EB62; /* je: equal / zero */

loc_0047EB30: ;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_0047EB5A; /* je: equal / zero */

loc_0047EB34: ;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - ebx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_0047EB52; /* je: equal / zero */

loc_0047EB38: ;
    _fb = (uint32_t)(0x400) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - 0x400;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_0047EB4A; /* je: equal / zero */

loc_0047EB40: ;
    eax = 0x80040002u;
    goto loc_0047EC86;

loc_0047EB4A: ;
    edx = MEM32(eax + 0x410);
    goto loc_0047EB78;

loc_0047EB52: ;
    edx = MEM32(eax + 0x414);
    goto loc_0047EB78;

loc_0047EB5A: ;
    edx = MEM32(eax + 0x418);
    goto loc_0047EB78;

loc_0047EB62: ;
    edx = MEM32(eax + 0x41C);
    goto loc_0047EB78;

loc_0047EB6A: ;
    edx = MEM32(eax + 0x420);
    goto loc_0047EB78;

loc_0047EB72: ;
    edx = MEM32(eax + 0x424);

loc_0047EB78: ;
    MEM32(eax + 0x428) = edx;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((7) & 31u));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ecx = MEM32(ecx * 4 + 0x51D8E0);
    edx = MEM32(ecx);
    MEM32(eax + 0x358) = edx;
    edx = MEM32(ecx + 4);
    MEM32(eax + 0x35C) = edx;
    fp_push(MEMF(ecx)); /* fld float */
    fp_top() = -fp_top(); /* fchs */
    MEMF(eax + 0x360) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(ecx + 4);
    fp_push(MEMF(0x648CE0)); /* fld float */
    MEM32(eax + 0x364) = edx;
    fp_push(MEMF(ecx + 0x20)); /* fld float */
    ecx = MEM32(eax + 0x388);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    edx = esi;
    MEMF(eax + 0x368) = (float)fp_top(); fp_pop(); /* fstp */
    if (CMP_GE(_fas, _fbs)) goto loc_0047EBCB; /* jge: greater or equal (signed >=) */

loc_0047EBC9: ;
    edx = ecx;

loc_0047EBCB: ;
    ecx = edx;
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x40;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_0047EC3B; /* je: equal / zero */

loc_0047EBD2: ;
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x40;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_0047EC31; /* je: equal / zero */

loc_0047EBD7: ;
    _fb = (uint32_t)(0x80) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x80;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_0047EC23; /* je: equal / zero */

loc_0047EBDF: ;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_0047EC15; /* je: equal / zero */

loc_0047EBE3: ;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - ebx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_0047EC07; /* je: equal / zero */

loc_0047EBE7: ;
    _fb = (uint32_t)(0x400) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x400;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_0047EBF9; /* je: equal / zero */

loc_0047EBEF: ;
    eax = 0x80040002u;
    goto loc_0047EC84;

loc_0047EBF9: ;
    ecx = MEM32(eax + 0x410);
    _fb = (uint32_t)(0x2000) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x2000;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0047EC43;

loc_0047EC07: ;
    ecx = MEM32(eax + 0x414);
    _fb = (uint32_t)(0x1000) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x1000;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0047EC43;

loc_0047EC15: ;
    ecx = MEM32(eax + 0x418);
    _fb = (uint32_t)(0x800) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x800;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0047EC43;

loc_0047EC23: ;
    ecx = MEM32(eax + 0x41C);
    _fb = (uint32_t)(0x400) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x400;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0047EC43;

loc_0047EC31: ;
    ecx = MEM32(eax + 0x420);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + ebx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0047EC43;

loc_0047EC3B: ;
    ecx = MEM32(eax + 0x424);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0047EC43: ;
    MEM32(eax + 0x42C) = ecx;
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((7) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ecx = MEM32(edx * 4 + 0x51D8E0);
    edx = MEM32(ecx + 4);
    MEM32(eax + 0x36C) = edx;
    fp_push(MEMF(ecx)); /* fld float */
    fp_top() = -fp_top(); /* fchs */
    MEMF(eax + 0x370) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(ecx + 4);
    MEM32(eax + 0x374) = edx;
    edx = MEM32(ecx);
    MEM32(eax + 0x378) = edx;
    fp_push(MEMF(ecx + 0x20)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEMF(eax + 0x37C) = (float)fp_top(); fp_pop(); /* fstp */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0047EC84: ;
    fp_pop(); /* fstp st(0) */

loc_0047EC86: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0047EC8C
 * Original: 0x0047EC8C - 0x0047F02A (926 bytes, 290 insns)
 * Category: game_audio
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0047EC8C(void)
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

loc_0047EC8C: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esi + 0x344));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0047ECA3u); RECOMP_ABI_CALL(0x0050E7B4u, sub_0050E7B4); /* call 0x0050E7B4 */

loc_0047ECA3: ;
    fp_push(1.0); /* fld1 */
    eax = MEM32(ebp + 0xC);
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(eax + 0x6C)); /* fdiv dword ptr [eax + 0x6c] */
    ecx = MEM32(eax);
    edx = MEM32(eax + 0x60);
    MEM32(ebp + -24) = ecx;
    ecx = MEM32(eax + 8);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ebp + -36) = ecx;
    ecx = MEM32(eax + 0x10);
    eax = MEM32(eax + 0xC);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(esi + 0x30)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x30), ebx (32-bit) */
    MEM32(ebp + -12) = edx;
    MEM32(ebp + -4) = ebx;
    MEM32(ebp + 8) = edi;
    MEM32(ebp + -44) = ecx;
    MEM32(ebp + -40) = eax;
    MEMF(ebp + -28) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + -28)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEMF(ebp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    if (CMP_NE(_fa, _fb)) goto loc_0047ED69; /* jne: not equal / not zero */

loc_0047ECE8: ;
    ecx = MEM32(esi + 0x324);
    ecx = ecx << 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
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
    eax = MEM32(esi + 0x324);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x328)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 0x328) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0047ED43; /* jge: greater or equal (signed >=) */

loc_0047ED11: ;
    edi = MEM32(ebp + -24);
    MEM32(ebp + 8) = edi;
    edi = MEM32(ebp + 0x10);
    ecx = edx + eax * 4;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - edx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_0047ED1F: ;
    ebx = MEM32(ebp + 8);
    ebx = (uint32_t)(int32_t)SMEM16(ebx);
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + 8) = MEM32(ebp + 8) + 2;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + 0x10) = ebx;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    fp_push((double)SMEM32(ebp + 0x10)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edi + ecx)); /* fmul dword ptr [edi + ecx] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + 0xC)); /* fmul dword ptr [ebp + 0xc] */
    MEMF(ecx) = (float)fp_top(); fp_pop(); /* fstp */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x328)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 0x328) (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0047ED1F; /* jl: less (signed <) */

loc_0047ED43: ;
    edi = MEM32(esi + 0x328);
    ecx = MEM32(esi + 0x60);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = ecx << 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edi = edx + edi * 4;
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
    goto loc_0047F021;

loc_0047ED69: ;
    fp_push(MEMF(esi + 0x340)); /* fld float */
    eax = MEM32(esi + 0x324);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x587B98)); /* fmul dword ptr [0x587b98] */
    MEM32(ebp + -8) = eax;
    MEMF(ebp + -16) = (float)fp_top(); fp_pop(); /* fstp */
    if (CMP_LE(_fas, _fbs)) goto loc_0047EDD6; /* jle: less or equal (signed <=) */

loc_0047ED85: ;
    ecx = MEM32(esi + 0x40C);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x19660D);
    _fb = (uint32_t)(0x3C6EF35F) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x3C6EF35F;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x40C) = ecx;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((2) & 31u));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    eax = ecx;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((2) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = ecx;
    _fb = (uint32_t)(MEM32(esi + 0x408)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(esi + 0x408);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esi + 0x408) = ecx;
    ecx = MEM32(ebp + 0x10);
    MEM32(ebp + -32) = eax;
    eax = MEM32(esi + 0x324);
    fp_push((double)SMEM32(ebp + -32)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + -16)); /* fmul dword ptr [ebp - 0x10] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + eax * 4)); /* fmul dword ptr [ecx + eax*4] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + 0xC)); /* fmul dword ptr [ebp + 0xc] */
    MEMF(edx + edi * 4) = (float)fp_top(); fp_pop(); /* fstp */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(ebp + -8) (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0047ED85; /* jl: less (signed <) */

loc_0047EDD6: ;
    eax = MEM32(esi + 0x3C4);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    MEM32(ebp + -8) = eax;
    if (CMP_GE(_fas, _fbs)) goto loc_0047EE6B; /* jge: greater or equal (signed >=) */

loc_0047EDE7: ;
    ecx = MEM32(ebp + 0x10);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = edx + edi * 4;
    MEM32(ebp + -20) = ecx;

loc_0047EDF2: ;
    ecx = MEM32(esi + 0x40C);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x19660D);
    _fb = (uint32_t)(0x3C6EF35F) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x3C6EF35F;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x40C) = ecx;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((2) & 31u));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx = ecx;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((2) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + ebx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = ecx;
    _fb = (uint32_t)(MEM32(esi + 0x408)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - MEM32(esi + 0x408);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esi + 0x408) = ecx;
    ecx = MEM32(esi + 0x354);
    MEM32(ebp + -32) = ebx;
    ebx = MEM32(ebp + -4);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + ebx * 4 + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(ecx + ebx * 4 + 4) (32-bit) */
    fp_push((double)SMEM32(ebp + -32)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + -16)); /* fmul dword ptr [ebp - 0x10] */
    if (CMP_L(_fas, _fbs)) goto loc_0047EE3D; /* jl: less (signed <) */

loc_0047EE3A: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) + 1;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0047EE3D: ;
    ebx = MEM32(ebp + 8);
    ecx = MEM32(ebp + -24);
    ecx = (uint32_t)(int32_t)SMEM16(ecx + ebx * 2);
    MEM32(ebp + -32) = ecx;
    ecx = MEM32(ebp + -20);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    fp_push((double)SMEM32(ebp + -32)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_st1()); /* fadd st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + ecx)); /* fmul dword ptr [eax + ecx] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + 0xC)); /* fmul dword ptr [ebp + 0xc] */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + 8) = MEM32(ebp + 8) + 1;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    fp_pop(); /* fstp st(0) */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(ebp + -8) (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0047EDF2; /* jl: less (signed <) */

loc_0047EE68: ;
    ebx = MEM32(ebp + -4);

loc_0047EE6B: ;
    ecx = MEM32(esi + 0x328);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ecx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0047EFC8; /* jge: greater or equal (signed >=) */

loc_0047EE79: ;
    eax = MEM32(ebp + -36);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -20) = eax;
    eax = ebx;
    ebx = MEM32(ebp + -40);
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(ebp + -4) = eax;
    eax = MEM32(ebp + -44);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(ebp + -8) = ebx;
    MEM32(ebp + -44) = eax;

loc_0047EE97: ;
    eax = MEM32(esi + 0x354);
    ebx = MEM32(ebp + -4);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + ebx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(eax + ebx + 4) (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0047EEAD; /* jl: less (signed <) */

loc_0047EEA6: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + -4) = MEM32(ebp + -4) + 4;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -20) = MEM32(ebp + -20) + 1;
    _fa = (uint32_t)(MEM32(ebp + -20)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0047EEAD: ;
    ebx = MEM32(ebp + -4);
    eax = MEM32(eax + ebx + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    ebx = eax;
    if (CMP_L(_fas, _fbs)) goto loc_0047EEBC; /* jl: less (signed <) */

loc_0047EEBA: ;
    ebx = ecx;

loc_0047EEBC: ;
    eax = MEM32(ebp + -20);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0047EF42; /* jne: not equal / not zero */

loc_0047EEC4: ;
    eax = MEM32(ebp + -44);
    ecx = MEM32(ebp + -8);
    PUSH32(esp, MEM32(eax + ecx));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0047EED2u); RECOMP_ABI_CALL(0x0050E7B4u, sub_0050E7B4); /* call 0x0050E7B4 */

loc_0047EED2: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    eax = MEM32(ebp + -8);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax)); /* fmul dword ptr [eax] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + -28)); /* fmul dword ptr [ebp - 0x1c] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x587B98)); /* fmul dword ptr [0x587b98] */
    if (CMP_GE(_fas, _fbs)) goto loc_0047EF3A; /* jge: greater or equal (signed >=) */

loc_0047EEE4: ;
    eax = MEM32(ebp + -12);
    edx = MEM32(ebp + 0x10);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - edi;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = eax + edi * 4;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(ebp + -32) = ebx;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + ebx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0047EEF6: ;
    eax = MEM32(esi + 0x40C);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x19660D);
    _fb = (uint32_t)(0x3C6EF35F) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x3C6EF35F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x40C) = eax;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((2) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx = eax;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((2) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = eax;
    _fb = (uint32_t)(MEM32(esi + 0x408)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - MEM32(esi + 0x408);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esi + 0x408) = eax;
    MEM32(ebp + -40) = ebx;
    fp_push((double)SMEM32(ebp + -40)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + edx)); /* fmul dword ptr [ecx + edx] */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEMF(ecx) = (float)fp_top(); fp_pop(); /* fstp */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -32) = MEM32(ebp + -32) - 1;
    _fa = (uint32_t)(MEM32(ebp + -32)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0047EEF6; /* jne: not equal / not zero */

loc_0047EF3A: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + -8) = MEM32(ebp + -8) + 4;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_pop(); /* fstp st(0) */
    goto loc_0047EFB7;

loc_0047EF42: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0047EF48; /* jge: greater or equal (signed >=) */

loc_0047EF46: ;
    ebx = ecx;

loc_0047EF48: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0047EFBA; /* jge: greater or equal (signed >=) */

loc_0047EF4C: ;
    ecx = edx + edi * 4;
    edx = MEM32(ebp + 0x10);
    _fb = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - MEM32(ebp + -12);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - edi;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(ebp + -32) = ebx;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + ebx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0047EF5C: ;
    eax = MEM32(esi + 0x40C);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x19660D);
    _fb = (uint32_t)(0x3C6EF35F) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x3C6EF35F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x40C) = eax;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((2) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx = eax;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((2) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = eax;
    _fb = (uint32_t)(MEM32(esi + 0x408)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - MEM32(esi + 0x408);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esi + 0x408) = eax;
    eax = MEM32(ebp + -24);
    MEM32(ebp + -40) = ebx;
    ebx = MEM32(ebp + 8);
    eax = (uint32_t)(int32_t)SMEM16(eax + ebx * 2);
    fp_push((double)SMEM32(ebp + -40)); /* fild */
    MEM32(ebp + -40) = eax;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + -16)); /* fmul dword ptr [ebp - 0x10] */
    fp_top() = RECOMP_FP_PC(fp_top() + (double)SMEM32(ebp + -40)); /* fiadd dword ptr [ebp - 0x28] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx + ecx)); /* fmul dword ptr [edx + ecx] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + 0xC)); /* fmul dword ptr [ebp + 0xc] */
    MEMF(ecx) = (float)fp_top(); fp_pop(); /* fstp */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + 8) = MEM32(ebp + 8) + 1;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebp + -32) = MEM32(ebp + -32) - 1;
    _fa = (uint32_t)(MEM32(ebp + -32)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0047EF5C; /* jne: not equal / not zero */

loc_0047EFB7: ;
    edx = MEM32(ebp + -12);

loc_0047EFBA: ;
    ecx = MEM32(esi + 0x328);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0047EE97; /* jl: less (signed <) */

loc_0047EFC8: ;
    eax = MEM32(esi + 0x328);
    fp_push(MEMF(ebp + 0xC)); /* fld float */
    ebx = MEM32(ebp + 0x10);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebx + eax * 4 + -4)); /* fmul dword ptr [ebx + eax*4 - 4] */
    ecx = MEM32(esi + 0x60);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + -16)); /* fmul dword ptr [ebp - 0x10] */

loc_0047EFDE: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ecx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0047F01F; /* jge: greater or equal (signed >=) */

loc_0047EFE2: ;
    eax = MEM32(esi + 0x40C);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x19660D);
    _fb = (uint32_t)(0x3C6EF35F) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x3C6EF35F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x40C) = eax;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((2) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx = eax;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((2) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = eax;
    _fb = (uint32_t)(MEM32(esi + 0x408)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - MEM32(esi + 0x408);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esi + 0x408) = eax;
    MEM32(ebp + 0x10) = ebx;
    fp_push((double)SMEM32(ebp + 0x10)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEMF(edx + edi * 4) = (float)fp_top(); fp_pop(); /* fstp */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_0047EFDE;

loc_0047F01F: ;
    fp_pop(); /* fstp st(0) */

loc_0047F021: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
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
 * sub_0047F02A
 * Original: 0x0047F02A - 0x0047F030 (6 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047F02A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0047F02A: ;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(0x561210)); return; /* indirect tail jmp */

}

/**
 * sub_0047F030
 * Original: 0x0047F030 - 0x0047F051 (33 bytes, 15 insns)
 * Category: crt
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047F030(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0047F030: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x40 (8-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0047F04B; /* jae: above or equal (unsigned >=) */

loc_0047F035: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x20 (8-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0047F040; /* jae: above or equal (unsigned >=) */

loc_0047F03A: ;
    { uint32_t _c = (uint32_t)(LO8(ecx)) & 31u; if (_c && _c < 32u) { eax = (eax >> _c) | (edx << (32 - _c)); _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shrd result */ } }  /* shrd */
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((LO8(ecx)) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    esp += 4; return; /* ret */

loc_0047F040: ;
    eax = edx;
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((0x1F) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    SET_LO8(ecx, LO8(ecx) & 0x1F);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((LO8(ecx)) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    esp += 4; return; /* ret */

loc_0047F04B: ;
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((0x1F) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    eax = edx;
    esp += 4; return; /* ret */

}

/**
 * sub_0047F054
 * Original: 0x0047F054 - 0x0047F05E (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047F054(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0047F054: ;
    edx = 0x75EF98;
    g_seh_ebp = ebp; sub_0047B84F(); return; /* tail jmp 0x0047B84F */

}

/**
 * sub_0047F05E
 * Original: 0x0047F05E - 0x0047F068 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047F05E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0047F05E: ;
    edx = 0x75EF98;
    g_seh_ebp = ebp; sub_0047B7D4(); return; /* tail jmp 0x0047B7D4 */

}

/**
 * sub_0047F068
 * Original: 0x0047F068 - 0x0047F080 (24 bytes, 19 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047F068(void)
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

loc_0047F068: ;
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */

loc_0047F06A: ;
    fp_top() = recomp_fprem(fp_top(), fp_st1(), 0); /* fprem */
    /* wait - FPU sync */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    /* wait - FPU sync */
    _fb = (0) != 0; /* SAHF preserves OF */
    _fa = ((eax >> 8) & 0xD5u) | (_fb << 11); /* sahf */
    if ((_fa & 4u) /* sahf */) goto loc_0047F06A; /* jp: parity */

loc_0047F073: ;
    fp_st1() = fp_top(); fp_pop(); /* fstp st(1) */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0047F080
 * Original: 0x0047F080 - 0x0047F088 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047F080(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0047F080: ;
    ecx = ebp + -40;
    g_seh_ebp = ebp; sub_00014900(); return; /* tail jmp 0x00014900 */

}

/**
 * sub_0047F088
 * Original: 0x0047F088 - 0x0047F092 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047F088(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0047F088: ;
    eax = 0x64B470;
    g_seh_ebp = ebp; sub_00471D41(); return; /* tail jmp 0x00471D41 */

}

/**
 * sub_0047F092
 * Original: 0x0047F092 - 0x0047F09A (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047F092(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0047F092: ;
    ecx = ebp + -80;
    g_seh_ebp = ebp; sub_00014900(); return; /* tail jmp 0x00014900 */

}

/**
 * sub_0047F09A
 * Original: 0x0047F09A - 0x0047F0A2 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047F09A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0047F09A: ;
    ecx = ebp + -80;
    g_seh_ebp = ebp; sub_00014900(); return; /* tail jmp 0x00014900 */

}

/**
 * sub_0047F0A2
 * Original: 0x0047F0A2 - 0x0047F0AD (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047F0A2(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0047F0A2: ;
    ecx = ebp + -148;
    g_seh_ebp = ebp; sub_00014900(); return; /* tail jmp 0x00014900 */

}

/**
 * sub_0047F0AD
 * Original: 0x0047F0AD - 0x0047F0B7 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047F0AD(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0047F0AD: ;
    eax = 0x64B520;
    g_seh_ebp = ebp; sub_00471D41(); return; /* tail jmp 0x00471D41 */

}

/**
 * sub_0047F0B7
 * Original: 0x0047F0B7 - 0x0047F0BF (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047F0B7(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0047F0B7: ;
    ecx = MEM32(ebp + -16);
    g_seh_ebp = ebp; sub_0046E5D6(); return; /* tail jmp 0x0046E5D6 */

}

/**
 * sub_0047F0BF
 * Original: 0x0047F0BF - 0x0047F0C9 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047F0BF(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0047F0BF: ;
    eax = 0x64B494;
    g_seh_ebp = ebp; sub_00471D41(); return; /* tail jmp 0x00471D41 */

}

/**
 * sub_0047F0C9
 * Original: 0x0047F0C9 - 0x0047F0D1 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047F0C9(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0047F0C9: ;
    ecx = MEM32(ebp + -20);
    g_seh_ebp = ebp; sub_000A4960(); return; /* tail jmp 0x000A4960 */

}

/**
 * sub_0047F0D1
 * Original: 0x0047F0D1 - 0x0047F0DC (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047F0D1(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0047F0D1: ;
    ecx = MEM32(ebp + -20);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x18;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_00014900(); return; /* tail jmp 0x00014900 */

}

/**
 * sub_0047F0DC
 * Original: 0x0047F0DC - 0x0047F0E4 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047F0DC(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0047F0DC: ;
    ecx = ebp + -16;
    g_seh_ebp = ebp; sub_0046E3E7(); return; /* tail jmp 0x0046E3E7 */

}

/**
 * sub_0047F0E4
 * Original: 0x0047F0E4 - 0x0047F0EE (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047F0E4(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0047F0E4: ;
    eax = 0x64B554;
    g_seh_ebp = ebp; sub_00471D41(); return; /* tail jmp 0x00471D41 */

}

/**
 * sub_0047F0EE
 * Original: 0x0047F0EE - 0x0047F0F6 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047F0EE(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0047F0EE: ;
    ecx = MEM32(ebp + -16);
    g_seh_ebp = ebp; sub_000A4960(); return; /* tail jmp 0x000A4960 */

}

/**
 * sub_0047F0F6
 * Original: 0x0047F0F6 - 0x0047F100 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047F0F6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0047F0F6: ;
    eax = 0x64B578;
    g_seh_ebp = ebp; sub_00471D41(); return; /* tail jmp 0x00471D41 */

}

/**
 * sub_0047F100
 * Original: 0x0047F100 - 0x0047F108 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047F100(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0047F100: ;
    ecx = MEM32(ebp + -16);
    g_seh_ebp = ebp; sub_0046E3E7(); return; /* tail jmp 0x0046E3E7 */

}

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

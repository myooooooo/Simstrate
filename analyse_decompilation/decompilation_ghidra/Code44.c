/* Simstrat (FR).EXE - segment Code44 - 117 fonctions
   Decompile par Ghidra 11.2.1 (x86 16 bits, chargeur NE). */

/* ---- FUN_1158_0060 @ 1158:0060  (37 octets) ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1158_0060(int param_1)

{
  code *pcVar1;
  int in_AX;
  undefined2 unaff_CS;
  int in_stack_00000000;
  
  if (DAT_1160_1860 != (code *)0x0 || DAT_1160_1862 != 0) {
    in_AX = (*DAT_1160_1860)();
  }
  if (in_AX != 0) {
    FUN_1158_0097();
    return;
  }
  _DAT_1160_1870 = DAT_1160_1878;
  if ((in_stack_00000000 != 0 || param_1 != 0) && (param_1 != -1)) {
    param_1 = *(int *)0x0;
  }
  DAT_1160_1872 = in_stack_00000000;
  DAT_1160_1874 = param_1;
  if ((DAT_1160_189e != (code *)0x0) || (DAT_1160_1876 != 0)) {
    FUN_1158_0114();
  }
  if (DAT_1160_1872 != 0 || DAT_1160_1874 != 0) {
    FUN_1158_0132();
    FUN_1158_0132();
    FUN_1158_0132();
    MESSAGEBOX(unaff_CS,(char *)s_windows_1160_100f + 1,0,0,0x18a0);
  }
  if (DAT_1160_189e != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x1158010b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*DAT_1160_189e)();
    return;
  }
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  if ((int)((ulong)_DAT_1160_186c >> 0x10) != 0 || (int)_DAT_1160_186c != 0) {
    _DAT_1160_186c = 0;
    DAT_1160_1878 = 0;
    return;
  }
  return;
}



/* ---- FUN_1158_008f @ 1158:008f  (4 octets) ---- */

void FUN_1158_008f(void)

{
  FUN_1158_0097();
  return;
}



/* ---- FUN_1158_0093 @ 1158:0093  (4 octets) ---- */

/* WARNING: Removing unreachable block (ram,0x115800a0) */
/* WARNING: Removing unreachable block (ram,0x115800a5) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1158_0093(void)

{
  code *pcVar1;
  undefined2 in_AX;
  undefined2 unaff_CS;
  
  DAT_1160_1872 = 0;
  DAT_1160_1874 = 0;
  _DAT_1160_1870 = in_AX;
  if ((DAT_1160_189e != (code *)0x0) || (DAT_1160_1876 != 0)) {
    FUN_1158_0114();
  }
  if (DAT_1160_1872 != 0 || DAT_1160_1874 != 0) {
    FUN_1158_0132();
    FUN_1158_0132();
    FUN_1158_0132();
    MESSAGEBOX(unaff_CS,(char *)s_windows_1160_100f + 1,0,0,0x18a0,0x1160);
  }
  if (DAT_1160_189e == (code *)0x0) {
    pcVar1 = (code *)swi(0x21);
    (*pcVar1)();
    if ((int)((ulong)_DAT_1160_186c >> 0x10) == 0 && (int)_DAT_1160_186c == 0) {
      return;
    }
    _DAT_1160_186c = 0;
    DAT_1160_1878 = 0;
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x1158010b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_1160_189e)();
  return;
}



/* ---- FUN_1158_0097 @ 1158:0097  (125 octets) ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1158_0097(void)

{
  code *pcVar1;
  undefined2 in_AX;
  int in_CX;
  int in_BX;
  undefined2 unaff_CS;
  
  if ((in_CX != 0 || in_BX != 0) && (in_BX != -1)) {
    in_BX = *(int *)0x0;
  }
  _DAT_1160_1870 = in_AX;
  DAT_1160_1872 = in_CX;
  DAT_1160_1874 = in_BX;
  if ((DAT_1160_189e != (code *)0x0) || (DAT_1160_1876 != 0)) {
    FUN_1158_0114();
  }
  if (DAT_1160_1872 != 0 || DAT_1160_1874 != 0) {
    FUN_1158_0132();
    FUN_1158_0132();
    FUN_1158_0132();
    MESSAGEBOX(unaff_CS,(char *)s_windows_1160_100f + 1,0,0,0x18a0,0x1160);
  }
  if (DAT_1160_189e != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x1158010b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*DAT_1160_189e)();
    return;
  }
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  if ((int)((ulong)_DAT_1160_186c >> 0x10) != 0 || (int)_DAT_1160_186c != 0) {
    _DAT_1160_186c = 0;
    DAT_1160_1878 = 0;
    return;
  }
  return;
}



/* ---- FUN_1158_0114 @ 1158:0114  (30 octets) ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16near FUN_1158_0114(void)

{
  if ((int)((ulong)_DAT_1160_186c >> 0x10) != 0 || (int)_DAT_1160_186c != 0) {
    _DAT_1160_186c = 0;
    DAT_1160_1878 = 0;
    return;
  }
  return;
}



/* ---- FUN_1158_0132 @ 1158:0132  (23 octets) ---- */

void __cdecl16near FUN_1158_0132(void)

{
  uint in_AX;
  uint uVar1;
  uint in_CX;
  byte bVar2;
  byte *in_BX;
  char cVar3;
  
  do {
    uVar1 = in_AX / in_CX;
    cVar3 = (char)(in_AX % in_CX);
    bVar2 = cVar3 + 0x30;
    if (0x39 < bVar2) {
      bVar2 = cVar3 + 0x37;
    }
    in_BX = in_BX + -1;
    *in_BX = bVar2;
    in_AX = uVar1;
  } while (uVar1 != 0);
  return;
}



/* ---- FUN_1158_0182 @ 1158:0182  (26 octets) ---- */

void __stdcall16far FUN_1158_0182(void)

{
  int unaff_BP;
  undefined in_CF;
  
  FUN_1158_021f(0x1160,unaff_BP + 1);
  if (!(bool)in_CF) {
    return;
  }
  FUN_1158_0060();
  return;
}



/* ---- FUN_1158_019c @ 1158:019c  (32 octets) ---- */

void __stdcall16far FUN_1158_019c(void)

{
  int unaff_BP;
  undefined in_CF;
  
  FUN_1158_033c(0x1160,unaff_BP + 1);
  if (!(bool)in_CF) {
    return;
  }
  FUN_1158_0060();
  return;
}



/* ---- FUN_1158_021f @ 1158:021f  (104 octets) ---- */

void __cdecl16near FUN_1158_021f(void)

{
  uint in_AX;
  uint uVar1;
  undefined uVar2;
  
  if (in_AX != 0) {
    DAT_1160_2ea8 = in_AX;
    if (DAT_1160_1880 != (code *)0x0 || DAT_1160_1882 != 0) {
      (*DAT_1160_1880)();
    }
    do {
      uVar2 = in_AX < DAT_1160_1896;
      if ((bool)uVar2) {
        FUN_1158_02a1();
        if (!(bool)uVar2) {
          return;
        }
        FUN_1158_0287();
LAB_1158_0266:
        if (!(bool)uVar2) {
          return;
        }
      }
      else {
        FUN_1158_0287();
        if (!(bool)uVar2) {
          return;
        }
        if ((DAT_1160_1896 != 0) &&
           (uVar2 = DAT_1160_2ea8 < DAT_1160_1898 - 0xcU, DAT_1160_2ea8 <= DAT_1160_1898 - 0xcU)) {
          FUN_1158_02a1();
          goto LAB_1158_0266;
        }
      }
      uVar1 = (uint)DAT_1160_1884 | DAT_1160_1886;
      if (uVar1 != 0) {
        uVar1 = (*DAT_1160_1884)();
      }
      in_AX = DAT_1160_2ea8;
    } while (1 < uVar1);
  }
  return;
}



/* ---- FUN_1158_0287 @ 1158:0287  (26 octets) ---- */

void __cdecl16near FUN_1158_0287(void)

{
  undefined2 in_AX;
  int iVar1;
  undefined2 unaff_CS;
  undefined2 uVar2;
  
  uVar2 = DAT_1160_189a;
  iVar1 = GLOBALALLOC(unaff_CS,in_AX,0);
  if (iVar1 != 0) {
    GLOBALLOCK(0x14d0,iVar1,uVar2);
  }
  return;
}



/* ---- FUN_1158_02a1 @ 1158:02a1  (46 octets) ---- */

undefined2 __cdecl16near FUN_1158_02a1(void)

{
  uint uVar1;
  undefined2 uVar2;
  undefined2 in_BX;
  uint unaff_ES;
  bool bVar3;
  
  bVar3 = false;
  uVar1 = DAT_1160_1894;
  if (DAT_1160_1894 != 0) {
    do {
      unaff_ES = uVar1;
      FUN_1158_030b();
      if (!bVar3) {
        DAT_1160_1894 = unaff_ES;
        return in_BX;
      }
      uVar1 = *(uint *)0xa;
      bVar3 = uVar1 < DAT_1160_1894;
    } while (uVar1 != DAT_1160_1894);
  }
  uVar2 = FUN_1158_02cf();
  if (!bVar3) {
    uVar2 = in_BX;
    FUN_1158_030b();
    DAT_1160_1894 = unaff_ES;
  }
  return uVar2;
}



/* ---- FUN_1158_02cf @ 1158:02cf  (60 octets) ---- */

undefined2 __cdecl16near FUN_1158_02cf(void)

{
  undefined2 in_AX;
  int iVar1;
  undefined2 uVar2;
  undefined2 extraout_DX;
  undefined in_CF;
  
  FUN_1158_0287();
  if (!(bool)in_CF) {
    *(undefined2 *)0x0 = 0x5054;
    *(undefined2 *)0x2 = 0;
    *(undefined2 *)0x4 = 0xc;
    *(undefined2 *)0x6 = 0;
    iVar1 = DAT_1160_1898 + -0xc;
    *(int *)0x8 = iVar1;
    uVar2 = extraout_DX;
    if (DAT_1160_1894 != 0) {
      LOCK();
      uVar2 = *(undefined2 *)0xa;
      *(undefined2 *)0xa = extraout_DX;
      UNLOCK();
    }
    *(undefined2 *)0xa = uVar2;
    *(undefined2 *)0xc = 0;
    *(int *)0xe = iVar1;
  }
  return in_AX;
}



/* ---- FUN_1158_030b @ 1158:030b  (49 octets) ---- */

void __cdecl16near FUN_1158_030b(void)

{
  int *piVar1;
  uint in_AX;
  int iVar2;
  int *piVar3;
  int *piVar4;
  undefined2 unaff_ES;
  
  piVar1 = (int *)0x4;
  do {
    piVar3 = piVar1;
    piVar1 = (int *)*piVar3;
    if (piVar1 == (int *)0x0) {
      return;
    }
    iVar2 = piVar1[1] - in_AX;
  } while ((uint)piVar1[1] < in_AX);
  piVar4 = (int *)*piVar1;
  if (iVar2 != 0) {
    piVar4 = (int *)((int)piVar1 + in_AX);
    *piVar4 = *piVar1;
    piVar4[1] = iVar2;
  }
  *piVar3 = (int)piVar4;
  *(int *)0x8 = *(int *)0x8 - in_AX;
  return;
}



/* ---- FUN_1158_033c @ 1158:033c  (170 octets) ---- */

void __cdecl16near FUN_1158_033c(void)

{
  int in_AX;
  uint uVar1;
  int iVar2;
  uint *in_CX;
  int in_BX;
  uint *puVar3;
  uint *puVar4;
  
  if (in_AX == 0) {
    return;
  }
  if (in_CX != (uint *)0x0) {
    uVar1 = in_AX + 3U & 0xfffc;
    if (*(int *)0x0 != 0x5054) {
      return;
    }
    if (((uint)in_CX & 3) != 0) {
      return;
    }
    if (DAT_1160_1880 != (code *)0x0 || DAT_1160_1882 != 0) {
      (*DAT_1160_1880)();
    }
    puVar4 = (uint *)0x4;
    do {
      puVar3 = puVar4;
      puVar4 = (uint *)*puVar3;
      if (puVar4 == (uint *)0x0) goto LAB_1158_037f;
    } while (puVar4 < in_CX);
    if (in_CX == puVar4) {
      return;
    }
LAB_1158_037f:
    *in_CX = (uint)puVar4;
    in_CX[1] = uVar1;
    iVar2 = *(int *)0x8;
    *(int *)0x8 = uVar1 + iVar2;
    if (uVar1 + iVar2 + 0xc != DAT_1160_1898) {
      FUN_1158_03a0();
      *puVar3 = (uint)in_CX;
      puVar4 = (uint *)((int)puVar3 + puVar3[1]);
      if (puVar4 != (uint *)*puVar3) {
        return;
      }
      *puVar3 = *puVar4;
      puVar3[1] = puVar3[1] + puVar4[1];
      return;
    }
    iVar2 = DAT_1160_1894;
    DAT_1160_1894 = 0;
    if (in_BX != *(int *)0xa) {
      do {
        DAT_1160_1894 = iVar2;
        iVar2 = *(int *)0xa;
      } while (*(int *)0xa != in_BX);
      *(int *)0xa = *(int *)0xa;
    }
  }
  if ((in_BX != 0x1160) && (iVar2 = GLOBALHANDLE(), iVar2 != 0)) {
    GLOBALUNLOCK(0x14d0,iVar2,iVar2,in_BX);
    GLOBALFREE(0x14d0);
    return;
  }
  return;
}



/* ---- FUN_1158_03a0 @ 1158:03a0  (27 octets) ---- */

void __cdecl16near FUN_1158_03a0(void)

{
  int *in_BX;
  int *piVar1;
  undefined2 unaff_ES;
  
  piVar1 = (int *)((int)in_BX + in_BX[1]);
  if (piVar1 == (int *)*in_BX) {
    *in_BX = *piVar1;
    in_BX[1] = in_BX[1] + piVar1[1];
  }
  return;
}



/* ---- FUN_1158_0408 @ 1158:0408  (14 octets) ---- */

void __cdecl16far FUN_1158_0408(void)

{
  if (DAT_1160_1878 == 0) {
    return;
  }
  FUN_1158_0060();
  return;
}



/* ---- FUN_1158_0416 @ 1158:0416  (34 octets) ---- */

void __cdecl16far FUN_1158_0416(void)

{
  uint in_AX;
  int in_DX;
  uint *unaff_DI;
  undefined2 in_stack_00000002;
  
  if ((((int)unaff_DI[1] < in_DX) || (((int)unaff_DI[1] <= in_DX && (*unaff_DI <= in_AX)))) &&
     ((in_DX < (int)unaff_DI[3] || ((in_DX <= (int)unaff_DI[3] && (in_AX <= unaff_DI[2])))))) {
    return;
  }
  FUN_1158_0060();
  return;
}



/* ---- FUN_1158_0438 @ 1158:0438  (6 octets) ---- */

void FUN_1158_0438(void)

{
  FUN_1158_0060();
  return;
}



/* ---- FUN_1158_043e @ 1158:043e  (6 octets) ---- */

void FUN_1158_043e(void)

{
  FUN_1158_0060();
  return;
}



/* ---- FUN_1158_0444 @ 1158:0444  (36 octets) ---- */

void __cdecl16far FUN_1158_0444(void)

{
  uint in_AX;
  uint uVar1;
  undefined2 unaff_SS;
  
  if (((in_AX < 0xfc00) && ((undefined *)(in_AX + 0x400) < &stack0x0000)) &&
     (uVar1 = -((int)(in_AX + 0x400) - (int)&stack0x0000), *(uint *)0xa <= uVar1)) {
    if (uVar1 < *(uint *)0xc) {
      *(uint *)0xc = uVar1;
    }
    return;
  }
  FUN_1158_008f();
  return;
}



/* ---- FUN_1158_04af @ 1158:04af  (74 octets) ---- */

undefined2 FUN_1158_04af(void)

{
  undefined2 uVar1;
  undefined2 in_AX;
  unkuint10 in_ST0;
  longdouble in_ST1;
  undefined auStack_16 [4];
  int iStack_12;
  uint uStack_10;
  uint uStack_6;
  uint uStack_4;
  
  while( true ) {
    if ('\0' < DAT_1160_189c) {
      return in_AX;
    }
    _auStack_16 = in_ST1;
    if (DAT_1160_189c != '\0') break;
    DAT_1160_189c = '\x01';
    if (FUN_1158_04af != (code)0xcd) {
      DAT_1160_189c =
           (char)(((uint)(dRam116018dc - (dRam116018dc / dRam116018e4) * dRam116018e4 < dRam116018ec
                         ) << 8) >> 7) + -1;
      uVar1 = FUN_1158_04b2();
      return uVar1;
    }
  }
  do {
    uStack_4 = (uint)(in_ST0 >> 0x40);
    if (CARRY2(uStack_10,uStack_10)) {
      return in_AX;
    }
    if (((auStack_16._0_2_ == 0 && auStack_16._2_2_ == 0) && iStack_12 == 0) && uStack_10 == 0) {
      return in_AX;
    }
    if (((unkuint10)_auStack_16 & 0x7fff) != 0) {
      return in_AX;
    }
    uStack_6 = (uint)(in_ST0 >> 0x30);
    if ((in_ST0 & 0x7fff) == 0) {
      if (CARRY2(uStack_6,uStack_6)) {
        return in_AX;
      }
    }
    else {
      if ((uStack_4 & 0x7fff) == 0x7fff) {
        return in_AX;
      }
      if (!CARRY2(uStack_6,uStack_6)) {
        return in_AX;
      }
    }
    _auStack_16 = in_ST1 * (longdouble)DAT_1160_18d8;
  } while( true );
}



/* ---- FUN_1158_04b2 @ 1158:04b2  (193 octets) ---- */

undefined2 __cdecl16far FUN_1158_04b2(void)

{
  undefined2 uVar1;
  undefined2 in_AX;
  longdouble in_ST0;
  unkuint10 in_ST1;
  undefined local_16 [4];
  int iStack_12;
  uint uStack_10;
  uint uStack_6;
  uint uStack_4;
  
  while( true ) {
    if ('\0' < DAT_1160_189c) {
      return in_AX;
    }
    _local_16 = in_ST0;
    if (DAT_1160_189c != '\0') break;
    DAT_1160_189c = '\x01';
    if (FUN_1158_04af != (code)0xcd) {
      DAT_1160_189c =
           (char)(((uint)(dRam116018dc - (dRam116018dc / dRam116018e4) * dRam116018e4 < dRam116018ec
                         ) << 8) >> 7) + -1;
      uVar1 = FUN_1158_04b2();
      return uVar1;
    }
  }
  do {
    uStack_4 = (uint)(in_ST1 >> 0x40);
    if (CARRY2(uStack_10,uStack_10)) {
      return in_AX;
    }
    if (((local_16._0_2_ == 0 && local_16._2_2_ == 0) && iStack_12 == 0) && uStack_10 == 0) {
      return in_AX;
    }
    if (((unkuint10)_local_16 & 0x7fff) != 0) {
      return in_AX;
    }
    uStack_6 = (uint)(in_ST1 >> 0x30);
    if ((in_ST1 & 0x7fff) == 0) {
      if (CARRY2(uStack_6,uStack_6)) {
        return in_AX;
      }
    }
    else {
      if ((uStack_4 & 0x7fff) == 0x7fff) {
        return in_AX;
      }
      if (!CARRY2(uStack_6,uStack_6)) {
        return in_AX;
      }
    }
    _local_16 = in_ST0 * (longdouble)DAT_1160_18d8;
  } while( true );
}



/* ---- FUN_1158_060e @ 1158:060e  (452 octets) ---- */

/* WARNING: Removing unreachable block (ram,0x115806ba) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16near FUN_1158_060e(void)

{
  undefined2 *puVar1;
  undefined *puVar2;
  byte bVar3;
  undefined uVar4;
  int in_CX;
  int extraout_DX;
  int iVar5;
  int extraout_DX_00;
  int extraout_DX_01;
  int extraout_DX_02;
  uint *puVar6;
  uint uVar7;
  undefined2 *unaff_DI;
  undefined *puVar8;
  undefined2 *puVar9;
  undefined2 unaff_ES;
  undefined2 unaff_SS;
  unkuint10 in_ST0;
  uint local_2a [9];
  byte local_17;
  undefined local_16 [8];
  uint uStack_e;
  uint local_c;
  uint local_a;
  int local_8;
  uint local_6;
  
  if (0x12 < in_CX) {
    in_CX = 0x12;
  }
  if (in_CX < -0x12) {
    in_CX = -0x12;
  }
  uStack_e = (uint)(in_ST0 >> 0x40);
  local_c = uStack_e;
  local_a = uStack_e & 0x7fff;
  local_8 = in_CX;
  if ((in_ST0 & 0x7fff) == 0) {
    local_2a[0] = local_2a[0] & 0xff00;
    _local_16 = (longdouble)in_ST0;
  }
  else {
    if (local_a == 0x7fff) {
      local_16._6_2_ = (undefined2)(in_ST0 >> 0x30);
      if (local_16._6_2_ != -0x8000) {
        *unaff_DI = 0x414e;
        *(undefined *)(unaff_DI + 1) = 0x4e;
        return;
      }
      if ((int)uStack_e < 0) {
        puVar1 = unaff_DI;
        unaff_DI = (undefined2 *)((int)unaff_DI + 1);
        *(undefined *)puVar1 = 0x2d;
      }
      *unaff_DI = 0x4e49;
      *(undefined *)(unaff_DI + 1) = 0x46;
      return;
    }
    _local_16 = (longdouble)CONCAT28(local_a,SUB108(in_ST0,0));
    local_a = (uint)((ulong)((long)(int)(local_a + 0xc001) * 0x4d10) >> 0x10);
    FUN_1158_0898();
    _local_16 = ROUND(_local_16);
    local_6 = (uint)(_DAT_1158_05f8 < _local_16) << 8 |
              (uint)(NAN(_DAT_1158_05f8) || NAN(_local_16)) << 10 |
              (uint)(_DAT_1158_05f8 == _local_16) << 0xe;
    if (_DAT_1158_05f8 < _local_16 || (_DAT_1158_05f8 == _local_16) != 0) {
      _local_16 = _local_16 / (longdouble)10;
      local_a = local_a + 1;
    }
    _local_16 = (longdouble)to_bcd(_local_16);
    puVar6 = local_2a;
    iVar5 = 9;
    do {
      *puVar6 = (CONCAT11(local_16[iVar5 + -1],(byte)local_16[iVar5 + -1] >> 4) & 0xfff) + 0x3030;
      puVar6 = puVar6 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    *puVar6 = 0;
                    /* WARNING: Read-only address (ram,0x115805f8) is written */
    if ((-1 < local_8) && (0x23 < (int)local_a)) {
      local_8 = -0x12;
    }
    if (local_8 < 0) {
      uVar7 = -local_8;
    }
    else {
      uVar7 = local_8 + local_a + 1;
      if ((int)uVar7 < 0) {
        local_2a[0] = local_2a[0] & 0xff00;
        goto LAB_1158_073d;
      }
    }
    if ((uVar7 < 0x12) &&
       (bVar3 = *(byte *)((int)local_2a + uVar7), *(undefined *)((int)local_2a + uVar7) = 0,
       0x34 < bVar3)) {
      while (-1 < (int)(uVar7 - 1)) {
        (&stack0xffd5)[uVar7] = (&stack0xffd5)[uVar7] + '\x01';
        if ((byte)(&stack0xffd5)[uVar7] < 0x3a) goto LAB_1158_073d;
        (&stack0xffd5)[uVar7] = 0;
        uVar7 = uVar7 - 1;
      }
      local_2a[0] = 0x31;
      local_a = local_a + 1;
    }
  }
LAB_1158_073d:
  if (local_8 < 0) {
    uVar4 = 0x20;
    if ((int)local_c < 0) {
      uVar4 = 0x2d;
    }
    *(undefined *)unaff_DI = uVar4;
    uVar4 = FUN_1158_07d2();
    puVar9 = unaff_DI + 1;
    *(undefined *)((int)unaff_DI + 1) = uVar4;
    if (extraout_DX_01 != -1) {
      puVar1 = puVar9;
      puVar9 = (undefined2 *)((int)unaff_DI + 3);
      *(undefined *)puVar1 = 0x2e;
      do {
        uVar4 = FUN_1158_07d2();
        puVar1 = puVar9;
        puVar9 = (undefined2 *)((int)puVar9 + 1);
        *(undefined *)puVar1 = uVar4;
      } while (extraout_DX_02 != -1);
    }
    *(undefined *)puVar9 = 0x45;
    uVar4 = 0x2b;
    if ((int)local_a < 0) {
      uVar4 = 0x2d;
      local_a = -local_a;
    }
    *(undefined *)((int)puVar9 + 1) = uVar4;
    uVar7 = (uint)(char)(local_a / 100);
    puVar9[1] = CONCAT11((char)(uVar7 % 10),(char)(uVar7 / 10)) + 0x3030;
    uVar7 = (uint)(char)(local_a % 100);
    puVar9[2] = CONCAT11((char)(uVar7 % 10),(char)(uVar7 / 10)) + 0x3030;
  }
  else {
    if ((int)local_c < 0) {
      puVar1 = unaff_DI;
      unaff_DI = (undefined2 *)((int)unaff_DI + 1);
      *(undefined *)puVar1 = 0x2d;
    }
    uVar7 = local_a;
    if ((int)local_a < 0) {
      puVar1 = unaff_DI;
      unaff_DI = (undefined2 *)((int)unaff_DI + 1);
      *(undefined *)puVar1 = 0x30;
      iVar5 = local_8;
    }
    else {
      do {
        uVar4 = FUN_1158_07d2();
        puVar1 = unaff_DI;
        unaff_DI = (undefined2 *)((int)unaff_DI + 1);
        *(undefined *)puVar1 = uVar4;
        uVar7 = uVar7 - 1;
        iVar5 = extraout_DX;
      } while (-1 < (int)uVar7);
    }
    if (iVar5 != 0) {
      puVar8 = (undefined *)((int)unaff_DI + 1);
      *(undefined *)unaff_DI = 0x2e;
      do {
        uVar7 = uVar7 + 1;
        if (uVar7 == 0) break;
        puVar2 = puVar8;
        puVar8 = puVar8 + 1;
        *puVar2 = 0x30;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
      while (-1 < iVar5 + -1) {
        uVar4 = FUN_1158_07d2();
        puVar2 = puVar8;
        puVar8 = puVar8 + 1;
        *puVar2 = uVar4;
        iVar5 = extraout_DX_00;
      }
    }
  }
                    /* WARNING: Read-only address (ram,0x115805f8) is written */
  return;
}



/* ---- FUN_1158_07d2 @ 1158:07d2  (12 octets) ---- */

char __cdecl16near FUN_1158_07d2(void)

{
  char cVar1;
  int unaff_BP;
  int unaff_SI;
  undefined2 unaff_SS;
  
  cVar1 = *(char *)(unaff_BP + unaff_SI + -0x28);
  if (cVar1 == '\0') {
    cVar1 = '0';
  }
  return cVar1;
}



/* ---- FUN_1158_07de @ 1158:07de  (153 octets) ---- */

void __cdecl16near FUN_1158_07de(void)

{
  byte bVar1;
  int in_CX;
  int iVar2;
  byte *unaff_DI;
  undefined2 unaff_ES;
  bool bVar3;
  undefined4 uVar4;
  int iVar5;
  
  if (in_CX != 0) {
    bVar1 = *unaff_DI;
    if (((bVar1 == 0x20) || (bVar1 == 0x2b)) || (bVar1 == 0x2d)) {
      unaff_DI = unaff_DI + 1;
      in_CX = in_CX + -1;
    }
    iVar5 = in_CX;
    FUN_1158_0877();
    iVar2 = 0;
    if ((in_CX != 0) && (*unaff_DI == 0x2e)) {
      unaff_DI = unaff_DI + 1;
      in_CX = in_CX + -1;
      FUN_1158_0877();
      iVar2 = -iVar2;
    }
    if (iVar5 != in_CX) {
      if (in_CX != 0) {
        bVar1 = *unaff_DI;
        bVar3 = bVar1 < 0x45;
        if ((bVar1 == 0x45) || (bVar3 = bVar1 < 0x65, bVar1 == 0x65)) {
          uVar4 = FUN_1158_1d09(iVar2);
          iVar5 = (int)uVar4;
          if (bVar3) {
            return;
          }
          if ((int)((ulong)uVar4 >> 0x10) != iVar5 >> 0xf) {
            return;
          }
          if (0x1386 < iVar5) {
            return;
          }
          if (iVar5 < -0x1386) {
            return;
          }
        }
      }
      FUN_1158_0898();
    }
  }
  return;
}



/* ---- FUN_1158_0877 @ 1158:0877  (33 octets) ---- */

void __cdecl16near FUN_1158_0877(void)

{
  int in_CX;
  int unaff_BP;
  char *unaff_DI;
  undefined2 unaff_ES;
  undefined2 unaff_SS;
  
  for (; (in_CX != 0 && (0xf5 < (byte)(*unaff_DI - 0x3aU))); unaff_DI = unaff_DI + 1) {
    *(int *)(unaff_BP + -4) = (int)(char)(*unaff_DI + -0x30);
    in_CX = in_CX + -1;
  }
  return;
}



/* ---- FUN_1158_0898 @ 1158:0898  (102 octets) ---- */

void __cdecl16near FUN_1158_0898(void)

{
  uint in_AX;
  int iVar1;
  uint uVar2;
  
  if (0x1000 < (int)in_AX) {
    in_AX = in_AX - 0x1000;
  }
  if ((int)in_AX < -0x1000) {
    iVar1 = FUN_1158_04b2();
    in_AX = iVar1 + 0x1000;
  }
  if (in_AX != 0) {
    uVar2 = in_AX;
    if ((int)in_AX < 0) {
      uVar2 = -in_AX;
    }
    for (uVar2 = uVar2 >> 3; uVar2 != 0; uVar2 = uVar2 >> 1) {
    }
    if (-1 < (int)in_AX) {
      return;
    }
    FUN_1158_04b2();
  }
  return;
}



/* ---- FUN_1158_08fe @ 1158:08fe  (78 octets) ---- */

void __cdecl16near FUN_1158_08fe(void)

{
  byte bVar1;
  int unaff_DI;
  undefined2 unaff_ES;
  
  *(undefined2 *)(unaff_DI + 0x12) = 0;
  FUN_1158_094c();
  FUN_1158_094c();
  FUN_1158_094c();
  bVar1 = FUN_1158_094c();
  *(int *)(unaff_DI + 0x10) = CONCAT11(bVar1 % 10,bVar1 / 10) + 0x3030;
  return;
}



/* ---- FUN_1158_094c @ 1158:094c  (28 octets) ---- */

undefined4 __cdecl16near FUN_1158_094c(void)

{
  byte bVar1;
  undefined2 in_AX;
  byte bVar5;
  int iVar2;
  int iVar3;
  undefined2 uVar4;
  uint in_DX;
  undefined2 *unaff_DI;
  undefined2 unaff_ES;
  
  bVar1 = (byte)(in_DX / 100);
  bVar5 = (byte)(in_DX % 100);
  iVar2 = CONCAT11(bVar1 / 10,bVar1 % 10) + 0x3030;
  iVar3 = CONCAT11(bVar5 / 10,bVar5 % 10) + 0x3030;
  uVar4 = CONCAT11((char)iVar3,(char)((uint)iVar3 >> 8));
  *unaff_DI = uVar4;
  unaff_DI[1] = CONCAT11((char)iVar2,(char)((uint)iVar2 >> 8));
  return CONCAT22(uVar4,in_AX);
}



/* ---- FUN_1158_09f5 @ 1158:09f5  (83 octets) ---- */

void __stdcall16far FUN_1158_09f5(undefined4 param_1)

{
  int iVar1;
  int unaff_BP;
  int iVar2;
  int iVar3;
  undefined2 uVar4;
  bool bVar5;
  undefined2 uVar6;
  
  iVar2 = unaff_BP + 1;
  uVar6 = 0x1160;
  uVar4 = (undefined2)((ulong)param_1 >> 0x10);
  iVar3 = (int)param_1;
  iVar1 = *(int *)(iVar3 + 2);
  if ((iVar1 == -0x284f) || (iVar1 == -0x284e)) {
    FUN_1158_0a4f(iVar3,uVar4);
  }
  else if (iVar1 != -0x2850) {
    DAT_1160_1878 = 0x66;
    return;
  }
  bVar5 = true;
  *(undefined2 *)(iVar3 + 2) = 0xd7b2;
  *(undefined2 *)(iVar3 + 8) = 0;
  *(undefined2 *)(iVar3 + 10) = 0;
  FUN_1158_0a90(uVar6,iVar2);
  if (!bVar5) {
    *(undefined2 *)(iVar3 + 2) = 0xd7b0;
  }
  return;
}



/* ---- FUN_1158_0a4f @ 1158:0a4f  (65 octets) ---- */

void __stdcall16far FUN_1158_0a4f(undefined4 param_1)

{
  char cVar1;
  int unaff_BP;
  int iVar2;
  undefined2 uVar3;
  
  cVar1 = '\x01';
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  iVar2 = (int)param_1;
  if (*(int *)(iVar2 + 2) != -0x284f) {
    if (*(int *)(iVar2 + 2) != -0x284e) {
      DAT_1160_1878 = 0x67;
      return;
    }
    cVar1 = '\x01';
    FUN_1158_0a90(1,0x1160,unaff_BP + 1);
  }
  if (cVar1 != '\0') {
    FUN_1158_0a90();
    *(undefined2 *)(iVar2 + 2) = 0xd7b0;
  }
  return;
}



/* ---- FUN_1158_0a90 @ 1158:0a90  (17 octets) ---- */

void __cdecl16near FUN_1158_0a90(void)

{
  int iVar1;
  int in_BX;
  int unaff_DI;
  
  iVar1 = (*(code *)*(undefined2 *)(in_BX + unaff_DI))();
  if (iVar1 != 0) {
    DAT_1160_1878 = iVar1;
  }
  return;
}



/* ---- FUN_1158_0b8d @ 1158:0b8d  (79 octets) ---- */

void __cdecl16near FUN_1158_0b8d(void)

{
  undefined *puVar1;
  undefined4 uVar2;
  uint uVar3;
  uint in_DX;
  int in_BX;
  int iVar4;
  undefined *puVar5;
  undefined2 unaff_ES;
  bool bVar6;
  
  if (DAT_1160_1878 == 0) {
    if (*(int *)(in_BX + 2) != -0x284e) {
      DAT_1160_1878 = 0x69;
      return;
    }
    do {
      uVar3 = *(int *)(in_BX + 4) - *(int *)(in_BX + 8);
      bVar6 = in_DX < uVar3;
      in_DX = in_DX - uVar3;
      if (bVar6) {
        uVar3 = uVar3 + in_DX;
        in_DX = 0;
      }
      uVar2 = *(undefined4 *)(in_BX + 0xc);
      iVar4 = (int)uVar2;
      puVar5 = (undefined *)(*(int *)(in_BX + 8) + iVar4);
      for (; uVar3 != 0; uVar3 = uVar3 - 1) {
        puVar1 = puVar5;
        puVar5 = puVar5 + 1;
        *puVar1 = 0x20;
      }
      iVar4 = (int)puVar5 - iVar4;
      *(int *)(in_BX + 8) = iVar4;
      if (iVar4 == *(int *)(in_BX + 4)) {
        FUN_1158_0cbe();
      }
    } while (in_DX != 0);
  }
  return;
}



/* ---- FUN_1158_0bdc @ 1158:0bdc  (87 octets) ---- */

void __cdecl16near FUN_1158_0bdc(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  uint in_AX;
  uint uVar4;
  undefined2 in_DX;
  int in_BX;
  int iVar5;
  undefined *unaff_SI;
  undefined *puVar6;
  undefined2 unaff_ES;
  bool bVar7;
  
  if (DAT_1160_1878 == 0) {
    if (*(int *)(in_BX + 2) != -0x284e) {
      DAT_1160_1878 = 0x69;
      return;
    }
    do {
      uVar4 = *(int *)(in_BX + 4) - *(int *)(in_BX + 8);
      bVar7 = in_AX < uVar4;
      in_AX = in_AX - uVar4;
      if (bVar7) {
        uVar4 = uVar4 + in_AX;
        in_AX = 0;
      }
      uVar3 = *(undefined4 *)(in_BX + 0xc);
      iVar5 = (int)uVar3;
      puVar6 = (undefined *)(*(int *)(in_BX + 8) + iVar5);
      for (; uVar4 != 0; uVar4 = uVar4 - 1) {
        puVar2 = puVar6;
        puVar6 = puVar6 + 1;
        puVar1 = unaff_SI;
        unaff_SI = unaff_SI + 1;
        *puVar2 = *puVar1;
      }
      iVar5 = (int)puVar6 - iVar5;
      *(int *)(in_BX + 8) = iVar5;
      if (iVar5 == *(int *)(in_BX + 4)) {
        FUN_1158_0cbe();
      }
    } while (in_AX != 0);
  }
  return;
}



/* ---- FUN_1158_0c78 @ 1158:0c78  (38 octets) ---- */

void __stdcall16far FUN_1158_0c78(undefined4 param_1)

{
  int iVar1;
  int unaff_BP;
  bool bVar2;
  
  bVar2 = unaff_BP + 1 == 0;
  iVar1 = (int)param_1;
  FUN_1158_0bdc(0x1160,unaff_BP + 1);
  if ((bVar2) && (*(int *)(iVar1 + 0x1a) != 0)) {
    FUN_1158_0ccc();
  }
  return;
}



/* ---- FUN_1158_0cbe @ 1158:0cbe  (14 octets) ---- */

void __cdecl16near FUN_1158_0cbe(void)

{
  int iVar1;
  int in_BX;
  
  iVar1 = (*(code *)*(undefined2 *)(in_BX + 0x14))();
  if (iVar1 != 0) {
    DAT_1160_1878 = iVar1;
  }
  return;
}



/* ---- FUN_1158_0ccc @ 1158:0ccc  (14 octets) ---- */

void __cdecl16near FUN_1158_0ccc(void)

{
  int iVar1;
  int in_BX;
  
  iVar1 = (*(code *)*(undefined2 *)(in_BX + 0x18))();
  if (iVar1 != 0) {
    DAT_1160_1878 = iVar1;
  }
  return;
}



/* ---- FUN_1158_0d25 @ 1158:0d25  (80 octets) ---- */

void __stdcall16far FUN_1158_0d25(int param_1,undefined param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int unaff_BP;
  undefined2 uVar4;
  
  uVar4 = (undefined2)((ulong)param_3 >> 0x10);
  iVar3 = (int)param_3;
  if (1 < param_1) {
    FUN_1158_0b8d(0x1160,unaff_BP + 1);
  }
  if (DAT_1160_1878 == 0) {
    if (*(int *)(iVar3 + 2) == -0x284e) {
      *(int *)(iVar3 + 8) = *(int *)(iVar3 + 8) + 1;
      iVar1 = *(int *)(iVar3 + 8);
      iVar2 = *(int *)(iVar3 + 4);
      *(undefined *)((int)*(undefined4 *)(iVar3 + 0xc) + iVar1 + -1) = param_2;
      if (iVar1 == iVar2) {
        FUN_1158_0cbe();
      }
    }
    else {
      DAT_1160_1878 = 0x69;
    }
  }
  return;
}



/* ---- FUN_1158_0db5 @ 1158:0db5  (49 octets) ---- */

void __stdcall16far FUN_1158_0db5(int param_1,byte *param_2)

{
  uint uVar1;
  int unaff_BP;
  
  uVar1 = (uint)*param_2;
  if ((int)uVar1 < param_1) {
    FUN_1158_0b8d(uVar1,0x1160,unaff_BP + 1);
  }
  if (uVar1 != 0) {
    FUN_1158_0bdc();
  }
  return;
}



/* ---- FUN_1158_0de6 @ 1158:0de6  (65 octets) ---- */

int __stdcall16far FUN_1158_0de6(int param_1,undefined *param_2)

{
  undefined *puVar1;
  undefined uVar2;
  int iVar3;
  undefined *in_BX;
  int unaff_BP;
  undefined *puVar4;
  undefined2 uVar5;
  undefined2 unaff_CS;
  undefined2 uVar6;
  
  puVar4 = (undefined *)param_2;
  uVar5 = (undefined2)((ulong)param_2 >> 0x10);
  if (param_1 == 0) {
    uVar6 = DAT_1160_188c;
    uVar2 = GETMODULEFILENAME(unaff_CS,0xff,puVar4 + 1,uVar5);
    *param_2 = uVar2;
    param_1 = Ordinal_6(0x14d0,puVar4 + 1,uVar5,puVar4 + 1,uVar5,uVar6);
  }
  else {
    iVar3 = FUN_1158_0e32(0x1160,0x1160,unaff_BP + 1);
    *param_2 = (char)iVar3;
    for (; puVar4 = puVar4 + 1, iVar3 != 0; iVar3 = iVar3 + -1) {
      puVar1 = in_BX;
      in_BX = in_BX + 1;
      *puVar4 = *puVar1;
    }
  }
  return param_1;
}



/* ---- FUN_1158_0e32 @ 1158:0e32  (38 octets) ---- */

void __cdecl16near FUN_1158_0e32(void)

{
  int iVar1;
  byte *pbVar2;
  int in_CX;
  byte *pbVar3;
  byte *pbVar4;
  int iVar5;
  
  iVar5 = (int)((ulong)DAT_1160_1890 >> 0x10);
  pbVar3 = (byte *)DAT_1160_1890;
  iVar1 = iVar5;
  do {
    if (iVar1 == 0) {
      return;
    }
    do {
      pbVar4 = pbVar3;
      pbVar2 = pbVar4;
      if (*pbVar4 == 0) break;
      pbVar3 = pbVar4 + 1;
    } while (*pbVar4 < 0x21);
    do {
      pbVar3 = pbVar2;
      pbVar2 = pbVar3 + 1;
    } while (0x20 < *pbVar3);
    if (pbVar3 == pbVar4) {
      return;
    }
    in_CX = in_CX + -1;
    iVar1 = in_CX;
  } while( true );
}



/* ---- FUN_1158_0e58 @ 1158:0e58  (90 octets) ---- */

void __stdcall16far FUN_1158_0e58(int param_1,undefined *param_2,byte param_3)

{
  char *pcVar1;
  code *pcVar2;
  char cVar3;
  int iVar4;
  char *pcVar5;
  undefined2 unaff_SS;
  bool bVar6;
  undefined local_82 [3];
  undefined uStack_7f;
  
  if (param_3 == 0) {
    pcVar2 = (code *)swi(0x21);
    cVar3 = (*pcVar2)();
    param_3 = cVar3 + 1;
  }
  bVar6 = 0xbf < param_3;
  local_82._1_2_ = 0x5c3a;
  local_82[0] = param_3 + 0x40;
  pcVar2 = (code *)swi(0x21);
  (*pcVar2)();
  if (bVar6) {
    uStack_7f = 0;
  }
  pcVar5 = local_82;
  local_82._0_2_ = unaff_SS;
  Ordinal_6();
  iVar4 = 0;
  do {
    pcVar1 = pcVar5;
    pcVar5 = pcVar5 + 1;
    if (*pcVar1 == '\0') break;
    iVar4 = iVar4 + 1;
    ((undefined *)param_2)[iVar4] = *pcVar1;
    param_1 = param_1 + -1;
  } while (param_1 != 0);
  *param_2 = (char)iVar4;
  return;
}



/* ---- FUN_1158_0eb2 @ 1158:0eb2  (65 octets) ---- */

void __stdcall16far FUN_1158_0eb2(void)

{
  code *pcVar1;
  char cVar2;
  char extraout_DL;
  undefined2 local_82;
  char local_80;
  
  FUN_1158_0f1d();
  if ((char)local_82 == '\0') {
    return;
  }
  if ((char)((uint)local_82 >> 8) == ':') {
    pcVar1 = (code *)swi(0x21);
    (*pcVar1)();
    pcVar1 = (code *)swi(0x21);
    cVar2 = (*pcVar1)();
    if (cVar2 != extraout_DL) {
      DAT_1160_1878 = 0xf;
      return;
    }
    if (local_80 == '\0') {
      return;
    }
  }
  FUN_1158_0f41();
  return;
}



/* ---- FUN_1158_0ef3 @ 1158:0ef3  (21 octets) ---- */

void __stdcall16far FUN_1158_0ef3(void)

{
  FUN_1158_0f1d();
  FUN_1158_0f41();
  return;
}



/* ---- FUN_1158_0f08 @ 1158:0f08  (21 octets) ---- */

void __stdcall16far FUN_1158_0f08(void)

{
  FUN_1158_0f1d();
  FUN_1158_0f41();
  return;
}



/* ---- FUN_1158_0f1d @ 1158:0f1d  (36 octets) ---- */

void __cdecl16near FUN_1158_0f1d(void)

{
  byte *pbVar1;
  byte *pbVar2;
  byte bVar3;
  int unaff_BP;
  byte *pbVar5;
  byte *pbVar6;
  undefined2 unaff_SS;
  int iVar4;
  
  pbVar2 = (byte *)*(undefined4 *)(unaff_BP + 6);
  pbVar5 = (byte *)pbVar2;
  pbVar6 = (byte *)(unaff_BP + -0x80);
  bVar3 = *pbVar2;
  if (0x7e < bVar3) {
    bVar3 = 0x7f;
  }
  for (iVar4 = (int)(char)bVar3; pbVar5 = pbVar5 + 1, iVar4 != 0; iVar4 = iVar4 + -1) {
    pbVar1 = pbVar6;
    pbVar6 = pbVar6 + 1;
    *pbVar1 = *pbVar5;
  }
  *pbVar6 = 0;
  Ordinal_5();
  return;
}



/* ---- FUN_1158_0f41 @ 1158:0f41  (15 octets) ---- */

void __cdecl16near FUN_1158_0f41(undefined2 param_1)

{
  code *pcVar1;
  undefined2 uVar2;
  undefined in_CF;
  
  pcVar1 = (code *)swi(0x21);
  uVar2 = (*pcVar1)();
  if ((bool)in_CF) {
    *(undefined2 *)&DAT_1160_1878 = uVar2;
  }
  return;
}



/* ---- FUN_1158_0f9d @ 1158:0f9d  (42 octets) ---- */

void __cdecl16far FUN_1158_0f9d(void)

{
  char in_AL;
  
  if (in_AL != '\0') {
    return;
  }
  return;
}



/* ---- FUN_1158_100e @ 1158:100e  (33 octets) ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined2 __cdecl16far FUN_1158_100e(void)

{
  long lVar1;
  undefined2 uVar2;
  undefined2 in_FPUControlWord;
  longdouble in_ST0;
  
  DAT_1160_2eae = in_FPUControlWord;
  _DAT_1160_2eaa = (long)ROUND(in_ST0);
  lVar1 = _DAT_1160_2eaa;
  DAT_1160_2eaa = (undefined2)(long)ROUND(in_ST0);
  uVar2 = DAT_1160_2eaa;
  _DAT_1160_2eaa = lVar1;
  return uVar2;
}



/* ---- FUN_1158_102f @ 1158:102f  (18 octets) ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined2 __cdecl16far FUN_1158_102f(void)

{
  long lVar1;
  undefined2 uVar2;
  longdouble in_ST0;
  
  _DAT_1160_2eaa = (long)ROUND(ROUND(in_ST0));
  lVar1 = _DAT_1160_2eaa;
  DAT_1160_2eaa = (undefined2)(long)ROUND(ROUND(in_ST0));
  uVar2 = DAT_1160_2eaa;
  _DAT_1160_2eaa = lVar1;
  return uVar2;
}



/* ---- FUN_1158_1041 @ 1158:1041  (22 octets) ---- */

void __cdecl16far FUN_1158_1041(void)

{
  undefined2 in_FPUControlWord;
  
  DAT_1160_2eae = in_FPUControlWord;
  return;
}



/* ---- FUN_1158_1057 @ 1158:1057  (28 octets) ---- */

void __cdecl16far FUN_1158_1057(void)

{
  undefined2 in_FPUControlWord;
  
  DAT_1160_2eae = in_FPUControlWord;
  return;
}



/* ---- FUN_1158_1083 @ 1158:1083  (4 octets) ---- */

void __cdecl16far FUN_1158_1083(void)

{
  FUN_1158_122d();
  return;
}



/* ---- FUN_1158_1087 @ 1158:1087  (4 octets) ---- */

void __cdecl16far FUN_1158_1087(void)

{
  FUN_1158_12a7();
  return;
}



/* ---- FUN_1158_122d @ 1158:122d  (108 octets) ---- */

void __cdecl16near FUN_1158_122d(void)

{
  return;
}



/* ---- FUN_1158_12a7 @ 1158:12a7  (222 octets) ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16near FUN_1158_12a7(void)

{
  uint uVar1;
  undefined2 in_CX;
  int iVar2;
  longdouble in_ST0;
  longdouble lVar3;
  longdouble lVar4;
  
  iVar2 = CONCAT11((char)((uint)in_CX >> 8),1);
  lVar4 = in_ST0;
  lVar3 = (longdouble)1.4426950408889634;
  if (iVar2 != 0) {
    lVar4 = (longdouble)1.4426950408889634;
    lVar3 = in_ST0;
  }
  if (in_ST0 != (longdouble)0) {
    if (iVar2 != 0) {
      lVar4 = lVar4 * lVar3;
    }
    lVar4 = ABS(lVar4);
    if ((longdouble)0.5 < lVar4) {
      lVar3 = (longdouble)fscale(lVar4,(longdouble)1);
      uVar1 = (uint)ROUND(ROUND(lVar3));
      lVar3 = (longdouble)fscale(ROUND(lVar3),-(longdouble)1);
      lVar4 = (longdouble)f2xm1(lVar4 - lVar3);
      lVar4 = (longdouble)1 + lVar4;
      if ((uVar1 & 1) != 0) {
        lVar4 = _DAT_1158_10af * lVar4;
      }
      fscale(lVar4,(longdouble)(uVar1 >> 1));
    }
    else {
      f2xm1(lVar4);
    }
  }
  return;
}



/* ---- FUN_1158_1399 @ 1158:1399  (155 octets) ---- */

/* WARNING (jumptable): Unable to track spacebase fully for stack */
/* WARNING: Unable to track spacebase fully for stack */

void FUN_1158_1399(undefined2 param_1_00,undefined4 *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  undefined2 *puVar4;
  int iVar5;
  int *piVar6;
  undefined2 uVar7;
  undefined2 unaff_CS;
  undefined2 unaff_SS;
  int iVar8;
  undefined2 in_stack_00000000;
  
  FUN_1158_14a6();
  puVar4 = DAT_1160_1858;
  do {
    while( true ) {
      if (puVar4 == (undefined2 *)0x0) {
        if (DAT_1160_185c != (code *)0x0 || DAT_1160_185e != 0) {
          FUN_1158_159f();
          (*DAT_1160_185c)();
        }
        FUN_1158_008f();
        return;
      }
      piVar2 = *(int **)(puVar4 + 2);
      uVar7 = (undefined2)((ulong)piVar2 >> 0x10);
      iVar3 = *piVar2;
      if (iVar3 != 0) break;
      DAT_1160_1858 = (undefined2 *)*puVar4;
      FUN_1158_1514();
      piVar2 = (int *)piVar2 + 1;
      (*(code *)*piVar2)();
      puVar4 = DAT_1160_1858;
    }
    piVar6 = (int *)piVar2 + 1;
    do {
      if (*piVar6 == 0 && piVar6[1] == 0) {
LAB_1158_140b:
        DAT_1160_1858 = puVar4;
        puVar4[2] = 0x144a;
        puVar4[3] = unaff_CS;
        puVar4[-1] = param_1._2_2_;
        puVar4[-2] = (undefined4 *)param_1;
        puVar4[-3] = param_1_00;
        puVar4[-4] = in_stack_00000000;
        puVar4[-5] = DAT_1160_185a;
        DAT_1160_185a = puVar4 + -5;
        puVar4[-6] = 0x1430;
        FUN_1158_153f();
                    /* WARNING: Could not recover jumptable at 0x11581430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)(ulong)(uint)piVar6[2])();
        return;
      }
      iVar8 = (int)((ulong)*param_1 >> 0x10);
      iVar5 = (int)*param_1;
      do {
        if ((iVar5 == *piVar6) && (iVar8 == piVar6[1])) goto LAB_1158_140b;
        puVar1 = (undefined4 *)(iVar5 + -0x14);
        iVar8 = (int)((ulong)*puVar1 >> 0x10);
        iVar5 = (int)*puVar1;
      } while (iVar8 != 0 || iVar5 != 0);
      piVar6 = piVar6 + 4;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    puVar4 = (undefined2 *)*puVar4;
  } while( true );
}



/* ---- FUN_1158_146a @ 1158:146a  (58 octets) ---- */

void __stdcall16far FUN_1158_146a(undefined2 param_1,undefined2 param_2_00,int *param_2)

{
  int *piVar1;
  undefined2 uVar2;
  
  DAT_1160_1858 = param_1;
  uVar2 = (undefined2)((ulong)param_2 >> 0x10);
  piVar1 = (int *)param_2;
  if (*param_2 == 0) {
    if (DAT_1160_2ec0 != 0) {
      DAT_1160_2ec4 = 3;
      DAT_1160_2ec6 = piVar1[1];
      DAT_1160_2ec8 = piVar1[2];
      FUN_1158_14a4();
    }
    (*(code *)piVar1[1])();
  }
  return;
}



/* ---- FUN_1158_14a4 @ 1158:14a4  (2 octets) ---- */

void __cdecl16near FUN_1158_14a4(void)

{
  return;
}



/* ---- FUN_1158_14a6 @ 1158:14a6  (110 octets) ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16near FUN_1158_14a6(undefined2 param_1,undefined2 param_2,undefined4 *param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  int iVar3;
  bool bVar4;
  
  bVar4 = DAT_1160_2ec0 == 0;
  if (!bVar4) {
    FUN_1158_15ca();
    if (bVar4) {
      DAT_1160_2ec6 = param_1;
      DAT_1160_2ec8 = param_2;
      _DAT_1160_2ece = 0;
      _DAT_1160_2ed6 = 0;
      iVar3 = (int)((ulong)param_3 >> 0x10);
      if (iVar3 != 0 || (undefined4 *)param_3 != (undefined4 *)0x0) {
        DAT_1160_2ed4 = (undefined2)((ulong)*param_3 >> 0x10);
        pbVar1 = (byte *)*(undefined2 *)((int)*param_3 + -0x18);
        DAT_1160_2ed2 = pbVar1 + 1;
        _DAT_1160_2ece = (uint)*pbVar1;
        pbVar2 = (byte *)((undefined4 *)param_3)[1];
        iVar3 = (int)((ulong)pbVar2 >> 0x10);
        if (iVar3 != 0 || (byte *)pbVar2 != (byte *)0x0) {
          DAT_1160_2eda = (byte *)pbVar2 + 1;
          _DAT_1160_2ed6 = (uint)*pbVar2;
          DAT_1160_2edc = iVar3;
        }
        DAT_1160_2ec4 = 1;
        FUN_1158_14a4();
      }
    }
  }
  return;
}



/* ---- FUN_1158_1514 @ 1158:1514  (43 octets) ---- */

void __cdecl16near FUN_1158_1514(void)

{
  int unaff_DI;
  undefined2 unaff_ES;
  bool bVar1;
  
  bVar1 = DAT_1160_2ec0 == 0;
  if (!bVar1) {
    FUN_1158_15ca();
    if (bVar1) {
      DAT_1160_2ec4 = 3;
      DAT_1160_2ec6 = *(undefined2 *)(unaff_DI + 2);
      DAT_1160_2ec8 = *(undefined2 *)(unaff_DI + 4);
      FUN_1158_14a4();
    }
  }
  return;
}



/* ---- FUN_1158_153f @ 1158:153f  (49 octets) ---- */

void __cdecl16near FUN_1158_153f(void)

{
  int unaff_DI;
  undefined2 unaff_ES;
  bool bVar1;
  
  bVar1 = DAT_1160_2ec0 == 0;
  if (!bVar1) {
    FUN_1158_15ca();
    if (bVar1) {
      DAT_1160_2ec4 = 2;
      DAT_1160_2ec6 = *(undefined2 *)(unaff_DI + 4);
      DAT_1160_2ec8 = *(undefined2 *)(unaff_DI + 6);
      FUN_1158_14a4();
    }
  }
  return;
}



/* ---- FUN_1158_159f @ 1158:159f  (43 octets) ---- */

void __cdecl16near FUN_1158_159f(void)

{
  bool bVar1;
  
  bVar1 = DAT_1160_2ec0 == 0;
  if (!bVar1) {
    FUN_1158_15ca();
    if (bVar1) {
      DAT_1160_2ec4 = 4;
      DAT_1160_2ec6 = DAT_1160_185c;
      DAT_1160_2ec8 = DAT_1160_185e;
      FUN_1158_14a4();
    }
  }
  return;
}



/* ---- FUN_1158_15ca @ 1158:15ca  (32 octets) ---- */

void __cdecl16near FUN_1158_15ca(void)

{
  int in_BX;
  int unaff_SI;
  undefined2 unaff_SS;
  
  if (*(int *)(in_BX + unaff_SI) != 0 || *(int *)(in_BX + unaff_SI + 2) != 0) {
    FUN_1158_2299();
    return;
  }
  return;
}



/* ---- FUN_1158_161b @ 1158:161b  (24 octets) ---- */

void __stdcall16far FUN_1158_161b(int param_1,undefined *param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar3 = (undefined *)param_3;
  puVar4 = (undefined *)param_2;
  for (; param_1 != 0; param_1 = param_1 + -1) {
    puVar2 = puVar4;
    puVar4 = puVar4 + 1;
    puVar1 = puVar3;
    puVar3 = puVar3 + 1;
    *puVar2 = *puVar1;
  }
  return;
}



/* ---- FUN_1158_1633 @ 1158:1633  (61 octets) ---- */

int __cdecl16far FUN_1158_1633(void)

{
  int in_AX;
  int in_CX;
  
  if (1 < DAT_1160_1888) {
    return in_AX * in_CX;
  }
  return in_AX * in_CX;
}



/* ---- FUN_1158_1670 @ 1158:1670  (166 octets) ---- */

int __cdecl16far FUN_1158_1670(void)

{
  uint uVar1;
  uint in_AX;
  int iVar2;
  int iVar3;
  uint in_CX;
  uint uVar4;
  uint uVar5;
  uint in_DX;
  uint in_BX;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  bool bVar11;
  bool bVar12;
  ulong uVar6;
  
  if (1 < DAT_1160_1888) {
    if (CONCAT22(in_BX,in_CX) != 0) {
      return (int)(CONCAT22(in_DX,in_AX) / CONCAT22(in_BX,in_CX));
    }
LAB_1158_16e9:
    iVar3 = FUN_1158_0060();
    return iVar3;
  }
  uVar6 = (ulong)in_DX;
  bVar12 = (int)in_DX < 0;
  if (bVar12) {
    bVar11 = in_AX != 0;
    in_AX = -in_AX;
    uVar6 = (ulong)-(in_DX + bVar11);
  }
  uVar9 = (uint)bVar12;
  if (in_BX == 0) {
    in_BX = 0;
    if (in_CX == 0) goto LAB_1158_16e9;
LAB_1158_16f1:
    iVar3 = (int)((((ulong)in_BX << 0x10 | uVar6) % (ulong)in_CX << 0x10 | (ulong)in_AX) /
                 (ulong)in_CX);
  }
  else {
    if ((int)in_BX < 0) {
      uVar9 = uVar9 + 2;
      bVar11 = in_CX != 0;
      in_CX = -in_CX;
      in_BX = -(in_BX + bVar11);
      if (in_BX == 0) goto LAB_1158_16f1;
    }
    iVar7 = 0;
    iVar3 = 0;
    iVar10 = 0x10;
    do {
      iVar2 = iVar3 * 2;
      bVar11 = (int)in_AX < 0;
      in_AX = in_AX << 1 | (uint)(iVar3 < 0);
      uVar4 = (int)uVar6 << 1 | (uint)bVar11;
      uVar8 = iVar7 << 1 | (uint)((int)uVar6 < 0);
      uVar5 = uVar4 - in_CX;
      uVar4 = (uint)(uVar4 < in_CX);
      uVar1 = uVar8 - in_BX;
      iVar7 = uVar1 - uVar4;
      iVar3 = iVar2 + 1;
      if (uVar8 < in_BX || uVar1 < uVar4) {
        bVar11 = CARRY2(uVar5,in_CX);
        uVar5 = uVar5 + in_CX;
        iVar7 = iVar7 + in_BX + (uint)bVar11;
        iVar3 = iVar2;
      }
      uVar6 = (ulong)uVar5;
      iVar10 = iVar10 + -1;
    } while (iVar10 != 0);
  }
  uVar9 = uVar9 >> 1;
  if (bVar12) {
    uVar9 = uVar9 + 1;
  }
  if (uVar9 == 1) {
    iVar3 = -iVar3;
  }
  return iVar3;
}



/* ---- FUN_1158_1716 @ 1158:1716  (35 octets) ---- */

uint __cdecl16far FUN_1158_1716(void)

{
  ulong uVar1;
  uint in_AX;
  uint in_CX;
  uint uVar2;
  ulong in_EDX;
  
  if (DAT_1160_1888 < 2) {
    for (uVar2 = in_CX & 0x1f; uVar2 != 0; uVar2 = uVar2 - 1) {
      uVar1 = in_EDX & 1;
      in_EDX = in_EDX >> 1 & 0x7fff;
      in_AX = in_AX >> 1 | (uint)(uVar1 != 0) << 0xf;
    }
    return in_AX;
  }
  return (uint)(CONCAT22((int)in_EDX,in_AX) >> ((byte)in_CX & 0x1f));
}



/* ---- FUN_1158_1739 @ 1158:1739  (35 octets) ---- */

int __cdecl16far FUN_1158_1739(void)

{
  int in_AX;
  uint in_CX;
  uint uVar1;
  
  if (DAT_1160_1888 < 2) {
    for (uVar1 = in_CX & 0x1f; uVar1 != 0; uVar1 = uVar1 - 1) {
      in_AX = in_AX << 1;
    }
    return in_AX;
  }
  return in_AX << ((byte)in_CX & 0x1f);
}



/* ---- FUN_1158_17cd @ 1158:17cd  (26 octets) ---- */

void __stdcall16far FUN_1158_17cd(byte *param_1,byte *param_2)

{
  byte bVar1;
  uint uVar2;
  byte *pbVar3;
  byte *pbVar4;
  
  pbVar4 = (byte *)param_2;
  pbVar3 = (byte *)param_1;
  bVar1 = *param_1;
  *param_2 = bVar1;
  uVar2 = (uint)bVar1;
  while( true ) {
    pbVar4 = pbVar4 + 1;
    pbVar3 = pbVar3 + 1;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    *pbVar4 = *pbVar3;
  }
  return;
}



/* ---- FUN_1158_17e7 @ 1158:17e7  (36 octets) ---- */

void __stdcall16far FUN_1158_17e7(byte param_1,byte *param_2,byte *param_3)

{
  byte bVar1;
  uint uVar2;
  byte *pbVar3;
  byte *pbVar4;
  
  pbVar3 = (byte *)param_3;
  pbVar4 = (byte *)param_2;
  bVar1 = *param_3;
  if (param_1 < *param_3) {
    bVar1 = param_1;
  }
  *param_2 = bVar1;
  uVar2 = (uint)bVar1;
  while( true ) {
    pbVar4 = pbVar4 + 1;
    pbVar3 = pbVar3 + 1;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    *pbVar4 = *pbVar3;
  }
  return;
}



/* ---- FUN_1158_180b @ 1158:180b  (65 octets) ---- */

void __stdcall16far FUN_1158_180b(uint param_1,uint param_2,byte *param_3,byte *param_4)

{
  byte *pbVar1;
  uint uVar2;
  byte *pbVar3;
  byte *pbVar4;
  
  pbVar4 = (byte *)param_4;
  if ((int)param_2 < 1) {
    param_2 = 1;
  }
  pbVar3 = (byte *)param_3 + param_2;
  if (*param_3 < param_2) {
    uVar2 = 0;
  }
  else {
    uVar2 = (*param_3 - param_2) + 1;
    if ((int)param_1 < 0) {
      param_1 = 0;
    }
    if (param_1 < uVar2) {
      uVar2 = param_1;
    }
  }
  *param_4 = (byte)uVar2;
  for (; pbVar4 = pbVar4 + 1, uVar2 != 0; uVar2 = uVar2 - 1) {
    pbVar1 = pbVar3;
    pbVar3 = pbVar3 + 1;
    *pbVar4 = *pbVar1;
  }
  return;
}



/* ---- FUN_1158_184c @ 1158:184c  (44 octets) ---- */

void __stdcall16far FUN_1158_184c(byte *param_1,byte *param_2)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  byte *pbVar5;
  byte *pbVar6;
  
  pbVar5 = (byte *)param_1;
  bVar2 = *param_2;
  bVar3 = *param_1;
  bVar1 = *param_2;
  *param_2 = *param_2 + bVar3;
  if (CARRY1(bVar1,bVar3)) {
    *param_2 = 0xff;
    bVar3 = ~bVar2;
  }
  pbVar6 = (byte *)param_2 + bVar2;
  uVar4 = (uint)bVar3;
  while( true ) {
    pbVar6 = pbVar6 + 1;
    pbVar5 = pbVar5 + 1;
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    *pbVar6 = *pbVar5;
  }
  return;
}



/* ---- FUN_1158_1878 @ 1158:1878  (70 octets) ---- */

byte * __stdcall16far FUN_1158_1878(byte *param_1,byte *param_2)

{
  byte *pbVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  byte *pbVar5;
  byte *pbVar6;
  byte *pbVar7;
  undefined2 uVar8;
  undefined2 uVar9;
  bool bVar10;
  
  uVar9 = (undefined2)((ulong)param_2 >> 0x10);
  if (*param_2 != 0) {
    uVar4 = (uint)*param_2;
    uVar8 = (undefined2)((ulong)param_1 >> 0x10);
    if (uVar4 <= *param_1) {
      iVar2 = (*param_1 - uVar4) + 1;
      pbVar7 = (byte *)param_1 + 1;
      pbVar6 = pbVar7;
      do {
        pbVar5 = (byte *)param_2 + 1;
        bVar10 = pbVar6 == (byte *)0x0;
        do {
          if (iVar2 == 0) break;
          iVar2 = iVar2 + -1;
          pbVar1 = pbVar7;
          pbVar7 = pbVar7 + 1;
          bVar10 = *pbVar5 == *pbVar1;
        } while (!bVar10);
        if (!bVar10) {
          return (byte *)0x0;
        }
        iVar3 = uVar4 - 1;
        bVar10 = iVar3 == 0;
        pbVar6 = pbVar7;
        do {
          pbVar5 = pbVar5 + 1;
          if (iVar3 == 0) break;
          iVar3 = iVar3 + -1;
          pbVar1 = pbVar6;
          pbVar6 = pbVar6 + 1;
          bVar10 = *pbVar5 == *pbVar1;
        } while (bVar10);
        if (bVar10) {
          return pbVar7 + (-1 - (int)(byte *)param_1);
        }
        pbVar6 = (byte *)param_2 + 1;
      } while( true );
    }
  }
  return (byte *)0x0;
}



/* ---- FUN_1158_18be @ 1158:18be  (43 octets) ---- */

void __stdcall16far FUN_1158_18be(byte *param_1,byte *param_2)

{
  byte bVar1;
  uint uVar2;
  byte *pbVar3;
  byte *pbVar4;
  
  pbVar3 = (byte *)param_2;
  pbVar4 = (byte *)param_1;
  bVar1 = *param_2;
  if (*param_1 < *param_2) {
    bVar1 = *param_1;
  }
  if (bVar1 != 0) {
    uVar2 = (uint)bVar1;
    do {
      pbVar4 = pbVar4 + 1;
      pbVar3 = pbVar3 + 1;
      if (uVar2 == 0) {
        return;
      }
      uVar2 = uVar2 - 1;
    } while (*pbVar3 == *pbVar4);
  }
  return;
}



/* ---- FUN_1158_18e9 @ 1158:18e9  (18 octets) ---- */

void __stdcall16far FUN_1158_18e9(undefined param_1,undefined *param_2)

{
  *param_2 = 1;
  ((undefined *)param_2)[1] = param_1;
  return;
}



/* ---- FUN_1158_1916 @ 1158:1916  (95 octets) ---- */

void __stdcall16far
FUN_1158_1916(int param_1,undefined2 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined2 uVar1;
  undefined2 uVar2;
  undefined2 unaff_SS;
  undefined *puVar3;
  undefined *puVar4;
  undefined2 uVar5;
  undefined local_202 [256];
  undefined local_102 [256];
  
  if (param_1 < 1) {
    param_1 = 1;
  }
  puVar4 = local_102;
  uVar2 = (undefined2)((ulong)param_3 >> 0x10);
  uVar1 = (undefined2)param_3;
  uVar5 = unaff_SS;
  FUN_1158_180b(param_1 + -1,1,uVar1,uVar2);
  FUN_1158_184c((int)param_4,(int)((ulong)param_4 >> 0x10));
  puVar3 = local_202;
  FUN_1158_180b(0xff,param_1,uVar1,uVar2);
  FUN_1158_184c(puVar3,unaff_SS);
  FUN_1158_17e7(param_2,uVar1,uVar2,puVar4,uVar5);
  return;
}



/* ---- FUN_1158_1975 @ 1158:1975  (111 octets) ---- */

void __stdcall16far FUN_1158_1975(int param_1,int param_2,undefined4 param_3)

{
  undefined2 uVar1;
  undefined2 uVar2;
  undefined2 unaff_SS;
  undefined *puVar3;
  undefined *puVar4;
  undefined2 uVar5;
  undefined local_202 [256];
  undefined local_102 [256];
  
  if (((0 < param_1) && (0 < param_2)) && (param_2 < 0x100)) {
    if (0xff < param_1) {
      param_1 = 0xff;
    }
    puVar4 = local_102;
    uVar2 = (undefined2)((ulong)param_3 >> 0x10);
    uVar1 = (undefined2)param_3;
    uVar5 = unaff_SS;
    FUN_1158_180b(param_2 + -1,1,uVar1,uVar2);
    puVar3 = local_202;
    FUN_1158_180b(0xff,param_2 + param_1,uVar1,uVar2);
    FUN_1158_184c(puVar3,unaff_SS);
    FUN_1158_17e7(0xff,uVar1,uVar2,puVar4,uVar5);
  }
  return;
}



/* ---- FUN_1158_19e4 @ 1158:19e4  (42 octets) ---- */

void __stdcall16far FUN_1158_19e4(uint param_1,undefined *param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  byte bVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined2 uVar7;
  
  uVar7 = (undefined2)((ulong)param_3 >> 0x10);
  puVar6 = (undefined *)param_3;
  puVar5 = (undefined *)param_2;
  bVar4 = (byte)(param_1 >> 8);
  for (uVar3 = (uint)bVar4; uVar3 != 0; uVar3 = uVar3 - 1) {
    puVar1 = puVar6;
    puVar6 = puVar6 + 1;
    *puVar1 = 0;
  }
  for (uVar3 = param_1 & 0xff; uVar3 != 0; uVar3 = uVar3 - 1) {
    puVar2 = puVar6;
    puVar6 = puVar6 + 1;
    puVar1 = puVar5;
    puVar5 = puVar5 + 1;
    *puVar2 = *puVar1;
  }
  for (uVar3 = (uint)(byte)((' ' - (char)param_1) - bVar4); uVar3 != 0; uVar3 = uVar3 - 1) {
    puVar1 = puVar6;
    puVar6 = puVar6 + 1;
    *puVar1 = 0;
  }
  return;
}



/* ---- FUN_1158_1a0e @ 1158:1a0e  (22 octets) ---- */

void __stdcall16far FUN_1158_1a0e(undefined2 param_1,undefined2 *param_2)

{
  int iVar1;
  undefined2 *puVar2;
  
  puVar2 = (undefined2 *)param_2;
  *param_2 = param_1;
  for (iVar1 = 0xf; puVar2 = puVar2 + 1, iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
  }
  return;
}



/* ---- FUN_1158_1a24 @ 1158:1a24  (33 octets) ---- */

void __stdcall16far FUN_1158_1a24(byte param_1,undefined4 param_2)

{
  byte *pbVar1;
  
  pbVar1 = (byte *)((uint)(param_1 >> 3) + (int)param_2);
  *pbVar1 = *pbVar1 | '\x01' << (param_1 & 7);
  return;
}



/* ---- FUN_1158_1a79 @ 1158:1a79  (32 octets) ---- */

void __stdcall16far FUN_1158_1a79(uint param_1,undefined *param_2,undefined4 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar4 = (undefined *)param_2;
  puVar3 = (undefined *)((int)param_3 + (param_1 >> 8));
  for (param_1 = param_1 & 0xff; param_1 != 0; param_1 = param_1 - 1) {
    puVar2 = puVar4;
    puVar4 = puVar4 + 1;
    puVar1 = puVar3;
    puVar3 = puVar3 + 1;
    *puVar2 = *puVar1;
  }
  return;
}



/* ---- FUN_1158_1a99 @ 1158:1a99  (32 octets) ---- */

int __cdecl16far FUN_1158_1a99(void)

{
  sbyte sVar1;
  uint in_AX;
  byte bVar2;
  undefined2 in_DX;
  byte bVar3;
  
  bVar2 = (byte)in_AX >> 3;
  bVar3 = (byte)((uint)in_DX >> 8);
  if ((bVar3 <= bVar2) && ((byte)(bVar2 - bVar3) < (byte)in_DX)) {
    sVar1 = (sbyte)(in_AX & 0xff07);
    bVar2 = (byte)((in_AX & 0xff07) >> 8);
    return CONCAT11(bVar2,bVar2 << sVar1 | bVar2 >> 8 - sVar1);
  }
  return (int)in_AX >> 0xf;
}



/* ---- FUN_1158_1c2b @ 1158:1c2b  (29 octets) ---- */

int __stdcall16far FUN_1158_1c2b(uint param_1)

{
  long lVar1;
  ulong uVar2;
  
  uVar2 = FUN_1158_1c88();
  lVar1 = (uVar2 >> 0x10) * (ulong)param_1;
  return (int)((ulong)lVar1 >> 0x10) +
         (uint)CARRY2((uint)lVar1,(uint)((uVar2 & 0xffff) * (ulong)param_1 >> 0x10));
}



/* ---- FUN_1158_1c88 @ 1158:1c88  (54 octets) ---- */

void __cdecl16near FUN_1158_1c88(void)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  
  uVar1 = (uint)((ulong)DAT_1160_187a * 0x8405);
  cVar2 = (char)(DAT_1160_187a << 3);
  iVar3 = (int)((ulong)DAT_1160_187a * 0x8405 >> 0x10) +
          CONCAT11((char)((DAT_1160_187a << 3) >> 8) + cVar2,cVar2) + DAT_1160_187c * 5;
  DAT_1160_187a = uVar1 + 1;
  DAT_1160_187c =
       CONCAT11((char)((uint)iVar3 >> 8) + (char)DAT_1160_187c * '\x04' + (char)(DAT_1160_187c << 7)
                ,(char)iVar3) + (uint)(0xfffe < uVar1);
  return;
}



/* ---- FUN_1158_1ccd @ 1158:1ccd  (28 octets) ---- */

void __cdecl16near FUN_1158_1ccd(void)

{
  ulong uVar1;
  uint in_AX;
  byte bVar2;
  uint in_DX;
  byte *unaff_DI;
  undefined2 unaff_ES;
  char cVar3;
  
  if ((int)in_DX < 0) {
    FUN_1158_1ce9();
    unaff_DI[-1] = 0x2d;
    return;
  }
  do {
    uVar1 = (ulong)in_DX;
    in_DX = in_DX / 10;
    uVar1 = uVar1 % 10 << 0x10 | (ulong)in_AX;
    in_AX = (uint)(uVar1 / 10);
    cVar3 = (char)(uVar1 % 10);
    bVar2 = cVar3 + 0x30;
    if (0x39 < bVar2) {
      bVar2 = cVar3 + 0x37;
    }
    unaff_DI = unaff_DI + -1;
    *unaff_DI = bVar2;
  } while (in_AX != 0 || in_DX != 0);
  return;
}



/* ---- FUN_1158_1ce9 @ 1158:1ce9  (32 octets) ---- */

void __cdecl16near FUN_1158_1ce9(void)

{
  ulong uVar1;
  uint in_AX;
  byte bVar2;
  uint in_BX;
  uint unaff_SI;
  byte *unaff_DI;
  undefined2 unaff_ES;
  char cVar3;
  
  do {
    uVar1 = (ulong)in_BX;
    in_BX = in_BX / unaff_SI;
    uVar1 = uVar1 % (ulong)unaff_SI << 0x10 | (ulong)in_AX;
    in_AX = (uint)(uVar1 / unaff_SI);
    cVar3 = (char)(uVar1 % (ulong)unaff_SI);
    bVar2 = cVar3 + 0x30;
    if (0x39 < bVar2) {
      bVar2 = cVar3 + 0x37;
    }
    unaff_DI = unaff_DI + -1;
    *unaff_DI = bVar2;
  } while (in_AX != 0 || in_BX != 0);
  return;
}



/* ---- FUN_1158_1d09 @ 1158:1d09  (167 octets) ---- */

undefined4 __cdecl16near FUN_1158_1d09(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int in_CX;
  uint uVar5;
  uint uVar6;
  byte bVar7;
  byte bVar8;
  uint uVar9;
  char cVar10;
  uint uVar11;
  byte *unaff_DI;
  undefined2 unaff_ES;
  bool bVar12;
  bool bVar13;
  
  iVar1 = 0;
  uVar5 = 0;
  uVar11 = 0;
  if (in_CX == 0) goto LAB_1158_1d6e;
  if (*unaff_DI == 0x2b) {
LAB_1158_1d1e:
    unaff_DI = unaff_DI + 1;
    in_CX = in_CX + -1;
    if (in_CX == 0) goto LAB_1158_1d6e;
  }
  else if (*unaff_DI == 0x2d) {
    uVar11 = 0xffff;
    goto LAB_1158_1d1e;
  }
  if (*unaff_DI != 0x24) {
    do {
      uVar9 = (uint)(byte)(*unaff_DI - 0x30);
      if ((byte)(*unaff_DI - 0x3a) < 0xf6) break;
      if ((uVar5 & 0xf000) != 0) goto LAB_1158_1d6e;
      uVar2 = iVar1 * 2;
      uVar6 = uVar5 << 1 | (uint)(iVar1 < 0);
      iVar3 = iVar1 << 2;
      uVar4 = iVar1 * 8;
      uVar5 = iVar1 * 10;
      iVar1 = uVar5 + uVar9;
      uVar5 = ((uVar6 << 1 | (uint)((int)uVar2 < 0)) << 1 | (uint)(iVar3 < 0)) + uVar6 +
              (uint)CARRY2(uVar4,uVar2) + (uint)CARRY2(uVar5,uVar9);
      unaff_DI = unaff_DI + 1;
      in_CX = in_CX + -1;
    } while (in_CX != 0);
LAB_1158_1d58:
    if (iVar1 != 0 || uVar5 != 0) {
      if ((int)uVar11 < 0) {
        bVar12 = iVar1 != 0;
        iVar1 = -iVar1;
        uVar5 = -(uint)bVar12 - uVar5;
      }
      if ((int)(uVar11 ^ uVar5) < 0) goto LAB_1158_1d6e;
    }
    return CONCAT22(uVar5,iVar1);
  }
  iVar3 = in_CX + -1;
  if (iVar3 != 0) {
    do {
      unaff_DI = unaff_DI + 1;
      bVar7 = *unaff_DI;
      if (0x60 < bVar7) {
        bVar7 = bVar7 - 0x20;
      }
      bVar8 = bVar7 - 0x30;
      if ((byte)(bVar7 - 0x3a) < 0xf6) {
        if ((byte)(bVar7 + 0xb9) < 0xfa) goto LAB_1158_1d58;
        bVar8 = bVar7 - 0x37;
      }
      cVar10 = '\x04';
      do {
        bVar12 = iVar1 < 0;
        iVar1 = iVar1 << 1;
        bVar13 = (int)uVar5 < 0;
        uVar5 = uVar5 << 1 | (uint)bVar12;
        if (bVar13) goto LAB_1158_1d6e;
        cVar10 = cVar10 + -1;
      } while (cVar10 != '\0');
      iVar1 = CONCAT11((char)((uint)iVar1 >> 8),(byte)iVar1 | bVar8);
      iVar3 = iVar3 + -1;
      if (iVar3 == 0) {
        if ((int)uVar11 < 0) {
          bVar12 = iVar1 != 0;
          iVar1 = -iVar1;
          uVar5 = -(uint)bVar12 - uVar5;
        }
        return CONCAT22(uVar5,iVar1);
      }
    } while( true );
  }
LAB_1158_1d6e:
  return CONCAT22(uVar5,iVar1);
}



/* ---- FUN_1158_1db0 @ 1158:1db0  (75 octets) ---- */

void __stdcall16far FUN_1158_1db0(int param_1,undefined *param_2,int param_3)

{
  undefined *puVar1;
  int in_CX;
  undefined *puVar2;
  undefined *puVar3;
  undefined2 uVar4;
  undefined2 unaff_SS;
  
  FUN_1158_1ccd();
  uVar4 = (undefined2)((ulong)param_2 >> 0x10);
  if (param_1 < param_3) {
    param_3 = param_1;
  }
  if (param_1 < in_CX) {
    in_CX = param_1;
  }
  if (param_3 < in_CX) {
    param_3 = in_CX;
  }
  puVar3 = (undefined *)param_2 + 1;
  *param_2 = (char)param_3;
  param_3 = param_3 - in_CX;
  puVar2 = &stack0xfffe;
  if (param_3 != 0) {
    for (; puVar2 = &stack0xfffe, param_3 != 0; param_3 = param_3 + -1) {
      puVar1 = puVar3;
      puVar3 = puVar3 + 1;
      *puVar1 = 0x20;
    }
  }
  for (; in_CX != 0; in_CX = in_CX + -1) {
    puVar1 = puVar3;
    puVar3 = puVar3 + 1;
    *puVar1 = *puVar2;
    puVar2 = puVar2 + 1;
  }
  return;
}



/* ---- FUN_1158_1dfb @ 1158:1dfb  (49 octets) ---- */

undefined2 __stdcall16far FUN_1158_1dfb(uint *param_1,byte *param_2)

{
  undefined2 uVar1;
  uint uVar2;
  byte *pbVar3;
  bool bVar4;
  
  bVar4 = false;
  uVar2 = (uint)*param_2;
  pbVar3 = (byte *)param_2;
  while ((pbVar3 = pbVar3 + 1, uVar2 != 0 && (bVar4 = *pbVar3 < 0x20, *pbVar3 == 0x20))) {
    uVar2 = uVar2 - 1;
  }
  uVar1 = FUN_1158_1d09();
  if ((bVar4) || (uVar2 != 0)) {
    uVar2 = (int)pbVar3 - (int)(byte *)param_2;
    uVar1 = 0;
  }
  *param_1 = uVar2;
  return uVar1;
}



/* ---- FUN_1158_1e2c @ 1158:1e2c  (90 octets) ---- */

void __stdcall16far FUN_1158_1e2c(int param_1,undefined *param_2,int param_3,int param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined2 uVar5;
  undefined2 unaff_SS;
  undefined local_42 [64];
  
  if ((param_3 < 0) && (param_3 = 8 - param_4, -2 < param_3)) {
    param_3 = -2;
  }
  puVar3 = local_42;
  FUN_1158_060e();
  uVar5 = (undefined2)((ulong)param_2 >> 0x10);
  if (param_1 < param_4) {
    param_4 = param_1;
  }
  if (param_1 < param_3) {
    param_3 = param_1;
  }
  if (param_4 < param_3) {
    param_4 = param_3;
  }
  puVar4 = (undefined *)param_2 + 1;
  *param_2 = (char)param_4;
  param_4 = param_4 - param_3;
  if (param_4 != 0) {
    for (; param_4 != 0; param_4 = param_4 + -1) {
      puVar1 = puVar4;
      puVar4 = puVar4 + 1;
      *puVar1 = 0x20;
    }
  }
  for (; param_3 != 0; param_3 = param_3 + -1) {
    puVar2 = puVar4;
    puVar4 = puVar4 + 1;
    puVar1 = puVar3;
    puVar3 = puVar3 + 1;
    *puVar2 = *puVar1;
  }
  return;
}



/* ---- FUN_1158_1e86 @ 1158:1e86  (59 octets) ---- */

void __stdcall16far FUN_1158_1e86(uint *param_1,byte *param_2)

{
  uint uVar1;
  byte *pbVar2;
  bool bVar3;
  
  bVar3 = false;
  uVar1 = (uint)*param_2;
  pbVar2 = (byte *)param_2;
  while ((pbVar2 = pbVar2 + 1, uVar1 != 0 && (bVar3 = *pbVar2 < 0x20, *pbVar2 == 0x20))) {
    uVar1 = uVar1 - 1;
  }
  FUN_1158_07de();
  if ((bVar3) || (uVar1 != 0)) {
    uVar1 = (int)pbVar2 - (int)(byte *)param_2;
  }
  *param_1 = uVar1;
  return;
}



/* ---- FUN_1158_1ec1 @ 1158:1ec1  (36 octets) ---- */

void __stdcall16far FUN_1158_1ec1(int param_1,undefined *param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  byte bVar5;
  
  puVar3 = (undefined *)param_3;
  puVar4 = (undefined *)param_2;
  bVar5 = 0;
  if (puVar3 < puVar4) {
    puVar3 = puVar3 + param_1 + -1;
    puVar4 = puVar4 + param_1 + -1;
    bVar5 = 1;
  }
  for (; param_1 != 0; param_1 = param_1 + -1) {
    puVar2 = puVar4;
    puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
    puVar1 = puVar3;
    puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
    *puVar2 = *puVar1;
  }
  return;
}



/* ---- FUN_1158_1ee5 @ 1158:1ee5  (20 octets) ---- */

void __stdcall16far FUN_1158_1ee5(undefined param_1,int param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = (undefined *)param_3;
  for (; param_2 != 0; param_2 = param_2 + -1) {
    puVar1 = puVar2;
    puVar2 = puVar2 + 1;
    *puVar1 = param_1;
  }
  return;
}



/* ---- FUN_1158_1ef9 @ 1158:1ef9  (19 octets) ---- */

byte __stdcall16far FUN_1158_1ef9(byte param_1)

{
  if ((0x60 < param_1) && (param_1 < 0x7b)) {
    param_1 = param_1 - 0x20;
  }
  return param_1;
}



/* ---- FUN_1158_1f50 @ 1158:1f50  (22 octets) ---- */

void __stdcall16far FUN_1158_1f50(int param_1,undefined2 param_2_00,char param_2)

{
  if (param_2 != '\0') {
    (*(code *)*(undefined2 *)(param_1 + -0xc))();
  }
  return;
}



/* ---- FUN_1158_1f66 @ 1158:1f66  (25 octets) ---- */

void __stdcall16far FUN_1158_1f66(undefined4 *param_1,char param_2)

{
  undefined2 *puVar1;
  
  if (param_2 != '\0') {
    puVar1 = (undefined2 *)((int)*param_1 + -8);
    (*(code *)*puVar1)();
  }
  return;
}



/* ---- FUN_1158_1f7f @ 1158:1f7f  (27 octets) ---- */

void __stdcall16far FUN_1158_1f7f(undefined4 *param_1)

{
  undefined2 *puVar1;
  
  if ((int)((ulong)param_1 >> 0x10) != 0 || (undefined4 *)param_1 != (undefined4 *)0x0) {
    puVar1 = (undefined2 *)((int)*param_1 + -4);
    (*(code *)*puVar1)();
  }
  return;
}



/* ---- FUN_1158_1f9a @ 1158:1f9a  (49 octets) ---- */

int * __stdcall16far FUN_1158_1f9a(undefined4 param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined2 uVar5;
  int *piVar6;
  int iVar7;
  int *piVar8;
  
  iVar7 = (int)((ulong)param_1 >> 0x10);
  iVar2 = *(int *)((int)param_1 + -0x16);
  piVar8 = (int *)FUN_1158_021f();
  uVar5 = (undefined2)((ulong)piVar8 >> 0x10);
  piVar6 = (int *)piVar8 + 1;
  *piVar8 = (int)param_1;
  *piVar6 = iVar7;
  uVar3 = iVar2 - 4;
  for (uVar4 = uVar3 >> 1; piVar6 = piVar6 + 1, uVar4 != 0; uVar4 = uVar4 - 1) {
    *piVar6 = 0;
  }
  for (uVar3 = (uint)((uVar3 & 1) != 0); uVar3 != 0; uVar3 = uVar3 - 1) {
    piVar1 = piVar6;
    piVar6 = (int *)((int)piVar6 + 1);
    *(undefined *)piVar1 = 0;
  }
  return (int *)piVar8;
}



/* ---- FUN_1158_1fe2 @ 1158:1fe2  (45 octets) ---- */

void __cdecl16far FUN_1158_1fe2(void)

{
  undefined2 *puVar1;
  int unaff_BP;
  undefined2 unaff_SS;
  undefined4 uVar2;
  
  puVar1 = (undefined2 *)((int)*(undefined4 *)(unaff_BP + 6) + -0xc);
  uVar2 = (*(code *)*puVar1)();
  *(undefined2 *)(unaff_BP + 6) = (int)uVar2;
  *(undefined2 *)(unaff_BP + 8) = (int)((ulong)uVar2 >> 0x10);
  DAT_1160_1858 = &stack0x0000;
  return;
}



/* ---- FUN_1158_200f @ 1158:200f  (13 octets) ---- */

void __cdecl16far FUN_1158_200f(void)

{
  undefined2 *puVar1;
  int unaff_BP;
  undefined2 unaff_SS;
  
  puVar1 = (undefined2 *)((int)*(undefined4 *)*(undefined4 *)(unaff_BP + 6) + -8);
  (*(code *)*puVar1)();
  return;
}



/* ---- FUN_1158_2038 @ 1158:2038  (41 octets) ---- */

void FUN_1158_2038(undefined2 param_1_00,undefined4 *param_1,int *param_2)

{
  uint *puVar1;
  bool bVar2;
  
  bVar2 = *param_2 == 0;
  if (0 < *param_2) {
    puVar1 = (uint *)*param_1;
    FUN_1158_2085();
    if (!bVar2) {
                    /* WARNING: Could not recover jumptable at 0x11582051. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(ulong)*puVar1)();
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x1158205d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(ulong)*(uint *)((int)*param_1 + -0x10))();
  return;
}



/* ---- FUN_1158_206a @ 1158:206a  (17 octets) ---- */

void FUN_1158_206a(void)

{
  uint *puVar1;
  undefined4 *unaff_DI;
  undefined2 unaff_ES;
  undefined in_ZF;
  
  puVar1 = (uint *)*unaff_DI;
  FUN_1158_2085();
  if (!(bool)in_ZF) {
                    /* WARNING: Could not recover jumptable at 0x11582072. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(ulong)*puVar1)();
    return;
  }
  FUN_1158_008f();
  return;
}



/* ---- FUN_1158_2085 @ 1158:2085  (43 octets) ---- */

void __cdecl16near FUN_1158_2085(void)

{
  undefined4 *puVar1;
  int *piVar2;
  int in_AX;
  int iVar3;
  int unaff_DI;
  int *piVar4;
  int unaff_ES;
  bool bVar5;
  
  do {
    piVar4 = (int *)*(int *)(unaff_DI + -0x1a);
    if (piVar4 != (int *)0x0) {
      iVar3 = *piVar4;
      piVar4 = piVar4 + 1;
      bVar5 = piVar4 == (int *)0x0;
      do {
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        piVar2 = piVar4;
        piVar4 = piVar4 + 1;
        bVar5 = in_AX == *piVar2;
      } while (!bVar5);
      if (bVar5) {
        return;
      }
    }
    puVar1 = (undefined4 *)(unaff_DI + -0x14);
    unaff_ES = (int)((ulong)*puVar1 >> 0x10);
    unaff_DI = (int)*puVar1;
    if (unaff_ES == 0 && unaff_DI == 0) {
      return;
    }
  } while( true );
}



/* ---- FUN_1158_20dd @ 1158:20dd  (16 octets) ---- */

undefined4 __stdcall16far FUN_1158_20dd(undefined2 *param_1)

{
  return CONCAT22(((undefined2 *)param_1)[1],*param_1);
}



/* ---- FUN_1158_20ed @ 1158:20ed  (27 octets) ---- */

void __stdcall16far FUN_1158_20ed(undefined4 param_1,byte *param_2)

{
  byte bVar1;
  byte *pbVar2;
  uint uVar3;
  byte *pbVar4;
  undefined2 uVar5;
  
  uVar5 = (undefined2)((ulong)param_1 >> 0x10);
  pbVar2 = (byte *)*(undefined2 *)((int)param_1 + -0x18);
  pbVar4 = (byte *)param_2;
  bVar1 = *pbVar2;
  *param_2 = bVar1;
  uVar3 = (uint)bVar1;
  while( true ) {
    pbVar4 = pbVar4 + 1;
    pbVar2 = pbVar2 + 1;
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    *pbVar4 = *pbVar2;
  }
  return;
}



/* ---- FUN_1158_2108 @ 1158:2108  (17 octets) ---- */

undefined4 __stdcall16far FUN_1158_2108(undefined4 param_1)

{
  undefined2 uVar1;
  
  uVar1 = (undefined2)((ulong)param_1 >> 0x10);
  return CONCAT22(*(undefined2 *)((int)param_1 + -0x12),*(undefined2 *)((int)param_1 + -0x14));
}



/* ---- FUN_1158_2126 @ 1158:2126  (21 octets) ---- */

void __stdcall16far FUN_1158_2126(void)

{
  return;
}



/* ---- FUN_1158_213b @ 1158:213b  (79 octets) ---- */

undefined4 __stdcall16far FUN_1158_213b(undefined4 param_1,byte *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  bool bVar8;
  undefined4 uVar9;
  undefined2 uVar10;
  
  uVar10 = 0x1160;
  iVar2 = (uint)*param_2 << 8;
  iVar7 = (int)((ulong)param_1 >> 0x10);
  iVar5 = (int)param_1;
  iVar4 = 0;
  do {
    piVar6 = (int *)*(int *)(iVar5 + -0x1c);
    if (piVar6 != (int *)0x0) {
      iVar3 = *piVar6;
      piVar6 = piVar6 + 1;
      do {
        uVar9 = CONCAT22(iVar3,iVar2);
        iVar4 = CONCAT11((char)((uint)iVar4 >> 8),*(char *)(piVar6 + 2));
        if (*(char *)(piVar6 + 2) == (char)((uint)iVar2 >> 8)) {
          bVar8 = (byte *)param_2 == (byte *)0xffff;
          uVar9 = FUN_1158_222f(iVar5,piVar6,uVar10);
          if (bVar8) {
            iVar2 = *piVar6;
            iVar4 = piVar6[1];
            goto LAB_1158_2185;
          }
        }
        iVar2 = (int)uVar9;
        piVar6 = (int *)((int)piVar6 + iVar4 + 5);
        iVar3 = (int)((ulong)uVar9 >> 0x10) + -1;
      } while (iVar3 != 0);
    }
    puVar1 = (undefined4 *)(iVar5 + -0x14);
    iVar7 = (int)((ulong)*puVar1 >> 0x10);
    iVar5 = (int)*puVar1;
  } while (iVar7 != 0 || iVar5 != 0);
  iVar2 = 0;
  iVar4 = 0;
LAB_1158_2185:
  return CONCAT22(iVar4,iVar2);
}



/* ---- FUN_1158_218a @ 1158:218a  (80 octets) ---- */

void __stdcall16far FUN_1158_218a(undefined4 param_1,int param_2,int param_3,byte *param_4)

{
  undefined4 *puVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int *piVar8;
  byte *pbVar9;
  int iVar10;
  
  iVar10 = (int)((ulong)param_1 >> 0x10);
  iVar7 = (int)param_1;
  do {
    piVar8 = (int *)*(int *)(iVar7 + -0x1c);
    if (piVar8 != (int *)0x0) {
      iVar5 = *piVar8;
      piVar8 = piVar8 + 1;
      do {
        if ((param_2 == *piVar8) && (param_3 == piVar8[1])) {
          pbVar9 = (byte *)param_4;
          pbVar3 = (byte *)((int)piVar8 + 5);
          bVar4 = *(byte *)(piVar8 + 2);
          *param_4 = bVar4;
          for (uVar6 = (uint)bVar4; pbVar9 = pbVar9 + 1, uVar6 != 0; uVar6 = uVar6 - 1) {
            pbVar2 = pbVar3;
            pbVar3 = pbVar3 + 1;
            *pbVar9 = *pbVar2;
          }
          return;
        }
        piVar8 = (int *)((int)piVar8 + *(byte *)(piVar8 + 2) + 5);
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
    puVar1 = (undefined4 *)(iVar7 + -0x14);
    iVar10 = (int)((ulong)*puVar1 >> 0x10);
    iVar7 = (int)*puVar1;
    if (iVar10 == 0 && iVar7 == 0) {
      *param_4 = 0;
      return;
    }
  } while( true );
}



/* ---- FUN_1158_21da @ 1158:21da  (85 octets) ---- */

undefined4 __stdcall16far FUN_1158_21da(undefined4 *param_1,byte *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  bool bVar8;
  undefined4 uVar9;
  undefined2 uVar10;
  
  uVar10 = 0x1160;
  iVar2 = (uint)*param_2 << 8;
  iVar7 = (int)((ulong)*param_1 >> 0x10);
  iVar5 = (int)*param_1;
  iVar4 = 0;
  do {
    piVar6 = (int *)*(int *)(iVar5 + -0x1e);
    if (piVar6 != (int *)0x0) {
      iVar3 = *piVar6;
      piVar6 = piVar6 + 2;
      do {
        uVar9 = CONCAT22(iVar3,iVar2);
        iVar4 = CONCAT11((char)((uint)iVar4 >> 8),*(char *)(piVar6 + 2));
        if (*(char *)(piVar6 + 2) == (char)((uint)iVar2 >> 8)) {
          bVar8 = (byte *)param_2 == (byte *)0xffff;
          uVar9 = FUN_1158_222f(iVar5,piVar6,uVar10);
          if (bVar8) {
            iVar2 = (int)(undefined4 *)param_1 + *piVar6;
            goto LAB_1158_222a;
          }
        }
        iVar2 = (int)uVar9;
        piVar6 = (int *)((int)piVar6 + iVar4 + 5);
        iVar3 = (int)((ulong)uVar9 >> 0x10) + -1;
      } while (iVar3 != 0);
    }
    puVar1 = (undefined4 *)(iVar5 + -0x14);
    iVar7 = (int)((ulong)*puVar1 >> 0x10);
    iVar5 = (int)*puVar1;
  } while (iVar7 != 0 || iVar5 != 0);
  iVar2 = 0;
  param_1._2_2_ = 0;
LAB_1158_222a:
  return CONCAT22(param_1._2_2_,iVar2);
}



/* ---- FUN_1158_222f @ 1158:222f  (14 octets) ---- */

void __cdecl16near FUN_1158_222f(void)

{
  byte *pbVar1;
  byte *pbVar2;
  byte in_AH;
  uint uVar3;
  byte *unaff_SI;
  byte *unaff_DI;
  undefined2 unaff_ES;
  
  uVar3 = (uint)in_AH;
  do {
    pbVar2 = unaff_SI;
    unaff_SI = unaff_SI + 1;
    pbVar1 = unaff_DI;
    unaff_DI = unaff_DI + 1;
    uVar3 = uVar3 - 1;
  } while (uVar3 != 0 && ((*pbVar2 ^ *pbVar1) & 0xdf) == 0);
  return;
}



/* ---- FUN_1158_223d @ 1158:223d  (24 octets) ---- */

int __stdcall16far FUN_1158_223d(void)

{
  int iVar1;
  bool bVar2;
  
  bVar2 = true;
  iVar1 = FUN_1158_229c();
  if (bVar2) {
    iVar1 = iVar1 + 1;
  }
  return iVar1;
}



/* ---- FUN_1158_2255 @ 1158:2255  (30 octets) ---- */

uint __stdcall16far FUN_1158_2255(undefined2 param_1,undefined2 param_2,undefined4 param_3)

{
  uint uVar1;
  bool bVar2;
  
  uVar1 = (uint)((ulong)param_3 >> 0x10) | (uint)param_3;
  if (uVar1 != 0) {
    bVar2 = true;
    uVar1 = FUN_1158_2299();
    if (bVar2) {
      uVar1 = uVar1 + 1;
    }
  }
  return uVar1;
}



/* ---- FUN_1158_2273 @ 1158:2273  (38 octets) ---- */

void __stdcall16far FUN_1158_2273(undefined2 param_1,undefined2 param_2,undefined4 param_3)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  
  bVar1 = (int)param_3 == 0;
  bVar2 = (int)((ulong)param_3 >> 0x10) == 0;
  bVar3 = bVar1 && bVar2;
  if (!bVar1 || !bVar2) {
    FUN_1158_2299();
    if (!bVar3) {
      FUN_1158_0060();
      return;
    }
  }
  return;
}



/* ---- FUN_1158_2299 @ 1158:2299  (3 octets) ---- */

void FUN_1158_2299(void)

{
  undefined4 *puVar1;
  int in_CX;
  int in_BX;
  undefined4 *unaff_DI;
  int iVar2;
  undefined2 unaff_ES;
  int iVar3;
  
  iVar3 = (int)((ulong)*unaff_DI >> 0x10);
  iVar2 = (int)*unaff_DI;
  while ((iVar2 != in_CX || (iVar3 != in_BX))) {
    puVar1 = (undefined4 *)(iVar2 + -0x14);
    iVar3 = (int)((ulong)*puVar1 >> 0x10);
    iVar2 = (int)*puVar1;
    if (iVar3 == 0 && iVar2 == 0) {
      return;
    }
  }
  return;
}



/* ---- FUN_1158_229c @ 1158:229c  (22 octets) ---- */

void __cdecl16near FUN_1158_229c(void)

{
  undefined4 *puVar1;
  int in_CX;
  int in_BX;
  int unaff_DI;
  int unaff_ES;
  
  while ((unaff_DI != in_CX || (unaff_ES != in_BX))) {
    puVar1 = (undefined4 *)(unaff_DI + -0x14);
    unaff_ES = (int)((ulong)*puVar1 >> 0x10);
    unaff_DI = (int)*puVar1;
    if (unaff_ES == 0 && unaff_DI == 0) {
      return;
    }
  }
  return;
}




/* Simstrat (FR).EXE - segment Code42 - 193 fonctions
   Decompile par Ghidra 11.2.1 (x86 16 bits, chargeur NE). */

/* ---- FUN_1148_066e @ 1148:066e  (26 octets) ---- */

undefined4 __stdcall16far FUN_1148_066e(undefined2 param_1,undefined2 param_2)

{
  return CONCAT22(param_1,param_2);
}



/* ---- FUN_1148_0688 @ 1148:0688  (38 octets) ---- */

void __stdcall16far
FUN_1148_0688(undefined2 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4,
             undefined2 *param_5)

{
  undefined2 *puVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_5 >> 0x10);
  puVar1 = (undefined2 *)param_5;
  *param_5 = param_4;
  puVar1[1] = param_3;
  puVar1[2] = param_2;
  puVar1[3] = param_1;
  return;
}



/* ---- FUN_1148_06ae @ 1148:06ae  (44 octets) ---- */

void __stdcall16far FUN_1148_06ae(int param_1,int param_2,int param_3,int param_4,int *param_5)

{
  int *piVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_5 >> 0x10);
  piVar1 = (int *)param_5;
  *param_5 = param_4;
  piVar1[1] = param_3;
  piVar1[2] = param_4 + param_2;
  piVar1[3] = param_3 + param_1;
  return;
}



/* ---- FUN_1148_06da @ 1148:06da  (28 octets) ---- */

undefined4 FUN_1148_06da(undefined4 param_1)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  
  uVar2 = 0;
  uVar4 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = *(int *)((int)param_1 + -0x1e);
  uVar3 = 0;
  if (iVar1 != 0) {
    uVar2 = *(undefined2 *)(iVar1 + 2);
    uVar3 = uVar4;
  }
  return CONCAT22(uVar3,uVar2);
}



/* ---- FUN_1148_06f6 @ 1148:06f6  (69 octets) ---- */

void FUN_1148_06f6(undefined4 param_1)

{
  undefined extraout_AH;
  undefined2 unaff_SS;
  undefined4 uVar1;
  undefined *puVar2;
  undefined local_10a [256];
  undefined2 local_a;
  undefined2 local_8;
  undefined local_6;
  
  puVar2 = local_10a;
  local_8 = (undefined2)((ulong)param_1 >> 0x10);
  local_a = (undefined2)param_1;
  local_6 = 4;
  FUN_1150_0950(0,&local_a,unaff_SS,0xf007);
  uVar1 = FUN_1150_28e6(0x1bb,0x1148,CONCAT11(extraout_AH,1),puVar2,unaff_SS);
  FUN_1158_1399(0x1150,uVar1);
  return;
}



/* ---- FUN_1148_073b @ 1148:073b  (160 octets) ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __stdcall16far FUN_1148_073b(undefined4 param_1)

{
  undefined2 *puVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 unaff_CS;
  undefined2 unaff_SS;
  undefined *puVar4;
  undefined2 uVar5;
  undefined local_10a [256];
  int local_a;
  int local_8;
  undefined4 local_6;
  
  local_a = *(int *)((int)_DAT_1160_1702 + 8) + -1;
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  if (local_a < 0) {
LAB_1148_0796:
    puVar1 = (undefined2 *)((int)*_DAT_1160_1706 + 0x40);
    local_8 = (*(code *)*puVar1)(unaff_CS,(undefined4 *)_DAT_1160_1706,
                                 (int)((ulong)_DAT_1160_1706 >> 0x10),(int)param_1,uVar3);
    if (local_8 < 0) {
      local_6 = 0;
    }
    else {
      puVar1 = (undefined2 *)((int)*_DAT_1160_1706 + 0x14);
      local_6 = (*(code *)*puVar1)(unaff_CS,(undefined4 *)_DAT_1160_1706,
                                   (int)((ulong)_DAT_1160_1706 >> 0x10),local_8);
    }
  }
  else {
    local_8 = 0;
    while( true ) {
      local_6 = FUN_1148_0dd0((int)_DAT_1160_1702,(int)((ulong)_DAT_1160_1702 >> 0x10),local_8);
      puVar4 = local_10a;
      uVar5 = unaff_SS;
      FUN_1158_20ed(local_6);
      unaff_CS = 0x1150;
      iVar2 = FUN_1150_0730((int)param_1,uVar3,puVar4,uVar5);
      if (iVar2 == 0) break;
      if (local_8 == local_a) goto LAB_1148_0796;
      local_8 = local_8 + 1;
    }
  }
  return local_6;
}



/* ---- FUN_1148_07db @ 1148:07db  (46 octets) ---- */

long __stdcall16far FUN_1148_07db(undefined4 param_1)

{
  undefined2 uVar1;
  long lVar2;
  
  uVar1 = (undefined2)((ulong)param_1 >> 0x10);
  lVar2 = FUN_1148_073b((int)param_1,uVar1);
  if (lVar2 == 0) {
    FUN_1148_06f6((int)param_1,uVar1);
  }
  return lVar2;
}



/* ---- FUN_1148_0809 @ 1148:0809  (149 octets) ---- */

undefined4 FUN_1148_0809(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined2 unaff_SS;
  undefined4 uVar5;
  undefined *puVar6;
  undefined local_10e [256];
  int local_e;
  int *local_c;
  int local_8;
  undefined4 local_6;
  
  uVar5 = FUN_1158_20dd((int)param_2,(int)((ulong)param_2 >> 0x10));
  local_c = (int *)FUN_1148_06da(uVar5);
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  if ((local_c == (int *)0x0) || (local_e = *local_c + -1, local_e < 0)) {
LAB_1148_0884:
    local_6 = FUN_1148_07db((int)param_1,uVar3);
  }
  else {
    local_8 = 0;
    while( true ) {
      uVar4 = (undefined2)((ulong)local_c >> 0x10);
      iVar2 = ((int *)local_c)[local_8 * 2 + 1];
      iVar1 = ((int *)local_c)[local_8 * 2 + 2];
      local_6 = CONCAT22(iVar1,iVar2);
      puVar6 = local_10e;
      uVar4 = unaff_SS;
      FUN_1158_20ed(iVar2,iVar1);
      iVar2 = FUN_1150_0730((int)param_1,uVar3,puVar6,uVar4);
      if (iVar2 == 0) break;
      if (local_8 == local_e) goto LAB_1148_0884;
      local_8 = local_8 + 1;
    }
  }
  return local_6;
}



/* ---- FUN_1148_089e @ 1148:089e  (188 octets) ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __stdcall16far FUN_1148_089e(undefined4 param_1)

{
  int iVar1;
  undefined extraout_AH;
  undefined2 unaff_SS;
  long lVar2;
  undefined4 uVar3;
  undefined *puVar4;
  undefined2 uVar5;
  undefined local_14a [8];
  undefined local_142 [248];
  undefined *local_4a;
  undefined local_42 [64];
  
  while( true ) {
    iVar1 = FUN_1148_0e58((int)_DAT_1160_1702,(int)((ulong)_DAT_1160_1702 >> 0x10),(int)param_1,
                          param_1._2_2_);
    if (iVar1 != -1) {
      return;
    }
    puVar4 = local_142;
    uVar5 = unaff_SS;
    FUN_1158_20ed((int)param_1,param_1._2_2_);
    FUN_1158_17e7(0x3f,local_42,unaff_SS,puVar4,uVar5);
    lVar2 = FUN_1148_073b(local_42,unaff_SS);
    if (lVar2 != 0) {
      puVar4 = local_14a;
      local_4a = local_42;
      uVar5 = unaff_SS;
      FUN_1150_0950(0,&local_4a,unaff_SS,0xf011);
      uVar3 = FUN_1150_28e6(0x138,0x1148,CONCAT11(extraout_AH,1),puVar4,uVar5);
      FUN_1158_1399(0x1150,uVar3);
    }
    FUN_1148_0c2b((int)_DAT_1160_1702,(int)((ulong)_DAT_1160_1702 >> 0x10),(int)param_1,
                  param_1._2_2_);
    if ((param_1._2_2_ == 0x1148) && ((int)param_1 == 0x2d1)) break;
    param_1 = FUN_1158_2108((int)param_1,param_1._2_2_);
  }
  return;
}



/* ---- FUN_1148_095a @ 1148:095a  (93 octets) ---- */

/* WARNING: Unable to track spacebase fully for stack */

void __stdcall16far FUN_1148_095a(int param_1,undefined *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  undefined *puVar5;
  int *piVar6;
  undefined2 unaff_CS;
  undefined2 unaff_SS;
  int aiStack_e [5];
  int local_4;
  
  iVar3 = param_1 + 1;
  piVar6 = aiStack_e + iVar3 * -2 + 4;
  puVar5 = (undefined *)param_2;
  for (iVar4 = iVar3 * 4; iVar4 != 0; iVar4 = iVar4 + -1) {
    puVar2 = (undefined *)piVar6;
    piVar6 = (int *)((int)piVar6 + 1);
    puVar1 = puVar5;
    puVar5 = puVar5 + 1;
    *puVar2 = *puVar1;
  }
  aiStack_e[4] = param_1;
  if (-1 < param_1) {
    local_4 = 0;
    while( true ) {
      iVar4 = local_4 * 2;
      aiStack_e[iVar3 * -2 + 3] = (aiStack_e + iVar3 * -2 + iVar4 + 4)[1];
      aiStack_e[iVar3 * -2 + 2] = aiStack_e[iVar3 * -2 + iVar4 + 4];
      aiStack_e[iVar3 * -2 + 1] = unaff_CS;
      unaff_CS = 0x1148;
      aiStack_e[iVar3 * -2] = 0x9ab;
      FUN_1148_089e();
      if (local_4 == aiStack_e[4]) break;
      local_4 = local_4 + 1;
    }
  }
  return;
}



/* ---- FUN_1148_09e1 @ 1148:09e1  (85 octets) ---- */

undefined4 __stdcall16far
FUN_1148_09e1(undefined4 param_1,char param_2,undefined2 param_3,undefined2 param_4,
             undefined2 param_5,undefined2 param_6,undefined2 param_7,undefined2 param_8)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uStack_a;
  
  if (param_2 != '\0') {
    FUN_1158_1fe2();
  }
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  *(undefined2 *)(iVar1 + 4) = param_7;
  *(undefined2 *)(iVar1 + 6) = param_8;
  *(undefined2 *)(iVar1 + 8) = param_5;
  *(undefined2 *)(iVar1 + 10) = param_6;
  *(undefined2 *)(iVar1 + 0xc) = param_3;
  *(undefined2 *)(iVar1 + 0xe) = param_4;
  if (param_2 != '\0') {
    DAT_1160_1858 = uStack_a;
  }
  return param_1;
}



/* ---- FUN_1148_0a36 @ 1148:0a36  (54 octets) ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __stdcall16far
FUN_1148_0a36(undefined2 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4,
             undefined2 param_5,undefined2 param_6)

{
  undefined4 uVar1;
  
  uVar1 = FUN_1148_09e1(0x9d7,0x1148,1,param_1,param_2,param_3,param_4,param_5,param_6);
  FUN_1148_0c2b((int)_DAT_1160_170a,(int)((ulong)_DAT_1160_170a >> 0x10),uVar1);
  return;
}



/* ---- FUN_1148_0a78 @ 1148:0a78  (289 octets) ---- */

void __cdecl16far FUN_1148_0a78(undefined2 param_1,undefined2 param_2,undefined4 param_3)

{
  undefined2 uVar1;
  undefined4 uVar2;
  undefined *puStack_16a;
  undefined *puStack_168;
  undefined2 uStack_166;
  undefined2 *puStack_164;
  undefined2 local_56;
  undefined2 local_54;
  undefined local_52;
  undefined4 local_e;
  int local_a;
  int local_8;
  undefined2 local_6;
  undefined2 local_4;
  
  uVar1 = (undefined2)((ulong)param_3 >> 0x10);
  puStack_164 = (undefined2 *)0xa8d;
  FUN_1150_0d6a();
  puStack_164 = (undefined2 *)0xa9f;
  local_8 = FINDRESOURCE();
  if (local_8 == 0) {
    local_52 = 4;
    puStack_164 = (undefined2 *)0x0;
    uStack_166 = 0x14d0;
    puStack_168 = (undefined *)0xace;
    local_56 = (int)param_3;
    local_54 = uVar1;
    FUN_1150_0950();
    puStack_164 = (undefined2 *)0x1150;
    uStack_166 = 0xade;
    FUN_1150_28e6();
    FUN_1158_1399();
  }
  local_a = ACCESSRESOURCE();
  if (local_a == 0) {
    local_52 = 4;
    puStack_164 = &local_56;
    uStack_166 = 0;
    puStack_168 = (undefined *)0x14d0;
    puStack_16a = (undefined *)0xb20;
    local_56 = (int)param_3;
    local_54 = uVar1;
    FUN_1150_0950();
    puStack_164 = (undefined2 *)0x1ea;
    uStack_166 = 0x1150;
    puStack_168 = (undefined *)0xb30;
    FUN_1150_28e6();
    FUN_1158_1399();
  }
  DAT_1160_1858 = (undefined **)&stack0xfe9e;
  puStack_164 = (undefined2 *)local_a;
  uStack_166 = 0xa01;
  puStack_168 = (undefined *)0x1148;
  puStack_16a = (undefined *)0x4b2;
  uVar2 = FUN_1148_2623();
  puStack_164 = (undefined2 *)0x1148;
  uStack_166 = 0xa6c;
  puStack_16a = (undefined *)DAT_1160_1858;
  DAT_1160_1858 = &puStack_16a;
  puStack_168 = &stack0xfffe;
  local_e = uVar2;
  local_6 = FUN_1148_25bb(uVar2,param_1,param_2);
  local_4 = (undefined2)((ulong)uVar2 >> 0x10);
  DAT_1160_1858 = (undefined **)uVar2;
  FUN_1158_1f7f(local_e);
  return;
}



/* ---- FUN_1148_0bb8 @ 1148:0bb8  (42 octets) ---- */

char * __stdcall16far FUN_1148_0bb8(undefined4 param_1,char *param_2,undefined2 param_3)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  undefined2 uVar5;
  bool bVar6;
  
  uVar5 = (undefined2)((ulong)param_1 >> 0x10);
  iVar2 = (int)param_1 - (int)param_2;
  iVar3 = iVar2 + -1;
  if (iVar2 != 0 && iVar3 != 0) {
    pcVar4 = (char *)((int)param_1 + -1);
    bVar6 = pcVar4 == (char *)0x0;
    do {
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      pcVar1 = pcVar4;
      pcVar4 = pcVar4 + -1;
      bVar6 = *pcVar1 == '\n';
    } while (!bVar6);
    if (bVar6) {
      param_2 = pcVar4 + 2;
      param_3 = uVar5;
    }
  }
  return (char *)CONCAT22(param_3,param_2);
}



/* ---- FUN_1148_0be2 @ 1148:0be2  (45 octets) ---- */

void FUN_1148_0be2(undefined2 param_1)

{
  undefined extraout_AH;
  undefined2 unaff_SS;
  undefined4 uVar1;
  undefined *puVar2;
  undefined local_102 [256];
  
  puVar2 = local_102;
  FUN_1150_092b(param_1);
  uVar1 = FUN_1150_28e6(0x217,0x1148,CONCAT11(extraout_AH,1),puVar2,unaff_SS);
  FUN_1158_1399(0x1150,uVar1);
  return;
}



/* ---- FUN_1148_0c0f @ 1148:0c0f  (28 octets) ---- */

void __stdcall16far FUN_1148_0c0f(undefined4 param_1,char param_2)

{
  FUN_1148_0c75((int)param_1,(int)((ulong)param_1 >> 0x10));
  if (param_2 != '\0') {
    FUN_1158_200f();
  }
  return;
}



/* ---- FUN_1148_0c2b @ 1148:0c2b  (74 octets) ---- */

int __stdcall16far FUN_1148_0c2b(undefined4 *param_1,undefined2 param_2,undefined2 param_3)

{
  int iVar1;
  undefined2 *puVar2;
  undefined4 *puVar3;
  undefined2 *puVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  
  uVar5 = (undefined2)((ulong)param_1 >> 0x10);
  puVar3 = (undefined4 *)param_1;
  iVar1 = *(int *)(puVar3 + 2);
  if (iVar1 == *(int *)((int)puVar3 + 10)) {
    puVar2 = (undefined2 *)((int)*param_1 + 4);
    (*(code *)*puVar2)();
  }
  uVar6 = (undefined2)((ulong)puVar3[1] >> 0x10);
  puVar4 = (undefined2 *)((int)puVar3[1] + iVar1 * 4);
  *puVar4 = param_2;
  puVar4[1] = param_3;
  *(int *)(puVar3 + 2) = *(int *)(puVar3 + 2) + 1;
  return iVar1;
}



/* ---- FUN_1148_0c75 @ 1148:0c75  (31 octets) ---- */

void __stdcall16far FUN_1148_0c75(undefined4 param_1)

{
  undefined2 uVar1;
  
  uVar1 = (undefined2)((ulong)param_1 >> 0x10);
  FUN_1148_108b((int)param_1,uVar1,0);
  FUN_1148_0fd8((int)param_1,uVar1,0);
  return;
}



/* ---- FUN_1148_0c94 @ 1148:0c94  (103 octets) ---- */

void __stdcall16far FUN_1148_0c94(undefined4 *param_1,int param_2)

{
  undefined4 *puVar1;
  undefined2 uVar2;
  
  puVar1 = (undefined4 *)param_1;
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  if ((param_2 < 0) || (*(int *)(puVar1 + 2) <= param_2)) {
    (*(code *)*(undefined2 *)(undefined2 *)*param_1)();
  }
  *(int *)(puVar1 + 2) = *(int *)(puVar1 + 2) + -1;
  if (param_2 < *(int *)(puVar1 + 2)) {
    FUN_1158_1ec1((*(int *)(puVar1 + 2) - param_2) * 4,(int)puVar1[1] + param_2 * 4,
                  (int)((ulong)puVar1[1] >> 0x10),(int)puVar1[1] + (param_2 + 1) * 4,
                  (int)((ulong)puVar1[1] >> 0x10));
  }
  return;
}



/* ---- FUN_1148_0cfb @ 1148:0cfb  (13 octets) ---- */

void __stdcall16far FUN_1148_0cfb(void)

{
  FUN_1148_0be2(0xf00b);
  return;
}



/* ---- FUN_1148_0d08 @ 1148:0d08  (152 octets) ---- */

void __stdcall16far FUN_1148_0d08(undefined4 *param_1,int param_2,int param_3)

{
  undefined2 uVar1;
  undefined4 *puVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  undefined2 uVar8;
  undefined2 uVar9;
  
  puVar2 = (undefined4 *)param_1;
  uVar5 = (undefined2)((ulong)param_1 >> 0x10);
  if (-1 < param_3) {
    if (((param_3 < *(int *)(puVar2 + 2)) && (-1 < param_2)) && (param_2 < *(int *)(puVar2 + 2)))
    goto LAB_1148_0d38;
  }
  (*(code *)*(undefined2 *)(undefined2 *)*param_1)();
LAB_1148_0d38:
  uVar6 = (undefined2)((ulong)puVar2[1] >> 0x10);
  puVar3 = (undefined2 *)((int)puVar2[1] + param_3 * 4);
  uVar1 = *puVar3;
  uVar6 = puVar3[1];
  uVar7 = (undefined2)((ulong)puVar2[1] >> 0x10);
  puVar3 = (undefined2 *)((int)puVar2[1] + param_2 * 4);
  uVar9 = puVar3[1];
  uVar8 = (undefined2)((ulong)puVar2[1] >> 0x10);
  puVar4 = (undefined2 *)((int)puVar2[1] + param_3 * 4);
  *puVar4 = *puVar3;
  puVar4[1] = uVar9;
  uVar9 = (undefined2)((ulong)puVar2[1] >> 0x10);
  puVar3 = (undefined2 *)((int)puVar2[1] + param_2 * 4);
  *puVar3 = uVar1;
  puVar3[1] = uVar6;
  return;
}



/* ---- FUN_1148_0da0 @ 1148:0da0  (48 octets) ---- */

undefined4 * __stdcall16far FUN_1148_0da0(undefined4 *param_1)

{
  undefined2 *puVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  if (*(int *)((undefined4 *)param_1 + 2) == *(int *)((int)(undefined4 *)param_1 + 10)) {
    puVar1 = (undefined2 *)((int)*param_1 + 4);
    (*(code *)*puVar1)();
  }
  return param_1;
}



/* ---- FUN_1148_0dd0 @ 1148:0dd0  (71 octets) ---- */

undefined4 __stdcall16far FUN_1148_0dd0(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  undefined2 *puVar2;
  undefined2 uVar3;
  
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  if ((param_2 < 0) || (*(int *)((undefined4 *)param_1 + 2) <= param_2)) {
    (*(code *)*(undefined2 *)(undefined2 *)*param_1)();
  }
  uVar1 = ((undefined4 *)param_1)[1];
  uVar3 = (undefined2)((ulong)uVar1 >> 0x10);
  puVar2 = (undefined2 *)((int)uVar1 + param_2 * 4);
  return CONCAT22(puVar2[1],*puVar2);
}



/* ---- FUN_1148_0e17 @ 1148:0e17  (65 octets) ---- */

void __stdcall16far FUN_1148_0e17(undefined4 param_1)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 local_4;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  if (*(int *)(iVar1 + 10) < 9) {
    if (*(int *)(iVar1 + 10) < 5) {
      local_4 = 4;
    }
    else {
      local_4 = 8;
    }
  }
  else {
    local_4 = 0x10;
  }
  FUN_1148_0fd8(iVar1,uVar2,*(int *)(iVar1 + 10) + local_4);
  return;
}



/* ---- FUN_1148_0e58 @ 1148:0e58  (79 octets) ---- */

int __stdcall16far FUN_1148_0e58(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  int local_4;
  
  local_4 = 0;
  while( true ) {
    uVar3 = (undefined2)((ulong)param_1 >> 0x10);
    iVar1 = (int)param_1;
    if ((*(int *)(iVar1 + 8) <= local_4) ||
       ((uVar4 = (undefined2)((ulong)*(undefined4 *)(iVar1 + 4) >> 0x10),
        piVar2 = (int *)((int)*(undefined4 *)(iVar1 + 4) + local_4 * 4), piVar2[1] == param_3 &&
        (*piVar2 == param_2)))) break;
    local_4 = local_4 + 1;
  }
  if (local_4 == *(int *)(iVar1 + 8)) {
    local_4 = -1;
  }
  return local_4;
}



/* ---- FUN_1148_0ea7 @ 1148:0ea7  (156 octets) ---- */

void __stdcall16far
FUN_1148_0ea7(undefined4 *param_1,undefined2 param_2,undefined2 param_3,int param_4)

{
  undefined2 *puVar1;
  undefined4 *puVar2;
  undefined2 *puVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  
  puVar2 = (undefined4 *)param_1;
  uVar4 = (undefined2)((ulong)param_1 >> 0x10);
  if ((param_4 < 0) || (*(int *)(puVar2 + 2) < param_4)) {
    (*(code *)*(undefined2 *)(undefined2 *)*param_1)();
  }
  if (*(int *)(puVar2 + 2) == *(int *)((int)puVar2 + 10)) {
    puVar1 = (undefined2 *)((int)*param_1 + 4);
    (*(code *)*puVar1)();
  }
  if (param_4 < *(int *)(puVar2 + 2)) {
    FUN_1158_1ec1((*(int *)(puVar2 + 2) - param_4) * 4,(int)puVar2[1] + (param_4 + 1) * 4,
                  (int)((ulong)puVar2[1] >> 0x10),(int)puVar2[1] + param_4 * 4,
                  (int)((ulong)puVar2[1] >> 0x10));
  }
  uVar5 = (undefined2)((ulong)puVar2[1] >> 0x10);
  puVar3 = (undefined2 *)((int)puVar2[1] + param_4 * 4);
  *puVar3 = param_2;
  puVar3[1] = param_3;
  *(int *)(puVar2 + 2) = *(int *)(puVar2 + 2) + 1;
  return;
}



/* ---- FUN_1148_0f43 @ 1148:0f43  (36 octets) ---- */

undefined4 __stdcall16far FUN_1148_0f43(undefined4 param_1)

{
  undefined2 uVar1;
  undefined4 uVar2;
  
  uVar1 = (undefined2)((ulong)param_1 >> 0x10);
  uVar2 = FUN_1148_0dd0((int)param_1,uVar1,*(int *)((int)param_1 + 8) + -1);
  return uVar2;
}



/* ---- FUN_1148_0f67 @ 1148:0f67  (64 octets) ---- */

void __stdcall16far
FUN_1148_0f67(undefined4 *param_1,undefined2 param_2,undefined2 param_3,int param_4)

{
  undefined4 uVar1;
  undefined2 *puVar2;
  undefined2 uVar3;
  
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  if ((param_4 < 0) || (*(int *)((undefined4 *)param_1 + 2) <= param_4)) {
    (*(code *)*(undefined2 *)(undefined2 *)*param_1)();
  }
  uVar1 = ((undefined4 *)param_1)[1];
  uVar3 = (undefined2)((ulong)uVar1 >> 0x10);
  puVar2 = (undefined2 *)((int)uVar1 + param_4 * 4);
  *puVar2 = param_2;
  puVar2[1] = param_3;
  return;
}



/* ---- FUN_1148_0fa7 @ 1148:0fa7  (49 octets) ---- */

int __stdcall16far FUN_1148_0fa7(undefined4 param_1,undefined2 param_2,undefined2 param_3)

{
  int iVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = FUN_1148_0e58((int)param_1,uVar2,param_2,param_3);
  if (iVar1 != -1) {
    FUN_1148_0c94((int)param_1,uVar2,iVar1);
  }
  return iVar1;
}



/* ---- FUN_1148_0fd8 @ 1148:0fd8  (179 octets) ---- */

void __stdcall16far FUN_1148_0fd8(undefined4 *param_1,int param_2)

{
  undefined4 *puVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  undefined2 local_6;
  undefined2 local_4;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  puVar1 = (undefined4 *)param_1;
  if ((param_2 < *(int *)(puVar1 + 2)) || (0x3ffc < param_2)) {
    (*(code *)*(undefined2 *)(undefined2 *)*param_1)();
  }
  if (param_2 != *(int *)((int)puVar1 + 10)) {
    if (param_2 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = FUN_1158_0182(param_2 << 2);
      if (*(int *)(puVar1 + 2) != 0) {
        FUN_1158_1ec1(*(int *)(puVar1 + 2) << 2,uVar3,(int)puVar1[1],(int)((ulong)puVar1[1] >> 0x10)
                     );
      }
    }
    local_4 = (undefined2)((ulong)uVar3 >> 0x10);
    local_6 = (undefined2)uVar3;
    if (*(int *)((int)puVar1 + 10) != 0) {
      FUN_1158_019c(*(int *)((int)puVar1 + 10) << 2,*(undefined2 *)(puVar1 + 1),
                    *(undefined2 *)((int)puVar1 + 6));
    }
    *(undefined2 *)(puVar1 + 1) = local_6;
    *(undefined2 *)((int)puVar1 + 6) = local_4;
    *(int *)((int)puVar1 + 10) = param_2;
  }
  return;
}



/* ---- FUN_1148_108b @ 1148:108b  (111 octets) ---- */

void __stdcall16far FUN_1148_108b(undefined4 *param_1,int param_2)

{
  undefined4 *puVar1;
  undefined2 uVar2;
  
  puVar1 = (undefined4 *)param_1;
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  if ((param_2 < 0) || (0x3ffc < param_2)) {
    (*(code *)*(undefined2 *)(undefined2 *)*param_1)();
  }
  if (*(int *)((int)puVar1 + 10) < param_2) {
    FUN_1148_0fd8(puVar1,uVar2,param_2);
  }
  if (*(int *)(puVar1 + 2) < param_2) {
    FUN_1158_1ee5(0,(param_2 - *(int *)(puVar1 + 2)) * 4,(int)puVar1[1] + *(int *)(puVar1 + 2) * 4,
                  (int)((ulong)puVar1[1] >> 0x10));
  }
  *(int *)(puVar1 + 2) = param_2;
  return;
}



/* ---- FUN_1148_10fa @ 1148:10fa  (48 octets) ---- */

void __stdcall16far FUN_1148_10fa(undefined4 param_1,undefined4 *param_3)

{
  if ((undefined4 *)param_3 == (undefined4 *)0x0 && param_3._2_2_ == 0) {
    FUN_1148_112e((int)param_1,(int)((ulong)param_1 >> 0x10),0,0);
  }
  else {
    (*(code *)*(undefined2 *)(undefined2 *)*param_3)();
  }
  return;
}



/* ---- FUN_1148_112e @ 1148:112e  (159 octets) ---- */

void __stdcall16far FUN_1148_112e(undefined4 *param_1,undefined4 *param_2)

{
  undefined2 unaff_CS;
  undefined2 unaff_SS;
  undefined4 uVar1;
  undefined *puVar2;
  undefined2 uVar3;
  undefined *local_132;
  undefined local_122 [256];
  undefined local_22 [32];
  
  if ((undefined4 *)param_2 == (undefined4 *)0x0 && param_2._2_2_ == 0) {
    FUN_1158_17e7(0x1f,local_22,unaff_SS,0x112a,unaff_CS);
  }
  else {
    puVar2 = local_122;
    uVar3 = unaff_SS;
    FUN_1158_20ed((int)*param_2,(int)((ulong)*param_2 >> 0x10));
    FUN_1158_17e7(0x1f,local_22,unaff_SS,puVar2,uVar3);
  }
  uVar3 = 0xf000;
  local_132 = local_22;
  FUN_1158_20ed((int)*param_1,(int)((ulong)*param_1 >> 0x10));
  uVar1 = FUN_1150_296a(0x2ba,0x1150,CONCAT11((char)((uint)local_122 >> 8),1),1,&local_132,unaff_SS,
                        uVar3);
  FUN_1158_1399(0x1150,uVar1);
  return;
}



/* ---- FUN_1148_11cd @ 1148:11cd  (23 octets) ---- */

void __stdcall16far FUN_1148_11cd(undefined2 param_1,undefined2 param_2,undefined4 param_3)

{
  FUN_1148_112e((int)param_3,(int)((ulong)param_3 >> 0x10),param_1,param_2);
  return;
}



/* ---- FUN_1148_11e4 @ 1148:11e4  (7 octets) ---- */

void __stdcall16far FUN_1148_11e4(void)

{
  return;
}



/* ---- FUN_1148_11eb @ 1148:11eb  (64 octets) ---- */

byte * FUN_1148_11eb(undefined2 param_1_00,undefined *param_1,byte *param_2)

{
  byte *pbVar1;
  byte bVar2;
  int iVar3;
  byte *pbVar4;
  byte *pbVar5;
  undefined2 uVar6;
  
  uVar6 = (undefined2)((ulong)param_2 >> 0x10);
  iVar3 = 0;
  pbVar4 = (byte *)param_2;
  do {
    pbVar5 = pbVar4 + 1;
    bVar2 = *pbVar4;
    if (bVar2 < 0x20) {
      if ((bVar2 == 0) || (bVar2 == 0x1a)) goto LAB_1148_121e;
      if (bVar2 == 10) goto LAB_1148_121f;
      if (bVar2 == 0xd) {
        pbVar1 = pbVar5;
        pbVar5 = pbVar4 + 2;
        if (*pbVar1 != 10) {
LAB_1148_121e:
          pbVar5 = pbVar5 + -1;
        }
LAB_1148_121f:
        *param_1 = (char)iVar3;
        return (byte *)CONCAT22(uVar6,pbVar5);
      }
    }
    pbVar4 = pbVar5;
    if (iVar3 != 0xff) {
      iVar3 = iVar3 + 1;
      ((undefined *)param_1)[iVar3] = bVar2;
    }
  } while( true );
}



/* ---- FUN_1148_122b @ 1148:122b  (31 octets) ---- */

byte * FUN_1148_122b(byte *param_1,byte *param_2)

{
  byte *pbVar1;
  uint uVar2;
  byte *pbVar3;
  byte *pbVar4;
  undefined2 uVar5;
  
  pbVar3 = (byte *)param_1;
  uVar5 = (undefined2)((ulong)param_2 >> 0x10);
  pbVar4 = (byte *)param_2;
  for (uVar2 = (uint)*param_1; pbVar3 = pbVar3 + 1, uVar2 != 0; uVar2 = uVar2 - 1) {
    pbVar1 = pbVar4;
    pbVar4 = pbVar4 + 1;
    *pbVar1 = *pbVar3;
  }
  pbVar4[0] = 0xd;
  pbVar4[1] = 10;
  return (byte *)CONCAT22(uVar5,pbVar4 + 2);
}



/* ---- FUN_1148_124a @ 1148:124a  (46 octets) ---- */

undefined2 __stdcall16far FUN_1148_124a(undefined4 *param_1)

{
  undefined2 *puVar1;
  undefined2 uVar2;
  
  puVar1 = (undefined2 *)((int)*param_1 + 0x10);
  uVar2 = (*(code *)*puVar1)();
  puVar1 = (undefined2 *)((int)*param_1 + 0x44);
  (*(code *)*puVar1)();
  return uVar2;
}



/* ---- FUN_1148_1278 @ 1148:1278  (52 octets) ---- */

undefined2 __stdcall16far FUN_1148_1278(undefined4 *param_1)

{
  undefined2 *puVar1;
  undefined2 uVar2;
  
  puVar1 = (undefined2 *)((int)*param_1 + 0x24);
  uVar2 = (*(code *)*puVar1)();
  puVar1 = (undefined2 *)((int)*param_1 + 0x1c);
  (*(code *)*puVar1)();
  return uVar2;
}



/* ---- FUN_1148_13c5 @ 1148:13c5  (35 octets) ---- */

void __stdcall16far FUN_1148_13c5(undefined4 *param_1)

{
  int *piVar1;
  undefined2 *puVar2;
  undefined2 uVar3;
  
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  if (*(int *)((undefined4 *)param_1 + 1) == 0) {
    puVar2 = (undefined2 *)((int)*param_1 + 0x20);
    (*(code *)*puVar2)();
  }
  piVar1 = (int *)((undefined4 *)param_1 + 1);
  *piVar1 = *piVar1 + 1;
  return;
}



/* ---- FUN_1148_1435 @ 1148:1435  (32 octets) ---- */

void __stdcall16far FUN_1148_1435(undefined4 *param_1)

{
  int *piVar1;
  undefined2 *puVar2;
  undefined2 uVar3;
  
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  piVar1 = (int *)((undefined4 *)param_1 + 1);
  *piVar1 = *piVar1 + -1;
  if (*(int *)((undefined4 *)param_1 + 1) == 0) {
    puVar2 = (undefined2 *)((int)*param_1 + 0x20);
    (*(code *)*puVar2)();
  }
  return;
}



/* ---- FUN_1148_1503 @ 1148:1503  (22 octets) ---- */

undefined4 __stdcall16far FUN_1148_1503(void)

{
  return 0;
}



/* ---- FUN_1148_1519 @ 1148:1519  (38 octets) ---- */

void __stdcall16far FUN_1148_1519(undefined4 param_1,undefined4 param_2,undefined *param_3)

{
  int iVar1;
  
  iVar1 = FUN_1148_1541((int)param_1,(int)((ulong)param_1 >> 0x10),(undefined *)param_3,
                        (int)((ulong)param_3 >> 0x10),(int)param_2,(int)((ulong)param_2 >> 0x10));
  if (iVar1 < 0) {
    *param_3 = 0;
  }
  return;
}



/* ---- FUN_1148_1541 @ 1148:1541  (210 octets) ---- */

int __stdcall16far FUN_1148_1541(undefined4 *param_1,undefined4 param_2,undefined4 param_4)

{
  undefined2 *puVar1;
  int iVar2;
  undefined2 unaff_CS;
  undefined2 unaff_SS;
  undefined *puVar3;
  undefined2 uVar4;
  undefined local_308 [256];
  undefined local_208 [256];
  int local_108;
  undefined local_106 [256];
  int local_6;
  int local_4;
  
  puVar1 = (undefined2 *)((int)*param_1 + 0x10);
  local_108 = (*(code *)*puVar1)();
  local_108 = local_108 + -1;
  if (-1 < local_108) {
    local_4 = 0;
    while( true ) {
      puVar3 = local_208;
      puVar1 = (undefined2 *)((int)*param_1 + 0xc);
      uVar4 = unaff_SS;
      (*(code *)*puVar1)(unaff_CS,(undefined4 *)param_1,(int)((ulong)param_1 >> 0x10),local_4,puVar3
                        );
      FUN_1158_17e7(0xff,local_106,unaff_SS,puVar3,uVar4);
      unaff_CS = 0x1158;
      local_6 = FUN_1158_1878(local_106,unaff_SS,0x153f,0x1158);
      if (local_6 != 0) {
        puVar3 = local_208;
        uVar4 = unaff_SS;
        FUN_1158_180b(local_6 + -1,1,local_106,unaff_SS);
        unaff_CS = 0x1150;
        iVar2 = FUN_1150_0730((int)param_4,(int)((ulong)param_4 >> 0x10),puVar3,uVar4);
        if (iVar2 == 0) {
          if ((int)param_2 == 0 && param_2._2_2_ == 0) {
            return local_4;
          }
          puVar3 = local_308;
          FUN_1158_180b(0xff,local_6 + 1,local_106,unaff_SS);
          FUN_1158_17e7(0xff,(int)param_2,param_2._2_2_,puVar3,unaff_SS);
          return local_4;
        }
      }
      if (local_4 == local_108) break;
      local_4 = local_4 + 1;
    }
  }
  return -1;
}



/* ---- FUN_1148_16e0 @ 1148:16e0  (92 octets) ---- */

int __stdcall16far FUN_1148_16e0(undefined4 *param_1,undefined4 param_2)

{
  undefined2 *puVar1;
  int iVar2;
  undefined2 unaff_CS;
  undefined2 unaff_SS;
  undefined *puVar3;
  undefined2 uVar4;
  undefined local_106 [256];
  int local_6;
  int local_4;
  
  puVar1 = (undefined2 *)((int)*param_1 + 0x10);
  local_6 = (*(code *)*puVar1)();
  local_6 = local_6 + -1;
  if (local_6 < 0) {
LAB_1148_1730:
    local_4 = -1;
  }
  else {
    local_4 = 0;
    while( true ) {
      puVar3 = local_106;
      puVar1 = (undefined2 *)((int)*param_1 + 0xc);
      uVar4 = unaff_SS;
      (*(code *)*puVar1)(unaff_CS,(undefined4 *)param_1,(int)((ulong)param_1 >> 0x10),local_4,puVar3
                        );
      unaff_CS = 0x1150;
      iVar2 = FUN_1150_0730((int)param_2,(int)((ulong)param_2 >> 0x10),puVar3,uVar4);
      if (iVar2 == 0) break;
      if (local_4 == local_6) goto LAB_1148_1730;
      local_4 = local_4 + 1;
    }
  }
  return local_4;
}



/* ---- FUN_1148_173c @ 1148:173c  (48 octets) ---- */

void __stdcall16far FUN_1148_173c(undefined4 *param_1)

{
  undefined2 *puVar1;
  
  puVar1 = (undefined2 *)((int)*param_1 + 0x44);
  (*(code *)*puVar1)();
  puVar1 = (undefined2 *)((int)*param_1 + 0x1c);
  (*(code *)*puVar1)();
  return;
}



/* ---- FUN_1148_1994 @ 1148:1994  (68 octets) ---- */

void __stdcall16far FUN_1148_1994(undefined4 *param_1,undefined4 param_2,undefined2 param_3)

{
  undefined2 *puVar1;
  undefined4 uVar2;
  
  puVar1 = (undefined2 *)((int)*param_1 + 0x14);
  uVar2 = (*(code *)*puVar1)();
  puVar1 = (undefined2 *)((int)*param_1 + 0x34);
  (*(code *)*puVar1)();
  FUN_1148_173c((undefined4 *)param_1,(int)((ulong)param_1 >> 0x10),uVar2,(int)param_2,
                (int)((ulong)param_2 >> 0x10),param_3);
  return;
}



/* ---- FUN_1148_19d8 @ 1148:19d8  (7 octets) ---- */

void __stdcall16far FUN_1148_19d8(void)

{
  return;
}



/* ---- FUN_1148_1b1b @ 1148:1b1b  (139 octets) ---- */

void __stdcall16far FUN_1148_1b1b(undefined4 *param_1,char *param_2,undefined4 param_3)

{
  undefined2 *puVar1;
  undefined4 *puVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined *puVar5;
  undefined local_104 [256];
  int local_4;
  
  uVar3 = (undefined2)((ulong)param_3 >> 0x10);
  uVar4 = (undefined2)((ulong)param_1 >> 0x10);
  puVar2 = (undefined4 *)param_1;
  local_4 = FUN_1148_1541(puVar2,uVar4,0,0,(int)param_3,uVar3);
  if (*param_2 == '\0') {
    if (-1 < local_4) {
      puVar1 = (undefined2 *)((int)*param_1 + 0x34);
      (*(code *)*puVar1)(0x1148,puVar2,uVar4,local_4);
    }
  }
  else {
    if (local_4 < 0) {
      puVar1 = (undefined2 *)((int)*param_1 + 0x24);
      local_4 = (*(code *)*puVar1)(0x1148,puVar2,uVar4,0x1b18,0x1148);
    }
    puVar5 = local_104;
    FUN_1158_17cd((int)param_3,uVar3);
    FUN_1158_184c(0x1b19,0x1158);
    FUN_1158_184c((char *)param_2,(int)((ulong)param_2 >> 0x10));
    puVar1 = (undefined2 *)((int)*param_1 + 0x18);
    (*(code *)*puVar1)(0x1158,puVar2,uVar4,puVar5);
  }
  return;
}



/* ---- FUN_1148_1c35 @ 1148:1c35  (7 octets) ---- */

void __stdcall16far FUN_1148_1c35(void)

{
  return;
}



/* ---- FUN_1148_1c9e @ 1148:1c9e  (75 octets) ---- */

undefined2 * __stdcall16far FUN_1148_1c9e(undefined2 param_1,undefined2 param_2,byte *param_3)

{
  undefined2 uVar1;
  undefined2 *puVar2;
  
  puVar2 = (undefined2 *)FUN_1158_0182(*param_3 + 5);
  uVar1 = (undefined2)((ulong)puVar2 >> 0x10);
  *puVar2 = param_1;
  ((undefined2 *)puVar2)[1] = param_2;
  FUN_1158_17e7(0xff,(undefined2 *)puVar2 + 2,uVar1,(byte *)param_3,(int)((ulong)param_3 >> 0x10));
  return puVar2;
}



/* ---- FUN_1148_1ce9 @ 1148:1ce9  (31 octets) ---- */

void __stdcall16far FUN_1148_1ce9(undefined4 param_1)

{
  FUN_1158_019c(*(byte *)((int)param_1 + 4) + 5,(int)param_1,param_1._2_2_);
  return;
}



/* ---- FUN_1148_1d08 @ 1148:1d08  (67 octets) ---- */

undefined4 __stdcall16far FUN_1148_1d08(undefined4 param_1,char param_2)

{
  undefined2 in_AX;
  undefined uVar1;
  undefined extraout_AH;
  undefined2 uVar2;
  undefined4 uVar3;
  undefined2 uStack_a;
  
  uVar1 = (undefined)((uint)in_AX >> 8);
  if (param_2 != '\0') {
    FUN_1158_1fe2();
    uVar1 = extraout_AH;
  }
  uVar3 = FUN_1158_1f50(0x2a3,0x1148,CONCAT11(uVar1,1));
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  *(undefined2 *)((int)param_1 + 6) = (int)uVar3;
  *(undefined2 *)((int)param_1 + 8) = (int)((ulong)uVar3 >> 0x10);
  if (param_2 != '\0') {
    DAT_1160_1858 = uStack_a;
  }
  return param_1;
}



/* ---- FUN_1148_1d4b @ 1148:1d4b  (90 octets) ---- */

void __stdcall16far FUN_1148_1d4b(undefined4 *param_1,char param_2)

{
  undefined2 *puVar1;
  undefined4 *puVar2;
  undefined2 uVar3;
  
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  puVar2 = (undefined4 *)param_1;
  *(undefined2 *)(puVar2 + 3) = 0;
  *(undefined2 *)((int)puVar2 + 0xe) = 0;
  *(undefined2 *)(puVar2 + 4) = 0;
  *(undefined2 *)((int)puVar2 + 0x12) = 0;
  *(undefined2 *)(puVar2 + 5) = 0;
  *(undefined2 *)((int)puVar2 + 0x16) = 0;
  *(undefined2 *)(puVar2 + 6) = 0;
  *(undefined2 *)((int)puVar2 + 0x1a) = 0;
  if (*(int *)((int)puVar2 + 6) != 0 || *(int *)(puVar2 + 2) != 0) {
    puVar1 = (undefined2 *)((int)*param_1 + 0x30);
    (*(code *)*puVar1)();
    FUN_1158_1f7f((int)*(undefined4 *)((int)puVar2 + 6),
                  (int)((ulong)*(undefined4 *)((int)puVar2 + 6) >> 0x10));
  }
  if (param_2 != '\0') {
    FUN_1158_200f();
  }
  return;
}



/* ---- FUN_1148_1da5 @ 1148:1da5  (151 octets) ---- */

undefined2 __stdcall16far FUN_1148_1da5(undefined4 *param_1,undefined4 param_2)

{
  undefined2 *puVar1;
  char cVar2;
  undefined4 *puVar3;
  undefined2 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined2 uVar7;
  undefined4 *puVar8;
  undefined2 uVar9;
  undefined2 local_4;
  
  uVar4 = (undefined2)((ulong)param_1 >> 0x10);
  puVar3 = (undefined4 *)param_1;
  if (*(char *)((int)puVar3 + 10) == '\0') {
    local_4 = *(undefined2 *)((int)*(undefined4 *)((int)puVar3 + 6) + 8);
  }
  else {
    puVar1 = (undefined2 *)((int)*param_1 + 0x60);
    cVar2 = (*(code *)*puVar1)();
    if (cVar2 != '\0') {
      if (*(char *)((int)puVar3 + 0xb) == '\0') {
        return local_4;
      }
      if (*(char *)((int)puVar3 + 0xb) == '\x02') {
        FUN_1148_0be2(0xf00d);
      }
    }
  }
  puVar1 = (undefined2 *)((int)*param_1 + 0x5c);
  puVar8 = puVar3;
  uVar9 = uVar4;
  (*(code *)*puVar1)();
  uVar7 = local_4;
  uVar5 = FUN_1148_1c9e(0,0,(int)param_2,(int)((ulong)param_2 >> 0x10));
  uVar6 = FUN_1148_0da0((int)*(undefined4 *)((int)puVar3 + 6),
                        (int)((ulong)*(undefined4 *)((int)puVar3 + 6) >> 0x10));
  FUN_1148_0ea7(uVar6,uVar5,uVar7);
  puVar1 = (undefined2 *)((int)*param_1 + 0x58);
  (*(code *)*puVar1)(0x1148,puVar3,uVar4,puVar8,uVar9);
  return local_4;
}



/* ---- FUN_1148_1e3e @ 1148:1e3e  (43 octets) ---- */

void __stdcall16far FUN_1148_1e3e(undefined4 param_1)

{
  int iVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  if ((*(int *)(iVar1 + 4) == 0) && (*(int *)(iVar1 + 0xe) != 0)) {
    (*(code *)*(undefined2 *)(iVar1 + 0xc))();
  }
  return;
}



/* ---- FUN_1148_1e69 @ 1148:1e69  (43 octets) ---- */

void __stdcall16far FUN_1148_1e69(undefined4 param_1)

{
  int iVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  if ((*(int *)(iVar1 + 4) == 0) && (*(int *)(iVar1 + 0x16) != 0)) {
    (*(code *)*(undefined2 *)(iVar1 + 0x14))();
  }
  return;
}



/* ---- FUN_1148_1e94 @ 1148:1e94  (108 octets) ---- */

void __stdcall16far FUN_1148_1e94(undefined4 *param_1)

{
  undefined2 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined2 uVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined2 uVar7;
  int local_4;
  
  uVar4 = (undefined2)((ulong)param_1 >> 0x10);
  puVar3 = (undefined4 *)param_1;
  puVar1 = (undefined2 *)((int)*param_1 + 0x5c);
  puVar6 = puVar3;
  uVar7 = uVar4;
  (*(code *)*puVar1)();
  iVar2 = *(int *)((int)*(undefined4 *)((int)puVar3 + 6) + 8) + -1;
  if (-1 < iVar2) {
    local_4 = 0;
    while( true ) {
      uVar5 = FUN_1148_0dd0((int)*(undefined4 *)((int)puVar3 + 6),
                            (int)((ulong)*(undefined4 *)((int)puVar3 + 6) >> 0x10),local_4);
      FUN_1148_1ce9(uVar5);
      if (local_4 == iVar2) break;
      local_4 = local_4 + 1;
    }
  }
  FUN_1148_0c75((int)*(undefined4 *)((int)puVar3 + 6),
                (int)((ulong)*(undefined4 *)((int)puVar3 + 6) >> 0x10));
  puVar1 = (undefined2 *)((int)*param_1 + 0x58);
  (*(code *)*puVar1)(0x1148,puVar3,uVar4,puVar6,uVar7);
  return;
}



/* ---- FUN_1148_1f00 @ 1148:1f00  (72 octets) ---- */

void __stdcall16far FUN_1148_1f00(undefined4 *param_1,undefined2 param_2)

{
  undefined2 *puVar1;
  undefined4 *puVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined2 uVar6;
  
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  puVar2 = (undefined4 *)param_1;
  puVar1 = (undefined2 *)((int)*param_1 + 0x5c);
  puVar5 = puVar2;
  uVar6 = uVar3;
  (*(code *)*puVar1)();
  uVar4 = FUN_1148_0dd0((int)*(undefined4 *)((int)puVar2 + 6),
                        (int)((ulong)*(undefined4 *)((int)puVar2 + 6) >> 0x10),param_2);
  FUN_1148_1ce9(uVar4);
  FUN_1148_0c94((int)*(undefined4 *)((int)puVar2 + 6),
                (int)((ulong)*(undefined4 *)((int)puVar2 + 6) >> 0x10),param_2);
  puVar1 = (undefined2 *)((int)*param_1 + 0x58);
  (*(code *)*puVar1)(0x1148,puVar2,uVar3,puVar5,uVar6);
  return;
}



/* ---- FUN_1148_1f48 @ 1148:1f48  (51 octets) ---- */

void __stdcall16far FUN_1148_1f48(undefined4 *param_1,undefined2 param_2,undefined2 param_3)

{
  undefined2 *puVar1;
  undefined4 *puVar2;
  undefined2 uVar3;
  undefined4 *puVar4;
  undefined2 uVar5;
  
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  puVar2 = (undefined4 *)param_1;
  puVar1 = (undefined2 *)((int)*param_1 + 0x5c);
  puVar4 = puVar2;
  uVar5 = uVar3;
  (*(code *)*puVar1)();
  FUN_1148_0d08((int)*(undefined4 *)((int)puVar2 + 6),
                (int)((ulong)*(undefined4 *)((int)puVar2 + 6) >> 0x10),param_2,param_3);
  puVar1 = (undefined2 *)((int)*param_1 + 0x58);
  (*(code *)*puVar1)(0x1148,puVar2,uVar3,puVar4,uVar5);
  return;
}



/* ---- FUN_1148_1f7b @ 1148:1f7b  (154 octets) ---- */

undefined2 __stdcall16far FUN_1148_1f7b(undefined4 *param_1,uint *param_2,undefined4 param_3)

{
  undefined2 *puVar1;
  uint uVar2;
  int iVar3;
  undefined2 uVar4;
  undefined4 uVar5;
  int local_8;
  uint local_6;
  undefined local_3;
  
  local_3 = 0;
  local_6 = 0;
  uVar4 = (undefined2)((ulong)param_1 >> 0x10);
  puVar1 = (undefined2 *)((int)*param_1 + 0x10);
  local_8 = (*(code *)*puVar1)();
  local_8 = local_8 + -1;
  while ((int)local_6 <= local_8) {
    uVar2 = local_6 + local_8 >> 1;
    uVar5 = *(undefined4 *)((int)(undefined4 *)param_1 + 6);
    uVar5 = FUN_1148_0dd0((int)uVar5,(int)((ulong)uVar5 >> 0x10),uVar2);
    iVar3 = FUN_1150_07ed((int)param_3,(int)((ulong)param_3 >> 0x10),(int)uVar5 + 4,
                          (int)((ulong)uVar5 >> 0x10));
    if (iVar3 < 0) {
      local_6 = uVar2 + 1;
    }
    else {
      local_8 = uVar2 - 1;
      if ((iVar3 == 0) && (local_3 = 1, *(char *)((int)(undefined4 *)param_1 + 0xb) != '\x01')) {
        local_6 = uVar2;
      }
    }
  }
  *param_2 = local_6;
  return CONCAT11((char)(local_6 >> 8),local_3);
}



/* ---- FUN_1148_2015 @ 1148:2015  (47 octets) ---- */

void __stdcall16far FUN_1148_2015(undefined4 param_1,undefined2 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)((int)param_1 + 6);
  uVar1 = FUN_1148_0dd0((int)uVar1,(int)((ulong)uVar1 >> 0x10),param_2);
  FUN_1158_17e7(0xff,(int)param_3,(int)((ulong)param_3 >> 0x10),(int)uVar1 + 4,
                (int)((ulong)uVar1 >> 0x10));
  return;
}



/* ---- FUN_1148_2044 @ 1148:2044  (25 octets) ---- */

undefined2 __stdcall16far FUN_1148_2044(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)((int)param_1 + 6);
  return *(undefined2 *)((int)uVar1 + 8);
}



/* ---- FUN_1148_205d @ 1148:205d  (48 octets) ---- */

undefined4 __stdcall16far FUN_1148_205d(undefined4 param_1,undefined2 param_2)

{
  undefined4 uVar1;
  undefined2 *puVar2;
  
  uVar1 = *(undefined4 *)((int)param_1 + 6);
  puVar2 = (undefined2 *)FUN_1148_0dd0((int)uVar1,(int)((ulong)uVar1 >> 0x10),param_2);
  return CONCAT22(((undefined2 *)puVar2)[1],*puVar2);
}



/* ---- FUN_1148_208d @ 1148:208d  (72 octets) ---- */

undefined2 __stdcall16far FUN_1148_208d(undefined4 *param_1,undefined4 param_2)

{
  undefined2 *puVar1;
  char cVar2;
  undefined2 uVar3;
  undefined2 local_4;
  
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  if (*(char *)((int)(undefined4 *)param_1 + 10) == '\0') {
    local_4 = FUN_1148_16e0((undefined4 *)param_1,uVar3,(int)param_2,(int)((ulong)param_2 >> 0x10));
  }
  else {
    puVar1 = (undefined2 *)((int)*param_1 + 0x60);
    cVar2 = (*(code *)*puVar1)();
    if (cVar2 == '\0') {
      local_4 = 0xffff;
    }
  }
  return local_4;
}



/* ---- FUN_1148_20d5 @ 1148:20d5  (91 octets) ---- */

void __stdcall16far FUN_1148_20d5(undefined4 *param_1,undefined4 param_2,undefined2 param_3)

{
  undefined2 *puVar1;
  undefined4 *puVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined2 uVar7;
  
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  puVar2 = (undefined4 *)param_1;
  puVar1 = (undefined2 *)((int)*param_1 + 0x5c);
  puVar6 = puVar2;
  uVar7 = uVar3;
  (*(code *)*puVar1)();
  if (*(char *)((int)puVar2 + 10) != '\0') {
    FUN_1148_0be2(0xf00c,puVar6,uVar7);
  }
  uVar4 = FUN_1148_1c9e(0,0,(int)param_2,(int)((ulong)param_2 >> 0x10));
  uVar5 = FUN_1148_0da0((int)*(undefined4 *)((int)puVar2 + 6),
                        (int)((ulong)*(undefined4 *)((int)puVar2 + 6) >> 0x10));
  FUN_1148_0ea7(uVar5,uVar4,param_3);
  puVar1 = (undefined2 *)((int)*param_1 + 0x58);
  (*(code *)*puVar1)(0x1148,puVar2,uVar3);
  return;
}



/* ---- FUN_1148_2130 @ 1148:2130  (121 octets) ---- */

void __stdcall16far FUN_1148_2130(undefined4 *param_1,undefined4 param_2,undefined2 param_3)

{
  undefined4 *puVar1;
  undefined2 uVar2;
  undefined2 *puVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined2 uVar6;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  puVar1 = (undefined4 *)param_1;
  puVar3 = (undefined2 *)((int)*param_1 + 0x5c);
  puVar5 = puVar1;
  uVar6 = uVar2;
  (*(code *)*puVar3)();
  if (*(char *)((int)puVar1 + 10) != '\0') {
    FUN_1148_0be2(0xf00c,puVar5,uVar6);
  }
  puVar3 = (undefined2 *)
           FUN_1148_0dd0((int)*(undefined4 *)((int)puVar1 + 6),
                         (int)((ulong)*(undefined4 *)((int)puVar1 + 6) >> 0x10),param_3);
  uVar4 = FUN_1148_1c9e(*puVar3,((undefined2 *)puVar3)[1],(int)param_2,(int)((ulong)param_2 >> 0x10)
                       );
  FUN_1148_0f67((int)*(undefined4 *)((int)puVar1 + 6),
                (int)((ulong)*(undefined4 *)((int)puVar1 + 6) >> 0x10),uVar4,param_3);
  FUN_1148_1ce9(puVar3);
  puVar3 = (undefined2 *)((int)*param_1 + 0x58);
  (*(code *)*puVar3)(0x1148,puVar1,uVar2);
  return;
}



/* ---- FUN_1148_21a9 @ 1148:21a9  (67 octets) ---- */

void __stdcall16far
FUN_1148_21a9(undefined4 *param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4)

{
  undefined4 *puVar1;
  undefined2 uVar2;
  undefined2 *puVar3;
  undefined4 *puVar4;
  undefined2 uVar5;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  puVar1 = (undefined4 *)param_1;
  puVar3 = (undefined2 *)((int)*param_1 + 0x5c);
  puVar4 = puVar1;
  uVar5 = uVar2;
  (*(code *)*puVar3)();
  puVar3 = (undefined2 *)
           FUN_1148_0dd0((int)*(undefined4 *)((int)puVar1 + 6),
                         (int)((ulong)*(undefined4 *)((int)puVar1 + 6) >> 0x10),param_4);
  *puVar3 = param_2;
  ((undefined2 *)puVar3)[1] = param_3;
  puVar3 = (undefined2 *)((int)*param_1 + 0x58);
  (*(code *)*puVar3)(0x1148,puVar1,uVar2,puVar4,uVar5);
  return;
}



/* ---- FUN_1148_21ec @ 1148:21ec  (242 octets) ---- */

void __stdcall16far FUN_1148_21ec(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  undefined2 uVar2;
  int iVar3;
  undefined2 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int local_6;
  int local_4;
  
  local_4 = param_3;
  local_6 = param_2;
  uVar4 = (undefined2)((ulong)param_1 >> 0x10);
  iVar3 = (int)param_1;
  uVar5 = FUN_1148_0dd0((int)*(undefined4 *)(iVar3 + 6),
                        (int)((ulong)*(undefined4 *)(iVar3 + 6) >> 0x10),
                        (uint)(param_3 + param_2) >> 1);
  uVar2 = (undefined2)((ulong)uVar5 >> 0x10);
  do {
    while( true ) {
      uVar6 = FUN_1148_0dd0((int)*(undefined4 *)(iVar3 + 6),
                            (int)((ulong)*(undefined4 *)(iVar3 + 6) >> 0x10),local_4);
      iVar1 = FUN_1150_07ed((int)uVar5 + 4,uVar2,(int)uVar6 + 4,(int)((ulong)uVar6 >> 0x10));
      if (-1 < iVar1) break;
      local_4 = local_4 + 1;
    }
    while( true ) {
      uVar6 = FUN_1148_0dd0((int)*(undefined4 *)(iVar3 + 6),
                            (int)((ulong)*(undefined4 *)(iVar3 + 6) >> 0x10),local_6);
      iVar1 = FUN_1150_07ed((int)uVar5 + 4,uVar2,(int)uVar6 + 4,(int)((ulong)uVar6 >> 0x10));
      if (iVar1 < 1) break;
      local_6 = local_6 + -1;
    }
    if (local_4 <= local_6) {
      FUN_1148_0d08((int)*(undefined4 *)(iVar3 + 6),(int)((ulong)*(undefined4 *)(iVar3 + 6) >> 0x10)
                    ,local_6,local_4);
      local_4 = local_4 + 1;
      local_6 = local_6 + -1;
    }
  } while (local_4 <= local_6);
  if (param_3 < local_6) {
    FUN_1148_21ec(iVar3,uVar4,local_6,param_3);
  }
  if (local_4 < param_2) {
    FUN_1148_21ec(iVar3,uVar4,param_2,local_4);
  }
  return;
}



/* ---- FUN_1148_22de @ 1148:22de  (44 octets) ---- */

void __stdcall16far FUN_1148_22de(undefined4 *param_1,char param_2)

{
  undefined2 *puVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  if (*(char *)((int)(undefined4 *)param_1 + 10) != param_2) {
    if (param_2 != '\0') {
      puVar1 = (undefined2 *)((int)*param_1 + 100);
      (*(code *)*puVar1)();
    }
    *(char *)((int)(undefined4 *)param_1 + 10) = param_2;
  }
  return;
}



/* ---- FUN_1148_230a @ 1148:230a  (39 octets) ---- */

void __stdcall16far FUN_1148_230a(undefined4 *param_1,char param_2)

{
  undefined2 *puVar1;
  
  if (param_2 == '\0') {
    puVar1 = (undefined2 *)((int)*param_1 + 0x58);
    (*(code *)*puVar1)();
  }
  else {
    puVar1 = (undefined2 *)((int)*param_1 + 0x5c);
    (*(code *)*puVar1)();
  }
  return;
}



/* ---- FUN_1148_2331 @ 1148:2331  (77 octets) ---- */

void __stdcall16far FUN_1148_2331(undefined4 *param_1)

{
  undefined2 *puVar1;
  undefined4 *puVar2;
  undefined2 uVar3;
  undefined4 *puVar4;
  undefined2 uVar5;
  
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  puVar2 = (undefined4 *)param_1;
  if ((*(char *)((int)puVar2 + 10) == '\0') &&
     (1 < *(int *)((int)*(undefined4 *)((int)puVar2 + 6) + 8))) {
    puVar1 = (undefined2 *)((int)*param_1 + 0x5c);
    puVar4 = puVar2;
    uVar5 = uVar3;
    (*(code *)*puVar1)();
    FUN_1148_21ec(puVar2,uVar3,*(int *)((int)*(undefined4 *)((int)puVar2 + 6) + 8) + -1,0);
    puVar1 = (undefined2 *)((int)*param_1 + 0x58);
    (*(code *)*puVar1)(0x1148,puVar2,uVar3,puVar4,uVar5);
  }
  return;
}



/* ---- FUN_1148_237e @ 1148:237e  (38 octets) ---- */

undefined4 __stdcall16far FUN_1148_237e(undefined4 *param_1)

{
  undefined2 *puVar1;
  undefined4 uVar2;
  
  puVar1 = (undefined2 *)((int)*param_1 + 8);
  uVar2 = (*(code *)*puVar1)();
  return uVar2;
}



/* ---- FUN_1148_23a4 @ 1148:23a4  (27 octets) ---- */

void __stdcall16far FUN_1148_23a4(undefined4 *param_1)

{
  undefined2 *puVar1;
  
  puVar1 = (undefined2 *)((int)*param_1 + 8);
  (*(code *)*puVar1)();
  return;
}



/* ---- FUN_1148_23bf @ 1148:23bf  (82 octets) ---- */

undefined4 __stdcall16far FUN_1148_23bf(undefined4 *param_1)

{
  undefined2 *puVar1;
  undefined4 uVar2;
  
  puVar1 = (undefined2 *)((int)*param_1 + 8);
  (*(code *)*puVar1)();
  puVar1 = (undefined2 *)((int)*param_1 + 8);
  uVar2 = (*(code *)*puVar1)();
  puVar1 = (undefined2 *)((int)*param_1 + 8);
  (*(code *)*puVar1)();
  return uVar2;
}



/* ---- FUN_1148_2411 @ 1148:2411  (85 octets) ---- */

void __stdcall16far FUN_1148_2411(undefined4 *param_1,int param_2,int param_3,undefined4 param_4)

{
  long lVar1;
  undefined extraout_AH;
  undefined2 uVar2;
  undefined4 *puVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined2 unaff_SS;
  long lVar6;
  undefined4 uVar7;
  undefined *puVar8;
  undefined local_102 [256];
  
  lVar1 = CONCAT22(param_3,param_2);
  if (param_2 != 0 || param_3 != 0) {
    uVar4 = (undefined2)((ulong)param_4 >> 0x10);
    uVar2 = (undefined2)param_4;
    uVar5 = (undefined2)((ulong)param_1 >> 0x10);
    puVar3 = (undefined4 *)param_1;
    lVar6 = (*(code *)*(undefined2 *)(undefined2 *)*param_1)();
    if (lVar6 != lVar1) {
      puVar8 = local_102;
      FUN_1150_092b(0xf003);
      uVar7 = FUN_1150_28e6(0x164,0x1148,CONCAT11(extraout_AH,1),puVar8,unaff_SS);
      FUN_1158_1399(0x1150,uVar7,puVar3,uVar5,param_2,param_3,uVar2,uVar4);
    }
  }
  return;
}



/* ---- FUN_1148_2466 @ 1148:2466  (86 octets) ---- */

void __stdcall16far FUN_1148_2466(undefined4 *param_1,int param_2,int param_3,undefined4 param_4)

{
  undefined2 *puVar1;
  long lVar2;
  undefined extraout_AH;
  undefined2 uVar3;
  undefined4 *puVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  undefined2 unaff_SS;
  long lVar7;
  undefined4 uVar8;
  undefined *puVar9;
  undefined local_102 [256];
  
  lVar2 = CONCAT22(param_3,param_2);
  if (param_2 != 0 || param_3 != 0) {
    uVar5 = (undefined2)((ulong)param_4 >> 0x10);
    uVar3 = (undefined2)param_4;
    uVar6 = (undefined2)((ulong)param_1 >> 0x10);
    puVar4 = (undefined4 *)param_1;
    puVar1 = (undefined2 *)((int)*param_1 + 4);
    lVar7 = (*(code *)*puVar1)();
    if (lVar7 != lVar2) {
      puVar9 = local_102;
      FUN_1150_092b(0xf004);
      uVar8 = FUN_1150_28e6(399,0x1148,CONCAT11(extraout_AH,1),puVar9,unaff_SS);
      FUN_1158_1399(0x1150,uVar8,puVar4,uVar6,param_2,param_3,uVar3,uVar5);
    }
  }
  return;
}



/* ---- FUN_1148_24c2 @ 1148:24c2  (233 octets) ---- */

/* WARNING: Removing unreachable block (ram,0x11482500) */

void __cdecl16far FUN_1148_24c2(undefined4 param_1,uint param_2,int param_3,undefined4 param_4)

{
  undefined2 uVar1;
  undefined2 uVar2;
  undefined2 unaff_CS;
  undefined2 uVar3;
  ulong uVar4;
  undefined4 uStack_16;
  undefined2 uStack_12;
  uint uStack_10;
  undefined4 local_e;
  uint local_a;
  uint local_8;
  ulong local_6;
  
  uVar4 = CONCAT22(param_3,param_2);
  uVar1 = (undefined2)param_4;
  uVar2 = (undefined2)((ulong)param_4 >> 0x10);
  if (param_2 == 0 && param_3 == 0) {
    uStack_10 = 0;
    uStack_12 = 0;
    uStack_16._0_2_ = uVar1;
    uStack_16._2_2_ = (undefined *)uVar2;
    FUN_1148_23a4();
    uStack_16._2_2_ = (undefined *)0x1148;
    unaff_CS = 0x1148;
    uStack_16._0_2_ = 0x24e6;
    uStack_12 = uVar1;
    uStack_10 = uVar2;
    uVar4 = FUN_1148_23bf();
  }
  param_2 = (uint)uVar4;
  if ((long)uVar4 < 0xf001) {
    local_8 = param_2;
  }
  else {
    local_8 = 0xf000;
  }
  uStack_10 = local_8;
  uVar3 = 0x1158;
  uStack_16._2_2_ = (undefined *)0x251c;
  uStack_12 = unaff_CS;
  local_6 = uVar4;
  local_e = FUN_1158_0182();
  uStack_10 = 0x1158;
  uStack_12 = 0x24bc;
  uStack_16._0_2_ = DAT_1160_1858;
  DAT_1160_1858 = &uStack_16;
  uStack_16._2_2_ = &stack0xfffe;
  while( true ) {
    param_3 = (int)(uVar4 >> 0x10);
    param_2 = (uint)uVar4;
    if (uVar4 == 0) break;
    if (((long)uVar4 < 0x10000) && ((0x7fffffff < uVar4 || (param_2 <= local_8)))) {
      local_a = param_2;
    }
    else {
      local_a = local_8;
    }
    FUN_1148_2411(uVar1,uVar2,local_a,0,local_e);
    uVar3 = 0x1148;
    FUN_1148_2466((int)param_1,(int)((ulong)param_1 >> 0x10),local_a,0,local_e);
    uVar4 = CONCAT22(param_3 - (uint)(param_2 < local_a),param_2 - local_a);
  }
  DAT_1160_1858 = (undefined4 *)(undefined2)uStack_16;
  uStack_12 = 0x25ab;
  uStack_10 = uVar3;
  uStack_16 = local_e;
  FUN_1158_019c(local_8);
  return;
}



/* ---- FUN_1148_25bb @ 1148:25bb  (94 octets) ---- */

void __cdecl16far
FUN_1148_25bb(undefined2 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4)

{
  undefined2 in_AX;
  undefined4 uVar1;
  undefined2 uStack_12;
  undefined *puStack_10;
  undefined2 uStack_e;
  undefined2 uStack_c;
  undefined4 local_a;
  undefined2 local_6;
  undefined2 local_4;
  
  uStack_c = param_2;
  uStack_e = param_1;
  puStack_10 = (undefined *)0x1000;
  uStack_12 = CONCAT11((char)((uint)in_AX >> 8),1);
  uVar1 = FUN_1148_2bc2(0x58d,0x1148);
  uStack_c = 0x1148;
  uStack_e = 0x25b5;
  uStack_12 = DAT_1160_1858;
  DAT_1160_1858 = &uStack_12;
  puStack_10 = &stack0xfffe;
  local_a = uVar1;
  local_6 = FUN_1148_3c6d(uVar1,param_3,param_4);
  local_4 = (undefined2)((ulong)uVar1 >> 0x10);
  DAT_1160_1858 = (undefined2 *)uVar1;
  FUN_1158_1f7f(local_a);
  return;
}



/* ---- FUN_1148_2623 @ 1148:2623  (50 octets) ---- */

undefined4 __stdcall16far FUN_1148_2623(undefined4 param_1,char param_2,undefined2 param_3)

{
  undefined2 uStack_a;
  
  if (param_2 != '\0') {
    FUN_1158_1fe2();
  }
  *(undefined2 *)((int)param_1 + 4) = param_3;
  if (param_2 != '\0') {
    DAT_1160_1858 = uStack_a;
  }
  return param_1;
}



/* ---- FUN_1148_2655 @ 1148:2655  (63 octets) ---- */

long __stdcall16far
FUN_1148_2655(undefined2 param_1,undefined2 param_2_00,undefined2 param_2,undefined2 param_3,
             undefined4 param_4)

{
  undefined2 unaff_CS;
  long lVar1;
  
  lVar1 = _HREAD(unaff_CS,param_2,param_3,(int)param_4,(int)((ulong)param_4 >> 0x10));
  if (lVar1 == -1) {
    lVar1 = 0;
  }
  return lVar1;
}



/* ---- FUN_1148_2694 @ 1148:2694  (63 octets) ---- */

long __stdcall16far
FUN_1148_2694(undefined2 param_1,undefined2 param_2_00,undefined2 param_2,undefined2 param_3,
             undefined4 param_4)

{
  undefined2 unaff_CS;
  long lVar1;
  
  lVar1 = _HWRITE(unaff_CS,param_2,param_3,(int)param_4,(int)((ulong)param_4 >> 0x10));
  if (lVar1 == -1) {
    lVar1 = 0;
  }
  return lVar1;
}



/* ---- FUN_1148_26d3 @ 1148:26d3  (41 octets) ---- */

undefined4 __stdcall16far
FUN_1148_26d3(undefined2 param_1,undefined2 param_2_00,undefined2 param_2,undefined2 param_3,
             undefined2 param_4)

{
  undefined2 unaff_CS;
  undefined4 uVar1;
  
  uVar1 = _LLSEEK(unaff_CS,param_2,param_3,param_4);
  return uVar1;
}



/* ---- FUN_1148_27da @ 1148:27da  (37 octets) ---- */

void __stdcall16far FUN_1148_27da(undefined4 param_1,char param_2)

{
  if (-1 < *(int *)((int)param_1 + 4)) {
    _LCLOSE();
  }
  if (param_2 != '\0') {
    FUN_1158_200f();
  }
  return;
}



/* ---- FUN_1148_27ff @ 1148:27ff  (27 octets) ---- */

undefined4 FUN_1148_27ff(int param_1,undefined2 param_2,int param_3,undefined2 param_4)

{
  return CONCAT22(param_4,param_1 + param_3);
}



/* ---- FUN_1148_281a @ 1148:281a  (41 octets) ---- */

void __stdcall16far FUN_1148_281a(undefined4 param_1,char param_2)

{
  undefined2 uVar1;
  
  uVar1 = (undefined2)((ulong)param_1 >> 0x10);
  FUN_1148_2a89((int)param_1,uVar1);
  FUN_1158_1f66((int)param_1,uVar1,0);
  if (param_2 != '\0') {
    FUN_1158_200f();
  }
  return;
}



/* ---- FUN_1148_2843 @ 1148:2843  (195 octets) ---- */

/* WARNING: Removing unreachable block (ram,0x11482871) */
/* WARNING: Removing unreachable block (ram,0x1148285d) */

undefined4 __stdcall16far
FUN_1148_2843(undefined4 param_1,uint param_2,int param_3,undefined2 param_4)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  undefined2 uVar4;
  undefined2 unaff_CS;
  undefined4 uVar5;
  uint local_6;
  int local_4;
  
  uVar4 = (undefined2)((ulong)param_1 >> 0x10);
  iVar3 = (int)param_1;
  if (((0 < *(int *)(iVar3 + 0x12)) || (-1 < *(int *)(iVar3 + 0x12))) &&
     ((0 < param_3 || (-1 < param_3)))) {
    local_6 = *(uint *)(iVar3 + 8) - *(uint *)(iVar3 + 0x10);
    local_4 = (*(int *)(iVar3 + 10) - *(int *)(iVar3 + 0x12)) -
              (uint)(*(uint *)(iVar3 + 8) < *(uint *)(iVar3 + 0x10));
    if ((0 < local_4) || ((-1 < local_4 && (local_6 != 0)))) {
      if ((param_3 < local_4) || ((param_3 <= local_4 && (param_2 < local_6)))) {
        local_6 = param_2;
        local_4 = param_3;
      }
      uVar5 = FUN_1148_27ff(*(undefined2 *)(iVar3 + 0x10),*(undefined2 *)(iVar3 + 0x12),
                            *(undefined2 *)(iVar3 + 4),*(undefined2 *)(iVar3 + 6));
      HMEMCPY(unaff_CS,local_6,local_4,uVar5,param_4);
      puVar1 = (uint *)(iVar3 + 0x10);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 + local_6;
      *(int *)(iVar3 + 0x12) = *(int *)(iVar3 + 0x12) + local_4 + (uint)CARRY2(uVar2,local_6);
      goto LAB_1148_28fc;
    }
  }
  local_6 = 0;
  local_4 = 0;
LAB_1148_28fc:
  return CONCAT22(local_4,local_6);
}



/* ---- FUN_1148_2906 @ 1148:2906  (275 octets) ---- */

/* WARNING: Removing unreachable block (ram,0x11482934) */
/* WARNING: Removing unreachable block (ram,0x11482920) */

undefined4 __stdcall16far
FUN_1148_2906(undefined4 param_1,uint param_2,int param_3,undefined4 param_4)

{
  uint uVar1;
  undefined2 uVar2;
  int iVar3;
  int iVar4;
  undefined2 uVar5;
  undefined2 unaff_CS;
  uint local_6;
  int local_4;
  
  uVar5 = (undefined2)((ulong)param_1 >> 0x10);
  iVar4 = (int)param_1;
  if (((0 < *(int *)(iVar4 + 0x12)) || (-1 < *(int *)(iVar4 + 0x12))) &&
     ((0 < param_3 || (-1 < param_3)))) {
    uVar1 = *(uint *)(iVar4 + 0x10) + param_2;
    iVar3 = *(int *)(iVar4 + 0x12) + param_3 + (uint)CARRY2(*(uint *)(iVar4 + 0x10),param_2);
    if ((0 < iVar3) || ((-1 < iVar3 && (uVar1 != 0)))) {
      if ((*(int *)(iVar4 + 10) < iVar3) ||
         ((*(int *)(iVar4 + 10) <= iVar3 && (*(uint *)(iVar4 + 8) < uVar1)))) {
        if ((*(int *)(iVar4 + 0xe) < iVar3) ||
           ((*(int *)(iVar4 + 0xe) <= iVar3 && (*(uint *)(iVar4 + 0xc) < uVar1)))) {
          unaff_CS = 0x1148;
          FUN_1148_2ae7(iVar4,uVar5,uVar1 + 0x1fff & 0xe000,iVar3 + (uint)(0xe000 < uVar1));
        }
        *(uint *)(iVar4 + 8) = uVar1;
        *(int *)(iVar4 + 10) = iVar3;
      }
      uVar2 = FUN_1148_27ff(*(undefined2 *)(iVar4 + 0x10),*(undefined2 *)(iVar4 + 0x12),
                            *(undefined2 *)(iVar4 + 4),*(undefined2 *)(iVar4 + 6));
      HMEMCPY(unaff_CS,param_2,param_3,(int)param_4,(int)((ulong)param_4 >> 0x10),uVar2);
      *(uint *)(iVar4 + 0x10) = uVar1;
      *(int *)(iVar4 + 0x12) = iVar3;
      local_6 = param_2;
      local_4 = param_3;
      goto LAB_1148_2a0f;
    }
  }
  local_6 = 0;
  local_4 = 0;
LAB_1148_2a0f:
  return CONCAT22(local_4,local_6);
}



/* ---- FUN_1148_2a19 @ 1148:2a19  (112 octets) ---- */

undefined4 __stdcall16far FUN_1148_2a19(undefined4 param_1,int param_2,uint param_3,int param_4)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined2 uVar5;
  
  iVar4 = (int)param_1;
  uVar5 = (undefined2)((ulong)param_1 >> 0x10);
  if (param_2 == 0) {
    *(uint *)(iVar4 + 0x10) = param_3;
    *(int *)(iVar4 + 0x12) = param_4;
  }
  else if (param_2 == 1) {
    puVar1 = (uint *)(iVar4 + 0x10);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 + param_3;
    *(int *)(iVar4 + 0x12) = *(int *)(iVar4 + 0x12) + param_4 + (uint)CARRY2(uVar2,param_3);
  }
  else if (param_2 == 2) {
    uVar2 = *(uint *)(iVar4 + 8);
    iVar3 = *(int *)(iVar4 + 10);
    *(int *)(iVar4 + 0x10) = uVar2 + param_3;
    *(int *)(iVar4 + 0x12) = iVar3 + param_4 + (uint)CARRY2(uVar2,param_3);
  }
  return CONCAT22(*(undefined2 *)(iVar4 + 0x12),*(undefined2 *)(iVar4 + 0x10));
}



/* ---- FUN_1148_2a89 @ 1148:2a89  (44 octets) ---- */

void __stdcall16far FUN_1148_2a89(undefined4 param_1)

{
  int iVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  FUN_1148_2ae7(iVar1,uVar2,0,0);
  *(undefined2 *)(iVar1 + 8) = 0;
  *(undefined2 *)(iVar1 + 10) = 0;
  *(undefined2 *)(iVar1 + 0x10) = 0;
  *(undefined2 *)(iVar1 + 0x12) = 0;
  return;
}



/* ---- FUN_1148_2ab5 @ 1148:2ab5  (50 octets) ---- */

void __stdcall16far FUN_1148_2ab5(undefined4 param_1,undefined2 param_2,undefined2 param_3)

{
  int iVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  FUN_1148_2a89(iVar1,uVar2);
  FUN_1148_2ae7(iVar1,uVar2,param_2,param_3);
  *(undefined2 *)(iVar1 + 8) = param_2;
  *(undefined2 *)(iVar1 + 10) = param_3;
  return;
}



/* ---- FUN_1148_2ae7 @ 1148:2ae7  (219 octets) ---- */

void __stdcall16far FUN_1148_2ae7(undefined4 param_1,int param_2,int param_3)

{
  long lVar1;
  undefined extraout_AH;
  int iVar2;
  undefined2 uVar3;
  undefined2 unaff_SS;
  undefined4 uVar4;
  undefined *puVar5;
  undefined local_106 [256];
  undefined4 local_6;
  
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  iVar2 = (int)param_1;
  if ((param_3 != *(int *)(iVar2 + 0xe)) || (param_2 != *(int *)(iVar2 + 0xc))) {
    if (param_2 == 0 && param_3 == 0) {
      FUN_1028_3f30(*(undefined2 *)(iVar2 + 4),*(undefined2 *)(iVar2 + 6));
      *(undefined2 *)(iVar2 + 4) = 0;
      *(undefined2 *)(iVar2 + 6) = 0;
    }
    else {
      if (*(int *)(iVar2 + 0xc) == 0 && *(int *)(iVar2 + 0xe) == 0) {
        local_6 = FUN_1028_3edd(param_2,param_3,DAT_1160_189a);
      }
      else {
        local_6 = FUN_1028_3eff(DAT_1160_189a,param_2,param_3,*(undefined2 *)(iVar2 + 4),
                                *(undefined2 *)(iVar2 + 6));
      }
      lVar1 = local_6;
      if (local_6 == 0) {
        puVar5 = local_106;
        FUN_1150_092b(0xf005);
        uVar4 = FUN_1150_28e6(0xb1,0x1148,CONCAT11(extraout_AH,1),puVar5,unaff_SS);
        FUN_1158_1399(0x1150,uVar4);
        lVar1 = local_6;
      }
      local_6._2_2_ = (undefined2)((ulong)lVar1 >> 0x10);
      local_6._0_2_ = (undefined2)lVar1;
      *(undefined2 *)(iVar2 + 4) = (undefined2)local_6;
      *(undefined2 *)(iVar2 + 6) = local_6._2_2_;
    }
    *(int *)(iVar2 + 0xc) = param_2;
    *(int *)(iVar2 + 0xe) = param_3;
  }
  return;
}



/* ---- FUN_1148_2bc2 @ 1148:2bc2  (83 octets) ---- */

undefined4 __stdcall16far
FUN_1148_2bc2(undefined4 param_1,char param_2,undefined2 param_3,undefined2 param_4,
             undefined2 param_5)

{
  int iVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  undefined2 uStack_a;
  
  if (param_2 != '\0') {
    FUN_1158_1fe2();
  }
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  *(undefined2 *)(iVar1 + 4) = param_4;
  *(undefined2 *)(iVar1 + 6) = param_5;
  uVar3 = FUN_1158_0182(param_3);
  *(undefined2 *)(iVar1 + 8) = (int)uVar3;
  *(undefined2 *)(iVar1 + 10) = (int)((ulong)uVar3 >> 0x10);
  *(undefined2 *)(iVar1 + 0xc) = param_3;
  if (param_2 != '\0') {
    DAT_1160_1858 = uStack_a;
  }
  return param_1;
}



/* ---- FUN_1148_2c15 @ 1148:2c15  (48 octets) ---- */

void __stdcall16far FUN_1148_2c15(undefined4 param_1,char param_2)

{
  int iVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  if (*(int *)(iVar1 + 8) != 0 || *(int *)(iVar1 + 10) != 0) {
    FUN_1158_019c(*(undefined2 *)(iVar1 + 0xc),*(undefined2 *)(iVar1 + 8),
                  *(undefined2 *)(iVar1 + 10));
  }
  if (param_2 != '\0') {
    FUN_1158_200f();
  }
  return;
}



/* ---- FUN_1148_2c45 @ 1148:2c45  (92 octets) ---- */

undefined2 *
FUN_1148_2c45(byte *param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4,
             undefined2 param_5)

{
  undefined2 *puVar1;
  undefined2 uVar2;
  undefined2 *puVar3;
  
  puVar3 = (undefined2 *)FUN_1158_0182(*param_1 + 9);
  uVar2 = (undefined2)((ulong)puVar3 >> 0x10);
  puVar1 = (undefined2 *)puVar3;
  *puVar3 = param_4;
  puVar1[1] = param_5;
  puVar1[2] = param_2;
  puVar1[3] = param_3;
  FUN_1158_17e7(0xff,puVar1 + 4,uVar2,(byte *)param_1,(int)((ulong)param_1 >> 0x10));
  return puVar3;
}



/* ---- FUN_1148_2ca1 @ 1148:2ca1  (31 octets) ---- */

void FUN_1148_2ca1(undefined4 param_1)

{
  FUN_1158_019c(*(byte *)((int)param_1 + 8) + 9,(int)param_1,param_1._2_2_);
  return;
}



/* ---- FUN_1148_2cc0 @ 1148:2cc0  (35 octets) ---- */

void FUN_1148_2cc0(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_1150_28e6(0x164,0x1148,1,(int)param_1,(int)((ulong)param_1 >> 0x10));
  FUN_1158_1399(0x1150,uVar1);
  return;
}



/* ---- FUN_1148_2ce3 @ 1148:2ce3  (23 octets) ---- */

void __cdecl16near FUN_1148_2ce3(void)

{
  undefined2 unaff_SS;
  undefined *puVar1;
  undefined local_102 [256];
  
  puVar1 = local_102;
  FUN_1150_092b(0xf014);
  FUN_1148_2cc0(puVar1,unaff_SS);
  return;
}



/* ---- FUN_1148_2cfa @ 1148:2cfa  (23 octets) ---- */

void __cdecl16near FUN_1148_2cfa(void)

{
  undefined2 unaff_SS;
  undefined *puVar1;
  undefined local_102 [256];
  
  puVar1 = local_102;
  FUN_1150_092b(0xf016);
  FUN_1148_2cc0(puVar1,unaff_SS);
  return;
}



/* ---- FUN_1148_2d11 @ 1148:2d11  (39 octets) ---- */

int FUN_1148_2d11(undefined4 param_1,undefined2 param_2,undefined2 param_3)

{
  int iVar1;
  
  iVar1 = FUN_10a0_2cbf((int)param_1,(int)((ulong)param_1 >> 0x10),param_2,param_3);
  if (iVar1 == -1) {
    FUN_1148_2ce3();
  }
  return iVar1;
}



/* ---- FUN_1148_2d38 @ 1148:2d38  (60 octets) ---- */

void __stdcall16far FUN_1148_2d38(undefined4 param_1,char param_2)

{
  undefined2 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined2 uVar7;
  undefined2 uVar8;
  undefined2 uVar9;
  
  uVar7 = (undefined2)((ulong)param_1 >> 0x10);
  iVar5 = (int)param_1;
  iVar3 = *(int *)(iVar5 + 0xe) - *(int *)(iVar5 + 0x10);
  iVar4 = iVar3 >> 0xf;
  uVar9 = 1;
  puVar2 = (undefined4 *)*(undefined4 *)(iVar5 + 4);
  uVar8 = (undefined2)((ulong)puVar2 >> 0x10);
  puVar6 = (undefined4 *)puVar2;
  puVar1 = (undefined2 *)((int)*puVar2 + 8);
  (*(code *)*puVar1)();
  FUN_1148_2c15(iVar5,uVar7,0);
  if (param_2 != '\0') {
    FUN_1158_200f(puVar6,uVar8,uVar9,iVar3,iVar4);
  }
  return;
}



/* ---- FUN_1148_2d74 @ 1148:2d74  (39 octets) ---- */

void __stdcall16far FUN_1148_2d74(undefined4 param_1,char param_2)

{
  char cVar1;
  int iVar2;
  undefined2 uVar3;
  
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  iVar2 = (int)param_1;
  cVar1 = FUN_1148_3fb9(iVar2,uVar3);
  if (cVar1 != param_2) {
    *(int *)(iVar2 + 0xe) = *(int *)(iVar2 + 0xe) + -1;
    FUN_1148_40e3(iVar2,uVar3);
    FUN_1148_2ce3();
  }
  return;
}



/* ---- FUN_1148_2d9b @ 1148:2d9b  (53 octets) ---- */

void __stdcall16far FUN_1148_2d9b(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined2 uVar3;
  code *param_2;
  undefined2 param_3;
  undefined2 param_4;
  undefined4 param_5;
  
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  iVar2 = (int)param_1;
  iVar1 = FUN_1150_0730(iVar2 + 0x40,uVar3,(int)param_5,(int)((ulong)param_5 >> 0x10));
  if (iVar1 == 0) {
    (*param_2)(0x1150,param_3,param_4,iVar2,uVar3);
    *(undefined *)(iVar2 + 0x40) = 0;
  }
  return;
}



/* ---- FUN_1148_2eb5 @ 1148:2eb5  (38 octets) ---- */

uint __stdcall16far FUN_1148_2eb5(undefined4 param_1)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  undefined2 uVar4;
  
  uVar4 = (undefined2)((ulong)param_1 >> 0x10);
  uVar2 = FUN_1148_3fb9((int)param_1,uVar4);
  uVar3 = uVar2 & 0xff00;
  if ((char)uVar2 == '\0') {
    uVar3 = uVar3 + 1;
  }
  piVar1 = (int *)((int)param_1 + 0xe);
  *piVar1 = *piVar1 + -1;
  return uVar3;
}



/* ---- FUN_1148_2edb @ 1148:2edb  (57 octets) ---- */

uint __stdcall16far FUN_1148_2edb(undefined4 param_1)

{
  undefined2 *puVar1;
  uint uVar2;
  
  uVar2 = *(uint *)((int)param_1 + 0x38);
  if (uVar2 != 0) {
    puVar1 = (undefined2 *)((int)param_1 + 0x36);
    uVar2 = (*(code *)*puVar1)();
  }
  return uVar2 & 0xff00;
}



/* ---- FUN_1148_2f14 @ 1148:2f14  (108 octets) ---- */

long __stdcall16far FUN_1148_2f14(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  undefined2 uVar2;
  char local_7;
  long local_6;
  
  local_6 = FUN_1158_213b((int)*param_3,(int)((ulong)*param_3 >> 0x10),(int)param_2,
                          (int)((ulong)param_2 >> 0x10));
  local_7 = local_6 == 0;
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  if (*(int *)(iVar1 + 0x28) != 0) {
    (*(code *)*(undefined2 *)(iVar1 + 0x26))
              (0x1158,*(undefined2 *)(iVar1 + 0x2a),*(undefined2 *)(iVar1 + 0x2c),&local_7);
  }
  if (local_7 != '\0') {
    FUN_1148_2ce3();
  }
  return local_6;
}



/* ---- FUN_1148_2f86 @ 1148:2f86  (159 octets) ---- */

void __stdcall16far FUN_1148_2f86(undefined4 param_1)

{
  int iVar1;
  undefined2 *puVar2;
  undefined2 uVar3;
  int iVar4;
  undefined2 uVar5;
  undefined2 *puVar6;
  undefined4 uVar7;
  undefined2 uVar8;
  undefined2 uVar9;
  undefined2 uVar10;
  undefined2 uVar11;
  int iStack_12;
  undefined *puStack_10;
  undefined2 uStack_e;
  int local_4;
  
  puStack_10 = &stack0xfffe;
  uVar5 = (undefined2)((ulong)param_1 >> 0x10);
  iVar4 = (int)param_1;
  if (*(int *)(iVar4 + 0x1e) == 0 && *(int *)(iVar4 + 0x20) == 0) {
    return;
  }
  uStack_e = 0x2f80;
  iStack_12 = (int)DAT_1160_1858;
  iVar1 = *(int *)((int)*(undefined4 *)(iVar4 + 0x1e) + 8) + -1;
  if (-1 < iVar1) {
    local_4 = 0;
    DAT_1160_1858 = &iStack_12;
    while( true ) {
      puVar6 = (undefined2 *)
               FUN_1148_0dd0((int)*(undefined4 *)(iVar4 + 0x1e),
                             (int)((ulong)*(undefined4 *)(iVar4 + 0x1e) >> 0x10),local_4);
      uVar3 = (undefined2)((ulong)puVar6 >> 0x10);
      puVar2 = (undefined2 *)puVar6;
      uVar11 = puVar2[1];
      uVar10 = *puVar6;
      uVar9 = puVar2[3];
      uVar8 = puVar2[2];
      uVar7 = FUN_1148_50ab((int)*(undefined4 *)(iVar4 + 0x12),
                            (int)((ulong)*(undefined4 *)(iVar4 + 0x12) >> 0x10),puVar2 + 4,uVar3);
      FUN_10a0_2ec2(uVar7,uVar8,uVar9,uVar10,uVar11);
      if (local_4 == iVar1) break;
      local_4 = local_4 + 1;
    }
  }
  DAT_1160_1858 = (int *)iStack_12;
  uStack_e = 0x3021;
  iStack_12 = iVar4;
  puStack_10 = (undefined *)uVar5;
  FUN_1148_3025();
  return;
}



/* ---- FUN_1148_3025 @ 1148:3025  (105 octets) ---- */

void __stdcall16far FUN_1148_3025(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  int local_4;
  
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  iVar2 = (int)param_1;
  if (*(int *)(iVar2 + 0x1e) != 0 || *(int *)(iVar2 + 0x20) != 0) {
    iVar1 = *(int *)((int)*(undefined4 *)(iVar2 + 0x1e) + 8) + -1;
    if (-1 < iVar1) {
      local_4 = 0;
      while( true ) {
        uVar4 = FUN_1148_0dd0((int)*(undefined4 *)(iVar2 + 0x1e),
                              (int)((ulong)*(undefined4 *)(iVar2 + 0x1e) >> 0x10),local_4);
        FUN_1148_2ca1(uVar4);
        if (local_4 == iVar1) break;
        local_4 = local_4 + 1;
      }
    }
    FUN_1158_1f7f((int)*(undefined4 *)(iVar2 + 0x1e),
                  (int)((ulong)*(undefined4 *)(iVar2 + 0x1e) >> 0x10));
    *(undefined2 *)(iVar2 + 0x1e) = 0;
    *(undefined2 *)(iVar2 + 0x20) = 0;
  }
  return;
}



/* ---- FUN_1148_308e @ 1148:308e  (31 octets) ---- */

undefined __stdcall16far FUN_1148_308e(undefined4 param_1)

{
  int *piVar1;
  undefined uVar2;
  undefined2 uVar3;
  
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  uVar2 = FUN_1148_3fb9((int)param_1,uVar3);
  piVar1 = (int *)((int)param_1 + 0xe);
  *piVar1 = *piVar1 + -1;
  return uVar2;
}



/* ---- FUN_1148_30ad @ 1148:30ad  (20 octets) ---- */

void __stdcall16far FUN_1148_30ad(undefined4 param_1)

{
  FUN_1148_40e3((int)param_1,(int)((ulong)param_1 >> 0x10));
  FUN_1148_2cfa();
  return;
}



/* ---- FUN_1148_30c1 @ 1148:30c1  (110 octets) ---- */

void __stdcall16far FUN_1148_30c1(undefined4 param_1,uint param_2,int param_3,undefined *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  undefined *puVar6;
  int iVar7;
  undefined *puVar8;
  undefined2 uVar9;
  int iVar10;
  bool bVar11;
  
  while (param_2 != 0 || param_3 != 0) {
    uVar9 = (undefined2)((ulong)param_1 >> 0x10);
    iVar7 = (int)param_1;
    uVar4 = *(uint *)(iVar7 + 0x10) - *(uint *)(iVar7 + 0xe);
    if (*(uint *)(iVar7 + 0x10) < *(uint *)(iVar7 + 0xe) || uVar4 == 0) {
      FUN_1148_312f(iVar7,uVar9);
      uVar4 = *(uint *)(iVar7 + 0x10);
    }
    if ((param_3 == 0) && (param_2 <= uVar4)) {
      uVar4 = param_2;
    }
    puVar8 = (undefined *)param_4;
    uVar5 = -(int)(undefined *)param_4;
    if ((uVar5 != 0) && (uVar5 <= uVar4)) {
      uVar4 = uVar5;
    }
    bVar11 = param_2 < uVar4;
    param_2 = param_2 - uVar4;
    param_3 = param_3 - (uint)bVar11;
    uVar3 = *(undefined4 *)(iVar7 + 8);
    puVar6 = (undefined *)((int)uVar3 + *(int *)(iVar7 + 0xe));
    *(int *)(iVar7 + 0xe) = *(int *)(iVar7 + 0xe) + uVar4;
    iVar10 = (int)((ulong)param_4 >> 0x10);
    iVar7 = iVar10;
    if (CARRY2((uint)(undefined *)param_4,uVar4)) {
      iVar7 = iVar10 + 0x80;
    }
    param_4 = (undefined *)CONCAT22(iVar7,(undefined *)param_4 + uVar4);
    for (; uVar4 != 0; uVar4 = uVar4 - 1) {
      puVar2 = puVar8;
      puVar8 = puVar8 + 1;
      puVar1 = puVar6;
      puVar6 = puVar6 + 1;
      *puVar2 = *puVar1;
    }
  }
  return;
}



/* ---- FUN_1148_312f @ 1148:312f  (100 octets) ---- */

void __stdcall16far FUN_1148_312f(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined2 uVar2;
  undefined extraout_AH;
  int iVar3;
  undefined2 uVar4;
  undefined4 *puVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  undefined2 uVar8;
  undefined2 unaff_SS;
  undefined4 uVar9;
  undefined *puVar10;
  undefined2 uVar11;
  undefined2 uVar12;
  undefined local_102 [256];
  
  uVar6 = (undefined2)((ulong)param_1 >> 0x10);
  iVar3 = (int)param_1;
  uVar7 = (undefined2)((ulong)*(undefined4 *)(iVar3 + 8) >> 0x10);
  uVar4 = (undefined2)*(undefined4 *)(iVar3 + 8);
  uVar11 = *(undefined2 *)(iVar3 + 0xc);
  uVar12 = 0;
  puVar1 = (undefined4 *)*(undefined4 *)(iVar3 + 4);
  uVar8 = (undefined2)((ulong)puVar1 >> 0x10);
  puVar5 = (undefined4 *)puVar1;
  uVar2 = (*(code *)*(undefined2 *)(undefined2 *)*puVar1)();
  *(undefined2 *)(iVar3 + 0x10) = uVar2;
  if (*(int *)(iVar3 + 0x10) == 0) {
    puVar10 = local_102;
    FUN_1150_092b(0xf003);
    uVar9 = FUN_1150_28e6(0x164,0x1148,CONCAT11(extraout_AH,1),puVar10,unaff_SS);
    FUN_1158_1399(0x1150,uVar9,puVar5,uVar8,uVar11,uVar12,uVar4,uVar7);
  }
  *(undefined2 *)(iVar3 + 0xe) = 0;
  return;
}



/* ---- FUN_1148_3193 @ 1148:3193  (31 octets) ---- */

uint __stdcall16far FUN_1148_3193(undefined4 param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = FUN_1148_3fb9((int)param_1,(int)((ulong)param_1 >> 0x10));
  uVar2 = uVar1 & 0xff00;
  if ((char)uVar1 == '\t') {
    uVar2 = uVar2 + 1;
  }
  return uVar2;
}



/* ---- FUN_1148_31b2 @ 1148:31b2  (96 octets) ---- */

char __stdcall16far FUN_1148_31b2(undefined4 param_1)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 unaff_SS;
  char local_3;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  FUN_1148_2d74(iVar1,uVar2,6);
  FUN_1148_30c1(iVar1,uVar2,1,0,&local_3,unaff_SS);
  if (local_3 != '\x01') {
    *(int *)(iVar1 + 0xe) = *(int *)(iVar1 + 0xe) + -1;
    FUN_1148_3f3b(iVar1,uVar2);
    FUN_1148_2ce3();
  }
  FUN_1148_30c1(iVar1,uVar2,1,0,&local_3,unaff_SS);
  return local_3;
}



/* ---- FUN_1148_321c @ 1148:321c  (101 octets) ---- */

void FUN_1148_321c(int param_1)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 unaff_SS;
  undefined4 uVar3;
  undefined *puVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  undefined2 uVar8;
  undefined2 uVar9;
  undefined2 uStack_10e;
  undefined *puStack_10c;
  undefined2 uStack_10a;
  undefined local_102 [256];
  
  puStack_10c = &stack0xfffe;
  uStack_10a = 0x3212;
  uStack_10e = DAT_1160_1858;
  uVar2 = (undefined2)((ulong)*(undefined4 *)(param_1 + 6) >> 0x10);
  iVar1 = (int)*(undefined4 *)(param_1 + 6);
  uVar9 = *(undefined2 *)(iVar1 + 0x18);
  uVar8 = *(undefined2 *)(iVar1 + 0x16);
  uVar7 = 0x3201;
  uVar6 = *(undefined2 *)(iVar1 + 0x14);
  uVar2 = *(undefined2 *)(iVar1 + 0x12);
  puVar4 = local_102;
  DAT_1160_1858 = &uStack_10e;
  uVar5 = unaff_SS;
  FUN_1148_3f3b((int)*(undefined4 *)(param_1 + 6),(int)((ulong)*(undefined4 *)(param_1 + 6) >> 0x10)
               );
  uVar3 = FUN_1148_0809(puVar4,uVar5,uVar2,uVar6);
  iVar1 = (int)uVar3;
  uVar3 = (*(code *)*(undefined2 *)(iVar1 + 0x2c))(0x1148,uVar3,uVar7,uVar8,uVar9);
  *(undefined2 *)(param_1 + -4) = (int)uVar3;
  *(undefined2 *)(param_1 + -2) = (int)((ulong)uVar3 >> 0x10);
  DAT_1160_1858 = (undefined2 *)iVar1;
  return;
}



/* ---- FUN_1148_32dc @ 1148:32dc  (97 octets) ---- */

void FUN_1148_32dc(int param_1)

{
  undefined2 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined2 unaff_SS;
  undefined *puVar4;
  undefined2 uVar5;
  undefined2 uStack_14e;
  undefined *puStack_14c;
  undefined2 uStack_14a;
  undefined local_142 [256];
  undefined local_42 [64];
  
  puStack_14c = &stack0xfffe;
  uStack_14a = 0x32d2;
  uStack_14e = DAT_1160_1858;
  puVar4 = local_142;
  DAT_1160_1858 = (undefined4 *)&uStack_14e;
  uVar5 = unaff_SS;
  FUN_1148_3f3b((int)*(undefined4 *)(param_1 + 6),(int)((ulong)*(undefined4 *)(param_1 + 6) >> 0x10)
               );
  FUN_1158_17e7(0x3f,local_42,unaff_SS,puVar4,uVar5);
  puVar2 = (undefined4 *)*(undefined4 *)(param_1 + 6);
  puVar3 = (undefined4 *)puVar2;
  puVar1 = (undefined2 *)((int)*puVar2 + 0x10);
  (*(code *)*puVar1)(0x1158,puVar3,(int)((ulong)puVar2 >> 0x10),0x3f,local_42);
  DAT_1160_1858 = puVar3;
  return;
}



/* ---- FUN_1148_33a6 @ 1148:33a6  (117 octets) ---- */

undefined4 * __stdcall16far FUN_1148_33a6(undefined4 param_1)

{
  undefined2 *puVar1;
  undefined4 *puStack_e;
  undefined *puStack_c;
  undefined2 uStack_a;
  undefined4 local_6;
  
  uStack_a = 0x33ae;
  FUN_1148_321c();
  if ((undefined4 *)local_6 != (undefined4 *)0x0 || local_6._2_2_ != 0) {
    uStack_a = 0x339c;
    puStack_e = (undefined4 *)DAT_1160_1858;
    DAT_1160_1858 = &puStack_e;
    *(byte *)((undefined4 *)local_6 + 6) = *(byte *)((undefined4 *)local_6 + 6) | 1;
    puStack_c = &stack0xfffe;
    FUN_1148_32dc(&stack0xfffe);
    *(byte *)((undefined4 *)local_6 + 6) = *(byte *)((undefined4 *)local_6 + 6) | 2;
    puVar1 = (undefined2 *)((int)*local_6 + 0x18);
    (*(code *)*puVar1)();
    *(byte *)((undefined4 *)local_6 + 6) = *(byte *)((undefined4 *)local_6 + 6) & 0xfd;
    FUN_1148_0c2b((int)*(undefined4 *)((int)param_1 + 0x22),
                  (int)((ulong)*(undefined4 *)((int)param_1 + 0x22) >> 0x10),(undefined4 *)local_6,
                  local_6._2_2_);
    DAT_1160_1858 = (undefined4 **)(undefined4 *)local_6;
  }
  return local_6;
}



/* ---- FUN_1148_3435 @ 1148:3435  (124 octets) ---- */

void __stdcall16far FUN_1148_3435(undefined4 param_1,undefined2 param_2,undefined2 param_3)

{
  int iVar1;
  int iVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  iVar2 = (int)param_1;
  if (*(int *)(iVar2 + 0x1e) == 0 && *(int *)(iVar2 + 0x20) == 0) {
    uVar4 = FUN_1158_1f50();
    *(undefined2 *)(iVar2 + 0x1e) = (int)uVar4;
    *(undefined2 *)(iVar2 + 0x20) = (int)((ulong)uVar4 >> 0x10);
    DAT_1160_1858 = &stack0xfff2;
    FUN_1148_34b9(iVar2,uVar3,param_2,param_3);
    iVar1 = iVar2;
    FUN_1148_2f86(iVar2,uVar3);
    DAT_1160_1858 = (undefined *)iVar1;
    FUN_1148_3025(iVar2,uVar3);
    return;
  }
  FUN_1148_34b9();
  return;
}



/* ---- FUN_1148_34b9 @ 1148:34b9  (157 octets) ---- */

void __cdecl16far FUN_1148_34b9(undefined4 param_1,undefined2 param_2,undefined2 param_3)

{
  char cVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 unaff_CS;
  int iStack_e;
  undefined *puStack_c;
  int iStack_a;
  undefined2 uStack_8;
  undefined2 local_6;
  undefined2 local_4;
  
  while( true ) {
    uVar3 = (undefined2)((ulong)param_1 >> 0x10);
    iVar2 = (int)param_1;
    iStack_e = 0x34c7;
    puStack_c = (undefined *)unaff_CS;
    iStack_a = iVar2;
    uStack_8 = uVar3;
    cVar1 = FUN_1148_2eb5();
    if (cVar1 != '\0') break;
    uStack_8 = param_3;
    iStack_a = param_2;
    unaff_CS = 0x1148;
    iStack_e = iVar2;
    puStack_c = (undefined *)uVar3;
    FUN_1148_379e();
  }
  puStack_c = (undefined *)0x1148;
  iStack_e = 0x34e7;
  iStack_a = iVar2;
  uStack_8 = uVar3;
  FUN_1148_3697();
  local_6 = *(undefined2 *)(iVar2 + 0x1a);
  local_4 = *(undefined2 *)(iVar2 + 0x1c);
  *(undefined2 *)(iVar2 + 0x1a) = param_2;
  *(undefined2 *)(iVar2 + 0x1c) = param_3;
  uStack_8 = 0x1148;
  iStack_a = 0x34b3;
  iStack_e = (int)DAT_1160_1858;
  DAT_1160_1858 = &iStack_e;
  puStack_c = &stack0xfffe;
  while( true ) {
    cVar1 = FUN_1148_2eb5(iVar2,uVar3);
    if (cVar1 != '\0') break;
    FUN_1148_33a6(iVar2,uVar3);
  }
  FUN_1148_3697(iVar2,uVar3);
  DAT_1160_1858 = (int *)iStack_e;
  *(undefined2 *)(iVar2 + 0x1a) = local_6;
  *(undefined2 *)(iVar2 + 0x1c) = local_4;
  return;
}



/* ---- FUN_1148_355a @ 1148:355a  (45 octets) ---- */

void __stdcall16far FUN_1148_355a(undefined4 param_1)

{
  undefined2 uVar1;
  undefined2 unaff_SS;
  undefined local_c [10];
  
  uVar1 = (undefined2)((ulong)param_1 >> 0x10);
  FUN_1148_2d74((int)param_1,uVar1,5);
  FUN_1148_30c1((int)param_1,uVar1,10,0,local_c,unaff_SS);
  return;
}



/* ---- FUN_1148_3592 @ 1148:3592  (119 octets) ---- */

void __stdcall16far FUN_1148_3592(undefined4 param_1,undefined *param_2)

{
  char cVar1;
  undefined2 uVar2;
  undefined *puVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  
  uVar4 = (undefined2)((ulong)param_1 >> 0x10);
  uVar2 = (undefined2)param_1;
  cVar1 = FUN_1148_3fb9(uVar2,uVar4);
  puVar3 = (undefined *)param_2;
  uVar5 = (undefined2)((ulong)param_2 >> 0x10);
  if (cVar1 == '\a') {
    FUN_1148_30c1(uVar2,uVar4,1,0,puVar3,uVar5);
    FUN_1148_30c1(uVar2,uVar4,*param_2,0,puVar3 + 1,uVar5);
  }
  else if (cVar1 == '\b') {
    FUN_1158_17e7(0xff,puVar3,uVar5,0x3587,0x1148);
  }
  else if (cVar1 == '\t') {
    FUN_1158_17e7(0xff,puVar3,uVar5,0x358d,0x1148);
  }
  return;
}



/* ---- FUN_1148_3609 @ 1148:3609  (123 octets) ---- */

undefined4 __stdcall16far FUN_1148_3609(undefined4 param_1)

{
  char cVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 unaff_SS;
  int local_a;
  char local_7;
  int local_6;
  int local_4;
  
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  uVar2 = (undefined2)param_1;
  cVar1 = FUN_1148_3fb9(uVar2,uVar3);
  if (cVar1 == '\x02') {
    FUN_1148_30c1(uVar2,uVar3,1,0,&local_7,unaff_SS);
    local_6 = (int)local_7;
    local_4 = local_6 >> 0xf;
  }
  else if (cVar1 == '\x03') {
    FUN_1148_30c1(uVar2,uVar3,2,0,&local_a,unaff_SS);
    local_4 = local_a >> 0xf;
    local_6 = local_a;
  }
  else if (cVar1 == '\x04') {
    FUN_1148_30c1(uVar2,uVar3,4,0,&local_6,unaff_SS);
  }
  else {
    FUN_1148_2ce3();
  }
  return CONCAT22(local_4,local_6);
}



/* ---- FUN_1148_3684 @ 1148:3684  (19 octets) ---- */

void __stdcall16far FUN_1148_3684(undefined4 param_1)

{
  FUN_1148_2d74((int)param_1,(int)((ulong)param_1 >> 0x10),1);
  return;
}



/* ---- FUN_1148_3697 @ 1148:3697  (19 octets) ---- */

void __stdcall16far FUN_1148_3697(undefined4 param_1)

{
  FUN_1148_2d74((int)param_1,(int)((ulong)param_1 >> 0x10),0);
  return;
}



/* ---- FUN_1148_3763 @ 1148:3763  (39 octets) ---- */

void FUN_1148_3763(int param_1)

{
  undefined2 unaff_SS;
  undefined *puVar1;
  undefined local_102 [256];
  
  FUN_1148_40e3((int)*(undefined4 *)(param_1 + 6),(int)((ulong)*(undefined4 *)(param_1 + 6) >> 0x10)
               );
  puVar1 = local_102;
  FUN_1150_092b(0xf015);
  FUN_1148_2cc0(puVar1,unaff_SS);
  return;
}



/* ---- FUN_1148_379e @ 1148:379e  (457 octets) ---- */

void __stdcall16far FUN_1148_379e(byte *param_1,undefined4 *param_2,undefined2 param_3)

{
  undefined2 *puVar1;
  int iVar2;
  char cVar3;
  byte *pbVar4;
  undefined2 uVar5;
  undefined2 unaff_SS;
  undefined4 uVar6;
  undefined *puVar7;
  undefined2 uVar8;
  byte *pbStack_228;
  undefined2 uStack_220;
  undefined *puStack_21e;
  undefined2 uStack_21c;
  undefined local_214 [256];
  byte local_114 [256];
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  uint local_8;
  int local_6;
  int local_4;
  
  puStack_21e = &stack0xfffe;
  uStack_21c = 0x3794;
  uStack_220 = DAT_1160_1858;
  uVar5 = (undefined2)((ulong)param_1 >> 0x10);
  pbVar4 = (byte *)param_1;
  DAT_1160_1858 = (byte **)&uStack_220;
  pbStack_228 = pbVar4;
  FUN_1148_3f3b();
  pbStack_228 = local_114;
  FUN_1158_17e7(0xff);
  pbStack_228 = (byte *)DAT_1160_1858;
  local_4 = 1;
  local_8 = (uint)local_114[0];
  local_c = (undefined4 *)CONCAT22(param_3,param_2);
  DAT_1160_1858 = &pbStack_228;
  pbVar4[0x3e] = 1;
  while( true ) {
    iVar2 = local_4;
    local_6 = local_4;
    for (; (local_4 <= (int)local_8 && (local_114[local_4] != 0x2e)); local_4 = local_4 + 1) {
    }
    puVar7 = local_214;
    uVar8 = unaff_SS;
    FUN_1158_180b(local_4 - iVar2,iVar2,local_114,unaff_SS);
    FUN_1158_17e7(0x3f,pbVar4 + 0x40,uVar5,puVar7,uVar8);
    if ((int)local_8 < local_4) break;
    uVar6 = FUN_1158_2126((int)*local_c,(int)((ulong)*local_c >> 0x10));
    local_10 = (undefined4 *)FUN_10a0_2d13(pbVar4 + 0x40,uVar5,uVar6);
    if (local_10 == (undefined4 *)0x0) {
      FUN_1148_30ad(pbVar4,uVar5);
    }
    local_14._0_2_ = (undefined4 *)0x0;
    local_14._2_2_ = 0;
    local_14 = (undefined4 *)0x0;
    if (*(char *)*local_10 == '\a') {
      local_14 = (undefined4 *)
                 FUN_10a0_2e32((undefined4 *)local_10,local_10._2_2_,(undefined4 *)local_c,
                               local_c._2_2_);
    }
    cVar3 = FUN_1158_2255(0x2d1,0x1148,local_14);
    if (cVar3 == '\0') {
      FUN_1148_3763(&stack0xfffe);
    }
    local_c = local_14;
    local_4 = local_4 + 1;
  }
  uVar6 = FUN_1158_2126((int)*local_c,(int)((ulong)*local_c >> 0x10));
  local_10 = (undefined4 *)FUN_10a0_2d13(pbVar4 + 0x40,uVar5,uVar6);
  if (local_10 == (undefined4 *)0x0) {
    pbVar4[0x3e] = 0;
    puVar1 = (undefined2 *)((int)*local_c + 4);
    (*(code *)*puVar1)((char *)s_iCurrDigits_1160_109b + 5,(undefined4 *)local_c,local_c._2_2_,
                       pbVar4,uVar5);
    pbVar4[0x3e] = 1;
    if (pbVar4[0x40] != 0) {
      FUN_1148_30ad(pbVar4,uVar5);
    }
  }
  else {
    FUN_1148_3a68(pbVar4,uVar5,local_10,(undefined4 *)local_c,local_c._2_2_);
  }
  DAT_1160_1858 = (byte **)uStack_220;
  return;
}



/* ---- FUN_1148_39bd @ 1148:39bd  (155 octets) ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1148_39bd(void)

{
  char cVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined2 unaff_SS;
  int *param_2;
  undefined2 param_3;
  undefined2 param_4;
  undefined *puVar5;
  undefined local_108 [250];
  undefined4 local_e;
  int local_a;
  undefined2 local_8;
  undefined2 local_6;
  int local_4;
  
  local_a = *(int *)((int)_DAT_1160_170a + 8) + -1;
  if (-1 < local_a) {
    local_4 = 0;
    while( true ) {
      local_e = FUN_1148_0dd0((int)_DAT_1160_170a,(int)((ulong)_DAT_1160_170a >> 0x10),local_4);
      uVar3 = (undefined2)((ulong)local_e >> 0x10);
      iVar2 = (int)local_e;
      uVar4 = (undefined2)((ulong)param_2 >> 0x10);
      if (((((int *)param_2)[1] == *(int *)(iVar2 + 6)) && (*param_2 == *(int *)(iVar2 + 4))) &&
         (cVar1 = (*(code *)*(undefined2 *)(iVar2 + 8))(0x1148,&local_8), cVar1 != '\0')) {
        FUN_10a0_2ec2(local_8,local_6,(int *)param_2,uVar4,param_3,param_4);
        return;
      }
      if (local_4 == local_a) break;
      local_4 = local_4 + 1;
    }
  }
  puVar5 = local_108;
  FUN_1150_092b(0xf014);
  FUN_1148_2cc0(puVar5,unaff_SS);
  return;
}



/* ---- FUN_1148_3a68 @ 1148:3a68  (501 octets) ---- */

void __stdcall16far
FUN_1148_3a68(undefined4 *param_1,undefined2 *param_2,undefined2 param_3,undefined2 param_4)

{
  undefined2 *puVar1;
  char cVar2;
  undefined2 *puVar3;
  undefined4 *puVar4;
  undefined2 uVar5;
  undefined2 unaff_SS;
  unkbyte10 in_ST0;
  undefined4 uVar6;
  undefined *puVar7;
  undefined2 uVar8;
  undefined local_10e [256];
  long local_e;
  undefined2 local_a;
  undefined2 local_8;
  undefined4 local_6;
  
  uVar5 = (undefined2)((ulong)param_2 >> 0x10);
  puVar3 = (undefined2 *)param_2;
  if (puVar3[4] == 0 && puVar3[5] == 0) {
    puVar7 = local_10e;
    uVar8 = unaff_SS;
    FUN_1150_092b(0xf017);
    FUN_1148_2cc0(puVar7,uVar8);
  }
  local_6 = (undefined *)CONCAT22(puVar3[1],(undefined *)*param_2);
  puVar4 = (undefined4 *)param_1;
  uVar8 = (undefined2)((ulong)param_1 >> 0x10);
  switch(*local_6) {
  case 1:
    cVar2 = FUN_1148_308e(puVar4,uVar8);
    if (cVar2 == '\a') {
      FUN_1148_3592();
      FUN_1148_39bd();
    }
    else {
      FUN_1148_3609();
      FUN_10a0_2ec2();
    }
    break;
  case 2:
    FUN_1148_31b2();
    FUN_10a0_2ec2();
    break;
  case 3:
    FUN_1148_3592(puVar4,uVar8);
    FUN_1148_2d11();
    FUN_10a0_2ec2();
    break;
  case 4:
    FUN_1148_355a();
    FUN_10a0_3083(in_ST0,puVar3,uVar5,param_3,param_4);
    break;
  case 5:
    FUN_1148_3f74();
    FUN_10a0_2f9c();
    break;
  case 6:
    FUN_1148_3e51();
    FUN_10a0_2ec2();
    break;
  case 7:
    FUN_1148_3592();
    uVar6 = FUN_1148_2c45();
    FUN_1148_0c2b((int)*(undefined4 *)((int)puVar4 + 0x1e),
                  (int)((ulong)*(undefined4 *)((int)puVar4 + 0x1e) >> 0x10),uVar6);
    break;
  case 8:
    FUN_1148_3592();
    puVar1 = (undefined2 *)((int)*param_1 + 0xc);
    local_e = (*(code *)*puVar1)();
    local_a = *(undefined2 *)((int)puVar4 + 0x12);
    local_8 = *(undefined2 *)(puVar4 + 5);
    if (local_e != 0) {
      FUN_10a0_317b(&local_e,unaff_SS,puVar3,uVar5);
    }
  }
  return;
}



/* ---- FUN_1148_3c6d @ 1148:3c6d  (427 octets) ---- */

void __cdecl16far FUN_1148_3c6d(undefined4 param_1,undefined4 *param_2,int param_3)

{
  byte *pbVar1;
  undefined2 uVar2;
  undefined2 *puVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined2 uVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  undefined *puVar10;
  undefined2 uStack_110;
  undefined local_108 [254];
  int local_a;
  int local_8;
  undefined4 local_6;
  
  uVar7 = (undefined2)((ulong)param_1 >> 0x10);
  iVar5 = (int)param_1;
  uStack_110 = 0x3c7b;
  FUN_1148_3efd();
  uStack_110 = DAT_1160_1858;
  local_6 = (undefined4 *)0x0;
  if (param_2 == (undefined4 *)0x0 && param_3 == 0) {
    puVar10 = local_108;
    DAT_1160_1858 = (undefined4 *)&uStack_110;
    FUN_1148_3f3b(iVar5,uVar7);
    iVar4 = FUN_1148_07db(puVar10);
    local_6 = (undefined4 *)(*(code *)*(undefined2 *)(iVar4 + 0x2c))(0x1148,iVar4);
    puVar10 = local_108;
    FUN_1148_3f3b(iVar5,uVar7);
    puVar3 = (undefined2 *)((int)*local_6 + 0x1c);
    (*(code *)*puVar3)(0x1148,(undefined4 *)local_6,(int)((ulong)local_6 >> 0x10),puVar10);
  }
  else {
    local_6 = (undefined4 *)CONCAT22(param_3,param_2);
    DAT_1160_1858 = (undefined4 *)&uStack_110;
    FUN_1148_3f3b();
    FUN_1148_3f3b();
  }
  *(undefined2 *)(iVar5 + 0x12) = (undefined4 *)local_6;
  *(undefined2 *)(iVar5 + 0x14) = local_6._2_2_;
  uVar8 = FUN_1158_1f50();
  *(undefined2 *)(iVar5 + 0x22) = (int)uVar8;
  *(undefined2 *)(iVar5 + 0x24) = (int)((ulong)uVar8 >> 0x10);
  DAT_1160_1858 = (undefined4 *)&stack0xfee8;
  FUN_1148_0c2b((int)*(undefined4 *)(iVar5 + 0x22),
                (int)((ulong)*(undefined4 *)(iVar5 + 0x22) >> 0x10),*(undefined2 *)(iVar5 + 0x12),
                *(undefined2 *)(iVar5 + 0x14));
  uVar2 = *(undefined2 *)(iVar5 + 0x14);
  *(undefined2 *)(iVar5 + 0x16) = *(undefined2 *)(iVar5 + 0x12);
  *(undefined2 *)(iVar5 + 0x18) = uVar2;
  pbVar1 = (byte *)((int)*(undefined4 *)(iVar5 + 0x12) + 0x18);
  *pbVar1 = *pbVar1 | 1;
  pbVar1 = (byte *)((int)*(undefined4 *)(iVar5 + 0x12) + 0x18);
  *pbVar1 = *pbVar1 | 2;
  puVar9 = (undefined4 *)*(undefined4 *)(iVar5 + 0x12);
  puVar6 = (undefined4 *)puVar9;
  puVar3 = (undefined2 *)((int)*puVar9 + 0x18);
  (*(code *)*puVar3)(0x1148,puVar6,(int)((ulong)puVar9 >> 0x10),iVar5,uVar7);
  pbVar1 = (byte *)((int)*(undefined4 *)(iVar5 + 0x12) + 0x18);
  *pbVar1 = *pbVar1 & 0xfd;
  local_a = *(int *)((int)*(undefined4 *)(iVar5 + 0x22) + 8) + -1;
  if (-1 < local_a) {
    local_8 = 0;
    while( true ) {
      puVar9 = (undefined4 *)
               FUN_1148_0dd0((int)*(undefined4 *)(iVar5 + 0x22),
                             (int)((ulong)*(undefined4 *)(iVar5 + 0x22) >> 0x10),local_8);
      puVar3 = (undefined2 *)((int)*puVar9 + 0x10);
      (*(code *)*puVar3)(0x1148,puVar9);
      if (local_8 == local_a) break;
      local_8 = local_8 + 1;
    }
  }
  DAT_1160_1858 = puVar6;
  FUN_1158_1f7f((int)*(undefined4 *)(iVar5 + 0x22),
                (int)((ulong)*(undefined4 *)(iVar5 + 0x22) >> 0x10));
  *(undefined2 *)(iVar5 + 0x22) = 0;
  *(undefined2 *)(iVar5 + 0x24) = 0;
  return;
}



/* ---- FUN_1148_3e51 @ 1148:3e51  (152 octets) ---- */

uint __stdcall16far FUN_1148_3e51(undefined4 param_1,undefined2 param_2,undefined2 param_3)

{
  char cVar1;
  byte bVar2;
  undefined2 uVar3;
  undefined2 unaff_SS;
  undefined4 uVar4;
  undefined *puVar5;
  undefined2 uVar6;
  undefined2 uStack_150;
  undefined *puStack_14e;
  undefined2 uStack_14c;
  undefined local_148 [256];
  char local_48 [64];
  undefined2 local_8;
  undefined2 local_6;
  uint local_4;
  
  puStack_14e = &stack0xfffe;
  uStack_14c = 0x3e47;
  uStack_150 = DAT_1160_1858;
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  DAT_1160_1858 = &uStack_150;
  cVar1 = FUN_1148_3fb9((int)param_1,uVar3);
  if (cVar1 != '\v') {
    FUN_1148_2ce3();
  }
  uVar4 = FUN_10a0_2c7e(param_2,param_3);
  uVar6 = (undefined2)((ulong)uVar4 >> 0x10);
  local_8 = *(undefined2 *)((int)uVar4 + 1);
  local_6 = *(undefined2 *)((int)uVar4 + 3);
  local_4 = 0;
  while( true ) {
    puVar5 = local_148;
    uVar6 = unaff_SS;
    FUN_1148_3f3b((int)param_1,uVar3);
    FUN_1158_17e7(0x3f,local_48,unaff_SS,puVar5,uVar6);
    if (local_48[0] == '\0') break;
    bVar2 = FUN_1148_2d11(local_48,unaff_SS,local_8,local_6);
    if (bVar2 < 0x10) {
      local_4 = local_4 | 1 << (bVar2 & 0xf) | 1U >> 0x10 - (bVar2 & 0xf);
    }
  }
  DAT_1160_1858 = (undefined2 *)uStack_150;
  return local_4;
}



/* ---- FUN_1148_3efd @ 1148:3efd  (62 octets) ---- */

void __stdcall16far FUN_1148_3efd(undefined4 param_1)

{
  undefined2 unaff_SS;
  undefined *puVar1;
  undefined local_106 [256];
  int local_6;
  int local_4;
  
  FUN_1148_30c1((int)param_1,(int)((ulong)param_1 >> 0x10),4,0,&local_6,unaff_SS);
  if ((local_4 != DAT_1160_1700) || (local_6 != DAT_1160_16fe)) {
    puVar1 = local_106;
    FUN_1150_092b(0xf008);
    FUN_1148_2cc0(puVar1,unaff_SS);
  }
  return;
}



/* ---- FUN_1148_3f3b @ 1148:3f3b  (57 octets) ---- */

void __stdcall16far FUN_1148_3f3b(undefined4 param_1,undefined *param_2)

{
  undefined2 uVar1;
  undefined2 uVar2;
  
  uVar1 = (undefined2)((ulong)param_2 >> 0x10);
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  FUN_1148_30c1((int)param_1,uVar2,1,0,(undefined *)param_2,uVar1);
  FUN_1148_30c1((int)param_1,uVar2,*param_2,0,(undefined *)param_2 + 1,uVar1);
  return;
}



/* ---- FUN_1148_3f74 @ 1148:3f74  (69 octets) ---- */

void __stdcall16far FUN_1148_3f74(undefined4 param_1,undefined *param_2)

{
  undefined2 uVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  uVar1 = (undefined2)param_1;
  FUN_1148_2d74(uVar1,uVar2,6);
  uVar3 = (undefined2)((ulong)param_2 >> 0x10);
  FUN_1148_30c1(uVar1,uVar2,1,0,(undefined *)param_2,uVar3);
  FUN_1148_30c1(uVar1,uVar2,*param_2,0,(undefined *)param_2 + 1,uVar3);
  return;
}



/* ---- FUN_1148_3fb9 @ 1148:3fb9  (30 octets) ---- */

undefined __stdcall16far FUN_1148_3fb9(undefined4 param_1)

{
  undefined2 unaff_SS;
  undefined local_3;
  
  FUN_1148_30c1((int)param_1,(int)((ulong)param_1 >> 0x10),1,0,&local_3,unaff_SS);
  return local_3;
}



/* ---- FUN_1148_3fd7 @ 1148:3fd7  (36 octets) ---- */

void __stdcall16far FUN_1148_3fd7(undefined4 param_1)

{
  char local_102;
  
  do {
    FUN_1148_3f3b((int)param_1,(int)((ulong)param_1 >> 0x10));
  } while (local_102 != '\0');
  return;
}



/* ---- FUN_1148_3ffb @ 1148:3ffb  (55 octets) ---- */

void FUN_1148_3ffb(int param_1)

{
  char cVar1;
  undefined2 unaff_SS;
  
  while( true ) {
    cVar1 = FUN_1148_2eb5((int)*(undefined4 *)(param_1 + 6),
                          (int)((ulong)*(undefined4 *)(param_1 + 6) >> 0x10));
    if (cVar1 != '\0') break;
    FUN_1148_40e3((int)*(undefined4 *)(param_1 + 6),
                  (int)((ulong)*(undefined4 *)(param_1 + 6) >> 0x10));
  }
  FUN_1148_3697((int)*(undefined4 *)(param_1 + 6),(int)((ulong)*(undefined4 *)(param_1 + 6) >> 0x10)
               );
  return;
}



/* ---- FUN_1148_4032 @ 1148:4032  (109 octets) ---- */

void FUN_1148_4032(int param_1,uint param_2,int param_3)

{
  undefined2 unaff_SS;
  bool bVar1;
  undefined local_102 [256];
  
  while ((0 < param_3 || ((-1 < param_3 && (param_2 != 0))))) {
    if ((param_3 < 1) && ((param_3 < 0 || (param_2 < 0x101)))) {
      FUN_1148_30c1((int)*(undefined4 *)(param_1 + 6),
                    (int)((ulong)*(undefined4 *)(param_1 + 6) >> 0x10),param_2,param_3,local_102,
                    unaff_SS);
      param_2 = 0;
      param_3 = 0;
    }
    else {
      FUN_1148_30c1((int)*(undefined4 *)(param_1 + 6),
                    (int)((ulong)*(undefined4 *)(param_1 + 6) >> 0x10),0x100,0,local_102,unaff_SS);
      bVar1 = param_2 < 0x100;
      param_2 = param_2 - 0x100;
      param_3 = param_3 - (uint)bVar1;
    }
  }
  return;
}



/* ---- FUN_1148_409f @ 1148:409f  (44 octets) ---- */

void FUN_1148_409f(int param_1)

{
  undefined2 unaff_SS;
  undefined2 local_6;
  undefined2 local_4;
  
  FUN_1148_30c1((int)*(undefined4 *)(param_1 + 6),(int)((ulong)*(undefined4 *)(param_1 + 6) >> 0x10)
                ,4,0,&local_6,unaff_SS);
  FUN_1148_4032(param_1,local_6,local_4);
  return;
}



/* ---- FUN_1148_40e3 @ 1148:40e3  (119 octets) ---- */

void __stdcall16far FUN_1148_40e3(undefined4 param_1)

{
  undefined uVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  uVar2 = (undefined2)param_1;
  uVar1 = FUN_1148_3fb9(uVar2,uVar3);
  switch(uVar1) {
  case 0:
    break;
  case 1:
    FUN_1148_3ffb(&stack0xfffe);
    break;
  case 2:
    FUN_1148_4032(&stack0xfffe,1,0);
    break;
  case 3:
    FUN_1148_4032(&stack0xfffe,2,0);
    break;
  case 4:
    FUN_1148_4032(&stack0xfffe,4,0);
    break;
  case 5:
    FUN_1148_4032(&stack0xfffe,10,0);
    break;
  case 6:
  case 7:
    FUN_1148_3f3b(uVar2,uVar3);
    break;
  case 8:
  case 9:
    break;
  case 10:
    FUN_1148_409f(&stack0xfffe);
    break;
  case 0xb:
    FUN_1148_3fd7(uVar2,uVar3);
  }
  return;
}



/* ---- FUN_1148_41fd @ 1148:41fd  (70 octets) ---- */

void __stdcall16far FUN_1148_41fd(undefined4 param_1)

{
  undefined2 *puVar1;
  undefined4 *param_4;
  
  if (*(int *)((int)param_1 + 0x30) != 0) {
    puVar1 = (undefined2 *)((int)param_1 + 0x2e);
    (*(code *)*puVar1)();
  }
  puVar1 = (undefined2 *)((int)*param_4 + 0x1c);
  (*(code *)*puVar1)();
  return;
}



/* ---- FUN_1148_4243 @ 1148:4243  (112 octets) ---- */

void __stdcall16far FUN_1148_4243(undefined4 param_1,uint param_2,int param_3,undefined *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  undefined *puVar6;
  int iVar7;
  undefined *puVar8;
  undefined2 uVar9;
  int iVar10;
  bool bVar11;
  
  while (param_2 != 0 || param_3 != 0) {
    uVar9 = (undefined2)((ulong)param_1 >> 0x10);
    iVar7 = (int)param_1;
    uVar4 = *(uint *)(iVar7 + 0xc) - *(uint *)(iVar7 + 0xe);
    if (*(uint *)(iVar7 + 0xc) < *(uint *)(iVar7 + 0xe) || uVar4 == 0) {
      FUN_1148_42b3(iVar7,uVar9);
      uVar4 = *(uint *)(iVar7 + 0xc);
    }
    if ((param_3 == 0) && (param_2 <= uVar4)) {
      uVar4 = param_2;
    }
    puVar6 = (undefined *)param_4;
    uVar5 = -(int)(undefined *)param_4;
    if ((uVar5 != 0) && (uVar5 <= uVar4)) {
      uVar4 = uVar5;
    }
    bVar11 = param_2 < uVar4;
    param_2 = param_2 - uVar4;
    param_3 = param_3 - (uint)bVar11;
    iVar10 = *(int *)(iVar7 + 0xe);
    *(int *)(iVar7 + 0xe) = *(int *)(iVar7 + 0xe) + uVar4;
    uVar3 = *(undefined4 *)(iVar7 + 8);
    puVar8 = (undefined *)((int)uVar3 + iVar10);
    iVar10 = (int)((ulong)param_4 >> 0x10);
    iVar7 = iVar10;
    if (CARRY2((uint)(undefined *)param_4,uVar4)) {
      iVar7 = iVar10 + 0x80;
    }
    param_4 = (undefined *)CONCAT22(iVar7,(undefined *)param_4 + uVar4);
    for (; uVar4 != 0; uVar4 = uVar4 - 1) {
      puVar2 = puVar8;
      puVar8 = puVar8 + 1;
      puVar1 = puVar6;
      puVar6 = puVar6 + 1;
      *puVar2 = *puVar1;
    }
  }
  return;
}



/* ---- FUN_1148_42b3 @ 1148:42b3  (47 octets) ---- */

void __stdcall16far FUN_1148_42b3(undefined4 param_1)

{
  int iVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  FUN_1148_2466((int)*(undefined4 *)(iVar1 + 4),(int)((ulong)*(undefined4 *)(iVar1 + 4) >> 0x10),
                *(undefined2 *)(iVar1 + 0xe),0,(int)*(undefined4 *)(iVar1 + 8),
                (int)((ulong)*(undefined4 *)(iVar1 + 8) >> 0x10));
  *(undefined2 *)(iVar1 + 0xe) = 0;
  return;
}



/* ---- FUN_1148_42e2 @ 1148:42e2  (39 octets) ---- */

void __stdcall16far FUN_1148_42e2(undefined4 param_1,char param_2)

{
  undefined2 uVar1;
  
  uVar1 = (undefined2)((ulong)param_1 >> 0x10);
  if (param_2 == '\0') {
    FUN_1148_4bbf((int)param_1,uVar1,8);
  }
  else {
    FUN_1148_4bbf((int)param_1,uVar1,9);
  }
  return;
}



/* ---- FUN_1148_4309 @ 1148:4309  (33 octets) ---- */

void __stdcall16far FUN_1148_4309(undefined4 param_1,undefined param_2)

{
  undefined2 unaff_SS;
  undefined *puVar1;
  undefined local_102 [256];
  
  puVar1 = local_102;
  FUN_1158_18e9(param_2);
  FUN_1148_4b9d((int)param_1,(int)((ulong)param_1 >> 0x10),puVar1,unaff_SS);
  return;
}



/* ---- FUN_1148_432a @ 1148:432a  (41 octets) ---- */

void __stdcall16far FUN_1148_432a(undefined2 param_1,undefined2 param_2,undefined4 *param_3)

{
  byte *pbVar1;
  undefined2 *puVar2;
  undefined2 uVar3;
  
  uVar3 = (undefined2)((ulong)param_3 >> 0x10);
  pbVar1 = (byte *)((undefined4 *)param_3 + 6);
  *pbVar1 = *pbVar1 | 4;
  puVar2 = (undefined2 *)((int)*param_3 + 0x28);
  (*(code *)*puVar2)();
  pbVar1 = (byte *)((undefined4 *)param_3 + 6);
  *pbVar1 = *pbVar1 & 0xfb;
  return;
}



/* ---- FUN_1148_4353 @ 1148:4353  (231 octets) ---- */

void __stdcall16far FUN_1148_4353(undefined4 param_1,undefined4 *param_2)

{
  undefined2 *puVar1;
  char cVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined2 uVar5;
  int iVar6;
  undefined2 unaff_SS;
  undefined *puVar7;
  undefined2 uVar8;
  undefined local_108 [254];
  int local_a;
  undefined4 local_8;
  int local_4;
  
  puVar7 = local_108;
  uVar8 = unaff_SS;
  FUN_1158_20ed((int)*param_2,(int)((ulong)*param_2 >> 0x10));
  uVar5 = (undefined2)((ulong)param_1 >> 0x10);
  iVar3 = (int)param_1;
  FUN_1148_4b7e(iVar3,uVar5,puVar7,uVar8);
  puVar7 = local_108;
  iVar6 = (int)((ulong)param_2 >> 0x10);
  puVar4 = (undefined4 *)param_2;
  FUN_1148_512a(puVar4,iVar6);
  FUN_1148_4b7e(iVar3,uVar5,puVar7,unaff_SS);
  FUN_1148_4599(iVar3,uVar5,puVar4,iVar6);
  FUN_1148_4580(iVar3,uVar5);
  puVar1 = (undefined2 *)((int)*param_2 + 0x24);
  (*(code *)*puVar1)(0x1148,puVar4,iVar6,iVar3,uVar5);
  if ((iVar6 == *(int *)(iVar3 + 0x14)) && (puVar4 == (undefined4 *)*(int *)(iVar3 + 0x12))) {
    local_a = FUN_1148_527d((int)*(undefined4 *)(iVar3 + 0x12),
                            (int)((ulong)*(undefined4 *)(iVar3 + 0x12) >> 0x10));
    local_a = local_a + -1;
    if (-1 < local_a) {
      local_4 = 0;
      while( true ) {
        local_8 = (undefined4 *)
                  FUN_1148_5246((int)*(undefined4 *)(iVar3 + 0x12),
                                (int)((ulong)*(undefined4 *)(iVar3 + 0x12) >> 0x10),local_4);
        puVar1 = (undefined2 *)((int)*local_8 + 0xc);
        cVar2 = (*(code *)*puVar1)(0x1148,local_8);
        if (cVar2 == '\0') {
          FUN_1148_432a(iVar3,uVar5,(undefined4 *)local_8,local_8._2_2_);
        }
        if (local_4 == local_a) break;
        local_4 = local_4 + 1;
      }
    }
  }
  FUN_1148_4580(iVar3,uVar5);
  return;
}



/* ---- FUN_1148_443a @ 1148:443a  (38 octets) ---- */

void __stdcall16far FUN_1148_443a(undefined4 param_1)

{
  undefined2 uVar1;
  undefined2 unaff_SS;
  
  uVar1 = (undefined2)((ulong)param_1 >> 0x10);
  FUN_1148_4bbf((int)param_1,uVar1,5);
  FUN_1148_4243((int)param_1,uVar1,10,0,&stack0x0008,unaff_SS);
  return;
}



/* ---- FUN_1148_446b @ 1148:446b  (96 octets) ---- */

void __stdcall16far FUN_1148_446b(undefined4 param_1,undefined4 param_2)

{
  undefined2 uVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined2 unaff_CS;
  undefined in_ZF;
  
  uVar3 = (undefined2)((ulong)param_2 >> 0x10);
  uVar1 = (undefined2)param_2;
  FUN_1158_18be(0x4460,unaff_CS,uVar1,uVar3);
  uVar2 = (undefined2)param_1;
  uVar4 = (undefined2)((ulong)param_1 >> 0x10);
  if ((bool)in_ZF) {
    FUN_1148_4bbf(uVar2,uVar4,8);
  }
  else {
    FUN_1158_18be(0x4466,0x1158,uVar1,uVar3);
    if ((bool)in_ZF) {
      FUN_1148_4bbf(uVar2,uVar4,9);
    }
    else {
      FUN_1148_4bbf(uVar2,uVar4,7);
      FUN_1148_4b7e(uVar2,uVar4,uVar1,uVar3);
    }
  }
  return;
}



/* ---- FUN_1148_44cb @ 1148:44cb  (162 octets) ---- */

void __stdcall16far FUN_1148_44cb(undefined4 param_1,uint param_2,uint param_3)

{
  undefined2 uVar1;
  undefined2 uVar2;
  undefined2 unaff_SS;
  
  uVar1 = (undefined2)param_1;
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  if (((param_3 < 0x8000) || ((-2 < (int)param_3 && (0xff7f < param_2)))) &&
     (((int)param_3 < 0 || (((int)param_3 < 1 && (param_2 < 0x80)))))) {
    FUN_1148_4bbf(uVar1,uVar2,2);
    FUN_1148_4243(uVar1,uVar2,1,0,&param_2,unaff_SS);
  }
  else if (((param_3 < 0x8000) || ((-2 < (int)param_3 && (0x7fff < param_2)))) &&
          (((int)param_3 < 0 || (((int)param_3 < 1 && (param_2 < 0x8000)))))) {
    FUN_1148_4bbf(uVar1,uVar2,3);
    FUN_1148_4243(uVar1,uVar2,2,0,&param_2,unaff_SS);
  }
  else {
    FUN_1148_4bbf(uVar1,uVar2,4);
    FUN_1148_4243(uVar1,uVar2,4,0,&param_2,unaff_SS);
  }
  return;
}



/* ---- FUN_1148_456d @ 1148:456d  (19 octets) ---- */

void __stdcall16far FUN_1148_456d(undefined4 param_1)

{
  FUN_1148_4bbf((int)param_1,(int)((ulong)param_1 >> 0x10),1);
  return;
}



/* ---- FUN_1148_4580 @ 1148:4580  (19 octets) ---- */

void __stdcall16far FUN_1148_4580(undefined4 param_1)

{
  FUN_1148_4bbf((int)param_1,(int)((ulong)param_1 >> 0x10),0);
  return;
}



/* ---- FUN_1148_4599 @ 1148:4599  (252 octets) ---- */

void __stdcall16far FUN_1148_4599(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 *puVar4;
  char cVar5;
  undefined2 uVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  undefined4 *puStack_18;
  int local_4;
  
  puStack_18 = (undefined4 *)0x45aa;
  FUN_1158_2126();
  puStack_18 = (undefined4 *)0x45b1;
  uVar8 = FUN_10a0_2c7e();
  iVar1 = *(int *)((int)uVar8 + 8);
  if (iVar1 < 1) {
    puVar4 = (undefined2 *)((int)*param_2 + 4);
    puStack_18 = (undefined4 *)param_2;
    (*(code *)*puVar4)((char *)s_iCurrDigits_1160_109b + 5);
    return;
  }
  puVar9 = (undefined4 *)FUN_1158_0182();
  uVar6 = (undefined2)((ulong)puVar9 >> 0x10);
  puStack_18 = (undefined4 *)DAT_1160_1858;
  DAT_1160_1858 = &puStack_18;
  uVar8 = FUN_1158_2126((int)*param_2,(int)((ulong)*param_2 >> 0x10));
  FUN_10a0_2d81(puVar9,uVar8);
  if (-1 < iVar1 + -1) {
    local_4 = 0;
    while( true ) {
      puVar7 = (undefined4 *)puVar9 + local_4;
      uVar2 = *(undefined2 *)puVar7;
      uVar3 = *(undefined2 *)((int)puVar7 + 2);
      cVar5 = FUN_10a0_2de7(uVar2,uVar3,(undefined4 *)param_2,param_2._2_2_);
      if (cVar5 != '\0') {
        FUN_1148_4af7((undefined2)param_1,param_1._2_2_,uVar2,uVar3,(undefined4 *)param_2,
                      param_2._2_2_);
      }
      if (local_4 == iVar1 + -1) break;
      local_4 = local_4 + 1;
    }
  }
  DAT_1160_1858 = (undefined4 **)puStack_18;
  puStack_18 = (undefined4 *)puVar9;
  FUN_1158_019c(iVar1 << 2);
  return;
}



/* ---- FUN_1148_4695 @ 1148:4695  (34 octets) ---- */

void FUN_1148_4695(int param_1)

{
  undefined2 unaff_SS;
  
  FUN_1148_4b4e((int)*(undefined4 *)(param_1 + 6),(int)((ulong)*(undefined4 *)(param_1 + 6) >> 0x10)
                ,(int)*(undefined4 *)(param_1 + 10) + 0x18,
                (int)((ulong)*(undefined4 *)(param_1 + 10) >> 0x10));
  return;
}



/* ---- FUN_1148_46b8 @ 1148:46b8  (145 octets) ---- */

void FUN_1148_46b8(int param_1,uint param_2)

{
  undefined2 uVar1;
  undefined2 uVar2;
  undefined2 unaff_SS;
  undefined4 uVar3;
  int local_4;
  
  uVar3 = FUN_10a0_2c7e(*(undefined2 *)(param_1 + -4),*(undefined2 *)(param_1 + -2));
  uVar2 = (undefined2)((ulong)uVar3 >> 0x10);
  uVar1 = *(undefined2 *)((int)uVar3 + 1);
  uVar2 = *(undefined2 *)((int)uVar3 + 3);
  FUN_1148_4bbf((int)*(undefined4 *)(param_1 + 6),(int)((ulong)*(undefined4 *)(param_1 + 6) >> 0x10)
                ,0xb);
  local_4 = 0;
  while( true ) {
    if (((byte)local_4 < 0x10) &&
       ((param_2 & (1 << ((byte)local_4 & 0xf) | 1U >> 0x10 - ((byte)local_4 & 0xf))) != 0)) {
      uVar3 = FUN_10a0_2c93(local_4,uVar1,uVar2);
      FUN_1148_4b7e((int)*(undefined4 *)(param_1 + 6),
                    (int)((ulong)*(undefined4 *)(param_1 + 6) >> 0x10),uVar3);
    }
    if (local_4 == 0xf) break;
    local_4 = local_4 + 1;
  }
  FUN_1148_4b7e((int)*(undefined4 *)(param_1 + 6),(int)((ulong)*(undefined4 *)(param_1 + 6) >> 0x10)
                ,0x46b7,0x1148);
  return;
}



/* ---- FUN_1148_4749 @ 1148:4749  (152 octets) ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1148_4749(int param_1,undefined2 param_2,undefined2 param_3,int param_4,int param_5)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined2 uVar4;
  undefined2 unaff_SS;
  undefined4 uVar5;
  undefined local_46 [66];
  int local_4;
  
  iVar2 = *(int *)((int)_DAT_1160_170a + 8) + -1;
  if (-1 < iVar2) {
    local_4 = 0;
    while( true ) {
      uVar5 = FUN_1148_0dd0((int)_DAT_1160_170a,(int)((ulong)_DAT_1160_170a >> 0x10),local_4);
      uVar4 = (undefined2)((ulong)uVar5 >> 0x10);
      iVar3 = (int)uVar5;
      if ((param_5 == *(int *)(iVar3 + 6)) && (param_4 == *(int *)(iVar3 + 4))) break;
      if (local_4 == iVar2) goto LAB_1148_47cb;
      local_4 = local_4 + 1;
    }
    cVar1 = (*(code *)*(undefined2 *)(iVar3 + 0xc))(0x1148,0x40,local_46);
    if (cVar1 != '\0') {
      FUN_1148_446b((int)*(undefined4 *)(param_1 + 6),
                    (int)((ulong)*(undefined4 *)(param_1 + 6) >> 0x10),local_46,unaff_SS);
      return;
    }
  }
LAB_1148_47cb:
  FUN_1148_44cb((int)*(undefined4 *)(param_1 + 6),(int)((ulong)*(undefined4 *)(param_1 + 6) >> 0x10)
                ,param_2,param_3);
  return;
}



/* ---- FUN_1148_47e3 @ 1148:47e3  (199 octets) ---- */

void FUN_1148_47e3(int param_1)

{
  char cVar1;
  undefined2 *puVar2;
  int iVar3;
  undefined extraout_AH;
  int iVar4;
  undefined2 uVar5;
  undefined2 unaff_SS;
  undefined4 uVar6;
  undefined local_6;
  
  uVar6 = FUN_10a0_2e32(*(undefined2 *)(param_1 + 10),*(undefined2 *)(param_1 + 0xc),
                        *(undefined2 *)(param_1 + 0xe),*(undefined2 *)(param_1 + 0x10));
  iVar3 = (int)uVar6;
  uVar5 = (undefined2)((ulong)*(undefined4 *)(param_1 + 10) >> 0x10);
  iVar4 = (int)*(undefined4 *)(param_1 + 10);
  if (((int)((ulong)uVar6 >> 0x10) != *(int *)(iVar4 + 0x14)) || (iVar3 != *(int *)(iVar4 + 0x12)))
  {
    FUN_1148_4695(param_1);
    cVar1 = *(char *)*(undefined4 *)(param_1 + -4);
    if (cVar1 == '\x01') {
      puVar2 = (undefined2 *)*(undefined4 *)(param_1 + 10);
      FUN_1148_4749(param_1,uVar6,*puVar2,((undefined2 *)puVar2)[1]);
    }
    else if (cVar1 == '\x02') {
      local_6 = (undefined)uVar6;
      FUN_1148_4309((int)*(undefined4 *)(param_1 + 6),
                    (int)((ulong)*(undefined4 *)(param_1 + 6) >> 0x10),CONCAT11(extraout_AH,local_6)
                   );
    }
    else if (cVar1 == '\x06') {
      FUN_1148_46b8(param_1,iVar3);
    }
    else if (cVar1 == '\x03') {
      uVar6 = FUN_10a0_2c93(iVar3,*(undefined2 *)(param_1 + -4),*(undefined2 *)(param_1 + -2));
      FUN_1148_446b((int)*(undefined4 *)(param_1 + 6),
                    (int)((ulong)*(undefined4 *)(param_1 + 6) >> 0x10),uVar6);
    }
  }
  return;
}



/* ---- FUN_1148_48ae @ 1148:48ae  (96 octets) ---- */

void FUN_1148_48ae(int param_1)

{
  undefined2 unaff_SS;
  longdouble in_ST0;
  undefined2 local_c;
  undefined2 uStack_a;
  undefined2 uStack_8;
  undefined2 uStack_6;
  undefined2 uStack_4;
  
  FUN_10a0_300b(*(undefined2 *)(param_1 + 10),*(undefined2 *)(param_1 + 0xc),
                *(undefined2 *)(param_1 + 0xe),*(undefined2 *)(param_1 + 0x10));
  if (in_ST0 != (longdouble)0.0) {
    FUN_1148_4695(param_1);
    uStack_4 = (undefined2)((unkuint10)in_ST0 >> 0x40);
    uStack_6 = (undefined2)((unkuint10)in_ST0 >> 0x30);
    uStack_8 = (undefined2)((unkuint10)in_ST0 >> 0x20);
    uStack_a = (undefined2)((unkuint10)in_ST0 >> 0x10);
    local_c = SUB102(in_ST0,0);
    FUN_1148_443a((int)*(undefined4 *)(param_1 + 6),
                  (int)((ulong)*(undefined4 *)(param_1 + 6) >> 0x10),local_c,uStack_a,uStack_8,
                  uStack_6,uStack_4);
  }
  return;
}



/* ---- FUN_1148_490e @ 1148:490e  (86 octets) ---- */

void FUN_1148_490e(int param_1)

{
  undefined2 unaff_SS;
  undefined *puVar1;
  undefined2 uVar2;
  undefined local_202 [256];
  char local_102 [256];
  
  puVar1 = local_202;
  uVar2 = unaff_SS;
  FUN_10a0_2f42(*(undefined2 *)(param_1 + 10),*(undefined2 *)(param_1 + 0xc),
                *(undefined2 *)(param_1 + 0xe),*(undefined2 *)(param_1 + 0x10));
  FUN_1158_17e7(0xff,local_102,unaff_SS,puVar1,uVar2);
  if (local_102[0] != '\0') {
    FUN_1148_4695(param_1);
    FUN_1148_4b9d((int)*(undefined4 *)(param_1 + 6),
                  (int)((ulong)*(undefined4 *)(param_1 + 6) >> 0x10),local_102,unaff_SS);
  }
  return;
}



/* ---- FUN_1148_4966 @ 1148:4966  (249 octets) ---- */

void FUN_1148_4966(int param_1)

{
  char cVar1;
  undefined2 unaff_SS;
  undefined *puVar2;
  undefined2 uVar3;
  undefined local_108 [256];
  undefined4 local_8;
  uint local_4;
  
  local_8 = FUN_10a0_2e32(*(undefined2 *)(param_1 + 10),*(undefined2 *)(param_1 + 0xc),
                          *(undefined2 *)(param_1 + 0xe),*(undefined2 *)(param_1 + 0x10));
  cVar1 = FUN_1158_2255(0x2d1,0x1148,local_8);
  if (cVar1 != '\0') {
    cVar1 = FUN_1158_2255(0x5da,0x1148,local_8);
    if (cVar1 == '\0') {
      local_4 = (uint)*(byte *)((int)*(undefined4 *)(param_1 + 6) + 0x16);
      puVar2 = local_108;
      uVar3 = unaff_SS;
      FUN_1158_17cd((int)*(undefined4 *)(param_1 + 6) + 0x16,
                    (int)((ulong)*(undefined4 *)(param_1 + 6) >> 0x10));
      FUN_1158_184c((int)*(undefined4 *)(param_1 + 10) + 0x18,
                    (int)((ulong)*(undefined4 *)(param_1 + 10) >> 0x10));
      FUN_1158_184c(0x4964,0x1158);
      FUN_1158_17e7(0xff,(int)*(undefined4 *)(param_1 + 6) + 0x16,
                    (int)((ulong)*(undefined4 *)(param_1 + 6) >> 0x10),puVar2,uVar3);
      FUN_1148_4599((int)*(undefined4 *)(param_1 + 6),
                    (int)((ulong)*(undefined4 *)(param_1 + 6) >> 0x10),local_8);
      *(undefined *)((int)*(undefined4 *)(param_1 + 6) + 0x16) = (undefined)local_4;
    }
    else {
      FUN_1148_4695(param_1);
      puVar2 = local_108;
      uVar3 = unaff_SS;
      FUN_1148_512a(local_8);
      FUN_1148_446b((int)*(undefined4 *)(param_1 + 6),
                    (int)((ulong)*(undefined4 *)(param_1 + 6) >> 0x10),puVar2,uVar3);
    }
  }
  return;
}



/* ---- FUN_1148_4a5f @ 1148:4a5f  (136 octets) ---- */

void FUN_1148_4a5f(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 unaff_SS;
  undefined *puVar4;
  undefined local_10a [248];
  undefined local_12 [8];
  int local_a;
  int local_8;
  int local_6;
  int local_4;
  
  puVar4 = local_12;
  uVar3 = unaff_SS;
  FUN_10a0_311b(*(undefined2 *)(param_1 + 10),*(undefined2 *)(param_1 + 0xc),
                *(undefined2 *)(param_1 + 0xe),*(undefined2 *)(param_1 + 0x10));
  FUN_1158_161b(8,&local_a,unaff_SS,puVar4,uVar3);
  if (local_a != 0 || local_8 != 0) {
    uVar3 = (undefined2)((ulong)*(undefined4 *)(param_1 + 6) >> 0x10);
    iVar2 = (int)*(undefined4 *)(param_1 + 6);
    if ((local_4 == *(int *)(iVar2 + 0x14)) && (local_6 == *(int *)(iVar2 + 0x12))) {
      FUN_1148_4695(param_1);
      puVar4 = local_10a;
      uVar1 = *(undefined4 *)*(undefined4 *)((int)*(undefined4 *)(param_1 + 6) + 0x12);
      uVar3 = unaff_SS;
      FUN_1158_218a((int)uVar1,(int)((ulong)uVar1 >> 0x10),local_a,local_8);
      FUN_1148_446b((int)*(undefined4 *)(param_1 + 6),
                    (int)((ulong)*(undefined4 *)(param_1 + 6) >> 0x10),puVar4,uVar3);
    }
  }
  return;
}



/* ---- FUN_1148_4af7 @ 1148:4af7  (87 octets) ---- */

void __stdcall16far FUN_1148_4af7(undefined2 param_1_00,undefined2 param_2,undefined2 *param_1)

{
  undefined2 *puVar1;
  undefined2 uVar2;
  undefined4 local_6;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  puVar1 = (undefined2 *)param_1;
  if (puVar1[4] != 0 || puVar1[5] != 0) {
    local_6 = (undefined *)CONCAT22(puVar1[1],(undefined *)*param_1);
    switch(*local_6) {
    case 1:
    case 2:
    case 3:
    case 6:
      FUN_1148_47e3(&stack0xfffe);
      break;
    case 4:
      FUN_1148_48ae(&stack0xfffe);
      break;
    case 5:
      FUN_1148_490e(&stack0xfffe);
      break;
    case 7:
      FUN_1148_4966(&stack0xfffe);
      break;
    case 8:
      FUN_1148_4a5f(&stack0xfffe);
    }
  }
  return;
}



/* ---- FUN_1148_4b4e @ 1148:4b4e  (48 octets) ---- */

void __stdcall16far FUN_1148_4b4e(undefined4 param_1,undefined4 param_2)

{
  undefined2 uVar1;
  undefined2 unaff_SS;
  undefined *puVar2;
  undefined local_102 [256];
  
  puVar2 = local_102;
  uVar1 = (undefined2)((ulong)param_1 >> 0x10);
  FUN_1158_17cd((int)param_1 + 0x16,uVar1);
  FUN_1158_184c((int)param_2,(int)((ulong)param_2 >> 0x10));
  FUN_1148_4b7e((int)param_1,uVar1,puVar2,unaff_SS);
  return;
}



/* ---- FUN_1148_4b7e @ 1148:4b7e  (31 octets) ---- */

void __stdcall16far FUN_1148_4b7e(undefined4 param_1,byte *param_2)

{
  FUN_1148_4243((int)param_1,(int)((ulong)param_1 >> 0x10),*param_2 + 1,0,(byte *)param_2,
                (int)((ulong)param_2 >> 0x10));
  return;
}



/* ---- FUN_1148_4b9d @ 1148:4b9d  (34 octets) ---- */

void __stdcall16far FUN_1148_4b9d(undefined4 param_1,undefined4 param_2)

{
  undefined2 uVar1;
  
  uVar1 = (undefined2)((ulong)param_1 >> 0x10);
  FUN_1148_4bbf((int)param_1,uVar1,6);
  FUN_1148_4b7e((int)param_1,uVar1,(int)param_2,(int)((ulong)param_2 >> 0x10));
  return;
}



/* ---- FUN_1148_4bbf @ 1148:4bbf  (26 octets) ---- */

void __stdcall16far FUN_1148_4bbf(undefined4 param_1)

{
  undefined2 unaff_SS;
  
  FUN_1148_4243((int)param_1,(int)((ulong)param_1 >> 0x10),1,0,&stack0x0008,unaff_SS);
  return;
}



/* ---- FUN_1148_4bd9 @ 1148:4bd9  (82 octets) ---- */

undefined4 __stdcall16far FUN_1148_4bd9(undefined4 param_1,char param_2,undefined4 param_3)

{
  undefined2 uVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 uStack_a;
  
  if (param_2 != '\0') {
    FUN_1158_1fe2();
  }
  uVar1 = DAT_1160_1718;
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  iVar2 = (int)param_1;
  *(undefined2 *)(iVar2 + 8) = DAT_1160_1716;
  *(undefined2 *)(iVar2 + 10) = uVar1;
  if ((int)param_3 != 0 || param_3._2_2_ != 0) {
    FUN_1148_4d8d((int)param_3,param_3._2_2_,iVar2,uVar3);
  }
  if (param_2 != '\0') {
    DAT_1160_1858 = uStack_a;
  }
  return param_1;
}



/* ---- FUN_1148_4c2b @ 1148:4c2b  (84 octets) ---- */

void __stdcall16far FUN_1148_4c2b(undefined4 param_1,char param_2)

{
  int iVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  FUN_1148_4ea5(iVar1,uVar2);
  FUN_1148_4e5e(iVar1,uVar2);
  if (*(int *)(iVar1 + 4) != 0 || *(int *)(iVar1 + 6) != 0) {
    FUN_1148_4dfb((int)*(undefined4 *)(iVar1 + 4),(int)((ulong)*(undefined4 *)(iVar1 + 4) >> 0x10),
                  iVar1,uVar2);
  }
  FUN_1150_0624(*(undefined2 *)(iVar1 + 8),*(undefined2 *)(iVar1 + 10));
  if (param_2 != '\0') {
    FUN_1158_200f();
  }
  return;
}



/* ---- FUN_1148_4c7f @ 1148:4c7f  (24 octets) ---- */

void __stdcall16far FUN_1148_4c7f(undefined4 param_1,undefined4 param_2)

{
  undefined2 uVar1;
  
  uVar1 = FUN_1148_3609((int)param_2,(int)((ulong)param_2 >> 0x10));
  *(undefined2 *)((int)param_1 + 0x14) = uVar1;
  return;
}



/* ---- FUN_1148_4c97 @ 1148:4c97  (24 octets) ---- */

void __stdcall16far FUN_1148_4c97(undefined4 param_1,undefined4 param_2)

{
  undefined2 uVar1;
  
  uVar1 = FUN_1148_3609((int)param_2,(int)((ulong)param_2 >> 0x10));
  *(undefined2 *)((int)param_1 + 0x16) = uVar1;
  return;
}



/* ---- FUN_1148_4caf @ 1148:4caf  (28 octets) ---- */

void __stdcall16far FUN_1148_4caf(undefined4 param_1,undefined4 param_2)

{
  FUN_1148_44cb((int)param_2,(int)((ulong)param_2 >> 0x10),*(undefined2 *)((int)param_1 + 0x14),0);
  return;
}



/* ---- FUN_1148_4ccb @ 1148:4ccb  (28 octets) ---- */

void __stdcall16far FUN_1148_4ccb(undefined4 param_1,undefined4 param_2)

{
  FUN_1148_44cb((int)param_2,(int)((ulong)param_2 >> 0x10),*(undefined2 *)((int)param_1 + 0x16),0);
  return;
}



/* ---- FUN_1148_4ce7 @ 1148:4ce7  (84 octets) ---- */

void __stdcall16far FUN_1148_4ce7(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  if (*(int *)(iVar1 + 0x10) == 0 && *(int *)(iVar1 + 0x12) == 0) {
    uVar3 = FUN_1158_1f50(0x2a3,0x1148,1);
    *(undefined2 *)(iVar1 + 0x10) = (int)uVar3;
    *(undefined2 *)(iVar1 + 0x12) = (int)((ulong)uVar3 >> 0x10);
  }
  FUN_1148_0c2b((int)*(undefined4 *)(iVar1 + 0x10),
                (int)((ulong)*(undefined4 *)(iVar1 + 0x10) >> 0x10),(int)param_2,param_2._2_2_);
  *(int *)((int)param_2 + 4) = iVar1;
  *(undefined2 *)((int)param_2 + 6) = uVar2;
  return;
}



/* ---- FUN_1148_4d3b @ 1148:4d3b  (81 octets) ---- */

void __stdcall16far FUN_1148_4d3b(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  
  uVar3 = (undefined2)((ulong)param_2 >> 0x10);
  iVar1 = (int)param_2;
  *(undefined2 *)(iVar1 + 4) = 0;
  *(undefined2 *)(iVar1 + 6) = 0;
  uVar4 = (undefined2)((ulong)param_1 >> 0x10);
  iVar2 = (int)param_1;
  FUN_1148_0fa7((int)*(undefined4 *)(iVar2 + 0x10),
                (int)((ulong)*(undefined4 *)(iVar2 + 0x10) >> 0x10),iVar1,uVar3);
  if (*(int *)((int)*(undefined4 *)(iVar2 + 0x10) + 8) == 0) {
    FUN_1158_1f7f((int)*(undefined4 *)(iVar2 + 0x10),
                  (int)((ulong)*(undefined4 *)(iVar2 + 0x10) >> 0x10));
    *(undefined2 *)(iVar2 + 0x10) = 0;
    *(undefined2 *)(iVar2 + 0x12) = 0;
  }
  return;
}



/* ---- FUN_1148_4d8d @ 1148:4d8d  (109 octets) ---- */

void __stdcall16far FUN_1148_4d8d(undefined4 *param_1,undefined4 param_2)

{
  undefined2 *puVar1;
  undefined2 uVar2;
  undefined4 *puVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined4 *puVar6;
  undefined2 uVar7;
  undefined2 uVar8;
  
  uVar8 = 0x4d8c;
  uVar4 = (undefined2)((ulong)*(undefined4 *)((int)param_2 + 8) >> 0x10);
  uVar2 = (undefined2)*(undefined4 *)((int)param_2 + 8);
  uVar5 = (undefined2)((ulong)param_1 >> 0x10);
  puVar3 = (undefined4 *)param_1;
  puVar1 = (undefined2 *)((int)*param_1 + 0x20);
  puVar6 = puVar3;
  uVar7 = uVar5;
  (*(code *)*puVar1)();
  FUN_1148_4ce7(puVar3,uVar5,(int)param_2,param_2._2_2_);
  FUN_1148_5308((int)param_2,param_2._2_2_,1);
  if ((*(byte *)(puVar3 + 6) & 0x10) != 0) {
    FUN_1148_52a7((int)param_2,param_2._2_2_,1);
  }
  puVar1 = (undefined2 *)((int)*param_1 + 0x14);
  (*(code *)*puVar1)(0x1148,puVar3,uVar5,0,(int)param_2,param_2._2_2_,puVar6,uVar7,uVar2,uVar4,uVar8
                    );
  return;
}



/* ---- FUN_1148_4dfb @ 1148:4dfb  (99 octets) ---- */

void __stdcall16far FUN_1148_4dfb(undefined4 *param_1,undefined4 param_2)

{
  undefined2 *puVar1;
  undefined4 *puVar2;
  undefined2 uVar3;
  undefined4 *puVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  int iVar7;
  undefined2 uVar8;
  
  uVar6 = 1;
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  puVar2 = (undefined4 *)param_1;
  puVar1 = (undefined2 *)((int)*param_1 + 0x14);
  puVar4 = puVar2;
  uVar5 = uVar3;
  iVar7 = (int)param_2;
  uVar8 = param_2._2_2_;
  (*(code *)*puVar1)();
  FUN_1148_5308((int)param_2,param_2._2_2_,0);
  FUN_1148_4d3b(puVar2,uVar3,(int)param_2,param_2._2_2_);
  FUN_1148_52a7((int)param_2,param_2._2_2_,0);
  puVar1 = (undefined2 *)((int)*param_1 + 0x20);
  (*(code *)*puVar1)(0x1148,puVar2,uVar3,0x4dfa,0x1148,(int)*(undefined4 *)((int)param_2 + 8),
                     (int)((ulong)*(undefined4 *)((int)param_2 + 8) >> 0x10),(int)param_2,
                     param_2._2_2_,puVar4,uVar5,uVar6,iVar7,uVar8);
  return;
}



/* ---- FUN_1148_4e5e @ 1148:4e5e  (71 octets) ---- */

void __stdcall16far FUN_1148_4e5e(undefined4 param_1)

{
  undefined2 *puVar1;
  undefined extraout_AH;
  int iVar2;
  undefined2 uVar3;
  undefined4 *puVar4;
  
  while( true ) {
    uVar3 = (undefined2)((ulong)param_1 >> 0x10);
    iVar2 = (int)param_1;
    if (*(int *)(iVar2 + 0x10) == 0 && *(int *)(iVar2 + 0x12) == 0) break;
    puVar4 = (undefined4 *)
             FUN_1148_0f43((int)*(undefined4 *)(iVar2 + 0x10),
                           (int)((ulong)*(undefined4 *)(iVar2 + 0x10) >> 0x10));
    FUN_1148_4d3b(iVar2,uVar3,puVar4);
    puVar1 = (undefined2 *)((int)*puVar4 + -4);
    (*(code *)*puVar1)(0x1148,puVar4,CONCAT11(extraout_AH,1));
  }
  return;
}



/* ---- FUN_1148_4ea5 @ 1148:4ea5  (96 octets) ---- */

void __stdcall16far FUN_1148_4ea5(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  int local_4;
  
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  iVar2 = (int)param_1;
  if ((((*(byte *)(iVar2 + 0x18) & 8) == 0) &&
      (*(byte *)(iVar2 + 0x18) = *(byte *)(iVar2 + 0x18) | 8,
      *(int *)(iVar2 + 0x10) != 0 || *(int *)(iVar2 + 0x12) != 0)) &&
     (iVar1 = *(int *)((int)*(undefined4 *)(iVar2 + 0x10) + 8) + -1, -1 < iVar1)) {
    local_4 = 0;
    while( true ) {
      uVar4 = FUN_1148_0dd0((int)*(undefined4 *)(iVar2 + 0x10),
                            (int)((ulong)*(undefined4 *)(iVar2 + 0x10) >> 0x10),local_4);
      FUN_1148_4ea5(uVar4);
      if (local_4 == iVar1) break;
      local_4 = local_4 + 1;
    }
  }
  return;
}



/* ---- FUN_1148_4f05 @ 1148:4f05  (96 octets) ---- */

void __stdcall16far
FUN_1148_4f05(undefined4 param_1,undefined param_2,undefined2 param_3,undefined2 param_4)

{
  undefined2 *puVar1;
  int iVar2;
  int iVar3;
  undefined2 uVar4;
  int iVar5;
  undefined2 uVar6;
  undefined4 *puVar7;
  undefined2 uVar8;
  undefined2 uVar9;
  int local_4;
  
  uVar6 = (undefined2)((ulong)param_1 >> 0x10);
  iVar5 = (int)param_1;
  if (*(int *)(iVar5 + 0x10) != 0 || *(int *)(iVar5 + 0x12) != 0) {
    iVar2 = *(int *)((int)*(undefined4 *)(iVar5 + 0x10) + 8) + -1;
    if (-1 < iVar2) {
      local_4 = 0;
      iVar3 = 0;
      while( true ) {
        uVar4 = CONCAT11((char)((uint)iVar3 >> 8),param_2);
        uVar8 = param_3;
        uVar9 = param_4;
        puVar7 = (undefined4 *)
                 FUN_1148_0dd0((int)*(undefined4 *)(iVar5 + 0x10),
                               (int)((ulong)*(undefined4 *)(iVar5 + 0x10) >> 0x10),local_4);
        puVar1 = (undefined2 *)((int)*puVar7 + 0x14);
        (*(code *)*puVar1)(0x1148,puVar7,uVar4,uVar8,uVar9);
        if (local_4 == iVar2) break;
        iVar3 = local_4;
        local_4 = local_4 + 1;
      }
    }
  }
  return;
}



/* ---- FUN_1148_4fe5 @ 1148:4fe5  (15 octets) ---- */

undefined __stdcall16far FUN_1148_4fe5(void)

{
  return 0;
}



/* ---- FUN_1148_4ff4 @ 1148:4ff4  (15 octets) ---- */

void __stdcall16far FUN_1148_4ff4(undefined4 param_1)

{
  byte *pbVar1;
  
  pbVar1 = (byte *)((int)param_1 + 0x18);
  *pbVar1 = *pbVar1 & 0xfe;
  return;
}



/* ---- FUN_1148_5003 @ 1148:5003  (23 octets) ---- */

void __stdcall16far FUN_1148_5003(undefined2 param_1,undefined2 param_2,undefined4 param_3)

{
  FUN_1148_3435((int)param_3,(int)((ulong)param_3 >> 0x10),param_1,param_2);
  return;
}



/* ---- FUN_1148_501a @ 1148:501a  (7 octets) ---- */

void __stdcall16far FUN_1148_501a(void)

{
  return;
}



/* ---- FUN_1148_5021 @ 1148:5021  (23 octets) ---- */

void __stdcall16far FUN_1148_5021(undefined2 param_1,undefined2 param_2,undefined4 param_3)

{
  FUN_1148_4353((int)param_3,(int)((ulong)param_3 >> 0x10),param_1,param_2);
  return;
}



/* ---- FUN_1148_5038 @ 1148:5038  (115 octets) ---- */

void __stdcall16far
FUN_1148_5038(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5)

{
  int iVar1;
  undefined extraout_AH;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 unaff_SS;
  long lVar4;
  undefined4 uVar5;
  undefined *puVar6;
  undefined local_10a [256];
  undefined2 local_a;
  undefined2 local_8;
  undefined local_6;
  
  if (param_4 != 0 || param_5 != 0) {
    uVar3 = (undefined2)((ulong)param_2 >> 0x10);
    uVar2 = (undefined2)param_2;
    iVar1 = FUN_1150_0730(uVar2,uVar3,(int)param_3,(int)((ulong)param_3 >> 0x10));
    if (iVar1 != 0) {
      lVar4 = FUN_1148_50ab((int)param_1,(int)((ulong)param_1 >> 0x10),uVar2,uVar3);
      if (lVar4 != 0) {
        puVar6 = local_10a;
        local_6 = 4;
        local_a = uVar2;
        local_8 = uVar3;
        FUN_1150_0950(0,&local_a,unaff_SS,0xf00f);
        uVar5 = FUN_1150_28e6(0x273,0x1148,CONCAT11(extraout_AH,1),puVar6,unaff_SS);
        FUN_1158_1399(0x1150,uVar5);
      }
    }
  }
  return;
}



/* ---- FUN_1148_50ab @ 1148:50ab  (127 octets) ---- */

undefined4 __stdcall16far FUN_1148_50ab(undefined4 param_1,char *param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined2 uVar5;
  undefined4 uVar6;
  int local_8;
  
  if (*param_2 != '\0') {
    uVar5 = (undefined2)((ulong)param_1 >> 0x10);
    iVar4 = (int)param_1;
    if ((*(int *)(iVar4 + 0x10) != 0 || *(int *)(iVar4 + 0x12) != 0) &&
       (iVar2 = *(int *)((int)*(undefined4 *)(iVar4 + 0x10) + 8) + -1, -1 < iVar2)) {
      local_8 = 0;
      while( true ) {
        uVar6 = FUN_1148_0dd0((int)*(undefined4 *)(iVar4 + 0x10),
                              (int)((ulong)*(undefined4 *)(iVar4 + 0x10) >> 0x10),local_8);
        uVar1 = *(undefined4 *)((int)uVar6 + 8);
        iVar3 = FUN_1150_0730((char *)param_2,(int)((ulong)param_2 >> 0x10),(int)uVar1,
                              (int)((ulong)uVar1 >> 0x10));
        if (iVar3 == 0) {
          return uVar6;
        }
        if (local_8 == iVar2) break;
        local_8 = local_8 + 1;
      }
    }
  }
  return 0;
}



/* ---- FUN_1148_512a @ 1148:512a  (28 octets) ---- */

void __stdcall16far FUN_1148_512a(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)((int)param_1 + 8);
  FUN_1158_17e7(0x3f,(int)param_2,(int)((ulong)param_2 >> 0x10),(int)uVar1,
                (int)((ulong)uVar1 >> 0x10));
  return;
}



/* ---- FUN_1148_5146 @ 1148:5146  (230 octets) ---- */

void __stdcall16far FUN_1148_5146(undefined4 *param_1,char *param_2)

{
  undefined2 *puVar1;
  undefined4 *puVar2;
  char cVar3;
  undefined extraout_AH;
  undefined4 *puVar4;
  char *pcVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  undefined2 uVar8;
  undefined2 unaff_SS;
  undefined in_ZF;
  undefined4 uVar9;
  undefined *puVar10;
  undefined local_10a [256];
  char *local_a;
  undefined2 local_8;
  undefined local_6;
  
  uVar6 = (undefined2)((ulong)param_1 >> 0x10);
  puVar4 = (undefined4 *)param_1;
  uVar7 = (undefined2)((ulong)param_2 >> 0x10);
  pcVar5 = (char *)param_2;
  uVar8 = 0x1158;
  FUN_1158_18be(pcVar5,uVar7,(int)puVar4[2],(int)((ulong)puVar4[2] >> 0x10));
  if (!(bool)in_ZF) {
    if (*param_2 != '\0') {
      uVar8 = 0x1150;
      cVar3 = FUN_1150_0824(pcVar5,uVar7);
      if (cVar3 == '\0') {
        puVar10 = local_10a;
        local_6 = 4;
        local_a = pcVar5;
        local_8 = uVar7;
        FUN_1150_0950(0,&local_a,unaff_SS,0xf010);
        uVar9 = FUN_1150_28e6(0x273,0x1148,CONCAT11(extraout_AH,1),puVar10,unaff_SS);
        uVar8 = 0x1158;
        FUN_1158_1399(0x1150,uVar9);
      }
    }
    if (*(int *)(puVar4 + 1) == 0 && *(int *)((int)puVar4 + 6) == 0) {
      puVar1 = (undefined2 *)((int)*param_1 + 0x20);
      (*(code *)*puVar1)(uVar8,puVar4,uVar6,pcVar5,uVar7,(int)puVar4[2],
                         (int)((ulong)puVar4[2] >> 0x10),0,0);
    }
    else {
      puVar2 = (undefined4 *)puVar4[1];
      puVar1 = (undefined2 *)((int)*puVar2 + 0x20);
      (*(code *)*puVar1)(uVar8,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),pcVar5,uVar7,
                         (int)puVar4[2],(int)((ulong)puVar4[2] >> 0x10),puVar4,uVar6);
    }
    FUN_1148_5308(puVar4,uVar6,0);
    FUN_1148_522c(puVar4,uVar6,pcVar5,uVar7);
    FUN_1148_5308(puVar4,uVar6,1);
  }
  return;
}



/* ---- FUN_1148_522c @ 1148:522c  (26 octets) ---- */

void __stdcall16far FUN_1148_522c(undefined4 param_1,undefined4 param_2)

{
  FUN_1150_0651((int)param_2,(int)((ulong)param_2 >> 0x10),(int)param_1 + 8,
                (int)((ulong)param_1 >> 0x10));
  return;
}



/* ---- FUN_1148_5246 @ 1148:5246  (55 octets) ---- */

undefined4 __stdcall16far FUN_1148_5246(undefined4 param_1,undefined2 param_2)

{
  int iVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  undefined2 local_6;
  undefined2 local_4;
  
  uVar3 = CONCAT22(local_4,local_6);
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  if (*(int *)(iVar1 + 0x10) == 0 && *(int *)(iVar1 + 0x12) == 0) {
    FUN_1148_0be2(0xf00b);
  }
  else {
    uVar3 = FUN_1148_0dd0((int)*(undefined4 *)(iVar1 + 0x10),
                          (int)((ulong)*(undefined4 *)(iVar1 + 0x10) >> 0x10),param_2);
  }
  return uVar3;
}



/* ---- FUN_1148_527d @ 1148:527d  (42 octets) ---- */

undefined2 __stdcall16far FUN_1148_527d(undefined4 param_1)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 local_4;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  if (*(int *)(iVar1 + 0x10) == 0 && *(int *)(iVar1 + 0x12) == 0) {
    local_4 = 0;
  }
  else {
    local_4 = *(undefined2 *)((int)*(undefined4 *)(iVar1 + 0x10) + 8);
  }
  return local_4;
}



/* ---- FUN_1148_52a7 @ 1148:52a7  (97 octets) ---- */

void __stdcall16far FUN_1148_52a7(undefined4 param_1,char param_2)

{
  int iVar1;
  undefined2 uVar2;
  int iVar4;
  undefined2 uVar5;
  undefined4 uVar6;
  int local_4;
  int iVar3;
  
  iVar4 = (int)param_1;
  uVar5 = (undefined2)((ulong)param_1 >> 0x10);
  if (param_2 == '\0') {
    *(byte *)(iVar4 + 0x18) = *(byte *)(iVar4 + 0x18) & 0xef;
  }
  else {
    *(byte *)(iVar4 + 0x18) = *(byte *)(iVar4 + 0x18) | 0x10;
  }
  iVar1 = FUN_1148_527d(iVar4,uVar5);
  if (-1 < iVar1 + -1) {
    local_4 = 0;
    iVar3 = 0;
    while( true ) {
      uVar2 = CONCAT11((char)((uint)iVar3 >> 8),param_2);
      uVar6 = FUN_1148_5246(iVar4,uVar5,local_4);
      FUN_1148_52a7(uVar6,uVar2);
      if (local_4 == iVar1 + -1) break;
      iVar3 = local_4;
      local_4 = local_4 + 1;
    }
  }
  return;
}



/* ---- FUN_1148_5308 @ 1148:5308  (91 octets) ---- */

void __stdcall16far FUN_1148_5308(undefined4 param_1,char param_2)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  iVar3 = (int)((ulong)param_1 >> 0x10);
  iVar2 = (int)param_1;
  if (*(int *)(iVar2 + 4) != 0 || *(int *)(iVar2 + 6) != 0) {
    piVar4 = (int *)FUN_1158_21da((int)*(undefined4 *)(iVar2 + 4),
                                  (int)((ulong)*(undefined4 *)(iVar2 + 4) >> 0x10),
                                  (int)*(undefined4 *)(iVar2 + 8),
                                  (int)((ulong)*(undefined4 *)(iVar2 + 8) >> 0x10));
    uVar1 = (undefined2)((ulong)piVar4 >> 0x10);
    if (piVar4 != (int *)0x0) {
      if (param_2 == '\0') {
        *piVar4 = 0;
        ((int *)piVar4)[1] = 0;
      }
      else {
        *piVar4 = iVar2;
        ((int *)piVar4)[1] = iVar3;
      }
    }
  }
  return;
}



/* ---- FUN_1148_5363 @ 1148:5363  (74 octets) ---- */

void __cdecl16far FUN_1148_5363(void)

{
  undefined4 uVar1;
  
  uVar1 = FUN_1158_1f50(0x2a3,0x1148,1);
  DAT_1160_1704 = (undefined2)((ulong)uVar1 >> 0x10);
  DAT_1160_1702 = (undefined2)uVar1;
  uVar1 = FUN_1148_1d08(0x3c9,0x1148,1);
  DAT_1160_1708 = (undefined2)((ulong)uVar1 >> 0x10);
  DAT_1160_1706 = (undefined2)uVar1;
  uVar1 = FUN_1158_1f50(0x2a3,0x1148,1);
  DAT_1160_170a = (int)uVar1;
  DAT_1160_170c = (int)((ulong)uVar1 >> 0x10);
  return;
}




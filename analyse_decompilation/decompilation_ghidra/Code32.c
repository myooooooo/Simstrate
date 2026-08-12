/* Simstrat (FR).EXE - segment Code32 - 239 fonctions
   Decompile par Ghidra 11.2.1 (x86 16 bits, chargeur NE). */

/* ---- FUN_10f8_0f22 @ 10f8:0f22  (45 octets) ---- */

void FUN_10f8_0f22(undefined2 param_1)

{
  undefined extraout_AH;
  undefined2 unaff_SS;
  undefined4 uVar1;
  undefined *puVar2;
  undefined local_102 [256];
  
  puVar2 = local_102;
  FUN_1150_092b(param_1);
  uVar1 = FUN_1150_28e6(0x22,0x10f8,CONCAT11(extraout_AH,1),puVar2,unaff_SS);
  FUN_1158_1399(0x1150,uVar1);
  return;
}



/* ---- FUN_10f8_0f4f @ 10f8:0f4f  (251 octets) ---- */

void FUN_10f8_0f4f(undefined *param_1,undefined *param_2,uint *param_3)

{
  undefined *puVar1;
  uint *puVar2;
  int iVar3;
  undefined *puVar4;
  uint *puVar5;
  undefined2 uVar6;
  undefined2 unaff_SS;
  uint local_12;
  uint local_10;
  uint local_e;
  uint local_c;
  uint local_a;
  uint local_8;
  uint local_6;
  uint local_4;
  
  puVar5 = &local_a;
  puVar4 = (undefined *)param_2;
  for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
    puVar2 = puVar5;
    puVar5 = (uint *)((int)puVar5 + 1);
    puVar1 = puVar4;
    puVar4 = puVar4 + 1;
    *(undefined *)puVar2 = *puVar1;
  }
  puVar5 = &local_12;
  puVar4 = (undefined *)param_1;
  for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
    puVar2 = puVar5;
    puVar5 = (uint *)((int)puVar5 + 1);
    puVar1 = puVar4;
    puVar4 = puVar4 + 1;
    *(undefined *)puVar2 = *puVar1;
  }
  uVar6 = (undefined2)((ulong)param_3 >> 0x10);
  puVar5 = (uint *)param_3;
  *param_3 = local_12;
  puVar5[1] = local_10;
  if (((int)local_8 < (int)local_10) || (((int)local_8 <= (int)local_10 && (local_a < local_12)))) {
    *param_3 = local_a;
    puVar5[1] = local_8;
  }
  puVar5[4] = local_a;
  puVar5[5] = local_8;
  if (((int)local_8 < (int)local_10) || (((int)local_8 <= (int)local_10 && (local_a < local_12)))) {
    puVar5[4] = local_12;
    puVar5[5] = local_10;
  }
  puVar5[2] = local_e;
  puVar5[3] = local_c;
  if (((int)local_4 < (int)local_c) || (((int)local_4 <= (int)local_c && (local_6 < local_e)))) {
    puVar5[2] = local_6;
    puVar5[3] = local_4;
  }
  puVar5[6] = local_6;
  puVar5[7] = local_4;
  if (((int)local_4 < (int)local_c) || (((int)local_4 <= (int)local_c && (local_6 < local_e)))) {
    puVar5[6] = local_e;
    puVar5[7] = local_c;
  }
  return;
}



/* ---- FUN_10f8_104a @ 10f8:104a  (111 octets) ---- */

undefined2 FUN_10f8_104a(uint *param_1,uint param_2,int param_3,uint param_4,int param_5)

{
  uint *puVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  puVar1 = (uint *)param_1;
  if ((((((int)puVar1[1] < param_5) || (((int)puVar1[1] <= param_5 && (*param_1 <= param_4)))) &&
       ((param_5 < (int)puVar1[5] || ((param_5 <= (int)puVar1[5] && (param_4 <= puVar1[4])))))) &&
      (((int)puVar1[3] < param_3 || (((int)puVar1[3] <= param_3 && (puVar1[2] <= param_2)))))) &&
     ((param_3 < (int)puVar1[7] || ((param_3 <= (int)puVar1[7] && (param_2 <= puVar1[6])))))) {
    return 1;
  }
  return 0;
}



/* ---- FUN_10f8_10b9 @ 10f8:10b9  (58 octets) ---- */

undefined2 FUN_10f8_10b9(undefined2 param_1_00,int *param_1,int param_2,int param_3)

{
  int *piVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  piVar1 = (int *)param_1;
  if ((((param_3 < *param_1) || (piVar1[2] < param_3)) || (param_2 < piVar1[1])) ||
     (piVar1[3] < param_2)) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}



/* ---- FUN_10f8_10f3 @ 10f8:10f3  (94 octets) ---- */

char FUN_10f8_10f3(int param_1,undefined2 *param_2,undefined2 param_3,undefined2 param_4)

{
  char cVar1;
  undefined2 unaff_SS;
  
  cVar1 = FUN_10f8_10b9(param_1,(int)*(undefined4 *)(param_1 + 0xc),
                        (int)((ulong)*(undefined4 *)(param_1 + 0xc) >> 0x10),param_4,param_3);
  if (cVar1 == '\0') {
    cVar1 = FUN_10f8_10b9(param_1,(int)*(undefined4 *)(param_1 + 8),
                          (int)((ulong)*(undefined4 *)(param_1 + 8) >> 0x10),param_4,param_3);
    if (cVar1 == '\0') {
      cVar1 = '\0';
      goto LAB_10f8_1131;
    }
  }
  cVar1 = '\x01';
LAB_10f8_1131:
  if (cVar1 != '\0') {
    *param_2 = param_3;
    ((undefined2 *)param_2)[1] = param_4;
  }
  return cVar1;
}



/* ---- FUN_10f8_1151 @ 10f8:1151  (133 octets) ---- */

undefined FUN_10f8_1151(undefined2 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4,
                       undefined2 param_5,undefined2 param_6,undefined2 param_7,undefined4 param_8)

{
  char cVar1;
  int iVar2;
  undefined2 uVar3;
  undefined local_3;
  
  local_3 = 1;
  uVar3 = (undefined2)((ulong)param_8 >> 0x10);
  iVar2 = (int)param_8;
  cVar1 = FUN_10f8_10f3(param_1,iVar2,uVar3,param_6,param_7);
  if (cVar1 == '\0') {
    cVar1 = FUN_10f8_10f3(param_1,iVar2,uVar3,param_4,param_5);
    if (cVar1 == '\0') {
      local_3 = 0;
    }
    else {
      *(undefined2 *)(iVar2 + 4) = param_2;
      *(undefined2 *)(iVar2 + 6) = param_3;
    }
  }
  else {
    cVar1 = FUN_10f8_10f3(param_1,iVar2 + 4,uVar3,param_2,param_3);
    if (cVar1 == '\0') {
      *(undefined2 *)(iVar2 + 4) = param_4;
      *(undefined2 *)(iVar2 + 6) = param_5;
    }
  }
  return local_3;
}



/* ---- FUN_10f8_11d6 @ 10f8:11d6  (367 octets) ---- */

void FUN_10f8_11d6(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  undefined2 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined2 local_16;
  undefined2 local_14;
  undefined2 local_12;
  undefined2 local_10;
  undefined2 local_e;
  undefined2 local_c;
  undefined2 local_a;
  undefined2 local_8;
  
  uVar6 = (undefined2)((ulong)param_1 >> 0x10);
  iVar3 = (int)param_1;
  FUN_1158_1ee5(0,0x20,iVar3,uVar6);
  uVar7 = (undefined2)((ulong)param_3 >> 0x10);
  uVar4 = (undefined2)param_3;
  uVar8 = (undefined2)((ulong)param_2 >> 0x10);
  uVar5 = (undefined2)param_2;
  iVar2 = INTERSECTRECT(0x1158,uVar5,uVar8,uVar4,uVar7,&local_e);
  if (iVar2 == 0) {
    FUN_1158_161b(8,iVar3,uVar6,uVar4,uVar7);
    FUN_1158_161b(8,iVar3 + 8,uVar6,uVar5,uVar8);
  }
  else {
    UNIONRECT(0x14d0,uVar5,uVar8,uVar4,uVar7,&local_16);
    iVar2 = iVar3;
    uVar4 = uVar6;
    uVar9 = FUN_1148_066e(local_14,local_16);
    uVar10 = FUN_1148_066e(local_c,local_16);
    uVar11 = FUN_1148_066e(local_8,local_16);
    cVar1 = FUN_10f8_1151(&stack0xfffe,uVar11,uVar10,uVar9,iVar2,uVar4);
    if (cVar1 != '\0') {
      *(undefined2 *)(iVar3 + 4) = local_e;
    }
    iVar2 = iVar3 + 8;
    uVar4 = uVar6;
    uVar9 = FUN_1148_066e(local_14,local_e);
    uVar10 = FUN_1148_066e(local_14,local_a);
    uVar11 = FUN_1148_066e(local_14,local_12);
    cVar1 = FUN_10f8_1151(&stack0xfffe,uVar11,uVar10,uVar9,iVar2,uVar4);
    if (cVar1 != '\0') {
      *(undefined2 *)(iVar3 + 0xe) = local_c;
    }
    iVar2 = iVar3 + 0x10;
    uVar4 = uVar6;
    uVar9 = FUN_1148_066e(local_c,local_12);
    uVar10 = FUN_1148_066e(local_8,local_12);
    uVar11 = FUN_1148_066e(local_10,local_12);
    cVar1 = FUN_10f8_1151(&stack0xfffe,uVar11,uVar10,uVar9,iVar2,uVar4);
    if (cVar1 != '\0') {
      *(undefined2 *)(iVar3 + 0x10) = local_a;
    }
    iVar2 = iVar3 + 0x18;
    uVar4 = uVar6;
    uVar9 = FUN_1148_066e(local_10,local_16);
    uVar10 = FUN_1148_066e(local_10,local_e);
    uVar11 = FUN_1148_066e(local_10,local_a);
    cVar1 = FUN_10f8_1151(&stack0xfffe,uVar11,uVar10,uVar9,iVar2,uVar4);
    if (cVar1 != '\0') {
      *(undefined2 *)(iVar3 + 0x1a) = local_8;
    }
  }
  return;
}



/* ---- FUN_10f8_1345 @ 10f8:1345  (271 octets) ---- */

void FUN_10f8_1345(undefined2 param_1,uint param_2,int param_3,uint param_4,uint param_5,
                  undefined4 *param_6)

{
  undefined4 *puVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  uint local_c;
  uint local_a;
  uint local_8;
  
  if (param_2 != 0 || param_3 != 0) {
    uVar2 = (undefined2)((ulong)param_6 >> 0x10);
    puVar1 = (undefined4 *)param_6;
    if (*(int *)((int)puVar1 + 2) == 0) {
      local_a = 0;
    }
    else {
      local_a = *(uint *)*param_6;
    }
    if ((((int)param_5 < 0) || (0 < (int)param_5)) || ((param_5 < 0x8000 && (local_a < param_4)))) {
      FUN_10f8_0f22(0xf057);
    }
    local_8 = local_a + param_2;
    param_3 = param_3 + (uint)CARRY2(local_a,param_2);
    if (param_3 < 0) {
      FUN_10f8_0f22(0xf056);
    }
    else if ((0 < param_3) || ((-1 < param_3 && (0x3ffa < local_8)))) {
      FUN_10f8_0f22(0xf055);
    }
    if (*(int *)((int)puVar1 + 2) != 0) {
      local_a = local_a + 1;
    }
    if (local_8 != 0) {
      local_8 = local_8 + 1;
    }
    uVar3 = FUN_1150_04a1(local_8 << 1,local_a << 1,*(undefined2 *)param_6,
                          *(undefined2 *)((int)puVar1 + 2));
    *(int *)param_6 = (int)uVar3;
    *(undefined2 *)((int)puVar1 + 2) = (int)((ulong)uVar3 >> 0x10);
    if (*(int *)((int)puVar1 + 2) != 0) {
      for (local_c = param_4; local_c < local_8; local_c = local_c + 1) {
        *(undefined2 *)((int)*param_6 + local_c * 2) = param_1;
      }
      *(uint *)*param_6 = local_8 - 1;
    }
  }
  return;
}



/* ---- FUN_10f8_1454 @ 10f8:1454  (70 octets) ---- */

void FUN_10f8_1454(undefined2 param_1,uint param_2,int param_3,undefined4 *param_4)

{
  undefined2 uVar1;
  undefined2 local_4;
  
  local_4 = 0;
  uVar1 = (undefined2)((ulong)param_4 >> 0x10);
  if (*(int *)((int)(undefined4 *)param_4 + 2) != 0) {
    local_4 = *(uint *)*param_4;
  }
  FUN_10f8_1345(param_1,param_2 - local_4,
                (param_3 - ((int)local_4 >> 0xf)) - (uint)(param_2 < local_4),local_4,
                (int)local_4 >> 0xf,(undefined4 *)param_4,uVar1);
  return;
}



/* ---- FUN_10f8_149a @ 10f8:149a  (229 octets) ---- */

void FUN_10f8_149a(uint param_1,int param_2,uint param_3,int param_4,undefined4 *param_5)

{
  undefined2 uVar1;
  undefined2 uVar2;
  int iVar3;
  int iVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  
  if (*(int *)((int)(undefined4 *)param_5 + 2) != 0) {
    uVar1 = *(undefined2 *)((int)*param_5 + param_3 * 2);
    if ((param_4 < param_2) || ((param_4 <= param_2 && (param_3 < param_1)))) {
      uVar5 = (undefined2)((ulong)*param_5 >> 0x10);
      iVar3 = (int)*param_5 + (param_3 + 1) * 2;
      uVar6 = (undefined2)((ulong)*param_5 >> 0x10);
      iVar4 = (int)*param_5 + param_3 * 2;
      uVar2 = FUN_1158_1633(iVar4,uVar6,iVar3,uVar5);
      FUN_1158_1ec1(uVar2,iVar4,uVar6,iVar3,uVar5);
    }
    else if ((param_2 < param_4) || ((param_2 <= param_4 && (param_1 < param_3)))) {
      uVar5 = (undefined2)((ulong)*param_5 >> 0x10);
      iVar3 = (int)*param_5 + param_1 * 2;
      uVar6 = (undefined2)((ulong)*param_5 >> 0x10);
      iVar4 = (int)*param_5 + (param_1 + 1) * 2;
      uVar2 = FUN_1158_1633(iVar4,uVar6,iVar3,uVar5);
      FUN_1158_1ec1(uVar2,iVar4,uVar6,iVar3,uVar5);
    }
    *(undefined2 *)((int)*param_5 + param_1 * 2) = uVar1;
  }
  return;
}



/* ---- FUN_10f8_157f @ 10f8:157f  (150 octets) ---- */

undefined4
FUN_10f8_157f(uint param_1,uint param_2,uint param_3,uint param_4,uint param_5,uint param_6)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  byte bVar16;
  bool bVar17;
  bool bVar18;
  
  uVar10 = (uint)((ulong)param_5 * (ulong)param_3 >> 0x10);
  uVar4 = (uint)((ulong)param_5 * (ulong)param_3);
  uVar5 = (uint)((ulong)param_6 * (ulong)param_4);
  uVar11 = (uint)((ulong)param_6 * (ulong)param_3 >> 0x10);
  uVar6 = (uint)((ulong)param_6 * (ulong)param_3);
  uVar13 = uVar10 + uVar6;
  uVar1 = (uint)CARRY2(uVar10,uVar6);
  uVar2 = uVar5 + uVar11;
  uVar6 = uVar2 + uVar1;
  uVar12 = (uint)((ulong)param_5 * (ulong)param_4 >> 0x10);
  uVar7 = (uint)((ulong)param_5 * (ulong)param_4);
  uVar10 = uVar13 + uVar7;
  uVar7 = (uint)CARRY2(uVar13,uVar7);
  uVar3 = uVar6 + uVar12;
  uVar13 = uVar3 + uVar7;
  uVar15 = param_1 >> 1 | (uint)((param_2 & 1) != 0) << 0xf;
  uVar8 = uVar4 + uVar15;
  uVar4 = (uint)CARRY2(uVar4,uVar15);
  uVar15 = uVar10 + (param_2 >> 1);
  uVar14 = uVar15 + uVar4;
  uVar10 = (uint)(CARRY2(uVar10,param_2 >> 1) || CARRY2(uVar15,uVar4));
  uVar4 = uVar13 + uVar10;
  uVar13 = (int)((ulong)param_6 * (ulong)param_4 >> 0x10) +
           (uint)(CARRY2(uVar5,uVar11) || CARRY2(uVar2,uVar1)) +
           (uint)(CARRY2(uVar6,uVar12) || CARRY2(uVar3,uVar7)) + (uint)CARRY2(uVar13,uVar10);
  iVar9 = 0x20;
  bVar16 = 0;
  do {
    while( true ) {
      bVar17 = (int)uVar8 < 0;
      uVar8 = uVar8 << 1 | (uint)bVar16;
      bVar18 = (int)uVar14 < 0;
      uVar14 = uVar14 << 1 | (uint)bVar17;
      bVar17 = (int)uVar4 < 0;
      uVar4 = uVar4 << 1 | (uint)bVar18;
      bVar18 = (int)uVar13 < 0;
      uVar13 = uVar13 << 1 | (uint)bVar17;
      if ((bVar18) || ((param_2 <= uVar13 && ((uVar13 != param_2 || (param_1 <= uVar4)))))) break;
      bVar16 = 0;
      iVar9 = iVar9 + -1;
      if (iVar9 == 0) goto LAB_10f8_1609;
    }
    bVar17 = uVar4 < param_1;
    uVar4 = uVar4 - param_1;
    uVar13 = (uVar13 - param_2) - (uint)bVar17;
    bVar16 = 1;
    iVar9 = iVar9 + -1;
  } while (iVar9 != 0);
LAB_10f8_1609:
  return CONCAT22(uVar14 << 1 | (uint)((int)uVar8 < 0),uVar8 << 1 | (uint)bVar16);
}



/* ---- FUN_10f8_1615 @ 10f8:1615  (107 octets) ---- */

undefined4 __stdcall16far
FUN_10f8_1615(undefined4 param_1,char param_2,undefined2 param_3,undefined2 param_4)

{
  undefined2 uVar1;
  undefined2 uVar2;
  undefined2 uStack_a;
  
  if (param_2 != '\0') {
    FUN_1158_1fe2();
  }
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  uVar1 = (undefined2)param_1;
  FUN_1100_115a(uVar1,uVar2,0,param_3,param_4);
  FUN_1138_6370(uVar1,uVar2,0);
  FUN_1138_6322(uVar1,uVar2,0);
  FUN_1138_6488(uVar1,uVar2,0);
  FUN_1120_47bf(uVar1,uVar2,0);
  if (param_2 != '\0') {
    DAT_1160_1858 = uStack_a;
  }
  return param_1;
}



/* ---- FUN_10f8_1680 @ 10f8:1680  (48 octets) ---- */

void __stdcall16far FUN_10f8_1680(undefined4 param_1,undefined4 param_2)

{
  undefined2 uVar1;
  int iVar2;
  undefined2 uVar3;
  
  uVar3 = (undefined2)((ulong)param_2 >> 0x10);
  iVar2 = (int)param_2;
  FUN_1120_4a5f((int)param_1,(int)((ulong)param_1 >> 0x10),iVar2,uVar3);
  uVar1 = *(undefined2 *)(iVar2 + 6);
  *(uint *)(iVar2 + 4) = *(uint *)(iVar2 + 4) | 4;
  *(undefined2 *)(iVar2 + 6) = uVar1;
  return;
}



/* ---- FUN_10f8_16b0 @ 10f8:16b0  (26 octets) ---- */

void __stdcall16far FUN_10f8_16b0(undefined4 param_1,undefined2 param_2,undefined2 param_3)

{
  undefined2 uVar1;
  
  uVar1 = (undefined2)((ulong)param_1 >> 0x10);
  *(undefined2 *)((int)param_1 + 0xfd) = param_2;
  *(undefined2 *)((int)param_1 + 0xff) = param_3;
  return;
}



/* ---- FUN_10f8_16ca @ 10f8:16ca  (7 octets) ---- */

void __stdcall16far FUN_10f8_16ca(void)

{
  return;
}



/* ---- FUN_10f8_16d1 @ 10f8:16d1  (65 octets) ---- */

void __stdcall16far FUN_10f8_16d1(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  FUN_1100_236f((int)param_1,uVar2,(int)param_2,param_2._2_2_);
  uVar1 = *(undefined4 *)((int)param_1 + 0xfd);
  if ((*(byte *)((int)uVar1 + 0x109) & 8) != 0) {
    uVar2 = *(undefined2 *)((int)param_2 + 10);
    *(uint *)((int)param_2 + 8) = *(uint *)((int)param_2 + 8) | 2;
    *(undefined2 *)((int)param_2 + 10) = uVar2;
  }
  return;
}



/* ---- FUN_10f8_1712 @ 10f8:1712  (25 octets) ---- */

void __stdcall16far FUN_10f8_1712(void)

{
  FUN_1158_206a();
  return;
}



/* ---- FUN_10f8_172b @ 10f8:172b  (32 octets) ---- */

undefined2 __stdcall16far FUN_10f8_172b(void)

{
  undefined2 uVar1;
  
  uVar1 = FUN_1158_206a();
  return uVar1;
}



/* ---- FUN_10f8_174b @ 10f8:174b  (58 octets) ---- */

void FUN_10f8_174b(int param_1)

{
  undefined2 unaff_SS;
  
  FUN_1158_206a();
  *(undefined2 *)*(undefined4 *)(param_1 + 0xc) = 0;
  return;
}



/* ---- FUN_10f8_1785 @ 10f8:1785  (88 octets) ---- */

void FUN_10f8_1785(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 unaff_SS;
  code *local_a;
  code *local_8;
  undefined2 local_6;
  undefined2 local_4;
  
  uVar1 = *(undefined4 *)((int)*(undefined4 *)(param_1 + 6) + 0xfd);
  FUN_1158_161b(8,&local_a,unaff_SS,(int)uVar1 + 0xb0,(int)((ulong)uVar1 >> 0x10));
  if (local_8 != (code *)0x0) {
    uVar3 = (undefined2)((ulong)*(undefined4 *)(param_1 + 6) >> 0x10);
    iVar2 = (int)*(undefined4 *)(param_1 + 6);
    (*local_a)(0x1158,local_6,local_4,*(undefined *)(param_1 + 10),
               (int)*(undefined4 *)(param_1 + 0xc),
               (int)((ulong)*(undefined4 *)(param_1 + 0xc) >> 0x10),*(undefined2 *)(iVar2 + 0xfd),
               *(undefined2 *)(iVar2 + 0xff));
  }
  return;
}



/* ---- FUN_10f8_17dd @ 10f8:17dd  (37 octets) ---- */

uint FUN_10f8_17dd(int param_1)

{
  undefined4 uVar1;
  uint in_AX;
  uint uVar2;
  undefined2 unaff_SS;
  
  uVar1 = *(undefined4 *)((int)*(undefined4 *)(param_1 + 6) + 0xfd);
  uVar2 = in_AX & 0xff00;
  if ((*(byte *)((int)uVar1 + 0x109) & 0x20) != 0) {
    uVar2 = uVar2 + 1;
  }
  return uVar2;
}



/* ---- FUN_10f8_1802 @ 10f8:1802  (27 octets) ---- */

uint FUN_10f8_1802(int param_1)

{
  uint in_AX;
  uint uVar1;
  undefined2 unaff_SS;
  
  uVar1 = in_AX & 0xff00;
  if ((*(byte *)(param_1 + 10) & 4) != 0) {
    uVar1 = uVar1 + 1;
  }
  return uVar1;
}



/* ---- FUN_10f8_181d @ 10f8:181d  (49 octets) ---- */

undefined4 FUN_10f8_181d(int param_1)

{
  undefined2 unaff_SS;
  undefined4 uVar1;
  
  FUN_1138_62b9((int)*(undefined4 *)(param_1 + 6),(int)((ulong)*(undefined4 *)(param_1 + 6) >> 0x10)
               );
  uVar1 = SENDMESSAGE(0x1138,0,0,0,0x400);
  return uVar1;
}



/* ---- FUN_10f8_184e @ 10f8:184e  (66 octets) ---- */

undefined2 FUN_10f8_184e(int param_1)

{
  int iVar1;
  int iVar2;
  undefined2 unaff_SS;
  undefined4 uVar3;
  
  uVar3 = FUN_10f8_181d(param_1);
  iVar2 = (int)((ulong)uVar3 >> 0x10);
  if ((((int)uVar3 == 0) || (iVar2 == (int)uVar3)) &&
     (iVar1 = FUN_1100_14fd((int)*(undefined4 *)(param_1 + 6),
                            (int)((ulong)*(undefined4 *)(param_1 + 6) >> 0x10)), iVar1 == iVar2)) {
    return 1;
  }
  return 0;
}



/* ---- FUN_10f8_1890 @ 10f8:1890  (64 octets) ---- */

undefined2 FUN_10f8_1890(int param_1)

{
  int iVar1;
  undefined2 uVar2;
  int iVar3;
  undefined2 unaff_SS;
  undefined4 uVar4;
  
  uVar4 = FUN_10f8_181d(param_1);
  iVar3 = (int)((ulong)uVar4 >> 0x10);
  if ((int)uVar4 == 0) {
    if (iVar3 != 0) {
      iVar1 = FUN_1100_14fd((int)*(undefined4 *)(param_1 + 6),
                            (int)((ulong)*(undefined4 *)(param_1 + 6) >> 0x10));
      if (iVar1 != iVar3) goto LAB_10f8_18c0;
    }
    uVar2 = 1;
  }
  else {
LAB_10f8_18c0:
    uVar2 = 0;
  }
  return uVar2;
}



/* ---- FUN_10f8_18d0 @ 10f8:18d0  (360 octets) ---- */

void __stdcall16far FUN_10f8_18d0(undefined4 param_1,byte param_2,int *param_3)

{
  int iVar1;
  char cVar2;
  undefined extraout_AH;
  int iVar3;
  undefined2 uVar4;
  undefined2 unaff_CS;
  
  iVar1 = *param_3;
  iVar3 = (int)param_1;
  uVar4 = (undefined2)((ulong)param_1 >> 0x10);
  if ((((iVar1 == 0x26) || (iVar1 == 0x28)) || (iVar1 == 0x21)) ||
     ((iVar1 == 0x22 || (iVar1 == 0x1b)))) {
    FUN_10f8_174b(&stack0xfffe);
  }
  else if (iVar1 == 0x2d) {
    if (param_2 == 0) {
      FUN_10f8_174b(&stack0xfffe);
    }
    else if (param_2 == 1) {
      unaff_CS = 0x1158;
      cVar2 = FUN_1158_206a();
      if (cVar2 == '\0') {
        *param_3 = 0;
      }
    }
  }
  else if (iVar1 == 0x25) {
    cVar2 = FUN_10f8_17dd(&stack0xfffe);
    if ((cVar2 != '\0') &&
       ((cVar2 = FUN_10f8_1802(&stack0xfffe), cVar2 != '\0' ||
        (cVar2 = FUN_10f8_1890(&stack0xfffe), cVar2 != '\0')))) {
      FUN_10f8_174b(&stack0xfffe);
    }
  }
  else if (iVar1 == 0x27) {
    cVar2 = FUN_10f8_17dd(&stack0xfffe);
    if ((cVar2 != '\0') &&
       ((cVar2 = FUN_10f8_1802(&stack0xfffe), cVar2 != '\0' ||
        (cVar2 = FUN_10f8_184e(&stack0xfffe), cVar2 != '\0')))) {
      FUN_10f8_174b(&stack0xfffe);
    }
  }
  else if (iVar1 == 0x24) {
    cVar2 = FUN_10f8_17dd(&stack0xfffe);
    if ((cVar2 != '\0') &&
       ((cVar2 = FUN_10f8_1802(&stack0xfffe), cVar2 != '\0' ||
        (cVar2 = FUN_10f8_1890(&stack0xfffe), cVar2 != '\0')))) {
      FUN_10f8_174b(&stack0xfffe);
    }
  }
  else if (iVar1 == 0x23) {
    cVar2 = FUN_10f8_17dd(&stack0xfffe);
    if ((cVar2 != '\0') &&
       ((cVar2 = FUN_10f8_1802(&stack0xfffe), cVar2 != '\0' ||
        (cVar2 = FUN_10f8_184e(&stack0xfffe), cVar2 != '\0')))) {
      FUN_10f8_174b(&stack0xfffe);
    }
  }
  else if (iVar1 == 0x71) {
    FUN_10f8_1785(&stack0xfffe);
    if (*param_3 == 0x71) {
      FUN_10f8_1bfb(iVar3,uVar4);
      return;
    }
  }
  else if ((iVar1 == 9) && ((param_2 & 2) == 0)) {
    FUN_10f8_174b(&stack0xfffe);
  }
  if ((*param_3 == 0x2e) &&
     (cVar2 = FUN_1158_206a(unaff_CS,(int)*(undefined4 *)(iVar3 + 0xfd),
                            (int)((ulong)*(undefined4 *)(iVar3 + 0xfd) >> 0x10)), cVar2 == '\0')) {
    *param_3 = 0;
  }
  if (*param_3 != 0) {
    FUN_10f8_1785(&stack0xfffe);
    FUN_1100_120b(iVar3,uVar4,CONCAT11(extraout_AH,param_2),(int *)param_3,
                  (int)((ulong)param_3 >> 0x10));
  }
  return;
}



/* ---- FUN_10f8_1a38 @ 10f8:1a38  (262 octets) ---- */

void __stdcall16far FUN_10f8_1a38(undefined4 param_1,byte *param_2)

{
  byte bVar1;
  char cVar2;
  undefined extraout_AH;
  int iVar3;
  int iVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  undefined2 uVar8;
  undefined2 uVar9;
  undefined4 uVar10;
  byte *pbVar11;
  undefined2 uVar12;
  
  uVar6 = (undefined2)((ulong)param_2 >> 0x10);
  uVar7 = (undefined2)((ulong)param_1 >> 0x10);
  iVar4 = (int)param_1;
  uVar8 = (undefined2)((ulong)*(undefined4 *)(iVar4 + 0xfd) >> 0x10);
  uVar5 = (undefined2)*(undefined4 *)(iVar4 + 0xfd);
  uVar9 = 0x1158;
  pbVar11 = (byte *)param_2;
  uVar12 = uVar6;
  FUN_1158_206a();
  if (0x1f < *param_2) {
    uVar9 = 0x1158;
    cVar2 = FUN_1158_206a(0x1158,(int)*(undefined4 *)(iVar4 + 0xfd),
                          (int)((ulong)*(undefined4 *)(iVar4 + 0xfd) >> 0x10),
                          CONCAT11(extraout_AH,*param_2),uVar5,uVar8,pbVar11,uVar12);
    if (cVar2 == '\0') {
      *param_2 = 0;
      uVar9 = 0x14d0;
      MESSAGEBEEP(0x1158,0);
    }
  }
  bVar1 = *param_2;
  if ((bVar1 == 9) || (bVar1 == 0x1b)) {
    *param_2 = 0;
  }
  else if (bVar1 == 0xd) {
    FUN_1138_62b9(iVar4,uVar7);
    uVar10 = SENDMESSAGE(0x1138,0,0,0,0x400);
    if (((int)uVar10 == 0) &&
       (iVar3 = FUN_1100_14fd(iVar4,uVar7), iVar3 == (int)((ulong)uVar10 >> 0x10))) {
      FUN_10f8_1bfb(iVar4,uVar7);
    }
    else {
      FUN_1120_4a3f(iVar4,uVar7);
    }
    *param_2 = 0;
  }
  else if (((((bVar1 == 8) || (bVar1 == 0x16)) || (bVar1 == 0x18)) || (0x1f < bVar1)) &&
          (cVar2 = FUN_1158_206a(uVar9,(int)*(undefined4 *)(iVar4 + 0xfd),
                                 (int)((ulong)*(undefined4 *)(iVar4 + 0xfd) >> 0x10)), cVar2 == '\0'
          )) {
    *param_2 = 0;
  }
  if (*param_2 != 0) {
    FUN_1100_1387(iVar4,uVar7,(byte *)param_2,uVar6);
  }
  return;
}



/* ---- FUN_10f8_1b3e @ 10f8:1b3e  (34 octets) ---- */

void __stdcall16far FUN_10f8_1b3e(void)

{
  FUN_1158_206a();
  return;
}



/* ---- FUN_10f8_1b60 @ 10f8:1b60  (153 octets) ---- */

void __stdcall16far FUN_10f8_1b60(undefined4 param_1,int *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined2 uVar4;
  undefined4 uVar6;
  undefined2 uVar7;
  undefined2 uVar8;
  undefined2 uVar5;
  
  iVar3 = (int)param_1;
  uVar4 = (undefined2)((ulong)param_1 >> 0x10);
  uVar5 = (undefined2)((ulong)param_2 >> 0x10);
  if (*param_2 == 7) {
    uVar8 = *(undefined2 *)(iVar3 + 0xff);
    uVar7 = *(undefined2 *)(iVar3 + 0xfd);
    uVar6 = FUN_1140_17a8(iVar3,uVar4);
    cVar1 = FUN_1140_4122(uVar6,uVar7,uVar8);
    if (cVar1 != '\0') {
      FUN_1158_2038(0x1140,iVar3,uVar4,(int *)param_2,uVar5);
    }
  }
  else {
    if (*param_2 == 0x201) {
      uVar6 = GETMESSAGETIME();
      iVar2 = ((int)((ulong)uVar6 >> 0x10) - *(int *)(iVar3 + 0x103)) -
              (uint)((uint)uVar6 < *(uint *)(iVar3 + 0x101));
      if ((iVar2 < (int)DAT_1160_2aca >> 0xf) ||
         ((iVar2 <= (int)DAT_1160_2aca >> 0xf &&
          ((uint)uVar6 - *(uint *)(iVar3 + 0x101) < DAT_1160_2aca)))) {
        *param_2 = 0x203;
      }
      *(undefined2 *)(iVar3 + 0x101) = 0;
      *(undefined2 *)(iVar3 + 0x103) = 0;
    }
    FUN_1138_4446(iVar3,uVar4,(int *)param_2,uVar5);
  }
  return;
}



/* ---- FUN_10f8_1bfb @ 10f8:1bfb  (32 octets) ---- */

void __stdcall16far FUN_10f8_1bfb(undefined4 param_1)

{
  FUN_1138_62b9((int)param_1,(int)((ulong)param_1 >> 0x10));
  SENDMESSAGE(0x1138,0xffff,0xffff,1,0x401);
  return;
}



/* ---- FUN_10f8_1c1b @ 10f8:1c1b  (164 octets) ---- */

void __stdcall16far FUN_10f8_1c1b(undefined4 param_1)

{
  undefined2 uVar1;
  undefined2 uVar2;
  int iVar3;
  undefined2 uVar4;
  undefined2 unaff_SS;
  undefined2 local_a [4];
  
  uVar4 = (undefined2)((ulong)param_1 >> 0x10);
  iVar3 = (int)param_1;
  uVar1 = FUN_1138_62b9(iVar3,uVar4);
  VALIDATERECT(0x1138,0,0,uVar1);
  local_a[0] = uVar4;
  local_a[0] = FUN_1138_62b9(iVar3);
  INVALIDATERECT(0x1138,1,0,0);
  local_a[0] = uVar4;
  local_a[0] = FUN_1138_62b9(iVar3);
  GETCLIENTRECT(0x1138,local_a,unaff_SS);
  uVar1 = FUN_1138_62b9(iVar3,uVar4);
  uVar2 = FUN_1138_62b9((int)*(undefined4 *)(iVar3 + 0xfd),
                        (int)((ulong)*(undefined4 *)(iVar3 + 0xfd) >> 0x10));
  MAPWINDOWPOINTS(0x1138,2,local_a,unaff_SS,uVar2);
  uVar2 = FUN_1138_62b9((int)*(undefined4 *)(iVar3 + 0xfd),
                        (int)((ulong)*(undefined4 *)(iVar3 + 0xfd) >> 0x10));
  VALIDATERECT(0x1138,local_a,unaff_SS,uVar2,uVar1);
  uVar1 = FUN_1138_62b9((int)*(undefined4 *)(iVar3 + 0xfd),
                        (int)((ulong)*(undefined4 *)(iVar3 + 0xfd) >> 0x10));
  INVALIDATERECT(0x1138,0,local_a,unaff_SS,uVar1);
  return;
}



/* ---- FUN_10f8_1cbf @ 10f8:1cbf  (115 octets) ---- */

void __stdcall16far FUN_10f8_1cbf(undefined4 param_1)

{
  char cVar1;
  undefined2 uVar2;
  int iVar3;
  int iVar4;
  undefined2 uVar5;
  
  uVar5 = (undefined2)((ulong)param_1 >> 0x10);
  iVar4 = (int)param_1;
  cVar1 = FUN_1138_64fa(iVar4,uVar5);
  if (cVar1 != '\0') {
    uVar2 = FUN_1138_62b9(iVar4,uVar5);
    iVar3 = ISWINDOWVISIBLE(0x1138,uVar2);
    if (iVar3 != 0) {
      FUN_10f8_1c1b(iVar4,uVar5);
      uVar2 = FUN_1138_62b9(iVar4,uVar5);
      SETWINDOWPOS(0x1138,0x8c,0,0,0,0,0);
      cVar1 = FUN_1138_6258(iVar4,uVar5);
      if (cVar1 != '\0') {
        uVar5 = FUN_1138_62b9((int)*(undefined4 *)(iVar4 + 0xfd),
                              (int)((ulong)*(undefined4 *)(iVar4 + 0xfd) >> 0x10));
        SETFOCUS(0x1138,uVar5,uVar2);
      }
    }
  }
  return;
}



/* ---- FUN_10f8_1d32 @ 10f8:1d32  (271 octets) ---- */

void __stdcall16far FUN_10f8_1d32(undefined4 *param_1,char param_2,undefined *param_3)

{
  undefined *puVar1;
  int *piVar2;
  undefined2 *puVar3;
  bool bVar4;
  char cVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  int iVar8;
  undefined *puVar9;
  int *piVar10;
  undefined4 *puVar11;
  undefined2 unaff_SS;
  undefined local_12 [8];
  int local_a;
  int local_8;
  int local_6;
  int local_4;
  
  piVar10 = &local_a;
  puVar9 = (undefined *)param_3;
  for (iVar8 = 8; iVar8 != 0; iVar8 = iVar8 + -1) {
    piVar2 = piVar10;
    piVar10 = (int *)((int)piVar10 + 1);
    puVar1 = puVar9;
    puVar9 = puVar9 + 1;
    *(undefined *)piVar2 = *puVar1;
  }
  iVar8 = ISRECTEMPTY();
  puVar11 = (undefined4 *)param_1;
  uVar7 = (undefined2)((ulong)param_1 >> 0x10);
  if (iVar8 != 0) {
    FUN_10f8_1cbf(puVar11,uVar7);
    return;
  }
  puVar3 = (undefined2 *)((int)*param_1 + 0x54);
  (*(code *)*puVar3)(0x14d0,puVar11,uVar7);
  if (param_2 == '\0') {
    uVar6 = FUN_1138_62b9(puVar11,uVar7);
    iVar8 = ISWINDOWVISIBLE(0x1138,uVar6);
    if (iVar8 != 0) {
      bVar4 = false;
      goto LAB_10f8_1d91;
    }
  }
  bVar4 = true;
LAB_10f8_1d91:
  FUN_10f8_1c1b(puVar11,uVar7);
  FUN_1138_62b9(puVar11,uVar7);
  SETWINDOWPOS(0x1138,0x48,local_4 - local_8,local_6 - local_a,local_8,local_a,0);
  puVar9 = local_12;
  uVar6 = unaff_SS;
  FUN_1148_0688(local_4 - local_8,(local_6 - local_a) + -2,2,2);
  FUN_1158_161b(8,&local_a,unaff_SS,puVar9,uVar6);
  uVar6 = FUN_1138_62b9(puVar11,uVar7);
  SENDMESSAGE(0x1138,&local_a,unaff_SS,0,0x404);
  if (bVar4) {
    FUN_10f8_1c1b(puVar11,uVar7);
  }
  cVar5 = FUN_1138_6258((int)*(undefined4 *)((int)puVar11 + 0xfd),
                        (int)((ulong)*(undefined4 *)((int)puVar11 + 0xfd) >> 0x10));
  if (cVar5 != '\0') {
    uVar7 = FUN_1138_62b9(puVar11,uVar7);
    SETFOCUS(0x1138,uVar7,uVar6);
  }
  return;
}



/* ---- FUN_10f8_1e41 @ 10f8:1e41  (24 octets) ---- */

void __stdcall16far FUN_10f8_1e41(undefined4 param_1,undefined4 param_2)

{
  FUN_10f8_1d32((int)param_1,(int)((ulong)param_1 >> 0x10),0,(int)param_2,
                (int)((ulong)param_2 >> 0x10));
  return;
}



/* ---- FUN_10f8_1e59 @ 10f8:1e59  (24 octets) ---- */

void __stdcall16far FUN_10f8_1e59(undefined4 param_1,undefined4 param_2)

{
  FUN_10f8_1d32((int)param_1,(int)((ulong)param_1 >> 0x10),1,(int)param_2,
                (int)((ulong)param_2 >> 0x10));
  return;
}



/* ---- FUN_10f8_1e71 @ 10f8:1e71  (303 octets) ---- */

undefined4 * __stdcall16far
FUN_10f8_1e71(undefined4 *param_1,char param_2,undefined2 param_3,undefined2 param_4)

{
  undefined2 *puVar1;
  undefined2 uVar2;
  undefined4 *puVar3;
  undefined2 uVar4;
  undefined4 *puVar5;
  
  if (param_2 != '\0') {
    FUN_1158_1fe2();
  }
  uVar4 = (undefined2)((ulong)param_1 >> 0x10);
  puVar3 = (undefined4 *)param_1;
  FUN_1138_6c72(puVar3,uVar4,0,param_3,param_4);
  *(undefined2 *)((int)puVar3 + 0x26) = 0xd2;
  *(undefined *)((int)puVar3 + 0xe5) = 1;
  *(undefined2 *)((int)puVar3 + 0xe6) = 5;
  *(undefined2 *)(puVar3 + 0x3a) = 0;
  *(undefined2 *)((int)puVar3 + 0x10a) = 5;
  *(undefined2 *)(puVar3 + 0x43) = 0;
  *(undefined2 *)((int)puVar3 + 0xfe) = 1;
  *(undefined2 *)(puVar3 + 0x40) = 1;
  *(undefined2 *)((int)puVar3 + 0x106) = 1;
  *(undefined2 *)(puVar3 + 0x42) = 0x1f;
  *(undefined2 *)((int)puVar3 + 0x102) = 0xfff0;
  *(undefined2 *)(puVar3 + 0x41) = 0xffff;
  *(undefined *)((int)puVar3 + 0x112) = 3;
  *(undefined *)(puVar3 + 0x39) = 1;
  *(undefined2 *)((int)puVar3 + 0xfa) = 0x40;
  *(undefined2 *)(puVar3 + 0x3f) = 0x18;
  *(undefined *)((int)puVar3 + 0x13b) = 1;
  *(undefined *)(puVar3 + 0x50) = 1;
  *(undefined *)(puVar3 + 0x4f) = 0;
  FUN_1138_1ed5(puVar3,uVar4,0xfffa,0xffff);
  FUN_1138_1f32(puVar3,uVar4,0);
  FUN_1138_6488(puVar3,uVar4,1);
  uVar2 = FUN_1158_1633(*(undefined2 *)(puVar3 + 8),*(undefined2 *)((int)puVar3 + 0x1e));
  uVar2 = FUN_1158_1633(uVar2);
  puVar1 = (undefined2 *)((int)*param_1 + 0x4c);
  puVar5 = puVar3;
  (*(code *)*puVar1)(0x1158,puVar3,uVar4,uVar2);
  FUN_10f8_47bd(puVar3,uVar4);
  if (param_2 != '\0') {
    DAT_1160_1858 = puVar5;
  }
  return param_1;
}



/* ---- FUN_10f8_1fa0 @ 10f8:1fa0  (46 octets) ---- */

void __stdcall16far FUN_10f8_1fa0(undefined4 param_1,char param_2)

{
  undefined4 uVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  uVar1 = *(undefined4 *)((int)param_1 + 0x12f);
  FUN_1158_1f7f((int)uVar1,(int)((ulong)uVar1 >> 0x10));
  FUN_1138_6cdc((int)param_1,uVar2,0);
  if (param_2 != '\0') {
    FUN_1158_200f();
  }
  return;
}



/* ---- FUN_10f8_1fce @ 10f8:1fce  (389 octets) ---- */

undefined4 FUN_10f8_1fce(int param_1,uint *param_2,int param_3,int *param_4,uint *param_5)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  uint *puVar6;
  undefined2 uVar7;
  undefined2 uVar8;
  undefined2 unaff_SS;
  bool bVar9;
  int local_8;
  uint local_6;
  int local_4;
  
  uVar7 = (undefined2)((ulong)param_5 >> 0x10);
  uVar2 = *param_5 + *(uint *)(param_1 + 0xc);
  uVar4 = ((uint *)param_5)[1] + *(int *)(param_1 + 0xe) +
          (uint)CARRY2(*param_5,*(uint *)(param_1 + 0xc));
  if (((int)uVar4 < *(int *)(param_1 + 0x12)) ||
     (((int)uVar4 <= *(int *)(param_1 + 0x12) && (uVar2 < *(uint *)(param_1 + 0x10))))) {
    FUN_10f8_0f22(0xf056);
  }
  piVar5 = (int *)param_4;
  uVar8 = (undefined2)((ulong)param_4 >> 0x10);
  if ((*(int *)(param_1 + 0xe) < 0) && (piVar5[1] != 0)) {
    local_6 = 0;
    local_4 = 0;
    iVar3 = (*(int *)(param_1 + 0x10) - *(int *)(param_1 + 0xc)) + -1;
    local_8 = *(int *)(param_1 + 0x10);
    if (local_8 <= iVar3) {
      while( true ) {
        uVar1 = *(uint *)((int)*(undefined4 *)param_4 + local_8 * 2);
        bVar9 = CARRY2(local_6,uVar1);
        local_6 = local_6 + uVar1;
        local_4 = local_4 + ((int)uVar1 >> 0xf) + (uint)bVar9;
        if (local_8 == iVar3) break;
        local_8 = local_8 + 1;
      }
    }
  }
  else {
    local_4 = param_3 >> 0xf;
    local_6 = FUN_1158_1633();
  }
  if (*param_4 != 0 || piVar5[1] != 0) {
    FUN_10f8_1345(param_3,*(undefined2 *)(param_1 + 0xc),*(undefined2 *)(param_1 + 0xe),
                  *(undefined2 *)(param_1 + 0x10),*(undefined2 *)(param_1 + 0x12),piVar5,uVar8);
  }
  *param_5 = uVar2;
  ((uint *)param_5)[1] = uVar4;
  uVar7 = (undefined2)((ulong)param_2 >> 0x10);
  puVar6 = (uint *)param_2;
  if ((*(int *)(param_1 + 0x12) < (int)puVar6[1]) ||
     ((*(int *)(param_1 + 0x12) <= (int)puVar6[1] && (*(uint *)(param_1 + 0x10) <= *param_2)))) {
    if (*(int *)(param_1 + 0xe) < 0) {
      iVar3 = (*(int *)(param_1 + 0x12) - *(int *)(param_1 + 0xe)) -
              (uint)(*(uint *)(param_1 + 0x10) < *(uint *)(param_1 + 0xc));
      if (((int)puVar6[1] < iVar3) ||
         (((int)puVar6[1] <= iVar3 &&
          (*param_2 < *(uint *)(param_1 + 0x10) - *(uint *)(param_1 + 0xc))))) {
        uVar2 = *(uint *)(param_1 + 0x12);
        *param_2 = *(uint *)(param_1 + 0x10);
        puVar6[1] = uVar2;
        goto LAB_10f8_2149;
      }
    }
    uVar4 = *(uint *)(param_1 + 0xc);
    iVar3 = *(int *)(param_1 + 0xe);
    uVar2 = *param_2;
    *param_2 = *param_2 + uVar4;
    puVar6[1] = puVar6[1] + iVar3 + (uint)CARRY2(uVar2,uVar4);
  }
LAB_10f8_2149:
  return CONCAT22(local_4,local_6);
}



/* ---- FUN_10f8_23b3 @ 10f8:23b3  (78 octets) ---- */

void __stdcall16far
FUN_10f8_23b3(undefined4 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4,
             undefined2 param_5,undefined2 param_6,undefined2 param_7,undefined2 param_8,
             undefined2 param_9,undefined4 param_10)

{
  undefined2 unaff_SS;
  undefined2 local_12;
  undefined2 local_10;
  undefined2 local_e;
  undefined2 local_c;
  undefined2 local_a;
  undefined2 local_8;
  undefined2 local_6;
  undefined2 local_4;
  
  local_12 = param_8;
  local_10 = param_9;
  local_a = param_4;
  local_8 = param_5;
  local_e = param_6;
  local_c = param_7;
  local_6 = param_2;
  local_4 = param_3;
  FUN_10f8_4497((int)param_1,(int)((ulong)param_1 >> 0x10),0,(int)param_10,
                (int)((ulong)param_10 >> 0x10),&local_12,unaff_SS);
  return;
}



/* ---- FUN_10f8_2401 @ 10f8:2401  (35 octets) ---- */

void __stdcall16far FUN_10f8_2401(undefined4 param_1)

{
  int iVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  FUN_1138_4f42(iVar1,uVar2);
  if ((*(byte *)(iVar1 + 0x109) & 0x20) == 0) {
    FUN_10f8_2532(iVar1,uVar2);
  }
  return;
}



/* ---- FUN_10f8_2424 @ 10f8:2424  (59 octets) ---- */

void __stdcall16far
FUN_10f8_2424(undefined4 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4,
             undefined2 param_5,undefined4 param_6)

{
  undefined2 unaff_SS;
  undefined *puVar1;
  undefined local_a [8];
  
  puVar1 = local_a;
  FUN_10f8_23b3((int)param_1,(int)((ulong)param_1 >> 0x10),param_2,param_3,param_4,param_5,param_2,
                param_3,param_4,param_5);
  FUN_1158_161b(8,(int)param_6,(int)((ulong)param_6 >> 0x10),puVar1,unaff_SS);
  return;
}



/* ---- FUN_10f8_245f @ 10f8:245f  (15 octets) ---- */

undefined __stdcall16far FUN_10f8_245f(void)

{
  return 1;
}



/* ---- FUN_10f8_246e @ 10f8:246e  (15 octets) ---- */

undefined __stdcall16far FUN_10f8_246e(void)

{
  return 1;
}



/* ---- FUN_10f8_247d @ 10f8:247d  (22 octets) ---- */

undefined __stdcall16far FUN_10f8_247d(undefined4 param_1)

{
  return *(undefined *)((int)param_1 + 0xe5);
}



/* ---- FUN_10f8_2493 @ 10f8:2493  (108 octets) ---- */

undefined2 __stdcall16far FUN_10f8_2493(undefined4 param_1)

{
  char cVar1;
  undefined2 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  
  iVar4 = (int)((ulong)param_1 >> 0x10);
  iVar3 = (int)param_1;
  if (((((*(uint *)(iVar3 + 0x108) & 0x1400) != 0x400) || (*(char *)(iVar3 + 0x13c) == '\0')) ||
      ((*(byte *)(iVar3 + 0x18) & 0x10) != 0)) ||
     (cVar1 = FUN_1138_64fa(iVar3,iVar4), cVar1 == '\0')) {
    return 0;
  }
  if ((*(byte *)(iVar3 + 0x109) & 0x20) == 0) {
    uVar5 = FUN_1140_1801(iVar3,iVar4);
    uVar2 = (undefined2)((ulong)uVar5 >> 0x10);
    if (*(int *)((int)uVar5 + 0xe6) != iVar4) {
      return 0;
    }
    if (*(int *)((int)uVar5 + 0xe4) != iVar3) {
      return 0;
    }
  }
  return 1;
}



/* ---- FUN_10f8_24ff @ 10f8:24ff  (14 octets) ---- */

void __stdcall16far FUN_10f8_24ff(void)

{
  undefined *param_1;
  
  *param_1 = 0;
  return;
}



/* ---- FUN_10f8_250d @ 10f8:250d  (14 octets) ---- */

void __stdcall16far FUN_10f8_250d(void)

{
  undefined *param_1;
  
  *param_1 = 0;
  return;
}



/* ---- FUN_10f8_251b @ 10f8:251b  (7 octets) ---- */

void __stdcall16far FUN_10f8_251b(void)

{
  return;
}



/* ---- FUN_10f8_2522 @ 10f8:2522  (16 octets) ---- */

undefined2 __stdcall16far FUN_10f8_2522(void)

{
  return 0;
}



/* ---- FUN_10f8_2532 @ 10f8:2532  (23 octets) ---- */

void __stdcall16far FUN_10f8_2532(undefined4 param_1)

{
  undefined2 uVar1;
  
  uVar1 = (undefined2)((ulong)param_1 >> 0x10);
  *(undefined *)((int)param_1 + 0x13c) = 0;
  FUN_10f8_761b((int)param_1,uVar1);
  return;
}



/* ---- FUN_10f8_2549 @ 10f8:2549  (23 octets) ---- */

void __stdcall16far FUN_10f8_2549(undefined4 param_1)

{
  undefined2 uVar1;
  
  uVar1 = (undefined2)((ulong)param_1 >> 0x10);
  *(undefined *)((int)param_1 + 0x13c) = 1;
  FUN_10f8_77c1((int)param_1,uVar1);
  return;
}



/* ---- FUN_10f8_2560 @ 10f8:2560  (63 octets) ---- */

void __stdcall16far FUN_10f8_2560(undefined4 param_1,undefined param_2)

{
  int iVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  FUN_10f8_2549(iVar1,uVar2);
  if (*(int *)(iVar1 + 0x12f) != 0 || *(int *)(iVar1 + 0x131) != 0) {
    FUN_1138_62b9((int)*(undefined4 *)(iVar1 + 0x12f),
                  (int)((ulong)*(undefined4 *)(iVar1 + 0x12f) >> 0x10));
    POSTMESSAGE(0x1138,0,0,param_2,0x102);
  }
  return;
}



/* ---- FUN_10f8_259f @ 10f8:259f  (45 octets) ---- */

void __stdcall16far FUN_10f8_259f(undefined4 param_1)

{
  int iVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  *(undefined2 *)(iVar1 + 0x133) = 0xffff;
  *(undefined2 *)(iVar1 + 0x135) = 0xffff;
  *(undefined2 *)(iVar1 + 0x137) = 0xffff;
  *(undefined2 *)(iVar1 + 0x139) = 0xffff;
  FUN_10f8_77c1(iVar1,uVar2);
  return;
}



/* ---- FUN_10f8_25cc @ 10f8:25cc  (106 octets) ---- */

void __stdcall16far FUN_10f8_25cc(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined2 uVar2;
  int iVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  int iVar7;
  undefined2 local_4;
  
  uVar5 = (undefined2)((ulong)param_2 >> 0x10);
  uVar4 = (undefined2)param_2;
  FUN_1148_3684(uVar4,uVar5);
  uVar6 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = *(int *)((int)param_1 + 0xe6) + -1;
  if (-1 < iVar1) {
    local_4 = 0;
    while( true ) {
      iVar3 = local_4 >> 0xf;
      iVar7 = local_4;
      uVar2 = FUN_1148_3609(uVar4,uVar5);
      FUN_10f8_70c9((int)param_1,uVar6,uVar2,iVar7,iVar3);
      if (local_4 == iVar1) break;
      local_4 = local_4 + 1;
    }
  }
  FUN_1148_3697(uVar4,uVar5);
  return;
}



/* ---- FUN_10f8_2636 @ 10f8:2636  (106 octets) ---- */

void __stdcall16far FUN_10f8_2636(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined2 uVar2;
  int iVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  int iVar7;
  undefined2 local_4;
  
  uVar5 = (undefined2)((ulong)param_2 >> 0x10);
  uVar4 = (undefined2)param_2;
  FUN_1148_3684(uVar4,uVar5);
  uVar6 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = *(int *)((int)param_1 + 0x10a) + -1;
  if (-1 < iVar1) {
    local_4 = 0;
    while( true ) {
      iVar3 = local_4 >> 0xf;
      iVar7 = local_4;
      uVar2 = FUN_1148_3609(uVar4,uVar5);
      FUN_10f8_74a3((int)param_1,uVar6,uVar2,iVar7,iVar3);
      if (local_4 == iVar1) break;
      local_4 = local_4 + 1;
    }
  }
  FUN_1148_3697(uVar4,uVar5);
  return;
}



/* ---- FUN_10f8_26a0 @ 10f8:26a0  (108 octets) ---- */

void __stdcall16far FUN_10f8_26a0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined2 local_4;
  
  uVar4 = (undefined2)((ulong)param_2 >> 0x10);
  uVar3 = (undefined2)param_2;
  FUN_1148_456d(uVar3,uVar4);
  uVar5 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = *(int *)((int)param_1 + 0xe6) + -1;
  if (-1 < iVar1) {
    local_4 = 0;
    while( true ) {
      iVar2 = FUN_10f8_6e30((int)param_1,uVar5,local_4,local_4 >> 0xf);
      FUN_1148_44cb(uVar3,uVar4,iVar2,iVar2 >> 0xf);
      if (local_4 == iVar1) break;
      local_4 = local_4 + 1;
    }
  }
  FUN_1148_4580(uVar3,uVar4);
  return;
}



/* ---- FUN_10f8_270c @ 10f8:270c  (108 octets) ---- */

void __stdcall16far FUN_10f8_270c(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined2 local_4;
  
  uVar4 = (undefined2)((ulong)param_2 >> 0x10);
  uVar3 = (undefined2)param_2;
  FUN_1148_456d(uVar3,uVar4);
  uVar5 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = *(int *)((int)param_1 + 0x10a) + -1;
  if (-1 < iVar1) {
    local_4 = 0;
    while( true ) {
      iVar2 = FUN_10f8_6e8b((int)param_1,uVar5,local_4,local_4 >> 0xf);
      FUN_1148_44cb(uVar3,uVar4,iVar2,iVar2 >> 0xf);
      if (local_4 == iVar1) break;
      local_4 = local_4 + 1;
    }
  }
  FUN_1148_4580(uVar3,uVar4);
  return;
}



/* ---- FUN_10f8_2836 @ 10f8:2836  (7 octets) ---- */

void __stdcall16far FUN_10f8_2836(void)

{
  return;
}



/* ---- FUN_10f8_283d @ 10f8:283d  (7 octets) ---- */

void __stdcall16far FUN_10f8_283d(void)

{
  return;
}



/* ---- FUN_10f8_2844 @ 10f8:2844  (61 octets) ---- */

void __stdcall16far
FUN_10f8_2844(undefined4 param_1,undefined2 param_2,undefined2 param_3,undefined4 param_4)

{
  undefined2 uVar1;
  undefined2 unaff_SS;
  undefined *puVar2;
  undefined local_26 [8];
  undefined local_1e [28];
  
  uVar1 = (undefined2)((ulong)param_1 >> 0x10);
  FUN_10f8_344f((int)param_1,uVar1,local_1e,unaff_SS);
  puVar2 = local_26;
  FUN_10f8_3226((int)param_1,uVar1,local_1e,unaff_SS,param_2,param_3);
  FUN_1158_161b(8,(int)param_4,(int)((ulong)param_4 >> 0x10),puVar2,unaff_SS);
  return;
}



/* ---- FUN_10f8_2881 @ 10f8:2881  (15 octets) ---- */

undefined __stdcall16far FUN_10f8_2881(void)

{
  return 1;
}



/* ---- FUN_10f8_2890 @ 10f8:2890  (7 octets) ---- */

void __stdcall16far FUN_10f8_2890(void)

{
  return;
}



/* ---- FUN_10f8_2897 @ 10f8:2897  (96 octets) ---- */

int __stdcall16far FUN_10f8_2897(undefined4 param_1,undefined2 param_2,undefined2 param_3)

{
  undefined2 in_AX;
  byte bVar1;
  byte extraout_AH;
  int iVar2;
  undefined2 uVar3;
  undefined2 unaff_SS;
  undefined local_2a [2];
  undefined local_28 [2];
  undefined local_26 [5];
  char local_21;
  undefined local_20 [30];
  
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  iVar2 = (int)param_1;
  local_21 = *(char *)(iVar2 + 0x13f);
  bVar1 = (byte)((uint)in_AX >> 8);
  if (local_21 == '\0') {
    FUN_10f8_3620(iVar2,uVar3,local_20,unaff_SS);
    FUN_10f8_3836(iVar2,uVar3,local_20,unaff_SS,local_2a,unaff_SS,local_28,unaff_SS,local_26,
                  unaff_SS,&local_21,unaff_SS,param_2,param_3);
    bVar1 = extraout_AH;
  }
  iVar2 = (uint)bVar1 * 0x100;
  if (local_21 != '\0') {
    iVar2 = iVar2 + 1;
  }
  return iVar2;
}



/* ---- FUN_10f8_28f7 @ 10f8:28f7  (81 octets) ---- */

void __stdcall16far FUN_10f8_28f7(undefined4 param_1)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 unaff_SS;
  undefined *puVar3;
  undefined local_a [8];
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  if ((*(char *)(iVar1 + 0x13c) != '\0') &&
     (*(int *)(iVar1 + 0x12f) != 0 || *(int *)(iVar1 + 0x131) != 0)) {
    puVar3 = local_a;
    FUN_10f8_2424(iVar1,uVar2,*(undefined2 *)(iVar1 + 0xf6),*(undefined2 *)(iVar1 + 0xf8),
                  *(undefined2 *)(iVar1 + 0xf2),*(undefined2 *)(iVar1 + 0xf4));
    FUN_10f8_1e41((int)*(undefined4 *)(iVar1 + 0x12f),
                  (int)((ulong)*(undefined4 *)(iVar1 + 0x12f) >> 0x10),puVar3,unaff_SS);
  }
  return;
}



/* ---- FUN_10f8_2948 @ 10f8:2948  (274 octets) ---- */

void FUN_10f8_2948(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined2 uVar4;
  undefined2 unaff_SS;
  bool bVar5;
  undefined2 local_8;
  undefined2 local_6;
  undefined2 local_4;
  
  uVar1 = *(undefined4 *)(*(int *)(param_1 + 4) + 6);
  uVar1 = *(undefined4 *)((int)uVar1 + 0xd8);
  uVar4 = (undefined2)((ulong)uVar1 >> 0x10);
  iVar2 = (int)uVar1;
  if (*(int *)(*(int *)(param_1 + 4) + -0x22) != 0) {
    local_8 = *(uint *)(param_1 + 0x1a);
    local_6 = *(int *)(param_1 + 0x1c);
    if (*(char *)(param_1 + 0x20) == '\0') {
      FUN_1128_13da((int)*(undefined4 *)(iVar2 + 0xb),
                    (int)((ulong)*(undefined4 *)(iVar2 + 0xb) >> 0x10),*(undefined2 *)(param_1 + 6),
                    *(undefined2 *)(param_1 + 8));
    }
    else {
      FUN_1128_13da((int)*(undefined4 *)(iVar2 + 0xb),
                    (int)((ulong)*(undefined4 *)(iVar2 + 0xb) >> 0x10),*(undefined2 *)(param_1 + 10)
                    ,*(undefined2 *)(param_1 + 0xc));
    }
    uVar1 = *(undefined4 *)(*(int *)(param_1 + 4) + 6);
    local_4 = FUN_10f8_6e30((int)uVar1,(int)((ulong)uVar1 >> 0x10),local_8,local_6);
    local_4 = (*(uint *)(*(int *)(param_1 + 4) + -0x22) >> 1) + *(int *)(param_1 + 0x14) + local_4;
    do {
      FUN_1128_1db8(iVar2,uVar4,*(undefined2 *)(param_1 + 0x12),local_4);
      FUN_1128_1d7b(iVar2,uVar4,*(undefined2 *)(param_1 + 0xe),local_4);
      bVar5 = 0xfffe < local_8;
      local_8 = local_8 + 1;
      local_6 = local_6 + (uint)bVar5;
      uVar1 = *(undefined4 *)(*(int *)(param_1 + 4) + 6);
      iVar3 = FUN_10f8_6e30((int)uVar1,(int)((ulong)uVar1 >> 0x10),local_8,local_6);
      local_4 = local_4 + iVar3 + *(int *)(*(int *)(param_1 + 4) + -0x22);
    } while (local_4 <= *(int *)(param_1 + 0x10));
  }
  return;
}



/* ---- FUN_10f8_2a5a @ 10f8:2a5a  (275 octets) ---- */

void FUN_10f8_2a5a(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined2 uVar4;
  undefined2 unaff_SS;
  bool bVar5;
  undefined2 local_8;
  undefined2 local_6;
  undefined2 local_4;
  
  uVar1 = *(undefined4 *)(*(int *)(param_1 + 4) + 6);
  uVar1 = *(undefined4 *)((int)uVar1 + 0xd8);
  uVar4 = (undefined2)((ulong)uVar1 >> 0x10);
  iVar2 = (int)uVar1;
  if (*(int *)(*(int *)(param_1 + 4) + -0x20) != 0) {
    local_8 = *(uint *)(param_1 + 0x16);
    local_6 = *(int *)(param_1 + 0x18);
    if (*(char *)(param_1 + 0x1e) == '\0') {
      FUN_1128_13da((int)*(undefined4 *)(iVar2 + 0xb),
                    (int)((ulong)*(undefined4 *)(iVar2 + 0xb) >> 0x10),*(undefined2 *)(param_1 + 6),
                    *(undefined2 *)(param_1 + 8));
    }
    else {
      FUN_1128_13da((int)*(undefined4 *)(iVar2 + 0xb),
                    (int)((ulong)*(undefined4 *)(iVar2 + 0xb) >> 0x10),*(undefined2 *)(param_1 + 10)
                    ,*(undefined2 *)(param_1 + 0xc));
    }
    uVar1 = *(undefined4 *)(*(int *)(param_1 + 4) + 6);
    local_4 = FUN_10f8_6e8b((int)uVar1,(int)((ulong)uVar1 >> 0x10),local_8,local_6);
    local_4 = (*(uint *)(*(int *)(param_1 + 4) + -0x20) >> 1) + *(int *)(param_1 + 0x12) + local_4;
    do {
      FUN_1128_1db8(iVar2,uVar4,local_4,*(undefined2 *)(param_1 + 0x14));
      FUN_1128_1d7b(iVar2,uVar4,local_4,*(undefined2 *)(param_1 + 0x10));
      bVar5 = 0xfffe < local_8;
      local_8 = local_8 + 1;
      local_6 = local_6 + (uint)bVar5;
      uVar1 = *(undefined4 *)(*(int *)(param_1 + 4) + 6);
      iVar3 = FUN_10f8_6e8b((int)uVar1,(int)((ulong)uVar1 >> 0x10),local_8,local_6);
      local_4 = local_4 + iVar3 + *(int *)(*(int *)(param_1 + 4) + -0x20);
    } while (local_4 <= *(int *)(param_1 + 0xe));
  }
  return;
}



/* ---- FUN_10f8_2b6d @ 10f8:2b6d  (102 octets) ---- */

void FUN_10f8_2b6d(int param_1)

{
  undefined4 uVar1;
  undefined2 unaff_SS;
  int param_2;
  int param_3;
  int param_4;
  int param_5;
  char param_6;
  
  if ((((*(int *)(param_1 + -0x22) != 0) || (*(int *)(param_1 + -0x20) != 0)) &&
      (param_5 != param_3)) && (param_4 != param_2)) {
    uVar1 = *(undefined4 *)((int)*(undefined4 *)(param_1 + 6) + 0xd8);
    uVar1 = *(undefined4 *)((int)uVar1 + 0xb);
    FUN_1128_14f5((int)uVar1,(int)((ulong)uVar1 >> 0x10),*(undefined2 *)(param_1 + -0x22));
    if (param_6 == '\0') {
      FUN_10f8_2948(&stack0xfffe);
      FUN_10f8_2a5a(&stack0xfffe);
    }
    else {
      FUN_10f8_2a5a(&stack0xfffe);
      FUN_10f8_2948(&stack0xfffe);
    }
  }
  return;
}



/* ---- FUN_10f8_3226 @ 10f8:3226  (553 octets) ---- */

void __stdcall16far
FUN_10f8_3226(undefined4 param_1,int *param_2,int param_3,int param_4,uint *param_5)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  uint *puVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  bool bVar8;
  int local_10;
  uint local_e;
  uint local_c;
  uint local_a;
  uint local_8;
  uint local_6;
  uint local_4;
  
  uVar5 = (undefined2)((ulong)param_2 >> 0x10);
  piVar2 = (int *)param_2;
  iVar3 = (int)param_1;
  uVar6 = (undefined2)((ulong)param_1 >> 0x10);
  if (param_4 < piVar2[2]) {
    local_a = 0;
    local_8 = 0;
    local_e = *(int *)(iVar3 + 0xfe) - 1;
    local_c = (int)local_e >> 0xf;
    local_10 = 0;
  }
  else {
    local_a = *(uint *)(iVar3 + 0x113);
    local_8 = *(uint *)(iVar3 + 0x115);
    local_e = *(int *)(iVar3 + 0xe6) - 1;
    local_c = *(int *)(iVar3 + 0xe8) - (uint)(*(int *)(iVar3 + 0xe6) == 0);
    local_10 = piVar2[2];
  }
  puVar4 = (uint *)param_5;
  uVar7 = (undefined2)((ulong)param_5 >> 0x10);
  if (((int)local_8 <= (int)local_c) && (((int)local_8 < (int)local_c || (local_a <= local_e)))) {
    local_6 = local_a;
    local_4 = local_8;
    while( true ) {
      *param_5 = local_6;
      puVar4[1] = local_4;
      iVar1 = FUN_10f8_6e30(iVar3,uVar6,local_6,local_4);
      local_10 = local_10 + iVar1 + *param_2;
      if ((param_4 < local_10) || ((local_4 == local_c && (local_6 == local_e)))) break;
      bVar8 = 0xfffe < local_6;
      local_6 = local_6 + 1;
      local_4 = local_4 + bVar8;
    }
  }
  if (((int)local_c < (int)local_4) || (((int)local_c <= (int)local_4 && (local_e < local_6)))) {
    *param_5 = 0xffff;
    puVar4[1] = 0xffff;
  }
  if (param_3 < piVar2[3]) {
    local_a = 0;
    local_8 = 0;
    local_e = *(int *)(iVar3 + 0x100) - 1;
    local_c = (int)local_e >> 0xf;
    local_10 = 0;
  }
  else {
    local_a = *(uint *)(iVar3 + 0x117);
    local_8 = *(uint *)(iVar3 + 0x119);
    local_e = *(int *)(iVar3 + 0x10a) - 1;
    local_c = *(int *)(iVar3 + 0x10c) - (uint)(*(int *)(iVar3 + 0x10a) == 0);
    local_10 = piVar2[3];
  }
  if (((int)local_8 <= (int)local_c) && (((int)local_8 < (int)local_c || (local_a <= local_e)))) {
    local_6 = local_a;
    local_4 = local_8;
    while( true ) {
      puVar4[2] = local_6;
      puVar4[3] = local_4;
      iVar1 = FUN_10f8_6e8b(iVar3,uVar6,local_6,local_4);
      local_10 = local_10 + iVar1 + piVar2[1];
      if ((param_3 < local_10) || ((local_4 == local_c && (local_6 == local_e)))) break;
      bVar8 = 0xfffe < local_6;
      local_6 = local_6 + 1;
      local_4 = local_4 + bVar8;
    }
  }
  if (((int)local_c < (int)local_4) || (((int)local_c <= (int)local_4 && (local_e < local_6)))) {
    puVar4[2] = 0xffff;
    puVar4[3] = 0xffff;
  }
  if ((puVar4[3] == 0xffff) && (puVar4[2] == 0xffff)) {
    *param_5 = 0xffff;
    puVar4[1] = 0xffff;
  }
  else if ((puVar4[1] == 0xffff) && (*param_5 == 0xffff)) {
    puVar4[2] = 0xffff;
    puVar4[3] = 0xffff;
  }
  return;
}



/* ---- FUN_10f8_344f @ 10f8:344f  (44 octets) ---- */

void __stdcall16far FUN_10f8_344f(undefined4 param_1,undefined4 param_2)

{
  undefined2 uVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  
  uVar5 = (undefined2)((ulong)param_2 >> 0x10);
  uVar3 = (undefined2)param_2;
  uVar6 = (undefined2)((ulong)param_1 >> 0x10);
  uVar4 = (undefined2)param_1;
  uVar1 = FUN_1138_18a9(uVar4,uVar6);
  uVar2 = FUN_1138_18f4(uVar4,uVar6);
  FUN_10f8_347b(uVar4,uVar6,uVar2,uVar1,uVar3,uVar5);
  return;
}



/* ---- FUN_10f8_347b @ 10f8:347b  (421 octets) ---- */

void __stdcall16far FUN_10f8_347b(undefined4 param_1,int param_2,int param_3,int *param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  bool bVar8;
  uint local_6;
  int local_4;
  
  uVar6 = (undefined2)((ulong)param_4 >> 0x10);
  piVar4 = (int *)param_4;
  uVar7 = (undefined2)((ulong)param_1 >> 0x10);
  iVar5 = (int)param_1;
  FUN_10f8_3620(iVar5,uVar7,piVar4,uVar6);
  piVar4[6] = param_2;
  piVar4[7] = param_3;
  piVar4[4] = piVar4[2];
  iVar3 = *(int *)(iVar5 + 0x115);
  piVar4[8] = *(int *)(iVar5 + 0x113);
  piVar4[9] = iVar3;
  uVar1 = *(int *)(iVar5 + 0xe6) - 1;
  iVar3 = *(int *)(iVar5 + 0xe8) - (uint)(*(int *)(iVar5 + 0xe6) == 0);
  local_6 = *(uint *)(iVar5 + 0x113);
  local_4 = *(int *)(iVar5 + 0x115);
  if ((local_4 <= iVar3) && ((local_4 < iVar3 || (local_6 <= uVar1)))) {
    while( true ) {
      iVar2 = FUN_10f8_6e30(iVar5,uVar7,local_6,local_4);
      piVar4[4] = piVar4[4] + iVar2 + *param_4;
      if (piVar4[7] + *param_4 < piVar4[4]) break;
      piVar4[8] = local_6;
      piVar4[9] = local_4;
      piVar4[0xc] = piVar4[4];
      if ((local_4 == iVar3) && (local_6 == uVar1)) goto LAB_10f8_355e;
      bVar8 = 0xfffe < local_6;
      local_6 = local_6 + 1;
      local_4 = local_4 + (uint)bVar8;
    }
    piVar4[4] = piVar4[7];
  }
LAB_10f8_355e:
  piVar4[5] = piVar4[3];
  iVar3 = *(int *)(iVar5 + 0x119);
  piVar4[10] = *(int *)(iVar5 + 0x117);
  piVar4[0xb] = iVar3;
  uVar1 = *(int *)(iVar5 + 0x10a) - 1;
  iVar3 = *(int *)(iVar5 + 0x10c) - (uint)(*(int *)(iVar5 + 0x10a) == 0);
  local_6 = *(uint *)(iVar5 + 0x117);
  local_4 = *(int *)(iVar5 + 0x119);
  if ((local_4 <= iVar3) && ((local_4 < iVar3 || (local_6 <= uVar1)))) {
    while( true ) {
      iVar2 = FUN_10f8_6e8b(iVar5,uVar7,local_6,local_4);
      piVar4[5] = piVar4[5] + iVar2 + piVar4[1];
      if (piVar4[6] + piVar4[1] < piVar4[5]) break;
      piVar4[10] = local_6;
      piVar4[0xb] = local_4;
      piVar4[0xd] = piVar4[5];
      if ((local_4 == iVar3) && (local_6 == uVar1)) {
        return;
      }
      bVar8 = 0xfffe < local_6;
      local_6 = local_6 + 1;
      local_4 = local_4 + (uint)bVar8;
    }
    piVar4[5] = piVar4[6];
  }
  return;
}



/* ---- FUN_10f8_3620 @ 10f8:3620  (225 octets) ---- */

void __stdcall16far FUN_10f8_3620(undefined4 param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  int local_4;
  
  uVar5 = (undefined2)((ulong)param_2 >> 0x10);
  piVar1 = (int *)param_2;
  *param_2 = 0;
  uVar6 = (undefined2)((ulong)param_1 >> 0x10);
  iVar4 = (int)param_1;
  if ((*(uint *)(iVar4 + 0x108) & 5) != 0) {
    *param_2 = *(int *)(iVar4 + 0x106);
  }
  piVar1[1] = 0;
  if ((*(uint *)(iVar4 + 0x108) & 10) != 0) {
    piVar1[1] = *(int *)(iVar4 + 0x106);
  }
  piVar1[2] = 0;
  iVar2 = *(int *)(iVar4 + 0xfe) + -1;
  if (-1 < iVar2) {
    local_4 = 0;
    while( true ) {
      iVar3 = FUN_10f8_6e30(iVar4,uVar6,local_4,local_4 >> 0xf);
      piVar1[2] = piVar1[2] + iVar3 + *param_2;
      if (local_4 == iVar2) break;
      local_4 = local_4 + 1;
    }
  }
  piVar1[3] = 0;
  iVar2 = *(int *)(iVar4 + 0x100) + -1;
  if (-1 < iVar2) {
    local_4 = 0;
    while( true ) {
      iVar3 = FUN_10f8_6e8b(iVar4,uVar6,local_4,local_4 >> 0xf);
      piVar1[3] = piVar1[3] + iVar3 + piVar1[1];
      if (local_4 == iVar2) break;
      local_4 = local_4 + 1;
    }
  }
  return;
}



/* ---- FUN_10f8_3701 @ 10f8:3701  (309 octets) ---- */

void __stdcall16far FUN_10f8_3701(undefined4 param_1,int *param_2,uint *param_3,uint *param_4)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  uint *puVar5;
  uint *puVar6;
  int iVar7;
  undefined2 uVar8;
  undefined2 uVar9;
  undefined2 uVar10;
  undefined2 uVar11;
  bool bVar12;
  uint local_8;
  uint local_6;
  int local_4;
  
  uVar8 = (undefined2)((ulong)param_2 >> 0x10);
  piVar2 = (int *)param_2;
  uVar9 = (undefined2)((ulong)param_3 >> 0x10);
  puVar5 = (uint *)param_3;
  uVar10 = (undefined2)((ulong)param_4 >> 0x10);
  puVar6 = (uint *)param_4;
  FUN_1158_161b(8,puVar6,uVar10,puVar5,uVar9);
  local_4 = piVar2[7] + *param_2;
  uVar11 = (undefined2)((ulong)param_1 >> 0x10);
  iVar7 = (int)param_1;
  uVar1 = *(uint *)(iVar7 + 0xfe);
  uVar4 = (int)uVar1 >> 0xf;
  local_8 = *param_3;
  local_6 = puVar5[1];
  if (((int)uVar4 <= (int)local_6) && (((int)uVar4 < (int)local_6 || (uVar1 <= local_8)))) {
    while( true ) {
      iVar3 = FUN_10f8_6e30(iVar7,uVar11,local_8,local_6);
      local_4 = local_4 - (iVar3 + *param_2);
      if (local_4 < piVar2[2]) break;
      *param_4 = local_8;
      puVar6[1] = local_6;
      if ((local_6 == uVar4) && (local_8 == uVar1)) break;
      bVar12 = local_8 == 0;
      local_8 = local_8 - 1;
      local_6 = local_6 - bVar12;
    }
  }
  local_4 = piVar2[6] + piVar2[1];
  uVar1 = *(uint *)(iVar7 + 0x100);
  uVar4 = (int)uVar1 >> 0xf;
  local_8 = puVar5[2];
  local_6 = puVar5[3];
  if (((int)uVar4 <= (int)local_6) && (((int)uVar4 < (int)local_6 || (uVar1 <= local_8)))) {
    while( true ) {
      iVar3 = FUN_10f8_6e8b(iVar7,uVar11,local_8,local_6);
      local_4 = local_4 - (iVar3 + piVar2[1]);
      if (local_4 < piVar2[3]) break;
      puVar6[2] = local_8;
      puVar6[3] = local_6;
      if ((local_6 == uVar4) && (local_8 == uVar1)) {
        return;
      }
      bVar12 = local_8 == 0;
      local_8 = local_8 - 1;
      local_6 = local_6 - bVar12;
    }
  }
  return;
}



/* ---- FUN_10f8_3836 @ 10f8:3836  (670 octets) ---- */

void __stdcall16far
FUN_10f8_3836(undefined4 param_1,int *param_2,int *param_3,int *param_4,int *param_5,
             undefined *param_6,int param_7,int param_8)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  undefined2 uVar8;
  int local_c;
  uint local_a;
  int local_8;
  int local_6;
  uint local_4;
  
  *param_6 = 0;
  uVar6 = (undefined2)((ulong)param_5 >> 0x10);
  piVar4 = (int *)param_5;
  *param_5 = -1;
  piVar4[1] = -1;
  uVar7 = (undefined2)((ulong)param_1 >> 0x10);
  iVar5 = (int)param_1;
  local_4 = *(uint *)(iVar5 + 0x108);
  if ((*(byte *)(iVar5 + 0x18) & 0x10) != 0) {
    local_4 = local_4 | 0xc0;
  }
  if ((local_4 & 0xc0) != 0) {
    uVar8 = (undefined2)((ulong)param_2 >> 0x10);
    piVar1 = (int *)param_2;
    iVar2 = FUN_1138_18f4(iVar5,uVar7);
    piVar1[6] = iVar2;
    iVar2 = FUN_1138_18a9(iVar5,uVar7);
    piVar1[7] = iVar2;
    if ((piVar1[2] < param_8) && ((local_4 & 0x80) != 0)) {
      if (param_7 < piVar1[3]) {
        local_8 = piVar1[2];
        local_c = *param_2;
        local_a = 0;
        if (local_c < 7) {
          local_c = 7;
          local_a = 7U - *param_2 >> 1;
        }
        iVar3 = *(int *)(iVar5 + 0xe6) + -1;
        iVar2 = *(int *)(iVar5 + 0x113);
        if (*(int *)(iVar5 + 0x113) <= iVar3) {
          while( true ) {
            local_6 = iVar2;
            iVar2 = FUN_10f8_6e30(iVar5,uVar7,local_6,local_6 >> 0xf);
            local_8 = local_8 + iVar2;
            if (piVar1[7] < local_8) break;
            if (((int)(local_8 - local_a) <= param_8) &&
               (param_8 <= (int)((local_8 - local_a) + local_c))) {
              *param_6 = 3;
              *param_4 = local_8;
              *param_3 = local_8 - param_8;
              *param_5 = local_6;
              piVar4[1] = local_6 >> 0xf;
              return;
            }
            local_8 = local_8 + *param_2;
            if (local_6 == iVar3) break;
            iVar2 = local_6 + 1;
          }
        }
        if (((int)(piVar1[7] - local_a) <= param_8) && (param_8 <= piVar1[7])) {
          *param_6 = 3;
          *param_4 = piVar1[7];
          *param_3 = piVar1[7] - param_8;
          *param_5 = local_6;
          piVar4[1] = local_6 >> 0xf;
        }
      }
    }
    else if ((piVar1[3] < param_7) && (((local_4 & 0x40) != 0 && (param_8 < piVar1[2])))) {
      local_8 = piVar1[3];
      local_c = piVar1[1];
      local_a = 0;
      if (local_c < 7) {
        local_c = 7;
        local_a = 7U - *param_2 >> 1;
      }
      iVar2 = *(int *)(iVar5 + 0x10a) + -1;
      local_6 = *(int *)(iVar5 + 0x117);
      if (local_6 <= iVar2) {
        while( true ) {
          iVar3 = FUN_10f8_6e8b(iVar5,uVar7,local_6,local_6 >> 0xf);
          local_8 = local_8 + iVar3;
          if (piVar1[6] < local_8) break;
          if (((int)(local_8 - local_a) <= param_7) &&
             (param_7 <= (int)((local_8 - local_a) + local_c))) {
            *param_6 = 2;
            *param_4 = local_8;
            *param_3 = local_8 - param_7;
            *param_5 = local_6;
            piVar4[1] = local_6 >> 0xf;
            return;
          }
          local_8 = local_8 + piVar1[1];
          if (local_6 == iVar2) {
            return;
          }
          local_6 = local_6 + 1;
        }
      }
    }
  }
  return;
}



/* ---- FUN_10f8_3ad4 @ 10f8:3ad4  (499 octets) ---- */

void FUN_10f8_3ad4(int param_1)

{
  int iVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined2 unaff_SS;
  int local_a;
  int local_8;
  int local_6;
  int local_4;
  
  uVar3 = (undefined2)((ulong)*(undefined4 *)(param_1 + 6) >> 0x10);
  iVar1 = (int)*(undefined4 *)(param_1 + 6);
  if (*(int *)(iVar1 + 0xea) != 0 || *(int *)(iVar1 + 0xec) != 0) {
    uVar4 = (undefined2)((ulong)*(undefined4 *)(param_1 + 6) >> 0x10);
    iVar2 = (int)*(undefined4 *)(param_1 + 6);
    FUN_10f8_1454(*(undefined2 *)(iVar2 + 0xfa),*(undefined2 *)(iVar2 + 0xe6),
                  *(undefined2 *)(iVar2 + 0xe8),iVar1 + 0xea,uVar3);
    uVar3 = (undefined2)((ulong)*(undefined4 *)(param_1 + 6) >> 0x10);
    iVar1 = (int)*(undefined4 *)(param_1 + 6);
    FUN_10f8_1454(1,*(undefined2 *)(iVar1 + 0xe6),*(undefined2 *)(iVar1 + 0xe8),
                  (int)*(undefined4 *)(param_1 + 6) + 0xee,
                  (int)((ulong)*(undefined4 *)(param_1 + 6) >> 0x10));
  }
  uVar3 = (undefined2)((ulong)*(undefined4 *)(param_1 + 6) >> 0x10);
  iVar1 = (int)*(undefined4 *)(param_1 + 6);
  if (*(int *)(iVar1 + 0x10e) != 0 || *(int *)(iVar1 + 0x110) != 0) {
    uVar4 = (undefined2)((ulong)*(undefined4 *)(param_1 + 6) >> 0x10);
    iVar2 = (int)*(undefined4 *)(param_1 + 6);
    FUN_10f8_1454(*(undefined2 *)(iVar2 + 0xfc),*(undefined2 *)(iVar2 + 0x10a),
                  *(undefined2 *)(iVar2 + 0x10c),iVar1 + 0x10e,uVar3);
  }
  FUN_1158_161b(8,&local_a,unaff_SS,(int)*(undefined4 *)(param_1 + 6) + 0xf2,
                (int)((ulong)*(undefined4 *)(param_1 + 6) >> 0x10));
  uVar3 = (undefined2)((ulong)*(undefined4 *)(param_1 + 6) >> 0x10);
  iVar1 = (int)*(undefined4 *)(param_1 + 6);
  if ((*(int *)(iVar1 + 0x10c) < *(int *)(iVar1 + 0xf8)) ||
     ((*(int *)(iVar1 + 0x10c) <= *(int *)(iVar1 + 0xf8) &&
      (*(uint *)(iVar1 + 0x10a) <= *(uint *)(iVar1 + 0xf6))))) {
    uVar3 = (undefined2)((ulong)*(undefined4 *)(param_1 + 6) >> 0x10);
    iVar2 = (int)*(undefined4 *)(param_1 + 6);
    iVar1 = *(int *)(iVar2 + 0x10a);
    local_6 = iVar1 + -1;
    local_4 = *(int *)(iVar2 + 0x10c) - (uint)(iVar1 == 0);
  }
  uVar3 = (undefined2)((ulong)*(undefined4 *)(param_1 + 6) >> 0x10);
  iVar1 = (int)*(undefined4 *)(param_1 + 6);
  if ((*(int *)(iVar1 + 0xe8) < *(int *)(iVar1 + 0xf4)) ||
     ((*(int *)(iVar1 + 0xe8) <= *(int *)(iVar1 + 0xf4) &&
      (*(uint *)(iVar1 + 0xe6) <= *(uint *)(iVar1 + 0xf2))))) {
    uVar3 = (undefined2)((ulong)*(undefined4 *)(param_1 + 6) >> 0x10);
    iVar2 = (int)*(undefined4 *)(param_1 + 6);
    iVar1 = *(int *)(iVar2 + 0xe6);
    local_a = iVar1 + -1;
    local_8 = *(int *)(iVar2 + 0xe8) - (uint)(iVar1 == 0);
  }
  uVar3 = (undefined2)((ulong)*(undefined4 *)(param_1 + 6) >> 0x10);
  iVar1 = (int)*(undefined4 *)(param_1 + 6);
  if ((((*(int *)(iVar1 + 0xf4) != local_8) || (*(int *)(iVar1 + 0xf2) != local_a)) ||
      (*(int *)(iVar1 + 0xf8) != local_4)) || (*(int *)(iVar1 + 0xf6) != local_6)) {
    FUN_10f8_4fd6((int)*(undefined4 *)(param_1 + 6),
                  (int)((ulong)*(undefined4 *)(param_1 + 6) >> 0x10),1,1,local_6,local_4,local_a,
                  local_8);
  }
  uVar3 = (undefined2)((ulong)*(undefined4 *)(param_1 + 6) >> 0x10);
  iVar1 = (int)*(undefined4 *)(param_1 + 6);
  if (((*(int *)(iVar1 + 0xde) != local_8) || (*(int *)(iVar1 + 0xdc) != local_a)) ||
     ((*(int *)(iVar1 + 0xe2) != local_4 || (*(int *)(iVar1 + 0xe0) != local_6)))) {
    FUN_10f8_4f25((int)*(undefined4 *)(param_1 + 6),
                  (int)((ulong)*(undefined4 *)(param_1 + 6) >> 0x10),&local_a,unaff_SS);
  }
  FUN_10f8_4882((int)*(undefined4 *)(param_1 + 6),(int)((ulong)*(undefined4 *)(param_1 + 6) >> 0x10)
               );
  FUN_10f8_5b86((int)*(undefined4 *)(param_1 + 6),(int)((ulong)*(undefined4 *)(param_1 + 6) >> 0x10)
               );
  FUN_1158_206a(0x10f8,(int)*(undefined4 *)(param_1 + 6),
                (int)((ulong)*(undefined4 *)(param_1 + 6) >> 0x10),*(undefined2 *)(param_1 + -8),
                *(undefined2 *)(param_1 + -6),*(undefined2 *)(param_1 + -4),
                *(undefined2 *)(param_1 + -2));
  return;
}



/* ---- FUN_10f8_3cd1 @ 10f8:3cd1  (191 octets) ---- */

void __stdcall16far
FUN_10f8_3cd1(undefined4 param_1,uint param_2,int param_3,uint param_4,int param_5)

{
  int iVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 uStack_12;
  
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  iVar2 = (int)param_1;
  *(uint *)(iVar2 + 0xe6) = param_4;
  *(int *)(iVar2 + 0xe8) = param_5;
  *(uint *)(iVar2 + 0x10a) = param_2;
  *(int *)(iVar2 + 0x10c) = param_3;
  iVar1 = (int)*(uint *)(iVar2 + 0xfe) >> 0xf;
  if ((param_5 < iVar1) || ((param_5 <= iVar1 && (param_4 < *(uint *)(iVar2 + 0xfe))))) {
    *(int *)(iVar2 + 0xfe) = param_4 - 1;
  }
  iVar1 = (int)*(uint *)(iVar2 + 0x100) >> 0xf;
  if ((param_3 < iVar1) || ((param_3 <= iVar1 && (param_2 < *(uint *)(iVar2 + 0x100))))) {
    *(int *)(iVar2 + 0x100) = param_2 - 1;
  }
  uStack_12 = DAT_1160_1858;
  DAT_1160_1858 = &uStack_12;
  FUN_10f8_3ad4(&stack0xfffe);
  DAT_1160_1858 = (undefined2 *)uStack_12;
  uStack_12 = 0x3dbd;
  FUN_10f8_4882();
  return;
}



/* ---- FUN_10f8_3dc1 @ 10f8:3dc1  (434 octets) ---- */

void __stdcall16far FUN_10f8_3dc1(undefined4 *param_1,uint *param_2)

{
  uint uVar1;
  undefined2 *puVar2;
  char cVar3;
  undefined4 *puVar4;
  uint *puVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  undefined2 unaff_SS;
  undefined *puVar8;
  undefined2 uVar9;
  undefined local_3a [8];
  uint *local_32;
  undefined local_2e [8];
  undefined2 local_26;
  undefined2 local_24;
  undefined2 local_22;
  undefined2 local_20;
  undefined local_1e [16];
  uint local_e;
  int local_c;
  uint local_a;
  int local_8;
  
  uVar6 = (undefined2)((ulong)param_1 >> 0x10);
  puVar4 = (undefined4 *)param_1;
  cVar3 = FUN_1138_64fa(puVar4,uVar6);
  if (cVar3 != '\0') {
    FUN_10f8_344f(puVar4,uVar6,local_1e,unaff_SS);
    uVar7 = (undefined2)((ulong)param_2 >> 0x10);
    puVar5 = (uint *)param_2;
    local_32 = param_2;
    if (((int)puVar5[1] <= local_c) && (((int)puVar5[1] < local_c || (*param_2 <= local_e)))) {
      if (((int)puVar5[3] <= local_8) && (((int)puVar5[3] < local_8 || (puVar5[2] <= local_a)))) {
        if ((*(int *)((int)puVar4 + 0x115) <= (int)puVar5[1]) &&
           ((*(int *)((int)puVar4 + 0x115) < (int)puVar5[1] ||
            (*(uint *)((int)puVar4 + 0x113) <= *param_2)))) {
          if (*(int *)((int)puVar4 + 0x119) <= (int)puVar5[3]) {
            if (*(int *)((int)puVar4 + 0x119) < (int)puVar5[3]) {
              return;
            }
            if (*(uint *)((int)puVar4 + 0x117) <= puVar5[2]) {
              return;
            }
          }
        }
      }
    }
    FUN_1158_161b(8,local_2e,unaff_SS,(int)puVar4 + 0x113,uVar6);
    puVar8 = local_3a;
    uVar9 = unaff_SS;
    FUN_10f8_3701(puVar4,uVar6,local_1e,unaff_SS,puVar5,uVar7);
    FUN_1158_161b(8,&local_26,unaff_SS,puVar8,uVar9);
    puVar2 = (undefined2 *)((int)*param_1 + 0x50);
    (*(code *)*puVar2)(0x1158,puVar4,uVar6);
    uVar7 = (undefined2)((ulong)local_32 >> 0x10);
    puVar5 = (uint *)local_32;
    if (((int)puVar5[1] < *(int *)((int)puVar4 + 0x115)) ||
       (((int)puVar5[1] <= *(int *)((int)puVar4 + 0x115) &&
        (*local_32 < *(uint *)((int)puVar4 + 0x113))))) {
      uVar1 = puVar5[1];
      *(uint *)((int)puVar4 + 0x113) = *local_32;
      *(uint *)((int)puVar4 + 0x115) = uVar1;
    }
    else if ((local_c < (int)puVar5[1]) || ((local_c <= (int)puVar5[1] && (local_e < *local_32)))) {
      *(undefined2 *)((int)puVar4 + 0x113) = local_26;
      *(undefined2 *)((int)puVar4 + 0x115) = local_24;
    }
    if (((int)puVar5[3] < *(int *)((int)puVar4 + 0x119)) ||
       (((int)puVar5[3] <= *(int *)((int)puVar4 + 0x119) &&
        (puVar5[2] < *(uint *)((int)puVar4 + 0x117))))) {
      uVar1 = puVar5[3];
      *(uint *)((int)puVar4 + 0x117) = puVar5[2];
      *(uint *)((int)puVar4 + 0x119) = uVar1;
    }
    else if ((local_8 < (int)puVar5[3]) || ((local_8 <= (int)puVar5[3] && (local_a < puVar5[2])))) {
      *(undefined2 *)((int)puVar4 + 0x117) = local_22;
      *(undefined2 *)((int)puVar4 + 0x119) = local_20;
    }
    FUN_10f8_545a(puVar4,uVar6,local_2e,unaff_SS);
  }
  return;
}



/* ---- FUN_10f8_3f7f @ 10f8:3f7f  (277 octets) ---- */

void __cdecl16far FUN_10f8_3f7f(undefined4 param_1,undefined4 param_2)

{
  undefined2 *puVar1;
  int iVar2;
  int iVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  undefined4 *puVar7;
  undefined4 uStack_26;
  undefined2 uStack_22;
  undefined2 uStack_20;
  undefined4 *puStack_1e;
  undefined2 uStack_1a;
  undefined2 uStack_18;
  
  uStack_18 = 0x3f93;
  puVar7 = (undefined4 *)FUN_1128_12a4();
  DAT_1160_1858 = (undefined4 *)&stack0xffea;
  uVar4 = (undefined2)((ulong)param_1 >> 0x10);
  iVar3 = (int)param_1;
  uVar5 = (undefined2)((ulong)*(undefined4 *)(iVar3 + 0xd8) >> 0x10);
  iVar2 = (int)*(undefined4 *)(iVar3 + 0xd8);
  uVar6 = (undefined2)((ulong)param_2 >> 0x10);
  uStack_18 = *(undefined2 *)(iVar2 + 0xd);
  uStack_1a = *(undefined2 *)(iVar2 + 0xb);
  puVar1 = (undefined2 *)((int)*puVar7 + 8);
  uStack_20 = 0x1128;
  uStack_22 = 0x3fd5;
  puStack_1e = puVar7;
  (*(code *)*puVar1)();
  uStack_20 = 2;
  uStack_22 = (undefined2)((ulong)*(undefined4 *)(iVar2 + 0xb) >> 0x10);
  uStack_26._2_2_ = (undefined *)*(undefined4 *)(iVar2 + 0xb);
  uStack_26._0_2_ = (undefined4 *)0x1128;
  FUN_1128_14b0();
  uStack_20 = 0xe;
  uStack_22 = (undefined2)((ulong)*(undefined4 *)(iVar2 + 0xb) >> 0x10);
  uStack_26._2_2_ = (undefined *)*(undefined4 *)(iVar2 + 0xb);
  uStack_26._0_2_ = (undefined4 *)0x1128;
  FUN_1128_1473();
  uStack_20 = 1;
  uStack_22 = (undefined2)((ulong)*(undefined4 *)(iVar2 + 0xb) >> 0x10);
  uStack_26._2_2_ = (undefined *)*(undefined4 *)(iVar2 + 0xb);
  uStack_26._0_2_ = (undefined4 *)0x1128;
  FUN_1128_14f5();
  uStack_20 = 0x1128;
  uStack_22 = 0x3f73;
  uStack_26._0_2_ = DAT_1160_1858;
  if (*(char *)(iVar3 + 0x13f) == '\x02') {
    DAT_1160_1858 = &uStack_26;
    uStack_26._2_2_ = &stack0xfffe;
    FUN_1128_1db8(iVar2,uVar5,*(undefined2 *)(iVar3 + 0x11f),0);
    FUN_1128_1d7b(iVar2,uVar5,*(undefined2 *)(iVar3 + 0x11f),*(undefined2 *)((int)param_2 + 8));
  }
  else {
    DAT_1160_1858 = &uStack_26;
    uStack_26._2_2_ = &stack0xfffe;
    FUN_1128_1db8(iVar2,uVar5,0,*(undefined2 *)(iVar3 + 0x11f));
    FUN_1128_1d7b(iVar2,uVar5,*(undefined2 *)((int)param_2 + 10),*(undefined2 *)(iVar3 + 0x11f));
  }
  DAT_1160_1858 = (undefined4 *)uStack_26;
  uStack_20 = 0x1128;
  uStack_22 = 0x4094;
  uStack_26 = puVar7;
  FUN_1128_20b6(iVar2,uVar5);
  return;
}



/* ---- FUN_10f8_40bb @ 10f8:40bb  (432 octets) ---- */

void __cdecl16far FUN_10f8_40bb(undefined4 param_1)

{
  undefined2 *puVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  int iVar4;
  undefined2 uVar5;
  undefined2 unaff_SS;
  undefined *puVar6;
  undefined4 *puStack_34;
  undefined *puStack_32;
  undefined2 uStack_30;
  undefined2 uStack_2e;
  undefined4 *puStack_2c;
  undefined2 uStack_28;
  undefined2 uStack_26;
  undefined local_1c [8];
  int local_14;
  undefined2 local_12;
  undefined2 local_10;
  undefined2 local_e;
  undefined2 local_c;
  undefined2 local_a;
  undefined2 local_8;
  undefined4 local_6;
  
  uStack_26 = 0x40cf;
  local_6 = (undefined4 *)FUN_1128_12a4();
  DAT_1160_1858 = (undefined4 **)&stack0xffdc;
  uVar5 = (undefined2)((ulong)param_1 >> 0x10);
  iVar4 = (int)param_1;
  local_12 = (undefined2)((ulong)*(undefined4 *)(iVar4 + 0xd8) >> 0x10);
  local_14 = (int)*(undefined4 *)(iVar4 + 0xd8);
  uStack_26 = *(undefined2 *)(local_14 + 0xd);
  uStack_28 = *(undefined2 *)(local_14 + 0xb);
  puVar1 = (undefined2 *)((int)*local_6 + 8);
  uStack_2e = 0x1128;
  uStack_30 = 0x4105;
  puStack_2c = local_6;
  (*(code *)*puVar1)();
  uStack_2e = 0x1128;
  uStack_30 = 0x40af;
  puStack_34 = (undefined4 *)DAT_1160_1858;
  DAT_1160_1858 = &puStack_34;
  puStack_32 = &stack0xfffe;
  FUN_1128_14b0((int)*(undefined4 *)(local_14 + 0xb),
                (int)((ulong)*(undefined4 *)(local_14 + 0xb) >> 0x10),2);
  FUN_1128_1473((int)*(undefined4 *)(local_14 + 0xb),
                (int)((ulong)*(undefined4 *)(local_14 + 0xb) >> 0x10),0xe);
  FUN_1128_14f5((int)*(undefined4 *)(local_14 + 0xb),
                (int)((ulong)*(undefined4 *)(local_14 + 0xb) >> 0x10),5);
  if (*(char *)(iVar4 + 0x13f) == '\x04') {
    puVar6 = local_1c;
    uVar2 = unaff_SS;
    FUN_10f8_2424(iVar4,uVar5,*(undefined2 *)(iVar4 + 0x127),*(undefined2 *)(iVar4 + 0x129),0,0);
    FUN_1158_161b(8,&local_10,unaff_SS,puVar6,uVar2);
    if ((*(int *)(iVar4 + 0x125) < *(int *)(iVar4 + 0x129)) ||
       ((*(int *)(iVar4 + 0x125) <= *(int *)(iVar4 + 0x129) &&
        (*(uint *)(iVar4 + 0x123) < *(uint *)(iVar4 + 0x127))))) {
      local_8 = local_a;
    }
    else {
      local_8 = local_e;
    }
    FUN_1128_1db8(local_14,local_12,local_8,0);
    uVar2 = FUN_1138_18a9(iVar4,uVar5);
    FUN_1128_1d7b(local_14,local_12,local_8,uVar2);
  }
  else {
    puVar6 = local_1c;
    uVar2 = unaff_SS;
    FUN_10f8_2424(iVar4,uVar5,0,0,*(undefined2 *)(iVar4 + 0x127),*(undefined2 *)(iVar4 + 0x129));
    FUN_1158_161b(8,&local_10,unaff_SS,puVar6,uVar2);
    if ((*(int *)(iVar4 + 0x125) < *(int *)(iVar4 + 0x129)) ||
       ((*(int *)(iVar4 + 0x125) <= *(int *)(iVar4 + 0x129) &&
        (*(uint *)(iVar4 + 0x123) < *(uint *)(iVar4 + 0x127))))) {
      local_8 = local_c;
    }
    else {
      local_8 = local_10;
    }
    FUN_1128_1db8(local_14,local_12,0,local_8);
    uVar2 = local_8;
    uVar3 = FUN_1138_18f4(iVar4,uVar5);
    FUN_1128_1d7b(local_14,local_12,uVar3,uVar2);
  }
  DAT_1160_1858 = (undefined4 **)puStack_34;
  uStack_2e = 0x1128;
  uStack_30 = 0x426b;
  puStack_32 = (undefined *)local_6._2_2_;
  puStack_34 = (undefined4 *)local_6;
  FUN_1128_20b6((int)*(undefined4 *)(iVar4 + 0xd8),
                (int)((ulong)*(undefined4 *)(iVar4 + 0xd8) >> 0x10));
  return;
}



/* ---- FUN_10f8_4286 @ 10f8:4286  (58 octets) ---- */

void __stdcall16far
FUN_10f8_4286(undefined4 param_1,undefined param_2,undefined2 param_3,undefined2 param_4,
             undefined2 param_5,undefined2 param_6)

{
  undefined2 uVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  uVar1 = (undefined2)param_1;
  FUN_10f8_4fd6(uVar1,uVar2,1,param_2,param_3,param_4,param_5,param_6);
  FUN_10f8_77c1(uVar1,uVar2);
  FUN_1158_206a(0x10f8,uVar1,uVar2);
  return;
}



/* ---- FUN_10f8_42c0 @ 10f8:42c0  (235 octets) ---- */

int FUN_10f8_42c0(int param_1,int *param_2,uint param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined2 unaff_SS;
  bool bVar6;
  uint local_c;
  int local_a;
  uint local_8;
  int local_6;
  int local_4;
  
  uVar4 = (undefined2)((ulong)param_2 >> 0x10);
  local_4 = 0;
  uVar1 = *(uint *)((int)*(undefined4 *)(param_1 + 6) + 0xfe);
  iVar2 = (int)uVar1 >> 0xf;
  if ((param_4 < iVar2) || ((param_4 <= iVar2 && (param_3 < uVar1)))) {
    local_8 = 0;
    local_6 = 0;
  }
  else {
    uVar5 = (undefined2)((ulong)*(undefined4 *)(param_1 + 6) >> 0x10);
    iVar3 = (int)*(undefined4 *)(param_1 + 6);
    iVar2 = *(int *)(iVar3 + 0x115);
    if ((iVar2 < param_4) || ((iVar2 <= param_4 && (*(uint *)(iVar3 + 0x113) <= param_3)))) {
      local_4 = ((int *)param_2)[2];
    }
    uVar5 = (undefined2)((ulong)*(undefined4 *)(param_1 + 6) >> 0x10);
    iVar2 = (int)*(undefined4 *)(param_1 + 6);
    local_8 = *(uint *)(iVar2 + 0x113);
    local_6 = *(int *)(iVar2 + 0x115);
  }
  param_4 = param_4 - (uint)(param_3 == 0);
  if ((local_6 <= param_4) && ((local_6 < param_4 || (local_8 <= param_3 - 1)))) {
    local_c = local_8;
    local_a = local_6;
    while( true ) {
      iVar2 = FUN_10f8_6e30((int)*(undefined4 *)(param_1 + 6),
                            (int)((ulong)*(undefined4 *)(param_1 + 6) >> 0x10),local_c,local_a);
      local_4 = local_4 + iVar2 + *param_2;
      if (((int *)param_2)[7] < local_4) break;
      if ((local_a == param_4) && (local_c == param_3 - 1)) {
        return local_4;
      }
      bVar6 = 0xfffe < local_c;
      local_c = local_c + 1;
      local_a = local_a + (uint)bVar6;
    }
    local_4 = 0;
  }
  return local_4;
}



/* ---- FUN_10f8_43ab @ 10f8:43ab  (236 octets) ---- */

int FUN_10f8_43ab(int param_1,undefined4 param_2,uint param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  undefined2 unaff_SS;
  bool bVar7;
  uint local_c;
  int local_a;
  uint local_8;
  int local_6;
  int local_4;
  
  uVar5 = (undefined2)((ulong)param_2 >> 0x10);
  iVar2 = (int)param_2;
  local_4 = 0;
  uVar1 = *(uint *)((int)*(undefined4 *)(param_1 + 6) + 0x100);
  iVar3 = (int)uVar1 >> 0xf;
  if ((param_4 < iVar3) || ((param_4 <= iVar3 && (param_3 < uVar1)))) {
    local_8 = 0;
    local_6 = 0;
  }
  else {
    uVar6 = (undefined2)((ulong)*(undefined4 *)(param_1 + 6) >> 0x10);
    iVar4 = (int)*(undefined4 *)(param_1 + 6);
    iVar3 = *(int *)(iVar4 + 0x119);
    if ((iVar3 < param_4) || ((iVar3 <= param_4 && (*(uint *)(iVar4 + 0x117) <= param_3)))) {
      local_4 = *(int *)(iVar2 + 6);
    }
    uVar6 = (undefined2)((ulong)*(undefined4 *)(param_1 + 6) >> 0x10);
    iVar3 = (int)*(undefined4 *)(param_1 + 6);
    local_8 = *(uint *)(iVar3 + 0x117);
    local_6 = *(int *)(iVar3 + 0x119);
  }
  param_4 = param_4 - (uint)(param_3 == 0);
  if ((local_6 <= param_4) && ((local_6 < param_4 || (local_8 <= param_3 - 1)))) {
    local_c = local_8;
    local_a = local_6;
    while( true ) {
      iVar3 = FUN_10f8_6e8b((int)*(undefined4 *)(param_1 + 6),
                            (int)((ulong)*(undefined4 *)(param_1 + 6) >> 0x10),local_c,local_a);
      local_4 = local_4 + iVar3 + *(int *)(iVar2 + 2);
      if (*(int *)(iVar2 + 0xc) < local_4) break;
      if ((local_a == param_4) && (local_c == param_3 - 1)) {
        return local_4;
      }
      bVar7 = 0xfffe < local_c;
      local_c = local_c + 1;
      local_a = local_a + (uint)bVar7;
    }
    local_4 = 0;
  }
  return local_4;
}



/* ---- FUN_10f8_4497 @ 10f8:4497  (802 octets) ---- */

void __stdcall16far FUN_10f8_4497(undefined4 param_1,char param_2,int *param_3,undefined *param_4)

{
  undefined *puVar1;
  uint *puVar2;
  int iVar3;
  undefined *puVar4;
  uint *puVar5;
  int *piVar6;
  int iVar7;
  undefined2 uVar8;
  undefined2 uVar9;
  undefined2 unaff_SS;
  bool bVar10;
  int local_2e;
  int local_2c;
  int local_22;
  int local_20;
  uint local_1e;
  int local_1c;
  uint local_1a;
  int local_18;
  uint local_12;
  int local_10;
  uint local_e;
  int local_c;
  uint local_a;
  int local_8;
  uint local_6;
  int local_4;
  
  puVar5 = &local_12;
  puVar4 = (undefined *)param_4;
  for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
    puVar2 = puVar5;
    puVar5 = (uint *)((int)puVar5 + 1);
    puVar1 = puVar4;
    puVar4 = puVar4 + 1;
    *(undefined *)puVar2 = *puVar1;
  }
  uVar8 = (undefined2)((ulong)param_3 >> 0x10);
  piVar6 = (int *)param_3;
  FUN_1158_1ee5(0,8,piVar6,uVar8);
  if ((local_10 <= local_8) &&
     ((((local_10 < local_8 || (local_12 <= local_a)) && (local_c <= local_4)) &&
      ((local_c < local_4 || (local_e <= local_6)))))) {
    uVar9 = (undefined2)((ulong)param_1 >> 0x10);
    iVar7 = (int)param_1;
    FUN_10f8_344f(iVar7,uVar9,&local_2e,unaff_SS);
    iVar3 = local_1c + (uint)(0xfffe < local_1e);
    if ((local_10 <= iVar3) && ((local_10 < iVar3 || (local_12 <= local_1e + 1)))) {
      iVar3 = local_18 + (uint)(0xfffe < local_1a);
      if ((local_c <= iVar3) && ((local_c < iVar3 || (local_e <= local_1a + 1)))) {
        iVar3 = (int)*(uint *)(iVar7 + 0xfe) >> 0xf;
        if (((iVar3 < local_10) || ((iVar3 <= local_10 && (*(uint *)(iVar7 + 0xfe) <= local_12))))
           && ((local_10 < *(int *)(iVar7 + 0x115) ||
               ((local_10 <= *(int *)(iVar7 + 0x115) && (local_12 < *(uint *)(iVar7 + 0x113))))))) {
          if (local_8 < *(int *)(iVar7 + 0x115)) {
            return;
          }
          if ((local_8 <= *(int *)(iVar7 + 0x115)) && (local_a < *(uint *)(iVar7 + 0x113))) {
            return;
          }
          local_12 = *(uint *)(iVar7 + 0x113);
          local_10 = *(int *)(iVar7 + 0x115);
        }
        if ((local_1c < local_8) || ((local_1c <= local_8 && (local_1e < local_a)))) {
          local_a = local_1e;
          local_8 = local_1c;
          iVar3 = *(int *)(iVar7 + 0xe8) - (uint)(*(int *)(iVar7 + 0xe6) == 0);
          if ((local_1c < iVar3) ||
             ((local_1c <= iVar3 && (local_1e < *(int *)(iVar7 + 0xe6) - 1U)))) {
            local_a = local_1e + 1;
            local_8 = local_1c + (uint)(0xfffe < local_1e);
          }
          iVar3 = FUN_10f8_42c0(&stack0xfffe,&local_2e,unaff_SS,local_a,local_8);
          if (iVar3 == 0) {
            bVar10 = local_a == 0;
            local_a = local_a - 1;
            local_8 = local_8 - (uint)bVar10;
          }
        }
        iVar3 = (int)*(uint *)(iVar7 + 0x100) >> 0xf;
        if (((iVar3 < local_c) || ((iVar3 <= local_c && (*(uint *)(iVar7 + 0x100) <= local_e)))) &&
           ((local_c < *(int *)(iVar7 + 0x119) ||
            ((local_c <= *(int *)(iVar7 + 0x119) && (local_e < *(uint *)(iVar7 + 0x117))))))) {
          if (local_4 < *(int *)(iVar7 + 0x119)) {
            return;
          }
          if ((local_4 <= *(int *)(iVar7 + 0x119)) && (local_6 < *(uint *)(iVar7 + 0x117))) {
            return;
          }
          local_e = *(uint *)(iVar7 + 0x117);
          local_c = *(int *)(iVar7 + 0x119);
        }
        if ((local_18 < local_4) || ((local_18 <= local_4 && (local_1a < local_6)))) {
          local_6 = local_1a;
          local_4 = local_18;
          iVar3 = *(int *)(iVar7 + 0x10c) - (uint)(*(int *)(iVar7 + 0x10a) == 0);
          if ((local_18 < iVar3) ||
             ((local_18 <= iVar3 && (local_1a < *(int *)(iVar7 + 0x10a) - 1U)))) {
            local_6 = local_1a + 1;
            local_4 = local_18 + (uint)(0xfffe < local_1a);
          }
          iVar3 = FUN_10f8_43ab(&stack0xfffe,&local_2e,unaff_SS,local_6,local_4);
          if (iVar3 == 0) {
            bVar10 = local_6 == 0;
            local_6 = local_6 - 1;
            local_4 = local_4 - (uint)bVar10;
          }
        }
        iVar3 = FUN_10f8_42c0(&stack0xfffe,&local_2e,unaff_SS,local_12,local_10);
        *param_3 = iVar3;
        iVar3 = FUN_10f8_42c0(&stack0xfffe,&local_2e,unaff_SS,local_a,local_8);
        piVar6[2] = iVar3;
        if (piVar6[2] == 0) {
          iVar3 = FUN_10f8_6e30(iVar7,uVar9,local_12,local_10);
          piVar6[2] = iVar3 + *param_3;
        }
        else {
          iVar3 = FUN_10f8_6e30(iVar7,uVar9,local_a,local_8);
          piVar6[2] = piVar6[2] + iVar3;
        }
        if (local_20 < piVar6[2]) {
          piVar6[2] = local_20;
        }
        if (param_2 != '\0') {
          piVar6[2] = piVar6[2] + local_2e;
        }
        iVar3 = FUN_10f8_43ab(&stack0xfffe,&local_2e,unaff_SS,local_e,local_c);
        piVar6[1] = iVar3;
        iVar3 = FUN_10f8_43ab(&stack0xfffe,&local_2e,unaff_SS,local_6,local_4);
        piVar6[3] = iVar3;
        if (piVar6[3] == 0) {
          iVar3 = FUN_10f8_6e8b(iVar7,uVar9,local_e,local_c);
          piVar6[3] = iVar3 + piVar6[1];
        }
        else {
          iVar3 = FUN_10f8_6e8b(iVar7,uVar9,local_6,local_4);
          piVar6[3] = piVar6[3] + iVar3;
        }
        if (param_2 != '\0') {
          piVar6[3] = piVar6[3] + local_2c;
        }
        if (local_22 < piVar6[3]) {
          piVar6[3] = local_22;
        }
      }
    }
  }
  return;
}



/* ---- FUN_10f8_47bd @ 10f8:47bd  (126 octets) ---- */

void __stdcall16far FUN_10f8_47bd(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined2 uVar4;
  
  uVar4 = (undefined2)((ulong)param_1 >> 0x10);
  iVar3 = (int)param_1;
  iVar1 = *(int *)(iVar3 + 0xfe);
  *(int *)(iVar3 + 0x113) = iVar1;
  *(int *)(iVar3 + 0x115) = iVar1 >> 0xf;
  iVar1 = *(int *)(iVar3 + 0x100);
  *(int *)(iVar3 + 0x117) = iVar1;
  *(int *)(iVar3 + 0x119) = iVar1 >> 0xf;
  FUN_1158_161b(8,iVar3 + 0xf2,uVar4,iVar3 + 0x113,uVar4);
  FUN_1158_161b(8,iVar3 + 0xdc,uVar4,iVar3 + 0xf2,uVar4);
  if ((*(byte *)(iVar3 + 0x109) & 0x10) != 0) {
    iVar1 = *(int *)(iVar3 + 0xe6);
    iVar2 = *(int *)(iVar3 + 0xe8);
    *(int *)(iVar3 + 0xdc) = iVar1 + -1;
    *(int *)(iVar3 + 0xde) = iVar2 - (uint)(iVar1 == 0);
  }
  return;
}



/* ---- FUN_10f8_483b @ 10f8:483b  (71 octets) ---- */

void __stdcall16far
FUN_10f8_483b(undefined4 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4,
             undefined2 param_5)

{
  undefined2 unaff_SS;
  undefined2 local_12;
  undefined2 local_10;
  undefined2 local_e;
  undefined2 local_c;
  undefined2 local_a;
  undefined2 local_8;
  undefined2 local_6;
  undefined2 local_4;
  
  local_e = param_2;
  local_c = param_3;
  local_12 = param_4;
  local_10 = param_5;
  local_6 = param_2;
  local_4 = param_3;
  local_a = param_4;
  local_8 = param_5;
  FUN_10f8_4895((int)param_1,(int)((ulong)param_1 >> 0x10),&local_12,unaff_SS);
  return;
}



/* ---- FUN_10f8_4882 @ 10f8:4882  (19 octets) ---- */

void __stdcall16far FUN_10f8_4882(undefined4 *param_1)

{
  undefined2 *puVar1;
  
  puVar1 = (undefined2 *)((int)*param_1 + 0x44);
  (*(code *)*puVar1)();
  return;
}



/* ---- FUN_10f8_4895 @ 10f8:4895  (89 octets) ---- */

void __stdcall16far FUN_10f8_4895(undefined4 param_1,undefined *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  char cVar3;
  int iVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined2 uVar7;
  undefined2 uVar8;
  undefined2 unaff_SS;
  undefined local_1a [8];
  undefined local_12 [16];
  
  puVar6 = local_12;
  puVar5 = (undefined *)param_2;
  for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
    puVar2 = puVar6;
    puVar6 = puVar6 + 1;
    puVar1 = puVar5;
    puVar5 = puVar5 + 1;
    *puVar2 = *puVar1;
  }
  uVar8 = (undefined2)((ulong)param_1 >> 0x10);
  uVar7 = (undefined2)param_1;
  cVar3 = FUN_1138_64fa(uVar7,uVar8);
  if (cVar3 != '\0') {
    FUN_10f8_4497(uVar7,uVar8,1,local_1a,unaff_SS,local_12,unaff_SS);
    uVar7 = FUN_1138_62b9(uVar7,uVar8);
    INVALIDATERECT(0x1138,0,local_1a,unaff_SS,uVar7);
  }
  return;
}



/* ---- FUN_10f8_48ee @ 10f8:48ee  (64 octets) ---- */

long FUN_10f8_48ee(int param_1)

{
  undefined2 unaff_SS;
  undefined2 local_6;
  
  if (*(int *)(param_1 + 0xe) == 0) {
    local_6 = *(int *)((int)*(undefined4 *)(param_1 + 6) + 0xfe);
  }
  else {
    local_6 = *(int *)((int)*(undefined4 *)(param_1 + 6) + 0x100);
  }
  return (long)local_6;
}



/* ---- FUN_10f8_492e @ 10f8:492e  (57 octets) ---- */

undefined4 FUN_10f8_492e(int param_1)

{
  undefined2 unaff_SS;
  undefined2 local_6;
  undefined2 local_4;
  
  if (*(int *)(param_1 + 0xe) == 0) {
    local_6 = *(undefined2 *)(param_1 + -0x18);
    local_4 = *(undefined2 *)(param_1 + -0x16);
  }
  else {
    local_6 = *(undefined2 *)(param_1 + -0x14);
    local_4 = *(undefined2 *)(param_1 + -0x12);
  }
  return CONCAT22(local_4,local_6);
}



/* ---- FUN_10f8_4967 @ 10f8:4967  (161 octets) ---- */

undefined4 FUN_10f8_4967(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 unaff_SS;
  undefined *puVar4;
  undefined local_16 [8];
  uint local_e;
  int local_c;
  uint local_a;
  int local_8;
  int local_6;
  int local_4;
  
  puVar4 = local_16;
  uVar3 = unaff_SS;
  FUN_10f8_3701((int)*(undefined4 *)(param_1 + 6),(int)((ulong)*(undefined4 *)(param_1 + 6) >> 0x10)
                ,param_1 + -0x34,unaff_SS,(int)*(undefined4 *)(param_1 + 6) + 0x113,
                (int)((ulong)*(undefined4 *)(param_1 + 6) >> 0x10));
  FUN_1158_161b(8,&local_e,unaff_SS,puVar4,uVar3);
  if (*(int *)(param_1 + 0xe) == 0) {
    uVar3 = (undefined2)((ulong)*(undefined4 *)(param_1 + 6) >> 0x10);
    iVar2 = (int)*(undefined4 *)(param_1 + 6);
    uVar1 = *(uint *)(iVar2 + 0x113);
    local_6 = uVar1 - local_e;
    local_4 = (*(int *)(iVar2 + 0x115) - local_c) - (uint)(uVar1 < local_e);
  }
  else {
    uVar3 = (undefined2)((ulong)*(undefined4 *)(param_1 + 6) >> 0x10);
    iVar2 = (int)*(undefined4 *)(param_1 + 6);
    uVar1 = *(uint *)(iVar2 + 0x117);
    local_6 = uVar1 - local_a;
    local_4 = (*(int *)(iVar2 + 0x119) - local_8) - (uint)(uVar1 < local_a);
  }
  if ((local_4 < 0) || ((local_4 < 1 && (local_6 == 0)))) {
    local_6 = 1;
    local_4 = 0;
  }
  return CONCAT22(local_4,local_6);
}



/* ---- FUN_10f8_4a08 @ 10f8:4a08  (127 octets) ---- */

undefined4 FUN_10f8_4a08(int param_1)

{
  uint *puVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 unaff_SS;
  undefined local_22 [16];
  uint local_12;
  int local_10;
  uint local_e;
  int local_c;
  int local_6;
  int local_4;
  
  FUN_10f8_344f((int)*(undefined4 *)(param_1 + 6),(int)((ulong)*(undefined4 *)(param_1 + 6) >> 0x10)
                ,local_22,unaff_SS);
  if (*(int *)(param_1 + 0xe) == 0) {
    uVar3 = (undefined2)((ulong)*(undefined4 *)(param_1 + 6) >> 0x10);
    iVar2 = (int)*(undefined4 *)(param_1 + 6);
    puVar1 = (uint *)(iVar2 + 0x113);
    local_6 = local_12 - *puVar1;
    local_4 = (local_10 - *(int *)(iVar2 + 0x115)) - (uint)(local_12 < *puVar1);
  }
  else {
    uVar3 = (undefined2)((ulong)*(undefined4 *)(param_1 + 6) >> 0x10);
    iVar2 = (int)*(undefined4 *)(param_1 + 6);
    puVar1 = (uint *)(iVar2 + 0x117);
    local_6 = local_e - *puVar1;
    local_4 = (local_c - *(int *)(iVar2 + 0x119)) - (uint)(local_e < *puVar1);
  }
  if ((local_4 < 0) || ((local_4 < 1 && (local_6 == 0)))) {
    local_6 = 1;
    local_4 = 0;
  }
  return CONCAT22(local_4,local_6);
}



/* ---- FUN_10f8_4a97 @ 10f8:4a97  (259 octets) ---- */

long FUN_10f8_4a97(int param_1,uint param_2,int param_3)

{
  undefined2 unaff_SS;
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  
  lVar3 = CONCAT22(param_3,param_2);
  switch(*(undefined2 *)(param_1 + 0xc)) {
  case 0:
    lVar3 = CONCAT22(param_3 - (uint)(param_2 == 0),param_2 - 1);
    break;
  case 1:
    lVar3 = CONCAT22(param_3 + (uint)(0xfffe < param_2),param_2 + 1);
    break;
  case 2:
    uVar1 = FUN_10f8_4967(param_1);
    lVar3 = CONCAT22((param_3 - (int)((ulong)uVar1 >> 0x10)) - (uint)(param_2 < (uint)uVar1),
                     param_2 - (uint)uVar1);
    break;
  case 3:
    lVar3 = FUN_10f8_4a08(param_1);
    lVar3 = lVar3 + CONCAT22(param_3,param_2);
    break;
  case 4:
  case 5:
    if (((*(byte *)((int)*(undefined4 *)(param_1 + 6) + 0x109) & 0x40) != 0) ||
       (lVar3 = CONCAT22(param_3,param_2), *(int *)(param_1 + 0xc) == 4)) {
      uVar4 = *(undefined2 *)(param_1 + 10);
      uVar5 = 0;
      lVar3 = FUN_10f8_48ee(param_1,uVar4,0);
      lVar2 = FUN_10f8_492e(param_1,lVar3);
      lVar3 = FUN_10f8_157f(0x7fff,0,lVar2 - lVar3,uVar4,uVar5);
      lVar2 = FUN_10f8_48ee(param_1);
      lVar3 = lVar3 + lVar2;
    }
    break;
  case 6:
    lVar3 = FUN_10f8_48ee(param_1);
    break;
  case 7:
    lVar3 = FUN_10f8_48ee(param_1);
  }
  return lVar3;
}



/* ---- FUN_10f8_4bac @ 10f8:4bac  (441 octets) ---- */

void FUN_10f8_4bac(int param_1,int param_2,undefined2 param_3)

{
  undefined2 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  undefined2 uVar6;
  undefined2 unaff_SS;
  undefined local_16 [12];
  int local_a;
  int local_8;
  int local_6;
  int local_4;
  
  local_4 = *(int *)((int)*(undefined4 *)(param_1 + 6) + 0x13d);
  switch(param_3) {
  case 0:
    uVar2 = *(undefined4 *)((int)*(undefined4 *)(param_1 + 6) + 0xd8);
    iVar5 = FUN_1128_2003((int)uVar2,(int)((ulong)uVar2 >> 0x10),0x4b9a,0x10f8);
    local_4 = local_4 - iVar5;
    break;
  case 1:
    uVar2 = *(undefined4 *)((int)*(undefined4 *)(param_1 + 6) + 0xd8);
    iVar5 = FUN_1128_2003((int)uVar2,(int)((ulong)uVar2 >> 0x10),0x4b9a,0x10f8);
    local_4 = local_4 + iVar5;
    break;
  case 2:
    iVar5 = FUN_1138_18a9((int)*(undefined4 *)(param_1 + 6),
                          (int)((ulong)*(undefined4 *)(param_1 + 6) >> 0x10));
    local_4 = local_4 - iVar5;
    break;
  case 3:
    iVar5 = FUN_1138_18a9((int)*(undefined4 *)(param_1 + 6),
                          (int)((ulong)*(undefined4 *)(param_1 + 6) >> 0x10));
    local_4 = local_4 + iVar5;
    break;
  case 4:
    local_4 = param_2;
    break;
  case 5:
    if ((*(byte *)((int)*(undefined4 *)(param_1 + 6) + 0x109) & 0x40) != 0) {
      local_4 = param_2;
    }
    break;
  case 6:
    iVar5 = FUN_1138_18a9((int)*(undefined4 *)(param_1 + 6),
                          (int)((ulong)*(undefined4 *)(param_1 + 6) >> 0x10));
    local_4 = FUN_10f8_6e30((int)*(undefined4 *)(param_1 + 6),
                            (int)((ulong)*(undefined4 *)(param_1 + 6) >> 0x10),0,0);
    local_4 = local_4 - iVar5;
    break;
  case 7:
    local_4 = 0;
  }
  if (local_4 < 0) {
    local_4 = 0;
  }
  else {
    iVar5 = FUN_1138_18a9((int)*(undefined4 *)(param_1 + 6),
                          (int)((ulong)*(undefined4 *)(param_1 + 6) >> 0x10));
    iVar4 = FUN_10f8_6e30((int)*(undefined4 *)(param_1 + 6),
                          (int)((ulong)*(undefined4 *)(param_1 + 6) >> 0x10),0,0);
    if (iVar4 - iVar5 <= local_4) {
      iVar5 = FUN_1138_18a9((int)*(undefined4 *)(param_1 + 6),
                            (int)((ulong)*(undefined4 *)(param_1 + 6) >> 0x10));
      local_4 = FUN_10f8_6e30((int)*(undefined4 *)(param_1 + 6),
                              (int)((ulong)*(undefined4 *)(param_1 + 6) >> 0x10),0,0);
      local_4 = local_4 - iVar5;
    }
  }
  uVar6 = (undefined2)((ulong)*(undefined4 *)(param_1 + 6) >> 0x10);
  iVar5 = (int)*(undefined4 *)(param_1 + 6);
  if (local_4 != *(int *)(iVar5 + 0x13d)) {
    local_6 = *(int *)(iVar5 + 0x13d);
    *(int *)(iVar5 + 0x13d) = local_4;
    FUN_10f8_542e(iVar5,uVar6,0,local_6 - local_4);
    FUN_1158_1ee5(0,0x10,local_16,unaff_SS);
    local_a = *(int *)((int)*(undefined4 *)(param_1 + 6) + 0x100);
    local_8 = local_a >> 0xf;
    FUN_10f8_4895((int)*(undefined4 *)(param_1 + 6),
                  (int)((ulong)*(undefined4 *)(param_1 + 6) >> 0x10),local_16,unaff_SS);
    puVar3 = (undefined4 *)*(undefined4 *)(param_1 + 6);
    puVar1 = (undefined2 *)((int)*puVar3 + 0x50);
    (*(code *)*puVar1)(0x10f8,(undefined4 *)puVar3,(int)((ulong)puVar3 >> 0x10));
    FUN_10f8_572f((int)*(undefined4 *)(param_1 + 6),
                  (int)((ulong)*(undefined4 *)(param_1 + 6) >> 0x10));
  }
  return;
}



/* ---- FUN_10f8_4d65 @ 10f8:4d65  (448 octets) ---- */

/* WARNING: Removing unreachable block (ram,0x10f84eac) */
/* WARNING: Removing unreachable block (ram,0x10f84e68) */
/* WARNING: Removing unreachable block (ram,0x10f84e8b) */
/* WARNING: Removing unreachable block (ram,0x10f84ecf) */

void __stdcall16far
FUN_10f8_4d65(undefined4 *param_1,undefined2 param_2,undefined2 param_3,int param_4)

{
  undefined2 *puVar1;
  char cVar2;
  undefined4 *puVar3;
  undefined2 uVar4;
  undefined2 unaff_SS;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined2 uVar8;
  undefined local_3e [8];
  undefined local_36 [28];
  uint local_1a;
  int local_18;
  int local_16;
  int local_14;
  undefined4 local_12;
  undefined4 local_e;
  
  uVar4 = (undefined2)((ulong)param_1 >> 0x10);
  puVar3 = (undefined4 *)param_1;
  cVar2 = FUN_1138_61c4(puVar3,uVar4);
  if (((cVar2 != '\0') && (*(char *)(puVar3 + 0x29) != '\0')) &&
     ((*(byte *)(puVar3 + 6) & 0x10) == 0)) {
    puVar1 = (undefined2 *)((int)*param_1 + 0x78);
    (*(code *)*puVar1)(0x1138,puVar3,uVar4);
  }
  if (((param_4 == 0) && (*(int *)(puVar3 + 0x3a) == 0)) && (*(int *)((int)puVar3 + 0xe6) == 1)) {
    FUN_10f8_4bac(&stack0xfffe,param_2,param_3);
    return;
  }
  FUN_10f8_344f(puVar3,uVar4,local_36,unaff_SS);
  local_1a = *(int *)((int)puVar3 + 0xe6) - 1;
  local_18 = *(int *)(puVar3 + 0x3a) - (uint)(*(int *)((int)puVar3 + 0xe6) == 0);
  local_16 = *(int *)((int)puVar3 + 0x10a) + -1;
  local_14 = *(int *)(puVar3 + 0x43) - (uint)(*(int *)((int)puVar3 + 0x10a) == 0);
  puVar7 = local_3e;
  uVar8 = unaff_SS;
  FUN_10f8_3701(puVar3,uVar4,local_36,unaff_SS,&local_1a,unaff_SS);
  FUN_1158_161b(8,&local_1a,unaff_SS,puVar7,uVar8);
  FUN_1158_161b(8,&local_12,unaff_SS,(int)puVar3 + 0x113,uVar4);
  if (param_4 == 0) {
    lVar5 = FUN_10f8_4a97(&stack0xfffe,(int)local_12,local_12._2_2_);
    lVar6 = CONCAT22(local_e._2_2_,(int)local_e);
  }
  else {
    lVar6 = FUN_10f8_4a97(&stack0xfffe,(int)local_e,local_e._2_2_);
    lVar5 = CONCAT22(local_12._2_2_,(int)local_12);
  }
  if (lVar5 < *(int *)((int)puVar3 + 0xfe)) {
    lVar5 = (long)*(int *)((int)puVar3 + 0xfe);
  }
  else if (CONCAT22(local_18,local_1a) < lVar5) {
    lVar5 = CONCAT22(local_18,local_1a);
  }
  local_12._2_2_ = (int)((ulong)lVar5 >> 0x10);
  local_12._0_2_ = (int)lVar5;
  if (lVar6 < *(int *)(puVar3 + 0x40)) {
    lVar6 = (long)*(int *)(puVar3 + 0x40);
  }
  else if (CONCAT22(local_14,local_16) < lVar6) {
    lVar6 = CONCAT22(local_14,local_16);
  }
  local_e._2_2_ = (int)((ulong)lVar6 >> 0x10);
  local_e._0_2_ = (int)lVar6;
  if (((local_12._2_2_ != *(int *)((int)puVar3 + 0x115)) ||
      ((int)local_12 != *(int *)((int)puVar3 + 0x113))) ||
     ((local_e._2_2_ != *(int *)((int)puVar3 + 0x119) ||
      ((int)local_e != *(int *)((int)puVar3 + 0x117))))) {
    local_12 = lVar5;
    local_e = lVar6;
    FUN_10f8_5173(puVar3,uVar4,lVar6,lVar5);
  }
  return;
}



/* ---- FUN_10f8_4f25 @ 10f8:4f25  (177 octets) ---- */

void __stdcall16far FUN_10f8_4f25(undefined4 param_1,undefined2 *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined2 *puVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  undefined2 unaff_SS;
  undefined *puVar7;
  undefined2 uVar8;
  undefined local_22 [16];
  undefined local_12 [16];
  
  uVar5 = (undefined2)((ulong)param_1 >> 0x10);
  iVar3 = (int)param_1;
  puVar4 = (undefined2 *)param_2;
  uVar6 = (undefined2)((ulong)param_2 >> 0x10);
  if ((*(uint *)(iVar3 + 0x108) & 0x410) == 0x10) {
    puVar7 = local_22;
    uVar8 = unaff_SS;
    FUN_10f8_6ee6(iVar3,uVar5);
    FUN_1158_161b(0x10,local_12,unaff_SS,puVar7,uVar8);
    FUN_1158_161b(8,iVar3 + 0xdc,uVar5,puVar4,uVar6);
    if ((*(byte *)(iVar3 + 0x109) & 0x10) != 0) {
      iVar1 = *(int *)(iVar3 + 0xe6);
      iVar2 = *(int *)(iVar3 + 0xe8);
      *(int *)(iVar3 + 0xe0) = iVar1 + -1;
      *(int *)(iVar3 + 0xe2) = iVar2 - (uint)(iVar1 == 0);
    }
    FUN_10f8_3dc1(iVar3,uVar5,iVar3 + 0xdc,uVar5);
    FUN_10f8_521d(iVar3,uVar5,local_12,unaff_SS);
  }
  else {
    FUN_10f8_4fd6(iVar3,uVar5,1,1,puVar4[2],puVar4[3],*param_2,puVar4[1]);
  }
  return;
}



/* ---- FUN_10f8_4fd6 @ 10f8:4fd6  (413 octets) ---- */

void __stdcall16far
FUN_10f8_4fd6(undefined4 *param_1,undefined2 param_2_00,char param_2,uint param_3,int param_4,
             uint param_5,int param_6)

{
  int iVar1;
  int iVar2;
  undefined2 *puVar3;
  char cVar4;
  undefined4 *puVar5;
  undefined2 uVar6;
  undefined2 unaff_SS;
  undefined *puVar7;
  undefined2 uVar8;
  undefined local_2a [16];
  undefined2 local_1a;
  undefined2 local_18;
  undefined2 local_16;
  undefined2 local_14;
  undefined local_12 [16];
  
  puVar5 = (undefined4 *)param_1;
  uVar6 = (undefined2)((ulong)param_1 >> 0x10);
  if ((((param_6 < 0) || (param_4 < 0)) || (*(int *)(puVar5 + 0x3a) < param_6)) ||
     (((*(int *)(puVar5 + 0x3a) <= param_6 && (*(uint *)((int)puVar5 + 0xe6) <= param_5)) ||
      ((*(int *)(puVar5 + 0x43) < param_4 ||
       ((*(int *)(puVar5 + 0x43) <= param_4 && (*(uint *)((int)puVar5 + 0x10a) <= param_3)))))))) {
    FUN_10f8_0f22(0xf057);
  }
  puVar3 = (undefined2 *)((int)*param_1 + 0x8c);
  cVar4 = (*(code *)*puVar3)();
  if (cVar4 != '\0') {
    puVar7 = local_2a;
    uVar8 = unaff_SS;
    FUN_10f8_6ee6(puVar5,uVar6);
    FUN_1158_161b(0x10,local_12,unaff_SS,puVar7,uVar8);
    FUN_1158_161b(8,&local_1a,unaff_SS,(int)puVar5 + 0xf2,uVar6);
    *(uint *)((int)puVar5 + 0xf2) = param_5;
    *(int *)(puVar5 + 0x3d) = param_6;
    *(uint *)((int)puVar5 + 0xf6) = param_3;
    *(int *)(puVar5 + 0x3e) = param_4;
    if ((*(byte *)((int)puVar5 + 0x109) & 0x20) == 0) {
      FUN_10f8_2532(puVar5,uVar6);
    }
    if (((param_2 != '\0') || ((*(byte *)(puVar5 + 0x42) & 0x10) == 0)) &&
       (FUN_1158_161b(8,puVar5 + 0x37,uVar6,(int)puVar5 + 0xf2,uVar6),
       (*(byte *)((int)puVar5 + 0x109) & 0x10) != 0)) {
      iVar1 = *(int *)((int)puVar5 + 0xe6);
      iVar2 = *(int *)(puVar5 + 0x3a);
      *(int *)(puVar5 + 0x37) = iVar1 + -1;
      *(int *)((int)puVar5 + 0xde) = iVar2 - (uint)(iVar1 == 0);
    }
    if ((*(byte *)((int)puVar5 + 0x109) & 0x10) != 0) {
      iVar1 = *(int *)((int)puVar5 + 0xfe);
      *(int *)((int)puVar5 + 0xf2) = iVar1;
      *(int *)(puVar5 + 0x3d) = iVar1 >> 0xf;
    }
    FUN_10f8_3dc1(puVar5,uVar6,(int)puVar5 + 0xf2,uVar6);
    FUN_10f8_521d(puVar5,uVar6,local_12,unaff_SS);
    FUN_10f8_483b(puVar5,uVar6,local_16,local_14,local_1a,local_18);
    FUN_10f8_483b(puVar5,uVar6,param_3,param_4,param_5,param_6);
  }
  return;
}



/* ---- FUN_10f8_5173 @ 10f8:5173  (136 octets) ---- */

void __stdcall16far
FUN_10f8_5173(undefined4 *param_1,int param_2,int param_3,int param_4,int param_5)

{
  undefined2 *puVar1;
  undefined4 *puVar2;
  undefined2 uVar3;
  undefined2 unaff_SS;
  undefined local_a [8];
  
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  puVar2 = (undefined4 *)param_1;
  if ((((param_5 != *(int *)((int)puVar2 + 0x115)) || (param_4 != *(int *)((int)puVar2 + 0x113))) ||
      (param_3 != *(int *)((int)puVar2 + 0x119))) || (param_2 != *(int *)((int)puVar2 + 0x117))) {
    puVar1 = (undefined2 *)((int)*param_1 + 0x50);
    (*(code *)*puVar1)();
    FUN_1158_161b(8,local_a,unaff_SS,(int)puVar2 + 0x113,uVar3);
    *(int *)((int)puVar2 + 0x113) = param_4;
    *(int *)((int)puVar2 + 0x115) = param_5;
    *(int *)((int)puVar2 + 0x117) = param_2;
    *(int *)((int)puVar2 + 0x119) = param_3;
    FUN_10f8_545a(puVar2,uVar3,local_a,unaff_SS);
  }
  return;
}



/* ---- FUN_10f8_51fb @ 10f8:51fb  (17 octets) ---- */

void __stdcall16far FUN_10f8_51fb(undefined4 param_1)

{
  FUN_10f8_4882((int)param_1,(int)((ulong)param_1 >> 0x10));
  return;
}



/* ---- FUN_10f8_520c @ 10f8:520c  (17 octets) ---- */

void __stdcall16far FUN_10f8_520c(undefined4 param_1)

{
  FUN_10f8_4882((int)param_1,(int)((ulong)param_1 >> 0x10));
  return;
}



/* ---- FUN_10f8_521d @ 10f8:521d  (141 octets) ---- */

void __stdcall16far FUN_10f8_521d(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined2 unaff_SS;
  undefined *puVar5;
  undefined local_44 [16];
  int local_34;
  undefined local_32 [32];
  undefined local_12 [8];
  undefined local_a [8];
  
  uVar4 = (undefined2)((ulong)param_1 >> 0x10);
  uVar3 = (undefined2)param_1;
  cVar1 = FUN_1138_64fa(uVar3,uVar4);
  if (cVar1 != '\0') {
    FUN_10f8_4497(uVar3,uVar4,1,local_a,unaff_SS,(int)param_2,(int)((ulong)param_2 >> 0x10));
    puVar5 = local_44;
    uVar2 = unaff_SS;
    FUN_10f8_6ee6(uVar3,uVar4);
    FUN_10f8_4497(uVar3,uVar4,1,local_12,unaff_SS,puVar5,uVar2);
    FUN_10f8_11d6(local_32,unaff_SS,local_12,unaff_SS,local_a,unaff_SS);
    local_34 = 0;
    while( true ) {
      uVar2 = FUN_1138_62b9(uVar3,uVar4);
      INVALIDATERECT(0x1138,0,local_32 + local_34 * 8,unaff_SS,uVar2);
      if (local_34 == 3) break;
      local_34 = local_34 + 1;
    }
  }
  return;
}



/* ---- FUN_10f8_52aa @ 10f8:52aa  (388 octets) ---- */

void __stdcall16far FUN_10f8_52aa(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  undefined2 uVar1;
  undefined2 uVar2;
  undefined2 unaff_SS;
  undefined *puVar3;
  undefined2 uVar4;
  undefined local_16 [8];
  int local_e;
  undefined2 local_c;
  undefined local_a [8];
  
  local_c = (undefined2)((ulong)param_2 >> 0x10);
  local_e = (int)param_2;
  uVar1 = (undefined2)param_1;
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  if (param_3 == 0) {
    puVar3 = local_16;
    uVar4 = unaff_SS;
    FUN_1148_0688(*(undefined2 *)(local_e + 0xc),*(undefined2 *)(local_e + 0xe),0,
                  *(undefined2 *)(local_e + 4));
    FUN_1158_161b(8,local_a,unaff_SS,puVar3,uVar4);
    FUN_1138_62b9(uVar1,uVar2);
    SCROLLWINDOW(0x1138,local_a,unaff_SS,local_a,unaff_SS,0,param_4);
  }
  else if (param_4 == 0) {
    puVar3 = local_16;
    uVar4 = unaff_SS;
    FUN_1148_0688(*(undefined2 *)(local_e + 0xc),*(undefined2 *)(local_e + 0xe),
                  *(undefined2 *)(local_e + 6),0);
    FUN_1158_161b(8,local_a,unaff_SS,puVar3,uVar4);
    FUN_1138_62b9(uVar1,uVar2);
    SCROLLWINDOW(0x1138,local_a,unaff_SS,local_a,unaff_SS,param_3,0);
  }
  else {
    puVar3 = local_16;
    uVar4 = unaff_SS;
    FUN_1148_0688(*(undefined2 *)(local_e + 6),*(undefined2 *)(local_e + 0xe),0,
                  *(undefined2 *)(local_e + 4));
    FUN_1158_161b(8,local_a,unaff_SS,puVar3,uVar4);
    FUN_1138_62b9(uVar1,uVar2);
    SCROLLWINDOW(0x1138,local_a,unaff_SS,local_a,unaff_SS,0,param_4);
    puVar3 = local_16;
    uVar4 = unaff_SS;
    FUN_1148_0688(*(undefined2 *)(local_e + 0xc),*(undefined2 *)(local_e + 4),
                  *(undefined2 *)(local_e + 6),0);
    FUN_1158_161b(8,local_a,unaff_SS,puVar3,uVar4);
    FUN_1138_62b9(uVar1,uVar2);
    SCROLLWINDOW(0x1138,local_a,unaff_SS,local_a,unaff_SS,param_3,0);
    puVar3 = local_16;
    uVar4 = unaff_SS;
    FUN_1148_0688(*(undefined2 *)(local_e + 0xc),*(undefined2 *)(local_e + 0xe),
                  *(undefined2 *)(local_e + 6),*(undefined2 *)(local_e + 4));
    FUN_1158_161b(8,local_a,unaff_SS,puVar3,uVar4);
    FUN_1138_62b9(uVar1,uVar2);
    SCROLLWINDOW(0x1138,local_a,unaff_SS,local_a,unaff_SS,param_3,param_4);
  }
  return;
}



/* ---- FUN_10f8_542e @ 10f8:542e  (44 octets) ---- */

void __stdcall16far FUN_10f8_542e(undefined4 param_1,undefined2 param_2,undefined2 param_3)

{
  undefined2 uVar1;
  undefined2 unaff_SS;
  undefined local_1e [28];
  
  uVar1 = (undefined2)((ulong)param_1 >> 0x10);
  FUN_10f8_344f((int)param_1,uVar1,local_1e,unaff_SS);
  FUN_10f8_52aa((int)param_1,uVar1,local_1e,unaff_SS,param_2,param_3);
  return;
}



/* ---- FUN_10f8_545a @ 10f8:545a  (662 octets) ---- */

void __stdcall16far FUN_10f8_545a(undefined4 param_1,uint *param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  undefined2 unaff_SS;
  bool bVar7;
  uint local_36;
  uint local_34;
  uint local_32;
  int local_30;
  uint local_2e;
  int local_2c;
  uint local_2a;
  uint local_28;
  uint local_26;
  uint local_24;
  int local_1e;
  int local_1c;
  int local_1a;
  int local_18;
  int local_16;
  int local_14;
  
  uVar5 = (undefined2)((ulong)param_1 >> 0x10);
  iVar3 = (int)param_1;
  FUN_10f8_572f(iVar3,uVar5);
  FUN_10f8_344f(iVar3,uVar5,&local_1e,unaff_SS);
  uVar6 = (undefined2)((ulong)param_2 >> 0x10);
  puVar4 = (uint *)param_2;
  if (((int)puVar4[1] < *(int *)(iVar3 + 0x115)) ||
     (((int)puVar4[1] <= *(int *)(iVar3 + 0x115) && (*param_2 < *(uint *)(iVar3 + 0x113))))) {
    local_26 = *param_2;
    local_24 = puVar4[1];
    local_2a = *(uint *)(iVar3 + 0x113);
    local_28 = *(uint *)(iVar3 + 0x115);
  }
  else {
    local_26 = *(uint *)(iVar3 + 0x113);
    local_24 = *(uint *)(iVar3 + 0x115);
    local_2a = *param_2;
    local_28 = puVar4[1];
  }
  local_32 = 0;
  local_30 = 0;
  local_28 = local_28 - (local_2a == 0);
  if (((int)local_28 < (int)local_24) ||
     (((int)local_28 <= (int)local_24 && (local_2a - 1 < local_26)))) {
LAB_10f8_556f:
    if (((int)puVar4[1] < *(int *)(iVar3 + 0x115)) ||
       (((int)puVar4[1] <= *(int *)(iVar3 + 0x115) && (*param_2 < *(uint *)(iVar3 + 0x113))))) {
      local_32 = -local_32;
    }
    if (((int)puVar4[3] < *(int *)(iVar3 + 0x119)) ||
       (((int)puVar4[3] <= *(int *)(iVar3 + 0x119) && (puVar4[2] < *(uint *)(iVar3 + 0x117))))) {
      local_26 = puVar4[2];
      local_24 = puVar4[3];
      local_2a = *(uint *)(iVar3 + 0x117);
      local_28 = *(uint *)(iVar3 + 0x119);
    }
    else {
      local_26 = *(uint *)(iVar3 + 0x117);
      local_24 = *(uint *)(iVar3 + 0x119);
      local_2a = puVar4[2];
      local_28 = puVar4[3];
    }
    local_2e = 0;
    local_2c = 0;
    local_28 = local_28 - (local_2a == 0);
    if (((int)local_28 < (int)local_24) ||
       (((int)local_28 <= (int)local_24 && (local_2a - 1 < local_26)))) {
LAB_10f8_5699:
      if (((int)puVar4[3] < *(int *)(iVar3 + 0x119)) ||
         (((int)puVar4[3] <= *(int *)(iVar3 + 0x119) && (puVar4[2] < *(uint *)(iVar3 + 0x117))))) {
        local_2e = -local_2e;
      }
      FUN_10f8_52aa(iVar3,uVar5,&local_1e,unaff_SS,local_2e,local_32);
      FUN_1158_206a(0x10f8,iVar3,uVar5);
    }
    else {
      local_36 = local_26;
      local_34 = local_24;
      while( true ) {
        iVar1 = FUN_10f8_6e8b(iVar3,uVar5,local_36,local_34);
        uVar2 = iVar1 + local_1c;
        bVar7 = CARRY2(local_2e,uVar2);
        local_2e = local_2e + uVar2;
        local_2c = local_2c + ((int)uVar2 >> 0xf) + (uint)bVar7;
        iVar1 = local_14 - local_18 >> 0xf;
        if ((iVar1 < local_2c) || ((iVar1 <= local_2c && ((uint)(local_14 - local_18) < local_2e))))
        break;
        if ((local_34 == local_28) && (local_36 == local_2a - 1)) goto LAB_10f8_5699;
        bVar7 = 0xfffe < local_36;
        local_36 = local_36 + 1;
        local_34 = local_34 + bVar7;
      }
      FUN_10f8_4882(iVar3,uVar5);
      FUN_1158_206a(0x10f8,iVar3,uVar5);
    }
  }
  else {
    local_36 = local_26;
    local_34 = local_24;
    while( true ) {
      iVar1 = FUN_10f8_6e30(iVar3,uVar5,local_36,local_34);
      uVar2 = iVar1 + local_1e;
      bVar7 = CARRY2(local_32,uVar2);
      local_32 = local_32 + uVar2;
      local_30 = local_30 + ((int)uVar2 >> 0xf) + (uint)bVar7;
      iVar1 = local_16 - local_1a >> 0xf;
      if ((iVar1 < local_30) || ((iVar1 <= local_30 && ((uint)(local_16 - local_1a) < local_32))))
      break;
      if ((local_34 == local_28) && (local_36 == local_2a - 1)) goto LAB_10f8_556f;
      bVar7 = 0xfffe < local_36;
      local_36 = local_36 + 1;
      local_34 = local_34 + bVar7;
    }
    FUN_10f8_4882(iVar3,uVar5);
    FUN_1158_206a(0x10f8,iVar3,uVar5);
  }
  return;
}



/* ---- FUN_10f8_56f0 @ 10f8:56f0  (63 octets) ---- */

void FUN_10f8_56f0(int param_1,int param_2,undefined2 param_3)

{
  int iVar1;
  undefined2 unaff_SS;
  
  FUN_1138_62b9((int)*(undefined4 *)(param_1 + 6),(int)((ulong)*(undefined4 *)(param_1 + 6) >> 0x10)
               );
  iVar1 = GETSCROLLPOS(0x1138,param_3);
  if (iVar1 != param_2) {
    FUN_1138_62b9((int)*(undefined4 *)(param_1 + 6),
                  (int)((ulong)*(undefined4 *)(param_1 + 6) >> 0x10));
    SETSCROLLPOS(0x1138,1,param_2,param_3);
  }
  return;
}



/* ---- FUN_10f8_572f @ 10f8:572f  (328 octets) ---- */

void __stdcall16far FUN_10f8_572f(undefined4 param_1)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  undefined2 uVar5;
  undefined2 unaff_SS;
  undefined *puVar6;
  undefined2 uVar7;
  undefined2 uVar8;
  undefined local_2e [8];
  uint local_26;
  int local_24;
  uint local_22;
  int local_20;
  undefined local_1e [28];
  
  uVar5 = (undefined2)((ulong)param_1 >> 0x10);
  iVar4 = (int)param_1;
  cVar3 = FUN_1138_64fa(iVar4,uVar5);
  if ((cVar3 != '\0') && (*(char *)(iVar4 + 0x112) != '\0')) {
    FUN_10f8_344f(iVar4,uVar5,local_1e,unaff_SS);
    local_26 = *(int *)(iVar4 + 0xe6) - 1;
    local_24 = *(int *)(iVar4 + 0xe8) - (uint)(*(int *)(iVar4 + 0xe6) == 0);
    local_22 = *(int *)(iVar4 + 0x10a) - 1;
    local_20 = *(int *)(iVar4 + 0x10c) - (uint)(*(int *)(iVar4 + 0x10a) == 0);
    puVar6 = local_2e;
    uVar8 = unaff_SS;
    FUN_10f8_3701(iVar4,uVar5,local_1e,unaff_SS,&local_26,unaff_SS);
    FUN_1158_161b(8,&local_26,unaff_SS,puVar6,uVar8);
    if ((*(char *)(iVar4 + 0x112) == '\x01') || (*(char *)(iVar4 + 0x112) == '\x03')) {
      if ((*(int *)(iVar4 + 0xe8) == 0) && (*(int *)(iVar4 + 0xe6) == 1)) {
        FUN_10f8_56f0(&stack0xfffe,*(undefined2 *)(iVar4 + 0x13d),0);
      }
      else {
        uVar7 = 0;
        uVar1 = *(uint *)(iVar4 + 0xfe);
        uVar2 = *(uint *)(iVar4 + 0xfe);
        uVar8 = FUN_10f8_157f(local_26 - uVar2,
                              (local_24 - ((int)uVar2 >> 0xf)) - (uint)(local_26 < uVar2),0x7fff,0,
                              *(uint *)(iVar4 + 0x113) - uVar1,
                              (*(int *)(iVar4 + 0x115) - ((int)uVar1 >> 0xf)) -
                              (uint)(*(uint *)(iVar4 + 0x113) < uVar1));
        FUN_10f8_56f0(&stack0xfffe,uVar8,uVar7);
      }
    }
    if ((1 < *(byte *)(iVar4 + 0x112)) && (*(byte *)(iVar4 + 0x112) < 4)) {
      uVar8 = 1;
      uVar1 = *(uint *)(iVar4 + 0x100);
      uVar2 = *(uint *)(iVar4 + 0x100);
      uVar5 = FUN_10f8_157f(local_22 - uVar2,
                            (local_20 - ((int)uVar2 >> 0xf)) - (uint)(local_22 < uVar2),0x7fff,0,
                            *(uint *)(iVar4 + 0x117) - uVar1,
                            (*(int *)(iVar4 + 0x119) - ((int)uVar1 >> 0xf)) -
                            (uint)(*(uint *)(iVar4 + 0x117) < uVar1));
      FUN_10f8_56f0(&stack0xfffe,uVar5,uVar8);
    }
  }
  return;
}



/* ---- FUN_10f8_5877 @ 10f8:5877  (41 octets) ---- */

void FUN_10f8_5877(int param_1)

{
  undefined2 *puVar1;
  undefined2 unaff_SS;
  
  if (*(char *)(param_1 + -0x2e) == '\0') {
    puVar1 = (undefined2 *)((int)*(undefined4 *)*(undefined4 *)(param_1 + 6) + 0x50);
    (*(code *)*puVar1)();
    *(undefined *)(param_1 + -0x2e) = 1;
  }
  return;
}



/* ---- FUN_10f8_58a0 @ 10f8:58a0  (112 octets) ---- */

bool FUN_10f8_58a0(int param_1,int param_2)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 unaff_SS;
  int local_8;
  int local_6;
  bool local_3;
  
  local_3 = false;
  uVar2 = (undefined2)((ulong)*(undefined4 *)(param_1 + 6) >> 0x10);
  iVar1 = (int)*(undefined4 *)(param_1 + 6);
  if (((*(char *)(iVar1 + 0x112) == '\x03') ||
      ((param_2 == 0 && (*(char *)(iVar1 + 0x112) == '\x01')))) ||
     ((param_2 == 1 && (*(char *)((int)*(undefined4 *)(param_1 + 6) + 0x112) == '\x02')))) {
    FUN_1138_62b9((int)*(undefined4 *)(param_1 + 6),
                  (int)((ulong)*(undefined4 *)(param_1 + 6) >> 0x10));
    GETSCROLLRANGE(0x1138,&local_8,unaff_SS,&local_6,unaff_SS,param_2);
    local_3 = local_6 != local_8;
  }
  return local_3;
}



/* ---- FUN_10f8_5910 @ 10f8:5910  (163 octets) ---- */

void FUN_10f8_5910(int param_1)

{
  int iVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 unaff_SS;
  undefined *puVar4;
  undefined local_a [8];
  
  FUN_10f8_347b((int)*(undefined4 *)(param_1 + 6),(int)((ulong)*(undefined4 *)(param_1 + 6) >> 0x10)
                ,*(undefined2 *)(param_1 + -0x20),*(undefined2 *)(param_1 + -0x1e),param_1 + -0x2c,
                unaff_SS);
  uVar3 = (undefined2)((ulong)*(undefined4 *)(param_1 + 6) >> 0x10);
  iVar2 = (int)*(undefined4 *)(param_1 + 6);
  iVar1 = *(int *)(iVar2 + 0xe6);
  iVar2 = *(int *)(iVar2 + 0xe8);
  *(int *)(param_1 + -8) = iVar1 + -1;
  *(int *)(param_1 + -6) = iVar2 - (uint)(iVar1 == 0);
  uVar3 = (undefined2)((ulong)*(undefined4 *)(param_1 + 6) >> 0x10);
  iVar2 = (int)*(undefined4 *)(param_1 + 6);
  iVar1 = *(int *)(iVar2 + 0x10a);
  iVar2 = *(int *)(iVar2 + 0x10c);
  *(int *)(param_1 + -4) = iVar1 + -1;
  *(int *)(param_1 + -2) = iVar2 - (uint)(iVar1 == 0);
  puVar4 = local_a;
  uVar3 = unaff_SS;
  FUN_10f8_3701((int)*(undefined4 *)(param_1 + 6),(int)((ulong)*(undefined4 *)(param_1 + 6) >> 0x10)
                ,param_1 + -0x2c,unaff_SS,param_1 + -8,unaff_SS);
  FUN_1158_161b(8,param_1 + -8,unaff_SS,puVar4,uVar3);
  return;
}



/* ---- FUN_10f8_59b3 @ 10f8:59b3  (280 octets) ---- */

void FUN_10f8_59b3(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined2 unaff_SS;
  int local_4;
  
  if ((*(char *)(param_1 + -0x2d) == '\x01') || (*(char *)(param_1 + -0x2d) == '\x03')) {
    uVar3 = (undefined2)((ulong)*(undefined4 *)(param_1 + 6) >> 0x10);
    iVar2 = (int)*(undefined4 *)(param_1 + 6);
    if ((*(int *)(iVar2 + 0xe8) == 0) && (*(int *)(iVar2 + 0xe6) == 1)) {
      iVar2 = FUN_1138_18a9(iVar2,uVar3);
      local_4 = FUN_10f8_6e30((int)*(undefined4 *)(param_1 + 6),
                              (int)((ulong)*(undefined4 *)(param_1 + 6) >> 0x10),0,0);
      local_4 = local_4 - iVar2;
      if (local_4 < 0) {
        local_4 = 0;
      }
      FUN_1138_62b9((int)*(undefined4 *)(param_1 + 6),
                    (int)((ulong)*(undefined4 *)(param_1 + 6) >> 0x10));
      SETSCROLLRANGE(0x1138,1,local_4,0,0);
    }
    else {
      FUN_10f8_5910(param_1);
      uVar1 = *(uint *)((int)*(undefined4 *)(param_1 + 6) + 0xfe);
      iVar2 = (int)uVar1 >> 0xf;
      if ((iVar2 < *(int *)(param_1 + -6)) ||
         ((iVar2 <= *(int *)(param_1 + -6) && (uVar1 < *(uint *)(param_1 + -8))))) {
        uVar3 = FUN_1138_62b9((int)*(undefined4 *)(param_1 + 6),
                              (int)((ulong)*(undefined4 *)(param_1 + 6) >> 0x10));
        SETSCROLLRANGE(0x1138,1,0x7fff,0,0);
      }
      else {
        uVar3 = FUN_1138_62b9((int)*(undefined4 *)(param_1 + 6),
                              (int)((ulong)*(undefined4 *)(param_1 + 6) >> 0x10));
        SETSCROLLRANGE(0x1138,1,0,0,0);
      }
      if ((*(int *)(param_1 + -6) < *(int *)(param_1 + -0xe)) ||
         ((*(int *)(param_1 + -6) <= *(int *)(param_1 + -0xe) &&
          (*(uint *)(param_1 + -8) < *(uint *)(param_1 + -0x10))))) {
        FUN_10f8_5877(param_1,uVar3);
        uVar3 = *(undefined2 *)(param_1 + -6);
        uVar4 = (undefined2)((ulong)*(undefined4 *)(param_1 + 6) >> 0x10);
        iVar2 = (int)*(undefined4 *)(param_1 + 6);
        *(undefined2 *)(iVar2 + 0x113) = *(undefined2 *)(param_1 + -8);
        *(undefined2 *)(iVar2 + 0x115) = uVar3;
      }
    }
  }
  return;
}



/* ---- FUN_10f8_5acb @ 10f8:5acb  (181 octets) ---- */

void FUN_10f8_5acb(int param_1)

{
  uint uVar1;
  undefined2 uVar2;
  int iVar3;
  undefined2 uVar4;
  undefined2 unaff_SS;
  
  if ((1 < *(byte *)(param_1 + -0x2d)) && (*(byte *)(param_1 + -0x2d) < 4)) {
    FUN_10f8_5910(param_1);
    uVar1 = *(uint *)((int)*(undefined4 *)(param_1 + 6) + 0x100);
    iVar3 = (int)uVar1 >> 0xf;
    if ((iVar3 < *(int *)(param_1 + -2)) ||
       ((iVar3 <= *(int *)(param_1 + -2) && (uVar1 < *(uint *)(param_1 + -4))))) {
      uVar2 = FUN_1138_62b9((int)*(undefined4 *)(param_1 + 6),
                            (int)((ulong)*(undefined4 *)(param_1 + 6) >> 0x10));
      SETSCROLLRANGE(0x1138,1,0x7fff,0,1);
    }
    else {
      uVar2 = FUN_1138_62b9((int)*(undefined4 *)(param_1 + 6),
                            (int)((ulong)*(undefined4 *)(param_1 + 6) >> 0x10));
      SETSCROLLRANGE(0x1138,1,0,0,1);
    }
    if ((*(int *)(param_1 + -2) < *(int *)(param_1 + -10)) ||
       ((*(int *)(param_1 + -2) <= *(int *)(param_1 + -10) &&
        (*(uint *)(param_1 + -4) < *(uint *)(param_1 + -0xc))))) {
      FUN_10f8_5877(param_1,uVar2);
      uVar2 = *(undefined2 *)(param_1 + -2);
      uVar4 = (undefined2)((ulong)*(undefined4 *)(param_1 + 6) >> 0x10);
      iVar3 = (int)*(undefined4 *)(param_1 + 6);
      *(undefined2 *)(iVar3 + 0x117) = *(undefined2 *)(param_1 + -4);
      *(undefined2 *)(iVar3 + 0x119) = uVar2;
    }
  }
  return;
}



/* ---- FUN_10f8_5b86 @ 10f8:5b86  (232 octets) ---- */

void __stdcall16far FUN_10f8_5b86(undefined4 param_1)

{
  undefined uVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined2 uVar5;
  undefined *puStack_3c;
  int local_20;
  undefined local_12 [16];
  
  uVar5 = (undefined2)((ulong)param_1 >> 0x10);
  iVar4 = (int)param_1;
  if (*(char *)(iVar4 + 0x112) != '\0') {
    cVar2 = FUN_1138_64fa();
    if (cVar2 != '\0') {
      local_20 = FUN_1138_18a9();
      FUN_1138_18f4();
      cVar2 = FUN_10f8_58a0();
      if (cVar2 != '\0') {
        GETSYSTEMMETRICS();
      }
      cVar2 = FUN_10f8_58a0();
      if (cVar2 != '\0') {
        iVar3 = GETSYSTEMMETRICS();
        local_20 = local_20 + iVar3;
      }
      puStack_3c = local_12;
      FUN_1158_161b(8);
      uVar1 = *(undefined *)(iVar4 + 0x112);
      *(undefined *)(iVar4 + 0x112) = 0;
      puStack_3c = (undefined *)DAT_1160_1858;
      DAT_1160_1858 = &puStack_3c;
      FUN_10f8_59b3(&stack0xfffe);
      FUN_1138_18f4(iVar4,uVar5);
      FUN_10f8_5acb(&stack0xfffe);
      iVar3 = FUN_1138_18a9(iVar4,uVar5);
      if (iVar3 != local_20) {
        FUN_1138_18a9(iVar4,uVar5);
        FUN_10f8_59b3(&stack0xfffe);
      }
      DAT_1160_1858 = (undefined **)puStack_3c;
      *(undefined *)(iVar4 + 0x112) = uVar1;
      return;
    }
  }
  return;
}



/* ---- FUN_10f8_5cb2 @ 10f8:5cb2  (42 octets) ---- */

undefined4 __stdcall16far FUN_10f8_5cb2(undefined2 param_1,undefined2 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_10f8_1615(0x58,0x10f8,1,param_1,param_2);
  return uVar1;
}



/* ---- FUN_10f8_5cdc @ 10f8:5cdc  (185 octets) ---- */

void __stdcall16far FUN_10f8_5cdc(undefined4 param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  
  uVar4 = (undefined2)((ulong)param_2 >> 0x10);
  iVar2 = (int)param_2;
  uVar5 = (undefined2)((ulong)param_1 >> 0x10);
  iVar3 = (int)param_1;
  FUN_1138_3b29(iVar3,uVar5,iVar2,uVar4);
  uVar1 = *(uint *)(iVar2 + 6);
  *(undefined2 *)(iVar2 + 4) = *(undefined2 *)(iVar2 + 4);
  *(uint *)(iVar2 + 6) = uVar1 | 1;
  if (*(char *)(iVar3 + 0xe4) == '\x01') {
    uVar1 = *(uint *)(iVar2 + 6);
    *(undefined2 *)(iVar2 + 4) = *(undefined2 *)(iVar2 + 4);
    *(uint *)(iVar2 + 6) = uVar1 | 0x80;
  }
  if ((1 < *(byte *)(iVar3 + 0x112)) && (*(byte *)(iVar3 + 0x112) < 4)) {
    uVar1 = *(uint *)(iVar2 + 6);
    *(undefined2 *)(iVar2 + 4) = *(undefined2 *)(iVar2 + 4);
    *(uint *)(iVar2 + 6) = uVar1 | 0x20;
  }
  if ((*(char *)(iVar3 + 0x112) == '\x01') || (*(char *)(iVar3 + 0x112) == '\x03')) {
    uVar1 = *(uint *)(iVar2 + 6);
    *(undefined2 *)(iVar2 + 4) = *(undefined2 *)(iVar2 + 4);
    *(uint *)(iVar2 + 6) = uVar1 | 0x10;
  }
  *(undefined2 *)(iVar2 + 0x1a) = 8;
  return;
}



/* ---- FUN_10f8_5d95 @ 10f8:5d95  (126 octets) ---- */

void FUN_10f8_5d95(int param_1)

{
  undefined2 unaff_SS;
  
  FUN_10f8_344f((int)*(undefined4 *)(param_1 + 6),(int)((ulong)*(undefined4 *)(param_1 + 6) >> 0x10)
                ,param_1 + -0x34,unaff_SS);
  *(int *)(param_1 + -0x36) =
       *(int *)(param_1 + -0x24) - *(int *)((int)*(undefined4 *)(param_1 + 6) + 0x113);
  if (*(int *)(param_1 + -0x36) < 1) {
    *(undefined2 *)(param_1 + -0x36) = 1;
  }
  *(int *)(param_1 + -0x38) =
       *(int *)(param_1 + -0x20) - *(int *)((int)*(undefined4 *)(param_1 + 6) + 0x117);
  if (*(int *)(param_1 + -0x38) < 1) {
    *(undefined2 *)(param_1 + -0x38) = 1;
  }
  return;
}



/* ---- FUN_10f8_5e13 @ 10f8:5e13  (174 octets) ---- */

void FUN_10f8_5e13(undefined2 param_1_00,uint param_1,uint param_2,uint param_3,uint param_4,
                  uint param_5,uint param_6,uint param_7,uint param_8,uint *param_9)

{
  uint *puVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_9 >> 0x10);
  puVar1 = (uint *)param_9;
  if (((int)param_4 < (int)puVar1[1]) || (((int)param_4 <= (int)puVar1[1] && (param_3 < *param_9))))
  {
    *param_9 = param_3;
    puVar1[1] = param_4;
  }
  else if (((int)puVar1[1] < (int)param_8) ||
          (((int)puVar1[1] <= (int)param_8 && (*param_9 < param_7)))) {
    *param_9 = param_7;
    puVar1[1] = param_8;
  }
  if (((int)param_2 < (int)puVar1[3]) || (((int)param_2 <= (int)puVar1[3] && (param_1 < puVar1[2])))
     ) {
    puVar1[2] = param_1;
    puVar1[3] = param_2;
  }
  else if (((int)puVar1[3] < (int)param_6) ||
          (((int)puVar1[3] <= (int)param_6 && (puVar1[2] < param_5)))) {
    puVar1[2] = param_5;
    puVar1[3] = param_6;
  }
  return;
}



/* ---- FUN_10f8_63b6 @ 10f8:63b6  (79 octets) ---- */

void __stdcall16far FUN_10f8_63b6(undefined4 param_1,char *param_2)

{
  int iVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  FUN_1138_521f(iVar1,uVar2,(char *)param_2,(int)((ulong)param_2 >> 0x10));
  if (((*(byte *)(iVar1 + 0x109) & 0x20) == 0) && (*param_2 == '\r')) {
    if (*(char *)(iVar1 + 0x13c) == '\0') {
      FUN_10f8_2549(iVar1,uVar2);
    }
    else {
      FUN_10f8_2532(iVar1,uVar2);
    }
    *param_2 = '\0';
  }
  return;
}



/* ---- FUN_10f8_640f @ 10f8:640f  (813 octets) ---- */

void __stdcall16far
FUN_10f8_640f(uint *param_1,uint *param_2,undefined2 param_3,byte param_4,char param_5)

{
  undefined2 *puVar1;
  char cVar2;
  undefined2 uVar3;
  int iVar4;
  uint *puVar5;
  uint *puVar6;
  undefined2 unaff_SS;
  undefined4 uVar7;
  uint *puStack_3c;
  undefined local_26 [28];
  uint local_a;
  uint local_8;
  uint *local_6;
  uint *local_4;
  
  puVar6 = (uint *)((ulong)param_1 >> 0x10);
  puVar5 = (uint *)param_1;
  FUN_10f8_761b();
  if ((*(byte *)(puVar5 + 0xc) & 0x10) == 0) {
    puStack_3c = (uint *)0x6432;
    cVar2 = FUN_1138_61c4();
    if (cVar2 != '\0') {
      puVar1 = (undefined2 *)((int)*(undefined4 *)param_1 + 0x78);
      puStack_3c = (uint *)0x6442;
      (*(code *)*puVar1)();
      puStack_3c = (uint *)0x644d;
      uVar7 = FUN_1140_1801();
      uVar3 = (undefined2)((ulong)uVar7 >> 0x10);
      if (((uint *)*(int *)((int)uVar7 + 0xe6) != puVar6) ||
         ((uint *)*(int *)((int)uVar7 + 0xe4) != puVar5)) {
        puStack_3c = (uint *)0x1140;
        FUN_1138_1fb3();
        return;
      }
    }
  }
  if ((param_5 == '\0') && ((param_4 & 0x40) != 0)) {
    puStack_3c = (uint *)0x648d;
    FUN_1158_206a();
  }
  else if (param_5 == '\0') {
    puStack_3c = puVar5;
    FUN_10f8_344f();
    puStack_3c = (uint *)((int)puVar5 + 0x13f);
    FUN_10f8_3836(puVar5,puVar6,local_26,unaff_SS,(int)puVar5 + 0x121,puVar6,(int)puVar5 + 0x11f,
                  puVar6,(int)puVar5 + 0x11b,puVar6);
    if (*(char *)((int)puVar5 + 0x13f) != '\0') {
      puStack_3c = puVar5;
      FUN_10f8_3f7f();
      return;
    }
    puStack_3c = param_2;
    FUN_10f8_3226(puVar5,puVar6,local_26,unaff_SS);
    puStack_3c = &local_a;
    FUN_1158_161b(8);
    iVar4 = (int)puVar5[0x7f] >> 0xf;
    if ((iVar4 < (int)local_8) || ((iVar4 <= (int)local_8 && (puVar5[0x7f] <= local_a)))) {
      iVar4 = (int)puVar5[0x80] >> 0xf;
      if ((iVar4 < (int)local_4) || ((iVar4 <= (int)local_4 && ((uint *)puVar5[0x80] <= local_6))))
      {
        if ((*(byte *)((int)puVar5 + 0x109) & 4) == 0) {
          *(undefined *)((int)puVar5 + 0x13f) = 1;
          puStack_3c = (uint *)0x65d9;
          FUN_1138_62b9();
          puStack_3c = (uint *)0x0;
          SETTIMER(0x1138,0);
          if ((param_4 & 1) == 0) {
            puStack_3c = local_4;
            FUN_10f8_4fd6(puVar5,puVar6,1,1,local_6);
          }
          else {
            puStack_3c = puVar6;
            FUN_10f8_4f25(puVar5);
          }
        }
        else {
          if ((((local_8 == puVar5[0x7a]) && (local_a == puVar5[0x79])) &&
              (local_4 == (uint *)puVar5[0x7c])) && (local_6 == (uint *)puVar5[0x7b])) {
            puStack_3c = (uint *)0x6594;
            FUN_10f8_2549();
          }
          else {
            puStack_3c = local_6;
            FUN_10f8_4fd6(puVar5,puVar6,1,1);
            puStack_3c = (uint *)0x65ba;
            FUN_10f8_77c1();
          }
          puStack_3c = (uint *)0x65c7;
          FUN_1158_206a();
        }
        goto LAB_10f8_6709;
      }
    }
    if ((*(byte *)((int)puVar5 + 0x109) & 1) != 0) {
      iVar4 = (int)puVar5[0x7f] >> 0xf;
      if (((int)local_8 < iVar4) || (((int)local_8 <= iVar4 && (local_a < puVar5[0x7f])))) {
        iVar4 = (int)puVar5[0x80] >> 0xf;
        if ((iVar4 < (int)local_4) || ((iVar4 <= (int)local_4 && ((uint *)puVar5[0x80] <= local_6)))
           ) {
          *(undefined *)((int)puVar5 + 0x13f) = 4;
          *(uint *)((int)puVar5 + 0x123) = (uint)local_6;
          *(uint *)((int)puVar5 + 0x125) = (uint)local_4;
          uVar3 = *(undefined2 *)((int)puVar5 + 0x125);
          *(undefined2 *)((int)puVar5 + 0x127) = *(undefined2 *)((int)puVar5 + 0x123);
          *(undefined2 *)((int)puVar5 + 0x129) = uVar3;
          puVar1 = (undefined2 *)((int)*(undefined4 *)param_1 + 0x50);
          puStack_3c = (uint *)0x6683;
          (*(code *)*puVar1)();
          FUN_10f8_40bb();
          goto LAB_10f8_6709;
        }
      }
    }
    if ((*(byte *)((int)puVar5 + 0x109) & 2) != 0) {
      iVar4 = (int)puVar5[0x80] >> 0xf;
      if (((int)local_4 < iVar4) || (((int)local_4 <= iVar4 && (local_6 < (uint *)puVar5[0x80])))) {
        iVar4 = (int)puVar5[0x7f] >> 0xf;
        if ((iVar4 < (int)local_8) || ((iVar4 <= (int)local_8 && (puVar5[0x7f] <= local_a)))) {
          *(undefined *)((int)puVar5 + 0x13f) = 5;
          *(uint *)((int)puVar5 + 0x123) = local_a;
          *(uint *)((int)puVar5 + 0x125) = local_8;
          uVar3 = *(undefined2 *)((int)puVar5 + 0x125);
          *(undefined2 *)((int)puVar5 + 0x127) = *(undefined2 *)((int)puVar5 + 0x123);
          *(undefined2 *)((int)puVar5 + 0x129) = uVar3;
          puVar1 = (undefined2 *)((int)*(undefined4 *)param_1 + 0x50);
          puStack_3c = (uint *)0x66fb;
          (*(code *)*puVar1)();
          FUN_10f8_40bb();
        }
      }
    }
  }
LAB_10f8_6709:
  puStack_3c = (uint *)DAT_1160_1858;
  DAT_1160_1858 = &puStack_3c;
  FUN_1138_27c0(puVar5,puVar6,param_2,param_3,CONCAT11(100,param_4),CONCAT11(100,param_5));
  DAT_1160_1858 = (uint **)puStack_3c;
  return;
}



/* ---- FUN_10f8_6751 @ 10f8:6751  (96 octets) ---- */

void FUN_10f8_6751(int param_1,uint param_2,int param_3,uint param_4,int param_5)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 unaff_SS;
  
  uVar2 = (undefined2)((ulong)*(undefined4 *)(param_1 + 6) >> 0x10);
  iVar1 = (int)*(undefined4 *)(param_1 + 6);
  if ((param_5 != *(int *)(iVar1 + 0x129)) || (param_4 != *(uint *)(iVar1 + 0x127))) {
    if ((param_3 < param_5) || ((param_3 <= param_5 && (param_2 <= param_4)))) {
      FUN_10f8_40bb((int)*(undefined4 *)(param_1 + 6),
                    (int)((ulong)*(undefined4 *)(param_1 + 6) >> 0x10));
      uVar2 = (undefined2)((ulong)*(undefined4 *)(param_1 + 6) >> 0x10);
      iVar1 = (int)*(undefined4 *)(param_1 + 6);
      *(uint *)(iVar1 + 0x127) = param_4;
      *(int *)(iVar1 + 0x129) = param_5;
      FUN_10f8_40bb(iVar1,uVar2);
    }
  }
  return;
}



/* ---- FUN_10f8_69bd @ 10f8:69bd  (269 octets) ---- */

void FUN_10f8_69bd(int param_1,uint *param_2)

{
  uint uVar1;
  uint *puVar2;
  int iVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined2 unaff_SS;
  uint local_a;
  int local_8;
  uint local_6;
  int local_4;
  
  uVar4 = (undefined2)((ulong)param_2 >> 0x10);
  puVar2 = (uint *)param_2;
  uVar5 = (undefined2)((ulong)*(undefined4 *)(param_1 + 6) >> 0x10);
  iVar3 = (int)*(undefined4 *)(param_1 + 6);
  if ((puVar2[1] == *(uint *)(iVar3 + 0x125)) && (*param_2 == *(uint *)(iVar3 + 0x123))) {
    uVar1 = *(uint *)(iVar3 + 0x129);
    *param_2 = *(uint *)(iVar3 + 0x127);
    puVar2[1] = uVar1;
  }
  else {
    uVar5 = (undefined2)((ulong)*(undefined4 *)(param_1 + 6) >> 0x10);
    iVar3 = (int)*(undefined4 *)(param_1 + 6);
    local_6 = *(uint *)(iVar3 + 0x123);
    local_4 = *(int *)(iVar3 + 0x125);
    local_a = *(uint *)(iVar3 + 0x127);
    local_8 = *(int *)(iVar3 + 0x129);
    if ((*(int *)(iVar3 + 0x129) < *(int *)(iVar3 + 0x125)) ||
       ((*(int *)(iVar3 + 0x129) <= *(int *)(iVar3 + 0x125) &&
        (*(uint *)(iVar3 + 0x127) < *(uint *)(iVar3 + 0x123))))) {
      uVar5 = (undefined2)((ulong)*(undefined4 *)(param_1 + 6) >> 0x10);
      iVar3 = (int)*(undefined4 *)(param_1 + 6);
      local_6 = *(uint *)(iVar3 + 0x127);
      local_4 = *(int *)(iVar3 + 0x129);
      local_a = *(uint *)(iVar3 + 0x123);
      local_8 = *(int *)(iVar3 + 0x125);
    }
    if ((local_4 < (int)puVar2[1]) || ((local_4 <= (int)puVar2[1] && (local_6 <= *param_2)))) {
      if (((int)puVar2[1] < local_8) || (((int)puVar2[1] <= local_8 && (*param_2 <= local_a)))) {
        uVar5 = (undefined2)((ulong)*(undefined4 *)(param_1 + 6) >> 0x10);
        iVar3 = (int)*(undefined4 *)(param_1 + 6);
        if ((*(int *)(iVar3 + 0x129) < *(int *)(iVar3 + 0x125)) ||
           ((*(int *)(iVar3 + 0x129) <= *(int *)(iVar3 + 0x125) &&
            (*(uint *)(iVar3 + 0x127) < *(uint *)(iVar3 + 0x123))))) {
          uVar1 = *param_2;
          *param_2 = *param_2 + 1;
          puVar2[1] = puVar2[1] + (uint)(0xfffe < uVar1);
        }
        else {
          uVar1 = *param_2;
          *param_2 = *param_2 - 1;
          puVar2[1] = puVar2[1] - (uint)(uVar1 == 0);
        }
      }
    }
  }
  return;
}



/* ---- FUN_10f8_6e30 @ 10f8:6e30  (91 octets) ---- */

undefined2 __stdcall16far FUN_10f8_6e30(undefined4 param_1,uint param_2,int param_3)

{
  int iVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  if (((*(int *)(iVar1 + 0xea) != 0 || *(int *)(iVar1 + 0xec) != 0) &&
      (param_3 <= *(int *)(iVar1 + 0xe8))) &&
     ((param_3 < *(int *)(iVar1 + 0xe8) || (param_2 < *(uint *)(iVar1 + 0xe6))))) {
    return *(undefined2 *)((int)*(undefined4 *)(iVar1 + 0xea) + (param_2 + 1) * 2);
  }
  return *(undefined2 *)(iVar1 + 0xfa);
}



/* ---- FUN_10f8_6e8b @ 10f8:6e8b  (91 octets) ---- */

undefined2 __stdcall16far FUN_10f8_6e8b(undefined4 param_1,uint param_2,int param_3)

{
  int iVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  if (((*(int *)(iVar1 + 0x10e) != 0 || *(int *)(iVar1 + 0x110) != 0) &&
      (param_3 <= *(int *)(iVar1 + 0x10c))) &&
     ((param_3 < *(int *)(iVar1 + 0x10c) || (param_2 < *(uint *)(iVar1 + 0x10a))))) {
    return *(undefined2 *)((int)*(undefined4 *)(iVar1 + 0x10e) + (param_2 + 1) * 2);
  }
  return *(undefined2 *)(iVar1 + 0xfc);
}



/* ---- FUN_10f8_6ee6 @ 10f8:6ee6  (46 octets) ---- */

void __stdcall16far FUN_10f8_6ee6(undefined4 param_1,undefined4 param_2)

{
  undefined2 uVar1;
  undefined2 unaff_SS;
  undefined *puVar2;
  undefined local_12 [16];
  
  puVar2 = local_12;
  uVar1 = (undefined2)((ulong)param_1 >> 0x10);
  FUN_10f8_0f4f((int)param_1 + 0xdc,uVar1,(int)param_1 + 0xf2,uVar1);
  FUN_1158_161b(0x10,(int)param_2,(int)((ulong)param_2 >> 0x10),puVar2,unaff_SS);
  return;
}



/* ---- FUN_10f8_6f14 @ 10f8:6f14  (62 octets) ---- */

undefined2 __stdcall16far FUN_10f8_6f14(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined uVar2;
  int iVar3;
  undefined2 uVar4;
  undefined local_3;
  
  uVar4 = (undefined2)((ulong)param_1 >> 0x10);
  iVar3 = (int)param_1;
  if (*(int *)(iVar3 + 0xee) == 0 && *(int *)(iVar3 + 0xf0) == 0) {
    local_3 = 1;
    uVar2 = 0;
  }
  else {
    iVar1 = (param_2 + 1) * 2;
    local_3 = *(undefined *)((int)*(undefined4 *)(iVar3 + 0xee) + iVar1);
    uVar2 = (undefined)((uint)iVar1 >> 8);
  }
  return CONCAT11(uVar2,local_3);
}



/* ---- FUN_10f8_6f52 @ 10f8:6f52  (54 octets) ---- */

undefined4 __stdcall16far FUN_10f8_6f52(undefined4 param_1)

{
  uint uVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 unaff_SS;
  undefined local_20 [16];
  uint local_10;
  int local_e;
  
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  iVar2 = (int)param_1;
  FUN_10f8_344f(iVar2,uVar3,local_20,unaff_SS);
  uVar1 = local_10 - *(uint *)(iVar2 + 0x113);
  return CONCAT22(((local_e - *(int *)(iVar2 + 0x115)) - (uint)(local_10 < *(uint *)(iVar2 + 0x113))
                  ) + (uint)(0xfffe < uVar1),uVar1 + 1);
}



/* ---- FUN_10f8_6f88 @ 10f8:6f88  (54 octets) ---- */

undefined4 __stdcall16far FUN_10f8_6f88(undefined4 param_1)

{
  uint uVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 unaff_SS;
  undefined local_20 [20];
  uint local_c;
  int local_a;
  
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  iVar2 = (int)param_1;
  FUN_10f8_344f(iVar2,uVar3,local_20,unaff_SS);
  uVar1 = local_c - *(uint *)(iVar2 + 0x117);
  return CONCAT22(((local_a - *(int *)(iVar2 + 0x119)) - (uint)(local_c < *(uint *)(iVar2 + 0x117)))
                  + (uint)(0xfffe < uVar1),uVar1 + 1);
}



/* ---- FUN_10f8_6fbe @ 10f8:6fbe  (35 octets) ---- */

void __stdcall16far FUN_10f8_6fbe(undefined4 param_1,char param_2)

{
  int iVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  if (*(char *)(iVar1 + 0xe4) != param_2) {
    *(char *)(iVar1 + 0xe4) = param_2;
    FUN_1138_405a(iVar1,uVar2);
  }
  return;
}



/* ---- FUN_10f8_6fe1 @ 10f8:6fe1  (58 octets) ---- */

void __stdcall16far FUN_10f8_6fe1(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  if ((*(int *)(iVar1 + 0xf4) != param_3) || (*(int *)(iVar1 + 0xf2) != param_2)) {
    FUN_10f8_4286(iVar1,uVar2,1,*(undefined2 *)(iVar1 + 0xf6),*(undefined2 *)(iVar1 + 0xf8),param_2,
                  param_3);
  }
  return;
}



/* ---- FUN_10f8_701b @ 10f8:701b  (174 octets) ---- */

void __stdcall16far FUN_10f8_701b(undefined4 *param_1,uint param_2,int param_3)

{
  int iVar1;
  undefined2 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined2 uVar5;
  
  uVar5 = (undefined2)((ulong)param_1 >> 0x10);
  puVar4 = (undefined4 *)param_1;
  if ((*(int *)(puVar4 + 0x3a) != param_3) || (*(uint *)((int)puVar4 + 0xe6) != param_2)) {
    if ((param_3 < 0) || ((param_3 < 1 && (param_2 == 0)))) {
      param_2 = 1;
      param_3 = 0;
    }
    iVar3 = (int)*(uint *)((int)puVar4 + 0xfe) >> 0xf;
    if ((param_3 < iVar3) || ((param_3 <= iVar3 && (param_2 <= *(uint *)((int)puVar4 + 0xfe))))) {
      FUN_10f8_7232(puVar4,uVar5,param_2 - 1);
    }
    FUN_10f8_3cd1(puVar4,uVar5,*(undefined2 *)((int)puVar4 + 0x10a),*(undefined2 *)(puVar4 + 0x43),
                  param_2,param_3);
    if ((*(byte *)((int)puVar4 + 0x109) & 0x10) != 0) {
      iVar3 = *(int *)((int)puVar4 + 0xe6);
      iVar1 = *(int *)(puVar4 + 0x3a);
      *(int *)(puVar4 + 0x37) = iVar3 + -1;
      *(int *)((int)puVar4 + 0xde) = iVar1 - (uint)(iVar3 == 0);
      puVar2 = (undefined2 *)((int)*param_1 + 0x44);
      (*(code *)*puVar2)(0x10f8,puVar4,uVar5);
    }
  }
  return;
}



/* ---- FUN_10f8_70c9 @ 10f8:70c9  (169 octets) ---- */

void __stdcall16far FUN_10f8_70c9(undefined4 param_1,undefined2 param_2,uint param_3,int param_4)

{
  int iVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  if (*(int *)(iVar1 + 0xea) == 0 && *(int *)(iVar1 + 0xec) == 0) {
    FUN_10f8_1454(*(undefined2 *)(iVar1 + 0xfa),*(undefined2 *)(iVar1 + 0xe6),
                  *(undefined2 *)(iVar1 + 0xe8),iVar1 + 0xea,uVar2);
  }
  if ((*(int *)(iVar1 + 0xe8) < param_4) ||
     ((*(int *)(iVar1 + 0xe8) <= param_4 && (*(uint *)(iVar1 + 0xe6) <= param_3)))) {
    FUN_10f8_0f22(0xf057);
  }
  FUN_10f8_51fb(iVar1,uVar2,param_2,
                *(undefined2 *)((int)*(undefined4 *)(iVar1 + 0xea) + (param_3 + 1) * 2),param_3,
                param_4);
  *(undefined2 *)((int)*(undefined4 *)(iVar1 + 0xea) + (param_3 + 1) * 2) = param_2;
  FUN_1158_206a(0x10f8,iVar1,uVar2);
  return;
}



/* ---- FUN_10f8_7172 @ 10f8:7172  (68 octets) ---- */

void __stdcall16far FUN_10f8_7172(undefined4 param_1,undefined2 param_2)

{
  int iVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  if (*(int *)(iVar1 + 0xea) != 0 || *(int *)(iVar1 + 0xec) != 0) {
    FUN_10f8_1454(0,0,0,iVar1 + 0xea,uVar2);
  }
  *(undefined2 *)(iVar1 + 0xfa) = param_2;
  FUN_1158_206a();
  FUN_10f8_4882(iVar1,uVar2);
  return;
}



/* ---- FUN_10f8_71b6 @ 10f8:71b6  (68 octets) ---- */

void __stdcall16far FUN_10f8_71b6(undefined4 param_1,undefined2 param_2)

{
  int iVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  if (*(int *)(iVar1 + 0x10e) != 0 || *(int *)(iVar1 + 0x110) != 0) {
    FUN_10f8_1454(0,0,0,iVar1 + 0x10e,uVar2);
  }
  *(undefined2 *)(iVar1 + 0xfc) = param_2;
  FUN_1158_206a();
  FUN_10f8_4882(iVar1,uVar2);
  return;
}



/* ---- FUN_10f8_71fa @ 10f8:71fa  (56 octets) ---- */

void __stdcall16far FUN_10f8_71fa(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  if ((*(int *)(iVar1 + 0x104) != param_3) || (*(int *)(iVar1 + 0x102) != param_2)) {
    *(int *)(iVar1 + 0x102) = param_2;
    *(int *)(iVar1 + 0x104) = param_3;
    FUN_10f8_4882(iVar1,uVar2);
  }
  return;
}



/* ---- FUN_10f8_7232 @ 10f8:7232  (89 octets) ---- */

void __stdcall16far FUN_10f8_7232(undefined4 param_1,uint param_2)

{
  int iVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  if (*(uint *)(iVar1 + 0xfe) != param_2) {
    if ((int)param_2 < 0) {
      FUN_10f8_0f22(0xf057);
    }
    if ((*(int *)(iVar1 + 0xe8) < (int)param_2 >> 0xf) ||
       ((*(int *)(iVar1 + 0xe8) <= (int)param_2 >> 0xf && (*(uint *)(iVar1 + 0xe6) <= param_2)))) {
      FUN_10f8_0f22(0xf058);
    }
    *(uint *)(iVar1 + 0xfe) = param_2;
    FUN_10f8_47bd(iVar1,uVar2);
    FUN_10f8_4882(iVar1,uVar2);
  }
  return;
}



/* ---- FUN_10f8_728b @ 10f8:728b  (89 octets) ---- */

void __stdcall16far FUN_10f8_728b(undefined4 param_1,uint param_2)

{
  int iVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  if (*(uint *)(iVar1 + 0x100) != param_2) {
    if ((int)param_2 < 0) {
      FUN_10f8_0f22(0xf057);
    }
    if ((*(int *)(iVar1 + 0x10c) < (int)param_2 >> 0xf) ||
       ((*(int *)(iVar1 + 0x10c) <= (int)param_2 >> 0xf && (*(uint *)(iVar1 + 0x10a) <= param_2))))
    {
      FUN_10f8_0f22(0xf059);
    }
    *(uint *)(iVar1 + 0x100) = param_2;
    FUN_10f8_47bd(iVar1,uVar2);
    FUN_10f8_4882(iVar1,uVar2);
  }
  return;
}



/* ---- FUN_10f8_72e4 @ 10f8:72e4  (62 octets) ---- */

void __stdcall16far FUN_10f8_72e4(undefined4 param_1,char param_2)

{
  int iVar1;
  undefined2 uVar2;
  
  iVar1 = (int)param_1;
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  if (param_2 == '\0') {
    FUN_10f8_2532(iVar1,uVar2);
  }
  else {
    FUN_10f8_2549(iVar1,uVar2);
    if (*(int *)(iVar1 + 0x12f) != 0 || *(int *)(iVar1 + 0x131) != 0) {
      FUN_10f8_1bfb((int)*(undefined4 *)(iVar1 + 0x12f),
                    (int)((ulong)*(undefined4 *)(iVar1 + 0x12f) >> 0x10));
    }
  }
  return;
}



/* ---- FUN_10f8_7322 @ 10f8:7322  (35 octets) ---- */

void __stdcall16far FUN_10f8_7322(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  if (*(int *)(iVar1 + 0x106) != param_2) {
    *(int *)(iVar1 + 0x106) = param_2;
    FUN_10f8_4882(iVar1,uVar2);
  }
  return;
}



/* ---- FUN_10f8_7345 @ 10f8:7345  (56 octets) ---- */

void __stdcall16far FUN_10f8_7345(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  if ((*(int *)(iVar1 + 0x115) != param_3) || (*(int *)(iVar1 + 0x113) != param_2)) {
    FUN_10f8_5173(iVar1,uVar2,*(undefined2 *)(iVar1 + 0x117),*(undefined2 *)(iVar1 + 0x119),param_2,
                  param_3);
  }
  return;
}



/* ---- FUN_10f8_737d @ 10f8:737d  (111 octets) ---- */

void __stdcall16far FUN_10f8_737d(undefined4 param_1,uint param_2)

{
  int iVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  if (*(uint *)(iVar1 + 0x108) != param_2) {
    *(uint *)(iVar1 + 0x108) = param_2;
    if (*(char *)(iVar1 + 0x13c) == '\0') {
      if ((param_2 & 0x2000) == 0) {
        FUN_10f8_2532(iVar1,uVar2);
      }
      else {
        FUN_10f8_2549(iVar1,uVar2);
      }
    }
    if ((param_2 & 0x1000) != 0) {
      FUN_10f8_4fd6(iVar1,uVar2,0,1,*(undefined2 *)(iVar1 + 0xf6),*(undefined2 *)(iVar1 + 0xf8),
                    *(undefined2 *)(iVar1 + 0xf2),*(undefined2 *)(iVar1 + 0xf4));
    }
    FUN_10f8_4882(iVar1,uVar2);
  }
  return;
}



/* ---- FUN_10f8_73ec @ 10f8:73ec  (58 octets) ---- */

void __stdcall16far FUN_10f8_73ec(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  if ((*(int *)(iVar1 + 0xf8) != param_3) || (*(int *)(iVar1 + 0xf6) != param_2)) {
    FUN_10f8_4286(iVar1,uVar2,1,param_2,param_3,*(undefined2 *)(iVar1 + 0xf2),
                  *(undefined2 *)(iVar1 + 0xf4));
  }
  return;
}



/* ---- FUN_10f8_7426 @ 10f8:7426  (125 octets) ---- */

void __stdcall16far FUN_10f8_7426(undefined4 param_1,uint param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined2 uVar3;
  
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  iVar2 = (int)param_1;
  if ((*(int *)(iVar2 + 0x10c) != param_3) || (*(uint *)(iVar2 + 0x10a) != param_2)) {
    if ((param_3 < 0) || ((param_3 < 1 && (param_2 == 0)))) {
      param_2 = 1;
      param_3 = 0;
    }
    iVar1 = (int)*(uint *)(iVar2 + 0x100) >> 0xf;
    if ((param_3 < iVar1) || ((param_3 <= iVar1 && (param_2 <= *(uint *)(iVar2 + 0x100))))) {
      FUN_10f8_728b(iVar2,uVar3,param_2 - 1);
    }
    FUN_10f8_3cd1(iVar2,uVar3,param_2,param_3,*(undefined2 *)(iVar2 + 0xe6),
                  *(undefined2 *)(iVar2 + 0xe8));
  }
  return;
}



/* ---- FUN_10f8_74a3 @ 10f8:74a3  (169 octets) ---- */

void __stdcall16far FUN_10f8_74a3(undefined4 param_1,undefined2 param_2,uint param_3,int param_4)

{
  int iVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  if (*(int *)(iVar1 + 0x10e) == 0 && *(int *)(iVar1 + 0x110) == 0) {
    FUN_10f8_1454(*(undefined2 *)(iVar1 + 0xfc),*(undefined2 *)(iVar1 + 0x10a),
                  *(undefined2 *)(iVar1 + 0x10c),iVar1 + 0x10e,uVar2);
  }
  if ((*(int *)(iVar1 + 0x10c) < param_4) ||
     ((*(int *)(iVar1 + 0x10c) <= param_4 && (*(uint *)(iVar1 + 0x10a) <= param_3)))) {
    FUN_10f8_0f22(0xf057);
  }
  FUN_10f8_520c(iVar1,uVar2,param_2,
                *(undefined2 *)((int)*(undefined4 *)(iVar1 + 0x10e) + (param_3 + 1) * 2),param_3,
                param_4);
  *(undefined2 *)((int)*(undefined4 *)(iVar1 + 0x10e) + (param_3 + 1) * 2) = param_2;
  FUN_1158_206a(0x10f8,iVar1,uVar2);
  return;
}



/* ---- FUN_10f8_754c @ 10f8:754c  (35 octets) ---- */

void __stdcall16far FUN_10f8_754c(undefined4 param_1,char param_2)

{
  int iVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  if (*(char *)(iVar1 + 0x112) != param_2) {
    *(char *)(iVar1 + 0x112) = param_2;
    FUN_1138_405a(iVar1,uVar2);
  }
  return;
}



/* ---- FUN_10f8_756f @ 10f8:756f  (110 octets) ---- */

void __stdcall16far FUN_10f8_756f(undefined4 param_1,char param_2,uint param_3,int param_4)

{
  int iVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  if (*(int *)(iVar1 + 0xee) == 0 && *(int *)(iVar1 + 0xf0) == 0) {
    FUN_10f8_1454(1,*(undefined2 *)(iVar1 + 0xe6),*(undefined2 *)(iVar1 + 0xe8),iVar1 + 0xee,uVar2);
  }
  if ((*(int *)(iVar1 + 0xe8) < param_4) ||
     ((*(int *)(iVar1 + 0xe8) <= param_4 && (*(uint *)(iVar1 + 0xe6) <= param_3)))) {
    FUN_10f8_0f22(0xf057);
  }
  *(int *)((int)*(undefined4 *)(iVar1 + 0xee) + (param_3 + 1) * 2) = (int)param_2;
  return;
}



/* ---- FUN_10f8_75dd @ 10f8:75dd  (56 octets) ---- */

void __stdcall16far FUN_10f8_75dd(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  if ((*(int *)(iVar1 + 0x119) != param_3) || (*(int *)(iVar1 + 0x117) != param_2)) {
    FUN_10f8_5173(iVar1,uVar2,param_2,param_3,*(undefined2 *)(iVar1 + 0x113),
                  *(undefined2 *)(iVar1 + 0x115));
  }
  return;
}



/* ---- FUN_10f8_761b @ 10f8:761b  (99 octets) ---- */

void __stdcall16far FUN_10f8_761b(undefined4 param_1)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uStack_a;
  undefined *puStack_8;
  undefined2 uStack_6;
  
  puStack_8 = &stack0xfffe;
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  if (*(int *)(iVar1 + 0x12f) != 0 || *(int *)(iVar1 + 0x131) != 0) {
    uStack_6 = 0x7615;
    uStack_a = DAT_1160_1858;
    DAT_1160_1858 = &uStack_a;
    FUN_10f8_78c3(iVar1,uVar2);
    DAT_1160_1858 = (undefined2 *)uStack_a;
    uStack_6 = 0x767a;
    *(undefined2 *)(iVar1 + 0x133) = 0xffff;
    *(undefined2 *)(iVar1 + 0x135) = 0xffff;
    *(undefined2 *)(iVar1 + 0x137) = 0xffff;
    *(undefined2 *)(iVar1 + 0x139) = 0xffff;
    puStack_8 = (undefined *)((ulong)*(undefined4 *)(iVar1 + 0x12f) >> 0x10);
    uStack_a = (undefined2)*(undefined4 *)(iVar1 + 0x12f);
    FUN_10f8_1cbf();
    return;
  }
  return;
}



/* ---- FUN_10f8_767f @ 10f8:767f  (322 octets) ---- */

undefined2 FUN_10f8_767f(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined2 unaff_CS;
  undefined2 unaff_SS;
  undefined local_104 [257];
  undefined local_3;
  
  local_3 = 0;
  uVar3 = (undefined2)((ulong)*(undefined4 *)(param_1 + 6) >> 0x10);
  iVar2 = (int)*(undefined4 *)(param_1 + 6);
  uVar4 = *(undefined2 *)(iVar2 + 0xf4);
  *(undefined2 *)(iVar2 + 0x133) = *(undefined2 *)(iVar2 + 0xf2);
  *(undefined2 *)(iVar2 + 0x135) = uVar4;
  uVar4 = *(undefined2 *)(iVar2 + 0xf8);
  *(undefined2 *)(iVar2 + 0x137) = *(undefined2 *)(iVar2 + 0xf6);
  *(undefined2 *)(iVar2 + 0x139) = uVar4;
  uVar1 = *(undefined4 *)((int)*(undefined4 *)(param_1 + 6) + 0x12f);
  FUN_1100_15b5((int)uVar1,(int)((ulong)uVar1 >> 0x10),0x767e,unaff_CS);
  uVar4 = (undefined2)((ulong)*(undefined4 *)(param_1 + 6) >> 0x10);
  iVar2 = (int)*(undefined4 *)(param_1 + 6);
  FUN_1158_206a(0x1100,iVar2,uVar4,*(undefined2 *)(iVar2 + 0xf6),*(undefined2 *)(iVar2 + 0xf8),
                *(undefined2 *)(iVar2 + 0xf2),*(undefined2 *)(iVar2 + 0xf4),local_104);
  uVar1 = *(undefined4 *)((int)*(undefined4 *)(param_1 + 6) + 0x12f);
  FUN_1100_192a((int)uVar1,(int)((ulong)uVar1 >> 0x10),iVar2,uVar4);
  uVar4 = (undefined2)((ulong)*(undefined4 *)(param_1 + 6) >> 0x10);
  iVar2 = (int)*(undefined4 *)(param_1 + 6);
  FUN_1158_206a(0x1100,iVar2,uVar4,*(undefined2 *)(iVar2 + 0xf6),*(undefined2 *)(iVar2 + 0xf8),
                *(undefined2 *)(iVar2 + 0xf2),*(undefined2 *)(iVar2 + 0xf4),local_104);
  uVar1 = *(undefined4 *)((int)*(undefined4 *)(param_1 + 6) + 0x12f);
  FUN_1100_15b5((int)uVar1,(int)((ulong)uVar1 >> 0x10),iVar2,uVar4);
  uVar4 = FUN_1158_206a(0x1100,(int)*(undefined4 *)(param_1 + 6),
                        (int)((ulong)*(undefined4 *)(param_1 + 6) >> 0x10));
  uVar1 = *(undefined4 *)((int)*(undefined4 *)(param_1 + 6) + 0x12f);
  FUN_1100_1a6b((int)uVar1,(int)((ulong)uVar1 >> 0x10),uVar4);
  uVar1 = *(undefined4 *)((int)*(undefined4 *)(param_1 + 6) + 0x12f);
  iVar2 = FUN_1100_1a55((int)uVar1,(int)((ulong)uVar1 >> 0x10));
  if (iVar2 == -1) {
    *(undefined *)((int)*(undefined4 *)(param_1 + 6) + 0xe5) = 0;
  }
  else {
    *(undefined *)((int)*(undefined4 *)(param_1 + 6) + 0xe5) = 1;
  }
  uVar1 = *(undefined4 *)((int)*(undefined4 *)(param_1 + 6) + 0x12f);
  FUN_1120_4a3f((int)uVar1,(int)((ulong)uVar1 >> 0x10));
  return 1;
}



/* ---- FUN_10f8_77c1 @ 10f8:77c1  (258 octets) ---- */

void __stdcall16far FUN_10f8_77c1(undefined4 *param_1)

{
  undefined2 *puVar1;
  undefined4 *puVar2;
  char cVar3;
  undefined4 *puVar4;
  undefined2 uVar5;
  undefined2 unaff_CS;
  undefined2 unaff_SS;
  undefined4 uVar6;
  undefined *puVar7;
  undefined4 *puVar8;
  undefined2 uVar9;
  undefined local_a [8];
  
  uVar5 = (undefined2)((ulong)param_1 >> 0x10);
  puVar4 = (undefined4 *)param_1;
  puVar1 = (undefined2 *)((int)*param_1 + 0x84);
  puVar8 = puVar4;
  uVar9 = uVar5;
  cVar3 = (*(code *)*puVar1)();
  if (cVar3 == '\0') {
    return;
  }
  if (*(int *)((int)puVar4 + 0x12f) == 0 && *(int *)((int)puVar4 + 0x131) == 0) {
    puVar1 = (undefined2 *)((int)*param_1 + 0x80);
    puVar8 = puVar4;
    uVar9 = uVar5;
    uVar6 = (*(code *)*puVar1)();
    *(undefined2 *)((int)puVar4 + 0x12f) = (int)uVar6;
    *(undefined2 *)((int)puVar4 + 0x131) = (int)((ulong)uVar6 >> 0x10);
    FUN_10f8_16b0((int)*(undefined4 *)((int)puVar4 + 0x12f),
                  (int)((ulong)*(undefined4 *)((int)puVar4 + 0x12f) >> 0x10),puVar4,uVar5);
    puVar2 = (undefined4 *)*(undefined4 *)((int)puVar4 + 0x12f);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x3c);
    (*(code *)*puVar1)(0x10f8,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),puVar4,uVar5,puVar8,
                       uVar9);
    cVar3 = FUN_10f8_767f(&stack0xfffe);
  }
  else {
    if ((((*(int *)(puVar4 + 0x3d) == *(int *)((int)puVar4 + 0x135)) &&
         (*(int *)((int)puVar4 + 0xf2) == *(int *)((int)puVar4 + 0x133))) &&
        (*(int *)(puVar4 + 0x3e) == *(int *)((int)puVar4 + 0x139))) &&
       (*(int *)((int)puVar4 + 0xf6) == *(int *)((int)puVar4 + 0x137))) goto LAB_10f8_787c;
    FUN_10f8_761b(puVar4,uVar5,puVar8,uVar9);
    cVar3 = FUN_10f8_767f(&stack0xfffe);
  }
  unaff_CS = 0x10f8;
  if (cVar3 == '\0') {
    return;
  }
LAB_10f8_787c:
  puVar1 = (undefined2 *)((int)*param_1 + 0x84);
  cVar3 = (*(code *)*puVar1)(unaff_CS,puVar4,uVar5);
  if (cVar3 != '\0') {
    puVar7 = local_a;
    FUN_10f8_2424(puVar4,uVar5,*(undefined2 *)((int)puVar4 + 0xf6),*(undefined2 *)(puVar4 + 0x3e),
                  *(undefined2 *)((int)puVar4 + 0xf2),*(undefined2 *)(puVar4 + 0x3d));
    FUN_10f8_1e59((int)*(undefined4 *)((int)puVar4 + 0x12f),
                  (int)((ulong)*(undefined4 *)((int)puVar4 + 0x12f) >> 0x10),puVar7,unaff_SS);
  }
  return;
}



/* ---- FUN_10f8_78c3 @ 10f8:78c3  (103 octets) ---- */

void __stdcall16far FUN_10f8_78c3(undefined4 param_1)

{
  int iVar1;
  undefined2 uVar2;
  undefined *puVar3;
  undefined local_102 [256];
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  if ((*(int *)(iVar1 + 0x135) != -1) || (*(int *)(iVar1 + 0x133) != -1)) {
    if ((*(int *)(iVar1 + 0x139) != -1) || (*(int *)(iVar1 + 0x137) != -1)) {
      puVar3 = local_102;
      FUN_1100_1524((int)*(undefined4 *)(iVar1 + 0x12f),
                    (int)((ulong)*(undefined4 *)(iVar1 + 0x12f) >> 0x10));
      FUN_1158_206a(0x1100,iVar1,uVar2,puVar3);
    }
  }
  return;
}



/* ---- FUN_10f8_792a @ 10f8:792a  (69 octets) ---- */

void __stdcall16far FUN_10f8_792a(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  if (((*(byte *)(iVar1 + 0x109) & 4) != 0) &&
     ((*(byte *)((int)param_2 + 2) == 8 || (0x1f < *(byte *)((int)param_2 + 2))))) {
    FUN_10f8_2560(iVar1,uVar2,*(undefined *)((int)param_2 + 2));
    return;
  }
  FUN_1138_52d3(iVar1,uVar2,(int)param_2,param_2._2_2_);
  return;
}



/* ---- FUN_10f8_796f @ 10f8:796f  (61 octets) ---- */

void __stdcall16far FUN_10f8_796f(undefined4 param_1,undefined2 param_2,undefined2 param_3)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  FUN_1138_282c(iVar1,uVar2,param_2,param_3);
  if (*(int *)(iVar1 + 0x12f) != 0 || *(int *)(iVar1 + 0x131) != 0) {
    uVar4 = GETMESSAGETIME(0x1138);
    uVar3 = (undefined2)((ulong)*(undefined4 *)(iVar1 + 0x12f) >> 0x10);
    iVar1 = (int)*(undefined4 *)(iVar1 + 0x12f);
    *(undefined2 *)(iVar1 + 0x101) = (int)uVar4;
    *(undefined2 *)(iVar1 + 0x103) = (int)((ulong)uVar4 >> 0x10);
  }
  return;
}



/* ---- FUN_10f8_79ac @ 10f8:79ac  (109 octets) ---- */

void __stdcall16far FUN_10f8_79ac(undefined4 param_1,undefined4 param_2)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  
  uVar4 = (undefined2)((ulong)param_2 >> 0x10);
  iVar2 = (int)param_2;
  *(undefined2 *)(iVar2 + 8) = 1;
  *(undefined2 *)(iVar2 + 10) = 0;
  uVar5 = (undefined2)((ulong)param_1 >> 0x10);
  iVar3 = (int)param_1;
  if ((*(byte *)(iVar3 + 0x109) & 0x10) == 0) {
    if ((*(byte *)(iVar3 + 0x109) & 8) != 0) {
      uVar1 = *(undefined2 *)(iVar2 + 10);
      *(uint *)(iVar2 + 8) = *(uint *)(iVar2 + 8) | 2;
      *(undefined2 *)(iVar2 + 10) = uVar1;
    }
    if ((*(byte *)(iVar3 + 0x109) & 4) != 0) {
      uVar5 = *(undefined2 *)(iVar2 + 10);
      *(uint *)(iVar2 + 8) = *(uint *)(iVar2 + 8) | 0x80;
      *(undefined2 *)(iVar2 + 10) = uVar5;
    }
  }
  return;
}



/* ---- FUN_10f8_7a19 @ 10f8:7a19  (97 octets) ---- */

void __stdcall16far FUN_10f8_7a19(undefined4 *param_1,undefined4 param_2)

{
  undefined2 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined2 uVar4;
  undefined2 unaff_SS;
  undefined *puVar5;
  undefined4 *puVar6;
  undefined2 uVar7;
  int iVar8;
  undefined2 uVar9;
  undefined local_12 [16];
  
  uVar4 = (undefined2)((ulong)param_1 >> 0x10);
  puVar3 = (undefined4 *)param_1;
  puVar1 = (undefined2 *)((int)*param_1 + -0x10);
  puVar6 = puVar3;
  uVar7 = uVar4;
  iVar8 = (int)param_2;
  uVar9 = param_2._2_2_;
  (*(code *)*puVar1)();
  puVar5 = local_12;
  FUN_10f8_6ee6(puVar3,uVar4);
  FUN_10f8_4895(puVar3,uVar4,puVar5,unaff_SS);
  if (*(int *)((int)puVar3 + 0x12f) != 0 || *(int *)((int)puVar3 + 0x131) != 0) {
    iVar2 = FUN_1138_62b9((int)*(undefined4 *)((int)puVar3 + 0x12f),
                          (int)((ulong)*(undefined4 *)((int)puVar3 + 0x12f) >> 0x10));
    if (iVar2 != *(int *)((int)param_2 + 2)) {
      FUN_10f8_761b(puVar3,uVar4,puVar6,uVar7,iVar8,uVar9);
    }
  }
  return;
}



/* ---- FUN_10f8_7a7a @ 10f8:7a7a  (48 octets) ---- */

void __stdcall16far FUN_10f8_7a7a(undefined4 *param_1,undefined4 param_2)

{
  undefined2 uVar1;
  undefined2 *puVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  
  uVar3 = (undefined2)((ulong)param_2 >> 0x10);
  uVar4 = (undefined2)((ulong)param_1 >> 0x10);
  puVar2 = (undefined2 *)((int)*param_1 + -0x10);
  (*(code *)*puVar2)();
  uVar1 = *(undefined2 *)((int)param_2 + 6);
  *(undefined2 *)((int)(undefined4 *)param_1 + 299) = *(undefined2 *)((int)param_2 + 4);
  *(undefined2 *)((int)(undefined4 *)param_1 + 0x12d) = uVar1;
  return;
}



/* ---- FUN_10f8_7aaa @ 10f8:7aaa  (221 octets) ---- */

void __stdcall16far FUN_10f8_7aaa(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined2 unaff_CS;
  undefined2 unaff_SS;
  undefined4 uVar5;
  int local_2a;
  undefined local_28 [2];
  undefined local_26 [2];
  undefined local_24 [5];
  char local_1f;
  undefined local_1e [28];
  
  local_2a = 0;
  uVar2 = (undefined2)((ulong)param_2 >> 0x10);
  iVar1 = (int)param_1;
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  if (*(int *)((int)param_2 + 4) == 1) {
    if (*(char *)(iVar1 + 0x13f) == '\0') {
      uVar5 = FUN_1138_1a06(iVar1,uVar3,*(undefined2 *)(iVar1 + 299),*(undefined2 *)(iVar1 + 0x12d))
      ;
      *(undefined2 *)(iVar1 + 299) = (int)uVar5;
      *(undefined2 *)(iVar1 + 0x12d) = (int)((ulong)uVar5 >> 0x10);
      FUN_10f8_3620(iVar1,uVar3,local_1e,unaff_SS);
      unaff_CS = 0x10f8;
      FUN_10f8_3836(iVar1,uVar3,local_1e,unaff_SS,local_28,unaff_SS,local_26,unaff_SS,local_24,
                    unaff_SS,&local_1f,unaff_SS,*(undefined2 *)(iVar1 + 0x12d),
                    *(undefined2 *)(iVar1 + 299));
    }
    else {
      local_1f = *(char *)(iVar1 + 0x13f);
    }
    uVar4 = (undefined2)((ulong)DAT_1160_2c2e >> 0x10);
    if (local_1f == '\x02') {
      unaff_CS = 0x1140;
      local_2a = FUN_1140_633e((int)DAT_1160_2c2e,uVar4,0xfff1);
    }
    else if (local_1f == '\x03') {
      unaff_CS = 0x1140;
      local_2a = FUN_1140_633e((int)DAT_1160_2c2e,uVar4,0xfff2);
    }
  }
  if (local_2a == 0) {
    FUN_1138_4df8(iVar1,uVar3,(int)param_2,uVar2);
  }
  else {
    SETCURSOR(unaff_CS,local_2a);
  }
  return;
}



/* ---- FUN_10f8_7b87 @ 10f8:7b87  (97 octets) ---- */

void __stdcall16far FUN_10f8_7b87(undefined4 *param_1,undefined4 param_2)

{
  undefined2 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined2 uVar4;
  undefined2 unaff_SS;
  undefined *puVar5;
  undefined local_12 [16];
  
  uVar4 = (undefined2)((ulong)param_1 >> 0x10);
  puVar3 = (undefined4 *)param_1;
  puVar1 = (undefined2 *)((int)*param_1 + -0x10);
  (*(code *)*puVar1)();
  if ((*(int *)((int)puVar3 + 0x12f) != 0 || *(int *)((int)puVar3 + 0x131) != 0) &&
     (iVar2 = FUN_1138_62b9((int)*(undefined4 *)((int)puVar3 + 0x12f),
                            (int)((ulong)*(undefined4 *)((int)puVar3 + 0x12f) >> 0x10)),
     iVar2 == *(int *)((int)param_2 + 2))) {
    return;
  }
  puVar5 = local_12;
  FUN_10f8_6ee6(puVar3,uVar4);
  FUN_10f8_4895(puVar3,uVar4,puVar5,unaff_SS);
  FUN_10f8_77c1(puVar3,uVar4);
  return;
}



/* ---- FUN_10f8_7be8 @ 10f8:7be8  (33 octets) ---- */

void __stdcall16far FUN_10f8_7be8(undefined4 param_1,undefined2 param_2,undefined2 param_3)

{
  undefined2 uVar1;
  
  uVar1 = (undefined2)((ulong)param_1 >> 0x10);
  FUN_1138_4da8((int)param_1,uVar1,param_2,param_3);
  FUN_10f8_5b86((int)param_1,uVar1);
  return;
}



/* ---- FUN_10f8_7c09 @ 10f8:7c09  (72 octets) ---- */

void __stdcall16far FUN_10f8_7c09(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  
  uVar3 = (undefined2)((ulong)param_2 >> 0x10);
  uVar4 = (undefined2)((ulong)param_1 >> 0x10);
  iVar2 = (int)param_1;
  if (*(int *)(iVar2 + 0x12f) != 0 || *(int *)(iVar2 + 0x131) != 0) {
    iVar1 = FUN_1138_62b9((int)*(undefined4 *)(iVar2 + 0x12f),
                          (int)((ulong)*(undefined4 *)(iVar2 + 0x12f) >> 0x10));
    if ((iVar1 == *(int *)((int)param_2 + 4)) && (*(int *)((int)param_2 + 6) == 0x300)) {
      FUN_10f8_78c3(iVar2,uVar4);
    }
  }
  return;
}



/* ---- FUN_10f8_7c51 @ 10f8:7c51  (30 octets) ---- */

void __stdcall16far FUN_10f8_7c51(undefined4 param_1,undefined4 param_2)

{
  undefined2 uVar1;
  
  uVar1 = (undefined2)((ulong)param_2 >> 0x10);
  FUN_10f8_4d65((int)param_1,(int)((ulong)param_1 >> 0x10),*(undefined2 *)((int)param_2 + 4),
                *(undefined2 *)((int)param_2 + 2),1);
  return;
}



/* ---- FUN_10f8_7c6f @ 10f8:7c6f  (30 octets) ---- */

void __stdcall16far FUN_10f8_7c6f(undefined4 param_1,undefined4 param_2)

{
  undefined2 uVar1;
  
  uVar1 = (undefined2)((ulong)param_2 >> 0x10);
  FUN_10f8_4d65((int)param_1,(int)((ulong)param_1 >> 0x10),*(undefined2 *)((int)param_2 + 4),
                *(undefined2 *)((int)param_2 + 2),0);
  return;
}



/* ---- FUN_10f8_7c8d @ 10f8:7c8d  (58 octets) ---- */

void __stdcall16far FUN_10f8_7c8d(undefined4 param_1,undefined2 param_2,undefined2 param_3)

{
  int iVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  if (*(int *)(iVar1 + 0x12f) != 0 || *(int *)(iVar1 + 0x131) != 0) {
    FUN_1138_1deb((int)*(undefined4 *)(iVar1 + 0x12f),
                  (int)((ulong)*(undefined4 *)(iVar1 + 0x12f) >> 0x10),*(undefined2 *)(iVar1 + 0x34)
                  ,*(undefined2 *)(iVar1 + 0x36));
  }
  FUN_1138_573a(iVar1,uVar2,param_2,param_3);
  return;
}



/* ---- FUN_10f8_7cc7 @ 10f8:7cc7  (35 octets) ---- */

void __stdcall16far FUN_10f8_7cc7(undefined4 *param_1,undefined2 param_2,undefined2 param_3)

{
  undefined2 *puVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  FUN_1138_57d8((undefined4 *)param_1,uVar2,param_2,param_3);
  puVar1 = (undefined2 *)((int)*param_1 + 0x44);
  (*(code *)*puVar1)(0x1138,(undefined4 *)param_1,uVar2);
  return;
}



/* ---- FUN_10f8_7cea @ 10f8:7cea  (41 octets) ---- */

void __stdcall16far FUN_10f8_7cea(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  undefined2 uVar3;
  
  uVar3 = (undefined2)((ulong)param_2 >> 0x10);
  iVar2 = (int)param_2;
  cVar1 = FUN_10f8_2897((int)param_1,(int)((ulong)param_1 >> 0x10),*(undefined2 *)(iVar2 + 6),
                        *(undefined2 *)(iVar2 + 4));
  *(int *)(iVar2 + 8) = (int)cVar1;
  *(int *)(iVar2 + 10) = (int)cVar1 >> 0xf;
  return;
}



/* ---- FUN_10f8_7d13 @ 10f8:7d13  (58 octets) ---- */

void __stdcall16far FUN_10f8_7d13(undefined4 *param_1,undefined4 param_2)

{
  undefined2 *puVar1;
  int iVar2;
  undefined2 uVar3;
  
  puVar1 = (undefined2 *)((int)*param_1 + -0x10);
  (*(code *)*puVar1)();
  if ((*(byte *)((int)(undefined4 *)param_1 + 0x109) & 4) != 0) {
    uVar3 = (undefined2)((ulong)param_2 >> 0x10);
    iVar2 = (int)param_2;
    if (*(char *)(iVar2 + 2) == '\r') {
      *(undefined2 *)(iVar2 + 8) = 1;
      *(undefined2 *)(iVar2 + 10) = 0;
    }
  }
  return;
}



/* ---- FUN_10f8_7d4d @ 10f8:7d4d  (287 octets) ---- */

void __stdcall16far FUN_10f8_7d4d(undefined4 param_1,byte param_2)

{
  int iVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 unaff_SS;
  bool bVar4;
  uint local_12;
  int local_10;
  uint local_e;
  int local_c;
  uint local_a;
  int local_8;
  uint local_6;
  int local_4;
  
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  iVar2 = (int)param_1;
  FUN_1158_161b(8,&local_12,unaff_SS,iVar2 + 0xdc,uVar3);
  local_a = *(int *)(iVar2 + 0xe6) - 1;
  local_8 = *(int *)(iVar2 + 0xe8) - (uint)(*(int *)(iVar2 + 0xe6) == 0);
  local_6 = *(int *)(iVar2 + 0x10a) - 1;
  local_4 = *(int *)(iVar2 + 0x10c) - (uint)(*(int *)(iVar2 + 0x10a) == 0);
  if ((param_2 & 1) != 0) {
    iVar1 = (int)*(uint *)(iVar2 + 0xfe) >> 0xf;
    if ((iVar1 < *(int *)(iVar2 + 0xde)) ||
       ((iVar1 <= *(int *)(iVar2 + 0xde) && (*(uint *)(iVar2 + 0xfe) < *(uint *)(iVar2 + 0xdc))))) {
      bVar4 = local_12 == 0;
      local_12 = local_12 - 1;
      local_10 = local_10 - (uint)bVar4;
    }
  }
  if ((param_2 & 2) != 0) {
    if ((*(int *)(iVar2 + 0xde) < local_8) ||
       ((*(int *)(iVar2 + 0xde) <= local_8 && (*(uint *)(iVar2 + 0xdc) < local_a)))) {
      bVar4 = 0xfffe < local_12;
      local_12 = local_12 + 1;
      local_10 = local_10 + (uint)bVar4;
    }
  }
  if ((param_2 & 4) != 0) {
    iVar1 = (int)*(uint *)(iVar2 + 0x100) >> 0xf;
    if ((iVar1 < *(int *)(iVar2 + 0xe2)) ||
       ((iVar1 <= *(int *)(iVar2 + 0xe2) && (*(uint *)(iVar2 + 0x100) < *(uint *)(iVar2 + 0xe0)))))
    {
      bVar4 = local_e == 0;
      local_e = local_e - 1;
      local_c = local_c - (uint)bVar4;
    }
  }
  if ((param_2 & 8) != 0) {
    if ((*(int *)(iVar2 + 0xe2) < local_4) ||
       ((*(int *)(iVar2 + 0xe2) <= local_4 && (*(uint *)(iVar2 + 0xe0) < local_6)))) {
      bVar4 = 0xfffe < local_e;
      local_e = local_e + 1;
      local_c = local_c + (uint)bVar4;
    }
  }
  if ((((*(int *)(iVar2 + 0xde) != local_10) || (*(uint *)(iVar2 + 0xdc) != local_12)) ||
      (*(int *)(iVar2 + 0xe2) != local_c)) || (*(uint *)(iVar2 + 0xe0) != local_e)) {
    FUN_10f8_4f25(iVar2,uVar3,&local_12,unaff_SS);
  }
  return;
}



/* ---- FUN_10f8_7eff @ 10f8:7eff  (27 octets) ---- */

void __stdcall16far FUN_10f8_7eff(undefined4 param_1)

{
  undefined2 uVar1;
  
  uVar1 = (undefined2)((ulong)param_1 >> 0x10);
  FUN_10f8_5b86((int)param_1,uVar1);
  FUN_10f8_77c1((int)param_1,uVar1);
  return;
}



/* ---- FUN_10f8_7f1a @ 10f8:7f1a  (27 octets) ---- */

void __stdcall16far FUN_10f8_7f1a(undefined4 param_1)

{
  undefined2 uVar1;
  
  uVar1 = (undefined2)((ulong)param_1 >> 0x10);
  FUN_10f8_5b86((int)param_1,uVar1);
  FUN_10f8_77c1((int)param_1,uVar1);
  return;
}



/* ---- FUN_10f8_7f35 @ 10f8:7f35  (47 octets) ---- */

void __stdcall16far
FUN_10f8_7f35(undefined4 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4,
             undefined2 param_5,undefined4 param_6)

{
  undefined2 unaff_SS;
  undefined *puVar1;
  undefined local_a [8];
  
  puVar1 = local_a;
  FUN_10f8_2424((int)param_1,(int)((ulong)param_1 >> 0x10),param_2,param_3,param_4,param_5);
  FUN_1158_161b(8,(int)param_6,(int)((ulong)param_6 >> 0x10),puVar1,unaff_SS);
  return;
}



/* ---- FUN_10f8_7f64 @ 10f8:7f64  (73 octets) ---- */

void __stdcall16far
FUN_10f8_7f64(undefined4 param_1,undefined2 *param_2,undefined2 *param_3,undefined2 param_4,
             undefined2 param_5)

{
  undefined2 unaff_SS;
  undefined *puVar1;
  undefined2 uVar2;
  undefined local_12 [8];
  undefined2 local_a;
  undefined2 local_8;
  undefined2 local_6;
  undefined2 local_4;
  
  puVar1 = local_12;
  uVar2 = unaff_SS;
  FUN_10f8_2844((int)param_1,(int)((ulong)param_1 >> 0x10),param_4,param_5);
  FUN_1158_161b(8,&local_a,unaff_SS,puVar1,uVar2);
  *param_3 = local_a;
  ((undefined2 *)param_3)[1] = local_8;
  *param_2 = local_6;
  ((undefined2 *)param_2)[1] = local_4;
  return;
}



/* ---- FUN_10f8_7fad @ 10f8:7fad  (52 octets) ---- */

void __stdcall16far FUN_10f8_7fad(undefined4 param_1)

{
  undefined2 *puVar1;
  
  if (*(int *)((int)param_1 + 0x143) != 0) {
    puVar1 = (undefined2 *)((int)param_1 + 0x141);
    (*(code *)*puVar1)();
  }
  return;
}



/* ---- FUN_10f8_7fe1 @ 10f8:7fe1  (70 octets) ---- */

void __stdcall16far FUN_10f8_7fe1(undefined4 param_1)

{
  undefined2 *puVar1;
  undefined *param_6;
  
  *param_6 = 0;
  if (*(int *)((int)param_1 + 0x153) != 0) {
    puVar1 = (undefined2 *)((int)param_1 + 0x151);
    (*(code *)*puVar1)();
  }
  return;
}



/* ---- FUN_10f8_8027 @ 10f8:8027  (70 octets) ---- */

void __stdcall16far FUN_10f8_8027(undefined4 param_1)

{
  undefined2 *puVar1;
  undefined *param_6;
  
  *param_6 = 0;
  if (*(int *)((int)param_1 + 0x15b) != 0) {
    puVar1 = (undefined2 *)((int)param_1 + 0x159);
    (*(code *)*puVar1)();
  }
  return;
}



/* ---- FUN_10f8_806d @ 10f8:806d  (52 octets) ---- */

void __stdcall16far FUN_10f8_806d(undefined4 param_1)

{
  undefined2 *puVar1;
  
  if (*(int *)((int)param_1 + 0x163) != 0) {
    puVar1 = (undefined2 *)((int)param_1 + 0x161);
    (*(code *)*puVar1)();
  }
  return;
}



/* ---- FUN_10f8_80a1 @ 10f8:80a1  (68 octets) ---- */

undefined2 __stdcall16far FUN_10f8_80a1(undefined4 param_1)

{
  undefined2 *puVar1;
  
  if (*(int *)((int)param_1 + 0x16b) != 0) {
    puVar1 = (undefined2 *)((int)param_1 + 0x169);
    (*(code *)*puVar1)();
  }
  return 1;
}



/* ---- FUN_10f8_80e5 @ 10f8:80e5  (60 octets) ---- */

void __stdcall16far FUN_10f8_80e5(undefined4 param_1)

{
  undefined2 *puVar1;
  
  if (*(int *)((int)param_1 + 0x173) != 0) {
    puVar1 = (undefined2 *)((int)param_1 + 0x171);
    (*(code *)*puVar1)();
  }
  return;
}



/* ---- FUN_10f8_8121 @ 10f8:8121  (85 octets) ---- */

void __stdcall16far FUN_10f8_8121(undefined4 param_1,undefined2 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined2 *puVar3;
  int iVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined2 unaff_SS;
  undefined local_a [8];
  
  puVar6 = local_a;
  puVar5 = (undefined *)param_3;
  for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
    puVar2 = puVar6;
    puVar6 = puVar6 + 1;
    puVar1 = puVar5;
    puVar5 = puVar5 + 1;
    *puVar2 = *puVar1;
  }
  if (*(int *)((int)param_1 + 0x14b) != 0) {
    puVar3 = (undefined2 *)((int)param_1 + 0x149);
    (*(code *)*puVar3)();
  }
  return;
}



/* ---- FUN_10f8_8176 @ 10f8:8176  (50 octets) ---- */

void __stdcall16far FUN_10f8_8176(undefined4 param_1)

{
  int iVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  FUN_10f8_28f7(iVar1,uVar2);
  if (*(int *)(iVar1 + 0x17b) != 0) {
    (*(code *)*(undefined2 *)(iVar1 + 0x179))
              (0x10f8,*(undefined2 *)(iVar1 + 0x17d),*(undefined2 *)(iVar1 + 0x17f),iVar1,uVar2);
  }
  return;
}



/* ---- FUN_10f8_82fa @ 10f8:82fa  (135 octets) ---- */

undefined4 FUN_10f8_82fa(int param_1,int *param_2,undefined4 param_3)

{
  int iVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  
  uVar3 = FUN_1158_0182(param_1 << 2);
  iVar1 = *param_2;
  *param_2 = param_1;
  if (iVar1 != 0) {
    uVar2 = (undefined2)((ulong)param_3 >> 0x10);
    FUN_1158_1ec1(iVar1 << 2,uVar3,(int)param_3,uVar2);
    FUN_1158_019c(iVar1 << 2,(int)param_3,uVar2);
  }
  FUN_1158_1ee5(0,(param_1 - iVar1) * 4,(int)uVar3 + iVar1 * 4,(int)((ulong)uVar3 >> 0x10));
  return uVar3;
}



/* ---- FUN_10f8_8381 @ 10f8:8381  (64 octets) ---- */

undefined4 FUN_10f8_8381(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_1158_0182(param_1 << 2);
  FUN_1158_1ee5(0,param_1 << 2,uVar1);
  return uVar1;
}



/* ---- FUN_10f8_83c1 @ 10f8:83c1  (129 octets) ---- */

undefined4 __stdcall16far FUN_10f8_83c1(undefined4 param_1,char param_2,char param_3)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uStack_a;
  
  if (param_2 != '\0') {
    FUN_1158_1fe2();
  }
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  *(undefined2 *)(iVar1 + 4) = 0;
  *(undefined2 *)(iVar1 + 6) = 0;
  *(undefined2 *)(iVar1 + 8) = 0;
  *(undefined2 *)(iVar1 + 0xe) = 0xffff;
  *(int *)(iVar1 + 0x10) = *(byte *)(param_3 + 0xbdc) + 1;
  *(uint *)(iVar1 + 10) = (uint)*(byte *)(param_3 + 0xbdc);
  *(uint *)(iVar1 + 0xc) = (uint)*(byte *)(param_3 + 0xbde);
  *(undefined2 *)(iVar1 + 0x12) = 0xffff;
  if (param_2 != '\0') {
    DAT_1160_1858 = uStack_a;
  }
  return param_1;
}



/* ---- FUN_10f8_8442 @ 10f8:8442  (157 octets) ---- */

void __stdcall16far FUN_10f8_8442(undefined4 param_1,char param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined2 *puVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  bool bVar7;
  uint local_4;
  
  local_4 = 0;
  uVar5 = (undefined2)((ulong)param_1 >> 0x10);
  iVar2 = (int)param_1;
  iVar1 = *(int *)(iVar2 + 0x10);
  while( true ) {
    bVar7 = -1 < (int)local_4 >> 0xf;
    if ((bVar7) && (((int)local_4 < 0 && bVar7 || (*(uint *)(iVar2 + 8) <= local_4)))) break;
    uVar6 = (undefined2)((ulong)*(undefined4 *)(iVar2 + 4) >> 0x10);
    piVar3 = (int *)((int)*(undefined4 *)(iVar2 + 4) + local_4 * 4);
    if (*piVar3 != 0 || piVar3[1] != 0) {
      uVar6 = (undefined2)((ulong)*(undefined4 *)(iVar2 + 4) >> 0x10);
      puVar4 = (undefined2 *)((int)*(undefined4 *)(iVar2 + 4) + local_4 * 4);
      FUN_1158_019c(iVar1 << 2,*puVar4,puVar4[1]);
    }
    local_4 = local_4 + 1;
  }
  if (*(int *)(iVar2 + 4) != 0 || *(int *)(iVar2 + 6) != 0) {
    FUN_1158_019c(*(int *)(iVar2 + 8) << 2,*(undefined2 *)(iVar2 + 4),*(undefined2 *)(iVar2 + 6));
  }
  if (param_2 != '\0') {
    FUN_1158_200f();
  }
  return;
}



/* ---- FUN_10f8_84df @ 10f8:84df  (208 octets) ---- */

undefined4 __stdcall16far FUN_10f8_84df(undefined4 param_1,uint param_2)

{
  undefined2 *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  undefined4 local_a;
  undefined2 local_6;
  undefined2 local_4;
  
  uVar6 = (undefined2)((ulong)param_1 >> 0x10);
  iVar4 = (int)param_1;
  if (param_2 == *(uint *)(iVar4 + 0x12)) {
    local_6 = *(undefined2 *)(iVar4 + 0x14);
    local_4 = *(undefined2 *)(iVar4 + 0x16);
  }
  else {
    uVar3 = param_2 >> ((byte)*(undefined2 *)(iVar4 + 0xc) & 0x1f);
    if (uVar3 < *(uint *)(iVar4 + 8)) {
      uVar7 = (undefined2)((ulong)*(undefined4 *)(iVar4 + 4) >> 0x10);
      piVar5 = (int *)((int)*(undefined4 *)(iVar4 + 4) + uVar3 * 4);
      puVar1 = (undefined2 *)*piVar5;
      iVar2 = piVar5[1];
      local_a = (undefined2 *)CONCAT22(iVar2,puVar1);
      if (puVar1 != (undefined2 *)0x0 || iVar2 != 0) {
        local_a = (undefined2 *)CONCAT22(iVar2,puVar1 + (param_2 & *(uint *)(iVar4 + 10)) * 2);
      }
    }
    else {
      local_a = (undefined2 *)0x0;
    }
    if ((undefined2 *)local_a == (undefined2 *)0x0 && local_a._2_2_ == 0) {
      local_6 = 0;
      local_4 = 0;
    }
    else {
      local_6 = *local_a;
      local_4 = ((undefined2 *)local_a)[1];
    }
    *(uint *)(iVar4 + 0x12) = param_2;
    *(undefined2 *)(iVar4 + 0x14) = local_6;
    *(undefined2 *)(iVar4 + 0x16) = local_4;
  }
  return CONCAT22(local_4,local_6);
}



/* ---- FUN_10f8_85af @ 10f8:85af  (284 octets) ---- */

int __stdcall16far FUN_10f8_85af(undefined4 param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined2 *puVar6;
  undefined2 uVar7;
  undefined4 uVar8;
  int local_e;
  int local_a;
  undefined2 local_8;
  
  uVar2 = FUN_1158_1716();
  uVar7 = (undefined2)((ulong)param_1 >> 0x10);
  iVar4 = (int)param_1;
  if (uVar2 < *(uint *)(iVar4 + 8)) {
    uVar8 = CONCAT22(*(undefined2 *)(iVar4 + 6),*(undefined2 *)(iVar4 + 4));
  }
  else {
    uVar8 = FUN_10f8_82fa(uVar2 + 1,iVar4 + 8,uVar7,*(undefined2 *)(iVar4 + 4),
                          *(undefined2 *)(iVar4 + 6));
  }
  local_8 = (undefined2)((ulong)uVar8 >> 0x10);
  local_a = (int)uVar8;
  *(int *)(iVar4 + 4) = local_a;
  *(undefined2 *)(iVar4 + 6) = local_8;
  piVar5 = (int *)(local_a + uVar2 * 4);
  iVar3 = *piVar5;
  iVar1 = piVar5[1];
  uVar8 = CONCAT22(iVar1,iVar3);
  if (iVar3 == 0 && iVar1 == 0) {
    uVar8 = FUN_10f8_8381(*(undefined2 *)(iVar4 + 0x10),uVar2);
    puVar6 = (undefined2 *)(local_a + uVar2 * 4);
    *puVar6 = (int)uVar8;
    puVar6[1] = (int)((ulong)uVar8 >> 0x10);
  }
  local_e = (int)uVar8;
  iVar3 = FUN_1158_1633();
  if (*(int *)(iVar4 + 0xe) < param_2) {
    *(int *)(iVar4 + 0xe) = param_2;
  }
  *(undefined2 *)(iVar4 + 0x12) = 0xffff;
  return local_e + iVar3;
}



/* ---- FUN_10f8_86cb @ 10f8:86cb  (82 octets) ---- */

void __stdcall16far FUN_10f8_86cb(undefined4 param_1,int param_2,int param_3,undefined2 param_4)

{
  undefined2 uVar1;
  undefined2 uVar2;
  long lVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  
  uVar1 = (undefined2)param_1;
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  if ((param_2 == 0 && param_3 == 0) && (lVar3 = FUN_10f8_84df(uVar1,uVar2,param_4), lVar3 == 0)) {
    return;
  }
  iVar5 = param_2;
  iVar6 = param_3;
  piVar4 = (int *)FUN_10f8_85af(uVar1,uVar2,param_4);
  *piVar4 = iVar5;
  ((int *)piVar4)[1] = iVar6;
  if (param_2 == 0 && param_3 == 0) {
    FUN_10f8_881d(uVar1,uVar2);
  }
  return;
}



/* ---- FUN_10f8_871d @ 10f8:871d  (199 octets) ---- */

int __stdcall16far FUN_10f8_871d(undefined4 param_1,code *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  bool bVar7;
  uint local_12;
  uint local_e;
  undefined4 local_8;
  int local_4;
  
  local_4 = 0;
  local_e = 0;
  while( true ) {
    uVar5 = (undefined2)((ulong)param_1 >> 0x10);
    iVar3 = (int)param_1;
    if ((*(uint *)(iVar3 + 8) <= local_e) || (local_4 != 0)) break;
    uVar6 = (undefined2)((ulong)*(undefined4 *)(iVar3 + 4) >> 0x10);
    piVar4 = (int *)((int)*(undefined4 *)(iVar3 + 4) + local_e * 4);
    piVar1 = (int *)*piVar4;
    iVar2 = piVar4[1];
    local_8 = (int *)CONCAT22(iVar2,piVar1);
    if (piVar1 != (int *)0x0 || iVar2 != 0) {
      local_12 = 0;
      while( true ) {
        bVar7 = -1 < (int)local_12 >> 0xf;
        if (((bVar7) && (((int)local_12 < 0 && bVar7 || (*(uint *)(iVar3 + 0x10) <= local_12)))) ||
           (local_4 != 0)) break;
        uVar6 = (undefined2)((ulong)local_8 >> 0x10);
        if (*local_8 != 0 || ((int *)local_8)[1] != 0) {
          local_4 = (*param_2)();
        }
        local_8 = (int *)CONCAT22(uVar6,(int *)local_8 + 2);
        local_12 = local_12 + 1;
      }
    }
    local_e = local_e + 1;
  }
  return local_4;
}



/* ---- FUN_10f8_87e4 @ 10f8:87e4  (57 octets) ---- */

undefined2 __stdcall16far FUN_10f8_87e4(int param_1,int param_2,int param_3,int param_4)

{
  undefined2 unaff_SS;
  undefined2 local_4;
  
  if (*(int *)((int)*(undefined4 *)(param_1 + 6) + 0xe) < param_4) {
    local_4 = 1;
  }
  else {
    local_4 = 0;
    if (param_2 != 0 || param_3 != 0) {
      *(int *)(param_1 + -4) = param_4;
    }
  }
  return local_4;
}



/* ---- FUN_10f8_881d @ 10f8:881d  (44 octets) ---- */

void __stdcall16far FUN_10f8_881d(undefined4 param_1)

{
  undefined2 uVar1;
  
  uVar1 = (undefined2)((ulong)param_1 >> 0x10);
  FUN_10f8_871d((int)param_1,uVar1,0x87e4,0x10f8);
  *(undefined2 *)((int)param_1 + 0xe) = 0xffff;
  return;
}



/* ---- FUN_10f8_8849 @ 10f8:8849  (54 octets) ---- */

undefined4 __stdcall16far FUN_10f8_8849(undefined4 param_1,char param_2,undefined param_3)

{
  undefined2 in_AX;
  undefined uVar1;
  undefined extraout_AH;
  undefined2 uStack_a;
  
  uVar1 = (undefined)((uint)in_AX >> 8);
  if (param_2 != '\0') {
    FUN_1158_1fe2();
    uVar1 = extraout_AH;
  }
  FUN_10f8_8afd((int)param_1,(int)((ulong)param_1 >> 0x10),CONCAT11(uVar1,param_3));
  if (param_2 != '\0') {
    DAT_1160_1858 = uStack_a;
  }
  return param_1;
}



/* ---- FUN_10f8_887f @ 10f8:887f  (47 octets) ---- */

void __stdcall16far FUN_10f8_887f(undefined4 param_1,char param_2)

{
  undefined2 *puVar1;
  int iVar2;
  undefined2 uVar3;
  
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  iVar2 = (int)param_1;
  if (*(int *)(iVar2 + 4) != 0 || *(int *)(iVar2 + 6) != 0) {
    puVar1 = (undefined2 *)((int)*(undefined4 *)*(undefined4 *)(iVar2 + 4) + -4);
    (*(code *)*puVar1)();
  }
  if (param_2 != '\0') {
    FUN_1158_200f();
  }
  return;
}



/* ---- FUN_10f8_88ae @ 10f8:88ae  (50 octets) ---- */

void __stdcall16far FUN_10f8_88ae(undefined4 param_1)

{
  undefined2 *puVar1;
  undefined extraout_AH;
  int iVar2;
  undefined2 uVar3;
  
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  iVar2 = (int)param_1;
  puVar1 = (undefined2 *)((int)*(undefined4 *)*(undefined4 *)(iVar2 + 4) + -4);
  (*(code *)*puVar1)();
  FUN_10f8_8afd(iVar2,uVar3,CONCAT11(extraout_AH,*(undefined *)(iVar2 + 10)));
  *(undefined2 *)(iVar2 + 8) = 0;
  return;
}



/* ---- FUN_10f8_88e0 @ 10f8:88e0  (130 octets) ---- */

void __stdcall16far FUN_10f8_88e0(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  int iVar5;
  int local_4;
  
  if (-1 < param_2) {
    uVar3 = (undefined2)((ulong)param_1 >> 0x10);
    iVar2 = (int)param_1;
    if (param_2 < *(int *)(iVar2 + 8)) {
      iVar1 = *(int *)(iVar2 + 8) + -1;
      if (param_2 <= iVar1) {
        local_4 = param_2;
        while( true ) {
          iVar5 = local_4;
          uVar4 = FUN_10f8_84df((int)*(undefined4 *)(iVar2 + 4),
                                (int)((ulong)*(undefined4 *)(iVar2 + 4) >> 0x10),local_4 + 1);
          FUN_10f8_86cb((int)*(undefined4 *)(iVar2 + 4),
                        (int)((ulong)*(undefined4 *)(iVar2 + 4) >> 0x10),uVar4,iVar5);
          if (local_4 == iVar1) break;
          local_4 = local_4 + 1;
        }
      }
      FUN_10f8_86cb((int)*(undefined4 *)(iVar2 + 4),(int)((ulong)*(undefined4 *)(iVar2 + 4) >> 0x10)
                    ,0,0,*(undefined2 *)(iVar2 + 8));
      *(int *)(iVar2 + 8) = *(int *)(iVar2 + 8) + -1;
    }
  }
  return;
}



/* ---- FUN_10f8_898f @ 10f8:898f  (74 octets) ---- */

void __stdcall16far FUN_10f8_898f(undefined4 param_1,undefined2 param_2,undefined2 param_3)

{
  undefined2 uVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  uVar1 = (undefined2)param_1;
  uVar3 = FUN_10f8_89fd(uVar1,uVar2,param_3);
  uVar4 = FUN_10f8_89fd(uVar1,uVar2,param_2);
  FUN_10f8_8b2d(uVar1,uVar2,uVar4,param_3);
  FUN_10f8_8b2d(uVar1,uVar2,uVar3,param_2);
  return;
}



/* ---- FUN_10f8_89d9 @ 10f8:89d9  (32 octets) ---- */

void FUN_10f8_89d9(void)

{
  FUN_10f8_871d();
  return;
}



/* ---- FUN_10f8_89fd @ 10f8:89fd  (54 octets) ---- */

undefined4 __stdcall16far FUN_10f8_89fd(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  
  if (param_2 < 0) {
    (*(code *)*(undefined2 *)(undefined2 *)*param_1)();
  }
  uVar1 = FUN_10f8_84df((int)((undefined4 *)param_1)[1],
                        (int)((ulong)((undefined4 *)param_1)[1] >> 0x10),param_2);
  return uVar1;
}



/* ---- FUN_10f8_8a33 @ 10f8:8a33  (135 octets) ---- */

void __stdcall16far
FUN_10f8_8a33(undefined4 *param_1,undefined2 param_2,undefined2 param_3,int param_4)

{
  undefined4 *puVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  int iVar4;
  int local_4;
  
  puVar1 = (undefined4 *)param_1;
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  if (param_4 < 0) {
    (*(code *)*(undefined2 *)(undefined2 *)*param_1)();
  }
  for (local_4 = *(int *)(puVar1 + 2); param_4 < local_4; local_4 = local_4 + -1) {
    iVar4 = local_4;
    uVar3 = FUN_10f8_84df((int)puVar1[1],(int)((ulong)puVar1[1] >> 0x10),local_4 + -1);
    FUN_10f8_86cb((int)puVar1[1],(int)((ulong)puVar1[1] >> 0x10),uVar3,iVar4);
  }
  FUN_10f8_86cb((int)puVar1[1],(int)((ulong)puVar1[1] >> 0x10),param_2,param_3,param_4);
  if (*(int *)(puVar1 + 2) < param_4) {
    *(int *)(puVar1 + 2) = param_4;
  }
  *(int *)(puVar1 + 2) = *(int *)(puVar1 + 2) + 1;
  return;
}



/* ---- FUN_10f8_8aba @ 10f8:8aba  (67 octets) ---- */

void __stdcall16far FUN_10f8_8aba(undefined4 param_1,int param_2,int param_3)

{
  undefined2 uVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  
  if (param_3 != param_2) {
    uVar2 = (undefined2)((ulong)param_1 >> 0x10);
    uVar1 = (undefined2)param_1;
    uVar3 = FUN_10f8_89fd(uVar1,uVar2,param_3);
    FUN_10f8_88e0(uVar1,uVar2,param_3);
    FUN_10f8_8a33(uVar1,uVar2,uVar3,param_2);
  }
  return;
}



/* ---- FUN_10f8_8afd @ 10f8:8afd  (48 octets) ---- */

void __stdcall16far FUN_10f8_8afd(undefined4 param_1,undefined param_2)

{
  int iVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  *(undefined *)(iVar1 + 10) = param_2;
  uVar3 = FUN_10f8_83c1(0x81ff,0x10f8,1,param_2);
  *(undefined2 *)(iVar1 + 4) = (int)uVar3;
  *(undefined2 *)(iVar1 + 6) = (int)((ulong)uVar3 >> 0x10);
  return;
}



/* ---- FUN_10f8_8b2d @ 10f8:8b2d  (66 octets) ---- */

void __stdcall16far
FUN_10f8_8b2d(undefined4 *param_1,undefined2 param_2,undefined2 param_3,int param_4)

{
  undefined4 *puVar1;
  undefined2 uVar2;
  
  puVar1 = (undefined4 *)param_1;
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  if (param_4 < 0) {
    (*(code *)*(undefined2 *)(undefined2 *)*param_1)();
  }
  FUN_10f8_86cb((int)puVar1[1],(int)((ulong)puVar1[1] >> 0x10),param_2,param_3,param_4);
  *(int *)(puVar1 + 2) = *(int *)((int)puVar1[1] + 0xe) + 1;
  return;
}



/* ---- FUN_10f8_8b6f @ 10f8:8b6f  (71 octets) ---- */

undefined4 __stdcall16far FUN_10f8_8b6f(undefined4 param_1,char param_2,undefined param_3)

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
  uVar3 = FUN_10f8_8849(0x8233,0x10f8,CONCAT11(uVar1,1),CONCAT11(uVar1,param_3));
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  *(undefined2 *)((int)param_1 + 6) = (int)uVar3;
  *(undefined2 *)((int)param_1 + 8) = (int)((ulong)uVar3 >> 0x10);
  if (param_2 != '\0') {
    DAT_1160_1858 = uStack_a;
  }
  return param_1;
}



/* ---- FUN_10f8_8bb6 @ 10f8:8bb6  (59 octets) ---- */

void __stdcall16far FUN_10f8_8bb6(undefined4 *param_1,char param_2)

{
  undefined2 *puVar1;
  undefined4 *puVar2;
  undefined2 uVar3;
  
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  puVar2 = (undefined4 *)param_1;
  if (*(int *)((int)puVar2 + 6) != 0 || *(int *)(puVar2 + 2) != 0) {
    puVar1 = (undefined2 *)((int)*param_1 + 0x30);
    (*(code *)*puVar1)();
    puVar1 = (undefined2 *)((int)*(undefined4 *)*(undefined4 *)((int)puVar2 + 6) + -4);
    (*(code *)*puVar1)();
  }
  if (param_2 != '\0') {
    FUN_1158_200f();
  }
  return;
}



/* ---- FUN_10f8_8c44 @ 10f8:8c44  (23 octets) ---- */

undefined2 __stdcall16far FUN_10f8_8c44(int param_1)

{
  undefined2 unaff_SS;
  
  *(int *)(param_1 + -2) = *(int *)(param_1 + -2) + 1;
  return 0;
}



/* ---- FUN_10f8_8c5b @ 10f8:8c5b  (61 octets) ---- */

undefined2 __stdcall16far FUN_10f8_8c5b(int param_1,undefined4 param_2,int param_3)

{
  undefined2 uVar1;
  undefined2 uVar2;
  undefined2 unaff_SS;
  
  uVar2 = (undefined2)((ulong)*(undefined4 *)(param_1 + 10) >> 0x10);
  uVar1 = (undefined2)*(undefined4 *)(param_1 + 10);
  FUN_1148_44cb(uVar1,uVar2,param_3,param_3 >> 0xf);
  FUN_1148_4b9d(uVar1,uVar2,(int)param_2 + 4,(int)((ulong)param_2 >> 0x10));
  return 0;
}



/* ---- FUN_10f8_8c98 @ 10f8:8c98  (88 octets) ---- */

void __stdcall16far FUN_10f8_8c98(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined2 uVar2;
  undefined2 unaff_CS;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  uVar1 = *(undefined4 *)((int)param_1 + 6);
  FUN_10f8_89d9(unaff_CS,(int)uVar1,(int)((ulong)uVar1 >> 0x10),0x8c44);
  FUN_1148_44cb((int)param_2,(int)((ulong)param_2 >> 0x10),0,0);
  uVar1 = *(undefined4 *)((int)param_1 + 6);
  FUN_10f8_89d9(0x1148,(int)uVar1,(int)((ulong)uVar1 >> 0x10),0x8c5b);
  return;
}



/* ---- FUN_10f8_8d28 @ 10f8:8d28  (70 octets) ---- */

void __stdcall16far FUN_10f8_8d28(undefined4 param_1,undefined2 param_2,undefined *param_3)

{
  undefined4 uVar1;
  long lVar2;
  
  uVar1 = *(undefined4 *)((int)param_1 + 6);
  lVar2 = FUN_10f8_89fd((int)uVar1,(int)((ulong)uVar1 >> 0x10),param_2);
  if (lVar2 == 0) {
    *param_3 = 0;
  }
  else {
    FUN_1158_17e7(0xff,(undefined *)param_3,(int)((ulong)param_3 >> 0x10),(int)lVar2 + 4,
                  (int)((ulong)lVar2 >> 0x10));
  }
  return;
}



/* ---- FUN_10f8_8d6e @ 10f8:8d6e  (25 octets) ---- */

undefined2 __stdcall16far FUN_10f8_8d6e(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)((int)param_1 + 6);
  return *(undefined2 *)((int)uVar1 + 8);
}



/* ---- FUN_10f8_8d87 @ 10f8:8d87  (71 octets) ---- */

undefined4 __stdcall16far FUN_10f8_8d87(undefined4 param_1,undefined2 param_2)

{
  undefined4 uVar1;
  undefined2 *puVar2;
  undefined2 local_6;
  undefined2 local_4;
  
  uVar1 = *(undefined4 *)((int)param_1 + 6);
  puVar2 = (undefined2 *)FUN_10f8_89fd((int)uVar1,(int)((ulong)uVar1 >> 0x10),param_2);
  if (puVar2 == (undefined2 *)0x0) {
    local_6 = 0;
    local_4 = 0;
  }
  else {
    local_6 = *puVar2;
    local_4 = ((undefined2 *)puVar2)[1];
  }
  return CONCAT22(local_4,local_6);
}



/* ---- FUN_10f8_8dce @ 10f8:8dce  (163 octets) ---- */

void __stdcall16far FUN_10f8_8dce(undefined4 *param_1,char *param_2,undefined2 param_3)

{
  undefined4 *puVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 *puVar4;
  undefined4 uVar5;
  undefined2 local_a;
  undefined2 local_8;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  puVar1 = (undefined4 *)param_1;
  puVar4 = (undefined2 *)
           FUN_10f8_89fd((int)*(undefined4 *)((int)puVar1 + 6),
                         (int)((ulong)*(undefined4 *)((int)puVar1 + 6) >> 0x10),param_3);
  if (puVar4 == (undefined2 *)0x0) {
    local_a = 0;
    local_8 = 0;
  }
  else {
    local_a = *puVar4;
    local_8 = ((undefined2 *)puVar4)[1];
  }
  if (*param_2 == '\0') {
    FUN_10f8_8b2d((int)*(undefined4 *)((int)puVar1 + 6),
                  (int)((ulong)*(undefined4 *)((int)puVar1 + 6) >> 0x10),0,0,param_3);
  }
  else {
    uVar5 = FUN_1148_1c9e(local_a,local_8,(char *)param_2,(int)((ulong)param_2 >> 0x10));
    FUN_10f8_8b2d((int)*(undefined4 *)((int)puVar1 + 6),
                  (int)((ulong)*(undefined4 *)((int)puVar1 + 6) >> 0x10),uVar5,param_3);
  }
  uVar3 = 0x10f8;
  if (puVar4 != (undefined2 *)0x0) {
    uVar3 = 0x1148;
    FUN_1148_1ce9(puVar4);
  }
  puVar4 = (undefined2 *)((int)*param_1 + 0x58);
  (*(code *)*puVar4)(uVar3,puVar1,uVar2);
  return;
}



/* ---- FUN_10f8_8e71 @ 10f8:8e71  (89 octets) ---- */

void __stdcall16far FUN_10f8_8e71(undefined4 *param_1,int param_2,int param_3,undefined2 param_4)

{
  undefined2 *puVar1;
  undefined4 *puVar2;
  undefined2 uVar3;
  int *piVar4;
  
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  puVar2 = (undefined4 *)param_1;
  piVar4 = (int *)FUN_10f8_89fd((int)*(undefined4 *)((int)puVar2 + 6),
                                (int)((ulong)*(undefined4 *)((int)puVar2 + 6) >> 0x10),param_4);
  if (piVar4 == (int *)0x0) {
    if (param_2 != 0 || param_3 != 0) {
      puVar1 = (undefined2 *)((int)*param_1 + 0x5c);
      (*(code *)*puVar1)(0x10f8,puVar2,uVar3);
    }
  }
  else {
    *piVar4 = param_2;
    ((int *)piVar4)[1] = param_3;
  }
  puVar1 = (undefined2 *)((int)*param_1 + 0x58);
  (*(code *)*puVar1)(0x10f8,puVar2,uVar3);
  return;
}



/* ---- FUN_10f8_8eca @ 10f8:8eca  (36 octets) ---- */

void __stdcall16far FUN_10f8_8eca(undefined4 param_1)

{
  undefined2 *puVar1;
  
  if (*(int *)((int)param_1 + 0xc) != 0) {
    puVar1 = (undefined2 *)((int)param_1 + 10);
    (*(code *)*puVar1)();
  }
  return;
}



/* ---- FUN_10f8_8f1b @ 10f8:8f1b  (79 octets) ---- */

void __stdcall16far FUN_10f8_8f1b(undefined4 *param_1,undefined2 param_2)

{
  undefined2 *puVar1;
  undefined4 *puVar2;
  undefined2 uVar3;
  long lVar4;
  
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  puVar2 = (undefined4 *)param_1;
  lVar4 = FUN_10f8_89fd((int)*(undefined4 *)((int)puVar2 + 6),
                        (int)((ulong)*(undefined4 *)((int)puVar2 + 6) >> 0x10),param_2);
  if (lVar4 != 0) {
    FUN_1148_1ce9(lVar4);
  }
  FUN_10f8_88e0((int)*(undefined4 *)((int)puVar2 + 6),
                (int)((ulong)*(undefined4 *)((int)puVar2 + 6) >> 0x10),param_2);
  puVar1 = (undefined2 *)((int)*param_1 + 0x58);
  (*(code *)*puVar1)(0x10f8,puVar2,uVar3);
  return;
}



/* ---- FUN_10f8_8f6a @ 10f8:8f6a  (27 octets) ---- */

void __stdcall16far FUN_10f8_8f6a(undefined4 param_1,undefined2 param_2,undefined2 param_3)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)((int)param_1 + 6);
  FUN_10f8_898f((int)uVar1,(int)((ulong)uVar1 >> 0x10),param_2,param_3);
  return;
}



/* ---- FUN_10f8_8f85 @ 10f8:8f85  (52 octets) ---- */

void __stdcall16far FUN_10f8_8f85(undefined4 *param_1,undefined4 param_2,undefined2 param_3)

{
  undefined2 *puVar1;
  undefined4 uVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  
  uVar4 = FUN_1148_1c9e(0,0,(int)param_2,(int)((ulong)param_2 >> 0x10));
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  uVar2 = *(undefined4 *)((int)(undefined4 *)param_1 + 6);
  FUN_10f8_8a33((int)uVar2,(int)((ulong)uVar2 >> 0x10),uVar4,param_3);
  puVar1 = (undefined2 *)((int)*param_1 + 0x58);
  (*(code *)*puVar1)(0x10f8,(undefined4 *)param_1,uVar3);
  return;
}



/* ---- FUN_10f8_8fb9 @ 10f8:8fb9  (27 octets) ---- */

undefined2 __stdcall16far FUN_10f8_8fb9(undefined2 param_1_00,undefined2 param_1,undefined2 param_2)

{
  FUN_1148_1ce9(param_1,param_2);
  return 0;
}



/* ---- FUN_10f8_8fd4 @ 10f8:8fd4  (59 octets) ---- */

void __stdcall16far FUN_10f8_8fd4(undefined4 *param_1)

{
  undefined2 *puVar1;
  undefined2 uVar2;
  undefined4 *puVar3;
  undefined2 uVar4;
  undefined2 unaff_CS;
  undefined2 uVar5;
  
  uVar5 = 0x10f8;
  uVar4 = (undefined2)((ulong)param_1 >> 0x10);
  puVar3 = (undefined4 *)param_1;
  uVar2 = FUN_10f8_89d9(unaff_CS,(int)*(undefined4 *)((int)puVar3 + 6),
                        (int)((ulong)*(undefined4 *)((int)puVar3 + 6) >> 0x10),0x8fb9);
  FUN_10f8_88ae((int)*(undefined4 *)((int)puVar3 + 6),
                (int)((ulong)*(undefined4 *)((int)puVar3 + 6) >> 0x10));
  puVar1 = (undefined2 *)((int)*param_1 + 0x58);
  (*(code *)*puVar1)(0x10f8,puVar3,uVar4,uVar5,uVar2);
  return;
}



/* ---- FUN_10f8_900f @ 10f8:900f  (77 octets) ---- */

undefined4 __stdcall16far
FUN_10f8_900f(undefined4 param_1,char param_2,undefined2 param_3,undefined2 param_4_00,
             undefined2 param_4,undefined2 param_5)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uStack_a;
  
  if (param_2 != '\0') {
    FUN_1158_1fe2();
  }
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  FUN_1158_1f50(iVar1,uVar2,0);
  *(undefined2 *)(iVar1 + 6) = param_4;
  *(undefined2 *)(iVar1 + 8) = param_5;
  *(undefined2 *)(iVar1 + 10) = param_3;
  if (param_2 != '\0') {
    DAT_1160_1858 = uStack_a;
  }
  return param_1;
}



/* ---- FUN_10f8_9157 @ 10f8:9157  (95 octets) ---- */

void __stdcall16far FUN_10f8_9157(undefined4 param_1,int *param_2,int *param_3,int param_4)

{
  int iVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  if (*(int *)(iVar1 + 10) == 0) {
    *param_3 = -1;
    *param_2 = -1;
  }
  else if (*(int *)(iVar1 + 10) < 1) {
    *param_3 = -1 - *(int *)(iVar1 + 10);
    *param_2 = param_4;
  }
  else {
    *param_3 = param_4;
    *param_2 = *(int *)(iVar1 + 10) + -1;
  }
  return;
}



/* ---- FUN_10f8_932f @ 10f8:932f  (67 octets) ---- */

undefined2 __stdcall16far FUN_10f8_932f(undefined4 param_1)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 local_4;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  if (*(int *)(iVar1 + 10) == 0) {
    local_4 = 0;
  }
  else if (*(int *)(iVar1 + 10) < 1) {
    local_4 = *(undefined2 *)((int)*(undefined4 *)(iVar1 + 6) + 0x10a);
  }
  else {
    local_4 = *(undefined2 *)((int)*(undefined4 *)(iVar1 + 6) + 0xe6);
  }
  return local_4;
}



/* ---- FUN_10f8_9372 @ 10f8:9372  (79 octets) ---- */

undefined4 __stdcall16far FUN_10f8_9372(undefined4 param_1,undefined2 param_2)

{
  undefined2 uVar1;
  undefined2 unaff_SS;
  undefined4 uVar2;
  undefined2 local_a;
  int local_8 [3];
  
  uVar1 = (undefined2)((ulong)param_1 >> 0x10);
  FUN_10f8_9157((int)param_1,uVar1,&local_a,unaff_SS,local_8,unaff_SS,param_2);
  if (local_8[0] < 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined4 *)((int)param_1 + 6);
    uVar2 = FUN_10f8_9abb((int)uVar2,(int)((ulong)uVar2 >> 0x10),local_a,local_8[0]);
  }
  return uVar2;
}



/* ---- FUN_10f8_93c1 @ 10f8:93c1  (56 octets) ---- */

void __stdcall16far FUN_10f8_93c1(undefined4 param_1,undefined4 param_2,undefined2 param_3)

{
  undefined4 uVar1;
  undefined2 uVar2;
  undefined2 unaff_SS;
  undefined2 local_6;
  undefined2 local_4;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  FUN_10f8_9157((int)param_1,uVar2,&local_6,unaff_SS,&local_4,unaff_SS,param_3);
  uVar1 = *(undefined4 *)((int)param_1 + 6);
  FUN_10f8_9b08((int)uVar1,(int)((ulong)uVar1 >> 0x10),(int)param_2,(int)((ulong)param_2 >> 0x10),
                local_6,local_4);
  return;
}



/* ---- FUN_10f8_93f9 @ 10f8:93f9  (57 octets) ---- */

void __stdcall16far
FUN_10f8_93f9(undefined4 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4)

{
  undefined4 uVar1;
  undefined2 uVar2;
  undefined2 unaff_SS;
  undefined2 local_6;
  undefined2 local_4;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  FUN_10f8_9157((int)param_1,uVar2,&local_6,unaff_SS,&local_4,unaff_SS,param_4);
  uVar1 = *(undefined4 *)((int)param_1 + 6);
  FUN_10f8_9b5f((int)uVar1,(int)((ulong)uVar1 >> 0x10),param_2,param_3,local_6,local_4);
  return;
}



/* ---- FUN_10f8_9432 @ 10f8:9432  (25 octets) ---- */

void __stdcall16far FUN_10f8_9432(undefined4 param_1,undefined param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)((int)param_1 + 6);
  FUN_10f8_98ae((int)uVar1,(int)((ulong)uVar1 >> 0x10),param_2);
  return;
}



/* ---- FUN_10f8_944b @ 10f8:944b  (69 octets) ---- */

undefined4 __stdcall16far
FUN_10f8_944b(undefined4 param_1,char param_2,undefined2 param_3,undefined2 param_4)

{
  undefined2 uVar1;
  undefined2 uStack_a;
  
  if (param_2 != '\0') {
    FUN_1158_1fe2();
  }
  uVar1 = (undefined2)((ulong)param_1 >> 0x10);
  FUN_10f8_1e71((int)param_1,uVar1,0,param_3,param_4);
  FUN_10f8_97d9((int)param_1,uVar1);
  if (param_2 != '\0') {
    DAT_1160_1858 = uStack_a;
  }
  return param_1;
}



/* ---- FUN_10f8_9490 @ 10f8:9490  (26 octets) ---- */

undefined2 __stdcall16far FUN_10f8_9490(undefined2 param_1_00,undefined4 param_1)

{
  FUN_1158_1f7f((int)param_1,(int)((ulong)param_1 >> 0x10));
  return 0;
}



/* ---- FUN_10f8_94aa @ 10f8:94aa  (191 octets) ---- */

void __stdcall16far FUN_10f8_94aa(undefined4 param_1,char param_2)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 unaff_CS;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  if (*(int *)(iVar1 + 0x185) != 0 || *(int *)(iVar1 + 0x187) != 0) {
    FUN_10f8_89d9(unaff_CS,(int)*(undefined4 *)(iVar1 + 0x185),
                  (int)((ulong)*(undefined4 *)(iVar1 + 0x185) >> 0x10),0x9490);
    unaff_CS = 0x1158;
    FUN_1158_1f7f((int)*(undefined4 *)(iVar1 + 0x185),
                  (int)((ulong)*(undefined4 *)(iVar1 + 0x185) >> 0x10));
  }
  if (*(int *)(iVar1 + 0x189) != 0 || *(int *)(iVar1 + 0x18b) != 0) {
    FUN_10f8_89d9(unaff_CS,(int)*(undefined4 *)(iVar1 + 0x189),
                  (int)((ulong)*(undefined4 *)(iVar1 + 0x189) >> 0x10),0x9490);
    unaff_CS = 0x1158;
    FUN_1158_1f7f((int)*(undefined4 *)(iVar1 + 0x189),
                  (int)((ulong)*(undefined4 *)(iVar1 + 0x189) >> 0x10));
  }
  if (*(int *)(iVar1 + 0x181) != 0 || *(int *)(iVar1 + 0x183) != 0) {
    FUN_10f8_89d9(unaff_CS,(int)*(undefined4 *)(iVar1 + 0x181),
                  (int)((ulong)*(undefined4 *)(iVar1 + 0x181) >> 0x10),0x9490);
    FUN_1158_1f7f((int)*(undefined4 *)(iVar1 + 0x181),
                  (int)((ulong)*(undefined4 *)(iVar1 + 0x181) >> 0x10));
  }
  FUN_10f8_1fa0(iVar1,uVar2,0);
  if (param_2 != '\0') {
    FUN_1158_200f();
  }
  return;
}



/* ---- FUN_10f8_9569 @ 10f8:9569  (30 octets) ---- */

void __stdcall16far FUN_10f8_9569(undefined2 param_1,undefined4 *param_2)

{
  undefined2 *puVar1;
  
  puVar1 = (undefined2 *)((int)*param_2 + 0x4c);
  (*(code *)*puVar1)();
  return;
}



/* ---- FUN_10f8_9587 @ 10f8:9587  (64 octets) ---- */

void __stdcall16far
FUN_10f8_9587(undefined4 *param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4,
             undefined2 param_5)

{
  undefined2 *puVar1;
  undefined4 *puVar2;
  undefined2 uVar3;
  undefined2 unaff_CS;
  undefined2 uVar4;
  
  uVar4 = 0x10f8;
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  puVar2 = (undefined4 *)param_1;
  FUN_10f8_89d9(unaff_CS,(int)*(undefined4 *)((int)puVar2 + 0x181),
                (int)((ulong)*(undefined4 *)((int)puVar2 + 0x181) >> 0x10),0x9569);
  puVar1 = (undefined2 *)((int)*param_1 + 0x44);
  (*(code *)*puVar1)(0x10f8,puVar2,uVar3,uVar4);
  FUN_10f8_7fad(puVar2,uVar3,param_2,param_3,param_4,param_5);
  return;
}



/* ---- FUN_10f8_95c7 @ 10f8:95c7  (62 octets) ---- */

void __stdcall16far
FUN_10f8_95c7(undefined4 *param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4,
             undefined2 param_5)

{
  undefined2 *puVar1;
  undefined4 *puVar2;
  undefined2 uVar3;
  
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  puVar2 = (undefined4 *)param_1;
  FUN_10f8_8aba((int)*(undefined4 *)((int)puVar2 + 0x181),
                (int)((ulong)*(undefined4 *)((int)puVar2 + 0x181) >> 0x10),param_2,param_4);
  puVar1 = (undefined2 *)((int)*param_1 + 0x44);
  (*(code *)*puVar1)(0x10f8,puVar2,uVar3);
  FUN_10f8_806d(puVar2,uVar3,param_2,param_3,param_4,param_5);
  return;
}



/* ---- FUN_10f8_96f7 @ 10f8:96f7  (122 octets) ---- */

void FUN_10f8_96f7(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined2 uVar4;
  undefined2 unaff_SS;
  undefined *puVar5;
  undefined2 uVar6;
  undefined *puVar7;
  undefined2 uVar8;
  undefined local_202 [256];
  undefined local_102 [256];
  
  puVar5 = local_102;
  puVar7 = local_202;
  uVar6 = unaff_SS;
  uVar4 = unaff_SS;
  FUN_10f8_9a68((int)*(undefined4 *)(param_1 + 6),(int)((ulong)*(undefined4 *)(param_1 + 6) >> 0x10)
                ,*(undefined2 *)(param_1 + 0x10),*(undefined2 *)(param_1 + 0x14));
  FUN_1150_0d4c(puVar7,uVar6,puVar5,uVar4);
  uVar1 = *(undefined4 *)((int)*(undefined4 *)(param_1 + 6) + 0xd8);
  FUN_1128_21d2((int)uVar1,(int)((ulong)uVar1 >> 0x10));
  iVar2 = *(int *)(param_1 + -8) + 2;
  iVar3 = *(int *)(param_1 + -6) + 2;
  uVar8 = 6;
  param_1 = param_1 + -8;
  puVar5 = local_102;
  uVar6 = unaff_SS;
  uVar4 = FUN_1150_0c8c(local_102,unaff_SS);
  EXTTEXTOUT(0x1150,0,0,uVar4,puVar5,unaff_SS,param_1,uVar6,uVar8,iVar3,iVar2);
  return;
}



/* ---- FUN_10f8_9771 @ 10f8:9771  (74 octets) ---- */

void __stdcall16far
FUN_10f8_9771(undefined4 param_1,undefined param_2,undefined *param_3,undefined2 param_4,
             undefined2 param_5,undefined2 param_6,undefined2 param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined2 in_AX;
  undefined uVar3;
  undefined extraout_AH;
  int iVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined2 uVar7;
  undefined2 unaff_SS;
  undefined local_a [8];
  
  uVar3 = (undefined)((uint)in_AX >> 8);
  puVar6 = local_a;
  puVar5 = (undefined *)param_3;
  for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
    puVar2 = puVar6;
    puVar6 = puVar6 + 1;
    puVar1 = puVar5;
    puVar5 = puVar5 + 1;
    *puVar2 = *puVar1;
  }
  uVar7 = (undefined2)((ulong)param_1 >> 0x10);
  if (*(char *)((int)param_1 + 0x13b) != '\0') {
    FUN_10f8_96f7(&stack0xfffe);
    uVar3 = extraout_AH;
  }
  FUN_10f8_8121((int)param_1,uVar7,CONCAT11(uVar3,param_2),local_a,unaff_SS,param_4,param_5,param_6,
                param_7);
  return;
}



/* ---- FUN_10f8_97bb @ 10f8:97bb  (15 octets) ---- */

void __stdcall16far FUN_10f8_97bb(undefined4 param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int)param_1 + 399);
  *piVar1 = *piVar1 + 1;
  return;
}



/* ---- FUN_10f8_97ca @ 10f8:97ca  (15 octets) ---- */

void __stdcall16far FUN_10f8_97ca(undefined4 param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int)param_1 + 399);
  *piVar1 = *piVar1 + -1;
  return;
}



/* ---- FUN_10f8_97d9 @ 10f8:97d9  (213 octets) ---- */

void __stdcall16far FUN_10f8_97d9(undefined4 param_1)

{
  int iVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  undefined local_3;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  if (*(int *)(iVar1 + 0x189) == 0 && *(int *)(iVar1 + 0x18b) == 0) {
    if ((*(int *)(iVar1 + 0xe8) < 1) &&
       ((*(int *)(iVar1 + 0xe8) < 0 || (*(uint *)(iVar1 + 0xe6) < 0x201)))) {
      local_3 = 0;
    }
    else {
      local_3 = 1;
    }
    uVar3 = FUN_10f8_8849(0x8233,0x10f8,1,local_3);
    *(undefined2 *)(iVar1 + 0x189) = (int)uVar3;
    *(undefined2 *)(iVar1 + 0x18b) = (int)((ulong)uVar3 >> 0x10);
  }
  if ((*(int *)(iVar1 + 0x10c) < 1) &&
     ((*(int *)(iVar1 + 0x10c) < 0 || (*(uint *)(iVar1 + 0x10a) < 0x101)))) {
    local_3 = 0;
  }
  else {
    local_3 = 1;
  }
  if (*(int *)(iVar1 + 0x185) == 0 && *(int *)(iVar1 + 0x187) == 0) {
    uVar3 = FUN_10f8_8849(0x8233,0x10f8,1,local_3);
    *(undefined2 *)(iVar1 + 0x185) = (int)uVar3;
    *(undefined2 *)(iVar1 + 0x187) = (int)((ulong)uVar3 >> 0x10);
  }
  if (*(int *)(iVar1 + 0x181) == 0 && *(int *)(iVar1 + 0x183) == 0) {
    uVar3 = FUN_10f8_8849(0x8233,0x10f8,1,local_3);
    *(undefined2 *)(iVar1 + 0x181) = (int)uVar3;
    *(undefined2 *)(iVar1 + 0x183) = (int)((ulong)uVar3 >> 0x10);
  }
  return;
}



/* ---- FUN_10f8_98ae @ 10f8:98ae  (48 octets) ---- */

void __stdcall16far FUN_10f8_98ae(undefined4 param_1,char param_2)

{
  int iVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  *(char *)(iVar1 + 0x18d) = param_2;
  if ((param_2 == '\0') && (*(char *)(iVar1 + 0x18e) != '\0')) {
    FUN_10f8_4882(iVar1,uVar2);
    *(undefined *)(iVar1 + 0x18e) = 0;
  }
  return;
}



/* ---- FUN_10f8_98de @ 10f8:98de  (102 octets) ---- */

void __stdcall16far FUN_10f8_98de(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  if (*(char *)(iVar1 + 0x18d) == '\0') {
    FUN_10f8_483b(iVar1,uVar2,param_2,param_2 >> 0xf,param_3,param_3 >> 0xf);
  }
  else {
    *(undefined *)(iVar1 + 0x18e) = 1;
  }
  if ((((param_3 >> 0xf == *(int *)(iVar1 + 0xf4)) && (param_3 == *(int *)(iVar1 + 0xf2))) &&
      (param_2 >> 0xf == *(int *)(iVar1 + 0xf8))) &&
     ((param_2 == *(int *)(iVar1 + 0xf6) && (*(int *)(iVar1 + 399) == 0)))) {
    FUN_10f8_259f(iVar1,uVar2);
  }
  return;
}



/* ---- FUN_10f8_9944 @ 10f8:9944  (164 octets) ---- */

long __stdcall16far FUN_10f8_9944(undefined4 param_1,char param_2,int param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined2 uVar3;
  long lVar4;
  undefined4 local_c;
  int local_8;
  
  iVar2 = (int)param_1;
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  if (param_2 == '\0') {
    puVar1 = (undefined4 *)(iVar2 + 0x185);
  }
  else {
    puVar1 = (undefined4 *)(iVar2 + 0x189);
  }
  local_c = (undefined4 *)CONCAT22(uVar3,puVar1);
  lVar4 = FUN_10f8_89fd((int)*local_c,(int)((ulong)*local_c >> 0x10),param_3);
  if (lVar4 == 0) {
    if (param_2 == '\0') {
      local_8 = param_3 + 1;
    }
    else {
      local_8 = -1 - param_3;
    }
    lVar4 = FUN_10f8_900f(0xd9c,0x10f8,CONCAT11((char)((uint)local_8 >> 8),1),local_8,local_8 >> 0xf
                          ,iVar2,uVar3);
    FUN_10f8_8b2d((int)*local_c,(int)((ulong)*local_c >> 0x10),lVar4,param_3);
  }
  return lVar4;
}



/* ---- FUN_10f8_99e8 @ 10f8:99e8  (128 octets) ---- */

long __stdcall16far FUN_10f8_99e8(undefined4 param_1,undefined2 param_2)

{
  int iVar1;
  undefined2 uVar2;
  long lVar3;
  undefined local_7;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  lVar3 = FUN_10f8_89fd((int)*(undefined4 *)(iVar1 + 0x181),
                        (int)((ulong)*(undefined4 *)(iVar1 + 0x181) >> 0x10),param_2);
  if (lVar3 == 0) {
    if ((*(int *)(iVar1 + 0xe8) < 1) &&
       ((*(int *)(iVar1 + 0xe8) < 0 || (*(uint *)(iVar1 + 0xe6) < 0x201)))) {
      local_7 = 0;
    }
    else {
      local_7 = 1;
    }
    lVar3 = FUN_10f8_8b6f(0x8263,0x10f8,1,local_7);
    FUN_10f8_8b2d((int)*(undefined4 *)(iVar1 + 0x181),
                  (int)((ulong)*(undefined4 *)(iVar1 + 0x181) >> 0x10),lVar3,param_2);
  }
  return lVar3;
}



/* ---- FUN_10f8_9a68 @ 10f8:9a68  (83 octets) ---- */

void __stdcall16far
FUN_10f8_9a68(undefined4 param_1,undefined2 param_2,undefined2 param_3,undefined *param_4)

{
  undefined2 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined local_106 [256];
  undefined4 *local_6;
  
  uVar2 = *(undefined4 *)((int)param_1 + 0x181);
  local_6 = (undefined4 *)FUN_10f8_89fd((int)uVar2,(int)((ulong)uVar2 >> 0x10),param_2);
  if (local_6 == (undefined4 *)0x0) {
    *param_4 = 0;
  }
  else {
    puVar1 = (undefined2 *)((int)*local_6 + 0xc);
    puVar3 = local_6;
    (*(code *)*puVar1)(0x10f8,local_6,param_3,local_106);
    FUN_1158_17e7(0xff,(undefined *)param_4,(int)((ulong)param_4 >> 0x10),puVar3);
  }
  return;
}



/* ---- FUN_10f8_9abb @ 10f8:9abb  (77 octets) ---- */

undefined4 __stdcall16far FUN_10f8_9abb(undefined4 param_1,undefined2 param_2,undefined2 param_3)

{
  undefined2 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  
  uVar3 = *(undefined4 *)((int)param_1 + 0x181);
  puVar2 = (undefined4 *)FUN_10f8_89fd((int)uVar3,(int)((ulong)uVar3 >> 0x10),param_2);
  if (puVar2 == (undefined4 *)0x0) {
    uVar3 = 0;
  }
  else {
    puVar1 = (undefined2 *)((int)*puVar2 + 0x14);
    uVar3 = (*(code *)*puVar1)(0x10f8,puVar2,param_3);
  }
  return uVar3;
}



/* ---- FUN_10f8_9b08 @ 10f8:9b08  (87 octets) ---- */

void __stdcall16far
FUN_10f8_9b08(undefined4 param_1,undefined4 param_2,undefined2 param_3,undefined2 param_4)

{
  undefined2 *puVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined4 *puVar6;
  undefined2 uVar7;
  
  uVar4 = (undefined2)((ulong)param_2 >> 0x10);
  uVar2 = (undefined2)param_2;
  uVar5 = (undefined2)((ulong)param_1 >> 0x10);
  uVar3 = (undefined2)param_1;
  uVar7 = param_4;
  puVar6 = (undefined4 *)FUN_10f8_99e8(uVar3,uVar5,param_3);
  puVar1 = (undefined2 *)((int)*puVar6 + 0x18);
  (*(code *)*puVar1)(0x10f8,puVar6,uVar2,uVar4,uVar7);
  FUN_10f8_9944(uVar3,uVar5,1,param_4);
  FUN_10f8_9944(uVar3,uVar5,0,param_3);
  FUN_10f8_98de(uVar3,uVar5,param_3,param_4);
  return;
}



/* ---- FUN_10f8_9b5f @ 10f8:9b5f  (88 octets) ---- */

void __stdcall16far
FUN_10f8_9b5f(undefined4 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4,
             undefined2 param_5)

{
  undefined2 *puVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined4 *puVar4;
  undefined2 uVar5;
  
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  uVar2 = (undefined2)param_1;
  uVar5 = param_5;
  puVar4 = (undefined4 *)FUN_10f8_99e8(uVar2,uVar3,param_4);
  puVar1 = (undefined2 *)((int)*puVar4 + 0x1c);
  (*(code *)*puVar1)(0x10f8,puVar4,param_2,param_3,uVar5);
  FUN_10f8_9944(uVar2,uVar3,1,param_5);
  FUN_10f8_9944(uVar2,uVar3,0,param_4);
  FUN_10f8_98de(uVar2,uVar3,param_4,param_5);
  return;
}



/* ---- FUN_10f8_9bb7 @ 10f8:9bb7  (26 octets) ---- */

void __cdecl16far FUN_10f8_9bb7(void)

{
  undefined2 unaff_CS;
  
  DAT_1160_2aca = GETPROFILEINT(unaff_CS,400,0xbe8,0x1160,0xbe0);
  return;
}




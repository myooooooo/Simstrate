/* Simstrat (FR).EXE - segment Code23 - 5 fonctions
   Decompile par Ghidra 11.2.1 (x86 16 bits, chargeur NE). */

/* ---- FUN_10b0_1afd @ 10b0:1afd  (939 octets) ---- */

/* WARNING: Removing unreachable block (ram,0x10b01d08) */
/* WARNING: Removing unreachable block (ram,0x10b01bca) */
/* WARNING: Removing unreachable block (ram,0x10b01bf8) */
/* WARNING: Removing unreachable block (ram,0x10b01d36) */

void __stdcall16far FUN_10b0_1afd(undefined4 param_1,uint param_2,uint param_3)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  byte bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined2 uVar10;
  undefined2 uVar11;
  undefined2 uVar12;
  bool bVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  uint local_26;
  uint local_24;
  uint local_12;
  int local_10;
  uint local_e;
  int local_c;
  uint local_a;
  int local_8;
  uint local_6;
  
  uVar11 = 0x1158;
  FUN_1158_0444();
  uVar10 = (undefined2)((ulong)param_1 >> 0x10);
  iVar9 = (int)param_1;
  if (*(char *)(iVar9 + 0xe4) == '\x01') {
    local_6 = 2;
  }
  else {
    local_6 = 0;
  }
  uVar14 = (ulong)local_6;
  if (*(char *)(iVar9 + 0x112) == '\x03' || *(char *)(iVar9 + 0x112) == '\x02') {
    uVar11 = 0x14d0;
    uVar2 = GETSYSTEMMETRICS(0x1158,2);
    iVar6 = (int)uVar2 >> 0xf;
    uVar14 = CONCAT22(iVar6 + (uint)CARRY2(uVar2,local_6),uVar2 + local_6);
    if (SCARRY2(iVar6,0) != SCARRY2(iVar6,(uint)CARRY2(uVar2,local_6))) {
      uVar11 = 0x1158;
      uVar14 = FUN_1158_043e(0x14d0);
    }
  }
  iVar6 = *(int *)((int)*(undefined4 *)(iVar9 + 0x1a) + 0x22);
  uVar2 = iVar6 - *(int *)(iVar9 + 0x22);
  uVar12 = uVar11;
  if (SBORROW2(iVar6,*(int *)(iVar9 + 0x22))) {
    uVar12 = 0x1158;
    uVar2 = FUN_1158_043e(uVar11);
  }
  iVar7 = (int)uVar2 >> 0xf;
  iVar6 = ((int)param_3 >> 0xf) - iVar7;
  lVar15 = CONCAT22(iVar6 - (uint)(param_3 < uVar2),param_3 - uVar2);
  if (SBORROW2((int)param_3 >> 0xf,iVar7) != SBORROW2(iVar6,(uint)(param_3 < uVar2))) {
    lVar15 = FUN_1158_043e(uVar12);
  }
  local_e = 0;
  local_c = 0;
  while( true ) {
    iVar8 = (int)(uVar14 >> 0x10);
    local_6 = (uint)uVar14;
    uVar11 = 0x10f8;
    uVar3 = FUN_10f8_6e30(iVar9,uVar10,local_e,local_c);
    iVar6 = ((int)uVar3 >> 0xf) + iVar8;
    lVar16 = CONCAT22(iVar6 + (uint)CARRY2(uVar3,local_6),uVar3 + local_6);
    if (SCARRY2((int)uVar3 >> 0xf,iVar8) != SCARRY2(iVar6,(uint)CARRY2(uVar3,local_6))) {
      uVar11 = 0x1158;
      lVar16 = FUN_1158_043e(0x10f8);
    }
    bVar5 = lVar16 <= lVar15;
    uVar3 = (uint)(*(int *)(iVar9 + 0xe6) == 0);
    lVar16 = CONCAT22(*(int *)(iVar9 + 0xe8) - uVar3,*(int *)(iVar9 + 0xe6) + -1);
    if (SBORROW2(*(int *)(iVar9 + 0xe8),uVar3) != false) {
      lVar16 = FUN_1158_043e(uVar11);
    }
    if ((CONCAT22(local_c,local_e) <= lVar16 & bVar5) == 0) break;
    uVar3 = FUN_10f8_6e30(iVar9,uVar10,local_e,local_c);
    iVar6 = ((int)uVar3 >> 0xf) + iVar8;
    uVar14 = CONCAT22(iVar6 + (uint)CARRY2(uVar3,local_6),uVar3 + local_6);
    if (SCARRY2((int)uVar3 >> 0xf,iVar8) != SCARRY2(iVar6,(uint)CARRY2(uVar3,local_6))) {
      uVar14 = FUN_1158_043e(0x10f8);
    }
    bVar13 = 0xfffe < local_e;
    local_e = local_e + 1;
    local_c = local_c + (uint)bVar13;
  }
  uVar11 = 0x1158;
  local_24 = FUN_1158_0416();
  if (*(char *)(iVar9 + 0xe4) == '\x01') {
    local_a = 2;
  }
  else {
    local_a = 0;
  }
  uVar14 = (ulong)local_a;
  if (*(char *)(iVar9 + 0x112) == '\x03' || *(char *)(iVar9 + 0x112) == '\x01') {
    uVar11 = 0x14d0;
    uVar3 = GETSYSTEMMETRICS(0x1158,3);
    iVar6 = (int)uVar3 >> 0xf;
    uVar14 = CONCAT22(iVar6 + (uint)CARRY2(uVar3,local_a),uVar3 + local_a);
    if (SCARRY2(iVar6,0) != SCARRY2(iVar6,(uint)CARRY2(uVar3,local_a))) {
      uVar11 = 0x1158;
      uVar14 = FUN_1158_043e(0x14d0);
    }
  }
  iVar6 = *(int *)((int)*(undefined4 *)(iVar9 + 0x1a) + 0x24);
  uVar3 = iVar6 - *(int *)(iVar9 + 0x24);
  uVar12 = uVar11;
  if (SBORROW2(iVar6,*(int *)(iVar9 + 0x24))) {
    uVar12 = 0x1158;
    uVar3 = FUN_1158_043e(uVar11);
  }
  iVar8 = (int)uVar3 >> 0xf;
  iVar6 = ((int)param_2 >> 0xf) - iVar8;
  lVar15 = CONCAT22(iVar6 - (uint)(param_2 < uVar3),param_2 - uVar3);
  if (SBORROW2((int)param_2 >> 0xf,iVar8) != SBORROW2(iVar6,(uint)(param_2 < uVar3))) {
    lVar15 = FUN_1158_043e(uVar12);
  }
  local_12 = 0;
  local_10 = 0;
  while( true ) {
    local_8 = (int)(uVar14 >> 0x10);
    local_a = (uint)uVar14;
    uVar11 = 0x10f8;
    uVar4 = FUN_10f8_6e8b(iVar9,uVar10,local_12,local_10);
    iVar6 = ((int)uVar4 >> 0xf) + local_8;
    lVar16 = CONCAT22(iVar6 + (uint)CARRY2(uVar4,local_a),uVar4 + local_a);
    if (SCARRY2((int)uVar4 >> 0xf,local_8) != SCARRY2(iVar6,(uint)CARRY2(uVar4,local_a))) {
      uVar11 = 0x1158;
      lVar16 = FUN_1158_043e(0x10f8);
    }
    bVar5 = lVar16 <= lVar15;
    uVar4 = (uint)(*(int *)(iVar9 + 0x10a) == 0);
    lVar16 = CONCAT22(*(int *)(iVar9 + 0x10c) - uVar4,*(int *)(iVar9 + 0x10a) + -1);
    if (SBORROW2(*(int *)(iVar9 + 0x10c),uVar4) != false) {
      lVar16 = FUN_1158_043e(uVar11);
    }
    if ((CONCAT22(local_10,local_12) <= lVar16 & bVar5) == 0) break;
    uVar4 = FUN_10f8_6e8b(iVar9,uVar10,local_12,local_10);
    iVar6 = ((int)uVar4 >> 0xf) + local_8;
    uVar14 = CONCAT22(iVar6 + (uint)CARRY2(uVar4,local_a),uVar4 + local_a);
    if (SCARRY2((int)uVar4 >> 0xf,local_8) != SCARRY2(iVar6,(uint)CARRY2(uVar4,local_a))) {
      uVar14 = FUN_1158_043e(0x10f8);
    }
    bVar13 = 0xfffe < local_12;
    local_12 = local_12 + 1;
    local_10 = local_10 + (uint)bVar13;
  }
  uVar11 = 0x1158;
  uVar12 = 0x1d84;
  local_26 = FUN_1158_0416();
  if (*(char *)(iVar9 + 0x112) != '\0') {
    if ((local_10 == *(int *)(iVar9 + 0x10c)) && (local_12 == *(uint *)(iVar9 + 0x10a))) {
      uVar12 = 0x1158;
      uVar11 = 0x14d0;
      iVar6 = GETSYSTEMMETRICS(0x1158,2);
      bVar13 = SBORROW2(local_24,iVar6);
      local_24 = local_24 - iVar6;
      if (bVar13) {
        uVar11 = 0x1158;
        local_24 = FUN_1158_043e(0x14d0);
      }
    }
    if ((local_c == *(int *)(iVar9 + 0xe8)) && (local_e == *(uint *)(iVar9 + 0xe6))) {
      iVar6 = GETSYSTEMMETRICS(uVar12,3,uVar11);
      bVar13 = SBORROW2(local_26,iVar6);
      local_26 = local_26 - iVar6;
      if (bVar13) {
        local_26 = FUN_1158_043e(0x14d0);
      }
    }
  }
  FUN_10f8_7345(iVar9,uVar10,*(int *)(iVar9 + 0xfe),*(int *)(iVar9 + 0xfe) >> 0xf);
  FUN_10f8_75dd(iVar9,uVar10,*(int *)(iVar9 + 0x100),*(int *)(iVar9 + 0x100) >> 0xf);
  if (SCARRY2((int)local_24 >> 0xf,iVar7) !=
      SCARRY2(((int)local_24 >> 0xf) + iVar7,(uint)CARRY2(local_24,uVar2))) {
    FUN_1158_043e(0x10f8);
  }
  uVar11 = FUN_1158_0416();
  FUN_1138_17bf((int)*(undefined4 *)(iVar9 + 0x1a),
                (int)((ulong)*(undefined4 *)(iVar9 + 0x1a) >> 0x10),uVar11);
  if (SCARRY2((int)local_26 >> 0xf,iVar8) !=
      SCARRY2(((int)local_26 >> 0xf) + iVar8,(uint)CARRY2(local_26,uVar3))) {
    FUN_1158_043e(0x1138);
  }
  uVar11 = FUN_1158_0416();
  FUN_1138_17e1((int)*(undefined4 *)(iVar9 + 0x1a),
                (int)((ulong)*(undefined4 *)(iVar9 + 0x1a) >> 0x10),uVar11);
  if (*(int *)(iVar9 + 0x198) != 0) {
    uVar11 = (undefined2)((ulong)*(undefined4 *)(iVar9 + 0x196) >> 0x10);
    iVar6 = (int)*(undefined4 *)(iVar9 + 0x196);
    uVar1 = *(undefined4 *)(iVar6 + 0x1a);
    FUN_1138_17bf(iVar6,uVar11,*(undefined2 *)((int)uVar1 + 0x22));
  }
  FUN_1138_17e1(iVar9,uVar10,local_26);
  FUN_1138_17bf(iVar9,uVar10,local_24);
  return;
}



/* ---- FUN_10b0_1ea8 @ 10b0:1ea8  (53 octets) ---- */

void __stdcall16far FUN_10b0_1ea8(undefined4 param_1,char param_2)

{
  int iVar1;
  undefined2 uVar2;
  
  FUN_1158_0444();
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  *(char *)(iVar1 + 0x191) = param_2;
  if (param_2 != '\0') {
    *(undefined *)(iVar1 + 0x13b) = 0;
    FUN_10f8_737d(iVar1,uVar2,*(uint *)(iVar1 + 0x108) & 0xfff0);
  }
  return;
}



/* ---- FUN_10b0_3815 @ 10b0:3815  (71 octets) ---- */

void __stdcall16far FUN_10b0_3815(undefined4 param_1,undefined param_2,int *param_3)

{
  undefined extraout_AH;
  int iVar1;
  undefined2 uVar2;
  
  FUN_1158_0444();
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  FUN_1138_50fe(iVar1,uVar2,CONCAT11(extraout_AH,param_2),(int *)param_3,
                (int)((ulong)param_3 >> 0x10));
  if ((*(int *)(iVar1 + 0x194) != 0) && (*param_3 == 0x11)) {
    FUN_1138_1c77((int)*(undefined4 *)(iVar1 + 0x192),
                  (int)((ulong)*(undefined4 *)(iVar1 + 0x192) >> 0x10),0);
  }
  return;
}



/* ---- FUN_10b0_385c @ 10b0:385c  (72 octets) ---- */

undefined __stdcall16far
FUN_10b0_385c(undefined4 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4,
             undefined2 param_5)

{
  undefined uVar1;
  int iVar2;
  undefined2 uVar3;
  
  FUN_1158_0444();
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  iVar2 = (int)param_1;
  uVar1 = FUN_10f8_80a1(iVar2,uVar3,param_2,param_3,param_4,param_5);
  if (*(int *)(iVar2 + 0x194) != 0) {
    FUN_1138_1c77((int)*(undefined4 *)(iVar2 + 0x192),
                  (int)((ulong)*(undefined4 *)(iVar2 + 0x192) >> 0x10),0);
  }
  return uVar1;
}



/* ---- FUN_10b0_38a4 @ 10b0:38a4  (112 octets) ---- */

void __stdcall16far FUN_10b0_38a4(undefined4 param_1)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 unaff_SS;
  undefined *puVar3;
  undefined2 uVar4;
  undefined local_12 [8];
  int local_a [2];
  int local_6;
  
  local_6 = 0x38af;
  FUN_1158_0444();
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  FUN_10f8_8176(iVar1,uVar2);
  if (*(int *)(iVar1 + 0x194) != 0) {
    puVar3 = local_12;
    uVar4 = unaff_SS;
    FUN_10f8_7f35(iVar1,uVar2,*(undefined2 *)(iVar1 + 0xf6),*(undefined2 *)(iVar1 + 0xf8),
                  *(undefined2 *)(iVar1 + 0xf2),*(undefined2 *)(iVar1 + 0xf4));
    FUN_1158_161b(8,local_a,unaff_SS,puVar3,uVar4);
    if (local_a[0] == local_6) {
      FUN_1138_1c77((int)*(undefined4 *)(iVar1 + 0x192),
                    (int)((ulong)*(undefined4 *)(iVar1 + 0x192) >> 0x10),0);
    }
  }
  return;
}




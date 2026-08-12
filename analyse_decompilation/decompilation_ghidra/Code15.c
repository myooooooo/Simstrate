/* Simstrat (FR).EXE - segment Code15 - 38 fonctions
   Decompile par Ghidra 11.2.1 (x86 16 bits, chargeur NE). */

/* ---- FUN_1070_0c77 @ 1070:0c77  (43 octets) ---- */

void __stdcall16far FUN_1070_0c77(undefined4 param_1)

{
  undefined2 uVar1;
  
  FUN_1158_0444();
  FUN_1010_38c2(0);
  uVar1 = (undefined2)((ulong)param_1 >> 0x10);
  *(undefined2 *)((int)param_1 + 0x104) = 3;
  FUN_1140_5556((int)param_1,uVar1);
  FUN_1150_28c3(0x1140);
  return;
}



/* ---- FUN_1070_0ca8 @ 1070:0ca8  (161 octets) ---- */

void __stdcall16far FUN_1070_0ca8(int param_1)

{
  ulong uVar1;
  undefined2 uVar2;
  undefined extraout_AH;
  undefined2 unaff_CS;
  undefined2 uStack_1c;
  undefined *puStack_1a;
  undefined2 uStack_18;
  undefined2 uStack_16;
  undefined2 uStack_14;
  undefined2 uStack_12;
  undefined2 uStack_10;
  undefined2 uStack_e;
  undefined2 uStack_c;
  undefined4 local_a;
  undefined2 local_6;
  
  _local_6 = CONCAT22(unaff_CS,0xcb3);
  FUN_1158_0444();
  if (param_1 < 1) {
    return;
  }
  uStack_c = DAT_1160_2c2a._2_2_;
  uStack_e = (undefined2)DAT_1160_2c2a;
  uStack_10 = CONCAT11(extraout_AH,1);
  uStack_12 = 0x1070;
  uStack_14 = 0x22;
  uStack_16 = 0x1158;
  uStack_18 = 0xcd7;
  local_a = FUN_1140_2553();
  uVar1 = (ulong)local_a >> 0x10;
  local_6 = (undefined2)local_a;
  uStack_16 = 0x1140;
  uStack_18 = 0xca2;
  uStack_1c = DAT_1160_1858;
  DAT_1160_1858 = &uStack_1c;
  puStack_1a = &stack0xfffe;
  FUN_1070_1134(local_a,0);
  FUN_1070_16bc(local_a,param_1);
  FUN_1138_1ed5(local_a,0xfff0,0xffff);
  FUN_1140_3a14(local_a,2);
  uVar2 = (undefined2)local_a;
  FUN_1140_5d45(local_a);
  DAT_1160_1858 = (undefined2 *)uVar2;
  puStack_1a = (undefined *)0x1140;
  uStack_1c = 0xd45;
  FUN_1140_5f1d(local_6,(int)uVar1);
  return;
}



/* ---- FUN_1070_0d57 @ 1070:0d57  (989 octets) ---- */

/* WARNING: Removing unreachable block (ram,0x10700ef0) */
/* WARNING: Removing unreachable block (ram,0x10700ff7) */

void __stdcall16far FUN_1070_0d57(char param_1,int param_2)

{
  undefined4 *puVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  long lVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined2 uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined2 unaff_CS;
  undefined2 uVar12;
  char *pcVar13;
  char *pcVar14;
  undefined2 uVar15;
  undefined2 uStack_2e;
  undefined *puStack_2c;
  undefined2 uStack_2a;
  undefined2 uStack_28;
  undefined2 uStack_26;
  undefined2 uStack_24;
  undefined2 uStack_22;
  undefined2 uStack_20;
  undefined2 uStack_1e;
  int local_1c;
  undefined4 local_1a;
  int local_16;
  undefined4 local_14;
  int local_10;
  int local_e;
  int local_c;
  int local_a;
  char local_7;
  int local_6;
  undefined2 uVar16;
  
  _local_6 = CONCAT22(unaff_CS,0xd62);
  uVar6 = FUN_1158_0444();
  local_7 = '\0';
  if (0 < param_2) {
    if (param_1 == '\0') {
      uVar6 = uVar6 & 0xff00;
      if (*(char *)((int)DAT_1160_2004 + 0x1b4) == '\0') {
        uVar6 = uVar6 + 1;
      }
      local_7 = (char)uVar6;
    }
    else {
      local_7 = '\x01';
    }
  }
  if (local_7 == '\0') {
    return;
  }
  uStack_1e = DAT_1160_2c2a._2_2_;
  uStack_20 = (undefined2)DAT_1160_2c2a;
  uStack_22 = CONCAT11((char)(uVar6 >> 8),1);
  uStack_24 = 0x1070;
  uStack_26 = 0x22;
  uStack_28 = 0x1158;
  uStack_2a = 0xdae;
  _local_6 = FUN_1140_2553();
  uStack_28 = 0x1140;
  uStack_2a = 0xd51;
  uStack_2e = DAT_1160_1858;
  DAT_1160_1858 = &uStack_2e;
  puStack_2c = &stack0xfffe;
  local_14 = _local_6;
  FUN_1070_1134(_local_6,1);
  FUN_1070_16bc(local_14,param_2);
  FUN_1138_1ed5(local_14,0xffff,0xff);
  FUN_1140_36b2(local_14,0,0);
  FUN_1140_3a14(local_14,2);
  FUN_1140_34e5(local_14,1);
  uVar7 = FUN_10f0_2a9a((int)DAT_1160_2c54,(int)((ulong)DAT_1160_2c54 >> 0x10));
  FUN_1138_17bf(local_14,uVar7);
  FUN_10f8_754c((int)*(undefined4 *)((int)local_14 + 0x350),
                (int)((ulong)*(undefined4 *)((int)local_14 + 0x350) >> 0x10),0);
  FUN_10f8_754c((int)*(undefined4 *)((int)local_14 + 0x330),
                (int)((ulong)*(undefined4 *)((int)local_14 + 0x330) >> 0x10),0);
  uVar7 = FUN_1138_62b9(local_14);
  SHOWWINDOW(0x1138,4);
  FUN_1140_3fd0(local_14,*(undefined2 *)((int)local_14 + 0x17c),
                *(undefined2 *)((int)local_14 + 0x17e));
  if (param_1 == '\0') {
    pcVar13 = (char *)0x1140;
    FUN_1140_7303((int)DAT_1160_2c2a,(int)((ulong)DAT_1160_2c2a >> 0x10));
    iVar8 = DAT_1160_014e + *(int *)((int)local_14 + 0x3c9);
    if (SCARRY2(DAT_1160_014e,*(int *)((int)local_14 + 0x3c9))) {
      pcVar13 = (char *)0x1158;
      iVar8 = FUN_1158_043e(0x1140);
    }
    local_16 = iVar8 + -1;
    pcVar14 = pcVar13;
    uVar5 = local_14;
    if (SBORROW2(iVar8,1)) {
      pcVar14 = (char *)0x1158;
      local_16 = FUN_1158_043e(pcVar13);
      uVar5 = local_14;
    }
    local_14._2_2_ = (undefined2)((ulong)uVar5 >> 0x10);
    local_14._0_2_ = (int)uVar5;
    local_16 = local_16 / *(int *)((int)local_14 + 0x3c9);
    if (0 < local_16) {
      local_a = 1;
      local_14 = uVar5;
      while( true ) {
        iVar8 = local_a + -1;
        pcVar13 = pcVar14;
        uVar5 = local_14;
        if (SBORROW2(local_a,1)) {
          pcVar13 = (char *)0x1158;
          iVar8 = FUN_1158_043e(pcVar14);
          uVar5 = local_14;
        }
        local_14._2_2_ = (undefined2)((ulong)uVar5 >> 0x10);
        local_14._0_2_ = (int)uVar5;
        lVar4 = (long)iVar8 * (long)*(int *)((int)local_14 + 0x3c9);
        iVar8 = (int)lVar4;
        pcVar14 = pcVar13;
        local_14 = uVar5;
        if (iVar8 != lVar4) {
          pcVar14 = (char *)0x1158;
          iVar8 = FUN_1158_043e(pcVar13);
        }
        iVar9 = iVar8 + 1;
        uVar5 = local_14;
        if (SCARRY2(iVar8,1)) {
          iVar9 = FUN_1158_043e(pcVar14);
          uVar5 = local_14;
        }
        local_14._2_2_ = (undefined2)((ulong)uVar5 >> 0x10);
        local_14._0_2_ = (int)uVar5;
        puVar1 = (undefined4 *)((int)local_14 + 0x350);
        local_14 = uVar5;
        FUN_10f8_7345((int)*puVar1,(int)((ulong)*puVar1 >> 0x10),iVar9,iVar9 >> 0xf);
        local_1a._2_2_ = (undefined2)((ulong)*(undefined4 *)((int)local_14 + 0x350) >> 0x10);
        local_1a._0_2_ = (int)*(undefined4 *)((int)local_14 + 0x350);
        local_e = *(int *)((int)local_14 + 0x3c9) / 2;
        if (DAT_1160_014e < local_e) {
          local_e = DAT_1160_014e;
        }
        iVar8 = (int)((long)local_e * 3);
        if ((long)iVar8 != (long)local_e * 3) {
          iVar8 = FUN_1158_043e(0x10f8);
        }
        uVar12 = 0x10f8;
        iVar10 = FUN_10f8_6e30((int)local_1a,local_1a._2_2_,0,0);
        uVar5 = *(undefined4 *)((int)_local_6 + 0x338);
        iVar9 = *(int *)((int)uVar5 + 0x22);
        iVar11 = iVar9 - iVar10;
        if (SBORROW2(iVar9,iVar10)) {
          uVar12 = 0x1158;
          iVar11 = FUN_1158_043e(0x10f8);
        }
        iVar9 = iVar11 - iVar8;
        uVar15 = uVar12;
        if (SBORROW2(iVar11,iVar8)) {
          uVar15 = 0x1158;
          iVar9 = FUN_1158_043e(uVar12);
        }
        local_c = iVar9 / local_e;
        if (SBORROW2(*(int *)((int)local_1a + 0xe8),(uint)(*(int *)((int)local_1a + 0xe6) == 0)) !=
            false) {
          FUN_1158_043e(uVar15);
        }
        uVar12 = 0x1158;
        local_1c = FUN_1158_0416();
        if (0 < local_1c) {
          local_10 = 1;
          while( true ) {
            uVar12 = 0x10f8;
            FUN_10f8_70c9((int)local_1a,local_1a._2_2_,local_c,local_10,local_10 >> 0xf);
            if (local_10 == local_1c) break;
            local_10 = local_10 + 1;
          }
        }
        iVar8 = local_a + -1;
        uVar15 = uVar12;
        uVar5 = local_14;
        if (SBORROW2(local_a,1)) {
          uVar15 = 0x1158;
          iVar8 = FUN_1158_043e(uVar12);
          uVar5 = local_14;
        }
        local_14._2_2_ = (undefined2)((ulong)uVar5 >> 0x10);
        local_14._0_2_ = (int)uVar5;
        lVar4 = (long)iVar8 * (long)*(int *)((int)local_14 + 0x3c9);
        iVar8 = (int)lVar4;
        uVar12 = uVar15;
        local_14 = uVar5;
        if (iVar8 != lVar4) {
          uVar12 = 0x1158;
          iVar8 = FUN_1158_043e(uVar15);
        }
        iVar9 = iVar8 + 1;
        uVar15 = uVar12;
        if (SCARRY2(iVar8,1)) {
          uVar15 = 0x1158;
          iVar9 = FUN_1158_043e(uVar12);
        }
        iVar8 = iVar9 + 4;
        uVar5 = local_14;
        if (SCARRY2(iVar9,4)) {
          iVar8 = FUN_1158_043e(uVar15);
          uVar5 = local_14;
        }
        local_14._2_2_ = (undefined2)((ulong)uVar5 >> 0x10);
        local_14._0_2_ = (int)uVar5;
        puVar1 = (undefined4 *)((int)local_14 + 0x330);
        local_14 = uVar5;
        FUN_10f8_7345((int)*puVar1,(int)((ulong)*puVar1 >> 0x10),iVar8,iVar8 >> 0xf);
        local_1a = *(undefined4 *)((int)local_14 + 0x330);
        local_e = *(int *)((int)local_14 + 0x3c9) / 2;
        if (DAT_1160_014e < local_e) {
          local_e = DAT_1160_014e;
        }
        iVar8 = (int)((long)local_e * 3);
        if ((long)iVar8 != (long)local_e * 3) {
          iVar8 = FUN_1158_043e(0x10f8);
        }
        uVar12 = 0x10f8;
        iVar10 = FUN_10f8_6e30((int)local_1a,(int)((ulong)local_1a >> 0x10),0,0);
        uVar5 = *(undefined4 *)((int)_local_6 + 0x338);
        iVar9 = *(int *)((int)uVar5 + 0x22);
        iVar11 = iVar9 - iVar10;
        if (SBORROW2(iVar9,iVar10)) {
          uVar12 = 0x1158;
          iVar11 = FUN_1158_043e(0x10f8);
        }
        iVar9 = iVar11 - iVar8;
        uVar15 = uVar12;
        if (SBORROW2(iVar11,iVar8)) {
          uVar15 = 0x1158;
          iVar9 = FUN_1158_043e(uVar12);
        }
        local_c = iVar9 / local_e;
        uVar12 = (undefined2)((ulong)local_1a >> 0x10);
        if (SBORROW2(*(int *)((int)local_1a + 0xe8),(uint)(*(int *)((int)local_1a + 0xe6) == 0)) !=
            false) {
          FUN_1158_043e(uVar15);
        }
        local_1c = FUN_1158_0416();
        if (0 < local_1c) {
          local_10 = 1;
          while( true ) {
            FUN_10f8_70c9((int)local_1a,(int)((ulong)local_1a >> 0x10),local_c,local_10,
                          local_10 >> 0xf);
            if (local_10 == local_1c) break;
            local_10 = local_10 + 1;
          }
        }
        uVar5 = _local_6;
        uVar16 = (undefined2)((ulong)_local_6 >> 0x10);
        uVar12 = uVar16;
        local_6 = (int)uVar5;
        puVar2 = (undefined2 *)(local_6 + 0x17e);
        puVar3 = (undefined2 *)(local_6 + 0x17c);
        pcVar14 = (char *)s_windows_1160_100f + 1;
        iVar8 = local_6;
        _local_6 = uVar5;
        FUN_1010_311a((int)DAT_1160_2004,(int)((ulong)DAT_1160_2004 >> 0x10),*puVar3,*puVar2,iVar8,
                      uVar12);
        uVar5 = local_14;
        if (local_a == local_16) break;
        local_a = local_a + 1;
      }
    }
    uVar12 = 0x1140;
    local_14 = uVar5;
    FUN_1140_7303((int)DAT_1160_2c2a,(int)((ulong)DAT_1160_2c2a >> 0x10));
    DAT_1160_1858 = (undefined2 *)uVar7;
  }
  else {
    uVar12 = 0x1070;
    FUN_1070_3053(local_14);
    DAT_1160_1858 = (undefined2 *)uVar7;
  }
  puStack_2c = (undefined *)0x1130;
  uStack_2e = (undefined2)((ulong)_local_6 >> 0x10);
  uStack_2a = uVar12;
  FUN_1140_5f1d((int)_local_6);
  return;
}



/* ---- FUN_1070_1134 @ 1070:1134  (244 octets) ---- */

void __stdcall16far FUN_1070_1134(undefined4 param_1,undefined param_2)

{
  byte extraout_AH;
  int iVar1;
  undefined extraout_AH_00;
  undefined extraout_AH_01;
  undefined extraout_AH_02;
  int iVar2;
  undefined2 uVar3;
  
  FUN_1158_0444();
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  iVar2 = (int)param_1;
  *(undefined *)(iVar2 + 0x3c6) = param_2;
  iVar1 = (uint)extraout_AH * 0x100;
  if (4 < DAT_1160_014e) {
    iVar1 = iVar1 + 1;
  }
  FUN_1138_1c77((int)*(undefined4 *)(iVar2 + 0x318),
                (int)((ulong)*(undefined4 *)(iVar2 + 0x318) >> 0x10),
                CONCAT11((char)((uint)iVar1 >> 8),(byte)iVar1 & *(byte *)(iVar2 + 0x3c6)));
  FUN_1140_1e62((int)*(undefined4 *)(iVar2 + 0xd8),
                (int)((ulong)*(undefined4 *)(iVar2 + 0xd8) >> 0x10),
                CONCAT11(extraout_AH_00,*(undefined *)(iVar2 + 0x3c6)));
  FUN_1140_1e62((int)*(undefined4 *)(iVar2 + 0xdc),
                (int)((ulong)*(undefined4 *)(iVar2 + 0xdc) >> 0x10),
                CONCAT11(extraout_AH_01,*(undefined *)(iVar2 + 0x3c6)));
  FUN_1140_1cd0((int)*(undefined4 *)(iVar2 + 0xd8),
                (int)((ulong)*(undefined4 *)(iVar2 + 0xd8) >> 0x10),0);
  FUN_1140_1cd0((int)*(undefined4 *)(iVar2 + 0xdc),
                (int)((ulong)*(undefined4 *)(iVar2 + 0xdc) >> 0x10),0);
  FUN_1138_1c77((int)*(undefined4 *)(iVar2 + 0x294),
                (int)((ulong)*(undefined4 *)(iVar2 + 0x294) >> 0x10),
                CONCAT11(extraout_AH_02,*(undefined *)(iVar2 + 0x3c6)));
  if (*(char *)(iVar2 + 0x3c6) == '\0') {
    *(undefined2 *)(iVar2 + 0x3c9) = 8;
    *(undefined2 *)(iVar2 + 0x3cb) = 0xf;
    FUN_1138_1672((int)*(undefined4 *)(iVar2 + 0x17c),
                  (int)((ulong)*(undefined4 *)(iVar2 + 0x17c) >> 0x10),5);
    FUN_1138_1672((int)*(undefined4 *)(iVar2 + 0x334),
                  (int)((ulong)*(undefined4 *)(iVar2 + 0x334) >> 0x10),5);
  }
  else {
    *(undefined2 *)(iVar2 + 0x3c9) = 8;
    *(undefined2 *)(iVar2 + 0x3cb) = 0x14;
  }
  FUN_1070_1b56(iVar2,uVar3,iVar2 + 0x350,uVar3);
  return;
}



/* ---- FUN_1070_1228 @ 1070:1228  (29 octets) ---- */

void __stdcall16far FUN_1070_1228(undefined4 param_1)

{
  FUN_1158_0444();
  FUN_1070_0d57(0,*(undefined2 *)((int)param_1 + 0x3c7));
  return;
}



/* ---- FUN_1070_12f2 @ 1070:12f2  (21 octets) ---- */

void __stdcall16far FUN_1070_12f2(undefined2 param_1_00,undefined2 param_2,undefined *param_1)

{
  FUN_1158_0444();
  *param_1 = 1;
  return;
}



/* ---- FUN_1070_1307 @ 1070:1307  (86 octets) ---- */

void __stdcall16far FUN_1070_1307(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  
  FUN_1158_0444();
  uVar5 = (undefined2)((ulong)param_1 >> 0x10);
  iVar3 = (int)param_1;
  uVar6 = (undefined2)((ulong)*(undefined4 *)(iVar3 + 0x350) >> 0x10);
  iVar4 = (int)*(undefined4 *)(iVar3 + 0x350);
  iVar1 = *(int *)(iVar4 + 0x22);
  iVar2 = iVar1 + 1;
  if (SCARRY2(iVar1,1)) {
    iVar2 = FUN_1158_043e(0x1158);
  }
  FUN_1138_17bf(iVar4,uVar6,iVar2);
  FUN_1070_1659(iVar3,uVar5,iVar3,uVar5);
  FUN_1140_63a9((int)DAT_1160_2c2e,(int)((ulong)DAT_1160_2c2e >> 0x10),0xfffe);
  return;
}



/* ---- FUN_1070_1620 @ 1070:1620  (57 octets) ---- */

void __stdcall16far FUN_1070_1620(undefined4 param_1)

{
  byte extraout_AH;
  int iVar1;
  int iVar2;
  undefined2 uVar3;
  
  FUN_1158_0444();
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  iVar2 = (int)param_1;
  iVar1 = (uint)extraout_AH * 0x100;
  if (*(char *)(iVar2 + 0xee) == '\x02') {
    iVar1 = iVar1 + 1;
  }
  FUN_1130_1275((int)*(undefined4 *)(iVar2 + 0x19c),
                (int)((ulong)*(undefined4 *)(iVar2 + 0x19c) >> 0x10),iVar1);
  FUN_1070_1659(iVar2,uVar3,iVar2,uVar3);
  return;
}



/* ---- FUN_1070_1659 @ 1070:1659  (30 octets) ---- */

void __stdcall16far FUN_1070_1659(undefined4 param_1)

{
  FUN_1158_0444();
  FUN_1070_1677((undefined2)param_1,param_1._2_2_,(undefined2)param_1,param_1._2_2_);
  return;
}



/* ---- FUN_1070_1677 @ 1070:1677  (59 octets) ---- */

void __stdcall16far FUN_1070_1677(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  
  FUN_1158_0444();
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  uVar4 = (undefined2)((ulong)*(undefined4 *)(iVar1 + 0x334) >> 0x10);
  iVar2 = (int)*(undefined4 *)(iVar1 + 0x334);
  FUN_10b0_1afd((int)*(undefined4 *)(iVar1 + 0x350),
                (int)((ulong)*(undefined4 *)(iVar1 + 0x350) >> 0x10),*(undefined2 *)(iVar2 + 0x24),
                *(undefined2 *)(iVar2 + 0x22));
  FUN_1070_17e4(iVar1,uVar3);
  return;
}



/* ---- FUN_1070_16bc @ 1070:16bc  (288 octets) ---- */

void __stdcall16far FUN_1070_16bc(undefined4 param_1,undefined2 param_2)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  undefined2 unaff_SS;
  undefined4 uVar7;
  undefined *puVar8;
  undefined local_204 [252];
  undefined4 local_108;
  undefined local_104 [254];
  undefined2 uStack_6;
  byte bVar9;
  
  uStack_6 = 0x16c7;
  FUN_1158_0444();
  uVar5 = (undefined2)((ulong)param_1 >> 0x10);
  iVar4 = (int)param_1;
  *(undefined2 *)(iVar4 + 0x3c7) = param_2;
  FUN_1070_21d6(iVar4,uVar5,iVar4 + 0x350,uVar5);
  FUN_1070_17e4(iVar4,uVar5);
  FUN_1070_1a4f(iVar4,uVar5);
  FUN_1158_17e7(0xff,local_104,unaff_SS,iVar4 + 0x3cd,uVar5);
  FUN_1158_1878(local_104,unaff_SS,0x16b2,0x1158);
  cVar1 = FUN_1158_0416();
  if (cVar1 != '\0') {
    FUN_1158_1975(1,cVar1,local_104,unaff_SS);
    puVar8 = local_204;
    uVar6 = unaff_SS;
    FUN_1150_08a9(*(int *)(iVar4 + 0x3c7),*(int *)(iVar4 + 0x3c7) >> 0xf);
    FUN_1158_1916(cVar1,0xff,local_104,unaff_SS,puVar8,uVar6);
  }
  uVar6 = 0x1138;
  FUN_1138_1d8c(iVar4,uVar5,local_104,unaff_SS);
  local_108 = *(undefined4 *)(iVar4 + 0x35c);
  bVar9 = 0;
  while( true ) {
    uVar2 = bVar9 + 1;
    if (SCARRY2((uint)bVar9,1)) {
      uVar2 = FUN_1158_043e(uVar6);
    }
    uVar3 = uVar2 & 0xff00;
    if (uVar2 == *(uint *)(iVar4 + 0x3c7)) {
      uVar3 = uVar3 + 1;
    }
    uVar7 = FUN_1130_1353((int)local_108,(int)((ulong)local_108 >> 0x10),bVar9);
    uVar6 = 0x1130;
    FUN_1130_1275(uVar7,uVar3);
    if (bVar9 == 0x13) break;
    bVar9 = bVar9 + 1;
  }
  return;
}



/* ---- FUN_1070_17e4 @ 1070:17e4  (611 octets) ---- */

void __stdcall16far FUN_1070_17e4(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  undefined2 unaff_SS;
  undefined *puVar8;
  undefined local_10a [254];
  int local_c;
  int local_a;
  undefined2 local_8;
  int local_6;
  
  local_6 = 0x17ef;
  FUN_1158_0444();
  uVar6 = (undefined2)((ulong)param_1 >> 0x10);
  iVar4 = (int)param_1;
  if (*(char *)((int)*(undefined4 *)(iVar4 + 0x318) + 0x29) != '\0') {
    FUN_1138_17bf((int)*(undefined4 *)(iVar4 + 0x318),
                  (int)((ulong)*(undefined4 *)(iVar4 + 0x318) >> 0x10),
                  *(undefined2 *)((int)*(undefined4 *)(iVar4 + 0x334) + 0x22));
    FUN_1138_17e1((int)*(undefined4 *)(iVar4 + 0x318),
                  (int)((ulong)*(undefined4 *)(iVar4 + 0x318) >> 0x10),
                  *(undefined2 *)((int)*(undefined4 *)(iVar4 + 0x334) + 0x24));
    FUN_1138_17bf((int)*(undefined4 *)(iVar4 + 0x31c),
                  (int)((ulong)*(undefined4 *)(iVar4 + 0x31c) >> 0x10),
                  *(undefined2 *)((int)*(undefined4 *)(iVar4 + 0x338) + 0x22));
    FUN_1138_17e1((int)*(undefined4 *)(iVar4 + 0x31c),
                  (int)((ulong)*(undefined4 *)(iVar4 + 0x31c) >> 0x10),
                  *(undefined2 *)((int)*(undefined4 *)(iVar4 + 0x338) + 0x24));
    local_8 = (undefined2)((ulong)*(undefined4 *)(iVar4 + 0x328) >> 0x10);
    local_a = (int)*(undefined4 *)(iVar4 + 0x328);
    puVar8 = local_10a;
    uVar7 = unaff_SS;
    FUN_1138_1d53((int)*(undefined4 *)(iVar4 + 0x34c),
                  (int)((ulong)*(undefined4 *)(iVar4 + 0x34c) >> 0x10));
    FUN_1138_1d8c(local_a,local_8,puVar8,uVar7);
    FUN_1138_17bf(local_a,local_8,*(undefined2 *)((int)*(undefined4 *)(iVar4 + 0x34c) + 0x22));
    local_8 = (undefined2)((ulong)*(undefined4 *)(iVar4 + 0x32c) >> 0x10);
    local_a = (int)*(undefined4 *)(iVar4 + 0x32c);
    puVar8 = local_10a;
    FUN_1138_1d53((int)*(undefined4 *)(iVar4 + 0x348),
                  (int)((ulong)*(undefined4 *)(iVar4 + 0x348) >> 0x10));
    FUN_1138_1d8c(local_a,local_8,puVar8,unaff_SS);
    FUN_1138_17bf(local_a,local_8,*(undefined2 *)((int)*(undefined4 *)(iVar4 + 0x348) + 0x22));
    local_8 = (undefined2)((ulong)*(undefined4 *)(iVar4 + 0x330) >> 0x10);
    local_a = (int)*(undefined4 *)(iVar4 + 0x330);
    uVar7 = (undefined2)((ulong)*(undefined4 *)(iVar4 + 0x350) >> 0x10);
    iVar5 = (int)*(undefined4 *)(iVar4 + 0x350);
    FUN_10f8_701b(local_a,local_8,*(undefined2 *)(iVar5 + 0xe6),*(undefined2 *)(iVar5 + 0xe8));
    uVar1 = *(undefined4 *)((int)*(undefined4 *)(iVar4 + 0x350) + 0xd8);
    uVar7 = (undefined2)((ulong)uVar1 >> 0x10);
    iVar5 = (int)uVar1;
    FUN_1128_2099((int)*(undefined4 *)(local_a + 0xd8),
                  (int)((ulong)*(undefined4 *)(local_a + 0xd8) >> 0x10),*(undefined2 *)(iVar5 + 7),
                  *(undefined2 *)(iVar5 + 9));
    if (SBORROW2(*(int *)(local_a + 0xe8),(uint)(*(int *)(local_a + 0xe6) == 0)) != false) {
      FUN_1158_043e(0x1128);
    }
    local_c = FUN_1158_0416();
    if (-1 < local_c) {
      iVar5 = 0;
      while( true ) {
        iVar2 = iVar5 >> 0xf;
        iVar3 = iVar5;
        uVar7 = FUN_10f8_6e30((int)*(undefined4 *)(iVar4 + 0x350),
                              (int)((ulong)*(undefined4 *)(iVar4 + 0x350) >> 0x10),iVar5,iVar2);
        FUN_10f8_70c9(local_a,local_8,uVar7,iVar3,iVar2);
        if (iVar5 == local_c) break;
        iVar5 = iVar5 + 1;
      }
    }
    FUN_1138_17bf(local_a,local_8,*(undefined2 *)((int)*(undefined4 *)(iVar4 + 0x350) + 0x22));
    if (SBORROW2(*(int *)(local_a + 0x10c),(uint)(*(int *)(local_a + 0x10a) == 0)) != false) {
      FUN_1158_043e(0x1138);
    }
    local_c = FUN_1158_0416();
    if (-1 < local_c) {
      local_6 = 0;
      while( true ) {
        iVar3 = local_6 >> 0xf;
        iVar5 = local_6;
        uVar7 = FUN_10f8_6e8b((int)*(undefined4 *)(iVar4 + 0x350),
                              (int)((ulong)*(undefined4 *)(iVar4 + 0x350) >> 0x10),local_6,iVar3);
        FUN_10f8_74a3(local_a,local_8,uVar7,iVar5,iVar3);
        if (local_6 == local_c) break;
        local_6 = local_6 + 1;
      }
    }
    FUN_1138_17e1(local_a,local_8,*(undefined2 *)((int)*(undefined4 *)(iVar4 + 0x350) + 0x24));
    FUN_10f8_7345(local_a,local_8,5,0);
  }
  return;
}



/* ---- FUN_1070_1a4f @ 1070:1a4f  (242 octets) ---- */

void __stdcall16far FUN_1070_1a4f(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined2 unaff_SS;
  undefined *puVar5;
  undefined2 uVar6;
  int iVar7;
  int iVar8;
  undefined local_10e [256];
  int local_e;
  int local_c;
  int local_a;
  undefined2 local_8;
  int local_6;
  
  local_6 = 0x1a5a;
  FUN_1158_0444();
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  if (*(char *)((int)*(undefined4 *)(iVar1 + 0x318) + 0x29) != '\0') {
    local_8 = (undefined2)((ulong)*(undefined4 *)(iVar1 + 0x330) >> 0x10);
    local_a = (int)*(undefined4 *)(iVar1 + 0x330);
    uVar4 = (undefined2)((ulong)*(undefined4 *)(iVar1 + 0x350) >> 0x10);
    iVar2 = (int)*(undefined4 *)(iVar1 + 0x350);
    FUN_10f8_701b(local_a,local_8,*(undefined2 *)(iVar2 + 0xe6),*(undefined2 *)(iVar2 + 0xe8));
    if (SBORROW2(*(int *)(local_a + 0xe8),(uint)(*(int *)(local_a + 0xe6) == 0)) != false) {
      FUN_1158_043e(0x10f8);
    }
    uVar4 = 0x1158;
    local_c = FUN_1158_0416();
    if (-1 < local_c) {
      iVar2 = 0;
      while( true ) {
        if (SBORROW2(*(int *)(local_a + 0x10c),(uint)(*(int *)(local_a + 0x10a) == 0)) != false) {
          FUN_1158_043e(uVar4);
        }
        uVar4 = 0x1158;
        local_e = FUN_1158_0416();
        if (-1 < local_e) {
          local_6 = 0;
          while( true ) {
            puVar5 = local_10e;
            uVar6 = unaff_SS;
            iVar7 = local_6;
            iVar8 = iVar2;
            FUN_10f8_9a68((int)*(undefined4 *)(iVar1 + 0x350),
                          (int)((ulong)*(undefined4 *)(iVar1 + 0x350) >> 0x10),local_6,iVar2);
            uVar4 = 0x10f8;
            FUN_10f8_9b08(local_a,local_8,puVar5,uVar6,iVar7,iVar8);
            if (local_6 == local_e) break;
            local_6 = local_6 + 1;
          }
        }
        if (iVar2 == local_c) break;
        iVar2 = iVar2 + 1;
      }
    }
  }
  return;
}



/* ---- FUN_1070_1b56 @ 1070:1b56  (701 octets) ---- */

/* WARNING: Removing unreachable block (ram,0x10701c5c) */

void __stdcall16far FUN_1070_1b56(undefined4 param_1,undefined4 *param_2)

{
  undefined2 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  byte extraout_AH;
  int iVar5;
  int iVar6;
  undefined2 uVar7;
  undefined2 uVar8;
  undefined2 uVar9;
  undefined2 unaff_SS;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined2 uVar13;
  undefined2 uVar14;
  undefined2 uVar15;
  undefined local_310 [256];
  undefined local_210 [256];
  undefined local_110 [254];
  int local_12;
  int local_10;
  int local_e;
  undefined2 local_c;
  int local_a;
  int local_8;
  int local_6;
  
  local_6 = 0x1b61;
  FUN_1158_0444();
  uVar7 = (undefined2)((ulong)param_1 >> 0x10);
  iVar6 = (int)param_1;
  FUN_1138_1d8c((int)*(undefined4 *)(iVar6 + 0x34c),
                (int)((ulong)*(undefined4 *)(iVar6 + 0x34c) >> 0x10),0x1dfa,0x1160);
  local_c = (undefined2)((ulong)*param_2 >> 0x10);
  local_e = (int)*param_2;
  iVar4 = *(int *)(local_e + 0xfe) + DAT_1160_014e;
  if (SCARRY2(*(int *)(local_e + 0xfe),DAT_1160_014e)) {
    iVar4 = FUN_1158_043e(0x1138);
  }
  FUN_10f8_701b(local_e,local_c,iVar4,iVar4 >> 0xf);
  iVar4 = (uint)extraout_AH * 0x100;
  if (*(char *)(iVar6 + 0x3c6) == '\0') {
    iVar4 = iVar4 + 1;
  }
  FUN_1138_1c77((int)*(undefined4 *)(local_e + 0x196),
                (int)((ulong)*(undefined4 *)(local_e + 0x196) >> 0x10),iVar4);
  if (SBORROW2(*(int *)(local_e + 0xe8),(uint)(*(int *)(local_e + 0xe6) == 0)) != false) {
    FUN_1158_043e(0x1138);
  }
  uVar8 = 0x1158;
  local_10 = FUN_1158_0416();
  if (-1 < local_10) {
    iVar4 = 0;
    while( true ) {
      if (SBORROW2(*(int *)(local_e + 0x10c),(uint)(*(int *)(local_e + 0x10a) == 0)) != false) {
        FUN_1158_043e(uVar8);
      }
      uVar8 = 0x1158;
      local_12 = FUN_1158_0416();
      if (-1 < local_12) {
        local_6 = 0;
        uVar9 = uVar8;
        while( true ) {
          uVar8 = 0x10f8;
          FUN_10f8_9b08(local_e,local_c,0x1b41,uVar9,local_6,iVar4);
          if (local_6 == local_12) break;
          local_6 = local_6 + 1;
          uVar9 = uVar8;
        }
      }
      if (iVar4 == local_10) break;
      iVar4 = iVar4 + 1;
    }
  }
  local_8 = *(int *)(iVar6 + 0x3c9) + 1;
  if (SCARRY2(*(int *)(iVar6 + 0x3c9),1)) {
    local_8 = FUN_1158_043e(uVar8);
  }
  uVar8 = 0x10f8;
  iVar4 = FUN_10f8_6e30(local_e,local_c,0,0);
  local_a = *(int *)(iVar6 + 0x22) - iVar4;
  if (SBORROW2(*(int *)(iVar6 + 0x22),iVar4)) {
    uVar8 = 0x1158;
    local_a = FUN_1158_043e(0x10f8);
  }
  local_a = local_a / local_8;
  if (SBORROW2(*(int *)(local_e + 0xe8),(uint)(*(int *)(local_e + 0xe6) == 0)) != false) {
    FUN_1158_043e(uVar8);
  }
  uVar8 = 0x1158;
  local_10 = FUN_1158_0416();
  if (0 < local_10) {
    iVar4 = 1;
    while( true ) {
      uVar8 = 0x10f8;
      FUN_10f8_70c9(local_e,local_c,local_a,iVar4,iVar4 >> 0xf);
      if (iVar4 == local_10) break;
      iVar4 = iVar4 + 1;
    }
  }
  if (SBORROW2(*(int *)(local_e + 0xe8),(uint)(*(int *)(local_e + 0xe6) == 0)) != false) {
    FUN_1158_043e(uVar8);
  }
  uVar8 = 0x1158;
  local_10 = FUN_1158_0416();
  if (0 < local_10) {
    iVar4 = 1;
    while( true ) {
      uVar15 = 0;
      puVar12 = local_210;
      uVar9 = unaff_SS;
      iVar5 = iVar4;
      FUN_1158_17cd(0x1b4d,uVar8);
      puVar11 = local_110;
      uVar2 = *(undefined4 *)((int)*(undefined4 *)(iVar6 + 0x354) + 0xd8);
      uVar8 = unaff_SS;
      FUN_1148_1519((int)uVar2,(int)((ulong)uVar2 >> 0x10),0x1b49,0x1158);
      FUN_1158_184c(puVar11,uVar8);
      FUN_1158_184c(0x1b51,0x1158);
      puVar11 = local_310;
      uVar8 = unaff_SS;
      FUN_1150_08a9(iVar4,iVar4 >> 0xf);
      FUN_1158_184c(puVar11,uVar8);
      uVar8 = 0x10f8;
      FUN_10f8_9b08(local_e,local_c,puVar12,uVar9,uVar15,iVar5);
      if (iVar4 == local_10) break;
      iVar4 = iVar4 + 1;
    }
  }
  puVar3 = (undefined4 *)*(undefined4 *)((int)*(undefined4 *)(iVar6 + 0x354) + 0xd8);
  puVar1 = (undefined2 *)((int)*puVar3 + 0x10);
  iVar4 = (*(code *)*puVar1)(uVar8,(undefined4 *)puVar3,(int)((ulong)puVar3 >> 0x10));
  iVar5 = iVar4 + -1;
  uVar9 = uVar8;
  if (SBORROW2(iVar4,1)) {
    uVar9 = 0x1158;
    iVar5 = FUN_1158_043e(uVar8);
  }
  if (0 < iVar5) {
    local_6 = 1;
    local_10 = iVar5;
    while( true ) {
      uVar14 = 0;
      puVar12 = local_310;
      puVar11 = local_210;
      uVar15 = unaff_SS;
      uVar13 = unaff_SS;
      iVar4 = local_6;
      FUN_1158_17cd(0x1b53,uVar9);
      puVar10 = local_110;
      uVar8 = unaff_SS;
      FUN_1150_08a9(local_6,local_6 >> 0xf);
      FUN_1158_184c(puVar10,uVar8);
      uVar2 = *(undefined4 *)((int)*(undefined4 *)(iVar6 + 0x354) + 0xd8);
      FUN_1148_1519((int)uVar2,(int)((ulong)uVar2 >> 0x10),puVar11,uVar15);
      uVar9 = 0x10f8;
      FUN_10f8_9b08(local_e,local_c,puVar12,uVar13,iVar4,uVar14);
      if (local_6 == local_10) break;
      local_6 = local_6 + 1;
    }
  }
  return;
}



/* ---- FUN_1070_208a @ 1070:208a  (172 octets) ---- */

void __stdcall16far FUN_1070_208a(int param_1,undefined4 param_2,undefined4 param_3,int *param_4)

{
  undefined2 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined2 unaff_CS;
  undefined2 unaff_SS;
  undefined4 *puVar6;
  undefined2 uVar7;
  undefined *puVar8;
  undefined2 uVar9;
  undefined *puVar10;
  undefined2 uVar11;
  undefined local_218 [256];
  undefined local_118 [256];
  undefined *local_18;
  undefined local_10 [10];
  undefined2 local_6;
  
  _local_6 = CONCAT22(unaff_CS,0x2095);
  FUN_1158_0444();
  uVar2 = *(undefined4 *)*(undefined4 *)(param_1 + 10);
  local_6 = (undefined2)uVar2;
  puVar10 = local_218;
  uVar11 = unaff_SS;
  FUN_1158_17cd(0x2086,0x1158);
  puVar8 = local_118;
  uVar7 = *(undefined2 *)((int)*(undefined4 *)(param_1 + 6) + 0x3cb);
  uVar5 = (undefined2)((ulong)param_3 >> 0x10);
  uVar4 = (undefined2)param_3;
  uVar3 = *(undefined4 *)((int)*(undefined4 *)(param_1 + 6) + 0x1bc);
  uVar9 = unaff_SS;
  puVar6 = (undefined4 *)
           FUN_10d8_3b9b((int)uVar3,(int)((ulong)uVar3 >> 0x10),(int)param_2,
                         (int)((ulong)param_2 >> 0x10));
  puVar1 = (undefined2 *)((int)*puVar6 + 0x40);
  (*(code *)*puVar1)(0x10d8,puVar6,uVar4,uVar5,uVar7,puVar8);
  local_18 = local_10;
  FUN_1080_3093(0,&local_18,unaff_SS,puVar6,uVar4);
  FUN_1158_184c(uVar5,uVar7);
  FUN_10f8_9b08(local_6,(int)((ulong)uVar2 >> 0x10),puVar8,uVar9,puVar10,uVar11);
  *param_4 = *param_4 + 1;
  return;
}



/* ---- FUN_1070_21d6 @ 1070:21d6  (2332 octets) ---- */

void __stdcall16far FUN_1070_21d6(undefined4 param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  char *pcVar8;
  undefined2 unaff_SS;
  undefined *puVar9;
  undefined *puVar10;
  undefined2 uVar11;
  undefined2 uVar12;
  undefined2 uVar13;
  undefined local_306 [256];
  undefined local_206 [256];
  undefined local_106 [222];
  int local_28;
  int local_26;
  undefined local_24;
  int local_20;
  uint local_1e;
  undefined local_1c;
  int local_1a;
  int local_18;
  undefined2 local_16;
  undefined local_14;
  int local_12;
  undefined4 local_10;
  undefined4 local_a;
  undefined2 local_6;
  int iVar14;
  
  local_6 = 0x21e1;
  FUN_1158_0444();
  uVar6 = (undefined2)((ulong)param_1 >> 0x10);
  iVar5 = (int)param_1;
  local_a._2_2_ = (int)((ulong)*(undefined4 *)(iVar5 + 0x1d8) >> 0x10);
  local_a._0_2_ = (undefined2)*(undefined4 *)(iVar5 + 0x1d8);
  FUN_10d8_31d2((undefined2)local_a,local_a._2_2_);
  FUN_10e0_2ffb((undefined2)local_a,local_a._2_2_,1);
  FUN_10e0_2ed2((undefined2)local_a,local_a._2_2_,0);
  FUN_10d8_31bf((undefined2)local_a,local_a._2_2_);
  local_a._2_2_ = (int)((ulong)*(undefined4 *)(iVar5 + 0x1dc) >> 0x10);
  local_a._0_2_ = (undefined2)*(undefined4 *)(iVar5 + 0x1dc);
  FUN_10d8_31d2((undefined2)local_a,local_a._2_2_);
  FUN_10e0_2ffb((undefined2)local_a,local_a._2_2_,1);
  FUN_10e0_2ed2((undefined2)local_a,local_a._2_2_,0);
  FUN_10d8_31bf((undefined2)local_a,local_a._2_2_);
  local_a._2_2_ = (int)((ulong)*(undefined4 *)(iVar5 + 0x1e0) >> 0x10);
  local_a._0_2_ = (undefined2)*(undefined4 *)(iVar5 + 0x1e0);
  FUN_10d8_31d2((undefined2)local_a,local_a._2_2_);
  FUN_10e0_2ffb((undefined2)local_a,local_a._2_2_,1);
  FUN_10e0_2ed2((undefined2)local_a,local_a._2_2_,0);
  FUN_10d8_31bf((undefined2)local_a,local_a._2_2_);
  local_a._2_2_ = (int)((ulong)*(undefined4 *)(iVar5 + 0x1cc) >> 0x10);
  local_a._0_2_ = (undefined2)*(undefined4 *)(iVar5 + 0x1cc);
  FUN_10d8_31d2((undefined2)local_a,local_a._2_2_);
  FUN_10e0_2ffb((undefined2)local_a,local_a._2_2_,1);
  FUN_10e0_2ed2((undefined2)local_a,local_a._2_2_,0);
  FUN_10d8_31bf((undefined2)local_a,local_a._2_2_);
  local_a._2_2_ = (int)((ulong)*(undefined4 *)(iVar5 + 0x1c4) >> 0x10);
  local_a._0_2_ = (undefined2)*(undefined4 *)(iVar5 + 0x1c4);
  FUN_10d8_31d2((undefined2)local_a,local_a._2_2_);
  FUN_10e0_2ffb((undefined2)local_a,local_a._2_2_,1);
  FUN_10e0_2ed2((undefined2)local_a,local_a._2_2_,0);
  FUN_10d8_31bf((undefined2)local_a,local_a._2_2_);
  local_a._2_2_ = (int)((ulong)*(undefined4 *)(iVar5 + 0x1c8) >> 0x10);
  local_a._0_2_ = (undefined2)*(undefined4 *)(iVar5 + 0x1c8);
  FUN_10d8_31d2((undefined2)local_a,local_a._2_2_);
  FUN_10e0_2ffb((undefined2)local_a,local_a._2_2_,1);
  FUN_10e0_2ed2((undefined2)local_a,local_a._2_2_,0);
  FUN_10d8_31bf((undefined2)local_a,local_a._2_2_);
  local_a._2_2_ = (int)((ulong)*(undefined4 *)(iVar5 + 0x1f0) >> 0x10);
  local_a._0_2_ = (undefined2)*(undefined4 *)(iVar5 + 0x1f0);
  FUN_10d8_31d2((undefined2)local_a,local_a._2_2_);
  FUN_10e0_2ffb((undefined2)local_a,local_a._2_2_,1);
  FUN_10e0_2ed2((undefined2)local_a,local_a._2_2_,0);
  FUN_10d8_31bf((undefined2)local_a,local_a._2_2_);
  local_a._2_2_ = (int)((ulong)*(undefined4 *)(iVar5 + 0x1e4) >> 0x10);
  local_a._0_2_ = (undefined2)*(undefined4 *)(iVar5 + 0x1e4);
  FUN_10d8_31d2((undefined2)local_a,local_a._2_2_);
  FUN_10e0_2ffb((undefined2)local_a,local_a._2_2_,1);
  FUN_10e0_2ed2((undefined2)local_a,local_a._2_2_,0);
  FUN_10d8_31bf((undefined2)local_a,local_a._2_2_);
  local_a._2_2_ = (int)((ulong)*(undefined4 *)(iVar5 + 0x1e8) >> 0x10);
  local_a._0_2_ = (undefined2)*(undefined4 *)(iVar5 + 0x1e8);
  FUN_10d8_31d2((undefined2)local_a,local_a._2_2_);
  FUN_10e0_2ffb((undefined2)local_a,local_a._2_2_,1);
  FUN_10e0_2ed2((undefined2)local_a,local_a._2_2_,0);
  FUN_10d8_31bf((undefined2)local_a,local_a._2_2_);
  local_a._2_2_ = (int)((ulong)*(undefined4 *)(iVar5 + 0x1d0) >> 0x10);
  local_a._0_2_ = (undefined2)*(undefined4 *)(iVar5 + 0x1d0);
  FUN_10d8_31d2((undefined2)local_a,local_a._2_2_);
  FUN_10e0_2ffb((undefined2)local_a,local_a._2_2_,1);
  FUN_10e0_2ed2((undefined2)local_a,local_a._2_2_,0);
  FUN_10d8_31bf((undefined2)local_a,local_a._2_2_);
  local_a._2_2_ = (int)((ulong)*(undefined4 *)(iVar5 + 0x1d4) >> 0x10);
  local_a._0_2_ = (undefined2)*(undefined4 *)(iVar5 + 0x1d4);
  FUN_10d8_31d2((undefined2)local_a,local_a._2_2_);
  FUN_10e0_2ffb((undefined2)local_a,local_a._2_2_,1);
  FUN_10e0_2ed2((undefined2)local_a,local_a._2_2_,0);
  FUN_10d8_31bf((undefined2)local_a,local_a._2_2_);
  local_a = *(undefined4 *)(iVar5 + 0x1d8);
  local_12 = *(int *)(iVar5 + 0x3c7);
  local_10._0_3_ = (uint3)(uint)(local_12 >> 0xf);
  cVar2 = FUN_10e0_2895((int)local_a,(int)((ulong)local_a >> 0x10),0,&local_12,unaff_SS);
  if (cVar2 == '\0') {
    FUN_1070_0c77(iVar5,uVar6);
  }
  local_a = *(undefined4 *)(iVar5 + 0x1dc);
  local_1a = *(int *)(iVar5 + 0x3c7);
  local_18 = local_1a >> 0xf;
  local_16 = (uint)local_16._1_1_ << 8;
  local_12 = 1;
  local_10 = local_10 & 0xff000000;
  cVar2 = FUN_10e0_2895((int)local_a,(int)((ulong)local_a >> 0x10),1,&local_1a,unaff_SS);
  if (cVar2 == '\0') {
    FUN_1070_0c77(iVar5,uVar6);
  }
  local_a = *(undefined4 *)(iVar5 + 0x1e0);
  local_1a = *(int *)(iVar5 + 0x3c7);
  local_18 = local_1a >> 0xf;
  local_16 = local_16 & 0xff00;
  local_12 = 2;
  local_10 = local_10 & 0xff000000;
  cVar2 = FUN_10e0_2895((int)local_a,(int)((ulong)local_a >> 0x10),1,&local_1a,unaff_SS);
  if (cVar2 == '\0') {
    FUN_1070_0c77(iVar5,uVar6);
  }
  local_a._2_2_ = (int)((ulong)*(undefined4 *)(iVar5 + 0x1bc) >> 0x10);
  local_a._0_2_ = (undefined2)*(undefined4 *)(iVar5 + 0x1bc);
  FUN_10d8_31d2((undefined2)local_a,local_a._2_2_);
  FUN_10e0_2ffb((undefined2)local_a,local_a._2_2_,1);
  FUN_10e0_2ed2((undefined2)local_a,local_a._2_2_,0);
  FUN_10d8_31bf((undefined2)local_a,local_a._2_2_);
  uVar13 = 0;
  uVar12 = 0;
  puVar10 = local_206;
  uVar11 = unaff_SS;
  FUN_1158_17cd(0x213a,0x10d8);
  puVar9 = local_106;
  uVar1 = *(undefined4 *)((int)*(undefined4 *)(iVar5 + 0x354) + 0xd8);
  uVar7 = unaff_SS;
  FUN_1148_1519((int)uVar1,(int)((ulong)uVar1 >> 0x10),0x2136,0x1158);
  FUN_1158_184c(puVar9,uVar7);
  FUN_1158_184c(0x213e,0x1158);
  puVar9 = local_306;
  uVar7 = unaff_SS;
  FUN_1150_08a9(*(int *)(iVar5 + 0x3c7),*(int *)(iVar5 + 0x3c7) >> 0xf);
  FUN_1158_184c(puVar9,uVar7);
  uVar7 = 0x10f8;
  FUN_10f8_9b08((int)*param_2,(int)((ulong)*param_2 >> 0x10),puVar10,uVar11,uVar12,uVar13);
  local_a = CONCAT22(DAT_1160_014e,(undefined2)local_a);
  if (0 < DAT_1160_014e) {
    iVar14 = 1;
    while( true ) {
      local_10._2_2_ = (undefined2)((ulong)*(undefined4 *)(iVar5 + 0x1cc) >> 0x10);
      local_10._0_2_ = (undefined2)*(undefined4 *)(iVar5 + 0x1cc);
      iVar3 = *(int *)(iVar5 + 0x3c7) + -1;
      if (SBORROW2(*(int *)(iVar5 + 0x3c7),1)) {
        iVar3 = FUN_1158_043e(uVar7);
      }
      local_1e = iVar3 >> 0xf;
      local_1c = 0;
      uVar4 = iVar14 >> 0xf;
      local_14 = 0;
      pcVar8 = (char *)s_iTime_1160_10dc + 4;
      local_20 = iVar3;
      local_18 = iVar14;
      local_16 = uVar4;
      cVar2 = FUN_10e0_2895((undefined2)local_10,local_10._2_2_,1,&local_20,unaff_SS);
      if (cVar2 == '\0') {
        pcVar8 = (char *)0x1070;
        FUN_1070_0c77(iVar5,uVar6);
      }
      local_10._2_2_ = (undefined2)((ulong)*(undefined4 *)(iVar5 + 0x1c4) >> 0x10);
      local_10._0_2_ = (undefined2)*(undefined4 *)(iVar5 + 0x1c4);
      iVar3 = *(int *)(iVar5 + 0x3c7) + -1;
      if (SBORROW2(*(int *)(iVar5 + 0x3c7),1)) {
        iVar3 = FUN_1158_043e(pcVar8);
      }
      local_26 = iVar3 >> 0xf;
      local_24 = 0;
      local_1c = 0;
      local_18 = 1;
      local_16 = 0;
      local_14 = 0;
      pcVar8 = (char *)s_iTime_1160_10dc + 4;
      local_28 = iVar3;
      local_20 = iVar14;
      local_1e = uVar4;
      cVar2 = FUN_10e0_2895((undefined2)local_10,local_10._2_2_,2,&local_28,unaff_SS);
      if (cVar2 == '\0') {
        pcVar8 = (char *)0x1070;
        FUN_1070_0c77(iVar5,uVar6);
      }
      local_10._2_2_ = (undefined2)((ulong)*(undefined4 *)(iVar5 + 0x1c8) >> 0x10);
      local_10._0_2_ = (undefined2)*(undefined4 *)(iVar5 + 0x1c8);
      iVar3 = *(int *)(iVar5 + 0x3c7) + -1;
      if (SBORROW2(*(int *)(iVar5 + 0x3c7),1)) {
        iVar3 = FUN_1158_043e(pcVar8);
      }
      local_26 = iVar3 >> 0xf;
      local_24 = 0;
      local_1c = 0;
      local_18 = 2;
      local_16 = 0;
      local_14 = 0;
      local_28 = iVar3;
      local_20 = iVar14;
      local_1e = uVar4;
      cVar2 = FUN_10e0_2895((undefined2)local_10,local_10._2_2_,2,&local_28,unaff_SS);
      if (cVar2 == '\0') {
        FUN_1070_0c77(iVar5,uVar6);
      }
      local_10 = *(undefined4 *)(iVar5 + 0x1f0);
      local_20 = *(int *)(iVar5 + 0x3c7);
      local_1e = local_20 >> 0xf;
      local_1c = 0;
      local_14 = 0;
      local_18 = iVar14;
      local_16 = uVar4;
      cVar2 = FUN_10e0_2895((int)local_10,(int)(local_10 >> 0x10),1,&local_20,unaff_SS);
      if (cVar2 == '\0') {
        FUN_1070_0c77(iVar5,uVar6);
      }
      local_10 = *(undefined4 *)(iVar5 + 0x1e4);
      local_28 = *(int *)(iVar5 + 0x3c7);
      local_26 = local_28 >> 0xf;
      local_24 = 0;
      local_1c = 0;
      local_18 = 1;
      local_16 = 0;
      local_14 = 0;
      local_20 = iVar14;
      local_1e = uVar4;
      cVar2 = FUN_10e0_2895((int)local_10,(int)(local_10 >> 0x10),2,&local_28,unaff_SS);
      if (cVar2 == '\0') {
        FUN_1070_0c77(iVar5,uVar6);
      }
      local_10 = *(undefined4 *)(iVar5 + 0x1e8);
      local_28 = *(int *)(iVar5 + 0x3c7);
      local_26 = local_28 >> 0xf;
      local_24 = 0;
      local_1c = 0;
      local_18 = 2;
      local_16 = 0;
      local_14 = 0;
      local_20 = iVar14;
      local_1e = uVar4;
      cVar2 = FUN_10e0_2895((int)local_10,(int)(local_10 >> 0x10),2,&local_28,unaff_SS);
      if (cVar2 == '\0') {
        FUN_1070_0c77(iVar5,uVar6);
      }
      local_10 = *(undefined4 *)(iVar5 + 0x1d0);
      local_28 = *(int *)(iVar5 + 0x3c7);
      local_26 = local_28 >> 0xf;
      local_24 = 0;
      local_1c = 0;
      local_18 = 1;
      local_16 = 0;
      local_14 = 0;
      local_20 = iVar14;
      local_1e = uVar4;
      cVar2 = FUN_10e0_2895((int)local_10,(int)(local_10 >> 0x10),2,&local_28,unaff_SS);
      if (cVar2 == '\0') {
        FUN_1070_0c77(iVar5,uVar6);
      }
      local_10 = *(undefined4 *)(iVar5 + 0x1d4);
      local_28 = *(int *)(iVar5 + 0x3c7);
      local_26 = local_28 >> 0xf;
      local_24 = 0;
      local_1c = 0;
      local_18 = 2;
      local_16 = 0;
      local_14 = 0;
      local_20 = iVar14;
      local_1e = uVar4;
      cVar2 = FUN_10e0_2895((int)local_10,(int)(local_10 >> 0x10),2,&local_28,unaff_SS);
      if (cVar2 == '\0') {
        FUN_1070_0c77(iVar5,uVar6);
      }
      local_10 = *(ulong *)(iVar5 + 0x1bc);
      local_20 = *(int *)(iVar5 + 0x3c7);
      local_1e = local_20 >> 0xf;
      local_1c = 0;
      local_14 = 0;
      pcVar8 = (char *)s_iTime_1160_10dc + 4;
      local_18 = iVar14;
      local_16 = uVar4;
      cVar2 = FUN_10e0_2895((int)local_10,(int)(local_10 >> 0x10),1,&local_20,unaff_SS);
      if (cVar2 == '\0') {
        pcVar8 = (char *)0x1070;
        FUN_1070_0c77(iVar5,uVar6);
      }
      local_6 = 1;
      FUN_1070_208a(&stack0xfffe,0x2147,pcVar8,0x2140,pcVar8,&local_6,unaff_SS,iVar14);
      FUN_1070_208a(&stack0xfffe,0x215b,0x1070,0x2140,0x1070,&local_6,unaff_SS,iVar14);
      FUN_1070_208a(&stack0xfffe,0x2169,0x1070,0x2140,0x1070,&local_6,unaff_SS,iVar14);
      FUN_1070_208a(&stack0xfffe,0x2177,0x1070,0x2140,0x1070,&local_6,unaff_SS,iVar14);
      FUN_1070_208a(&stack0xfffe,0x217b,0x1070,0x2140,0x1070,&local_6,unaff_SS,iVar14);
      FUN_1070_208a(&stack0xfffe,0x217f,0x1070,0x2140,0x1070,&local_6,unaff_SS,iVar14);
      FUN_1070_208a(&stack0xfffe,0x2191,0x1070,0x2140,0x1070,&local_6,unaff_SS,iVar14);
      FUN_1070_208a(&stack0xfffe,0x219d,0x1070,0x2140,0x1070,&local_6,unaff_SS,iVar14);
      FUN_1070_208a(&stack0xfffe,0x21ab,0x1070,0x2140,0x1070,&local_6,unaff_SS,iVar14);
      FUN_1070_208a(&stack0xfffe,0x21b9,0x1070,0x2140,0x1070,&local_6,unaff_SS,iVar14);
      uVar7 = 0x1070;
      FUN_1070_208a(&stack0xfffe,0x21c5,0x1070,0x2140,0x1070,&local_6,unaff_SS,iVar14);
      if (iVar14 == local_a._2_2_) break;
      iVar14 = iVar14 + 1;
    }
  }
  FUN_1140_3fd0(iVar5,uVar6,*(undefined2 *)(iVar5 + 0x350),*(undefined2 *)(iVar5 + 0x352));
  FUN_10d8_31d2((int)*(undefined4 *)(iVar5 + 0x1d8),
                (int)((ulong)*(undefined4 *)(iVar5 + 0x1d8) >> 0x10));
  FUN_10d8_31d2((int)*(undefined4 *)(iVar5 + 0x1dc),
                (int)((ulong)*(undefined4 *)(iVar5 + 0x1dc) >> 0x10));
  FUN_10d8_31d2((int)*(undefined4 *)(iVar5 + 0x1e0),
                (int)((ulong)*(undefined4 *)(iVar5 + 0x1e0) >> 0x10));
  FUN_10d8_31d2((int)*(undefined4 *)(iVar5 + 0x1cc),
                (int)((ulong)*(undefined4 *)(iVar5 + 0x1cc) >> 0x10));
  FUN_10d8_31d2((int)*(undefined4 *)(iVar5 + 0x1c4),
                (int)((ulong)*(undefined4 *)(iVar5 + 0x1c4) >> 0x10));
  FUN_10d8_31d2((int)*(undefined4 *)(iVar5 + 0x1c8),
                (int)((ulong)*(undefined4 *)(iVar5 + 0x1c8) >> 0x10));
  FUN_10d8_31d2((int)*(undefined4 *)(iVar5 + 0x1f0),
                (int)((ulong)*(undefined4 *)(iVar5 + 0x1f0) >> 0x10));
  FUN_10d8_31d2((int)*(undefined4 *)(iVar5 + 0x1e4),
                (int)((ulong)*(undefined4 *)(iVar5 + 0x1e4) >> 0x10));
  FUN_10d8_31d2((int)*(undefined4 *)(iVar5 + 0x1e8),
                (int)((ulong)*(undefined4 *)(iVar5 + 0x1e8) >> 0x10));
  FUN_10d8_31d2((int)*(undefined4 *)(iVar5 + 0x1bc),
                (int)((ulong)*(undefined4 *)(iVar5 + 0x1bc) >> 0x10));
  FUN_10d8_31d2((int)*(undefined4 *)(iVar5 + 0x1d0),
                (int)((ulong)*(undefined4 *)(iVar5 + 0x1d0) >> 0x10));
  FUN_10d8_31d2((int)*(undefined4 *)(iVar5 + 0x1d4),
                (int)((ulong)*(undefined4 *)(iVar5 + 0x1d4) >> 0x10));
  return;
}



/* ---- FUN_1070_2af2 @ 1070:2af2  (24 octets) ---- */

void __stdcall16far FUN_1070_2af2(undefined4 param_1)

{
  FUN_1158_0444();
  FUN_1140_5556((int)param_1,(int)((ulong)param_1 >> 0x10));
  return;
}



/* ---- FUN_1070_2b0a @ 1070:2b0a  (21 octets) ---- */

void __stdcall16far FUN_1070_2b0a(void)

{
  FUN_1158_0444();
  MESSAGEBEEP(0x1158,0);
  return;
}



/* ---- FUN_1070_2b1f @ 1070:2b1f  (48 octets) ---- */

void __stdcall16far FUN_1070_2b1f(undefined4 param_1)

{
  int iVar1;
  undefined2 uVar2;
  
  FUN_1158_0444();
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  if (*(char *)(iVar1 + 0xee) == '\x02') {
    FUN_1140_3a14(iVar1,uVar2,0);
  }
  else {
    FUN_1140_3a14(iVar1,uVar2,2);
  }
  return;
}



/* ---- FUN_1070_2e87 @ 1070:2e87  (71 octets) ---- */

void __stdcall16far FUN_1070_2e87(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined2 uVar3;
  
  FUN_1158_0444();
  iVar1 = DAT_1160_014c + -1;
  if (SBORROW2(DAT_1160_014c,1)) {
    iVar1 = FUN_1158_043e(0x1158);
  }
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  iVar2 = (int)param_1;
  iVar1 = FUN_1000_3e32(*(undefined2 *)(iVar2 + 0x3c7),iVar1);
  if (iVar1 != *(int *)(iVar2 + 0x3c7)) {
    FUN_1070_16bc(iVar2,uVar3,iVar1);
  }
  return;
}



/* ---- FUN_1070_2ece @ 1070:2ece  (246 octets) ---- */

void __stdcall16far FUN_1070_2ece(undefined4 param_1,undefined2 param_2,undefined2 param_3)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  undefined4 uVar8;
  
  FUN_1158_0444();
  cVar1 = FUN_1158_2255(0x94,0x1130,param_2,param_3);
  if (cVar1 != '\0') {
    FUN_1158_2273(0x94,0x1130,param_2,param_3);
    uVar6 = (undefined2)((ulong)param_1 >> 0x10);
    iVar5 = (int)param_1;
    iVar4 = *(int *)(iVar5 + 0x3c7);
    uVar8 = FUN_1158_2273(0x94,0x1130,param_2,param_3);
    uVar7 = 0x1130;
    uVar2 = FUN_1130_162b((int)*(undefined4 *)(iVar5 + 0x35c),
                          (int)((ulong)*(undefined4 *)(iVar5 + 0x35c) >> 0x10),uVar8);
    iVar3 = uVar2 + 1;
    if (SCARRY2(uVar2,1)) {
      uVar7 = 0x1158;
      iVar3 = FUN_1158_043e(0x1130);
    }
    if (uVar2 < 0x14 && iVar3 < DAT_1160_014c) {
      iVar4 = uVar2 + 1;
      if (SCARRY2(uVar2,1)) {
        iVar4 = FUN_1158_043e(uVar7);
      }
    }
    else if (uVar2 == 0x14) {
      iVar4 = DAT_1160_014c + -1;
      if (SBORROW2(DAT_1160_014c,1)) {
        iVar4 = FUN_1158_043e(uVar7);
      }
      iVar4 = FUN_1000_3e32(*(undefined2 *)(iVar5 + 0x3c7),iVar4);
    }
    if (iVar4 != *(int *)(iVar5 + 0x3c7)) {
      FUN_1070_16bc(iVar5,uVar6,iVar4);
    }
  }
  return;
}



/* ---- FUN_1070_2fc4 @ 1070:2fc4  (43 octets) ---- */

void __stdcall16far FUN_1070_2fc4(undefined4 param_1)

{
  undefined4 uVar1;
  char cVar2;
  undefined2 uVar3;
  
  FUN_1158_0444();
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  uVar1 = *(undefined4 *)((int)param_1 + 0x20c);
  cVar2 = FUN_1108_2f17((int)uVar1,(int)((ulong)uVar1 >> 0x10));
  if (cVar2 != '\0') {
    FUN_1070_3053((int)param_1,uVar3);
  }
  return;
}



/* ---- FUN_1070_2ff7 @ 1070:2ff7  (69 octets) ---- */

undefined2 __stdcall16far FUN_1070_2ff7(void)

{
  undefined2 uVar1;
  undefined2 unaff_SS;
  undefined4 uVar2;
  undefined local_24 [30];
  undefined2 uStack_6;
  
  uStack_6 = 0x3002;
  FUN_1158_0444();
  uVar2 = FUN_10f0_2a04((int)DAT_1160_2c54,(int)((ulong)DAT_1160_2c54 >> 0x10));
  uVar1 = FUN_1128_21d2(uVar2);
  GETTEXTMETRICS(0x1128,local_24,unaff_SS);
  uVar1 = FUN_1158_0416(uVar1);
  return uVar1;
}



/* ---- FUN_1070_3053 @ 1070:3053  (1283 octets) ---- */

void __cdecl16far FUN_1070_3053(undefined *param_1)

{
  undefined2 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined *puVar6;
  int iVar7;
  undefined2 uVar8;
  undefined2 uVar9;
  undefined2 uVar10;
  undefined2 unaff_SS;
  undefined4 uVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puStack_422;
  undefined local_41a [254];
  undefined local_31c [2];
  undefined local_31a [254];
  int local_21c;
  int local_21a;
  undefined4 local_218;
  int local_214;
  int local_212;
  int local_20c;
  undefined2 local_20a;
  undefined local_208 [256];
  undefined local_108 [256];
  int local_8;
  int local_6;
  
  local_6 = 0x305e;
  FUN_1158_0444();
  uVar8 = (undefined2)((ulong)param_1 >> 0x10);
  puVar6 = (undefined *)param_1;
  local_20a = *(undefined2 *)(puVar6 + 0x3cb);
  *(undefined2 *)(puVar6 + 0x3cb) = 0x14;
  puStack_422 = puVar6;
  FUN_1070_21d6();
  puStack_422 = (undefined *)0x3090;
  FUN_10f0_204e();
  puStack_422 = (undefined *)0x309b;
  FUN_1158_09f5();
  FUN_1158_0408();
  puStack_422 = (undefined *)DAT_1160_1858;
  DAT_1160_1858 = &puStack_422;
  local_218 = FUN_10f0_2a04((int)DAT_1160_2c54,(int)((ulong)DAT_1160_2c54 >> 0x10));
  uVar11 = *(undefined4 *)((int)DAT_1160_18f6 + 0x2c8);
  uVar9 = (undefined2)((ulong)uVar11 >> 0x10);
  iVar7 = (int)uVar11;
  uVar10 = 0x1128;
  FUN_1128_2099(local_218,*(undefined2 *)(iVar7 + 0x34),*(undefined2 *)(iVar7 + 0x36));
  local_8 = *(int *)(puVar6 + 0x3c9) / 2;
  iVar7 = DAT_1160_014e + local_8;
  if (SCARRY2(DAT_1160_014e,local_8)) {
    uVar10 = 0x1158;
    iVar7 = FUN_1158_043e(0x1128);
  }
  iVar3 = iVar7 + -1;
  if (SBORROW2(iVar7,1)) {
    iVar3 = FUN_1158_043e(uVar10);
  }
  local_218._2_2_ = iVar3 / local_8;
  local_212 = local_218._2_2_;
  if (0 < local_218._2_2_) {
    local_214 = 1;
    while( true ) {
      FUN_1070_39b2(puVar6,uVar8,local_214,1);
      uVar9 = 8;
      uVar11 = FUN_10f0_2a04((int)DAT_1160_2c54,(int)((ulong)DAT_1160_2c54 >> 0x10));
      uVar11 = *(undefined4 *)((int)uVar11 + 7);
      FUN_1128_11f5((int)uVar11,(int)((ulong)uVar11 >> 0x10),uVar9);
      uVar10 = 2;
      uVar11 = FUN_10f0_2a04((int)DAT_1160_2c54,(int)((ulong)DAT_1160_2c54 >> 0x10));
      uVar11 = *(undefined4 *)((int)uVar11 + 7);
      uVar9 = 0x1128;
      FUN_1128_1278((int)uVar11,(int)((ulong)uVar11 >> 0x10),uVar10);
      iVar7 = 1;
      while( true ) {
        puVar13 = local_108;
        uVar10 = unaff_SS;
        FUN_1158_0db5(0,0x303c,uVar9);
        FUN_1158_0c78(puVar13,uVar10);
        uVar9 = 0x1158;
        FUN_1158_0408();
        if (iVar7 == 3) break;
        iVar7 = iVar7 + 1;
      }
      local_218._0_2_ = (undefined2)((ulong)*(undefined4 *)(puVar6 + 0x2b0) >> 0x10);
      local_21a = (int)*(undefined4 *)(puVar6 + 0x2b0);
      puVar2 = (undefined4 *)*(undefined4 *)(local_21a + 0xec);
      puVar1 = (undefined2 *)((int)*puVar2 + 0x10);
      iVar7 = (*(code *)*puVar1)(0x1158,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10));
      iVar3 = iVar7 + -1;
      if (SBORROW2(iVar7,1)) {
        iVar3 = FUN_1158_043e(0x1158);
      }
      local_21c = iVar3;
      if (-1 < iVar3) {
        iVar7 = 0;
        while( true ) {
          puVar13 = local_31c;
          puVar2 = (undefined4 *)*(undefined4 *)(local_21a + 0xec);
          puVar1 = (undefined2 *)((int)*puVar2 + 0xc);
          uVar9 = unaff_SS;
          (*(code *)*puVar1)(0x1158,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),iVar7,puVar13)
          ;
          FUN_1158_17e7(0xff,local_208,unaff_SS,puVar13,uVar9);
          do {
            local_6 = FUN_1158_1878(local_208,unaff_SS,0x303d,0x1158);
            if (0 < local_6) {
              FUN_1158_1975(1,local_6,local_208,unaff_SS);
              FUN_1158_1916(local_6,0xff,local_208,unaff_SS,0x303f,0x1158);
            }
          } while (local_6 != 0);
          puVar13 = local_31c;
          uVar9 = unaff_SS;
          FUN_1158_17cd(0x3041,0x1158);
          FUN_1158_184c(local_208,unaff_SS);
          FUN_1158_17e7(0xff,local_208,unaff_SS,puVar13,uVar9);
          puVar13 = local_108;
          uVar9 = unaff_SS;
          FUN_1158_0db5(0,local_208,unaff_SS);
          FUN_1158_0c78(puVar13,uVar9);
          FUN_1158_0408();
          if (iVar7 == local_21c) break;
          iVar7 = iVar7 + 1;
        }
      }
      if (local_214 == local_212) {
        local_218._0_2_ = (undefined2)((ulong)DAT_1160_2c54 >> 0x10);
        local_21a = (int)DAT_1160_2c54;
        uVar9 = 6;
        uVar11 = FUN_10f0_2a04(local_21a,(undefined2)local_218);
        uVar11 = *(undefined4 *)((int)uVar11 + 7);
        FUN_1128_11f5((int)uVar11,(int)((ulong)uVar11 >> 0x10),uVar9);
        uVar9 = 0;
        uVar11 = FUN_10f0_2a04(local_21a,(undefined2)local_218);
        uVar11 = *(undefined4 *)((int)uVar11 + 7);
        FUN_1128_1278((int)uVar11,(int)((ulong)uVar11 >> 0x10),uVar9);
        uVar4 = FUN_1070_2ff7(&stack0xfffe);
        if (0xfffd < uVar4) {
          FUN_1158_043e(0x1070);
        }
        local_20c = FUN_1158_0416();
        puVar13 = local_41a;
        uVar10 = unaff_SS;
        FUN_1158_17cd(0x3041,0x1158);
        puVar12 = local_31a;
        uVar9 = unaff_SS;
        FUN_1138_1d53((int)*(undefined4 *)(puVar6 + 0x298),
                      (int)((ulong)*(undefined4 *)(puVar6 + 0x298) >> 0x10));
        FUN_1158_184c(puVar12,uVar9);
        FUN_1158_17e7(0xff,local_208,unaff_SS,puVar13,uVar10);
        uVar9 = 0;
        iVar7 = (int)((long)local_20c * 5);
        if ((long)iVar7 != (long)local_20c * 5) {
          iVar7 = FUN_1158_043e(0x1158,0);
        }
        iVar3 = FUN_10f0_2a72(local_21a,(undefined2)local_218);
        iVar5 = iVar3 - iVar7;
        if (SBORROW2(iVar3,iVar7)) {
          iVar5 = FUN_1158_043e(0x10f0,uVar9);
        }
        puVar13 = local_208;
        uVar10 = unaff_SS;
        uVar11 = FUN_10f0_2a04(local_21a,(undefined2)local_218);
        FUN_1128_1f09(uVar11,puVar13,uVar10,iVar5,uVar9);
        puVar13 = local_41a;
        uVar10 = unaff_SS;
        FUN_1158_17cd(0x3041,0x1128);
        puVar12 = local_31a;
        uVar9 = unaff_SS;
        FUN_1138_1d53((int)*(undefined4 *)(puVar6 + 0x29c),
                      (int)((ulong)*(undefined4 *)(puVar6 + 0x29c) >> 0x10));
        FUN_1158_184c(puVar12,uVar9);
        FUN_1158_17e7(0xff,local_208,unaff_SS,puVar13,uVar10);
        uVar9 = 0;
        iVar7 = (int)((long)local_20c * 4);
        if ((long)iVar7 != (long)local_20c * 4) {
          iVar7 = FUN_1158_043e(0x1158,0);
        }
        iVar3 = FUN_10f0_2a72(local_21a,(undefined2)local_218);
        iVar5 = iVar3 - iVar7;
        if (SBORROW2(iVar3,iVar7)) {
          iVar5 = FUN_1158_043e(0x10f0,uVar9);
        }
        puVar13 = local_208;
        uVar10 = unaff_SS;
        uVar11 = FUN_10f0_2a04(local_21a,(undefined2)local_218);
        FUN_1128_1f09(uVar11,puVar13,uVar10,iVar5,uVar9);
        puVar13 = local_41a;
        uVar10 = unaff_SS;
        FUN_1158_17cd(0x3041,0x1128);
        puVar12 = local_31a;
        uVar9 = unaff_SS;
        FUN_1138_1d53((int)*(undefined4 *)(puVar6 + 0x2a0),
                      (int)((ulong)*(undefined4 *)(puVar6 + 0x2a0) >> 0x10));
        FUN_1158_184c(puVar12,uVar9);
        FUN_1158_17e7(0xff,local_208,unaff_SS,puVar13,uVar10);
        uVar9 = 0;
        iVar7 = (int)((long)local_20c * 3);
        if ((long)iVar7 != (long)local_20c * 3) {
          iVar7 = FUN_1158_043e(0x1158,0);
        }
        iVar3 = FUN_10f0_2a72(local_21a,(undefined2)local_218);
        iVar5 = iVar3 - iVar7;
        if (SBORROW2(iVar3,iVar7)) {
          iVar5 = FUN_1158_043e(0x10f0,uVar9);
        }
        puVar13 = local_208;
        uVar10 = unaff_SS;
        uVar11 = FUN_10f0_2a04(local_21a,(undefined2)local_218);
        FUN_1128_1f09(uVar11,puVar13,uVar10,iVar5,uVar9);
        puVar13 = local_41a;
        uVar10 = unaff_SS;
        FUN_1158_17cd(0x3041,0x1128);
        puVar12 = local_31a;
        uVar9 = unaff_SS;
        FUN_1138_1d53((int)*(undefined4 *)(puVar6 + 0x2a4),
                      (int)((ulong)*(undefined4 *)(puVar6 + 0x2a4) >> 0x10));
        FUN_1158_184c(puVar12,uVar9);
        FUN_1158_17e7(0xff,local_208,unaff_SS,puVar13,uVar10);
        uVar9 = 0;
        iVar7 = (int)((long)local_20c * 2);
        if ((long)iVar7 != (long)local_20c * 2) {
          iVar7 = FUN_1158_043e(0x1158,0);
        }
        iVar3 = FUN_10f0_2a72(local_21a,(undefined2)local_218);
        iVar5 = iVar3 - iVar7;
        if (SBORROW2(iVar3,iVar7)) {
          iVar5 = FUN_1158_043e(0x10f0,uVar9);
        }
        puVar13 = local_208;
        uVar10 = unaff_SS;
        uVar11 = FUN_10f0_2a04(local_21a,(undefined2)local_218);
        FUN_1128_1f09(uVar11,puVar13,uVar10,iVar5,uVar9);
      }
      if (local_214 == local_218._2_2_) break;
      local_214 = local_214 + 1;
    }
  }
  DAT_1160_1858 = (undefined **)puStack_422;
  puStack_422 = local_108;
  FUN_1158_0a4f();
  puStack_422 = (undefined *)0x352a;
  FUN_1158_0408();
  puStack_422 = (undefined *)*(undefined **)(puVar6 + 0x2b0);
  FUN_1120_49e3();
  *(undefined2 *)(puVar6 + 0x3cb) = local_20a;
  puStack_422 = puVar6 + 0x350;
  FUN_1070_21d6(puVar6,uVar8);
  return;
}



/* ---- FUN_1070_39b2 @ 1070:39b2  (1088 octets) ---- */

void __stdcall16far FUN_1070_39b2(undefined4 param_1,int param_2,int param_3)

{
  undefined2 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  byte extraout_DL;
  byte extraout_DL_00;
  byte bVar4;
  int iVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  undefined2 unaff_SS;
  undefined *puVar8;
  undefined *puVar9;
  undefined2 uVar10;
  undefined local_410 [248];
  undefined local_318 [8];
  undefined local_310 [248];
  int local_218;
  int local_216;
  undefined4 local_214;
  int local_210;
  undefined2 local_20e;
  int local_20c;
  int local_20a;
  uint local_208;
  int local_206;
  int local_204;
  byte local_202 [256];
  undefined local_102 [252];
  undefined2 uStack_6;
  
  uStack_6 = 0x39bd;
  FUN_1158_0444();
  if (param_2 == 0) {
    local_20a = 1;
    local_20c = 8;
  }
  else if (param_2 == 1) {
    local_20a = 1;
    local_20c = 4;
  }
  else {
    if (param_2 != 2) {
      return;
    }
    local_20a = 5;
    local_20c = 8;
  }
  if (DAT_1160_014e < local_20c) {
    local_20c = DAT_1160_014e;
  }
  uVar6 = (undefined2)((ulong)param_1 >> 0x10);
  iVar5 = (int)param_1;
  local_20e = (undefined2)((ulong)*(undefined4 *)(iVar5 + 0x2b0) >> 0x10);
  local_210 = (int)*(undefined4 *)(iVar5 + 0x2b0);
  FUN_1120_49e3(local_210,local_20e);
  puVar8 = local_310;
  uVar10 = unaff_SS;
  FUN_1158_17cd(0x1dfa,0x1160);
  FUN_1158_184c(0x3995,0x1158);
  puVar9 = local_410;
  uVar7 = unaff_SS;
  FUN_1138_1d53((int)*(undefined4 *)(iVar5 + 0x348),
                (int)((ulong)*(undefined4 *)(iVar5 + 0x348) >> 0x10));
  FUN_1158_184c(puVar9,uVar7);
  FUN_1158_17e7(0xff,local_102,unaff_SS,puVar8,uVar10);
  puVar2 = (undefined4 *)*(undefined4 *)(local_210 + 0xec);
  puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
  (*(code *)*puVar1)(0x1158,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),local_102);
  local_214 = *(undefined4 *)(iVar5 + 0x350);
  uVar7 = (undefined2)((ulong)local_214 >> 0x10);
  if (SBORROW2(*(int *)((int)local_214 + 0x10c),(uint)(*(int *)((int)local_214 + 0x10a) == 0)) !=
      false) {
    FUN_1158_043e(0x1158);
  }
  local_216 = FUN_1158_0416();
  if (-1 < local_216) {
    local_206 = 0;
    while( true ) {
      local_102[0] = 0;
      uVar7 = (undefined2)((ulong)local_214 >> 0x10);
      if (SBORROW2(*(int *)((int)local_214 + 0xe8),(uint)(*(int *)((int)local_214 + 0xe6) == 0)) !=
          false) {
        FUN_1158_043e(0x1158);
      }
      local_218 = FUN_1158_0416();
      if (-1 < local_218) {
        local_204 = 0;
        while( true ) {
          iVar5 = local_20c + 1;
          if (SCARRY2(local_20c,1)) {
            iVar5 = FUN_1158_043e(0x1158);
          }
          bVar4 = local_204 < iVar5;
          iVar5 = local_20a + -1;
          if (SBORROW2(local_20a,1)) {
            iVar5 = FUN_1158_043e(0x1158);
            bVar4 = extraout_DL;
          }
          iVar3 = iVar5 + 1;
          if (SCARRY2(iVar5,1)) {
            iVar3 = FUN_1158_043e(0x1158);
            bVar4 = extraout_DL_00;
          }
          if (local_204 < 1 || (iVar3 <= local_204 & bVar4) != 0) {
            puVar8 = local_318;
            uVar7 = unaff_SS;
            FUN_10f8_9a68((int)local_214,(int)((ulong)local_214 >> 0x10),local_206,local_204);
            FUN_1158_17e7(0xff,local_202,unaff_SS,puVar8,uVar7);
            do {
              local_208 = FUN_1158_1878(local_202,unaff_SS,0x399f,0x1158);
              if (0 < (int)local_208) {
                FUN_1158_1975(2,local_208,local_202,unaff_SS);
              }
            } while (local_208 != 0);
            do {
              local_208 = FUN_1158_1878(local_202,unaff_SS,0x39a2,0x1158);
              if (0 < (int)local_208) {
                FUN_1158_1975(3,local_208,local_202,unaff_SS);
              }
            } while (local_208 != 0);
            do {
              local_208 = FUN_1158_1878(local_202,unaff_SS,0x39a5,0x1158);
              if (0 < (int)local_208) {
                FUN_1158_1975(3,local_208,local_202,unaff_SS);
              }
            } while (local_208 != 0);
            if (param_3 == 0) {
              while (local_202[1] == ' ' && local_202[0] != 0) {
                FUN_1158_1975(1,1,local_202,unaff_SS);
              }
              local_208 = (uint)local_202[0];
              while (iVar5 = FUN_1158_0416(), 0 < (int)local_208 && local_202[iVar5] == 0x20) {
                FUN_1158_1975(1,local_208,local_202,unaff_SS);
                local_208 = local_208 - 1;
              }
            }
            if (param_3 == 1) {
              if (local_204 == 0) {
                for (local_208 = (uint)local_202[0]; 0x1c < (int)local_208;
                    local_208 = local_208 - 1) {
                  FUN_1158_1975(1,local_208,local_202,unaff_SS);
                }
                local_208 = (uint)local_202[0];
                while ((int)local_208 < 0x1c) {
                  local_208 = local_208 + 1;
                  puVar8 = local_318;
                  uVar7 = unaff_SS;
                  FUN_1158_17cd(local_202,unaff_SS);
                  FUN_1158_184c(0x39b0,0x1158);
                  FUN_1158_17e7(0xff,local_202,unaff_SS,puVar8,uVar7);
                }
              }
              else {
                local_208 = (uint)local_202[0];
                while ((int)local_208 < 0x14) {
                  local_208 = local_208 + 1;
                  puVar8 = local_318;
                  uVar7 = unaff_SS;
                  FUN_1158_17cd(0x39b0,0x1158);
                  FUN_1158_184c(local_202,unaff_SS);
                  FUN_1158_17e7(0xff,local_202,unaff_SS,puVar8,uVar7);
                }
              }
            }
            iVar5 = local_20c + -1;
            if (SBORROW2(local_20c,1)) {
              iVar5 = FUN_1158_043e(0x1158);
            }
            if (local_204 < iVar5) {
              puVar8 = local_318;
              uVar7 = unaff_SS;
              FUN_1158_17cd(local_202,unaff_SS);
              FUN_1158_184c(0x3995,0x1158);
              FUN_1158_17e7(0xff,local_202,unaff_SS,puVar8,uVar7);
            }
            puVar8 = local_318;
            uVar7 = unaff_SS;
            FUN_1158_17cd(local_102,unaff_SS);
            FUN_1158_184c(local_202,unaff_SS);
            FUN_1158_17e7(0xff,local_102,unaff_SS,puVar8,uVar7);
          }
          if (local_204 == local_218) break;
          local_204 = local_204 + 1;
        }
      }
      puVar2 = (undefined4 *)*(undefined4 *)(local_210 + 0xec);
      puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
      (*(code *)*puVar1)(0x1158,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),local_102);
      if (local_206 == local_216) break;
      local_206 = local_206 + 1;
    }
  }
  return;
}



/* ---- FUN_1070_4d85 @ 1070:4d85  (149 octets) ---- */

void __stdcall16far FUN_1070_4d85(undefined4 param_1,char param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  
  FUN_1158_0444();
  iVar1 = (int)param_1;
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  if (((*param_3 == 0x70 && param_2 == '\0') && (*(int *)(iVar1 + 0xe6) == *(int *)(iVar1 + 0x352)))
     && (*(int *)(iVar1 + 0xe4) == *(int *)(iVar1 + 0x350))) {
    *param_3 = 0;
    uVar4 = (undefined2)((ulong)*(undefined4 *)(iVar1 + 0x350) >> 0x10);
    iVar2 = (int)*(undefined4 *)(iVar1 + 0x350);
    FUN_1070_4ec1(iVar1,uVar3,*(undefined2 *)(iVar2 + 0xf6),*(undefined2 *)(iVar2 + 0xf8),
                  *(undefined2 *)(iVar2 + 0xf2),*(undefined2 *)(iVar2 + 0xf4));
  }
  if (*param_3 != 0) {
    FUN_1140_2230(iVar1,uVar3,*(undefined2 *)(iVar1 + 0xe4),*(undefined2 *)(iVar1 + 0xe6));
  }
  return;
}



/* ---- FUN_1070_4e1a @ 1070:4e1a  (43 octets) ---- */

void __stdcall16far FUN_1070_4e1a(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined2 uVar3;
  
  FUN_1158_0444();
  uVar1 = *(undefined4 *)((int)param_1 + 0x28c);
  uVar3 = (undefined2)((ulong)uVar1 >> 0x10);
  iVar2 = (int)uVar1;
  FUN_1140_77b2((int)DAT_1160_2c2a,(int)((ulong)DAT_1160_2c2a >> 0x10),*(undefined2 *)(iVar2 + 0x23)
                ,*(undefined2 *)(iVar2 + 0x25),1);
  return;
}



/* ---- FUN_1070_4e45 @ 1070:4e45  (31 octets) ---- */

void __stdcall16far FUN_1070_4e45(void)

{
  FUN_1158_0444();
  FUN_1140_77b2((int)DAT_1160_2c2a,(int)((ulong)DAT_1160_2c2a >> 0x10),0,0,3);
  return;
}



/* ---- FUN_1070_4e64 @ 1070:4e64  (33 octets) ---- */

void __stdcall16far FUN_1070_4e64(void)

{
  FUN_1158_0444();
  FUN_1140_77b2((int)DAT_1160_2c2a,(int)((ulong)DAT_1160_2c2a >> 0x10),0x264,0x1160,0x105);
  return;
}



/* ---- FUN_1070_4e85 @ 1070:4e85  (31 octets) ---- */

void __stdcall16far FUN_1070_4e85(void)

{
  FUN_1158_0444();
  FUN_1140_77b2((int)DAT_1160_2c2a,(int)((ulong)DAT_1160_2c2a >> 0x10),0,0,4);
  return;
}



/* ---- FUN_1070_4ea4 @ 1070:4ea4  (29 octets) ---- */

void __stdcall16far FUN_1070_4ea4(void)

{
  undefined2 uVar1;
  
  uVar1 = 0x4eaf;
  FUN_1158_0444();
  FUN_1140_5d45((int)DAT_1160_2008,(int)((ulong)DAT_1160_2008 >> 0x10),uVar1);
  return;
}



/* ---- FUN_1070_4ec1 @ 1070:4ec1  (96 octets) ---- */

void __stdcall16far FUN_1070_4ec1(undefined2 param_1,undefined2 param_2_00,uint param_2,int param_3)

{
  undefined4 uVar1;
  
  FUN_1158_0444();
  if ((param_3 < 1) && ((param_3 < 0 || (param_2 == 0)))) {
    uVar1 = 1;
  }
  else {
    uVar1 = CONCAT22(param_3 + 0x21 + (uint)(0x4347 < param_2),param_2 + 0xbcb8);
    if (SCARRY2(param_3,0x21) != SCARRY2(param_3 + 0x21,(uint)(0x4347 < param_2))) {
      uVar1 = FUN_1158_043e(0x1158);
    }
  }
  FUN_1140_77b2((int)DAT_1160_2c2a,(int)((ulong)DAT_1160_2c2a >> 0x10),uVar1,8);
  return;
}



/* ---- FUN_1070_4f21 @ 1070:4f21  (204 octets) ---- */

void __stdcall16far
FUN_1070_4f21(undefined4 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4_00,
             char param_4,undefined2 param_5,undefined2 param_6)

{
  uint uVar1;
  char cVar2;
  undefined2 uVar3;
  int iVar4;
  int unaff_CS;
  undefined2 unaff_SS;
  undefined4 uVar5;
  uint local_a;
  int local_8;
  uint local_6;
  
  local_6 = 0x4f2c;
  FUN_1158_0444();
  if ((param_4 == '\x01') &&
     (cVar2 = FUN_1158_2255(0x18e7,(char *)s_sShortDate_1160_10ad + 3,param_5,param_6),
     cVar2 != '\0')) {
    uVar5 = FUN_1158_2273(0x18e7,(char *)s_sShortDate_1160_10ad + 3,param_5,param_6);
    uVar3 = (undefined2)((ulong)uVar5 >> 0x10);
    FUN_10f8_7f64(uVar5,&local_a,unaff_SS,&local_6,unaff_SS,param_2,param_3);
    uVar1 = *(uint *)((int)uVar5 + 0xfe);
    iVar4 = (int)uVar1 >> 0xf;
    if ((iVar4 < unaff_CS) || ((iVar4 <= unaff_CS && (uVar1 <= local_6)))) {
      FUN_10f8_6fe1(uVar5,local_6,unaff_CS);
    }
    uVar1 = *(uint *)((int)uVar5 + 0x100);
    iVar4 = (int)uVar1 >> 0xf;
    if ((iVar4 < local_8) || ((iVar4 <= local_8 && (uVar1 <= local_a)))) {
      FUN_10f8_73ec(uVar5,local_a,local_8);
    }
    FUN_1070_4ec1((int)param_1,(int)((ulong)param_1 >> 0x10),local_a,local_8,local_6,unaff_CS);
  }
  return;
}



/* ---- FUN_1070_4fed @ 1070:4fed  (43 octets) ---- */

void __stdcall16far FUN_1070_4fed(undefined4 param_1)

{
  undefined2 uVar1;
  
  FUN_1158_0444();
  DAT_1160_0144 = 0xb;
  DAT_1160_0146 = 0;
  uVar1 = (undefined2)((ulong)param_1 >> 0x10);
  DAT_1160_0148 = *(undefined2 *)((int)param_1 + 0x3c7);
  FUN_1140_5556((int)param_1,uVar1);
  return;
}



/* ---- FUN_1070_5018 @ 1070:5018  (43 octets) ---- */

void __stdcall16far FUN_1070_5018(undefined4 param_1)

{
  undefined2 uVar1;
  
  FUN_1158_0444();
  DAT_1160_0144 = 0xc;
  DAT_1160_0146 = 0;
  uVar1 = (undefined2)((ulong)param_1 >> 0x10);
  DAT_1160_0148 = *(undefined2 *)((int)param_1 + 0x3c7);
  FUN_1140_5556((int)param_1,uVar1);
  return;
}



/* ---- FUN_1070_5043 @ 1070:5043  (27 octets) ---- */

void __stdcall16far FUN_1070_5043(undefined4 param_1)

{
  FUN_1158_0444();
  FUN_1088_0e44(*(undefined2 *)((int)param_1 + 0x3c7));
  return;
}



/* ---- FUN_1070_505e @ 1070:505e  (31 octets) ---- */

void __stdcall16far FUN_1070_505e(undefined4 param_1)

{
  FUN_1158_0444();
  FUN_1078_0ca1(1,*(undefined2 *)((int)param_1 + 0x3c7),0);
  return;
}



/* ---- FUN_1070_507d @ 1070:507d  (19 octets) ---- */

void __stdcall16far FUN_1070_507d(void)

{
  FUN_1158_0444();
  FUN_1098_0942();
  return;
}




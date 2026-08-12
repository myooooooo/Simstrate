/* Simstrat (FR).EXE - segment Code7 - 42 fonctions
   Decompile par Ghidra 11.2.1 (x86 16 bits, chargeur NE). */

/* ---- FUN_1030_0733 @ 1030:0733  (43 octets) ---- */

void __stdcall16far FUN_1030_0733(undefined4 param_1)

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



/* ---- FUN_1030_0764 @ 1030:0764  (178 octets) ---- */

void __stdcall16far FUN_1030_0764(undefined2 param_1,int param_2)

{
  undefined2 uVar1;
  undefined extraout_AH;
  undefined2 uVar2;
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
  int local_6;
  
  _local_6 = CONCAT22(unaff_CS,0x76f);
  FUN_1158_0444();
  uStack_c = (undefined2)((ulong)DAT_1160_2c2a >> 0x10);
  uStack_e = (undefined2)DAT_1160_2c2a;
  uStack_10 = 0x1158;
  uStack_12 = 0x77d;
  FUN_1140_7303();
  if (param_2 < 1) {
    return;
  }
  uStack_c = DAT_1160_2c2a._2_2_;
  uStack_e = (undefined2)DAT_1160_2c2a;
  uStack_10 = CONCAT11(extraout_AH,1);
  uStack_12 = 0x1030;
  uStack_14 = 0x22;
  uStack_16 = 0x1140;
  uStack_18 = 0x79e;
  local_a = FUN_1140_2553();
  uVar2 = (undefined2)((ulong)local_a >> 0x10);
  local_6 = (int)local_a;
  uStack_16 = 0x1140;
  uStack_18 = 0x75e;
  uStack_1c = DAT_1160_1858;
  DAT_1160_1858 = &uStack_1c;
  *(undefined2 *)(local_6 + 0x31a) = param_1;
  *(int *)(local_6 + 0x318) = param_2;
  puStack_1a = &stack0xfffe;
  FUN_1030_09be(local_a,*(undefined2 *)(local_6 + 0x318));
  FUN_1138_1ed5(local_a,0xfff0,0xffff);
  FUN_1140_3a14(local_a,2);
  uVar1 = (undefined2)local_a;
  FUN_1140_5d45(local_a);
  DAT_1160_1858 = (undefined2 *)uVar1;
  puStack_1a = (undefined *)0x1140;
  uStack_1c = 0x812;
  FUN_1140_5f1d(local_6,uVar2);
  return;
}



/* ---- FUN_1030_081c @ 1030:081c  (351 octets) ---- */

void __stdcall16far FUN_1030_081c(char param_1,undefined2 param_2,int param_3)

{
  uint uVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 unaff_CS;
  undefined2 uVar4;
  undefined2 uStack_1e;
  undefined *puStack_1c;
  undefined2 uStack_1a;
  undefined2 uStack_18;
  undefined2 uStack_16;
  undefined2 uStack_14;
  undefined2 uStack_12;
  undefined2 uStack_10;
  undefined2 uStack_e;
  undefined4 local_c;
  char local_7;
  int local_6;
  
  _local_6 = CONCAT22(unaff_CS,0x827);
  FUN_1158_0444();
  uStack_e = (undefined2)((ulong)DAT_1160_2c2a >> 0x10);
  uStack_10 = (undefined2)DAT_1160_2c2a;
  uStack_12 = 0x1158;
  uStack_14 = 0x835;
  uVar1 = FUN_1140_7303();
  local_7 = '\0';
  if (0 < param_3) {
    if (param_1 == '\0') {
      uVar1 = uVar1 & 0xff00;
      if (*(char *)((int)DAT_1160_2004 + 0x1b4) == '\0') {
        uVar1 = uVar1 + 1;
      }
      local_7 = (char)uVar1;
    }
    else {
      local_7 = '\x01';
    }
  }
  if (local_7 == '\0') {
    return;
  }
  uStack_e = DAT_1160_2c2a._2_2_;
  uStack_10 = (undefined2)DAT_1160_2c2a;
  uStack_12 = CONCAT11((char)(uVar1 >> 8),1);
  uStack_14 = 0x1030;
  uStack_16 = 0x22;
  uStack_18 = 0x1140;
  uStack_1a = 0x87e;
  local_c = FUN_1140_2553();
  uVar3 = (undefined2)((ulong)local_c >> 0x10);
  local_6 = (int)local_c;
  uStack_18 = 0x1140;
  uStack_1a = 0x816;
  uStack_1e = DAT_1160_1858;
  DAT_1160_1858 = &uStack_1e;
  *(undefined2 *)(local_6 + 0x31a) = param_2;
  *(int *)(local_6 + 0x318) = param_3;
  puStack_1c = &stack0xfffe;
  FUN_1030_09be(local_c,*(undefined2 *)(local_6 + 0x318));
  FUN_1030_097b(local_c,1);
  FUN_1138_1ed5(local_c,0xffff,0xff);
  TFormSERE_Etudes_FormResize(local_c,local_6,uVar3);
  FUN_1140_36b2(local_c,0,0);
  FUN_1140_3a14(local_c,2);
  FUN_1140_34e5(local_c,1);
  uVar2 = FUN_1138_62b9(local_c);
  SHOWWINDOW(0x1138,4);
  if (param_1 == '\0') {
    FUN_1140_7303((int)DAT_1160_2c2a,(int)((ulong)DAT_1160_2c2a >> 0x10));
    FUN_1010_311a((int)DAT_1160_2004,(int)((ulong)DAT_1160_2004 >> 0x10),
                  *(undefined2 *)(local_6 + 0x17c),*(undefined2 *)(local_6 + 0x17e),local_6,uVar3);
    uVar4 = 0x1140;
    FUN_1140_7303((int)DAT_1160_2c2a,(int)((ulong)DAT_1160_2c2a >> 0x10));
    DAT_1160_1858 = (undefined2 *)uVar2;
  }
  else {
    uVar4 = 0x1030;
    FUN_1030_5467(local_6,uVar3);
    DAT_1160_1858 = (undefined2 *)uVar2;
  }
  puStack_1c = (undefined *)0x977;
  uStack_1e = uVar3;
  uStack_1a = uVar4;
  FUN_1140_5f1d(local_6);
  return;
}



/* ---- FUN_1030_097b @ 1030:097b  (67 octets) ---- */

void __stdcall16far FUN_1030_097b(undefined4 param_1,undefined param_2)

{
  int iVar1;
  undefined2 uVar2;
  
  FUN_1158_0444();
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  *(undefined *)(iVar1 + 0x31c) = param_2;
  FUN_1140_1cd0((int)*(undefined4 *)(iVar1 + 0xd8),
                (int)((ulong)*(undefined4 *)(iVar1 + 0xd8) >> 0x10),0);
  FUN_1140_1cd0((int)*(undefined4 *)(iVar1 + 0xdc),
                (int)((ulong)*(undefined4 *)(iVar1 + 0xdc) >> 0x10),0);
  return;
}



/* ---- FUN_1030_09be @ 1030:09be  (173 octets) ---- */

void __stdcall16far FUN_1030_09be(undefined4 param_1,undefined2 param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined2 unaff_SS;
  undefined4 uVar6;
  undefined *puVar7;
  undefined local_104 [252];
  undefined4 local_8;
  int iVar8;
  
  local_8 = CONCAT22(0x9c9,(undefined2)local_8);
  FUN_1158_0444();
  uVar4 = (undefined2)((ulong)param_1 >> 0x10);
  iVar3 = (int)param_1;
  *(undefined2 *)(iVar3 + 0x318) = param_2;
  puVar7 = local_104;
  FUN_1150_08a9(*(int *)(iVar3 + 0x318),*(int *)(iVar3 + 0x318) >> 0xf);
  FUN_1138_1d8c((int)*(undefined4 *)(iVar3 + 0x260),
                (int)((ulong)*(undefined4 *)(iVar3 + 0x260) >> 0x10),puVar7,unaff_SS);
  uVar5 = 0x1030;
  FUN_1030_3fc2(iVar3,uVar4);
  local_8 = *(undefined4 *)(iVar3 + 0x2c0);
  iVar8 = 0;
  while( true ) {
    uVar1 = iVar8 + 1;
    if (SCARRY2(iVar8,1)) {
      uVar1 = FUN_1158_043e(uVar5);
    }
    uVar2 = uVar1 & 0xff00;
    if (uVar1 == *(uint *)(iVar3 + 0x318)) {
      uVar2 = uVar2 + 1;
    }
    uVar6 = FUN_1130_1353((int)local_8,(int)((ulong)local_8 >> 0x10),iVar8);
    uVar5 = 0x1130;
    FUN_1130_1275(uVar6,uVar2);
    if (iVar8 == 0x13) break;
    iVar8 = iVar8 + 1;
  }
  FUN_1030_0a88(iVar3,uVar4,*(undefined2 *)(iVar3 + 0x31a));
  return;
}



/* ---- FUN_1030_0a88 @ 1030:0a88  (4888 octets) ---- */

void __stdcall16far FUN_1030_0a88(undefined4 param_1,undefined2 param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined extraout_AH;
  byte extraout_AH_00;
  byte extraout_AH_01;
  undefined extraout_AH_02;
  undefined extraout_AH_03;
  undefined uVar6;
  undefined extraout_AH_04;
  undefined extraout_AH_05;
  int iVar5;
  byte extraout_AH_06;
  undefined extraout_AH_07;
  undefined extraout_AH_08;
  undefined extraout_AH_09;
  undefined extraout_AH_10;
  undefined extraout_AH_11;
  undefined extraout_AH_12;
  int iVar7;
  undefined2 *puVar8;
  undefined2 uVar9;
  undefined2 uVar10;
  undefined2 unaff_SS;
  unkbyte10 in_ST0;
  longdouble lVar11;
  unkbyte10 in_ST1;
  unkbyte10 in_ST2;
  unkbyte10 in_ST3;
  unkbyte10 in_ST4;
  unkbyte10 Var12;
  unkbyte10 Var13;
  unkbyte10 in_ST5;
  unkbyte10 in_ST6;
  unkbyte10 in_ST7;
  undefined4 uVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined2 uVar17;
  undefined local_22a [2];
  undefined local_228 [2];
  undefined local_226 [8];
  undefined local_21e [2];
  undefined local_21c [242];
  undefined local_12a [2];
  undefined local_128 [2];
  undefined local_126 [8];
  undefined local_11e [2];
  undefined local_11c [20];
  undefined local_108 [222];
  undefined *local_2a;
  undefined local_22;
  undefined uStack_21;
  undefined2 local_20;
  undefined2 uStack_1e;
  undefined2 uStack_1c;
  undefined uStack_1a;
  undefined uStack_19;
  undefined2 uStack_18;
  double *local_16;
  undefined2 *local_14;
  int local_12;
  int local_10;
  undefined2 *local_e;
  undefined4 local_c;
  int local_8;
  int local_6;
  
  local_6 = 0xa93;
  FUN_1158_0444();
  puVar8 = (undefined2 *)((ulong)param_1 >> 0x10);
  iVar7 = (int)param_1;
  *(undefined2 *)(iVar7 + 0x31a) = param_2;
  puVar16 = local_108;
  uVar9 = unaff_SS;
  FUN_1150_08a9(*(int *)(iVar7 + 0x31a),*(int *)(iVar7 + 0x31a) >> 0xf);
  FUN_1138_1d8c((int)*(undefined4 *)(iVar7 + 600),(int)((ulong)*(undefined4 *)(iVar7 + 600) >> 0x10)
                ,puVar16,uVar9);
  FUN_1030_2896(iVar7,puVar8);
  local_c = *(undefined4 *)(iVar7 + 0x1fc);
  uVar9 = 0x1130;
  iVar1 = FUN_1130_1326((int)local_c,(int)((ulong)local_c >> 0x10));
  iVar2 = iVar1 + -1;
  if (SBORROW2(iVar1,1)) {
    uVar9 = 0x1158;
    iVar2 = FUN_1158_043e(0x1130);
  }
  _local_10 = CONCAT22(iVar2,local_10);
  if (-1 < iVar2) {
    local_8 = 0;
    while( true ) {
      uVar3 = local_8 + 1;
      if (SCARRY2(local_8,1)) {
        uVar3 = FUN_1158_043e(uVar9);
      }
      uVar4 = uVar3 & 0xff00;
      if (uVar3 == *(uint *)(iVar7 + 0x31a)) {
        uVar4 = uVar4 + 1;
      }
      uVar14 = FUN_1130_1353((int)local_c,(int)((ulong)local_c >> 0x10),local_8);
      uVar9 = 0x1130;
      FUN_1130_1275(uVar14,uVar4);
      if ((undefined2 *)local_8 == local_e) break;
      local_8 = local_8 + 1;
    }
  }
  local_c = *(undefined4 *)(iVar7 + 0x184);
  local_10 = iVar7 + 0x41d;
  uVar9 = 0x1158;
  local_e = puVar8;
  iVar1 = FUN_1158_0416();
  if (*(char *)(local_10 + iVar1 * 7 + -7) == '\0') {
    local_12 = DAT_1160_014e;
    if (0 < DAT_1160_014e) {
      iVar1 = 1;
      while( true ) {
        local_8 = 1;
        uVar10 = uVar9;
        while( true ) {
          uVar9 = 0x10f8;
          FUN_10f8_9b08((int)local_c,(int)((ulong)local_c >> 0x10),0xa6c,uVar10,local_8,iVar1);
          if (local_8 == 5) break;
          local_8 = local_8 + 1;
          uVar10 = uVar9;
        }
        if (iVar1 == local_12) break;
        iVar1 = iVar1 + 1;
      }
    }
  }
  else {
    local_12 = DAT_1160_014e;
    if (0 < DAT_1160_014e) {
      iVar1 = 1;
      while( true ) {
        iVar2 = FUN_1158_0416();
        local_16 = (double *)(local_10 + iVar2 * 0x40 + -8);
        local_14 = local_e;
        uVar17 = 1;
        puVar16 = local_228;
        uVar10 = unaff_SS;
        iVar2 = iVar1;
        FUN_1158_17cd(0xa79,0x1158);
        puVar15 = local_128;
        lVar11 = (longdouble)*(double *)CONCAT22(local_14,local_16);
        local_20 = SUB102(lVar11,0);
        uStack_1e = (undefined2)((unkuint10)lVar11 >> 0x10);
        uStack_1c = (undefined2)((unkuint10)lVar11 >> 0x20);
        uStack_1a = (undefined)((unkuint10)lVar11 >> 0x30);
        uStack_19 = (undefined)((unkuint10)lVar11 >> 0x38);
        uStack_18._0_1_ = (undefined)((unkuint10)lVar11 >> 0x40);
        uStack_18._1_1_ = (undefined)((unkuint10)lVar11 >> 0x48);
        uVar9 = unaff_SS;
        FUN_1080_32fb();
        FUN_1158_184c(puVar15,uVar9);
        FUN_10f8_9b08((int)local_c,(int)((ulong)local_c >> 0x10),puVar16,uVar10,uVar17,iVar2);
        uVar17 = 2;
        puVar16 = local_228;
        uVar10 = unaff_SS;
        iVar2 = iVar1;
        FUN_1158_17cd(0xa79,0x10f8);
        puVar15 = local_128;
        lVar11 = (longdouble)local_16[1];
        local_20 = SUB102(lVar11,0);
        uStack_1e = (undefined2)((unkuint10)lVar11 >> 0x10);
        uStack_1c = (undefined2)((unkuint10)lVar11 >> 0x20);
        uStack_1a = (undefined)((unkuint10)lVar11 >> 0x30);
        uStack_19 = (undefined)((unkuint10)lVar11 >> 0x38);
        uStack_18._0_1_ = (undefined)((unkuint10)lVar11 >> 0x40);
        uStack_18._1_1_ = (undefined)((unkuint10)lVar11 >> 0x48);
        uVar9 = unaff_SS;
        FUN_1080_32fb();
        FUN_1158_184c(puVar15,uVar9);
        FUN_10f8_9b08((int)local_c,(int)((ulong)local_c >> 0x10),puVar16,uVar10,uVar17,iVar2);
        uVar17 = 3;
        puVar16 = local_228;
        uVar10 = unaff_SS;
        iVar2 = iVar1;
        FUN_1158_17cd(0xa79,0x10f8);
        puVar15 = local_128;
        lVar11 = (longdouble)local_16[2];
        local_20 = SUB102(lVar11,0);
        uStack_1e = (undefined2)((unkuint10)lVar11 >> 0x10);
        uStack_1c = (undefined2)((unkuint10)lVar11 >> 0x20);
        uStack_1a = (undefined)((unkuint10)lVar11 >> 0x30);
        uStack_19 = (undefined)((unkuint10)lVar11 >> 0x38);
        uStack_18._0_1_ = (undefined)((unkuint10)lVar11 >> 0x40);
        uStack_18._1_1_ = (undefined)((unkuint10)lVar11 >> 0x48);
        in_ST7 = in_ST6;
        uVar9 = unaff_SS;
        FUN_1080_32fb();
        FUN_1158_184c(puVar15,uVar9);
        FUN_10f8_9b08((int)local_c,(int)((ulong)local_c >> 0x10),puVar16,uVar10,uVar17,iVar2);
        uVar17 = 4;
        puVar16 = local_21e;
        uVar10 = unaff_SS;
        iVar2 = iVar1;
        FUN_1158_17cd(0xa79,0x10f8);
        puVar15 = local_11e;
        uStack_1e = *(undefined2 *)(local_16 + 3);
        uStack_1c = *(undefined2 *)((int)local_16 + 0x1a);
        uStack_1a = 0;
        uVar9 = unaff_SS;
        FUN_1080_32fb();
        FUN_1158_184c(puVar15,uVar9);
        FUN_10f8_9b08((int)local_c,(int)((ulong)local_c >> 0x10),puVar16,uVar10,uVar17,iVar2);
        uVar17 = 5;
        puVar16 = local_21e;
        uVar10 = unaff_SS;
        iVar2 = iVar1;
        FUN_1158_17cd(0xa79,0x10f8);
        puVar15 = local_11e;
        uStack_1e = *(undefined2 *)((int)local_16 + 0x1c);
        uStack_1c = *(undefined2 *)((int)local_16 + 0x1e);
        uStack_1a = 0;
        uVar9 = unaff_SS;
        FUN_1080_32fb();
        FUN_1158_184c(puVar15,uVar9);
        uVar9 = 0x10f8;
        FUN_10f8_9b08((int)local_c,(int)((ulong)local_c >> 0x10),puVar16,uVar10,uVar17,iVar2);
        if (iVar1 == local_12) break;
        iVar1 = iVar1 + 1;
      }
    }
  }
  iVar1 = DAT_1160_014e + 1;
  if (SCARRY2(DAT_1160_014e,1)) {
    iVar1 = FUN_1158_043e(uVar9);
  }
  FUN_10f8_701b((int)local_c,(int)((ulong)local_c >> 0x10),iVar1,iVar1 >> 0xf);
  FUN_1138_1c77((int)local_c,(int)((ulong)local_c >> 0x10),1);
  FUN_1138_1c77((int)*(undefined4 *)(iVar7 + 0x274),
                (int)((ulong)*(undefined4 *)(iVar7 + 0x274) >> 0x10),
                CONCAT11(extraout_AH,*(undefined *)((int)local_c + 0x29)));
  local_c = *(undefined4 *)(iVar7 + 400);
  _local_10 = CONCAT22(puVar8,iVar7 + 0x41d);
  uVar9 = 0x1158;
  iVar1 = FUN_1158_0416();
  if (*(char *)(iVar7 + iVar1 * 7 + 0x417) == '\0') {
    local_12 = DAT_1160_014e;
    if (0 < DAT_1160_014e) {
      iVar1 = 1;
      while( true ) {
        local_8 = 1;
        uVar10 = uVar9;
        while( true ) {
          uVar9 = 0x10f8;
          FUN_10f8_9b08((int)local_c,(int)((ulong)local_c >> 0x10),0xa6c,uVar10,local_8,iVar1);
          if (local_8 == 5) break;
          local_8 = local_8 + 1;
          uVar10 = uVar9;
        }
        if (iVar1 == local_12) break;
        iVar1 = iVar1 + 1;
      }
    }
  }
  else {
    local_12 = DAT_1160_014e;
    if (0 < DAT_1160_014e) {
      iVar1 = 1;
      while( true ) {
        iVar2 = FUN_1158_0416();
        local_14 = (undefined2 *)((ulong)_local_10 >> 0x10);
        local_16 = (double *)((int)_local_10 + iVar2 * 0x40 + 0x18);
        uVar17 = 1;
        puVar16 = local_228;
        uVar10 = unaff_SS;
        iVar2 = iVar1;
        FUN_1158_17cd(0xa79,0x1158);
        puVar15 = local_128;
        lVar11 = (longdouble)*(double *)CONCAT22(local_14,local_16);
        local_20 = SUB102(lVar11,0);
        uStack_1e = (undefined2)((unkuint10)lVar11 >> 0x10);
        uStack_1c = (undefined2)((unkuint10)lVar11 >> 0x20);
        uStack_1a = (undefined)((unkuint10)lVar11 >> 0x30);
        uStack_19 = (undefined)((unkuint10)lVar11 >> 0x38);
        uStack_18._0_1_ = (undefined)((unkuint10)lVar11 >> 0x40);
        uStack_18._1_1_ = (undefined)((unkuint10)lVar11 >> 0x48);
        uVar9 = unaff_SS;
        FUN_1080_32fb();
        FUN_1158_184c(puVar15,uVar9);
        FUN_10f8_9b08((int)local_c,(int)((ulong)local_c >> 0x10),puVar16,uVar10,uVar17,iVar2);
        uVar17 = 2;
        puVar16 = local_228;
        uVar10 = unaff_SS;
        iVar2 = iVar1;
        FUN_1158_17cd(0xa79,0x10f8);
        puVar15 = local_128;
        lVar11 = (longdouble)local_16[1];
        local_20 = SUB102(lVar11,0);
        uStack_1e = (undefined2)((unkuint10)lVar11 >> 0x10);
        uStack_1c = (undefined2)((unkuint10)lVar11 >> 0x20);
        uStack_1a = (undefined)((unkuint10)lVar11 >> 0x30);
        uStack_19 = (undefined)((unkuint10)lVar11 >> 0x38);
        uStack_18._0_1_ = (undefined)((unkuint10)lVar11 >> 0x40);
        uStack_18._1_1_ = (undefined)((unkuint10)lVar11 >> 0x48);
        uVar9 = unaff_SS;
        FUN_1080_32fb();
        FUN_1158_184c(puVar15,uVar9);
        FUN_10f8_9b08((int)local_c,(int)((ulong)local_c >> 0x10),puVar16,uVar10,uVar17,iVar2);
        uVar17 = 3;
        puVar16 = local_228;
        uVar10 = unaff_SS;
        iVar2 = iVar1;
        FUN_1158_17cd(0xa79,0x10f8);
        puVar15 = local_128;
        lVar11 = (longdouble)local_16[2];
        local_20 = SUB102(lVar11,0);
        uStack_1e = (undefined2)((unkuint10)lVar11 >> 0x10);
        uStack_1c = (undefined2)((unkuint10)lVar11 >> 0x20);
        uStack_1a = (undefined)((unkuint10)lVar11 >> 0x30);
        uStack_19 = (undefined)((unkuint10)lVar11 >> 0x38);
        uStack_18._0_1_ = (undefined)((unkuint10)lVar11 >> 0x40);
        uStack_18._1_1_ = (undefined)((unkuint10)lVar11 >> 0x48);
        in_ST7 = in_ST6;
        uVar9 = unaff_SS;
        FUN_1080_32fb();
        FUN_1158_184c(puVar15,uVar9);
        FUN_10f8_9b08((int)local_c,(int)((ulong)local_c >> 0x10),puVar16,uVar10,uVar17,iVar2);
        uVar17 = 4;
        puVar16 = local_21e;
        uVar10 = unaff_SS;
        iVar2 = iVar1;
        FUN_1158_17cd(0xa79,0x10f8);
        puVar15 = local_11e;
        uStack_1e = *(undefined2 *)(local_16 + 3);
        uStack_1c = *(undefined2 *)((int)local_16 + 0x1a);
        uStack_1a = 0;
        uVar9 = unaff_SS;
        FUN_1080_32fb();
        FUN_1158_184c(puVar15,uVar9);
        FUN_10f8_9b08((int)local_c,(int)((ulong)local_c >> 0x10),puVar16,uVar10,uVar17,iVar2);
        uVar17 = 5;
        puVar16 = local_21e;
        uVar10 = unaff_SS;
        iVar2 = iVar1;
        FUN_1158_17cd(0xa79,0x10f8);
        puVar15 = local_11e;
        uStack_1e = *(undefined2 *)((int)local_16 + 0x1c);
        uStack_1c = *(undefined2 *)((int)local_16 + 0x1e);
        uStack_1a = 0;
        uVar9 = unaff_SS;
        FUN_1080_32fb();
        FUN_1158_184c(puVar15,uVar9);
        uVar9 = 0x10f8;
        FUN_10f8_9b08((int)local_c,(int)((ulong)local_c >> 0x10),puVar16,uVar10,uVar17,iVar2);
        if (iVar1 == local_12) break;
        iVar1 = iVar1 + 1;
      }
    }
  }
  iVar1 = DAT_1160_014e + 1;
  if (SCARRY2(DAT_1160_014e,1)) {
    iVar1 = FUN_1158_043e(uVar9);
  }
  FUN_10f8_701b((int)local_c,(int)((ulong)local_c >> 0x10),iVar1,iVar1 >> 0xf);
  iVar1 = (uint)extraout_AH_00 * 0x100;
  if (2 < DAT_1160_1e06) {
    iVar1 = iVar1 + 1;
  }
  FUN_1138_1c77((int)local_c,(int)((ulong)local_c >> 0x10),iVar1);
  iVar1 = (uint)extraout_AH_01 * 0x100;
  if (2 < DAT_1160_1e06) {
    iVar1 = iVar1 + 1;
  }
  FUN_1138_1c77((int)*(undefined4 *)(iVar7 + 0x278),
                (int)((ulong)*(undefined4 *)(iVar7 + 0x278) >> 0x10),iVar1);
  local_c = *(undefined4 *)(iVar7 + 0x19c);
  _local_10 = CONCAT22(puVar8,iVar7 + 0x41d);
  uVar9 = 0x1158;
  iVar1 = FUN_1158_0416();
  if (*(char *)(iVar7 + iVar1 * 7 + 0x418) == '\0') {
    local_12 = DAT_1160_014e;
    if (0 < DAT_1160_014e) {
      iVar1 = 1;
      while( true ) {
        local_8 = 1;
        uVar10 = uVar9;
        while( true ) {
          uVar9 = 0x10f8;
          FUN_10f8_9b08((int)local_c,(int)((ulong)local_c >> 0x10),0xa6c,uVar10,local_8,iVar1);
          if (local_8 == 2) break;
          local_8 = local_8 + 1;
          uVar10 = uVar9;
        }
        if (iVar1 == local_12) break;
        iVar1 = iVar1 + 1;
      }
    }
  }
  else {
    local_12 = DAT_1160_014e;
    if (0 < DAT_1160_014e) {
      iVar1 = 1;
      while( true ) {
        local_6 = 1;
        while( true ) {
          iVar2 = FUN_1158_0416();
          iVar2 = iVar2 * 0x30;
          iVar5 = FUN_1158_0416();
          local_14 = (undefined2 *)((ulong)_local_10 >> 0x10);
          local_16 = (double *)((int)_local_10 + iVar5 * 0x60 + iVar2 + 0x1a8);
          puVar16 = local_228;
          uVar10 = unaff_SS;
          iVar2 = local_6;
          iVar5 = iVar1;
          FUN_1158_17cd(0xa79,0x1158);
          puVar15 = local_128;
          lVar11 = (longdouble)*(double *)((int)local_16 + 0x1c);
          local_20 = SUB102(lVar11,0);
          uStack_1e = (undefined2)((unkuint10)lVar11 >> 0x10);
          uStack_1c = (undefined2)((unkuint10)lVar11 >> 0x20);
          uStack_1a = (undefined)((unkuint10)lVar11 >> 0x30);
          uStack_19 = (undefined)((unkuint10)lVar11 >> 0x38);
          uStack_18._0_1_ = (undefined)((unkuint10)lVar11 >> 0x40);
          uStack_18._1_1_ = (undefined)((unkuint10)lVar11 >> 0x48);
          in_ST7 = in_ST6;
          uVar9 = unaff_SS;
          FUN_1080_32fb();
          FUN_1158_184c(puVar15,uVar9);
          uVar9 = 0x10f8;
          FUN_10f8_9b08((int)local_c,(int)((ulong)local_c >> 0x10),puVar16,uVar10,iVar2,iVar5);
          if (local_6 == 2) break;
          local_6 = local_6 + 1;
        }
        if (iVar1 == local_12) break;
        iVar1 = iVar1 + 1;
      }
    }
  }
  iVar1 = DAT_1160_014e + 1;
  if (SCARRY2(DAT_1160_014e,1)) {
    iVar1 = FUN_1158_043e(uVar9);
  }
  FUN_10f8_701b((int)local_c,(int)((ulong)local_c >> 0x10),iVar1,iVar1 >> 0xf);
  FUN_1138_1c77((int)local_c,(int)((ulong)local_c >> 0x10),1);
  uVar6 = extraout_AH_02;
  if (DAT_1160_1e06 < 3) {
    FUN_10f8_7426((int)local_c,(int)((ulong)local_c >> 0x10),2,0);
    uVar6 = extraout_AH_03;
  }
  FUN_1138_1c77((int)*(undefined4 *)(iVar7 + 0x28c),
                (int)((ulong)*(undefined4 *)(iVar7 + 0x28c) >> 0x10),
                CONCAT11(uVar6,*(undefined *)((int)local_c + 0x29)));
  local_c = *(undefined4 *)(iVar7 + 0x1a8);
  _local_10 = CONCAT22(puVar8,iVar7 + 0x41d);
  uVar9 = 0x1158;
  iVar1 = FUN_1158_0416();
  if (*(char *)(iVar7 + iVar1 * 7 + 0x419) == '\0') {
    local_12 = DAT_1160_014e;
    if (0 < DAT_1160_014e) {
      iVar1 = 1;
      while( true ) {
        local_8 = 1;
        uVar10 = uVar9;
        while( true ) {
          uVar9 = 0x10f8;
          FUN_10f8_9b08((int)local_c,(int)((ulong)local_c >> 0x10),0xa6c,uVar10,local_8,iVar1);
          if (local_8 == 4) break;
          local_8 = local_8 + 1;
          uVar10 = uVar9;
        }
        if (iVar1 == local_12) break;
        iVar1 = iVar1 + 1;
      }
    }
  }
  else {
    local_12 = DAT_1160_014e;
    if (0 < DAT_1160_014e) {
      iVar1 = 1;
      while( true ) {
        local_6 = 1;
        while( true ) {
          iVar2 = FUN_1158_0416();
          iVar2 = iVar2 * 0x30;
          iVar5 = FUN_1158_0416();
          local_14 = (undefined2 *)((ulong)_local_10 >> 0x10);
          local_16 = (double *)((int)_local_10 + iVar5 * 0x60 + iVar2 + 0x1a8);
          puVar16 = local_228;
          uVar10 = unaff_SS;
          iVar2 = local_6;
          iVar5 = iVar1;
          FUN_1158_17cd(0xa79,0x1158);
          puVar15 = local_128;
          lVar11 = (longdouble)*(double *)((int)local_16 + 0xc);
          local_20 = SUB102(lVar11,0);
          uStack_1e = (undefined2)((unkuint10)lVar11 >> 0x10);
          uStack_1c = (undefined2)((unkuint10)lVar11 >> 0x20);
          uStack_1a = (undefined)((unkuint10)lVar11 >> 0x30);
          uStack_19 = (undefined)((unkuint10)lVar11 >> 0x38);
          uStack_18._0_1_ = (undefined)((unkuint10)lVar11 >> 0x40);
          uStack_18._1_1_ = (undefined)((unkuint10)lVar11 >> 0x48);
          uVar9 = unaff_SS;
          FUN_1080_32fb();
          FUN_1158_184c(puVar15,uVar9);
          FUN_10f8_9b08((int)local_c,(int)((ulong)local_c >> 0x10),puVar16,uVar10,iVar2,iVar5);
          if (local_6 == 2) break;
          local_6 = local_6 + 1;
        }
        iVar2 = FUN_1158_0416();
        local_14 = (undefined2 *)((ulong)_local_10 >> 0x10);
        local_16 = (double *)((int)_local_10 + iVar2 * 0x38 + 0x500);
        uVar17 = 3;
        puVar16 = local_228;
        uVar10 = unaff_SS;
        iVar2 = iVar1;
        FUN_1158_17cd(0xa79,0x1158);
        puVar15 = local_128;
        lVar11 = (longdouble)*(double *)CONCAT22(local_14,local_16);
        local_20 = SUB102(lVar11,0);
        uStack_1e = (undefined2)((unkuint10)lVar11 >> 0x10);
        uStack_1c = (undefined2)((unkuint10)lVar11 >> 0x20);
        uStack_1a = (undefined)((unkuint10)lVar11 >> 0x30);
        uStack_19 = (undefined)((unkuint10)lVar11 >> 0x38);
        uStack_18._0_1_ = (undefined)((unkuint10)lVar11 >> 0x40);
        uStack_18._1_1_ = (undefined)((unkuint10)lVar11 >> 0x48);
        uVar9 = unaff_SS;
        FUN_1080_32fb();
        FUN_1158_184c(puVar15,uVar9);
        FUN_10f8_9b08((int)local_c,(int)((ulong)local_c >> 0x10),puVar16,uVar10,uVar17,iVar2);
        uVar17 = 4;
        puVar16 = local_228;
        uVar10 = unaff_SS;
        iVar2 = iVar1;
        FUN_1158_17cd(0xa79,0x10f8);
        puVar15 = local_128;
        lVar11 = (longdouble)local_16[1];
        local_20 = SUB102(lVar11,0);
        uStack_1e = (undefined2)((unkuint10)lVar11 >> 0x10);
        uStack_1c = (undefined2)((unkuint10)lVar11 >> 0x20);
        uStack_1a = (undefined)((unkuint10)lVar11 >> 0x30);
        uStack_19 = (undefined)((unkuint10)lVar11 >> 0x38);
        uStack_18._0_1_ = (undefined)((unkuint10)lVar11 >> 0x40);
        uStack_18._1_1_ = (undefined)((unkuint10)lVar11 >> 0x48);
        in_ST7 = in_ST6;
        uVar9 = unaff_SS;
        FUN_1080_32fb();
        FUN_1158_184c(puVar15,uVar9);
        uVar9 = 0x10f8;
        FUN_10f8_9b08((int)local_c,(int)((ulong)local_c >> 0x10),puVar16,uVar10,uVar17,iVar2);
        if (iVar1 == local_12) break;
        iVar1 = iVar1 + 1;
      }
    }
  }
  iVar1 = DAT_1160_014e + 1;
  if (SCARRY2(DAT_1160_014e,1)) {
    iVar1 = FUN_1158_043e(uVar9);
  }
  FUN_10f8_701b((int)local_c,(int)((ulong)local_c >> 0x10),iVar1,iVar1 >> 0xf);
  FUN_1138_1c77((int)local_c,(int)((ulong)local_c >> 0x10),1);
  uVar6 = extraout_AH_04;
  if (DAT_1160_1e06 < 3) {
    FUN_10f8_74a3((int)local_c,(int)((ulong)local_c >> 0x10),0,2,0);
    uVar6 = extraout_AH_05;
  }
  FUN_1138_1c77((int)*(undefined4 *)(iVar7 + 0x288),
                (int)((ulong)*(undefined4 *)(iVar7 + 0x288) >> 0x10),
                CONCAT11(uVar6,*(undefined *)((int)local_c + 0x29)));
  local_c = *(undefined4 *)(iVar7 + 0x1b4);
  _local_10 = CONCAT22(puVar8,iVar7 + 0x41d);
  uVar9 = 0x1158;
  iVar1 = FUN_1158_0416();
  if (*(char *)(iVar7 + iVar1 * 7 + 0x41a) == '\0') {
    local_12 = DAT_1160_014e;
    if (0 < DAT_1160_014e) {
      iVar1 = 1;
      while( true ) {
        local_8 = 1;
        uVar10 = uVar9;
        while( true ) {
          uVar9 = 0x10f8;
          FUN_10f8_9b08((int)local_c,(int)((ulong)local_c >> 0x10),0xa6c,uVar10,local_8,iVar1);
          if (local_8 == 5) break;
          local_8 = local_8 + 1;
          uVar10 = uVar9;
        }
        if (iVar1 == local_12) break;
        iVar1 = iVar1 + 1;
      }
    }
  }
  else {
    local_12 = DAT_1160_014e;
    if (0 < DAT_1160_014e) {
      iVar1 = 1;
      while( true ) {
        iVar2 = FUN_1158_0416();
        local_14 = (undefined2 *)((ulong)_local_10 >> 0x10);
        local_16 = (double *)((int)_local_10 + iVar2 * 0x38 + 0x500);
        uVar17 = 1;
        puVar16 = local_228;
        uVar10 = unaff_SS;
        iVar2 = iVar1;
        FUN_1158_17cd(0xa79,0x1158);
        puVar15 = local_128;
        lVar11 = (longdouble)local_16[2];
        local_20 = SUB102(lVar11,0);
        uStack_1e = (undefined2)((unkuint10)lVar11 >> 0x10);
        uStack_1c = (undefined2)((unkuint10)lVar11 >> 0x20);
        uStack_1a = (undefined)((unkuint10)lVar11 >> 0x30);
        uStack_19 = (undefined)((unkuint10)lVar11 >> 0x38);
        uStack_18._0_1_ = (undefined)((unkuint10)lVar11 >> 0x40);
        uStack_18._1_1_ = (undefined)((unkuint10)lVar11 >> 0x48);
        uVar9 = unaff_SS;
        FUN_1080_32fb();
        FUN_1158_184c(puVar15,uVar9);
        FUN_10f8_9b08((int)local_c,(int)((ulong)local_c >> 0x10),puVar16,uVar10,uVar17,iVar2);
        uVar17 = 2;
        puVar16 = local_228;
        uVar10 = unaff_SS;
        iVar2 = iVar1;
        FUN_1158_17cd(0xa79,0x10f8);
        puVar15 = local_128;
        lVar11 = (longdouble)local_16[3];
        local_20 = SUB102(lVar11,0);
        uStack_1e = (undefined2)((unkuint10)lVar11 >> 0x10);
        uStack_1c = (undefined2)((unkuint10)lVar11 >> 0x20);
        uStack_1a = (undefined)((unkuint10)lVar11 >> 0x30);
        uStack_19 = (undefined)((unkuint10)lVar11 >> 0x38);
        uStack_18._0_1_ = (undefined)((unkuint10)lVar11 >> 0x40);
        uStack_18._1_1_ = (undefined)((unkuint10)lVar11 >> 0x48);
        uVar9 = unaff_SS;
        FUN_1080_32fb();
        FUN_1158_184c(puVar15,uVar9);
        FUN_10f8_9b08((int)local_c,(int)((ulong)local_c >> 0x10),puVar16,uVar10,uVar17,iVar2);
        uVar17 = 3;
        puVar16 = local_228;
        uVar10 = unaff_SS;
        iVar2 = iVar1;
        FUN_1158_17cd(0xa79,0x10f8);
        puVar15 = local_128;
        lVar11 = (longdouble)local_16[6];
        local_20 = SUB102(lVar11,0);
        uStack_1e = (undefined2)((unkuint10)lVar11 >> 0x10);
        uStack_1c = (undefined2)((unkuint10)lVar11 >> 0x20);
        uStack_1a = (undefined)((unkuint10)lVar11 >> 0x30);
        uStack_19 = (undefined)((unkuint10)lVar11 >> 0x38);
        uStack_18._0_1_ = (undefined)((unkuint10)lVar11 >> 0x40);
        uStack_18._1_1_ = (undefined)((unkuint10)lVar11 >> 0x48);
        uVar9 = unaff_SS;
        FUN_1080_32fb();
        FUN_1158_184c(puVar15,uVar9);
        FUN_10f8_9b08((int)local_c,(int)((ulong)local_c >> 0x10),puVar16,uVar10,uVar17,iVar2);
        uVar17 = 4;
        puVar16 = local_228;
        uVar10 = unaff_SS;
        iVar2 = iVar1;
        FUN_1158_17cd(0xa79,0x10f8);
        puVar15 = local_128;
        lVar11 = (longdouble)local_16[5];
        local_20 = SUB102(lVar11,0);
        uStack_1e = (undefined2)((unkuint10)lVar11 >> 0x10);
        uStack_1c = (undefined2)((unkuint10)lVar11 >> 0x20);
        uStack_1a = (undefined)((unkuint10)lVar11 >> 0x30);
        uStack_19 = (undefined)((unkuint10)lVar11 >> 0x38);
        uStack_18._0_1_ = (undefined)((unkuint10)lVar11 >> 0x40);
        uStack_18._1_1_ = (undefined)((unkuint10)lVar11 >> 0x48);
        uVar9 = unaff_SS;
        FUN_1080_32fb();
        FUN_1158_184c(puVar15,uVar9);
        FUN_10f8_9b08((int)local_c,(int)((ulong)local_c >> 0x10),puVar16,uVar10,uVar17,iVar2);
        uVar17 = 5;
        puVar16 = local_228;
        uVar10 = unaff_SS;
        iVar2 = iVar1;
        FUN_1158_17cd(0xa79,0x10f8);
        puVar15 = local_128;
        lVar11 = (longdouble)local_16[4];
        local_20 = SUB102(lVar11,0);
        uStack_1e = (undefined2)((unkuint10)lVar11 >> 0x10);
        uStack_1c = (undefined2)((unkuint10)lVar11 >> 0x20);
        uStack_1a = (undefined)((unkuint10)lVar11 >> 0x30);
        uStack_19 = (undefined)((unkuint10)lVar11 >> 0x38);
        uStack_18._0_1_ = (undefined)((unkuint10)lVar11 >> 0x40);
        uStack_18._1_1_ = (undefined)((unkuint10)lVar11 >> 0x48);
        uVar9 = unaff_SS;
        FUN_1080_32fb();
        FUN_1158_184c(puVar15,uVar9);
        FUN_10f8_9b08((int)local_c,(int)((ulong)local_c >> 0x10),puVar16,uVar10,uVar17,iVar2);
        local_6 = 1;
        while( true ) {
          iVar2 = FUN_1158_0416();
          iVar2 = iVar2 * 0x30;
          iVar5 = FUN_1158_0416();
          local_14 = (undefined2 *)((ulong)_local_10 >> 0x10);
          local_16 = (double *)((int)_local_10 + iVar5 * 0x60 + iVar2 + 0x1a8);
          iVar5 = local_6 + 5;
          iVar2 = iVar1;
          if (SCARRY2(local_6,5)) {
            iVar5 = FUN_1158_043e(0x1158,iVar1);
          }
          puVar16 = local_228;
          uVar10 = unaff_SS;
          FUN_1158_17cd(0xa79,0x1158);
          puVar15 = local_128;
          lVar11 = (longdouble)*(double *)((int)local_16 + 0x24);
          local_20 = SUB102(lVar11,0);
          uStack_1e = (undefined2)((unkuint10)lVar11 >> 0x10);
          uStack_1c = (undefined2)((unkuint10)lVar11 >> 0x20);
          uStack_1a = (undefined)((unkuint10)lVar11 >> 0x30);
          uStack_19 = (undefined)((unkuint10)lVar11 >> 0x38);
          uStack_18._0_1_ = (undefined)((unkuint10)lVar11 >> 0x40);
          uStack_18._1_1_ = (undefined)((unkuint10)lVar11 >> 0x48);
          in_ST7 = in_ST6;
          uVar9 = unaff_SS;
          FUN_1080_32fb();
          FUN_1158_184c(puVar15,uVar9);
          uVar9 = 0x10f8;
          FUN_10f8_9b08((int)local_c,(int)((ulong)local_c >> 0x10),puVar16,uVar10,iVar5,iVar2);
          if (local_6 == 2) break;
          local_6 = local_6 + 1;
        }
        if (iVar1 == local_12) break;
        iVar1 = iVar1 + 1;
      }
    }
  }
  iVar1 = DAT_1160_014e + 1;
  if (SCARRY2(DAT_1160_014e,1)) {
    iVar1 = FUN_1158_043e(uVar9);
  }
  FUN_10f8_701b((int)local_c,(int)((ulong)local_c >> 0x10),iVar1,iVar1 >> 0xf);
  iVar1 = (uint)extraout_AH_06 * 0x100;
  if (2 < DAT_1160_1e06) {
    iVar1 = iVar1 + 1;
  }
  FUN_1138_1c77((int)local_c,(int)((ulong)local_c >> 0x10),iVar1);
  uVar6 = extraout_AH_07;
  if (DAT_1160_1e06 < 3) {
    FUN_10f8_7426((int)local_c,(int)((ulong)local_c >> 0x10),6,0);
    uVar6 = extraout_AH_08;
  }
  FUN_1138_1c77((int)*(undefined4 *)(iVar7 + 0x284),
                (int)((ulong)*(undefined4 *)(iVar7 + 0x284) >> 0x10),
                CONCAT11(uVar6,*(undefined *)((int)local_c + 0x29)));
  local_c = *(undefined4 *)(iVar7 + 0x1c0);
  _local_10 = CONCAT22(puVar8,iVar7 + 0x41d);
  uVar9 = 0x1158;
  iVar1 = FUN_1158_0416();
  if (*(char *)(iVar7 + iVar1 * 7 + 0x41b) == '\0') {
    local_6 = 1;
    while( true ) {
      local_8 = 1;
      uVar10 = uVar9;
      while( true ) {
        uVar9 = 0x10f8;
        FUN_10f8_9b08((int)local_c,(int)((ulong)local_c >> 0x10),0xa6c,uVar10,local_8,local_6);
        if (local_8 == 4) break;
        local_8 = local_8 + 1;
        uVar10 = uVar9;
      }
      if (local_6 == 2) break;
      local_6 = local_6 + 1;
    }
  }
  else {
    local_6 = 1;
    while( true ) {
      iVar1 = FUN_1158_0416();
      local_12 = (int)((ulong)_local_10 >> 0x10);
      local_14 = (undefined2 *)((int)_local_10 + iVar1 * 0x18 + 0x6e0);
      uVar17 = 1;
      puVar16 = local_21c;
      uVar10 = unaff_SS;
      iVar1 = local_6;
      FUN_1158_17cd(0xa79,0x1158);
      puVar15 = local_11c;
      uStack_1c = *(undefined2 *)CONCAT22(local_12,local_14);
      uStack_1a = (undefined)local_14[1];
      uStack_19 = (undefined)((uint)local_14[1] >> 8);
      uStack_18._0_1_ = 0;
      uVar9 = unaff_SS;
      FUN_1080_32fb();
      FUN_1158_184c(puVar15,uVar9);
      FUN_10f8_9b08((int)local_c,(int)((ulong)local_c >> 0x10),puVar16,uVar10,uVar17,iVar1);
      uVar17 = 2;
      puVar16 = local_21c;
      uVar10 = unaff_SS;
      iVar1 = local_6;
      FUN_1158_17cd(0xa79,0x10f8);
      puVar15 = local_11c;
      uStack_1c = local_14[2];
      uStack_1a = (undefined)local_14[3];
      uStack_19 = (undefined)((uint)local_14[3] >> 8);
      uStack_18._0_1_ = 0;
      uVar9 = unaff_SS;
      FUN_1080_32fb();
      FUN_1158_184c(puVar15,uVar9);
      FUN_10f8_9b08((int)local_c,(int)((ulong)local_c >> 0x10),puVar16,uVar10,uVar17,iVar1);
      uVar17 = 3;
      puVar16 = local_21c;
      uVar10 = unaff_SS;
      iVar1 = local_6;
      FUN_1158_17cd(0xa79,0x10f8);
      puVar15 = local_11c;
      uStack_1c = local_14[6];
      uStack_1a = (undefined)local_14[7];
      uStack_19 = (undefined)((uint)local_14[7] >> 8);
      uStack_18._0_1_ = 0;
      uVar9 = unaff_SS;
      FUN_1080_32fb();
      FUN_1158_184c(puVar15,uVar9);
      FUN_10f8_9b08((int)local_c,(int)((ulong)local_c >> 0x10),puVar16,uVar10,uVar17,iVar1);
      uVar17 = 4;
      puVar16 = local_226;
      uVar10 = unaff_SS;
      iVar1 = local_6;
      FUN_1158_17cd(0xa79,0x10f8);
      puVar15 = local_126;
      lVar11 = (longdouble)*(double *)(local_14 + 8);
      uStack_1e = SUB102(lVar11,0);
      uStack_1c = (undefined2)((unkuint10)lVar11 >> 0x10);
      uStack_1a = (undefined)((unkuint10)lVar11 >> 0x20);
      uStack_19 = (undefined)((unkuint10)lVar11 >> 0x28);
      uStack_18._0_1_ = (undefined)((unkuint10)lVar11 >> 0x30);
      uStack_18._1_1_ = (undefined)((unkuint10)lVar11 >> 0x38);
      local_16 = (double *)((unkuint10)lVar11 >> 0x40);
      local_22 = 3;
      in_ST7 = in_ST6;
      uVar9 = unaff_SS;
      FUN_1080_32fb();
      FUN_1158_184c(puVar15,uVar9);
      FUN_10f8_9b08((int)local_c,(int)((ulong)local_c >> 0x10),puVar16,uVar10,uVar17,iVar1);
      if (local_6 == 2) break;
      local_6 = local_6 + 1;
    }
  }
  FUN_1138_1c77((int)local_c,(int)((ulong)local_c >> 0x10),1);
  uVar6 = extraout_AH_09;
  if (DAT_1160_1e06 < 3) {
    FUN_10f8_701b((int)local_c,(int)((ulong)local_c >> 0x10),2,0);
    uVar6 = extraout_AH_10;
  }
  FUN_1138_1c77((int)*(undefined4 *)(iVar7 + 0x280),
                (int)((ulong)*(undefined4 *)(iVar7 + 0x280) >> 0x10),
                CONCAT11(uVar6,*(undefined *)((int)local_c + 0x29)));
  local_c = *(undefined4 *)(iVar7 + 0x1c8);
  _local_10 = CONCAT22(puVar8,iVar7 + 0x41d);
  uVar9 = 0x1158;
  iVar1 = FUN_1158_0416();
  if (*(char *)(iVar7 + iVar1 * 7 + 0x41c) == '\0') {
    local_12 = DAT_1160_014e;
    if (0 < DAT_1160_014e) {
      local_6 = 1;
      while( true ) {
        local_8 = 1;
        uVar10 = uVar9;
        while( true ) {
          uVar9 = 0x10f8;
          FUN_10f8_9b08((int)local_c,(int)((ulong)local_c >> 0x10),0xa6c,uVar10,local_8,local_6);
          if (local_8 == 5) break;
          local_8 = local_8 + 1;
          uVar10 = uVar9;
        }
        if (local_6 == local_12) break;
        local_6 = local_6 + 1;
      }
    }
  }
  else {
    local_6 = 1;
    while( true ) {
      iVar1 = FUN_1158_0416();
      local_12 = (int)((ulong)_local_10 >> 0x10);
      local_14 = (undefined2 *)((int)_local_10 + iVar1 * 0x28 + 0x700);
      iVar1 = FUN_1158_0416();
      iVar1 = iVar1 << 5;
      iVar2 = FUN_1158_0416();
      local_16 = (double *)((ulong)_local_10 >> 0x10);
      uStack_18 = (undefined2 *)((int)_local_10 + iVar2 * 0x40 + iVar1 + -0x28);
      uVar17 = 1;
      puVar16 = local_22a;
      uVar10 = unaff_SS;
      iVar1 = local_6;
      FUN_1158_17cd(0xa79,0x1158);
      puVar15 = local_12a;
      uVar9 = unaff_SS;
      FUN_1080_2ea7(*(undefined2 *)CONCAT22(local_12,local_14),local_14[1],local_14[2],local_14[3],
                    *(undefined2 *)CONCAT22(local_16,uStack_18),
                    CONCAT42(CONCAT22(uStack_18[3],uStack_18[2]),uStack_18[1]));
      local_22 = (undefined)in_ST0;
      uStack_21 = (undefined)((unkuint10)in_ST0 >> 8);
      local_20 = (undefined2)((unkuint10)in_ST0 >> 0x10);
      uStack_1e = (undefined2)((unkuint10)in_ST0 >> 0x20);
      uStack_1c = (undefined2)((unkuint10)in_ST0 >> 0x30);
      uStack_1a = (undefined)((unkuint10)in_ST0 >> 0x40);
      uStack_19 = (undefined)((unkuint10)in_ST0 >> 0x48);
      local_2a = &local_22;
      Var12 = in_ST7;
      FUN_1080_32fb();
      FUN_1158_184c(puVar15,uVar9);
      FUN_10f8_9b08((int)local_c,(int)((ulong)local_c >> 0x10),puVar16,uVar10,uVar17,iVar1);
      uVar17 = 2;
      puVar16 = local_22a;
      uVar10 = unaff_SS;
      iVar1 = local_6;
      FUN_1158_17cd(0xa79,0x10f8);
      puVar15 = local_12a;
      in_ST0 = in_ST5;
      uVar9 = unaff_SS;
      FUN_1080_2ea7(local_14[4],local_14[5],local_14[6],local_14[7],uStack_18[4],
                    CONCAT42(CONCAT22(uStack_18[7],uStack_18[6]),uStack_18[5]));
      local_22 = (undefined)in_ST1;
      uStack_21 = (undefined)((unkuint10)in_ST1 >> 8);
      local_20 = (undefined2)((unkuint10)in_ST1 >> 0x10);
      uStack_1e = (undefined2)((unkuint10)in_ST1 >> 0x20);
      uStack_1c = (undefined2)((unkuint10)in_ST1 >> 0x30);
      uStack_1a = (undefined)((unkuint10)in_ST1 >> 0x40);
      uStack_19 = (undefined)((unkuint10)in_ST1 >> 0x48);
      local_2a = &local_22;
      Var13 = Var12;
      FUN_1080_32fb();
      in_ST1 = in_ST6;
      FUN_1158_184c(puVar15,uVar9);
      FUN_10f8_9b08((int)local_c,(int)((ulong)local_c >> 0x10),puVar16,uVar10,uVar17,iVar1);
      uVar17 = 3;
      puVar16 = local_22a;
      uVar10 = unaff_SS;
      iVar1 = local_6;
      FUN_1158_17cd(0xa79,0x10f8);
      puVar15 = local_12a;
      uVar9 = unaff_SS;
      FUN_1080_2ea7(local_14[8],local_14[9],local_14[10],local_14[0xb],uStack_18[8],
                    CONCAT42(CONCAT22(uStack_18[0xb],uStack_18[10]),uStack_18[9]));
      local_22 = (undefined)in_ST2;
      uStack_21 = (undefined)((unkuint10)in_ST2 >> 8);
      local_20 = (undefined2)((unkuint10)in_ST2 >> 0x10);
      uStack_1e = (undefined2)((unkuint10)in_ST2 >> 0x20);
      uStack_1c = (undefined2)((unkuint10)in_ST2 >> 0x30);
      uStack_1a = (undefined)((unkuint10)in_ST2 >> 0x40);
      uStack_19 = (undefined)((unkuint10)in_ST2 >> 0x48);
      local_2a = &local_22;
      FUN_1080_32fb();
      FUN_1158_184c(puVar15,uVar9);
      FUN_10f8_9b08((int)local_c,(int)((ulong)local_c >> 0x10),puVar16,uVar10,uVar17,iVar1);
      uVar17 = 4;
      puVar16 = local_22a;
      uVar10 = unaff_SS;
      iVar1 = local_6;
      FUN_1158_17cd(0xa79,0x10f8);
      puVar15 = local_12a;
      in_ST2 = in_ST7;
      in_ST5 = Var13;
      uVar9 = unaff_SS;
      FUN_1080_2ea7(local_14[0xc],local_14[0xd],local_14[0xe],local_14[0xf],
                    (double)*(long *)(uStack_18 + 0xc));
      local_22 = (undefined)in_ST3;
      uStack_21 = (undefined)((unkuint10)in_ST3 >> 8);
      local_20 = (undefined2)((unkuint10)in_ST3 >> 0x10);
      uStack_1e = (undefined2)((unkuint10)in_ST3 >> 0x20);
      uStack_1c = (undefined2)((unkuint10)in_ST3 >> 0x30);
      uStack_1a = (undefined)((unkuint10)in_ST3 >> 0x40);
      uStack_19 = (undefined)((unkuint10)in_ST3 >> 0x48);
      local_2a = &local_22;
      FUN_1080_32fb();
      FUN_1158_184c(puVar15,uVar9);
      FUN_10f8_9b08((int)local_c,(int)((ulong)local_c >> 0x10),puVar16,uVar10,uVar17,iVar1);
      uVar17 = 5;
      puVar16 = local_22a;
      uVar10 = unaff_SS;
      iVar1 = local_6;
      FUN_1158_17cd(0xa79,0x10f8);
      puVar15 = local_12a;
      in_ST3 = Var12;
      in_ST6 = in_ST5;
      uVar9 = unaff_SS;
      FUN_1080_2ea7(local_14[0x10],local_14[0x11],local_14[0x12],local_14[0x13],
                    (double)*(long *)(uStack_18 + 0xe));
      local_22 = (undefined)in_ST4;
      uStack_21 = (undefined)((unkuint10)in_ST4 >> 8);
      local_20 = (undefined2)((unkuint10)in_ST4 >> 0x10);
      uStack_1e = (undefined2)((unkuint10)in_ST4 >> 0x20);
      uStack_1c = (undefined2)((unkuint10)in_ST4 >> 0x30);
      uStack_1a = (undefined)((unkuint10)in_ST4 >> 0x40);
      uStack_19 = (undefined)((unkuint10)in_ST4 >> 0x48);
      local_2a = &local_22;
      in_ST7 = in_ST6;
      FUN_1080_32fb();
      FUN_1158_184c(puVar15,uVar9);
      FUN_10f8_9b08((int)local_c,(int)((ulong)local_c >> 0x10),puVar16,uVar10,uVar17,iVar1);
      if (local_6 == 2) break;
      local_6 = local_6 + 1;
      in_ST4 = Var13;
    }
  }
  FUN_1138_1c77((int)local_c,(int)((ulong)local_c >> 0x10),1);
  uVar6 = extraout_AH_11;
  if (DAT_1160_1e06 < 3) {
    FUN_10f8_701b((int)local_c,(int)((ulong)local_c >> 0x10),2,0);
    uVar6 = extraout_AH_12;
  }
  FUN_1138_1c77((int)*(undefined4 *)(iVar7 + 0x27c),
                (int)((ulong)*(undefined4 *)(iVar7 + 0x27c) >> 0x10),
                CONCAT11(uVar6,*(undefined *)((int)local_c + 0x29)));
  return;
}



/* ---- FUN_1030_1e41 @ 1030:1e41  (145 octets) ---- */

int __stdcall16far FUN_1030_1e41(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  undefined2 local_8;
  undefined2 local_6;
  
  FUN_1158_0444();
  uVar5 = (undefined2)((ulong)param_1 >> 0x10);
  iVar4 = (int)param_1;
  local_8 = *(int *)(iVar4 + 0x106);
  if (SBORROW2(*(int *)(iVar4 + 0x10c),(uint)(*(int *)(iVar4 + 0x10a) == 0)) != false) {
    FUN_1158_043e(0x1158);
  }
  iVar1 = FUN_1158_0416();
  if (-1 < iVar1) {
    local_6 = 0;
    while( true ) {
      uVar6 = 0x10f8;
      iVar2 = FUN_10f8_6e8b(iVar4,uVar5,local_6,local_6 >> 0xf);
      iVar3 = iVar2 + local_8;
      if (SCARRY2(iVar2,local_8)) {
        uVar6 = 0x1158;
        iVar3 = FUN_1158_043e(0x10f8);
      }
      local_8 = iVar3 + *(int *)(iVar4 + 0x106);
      if (SCARRY2(iVar3,*(int *)(iVar4 + 0x106))) {
        local_8 = FUN_1158_043e(uVar6);
      }
      if (local_6 == iVar1) break;
      local_6 = local_6 + 1;
    }
  }
  return local_8;
}



/* ---- FUN_1030_1eda @ 1030:1eda  (109 octets) ---- */

void __stdcall16far FUN_1030_1eda(undefined2 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined2 uVar3;
  int iVar4;
  
  FUN_1158_0444();
  uVar3 = (undefined2)((ulong)param_2 >> 0x10);
  iVar2 = (int)param_2;
  if (SBORROW2(*(int *)(iVar2 + 0xe8),(uint)(*(int *)(iVar2 + 0xe6) == 0)) != false) {
    FUN_1158_043e(0x1158);
  }
  iVar1 = FUN_1158_0416();
  iVar4 = *(int *)(iVar2 + 0xfe);
  if (iVar4 <= iVar1) {
    for (; FUN_10f8_70c9(iVar2,uVar3,param_1,iVar4,iVar4 >> 0xf), iVar4 != iVar1; iVar4 = iVar4 + 1)
    {
    }
  }
  return;
}



/* ---- FUN_1030_1f5c @ 1030:1f5c  (387 octets) ---- */

void __stdcall16far FUN_1030_1f5c(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
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
  undefined local_30c [256];
  undefined local_20c [256];
  undefined local_10c [256];
  int local_c;
  int local_a;
  undefined2 local_8;
  int local_6;
  
  local_6 = 0x1f67;
  FUN_1158_0444();
  uVar7 = (undefined2)((ulong)param_2 >> 0x10);
  iVar6 = (int)param_2;
  local_a = iVar6;
  local_8 = uVar7;
  if (SBORROW2(*(int *)(iVar6 + 0xe8),(uint)(*(int *)(iVar6 + 0xe6) == 0)) != false) {
    FUN_1158_043e(0x1158);
  }
  uVar9 = 0x1158;
  local_c = FUN_1158_0416();
  iVar4 = *(int *)(local_a + 0xfe);
  uVar8 = (undefined2)((ulong)param_1 >> 0x10);
  if (iVar4 <= local_c) {
    while( true ) {
      uVar14 = 0;
      puVar12 = local_20c;
      uVar13 = unaff_SS;
      iVar5 = iVar4;
      FUN_1158_17cd(0x1f53,uVar9);
      puVar11 = local_10c;
      uVar1 = *(undefined4 *)((int)param_1 + 0xd8);
      uVar9 = unaff_SS;
      FUN_1148_1519((int)uVar1,(int)((ulong)uVar1 >> 0x10),0x1f4f,0x1158);
      FUN_1158_184c(puVar11,uVar9);
      FUN_1158_184c(0x1f57,0x1158);
      puVar11 = local_30c;
      iVar2 = iVar4 - *(int *)(local_a + 0xfe);
      uVar9 = unaff_SS;
      if (SBORROW2(iVar4,*(int *)(local_a + 0xfe))) {
        iVar2 = FUN_1158_043e(0x1158,puVar11);
      }
      iVar3 = iVar2 + 1;
      if (SCARRY2(iVar2,1)) {
        iVar3 = FUN_1158_043e(0x1158,puVar11);
      }
      FUN_1150_08a9(iVar3,iVar3 >> 0xf);
      FUN_1158_184c(puVar11,uVar9);
      uVar9 = 0x10f8;
      FUN_10f8_9b08(local_a,local_8,puVar12,uVar13,uVar14,iVar5);
      if (iVar4 == local_c) break;
      iVar4 = iVar4 + 1;
    }
  }
  local_a = iVar6;
  local_8 = uVar7;
  if (SBORROW2(*(int *)(iVar6 + 0x10c),(uint)(*(int *)(iVar6 + 0x10a) == 0)) != false) {
    FUN_1158_043e(uVar9);
  }
  uVar7 = 0x1158;
  local_c = FUN_1158_0416();
  local_6 = *(int *)(local_a + 0x100);
  if (local_6 <= local_c) {
    while( true ) {
      uVar14 = 0;
      puVar12 = local_30c;
      puVar11 = local_20c;
      uVar9 = unaff_SS;
      uVar13 = unaff_SS;
      iVar6 = local_6;
      FUN_1158_17cd(0x1f59,uVar7);
      puVar10 = local_10c;
      iVar4 = local_6 - *(int *)(local_a + 0x100);
      uVar7 = unaff_SS;
      if (SBORROW2(local_6,*(int *)(local_a + 0x100))) {
        iVar4 = FUN_1158_043e(0x1158,puVar10);
      }
      iVar5 = iVar4 + 1;
      if (SCARRY2(iVar4,1)) {
        iVar5 = FUN_1158_043e(0x1158,puVar10);
      }
      FUN_1150_08a9(iVar5,iVar5 >> 0xf);
      FUN_1158_184c(puVar10,uVar7);
      uVar1 = *(undefined4 *)((int)param_1 + 0xd8);
      FUN_1148_1519((int)uVar1,(int)((ulong)uVar1 >> 0x10),puVar11,uVar9);
      uVar7 = 0x10f8;
      FUN_10f8_9b08(local_a,local_8,puVar12,uVar13,iVar6,uVar14);
      if (local_6 == local_c) break;
      local_6 = local_6 + 1;
    }
  }
  return;
}



/* ---- FUN_1030_20e7 @ 1030:20e7  (174 octets) ---- */

void __stdcall16far FUN_1030_20e7(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  undefined2 unaff_SS;
  undefined2 local_6;
  int iVar8;
  
  FUN_1158_0444();
  uVar1 = *(undefined4 *)((int)*(undefined4 *)(param_1 + 6) + 0x184);
  uVar5 = (undefined2)((ulong)uVar1 >> 0x10);
  iVar4 = (int)uVar1;
  if (SBORROW2(*(int *)(iVar4 + 0x10c),(uint)(*(int *)(iVar4 + 0x10a) == 0)) != false) {
    FUN_1158_043e(0x1158);
  }
  uVar6 = 0x1158;
  iVar2 = FUN_1158_0416();
  if (-1 < iVar2) {
    local_6 = 0;
    while( true ) {
      if (SBORROW2(*(int *)(iVar4 + 0xe8),(uint)(*(int *)(iVar4 + 0xe6) == 0)) != false) {
        FUN_1158_043e(uVar6);
      }
      uVar6 = 0x1158;
      iVar3 = FUN_1158_0416();
      if (-1 < iVar3) {
        iVar8 = 0;
        uVar7 = uVar6;
        while( true ) {
          uVar6 = 0x10f8;
          FUN_10f8_9b08(iVar4,uVar5,0x20df,uVar7,local_6,iVar8);
          if (iVar8 == iVar3) break;
          iVar8 = iVar8 + 1;
          uVar7 = uVar6;
        }
      }
      if (local_6 == iVar2) break;
      local_6 = local_6 + 1;
    }
  }
  return;
}



/* ---- FUN_1030_2195 @ 1030:2195  (756 octets) ---- */

void __stdcall16far FUN_1030_2195(undefined4 param_1)

{
  int iVar1;
  undefined2 uVar2;
  
  FUN_1158_0444();
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  FUN_1030_20e7(&stack0xfffe,*(undefined2 *)(iVar1 + 0x184),*(undefined2 *)(iVar1 + 0x186));
  FUN_1030_20e7(&stack0xfffe,*(undefined2 *)(iVar1 + 400),*(undefined2 *)(iVar1 + 0x192));
  FUN_1030_20e7(&stack0xfffe,*(undefined2 *)(iVar1 + 0x19c),*(undefined2 *)(iVar1 + 0x19e));
  FUN_1030_20e7(&stack0xfffe,*(undefined2 *)(iVar1 + 0x1a8),*(undefined2 *)(iVar1 + 0x1aa));
  FUN_1030_20e7(&stack0xfffe,*(undefined2 *)(iVar1 + 0x1b4),*(undefined2 *)(iVar1 + 0x1b6));
  FUN_1030_20e7(&stack0xfffe,*(undefined2 *)(iVar1 + 0x1c0),*(undefined2 *)(iVar1 + 0x1c2));
  FUN_1030_20e7(&stack0xfffe,*(undefined2 *)(iVar1 + 0x1c8),*(undefined2 *)(iVar1 + 0x1ca));
  FUN_10f8_70c9((int)*(undefined4 *)(iVar1 + 0x184),
                (int)((ulong)*(undefined4 *)(iVar1 + 0x184) >> 0x10),0x80,0,0);
  FUN_10f8_70c9((int)*(undefined4 *)(iVar1 + 400),(int)((ulong)*(undefined4 *)(iVar1 + 400) >> 0x10)
                ,0x80,0,0);
  FUN_10f8_70c9((int)*(undefined4 *)(iVar1 + 0x19c),
                (int)((ulong)*(undefined4 *)(iVar1 + 0x19c) >> 0x10),0x80,0,0);
  FUN_10f8_70c9((int)*(undefined4 *)(iVar1 + 0x1a8),
                (int)((ulong)*(undefined4 *)(iVar1 + 0x1a8) >> 0x10),0x80,0,0);
  FUN_10f8_70c9((int)*(undefined4 *)(iVar1 + 0x1b4),
                (int)((ulong)*(undefined4 *)(iVar1 + 0x1b4) >> 0x10),0x80,0,0);
  FUN_10f8_70c9((int)*(undefined4 *)(iVar1 + 0x1c0),
                (int)((ulong)*(undefined4 *)(iVar1 + 0x1c0) >> 0x10),0xc0,0,0);
  FUN_10f8_70c9((int)*(undefined4 *)(iVar1 + 0x1c8),
                (int)((ulong)*(undefined4 *)(iVar1 + 0x1c8) >> 0x10),0xc0,0,0);
  FUN_1030_1eda(0x60,*(undefined2 *)(iVar1 + 0x184),*(undefined2 *)(iVar1 + 0x186));
  FUN_1030_1eda(0x60,*(undefined2 *)(iVar1 + 400),*(undefined2 *)(iVar1 + 0x192));
  FUN_1030_1eda(0x60,*(undefined2 *)(iVar1 + 0x19c),*(undefined2 *)(iVar1 + 0x19e));
  FUN_1030_1eda(0x60,*(undefined2 *)(iVar1 + 0x1a8),*(undefined2 *)(iVar1 + 0x1aa));
  FUN_1030_1eda(0x60,*(undefined2 *)(iVar1 + 0x1b4),*(undefined2 *)(iVar1 + 0x1b6));
  FUN_1030_1eda(0x60,*(undefined2 *)(iVar1 + 0x1c0),*(undefined2 *)(iVar1 + 0x1c2));
  FUN_1030_1eda(0x60,*(undefined2 *)(iVar1 + 0x1c8),*(undefined2 *)(iVar1 + 0x1ca));
  FUN_1138_1672((int)*(undefined4 *)(iVar1 + 0x184),
                (int)((ulong)*(undefined4 *)(iVar1 + 0x184) >> 0x10),5);
  FUN_1138_1672((int)*(undefined4 *)(iVar1 + 400),(int)((ulong)*(undefined4 *)(iVar1 + 400) >> 0x10)
                ,5);
  FUN_1138_1672((int)*(undefined4 *)(iVar1 + 0x19c),
                (int)((ulong)*(undefined4 *)(iVar1 + 0x19c) >> 0x10),5);
  FUN_1138_1672((int)*(undefined4 *)(iVar1 + 0x1a8),
                (int)((ulong)*(undefined4 *)(iVar1 + 0x1a8) >> 0x10),5);
  FUN_1138_1672((int)*(undefined4 *)(iVar1 + 0x1b4),
                (int)((ulong)*(undefined4 *)(iVar1 + 0x1b4) >> 0x10),5);
  FUN_1138_1672((int)*(undefined4 *)(iVar1 + 0x1c0),
                (int)((ulong)*(undefined4 *)(iVar1 + 0x1c0) >> 0x10),5);
  FUN_1138_1672((int)*(undefined4 *)(iVar1 + 0x1c8),
                (int)((ulong)*(undefined4 *)(iVar1 + 0x1c8) >> 0x10),5);
  FUN_1030_1f5c(*(undefined2 *)(iVar1 + 0x188),*(undefined2 *)(iVar1 + 0x18a),
                *(undefined2 *)(iVar1 + 0x184),*(undefined2 *)(iVar1 + 0x186));
  FUN_1030_1f5c(*(undefined2 *)(iVar1 + 0x188),*(undefined2 *)(iVar1 + 0x18a),
                *(undefined2 *)(iVar1 + 400),*(undefined2 *)(iVar1 + 0x192));
  FUN_1030_1f5c(*(undefined2 *)(iVar1 + 0x198),*(undefined2 *)(iVar1 + 0x19a),
                *(undefined2 *)(iVar1 + 0x19c),*(undefined2 *)(iVar1 + 0x19e));
  FUN_1030_1f5c(*(undefined2 *)(iVar1 + 0x1a4),*(undefined2 *)(iVar1 + 0x1a6),
                *(undefined2 *)(iVar1 + 0x1a8),*(undefined2 *)(iVar1 + 0x1aa));
  FUN_1030_1f5c(*(undefined2 *)(iVar1 + 0x1b0),*(undefined2 *)(iVar1 + 0x1b2),
                *(undefined2 *)(iVar1 + 0x1b4),*(undefined2 *)(iVar1 + 0x1b6));
  FUN_1030_1f5c(*(undefined2 *)(iVar1 + 0x1bc),*(undefined2 *)(iVar1 + 0x1be),
                *(undefined2 *)(iVar1 + 0x1c0),*(undefined2 *)(iVar1 + 0x1c2));
  FUN_1030_1f5c(*(undefined2 *)(iVar1 + 0x1cc),*(undefined2 *)(iVar1 + 0x1ce),
                *(undefined2 *)(iVar1 + 0x1c8),*(undefined2 *)(iVar1 + 0x1ca));
  return;
}



/* ---- TFormSERE_Etudes_FormCreate @ 1030:2499  (1 octets) ---- */

/* WARNING: Removing unreachable block (ram,0x10302684) */

void TFormSERE_Etudes_FormCreate(undefined2 param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  undefined2 uVar8;
  undefined2 uVar9;
  undefined2 unaff_SS;
  bool bVar10;
  bool bVar11;
  longdouble in_ST0;
  longdouble in_ST1;
  undefined4 uVar12;
  long lVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined2 uVar16;
  undefined auStack_304 [256];
  undefined auStack_204 [256];
  undefined auStack_104 [250];
  undefined4 uStack_a;
  int iStack_6;
  
  iStack_6 = 0x24a4;
  FUN_1158_0444();
  FUN_1158_17cd(0x2489,0x1158);
  FUN_1158_184c(0x1dfa,0x1160);
  FUN_1158_184c(0x2495,0x1158);
  puVar14 = auStack_204;
  uVar8 = (undefined2)((ulong)param_2 >> 0x10);
  iVar7 = (int)param_2;
  uVar9 = unaff_SS;
  FUN_1138_1d53();
  FUN_1158_184c(puVar14,uVar9);
  FUN_1158_17e7();
  FUN_1138_1d8c((int)*(undefined4 *)(iVar7 + 0x250),
                (int)((ulong)*(undefined4 *)(iVar7 + 0x250) >> 0x10),0x1dfa,0x1160);
  iStack_6 = (int)((ulong)*(undefined4 *)(iVar7 + 0x1fc) >> 0x10);
  uStack_a._2_2_ = (undefined2)*(undefined4 *)(iVar7 + 0x1fc);
  uVar9 = 0x1130;
  iVar2 = FUN_1130_1326(uStack_a._2_2_,iStack_6);
  uStack_a._0_2_ = iVar2 + -1;
  if (SBORROW2(iVar2,1)) {
    uVar9 = 0x1158;
    uStack_a._0_2_ = FUN_1158_043e(0x1130);
  }
  if (-1 < (int)uStack_a) {
    iVar2 = 0;
    while( true ) {
      if (DAT_1160_014e <= iVar2) {
        uVar16 = 0;
        uVar12 = FUN_1130_1353(uStack_a._2_2_,iStack_6,iVar2);
        uVar9 = 0x1130;
        FUN_1130_13a5(uVar12,uVar16);
      }
      if (iVar2 == (int)uStack_a) break;
      iVar2 = iVar2 + 1;
    }
  }
  iStack_6 = (int)((ulong)*(undefined4 *)(iVar7 + 0x2c0) >> 0x10);
  uStack_a._2_2_ = (undefined2)*(undefined4 *)(iVar7 + 0x2c0);
  iVar2 = 0;
  while( true ) {
    iVar3 = DAT_1160_014c + -1;
    uVar16 = uVar9;
    if (SBORROW2(DAT_1160_014c,1)) {
      uVar16 = 0x1158;
      iVar3 = FUN_1158_043e(uVar9);
    }
    uVar12 = CONCAT22(iVar3,iVar2 + 1);
    uVar9 = uVar16;
    if (SCARRY2(iVar2,1)) {
      uVar9 = 0x1158;
      uVar12 = FUN_1158_043e(uVar16);
    }
    if ((int)((ulong)uVar12 >> 0x10) < (int)uVar12) {
      uVar16 = 0;
      uVar12 = FUN_1130_1353(uStack_a._2_2_,iStack_6,iVar2);
      uVar9 = 0x1130;
      FUN_1130_13a5(uVar12,uVar16);
    }
    if (iVar2 == 0x14) break;
    iVar2 = iVar2 + 1;
  }
  FUN_1140_1cd0((int)*(undefined4 *)(iVar7 + 0xdc),
                (int)((ulong)*(undefined4 *)(iVar7 + 0xdc) >> 0x10),0);
  FUN_1140_1cd0((int)*(undefined4 *)(iVar7 + 0xd8),
                (int)((ulong)*(undefined4 *)(iVar7 + 0xd8) >> 0x10),0);
  iVar2 = FUN_1148_527d(iVar7,uVar8);
  iVar3 = iVar2 + -1;
  if (SBORROW2(iVar2,1)) {
    iVar3 = FUN_1158_043e(0x1148);
  }
  iStack_6 = iVar3;
  if (-1 < iVar3) {
    iVar2 = 0;
    while( true ) {
      uVar12 = FUN_1148_5246(iVar7,uVar8,iVar2);
      cVar1 = FUN_1158_2255(0x399,0x1138,uVar12);
      if (cVar1 != '\0') {
        uVar12 = FUN_1148_5246(iVar7,uVar8,iVar2);
        uVar12 = FUN_1158_2273(0x399,0x1138,uVar12);
        uVar9 = (undefined2)((ulong)uVar12 >> 0x10);
        iVar3 = (int)uVar12;
        uStack_a = uVar12;
        if ((*(char *)(iVar3 + 0x29) != '\0') &&
           (*(int *)(iVar3 + 0xc) != 0 || *(int *)(iVar3 + 0xe) != 0)) {
          iVar5 = DAT_1160_1e06 >> 0xf;
          iVar4 = *(int *)(iVar3 + 0xc);
          uVar6 = *(uint *)(iVar3 + 0xe);
          bVar11 = false;
          if ((int)uVar6 < 0) {
            bVar10 = iVar4 != 0;
            iVar4 = -iVar4;
            iVar3 = ~uVar6 + 1;
            bVar11 = SBORROW2(~uVar6,-1) != SBORROW2(iVar3,(uint)bVar10);
            uVar6 = iVar3 - (uint)bVar10;
          }
          lVar13 = CONCAT22(uVar6,iVar4);
          iVar3 = DAT_1160_1e06;
          if (bVar11) {
            lVar13 = FUN_1158_043e(0x1158);
          }
          FUN_1138_1c77(uStack_a,lVar13 <= CONCAT22(iVar5,iVar3));
        }
      }
      if (iVar2 == iStack_6) break;
      iVar2 = iVar2 + 1;
    }
  }
  puVar14 = auStack_104;
  uVar12 = *(undefined4 *)((int)DAT_1160_18f6 + 0x24c);
  uVar9 = unaff_SS;
  FUN_1138_1d53((int)uVar12,(int)((ulong)uVar12 >> 0x10));
  FUN_1138_1d8c((int)*(undefined4 *)(iVar7 + 0x294),
                (int)((ulong)*(undefined4 *)(iVar7 + 0x294) >> 0x10),puVar14,uVar9);
  puVar14 = auStack_104;
  uVar12 = *(undefined4 *)((int)DAT_1160_18f6 + 0x250);
  uVar9 = unaff_SS;
  FUN_1138_1d53((int)uVar12,(int)((ulong)uVar12 >> 0x10));
  FUN_1138_1d8c((int)*(undefined4 *)(iVar7 + 0x298),
                (int)((ulong)*(undefined4 *)(iVar7 + 0x298) >> 0x10),puVar14,uVar9);
  puVar14 = auStack_104;
  uVar12 = *(undefined4 *)((int)DAT_1160_18f6 + 0x254);
  uVar9 = unaff_SS;
  FUN_1138_1d53((int)uVar12,(int)((ulong)uVar12 >> 0x10));
  FUN_1138_1d8c((int)*(undefined4 *)(iVar7 + 0x29c),
                (int)((ulong)*(undefined4 *)(iVar7 + 0x29c) >> 0x10),puVar14,uVar9);
  puVar14 = auStack_104;
  uVar12 = *(undefined4 *)((int)DAT_1160_18f6 + 0x248);
  uVar16 = unaff_SS;
  FUN_1138_1d53((int)uVar12,(int)((ulong)uVar12 >> 0x10));
  FUN_1158_184c(0x2495,0x1138);
  puVar15 = auStack_204;
  uVar9 = unaff_SS;
  FUN_1150_15fe(puVar15);
  FUN_1150_1cbf((double)in_ST0);
  FUN_1158_184c(puVar15,uVar9);
  FUN_1158_184c(0x2495,0x1158);
  puVar15 = auStack_304;
  FUN_1150_15fe(puVar15);
  FUN_1150_1ce4((double)in_ST1);
  FUN_1158_184c(puVar15,unaff_SS);
  FUN_1158_184c(0x2495,0x1158);
  FUN_1138_1d8c((int)*(undefined4 *)(iVar7 + 0x2a0),
                (int)((ulong)*(undefined4 *)(iVar7 + 0x2a0) >> 0x10),puVar14,uVar16);
  FUN_10e0_3017((int)*(undefined4 *)(iVar7 + 0x244),
                (int)((ulong)*(undefined4 *)(iVar7 + 0x244) >> 0x10),0x1e6a,0x1160);
  FUN_10e0_3017((int)*(undefined4 *)(iVar7 + 0x23c),
                (int)((ulong)*(undefined4 *)(iVar7 + 0x23c) >> 0x10),0x1e78,0x1160);
  FUN_10e0_3017((int)*(undefined4 *)(iVar7 + 0x240),
                (int)((ulong)*(undefined4 *)(iVar7 + 0x240) >> 0x10),0x1e86,0x1160);
  FUN_10e0_3017((int)*(undefined4 *)(iVar7 + 0x238),
                (int)((ulong)*(undefined4 *)(iVar7 + 0x238) >> 0x10),0x1e5c,0x1160);
  FUN_10e0_3017((int)*(undefined4 *)(iVar7 + 0x268),
                (int)((ulong)*(undefined4 *)(iVar7 + 0x268) >> 0x10),0x1e94,0x1160);
  *(undefined2 *)(iVar7 + 0x31a) = 1;
  iVar2 = DAT_1160_014c + -1;
  if (SBORROW2(DAT_1160_014c,1)) {
    iVar2 = FUN_1158_043e((char *)s_iTime_1160_10dc + 4);
  }
  *(int *)(iVar7 + 0x318) = iVar2;
  FUN_1030_2195(iVar7,uVar8);
  iVar2 = func_0x10301da8(0x1030,*(undefined2 *)(iVar7 + 0x184),*(undefined2 *)(iVar7 + 0x186));
  if (SCARRY2(iVar2,*(int *)((int)*(undefined4 *)(iVar7 + 0x180) + 0x1e))) {
    FUN_1158_043e(0x1030);
  }
  FUN_1138_17bf();
  TFormSERE_Etudes_FormResize();
  return;
}



/* ---- TFormSERE_Etudes_FormShow @ 1030:2869  (43 octets) ---- */

void __stdcall16far TFormSERE_Etudes_FormShow(undefined4 param_1)

{
  FUN_1158_0444();
  TFormSERE_Etudes_FormResize((undefined2)param_1,param_1._2_2_,(undefined2)param_1,param_1._2_2_);
  FUN_1140_63a9((int)DAT_1160_2c2e,(int)((ulong)DAT_1160_2c2e >> 0x10),0xfffe);
  return;
}



/* ---- FUN_1030_2896 @ 1030:2896  (226 octets) ---- */

void __stdcall16far FUN_1030_2896(undefined4 param_1)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 unaff_SS;
  undefined *puVar3;
  undefined2 uVar4;
  undefined local_204 [256];
  int local_104;
  undefined local_102 [252];
  undefined2 uStack_6;
  
  uStack_6 = 0x28a1;
  FUN_1158_0444();
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  FUN_1158_17e7(0xff,local_102,unaff_SS,iVar1 + 0x31d,uVar2);
  local_104 = FUN_1158_1878(local_102,unaff_SS,0x2894,0x1158);
  if (0 < local_104) {
    FUN_1158_1975(1,local_104,local_102,unaff_SS);
    puVar3 = local_204;
    uVar4 = unaff_SS;
    FUN_1150_08a9(*(int *)(iVar1 + 0x318),*(int *)(iVar1 + 0x318) >> 0xf);
    FUN_1158_1916(local_104,0xff,local_102,unaff_SS,puVar3,uVar4);
  }
  local_104 = FUN_1158_1878(local_102,unaff_SS,0x2894,0x1158);
  if (0 < local_104) {
    FUN_1158_1975(1,local_104,local_102,unaff_SS);
    puVar3 = local_204;
    uVar4 = unaff_SS;
    FUN_1150_08a9(*(int *)(iVar1 + 0x31a),*(int *)(iVar1 + 0x31a) >> 0xf);
    FUN_1158_1916(local_104,0xff,local_102,unaff_SS,puVar3,uVar4);
  }
  FUN_1138_1d8c(iVar1,uVar2,local_102,unaff_SS);
  return;
}



/* ---- TFormSERE_Etudes_StringGrid1SelectCell @ 1030:2978  (21 octets) ---- */

void __stdcall16far
TFormSERE_Etudes_StringGrid1SelectCell(undefined2 param_1_00,undefined2 param_2,undefined *param_1)

{
  FUN_1158_0444();
  *param_1 = 1;
  return;
}



/* ---- TFormSERE_Etudes_StringGrid1DrawCell @ 1030:29a6  (1 octets) ---- */

/* WARNING: Removing unreachable block (ram,0x10302de4) */
/* WARNING: Removing unreachable block (ram,0x10302a2f) */

void TFormSERE_Etudes_StringGrid1DrawCell
               (undefined2 param_1,undefined4 param_2,byte param_3,undefined *param_4,int param_5,
               int param_6,uint param_7,int param_8,undefined2 param_9,undefined2 param_10)

{
  undefined4 *puVar1;
  undefined *puVar2;
  int *piVar3;
  undefined2 *puVar4;
  undefined4 uVar5;
  byte bVar6;
  undefined2 uVar7;
  undefined2 uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  undefined2 uVar13;
  int iVar14;
  int extraout_DX;
  int extraout_DX_00;
  undefined *puVar15;
  int *piVar16;
  undefined2 uVar17;
  undefined2 unaff_SS;
  bool bVar18;
  bool bVar19;
  long lVar20;
  undefined4 uVar21;
  byte *pbVar22;
  undefined auStack_35c [2];
  undefined auStack_35a [250];
  int iStack_260;
  undefined2 uStack_25e;
  int iStack_25c;
  undefined4 uStack_25a;
  undefined2 uStack_256;
  undefined2 uStack_254;
  int iStack_252;
  int iStack_250;
  char cStack_24d;
  int iStack_24c;
  int iStack_24a;
  int iStack_244;
  int iStack_242;
  uint uStack_23c;
  uint uStack_23a;
  uint uStack_238;
  int iStack_236;
  int iStack_234;
  undefined4 uStack_232;
  uint uStack_22e;
  int iStack_22c;
  uint uStack_22a;
  int iStack_228;
  uint uStack_226;
  int iStack_224;
  uint uStack_222;
  int iStack_220;
  undefined4 uStack_21e;
  undefined4 uStack_21a;
  int iStack_216;
  int iStack_214;
  uint uStack_212;
  int iStack_210;
  undefined2 uStack_20e;
  undefined2 uStack_20c;
  byte abStack_20a [3];
  char cStack_207;
  byte abStack_10a [3];
  byte bStack_107;
  int iStack_a;
  int iStack_8;
  uint uStack_6;
  
  uStack_6 = 0x29b1;
  FUN_1158_0444();
  piVar16 = &iStack_a;
  puVar15 = (undefined *)param_4;
  for (iVar14 = 8; iVar14 != 0; iVar14 = iVar14 + -1) {
    piVar3 = piVar16;
    piVar16 = (int *)((int)piVar16 + 1);
    puVar2 = puVar15;
    puVar15 = puVar15 + 1;
    *(undefined *)piVar3 = *puVar2;
  }
  uStack_212 = param_7;
  iStack_210 = param_8;
  iStack_216 = param_5;
  iStack_214 = param_6;
  uStack_25a = (undefined4 *)FUN_1158_2273(0xe4d,0x10f8,param_9,param_10);
  uVar17 = (undefined2)((ulong)uStack_25a >> 0x10);
  iVar14 = *(int *)((int)(undefined4 *)uStack_25a + 0xe6);
  iVar9 = *(int *)((undefined4 *)uStack_25a + 0x3a);
  uVar10 = (uint)(iVar14 == 0);
  lVar20 = CONCAT22(iVar9 - uVar10,iVar14 + -1);
  if (SBORROW2(iVar9,uVar10) != false) {
    lVar20 = FUN_1158_043e(0x1158);
  }
  uVar17 = (undefined2)((ulong)uStack_25a >> 0x10);
  uVar10 = *(uint *)((int)(undefined4 *)uStack_25a + 0xfe);
  if (((int)uVar10 >> 0xf == iStack_210) && (uVar10 == uStack_212)) {
    bVar6 = 1;
  }
  else {
    bVar6 = 0;
  }
  iVar14 = (int)param_2;
  uVar13 = (undefined2)((ulong)param_2 >> 0x10);
  if ((bool)(bVar6 & (iStack_216 == 0 && iStack_214 == 0) &
            *(int *)((int)(undefined4 *)uStack_25a + 0xfe) < lVar20)) {
    uVar21 = CONCAT22(iStack_210 + (uint)(0xfffe < uStack_212),uStack_212 + 1);
    if (SCARRY2(iStack_210,0) != SCARRY2(iStack_210,(uint)(0xfffe < uStack_212))) {
      uVar21 = FUN_1158_043e(0x1158);
    }
    iVar9 = FUN_10f8_6e30((undefined4 *)uStack_25a,(int)((ulong)uStack_25a >> 0x10),uVar21);
    iVar12 = FUN_10f8_6e30((undefined4 *)uStack_25a,(int)((ulong)uStack_25a >> 0x10),uStack_212,
                           iStack_210);
    if (iVar12 != iVar9) {
      uVar17 = (undefined2)((ulong)uStack_25a >> 0x10);
      if (SBORROW2(*(int *)((undefined4 *)uStack_25a + 0x3a),
                   (uint)(*(int *)((int)(undefined4 *)uStack_25a + 0xe6) == 0)) != false) {
        FUN_1158_043e(0x10f8);
      }
      iStack_25c = FUN_1158_0416();
      iVar9 = *(int *)((int)(undefined4 *)uStack_25a + 0xfe);
      iVar12 = iVar9 + 1;
      if (SCARRY2(iVar9,1)) {
        iVar12 = FUN_1158_043e(0x1158);
      }
      uVar17 = 0x1158;
      if (iVar12 <= iStack_25c) {
        while( true ) {
          iStack_250 = iVar12;
          iVar12 = iStack_250 >> 0xf;
          iVar9 = iStack_250;
          uVar7 = FUN_10f8_6e30((undefined4 *)uStack_25a,(int)((ulong)uStack_25a >> 0x10),uStack_212
                                ,iStack_210);
          uVar17 = 0x10f8;
          FUN_10f8_70c9((undefined4 *)uStack_25a,(int)((ulong)uStack_25a >> 0x10),uVar7,iVar9,iVar12
                       );
          if (iStack_250 == iStack_25c) break;
          iVar12 = iStack_250 + 1;
        }
      }
      puVar4 = (undefined2 *)((int)*uStack_25a + 0x50);
      (*(code *)*puVar4)(uVar17,(undefined4 *)uStack_25a,(int)((ulong)uStack_25a >> 0x10));
      TFormSERE_Etudes_FormResize(iVar14,uVar13,param_9,param_10);
    }
  }
  FUN_1158_161b(8,&uStack_23c,unaff_SS,&iStack_a,unaff_SS);
  FUN_1158_161b(8,&iStack_244,unaff_SS,&iStack_a,unaff_SS);
  iStack_244 = iStack_244 + 1;
  iStack_242 = iStack_242 + 1;
  uStack_25a = (undefined4 *)FUN_1158_2273(0xe4d,0x10f8,param_9,param_10);
  uVar21 = *(undefined4 *)((int)uStack_25a + 0xd8);
  uVar21 = *(undefined4 *)((int)uVar21 + 7);
  uVar17 = *(undefined2 *)((int)uVar21 + 0x12);
  uStack_256 = FUN_1158_0416();
  uStack_254 = uVar17;
  FUN_1128_2099((int)*(undefined4 *)((int)uStack_25a + 0xd8),
                (int)((ulong)*(undefined4 *)((int)uStack_25a + 0xd8) >> 0x10),
                *(undefined2 *)((int)uStack_25a + 0x34),*(undefined2 *)((int)uStack_25a + 0x36));
  uVar17 = *(undefined2 *)((int)uStack_25a + 0x3a);
  uStack_20e = FUN_1158_0416();
  uStack_20c = uVar17;
  if ((param_3 & 2) != 0 && *(char *)(iVar14 + 0x31c) == '\0') {
    uStack_20e = 0xfff2;
    uStack_20c = 0xffff;
    uVar21 = *(undefined4 *)((int)*(undefined4 *)((int)uStack_25a + 0xd8) + 7);
    FUN_1128_0fdf((int)uVar21,(int)((ulong)uVar21 >> 0x10),0xfff1,0xffff);
  }
  uVar17 = uStack_20c;
  uVar7 = FUN_1158_0416();
  uVar21 = *(undefined4 *)((int)*(undefined4 *)((int)uStack_25a + 0xd8) + 0xf);
  FUN_1128_1684((int)uVar21,(int)((ulong)uVar21 >> 0x10),uVar7,uVar17);
  FUN_1128_1ce5((int)*(undefined4 *)((int)uStack_25a + 0xd8),
                (int)((ulong)*(undefined4 *)((int)uStack_25a + 0xd8) >> 0x10),&iStack_a,unaff_SS);
  if ((param_3 & 4) == 0) {
    uVar21 = *(undefined4 *)((int)*(undefined4 *)((int)uStack_25a + 0xd8) + 7);
    iStack_25c = (int)((ulong)uVar21 >> 0x10);
    uStack_25e = (undefined2)uVar21;
    iVar9 = FUN_1128_11cc(uStack_25e,iStack_25c);
    iVar12 = (int)((long)iVar9 * 10);
    if ((long)iVar12 != (long)iVar9 * 10) {
      iVar12 = FUN_1158_043e(0x1128);
    }
    FUN_1128_11f5(uStack_25e,iStack_25c,iVar12 / 0xc);
    uVar10 = FUN_1128_121a(uStack_25e,iStack_25c);
    FUN_1128_1233(uStack_25e,iStack_25c,uVar10 & 0xfffe);
    FUN_1128_1278(uStack_25e,iStack_25c,2);
  }
  else {
    uVar17 = *(undefined2 *)((int)uStack_25a + 0x104);
    uStack_20e = FUN_1158_0416();
    uStack_20c = uVar17;
  }
  if ((param_3 & 4) != 0) {
    uVar17 = uStack_20c;
    uVar7 = FUN_1158_0416();
    uVar21 = *(undefined4 *)((int)*(undefined4 *)((int)uStack_25a + 0xd8) + 0xf);
    FUN_1128_1684((int)uVar21,(int)((ulong)uVar21 >> 0x10),uVar7,uVar17);
    FUN_1128_1ce5((int)*(undefined4 *)((int)uStack_25a + 0xd8),
                  (int)((ulong)*(undefined4 *)((int)uStack_25a + 0xd8) >> 0x10),&iStack_244,unaff_SS
                 );
  }
  puVar15 = auStack_35a;
  uVar17 = unaff_SS;
  uVar7 = FUN_1158_0416(puVar15);
  uVar8 = FUN_1158_0416(uVar7);
  FUN_10f8_9a68(uStack_25a,uVar8,uVar7);
  FUN_1158_17e7(0xff,abStack_10a,unaff_SS,puVar15,uVar17);
  iStack_234 = 1;
  if (2 < abStack_10a[0]) {
    iVar9 = FUN_1158_1878(abStack_10a,unaff_SS,0x299d,0x1158);
    if (iVar9 == 1) {
      iVar9 = bStack_107 - 0x30;
      if (SBORROW2((uint)bStack_107,0x30)) {
        iVar9 = FUN_1158_043e(0x1158);
      }
      iStack_234 = iVar9;
      FUN_1158_1975(3,1,abStack_10a,unaff_SS);
    }
  }
  iVar9 = uStack_238 - uStack_23c;
  if (SBORROW2(uStack_238,uStack_23c)) {
    iVar9 = FUN_1158_043e(0x1158);
  }
  uStack_232._0_2_ = iVar9 / iStack_234;
  uStack_232._2_2_ = (int)(uint)uStack_232 >> 0xf;
  uVar10 = iStack_234 - 1;
  if (SBORROW2(iStack_234,1)) {
    uVar10 = FUN_1158_043e(0x1158);
  }
  iVar9 = uStack_232._2_2_ - ((int)uVar10 >> 0xf);
  uVar21 = CONCAT22(iVar9 - (uint)((uint)uStack_232 < uVar10),(uint)uStack_232 - uVar10);
  if (SBORROW2(uStack_232._2_2_,(int)uVar10 >> 0xf) !=
      SBORROW2(iVar9,(uint)((uint)uStack_232 < uVar10))) {
    uVar21 = FUN_1158_043e(0x1158);
  }
  iVar9 = (int)((ulong)uVar21 >> 0x10);
  uStack_232 = uVar21;
  if (SCARRY2((int)uStack_23c >> 0xf,iVar9) !=
      SCARRY2(((int)uStack_23c >> 0xf) + iVar9,(uint)CARRY2(uStack_23c,(uint)uVar21))) {
    FUN_1158_043e(0x1158);
  }
  uStack_238 = FUN_1158_0416();
  iStack_25c = iStack_234;
  uVar21 = uStack_25a;
  if (0 < iStack_234) {
    iStack_250 = 1;
    while( true ) {
      if (iStack_250 == iStack_234) {
        uStack_238 = uStack_6;
      }
      iStack_252 = FUN_1158_1878(abStack_10a,unaff_SS,0x29a0,0x1158);
      if (iStack_252 < 1) {
        FUN_1158_17e7(0xff,abStack_20a,unaff_SS,abStack_10a,unaff_SS);
      }
      else {
        puVar15 = auStack_35c;
        pbVar22 = abStack_10a;
        uVar8 = 1;
        iVar9 = iStack_252 + -1;
        uVar17 = unaff_SS;
        uVar7 = unaff_SS;
        if (SBORROW2(iStack_252,1)) {
          iVar9 = FUN_1158_043e(0x1158,1,pbVar22);
        }
        FUN_1158_180b(iVar9,uVar8,pbVar22,uVar17);
        FUN_1158_17e7(0xff,abStack_20a,unaff_SS,puVar15,uVar7);
        pbVar22 = abStack_10a;
        uVar7 = 1;
        iVar9 = iStack_252 + 1;
        uVar17 = unaff_SS;
        if (SCARRY2(iStack_252,1)) {
          iVar9 = FUN_1158_043e(0x1158,1,pbVar22);
        }
        FUN_1158_1975(iVar9,uVar7,pbVar22,uVar17);
      }
      cStack_24d = 'g';
      uVar21 = uStack_25a;
      if (2 < abStack_20a[0]) {
        iVar9 = FUN_1158_1878(abStack_20a,unaff_SS,0x29a3,0x1158);
        uVar21 = uStack_25a;
        if (iVar9 == 1) {
          cStack_24d = cStack_207;
          FUN_1158_1975(3,1,abStack_20a,unaff_SS);
          uVar21 = uStack_25a;
        }
      }
      uStack_25a._2_2_ = (undefined2)((ulong)uVar21 >> 0x10);
      uStack_25a._0_2_ = (int)uVar21;
      puVar1 = (undefined4 *)((int)uStack_25a + 0xd8);
      uStack_25a = (undefined4 *)uVar21;
      uStack_222 = FUN_1128_2003((int)*puVar1,(int)((ulong)*puVar1 >> 0x10),abStack_20a,unaff_SS);
      iStack_220 = (int)uStack_222 >> 0xf;
      uVar17 = 0x1128;
      uStack_226 = FUN_1128_204e((int)*(undefined4 *)((int)uStack_25a + 0xd8),
                                 (int)((ulong)*(undefined4 *)((int)uStack_25a + 0xd8) >> 0x10),
                                 abStack_20a,unaff_SS);
      iStack_224 = (int)uStack_226 >> 0xf;
      uStack_21a._2_2_ = (int)uStack_23c >> 0xf;
      uStack_21a._0_2_ = uStack_23c;
      uStack_21e._2_2_ = (int)uStack_23a >> 0xf;
      uStack_21e._0_2_ = uStack_23a;
      uVar10 = uStack_238 - uStack_23c;
      if (SBORROW2(uStack_238,uStack_23c)) {
        uVar17 = 0x1158;
        uVar10 = FUN_1158_043e(0x1128);
      }
      iStack_228 = (int)uVar10 >> 0xf;
      uVar11 = iStack_236 - uStack_23a;
      uVar7 = uVar17;
      uStack_22a = uVar10;
      if (SBORROW2(iStack_236,uStack_23a)) {
        uVar7 = 0x1158;
        uVar11 = FUN_1158_043e(uVar17);
      }
      iStack_22c = (int)uVar11 >> 0xf;
      uStack_22e = uVar11;
      if (cStack_24d == 'c') {
        if ((iStack_220 < iStack_228) ||
           ((uVar21 = CONCAT22(uStack_21a._2_2_,(uint)uStack_21a), iStack_220 <= iStack_228 &&
            (uVar21 = CONCAT22(uStack_21a._2_2_,(uint)uStack_21a), uStack_222 < uStack_22a)))) {
          iVar9 = (iStack_228 - iStack_220) - (uint)(uStack_22a < uStack_222);
          if (SBORROW2(iStack_228,iStack_220) !=
              SBORROW2(iStack_228 - iStack_220,(uint)(uStack_22a < uStack_222))) {
            FUN_1158_043e(uVar7);
            iVar9 = extraout_DX;
          }
          uVar10 = FUN_1158_1670();
          uVar21 = CONCAT22(iVar9 + uStack_21a._2_2_ + (uint)CARRY2(uVar10,(uint)uStack_21a),
                            uVar10 + (uint)uStack_21a);
          if (SCARRY2(iVar9,uStack_21a._2_2_) !=
              SCARRY2(iVar9 + uStack_21a._2_2_,(uint)CARRY2(uVar10,(uint)uStack_21a))) {
            uVar21 = FUN_1158_043e(0x1158);
          }
          uVar7 = 0x1158;
        }
      }
      else if (cStack_24d == 'd') {
        if ((iStack_220 < iStack_228) ||
           ((uVar21 = CONCAT22(uStack_21a._2_2_,(uint)uStack_21a), iStack_220 <= iStack_228 &&
            (uVar21 = CONCAT22(uStack_21a._2_2_,(uint)uStack_21a), uStack_222 < uStack_22a)))) {
          iVar9 = ((int)uStack_238 >> 0xf) - iStack_220;
          uVar21 = CONCAT22(iVar9 - (uint)(uStack_238 < uStack_222),uStack_238 - uStack_222);
          uVar17 = uVar7;
          if (SBORROW2((int)uStack_238 >> 0xf,iStack_220) !=
              SBORROW2(iVar9,(uint)(uStack_238 < uStack_222))) {
            uVar17 = 0x1158;
            uVar21 = FUN_1158_043e(uVar7);
          }
          iVar9 = (int)((ulong)uVar21 >> 0x10);
          uVar10 = (uint)((uint)uVar21 < 2);
          uVar7 = uVar17;
          uVar21 = CONCAT22(iVar9 - uVar10,(uint)uVar21 - 2);
          if (SBORROW2(iVar9,uVar10) != false) {
            uVar7 = 0x1158;
            uVar21 = FUN_1158_043e(uVar17);
          }
        }
      }
      else {
        uVar21 = CONCAT22(uStack_21a._2_2_ + (uint)(0xfffd < (uint)uStack_21a),(uint)uStack_21a + 2)
        ;
        if (SCARRY2(uStack_21a._2_2_,0) !=
            SCARRY2(uStack_21a._2_2_,(uint)(0xfffd < (uint)uStack_21a))) {
          uVar21 = FUN_1158_043e(uVar7);
          uVar7 = 0x1158;
        }
      }
      uStack_21a = uVar21;
      if ((iStack_224 < iStack_22c) ||
         ((uVar21 = CONCAT22(uStack_21e._2_2_,(uint)uStack_21e), iStack_224 <= iStack_22c &&
          (uVar21 = CONCAT22(uStack_21e._2_2_,(uint)uStack_21e), uStack_226 < uStack_22e)))) {
        iVar9 = (iStack_22c - iStack_224) - (uint)(uStack_22e < uStack_226);
        if (SBORROW2(iStack_22c,iStack_224) !=
            SBORROW2(iStack_22c - iStack_224,(uint)(uStack_22e < uStack_226))) {
          FUN_1158_043e(uVar7);
          iVar9 = extraout_DX_00;
        }
        uVar10 = FUN_1158_1670();
        uVar21 = CONCAT22(iVar9 + uStack_21e._2_2_ + (uint)CARRY2(uVar10,(uint)uStack_21e),
                          uVar10 + (uint)uStack_21e);
        if (SCARRY2(iVar9,uStack_21e._2_2_) !=
            SCARRY2(iVar9 + uStack_21e._2_2_,(uint)CARRY2(uVar10,(uint)uStack_21e))) {
          uVar21 = FUN_1158_043e(0x1158);
        }
      }
      uStack_21e = uVar21;
      FUN_1158_161b(8,&iStack_24c,unaff_SS,&uStack_23c,unaff_SS);
      iVar9 = iStack_24c + 1;
      if (SCARRY2(iStack_24c,1)) {
        iVar9 = FUN_1158_043e(0x1158);
      }
      iVar12 = iStack_24a + 1;
      iStack_24c = iVar9;
      if (SCARRY2(iStack_24a,1)) {
        iVar12 = FUN_1158_043e(0x1158);
      }
      piVar16 = &iStack_24c;
      uVar17 = unaff_SS;
      iStack_24a = iVar12;
      uVar7 = FUN_1158_0416(piVar16);
      uVar8 = FUN_1158_0416(uVar7);
      FUN_1128_1f78((int)*(undefined4 *)((int)uStack_25a + 0xd8),
                    (int)((ulong)*(undefined4 *)((int)uStack_25a + 0xd8) >> 0x10),abStack_20a,
                    unaff_SS,uVar8,uVar7,piVar16,uVar17);
      uStack_25e = (undefined2)((ulong)*(undefined4 *)((int)uStack_25a + 0xd8) >> 0x10);
      iStack_260 = (int)*(undefined4 *)((int)uStack_25a + 0xd8);
      uVar17 = 0x1128;
      FUN_1128_13da((int)*(undefined4 *)(iStack_260 + 0xb),
                    (int)((ulong)*(undefined4 *)(iStack_260 + 0xb) >> 0x10),0,0);
      iVar9 = *(int *)((int)uStack_25a + 0x100) + -1;
      if (SBORROW2(*(int *)((int)uStack_25a + 0x100),1)) {
        uVar17 = 0x1158;
        iVar9 = FUN_1158_043e(0x1128);
      }
      if ((iVar9 >> 0xf == iStack_214) && (iVar9 == iStack_216)) {
        FUN_1128_14f5((int)*(undefined4 *)(iStack_260 + 0xb),
                      (int)((ulong)*(undefined4 *)(iStack_260 + 0xb) >> 0x10),1);
        FUN_1128_14b0((int)*(undefined4 *)(iStack_260 + 0xb),
                      (int)((ulong)*(undefined4 *)(iStack_260 + 0xb) >> 0x10),0);
        FUN_1128_1db8(iStack_260,uStack_25e,iStack_236,uStack_23c);
        uVar17 = 0x1128;
        FUN_1128_1d7b(iStack_260,uStack_25e,iStack_236,uStack_238);
      }
      if (1 < iStack_250 && iStack_250 <= iStack_234) {
        FUN_1128_14b0((int)*(undefined4 *)(iStack_260 + 0xb),
                      (int)((ulong)*(undefined4 *)(iStack_260 + 0xb) >> 0x10),0);
        FUN_1128_14f5((int)*(undefined4 *)(iStack_260 + 0xb),
                      (int)((ulong)*(undefined4 *)(iStack_260 + 0xb) >> 0x10),1);
        iVar9 = uStack_23a - 1;
        uVar10 = uStack_23c;
        if (SBORROW2(uStack_23a,1)) {
          iVar9 = FUN_1158_043e(0x1128,uStack_23c);
        }
        FUN_1128_1db8(iStack_260,uStack_25e,iVar9,uVar10);
        uVar17 = 0x1128;
        FUN_1128_1d7b(iStack_260,uStack_25e,iStack_236,uStack_23c);
      }
      if (iStack_250 == iStack_234) {
        FUN_1128_14f5((int)*(undefined4 *)(iStack_260 + 0xb),
                      (int)((ulong)*(undefined4 *)(iStack_260 + 0xb) >> 0x10),1);
        FUN_1128_14b0((int)*(undefined4 *)(iStack_260 + 0xb),
                      (int)((ulong)*(undefined4 *)(iStack_260 + 0xb) >> 0x10),0);
        FUN_1128_1db8(iStack_260,uStack_25e,uStack_23a,uStack_238);
        uVar17 = 0x1128;
        FUN_1128_1d7b(iStack_260,uStack_25e,iStack_236,uStack_238);
      }
      uVar10 = uStack_238 + 2;
      uVar7 = uVar17;
      uVar21 = uStack_232;
      if (SCARRY2(uStack_238,2)) {
        uVar7 = 0x1158;
        uVar10 = FUN_1158_043e(uVar17);
        uVar21 = uStack_232;
      }
      uStack_232._2_2_ = (int)((ulong)uVar21 >> 0x10);
      uStack_232._0_2_ = (uint)uVar21;
      bVar18 = CARRY2(uVar10,(uint)uStack_232);
      bVar19 = SCARRY2((int)uVar10 >> 0xf,uStack_232._2_2_);
      iVar9 = ((int)uVar10 >> 0xf) + uStack_232._2_2_;
      uStack_23c = uVar10;
      uStack_232 = uVar21;
      if (bVar19 != SCARRY2(iVar9,(uint)bVar18)) {
        FUN_1158_043e(uVar7);
      }
      uStack_238 = FUN_1158_0416();
      uVar21 = uStack_25a;
      if (iStack_250 == iStack_25c) break;
      iStack_250 = iStack_250 + 1;
    }
  }
  uStack_25a._2_2_ = (undefined2)((ulong)uVar21 >> 0x10);
  uStack_25a._0_2_ = (int)uVar21;
  if (*(char *)(iVar14 + 0x31c) != '\0') {
    if ((0 < iStack_214) || ((-1 < iStack_214 && (iStack_216 != 0)))) {
      iStack_8 = iStack_8 + -1;
    }
    if ((0 < iStack_210) || ((-1 < iStack_210 && (uStack_212 != 0)))) {
      iStack_a = iStack_a + -1;
    }
    uStack_6 = uStack_6 + 1;
    uVar5 = *(undefined4 *)((int)*(undefined4 *)((int)uStack_25a + 0xd8) + 0xf);
    uStack_25a = (undefined4 *)uVar21;
    FUN_1128_1684((int)uVar5,(int)((ulong)uVar5 >> 0x10),0,0);
    uVar21 = *(undefined4 *)((int)*(undefined4 *)((int)uStack_25a + 0xd8) + 0xf);
    FUN_1128_177c((int)uVar21,(int)((ulong)uVar21 >> 0x10),3);
    FUN_1128_1d30((int)*(undefined4 *)((int)uStack_25a + 0xd8),
                  (int)((ulong)*(undefined4 *)((int)uStack_25a + 0xd8) >> 0x10),&iStack_a,unaff_SS);
    uVar21 = uStack_25a;
  }
  uVar17 = uStack_254;
  uStack_25a = (undefined4 *)uVar21;
  uVar13 = FUN_1158_0416();
  uVar21 = *(undefined4 *)((int)*(undefined4 *)((int)uStack_25a + 0xd8) + 7);
  FUN_1128_0fdf((int)uVar21,(int)((ulong)uVar21 >> 0x10),uVar13,uVar17);
  return;
}



/* ---- FUN_1030_3341 @ 1030:3341  (293 octets) ---- */

void __stdcall16far FUN_1030_3341(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  bool bVar8;
  int local_8;
  int local_6;
  
  FUN_1158_0444();
  local_6 = FUN_1030_1e41((int)param_2,param_2._2_2_);
  uVar6 = 0x10f8;
  iVar1 = FUN_10f8_6f52((int)param_2,param_2._2_2_);
  uVar2 = iVar1 + *(int *)((int)param_2 + 0xfe);
  if (SCARRY2(iVar1,*(int *)((int)param_2 + 0xfe))) {
    uVar6 = 0x1158;
    uVar2 = FUN_1158_043e(0x10f8);
  }
  iVar1 = *(int *)((int)param_2 + 0x106);
  iVar3 = uVar2 - 1;
  uVar7 = uVar6;
  if (SBORROW2(uVar2,1)) {
    uVar7 = 0x1158;
    iVar3 = FUN_1158_043e(uVar6);
  }
  if (-1 < iVar3) {
    local_8 = 0;
    while( true ) {
      uVar6 = 0x10f8;
      iVar4 = FUN_10f8_6e30((int)param_2,param_2._2_2_,local_8,local_8 >> 0xf);
      iVar5 = iVar4 + iVar1;
      if (SCARRY2(iVar4,iVar1)) {
        uVar6 = 0x1158;
        iVar5 = FUN_1158_043e(0x10f8);
      }
      iVar1 = iVar5 + *(int *)((int)param_2 + 0x106);
      uVar7 = uVar6;
      if (SCARRY2(iVar5,*(int *)((int)param_2 + 0x106))) {
        uVar7 = 0x1158;
        iVar1 = FUN_1158_043e(uVar6);
      }
      if (local_8 == iVar3) break;
      local_8 = local_8 + 1;
    }
  }
  if (((int)uVar2 >> 0xf < *(int *)((int)param_2 + 0xe8)) ||
     ((uVar6 = uVar7, (int)uVar2 >> 0xf <= *(int *)((int)param_2 + 0xe8) &&
      (uVar2 < *(uint *)((int)param_2 + 0xe6))))) {
    uVar6 = 0x14d0;
    iVar3 = GETSYSTEMMETRICS(uVar7,3);
    bVar8 = SCARRY2(iVar3,local_6);
    local_6 = iVar3 + local_6;
    if (bVar8) {
      uVar6 = 0x1158;
      local_6 = FUN_1158_043e(0x14d0);
    }
  }
  iVar3 = local_6 + *(int *)((int)param_2 + 0x20);
  uVar7 = uVar6;
  if (SCARRY2(local_6,*(int *)((int)param_2 + 0x20))) {
    uVar7 = 0x1158;
    iVar3 = FUN_1158_043e(uVar6);
  }
  iVar4 = iVar1 + *(int *)((int)param_2 + 0x1e);
  if (SCARRY2(iVar1,*(int *)((int)param_2 + 0x1e))) {
    iVar4 = FUN_1158_043e(uVar7);
  }
  uVar6 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  if (*(int *)(iVar1 + 0x24) != iVar3) {
    FUN_1138_17e1(iVar1,uVar6,iVar3);
  }
  if (*(int *)(iVar1 + 0x22) != iVar4) {
    FUN_1138_17bf(iVar1,uVar6,iVar4);
  }
  return;
}



/* ---- TFormSERE_Etudes_FormResize @ 1030:3466  (1587 octets) ---- */

void __stdcall16far TFormSERE_Etudes_FormResize(undefined4 param_1,uint param_2,int param_3)

{
  int *piVar1;
  long lVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  undefined2 uVar10;
  undefined2 uVar11;
  undefined2 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  int local_6;
  
  FUN_1158_0444();
  iVar9 = (int)((ulong)param_1 >> 0x10);
  uVar8 = (uint)param_1;
  if (*(char *)(uVar8 + 0x31c) == '\0') {
    uVar11 = 0x1138;
    iVar6 = FUN_1138_18a9(uVar8,iVar9);
    piVar1 = (int *)((int)*(undefined4 *)(uVar8 + 0x180) + 0x1e);
    iVar5 = iVar6 - *piVar1;
    if (SBORROW2(iVar6,*piVar1)) {
      uVar11 = 0x1158;
      iVar5 = FUN_1158_043e(0x1138);
    }
  }
  else {
    iVar6 = *(int *)((int)*(undefined4 *)(uVar8 + 0x17c) + 0x22);
    piVar1 = (int *)((int)*(undefined4 *)(uVar8 + 0x180) + 0x1e);
    iVar5 = iVar6 - *piVar1;
    if (SBORROW2(iVar6,*piVar1)) {
      iVar5 = FUN_1158_043e(0x1158);
    }
    uVar11 = 0x1158;
  }
  if ((param_3 == *(int *)(uVar8 + 0x186)) && (param_2 == *(uint *)(uVar8 + 0x184))) {
    bVar3 = 1;
  }
  else {
    bVar3 = 0;
  }
  if ((param_3 == iVar9) && (param_2 == uVar8)) {
    bVar4 = 1;
  }
  else {
    bVar4 = 0;
  }
  if ((bool)(bVar4 | bVar3)) {
    FUN_1138_17bf((int)*(undefined4 *)(uVar8 + 0x180),
                  (int)((ulong)*(undefined4 *)(uVar8 + 0x180) >> 0x10),iVar5);
    uVar11 = 0x1030;
    FUN_1030_3341(*(undefined2 *)(uVar8 + 0x180),*(undefined2 *)(uVar8 + 0x182),
                  *(undefined2 *)(uVar8 + 0x184),*(undefined2 *)(uVar8 + 0x186));
  }
  if ((param_3 == *(int *)(uVar8 + 0x192)) && (param_2 == *(uint *)(uVar8 + 400))) {
    bVar3 = 1;
  }
  else {
    bVar3 = 0;
  }
  if ((param_3 == iVar9) && (param_2 == uVar8)) {
    bVar4 = 1;
  }
  else {
    bVar4 = 0;
  }
  if ((bool)(bVar4 | bVar3)) {
    FUN_1138_17bf((int)*(undefined4 *)(uVar8 + 0x18c),
                  (int)((ulong)*(undefined4 *)(uVar8 + 0x18c) >> 0x10),iVar5);
    uVar11 = 0x1030;
    FUN_1030_3341(*(undefined2 *)(uVar8 + 0x18c),*(undefined2 *)(uVar8 + 0x18e),
                  *(undefined2 *)(uVar8 + 400),*(undefined2 *)(uVar8 + 0x192));
  }
  if ((param_3 == *(int *)(uVar8 + 0x19e)) && (param_2 == *(uint *)(uVar8 + 0x19c))) {
    bVar3 = 1;
  }
  else {
    bVar3 = 0;
  }
  if ((param_3 == iVar9) && (param_2 == uVar8)) {
    bVar4 = 1;
  }
  else {
    bVar4 = 0;
  }
  if ((bool)(bVar4 | bVar3)) {
    FUN_1138_17bf((int)*(undefined4 *)(uVar8 + 0x194),
                  (int)((ulong)*(undefined4 *)(uVar8 + 0x194) >> 0x10),iVar5);
    uVar11 = 0x1030;
    FUN_1030_3341(*(undefined2 *)(uVar8 + 0x194),*(undefined2 *)(uVar8 + 0x196),
                  *(undefined2 *)(uVar8 + 0x19c),*(undefined2 *)(uVar8 + 0x19e));
  }
  if ((param_3 == *(int *)(uVar8 + 0x1aa)) && (param_2 == *(uint *)(uVar8 + 0x1a8))) {
    bVar3 = 1;
  }
  else {
    bVar3 = 0;
  }
  if ((param_3 == iVar9) && (param_2 == uVar8)) {
    bVar4 = 1;
  }
  else {
    bVar4 = 0;
  }
  if ((bool)(bVar4 | bVar3)) {
    FUN_1138_17bf((int)*(undefined4 *)(uVar8 + 0x1a0),
                  (int)((ulong)*(undefined4 *)(uVar8 + 0x1a0) >> 0x10),iVar5);
    uVar11 = 0x1030;
    FUN_1030_3341(*(undefined2 *)(uVar8 + 0x1a0),*(undefined2 *)(uVar8 + 0x1a2),
                  *(undefined2 *)(uVar8 + 0x1a8),*(undefined2 *)(uVar8 + 0x1aa));
  }
  if ((param_3 == *(int *)(uVar8 + 0x1b6)) && (param_2 == *(uint *)(uVar8 + 0x1b4))) {
    bVar3 = 1;
  }
  else {
    bVar3 = 0;
  }
  if ((param_3 == iVar9) && (param_2 == uVar8)) {
    bVar4 = 1;
  }
  else {
    bVar4 = 0;
  }
  if ((bool)(bVar4 | bVar3)) {
    FUN_1138_17bf((int)*(undefined4 *)(uVar8 + 0x1ac),
                  (int)((ulong)*(undefined4 *)(uVar8 + 0x1ac) >> 0x10),iVar5);
    uVar11 = 0x1030;
    FUN_1030_3341(*(undefined2 *)(uVar8 + 0x1ac),*(undefined2 *)(uVar8 + 0x1ae),
                  *(undefined2 *)(uVar8 + 0x1b4),*(undefined2 *)(uVar8 + 0x1b6));
  }
  if ((param_3 == *(int *)(uVar8 + 0x1c2)) && (param_2 == *(uint *)(uVar8 + 0x1c0))) {
    bVar3 = 1;
  }
  else {
    bVar3 = 0;
  }
  if ((param_3 == iVar9) && (param_2 == uVar8)) {
    bVar4 = 1;
  }
  else {
    bVar4 = 0;
  }
  if ((bool)(bVar4 | bVar3)) {
    FUN_1138_17bf((int)*(undefined4 *)(uVar8 + 0x1b8),
                  (int)((ulong)*(undefined4 *)(uVar8 + 0x1b8) >> 0x10),iVar5);
    uVar11 = 0x1030;
    FUN_1030_3341(*(undefined2 *)(uVar8 + 0x1b8),*(undefined2 *)(uVar8 + 0x1ba),
                  *(undefined2 *)(uVar8 + 0x1c0),*(undefined2 *)(uVar8 + 0x1c2));
  }
  if ((param_3 == *(int *)(uVar8 + 0x1ca)) && (param_2 == *(uint *)(uVar8 + 0x1c8))) {
    bVar3 = 1;
  }
  else {
    bVar3 = 0;
  }
  if ((param_3 == iVar9) && (param_2 == uVar8)) {
    bVar4 = 1;
  }
  else {
    bVar4 = 0;
  }
  if ((bool)(bVar4 | bVar3)) {
    FUN_1138_17bf((int)*(undefined4 *)(uVar8 + 0x1c4),
                  (int)((ulong)*(undefined4 *)(uVar8 + 0x1c4) >> 0x10),iVar5);
    uVar11 = 0x1030;
    FUN_1030_3341(*(undefined2 *)(uVar8 + 0x1c4),*(undefined2 *)(uVar8 + 0x1c6),
                  *(undefined2 *)(uVar8 + 0x1c8),*(undefined2 *)(uVar8 + 0x1ca));
  }
  if ((param_3 == iVar9) && (param_2 == uVar8)) {
    uVar10 = (undefined2)((ulong)*(undefined4 *)(uVar8 + 0x180) >> 0x10);
    iVar5 = (int)*(undefined4 *)(uVar8 + 0x180);
    uVar12 = 0x14d0;
    iVar6 = GETSYSTEMMETRICS(uVar11,3);
    uVar13 = CONCAT22(iVar6 / 2,*(int *)(iVar5 + 0x20) + *(int *)(iVar5 + 0x24));
    if (SCARRY2(*(int *)(iVar5 + 0x20),*(int *)(iVar5 + 0x24))) {
      uVar12 = 0x1158;
      uVar13 = FUN_1158_043e(0x14d0);
    }
    iVar5 = (int)((ulong)uVar13 >> 0x10);
    local_6 = (int)uVar13 + iVar5;
    uVar11 = uVar12;
    if (SCARRY2((int)uVar13,iVar5)) {
      uVar11 = 0x1158;
      local_6 = FUN_1158_043e(uVar12);
    }
    uVar10 = (undefined2)((ulong)*(undefined4 *)(uVar8 + 0x18c) >> 0x10);
    iVar5 = (int)*(undefined4 *)(uVar8 + 0x18c);
    if (*(char *)(iVar5 + 0x29) != '\0') {
      uVar11 = uVar10;
      FUN_1138_179d(iVar5,uVar10,local_6);
      iVar6 = 0x1138;
      uVar12 = 0x14d0;
      iVar5 = GETSYSTEMMETRICS(uVar10,3);
      uVar13 = CONCAT22(iVar5 / 2,local_6 + *(int *)(iVar6 + 0x24));
      if (SCARRY2(local_6,*(int *)(iVar6 + 0x24))) {
        uVar12 = 0x1158;
        uVar13 = FUN_1158_043e(0x14d0);
      }
      iVar5 = (int)((ulong)uVar13 >> 0x10);
      local_6 = (int)uVar13 + iVar5;
      uVar11 = uVar12;
      if (SCARRY2((int)uVar13,iVar5)) {
        uVar11 = 0x1158;
        local_6 = FUN_1158_043e(uVar12);
      }
    }
    uVar10 = (undefined2)((ulong)*(undefined4 *)(uVar8 + 0x194) >> 0x10);
    iVar5 = (int)*(undefined4 *)(uVar8 + 0x194);
    if (*(char *)(iVar5 + 0x29) != '\0') {
      uVar11 = uVar10;
      FUN_1138_179d(iVar5,uVar10,local_6);
      iVar6 = 0x1138;
      uVar12 = 0x14d0;
      iVar5 = GETSYSTEMMETRICS(uVar10,3);
      uVar13 = CONCAT22(iVar5 / 2,local_6 + *(int *)(iVar6 + 0x24));
      if (SCARRY2(local_6,*(int *)(iVar6 + 0x24))) {
        uVar12 = 0x1158;
        uVar13 = FUN_1158_043e(0x14d0);
      }
      iVar5 = (int)((ulong)uVar13 >> 0x10);
      local_6 = (int)uVar13 + iVar5;
      uVar11 = uVar12;
      if (SCARRY2((int)uVar13,iVar5)) {
        uVar11 = 0x1158;
        local_6 = FUN_1158_043e(uVar12);
      }
    }
    uVar10 = (undefined2)((ulong)*(undefined4 *)(uVar8 + 0x1a0) >> 0x10);
    iVar5 = (int)*(undefined4 *)(uVar8 + 0x1a0);
    if (*(char *)(iVar5 + 0x29) != '\0') {
      uVar11 = uVar10;
      FUN_1138_179d(iVar5,uVar10,local_6);
      iVar6 = 0x1138;
      uVar12 = 0x14d0;
      iVar5 = GETSYSTEMMETRICS(uVar10,3);
      uVar13 = CONCAT22(iVar5 / 2,local_6 + *(int *)(iVar6 + 0x24));
      if (SCARRY2(local_6,*(int *)(iVar6 + 0x24))) {
        uVar12 = 0x1158;
        uVar13 = FUN_1158_043e(0x14d0);
      }
      iVar5 = (int)((ulong)uVar13 >> 0x10);
      local_6 = (int)uVar13 + iVar5;
      uVar11 = uVar12;
      if (SCARRY2((int)uVar13,iVar5)) {
        uVar11 = 0x1158;
        local_6 = FUN_1158_043e(uVar12);
      }
    }
    uVar10 = (undefined2)((ulong)*(undefined4 *)(uVar8 + 0x1ac) >> 0x10);
    iVar5 = (int)*(undefined4 *)(uVar8 + 0x1ac);
    if (*(char *)(iVar5 + 0x29) != '\0') {
      uVar11 = uVar10;
      FUN_1138_179d(iVar5,uVar10,local_6);
      iVar6 = 0x1138;
      uVar12 = 0x14d0;
      iVar5 = GETSYSTEMMETRICS(uVar10,3);
      uVar13 = CONCAT22(iVar5 / 2,local_6 + *(int *)(iVar6 + 0x24));
      if (SCARRY2(local_6,*(int *)(iVar6 + 0x24))) {
        uVar12 = 0x1158;
        uVar13 = FUN_1158_043e(0x14d0);
      }
      iVar5 = (int)((ulong)uVar13 >> 0x10);
      local_6 = (int)uVar13 + iVar5;
      uVar11 = uVar12;
      if (SCARRY2((int)uVar13,iVar5)) {
        uVar11 = 0x1158;
        local_6 = FUN_1158_043e(uVar12);
      }
    }
    uVar10 = (undefined2)((ulong)*(undefined4 *)(uVar8 + 0x1b8) >> 0x10);
    iVar5 = (int)*(undefined4 *)(uVar8 + 0x1b8);
    if (*(char *)(iVar5 + 0x29) != '\0') {
      uVar11 = uVar10;
      FUN_1138_179d(iVar5,uVar10,local_6);
      iVar6 = 0x1138;
      uVar12 = 0x14d0;
      iVar5 = GETSYSTEMMETRICS(uVar10,3);
      uVar13 = CONCAT22(iVar5 / 2,local_6 + *(int *)(iVar6 + 0x24));
      if (SCARRY2(local_6,*(int *)(iVar6 + 0x24))) {
        uVar12 = 0x1158;
        uVar13 = FUN_1158_043e(0x14d0);
      }
      iVar5 = (int)((ulong)uVar13 >> 0x10);
      local_6 = (int)uVar13 + iVar5;
      uVar11 = uVar12;
      if (SCARRY2((int)uVar13,iVar5)) {
        uVar11 = 0x1158;
        local_6 = FUN_1158_043e(uVar12);
      }
    }
    if (*(char *)(uVar8 + 0x31c) == '\0') {
      uVar13 = *(undefined4 *)(uVar8 + 0x1c4);
      uVar10 = (undefined2)((ulong)uVar13 >> 0x10);
      if (*(char *)((int)uVar13 + 0x29) != '\0') {
        FUN_1138_179d((int)uVar13,uVar10,local_6);
        uVar13 = CONCAT22((int)((ulong)uVar13 >> 0x10),0x1138);
        uVar12 = 0x14d0;
        iVar5 = GETSYSTEMMETRICS(uVar10,3);
        piVar1 = (int *)((int)uVar13 + 0x24);
        uVar14 = CONCAT22(iVar5 / 2,local_6 + *piVar1);
        if (SCARRY2(local_6,*piVar1)) {
          uVar12 = 0x1158;
          uVar14 = FUN_1158_043e(0x14d0);
        }
        iVar5 = (int)((ulong)uVar14 >> 0x10);
        local_6 = (int)uVar14 + iVar5;
        uVar11 = uVar12;
        if (SCARRY2((int)uVar14,iVar5)) {
          uVar11 = 0x1158;
          local_6 = FUN_1158_043e(uVar12);
        }
      }
    }
    else {
      uVar13 = *(undefined4 *)(uVar8 + 0x1c4);
      uVar10 = (undefined2)((ulong)uVar13 >> 0x10);
      if (*(char *)((int)uVar13 + 0x29) != '\0') {
        FUN_1138_179d((int)uVar13,uVar10,*(undefined2 *)((int)*(undefined4 *)(uVar8 + 0x1b8) + 0x20)
                     );
        uVar10 = 0x14d0;
        uVar11 = GETSYSTEMMETRICS(0x1138,2);
        iVar5 = *(int *)((int)*(undefined4 *)(uVar8 + 0x1b8) + 0x1e);
        piVar1 = (int *)((int)*(undefined4 *)(uVar8 + 0x1b8) + 0x22);
        uVar14 = CONCAT22(uVar11,iVar5 + *piVar1);
        if (SCARRY2(iVar5,*piVar1)) {
          uVar10 = 0x1158;
          uVar14 = FUN_1158_043e(0x14d0);
        }
        iVar6 = (int)((ulong)uVar14 >> 0x10);
        iVar5 = (int)uVar14 + iVar6;
        if (SCARRY2((int)uVar14,iVar6)) {
          iVar5 = FUN_1158_043e(uVar10);
        }
        uVar11 = 0x1138;
        FUN_1138_177b((int)uVar13,(int)((ulong)uVar13 >> 0x10),iVar5);
      }
    }
    piVar1 = (int *)((int)*(undefined4 *)(uVar8 + 0x290) + 0x24);
    iVar5 = local_6 + *piVar1;
    uVar10 = uVar11;
    if (SCARRY2(local_6,*piVar1)) {
      uVar10 = 0x1158;
      iVar5 = FUN_1158_043e(uVar11,uVar13);
    }
    uVar13 = *(undefined4 *)(uVar8 + 0x17c);
    lVar2 = (long)*(int *)((int)uVar13 + 0xe0) * 2;
    iVar6 = (int)lVar2;
    uVar11 = uVar10;
    if (iVar6 != lVar2) {
      uVar11 = 0x1158;
      iVar6 = FUN_1158_043e(uVar10);
    }
    iVar7 = iVar6 + iVar5;
    uVar10 = uVar11;
    if (SCARRY2(iVar6,iVar5)) {
      uVar10 = 0x1158;
      iVar7 = FUN_1158_043e(uVar11);
    }
    iVar5 = iVar7 + 6;
    if (SCARRY2(iVar7,6)) {
      iVar5 = FUN_1158_043e(uVar10);
    }
    param_2 = FUN_1138_17e1((int)uVar13,(int)((ulong)uVar13 >> 0x10),iVar5);
  }
  param_2 = param_2 & 0xff00;
  if (*(char *)(uVar8 + 0xee) == '\x02') {
    param_2 = param_2 + 1;
  }
  FUN_1130_1275((int)*(undefined4 *)(uVar8 + 0x1ec),
                (int)((ulong)*(undefined4 *)(uVar8 + 0x1ec) >> 0x10),param_2);
  return;
}



/* ---- FUN_1030_3a99 @ 1030:3a99  (34 octets) ---- */

void __stdcall16far FUN_1030_3a99(undefined4 param_1)

{
  undefined2 uVar1;
  
  FUN_1158_0444();
  uVar1 = (undefined2)((ulong)param_1 >> 0x10);
  FUN_1030_081c(0,*(undefined2 *)((int)param_1 + 0x31a),*(undefined2 *)((int)param_1 + 0x318));
  return;
}



/* ---- TFormSERE_Etudes_Imprimer1Click @ 1030:3ac1  (1 octets) ---- */

void TFormSERE_Etudes_Imprimer1Click(undefined2 param_1,undefined4 param_2)

{
  char cVar1;
  undefined extraout_AH;
  int iVar2;
  undefined2 uVar3;
  undefined2 uStack_1c;
  undefined *puStack_1a;
  undefined2 uStack_18;
  undefined2 uStack_16;
  undefined2 uStack_14;
  char *pcStack_12;
  undefined2 uStack_10;
  int iStack_e;
  undefined2 uStack_c;
  undefined4 uStack_a;
  undefined2 uStack_6;
  
  uStack_6 = 0x3acc;
  FUN_1158_0444();
  uVar3 = (undefined2)((ulong)param_2 >> 0x10);
  iVar2 = (int)param_2;
  uStack_c = (undefined2)((ulong)*(undefined4 *)(iVar2 + 0x234) >> 0x10);
  iStack_e = (int)*(undefined4 *)(iVar2 + 0x234);
  uStack_10 = 0x1158;
  pcStack_12 = (char *)0x3ade;
  cVar1 = FUN_1108_2f17();
  if (cVar1 == '\0') {
    return;
  }
  uStack_6 = *(undefined2 *)(iVar2 + 0xe4);
  uStack_c = *(undefined2 *)(iVar2 + 0x182);
  iStack_e = *(undefined2 *)(iVar2 + 0x180);
  uStack_14 = 0x1108;
  uStack_16 = 0x3b09;
  pcStack_12 = (char *)iVar2;
  uStack_10 = uVar3;
  FUN_1140_3fd0();
  uStack_10 = CONCAT11(extraout_AH,1);
  pcStack_12 = (char *)s_windows_1160_100f + 1;
  uStack_14 = 0x25b4;
  uStack_16 = 0x1140;
  uStack_18 = 0x3b1f;
  iStack_e = iVar2;
  uStack_c = uVar3;
  uStack_a = FUN_1140_2553();
  uStack_16 = 0x1140;
  uStack_18 = 0x3abb;
  uStack_1c = DAT_1160_1858;
  DAT_1160_1858 = &uStack_1c;
  puStack_1a = &stack0xfffe;
  DAT_1160_2004 = uStack_a;
  FUN_1010_2f8d(uStack_a,1);
  *(undefined2 *)((int)uStack_a + 0x2b9) = 0x3a99;
  *(undefined2 *)((int)uStack_a + 699) = 0x1030;
  *(int *)((int)uStack_a + 0x2bd) = iVar2;
  *(undefined2 *)((int)uStack_a + 0x2bf) = uVar3;
  iVar2 = (int)uStack_a;
  FUN_1140_5d45(uStack_a);
  DAT_1160_1858 = (undefined2 *)iVar2;
  puStack_1a = (undefined *)0x1140;
  uStack_1c = 0x3b88;
  FUN_1140_5f1d(DAT_1160_2004);
  return;
}



/* ---- TFormSERE_Etudes_Quitter1Click @ 1030:3b9c  (24 octets) ---- */

void __stdcall16far TFormSERE_Etudes_Quitter1Click(undefined4 param_1)

{
  FUN_1158_0444();
  FUN_1140_5556((int)param_1,(int)((ulong)param_1 >> 0x10));
  return;
}



/* ---- TFormSERE_Etudes_PleinEcran1Click @ 1030:3bb4  (48 octets) ---- */

void __stdcall16far TFormSERE_Etudes_PleinEcran1Click(undefined4 param_1)

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



/* ---- TFormSERE_Etudes_Periode1Click @ 1030:3be4  (71 octets) ---- */

void __stdcall16far TFormSERE_Etudes_Periode1Click(undefined4 param_1)

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
  iVar1 = FUN_1000_3e32(*(undefined2 *)(iVar2 + 0x318),iVar1);
  if (iVar1 != *(int *)(iVar2 + 0x318)) {
    FUN_1030_09be(iVar2,uVar3,iVar1);
  }
  return;
}



/* ---- TFormSERE_Etudes_N12Click @ 1030:3c2b  (246 octets) ---- */

void __stdcall16far
TFormSERE_Etudes_N12Click(undefined4 param_1,undefined2 param_2,undefined2 param_3)

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
    iVar4 = *(int *)(iVar5 + 0x318);
    uVar8 = FUN_1158_2273(0x94,0x1130,param_2,param_3);
    uVar7 = 0x1130;
    uVar2 = FUN_1130_162b((int)*(undefined4 *)(iVar5 + 0x2c0),
                          (int)((ulong)*(undefined4 *)(iVar5 + 0x2c0) >> 0x10),uVar8);
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
      iVar4 = FUN_1000_3e32(*(undefined2 *)(iVar5 + 0x318),iVar4);
    }
    if (iVar4 != *(int *)(iVar5 + 0x318)) {
      FUN_1030_09be(iVar5,uVar6,iVar4);
    }
  }
  return;
}



/* ---- TFormSERE_Etudes_N11Click @ 1030:3d29  (1 octets) ---- */

void TFormSERE_Etudes_N11Click
               (undefined2 param_1,undefined4 param_2,undefined2 param_3,undefined2 param_4)

{
  char cVar1;
  undefined extraout_AH;
  int iVar2;
  undefined2 unaff_SS;
  undefined *puVar3;
  undefined auStack_208 [258];
  undefined uStack_106;
  undefined4 uStack_8;
  
  uStack_8 = CONCAT22(0x3d34,(undefined2)uStack_8);
  FUN_1158_0444();
  cVar1 = FUN_1158_2255(0x94,0x1130,param_3,param_4);
  if (cVar1 != '\0') {
    uStack_8 = FUN_1158_2273(0x94,0x1130,param_3,param_4);
    puVar3 = auStack_208;
    FUN_1148_512a(uStack_8);
    FUN_1158_18e9(CONCAT11(extraout_AH,uStack_106));
    FUN_1150_08da(puVar3,unaff_SS);
    iVar2 = FUN_1158_0416();
    if (0 < iVar2 && iVar2 <= DAT_1160_014e) {
      FUN_1030_0a88((int)param_2,(int)((ulong)param_2 >> 0x10),iVar2);
    }
  }
  return;
}



/* ---- FUN_1030_3fc2 @ 1030:3fc2  (4178 octets) ---- */

void __stdcall16far FUN_1030_3fc2(undefined4 param_1)

{
  double *pdVar1;
  int *piVar2;
  uint *puVar3;
  double dVar4;
  uint uVar5;
  uint uVar6;
  undefined2 *puVar7;
  byte bVar8;
  undefined2 uVar9;
  undefined2 uVar10;
  undefined uVar11;
  char cVar12;
  int iVar13;
  int iVar14;
  undefined2 uVar15;
  int iVar16;
  undefined2 extraout_DX;
  int iVar17;
  double *pdVar18;
  undefined2 uVar19;
  undefined2 uVar20;
  longdouble in_ST0;
  longdouble lVar21;
  longdouble lVar22;
  longdouble lVar23;
  longdouble lVar24;
  longdouble lVar25;
  longdouble lVar26;
  longdouble lVar27;
  longdouble in_ST1;
  longdouble lVar28;
  longdouble in_ST2;
  longdouble in_ST3;
  longdouble in_ST4;
  longdouble in_ST5;
  longdouble in_ST6;
  longdouble in_ST7;
  undefined4 uVar29;
  undefined4 *puVar30;
  undefined4 uVar31;
  long lVar32;
  int iVar33;
  undefined8 local_42;
  int iStack_3a;
  int local_38;
  ulong local_36;
  int local_32;
  int local_30;
  char local_2e;
  char cStack_2d;
  undefined local_2c;
  undefined uStack_2b;
  int local_2a;
  char local_28;
  byte bStack_27;
  undefined2 local_26;
  undefined2 local_24;
  int local_22;
  undefined4 local_20;
  int local_1c;
  undefined2 local_1a;
  undefined8 local_18;
  double local_10;
  int local_8;
  int local_6;
  
  local_6 = 0x3fcd;
  FUN_1158_0444();
  uVar19 = (undefined2)((ulong)param_1 >> 0x10);
  iVar17 = (int)param_1;
  local_1a = (undefined2)((ulong)*(undefined4 *)(iVar17 + 0x244) >> 0x10);
  local_1c = (int)*(undefined4 *)(iVar17 + 0x244);
  FUN_10d8_31d2();
  FUN_10e0_2ffb();
  FUN_10e0_2ed2();
  FUN_10d8_31bf();
  local_1a = (undefined2)((ulong)*(undefined4 *)(iVar17 + 0x238) >> 0x10);
  local_1c = (int)*(undefined4 *)(iVar17 + 0x238);
  FUN_10d8_31d2();
  FUN_10e0_2ffb();
  FUN_10e0_2ed2();
  FUN_10d8_31bf();
  local_1a = (undefined2)((ulong)*(undefined4 *)(iVar17 + 0x23c) >> 0x10);
  local_1c = (int)*(undefined4 *)(iVar17 + 0x23c);
  FUN_10d8_31d2();
  FUN_10e0_2ffb();
  FUN_10e0_2ed2();
  FUN_10d8_31bf();
  local_1a = (undefined2)((ulong)*(undefined4 *)(iVar17 + 0x240) >> 0x10);
  local_1c = (int)*(undefined4 *)(iVar17 + 0x240);
  FUN_10d8_31d2();
  FUN_10e0_2ffb();
  FUN_10e0_2ed2();
  FUN_10d8_31bf();
  local_1a = (undefined2)((ulong)*(undefined4 *)(iVar17 + 0x268) >> 0x10);
  local_1c = (int)*(undefined4 *)(iVar17 + 0x268);
  FUN_10d8_31d2();
  FUN_10e0_2ffb();
  FUN_10e0_2ed2();
  FUN_10d8_31bf();
  _local_1c = CONCAT22(uVar19,iVar17 + 0x41d);
  local_20._2_2_ = (int)((ulong)*(undefined4 *)(iVar17 + 0x244) >> 0x10);
  local_20._0_2_ = (double *)*(undefined4 *)(iVar17 + 0x244);
  local_22 = DAT_1160_014e;
  if (0 < DAT_1160_014e) {
    iVar14 = 1;
    while( true ) {
      local_32 = *(int *)(iVar17 + 0x318);
      local_30 = local_32 >> 0xf;
      local_2e = 0;
      local_28 = (char)(iVar14 >> 0xf);
      local_26._0_1_ = 0;
      local_2a = iVar14;
      bStack_27 = local_28;
      cVar12 = FUN_10e0_2895();
      if (cVar12 == '\0') {
        FUN_1030_0733();
      }
      iVar16 = FUN_1158_0416();
      local_26 = (double *)((int)_local_1c + iVar16 * 7 + -7);
      local_24._0_1_ = (undefined)((ulong)_local_1c >> 0x10);
      local_24._1_1_ = (undefined)((ulong)_local_1c >> 0x18);
      puVar30 = (undefined4 *)FUN_10d8_3b9b((double *)local_20,CONCAT42(0x11583dd5,local_20._2_2_));
      puVar7 = (undefined2 *)((int)*puVar30 + 0x38);
      uVar11 = (*(code *)*puVar7)();
      *(undefined *)CONCAT13(local_24._1_1_,CONCAT12((undefined)local_24,local_26)) = uVar11;
      puVar30 = (undefined4 *)FUN_10d8_3b9b();
      puVar7 = (undefined2 *)((int)*puVar30 + 0x38);
      uVar11 = (*(code *)*puVar7)();
      *(undefined *)((int)local_26 + 1) = uVar11;
      puVar30 = (undefined4 *)FUN_10d8_3b9b((double *)local_20,CONCAT42(0x10d83dfd,local_20._2_2_));
      puVar7 = (undefined2 *)((int)*puVar30 + 0x38);
      uVar11 = (*(code *)*puVar7)();
      *(undefined *)((int)local_26 + 2) = uVar11;
      puVar30 = (undefined4 *)FUN_10d8_3b9b((double *)local_20,local_20._2_2_,0x3e13);
      puVar7 = (undefined2 *)((int)*puVar30 + 0x38);
      uVar11 = (*(code *)*puVar7)(0x10d8,(undefined4 *)puVar30);
      *(undefined *)((int)local_26 + 3) = uVar11;
      puVar30 = (undefined4 *)FUN_10d8_3b9b((double *)local_20,local_20._2_2_,0x3e27,0x10d8);
      puVar7 = (undefined2 *)((int)*puVar30 + 0x38);
      uVar11 = (*(code *)*puVar7)(0x10d8,puVar30);
      *(undefined *)((int)local_26 + 4) = uVar11;
      puVar30 = (undefined4 *)FUN_10d8_3b9b((double *)local_20,local_20._2_2_,0x3e3c,0x10d8);
      puVar7 = (undefined2 *)((int)*puVar30 + 0x38);
      uVar11 = (*(code *)*puVar7)(0x10d8,puVar30);
      *(undefined *)((int)local_26 + 5) = uVar11;
      puVar30 = (undefined4 *)FUN_10d8_3b9b((double *)local_20,local_20._2_2_,0x3e4c,0x10d8);
      puVar7 = (undefined2 *)((int)*puVar30 + 0x38);
      uVar11 = (*(code *)*puVar7)(0x10d8,puVar30);
      *(undefined *)((int)local_26 + 6) = uVar11;
      if (iVar14 == local_22) break;
      iVar14 = iVar14 + 1;
    }
  }
  local_20 = (double *)*(undefined4 *)(iVar17 + 0x238);
  local_22 = DAT_1160_014e;
  if (0 < DAT_1160_014e) {
    iVar14 = 1;
    while( true ) {
      local_6 = 1;
      lVar27 = in_ST2;
      in_ST2 = in_ST5;
      while( true ) {
        iStack_3a = *(int *)(iVar17 + 0x318);
        local_38 = iStack_3a >> 0xf;
        local_36 = local_36 & 0xffffff00;
        local_30 = iVar14 >> 0xf;
        local_2e = 0;
        local_2a = local_6;
        local_28 = (char)(local_6 >> 0xf);
        local_26._0_1_ = 0;
        local_32 = iVar14;
        bStack_27 = local_28;
        cVar12 = FUN_10e0_2895();
        if (cVar12 == '\0') {
          FUN_1030_0733();
        }
        iVar16 = FUN_1158_0416();
        iVar16 = iVar16 << 5;
        iVar13 = FUN_1158_0416();
        local_26 = (double *)((int)_local_1c + iVar13 * 0x40 + iVar16 + -0x28);
        local_24._0_1_ = (undefined)((ulong)_local_1c >> 0x10);
        local_24._1_1_ = (undefined)((ulong)_local_1c >> 0x18);
        puVar30 = (undefined4 *)
                  FUN_10d8_3b9b((int)local_20,CONCAT42(0x11583e64,(int)((ulong)local_20 >> 0x10)));
        puVar7 = (undefined2 *)((int)*puVar30 + 0x40);
        (*(code *)*puVar7)();
        *(double *)CONCAT13(local_24._1_1_,CONCAT12((undefined)local_24,local_26)) = (double)in_ST0;
        in_ST5 = in_ST7;
        puVar30 = (undefined4 *)FUN_10d8_3b9b();
        puVar7 = (undefined2 *)((int)*puVar30 + 0x40);
        in_ST0 = in_ST3;
        in_ST3 = in_ST6;
        (*(code *)*puVar7)();
        *(double *)((int)local_26 + 8) = (double)in_ST1;
        in_ST6 = in_ST5;
        puVar30 = (undefined4 *)
                  FUN_10d8_3b9b((int)local_20,CONCAT42(0x10d83e73,(int)((ulong)local_20 >> 0x10)));
        puVar7 = (undefined2 *)((int)*puVar30 + 0x40);
        in_ST1 = in_ST4;
        in_ST4 = in_ST7;
        (*(code *)*puVar7)();
        *(double *)((int)local_26 + 0x10) = (double)lVar27;
        in_ST7 = in_ST6;
        puVar30 = (undefined4 *)FUN_10d8_3b9b((int)local_20,(int)((ulong)local_20 >> 0x10),0x3e85);
        puVar7 = (undefined2 *)((int)*puVar30 + 0x44);
        uVar31 = (*(code *)*puVar7)(0x10d8,(undefined4 *)puVar30);
        uVar20 = (undefined2)
                 (CONCAT13(local_24._1_1_,CONCAT12((undefined)local_24,local_26)) >> 0x10);
        *(undefined2 *)((int)local_26 + 0x18) = (int)uVar31;
        *(undefined2 *)((int)local_26 + 0x1a) = (int)((ulong)uVar31 >> 0x10);
        puVar30 = (undefined4 *)
                  FUN_10d8_3b9b((int)local_20,(int)((ulong)local_20 >> 0x10),0x3e96,0x10d8);
        puVar7 = (undefined2 *)((int)*puVar30 + 0x44);
        uVar31 = (*(code *)*puVar7)(0x10d8,puVar30);
        uVar20 = (undefined2)
                 (CONCAT13(local_24._1_1_,CONCAT12((undefined)local_24,local_26)) >> 0x10);
        *(undefined2 *)((int)local_26 + 0x1c) = (int)uVar31;
        *(undefined2 *)((int)local_26 + 0x1e) = (int)((ulong)uVar31 >> 0x10);
        if (local_6 == 2) break;
        local_6 = local_6 + 1;
        lVar27 = in_ST2;
        in_ST2 = in_ST5;
      }
      if (iVar14 == local_22) break;
      iVar14 = iVar14 + 1;
    }
  }
  local_20 = (double *)*(undefined4 *)(iVar17 + 0x240);
  local_22 = DAT_1160_014e;
  if (0 < DAT_1160_014e) {
    iVar14 = 1;
    while( true ) {
      local_6 = 1;
      while( true ) {
        iStack_3a = *(int *)(iVar17 + 0x318);
        local_38 = iStack_3a >> 0xf;
        local_36 = local_36 & 0xffffff00;
        local_2e = 0;
        local_2a = local_6;
        local_28 = (char)(local_6 >> 0xf);
        local_26._0_1_ = 0;
        local_32 = iVar14;
        local_30 = iVar14 >> 0xf;
        bStack_27 = local_28;
        cVar12 = FUN_10e0_2895();
        if (cVar12 == '\0') {
          FUN_1030_0733();
        }
        iVar16 = FUN_1158_0416();
        iVar16 = iVar16 * 0x30;
        iVar13 = FUN_1158_0416();
        local_26 = (double *)((int)_local_1c + iVar13 * 0x60 + iVar16 + 0x1a8);
        local_24._0_1_ = (undefined)((ulong)_local_1c >> 0x10);
        local_24._1_1_ = (undefined)((ulong)_local_1c >> 0x18);
        puVar30 = (undefined4 *)
                  FUN_10d8_3b9b((int)local_20,CONCAT42(0x11583ec0,(int)((ulong)local_20 >> 0x10)));
        puVar7 = (undefined2 *)((int)*puVar30 + 0x44);
        (*(code *)*puVar7)();
        puVar30 = (undefined4 *)
                  FUN_10d8_3b9b((int)local_20,CONCAT42(0x10d83eaf,(int)((ulong)local_20 >> 0x10)));
        puVar7 = (undefined2 *)((int)*puVar30 + 0x44);
        uVar31 = (*(code *)*puVar7)();
        puVar30 = (undefined4 *)
                  FUN_10d8_3b9b((int)local_20,(int)((ulong)local_20 >> 0x10),0x3ea8,0x10d8);
        puVar7 = (undefined2 *)((int)*puVar30 + 0x44);
        uVar29 = (*(code *)*puVar7)(0x10d8);
        iVar33 = (int)((ulong)puVar30 >> 0x10);
        iVar13 = (int)((ulong)uVar29 >> 0x10);
        uVar6 = (uint)CARRY2((uint)uVar29,(uint)(undefined4 *)puVar30);
        iVar16 = iVar13 + iVar33;
        uVar29 = CONCAT22(iVar16 + uVar6,(uint)uVar29 + (int)(undefined4 *)puVar30);
        if (SCARRY2(iVar13,iVar33) != SCARRY2(iVar16,uVar6)) {
          uVar29 = FUN_1158_043e(0x10d8);
        }
        iVar13 = (int)((ulong)uVar29 >> 0x10);
        iVar33 = (int)((ulong)uVar31 >> 0x10);
        uVar6 = (uint)CARRY2((uint)uVar29,(uint)uVar31);
        iVar16 = iVar13 + iVar33;
        uVar31 = CONCAT22(iVar16 + uVar6,(uint)uVar29 + (uint)uVar31);
        if (SCARRY2(iVar13,iVar33) != SCARRY2(iVar16,uVar6)) {
          uVar31 = FUN_1158_043e();
        }
        puVar7 = (undefined2 *)CONCAT13(local_24._1_1_,CONCAT12((undefined)local_24,local_26));
        *puVar7 = (int)uVar31;
        *(undefined2 *)((int)local_26 + 2) = (int)((ulong)uVar31 >> 0x10);
        puVar30 = (undefined4 *)FUN_10d8_3b9b((int)local_20,(int)((ulong)local_20 >> 0x10),0x3ecd);
        puVar7 = (undefined2 *)((int)*puVar30 + 0x40);
        (*(code *)*puVar7)(0x10d8);
        *(double *)((int)local_26 + 0x14) = (double)in_ST0;
        in_ST0 = in_ST7;
        puVar30 = (undefined4 *)
                  FUN_10d8_3b9b((int)local_20,(int)((ulong)local_20 >> 0x10),0x3ed9,0x10d8);
        puVar7 = (undefined2 *)((int)*puVar30 + 0x44);
        uVar31 = (*(code *)*puVar7)(0x10d8,puVar30);
        uVar20 = (undefined2)
                 (CONCAT13(local_24._1_1_,CONCAT12((undefined)local_24,local_26)) >> 0x10);
        *(undefined2 *)((int)local_26 + 4) = (int)uVar31;
        *(undefined2 *)((int)local_26 + 6) = (int)((ulong)uVar31 >> 0x10);
        puVar30 = (undefined4 *)
                  FUN_10d8_3b9b((int)local_20,(int)((ulong)local_20 >> 0x10),0x3ee1,0x10d8);
        puVar7 = (undefined2 *)((int)*puVar30 + 0x44);
        uVar31 = (*(code *)*puVar7)(0x10d8,puVar30);
        uVar20 = (undefined2)
                 (CONCAT13(local_24._1_1_,CONCAT12((undefined)local_24,local_26)) >> 0x10);
        *(undefined2 *)((int)local_26 + 8) = (int)uVar31;
        *(undefined2 *)((int)local_26 + 10) = (int)((ulong)uVar31 >> 0x10);
        puVar30 = (undefined4 *)
                  FUN_10d8_3b9b((int)local_20,(int)((ulong)local_20 >> 0x10),0x3ef6,0x10d8);
        puVar7 = (undefined2 *)((int)*puVar30 + 0x40);
        (*(code *)*puVar7)(0x10d8,puVar30);
        *(double *)((int)local_26 + 0x1c) = (double)in_ST1;
        puVar30 = (undefined4 *)FUN_10d8_3b9b();
        puVar7 = (undefined2 *)((int)*puVar30 + 0x44);
        lVar32 = (*(code *)*puVar7)();
        local_2a = (int)lVar32;
        local_28 = (char)((ulong)lVar32 >> 0x10);
        bStack_27 = (byte)((ulong)lVar32 >> 0x18);
        lVar27 = (longdouble)lVar32;
        iVar16 = FUN_1158_0416(puVar30);
        iVar16 = iVar16 << 5;
        iVar13 = FUN_1158_0416();
        in_ST1 = in_ST0;
        FUN_1080_2fa6((double)(lVar27 * (longdouble)
                                        *(double *)((int)_local_1c + iVar13 * 0x40 + iVar16 + -0x28)
                              ));
        local_42 = SUB108(in_ST2,0);
        iStack_3a = (int)((unkuint10)in_ST2 >> 0x40);
        puVar30 = (undefined4 *)
                  FUN_10d8_3b9b((int)local_20,
                                CONCAT42(&UNK_1080_3eaf,(int)((ulong)local_20 >> 0x10)));
        puVar7 = (undefined2 *)((int)*puVar30 + 0x44);
        lVar32 = (*(code *)*puVar7)();
        local_2e = (char)lVar32;
        cStack_2d = (char)((ulong)lVar32 >> 8);
        local_2c = (undefined)((ulong)lVar32 >> 0x10);
        uStack_2b = (undefined)((ulong)lVar32 >> 0x18);
        lVar27 = (longdouble)lVar32;
        local_38 = SUB102(lVar27,0);
        local_36 = (ulong)((unkuint10)lVar27 >> 0x10);
        local_32 = (int)((unkuint10)lVar27 >> 0x30);
        local_30 = (int)((unkuint10)lVar27 >> 0x40);
        puVar30 = (undefined4 *)FUN_10d8_3b9b();
        puVar7 = (undefined2 *)((int)*puVar30 + 0x40);
        (*(code *)*puVar7)();
        in_ST2 = in_ST1;
        FUN_1080_2fa6((double)((longdouble)
                               CONCAT28(local_30,CONCAT26(local_32,CONCAT42(local_36,local_38))) *
                              in_ST3));
        lVar27 = (longdouble)CONCAT28(iStack_3a,local_42) + in_ST4;
        in_ST3 = in_ST2;
        puVar30 = (undefined4 *)
                  FUN_10d8_3b9b((int)local_20,CONCAT42(0x10803ec0,(int)((ulong)local_20 >> 0x10)));
        puVar7 = (undefined2 *)((int)*puVar30 + 0x44);
        lVar32 = (*(code *)*puVar7)();
        puVar30 = (undefined4 *)FUN_10d8_3b9b();
        puVar7 = (undefined2 *)((int)*puVar30 + 0x40);
        (*(code *)*puVar7)();
        in_ST4 = in_ST3;
        FUN_1080_2fa6((double)((longdouble)lVar32 * in_ST5));
        *(double *)((int)local_26 + 0xc) = (double)(lVar27 + in_ST6);
        in_ST5 = in_ST4;
        in_ST6 = in_ST4;
        puVar30 = (undefined4 *)
                  FUN_10d8_3b9b((int)local_20,CONCAT42(0x10803f21,(int)((ulong)local_20 >> 0x10)));
        puVar7 = (undefined2 *)((int)*puVar30 + 0x40);
        (*(code *)*puVar7)();
        *(double *)((int)local_26 + 0x24) = (double)in_ST7;
        iVar16 = *(int *)(iVar17 + 0x318) + -1;
        in_ST7 = in_ST6;
        if (SBORROW2(*(int *)(iVar17 + 0x318),1)) {
          iVar16 = FUN_1158_043e();
        }
        local_38 = iVar16 >> 0xf;
        local_36 = local_36 & 0xffffff00;
        local_2e = 0;
        local_2a = local_6;
        local_28 = (char)(local_6 >> 0xf);
        local_26._0_1_ = 0;
        iStack_3a = iVar16;
        local_32 = iVar14;
        local_30 = iVar14 >> 0xf;
        bStack_27 = local_28;
        cVar12 = FUN_10e0_2895((int)local_20,(int)((ulong)local_20 >> 0x10),2,&iStack_3a);
        if (cVar12 == '\0') {
          FUN_1030_0733(iVar17);
        }
        iVar16 = FUN_1158_0416();
        iVar16 = iVar16 * 0x30;
        iVar13 = FUN_1158_0416();
        local_26 = (double *)((int)_local_1c + iVar13 * 0x60 + iVar16 + 0x1a8);
        local_24._0_1_ = (undefined)((ulong)_local_1c >> 0x10);
        local_24._1_1_ = (undefined)((ulong)_local_1c >> 0x18);
        puVar30 = (undefined4 *)FUN_10d8_3b9b((int)local_20,(int)((ulong)local_20 >> 0x10),0x3ed9);
        puVar7 = (undefined2 *)((int)*puVar30 + 0x44);
        uVar31 = (*(code *)*puVar7)(0x10d8,(undefined4 *)puVar30);
        uVar20 = (undefined2)
                 (CONCAT13(local_24._1_1_,CONCAT12((undefined)local_24,local_26)) >> 0x10);
        *(undefined2 *)((int)local_26 + 0x2c) = (int)uVar31;
        *(undefined2 *)((int)local_26 + 0x2e) = (int)((ulong)uVar31 >> 0x10);
        if (local_6 == 2) break;
        local_6 = local_6 + 1;
      }
      if (iVar14 == local_22) break;
      iVar14 = iVar14 + 1;
    }
  }
  local_20._2_2_ = (int)((ulong)*(undefined4 *)(iVar17 + 0x23c) >> 0x10);
  local_20._0_2_ = (double *)*(undefined4 *)(iVar17 + 0x23c);
  local_22 = DAT_1160_014e;
  if (0 < DAT_1160_014e) {
    iVar14 = 1;
    while( true ) {
      local_32 = *(int *)(iVar17 + 0x318);
      local_30 = local_32 >> 0xf;
      local_2e = 0;
      local_28 = (char)(iVar14 >> 0xf);
      local_26._0_1_ = 0;
      local_2a = iVar14;
      bStack_27 = local_28;
      cVar12 = FUN_10e0_2895();
      if (cVar12 == '\0') {
        FUN_1030_0733();
      }
      iVar16 = FUN_1158_0416();
      local_26 = (double *)((int)_local_1c + iVar16 * 0x38 + 0x500);
      local_24._0_1_ = (undefined)((ulong)_local_1c >> 0x10);
      local_24._1_1_ = (undefined)((ulong)_local_1c >> 0x18);
      puVar30 = (undefined4 *)FUN_10d8_3b9b((double *)local_20,CONCAT42(0x11583f2d,local_20._2_2_));
      puVar7 = (undefined2 *)((int)*puVar30 + 0x40);
      (*(code *)*puVar7)();
      *(double *)((int)local_26 + 8) = (double)in_ST0;
      lVar21 = in_ST7;
      puVar30 = (undefined4 *)FUN_10d8_3b9b();
      puVar7 = (undefined2 *)((int)*puVar30 + 0x40);
      (*(code *)*puVar7)();
      pdVar1 = (double *)CONCAT13(local_24._1_1_,CONCAT12((undefined)local_24,local_26));
      *pdVar1 = (double)(in_ST1 + (longdouble)*(double *)((int)local_26 + 8));
      lVar22 = lVar21;
      puVar30 = (undefined4 *)FUN_10d8_3b9b((double *)local_20,CONCAT42(0x10d83f3f,local_20._2_2_));
      puVar7 = (undefined2 *)((int)*puVar30 + 0x40);
      (*(code *)*puVar7)();
      *(double *)((int)local_26 + 0x10) = (double)in_ST2;
      lVar28 = lVar22;
      puVar30 = (undefined4 *)FUN_10d8_3b9b((double *)local_20,local_20._2_2_,0x3f4d);
      puVar7 = (undefined2 *)((int)*puVar30 + 0x40);
      (*(code *)*puVar7)(0x10d8,(undefined4 *)puVar30);
      *(double *)((int)local_26 + 0x18) = (double)in_ST3;
      lVar23 = lVar28;
      puVar30 = (undefined4 *)FUN_10d8_3b9b((double *)local_20,local_20._2_2_,0x3f63,0x10d8);
      puVar7 = (undefined2 *)((int)*puVar30 + 0x40);
      (*(code *)*puVar7)(0x10d8,puVar30);
      local_30 = SUB102(in_ST4,0);
      local_2e = (char)((unkuint10)in_ST4 >> 0x10);
      cStack_2d = (char)((unkuint10)in_ST4 >> 0x18);
      local_2c = (undefined)((unkuint10)in_ST4 >> 0x20);
      uStack_2b = (undefined)((unkuint10)in_ST4 >> 0x28);
      local_2a = (int)((unkuint10)in_ST4 >> 0x30);
      local_28 = (char)((unkuint10)in_ST4 >> 0x40);
      bStack_27 = (byte)((unkuint10)in_ST4 >> 0x48);
      puVar30 = (undefined4 *)FUN_10d8_3b9b((double *)local_20,local_20._2_2_,0x3f6b,0x10d8);
      puVar7 = (undefined2 *)((int)*puVar30 + 0x40);
      (*(code *)*puVar7)(0x10d8,puVar30);
      in_ST5 = (longdouble)
               CONCAT19(bStack_27,
                        CONCAT18(local_28,CONCAT26(local_2a,CONCAT15(uStack_2b,
                                                                     CONCAT14(local_2c,CONCAT13(
                                                  cStack_2d,CONCAT12(local_2e,local_30))))))) +
               in_ST5;
      iStack_3a = SUB102(in_ST5,0);
      local_38 = (int)((unkuint10)in_ST5 >> 0x10);
      local_36 = (ulong)((unkuint10)in_ST5 >> 0x20);
      local_32 = (int)((unkuint10)in_ST5 >> 0x40);
      lVar24 = lVar23;
      puVar30 = (undefined4 *)FUN_10d8_3b9b((double *)local_20,local_20._2_2_,0x3f39,0x10d8);
      puVar7 = (undefined2 *)((int)*puVar30 + 0x40);
      (*(code *)*puVar7)(0x10d8,puVar30);
      lVar27 = (longdouble)CONCAT28(local_32,CONCAT44(local_36,CONCAT22(local_38,iStack_3a)));
      lVar25 = lVar24;
      puVar30 = (undefined4 *)FUN_10d8_3b9b();
      puVar7 = (undefined2 *)((int)*puVar30 + 0x40);
      (*(code *)*puVar7)();
      lVar26 = lVar25;
      puVar30 = (undefined4 *)FUN_10d8_3b9b((double *)local_20,CONCAT42(0x10d83f86,local_20._2_2_));
      puVar7 = (undefined2 *)((int)*puVar30 + 0x40);
      (*(code *)*puVar7)();
      local_10 = (double)(lVar27 + in_ST6 + in_ST7 + lVar21);
      in_ST0 = lVar26;
      in_ST1 = lVar26;
      puVar30 = (undefined4 *)FUN_10d8_3b9b();
      puVar7 = (undefined2 *)((int)*puVar30 + 0x40);
      (*(code *)*puVar7)();
      lVar22 = lVar22 + (longdouble)local_10;
      local_30 = SUB102(lVar22,0);
      local_2e = (char)((unkuint10)lVar22 >> 0x10);
      cStack_2d = (char)((unkuint10)lVar22 >> 0x18);
      local_2c = (undefined)((unkuint10)lVar22 >> 0x20);
      uStack_2b = (undefined)((unkuint10)lVar22 >> 0x28);
      local_2a = (int)((unkuint10)lVar22 >> 0x30);
      local_28 = (char)((unkuint10)lVar22 >> 0x40);
      bStack_27 = (byte)((unkuint10)lVar22 >> 0x48);
      puVar30 = (undefined4 *)FUN_10d8_3b9b((double *)local_20,CONCAT42(0x10d83f95,local_20._2_2_));
      puVar7 = (undefined2 *)((int)*puVar30 + 0x40);
      (*(code *)*puVar7)();
      lVar28 = (longdouble)
               CONCAT19(bStack_27,
                        CONCAT18(local_28,CONCAT26(local_2a,CONCAT15(uStack_2b,
                                                                     CONCAT14(local_2c,CONCAT13(
                                                  cStack_2d,CONCAT12(local_2e,local_30))))))) +
               lVar28;
      iStack_3a = SUB102(lVar28,0);
      local_38 = (int)((unkuint10)lVar28 >> 0x10);
      local_36 = (ulong)((unkuint10)lVar28 >> 0x20);
      local_32 = (int)((unkuint10)lVar28 >> 0x40);
      in_ST2 = in_ST1;
      puVar30 = (undefined4 *)FUN_10d8_3b9b();
      puVar7 = (undefined2 *)((int)*puVar30 + 0x40);
      (*(code *)*puVar7)();
      dVar4 = (double)((longdouble)
                       CONCAT28(local_32,CONCAT44(local_36,CONCAT22(local_38,iStack_3a))) + lVar23);
      local_18._6_2_ = (undefined2)((qword)dVar4 >> 0x30);
      uVar9 = local_18._6_2_;
      local_18._4_2_ = (undefined2)((qword)dVar4 >> 0x20);
      uVar15 = local_18._4_2_;
      local_18._2_2_ = (undefined2)((qword)dVar4 >> 0x10);
      uVar20 = local_18._2_2_;
      local_18._0_2_ = SUB82(dVar4,0);
      in_ST3 = in_ST2;
      in_ST4 = in_ST2;
      uVar10 = (undefined2)local_18;
      local_18 = dVar4;
      FUN_1080_2ea7(uVar10,uVar20,uVar15,uVar9,local_10._0_2_,(int6)((qword)local_10 >> 0x10));
      *(double *)((int)local_26 + 0x28) = (double)(lVar24 * (longdouble)100.0);
      in_ST5 = in_ST4;
      puVar30 = (undefined4 *)
                FUN_10d8_3b9b((double *)local_20,CONCAT42(&UNK_1030_3f78,local_20._2_2_));
      puVar7 = (undefined2 *)((int)*puVar30 + 0x40);
      (*(code *)*puVar7)();
      local_30 = SUB102(lVar25,0);
      local_2e = (char)((unkuint10)lVar25 >> 0x10);
      cStack_2d = (char)((unkuint10)lVar25 >> 0x18);
      local_2c = (undefined)((unkuint10)lVar25 >> 0x20);
      uStack_2b = (undefined)((unkuint10)lVar25 >> 0x28);
      local_2a = (int)((unkuint10)lVar25 >> 0x30);
      local_28 = (char)((unkuint10)lVar25 >> 0x40);
      bStack_27 = (byte)((unkuint10)lVar25 >> 0x48);
      puVar30 = (undefined4 *)FUN_10d8_3b9b((double *)local_20,local_20._2_2_,0x3fa2);
      puVar7 = (undefined2 *)((int)*puVar30 + 0x40);
      (*(code *)*puVar7)(0x10d8,(undefined4 *)puVar30);
      *(double *)((int)local_26 + 0x20) =
           (double)((longdouble)
                    CONCAT19(bStack_27,
                             CONCAT18(local_28,CONCAT26(local_2a,CONCAT15(uStack_2b,
                                                                          CONCAT14(local_2c,CONCAT13
                                                  (cStack_2d,CONCAT12(local_2e,local_30))))))) +
                   lVar26);
      in_ST6 = in_ST5;
      if (iVar14 == local_22) break;
      iVar14 = iVar14 + 1;
      in_ST7 = in_ST5;
    }
  }
  local_20._2_2_ = (int)((ulong)*(undefined4 *)(iVar17 + 0x268) >> 0x10);
  local_20._0_2_ = (double *)(double *)*(undefined4 *)(iVar17 + 0x268);
  local_6 = 1;
  while( true ) {
    local_30 = *(undefined2 *)(iVar17 + 0x318);
    local_2e = (char)(local_30 >> 0xf);
    local_2c = 0;
    local_28 = (char)local_6;
    bStack_27 = (byte)((uint)local_6 >> 8);
    local_26._0_1_ = (char)bStack_27 >> 7;
    local_24._0_1_ = 0;
    cStack_2d = local_2e;
    local_26._1_1_ = (char)local_26;
    cVar12 = FUN_10e0_2895();
    if (cVar12 == '\0') {
      FUN_1030_0733();
    }
    iVar14 = FUN_1158_0416();
    local_22 = (int)((ulong)_local_1c >> 0x10);
    local_24 = (undefined2 *)((int)_local_1c + iVar14 * 0x18 + 0x6e0);
    puVar30 = (undefined4 *)FUN_10d8_3b9b((double *)local_20,CONCAT42(0x11583fb1,local_20._2_2_));
    puVar7 = (undefined2 *)((int)*puVar30 + 0x40);
    (*(code *)*puVar7)();
    uVar20 = extraout_DX;
    uVar15 = FUN_1158_102f();
    *(undefined2 *)CONCAT22(local_22,local_24) = uVar15;
    local_24[1] = uVar20;
    if (local_6 == 2) break;
    local_6 = local_6 + 1;
  }
  local_20 = (double *)CONCAT22(DAT_1160_014e,(double *)local_20);
  if (0 < DAT_1160_014e) {
    iVar17 = 1;
    while( true ) {
      iVar14 = FUN_1158_0416();
      lVar27 = (longdouble)*(double *)((int)_local_1c + iVar14 * 0x60 + 0x1ec);
      iVar14 = FUN_1158_0416();
      lVar27 = lVar27 + (longdouble)*(double *)((int)_local_1c + iVar14 * 0x60 + 0x21c);
      iVar14 = FUN_1158_0416();
      *(double *)((int)_local_1c + iVar14 * 0x38 + 0x530) = (double)lVar27;
      if (iVar17 == local_20._2_2_) break;
      iVar17 = iVar17 + 1;
    }
  }
  local_6 = 1;
  while( true ) {
    iVar17 = FUN_1158_0416();
    uVar19 = (undefined2)((ulong)_local_1c >> 0x10);
    iVar17 = (int)_local_1c + iVar17 * 0x18;
    local_20 = (double *)CONCAT22(uVar19,(double *)(iVar17 + 0x6e0));
    *(undefined2 *)(iVar17 + 0x6e4) = 0;
    *(undefined2 *)(iVar17 + 0x6e6) = 0;
    *(undefined2 *)(iVar17 + 0x6e8) = 0;
    *(undefined2 *)(iVar17 + 0x6ea) = 0;
    *(undefined2 *)(iVar17 + 0x6ec) = 0;
    *(undefined2 *)(iVar17 + 0x6ee) = 0;
    local_22 = DAT_1160_014e;
    if (0 < DAT_1160_014e) {
      iVar17 = 1;
      while( true ) {
        iVar14 = FUN_1158_0416();
        iVar14 = iVar14 * 0x30;
        iVar16 = FUN_1158_0416();
        uVar19 = (undefined2)((ulong)_local_1c >> 0x10);
        iVar14 = (int)_local_1c + iVar16 * 0x60 + iVar14;
        uVar6 = *(uint *)(iVar14 + 0x1d4);
        iVar14 = *(int *)(iVar14 + 0x1d6);
        uVar19 = (undefined2)((ulong)local_20 >> 0x10);
        pdVar1 = (double *)local_20 + 1;
        piVar2 = (int *)((int)(double *)local_20 + 10);
        uVar5 = (uint)CARRY2(uVar6,*(uint *)pdVar1);
        iVar16 = iVar14 + *piVar2;
        uVar31 = CONCAT22(iVar16 + uVar5,uVar6 + *(int *)pdVar1);
        if (SCARRY2(iVar14,*piVar2) != SCARRY2(iVar16,uVar5)) {
          uVar31 = FUN_1158_043e();
        }
        uVar19 = (undefined2)((ulong)local_20 >> 0x10);
        *(int *)((double *)local_20 + 1) = (int)uVar31;
        *(undefined2 *)((int)(double *)local_20 + 10) = (int)((ulong)uVar31 >> 0x10);
        iVar14 = FUN_1158_0416();
        iVar14 = iVar14 * 0x30;
        iVar16 = FUN_1158_0416();
        uVar19 = (undefined2)((ulong)_local_1c >> 0x10);
        iVar14 = (int)_local_1c + iVar16 * 0x60 + iVar14;
        uVar6 = *(uint *)(iVar14 + 0x1ac);
        iVar14 = *(int *)(iVar14 + 0x1ae);
        uVar19 = (undefined2)((ulong)local_20 >> 0x10);
        puVar3 = (uint *)((int)(double *)local_20 + 4);
        piVar2 = (int *)((int)(double *)local_20 + 6);
        uVar5 = (uint)CARRY2(uVar6,*puVar3);
        iVar16 = iVar14 + *piVar2;
        uVar31 = CONCAT22(iVar16 + uVar5,uVar6 + *puVar3);
        if (SCARRY2(iVar14,*piVar2) != SCARRY2(iVar16,uVar5)) {
          uVar31 = FUN_1158_043e();
        }
        uVar19 = (undefined2)((ulong)local_20 >> 0x10);
        *(undefined2 *)((int)(double *)local_20 + 4) = (int)uVar31;
        *(undefined2 *)((int)(double *)local_20 + 6) = (int)((ulong)uVar31 >> 0x10);
        iVar14 = FUN_1158_0416();
        iVar14 = iVar14 * 0x30;
        iVar16 = FUN_1158_0416();
        uVar19 = (undefined2)((ulong)_local_1c >> 0x10);
        iVar14 = (int)_local_1c + iVar16 * 0x60 + iVar14;
        uVar6 = *(uint *)(iVar14 + 0x1b0);
        iVar14 = *(int *)(iVar14 + 0x1b2);
        uVar19 = (undefined2)((ulong)local_20 >> 0x10);
        puVar3 = (uint *)((int)(double *)local_20 + 0xc);
        piVar2 = (int *)((int)(double *)local_20 + 0xe);
        uVar5 = (uint)CARRY2(uVar6,*puVar3);
        iVar16 = iVar14 + *piVar2;
        uVar31 = CONCAT22(iVar16 + uVar5,uVar6 + *puVar3);
        if (SCARRY2(iVar14,*piVar2) != SCARRY2(iVar16,uVar5)) {
          uVar31 = FUN_1158_043e();
        }
        uVar19 = (undefined2)((ulong)local_20 >> 0x10);
        *(undefined2 *)((int)(double *)local_20 + 0xc) = (int)uVar31;
        *(undefined2 *)((int)(double *)local_20 + 0xe) = (int)((ulong)uVar31 >> 0x10);
        if (iVar17 == local_22) break;
        iVar17 = iVar17 + 1;
      }
    }
    uVar19 = (undefined2)((ulong)local_20 >> 0x10);
    pdVar18 = (double *)local_20;
    uVar6 = (uint)(*(uint *)((int)pdVar18 + 4) < *(uint *)(pdVar18 + 1));
    iVar17 = *(int *)((int)pdVar18 + 6) - *(int *)((int)pdVar18 + 10);
    lVar32 = CONCAT22(iVar17 - uVar6,*(uint *)((int)pdVar18 + 4) - *(int *)(pdVar18 + 1));
    if (SBORROW2(*(int *)((int)pdVar18 + 6),*(int *)((int)pdVar18 + 10)) != SBORROW2(iVar17,uVar6))
    {
      lVar32 = FUN_1158_043e();
    }
    local_22 = (int)((ulong)lVar32 >> 0x10);
    local_24._0_1_ = (undefined)lVar32;
    local_24._1_1_ = (undefined)((ulong)lVar32 >> 8);
    lVar27 = in_ST6;
    FUN_1080_2ea7((double)*(long *)((double *)local_20 + 1),(double)lVar32);
    ((double *)local_20)[2] = (double)(in_ST0 * (longdouble)100.0);
    if (local_6 == 2) break;
    local_6 = local_6 + 1;
    in_ST0 = in_ST1;
    in_ST1 = in_ST2;
    in_ST2 = in_ST3;
    in_ST3 = in_ST4;
    in_ST4 = in_ST5;
    in_ST5 = in_ST6;
    in_ST6 = lVar27;
  }
  local_6 = 1;
  while( true ) {
    iVar17 = FUN_1158_0416();
    uVar19 = (undefined2)((ulong)_local_1c >> 0x10);
    iVar17 = (int)_local_1c + iVar17 * 0x28;
    local_20 = (double *)CONCAT22(uVar19,(double *)(iVar17 + 0x700));
    *(double *)(iVar17 + 0x700) = 0.0;
    *(undefined8 *)(iVar17 + 0x718) = 0;
    *(undefined8 *)(iVar17 + 0x708) = 0;
    *(undefined8 *)(iVar17 + 0x710) = 0;
    *(undefined8 *)(iVar17 + 0x720) = 0;
    local_8 = 0;
    local_22 = DAT_1160_014e;
    if (0 < DAT_1160_014e) {
      iVar17 = 1;
      while( true ) {
        iVar14 = FUN_1158_0416();
        iVar14 = iVar14 << 5;
        iVar16 = FUN_1158_0416();
        iVar14 = (int)_local_1c + iVar16 * 0x40 + iVar14;
        local_26 = (double *)(iVar14 + -0x28);
        local_24._0_1_ = (undefined)((ulong)_local_1c >> 0x10);
        local_24._1_1_ = (undefined)((ulong)_local_1c >> 0x18);
        dVar4 = *local_26;
        bVar8 = (byte)(((uint)(dVar4 == 0.0) << 0xe) >> 8);
        bStack_27 = dVar4 < 0.0 | (byte)(((uint)NAN(dVar4) << 10) >> 8) | bVar8;
        local_28 = 0;
        if (dVar4 >= 0.0 && bVar8 == 0) {
          uVar19 = (undefined2)((ulong)local_20 >> 0x10);
          pdVar18 = (double *)local_20;
          *local_20 = *local_20 +
                      *(double *)CONCAT13(local_24._1_1_,CONCAT12((undefined)local_24,local_26));
          pdVar18[1] = pdVar18[1] + *(double *)(iVar14 + -0x20);
          pdVar18[2] = pdVar18[2] + *(double *)(iVar14 + -0x18);
          pdVar18[3] = (double)*(long *)(iVar14 + -0x10) + pdVar18[3];
          pdVar18[4] = (double)*(long *)(iVar14 + -0xc) + pdVar18[4];
          local_8 = local_8 + 1;
        }
        if (iVar17 == local_22) break;
        iVar17 = iVar17 + 1;
      }
    }
    uVar19 = (undefined2)((ulong)local_20 >> 0x10);
    pdVar18 = (double *)local_20;
    lVar26 = lVar27;
    FUN_1080_2ea7((double)local_8,*(undefined2 *)local_20,
                  CONCAT42(CONCAT22(*(undefined2 *)((int)pdVar18 + 6),
                                    *(undefined2 *)((int)pdVar18 + 4)),
                           *(undefined2 *)((int)pdVar18 + 2)));
    uVar19 = (undefined2)((ulong)local_20 >> 0x10);
    pdVar18 = (double *)local_20;
    *local_20 = (double)in_ST1;
    in_ST1 = in_ST6;
    lVar25 = lVar26;
    FUN_1080_2ea7((double)local_8,*(undefined2 *)(pdVar18 + 1),
                  CONCAT42(CONCAT22(*(undefined2 *)((int)pdVar18 + 0xe),
                                    *(undefined2 *)((int)pdVar18 + 0xc)),
                           *(undefined2 *)((int)pdVar18 + 10)));
    uVar19 = (undefined2)((ulong)local_20 >> 0x10);
    pdVar18 = (double *)local_20;
    pdVar18[1] = (double)in_ST2;
    in_ST2 = lVar27;
    lVar24 = lVar25;
    FUN_1080_2ea7((double)local_8,*(undefined2 *)(pdVar18 + 2),
                  CONCAT42(CONCAT22(*(undefined2 *)((int)pdVar18 + 0x16),
                                    *(undefined2 *)((int)pdVar18 + 0x14)),
                           *(undefined2 *)((int)pdVar18 + 0x12)));
    uVar19 = (undefined2)((ulong)local_20 >> 0x10);
    pdVar18 = (double *)local_20;
    pdVar18[2] = (double)in_ST3;
    in_ST3 = lVar26;
    in_ST6 = lVar24;
    FUN_1080_2ea7((double)local_8,*(undefined2 *)(pdVar18 + 3),
                  CONCAT42(CONCAT22(*(undefined2 *)((int)pdVar18 + 0x1e),
                                    *(undefined2 *)((int)pdVar18 + 0x1c)),
                           *(undefined2 *)((int)pdVar18 + 0x1a)));
    uVar19 = (undefined2)((ulong)local_20 >> 0x10);
    pdVar18 = (double *)local_20;
    pdVar18[3] = (double)in_ST4;
    in_ST4 = lVar25;
    lVar27 = in_ST6;
    FUN_1080_2ea7((double)local_8,*(undefined2 *)(pdVar18 + 4),
                  CONCAT42(CONCAT22(*(undefined2 *)((int)pdVar18 + 0x26),
                                    *(undefined2 *)((int)pdVar18 + 0x24)),
                           *(undefined2 *)((int)pdVar18 + 0x22)));
    ((double *)local_20)[4] = (double)in_ST5;
    if (local_6 == 2) break;
    local_6 = local_6 + 1;
    in_ST5 = lVar24;
  }
  FUN_10d8_31d2();
  FUN_10d8_31d2();
  FUN_10d8_31d2();
  FUN_10d8_31d2();
  FUN_10d8_31d2();
  return;
}



/* ---- TFormSERE_Etudes_FormKeyDown @ 1030:502c  (1 octets) ---- */

void TFormSERE_Etudes_FormKeyDown(undefined2 param_1,undefined4 param_2,byte param_3,int *param_4)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined2 uVar7;
  undefined2 uVar8;
  
  FUN_1158_0444();
  uVar7 = (undefined2)((ulong)param_2 >> 0x10);
  iVar5 = (int)param_2;
  uVar8 = (undefined2)((ulong)*(undefined4 *)(iVar5 + 0xdc) >> 0x10);
  iVar6 = (int)*(undefined4 *)(iVar5 + 0xdc);
  if (((param_3 & 1) != 0 & *(byte *)(iVar6 + 0x13)) != 0) {
    switch(*param_4) {
    case 0x21:
      iVar4 = FUN_1138_18f4(iVar5,uVar7);
      iVar3 = *(int *)(iVar6 + 10) - iVar4;
      if (SBORROW2(*(int *)(iVar6 + 10),iVar4)) {
        iVar3 = FUN_1158_043e(0x1138);
      }
      FUN_1140_1cd0(iVar6,uVar8,iVar3);
      break;
    case 0x22:
      iVar4 = FUN_1138_18f4(iVar5,uVar7);
      iVar3 = iVar4 + *(int *)(iVar6 + 10);
      if (SCARRY2(iVar4,*(int *)(iVar6 + 10))) {
        iVar3 = FUN_1158_043e(0x1138);
      }
      FUN_1140_1cd0(iVar6,uVar8,iVar3);
      break;
    case 0x23:
      FUN_1140_1cd0(iVar6,uVar8,*(undefined2 *)(iVar6 + 0xc));
      break;
    case 0x24:
      FUN_1140_1cd0(iVar6,uVar8,0);
      break;
    case 0x26:
      iVar4 = *(int *)(iVar6 + 10) - *(int *)(iVar6 + 8);
      if (SBORROW2(*(int *)(iVar6 + 10),*(int *)(iVar6 + 8))) {
        iVar4 = FUN_1158_043e(0x1030);
      }
      FUN_1140_1cd0(iVar6,uVar8,iVar4);
      break;
    case 0x28:
      iVar4 = *(int *)(iVar6 + 10) + *(int *)(iVar6 + 8);
      if (SCARRY2(*(int *)(iVar6 + 10),*(int *)(iVar6 + 8))) {
        iVar4 = FUN_1158_043e(0x1030);
      }
      FUN_1140_1cd0(iVar6,uVar8,iVar4);
    }
    bVar1 = FUN_1158_0416();
    if ((0x20 < bVar1) && (((bVar1 < 0x25 || (bVar1 == 0x26)) || (bVar1 == 0x28)))) {
      *param_4 = 0;
    }
  }
  uVar8 = (undefined2)((ulong)*(undefined4 *)(iVar5 + 0xd8) >> 0x10);
  iVar6 = (int)*(undefined4 *)(iVar5 + 0xd8);
  if (((param_3 & 1) != 0 & *(byte *)(iVar6 + 0x13)) != 0) {
    if (*param_4 == 0x27) {
      iVar4 = *(int *)(iVar6 + 10) + *(int *)(iVar6 + 8);
      if (SCARRY2(*(int *)(iVar6 + 10),*(int *)(iVar6 + 8))) {
        iVar4 = FUN_1158_043e(0x1158);
      }
      FUN_1140_1cd0(iVar6,uVar8,iVar4);
    }
    else if (*param_4 == 0x25) {
      iVar4 = *(int *)(iVar6 + 10) - *(int *)(iVar6 + 8);
      if (SBORROW2(*(int *)(iVar6 + 10),*(int *)(iVar6 + 8))) {
        iVar4 = FUN_1158_043e(0x1158);
      }
      FUN_1140_1cd0(iVar6,uVar8,iVar4);
    }
    cVar2 = FUN_1158_0416();
    if ((cVar2 == '%') || (cVar2 == '\'')) {
      *param_4 = 0;
    }
  }
  if (*param_4 != 0) {
    FUN_1140_2230(iVar5,uVar7,*(undefined2 *)(iVar5 + 0xe4),*(undefined2 *)(iVar5 + 0xe6));
  }
  return;
}



/* ---- TFormSERE_Etudes_Fiche1Click @ 1030:51f8  (43 octets) ---- */

void __stdcall16far TFormSERE_Etudes_Fiche1Click(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined2 uVar3;
  
  FUN_1158_0444();
  uVar1 = *(undefined4 *)((int)param_1 + 0x26c);
  uVar3 = (undefined2)((ulong)uVar1 >> 0x10);
  iVar2 = (int)uVar1;
  FUN_1140_77b2((int)DAT_1160_2c2a,(int)((ulong)DAT_1160_2c2a >> 0x10),*(undefined2 *)(iVar2 + 0x23)
                ,*(undefined2 *)(iVar2 + 0x25),1);
  return;
}



/* ---- TFormSERE_Etudes_Index1Click @ 1030:5223  (31 octets) ---- */

void __stdcall16far TFormSERE_Etudes_Index1Click(void)

{
  FUN_1158_0444();
  FUN_1140_77b2((int)DAT_1160_2c2a,(int)((ulong)DAT_1160_2c2a >> 0x10),0,0,3);
  return;
}



/* ---- TFormSERE_Etudes_Rechercher1Click @ 1030:5242  (33 octets) ---- */

void __stdcall16far TFormSERE_Etudes_Rechercher1Click(void)

{
  FUN_1158_0444();
  FUN_1140_77b2((int)DAT_1160_2c2a,(int)((ulong)DAT_1160_2c2a >> 0x10),0x1d2,0x1160,0x105);
  return;
}



/* ---- TFormSERE_Etudes_Utiliserlaide1Click @ 1030:5263  (31 octets) ---- */

void __stdcall16far TFormSERE_Etudes_Utiliserlaide1Click(void)

{
  FUN_1158_0444();
  FUN_1140_77b2((int)DAT_1160_2c2a,(int)((ulong)DAT_1160_2c2a >> 0x10),0,0,4);
  return;
}



/* ---- TFormSERE_Etudes_Apropos1Click @ 1030:5282  (29 octets) ---- */

void __stdcall16far TFormSERE_Etudes_Apropos1Click(void)

{
  undefined2 uVar1;
  
  uVar1 = 0x528d;
  FUN_1158_0444();
  FUN_1140_5d45((int)DAT_1160_2008,(int)((ulong)DAT_1160_2008 >> 0x10),uVar1);
  return;
}



/* ---- FUN_1030_529f @ 1030:529f  (123 octets) ---- */

void __stdcall16far FUN_1030_529f(undefined4 *param_1,undefined *param_2,undefined4 param_3)

{
  undefined2 *puVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  
  uVar4 = 0x52aa;
  FUN_1158_0444();
  uVar3 = (undefined2)((ulong)param_3 >> 0x10);
  iVar2 = (int)param_3;
  if (0x200 < *(uint *)(iVar2 + 2) && *(uint *)(iVar2 + 2) < 0x20a || *(int *)(iVar2 + 2) == 7) {
    uVar3 = (undefined2)((ulong)DAT_1160_2c2a >> 0x10);
    iVar2 = (int)DAT_1160_2c2a;
    *(undefined2 *)(iVar2 + 0x6d) = 0;
    *(undefined2 *)(iVar2 + 0x6f) = 0;
    *(undefined2 *)(iVar2 + 0x71) = 0;
    *(undefined2 *)(iVar2 + 0x73) = 0;
    *param_2 = 1;
    puVar1 = (undefined2 *)((int)*param_1 + 0x78);
    (*(code *)*puVar1)(0x1158,(undefined4 *)param_1,(int)((ulong)param_1 >> 0x10),uVar4);
    FUN_1140_77b2((int)DAT_1160_2c2a,(int)((ulong)DAT_1160_2c2a >> 0x10),0,0,2);
  }
  return;
}



/* ---- TFormSERE_Etudes_StringGrid1MouseDown @ 1030:531a  (183 octets) ---- */

void __stdcall16far TFormSERE_Etudes_StringGrid1MouseDown(undefined4 param_1)

{
  int iVar1;
  char cVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined4 uVar5;
  char param_2;
  undefined2 param_3;
  undefined2 param_4;
  undefined2 uVar6;
  
  FUN_1158_0444();
  if (((param_2 == '\x01') && (cVar2 = FUN_1158_2255(0x5c1,0x1138,param_3,param_4), cVar2 != '\0'))
     && (uVar5 = FUN_1158_2273(0x5c1,0x1138,param_3,param_4),
        uVar3 = (undefined2)((ulong)uVar5 >> 0x10),
        *(int *)((int)uVar5 + 0xac) != 0 || *(int *)((int)uVar5 + 0xae) != 0)) {
    uVar4 = (undefined2)((ulong)DAT_1160_2c2a >> 0x10);
    iVar1 = (int)DAT_1160_2c2a;
    uVar6 = 8;
    uVar5 = FUN_1158_2273(0x5c1,0x1138,param_3,param_4);
    uVar3 = (undefined2)((ulong)uVar5 >> 0x10);
    FUN_1140_77b2(iVar1,uVar4,*(undefined2 *)((int)uVar5 + 0xac),*(undefined2 *)((int)uVar5 + 0xae),
                  uVar6);
    FUN_1140_7303(iVar1,uVar4);
    *(undefined2 *)(iVar1 + 0x6d) = 0x529f;
    *(undefined2 *)(iVar1 + 0x6f) = 0x1030;
    *(undefined2 *)(iVar1 + 0x71) = (int)param_1;
    *(undefined2 *)(iVar1 + 0x73) = (int)((ulong)param_1 >> 0x10);
  }
  return;
}



/* ---- TFormSERE_Etudes_ImpressionRapide1Click @ 1030:53d1  (43 octets) ---- */

void __stdcall16far TFormSERE_Etudes_ImpressionRapide1Click(undefined4 param_1)

{
  undefined4 uVar1;
  char cVar2;
  undefined2 uVar3;
  
  FUN_1158_0444();
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  uVar1 = *(undefined4 *)((int)param_1 + 0x234);
  cVar2 = FUN_1108_2f17((int)uVar1,(int)((ulong)uVar1 >> 0x10));
  if (cVar2 != '\0') {
    FUN_1030_5467((int)param_1,uVar3);
  }
  return;
}



/* ---- FUN_1030_5404 @ 1030:5404  (76 octets) ---- */

undefined2 __stdcall16far FUN_1030_5404(void)

{
  undefined2 uVar1;
  undefined2 unaff_SS;
  undefined4 uVar2;
  undefined local_28 [34];
  undefined2 uStack_6;
  
  uStack_6 = 0x540f;
  FUN_1158_0444();
  uVar2 = FUN_10f0_2a04((int)DAT_1160_2c54,(int)((ulong)DAT_1160_2c54 >> 0x10));
  uVar1 = FUN_1128_21d2(uVar2);
  GETTEXTEXTENTPOINT(0x1128,local_28,unaff_SS,1,0x1d4,0x1160);
  uVar1 = FUN_1158_0416(uVar1);
  return uVar1;
}



/* ---- FUN_1030_5467 @ 1030:5467  (1214 octets) ---- */

/* WARNING: Removing unreachable block (ram,0x103054e9) */

void __cdecl16far FUN_1030_5467(undefined4 param_1)

{
  undefined2 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined2 uVar7;
  undefined2 unaff_SS;
  undefined4 uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined2 uVar11;
  undefined2 uVar12;
  undefined *puStack_41e;
  undefined local_416 [254];
  undefined local_318 [2];
  undefined local_316 [254];
  int local_218;
  int local_216;
  undefined4 local_214;
  int local_210;
  int local_20e;
  int local_20c;
  undefined2 local_20a;
  int local_206;
  undefined local_204 [256];
  undefined local_104 [254];
  undefined2 uStack_6;
  int iVar13;
  
  uStack_6 = 0x5472;
  FUN_1158_0444();
  puStack_41e = (undefined *)0x5481;
  FUN_10f0_204e();
  puStack_41e = (undefined *)0x548c;
  FUN_1158_09f5();
  FUN_1158_0408();
  puStack_41e = (undefined *)DAT_1160_1858;
  DAT_1160_1858 = &puStack_41e;
  local_214 = FUN_10f0_2a04((int)DAT_1160_2c54,(int)((ulong)DAT_1160_2c54 >> 0x10));
  uVar8 = *(undefined4 *)((int)DAT_1160_18f6 + 0x2c8);
  uVar7 = (undefined2)((ulong)uVar8 >> 0x10);
  iVar6 = (int)uVar8;
  FUN_1128_2099(local_214,*(undefined2 *)(iVar6 + 0x34),*(undefined2 *)(iVar6 + 0x36));
  local_20c = 1;
  local_214._2_2_ = 1;
  iVar6 = (int)param_1;
  uVar7 = (undefined2)((ulong)param_1 >> 0x10);
  local_20e = 1;
  while( true ) {
    FUN_1030_5f52(iVar6,uVar7,local_20e,1);
    uVar11 = 8;
    uVar8 = FUN_10f0_2a04((int)DAT_1160_2c54,(int)((ulong)DAT_1160_2c54 >> 0x10));
    uVar8 = *(undefined4 *)((int)uVar8 + 7);
    FUN_1128_11f5((int)uVar8,(int)((ulong)uVar8 >> 0x10),uVar11);
    uVar12 = 2;
    uVar8 = FUN_10f0_2a04((int)DAT_1160_2c54,(int)((ulong)DAT_1160_2c54 >> 0x10));
    uVar8 = *(undefined4 *)((int)uVar8 + 7);
    uVar11 = 0x1128;
    FUN_1128_1278((int)uVar8,(int)((ulong)uVar8 >> 0x10),uVar12);
    local_20a = 1;
    iVar13 = 1;
    while( true ) {
      puVar10 = local_104;
      uVar12 = unaff_SS;
      FUN_1158_0db5(0,0x5450,uVar11);
      FUN_1158_0c78(puVar10,uVar12);
      uVar11 = 0x1158;
      FUN_1158_0408();
      if (iVar13 == 2) break;
      iVar13 = iVar13 + 1;
    }
    local_214._0_2_ = (undefined2)((ulong)*(undefined4 *)(iVar6 + 0x2a4) >> 0x10);
    local_216 = (int)*(undefined4 *)(iVar6 + 0x2a4);
    puVar2 = (undefined4 *)*(undefined4 *)(local_216 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x10);
    iVar13 = (*(code *)*puVar1)(0x1158,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10));
    iVar3 = iVar13 + -1;
    if (SBORROW2(iVar13,1)) {
      iVar3 = FUN_1158_043e(0x1158);
    }
    local_218 = iVar3;
    if (-1 < iVar3) {
      iVar13 = 0;
      while( true ) {
        puVar10 = local_318;
        puVar2 = (undefined4 *)*(undefined4 *)(local_216 + 0xec);
        puVar1 = (undefined2 *)((int)*puVar2 + 0xc);
        uVar11 = unaff_SS;
        (*(code *)*puVar1)(0x1158,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),iVar13,puVar10);
        FUN_1158_17e7(0xff,local_204,unaff_SS,puVar10,uVar11);
        do {
          local_210 = FUN_1158_1878(local_204,unaff_SS,0x5451,0x1158);
          if (0 < local_210) {
            FUN_1158_1975(1,local_210,local_204,unaff_SS);
            FUN_1158_1916(local_210,0xff,local_204,unaff_SS,0x5453,0x1158);
          }
        } while (local_210 != 0);
        puVar10 = local_318;
        uVar11 = unaff_SS;
        FUN_1158_17cd(0x5455,0x1158);
        FUN_1158_184c(local_204,unaff_SS);
        FUN_1158_17e7(0xff,local_204,unaff_SS,puVar10,uVar11);
        puVar10 = local_104;
        uVar11 = unaff_SS;
        FUN_1158_0db5(0,local_204,unaff_SS);
        FUN_1158_0c78(puVar10,uVar11);
        FUN_1158_0408();
        if (iVar13 == local_218) break;
        iVar13 = iVar13 + 1;
      }
    }
    local_214._0_2_ = (undefined2)((ulong)DAT_1160_2c54 >> 0x10);
    local_216 = (int)DAT_1160_2c54;
    uVar11 = 6;
    uVar8 = FUN_10f0_2a04(local_216,(undefined2)local_214);
    uVar8 = *(undefined4 *)((int)uVar8 + 7);
    FUN_1128_11f5((int)uVar8,(int)((ulong)uVar8 >> 0x10),uVar11);
    uVar11 = 0;
    uVar8 = FUN_10f0_2a04(local_216,(undefined2)local_214);
    uVar8 = *(undefined4 *)((int)uVar8 + 7);
    FUN_1128_1278((int)uVar8,(int)((ulong)uVar8 >> 0x10),uVar11);
    uVar4 = FUN_1030_5404(&stack0xfffe);
    if (0xfffd < uVar4) {
      FUN_1158_043e(0x1030);
    }
    local_206 = FUN_1158_0416();
    puVar10 = local_416;
    uVar12 = unaff_SS;
    FUN_1158_17cd(0x5455,0x1158);
    puVar9 = local_316;
    uVar11 = unaff_SS;
    FUN_1138_1d53((int)*(undefined4 *)(iVar6 + 0x294),
                  (int)((ulong)*(undefined4 *)(iVar6 + 0x294) >> 0x10));
    FUN_1158_184c(puVar9,uVar11);
    FUN_1158_17e7(0xff,local_204,unaff_SS,puVar10,uVar12);
    uVar11 = 0;
    iVar13 = (int)((long)local_206 * 5);
    if ((long)iVar13 != (long)local_206 * 5) {
      iVar13 = FUN_1158_043e(0x1158,0);
    }
    iVar3 = FUN_10f0_2a72(local_216,(undefined2)local_214);
    iVar5 = iVar3 - iVar13;
    if (SBORROW2(iVar3,iVar13)) {
      iVar5 = FUN_1158_043e(0x10f0,uVar11);
    }
    puVar10 = local_204;
    uVar12 = unaff_SS;
    uVar8 = FUN_10f0_2a04(local_216,(undefined2)local_214);
    FUN_1128_1f09(uVar8,puVar10,uVar12,iVar5,uVar11);
    puVar10 = local_416;
    uVar12 = unaff_SS;
    FUN_1158_17cd(0x5455,0x1128);
    puVar9 = local_316;
    uVar11 = unaff_SS;
    FUN_1138_1d53((int)*(undefined4 *)(iVar6 + 0x298),
                  (int)((ulong)*(undefined4 *)(iVar6 + 0x298) >> 0x10));
    FUN_1158_184c(puVar9,uVar11);
    FUN_1158_17e7(0xff,local_204,unaff_SS,puVar10,uVar12);
    uVar11 = 0;
    iVar13 = (int)((long)local_206 * 4);
    if ((long)iVar13 != (long)local_206 * 4) {
      iVar13 = FUN_1158_043e(0x1158,0);
    }
    iVar3 = FUN_10f0_2a72(local_216,(undefined2)local_214);
    iVar5 = iVar3 - iVar13;
    if (SBORROW2(iVar3,iVar13)) {
      iVar5 = FUN_1158_043e(0x10f0,uVar11);
    }
    puVar10 = local_204;
    uVar12 = unaff_SS;
    uVar8 = FUN_10f0_2a04(local_216,(undefined2)local_214);
    FUN_1128_1f09(uVar8,puVar10,uVar12,iVar5,uVar11);
    puVar10 = local_416;
    uVar12 = unaff_SS;
    FUN_1158_17cd(0x5455,0x1128);
    puVar9 = local_316;
    uVar11 = unaff_SS;
    FUN_1138_1d53((int)*(undefined4 *)(iVar6 + 0x29c),
                  (int)((ulong)*(undefined4 *)(iVar6 + 0x29c) >> 0x10));
    FUN_1158_184c(puVar9,uVar11);
    FUN_1158_17e7(0xff,local_204,unaff_SS,puVar10,uVar12);
    uVar11 = 0;
    iVar13 = (int)((long)local_206 * 3);
    if ((long)iVar13 != (long)local_206 * 3) {
      iVar13 = FUN_1158_043e(0x1158,0);
    }
    iVar3 = FUN_10f0_2a72(local_216,(undefined2)local_214);
    iVar5 = iVar3 - iVar13;
    if (SBORROW2(iVar3,iVar13)) {
      iVar5 = FUN_1158_043e(0x10f0,uVar11);
    }
    puVar10 = local_204;
    uVar12 = unaff_SS;
    uVar8 = FUN_10f0_2a04(local_216,(undefined2)local_214);
    FUN_1128_1f09(uVar8,puVar10,uVar12,iVar5,uVar11);
    puVar10 = local_416;
    uVar12 = unaff_SS;
    FUN_1158_17cd(0x5455,0x1128);
    puVar9 = local_316;
    uVar11 = unaff_SS;
    FUN_1138_1d53((int)*(undefined4 *)(iVar6 + 0x2a0),
                  (int)((ulong)*(undefined4 *)(iVar6 + 0x2a0) >> 0x10));
    FUN_1158_184c(puVar9,uVar11);
    FUN_1158_17e7(0xff,local_204,unaff_SS,puVar10,uVar12);
    uVar11 = 0;
    iVar13 = (int)((long)local_206 * 2);
    if ((long)iVar13 != (long)local_206 * 2) {
      iVar13 = FUN_1158_043e(0x1158,0);
    }
    iVar3 = FUN_10f0_2a72(local_216,(undefined2)local_214);
    iVar5 = iVar3 - iVar13;
    if (SBORROW2(iVar3,iVar13)) {
      iVar5 = FUN_1158_043e(0x10f0,uVar11);
    }
    puVar10 = local_204;
    uVar12 = unaff_SS;
    uVar8 = FUN_10f0_2a04(local_216,(undefined2)local_214);
    FUN_1128_1f09(uVar8,puVar10,uVar12,iVar5,uVar11);
    if (local_20e < local_20c) {
      puVar10 = local_104;
      uVar11 = unaff_SS;
      FUN_1158_0db5(0,0x5450,0x1128);
      FUN_1158_0c78(puVar10,uVar11);
      FUN_1158_0408();
    }
    if (local_20e == local_214._2_2_) break;
    local_20e = local_20e + 1;
  }
  DAT_1160_1858 = (undefined **)puStack_41e;
  puStack_41e = local_104;
  FUN_1158_0a4f();
  puStack_41e = (undefined *)0x5915;
  FUN_1158_0408();
  puStack_41e = (undefined *)(undefined *)*(undefined4 *)(iVar6 + 0x2a4);
  FUN_1120_49e3();
  return;
}



/* ---- TFormSERE_Etudes_Copier1Click @ 1030:5929  (73 octets) ---- */

void __stdcall16far TFormSERE_Etudes_Copier1Click(undefined4 param_1)

{
  undefined4 uVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  
  FUN_1158_0444();
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  FUN_1030_5f52((int)param_1,uVar2,0,0);
  uVar1 = *(undefined4 *)((int)param_1 + 0x2a4);
  uVar3 = (undefined2)((ulong)uVar1 >> 0x10);
  uVar2 = (undefined2)uVar1;
  FUN_1120_4a3f(uVar2,uVar3);
  FUN_1120_49ff(uVar2,uVar3);
  FUN_1120_49e3(uVar2,uVar3);
  return;
}



/* ---- FUN_1030_5974 @ 1030:5974  (284 octets) ---- */

void __stdcall16far
FUN_1030_5974(undefined2 param_1_00,undefined4 param_1,undefined2 param_2,char *param_3)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined2 unaff_SS;
  undefined4 uVar6;
  undefined *puVar7;
  undefined2 uVar8;
  undefined *puVar9;
  undefined2 uVar10;
  undefined local_206 [256];
  undefined local_106 [4];
  undefined local_102 [252];
  undefined2 local_6;
  
  local_6 = 0x597f;
  FUN_1158_0444();
  pcVar2 = (char *)param_3;
  uVar4 = (undefined2)((ulong)param_3 >> 0x10);
  if (*param_3 != '\0') {
    puVar9 = local_102;
    uVar5 = unaff_SS;
    FUN_1158_17cd(pcVar2,uVar4);
    FUN_1158_184c(0x5972,0x1158);
    FUN_1158_17e7(param_2,pcVar2,uVar4,puVar9,uVar5);
  }
  uVar5 = (undefined2)((ulong)param_1 >> 0x10);
  iVar3 = (int)param_1;
  if (*(char *)(iVar3 + 0x29) != '\0') {
    cVar1 = FUN_1158_2255(0x10c,0x1120,iVar3,uVar5);
    if (cVar1 != '\0') {
      uVar6 = FUN_1158_2273(0x10c,0x1120,iVar3,uVar5);
      local_6 = (undefined2)uVar6;
      puVar9 = local_206;
      uVar10 = unaff_SS;
      FUN_1158_17cd(pcVar2,uVar4);
      puVar7 = local_106;
      uVar8 = unaff_SS;
      FUN_1138_1d53(local_6,(int)((ulong)uVar6 >> 0x10));
      FUN_1158_184c(puVar7,uVar8);
      FUN_1158_17e7(param_2,pcVar2,uVar4,puVar9,uVar10);
    }
    cVar1 = FUN_1158_2255(0xdad,0x1118,iVar3,uVar5);
    if (cVar1 != '\0') {
      uVar6 = FUN_1158_2273(0xdad,0x1118,iVar3,uVar5);
      local_6 = (undefined2)uVar6;
      puVar9 = local_206;
      uVar5 = unaff_SS;
      FUN_1158_17cd(pcVar2,uVar4);
      puVar7 = local_106;
      FUN_1138_1d53(local_6,(int)((ulong)uVar6 >> 0x10));
      FUN_1158_184c(puVar7,unaff_SS);
      FUN_1158_17e7(param_2,pcVar2,uVar4,puVar9,uVar5);
    }
  }
  return;
}



/* ---- FUN_1030_5ab2 @ 1030:5ab2  (1170 octets) ---- */

void __stdcall16far FUN_1030_5ab2(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined2 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  undefined2 unaff_SS;
  undefined *puVar7;
  undefined local_31a [6];
  undefined local_314 [250];
  int local_21a;
  int local_218;
  int local_216;
  undefined4 local_214;
  int local_210;
  int local_20e;
  int local_20c;
  int local_20a;
  uint local_208;
  int local_206;
  int local_204;
  byte local_202 [256];
  undefined local_102 [252];
  undefined2 uStack_6;
  
  uVar6 = 0x1158;
  uStack_6 = 0x5abd;
  FUN_1158_0444();
  uVar5 = (undefined2)((ulong)param_4 >> 0x10);
  local_214 = param_4;
  if (*(char *)((int)param_4 + 0x29) != '\0') {
    puVar7 = local_314;
    uVar6 = 0x1138;
    FUN_1138_1d53((int)param_4,uVar5);
    uVar2 = *(undefined4 *)((int)*(undefined4 *)(param_1 + 6) + 0x2a4);
    puVar3 = (undefined4 *)*(undefined4 *)((int)uVar2 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar3 + 0x24);
    (*(code *)*puVar1)(0x1138,(undefined4 *)puVar3,(int)((ulong)puVar3 >> 0x10),puVar7);
  }
  local_214._2_2_ = (undefined2)((ulong)param_3 >> 0x10);
  local_214._0_2_ = (int)param_3;
  if (*(char *)((int)local_214 + 0x29) != '\0') {
    if (param_2 == 1) {
      local_20a = 1;
    }
    else {
      if (param_2 != 2) {
        return;
      }
      if (DAT_1160_014e < 5) {
        local_20a = 1;
      }
      else {
        local_20a = 2;
      }
    }
    local_20e = 1;
    local_210 = 3;
    local_216 = local_20a;
    if (local_20a != 0) {
      local_20c = 1;
      while( true ) {
        if (param_2 == 1) {
          local_20e = 1;
          if (SBORROW2(*(int *)((int)local_214 + 0xe8),(uint)(*(int *)((int)local_214 + 0xe6) == 0))
              != false) {
            FUN_1158_043e(uVar6);
          }
          uVar6 = 0x1158;
          local_210 = FUN_1158_0416();
        }
        else if (param_2 == 2) {
          if (local_20c == 1) {
            local_20e = 1;
            if (local_20a == 2) {
              local_210 = 4;
            }
            else {
              local_210 = DAT_1160_014e;
            }
          }
          else {
            local_20e = 5;
            local_210 = DAT_1160_014e;
          }
        }
        if (SBORROW2(*(int *)((int)local_214 + 0x10c),(uint)(*(int *)((int)local_214 + 0x10a) == 0))
            != false) {
          FUN_1158_043e(uVar6);
        }
        uVar6 = 0x1158;
        local_218 = FUN_1158_0416();
        if (-1 < local_218) {
          local_204 = 0;
          while( true ) {
            uVar6 = 0x10f8;
            iVar4 = FUN_10f8_6e8b((int)local_214,local_214._2_2_,local_204,local_204 >> 0xf);
            if (0 < iVar4) {
              FUN_1158_17e7(0xff,local_102,unaff_SS,0x5a98,0x10f8);
              if (SBORROW2(*(int *)((int)local_214 + 0xe8),
                           (uint)(*(int *)((int)local_214 + 0xe6) == 0)) != false) {
                FUN_1158_043e(0x1158);
              }
              local_21a = FUN_1158_0416();
              if (-1 < local_21a) {
                local_206 = 0;
                while( true ) {
                  if (local_206 < 1 || local_20e <= local_206 && local_206 <= local_210) {
                    puVar7 = local_31a;
                    uVar5 = unaff_SS;
                    FUN_10f8_9a68((int)local_214,local_214._2_2_,local_204,local_206);
                    FUN_1158_17e7(0xff,local_202,unaff_SS,puVar7,uVar5);
                    do {
                      local_208 = FUN_1158_1878(local_202,unaff_SS,0x5a9d,0x1158);
                      if (0 < (int)local_208) {
                        FUN_1158_1975(3,local_208,local_202,unaff_SS);
                      }
                    } while (local_208 != 0);
                    do {
                      local_208 = FUN_1158_1878(local_202,unaff_SS,0x5aa0,0x1158);
                      if (0 < (int)local_208) {
                        FUN_1158_1975(2,local_208,local_202,unaff_SS);
                        FUN_1158_1916(local_208,0xff,local_202,unaff_SS,0x5aa3,0x1158);
                      }
                    } while (local_208 != 0);
                    do {
                      local_208 = FUN_1158_1878(local_202,unaff_SS,0x5aa5,0x1158);
                      if (0 < (int)local_208) {
                        FUN_1158_1975(3,local_208,local_202,unaff_SS);
                      }
                    } while (local_208 != 0);
                    if (*(int *)(param_1 + 0xc) == 1) {
                      if (local_206 == 0) {
                        while (local_202[1] == ' ' && local_202[0] != 0) {
                          FUN_1158_1975(1,1,local_202,unaff_SS);
                        }
                        local_208 = (uint)local_202[0];
                        while (iVar4 = FUN_1158_0416(),
                              0x12 < (int)local_208 && local_202[iVar4] == 0x20) {
                          FUN_1158_1975(1,local_208,local_202,unaff_SS);
                          local_208 = local_208 - 1;
                        }
                        local_208 = (uint)local_202[0];
                        while ((int)local_208 < 0x12) {
                          local_208 = local_208 + 1;
                          puVar7 = local_31a;
                          uVar5 = unaff_SS;
                          FUN_1158_17cd(local_202,unaff_SS);
                          FUN_1158_184c(0x5ab0,0x1158);
                          FUN_1158_17e7(0xff,local_202,unaff_SS,puVar7,uVar5);
                        }
                      }
                      else {
                        local_208 = (uint)local_202[0];
                        while ((int)local_208 < 0x12) {
                          local_208 = local_208 + 1;
                          puVar7 = local_31a;
                          uVar5 = unaff_SS;
                          FUN_1158_17cd(0x5ab0,0x1158);
                          FUN_1158_184c(local_202,unaff_SS);
                          FUN_1158_17e7(0xff,local_202,unaff_SS,puVar7,uVar5);
                        }
                      }
                    }
                    if (local_206 < local_210) {
                      puVar7 = local_31a;
                      uVar5 = unaff_SS;
                      FUN_1158_17cd(local_202,unaff_SS);
                      FUN_1158_184c(0x5aa3,0x1158);
                      FUN_1158_17e7(0xff,local_202,unaff_SS,puVar7,uVar5);
                    }
                    puVar7 = local_31a;
                    uVar5 = unaff_SS;
                    FUN_1158_17cd(local_102,unaff_SS);
                    FUN_1158_184c(local_202,unaff_SS);
                    FUN_1158_17e7(0xff,local_102,unaff_SS,puVar7,uVar5);
                  }
                  if (local_206 == local_21a) break;
                  local_206 = local_206 + 1;
                }
              }
              uVar6 = 0x1158;
              uVar2 = *(undefined4 *)((int)*(undefined4 *)(param_1 + 6) + 0x2a4);
              puVar3 = (undefined4 *)*(undefined4 *)((int)uVar2 + 0xec);
              puVar1 = (undefined2 *)((int)*puVar3 + 0x24);
              (*(code *)*puVar1)(0x1158,(undefined4 *)puVar3,(int)((ulong)puVar3 >> 0x10),local_102)
              ;
            }
            if (local_204 == local_218) break;
            local_204 = local_204 + 1;
          }
        }
        if (local_20c == local_216) break;
        local_20c = local_20c + 1;
      }
    }
  }
  return;
}



/* ---- FUN_1030_5f52 @ 1030:5f52  (726 octets) ---- */

void __stdcall16far FUN_1030_5f52(undefined4 param_1,undefined2 param_2_00,int param_2)

{
  undefined2 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined2 uVar4;
  undefined2 unaff_SS;
  undefined *puVar5;
  undefined2 uVar6;
  undefined *puVar7;
  undefined2 uVar8;
  undefined local_306 [256];
  undefined local_206 [256];
  undefined4 local_106;
  undefined local_102 [252];
  undefined2 uStack_6;
  
  uStack_6 = 0x5f5d;
  FUN_1158_0444();
  uVar4 = (undefined2)((ulong)param_1 >> 0x10);
  iVar3 = (int)param_1;
  local_106 = *(undefined4 *)(iVar3 + 0x2a4);
  FUN_1120_49e3((int)local_106,(int)((ulong)local_106 >> 0x10));
  local_102[0] = 0;
  FUN_1030_5974(&stack0xfffe,*(undefined2 *)(iVar3 + 0x24c),*(undefined2 *)(iVar3 + 0x24e),0xff,
                local_102,unaff_SS);
  FUN_1030_5974(&stack0xfffe,*(undefined2 *)(iVar3 + 0x250),*(undefined2 *)(iVar3 + 0x252),0xff,
                local_102,unaff_SS);
  if (param_2 == 1) {
    puVar7 = local_206;
    uVar6 = unaff_SS;
    FUN_1158_17cd(local_102,unaff_SS);
    FUN_1158_184c(0x5f44,0x1158);
    FUN_1158_17e7(0xff,local_102,unaff_SS,puVar7,uVar6);
  }
  FUN_1030_5974(&stack0xfffe,*(undefined2 *)(iVar3 + 0x254),*(undefined2 *)(iVar3 + 0x256),0xff,
                local_102,unaff_SS);
  puVar7 = local_206;
  uVar8 = unaff_SS;
  FUN_1158_17cd(local_102,unaff_SS);
  FUN_1158_184c(0x5f4f,0x1158);
  puVar5 = local_306;
  uVar6 = unaff_SS;
  FUN_1138_1d53((int)*(undefined4 *)(iVar3 + 600),(int)((ulong)*(undefined4 *)(iVar3 + 600) >> 0x10)
               );
  FUN_1158_184c(puVar5,uVar6);
  FUN_1158_17e7(0xff,local_102,unaff_SS,puVar7,uVar8);
  if (param_2 == 1) {
    puVar7 = local_206;
    uVar6 = unaff_SS;
    FUN_1158_17cd(local_102,unaff_SS);
    FUN_1158_184c(0x5f44,0x1158);
    FUN_1158_17e7(0xff,local_102,unaff_SS,puVar7,uVar6);
  }
  FUN_1030_5974(&stack0xfffe,*(undefined2 *)(iVar3 + 0x264),*(undefined2 *)(iVar3 + 0x266),0xff,
                local_102,unaff_SS);
  if (param_2 == 1) {
    puVar7 = local_206;
    uVar6 = unaff_SS;
    FUN_1158_17cd(local_102,unaff_SS);
    FUN_1158_184c(0x5f44,0x1158);
    FUN_1158_17e7(0xff,local_102,unaff_SS,puVar7,uVar6);
  }
  FUN_1030_5974(&stack0xfffe,*(undefined2 *)(iVar3 + 0x25c),*(undefined2 *)(iVar3 + 0x25e),0xff,
                local_102,unaff_SS);
  puVar7 = local_206;
  uVar8 = unaff_SS;
  FUN_1158_17cd(local_102,unaff_SS);
  FUN_1158_184c(0x5f4f,0x1158);
  puVar5 = local_306;
  uVar6 = unaff_SS;
  FUN_1138_1d53((int)*(undefined4 *)(iVar3 + 0x260),
                (int)((ulong)*(undefined4 *)(iVar3 + 0x260) >> 0x10));
  FUN_1158_184c(puVar5,uVar6);
  FUN_1158_17e7(0xff,local_102,unaff_SS,puVar7,uVar8);
  puVar2 = (undefined4 *)*(undefined4 *)((int)local_106 + 0xec);
  puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
  (*(code *)*puVar1)(0x1158,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),local_102);
  puVar2 = (undefined4 *)*(undefined4 *)((int)local_106 + 0xec);
  puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
  (*(code *)*puVar1)(0x1158,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),0x5f51,0x1158);
  FUN_1030_5ab2(&stack0xfffe,2,*(undefined2 *)(iVar3 + 0x184),*(undefined2 *)(iVar3 + 0x186),
                *(undefined2 *)(iVar3 + 0x274),*(undefined2 *)(iVar3 + 0x276));
  FUN_1030_5ab2(&stack0xfffe,2,*(undefined2 *)(iVar3 + 400),*(undefined2 *)(iVar3 + 0x192),
                *(undefined2 *)(iVar3 + 0x278),*(undefined2 *)(iVar3 + 0x27a));
  FUN_1030_5ab2(&stack0xfffe,2,*(undefined2 *)(iVar3 + 0x19c),*(undefined2 *)(iVar3 + 0x19e),
                *(undefined2 *)(iVar3 + 0x28c),*(undefined2 *)(iVar3 + 0x28e));
  FUN_1030_5ab2(&stack0xfffe,2,*(undefined2 *)(iVar3 + 0x1a8),*(undefined2 *)(iVar3 + 0x1aa),
                *(undefined2 *)(iVar3 + 0x288),*(undefined2 *)(iVar3 + 0x28a));
  FUN_1030_5ab2(&stack0xfffe,2,*(undefined2 *)(iVar3 + 0x1b4),*(undefined2 *)(iVar3 + 0x1b6),
                *(undefined2 *)(iVar3 + 0x284),*(undefined2 *)(iVar3 + 0x286));
  FUN_1030_5ab2(&stack0xfffe,1,*(undefined2 *)(iVar3 + 0x1c0),*(undefined2 *)(iVar3 + 0x1c2),
                *(undefined2 *)(iVar3 + 0x280),*(undefined2 *)(iVar3 + 0x282));
  FUN_1030_5ab2(&stack0xfffe,1,*(undefined2 *)(iVar3 + 0x1c8),*(undefined2 *)(iVar3 + 0x1ca),
                *(undefined2 *)(iVar3 + 0x27c),*(undefined2 *)(iVar3 + 0x27e));
  return;
}



/* ---- TFormSERE_Etudes_Rappeldecisions1Click @ 1030:6228  (36 octets) ---- */

void __stdcall16far TFormSERE_Etudes_Rappeldecisions1Click(undefined4 param_1)

{
  undefined2 uVar1;
  
  FUN_1158_0444();
  uVar1 = (undefined2)((ulong)param_1 >> 0x10);
  FUN_1078_0ca1(*(undefined2 *)((int)param_1 + 0x31a),*(undefined2 *)((int)param_1 + 0x318),
                DAT_1160_0150);
  return;
}




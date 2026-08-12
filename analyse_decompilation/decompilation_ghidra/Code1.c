/* Simstrat (FR).EXE - segment Code1 - 60 fonctions
   Decompile par Ghidra 11.2.1 (x86 16 bits, chargeur NE). */

/* ---- FUN_1000_0a69 @ 1000:0a69  (141 octets) ---- */

int __stdcall16far FUN_1000_0a69(int param_1,double param_2)

{
  int iVar1;
  longdouble lVar2;
  undefined2 uStack_16;
  undefined *puStack_14;
  undefined2 uStack_12;
  undefined2 uStack_10;
  undefined local_e [10];
  
  local_e._8_2_ = 0xa74;
  FUN_1158_0444();
  uStack_10 = 0x1158;
  uStack_12 = 0xa57;
  uStack_16 = DAT_1160_1858;
  lVar2 = (longdouble)param_2;
  DAT_1160_1858 = &uStack_16;
  puStack_14 = &stack0xfffe;
  FUN_1158_1083();
  local_e = (undefined  [10])lVar2;
  FUN_1158_0416();
  FUN_1158_0f9d();
  FUN_1158_1087();
  FUN_1158_100e();
  iVar1 = FUN_1158_0416();
  if (0x30 < iVar1) {
    iVar1 = param_1;
  }
  DAT_1160_1858 = (undefined2 *)uStack_16;
  return iVar1;
}



/* ---- TTheMainForm_FormCreate @ 1000:0b2c  (1 octets) ---- */

void TTheMainForm_FormCreate(undefined2 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined2 uVar4;
  undefined2 uStack_210;
  undefined *puStack_20e;
  undefined *puStack_20c;
  undefined auStack_102 [252];
  undefined2 uStack_6;
  
  uStack_6 = 0xb37;
  FUN_1158_0444();
  SETERRORMODE();
  DAT_1160_2c65 = 0x2f;
  uVar4 = (undefined2)((ulong)param_2 >> 0x10);
  iVar3 = (int)param_2;
  puStack_20c = (undefined *)(iVar3 + 0x2e4);
  puStack_20e = (undefined *)0xff;
  uStack_210 = 0x14d0;
  FUN_1158_17e7();
  puStack_20e = (undefined *)0x1158;
  uStack_210 = 0xb71;
  puStack_20c = (undefined *)iVar3;
  FUN_1138_1d8c();
  puStack_20c = (undefined *)*(undefined4 *)(iVar3 + 0x1a0);
  puStack_20e = (undefined *)0x1138;
  uStack_210 = 0xb86;
  FUN_1130_1161();
  puStack_20c = (undefined *)0xb10;
  puStack_20e = (undefined *)0x1130;
  uStack_210 = 0xb90;
  FUN_1158_184c();
  puStack_20c = (undefined *)0xb07;
  puStack_20e = (undefined *)0x1158;
  uStack_210 = 0xb9a;
  FUN_1158_184c();
  puStack_20c = (undefined *)*(undefined4 *)(iVar3 + 0x1a0);
  puStack_20e = (undefined *)0x1158;
  uStack_210 = 0xba9;
  FUN_1130_1237();
  puStack_20c = (undefined *)0xff;
  puStack_20e = (undefined *)0x1130;
  uStack_210 = 0xbbc;
  FUN_1158_0e58();
  puStack_20c = auStack_102;
  puStack_20e = (undefined *)((ulong)DAT_1160_2c2a >> 0x10);
  uStack_210 = (undefined2)DAT_1160_2c2a;
  func_0x114077d3(0x1158);
  FUN_1150_0b6e();
  puStack_20e = (undefined *)0x1160;
  uStack_210 = 0x44;
  FUN_1158_17e7(0xff);
  if (*(char *)(bRam11600044 + 0x44) == '\\') {
    puStack_20c = (undefined *)0x44;
    puStack_20e = (undefined *)(uint)bRam11600044;
    uStack_210 = 1;
    FUN_1158_1975();
  }
  if (*(char *)(bRam11600044 + 0x44) == ':') {
    puStack_20c = auStack_102;
    puStack_20e = (undefined *)0x1160;
    uStack_210 = 0x44;
    FUN_1158_17cd();
    puStack_20e = (undefined *)0x1158;
    uStack_210 = 0xb12;
    FUN_1158_184c();
    puStack_20e = (undefined *)0x1160;
    uStack_210 = 0x44;
    FUN_1158_17e7(0xff);
  }
  puStack_20c = (undefined *)0x44;
  puStack_20e = (undefined *)0x1158;
  uStack_210 = 0xc44;
  FUN_1158_0eb2();
  puStack_20c = (undefined *)0xc49;
  FUN_1158_0408();
  puStack_20c = (undefined *)0xb14;
  puStack_20e = (undefined *)((ulong)DAT_1160_2c2a >> 0x10);
  uStack_210 = (undefined2)DAT_1160_2c2a;
  FUN_1140_8084();
  puStack_20c = (undefined *)0x44;
  puStack_20e = (undefined *)0x1160;
  uStack_210 = 0x19fa;
  FUN_1158_17e7(0xff);
  uRam116018fa = 0;
  puStack_20c = (undefined *)((ulong)*(undefined4 *)(iVar3 + 0x214) >> 0x10);
  puStack_20e = (undefined *)*(undefined4 *)(iVar3 + 0x214);
  uStack_210 = 0x1158;
  FUN_10d8_2672();
  puStack_20c = (undefined *)0xb21;
  puStack_20e = (undefined *)0x1160;
  uStack_210 = 0x19fa;
  uVar1 = *(undefined4 *)((int)*(undefined4 *)(iVar3 + 0x214) + 0x34);
  FUN_1148_1b1b((int)uVar1,(int)((ulong)uVar1 >> 0x10));
  puStack_20c = (undefined *)0xb26;
  uStack_210 = DAT_1160_1858;
  DAT_1160_1858 = &uStack_210;
  iVar2 = iVar3;
  puStack_20e = &stack0xfffe;
  func_0x100034c4(0x1148,iVar3,uVar4);
  DAT_1160_1858 = (undefined2 *)iVar2;
  puStack_20e = (undefined *)0x1000;
  uStack_210 = 0xcd7;
  FUN_1000_1271(iVar3,uVar4);
  FUN_1000_0dc2(iVar3,uVar4);
  return;
}



/* ---- TTheMainForm_FormShow @ 1000:0ce0  (75 octets) ---- */

void __stdcall16far TTheMainForm_FormShow(undefined4 param_1)

{
  undefined4 uVar1;
  undefined2 uVar2;
  int iVar3;
  undefined2 uVar4;
  
  FUN_1158_0444();
  uVar1 = *(undefined4 *)((int)param_1 + 0x2b8);
  uVar4 = (undefined2)((ulong)uVar1 >> 0x10);
  iVar3 = (int)uVar1;
  uVar2 = FUN_1080_3335(0x1c2,*(undefined2 *)(iVar3 + 0x34),*(undefined2 *)(iVar3 + 0x36));
  FUN_1128_10eb((int)*(undefined4 *)(iVar3 + 0x34),
                (int)((ulong)*(undefined4 *)(iVar3 + 0x34) >> 0x10),uVar2);
  return;
}



/* ---- TTheMainForm_FormClose @ 1000:0d2b  (50 octets) ---- */

void __stdcall16far TTheMainForm_FormClose(undefined4 param_1)

{
  FUN_1158_0444();
  FUN_1140_77b2((int)DAT_1160_2c2a,(int)((ulong)DAT_1160_2c2a >> 0x10),0,0,2);
  FUN_1158_0eb2((int)param_1 + 0x3e4,(int)((ulong)param_1 >> 0x10));
  FUN_1158_0408();
  return;
}



/* ---- TTheMainForm_FormCloseQuery @ 1000:0d74  (1 octets) ---- */

void TTheMainForm_FormCloseQuery(void)

{
  int iVar1;
  undefined2 unaff_SS;
  undefined4 in_stack_00000008;
  undefined auStack_102 [252];
  undefined2 uStack_6;
  
  uStack_6 = 0xd7f;
  FUN_1158_0444();
  FUN_1158_17e7(0xff,auStack_102,unaff_SS,0xd5d,0x1158);
  MESSAGEBEEP(0x1158,0x20);
  iVar1 = FUN_1108_388a(0,0,0xc,3,auStack_102,unaff_SS);
  *(bool *)in_stack_00000008 = iVar1 == 1;
  return;
}



/* ---- FUN_1000_0dc2 @ 1000:0dc2  (443 octets) ---- */

void __stdcall16far FUN_1000_0dc2(undefined4 param_1)

{
  undefined extraout_AH;
  undefined extraout_AH_00;
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  byte extraout_AH_01;
  undefined extraout_AH_02;
  undefined extraout_AH_03;
  byte extraout_AH_04;
  byte extraout_AH_05;
  byte extraout_AH_06;
  undefined extraout_AH_07;
  undefined extraout_AH_08;
  byte extraout_AH_09;
  undefined extraout_AH_10;
  undefined extraout_AH_11;
  int iVar6;
  undefined2 uVar7;
  undefined2 uVar8;
  undefined2 uVar9;
  undefined4 uVar10;
  
  FUN_1158_0444();
  uVar8 = (undefined2)((ulong)param_1 >> 0x10);
  iVar6 = (int)param_1;
  FUN_1130_129b((int)*(undefined4 *)(iVar6 + 0x2b0),
                (int)((ulong)*(undefined4 *)(iVar6 + 0x2b0) >> 0x10),
                CONCAT11(extraout_AH,DAT_1160_014a));
  FUN_1130_129b((int)*(undefined4 *)(iVar6 + 0x1b8),
                (int)((ulong)*(undefined4 *)(iVar6 + 0x1b8) >> 0x10),
                CONCAT11(extraout_AH_00,DAT_1160_014a));
  uVar9 = (undefined2)((ulong)*(undefined4 *)(iVar6 + 0x1bc) >> 0x10);
  uVar7 = (undefined2)*(undefined4 *)(iVar6 + 0x1bc);
  iVar1 = FUN_1130_1326(uVar7,uVar9);
  uVar2 = iVar1 - 1;
  if (SBORROW2(iVar1,1)) {
    uVar2 = FUN_1158_043e(0x1130);
  }
  uVar3 = 0;
  if (-1 < (int)uVar2) {
    uVar3 = 0;
    while( true ) {
      uVar10 = FUN_1130_1353(uVar7,uVar9,uVar3);
      uVar4 = uVar3 - 1;
      if (SBORROW2(uVar3,1)) {
        uVar4 = FUN_1158_043e(0x1130);
      }
      uVar5 = uVar4 & 0xff00;
      if ((int)uVar4 <= DAT_1160_014e) {
        uVar5 = uVar5 + 1;
      }
      FUN_1130_13a5(uVar10,uVar5);
      if (uVar3 == uVar2) break;
      uVar3 = uVar3 + 1;
    }
  }
  uVar3 = uVar3 & 0xff00;
  if (1 < DAT_1160_014c) {
    uVar3 = uVar3 + 1;
  }
  FUN_1130_129b((int)*(undefined4 *)(iVar6 + 0x1c4),
                (int)((ulong)*(undefined4 *)(iVar6 + 0x1c4) >> 0x10),uVar3);
  iVar1 = (uint)extraout_AH_01 * 0x100;
  if (1 < DAT_1160_014c) {
    iVar1 = iVar1 + 1;
  }
  FUN_1130_129b((int)*(undefined4 *)(iVar6 + 0x1fc),
                (int)((ulong)*(undefined4 *)(iVar6 + 0x1fc) >> 0x10),iVar1);
  FUN_1130_129b((int)*(undefined4 *)(iVar6 + 0x280),
                (int)((ulong)*(undefined4 *)(iVar6 + 0x280) >> 0x10),
                CONCAT11(extraout_AH_02,DAT_1160_014a));
  FUN_1130_129b((int)*(undefined4 *)(iVar6 + 0x1d4),
                (int)((ulong)*(undefined4 *)(iVar6 + 0x1d4) >> 0x10),
                CONCAT11(extraout_AH_03,DAT_1160_014a));
  iVar1 = (uint)extraout_AH_04 * 0x100;
  if (1 < DAT_1160_014c) {
    iVar1 = iVar1 + 1;
  }
  FUN_1130_129b((int)*(undefined4 *)(iVar6 + 0x1dc),
                (int)((ulong)*(undefined4 *)(iVar6 + 0x1dc) >> 0x10),iVar1);
  iVar1 = (uint)extraout_AH_05 * 0x100;
  if (2 < DAT_1160_1e06) {
    iVar1 = iVar1 + 1;
  }
  FUN_1130_129b((int)*(undefined4 *)(iVar6 + 0x1ec),
                (int)((ulong)*(undefined4 *)(iVar6 + 0x1ec) >> 0x10),iVar1);
  iVar1 = (uint)extraout_AH_06 * 0x100;
  if (2 < DAT_1160_1e06) {
    iVar1 = iVar1 + 1;
  }
  FUN_1130_129b((int)*(undefined4 *)(iVar6 + 0x1f0),
                (int)((ulong)*(undefined4 *)(iVar6 + 0x1f0) >> 0x10),iVar1);
  FUN_1130_129b((int)*(undefined4 *)(iVar6 + 0x1b0),
                (int)((ulong)*(undefined4 *)(iVar6 + 0x1b0) >> 0x10),
                CONCAT11(extraout_AH_07,DAT_1160_014a));
  FUN_1130_129b((int)*(undefined4 *)(iVar6 + 0x230),
                (int)((ulong)*(undefined4 *)(iVar6 + 0x230) >> 0x10),
                CONCAT11(extraout_AH_08,DAT_1160_014a));
  iVar1 = (uint)extraout_AH_09 * 0x100;
  if (1 < DAT_1160_014c) {
    iVar1 = iVar1 + 1;
  }
  FUN_1130_129b((int)*(undefined4 *)(iVar6 + 0x238),
                (int)((ulong)*(undefined4 *)(iVar6 + 0x238) >> 0x10),
                CONCAT11((char)((uint)iVar1 >> 8),(byte)iVar1 & DAT_1160_014a));
  FUN_1130_129b((int)*(undefined4 *)(iVar6 + 0x1bc),
                (int)((ulong)*(undefined4 *)(iVar6 + 0x1bc) >> 0x10),
                CONCAT11(extraout_AH_10,DAT_1160_014a));
  FUN_1130_129b((int)*(undefined4 *)(iVar6 + 0x26c),
                (int)((ulong)*(undefined4 *)(iVar6 + 0x26c) >> 0x10),
                CONCAT11(extraout_AH_11,DAT_1160_014a));
  return;
}



/* ---- FUN_1000_0fa9 @ 1000:0fa9  (400 octets) ---- */

void __stdcall16far FUN_1000_0fa9(undefined4 param_1)

{
  undefined2 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  byte extraout_AH;
  byte extraout_AH_00;
  int iVar5;
  undefined2 uVar6;
  char *pcVar7;
  char *pcVar8;
  undefined2 unaff_SS;
  undefined4 *puVar9;
  char *pcStack_2e;
  char *pcStack_2c;
  undefined2 uStack_2a;
  uint uStack_28;
  undefined2 uStack_26;
  undefined *puStack_24;
  undefined2 uStack_22;
  undefined2 uStack_20;
  int local_14;
  uint3 local_12;
  undefined uStack_f;
  uint local_e;
  undefined4 local_c;
  uint local_6;
  
  local_6 = 0xfb4;
  FUN_1158_0444();
  uStack_20 = 0x1158;
  uStack_22 = 3999;
  uStack_26 = DAT_1160_1858;
  if (DAT_1160_014a == '\0') {
    return;
  }
  uVar6 = (undefined2)((ulong)param_1 >> 0x10);
  iVar5 = (int)param_1;
  local_c = *(undefined4 *)(iVar5 + 0x1bc);
  uStack_28 = (uint)((ulong)local_c >> 0x10);
  uStack_2a = (undefined2)local_c;
  pcStack_2c = (char *)0x1158;
  pcVar7 = (char *)0x1130;
  pcStack_2e = (char *)0xfe4;
  DAT_1160_1858 = (char **)&uStack_26;
  puStack_24 = &stack0xfffe;
  iVar3 = FUN_1130_1326();
  local_e = iVar3 - 1;
  if (SBORROW2(iVar3,1)) {
    uStack_28 = 0x1130;
    pcVar7 = (char *)0x1158;
    uStack_2a = 0xfee;
    local_e = FUN_1158_043e();
  }
  uStack_28 = 0;
  if (-1 < (int)local_e) {
    local_6 = 0;
    while( true ) {
      uStack_28 = local_6;
      uStack_2a = (undefined2)((ulong)local_c >> 0x10);
      pcStack_2c = (char *)local_c;
      pcVar8 = (char *)0x1130;
      pcStack_2e = pcVar7;
      _local_12 = FUN_1130_1353();
      uVar4 = local_6 - 1;
      if (SBORROW2(local_6,1)) {
        uStack_28 = 0x1130;
        pcVar8 = (char *)0x1158;
        uStack_2a = 0x1024;
        uVar4 = FUN_1158_043e();
      }
      uStack_28 = uVar4 & 0xff00;
      if ((int)uVar4 <= DAT_1160_014e) {
        uStack_28 = uStack_28 + 1;
      }
      uStack_2a = (undefined2)((ulong)_local_12 >> 0x10);
      pcStack_2c = (char *)_local_12;
      pcVar7 = (char *)0x1130;
      pcStack_2e = pcVar8;
      FUN_1130_13a5();
      uStack_28 = local_6;
      if (local_6 == local_e) break;
      local_6 = local_6 + 1;
    }
  }
  uStack_28 = uStack_28 & 0xff00;
  if (2 < DAT_1160_1e06) {
    uStack_28 = uStack_28 + 1;
  }
  uStack_2a = (undefined2)((ulong)*(undefined4 *)(iVar5 + 0x1ec) >> 0x10);
  pcStack_2c = (char *)*(undefined4 *)(iVar5 + 0x1ec);
  pcStack_2e = pcVar7;
  FUN_1130_13a5();
  uStack_28 = (uint)extraout_AH * 0x100;
  if (2 < DAT_1160_1e06) {
    uStack_28 = uStack_28 + 1;
  }
  uStack_2a = (undefined2)((ulong)*(undefined4 *)(iVar5 + 0x1f0) >> 0x10);
  pcStack_2c = (char *)*(undefined4 *)(iVar5 + 0x1f0);
  pcStack_2e = (char *)0x1130;
  FUN_1130_13a5();
  uStack_28 = (uint)extraout_AH_00 * 0x100;
  if (2 < DAT_1160_1e06) {
    uStack_28 = uStack_28 + 1;
  }
  uStack_2a = (undefined2)((ulong)*(undefined4 *)(iVar5 + 0x2e0) >> 0x10);
  pcStack_2c = (char *)*(undefined4 *)(iVar5 + 0x2e0);
  pcStack_2e = (char *)0x1130;
  FUN_1130_13a5();
  uStack_28 = (uint)((ulong)*(undefined4 *)(iVar5 + 0x234) >> 0x10);
  uStack_2a = (undefined2)*(undefined4 *)(iVar5 + 0x234);
  pcStack_2c = (char *)0x1130;
  pcStack_2e = (char *)s_sDate_1160_10a7;
  local_c._0_2_ = uStack_2a;
  local_c._2_2_ = uStack_28;
  FUN_10d8_31d2();
  uStack_28 = 1;
  uStack_2a = local_c._2_2_;
  pcStack_2c = (char *)(undefined2)local_c;
  pcStack_2e = (char *)0x10d8;
  FUN_10e0_2ffb();
  uStack_28 = 0;
  uStack_2a = local_c._2_2_;
  pcStack_2c = (char *)(undefined2)local_c;
  pcStack_2e = (char *)s_iTime_1160_10dc + 4;
  FUN_10e0_2ed2();
  uStack_28 = local_c._2_2_;
  uStack_2a = (undefined2)local_c;
  pcStack_2c = (char *)s_iTime_1160_10dc + 4;
  pcStack_2e = (char *)0x10c9;
  FUN_10d8_31bf();
  uStack_28 = 0x10d8;
  uStack_2a = 0xf88;
  pcStack_2e = (char *)DAT_1160_1858;
  local_14 = DAT_1160_014c;
  local_12 = (uint3)(uint)(DAT_1160_014c >> 0xf);
  DAT_1160_1858 = &pcStack_2e;
  pcStack_2c = &stack0xfffe;
  FUN_10e0_2895((undefined2)local_c,local_c._2_2_,0,&local_14,unaff_SS);
  puVar9 = (undefined4 *)
           FUN_10d8_3b9b((undefined2)local_c,local_c._2_2_,0xf7d,(char *)s_iTime_1160_10dc + 4);
  puVar1 = (undefined2 *)((int)*puVar9 + 0x38);
  puVar2 = (undefined4 *)puVar9;
  (*(code *)*puVar1)(0x10d8,puVar9);
  DAT_1160_1858 = (char **)puVar2;
  pcStack_2c = (char *)0x10d8;
  pcStack_2e = (char *)0x112c;
  FUN_10d8_31d2((undefined2)local_c,local_c._2_2_);
  return;
}



/* ---- FUN_1000_1271 @ 1000:1271  (409 octets) ---- */

void __stdcall16far FUN_1000_1271(undefined4 param_1)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 unaff_SS;
  undefined *puVar3;
  undefined2 uVar4;
  undefined *puVar5;
  undefined2 uVar6;
  undefined local_402 [256];
  undefined local_302 [256];
  undefined local_202 [256];
  undefined local_102 [252];
  undefined2 uStack_6;
  
  uStack_6 = 0x127c;
  FUN_1158_0444();
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  FUN_1158_17e7(0xff,local_102,unaff_SS,iVar1 + 0x2e4,uVar2);
  if (DAT_1160_014a != '\0') {
    puVar5 = local_202;
    uVar6 = unaff_SS;
    FUN_1158_17cd(local_102,unaff_SS);
    FUN_1158_184c(0x125b,0x1158);
    FUN_1158_184c(0x1dfa,0x1160);
    FUN_1158_184c(0x125f,0x1158);
    puVar3 = local_302;
    uVar4 = unaff_SS;
    FUN_1150_08a9(DAT_1160_1e06,DAT_1160_1e06 >> 0xf);
    FUN_1158_184c(puVar3,uVar4);
    FUN_1158_184c(0x1262,0x1158);
    FUN_1158_184c(0x1264,0x1158);
    puVar3 = local_402;
    uVar4 = unaff_SS;
    FUN_1150_08a9(DAT_1160_014c,DAT_1160_014c >> 0xf);
    FUN_1158_184c(puVar3,uVar4);
    FUN_1158_17e7(0xff,local_102,unaff_SS,puVar5,uVar6);
  }
  FUN_1138_1d8c(iVar1,uVar2,local_102,unaff_SS);
  if (DAT_1160_0042 == '\0') {
    FUN_1138_1d8c((int)*(undefined4 *)(iVar1 + 600),
                  (int)((ulong)*(undefined4 *)(iVar1 + 600) >> 0x10),0x1270,0x1138);
  }
  puVar5 = local_202;
  uVar4 = unaff_SS;
  FUN_1138_1d53((int)*(undefined4 *)(iVar1 + 600),(int)((ulong)*(undefined4 *)(iVar1 + 600) >> 0x10)
               );
  FUN_1138_1d8c((int)*(undefined4 *)(iVar1 + 0x24c),
                (int)((ulong)*(undefined4 *)(iVar1 + 0x24c) >> 0x10),puVar5,uVar4);
  puVar5 = local_202;
  uVar4 = unaff_SS;
  FUN_1138_1d53((int)*(undefined4 *)(iVar1 + 600),(int)((ulong)*(undefined4 *)(iVar1 + 600) >> 0x10)
               );
  FUN_1138_1d8c((int)*(undefined4 *)(iVar1 + 0x250),
                (int)((ulong)*(undefined4 *)(iVar1 + 0x250) >> 0x10),puVar5,uVar4);
  puVar5 = local_202;
  uVar4 = unaff_SS;
  FUN_1138_1d53((int)*(undefined4 *)(iVar1 + 600),(int)((ulong)*(undefined4 *)(iVar1 + 600) >> 0x10)
               );
  FUN_1138_1d8c((int)*(undefined4 *)(iVar1 + 0x254),
                (int)((ulong)*(undefined4 *)(iVar1 + 0x254) >> 0x10),puVar5,uVar4);
  FUN_1138_1d8c((int)*(undefined4 *)(iVar1 + 0x24c),
                (int)((ulong)*(undefined4 *)(iVar1 + 0x24c) >> 0x10),0x212f,0x1160);
  FUN_1138_1d8c((int)*(undefined4 *)(iVar1 + 0x250),
                (int)((ulong)*(undefined4 *)(iVar1 + 0x250) >> 0x10),0x222f,0x1160);
  FUN_1138_1d8c((int)*(undefined4 *)(iVar1 + 0x254),
                (int)((ulong)*(undefined4 *)(iVar1 + 0x254) >> 0x10),0x232f,0x1160);
  FUN_1138_1d8c((int)*(undefined4 *)(iVar1 + 0x248),
                (int)((ulong)*(undefined4 *)(iVar1 + 0x248) >> 0x10),local_102,unaff_SS);
  return;
}



/* ---- TTheMainForm_Quitter1Click @ 1000:140a  (24 octets) ---- */

void __stdcall16far TTheMainForm_Quitter1Click(undefined4 param_1)

{
  FUN_1158_0444();
  FUN_1140_5556((int)param_1,(int)((ulong)param_1 >> 0x10));
  return;
}



/* ---- TTheMainForm_Nouveau1Click @ 1000:1948  (1 octets) ---- */

void TTheMainForm_Nouveau1Click(undefined2 param_1,undefined4 param_2)

{
  int iVar1;
  undefined2 *puVar2;
  undefined4 *puVar3;
  undefined extraout_AH;
  int iVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  undefined2 unaff_SS;
  undefined uVar7;
  undefined *puVar8;
  undefined2 uVar9;
  undefined2 uStack_614;
  undefined *puStack_612;
  undefined2 uStack_610;
  undefined2 uStack_60e;
  undefined auStack_50c [256];
  undefined4 uStack_40c;
  undefined4 uStack_408;
  undefined auStack_404 [256];
  int iStack_304;
  char acStack_302 [256];
  undefined auStack_202 [256];
  undefined uStack_102;
  undefined uStack_101;
  undefined2 uStack_6;
  
  uStack_6 = 0x1953;
  FUN_1158_0444();
  if (DAT_1160_0042 == '\0') {
    uStack_60e = 0x1158;
    uStack_610 = 0x1942;
    uStack_614 = DAT_1160_1858;
    auStack_202[0] = 0;
    acStack_302[0] = '\0';
    DAT_1160_1858 = &uStack_614;
    puStack_612 = &stack0xfffe;
    uStack_408 = FUN_1140_2553(0x17a8,(char *)s_windows_1160_100f + 1,0x1901,(undefined2)param_2,
                               param_2._2_2_);
    puVar8 = auStack_50c;
    uVar6 = (undefined2)((ulong)DAT_1160_2c2a >> 0x10);
    uVar5 = (undefined2)DAT_1160_2c2a;
    uVar9 = unaff_SS;
    uStack_40c = uStack_408;
    func_0x114077d3(0x1140,uVar5,uVar6,puVar8);
    FUN_1150_0b6e(uVar5,uVar6);
    FUN_1158_17e7(0xff,&uStack_102,unaff_SS,puVar8,uVar9);
    FUN_10c0_1ca4((int)*(undefined4 *)((int)uStack_40c + 0x1ac),
                  (int)((ulong)*(undefined4 *)((int)uStack_40c + 0x1ac) >> 0x10),
                  CONCAT11(extraout_AH,uStack_101));
    puVar3 = (undefined4 *)*(undefined4 *)((int)uStack_40c + 0x1a8);
    puVar2 = (undefined2 *)((int)*puVar3 + 0x84);
    (*(code *)*puVar2)((char *)s_sLongDate_1160_10b8 + 8,(undefined4 *)puVar3,
                       (int)((ulong)puVar3 >> 0x10),&uStack_102);
    iStack_304 = 1;
    uVar9 = (int)uStack_40c;
    iVar4 = FUN_1140_5d45(uStack_40c);
    uVar7 = iVar4 == 1;
    iVar4 = iStack_304;
    if ((bool)uVar7) {
      puVar8 = auStack_50c;
      uVar5 = unaff_SS;
      FUN_1100_1524((int)*(undefined4 *)((int)uStack_40c + 400),
                    (int)((ulong)*(undefined4 *)((int)uStack_40c + 400) >> 0x10));
      FUN_1158_17e7(0xff,acStack_302,unaff_SS,puVar8,uVar5);
      puVar8 = auStack_50c;
      uVar5 = unaff_SS;
      FUN_10c0_264a((int)*(undefined4 *)((int)uStack_40c + 0x1a8),
                    (int)((ulong)*(undefined4 *)((int)uStack_40c + 0x1a8) >> 0x10));
      FUN_1158_184c(0x191f,(char *)s_sLongDate_1160_10b8 + 8);
      FUN_1158_184c(acStack_302,unaff_SS);
      FUN_1158_184c(0x1921,0x1158);
      FUN_1158_184c(0x1926,0x1158);
      FUN_1158_17e7(0xff,auStack_202,unaff_SS,puVar8,uVar5);
      iVar1 = *(int *)((int)*(undefined4 *)((int)uStack_40c + 0x194) + 0xe4);
      iVar4 = iVar1 + 1;
      uVar7 = iVar4 == 0;
      if (SCARRY2(iVar1,1)) {
        iVar4 = FUN_1158_043e(0x1158);
      }
    }
    iStack_304 = iVar4;
    FUN_1140_5f1d(uStack_40c);
    uVar5 = 0x1158;
    FUN_1158_18be(0x1921,0x1140,acStack_302,unaff_SS);
    if ((bool)uVar7) {
      FUN_1158_17e7(0xff,auStack_404,unaff_SS,0x192a,0x1158);
      MESSAGEBEEP(0x1158,0x30);
      uVar5 = 0x1108;
      FUN_1108_388a(0,0,4,1,auStack_404,unaff_SS);
    }
    else if (acStack_302[0] != '\0') {
      uVar5 = 0x1000;
      func_0x10001c22(0x1158,(undefined2)param_2,param_2._2_2_,iStack_304,auStack_202);
    }
    DAT_1160_1858 = (undefined2 *)uVar9;
    uVar9 = 0x1b29;
    FUN_1158_0eb2(0x44,0x1160);
    FUN_1158_0408(uVar9,uVar5);
    return;
  }
  uStack_60e = 0x1158;
  uStack_610 = 0x1963;
  FUN_1010_352b();
  return;
}



/* ---- TTheMainForm_Ouvrir1Click @ 1000:2289  (1 octets) ---- */

void TTheMainForm_Ouvrir1Click(undefined2 param_1,undefined4 param_2)

{
  undefined2 *puVar1;
  char cVar2;
  undefined2 uVar3;
  undefined4 *puVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  undefined2 unaff_CS;
  undefined2 uStack_20e;
  undefined *puStack_20c;
  undefined2 uStack_20a;
  undefined2 uStack_208;
  undefined auStack_106 [256];
  undefined2 uStack_6;
  
  _uStack_6 = (undefined4 *)CONCAT22(unaff_CS,0x2294);
  FUN_1158_0444();
  uStack_208 = 0x1158;
  uStack_20a = 0x2283;
  uStack_20e = DAT_1160_1858;
  uVar5 = (undefined2)((ulong)param_2 >> 0x10);
  _uStack_6 = (undefined4 *)*(undefined4 *)((int)param_2 + 0x198);
  uVar6 = (undefined2)((ulong)DAT_1160_2c2a >> 0x10);
  uVar3 = (undefined2)DAT_1160_2c2a;
  DAT_1160_1858 = (undefined4 *)&uStack_20e;
  puStack_20c = &stack0xfffe;
  func_0x114077d3(0x1158,uVar3,uVar6,auStack_106);
  FUN_1150_0b6e(uVar3,uVar6);
  func_0x11082819(0x1150,(undefined4 *)_uStack_6,(int)((ulong)_uStack_6 >> 0x10));
  FUN_1158_17e7(3,(int)(undefined4 *)_uStack_6 + 0x37,(int)((ulong)_uStack_6 >> 0x10),0x2274,0x1108)
  ;
  uVar3 = 0x1158;
  FUN_1158_17e7(0x4f,(int)(undefined4 *)_uStack_6 + 0x3b,(int)((ulong)_uStack_6 >> 0x10),0x2277,
                0x1158);
  puVar4 = (undefined4 *)_uStack_6;
  puVar1 = (undefined2 *)((int)*_uStack_6 + 0x34);
  cVar2 = (*(code *)*puVar1)(0x1158,puVar4,(int)((ulong)_uStack_6 >> 0x10));
  if (cVar2 != '\0') {
    uVar3 = 0x1000;
    func_0x10002440(0x1158,(int)param_2,uVar5,(int)(undefined4 *)_uStack_6 + 0x3b,
                    (int)((ulong)_uStack_6 >> 0x10));
  }
  DAT_1160_1858 = puVar4;
  uVar5 = 0x2343;
  FUN_1158_0eb2(0x44,0x1160);
  FUN_1158_0408(uVar5,uVar3);
  return;
}



/* ---- TTheMainForm_Fermer1Click @ 1000:28af  (24 octets) ---- */

void __stdcall16far TTheMainForm_Fermer1Click(undefined4 param_1)

{
  FUN_1158_0444();
  FUN_1000_28c7((int)param_1,(int)((ulong)param_1 >> 0x10));
  return;
}



/* ---- FUN_1000_28c7 @ 1000:28c7  (146 octets) ---- */

void __stdcall16far FUN_1000_28c7(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  undefined4 uVar7;
  
  FUN_1158_0444();
  uVar5 = (undefined2)((ulong)param_1 >> 0x10);
  iVar3 = (int)param_1;
  FUN_10d8_2672((int)*(undefined4 *)(iVar3 + 0x214),
                (int)((ulong)*(undefined4 *)(iVar3 + 0x214) >> 0x10),0);
  uVar6 = (undefined2)((ulong)*(undefined4 *)(iVar3 + 0x214) >> 0x10);
  uVar4 = (undefined2)*(undefined4 *)(iVar3 + 0x214);
  iVar1 = FUN_10d8_2132(uVar4,uVar6);
  iVar2 = iVar1 + -1;
  if (SBORROW2(iVar1,1)) {
    iVar2 = FUN_1158_043e(0x10d8);
  }
  if (-1 < iVar2) {
    iVar1 = 0;
    while( true ) {
      uVar7 = FUN_10d8_210d(uVar4,uVar6,iVar1);
      FUN_10d8_31d2(uVar7);
      if (iVar1 == iVar2) break;
      iVar1 = iVar1 + 1;
    }
  }
  DAT_1160_014a = 0;
  DAT_1160_014c = 0;
  FUN_1000_1271(iVar3,uVar5);
  FUN_1000_0dc2(iVar3,uVar5);
  return;
}



/* ---- TTheMainForm_Impressions1Click @ 1000:2959  (43 octets) ---- */

void __stdcall16far TTheMainForm_Impressions1Click(undefined4 param_1)

{
  undefined2 uVar1;
  
  FUN_1158_0444();
  uVar1 = (undefined2)((ulong)param_1 >> 0x10);
  FUN_1138_1cb8((int)param_1,uVar1,0);
  FUN_1028_0d6b();
  FUN_1138_1cb8((int)param_1,uVar1,1);
  return;
}



/* ---- TTheMainForm_DecisionsE1Click @ 1000:29ce  (1 octets) ---- */

void TTheMainForm_DecisionsE1Click
               (undefined2 param_1,undefined4 param_2,undefined2 param_3,undefined2 param_4)

{
  undefined2 *puVar1;
  undefined4 *puVar2;
  char cVar3;
  int iVar4;
  undefined2 uVar5;
  char *pcVar6;
  undefined2 unaff_SS;
  undefined4 *puVar7;
  char *pcStack_118;
  char *pcStack_116;
  undefined2 uStack_114;
  undefined2 uStack_112;
  int iStack_110;
  int iStack_10e;
  undefined uStack_10c;
  undefined2 uStack_108;
  undefined2 uStack_106;
  undefined2 uStack_6;
  
  uStack_6 = 0x29d9;
  FUN_1158_0444();
  uStack_112 = 0;
  uVar5 = (undefined2)((ulong)param_2 >> 0x10);
  iVar4 = (int)param_2;
  pcStack_118 = (char *)0x1158;
  pcStack_116 = (char *)iVar4;
  uStack_114 = uVar5;
  FUN_1138_1cb8();
  if (DAT_1160_0042 == '\0') {
    uStack_112 = param_4;
    uStack_114 = param_3;
    pcStack_116 = (char *)0x1130;
    pcStack_118 = (char *)0x94;
    pcVar6 = (char *)0x1158;
    cVar3 = FUN_1158_2255();
    if (cVar3 != '\0') {
      uStack_112 = (undefined2)((ulong)*(undefined4 *)(iVar4 + 0x234) >> 0x10);
      uStack_114 = (undefined2)*(undefined4 *)(iVar4 + 0x234);
      pcStack_116 = (char *)0x1158;
      pcStack_118 = (char *)0x2a2d;
      uStack_108 = uStack_114;
      uStack_106 = uStack_112;
      FUN_10d8_31d2();
      uStack_112 = 1;
      uStack_114 = uStack_106;
      pcStack_116 = (char *)uStack_108;
      pcStack_118 = (char *)0x10d8;
      FUN_10e0_2ffb();
      uStack_112 = 0;
      uStack_114 = uStack_106;
      pcStack_116 = (char *)uStack_108;
      pcStack_118 = (char *)s_iTime_1160_10dc + 4;
      FUN_10e0_2ed2();
      uStack_112 = uStack_106;
      uStack_114 = uStack_108;
      pcStack_116 = (char *)s_iTime_1160_10dc + 4;
      pcStack_118 = (char *)0x2a52;
      FUN_10d8_31bf();
      uStack_112 = 0x10d8;
      uStack_114 = 0x298f;
      pcStack_118 = (char *)DAT_1160_1858;
      iStack_10e = DAT_1160_014c >> 0xf;
      iStack_110 = DAT_1160_014c;
      uStack_10c = 0;
      DAT_1160_1858 = &pcStack_118;
      pcStack_116 = &stack0xfffe;
      FUN_10e0_2895(uStack_108,uStack_106,0,&iStack_110,unaff_SS);
      puVar7 = (undefined4 *)
               FUN_10d8_3b9b(uStack_108,uStack_106,0x2984,(char *)s_iTime_1160_10dc + 4);
      puVar1 = (undefined2 *)((int)*puVar7 + 0x38);
      puVar2 = (undefined4 *)puVar7;
      (*(code *)*puVar1)(0x10d8,puVar7);
      DAT_1160_1858 = (char **)puVar2;
      pcStack_116 = (char *)0x10d8;
      pcStack_118 = (char *)0x2abc;
      FUN_10d8_31d2(uStack_108,uStack_106);
      return;
    }
  }
  else {
    uStack_112 = 0x1138;
    pcVar6 = (char *)s_windows_1160_100f + 1;
    uStack_114 = 0x29f5;
    FUN_1010_352b();
  }
  uStack_112 = 1;
  pcStack_118 = pcVar6;
  pcStack_116 = (char *)iVar4;
  uStack_114 = uVar5;
  FUN_1138_1cb8();
  return;
}



/* ---- TTheMainForm_RappelsE1Click @ 1000:2b14  (55 octets) ---- */

void __stdcall16far TTheMainForm_RappelsE1Click(undefined4 param_1)

{
  undefined2 uVar1;
  
  FUN_1158_0444();
  uVar1 = (undefined2)((ulong)param_1 >> 0x10);
  FUN_1138_1cb8((int)param_1,uVar1,0);
  FUN_1078_0ca1(DAT_1160_0150,DAT_1160_014c,DAT_1160_0150);
  FUN_1138_1cb8((int)param_1,uVar1,1);
  return;
}



/* ---- FUN_1000_2b4b @ 1000:2b4b  (293 octets) ---- */

void __stdcall16far FUN_1000_2b4b(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  FUN_1158_0444();
  while (iVar3 = DAT_1160_0148, iVar2 = DAT_1160_0146, iVar1 = DAT_1160_0144,
        DAT_1160_0148 < DAT_1160_014c &&
        (((0 < DAT_1160_0144 && -1 < DAT_1160_0146) && DAT_1160_0146 <= DAT_1160_014e) &&
        0 < DAT_1160_0148)) {
    DAT_1160_0144 = -1;
    DAT_1160_0146 = -1;
    DAT_1160_0148 = -1;
    if (iVar1 == 0xb) {
      FUN_1008_0c4a(iVar3);
    }
    else if (iVar1 == 0xc) {
      FUN_1070_0ca8(iVar3);
    }
    else if (iVar1 == 0x15) {
      FUN_1060_22c3(iVar2,iVar3);
    }
    else if (iVar1 == 0x16) {
      FUN_1058_1ce8(iVar2,iVar3);
    }
    else if (iVar1 == 0x17) {
      FUN_1050_0df7(iVar2,iVar3);
    }
    else if (iVar1 == 0x18) {
      FUN_1048_131a(iVar2,iVar3);
    }
    else if (iVar1 == 0x19) {
      FUN_1040_1430(iVar2,iVar3);
    }
    else if (iVar1 == 0x1a) {
      FUN_1038_1439(iVar2,iVar3);
    }
  }
  DAT_1160_0144 = 0xffff;
  DAT_1160_0146 = 0xffff;
  DAT_1160_0148 = 0xffff;
  return;
}



/* ---- TTheMainForm_Situation1Click @ 1000:2c70  (45 octets) ---- */

void __stdcall16far TTheMainForm_Situation1Click(undefined4 param_1)

{
  int iVar1;
  
  FUN_1158_0444();
  iVar1 = DAT_1160_014c + -1;
  if (SBORROW2(DAT_1160_014c,1)) {
    iVar1 = FUN_1158_043e(0x1158);
  }
  FUN_1060_22c3(1,iVar1);
  FUN_1000_2b4b((int)param_1,(int)((ulong)param_1 >> 0x10));
  return;
}



/* ---- TTheMainForm_ComptedeResultats1Click @ 1000:2c9d  (45 octets) ---- */

void __stdcall16far TTheMainForm_ComptedeResultats1Click(undefined4 param_1)

{
  int iVar1;
  
  FUN_1158_0444();
  iVar1 = DAT_1160_014c + -1;
  if (SBORROW2(DAT_1160_014c,1)) {
    iVar1 = FUN_1158_043e(0x1158);
  }
  FUN_1058_1ce8(1,iVar1);
  FUN_1000_2b4b((int)param_1,(int)((ulong)param_1 >> 0x10));
  return;
}



/* ---- TTheMainForm_Bilan1Click @ 1000:2cca  (45 octets) ---- */

void __stdcall16far TTheMainForm_Bilan1Click(undefined4 param_1)

{
  int iVar1;
  
  FUN_1158_0444();
  iVar1 = DAT_1160_014c + -1;
  if (SBORROW2(DAT_1160_014c,1)) {
    iVar1 = FUN_1158_043e(0x1158);
  }
  FUN_1050_0df7(1,iVar1);
  FUN_1000_2b4b((int)param_1,(int)((ulong)param_1 >> 0x10));
  return;
}



/* ---- TTheMainForm_TableaudeFinancement1Click @ 1000:2cf7  (61 octets) ---- */

void __stdcall16far TTheMainForm_TableaudeFinancement1Click(undefined4 param_1)

{
  int iVar1;
  
  FUN_1158_0444();
  if (DAT_1160_1e06 < 3) {
    MESSAGEBEEP(0x1158,0x30);
  }
  else {
    iVar1 = DAT_1160_014c + -1;
    if (SBORROW2(DAT_1160_014c,1)) {
      iVar1 = FUN_1158_043e(0x1158);
    }
    FUN_1048_131a(1,iVar1);
    FUN_1000_2b4b((int)param_1,(int)((ulong)param_1 >> 0x10));
  }
  return;
}



/* ---- TTheMainForm_TableaudeTresorerie1Click @ 1000:2d34  (61 octets) ---- */

void __stdcall16far TTheMainForm_TableaudeTresorerie1Click(undefined4 param_1)

{
  int iVar1;
  
  FUN_1158_0444();
  if (DAT_1160_1e06 < 3) {
    MESSAGEBEEP(0x1158,0x30);
  }
  else {
    iVar1 = DAT_1160_014c + -1;
    if (SBORROW2(DAT_1160_014c,1)) {
      iVar1 = FUN_1158_043e(0x1158);
    }
    FUN_1040_1430(1,iVar1);
    FUN_1000_2b4b((int)param_1,(int)((ulong)param_1 >> 0x10));
  }
  return;
}



/* ---- TTheMainForm_SIG1Click @ 1000:2d71  (45 octets) ---- */

void __stdcall16far TTheMainForm_SIG1Click(undefined4 param_1)

{
  int iVar1;
  
  FUN_1158_0444();
  iVar1 = DAT_1160_014c + -1;
  if (SBORROW2(DAT_1160_014c,1)) {
    iVar1 = FUN_1158_043e(0x1158);
  }
  FUN_1038_1439(1,iVar1);
  FUN_1000_2b4b((int)param_1,(int)((ulong)param_1 >> 0x10));
  return;
}



/* ---- TTheMainForm_EtudesdeMarche1Click @ 1000:2d9e  (35 octets) ---- */

void __stdcall16far TTheMainForm_EtudesdeMarche1Click(void)

{
  int iVar1;
  
  FUN_1158_0444();
  iVar1 = DAT_1160_014c + -1;
  if (SBORROW2(DAT_1160_014c,1)) {
    iVar1 = FUN_1158_043e(0x1158);
  }
  FUN_1030_0764(1,iVar1);
  return;
}



/* ---- TTheMainForm_DecisionsAnimateurClick @ 1000:2dc1  (67 octets) ---- */

void __stdcall16far TTheMainForm_DecisionsAnimateurClick(undefined4 param_1)

{
  undefined2 uVar1;
  undefined2 uVar2;
  
  FUN_1158_0444();
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  uVar1 = (undefined2)param_1;
  FUN_1138_1cb8(uVar1,uVar2,0);
  if (DAT_1160_0042 == '\0') {
    FUN_1088_0db7();
    FUN_1000_0fa9(uVar1,uVar2);
  }
  else {
    FUN_1010_352b();
  }
  FUN_1138_1cb8(uVar1,uVar2,1);
  return;
}



/* ---- TTheMainForm_DAEnt1Click @ 1000:2e4e  (1 octets) ---- */

void TTheMainForm_DAEnt1Click
               (undefined2 param_1,undefined4 param_2,undefined2 param_3,undefined2 param_4)

{
  undefined2 *puVar1;
  undefined4 *puVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined2 uVar7;
  char *pcVar8;
  undefined2 uVar9;
  undefined2 unaff_SS;
  undefined4 *puVar10;
  char *pcStack_11a;
  char *pcStack_118;
  undefined4 uStack_116;
  int iStack_112;
  int iStack_110;
  undefined uStack_10e;
  undefined2 uStack_10a;
  undefined2 uStack_108;
  int iStack_6;
  
  iStack_6 = 0x2e59;
  FUN_1158_0444();
  uStack_116._2_2_ = 0;
  uVar7 = (undefined2)((ulong)param_2 >> 0x10);
  iVar6 = (int)param_2;
  pcStack_11a = (char *)0x1158;
  pcStack_118 = (char *)iVar6;
  uStack_116._0_2_ = (undefined2 *)uVar7;
  FUN_1138_1cb8();
  if (DAT_1160_0042 == '\0') {
    uStack_116._2_2_ = param_4;
    uStack_116._0_2_ = (undefined2 *)param_3;
    pcStack_118 = (char *)0x1130;
    pcStack_11a = (char *)0x94;
    pcVar8 = (char *)0x1158;
    cVar3 = FUN_1158_2255();
    if (cVar3 != '\0') {
      uStack_116._2_2_ = param_4;
      uStack_116._0_2_ = (undefined2 *)param_3;
      pcStack_118 = (char *)0x1130;
      pcStack_11a = (char *)0x94;
      uStack_116 = FUN_1158_2273();
      pcStack_118 = (char *)((ulong)*(undefined4 *)(iVar6 + 0x1bc) >> 0x10);
      pcStack_11a = (char *)(char *)*(undefined4 *)(iVar6 + 0x1bc);
      uVar9 = 0x1130;
      iVar4 = FUN_1130_162b();
      iVar5 = iVar4 + -1;
      if (SBORROW2(iVar4,1)) {
        uStack_116._2_2_ = 0x1130;
        uVar9 = 0x1158;
        uStack_116._0_2_ = (undefined2 *)&DAT_1160_2ec0;
        iVar5 = FUN_1158_043e();
      }
      iStack_6 = iVar5;
      if (iVar5 == -1) {
        iStack_6 = 0;
      }
      uStack_116._2_2_ = (undefined2)((ulong)*(undefined4 *)(iVar6 + 0x234) >> 0x10);
      uStack_116._0_2_ = (undefined2 *)*(undefined4 *)(iVar6 + 0x234);
      pcStack_11a = (char *)0x2ee9;
      pcStack_118 = (char *)uVar9;
      uStack_10a = (undefined2 *)uStack_116;
      uStack_108 = uStack_116._2_2_;
      FUN_10d8_31d2();
      uStack_116._2_2_ = 1;
      uStack_116._0_2_ = (undefined2 *)uStack_108;
      pcStack_118 = (char *)uStack_10a;
      pcStack_11a = (char *)0x10d8;
      FUN_10e0_2ffb();
      uStack_116._2_2_ = 0;
      uStack_116._0_2_ = (undefined2 *)uStack_108;
      pcStack_118 = (char *)uStack_10a;
      pcStack_11a = (char *)s_iTime_1160_10dc + 4;
      FUN_10e0_2ed2();
      uStack_116._2_2_ = uStack_108;
      uStack_116._0_2_ = (undefined2 *)uStack_10a;
      pcStack_118 = (char *)s_iTime_1160_10dc + 4;
      pcStack_11a = (char *)0x2f0e;
      FUN_10d8_31bf();
      uStack_116._2_2_ = 0x10d8;
      uStack_116._0_2_ = (undefined2 *)0x2e0f;
      pcStack_11a = (char *)DAT_1160_1858;
      iStack_110 = DAT_1160_014c >> 0xf;
      iStack_112 = DAT_1160_014c;
      uStack_10e = 0;
      DAT_1160_1858 = &pcStack_11a;
      pcStack_118 = &stack0xfffe;
      FUN_10e0_2895(uStack_10a,uStack_108,0,&iStack_112,unaff_SS);
      puVar10 = (undefined4 *)
                FUN_10d8_3b9b(uStack_10a,uStack_108,0x2e04,(char *)s_iTime_1160_10dc + 4);
      puVar1 = (undefined2 *)((int)*puVar10 + 0x38);
      puVar2 = (undefined4 *)puVar10;
      (*(code *)*puVar1)(0x10d8,puVar10);
      DAT_1160_1858 = (char **)puVar2;
      pcStack_118 = (char *)0x10d8;
      pcStack_11a = (char *)0x2f78;
      FUN_10d8_31d2(uStack_10a,uStack_108);
      return;
    }
  }
  else {
    uStack_116._2_2_ = 0x1138;
    pcVar8 = (char *)s_windows_1160_100f + 1;
    uStack_116._0_2_ = (undefined2 *)0x2e75;
    FUN_1010_352b();
  }
  uStack_116._2_2_ = 1;
  pcStack_11a = pcVar8;
  pcStack_118 = (char *)iVar6;
  uStack_116._0_2_ = (undefined2 *)uVar7;
  FUN_1138_1cb8();
  return;
}



/* ---- TTheMainForm_DecisionsA2Click @ 1000:2fcf  (47 octets) ---- */

void __stdcall16far TTheMainForm_DecisionsA2Click(undefined4 param_1)

{
  undefined2 uVar1;
  
  FUN_1158_0444();
  uVar1 = (undefined2)((ulong)param_1 >> 0x10);
  FUN_1138_1cb8((int)param_1,uVar1,0);
  FUN_1088_0e44(DAT_1160_014c);
  FUN_1138_1cb8((int)param_1,uVar1,1);
  return;
}



/* ---- TTheMainForm_ArbitrageA1Click @ 1000:2ffe  (100 octets) ---- */

void __stdcall16far TTheMainForm_ArbitrageA1Click(undefined4 param_1)

{
  undefined2 uVar1;
  undefined2 uVar2;
  
  FUN_1158_0444();
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  uVar1 = (undefined2)param_1;
  FUN_1138_1cb8(uVar1,uVar2,0);
  if (DAT_1160_0042 == '\0') {
    FUN_1018_03d9();
    FUN_1000_1271(uVar1,uVar2);
    FUN_1000_0dc2(uVar1,uVar2);
    FUN_1000_0fa9(uVar1,uVar2);
    FUN_1140_63a9((int)DAT_1160_2c2e,(int)((ulong)DAT_1160_2c2e >> 0x10),0xfffe);
  }
  else {
    FUN_1010_352b();
  }
  FUN_1138_1cb8(uVar1,uVar2,1);
  return;
}



/* ---- TTheMainForm_CreationA2Click @ 1000:3062  (43 octets) ---- */

void __stdcall16far TTheMainForm_CreationA2Click(undefined4 param_1)

{
  undefined2 uVar1;
  
  FUN_1158_0444();
  uVar1 = (undefined2)((ulong)param_1 >> 0x10);
  FUN_1138_1cb8((int)param_1,uVar1,0);
  FUN_1098_0942();
  FUN_1138_1cb8((int)param_1,uVar1,1);
  return;
}



/* ---- TTheMainForm_EntreprisesA2Click @ 1000:308d  (55 octets) ---- */

void __stdcall16far TTheMainForm_EntreprisesA2Click(undefined4 param_1)

{
  undefined2 uVar1;
  
  FUN_1158_0444();
  uVar1 = (undefined2)((ulong)param_1 >> 0x10);
  FUN_1138_1cb8((int)param_1,uVar1,0);
  FUN_1078_0ca1(DAT_1160_0150,DAT_1160_014c,DAT_1160_0150);
  FUN_1138_1cb8((int)param_1,uVar1,1);
  return;
}



/* ---- TTheMainForm_RepriseA1Click @ 1000:30c4  (87 octets) ---- */

void __stdcall16far TTheMainForm_RepriseA1Click(undefined4 param_1)

{
  undefined2 uVar1;
  undefined2 uVar2;
  
  FUN_1158_0444();
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  uVar1 = (undefined2)param_1;
  FUN_1138_1cb8(uVar1,uVar2,0);
  if (DAT_1160_0042 == '\0') {
    FUN_1010_10f4();
    FUN_1000_1271(uVar1,uVar2);
    FUN_1000_0dc2(uVar1,uVar2);
    FUN_1000_0fa9(uVar1,uVar2);
  }
  else {
    FUN_1010_352b();
  }
  FUN_1138_1cb8(uVar1,uVar2,1);
  return;
}



/* ---- TTheMainForm_ParProduits1Click @ 1000:311b  (43 octets) ---- */

void __stdcall16far TTheMainForm_ParProduits1Click(undefined4 param_1)

{
  int iVar1;
  
  FUN_1158_0444();
  iVar1 = DAT_1160_014c + -1;
  if (SBORROW2(DAT_1160_014c,1)) {
    iVar1 = FUN_1158_043e(0x1158);
  }
  FUN_1008_0c4a(iVar1);
  FUN_1000_2b4b((int)param_1,(int)((ulong)param_1 >> 0x10));
  return;
}



/* ---- TTheMainForm_Generaux1Click @ 1000:3146  (43 octets) ---- */

void __stdcall16far TTheMainForm_Generaux1Click(undefined4 param_1)

{
  int iVar1;
  
  FUN_1158_0444();
  iVar1 = DAT_1160_014c + -1;
  if (SBORROW2(DAT_1160_014c,1)) {
    iVar1 = FUN_1158_043e(0x1158);
  }
  FUN_1070_0ca8(iVar1);
  FUN_1000_2b4b((int)param_1,(int)((ulong)param_1 >> 0x10));
  return;
}



/* ---- TTheMainForm_Public1Click @ 1000:31bb  (1 octets) ---- */

void TTheMainForm_Public1Click(undefined2 param_1,undefined4 param_2)

{
  undefined2 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined2 unaff_SS;
  undefined4 *puVar4;
  char *pcStack_118;
  char *pcStack_116;
  undefined2 uStack_114;
  undefined2 uStack_112;
  int iStack_110;
  int iStack_10e;
  undefined uStack_10c;
  undefined2 uStack_108;
  undefined2 uStack_106;
  undefined2 uStack_6;
  
  uStack_6 = 0x31c6;
  FUN_1158_0444();
  uVar2 = *(undefined4 *)((int)param_2 + 0x234);
  uStack_112 = (undefined2)((ulong)uVar2 >> 0x10);
  uStack_114 = (undefined2)uVar2;
  pcStack_116 = (char *)0x1158;
  pcStack_118 = (char *)0x31e5;
  uStack_108 = uStack_114;
  uStack_106 = uStack_112;
  FUN_10d8_31d2();
  uStack_112 = 1;
  uStack_114 = uStack_106;
  pcStack_116 = (char *)uStack_108;
  pcStack_118 = (char *)0x10d8;
  FUN_10e0_2ffb();
  uStack_112 = 0;
  uStack_114 = uStack_106;
  pcStack_116 = (char *)uStack_108;
  pcStack_118 = (char *)s_iTime_1160_10dc + 4;
  FUN_10e0_2ed2();
  uStack_112 = uStack_106;
  uStack_114 = uStack_108;
  pcStack_116 = (char *)s_iTime_1160_10dc + 4;
  pcStack_118 = (char *)0x320a;
  FUN_10d8_31bf();
  uStack_112 = 0x10d8;
  uStack_114 = 0x317c;
  pcStack_118 = (char *)DAT_1160_1858;
  iStack_10e = DAT_1160_014c >> 0xf;
  iStack_110 = DAT_1160_014c;
  uStack_10c = 0;
  DAT_1160_1858 = &pcStack_118;
  pcStack_116 = &stack0xfffe;
  FUN_10e0_2895(uStack_108,uStack_106,0,&iStack_110,unaff_SS);
  puVar4 = (undefined4 *)FUN_10d8_3b9b(uStack_108,uStack_106,0x3171,(char *)s_iTime_1160_10dc + 4);
  puVar1 = (undefined2 *)((int)*puVar4 + 0x38);
  puVar3 = (undefined4 *)puVar4;
  (*(code *)*puVar1)(0x10d8,puVar4);
  DAT_1160_1858 = (char **)puVar3;
  pcStack_116 = (char *)0x10d8;
  pcStack_118 = (char *)0x3274;
  FUN_10d8_31d2(uStack_108,uStack_106);
  return;
}



/* ---- TTheMainForm_InfosJEU1Click @ 1000:32d0  (19 octets) ---- */

void __stdcall16far TTheMainForm_InfosJEU1Click(void)

{
  FUN_1158_0444();
  FUN_1010_203e();
  return;
}



/* ---- TTheMainForm_Graphes1Click @ 1000:32e3  (19 octets) ---- */

void __stdcall16far TTheMainForm_Graphes1Click(void)

{
  FUN_1158_0444();
  FUN_1020_1087();
  return;
}



/* ---- TTheMainForm_VoirTTABLE1Click @ 1000:32f6  (33 octets) ---- */

void __stdcall16far TTheMainForm_VoirTTABLE1Click(void)

{
  FUN_1158_0444();
  if (DAT_1160_0042 == '\0') {
    FUN_1010_0411();
  }
  else {
    FUN_1010_352b();
  }
  return;
}



/* ---- TTheMainForm_Index1Click @ 1000:3317  (31 octets) ---- */

void __stdcall16far TTheMainForm_Index1Click(void)

{
  FUN_1158_0444();
  FUN_1140_77b2((int)DAT_1160_2c2a,(int)((ulong)DAT_1160_2c2a >> 0x10),0,0,3);
  return;
}



/* ---- TTheMainForm_Rechercher1Click @ 1000:3336  (33 octets) ---- */

void __stdcall16far TTheMainForm_Rechercher1Click(void)

{
  FUN_1158_0444();
  FUN_1140_77b2((int)DAT_1160_2c2a,(int)((ulong)DAT_1160_2c2a >> 0x10),0x170,0x1160,0x105);
  return;
}



/* ---- TTheMainForm_Utiliserlaide1Click @ 1000:3357  (31 octets) ---- */

void __stdcall16far TTheMainForm_Utiliserlaide1Click(void)

{
  FUN_1158_0444();
  FUN_1140_77b2((int)DAT_1160_2c2a,(int)((ulong)DAT_1160_2c2a >> 0x10),0,0,4);
  return;
}



/* ---- TTheMainForm_Apropos1Click @ 1000:3376  (29 octets) ---- */

void __stdcall16far TTheMainForm_Apropos1Click(void)

{
  undefined2 uVar1;
  
  uVar1 = 0x3381;
  FUN_1158_0444();
  FUN_1140_5d45((int)DAT_1160_2008,(int)((ulong)DAT_1160_2008 >> 0x10),uVar1);
  return;
}



/* ---- TTheMainForm_PaintBox1Paint @ 1000:382b  (1 octets) ---- */

void TTheMainForm_PaintBox1Paint(undefined2 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined2 uVar7;
  undefined2 unaff_SS;
  undefined auStack_106 [256];
  int iStack_6;
  
  iStack_6 = 0x3836;
  FUN_1158_0444();
  if (DAT_1160_0042 != '\0') {
    uVar1 = *(undefined4 *)((int)param_2 + 0x2b8);
    FUN_1158_17e7(0xff,auStack_106,unaff_SS,0x381d,0x1158);
    uVar1 = *(undefined4 *)((int)uVar1 + 0x8a);
    uVar7 = (undefined2)((ulong)uVar1 >> 0x10);
    iVar2 = (int)uVar1;
    iVar3 = FUN_1128_204e(iVar2,uVar7,auStack_106,unaff_SS);
    iVar4 = FUN_1128_2003(iVar2,uVar7,auStack_106,unaff_SS);
    iVar4 = iVar4 / 2;
    iVar5 = FUN_1128_204e(iVar2,uVar7,auStack_106,unaff_SS);
    iVar6 = iVar5 + iVar4;
    if (SCARRY2(iVar5,iVar4)) {
      iVar6 = FUN_1158_043e(0x1128);
    }
    iStack_6 = iVar6;
    FUN_1128_177c((int)*(undefined4 *)(iVar2 + 0xf),
                  (int)((ulong)*(undefined4 *)(iVar2 + 0xf) >> 0x10),1);
    FUN_1128_1f09(iVar2,uVar7,auStack_106,unaff_SS,iStack_6,iVar3 / 3);
  }
  return;
}



/* ---- TTheMainForm_Timer1Timer @ 1000:38f4  (25 octets) ---- */

void __stdcall16far TTheMainForm_Timer1Timer(void)

{
  FUN_1158_0444();
  FUN_1140_7543((int)DAT_1160_2c2a,(int)((ulong)DAT_1160_2c2a >> 0x10));
  return;
}



/* ---- TTheMainForm_Memoire1Click @ 1000:3918  (1 octets) ---- */

void TTheMainForm_Memoire1Click(void)

{
  undefined2 unaff_SS;
  undefined4 uVar1;
  undefined *puVar2;
  undefined2 uVar3;
  undefined *puVar4;
  undefined2 uVar5;
  undefined auStack_302 [256];
  undefined auStack_202 [256];
  undefined auStack_102 [252];
  undefined2 uStack_6;
  
  uStack_6 = 0x3923;
  FUN_1158_0444();
  puVar4 = auStack_302;
  uVar5 = unaff_SS;
  FUN_1158_17cd(0x390d,0x1158);
  puVar2 = auStack_202;
  uVar3 = unaff_SS;
  uVar1 = func_0x115801bc(0x1158,puVar2);
  FUN_1150_08a9(uVar1);
  FUN_1158_184c(puVar2,uVar3);
  FUN_1158_17e7(0xff,auStack_102,unaff_SS,puVar4,uVar5);
  FUN_1108_388a(0,0,4,2,auStack_102,unaff_SS);
  return;
}



/* ---- TTheMainForm_Essai1Click @ 1000:3973  (21 octets) ---- */

void __stdcall16far TTheMainForm_Essai1Click(void)

{
  FUN_1158_0444();
  MESSAGEBEEP(0x1158,0x30);
  return;
}



/* ---- TTheMainForm_Timer1Info1Click @ 1000:3993  (1 octets) ---- */

void TTheMainForm_Timer1Info1Click(undefined2 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined2 unaff_SS;
  undefined *puVar2;
  undefined2 uVar3;
  undefined *puVar4;
  undefined2 uVar5;
  undefined auStack_302 [256];
  undefined auStack_202 [256];
  undefined auStack_102 [252];
  undefined2 uStack_6;
  
  uStack_6 = 0x399e;
  FUN_1158_0444();
  puVar4 = auStack_302;
  uVar5 = unaff_SS;
  FUN_1158_17cd(0x3988,0x1158);
  puVar2 = auStack_202;
  uVar1 = *(undefined4 *)((int)param_2 + 0x2b4);
  uVar3 = unaff_SS;
  FUN_1150_08a9(*(undefined2 *)((int)uVar1 + 0x1c),0);
  FUN_1158_184c(puVar2,uVar3);
  FUN_1158_17e7(0xff,auStack_102,unaff_SS,puVar4,uVar5);
  FUN_1108_388a(0,0,4,2,auStack_102,unaff_SS);
  return;
}



/* ---- TTheMainForm_niv11Click @ 1000:39f7  (30 octets) ---- */

void __stdcall16far TTheMainForm_niv11Click(undefined4 param_1)

{
  FUN_1158_0444();
  DAT_1160_1e06 = 1;
  FUN_1000_0fa9((int)param_1,(int)((ulong)param_1 >> 0x10));
  return;
}



/* ---- TTheMainForm_niv21Click @ 1000:3a15  (30 octets) ---- */

void __stdcall16far TTheMainForm_niv21Click(undefined4 param_1)

{
  FUN_1158_0444();
  DAT_1160_1e06 = 2;
  FUN_1000_0fa9((int)param_1,(int)((ulong)param_1 >> 0x10));
  return;
}



/* ---- TTheMainForm_niv31Click @ 1000:3a33  (30 octets) ---- */

void __stdcall16far TTheMainForm_niv31Click(undefined4 param_1)

{
  FUN_1158_0444();
  DAT_1160_1e06 = 3;
  FUN_1000_0fa9((int)param_1,(int)((ulong)param_1 >> 0x10));
  return;
}



/* ---- TTheMainForm_niv41Click @ 1000:3a51  (30 octets) ---- */

void __stdcall16far TTheMainForm_niv41Click(undefined4 param_1)

{
  FUN_1158_0444();
  DAT_1160_1e06 = 4;
  FUN_1000_0fa9((int)param_1,(int)((ulong)param_1 >> 0x10));
  return;
}



/* ---- TTheMainForm_Creation1Click @ 1000:3a6f  (19 octets) ---- */

void __stdcall16far TTheMainForm_Creation1Click(void)

{
  FUN_1158_0444();
  FUN_10a0_14dd();
  return;
}



/* ---- TTheMainForm_animateur2Click @ 1000:3a82  (23 octets) ---- */

void __stdcall16far TTheMainForm_animateur2Click(void)

{
  FUN_1158_0444();
  FUN_1090_14f1(DAT_1160_014c);
  return;
}



/* ---- TTheMainForm_entreprises2Click @ 1000:3a99  (25 octets) ---- */

void __stdcall16far TTheMainForm_entreprises2Click(void)

{
  FUN_1158_0444();
  FUN_1080_1300(1,DAT_1160_014c);
  return;
}



/* ---- TTheMainForm_Impressionrapide1Click @ 1000:3ab2  (69 octets) ---- */

void __stdcall16far TTheMainForm_Impressionrapide1Click(undefined4 param_1)

{
  undefined4 uVar1;
  char cVar2;
  int iVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  
  FUN_1158_0444();
  uVar4 = (undefined2)((ulong)param_1 >> 0x10);
  uVar1 = *(undefined4 *)((int)param_1 + 0x2cc);
  uVar5 = (undefined2)((ulong)uVar1 >> 0x10);
  iVar3 = (int)uVar1;
  cVar2 = FUN_1108_2b0d(iVar3,uVar5);
  if (cVar2 != '\0') {
    uVar1 = *(undefined4 *)((int)param_1 + 0x2c8);
    FUN_1138_1deb((int)uVar1,(int)((ulong)uVar1 >> 0x10),*(undefined2 *)(iVar3 + 0x1f),
                  *(undefined2 *)(iVar3 + 0x21));
  }
  return;
}



/* ---- FUN_1000_3c6b @ 1000:3c6b  (62 octets) ---- */

undefined2 __cdecl16far FUN_1000_3c6b(void)

{
  undefined extraout_AH;
  undefined2 uVar1;
  undefined4 uVar2;
  
  FUN_1158_0444();
  uVar2 = FUN_1140_2553(0x3b17,0x1000,CONCAT11(extraout_AH,1),(undefined2)DAT_1160_2c2a,
                        DAT_1160_2c2a._2_2_);
  uVar1 = FUN_1140_5d45(uVar2);
  return uVar1;
}



/* ---- TFormSEDD_AutoCorr_FormClose @ 1000:3ca9  (21 octets) ---- */

void __stdcall16far
TFormSEDD_AutoCorr_FormClose(undefined2 param_1_00,undefined2 param_2,undefined *param_1)

{
  FUN_1158_0444();
  *param_1 = 2;
  return;
}



/* ---- FUN_1000_3e32 @ 1000:3e32  (207 octets) ---- */

int __stdcall16far FUN_1000_3e32(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 unaff_SS;
  undefined *puVar4;
  undefined local_10c [256];
  undefined4 local_c;
  undefined4 local_8;
  
  iVar2 = param_1;
  local_8 = CONCAT22(0x3e3d,(undefined2)local_8);
  FUN_1158_0444();
  local_8 = FUN_1140_2553(0x3cde,0x1000,1,(undefined2)DAT_1160_2c2a,DAT_1160_2c2a._2_2_);
  if (param_2 < param_1) {
    param_1 = param_2;
  }
  puVar4 = local_10c;
  iVar1 = DAT_1160_014c + -1;
  local_c = local_8;
  if (SBORROW2(DAT_1160_014c,1)) {
    iVar1 = FUN_1158_043e(0x1140,puVar4);
  }
  FUN_1150_08a9(iVar1,iVar1 >> 0xf);
  FUN_1138_1d8c((int)*(undefined4 *)((int)local_c + 0x194),
                (int)((ulong)*(undefined4 *)((int)local_c + 0x194) >> 0x10),puVar4,unaff_SS);
  uVar3 = (undefined2)((ulong)*(undefined4 *)((int)local_c + 400) >> 0x10);
  iVar1 = (int)*(undefined4 *)((int)local_c + 400);
  *(int *)(iVar1 + 0xf0) = param_2;
  *(int *)(iVar1 + 0xf2) = param_2 >> 0xf;
  FUN_10f0_178b((int)*(undefined4 *)((int)local_c + 400),
                (int)((ulong)*(undefined4 *)((int)local_c + 400) >> 0x10),param_1,param_1 >> 0xf);
  iVar1 = FUN_1140_5d45(local_c);
  if (iVar1 == 1) {
    FUN_10f0_1733((int)*(undefined4 *)((int)local_c + 400),
                  (int)((ulong)*(undefined4 *)((int)local_c + 400) >> 0x10));
    iVar2 = FUN_1158_0416();
  }
  return iVar2;
}



/* ---- TFormSJGP_GetPeriode_FormClose @ 1000:3f01  (32 octets) ---- */

void __stdcall16far
TFormSJGP_GetPeriode_FormClose(undefined2 param_1_00,undefined2 param_2,undefined *param_1)

{
  FUN_1158_0444();
  FUN_1140_7303((int)DAT_1160_2c2a,(int)((ulong)DAT_1160_2c2a >> 0x10));
  *param_1 = 2;
  return;
}



/* ---- TFormSJGP_GetPeriode_FormShow @ 1000:3f21  (73 octets) ---- */

void __stdcall16far TFormSJGP_GetPeriode_FormShow(undefined4 param_1)

{
  undefined4 uVar1;
  byte bVar3;
  int iVar2;
  int iVar4;
  undefined2 uVar5;
  
  FUN_1158_0444();
  uVar1 = *(undefined4 *)((int)param_1 + 400);
  uVar5 = (undefined2)((ulong)uVar1 >> 0x10);
  iVar4 = (int)uVar1;
  bVar3 = (byte)((uint)*(int *)(iVar4 + 0xec) >> 8);
  if ((*(int *)(iVar4 + 0xee) == *(int *)(iVar4 + 0xf2)) &&
     (*(int *)(iVar4 + 0xec) == *(int *)(iVar4 + 0xf0))) {
    iVar2 = (uint)bVar3 << 8;
  }
  else {
    iVar2 = CONCAT11(bVar3,1);
  }
  FUN_1138_1cb8(iVar4,uVar5,iVar2);
  return;
}



/* ---- TFormSJGP_GetPeriode_FormCreate @ 1000:3f6a  (14 octets) ---- */

void __stdcall16far TFormSJGP_GetPeriode_FormCreate(void)

{
  FUN_1158_0444();
  return;
}




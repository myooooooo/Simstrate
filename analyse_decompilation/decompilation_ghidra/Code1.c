/* Simstrat (FR).EXE - segment Code1 - 50 fonctions
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



/* ---- FUN_1000_0ce0 @ 1000:0ce0  (75 octets) ---- */

void __stdcall16far FUN_1000_0ce0(undefined4 param_1)

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



/* ---- FUN_1000_0d2b @ 1000:0d2b  (50 octets) ---- */

void __stdcall16far FUN_1000_0d2b(undefined4 param_1)

{
  FUN_1158_0444();
  FUN_1140_77b2((int)DAT_1160_2c2a,(int)((ulong)DAT_1160_2c2a >> 0x10),0,0,2);
  FUN_1158_0eb2((int)param_1 + 0x3e4,(int)((ulong)param_1 >> 0x10));
  FUN_1158_0408();
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



/* ---- FUN_1000_140a @ 1000:140a  (24 octets) ---- */

void __stdcall16far FUN_1000_140a(undefined4 param_1)

{
  FUN_1158_0444();
  FUN_1140_5556((int)param_1,(int)((ulong)param_1 >> 0x10));
  return;
}



/* ---- FUN_1000_28af @ 1000:28af  (24 octets) ---- */

void __stdcall16far FUN_1000_28af(undefined4 param_1)

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



/* ---- FUN_1000_2959 @ 1000:2959  (43 octets) ---- */

void __stdcall16far FUN_1000_2959(undefined4 param_1)

{
  undefined2 uVar1;
  
  FUN_1158_0444();
  uVar1 = (undefined2)((ulong)param_1 >> 0x10);
  FUN_1138_1cb8((int)param_1,uVar1,0);
  FUN_1028_0d6b();
  FUN_1138_1cb8((int)param_1,uVar1,1);
  return;
}



/* ---- FUN_1000_2b14 @ 1000:2b14  (55 octets) ---- */

void __stdcall16far FUN_1000_2b14(undefined4 param_1)

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



/* ---- FUN_1000_2c70 @ 1000:2c70  (45 octets) ---- */

void __stdcall16far FUN_1000_2c70(undefined4 param_1)

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



/* ---- FUN_1000_2c9d @ 1000:2c9d  (45 octets) ---- */

void __stdcall16far FUN_1000_2c9d(undefined4 param_1)

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



/* ---- FUN_1000_2cca @ 1000:2cca  (45 octets) ---- */

void __stdcall16far FUN_1000_2cca(undefined4 param_1)

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



/* ---- FUN_1000_2cf7 @ 1000:2cf7  (61 octets) ---- */

void __stdcall16far FUN_1000_2cf7(undefined4 param_1)

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



/* ---- FUN_1000_2d34 @ 1000:2d34  (61 octets) ---- */

void __stdcall16far FUN_1000_2d34(undefined4 param_1)

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



/* ---- FUN_1000_2d71 @ 1000:2d71  (45 octets) ---- */

void __stdcall16far FUN_1000_2d71(undefined4 param_1)

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



/* ---- FUN_1000_2d9e @ 1000:2d9e  (35 octets) ---- */

void __stdcall16far FUN_1000_2d9e(void)

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



/* ---- FUN_1000_2dc1 @ 1000:2dc1  (67 octets) ---- */

void __stdcall16far FUN_1000_2dc1(undefined4 param_1)

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



/* ---- FUN_1000_2fcf @ 1000:2fcf  (47 octets) ---- */

void __stdcall16far FUN_1000_2fcf(undefined4 param_1)

{
  undefined2 uVar1;
  
  FUN_1158_0444();
  uVar1 = (undefined2)((ulong)param_1 >> 0x10);
  FUN_1138_1cb8((int)param_1,uVar1,0);
  FUN_1088_0e44(DAT_1160_014c);
  FUN_1138_1cb8((int)param_1,uVar1,1);
  return;
}



/* ---- FUN_1000_2ffe @ 1000:2ffe  (100 octets) ---- */

void __stdcall16far FUN_1000_2ffe(undefined4 param_1)

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



/* ---- FUN_1000_3062 @ 1000:3062  (43 octets) ---- */

void __stdcall16far FUN_1000_3062(undefined4 param_1)

{
  undefined2 uVar1;
  
  FUN_1158_0444();
  uVar1 = (undefined2)((ulong)param_1 >> 0x10);
  FUN_1138_1cb8((int)param_1,uVar1,0);
  FUN_1098_0942();
  FUN_1138_1cb8((int)param_1,uVar1,1);
  return;
}



/* ---- FUN_1000_308d @ 1000:308d  (55 octets) ---- */

void __stdcall16far FUN_1000_308d(undefined4 param_1)

{
  undefined2 uVar1;
  
  FUN_1158_0444();
  uVar1 = (undefined2)((ulong)param_1 >> 0x10);
  FUN_1138_1cb8((int)param_1,uVar1,0);
  FUN_1078_0ca1(DAT_1160_0150,DAT_1160_014c,DAT_1160_0150);
  FUN_1138_1cb8((int)param_1,uVar1,1);
  return;
}



/* ---- FUN_1000_30c4 @ 1000:30c4  (87 octets) ---- */

void __stdcall16far FUN_1000_30c4(undefined4 param_1)

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



/* ---- FUN_1000_311b @ 1000:311b  (43 octets) ---- */

void __stdcall16far FUN_1000_311b(undefined4 param_1)

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



/* ---- FUN_1000_3146 @ 1000:3146  (43 octets) ---- */

void __stdcall16far FUN_1000_3146(undefined4 param_1)

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



/* ---- FUN_1000_32d0 @ 1000:32d0  (19 octets) ---- */

void __stdcall16far FUN_1000_32d0(void)

{
  FUN_1158_0444();
  FUN_1010_203e();
  return;
}



/* ---- FUN_1000_32e3 @ 1000:32e3  (19 octets) ---- */

void __stdcall16far FUN_1000_32e3(void)

{
  FUN_1158_0444();
  FUN_1020_1087();
  return;
}



/* ---- FUN_1000_32f6 @ 1000:32f6  (33 octets) ---- */

void __stdcall16far FUN_1000_32f6(void)

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



/* ---- FUN_1000_3317 @ 1000:3317  (31 octets) ---- */

void __stdcall16far FUN_1000_3317(void)

{
  FUN_1158_0444();
  FUN_1140_77b2((int)DAT_1160_2c2a,(int)((ulong)DAT_1160_2c2a >> 0x10),0,0,3);
  return;
}



/* ---- FUN_1000_3336 @ 1000:3336  (33 octets) ---- */

void __stdcall16far FUN_1000_3336(void)

{
  FUN_1158_0444();
  FUN_1140_77b2((int)DAT_1160_2c2a,(int)((ulong)DAT_1160_2c2a >> 0x10),0x170,0x1160,0x105);
  return;
}



/* ---- FUN_1000_3357 @ 1000:3357  (31 octets) ---- */

void __stdcall16far FUN_1000_3357(void)

{
  FUN_1158_0444();
  FUN_1140_77b2((int)DAT_1160_2c2a,(int)((ulong)DAT_1160_2c2a >> 0x10),0,0,4);
  return;
}



/* ---- FUN_1000_3376 @ 1000:3376  (29 octets) ---- */

void __stdcall16far FUN_1000_3376(void)

{
  undefined2 uVar1;
  
  uVar1 = 0x3381;
  FUN_1158_0444();
  FUN_1140_5d45((int)DAT_1160_2008,(int)((ulong)DAT_1160_2008 >> 0x10),uVar1);
  return;
}



/* ---- FUN_1000_38f4 @ 1000:38f4  (25 octets) ---- */

void __stdcall16far FUN_1000_38f4(void)

{
  FUN_1158_0444();
  FUN_1140_7543((int)DAT_1160_2c2a,(int)((ulong)DAT_1160_2c2a >> 0x10));
  return;
}



/* ---- FUN_1000_3973 @ 1000:3973  (21 octets) ---- */

void __stdcall16far FUN_1000_3973(void)

{
  FUN_1158_0444();
  MESSAGEBEEP(0x1158,0x30);
  return;
}



/* ---- FUN_1000_39f7 @ 1000:39f7  (30 octets) ---- */

void __stdcall16far FUN_1000_39f7(undefined4 param_1)

{
  FUN_1158_0444();
  DAT_1160_1e06 = 1;
  FUN_1000_0fa9((int)param_1,(int)((ulong)param_1 >> 0x10));
  return;
}



/* ---- FUN_1000_3a15 @ 1000:3a15  (30 octets) ---- */

void __stdcall16far FUN_1000_3a15(undefined4 param_1)

{
  FUN_1158_0444();
  DAT_1160_1e06 = 2;
  FUN_1000_0fa9((int)param_1,(int)((ulong)param_1 >> 0x10));
  return;
}



/* ---- FUN_1000_3a33 @ 1000:3a33  (30 octets) ---- */

void __stdcall16far FUN_1000_3a33(undefined4 param_1)

{
  FUN_1158_0444();
  DAT_1160_1e06 = 3;
  FUN_1000_0fa9((int)param_1,(int)((ulong)param_1 >> 0x10));
  return;
}



/* ---- FUN_1000_3a51 @ 1000:3a51  (30 octets) ---- */

void __stdcall16far FUN_1000_3a51(undefined4 param_1)

{
  FUN_1158_0444();
  DAT_1160_1e06 = 4;
  FUN_1000_0fa9((int)param_1,(int)((ulong)param_1 >> 0x10));
  return;
}



/* ---- FUN_1000_3a6f @ 1000:3a6f  (19 octets) ---- */

void __stdcall16far FUN_1000_3a6f(void)

{
  FUN_1158_0444();
  FUN_10a0_14dd();
  return;
}



/* ---- FUN_1000_3a82 @ 1000:3a82  (23 octets) ---- */

void __stdcall16far FUN_1000_3a82(void)

{
  FUN_1158_0444();
  FUN_1090_14f1(DAT_1160_014c);
  return;
}



/* ---- FUN_1000_3a99 @ 1000:3a99  (25 octets) ---- */

void __stdcall16far FUN_1000_3a99(void)

{
  FUN_1158_0444();
  FUN_1080_1300(1,DAT_1160_014c);
  return;
}



/* ---- FUN_1000_3ab2 @ 1000:3ab2  (69 octets) ---- */

void __stdcall16far FUN_1000_3ab2(undefined4 param_1)

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



/* ---- FUN_1000_3ca9 @ 1000:3ca9  (21 octets) ---- */

void __stdcall16far FUN_1000_3ca9(undefined2 param_1_00,undefined2 param_2,undefined *param_1)

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



/* ---- FUN_1000_3f01 @ 1000:3f01  (32 octets) ---- */

void __stdcall16far FUN_1000_3f01(undefined2 param_1_00,undefined2 param_2,undefined *param_1)

{
  FUN_1158_0444();
  FUN_1140_7303((int)DAT_1160_2c2a,(int)((ulong)DAT_1160_2c2a >> 0x10));
  *param_1 = 2;
  return;
}



/* ---- FUN_1000_3f21 @ 1000:3f21  (73 octets) ---- */

void __stdcall16far FUN_1000_3f21(undefined4 param_1)

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



/* ---- FUN_1000_3f6a @ 1000:3f6a  (14 octets) ---- */

void __stdcall16far FUN_1000_3f6a(void)

{
  FUN_1158_0444();
  return;
}




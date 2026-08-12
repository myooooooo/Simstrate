/* Simstrat (FR).EXE - segment Code6 - 43 fonctions
   Decompile par Ghidra 11.2.1 (x86 16 bits, chargeur NE). */

/* ---- FUN_1028_0d6b @ 1028:0d6b  (107 octets) ---- */

void __cdecl16far FUN_1028_0d6b(void)

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
  
  _local_6 = CONCAT22(unaff_CS,0xd76);
  FUN_1158_0444();
  uStack_c = DAT_1160_2c2a._2_2_;
  uStack_e = (undefined2)DAT_1160_2c2a;
  uStack_10 = CONCAT11(extraout_AH,1);
  uStack_12 = 0x1028;
  uStack_14 = 0x22;
  uStack_16 = 0x1158;
  uStack_18 = 0xd91;
  local_a = FUN_1140_2553();
  uVar1 = (ulong)local_a >> 0x10;
  local_6 = (undefined2)local_a;
  uStack_16 = 0x1140;
  uStack_18 = 0xd65;
  uStack_1c = DAT_1160_1858;
  DAT_1160_1858 = &uStack_1c;
  puStack_1a = &stack0xfffe;
  FUN_1028_28ad(local_a);
  uVar2 = (undefined2)local_a;
  FUN_1140_5d45(local_a);
  DAT_1160_1858 = (undefined2 *)uVar2;
  puStack_1a = (undefined *)0x1140;
  uStack_1c = 0xdd6;
  FUN_1140_5f1d(local_6,(int)uVar1);
  return;
}



/* ---- FUN_1028_0dd8 @ 1028:0dd8  (26 octets) ---- */

void __stdcall16far FUN_1028_0dd8(void)

{
  FUN_1158_0444();
  FUN_1010_38c2(0);
  FUN_1150_28c3((char *)s_windows_1160_100f + 1);
  return;
}



/* ---- FUN_1028_0df2 @ 1028:0df2  (1237 octets) ---- */

void __stdcall16far FUN_1028_0df2(undefined4 param_1)

{
  int iVar1;
  
  FUN_1158_0444();
  DAT_1160_1fd8._2_2_ = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  DAT_1160_1fd8._0_2_ = iVar1 + 0x230;
  DAT_1160_1fdc._0_2_ = iVar1 + 0x234;
  DAT_1160_1fdc._2_2_ = DAT_1160_1fd8._2_2_;
  DAT_1160_1fe0._0_2_ = iVar1 + 0x23c;
  DAT_1160_1fe0._2_2_ = DAT_1160_1fd8._2_2_;
  DAT_1160_1fe4._0_2_ = iVar1 + 0x240;
  DAT_1160_1fe4._2_2_ = DAT_1160_1fd8._2_2_;
  DAT_1160_1fe8._0_2_ = iVar1 + 0x248;
  DAT_1160_1fe8._2_2_ = DAT_1160_1fd8._2_2_;
  DAT_1160_1fec._0_2_ = iVar1 + 0x24c;
  DAT_1160_1fec._2_2_ = DAT_1160_1fd8._2_2_;
  DAT_1160_1ff0._0_2_ = iVar1 + 0x250;
  DAT_1160_1ff0._2_2_ = DAT_1160_1fd8._2_2_;
  DAT_1160_1ff4._0_2_ = iVar1 + 0x254;
  DAT_1160_1ff4._2_2_ = DAT_1160_1fd8._2_2_;
  DAT_1160_1ff8._0_2_ = iVar1 + 600;
  DAT_1160_1ff8._2_2_ = DAT_1160_1fd8._2_2_;
  DAT_1160_1ffc._0_2_ = iVar1 + 0x25c;
  DAT_1160_1ffc._2_2_ = DAT_1160_1fd8._2_2_;
  DAT_1160_2000._0_2_ = iVar1 + 0x39c;
  DAT_1160_2000._2_2_ = DAT_1160_1fd8._2_2_;
  DAT_1160_1fc4._0_2_ = iVar1 + 0x324;
  DAT_1160_1fc4._2_2_ = DAT_1160_1fd8._2_2_;
  DAT_1160_1fc8._0_2_ = iVar1 + 0x184;
  DAT_1160_1fc8._2_2_ = DAT_1160_1fd8._2_2_;
  DAT_1160_1fcc._0_2_ = iVar1 + 0x188;
  DAT_1160_1fcc._2_2_ = DAT_1160_1fd8._2_2_;
  DAT_1160_1fd0 = 0;
  DAT_1160_1fd2 = 0;
  DAT_1160_1fd4 = 0;
  DAT_1160_1fd6 = 0;
  DAT_1160_1ea4 = iVar1 + 400;
  DAT_1160_1ea6 = DAT_1160_1fd8._2_2_;
  DAT_1160_1ea8 = iVar1 + 0x1b0;
  DAT_1160_1eaa = DAT_1160_1fd8._2_2_;
  DAT_1160_1eac = iVar1 + 0x198;
  DAT_1160_1eae = DAT_1160_1fd8._2_2_;
  DAT_1160_1eb0 = iVar1 + 0x19c;
  DAT_1160_1eb2 = DAT_1160_1fd8._2_2_;
  DAT_1160_1eb4 = iVar1 + 0x1a0;
  DAT_1160_1eb6 = DAT_1160_1fd8._2_2_;
  DAT_1160_1eb8 = iVar1 + 0x1a4;
  DAT_1160_1eba = DAT_1160_1fd8._2_2_;
  DAT_1160_1ebc = iVar1 + 0x1a8;
  DAT_1160_1ebe = DAT_1160_1fd8._2_2_;
  DAT_1160_1ec0 = iVar1 + 0x37c;
  DAT_1160_1ec2 = DAT_1160_1fd8._2_2_;
  DAT_1160_1ec4 = iVar1 + 0x300;
  DAT_1160_1ec6 = DAT_1160_1fd8._2_2_;
  DAT_1160_1ec8 = iVar1 + 0x1b8;
  DAT_1160_1eca = DAT_1160_1fd8._2_2_;
  DAT_1160_1ecc = iVar1 + 0x1d8;
  DAT_1160_1ece = DAT_1160_1fd8._2_2_;
  DAT_1160_1ed0 = iVar1 + 0x1c4;
  DAT_1160_1ed2 = DAT_1160_1fd8._2_2_;
  DAT_1160_1ed4 = iVar1 + 0x1c8;
  DAT_1160_1ed6 = DAT_1160_1fd8._2_2_;
  DAT_1160_1ed8 = iVar1 + 0x1cc;
  DAT_1160_1eda = DAT_1160_1fd8._2_2_;
  DAT_1160_1edc = iVar1 + 0x1d0;
  DAT_1160_1ede = DAT_1160_1fd8._2_2_;
  DAT_1160_1ee0 = iVar1 + 0x1d4;
  DAT_1160_1ee2 = DAT_1160_1fd8._2_2_;
  DAT_1160_1ee4 = iVar1 + 0x380;
  DAT_1160_1ee6 = DAT_1160_1fd8._2_2_;
  DAT_1160_1ee8 = iVar1 + 0x304;
  DAT_1160_1eea = DAT_1160_1fd8._2_2_;
  DAT_1160_1eec = iVar1 + 0x1e0;
  DAT_1160_1eee = DAT_1160_1fd8._2_2_;
  DAT_1160_1ef0 = iVar1 + 0x200;
  DAT_1160_1ef2 = DAT_1160_1fd8._2_2_;
  DAT_1160_1ef4 = iVar1 + 0x1ec;
  DAT_1160_1ef6 = DAT_1160_1fd8._2_2_;
  DAT_1160_1ef8 = iVar1 + 0x1f0;
  DAT_1160_1efa = DAT_1160_1fd8._2_2_;
  DAT_1160_1efc = iVar1 + 500;
  DAT_1160_1efe = DAT_1160_1fd8._2_2_;
  DAT_1160_1f00 = iVar1 + 0x1f8;
  DAT_1160_1f02 = DAT_1160_1fd8._2_2_;
  DAT_1160_1f04 = iVar1 + 0x1fc;
  DAT_1160_1f06 = DAT_1160_1fd8._2_2_;
  DAT_1160_1f08 = iVar1 + 900;
  DAT_1160_1f0a = DAT_1160_1fd8._2_2_;
  DAT_1160_1f0c = iVar1 + 0x308;
  DAT_1160_1f0e = DAT_1160_1fd8._2_2_;
  DAT_1160_1f10 = iVar1 + 0x208;
  DAT_1160_1f12 = DAT_1160_1fd8._2_2_;
  DAT_1160_1f14 = iVar1 + 0x228;
  DAT_1160_1f16 = DAT_1160_1fd8._2_2_;
  DAT_1160_1f18 = iVar1 + 0x214;
  DAT_1160_1f1a = DAT_1160_1fd8._2_2_;
  DAT_1160_1f1c = iVar1 + 0x218;
  DAT_1160_1f1e = DAT_1160_1fd8._2_2_;
  DAT_1160_1f20 = iVar1 + 0x21c;
  DAT_1160_1f22 = DAT_1160_1fd8._2_2_;
  DAT_1160_1f24 = iVar1 + 0x220;
  DAT_1160_1f26 = DAT_1160_1fd8._2_2_;
  DAT_1160_1f28 = iVar1 + 0x224;
  DAT_1160_1f2a = DAT_1160_1fd8._2_2_;
  DAT_1160_1f2c = iVar1 + 0x388;
  DAT_1160_1f2e = DAT_1160_1fd8._2_2_;
  DAT_1160_1f30 = iVar1 + 0x30c;
  DAT_1160_1f32 = DAT_1160_1fd8._2_2_;
  DAT_1160_1f34 = iVar1 + 0x264;
  DAT_1160_1f36 = DAT_1160_1fd8._2_2_;
  DAT_1160_1f38 = iVar1 + 0x284;
  DAT_1160_1f3a = DAT_1160_1fd8._2_2_;
  DAT_1160_1f3c = iVar1 + 0x270;
  DAT_1160_1f3e = DAT_1160_1fd8._2_2_;
  DAT_1160_1f40 = iVar1 + 0x274;
  DAT_1160_1f42 = DAT_1160_1fd8._2_2_;
  DAT_1160_1f44 = iVar1 + 0x278;
  DAT_1160_1f46 = DAT_1160_1fd8._2_2_;
  DAT_1160_1f48 = iVar1 + 0x27c;
  DAT_1160_1f4a = DAT_1160_1fd8._2_2_;
  DAT_1160_1f4c = iVar1 + 0x280;
  DAT_1160_1f4e = DAT_1160_1fd8._2_2_;
  DAT_1160_1f50 = iVar1 + 0x38c;
  DAT_1160_1f52 = DAT_1160_1fd8._2_2_;
  DAT_1160_1f54 = iVar1 + 0x310;
  DAT_1160_1f56 = DAT_1160_1fd8._2_2_;
  DAT_1160_1f58 = iVar1 + 0x28c;
  DAT_1160_1f5a = DAT_1160_1fd8._2_2_;
  DAT_1160_1f5c = iVar1 + 0x2ac;
  DAT_1160_1f5e = DAT_1160_1fd8._2_2_;
  DAT_1160_1f60 = iVar1 + 0x298;
  DAT_1160_1f62 = DAT_1160_1fd8._2_2_;
  DAT_1160_1f64 = iVar1 + 0x29c;
  DAT_1160_1f66 = DAT_1160_1fd8._2_2_;
  DAT_1160_1f68 = iVar1 + 0x2a0;
  DAT_1160_1f6a = DAT_1160_1fd8._2_2_;
  DAT_1160_1f6c = iVar1 + 0x2a4;
  DAT_1160_1f6e = DAT_1160_1fd8._2_2_;
  DAT_1160_1f70 = iVar1 + 0x2a8;
  DAT_1160_1f72 = DAT_1160_1fd8._2_2_;
  DAT_1160_1f74 = iVar1 + 0x390;
  DAT_1160_1f76 = DAT_1160_1fd8._2_2_;
  DAT_1160_1f78 = iVar1 + 0x314;
  DAT_1160_1f7a = DAT_1160_1fd8._2_2_;
  DAT_1160_1f7c = iVar1 + 0x2b4;
  DAT_1160_1f7e = DAT_1160_1fd8._2_2_;
  DAT_1160_1f80 = iVar1 + 0x2d4;
  DAT_1160_1f82 = DAT_1160_1fd8._2_2_;
  DAT_1160_1f84 = iVar1 + 0x2c0;
  DAT_1160_1f86 = DAT_1160_1fd8._2_2_;
  DAT_1160_1f88 = iVar1 + 0x2c4;
  DAT_1160_1f8a = DAT_1160_1fd8._2_2_;
  DAT_1160_1f8c = iVar1 + 0x2c8;
  DAT_1160_1f8e = DAT_1160_1fd8._2_2_;
  DAT_1160_1f90 = iVar1 + 0x2cc;
  DAT_1160_1f92 = DAT_1160_1fd8._2_2_;
  DAT_1160_1f94 = iVar1 + 0x2d0;
  DAT_1160_1f96 = DAT_1160_1fd8._2_2_;
  DAT_1160_1f98 = iVar1 + 0x394;
  DAT_1160_1f9a = DAT_1160_1fd8._2_2_;
  DAT_1160_1f9c = iVar1 + 0x318;
  DAT_1160_1f9e = DAT_1160_1fd8._2_2_;
  DAT_1160_1fa0 = iVar1 + 0x2dc;
  DAT_1160_1fa2 = DAT_1160_1fd8._2_2_;
  DAT_1160_1fa4 = iVar1 + 0x2fc;
  DAT_1160_1fa6 = DAT_1160_1fd8._2_2_;
  DAT_1160_1fa8 = iVar1 + 0x2e8;
  DAT_1160_1faa = DAT_1160_1fd8._2_2_;
  DAT_1160_1fac = iVar1 + 0x2ec;
  DAT_1160_1fae = DAT_1160_1fd8._2_2_;
  DAT_1160_1fb0 = iVar1 + 0x2f0;
  DAT_1160_1fb2 = DAT_1160_1fd8._2_2_;
  DAT_1160_1fb4 = iVar1 + 0x2f4;
  DAT_1160_1fb6 = DAT_1160_1fd8._2_2_;
  DAT_1160_1fb8 = iVar1 + 0x2f8;
  DAT_1160_1fba = DAT_1160_1fd8._2_2_;
  DAT_1160_1fbc = iVar1 + 0x398;
  DAT_1160_1fbe = DAT_1160_1fd8._2_2_;
  DAT_1160_1fc0 = iVar1 + 0x31c;
  DAT_1160_1fc2 = DAT_1160_1fd8._2_2_;
  return;
}



/* ---- FUN_1028_12cf @ 1028:12cf  (103 octets) ---- */

void __cdecl16far FUN_1028_12cf(void)

{
  undefined4 uVar1;
  int iVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  undefined2 local_6;
  
  FUN_1158_0444();
  iVar2 = DAT_1160_014e;
  bVar4 = 1;
  local_6 = 0;
  if (0 < DAT_1160_014e) {
    local_6 = 1;
    while( true ) {
      iVar5 = FUN_1158_0416();
      uVar1 = *(undefined4 *)*(undefined4 *)(iVar5 * 0x24 + 0x1e80);
      bVar3 = FUN_1120_6dd2((int)uVar1,(int)((ulong)uVar1 >> 0x10));
      bVar4 = bVar3 & bVar4;
      if (local_6 == iVar2) break;
      local_6 = local_6 + 1;
    }
  }
  FUN_1120_6e11((int)*DAT_1160_1fe0,(int)((ulong)*DAT_1160_1fe0 >> 0x10),
                CONCAT11((char)((uint)local_6 >> 8),bVar4));
  return;
}



/* ---- FUN_1028_133e @ 1028:133e  (103 octets) ---- */

void __cdecl16far FUN_1028_133e(void)

{
  undefined4 uVar1;
  int iVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  undefined2 local_6;
  
  FUN_1158_0444();
  iVar2 = DAT_1160_014e;
  bVar4 = 1;
  local_6 = 0;
  if (0 < DAT_1160_014e) {
    local_6 = 1;
    while( true ) {
      iVar5 = FUN_1158_0416();
      uVar1 = *(undefined4 *)*(undefined4 *)(iVar5 * 0x24 + 0x1ea0);
      bVar3 = FUN_1120_6dd2((int)uVar1,(int)((ulong)uVar1 >> 0x10));
      bVar4 = bVar3 & bVar4;
      if (local_6 == iVar2) break;
      local_6 = local_6 + 1;
    }
  }
  FUN_1120_6e11((int)*DAT_1160_1fe4,(int)((ulong)*DAT_1160_1fe4 >> 0x10),
                CONCAT11((char)((uint)local_6 >> 8),bVar4));
  return;
}



/* ---- FUN_1028_13a5 @ 1028:13a5  (131 octets) ---- */

void __cdecl16far FUN_1028_13a5(void)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  
  FUN_1158_0444();
  bVar1 = FUN_1120_6dd2((int)*DAT_1160_2000,(int)((ulong)*DAT_1160_2000 >> 0x10));
  bVar2 = FUN_1120_6dd2((int)*DAT_1160_1ffc,(int)((ulong)*DAT_1160_1ffc >> 0x10));
  bVar3 = FUN_1120_6dd2((int)*DAT_1160_1ff8,(int)((ulong)*DAT_1160_1ff8 >> 0x10));
  bVar4 = FUN_1120_6dd2((int)*DAT_1160_1ff4,(int)((ulong)*DAT_1160_1ff4 >> 0x10));
  bVar5 = FUN_1120_6dd2((int)*DAT_1160_1ff0,(int)((ulong)*DAT_1160_1ff0 >> 0x10));
  bVar6 = FUN_1120_6dd2((int)*DAT_1160_1fec,(int)((ulong)*DAT_1160_1fec >> 0x10));
  FUN_1120_6e11((int)*DAT_1160_1fe8,(int)((ulong)*DAT_1160_1fe8 >> 0x10),
                bVar6 & bVar5 & bVar4 & bVar3 & bVar2 & bVar1);
  return;
}



/* ---- FUN_1028_1430 @ 1028:1430  (538 octets) ---- */

void __cdecl16far FUN_1028_1430(void)

{
  undefined4 uVar1;
  int iVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  undefined2 local_6;
  
  FUN_1158_0444();
  iVar2 = DAT_1160_014e;
  bVar4 = 1;
  local_6 = 0;
  if (0 < DAT_1160_014e) {
    local_6 = 1;
    while( true ) {
      iVar5 = FUN_1158_0416();
      uVar1 = *(undefined4 *)*(undefined4 *)(iVar5 * 0x24 + 0x1e88);
      bVar3 = FUN_1120_6dd2((int)uVar1,(int)((ulong)uVar1 >> 0x10));
      bVar4 = bVar3 & bVar4;
      if (local_6 == iVar2) break;
      local_6 = local_6 + 1;
    }
  }
  FUN_1120_6e11((int)*DAT_1160_1fec,(int)((ulong)*DAT_1160_1fec >> 0x10),
                CONCAT11((char)((uint)local_6 >> 8),bVar4));
  iVar2 = DAT_1160_014e;
  bVar4 = 1;
  local_6 = 0;
  if (0 < DAT_1160_014e) {
    local_6 = 1;
    while( true ) {
      iVar5 = FUN_1158_0416();
      uVar1 = *(undefined4 *)*(undefined4 *)(iVar5 * 0x24 + 0x1e8c);
      bVar3 = FUN_1120_6dd2((int)uVar1,(int)((ulong)uVar1 >> 0x10));
      bVar4 = bVar3 & bVar4;
      if (local_6 == iVar2) break;
      local_6 = local_6 + 1;
    }
  }
  FUN_1120_6e11((int)*DAT_1160_1ff0,(int)((ulong)*DAT_1160_1ff0 >> 0x10),
                CONCAT11((char)((uint)local_6 >> 8),bVar4));
  iVar2 = DAT_1160_014e;
  bVar4 = 1;
  local_6 = 0;
  if (0 < DAT_1160_014e) {
    local_6 = 1;
    while( true ) {
      iVar5 = FUN_1158_0416();
      uVar1 = *(undefined4 *)*(undefined4 *)(iVar5 * 0x24 + 0x1e90);
      bVar3 = FUN_1120_6dd2((int)uVar1,(int)((ulong)uVar1 >> 0x10));
      bVar4 = bVar3 & bVar4;
      if (local_6 == iVar2) break;
      local_6 = local_6 + 1;
    }
  }
  FUN_1120_6e11((int)*DAT_1160_1ff4,(int)((ulong)*DAT_1160_1ff4 >> 0x10),
                CONCAT11((char)((uint)local_6 >> 8),bVar4));
  iVar2 = DAT_1160_014e;
  bVar4 = 1;
  local_6 = 0;
  if (0 < DAT_1160_014e) {
    local_6 = 1;
    while( true ) {
      iVar5 = FUN_1158_0416();
      uVar1 = *(undefined4 *)*(undefined4 *)(iVar5 * 0x24 + 0x1e94);
      bVar3 = FUN_1120_6dd2((int)uVar1,(int)((ulong)uVar1 >> 0x10));
      bVar4 = bVar3 & bVar4;
      if (local_6 == iVar2) break;
      local_6 = local_6 + 1;
    }
  }
  FUN_1120_6e11((int)*DAT_1160_1ff8,(int)((ulong)*DAT_1160_1ff8 >> 0x10),
                CONCAT11((char)((uint)local_6 >> 8),bVar4));
  iVar2 = DAT_1160_014e;
  bVar4 = 1;
  local_6 = 0;
  if (0 < DAT_1160_014e) {
    local_6 = 1;
    while( true ) {
      iVar5 = FUN_1158_0416();
      uVar1 = *(undefined4 *)*(undefined4 *)(iVar5 * 0x24 + 0x1e98);
      bVar3 = FUN_1120_6dd2((int)uVar1,(int)((ulong)uVar1 >> 0x10));
      bVar4 = bVar3 & bVar4;
      if (local_6 == iVar2) break;
      local_6 = local_6 + 1;
    }
  }
  FUN_1120_6e11((int)*DAT_1160_1ffc,(int)((ulong)*DAT_1160_1ffc >> 0x10),
                CONCAT11((char)((uint)local_6 >> 8),bVar4));
  iVar2 = DAT_1160_014e;
  bVar4 = 1;
  local_6 = 0;
  if (0 < DAT_1160_014e) {
    local_6 = 1;
    while( true ) {
      iVar5 = FUN_1158_0416();
      uVar1 = *(undefined4 *)*(undefined4 *)(iVar5 * 0x24 + 0x1e9c);
      bVar3 = FUN_1120_6dd2((int)uVar1,(int)((ulong)uVar1 >> 0x10));
      bVar4 = bVar3 & bVar4;
      if (local_6 == iVar2) break;
      local_6 = local_6 + 1;
    }
  }
  FUN_1120_6e11((int)*DAT_1160_2000,(int)((ulong)*DAT_1160_2000 >> 0x10),
                CONCAT11((char)((uint)local_6 >> 8),bVar4));
  return;
}



/* ---- FUN_1028_1652 @ 1028:1652  (182 octets) ---- */

void __stdcall16far FUN_1028_1652(void)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  int iVar7;
  int iVar8;
  undefined2 unaff_CS;
  undefined4 uVar9;
  undefined2 uVar10;
  
  uVar9 = CONCAT22(unaff_CS,0x165d);
  FUN_1158_0444();
  iVar7 = FUN_1158_0416(uVar9);
  iVar8 = iVar7 * 0x24 + 0x1e80;
  uVar10 = 0x1160;
  uVar9 = *(undefined4 *)*(undefined4 *)(iVar7 * 0x24 + 0x1e9c);
  bVar1 = FUN_1120_6dd2((int)uVar9,(int)((ulong)uVar9 >> 0x10));
  bVar2 = FUN_1120_6dd2((int)*(undefined4 *)*(undefined4 *)(iVar8 + 0x18),
                        (int)((ulong)*(undefined4 *)*(undefined4 *)(iVar8 + 0x18) >> 0x10));
  bVar3 = FUN_1120_6dd2((int)*(undefined4 *)*(undefined4 *)(iVar8 + 0x14),
                        (int)((ulong)*(undefined4 *)*(undefined4 *)(iVar8 + 0x14) >> 0x10));
  bVar4 = FUN_1120_6dd2((int)*(undefined4 *)*(undefined4 *)(iVar8 + 0x10),
                        (int)((ulong)*(undefined4 *)*(undefined4 *)(iVar8 + 0x10) >> 0x10));
  bVar5 = FUN_1120_6dd2((int)*(undefined4 *)*(undefined4 *)(iVar8 + 0xc),
                        (int)((ulong)*(undefined4 *)*(undefined4 *)(iVar8 + 0xc) >> 0x10));
  bVar6 = FUN_1120_6dd2((int)*(undefined4 *)*(undefined4 *)(iVar8 + 8),
                        (int)((ulong)*(undefined4 *)*(undefined4 *)(iVar8 + 8) >> 0x10));
  FUN_1120_6e11((int)*(undefined4 *)*(undefined4 *)(iVar8 + 4),
                (int)((ulong)*(undefined4 *)*(undefined4 *)(iVar8 + 4) >> 0x10),
                bVar6 & bVar5 & bVar4 & bVar3 & bVar2 & bVar1);
  return;
}



/* ---- FUN_1028_1708 @ 1028:1708  (83 octets) ---- */

void __stdcall16far
FUN_1028_1708(undefined2 param_1_00,undefined2 param_2_00,undefined2 param_1,undefined2 param_2)

{
  char cVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  
  FUN_1158_0444();
  uVar3 = FUN_1158_2273(0x2722,0x1120,param_1,param_2);
  cVar1 = FUN_1138_6258(uVar3);
  if (cVar1 != '\0') {
    uVar2 = FUN_1120_6dd2(uVar3);
    FUN_1120_6e11((int)*DAT_1160_1fc8,(int)((ulong)*DAT_1160_1fc8 >> 0x10),uVar2);
  }
  return;
}



/* ---- FUN_1028_175b @ 1028:175b  (83 octets) ---- */

void __stdcall16far
FUN_1028_175b(undefined2 param_1_00,undefined2 param_2_00,undefined2 param_1,undefined2 param_2)

{
  char cVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  
  FUN_1158_0444();
  uVar3 = FUN_1158_2273(0x2722,0x1120,param_1,param_2);
  cVar1 = FUN_1138_6258(uVar3);
  if (cVar1 != '\0') {
    uVar2 = FUN_1120_6dd2(uVar3);
    FUN_1120_6e11((int)*DAT_1160_1fcc,(int)((ulong)*DAT_1160_1fcc >> 0x10),uVar2);
  }
  return;
}



/* ---- FUN_1028_2247 @ 1028:2247  (83 octets) ---- */

void __stdcall16far
FUN_1028_2247(undefined2 param_1_00,undefined2 param_2_00,undefined2 param_1,undefined2 param_2)

{
  char cVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  
  FUN_1158_0444();
  uVar3 = FUN_1158_2273(0x2722,0x1120,param_1,param_2);
  cVar1 = FUN_1138_6258(uVar3);
  if (cVar1 != '\0') {
    uVar2 = FUN_1120_6dd2(uVar3);
    FUN_1120_6e11((int)*DAT_1160_1fd8,(int)((ulong)*DAT_1160_1fd8 >> 0x10),uVar2);
  }
  return;
}



/* ---- FUN_1028_229a @ 1028:229a  (83 octets) ---- */

void __stdcall16far
FUN_1028_229a(undefined2 param_1_00,undefined2 param_2_00,undefined2 param_1,undefined2 param_2)

{
  char cVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  
  FUN_1158_0444();
  uVar3 = FUN_1158_2273(0x2722,0x1120,param_1,param_2);
  cVar1 = FUN_1138_6258(uVar3);
  if (cVar1 != '\0') {
    uVar2 = FUN_1120_6dd2(uVar3);
    FUN_1120_6e11((int)*DAT_1160_1fdc,(int)((ulong)*DAT_1160_1fdc >> 0x10),uVar2);
  }
  return;
}



/* ---- FUN_1028_22ed @ 1028:22ed  (57 octets) ---- */

void __stdcall16far
FUN_1028_22ed(undefined2 param_1_00,undefined2 param_2_00,undefined2 param_1,undefined2 param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined2 uVar3;
  
  uVar3 = 0x22f8;
  FUN_1158_0444();
  uVar2 = FUN_1158_2273(0x2722,0x1120,param_1,param_2);
  cVar1 = FUN_1138_6258(uVar2);
  if (cVar1 != '\0') {
    FUN_1028_12cf(uVar3);
  }
  return;
}



/* ---- FUN_1028_2326 @ 1028:2326  (57 octets) ---- */

void __stdcall16far
FUN_1028_2326(undefined2 param_1_00,undefined2 param_2_00,undefined2 param_1,undefined2 param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined2 uVar3;
  
  uVar3 = 0x2331;
  FUN_1158_0444();
  uVar2 = FUN_1158_2273(0x2722,0x1120,param_1,param_2);
  cVar1 = FUN_1138_6258(uVar2);
  if (cVar1 != '\0') {
    FUN_1028_133e(uVar3);
  }
  return;
}



/* ---- FUN_1028_235f @ 1028:235f  (96 octets) ---- */

void __stdcall16far FUN_1028_235f(undefined4 param_1,undefined2 param_2,undefined2 param_3)

{
  int iVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  
  FUN_1158_0444();
  uVar4 = FUN_1158_2273(0x2722,0x1120,param_2,param_3);
  cVar2 = FUN_1138_6258(uVar4);
  if (cVar2 != '\0') {
    uVar4 = *(undefined4 *)((int)param_1 + 0x17c);
    iVar1 = *(int *)((int)uVar4 + 0xee);
    iVar3 = iVar1 + 1;
    if (SCARRY2(iVar1,1)) {
      iVar3 = FUN_1158_043e(0x1138);
    }
    FUN_1028_1652(iVar3);
    FUN_1028_1430();
    FUN_1028_13a5();
  }
  return;
}



/* ---- FUN_1028_27e1 @ 1028:27e1  (51 octets) ---- */

void __stdcall16far FUN_1028_27e1(undefined4 param_1)

{
  undefined2 uVar1;
  
  FUN_1158_0444();
  uVar1 = (undefined2)((ulong)param_1 >> 0x10);
  FUN_1028_0df2((int)param_1,uVar1);
  FUN_1028_2972((int)param_1,uVar1,DAT_1160_014c);
  FUN_1140_63a9((int)DAT_1160_2c2e,(int)((ulong)DAT_1160_2c2e >> 0x10),0xfffe);
  return;
}



/* ---- FUN_1028_2814 @ 1028:2814  (31 octets) ---- */

void __stdcall16far FUN_1028_2814(undefined4 param_1,undefined *param_2)

{
  FUN_1158_0444();
  FUN_1028_292d((int)param_1,(int)((ulong)param_1 >> 0x10));
  *param_2 = 1;
  return;
}



/* ---- FUN_1028_28ad @ 1028:28ad  (128 octets) ---- */

void __stdcall16far FUN_1028_28ad(undefined4 param_1)

{
  undefined4 uVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  
  FUN_1158_0444();
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  uVar1 = *(undefined4 *)((int)param_1 + 0x350);
  uVar4 = (undefined2)((ulong)uVar1 >> 0x10);
  uVar2 = (undefined2)uVar1;
  FUN_10d8_31d2(uVar2,uVar4);
  FUN_10e0_2ffb(uVar2,uVar4,1);
  FUN_10e0_2ed2(uVar2,uVar4,0);
  FUN_10d8_31bf(uVar2,uVar4);
  uVar1 = *(undefined4 *)((int)param_1 + 0x354);
  uVar3 = (undefined2)((ulong)uVar1 >> 0x10);
  uVar2 = (undefined2)uVar1;
  FUN_10d8_31d2(uVar2,uVar3);
  FUN_10e0_2ffb(uVar2,uVar3,1);
  FUN_10e0_2ed2(uVar2,uVar3,0);
  FUN_10d8_31bf(uVar2,uVar3);
  return;
}



/* ---- FUN_1028_292d @ 1028:292d  (44 octets) ---- */

void __stdcall16far FUN_1028_292d(undefined4 param_1)

{
  undefined4 uVar1;
  undefined2 uVar2;
  
  FUN_1158_0444();
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  uVar1 = *(undefined4 *)((int)param_1 + 0x350);
  FUN_10d8_31d2((int)uVar1,(int)((ulong)uVar1 >> 0x10));
  uVar1 = *(undefined4 *)((int)param_1 + 0x354);
  FUN_10d8_31d2((int)uVar1,(int)((ulong)uVar1 >> 0x10));
  return;
}



/* ---- FUN_1028_2972 @ 1028:2972  (810 octets) ---- */

void __cdecl16far FUN_1028_2972(undefined4 param_1,undefined2 param_2)

{
  bool bVar1;
  undefined2 *puVar2;
  char cVar3;
  byte bVar4;
  undefined2 uVar5;
  undefined extraout_AH;
  int iVar6;
  undefined extraout_AH_00;
  undefined extraout_AH_01;
  undefined extraout_AH_02;
  undefined extraout_AH_03;
  undefined extraout_AH_04;
  undefined extraout_AH_05;
  undefined extraout_AH_06;
  undefined extraout_AH_07;
  undefined extraout_AH_08;
  undefined extraout_AH_09;
  undefined extraout_AH_10;
  undefined extraout_AH_11;
  undefined extraout_AH_12;
  undefined extraout_AH_13;
  undefined extraout_AH_14;
  undefined extraout_AH_15;
  undefined extraout_AH_16;
  int iVar7;
  undefined2 uVar8;
  char *pcVar9;
  undefined2 unaff_SS;
  undefined4 *puVar10;
  undefined4 *puVar11;
  undefined2 uStack_2a;
  undefined *puStack_28;
  undefined2 uStack_26;
  undefined2 uStack_24;
  int local_22;
  int local_20;
  undefined local_1e;
  int local_1a;
  int local_18;
  undefined local_16;
  int local_14;
  undefined4 local_12;
  int local_e;
  undefined4 local_c;
  int local_8;
  undefined uStack_6;
  byte local_5;
  
  uStack_6 = 0x7d;
  local_5 = 0x29;
  FUN_1158_0444();
  uStack_24 = 0x1158;
  uStack_26 = 0x296c;
  uStack_2a = DAT_1160_1858;
  uVar8 = (undefined2)((ulong)param_1 >> 0x10);
  iVar7 = (int)param_1;
  DAT_1160_1858 = (undefined4 *)&uStack_2a;
  *(undefined2 *)(iVar7 + 0x3a0) = param_2;
  puStack_28 = &stack0xfffe;
  FUN_10f0_178b((int)*(undefined4 *)(iVar7 + 0x330),
                (int)((ulong)*(undefined4 *)(iVar7 + 0x330) >> 0x10),*(int *)(iVar7 + 0x3a0),
                *(int *)(iVar7 + 0x3a0) >> 0xf);
  bVar1 = *(int *)(iVar7 + 0x3a0) < DAT_1160_014c;
  bVar4 = 1;
  local_c = *(undefined4 *)(iVar7 + 0x350);
  local_14 = *(int *)(iVar7 + 0x3a0);
  local_12._0_3_ = (uint3)(uint)(local_14 >> 0xf);
  pcVar9 = (char *)s_iTime_1160_10dc + 4;
  cVar3 = FUN_10e0_2895((int)local_c,(int)((ulong)local_c >> 0x10),0,&local_14,unaff_SS);
  if (cVar3 == '\0') {
    pcVar9 = (char *)0x1028;
    FUN_1028_0dd8(iVar7,uVar8);
  }
  puVar10 = (undefined4 *)FUN_10d8_3b9b((int)local_c,(int)((ulong)local_c >> 0x10),0x2959,pcVar9);
  puVar2 = (undefined2 *)((int)*puVar10 + 0x38);
  uVar5 = (*(code *)*puVar2)(0x10d8,puVar10);
  FUN_1138_1cb8((int)*DAT_1160_1fc8,(int)((ulong)*DAT_1160_1fc8 >> 0x10),uVar5);
  puVar10 = (undefined4 *)FUN_10d8_3b9b((int)local_c,(int)((ulong)local_c >> 0x10),0x2959,0x1138);
  puVar11 = (undefined4 *)puVar10;
  puVar2 = (undefined2 *)((int)*puVar10 + 0x38);
  uVar5 = (*(code *)*puVar2)(0x10d8,puVar10);
  FUN_1138_1cb8((int)*DAT_1160_1fd8,(int)((ulong)*DAT_1160_1fd8 >> 0x10),uVar5);
  FUN_1138_1cb8((int)*DAT_1160_1fcc,(int)((ulong)*DAT_1160_1fcc >> 0x10),CONCAT11(extraout_AH,bVar1)
               );
  local_c._2_2_ = (undefined2)((ulong)*(undefined4 *)(iVar7 + 0x354) >> 0x10);
  local_c._0_2_ = (undefined2)*(undefined4 *)(iVar7 + 0x354);
  local_e = DAT_1160_014e;
  if (0 < DAT_1160_014e) {
    local_8 = 1;
    while( true ) {
      iVar6 = FUN_1158_0416();
      local_12 = (undefined4 *)CONCAT22(0x1160,(undefined4 *)(iVar6 * 0x24 + 0x1e80));
      local_22 = *(int *)(iVar7 + 0x3a0);
      local_20 = local_22 >> 0xf;
      local_1e = 0;
      local_18 = local_8 >> 0xf;
      local_1a = local_8;
      local_16 = 0;
      pcVar9 = (char *)s_iTime_1160_10dc + 4;
      cVar3 = FUN_10e0_2895((undefined2)local_c,local_c._2_2_,1,&local_22,unaff_SS);
      if (cVar3 == '\0') {
        pcVar9 = (char *)0x1028;
        FUN_1028_0dd8(iVar7,uVar8);
      }
      puVar10 = (undefined4 *)FUN_10d8_3b9b((undefined2)local_c,local_c._2_2_,0x2959,pcVar9);
      puVar2 = (undefined2 *)((int)*puVar10 + 0x38);
      uVar5 = (*(code *)*puVar2)(0x10d8,puVar10);
      local_5 = (byte)uVar5;
      FUN_1138_1cb8((int)*(undefined4 *)*local_12,(int)((ulong)*(undefined4 *)*local_12 >> 0x10),
                    uVar5);
      bVar4 = bVar4 & local_5;
      FUN_1138_1cb8((int)*(undefined4 *)((undefined4 *)local_12)[1],
                    (int)((ulong)*(undefined4 *)((undefined4 *)local_12)[1] >> 0x10),
                    CONCAT11(extraout_AH_00,bVar1));
      FUN_1138_1cb8((int)*(undefined4 *)((undefined4 *)local_12)[2],
                    (int)((ulong)*(undefined4 *)((undefined4 *)local_12)[2] >> 0x10),
                    CONCAT11(extraout_AH_01,bVar1));
      FUN_1138_1cb8((int)*(undefined4 *)((undefined4 *)local_12)[3],
                    (int)((ulong)*(undefined4 *)((undefined4 *)local_12)[3] >> 0x10),
                    CONCAT11(extraout_AH_02,bVar1));
      FUN_1138_1cb8((int)*(undefined4 *)((undefined4 *)local_12)[4],
                    (int)((ulong)*(undefined4 *)((undefined4 *)local_12)[4] >> 0x10),
                    CONCAT11(extraout_AH_03,bVar1));
      FUN_1138_1cb8((int)*(undefined4 *)((undefined4 *)local_12)[5],
                    (int)((ulong)*(undefined4 *)((undefined4 *)local_12)[5] >> 0x10),
                    CONCAT11(extraout_AH_04,bVar1));
      FUN_1138_1cb8((int)*(undefined4 *)((undefined4 *)local_12)[6],
                    (int)((ulong)*(undefined4 *)((undefined4 *)local_12)[6] >> 0x10),
                    CONCAT11(extraout_AH_05,bVar1));
      FUN_1138_1cb8((int)*(undefined4 *)((undefined4 *)local_12)[7],
                    (int)((ulong)*(undefined4 *)((undefined4 *)local_12)[7] >> 0x10),
                    CONCAT11(extraout_AH_06,bVar1));
      FUN_1138_1cb8((int)*(undefined4 *)((undefined4 *)local_12)[8],
                    (int)((ulong)*(undefined4 *)((undefined4 *)local_12)[8] >> 0x10),
                    CONCAT11(extraout_AH_07,bVar1));
      if (local_8 == local_e) break;
      local_8 = local_8 + 1;
    }
  }
  FUN_1138_1cb8((int)*DAT_1160_1fdc,(int)((ulong)*DAT_1160_1fdc >> 0x10),bVar1);
  FUN_1138_1cb8((int)*DAT_1160_1fe0,(int)((ulong)*DAT_1160_1fe0 >> 0x10),
                CONCAT11(extraout_AH_08,bVar4));
  FUN_1138_1cb8((int)*DAT_1160_1fe4,(int)((ulong)*DAT_1160_1fe4 >> 0x10),
                CONCAT11(extraout_AH_09,bVar1));
  FUN_1138_1cb8((int)*DAT_1160_1fe8,(int)((ulong)*DAT_1160_1fe8 >> 0x10),
                CONCAT11(extraout_AH_10,bVar1));
  FUN_1138_1cb8((int)*DAT_1160_1fec,(int)((ulong)*DAT_1160_1fec >> 0x10),
                CONCAT11(extraout_AH_11,bVar1));
  FUN_1138_1cb8((int)*DAT_1160_1ff0,(int)((ulong)*DAT_1160_1ff0 >> 0x10),
                CONCAT11(extraout_AH_12,bVar1));
  FUN_1138_1cb8((int)*DAT_1160_1ff4,(int)((ulong)*DAT_1160_1ff4 >> 0x10),
                CONCAT11(extraout_AH_13,bVar1));
  FUN_1138_1cb8((int)*DAT_1160_1ff8,(int)((ulong)*DAT_1160_1ff8 >> 0x10),
                CONCAT11(extraout_AH_14,bVar1));
  FUN_1138_1cb8((int)*DAT_1160_1ffc,(int)((ulong)*DAT_1160_1ffc >> 0x10),
                CONCAT11(extraout_AH_15,bVar1));
  FUN_1138_1cb8((int)*DAT_1160_2000,(int)((ulong)*DAT_1160_2000 >> 0x10),
                CONCAT11(extraout_AH_16,bVar1));
  DAT_1160_1858 = puVar11;
  return;
}



/* ---- FUN_1028_2ca0 @ 1028:2ca0  (151 octets) ---- */

void __stdcall16far FUN_1028_2ca0(undefined4 param_1,undefined param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  undefined4 uVar7;
  
  FUN_1158_0444();
  uVar6 = (undefined2)((ulong)param_1 >> 0x10);
  uVar5 = (undefined2)param_1;
  iVar2 = FUN_1148_527d(uVar5,uVar6);
  iVar3 = iVar2 + -1;
  if (SBORROW2(iVar2,1)) {
    iVar3 = FUN_1158_043e(0x1148);
  }
  if (-1 < iVar3) {
    iVar2 = 0;
    while( true ) {
      uVar7 = FUN_1148_5246(uVar5,uVar6,iVar2);
      cVar1 = FUN_1158_2255(0x2722,0x1120,uVar7);
      if (cVar1 != '\0') {
        uVar7 = FUN_1148_5246(uVar5,uVar6,iVar2);
        uVar7 = FUN_1158_2273(0x2722,0x1120,uVar7);
        uVar4 = (undefined2)((ulong)uVar7 >> 0x10);
        if ((*(byte *)((int)uVar7 + 0x29) & *(byte *)((int)uVar7 + 0x2a)) != 0) {
          FUN_1120_6e11(uVar7,param_2);
        }
      }
      if (iVar2 == iVar3) break;
      iVar2 = iVar2 + 1;
    }
  }
  return;
}



/* ---- FUN_1028_2d3f @ 1028:2d3f  (515 octets) ---- */

void __stdcall16far FUN_1028_2d3f(undefined4 param_1,undefined param_2)

{
  undefined4 uVar1;
  undefined extraout_AH;
  undefined extraout_AH_00;
  undefined extraout_AH_01;
  undefined uVar2;
  undefined extraout_AH_02;
  undefined extraout_AH_03;
  undefined extraout_AH_04;
  undefined extraout_AH_05;
  undefined extraout_AH_06;
  undefined extraout_AH_07;
  undefined extraout_AH_08;
  undefined uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined2 uVar8;
  undefined2 uVar9;
  
  FUN_1158_0444();
  uVar8 = (undefined2)((ulong)param_1 >> 0x10);
  uVar1 = *(undefined4 *)((int)param_1 + 0x17c);
  uVar9 = (undefined2)((ulong)uVar1 >> 0x10);
  iVar4 = (int)uVar1;
  iVar7 = *(int *)(iVar4 + 0xee);
  if ((iVar7 < 0) || (7 < iVar7)) {
    uVar2 = (undefined)((uint)iVar7 >> 8);
    if (iVar7 == 8) {
      FUN_1028_2ca0((int)param_1,uVar8,CONCAT11(uVar2,param_2));
    }
    else if (iVar7 == 9) {
      uVar8 = (undefined2)((ulong)*DAT_1160_1fc4 >> 0x10);
      iVar7 = (int)*DAT_1160_1fc4;
      uVar3 = 0;
      if (*(char *)(iVar7 + 0x2a) != '\0') {
        FUN_1120_6e11(iVar7,uVar8,CONCAT11(uVar2,param_2));
        uVar3 = extraout_AH_05;
      }
      uVar8 = (undefined2)((ulong)*DAT_1160_1fc8 >> 0x10);
      iVar7 = (int)*DAT_1160_1fc8;
      if (*(char *)(iVar7 + 0x2a) != '\0') {
        FUN_1120_6e11(iVar7,uVar8,CONCAT11(uVar3,param_2));
        uVar3 = extraout_AH_06;
      }
      uVar8 = (undefined2)((ulong)*DAT_1160_1fcc >> 0x10);
      iVar7 = (int)*DAT_1160_1fcc;
      if (*(char *)(iVar7 + 0x2a) != '\0') {
        FUN_1120_6e11(iVar7,uVar8,CONCAT11(uVar3,param_2));
        uVar3 = extraout_AH_07;
      }
      uVar8 = (undefined2)((ulong)*DAT_1160_1fd8 >> 0x10);
      iVar7 = (int)*DAT_1160_1fd8;
      if (*(char *)(iVar7 + 0x2a) != '\0') {
        FUN_1120_6e11(iVar7,uVar8,CONCAT11(uVar3,param_2));
        uVar3 = extraout_AH_08;
      }
      uVar8 = (undefined2)((ulong)*DAT_1160_1fdc >> 0x10);
      iVar7 = (int)*DAT_1160_1fdc;
      if (*(char *)(iVar7 + 0x2a) != '\0') {
        FUN_1120_6e11(iVar7,uVar8,CONCAT11(uVar3,param_2));
      }
    }
  }
  else {
    iVar7 = *(int *)(iVar4 + 0xee);
    iVar4 = iVar7 + 1;
    if (SCARRY2(iVar7,1)) {
      iVar4 = FUN_1158_043e(0x1158);
    }
    iVar7 = FUN_1158_0416();
    iVar5 = iVar7 * 0x24;
    uVar8 = (undefined2)((ulong)*(undefined4 *)*(undefined4 *)(iVar5 + 0x1e80) >> 0x10);
    iVar6 = (int)*(undefined4 *)*(undefined4 *)(iVar5 + 0x1e80);
    if (*(char *)(iVar6 + 0x2a) != '\0') {
      iVar7 = FUN_1120_6e11(iVar6,uVar8,param_2);
    }
    uVar2 = (undefined)((uint)iVar7 >> 8);
    uVar8 = (undefined2)((ulong)*(undefined4 *)*(undefined4 *)(iVar5 + 0x1e88) >> 0x10);
    iVar7 = (int)*(undefined4 *)*(undefined4 *)(iVar5 + 0x1e88);
    if (*(char *)(iVar7 + 0x2a) != '\0') {
      FUN_1120_6e11(iVar7,uVar8,CONCAT11(uVar2,param_2));
      uVar2 = extraout_AH;
    }
    uVar8 = (undefined2)((ulong)*(undefined4 *)*(undefined4 *)(iVar5 + 0x1e8c) >> 0x10);
    iVar7 = (int)*(undefined4 *)*(undefined4 *)(iVar5 + 0x1e8c);
    if (*(char *)(iVar7 + 0x2a) != '\0') {
      FUN_1120_6e11(iVar7,uVar8,CONCAT11(uVar2,param_2));
      uVar2 = extraout_AH_00;
    }
    uVar8 = (undefined2)((ulong)*(undefined4 *)*(undefined4 *)(iVar5 + 0x1e90) >> 0x10);
    iVar7 = (int)*(undefined4 *)*(undefined4 *)(iVar5 + 0x1e90);
    if (*(char *)(iVar7 + 0x2a) != '\0') {
      FUN_1120_6e11(iVar7,uVar8,CONCAT11(uVar2,param_2));
      uVar2 = extraout_AH_01;
    }
    uVar8 = (undefined2)((ulong)*(undefined4 *)*(undefined4 *)(iVar5 + 0x1e94) >> 0x10);
    iVar7 = (int)*(undefined4 *)*(undefined4 *)(iVar5 + 0x1e94);
    if ((*(byte *)(iVar7 + 0x29) & *(byte *)(iVar7 + 0x2a)) != 0) {
      FUN_1120_6e11(iVar7,uVar8,CONCAT11(uVar2,param_2));
      uVar2 = extraout_AH_02;
    }
    uVar8 = (undefined2)((ulong)*(undefined4 *)*(undefined4 *)(iVar5 + 0x1e98) >> 0x10);
    iVar7 = (int)*(undefined4 *)*(undefined4 *)(iVar5 + 0x1e98);
    if ((*(byte *)(iVar7 + 0x29) & *(byte *)(iVar7 + 0x2a)) != 0) {
      FUN_1120_6e11(iVar7,uVar8,CONCAT11(uVar2,param_2));
      uVar2 = extraout_AH_03;
    }
    uVar8 = (undefined2)((ulong)*(undefined4 *)*(undefined4 *)(iVar5 + 0x1e9c) >> 0x10);
    iVar7 = (int)*(undefined4 *)*(undefined4 *)(iVar5 + 0x1e9c);
    if ((*(byte *)(iVar7 + 0x29) & *(byte *)(iVar7 + 0x2a)) != 0) {
      FUN_1120_6e11(iVar7,uVar8,CONCAT11(uVar2,param_2));
      uVar2 = extraout_AH_04;
    }
    uVar8 = (undefined2)((ulong)*(undefined4 *)*(undefined4 *)(iVar5 + 0x1ea0) >> 0x10);
    iVar7 = (int)*(undefined4 *)*(undefined4 *)(iVar5 + 0x1ea0);
    if (*(char *)(iVar7 + 0x2a) != '\0') {
      FUN_1120_6e11(iVar7,uVar8,CONCAT11(uVar2,param_2));
    }
    FUN_1028_1652(iVar4);
    FUN_1028_12cf();
    FUN_1028_1430();
    FUN_1028_13a5();
    FUN_1028_133e();
  }
  return;
}



/* ---- FUN_1028_2f42 @ 1028:2f42  (26 octets) ---- */

void __stdcall16far FUN_1028_2f42(undefined4 param_1)

{
  FUN_1158_0444();
  FUN_1028_2d3f((int)param_1,(int)((ulong)param_1 >> 0x10),1);
  return;
}



/* ---- FUN_1028_2f5c @ 1028:2f5c  (26 octets) ---- */

void __stdcall16far FUN_1028_2f5c(undefined4 param_1)

{
  FUN_1158_0444();
  FUN_1028_2d3f((int)param_1,(int)((ulong)param_1 >> 0x10),0);
  return;
}



/* ---- FUN_1028_2fc5 @ 1028:2fc5  (40 octets) ---- */

void __stdcall16far FUN_1028_2fc5(undefined4 param_1)

{
  undefined2 uVar1;
  
  FUN_1158_0444();
  uVar1 = (undefined2)((ulong)param_1 >> 0x10);
  FUN_1140_77b2((int)DAT_1160_2c2a,(int)((ulong)DAT_1160_2c2a >> 0x10),
                *(undefined2 *)((int)param_1 + 0xac),*(undefined2 *)((int)param_1 + 0xae),1);
  return;
}



/* ---- FUN_1028_2fed @ 1028:2fed  (23 octets) ---- */

void __stdcall16far FUN_1028_2fed(undefined4 param_1)

{
  FUN_1158_0444();
  *(undefined *)((int)param_1 + 0x3a3) = 1;
  return;
}



/* ---- FUN_1028_3004 @ 1028:3004  (36 octets) ---- */

void __stdcall16far FUN_1028_3004(undefined4 param_1,undefined2 param_2,undefined2 param_3)

{
  undefined2 uVar1;
  
  FUN_1158_0444();
  uVar1 = (undefined2)((ulong)param_1 >> 0x10);
  *(undefined *)((int)param_1 + 0x3a2) = 1;
  FUN_1028_305a((int)param_1,uVar1,param_2,param_3);
  return;
}



/* ---- FUN_1028_3028 @ 1028:3028  (36 octets) ---- */

void __stdcall16far FUN_1028_3028(undefined4 param_1,undefined2 param_2,undefined2 param_3)

{
  undefined2 uVar1;
  
  FUN_1158_0444();
  uVar1 = (undefined2)((ulong)param_1 >> 0x10);
  *(undefined *)((int)param_1 + 0x3a2) = 0;
  FUN_1028_305a((int)param_1,uVar1,param_2,param_3);
  return;
}



/* ---- FUN_1028_305a @ 1028:305a  (806 octets) ---- */

void __stdcall16far FUN_1028_305a(undefined4 param_1,undefined2 param_2,undefined2 param_3)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  bool bVar7;
  undefined2 uStack_22;
  undefined *puStack_20;
  undefined2 uStack_1e;
  undefined2 uStack_1c;
  undefined2 uStack_1a;
  char *pcStack_18;
  undefined2 uStack_16;
  int iStack_14;
  undefined2 uStack_12;
  undefined4 local_10;
  undefined4 *local_c;
  undefined4 local_a;
  int local_6;
  
  local_6 = 0x3065;
  FUN_1158_0444();
  uStack_12 = (undefined2)((ulong)DAT_1160_2c2a >> 0x10);
  iStack_14 = (int)DAT_1160_2c2a;
  uStack_16 = 0x1158;
  pcStack_18 = (char *)0x3073;
  FUN_1140_7303();
  uStack_12 = (undefined2)((ulong)*DAT_1160_1fc4 >> 0x10);
  iStack_14 = (int)*DAT_1160_1fc4;
  uStack_16 = 0x1140;
  pcStack_18 = (char *)0x308c;
  local_a._0_2_ = iStack_14;
  local_a._2_2_ = uStack_12;
  bVar1 = FUN_1120_6dd2();
  uVar3 = (uint)((bVar1 & *(byte *)((int)local_a + 0x2a)) != 0);
  uStack_12 = (undefined2)((ulong)*DAT_1160_1fc8 >> 0x10);
  iStack_14 = (int)*DAT_1160_1fc8;
  uStack_16 = 0x1120;
  pcStack_18 = (char *)0x30ae;
  local_a._0_2_ = iStack_14;
  local_a._2_2_ = uStack_12;
  bVar1 = FUN_1120_6dd2();
  if ((bVar1 & *(byte *)((int)local_a + 0x2a)) != 0) {
    uVar3 = uVar3 + 1;
  }
  uStack_12 = (undefined2)((ulong)*DAT_1160_1fcc >> 0x10);
  iStack_14 = (int)*DAT_1160_1fcc;
  uStack_16 = 0x1120;
  uVar6 = 0x1120;
  pcStack_18 = (char *)0x30d0;
  local_a._0_2_ = iStack_14;
  local_a._2_2_ = uStack_12;
  bVar1 = FUN_1120_6dd2();
  if ((bVar1 & *(byte *)((int)local_a + 0x2a)) != 0) {
    bVar7 = SCARRY2(uVar3,2);
    uVar3 = uVar3 + 2;
    if (bVar7) {
      uStack_12 = 0x1120;
      uVar6 = 0x1158;
      iStack_14 = 0x30e8;
      uVar3 = FUN_1158_043e();
    }
    if (4 < DAT_1160_014e) {
      uVar3 = uVar3 + 1;
    }
  }
  local_a._2_2_ = DAT_1160_014e;
  if (0 < DAT_1160_014e) {
    local_6 = 1;
    while( true ) {
      iStack_14 = 0x311a;
      uStack_12 = uVar6;
      iVar4 = FUN_1158_0416();
      local_c = (undefined4 *)(iVar4 * 0x24 + 0x1e80);
      local_a._0_2_ = 0x1160;
      uStack_12 = (undefined2)((ulong)*(undefined4 *)*local_c >> 0x10);
      iStack_14 = (int)*(undefined4 *)*local_c;
      uStack_16 = 0x1158;
      pcStack_18 = (char *)0x313c;
      local_10._0_2_ = iStack_14;
      local_10._2_2_ = uStack_12;
      bVar1 = FUN_1120_6dd2();
      if ((bVar1 & *(byte *)((int)local_10 + 0x2a)) != 0) {
        uVar3 = uVar3 + 1;
      }
      uStack_12 = (undefined2)((ulong)*(undefined4 *)local_c[2] >> 0x10);
      iStack_14 = (int)*(undefined4 *)local_c[2];
      uStack_16 = 0x1120;
      pcStack_18 = (char *)0x3161;
      local_10._0_2_ = iStack_14;
      local_10._2_2_ = uStack_12;
      bVar1 = FUN_1120_6dd2();
      if ((bVar1 & *(byte *)((int)local_10 + 0x2a)) != 0) {
        uVar3 = uVar3 + 1;
      }
      uStack_12 = (undefined2)((ulong)*(undefined4 *)local_c[3] >> 0x10);
      iStack_14 = (int)*(undefined4 *)local_c[3];
      uStack_16 = 0x1120;
      pcStack_18 = (char *)0x3186;
      local_10._0_2_ = iStack_14;
      local_10._2_2_ = uStack_12;
      bVar1 = FUN_1120_6dd2();
      if ((bVar1 & *(byte *)((int)local_10 + 0x2a)) != 0) {
        uVar3 = uVar3 + 1;
      }
      uStack_12 = (undefined2)((ulong)*(undefined4 *)local_c[4] >> 0x10);
      iStack_14 = (int)*(undefined4 *)local_c[4];
      uStack_16 = 0x1120;
      pcStack_18 = (char *)0x31ab;
      local_10._0_2_ = iStack_14;
      local_10._2_2_ = uStack_12;
      bVar1 = FUN_1120_6dd2();
      if ((bVar1 & *(byte *)((int)local_10 + 0x2a)) != 0) {
        uVar3 = uVar3 + 1;
      }
      uStack_12 = (undefined2)((ulong)*(undefined4 *)local_c[5] >> 0x10);
      iStack_14 = (int)*(undefined4 *)local_c[5];
      uStack_16 = 0x1120;
      pcStack_18 = (char *)0x31d0;
      local_10._0_2_ = iStack_14;
      local_10._2_2_ = uStack_12;
      bVar1 = FUN_1120_6dd2();
      if ((*(byte *)((int)local_10 + 0x29) & *(byte *)((int)local_10 + 0x2a) & bVar1) != 0) {
        uVar3 = uVar3 + 1;
      }
      uStack_12 = (undefined2)((ulong)*(undefined4 *)local_c[6] >> 0x10);
      iStack_14 = (int)*(undefined4 *)local_c[6];
      uStack_16 = 0x1120;
      pcStack_18 = (char *)0x31fd;
      local_10._0_2_ = iStack_14;
      local_10._2_2_ = uStack_12;
      bVar1 = FUN_1120_6dd2();
      if ((*(byte *)((int)local_10 + 0x29) & *(byte *)((int)local_10 + 0x2a) & bVar1) != 0) {
        uVar3 = uVar3 + 1;
      }
      uStack_12 = (undefined2)((ulong)*(undefined4 *)local_c[7] >> 0x10);
      iStack_14 = (int)*(undefined4 *)local_c[7];
      uStack_16 = 0x1120;
      pcStack_18 = (char *)0x322a;
      local_10._0_2_ = iStack_14;
      local_10._2_2_ = uStack_12;
      bVar1 = FUN_1120_6dd2();
      if ((*(byte *)((int)local_10 + 0x29) & *(byte *)((int)local_10 + 0x2a) & bVar1) != 0) {
        uVar3 = uVar3 + 1;
      }
      local_10 = *(undefined4 *)local_c[8];
      uStack_12 = (undefined2)((ulong)local_10 >> 0x10);
      iStack_14 = (int)local_10;
      uStack_16 = 0x1120;
      uVar6 = 0x1120;
      pcStack_18 = (char *)0x3257;
      bVar1 = FUN_1120_6dd2();
      if ((bVar1 & *(byte *)((int)local_10 + 0x2a)) != 0) {
        uVar3 = uVar3 + 1;
      }
      if (local_6 == local_a._2_2_) break;
      local_6 = local_6 + 1;
    }
  }
  iVar4 = (int)param_1;
  uVar5 = (undefined2)((ulong)param_1 >> 0x10);
  uStack_16 = uVar6;
  if (uVar3 == 0) {
    pcStack_18 = (char *)0x3280;
    iStack_14 = iVar4;
    uStack_12 = uVar5;
    uStack_12 = FUN_1138_62b9();
    iStack_14 = 0x1160;
    uStack_16 = 0x1ba;
    pcStack_18 = (char *)0x1160;
    uStack_1a = 0x1ca;
    uStack_1c = 0x2000;
    uStack_1e = 0x1138;
    puStack_20 = (undefined *)0x3293;
    MESSAGEBOX();
  }
  else if (*(char *)(iVar4 + 0x3a2) == '\0') {
    uStack_12 = (undefined2)((ulong)*(undefined4 *)(iVar4 + 0x340) >> 0x10);
    iStack_14 = (int)*(undefined4 *)(iVar4 + 0x340);
    pcStack_18 = (char *)0x32f5;
    uVar6 = FUN_1108_2f17();
    if ((char)uVar6 != '\0') {
      uStack_16 = CONCAT11((char)((uint)uVar6 >> 8),1);
      pcStack_18 = (char *)s_windows_1160_100f + 1;
      uStack_1a = 0x25b4;
      uStack_1c = 0x1108;
      uStack_1e = 0x3312;
      iStack_14 = iVar4;
      uStack_12 = uVar5;
      local_a = FUN_1140_2553();
      uStack_1c = 0x1140;
      uStack_1e = 0x3054;
      uStack_22 = DAT_1160_1858;
      DAT_1160_1858 = &uStack_22;
      puStack_20 = &stack0xfffe;
      DAT_1160_2004 = local_a;
      FUN_1010_2f8d(local_a,uVar3);
      *(undefined2 *)((int)local_a + 0x2b9) = 0x3388;
      *(undefined2 *)((int)local_a + 699) = 0x1028;
      *(int *)((int)local_a + 0x2bd) = iVar4;
      *(undefined2 *)((int)local_a + 0x2bf) = uVar5;
      iVar4 = (int)local_a;
      FUN_1140_5d45(local_a);
      DAT_1160_1858 = (undefined2 *)iVar4;
      puStack_20 = (undefined *)0x1140;
      uStack_22 = 0x337c;
      FUN_1140_5f1d(DAT_1160_2004);
      return;
    }
  }
  else {
    uStack_12 = (undefined2)((ulong)*(undefined4 *)(iVar4 + 0x340) >> 0x10);
    iStack_14 = (int)*(undefined4 *)(iVar4 + 0x340);
    pcStack_18 = (char *)0x32ad;
    cVar2 = FUN_1108_2f17();
    if (cVar2 != '\0') {
      uStack_12 = 1;
      iStack_14 = (int)((ulong)*(undefined4 *)(iVar4 + 0x370) >> 0x10);
      uStack_16 = (undefined2)*(undefined4 *)(iVar4 + 0x370);
      pcStack_18 = (char *)0x1108;
      uStack_1a = 0x32c2;
      FUN_1138_1c77();
      uStack_12 = param_3;
      iStack_14 = param_2;
      uStack_1a = 0x1138;
      uStack_1c = 0x32d2;
      pcStack_18 = (char *)iVar4;
      uStack_16 = uVar5;
      FUN_1028_3388();
      uStack_12 = 0;
      iStack_14 = (int)((ulong)*(undefined4 *)(iVar4 + 0x370) >> 0x10);
      uStack_16 = (undefined2)*(undefined4 *)(iVar4 + 0x370);
      pcStack_18 = (char *)0x1028;
      uStack_1a = 0x32e3;
      FUN_1138_1c77();
    }
  }
  return;
}



/* ---- FUN_1028_3388 @ 1028:3388  (1048 octets) ---- */

void __stdcall16far FUN_1028_3388(undefined4 param_1)

{
  byte bVar1;
  undefined uVar5;
  undefined extraout_AH;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined2 uVar9;
  undefined2 uVar10;
  undefined2 uVar11;
  int iVar12;
  
  FUN_1158_0444();
  uVar9 = (undefined2)((ulong)param_1 >> 0x10);
  iVar6 = (int)param_1;
  if (*(char *)(iVar6 + 0x3a2) != '\0') {
    FUN_1138_1cb8((int)*(undefined4 *)(iVar6 + 0x334),
                  (int)((ulong)*(undefined4 *)(iVar6 + 0x334) >> 0x10),0);
    FUN_1138_1cb8((int)*(undefined4 *)(iVar6 + 0x338),
                  (int)((ulong)*(undefined4 *)(iVar6 + 0x338) >> 0x10),0);
    FUN_1138_1cb8((int)*(undefined4 *)(iVar6 + 0x33c),
                  (int)((ulong)*(undefined4 *)(iVar6 + 0x33c) >> 0x10),0);
    FUN_1138_1cb8((int)*(undefined4 *)(iVar6 + 0x36c),
                  (int)((ulong)*(undefined4 *)(iVar6 + 0x36c) >> 0x10),0);
    *(undefined *)(iVar6 + 0x3a3) = 0;
  }
  uVar10 = (undefined2)((ulong)*DAT_1160_1fc4 >> 0x10);
  iVar7 = (int)*DAT_1160_1fc4;
  bVar1 = FUN_1120_6dd2(iVar7,uVar10);
  if ((bVar1 & *(byte *)(iVar7 + 0x2a) & DAT_1160_014a) != 0) {
    FUN_10a0_13a5(*(undefined *)(iVar6 + 0x3a2));
  }
  uVar10 = (undefined2)((ulong)*DAT_1160_1fc8 >> 0x10);
  iVar7 = (int)*DAT_1160_1fc8;
  bVar1 = FUN_1120_6dd2(iVar7,uVar10);
  if ((bVar1 & *(byte *)(iVar7 + 0x2a) & DAT_1160_014a) != 0) {
    FUN_1090_13b6(*(undefined *)(iVar6 + 0x3a2),*(undefined2 *)(iVar6 + 0x3a0));
  }
  uVar11 = (undefined2)((ulong)*DAT_1160_1fcc >> 0x10);
  iVar7 = (int)*DAT_1160_1fcc;
  uVar10 = FUN_1120_6dd2(iVar7,uVar11);
  uVar5 = (undefined)((uint)uVar10 >> 8);
  if (((byte)uVar10 & *(byte *)(iVar7 + 0x2a)) != 0) {
    if (DAT_1160_014a != 0) {
      FUN_1008_0cf9(CONCAT11(uVar5,*(undefined *)(iVar6 + 0x3a2)),*(undefined2 *)(iVar6 + 0x3a0));
      uVar5 = extraout_AH;
    }
    if (DAT_1160_014a != 0) {
      FUN_1070_0d57(CONCAT11(uVar5,*(undefined *)(iVar6 + 0x3a2)),*(undefined2 *)(iVar6 + 0x3a0));
    }
  }
  iVar7 = DAT_1160_014e;
  if (0 < DAT_1160_014e) {
    iVar12 = 1;
    while( true ) {
      iVar2 = FUN_1158_0416();
      iVar2 = iVar2 * 0x24;
      uVar10 = (undefined2)((ulong)*(undefined4 *)*(undefined4 *)(iVar2 + 0x1e80) >> 0x10);
      iVar8 = (int)*(undefined4 *)*(undefined4 *)(iVar2 + 0x1e80);
      uVar3 = FUN_1120_6dd2(iVar8,uVar10);
      uVar4 = uVar3 & 0xff00;
      if (*(char *)(iVar6 + 0x3a3) == '\0') {
        uVar4 = uVar4 + 1;
      }
      if ((byte)((byte)uVar4 & (byte)uVar3 & *(byte *)(iVar8 + 0x2a) & DAT_1160_014a) != 0) {
        FUN_1080_11b8(CONCAT11((char)(uVar4 >> 8),*(undefined *)(iVar6 + 0x3a2)),iVar12,
                      *(undefined2 *)(iVar6 + 0x3a0));
      }
      uVar10 = (undefined2)((ulong)*(undefined4 *)*(undefined4 *)(iVar2 + 0x1e88) >> 0x10);
      iVar8 = (int)*(undefined4 *)*(undefined4 *)(iVar2 + 0x1e88);
      uVar3 = FUN_1120_6dd2(iVar8,uVar10);
      uVar4 = uVar3 & 0xff00;
      if (*(char *)(iVar6 + 0x3a3) == '\0') {
        uVar4 = uVar4 + 1;
      }
      if ((byte)((byte)uVar4 & (byte)uVar3 & *(byte *)(iVar8 + 0x2a) & DAT_1160_014a) != 0) {
        FUN_1060_2385(CONCAT11((char)(uVar4 >> 8),*(undefined *)(iVar6 + 0x3a2)),iVar12,
                      *(undefined2 *)(iVar6 + 0x3a0));
      }
      uVar10 = (undefined2)((ulong)*(undefined4 *)*(undefined4 *)(iVar2 + 0x1e8c) >> 0x10);
      iVar8 = (int)*(undefined4 *)*(undefined4 *)(iVar2 + 0x1e8c);
      uVar3 = FUN_1120_6dd2(iVar8,uVar10);
      uVar4 = uVar3 & 0xff00;
      if (*(char *)(iVar6 + 0x3a3) == '\0') {
        uVar4 = uVar4 + 1;
      }
      if ((byte)((byte)uVar4 & (byte)uVar3 & *(byte *)(iVar8 + 0x2a) & DAT_1160_014a) != 0) {
        FUN_1058_1daa(CONCAT11((char)(uVar4 >> 8),*(undefined *)(iVar6 + 0x3a2)),iVar12,
                      *(undefined2 *)(iVar6 + 0x3a0));
      }
      uVar10 = (undefined2)((ulong)*(undefined4 *)*(undefined4 *)(iVar2 + 0x1e90) >> 0x10);
      iVar8 = (int)*(undefined4 *)*(undefined4 *)(iVar2 + 0x1e90);
      uVar3 = FUN_1120_6dd2(iVar8,uVar10);
      uVar4 = uVar3 & 0xff00;
      if (*(char *)(iVar6 + 0x3a3) == '\0') {
        uVar4 = uVar4 + 1;
      }
      if ((byte)((byte)uVar4 & (byte)uVar3 & *(byte *)(iVar8 + 0x2a) & DAT_1160_014a) != 0) {
        FUN_1050_0eb9(CONCAT11((char)(uVar4 >> 8),*(undefined *)(iVar6 + 0x3a2)),iVar12,
                      *(undefined2 *)(iVar6 + 0x3a0));
      }
      uVar10 = (undefined2)((ulong)*(undefined4 *)*(undefined4 *)(iVar2 + 0x1e94) >> 0x10);
      iVar8 = (int)*(undefined4 *)*(undefined4 *)(iVar2 + 0x1e94);
      uVar3 = FUN_1120_6dd2(iVar8,uVar10);
      uVar4 = uVar3 & 0xff00;
      if (*(char *)(iVar6 + 0x3a3) == '\0') {
        uVar4 = uVar4 + 1;
      }
      if ((byte)((byte)uVar4 &
                *(byte *)(iVar8 + 0x29) & *(byte *)(iVar8 + 0x2a) & (byte)uVar3 & DAT_1160_014a) !=
          0) {
        FUN_1048_13dc(CONCAT11((char)(uVar4 >> 8),*(undefined *)(iVar6 + 0x3a2)),iVar12,
                      *(undefined2 *)(iVar6 + 0x3a0));
      }
      uVar10 = (undefined2)((ulong)*(undefined4 *)*(undefined4 *)(iVar2 + 0x1e98) >> 0x10);
      iVar8 = (int)*(undefined4 *)*(undefined4 *)(iVar2 + 0x1e98);
      uVar3 = FUN_1120_6dd2(iVar8,uVar10);
      uVar4 = uVar3 & 0xff00;
      if (*(char *)(iVar6 + 0x3a3) == '\0') {
        uVar4 = uVar4 + 1;
      }
      if ((byte)((byte)uVar4 &
                *(byte *)(iVar8 + 0x29) & *(byte *)(iVar8 + 0x2a) & (byte)uVar3 & DAT_1160_014a) !=
          0) {
        FUN_1040_14f2(CONCAT11((char)(uVar4 >> 8),*(undefined *)(iVar6 + 0x3a2)),iVar12,
                      *(undefined2 *)(iVar6 + 0x3a0));
      }
      uVar10 = (undefined2)((ulong)*(undefined4 *)*(undefined4 *)(iVar2 + 0x1e9c) >> 0x10);
      iVar8 = (int)*(undefined4 *)*(undefined4 *)(iVar2 + 0x1e9c);
      uVar3 = FUN_1120_6dd2(iVar8,uVar10);
      uVar4 = uVar3 & 0xff00;
      if (*(char *)(iVar6 + 0x3a3) == '\0') {
        uVar4 = uVar4 + 1;
      }
      if ((byte)((byte)uVar4 &
                *(byte *)(iVar8 + 0x29) & *(byte *)(iVar8 + 0x2a) & (byte)uVar3 & DAT_1160_014a) !=
          0) {
        FUN_1038_14fb(CONCAT11((char)(uVar4 >> 8),*(undefined *)(iVar6 + 0x3a2)),iVar12,
                      *(undefined2 *)(iVar6 + 0x3a0));
      }
      uVar10 = (undefined2)((ulong)*(undefined4 *)*(undefined4 *)(iVar2 + 0x1ea0) >> 0x10);
      iVar2 = (int)*(undefined4 *)*(undefined4 *)(iVar2 + 0x1ea0);
      uVar3 = FUN_1120_6dd2(iVar2,uVar10);
      uVar4 = uVar3 & 0xff00;
      if (*(char *)(iVar6 + 0x3a3) == '\0') {
        uVar4 = uVar4 + 1;
      }
      if ((byte)((byte)uVar4 & (byte)uVar3 & *(byte *)(iVar2 + 0x2a) & DAT_1160_014a) != 0) {
        FUN_1030_081c(CONCAT11((char)(uVar4 >> 8),*(undefined *)(iVar6 + 0x3a2)),iVar12,
                      *(undefined2 *)(iVar6 + 0x3a0));
      }
      if (iVar12 == iVar7) break;
      iVar12 = iVar12 + 1;
    }
  }
  if (*(char *)(iVar6 + 0x3a2) != '\0') {
    FUN_1138_1cb8((int)*(undefined4 *)(iVar6 + 0x334),
                  (int)((ulong)*(undefined4 *)(iVar6 + 0x334) >> 0x10),1);
    FUN_1138_1cb8((int)*(undefined4 *)(iVar6 + 0x338),
                  (int)((ulong)*(undefined4 *)(iVar6 + 0x338) >> 0x10),1);
    FUN_1138_1cb8((int)*(undefined4 *)(iVar6 + 0x33c),
                  (int)((ulong)*(undefined4 *)(iVar6 + 0x33c) >> 0x10),1);
    FUN_1138_1cb8((int)*(undefined4 *)(iVar6 + 0x36c),
                  (int)((ulong)*(undefined4 *)(iVar6 + 0x36c) >> 0x10),1);
  }
  return;
}



/* ---- FUN_1028_3815 @ 1028:3815  (122 octets) ---- */

void __stdcall16far FUN_1028_3815(undefined4 param_1,undefined2 param_2,undefined2 param_3)

{
  undefined2 *puVar1;
  undefined4 *puVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  FUN_1158_0444();
  uVar4 = FUN_1158_2273(0x4ac,0x1110,param_2,param_3);
  uVar3 = (undefined2)((ulong)uVar4 >> 0x10);
  uVar5 = FUN_1138_19d4(uVar4,*(int *)((int)uVar4 + 0x22) / 2,*(int *)((int)uVar4 + 0x24) / 2);
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  uVar4 = *(undefined4 *)((int)param_1 + 0x358);
  *(undefined *)((int)uVar4 + 0x25) = 0;
  puVar2 = (undefined4 *)*(undefined4 *)((int)param_1 + 0x358);
  puVar1 = (undefined2 *)((int)*puVar2 + 0x38);
  (*(code *)*puVar1)(0x1138,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),
                     (int)((ulong)uVar5 >> 0x10),(int)uVar5);
  return;
}



/* ---- FUN_1028_388f @ 1028:388f  (67 octets) ---- */

void __stdcall16far FUN_1028_388f(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  undefined2 uVar3;
  
  FUN_1158_0444();
  cVar1 = FUN_1010_34c6();
  if (cVar1 != '\0') {
    uVar3 = (undefined2)((ulong)param_1 >> 0x10);
    iVar2 = (int)param_1;
    FUN_1138_1c77((int)*(undefined4 *)(iVar2 + 0x344),
                  (int)((ulong)*(undefined4 *)(iVar2 + 0x344) >> 0x10),0);
    FUN_1140_5a2d(iVar2,uVar3);
    FUN_1138_1c77((int)*(undefined4 *)(iVar2 + 0x344),
                  (int)((ulong)*(undefined4 *)(iVar2 + 0x344) >> 0x10),1);
  }
  return;
}



/* ---- FUN_1028_38d2 @ 1028:38d2  (338 octets) ---- */

void __stdcall16far FUN_1028_38d2(undefined4 param_1)

{
  undefined2 *puVar1;
  int iVar2;
  int iVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  undefined2 unaff_SS;
  undefined4 uVar7;
  undefined4 uVar8;
  int *piVar9;
  undefined2 *puVar10;
  int local_12;
  int local_10;
  int local_e;
  int local_c;
  undefined2 local_a;
  undefined2 local_8;
  undefined2 local_6;
  
  local_6 = 0x38dd;
  FUN_1158_0444();
  uVar4 = (undefined2)((ulong)param_1 >> 0x10);
  iVar2 = (int)param_1;
  FUN_1138_1c77((int)*(undefined4 *)(iVar2 + 0x344),
                (int)((ulong)*(undefined4 *)(iVar2 + 0x344) >> 0x10),0);
  FUN_1138_17bf((int)*(undefined4 *)(iVar2 + 0x364),
                (int)((ulong)*(undefined4 *)(iVar2 + 0x364) >> 0x10),*(undefined2 *)(iVar2 + 0x22));
  FUN_1138_17e1((int)*(undefined4 *)(iVar2 + 0x364),
                (int)((ulong)*(undefined4 *)(iVar2 + 0x364) >> 0x10),*(undefined2 *)(iVar2 + 0x24));
  uVar5 = 0x1138;
  uVar7 = FUN_1138_19d4(iVar2,uVar4,0,0);
  iVar3 = (int)((ulong)uVar7 >> 0x10);
  local_12 = *(int *)(iVar2 + 0x1e) - (int)uVar7;
  if (SBORROW2(*(int *)(iVar2 + 0x1e),(int)uVar7)) {
    uVar5 = 0x1158;
    local_12 = FUN_1158_043e(0x1138);
  }
  local_10 = *(int *)(iVar2 + 0x20) - iVar3;
  uVar6 = uVar5;
  if (SBORROW2(*(int *)(iVar2 + 0x20),iVar3)) {
    uVar6 = 0x1158;
    local_10 = FUN_1158_043e(uVar5);
  }
  local_e = *(int *)(iVar2 + 0x22) + local_12;
  uVar5 = uVar6;
  if (SCARRY2(*(int *)(iVar2 + 0x22),local_12)) {
    uVar5 = 0x1158;
    local_e = FUN_1158_043e(uVar6);
  }
  local_c = *(int *)(iVar2 + 0x24) + local_10;
  if (SCARRY2(*(int *)(iVar2 + 0x24),local_10)) {
    local_c = FUN_1158_043e(uVar5);
  }
  local_a = 0;
  local_8 = 0;
  local_6 = *(undefined2 *)((int)*(undefined4 *)(iVar2 + 0x364) + 0x22);
  FUN_1138_1c77((int)*(undefined4 *)(iVar2 + 0x364),
                (int)((ulong)*(undefined4 *)(iVar2 + 0x364) >> 0x10),0);
  puVar10 = &local_a;
  uVar7 = FUN_1140_33d5(iVar2,uVar4);
  piVar9 = &local_12;
  uVar6 = (undefined2)((ulong)*(undefined4 *)(iVar2 + 0x364) >> 0x10);
  uVar5 = (undefined2)*(undefined4 *)(iVar2 + 0x364);
  uVar8 = FUN_1118_1f94(uVar5,uVar6,piVar9);
  FUN_1128_1b10(uVar8,uVar5,uVar6,piVar9,unaff_SS,uVar7);
  uVar5 = (undefined2)((ulong)*(undefined4 *)(iVar2 + 0x364) >> 0x10);
  iVar3 = (int)*(undefined4 *)(iVar2 + 0x364);
  puVar1 = (undefined2 *)((int)*DAT_1160_2ad0 + 8);
  (*(code *)*puVar1)(0x1128,(undefined4 *)DAT_1160_2ad0,(int)((ulong)DAT_1160_2ad0 >> 0x10),
                     *(undefined2 *)(iVar3 + 0x8e),*(undefined2 *)(iVar3 + 0x90),puVar10);
  FUN_1138_1c77((int)*(undefined4 *)(iVar2 + 0x344),
                (int)((ulong)*(undefined4 *)(iVar2 + 0x344) >> 0x10),1);
  return;
}



/* ---- FUN_1028_3ce0 @ 1028:3ce0  (41 octets) ---- */

void __stdcall16far FUN_1028_3ce0(undefined4 param_1,undefined *param_2)

{
  FUN_1158_0444();
  if (*(char *)((int)param_1 + 0x1e0) == '\0') {
    *param_2 = 2;
  }
  else {
    *param_2 = 1;
  }
  return;
}



/* ---- FUN_1028_3d09 @ 1028:3d09  (58 octets) ---- */

void __stdcall16far FUN_1028_3d09(undefined4 param_1)

{
  int iVar1;
  undefined2 uVar2;
  
  FUN_1158_0444();
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  FUN_1118_2749((int)*(undefined4 *)(iVar1 + 0x17c),
                (int)((ulong)*(undefined4 *)(iVar1 + 0x17c) >> 0x10),0);
  FUN_1138_1c77((int)*(undefined4 *)(iVar1 + 0x188),
                (int)((ulong)*(undefined4 *)(iVar1 + 0x188) >> 0x10),0);
  FUN_1140_5556(iVar1,uVar2);
  return;
}



/* ---- FUN_1028_3d43 @ 1028:3d43  (149 octets) ---- */

void __stdcall16far FUN_1028_3d43(undefined4 param_1)

{
  int iVar1;
  undefined2 uVar2;
  
  FUN_1158_0444();
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  FUN_1140_326e(iVar1,uVar2,0);
  FUN_1140_3244(iVar1,uVar2,0);
  FUN_1138_17e1(iVar1,uVar2,*(undefined2 *)((int)*(undefined4 *)(iVar1 + 0x184) + 0x24));
  FUN_1138_17bf(iVar1,uVar2,*(undefined2 *)((int)*(undefined4 *)(iVar1 + 0x184) + 0x22));
  FUN_1118_2c3e((int)*(undefined4 *)(iVar1 + 0x184),
                (int)((ulong)*(undefined4 *)(iVar1 + 0x184) >> 0x10),2);
  FUN_1118_2cad((int)*(undefined4 *)(iVar1 + 0x184),
                (int)((ulong)*(undefined4 *)(iVar1 + 0x184) >> 0x10),1);
  *(undefined *)(iVar1 + 0x1e0) = 0;
  FUN_1118_2749((int)*(undefined4 *)(iVar1 + 0x17c),
                (int)((ulong)*(undefined4 *)(iVar1 + 0x17c) >> 0x10),1);
  FUN_1140_5ccc(iVar1,uVar2);
  return;
}



/* ---- FUN_1028_3dd8 @ 1028:3dd8  (181 octets) ---- */

void __stdcall16far FUN_1028_3dd8(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 unaff_SS;
  undefined *puVar4;
  undefined2 uVar5;
  undefined local_102 [252];
  undefined2 uStack_6;
  
  uStack_6 = 0x3de3;
  FUN_1158_0444();
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  iVar2 = (int)param_1;
  if (*(char *)(iVar2 + 0x1e0) != '\0') {
    puVar4 = local_102;
    uVar1 = *(undefined4 *)((int)DAT_1160_18f6 + 0x24c);
    uVar5 = unaff_SS;
    FUN_1138_1d53((int)uVar1,(int)((ulong)uVar1 >> 0x10));
    FUN_1138_1d8c((int)*(undefined4 *)(iVar2 + 0x1c8),
                  (int)((ulong)*(undefined4 *)(iVar2 + 0x1c8) >> 0x10),puVar4,uVar5);
    puVar4 = local_102;
    uVar1 = *(undefined4 *)((int)DAT_1160_18f6 + 0x250);
    uVar5 = unaff_SS;
    FUN_1138_1d53((int)uVar1,(int)((ulong)uVar1 >> 0x10));
    FUN_1138_1d8c((int)*(undefined4 *)(iVar2 + 0x1c0),
                  (int)((ulong)*(undefined4 *)(iVar2 + 0x1c0) >> 0x10),puVar4,uVar5);
    puVar4 = local_102;
    uVar1 = *(undefined4 *)((int)DAT_1160_18f6 + 0x254);
    uVar5 = unaff_SS;
    FUN_1138_1d53((int)uVar1,(int)((ulong)uVar1 >> 0x10));
    FUN_1138_1d8c((int)*(undefined4 *)(iVar2 + 0x1c4),
                  (int)((ulong)*(undefined4 *)(iVar2 + 0x1c4) >> 0x10),puVar4,uVar5);
    puVar4 = local_102;
    uVar1 = *(undefined4 *)((int)DAT_1160_18f6 + 0x248);
    FUN_1138_1d53((int)uVar1,(int)((ulong)uVar1 >> 0x10));
    FUN_1138_1d8c((int)*(undefined4 *)(iVar2 + 0x1cc),
                  (int)((ulong)*(undefined4 *)(iVar2 + 0x1cc) >> 0x10),puVar4,unaff_SS);
  }
  return;
}



/* ---- FUN_1028_3e8d @ 1028:3e8d  (24 octets) ---- */

void __stdcall16far FUN_1028_3e8d(undefined4 param_1)

{
  FUN_1158_0444();
  FUN_1140_5556((int)param_1,(int)((ulong)param_1 >> 0x10));
  return;
}



/* ---- FUN_1028_3ea5 @ 1028:3ea5  (56 octets) ---- */

void __cdecl16far FUN_1028_3ea5(void)

{
  undefined extraout_AH;
  undefined4 uVar1;
  
  FUN_1158_0444();
  uVar1 = FUN_1140_2553(0x3a44,0x1028,CONCAT11(extraout_AH,1),(undefined2)DAT_1160_2c2a,
                        DAT_1160_2c2a._2_2_);
  FUN_1028_3d43(uVar1);
  return;
}



/* ---- FUN_1028_3edd @ 1028:3edd  (34 octets) ---- */

void __stdcall16far FUN_1028_3edd(undefined2 param_1,undefined2 param_2,undefined2 param_3)

{
  undefined2 uVar1;
  
  FUN_1158_0444();
  uVar1 = GLOBALALLOC(0x1158,param_1,param_2);
  GLOBALLOCK(0x14d0,uVar1,param_3);
  return;
}



/* ---- FUN_1028_3eff @ 1028:3eff  (49 octets) ---- */

void __stdcall16far
FUN_1028_3eff(undefined2 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4_00,
             undefined2 param_4)

{
  undefined2 uVar1;
  
  FUN_1158_0444();
  uVar1 = GLOBALHANDLE(0x1158,param_4);
  GLOBALUNLOCK(0x14d0,uVar1,uVar1);
  uVar1 = GLOBALREALLOC(0x14d0,param_1,param_2,param_3);
  GLOBALLOCK(0x14d0,uVar1);
  return;
}



/* ---- FUN_1028_3f30 @ 1028:3f30  (34 octets) ---- */

void __stdcall16far FUN_1028_3f30(undefined2 param_1_00,undefined2 param_1)

{
  undefined2 uVar1;
  
  FUN_1158_0444();
  uVar1 = GLOBALHANDLE(0x1158,param_1);
  GLOBALUNLOCK(0x14d0,uVar1,uVar1);
  GLOBALFREE(0x14d0);
  return;
}



/* ---- FUN_1028_3f52 @ 1028:3f52  (36 octets) ---- */

undefined2 __stdcall16far FUN_1028_3f52(undefined2 param_1)

{
  undefined2 uVar1;
  
  FUN_1158_0444();
  uVar1 = GETMODULEHANDLE(0x1158,param_1);
  return uVar1;
}




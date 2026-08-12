/* Simstrat (FR).EXE - segment Code4 - 13 fonctions
   Decompile par Ghidra 11.2.1 (x86 16 bits, chargeur NE). */

/* ---- FUN_1018_0303 @ 1018:0303  (206 octets) ---- */

void __stdcall16far FUN_1018_0303(undefined4 param_1)

{
  undefined2 uVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 unaff_SS;
  undefined *puVar4;
  undefined local_302 [256];
  undefined local_202;
  undefined local_201 [255];
  undefined local_102;
  undefined local_101 [251];
  undefined2 uStack_6;
  
  uStack_6 = 0x30e;
  FUN_1158_0444();
  DAT_1160_0174 = 1;
  FUN_1158_17e7(0xff,&local_102,unaff_SS,0x2c0,0x1158);
  puVar4 = local_302;
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  iVar2 = (int)param_1;
  uVar1 = unaff_SS;
  FUN_1138_1d53(iVar2,uVar3);
  FUN_1158_184c(0x2d0,0x1138);
  FUN_1158_184c(0x2d0,0x1158);
  FUN_1158_184c(0x2d2,0x1158);
  FUN_1158_184c(0x2d0,0x1158);
  FUN_1158_184c(0x2d0,0x1158);
  FUN_1158_184c(0x2f0,0x1158);
  FUN_1158_184c(0x301,0x1158);
  FUN_1158_17e7(0xff,&local_202,unaff_SS,puVar4,uVar1);
  uVar1 = FUN_1138_62b9(iVar2,uVar3);
  MESSAGEBOX(0x1138,0x40,local_101,unaff_SS,local_201,unaff_SS);
  FUN_1000_28c7((int)DAT_1160_18f6,(int)((ulong)DAT_1160_18f6 >> 0x10));
  *(undefined2 *)(iVar2 + 0x104) = 3;
  FUN_1140_5556(iVar2,uVar3);
  FUN_1150_28c3(0x1140,uVar1);
  return;
}



/* ---- FUN_1018_03d9 @ 1018:03d9  (255 octets) ---- */

void __cdecl16far FUN_1018_03d9(void)

{
  char cVar1;
  undefined extraout_AH;
  undefined2 unaff_CS;
  undefined2 unaff_SS;
  undefined *puVar2;
  undefined *puVar3;
  undefined2 uVar4;
  undefined2 uStack_220;
  undefined *puStack_21e;
  undefined2 uStack_21c;
  undefined2 uStack_21a;
  undefined2 uStack_218;
  char *pcStack_216;
  undefined2 uStack_214;
  undefined2 uStack_212;
  undefined2 uStack_210;
  undefined local_20e [256];
  undefined local_10e [256];
  undefined2 local_e;
  undefined2 local_c;
  undefined4 local_a;
  undefined2 local_6;
  
  _local_6 = CONCAT22(unaff_CS,0x3e4);
  FUN_1158_0444();
  uStack_210 = DAT_1160_2c2a._2_2_;
  uStack_212 = (undefined2)DAT_1160_2c2a;
  uStack_214 = CONCAT11(extraout_AH,1);
  pcStack_216 = (char *)s_device_1160_1017 + 1;
  uStack_218 = 0x22;
  uStack_21a = 0x1158;
  uStack_21c = 0x400;
  _local_6 = FUN_1140_2553();
  uStack_21a = 0x1140;
  uStack_21c = 0x3d3;
  uStack_220 = DAT_1160_1858;
  DAT_1160_1858 = &uStack_220;
  puStack_21e = &stack0xfffe;
  local_a = _local_6;
  FUN_1018_04da(_local_6);
  *(undefined2 *)((int)local_a + 0x1e8) = DAT_1160_014c;
  local_c = (undefined2)((ulong)*(undefined4 *)((int)local_a + 0x1d0) >> 0x10);
  local_e = (undefined2)*(undefined4 *)((int)local_a + 0x1d0);
  puVar3 = local_10e;
  uVar4 = unaff_SS;
  FUN_1138_1d53(local_e,local_c);
  FUN_1158_184c(0x3d1,0x1138);
  puVar2 = local_20e;
  FUN_1150_08a9(*(int *)((int)local_a + 0x1e8),*(int *)((int)local_a + 0x1e8) >> 0xf);
  FUN_1158_184c(puVar2,unaff_SS);
  FUN_1138_1d8c(local_e,local_c,puVar3,uVar4);
  cVar1 = FUN_1018_0b4f(local_a,*(undefined2 *)((int)local_a + 0x1e8));
  if (cVar1 == '\0') {
    FUN_1138_1cb8((int)*(undefined4 *)((int)local_a + 0x1c4),
                  (int)((ulong)*(undefined4 *)((int)local_a + 0x1c4) >> 0x10),0);
    MESSAGEBEEP(0x1138,0);
  }
  else {
    FUN_1138_1c77((int)*(undefined4 *)((int)local_a + 0x1cc),
                  (int)((ulong)*(undefined4 *)((int)local_a + 0x1cc) >> 0x10),0);
  }
  uVar4 = (int)local_a;
  FUN_1140_5d45(local_a);
  DAT_1160_1858 = (undefined2 *)uVar4;
  FUN_1140_5f1d((int)_local_6,(int)((ulong)_local_6 >> 0x10));
  return;
}



/* ---- FUN_1018_04da @ 1018:04da  (623 octets) ---- */

void __stdcall16far FUN_1018_04da(undefined4 param_1)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  
  FUN_1158_0444();
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  uVar4 = (undefined2)((ulong)*(undefined4 *)(iVar1 + 0x1d4) >> 0x10);
  uVar2 = (undefined2)*(undefined4 *)(iVar1 + 0x1d4);
  FUN_10d8_31d2(uVar2,uVar4);
  FUN_10e0_2ffb(uVar2,uVar4,0);
  FUN_10e0_2ed2(uVar2,uVar4,1);
  FUN_10d8_31bf(uVar2,uVar4);
  uVar4 = (undefined2)((ulong)*(undefined4 *)(iVar1 + 0x17c) >> 0x10);
  uVar2 = (undefined2)*(undefined4 *)(iVar1 + 0x17c);
  FUN_10d8_31d2(uVar2,uVar4);
  FUN_10e0_2ffb(uVar2,uVar4,1);
  FUN_10e0_2ed2(uVar2,uVar4,0);
  FUN_10d8_31bf(uVar2,uVar4);
  uVar4 = (undefined2)((ulong)*(undefined4 *)(iVar1 + 0x198) >> 0x10);
  uVar2 = (undefined2)*(undefined4 *)(iVar1 + 0x198);
  FUN_10d8_31d2(uVar2,uVar4);
  FUN_10e0_2ffb(uVar2,uVar4,1);
  FUN_10e0_2ed2(uVar2,uVar4,0);
  FUN_10d8_31bf(uVar2,uVar4);
  uVar4 = (undefined2)((ulong)*(undefined4 *)(iVar1 + 0x180) >> 0x10);
  uVar2 = (undefined2)*(undefined4 *)(iVar1 + 0x180);
  FUN_10d8_31d2(uVar2,uVar4);
  FUN_10e0_2ffb(uVar2,uVar4,0);
  FUN_10e0_2ed2(uVar2,uVar4,1);
  FUN_10d8_31bf(uVar2,uVar4);
  uVar4 = (undefined2)((ulong)*(undefined4 *)(iVar1 + 0x184) >> 0x10);
  uVar2 = (undefined2)*(undefined4 *)(iVar1 + 0x184);
  FUN_10d8_31d2(uVar2,uVar4);
  FUN_10e0_2ffb(uVar2,uVar4,0);
  FUN_10e0_2ed2(uVar2,uVar4,1);
  FUN_10d8_31bf(uVar2,uVar4);
  uVar4 = (undefined2)((ulong)*(undefined4 *)(iVar1 + 0x188) >> 0x10);
  uVar2 = (undefined2)*(undefined4 *)(iVar1 + 0x188);
  FUN_10d8_31d2(uVar2,uVar4);
  FUN_10e0_2ffb(uVar2,uVar4,0);
  FUN_10e0_2ed2(uVar2,uVar4,1);
  FUN_10d8_31bf(uVar2,uVar4);
  uVar4 = (undefined2)((ulong)*(undefined4 *)(iVar1 + 0x18c) >> 0x10);
  uVar2 = (undefined2)*(undefined4 *)(iVar1 + 0x18c);
  FUN_10d8_31d2(uVar2,uVar4);
  FUN_10e0_2ffb(uVar2,uVar4,0);
  FUN_10e0_2ed2(uVar2,uVar4,1);
  FUN_10d8_31bf(uVar2,uVar4);
  uVar4 = (undefined2)((ulong)*(undefined4 *)(iVar1 + 0x1d8) >> 0x10);
  uVar2 = (undefined2)*(undefined4 *)(iVar1 + 0x1d8);
  FUN_10d8_31d2(uVar2,uVar4);
  FUN_10e0_2ffb(uVar2,uVar4,0);
  FUN_10e0_2ed2(uVar2,uVar4,1);
  FUN_10d8_31bf(uVar2,uVar4);
  uVar4 = (undefined2)((ulong)*(undefined4 *)(iVar1 + 400) >> 0x10);
  uVar2 = (undefined2)*(undefined4 *)(iVar1 + 400);
  FUN_10d8_31d2(uVar2,uVar4);
  FUN_10e0_2ffb(uVar2,uVar4,0);
  FUN_10e0_2ed2(uVar2,uVar4,1);
  FUN_10d8_31bf(uVar2,uVar4);
  uVar4 = (undefined2)((ulong)*(undefined4 *)(iVar1 + 0x194) >> 0x10);
  uVar2 = (undefined2)*(undefined4 *)(iVar1 + 0x194);
  FUN_10d8_31d2(uVar2,uVar4);
  FUN_10e0_2ffb(uVar2,uVar4,0);
  FUN_10e0_2ed2(uVar2,uVar4,1);
  FUN_10d8_31bf(uVar2,uVar4);
  uVar4 = (undefined2)((ulong)*(undefined4 *)(iVar1 + 0x1e0) >> 0x10);
  uVar2 = (undefined2)*(undefined4 *)(iVar1 + 0x1e0);
  FUN_10d8_31d2(uVar2,uVar4);
  FUN_10e0_2ffb(uVar2,uVar4,0);
  FUN_10e0_2ed2(uVar2,uVar4,1);
  FUN_10d8_31bf(uVar2,uVar4);
  return;
}



/* ---- FUN_1018_0749 @ 1018:0749  (535 octets) ---- */

void __stdcall16far FUN_1018_0749(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  
  FUN_1158_0444();
  uVar4 = (undefined2)((ulong)param_1 >> 0x10);
  iVar2 = (int)param_1;
  uVar5 = (undefined2)((ulong)*(undefined4 *)(iVar2 + 0x1d4) >> 0x10);
  uVar3 = (undefined2)*(undefined4 *)(iVar2 + 0x1d4);
  cVar1 = FUN_10d8_3202(uVar3,uVar5);
  if (cVar1 != '\0') {
    FUN_10d8_31d2(uVar3,uVar5);
    FUN_10e0_2ed2(uVar3,uVar5,0);
  }
  uVar5 = (undefined2)((ulong)*(undefined4 *)(iVar2 + 0x17c) >> 0x10);
  uVar3 = (undefined2)*(undefined4 *)(iVar2 + 0x17c);
  cVar1 = FUN_10d8_3202(uVar3,uVar5);
  if (cVar1 != '\0') {
    FUN_10d8_31d2(uVar3,uVar5);
    FUN_10e0_2ed2(uVar3,uVar5,0);
  }
  uVar5 = (undefined2)((ulong)*(undefined4 *)(iVar2 + 0x198) >> 0x10);
  uVar3 = (undefined2)*(undefined4 *)(iVar2 + 0x198);
  cVar1 = FUN_10d8_3202(uVar3,uVar5);
  if (cVar1 != '\0') {
    FUN_10d8_31d2(uVar3,uVar5);
    FUN_10e0_2ed2(uVar3,uVar5,0);
  }
  uVar5 = (undefined2)((ulong)*(undefined4 *)(iVar2 + 0x180) >> 0x10);
  uVar3 = (undefined2)*(undefined4 *)(iVar2 + 0x180);
  cVar1 = FUN_10d8_3202(uVar3,uVar5);
  if (cVar1 != '\0') {
    FUN_10d8_31d2(uVar3,uVar5);
    FUN_10e0_2ed2(uVar3,uVar5,0);
  }
  uVar5 = (undefined2)((ulong)*(undefined4 *)(iVar2 + 0x184) >> 0x10);
  uVar3 = (undefined2)*(undefined4 *)(iVar2 + 0x184);
  cVar1 = FUN_10d8_3202(uVar3,uVar5);
  if (cVar1 != '\0') {
    FUN_10d8_31d2(uVar3,uVar5);
    FUN_10e0_2ed2(uVar3,uVar5,0);
  }
  uVar5 = (undefined2)((ulong)*(undefined4 *)(iVar2 + 0x188) >> 0x10);
  uVar3 = (undefined2)*(undefined4 *)(iVar2 + 0x188);
  cVar1 = FUN_10d8_3202(uVar3,uVar5);
  if (cVar1 != '\0') {
    FUN_10d8_31d2(uVar3,uVar5);
    FUN_10e0_2ed2(uVar3,uVar5,0);
  }
  uVar5 = (undefined2)((ulong)*(undefined4 *)(iVar2 + 0x18c) >> 0x10);
  uVar3 = (undefined2)*(undefined4 *)(iVar2 + 0x18c);
  cVar1 = FUN_10d8_3202(uVar3,uVar5);
  if (cVar1 != '\0') {
    FUN_10d8_31d2(uVar3,uVar5);
    FUN_10e0_2ed2(uVar3,uVar5,0);
  }
  uVar5 = (undefined2)((ulong)*(undefined4 *)(iVar2 + 0x1d8) >> 0x10);
  uVar3 = (undefined2)*(undefined4 *)(iVar2 + 0x1d8);
  cVar1 = FUN_10d8_3202(uVar3,uVar5);
  if (cVar1 != '\0') {
    FUN_10d8_31d2(uVar3,uVar5);
    FUN_10e0_2ed2(uVar3,uVar5,0);
  }
  uVar5 = (undefined2)((ulong)*(undefined4 *)(iVar2 + 400) >> 0x10);
  uVar3 = (undefined2)*(undefined4 *)(iVar2 + 400);
  cVar1 = FUN_10d8_3202(uVar3,uVar5);
  if (cVar1 != '\0') {
    FUN_10d8_31d2(uVar3,uVar5);
    FUN_10e0_2ed2(uVar3,uVar5,0);
  }
  uVar5 = (undefined2)((ulong)*(undefined4 *)(iVar2 + 0x194) >> 0x10);
  uVar3 = (undefined2)*(undefined4 *)(iVar2 + 0x194);
  cVar1 = FUN_10d8_3202(uVar3,uVar5);
  if (cVar1 != '\0') {
    FUN_10d8_31d2(uVar3,uVar5);
    FUN_10e0_2ed2(uVar3,uVar5,0);
  }
  uVar5 = (undefined2)((ulong)*(undefined4 *)(iVar2 + 0x1e0) >> 0x10);
  uVar3 = (undefined2)*(undefined4 *)(iVar2 + 0x1e0);
  cVar1 = FUN_10d8_3202(uVar3,uVar5);
  if (cVar1 != '\0') {
    FUN_10d8_31d2(uVar3,uVar5);
    FUN_10e0_2ed2(uVar3,uVar5,0);
  }
  return;
}



/* ---- FUN_1018_0aa7 @ 1018:0aa7  (37 octets) ---- */

void __stdcall16far FUN_1018_0aa7(undefined4 param_1)

{
  FUN_1158_0444();
  FUN_1018_0749((int)param_1,(int)((ulong)param_1 >> 0x10));
  FUN_1140_63a9((int)DAT_1160_2c2e,(int)((ulong)DAT_1160_2c2e >> 0x10),0xfffe);
  return;
}



/* ---- FUN_1018_0acc @ 1018:0acc  (21 octets) ---- */

void __stdcall16far FUN_1018_0acc(undefined2 param_1_00,undefined2 param_2,undefined *param_1)

{
  FUN_1158_0444();
  *param_1 = 1;
  return;
}



/* ---- FUN_1018_0ae1 @ 1018:0ae1  (40 octets) ---- */

void __stdcall16far FUN_1018_0ae1(undefined4 param_1)

{
  undefined2 uVar1;
  
  FUN_1158_0444();
  uVar1 = (undefined2)((ulong)param_1 >> 0x10);
  FUN_1140_77b2((int)DAT_1160_2c2a,(int)((ulong)DAT_1160_2c2a >> 0x10),
                *(undefined2 *)((int)param_1 + 0xac),*(undefined2 *)((int)param_1 + 0xae),1);
  return;
}



/* ---- FUN_1018_0b4f @ 1018:0b4f  (315 octets) ---- */

void __cdecl16far FUN_1018_0b4f(undefined4 param_1,int param_2)

{
  undefined2 *puVar1;
  char cVar2;
  int iVar3;
  undefined2 uVar4;
  char *pcVar5;
  undefined2 unaff_SS;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined *puStack_5a;
  undefined *puStack_58;
  undefined2 uStack_56;
  undefined2 uStack_54;
  undefined *puStack_52;
  undefined *puStack_50;
  undefined2 uStack_4e;
  undefined2 uStack_4c;
  undefined2 uStack_4a;
  undefined *puStack_48;
  undefined2 uStack_46;
  undefined2 uStack_44;
  int local_38;
  int local_36;
  undefined local_34;
  undefined4 local_30;
  undefined2 local_28;
  undefined2 local_26;
  undefined2 local_24;
  undefined2 local_22;
  undefined2 local_20;
  undefined2 local_1e;
  undefined2 local_1c;
  undefined2 local_1a;
  undefined2 local_18;
  undefined2 local_16;
  undefined2 local_14;
  undefined2 local_12;
  undefined2 local_10;
  undefined2 local_e;
  undefined2 local_c;
  undefined2 local_a;
  undefined2 local_8;
  undefined2 local_6;
  
  local_6 = 0xb5a;
  FUN_1158_0444();
  uVar4 = (undefined2)((ulong)param_1 >> 0x10);
  iVar3 = (int)param_1;
  _local_28 = CONCAT22(*(undefined2 *)(iVar3 + 0x1a2),*(undefined2 *)(iVar3 + 0x1a0));
  local_24 = *(undefined2 *)(iVar3 + 0x1a4);
  local_22 = *(undefined2 *)(iVar3 + 0x1a6);
  local_20 = *(undefined2 *)(iVar3 + 0x1a8);
  local_1e = *(undefined2 *)(iVar3 + 0x1aa);
  local_1c = *(undefined2 *)(iVar3 + 0x1ac);
  local_1a = *(undefined2 *)(iVar3 + 0x1ae);
  local_18 = *(undefined2 *)(iVar3 + 0x1b0);
  local_16 = *(undefined2 *)(iVar3 + 0x1b2);
  local_14 = *(undefined2 *)(iVar3 + 0x1b4);
  local_12 = *(undefined2 *)(iVar3 + 0x1b6);
  local_10 = *(undefined2 *)(iVar3 + 0x1b8);
  local_e = *(undefined2 *)(iVar3 + 0x1ba);
  local_c = *(undefined2 *)(iVar3 + 0x1bc);
  local_a = *(undefined2 *)(iVar3 + 0x1be);
  local_8 = *(undefined2 *)(iVar3 + 0x1c0);
  local_6 = *(undefined2 *)(iVar3 + 0x1c2);
  uStack_44 = 0x1158;
  uStack_46 = 0xb45;
  puStack_52 = (undefined *)&uStack_4a;
  uStack_4a = DAT_1160_1858;
  uStack_4c = 0x1158;
  uStack_4e = 0xb3b;
  puStack_5a = (undefined *)&puStack_52;
  local_30 = *(undefined4 *)(iVar3 + 0x180);
  uStack_54 = 0x1158;
  uStack_56 = 0xb14;
  DAT_1160_1858 = &puStack_5a;
  local_36 = param_2 >> 0xf;
  local_38 = param_2;
  local_34 = 0;
  pcVar5 = (char *)s_iTime_1160_10dc + 4;
  puStack_58 = &stack0xfffe;
  puStack_50 = &stack0xfffe;
  puStack_48 = &stack0xfffe;
  cVar2 = FUN_10e0_2895((int)local_30,(int)((ulong)local_30 >> 0x10),0,&local_38,unaff_SS);
  if (cVar2 == '\0') {
    pcVar5 = (char *)s_device_1160_1017 + 1;
    FUN_1018_0303(iVar3,uVar4);
  }
  puVar6 = (undefined4 *)FUN_10d8_3b9b((int)local_30,(int)((ulong)local_30 >> 0x10),0xb09,pcVar5);
  puVar7 = (undefined4 *)puVar6;
  puVar1 = (undefined2 *)((int)*puVar6 + 0x38);
  uVar4 = (*(code *)*puVar1)(0x10d8,puVar6);
  FUN_1120_6e11((int)_local_28,(int)((ulong)_local_28 >> 0x10),uVar4);
  DAT_1160_1858 = (undefined **)puVar7;
  return;
}



/* ---- FUN_1018_0e0b @ 1018:0e0b  (83 octets) ---- */

void __stdcall16far FUN_1018_0e0b(undefined4 param_1)

{
  int iVar1;
  undefined2 uVar2;
  
  FUN_1158_0444();
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  FUN_1138_1c77((int)*(undefined4 *)(iVar1 + 0x1dc),
                (int)((ulong)*(undefined4 *)(iVar1 + 0x1dc) >> 0x10),1);
  FUN_1140_63a9((int)DAT_1160_2c2e,(int)((ulong)DAT_1160_2c2e >> 0x10),0xfff5);
  FUN_1140_7303((int)DAT_1160_2c2a,(int)((ulong)DAT_1160_2c2a >> 0x10));
  FUN_1018_ab2b(iVar1,uVar2,*(undefined2 *)(iVar1 + 0x1e8));
  FUN_1140_63a9((int)DAT_1160_2c2e,(int)((ulong)DAT_1160_2c2e >> 0x10),0);
  return;
}



/* ---- FUN_1018_216e @ 1018:216e  (143 octets) ---- */

void __cdecl16far FUN_1018_216e(undefined4 param_1)

{
  undefined2 *puVar1;
  char cVar2;
  undefined2 uVar3;
  char *pcVar4;
  undefined2 unaff_SS;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined2 uStack_eb4;
  undefined *puStack_eb2;
  undefined2 uStack_eb0;
  undefined2 uStack_eae;
  undefined2 local_e9a;
  undefined2 local_e98;
  undefined local_e96;
  undefined4 local_e92;
  undefined2 uStack_6;
  
  uStack_6 = 0x2179;
  FUN_1158_0444();
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  local_e92 = *(undefined4 *)((int)param_1 + 0x17c);
  uStack_eae = 0x1158;
  uStack_eb0 = 0x1cd2;
  uStack_eb4 = DAT_1160_1858;
  local_e9a = 1;
  local_e98 = 0;
  local_e96 = 0;
  pcVar4 = (char *)s_iTime_1160_10dc + 4;
  DAT_1160_1858 = (undefined4 *)&uStack_eb4;
  puStack_eb2 = &stack0xfffe;
  cVar2 = FUN_10e0_2895((int)local_e92,(int)((ulong)local_e92 >> 0x10),0,&local_e9a,unaff_SS);
  if (cVar2 == '\0') {
    pcVar4 = (char *)s_device_1160_1017 + 1;
    FUN_1018_0303((int)param_1,uVar3);
  }
  puVar5 = (undefined4 *)FUN_10d8_3b9b((int)local_e92,(int)((ulong)local_e92 >> 0x10),0x1cc7,pcVar4)
  ;
  puVar6 = (undefined4 *)puVar5;
  puVar1 = (undefined2 *)((int)*puVar5 + 0x40);
  (*(code *)*puVar1)(0x10d8,puVar5);
  DAT_1160_1858 = puVar6;
  return;
}



/* ---- FUN_1018_66ff @ 1018:66ff  (286 octets) ---- */

void __cdecl16far FUN_1018_66ff(undefined4 param_1)

{
  undefined2 *puVar1;
  char cVar2;
  undefined2 uVar3;
  undefined2 unaff_CS;
  char *pcVar4;
  undefined2 unaff_SS;
  longdouble in_ST0;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined2 uStack_52a;
  undefined *puStack_528;
  undefined2 uStack_526;
  undefined2 uStack_524;
  undefined2 local_510;
  undefined2 local_50e;
  undefined local_50c;
  undefined4 local_508;
  undefined2 local_4da;
  undefined2 local_10;
  double local_e;
  undefined2 local_6;
  
  _local_6 = (undefined4 *)CONCAT22(unaff_CS,0x670a);
  FUN_1158_0444();
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  local_508 = *(undefined4 *)((int)param_1 + 0x17c);
  uStack_524 = 0x1158;
  uStack_526 = 0x65f1;
  uStack_52a = DAT_1160_1858;
  local_510 = 1;
  local_50e = 0;
  local_50c = 0;
  pcVar4 = (char *)s_iTime_1160_10dc + 4;
  DAT_1160_1858 = (undefined4 *)&uStack_52a;
  puStack_528 = &stack0xfffe;
  cVar2 = FUN_10e0_2895((int)local_508,(int)((ulong)local_508 >> 0x10),0,&local_510,unaff_SS);
  if (cVar2 == '\0') {
    pcVar4 = (char *)s_device_1160_1017 + 1;
    FUN_1018_0303((int)param_1,uVar3);
  }
  puVar5 = (undefined4 *)FUN_10d8_3b9b((int)local_508,(int)((ulong)local_508 >> 0x10),0x6597,pcVar4)
  ;
  puVar1 = (undefined2 *)((int)*puVar5 + 0x40);
  (*(code *)*puVar1)(0x10d8,puVar5);
  local_e = (double)in_ST0;
  puVar5 = (undefined4 *)FUN_10d8_3b9b((int)local_508,(int)((ulong)local_508 >> 0x10),0x65ac,0x10d8)
  ;
  puVar1 = (undefined2 *)((int)*puVar5 + 0x44);
  (*(code *)*puVar1)(0x10d8,puVar5);
  local_4da = FUN_1158_0416();
  puVar5 = (undefined4 *)FUN_10d8_3b9b((int)local_508,(int)((ulong)local_508 >> 0x10),0x65c6,0x1158)
  ;
  puVar6 = (undefined4 *)puVar5;
  puVar1 = (undefined2 *)((int)*puVar5 + 0x44);
  (*(code *)*puVar1)(0x10d8,puVar5);
  local_10 = FUN_1158_0416();
  _local_6 = (undefined4 *)
             FUN_10d8_3c43((int)local_508,(int)((ulong)local_508 >> 0x10),0x65d9,0x1158);
  if (_local_6 != (undefined4 *)0x0) {
    puVar1 = (undefined2 *)((int)*_local_6 + 0x40);
    (*(code *)*puVar1)(0x10d8,_local_6);
  }
  DAT_1160_1858 = puVar6;
  return;
}



/* ---- FUN_1018_7ddc @ 1018:7ddc  (290 octets) ---- */

void __cdecl16far FUN_1018_7ddc(undefined4 param_1)

{
  undefined2 *puVar1;
  char cVar2;
  int iVar3;
  undefined2 uVar4;
  undefined2 unaff_CS;
  undefined2 uVar5;
  char *pcVar6;
  undefined2 unaff_SS;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined2 uStack_4d8;
  undefined *puStack_4d6;
  undefined2 uStack_4d4;
  char *pcStack_4d2;
  int iStack_4d0;
  undefined2 uStack_4ce;
  undefined8 *puStack_4cc;
  undefined2 local_48c;
  undefined2 local_48a;
  undefined local_488;
  undefined4 local_484;
  int local_480;
  undefined8 local_434;
  undefined8 local_42c;
  undefined8 local_3d4;
  undefined8 local_3cc;
  undefined8 local_3b4;
  undefined8 local_3ac;
  undefined8 local_374;
  undefined8 local_36c;
  undefined4 local_a;
  undefined2 uStack_6;
  
  _local_a = CONCAT26(unaff_CS,CONCAT24(0x7de7,local_a));
  FUN_1158_0444();
  uVar5 = 0x1000;
  iVar3 = FUN_1000_0a69();
  local_480 = (int)((long)iVar3 * 4);
  if ((long)local_480 != (long)iVar3 * 4) {
    uVar5 = 0x1158;
    local_480 = FUN_1158_043e();
  }
  puStack_4cc = &local_434;
  uVar4 = (undefined2)((ulong)param_1 >> 0x10);
  iVar3 = (int)param_1;
  uStack_4d4 = 0x7e4e;
  pcStack_4d2 = (char *)uVar5;
  iStack_4d0 = iVar3;
  uStack_4ce = uVar4;
  FUN_1018_66ff();
  local_374 = local_3cc;
  local_36c = local_3d4;
  local_3b4 = local_42c;
  local_3ac = local_434;
  local_484 = *(undefined4 *)(iVar3 + 0x17c);
  pcStack_4d2 = (char *)s_device_1160_1017 + 1;
  uStack_4d4 = 0x7782;
  uStack_4d8 = DAT_1160_1858;
  local_48c = 1;
  local_48a = 0;
  local_488 = 0;
  pcVar6 = (char *)s_iTime_1160_10dc + 4;
  DAT_1160_1858 = (undefined4 *)&uStack_4d8;
  puStack_4d6 = &stack0xfffe;
  cVar2 = FUN_10e0_2895((int)local_484,(int)((ulong)local_484 >> 0x10),0,&local_48c,unaff_SS);
  if (cVar2 == '\0') {
    pcVar6 = (char *)s_device_1160_1017 + 1;
    FUN_1018_0303(iVar3,uVar4);
  }
  puVar7 = (undefined4 *)FUN_10d8_3b9b((int)local_484,(int)((ulong)local_484 >> 0x10),0x7776,pcVar6)
  ;
  puVar8 = (undefined4 *)puVar7;
  puVar1 = (undefined2 *)((int)*puVar7 + 0x40);
  (*(code *)*puVar1)(0x10d8,puVar7);
  DAT_1160_1858 = puVar8;
  return;
}



/* ---- FUN_1018_ab2b @ 1018:ab2b  (365 octets) ---- */

void __cdecl16far FUN_1018_ab2b(char *param_1,char *param_2)

{
  undefined2 *puVar1;
  char cVar2;
  char *pcVar3;
  undefined2 uVar4;
  undefined2 unaff_SS;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined2 uVar7;
  undefined2 uVar8;
  char *pcStack_41e;
  undefined *puStack_41c;
  int iStack_41a;
  char *pcStack_418;
  char *pcStack_416;
  undefined2 uStack_414;
  char *pcStack_412;
  undefined2 uStack_410;
  undefined *puStack_40e;
  undefined2 uStack_40c;
  undefined2 uStack_40a;
  int local_210;
  int local_20e;
  undefined local_20c;
  undefined4 local_208;
  undefined2 uStack_6;
  int iVar9;
  
  uStack_6 = 0xab36;
  FUN_1158_0444();
  uStack_40a = 0x1158;
  uStack_40c = 0xab19;
  pcStack_418 = (char *)&uStack_410;
  uStack_410 = DAT_1160_1858;
  pcStack_412 = (char *)0x1158;
  uStack_414 = 0xaa6a;
  DAT_1160_1858 = &pcStack_418;
  uVar4 = (undefined2)((ulong)param_1 >> 0x10);
  pcVar3 = (char *)param_1;
  iStack_41a = *(int *)(pcVar3 + 0x192);
  puStack_41c = *(undefined **)(pcVar3 + 400);
  pcStack_41e = param_2;
  pcStack_416 = &stack0xfffe;
  puStack_40e = &stack0xfffe;
  FUN_10b8_3a8a();
  iStack_41a = *(int *)(pcVar3 + 0x196);
  puStack_41c = *(undefined **)(pcVar3 + 0x194);
  pcStack_41e = param_2;
  FUN_10b8_4436();
  iStack_41a = *(int *)(pcVar3 + 0x1e2);
  puStack_41c = *(undefined **)(pcVar3 + 0x1e0);
  pcStack_41e = param_2;
  FUN_10b8_47d0();
  DAT_1160_1858 = (char **)pcStack_418;
  pcStack_412 = param_2;
  pcStack_418 = (char *)s_sLongDate_1160_10b8;
  iStack_41a = 0xabc4;
  pcStack_416 = pcVar3;
  uStack_414 = uVar4;
  FUN_1018_216e();
  local_208._2_2_ = DAT_1160_014e;
  if (0 < DAT_1160_014e) {
    iVar9 = 1;
    while( true ) {
      pcStack_418 = param_2;
      pcStack_41e = pcVar3;
      puStack_41c = (undefined *)uVar4;
      iStack_41a = iVar9;
      FUN_1018_7ddc();
      if (iVar9 == local_208._2_2_) break;
      iVar9 = iVar9 + 1;
    }
  }
  local_208 = *(undefined4 *)(pcVar3 + 0x180);
  pcStack_418 = (char *)s_device_1160_1017 + 1;
  iStack_41a = 0xaa87;
  pcStack_41e = (char *)DAT_1160_1858;
  uVar8 = *(undefined2 *)(pcVar3 + 0x182);
  uVar7 = *(undefined2 *)(pcVar3 + 0x180);
  iVar9 = DAT_1160_014c + 1;
  DAT_1160_1858 = &pcStack_41e;
  puStack_41c = &stack0xfffe;
  if (SCARRY2(DAT_1160_014c,1)) {
    DAT_1160_1858 = &pcStack_41e;
    puStack_41c = &stack0xfffe;
    iVar9 = FUN_1158_043e((char *)s_device_1160_1017 + 1,uVar7,uVar8);
  }
  FUN_10b8_1843(iVar9,uVar7,uVar8);
  local_210 = DAT_1160_014c + 1;
  if (SCARRY2(DAT_1160_014c,1)) {
    local_210 = FUN_1158_043e((char *)s_sLongDate_1160_10b8);
  }
  local_20e = local_210 >> 0xf;
  local_20c = 0;
  cVar2 = FUN_10e0_2895((int)local_208,(int)((ulong)local_208 >> 0x10),0,&local_210,unaff_SS);
  if (cVar2 == '\0') {
    FUN_1018_0303(pcVar3,uVar4);
  }
  FUN_10d8_533c((int)local_208,(int)((ulong)local_208 >> 0x10));
  uVar4 = 0;
  puVar5 = (undefined4 *)FUN_10d8_3b9b((int)local_208,(int)((ulong)local_208 >> 0x10),0xaa7c,0x10d8)
  ;
  puVar6 = (undefined4 *)puVar5;
  puVar1 = (undefined2 *)((int)*puVar5 + 0x54);
  (*(code *)*puVar1)(0x10d8,puVar5,uVar4);
  FUN_10d8_54a0((int)local_208,(int)((ulong)local_208 >> 0x10));
  DAT_1160_1858 = (char **)puVar6;
  return;
}




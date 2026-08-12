/* Simstrat (FR).EXE - segment Code19 - 33 fonctions
   Decompile par Ghidra 11.2.1 (x86 16 bits, chargeur NE). */

/* ---- FUN_1090_09b8 @ 1090:09b8  (43 octets) ---- */

void __stdcall16far FUN_1090_09b8(undefined4 param_1)

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



/* ---- FUN_1090_0d53 @ 1090:0d53  (31 octets) ---- */

void __stdcall16far FUN_1090_0d53(undefined4 param_1,undefined *param_2)

{
  FUN_1158_0444();
  FUN_1090_100a((int)param_1,(int)((ulong)param_1 >> 0x10));
  *param_2 = 2;
  return;
}



/* ---- FUN_1090_0d8d @ 1090:0d8d  (469 octets) ---- */

void __stdcall16far FUN_1090_0d8d(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined2 unaff_SS;
  undefined4 uVar5;
  undefined *puVar6;
  undefined2 uVar7;
  byte *pbVar8;
  undefined2 uVar9;
  undefined local_20e [4];
  undefined local_20a [252];
  undefined4 local_10e;
  int local_10a;
  undefined2 local_108;
  byte local_106 [256];
  undefined2 local_6;
  
  local_6 = 0xd98;
  FUN_1158_0444();
  local_108 = (undefined2)((ulong)param_2 >> 0x10);
  local_10a = (int)param_2;
  puVar6 = local_20a;
  uVar9 = unaff_SS;
  FUN_10d0_1a9f(local_10a,local_108);
  uVar5 = FUN_10d0_1a5f(local_10a,local_108);
  uVar5 = *(undefined4 *)((int)uVar5 + 0x1a);
  uVar5 = FUN_10d8_3b9b((int)uVar5,(int)((ulong)uVar5 >> 0x10),puVar6,uVar9);
  uVar9 = (undefined2)((ulong)uVar5 >> 0x10);
  local_6 = (undefined2)uVar5;
  cVar1 = FUN_1158_2255(0xa58,(char *)s_iTime_1160_10dc + 4,uVar5);
  if (cVar1 == '\0') {
    cVar1 = FUN_1158_2255(0x7c8,(char *)s_iTime_1160_10dc + 4,local_6,uVar9);
    if (cVar1 != '\0') {
      local_10e = FUN_1158_2273(0x7c8,(char *)s_iTime_1160_10dc + 4,local_6,uVar9);
      FUN_10e0_60f9(local_10e,0xd87,0x1158);
    }
  }
  else {
    local_10e = FUN_1158_2273(0xa58,(char *)s_iTime_1160_10dc + 4,local_6,uVar9);
    puVar6 = local_20e;
    uVar9 = unaff_SS;
    FUN_10d8_68cf(local_10e);
    FUN_1158_17e7(0xff,local_106,unaff_SS,puVar6,uVar9);
    uVar9 = *(undefined2 *)(local_10a + 0x36);
    uVar7 = *(undefined2 *)(local_10a + 0x34);
    uVar4 = (undefined2)((ulong)param_1 >> 0x10);
    uVar3 = (undefined2)param_1;
    uVar5 = FUN_1140_33d5(uVar3,uVar4);
    FUN_1128_2099(uVar5,uVar7,uVar9);
    pbVar8 = local_106;
    uVar9 = unaff_SS;
    uVar5 = FUN_1140_33d5(uVar3,uVar4);
    iVar2 = FUN_1128_2003(uVar5,pbVar8,uVar9);
    if (iVar2 < *(int *)(local_10a + 0x22)) {
      FUN_10e0_60f9(local_10e,0xd7c,0x1128);
    }
    else {
      FUN_1158_17e7(0xff,local_106,unaff_SS,0xd72,0x1128);
      while( true ) {
        pbVar8 = local_106;
        uVar9 = unaff_SS;
        uVar5 = FUN_1140_33d5(uVar3,uVar4);
        iVar2 = FUN_1128_2003(uVar5,pbVar8,uVar9);
        if (0xb < local_106[0] || *(int *)(local_10a + 0x22) <= iVar2) break;
        FUN_1158_1916(3,0xff,local_106,unaff_SS,0xd7a,0x1128);
      }
      if (7 < local_106[0]) {
        FUN_1158_1975(1,3,local_106,unaff_SS);
      }
      FUN_10e0_60f9(local_10e,local_106,unaff_SS);
    }
  }
  return;
}



/* ---- FUN_1090_0f62 @ 1090:0f62  (136 octets) ---- */

void __stdcall16far FUN_1090_0f62(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined4 uVar6;
  undefined2 uVar7;
  
  uVar7 = 0xf6d;
  FUN_1158_0444();
  uVar5 = (undefined2)((ulong)param_1 >> 0x10);
  uVar4 = (undefined2)param_1;
  iVar2 = FUN_1148_527d(uVar4,uVar5);
  iVar3 = iVar2 + -1;
  if (SBORROW2(iVar2,1)) {
    iVar3 = FUN_1158_043e(0x1148,uVar7);
  }
  if (-1 < iVar3) {
    iVar2 = 0;
    while( true ) {
      uVar6 = FUN_1148_5246(uVar4,uVar5,iVar2);
      cVar1 = FUN_1158_2255(0x22,0x10d0,uVar6);
      if (cVar1 != '\0') {
        uVar6 = FUN_1148_5246(uVar4,uVar5,iVar2);
        uVar6 = FUN_1158_2273(0x22,0x10d0,uVar6);
        FUN_1090_0d8d(uVar4,uVar5,uVar6);
      }
      if (iVar2 == iVar3) break;
      iVar2 = iVar2 + 1;
    }
  }
  return;
}



/* ---- FUN_1090_0fea @ 1090:0fea  (32 octets) ---- */

void __stdcall16far FUN_1090_0fea(undefined4 param_1,undefined2 param_2)

{
  undefined2 uVar1;
  
  FUN_1158_0444();
  uVar1 = (undefined2)((ulong)param_1 >> 0x10);
  *(undefined2 *)((int)param_1 + 0x438) = param_2;
  FUN_1090_11b6((int)param_1,uVar1);
  return;
}



/* ---- FUN_1090_100a @ 1090:100a  (59 octets) ---- */

void __stdcall16far FUN_1090_100a(undefined4 param_1)

{
  int iVar1;
  undefined2 uVar2;
  
  FUN_1158_0444();
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  FUN_10d8_31d2((int)*(undefined4 *)(iVar1 + 0x19c),
                (int)((ulong)*(undefined4 *)(iVar1 + 0x19c) >> 0x10));
  FUN_10d8_31d2((int)*(undefined4 *)(iVar1 + 0x1ac),
                (int)((ulong)*(undefined4 *)(iVar1 + 0x1ac) >> 0x10));
  FUN_10d8_31d2((int)*(undefined4 *)(iVar1 + 0x1b0),
                (int)((ulong)*(undefined4 *)(iVar1 + 0x1b0) >> 0x10));
  return;
}



/* ---- FUN_1090_1045 @ 1090:1045  (183 octets) ---- */

void __stdcall16far FUN_1090_1045(undefined4 param_1)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  
  FUN_1158_0444();
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  uVar4 = (undefined2)((ulong)*(undefined4 *)(iVar1 + 0x19c) >> 0x10);
  uVar2 = (undefined2)*(undefined4 *)(iVar1 + 0x19c);
  FUN_10d8_31d2(uVar2,uVar4);
  FUN_10e0_2ffb(uVar2,uVar4,1);
  FUN_10e0_2ed2(uVar2,uVar4,0);
  FUN_10d8_31bf(uVar2,uVar4);
  uVar4 = (undefined2)((ulong)*(undefined4 *)(iVar1 + 0x1ac) >> 0x10);
  uVar2 = (undefined2)*(undefined4 *)(iVar1 + 0x1ac);
  FUN_10d8_31d2(uVar2,uVar4);
  FUN_10e0_2ffb(uVar2,uVar4,1);
  FUN_10e0_2ed2(uVar2,uVar4,0);
  FUN_10d8_31bf(uVar2,uVar4);
  uVar4 = (undefined2)((ulong)*(undefined4 *)(iVar1 + 0x1b0) >> 0x10);
  uVar2 = (undefined2)*(undefined4 *)(iVar1 + 0x1b0);
  FUN_10d8_31d2(uVar2,uVar4);
  FUN_10e0_2ffb(uVar2,uVar4,1);
  FUN_10e0_2ed2(uVar2,uVar4,0);
  FUN_10d8_31bf(uVar2,uVar4);
  return;
}



/* ---- FUN_1090_110e @ 1090:110e  (148 octets) ---- */

void __stdcall16far FUN_1090_110e(undefined4 param_1)

{
  undefined2 *puVar1;
  int iVar2;
  byte extraout_AH;
  int iVar3;
  byte extraout_AH_00;
  int iVar4;
  undefined2 uVar5;
  undefined4 *puVar6;
  
  FUN_1158_0444();
  uVar5 = (undefined2)((ulong)param_1 >> 0x10);
  iVar4 = (int)param_1;
  puVar6 = (undefined4 *)
           FUN_10d8_3b9b((int)*(undefined4 *)(iVar4 + 0x19c),
                         (int)((ulong)*(undefined4 *)(iVar4 + 0x19c) >> 0x10),0x10fc,0x1158);
  puVar1 = (undefined2 *)((int)*puVar6 + 0x44);
  (*(code *)*puVar1)(0x10d8,puVar6);
  iVar2 = FUN_1158_0416();
  FUN_1138_177b((int)*(undefined4 *)(iVar4 + 0x420),
                (int)((ulong)*(undefined4 *)(iVar4 + 0x420) >> 0x10),
                *(undefined2 *)((int)*(undefined4 *)(iVar4 + 0x3dc) + 0x1e));
  iVar3 = (uint)extraout_AH * 0x100;
  if (iVar2 == 1) {
    iVar3 = iVar3 + 1;
  }
  FUN_1138_1c77((int)*(undefined4 *)(iVar4 + 0x420),
                (int)((ulong)*(undefined4 *)(iVar4 + 0x420) >> 0x10),iVar3);
  iVar3 = (uint)extraout_AH_00 * 0x100;
  if (iVar2 == 2) {
    iVar3 = iVar3 + 1;
  }
  FUN_1138_1c77((int)*(undefined4 *)(iVar4 + 0x3dc),
                (int)((ulong)*(undefined4 *)(iVar4 + 0x3dc) >> 0x10),iVar3);
  return;
}



/* ---- FUN_1090_11b6 @ 1090:11b6  (480 octets) ---- */

void __stdcall16far FUN_1090_11b6(undefined *param_1)

{
  char cVar1;
  undefined *puVar2;
  undefined2 uVar3;
  undefined2 unaff_SS;
  undefined *puStack_20c;
  int local_118;
  int local_116;
  undefined local_114;
  int local_110;
  int local_10e;
  undefined local_10c;
  undefined4 local_108;
  undefined local_104 [254];
  undefined2 uStack_6;
  
  uStack_6 = 0x11c1;
  FUN_1158_0444();
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  puVar2 = (undefined *)param_1;
  puStack_20c = *(undefined **)(puVar2 + 0x438);
  FUN_1150_08a9();
  puStack_20c = (undefined *)*(undefined **)(puVar2 + 0x194);
  FUN_1138_1d8c();
  puStack_20c = local_104;
  FUN_1158_17e7(0xff);
  puStack_20c = local_104;
  FUN_1158_1878();
  cVar1 = FUN_1158_0416();
  if (cVar1 != '\0') {
    puStack_20c = (undefined *)0x1;
    FUN_1158_1975();
    puStack_20c = *(undefined **)(puVar2 + 0x438);
    FUN_1150_08a9();
    puStack_20c = local_104;
    FUN_1158_1916(cVar1,0xff);
  }
  puStack_20c = puVar2;
  FUN_1138_1d8c();
  puStack_20c = (undefined *)DAT_1160_1858;
  local_108 = *(undefined4 *)(puVar2 + 0x19c);
  local_110 = *(int *)(puVar2 + 0x438);
  local_10e = local_110 >> 0xf;
  local_10c = 0;
  DAT_1160_1858 = &puStack_20c;
  cVar1 = FUN_10e0_2895((int)local_108,(int)((ulong)local_108 >> 0x10),0,&local_110,unaff_SS);
  if (cVar1 == '\0') {
    FUN_1090_09b8(puVar2,uVar3);
  }
  FUN_1090_110e(puVar2,uVar3);
  local_108 = *(undefined4 *)(puVar2 + 0x1ac);
  local_118 = *(int *)(puVar2 + 0x438);
  local_116 = local_118 >> 0xf;
  local_114 = 0;
  local_110 = 1;
  local_10e = 0;
  local_10c = 0;
  cVar1 = FUN_10e0_2895((int)local_108,(int)((ulong)local_108 >> 0x10),1,&local_118,unaff_SS);
  if (cVar1 == '\0') {
    FUN_1090_09b8(puVar2,uVar3);
  }
  local_108 = *(undefined4 *)(puVar2 + 0x1b0);
  local_118 = *(int *)(puVar2 + 0x438);
  local_116 = local_118 >> 0xf;
  local_114 = 0;
  local_110 = 2;
  local_10e = 0;
  local_10c = 0;
  cVar1 = FUN_10e0_2895((int)local_108,(int)((ulong)local_108 >> 0x10),1,&local_118,unaff_SS);
  if (cVar1 == '\0') {
    FUN_1090_09b8(puVar2,uVar3);
  }
  DAT_1160_1858 = (undefined **)puStack_20c;
  puStack_20c = (undefined *)0x13ac;
  FUN_1090_0f62();
  return;
}



/* ---- FUN_1090_13b6 @ 1090:13b6  (309 octets) ---- */

void __stdcall16far FUN_1090_13b6(char param_1,undefined2 param_2)

{
  uint uVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 unaff_CS;
  undefined2 uStack_1e;
  undefined *puStack_1c;
  undefined2 uStack_1a;
  undefined2 uStack_18;
  undefined2 uStack_16;
  char *pcStack_14;
  undefined2 uStack_12;
  undefined2 uStack_10;
  undefined2 uStack_e;
  undefined4 local_c;
  char local_7;
  int local_6;
  
  _local_6 = CONCAT22(unaff_CS,0x13c1);
  FUN_1158_0444();
  uStack_e = (undefined2)((ulong)DAT_1160_2c2a >> 0x10);
  uStack_10 = (undefined2)DAT_1160_2c2a;
  uStack_12 = 0x1158;
  pcStack_14 = (char *)0x13cf;
  uVar1 = FUN_1140_7303();
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
  if (local_7 == '\0') {
    return;
  }
  uStack_e = DAT_1160_2c2a._2_2_;
  uStack_10 = (undefined2)DAT_1160_2c2a;
  uStack_12 = CONCAT11((char)(uVar1 >> 8),1);
  pcStack_14 = (char *)s_sThousand_1160_1088 + 8;
  uStack_16 = 0x22;
  uStack_18 = 0x1140;
  uStack_1a = 0x1412;
  local_c = FUN_1140_2553();
  uVar3 = (undefined2)((ulong)local_c >> 0x10);
  local_6 = (int)local_c;
  uStack_18 = 0x1140;
  uStack_1a = 0x13b0;
  uStack_1e = DAT_1160_1858;
  DAT_1160_1858 = &uStack_1e;
  puStack_1c = &stack0xfffe;
  FUN_1090_1045(local_c);
  FUN_1090_0fea(local_c,param_2);
  FUN_1138_1ed5(local_c,0xffff,0xff);
  FUN_1140_36b2(local_c,0,0);
  FUN_1140_3a14(local_c,2);
  FUN_1140_34e5(local_c,1);
  uVar2 = FUN_1138_62b9(local_c);
  SHOWWINDOW(0x1138,4);
  FUN_1140_7303((int)DAT_1160_2c2a,(int)((ulong)DAT_1160_2c2a >> 0x10));
  if (param_1 == '\0') {
    FUN_1010_311a((int)DAT_1160_2004,(int)((ulong)DAT_1160_2004 >> 0x10),
                  *(undefined2 *)(local_6 + 0x17c),*(undefined2 *)(local_6 + 0x17e),local_6,uVar3);
  }
  else {
    FUN_1090_15f6(local_6,uVar3);
  }
  FUN_1140_7303((int)DAT_1160_2c2a,(int)((ulong)DAT_1160_2c2a >> 0x10));
  DAT_1160_1858 = (undefined2 *)uVar2;
  uStack_1a = 0x1140;
  puStack_1c = (undefined *)0x14e7;
  uStack_1e = uVar3;
  FUN_1140_5f1d(local_6);
  return;
}



/* ---- FUN_1090_14f1 @ 1090:14f1  (157 octets) ---- */

void __cdecl16far FUN_1090_14f1(undefined2 param_1)

{
  ulong uVar1;
  undefined2 uVar2;
  undefined extraout_AH;
  undefined2 unaff_CS;
  undefined2 uStack_1c;
  undefined *puStack_1a;
  undefined2 *puStack_18;
  undefined2 uStack_16;
  undefined2 uStack_14;
  char *pcStack_12;
  undefined2 uStack_10;
  undefined2 uStack_e;
  undefined2 uStack_c;
  undefined4 local_a;
  undefined2 local_6;
  
  _local_6 = CONCAT22(unaff_CS,0x14fc);
  FUN_1158_0444();
  uStack_c = (undefined2)((ulong)DAT_1160_2c2a >> 0x10);
  uStack_e = (undefined2)DAT_1160_2c2a;
  uStack_10 = 0x1158;
  pcStack_12 = (char *)0x150a;
  FUN_1140_7303();
  uStack_c = DAT_1160_2c2a._2_2_;
  uStack_e = (undefined2)DAT_1160_2c2a;
  uStack_10 = CONCAT11(extraout_AH,1);
  pcStack_12 = (char *)s_sThousand_1160_1088 + 8;
  uStack_14 = 0x22;
  uStack_16 = 0x1140;
  puStack_18 = (undefined2 *)&DAT_1160_1522;
  local_a = FUN_1140_2553();
  uVar1 = (ulong)local_a >> 0x10;
  local_6 = (undefined2)local_a;
  uStack_16 = 0x1140;
  puStack_18 = (undefined2 *)0x14eb;
  uStack_1c = DAT_1160_1858;
  DAT_1160_1858 = &uStack_1c;
  puStack_1a = &stack0xfffe;
  FUN_1090_1045(local_a);
  FUN_1090_0fea(local_a,param_1);
  FUN_1138_1ed5(local_a,0xfff0,0xffff);
  FUN_1140_3a14(local_a,2);
  uVar2 = (undefined2)local_a;
  FUN_1140_5d45(local_a);
  DAT_1160_1858 = (undefined2 *)uVar2;
  puStack_1a = (undefined *)0x1140;
  uStack_1c = 0x158e;
  FUN_1140_5f1d(local_6,(int)uVar1);
  return;
}



/* ---- FUN_1090_159a @ 1090:159a  (69 octets) ---- */

undefined2 __stdcall16far FUN_1090_159a(void)

{
  undefined2 uVar1;
  undefined2 unaff_SS;
  undefined4 uVar2;
  undefined local_24 [30];
  undefined2 uStack_6;
  
  uStack_6 = 0x15a5;
  FUN_1158_0444();
  uVar2 = FUN_10f0_2a04((int)DAT_1160_2c54,(int)((ulong)DAT_1160_2c54 >> 0x10));
  uVar1 = FUN_1128_21d2(uVar2);
  GETTEXTMETRICS(0x1128,local_24,unaff_SS);
  uVar1 = FUN_1158_0416(uVar1);
  return uVar1;
}



/* ---- FUN_1090_15f6 @ 1090:15f6  (1112 octets) ---- */

void __cdecl16far FUN_1090_15f6(undefined4 param_1)

{
  undefined2 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined2 uVar9;
  undefined2 uVar10;
  undefined2 unaff_SS;
  undefined4 uVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined2 uVar14;
  undefined2 uStack_418;
  char *pcStack_416;
  undefined *puStack_414;
  undefined local_410 [254];
  undefined local_312 [2];
  undefined local_310 [254];
  int local_212;
  undefined4 local_210;
  int local_208;
  undefined local_206 [256];
  undefined local_106 [256];
  int local_6;
  
  local_6 = 0x1601;
  FUN_1158_0444();
  uVar9 = (undefined2)((ulong)param_1 >> 0x10);
  iVar6 = (int)param_1;
  uStack_418 = 0x1158;
  pcStack_416 = (char *)iVar6;
  puStack_414 = (undefined *)uVar9;
  FUN_1090_1e21();
  puStack_414 = local_106;
  pcStack_416 = (char *)s_sThousand_1160_1088 + 8;
  uStack_418 = 0x161c;
  FUN_10f0_204e();
  puStack_414 = local_106;
  pcStack_416 = (char *)0x10f0;
  uStack_418 = 0x1627;
  FUN_1158_09f5();
  puStack_414 = (undefined *)0x162c;
  FUN_1158_0408();
  puStack_414 = (undefined *)0x15f0;
  uStack_418 = DAT_1160_1858;
  DAT_1160_1858 = (undefined4 *)&uStack_418;
  pcStack_416 = &stack0xfffe;
  local_210 = FUN_10f0_2a04((int)DAT_1160_2c54,(int)((ulong)DAT_1160_2c54 >> 0x10));
  uVar11 = *(undefined4 *)((int)DAT_1160_18f6 + 0x2c8);
  uVar10 = (undefined2)((ulong)uVar11 >> 0x10);
  iVar7 = (int)uVar11;
  FUN_1128_2099(local_210,*(undefined2 *)(iVar7 + 0x34),*(undefined2 *)(iVar7 + 0x36));
  uVar10 = 10;
  uVar11 = FUN_10f0_2a04((int)DAT_1160_2c54,(int)((ulong)DAT_1160_2c54 >> 0x10));
  uVar11 = *(undefined4 *)((int)uVar11 + 7);
  FUN_1128_11f5((int)uVar11,(int)((ulong)uVar11 >> 0x10),uVar10);
  uVar14 = 2;
  uVar11 = FUN_10f0_2a04((int)DAT_1160_2c54,(int)((ulong)DAT_1160_2c54 >> 0x10));
  uVar11 = *(undefined4 *)((int)uVar11 + 7);
  uVar10 = 0x1128;
  FUN_1128_1278((int)uVar11,(int)((ulong)uVar11 >> 0x10),uVar14);
  iVar7 = 1;
  while( true ) {
    puVar13 = local_106;
    uVar14 = unaff_SS;
    FUN_1158_0db5(0,0x15df,uVar10);
    FUN_1158_0c78(puVar13,uVar14);
    uVar10 = 0x1158;
    FUN_1158_0408();
    if (iVar7 == 3) break;
    iVar7 = iVar7 + 1;
  }
  local_210 = *(undefined4 *)(iVar6 + 0x434);
  puVar2 = (undefined4 *)*(undefined4 *)((int)local_210 + 0xec);
  puVar8 = (undefined4 *)puVar2;
  puVar1 = (undefined2 *)((int)*puVar2 + 0x10);
  iVar7 = (*(code *)*puVar1)(0x1158,puVar8,(int)((ulong)puVar2 >> 0x10));
  local_212 = iVar7 + -1;
  if (SBORROW2(iVar7,1)) {
    local_212 = FUN_1158_043e(0x1158);
  }
  if (-1 < local_212) {
    iVar7 = 0;
    while( true ) {
      puVar13 = local_312;
      puVar2 = (undefined4 *)*(undefined4 *)((int)local_210 + 0xec);
      puVar1 = (undefined2 *)((int)*puVar2 + 0xc);
      uVar10 = unaff_SS;
      (*(code *)*puVar1)(0x1158,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),iVar7,puVar13);
      FUN_1158_17e7(0xff,local_206,unaff_SS,puVar13,uVar10);
      do {
        local_6 = FUN_1158_1878(local_206,unaff_SS,0x15e0,0x1158);
        if (0 < local_6) {
          FUN_1158_1975(1,local_6,local_206,unaff_SS);
          FUN_1158_1916(local_6,0xff,local_206,unaff_SS,0x15e2,0x1158);
        }
      } while (local_6 != 0);
      puVar13 = local_312;
      uVar10 = unaff_SS;
      FUN_1158_17cd(0x15e4,0x1158);
      FUN_1158_184c(local_206,unaff_SS);
      FUN_1158_17e7(0xff,local_206,unaff_SS,puVar13,uVar10);
      puVar13 = local_106;
      uVar10 = unaff_SS;
      FUN_1158_0db5(0,local_206,unaff_SS);
      FUN_1158_0c78(puVar13,uVar10);
      FUN_1158_0408();
      if (iVar7 == local_212) break;
      iVar7 = iVar7 + 1;
    }
  }
  local_210._2_2_ = (undefined2)((ulong)DAT_1160_2c54 >> 0x10);
  local_210._0_2_ = (undefined2)DAT_1160_2c54;
  uVar10 = 6;
  uVar11 = FUN_10f0_2a04((undefined2)local_210,local_210._2_2_);
  uVar11 = *(undefined4 *)((int)uVar11 + 7);
  FUN_1128_11f5((int)uVar11,(int)((ulong)uVar11 >> 0x10),uVar10);
  uVar10 = 0;
  uVar11 = FUN_10f0_2a04((undefined2)local_210,local_210._2_2_);
  uVar11 = *(undefined4 *)((int)uVar11 + 7);
  FUN_1128_1278((int)uVar11,(int)((ulong)uVar11 >> 0x10),uVar10);
  uVar3 = FUN_1090_159a(&stack0xfffe);
  if (0xfffd < uVar3) {
    FUN_1158_043e((char *)s_sThousand_1160_1088 + 8);
  }
  local_208 = FUN_1158_0416();
  puVar13 = local_410;
  uVar14 = unaff_SS;
  FUN_1158_17cd(0x15e4,0x1158);
  puVar12 = local_310;
  uVar10 = unaff_SS;
  FUN_1138_1d53((int)*(undefined4 *)(iVar6 + 0x3a8),
                (int)((ulong)*(undefined4 *)(iVar6 + 0x3a8) >> 0x10));
  FUN_1158_184c(puVar12,uVar10);
  FUN_1158_17e7(0xff,local_206,unaff_SS,puVar13,uVar14);
  uVar10 = 0;
  iVar7 = (int)((long)local_208 * 5);
  if ((long)iVar7 != (long)local_208 * 5) {
    iVar7 = FUN_1158_043e(0x1158,0);
  }
  iVar4 = FUN_10f0_2a72((undefined2)local_210,local_210._2_2_);
  iVar5 = iVar4 - iVar7;
  if (SBORROW2(iVar4,iVar7)) {
    iVar5 = FUN_1158_043e(0x10f0,uVar10);
  }
  puVar13 = local_206;
  uVar14 = unaff_SS;
  uVar11 = FUN_10f0_2a04((undefined2)local_210,local_210._2_2_);
  FUN_1128_1f09(uVar11,puVar13,uVar14,iVar5,uVar10);
  puVar13 = local_410;
  uVar14 = unaff_SS;
  FUN_1158_17cd(0x15e4,0x1128);
  puVar12 = local_310;
  uVar10 = unaff_SS;
  FUN_1138_1d53((int)*(undefined4 *)(iVar6 + 0x3ac),
                (int)((ulong)*(undefined4 *)(iVar6 + 0x3ac) >> 0x10));
  FUN_1158_184c(puVar12,uVar10);
  FUN_1158_17e7(0xff,local_206,unaff_SS,puVar13,uVar14);
  uVar10 = 0;
  iVar7 = (int)((long)local_208 * 4);
  if ((long)iVar7 != (long)local_208 * 4) {
    iVar7 = FUN_1158_043e(0x1158,0);
  }
  iVar4 = FUN_10f0_2a72((undefined2)local_210,local_210._2_2_);
  iVar5 = iVar4 - iVar7;
  if (SBORROW2(iVar4,iVar7)) {
    iVar5 = FUN_1158_043e(0x10f0,uVar10);
  }
  puVar13 = local_206;
  uVar14 = unaff_SS;
  uVar11 = FUN_10f0_2a04((undefined2)local_210,local_210._2_2_);
  FUN_1128_1f09(uVar11,puVar13,uVar14,iVar5,uVar10);
  puVar13 = local_410;
  uVar14 = unaff_SS;
  FUN_1158_17cd(0x15e4,0x1128);
  puVar12 = local_310;
  uVar10 = unaff_SS;
  FUN_1138_1d53((int)*(undefined4 *)(iVar6 + 0x3b0),
                (int)((ulong)*(undefined4 *)(iVar6 + 0x3b0) >> 0x10));
  FUN_1158_184c(puVar12,uVar10);
  FUN_1158_17e7(0xff,local_206,unaff_SS,puVar13,uVar14);
  uVar10 = 0;
  iVar7 = (int)((long)local_208 * 3);
  if ((long)iVar7 != (long)local_208 * 3) {
    iVar7 = FUN_1158_043e(0x1158,0);
  }
  iVar4 = FUN_10f0_2a72((undefined2)local_210,local_210._2_2_);
  iVar5 = iVar4 - iVar7;
  if (SBORROW2(iVar4,iVar7)) {
    iVar5 = FUN_1158_043e(0x10f0,uVar10);
  }
  puVar13 = local_206;
  uVar14 = unaff_SS;
  uVar11 = FUN_10f0_2a04((undefined2)local_210,local_210._2_2_);
  FUN_1128_1f09(uVar11,puVar13,uVar14,iVar5,uVar10);
  puVar13 = local_410;
  uVar14 = unaff_SS;
  FUN_1158_17cd(0x15e4,0x1128);
  puVar12 = local_310;
  uVar10 = unaff_SS;
  FUN_1138_1d53((int)*(undefined4 *)(iVar6 + 0x3b4),
                (int)((ulong)*(undefined4 *)(iVar6 + 0x3b4) >> 0x10));
  FUN_1158_184c(puVar12,uVar10);
  FUN_1158_17e7(0xff,local_206,unaff_SS,puVar13,uVar14);
  uVar10 = 0;
  iVar7 = (int)((long)local_208 * 2);
  if ((long)iVar7 != (long)local_208 * 2) {
    iVar7 = FUN_1158_043e(0x1158,0);
  }
  iVar4 = FUN_10f0_2a72((undefined2)local_210,local_210._2_2_);
  iVar5 = iVar4 - iVar7;
  if (SBORROW2(iVar4,iVar7)) {
    iVar5 = FUN_1158_043e(0x10f0,uVar10);
  }
  puVar13 = local_206;
  uVar14 = unaff_SS;
  uVar11 = FUN_10f0_2a04((undefined2)local_210,local_210._2_2_);
  FUN_1128_1f09(uVar11,puVar13,uVar14,iVar5,uVar10);
  DAT_1160_1858 = puVar8;
  pcStack_416 = (char *)0x1128;
  uStack_418 = 0x1a4e;
  FUN_1158_0a4f(local_106,unaff_SS);
  FUN_1158_0408();
  FUN_1120_49e3((int)*(undefined4 *)(iVar6 + 0x434),
                (int)((ulong)*(undefined4 *)(iVar6 + 0x434) >> 0x10));
  return;
}



/* ---- FUN_1090_1a5e @ 1090:1a5e  (955 octets) ---- */

void __stdcall16far
FUN_1090_1a5e(int param_1,undefined param_2,int param_3,undefined4 param_4,undefined2 param_5,
             byte *param_6)

{
  char cVar1;
  int iVar2;
  byte *pbVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined2 unaff_SS;
  undefined4 uVar6;
  undefined *puVar7;
  undefined2 uVar8;
  undefined local_208 [4];
  undefined local_204 [252];
  undefined4 local_108;
  uint local_104;
  byte local_102;
  char local_101;
  undefined2 uStack_6;
  
  uStack_6 = 0x1a69;
  FUN_1158_0444();
  uVar4 = (undefined2)((ulong)param_4 >> 0x10);
  iVar2 = (int)param_4;
  if (*(char *)(iVar2 + 0x29) != '\0') {
    local_102 = 0;
    pbVar3 = (byte *)param_6;
    uVar5 = (undefined2)((ulong)param_6 >> 0x10);
    if (*(int *)(param_1 + 10) == 0) {
      if (*param_6 != 0) {
        puVar7 = local_204;
        uVar8 = unaff_SS;
        FUN_1158_17cd(pbVar3,uVar5);
        FUN_1158_184c(0x1a52,0x1158);
        FUN_1158_17e7(param_5,pbVar3,uVar5,puVar7,uVar8);
      }
    }
    else if (*(int *)(param_1 + 10) == 1) {
      local_104 = (uint)*param_6;
      while ((int)local_104 < param_3) {
        local_104 = local_104 + 1;
        puVar7 = local_204;
        uVar8 = unaff_SS;
        FUN_1158_17cd(pbVar3,uVar5);
        FUN_1158_184c(0x1a54,0x1158);
        FUN_1158_17e7(param_5,pbVar3,uVar5,puVar7,uVar8);
      }
    }
    cVar1 = FUN_1158_2255(0x10c,0x1120,iVar2,uVar4);
    if (cVar1 != '\0') {
      local_108 = FUN_1158_2273(0x10c,0x1120,iVar2,uVar4);
      puVar7 = local_208;
      uVar8 = unaff_SS;
      FUN_1138_1d53(local_108);
      FUN_1158_17e7(0xff,&local_102,unaff_SS,puVar7,uVar8);
    }
    cVar1 = FUN_1158_2255(0xdad,0x1118,iVar2,uVar4);
    if (cVar1 != '\0') {
      local_108 = FUN_1158_2273(0xdad,0x1118,iVar2,uVar4);
      puVar7 = local_208;
      uVar8 = unaff_SS;
      FUN_1138_1d53(local_108);
      FUN_1158_17e7(0xff,&local_102,unaff_SS,puVar7,uVar8);
    }
    cVar1 = FUN_1158_2255(0x617,0x1120,iVar2,uVar4);
    if (cVar1 != '\0') {
      local_108 = FUN_1158_2273(0x617,0x1120,iVar2,uVar4);
      puVar7 = local_208;
      uVar8 = unaff_SS;
      FUN_1138_1d53(local_108);
      FUN_1158_17e7(0xff,&local_102,unaff_SS,puVar7,uVar8);
    }
    cVar1 = FUN_1158_2255(0x2c19,0x1120,iVar2,uVar4);
    if (cVar1 != '\0') {
      local_108 = FUN_1158_2273(0x2c19,0x1120,iVar2,uVar4);
      puVar7 = local_208;
      uVar8 = unaff_SS;
      FUN_1138_1d53(local_108);
      FUN_1158_17e7(0xff,&local_102,unaff_SS,puVar7,uVar8);
    }
    cVar1 = FUN_1158_2255(0x22,0x10d0,iVar2,uVar4);
    if (cVar1 != '\0') {
      local_108 = FUN_1158_2273(0x22,0x10d0,iVar2,uVar4);
      puVar7 = local_208;
      uVar8 = unaff_SS;
      FUN_1100_1524(local_108);
      FUN_1158_17e7(0xff,&local_102,unaff_SS,puVar7,uVar8);
    }
    cVar1 = FUN_1158_2255(0xb90,0x1120,iVar2,uVar4);
    if (cVar1 != '\0') {
      local_108 = FUN_1158_2273(0xb90,0x1120,iVar2,uVar4);
      puVar7 = local_208;
      uVar8 = unaff_SS;
      FUN_1138_1d53(local_108);
      FUN_1158_17e7(0xff,&local_102,unaff_SS,puVar7,uVar8);
    }
    cVar1 = FUN_1158_2255(0x626,0x10d0,iVar2,uVar4);
    if (cVar1 != '\0') {
      uVar6 = FUN_1158_2273(0x626,0x10d0,iVar2,uVar4);
      cVar1 = FUN_1120_6dd2(uVar6);
      if (cVar1 == '\0') {
        FUN_1158_17e7(0xff,&local_102,unaff_SS,0x1a5a,0x1120);
      }
      else {
        FUN_1158_17e7(0xff,&local_102,unaff_SS,0x1a56,0x1120);
      }
    }
    cVar1 = FUN_1158_1ef9(param_2);
    if (cVar1 == 'G') {
      while (local_101 == ' ' && local_102 != 0) {
        FUN_1158_1975(1,1,&local_102,unaff_SS);
      }
    }
    else if (cVar1 == 'D') {
      local_104 = (uint)local_102;
      while ((int)local_104 < 0x12) {
        local_104 = local_104 + 1;
        puVar7 = local_204;
        uVar4 = unaff_SS;
        FUN_1158_17cd(0x1a54,0x1158);
        FUN_1158_184c(&local_102,unaff_SS);
        FUN_1158_17e7(0xff,&local_102,unaff_SS,puVar7,uVar4);
      }
    }
    puVar7 = local_204;
    uVar4 = unaff_SS;
    FUN_1158_17cd(pbVar3,uVar5);
    FUN_1158_184c(&local_102,unaff_SS);
    FUN_1158_17e7(param_5,pbVar3,uVar5,puVar7,uVar4);
  }
  return;
}



/* ---- FUN_1090_1e21 @ 1090:1e21  (6179 octets) ---- */

void __stdcall16far FUN_1090_1e21(undefined4 param_1,int param_2)

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
  undefined local_308 [254];
  undefined local_20a [2];
  undefined local_208 [254];
  int local_10a;
  int local_108;
  undefined2 local_106;
  int local_104;
  char local_102 [252];
  undefined2 uStack_6;
  
  uStack_6 = 0x1e2c;
  FUN_1158_0444();
  uVar4 = (undefined2)((ulong)param_1 >> 0x10);
  iVar3 = (int)param_1;
  local_106 = (undefined2)((ulong)*(undefined4 *)(iVar3 + 0x434) >> 0x10);
  local_108 = (int)*(undefined4 *)(iVar3 + 0x434);
  FUN_1120_49e3(local_108,local_106);
  local_102[0] = '\0';
  FUN_1090_1a5e(&stack0xfffe,0x67,0,*(undefined2 *)(iVar3 + 0x184),*(undefined2 *)(iVar3 + 0x186),
                0xff,local_102,unaff_SS);
  puVar7 = local_208;
  uVar8 = unaff_SS;
  FUN_1158_17cd(local_102,unaff_SS);
  FUN_1158_184c(0x1e19,0x1158);
  puVar5 = local_308;
  uVar6 = unaff_SS;
  FUN_1138_1d53((int)*(undefined4 *)(iVar3 + 0x188),
                (int)((ulong)*(undefined4 *)(iVar3 + 0x188) >> 0x10));
  FUN_1158_184c(puVar5,uVar6);
  FUN_1158_17e7(0xff,local_102,unaff_SS,puVar7,uVar8);
  puVar2 = (undefined4 *)*(undefined4 *)(local_108 + 0xec);
  puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
  (*(code *)*puVar1)(0x1158,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),local_102);
  if (param_2 == 1) {
    puVar2 = (undefined4 *)*(undefined4 *)(local_108 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)(0x1158,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),0x1e1b,0x1158);
  }
  local_102[0] = '\0';
  FUN_1090_1a5e(&stack0xfffe,0x67,10,*(undefined2 *)(iVar3 + 0x18c),*(undefined2 *)(iVar3 + 0x18e),
                0xff,local_102,unaff_SS);
  FUN_1090_1a5e(&stack0xfffe,0x67,0x23,*(undefined2 *)(iVar3 + 0x198),*(undefined2 *)(iVar3 + 0x19a)
                ,0xff,local_102,unaff_SS);
  FUN_1090_1a5e(&stack0xfffe,0x67,0x46,*(undefined2 *)(iVar3 + 400),*(undefined2 *)(iVar3 + 0x192),
                0xff,local_102,unaff_SS);
  puVar7 = local_208;
  uVar8 = unaff_SS;
  FUN_1158_17cd(local_102,unaff_SS);
  FUN_1158_184c(0x1e1c,0x1158);
  puVar5 = local_308;
  uVar6 = unaff_SS;
  FUN_1138_1d53((int)*(undefined4 *)(iVar3 + 0x194),
                (int)((ulong)*(undefined4 *)(iVar3 + 0x194) >> 0x10));
  FUN_1158_184c(puVar5,uVar6);
  FUN_1158_17e7(0xff,local_102,unaff_SS,puVar7,uVar8);
  puVar2 = (undefined4 *)*(undefined4 *)(local_108 + 0xec);
  puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
  (*(code *)*puVar1)(0x1158,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),local_102);
  if (param_2 == 1) {
    puVar2 = (undefined4 *)*(undefined4 *)(local_108 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)(0x1158,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),0x1e1b,0x1158);
  }
  local_102[0] = '\0';
  FUN_1090_1a5e(&stack0xfffe,0x67,DAT_1160_047e,*(undefined2 *)(iVar3 + 0x1bc),
                *(undefined2 *)(iVar3 + 0x1be),0xff,local_102,unaff_SS);
  puVar2 = (undefined4 *)*(undefined4 *)(local_108 + 0xec);
  puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
  (*(code *)*puVar1)((char *)s_sThousand_1160_1088 + 8,(undefined4 *)puVar2,
                     (int)((ulong)puVar2 >> 0x10),local_102);
  local_102[0] = '\0';
  FUN_1090_1a5e(&stack0xfffe,0x67,DAT_1160_0480,*(undefined2 *)(iVar3 + 0x1c0),
                *(undefined2 *)(iVar3 + 0x1c2),0xff,local_102,unaff_SS);
  FUN_1090_1a5e(&stack0xfffe,100,DAT_1160_0484,*(undefined2 *)(iVar3 + 0x1dc),
                *(undefined2 *)(iVar3 + 0x1de),0xff,local_102,unaff_SS);
  if (local_102[0] != '\0') {
    puVar2 = (undefined4 *)*(undefined4 *)(local_108 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)((char *)s_sThousand_1160_1088 + 8,(undefined4 *)puVar2,
                       (int)((ulong)puVar2 >> 0x10),local_102);
  }
  local_102[0] = '\0';
  FUN_1090_1a5e(&stack0xfffe,0x67,DAT_1160_0480,*(undefined2 *)(iVar3 + 0x1d4),
                *(undefined2 *)(iVar3 + 0x1d6),0xff,local_102,unaff_SS);
  FUN_1090_1a5e(&stack0xfffe,100,DAT_1160_0484,*(undefined2 *)(iVar3 + 0x1f0),
                *(undefined2 *)(iVar3 + 0x1f2),0xff,local_102,unaff_SS);
  if (local_102[0] != '\0') {
    puVar2 = (undefined4 *)*(undefined4 *)(local_108 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)((char *)s_sThousand_1160_1088 + 8,(undefined4 *)puVar2,
                       (int)((ulong)puVar2 >> 0x10),local_102);
  }
  local_102[0] = '\0';
  FUN_1090_1a5e(&stack0xfffe,0x67,DAT_1160_0480,*(undefined2 *)(iVar3 + 0x1d8),
                *(undefined2 *)(iVar3 + 0x1da),0xff,local_102,unaff_SS);
  FUN_1090_1a5e(&stack0xfffe,100,DAT_1160_0484,*(undefined2 *)(iVar3 + 500),
                *(undefined2 *)(iVar3 + 0x1f6),0xff,local_102,unaff_SS);
  if (local_102[0] != '\0') {
    puVar2 = (undefined4 *)*(undefined4 *)(local_108 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)((char *)s_sThousand_1160_1088 + 8,(undefined4 *)puVar2,
                       (int)((ulong)puVar2 >> 0x10),local_102);
  }
  local_102[0] = '\0';
  FUN_1090_1a5e(&stack0xfffe,0x67,DAT_1160_0480,*(undefined2 *)(iVar3 + 0x1d0),
                *(undefined2 *)(iVar3 + 0x1d2),0xff,local_102,unaff_SS);
  FUN_1090_1a5e(&stack0xfffe,100,DAT_1160_0484,*(undefined2 *)(iVar3 + 0x1ec),
                *(undefined2 *)(iVar3 + 0x1ee),0xff,local_102,unaff_SS);
  if (local_102[0] != '\0') {
    puVar2 = (undefined4 *)*(undefined4 *)(local_108 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)((char *)s_sThousand_1160_1088 + 8,(undefined4 *)puVar2,
                       (int)((ulong)puVar2 >> 0x10),local_102);
  }
  local_102[0] = '\0';
  FUN_1090_1a5e(&stack0xfffe,0x67,DAT_1160_0480,*(undefined2 *)(iVar3 + 0x1c8),
                *(undefined2 *)(iVar3 + 0x1ca),0xff,local_102,unaff_SS);
  FUN_1090_1a5e(&stack0xfffe,100,DAT_1160_0484,*(undefined2 *)(iVar3 + 0x1e4),
                *(undefined2 *)(iVar3 + 0x1e6),0xff,local_102,unaff_SS);
  if (local_102[0] != '\0') {
    puVar2 = (undefined4 *)*(undefined4 *)(local_108 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)((char *)s_sThousand_1160_1088 + 8,(undefined4 *)puVar2,
                       (int)((ulong)puVar2 >> 0x10),local_102);
  }
  local_102[0] = '\0';
  FUN_1090_1a5e(&stack0xfffe,0x67,DAT_1160_0480,*(undefined2 *)(iVar3 + 0x1c4),
                *(undefined2 *)(iVar3 + 0x1c6),0xff,local_102,unaff_SS);
  FUN_1090_1a5e(&stack0xfffe,100,DAT_1160_0484,*(undefined2 *)(iVar3 + 0x1e0),
                *(undefined2 *)(iVar3 + 0x1e2),0xff,local_102,unaff_SS);
  if (local_102[0] != '\0') {
    puVar2 = (undefined4 *)*(undefined4 *)(local_108 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)((char *)s_sThousand_1160_1088 + 8,(undefined4 *)puVar2,
                       (int)((ulong)puVar2 >> 0x10),local_102);
  }
  local_102[0] = '\0';
  FUN_1090_1a5e(&stack0xfffe,0x67,DAT_1160_047e,*(undefined2 *)(iVar3 + 0x1f8),
                *(undefined2 *)(iVar3 + 0x1fa),0xff,local_102,unaff_SS);
  puVar2 = (undefined4 *)*(undefined4 *)(local_108 + 0xec);
  puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
  (*(code *)*puVar1)((char *)s_sThousand_1160_1088 + 8,(undefined4 *)puVar2,
                     (int)((ulong)puVar2 >> 0x10),local_102);
  local_102[0] = '\0';
  FUN_1090_1a5e(&stack0xfffe,0x67,DAT_1160_0480,*(undefined2 *)(iVar3 + 0x1fc),
                *(undefined2 *)(iVar3 + 0x1fe),0xff,local_102,unaff_SS);
  FUN_1090_1a5e(&stack0xfffe,100,DAT_1160_0484,*(undefined2 *)(iVar3 + 0x204),
                *(undefined2 *)(iVar3 + 0x206),0xff,local_102,unaff_SS);
  if (local_102[0] != '\0') {
    puVar2 = (undefined4 *)*(undefined4 *)(local_108 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)((char *)s_sThousand_1160_1088 + 8,(undefined4 *)puVar2,
                       (int)((ulong)puVar2 >> 0x10),local_102);
  }
  local_102[0] = '\0';
  FUN_1090_1a5e(&stack0xfffe,0x67,DAT_1160_0480,*(undefined2 *)(iVar3 + 0x200),
                *(undefined2 *)(iVar3 + 0x202),0xff,local_102,unaff_SS);
  FUN_1090_1a5e(&stack0xfffe,100,DAT_1160_0484,*(undefined2 *)(iVar3 + 0x208),
                *(undefined2 *)(iVar3 + 0x20a),0xff,local_102,unaff_SS);
  if (local_102[0] != '\0') {
    puVar2 = (undefined4 *)*(undefined4 *)(local_108 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)((char *)s_sThousand_1160_1088 + 8,(undefined4 *)puVar2,
                       (int)((ulong)puVar2 >> 0x10),local_102);
  }
  local_102[0] = '\0';
  FUN_1090_1a5e(&stack0xfffe,0x67,DAT_1160_047e,*(undefined2 *)(iVar3 + 0x20c),
                *(undefined2 *)(iVar3 + 0x20e),0xff,local_102,unaff_SS);
  FUN_1090_1a5e(&stack0xfffe,100,DAT_1160_0484,*(undefined2 *)(iVar3 + 0x214),
                *(undefined2 *)(iVar3 + 0x216),0xff,local_102,unaff_SS);
  FUN_1090_1a5e(&stack0xfffe,100,DAT_1160_0486,*(undefined2 *)(iVar3 + 0x234),
                *(undefined2 *)(iVar3 + 0x236),0xff,local_102,unaff_SS);
  if (local_102[0] != '\0') {
    puVar2 = (undefined4 *)*(undefined4 *)(local_108 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)((char *)s_sThousand_1160_1088 + 8,(undefined4 *)puVar2,
                       (int)((ulong)puVar2 >> 0x10),local_102);
  }
  local_102[0] = '\0';
  FUN_1090_1a5e(&stack0xfffe,0x67,DAT_1160_0480,*(undefined2 *)(iVar3 + 0x220),
                *(undefined2 *)(iVar3 + 0x222),0xff,local_102,unaff_SS);
  FUN_1090_1a5e(&stack0xfffe,100,DAT_1160_0484,*(undefined2 *)(iVar3 + 0x224),
                *(undefined2 *)(iVar3 + 0x226),0xff,local_102,unaff_SS);
  FUN_1090_1a5e(&stack0xfffe,100,DAT_1160_0486,*(undefined2 *)(iVar3 + 0x238),
                *(undefined2 *)(iVar3 + 0x23a),0xff,local_102,unaff_SS);
  if (local_102[0] != '\0') {
    puVar2 = (undefined4 *)*(undefined4 *)(local_108 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)((char *)s_sThousand_1160_1088 + 8,(undefined4 *)puVar2,
                       (int)((ulong)puVar2 >> 0x10),local_102);
  }
  local_102[0] = '\0';
  FUN_1090_1a5e(&stack0xfffe,0x67,DAT_1160_0480,*(undefined2 *)(iVar3 + 0x21c),
                *(undefined2 *)(iVar3 + 0x21e),0xff,local_102,unaff_SS);
  FUN_1090_1a5e(&stack0xfffe,100,DAT_1160_0484,*(undefined2 *)(iVar3 + 0x228),
                *(undefined2 *)(iVar3 + 0x22a),0xff,local_102,unaff_SS);
  FUN_1090_1a5e(&stack0xfffe,100,DAT_1160_0486,*(undefined2 *)(iVar3 + 0x23c),
                *(undefined2 *)(iVar3 + 0x23e),0xff,local_102,unaff_SS);
  if (local_102[0] != '\0') {
    puVar2 = (undefined4 *)*(undefined4 *)(local_108 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)((char *)s_sThousand_1160_1088 + 8,(undefined4 *)puVar2,
                       (int)((ulong)puVar2 >> 0x10),local_102);
  }
  local_102[0] = '\0';
  FUN_1090_1a5e(&stack0xfffe,0x67,DAT_1160_0480,*(undefined2 *)(iVar3 + 0x218),
                *(undefined2 *)(iVar3 + 0x21a),0xff,local_102,unaff_SS);
  FUN_1090_1a5e(&stack0xfffe,100,DAT_1160_0484,*(undefined2 *)(iVar3 + 0x22c),
                *(undefined2 *)(iVar3 + 0x22e),0xff,local_102,unaff_SS);
  FUN_1090_1a5e(&stack0xfffe,100,DAT_1160_0486,*(undefined2 *)(iVar3 + 0x240),
                *(undefined2 *)(iVar3 + 0x242),0xff,local_102,unaff_SS);
  if (local_102[0] != '\0') {
    puVar2 = (undefined4 *)*(undefined4 *)(local_108 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)((char *)s_sThousand_1160_1088 + 8,(undefined4 *)puVar2,
                       (int)((ulong)puVar2 >> 0x10),local_102);
  }
  local_102[0] = '\0';
  FUN_1090_1a5e(&stack0xfffe,0x67,DAT_1160_047e,*(undefined2 *)(iVar3 + 0x24c),
                *(undefined2 *)(iVar3 + 0x24e),0xff,local_102,unaff_SS);
  puVar2 = (undefined4 *)*(undefined4 *)(local_108 + 0xec);
  puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
  (*(code *)*puVar1)((char *)s_sThousand_1160_1088 + 8,(undefined4 *)puVar2,
                     (int)((ulong)puVar2 >> 0x10),local_102);
  local_102[0] = '\0';
  FUN_1090_1a5e(&stack0xfffe,0x67,DAT_1160_0480,*(undefined2 *)(iVar3 + 0x254),
                *(undefined2 *)(iVar3 + 0x256),0xff,local_102,unaff_SS);
  FUN_1090_1a5e(&stack0xfffe,100,DAT_1160_0484,*(undefined2 *)(iVar3 + 0x25c),
                *(undefined2 *)(iVar3 + 0x25e),0xff,local_102,unaff_SS);
  if (local_102[0] != '\0') {
    puVar2 = (undefined4 *)*(undefined4 *)(local_108 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)((char *)s_sThousand_1160_1088 + 8,(undefined4 *)puVar2,
                       (int)((ulong)puVar2 >> 0x10),local_102);
  }
  local_102[0] = '\0';
  FUN_1090_1a5e(&stack0xfffe,0x67,DAT_1160_0480,*(undefined2 *)(iVar3 + 0x250),
                *(undefined2 *)(iVar3 + 0x252),0xff,local_102,unaff_SS);
  FUN_1090_1a5e(&stack0xfffe,100,DAT_1160_0484,*(undefined2 *)(iVar3 + 600),
                *(undefined2 *)(iVar3 + 0x25a),0xff,local_102,unaff_SS);
  if (local_102[0] != '\0') {
    puVar2 = (undefined4 *)*(undefined4 *)(local_108 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)((char *)s_sThousand_1160_1088 + 8,(undefined4 *)puVar2,
                       (int)((ulong)puVar2 >> 0x10),local_102);
  }
  local_102[0] = '\0';
  FUN_1090_1a5e(&stack0xfffe,0x67,DAT_1160_0480,*(undefined2 *)(iVar3 + 0x3b8),
                *(undefined2 *)(iVar3 + 0x3ba),0xff,local_102,unaff_SS);
  FUN_1090_1a5e(&stack0xfffe,100,DAT_1160_0484,*(undefined2 *)(iVar3 + 0x3bc),
                *(undefined2 *)(iVar3 + 0x3be),0xff,local_102,unaff_SS);
  if (local_102[0] != '\0') {
    puVar2 = (undefined4 *)*(undefined4 *)(local_108 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)((char *)s_sThousand_1160_1088 + 8,(undefined4 *)puVar2,
                       (int)((ulong)puVar2 >> 0x10),local_102);
  }
  local_102[0] = '\0';
  FUN_1090_1a5e(&stack0xfffe,0x67,DAT_1160_047e,*(undefined2 *)(iVar3 + 0x260),
                *(undefined2 *)(iVar3 + 0x262),0xff,local_102,unaff_SS);
  FUN_1090_1a5e(&stack0xfffe,100,DAT_1160_0484,*(undefined2 *)(iVar3 + 0x268),
                *(undefined2 *)(iVar3 + 0x26a),0xff,local_102,unaff_SS);
  FUN_1090_1a5e(&stack0xfffe,100,DAT_1160_0486,*(undefined2 *)(iVar3 + 0x278),
                *(undefined2 *)(iVar3 + 0x27a),0xff,local_102,unaff_SS);
  if (local_102[0] != '\0') {
    puVar2 = (undefined4 *)*(undefined4 *)(local_108 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)((char *)s_sThousand_1160_1088 + 8,(undefined4 *)puVar2,
                       (int)((ulong)puVar2 >> 0x10),local_102);
  }
  local_102[0] = '\0';
  FUN_1090_1a5e(&stack0xfffe,0x67,DAT_1160_0480,*(undefined2 *)(iVar3 + 0x26c),
                *(undefined2 *)(iVar3 + 0x26e),0xff,local_102,unaff_SS);
  FUN_1090_1a5e(&stack0xfffe,100,DAT_1160_0484,*(undefined2 *)(iVar3 + 0x270),
                *(undefined2 *)(iVar3 + 0x272),0xff,local_102,unaff_SS);
  FUN_1090_1a5e(&stack0xfffe,100,DAT_1160_0486,*(undefined2 *)(iVar3 + 0x27c),
                *(undefined2 *)(iVar3 + 0x27e),0xff,local_102,unaff_SS);
  if (local_102[0] != '\0') {
    puVar2 = (undefined4 *)*(undefined4 *)(local_108 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)((char *)s_sThousand_1160_1088 + 8,(undefined4 *)puVar2,
                       (int)((ulong)puVar2 >> 0x10),local_102);
  }
  local_102[0] = '\0';
  FUN_1090_1a5e(&stack0xfffe,0x67,DAT_1160_047e,*(undefined2 *)(iVar3 + 0x2b4),
                *(undefined2 *)(iVar3 + 0x2b6),0xff,local_102,unaff_SS);
  puVar2 = (undefined4 *)*(undefined4 *)(local_108 + 0xec);
  puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
  (*(code *)*puVar1)((char *)s_sThousand_1160_1088 + 8,(undefined4 *)puVar2,
                     (int)((ulong)puVar2 >> 0x10),local_102);
  local_102[0] = '\0';
  FUN_1090_1a5e(&stack0xfffe,0x67,DAT_1160_0480,*(undefined2 *)(iVar3 + 0x2b8),
                *(undefined2 *)(iVar3 + 0x2ba),0xff,local_102,unaff_SS);
  FUN_1090_1a5e(&stack0xfffe,100,DAT_1160_0484,*(undefined2 *)(iVar3 + 0x2c4),
                *(undefined2 *)(iVar3 + 0x2c6),0xff,local_102,unaff_SS);
  if (local_102[0] != '\0') {
    puVar2 = (undefined4 *)*(undefined4 *)(local_108 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)((char *)s_sThousand_1160_1088 + 8,(undefined4 *)puVar2,
                       (int)((ulong)puVar2 >> 0x10),local_102);
  }
  local_102[0] = '\0';
  FUN_1090_1a5e(&stack0xfffe,0x67,DAT_1160_0480,*(undefined2 *)(iVar3 + 700),
                *(undefined2 *)(iVar3 + 0x2be),0xff,local_102,unaff_SS);
  FUN_1090_1a5e(&stack0xfffe,100,DAT_1160_0484,*(undefined2 *)(iVar3 + 0x2c8),
                *(undefined2 *)(iVar3 + 0x2ca),0xff,local_102,unaff_SS);
  if (local_102[0] != '\0') {
    puVar2 = (undefined4 *)*(undefined4 *)(local_108 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)((char *)s_sThousand_1160_1088 + 8,(undefined4 *)puVar2,
                       (int)((ulong)puVar2 >> 0x10),local_102);
  }
  local_102[0] = '\0';
  FUN_1090_1a5e(&stack0xfffe,0x67,DAT_1160_0480,*(undefined2 *)(iVar3 + 0x2c0),
                *(undefined2 *)(iVar3 + 0x2c2),0xff,local_102,unaff_SS);
  FUN_1090_1a5e(&stack0xfffe,100,DAT_1160_0484,*(undefined2 *)(iVar3 + 0x2cc),
                *(undefined2 *)(iVar3 + 0x2ce),0xff,local_102,unaff_SS);
  if (local_102[0] != '\0') {
    puVar2 = (undefined4 *)*(undefined4 *)(local_108 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)((char *)s_sThousand_1160_1088 + 8,(undefined4 *)puVar2,
                       (int)((ulong)puVar2 >> 0x10),local_102);
  }
  local_102[0] = '\0';
  FUN_1090_1a5e(&stack0xfffe,0x67,DAT_1160_047e,*(undefined2 *)(iVar3 + 0x280),
                *(undefined2 *)(iVar3 + 0x282),0xff,local_102,unaff_SS);
  puVar2 = (undefined4 *)*(undefined4 *)(local_108 + 0xec);
  puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
  (*(code *)*puVar1)((char *)s_sThousand_1160_1088 + 8,(undefined4 *)puVar2,
                     (int)((ulong)puVar2 >> 0x10),local_102);
  local_102[0] = '\0';
  FUN_1090_1a5e(&stack0xfffe,0x67,DAT_1160_0480,*(undefined2 *)(iVar3 + 0x284),
                *(undefined2 *)(iVar3 + 0x286),0xff,local_102,unaff_SS);
  FUN_1090_1a5e(&stack0xfffe,100,DAT_1160_0484,*(undefined2 *)(iVar3 + 0x29c),
                *(undefined2 *)(iVar3 + 0x29e),0xff,local_102,unaff_SS);
  if (local_102[0] != '\0') {
    puVar2 = (undefined4 *)*(undefined4 *)(local_108 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)((char *)s_sThousand_1160_1088 + 8,(undefined4 *)puVar2,
                       (int)((ulong)puVar2 >> 0x10),local_102);
  }
  local_102[0] = '\0';
  FUN_1090_1a5e(&stack0xfffe,0x67,DAT_1160_0480,*(undefined2 *)(iVar3 + 0x288),
                *(undefined2 *)(iVar3 + 0x28a),0xff,local_102,unaff_SS);
  FUN_1090_1a5e(&stack0xfffe,100,DAT_1160_0484,*(undefined2 *)(iVar3 + 0x2a0),
                *(undefined2 *)(iVar3 + 0x2a2),0xff,local_102,unaff_SS);
  if (local_102[0] != '\0') {
    puVar2 = (undefined4 *)*(undefined4 *)(local_108 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)((char *)s_sThousand_1160_1088 + 8,(undefined4 *)puVar2,
                       (int)((ulong)puVar2 >> 0x10),local_102);
  }
  local_102[0] = '\0';
  FUN_1090_1a5e(&stack0xfffe,0x67,DAT_1160_0480,*(undefined2 *)(iVar3 + 0x28c),
                *(undefined2 *)(iVar3 + 0x28e),0xff,local_102,unaff_SS);
  FUN_1090_1a5e(&stack0xfffe,100,DAT_1160_0484,*(undefined2 *)(iVar3 + 0x2a4),
                *(undefined2 *)(iVar3 + 0x2a6),0xff,local_102,unaff_SS);
  if (local_102[0] != '\0') {
    puVar2 = (undefined4 *)*(undefined4 *)(local_108 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)((char *)s_sThousand_1160_1088 + 8,(undefined4 *)puVar2,
                       (int)((ulong)puVar2 >> 0x10),local_102);
  }
  local_102[0] = '\0';
  FUN_1090_1a5e(&stack0xfffe,0x67,DAT_1160_0480,*(undefined2 *)(iVar3 + 0x298),
                *(undefined2 *)(iVar3 + 0x29a),0xff,local_102,unaff_SS);
  FUN_1090_1a5e(&stack0xfffe,100,DAT_1160_0484,*(undefined2 *)(iVar3 + 0x2b0),
                *(undefined2 *)(iVar3 + 0x2b2),0xff,local_102,unaff_SS);
  if (local_102[0] != '\0') {
    puVar2 = (undefined4 *)*(undefined4 *)(local_108 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)((char *)s_sThousand_1160_1088 + 8,(undefined4 *)puVar2,
                       (int)((ulong)puVar2 >> 0x10),local_102);
  }
  local_102[0] = '\0';
  FUN_1090_1a5e(&stack0xfffe,0x67,DAT_1160_0480,*(undefined2 *)(iVar3 + 0x290),
                *(undefined2 *)(iVar3 + 0x292),0xff,local_102,unaff_SS);
  FUN_1090_1a5e(&stack0xfffe,100,DAT_1160_0484,*(undefined2 *)(iVar3 + 0x2a8),
                *(undefined2 *)(iVar3 + 0x2aa),0xff,local_102,unaff_SS);
  if (local_102[0] != '\0') {
    puVar2 = (undefined4 *)*(undefined4 *)(local_108 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)((char *)s_sThousand_1160_1088 + 8,(undefined4 *)puVar2,
                       (int)((ulong)puVar2 >> 0x10),local_102);
  }
  local_102[0] = '\0';
  FUN_1090_1a5e(&stack0xfffe,0x67,DAT_1160_0480,*(undefined2 *)(iVar3 + 0x294),
                *(undefined2 *)(iVar3 + 0x296),0xff,local_102,unaff_SS);
  FUN_1090_1a5e(&stack0xfffe,100,DAT_1160_0484,*(undefined2 *)(iVar3 + 0x2ac),
                *(undefined2 *)(iVar3 + 0x2ae),0xff,local_102,unaff_SS);
  if (local_102[0] != '\0') {
    puVar2 = (undefined4 *)*(undefined4 *)(local_108 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)((char *)s_sThousand_1160_1088 + 8,(undefined4 *)puVar2,
                       (int)((ulong)puVar2 >> 0x10),local_102);
  }
  local_102[0] = '\0';
  FUN_1090_1a5e(&stack0xfffe,0x67,DAT_1160_047e,*(undefined2 *)(iVar3 + 0x2d4),
                *(undefined2 *)(iVar3 + 0x2d6),0xff,local_102,unaff_SS);
  FUN_1090_1a5e(&stack0xfffe,100,DAT_1160_0484,*(undefined2 *)(iVar3 + 0x2d8),
                *(undefined2 *)(iVar3 + 0x2da),0xff,local_102,unaff_SS);
  if (local_102[0] != '\0') {
    puVar2 = (undefined4 *)*(undefined4 *)(local_108 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)((char *)s_sThousand_1160_1088 + 8,(undefined4 *)puVar2,
                       (int)((ulong)puVar2 >> 0x10),local_102);
  }
  local_102[0] = '\0';
  FUN_1090_1a5e(&stack0xfffe,0x67,DAT_1160_047e,*(undefined2 *)(iVar3 + 0x2dc),
                *(undefined2 *)(iVar3 + 0x2de),0xff,local_102,unaff_SS);
  puVar7 = local_208;
  uVar8 = unaff_SS;
  FUN_1158_17cd(local_102,unaff_SS);
  FUN_1158_184c(0x1e1e,0x1158);
  puVar5 = local_308;
  uVar6 = unaff_SS;
  FUN_1138_1d53((int)*(undefined4 *)(iVar3 + 0x2e0),
                (int)((ulong)*(undefined4 *)(iVar3 + 0x2e0) >> 0x10));
  FUN_1158_184c(puVar5,uVar6);
  FUN_1158_17e7(0xff,local_102,unaff_SS,puVar7,uVar8);
  FUN_1090_1a5e(&stack0xfffe,100,DAT_1160_0484,*(undefined2 *)(iVar3 + 0x2e4),
                *(undefined2 *)(iVar3 + 0x2e6),0xff,local_102,unaff_SS);
  if (local_102[0] != '\0') {
    puVar2 = (undefined4 *)*(undefined4 *)(local_108 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)((char *)s_sThousand_1160_1088 + 8,(undefined4 *)puVar2,
                       (int)((ulong)puVar2 >> 0x10),local_102);
  }
  if (param_2 == 1) {
    puVar2 = (undefined4 *)*(undefined4 *)(local_108 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)((char *)s_sThousand_1160_1088 + 8,(undefined4 *)puVar2,
                       (int)((ulong)puVar2 >> 0x10),0x1e1b,(char *)s_sThousand_1160_1088 + 8);
  }
  local_102[0] = '\0';
  FUN_1090_1a5e(&stack0xfffe,0x67,DAT_1160_047e,*(undefined2 *)(iVar3 + 0x364),
                *(undefined2 *)(iVar3 + 0x366),0xff,local_102,unaff_SS);
  puVar7 = local_208;
  uVar8 = unaff_SS;
  FUN_1158_17cd(local_102,unaff_SS);
  FUN_1158_184c(0x1e1e,0x1158);
  puVar5 = local_308;
  uVar6 = unaff_SS;
  FUN_1138_1d53((int)*(undefined4 *)(iVar3 + 0x368),
                (int)((ulong)*(undefined4 *)(iVar3 + 0x368) >> 0x10));
  FUN_1158_184c(puVar5,uVar6);
  FUN_1158_17e7(0xff,local_102,unaff_SS,puVar7,uVar8);
  FUN_1090_1a5e(&stack0xfffe,100,DAT_1160_0484,*(undefined2 *)(iVar3 + 0x36c),
                *(undefined2 *)(iVar3 + 0x36e),0xff,local_102,unaff_SS);
  if (local_102[0] != '\0') {
    puVar2 = (undefined4 *)*(undefined4 *)(local_108 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)((char *)s_sThousand_1160_1088 + 8,(undefined4 *)puVar2,
                       (int)((ulong)puVar2 >> 0x10),local_102);
  }
  local_102[0] = '\0';
  FUN_1090_1a5e(&stack0xfffe,100,DAT_1160_0484,*(undefined2 *)(iVar3 + 0x354),
                *(undefined2 *)(iVar3 + 0x356),0xff,local_102,unaff_SS);
  FUN_1090_1a5e(&stack0xfffe,100,DAT_1160_0486,*(undefined2 *)(iVar3 + 0x358),
                *(undefined2 *)(iVar3 + 0x35a),0xff,local_102,unaff_SS);
  if (local_102[0] != '\0') {
    puVar2 = (undefined4 *)*(undefined4 *)(local_108 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)((char *)s_sThousand_1160_1088 + 8,(undefined4 *)puVar2,
                       (int)((ulong)puVar2 >> 0x10),local_102);
  }
  local_102[0] = '\0';
  FUN_1090_1a5e(&stack0xfffe,0x67,DAT_1160_047e,*(undefined2 *)(iVar3 + 0x350),
                *(undefined2 *)(iVar3 + 0x352),0xff,local_102,unaff_SS);
  FUN_1090_1a5e(&stack0xfffe,100,DAT_1160_0484,*(undefined2 *)(iVar3 + 0x35c),
                *(undefined2 *)(iVar3 + 0x35e),0xff,local_102,unaff_SS);
  FUN_1090_1a5e(&stack0xfffe,100,DAT_1160_0486,*(undefined2 *)(iVar3 + 0x360),
                *(undefined2 *)(iVar3 + 0x362),0xff,local_102,unaff_SS);
  if (local_102[0] != '\0') {
    puVar2 = (undefined4 *)*(undefined4 *)(local_108 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)((char *)s_sThousand_1160_1088 + 8,(undefined4 *)puVar2,
                       (int)((ulong)puVar2 >> 0x10),local_102);
  }
  local_102[0] = '\0';
  FUN_1090_1a5e(&stack0xfffe,0x67,DAT_1160_047e,*(undefined2 *)(iVar3 + 0x2f0),
                *(undefined2 *)(iVar3 + 0x2f2),0xff,local_102,unaff_SS);
  if (local_102[0] != '\0') {
    puVar2 = (undefined4 *)*(undefined4 *)(local_108 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)((char *)s_sThousand_1160_1088 + 8,(undefined4 *)puVar2,
                       (int)((ulong)puVar2 >> 0x10),local_102);
  }
  local_102[0] = '\0';
  FUN_1090_1a5e(&stack0xfffe,0x67,DAT_1160_0480,*(undefined2 *)(iVar3 + 0x308),
                *(undefined2 *)(iVar3 + 0x30a),0xff,local_102,unaff_SS);
  FUN_1090_1a5e(&stack0xfffe,100,DAT_1160_0484,*(undefined2 *)(iVar3 + 0x310),
                *(undefined2 *)(iVar3 + 0x312),0xff,local_102,unaff_SS);
  FUN_1090_1a5e(&stack0xfffe,100,DAT_1160_0486,*(undefined2 *)(iVar3 + 0x32c),
                *(undefined2 *)(iVar3 + 0x32e),0xff,local_102,unaff_SS);
  if (local_102[0] != '\0') {
    puVar2 = (undefined4 *)*(undefined4 *)(local_108 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)((char *)s_sThousand_1160_1088 + 8,(undefined4 *)puVar2,
                       (int)((ulong)puVar2 >> 0x10),local_102);
  }
  local_102[0] = '\0';
  FUN_1090_1a5e(&stack0xfffe,0x67,DAT_1160_0480,*(undefined2 *)(iVar3 + 0x304),
                *(undefined2 *)(iVar3 + 0x306),0xff,local_102,unaff_SS);
  FUN_1090_1a5e(&stack0xfffe,100,DAT_1160_0484,*(undefined2 *)(iVar3 + 0x314),
                *(undefined2 *)(iVar3 + 0x316),0xff,local_102,unaff_SS);
  FUN_1090_1a5e(&stack0xfffe,100,DAT_1160_0486,*(undefined2 *)(iVar3 + 0x330),
                *(undefined2 *)(iVar3 + 0x332),0xff,local_102,unaff_SS);
  if (local_102[0] != '\0') {
    puVar2 = (undefined4 *)*(undefined4 *)(local_108 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)((char *)s_sThousand_1160_1088 + 8,(undefined4 *)puVar2,
                       (int)((ulong)puVar2 >> 0x10),local_102);
  }
  local_102[0] = '\0';
  FUN_1090_1a5e(&stack0xfffe,0x67,DAT_1160_0480,*(undefined2 *)(iVar3 + 0x300),
                *(undefined2 *)(iVar3 + 0x302),0xff,local_102,unaff_SS);
  FUN_1090_1a5e(&stack0xfffe,100,DAT_1160_0484,*(undefined2 *)(iVar3 + 0x318),
                *(undefined2 *)(iVar3 + 0x31a),0xff,local_102,unaff_SS);
  FUN_1090_1a5e(&stack0xfffe,100,DAT_1160_0486,*(undefined2 *)(iVar3 + 0x334),
                *(undefined2 *)(iVar3 + 0x336),0xff,local_102,unaff_SS);
  if (local_102[0] != '\0') {
    puVar2 = (undefined4 *)*(undefined4 *)(local_108 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)((char *)s_sThousand_1160_1088 + 8,(undefined4 *)puVar2,
                       (int)((ulong)puVar2 >> 0x10),local_102);
  }
  local_102[0] = '\0';
  FUN_1090_1a5e(&stack0xfffe,0x67,DAT_1160_0480,*(undefined2 *)(iVar3 + 0x2fc),
                *(undefined2 *)(iVar3 + 0x2fe),0xff,local_102,unaff_SS);
  FUN_1090_1a5e(&stack0xfffe,100,DAT_1160_0484,*(undefined2 *)(iVar3 + 0x31c),
                *(undefined2 *)(iVar3 + 0x31e),0xff,local_102,unaff_SS);
  FUN_1090_1a5e(&stack0xfffe,100,DAT_1160_0486,*(undefined2 *)(iVar3 + 0x338),
                *(undefined2 *)(iVar3 + 0x33a),0xff,local_102,unaff_SS);
  if (local_102[0] != '\0') {
    puVar2 = (undefined4 *)*(undefined4 *)(local_108 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)((char *)s_sThousand_1160_1088 + 8,(undefined4 *)puVar2,
                       (int)((ulong)puVar2 >> 0x10),local_102);
  }
  local_102[0] = '\0';
  FUN_1090_1a5e(&stack0xfffe,0x67,DAT_1160_0480,*(undefined2 *)(iVar3 + 0x30c),
                *(undefined2 *)(iVar3 + 0x30e),0xff,local_102,unaff_SS);
  FUN_1090_1a5e(&stack0xfffe,100,DAT_1160_0484,*(undefined2 *)(iVar3 + 800),
                *(undefined2 *)(iVar3 + 0x322),0xff,local_102,unaff_SS);
  FUN_1090_1a5e(&stack0xfffe,100,DAT_1160_0486,*(undefined2 *)(iVar3 + 0x33c),
                *(undefined2 *)(iVar3 + 0x33e),0xff,local_102,unaff_SS);
  if (local_102[0] != '\0') {
    puVar2 = (undefined4 *)*(undefined4 *)(local_108 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)((char *)s_sThousand_1160_1088 + 8,(undefined4 *)puVar2,
                       (int)((ulong)puVar2 >> 0x10),local_102);
  }
  local_102[0] = '\0';
  FUN_1090_1a5e(&stack0xfffe,0x67,DAT_1160_047e,*(undefined2 *)(iVar3 + 0x340),
                *(undefined2 *)(iVar3 + 0x342),0xff,local_102,unaff_SS);
  if (local_102[0] != '\0') {
    puVar2 = (undefined4 *)*(undefined4 *)(local_108 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)((char *)s_sThousand_1160_1088 + 8,(undefined4 *)puVar2,
                       (int)((ulong)puVar2 >> 0x10),local_102);
  }
  local_102[0] = '\0';
  if (*(char *)((int)*(undefined4 *)(iVar3 + 0x348) + 0x29) != '\0') {
    puVar7 = local_208;
    uVar6 = unaff_SS;
    FUN_1138_1d53((int)*(undefined4 *)(iVar3 + 0x348),
                  (int)((ulong)*(undefined4 *)(iVar3 + 0x348) >> 0x10));
    FUN_1158_17e7(0xff,local_102,unaff_SS,puVar7,uVar6);
    local_10a = DAT_1160_0480;
    if (0 < DAT_1160_0480) {
      local_104 = 1;
      while( true ) {
        puVar7 = local_20a;
        uVar6 = unaff_SS;
        FUN_1158_17cd(0x1e1c,0x1158);
        FUN_1158_184c(local_102,unaff_SS);
        FUN_1158_17e7(0xff,local_102,unaff_SS,puVar7,uVar6);
        if (local_104 == local_10a) break;
        local_104 = local_104 + 1;
      }
    }
    FUN_1090_1a5e(&stack0xfffe,100,DAT_1160_0484,*(undefined2 *)(iVar3 + 0x348),
                  *(undefined2 *)(iVar3 + 0x34a),0xff,local_102,unaff_SS);
  }
  if (local_102[0] != '\0') {
    puVar2 = (undefined4 *)*(undefined4 *)(local_108 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)((char *)s_sThousand_1160_1088 + 8,(undefined4 *)puVar2,
                       (int)((ulong)puVar2 >> 0x10),local_102);
  }
  local_102[0] = '\0';
  FUN_1090_1a5e(&stack0xfffe,0x67,DAT_1160_0480,*(undefined2 *)(iVar3 + 0x344),
                *(undefined2 *)(iVar3 + 0x346),0xff,local_102,unaff_SS);
  FUN_1090_1a5e(&stack0xfffe,100,DAT_1160_0484,*(undefined2 *)(iVar3 + 0x34c),
                *(undefined2 *)(iVar3 + 0x34e),0xff,local_102,unaff_SS);
  if (local_102[0] != '\0') {
    puVar2 = (undefined4 *)*(undefined4 *)(local_108 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)((char *)s_sThousand_1160_1088 + 8,(undefined4 *)puVar2,
                       (int)((ulong)puVar2 >> 0x10),local_102);
  }
  local_102[0] = '\0';
  FUN_1090_1a5e(&stack0xfffe,0x67,DAT_1160_047e,*(undefined2 *)(iVar3 + 0x378),
                *(undefined2 *)(iVar3 + 0x37a),0xff,local_102,unaff_SS);
  FUN_1090_1a5e(&stack0xfffe,100,DAT_1160_0484,*(undefined2 *)(iVar3 + 0x380),
                *(undefined2 *)(iVar3 + 0x382),0xff,local_102,unaff_SS);
  FUN_1090_1a5e(&stack0xfffe,100,DAT_1160_0486,*(undefined2 *)(iVar3 + 0x398),
                *(undefined2 *)(iVar3 + 0x39a),0xff,local_102,unaff_SS);
  if (local_102[0] != '\0') {
    puVar2 = (undefined4 *)*(undefined4 *)(local_108 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)((char *)s_sThousand_1160_1088 + 8,(undefined4 *)puVar2,
                       (int)((ulong)puVar2 >> 0x10),local_102);
  }
  local_102[0] = '\0';
  FUN_1090_1a5e(&stack0xfffe,0x67,DAT_1160_0480,*(undefined2 *)(iVar3 + 0x388),
                *(undefined2 *)(iVar3 + 0x38a),0xff,local_102,unaff_SS);
  FUN_1090_1a5e(&stack0xfffe,100,DAT_1160_0484,*(undefined2 *)(iVar3 + 0x38c),
                *(undefined2 *)(iVar3 + 0x38e),0xff,local_102,unaff_SS);
  FUN_1090_1a5e(&stack0xfffe,100,DAT_1160_0486,*(undefined2 *)(iVar3 + 0x39c),
                *(undefined2 *)(iVar3 + 0x39e),0xff,local_102,unaff_SS);
  if (local_102[0] != '\0') {
    puVar2 = (undefined4 *)*(undefined4 *)(local_108 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)((char *)s_sThousand_1160_1088 + 8,(undefined4 *)puVar2,
                       (int)((ulong)puVar2 >> 0x10),local_102);
  }
  local_102[0] = '\0';
  FUN_1090_1a5e(&stack0xfffe,0x67,DAT_1160_0480,*(undefined2 *)(iVar3 + 900),
                *(undefined2 *)(iVar3 + 0x386),0xff,local_102,unaff_SS);
  FUN_1090_1a5e(&stack0xfffe,100,DAT_1160_0484,*(undefined2 *)(iVar3 + 0x390),
                *(undefined2 *)(iVar3 + 0x392),0xff,local_102,unaff_SS);
  FUN_1090_1a5e(&stack0xfffe,100,DAT_1160_0486,*(undefined2 *)(iVar3 + 0x3a0),
                *(undefined2 *)(iVar3 + 0x3a2),0xff,local_102,unaff_SS);
  if (local_102[0] != '\0') {
    puVar2 = (undefined4 *)*(undefined4 *)(local_108 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)((char *)s_sThousand_1160_1088 + 8,(undefined4 *)puVar2,
                       (int)((ulong)puVar2 >> 0x10),local_102);
  }
  local_102[0] = '\0';
  FUN_1090_1a5e(&stack0xfffe,0x67,DAT_1160_047e,*(undefined2 *)(iVar3 + 0x3c0),
                *(undefined2 *)(iVar3 + 0x3c2),0xff,local_102,unaff_SS);
  puVar2 = (undefined4 *)*(undefined4 *)(local_108 + 0xec);
  puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
  (*(code *)*puVar1)((char *)s_sThousand_1160_1088 + 8,(undefined4 *)puVar2,
                     (int)((ulong)puVar2 >> 0x10),local_102);
  local_102[0] = '\0';
  FUN_1090_1a5e(&stack0xfffe,0x67,DAT_1160_0480,*(undefined2 *)(iVar3 + 0x3c4),
                *(undefined2 *)(iVar3 + 0x3c6),0xff,local_102,unaff_SS);
  FUN_1090_1a5e(&stack0xfffe,100,DAT_1160_0484,*(undefined2 *)(iVar3 + 0x3cc),
                *(undefined2 *)(iVar3 + 0x3ce),0xff,local_102,unaff_SS);
  if (local_102[0] != '\0') {
    puVar2 = (undefined4 *)*(undefined4 *)(local_108 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)((char *)s_sThousand_1160_1088 + 8,(undefined4 *)puVar2,
                       (int)((ulong)puVar2 >> 0x10),local_102);
  }
  local_102[0] = '\0';
  FUN_1090_1a5e(&stack0xfffe,0x67,DAT_1160_0480,*(undefined2 *)(iVar3 + 0x3c8),
                *(undefined2 *)(iVar3 + 0x3ca),0xff,local_102,unaff_SS);
  FUN_1090_1a5e(&stack0xfffe,100,DAT_1160_0484,*(undefined2 *)(iVar3 + 0x3d0),
                *(undefined2 *)(iVar3 + 0x3d2),0xff,local_102,unaff_SS);
  if (local_102[0] != '\0') {
    puVar2 = (undefined4 *)*(undefined4 *)(local_108 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)((char *)s_sThousand_1160_1088 + 8,(undefined4 *)puVar2,
                       (int)((ulong)puVar2 >> 0x10),local_102);
  }
  return;
}



/* ---- FUN_1090_36a1 @ 1090:36a1  (55 octets) ---- */

void __cdecl16far FUN_1090_36a1(undefined4 param_1)

{
  char *pcVar1;
  undefined2 uStack_a;
  
  uStack_a = 0x36ae;
  FUN_1090_3745();
  uStack_a = DAT_1160_1858;
  DAT_1160_1858 = (char *)&uStack_a;
  pcVar1 = (char *)s_sThousand_1160_1088 + 8;
  EMPTYCLIPBOARD();
  DAT_1160_1858 = pcVar1;
  uStack_a = (int)((ulong)param_1 >> 0x10);
  FUN_1090_3703((int)param_1);
  return;
}



/* ---- FUN_1090_36dc @ 1090:36dc  (39 octets) ---- */

void __stdcall16far FUN_1090_36dc(undefined4 param_1)

{
  int iVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  if ((*(int *)(iVar1 + 4) != 0) && (*(char *)(iVar1 + 9) == '\0')) {
    FUN_1090_36a1(iVar1,uVar2);
    *(undefined *)(iVar1 + 9) = 1;
  }
  return;
}



/* ---- FUN_1090_3703 @ 1090:3703  (66 octets) ---- */

void __stdcall16far FUN_1090_3703(undefined4 param_1)

{
  int iVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  if ((*(int *)(iVar1 + 4) != 0) &&
     (*(int *)(iVar1 + 4) = *(int *)(iVar1 + 4) + -1, *(int *)(iVar1 + 4) == 0)) {
    CLOSECLIPBOARD();
    if (*(char *)(iVar1 + 8) != '\0') {
      FUN_1140_166c(*(undefined2 *)(iVar1 + 6));
    }
    *(undefined2 *)(iVar1 + 6) = 0;
  }
  return;
}



/* ---- FUN_1090_3745 @ 1090:3745  (93 octets) ---- */

void __stdcall16far FUN_1090_3745(undefined4 param_1)

{
  undefined2 uVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 unaff_CS;
  
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  iVar2 = (int)param_1;
  if (*(int *)(iVar2 + 4) == 0) {
    *(undefined2 *)(iVar2 + 6) = *(undefined2 *)((int)DAT_1160_2c2a + 0x1a);
    if (*(int *)(iVar2 + 6) == 0) {
      unaff_CS = 0x1140;
      uVar1 = FUN_1140_15ed(0x37a2,(char *)s_sThousand_1160_1088 + 8,iVar2,uVar3);
      *(undefined2 *)(iVar2 + 6) = uVar1;
      *(undefined *)(iVar2 + 8) = 1;
    }
    OPENCLIPBOARD(unaff_CS,*(undefined2 *)(iVar2 + 6));
    *(undefined *)(iVar2 + 9) = 0;
  }
  *(int *)(iVar2 + 4) = *(int *)(iVar2 + 4) + 1;
  return;
}



/* ---- FUN_1090_37a2 @ 1090:37a2  (58 octets) ---- */

void __stdcall16far FUN_1090_37a2(undefined2 param_1,undefined2 param_2_00,undefined2 *param_2)

{
  undefined2 *puVar1;
  undefined2 uVar2;
  undefined2 unaff_CS;
  undefined4 uVar3;
  
  uVar2 = (undefined2)((ulong)param_2 >> 0x10);
  puVar1 = (undefined2 *)param_2;
  uVar3 = DEFWINDOWPROC(unaff_CS,puVar1[2],puVar1[3],puVar1[1],*param_2);
  puVar1[4] = (int)uVar3;
  puVar1[5] = (int)((ulong)uVar3 >> 0x10);
  return;
}



/* ---- FUN_1090_37f2 @ 1090:37f2  (146 octets) ---- */

void __cdecl16far
FUN_1090_37f2(undefined4 param_1,int param_2,undefined4 param_3,undefined2 param_4)

{
  undefined2 uVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined *puStack_24;
  undefined *puStack_22;
  undefined2 uStack_20;
  undefined2 uStack_1e;
  undefined *puStack_1c;
  undefined *puStack_1a;
  char *pcStack_18;
  int iStack_16;
  int iStack_14;
  undefined2 uStack_12;
  undefined2 uStack_10;
  
  uStack_10 = 0x3800;
  FUN_1090_3745();
  uStack_10 = DAT_1160_1858;
  uStack_12 = 2;
  iStack_14 = param_2 >> 0xf;
  iStack_16 = param_2;
  pcStack_18 = (char *)s_sThousand_1160_1088 + 8;
  puStack_1a = (undefined *)0x381b;
  DAT_1160_1858 = (undefined **)&uStack_10;
  puVar2 = (undefined *)GLOBALALLOC();
  iStack_14 = 0x14d0;
  iStack_16 = 0x37e2;
  puStack_1a = (undefined *)DAT_1160_1858;
  uStack_1e = 0x14d0;
  uStack_20 = 0x3834;
  DAT_1160_1858 = &puStack_1a;
  puStack_1c = puVar2;
  pcStack_18 = &stack0xfffe;
  uVar3 = GLOBALLOCK();
  uStack_1e = 0x14d0;
  uStack_20 = 0x37dc;
  puStack_24 = (undefined *)DAT_1160_1858;
  DAT_1160_1858 = &puStack_24;
  puStack_22 = &stack0xfffe;
  FUN_1158_1ec1(param_2,uVar3,(int)param_3,(int)((ulong)param_3 >> 0x10));
  FUN_1090_36dc((int)param_1,(int)((ulong)param_1 >> 0x10));
  uVar1 = param_4;
  SETCLIPBOARDDATA((char *)s_sThousand_1160_1088 + 8,puVar2);
  DAT_1160_1858 = (undefined **)uVar1;
  uStack_20 = 0x14d0;
  puStack_22 = (undefined *)0x3884;
  puStack_24 = puVar2;
  GLOBALUNLOCK(0x14d0);
  return;
}



/* ---- FUN_1090_38c6 @ 1090:38c6  (188 octets) ---- */

undefined2 __stdcall16far
FUN_1090_38c6(undefined2 param_1,undefined2 param_2_00,uint param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined *puStack_20;
  undefined *puStack_1e;
  undefined2 uStack_1c;
  undefined2 uStack_1a;
  char *pcStack_18;
  undefined2 uStack_16;
  undefined2 uStack_14;
  uint local_4;
  
  uStack_14 = 0x38d9;
  FUN_1090_3745();
  uStack_14 = DAT_1160_1858;
  uStack_16 = 1;
  pcStack_18 = (char *)s_sThousand_1160_1088 + 8;
  uStack_1a = 0x38ee;
  DAT_1160_1858 = (undefined **)&uStack_14;
  iVar1 = GETCLIPBOARDDATA();
  if (iVar1 == 0) {
    pcStack_18 = (char *)0x14d0;
    uStack_1a = 0x38fc;
    FUN_1158_146a();
    return 0;
  }
  uStack_1a = 0x14d0;
  uStack_1c = 0x3907;
  pcStack_18 = (char *)iVar1;
  uVar4 = GLOBALLOCK();
  uStack_1a = 0x14d0;
  uStack_1c = 0x38ba;
  puStack_20 = (undefined *)DAT_1160_1858;
  local_4 = param_2;
  iVar6 = 0x14d0;
  DAT_1160_1858 = &puStack_20;
  puStack_1e = &stack0xfffe;
  uVar5 = GLOBALSIZE(0x14d0,iVar1);
  iVar2 = (int)((ulong)uVar5 >> 0x10);
  if ((iVar2 < (int)param_2 >> 0xf) || ((iVar2 <= (int)param_2 >> 0xf && ((uint)uVar5 < param_2))))
  {
    iVar6 = iVar1;
    local_4 = GLOBALSIZE(0x14d0);
  }
  uVar3 = (undefined2)((ulong)param_3 >> 0x10);
  FUN_1158_1ec1(local_4,(int)param_3,uVar3,uVar4);
  FUN_1150_0c8c((int)param_3,uVar3);
  DAT_1160_1858 = (undefined **)iVar6;
  puStack_1e = (undefined *)0x1150;
  puStack_20 = (undefined *)0x397b;
  uVar3 = GLOBALUNLOCK(0x1150,iVar1);
  return uVar3;
}



/* ---- FUN_1090_3999 @ 1090:3999  (37 octets) ---- */

void __stdcall16far FUN_1090_3999(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  
  uVar4 = 1;
  uVar3 = (undefined2)((ulong)param_2 >> 0x10);
  uVar2 = (undefined2)param_2;
  iVar1 = FUN_1150_0c8c(uVar2,uVar3);
  FUN_1090_37f2((int)param_1,(int)((ulong)param_1 >> 0x10),iVar1 + 1,uVar2,uVar3,uVar4);
  return;
}



/* ---- FUN_1090_39be @ 1090:39be  (35 octets) ---- */

void __stdcall16far FUN_1090_39be(undefined4 param_1,undefined *param_2)

{
  undefined uVar1;
  
  uVar1 = FUN_1090_38c6((int)param_1,(int)((ulong)param_1 >> 0x10),0xff,(undefined *)param_2 + 1,
                        (int)((ulong)param_2 >> 0x10));
  *param_2 = uVar1;
  return;
}



/* ---- FUN_1090_39e7 @ 1090:39e7  (188 octets) ---- */

void __stdcall16far FUN_1090_39e7(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  undefined extraout_AH;
  undefined2 unaff_SS;
  undefined4 uVar2;
  undefined2 uVar3;
  undefined *puVar4;
  int iVar5;
  undefined2 uVar6;
  undefined2 uStack_110;
  undefined local_108 [256];
  undefined2 local_8;
  int local_6;
  undefined2 local_4;
  
  uStack_110 = 0x39f5;
  FUN_1090_3745();
  uStack_110 = DAT_1160_1858;
  uVar6 = 0;
  DAT_1160_1858 = &uStack_110;
  local_6 = ENUMCLIPBOARDFORMATS((char *)s_sThousand_1160_1088 + 8,0);
  while( true ) {
    if (local_6 == 0) {
      puVar4 = local_108;
      FUN_1150_092b(0xf0a7);
      uVar2 = FUN_1150_28e6(0x2e,0x1150,CONCAT11(extraout_AH,1),puVar4,unaff_SS);
      uVar6 = (int)uVar2;
      FUN_1158_1399(0x1150,uVar2);
      DAT_1160_1858 = (undefined2 *)uVar6;
      uStack_110 = 0x1158;
      FUN_1090_3703((int)param_1,(int)((ulong)param_1 >> 0x10));
      return;
    }
    cVar1 = FUN_1128_44e1(0x6c6,0x1128,local_6);
    if (cVar1 != '\0') break;
    local_6 = ENUMCLIPBOARDFORMATS(0x1128,local_6);
  }
  iVar5 = local_6;
  local_4 = GETCLIPBOARDDATA(0x1128,local_6);
  uVar3 = 9;
  local_8 = GETCLIPBOARDDATA(0x14d0,9);
  FUN_1128_43c0((int)param_2,(int)((ulong)param_2 >> 0x10),local_8,local_4,local_6);
  FUN_1158_146a(uVar3,iVar5,uVar6);
  return;
}



/* ---- FUN_1090_3aa9 @ 1090:3aa9  (91 octets) ---- */

void __cdecl16far FUN_1090_3aa9(undefined4 param_1,undefined4 *param_2)

{
  undefined2 *puVar1;
  undefined4 *puVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined2 uStack_10;
  
  uStack_10 = 0x3ab7;
  FUN_1090_3745();
  uStack_10 = DAT_1160_1858;
  DAT_1160_1858 = (undefined4 *)&uStack_10;
  uVar3 = GETCLIPBOARDDATA((char *)s_sThousand_1160_1088 + 8,2);
  uVar4 = GETCLIPBOARDDATA(0x14d0,9);
  puVar1 = (undefined2 *)((int)*param_2 + 0x40);
  puVar2 = (undefined4 *)param_2;
  (*(code *)*puVar1)(0x14d0,(undefined4 *)param_2,(int)((ulong)param_2 >> 0x10),uVar4,uVar3,2);
  DAT_1160_1858 = puVar2;
  FUN_1090_3703((int)param_1,(int)((ulong)param_1 >> 0x10));
  return;
}



/* ---- FUN_1090_3b0e @ 1090:3b0e  (91 octets) ---- */

void __cdecl16far FUN_1090_3b0e(undefined4 param_1,undefined4 *param_2)

{
  undefined2 *puVar1;
  undefined4 *puVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined2 uStack_10;
  
  uStack_10 = 0x3b1c;
  FUN_1090_3745();
  uStack_10 = DAT_1160_1858;
  DAT_1160_1858 = (undefined4 *)&uStack_10;
  uVar3 = GETCLIPBOARDDATA((char *)s_sThousand_1160_1088 + 8,3);
  uVar4 = GETCLIPBOARDDATA(0x14d0,9);
  puVar1 = (undefined2 *)((int)*param_2 + 0x40);
  puVar2 = (undefined4 *)param_2;
  (*(code *)*puVar1)(0x14d0,(undefined4 *)param_2,(int)((ulong)param_2 >> 0x10),uVar4,uVar3,3);
  DAT_1160_1858 = puVar2;
  FUN_1090_3703((int)param_1,(int)((ulong)param_1 >> 0x10));
  return;
}



/* ---- FUN_1090_3b6d @ 1090:3b6d  (146 octets) ---- */

void __stdcall16far FUN_1090_3b6d(undefined4 param_1,undefined2 param_2,undefined2 param_3)

{
  char cVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  
  cVar1 = FUN_1158_2255(0x6c6,0x1128,param_2,param_3);
  uVar2 = (undefined2)param_1;
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  if (cVar1 == '\0') {
    cVar1 = FUN_1158_2255(0x83f,0x1128,param_2,param_3);
    if (cVar1 == '\0') {
      cVar1 = FUN_1158_2255(0x749,0x1128,param_2,param_3);
      if (cVar1 == '\0') {
        FUN_1148_11cd(uVar2,uVar3,param_2,param_3);
      }
      else {
        FUN_1090_3b0e(uVar2,uVar3,param_2,param_3);
      }
    }
    else {
      FUN_1090_3aa9(uVar2,uVar3,param_2,param_3);
    }
  }
  else {
    FUN_1090_39e7(uVar2,uVar3,param_2,param_3);
  }
  return;
}



/* ---- FUN_1090_3c05 @ 1090:3c05  (118 octets) ---- */

void __cdecl16far FUN_1090_3c05(undefined4 param_1,undefined4 param_2)

{
  undefined2 uVar1;
  undefined2 unaff_SS;
  undefined2 uVar2;
  undefined2 uStack_10;
  int local_8;
  undefined local_6 [2];
  undefined2 local_4;
  
  uVar1 = (undefined2)((ulong)param_1 >> 0x10);
  uStack_10 = 0x3c13;
  FUN_1090_3745();
  uStack_10 = DAT_1160_1858;
  DAT_1160_1858 = &uStack_10;
  FUN_1090_36dc((int)param_1,uVar1);
  local_8 = 0;
  FUN_1128_44ae((int)param_2,(int)((ulong)param_2 >> 0x10),&local_8,unaff_SS,&local_4,unaff_SS,
                local_6,unaff_SS);
  SETCLIPBOARDDATA(0x1128,local_4);
  uVar2 = local_4;
  if (local_8 != 0) {
    uVar2 = 9;
    SETCLIPBOARDDATA(0x14d0,local_8);
  }
  DAT_1160_1858 = (undefined2 *)uVar2;
  uStack_10 = 0x3c7b;
  FUN_1090_3703((int)param_1,uVar1);
  return;
}



/* ---- FUN_1090_3c85 @ 1090:3c85  (120 octets) ---- */

void __cdecl16far FUN_1090_3c85(undefined4 param_1,undefined4 *param_2)

{
  undefined2 *puVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 uStack_10;
  int local_8 [2];
  undefined2 local_4;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  uStack_10 = 0x3c93;
  FUN_1090_3745();
  uStack_10 = DAT_1160_1858;
  DAT_1160_1858 = &uStack_10;
  FUN_1090_36dc((int)param_1,uVar2);
  local_8[0] = 0;
  puVar1 = (undefined2 *)((int)*param_2 + 0x44);
  (*(code *)*puVar1)((char *)s_sThousand_1160_1088 + 8,(undefined4 *)param_2,
                     (int)((ulong)param_2 >> 0x10),local_8);
  SETCLIPBOARDDATA((char *)s_sThousand_1160_1088 + 8,local_4);
  uVar3 = local_4;
  if (local_8[0] != 0) {
    uVar3 = 9;
    SETCLIPBOARDDATA(0x14d0,local_8[0]);
  }
  DAT_1160_1858 = (undefined2 *)uVar3;
  FUN_1090_3703((int)param_1,uVar2);
  return;
}



/* ---- FUN_1090_3d01 @ 1090:3d01  (105 octets) ---- */

void __stdcall16far FUN_1090_3d01(undefined4 param_1,undefined2 param_2,undefined2 param_3)

{
  char cVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  
  cVar1 = FUN_1158_2255(0x6c6,0x1128,param_2,param_3);
  uVar2 = (undefined2)param_1;
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  if (cVar1 == '\0') {
    cVar1 = FUN_1158_2255(0x636,0x1128,param_2,param_3);
    if (cVar1 == '\0') {
      FUN_1148_10fa(uVar2,uVar3,param_2,param_3);
    }
    else {
      FUN_1090_3c85(uVar2,uVar3,param_2,param_3);
    }
  }
  else {
    FUN_1090_3c05(uVar2,uVar3,param_2,param_3);
  }
  return;
}



/* ---- FUN_1090_3d6a @ 1090:3d6a  (16 octets) ---- */

void __cdecl16far FUN_1090_3d6a(void)

{
  FUN_1158_1f7f((int)DAT_1160_2ad0,(int)((ulong)DAT_1160_2ad0 >> 0x10));
  return;
}



/* ---- FUN_1090_3d7a @ 1090:3d7a  (67 octets) ---- */

void __cdecl16far FUN_1090_3d7a(void)

{
  undefined2 unaff_CS;
  
  DAT_1160_2acc = REGISTERCLIPBOARDFORMAT(unaff_CS,0xbfe);
  DAT_1160_2ace = REGISTERCLIPBOARDFORMAT(0x14d0,0xc0d);
  DAT_1160_2ad0 = FUN_1158_1f50(0x3664,(char *)s_sThousand_1160_1088 + 8,1);
  FUN_1150_0574(0x3d6a,(char *)s_sThousand_1160_1088 + 8);
  return;
}




/* Simstrat (FR).EXE - segment Code17 - 24 fonctions
   Decompile par Ghidra 11.2.1 (x86 16 bits, chargeur NE). */

/* ---- FUN_1080_07e2 @ 1080:07e2  (43 octets) ---- */

void __stdcall16far FUN_1080_07e2(undefined4 param_1)

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



/* ---- FUN_1080_0ac8 @ 1080:0ac8  (31 octets) ---- */

void __stdcall16far FUN_1080_0ac8(undefined4 param_1,undefined *param_2)

{
  FUN_1158_0444();
  FUN_1080_0d5f((int)param_1,(int)((ulong)param_1 >> 0x10));
  *param_2 = 2;
  return;
}



/* ---- FUN_1080_0b02 @ 1080:0b02  (469 octets) ---- */

void __stdcall16far FUN_1080_0b02(undefined4 param_1,undefined4 param_2)

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
  
  local_6 = 0xb0d;
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
      FUN_10e0_60f9(local_10e,0xafc,0x1158);
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
      FUN_10e0_60f9(local_10e,0xaf1,0x1128);
    }
    else {
      FUN_1158_17e7(0xff,local_106,unaff_SS,0xae7,0x1128);
      while( true ) {
        pbVar8 = local_106;
        uVar9 = unaff_SS;
        uVar5 = FUN_1140_33d5(uVar3,uVar4);
        iVar2 = FUN_1128_2003(uVar5,pbVar8,uVar9);
        if (0xb < local_106[0] || *(int *)(local_10a + 0x22) <= iVar2) break;
        FUN_1158_1916(3,0xff,local_106,unaff_SS,0xaef,0x1128);
      }
      if (7 < local_106[0]) {
        FUN_1158_1975(1,3,local_106,unaff_SS);
      }
      FUN_10e0_60f9(local_10e,local_106,unaff_SS);
    }
  }
  return;
}



/* ---- FUN_1080_0cd7 @ 1080:0cd7  (136 octets) ---- */

void __stdcall16far FUN_1080_0cd7(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined4 uVar6;
  undefined2 uVar7;
  
  uVar7 = 0xce2;
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
        FUN_1080_0b02(uVar4,uVar5,uVar6);
      }
      if (iVar2 == iVar3) break;
      iVar2 = iVar2 + 1;
    }
  }
  return;
}



/* ---- FUN_1080_0d5f @ 1080:0d5f  (74 octets) ---- */

void __stdcall16far FUN_1080_0d5f(undefined4 param_1)

{
  int iVar1;
  undefined2 uVar2;
  
  FUN_1158_0444();
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  FUN_10d8_31d2((int)*(undefined4 *)(iVar1 + 0x1a0),
                (int)((ulong)*(undefined4 *)(iVar1 + 0x1a0) >> 0x10));
  FUN_10d8_31d2((int)*(undefined4 *)(iVar1 + 0x1a8),
                (int)((ulong)*(undefined4 *)(iVar1 + 0x1a8) >> 0x10));
  FUN_10d8_31d2((int)*(undefined4 *)(iVar1 + 0x1b8),
                (int)((ulong)*(undefined4 *)(iVar1 + 0x1b8) >> 0x10));
  FUN_10d8_31d2((int)*(undefined4 *)(iVar1 + 0x1bc),
                (int)((ulong)*(undefined4 *)(iVar1 + 0x1bc) >> 0x10));
  return;
}



/* ---- FUN_1080_0da9 @ 1080:0da9  (238 octets) ---- */

void __stdcall16far FUN_1080_0da9(undefined4 param_1)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  
  FUN_1158_0444();
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  uVar4 = (undefined2)((ulong)*(undefined4 *)(iVar1 + 0x1a0) >> 0x10);
  uVar2 = (undefined2)*(undefined4 *)(iVar1 + 0x1a0);
  FUN_10d8_31d2(uVar2,uVar4);
  FUN_10e0_2ffb(uVar2,uVar4,1);
  FUN_10e0_2ed2(uVar2,uVar4,0);
  FUN_10d8_31bf(uVar2,uVar4);
  uVar4 = (undefined2)((ulong)*(undefined4 *)(iVar1 + 0x1a8) >> 0x10);
  uVar2 = (undefined2)*(undefined4 *)(iVar1 + 0x1a8);
  FUN_10d8_31d2(uVar2,uVar4);
  FUN_10e0_2ffb(uVar2,uVar4,1);
  FUN_10e0_2ed2(uVar2,uVar4,0);
  FUN_10d8_31bf(uVar2,uVar4);
  uVar4 = (undefined2)((ulong)*(undefined4 *)(iVar1 + 0x1b8) >> 0x10);
  uVar2 = (undefined2)*(undefined4 *)(iVar1 + 0x1b8);
  FUN_10d8_31d2(uVar2,uVar4);
  FUN_10e0_2ffb(uVar2,uVar4,1);
  FUN_10e0_2ed2(uVar2,uVar4,0);
  FUN_10d8_31bf(uVar2,uVar4);
  uVar4 = (undefined2)((ulong)*(undefined4 *)(iVar1 + 0x1bc) >> 0x10);
  uVar2 = (undefined2)*(undefined4 *)(iVar1 + 0x1bc);
  FUN_10d8_31d2(uVar2,uVar4);
  FUN_10e0_2ffb(uVar2,uVar4,1);
  FUN_10e0_2ed2(uVar2,uVar4,0);
  FUN_10d8_31bf(uVar2,uVar4);
  return;
}



/* ---- FUN_1080_0eab @ 1080:0eab  (749 octets) ---- */

void __stdcall16far FUN_1080_0eab(char *param_1)

{
  char cVar1;
  char *pcVar2;
  undefined2 uVar3;
  undefined2 unaff_SS;
  char *pcStack_20c;
  int local_120;
  int local_11e;
  undefined local_11c;
  int local_118;
  int local_116;
  undefined local_114;
  int local_110;
  int local_10e;
  undefined local_10c;
  undefined4 local_108;
  char local_104 [254];
  undefined2 uStack_6;
  
  uStack_6 = 0xeb6;
  FUN_1158_0444();
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  pcVar2 = (char *)param_1;
  pcStack_20c = *(char **)(pcVar2 + 0x39a);
  FUN_1150_08a9();
  pcStack_20c = (char *)*(char **)(pcVar2 + 400);
  FUN_1138_1d8c();
  pcStack_20c = *(char **)(pcVar2 + 0x398);
  FUN_1150_08a9();
  pcStack_20c = (char *)*(char **)(pcVar2 + 0x198);
  FUN_1138_1d8c();
  pcStack_20c = local_104;
  FUN_1158_17e7(0xff);
  pcStack_20c = local_104;
  FUN_1158_1878();
  cVar1 = FUN_1158_0416();
  if (cVar1 != '\0') {
    pcStack_20c = (char *)0x1;
    FUN_1158_1975();
    pcStack_20c = *(char **)(pcVar2 + 0x39a);
    FUN_1150_08a9();
    pcStack_20c = local_104;
    FUN_1158_1916(cVar1,0xff);
  }
  pcStack_20c = local_104;
  FUN_1158_1878();
  cVar1 = FUN_1158_0416();
  if (cVar1 != '\0') {
    pcStack_20c = (char *)0x1;
    FUN_1158_1975();
    pcStack_20c = *(char **)(pcVar2 + 0x398);
    FUN_1150_08a9();
    pcStack_20c = local_104;
    FUN_1158_1916(cVar1,0xff);
  }
  pcStack_20c = pcVar2;
  FUN_1138_1d8c();
  pcStack_20c = (char *)DAT_1160_1858;
  local_108 = *(undefined4 *)(pcVar2 + 0x1a0);
  local_118 = *(int *)(pcVar2 + 0x398);
  local_116 = local_118 >> 0xf;
  local_114 = 0;
  local_110 = *(int *)(pcVar2 + 0x39a);
  local_10e = local_110 >> 0xf;
  local_10c = 0;
  DAT_1160_1858 = &pcStack_20c;
  cVar1 = FUN_10e0_2895((int)local_108,(int)((ulong)local_108 >> 0x10),1,&local_118,unaff_SS);
  if (cVar1 == '\0') {
    FUN_1080_07e2(pcVar2,uVar3);
  }
  local_108 = *(undefined4 *)(pcVar2 + 0x1a8);
  local_118 = *(int *)(pcVar2 + 0x398);
  local_116 = local_118 >> 0xf;
  local_114 = 0;
  local_110 = *(int *)(pcVar2 + 0x39a);
  local_10e = local_110 >> 0xf;
  local_10c = 0;
  cVar1 = FUN_10e0_2895((int)local_108,(int)((ulong)local_108 >> 0x10),1,&local_118,unaff_SS);
  if (cVar1 == '\0') {
    FUN_1080_07e2(pcVar2,uVar3);
  }
  local_108 = *(undefined4 *)(pcVar2 + 0x1b8);
  local_120 = *(int *)(pcVar2 + 0x398);
  local_11e = local_120 >> 0xf;
  local_11c = 0;
  local_118 = *(int *)(pcVar2 + 0x39a);
  local_116 = local_118 >> 0xf;
  local_114 = 0;
  local_110 = 1;
  local_10e = 0;
  local_10c = 0;
  cVar1 = FUN_10e0_2895((int)local_108,(int)((ulong)local_108 >> 0x10),2,&local_120,unaff_SS);
  if (cVar1 == '\0') {
    FUN_1080_07e2(pcVar2,uVar3);
  }
  local_108 = *(undefined4 *)(pcVar2 + 0x1bc);
  local_120 = *(int *)(pcVar2 + 0x398);
  local_11e = local_120 >> 0xf;
  local_11c = 0;
  local_118 = *(int *)(pcVar2 + 0x39a);
  local_116 = local_118 >> 0xf;
  local_114 = 0;
  local_110 = 2;
  local_10e = 0;
  local_10c = 0;
  cVar1 = FUN_10e0_2895((int)local_108,(int)((ulong)local_108 >> 0x10),2,&local_120,unaff_SS);
  if (cVar1 == '\0') {
    FUN_1080_07e2(pcVar2,uVar3);
  }
  DAT_1160_1858 = (char **)pcStack_20c;
  pcStack_20c = (char *)s_Runtime_error_000_at_0000_0000__1160_118f + 0x1f;
  FUN_1080_0cd7();
  return;
}



/* ---- FUN_1080_11b8 @ 1080:11b8  (322 octets) ---- */

void __stdcall16far FUN_1080_11b8(char param_1,undefined2 param_2,undefined2 param_3)

{
  uint uVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 unaff_CS;
  undefined2 uStack_1e;
  undefined2 *puStack_1c;
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
  
  _local_6 = CONCAT22(unaff_CS,0x11c3);
  FUN_1158_0444();
  uStack_e = (undefined2)((ulong)DAT_1160_2c2a >> 0x10);
  uStack_10 = (undefined2)DAT_1160_2c2a;
  uStack_12 = 0x1158;
  uStack_14 = 0x11d1;
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
  uStack_14 = 0x1080;
  uStack_16 = 0x22;
  uStack_18 = 0x1140;
  uStack_1a = 0x1214;
  local_c = FUN_1140_2553();
  uVar3 = (undefined2)((ulong)local_c >> 0x10);
  local_6 = (int)local_c;
  uStack_18 = 0x1140;
  uStack_1a = 0x11b2;
  uStack_1e = DAT_1160_1858;
  DAT_1160_1858 = &uStack_1e;
  puStack_1c = (undefined2 *)&stack0xfffe;
  FUN_1080_0da9(local_c);
  *(undefined2 *)((int)local_c + 0x398) = param_3;
  *(undefined2 *)((int)local_c + 0x39a) = param_2;
  FUN_1080_0eab(local_c);
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
    FUN_1080_1412(local_6,uVar3);
  }
  FUN_1140_7303((int)DAT_1160_2c2a,(int)((ulong)DAT_1160_2c2a >> 0x10));
  DAT_1160_1858 = (undefined2 *)uVar2;
  uStack_1a = 0x1140;
  puStack_1c = (undefined2 *)&DAT_1160_12f6;
  uStack_1e = uVar3;
  FUN_1140_5f1d(local_6);
  return;
}



/* ---- FUN_1080_1300 @ 1080:1300  (170 octets) ---- */

void __cdecl16far FUN_1080_1300(undefined2 param_1,undefined2 param_2)

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
  
  _local_6 = CONCAT22(unaff_CS,0x130b);
  FUN_1158_0444();
  uStack_c = (undefined2)((ulong)DAT_1160_2c2a >> 0x10);
  uStack_e = (undefined2)DAT_1160_2c2a;
  uStack_10 = 0x1158;
  uStack_12 = 0x1319;
  FUN_1140_7303();
  uStack_c = DAT_1160_2c2a._2_2_;
  uStack_e = (undefined2)DAT_1160_2c2a;
  uStack_10 = CONCAT11(extraout_AH,1);
  uStack_12 = 0x1080;
  uStack_14 = 0x22;
  uStack_16 = 0x1140;
  uStack_18 = 0x1331;
  local_a = FUN_1140_2553();
  uVar1 = (ulong)local_a >> 0x10;
  local_6 = (undefined2)local_a;
  uStack_16 = 0x1140;
  uStack_18 = 0x12fa;
  uStack_1c = DAT_1160_1858;
  DAT_1160_1858 = &uStack_1c;
  puStack_1a = &stack0xfffe;
  FUN_1080_0da9(local_a);
  *(undefined2 *)((int)local_a + 0x398) = param_2;
  *(undefined2 *)((int)local_a + 0x39a) = param_1;
  FUN_1080_0eab(local_a);
  FUN_1138_1ed5(local_a,0xfff0,0xffff);
  FUN_1140_3a14(local_a,2);
  uVar2 = (int)local_a;
  FUN_1140_5d45(local_a);
  DAT_1160_1858 = (undefined2 *)uVar2;
  puStack_1a = (undefined *)0x1140;
  uStack_1c = 0x13aa;
  FUN_1140_5f1d(local_6,(int)uVar1);
  return;
}



/* ---- FUN_1080_13b6 @ 1080:13b6  (69 octets) ---- */

undefined2 __stdcall16far FUN_1080_13b6(void)

{
  undefined2 uVar1;
  undefined2 unaff_SS;
  undefined4 uVar2;
  undefined local_24 [30];
  undefined2 uStack_6;
  
  uStack_6 = 0x13c1;
  FUN_1158_0444();
  uVar2 = FUN_10f0_2a04((int)DAT_1160_2c54,(int)((ulong)DAT_1160_2c54 >> 0x10));
  uVar1 = FUN_1128_21d2(uVar2);
  GETTEXTMETRICS(0x1128,local_24,unaff_SS);
  uVar1 = FUN_1158_0416(uVar1);
  return uVar1;
}



/* ---- FUN_1080_1412 @ 1080:1412  (1112 octets) ---- */

void __cdecl16far FUN_1080_1412(undefined4 param_1)

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
  undefined *puStack_416;
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
  
  local_6 = 0x141d;
  FUN_1158_0444();
  uVar9 = (undefined2)((ulong)param_1 >> 0x10);
  iVar6 = (int)param_1;
  uStack_418 = 0x1158;
  puStack_416 = (undefined *)iVar6;
  puStack_414 = (undefined *)uVar9;
  FUN_1080_1bd1();
  puStack_414 = local_106;
  puStack_416 = (undefined *)0x1080;
  uStack_418 = 0x1438;
  FUN_10f0_204e();
  puStack_414 = local_106;
  puStack_416 = (undefined *)0x10f0;
  uStack_418 = 0x1443;
  FUN_1158_09f5();
  puStack_414 = (undefined *)0x1448;
  FUN_1158_0408();
  puStack_414 = (undefined *)0x140c;
  uStack_418 = DAT_1160_1858;
  DAT_1160_1858 = (undefined4 *)&uStack_418;
  puStack_416 = &stack0xfffe;
  local_210 = FUN_10f0_2a04((int)DAT_1160_2c54,(int)((ulong)DAT_1160_2c54 >> 0x10));
  uVar11 = *(undefined4 *)((int)DAT_1160_18f6 + 0x2c8);
  uVar10 = (undefined2)((ulong)uVar11 >> 0x10);
  iVar7 = (int)uVar11;
  FUN_1128_2099(local_210,*(undefined2 *)(iVar7 + 0x34),*(undefined2 *)(iVar7 + 0x36));
  uVar10 = 2;
  uVar11 = FUN_10f0_2a04((int)DAT_1160_2c54,(int)((ulong)DAT_1160_2c54 >> 0x10));
  uVar11 = *(undefined4 *)((int)uVar11 + 7);
  FUN_1128_1278((int)uVar11,(int)((ulong)uVar11 >> 0x10),uVar10);
  uVar14 = 10;
  uVar11 = FUN_10f0_2a04((int)DAT_1160_2c54,(int)((ulong)DAT_1160_2c54 >> 0x10));
  uVar11 = *(undefined4 *)((int)uVar11 + 7);
  uVar10 = 0x1128;
  FUN_1128_11f5((int)uVar11,(int)((ulong)uVar11 >> 0x10),uVar14);
  iVar7 = 1;
  while( true ) {
    puVar13 = local_106;
    uVar14 = unaff_SS;
    FUN_1158_0db5(0,0x13fb,uVar10);
    FUN_1158_0c78(puVar13,uVar14);
    uVar10 = 0x1158;
    FUN_1158_0408();
    if (iVar7 == 3) break;
    iVar7 = iVar7 + 1;
  }
  local_210 = *(undefined4 *)(iVar6 + 0x394);
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
        local_6 = FUN_1158_1878(local_206,unaff_SS,0x13fc,0x1158);
        if (0 < local_6) {
          FUN_1158_1975(1,local_6,local_206,unaff_SS);
          FUN_1158_1916(local_6,0xff,local_206,unaff_SS,0x13fe,0x1158);
        }
      } while (local_6 != 0);
      puVar13 = local_312;
      uVar10 = unaff_SS;
      FUN_1158_17cd(0x1400,0x1158);
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
  uVar3 = FUN_1080_13b6(&stack0xfffe);
  if (0xfffd < uVar3) {
    FUN_1158_043e(0x1080);
  }
  local_208 = FUN_1158_0416();
  puVar13 = local_410;
  uVar14 = unaff_SS;
  FUN_1158_17cd(0x1400,0x1158);
  puVar12 = local_310;
  uVar10 = unaff_SS;
  FUN_1138_1d53((int)*(undefined4 *)(iVar6 + 0x37c),
                (int)((ulong)*(undefined4 *)(iVar6 + 0x37c) >> 0x10));
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
  FUN_1158_17cd(0x1400,0x1128);
  puVar12 = local_310;
  uVar10 = unaff_SS;
  FUN_1138_1d53((int)*(undefined4 *)(iVar6 + 0x380),
                (int)((ulong)*(undefined4 *)(iVar6 + 0x380) >> 0x10));
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
  FUN_1158_17cd(0x1400,0x1128);
  puVar12 = local_310;
  uVar10 = unaff_SS;
  FUN_1138_1d53((int)*(undefined4 *)(iVar6 + 900),(int)((ulong)*(undefined4 *)(iVar6 + 900) >> 0x10)
               );
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
  FUN_1158_17cd(0x1400,0x1128);
  puVar12 = local_310;
  uVar10 = unaff_SS;
  FUN_1138_1d53((int)*(undefined4 *)(iVar6 + 0x388),
                (int)((ulong)*(undefined4 *)(iVar6 + 0x388) >> 0x10));
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
  puStack_416 = (undefined *)0x1128;
  uStack_418 = 0x186a;
  FUN_1158_0a4f(local_106,unaff_SS);
  FUN_1158_0408();
  FUN_1120_49e3((int)*(undefined4 *)(iVar6 + 0x394),
                (int)((ulong)*(undefined4 *)(iVar6 + 0x394) >> 0x10));
  return;
}



/* ---- FUN_1080_1872 @ 1080:1872  (858 octets) ---- */

void __stdcall16far
FUN_1080_1872(int param_1,undefined param_2,int param_3,undefined4 param_4,undefined2 param_5,
             byte *param_6)

{
  char cVar1;
  int iVar2;
  byte *pbVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined2 unaff_SS;
  undefined *puVar6;
  undefined2 uVar7;
  undefined local_208 [4];
  undefined local_204 [252];
  undefined4 local_108;
  uint local_104;
  byte local_102;
  char local_101;
  undefined2 uStack_6;
  
  uStack_6 = 0x187d;
  FUN_1158_0444();
  uVar4 = (undefined2)((ulong)param_4 >> 0x10);
  iVar2 = (int)param_4;
  if (*(char *)(iVar2 + 0x29) != '\0') {
    local_102 = 0;
    pbVar3 = (byte *)param_6;
    uVar5 = (undefined2)((ulong)param_6 >> 0x10);
    if (*(int *)(param_1 + 10) == 0) {
      if (*param_6 != 0) {
        puVar6 = local_204;
        uVar7 = unaff_SS;
        FUN_1158_17cd(pbVar3,uVar5);
        FUN_1158_184c((undefined2 *)&DAT_1160_186e,0x1158);
        FUN_1158_17e7(param_5,pbVar3,uVar5,puVar6,uVar7);
      }
    }
    else if (*(int *)(param_1 + 10) == 1) {
      local_104 = (uint)*param_6;
      while ((int)local_104 < param_3) {
        local_104 = local_104 + 1;
        puVar6 = local_204;
        uVar7 = unaff_SS;
        FUN_1158_17cd(pbVar3,uVar5);
        FUN_1158_184c((undefined1 *)&DAT_1160_1870,0x1158);
        FUN_1158_17e7(param_5,pbVar3,uVar5,puVar6,uVar7);
      }
    }
    cVar1 = FUN_1158_2255(0x10c,0x1120,iVar2,uVar4);
    if (cVar1 != '\0') {
      local_108 = FUN_1158_2273(0x10c,0x1120,iVar2,uVar4);
      puVar6 = local_208;
      uVar7 = unaff_SS;
      FUN_1138_1d53(local_108);
      FUN_1158_17e7(0xff,&local_102,unaff_SS,puVar6,uVar7);
    }
    cVar1 = FUN_1158_2255(0xdad,0x1118,iVar2,uVar4);
    if (cVar1 != '\0') {
      local_108 = FUN_1158_2273(0xdad,0x1118,iVar2,uVar4);
      puVar6 = local_208;
      uVar7 = unaff_SS;
      FUN_1138_1d53(local_108);
      FUN_1158_17e7(0xff,&local_102,unaff_SS,puVar6,uVar7);
    }
    cVar1 = FUN_1158_2255(0x617,0x1120,iVar2,uVar4);
    if (cVar1 != '\0') {
      local_108 = FUN_1158_2273(0x617,0x1120,iVar2,uVar4);
      puVar6 = local_208;
      uVar7 = unaff_SS;
      FUN_1138_1d53(local_108);
      FUN_1158_17e7(0xff,&local_102,unaff_SS,puVar6,uVar7);
    }
    cVar1 = FUN_1158_2255(0x2c19,0x1120,iVar2,uVar4);
    if (cVar1 != '\0') {
      local_108 = FUN_1158_2273(0x2c19,0x1120,iVar2,uVar4);
      puVar6 = local_208;
      uVar7 = unaff_SS;
      FUN_1138_1d53(local_108);
      FUN_1158_17e7(0xff,&local_102,unaff_SS,puVar6,uVar7);
    }
    cVar1 = FUN_1158_2255(0x22,0x10d0,iVar2,uVar4);
    if (cVar1 != '\0') {
      local_108 = FUN_1158_2273(0x22,0x10d0,iVar2,uVar4);
      puVar6 = local_208;
      uVar7 = unaff_SS;
      FUN_1100_1524(local_108);
      FUN_1158_17e7(0xff,&local_102,unaff_SS,puVar6,uVar7);
    }
    cVar1 = FUN_1158_2255(0xb90,0x1120,iVar2,uVar4);
    if (cVar1 != '\0') {
      local_108 = FUN_1158_2273(0xb90,0x1120,iVar2,uVar4);
      puVar6 = local_208;
      uVar4 = unaff_SS;
      FUN_1138_1d53(local_108);
      FUN_1158_17e7(0xff,&local_102,unaff_SS,puVar6,uVar4);
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
        puVar6 = local_204;
        uVar4 = unaff_SS;
        FUN_1158_17cd((undefined1 *)&DAT_1160_1870,0x1158);
        FUN_1158_184c(&local_102,unaff_SS);
        FUN_1158_17e7(0xff,&local_102,unaff_SS,puVar6,uVar4);
      }
    }
    puVar6 = local_204;
    uVar4 = unaff_SS;
    FUN_1158_17cd(pbVar3,uVar5);
    FUN_1158_184c(&local_102,unaff_SS);
    FUN_1158_17e7(param_5,pbVar3,uVar5,puVar6,uVar4);
  }
  return;
}



/* ---- FUN_1080_1bd1 @ 1080:1bd1  (4717 octets) ---- */

void __stdcall16far FUN_1080_1bd1(undefined4 param_1,int param_2)

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
  int local_106;
  undefined2 local_104;
  char local_102 [252];
  undefined2 uStack_6;
  
  uStack_6 = 0x1bdc;
  FUN_1158_0444();
  uVar4 = (undefined2)((ulong)param_1 >> 0x10);
  iVar3 = (int)param_1;
  local_104 = (undefined2)((ulong)*(undefined4 *)(iVar3 + 0x394) >> 0x10);
  local_106 = (int)*(undefined4 *)(iVar3 + 0x394);
  FUN_1120_49e3(local_106,local_104);
  local_102[0] = '\0';
  FUN_1080_1872(&stack0xfffe,0x67,0,*(undefined2 *)(iVar3 + 0x184),*(undefined2 *)(iVar3 + 0x186),
                0xff,local_102,unaff_SS);
  puVar7 = local_206;
  uVar8 = unaff_SS;
  FUN_1158_17cd(local_102,unaff_SS);
  FUN_1158_184c(0x1bcc,0x1158);
  puVar5 = local_306;
  uVar6 = unaff_SS;
  FUN_1138_1d53((int)*(undefined4 *)(iVar3 + 0x188),
                (int)((ulong)*(undefined4 *)(iVar3 + 0x188) >> 0x10));
  FUN_1158_184c(puVar5,uVar6);
  FUN_1158_17e7(0xff,local_102,unaff_SS,puVar7,uVar8);
  puVar2 = (undefined4 *)*(undefined4 *)(local_106 + 0xec);
  puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
  (*(code *)*puVar1)(0x1158,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),local_102);
  if (param_2 == 1) {
    puVar2 = (undefined4 *)*(undefined4 *)(local_106 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)(0x1158,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),0x1bce,0x1158);
  }
  local_102[0] = '\0';
  FUN_1080_1872(&stack0xfffe,0x67,10,*(undefined2 *)(iVar3 + 0x18c),*(undefined2 *)(iVar3 + 0x18e),
                0xff,local_102,unaff_SS);
  puVar7 = local_206;
  uVar8 = unaff_SS;
  FUN_1158_17cd(local_102,unaff_SS);
  FUN_1158_184c(0x1bcf,0x1158);
  puVar5 = local_306;
  uVar6 = unaff_SS;
  FUN_1138_1d53((int)*(undefined4 *)(iVar3 + 400),(int)((ulong)*(undefined4 *)(iVar3 + 400) >> 0x10)
               );
  FUN_1158_184c(puVar5,uVar6);
  FUN_1158_17e7(0xff,local_102,unaff_SS,puVar7,uVar8);
  FUN_1080_1872(&stack0xfffe,0x67,0x23,*(undefined2 *)(iVar3 + 0x19c),*(undefined2 *)(iVar3 + 0x19e)
                ,0xff,local_102,unaff_SS);
  FUN_1080_1872(&stack0xfffe,0x67,0x46,*(undefined2 *)(iVar3 + 0x194),*(undefined2 *)(iVar3 + 0x196)
                ,0xff,local_102,unaff_SS);
  puVar7 = local_206;
  uVar8 = unaff_SS;
  FUN_1158_17cd(local_102,unaff_SS);
  FUN_1158_184c(0x1bcf,0x1158);
  puVar5 = local_306;
  uVar6 = unaff_SS;
  FUN_1138_1d53((int)*(undefined4 *)(iVar3 + 0x198),
                (int)((ulong)*(undefined4 *)(iVar3 + 0x198) >> 0x10));
  FUN_1158_184c(puVar5,uVar6);
  FUN_1158_17e7(0xff,local_102,unaff_SS,puVar7,uVar8);
  puVar2 = (undefined4 *)*(undefined4 *)(local_106 + 0xec);
  puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
  (*(code *)*puVar1)(0x1158,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),local_102);
  if (param_2 == 1) {
    puVar2 = (undefined4 *)*(undefined4 *)(local_106 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)(0x1158,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),0x1bce,0x1158);
  }
  local_102[0] = '\0';
  FUN_1080_1872(&stack0xfffe,0x67,DAT_1160_036a,*(undefined2 *)(iVar3 + 0x1c8),
                *(undefined2 *)(iVar3 + 0x1ca),0xff,local_102,unaff_SS);
  if (local_102[0] != '\0') {
    puVar2 = (undefined4 *)*(undefined4 *)(local_106 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)(0x1080,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),local_102);
  }
  local_102[0] = '\0';
  FUN_1080_1872(&stack0xfffe,0x67,DAT_1160_036c,*(undefined2 *)(iVar3 + 0x1d0),
                *(undefined2 *)(iVar3 + 0x1d2),0xff,local_102,unaff_SS);
  FUN_1080_1872(&stack0xfffe,100,DAT_1160_0370,*(undefined2 *)(iVar3 + 0x1d8),
                *(undefined2 *)(iVar3 + 0x1da),0xff,local_102,unaff_SS);
  if (local_102[0] != '\0') {
    puVar2 = (undefined4 *)*(undefined4 *)(local_106 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)(0x1080,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),local_102);
  }
  local_102[0] = '\0';
  FUN_1080_1872(&stack0xfffe,0x67,DAT_1160_036c,*(undefined2 *)(iVar3 + 0x1d4),
                *(undefined2 *)(iVar3 + 0x1d6),0xff,local_102,unaff_SS);
  FUN_1080_1872(&stack0xfffe,100,DAT_1160_0370,*(undefined2 *)(iVar3 + 0x1dc),
                *(undefined2 *)(iVar3 + 0x1de),0xff,local_102,unaff_SS);
  if (local_102[0] != '\0') {
    puVar2 = (undefined4 *)*(undefined4 *)(local_106 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)(0x1080,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),local_102);
  }
  local_102[0] = '\0';
  FUN_1080_1872(&stack0xfffe,0x67,DAT_1160_036c,*(undefined2 *)(iVar3 + 0x1e4),
                *(undefined2 *)(iVar3 + 0x1e6),0xff,local_102,unaff_SS);
  FUN_1080_1872(&stack0xfffe,100,DAT_1160_0370,*(undefined2 *)(iVar3 + 0x1ec),
                *(undefined2 *)(iVar3 + 0x1ee),0xff,local_102,unaff_SS);
  if (local_102[0] != '\0') {
    puVar2 = (undefined4 *)*(undefined4 *)(local_106 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)(0x1080,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),local_102);
  }
  local_102[0] = '\0';
  FUN_1080_1872(&stack0xfffe,0x67,DAT_1160_036c,*(undefined2 *)(iVar3 + 0x1e8),
                *(undefined2 *)(iVar3 + 0x1ea),0xff,local_102,unaff_SS);
  FUN_1080_1872(&stack0xfffe,100,DAT_1160_0370,*(undefined2 *)(iVar3 + 0x1f0),
                *(undefined2 *)(iVar3 + 0x1f2),0xff,local_102,unaff_SS);
  if (local_102[0] != '\0') {
    puVar2 = (undefined4 *)*(undefined4 *)(local_106 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)(0x1080,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),local_102);
  }
  local_102[0] = '\0';
  FUN_1080_1872(&stack0xfffe,0x67,DAT_1160_036c,*(undefined2 *)(iVar3 + 0x1f8),
                *(undefined2 *)(iVar3 + 0x1fa),0xff,local_102,unaff_SS);
  FUN_1080_1872(&stack0xfffe,100,DAT_1160_0370,*(undefined2 *)(iVar3 + 0x1fc),
                *(undefined2 *)(iVar3 + 0x1fe),0xff,local_102,unaff_SS);
  if (local_102[0] != '\0') {
    puVar2 = (undefined4 *)*(undefined4 *)(local_106 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)(0x1080,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),local_102);
  }
  if (param_2 == 1) {
    puVar2 = (undefined4 *)*(undefined4 *)(local_106 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)(0x1080,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),0x1bce,0x1080);
  }
  local_102[0] = '\0';
  FUN_1080_1872(&stack0xfffe,0x67,DAT_1160_036a,*(undefined2 *)(iVar3 + 0x200),
                *(undefined2 *)(iVar3 + 0x202),0xff,local_102,unaff_SS);
  if (local_102[0] != '\0') {
    puVar2 = (undefined4 *)*(undefined4 *)(local_106 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)(0x1080,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),local_102);
  }
  local_102[0] = '\0';
  FUN_1080_1872(&stack0xfffe,0x67,DAT_1160_036c,*(undefined2 *)(iVar3 + 0x204),
                *(undefined2 *)(iVar3 + 0x206),0xff,local_102,unaff_SS);
  FUN_1080_1872(&stack0xfffe,100,DAT_1160_0370,*(undefined2 *)(iVar3 + 0x20c),
                *(undefined2 *)(iVar3 + 0x20e),0xff,local_102,unaff_SS);
  if (local_102[0] != '\0') {
    puVar2 = (undefined4 *)*(undefined4 *)(local_106 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)(0x1080,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),local_102);
  }
  local_102[0] = '\0';
  FUN_1080_1872(&stack0xfffe,0x67,DAT_1160_036c,*(undefined2 *)(iVar3 + 0x208),
                *(undefined2 *)(iVar3 + 0x20a),0xff,local_102,unaff_SS);
  FUN_1080_1872(&stack0xfffe,100,DAT_1160_0370,*(undefined2 *)(iVar3 + 0x210),
                *(undefined2 *)(iVar3 + 0x212),0xff,local_102,unaff_SS);
  if (local_102[0] != '\0') {
    puVar2 = (undefined4 *)*(undefined4 *)(local_106 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)(0x1080,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),local_102);
  }
  local_102[0] = '\0';
  FUN_1080_1872(&stack0xfffe,0x67,DAT_1160_036c,*(undefined2 *)(iVar3 + 0x38c),
                *(undefined2 *)(iVar3 + 0x38e),0xff,local_102,unaff_SS);
  FUN_1080_1872(&stack0xfffe,100,DAT_1160_0370,*(undefined2 *)(iVar3 + 0x390),
                *(undefined2 *)(iVar3 + 0x392),0xff,local_102,unaff_SS);
  if (local_102[0] != '\0') {
    puVar2 = (undefined4 *)*(undefined4 *)(local_106 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)(0x1080,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),local_102);
  }
  if (param_2 == 1) {
    puVar2 = (undefined4 *)*(undefined4 *)(local_106 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)(0x1080,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),0x1bce,0x1080);
  }
  local_102[0] = '\0';
  FUN_1080_1872(&stack0xfffe,0x67,DAT_1160_036a,*(undefined2 *)(iVar3 + 0x21c),
                *(undefined2 *)(iVar3 + 0x21e),0xff,local_102,unaff_SS);
  FUN_1080_1872(&stack0xfffe,100,DAT_1160_0370,*(undefined2 *)(iVar3 + 0x224),
                *(undefined2 *)(iVar3 + 0x226),0xff,local_102,unaff_SS);
  FUN_1080_1872(&stack0xfffe,100,DAT_1160_0372,*(undefined2 *)(iVar3 + 0x24c),
                *(undefined2 *)(iVar3 + 0x24e),0xff,local_102,unaff_SS);
  if (local_102[0] != '\0') {
    puVar2 = (undefined4 *)*(undefined4 *)(local_106 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)(0x1080,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),local_102);
  }
  local_102[0] = '\0';
  FUN_1080_1872(&stack0xfffe,0x67,DAT_1160_036c,*(undefined2 *)(iVar3 + 0x234),
                *(undefined2 *)(iVar3 + 0x236),0xff,local_102,unaff_SS);
  FUN_1080_1872(&stack0xfffe,100,DAT_1160_0370,*(undefined2 *)(iVar3 + 0x238),
                *(undefined2 *)(iVar3 + 0x23a),0xff,local_102,unaff_SS);
  FUN_1080_1872(&stack0xfffe,100,DAT_1160_0372,*(undefined2 *)(iVar3 + 0x250),
                *(undefined2 *)(iVar3 + 0x252),0xff,local_102,unaff_SS);
  if (local_102[0] != '\0') {
    puVar2 = (undefined4 *)*(undefined4 *)(local_106 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)(0x1080,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),local_102);
  }
  local_102[0] = '\0';
  FUN_1080_1872(&stack0xfffe,0x67,DAT_1160_036c,*(undefined2 *)(iVar3 + 0x230),
                *(undefined2 *)(iVar3 + 0x232),0xff,local_102,unaff_SS);
  FUN_1080_1872(&stack0xfffe,100,DAT_1160_0370,*(undefined2 *)(iVar3 + 0x23c),
                *(undefined2 *)(iVar3 + 0x23e),0xff,local_102,unaff_SS);
  FUN_1080_1872(&stack0xfffe,100,DAT_1160_0372,*(undefined2 *)(iVar3 + 0x254),
                *(undefined2 *)(iVar3 + 0x256),0xff,local_102,unaff_SS);
  if (local_102[0] != '\0') {
    puVar2 = (undefined4 *)*(undefined4 *)(local_106 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)(0x1080,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),local_102);
  }
  local_102[0] = '\0';
  FUN_1080_1872(&stack0xfffe,0x67,DAT_1160_036c,*(undefined2 *)(iVar3 + 0x22c),
                *(undefined2 *)(iVar3 + 0x22e),0xff,local_102,unaff_SS);
  FUN_1080_1872(&stack0xfffe,100,DAT_1160_0370,*(undefined2 *)(iVar3 + 0x240),
                *(undefined2 *)(iVar3 + 0x242),0xff,local_102,unaff_SS);
  FUN_1080_1872(&stack0xfffe,100,DAT_1160_0372,*(undefined2 *)(iVar3 + 600),
                *(undefined2 *)(iVar3 + 0x25a),0xff,local_102,unaff_SS);
  if (local_102[0] != '\0') {
    puVar2 = (undefined4 *)*(undefined4 *)(local_106 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)(0x1080,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),local_102);
  }
  local_102[0] = '\0';
  FUN_1080_1872(&stack0xfffe,0x67,DAT_1160_036c,*(undefined2 *)(iVar3 + 0x228),
                *(undefined2 *)(iVar3 + 0x22a),0xff,local_102,unaff_SS);
  FUN_1080_1872(&stack0xfffe,100,DAT_1160_0370,*(undefined2 *)(iVar3 + 0x244),
                *(undefined2 *)(iVar3 + 0x246),0xff,local_102,unaff_SS);
  FUN_1080_1872(&stack0xfffe,100,DAT_1160_0372,*(undefined2 *)(iVar3 + 0x25c),
                *(undefined2 *)(iVar3 + 0x25e),0xff,local_102,unaff_SS);
  if (local_102[0] != '\0') {
    puVar2 = (undefined4 *)*(undefined4 *)(local_106 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)(0x1080,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),local_102);
  }
  if (param_2 == 1) {
    puVar2 = (undefined4 *)*(undefined4 *)(local_106 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)(0x1080,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),0x1bce,0x1080);
  }
  local_102[0] = '\0';
  FUN_1080_1872(&stack0xfffe,0x67,DAT_1160_036a,*(undefined2 *)(iVar3 + 0x260),
                *(undefined2 *)(iVar3 + 0x262),0xff,local_102,unaff_SS);
  FUN_1080_1872(&stack0xfffe,100,DAT_1160_0370,*(undefined2 *)(iVar3 + 0x268),
                *(undefined2 *)(iVar3 + 0x26a),0xff,local_102,unaff_SS);
  FUN_1080_1872(&stack0xfffe,100,DAT_1160_0372,*(undefined2 *)(iVar3 + 0x298),
                *(undefined2 *)(iVar3 + 0x29a),0xff,local_102,unaff_SS);
  if (local_102[0] != '\0') {
    puVar2 = (undefined4 *)*(undefined4 *)(local_106 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)(0x1080,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),local_102);
  }
  local_102[0] = '\0';
  FUN_1080_1872(&stack0xfffe,0x67,DAT_1160_036c,*(undefined2 *)(iVar3 + 0x27c),
                *(undefined2 *)(iVar3 + 0x27e),0xff,local_102,unaff_SS);
  FUN_1080_1872(&stack0xfffe,100,DAT_1160_0370,*(undefined2 *)(iVar3 + 0x280),
                *(undefined2 *)(iVar3 + 0x282),0xff,local_102,unaff_SS);
  FUN_1080_1872(&stack0xfffe,100,DAT_1160_0372,*(undefined2 *)(iVar3 + 0x29c),
                *(undefined2 *)(iVar3 + 0x29e),0xff,local_102,unaff_SS);
  if (local_102[0] != '\0') {
    puVar2 = (undefined4 *)*(undefined4 *)(local_106 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)(0x1080,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),local_102);
  }
  local_102[0] = '\0';
  FUN_1080_1872(&stack0xfffe,0x67,DAT_1160_036c,*(undefined2 *)(iVar3 + 0x278),
                *(undefined2 *)(iVar3 + 0x27a),0xff,local_102,unaff_SS);
  FUN_1080_1872(&stack0xfffe,100,DAT_1160_0370,*(undefined2 *)(iVar3 + 0x284),
                *(undefined2 *)(iVar3 + 0x286),0xff,local_102,unaff_SS);
  FUN_1080_1872(&stack0xfffe,100,DAT_1160_0372,*(undefined2 *)(iVar3 + 0x2a0),
                *(undefined2 *)(iVar3 + 0x2a2),0xff,local_102,unaff_SS);
  if (local_102[0] != '\0') {
    puVar2 = (undefined4 *)*(undefined4 *)(local_106 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)(0x1080,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),local_102);
  }
  local_102[0] = '\0';
  FUN_1080_1872(&stack0xfffe,0x67,DAT_1160_036c,*(undefined2 *)(iVar3 + 0x270),
                *(undefined2 *)(iVar3 + 0x272),0xff,local_102,unaff_SS);
  FUN_1080_1872(&stack0xfffe,100,DAT_1160_0370,*(undefined2 *)(iVar3 + 0x28c),
                *(undefined2 *)(iVar3 + 0x28e),0xff,local_102,unaff_SS);
  FUN_1080_1872(&stack0xfffe,100,DAT_1160_0372,*(undefined2 *)(iVar3 + 0x2a8),
                *(undefined2 *)(iVar3 + 0x2aa),0xff,local_102,unaff_SS);
  if (local_102[0] != '\0') {
    puVar2 = (undefined4 *)*(undefined4 *)(local_106 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)(0x1080,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),local_102);
  }
  local_102[0] = '\0';
  FUN_1080_1872(&stack0xfffe,0x67,DAT_1160_036c,*(undefined2 *)(iVar3 + 0x274),
                *(undefined2 *)(iVar3 + 0x276),0xff,local_102,unaff_SS);
  FUN_1080_1872(&stack0xfffe,100,DAT_1160_0370,*(undefined2 *)(iVar3 + 0x288),
                *(undefined2 *)(iVar3 + 0x28a),0xff,local_102,unaff_SS);
  FUN_1080_1872(&stack0xfffe,100,DAT_1160_0372,*(undefined2 *)(iVar3 + 0x2a4),
                *(undefined2 *)(iVar3 + 0x2a6),0xff,local_102,unaff_SS);
  if (local_102[0] != '\0') {
    puVar2 = (undefined4 *)*(undefined4 *)(local_106 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)(0x1080,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),local_102);
  }
  local_102[0] = '\0';
  FUN_1080_1872(&stack0xfffe,0x67,DAT_1160_036c,*(undefined2 *)(iVar3 + 0x26c),
                *(undefined2 *)(iVar3 + 0x26e),0xff,local_102,unaff_SS);
  FUN_1080_1872(&stack0xfffe,100,DAT_1160_0370,*(undefined2 *)(iVar3 + 0x290),
                *(undefined2 *)(iVar3 + 0x292),0xff,local_102,unaff_SS);
  FUN_1080_1872(&stack0xfffe,100,DAT_1160_0372,*(undefined2 *)(iVar3 + 0x2ac),
                *(undefined2 *)(iVar3 + 0x2ae),0xff,local_102,unaff_SS);
  if (local_102[0] != '\0') {
    puVar2 = (undefined4 *)*(undefined4 *)(local_106 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)(0x1080,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),local_102);
  }
  if (param_2 == 1) {
    puVar2 = (undefined4 *)*(undefined4 *)(local_106 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)(0x1080,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),0x1bce,0x1080);
  }
  local_102[0] = '\0';
  FUN_1080_1872(&stack0xfffe,0x67,DAT_1160_036a,*(undefined2 *)(iVar3 + 0x2cc),
                *(undefined2 *)(iVar3 + 0x2ce),0xff,local_102,unaff_SS);
  if (local_102[0] != '\0') {
    puVar2 = (undefined4 *)*(undefined4 *)(local_106 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)(0x1080,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),local_102);
  }
  local_102[0] = '\0';
  FUN_1080_1872(&stack0xfffe,0x67,DAT_1160_036c,*(undefined2 *)(iVar3 + 0x2d0),
                *(undefined2 *)(iVar3 + 0x2d2),0xff,local_102,unaff_SS);
  FUN_1080_1872(&stack0xfffe,100,DAT_1160_0370,*(undefined2 *)(iVar3 + 0x2dc),
                *(undefined2 *)(iVar3 + 0x2de),0xff,local_102,unaff_SS);
  if (local_102[0] != '\0') {
    puVar2 = (undefined4 *)*(undefined4 *)(local_106 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)(0x1080,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),local_102);
  }
  local_102[0] = '\0';
  FUN_1080_1872(&stack0xfffe,0x67,DAT_1160_036c,*(undefined2 *)(iVar3 + 0x2d4),
                *(undefined2 *)(iVar3 + 0x2d6),0xff,local_102,unaff_SS);
  FUN_1080_1872(&stack0xfffe,100,DAT_1160_0370,*(undefined2 *)(iVar3 + 0x2e0),
                *(undefined2 *)(iVar3 + 0x2e2),0xff,local_102,unaff_SS);
  if (local_102[0] != '\0') {
    puVar2 = (undefined4 *)*(undefined4 *)(local_106 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)(0x1080,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),local_102);
  }
  local_102[0] = '\0';
  FUN_1080_1872(&stack0xfffe,0x67,DAT_1160_036c,*(undefined2 *)(iVar3 + 0x2d8),
                *(undefined2 *)(iVar3 + 0x2da),0xff,local_102,unaff_SS);
  FUN_1080_1872(&stack0xfffe,100,DAT_1160_0370,*(undefined2 *)(iVar3 + 0x2e4),
                *(undefined2 *)(iVar3 + 0x2e6),0xff,local_102,unaff_SS);
  if (local_102[0] != '\0') {
    puVar2 = (undefined4 *)*(undefined4 *)(local_106 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)(0x1080,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),local_102);
  }
  if (param_2 == 1) {
    puVar2 = (undefined4 *)*(undefined4 *)(local_106 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)(0x1080,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),0x1bce,0x1080);
  }
  if (*(char *)((int)*(undefined4 *)(iVar3 + 0x2b8) + 0x29) != '\0') {
    local_102[0] = '\0';
    FUN_1080_1872(&stack0xfffe,0x67,DAT_1160_036a,*(undefined2 *)(iVar3 + 0x2b8),
                  *(undefined2 *)(iVar3 + 0x2ba),0xff,local_102,unaff_SS);
    if (local_102[0] != '\0') {
      puVar2 = (undefined4 *)*(undefined4 *)(local_106 + 0xec);
      puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
      (*(code *)*puVar1)(0x1080,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),local_102);
    }
    local_102[0] = '\0';
    FUN_1080_1872(&stack0xfffe,0x67,DAT_1160_036c,*(undefined2 *)(iVar3 + 700),
                  *(undefined2 *)(iVar3 + 0x2be),0xff,local_102,unaff_SS);
    FUN_1080_1872(&stack0xfffe,100,DAT_1160_0370,*(undefined2 *)(iVar3 + 0x2c4),
                  *(undefined2 *)(iVar3 + 0x2c6),0xff,local_102,unaff_SS);
    if (local_102[0] != '\0') {
      puVar2 = (undefined4 *)*(undefined4 *)(local_106 + 0xec);
      puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
      (*(code *)*puVar1)(0x1080,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),local_102);
    }
    local_102[0] = '\0';
    FUN_1080_1872(&stack0xfffe,0x67,DAT_1160_036c,*(undefined2 *)(iVar3 + 0x2c0),
                  *(undefined2 *)(iVar3 + 0x2c2),0xff,local_102,unaff_SS);
    FUN_1080_1872(&stack0xfffe,100,DAT_1160_0370,*(undefined2 *)(iVar3 + 0x2c8),
                  *(undefined2 *)(iVar3 + 0x2ca),0xff,local_102,unaff_SS);
    if (local_102[0] != '\0') {
      puVar2 = (undefined4 *)*(undefined4 *)(local_106 + 0xec);
      puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
      (*(code *)*puVar1)(0x1080,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),local_102);
    }
  }
  if (param_2 == 1) {
    puVar2 = (undefined4 *)*(undefined4 *)(local_106 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)(0x1080,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),0x1bce,0x1080);
  }
  local_102[0] = '\0';
  FUN_1080_1872(&stack0xfffe,0x67,DAT_1160_036a,*(undefined2 *)(iVar3 + 0x31c),
                *(undefined2 *)(iVar3 + 0x31e),0xff,local_102,unaff_SS);
  FUN_1080_1872(&stack0xfffe,100,DAT_1160_0370,*(undefined2 *)(iVar3 + 800),
                *(undefined2 *)(iVar3 + 0x322),0xff,local_102,unaff_SS);
  if (local_102[0] != '\0') {
    puVar2 = (undefined4 *)*(undefined4 *)(local_106 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)(0x1080,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),local_102);
  }
  if (param_2 == 1) {
    puVar2 = (undefined4 *)*(undefined4 *)(local_106 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)(0x1080,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),0x1bce,0x1080);
  }
  if (*(char *)((int)*(undefined4 *)(iVar3 + 0x32c) + 0x29) != '\0') {
    local_102[0] = '\0';
    FUN_1080_1872(&stack0xfffe,0x67,DAT_1160_036a,*(undefined2 *)(iVar3 + 0x32c),
                  *(undefined2 *)(iVar3 + 0x32e),0xff,local_102,unaff_SS);
    FUN_1080_1872(&stack0xfffe,100,DAT_1160_0370,*(undefined2 *)(iVar3 + 0x334),
                  *(undefined2 *)(iVar3 + 0x336),0xff,local_102,unaff_SS);
    FUN_1080_1872(&stack0xfffe,100,DAT_1160_0372,*(undefined2 *)(iVar3 + 0x344),
                  *(undefined2 *)(iVar3 + 0x346),0xff,local_102,unaff_SS);
    if (local_102[0] != '\0') {
      puVar2 = (undefined4 *)*(undefined4 *)(local_106 + 0xec);
      puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
      (*(code *)*puVar1)(0x1080,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),local_102);
    }
    local_102[0] = '\0';
    FUN_1080_1872(&stack0xfffe,0x67,DAT_1160_036c,*(undefined2 *)(iVar3 + 0x338),
                  *(undefined2 *)(iVar3 + 0x33a),0xff,local_102,unaff_SS);
    FUN_1080_1872(&stack0xfffe,100,DAT_1160_0370,*(undefined2 *)(iVar3 + 0x33c),
                  *(undefined2 *)(iVar3 + 0x33e),0xff,local_102,unaff_SS);
    FUN_1080_1872(&stack0xfffe,100,DAT_1160_0372,*(undefined2 *)(iVar3 + 0x348),
                  *(undefined2 *)(iVar3 + 0x34a),0xff,local_102,unaff_SS);
    if (local_102[0] != '\0') {
      puVar2 = (undefined4 *)*(undefined4 *)(local_106 + 0xec);
      puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
      (*(code *)*puVar1)(0x1080,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),local_102);
    }
  }
  if (param_2 == 1) {
    puVar2 = (undefined4 *)*(undefined4 *)(local_106 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)(0x1080,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),0x1bce,0x1080);
  }
  if (*(char *)((int)*(undefined4 *)(iVar3 + 0x34c) + 0x29) != '\0') {
    local_102[0] = '\0';
    FUN_1080_1872(&stack0xfffe,0x67,DAT_1160_036a,*(undefined2 *)(iVar3 + 0x34c),
                  *(undefined2 *)(iVar3 + 0x34e),0xff,local_102,unaff_SS);
    FUN_1080_1872(&stack0xfffe,100,DAT_1160_0370,*(undefined2 *)(iVar3 + 0x354),
                  *(undefined2 *)(iVar3 + 0x356),0xff,local_102,unaff_SS);
    FUN_1080_1872(&stack0xfffe,100,DAT_1160_0372,*(undefined2 *)(iVar3 + 0x36c),
                  *(undefined2 *)(iVar3 + 0x36e),0xff,local_102,unaff_SS);
    if (local_102[0] != '\0') {
      puVar2 = (undefined4 *)*(undefined4 *)(local_106 + 0xec);
      puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
      (*(code *)*puVar1)(0x1080,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),local_102);
    }
    local_102[0] = '\0';
    FUN_1080_1872(&stack0xfffe,0x67,DAT_1160_036c,*(undefined2 *)(iVar3 + 0x358),
                  *(undefined2 *)(iVar3 + 0x35a),0xff,local_102,unaff_SS);
    FUN_1080_1872(&stack0xfffe,100,DAT_1160_0370,*(undefined2 *)(iVar3 + 0x360),
                  *(undefined2 *)(iVar3 + 0x362),0xff,local_102,unaff_SS);
    FUN_1080_1872(&stack0xfffe,100,DAT_1160_0372,*(undefined2 *)(iVar3 + 0x370),
                  *(undefined2 *)(iVar3 + 0x372),0xff,local_102,unaff_SS);
    if (local_102[0] != '\0') {
      puVar2 = (undefined4 *)*(undefined4 *)(local_106 + 0xec);
      puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
      (*(code *)*puVar1)(0x1080,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),local_102);
    }
    local_102[0] = '\0';
    FUN_1080_1872(&stack0xfffe,0x67,DAT_1160_036c,*(undefined2 *)(iVar3 + 0x35c),
                  *(undefined2 *)(iVar3 + 0x35e),0xff,local_102,unaff_SS);
    FUN_1080_1872(&stack0xfffe,100,DAT_1160_0370,*(undefined2 *)(iVar3 + 0x364),
                  *(undefined2 *)(iVar3 + 0x366),0xff,local_102,unaff_SS);
    FUN_1080_1872(&stack0xfffe,100,DAT_1160_0372,*(undefined2 *)(iVar3 + 0x374),
                  *(undefined2 *)(iVar3 + 0x376),0xff,local_102,unaff_SS);
    if (local_102[0] != '\0') {
      puVar2 = (undefined4 *)*(undefined4 *)(local_106 + 0xec);
      puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
      (*(code *)*puVar1)(0x1080,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),local_102);
    }
  }
  return;
}



/* ---- FUN_1080_2e42 @ 1080:2e42  (87 octets) ---- */

void __cdecl16far FUN_1080_2e42(void)

{
  undefined4 uVar1;
  undefined2 uVar2;
  
  FUN_1158_0444();
  uVar2 = 0x1158;
  uVar1 = GETVERSION(0x1158);
  FUN_1158_04b2(uVar2,(uint)uVar1 & 0xff,0,(uint)uVar1 >> 8,0,uVar1);
  return;
}



/* ---- FUN_1080_2ea7 @ 1080:2ea7  (114 octets) ---- */

void __stdcall16far FUN_1080_2ea7(double param_1)

{
  undefined2 unaff_CS;
  undefined2 uStack_14;
  undefined *puStack_12;
  undefined2 uStack_10;
  undefined2 uStack_e;
  uint local_c;
  undefined4 local_a;
  undefined2 uStack_6;
  
  _local_a = CONCAT26(unaff_CS,CONCAT24(0x2eb2,local_a));
  FUN_1158_0444();
  _local_a = 0;
  uStack_e = 0x1080;
  uStack_10 = 0x2e9d;
  uStack_14 = DAT_1160_1858;
  local_c = (uint)(param_1 < 0.0) << 8 | (uint)NAN(param_1) << 10 | (uint)(param_1 == 0.0) << 0xe;
  if ((param_1 == 0.0) == 0) {
    DAT_1160_1858 = &uStack_14;
    puStack_12 = &stack0xfffe;
    FUN_1158_04b2();
  }
  DAT_1160_1858 = (undefined2 *)uStack_14;
  return;
}



/* ---- FUN_1080_2fa6 @ 1080:2fa6  (197 octets) ---- */

void __stdcall16far FUN_1080_2fa6(double param_1)

{
  undefined2 unaff_CS;
  longdouble lVar1;
  undefined2 uStack_1e;
  undefined *puStack_1c;
  undefined2 uStack_1a;
  undefined2 uStack_18;
  longdouble local_16;
  uint local_c;
  undefined4 local_a;
  undefined2 uStack_6;
  
  _local_a = CONCAT26(unaff_CS,CONCAT24(0x2fb1,local_a));
  FUN_1158_0444();
  uStack_18 = 0x1158;
  uStack_1a = 0x2f9c;
  uStack_1e = DAT_1160_1858;
  local_c = (uint)(param_1 < 0.0) << 8 | (uint)NAN(param_1) << 10 | (uint)(param_1 == 0.0) << 0xe;
  if (param_1 < 0.0) {
    lVar1 = (longdouble)param_1;
    DAT_1160_1858 = &uStack_1e;
    puStack_1c = &stack0xfffe;
    FUN_1158_1041();
    local_16 = lVar1;
    FUN_1158_1057();
    FUN_1158_1041();
    FUN_1158_04b2();
  }
  else {
    lVar1 = (longdouble)param_1;
    DAT_1160_1858 = &uStack_1e;
    puStack_1c = &stack0xfffe;
    FUN_1158_1041();
    local_16 = lVar1;
    FUN_1158_1057();
    FUN_1158_1041();
    FUN_1158_04b2();
  }
  DAT_1160_1858 = (undefined2 *)uStack_1e;
  return;
}



/* ---- FUN_1080_3093 @ 1080:3093  (606 octets) ---- */

void __stdcall16far
FUN_1080_3093(undefined2 param_1,undefined4 param_2,byte *param_3,int param_4,byte *param_5)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 unaff_SS;
  byte *pbVar4;
  undefined2 uVar5;
  byte *pbStack_410;
  byte local_308 [256];
  int local_208;
  char local_205;
  byte local_204 [256];
  int local_104;
  byte local_102 [252];
  undefined2 uStack_6;
  
  uStack_6 = 0x309e;
  FUN_1158_0444();
  local_205 = '\x01';
  pbStack_410 = (byte *)DAT_1160_1858;
  pbVar4 = local_308;
  uVar3 = (undefined2)((ulong)param_2 >> 0x10);
  uVar2 = (undefined2)param_2;
  DAT_1160_1858 = &pbStack_410;
  uVar5 = unaff_SS;
  FUN_1150_1034(param_1,uVar2,uVar3,(byte *)param_3,(int)((ulong)param_3 >> 0x10));
  FUN_1158_17e7(0xff,local_102,unaff_SS,pbVar4,uVar5);
  DAT_1160_1858 = (byte **)pbStack_410;
  pbStack_410 = (byte *)param_3;
  iVar1 = FUN_1158_1878();
  if (local_205 == '\0' || param_4 < (int)(uint)local_102[0] && iVar1 == 0) {
    if (param_4 < 10) {
      param_4 = 10;
    }
    local_208 = param_4 + -8;
    if (SBORROW2(param_4,8)) {
      local_208 = FUN_1158_043e();
    }
    pbStack_410 = (byte *)0x3086;
    FUN_1158_17cd();
    pbStack_410 = local_308;
    FUN_1150_08a9(local_208,local_208 >> 0xf);
    FUN_1158_184c();
    pbStack_410 = (byte *)0x3084;
    FUN_1158_184c();
    pbStack_410 = local_204;
    FUN_1158_17e7(0xff);
    pbStack_410 = local_204;
    FUN_1150_1034(param_1,uVar2,uVar3);
    pbStack_410 = local_102;
    FUN_1158_17e7(0xff);
    pbStack_410 = local_102;
    local_104 = FUN_1158_1878();
    if (0 < local_104) {
      while( true ) {
        if (SCARRY2(local_104,2)) {
          FUN_1158_043e();
        }
        iVar1 = FUN_1158_0416();
        if (local_102[iVar1] != 0x30) break;
        if (SCARRY2(local_104,2)) {
          pbStack_410 = (byte *)0x31ff;
          FUN_1158_043e();
        }
        pbStack_410 = (byte *)0x1;
        FUN_1158_1975();
        local_208 = local_208 + 1;
      }
      pbStack_410 = (byte *)0x3086;
      FUN_1158_17cd();
      pbStack_410 = local_308;
      FUN_1150_08a9(local_208,local_208 >> 0xf);
      FUN_1158_184c();
      pbStack_410 = (byte *)0x3084;
      FUN_1158_184c();
      pbStack_410 = local_204;
      FUN_1158_17e7(0xff);
      pbStack_410 = local_204;
      FUN_1150_1034(param_1,uVar2,uVar3);
      pbStack_410 = local_102;
      FUN_1158_17e7(0xff);
    }
    pbStack_410 = local_102;
    local_104 = FUN_1158_1878();
    if (0 < local_104) {
      while( true ) {
        if (SCARRY2(local_104,2)) {
          FUN_1158_043e();
        }
        iVar1 = FUN_1158_0416();
        if (local_102[iVar1] != 0x30) break;
        if (SCARRY2(local_104,2)) {
          pbStack_410 = (byte *)0x32c2;
          FUN_1158_043e();
        }
        pbStack_410 = (byte *)0x1;
        FUN_1158_1975();
      }
    }
  }
  while (local_102[1] == ' ') {
    pbStack_410 = (byte *)0x1;
    FUN_1158_1975();
  }
  pbStack_410 = param_5;
  FUN_1158_17e7(0xff);
  return;
}



/* ---- FUN_1080_32fb @ 1080:32fb  (58 octets) ---- */

void __stdcall16far
FUN_1080_32fb(undefined2 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined2 unaff_SS;
  undefined *puVar1;
  undefined local_102 [252];
  undefined2 uStack_6;
  
  uStack_6 = 0x3306;
  FUN_1158_0444();
  puVar1 = local_102;
  FUN_1080_3093(param_1,(int)param_2,(int)((ulong)param_2 >> 0x10),(int)param_3,
                (int)((ulong)param_3 >> 0x10),0x14);
  FUN_1158_17e7(0xff,(int)param_4,(int)((ulong)param_4 >> 0x10),puVar1,unaff_SS);
  return;
}



/* ---- FUN_1080_3335 @ 1080:3335  (246 octets) ---- */

undefined2 __stdcall16far FUN_1080_3335(undefined2 param_1,undefined4 param_2)

{
  char cVar1;
  uint uVar2;
  undefined2 uVar3;
  undefined2 unaff_SS;
  undefined *puVar4;
  undefined *puVar5;
  undefined local_13a [256];
  undefined2 local_3a;
  undefined2 local_38;
  undefined2 local_36;
  undefined2 local_34;
  undefined2 local_32;
  undefined2 local_30;
  undefined2 local_2e;
  undefined local_2c;
  undefined local_2b;
  undefined local_2a;
  undefined local_29;
  undefined local_28;
  undefined local_27;
  undefined local_26;
  undefined local_25;
  undefined local_24 [30];
  undefined2 uStack_6;
  
  uStack_6 = 0x3340;
  FUN_1158_0444();
  FUN_1158_1ee5(0,0x32,&local_36,unaff_SS);
  local_38 = (undefined2)((ulong)param_2 >> 0x10);
  local_3a = (undefined2)param_2;
  local_36 = FUN_1128_1119(local_3a,local_38);
  local_34 = 0;
  local_32 = param_1;
  local_30 = 0;
  uVar2 = FUN_1128_121a(local_3a,local_38);
  if ((uVar2 & 1) == 0) {
    local_2e = 400;
  }
  else {
    local_2e = 700;
  }
  uVar2 = FUN_1128_121a(local_3a,local_38);
  local_2c = (uVar2 & 2) != 0;
  uVar2 = FUN_1128_121a(local_3a,local_38);
  local_2b = (uVar2 & 4) != 0;
  uVar2 = FUN_1128_121a(local_3a,local_38);
  local_2a = (uVar2 & 8) != 0;
  local_29 = 1;
  puVar5 = local_24;
  puVar4 = local_13a;
  uVar3 = unaff_SS;
  FUN_1128_115e(local_3a,local_38);
  FUN_1150_0d4c(puVar4,unaff_SS,puVar5,uVar3);
  local_26 = 0;
  local_28 = 0;
  local_27 = 0;
  cVar1 = FUN_1128_125f(local_3a,local_38);
  if (cVar1 == '\x01') {
    local_25 = 2;
  }
  else if (cVar1 == '\x02') {
    local_25 = 1;
  }
  else {
    local_25 = 0;
  }
  uVar3 = CREATEFONTINDIRECT(0x1128,&local_36);
  return uVar3;
}



/* ---- FUN_1080_34b0 @ 1080:34b0  (24 octets) ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_1080_34b0(void)

{
  longdouble in_ST0;
  
  FUN_1158_0444();
  FUN_1080_2e42();
  ram0x11600500 = (double)in_ST0;
  return;
}



/* ---- FUN_1080_34c8 @ 1080:34c8  (80 octets) ---- */

void __stdcall16far FUN_1080_34c8(uint param_1,byte *param_2)

{
  uint uVar1;
  byte *pbVar2;
  undefined2 uVar3;
  
  FUN_1158_0444();
  if (*param_2 != 0) {
    uVar1 = (uint)*param_2;
    if (param_1 < uVar1) {
      uVar1 = FUN_1158_0438(0x1158);
    }
    uVar3 = (undefined2)((ulong)param_2 >> 0x10);
    pbVar2 = (byte *)param_2;
    if (pbVar2[uVar1] == 0x20) {
      FUN_1158_1975(1,*param_2,pbVar2,uVar3);
      FUN_1080_34c8(param_1,pbVar2,uVar3);
    }
  }
  return;
}



/* ---- FUN_1080_3a57 @ 1080:3a57  (235 octets) ---- */

void __cdecl16far
FUN_1080_3a57(undefined2 param_1,undefined4 param_2,undefined2 param_3,char *param_4,
             undefined4 param_5)

{
  undefined4 uVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined2 unaff_SS;
  undefined *puVar5;
  undefined2 uVar6;
  undefined2 uStack_11a;
  undefined *puStack_118;
  undefined2 uStack_116;
  undefined local_108 [256];
  undefined4 local_8;
  undefined local_3;
  
  uStack_116 = 0x3a73;
  local_8 = FUN_1140_2553();
  uStack_116 = 0x3a51;
  uStack_11a = DAT_1160_1858;
  uVar1 = *(undefined4 *)((int)local_8 + 0x184);
  DAT_1160_1858 = &uStack_11a;
  puStack_118 = &stack0xfffe;
  FUN_1138_1d8c((int)uVar1,(int)((ulong)uVar1 >> 0x10),(int)param_5,(int)((ulong)param_5 >> 0x10));
  uVar3 = (undefined2)((ulong)param_4 >> 0x10);
  FUN_1138_1d8c((int)*(undefined4 *)((int)local_8 + 0x188),
                (int)((ulong)*(undefined4 *)((int)local_8 + 0x188) >> 0x10),(char *)param_4,uVar3);
  local_3 = 0;
  if (*param_4 == '\0') {
    FUN_1140_3fd0(local_8,*(undefined2 *)((int)local_8 + 0x188),
                  *(undefined2 *)((int)local_8 + 0x18a));
  }
  uVar4 = 0x1140;
  uVar6 = (int)local_8;
  iVar2 = FUN_1140_5d45(local_8);
  if (iVar2 == 1) {
    puVar5 = local_108;
    uVar4 = unaff_SS;
    FUN_1138_1d53((int)*(undefined4 *)((int)local_8 + 0x188),
                  (int)((ulong)*(undefined4 *)((int)local_8 + 0x188) >> 0x10));
    FUN_1158_17e7(param_3,(char *)param_4,uVar3,puVar5,uVar4);
    puVar5 = local_108;
    FUN_1138_1d53((int)*(undefined4 *)((int)local_8 + 0x18c),
                  (int)((ulong)*(undefined4 *)((int)local_8 + 0x18c) >> 0x10));
    uVar4 = 0x1158;
    FUN_1158_17e7(param_1,(int)param_2,(int)((ulong)param_2 >> 0x10),puVar5,unaff_SS);
    local_3 = 1;
  }
  DAT_1160_1858 = (undefined2 *)uVar6;
  uStack_11a = 0x3b42;
  puStack_118 = (undefined *)uVar4;
  FUN_1158_1f7f(local_8);
  return;
}



/* ---- FUN_1080_3d03 @ 1080:3d03  (93 octets) ---- */

void __cdecl16far FUN_1080_3d03(void)

{
  undefined2 uVar1;
  undefined4 uVar2;
  undefined2 uStack_1a;
  undefined *puStack_18;
  undefined2 uStack_16;
  
  uStack_16 = 0x3d1f;
  uVar2 = FUN_1140_2553();
  uStack_16 = 0x3cfd;
  uStack_1a = DAT_1160_1858;
  DAT_1160_1858 = &uStack_1a;
  uVar1 = (int)uVar2;
  puStack_18 = &stack0xfffe;
  FUN_1140_5d45(uVar2);
  DAT_1160_1858 = (undefined2 *)uVar1;
  puStack_18 = (undefined *)0x1140;
  uStack_1a = 0x3d60;
  FUN_1158_1f7f(uVar2);
  return;
}



/* ---- FUN_1080_3e75 @ 1080:3e75  (35 octets) ---- */

void __stdcall16far FUN_1080_3e75(undefined4 param_1)

{
  undefined2 *puVar1;
  undefined4 *puVar2;
  
  FUN_10d8_1c56((int)DAT_1160_2ac6,(int)((ulong)DAT_1160_2ac6 >> 0x10));
  puVar2 = (undefined4 *)*(undefined4 *)((int)param_1 + 0x180);
  puVar1 = (undefined2 *)((int)*puVar2 + 0x78);
  (*(code *)*puVar1)(0x10d8,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10));
  return;
}




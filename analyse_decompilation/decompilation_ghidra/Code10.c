/* Simstrat (FR).EXE - segment Code10 - 41 fonctions
   Decompile par Ghidra 11.2.1 (x86 16 bits, chargeur NE). */

/* ---- FUN_1048_12e9 @ 1048:12e9  (43 octets) ---- */

void __stdcall16far FUN_1048_12e9(undefined4 param_1)

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



/* ---- FUN_1048_131a @ 1048:131a  (188 octets) ---- */

void __stdcall16far FUN_1048_131a(undefined2 param_1,int param_2)

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
  
  _local_6 = CONCAT22(unaff_CS,0x1325);
  FUN_1158_0444();
  uStack_c = (undefined2)((ulong)DAT_1160_2c2a >> 0x10);
  uStack_e = (undefined2)DAT_1160_2c2a;
  uStack_10 = 0x1158;
  uStack_12 = 0x1333;
  FUN_1140_7303();
  if (param_2 < 1) {
    return;
  }
  uStack_c = DAT_1160_2c2a._2_2_;
  uStack_e = (undefined2)DAT_1160_2c2a;
  uStack_10 = CONCAT11(extraout_AH,1);
  uStack_12 = 0x1048;
  uStack_14 = 0x22;
  uStack_16 = 0x1140;
  uStack_18 = 0x1354;
  local_a = FUN_1140_2553();
  uVar2 = (undefined2)((ulong)local_a >> 0x10);
  local_6 = (int)local_a;
  uStack_16 = 0x1140;
  uStack_18 = 0x1314;
  uStack_1c = DAT_1160_1858;
  DAT_1160_1858 = &uStack_1c;
  *(undefined2 *)(local_6 + 0x530) = param_1;
  *(int *)(local_6 + 0x52e) = param_2;
  puStack_1a = &stack0xfffe;
  FUN_1048_200d(local_a);
  FUN_1048_27b3(local_a,*(undefined2 *)((int)local_a + 0x52e));
  FUN_1138_1ed5(local_a,0xfff0,0xffff);
  FUN_1140_3a14(local_a,2);
  uVar1 = (int)local_a;
  FUN_1140_5d45(local_a);
  DAT_1160_1858 = (undefined2 *)uVar1;
  puStack_1a = (undefined *)0x1140;
  uStack_1c = 0x13d2;
  FUN_1140_5f1d(local_6,uVar2);
  return;
}



/* ---- FUN_1048_13dc @ 1048:13dc  (333 octets) ---- */

void __stdcall16far FUN_1048_13dc(char param_1,undefined2 param_2,int param_3)

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
  
  _local_6 = CONCAT22(unaff_CS,0x13e7);
  FUN_1158_0444();
  uStack_e = (undefined2)((ulong)DAT_1160_2c2a >> 0x10);
  uStack_10 = (undefined2)DAT_1160_2c2a;
  uStack_12 = 0x1158;
  uStack_14 = 0x13f5;
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
  uStack_14 = 0x1048;
  uStack_16 = 0x22;
  uStack_18 = 0x1140;
  uStack_1a = 0x143e;
  local_c = FUN_1140_2553();
  uVar3 = (undefined2)((ulong)local_c >> 0x10);
  local_6 = (int)local_c;
  uStack_18 = 0x1140;
  uStack_1a = 0x13d6;
  uStack_1e = DAT_1160_1858;
  DAT_1160_1858 = &uStack_1e;
  *(undefined2 *)(local_6 + 0x530) = param_2;
  *(int *)(local_6 + 0x52e) = param_3;
  puStack_1c = &stack0xfffe;
  FUN_1048_200d(local_c);
  FUN_1048_27b3(local_c,*(undefined2 *)((int)local_c + 0x52e));
  FUN_1138_1ed5(local_c,0xffff,0xff);
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
    uVar4 = 0x1048;
    FUN_1048_4832(local_6,uVar3);
    DAT_1160_1858 = (undefined2 *)uVar2;
  }
  puStack_1c = (undefined *)0x1525;
  uStack_1e = uVar3;
  uStack_1a = uVar4;
  FUN_1140_5f1d(local_6);
  return;
}



/* ---- FUN_1048_1529 @ 1048:1529  (34 octets) ---- */

void __stdcall16far FUN_1048_1529(undefined4 param_1)

{
  undefined2 uVar1;
  
  FUN_1158_0444();
  uVar1 = (undefined2)((ulong)param_1 >> 0x10);
  FUN_1048_13dc(0,*(undefined2 *)((int)param_1 + 0x530),*(undefined2 *)((int)param_1 + 0x52e));
  return;
}



/* ---- FUN_1048_1652 @ 1048:1652  (1136 octets) ---- */

void __stdcall16far FUN_1048_1652(undefined4 param_1,undefined4 param_2)

{
  undefined2 *puVar1;
  char cVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined2 unaff_SS;
  unkbyte10 in_ST0;
  unkbyte10 in_ST1;
  undefined4 uVar6;
  byte *pbVar7;
  undefined2 uVar8;
  undefined *puVar9;
  undefined local_30e [248];
  long local_216;
  undefined4 *local_212;
  int local_20e;
  undefined2 local_20c;
  undefined2 local_20a;
  undefined2 local_208;
  byte local_206 [256];
  undefined local_106 [256];
  undefined2 local_6;
  
  local_6 = 0x165d;
  FUN_1158_0444();
  local_20c = (undefined2)((ulong)param_2 >> 0x10);
  local_20e = (int)param_2;
  uVar5 = (undefined2)((ulong)param_1 >> 0x10);
  uVar4 = (undefined2)param_1;
  uVar6 = FUN_1140_33d5(uVar4,uVar5);
  uVar3 = (undefined2)((ulong)uVar6 >> 0x10);
  local_20a = *(undefined2 *)((int)uVar6 + 7);
  local_208 = *(undefined2 *)((int)uVar6 + 9);
  uVar3 = *(undefined2 *)(local_20e + 0x36);
  uVar8 = *(undefined2 *)(local_20e + 0x34);
  uVar6 = FUN_1140_33d5(uVar4,uVar5);
  FUN_1128_2099(uVar6,uVar8,uVar3);
  puVar9 = local_30e;
  uVar3 = unaff_SS;
  FUN_10d0_1a9f(local_20e,local_20c);
  uVar6 = FUN_10d0_1a5f(local_20e,local_20c);
  uVar6 = *(undefined4 *)((int)uVar6 + 0x1a);
  uVar6 = FUN_10d8_3b9b((int)uVar6,(int)((ulong)uVar6 >> 0x10),puVar9,uVar3);
  uVar3 = (undefined2)((ulong)uVar6 >> 0x10);
  local_6 = (undefined2)uVar6;
  cVar2 = FUN_1158_2255(0xa58,(char *)s_iTime_1160_10dc + 4,uVar6);
  if (cVar2 == '\0') {
    cVar2 = FUN_1158_2255(0x7c8,(char *)s_iTime_1160_10dc + 4,local_6,uVar3);
    if (cVar2 != '\0') {
      local_212 = (undefined4 *)FUN_1158_2273(0x7c8,(char *)s_iTime_1160_10dc + 4,local_6,uVar3);
      FUN_1158_17e7();
      pbVar7 = local_206;
      puVar1 = (undefined2 *)((int)*local_212 + 0x44);
      uVar3 = unaff_SS;
      local_216 = (*(code *)*puVar1)();
      FUN_1150_10d4((longdouble)local_216,pbVar7,uVar3);
      FUN_1158_17e7();
      puVar9 = local_106;
      uVar3 = unaff_SS;
      uVar6 = FUN_1140_33d5(uVar4,uVar5);
      uVar3 = FUN_1128_2003(uVar6,puVar9,uVar3);
      uVar6 = CONCAT22(uVar3,*(int *)(local_20e + 0x22) + -5);
      if (SBORROW2(*(int *)(local_20e + 0x22),5)) {
        uVar6 = FUN_1158_043e(0x1128);
      }
      if ((int)uVar6 <= (int)((ulong)uVar6 >> 0x10)) {
        FUN_1158_17e7();
        pbVar7 = local_206;
        puVar1 = (undefined2 *)((int)*local_212 + 0x44);
        uVar3 = unaff_SS;
        local_216 = (*(code *)*puVar1)();
        FUN_1150_10d4((longdouble)local_216,pbVar7,uVar3);
        FUN_1158_17e7();
        puVar9 = local_106;
        uVar3 = unaff_SS;
        uVar6 = FUN_1140_33d5(uVar4,uVar5);
        uVar3 = FUN_1128_2003(uVar6,puVar9,uVar3);
        uVar6 = CONCAT22(uVar3,*(int *)(local_20e + 0x22) + -5);
        if (SBORROW2(*(int *)(local_20e + 0x22),5)) {
          uVar6 = FUN_1158_043e(0x1128);
        }
        if ((int)uVar6 <= (int)((ulong)uVar6 >> 0x10)) {
          FUN_1158_17e7();
          while( true ) {
            pbVar7 = local_206;
            uVar3 = unaff_SS;
            uVar6 = FUN_1140_33d5(uVar4,uVar5);
            uVar3 = FUN_1128_2003(uVar6,pbVar7,uVar3);
            uVar6 = CONCAT22(uVar3,*(int *)(local_20e + 0x22) + -5);
            if (SBORROW2(*(int *)(local_20e + 0x22),5)) {
              uVar6 = FUN_1158_043e(0x1128);
            }
            if (0xb < local_206[0] || (int)uVar6 <= (int)((ulong)uVar6 >> 0x10)) break;
            FUN_1158_1916();
          }
          if (7 < local_206[0]) {
            FUN_1158_1975(1,3,local_206,unaff_SS);
          }
        }
      }
      FUN_10e0_60f9((undefined4 *)local_212,(int)((ulong)local_212 >> 0x10),local_206,unaff_SS);
    }
  }
  else {
    local_212 = (undefined4 *)FUN_1158_2273(0xa58,(char *)s_iTime_1160_10dc + 4,local_6,uVar3);
    FUN_1158_17e7();
    pbVar7 = local_206;
    puVar1 = (undefined2 *)((int)*local_212 + 0x40);
    uVar3 = unaff_SS;
    (*(code *)*puVar1)();
    FUN_1150_10d4(in_ST0,pbVar7,uVar3);
    FUN_1158_17e7();
    puVar9 = local_106;
    uVar3 = unaff_SS;
    uVar6 = FUN_1140_33d5(uVar4,uVar5);
    uVar3 = FUN_1128_2003(uVar6,puVar9,uVar3);
    uVar6 = CONCAT22(uVar3,*(int *)(local_20e + 0x22) + -5);
    if (SBORROW2(*(int *)(local_20e + 0x22),5)) {
      uVar6 = FUN_1158_043e(0x1128);
    }
    if ((int)uVar6 <= (int)((ulong)uVar6 >> 0x10)) {
      FUN_1158_17e7();
      pbVar7 = local_206;
      puVar1 = (undefined2 *)((int)*local_212 + 0x40);
      uVar3 = unaff_SS;
      (*(code *)*puVar1)();
      FUN_1150_10d4(in_ST1,pbVar7,uVar3);
      FUN_1158_17e7();
      puVar9 = local_106;
      uVar3 = unaff_SS;
      uVar6 = FUN_1140_33d5(uVar4,uVar5);
      uVar3 = FUN_1128_2003(uVar6,puVar9,uVar3);
      uVar6 = CONCAT22(uVar3,*(int *)(local_20e + 0x22) + -5);
      if (SBORROW2(*(int *)(local_20e + 0x22),5)) {
        uVar6 = FUN_1158_043e(0x1128);
      }
      if ((int)uVar6 <= (int)((ulong)uVar6 >> 0x10)) {
        FUN_1158_17e7();
        while( true ) {
          pbVar7 = local_206;
          uVar3 = unaff_SS;
          uVar6 = FUN_1140_33d5(uVar4,uVar5);
          uVar3 = FUN_1128_2003(uVar6,pbVar7,uVar3);
          uVar6 = CONCAT22(uVar3,*(int *)(local_20e + 0x22) + -5);
          if (SBORROW2(*(int *)(local_20e + 0x22),5)) {
            uVar6 = FUN_1158_043e(0x1128);
          }
          if (0xb < local_206[0] || (int)uVar6 <= (int)((ulong)uVar6 >> 0x10)) break;
          FUN_1158_1916();
        }
        if (7 < local_206[0]) {
          FUN_1158_1975(1,3,local_206,unaff_SS);
        }
      }
    }
    FUN_10e0_60f9((undefined4 *)local_212,(int)((ulong)local_212 >> 0x10),local_206,unaff_SS);
  }
  uVar3 = *(undefined2 *)(local_20e + 0x36);
  uVar8 = *(undefined2 *)(local_20e + 0x34);
  uVar6 = FUN_1140_33d5(uVar4,uVar5);
  FUN_1128_2099(uVar6,uVar8,uVar3);
  return;
}



/* ---- FUN_1048_1ac2 @ 1048:1ac2  (77 octets) ---- */

void __stdcall16far FUN_1048_1ac2(undefined4 param_1,undefined2 param_2,undefined2 param_3)

{
  undefined4 uVar1;
  char cVar2;
  char cVar3;
  
  FUN_1158_0444();
  cVar2 = FUN_1158_2255(0xba2,0x10d0,param_2,param_3);
  cVar3 = FUN_1158_2255(0x22,0x10d0,param_2,param_3);
  if (cVar3 != '\0' || cVar2 != '\0') {
    uVar1 = *(undefined4 *)((int)param_1 + 600);
    FUN_1138_1c77((int)uVar1,(int)((ulong)uVar1 >> 0x10),0);
  }
  return;
}



/* ---- FUN_1048_1b0f @ 1048:1b0f  (86 octets) ---- */

void __stdcall16far
FUN_1048_1b0f(undefined4 param_1,undefined2 param_2_00,int *param_2,undefined2 param_3,
             undefined2 param_4)

{
  undefined4 uVar1;
  char cVar2;
  char cVar3;
  
  FUN_1158_0444();
  if (*param_2 == 0x11) {
    cVar2 = FUN_1158_2255(0xba2,0x10d0,param_3,param_4);
    cVar3 = FUN_1158_2255(0x22,0x10d0,param_3,param_4);
    if (cVar3 != '\0' || cVar2 != '\0') {
      uVar1 = *(undefined4 *)((int)param_1 + 600);
      FUN_1138_1c77((int)uVar1,(int)((ulong)uVar1 >> 0x10),0);
    }
  }
  return;
}



/* ---- FUN_1048_1f85 @ 1048:1f85  (136 octets) ---- */

void __stdcall16far FUN_1048_1f85(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined4 uVar6;
  undefined2 *puVar7;
  
  puVar7 = (undefined2 *)&DAT_1160_1f90;
  FUN_1158_0444();
  uVar5 = (undefined2)((ulong)param_1 >> 0x10);
  uVar4 = (undefined2)param_1;
  iVar2 = FUN_1148_527d(uVar4,uVar5);
  iVar3 = iVar2 + -1;
  if (SBORROW2(iVar2,1)) {
    iVar3 = FUN_1158_043e(0x1148,puVar7);
  }
  if (-1 < iVar3) {
    iVar2 = 0;
    while( true ) {
      uVar6 = FUN_1148_5246(uVar4,uVar5,iVar2);
      cVar1 = FUN_1158_2255(0x22,0x10d0,uVar6);
      if (cVar1 != '\0') {
        uVar6 = FUN_1148_5246(uVar4,uVar5,iVar2);
        uVar6 = FUN_1158_2273(0x22,0x10d0,uVar6);
        FUN_1048_1652(uVar4,uVar5,uVar6);
      }
      if (iVar2 == iVar3) break;
      iVar2 = iVar2 + 1;
    }
  }
  return;
}



/* ---- FUN_1048_200d @ 1048:200d  (458 octets) ---- */

void __stdcall16far FUN_1048_200d(undefined4 param_1)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  
  FUN_1158_0444();
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  uVar4 = (undefined2)((ulong)*(undefined4 *)(iVar1 + 0x1dc) >> 0x10);
  uVar2 = (undefined2)*(undefined4 *)(iVar1 + 0x1dc);
  FUN_10d8_31d2(uVar2,uVar4);
  FUN_10e0_2ffb(uVar2,uVar4,1);
  FUN_10e0_2ed2(uVar2,uVar4,0);
  FUN_10d8_31bf(uVar2,uVar4);
  uVar4 = (undefined2)((ulong)*(undefined4 *)(iVar1 + 0x1e4) >> 0x10);
  uVar2 = (undefined2)*(undefined4 *)(iVar1 + 0x1e4);
  FUN_10d8_31d2(uVar2,uVar4);
  FUN_10e0_2ffb(uVar2,uVar4,1);
  FUN_10e0_2ed2(uVar2,uVar4,0);
  FUN_10d8_31bf(uVar2,uVar4);
  uVar4 = (undefined2)((ulong)*(undefined4 *)(iVar1 + 0x1e8) >> 0x10);
  uVar2 = (undefined2)*(undefined4 *)(iVar1 + 0x1e8);
  FUN_10d8_31d2(uVar2,uVar4);
  FUN_10e0_2ffb(uVar2,uVar4,1);
  FUN_10e0_2ed2(uVar2,uVar4,0);
  FUN_10d8_31bf(uVar2,uVar4);
  uVar4 = (undefined2)((ulong)*(undefined4 *)(iVar1 + 0x1e0) >> 0x10);
  uVar2 = (undefined2)*(undefined4 *)(iVar1 + 0x1e0);
  FUN_10d8_31d2(uVar2,uVar4);
  FUN_10e0_2ffb(uVar2,uVar4,1);
  FUN_10e0_2ed2(uVar2,uVar4,0);
  FUN_10d8_31bf(uVar2,uVar4);
  uVar4 = (undefined2)((ulong)*(undefined4 *)(iVar1 + 0x1ec) >> 0x10);
  uVar2 = (undefined2)*(undefined4 *)(iVar1 + 0x1ec);
  FUN_10d8_31d2(uVar2,uVar4);
  FUN_10e0_2ffb(uVar2,uVar4,1);
  FUN_10e0_2ed2(uVar2,uVar4,0);
  FUN_10d8_31bf(uVar2,uVar4);
  uVar4 = (undefined2)((ulong)*(undefined4 *)(iVar1 + 500) >> 0x10);
  uVar2 = (undefined2)*(undefined4 *)(iVar1 + 500);
  FUN_10d8_31d2(uVar2,uVar4);
  FUN_10e0_2ffb(uVar2,uVar4,1);
  FUN_10e0_2ed2(uVar2,uVar4,0);
  FUN_10d8_31bf(uVar2,uVar4);
  uVar4 = (undefined2)((ulong)*(undefined4 *)(iVar1 + 0x1f8) >> 0x10);
  uVar2 = (undefined2)*(undefined4 *)(iVar1 + 0x1f8);
  FUN_10d8_31d2(uVar2,uVar4);
  FUN_10e0_2ffb(uVar2,uVar4,1);
  FUN_10e0_2ed2(uVar2,uVar4,0);
  FUN_10d8_31bf(uVar2,uVar4);
  uVar4 = (undefined2)((ulong)*(undefined4 *)(iVar1 + 0x1f0) >> 0x10);
  uVar2 = (undefined2)*(undefined4 *)(iVar1 + 0x1f0);
  FUN_10d8_31d2(uVar2,uVar4);
  FUN_10e0_2ffb(uVar2,uVar4,1);
  FUN_10e0_2ed2(uVar2,uVar4,0);
  FUN_10d8_31bf(uVar2,uVar4);
  return;
}



/* ---- FUN_1048_21e1 @ 1048:21e1  (1356 octets) ---- */

void __stdcall16far FUN_1048_21e1(undefined4 param_1)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  char *pcVar8;
  undefined2 unaff_SS;
  undefined4 uVar9;
  undefined *puVar10;
  undefined local_204 [228];
  int local_120;
  int local_11e;
  undefined local_11c;
  int local_118;
  int local_116;
  undefined local_114;
  int local_110;
  int local_10e;
  undefined local_10c;
  byte local_109;
  undefined4 local_108;
  undefined local_104 [254];
  undefined2 uStack_6;
  byte bVar11;
  
  uStack_6 = 0x21ec;
  FUN_1158_0444();
  puVar10 = local_204;
  uVar6 = (undefined2)((ulong)param_1 >> 0x10);
  iVar5 = (int)param_1;
  uVar7 = unaff_SS;
  FUN_1150_08a9(*(int *)(iVar5 + 0x530),*(int *)(iVar5 + 0x530) >> 0xf);
  FUN_1138_1d8c((int)*(undefined4 *)(iVar5 + 400),(int)((ulong)*(undefined4 *)(iVar5 + 400) >> 0x10)
                ,puVar10,uVar7);
  puVar10 = local_204;
  uVar7 = unaff_SS;
  FUN_1150_08a9(*(int *)(iVar5 + 0x52e),*(int *)(iVar5 + 0x52e) >> 0xf);
  FUN_1138_1d8c((int)*(undefined4 *)(iVar5 + 0x198),
                (int)((ulong)*(undefined4 *)(iVar5 + 0x198) >> 0x10),puVar10,uVar7);
  FUN_1158_17e7(0xff,local_104,unaff_SS,iVar5 + 0x532,uVar6);
  FUN_1158_1878(local_104,unaff_SS,0x21d7,0x1158);
  cVar1 = FUN_1158_0416();
  if (cVar1 != '\0') {
    FUN_1158_1975(1,cVar1,local_104,unaff_SS);
    puVar10 = local_204;
    uVar7 = unaff_SS;
    FUN_1150_08a9(*(int *)(iVar5 + 0x52e),*(int *)(iVar5 + 0x52e) >> 0xf);
    FUN_1158_1916(cVar1,0xff,local_104,unaff_SS,puVar10,uVar7);
  }
  FUN_1158_1878(local_104,unaff_SS,0x21d7,0x1158);
  cVar1 = FUN_1158_0416();
  if (cVar1 != '\0') {
    FUN_1158_1975(1,cVar1,local_104,unaff_SS);
    puVar10 = local_204;
    uVar7 = unaff_SS;
    FUN_1150_08a9(*(int *)(iVar5 + 0x530),*(int *)(iVar5 + 0x530) >> 0xf);
    FUN_1158_1916(cVar1,0xff,local_104,unaff_SS,puVar10,uVar7);
  }
  uVar7 = 0x1138;
  FUN_1138_1d8c(iVar5,uVar6,local_104,unaff_SS);
  local_108 = *(undefined4 *)(iVar5 + 0x348);
  bVar11 = 0;
  while( true ) {
    uVar2 = bVar11 + 1;
    if (SCARRY2((uint)bVar11,1)) {
      uVar2 = FUN_1158_043e(uVar7);
    }
    uVar3 = uVar2 & 0xff00;
    if (uVar2 == *(uint *)(iVar5 + 0x52e)) {
      uVar3 = uVar3 + 1;
    }
    uVar9 = FUN_1130_1353((int)local_108,(int)((ulong)local_108 >> 0x10),bVar11);
    uVar7 = 0x1130;
    FUN_1130_1275(uVar9,uVar3);
    if (bVar11 == 0x13) break;
    bVar11 = bVar11 + 1;
  }
  local_108 = *(undefined4 *)(iVar5 + 0x230);
  iVar4 = FUN_1130_1326((int)local_108,(int)((ulong)local_108 >> 0x10));
  if (SBORROW2(iVar4,1)) {
    FUN_1158_043e(0x1130);
  }
  uVar7 = 0x1158;
  local_109 = FUN_1158_0416();
  bVar11 = 0;
  while( true ) {
    uVar2 = bVar11 + 1;
    if (SCARRY2((uint)bVar11,1)) {
      uVar2 = FUN_1158_043e(uVar7);
    }
    uVar3 = uVar2 & 0xff00;
    if (uVar2 == *(uint *)(iVar5 + 0x530)) {
      uVar3 = uVar3 + 1;
    }
    uVar9 = FUN_1130_1353((int)local_108,(int)((ulong)local_108 >> 0x10),bVar11);
    uVar7 = 0x1130;
    FUN_1130_1275(uVar9,uVar3);
    if (bVar11 == local_109) break;
    bVar11 = bVar11 + 1;
  }
  local_108 = *(undefined4 *)(iVar5 + 0x1dc);
  local_110 = *(int *)(iVar5 + 0x52e);
  local_10e = local_110 >> 0xf;
  local_10c = 0;
  pcVar8 = (char *)s_iTime_1160_10dc + 4;
  cVar1 = FUN_10e0_2895((int)local_108,(int)((ulong)local_108 >> 0x10),0,&local_110,unaff_SS);
  if (cVar1 == '\0') {
    pcVar8 = (char *)0x1048;
    FUN_1048_12e9(iVar5,uVar6);
  }
  local_108._2_2_ = (undefined2)((ulong)*(undefined4 *)(iVar5 + 0x1e4) >> 0x10);
  local_108._0_2_ = (undefined2)*(undefined4 *)(iVar5 + 0x1e4);
  local_120 = *(int *)(iVar5 + 0x52e) + -1;
  if (SBORROW2(*(int *)(iVar5 + 0x52e),1)) {
    local_120 = FUN_1158_043e(pcVar8);
  }
  local_11e = local_120 >> 0xf;
  local_11c = 0;
  local_118 = *(int *)(iVar5 + 0x530);
  local_116 = local_118 >> 0xf;
  local_114 = 0;
  local_110 = 1;
  local_10e = 0;
  local_10c = 0;
  pcVar8 = (char *)s_iTime_1160_10dc + 4;
  cVar1 = FUN_10e0_2895((undefined2)local_108,local_108._2_2_,2,&local_120,unaff_SS);
  if (cVar1 == '\0') {
    pcVar8 = (char *)0x1048;
    FUN_1048_12e9(iVar5,uVar6);
  }
  local_108._2_2_ = (undefined2)((ulong)*(undefined4 *)(iVar5 + 0x1e8) >> 0x10);
  local_108._0_2_ = (undefined2)*(undefined4 *)(iVar5 + 0x1e8);
  iVar4 = *(int *)(iVar5 + 0x52e) + -1;
  if (SBORROW2(*(int *)(iVar5 + 0x52e),1)) {
    iVar4 = FUN_1158_043e(pcVar8);
  }
  local_11e = iVar4 >> 0xf;
  local_11c = 0;
  local_118 = *(int *)(iVar5 + 0x530);
  local_116 = local_118 >> 0xf;
  local_114 = 0;
  local_110 = 2;
  local_10e = 0;
  local_10c = 0;
  pcVar8 = (char *)s_iTime_1160_10dc + 4;
  local_120 = iVar4;
  cVar1 = FUN_10e0_2895((undefined2)local_108,local_108._2_2_,2,&local_120,unaff_SS);
  if (cVar1 == '\0') {
    pcVar8 = (char *)0x1048;
    FUN_1048_12e9(iVar5,uVar6);
  }
  local_108._2_2_ = (undefined2)((ulong)*(undefined4 *)(iVar5 + 0x1e0) >> 0x10);
  local_108._0_2_ = (undefined2)*(undefined4 *)(iVar5 + 0x1e0);
  iVar4 = *(int *)(iVar5 + 0x52e) + -1;
  if (SBORROW2(*(int *)(iVar5 + 0x52e),1)) {
    iVar4 = FUN_1158_043e(pcVar8);
  }
  local_116 = iVar4 >> 0xf;
  local_114 = 0;
  local_110 = *(int *)(iVar5 + 0x530);
  local_10e = local_110 >> 0xf;
  local_10c = 0;
  local_118 = iVar4;
  cVar1 = FUN_10e0_2895((undefined2)local_108,local_108._2_2_,1,&local_118,unaff_SS);
  if (cVar1 == '\0') {
    FUN_1048_12e9(iVar5,uVar6);
  }
  local_108 = *(undefined4 *)(iVar5 + 0x1ec);
  local_118 = *(int *)(iVar5 + 0x52e);
  local_116 = local_118 >> 0xf;
  local_114 = 0;
  local_110 = *(int *)(iVar5 + 0x530);
  local_10e = local_110 >> 0xf;
  local_10c = 0;
  cVar1 = FUN_10e0_2895((int)local_108,(int)((ulong)local_108 >> 0x10),1,&local_118,unaff_SS);
  if (cVar1 == '\0') {
    FUN_1048_12e9(iVar5,uVar6);
  }
  local_108 = *(undefined4 *)(iVar5 + 500);
  local_120 = *(int *)(iVar5 + 0x52e);
  local_11e = local_120 >> 0xf;
  local_11c = 0;
  local_118 = *(int *)(iVar5 + 0x530);
  local_116 = local_118 >> 0xf;
  local_114 = 0;
  local_110 = 1;
  local_10e = 0;
  local_10c = 0;
  cVar1 = FUN_10e0_2895((int)local_108,(int)((ulong)local_108 >> 0x10),2,&local_120,unaff_SS);
  if (cVar1 == '\0') {
    FUN_1048_12e9(iVar5,uVar6);
  }
  local_108 = *(undefined4 *)(iVar5 + 0x1f8);
  local_120 = *(int *)(iVar5 + 0x52e);
  local_11e = local_120 >> 0xf;
  local_11c = 0;
  local_118 = *(int *)(iVar5 + 0x530);
  local_116 = local_118 >> 0xf;
  local_114 = 0;
  local_110 = 2;
  local_10e = 0;
  local_10c = 0;
  cVar1 = FUN_10e0_2895((int)local_108,(int)((ulong)local_108 >> 0x10),2,&local_120,unaff_SS);
  if (cVar1 == '\0') {
    FUN_1048_12e9(iVar5,uVar6);
  }
  local_108 = *(undefined4 *)(iVar5 + 0x1f0);
  local_118 = *(int *)(iVar5 + 0x52e);
  local_116 = local_118 >> 0xf;
  local_114 = 0;
  local_110 = *(int *)(iVar5 + 0x530);
  local_10e = local_110 >> 0xf;
  local_10c = 0;
  cVar1 = FUN_10e0_2895((int)local_108,(int)((ulong)local_108 >> 0x10),1,&local_118,unaff_SS);
  if (cVar1 == '\0') {
    FUN_1048_12e9(iVar5,uVar6);
  }
  FUN_1048_1f85(iVar5,uVar6);
  return;
}



/* ---- FUN_1048_272d @ 1048:272d  (134 octets) ---- */

void __stdcall16far FUN_1048_272d(undefined4 param_1)

{
  int iVar1;
  undefined2 uVar2;
  
  FUN_1158_0444();
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  FUN_10d8_31d2((int)*(undefined4 *)(iVar1 + 0x1dc),
                (int)((ulong)*(undefined4 *)(iVar1 + 0x1dc) >> 0x10));
  FUN_10d8_31d2((int)*(undefined4 *)(iVar1 + 0x1e4),
                (int)((ulong)*(undefined4 *)(iVar1 + 0x1e4) >> 0x10));
  FUN_10d8_31d2((int)*(undefined4 *)(iVar1 + 0x1e8),
                (int)((ulong)*(undefined4 *)(iVar1 + 0x1e8) >> 0x10));
  FUN_10d8_31d2((int)*(undefined4 *)(iVar1 + 0x1e0),
                (int)((ulong)*(undefined4 *)(iVar1 + 0x1e0) >> 0x10));
  FUN_10d8_31d2((int)*(undefined4 *)(iVar1 + 0x1ec),
                (int)((ulong)*(undefined4 *)(iVar1 + 0x1ec) >> 0x10));
  FUN_10d8_31d2((int)*(undefined4 *)(iVar1 + 500),(int)((ulong)*(undefined4 *)(iVar1 + 500) >> 0x10)
               );
  FUN_10d8_31d2((int)*(undefined4 *)(iVar1 + 0x1f8),
                (int)((ulong)*(undefined4 *)(iVar1 + 0x1f8) >> 0x10));
  FUN_10d8_31d2((int)*(undefined4 *)(iVar1 + 0x1f0),
                (int)((ulong)*(undefined4 *)(iVar1 + 0x1f0) >> 0x10));
  return;
}



/* ---- FUN_1048_27b3 @ 1048:27b3  (32 octets) ---- */

void __stdcall16far FUN_1048_27b3(undefined4 param_1,undefined2 param_2)

{
  undefined2 uVar1;
  
  FUN_1158_0444();
  uVar1 = (undefined2)((ulong)param_1 >> 0x10);
  *(undefined2 *)((int)param_1 + 0x52e) = param_2;
  FUN_1048_21e1((int)param_1,uVar1);
  return;
}



/* ---- FUN_1048_27d3 @ 1048:27d3  (32 octets) ---- */

void __stdcall16far FUN_1048_27d3(undefined4 param_1,undefined2 param_2)

{
  undefined2 uVar1;
  
  FUN_1158_0444();
  uVar1 = (undefined2)((ulong)param_1 >> 0x10);
  *(undefined2 *)((int)param_1 + 0x530) = param_2;
  FUN_1048_21e1((int)param_1,uVar1);
  return;
}



/* ---- FUN_1048_2bdc @ 1048:2bdc  (27 octets) ---- */

void __stdcall16far FUN_1048_2bdc(void)

{
  FUN_1158_0444();
  FUN_1140_63a9((int)DAT_1160_2c2e,(int)((ulong)DAT_1160_2c2e >> 0x10),0xfffe);
  return;
}



/* ---- FUN_1048_2bf7 @ 1048:2bf7  (31 octets) ---- */

void __stdcall16far FUN_1048_2bf7(undefined4 param_1,undefined *param_2)

{
  FUN_1158_0444();
  FUN_1048_272d((int)param_1,(int)((ulong)param_1 >> 0x10));
  *param_2 = 1;
  return;
}



/* ---- FUN_1048_2c16 @ 1048:2c16  (24 octets) ---- */

void __stdcall16far FUN_1048_2c16(undefined4 param_1)

{
  FUN_1158_0444();
  FUN_1140_5556((int)param_1,(int)((ulong)param_1 >> 0x10));
  return;
}



/* ---- FUN_1048_2c2e @ 1048:2c2e  (48 octets) ---- */

void __stdcall16far FUN_1048_2c2e(undefined4 param_1)

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



/* ---- FUN_1048_2d87 @ 1048:2d87  (71 octets) ---- */

void __stdcall16far FUN_1048_2d87(undefined4 param_1)

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
  iVar1 = FUN_1000_3e32(*(undefined2 *)(iVar2 + 0x52e),iVar1);
  if (iVar1 != *(int *)(iVar2 + 0x52e)) {
    FUN_1048_27b3(iVar2,uVar3,iVar1);
  }
  return;
}



/* ---- FUN_1048_2dce @ 1048:2dce  (246 octets) ---- */

void __stdcall16far FUN_1048_2dce(undefined4 param_1,undefined2 param_2,undefined2 param_3)

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
    iVar4 = *(int *)(iVar5 + 0x52e);
    uVar8 = FUN_1158_2273(0x94,0x1130,param_2,param_3);
    uVar7 = 0x1130;
    uVar2 = FUN_1130_162b((int)*(undefined4 *)(iVar5 + 0x348),
                          (int)((ulong)*(undefined4 *)(iVar5 + 0x348) >> 0x10),uVar8);
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
      iVar4 = FUN_1000_3e32(*(undefined2 *)(iVar5 + 0x52e),iVar4);
    }
    if (iVar4 != *(int *)(iVar5 + 0x52e)) {
      FUN_1048_27b3(iVar5,uVar6,iVar4);
    }
  }
  return;
}



/* ---- FUN_1048_2f70 @ 1048:2f70  (41 octets) ---- */

void __stdcall16far FUN_1048_2f70(undefined4 param_1)

{
  undefined4 uVar1;
  byte extraout_AH;
  int iVar2;
  undefined2 uVar3;
  
  FUN_1158_0444();
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  iVar2 = (uint)extraout_AH * 0x100;
  if (*(char *)((int)param_1 + 0xee) == '\x02') {
    iVar2 = iVar2 + 1;
  }
  uVar1 = *(undefined4 *)((int)param_1 + 0x1bc);
  FUN_1130_1275((int)uVar1,(int)((ulong)uVar1 >> 0x10),iVar2);
  return;
}



/* ---- FUN_1048_4561 @ 1048:4561  (43 octets) ---- */

void __stdcall16far FUN_1048_4561(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined2 uVar3;
  
  FUN_1158_0444();
  uVar1 = *(undefined4 *)((int)param_1 + 0x2d8);
  uVar3 = (undefined2)((ulong)uVar1 >> 0x10);
  iVar2 = (int)uVar1;
  FUN_1140_77b2((int)DAT_1160_2c2a,(int)((ulong)DAT_1160_2c2a >> 0x10),*(undefined2 *)(iVar2 + 0x23)
                ,*(undefined2 *)(iVar2 + 0x25),1);
  return;
}



/* ---- FUN_1048_458c @ 1048:458c  (31 octets) ---- */

void __stdcall16far FUN_1048_458c(void)

{
  FUN_1158_0444();
  FUN_1140_77b2((int)DAT_1160_2c2a,(int)((ulong)DAT_1160_2c2a >> 0x10),0,0,3);
  return;
}



/* ---- FUN_1048_45ab @ 1048:45ab  (33 octets) ---- */

void __stdcall16far FUN_1048_45ab(void)

{
  FUN_1158_0444();
  FUN_1140_77b2((int)DAT_1160_2c2a,(int)((ulong)DAT_1160_2c2a >> 0x10),0x1fe,0x1160,0x105);
  return;
}



/* ---- FUN_1048_45cc @ 1048:45cc  (31 octets) ---- */

void __stdcall16far FUN_1048_45cc(void)

{
  FUN_1158_0444();
  FUN_1140_77b2((int)DAT_1160_2c2a,(int)((ulong)DAT_1160_2c2a >> 0x10),0,0,4);
  return;
}



/* ---- FUN_1048_45eb @ 1048:45eb  (29 octets) ---- */

void __stdcall16far FUN_1048_45eb(void)

{
  undefined2 uVar1;
  
  uVar1 = 0x45f6;
  FUN_1158_0444();
  FUN_1140_5d45((int)DAT_1160_2008,(int)((ulong)DAT_1160_2008 >> 0x10),uVar1);
  return;
}



/* ---- FUN_1048_4608 @ 1048:4608  (123 octets) ---- */

void __stdcall16far FUN_1048_4608(undefined4 *param_1,undefined *param_2,undefined4 param_3)

{
  undefined2 *puVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  
  uVar4 = 0x4613;
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



/* ---- FUN_1048_4683 @ 1048:4683  (183 octets) ---- */

void __stdcall16far FUN_1048_4683(undefined4 param_1)

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
    *(undefined2 *)(iVar1 + 0x6d) = 0x4608;
    *(undefined2 *)(iVar1 + 0x6f) = 0x1048;
    *(undefined2 *)(iVar1 + 0x71) = (int)param_1;
    *(undefined2 *)(iVar1 + 0x73) = (int)((ulong)param_1 >> 0x10);
  }
  return;
}



/* ---- FUN_1048_473a @ 1048:473a  (105 octets) ---- */

void __stdcall16far FUN_1048_473a(void)

{
  char cVar1;
  int iVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  char param_1;
  undefined2 param_2;
  undefined2 param_3;
  
  FUN_1158_0444();
  if (param_1 == '\x01') {
    cVar1 = FUN_1158_2255(0x5c1,0x1138,param_2,param_3);
    if (cVar1 != '\0') {
      uVar4 = FUN_1158_2273(0x5c1,0x1138,param_2,param_3);
      uVar3 = (undefined2)((ulong)uVar4 >> 0x10);
      iVar2 = (int)uVar4;
      if (*(int *)(iVar2 + 0xac) != 0 || *(int *)(iVar2 + 0xae) != 0) {
        FUN_1140_77b2((int)DAT_1160_2c2a,(int)((ulong)DAT_1160_2c2a >> 0x10),
                      *(undefined2 *)(iVar2 + 0xac),*(undefined2 *)(iVar2 + 0xae),8);
      }
    }
  }
  return;
}



/* ---- FUN_1048_47a3 @ 1048:47a3  (43 octets) ---- */

void __stdcall16far FUN_1048_47a3(undefined4 param_1)

{
  undefined4 uVar1;
  char cVar2;
  undefined2 uVar3;
  
  FUN_1158_0444();
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  uVar1 = *(undefined4 *)((int)param_1 + 0x234);
  cVar2 = FUN_1108_2f17((int)uVar1,(int)((ulong)uVar1 >> 0x10));
  if (cVar2 != '\0') {
    FUN_1048_4832((int)param_1,uVar3);
  }
  return;
}



/* ---- FUN_1048_47d6 @ 1048:47d6  (69 octets) ---- */

undefined2 __stdcall16far FUN_1048_47d6(void)

{
  undefined2 uVar1;
  undefined2 unaff_SS;
  undefined4 uVar2;
  undefined local_24 [30];
  undefined2 uStack_6;
  
  uStack_6 = 0x47e1;
  FUN_1158_0444();
  uVar2 = FUN_10f0_2a04((int)DAT_1160_2c54,(int)((ulong)DAT_1160_2c54 >> 0x10));
  uVar1 = FUN_1128_21d2(uVar2);
  GETTEXTMETRICS(0x1128,local_24,unaff_SS);
  uVar1 = FUN_1158_0416(uVar1);
  return uVar1;
}



/* ---- FUN_1048_4832 @ 1048:4832  (1112 octets) ---- */

void __cdecl16far FUN_1048_4832(undefined4 param_1)

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
  
  local_6 = 0x483d;
  FUN_1158_0444();
  uVar9 = (undefined2)((ulong)param_1 >> 0x10);
  iVar6 = (int)param_1;
  uStack_418 = 0x1158;
  puStack_416 = (undefined *)iVar6;
  puStack_414 = (undefined *)uVar9;
  FUN_1048_4fd6();
  puStack_414 = local_106;
  puStack_416 = (undefined *)0x1048;
  uStack_418 = 0x4858;
  FUN_10f0_204e();
  puStack_414 = local_106;
  puStack_416 = (undefined *)0x10f0;
  uStack_418 = 0x4863;
  FUN_1158_09f5();
  puStack_414 = (undefined *)0x4868;
  FUN_1158_0408();
  puStack_414 = (undefined *)0x482c;
  uStack_418 = DAT_1160_1858;
  DAT_1160_1858 = (undefined4 *)&uStack_418;
  puStack_416 = &stack0xfffe;
  local_210 = FUN_10f0_2a04((int)DAT_1160_2c54,(int)((ulong)DAT_1160_2c54 >> 0x10));
  uVar11 = *(undefined4 *)((int)DAT_1160_18f6 + 0x2c8);
  uVar10 = (undefined2)((ulong)uVar11 >> 0x10);
  iVar7 = (int)uVar11;
  FUN_1128_2099(local_210,*(undefined2 *)(iVar7 + 0x34),*(undefined2 *)(iVar7 + 0x36));
  uVar10 = 8;
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
    FUN_1158_0db5(0,0x481b,uVar10);
    FUN_1158_0c78(puVar13,uVar14);
    uVar10 = 0x1158;
    FUN_1158_0408();
    if (iVar7 == 3) break;
    iVar7 = iVar7 + 1;
  }
  local_210 = *(undefined4 *)(iVar6 + 0x2f4);
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
        local_6 = FUN_1158_1878(local_206,unaff_SS,0x481c,0x1158);
        if (0 < local_6) {
          FUN_1158_1975(1,local_6,local_206,unaff_SS);
          FUN_1158_1916(local_6,0xff,local_206,unaff_SS,0x481e,0x1158);
        }
      } while (local_6 != 0);
      puVar13 = local_312;
      uVar10 = unaff_SS;
      FUN_1158_17cd(0x4820,0x1158);
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
  uVar3 = FUN_1048_47d6(&stack0xfffe);
  if (0xfffd < uVar3) {
    FUN_1158_043e(0x1048);
  }
  local_208 = FUN_1158_0416();
  puVar13 = local_410;
  uVar14 = unaff_SS;
  FUN_1158_17cd(0x4820,0x1158);
  puVar12 = local_310;
  uVar10 = unaff_SS;
  FUN_1138_1d53((int)*(undefined4 *)(iVar6 + 0x2e4),
                (int)((ulong)*(undefined4 *)(iVar6 + 0x2e4) >> 0x10));
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
  FUN_1158_17cd(0x4820,0x1128);
  puVar12 = local_310;
  uVar10 = unaff_SS;
  FUN_1138_1d53((int)*(undefined4 *)(iVar6 + 0x2e8),
                (int)((ulong)*(undefined4 *)(iVar6 + 0x2e8) >> 0x10));
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
  FUN_1158_17cd(0x4820,0x1128);
  puVar12 = local_310;
  uVar10 = unaff_SS;
  FUN_1138_1d53((int)*(undefined4 *)(iVar6 + 0x2ec),
                (int)((ulong)*(undefined4 *)(iVar6 + 0x2ec) >> 0x10));
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
  FUN_1158_17cd(0x4820,0x1128);
  puVar12 = local_310;
  uVar10 = unaff_SS;
  FUN_1138_1d53((int)*(undefined4 *)(iVar6 + 0x2f0),
                (int)((ulong)*(undefined4 *)(iVar6 + 0x2f0) >> 0x10));
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
  uStack_418 = 0x4c8a;
  FUN_1158_0a4f(local_106,unaff_SS);
  FUN_1158_0408();
  FUN_1120_49e3((int)*(undefined4 *)(iVar6 + 0x2f4),
                (int)((ulong)*(undefined4 *)(iVar6 + 0x2f4) >> 0x10));
  return;
}



/* ---- FUN_1048_4c8e @ 1048:4c8e  (71 octets) ---- */

void __stdcall16far FUN_1048_4c8e(undefined4 param_1)

{
  undefined4 uVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  
  FUN_1158_0444();
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  FUN_1048_4fd6((int)param_1,uVar2,0);
  uVar1 = *(undefined4 *)((int)param_1 + 0x2f4);
  uVar3 = (undefined2)((ulong)uVar1 >> 0x10);
  uVar2 = (undefined2)uVar1;
  FUN_1120_4a3f(uVar2,uVar3);
  FUN_1120_49ff(uVar2,uVar3);
  FUN_1120_49e3(uVar2,uVar3);
  return;
}



/* ---- FUN_1048_4cd9 @ 1048:4cd9  (760 octets) ---- */

void __stdcall16far
FUN_1048_4cd9(int param_1,int param_2,undefined4 param_3,undefined2 param_4,byte *param_5)

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
  
  uStack_6 = 0x4ce4;
  FUN_1158_0444();
  uVar4 = (undefined2)((ulong)param_3 >> 0x10);
  iVar2 = (int)param_3;
  if (*(char *)(iVar2 + 0x29) != '\0') {
    local_102 = 0;
    pbVar3 = (byte *)param_5;
    uVar5 = (undefined2)((ulong)param_5 >> 0x10);
    if (*(int *)(param_1 + 10) == 0) {
      if (*param_5 != 0) {
        puVar6 = local_204;
        uVar7 = unaff_SS;
        FUN_1158_17cd(pbVar3,uVar5);
        FUN_1158_184c(0x4cd5,0x1158);
        FUN_1158_17e7(param_4,pbVar3,uVar5,puVar6,uVar7);
      }
    }
    else if (*(int *)(param_1 + 10) == 1) {
      local_104 = (uint)*param_5;
      while ((int)local_104 < param_2) {
        local_104 = local_104 + 1;
        puVar6 = local_204;
        uVar7 = unaff_SS;
        FUN_1158_17cd(pbVar3,uVar5);
        FUN_1158_184c(0x4cd7,0x1158);
        FUN_1158_17e7(param_4,pbVar3,uVar5,puVar6,uVar7);
      }
    }
    cVar1 = FUN_1158_2255(0x10c,0x1120,iVar2,uVar4);
    if (cVar1 != '\0') {
      local_108 = FUN_1158_2273(0x10c,0x1120,iVar2,uVar4);
      puVar6 = local_208;
      uVar7 = unaff_SS;
      FUN_1138_1d53(local_108);
      FUN_1158_17e7(0xff,&local_102,unaff_SS,puVar6,uVar7);
      while (local_101 == ' ' && local_102 != 0) {
        FUN_1158_1975(1,1,&local_102,unaff_SS);
      }
    }
    cVar1 = FUN_1158_2255(0xdad,0x1118,iVar2,uVar4);
    if (cVar1 != '\0') {
      local_108 = FUN_1158_2273(0xdad,0x1118,iVar2,uVar4);
      puVar6 = local_208;
      uVar7 = unaff_SS;
      FUN_1138_1d53(local_108);
      FUN_1158_17e7(0xff,&local_102,unaff_SS,puVar6,uVar7);
      while (local_101 == ' ' && local_102 != 0) {
        FUN_1158_1975(1,1,&local_102,unaff_SS);
      }
    }
    cVar1 = FUN_1158_2255(0x617,0x1120,iVar2,uVar4);
    if (cVar1 != '\0') {
      local_108 = FUN_1158_2273(0x617,0x1120,iVar2,uVar4);
      puVar6 = local_208;
      uVar7 = unaff_SS;
      FUN_1138_1d53(local_108);
      FUN_1158_17e7(0xff,&local_102,unaff_SS,puVar6,uVar7);
      while (local_101 == ' ' && local_102 != 0) {
        FUN_1158_1975(1,1,&local_102,unaff_SS);
      }
    }
    cVar1 = FUN_1158_2255(0x22,0x10d0,iVar2,uVar4);
    if (cVar1 != '\0') {
      local_108 = FUN_1158_2273(0x22,0x10d0,iVar2,uVar4);
      puVar6 = local_208;
      uVar4 = unaff_SS;
      FUN_1100_1524(local_108);
      FUN_1158_17e7(0xff,&local_102,unaff_SS,puVar6,uVar4);
      if (0 < param_2) {
        local_104 = (uint)local_102;
        while ((int)local_104 < 0x12) {
          local_104 = local_104 + 1;
          puVar6 = local_208;
          uVar4 = unaff_SS;
          FUN_1158_17cd(0x4cd7,0x1158);
          FUN_1158_184c(&local_102,unaff_SS);
          FUN_1158_17e7(0xff,&local_102,unaff_SS,puVar6,uVar4);
        }
      }
    }
    puVar6 = local_204;
    uVar4 = unaff_SS;
    FUN_1158_17cd(pbVar3,uVar5);
    FUN_1158_184c(&local_102,unaff_SS);
    FUN_1158_17e7(param_4,pbVar3,uVar5,puVar6,uVar4);
  }
  return;
}



/* ---- FUN_1048_4fd6 @ 1048:4fd6  (3222 octets) ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __stdcall16far FUN_1048_4fd6(undefined4 param_1,int param_2)

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
  
  uStack_6 = 0x4fe1;
  FUN_1158_0444();
  uVar4 = (undefined2)((ulong)param_1 >> 0x10);
  iVar3 = (int)param_1;
  local_104 = (undefined2)((ulong)*(undefined4 *)(iVar3 + 0x2f4) >> 0x10);
  local_106 = (int)*(undefined4 *)(iVar3 + 0x2f4);
  FUN_1120_49e3(local_106,local_104);
  local_102[0] = '\0';
  FUN_1048_4cd9(&stack0xfffe,0,*(undefined2 *)(iVar3 + 0x184),*(undefined2 *)(iVar3 + 0x186),0xff,
                local_102,unaff_SS);
  puVar5 = local_206;
  uVar8 = unaff_SS;
  FUN_1158_17cd(local_102,unaff_SS);
  FUN_1158_184c(0x4fd1,0x1158);
  puVar7 = local_306;
  uVar6 = unaff_SS;
  FUN_1138_1d53((int)*(undefined4 *)(iVar3 + 0x188),
                (int)((ulong)*(undefined4 *)(iVar3 + 0x188) >> 0x10));
  FUN_1158_184c(puVar7,uVar6);
  FUN_1158_17e7(0xff,local_102,unaff_SS,puVar5,uVar8);
  puVar2 = (undefined4 *)*(undefined4 *)(local_106 + 0xec);
  puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
  (*(code *)*puVar1)(0x1158,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),local_102);
  if (param_2 == 1) {
    puVar2 = (undefined4 *)*(undefined4 *)(local_106 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)(0x1158,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),0x4fd3,0x1158);
  }
  local_102[0] = '\0';
  FUN_1048_4cd9(&stack0xfffe,10,*(undefined2 *)(iVar3 + 0x18c),*(undefined2 *)(iVar3 + 0x18e),0xff,
                local_102,unaff_SS);
  puVar5 = local_206;
  uVar8 = unaff_SS;
  FUN_1158_17cd(local_102,unaff_SS);
  FUN_1158_184c(0x4fd4,0x1158);
  puVar7 = local_306;
  uVar6 = unaff_SS;
  FUN_1138_1d53((int)*(undefined4 *)(iVar3 + 400),(int)((ulong)*(undefined4 *)(iVar3 + 400) >> 0x10)
               );
  FUN_1158_184c(puVar7,uVar6);
  FUN_1158_17e7(0xff,local_102,unaff_SS,puVar5,uVar8);
  FUN_1048_4cd9(&stack0xfffe,0x25,*(undefined2 *)(iVar3 + 0x19c),*(undefined2 *)(iVar3 + 0x19e),0xff
                ,local_102,unaff_SS);
  FUN_1048_4cd9(&stack0xfffe,0x46,*(undefined2 *)(iVar3 + 0x194),*(undefined2 *)(iVar3 + 0x196),0xff
                ,local_102,unaff_SS);
  puVar5 = local_206;
  uVar8 = unaff_SS;
  FUN_1158_17cd(local_102,unaff_SS);
  FUN_1158_184c(0x4fd4,0x1158);
  puVar7 = local_306;
  uVar6 = unaff_SS;
  FUN_1138_1d53((int)*(undefined4 *)(iVar3 + 0x198),
                (int)((ulong)*(undefined4 *)(iVar3 + 0x198) >> 0x10));
  FUN_1158_184c(puVar7,uVar6);
  FUN_1158_17e7(0xff,local_102,unaff_SS,puVar5,uVar8);
  puVar2 = (undefined4 *)*(undefined4 *)(local_106 + 0xec);
  puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
  (*(code *)*puVar1)(0x1158,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),local_102);
  if (param_2 == 1) {
    puVar2 = (undefined4 *)*(undefined4 *)(local_106 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)(0x1158,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),0x4fd3,0x1158);
  }
  local_102[0] = '\0';
  FUN_1048_4cd9(&stack0xfffe,s_Erreur_1160_0202._0_2_,*(undefined2 *)(iVar3 + 0x3a0),
                *(undefined2 *)(iVar3 + 0x3a2),0xff,local_102,unaff_SS);
  if (local_102[0] != '\0') {
    puVar2 = (undefined4 *)*(undefined4 *)(local_106 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)(0x1048,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),local_102);
  }
  local_102[0] = '\0';
  FUN_1048_4cd9(&stack0xfffe,s_Erreur_1160_0202._2_2_,*(undefined2 *)(iVar3 + 0x3a4),
                *(undefined2 *)(iVar3 + 0x3a6),0xff,local_102,unaff_SS);
  puVar5 = local_206;
  uVar6 = unaff_SS;
  FUN_1158_17cd(local_102,unaff_SS);
  FUN_1158_184c(0x4fd1,0x1158);
  FUN_1158_17e7(0xff,local_102,unaff_SS,puVar5,uVar6);
  FUN_1048_4cd9(&stack0xfffe,ram0x11600208,*(undefined2 *)(iVar3 + 0x3d0),
                *(undefined2 *)(iVar3 + 0x3d2),0xff,local_102,unaff_SS);
  if (local_102[0] != '\0') {
    puVar2 = (undefined4 *)*(undefined4 *)(local_106 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)(0x1048,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),local_102);
  }
  local_102[0] = '\0';
  FUN_1048_4cd9(&stack0xfffe,s_Erreur_1160_0202._2_2_,*(undefined2 *)(iVar3 + 0x4b0),
                *(undefined2 *)(iVar3 + 0x4b2),0xff,local_102,unaff_SS);
  FUN_1048_4cd9(&stack0xfffe,s_Erreur_1160_0202._4_2_,*(undefined2 *)(iVar3 + 0x4b4),
                *(undefined2 *)(iVar3 + 0x4b6),0xff,local_102,unaff_SS);
  FUN_1048_4cd9(&stack0xfffe,ram0x11600208,*(undefined2 *)(iVar3 + 0x3dc),
                *(undefined2 *)(iVar3 + 0x3de),0xff,local_102,unaff_SS);
  FUN_1048_4cd9(&stack0xfffe,DAT_1160_020a,*(undefined2 *)(iVar3 + 0x3ec),
                *(undefined2 *)(iVar3 + 0x3ee),0xff,local_102,unaff_SS);
  if (local_102[0] != '\0') {
    puVar2 = (undefined4 *)*(undefined4 *)(local_106 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)(0x1048,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),local_102);
  }
  local_102[0] = '\0';
  FUN_1048_4cd9(&stack0xfffe,s_Erreur_1160_0202._2_2_,*(undefined2 *)(iVar3 + 0x3b0),
                *(undefined2 *)(iVar3 + 0x3b2),0xff,local_102,unaff_SS);
  FUN_1048_4cd9(&stack0xfffe,s_Erreur_1160_0202._4_2_,*(undefined2 *)(iVar3 + 0x3bc),
                *(undefined2 *)(iVar3 + 0x3be),0xff,local_102,unaff_SS);
  FUN_1048_4cd9(&stack0xfffe,ram0x11600208,*(undefined2 *)(iVar3 + 0x3e0),
                *(undefined2 *)(iVar3 + 0x3e2),0xff,local_102,unaff_SS);
  FUN_1048_4cd9(&stack0xfffe,DAT_1160_020a,*(undefined2 *)(iVar3 + 0x3f0),
                *(undefined2 *)(iVar3 + 0x3f2),0xff,local_102,unaff_SS);
  if (local_102[0] != '\0') {
    puVar2 = (undefined4 *)*(undefined4 *)(local_106 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)(0x1048,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),local_102);
  }
  local_102[0] = '\0';
  FUN_1048_4cd9(&stack0xfffe,s_Erreur_1160_0202._2_2_,*(undefined2 *)(iVar3 + 0x3b4),
                *(undefined2 *)(iVar3 + 0x3b6),0xff,local_102,unaff_SS);
  FUN_1048_4cd9(&stack0xfffe,s_Erreur_1160_0202._4_2_,*(undefined2 *)(iVar3 + 0x3c0),
                *(undefined2 *)(iVar3 + 0x3c2),0xff,local_102,unaff_SS);
  FUN_1048_4cd9(&stack0xfffe,ram0x11600208,*(undefined2 *)(iVar3 + 0x3e4),
                *(undefined2 *)(iVar3 + 0x3e6),0xff,local_102,unaff_SS);
  FUN_1048_4cd9(&stack0xfffe,DAT_1160_020a,*(undefined2 *)(iVar3 + 0x3f4),
                *(undefined2 *)(iVar3 + 0x3f6),0xff,local_102,unaff_SS);
  if (local_102[0] != '\0') {
    puVar2 = (undefined4 *)*(undefined4 *)(local_106 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)(0x1048,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),local_102);
  }
  local_102[0] = '\0';
  FUN_1048_4cd9(&stack0xfffe,s_Erreur_1160_0202._2_2_,*(undefined2 *)(iVar3 + 0x3b8),
                *(undefined2 *)(iVar3 + 0x3ba),0xff,local_102,unaff_SS);
  FUN_1048_4cd9(&stack0xfffe,s_Erreur_1160_0202._4_2_,*(undefined2 *)(iVar3 + 0x3c4),
                *(undefined2 *)(iVar3 + 0x3c6),0xff,local_102,unaff_SS);
  FUN_1048_4cd9(&stack0xfffe,ram0x11600208,*(undefined2 *)(iVar3 + 1000),
                *(undefined2 *)(iVar3 + 0x3ea),0xff,local_102,unaff_SS);
  FUN_1048_4cd9(&stack0xfffe,DAT_1160_020a,*(undefined2 *)(iVar3 + 0x3f8),
                *(undefined2 *)(iVar3 + 0x3fa),0xff,local_102,unaff_SS);
  if (local_102[0] != '\0') {
    puVar2 = (undefined4 *)*(undefined4 *)(local_106 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)(0x1048,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),local_102);
  }
  local_102[0] = '\0';
  FUN_1048_4cd9(&stack0xfffe,s_Erreur_1160_0202._2_2_,*(undefined2 *)(iVar3 + 0x3c8),
                *(undefined2 *)(iVar3 + 0x3ca),0xff,local_102,unaff_SS);
  FUN_1048_4cd9(&stack0xfffe,s_Erreur_1160_0202._4_2_,*(undefined2 *)(iVar3 + 0x3cc),
                *(undefined2 *)(iVar3 + 0x3ce),0xff,local_102,unaff_SS);
  FUN_1048_4cd9(&stack0xfffe,ram0x11600208,*(undefined2 *)(iVar3 + 0x3fc),
                *(undefined2 *)(iVar3 + 0x3fe),0xff,local_102,unaff_SS);
  FUN_1048_4cd9(&stack0xfffe,DAT_1160_020a,*(undefined2 *)(iVar3 + 0x400),
                *(undefined2 *)(iVar3 + 0x402),0xff,local_102,unaff_SS);
  if (local_102[0] != '\0') {
    puVar2 = (undefined4 *)*(undefined4 *)(local_106 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)(0x1048,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),local_102);
  }
  local_102[0] = '\0';
  FUN_1048_4cd9(&stack0xfffe,s_Erreur_1160_0202._2_2_,*(undefined2 *)(iVar3 + 0x404),
                *(undefined2 *)(iVar3 + 0x406),0xff,local_102,unaff_SS);
  FUN_1048_4cd9(&stack0xfffe,s_Erreur_1160_0202._4_2_,*(undefined2 *)(iVar3 + 0x408),
                *(undefined2 *)(iVar3 + 0x40a),0xff,local_102,unaff_SS);
  FUN_1048_4cd9(&stack0xfffe,ram0x11600208,*(undefined2 *)(iVar3 + 0x40c),
                *(undefined2 *)(iVar3 + 0x40e),0xff,local_102,unaff_SS);
  FUN_1048_4cd9(&stack0xfffe,DAT_1160_020a,*(undefined2 *)(iVar3 + 0x410),
                *(undefined2 *)(iVar3 + 0x412),0xff,local_102,unaff_SS);
  if (local_102[0] != '\0') {
    puVar2 = (undefined4 *)*(undefined4 *)(local_106 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)(0x1048,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),local_102);
  }
  if (param_2 == 1) {
    puVar2 = (undefined4 *)*(undefined4 *)(local_106 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)(0x1048,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),0x4fd3,0x1048);
  }
  local_102[0] = '\0';
  FUN_1048_4cd9(&stack0xfffe,s_Erreur_1160_0202._0_2_,*(undefined2 *)(iVar3 + 0x414),
                *(undefined2 *)(iVar3 + 0x416),0xff,local_102,unaff_SS);
  if (local_102[0] != '\0') {
    puVar2 = (undefined4 *)*(undefined4 *)(local_106 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)(0x1048,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),local_102);
  }
  local_102[0] = '\0';
  FUN_1048_4cd9(&stack0xfffe,s_Erreur_1160_0202._2_2_,*(undefined2 *)(iVar3 + 0x418),
                *(undefined2 *)(iVar3 + 0x41a),0xff,local_102,unaff_SS);
  puVar5 = local_206;
  uVar6 = unaff_SS;
  FUN_1158_17cd(local_102,unaff_SS);
  FUN_1158_184c(0x4fd1,0x1158);
  FUN_1158_17e7(0xff,local_102,unaff_SS,puVar5,uVar6);
  FUN_1048_4cd9(&stack0xfffe,ram0x11600208,*(undefined2 *)(iVar3 + 0x45c),
                *(undefined2 *)(iVar3 + 0x45e),0xff,local_102,unaff_SS);
  if (local_102[0] != '\0') {
    puVar2 = (undefined4 *)*(undefined4 *)(local_106 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)(0x1048,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),local_102);
  }
  local_102[0] = '\0';
  FUN_1048_4cd9(&stack0xfffe,s_Erreur_1160_0202._2_2_,*(undefined2 *)(iVar3 + 0x424),
                *(undefined2 *)(iVar3 + 0x426),0xff,local_102,unaff_SS);
  FUN_1048_4cd9(&stack0xfffe,s_Erreur_1160_0202._4_2_,*(undefined2 *)(iVar3 + 0x434),
                *(undefined2 *)(iVar3 + 0x436),0xff,local_102,unaff_SS);
  FUN_1048_4cd9(&stack0xfffe,ram0x11600208,*(undefined2 *)(iVar3 + 0x468),
                *(undefined2 *)(iVar3 + 0x46a),0xff,local_102,unaff_SS);
  FUN_1048_4cd9(&stack0xfffe,DAT_1160_020a,*(undefined2 *)(iVar3 + 0x478),
                *(undefined2 *)(iVar3 + 0x47a),0xff,local_102,unaff_SS);
  if (local_102[0] != '\0') {
    puVar2 = (undefined4 *)*(undefined4 *)(local_106 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)(0x1048,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),local_102);
  }
  local_102[0] = '\0';
  FUN_1048_4cd9(&stack0xfffe,s_Erreur_1160_0202._2_2_,*(undefined2 *)(iVar3 + 0x428),
                *(undefined2 *)(iVar3 + 0x42a),0xff,local_102,unaff_SS);
  FUN_1048_4cd9(&stack0xfffe,s_Erreur_1160_0202._4_2_,*(undefined2 *)(iVar3 + 0x438),
                *(undefined2 *)(iVar3 + 0x43a),0xff,local_102,unaff_SS);
  FUN_1048_4cd9(&stack0xfffe,ram0x11600208,*(undefined2 *)(iVar3 + 0x46c),
                *(undefined2 *)(iVar3 + 0x46e),0xff,local_102,unaff_SS);
  FUN_1048_4cd9(&stack0xfffe,DAT_1160_020a,*(undefined2 *)(iVar3 + 0x47c),
                *(undefined2 *)(iVar3 + 0x47e),0xff,local_102,unaff_SS);
  if (local_102[0] != '\0') {
    puVar2 = (undefined4 *)*(undefined4 *)(local_106 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)(0x1048,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),local_102);
  }
  local_102[0] = '\0';
  FUN_1048_4cd9(&stack0xfffe,s_Erreur_1160_0202._2_2_,*(undefined2 *)(iVar3 + 0x42c),
                *(undefined2 *)(iVar3 + 0x42e),0xff,local_102,unaff_SS);
  FUN_1048_4cd9(&stack0xfffe,s_Erreur_1160_0202._4_2_,*(undefined2 *)(iVar3 + 0x43c),
                *(undefined2 *)(iVar3 + 0x43e),0xff,local_102,unaff_SS);
  FUN_1048_4cd9(&stack0xfffe,ram0x11600208,*(undefined2 *)(iVar3 + 0x470),
                *(undefined2 *)(iVar3 + 0x472),0xff,local_102,unaff_SS);
  FUN_1048_4cd9(&stack0xfffe,DAT_1160_020a,*(undefined2 *)(iVar3 + 0x480),
                *(undefined2 *)(iVar3 + 0x482),0xff,local_102,unaff_SS);
  if (local_102[0] != '\0') {
    puVar2 = (undefined4 *)*(undefined4 *)(local_106 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)(0x1048,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),local_102);
  }
  local_102[0] = '\0';
  FUN_1048_4cd9(&stack0xfffe,s_Erreur_1160_0202._2_2_,*(undefined2 *)(iVar3 + 0x430),
                *(undefined2 *)(iVar3 + 0x432),0xff,local_102,unaff_SS);
  FUN_1048_4cd9(&stack0xfffe,s_Erreur_1160_0202._4_2_,*(undefined2 *)(iVar3 + 0x440),
                *(undefined2 *)(iVar3 + 0x442),0xff,local_102,unaff_SS);
  FUN_1048_4cd9(&stack0xfffe,ram0x11600208,*(undefined2 *)(iVar3 + 0x474),
                *(undefined2 *)(iVar3 + 0x476),0xff,local_102,unaff_SS);
  FUN_1048_4cd9(&stack0xfffe,DAT_1160_020a,*(undefined2 *)(iVar3 + 0x484),
                *(undefined2 *)(iVar3 + 0x486),0xff,local_102,unaff_SS);
  if (local_102[0] != '\0') {
    puVar2 = (undefined4 *)*(undefined4 *)(local_106 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)(0x1048,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),local_102);
  }
  local_102[0] = '\0';
  FUN_1048_4cd9(&stack0xfffe,s_Erreur_1160_0202._2_2_,*(undefined2 *)(iVar3 + 0x44c),
                *(undefined2 *)(iVar3 + 0x44e),0xff,local_102,unaff_SS);
  FUN_1048_4cd9(&stack0xfffe,s_Erreur_1160_0202._4_2_,*(undefined2 *)(iVar3 + 0x450),
                *(undefined2 *)(iVar3 + 0x452),0xff,local_102,unaff_SS);
  FUN_1048_4cd9(&stack0xfffe,ram0x11600208,*(undefined2 *)(iVar3 + 0x490),
                *(undefined2 *)(iVar3 + 0x492),0xff,local_102,unaff_SS);
  FUN_1048_4cd9(&stack0xfffe,DAT_1160_020a,*(undefined2 *)(iVar3 + 0x494),
                *(undefined2 *)(iVar3 + 0x496),0xff,local_102,unaff_SS);
  if (local_102[0] != '\0') {
    puVar2 = (undefined4 *)*(undefined4 *)(local_106 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)(0x1048,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),local_102);
  }
  local_102[0] = '\0';
  FUN_1048_4cd9(&stack0xfffe,s_Erreur_1160_0202._2_2_,*(undefined2 *)(iVar3 + 0x454),
                *(undefined2 *)(iVar3 + 0x456),0xff,local_102,unaff_SS);
  FUN_1048_4cd9(&stack0xfffe,s_Erreur_1160_0202._4_2_,*(undefined2 *)(iVar3 + 0x458),
                *(undefined2 *)(iVar3 + 0x45a),0xff,local_102,unaff_SS);
  FUN_1048_4cd9(&stack0xfffe,ram0x11600208,*(undefined2 *)(iVar3 + 0x498),
                *(undefined2 *)(iVar3 + 0x49a),0xff,local_102,unaff_SS);
  FUN_1048_4cd9(&stack0xfffe,DAT_1160_020a,*(undefined2 *)(iVar3 + 0x49c),
                *(undefined2 *)(iVar3 + 0x49e),0xff,local_102,unaff_SS);
  if (local_102[0] != '\0') {
    puVar2 = (undefined4 *)*(undefined4 *)(local_106 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)(0x1048,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),local_102);
  }
  local_102[0] = '\0';
  FUN_1048_4cd9(&stack0xfffe,s_Erreur_1160_0202._2_2_,*(undefined2 *)(iVar3 + 0x444),
                *(undefined2 *)(iVar3 + 0x446),0xff,local_102,unaff_SS);
  FUN_1048_4cd9(&stack0xfffe,s_Erreur_1160_0202._4_2_,*(undefined2 *)(iVar3 + 0x448),
                *(undefined2 *)(iVar3 + 0x44a),0xff,local_102,unaff_SS);
  FUN_1048_4cd9(&stack0xfffe,ram0x11600208,*(undefined2 *)(iVar3 + 0x488),
                *(undefined2 *)(iVar3 + 0x48a),0xff,local_102,unaff_SS);
  FUN_1048_4cd9(&stack0xfffe,DAT_1160_020a,*(undefined2 *)(iVar3 + 0x48c),
                *(undefined2 *)(iVar3 + 0x48e),0xff,local_102,unaff_SS);
  if (local_102[0] != '\0') {
    puVar2 = (undefined4 *)*(undefined4 *)(local_106 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)(0x1048,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),local_102);
  }
  local_102[0] = '\0';
  FUN_1048_4cd9(&stack0xfffe,s_Erreur_1160_0202._2_2_,*(undefined2 *)(iVar3 + 0x4a0),
                *(undefined2 *)(iVar3 + 0x4a2),0xff,local_102,unaff_SS);
  FUN_1048_4cd9(&stack0xfffe,s_Erreur_1160_0202._4_2_,*(undefined2 *)(iVar3 + 0x4a4),
                *(undefined2 *)(iVar3 + 0x4a6),0xff,local_102,unaff_SS);
  FUN_1048_4cd9(&stack0xfffe,ram0x11600208,*(undefined2 *)(iVar3 + 0x4a8),
                *(undefined2 *)(iVar3 + 0x4aa),0xff,local_102,unaff_SS);
  FUN_1048_4cd9(&stack0xfffe,DAT_1160_020a,*(undefined2 *)(iVar3 + 0x4ac),
                *(undefined2 *)(iVar3 + 0x4ae),0xff,local_102,unaff_SS);
  if (local_102[0] != '\0') {
    puVar2 = (undefined4 *)*(undefined4 *)(local_106 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)(0x1048,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),local_102);
  }
  return;
}



/* ---- FUN_1048_5c6c @ 1048:5c6c  (46 octets) ---- */

void __stdcall16far FUN_1048_5c6c(undefined4 param_1)

{
  int iVar1;
  undefined2 uVar2;
  
  FUN_1158_0444();
  DAT_1160_0144 = 0x15;
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  DAT_1160_0146 = *(undefined2 *)(iVar1 + 0x530);
  DAT_1160_0148 = *(undefined2 *)(iVar1 + 0x52e);
  FUN_1140_5556(iVar1,uVar2);
  return;
}



/* ---- FUN_1048_5c9a @ 1048:5c9a  (46 octets) ---- */

void __stdcall16far FUN_1048_5c9a(undefined4 param_1)

{
  int iVar1;
  undefined2 uVar2;
  
  FUN_1158_0444();
  DAT_1160_0144 = 0x16;
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  DAT_1160_0146 = *(undefined2 *)(iVar1 + 0x530);
  DAT_1160_0148 = *(undefined2 *)(iVar1 + 0x52e);
  FUN_1140_5556(iVar1,uVar2);
  return;
}



/* ---- FUN_1048_5cc8 @ 1048:5cc8  (46 octets) ---- */

void __stdcall16far FUN_1048_5cc8(undefined4 param_1)

{
  int iVar1;
  undefined2 uVar2;
  
  FUN_1158_0444();
  DAT_1160_0144 = 0x17;
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  DAT_1160_0146 = *(undefined2 *)(iVar1 + 0x530);
  DAT_1160_0148 = *(undefined2 *)(iVar1 + 0x52e);
  FUN_1140_5556(iVar1,uVar2);
  return;
}



/* ---- FUN_1048_5cf6 @ 1048:5cf6  (46 octets) ---- */

void __stdcall16far FUN_1048_5cf6(undefined4 param_1)

{
  int iVar1;
  undefined2 uVar2;
  
  FUN_1158_0444();
  DAT_1160_0144 = 0x18;
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  DAT_1160_0146 = *(undefined2 *)(iVar1 + 0x530);
  DAT_1160_0148 = *(undefined2 *)(iVar1 + 0x52e);
  FUN_1140_5556(iVar1,uVar2);
  return;
}



/* ---- FUN_1048_5d24 @ 1048:5d24  (46 octets) ---- */

void __stdcall16far FUN_1048_5d24(undefined4 param_1)

{
  int iVar1;
  undefined2 uVar2;
  
  FUN_1158_0444();
  DAT_1160_0144 = 0x19;
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  DAT_1160_0146 = *(undefined2 *)(iVar1 + 0x530);
  DAT_1160_0148 = *(undefined2 *)(iVar1 + 0x52e);
  FUN_1140_5556(iVar1,uVar2);
  return;
}



/* ---- FUN_1048_5d52 @ 1048:5d52  (46 octets) ---- */

void __stdcall16far FUN_1048_5d52(undefined4 param_1)

{
  int iVar1;
  undefined2 uVar2;
  
  FUN_1158_0444();
  DAT_1160_0144 = 0x1a;
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  DAT_1160_0146 = *(undefined2 *)(iVar1 + 0x530);
  DAT_1160_0148 = *(undefined2 *)(iVar1 + 0x52e);
  FUN_1140_5556(iVar1,uVar2);
  return;
}



/* ---- FUN_1048_5d80 @ 1048:5d80  (36 octets) ---- */

void __stdcall16far FUN_1048_5d80(undefined4 param_1)

{
  undefined2 uVar1;
  
  FUN_1158_0444();
  uVar1 = (undefined2)((ulong)param_1 >> 0x10);
  FUN_1078_0ca1(*(undefined2 *)((int)param_1 + 0x530),*(undefined2 *)((int)param_1 + 0x52e),
                DAT_1160_0150);
  return;
}




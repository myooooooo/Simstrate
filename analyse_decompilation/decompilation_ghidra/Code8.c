/* Simstrat (FR).EXE - segment Code8 - 48 fonctions
   Decompile par Ghidra 11.2.1 (x86 16 bits, chargeur NE). */

/* ---- FUN_1038_1408 @ 1038:1408  (43 octets) ---- */

void __stdcall16far FUN_1038_1408(undefined4 param_1)

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



/* ---- FUN_1038_1439 @ 1038:1439  (188 octets) ---- */

void __stdcall16far FUN_1038_1439(undefined2 param_1,int param_2)

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
  
  _local_6 = CONCAT22(unaff_CS,0x1444);
  FUN_1158_0444();
  uStack_c = (undefined2)((ulong)DAT_1160_2c2a >> 0x10);
  uStack_e = (undefined2)DAT_1160_2c2a;
  uStack_10 = 0x1158;
  uStack_12 = 0x1452;
  FUN_1140_7303();
  if (param_2 < 1) {
    return;
  }
  uStack_c = DAT_1160_2c2a._2_2_;
  uStack_e = (undefined2)DAT_1160_2c2a;
  uStack_10 = CONCAT11(extraout_AH,1);
  uStack_12 = 0x1038;
  uStack_14 = 0x22;
  uStack_16 = 0x1140;
  uStack_18 = 0x1473;
  local_a = FUN_1140_2553();
  uVar2 = (undefined2)((ulong)local_a >> 0x10);
  local_6 = (int)local_a;
  uStack_16 = 0x1140;
  uStack_18 = 0x1433;
  uStack_1c = DAT_1160_1858;
  DAT_1160_1858 = &uStack_1c;
  *(undefined2 *)(local_6 + 0x594) = param_1;
  *(int *)(local_6 + 0x592) = param_2;
  puStack_1a = &stack0xfffe;
  FUN_1038_212c(local_a);
  FUN_1038_2c07(local_a,*(undefined2 *)((int)local_a + 0x592));
  FUN_1138_1ed5(local_a,0xfff0,0xffff);
  FUN_1140_3a14(local_a,2);
  uVar1 = (int)local_a;
  FUN_1140_5d45(local_a);
  DAT_1160_1858 = (undefined2 *)uVar1;
  puStack_1a = (undefined *)0x1140;
  uStack_1c = 0x14f1;
  FUN_1140_5f1d(local_6,uVar2);
  return;
}



/* ---- FUN_1038_14fb @ 1038:14fb  (333 octets) ---- */

void __stdcall16far FUN_1038_14fb(char param_1,undefined2 param_2,int param_3)

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
  
  _local_6 = CONCAT22(unaff_CS,0x1506);
  FUN_1158_0444();
  uStack_e = (undefined2)((ulong)DAT_1160_2c2a >> 0x10);
  uStack_10 = (undefined2)DAT_1160_2c2a;
  uStack_12 = 0x1158;
  uStack_14 = 0x1514;
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
  uStack_14 = 0x1038;
  uStack_16 = 0x22;
  uStack_18 = 0x1140;
  uStack_1a = 0x155d;
  local_c = FUN_1140_2553();
  uVar3 = (undefined2)((ulong)local_c >> 0x10);
  local_6 = (int)local_c;
  uStack_18 = 0x1140;
  uStack_1a = 0x14f5;
  uStack_1e = DAT_1160_1858;
  DAT_1160_1858 = &uStack_1e;
  *(undefined2 *)(local_6 + 0x594) = param_2;
  *(int *)(local_6 + 0x592) = param_3;
  puStack_1c = &stack0xfffe;
  FUN_1038_212c(local_c);
  FUN_1038_2c07(local_c,*(undefined2 *)((int)local_c + 0x592));
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
    uVar4 = 0x1038;
    FUN_1038_4de4(local_6,uVar3);
    DAT_1160_1858 = (undefined2 *)uVar2;
  }
  puStack_1c = (undefined *)0x1644;
  uStack_1e = uVar3;
  uStack_1a = uVar4;
  FUN_1140_5f1d(local_6);
  return;
}



/* ---- FUN_1038_1648 @ 1038:1648  (34 octets) ---- */

void __stdcall16far FUN_1038_1648(undefined4 param_1)

{
  undefined2 uVar1;
  
  FUN_1158_0444();
  uVar1 = (undefined2)((ulong)param_1 >> 0x10);
  FUN_1038_14fb(0,*(undefined2 *)((int)param_1 + 0x594),*(undefined2 *)((int)param_1 + 0x592));
  return;
}



/* ---- TFormSERG_SIG_Imprimer1Click @ 1038:1670  (1 octets) ---- */

void TFormSERG_SIG_Imprimer1Click(undefined2 param_1,undefined4 param_2)

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
  
  uStack_6 = 0x167b;
  FUN_1158_0444();
  uVar3 = (undefined2)((ulong)param_2 >> 0x10);
  iVar2 = (int)param_2;
  uStack_c = (undefined2)((ulong)*(undefined4 *)(iVar2 + 0x214) >> 0x10);
  iStack_e = (int)*(undefined4 *)(iVar2 + 0x214);
  uStack_10 = 0x1158;
  pcStack_12 = (char *)0x168d;
  cVar1 = FUN_1108_2f17();
  if (cVar1 == '\0') {
    return;
  }
  uStack_6 = *(undefined2 *)(iVar2 + 0xe4);
  uStack_c = *(undefined2 *)(iVar2 + 0x17e);
  iStack_e = *(undefined2 *)(iVar2 + 0x17c);
  uStack_14 = 0x1108;
  uStack_16 = 0x16b8;
  pcStack_12 = (char *)iVar2;
  uStack_10 = uVar3;
  FUN_1140_3fd0();
  uStack_10 = CONCAT11(extraout_AH,1);
  pcStack_12 = (char *)s_windows_1160_100f + 1;
  uStack_14 = 0x25b4;
  uStack_16 = 0x1140;
  uStack_18 = 0x16ce;
  iStack_e = iVar2;
  uStack_c = uVar3;
  uStack_a = FUN_1140_2553();
  uStack_16 = 0x1140;
  uStack_18 = 0x166a;
  uStack_1c = DAT_1160_1858;
  DAT_1160_1858 = &uStack_1c;
  puStack_1a = &stack0xfffe;
  DAT_1160_2004 = uStack_a;
  FUN_1010_2f8d(uStack_a,1);
  *(undefined2 *)((int)uStack_a + 0x2b9) = 0x1648;
  *(undefined2 *)((int)uStack_a + 699) = 0x1038;
  *(int *)((int)uStack_a + 0x2bd) = iVar2;
  *(undefined2 *)((int)uStack_a + 0x2bf) = uVar3;
  iVar2 = (int)uStack_a;
  FUN_1140_5d45(uStack_a);
  DAT_1160_1858 = (undefined2 *)iVar2;
  puStack_1a = (undefined *)0x1140;
  uStack_1c = 0x1737;
  FUN_1140_5f1d(DAT_1160_2004);
  return;
}



/* ---- FUN_1038_1771 @ 1038:1771  (1136 octets) ---- */

void __stdcall16far FUN_1038_1771(undefined4 param_1,undefined4 param_2)

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
  
  local_6 = 0x177c;
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



/* ---- TFormSERG_SIG_DBEdit101Exit @ 1038:1be1  (77 octets) ---- */

void __stdcall16far
TFormSERG_SIG_DBEdit101Exit(undefined4 param_1,undefined2 param_2,undefined2 param_3)

{
  undefined4 uVar1;
  char cVar2;
  char cVar3;
  
  FUN_1158_0444();
  cVar2 = FUN_1158_2255(0xba2,0x10d0,param_2,param_3);
  cVar3 = FUN_1158_2255(0x22,0x10d0,param_2,param_3);
  if (cVar3 != '\0' || cVar2 != '\0') {
    uVar1 = *(undefined4 *)((int)param_1 + 0x23c);
    FUN_1138_1c77((int)uVar1,(int)((ulong)uVar1 >> 0x10),0);
  }
  return;
}



/* ---- TFormSERG_SIG_DBEdit101KeyUp @ 1038:1c2e  (86 octets) ---- */

void __stdcall16far
TFormSERG_SIG_DBEdit101KeyUp
          (undefined4 param_1,undefined2 param_2_00,int *param_2,undefined2 param_3,
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
      uVar1 = *(undefined4 *)((int)param_1 + 0x23c);
      FUN_1138_1c77((int)uVar1,(int)((ulong)uVar1 >> 0x10),0);
    }
  }
  return;
}



/* ---- TFormSERG_SIG_DBEdit101KeyDown @ 1038:1c91  (1 octets) ---- */

void TFormSERG_SIG_DBEdit101KeyDown
               (undefined2 param_1,undefined4 param_2,undefined2 param_3,int *param_4,
               undefined2 param_5,undefined2 param_6)

{
  undefined2 *puVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined2 uVar7;
  undefined2 unaff_CS;
  undefined2 uVar8;
  undefined2 uVar9;
  undefined2 unaff_SS;
  unkbyte10 in_ST0;
  undefined4 uVar10;
  undefined *puVar11;
  undefined auStack_20e [4];
  undefined auStack_20a [248];
  undefined4 *puStack_112;
  undefined4 uStack_10e;
  char acStack_10a [256];
  undefined4 uStack_a;
  int iStack_6;
  
  iStack_6 = 0x1c9c;
  FUN_1158_0444();
  if ((*param_4 == 0x70) && (cVar2 = FUN_1158_2255(0x5c1,0x1138,param_5,param_6), cVar2 != '\0')) {
    *param_4 = 0;
    FUN_1158_2273();
    FUN_1140_77b2();
  }
  if (*param_4 == 0x11) {
    uVar7 = (undefined2)((ulong)param_2 >> 0x10);
    iVar5 = (int)param_2;
    if (*(char *)((int)*(undefined4 *)(iVar5 + 0x23c) + 0x29) == '\0') {
      acStack_10a[0] = '\0';
      cVar2 = FUN_1158_2255(0x22,0x10d0,param_5,param_6);
      if (cVar2 != '\0') {
        uStack_10e = FUN_1158_2273(0x22,0x10d0,param_5,param_6);
        puVar11 = auStack_20e;
        uVar8 = unaff_SS;
        FUN_10d0_1a9f(uStack_10e);
        uVar10 = FUN_10d0_1a5f((int)uStack_10e,(int)((ulong)uStack_10e >> 0x10));
        uVar10 = *(undefined4 *)((int)uVar10 + 0x1a);
        uStack_a = FUN_10d8_3b9b((int)uVar10,(int)((ulong)uVar10 >> 0x10),puVar11,uVar8);
        cVar2 = FUN_1158_2255(0xa58,(char *)s_iTime_1160_10dc + 4,uStack_a);
        if (cVar2 == '\0') {
          FUN_1100_1524((int)uStack_10e,(int)((ulong)uStack_10e >> 0x10));
          FUN_1158_17e7();
        }
        else {
          puStack_112 = (undefined4 *)FUN_1158_2273(0xa58,(char *)s_iTime_1160_10dc + 4,uStack_a);
          uVar9 = 0x1158;
          uVar8 = 0x1c84;
          puVar1 = (undefined2 *)((int)*puStack_112 + 0x40);
          (*(code *)*puVar1)();
          FUN_1150_10d4(in_ST0,uVar8,uVar9);
          FUN_1158_17e7();
        }
        iVar6 = *(int *)((int)uStack_10e + 0x22);
        iVar4 = iVar6 + -4;
        if (SBORROW2(iVar6,4)) {
          iVar4 = FUN_1158_043e(0x1158);
        }
        iVar6 = *(int *)((int)uStack_10e + 0x24);
        iVar3 = iVar6 + -4;
        iStack_6 = iVar4;
        if (SBORROW2(iVar6,4)) {
          iVar3 = FUN_1158_043e(0x1158);
        }
        uVar10 = FUN_1138_19d4((int)uStack_10e,(int)((ulong)uStack_10e >> 0x10),iStack_6,iVar3);
        unaff_CS = (undefined2)((ulong)uVar10 >> 0x10);
        iStack_6 = (int)uVar10;
      }
      uVar8 = 0x1158;
      cVar2 = FUN_1158_2255(0xba2,0x10d0,param_5,param_6);
      uVar10 = CONCAT22(unaff_CS,iStack_6);
      if (cVar2 != '\0') {
        uStack_10e = FUN_1158_2273(0xba2,0x10d0,param_5,param_6);
        FUN_1138_1d53(uStack_10e);
        FUN_1158_17e7();
        iVar6 = *(int *)((int)uStack_10e + 0x22);
        iVar4 = iVar6 + -4;
        if (SBORROW2(iVar6,4)) {
          iVar4 = FUN_1158_043e(0x1158);
        }
        iVar6 = *(int *)((int)uStack_10e + 0x24);
        iVar3 = iVar6 + -4;
        iStack_6 = iVar4;
        if (SBORROW2(iVar6,4)) {
          iVar3 = FUN_1158_043e(0x1158);
        }
        uVar8 = 0x1138;
        uVar10 = FUN_1138_19d4((int)uStack_10e,(int)((ulong)uStack_10e >> 0x10),iStack_6,iVar3);
      }
      iStack_6 = (int)uVar10;
      if (acStack_10a[0] != '\0') {
        puVar11 = auStack_20a;
        uVar9 = unaff_SS;
        FUN_1158_17cd(0x1c8f,uVar8);
        FUN_1158_184c(acStack_10a,unaff_SS);
        FUN_1158_184c(0x1c8f,0x1158);
        FUN_1138_1d8c((int)*(undefined4 *)(iVar5 + 0x23c),
                      (int)((ulong)*(undefined4 *)(iVar5 + 0x23c) >> 0x10),puVar11,uVar9);
        uStack_10e = FUN_1140_33d5(iVar5,uVar7);
        uVar8 = (undefined2)((ulong)*(undefined4 *)(iVar5 + 0x23c) >> 0x10);
        iVar6 = (int)*(undefined4 *)(iVar5 + 0x23c);
        FUN_1128_2099(uStack_10e,*(undefined2 *)(iVar6 + 0x34),*(undefined2 *)(iVar6 + 0x36));
        puVar11 = auStack_20e;
        uVar8 = unaff_SS;
        FUN_1138_1d53((int)*(undefined4 *)(iVar5 + 0x23c),
                      (int)((ulong)*(undefined4 *)(iVar5 + 0x23c) >> 0x10));
        uVar8 = FUN_1128_2003(uStack_10e,puVar11,uVar8);
        FUN_1138_17bf((int)*(undefined4 *)(iVar5 + 0x23c),
                      (int)((ulong)*(undefined4 *)(iVar5 + 0x23c) >> 0x10),uVar8);
        puVar11 = auStack_20e;
        FUN_1138_1d53((int)*(undefined4 *)(iVar5 + 0x23c),
                      (int)((ulong)*(undefined4 *)(iVar5 + 0x23c) >> 0x10));
        iVar6 = FUN_1128_204e(uStack_10e,puVar11,unaff_SS);
        iVar4 = (int)((long)iVar6 * 3);
        if ((long)iVar4 != (long)iVar6 * 3) {
          iVar4 = FUN_1158_043e(0x1128);
        }
        FUN_1138_17e1((int)*(undefined4 *)(iVar5 + 0x23c),
                      (int)((ulong)*(undefined4 *)(iVar5 + 0x23c) >> 0x10),iVar4 / 2);
        uVar10 = FUN_1138_1a06(iVar5,uVar7,iStack_6,(int)((ulong)uVar10 >> 0x10));
        iStack_6 = (int)uVar10;
        uStack_10e._2_2_ = (undefined2)((ulong)*(undefined4 *)(iVar5 + 0x23c) >> 0x10);
        uStack_10e._0_2_ = (int)*(undefined4 *)(iVar5 + 0x23c);
        FUN_1138_177b((int)uStack_10e,uStack_10e._2_2_,iStack_6);
        FUN_1138_179d((int)uStack_10e,uStack_10e._2_2_,(int)((ulong)uVar10 >> 0x10));
        while( true ) {
          uVar9 = 0x1138;
          uVar8 = FUN_1138_18a9(iVar5,uVar7);
          uVar10 = CONCAT22(uVar8,*(int *)((int)uStack_10e + 0x1e) +
                                  *(int *)((int)uStack_10e + 0x22));
          if (SCARRY2(*(int *)((int)uStack_10e + 0x1e),*(int *)((int)uStack_10e + 0x22))) {
            uVar9 = 0x1158;
            uVar10 = FUN_1158_043e(0x1138);
          }
          if ((int)uVar10 <= (int)((ulong)uVar10 >> 0x10)) break;
          iVar6 = *(int *)((int)uStack_10e + 0x1e) + -8;
          if (SBORROW2(*(int *)((int)uStack_10e + 0x1e),8)) {
            iVar6 = FUN_1158_043e(uVar9);
          }
          FUN_1138_177b((int)uStack_10e,uStack_10e._2_2_,iVar6);
        }
        while( true ) {
          uVar9 = 0x1138;
          uVar8 = FUN_1138_18f4(iVar5,uVar7);
          uVar10 = CONCAT22(uVar8,*(int *)((int)uStack_10e + 0x20) +
                                  *(int *)((int)uStack_10e + 0x24));
          if (SCARRY2(*(int *)((int)uStack_10e + 0x20),*(int *)((int)uStack_10e + 0x24))) {
            uVar9 = 0x1158;
            uVar10 = FUN_1158_043e(0x1138);
          }
          if ((int)uVar10 <= (int)((ulong)uVar10 >> 0x10)) break;
          iVar6 = *(int *)((int)uStack_10e + 0x20) + -8;
          if (SBORROW2(*(int *)((int)uStack_10e + 0x20),8)) {
            iVar6 = FUN_1158_043e(uVar9);
          }
          FUN_1138_179d((int)uStack_10e,uStack_10e._2_2_,iVar6);
        }
        FUN_1138_1c77((int)*(undefined4 *)(iVar5 + 0x23c),
                      (int)((ulong)*(undefined4 *)(iVar5 + 0x23c) >> 0x10),1);
      }
    }
  }
  return;
}



/* ---- FUN_1038_20a4 @ 1038:20a4  (136 octets) ---- */

void __stdcall16far FUN_1038_20a4(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined4 uVar6;
  undefined2 uVar7;
  
  uVar7 = 0x20af;
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
        FUN_1038_1771(uVar4,uVar5,uVar6);
      }
      if (iVar2 == iVar3) break;
      iVar2 = iVar2 + 1;
    }
  }
  return;
}



/* ---- FUN_1038_212c @ 1038:212c  (733 octets) ---- */

void __stdcall16far FUN_1038_212c(undefined4 param_1)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  
  FUN_1158_0444();
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  uVar4 = (undefined2)((ulong)*(undefined4 *)(iVar1 + 0x218) >> 0x10);
  uVar2 = (undefined2)*(undefined4 *)(iVar1 + 0x218);
  FUN_10d8_31d2(uVar2,uVar4);
  FUN_10e0_2ffb(uVar2,uVar4,1);
  FUN_10e0_2ed2(uVar2,uVar4,0);
  FUN_10d8_31bf(uVar2,uVar4);
  uVar4 = (undefined2)((ulong)*(undefined4 *)(iVar1 + 0x1a0) >> 0x10);
  uVar2 = (undefined2)*(undefined4 *)(iVar1 + 0x1a0);
  FUN_10d8_31d2(uVar2,uVar4);
  FUN_10e0_2ffb(uVar2,uVar4,1);
  FUN_10e0_2ed2(uVar2,uVar4,0);
  FUN_10d8_31bf(uVar2,uVar4);
  uVar4 = (undefined2)((ulong)*(undefined4 *)(iVar1 + 0x1a4) >> 0x10);
  uVar2 = (undefined2)*(undefined4 *)(iVar1 + 0x1a4);
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
  uVar4 = (undefined2)((ulong)*(undefined4 *)(iVar1 + 0x240) >> 0x10);
  uVar2 = (undefined2)*(undefined4 *)(iVar1 + 0x240);
  FUN_10d8_31d2(uVar2,uVar4);
  FUN_10e0_2ffb(uVar2,uVar4,1);
  FUN_10e0_2ed2(uVar2,uVar4,0);
  FUN_10d8_31bf(uVar2,uVar4);
  uVar4 = (undefined2)((ulong)*(undefined4 *)(iVar1 + 0x244) >> 0x10);
  uVar2 = (undefined2)*(undefined4 *)(iVar1 + 0x244);
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
  uVar4 = (undefined2)((ulong)*(undefined4 *)(iVar1 + 0x1b4) >> 0x10);
  uVar2 = (undefined2)*(undefined4 *)(iVar1 + 0x1b4);
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
  uVar4 = (undefined2)((ulong)*(undefined4 *)(iVar1 + 0x1c0) >> 0x10);
  uVar2 = (undefined2)*(undefined4 *)(iVar1 + 0x1c0);
  FUN_10d8_31d2(uVar2,uVar4);
  FUN_10e0_2ffb(uVar2,uVar4,1);
  FUN_10e0_2ed2(uVar2,uVar4,0);
  FUN_10d8_31bf(uVar2,uVar4);
  uVar4 = (undefined2)((ulong)*(undefined4 *)(iVar1 + 0x1c4) >> 0x10);
  uVar2 = (undefined2)*(undefined4 *)(iVar1 + 0x1c4);
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



/* ---- FUN_1038_2413 @ 1038:2413  (1827 octets) ---- */

void __stdcall16far FUN_1038_2413(undefined4 param_1)

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
  
  uStack_6 = 0x241e;
  FUN_1158_0444();
  puVar10 = local_204;
  uVar6 = (undefined2)((ulong)param_1 >> 0x10);
  iVar5 = (int)param_1;
  uVar7 = unaff_SS;
  FUN_1150_08a9(*(int *)(iVar5 + 0x594),*(int *)(iVar5 + 0x594) >> 0xf);
  FUN_1138_1d8c((int)*(undefined4 *)(iVar5 + 400),(int)((ulong)*(undefined4 *)(iVar5 + 400) >> 0x10)
                ,puVar10,uVar7);
  puVar10 = local_204;
  uVar7 = unaff_SS;
  FUN_1150_08a9(*(int *)(iVar5 + 0x592),*(int *)(iVar5 + 0x592) >> 0xf);
  FUN_1138_1d8c((int)*(undefined4 *)(iVar5 + 0x198),
                (int)((ulong)*(undefined4 *)(iVar5 + 0x198) >> 0x10),puVar10,uVar7);
  FUN_1158_17e7(0xff,local_104,unaff_SS,iVar5 + 0x596,uVar6);
  FUN_1158_1878(local_104,unaff_SS,0x2409,0x1158);
  cVar1 = FUN_1158_0416();
  if (cVar1 != '\0') {
    FUN_1158_1975(1,cVar1,local_104,unaff_SS);
    puVar10 = local_204;
    uVar7 = unaff_SS;
    FUN_1150_08a9(*(int *)(iVar5 + 0x592),*(int *)(iVar5 + 0x592) >> 0xf);
    FUN_1158_1916(cVar1,0xff,local_104,unaff_SS,puVar10,uVar7);
  }
  FUN_1158_1878(local_104,unaff_SS,0x2409,0x1158);
  cVar1 = FUN_1158_0416();
  if (cVar1 != '\0') {
    FUN_1158_1975(1,cVar1,local_104,unaff_SS);
    puVar10 = local_204;
    uVar7 = unaff_SS;
    FUN_1150_08a9(*(int *)(iVar5 + 0x594),*(int *)(iVar5 + 0x594) >> 0xf);
    FUN_1158_1916(cVar1,0xff,local_104,unaff_SS,puVar10,uVar7);
  }
  uVar7 = 0x1138;
  FUN_1138_1d8c(iVar5,uVar6,local_104,unaff_SS);
  local_108 = *(undefined4 *)(iVar5 + 0x350);
  bVar11 = 0;
  while( true ) {
    uVar2 = bVar11 + 1;
    if (SCARRY2((uint)bVar11,1)) {
      uVar2 = FUN_1158_043e(uVar7);
    }
    uVar3 = uVar2 & 0xff00;
    if (uVar2 == *(uint *)(iVar5 + 0x592)) {
      uVar3 = uVar3 + 1;
    }
    uVar9 = FUN_1130_1353((int)local_108,(int)((ulong)local_108 >> 0x10),bVar11);
    uVar7 = 0x1130;
    FUN_1130_1275(uVar9,uVar3);
    if (bVar11 == 0x13) break;
    bVar11 = bVar11 + 1;
  }
  local_108 = *(undefined4 *)(iVar5 + 0x210);
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
    if (uVar2 == *(uint *)(iVar5 + 0x594)) {
      uVar3 = uVar3 + 1;
    }
    uVar9 = FUN_1130_1353((int)local_108,(int)((ulong)local_108 >> 0x10),bVar11);
    uVar7 = 0x1130;
    FUN_1130_1275(uVar9,uVar3);
    if (bVar11 == local_109) break;
    bVar11 = bVar11 + 1;
  }
  local_108._2_2_ = (undefined2)((ulong)*(undefined4 *)(iVar5 + 0x218) >> 0x10);
  local_108._0_2_ = (undefined2)*(undefined4 *)(iVar5 + 0x218);
  local_110 = *(int *)(iVar5 + 0x592) + -1;
  if (SBORROW2(*(int *)(iVar5 + 0x592),1)) {
    local_110 = FUN_1158_043e(0x1130);
  }
  local_10e = local_110 >> 0xf;
  local_10c = 0;
  cVar1 = FUN_10e0_2895((undefined2)local_108,local_108._2_2_,0,&local_110,unaff_SS);
  if (cVar1 == '\0') {
    FUN_1038_1408(iVar5,uVar6);
  }
  local_108 = *(undefined4 *)(iVar5 + 0x1a0);
  local_110 = *(int *)(iVar5 + 0x592);
  local_10e = local_110 >> 0xf;
  local_10c = 0;
  cVar1 = FUN_10e0_2895((int)local_108,(int)((ulong)local_108 >> 0x10),0,&local_110,unaff_SS);
  if (cVar1 == '\0') {
    FUN_1038_1408(iVar5,uVar6);
  }
  local_108 = *(undefined4 *)(iVar5 + 0x1a4);
  local_118 = *(int *)(iVar5 + 0x592);
  local_116 = local_118 >> 0xf;
  local_114 = 0;
  local_110 = 1;
  local_10e = 0;
  local_10c = 0;
  cVar1 = FUN_10e0_2895((int)local_108,(int)((ulong)local_108 >> 0x10),1,&local_118,unaff_SS);
  if (cVar1 == '\0') {
    FUN_1038_1408(iVar5,uVar6);
  }
  local_108 = *(undefined4 *)(iVar5 + 0x1a8);
  local_118 = *(int *)(iVar5 + 0x592);
  local_116 = local_118 >> 0xf;
  local_114 = 0;
  local_110 = 2;
  local_10e = 0;
  local_10c = 0;
  pcVar8 = (char *)s_iTime_1160_10dc + 4;
  cVar1 = FUN_10e0_2895((int)local_108,(int)((ulong)local_108 >> 0x10),1,&local_118,unaff_SS);
  if (cVar1 == '\0') {
    pcVar8 = (char *)0x1038;
    FUN_1038_1408(iVar5,uVar6);
  }
  local_108._2_2_ = (undefined2)((ulong)*(undefined4 *)(iVar5 + 0x1b8) >> 0x10);
  local_108._0_2_ = (undefined2)*(undefined4 *)(iVar5 + 0x1b8);
  iVar4 = *(int *)(iVar5 + 0x592) + -1;
  if (SBORROW2(*(int *)(iVar5 + 0x592),1)) {
    iVar4 = FUN_1158_043e(pcVar8);
  }
  local_116 = iVar4 >> 0xf;
  local_114 = 0;
  local_110 = *(int *)(iVar5 + 0x594);
  local_10e = local_110 >> 0xf;
  local_10c = 0;
  pcVar8 = (char *)s_iTime_1160_10dc + 4;
  local_118 = iVar4;
  cVar1 = FUN_10e0_2895((undefined2)local_108,local_108._2_2_,1,&local_118,unaff_SS);
  if (cVar1 == '\0') {
    pcVar8 = (char *)0x1038;
    FUN_1038_1408(iVar5,uVar6);
  }
  local_108._2_2_ = (undefined2)((ulong)*(undefined4 *)(iVar5 + 0x240) >> 0x10);
  local_108._0_2_ = (undefined2)*(undefined4 *)(iVar5 + 0x240);
  local_120 = *(int *)(iVar5 + 0x592) + -1;
  if (SBORROW2(*(int *)(iVar5 + 0x592),1)) {
    local_120 = FUN_1158_043e(pcVar8);
  }
  local_11e = local_120 >> 0xf;
  local_11c = 0;
  local_118 = *(int *)(iVar5 + 0x594);
  local_116 = local_118 >> 0xf;
  local_114 = 0;
  local_110 = 1;
  local_10e = 0;
  local_10c = 0;
  pcVar8 = (char *)s_iTime_1160_10dc + 4;
  cVar1 = FUN_10e0_2895((undefined2)local_108,local_108._2_2_,2,&local_120,unaff_SS);
  if (cVar1 == '\0') {
    pcVar8 = (char *)0x1038;
    FUN_1038_1408(iVar5,uVar6);
  }
  local_108._2_2_ = (undefined2)((ulong)*(undefined4 *)(iVar5 + 0x244) >> 0x10);
  local_108._0_2_ = (undefined2)*(undefined4 *)(iVar5 + 0x244);
  iVar4 = *(int *)(iVar5 + 0x592) + -1;
  if (SBORROW2(*(int *)(iVar5 + 0x592),1)) {
    iVar4 = FUN_1158_043e(pcVar8);
  }
  local_11e = iVar4 >> 0xf;
  local_11c = 0;
  local_118 = *(int *)(iVar5 + 0x594);
  local_116 = local_118 >> 0xf;
  local_114 = 0;
  local_110 = 2;
  local_10e = 0;
  local_10c = 0;
  local_120 = iVar4;
  cVar1 = FUN_10e0_2895((undefined2)local_108,local_108._2_2_,2,&local_120,unaff_SS);
  if (cVar1 == '\0') {
    FUN_1038_1408(iVar5,uVar6);
  }
  local_108 = *(undefined4 *)(iVar5 + 0x1b0);
  local_120 = *(int *)(iVar5 + 0x592);
  local_11e = local_120 >> 0xf;
  local_11c = 0;
  local_118 = *(int *)(iVar5 + 0x594);
  local_116 = local_118 >> 0xf;
  local_114 = 0;
  local_110 = 1;
  local_10e = 0;
  local_10c = 0;
  cVar1 = FUN_10e0_2895((int)local_108,(int)((ulong)local_108 >> 0x10),2,&local_120,unaff_SS);
  if (cVar1 == '\0') {
    FUN_1038_1408(iVar5,uVar6);
  }
  local_108 = *(undefined4 *)(iVar5 + 0x1b4);
  local_120 = *(int *)(iVar5 + 0x592);
  local_11e = local_120 >> 0xf;
  local_11c = 0;
  local_118 = *(int *)(iVar5 + 0x594);
  local_116 = local_118 >> 0xf;
  local_114 = 0;
  local_110 = 2;
  local_10e = 0;
  local_10c = 0;
  cVar1 = FUN_10e0_2895((int)local_108,(int)((ulong)local_108 >> 0x10),2,&local_120,unaff_SS);
  if (cVar1 == '\0') {
    FUN_1038_1408(iVar5,uVar6);
  }
  local_108 = *(undefined4 *)(iVar5 + 0x1ac);
  local_118 = *(int *)(iVar5 + 0x592);
  local_116 = local_118 >> 0xf;
  local_114 = 0;
  local_110 = *(int *)(iVar5 + 0x594);
  local_10e = local_110 >> 0xf;
  local_10c = 0;
  cVar1 = FUN_10e0_2895((int)local_108,(int)((ulong)local_108 >> 0x10),1,&local_118,unaff_SS);
  if (cVar1 == '\0') {
    FUN_1038_1408(iVar5,uVar6);
  }
  local_108 = *(undefined4 *)(iVar5 + 0x1c0);
  local_120 = *(int *)(iVar5 + 0x592);
  local_11e = local_120 >> 0xf;
  local_11c = 0;
  local_118 = *(int *)(iVar5 + 0x594);
  local_116 = local_118 >> 0xf;
  local_114 = 0;
  local_110 = 1;
  local_10e = 0;
  local_10c = 0;
  cVar1 = FUN_10e0_2895((int)local_108,(int)((ulong)local_108 >> 0x10),2,&local_120,unaff_SS);
  if (cVar1 == '\0') {
    FUN_1038_1408(iVar5,uVar6);
  }
  local_108 = *(undefined4 *)(iVar5 + 0x1c4);
  local_120 = *(int *)(iVar5 + 0x592);
  local_11e = local_120 >> 0xf;
  local_11c = 0;
  local_118 = *(int *)(iVar5 + 0x594);
  local_116 = local_118 >> 0xf;
  local_114 = 0;
  local_110 = 2;
  local_10e = 0;
  local_10c = 0;
  cVar1 = FUN_10e0_2895((int)local_108,(int)((ulong)local_108 >> 0x10),2,&local_120,unaff_SS);
  if (cVar1 == '\0') {
    FUN_1038_1408(iVar5,uVar6);
  }
  local_108 = *(undefined4 *)(iVar5 + 0x1bc);
  local_118 = *(int *)(iVar5 + 0x592);
  local_116 = local_118 >> 0xf;
  local_114 = 0;
  local_110 = *(int *)(iVar5 + 0x594);
  local_10e = local_110 >> 0xf;
  local_10c = 0;
  cVar1 = FUN_10e0_2895((int)local_108,(int)((ulong)local_108 >> 0x10),1,&local_118,unaff_SS);
  if (cVar1 == '\0') {
    FUN_1038_1408(iVar5,uVar6);
  }
  FUN_1038_20a4(iVar5,uVar6);
  return;
}



/* ---- FUN_1038_2b36 @ 1038:2b36  (209 octets) ---- */

void __stdcall16far FUN_1038_2b36(undefined4 param_1)

{
  int iVar1;
  undefined2 uVar2;
  
  FUN_1158_0444();
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  FUN_10d8_31d2((int)*(undefined4 *)(iVar1 + 0x218),
                (int)((ulong)*(undefined4 *)(iVar1 + 0x218) >> 0x10));
  FUN_10d8_31d2((int)*(undefined4 *)(iVar1 + 0x1a0),
                (int)((ulong)*(undefined4 *)(iVar1 + 0x1a0) >> 0x10));
  FUN_10d8_31d2((int)*(undefined4 *)(iVar1 + 0x1a4),
                (int)((ulong)*(undefined4 *)(iVar1 + 0x1a4) >> 0x10));
  FUN_10d8_31d2((int)*(undefined4 *)(iVar1 + 0x1a8),
                (int)((ulong)*(undefined4 *)(iVar1 + 0x1a8) >> 0x10));
  FUN_10d8_31d2((int)*(undefined4 *)(iVar1 + 0x1b8),
                (int)((ulong)*(undefined4 *)(iVar1 + 0x1b8) >> 0x10));
  FUN_10d8_31d2((int)*(undefined4 *)(iVar1 + 0x240),
                (int)((ulong)*(undefined4 *)(iVar1 + 0x240) >> 0x10));
  FUN_10d8_31d2((int)*(undefined4 *)(iVar1 + 0x244),
                (int)((ulong)*(undefined4 *)(iVar1 + 0x244) >> 0x10));
  FUN_10d8_31d2((int)*(undefined4 *)(iVar1 + 0x1b0),
                (int)((ulong)*(undefined4 *)(iVar1 + 0x1b0) >> 0x10));
  FUN_10d8_31d2((int)*(undefined4 *)(iVar1 + 0x1b4),
                (int)((ulong)*(undefined4 *)(iVar1 + 0x1b4) >> 0x10));
  FUN_10d8_31d2((int)*(undefined4 *)(iVar1 + 0x1ac),
                (int)((ulong)*(undefined4 *)(iVar1 + 0x1ac) >> 0x10));
  FUN_10d8_31d2((int)*(undefined4 *)(iVar1 + 0x1bc),
                (int)((ulong)*(undefined4 *)(iVar1 + 0x1bc) >> 0x10));
  FUN_10d8_31d2((int)*(undefined4 *)(iVar1 + 0x1c0),
                (int)((ulong)*(undefined4 *)(iVar1 + 0x1c0) >> 0x10));
  FUN_10d8_31d2((int)*(undefined4 *)(iVar1 + 0x1c4),
                (int)((ulong)*(undefined4 *)(iVar1 + 0x1c4) >> 0x10));
  return;
}



/* ---- FUN_1038_2c07 @ 1038:2c07  (32 octets) ---- */

void __stdcall16far FUN_1038_2c07(undefined4 param_1,undefined2 param_2)

{
  undefined2 uVar1;
  
  FUN_1158_0444();
  uVar1 = (undefined2)((ulong)param_1 >> 0x10);
  *(undefined2 *)((int)param_1 + 0x592) = param_2;
  FUN_1038_2413((int)param_1,uVar1);
  return;
}



/* ---- FUN_1038_2c27 @ 1038:2c27  (32 octets) ---- */

void __stdcall16far FUN_1038_2c27(undefined4 param_1,undefined2 param_2)

{
  undefined2 uVar1;
  
  FUN_1158_0444();
  uVar1 = (undefined2)((ulong)param_1 >> 0x10);
  *(undefined2 *)((int)param_1 + 0x594) = param_2;
  FUN_1038_2413((int)param_1,uVar1);
  return;
}



/* ---- TFormSERG_SIG_FormCreate @ 1038:2c57  (1 octets) ---- */

/* WARNING: Removing unreachable block (ram,0x10382e5b) */

void TFormSERG_SIG_FormCreate(undefined2 param_1,undefined4 param_2)

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
  undefined2 *puStack_6;
  
  puStack_6 = (undefined2 *)&DAT_1160_2c62;
  FUN_1158_0444();
  FUN_1158_17cd(0x2c47,0x1158);
  FUN_1158_184c(0x1dfa,0x1160);
  FUN_1158_184c(0x2c53,0x1158);
  puVar14 = auStack_204;
  uVar8 = (undefined2)((ulong)param_2 >> 0x10);
  iVar7 = (int)param_2;
  uVar9 = unaff_SS;
  FUN_1138_1d53();
  FUN_1158_184c(puVar14,uVar9);
  FUN_1158_17e7();
  FUN_1138_1d8c((int)*(undefined4 *)(iVar7 + 0x188),
                (int)((ulong)*(undefined4 *)(iVar7 + 0x188) >> 0x10),0x1dfa,0x1160);
  *(undefined2 *)(iVar7 + 0x590) = 100;
  DAT_1160_0144 = 0xffff;
  DAT_1160_0146 = 0xffff;
  DAT_1160_0148 = 0xffff;
  puStack_6 = (undefined2 *)((ulong)*(undefined4 *)(iVar7 + 0x210) >> 0x10);
  uStack_a._2_2_ = (undefined2)*(undefined4 *)(iVar7 + 0x210);
  uVar9 = 0x1130;
  iVar2 = FUN_1130_1326(uStack_a._2_2_,puStack_6);
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
        uVar12 = FUN_1130_1353(uStack_a._2_2_,puStack_6,iVar2);
        uVar9 = 0x1130;
        FUN_1130_13a5(uVar12,uVar16);
      }
      if (iVar2 == (int)uStack_a) break;
      iVar2 = iVar2 + 1;
    }
  }
  puStack_6 = (undefined2 *)((ulong)*(undefined4 *)(iVar7 + 0x350) >> 0x10);
  uStack_a._2_2_ = (undefined2)*(undefined4 *)(iVar7 + 0x350);
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
      uVar12 = FUN_1130_1353(uStack_a._2_2_,puStack_6,iVar2);
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
  puStack_6 = (undefined2 *)iVar3;
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
      if ((undefined2 *)iVar2 == puStack_6) break;
      iVar2 = iVar2 + 1;
    }
  }
  puVar14 = auStack_104;
  uVar12 = *(undefined4 *)((int)DAT_1160_18f6 + 0x24c);
  uVar9 = unaff_SS;
  FUN_1138_1d53((int)uVar12,(int)((ulong)uVar12 >> 0x10));
  FUN_1138_1d8c((int)*(undefined4 *)(iVar7 + 0x2c8),
                (int)((ulong)*(undefined4 *)(iVar7 + 0x2c8) >> 0x10),puVar14,uVar9);
  puVar14 = auStack_104;
  uVar12 = *(undefined4 *)((int)DAT_1160_18f6 + 0x250);
  uVar9 = unaff_SS;
  FUN_1138_1d53((int)uVar12,(int)((ulong)uVar12 >> 0x10));
  FUN_1138_1d8c((int)*(undefined4 *)(iVar7 + 0x2cc),
                (int)((ulong)*(undefined4 *)(iVar7 + 0x2cc) >> 0x10),puVar14,uVar9);
  puVar14 = auStack_104;
  uVar12 = *(undefined4 *)((int)DAT_1160_18f6 + 0x254);
  uVar9 = unaff_SS;
  FUN_1138_1d53((int)uVar12,(int)((ulong)uVar12 >> 0x10));
  FUN_1138_1d8c((int)*(undefined4 *)(iVar7 + 0x2d0),
                (int)((ulong)*(undefined4 *)(iVar7 + 0x2d0) >> 0x10),puVar14,uVar9);
  puVar14 = auStack_104;
  uVar12 = *(undefined4 *)((int)DAT_1160_18f6 + 0x248);
  uVar16 = unaff_SS;
  FUN_1138_1d53((int)uVar12,(int)((ulong)uVar12 >> 0x10));
  FUN_1158_184c(0x2c53,0x1138);
  puVar15 = auStack_204;
  uVar9 = unaff_SS;
  FUN_1150_15fe(puVar15);
  FUN_1150_1cbf((double)in_ST0);
  FUN_1158_184c(puVar15,uVar9);
  FUN_1158_184c(0x2c53,0x1158);
  puVar15 = auStack_304;
  FUN_1150_15fe(puVar15);
  FUN_1150_1ce4((double)in_ST1);
  FUN_1158_184c(puVar15,unaff_SS);
  FUN_1158_184c(0x2c53,0x1158);
  FUN_1138_1d8c((int)*(undefined4 *)(iVar7 + 0x2d4),
                (int)((ulong)*(undefined4 *)(iVar7 + 0x2d4) >> 0x10),puVar14,uVar16);
  FUN_10e0_3017((int)*(undefined4 *)(iVar7 + 0x218),
                (int)((ulong)*(undefined4 *)(iVar7 + 0x218) >> 0x10),0x1e32,0x1160);
  FUN_10e0_3017((int)*(undefined4 *)(iVar7 + 0x1a0),
                (int)((ulong)*(undefined4 *)(iVar7 + 0x1a0) >> 0x10),0x1e32,0x1160);
  FUN_10e0_3017((int)*(undefined4 *)(iVar7 + 0x1a4),
                (int)((ulong)*(undefined4 *)(iVar7 + 0x1a4) >> 0x10),0x1e40,0x1160);
  FUN_10e0_3017((int)*(undefined4 *)(iVar7 + 0x1a8),
                (int)((ulong)*(undefined4 *)(iVar7 + 0x1a8) >> 0x10),0x1e40,0x1160);
  FUN_10e0_3017((int)*(undefined4 *)(iVar7 + 0x1b8),
                (int)((ulong)*(undefined4 *)(iVar7 + 0x1b8) >> 0x10),0x1e78,0x1160);
  FUN_10e0_3017((int)*(undefined4 *)(iVar7 + 0x240),
                (int)((ulong)*(undefined4 *)(iVar7 + 0x240) >> 0x10),0x1e86,0x1160);
  FUN_10e0_3017((int)*(undefined4 *)(iVar7 + 0x244),
                (int)((ulong)*(undefined4 *)(iVar7 + 0x244) >> 0x10),0x1e86,0x1160);
  FUN_10e0_3017((int)*(undefined4 *)(iVar7 + 0x1ac),
                (int)((ulong)*(undefined4 *)(iVar7 + 0x1ac) >> 0x10),0x1e4e,0x1160);
  FUN_10e0_3017((int)*(undefined4 *)(iVar7 + 0x1b0),
                (int)((ulong)*(undefined4 *)(iVar7 + 0x1b0) >> 0x10),0x1e5c,0x1160);
  FUN_10e0_3017((int)*(undefined4 *)(iVar7 + 0x1b4),
                (int)((ulong)*(undefined4 *)(iVar7 + 0x1b4) >> 0x10),0x1e5c,0x1160);
  FUN_10e0_3017((int)*(undefined4 *)(iVar7 + 0x1bc),
                (int)((ulong)*(undefined4 *)(iVar7 + 0x1bc) >> 0x10),0x1e78,0x1160);
  FUN_10e0_3017((int)*(undefined4 *)(iVar7 + 0x1c0),
                (int)((ulong)*(undefined4 *)(iVar7 + 0x1c0) >> 0x10),0x1e86,0x1160);
  FUN_10e0_3017((int)*(undefined4 *)(iVar7 + 0x1c4),
                (int)((ulong)*(undefined4 *)(iVar7 + 0x1c4) >> 0x10),0x1e86,0x1160);
  *(undefined2 *)(iVar7 + 0x594) = 1;
  iVar2 = DAT_1160_014c + -1;
  if (SBORROW2(DAT_1160_014c,1)) {
    iVar2 = FUN_1158_043e((char *)s_iTime_1160_10dc + 4);
  }
  *(int *)(iVar7 + 0x592) = iVar2;
  return;
}



/* ---- TFormSERG_SIG_FormShow @ 1038:3094  (27 octets) ---- */

void __stdcall16far TFormSERG_SIG_FormShow(void)

{
  FUN_1158_0444();
  FUN_1140_63a9((int)DAT_1160_2c2e,(int)((ulong)DAT_1160_2c2e >> 0x10),0xfffe);
  return;
}



/* ---- TFormSERG_SIG_FormClose @ 1038:30af  (31 octets) ---- */

void __stdcall16far TFormSERG_SIG_FormClose(undefined4 param_1,undefined *param_2)

{
  FUN_1158_0444();
  FUN_1038_2b36((int)param_1,(int)((ulong)param_1 >> 0x10));
  *param_2 = 1;
  return;
}



/* ---- TFormSERG_SIG_Quitter1Click @ 1038:30ce  (24 octets) ---- */

void __stdcall16far TFormSERG_SIG_Quitter1Click(undefined4 param_1)

{
  FUN_1158_0444();
  FUN_1140_5556((int)param_1,(int)((ulong)param_1 >> 0x10));
  return;
}



/* ---- TFormSERG_SIG_PleinEcran1Click @ 1038:30e6  (48 octets) ---- */

void __stdcall16far TFormSERG_SIG_PleinEcran1Click(undefined4 param_1)

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



/* ---- TFormSERG_SIG_N1001Click @ 1038:3122  (1 octets) ---- */

void TFormSERG_SIG_N1001Click
               (undefined2 param_1,undefined4 param_2,undefined2 param_3,undefined2 param_4)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined2 uVar7;
  undefined2 uVar8;
  undefined2 uVar9;
  undefined4 uVar10;
  uint uStack_a;
  int iVar11;
  
  FUN_1158_0444();
  uVar8 = (undefined2)((ulong)param_2 >> 0x10);
  iVar6 = (int)param_2;
  iVar11 = *(int *)(iVar6 + 0x590);
  cVar1 = FUN_1158_2255(0x94,0x1130,param_3,param_4);
  if (cVar1 != '\0') {
    uVar10 = FUN_1158_2273(0x94,0x1130,param_3,param_4);
    uVar2 = FUN_1130_162b((int)*(undefined4 *)(iVar6 + 500),
                          (int)((ulong)*(undefined4 *)(iVar6 + 500) >> 0x10),uVar10);
    switch(uVar2) {
    case 0:
      iVar11 = 100;
      break;
    case 1:
      iVar11 = 0x7d;
      break;
    case 2:
      iVar11 = 0x96;
      break;
    case 3:
      iVar11 = 200;
      break;
    case 4:
      iVar11 = 0x4b;
      break;
    case 5:
      iVar11 = 0x32;
    }
    uVar9 = (undefined2)((ulong)*(undefined4 *)(iVar6 + 500) >> 0x10);
    uVar7 = (undefined2)*(undefined4 *)(iVar6 + 500);
    iVar3 = FUN_1130_1326(uVar7,uVar9);
    uVar4 = iVar3 - 1;
    if (SBORROW2(iVar3,1)) {
      uVar4 = FUN_1158_043e(0x1130);
    }
    if (-1 < (int)uVar4) {
      uStack_a = 0;
      while( true ) {
        uVar5 = uStack_a & 0xff00;
        if (uStack_a == uVar2) {
          uVar5 = uVar5 + 1;
        }
        uVar10 = FUN_1130_1353(uVar7,uVar9,uStack_a);
        FUN_1130_1275(uVar10,uVar5);
        if (uStack_a == uVar4) break;
        uStack_a = uStack_a + 1;
      }
    }
  }
  if (iVar11 != *(int *)(iVar6 + 0x590)) {
    FUN_1138_5df4(iVar6,uVar8,*(undefined2 *)(iVar6 + 0x590),iVar11);
    *(int *)(iVar6 + 0x590) = iVar11;
  }
  return;
}



/* ---- TFormSERG_SIG_FormResize @ 1038:323f  (41 octets) ---- */

void __stdcall16far TFormSERG_SIG_FormResize(undefined4 param_1)

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
  uVar1 = *(undefined4 *)((int)param_1 + 0x1ec);
  FUN_1130_1275((int)uVar1,(int)((ulong)uVar1 >> 0x10),iVar2);
  return;
}



/* ---- TFormSERG_SIG_Periode1Click @ 1038:3268  (71 octets) ---- */

void __stdcall16far TFormSERG_SIG_Periode1Click(undefined4 param_1)

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
  iVar1 = FUN_1000_3e32(*(undefined2 *)(iVar2 + 0x592),iVar1);
  if (iVar1 != *(int *)(iVar2 + 0x592)) {
    FUN_1038_2c07(iVar2,uVar3,iVar1);
  }
  return;
}



/* ---- TFormSERG_SIG_N12Click @ 1038:32af  (246 octets) ---- */

void __stdcall16far TFormSERG_SIG_N12Click(undefined4 param_1,undefined2 param_2,undefined2 param_3)

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
    iVar4 = *(int *)(iVar5 + 0x592);
    uVar8 = FUN_1158_2273(0x94,0x1130,param_2,param_3);
    uVar7 = 0x1130;
    uVar2 = FUN_1130_162b((int)*(undefined4 *)(iVar5 + 0x350),
                          (int)((ulong)*(undefined4 *)(iVar5 + 0x350) >> 0x10),uVar8);
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
      iVar4 = FUN_1000_3e32(*(undefined2 *)(iVar5 + 0x592),iVar4);
    }
    if (iVar4 != *(int *)(iVar5 + 0x592)) {
      FUN_1038_2c07(iVar5,uVar6,iVar4);
    }
  }
  return;
}



/* ---- TFormSERG_SIG_N11Click @ 1038:33ad  (1 octets) ---- */

void TFormSERG_SIG_N11Click
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
  
  uStack_8 = CONCAT22(0x33b8,(undefined2)uStack_8);
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
      FUN_1038_2c27((int)param_2,(int)((ulong)param_2 >> 0x10),iVar2);
    }
  }
  return;
}



/* ---- TFormSERG_SIG_TableERGCalcFields @ 1038:3803  (1 octets) ---- */

void TFormSERG_SIG_TableERGCalcFields
               (undefined2 param_1,undefined4 param_2,undefined2 param_3,undefined2 param_4)

{
  double dVar1;
  undefined2 *puVar2;
  double dVar3;
  int iVar4;
  undefined2 uVar5;
  longdouble in_ST0;
  longdouble lVar6;
  longdouble lVar7;
  longdouble lVar8;
  longdouble lVar9;
  longdouble lVar10;
  longdouble lVar11;
  longdouble lVar12;
  longdouble lVar13;
  longdouble lVar14;
  longdouble lVar15;
  longdouble lVar16;
  longdouble lVar17;
  longdouble lVar18;
  longdouble in_ST1;
  longdouble lVar19;
  longdouble lVar20;
  longdouble lVar21;
  longdouble in_ST2;
  longdouble in_ST3;
  longdouble in_ST4;
  longdouble in_ST5;
  longdouble in_ST6;
  undefined4 *puVar22;
  undefined4 uVar23;
  long lVar24;
  undefined4 *puVar25;
  undefined2 uVar26;
  undefined2 uVar27;
  undefined2 uVar28;
  double dVar29;
  undefined8 uVar30;
  double dVar31;
  double dVar32;
  undefined2 uStack_12a;
  undefined2 uStack_128;
  undefined2 uStack_126;
  undefined2 uStack_122;
  undefined2 uStack_120;
  undefined2 uStack_11e;
  undefined2 uStack_11c;
  undefined8 uStack_10a;
  undefined8 uStack_102;
  undefined2 uStack_fa;
  undefined2 uStack_f8;
  undefined2 uStack_f6;
  undefined2 uStack_f4;
  undefined2 uStack_e2;
  undefined2 uStack_e0;
  undefined2 uStack_de;
  undefined2 uStack_dc;
  undefined2 uStack_da;
  undefined2 uStack_d8;
  undefined2 uStack_d6;
  undefined2 uStack_d4;
  undefined2 uStack_d2;
  undefined2 uStack_d0;
  undefined2 uStack_ce;
  undefined2 uStack_cc;
  undefined2 uStack_aa;
  undefined2 uStack_a8;
  undefined2 uStack_a6;
  undefined2 uStack_a4;
  undefined2 uStack_92;
  undefined2 uStack_90;
  undefined2 uStack_8e;
  undefined2 uStack_8c;
  undefined2 uStack_8a;
  undefined2 uStack_88;
  undefined2 uStack_86;
  undefined2 uStack_84;
  undefined2 uStack_52;
  undefined2 uStack_50;
  undefined2 uStack_4e;
  undefined2 uStack_4c;
  undefined2 uStack_4a;
  undefined2 uStack_48;
  undefined2 uStack_46;
  undefined2 uStack_44;
  undefined2 uStack_42;
  undefined2 uStack_40;
  undefined2 uStack_3e;
  undefined2 uStack_3c;
  undefined2 uStack_3a;
  undefined2 uStack_38;
  undefined2 uStack_36;
  undefined2 uStack_34;
  undefined2 uStack_32;
  undefined2 uStack_30;
  undefined2 uStack_2e;
  undefined2 uStack_2c;
  undefined2 uStack_2a;
  undefined2 uStack_28;
  undefined2 uStack_26;
  undefined2 uStack_24;
  undefined2 uStack_22;
  undefined2 uStack_20;
  undefined2 uStack_1e;
  undefined2 uStack_1c;
  undefined2 uStack_1a;
  undefined2 uStack_18;
  undefined2 uStack_16;
  undefined2 uStack_14;
  
  FUN_1158_0444();
  uVar5 = (undefined2)((ulong)param_2 >> 0x10);
  iVar4 = (int)param_2;
  puVar22 = (undefined4 *)
            FUN_10d8_3b9b((int)*(undefined4 *)(iVar4 + 0x1a0),
                          (int)((ulong)*(undefined4 *)(iVar4 + 0x1a0) >> 0x10),0x3451,0x1158);
  puVar2 = (undefined2 *)((int)*puVar22 + 0x40);
  (*(code *)*puVar2)(0x10d8,puVar22);
  lVar6 = (longdouble)100.0 + (longdouble)(double)in_ST0;
  FUN_1158_04b2();
  uVar23 = FUN_1158_2273(0x138,(char *)s_iTime_1160_10dc + 4,param_3,param_4);
  puVar22 = (undefined4 *)
            FUN_10d8_3b9b((int)*(undefined4 *)(iVar4 + 0x1c0),
                          (int)((ulong)*(undefined4 *)(iVar4 + 0x1c0) >> 0x10),0x345d,0x1158);
  puVar2 = (undefined2 *)((int)*puVar22 + 0x44);
  lVar24 = (*(code *)*puVar2)(0x10d8,puVar22);
  puVar22 = (undefined4 *)FUN_10d8_3b9b();
  puVar2 = (undefined2 *)((int)*puVar22 + 0x40);
  (*(code *)*puVar2)();
  lVar21 = in_ST6;
  lVar19 = in_ST6;
  FUN_1080_2fa6((double)((longdouble)lVar24 * lVar6));
  puVar22 = (undefined4 *)
            FUN_10d8_3b9b((int)*(undefined4 *)(iVar4 + 0x1c4),
                          CONCAT42(&UNK_1080_345d,
                                   (int)((ulong)*(undefined4 *)(iVar4 + 0x1c4) >> 0x10)));
  puVar2 = (undefined2 *)((int)*puVar22 + 0x44);
  lVar24 = (*(code *)*puVar2)();
  puVar22 = (undefined4 *)FUN_10d8_3b9b();
  puVar2 = (undefined2 *)((int)*puVar22 + 0x40);
  (*(code *)*puVar2)();
  lVar6 = lVar19;
  FUN_1080_2fa6((double)((longdouble)lVar24 * in_ST2));
  uStack_12a = SUB82((double)(in_ST1 + in_ST3),0);
  lVar16 = lVar6;
  lVar13 = lVar6;
  FUN_1080_2fa6(uStack_12a,(int6)((qword)(double)(in_ST1 + in_ST3) >> 0x10));
  dVar31 = (double)in_ST4;
  puVar22 = (undefined4 *)
            FUN_10d8_3b9b((int)*(undefined4 *)(iVar4 + 0x1c0),
                          CONCAT42(&UNK_1080_3469,
                                   (int)((ulong)*(undefined4 *)(iVar4 + 0x1c0) >> 0x10)));
  puVar2 = (undefined2 *)((int)*puVar22 + 0x44);
  lVar24 = (*(code *)*puVar2)();
  puVar22 = (undefined4 *)FUN_10d8_3b9b();
  puVar2 = (undefined2 *)((int)*puVar22 + 0x40);
  (*(code *)*puVar2)();
  lVar20 = lVar13;
  lVar9 = lVar13;
  FUN_1080_2fa6((double)((longdouble)lVar24 * in_ST5));
  puVar22 = (undefined4 *)
            FUN_10d8_3b9b((int)*(undefined4 *)(iVar4 + 0x1c4),
                          CONCAT42(&UNK_1080_3469,
                                   (int)((ulong)*(undefined4 *)(iVar4 + 0x1c4) >> 0x10)));
  puVar2 = (undefined2 *)((int)*puVar22 + 0x44);
  lVar24 = (*(code *)*puVar2)();
  puVar22 = (undefined4 *)FUN_10d8_3b9b();
  puVar2 = (undefined2 *)((int)*puVar22 + 0x40);
  (*(code *)*puVar2)();
  lVar18 = lVar9;
  FUN_1080_2fa6((double)((longdouble)lVar24 * lVar21));
  uStack_12a = SUB82((double)(in_ST6 + lVar19),0);
  lVar12 = lVar18;
  lVar10 = lVar18;
  FUN_1080_2fa6(uStack_12a,(int6)((qword)(double)(in_ST6 + lVar19) >> 0x10));
  dVar1 = (double)lVar6;
  puVar22 = (undefined4 *)
            FUN_10d8_3b9b((int)*(undefined4 *)(iVar4 + 0x1c0),
                          CONCAT42(&UNK_1080_348c,
                                   (int)((ulong)*(undefined4 *)(iVar4 + 0x1c0) >> 0x10)));
  puVar2 = (undefined2 *)((int)*puVar22 + 0x44);
  lVar24 = (*(code *)*puVar2)();
  puVar22 = (undefined4 *)FUN_10d8_3b9b();
  puVar2 = (undefined2 *)((int)*puVar22 + 0x40);
  (*(code *)*puVar2)();
  lVar19 = lVar10;
  lVar11 = lVar10;
  FUN_1080_2fa6((double)((longdouble)lVar24 * lVar16));
  puVar22 = (undefined4 *)
            FUN_10d8_3b9b((int)*(undefined4 *)(iVar4 + 0x1c4),
                          CONCAT42(&UNK_1080_348c,
                                   (int)((ulong)*(undefined4 *)(iVar4 + 0x1c4) >> 0x10)));
  puVar2 = (undefined2 *)((int)*puVar22 + 0x44);
  lVar24 = (*(code *)*puVar2)();
  puVar22 = (undefined4 *)FUN_10d8_3b9b();
  puVar2 = (undefined2 *)((int)*puVar22 + 0x40);
  (*(code *)*puVar2)();
  lVar21 = lVar11;
  FUN_1080_2fa6((double)((longdouble)lVar24 * lVar20));
  uStack_12a = SUB82((double)(lVar13 + lVar9),0);
  lVar6 = lVar21;
  lVar17 = lVar21;
  FUN_1080_2fa6(uStack_12a,(int6)((qword)(double)(lVar13 + lVar9) >> 0x10));
  dVar29 = (double)lVar18;
  lVar18 = lVar17;
  puVar22 = (undefined4 *)
            FUN_10d8_3b9b((int)*(undefined4 *)(iVar4 + 0x1c0),
                          CONCAT42(&UNK_1080_34a7,
                                   (int)((ulong)*(undefined4 *)(iVar4 + 0x1c0) >> 0x10)));
  puVar2 = (undefined2 *)((int)*puVar22 + 0x40);
  (*(code *)*puVar2)();
  puVar22 = (undefined4 *)
            FUN_10d8_3b9b((int)*(undefined4 *)(iVar4 + 0x240),
                          (int)((ulong)*(undefined4 *)(iVar4 + 0x240) >> 0x10),0x34a7);
  puVar2 = (undefined2 *)((int)*puVar22 + 0x40);
  (*(code *)*puVar2)(0x10d8,(undefined4 *)puVar22);
  lVar16 = lVar18;
  puVar22 = (undefined4 *)FUN_10d8_3b9b();
  puVar2 = (undefined2 *)((int)*puVar22 + 0x40);
  (*(code *)*puVar2)();
  lVar20 = lVar16;
  lVar13 = lVar16;
  FUN_1080_2fa6((double)((lVar12 - lVar10) + lVar19));
  puVar22 = (undefined4 *)
            FUN_10d8_3b9b((int)*(undefined4 *)(iVar4 + 0x244),
                          CONCAT42(&UNK_1080_34a7,
                                   (int)((ulong)*(undefined4 *)(iVar4 + 0x244) >> 0x10)));
  puVar2 = (undefined2 *)((int)*puVar22 + 0x40);
  (*(code *)*puVar2)();
  dVar32 = (double)(lVar11 - lVar21);
  uStack_126 = (undefined2)((qword)dVar32 >> 0x20);
  uStack_128 = (undefined2)((qword)dVar32 >> 0x10);
  uStack_12a = SUB82(dVar32,0);
  lVar21 = lVar13;
  lVar12 = lVar13;
  FUN_1080_2fa6(uStack_12a,uStack_128,uStack_126);
  dVar32 = (double)lVar6;
  dVar3 = dVar31 + dVar1 + dVar29 + dVar32;
  uStack_14 = (undefined2)((qword)dVar31 >> 0x30);
  uStack_16 = (undefined2)((qword)dVar31 >> 0x20);
  uVar30 = CONCAT62(CONCAT42(puVar22,uStack_14),uStack_16);
  uStack_18 = (undefined2)((qword)dVar31 >> 0x10);
  uStack_1a = SUB82(dVar31,0);
  lVar19 = lVar12;
  puVar22 = (undefined4 *)FUN_10d8_3b9b(uVar23,0x34b3,0x1080);
  puVar2 = (undefined2 *)((int)*puVar22 + 0x5c);
  (*(code *)*puVar2)(0x10d8,puVar22,uStack_1a,uStack_18,uVar30);
  uStack_1c = (undefined2)((qword)dVar1 >> 0x30);
  uStack_1e = (undefined2)((qword)dVar1 >> 0x20);
  uStack_20 = (undefined2)((qword)dVar1 >> 0x10);
  uStack_22 = SUB82(dVar1,0);
  puVar22 = (undefined4 *)FUN_10d8_3b9b(uVar23,0x34c5,0x10d8);
  puVar2 = (undefined2 *)((int)*puVar22 + 0x5c);
  (*(code *)*puVar2)(0x10d8,puVar22,uStack_22,uStack_20,uStack_1e,uStack_1c);
  uStack_24 = (undefined2)((qword)dVar29 >> 0x30);
  uStack_26 = (undefined2)((qword)dVar29 >> 0x20);
  uStack_28 = (undefined2)((qword)dVar29 >> 0x10);
  uStack_2a = SUB82(dVar29,0);
  puVar22 = (undefined4 *)FUN_10d8_3b9b(uVar23,0x34d7,0x10d8);
  puVar2 = (undefined2 *)((int)*puVar22 + 0x5c);
  (*(code *)*puVar2)(0x10d8,puVar22,uStack_2a,uStack_28,uStack_26,uStack_24);
  uStack_2c = (undefined2)((qword)dVar32 >> 0x30);
  uStack_2e = (undefined2)((qword)dVar32 >> 0x20);
  uStack_30 = (undefined2)((qword)dVar32 >> 0x10);
  uStack_32 = SUB82(dVar32,0);
  puVar22 = (undefined4 *)FUN_10d8_3b9b(uVar23,0x34f3,0x10d8);
  puVar2 = (undefined2 *)((int)*puVar22 + 0x5c);
  (*(code *)*puVar2)(0x10d8,puVar22);
  uStack_34 = (undefined2)((qword)dVar3 >> 0x30);
  uStack_36 = (undefined2)((qword)dVar3 >> 0x20);
  uStack_38 = (undefined2)((qword)dVar3 >> 0x10);
  uStack_3a = SUB82(dVar3,0);
  puVar25 = (undefined4 *)FUN_10d8_3b9b(uVar23,0x3506,0x10d8);
  puVar2 = (undefined2 *)((int)*puVar25 + 0x5c);
  (*(code *)*puVar2)(0x10d8,puVar25,uStack_3a,uStack_38,uStack_36,uStack_34,puVar22,uStack_32,
                     uStack_30,uStack_2e,uStack_2c);
  puVar22 = (undefined4 *)
            FUN_10d8_3b9b((int)*(undefined4 *)(iVar4 + 0x1c0),
                          (int)((ulong)*(undefined4 *)(iVar4 + 0x1c0) >> 0x10),0x351d,0x10d8);
  puVar2 = (undefined2 *)((int)*puVar22 + 0x40);
  (*(code *)*puVar2)(0x10d8,puVar22);
  dVar31 = (double)lVar17;
  lVar17 = lVar19;
  FUN_1080_2fa6(SUB82(dVar31,0),(int)((qword)dVar31 >> 0x10),(int)((qword)dVar31 >> 0x20),
                (int)((qword)dVar31 >> 0x30));
  lVar9 = lVar17;
  puVar22 = (undefined4 *)
            FUN_10d8_3b9b((int)*(undefined4 *)(iVar4 + 0x1c4),
                          (int)((ulong)*(undefined4 *)(iVar4 + 0x1c4) >> 0x10),0x351d,0x1080);
  puVar2 = (undefined2 *)((int)*puVar22 + 0x40);
  (*(code *)*puVar2)(0x10d8,puVar22);
  dVar31 = (double)lVar16;
  FUN_1080_2fa6(SUB82(dVar31,0),(int)((qword)dVar31 >> 0x10),(int)((qword)dVar31 >> 0x20),
                (int)((qword)dVar31 >> 0x30));
  dVar31 = (double)(lVar18 + lVar20);
  uStack_3c = (undefined2)((qword)dVar31 >> 0x30);
  uStack_3e = (undefined2)((qword)dVar31 >> 0x20);
  uStack_40 = (undefined2)((qword)dVar31 >> 0x10);
  uStack_42 = SUB82(dVar31,0);
  lVar6 = lVar9;
  lVar20 = lVar9;
  puVar22 = (undefined4 *)FUN_10d8_3b9b(uVar23,0x3531,0x1080);
  puVar2 = (undefined2 *)((int)*puVar22 + 0x5c);
  (*(code *)*puVar2)(0x10d8);
  puVar25 = (undefined4 *)
            FUN_10d8_3b9b((int)*(undefined4 *)(iVar4 + 0x1b0),
                          (int)((ulong)*(undefined4 *)(iVar4 + 0x1b0) >> 0x10),0x3542,0x10d8);
  puVar2 = (undefined2 *)((int)*puVar25 + 0x40);
  (*(code *)*puVar2)(0x10d8,puVar25,puVar22,uStack_42,uStack_40,uStack_3e,uStack_3c);
  puVar22 = (undefined4 *)
            FUN_10d8_3b9b((int)*(undefined4 *)(iVar4 + 0x1b4),
                          (int)((ulong)*(undefined4 *)(iVar4 + 0x1b4) >> 0x10),0x3542,0x10d8);
  puVar2 = (undefined2 *)((int)*puVar22 + 0x40);
  (*(code *)*puVar2)(0x10d8,puVar22);
  dVar1 = (double)(lVar13 + lVar21);
  uStack_44 = (undefined2)((qword)dVar1 >> 0x30);
  uStack_46 = (undefined2)((qword)dVar1 >> 0x20);
  uStack_48 = (undefined2)((qword)dVar1 >> 0x10);
  uStack_4a = SUB82(dVar1,0);
  lVar16 = lVar20;
  lVar13 = lVar20;
  puVar22 = (undefined4 *)FUN_10d8_3b9b(uVar23,0x3552,0x10d8);
  puVar2 = (undefined2 *)((int)*puVar22 + 0x5c);
  (*(code *)*puVar2)(0x10d8,puVar22,uStack_4a,uStack_48,uStack_46,uStack_44);
  puVar22 = (undefined4 *)
            FUN_10d8_3b9b((int)*(undefined4 *)(iVar4 + 0x1b0),
                          (int)((ulong)*(undefined4 *)(iVar4 + 0x1b0) >> 0x10),0x355a,0x10d8);
  puVar2 = (undefined2 *)((int)*puVar22 + 0x40);
  (*(code *)*puVar2)(0x10d8,puVar22);
  dVar29 = (double)lVar12;
  lVar18 = lVar13;
  FUN_1080_2fa6(SUB82(dVar29,0),(int)((qword)dVar29 >> 0x10),(int)((qword)dVar29 >> 0x20),
                (int)((qword)dVar29 >> 0x30));
  lVar7 = lVar18;
  puVar22 = (undefined4 *)
            FUN_10d8_3b9b((int)*(undefined4 *)(iVar4 + 0x1b0),
                          (int)((ulong)*(undefined4 *)(iVar4 + 0x1b0) >> 0x10),0x3564,0x1080);
  puVar2 = (undefined2 *)((int)*puVar22 + 0x40);
  (*(code *)*puVar2)(0x10d8,puVar22);
  dVar29 = (double)lVar17;
  FUN_1080_2fa6(SUB82(dVar29,0),(int)((qword)dVar29 >> 0x10),(int)((qword)dVar29 >> 0x20),
                (int)((qword)dVar29 >> 0x30));
  lVar21 = lVar7;
  lVar15 = lVar7;
  puVar22 = (undefined4 *)
            FUN_10d8_3b9b((int)*(undefined4 *)(iVar4 + 0x1b4),
                          (int)((ulong)*(undefined4 *)(iVar4 + 0x1b4) >> 0x10),0x355a,0x1080);
  puVar2 = (undefined2 *)((int)*puVar22 + 0x40);
  (*(code *)*puVar2)(0x10d8,puVar22);
  dVar29 = (double)lVar6;
  FUN_1080_2fa6(SUB82(dVar29,0),(int)((qword)dVar29 >> 0x10),(int)((qword)dVar29 >> 0x20),
                (int)((qword)dVar29 >> 0x30));
  lVar6 = lVar15;
  lVar8 = lVar15;
  puVar22 = (undefined4 *)
            FUN_10d8_3b9b((int)*(undefined4 *)(iVar4 + 0x1b4),
                          (int)((ulong)*(undefined4 *)(iVar4 + 0x1b4) >> 0x10),0x3564,0x1080);
  puVar2 = (undefined2 *)((int)*puVar22 + 0x40);
  (*(code *)*puVar2)(0x10d8,puVar22);
  dVar29 = (double)lVar16;
  FUN_1080_2fa6(SUB82(dVar29,0),(int)((qword)dVar29 >> 0x10),(int)((qword)dVar29 >> 0x20),
                (int)((qword)dVar29 >> 0x30));
  dVar29 = (double)(lVar19 + lVar9 + lVar20 + lVar13);
  uStack_4c = (undefined2)((qword)dVar29 >> 0x30);
  uStack_4e = (undefined2)((qword)dVar29 >> 0x20);
  uStack_50 = (undefined2)((qword)dVar29 >> 0x10);
  uStack_52 = SUB82(dVar29,0);
  lVar16 = lVar8;
  puVar22 = (undefined4 *)FUN_10d8_3b9b(uVar23,0x3576,0x1080);
  puVar2 = (undefined2 *)((int)*puVar22 + 0x5c);
  (*(code *)*puVar2)(0x10d8,puVar22,uStack_52,uStack_50,uStack_4e,uStack_4c);
  puVar22 = (undefined4 *)
            FUN_10d8_3b9b((int)*(undefined4 *)(iVar4 + 0x240),
                          (int)((ulong)*(undefined4 *)(iVar4 + 0x240) >> 0x10),0x3585,0x10d8);
  puVar2 = (undefined2 *)((int)*puVar22 + 0x44);
  lVar24 = (*(code *)*puVar2)(0x10d8,puVar22);
  puVar22 = (undefined4 *)FUN_10d8_3b9b();
  puVar2 = (undefined2 *)((int)*puVar22 + 0x40);
  (*(code *)*puVar2)();
  lVar20 = lVar16;
  lVar12 = lVar16;
  FUN_1080_2fa6((double)((longdouble)lVar24 * lVar18));
  puVar22 = (undefined4 *)
            FUN_10d8_3b9b((int)*(undefined4 *)(iVar4 + 0x244),
                          CONCAT42(&UNK_1080_3585,
                                   (int)((ulong)*(undefined4 *)(iVar4 + 0x244) >> 0x10)));
  puVar2 = (undefined2 *)((int)*puVar22 + 0x44);
  lVar24 = (*(code *)*puVar2)();
  puVar22 = (undefined4 *)FUN_10d8_3b9b();
  puVar2 = (undefined2 *)((int)*puVar22 + 0x40);
  (*(code *)*puVar2)();
  lVar18 = lVar12;
  FUN_1080_2fa6((double)((longdouble)lVar24 * lVar21));
  lVar21 = lVar18;
  lVar17 = lVar18;
  puVar22 = (undefined4 *)FUN_10d8_3b9b(uVar23,0x359d,0x1080);
  puVar2 = (undefined2 *)((int)*puVar22 + 0x5c);
  (*(code *)*puVar2)(0x10d8,puVar22);
  puVar22 = (undefined4 *)FUN_10d8_3b9b(uVar23,0x35a8,0x10d8);
  puVar2 = (undefined2 *)((int)*puVar22 + 0x40);
  (*(code *)*puVar2)(0x10d8,puVar22);
  dVar32 = (double)lVar6;
  lVar6 = lVar17;
  FUN_1080_2fa6(SUB82(dVar32,0),(int)((qword)dVar32 >> 0x10),(int)((qword)dVar32 >> 0x20),
                (int)((qword)dVar32 >> 0x30));
  lVar9 = lVar6;
  puVar22 = (undefined4 *)FUN_10d8_3b9b(uVar23,0x35bd,0x1080);
  puVar2 = (undefined2 *)((int)*puVar22 + 0x40);
  (*(code *)*puVar2)(0x10d8,puVar22);
  dVar32 = (double)lVar16;
  lVar10 = lVar9;
  FUN_1080_2fa6(SUB82(dVar32,0),(int)((qword)dVar32 >> 0x10),(int)((qword)dVar32 >> 0x20),
                (int)((qword)dVar32 >> 0x30));
  lVar11 = lVar10;
  puVar22 = (undefined4 *)FUN_10d8_3b9b(uVar23,0x35c9,0x1080);
  puVar2 = (undefined2 *)((int)*puVar22 + 0x40);
  (*(code *)*puVar2)(0x10d8,puVar22);
  dVar32 = (double)lVar12;
  lVar12 = lVar11;
  FUN_1080_2fa6(SUB82(dVar32,0),(int)((qword)dVar32 >> 0x10),(int)((qword)dVar32 >> 0x20),
                (int)((qword)dVar32 >> 0x30));
  lVar19 = lVar12;
  puVar22 = (undefined4 *)FUN_10d8_3b9b(uVar23,0x35db,0x1080);
  puVar2 = (undefined2 *)((int)*puVar22 + 0x40);
  (*(code *)*puVar2)(0x10d8,puVar22);
  lVar13 = lVar19;
  puVar22 = (undefined4 *)FUN_10d8_3b9b();
  puVar2 = (undefined2 *)((int)*puVar22 + 0x40);
  (*(code *)*puVar2)();
  lVar14 = lVar13;
  FUN_1080_2fa6((double)lVar17);
  dVar32 = (double)lVar6;
  puVar25 = (undefined4 *)FUN_10d8_3b9b(uVar23,0x35eb,0x1080);
  puVar2 = (undefined2 *)((int)*puVar25 + 0x5c);
  (*(code *)*puVar2)(0x10d8,puVar25,dVar32,puVar22);
  dVar31 = dVar31 + dVar1 + dVar29 + (double)(lVar7 + lVar15) + (double)lVar8 + (double)lVar20 +
           (double)lVar18 + (double)lVar21 + (double)lVar6;
  uStack_84 = (undefined2)((qword)dVar31 >> 0x30);
  uStack_86 = (undefined2)((qword)dVar31 >> 0x20);
  uStack_88 = (undefined2)((qword)dVar31 >> 0x10);
  uStack_8a = SUB82(dVar31,0);
  puVar22 = (undefined4 *)FUN_10d8_3b9b(uVar23,0x35f2,0x10d8);
  puVar2 = (undefined2 *)((int)*puVar22 + 0x5c);
  (*(code *)*puVar2)(0x10d8,puVar22,uStack_8a,uStack_88,uStack_86,uStack_84);
  dVar3 = dVar3 - dVar31;
  uStack_8c = (undefined2)((qword)dVar3 >> 0x30);
  uStack_8e = (undefined2)((qword)dVar3 >> 0x20);
  uStack_90 = (undefined2)((qword)dVar3 >> 0x10);
  uStack_92 = SUB82(dVar3,0);
  lVar15 = lVar14;
  puVar22 = (undefined4 *)FUN_10d8_3b9b(uVar23,0x3604,0x10d8);
  puVar2 = (undefined2 *)((int)*puVar22 + 0x5c);
  (*(code *)*puVar2)(0x10d8,puVar22,uStack_92,uStack_90,uStack_8e,uStack_8c);
  puVar22 = (undefined4 *)
            FUN_10d8_3b9b((int)*(undefined4 *)(iVar4 + 0x1ac),
                          (int)((ulong)*(undefined4 *)(iVar4 + 0x1ac) >> 0x10),0x3612,0x10d8);
  puVar2 = (undefined2 *)((int)*puVar22 + 0x40);
  (*(code *)*puVar2)(0x10d8,puVar22);
  lVar18 = lVar15;
  puVar22 = (undefined4 *)FUN_10d8_3b9b(uVar23,0x3612,0x10d8);
  puVar2 = (undefined2 *)((int)*puVar22 + 0x5c);
  (*(code *)*puVar2)(0x10d8,puVar22);
  puVar22 = (undefined4 *)
            FUN_10d8_3b9b((int)*(undefined4 *)(iVar4 + 0x1c0),
                          (int)((ulong)*(undefined4 *)(iVar4 + 0x1c0) >> 0x10),0x361e,0x10d8);
  puVar2 = (undefined2 *)((int)*puVar22 + 0x40);
  (*(code *)*puVar2)(0x10d8,puVar22);
  puVar22 = (undefined4 *)
            FUN_10d8_3b9b((int)*(undefined4 *)(iVar4 + 0x1c4),
                          (int)((ulong)*(undefined4 *)(iVar4 + 0x1c4) >> 0x10),0x361e,0x10d8);
  puVar2 = (undefined2 *)((int)*puVar22 + 0x40);
  (*(code *)*puVar2)(0x10d8,puVar22);
  lVar21 = lVar18;
  lVar16 = lVar18;
  puVar22 = (undefined4 *)FUN_10d8_3b9b(uVar23,0x3630,0x10d8);
  puVar2 = (undefined2 *)((int)*puVar22 + 0x5c);
  (*(code *)*puVar2)(0x10d8,puVar22);
  puVar22 = (undefined4 *)
            FUN_10d8_3b9b((int)*(undefined4 *)(iVar4 + 0x1c0),
                          (int)((ulong)*(undefined4 *)(iVar4 + 0x1c0) >> 0x10),0x3642,0x10d8);
  puVar2 = (undefined2 *)((int)*puVar22 + 0x40);
  (*(code *)*puVar2)(0x10d8,puVar22);
  puVar22 = (undefined4 *)
            FUN_10d8_3b9b((int)*(undefined4 *)(iVar4 + 0x1c4),
                          (int)((ulong)*(undefined4 *)(iVar4 + 0x1c4) >> 0x10),0x3642,0x10d8);
  puVar2 = (undefined2 *)((int)*puVar22 + 0x40);
  (*(code *)*puVar2)(0x10d8,puVar22);
  dVar31 = (double)(lVar12 + lVar19);
  uStack_a4 = (undefined2)((qword)dVar31 >> 0x30);
  uStack_a6 = (undefined2)((qword)dVar31 >> 0x20);
  uStack_a8 = (undefined2)((qword)dVar31 >> 0x10);
  uStack_aa = SUB82(dVar31,0);
  lVar6 = lVar16;
  lVar12 = lVar16;
  puVar22 = (undefined4 *)FUN_10d8_3b9b(uVar23,0x3651,0x10d8);
  puVar2 = (undefined2 *)((int)*puVar22 + 0x5c);
  (*(code *)*puVar2)(0x10d8,puVar22,uStack_aa,uStack_a8,uStack_a6,uStack_a4);
  puVar22 = (undefined4 *)FUN_10d8_3b9b(uVar23,0x3666,0x10d8);
  puVar2 = (undefined2 *)((int)*puVar22 + 0x40);
  (*(code *)*puVar2)(0x10d8,puVar22);
  lVar19 = lVar12;
  puVar22 = (undefined4 *)
            FUN_10d8_3b9b((int)*(undefined4 *)(iVar4 + 0x1bc),
                          (int)((ulong)*(undefined4 *)(iVar4 + 0x1bc) >> 0x10),0x3679,0x10d8);
  puVar2 = (undefined2 *)((int)*puVar22 + 0x40);
  (*(code *)*puVar2)(0x10d8,puVar22);
  lVar17 = lVar19;
  puVar22 = (undefined4 *)
            FUN_10d8_3b9b((int)*(undefined4 *)(iVar4 + 0x1bc),
                          (int)((ulong)*(undefined4 *)(iVar4 + 0x1bc) >> 0x10),0x3686,0x10d8);
  puVar2 = (undefined2 *)((int)*puVar22 + 0x40);
  (*(code *)*puVar2)(0x10d8,puVar22);
  lVar20 = lVar17;
  puVar22 = (undefined4 *)
            FUN_10d8_3b9b((int)*(undefined4 *)(iVar4 + 0x1bc),
                          (int)((ulong)*(undefined4 *)(iVar4 + 0x1bc) >> 0x10),0x3693,0x10d8);
  puVar2 = (undefined2 *)((int)*puVar22 + 0x40);
  (*(code *)*puVar2)(0x10d8,puVar22);
  dVar1 = ((((((dVar3 + (double)lVar9) - (double)(lVar10 + lVar11)) - dVar31) - (double)lVar13) -
           (double)lVar14) - (double)lVar15) - (double)lVar18;
  uStack_cc = (undefined2)((qword)dVar1 >> 0x30);
  uStack_ce = (undefined2)((qword)dVar1 >> 0x20);
  uStack_d0 = (undefined2)((qword)dVar1 >> 0x10);
  uStack_d2 = SUB82(dVar1,0);
  lVar18 = lVar20;
  puVar22 = (undefined4 *)FUN_10d8_3b9b(uVar23,0x36a1,0x10d8);
  puVar2 = (undefined2 *)((int)*puVar22 + 0x5c);
  (*(code *)*puVar2)(0x10d8,puVar22,uStack_d2,uStack_d0,uStack_ce,uStack_cc);
  puVar22 = (undefined4 *)
            FUN_10d8_3b9b((int)*(undefined4 *)(iVar4 + 0x1c0),
                          (int)((ulong)*(undefined4 *)(iVar4 + 0x1c0) >> 0x10),0x36b9,0x10d8);
  puVar2 = (undefined2 *)((int)*puVar22 + 0x40);
  (*(code *)*puVar2)(0x10d8,puVar22);
  puVar22 = (undefined4 *)
            FUN_10d8_3b9b((int)*(undefined4 *)(iVar4 + 0x1c4),
                          (int)((ulong)*(undefined4 *)(iVar4 + 0x1c4) >> 0x10),0x36b9,0x10d8);
  puVar2 = (undefined2 *)((int)*puVar22 + 0x40);
  (*(code *)*puVar2)(0x10d8,puVar22);
  dVar31 = (double)(lVar21 + lVar16);
  uStack_d4 = (undefined2)((qword)dVar31 >> 0x30);
  uStack_d6 = (undefined2)((qword)dVar31 >> 0x20);
  uStack_d8 = (undefined2)((qword)dVar31 >> 0x10);
  uStack_da = SUB82(dVar31,0);
  lVar21 = lVar18;
  puVar22 = (undefined4 *)FUN_10d8_3b9b(uVar23,0x36ca,0x10d8);
  puVar2 = (undefined2 *)((int)*puVar22 + 0x5c);
  (*(code *)*puVar2)(0x10d8,puVar22,uStack_da,uStack_d8,uStack_d6,uStack_d4);
  dVar1 = dVar1 - dVar31;
  uStack_dc = (undefined2)((qword)dVar1 >> 0x30);
  uStack_de = (undefined2)((qword)dVar1 >> 0x20);
  uStack_e0 = (undefined2)((qword)dVar1 >> 0x10);
  uStack_e2 = SUB82(dVar1,0);
  lVar13 = lVar21;
  puVar22 = (undefined4 *)FUN_10d8_3b9b(uVar23,0x36e1,0x10d8);
  puVar2 = (undefined2 *)((int)*puVar22 + 0x5c);
  (*(code *)*puVar2)(0x10d8,puVar22,uStack_e2,uStack_e0,uStack_de,uStack_dc);
  puVar22 = (undefined4 *)
            FUN_10d8_3b9b((int)*(undefined4 *)(iVar4 + 0x1b8),
                          (int)((ulong)*(undefined4 *)(iVar4 + 0x1b8) >> 0x10),0x36f6,0x10d8);
  puVar2 = (undefined2 *)((int)*puVar22 + 0x40);
  (*(code *)*puVar2)(0x10d8,puVar22);
  puVar22 = (undefined4 *)FUN_10d8_3b9b();
  puVar2 = (undefined2 *)((int)*puVar22 + 0x40);
  (*(code *)*puVar2)();
  lVar6 = lVar6 * lVar12;
  lVar16 = (longdouble)100.0;
  FUN_1158_04b2(puVar22);
  lVar12 = lVar13;
  FUN_1080_2fa6((double)lVar16);
  lVar9 = lVar12;
  dVar31 = (double)lVar6;
  puVar22 = (undefined4 *)FUN_10d8_3b9b(uVar23,0x370f,0x1080);
  puVar2 = (undefined2 *)((int)*puVar22 + 0x5c);
  (*(code *)*puVar2)(0x10d8,puVar22,dVar31);
  puVar22 = (undefined4 *)
            FUN_10d8_3b9b((int)*(undefined4 *)(iVar4 + 0x1b8),
                          (int)((ulong)*(undefined4 *)(iVar4 + 0x1b8) >> 0x10),0x3722,0x10d8);
  puVar2 = (undefined2 *)((int)*puVar22 + 0x40);
  (*(code *)*puVar2)(0x10d8,puVar22);
  puVar22 = (undefined4 *)FUN_10d8_3b9b();
  puVar2 = (undefined2 *)((int)*puVar22 + 0x40);
  (*(code *)*puVar2)();
  lVar19 = lVar19 * lVar17;
  lVar17 = (longdouble)100.0;
  FUN_1158_04b2(puVar22);
  lVar16 = lVar9;
  FUN_1080_2fa6((double)lVar17);
  puVar22 = (undefined4 *)
            FUN_10d8_3b9b((int)*(undefined4 *)(iVar4 + 0x1b8),
                          CONCAT42(&UNK_1080_3742,
                                   (int)((ulong)*(undefined4 *)(iVar4 + 0x1b8) >> 0x10)));
  puVar2 = (undefined2 *)((int)*puVar22 + 0x40);
  (*(code *)*puVar2)();
  puVar25 = (undefined4 *)FUN_10d8_3b9b();
  uVar30 = CONCAT62(CONCAT42(puVar22,(int)((ulong)puVar25 >> 0x10)),(undefined4 *)puVar25);
  puVar2 = (undefined2 *)((int)*puVar25 + 0x40);
  (*(code *)*puVar2)();
  lVar20 = lVar20 * lVar18;
  lVar18 = (longdouble)100.0;
  FUN_1158_04b2(uVar30);
  FUN_1080_2fa6((double)lVar18);
  puVar22 = (undefined4 *)
            FUN_10d8_3b9b((int)*(undefined4 *)(iVar4 + 0x1b8),
                          CONCAT42(&UNK_1080_3764,
                                   (int)((ulong)*(undefined4 *)(iVar4 + 0x1b8) >> 0x10)));
  puVar2 = (undefined2 *)((int)*puVar22 + 0x40);
  (*(code *)*puVar2)();
  puVar25 = (undefined4 *)FUN_10d8_3b9b();
  uVar30 = CONCAT62(CONCAT42(puVar22,(int)((ulong)puVar25 >> 0x10)),(undefined4 *)puVar25);
  puVar2 = (undefined2 *)((int)*puVar25 + 0x40);
  (*(code *)*puVar2)();
  lVar21 = lVar21 * lVar13;
  lVar18 = (longdouble)100.0;
  FUN_1158_04b2(uVar30);
  FUN_1080_2fa6((double)lVar18);
  dVar31 = (double)(lVar19 + lVar20 + lVar21);
  dVar29 = dVar31;
  puVar22 = (undefined4 *)FUN_10d8_3b9b(uVar23,0x3778,0x1080);
  puVar2 = (undefined2 *)((int)*puVar22 + 0x5c);
  (*(code *)*puVar2)(0x10d8,puVar22,dVar29);
  dVar31 = (dVar1 + (double)lVar6) - dVar31;
  uStack_f4 = (undefined2)((qword)dVar31 >> 0x30);
  uStack_f6 = (undefined2)((qword)dVar31 >> 0x20);
  uStack_f8 = (undefined2)((qword)dVar31 >> 0x10);
  uStack_fa = SUB82(dVar31,0);
  puVar22 = (undefined4 *)FUN_10d8_3b9b(uVar23,0x378b,0x10d8);
  puVar2 = (undefined2 *)((int)*puVar22 + 0x5c);
  (*(code *)*puVar2)(0x10d8,puVar22,uStack_fa,uStack_f8,uStack_f6,uStack_f4);
  puVar22 = (undefined4 *)
            FUN_10d8_3b9b((int)*(undefined4 *)(iVar4 + 0x1ac),
                          (int)((ulong)*(undefined4 *)(iVar4 + 0x1ac) >> 0x10),0x379b,0x10d8);
  puVar2 = (undefined2 *)((int)*puVar22 + 0x40);
  (*(code *)*puVar2)(0x10d8,puVar22);
  uStack_102 = (double)lVar12;
  if (uStack_102 <= 0.0) {
    uStack_10a = -uStack_102;
    uStack_102 = 0.0;
  }
  else {
    uStack_10a = 0.0;
  }
  uVar5 = (undefined2)uStack_102;
  uVar26 = uStack_102._2_2_;
  uVar27 = uStack_102._4_2_;
  uVar28 = uStack_102._6_2_;
  puVar22 = (undefined4 *)FUN_10d8_3b9b(uVar23,0x37b3,0x1038);
  puVar2 = (undefined2 *)((int)*puVar22 + 0x5c);
  (*(code *)*puVar2)(0x10d8,puVar22,uVar5,uVar26,uVar27,uVar28);
  uVar5 = (undefined2)uStack_10a;
  uVar26 = uStack_10a._2_2_;
  uVar27 = uStack_10a._4_2_;
  uVar28 = uStack_10a._6_2_;
  puVar22 = (undefined4 *)FUN_10d8_3b9b(uVar23,0x37c9,0x10d8);
  puVar2 = (undefined2 *)((int)*puVar22 + 0x5c);
  (*(code *)*puVar2)(0x10d8,puVar22,uVar5,uVar26,uVar27,uVar28);
  puVar22 = (undefined4 *)FUN_10d8_3b9b(uVar23,0x37e0,0x10d8);
  puVar2 = (undefined2 *)((int)*puVar22 + 0x40);
  (*(code *)*puVar2)(0x10d8,puVar22);
  puVar22 = (undefined4 *)FUN_10d8_3b9b(uVar23,0x37ee,0x10d8);
  puVar2 = (undefined2 *)((int)*puVar22 + 0x40);
  (*(code *)*puVar2)(0x10d8,puVar22);
  dVar31 = ((dVar31 + uStack_102 + (double)lVar9) - uStack_10a) - (double)lVar16;
  uStack_11c = (undefined2)((qword)dVar31 >> 0x30);
  uStack_11e = (undefined2)((qword)dVar31 >> 0x20);
  uStack_120 = (undefined2)((qword)dVar31 >> 0x10);
  uStack_122 = SUB82(dVar31,0);
  puVar22 = (undefined4 *)FUN_10d8_3b9b(uVar23,0x37f4,0x10d8);
  puVar2 = (undefined2 *)((int)*puVar22 + 0x5c);
  (*(code *)*puVar2)(0x10d8,puVar22,uStack_122,uStack_120,uStack_11e,uStack_11c);
  return;
}



/* ---- TFormSERG_SIG_FormKeyDown @ 1038:4947  (1 octets) ---- */

void TFormSERG_SIG_FormKeyDown(undefined2 param_1,undefined4 param_2,byte param_3,int *param_4)

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
        iVar4 = FUN_1158_043e(0x1038);
      }
      FUN_1140_1cd0(iVar6,uVar8,iVar4);
      break;
    case 0x28:
      iVar4 = *(int *)(iVar6 + 10) + *(int *)(iVar6 + 8);
      if (SCARRY2(*(int *)(iVar6 + 10),*(int *)(iVar6 + 8))) {
        iVar4 = FUN_1158_043e(0x1038);
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



/* ---- TFormSERG_SIG_Fiche1Click @ 1038:4b13  (43 octets) ---- */

void __stdcall16far TFormSERG_SIG_Fiche1Click(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined2 uVar3;
  
  FUN_1158_0444();
  uVar1 = *(undefined4 *)((int)param_1 + 700);
  uVar3 = (undefined2)((ulong)uVar1 >> 0x10);
  iVar2 = (int)uVar1;
  FUN_1140_77b2((int)DAT_1160_2c2a,(int)((ulong)DAT_1160_2c2a >> 0x10),*(undefined2 *)(iVar2 + 0x23)
                ,*(undefined2 *)(iVar2 + 0x25),1);
  return;
}



/* ---- TFormSERG_SIG_Index1Click @ 1038:4b3e  (31 octets) ---- */

void __stdcall16far TFormSERG_SIG_Index1Click(void)

{
  FUN_1158_0444();
  FUN_1140_77b2((int)DAT_1160_2c2a,(int)((ulong)DAT_1160_2c2a >> 0x10),0,0,3);
  return;
}



/* ---- TFormSERG_SIG_Rechercher1Click @ 1038:4b5d  (33 octets) ---- */

void __stdcall16far TFormSERG_SIG_Rechercher1Click(void)

{
  FUN_1158_0444();
  FUN_1140_77b2((int)DAT_1160_2c2a,(int)((ulong)DAT_1160_2c2a >> 0x10),0x1d6,0x1160,0x105);
  return;
}



/* ---- TFormSERG_SIG_Utiliserlaide1Click @ 1038:4b7e  (31 octets) ---- */

void __stdcall16far TFormSERG_SIG_Utiliserlaide1Click(void)

{
  FUN_1158_0444();
  FUN_1140_77b2((int)DAT_1160_2c2a,(int)((ulong)DAT_1160_2c2a >> 0x10),0,0,4);
  return;
}



/* ---- TFormSERG_SIG_Apropos1Click @ 1038:4b9d  (29 octets) ---- */

void __stdcall16far TFormSERG_SIG_Apropos1Click(void)

{
  undefined2 uVar1;
  
  uVar1 = 0x4ba8;
  FUN_1158_0444();
  FUN_1140_5d45((int)DAT_1160_2008,(int)((ulong)DAT_1160_2008 >> 0x10),uVar1);
  return;
}



/* ---- FUN_1038_4bba @ 1038:4bba  (123 octets) ---- */

void __stdcall16far FUN_1038_4bba(undefined4 *param_1,undefined *param_2,undefined4 param_3)

{
  undefined2 *puVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  
  uVar4 = 0x4bc5;
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



/* ---- TFormSERG_SIG_DBEdit101MouseDown @ 1038:4c35  (183 octets) ---- */

void __stdcall16far TFormSERG_SIG_DBEdit101MouseDown(undefined4 param_1)

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
    *(undefined2 *)(iVar1 + 0x6d) = 0x4bba;
    *(undefined2 *)(iVar1 + 0x6f) = 0x1038;
    *(undefined2 *)(iVar1 + 0x71) = (int)param_1;
    *(undefined2 *)(iVar1 + 0x73) = (int)((ulong)param_1 >> 0x10);
  }
  return;
}



/* ---- TFormSERG_SIG_Panel101MouseDown @ 1038:4cec  (105 octets) ---- */

void __stdcall16far TFormSERG_SIG_Panel101MouseDown(void)

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



/* ---- TFormSERG_SIG_ImpressionRapide1Click @ 1038:4d55  (43 octets) ---- */

void __stdcall16far TFormSERG_SIG_ImpressionRapide1Click(undefined4 param_1)

{
  undefined4 uVar1;
  char cVar2;
  undefined2 uVar3;
  
  FUN_1158_0444();
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  uVar1 = *(undefined4 *)((int)param_1 + 0x214);
  cVar2 = FUN_1108_2f17((int)uVar1,(int)((ulong)uVar1 >> 0x10));
  if (cVar2 != '\0') {
    FUN_1038_4de4((int)param_1,uVar3);
  }
  return;
}



/* ---- FUN_1038_4d88 @ 1038:4d88  (69 octets) ---- */

undefined2 __stdcall16far FUN_1038_4d88(void)

{
  undefined2 uVar1;
  undefined2 unaff_SS;
  undefined4 uVar2;
  undefined local_24 [30];
  undefined2 uStack_6;
  
  uStack_6 = 0x4d93;
  FUN_1158_0444();
  uVar2 = FUN_10f0_2a04((int)DAT_1160_2c54,(int)((ulong)DAT_1160_2c54 >> 0x10));
  uVar1 = FUN_1128_21d2(uVar2);
  GETTEXTMETRICS(0x1128,local_24,unaff_SS);
  uVar1 = FUN_1158_0416(uVar1);
  return uVar1;
}



/* ---- FUN_1038_4de4 @ 1038:4de4  (1112 octets) ---- */

void __cdecl16far FUN_1038_4de4(undefined4 param_1)

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
  
  local_6 = 0x4def;
  FUN_1158_0444();
  uVar9 = (undefined2)((ulong)param_1 >> 0x10);
  iVar6 = (int)param_1;
  uStack_418 = 0x1158;
  puStack_416 = (undefined *)iVar6;
  puStack_414 = (undefined *)uVar9;
  FUN_1038_5588();
  puStack_414 = local_106;
  puStack_416 = (undefined *)0x1038;
  uStack_418 = 0x4e0a;
  FUN_10f0_204e();
  puStack_414 = local_106;
  puStack_416 = (undefined *)0x10f0;
  uStack_418 = 0x4e15;
  FUN_1158_09f5();
  puStack_414 = (undefined *)0x4e1a;
  FUN_1158_0408();
  puStack_414 = (undefined *)0x4dde;
  uStack_418 = DAT_1160_1858;
  DAT_1160_1858 = (undefined4 *)&uStack_418;
  puStack_416 = &stack0xfffe;
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
    FUN_1158_0db5(0,0x4dcd,uVar10);
    FUN_1158_0c78(puVar13,uVar14);
    uVar10 = 0x1158;
    FUN_1158_0408();
    if (iVar7 == 3) break;
    iVar7 = iVar7 + 1;
  }
  local_210 = *(undefined4 *)(iVar6 + 0x2d8);
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
        local_6 = FUN_1158_1878(local_206,unaff_SS,0x4dce,0x1158);
        if (0 < local_6) {
          FUN_1158_1975(1,local_6,local_206,unaff_SS);
          FUN_1158_1916(local_6,0xff,local_206,unaff_SS,0x4dd0,0x1158);
        }
      } while (local_6 != 0);
      puVar13 = local_312;
      uVar10 = unaff_SS;
      FUN_1158_17cd(0x4dd2,0x1158);
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
  uVar3 = FUN_1038_4d88(&stack0xfffe);
  if (0xfffd < uVar3) {
    FUN_1158_043e(0x1038);
  }
  local_208 = FUN_1158_0416();
  puVar13 = local_410;
  uVar14 = unaff_SS;
  FUN_1158_17cd(0x4dd2,0x1158);
  puVar12 = local_310;
  uVar10 = unaff_SS;
  FUN_1138_1d53((int)*(undefined4 *)(iVar6 + 0x2c8),
                (int)((ulong)*(undefined4 *)(iVar6 + 0x2c8) >> 0x10));
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
  FUN_1158_17cd(0x4dd2,0x1128);
  puVar12 = local_310;
  uVar10 = unaff_SS;
  FUN_1138_1d53((int)*(undefined4 *)(iVar6 + 0x2cc),
                (int)((ulong)*(undefined4 *)(iVar6 + 0x2cc) >> 0x10));
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
  FUN_1158_17cd(0x4dd2,0x1128);
  puVar12 = local_310;
  uVar10 = unaff_SS;
  FUN_1138_1d53((int)*(undefined4 *)(iVar6 + 0x2d0),
                (int)((ulong)*(undefined4 *)(iVar6 + 0x2d0) >> 0x10));
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
  FUN_1158_17cd(0x4dd2,0x1128);
  puVar12 = local_310;
  uVar10 = unaff_SS;
  FUN_1138_1d53((int)*(undefined4 *)(iVar6 + 0x2d4),
                (int)((ulong)*(undefined4 *)(iVar6 + 0x2d4) >> 0x10));
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
  uStack_418 = 0x523c;
  FUN_1158_0a4f(local_106,unaff_SS);
  FUN_1158_0408();
  FUN_1120_49e3((int)*(undefined4 *)(iVar6 + 0x2d8),
                (int)((ulong)*(undefined4 *)(iVar6 + 0x2d8) >> 0x10));
  return;
}



/* ---- TFormSERG_SIG_Copier1Click @ 1038:5240  (71 octets) ---- */

void __stdcall16far TFormSERG_SIG_Copier1Click(undefined4 param_1)

{
  undefined4 uVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  
  FUN_1158_0444();
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  FUN_1038_5588((int)param_1,uVar2,0);
  uVar1 = *(undefined4 *)((int)param_1 + 0x2d8);
  uVar3 = (undefined2)((ulong)uVar1 >> 0x10);
  uVar2 = (undefined2)uVar1;
  FUN_1120_4a3f(uVar2,uVar3);
  FUN_1120_49ff(uVar2,uVar3);
  FUN_1120_49e3(uVar2,uVar3);
  return;
}



/* ---- FUN_1038_528b @ 1038:528b  (760 octets) ---- */

void __stdcall16far
FUN_1038_528b(int param_1,int param_2,undefined4 param_3,undefined2 param_4,byte *param_5)

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
  
  uStack_6 = 0x5296;
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
        FUN_1158_184c(0x5287,0x1158);
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
        FUN_1158_184c(0x5289,0x1158);
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
          FUN_1158_17cd(0x5289,0x1158);
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



/* ---- FUN_1038_5588 @ 1038:5588  (4582 octets) ---- */

void __stdcall16far FUN_1038_5588(undefined4 param_1,int param_2)

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
  
  uStack_6 = 0x5593;
  FUN_1158_0444();
  uVar4 = (undefined2)((ulong)param_1 >> 0x10);
  iVar3 = (int)param_1;
  local_104 = (undefined2)((ulong)*(undefined4 *)(iVar3 + 0x2d8) >> 0x10);
  local_106 = (int)*(undefined4 *)(iVar3 + 0x2d8);
  FUN_1120_49e3(local_106,local_104);
  local_102[0] = '\0';
  FUN_1038_528b(&stack0xfffe,0,*(undefined2 *)(iVar3 + 0x184),*(undefined2 *)(iVar3 + 0x186),0xff,
                local_102,unaff_SS);
  puVar5 = local_206;
  uVar8 = unaff_SS;
  FUN_1158_17cd(local_102,unaff_SS);
  FUN_1158_184c(0x5583,0x1158);
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
    (*(code *)*puVar1)(0x1158,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),0x5585,0x1158);
  }
  local_102[0] = '\0';
  FUN_1038_528b(&stack0xfffe,10,*(undefined2 *)(iVar3 + 0x18c),*(undefined2 *)(iVar3 + 0x18e),0xff,
                local_102,unaff_SS);
  puVar5 = local_206;
  uVar8 = unaff_SS;
  FUN_1158_17cd(local_102,unaff_SS);
  FUN_1158_184c(0x5586,0x1158);
  puVar7 = local_306;
  uVar6 = unaff_SS;
  FUN_1138_1d53((int)*(undefined4 *)(iVar3 + 400),(int)((ulong)*(undefined4 *)(iVar3 + 400) >> 0x10)
               );
  FUN_1158_184c(puVar7,uVar6);
  FUN_1158_17e7(0xff,local_102,unaff_SS,puVar5,uVar8);
  FUN_1038_528b(&stack0xfffe,0x25,*(undefined2 *)(iVar3 + 0x19c),*(undefined2 *)(iVar3 + 0x19e),0xff
                ,local_102,unaff_SS);
  FUN_1038_528b(&stack0xfffe,0x46,*(undefined2 *)(iVar3 + 0x194),*(undefined2 *)(iVar3 + 0x196),0xff
                ,local_102,unaff_SS);
  puVar5 = local_206;
  uVar8 = unaff_SS;
  FUN_1158_17cd(local_102,unaff_SS);
  FUN_1158_184c(0x5586,0x1158);
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
    (*(code *)*puVar1)(0x1158,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),0x5585,0x1158);
  }
  local_102[0] = '\0';
  FUN_1038_528b(&stack0xfffe,s_TRAITEMENT_DE_DEVELOPPEMENT_1160_01c3._25_2_,
                *(undefined2 *)(iVar3 + 0x3bc),*(undefined2 *)(iVar3 + 0x3be),0xff,local_102,
                unaff_SS);
  FUN_1038_528b(&stack0xfffe,DAT_1160_01e0,*(undefined2 *)(iVar3 + 0x508),
                *(undefined2 *)(iVar3 + 0x50a),0xff,local_102,unaff_SS);
  if (local_102[0] != '\0') {
    puVar2 = (undefined4 *)*(undefined4 *)(local_106 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)(0x1038,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),local_102);
  }
  local_102[0] = '\0';
  FUN_1038_528b(&stack0xfffe,s_TRAITEMENT_DE_DEVELOPPEMENT_1160_01c3._25_2_,
                *(undefined2 *)(iVar3 + 0x3c0),*(undefined2 *)(iVar3 + 0x3c2),0xff,local_102,
                unaff_SS);
  FUN_1038_528b(&stack0xfffe,DAT_1160_01e0,*(undefined2 *)(iVar3 + 0x50c),
                *(undefined2 *)(iVar3 + 0x50e),0xff,local_102,unaff_SS);
  if (local_102[0] != '\0') {
    puVar2 = (undefined4 *)*(undefined4 *)(local_106 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)(0x1038,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),local_102);
  }
  local_102[0] = '\0';
  FUN_1038_528b(&stack0xfffe,s_TRAITEMENT_DE_DEVELOPPEMENT_1160_01c3._25_2_,
                *(undefined2 *)(iVar3 + 0x3c4),*(undefined2 *)(iVar3 + 0x3c6),0xff,local_102,
                unaff_SS);
  FUN_1038_528b(&stack0xfffe,DAT_1160_01e0,*(undefined2 *)(iVar3 + 0x510),
                *(undefined2 *)(iVar3 + 0x512),0xff,local_102,unaff_SS);
  if (local_102[0] != '\0') {
    puVar2 = (undefined4 *)*(undefined4 *)(local_106 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)(0x1038,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),local_102);
  }
  local_102[0] = '\0';
  FUN_1038_528b(&stack0xfffe,s_TRAITEMENT_DE_DEVELOPPEMENT_1160_01c3._25_2_,
                *(undefined2 *)(iVar3 + 0x3c8),*(undefined2 *)(iVar3 + 0x3ca),0xff,local_102,
                unaff_SS);
  FUN_1038_528b(&stack0xfffe,DAT_1160_01e0,*(undefined2 *)(iVar3 + 0x514),
                *(undefined2 *)(iVar3 + 0x516),0xff,local_102,unaff_SS);
  if (local_102[0] != '\0') {
    puVar2 = (undefined4 *)*(undefined4 *)(local_106 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)(0x1038,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),local_102);
  }
  if (param_2 == 1) {
    puVar2 = (undefined4 *)*(undefined4 *)(local_106 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)(0x1038,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),0x5585,0x1038);
  }
  local_102[0] = '\0';
  FUN_1038_528b(&stack0xfffe,s_TRAITEMENT_DE_DEVELOPPEMENT_1160_01c3._25_2_,
                *(undefined2 *)(iVar3 + 0x3cc),*(undefined2 *)(iVar3 + 0x3ce),0xff,local_102,
                unaff_SS);
  puVar5 = local_206;
  uVar6 = unaff_SS;
  FUN_1158_17cd(local_102,unaff_SS);
  FUN_1158_184c(0x5583,0x1158);
  FUN_1158_17e7(0xff,local_102,unaff_SS,puVar5,uVar6);
  FUN_1038_528b(&stack0xfffe,DAT_1160_01e2,*(undefined2 *)(iVar3 + 0x3d8),
                *(undefined2 *)(iVar3 + 0x3da),0xff,local_102,unaff_SS);
  if (local_102[0] != '\0') {
    puVar2 = (undefined4 *)*(undefined4 *)(local_106 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)(0x1038,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),local_102);
  }
  if (param_2 == 1) {
    puVar2 = (undefined4 *)*(undefined4 *)(local_106 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)(0x1038,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),0x5585,0x1038);
  }
  local_102[0] = '\0';
  FUN_1038_528b(&stack0xfffe,s_TRAITEMENT_DE_DEVELOPPEMENT_1160_01c3._25_2_,
                *(undefined2 *)(iVar3 + 0x578),*(undefined2 *)(iVar3 + 0x57a),0xff,local_102,
                unaff_SS);
  FUN_1038_528b(&stack0xfffe,DAT_1160_01e0,*(undefined2 *)(iVar3 + 0x588),
                *(undefined2 *)(iVar3 + 0x58a),0xff,local_102,unaff_SS);
  if (local_102[0] != '\0') {
    puVar2 = (undefined4 *)*(undefined4 *)(local_106 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)(0x1038,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),local_102);
  }
  local_102[0] = '\0';
  FUN_1038_528b(&stack0xfffe,s_TRAITEMENT_DE_DEVELOPPEMENT_1160_01c3._25_2_,
                *(undefined2 *)(iVar3 + 0x3e0),*(undefined2 *)(iVar3 + 0x3e2),0xff,local_102,
                unaff_SS);
  FUN_1038_528b(&stack0xfffe,DAT_1160_01e0,*(undefined2 *)(iVar3 + 0x518),
                *(undefined2 *)(iVar3 + 0x51a),0xff,local_102,unaff_SS);
  if (local_102[0] != '\0') {
    puVar2 = (undefined4 *)*(undefined4 *)(local_106 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)(0x1038,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),local_102);
  }
  local_102[0] = '\0';
  FUN_1038_528b(&stack0xfffe,s_TRAITEMENT_DE_DEVELOPPEMENT_1160_01c3._25_2_,
                *(undefined2 *)(iVar3 + 0x3e4),*(undefined2 *)(iVar3 + 0x3e6),0xff,local_102,
                unaff_SS);
  FUN_1038_528b(&stack0xfffe,DAT_1160_01e0,*(undefined2 *)(iVar3 + 0x51c),
                *(undefined2 *)(iVar3 + 0x51e),0xff,local_102,unaff_SS);
  if (local_102[0] != '\0') {
    puVar2 = (undefined4 *)*(undefined4 *)(local_106 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)(0x1038,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),local_102);
  }
  local_102[0] = '\0';
  FUN_1038_528b(&stack0xfffe,s_TRAITEMENT_DE_DEVELOPPEMENT_1160_01c3._25_2_,
                *(undefined2 *)(iVar3 + 1000),*(undefined2 *)(iVar3 + 0x3ea),0xff,local_102,unaff_SS
               );
  FUN_1038_528b(&stack0xfffe,DAT_1160_01e0,*(undefined2 *)(iVar3 + 0x520),
                *(undefined2 *)(iVar3 + 0x522),0xff,local_102,unaff_SS);
  if (local_102[0] != '\0') {
    puVar2 = (undefined4 *)*(undefined4 *)(local_106 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)(0x1038,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),local_102);
  }
  local_102[0] = '\0';
  FUN_1038_528b(&stack0xfffe,s_TRAITEMENT_DE_DEVELOPPEMENT_1160_01c3._25_2_,
                *(undefined2 *)(iVar3 + 0x3ec),*(undefined2 *)(iVar3 + 0x3ee),0xff,local_102,
                unaff_SS);
  FUN_1038_528b(&stack0xfffe,DAT_1160_01e0,*(undefined2 *)(iVar3 + 0x524),
                *(undefined2 *)(iVar3 + 0x526),0xff,local_102,unaff_SS);
  if (local_102[0] != '\0') {
    puVar2 = (undefined4 *)*(undefined4 *)(local_106 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)(0x1038,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),local_102);
  }
  local_102[0] = '\0';
  FUN_1038_528b(&stack0xfffe,s_TRAITEMENT_DE_DEVELOPPEMENT_1160_01c3._25_2_,
                *(undefined2 *)(iVar3 + 0x3f0),*(undefined2 *)(iVar3 + 0x3f2),0xff,local_102,
                unaff_SS);
  FUN_1038_528b(&stack0xfffe,DAT_1160_01e0,*(undefined2 *)(iVar3 + 0x528),
                *(undefined2 *)(iVar3 + 0x52a),0xff,local_102,unaff_SS);
  if (local_102[0] != '\0') {
    puVar2 = (undefined4 *)*(undefined4 *)(local_106 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)(0x1038,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),local_102);
  }
  local_102[0] = '\0';
  FUN_1038_528b(&stack0xfffe,s_TRAITEMENT_DE_DEVELOPPEMENT_1160_01c3._25_2_,
                *(undefined2 *)(iVar3 + 0x3f4),*(undefined2 *)(iVar3 + 0x3f6),0xff,local_102,
                unaff_SS);
  FUN_1038_528b(&stack0xfffe,DAT_1160_01e0,*(undefined2 *)(iVar3 + 0x52c),
                *(undefined2 *)(iVar3 + 0x52e),0xff,local_102,unaff_SS);
  if (local_102[0] != '\0') {
    puVar2 = (undefined4 *)*(undefined4 *)(local_106 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)(0x1038,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),local_102);
  }
  local_102[0] = '\0';
  FUN_1038_528b(&stack0xfffe,s_TRAITEMENT_DE_DEVELOPPEMENT_1160_01c3._25_2_,
                *(undefined2 *)(iVar3 + 0x57c),*(undefined2 *)(iVar3 + 0x57e),0xff,local_102,
                unaff_SS);
  FUN_1038_528b(&stack0xfffe,DAT_1160_01e0,*(undefined2 *)(iVar3 + 0x530),
                *(undefined2 *)(iVar3 + 0x532),0xff,local_102,unaff_SS);
  if (local_102[0] != '\0') {
    puVar2 = (undefined4 *)*(undefined4 *)(local_106 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)(0x1038,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),local_102);
  }
  local_102[0] = '\0';
  FUN_1038_528b(&stack0xfffe,s_TRAITEMENT_DE_DEVELOPPEMENT_1160_01c3._25_2_,
                *(undefined2 *)(iVar3 + 0x580),*(undefined2 *)(iVar3 + 0x582),0xff,local_102,
                unaff_SS);
  FUN_1038_528b(&stack0xfffe,DAT_1160_01e0,*(undefined2 *)(iVar3 + 0x534),
                *(undefined2 *)(iVar3 + 0x536),0xff,local_102,unaff_SS);
  if (local_102[0] != '\0') {
    puVar2 = (undefined4 *)*(undefined4 *)(local_106 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)(0x1038,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),local_102);
  }
  if (param_2 == 1) {
    puVar2 = (undefined4 *)*(undefined4 *)(local_106 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)(0x1038,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),0x5585,0x1038);
  }
  local_102[0] = '\0';
  FUN_1038_528b(&stack0xfffe,s_TRAITEMENT_DE_DEVELOPPEMENT_1160_01c3._25_2_,
                *(undefined2 *)(iVar3 + 0x584),*(undefined2 *)(iVar3 + 0x586),0xff,local_102,
                unaff_SS);
  puVar5 = local_206;
  uVar6 = unaff_SS;
  FUN_1158_17cd(local_102,unaff_SS);
  FUN_1158_184c(0x5583,0x1158);
  FUN_1158_17e7(0xff,local_102,unaff_SS,puVar5,uVar6);
  FUN_1038_528b(&stack0xfffe,DAT_1160_01e2,*(undefined2 *)(iVar3 + 0x400),
                *(undefined2 *)(iVar3 + 0x402),0xff,local_102,unaff_SS);
  if (local_102[0] != '\0') {
    puVar2 = (undefined4 *)*(undefined4 *)(local_106 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)(0x1038,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),local_102);
  }
  if (param_2 == 1) {
    puVar2 = (undefined4 *)*(undefined4 *)(local_106 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)(0x1038,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),0x5585,0x1038);
  }
  local_102[0] = '\0';
  FUN_1038_528b(&stack0xfffe,s_TRAITEMENT_DE_DEVELOPPEMENT_1160_01c3._25_2_,
                *(undefined2 *)(iVar3 + 0x408),*(undefined2 *)(iVar3 + 0x40a),0xff,local_102,
                unaff_SS);
  puVar5 = local_206;
  uVar6 = unaff_SS;
  FUN_1158_17cd(local_102,unaff_SS);
  FUN_1158_184c(0x5583,0x1158);
  FUN_1158_17e7(0xff,local_102,unaff_SS,puVar5,uVar6);
  FUN_1038_528b(&stack0xfffe,DAT_1160_01e2,*(undefined2 *)(iVar3 + 0x420),
                *(undefined2 *)(iVar3 + 0x422),0xff,local_102,unaff_SS);
  if (local_102[0] != '\0') {
    puVar2 = (undefined4 *)*(undefined4 *)(local_106 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)(0x1038,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),local_102);
  }
  if (param_2 == 1) {
    puVar2 = (undefined4 *)*(undefined4 *)(local_106 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)(0x1038,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),0x5585,0x1038);
  }
  local_102[0] = '\0';
  FUN_1038_528b(&stack0xfffe,s_TRAITEMENT_DE_DEVELOPPEMENT_1160_01c3._25_2_,
                *(undefined2 *)(iVar3 + 0x49c),*(undefined2 *)(iVar3 + 0x49e),0xff,local_102,
                unaff_SS);
  FUN_1038_528b(&stack0xfffe,DAT_1160_01e0,*(undefined2 *)(iVar3 + 0x53c),
                *(undefined2 *)(iVar3 + 0x53e),0xff,local_102,unaff_SS);
  if (local_102[0] != '\0') {
    puVar2 = (undefined4 *)*(undefined4 *)(local_106 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)(0x1038,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),local_102);
  }
  local_102[0] = '\0';
  FUN_1038_528b(&stack0xfffe,s_TRAITEMENT_DE_DEVELOPPEMENT_1160_01c3._25_2_,
                *(undefined2 *)(iVar3 + 0x4a0),*(undefined2 *)(iVar3 + 0x4a2),0xff,local_102,
                unaff_SS);
  if (local_102[0] != '\0') {
    puVar2 = (undefined4 *)*(undefined4 *)(local_106 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)(0x1038,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),local_102);
  }
  local_102[0] = '\0';
  FUN_1038_528b(&stack0xfffe,s_TRAITEMENT_DE_DEVELOPPEMENT_1160_01c3._25_2_,
                *(undefined2 *)(iVar3 + 0x4a4),*(undefined2 *)(iVar3 + 0x4a6),0xff,local_102,
                unaff_SS);
  FUN_1038_528b(&stack0xfffe,DAT_1160_01e0,*(undefined2 *)(iVar3 + 0x544),
                *(undefined2 *)(iVar3 + 0x546),0xff,local_102,unaff_SS);
  if (local_102[0] != '\0') {
    puVar2 = (undefined4 *)*(undefined4 *)(local_106 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)(0x1038,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),local_102);
  }
  local_102[0] = '\0';
  FUN_1038_528b(&stack0xfffe,s_TRAITEMENT_DE_DEVELOPPEMENT_1160_01c3._25_2_,
                *(undefined2 *)(iVar3 + 0x4a8),*(undefined2 *)(iVar3 + 0x4aa),0xff,local_102,
                unaff_SS);
  FUN_1038_528b(&stack0xfffe,DAT_1160_01e0,*(undefined2 *)(iVar3 + 0x548),
                *(undefined2 *)(iVar3 + 0x54a),0xff,local_102,unaff_SS);
  if (local_102[0] != '\0') {
    puVar2 = (undefined4 *)*(undefined4 *)(local_106 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)(0x1038,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),local_102);
  }
  local_102[0] = '\0';
  FUN_1038_528b(&stack0xfffe,s_TRAITEMENT_DE_DEVELOPPEMENT_1160_01c3._25_2_,
                *(undefined2 *)(iVar3 + 0x4ac),*(undefined2 *)(iVar3 + 0x4ae),0xff,local_102,
                unaff_SS);
  FUN_1038_528b(&stack0xfffe,DAT_1160_01e0,*(undefined2 *)(iVar3 + 0x54c),
                *(undefined2 *)(iVar3 + 0x54e),0xff,local_102,unaff_SS);
  if (local_102[0] != '\0') {
    puVar2 = (undefined4 *)*(undefined4 *)(local_106 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)(0x1038,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),local_102);
  }
  local_102[0] = '\0';
  FUN_1038_528b(&stack0xfffe,s_TRAITEMENT_DE_DEVELOPPEMENT_1160_01c3._25_2_,
                *(undefined2 *)(iVar3 + 0x4b0),*(undefined2 *)(iVar3 + 0x4b2),0xff,local_102,
                unaff_SS);
  FUN_1038_528b(&stack0xfffe,DAT_1160_01e0,*(undefined2 *)(iVar3 + 0x550),
                *(undefined2 *)(iVar3 + 0x552),0xff,local_102,unaff_SS);
  if (local_102[0] != '\0') {
    puVar2 = (undefined4 *)*(undefined4 *)(local_106 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)(0x1038,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),local_102);
  }
  local_102[0] = '\0';
  FUN_1038_528b(&stack0xfffe,s_TRAITEMENT_DE_DEVELOPPEMENT_1160_01c3._25_2_,
                *(undefined2 *)(iVar3 + 0x4b4),*(undefined2 *)(iVar3 + 0x4b6),0xff,local_102,
                unaff_SS);
  FUN_1038_528b(&stack0xfffe,DAT_1160_01e0,*(undefined2 *)(iVar3 + 0x554),
                *(undefined2 *)(iVar3 + 0x556),0xff,local_102,unaff_SS);
  if (local_102[0] != '\0') {
    puVar2 = (undefined4 *)*(undefined4 *)(local_106 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)(0x1038,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),local_102);
  }
  local_102[0] = '\0';
  FUN_1038_528b(&stack0xfffe,s_TRAITEMENT_DE_DEVELOPPEMENT_1160_01c3._25_2_,
                *(undefined2 *)(iVar3 + 0x4b8),*(undefined2 *)(iVar3 + 0x4ba),0xff,local_102,
                unaff_SS);
  FUN_1038_528b(&stack0xfffe,DAT_1160_01e0,*(undefined2 *)(iVar3 + 0x558),
                *(undefined2 *)(iVar3 + 0x55a),0xff,local_102,unaff_SS);
  if (local_102[0] != '\0') {
    puVar2 = (undefined4 *)*(undefined4 *)(local_106 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)(0x1038,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),local_102);
  }
  if (param_2 == 1) {
    puVar2 = (undefined4 *)*(undefined4 *)(local_106 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)(0x1038,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),0x5585,0x1038);
  }
  local_102[0] = '\0';
  FUN_1038_528b(&stack0xfffe,s_TRAITEMENT_DE_DEVELOPPEMENT_1160_01c3._25_2_,
                *(undefined2 *)(iVar3 + 0x40c),*(undefined2 *)(iVar3 + 0x40e),0xff,local_102,
                unaff_SS);
  puVar5 = local_206;
  uVar6 = unaff_SS;
  FUN_1158_17cd(local_102,unaff_SS);
  FUN_1158_184c(0x5583,0x1158);
  FUN_1158_17e7(0xff,local_102,unaff_SS,puVar5,uVar6);
  FUN_1038_528b(&stack0xfffe,DAT_1160_01e2,*(undefined2 *)(iVar3 + 0x428),
                *(undefined2 *)(iVar3 + 0x42a),0xff,local_102,unaff_SS);
  if (local_102[0] != '\0') {
    puVar2 = (undefined4 *)*(undefined4 *)(local_106 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)(0x1038,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),local_102);
  }
  if (param_2 == 1) {
    puVar2 = (undefined4 *)*(undefined4 *)(local_106 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)(0x1038,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),0x5585,0x1038);
  }
  local_102[0] = '\0';
  FUN_1038_528b(&stack0xfffe,s_TRAITEMENT_DE_DEVELOPPEMENT_1160_01c3._25_2_,
                *(undefined2 *)(iVar3 + 0x410),*(undefined2 *)(iVar3 + 0x412),0xff,local_102,
                unaff_SS);
  FUN_1038_528b(&stack0xfffe,DAT_1160_01e0,*(undefined2 *)(iVar3 + 0x55c),
                *(undefined2 *)(iVar3 + 0x55e),0xff,local_102,unaff_SS);
  if (local_102[0] != '\0') {
    puVar2 = (undefined4 *)*(undefined4 *)(local_106 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)(0x1038,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),local_102);
  }
  if (param_2 == 1) {
    puVar2 = (undefined4 *)*(undefined4 *)(local_106 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)(0x1038,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),0x5585,0x1038);
  }
  local_102[0] = '\0';
  FUN_1038_528b(&stack0xfffe,s_TRAITEMENT_DE_DEVELOPPEMENT_1160_01c3._25_2_,
                *(undefined2 *)(iVar3 + 0x414),*(undefined2 *)(iVar3 + 0x416),0xff,local_102,
                unaff_SS);
  puVar5 = local_206;
  uVar6 = unaff_SS;
  FUN_1158_17cd(local_102,unaff_SS);
  FUN_1158_184c(0x5583,0x1158);
  FUN_1158_17e7(0xff,local_102,unaff_SS,puVar5,uVar6);
  FUN_1038_528b(&stack0xfffe,DAT_1160_01e2,*(undefined2 *)(iVar3 + 0x42c),
                *(undefined2 *)(iVar3 + 0x42e),0xff,local_102,unaff_SS);
  if (local_102[0] != '\0') {
    puVar2 = (undefined4 *)*(undefined4 *)(local_106 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)(0x1038,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),local_102);
  }
  if (param_2 == 1) {
    puVar2 = (undefined4 *)*(undefined4 *)(local_106 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)(0x1038,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),0x5585,0x1038);
  }
  local_102[0] = '\0';
  FUN_1038_528b(&stack0xfffe,s_TRAITEMENT_DE_DEVELOPPEMENT_1160_01c3._25_2_,
                *(undefined2 *)(iVar3 + 0x4c0),*(undefined2 *)(iVar3 + 0x4c2),0xff,local_102,
                unaff_SS);
  FUN_1038_528b(&stack0xfffe,DAT_1160_01e0,*(undefined2 *)(iVar3 + 0x560),
                *(undefined2 *)(iVar3 + 0x562),0xff,local_102,unaff_SS);
  if (local_102[0] != '\0') {
    puVar2 = (undefined4 *)*(undefined4 *)(local_106 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)(0x1038,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),local_102);
  }
  local_102[0] = '\0';
  FUN_1038_528b(&stack0xfffe,s_TRAITEMENT_DE_DEVELOPPEMENT_1160_01c3._25_2_,
                *(undefined2 *)(iVar3 + 0x4c4),*(undefined2 *)(iVar3 + 0x4c6),0xff,local_102,
                unaff_SS);
  FUN_1038_528b(&stack0xfffe,DAT_1160_01e0,*(undefined2 *)(iVar3 + 0x564),
                *(undefined2 *)(iVar3 + 0x566),0xff,local_102,unaff_SS);
  if (local_102[0] != '\0') {
    puVar2 = (undefined4 *)*(undefined4 *)(local_106 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)(0x1038,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),local_102);
  }
  if (param_2 == 1) {
    puVar2 = (undefined4 *)*(undefined4 *)(local_106 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)(0x1038,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),0x5585,0x1038);
  }
  local_102[0] = '\0';
  FUN_1038_528b(&stack0xfffe,s_TRAITEMENT_DE_DEVELOPPEMENT_1160_01c3._25_2_,
                *(undefined2 *)(iVar3 + 0x418),*(undefined2 *)(iVar3 + 0x41a),0xff,local_102,
                unaff_SS);
  puVar5 = local_206;
  uVar6 = unaff_SS;
  FUN_1158_17cd(local_102,unaff_SS);
  FUN_1158_184c(0x5583,0x1158);
  FUN_1158_17e7(0xff,local_102,unaff_SS,puVar5,uVar6);
  FUN_1038_528b(&stack0xfffe,DAT_1160_01e2,*(undefined2 *)(iVar3 + 0x430),
                *(undefined2 *)(iVar3 + 0x432),0xff,local_102,unaff_SS);
  if (local_102[0] != '\0') {
    puVar2 = (undefined4 *)*(undefined4 *)(local_106 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)(0x1038,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),local_102);
  }
  if (param_2 == 1) {
    puVar2 = (undefined4 *)*(undefined4 *)(local_106 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)(0x1038,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),0x5585,0x1038);
  }
  local_102[0] = '\0';
  FUN_1038_528b(&stack0xfffe,s_TRAITEMENT_DE_DEVELOPPEMENT_1160_01c3._25_2_,
                *(undefined2 *)(iVar3 + 0x4cc),*(undefined2 *)(iVar3 + 0x4ce),0xff,local_102,
                unaff_SS);
  FUN_1038_528b(&stack0xfffe,DAT_1160_01e0,*(undefined2 *)(iVar3 + 0x568),
                *(undefined2 *)(iVar3 + 0x56a),0xff,local_102,unaff_SS);
  if (local_102[0] != '\0') {
    puVar2 = (undefined4 *)*(undefined4 *)(local_106 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)(0x1038,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),local_102);
  }
  local_102[0] = '\0';
  FUN_1038_528b(&stack0xfffe,s_TRAITEMENT_DE_DEVELOPPEMENT_1160_01c3._25_2_,
                *(undefined2 *)(iVar3 + 0x4d0),*(undefined2 *)(iVar3 + 0x4d2),0xff,local_102,
                unaff_SS);
  FUN_1038_528b(&stack0xfffe,DAT_1160_01e0,*(undefined2 *)(iVar3 + 0x56c),
                *(undefined2 *)(iVar3 + 0x56e),0xff,local_102,unaff_SS);
  if (local_102[0] != '\0') {
    puVar2 = (undefined4 *)*(undefined4 *)(local_106 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)(0x1038,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),local_102);
  }
  local_102[0] = '\0';
  FUN_1038_528b(&stack0xfffe,s_TRAITEMENT_DE_DEVELOPPEMENT_1160_01c3._25_2_,
                *(undefined2 *)(iVar3 + 0x4d4),*(undefined2 *)(iVar3 + 0x4d6),0xff,local_102,
                unaff_SS);
  FUN_1038_528b(&stack0xfffe,DAT_1160_01e0,*(undefined2 *)(iVar3 + 0x570),
                *(undefined2 *)(iVar3 + 0x572),0xff,local_102,unaff_SS);
  if (local_102[0] != '\0') {
    puVar2 = (undefined4 *)*(undefined4 *)(local_106 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)(0x1038,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),local_102);
  }
  local_102[0] = '\0';
  FUN_1038_528b(&stack0xfffe,s_TRAITEMENT_DE_DEVELOPPEMENT_1160_01c3._25_2_,
                *(undefined2 *)(iVar3 + 0x4d8),*(undefined2 *)(iVar3 + 0x4da),0xff,local_102,
                unaff_SS);
  FUN_1038_528b(&stack0xfffe,DAT_1160_01e0,*(undefined2 *)(iVar3 + 0x574),
                *(undefined2 *)(iVar3 + 0x576),0xff,local_102,unaff_SS);
  if (local_102[0] != '\0') {
    puVar2 = (undefined4 *)*(undefined4 *)(local_106 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)(0x1038,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),local_102);
  }
  if (param_2 == 1) {
    puVar2 = (undefined4 *)*(undefined4 *)(local_106 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)(0x1038,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),0x5585,0x1038);
  }
  local_102[0] = '\0';
  FUN_1038_528b(&stack0xfffe,s_TRAITEMENT_DE_DEVELOPPEMENT_1160_01c3._25_2_,
                *(undefined2 *)(iVar3 + 0x440),*(undefined2 *)(iVar3 + 0x442),0xff,local_102,
                unaff_SS);
  puVar5 = local_206;
  uVar6 = unaff_SS;
  FUN_1158_17cd(local_102,unaff_SS);
  FUN_1158_184c(0x5583,0x1158);
  FUN_1158_17e7(0xff,local_102,unaff_SS,puVar5,uVar6);
  FUN_1038_528b(&stack0xfffe,DAT_1160_01e2,*(undefined2 *)(iVar3 + 0x444),
                *(undefined2 *)(iVar3 + 0x446),0xff,local_102,unaff_SS);
  if (local_102[0] != '\0') {
    puVar2 = (undefined4 *)*(undefined4 *)(local_106 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)(0x1038,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),local_102);
  }
  return;
}



/* ---- TFormSERG_SIG_Situation1Click @ 1038:676e  (46 octets) ---- */

void __stdcall16far TFormSERG_SIG_Situation1Click(undefined4 param_1)

{
  int iVar1;
  undefined2 uVar2;
  
  FUN_1158_0444();
  DAT_1160_0144 = 0x15;
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  DAT_1160_0146 = *(undefined2 *)(iVar1 + 0x594);
  DAT_1160_0148 = *(undefined2 *)(iVar1 + 0x592);
  FUN_1140_5556(iVar1,uVar2);
  return;
}



/* ---- TFormSERG_SIG_CompteDeResultats1Click @ 1038:679c  (46 octets) ---- */

void __stdcall16far TFormSERG_SIG_CompteDeResultats1Click(undefined4 param_1)

{
  int iVar1;
  undefined2 uVar2;
  
  FUN_1158_0444();
  DAT_1160_0144 = 0x16;
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  DAT_1160_0146 = *(undefined2 *)(iVar1 + 0x594);
  DAT_1160_0148 = *(undefined2 *)(iVar1 + 0x592);
  FUN_1140_5556(iVar1,uVar2);
  return;
}



/* ---- TFormSERG_SIG_Bilan1Click @ 1038:67ca  (46 octets) ---- */

void __stdcall16far TFormSERG_SIG_Bilan1Click(undefined4 param_1)

{
  int iVar1;
  undefined2 uVar2;
  
  FUN_1158_0444();
  DAT_1160_0144 = 0x17;
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  DAT_1160_0146 = *(undefined2 *)(iVar1 + 0x594);
  DAT_1160_0148 = *(undefined2 *)(iVar1 + 0x592);
  FUN_1140_5556(iVar1,uVar2);
  return;
}



/* ---- TFormSERG_SIG_TableauDeFinancement1Click @ 1038:67f8  (46 octets) ---- */

void __stdcall16far TFormSERG_SIG_TableauDeFinancement1Click(undefined4 param_1)

{
  int iVar1;
  undefined2 uVar2;
  
  FUN_1158_0444();
  DAT_1160_0144 = 0x18;
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  DAT_1160_0146 = *(undefined2 *)(iVar1 + 0x594);
  DAT_1160_0148 = *(undefined2 *)(iVar1 + 0x592);
  FUN_1140_5556(iVar1,uVar2);
  return;
}



/* ---- TFormSERG_SIG_TableauDeTresorerie1Click @ 1038:6826  (46 octets) ---- */

void __stdcall16far TFormSERG_SIG_TableauDeTresorerie1Click(undefined4 param_1)

{
  int iVar1;
  undefined2 uVar2;
  
  FUN_1158_0444();
  DAT_1160_0144 = 0x19;
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  DAT_1160_0146 = *(undefined2 *)(iVar1 + 0x594);
  DAT_1160_0148 = *(undefined2 *)(iVar1 + 0x592);
  FUN_1140_5556(iVar1,uVar2);
  return;
}



/* ---- TFormSERG_SIG_SIG1Click @ 1038:6854  (46 octets) ---- */

void __stdcall16far TFormSERG_SIG_SIG1Click(undefined4 param_1)

{
  int iVar1;
  undefined2 uVar2;
  
  FUN_1158_0444();
  DAT_1160_0144 = 0x1a;
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  DAT_1160_0146 = *(undefined2 *)(iVar1 + 0x594);
  DAT_1160_0148 = *(undefined2 *)(iVar1 + 0x592);
  FUN_1140_5556(iVar1,uVar2);
  return;
}



/* ---- TFormSERG_SIG_RappelDesDecisions1Click @ 1038:6882  (36 octets) ---- */

void __stdcall16far TFormSERG_SIG_RappelDesDecisions1Click(undefined4 param_1)

{
  undefined2 uVar1;
  
  FUN_1158_0444();
  uVar1 = (undefined2)((ulong)param_1 >> 0x10);
  FUN_1078_0ca1(*(undefined2 *)((int)param_1 + 0x594),*(undefined2 *)((int)param_1 + 0x592),
                DAT_1160_0150);
  return;
}




/* Simstrat (FR).EXE - segment Code12 - 50 fonctions
   Decompile par Ghidra 11.2.1 (x86 16 bits, chargeur NE). */

/* ---- FUN_1058_1cb7 @ 1058:1cb7  (43 octets) ---- */

void __stdcall16far FUN_1058_1cb7(undefined4 param_1)

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



/* ---- FUN_1058_1ce8 @ 1058:1ce8  (188 octets) ---- */

void __stdcall16far FUN_1058_1ce8(undefined2 param_1,int param_2)

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
  
  _local_6 = CONCAT22(unaff_CS,0x1cf3);
  FUN_1158_0444();
  uStack_c = (undefined2)((ulong)DAT_1160_2c2a >> 0x10);
  uStack_e = (undefined2)DAT_1160_2c2a;
  uStack_10 = 0x1158;
  uStack_12 = 0x1d01;
  FUN_1140_7303();
  if (param_2 < 1) {
    return;
  }
  uStack_c = DAT_1160_2c2a._2_2_;
  uStack_e = (undefined2)DAT_1160_2c2a;
  uStack_10 = CONCAT11(extraout_AH,1);
  uStack_12 = 0x1058;
  uStack_14 = 0x22;
  uStack_16 = 0x1140;
  uStack_18 = 0x1d22;
  local_a = FUN_1140_2553();
  uVar2 = (undefined2)((ulong)local_a >> 0x10);
  local_6 = (int)local_a;
  uStack_16 = 0x1140;
  uStack_18 = 0x1ce2;
  uStack_1c = DAT_1160_1858;
  DAT_1160_1858 = &uStack_1c;
  *(undefined2 *)(local_6 + 0x72c) = param_1;
  *(int *)(local_6 + 0x72a) = param_2;
  puStack_1a = &stack0xfffe;
  FUN_1058_29e7(local_a);
  FUN_1058_342b(local_a,*(undefined2 *)((int)local_a + 0x72a));
  FUN_1138_1ed5(local_a,0xfff0,0xffff);
  FUN_1140_3a14(local_a,2);
  uVar1 = (int)local_a;
  FUN_1140_5d45(local_a);
  DAT_1160_1858 = (undefined2 *)uVar1;
  puStack_1a = (undefined *)0x1140;
  uStack_1c = 0x1da0;
  FUN_1140_5f1d(local_6,uVar2);
  return;
}



/* ---- FUN_1058_1daa @ 1058:1daa  (345 octets) ---- */

void __stdcall16far FUN_1058_1daa(char param_1,undefined2 param_2,int param_3)

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
  
  _local_6 = CONCAT22(unaff_CS,0x1db5);
  FUN_1158_0444();
  uStack_e = (undefined2)((ulong)DAT_1160_2c2a >> 0x10);
  uStack_10 = (undefined2)DAT_1160_2c2a;
  uStack_12 = 0x1158;
  uStack_14 = 0x1dc3;
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
  uStack_14 = 0x1058;
  uStack_16 = 0x22;
  uStack_18 = 0x1140;
  uStack_1a = 0x1e0c;
  local_c = FUN_1140_2553();
  uVar3 = (undefined2)((ulong)local_c >> 0x10);
  local_6 = (int)local_c;
  uStack_18 = 0x1140;
  uStack_1a = 0x1da4;
  uStack_1e = DAT_1160_1858;
  DAT_1160_1858 = &uStack_1e;
  puStack_1c = &stack0xfffe;
  FUN_1138_6322(local_c,0);
  *(undefined2 *)((int)local_c + 0x72c) = param_2;
  *(int *)((int)local_c + 0x72a) = param_3;
  FUN_1058_29e7(local_c);
  FUN_1058_342b(local_c,*(undefined2 *)((int)local_c + 0x72a));
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
    uVar4 = 0x1058;
    FUN_1058_5a2d(local_6,uVar3);
    DAT_1160_1858 = (undefined2 *)uVar2;
  }
  puStack_1c = (undefined *)0x1eff;
  uStack_1e = uVar3;
  uStack_1a = uVar4;
  FUN_1140_5f1d(local_6);
  return;
}



/* ---- FUN_1058_1f03 @ 1058:1f03  (34 octets) ---- */

void __stdcall16far FUN_1058_1f03(undefined4 param_1)

{
  undefined2 uVar1;
  
  FUN_1158_0444();
  uVar1 = (undefined2)((ulong)param_1 >> 0x10);
  FUN_1058_1daa(0,*(undefined2 *)((int)param_1 + 0x72c),*(undefined2 *)((int)param_1 + 0x72a));
  return;
}



/* ---- TFormSERC_Compte_Imprimer1Click @ 1058:1f2b  (1 octets) ---- */

void TFormSERC_Compte_Imprimer1Click(undefined2 param_1,undefined4 param_2)

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
  undefined2 *puStack_6;
  
  puStack_6 = (undefined2 *)&DAT_1160_1f36;
  FUN_1158_0444();
  uVar3 = (undefined2)((ulong)param_2 >> 0x10);
  iVar2 = (int)param_2;
  uStack_c = (undefined2)((ulong)*(undefined4 *)(iVar2 + 0x288) >> 0x10);
  iStack_e = (int)*(undefined4 *)(iVar2 + 0x288);
  uStack_10 = 0x1158;
  pcStack_12 = (char *)&DAT_1160_1f48;
  cVar1 = FUN_1108_2f17();
  if (cVar1 == '\0') {
    return;
  }
  puStack_6 = (undefined2 *)*(undefined2 *)(iVar2 + 0xe4);
  uStack_c = *(undefined2 *)(iVar2 + 0x17e);
  iStack_e = *(undefined2 *)(iVar2 + 0x17c);
  uStack_14 = 0x1108;
  uStack_16 = 0x1f73;
  pcStack_12 = (char *)iVar2;
  uStack_10 = uVar3;
  FUN_1140_3fd0();
  uStack_10 = CONCAT11(extraout_AH,1);
  pcStack_12 = (char *)s_windows_1160_100f + 1;
  uStack_14 = 0x25b4;
  uStack_16 = 0x1140;
  uStack_18 = 0x1f89;
  iStack_e = iVar2;
  uStack_c = uVar3;
  uStack_a = FUN_1140_2553();
  uStack_16 = 0x1140;
  uStack_18 = 0x1f25;
  uStack_1c = DAT_1160_1858;
  DAT_1160_1858 = &uStack_1c;
  puStack_1a = &stack0xfffe;
  DAT_1160_2004 = uStack_a;
  FUN_1010_2f8d(uStack_a,1);
  *(undefined2 *)((int)uStack_a + 0x2b9) = 0x1f03;
  *(undefined2 *)((int)uStack_a + 699) = 0x1058;
  *(int *)((int)uStack_a + 0x2bd) = iVar2;
  *(undefined2 *)((int)uStack_a + 0x2bf) = uVar3;
  iVar2 = (int)uStack_a;
  FUN_1140_5d45(uStack_a);
  DAT_1160_1858 = (undefined2 *)iVar2;
  puStack_1a = (undefined *)0x1140;
  uStack_1c = 0x1ff2;
  FUN_1140_5f1d(DAT_1160_2004);
  return;
}



/* ---- FUN_1058_202c @ 1058:202c  (1136 octets) ---- */

void __stdcall16far FUN_1058_202c(undefined4 param_1,undefined4 param_2)

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
  
  local_6 = 0x2037;
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



/* ---- TFormSERC_Compte_DBEdit1Exit @ 1058:249c  (77 octets) ---- */

void __stdcall16far
TFormSERC_Compte_DBEdit1Exit(undefined4 param_1,undefined2 param_2,undefined2 param_3)

{
  undefined4 uVar1;
  char cVar2;
  char cVar3;
  
  FUN_1158_0444();
  cVar2 = FUN_1158_2255(0xba2,0x10d0,param_2,param_3);
  cVar3 = FUN_1158_2255(0x22,0x10d0,param_2,param_3);
  if (cVar3 != '\0' || cVar2 != '\0') {
    uVar1 = *(undefined4 *)((int)param_1 + 0x2b0);
    FUN_1138_1c77((int)uVar1,(int)((ulong)uVar1 >> 0x10),0);
  }
  return;
}



/* ---- TFormSERC_Compte_DBEdit1KeyUp @ 1058:24e9  (86 octets) ---- */

void __stdcall16far
TFormSERC_Compte_DBEdit1KeyUp
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
      uVar1 = *(undefined4 *)((int)param_1 + 0x2b0);
      FUN_1138_1c77((int)uVar1,(int)((ulong)uVar1 >> 0x10),0);
    }
  }
  return;
}



/* ---- TFormSERC_Compte_DBEdit1KeyDown @ 1058:254c  (1 octets) ---- */

void TFormSERC_Compte_DBEdit1KeyDown
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
  
  iStack_6 = 0x2557;
  FUN_1158_0444();
  if ((*param_4 == 0x70) && (cVar2 = FUN_1158_2255(0x5c1,0x1138,param_5,param_6), cVar2 != '\0')) {
    *param_4 = 0;
    FUN_1158_2273();
    FUN_1140_77b2();
  }
  if (*param_4 == 0x11) {
    uVar7 = (undefined2)((ulong)param_2 >> 0x10);
    iVar5 = (int)param_2;
    if (*(char *)((int)*(undefined4 *)(iVar5 + 0x2b0) + 0x29) == '\0') {
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
          uVar8 = 0x253f;
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
        FUN_1158_17cd(0x254a,uVar8);
        FUN_1158_184c(acStack_10a,unaff_SS);
        FUN_1158_184c(0x254a,0x1158);
        FUN_1138_1d8c((int)*(undefined4 *)(iVar5 + 0x2b0),
                      (int)((ulong)*(undefined4 *)(iVar5 + 0x2b0) >> 0x10),puVar11,uVar9);
        uStack_10e = FUN_1140_33d5(iVar5,uVar7);
        uVar8 = (undefined2)((ulong)*(undefined4 *)(iVar5 + 0x2b0) >> 0x10);
        iVar6 = (int)*(undefined4 *)(iVar5 + 0x2b0);
        FUN_1128_2099(uStack_10e,*(undefined2 *)(iVar6 + 0x34),*(undefined2 *)(iVar6 + 0x36));
        puVar11 = auStack_20e;
        uVar8 = unaff_SS;
        FUN_1138_1d53((int)*(undefined4 *)(iVar5 + 0x2b0),
                      (int)((ulong)*(undefined4 *)(iVar5 + 0x2b0) >> 0x10));
        uVar8 = FUN_1128_2003(uStack_10e,puVar11,uVar8);
        FUN_1138_17bf((int)*(undefined4 *)(iVar5 + 0x2b0),
                      (int)((ulong)*(undefined4 *)(iVar5 + 0x2b0) >> 0x10),uVar8);
        puVar11 = auStack_20e;
        FUN_1138_1d53((int)*(undefined4 *)(iVar5 + 0x2b0),
                      (int)((ulong)*(undefined4 *)(iVar5 + 0x2b0) >> 0x10));
        iVar6 = FUN_1128_204e(uStack_10e,puVar11,unaff_SS);
        iVar4 = (int)((long)iVar6 * 3);
        if ((long)iVar4 != (long)iVar6 * 3) {
          iVar4 = FUN_1158_043e(0x1128);
        }
        FUN_1138_17e1((int)*(undefined4 *)(iVar5 + 0x2b0),
                      (int)((ulong)*(undefined4 *)(iVar5 + 0x2b0) >> 0x10),iVar4 / 2);
        uVar10 = FUN_1138_1a06(iVar5,uVar7,iStack_6,(int)((ulong)uVar10 >> 0x10));
        iStack_6 = (int)uVar10;
        uStack_10e._2_2_ = (undefined2)((ulong)*(undefined4 *)(iVar5 + 0x2b0) >> 0x10);
        uStack_10e._0_2_ = (int)*(undefined4 *)(iVar5 + 0x2b0);
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
        FUN_1138_1c77((int)*(undefined4 *)(iVar5 + 0x2b0),
                      (int)((ulong)*(undefined4 *)(iVar5 + 0x2b0) >> 0x10),1);
      }
    }
  }
  return;
}



/* ---- FUN_1058_295f @ 1058:295f  (136 octets) ---- */

void __stdcall16far FUN_1058_295f(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined4 uVar6;
  undefined2 uVar7;
  
  uVar7 = 0x296a;
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
        FUN_1058_202c(uVar4,uVar5,uVar6);
      }
      if (iVar2 == iVar3) break;
      iVar2 = iVar2 + 1;
    }
  }
  return;
}



/* ---- FUN_1058_29e7 @ 1058:29e7  (678 octets) ---- */

void __stdcall16far FUN_1058_29e7(undefined4 param_1)

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
  uVar4 = (undefined2)((ulong)*(undefined4 *)(iVar1 + 0x1e0) >> 0x10);
  uVar2 = (undefined2)*(undefined4 *)(iVar1 + 0x1e0);
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
  uVar4 = (undefined2)((ulong)*(undefined4 *)(iVar1 + 0x1ec) >> 0x10);
  uVar2 = (undefined2)*(undefined4 *)(iVar1 + 0x1ec);
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
  uVar4 = (undefined2)((ulong)*(undefined4 *)(iVar1 + 0x1e8) >> 0x10);
  uVar2 = (undefined2)*(undefined4 *)(iVar1 + 0x1e8);
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
  uVar4 = (undefined2)((ulong)*(undefined4 *)(iVar1 + 0x1fc) >> 0x10);
  uVar2 = (undefined2)*(undefined4 *)(iVar1 + 0x1fc);
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
  uVar4 = (undefined2)((ulong)*(undefined4 *)(iVar1 + 0x204) >> 0x10);
  uVar2 = (undefined2)*(undefined4 *)(iVar1 + 0x204);
  FUN_10d8_31d2(uVar2,uVar4);
  FUN_10e0_2ffb(uVar2,uVar4,1);
  FUN_10e0_2ed2(uVar2,uVar4,0);
  FUN_10d8_31bf(uVar2,uVar4);
  uVar4 = (undefined2)((ulong)*(undefined4 *)(iVar1 + 0x208) >> 0x10);
  uVar2 = (undefined2)*(undefined4 *)(iVar1 + 0x208);
  FUN_10d8_31d2(uVar2,uVar4);
  FUN_10e0_2ffb(uVar2,uVar4,1);
  FUN_10e0_2ed2(uVar2,uVar4,0);
  FUN_10d8_31bf(uVar2,uVar4);
  uVar4 = (undefined2)((ulong)*(undefined4 *)(iVar1 + 0x200) >> 0x10);
  uVar2 = (undefined2)*(undefined4 *)(iVar1 + 0x200);
  FUN_10d8_31d2(uVar2,uVar4);
  FUN_10e0_2ffb(uVar2,uVar4,1);
  FUN_10e0_2ed2(uVar2,uVar4,0);
  FUN_10d8_31bf(uVar2,uVar4);
  return;
}



/* ---- FUN_1058_2c97 @ 1058:2c97  (1746 octets) ---- */

void __stdcall16far FUN_1058_2c97(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
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
  
  uStack_6 = 0x2ca2;
  FUN_1158_0444();
  puVar10 = local_204;
  uVar6 = (undefined2)((ulong)param_1 >> 0x10);
  iVar5 = (int)param_1;
  uVar7 = unaff_SS;
  FUN_1150_08a9(*(int *)(iVar5 + 0x72c),*(int *)(iVar5 + 0x72c) >> 0xf);
  FUN_1138_1d8c((int)*(undefined4 *)(iVar5 + 400),(int)((ulong)*(undefined4 *)(iVar5 + 400) >> 0x10)
                ,puVar10,uVar7);
  puVar10 = local_204;
  uVar7 = unaff_SS;
  FUN_1150_08a9(*(int *)(iVar5 + 0x72a),*(int *)(iVar5 + 0x72a) >> 0xf);
  FUN_1138_1d8c((int)*(undefined4 *)(iVar5 + 0x198),
                (int)((ulong)*(undefined4 *)(iVar5 + 0x198) >> 0x10),puVar10,uVar7);
  FUN_1158_17e7(0xff,local_104,unaff_SS,iVar5 + 0x72e,uVar6);
  FUN_1158_1878(local_104,unaff_SS,0x2c8d,0x1158);
  cVar1 = FUN_1158_0416();
  if (cVar1 != '\0') {
    FUN_1158_1975(1,cVar1,local_104,unaff_SS);
    puVar10 = local_204;
    uVar7 = unaff_SS;
    FUN_1150_08a9(*(int *)(iVar5 + 0x72a),*(int *)(iVar5 + 0x72a) >> 0xf);
    FUN_1158_1916(cVar1,0xff,local_104,unaff_SS,puVar10,uVar7);
  }
  FUN_1158_1878(local_104,unaff_SS,0x2c8d,0x1158);
  cVar1 = FUN_1158_0416();
  if (cVar1 != '\0') {
    FUN_1158_1975(1,cVar1,local_104,unaff_SS);
    puVar10 = local_204;
    uVar7 = unaff_SS;
    FUN_1150_08a9(*(int *)(iVar5 + 0x72c),*(int *)(iVar5 + 0x72c) >> 0xf);
    FUN_1158_1916(cVar1,0xff,local_104,unaff_SS,puVar10,uVar7);
  }
  FUN_1138_1d8c(iVar5,uVar6,local_104,unaff_SS);
  local_108 = *(undefined4 *)(iVar5 + 0x284);
  iVar2 = FUN_1130_1326((int)local_108,(int)((ulong)local_108 >> 0x10));
  if (SBORROW2(iVar2,1)) {
    FUN_1158_043e(0x1130);
  }
  uVar7 = 0x1158;
  local_109 = FUN_1158_0416();
  bVar11 = 0;
  while( true ) {
    uVar3 = bVar11 + 1;
    if (SCARRY2((uint)bVar11,1)) {
      uVar3 = FUN_1158_043e(uVar7);
    }
    uVar4 = uVar3 & 0xff00;
    if (uVar3 == *(uint *)(iVar5 + 0x72c)) {
      uVar4 = uVar4 + 1;
    }
    uVar9 = FUN_1130_1353((int)local_108,(int)((ulong)local_108 >> 0x10),bVar11);
    uVar7 = 0x1130;
    FUN_1130_1275(uVar9,uVar4);
    if (bVar11 == local_109) break;
    bVar11 = bVar11 + 1;
  }
  local_108 = *(undefined4 *)(iVar5 + 0x6a0);
  bVar11 = 0;
  while( true ) {
    uVar3 = bVar11 + 1;
    if (SCARRY2((uint)bVar11,1)) {
      uVar3 = FUN_1158_043e(0x1130);
    }
    uVar4 = uVar3 & 0xff00;
    if (uVar3 == *(uint *)(iVar5 + 0x72a)) {
      uVar4 = uVar4 + 1;
    }
    uVar9 = FUN_1130_1353((int)local_108,(int)((ulong)local_108 >> 0x10),bVar11);
    FUN_1130_1275(uVar9,uVar4);
    if (bVar11 == 0x13) break;
    bVar11 = bVar11 + 1;
  }
  local_108 = *(undefined4 *)(iVar5 + 0x1dc);
  local_110 = *(int *)(iVar5 + 0x72a);
  local_10e = local_110 >> 0xf;
  local_10c = 0;
  cVar1 = FUN_10e0_2895((int)local_108,(int)((ulong)local_108 >> 0x10),0,&local_110,unaff_SS);
  if (cVar1 == '\0') {
    FUN_1058_1cb7(iVar5,uVar6);
  }
  local_108 = *(undefined4 *)(iVar5 + 0x1e0);
  local_118 = *(int *)(iVar5 + 0x72a);
  local_116 = local_118 >> 0xf;
  local_114 = 0;
  local_110 = 1;
  local_10e = 0;
  local_10c = 0;
  cVar1 = FUN_10e0_2895((int)local_108,(int)((ulong)local_108 >> 0x10),1,&local_118,unaff_SS);
  if (cVar1 == '\0') {
    FUN_1058_1cb7(iVar5,uVar6);
  }
  local_108 = *(undefined4 *)(iVar5 + 0x1e4);
  local_118 = *(int *)(iVar5 + 0x72a);
  local_116 = local_118 >> 0xf;
  local_114 = 0;
  local_110 = 2;
  local_10e = 0;
  local_10c = 0;
  pcVar8 = (char *)s_iTime_1160_10dc + 4;
  cVar1 = FUN_10e0_2895((int)local_108,(int)((ulong)local_108 >> 0x10),1,&local_118,unaff_SS);
  if (cVar1 == '\0') {
    pcVar8 = (char *)0x1058;
    FUN_1058_1cb7(iVar5,uVar6);
  }
  local_108._2_2_ = (undefined2)((ulong)*(undefined4 *)(iVar5 + 0x1ec) >> 0x10);
  local_108._0_2_ = (undefined2)*(undefined4 *)(iVar5 + 0x1ec);
  local_120 = *(int *)(iVar5 + 0x72a) + -1;
  if (SBORROW2(*(int *)(iVar5 + 0x72a),1)) {
    local_120 = FUN_1158_043e(pcVar8);
  }
  local_11e = local_120 >> 0xf;
  local_11c = 0;
  local_118 = *(int *)(iVar5 + 0x72c);
  local_116 = local_118 >> 0xf;
  local_114 = 0;
  local_110 = 1;
  local_10e = 0;
  local_10c = 0;
  pcVar8 = (char *)s_iTime_1160_10dc + 4;
  cVar1 = FUN_10e0_2895((undefined2)local_108,local_108._2_2_,2,&local_120,unaff_SS);
  if (cVar1 == '\0') {
    pcVar8 = (char *)0x1058;
    FUN_1058_1cb7(iVar5,uVar6);
  }
  local_108._2_2_ = (undefined2)((ulong)*(undefined4 *)(iVar5 + 0x1f0) >> 0x10);
  local_108._0_2_ = (undefined2)*(undefined4 *)(iVar5 + 0x1f0);
  iVar2 = *(int *)(iVar5 + 0x72a) + -1;
  if (SBORROW2(*(int *)(iVar5 + 0x72a),1)) {
    iVar2 = FUN_1158_043e(pcVar8);
  }
  local_11e = iVar2 >> 0xf;
  local_11c = 0;
  local_118 = *(int *)(iVar5 + 0x72c);
  local_116 = local_118 >> 0xf;
  local_114 = 0;
  local_110 = 2;
  local_10e = 0;
  local_10c = 0;
  pcVar8 = (char *)s_iTime_1160_10dc + 4;
  local_120 = iVar2;
  cVar1 = FUN_10e0_2895((undefined2)local_108,local_108._2_2_,2,&local_120,unaff_SS);
  if (cVar1 == '\0') {
    pcVar8 = (char *)0x1058;
    FUN_1058_1cb7(iVar5,uVar6);
  }
  local_108._2_2_ = (undefined2)((ulong)*(undefined4 *)(iVar5 + 0x1e8) >> 0x10);
  local_108._0_2_ = (undefined2)*(undefined4 *)(iVar5 + 0x1e8);
  iVar2 = *(int *)(iVar5 + 0x72a) + -1;
  if (SBORROW2(*(int *)(iVar5 + 0x72a),1)) {
    iVar2 = FUN_1158_043e(pcVar8);
  }
  local_116 = iVar2 >> 0xf;
  local_114 = 0;
  local_110 = *(int *)(iVar5 + 0x72c);
  local_10e = local_110 >> 0xf;
  local_10c = 0;
  local_118 = iVar2;
  cVar1 = FUN_10e0_2895((undefined2)local_108,local_108._2_2_,1,&local_118,unaff_SS);
  if (cVar1 == '\0') {
    FUN_1058_1cb7(iVar5,uVar6);
  }
  local_108 = *(undefined4 *)(iVar5 + 0x1f8);
  local_120 = *(int *)(iVar5 + 0x72a);
  local_11e = local_120 >> 0xf;
  local_11c = 0;
  local_118 = *(int *)(iVar5 + 0x72c);
  local_116 = local_118 >> 0xf;
  local_114 = 0;
  local_110 = 1;
  local_10e = 0;
  local_10c = 0;
  cVar1 = FUN_10e0_2895((int)local_108,(int)((ulong)local_108 >> 0x10),2,&local_120,unaff_SS);
  if (cVar1 == '\0') {
    FUN_1058_1cb7(iVar5,uVar6);
  }
  local_108 = *(undefined4 *)(iVar5 + 0x1fc);
  local_120 = *(int *)(iVar5 + 0x72a);
  local_11e = local_120 >> 0xf;
  local_11c = 0;
  local_118 = *(int *)(iVar5 + 0x72c);
  local_116 = local_118 >> 0xf;
  local_114 = 0;
  local_110 = 2;
  local_10e = 0;
  local_10c = 0;
  cVar1 = FUN_10e0_2895((int)local_108,(int)((ulong)local_108 >> 0x10),2,&local_120,unaff_SS);
  if (cVar1 == '\0') {
    FUN_1058_1cb7(iVar5,uVar6);
  }
  local_108 = *(undefined4 *)(iVar5 + 500);
  local_118 = *(int *)(iVar5 + 0x72a);
  local_116 = local_118 >> 0xf;
  local_114 = 0;
  local_110 = *(int *)(iVar5 + 0x72c);
  local_10e = local_110 >> 0xf;
  local_10c = 0;
  cVar1 = FUN_10e0_2895((int)local_108,(int)((ulong)local_108 >> 0x10),1,&local_118,unaff_SS);
  if (cVar1 == '\0') {
    FUN_1058_1cb7(iVar5,uVar6);
  }
  local_108 = *(undefined4 *)(iVar5 + 0x204);
  local_120 = *(int *)(iVar5 + 0x72a);
  local_11e = local_120 >> 0xf;
  local_11c = 0;
  local_118 = *(int *)(iVar5 + 0x72c);
  local_116 = local_118 >> 0xf;
  local_114 = 0;
  local_110 = 1;
  local_10e = 0;
  local_10c = 0;
  cVar1 = FUN_10e0_2895((int)local_108,(int)((ulong)local_108 >> 0x10),2,&local_120,unaff_SS);
  if (cVar1 == '\0') {
    FUN_1058_1cb7(iVar5,uVar6);
  }
  local_108 = *(undefined4 *)(iVar5 + 0x208);
  local_120 = *(int *)(iVar5 + 0x72a);
  local_11e = local_120 >> 0xf;
  local_11c = 0;
  local_118 = *(int *)(iVar5 + 0x72c);
  local_116 = local_118 >> 0xf;
  local_114 = 0;
  local_110 = 2;
  local_10e = 0;
  local_10c = 0;
  cVar1 = FUN_10e0_2895((int)local_108,(int)((ulong)local_108 >> 0x10),2,&local_120,unaff_SS);
  if (cVar1 == '\0') {
    FUN_1058_1cb7(iVar5,uVar6);
  }
  local_108 = *(undefined4 *)(iVar5 + 0x200);
  local_118 = *(int *)(iVar5 + 0x72a);
  local_116 = local_118 >> 0xf;
  local_114 = 0;
  local_110 = *(int *)(iVar5 + 0x72c);
  local_10e = local_110 >> 0xf;
  local_10c = 0;
  cVar1 = FUN_10e0_2895((int)local_108,(int)((ulong)local_108 >> 0x10),1,&local_118,unaff_SS);
  if (cVar1 == '\0') {
    FUN_1058_1cb7(iVar5,uVar6);
  }
  FUN_1058_295f(iVar5,uVar6);
  return;
}



/* ---- FUN_1058_3369 @ 1058:3369  (194 octets) ---- */

void __stdcall16far FUN_1058_3369(undefined4 param_1)

{
  int iVar1;
  undefined2 uVar2;
  
  FUN_1158_0444();
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  FUN_10d8_31d2((int)*(undefined4 *)(iVar1 + 0x1dc),
                (int)((ulong)*(undefined4 *)(iVar1 + 0x1dc) >> 0x10));
  FUN_10d8_31d2((int)*(undefined4 *)(iVar1 + 0x1e0),
                (int)((ulong)*(undefined4 *)(iVar1 + 0x1e0) >> 0x10));
  FUN_10d8_31d2((int)*(undefined4 *)(iVar1 + 0x1e4),
                (int)((ulong)*(undefined4 *)(iVar1 + 0x1e4) >> 0x10));
  FUN_10d8_31d2((int)*(undefined4 *)(iVar1 + 0x1ec),
                (int)((ulong)*(undefined4 *)(iVar1 + 0x1ec) >> 0x10));
  FUN_10d8_31d2((int)*(undefined4 *)(iVar1 + 0x1f0),
                (int)((ulong)*(undefined4 *)(iVar1 + 0x1f0) >> 0x10));
  FUN_10d8_31d2((int)*(undefined4 *)(iVar1 + 0x1e8),
                (int)((ulong)*(undefined4 *)(iVar1 + 0x1e8) >> 0x10));
  FUN_10d8_31d2((int)*(undefined4 *)(iVar1 + 0x1f8),
                (int)((ulong)*(undefined4 *)(iVar1 + 0x1f8) >> 0x10));
  FUN_10d8_31d2((int)*(undefined4 *)(iVar1 + 0x1fc),
                (int)((ulong)*(undefined4 *)(iVar1 + 0x1fc) >> 0x10));
  FUN_10d8_31d2((int)*(undefined4 *)(iVar1 + 500),(int)((ulong)*(undefined4 *)(iVar1 + 500) >> 0x10)
               );
  FUN_10d8_31d2((int)*(undefined4 *)(iVar1 + 0x200),
                (int)((ulong)*(undefined4 *)(iVar1 + 0x200) >> 0x10));
  FUN_10d8_31d2((int)*(undefined4 *)(iVar1 + 0x204),
                (int)((ulong)*(undefined4 *)(iVar1 + 0x204) >> 0x10));
  FUN_10d8_31d2((int)*(undefined4 *)(iVar1 + 0x208),
                (int)((ulong)*(undefined4 *)(iVar1 + 0x208) >> 0x10));
  return;
}



/* ---- FUN_1058_342b @ 1058:342b  (32 octets) ---- */

void __stdcall16far FUN_1058_342b(undefined4 param_1,undefined2 param_2)

{
  undefined2 uVar1;
  
  FUN_1158_0444();
  uVar1 = (undefined2)((ulong)param_1 >> 0x10);
  *(undefined2 *)((int)param_1 + 0x72a) = param_2;
  FUN_1058_2c97((int)param_1,uVar1);
  return;
}



/* ---- FUN_1058_344b @ 1058:344b  (32 octets) ---- */

void __stdcall16far FUN_1058_344b(undefined4 param_1,undefined2 param_2)

{
  undefined2 uVar1;
  
  FUN_1158_0444();
  uVar1 = (undefined2)((ulong)param_1 >> 0x10);
  *(undefined2 *)((int)param_1 + 0x72c) = param_2;
  FUN_1058_2c97((int)param_1,uVar1);
  return;
}



/* ---- TFormSERC_Compte_FormCreate @ 1058:347b  (1 octets) ---- */

/* WARNING: Removing unreachable block (ram,0x105836cd) */

void TFormSERC_Compte_FormCreate(undefined2 param_1,undefined4 param_2)

{
  char cVar1;
  byte extraout_AH;
  int iVar2;
  byte extraout_AH_00;
  byte extraout_AH_01;
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
  
  iStack_6 = 0x3486;
  FUN_1158_0444();
  FUN_1158_17cd(0x346b,0x1158);
  FUN_1158_184c(0x1dfa,0x1160);
  FUN_1158_184c(0x3477,0x1158);
  puVar14 = auStack_204;
  uVar8 = (undefined2)((ulong)param_2 >> 0x10);
  iVar7 = (int)param_2;
  uVar9 = unaff_SS;
  FUN_1138_1d53();
  FUN_1158_184c(puVar14,uVar9);
  FUN_1158_17e7();
  FUN_1138_1d8c((int)*(undefined4 *)(iVar7 + 0x188),
                (int)((ulong)*(undefined4 *)(iVar7 + 0x188) >> 0x10),0x1dfa,0x1160);
  *(undefined2 *)(iVar7 + 0x728) = 100;
  iVar2 = (uint)extraout_AH * 0x100;
  if (2 < DAT_1160_1e06) {
    iVar2 = iVar2 + 1;
  }
  FUN_1130_13a5((int)*(undefined4 *)(iVar7 + 0x66c),
                (int)((ulong)*(undefined4 *)(iVar7 + 0x66c) >> 0x10),iVar2);
  iVar2 = (uint)extraout_AH_00 * 0x100;
  if (2 < DAT_1160_1e06) {
    iVar2 = iVar2 + 1;
  }
  FUN_1130_13a5((int)*(undefined4 *)(iVar7 + 0x668),
                (int)((ulong)*(undefined4 *)(iVar7 + 0x668) >> 0x10),iVar2);
  iVar2 = (uint)extraout_AH_01 * 0x100;
  if (2 < DAT_1160_1e06) {
    iVar2 = iVar2 + 1;
  }
  FUN_1130_13a5((int)*(undefined4 *)(iVar7 + 0x6f8),
                (int)((ulong)*(undefined4 *)(iVar7 + 0x6f8) >> 0x10),iVar2);
  DAT_1160_0144 = 0xffff;
  DAT_1160_0146 = 0xffff;
  DAT_1160_0148 = 0xffff;
  iStack_6 = (int)((ulong)*(undefined4 *)(iVar7 + 0x284) >> 0x10);
  uStack_a._2_2_ = (undefined2)*(undefined4 *)(iVar7 + 0x284);
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
  iStack_6 = (int)((ulong)*(undefined4 *)(iVar7 + 0x6a0) >> 0x10);
  uStack_a._2_2_ = (undefined2)*(undefined4 *)(iVar7 + 0x6a0);
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
  FUN_1138_1d8c((int)*(undefined4 *)(iVar7 + 0x5d8),
                (int)((ulong)*(undefined4 *)(iVar7 + 0x5d8) >> 0x10),puVar14,uVar9);
  puVar14 = auStack_104;
  uVar12 = *(undefined4 *)((int)DAT_1160_18f6 + 0x250);
  uVar9 = unaff_SS;
  FUN_1138_1d53((int)uVar12,(int)((ulong)uVar12 >> 0x10));
  FUN_1138_1d8c((int)*(undefined4 *)(iVar7 + 0x5dc),
                (int)((ulong)*(undefined4 *)(iVar7 + 0x5dc) >> 0x10),puVar14,uVar9);
  puVar14 = auStack_104;
  uVar12 = *(undefined4 *)((int)DAT_1160_18f6 + 0x254);
  uVar9 = unaff_SS;
  FUN_1138_1d53((int)uVar12,(int)((ulong)uVar12 >> 0x10));
  FUN_1138_1d8c((int)*(undefined4 *)(iVar7 + 0x5e0),
                (int)((ulong)*(undefined4 *)(iVar7 + 0x5e0) >> 0x10),puVar14,uVar9);
  puVar14 = auStack_104;
  uVar12 = *(undefined4 *)((int)DAT_1160_18f6 + 0x248);
  uVar16 = unaff_SS;
  FUN_1138_1d53((int)uVar12,(int)((ulong)uVar12 >> 0x10));
  FUN_1158_184c(0x3477,0x1138);
  puVar15 = auStack_204;
  uVar9 = unaff_SS;
  FUN_1150_15fe(puVar15);
  FUN_1150_1cbf((double)in_ST0);
  FUN_1158_184c(puVar15,uVar9);
  FUN_1158_184c(0x3477,0x1158);
  puVar15 = auStack_304;
  FUN_1150_15fe(puVar15);
  FUN_1150_1ce4((double)in_ST1);
  FUN_1158_184c(puVar15,unaff_SS);
  FUN_1158_184c(0x3477,0x1158);
  FUN_1138_1d8c((int)*(undefined4 *)(iVar7 + 0x5e4),
                (int)((ulong)*(undefined4 *)(iVar7 + 0x5e4) >> 0x10),puVar14,uVar16);
  FUN_10e0_3017((int)*(undefined4 *)(iVar7 + 0x1dc),
                (int)((ulong)*(undefined4 *)(iVar7 + 0x1dc) >> 0x10),0x1e32,0x1160);
  FUN_10e0_3017((int)*(undefined4 *)(iVar7 + 0x1e0),
                (int)((ulong)*(undefined4 *)(iVar7 + 0x1e0) >> 0x10),0x1e40,0x1160);
  FUN_10e0_3017((int)*(undefined4 *)(iVar7 + 0x1e4),
                (int)((ulong)*(undefined4 *)(iVar7 + 0x1e4) >> 0x10),0x1e40,0x1160);
  FUN_10e0_3017((int)*(undefined4 *)(iVar7 + 0x1e8),
                (int)((ulong)*(undefined4 *)(iVar7 + 0x1e8) >> 0x10),0x1e78,0x1160);
  FUN_10e0_3017((int)*(undefined4 *)(iVar7 + 0x1ec),
                (int)((ulong)*(undefined4 *)(iVar7 + 0x1ec) >> 0x10),0x1e86,0x1160);
  FUN_10e0_3017((int)*(undefined4 *)(iVar7 + 0x1f0),
                (int)((ulong)*(undefined4 *)(iVar7 + 0x1f0) >> 0x10),0x1e86,0x1160);
  FUN_10e0_3017((int)*(undefined4 *)(iVar7 + 500),(int)((ulong)*(undefined4 *)(iVar7 + 500) >> 0x10)
                ,0x1e4e,0x1160);
  FUN_10e0_3017((int)*(undefined4 *)(iVar7 + 0x1f8),
                (int)((ulong)*(undefined4 *)(iVar7 + 0x1f8) >> 0x10),0x1e5c,0x1160);
  FUN_10e0_3017((int)*(undefined4 *)(iVar7 + 0x1fc),
                (int)((ulong)*(undefined4 *)(iVar7 + 0x1fc) >> 0x10),0x1e5c,0x1160);
  FUN_10e0_3017((int)*(undefined4 *)(iVar7 + 0x200),
                (int)((ulong)*(undefined4 *)(iVar7 + 0x200) >> 0x10),0x1e78,0x1160);
  FUN_10e0_3017((int)*(undefined4 *)(iVar7 + 0x204),
                (int)((ulong)*(undefined4 *)(iVar7 + 0x204) >> 0x10),0x1e86,0x1160);
  FUN_10e0_3017((int)*(undefined4 *)(iVar7 + 0x208),
                (int)((ulong)*(undefined4 *)(iVar7 + 0x208) >> 0x10),0x1e86,0x1160);
  *(undefined2 *)(iVar7 + 0x72c) = 1;
  iVar2 = DAT_1160_014c + -1;
  if (SBORROW2(DAT_1160_014c,1)) {
    iVar2 = FUN_1158_043e((char *)s_iTime_1160_10dc + 4);
  }
  *(int *)(iVar7 + 0x72a) = iVar2;
  return;
}



/* ---- TFormSERC_Compte_FormShow @ 1058:38f2  (27 octets) ---- */

void __stdcall16far TFormSERC_Compte_FormShow(void)

{
  FUN_1158_0444();
  FUN_1140_63a9((int)DAT_1160_2c2e,(int)((ulong)DAT_1160_2c2e >> 0x10),0xfffe);
  return;
}



/* ---- TFormSERC_Compte_FormClose @ 1058:390d  (31 octets) ---- */

void __stdcall16far TFormSERC_Compte_FormClose(undefined4 param_1,undefined *param_2)

{
  FUN_1158_0444();
  FUN_1058_3369((int)param_1,(int)((ulong)param_1 >> 0x10));
  *param_2 = 1;
  return;
}



/* ---- TFormSERC_Compte_Quitter1Click @ 1058:392c  (24 octets) ---- */

void __stdcall16far TFormSERC_Compte_Quitter1Click(undefined4 param_1)

{
  FUN_1158_0444();
  FUN_1140_5556((int)param_1,(int)((ulong)param_1 >> 0x10));
  return;
}



/* ---- TFormSERC_Compte_N1001Click @ 1058:3950  (1 octets) ---- */

void TFormSERC_Compte_N1001Click
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
  iVar11 = *(int *)(iVar6 + 0x728);
  cVar1 = FUN_1158_2255(0x94,0x1130,param_3,param_4);
  if (cVar1 != '\0') {
    uVar10 = FUN_1158_2273(0x94,0x1130,param_3,param_4);
    uVar2 = FUN_1130_162b((int)*(undefined4 *)(iVar6 + 0x1d8),
                          (int)((ulong)*(undefined4 *)(iVar6 + 0x1d8) >> 0x10),uVar10);
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
    uVar9 = (undefined2)((ulong)*(undefined4 *)(iVar6 + 0x1d8) >> 0x10);
    uVar7 = (undefined2)*(undefined4 *)(iVar6 + 0x1d8);
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
  if (iVar11 != *(int *)(iVar6 + 0x728)) {
    FUN_1138_5df4(iVar6,uVar8,*(undefined2 *)(iVar6 + 0x728),iVar11);
    *(int *)(iVar6 + 0x728) = iVar11;
  }
  return;
}



/* ---- TFormSERC_Compte_PleinEcran1Click @ 1058:3a6d  (48 octets) ---- */

void __stdcall16far TFormSERC_Compte_PleinEcran1Click(undefined4 param_1)

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



/* ---- TFormSERC_Compte_FormResize @ 1058:3a9d  (41 octets) ---- */

void __stdcall16far TFormSERC_Compte_FormResize(undefined4 param_1)

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
  uVar1 = *(undefined4 *)((int)param_1 + 0x1d0);
  FUN_1130_1275((int)uVar1,(int)((ulong)uVar1 >> 0x10),iVar2);
  return;
}



/* ---- TFormSERC_Compte_Periode1Click @ 1058:3ac6  (71 octets) ---- */

void __stdcall16far TFormSERC_Compte_Periode1Click(undefined4 param_1)

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
  iVar1 = FUN_1000_3e32(*(undefined2 *)(iVar2 + 0x72a),iVar1);
  if (iVar1 != *(int *)(iVar2 + 0x72a)) {
    FUN_1058_342b(iVar2,uVar3,iVar1);
  }
  return;
}



/* ---- TFormSERC_Compte_N12Click @ 1058:3b0d  (246 octets) ---- */

void __stdcall16far
TFormSERC_Compte_N12Click(undefined4 param_1,undefined2 param_2,undefined2 param_3)

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
    iVar4 = *(int *)(iVar5 + 0x72a);
    uVar8 = FUN_1158_2273(0x94,0x1130,param_2,param_3);
    uVar7 = 0x1130;
    uVar2 = FUN_1130_162b((int)*(undefined4 *)(iVar5 + 0x6a0),
                          (int)((ulong)*(undefined4 *)(iVar5 + 0x6a0) >> 0x10),uVar8);
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
      iVar4 = FUN_1000_3e32(*(undefined2 *)(iVar5 + 0x72a),iVar4);
    }
    if (iVar4 != *(int *)(iVar5 + 0x72a)) {
      FUN_1058_342b(iVar5,uVar6,iVar4);
    }
  }
  return;
}



/* ---- TFormSERC_Compte_N11Click @ 1058:3c0b  (1 octets) ---- */

void TFormSERC_Compte_N11Click
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
  
  uStack_8 = CONCAT22(0x3c16,(undefined2)uStack_8);
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
      FUN_1058_344b((int)param_2,(int)((ulong)param_2 >> 0x10),iVar2);
    }
  }
  return;
}



/* ---- TFormSERC_Compte_Barredoutils1Click @ 1058:3caf  (21 octets) ---- */

void __stdcall16far TFormSERC_Compte_Barredoutils1Click(void)

{
  FUN_1158_0444();
  MESSAGEBEEP(0x1158,0);
  return;
}



/* ---- TFormSERC_Compte_TableERP1CalcFields @ 1058:3e45  (1 octets) ---- */

void TFormSERC_Compte_TableERP1CalcFields
               (undefined2 param_1,undefined4 param_2,undefined2 param_3,undefined2 param_4)

{
  double dVar1;
  undefined2 *puVar2;
  int iVar3;
  undefined2 uVar4;
  longdouble in_ST0;
  longdouble lVar5;
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
  longdouble in_ST1;
  longdouble in_ST2;
  longdouble in_ST3;
  longdouble in_ST4;
  longdouble in_ST5;
  longdouble in_ST6;
  undefined4 uVar18;
  undefined4 *puVar19;
  long lVar20;
  undefined4 *puVar21;
  double dVar22;
  undefined2 uStack_2a;
  undefined2 uStack_28;
  undefined2 uStack_26;
  undefined2 uStack_24;
  undefined2 uStack_22;
  undefined2 uStack_20;
  undefined2 uStack_1e;
  undefined2 uStack_1c;
  undefined2 uStack_1a;
  undefined2 uStack_12;
  undefined2 uStack_a;
  undefined2 uStack_8;
  undefined2 uStack_6;
  undefined2 uVar23;
  
  FUN_1158_0444();
  uVar18 = FUN_1158_2273(0x138,(char *)s_iTime_1160_10dc + 4,param_3,param_4);
  puVar19 = (undefined4 *)FUN_10d8_3b9b(uVar18,0x3cc4,0x1158);
  puVar2 = (undefined2 *)((int)*puVar19 + 0x44);
  lVar20 = (*(code *)*puVar2)(0x10d8,puVar19);
  iVar3 = (int)param_2;
  uVar4 = (undefined2)((ulong)param_2 >> 0x10);
  if (lVar20 == 1) {
    uStack_6 = *(undefined2 *)(iVar3 + 0x1f8);
    uVar23 = *(undefined2 *)(iVar3 + 0x1fa);
    uStack_a = *(undefined2 *)(iVar3 + 0x1ec);
    uStack_8 = *(undefined2 *)(iVar3 + 0x1ee);
  }
  else {
    uStack_6 = *(undefined2 *)(iVar3 + 0x1fc);
    uVar23 = *(undefined2 *)(iVar3 + 0x1fe);
    uStack_a = *(undefined2 *)(iVar3 + 0x1f0);
    uStack_8 = *(undefined2 *)(iVar3 + 0x1f2);
  }
  puVar19 = (undefined4 *)FUN_10d8_3b9b(uVar18,0x3cd2,0x1058);
  puVar2 = (undefined2 *)((int)*puVar19 + 0x44);
  lVar20 = (*(code *)*puVar2)(0x10d8,puVar19);
  puVar19 = (undefined4 *)FUN_10d8_3b9b();
  puVar2 = (undefined2 *)((int)*puVar19 + 0x40);
  (*(code *)*puVar2)();
  lVar9 = in_ST6;
  lVar17 = in_ST6;
  FUN_1080_2fa6((double)((longdouble)lVar20 * in_ST0));
  dVar22 = (double)in_ST1;
  puVar21 = (undefined4 *)FUN_10d8_3b9b(uVar18,0x3cde,0x1080);
  puVar2 = (undefined2 *)((int)*puVar21 + 0x5c);
  (*(code *)*puVar2)(0x10d8,puVar21,dVar22,puVar19);
  puVar19 = (undefined4 *)FUN_10d8_3b9b(uVar18,0x3cef,0x10d8);
  puVar2 = (undefined2 *)((int)*puVar19 + 0x44);
  lVar20 = (*(code *)*puVar2)(0x10d8,puVar19);
  puVar19 = (undefined4 *)FUN_10d8_3b9b();
  puVar2 = (undefined2 *)((int)*puVar19 + 0x40);
  (*(code *)*puVar2)();
  lVar11 = lVar17;
  lVar5 = lVar17;
  FUN_1080_2fa6((double)((longdouble)lVar20 * in_ST2));
  dVar22 = (double)in_ST3;
  puVar21 = (undefined4 *)FUN_10d8_3b9b(uVar18,0x3d12,0x1080);
  puVar2 = (undefined2 *)((int)*puVar21 + 0x5c);
  (*(code *)*puVar2)(0x10d8,puVar21,dVar22,puVar19);
  puVar19 = (undefined4 *)FUN_10d8_3b9b(uVar18,0x3d23,0x10d8);
  puVar2 = (undefined2 *)((int)*puVar19 + 0x44);
  lVar20 = (*(code *)*puVar2)(0x10d8,puVar19);
  puVar19 = (undefined4 *)FUN_10d8_3b9b();
  puVar2 = (undefined2 *)((int)*puVar19 + 0x40);
  (*(code *)*puVar2)();
  lVar6 = lVar5;
  lVar7 = lVar5;
  FUN_1080_2fa6((double)((longdouble)lVar20 * in_ST4));
  dVar22 = (double)in_ST5;
  puVar21 = (undefined4 *)FUN_10d8_3b9b(uVar18,0x3d3e,0x1080);
  puVar2 = (undefined2 *)((int)*puVar21 + 0x5c);
  (*(code *)*puVar2)(0x10d8,puVar21,dVar22,puVar19);
  lVar8 = lVar7;
  puVar19 = (undefined4 *)FUN_10d8_3b9b(uVar18,0x3d51,0x10d8);
  puVar2 = (undefined2 *)((int)*puVar19 + 0x40);
  (*(code *)*puVar2)(0x10d8,puVar19);
  puVar19 = (undefined4 *)FUN_10d8_3b9b(uStack_a,uStack_8,0x3d51,0x10d8);
  puVar2 = (undefined2 *)((int)*puVar19 + 0x40);
  (*(code *)*puVar2)(0x10d8,puVar19);
  dVar22 = (double)(in_ST6 - lVar9);
  uStack_1c = (undefined2)((qword)dVar22 >> 0x30);
  uStack_1e = (undefined2)((qword)dVar22 >> 0x20);
  uStack_20 = (undefined2)((qword)dVar22 >> 0x10);
  uStack_22 = SUB82(dVar22,0);
  lVar9 = lVar8;
  puVar19 = (undefined4 *)FUN_10d8_3b9b(uVar18,0x3d5d,0x10d8);
  puVar2 = (undefined2 *)((int)*puVar19 + 0x5c);
  (*(code *)*puVar2)(0x10d8,puVar19,uStack_22,uStack_20,uStack_1e,uStack_1c);
  dVar22 = (double)in_ST1 + 0.0 + (double)in_ST3 + (double)in_ST5 + dVar22;
  uStack_24 = (undefined2)((qword)dVar22 >> 0x30);
  uStack_26 = (undefined2)((qword)dVar22 >> 0x20);
  uStack_28 = (undefined2)((qword)dVar22 >> 0x10);
  uStack_2a = SUB82(dVar22,0);
  lVar10 = lVar9;
  puVar19 = (undefined4 *)FUN_10d8_3b9b(uVar18,0x3d6f,0x10d8);
  puVar2 = (undefined2 *)((int)*puVar19 + 0x5c);
  (*(code *)*puVar2)(0x10d8,puVar19,uStack_2a,uStack_28,uStack_26,uStack_24);
  puVar19 = (undefined4 *)FUN_10d8_3b9b(uStack_6,uVar23,0x3d8f,0x10d8);
  puVar2 = (undefined2 *)((int)*puVar19 + 0x40);
  (*(code *)*puVar2)(0x10d8,puVar19);
  puVar19 = (undefined4 *)FUN_10d8_3b9b();
  puVar2 = (undefined2 *)((int)*puVar19 + 0x40);
  (*(code *)*puVar2)();
  dVar22 = (double)(lVar17 + lVar11);
  lVar11 = lVar10;
  puVar21 = (undefined4 *)FUN_10d8_3b9b(uVar18,0x3d80,0x10d8);
  puVar2 = (undefined2 *)((int)*puVar21 + 0x5c);
  (*(code *)*puVar2)(0x10d8,puVar21,dVar22,puVar19);
  lVar12 = lVar11;
  puVar19 = (undefined4 *)FUN_10d8_3b9b(uVar18,0x3dab,0x1058);
  puVar2 = (undefined2 *)((int)*puVar19 + 0x40);
  (*(code *)*puVar2)(0x10d8,puVar19);
  lVar13 = lVar12;
  puVar19 = (undefined4 *)FUN_10d8_3b9b(uVar18,0x3dab,0x10d8);
  puVar2 = (undefined2 *)((int)*puVar19 + 0x40);
  (*(code *)*puVar2)(0x10d8,puVar19);
  lVar14 = lVar13;
  puVar19 = (undefined4 *)FUN_10d8_3b9b(uVar18,0x3dbf,0x10d8);
  puVar2 = (undefined2 *)((int)*puVar19 + 0x40);
  (*(code *)*puVar2)(0x10d8,puVar19);
  lVar15 = lVar14;
  puVar19 = (undefined4 *)FUN_10d8_3b9b(uVar18,0x3dbf,0x10d8);
  puVar2 = (undefined2 *)((int)*puVar19 + 0x40);
  (*(code *)*puVar2)(0x10d8,puVar19);
  lVar16 = lVar15;
  puVar19 = (undefined4 *)FUN_10d8_3b9b(uStack_6,uVar23,0x3dd1,0x10d8);
  puVar2 = (undefined2 *)((int)*puVar19 + 0x40);
  (*(code *)*puVar2)(0x10d8,puVar19);
  lVar17 = lVar16;
  puVar19 = (undefined4 *)FUN_10d8_3b9b(uStack_6,uVar23,0x3dd1,0x10d8);
  puVar2 = (undefined2 *)((int)*puVar19 + 0x40);
  (*(code *)*puVar2)(0x10d8,puVar19);
  puVar19 = (undefined4 *)FUN_10d8_3b9b(uStack_6,uVar23,0x3d8f,0x10d8);
  puVar2 = (undefined2 *)((int)*puVar19 + 0x40);
  (*(code *)*puVar2)(0x10d8,puVar19);
  puVar19 = (undefined4 *)FUN_10d8_3b9b(uStack_6,uVar23,0x3d99,0x10d8);
  puVar2 = (undefined2 *)((int)*puVar19 + 0x40);
  (*(code *)*puVar2)(0x10d8,puVar19);
  puVar19 = (undefined4 *)FUN_10d8_3b9b(uVar18,0x3de1,0x10d8);
  puVar2 = (undefined2 *)((int)*puVar19 + 0x40);
  (*(code *)*puVar2)(0x10d8,puVar19);
  puVar19 = (undefined4 *)FUN_10d8_3b9b(uStack_a,uStack_8,0x3df0,0x10d8);
  puVar2 = (undefined2 *)((int)*puVar19 + 0x44);
  lVar20 = (*(code *)*puVar2)(0x10d8,puVar19);
  puVar19 = (undefined4 *)FUN_10d8_3b9b();
  puVar2 = (undefined2 *)((int)*puVar19 + 0x40);
  (*(code *)*puVar2)();
  FUN_1080_2fa6((double)((longdouble)lVar20 * lVar14));
  dVar22 = (double)lVar15;
  puVar21 = (undefined4 *)FUN_10d8_3b9b(uVar18,0x3e08,0x1080);
  puVar2 = (undefined2 *)((int)*puVar21 + 0x5c);
  (*(code *)*puVar2)(0x10d8,puVar21,dVar22,puVar19);
  puVar19 = (undefined4 *)FUN_10d8_3b9b(uVar18,0x3e12,0x10d8);
  puVar2 = (undefined2 *)((int)*puVar19 + 0x40);
  (*(code *)*puVar2)(0x10d8,puVar19);
  dVar22 = (double)(lVar16 + (longdouble)
                             ((double)(lVar13 + (longdouble)
                                                (double)(lVar12 + (longdouble)
                                                                  (double)(lVar11 + (longdouble)
                                                                                    (double)(lVar9 +
                                                                                            (
                                                  longdouble)
                                                  (double)(lVar7 + (longdouble)
                                                                   (double)(lVar5 + (longdouble)0.0)
                                                          ))))) + (double)lVar15));
  puVar19 = (undefined4 *)FUN_10d8_3b9b();
  puVar2 = (undefined2 *)((int)*puVar19 + 0x40);
  (*(code *)*puVar2)();
  dVar1 = (double)(lVar17 + (longdouble)
                            (double)(lVar10 + (longdouble)
                                              (double)(lVar8 + (longdouble)
                                                               (double)(lVar6 + (longdouble)0.0))));
  uStack_12 = SUB82(dVar22,0);
  FUN_1080_2fa6(uStack_12,(int6)((qword)dVar22 >> 0x10));
  puVar19 = (undefined4 *)FUN_10d8_3b9b();
  puVar2 = (undefined2 *)((int)*puVar19 + 0x5c);
  (*(code *)*puVar2)();
  uStack_1a = SUB82(dVar1,0);
  FUN_1080_2fa6(uStack_1a,(int6)((qword)dVar1 >> 0x10));
  puVar19 = (undefined4 *)FUN_10d8_3b9b(uVar18,0x3e36,0x1080);
  puVar2 = (undefined2 *)((int)*puVar19 + 0x5c);
  (*(code *)*puVar2)(0x10d8,puVar19);
  return;
}



/* ---- TFormSERC_Compte_TableERGCalcFields @ 1058:4734  (1 octets) ---- */

void TFormSERC_Compte_TableERGCalcFields
               (undefined2 param_1,undefined4 param_2,undefined2 param_3,undefined2 param_4)

{
  undefined2 *puVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 unaff_SS;
  longdouble in_ST0;
  longdouble lVar4;
  longdouble lVar5;
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
  longdouble in_ST1;
  longdouble lVar17;
  longdouble lVar18;
  longdouble lVar19;
  longdouble lVar20;
  longdouble in_ST2;
  longdouble in_ST3;
  longdouble in_ST4;
  longdouble in_ST5;
  longdouble in_ST6;
  longdouble in_ST7;
  undefined4 uVar21;
  undefined4 *puVar22;
  undefined4 *puVar23;
  undefined4 *puVar24;
  double dVar25;
  undefined8 uVar26;
  undefined8 uStack_11a;
  undefined8 uStack_112;
  undefined auStack_102 [252];
  undefined2 uStack_6;
  
  uStack_6 = 0x473f;
  FUN_1158_0444();
  uVar21 = FUN_1158_2273(0x138,(char *)s_iTime_1160_10dc + 4,param_3,param_4);
  FUN_1158_17e7();
  uVar3 = (undefined2)((ulong)param_2 >> 0x10);
  iVar2 = (int)param_2;
  puVar22 = (undefined4 *)
            FUN_10d8_3b9b((int)*(undefined4 *)(iVar2 + 0x204),
                          (int)((ulong)*(undefined4 *)(iVar2 + 0x204) >> 0x10),auStack_102,unaff_SS)
  ;
  puVar1 = (undefined2 *)((int)*puVar22 + 0x40);
  (*(code *)*puVar1)(0x10d8,puVar22);
  puVar22 = (undefined4 *)FUN_10d8_3b9b();
  puVar1 = (undefined2 *)((int)*puVar22 + 0x40);
  (*(code *)*puVar1)();
  dVar25 = (double)(in_ST0 + in_ST1);
  lVar17 = in_ST7;
  lVar15 = in_ST7;
  puVar23 = (undefined4 *)FUN_10d8_3b9b(uVar21,auStack_102,unaff_SS);
  puVar1 = (undefined2 *)((int)*puVar23 + 0x5c);
  (*(code *)*puVar1)(0x10d8,puVar23,dVar25,puVar22);
  FUN_1158_17e7();
  puVar22 = (undefined4 *)
            FUN_10d8_3b9b((int)*(undefined4 *)(iVar2 + 0x204),
                          (int)((ulong)*(undefined4 *)(iVar2 + 0x204) >> 0x10),auStack_102,unaff_SS)
  ;
  puVar1 = (undefined2 *)((int)*puVar22 + 0x40);
  (*(code *)*puVar1)(0x10d8,puVar22);
  puVar22 = (undefined4 *)FUN_10d8_3b9b();
  puVar1 = (undefined2 *)((int)*puVar22 + 0x40);
  (*(code *)*puVar1)();
  dVar25 = (double)(in_ST2 + in_ST3);
  lVar18 = lVar15;
  lVar20 = lVar15;
  puVar23 = (undefined4 *)FUN_10d8_3b9b(uVar21,auStack_102,unaff_SS);
  puVar1 = (undefined2 *)((int)*puVar23 + 0x5c);
  (*(code *)*puVar1)(0x10d8,puVar23,dVar25,puVar22);
  FUN_1158_17e7();
  puVar22 = (undefined4 *)
            FUN_10d8_3b9b((int)*(undefined4 *)(iVar2 + 0x204),
                          (int)((ulong)*(undefined4 *)(iVar2 + 0x204) >> 0x10),auStack_102,unaff_SS)
  ;
  puVar1 = (undefined2 *)((int)*puVar22 + 0x40);
  (*(code *)*puVar1)(0x10d8,puVar22);
  puVar22 = (undefined4 *)FUN_10d8_3b9b();
  puVar1 = (undefined2 *)((int)*puVar22 + 0x40);
  (*(code *)*puVar1)();
  dVar25 = (double)(in_ST4 + in_ST5);
  lVar16 = lVar20;
  lVar12 = lVar20;
  puVar22 = (undefined4 *)FUN_10d8_3b9b(uVar21,auStack_102,unaff_SS);
  puVar1 = (undefined2 *)((int)*puVar22 + 0x5c);
  (*(code *)*puVar1)(0x10d8,puVar22);
  FUN_1158_17e7();
  puVar23 = (undefined4 *)
            FUN_10d8_3b9b((int)*(undefined4 *)(iVar2 + 0x204),
                          (int)((ulong)*(undefined4 *)(iVar2 + 0x204) >> 0x10),auStack_102,unaff_SS)
  ;
  puVar1 = (undefined2 *)((int)*puVar23 + 0x40);
  (*(code *)*puVar1)(0x10d8,puVar23,puVar22,dVar25);
  puVar22 = (undefined4 *)FUN_10d8_3b9b();
  puVar1 = (undefined2 *)((int)*puVar22 + 0x40);
  (*(code *)*puVar1)();
  dVar25 = (double)(in_ST6 + in_ST7);
  lVar19 = lVar12;
  lVar13 = lVar12;
  puVar23 = (undefined4 *)FUN_10d8_3b9b(uVar21,auStack_102,unaff_SS);
  puVar1 = (undefined2 *)((int)*puVar23 + 0x5c);
  (*(code *)*puVar1)(0x10d8,puVar23,dVar25,puVar22);
  FUN_1158_17e7();
  puVar22 = (undefined4 *)
            FUN_10d8_3b9b((int)*(undefined4 *)(iVar2 + 0x204),
                          (int)((ulong)*(undefined4 *)(iVar2 + 0x204) >> 0x10),auStack_102,unaff_SS)
  ;
  puVar1 = (undefined2 *)((int)*puVar22 + 0x40);
  (*(code *)*puVar1)(0x10d8,puVar22);
  puVar22 = (undefined4 *)FUN_10d8_3b9b();
  puVar1 = (undefined2 *)((int)*puVar22 + 0x40);
  (*(code *)*puVar1)();
  dVar25 = (double)(lVar17 + lVar15);
  lVar15 = lVar13;
  lVar11 = lVar13;
  puVar23 = (undefined4 *)FUN_10d8_3b9b(uVar21,auStack_102,unaff_SS);
  puVar1 = (undefined2 *)((int)*puVar23 + 0x5c);
  (*(code *)*puVar1)(0x10d8,puVar23,dVar25,puVar22);
  puVar22 = (undefined4 *)
            FUN_10d8_3b9b((int)*(undefined4 *)(iVar2 + 500),
                          (int)((ulong)*(undefined4 *)(iVar2 + 500) >> 0x10),0x44fe,0x10d8);
  puVar1 = (undefined2 *)((int)*puVar22 + 0x40);
  (*(code *)*puVar1)(0x10d8,puVar22);
  puVar22 = (undefined4 *)FUN_10d8_3b9b();
  puVar1 = (undefined2 *)((int)*puVar22 + 0x40);
  (*(code *)*puVar1)();
  dVar25 = (double)(lVar18 + lVar20);
  lVar17 = lVar11;
  lVar20 = lVar11;
  puVar23 = (undefined4 *)FUN_10d8_3b9b(uVar21,0x44ea,0x10d8);
  puVar1 = (undefined2 *)((int)*puVar23 + 0x5c);
  (*(code *)*puVar1)(0x10d8,puVar23,dVar25,puVar22);
  FUN_1158_17e7();
  puVar22 = (undefined4 *)
            FUN_10d8_3b9b((int)*(undefined4 *)(iVar2 + 0x204),
                          (int)((ulong)*(undefined4 *)(iVar2 + 0x204) >> 0x10),auStack_102,unaff_SS)
  ;
  puVar1 = (undefined2 *)((int)*puVar22 + 0x40);
  (*(code *)*puVar1)(0x10d8,puVar22);
  puVar22 = (undefined4 *)FUN_10d8_3b9b();
  puVar1 = (undefined2 *)((int)*puVar22 + 0x40);
  (*(code *)*puVar1)();
  dVar25 = (double)(lVar16 + lVar12);
  lVar18 = lVar20;
  lVar12 = lVar20;
  puVar23 = (undefined4 *)FUN_10d8_3b9b(uVar21,auStack_102,unaff_SS);
  puVar1 = (undefined2 *)((int)*puVar23 + 0x5c);
  (*(code *)*puVar1)(0x10d8,puVar23,dVar25,puVar22);
  FUN_1158_17e7();
  puVar22 = (undefined4 *)
            FUN_10d8_3b9b((int)*(undefined4 *)(iVar2 + 0x204),
                          (int)((ulong)*(undefined4 *)(iVar2 + 0x204) >> 0x10),auStack_102,unaff_SS)
  ;
  puVar1 = (undefined2 *)((int)*puVar22 + 0x40);
  (*(code *)*puVar1)(0x10d8,puVar22);
  puVar22 = (undefined4 *)FUN_10d8_3b9b();
  puVar1 = (undefined2 *)((int)*puVar22 + 0x40);
  (*(code *)*puVar1)();
  dVar25 = (double)(lVar19 + lVar13);
  lVar16 = lVar12;
  lVar19 = lVar12;
  puVar23 = (undefined4 *)FUN_10d8_3b9b(uVar21,auStack_102,unaff_SS);
  puVar1 = (undefined2 *)((int)*puVar23 + 0x5c);
  (*(code *)*puVar1)(0x10d8,puVar23,dVar25,puVar22);
  FUN_1158_17e7();
  puVar22 = (undefined4 *)
            FUN_10d8_3b9b((int)*(undefined4 *)(iVar2 + 0x1f8),
                          (int)((ulong)*(undefined4 *)(iVar2 + 0x1f8) >> 0x10),auStack_102,unaff_SS)
  ;
  puVar1 = (undefined2 *)((int)*puVar22 + 0x40);
  (*(code *)*puVar1)(0x10d8,puVar22);
  puVar22 = (undefined4 *)FUN_10d8_3b9b();
  puVar1 = (undefined2 *)((int)*puVar22 + 0x40);
  (*(code *)*puVar1)();
  dVar25 = (double)(lVar15 + lVar11);
  lVar15 = lVar19;
  lVar11 = lVar19;
  puVar23 = (undefined4 *)FUN_10d8_3b9b(uVar21,auStack_102,unaff_SS);
  puVar1 = (undefined2 *)((int)*puVar23 + 0x5c);
  (*(code *)*puVar1)(0x10d8,puVar23,dVar25,puVar22);
  FUN_1158_17e7();
  puVar22 = (undefined4 *)
            FUN_10d8_3b9b((int)*(undefined4 *)(iVar2 + 0x204),
                          (int)((ulong)*(undefined4 *)(iVar2 + 0x204) >> 0x10),auStack_102,unaff_SS)
  ;
  puVar1 = (undefined2 *)((int)*puVar22 + 0x40);
  (*(code *)*puVar1)(0x10d8,puVar22);
  puVar22 = (undefined4 *)FUN_10d8_3b9b();
  puVar1 = (undefined2 *)((int)*puVar22 + 0x40);
  (*(code *)*puVar1)();
  dVar25 = (double)(lVar17 + lVar20);
  lVar4 = lVar11;
  lVar5 = lVar11;
  puVar22 = (undefined4 *)FUN_10d8_3b9b(uVar21,auStack_102,unaff_SS);
  puVar1 = (undefined2 *)((int)*puVar22 + 0x5c);
  (*(code *)*puVar1)(0x10d8,puVar22,dVar25);
  FUN_1158_17e7();
  puVar22 = (undefined4 *)
            FUN_10d8_3b9b((int)*(undefined4 *)(iVar2 + 0x204),
                          (int)((ulong)*(undefined4 *)(iVar2 + 0x204) >> 0x10),auStack_102,unaff_SS)
  ;
  puVar1 = (undefined2 *)((int)*puVar22 + 0x40);
  (*(code *)*puVar1)(0x10d8,puVar22);
  puVar22 = (undefined4 *)FUN_10d8_3b9b();
  puVar1 = (undefined2 *)((int)*puVar22 + 0x40);
  (*(code *)*puVar1)();
  dVar25 = (double)(lVar18 + lVar12);
  lVar6 = lVar5;
  lVar7 = lVar5;
  puVar22 = (undefined4 *)FUN_10d8_3b9b(uVar21,auStack_102,unaff_SS);
  puVar1 = (undefined2 *)((int)*puVar22 + 0x5c);
  (*(code *)*puVar1)(0x10d8,puVar22);
  FUN_1158_17e7();
  puVar23 = (undefined4 *)
            FUN_10d8_3b9b((int)*(undefined4 *)(iVar2 + 0x204),
                          (int)((ulong)*(undefined4 *)(iVar2 + 0x204) >> 0x10),auStack_102,unaff_SS)
  ;
  puVar1 = (undefined2 *)((int)*puVar23 + 0x40);
  (*(code *)*puVar1)(0x10d8,puVar23,puVar22,dVar25);
  puVar22 = (undefined4 *)FUN_10d8_3b9b();
  puVar1 = (undefined2 *)((int)*puVar22 + 0x40);
  (*(code *)*puVar1)();
  dVar25 = (double)(lVar16 + lVar19);
  lVar8 = lVar7;
  lVar9 = lVar7;
  puVar23 = (undefined4 *)FUN_10d8_3b9b(uVar21,auStack_102,unaff_SS);
  puVar1 = (undefined2 *)((int)*puVar23 + 0x5c);
  (*(code *)*puVar1)(0x10d8,puVar23,dVar25,puVar22);
  FUN_1158_17e7();
  puVar22 = (undefined4 *)
            FUN_10d8_3b9b((int)*(undefined4 *)(iVar2 + 0x204),
                          (int)((ulong)*(undefined4 *)(iVar2 + 0x204) >> 0x10),auStack_102,unaff_SS)
  ;
  puVar1 = (undefined2 *)((int)*puVar22 + 0x40);
  (*(code *)*puVar1)(0x10d8,puVar22);
  puVar22 = (undefined4 *)FUN_10d8_3b9b();
  puVar1 = (undefined2 *)((int)*puVar22 + 0x40);
  (*(code *)*puVar1)();
  dVar25 = (double)(lVar15 + lVar11);
  lVar19 = lVar9;
  lVar10 = lVar9;
  puVar23 = (undefined4 *)FUN_10d8_3b9b(uVar21,auStack_102,unaff_SS);
  puVar1 = (undefined2 *)((int)*puVar23 + 0x5c);
  (*(code *)*puVar1)(0x10d8,puVar23,dVar25,puVar22);
  FUN_1158_17e7(0xff,auStack_102,unaff_SS,0x4579,0x10d8);
  puVar22 = (undefined4 *)
            FUN_10d8_3b9b((int)*(undefined4 *)(iVar2 + 0x204),
                          (int)((ulong)*(undefined4 *)(iVar2 + 0x204) >> 0x10),auStack_102,unaff_SS)
  ;
  puVar1 = (undefined2 *)((int)*puVar22 + 0x40);
  (*(code *)*puVar1)(0x10d8,puVar22);
  puVar22 = (undefined4 *)
            FUN_10d8_3b9b((int)*(undefined4 *)(iVar2 + 0x208),
                          (int)((ulong)*(undefined4 *)(iVar2 + 0x208) >> 0x10),auStack_102,unaff_SS)
  ;
  puVar1 = (undefined2 *)((int)*puVar22 + 0x40);
  (*(code *)*puVar1)(0x10d8,puVar22);
  lVar11 = lVar10;
  puVar22 = (undefined4 *)FUN_10d8_3b9b(uVar21,0x458c,0x10d8);
  puVar1 = (undefined2 *)((int)*puVar22 + 0x40);
  (*(code *)*puVar1)(0x10d8,puVar22);
  lVar12 = lVar11;
  puVar22 = (undefined4 *)FUN_10d8_3b9b(uVar21,0x459f,0x10d8);
  puVar1 = (undefined2 *)((int)*puVar22 + 0x40);
  (*(code *)*puVar1)(0x10d8,puVar22);
  lVar13 = lVar12;
  puVar22 = (undefined4 *)FUN_10d8_3b9b(uVar21,0x45ac,0x10d8);
  puVar1 = (undefined2 *)((int)*puVar22 + 0x40);
  (*(code *)*puVar1)(0x10d8,puVar22);
  lVar14 = lVar13;
  puVar22 = (undefined4 *)FUN_10d8_3b9b(uVar21,0x45b9,0x10d8);
  puVar1 = (undefined2 *)((int)*puVar22 + 0x40);
  (*(code *)*puVar1)(0x10d8,puVar22);
  lVar20 = lVar14;
  puVar22 = (undefined4 *)FUN_10d8_3b9b(uVar21,0x45c7,0x10d8);
  puVar1 = (undefined2 *)((int)*puVar22 + 0x40);
  (*(code *)*puVar1)(0x10d8,puVar22);
  lVar17 = lVar20;
  puVar22 = (undefined4 *)FUN_10d8_3b9b(uVar21,0x45dc,0x10d8);
  puVar1 = (undefined2 *)((int)*puVar22 + 0x40);
  (*(code *)*puVar1)(0x10d8,puVar22);
  lVar15 = lVar17;
  puVar22 = (undefined4 *)FUN_10d8_3b9b(uVar21,0x45e8,0x10d8);
  puVar1 = (undefined2 *)((int)*puVar22 + 0x40);
  (*(code *)*puVar1)(0x10d8,puVar22);
  lVar18 = lVar15;
  puVar22 = (undefined4 *)FUN_10d8_3b9b(uVar21,0x45fa,0x10d8);
  puVar1 = (undefined2 *)((int)*puVar22 + 0x40);
  (*(code *)*puVar1)(0x10d8,puVar22);
  lVar16 = lVar18;
  puVar22 = (undefined4 *)FUN_10d8_3b9b();
  puVar1 = (undefined2 *)((int)*puVar22 + 0x40);
  (*(code *)*puVar1)();
  dVar25 = (double)(lVar4 + lVar5 + lVar6 + lVar7 + lVar8 + lVar9 + lVar19 + lVar10 + lVar11 +
                    lVar12 + lVar13);
  lVar19 = lVar16;
  lVar11 = lVar16;
  puVar23 = (undefined4 *)FUN_10d8_3b9b(uVar21,auStack_102,unaff_SS);
  puVar1 = (undefined2 *)((int)*puVar23 + 0x5c);
  (*(code *)*puVar1)(0x10d8,puVar23,dVar25,puVar22);
  puVar22 = (undefined4 *)FUN_10d8_3b9b(uVar21,0x44ea,0x10d8);
  puVar1 = (undefined2 *)((int)*puVar22 + 0x40);
  (*(code *)*puVar1)(0x10d8,puVar22);
  puVar22 = (undefined4 *)FUN_10d8_3b9b();
  puVar1 = (undefined2 *)((int)*puVar22 + 0x40);
  (*(code *)*puVar1)();
  dVar25 = (double)(lVar14 - lVar20);
  lVar20 = lVar11;
  lVar12 = lVar11;
  puVar23 = (undefined4 *)FUN_10d8_3b9b(uVar21,0x4611,0x10d8);
  puVar1 = (undefined2 *)((int)*puVar23 + 0x5c);
  (*(code *)*puVar1)(0x10d8,puVar23);
  puVar24 = (undefined4 *)
            FUN_10d8_3b9b((int)*(undefined4 *)(iVar2 + 0x1e8),
                          (int)((ulong)*(undefined4 *)(iVar2 + 0x1e8) >> 0x10),0x4637,0x10d8);
  puVar1 = (undefined2 *)((int)*puVar24 + 0x40);
  (*(code *)*puVar1)(0x10d8,puVar24,puVar23,dVar25,puVar22);
  puVar22 = (undefined4 *)FUN_10d8_3b9b();
  puVar1 = (undefined2 *)((int)*puVar22 + 0x40);
  (*(code *)*puVar1)();
  lVar17 = lVar17 * lVar15;
  lVar15 = (longdouble)100.0;
  FUN_1158_04b2(puVar22);
  lVar13 = lVar12;
  FUN_1080_2fa6((double)lVar15);
  dVar25 = (double)lVar17;
  lVar14 = lVar13;
  puVar22 = (undefined4 *)FUN_10d8_3b9b(uVar21,0x4626,0x1080);
  puVar1 = (undefined2 *)((int)*puVar22 + 0x5c);
  (*(code *)*puVar1)(0x10d8,puVar22,dVar25);
  puVar22 = (undefined4 *)
            FUN_10d8_3b9b((int)*(undefined4 *)(iVar2 + 0x1e8),
                          (int)((ulong)*(undefined4 *)(iVar2 + 0x1e8) >> 0x10),0x4665,0x10d8);
  puVar1 = (undefined2 *)((int)*puVar22 + 0x40);
  (*(code *)*puVar1)(0x10d8,puVar22);
  puVar22 = (undefined4 *)FUN_10d8_3b9b();
  puVar1 = (undefined2 *)((int)*puVar22 + 0x40);
  (*(code *)*puVar1)();
  lVar18 = lVar18 * lVar16;
  lVar17 = (longdouble)100.0;
  FUN_1158_04b2(puVar22);
  lVar4 = lVar14;
  FUN_1080_2fa6((double)lVar17);
  lVar6 = lVar4;
  puVar22 = (undefined4 *)
            FUN_10d8_3b9b((int)*(undefined4 *)(iVar2 + 0x1e8),
                          CONCAT42(0x10804685,(int)((ulong)*(undefined4 *)(iVar2 + 0x1e8) >> 0x10)))
  ;
  puVar1 = (undefined2 *)((int)*puVar22 + 0x40);
  (*(code *)*puVar1)();
  puVar22 = (undefined4 *)FUN_10d8_3b9b();
  puVar1 = (undefined2 *)((int)*puVar22 + 0x40);
  (*(code *)*puVar1)();
  lVar19 = lVar19 * lVar11;
  lVar17 = (longdouble)100.0;
  FUN_1158_04b2();
  FUN_1080_2fa6((double)lVar17);
  lVar17 = lVar6;
  lVar16 = lVar6;
  puVar22 = (undefined4 *)
            FUN_10d8_3b9b((int)*(undefined4 *)(iVar2 + 0x1e8),
                          CONCAT42(0x108046a7,(int)((ulong)*(undefined4 *)(iVar2 + 0x1e8) >> 0x10)))
  ;
  puVar1 = (undefined2 *)((int)*puVar22 + 0x40);
  (*(code *)*puVar1)();
  puVar23 = (undefined4 *)FUN_10d8_3b9b();
  uVar26 = CONCAT62(CONCAT42(puVar22,(int)((ulong)puVar23 >> 0x10)),(undefined4 *)puVar23);
  puVar1 = (undefined2 *)((int)*puVar23 + 0x40);
  (*(code *)*puVar1)();
  lVar20 = lVar20 * lVar12;
  lVar15 = (longdouble)100.0;
  FUN_1158_04b2(uVar26);
  FUN_1080_2fa6((double)lVar15);
  dVar25 = (double)(lVar18 + lVar19 + lVar20);
  lVar15 = lVar16;
  lVar19 = lVar16;
  puVar22 = (undefined4 *)FUN_10d8_3b9b(uVar21,0x4654,0x1080);
  puVar1 = (undefined2 *)((int)*puVar22 + 0x5c);
  (*(code *)*puVar1)(0x10d8,puVar22);
  puVar23 = (undefined4 *)FUN_10d8_3b9b(uVar21,0x4626,0x10d8);
  puVar1 = (undefined2 *)((int)*puVar23 + 0x40);
  (*(code *)*puVar1)(0x10d8,puVar23,puVar22,dVar25);
  puVar22 = (undefined4 *)FUN_10d8_3b9b();
  puVar1 = (undefined2 *)((int)*puVar22 + 0x40);
  (*(code *)*puVar1)();
  dVar25 = (double)(lVar13 - lVar14);
  lVar18 = lVar19;
  puVar23 = (undefined4 *)FUN_10d8_3b9b(uVar21,0x46bb,0x10d8);
  puVar1 = (undefined2 *)((int)*puVar23 + 0x5c);
  (*(code *)*puVar1)(0x10d8,puVar23,dVar25,puVar22);
  puVar22 = (undefined4 *)
            FUN_10d8_3b9b((int)*(undefined4 *)(iVar2 + 500),
                          (int)((ulong)*(undefined4 *)(iVar2 + 500) >> 0x10),0x46cd,0x10d8);
  puVar1 = (undefined2 *)((int)*puVar22 + 0x40);
  (*(code *)*puVar1)(0x10d8,puVar22);
  uStack_112 = (double)lVar4;
  if (uStack_112 <= 0.0) {
    uStack_11a = -uStack_112;
    uStack_112 = 0.0;
  }
  else {
    uStack_11a = 0.0;
  }
  puVar22 = (undefined4 *)FUN_10d8_3b9b(uVar21,0x46e5,0x1058);
  puVar1 = (undefined2 *)((int)*puVar22 + 0x5c);
  (*(code *)*puVar1)(0x10d8,puVar22,(undefined2)uStack_112,uStack_112._2_2_,uStack_112._4_2_,
                     uStack_112._6_2_);
  puVar22 = (undefined4 *)FUN_10d8_3b9b(uVar21,0x46f0,0x10d8);
  puVar1 = (undefined2 *)((int)*puVar22 + 0x5c);
  (*(code *)*puVar1)(0x10d8,puVar22,(undefined2)uStack_11a,uStack_11a._2_2_,uStack_11a._4_2_,
                     uStack_11a._6_2_);
  puVar22 = (undefined4 *)FUN_10d8_3b9b(uVar21,0x4611,0x10d8);
  puVar1 = (undefined2 *)((int)*puVar22 + 0x40);
  (*(code *)*puVar1)(0x10d8,puVar22);
  puVar22 = (undefined4 *)FUN_10d8_3b9b(uVar21,0x46bb,0x10d8);
  puVar1 = (undefined2 *)((int)*puVar22 + 0x40);
  (*(code *)*puVar1)(0x10d8,puVar22);
  puVar22 = (undefined4 *)
            FUN_10d8_3b9b((int)*(undefined4 *)(iVar2 + 500),
                          (int)((ulong)*(undefined4 *)(iVar2 + 500) >> 0x10),0x46cd,0x10d8);
  puVar1 = (undefined2 *)((int)*puVar22 + 0x40);
  (*(code *)*puVar1)(0x10d8,puVar22);
  puVar22 = (undefined4 *)FUN_10d8_3b9b();
  puVar1 = (undefined2 *)((int)*puVar22 + 0x40);
  (*(code *)*puVar1)();
  dVar25 = (double)(lVar6 + lVar17 + lVar16 + lVar15);
  puVar23 = (undefined4 *)FUN_10d8_3b9b(uVar21,0x46fa,0x10d8);
  puVar1 = (undefined2 *)((int)*puVar23 + 0x5c);
  (*(code *)*puVar1)(0x10d8,puVar23,dVar25,puVar22);
  puVar22 = (undefined4 *)FUN_10d8_3b9b(uVar21,0x46fa,0x10d8);
  puVar1 = (undefined2 *)((int)*puVar22 + 0x40);
  (*(code *)*puVar1)(0x10d8,puVar22);
  puVar22 = (undefined4 *)FUN_10d8_3b9b();
  puVar1 = (undefined2 *)((int)*puVar22 + 0x40);
  (*(code *)*puVar1)();
  dVar25 = (double)(lVar19 - lVar18);
  puVar23 = (undefined4 *)FUN_10d8_3b9b(uVar21,0x471b,0x10d8);
  puVar1 = (undefined2 *)((int)*puVar23 + 0x5c);
  (*(code *)*puVar1)(0x10d8,puVar23,dVar25,puVar22);
  return;
}



/* ---- TFormSERC_Compte_FormKeyDown @ 1058:5590  (1 octets) ---- */

void TFormSERC_Compte_FormKeyDown(undefined2 param_1,undefined4 param_2,byte param_3,int *param_4)

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
        iVar4 = FUN_1158_043e(0x1058);
      }
      FUN_1140_1cd0(iVar6,uVar8,iVar4);
      break;
    case 0x28:
      iVar4 = *(int *)(iVar6 + 10) + *(int *)(iVar6 + 8);
      if (SCARRY2(*(int *)(iVar6 + 10),*(int *)(iVar6 + 8))) {
        iVar4 = FUN_1158_043e(0x1058);
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



/* ---- TFormSERC_Compte_Fiche1Click @ 1058:575c  (43 octets) ---- */

void __stdcall16far TFormSERC_Compte_Fiche1Click(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined2 uVar3;
  
  FUN_1158_0444();
  uVar1 = *(undefined4 *)((int)param_1 + 0x428);
  uVar3 = (undefined2)((ulong)uVar1 >> 0x10);
  iVar2 = (int)uVar1;
  FUN_1140_77b2((int)DAT_1160_2c2a,(int)((ulong)DAT_1160_2c2a >> 0x10),*(undefined2 *)(iVar2 + 0x23)
                ,*(undefined2 *)(iVar2 + 0x25),1);
  return;
}



/* ---- TFormSERC_Compte_Index1Click @ 1058:5787  (31 octets) ---- */

void __stdcall16far TFormSERC_Compte_Index1Click(void)

{
  FUN_1158_0444();
  FUN_1140_77b2((int)DAT_1160_2c2a,(int)((ulong)DAT_1160_2c2a >> 0x10),0,0,3);
  return;
}



/* ---- TFormSERC_Compte_Rechercher1Click @ 1058:57a6  (33 octets) ---- */

void __stdcall16far TFormSERC_Compte_Rechercher1Click(void)

{
  FUN_1158_0444();
  FUN_1140_77b2((int)DAT_1160_2c2a,(int)((ulong)DAT_1160_2c2a >> 0x10),0x228,0x1160,0x105);
  return;
}



/* ---- TFormSERC_Compte_Utiliserlaide1Click @ 1058:57c7  (31 octets) ---- */

void __stdcall16far TFormSERC_Compte_Utiliserlaide1Click(void)

{
  FUN_1158_0444();
  FUN_1140_77b2((int)DAT_1160_2c2a,(int)((ulong)DAT_1160_2c2a >> 0x10),0,0,4);
  return;
}



/* ---- TFormSERC_Compte_Apropos1Click @ 1058:57e6  (29 octets) ---- */

void __stdcall16far TFormSERC_Compte_Apropos1Click(void)

{
  undefined2 uVar1;
  
  uVar1 = 0x57f1;
  FUN_1158_0444();
  FUN_1140_5d45((int)DAT_1160_2008,(int)((ulong)DAT_1160_2008 >> 0x10),uVar1);
  return;
}



/* ---- FUN_1058_5803 @ 1058:5803  (123 octets) ---- */

void __stdcall16far FUN_1058_5803(undefined4 *param_1,undefined *param_2,undefined4 param_3)

{
  undefined2 *puVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  
  uVar4 = 0x580e;
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



/* ---- TFormSERC_Compte_DBEdit1MouseDown @ 1058:587e  (183 octets) ---- */

void __stdcall16far TFormSERC_Compte_DBEdit1MouseDown(undefined4 param_1)

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
    *(undefined2 *)(iVar1 + 0x6d) = 0x5803;
    *(undefined2 *)(iVar1 + 0x6f) = 0x1058;
    *(undefined2 *)(iVar1 + 0x71) = (int)param_1;
    *(undefined2 *)(iVar1 + 0x73) = (int)((ulong)param_1 >> 0x10);
  }
  return;
}



/* ---- TFormSERC_Compte_Panel14MouseDown @ 1058:5935  (105 octets) ---- */

void __stdcall16far TFormSERC_Compte_Panel14MouseDown(void)

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



/* ---- TFormSERC_Compte_ImpressionRapide1Click @ 1058:599e  (43 octets) ---- */

void __stdcall16far TFormSERC_Compte_ImpressionRapide1Click(undefined4 param_1)

{
  undefined4 uVar1;
  char cVar2;
  undefined2 uVar3;
  
  FUN_1158_0444();
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  uVar1 = *(undefined4 *)((int)param_1 + 0x288);
  cVar2 = FUN_1108_2f17((int)uVar1,(int)((ulong)uVar1 >> 0x10));
  if (cVar2 != '\0') {
    FUN_1058_5a2d((int)param_1,uVar3);
  }
  return;
}



/* ---- FUN_1058_59d1 @ 1058:59d1  (69 octets) ---- */

undefined2 __stdcall16far FUN_1058_59d1(void)

{
  undefined2 uVar1;
  undefined2 unaff_SS;
  undefined4 uVar2;
  undefined local_24 [30];
  undefined2 uStack_6;
  
  uStack_6 = 0x59dc;
  FUN_1158_0444();
  uVar2 = FUN_10f0_2a04((int)DAT_1160_2c54,(int)((ulong)DAT_1160_2c54 >> 0x10));
  uVar1 = FUN_1128_21d2(uVar2);
  GETTEXTMETRICS(0x1128,local_24,unaff_SS);
  uVar1 = FUN_1158_0416(uVar1);
  return uVar1;
}



/* ---- FUN_1058_5a2d @ 1058:5a2d  (1112 octets) ---- */

void __cdecl16far FUN_1058_5a2d(undefined4 param_1)

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
  undefined2 uStack_41e;
  undefined *puStack_41c;
  undefined *puStack_41a;
  undefined local_410 [254];
  undefined local_312 [2];
  undefined local_310 [254];
  int local_212;
  undefined4 local_210;
  int local_208;
  undefined local_206 [256];
  undefined local_106 [256];
  int local_6;
  
  local_6 = 0x5a38;
  FUN_1158_0444();
  uVar9 = (undefined2)((ulong)param_1 >> 0x10);
  iVar6 = (int)param_1;
  puStack_41a = (undefined *)0x5a48;
  FUN_1058_627c();
  puStack_41a = local_106;
  puStack_41c = (undefined *)0x1058;
  uStack_41e = 0x5a53;
  FUN_10f0_204e();
  puStack_41a = local_106;
  puStack_41c = (undefined *)0x10f0;
  uStack_41e = 0x5a5e;
  FUN_1158_09f5();
  puStack_41a = (undefined *)0x5a63;
  FUN_1158_0408();
  puStack_41a = (undefined *)0x5a27;
  uStack_41e = DAT_1160_1858;
  DAT_1160_1858 = (undefined4 *)&uStack_41e;
  puStack_41c = &stack0xfffe;
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
    FUN_1158_0db5(0,0x5a16,uVar10);
    FUN_1158_0c78(puVar13,uVar14);
    uVar10 = 0x1158;
    FUN_1158_0408();
    if (iVar7 == 3) break;
    iVar7 = iVar7 + 1;
  }
  local_210 = *(undefined4 *)(iVar6 + 0x5f0);
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
        local_6 = FUN_1158_1878(local_206,unaff_SS,0x5a17,0x1158);
        if (0 < local_6) {
          FUN_1158_1975(1,local_6,local_206,unaff_SS);
          FUN_1158_1916(local_6,0xff,local_206,unaff_SS,0x5a19,0x1158);
        }
      } while (local_6 != 0);
      puVar13 = local_312;
      uVar10 = unaff_SS;
      FUN_1158_17cd(0x5a1b,0x1158);
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
  uVar3 = FUN_1058_59d1(&stack0xfffe);
  if (0xfffd < uVar3) {
    FUN_1158_043e(0x1058);
  }
  local_208 = FUN_1158_0416();
  puVar13 = local_410;
  uVar14 = unaff_SS;
  FUN_1158_17cd(0x5a1b,0x1158);
  puVar12 = local_310;
  uVar10 = unaff_SS;
  FUN_1138_1d53((int)*(undefined4 *)(iVar6 + 0x5d8),
                (int)((ulong)*(undefined4 *)(iVar6 + 0x5d8) >> 0x10));
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
  FUN_1158_17cd(0x5a1b,0x1128);
  puVar12 = local_310;
  uVar10 = unaff_SS;
  FUN_1138_1d53((int)*(undefined4 *)(iVar6 + 0x5dc),
                (int)((ulong)*(undefined4 *)(iVar6 + 0x5dc) >> 0x10));
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
  FUN_1158_17cd(0x5a1b,0x1128);
  puVar12 = local_310;
  uVar10 = unaff_SS;
  FUN_1138_1d53((int)*(undefined4 *)(iVar6 + 0x5e0),
                (int)((ulong)*(undefined4 *)(iVar6 + 0x5e0) >> 0x10));
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
  FUN_1158_17cd(0x5a1b,0x1128);
  puVar12 = local_310;
  uVar10 = unaff_SS;
  FUN_1138_1d53((int)*(undefined4 *)(iVar6 + 0x5e4),
                (int)((ulong)*(undefined4 *)(iVar6 + 0x5e4) >> 0x10));
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
  puStack_41c = (undefined *)0x1128;
  uStack_41e = 0x5e85;
  FUN_1158_0a4f(local_106,unaff_SS);
  FUN_1158_0408();
  FUN_1120_49e3((int)*(undefined4 *)(iVar6 + 0x5f0),
                (int)((ulong)*(undefined4 *)(iVar6 + 0x5f0) >> 0x10));
  return;
}



/* ---- TFormSERC_Compte_Copier1Click @ 1058:5e89  (71 octets) ---- */

void __stdcall16far TFormSERC_Compte_Copier1Click(undefined4 param_1)

{
  undefined2 uVar1;
  undefined2 uVar2;
  undefined2 unaff_CS;
  undefined4 uVar3;
  
  uVar3 = CONCAT22(unaff_CS,0x5e94);
  FUN_1158_0444();
  uVar1 = (undefined2)((ulong)param_1 >> 0x10);
  FUN_1058_627c((int)param_1,uVar1,0,uVar3);
  uVar3 = *(undefined4 *)((int)param_1 + 0x5f0);
  uVar2 = (undefined2)((ulong)uVar3 >> 0x10);
  uVar1 = (undefined2)uVar3;
  FUN_1120_4a3f(uVar1,uVar2);
  FUN_1120_49ff(uVar1,uVar2);
  FUN_1120_49e3(uVar1,uVar2);
  return;
}



/* ---- FUN_1058_5ed4 @ 1058:5ed4  (931 octets) ---- */

void __stdcall16far
FUN_1058_5ed4(int param_1,undefined param_2,int param_3,undefined4 param_4,undefined2 param_5,
             byte *param_6)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  byte *pbVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  undefined2 unaff_SS;
  undefined *puVar7;
  undefined2 uVar8;
  undefined local_208 [4];
  undefined local_204 [252];
  undefined4 local_108;
  uint local_104;
  byte local_102;
  char local_101;
  undefined2 uStack_6;
  
  uStack_6 = 0x5edf;
  FUN_1158_0444();
  uVar5 = (undefined2)((ulong)param_4 >> 0x10);
  iVar3 = (int)param_4;
  if (*(char *)(iVar3 + 0x29) != '\0') {
    local_102 = 0;
    pbVar4 = (byte *)param_6;
    uVar6 = (undefined2)((ulong)param_6 >> 0x10);
    if (*(int *)(param_1 + 10) == 0) {
      if (*param_6 != 0) {
        puVar7 = local_204;
        uVar8 = unaff_SS;
        FUN_1158_17cd(pbVar4,uVar6);
        FUN_1158_184c(0x5ed0,0x1158);
        FUN_1158_17e7(param_5,pbVar4,uVar6,puVar7,uVar8);
      }
    }
    else if (*(int *)(param_1 + 10) == 1) {
      local_104 = (uint)*param_6;
      while ((int)local_104 < param_3) {
        local_104 = local_104 + 1;
        puVar7 = local_204;
        uVar8 = unaff_SS;
        FUN_1158_17cd(pbVar4,uVar6);
        FUN_1158_184c(0x5ed2,0x1158);
        FUN_1158_17e7(param_5,pbVar4,uVar6,puVar7,uVar8);
      }
    }
    cVar1 = FUN_1158_2255(0x10c,0x1120,iVar3,uVar5);
    if (cVar1 != '\0') {
      local_108 = FUN_1158_2273(0x10c,0x1120,iVar3,uVar5);
      puVar7 = local_208;
      uVar8 = unaff_SS;
      FUN_1138_1d53(local_108);
      FUN_1158_17e7(0xff,&local_102,unaff_SS,puVar7,uVar8);
      while (local_101 == ' ' && local_102 != 0) {
        FUN_1158_1975(1,1,&local_102,unaff_SS);
      }
    }
    cVar1 = FUN_1158_2255(0xdad,0x1118,iVar3,uVar5);
    if (cVar1 != '\0') {
      local_108 = FUN_1158_2273(0xdad,0x1118,iVar3,uVar5);
      puVar7 = local_208;
      uVar8 = unaff_SS;
      FUN_1138_1d53(local_108);
      FUN_1158_17e7(0xff,&local_102,unaff_SS,puVar7,uVar8);
      while (local_101 == ' ' && local_102 != 0) {
        FUN_1158_1975(1,1,&local_102,unaff_SS);
      }
    }
    cVar1 = FUN_1158_2255(0x617,0x1120,iVar3,uVar5);
    if (cVar1 != '\0') {
      local_108 = FUN_1158_2273(0x617,0x1120,iVar3,uVar5);
      puVar7 = local_208;
      uVar8 = unaff_SS;
      FUN_1138_1d53(local_108);
      FUN_1158_17e7(0xff,&local_102,unaff_SS,puVar7,uVar8);
      while (local_101 == ' ' && local_102 != 0) {
        FUN_1158_1975(1,1,&local_102,unaff_SS);
      }
    }
    cVar1 = FUN_1158_2255(0x22,0x10d0,iVar3,uVar5);
    if (cVar1 != '\0') {
      local_108 = FUN_1158_2273(0x22,0x10d0,iVar3,uVar5);
      puVar7 = local_208;
      uVar5 = unaff_SS;
      FUN_1100_1524(local_108);
      FUN_1158_17e7(0xff,&local_102,unaff_SS,puVar7,uVar5);
    }
    if (*(int *)(param_1 + 10) == 1) {
      cVar1 = FUN_1158_1ef9(param_2);
      if (cVar1 == 'G') {
        while (local_101 == ' ' && local_102 != 0) {
          FUN_1158_1975(1,1,&local_102,unaff_SS);
        }
      }
      else if (cVar1 == 'C') {
        uVar2 = 0x12 - local_102;
        if (SBORROW2(0x12,(uint)local_102)) {
          uVar2 = FUN_1158_043e(0x1158);
        }
        local_104 = uVar2 >> 1;
        while (0 < (int)local_104) {
          local_104 = local_104 - 1;
          puVar7 = local_204;
          uVar5 = unaff_SS;
          FUN_1158_17cd(0x5ed2,0x1158);
          FUN_1158_184c(&local_102,unaff_SS);
          FUN_1158_17e7(0xff,&local_102,unaff_SS,puVar7,uVar5);
        }
      }
      else if (cVar1 == 'D') {
        uVar2 = 0x12 - local_102;
        if (SBORROW2(0x12,(uint)local_102)) {
          uVar2 = FUN_1158_043e(0x1158);
        }
        while (local_104 = uVar2, 0 < (int)local_104) {
          local_104 = local_104 - 1;
          puVar7 = local_204;
          uVar5 = unaff_SS;
          FUN_1158_17cd(0x5ed2,0x1158);
          FUN_1158_184c(&local_102,unaff_SS);
          FUN_1158_17e7(0xff,&local_102,unaff_SS,puVar7,uVar5);
          uVar2 = local_104;
        }
      }
    }
    puVar7 = local_204;
    uVar5 = unaff_SS;
    FUN_1158_17cd(pbVar4,uVar6);
    FUN_1158_184c(&local_102,unaff_SS);
    FUN_1158_17e7(param_5,pbVar4,uVar6,puVar7,uVar5);
  }
  return;
}



/* ---- FUN_1058_627c @ 1058:627c  (6452 octets) ---- */

void __stdcall16far FUN_1058_627c(undefined4 param_1,int param_2)

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
  
  uStack_6 = 0x6287;
  FUN_1158_0444();
  uVar4 = (undefined2)((ulong)param_1 >> 0x10);
  iVar3 = (int)param_1;
  local_104 = (undefined2)((ulong)*(undefined4 *)(iVar3 + 0x5f0) >> 0x10);
  local_106 = (int)*(undefined4 *)(iVar3 + 0x5f0);
  FUN_1120_49e3(local_106,local_104);
  local_102[0] = '\0';
  FUN_1058_5ed4(&stack0xfffe,0x67,0,*(undefined2 *)(iVar3 + 0x184),*(undefined2 *)(iVar3 + 0x186),
                0xff,local_102,unaff_SS);
  puVar5 = local_206;
  uVar8 = unaff_SS;
  FUN_1158_17cd(local_102,unaff_SS);
  FUN_1158_184c(0x6277,0x1158);
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
    (*(code *)*puVar1)(0x1158,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),0x6279,0x1158);
  }
  local_102[0] = '\0';
  FUN_1058_5ed4(&stack0xfffe,0x67,10,*(undefined2 *)(iVar3 + 0x18c),*(undefined2 *)(iVar3 + 0x18e),
                0xff,local_102,unaff_SS);
  puVar5 = local_206;
  uVar8 = unaff_SS;
  FUN_1158_17cd(local_102,unaff_SS);
  FUN_1158_184c(0x627a,0x1158);
  puVar7 = local_306;
  uVar6 = unaff_SS;
  FUN_1138_1d53((int)*(undefined4 *)(iVar3 + 400),(int)((ulong)*(undefined4 *)(iVar3 + 400) >> 0x10)
               );
  FUN_1158_184c(puVar7,uVar6);
  FUN_1158_17e7(0xff,local_102,unaff_SS,puVar5,uVar8);
  FUN_1058_5ed4(&stack0xfffe,0x67,0x25,*(undefined2 *)(iVar3 + 0x19c),*(undefined2 *)(iVar3 + 0x19e)
                ,0xff,local_102,unaff_SS);
  FUN_1058_5ed4(&stack0xfffe,0x67,0x46,*(undefined2 *)(iVar3 + 0x194),*(undefined2 *)(iVar3 + 0x196)
                ,0xff,local_102,unaff_SS);
  puVar5 = local_206;
  uVar8 = unaff_SS;
  FUN_1158_17cd(local_102,unaff_SS);
  FUN_1158_184c(0x627a,0x1158);
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
    (*(code *)*puVar1)(0x1158,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),0x6279,0x1158);
  }
  local_102[0] = '\0';
  FUN_1058_5ed4(&stack0xfffe,0x67,DAT_1160_022c,*(undefined2 *)(iVar3 + 0x43c),
                *(undefined2 *)(iVar3 + 0x43e),0xff,local_102,unaff_SS);
  FUN_1058_5ed4(&stack0xfffe,99,DAT_1160_0232,*(undefined2 *)(iVar3 + 0x448),
                *(undefined2 *)(iVar3 + 0x44a),0xff,local_102,unaff_SS);
  FUN_1058_5ed4(&stack0xfffe,99,DAT_1160_0234,*(undefined2 *)(iVar3 + 0x490),
                *(undefined2 *)(iVar3 + 0x492),0xff,local_102,unaff_SS);
  FUN_1058_5ed4(&stack0xfffe,99,DAT_1160_0236,*(undefined2 *)(iVar3 + 0x454),
                *(undefined2 *)(iVar3 + 0x456),0xff,local_102,unaff_SS);
  if (local_102[0] != '\0') {
    puVar2 = (undefined4 *)*(undefined4 *)(local_106 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)(0x1058,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),local_102);
  }
  local_102[0] = '\0';
  FUN_1058_5ed4(&stack0xfffe,0x67,DAT_1160_022e,*(undefined2 *)(iVar3 + 0x45c),
                *(undefined2 *)(iVar3 + 0x45e),0xff,local_102,unaff_SS);
  FUN_1058_5ed4(&stack0xfffe,100,DAT_1160_0232,*(undefined2 *)(iVar3 + 0x44c),
                *(undefined2 *)(iVar3 + 0x44e),0xff,local_102,unaff_SS);
  FUN_1058_5ed4(&stack0xfffe,100,DAT_1160_0234,*(undefined2 *)(iVar3 + 0x494),
                *(undefined2 *)(iVar3 + 0x496),0xff,local_102,unaff_SS);
  FUN_1058_5ed4(&stack0xfffe,100,DAT_1160_0236,*(undefined2 *)(iVar3 + 0x468),
                *(undefined2 *)(iVar3 + 0x46a),0xff,local_102,unaff_SS);
  if (local_102[0] != '\0') {
    puVar2 = (undefined4 *)*(undefined4 *)(local_106 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)(0x1058,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),local_102);
  }
  local_102[0] = '\0';
  FUN_1058_5ed4(&stack0xfffe,0x67,DAT_1160_022e,*(undefined2 *)(iVar3 + 0x4a8),
                *(undefined2 *)(iVar3 + 0x4aa),0xff,local_102,unaff_SS);
  FUN_1058_5ed4(&stack0xfffe,100,DAT_1160_0232,*(undefined2 *)(iVar3 + 0x478),
                *(undefined2 *)(iVar3 + 0x47a),0xff,local_102,unaff_SS);
  FUN_1058_5ed4(&stack0xfffe,100,DAT_1160_0234,*(undefined2 *)(iVar3 + 0x498),
                *(undefined2 *)(iVar3 + 0x49a),0xff,local_102,unaff_SS);
  FUN_1058_5ed4(&stack0xfffe,100,DAT_1160_0236,*(undefined2 *)(iVar3 + 0x480),
                *(undefined2 *)(iVar3 + 0x482),0xff,local_102,unaff_SS);
  if (local_102[0] != '\0') {
    puVar2 = (undefined4 *)*(undefined4 *)(local_106 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)(0x1058,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),local_102);
  }
  local_102[0] = '\0';
  FUN_1058_5ed4(&stack0xfffe,0x67,DAT_1160_022e,*(undefined2 *)(iVar3 + 0x4ac),
                *(undefined2 *)(iVar3 + 0x4ae),0xff,local_102,unaff_SS);
  FUN_1058_5ed4(&stack0xfffe,100,DAT_1160_0232,*(undefined2 *)(iVar3 + 0x47c),
                *(undefined2 *)(iVar3 + 0x47e),0xff,local_102,unaff_SS);
  FUN_1058_5ed4(&stack0xfffe,100,DAT_1160_0234,*(undefined2 *)(iVar3 + 0x49c),
                *(undefined2 *)(iVar3 + 0x49e),0xff,local_102,unaff_SS);
  FUN_1058_5ed4(&stack0xfffe,100,DAT_1160_0236,*(undefined2 *)(iVar3 + 0x484),
                *(undefined2 *)(iVar3 + 0x486),0xff,local_102,unaff_SS);
  if (local_102[0] != '\0') {
    puVar2 = (undefined4 *)*(undefined4 *)(local_106 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)(0x1058,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),local_102);
  }
  local_102[0] = '\0';
  FUN_1058_5ed4(&stack0xfffe,0x67,DAT_1160_022e,*(undefined2 *)(iVar3 + 0x460),
                *(undefined2 *)(iVar3 + 0x462),0xff,local_102,unaff_SS);
  FUN_1058_5ed4(&stack0xfffe,100,DAT_1160_0232,*(undefined2 *)(iVar3 + 0x450),
                *(undefined2 *)(iVar3 + 0x452),0xff,local_102,unaff_SS);
  FUN_1058_5ed4(&stack0xfffe,100,DAT_1160_0234,*(undefined2 *)(iVar3 + 0x4a0),
                *(undefined2 *)(iVar3 + 0x4a2),0xff,local_102,unaff_SS);
  FUN_1058_5ed4(&stack0xfffe,100,DAT_1160_0236,*(undefined2 *)(iVar3 + 0x46c),
                *(undefined2 *)(iVar3 + 0x46e),0xff,local_102,unaff_SS);
  if (local_102[0] != '\0') {
    puVar2 = (undefined4 *)*(undefined4 *)(local_106 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)(0x1058,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),local_102);
  }
  local_102[0] = '\0';
  FUN_1058_5ed4(&stack0xfffe,0x67,DAT_1160_022e,*(undefined2 *)(iVar3 + 0x458),
                *(undefined2 *)(iVar3 + 0x45a),0xff,local_102,unaff_SS);
  puVar5 = local_206;
  uVar6 = unaff_SS;
  FUN_1158_17cd(local_102,unaff_SS);
  FUN_1158_184c(0x6277,0x1158);
  FUN_1158_184c(0x6277,0x1158);
  FUN_1158_17e7(0xff,local_102,unaff_SS,puVar5,uVar6);
  FUN_1058_5ed4(&stack0xfffe,100,DAT_1160_0236,*(undefined2 *)(iVar3 + 0x464),
                *(undefined2 *)(iVar3 + 0x466),0xff,local_102,unaff_SS);
  if (local_102[0] != '\0') {
    puVar2 = (undefined4 *)*(undefined4 *)(local_106 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)(0x1058,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),local_102);
  }
  FUN_1158_17e7(0xff,local_102,unaff_SS,0x627a,0x1058);
  FUN_1058_5ed4(&stack0xfffe,100,DAT_1160_0232,*(undefined2 *)(iVar3 + 0x470),
                *(undefined2 *)(iVar3 + 0x472),0xff,local_102,unaff_SS);
  FUN_1058_5ed4(&stack0xfffe,100,DAT_1160_0234,*(undefined2 *)(iVar3 + 0x4a4),
                *(undefined2 *)(iVar3 + 0x4a6),0xff,local_102,unaff_SS);
  FUN_1058_5ed4(&stack0xfffe,100,DAT_1160_0236,*(undefined2 *)(iVar3 + 0x474),
                *(undefined2 *)(iVar3 + 0x476),0xff,local_102,unaff_SS);
  if (local_102[0] != '\0') {
    puVar2 = (undefined4 *)*(undefined4 *)(local_106 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)(0x1058,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),local_102);
  }
  if (param_2 == 1) {
    puVar2 = (undefined4 *)*(undefined4 *)(local_106 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)(0x1058,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),0x6279,0x1058);
  }
  local_102[0] = '\0';
  FUN_1058_5ed4(&stack0xfffe,0x67,DAT_1160_022c,*(undefined2 *)(iVar3 + 0x4b4),
                *(undefined2 *)(iVar3 + 0x4b6),0xff,local_102,unaff_SS);
  FUN_1058_5ed4(&stack0xfffe,99,DAT_1160_0232,*(undefined2 *)(iVar3 + 0x4c0),
                *(undefined2 *)(iVar3 + 0x4c2),0xff,local_102,unaff_SS);
  FUN_1058_5ed4(&stack0xfffe,99,DAT_1160_0234,*(undefined2 *)(iVar3 + 0x550),
                *(undefined2 *)(iVar3 + 0x552),0xff,local_102,unaff_SS);
  FUN_1058_5ed4(&stack0xfffe,99,DAT_1160_0236,*(undefined2 *)(iVar3 + 0x500),
                *(undefined2 *)(iVar3 + 0x502),0xff,local_102,unaff_SS);
  if (local_102[0] != '\0') {
    puVar2 = (undefined4 *)*(undefined4 *)(local_106 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)(0x1058,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),local_102);
  }
  local_102[0] = '\0';
  FUN_1058_5ed4(&stack0xfffe,0x67,DAT_1160_022e,*(undefined2 *)(iVar3 + 0x4c4),
                *(undefined2 *)(iVar3 + 0x4c6),0xff,local_102,unaff_SS);
  FUN_1058_5ed4(&stack0xfffe,100,DAT_1160_0232,*(undefined2 *)(iVar3 + 0x4e8),
                *(undefined2 *)(iVar3 + 0x4ea),0xff,local_102,unaff_SS);
  FUN_1058_5ed4(&stack0xfffe,100,DAT_1160_0234,*(undefined2 *)(iVar3 + 0x554),
                *(undefined2 *)(iVar3 + 0x556),0xff,local_102,unaff_SS);
  FUN_1058_5ed4(&stack0xfffe,100,DAT_1160_0236,*(undefined2 *)(iVar3 + 0x510),
                *(undefined2 *)(iVar3 + 0x512),0xff,local_102,unaff_SS);
  if (local_102[0] != '\0') {
    puVar2 = (undefined4 *)*(undefined4 *)(local_106 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)(0x1058,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),local_102);
  }
  local_102[0] = '\0';
  FUN_1058_5ed4(&stack0xfffe,0x67,DAT_1160_022e,*(undefined2 *)(iVar3 + 0x4cc),
                *(undefined2 *)(iVar3 + 0x4ce),0xff,local_102,unaff_SS);
  FUN_1058_5ed4(&stack0xfffe,100,DAT_1160_0232,*(undefined2 *)(iVar3 + 0x4f0),
                *(undefined2 *)(iVar3 + 0x4f2),0xff,local_102,unaff_SS);
  FUN_1058_5ed4(&stack0xfffe,100,DAT_1160_0234,*(undefined2 *)(iVar3 + 0x558),
                *(undefined2 *)(iVar3 + 0x55a),0xff,local_102,unaff_SS);
  FUN_1058_5ed4(&stack0xfffe,100,DAT_1160_0236,*(undefined2 *)(iVar3 + 0x518),
                *(undefined2 *)(iVar3 + 0x51a),0xff,local_102,unaff_SS);
  if (local_102[0] != '\0') {
    puVar2 = (undefined4 *)*(undefined4 *)(local_106 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)(0x1058,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),local_102);
  }
  local_102[0] = '\0';
  FUN_1058_5ed4(&stack0xfffe,0x67,DAT_1160_022e,*(undefined2 *)(iVar3 + 0x574),
                *(undefined2 *)(iVar3 + 0x576),0xff,local_102,unaff_SS);
  FUN_1058_5ed4(&stack0xfffe,100,DAT_1160_0232,*(undefined2 *)(iVar3 + 0x52c),
                *(undefined2 *)(iVar3 + 0x52e),0xff,local_102,unaff_SS);
  FUN_1058_5ed4(&stack0xfffe,100,DAT_1160_0234,*(undefined2 *)(iVar3 + 0x55c),
                *(undefined2 *)(iVar3 + 0x55e),0xff,local_102,unaff_SS);
  FUN_1058_5ed4(&stack0xfffe,100,DAT_1160_0236,*(undefined2 *)(iVar3 + 0x530),
                *(undefined2 *)(iVar3 + 0x532),0xff,local_102,unaff_SS);
  if (local_102[0] != '\0') {
    puVar2 = (undefined4 *)*(undefined4 *)(local_106 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)(0x1058,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),local_102);
  }
  local_102[0] = '\0';
  FUN_1058_5ed4(&stack0xfffe,0x67,DAT_1160_022e,*(undefined2 *)(iVar3 + 0x4d8),
                *(undefined2 *)(iVar3 + 0x4da),0xff,local_102,unaff_SS);
  FUN_1058_5ed4(&stack0xfffe,100,DAT_1160_0232,*(undefined2 *)(iVar3 + 0x4fc),
                *(undefined2 *)(iVar3 + 0x4fe),0xff,local_102,unaff_SS);
  FUN_1058_5ed4(&stack0xfffe,100,DAT_1160_0234,*(undefined2 *)(iVar3 + 0x56c),
                *(undefined2 *)(iVar3 + 0x56e),0xff,local_102,unaff_SS);
  FUN_1058_5ed4(&stack0xfffe,100,DAT_1160_0236,*(undefined2 *)(iVar3 + 0x524),
                *(undefined2 *)(iVar3 + 0x526),0xff,local_102,unaff_SS);
  if (local_102[0] != '\0') {
    puVar2 = (undefined4 *)*(undefined4 *)(local_106 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)(0x1058,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),local_102);
  }
  local_102[0] = '\0';
  FUN_1058_5ed4(&stack0xfffe,0x67,DAT_1160_022e,*(undefined2 *)(iVar3 + 0x4c8),
                *(undefined2 *)(iVar3 + 0x4ca),0xff,local_102,unaff_SS);
  FUN_1058_5ed4(&stack0xfffe,100,DAT_1160_0232,*(undefined2 *)(iVar3 + 0x4ec),
                *(undefined2 *)(iVar3 + 0x4ee),0xff,local_102,unaff_SS);
  FUN_1058_5ed4(&stack0xfffe,100,DAT_1160_0234,*(undefined2 *)(iVar3 + 0x560),
                *(undefined2 *)(iVar3 + 0x562),0xff,local_102,unaff_SS);
  FUN_1058_5ed4(&stack0xfffe,100,DAT_1160_0236,*(undefined2 *)(iVar3 + 0x514),
                *(undefined2 *)(iVar3 + 0x516),0xff,local_102,unaff_SS);
  if (local_102[0] != '\0') {
    puVar2 = (undefined4 *)*(undefined4 *)(local_106 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)(0x1058,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),local_102);
  }
  local_102[0] = '\0';
  FUN_1058_5ed4(&stack0xfffe,0x67,DAT_1160_022e,*(undefined2 *)(iVar3 + 0x4d0),
                *(undefined2 *)(iVar3 + 0x4d2),0xff,local_102,unaff_SS);
  FUN_1058_5ed4(&stack0xfffe,100,DAT_1160_0232,*(undefined2 *)(iVar3 + 0x4f4),
                *(undefined2 *)(iVar3 + 0x4f6),0xff,local_102,unaff_SS);
  FUN_1058_5ed4(&stack0xfffe,100,DAT_1160_0234,*(undefined2 *)(iVar3 + 0x564),
                *(undefined2 *)(iVar3 + 0x566),0xff,local_102,unaff_SS);
  FUN_1058_5ed4(&stack0xfffe,100,DAT_1160_0236,*(undefined2 *)(iVar3 + 0x51c),
                *(undefined2 *)(iVar3 + 0x51e),0xff,local_102,unaff_SS);
  if (local_102[0] != '\0') {
    puVar2 = (undefined4 *)*(undefined4 *)(local_106 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)(0x1058,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),local_102);
  }
  local_102[0] = '\0';
  FUN_1058_5ed4(&stack0xfffe,0x67,DAT_1160_022e,*(undefined2 *)(iVar3 + 0x4d4),
                *(undefined2 *)(iVar3 + 0x4d6),0xff,local_102,unaff_SS);
  FUN_1058_5ed4(&stack0xfffe,100,DAT_1160_0232,*(undefined2 *)(iVar3 + 0x4f8),
                *(undefined2 *)(iVar3 + 0x4fa),0xff,local_102,unaff_SS);
  FUN_1058_5ed4(&stack0xfffe,100,DAT_1160_0234,*(undefined2 *)(iVar3 + 0x568),
                *(undefined2 *)(iVar3 + 0x56a),0xff,local_102,unaff_SS);
  FUN_1058_5ed4(&stack0xfffe,100,DAT_1160_0236,*(undefined2 *)(iVar3 + 0x520),
                *(undefined2 *)(iVar3 + 0x522),0xff,local_102,unaff_SS);
  if (local_102[0] != '\0') {
    puVar2 = (undefined4 *)*(undefined4 *)(local_106 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)(0x1058,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),local_102);
  }
  local_102[0] = '\0';
  FUN_1058_5ed4(&stack0xfffe,0x67,DAT_1160_022e,*(undefined2 *)(iVar3 + 0x538),
                *(undefined2 *)(iVar3 + 0x53a),0xff,local_102,unaff_SS);
  puVar5 = local_206;
  uVar6 = unaff_SS;
  FUN_1158_17cd(local_102,unaff_SS);
  FUN_1158_184c(0x6277,0x1158);
  FUN_1158_184c(0x6277,0x1158);
  FUN_1158_17e7(0xff,local_102,unaff_SS,puVar5,uVar6);
  FUN_1058_5ed4(&stack0xfffe,100,DAT_1160_0236,*(undefined2 *)(iVar3 + 0x53c),
                *(undefined2 *)(iVar3 + 0x53e),0xff,local_102,unaff_SS);
  if (local_102[0] != '\0') {
    puVar2 = (undefined4 *)*(undefined4 *)(local_106 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)(0x1058,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),local_102);
  }
  local_102[0] = '\0';
  FUN_1058_5ed4(&stack0xfffe,0x67,DAT_1160_022e,*(undefined2 *)(iVar3 + 0x6fc),
                *(undefined2 *)(iVar3 + 0x6fe),0xff,local_102,unaff_SS);
  puVar5 = local_206;
  uVar6 = unaff_SS;
  FUN_1158_17cd(local_102,unaff_SS);
  FUN_1158_184c(0x6277,0x1158);
  FUN_1158_184c(0x6277,0x1158);
  FUN_1158_17e7(0xff,local_102,unaff_SS,puVar5,uVar6);
  FUN_1058_5ed4(&stack0xfffe,100,DAT_1160_0236,*(undefined2 *)(iVar3 + 0x704),
                *(undefined2 *)(iVar3 + 0x706),0xff,local_102,unaff_SS);
  if (local_102[0] != '\0') {
    puVar2 = (undefined4 *)*(undefined4 *)(local_106 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)(0x1058,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),local_102);
  }
  local_102[0] = '\0';
  FUN_1058_5ed4(&stack0xfffe,0x67,DAT_1160_022e,*(undefined2 *)(iVar3 + 0x4e0),
                *(undefined2 *)(iVar3 + 0x4e2),0xff,local_102,unaff_SS);
  puVar5 = local_206;
  uVar6 = unaff_SS;
  FUN_1158_17cd(local_102,unaff_SS);
  FUN_1158_184c(0x6277,0x1158);
  FUN_1158_184c(0x6277,0x1158);
  FUN_1158_17e7(0xff,local_102,unaff_SS,puVar5,uVar6);
  FUN_1058_5ed4(&stack0xfffe,100,DAT_1160_0236,*(undefined2 *)(iVar3 + 0x508),
                *(undefined2 *)(iVar3 + 0x50a),0xff,local_102,unaff_SS);
  if (local_102[0] != '\0') {
    puVar2 = (undefined4 *)*(undefined4 *)(local_106 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)(0x1058,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),local_102);
  }
  local_102[0] = '\0';
  FUN_1058_5ed4(&stack0xfffe,0x67,DAT_1160_022e,*(undefined2 *)(iVar3 + 0x700),
                *(undefined2 *)(iVar3 + 0x702),0xff,local_102,unaff_SS);
  puVar5 = local_206;
  uVar6 = unaff_SS;
  FUN_1158_17cd(local_102,unaff_SS);
  FUN_1158_184c(0x6277,0x1158);
  FUN_1158_184c(0x6277,0x1158);
  FUN_1158_17e7(0xff,local_102,unaff_SS,puVar5,uVar6);
  FUN_1058_5ed4(&stack0xfffe,100,DAT_1160_0236,*(undefined2 *)(iVar3 + 0x708),
                *(undefined2 *)(iVar3 + 0x70a),0xff,local_102,unaff_SS);
  if (local_102[0] != '\0') {
    puVar2 = (undefined4 *)*(undefined4 *)(local_106 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)(0x1058,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),local_102);
  }
  local_102[0] = '\0';
  FUN_1058_5ed4(&stack0xfffe,0x67,DAT_1160_022e,*(undefined2 *)(iVar3 + 0x4e4),
                *(undefined2 *)(iVar3 + 0x4e6),0xff,local_102,unaff_SS);
  puVar5 = local_206;
  uVar6 = unaff_SS;
  FUN_1158_17cd(local_102,unaff_SS);
  FUN_1158_184c(0x6277,0x1158);
  FUN_1158_184c(0x6277,0x1158);
  FUN_1158_17e7(0xff,local_102,unaff_SS,puVar5,uVar6);
  FUN_1058_5ed4(&stack0xfffe,100,DAT_1160_0236,*(undefined2 *)(iVar3 + 0x50c),
                *(undefined2 *)(iVar3 + 0x50e),0xff,local_102,unaff_SS);
  if (local_102[0] != '\0') {
    puVar2 = (undefined4 *)*(undefined4 *)(local_106 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)(0x1058,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),local_102);
  }
  local_102[0] = '\0';
  FUN_1058_5ed4(&stack0xfffe,0x67,DAT_1160_022e,*(undefined2 *)(iVar3 + 0x5f4),
                *(undefined2 *)(iVar3 + 0x5f6),0xff,local_102,unaff_SS);
  puVar5 = local_206;
  uVar6 = unaff_SS;
  FUN_1158_17cd(local_102,unaff_SS);
  FUN_1158_184c(0x6277,0x1158);
  FUN_1158_184c(0x6277,0x1158);
  FUN_1158_17e7(0xff,local_102,unaff_SS,puVar5,uVar6);
  FUN_1058_5ed4(&stack0xfffe,100,DAT_1160_0236,*(undefined2 *)(iVar3 + 0x5f8),
                *(undefined2 *)(iVar3 + 0x5fa),0xff,local_102,unaff_SS);
  if (local_102[0] != '\0') {
    puVar2 = (undefined4 *)*(undefined4 *)(local_106 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)(0x1058,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),local_102);
  }
  local_102[0] = '\0';
  FUN_1058_5ed4(&stack0xfffe,0x67,DAT_1160_022e,*(undefined2 *)(iVar3 + 0x640),
                *(undefined2 *)(iVar3 + 0x642),0xff,local_102,unaff_SS);
  puVar5 = local_206;
  uVar6 = unaff_SS;
  FUN_1158_17cd(local_102,unaff_SS);
  FUN_1158_184c(0x6277,0x1158);
  FUN_1158_184c(0x6277,0x1158);
  FUN_1158_17e7(0xff,local_102,unaff_SS,puVar5,uVar6);
  FUN_1058_5ed4(&stack0xfffe,100,DAT_1160_0236,*(undefined2 *)(iVar3 + 0x644),
                *(undefined2 *)(iVar3 + 0x646),0xff,local_102,unaff_SS);
  if (local_102[0] != '\0') {
    puVar2 = (undefined4 *)*(undefined4 *)(local_106 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)(0x1058,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),local_102);
  }
  local_102[0] = '\0';
  FUN_1058_5ed4(&stack0xfffe,0x67,DAT_1160_022e,*(undefined2 *)(iVar3 + 0x540),
                *(undefined2 *)(iVar3 + 0x542),0xff,local_102,unaff_SS);
  puVar5 = local_206;
  uVar6 = unaff_SS;
  FUN_1158_17cd(local_102,unaff_SS);
  FUN_1158_184c(0x6277,0x1158);
  FUN_1158_184c(0x6277,0x1158);
  FUN_1158_17e7(0xff,local_102,unaff_SS,puVar5,uVar6);
  FUN_1058_5ed4(&stack0xfffe,100,DAT_1160_0236,*(undefined2 *)(iVar3 + 0x544),
                *(undefined2 *)(iVar3 + 0x546),0xff,local_102,unaff_SS);
  if (local_102[0] != '\0') {
    puVar2 = (undefined4 *)*(undefined4 *)(local_106 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)(0x1058,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),local_102);
  }
  local_102[0] = '\0';
  FUN_1058_5ed4(&stack0xfffe,0x67,DAT_1160_022e,*(undefined2 *)(iVar3 + 0x4dc),
                *(undefined2 *)(iVar3 + 0x4de),0xff,local_102,unaff_SS);
  puVar5 = local_206;
  uVar6 = unaff_SS;
  FUN_1158_17cd(local_102,unaff_SS);
  FUN_1158_184c(0x6277,0x1158);
  FUN_1158_184c(0x6277,0x1158);
  FUN_1158_17e7(0xff,local_102,unaff_SS,puVar5,uVar6);
  FUN_1058_5ed4(&stack0xfffe,100,DAT_1160_0236,*(undefined2 *)(iVar3 + 0x504),
                *(undefined2 *)(iVar3 + 0x506),0xff,local_102,unaff_SS);
  if (local_102[0] != '\0') {
    puVar2 = (undefined4 *)*(undefined4 *)(local_106 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)(0x1058,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),local_102);
  }
  FUN_1158_17e7(0xff,local_102,unaff_SS,0x627a,0x1058);
  FUN_1058_5ed4(&stack0xfffe,100,DAT_1160_0232,*(undefined2 *)(iVar3 + 0x534),
                *(undefined2 *)(iVar3 + 0x536),0xff,local_102,unaff_SS);
  FUN_1058_5ed4(&stack0xfffe,100,DAT_1160_0234,*(undefined2 *)(iVar3 + 0x570),
                *(undefined2 *)(iVar3 + 0x572),0xff,local_102,unaff_SS);
  FUN_1058_5ed4(&stack0xfffe,100,DAT_1160_0236,*(undefined2 *)(iVar3 + 0x528),
                *(undefined2 *)(iVar3 + 0x52a),0xff,local_102,unaff_SS);
  if (local_102[0] != '\0') {
    puVar2 = (undefined4 *)*(undefined4 *)(local_106 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)(0x1058,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),local_102);
  }
  if (param_2 == 1) {
    puVar2 = (undefined4 *)*(undefined4 *)(local_106 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)(0x1058,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),0x6279,0x1058);
  }
  local_102[0] = '\0';
  FUN_1058_5ed4(&stack0xfffe,0x67,DAT_1160_022c,*(undefined2 *)(iVar3 + 0x57c),
                *(undefined2 *)(iVar3 + 0x57e),0xff,local_102,unaff_SS);
  if (local_102[0] != '\0') {
    puVar2 = (undefined4 *)*(undefined4 *)(local_106 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)(0x1058,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),local_102);
  }
  local_102[0] = '\0';
  FUN_1058_5ed4(&stack0xfffe,0x67,DAT_1160_022e,*(undefined2 *)(iVar3 + 0x580),
                *(undefined2 *)(iVar3 + 0x582),0xff,local_102,unaff_SS);
  puVar5 = local_206;
  uVar6 = unaff_SS;
  FUN_1158_17cd(local_102,unaff_SS);
  FUN_1158_184c(0x6277,0x1158);
  FUN_1158_17e7(0xff,local_102,unaff_SS,puVar5,uVar6);
  FUN_1058_5ed4(&stack0xfffe,100,DAT_1160_0234,*(undefined2 *)(iVar3 + 0x588),
                *(undefined2 *)(iVar3 + 0x58a),0xff,local_102,unaff_SS);
  if (local_102[0] != '\0') {
    puVar2 = (undefined4 *)*(undefined4 *)(local_106 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)(0x1058,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),local_102);
  }
  local_102[0] = '\0';
  FUN_1058_5ed4(&stack0xfffe,0x67,DAT_1160_022e,*(undefined2 *)(iVar3 + 0x584),
                *(undefined2 *)(iVar3 + 0x586),0xff,local_102,unaff_SS);
  puVar5 = local_206;
  uVar6 = unaff_SS;
  FUN_1158_17cd(local_102,unaff_SS);
  FUN_1158_184c(0x6277,0x1158);
  FUN_1158_17e7(0xff,local_102,unaff_SS,puVar5,uVar6);
  FUN_1058_5ed4(&stack0xfffe,100,DAT_1160_0234,*(undefined2 *)(iVar3 + 0x58c),
                *(undefined2 *)(iVar3 + 0x58e),0xff,local_102,unaff_SS);
  FUN_1058_5ed4(&stack0xfffe,100,DAT_1160_0236,*(undefined2 *)(iVar3 + 0x590),
                *(undefined2 *)(iVar3 + 0x592),0xff,local_102,unaff_SS);
  if (local_102[0] != '\0') {
    puVar2 = (undefined4 *)*(undefined4 *)(local_106 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)(0x1058,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),local_102);
  }
  if (param_2 == 1) {
    puVar2 = (undefined4 *)*(undefined4 *)(local_106 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)(0x1058,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),0x6279,0x1058);
  }
  local_102[0] = '\0';
  FUN_1058_5ed4(&stack0xfffe,0x67,DAT_1160_022c,*(undefined2 *)(iVar3 + 0x598),
                *(undefined2 *)(iVar3 + 0x59a),0xff,local_102,unaff_SS);
  if (local_102[0] != '\0') {
    puVar2 = (undefined4 *)*(undefined4 *)(local_106 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)(0x1058,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),local_102);
  }
  local_102[0] = '\0';
  FUN_1058_5ed4(&stack0xfffe,0x67,DAT_1160_022e,*(undefined2 *)(iVar3 + 0x5a4),
                *(undefined2 *)(iVar3 + 0x5a6),0xff,local_102,unaff_SS);
  puVar5 = local_206;
  uVar6 = unaff_SS;
  FUN_1158_17cd(local_102,unaff_SS);
  FUN_1158_184c(0x6277,0x1158);
  FUN_1158_184c(0x6277,0x1158);
  FUN_1158_17e7(0xff,local_102,unaff_SS,puVar5,uVar6);
  FUN_1058_5ed4(&stack0xfffe,100,DAT_1160_0236,*(undefined2 *)(iVar3 + 0x5b8),
                *(undefined2 *)(iVar3 + 0x5ba),0xff,local_102,unaff_SS);
  if (local_102[0] != '\0') {
    puVar2 = (undefined4 *)*(undefined4 *)(local_106 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)(0x1058,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),local_102);
  }
  local_102[0] = '\0';
  FUN_1058_5ed4(&stack0xfffe,0x67,DAT_1160_022e,*(undefined2 *)(iVar3 + 0x5a8),
                *(undefined2 *)(iVar3 + 0x5aa),0xff,local_102,unaff_SS);
  puVar5 = local_206;
  uVar6 = unaff_SS;
  FUN_1158_17cd(local_102,unaff_SS);
  FUN_1158_184c(0x6277,0x1158);
  FUN_1158_184c(0x6277,0x1158);
  FUN_1158_17e7(0xff,local_102,unaff_SS,puVar5,uVar6);
  FUN_1058_5ed4(&stack0xfffe,100,DAT_1160_0236,*(undefined2 *)(iVar3 + 0x5bc),
                *(undefined2 *)(iVar3 + 0x5be),0xff,local_102,unaff_SS);
  if (local_102[0] != '\0') {
    puVar2 = (undefined4 *)*(undefined4 *)(local_106 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)(0x1058,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),local_102);
  }
  local_102[0] = '\0';
  FUN_1058_5ed4(&stack0xfffe,0x67,DAT_1160_022e,*(undefined2 *)(iVar3 + 0x5cc),
                *(undefined2 *)(iVar3 + 0x5ce),0xff,local_102,unaff_SS);
  if (local_102[0] != '\0') {
    puVar2 = (undefined4 *)*(undefined4 *)(local_106 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)(0x1058,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),local_102);
  }
  local_102[0] = '\0';
  FUN_1058_5ed4(&stack0xfffe,0x67,DAT_1160_0230,*(undefined2 *)(iVar3 + 0x630),
                *(undefined2 *)(iVar3 + 0x632),0xff,local_102,unaff_SS);
  puVar5 = local_206;
  uVar6 = unaff_SS;
  FUN_1158_17cd(local_102,unaff_SS);
  FUN_1158_184c(0x6277,0x1158);
  FUN_1158_17e7(0xff,local_102,unaff_SS,puVar5,uVar6);
  FUN_1058_5ed4(&stack0xfffe,100,DAT_1160_0234,*(undefined2 *)(iVar3 + 0x624),
                *(undefined2 *)(iVar3 + 0x626),0xff,local_102,unaff_SS);
  if (local_102[0] != '\0') {
    puVar2 = (undefined4 *)*(undefined4 *)(local_106 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)(0x1058,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),local_102);
  }
  local_102[0] = '\0';
  FUN_1058_5ed4(&stack0xfffe,0x67,DAT_1160_0230,*(undefined2 *)(iVar3 + 0x634),
                *(undefined2 *)(iVar3 + 0x636),0xff,local_102,unaff_SS);
  puVar5 = local_206;
  uVar6 = unaff_SS;
  FUN_1158_17cd(local_102,unaff_SS);
  FUN_1158_184c(0x6277,0x1158);
  FUN_1158_17e7(0xff,local_102,unaff_SS,puVar5,uVar6);
  FUN_1058_5ed4(&stack0xfffe,100,DAT_1160_0234,*(undefined2 *)(iVar3 + 0x628),
                *(undefined2 *)(iVar3 + 0x62a),0xff,local_102,unaff_SS);
  FUN_1058_5ed4(&stack0xfffe,100,DAT_1160_0236,*(undefined2 *)(iVar3 + 0x5d0),
                *(undefined2 *)(iVar3 + 0x5d2),0xff,local_102,unaff_SS);
  if (local_102[0] != '\0') {
    puVar2 = (undefined4 *)*(undefined4 *)(local_106 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)(0x1058,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),local_102);
  }
  local_102[0] = '\0';
  FUN_1058_5ed4(&stack0xfffe,0x67,DAT_1160_022e,*(undefined2 *)(iVar3 + 0x654),
                *(undefined2 *)(iVar3 + 0x656),0xff,local_102,unaff_SS);
  puVar5 = local_206;
  uVar6 = unaff_SS;
  FUN_1158_17cd(local_102,unaff_SS);
  FUN_1158_184c(0x6277,0x1158);
  FUN_1158_184c(0x6277,0x1158);
  FUN_1158_17e7(0xff,local_102,unaff_SS,puVar5,uVar6);
  FUN_1058_5ed4(&stack0xfffe,100,DAT_1160_0236,*(undefined2 *)(iVar3 + 0x658),
                *(undefined2 *)(iVar3 + 0x65a),0xff,local_102,unaff_SS);
  if (local_102[0] != '\0') {
    puVar2 = (undefined4 *)*(undefined4 *)(local_106 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)(0x1058,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),local_102);
  }
  local_102[0] = '\0';
  FUN_1058_5ed4(&stack0xfffe,0x67,DAT_1160_022e,*(undefined2 *)(iVar3 + 0x5ac),
                *(undefined2 *)(iVar3 + 0x5ae),0xff,local_102,unaff_SS);
  puVar5 = local_206;
  uVar6 = unaff_SS;
  FUN_1158_17cd(local_102,unaff_SS);
  FUN_1158_184c(0x6277,0x1158);
  FUN_1158_184c(0x6277,0x1158);
  FUN_1158_17e7(0xff,local_102,unaff_SS,puVar5,uVar6);
  FUN_1058_5ed4(&stack0xfffe,100,DAT_1160_0236,*(undefined2 *)(iVar3 + 0x5c0),
                *(undefined2 *)(iVar3 + 0x5c2),0xff,local_102,unaff_SS);
  if (local_102[0] != '\0') {
    puVar2 = (undefined4 *)*(undefined4 *)(local_106 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)(0x1058,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),local_102);
  }
  local_102[0] = '\0';
  FUN_1058_5ed4(&stack0xfffe,0x67,DAT_1160_022e,*(undefined2 *)(iVar3 + 0x5b0),
                *(undefined2 *)(iVar3 + 0x5b2),0xff,local_102,unaff_SS);
  puVar5 = local_206;
  uVar6 = unaff_SS;
  FUN_1158_17cd(local_102,unaff_SS);
  FUN_1158_184c(0x6277,0x1158);
  FUN_1158_184c(0x6277,0x1158);
  FUN_1158_17e7(0xff,local_102,unaff_SS,puVar5,uVar6);
  FUN_1058_5ed4(&stack0xfffe,100,DAT_1160_0236,*(undefined2 *)(iVar3 + 0x5c4),
                *(undefined2 *)(iVar3 + 0x5c6),0xff,local_102,unaff_SS);
  if (local_102[0] != '\0') {
    puVar2 = (undefined4 *)*(undefined4 *)(local_106 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)(0x1058,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),local_102);
  }
  local_102[0] = '\0';
  FUN_1058_5ed4(&stack0xfffe,0x67,DAT_1160_022e,*(undefined2 *)(iVar3 + 0x5b4),
                *(undefined2 *)(iVar3 + 0x5b6),0xff,local_102,unaff_SS);
  puVar5 = local_206;
  uVar6 = unaff_SS;
  FUN_1158_17cd(local_102,unaff_SS);
  FUN_1158_184c(0x6277,0x1158);
  FUN_1158_184c(0x6277,0x1158);
  FUN_1158_17e7(0xff,local_102,unaff_SS,puVar5,uVar6);
  FUN_1058_5ed4(&stack0xfffe,100,DAT_1160_0236,*(undefined2 *)(iVar3 + 0x5c8),
                *(undefined2 *)(iVar3 + 0x5ca),0xff,local_102,unaff_SS);
  if (local_102[0] != '\0') {
    puVar2 = (undefined4 *)*(undefined4 *)(local_106 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)(0x1058,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),local_102);
  }
  return;
}



/* ---- TFormSERC_Compte_Situation1Click @ 1058:7bb0  (46 octets) ---- */

void __stdcall16far TFormSERC_Compte_Situation1Click(undefined4 param_1)

{
  int iVar1;
  undefined2 uVar2;
  
  FUN_1158_0444();
  DAT_1160_0144 = 0x15;
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  DAT_1160_0146 = *(undefined2 *)(iVar1 + 0x72c);
  DAT_1160_0148 = *(undefined2 *)(iVar1 + 0x72a);
  FUN_1140_5556(iVar1,uVar2);
  return;
}



/* ---- TFormSERC_Compte_CompteDeResultats1Click @ 1058:7bde  (46 octets) ---- */

void __stdcall16far TFormSERC_Compte_CompteDeResultats1Click(undefined4 param_1)

{
  int iVar1;
  undefined2 uVar2;
  
  FUN_1158_0444();
  DAT_1160_0144 = 0x16;
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  DAT_1160_0146 = *(undefined2 *)(iVar1 + 0x72c);
  DAT_1160_0148 = *(undefined2 *)(iVar1 + 0x72a);
  FUN_1140_5556(iVar1,uVar2);
  return;
}



/* ---- TFormSERC_Compte_Bilan1Click @ 1058:7c0c  (46 octets) ---- */

void __stdcall16far TFormSERC_Compte_Bilan1Click(undefined4 param_1)

{
  int iVar1;
  undefined2 uVar2;
  
  FUN_1158_0444();
  DAT_1160_0144 = 0x17;
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  DAT_1160_0146 = *(undefined2 *)(iVar1 + 0x72c);
  DAT_1160_0148 = *(undefined2 *)(iVar1 + 0x72a);
  FUN_1140_5556(iVar1,uVar2);
  return;
}



/* ---- TFormSERC_Compte_TableauDeFinancement1Click @ 1058:7c3a  (46 octets) ---- */

void __stdcall16far TFormSERC_Compte_TableauDeFinancement1Click(undefined4 param_1)

{
  int iVar1;
  undefined2 uVar2;
  
  FUN_1158_0444();
  DAT_1160_0144 = 0x18;
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  DAT_1160_0146 = *(undefined2 *)(iVar1 + 0x72c);
  DAT_1160_0148 = *(undefined2 *)(iVar1 + 0x72a);
  FUN_1140_5556(iVar1,uVar2);
  return;
}



/* ---- TFormSERC_Compte_TableauDeTresorerie1Click @ 1058:7c68  (46 octets) ---- */

void __stdcall16far TFormSERC_Compte_TableauDeTresorerie1Click(undefined4 param_1)

{
  int iVar1;
  undefined2 uVar2;
  
  FUN_1158_0444();
  DAT_1160_0144 = 0x19;
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  DAT_1160_0146 = *(undefined2 *)(iVar1 + 0x72c);
  DAT_1160_0148 = *(undefined2 *)(iVar1 + 0x72a);
  FUN_1140_5556(iVar1,uVar2);
  return;
}



/* ---- TFormSERC_Compte_SIG1Click @ 1058:7c96  (46 octets) ---- */

void __stdcall16far TFormSERC_Compte_SIG1Click(undefined4 param_1)

{
  int iVar1;
  undefined2 uVar2;
  
  FUN_1158_0444();
  DAT_1160_0144 = 0x1a;
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  DAT_1160_0146 = *(undefined2 *)(iVar1 + 0x72c);
  DAT_1160_0148 = *(undefined2 *)(iVar1 + 0x72a);
  FUN_1140_5556(iVar1,uVar2);
  return;
}



/* ---- TFormSERC_Compte_RappelDesDecisions1Click @ 1058:7cc4  (36 octets) ---- */

void __stdcall16far TFormSERC_Compte_RappelDesDecisions1Click(undefined4 param_1)

{
  undefined2 uVar1;
  
  FUN_1158_0444();
  uVar1 = (undefined2)((ulong)param_1 >> 0x10);
  FUN_1078_0ca1(*(undefined2 *)((int)param_1 + 0x72c),*(undefined2 *)((int)param_1 + 0x72a),
                DAT_1160_0150);
  return;
}




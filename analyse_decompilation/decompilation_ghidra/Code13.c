/* Simstrat (FR).EXE - segment Code13 - 53 fonctions
   Decompile par Ghidra 11.2.1 (x86 16 bits, chargeur NE). */

/* ---- FUN_1060_2292 @ 1060:2292  (43 octets) ---- */

void __stdcall16far FUN_1060_2292(undefined4 param_1)

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



/* ---- FUN_1060_22c3 @ 1060:22c3  (188 octets) ---- */

void __stdcall16far FUN_1060_22c3(undefined2 param_1,int param_2)

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
  
  _local_6 = CONCAT22(unaff_CS,0x22ce);
  FUN_1158_0444();
  uStack_c = (undefined2)((ulong)DAT_1160_2c2a >> 0x10);
  uStack_e = (undefined2)DAT_1160_2c2a;
  uStack_10 = 0x1158;
  uStack_12 = 0x22dc;
  FUN_1140_7303();
  if (param_2 < 1) {
    return;
  }
  uStack_c = DAT_1160_2c2a._2_2_;
  uStack_e = (undefined2)DAT_1160_2c2a;
  uStack_10 = CONCAT11(extraout_AH,1);
  uStack_12 = 0x1060;
  uStack_14 = 0x22;
  uStack_16 = 0x1140;
  uStack_18 = 0x22fd;
  local_a = FUN_1140_2553();
  uVar2 = (undefined2)((ulong)local_a >> 0x10);
  local_6 = (int)local_a;
  uStack_16 = 0x1140;
  uStack_18 = 0x22bd;
  uStack_1c = DAT_1160_1858;
  DAT_1160_1858 = &uStack_1c;
  *(undefined2 *)(local_6 + 0x7f4) = param_1;
  *(int *)(local_6 + 0x7f2) = param_2;
  puStack_1a = &stack0xfffe;
  FUN_1060_3038(local_a);
  FUN_1060_3ba7(local_a,*(undefined2 *)((int)local_a + 0x7f2));
  FUN_1138_1ed5(local_a,0xfff0,0xffff);
  FUN_1140_3a14(local_a,2);
  uVar1 = (int)local_a;
  FUN_1140_5d45(local_a);
  DAT_1160_1858 = (undefined2 *)uVar1;
  puStack_1a = (undefined *)0x1140;
  uStack_1c = 0x237b;
  FUN_1140_5f1d(local_6,uVar2);
  return;
}



/* ---- FUN_1060_2385 @ 1060:2385  (333 octets) ---- */

void __stdcall16far FUN_1060_2385(char param_1,undefined2 param_2,int param_3)

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
  
  _local_6 = CONCAT22(unaff_CS,0x2390);
  FUN_1158_0444();
  uStack_e = (undefined2)((ulong)DAT_1160_2c2a >> 0x10);
  uStack_10 = (undefined2)DAT_1160_2c2a;
  uStack_12 = 0x1158;
  uStack_14 = 0x239e;
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
  uStack_14 = 0x1060;
  uStack_16 = 0x22;
  uStack_18 = 0x1140;
  uStack_1a = 0x23e7;
  local_c = FUN_1140_2553();
  uVar3 = (undefined2)((ulong)local_c >> 0x10);
  local_6 = (int)local_c;
  uStack_18 = 0x1140;
  uStack_1a = 0x237f;
  uStack_1e = DAT_1160_1858;
  DAT_1160_1858 = &uStack_1e;
  *(undefined2 *)(local_6 + 0x7f4) = param_2;
  *(int *)(local_6 + 0x7f2) = param_3;
  puStack_1c = &stack0xfffe;
  FUN_1060_3038(local_c);
  FUN_1060_3ba7(local_c,*(undefined2 *)((int)local_c + 0x7f2));
  FUN_1138_1ed5(local_c,0xffff,0xff);
  FUN_1140_36b2(local_c,0,0);
  FUN_1140_3a14(local_c,2);
  FUN_1140_34e5(local_c,1);
  uVar2 = FUN_1138_62b9(local_c);
  SHOWWINDOW(0x1138,4);
  if (param_1 == '\0') {
    FUN_1140_7303((int)DAT_1160_2c2a,(int)((ulong)DAT_1160_2c2a >> 0x10));
    FUN_1010_311a((int)DAT_1160_2004,(int)((ulong)DAT_1160_2004 >> 0x10),
                  *(undefined2 *)(local_6 + 0x180),*(undefined2 *)(local_6 + 0x182),local_6,uVar3);
    uVar4 = 0x1140;
    FUN_1140_7303((int)DAT_1160_2c2a,(int)((ulong)DAT_1160_2c2a >> 0x10));
    DAT_1160_1858 = (undefined2 *)uVar2;
  }
  else {
    uVar4 = 0x1060;
    FUN_1060_56e6(local_6,uVar3);
    DAT_1160_1858 = (undefined2 *)uVar2;
  }
  puStack_1c = (undefined *)0x24ce;
  uStack_1e = uVar3;
  uStack_1a = uVar4;
  FUN_1140_5f1d(local_6);
  return;
}



/* ---- FUN_1060_24d2 @ 1060:24d2  (34 octets) ---- */

void __stdcall16far FUN_1060_24d2(undefined4 param_1)

{
  undefined2 uVar1;
  
  FUN_1158_0444();
  uVar1 = (undefined2)((ulong)param_1 >> 0x10);
  FUN_1060_2385(0,*(undefined2 *)((int)param_1 + 0x7f4),*(undefined2 *)((int)param_1 + 0x7f2));
  return;
}



/* ---- TFormSERS_Situation_Imprimer1Click @ 1060:24fa  (1 octets) ---- */

void TFormSERS_Situation_Imprimer1Click(undefined2 param_1,undefined4 param_2)

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
  
  uStack_6 = 0x2505;
  FUN_1158_0444();
  uVar3 = (undefined2)((ulong)param_2 >> 0x10);
  iVar2 = (int)param_2;
  uStack_c = (undefined2)((ulong)*(undefined4 *)(iVar2 + 0x250) >> 0x10);
  iStack_e = (int)*(undefined4 *)(iVar2 + 0x250);
  uStack_10 = 0x1158;
  pcStack_12 = (char *)0x2517;
  cVar1 = FUN_1108_2f17();
  if (cVar1 == '\0') {
    return;
  }
  uStack_6 = *(undefined2 *)(iVar2 + 0xe4);
  uStack_c = *(undefined2 *)(iVar2 + 0x182);
  iStack_e = *(undefined2 *)(iVar2 + 0x180);
  uStack_14 = 0x1108;
  uStack_16 = 0x2542;
  pcStack_12 = (char *)iVar2;
  uStack_10 = uVar3;
  FUN_1140_3fd0();
  uStack_10 = CONCAT11(extraout_AH,1);
  pcStack_12 = (char *)s_windows_1160_100f + 1;
  uStack_14 = 0x25b4;
  uStack_16 = 0x1140;
  uStack_18 = 0x2558;
  iStack_e = iVar2;
  uStack_c = uVar3;
  uStack_a = FUN_1140_2553();
  uStack_16 = 0x1140;
  uStack_18 = 0x24f4;
  uStack_1c = DAT_1160_1858;
  DAT_1160_1858 = &uStack_1c;
  puStack_1a = &stack0xfffe;
  DAT_1160_2004 = uStack_a;
  FUN_1010_2f8d(uStack_a,1);
  *(undefined2 *)((int)uStack_a + 0x2b9) = 0x24d2;
  *(undefined2 *)((int)uStack_a + 699) = 0x1060;
  *(int *)((int)uStack_a + 0x2bd) = iVar2;
  *(undefined2 *)((int)uStack_a + 0x2bf) = uVar3;
  iVar2 = (int)uStack_a;
  FUN_1140_5d45(uStack_a);
  DAT_1160_1858 = (undefined2 *)iVar2;
  puStack_1a = (undefined *)0x1140;
  uStack_1c = 0x25c1;
  FUN_1140_5f1d(DAT_1160_2004);
  return;
}



/* ---- FUN_1060_25fb @ 1060:25fb  (1136 octets) ---- */

void __stdcall16far FUN_1060_25fb(undefined4 param_1,undefined4 param_2)

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
  
  local_6 = 0x2606;
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



/* ---- TFormSERS_Situation_DBEdit1Exit @ 1060:2a6b  (77 octets) ---- */

void __stdcall16far
TFormSERS_Situation_DBEdit1Exit(undefined4 param_1,undefined2 param_2,undefined2 param_3)

{
  undefined4 uVar1;
  char cVar2;
  char cVar3;
  
  FUN_1158_0444();
  cVar2 = FUN_1158_2255(0xba2,0x10d0,param_2,param_3);
  cVar3 = FUN_1158_2255(0x22,0x10d0,param_2,param_3);
  if (cVar3 != '\0' || cVar2 != '\0') {
    uVar1 = *(undefined4 *)((int)param_1 + 0x274);
    FUN_1138_1c77((int)uVar1,(int)((ulong)uVar1 >> 0x10),0);
  }
  return;
}



/* ---- TFormSERS_Situation_DBEdit1KeyUp @ 1060:2ab8  (86 octets) ---- */

void __stdcall16far
TFormSERS_Situation_DBEdit1KeyUp
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
      uVar1 = *(undefined4 *)((int)param_1 + 0x274);
      FUN_1138_1c77((int)uVar1,(int)((ulong)uVar1 >> 0x10),0);
    }
  }
  return;
}



/* ---- TFormSERS_Situation_DBEdit1KeyDown @ 1060:2b21  (1 octets) ---- */

void TFormSERS_Situation_DBEdit1KeyDown
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
  undefined4 *puVar10;
  undefined4 uVar11;
  undefined *puVar12;
  undefined auStack_20e [4];
  undefined auStack_20a [244];
  long lStack_116;
  undefined4 *puStack_112;
  undefined4 uStack_10e;
  char acStack_10a [256];
  undefined4 uStack_a;
  undefined4 *puStack_6;
  
  puStack_6 = (undefined4 *)&DAT_1160_2b2c;
  FUN_1158_0444();
  if ((*param_4 == 0x70) && (cVar2 = FUN_1158_2255(0x5c1,0x1138,param_5,param_6), cVar2 != '\0')) {
    *param_4 = 0;
    FUN_1158_2273();
    FUN_1140_77b2();
  }
  if (*param_4 == 0x11) {
    uVar7 = (undefined2)((ulong)param_2 >> 0x10);
    iVar5 = (int)param_2;
    if (*(char *)((int)*(undefined4 *)(iVar5 + 0x274) + 0x29) == '\0') {
      acStack_10a[0] = '\0';
      cVar2 = FUN_1158_2255(0x22,0x10d0,param_5,param_6);
      if (cVar2 != '\0') {
        uStack_10e = FUN_1158_2273(0x22,0x10d0,param_5,param_6);
        puVar12 = auStack_20e;
        uVar8 = unaff_SS;
        FUN_10d0_1a9f(uStack_10e);
        uVar11 = FUN_10d0_1a5f((int)uStack_10e,(int)((ulong)uStack_10e >> 0x10));
        uVar11 = *(undefined4 *)((int)uVar11 + 0x1a);
        uStack_a = FUN_10d8_3b9b((int)uVar11,(int)((ulong)uVar11 >> 0x10),puVar12,uVar8);
        cVar2 = FUN_1158_2255(0xa58,(char *)s_iTime_1160_10dc + 4,uStack_a);
        if (cVar2 == '\0') {
          cVar2 = FUN_1158_2255(0x7c8,(char *)s_iTime_1160_10dc + 4,uStack_a);
          if (cVar2 == '\0') {
            FUN_1100_1524((int)uStack_10e,(int)((ulong)uStack_10e >> 0x10));
            FUN_1158_17e7();
          }
          else {
            puStack_112 = (undefined4 *)FUN_1158_2273(0x7c8,(char *)s_iTime_1160_10dc + 4,uStack_a);
            uVar9 = 0x1158;
            uVar8 = 0x2b19;
            puVar1 = (undefined2 *)((int)*puStack_112 + 0x44);
            lStack_116 = (*(code *)*puVar1)();
            FUN_1150_10d4((longdouble)lStack_116,uVar8,uVar9);
            FUN_1158_17e7();
          }
        }
        else {
          puStack_112 = (undefined4 *)FUN_1158_2273(0xa58,(char *)s_iTime_1160_10dc + 4,uStack_a);
          uVar9 = 0x1158;
          uVar8 = 0x2b0e;
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
        puStack_6 = (undefined4 *)iVar4;
        if (SBORROW2(iVar6,4)) {
          iVar3 = FUN_1158_043e(0x1158);
        }
        puVar10 = (undefined4 *)
                  FUN_1138_19d4((int)uStack_10e,(int)((ulong)uStack_10e >> 0x10),puStack_6,iVar3);
        unaff_CS = (undefined2)((ulong)puVar10 >> 0x10);
        puStack_6 = (undefined4 *)puVar10;
      }
      uVar8 = 0x1158;
      cVar2 = FUN_1158_2255(0xba2,0x10d0,param_5,param_6);
      puVar10 = (undefined4 *)CONCAT22(unaff_CS,puStack_6);
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
        puStack_6 = (undefined4 *)iVar4;
        if (SBORROW2(iVar6,4)) {
          iVar3 = FUN_1158_043e(0x1158);
        }
        uVar8 = 0x1138;
        puVar10 = (undefined4 *)
                  FUN_1138_19d4((int)uStack_10e,(int)((ulong)uStack_10e >> 0x10),puStack_6,iVar3);
      }
      puStack_6 = (undefined4 *)puVar10;
      if (acStack_10a[0] != '\0') {
        puVar12 = auStack_20a;
        uVar9 = unaff_SS;
        FUN_1158_17cd(0x2b1f,uVar8);
        FUN_1158_184c(acStack_10a,unaff_SS);
        FUN_1158_184c(0x2b1f,0x1158);
        FUN_1138_1d8c((int)*(undefined4 *)(iVar5 + 0x274),
                      (int)((ulong)*(undefined4 *)(iVar5 + 0x274) >> 0x10),puVar12,uVar9);
        uStack_10e = FUN_1140_33d5(iVar5,uVar7);
        uVar8 = (undefined2)((ulong)*(undefined4 *)(iVar5 + 0x274) >> 0x10);
        iVar6 = (int)*(undefined4 *)(iVar5 + 0x274);
        FUN_1128_2099(uStack_10e,*(undefined2 *)(iVar6 + 0x34),*(undefined2 *)(iVar6 + 0x36));
        puVar12 = auStack_20e;
        uVar8 = unaff_SS;
        FUN_1138_1d53((int)*(undefined4 *)(iVar5 + 0x274),
                      (int)((ulong)*(undefined4 *)(iVar5 + 0x274) >> 0x10));
        uVar8 = FUN_1128_2003(uStack_10e,puVar12,uVar8);
        FUN_1138_17bf((int)*(undefined4 *)(iVar5 + 0x274),
                      (int)((ulong)*(undefined4 *)(iVar5 + 0x274) >> 0x10),uVar8);
        puVar12 = auStack_20e;
        FUN_1138_1d53((int)*(undefined4 *)(iVar5 + 0x274),
                      (int)((ulong)*(undefined4 *)(iVar5 + 0x274) >> 0x10));
        iVar6 = FUN_1128_204e(uStack_10e,puVar12,unaff_SS);
        iVar4 = (int)((long)iVar6 * 3);
        if ((long)iVar4 != (long)iVar6 * 3) {
          iVar4 = FUN_1158_043e(0x1128);
        }
        FUN_1138_17e1((int)*(undefined4 *)(iVar5 + 0x274),
                      (int)((ulong)*(undefined4 *)(iVar5 + 0x274) >> 0x10),iVar4 / 2);
        uVar11 = FUN_1138_1a06(iVar5,uVar7,puStack_6,(int)((ulong)puVar10 >> 0x10));
        puStack_6 = (undefined4 *)uVar11;
        uStack_10e._2_2_ = (undefined2)((ulong)*(undefined4 *)(iVar5 + 0x274) >> 0x10);
        uStack_10e._0_2_ = (int)*(undefined4 *)(iVar5 + 0x274);
        FUN_1138_177b((int)uStack_10e,uStack_10e._2_2_,puStack_6);
        FUN_1138_179d((int)uStack_10e,uStack_10e._2_2_,(int)((ulong)uVar11 >> 0x10));
        while( true ) {
          uVar9 = 0x1138;
          uVar8 = FUN_1138_18a9(iVar5,uVar7);
          uVar11 = CONCAT22(uVar8,*(int *)((int)uStack_10e + 0x1e) +
                                  *(int *)((int)uStack_10e + 0x22));
          if (SCARRY2(*(int *)((int)uStack_10e + 0x1e),*(int *)((int)uStack_10e + 0x22))) {
            uVar9 = 0x1158;
            uVar11 = FUN_1158_043e(0x1138);
          }
          if ((int)uVar11 <= (int)((ulong)uVar11 >> 0x10)) break;
          iVar6 = *(int *)((int)uStack_10e + 0x1e) + -8;
          if (SBORROW2(*(int *)((int)uStack_10e + 0x1e),8)) {
            iVar6 = FUN_1158_043e(uVar9);
          }
          FUN_1138_177b((int)uStack_10e,uStack_10e._2_2_,iVar6);
        }
        while( true ) {
          uVar9 = 0x1138;
          uVar8 = FUN_1138_18f4(iVar5,uVar7);
          uVar11 = CONCAT22(uVar8,*(int *)((int)uStack_10e + 0x20) +
                                  *(int *)((int)uStack_10e + 0x24));
          if (SCARRY2(*(int *)((int)uStack_10e + 0x20),*(int *)((int)uStack_10e + 0x24))) {
            uVar9 = 0x1158;
            uVar11 = FUN_1158_043e(0x1138);
          }
          if ((int)uVar11 <= (int)((ulong)uVar11 >> 0x10)) break;
          iVar6 = *(int *)((int)uStack_10e + 0x20) + -8;
          if (SBORROW2(*(int *)((int)uStack_10e + 0x20),8)) {
            iVar6 = FUN_1158_043e(uVar9);
          }
          FUN_1138_179d((int)uStack_10e,uStack_10e._2_2_,iVar6);
        }
        FUN_1138_1c77((int)*(undefined4 *)(iVar5 + 0x274),
                      (int)((ulong)*(undefined4 *)(iVar5 + 0x274) >> 0x10),1);
      }
    }
  }
  return;
}



/* ---- FUN_1060_2fb0 @ 1060:2fb0  (136 octets) ---- */

void __stdcall16far FUN_1060_2fb0(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined4 uVar6;
  undefined2 uVar7;
  
  uVar7 = 0x2fbb;
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
        FUN_1060_25fb(uVar4,uVar5,uVar6);
      }
      if (iVar2 == iVar3) break;
      iVar2 = iVar2 + 1;
    }
  }
  return;
}



/* ---- FUN_1060_3038 @ 1060:3038  (678 octets) ---- */

void __stdcall16far FUN_1060_3038(undefined4 param_1)

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
  uVar4 = (undefined2)((ulong)*(undefined4 *)(iVar1 + 0x1ec) >> 0x10);
  uVar2 = (undefined2)*(undefined4 *)(iVar1 + 0x1ec);
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
  uVar4 = (undefined2)((ulong)*(undefined4 *)(iVar1 + 0x210) >> 0x10);
  uVar2 = (undefined2)*(undefined4 *)(iVar1 + 0x210);
  FUN_10d8_31d2(uVar2,uVar4);
  FUN_10e0_2ffb(uVar2,uVar4,1);
  FUN_10e0_2ed2(uVar2,uVar4,0);
  FUN_10d8_31bf(uVar2,uVar4);
  uVar4 = (undefined2)((ulong)*(undefined4 *)(iVar1 + 0x214) >> 0x10);
  uVar2 = (undefined2)*(undefined4 *)(iVar1 + 0x214);
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
  uVar4 = (undefined2)((ulong)*(undefined4 *)(iVar1 + 0x1f0) >> 0x10);
  uVar2 = (undefined2)*(undefined4 *)(iVar1 + 0x1f0);
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
  uVar4 = (undefined2)((ulong)*(undefined4 *)(iVar1 + 0x1fc) >> 0x10);
  uVar2 = (undefined2)*(undefined4 *)(iVar1 + 0x1fc);
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
  uVar4 = (undefined2)((ulong)*(undefined4 *)(iVar1 + 0x1f8) >> 0x10);
  uVar2 = (undefined2)*(undefined4 *)(iVar1 + 0x1f8);
  FUN_10d8_31d2(uVar2,uVar4);
  FUN_10e0_2ffb(uVar2,uVar4,1);
  FUN_10e0_2ed2(uVar2,uVar4,0);
  FUN_10d8_31bf(uVar2,uVar4);
  return;
}



/* ---- FUN_1060_32e8 @ 1060:32e8  (1801 octets) ---- */

void __stdcall16far FUN_1060_32e8(undefined4 param_1)

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
  
  uStack_6 = 0x32f3;
  FUN_1158_0444();
  puVar10 = local_204;
  uVar6 = (undefined2)((ulong)param_1 >> 0x10);
  iVar5 = (int)param_1;
  uVar7 = unaff_SS;
  FUN_1150_08a9(*(int *)(iVar5 + 0x7f4),*(int *)(iVar5 + 0x7f4) >> 0xf);
  FUN_1138_1d8c((int)*(undefined4 *)(iVar5 + 0x1b8),
                (int)((ulong)*(undefined4 *)(iVar5 + 0x1b8) >> 0x10),puVar10,uVar7);
  puVar10 = local_204;
  uVar7 = unaff_SS;
  FUN_1150_08a9(*(int *)(iVar5 + 0x7f2),*(int *)(iVar5 + 0x7f2) >> 0xf);
  FUN_1138_1d8c((int)*(undefined4 *)(iVar5 + 0x1c0),
                (int)((ulong)*(undefined4 *)(iVar5 + 0x1c0) >> 0x10),puVar10,uVar7);
  FUN_1158_17e7(0xff,local_104,unaff_SS,iVar5 + 0x7f6,uVar6);
  FUN_1158_1878(local_104,unaff_SS,0x32de,0x1158);
  cVar1 = FUN_1158_0416();
  if (cVar1 != '\0') {
    FUN_1158_1975(1,cVar1,local_104,unaff_SS);
    puVar10 = local_204;
    uVar7 = unaff_SS;
    FUN_1150_08a9(*(int *)(iVar5 + 0x7f2),*(int *)(iVar5 + 0x7f2) >> 0xf);
    FUN_1158_1916(cVar1,0xff,local_104,unaff_SS,puVar10,uVar7);
  }
  FUN_1158_1878(local_104,unaff_SS,0x32de,0x1158);
  cVar1 = FUN_1158_0416();
  if (cVar1 != '\0') {
    FUN_1158_1975(1,cVar1,local_104,unaff_SS);
    puVar10 = local_204;
    uVar7 = unaff_SS;
    FUN_1150_08a9(*(int *)(iVar5 + 0x7f4),*(int *)(iVar5 + 0x7f4) >> 0xf);
    FUN_1158_1916(cVar1,0xff,local_104,unaff_SS,puVar10,uVar7);
  }
  uVar7 = 0x1138;
  FUN_1138_1d8c(iVar5,uVar6,local_104,unaff_SS);
  local_108 = *(undefined4 *)(iVar5 + 0x794);
  bVar11 = 0;
  while( true ) {
    uVar2 = bVar11 + 1;
    if (SCARRY2((uint)bVar11,1)) {
      uVar2 = FUN_1158_043e(uVar7);
    }
    uVar3 = uVar2 & 0xff00;
    if (uVar2 == *(uint *)(iVar5 + 0x7f2)) {
      uVar3 = uVar3 + 1;
    }
    uVar9 = FUN_1130_1353((int)local_108,(int)((ulong)local_108 >> 0x10),bVar11);
    uVar7 = 0x1130;
    FUN_1130_1275(uVar9,uVar3);
    if (bVar11 == 0x13) break;
    bVar11 = bVar11 + 1;
  }
  local_108 = *(undefined4 *)(iVar5 + 0x24c);
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
    if (uVar2 == *(uint *)(iVar5 + 0x7f4)) {
      uVar3 = uVar3 + 1;
    }
    uVar9 = FUN_1130_1353((int)local_108,(int)((ulong)local_108 >> 0x10),bVar11);
    uVar7 = 0x1130;
    FUN_1130_1275(uVar9,uVar3);
    if (bVar11 == local_109) break;
    bVar11 = bVar11 + 1;
  }
  local_108._2_2_ = (undefined2)((ulong)*(undefined4 *)(iVar5 + 0x1dc) >> 0x10);
  local_108._0_2_ = (undefined2)*(undefined4 *)(iVar5 + 0x1dc);
  local_110 = *(int *)(iVar5 + 0x7f2) + -1;
  if (SBORROW2(*(int *)(iVar5 + 0x7f2),1)) {
    local_110 = FUN_1158_043e(0x1130);
  }
  local_10e = local_110 >> 0xf;
  local_10c = 0;
  cVar1 = FUN_10e0_2895((undefined2)local_108,local_108._2_2_,0,&local_110,unaff_SS);
  if (cVar1 == '\0') {
    FUN_1060_2292(iVar5,uVar6);
  }
  local_108 = *(undefined4 *)(iVar5 + 0x1ec);
  local_110 = *(int *)(iVar5 + 0x7f2);
  local_10e = local_110 >> 0xf;
  local_10c = 0;
  pcVar8 = (char *)s_iTime_1160_10dc + 4;
  cVar1 = FUN_10e0_2895((int)local_108,(int)((ulong)local_108 >> 0x10),0,&local_110,unaff_SS);
  if (cVar1 == '\0') {
    pcVar8 = (char *)0x1060;
    FUN_1060_2292(iVar5,uVar6);
  }
  local_108._2_2_ = (undefined2)((ulong)*(undefined4 *)(iVar5 + 0x1e4) >> 0x10);
  local_108._0_2_ = (undefined2)*(undefined4 *)(iVar5 + 0x1e4);
  local_120 = *(int *)(iVar5 + 0x7f2) + -1;
  if (SBORROW2(*(int *)(iVar5 + 0x7f2),1)) {
    local_120 = FUN_1158_043e(pcVar8);
  }
  local_11e = local_120 >> 0xf;
  local_11c = 0;
  local_118 = *(int *)(iVar5 + 0x7f4);
  local_116 = local_118 >> 0xf;
  local_114 = 0;
  local_110 = 1;
  local_10e = 0;
  local_10c = 0;
  pcVar8 = (char *)s_iTime_1160_10dc + 4;
  cVar1 = FUN_10e0_2895((undefined2)local_108,local_108._2_2_,2,&local_120,unaff_SS);
  if (cVar1 == '\0') {
    pcVar8 = (char *)0x1060;
    FUN_1060_2292(iVar5,uVar6);
  }
  local_108._2_2_ = (undefined2)((ulong)*(undefined4 *)(iVar5 + 0x1e8) >> 0x10);
  local_108._0_2_ = (undefined2)*(undefined4 *)(iVar5 + 0x1e8);
  iVar4 = *(int *)(iVar5 + 0x7f2) + -1;
  if (SBORROW2(*(int *)(iVar5 + 0x7f2),1)) {
    iVar4 = FUN_1158_043e(pcVar8);
  }
  local_11e = iVar4 >> 0xf;
  local_11c = 0;
  local_118 = *(int *)(iVar5 + 0x7f4);
  local_116 = local_118 >> 0xf;
  local_114 = 0;
  local_110 = 2;
  local_10e = 0;
  local_10c = 0;
  pcVar8 = (char *)s_iTime_1160_10dc + 4;
  local_120 = iVar4;
  cVar1 = FUN_10e0_2895((undefined2)local_108,local_108._2_2_,2,&local_120,unaff_SS);
  if (cVar1 == '\0') {
    pcVar8 = (char *)0x1060;
    FUN_1060_2292(iVar5,uVar6);
  }
  local_108._2_2_ = (undefined2)((ulong)*(undefined4 *)(iVar5 + 0x210) >> 0x10);
  local_108._0_2_ = (undefined2)*(undefined4 *)(iVar5 + 0x210);
  iVar4 = *(int *)(iVar5 + 0x7f2) + -1;
  if (SBORROW2(*(int *)(iVar5 + 0x7f2),1)) {
    iVar4 = FUN_1158_043e(pcVar8);
  }
  local_11e = iVar4 >> 0xf;
  local_11c = 0;
  local_118 = *(int *)(iVar5 + 0x7f4);
  local_116 = local_118 >> 0xf;
  local_114 = 0;
  local_110 = 1;
  local_10e = 0;
  local_10c = 0;
  pcVar8 = (char *)s_iTime_1160_10dc + 4;
  local_120 = iVar4;
  cVar1 = FUN_10e0_2895((undefined2)local_108,local_108._2_2_,2,&local_120,unaff_SS);
  if (cVar1 == '\0') {
    pcVar8 = (char *)0x1060;
    FUN_1060_2292(iVar5,uVar6);
  }
  local_108._2_2_ = (undefined2)((ulong)*(undefined4 *)(iVar5 + 0x214) >> 0x10);
  local_108._0_2_ = (undefined2)*(undefined4 *)(iVar5 + 0x214);
  iVar4 = *(int *)(iVar5 + 0x7f2) + -1;
  if (SBORROW2(*(int *)(iVar5 + 0x7f2),1)) {
    iVar4 = FUN_1158_043e(pcVar8);
  }
  local_11e = iVar4 >> 0xf;
  local_11c = 0;
  local_118 = *(int *)(iVar5 + 0x7f4);
  local_116 = local_118 >> 0xf;
  local_114 = 0;
  local_110 = 2;
  local_10e = 0;
  local_10c = 0;
  pcVar8 = (char *)s_iTime_1160_10dc + 4;
  local_120 = iVar4;
  cVar1 = FUN_10e0_2895((undefined2)local_108,local_108._2_2_,2,&local_120,unaff_SS);
  if (cVar1 == '\0') {
    pcVar8 = (char *)0x1060;
    FUN_1060_2292(iVar5,uVar6);
  }
  local_108._2_2_ = (undefined2)((ulong)*(undefined4 *)(iVar5 + 0x1e0) >> 0x10);
  local_108._0_2_ = (undefined2)*(undefined4 *)(iVar5 + 0x1e0);
  iVar4 = *(int *)(iVar5 + 0x7f2) + -1;
  if (SBORROW2(*(int *)(iVar5 + 0x7f2),1)) {
    iVar4 = FUN_1158_043e(pcVar8);
  }
  local_116 = iVar4 >> 0xf;
  local_114 = 0;
  local_110 = *(int *)(iVar5 + 0x7f4);
  local_10e = local_110 >> 0xf;
  local_10c = 0;
  local_118 = iVar4;
  cVar1 = FUN_10e0_2895((undefined2)local_108,local_108._2_2_,1,&local_118,unaff_SS);
  if (cVar1 == '\0') {
    FUN_1060_2292(iVar5,uVar6);
  }
  local_108 = *(undefined4 *)(iVar5 + 0x1f0);
  local_120 = *(int *)(iVar5 + 0x7f2);
  local_11e = local_120 >> 0xf;
  local_11c = 0;
  local_118 = *(int *)(iVar5 + 0x7f4);
  local_116 = local_118 >> 0xf;
  local_114 = 0;
  local_110 = 1;
  local_10e = 0;
  local_10c = 0;
  cVar1 = FUN_10e0_2895((int)local_108,(int)((ulong)local_108 >> 0x10),2,&local_120,unaff_SS);
  if (cVar1 == '\0') {
    FUN_1060_2292(iVar5,uVar6);
  }
  local_108 = *(undefined4 *)(iVar5 + 500);
  local_120 = *(int *)(iVar5 + 0x7f2);
  local_11e = local_120 >> 0xf;
  local_11c = 0;
  local_118 = *(int *)(iVar5 + 0x7f4);
  local_116 = local_118 >> 0xf;
  local_114 = 0;
  local_110 = 2;
  local_10e = 0;
  local_10c = 0;
  cVar1 = FUN_10e0_2895((int)local_108,(int)((ulong)local_108 >> 0x10),2,&local_120,unaff_SS);
  if (cVar1 == '\0') {
    FUN_1060_2292(iVar5,uVar6);
  }
  local_108 = *(undefined4 *)(iVar5 + 0x1fc);
  local_120 = *(int *)(iVar5 + 0x7f2);
  local_11e = local_120 >> 0xf;
  local_11c = 0;
  local_118 = *(int *)(iVar5 + 0x7f4);
  local_116 = local_118 >> 0xf;
  local_114 = 0;
  local_110 = 1;
  local_10e = 0;
  local_10c = 0;
  cVar1 = FUN_10e0_2895((int)local_108,(int)((ulong)local_108 >> 0x10),2,&local_120,unaff_SS);
  if (cVar1 == '\0') {
    FUN_1060_2292(iVar5,uVar6);
  }
  local_108 = *(undefined4 *)(iVar5 + 0x200);
  local_120 = *(int *)(iVar5 + 0x7f2);
  local_11e = local_120 >> 0xf;
  local_11c = 0;
  local_118 = *(int *)(iVar5 + 0x7f4);
  local_116 = local_118 >> 0xf;
  local_114 = 0;
  local_110 = 2;
  local_10e = 0;
  local_10c = 0;
  cVar1 = FUN_10e0_2895((int)local_108,(int)((ulong)local_108 >> 0x10),2,&local_120,unaff_SS);
  if (cVar1 == '\0') {
    FUN_1060_2292(iVar5,uVar6);
  }
  local_108 = *(undefined4 *)(iVar5 + 0x1f8);
  local_118 = *(int *)(iVar5 + 0x7f2);
  local_116 = local_118 >> 0xf;
  local_114 = 0;
  local_110 = *(int *)(iVar5 + 0x7f4);
  local_10e = local_110 >> 0xf;
  local_10c = 0;
  cVar1 = FUN_10e0_2895((int)local_108,(int)((ulong)local_108 >> 0x10),1,&local_118,unaff_SS);
  if (cVar1 == '\0') {
    FUN_1060_2292(iVar5,uVar6);
  }
  FUN_1060_2fb0(iVar5,uVar6);
  return;
}



/* ---- FUN_1060_39f1 @ 1060:39f1  (438 octets) ---- */

void __stdcall16far FUN_1060_39f1(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  
  FUN_1158_0444();
  uVar4 = (undefined2)((ulong)param_1 >> 0x10);
  iVar2 = (int)param_1;
  uVar5 = (undefined2)((ulong)*(undefined4 *)(iVar2 + 0x1ec) >> 0x10);
  uVar3 = (undefined2)*(undefined4 *)(iVar2 + 0x1ec);
  cVar1 = FUN_10d8_3202(uVar3,uVar5);
  if (cVar1 != '\0') {
    FUN_10d8_31d2(uVar3,uVar5);
  }
  uVar5 = (undefined2)((ulong)*(undefined4 *)(iVar2 + 0x1dc) >> 0x10);
  uVar3 = (undefined2)*(undefined4 *)(iVar2 + 0x1dc);
  cVar1 = FUN_10d8_3202(uVar3,uVar5);
  if (cVar1 != '\0') {
    FUN_10d8_31d2(uVar3,uVar5);
  }
  uVar5 = (undefined2)((ulong)*(undefined4 *)(iVar2 + 0x1e4) >> 0x10);
  uVar3 = (undefined2)*(undefined4 *)(iVar2 + 0x1e4);
  cVar1 = FUN_10d8_3202(uVar3,uVar5);
  if (cVar1 != '\0') {
    FUN_10d8_31d2(uVar3,uVar5);
  }
  uVar5 = (undefined2)((ulong)*(undefined4 *)(iVar2 + 0x1e8) >> 0x10);
  uVar3 = (undefined2)*(undefined4 *)(iVar2 + 0x1e8);
  cVar1 = FUN_10d8_3202(uVar3,uVar5);
  if (cVar1 != '\0') {
    FUN_10d8_31d2(uVar3,uVar5);
  }
  uVar5 = (undefined2)((ulong)*(undefined4 *)(iVar2 + 0x1e0) >> 0x10);
  uVar3 = (undefined2)*(undefined4 *)(iVar2 + 0x1e0);
  cVar1 = FUN_10d8_3202(uVar3,uVar5);
  if (cVar1 != '\0') {
    FUN_10d8_31d2(uVar3,uVar5);
  }
  uVar5 = (undefined2)((ulong)*(undefined4 *)(iVar2 + 0x210) >> 0x10);
  uVar3 = (undefined2)*(undefined4 *)(iVar2 + 0x210);
  cVar1 = FUN_10d8_3202(uVar3,uVar5);
  if (cVar1 != '\0') {
    FUN_10d8_31d2(uVar3,uVar5);
  }
  uVar5 = (undefined2)((ulong)*(undefined4 *)(iVar2 + 0x214) >> 0x10);
  uVar3 = (undefined2)*(undefined4 *)(iVar2 + 0x214);
  cVar1 = FUN_10d8_3202(uVar3,uVar5);
  if (cVar1 != '\0') {
    FUN_10d8_31d2(uVar3,uVar5);
  }
  uVar5 = (undefined2)((ulong)*(undefined4 *)(iVar2 + 0x1f0) >> 0x10);
  uVar3 = (undefined2)*(undefined4 *)(iVar2 + 0x1f0);
  cVar1 = FUN_10d8_3202(uVar3,uVar5);
  if (cVar1 != '\0') {
    FUN_10d8_31d2(uVar3,uVar5);
  }
  uVar5 = (undefined2)((ulong)*(undefined4 *)(iVar2 + 500) >> 0x10);
  uVar3 = (undefined2)*(undefined4 *)(iVar2 + 500);
  cVar1 = FUN_10d8_3202(uVar3,uVar5);
  if (cVar1 != '\0') {
    FUN_10d8_31d2(uVar3,uVar5);
  }
  uVar5 = (undefined2)((ulong)*(undefined4 *)(iVar2 + 0x1f8) >> 0x10);
  uVar3 = (undefined2)*(undefined4 *)(iVar2 + 0x1f8);
  cVar1 = FUN_10d8_3202(uVar3,uVar5);
  if (cVar1 != '\0') {
    FUN_10d8_31d2(uVar3,uVar5);
  }
  uVar5 = (undefined2)((ulong)*(undefined4 *)(iVar2 + 0x1fc) >> 0x10);
  uVar3 = (undefined2)*(undefined4 *)(iVar2 + 0x1fc);
  cVar1 = FUN_10d8_3202(uVar3,uVar5);
  if (cVar1 != '\0') {
    FUN_10d8_31d2(uVar3,uVar5);
  }
  uVar5 = (undefined2)((ulong)*(undefined4 *)(iVar2 + 0x200) >> 0x10);
  uVar3 = (undefined2)*(undefined4 *)(iVar2 + 0x200);
  cVar1 = FUN_10d8_3202(uVar3,uVar5);
  if (cVar1 != '\0') {
    FUN_10d8_31d2(uVar3,uVar5);
  }
  return;
}



/* ---- FUN_1060_3ba7 @ 1060:3ba7  (32 octets) ---- */

void __stdcall16far FUN_1060_3ba7(undefined4 param_1,undefined2 param_2)

{
  undefined2 uVar1;
  
  FUN_1158_0444();
  uVar1 = (undefined2)((ulong)param_1 >> 0x10);
  *(undefined2 *)((int)param_1 + 0x7f2) = param_2;
  FUN_1060_32e8((int)param_1,uVar1);
  return;
}



/* ---- FUN_1060_3bc7 @ 1060:3bc7  (32 octets) ---- */

void __stdcall16far FUN_1060_3bc7(undefined4 param_1,undefined2 param_2)

{
  undefined2 uVar1;
  
  FUN_1158_0444();
  uVar1 = (undefined2)((ulong)param_1 >> 0x10);
  *(undefined2 *)((int)param_1 + 0x7f4) = param_2;
  FUN_1060_32e8((int)param_1,uVar1);
  return;
}



/* ---- TFormSERS_Situation_FormCreate @ 1060:3bf7  (1 octets) ---- */

/* WARNING: Removing unreachable block (ram,0x10603e49) */

void TFormSERS_Situation_FormCreate(undefined2 param_1,undefined4 param_2)

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
  
  iStack_6 = 0x3c02;
  FUN_1158_0444();
  FUN_1158_17cd(0x3be7,0x1158);
  FUN_1158_184c(0x1dfa,0x1160);
  FUN_1158_184c(0x3bf3,0x1158);
  puVar14 = auStack_204;
  uVar8 = (undefined2)((ulong)param_2 >> 0x10);
  iVar7 = (int)param_2;
  uVar9 = unaff_SS;
  FUN_1138_1d53();
  FUN_1158_184c(puVar14,uVar9);
  FUN_1158_17e7();
  FUN_1138_1d8c((int)*(undefined4 *)(iVar7 + 0x1b0),
                (int)((ulong)*(undefined4 *)(iVar7 + 0x1b0) >> 0x10),0x1dfa,0x1160);
  *(undefined2 *)(iVar7 + 0x7f0) = 100;
  iVar2 = (uint)extraout_AH * 0x100;
  if (2 < DAT_1160_1e06) {
    iVar2 = iVar2 + 1;
  }
  FUN_1130_13a5((int)*(undefined4 *)(iVar7 + 0x760),
                (int)((ulong)*(undefined4 *)(iVar7 + 0x760) >> 0x10),iVar2);
  iVar2 = (uint)extraout_AH_00 * 0x100;
  if (2 < DAT_1160_1e06) {
    iVar2 = iVar2 + 1;
  }
  FUN_1130_13a5((int)*(undefined4 *)(iVar7 + 0x75c),
                (int)((ulong)*(undefined4 *)(iVar7 + 0x75c) >> 0x10),iVar2);
  iVar2 = (uint)extraout_AH_01 * 0x100;
  if (2 < DAT_1160_1e06) {
    iVar2 = iVar2 + 1;
  }
  FUN_1130_13a5((int)*(undefined4 *)(iVar7 + 0x7ec),
                (int)((ulong)*(undefined4 *)(iVar7 + 0x7ec) >> 0x10),iVar2);
  DAT_1160_0144 = 0xffff;
  DAT_1160_0146 = 0xffff;
  DAT_1160_0148 = 0xffff;
  iStack_6 = (int)((ulong)*(undefined4 *)(iVar7 + 0x24c) >> 0x10);
  uStack_a._2_2_ = (undefined2)*(undefined4 *)(iVar7 + 0x24c);
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
  iStack_6 = (int)((ulong)*(undefined4 *)(iVar7 + 0x794) >> 0x10);
  uStack_a._2_2_ = (undefined2)*(undefined4 *)(iVar7 + 0x794);
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
  FUN_1138_1d8c((int)*(undefined4 *)(iVar7 + 0x678),
                (int)((ulong)*(undefined4 *)(iVar7 + 0x678) >> 0x10),puVar14,uVar9);
  puVar14 = auStack_104;
  uVar12 = *(undefined4 *)((int)DAT_1160_18f6 + 0x250);
  uVar9 = unaff_SS;
  FUN_1138_1d53((int)uVar12,(int)((ulong)uVar12 >> 0x10));
  FUN_1138_1d8c((int)*(undefined4 *)(iVar7 + 0x67c),
                (int)((ulong)*(undefined4 *)(iVar7 + 0x67c) >> 0x10),puVar14,uVar9);
  puVar14 = auStack_104;
  uVar12 = *(undefined4 *)((int)DAT_1160_18f6 + 0x254);
  uVar9 = unaff_SS;
  FUN_1138_1d53((int)uVar12,(int)((ulong)uVar12 >> 0x10));
  FUN_1138_1d8c((int)*(undefined4 *)(iVar7 + 0x680),
                (int)((ulong)*(undefined4 *)(iVar7 + 0x680) >> 0x10),puVar14,uVar9);
  puVar14 = auStack_104;
  uVar12 = *(undefined4 *)((int)DAT_1160_18f6 + 0x248);
  uVar16 = unaff_SS;
  FUN_1138_1d53((int)uVar12,(int)((ulong)uVar12 >> 0x10));
  FUN_1158_184c(0x3bf3,0x1138);
  puVar15 = auStack_204;
  uVar9 = unaff_SS;
  FUN_1150_15fe(puVar15);
  FUN_1150_1cbf((double)in_ST0);
  FUN_1158_184c(puVar15,uVar9);
  FUN_1158_184c(0x3bf3,0x1158);
  puVar15 = auStack_304;
  FUN_1150_15fe(puVar15);
  FUN_1150_1ce4((double)in_ST1);
  FUN_1158_184c(puVar15,unaff_SS);
  FUN_1158_184c(0x3bf3,0x1158);
  FUN_1138_1d8c((int)*(undefined4 *)(iVar7 + 0x684),
                (int)((ulong)*(undefined4 *)(iVar7 + 0x684) >> 0x10),puVar14,uVar16);
  FUN_10e0_3017((int)*(undefined4 *)(iVar7 + 0x1dc),
                (int)((ulong)*(undefined4 *)(iVar7 + 0x1dc) >> 0x10),0x1e32,0x1160);
  FUN_10e0_3017((int)*(undefined4 *)(iVar7 + 0x1e4),
                (int)((ulong)*(undefined4 *)(iVar7 + 0x1e4) >> 0x10),0x1e5c,0x1160);
  FUN_10e0_3017((int)*(undefined4 *)(iVar7 + 0x1e8),
                (int)((ulong)*(undefined4 *)(iVar7 + 0x1e8) >> 0x10),0x1e5c,0x1160);
  FUN_10e0_3017((int)*(undefined4 *)(iVar7 + 0x1e0),
                (int)((ulong)*(undefined4 *)(iVar7 + 0x1e0) >> 0x10),0x1e78,0x1160);
  FUN_10e0_3017((int)*(undefined4 *)(iVar7 + 0x210),
                (int)((ulong)*(undefined4 *)(iVar7 + 0x210) >> 0x10),0x1e86,0x1160);
  FUN_10e0_3017((int)*(undefined4 *)(iVar7 + 0x214),
                (int)((ulong)*(undefined4 *)(iVar7 + 0x214) >> 0x10),0x1e86,0x1160);
  FUN_10e0_3017((int)*(undefined4 *)(iVar7 + 0x1f0),
                (int)((ulong)*(undefined4 *)(iVar7 + 0x1f0) >> 0x10),0x1e5c,0x1160);
  FUN_10e0_3017((int)*(undefined4 *)(iVar7 + 500),(int)((ulong)*(undefined4 *)(iVar7 + 500) >> 0x10)
                ,0x1e5c,0x1160);
  FUN_10e0_3017((int)*(undefined4 *)(iVar7 + 0x1ec),
                (int)((ulong)*(undefined4 *)(iVar7 + 0x1ec) >> 0x10),0x1e32,0x1160);
  FUN_10e0_3017((int)*(undefined4 *)(iVar7 + 0x1f8),
                (int)((ulong)*(undefined4 *)(iVar7 + 0x1f8) >> 0x10),0x1e78,0x1160);
  FUN_10e0_3017((int)*(undefined4 *)(iVar7 + 0x1fc),
                (int)((ulong)*(undefined4 *)(iVar7 + 0x1fc) >> 0x10),0x1e86,0x1160);
  FUN_10e0_3017((int)*(undefined4 *)(iVar7 + 0x200),
                (int)((ulong)*(undefined4 *)(iVar7 + 0x200) >> 0x10),0x1e86,0x1160);
  *(undefined2 *)(iVar7 + 0x7f4) = 1;
  iVar2 = DAT_1160_014c + -1;
  if (SBORROW2(DAT_1160_014c,1)) {
    iVar2 = FUN_1158_043e((char *)s_iTime_1160_10dc + 4);
  }
  *(int *)(iVar7 + 0x7f2) = iVar2;
  return;
}



/* ---- TFormSERS_Situation_FormShow @ 1060:406e  (27 octets) ---- */

void __stdcall16far TFormSERS_Situation_FormShow(void)

{
  FUN_1158_0444();
  FUN_1140_63a9((int)DAT_1160_2c2e,(int)((ulong)DAT_1160_2c2e >> 0x10),0xfffe);
  return;
}



/* ---- TFormSERS_Situation_FormClose @ 1060:4089  (31 octets) ---- */

void __stdcall16far TFormSERS_Situation_FormClose(undefined4 param_1,undefined *param_2)

{
  FUN_1158_0444();
  FUN_1060_39f1((int)param_1,(int)((ulong)param_1 >> 0x10));
  *param_2 = 1;
  return;
}



/* ---- TFormSERS_Situation_Quitter1Click @ 1060:40a8  (24 octets) ---- */

void __stdcall16far TFormSERS_Situation_Quitter1Click(undefined4 param_1)

{
  FUN_1158_0444();
  FUN_1140_5556((int)param_1,(int)((ulong)param_1 >> 0x10));
  return;
}



/* ---- TFormSERS_Situation_PleinEcran1Click @ 1060:40c0  (48 octets) ---- */

void __stdcall16far TFormSERS_Situation_PleinEcran1Click(undefined4 param_1)

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



/* ---- TFormSERS_Situation_N1001Click @ 1060:40fc  (1 octets) ---- */

void TFormSERS_Situation_N1001Click
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
  iVar11 = *(int *)(iVar6 + 0x7f0);
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
  if (iVar11 != *(int *)(iVar6 + 0x7f0)) {
    FUN_1138_5df4(iVar6,uVar8,*(undefined2 *)(iVar6 + 0x7f0),iVar11);
    *(int *)(iVar6 + 0x7f0) = iVar11;
  }
  return;
}



/* ---- TFormSERS_Situation_FormResize @ 1060:4219  (41 octets) ---- */

void __stdcall16far TFormSERS_Situation_FormResize(undefined4 param_1)

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



/* ---- TFormSERS_Situation_Barredoutils1Click @ 1060:4242  (21 octets) ---- */

void __stdcall16far TFormSERS_Situation_Barredoutils1Click(void)

{
  FUN_1158_0444();
  MESSAGEBEEP(0x1158,0);
  return;
}



/* ---- TFormSERS_Situation_Periode1Click @ 1060:4257  (71 octets) ---- */

void __stdcall16far TFormSERS_Situation_Periode1Click(undefined4 param_1)

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
  iVar1 = FUN_1000_3e32(*(undefined2 *)(iVar2 + 0x7f2),iVar1);
  if (iVar1 != *(int *)(iVar2 + 0x7f2)) {
    FUN_1060_3ba7(iVar2,uVar3,iVar1);
  }
  return;
}



/* ---- TFormSERS_Situation_N12Click @ 1060:429e  (246 octets) ---- */

void __stdcall16far
TFormSERS_Situation_N12Click(undefined4 param_1,undefined2 param_2,undefined2 param_3)

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
    iVar4 = *(int *)(iVar5 + 0x7f2);
    uVar8 = FUN_1158_2273(0x94,0x1130,param_2,param_3);
    uVar7 = 0x1130;
    uVar2 = FUN_1130_162b((int)*(undefined4 *)(iVar5 + 0x794),
                          (int)((ulong)*(undefined4 *)(iVar5 + 0x794) >> 0x10),uVar8);
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
      iVar4 = FUN_1000_3e32(*(undefined2 *)(iVar5 + 0x7f2),iVar4);
    }
    if (iVar4 != *(int *)(iVar5 + 0x7f2)) {
      FUN_1060_3ba7(iVar5,uVar6,iVar4);
    }
  }
  return;
}



/* ---- TFormSERS_Situation_N11Click @ 1060:439c  (1 octets) ---- */

void TFormSERS_Situation_N11Click
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
  
  uStack_8 = CONCAT22(0x43a7,(undefined2)uStack_8);
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
      FUN_1060_3bc7((int)param_2,(int)((ulong)param_2 >> 0x10),iVar2);
    }
  }
  return;
}



/* ---- TFormSERS_Situation_TableERG_oldCalcFields @ 1060:4491  (1 octets) ---- */

void TFormSERS_Situation_TableERG_oldCalcFields
               (undefined2 param_1,undefined4 param_2,undefined2 param_3,undefined2 param_4)

{
  undefined2 *puVar1;
  int iVar2;
  undefined2 uVar3;
  longdouble in_ST0;
  longdouble in_ST1;
  longdouble lVar4;
  longdouble in_ST2;
  longdouble in_ST3;
  longdouble in_ST4;
  longdouble in_ST5;
  longdouble in_ST6;
  undefined4 uVar5;
  undefined4 *puVar6;
  long lVar7;
  undefined4 *puVar8;
  double dVar9;
  uint uVar10;
  undefined2 uVar11;
  
  FUN_1158_0444();
  uVar5 = FUN_1158_2273(0x138,(char *)s_iTime_1160_10dc + 4,param_3,param_4);
  uVar3 = (undefined2)((ulong)param_2 >> 0x10);
  iVar2 = (int)param_2;
  if (*(int *)(iVar2 + 0x7f2) == 1) {
    puVar6 = (undefined4 *)
             FUN_10d8_3b9b((int)uVar5,CONCAT42(0x11584440,(int)((ulong)uVar5 >> 0x10)));
    puVar1 = (undefined2 *)((int)*puVar6 + 0x5c);
    in_ST5 = in_ST3;
    (*(code *)*puVar1)();
    in_ST3 = in_ST1;
  }
  else {
    puVar6 = (undefined4 *)FUN_10d8_3b9b(uVar5,0x4453,0x1158);
    puVar1 = (undefined2 *)((int)*puVar6 + 0x44);
    lVar7 = (*(code *)*puVar1)(0x10d8,puVar6);
    puVar6 = (undefined4 *)FUN_10d8_3b9b();
    puVar1 = (undefined2 *)((int)*puVar6 + 0x40);
    (*(code *)*puVar1)();
    lVar4 = (longdouble)lVar7 * in_ST0;
    in_ST0 = in_ST2;
    in_ST2 = in_ST4;
    in_ST4 = in_ST6;
    FUN_1080_2fa6((double)lVar4);
    dVar9 = (double)in_ST1;
    puVar8 = (undefined4 *)FUN_10d8_3b9b(uVar5,0x4440,0x1080);
    puVar1 = (undefined2 *)((int)*puVar8 + 0x5c);
    (*(code *)*puVar1)(0x10d8,puVar8,dVar9,puVar6);
  }
  puVar6 = (undefined4 *)
           FUN_10d8_3b9b((int)*(undefined4 *)(iVar2 + 0x1e4),
                         (int)((ulong)*(undefined4 *)(iVar2 + 0x1e4) >> 0x10),0x446d);
  puVar1 = (undefined2 *)((int)*puVar6 + 0x40);
  (*(code *)*puVar1)(0x10d8,(undefined4 *)puVar6);
  uVar10 = (uint)(in_ST0 != (longdouble)0.0);
  puVar6 = (undefined4 *)
           FUN_10d8_3b9b((int)*(undefined4 *)(iVar2 + 0x1e8),
                         (int)((ulong)*(undefined4 *)(iVar2 + 0x1e8) >> 0x10),0x446d,0x1060);
  puVar1 = (undefined2 *)((int)*puVar6 + 0x40);
  (*(code *)*puVar1)(0x10d8,puVar6);
  if (in_ST3 != (longdouble)0.0) {
    uVar10 = uVar10 + 1;
  }
  uVar11 = 0;
  puVar6 = (undefined4 *)FUN_10d8_3b9b(uVar5,0x4476,0x1060);
  puVar1 = (undefined2 *)((int)*puVar6 + 0x60);
  (*(code *)*puVar1)(0x10d8,puVar6,uVar10,uVar11);
  puVar6 = (undefined4 *)
           FUN_10d8_3b9b((int)*(undefined4 *)(iVar2 + 0x210),
                         (int)((ulong)*(undefined4 *)(iVar2 + 0x210) >> 0x10),0x4485,0x10d8);
  puVar1 = (undefined2 *)((int)*puVar6 + 0x40);
  (*(code *)*puVar1)(0x10d8,puVar6);
  puVar6 = (undefined4 *)FUN_10d8_3b9b();
  puVar1 = (undefined2 *)((int)*puVar6 + 0x40);
  (*(code *)*puVar1)();
  FUN_1080_2fa6((double)(in_ST2 + in_ST5));
  dVar9 = (double)in_ST4;
  puVar8 = (undefined4 *)FUN_10d8_3b9b(uVar5,0x4485,0x1080);
  puVar1 = (undefined2 *)((int)*puVar8 + 0x5c);
  (*(code *)*puVar1)(0x10d8,puVar8,dVar9,puVar6);
  return;
}



/* ---- TFormSERS_Situation_TableERGCalcFields @ 1060:46e3  (1 octets) ---- */

void TFormSERS_Situation_TableERGCalcFields
               (undefined2 param_1,undefined4 param_2,undefined2 param_3,undefined2 param_4)

{
  undefined2 *puVar1;
  int iVar2;
  undefined2 uVar3;
  longdouble in_ST0;
  longdouble in_ST1;
  longdouble in_ST2;
  longdouble in_ST3;
  longdouble in_ST4;
  longdouble in_ST5;
  longdouble in_ST6;
  undefined4 uVar4;
  undefined4 *puVar5;
  long lVar6;
  undefined4 *puVar7;
  double dVar8;
  uint uVar9;
  undefined2 uVar10;
  
  FUN_1158_0444();
  uVar4 = FUN_1158_2273(0x138,(char *)s_iTime_1160_10dc + 4,param_3,param_4);
  puVar5 = (undefined4 *)FUN_10d8_3b9b(uVar4,0x46a5,0x1158);
  puVar1 = (undefined2 *)((int)*puVar5 + 0x44);
  lVar6 = (*(code *)*puVar1)(0x10d8,puVar5);
  uVar3 = (undefined2)((ulong)param_2 >> 0x10);
  iVar2 = (int)param_2;
  puVar5 = (undefined4 *)FUN_10d8_3b9b();
  puVar1 = (undefined2 *)((int)*puVar5 + 0x40);
  (*(code *)*puVar1)();
  FUN_1080_2fa6((double)((longdouble)lVar6 * in_ST0));
  dVar8 = (double)in_ST1;
  puVar7 = (undefined4 *)FUN_10d8_3b9b(uVar4,0x4692,0x1080);
  puVar1 = (undefined2 *)((int)*puVar7 + 0x5c);
  (*(code *)*puVar1)(0x10d8,puVar7,dVar8,puVar5);
  puVar5 = (undefined4 *)
           FUN_10d8_3b9b((int)*(undefined4 *)(iVar2 + 0x1f0),
                         (int)((ulong)*(undefined4 *)(iVar2 + 0x1f0) >> 0x10),0x46bf,0x10d8);
  puVar1 = (undefined2 *)((int)*puVar5 + 0x40);
  (*(code *)*puVar1)(0x10d8,puVar5);
  uVar9 = (uint)(in_ST2 != (longdouble)0.0);
  puVar5 = (undefined4 *)
           FUN_10d8_3b9b((int)*(undefined4 *)(iVar2 + 500),
                         (int)((ulong)*(undefined4 *)(iVar2 + 500) >> 0x10),0x46bf,0x1060);
  puVar1 = (undefined2 *)((int)*puVar5 + 0x40);
  (*(code *)*puVar1)(0x10d8,puVar5);
  if (in_ST3 != (longdouble)0.0) {
    uVar9 = uVar9 + 1;
  }
  uVar10 = 0;
  puVar5 = (undefined4 *)FUN_10d8_3b9b(uVar4,0x46c8,0x1060);
  puVar1 = (undefined2 *)((int)*puVar5 + 0x60);
  (*(code *)*puVar1)(0x10d8,puVar5,uVar9,uVar10);
  puVar5 = (undefined4 *)
           FUN_10d8_3b9b((int)*(undefined4 *)(iVar2 + 0x1fc),
                         (int)((ulong)*(undefined4 *)(iVar2 + 0x1fc) >> 0x10),0x46d7,0x10d8);
  puVar1 = (undefined2 *)((int)*puVar5 + 0x40);
  (*(code *)*puVar1)(0x10d8,puVar5);
  puVar5 = (undefined4 *)FUN_10d8_3b9b();
  puVar1 = (undefined2 *)((int)*puVar5 + 0x40);
  (*(code *)*puVar1)();
  FUN_1080_2fa6((double)(in_ST4 + in_ST5));
  dVar8 = (double)in_ST6;
  puVar7 = (undefined4 *)FUN_10d8_3b9b(uVar4,0x46d7,0x1080);
  puVar1 = (undefined2 *)((int)*puVar7 + 0x5c);
  (*(code *)*puVar1)(0x10d8,puVar7,dVar8,puVar5);
  return;
}



/* ---- TFormSERS_Situation_TableEDP1CalcFields @ 1060:4930  (1 octets) ---- */

void TFormSERS_Situation_TableEDP1CalcFields
               (undefined2 param_1,undefined4 param_2,undefined2 param_3,undefined2 param_4)

{
  double dVar1;
  undefined2 *puVar2;
  int iVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined2 extraout_DX;
  int iVar6;
  undefined2 uVar7;
  longdouble in_ST0;
  longdouble in_ST1;
  longdouble in_ST2;
  longdouble in_ST4;
  undefined4 uVar8;
  undefined4 *puVar9;
  long lStack_28;
  long lStack_24;
  undefined8 uStack_14;
  undefined4 uStack_c;
  long lStack_8;
  
  FUN_1158_0444();
  uVar8 = FUN_1158_2273(0x138,(char *)s_iTime_1160_10dc + 4,param_3,param_4);
  uVar5 = (undefined2)((ulong)uVar8 >> 0x10);
  uVar7 = (undefined2)((ulong)param_2 >> 0x10);
  iVar6 = (int)param_2;
  puVar9 = (undefined4 *)
           FUN_10d8_3b9b((int)*(undefined4 *)(iVar6 + 0x1ec),
                         (int)((ulong)*(undefined4 *)(iVar6 + 0x1ec) >> 0x10),0x48b2,0x1158);
  puVar2 = (undefined2 *)((int)*puVar9 + 0x40);
  (*(code *)*puVar2)(0x10d8,puVar9);
  puVar9 = (undefined4 *)FUN_10d8_3b9b(uVar8,0x48c3,0x10d8);
  puVar2 = (undefined2 *)((int)*puVar9 + 0x44);
  (*(code *)*puVar2)(0x10d8,puVar9);
  iVar3 = FUN_1158_0416();
  if (iVar3 == 1) {
    puVar9 = (undefined4 *)
             FUN_10d8_3b9b((int)*(undefined4 *)(iVar6 + 0x210),
                           (int)((ulong)*(undefined4 *)(iVar6 + 0x210) >> 0x10),0x48d5,0x1158);
    puVar2 = (undefined2 *)((int)*puVar9 + 0x40);
    (*(code *)*puVar2)(0x10d8,puVar9);
  }
  else {
    puVar9 = (undefined4 *)
             FUN_10d8_3b9b((int)*(undefined4 *)(iVar6 + 0x214),
                           (int)((ulong)*(undefined4 *)(iVar6 + 0x214) >> 0x10),0x48d5,0x1158);
    puVar2 = (undefined2 *)((int)*puVar9 + 0x40);
    (*(code *)*puVar2)(0x10d8,puVar9);
  }
  uStack_14 = (double)in_ST1;
  puVar9 = (undefined4 *)FUN_10d8_3b9b(uVar8,0x48eb,0x10d8);
  puVar2 = (undefined2 *)((int)*puVar9 + 0x44);
  lStack_24 = (*(code *)*puVar2)(0x10d8,puVar9);
  dVar1 = (double)lStack_24 * (double)in_ST0;
  FUN_1080_2ea7((undefined2)uStack_14,uStack_14._2_2_,uStack_14._4_2_,uStack_14._6_2_,SUB82(dVar1,0)
                ,(int)((qword)dVar1 >> 0x10),(int)((qword)dVar1 >> 0x20),(int)((qword)dVar1 >> 0x30)
               );
  uVar7 = extraout_DX;
  uVar4 = FUN_1158_100e();
  uStack_c = CONCAT22(uVar7,uVar4);
  puVar9 = (undefined4 *)FUN_10d8_3b9b(uVar8,0x48eb,0x1158);
  puVar2 = (undefined2 *)((int)*puVar9 + 0x44);
  lStack_24 = (*(code *)*puVar2)(0x10d8,puVar9);
  uVar7 = SUB82((double)lStack_24,0);
  uVar4 = (undefined2)((qword)(double)lStack_24 >> 0x10);
  puVar9 = (undefined4 *)FUN_10d8_3b9b();
  puVar2 = (undefined2 *)((int)*puVar9 + 0x44);
  lStack_28 = (*(code *)*puVar2)();
  FUN_1080_2ea7((double)lStack_28,puVar9,uVar7,uVar4);
  dVar1 = (double)(in_ST2 * (longdouble)100.0);
  FUN_1080_2fa6(SUB82(dVar1,0),(int)((qword)dVar1 >> 0x10),(int)((qword)dVar1 >> 0x20),
                (int)((qword)dVar1 >> 0x30));
  puVar9 = (undefined4 *)FUN_10d8_3b9b((int)uVar8,CONCAT42(0x108048fd,uVar5));
  puVar2 = (undefined2 *)((int)*puVar9 + 0x5c);
  (*(code *)*puVar2)();
  puVar9 = (undefined4 *)FUN_10d8_3b9b();
  puVar2 = (undefined2 *)((int)*puVar9 + 0x44);
  lStack_8 = (*(code *)*puVar2)();
  FUN_1080_2ea7((double)uStack_c,(double)lStack_8);
  FUN_1080_2fa6((double)(in_ST4 * (longdouble)100.0));
  puVar9 = (undefined4 *)FUN_10d8_3b9b((int)uVar8,CONCAT42(0x10804920,uVar5));
  puVar2 = (undefined2 *)((int)*puVar9 + 0x5c);
  (*(code *)*puVar2)();
  return;
}



/* ---- TFormSERS_Situation_TableERP1CalcFields @ 1060:4c2a  (1 octets) ---- */

void TFormSERS_Situation_TableERP1CalcFields
               (undefined2 param_1,undefined4 param_2,undefined2 param_3,undefined2 param_4)

{
  double dVar1;
  undefined2 *puVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined2 extraout_DX;
  int iVar6;
  undefined2 uVar7;
  longdouble in_ST0;
  longdouble in_ST2;
  longdouble in_ST4;
  longdouble in_ST6;
  undefined4 uVar8;
  undefined4 *puVar9;
  long lStack_48;
  long lStack_30;
  long lStack_22;
  undefined4 uStack_a;
  long lVar10;
  
  FUN_1158_0444();
  uVar8 = FUN_1158_2273(0x138,(char *)s_iTime_1160_10dc + 4,param_3,param_4);
  uVar5 = (undefined2)((ulong)uVar8 >> 0x10);
  uVar3 = (undefined2)uVar8;
  puVar9 = (undefined4 *)FUN_10d8_3b9b(uVar8,0x4b82,0x1158);
  puVar2 = (undefined2 *)((int)*puVar9 + 0x44);
  lStack_22 = (*(code *)*puVar2)(0x10d8,puVar9);
  uVar7 = (undefined2)((ulong)param_2 >> 0x10);
  iVar6 = (int)param_2;
  puVar9 = (undefined4 *)FUN_10d8_3b9b();
  puVar2 = (undefined2 *)((int)*puVar9 + 0x40);
  (*(code *)*puVar2)();
  FUN_1080_2fa6((double)((longdouble)lStack_22 * in_ST0));
  puVar9 = (undefined4 *)FUN_10d8_3b9b(uVar3,CONCAT42(0x10804b8e,uVar5));
  puVar2 = (undefined2 *)((int)*puVar9 + 0x44);
  lStack_30 = (*(code *)*puVar2)();
  puVar9 = (undefined4 *)FUN_10d8_3b9b();
  puVar2 = (undefined2 *)((int)*puVar9 + 0x40);
  (*(code *)*puVar2)();
  FUN_1080_2fa6((double)((longdouble)lStack_30 * in_ST2));
  puVar9 = (undefined4 *)FUN_10d8_3b9b(uVar3,CONCAT42(0x10804bb1,uVar5));
  puVar2 = (undefined2 *)((int)*puVar9 + 0x44);
  lStack_48 = (*(code *)*puVar2)();
  puVar9 = (undefined4 *)FUN_10d8_3b9b();
  puVar2 = (undefined2 *)((int)*puVar9 + 0x40);
  (*(code *)*puVar2)();
  FUN_1080_2fa6((double)((longdouble)lStack_48 * in_ST4));
  puVar9 = (undefined4 *)FUN_10d8_3b9b(uVar8,0x4b7f,0x1080);
  puVar2 = (undefined2 *)((int)*puVar9 + 0x5c);
  (*(code *)*puVar2)(0x10d8,puVar9);
  puVar9 = (undefined4 *)
           FUN_10d8_3b9b((int)*(undefined4 *)(iVar6 + 0x1ec),
                         (int)((ulong)*(undefined4 *)(iVar6 + 0x1ec) >> 0x10),0x4bcc,0x10d8);
  puVar2 = (undefined2 *)((int)*puVar9 + 0x40);
  (*(code *)*puVar2)(0x10d8,puVar9);
  puVar9 = (undefined4 *)
           FUN_10d8_3b9b((int)*(undefined4 *)(iVar6 + 0x210),
                         (int)((ulong)*(undefined4 *)(iVar6 + 0x210) >> 0x10),0x4bdd,0x10d8);
  puVar2 = (undefined2 *)((int)*puVar9 + 0x40);
  (*(code *)*puVar2)(0x10d8,puVar9);
  puVar9 = (undefined4 *)
           FUN_10d8_3b9b((int)*(undefined4 *)(iVar6 + 0x1f0),
                         (int)((ulong)*(undefined4 *)(iVar6 + 0x1f0) >> 0x10),0x4bf3,0x10d8);
  puVar2 = (undefined2 *)((int)*puVar9 + 0x44);
  (*(code *)*puVar2)(0x10d8,puVar9);
  FUN_1080_2ea7();
  uVar7 = extraout_DX;
  uVar4 = FUN_1158_100e();
  uStack_a = CONCAT22(uVar7,uVar4);
  puVar9 = (undefined4 *)FUN_10d8_3b9b(uVar8,0x4c05,0x1158);
  puVar2 = (undefined2 *)((int)*puVar9 + 0x44);
  lVar10 = (*(code *)*puVar2)(0x10d8,puVar9);
  dVar1 = (double)lVar10;
  FUN_1080_2ea7((double)uStack_a,SUB82(dVar1,0),(int)((qword)dVar1 >> 0x10),
                (int)((qword)dVar1 >> 0x20),(int)((qword)dVar1 >> 0x30));
  dVar1 = (double)(in_ST6 * (longdouble)100.0);
  FUN_1080_2fa6(SUB82(dVar1,0),(int)((qword)dVar1 >> 0x10),(int)((qword)dVar1 >> 0x20),
                (int)((qword)dVar1 >> 0x30));
  puVar9 = (undefined4 *)FUN_10d8_3b9b(uVar3,CONCAT42(0x10804c16,uVar5));
  puVar2 = (undefined2 *)((int)*puVar9 + 0x5c);
  (*(code *)*puVar2)();
  return;
}



/* ---- TFormSERS_Situation_TableERP2CalcFields @ 1060:4f83  (1 octets) ---- */

void TFormSERS_Situation_TableERP2CalcFields
               (undefined2 param_1,undefined4 param_2,undefined2 param_3,undefined2 param_4)

{
  double dVar1;
  undefined2 *puVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined2 extraout_DX;
  int iVar6;
  undefined2 uVar7;
  longdouble in_ST0;
  longdouble in_ST2;
  longdouble in_ST4;
  longdouble in_ST6;
  undefined4 uVar8;
  undefined4 *puVar9;
  long lStack_48;
  long lStack_30;
  long lStack_22;
  undefined4 uStack_a;
  long lVar10;
  
  FUN_1158_0444();
  uVar8 = FUN_1158_2273(0x138,(char *)s_iTime_1160_10dc + 4,param_3,param_4);
  uVar5 = (undefined2)((ulong)uVar8 >> 0x10);
  uVar3 = (undefined2)uVar8;
  puVar9 = (undefined4 *)FUN_10d8_3b9b(uVar8,0x4edb,0x1158);
  puVar2 = (undefined2 *)((int)*puVar9 + 0x44);
  lStack_22 = (*(code *)*puVar2)(0x10d8,puVar9);
  uVar7 = (undefined2)((ulong)param_2 >> 0x10);
  iVar6 = (int)param_2;
  puVar9 = (undefined4 *)FUN_10d8_3b9b();
  puVar2 = (undefined2 *)((int)*puVar9 + 0x40);
  (*(code *)*puVar2)();
  FUN_1080_2fa6((double)((longdouble)lStack_22 * in_ST0));
  puVar9 = (undefined4 *)FUN_10d8_3b9b(uVar3,CONCAT42(0x10804ee7,uVar5));
  puVar2 = (undefined2 *)((int)*puVar9 + 0x44);
  lStack_30 = (*(code *)*puVar2)();
  puVar9 = (undefined4 *)FUN_10d8_3b9b();
  puVar2 = (undefined2 *)((int)*puVar9 + 0x40);
  (*(code *)*puVar2)();
  FUN_1080_2fa6((double)((longdouble)lStack_30 * in_ST2));
  puVar9 = (undefined4 *)FUN_10d8_3b9b(uVar3,CONCAT42(0x10804f0a,uVar5));
  puVar2 = (undefined2 *)((int)*puVar9 + 0x44);
  lStack_48 = (*(code *)*puVar2)();
  puVar9 = (undefined4 *)FUN_10d8_3b9b();
  puVar2 = (undefined2 *)((int)*puVar9 + 0x40);
  (*(code *)*puVar2)();
  FUN_1080_2fa6((double)((longdouble)lStack_48 * in_ST4));
  puVar9 = (undefined4 *)FUN_10d8_3b9b(uVar8,0x4ed8,0x1080);
  puVar2 = (undefined2 *)((int)*puVar9 + 0x5c);
  (*(code *)*puVar2)(0x10d8,puVar9);
  puVar9 = (undefined4 *)
           FUN_10d8_3b9b((int)*(undefined4 *)(iVar6 + 0x1ec),
                         (int)((ulong)*(undefined4 *)(iVar6 + 0x1ec) >> 0x10),0x4f25,0x10d8);
  puVar2 = (undefined2 *)((int)*puVar9 + 0x40);
  (*(code *)*puVar2)(0x10d8,puVar9);
  puVar9 = (undefined4 *)
           FUN_10d8_3b9b((int)*(undefined4 *)(iVar6 + 0x214),
                         (int)((ulong)*(undefined4 *)(iVar6 + 0x214) >> 0x10),0x4f36,0x10d8);
  puVar2 = (undefined2 *)((int)*puVar9 + 0x40);
  (*(code *)*puVar2)(0x10d8,puVar9);
  puVar9 = (undefined4 *)
           FUN_10d8_3b9b((int)*(undefined4 *)(iVar6 + 500),
                         (int)((ulong)*(undefined4 *)(iVar6 + 500) >> 0x10),0x4f4c,0x10d8);
  puVar2 = (undefined2 *)((int)*puVar9 + 0x44);
  (*(code *)*puVar2)(0x10d8,puVar9);
  FUN_1080_2ea7();
  uVar7 = extraout_DX;
  uVar4 = FUN_1158_100e();
  uStack_a = CONCAT22(uVar7,uVar4);
  puVar9 = (undefined4 *)FUN_10d8_3b9b(uVar8,0x4f5e,0x1158);
  puVar2 = (undefined2 *)((int)*puVar9 + 0x44);
  lVar10 = (*(code *)*puVar2)(0x10d8,puVar9);
  dVar1 = (double)lVar10;
  FUN_1080_2ea7((double)uStack_a,SUB82(dVar1,0),(int)((qword)dVar1 >> 0x10),
                (int)((qword)dVar1 >> 0x20),(int)((qword)dVar1 >> 0x30));
  dVar1 = (double)(in_ST6 * (longdouble)100.0);
  FUN_1080_2fa6(SUB82(dVar1,0),(int)((qword)dVar1 >> 0x10),(int)((qword)dVar1 >> 0x20),
                (int)((qword)dVar1 >> 0x30));
  puVar9 = (undefined4 *)FUN_10d8_3b9b(uVar3,CONCAT42(0x10804f6f,uVar5));
  puVar2 = (undefined2 *)((int)*puVar9 + 0x5c);
  (*(code *)*puVar2)();
  return;
}



/* ---- TFormSERS_Situation_FormKeyDown @ 1060:5249  (1 octets) ---- */

void TFormSERS_Situation_FormKeyDown
               (undefined2 param_1,undefined4 param_2,byte param_3,int *param_4)

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
        iVar4 = FUN_1158_043e(0x1060);
      }
      FUN_1140_1cd0(iVar6,uVar8,iVar4);
      break;
    case 0x28:
      iVar4 = *(int *)(iVar6 + 10) + *(int *)(iVar6 + 8);
      if (SCARRY2(*(int *)(iVar6 + 10),*(int *)(iVar6 + 8))) {
        iVar4 = FUN_1158_043e(0x1060);
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



/* ---- TFormSERS_Situation_Fiche1Click @ 1060:5415  (43 octets) ---- */

void __stdcall16far TFormSERS_Situation_Fiche1Click(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined2 uVar3;
  
  FUN_1158_0444();
  uVar1 = *(undefined4 *)((int)param_1 + 0x4cc);
  uVar3 = (undefined2)((ulong)uVar1 >> 0x10);
  iVar2 = (int)uVar1;
  FUN_1140_77b2((int)DAT_1160_2c2a,(int)((ulong)DAT_1160_2c2a >> 0x10),*(undefined2 *)(iVar2 + 0x23)
                ,*(undefined2 *)(iVar2 + 0x25),1);
  return;
}



/* ---- TFormSERS_Situation_Index1Click @ 1060:5440  (31 octets) ---- */

void __stdcall16far TFormSERS_Situation_Index1Click(void)

{
  FUN_1158_0444();
  FUN_1140_77b2((int)DAT_1160_2c2a,(int)((ulong)DAT_1160_2c2a >> 0x10),0,0,3);
  return;
}



/* ---- TFormSERS_Situation_Rechercher1Click @ 1060:545f  (33 octets) ---- */

void __stdcall16far TFormSERS_Situation_Rechercher1Click(void)

{
  FUN_1158_0444();
  FUN_1140_77b2((int)DAT_1160_2c2a,(int)((ulong)DAT_1160_2c2a >> 0x10),0x23c,0x1160,0x105);
  return;
}



/* ---- TFormSERS_Situation_Utiliserlaide1Click @ 1060:5480  (31 octets) ---- */

void __stdcall16far TFormSERS_Situation_Utiliserlaide1Click(void)

{
  FUN_1158_0444();
  FUN_1140_77b2((int)DAT_1160_2c2a,(int)((ulong)DAT_1160_2c2a >> 0x10),0,0,4);
  return;
}



/* ---- TFormSERS_Situation_Apropos1Click @ 1060:549f  (29 octets) ---- */

void __stdcall16far TFormSERS_Situation_Apropos1Click(void)

{
  undefined2 uVar1;
  
  uVar1 = 0x54aa;
  FUN_1158_0444();
  FUN_1140_5d45((int)DAT_1160_2008,(int)((ulong)DAT_1160_2008 >> 0x10),uVar1);
  return;
}



/* ---- FUN_1060_54bc @ 1060:54bc  (123 octets) ---- */

void __stdcall16far FUN_1060_54bc(undefined4 *param_1,undefined *param_2,undefined4 param_3)

{
  undefined2 *puVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  
  uVar4 = 0x54c7;
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



/* ---- TFormSERS_Situation_DBEdit1MouseDown @ 1060:5537  (183 octets) ---- */

void __stdcall16far TFormSERS_Situation_DBEdit1MouseDown(undefined4 param_1)

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
    *(undefined2 *)(iVar1 + 0x6d) = 0x54bc;
    *(undefined2 *)(iVar1 + 0x6f) = 0x1060;
    *(undefined2 *)(iVar1 + 0x71) = (int)param_1;
    *(undefined2 *)(iVar1 + 0x73) = (int)((ulong)param_1 >> 0x10);
  }
  return;
}



/* ---- TFormSERS_Situation_Panel13MouseDown @ 1060:55ee  (105 octets) ---- */

void __stdcall16far TFormSERS_Situation_Panel13MouseDown(void)

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



/* ---- TFormSERS_Situation_ImpressionRapide1Click @ 1060:5657  (43 octets) ---- */

void __stdcall16far TFormSERS_Situation_ImpressionRapide1Click(undefined4 param_1)

{
  undefined4 uVar1;
  char cVar2;
  undefined2 uVar3;
  
  FUN_1158_0444();
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  uVar1 = *(undefined4 *)((int)param_1 + 0x250);
  cVar2 = FUN_1108_2f17((int)uVar1,(int)((ulong)uVar1 >> 0x10));
  if (cVar2 != '\0') {
    FUN_1060_56e6((int)param_1,uVar3);
  }
  return;
}



/* ---- FUN_1060_568a @ 1060:568a  (69 octets) ---- */

undefined2 __stdcall16far FUN_1060_568a(void)

{
  undefined2 uVar1;
  undefined2 unaff_SS;
  undefined4 uVar2;
  undefined local_24 [30];
  undefined2 uStack_6;
  
  uStack_6 = 0x5695;
  FUN_1158_0444();
  uVar2 = FUN_10f0_2a04((int)DAT_1160_2c54,(int)((ulong)DAT_1160_2c54 >> 0x10));
  uVar1 = FUN_1128_21d2(uVar2);
  GETTEXTMETRICS(0x1128,local_24,unaff_SS);
  uVar1 = FUN_1158_0416(uVar1);
  return uVar1;
}



/* ---- FUN_1060_56e6 @ 1060:56e6  (1112 octets) ---- */

void __cdecl16far FUN_1060_56e6(undefined4 param_1)

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
  
  local_6 = 0x56f1;
  FUN_1158_0444();
  uVar9 = (undefined2)((ulong)param_1 >> 0x10);
  iVar6 = (int)param_1;
  puStack_41a = (undefined *)0x5701;
  FUN_1060_5e8a();
  puStack_41a = local_106;
  puStack_41c = (undefined *)0x1060;
  uStack_41e = 0x570c;
  FUN_10f0_204e();
  puStack_41a = local_106;
  puStack_41c = (undefined *)0x10f0;
  uStack_41e = 0x5717;
  FUN_1158_09f5();
  puStack_41a = (undefined *)0x571c;
  FUN_1158_0408();
  puStack_41a = (undefined *)0x56e0;
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
    FUN_1158_0db5(0,0x56cf,uVar10);
    FUN_1158_0c78(puVar13,uVar14);
    uVar10 = 0x1158;
    FUN_1158_0408();
    if (iVar7 == 3) break;
    iVar7 = iVar7 + 1;
  }
  local_210 = *(undefined4 *)(iVar6 + 0x688);
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
        local_6 = FUN_1158_1878(local_206,unaff_SS,0x56d0,0x1158);
        if (0 < local_6) {
          FUN_1158_1975(1,local_6,local_206,unaff_SS);
          FUN_1158_1916(local_6,0xff,local_206,unaff_SS,0x56d2,0x1158);
        }
      } while (local_6 != 0);
      puVar13 = local_312;
      uVar10 = unaff_SS;
      FUN_1158_17cd(0x56d4,0x1158);
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
  uVar3 = FUN_1060_568a(&stack0xfffe);
  if (0xfffd < uVar3) {
    FUN_1158_043e(0x1060);
  }
  local_208 = FUN_1158_0416();
  puVar13 = local_410;
  uVar14 = unaff_SS;
  FUN_1158_17cd(0x56d4,0x1158);
  puVar12 = local_310;
  uVar10 = unaff_SS;
  FUN_1138_1d53((int)*(undefined4 *)(iVar6 + 0x678),
                (int)((ulong)*(undefined4 *)(iVar6 + 0x678) >> 0x10));
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
  FUN_1158_17cd(0x56d4,0x1128);
  puVar12 = local_310;
  uVar10 = unaff_SS;
  FUN_1138_1d53((int)*(undefined4 *)(iVar6 + 0x67c),
                (int)((ulong)*(undefined4 *)(iVar6 + 0x67c) >> 0x10));
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
  FUN_1158_17cd(0x56d4,0x1128);
  puVar12 = local_310;
  uVar10 = unaff_SS;
  FUN_1138_1d53((int)*(undefined4 *)(iVar6 + 0x680),
                (int)((ulong)*(undefined4 *)(iVar6 + 0x680) >> 0x10));
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
  FUN_1158_17cd(0x56d4,0x1128);
  puVar12 = local_310;
  uVar10 = unaff_SS;
  FUN_1138_1d53((int)*(undefined4 *)(iVar6 + 0x684),
                (int)((ulong)*(undefined4 *)(iVar6 + 0x684) >> 0x10));
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
  uStack_41e = 0x5b3e;
  FUN_1158_0a4f(local_106,unaff_SS);
  FUN_1158_0408();
  FUN_1120_49e3((int)*(undefined4 *)(iVar6 + 0x688),
                (int)((ulong)*(undefined4 *)(iVar6 + 0x688) >> 0x10));
  return;
}



/* ---- TFormSERS_Situation_Copier1Click @ 1060:5b42  (71 octets) ---- */

void __stdcall16far TFormSERS_Situation_Copier1Click(undefined4 param_1)

{
  undefined2 uVar1;
  undefined2 uVar2;
  undefined2 unaff_CS;
  undefined4 uVar3;
  
  uVar3 = CONCAT22(unaff_CS,0x5b4d);
  FUN_1158_0444();
  uVar1 = (undefined2)((ulong)param_1 >> 0x10);
  FUN_1060_5e8a((int)param_1,uVar1,0,uVar3);
  uVar3 = *(undefined4 *)((int)param_1 + 0x688);
  uVar2 = (undefined2)((ulong)uVar3 >> 0x10);
  uVar1 = (undefined2)uVar3;
  FUN_1120_4a3f(uVar1,uVar2);
  FUN_1120_49ff(uVar1,uVar2);
  FUN_1120_49e3(uVar1,uVar2);
  return;
}



/* ---- FUN_1060_5b8d @ 1060:5b8d  (760 octets) ---- */

void __stdcall16far
FUN_1060_5b8d(int param_1,int param_2,undefined4 param_3,undefined2 param_4,byte *param_5)

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
  
  uStack_6 = 0x5b98;
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
        FUN_1158_184c(0x5b89,0x1158);
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
        FUN_1158_184c(0x5b8b,0x1158);
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
          FUN_1158_17cd(0x5b8b,0x1158);
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



/* ---- FUN_1060_5e8a @ 1060:5e8a  (6455 octets) ---- */

void __stdcall16far FUN_1060_5e8a(undefined4 param_1,int param_2)

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
  
  uStack_6 = 0x5e95;
  FUN_1158_0444();
  uVar4 = (undefined2)((ulong)param_1 >> 0x10);
  iVar3 = (int)param_1;
  local_104 = (undefined2)((ulong)*(undefined4 *)(iVar3 + 0x688) >> 0x10);
  local_106 = (int)*(undefined4 *)(iVar3 + 0x688);
  FUN_1120_49e3(local_106,local_104);
  local_102[0] = '\0';
  FUN_1060_5b8d(&stack0xfffe,0,*(undefined2 *)(iVar3 + 0x1ac),*(undefined2 *)(iVar3 + 0x1ae),0xff,
                local_102,unaff_SS);
  puVar5 = local_206;
  uVar8 = unaff_SS;
  FUN_1158_17cd(local_102,unaff_SS);
  FUN_1158_184c(0x5e85,0x1158);
  puVar7 = local_306;
  uVar6 = unaff_SS;
  FUN_1138_1d53((int)*(undefined4 *)(iVar3 + 0x1b0),
                (int)((ulong)*(undefined4 *)(iVar3 + 0x1b0) >> 0x10));
  FUN_1158_184c(puVar7,uVar6);
  FUN_1158_17e7(0xff,local_102,unaff_SS,puVar5,uVar8);
  puVar2 = (undefined4 *)*(undefined4 *)(local_106 + 0xec);
  puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
  (*(code *)*puVar1)(0x1158,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),local_102);
  if (param_2 == 1) {
    puVar2 = (undefined4 *)*(undefined4 *)(local_106 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)(0x1158,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),0x5e87,0x1158);
  }
  local_102[0] = '\0';
  FUN_1060_5b8d(&stack0xfffe,10,*(undefined2 *)(iVar3 + 0x1b4),*(undefined2 *)(iVar3 + 0x1b6),0xff,
                local_102,unaff_SS);
  puVar5 = local_206;
  uVar8 = unaff_SS;
  FUN_1158_17cd(local_102,unaff_SS);
  FUN_1158_184c(0x5e88,0x1158);
  puVar7 = local_306;
  uVar6 = unaff_SS;
  FUN_1138_1d53((int)*(undefined4 *)(iVar3 + 0x1b8),
                (int)((ulong)*(undefined4 *)(iVar3 + 0x1b8) >> 0x10));
  FUN_1158_184c(puVar7,uVar6);
  FUN_1158_17e7(0xff,local_102,unaff_SS,puVar5,uVar8);
  FUN_1060_5b8d(&stack0xfffe,0x25,*(undefined2 *)(iVar3 + 0x1c4),*(undefined2 *)(iVar3 + 0x1c6),0xff
                ,local_102,unaff_SS);
  FUN_1060_5b8d(&stack0xfffe,0x46,*(undefined2 *)(iVar3 + 0x1bc),*(undefined2 *)(iVar3 + 0x1be),0xff
                ,local_102,unaff_SS);
  puVar5 = local_206;
  uVar8 = unaff_SS;
  FUN_1158_17cd(local_102,unaff_SS);
  FUN_1158_184c(0x5e88,0x1158);
  puVar7 = local_306;
  uVar6 = unaff_SS;
  FUN_1138_1d53((int)*(undefined4 *)(iVar3 + 0x1c0),
                (int)((ulong)*(undefined4 *)(iVar3 + 0x1c0) >> 0x10));
  FUN_1158_184c(puVar7,uVar6);
  FUN_1158_17e7(0xff,local_102,unaff_SS,puVar5,uVar8);
  puVar2 = (undefined4 *)*(undefined4 *)(local_106 + 0xec);
  puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
  (*(code *)*puVar1)(0x1158,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),local_102);
  if (param_2 == 1) {
    puVar2 = (undefined4 *)*(undefined4 *)(local_106 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)(0x1158,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),0x5e87,0x1158);
  }
  local_102[0] = '\0';
  FUN_1060_5b8d(&stack0xfffe,DAT_1160_0240,*(undefined2 *)(iVar3 + 0x4e0),
                *(undefined2 *)(iVar3 + 0x4e2),0xff,local_102,unaff_SS);
  puVar5 = local_206;
  uVar6 = unaff_SS;
  FUN_1158_17cd(local_102,unaff_SS);
  FUN_1158_184c(0x5e85,0x1158);
  FUN_1158_17e7(0xff,local_102,unaff_SS,puVar5,uVar6);
  FUN_1060_5b8d(&stack0xfffe,DAT_1160_0246,*(undefined2 *)(iVar3 + 0x504),
                *(undefined2 *)(iVar3 + 0x506),0xff,local_102,unaff_SS);
  FUN_1060_5b8d(&stack0xfffe,DAT_1160_0248,*(undefined2 *)(iVar3 + 0x508),
                *(undefined2 *)(iVar3 + 0x50a),0xff,local_102,unaff_SS);
  if (local_102[0] != '\0') {
    puVar2 = (undefined4 *)*(undefined4 *)(local_106 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)(0x1060,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),local_102);
  }
  local_102[0] = '\0';
  FUN_1060_5b8d(&stack0xfffe,DAT_1160_0242,*(undefined2 *)(iVar3 + 0x50c),
                *(undefined2 *)(iVar3 + 0x50e),0xff,local_102,unaff_SS);
  puVar5 = local_206;
  uVar6 = unaff_SS;
  FUN_1158_17cd(local_102,unaff_SS);
  FUN_1158_184c(0x5e85,0x1158);
  FUN_1158_17e7(0xff,local_102,unaff_SS,puVar5,uVar6);
  FUN_1060_5b8d(&stack0xfffe,DAT_1160_0246,*(undefined2 *)(iVar3 + 0x4e4),
                *(undefined2 *)(iVar3 + 0x4e6),0xff,local_102,unaff_SS);
  FUN_1060_5b8d(&stack0xfffe,DAT_1160_0248,*(undefined2 *)(iVar3 + 0x4f4),
                *(undefined2 *)(iVar3 + 0x4f6),0xff,local_102,unaff_SS);
  if (local_102[0] != '\0') {
    puVar2 = (undefined4 *)*(undefined4 *)(local_106 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)(0x1060,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),local_102);
  }
  local_102[0] = '\0';
  FUN_1060_5b8d(&stack0xfffe,DAT_1160_0242,*(undefined2 *)(iVar3 + 0x510),
                *(undefined2 *)(iVar3 + 0x512),0xff,local_102,unaff_SS);
  puVar5 = local_206;
  uVar6 = unaff_SS;
  FUN_1158_17cd(local_102,unaff_SS);
  FUN_1158_184c(0x5e85,0x1158);
  FUN_1158_17e7(0xff,local_102,unaff_SS,puVar5,uVar6);
  FUN_1060_5b8d(&stack0xfffe,DAT_1160_0246,*(undefined2 *)(iVar3 + 0x4e8),
                *(undefined2 *)(iVar3 + 0x4ea),0xff,local_102,unaff_SS);
  FUN_1060_5b8d(&stack0xfffe,DAT_1160_0248,*(undefined2 *)(iVar3 + 0x4f8),
                *(undefined2 *)(iVar3 + 0x4fa),0xff,local_102,unaff_SS);
  if (local_102[0] != '\0') {
    puVar2 = (undefined4 *)*(undefined4 *)(local_106 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)(0x1060,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),local_102);
  }
  local_102[0] = '\0';
  FUN_1060_5b8d(&stack0xfffe,DAT_1160_0242,*(undefined2 *)(iVar3 + 0x534),
                *(undefined2 *)(iVar3 + 0x536),0xff,local_102,unaff_SS);
  puVar5 = local_206;
  uVar6 = unaff_SS;
  FUN_1158_17cd(local_102,unaff_SS);
  FUN_1158_184c(0x5e85,0x1158);
  FUN_1158_17e7(0xff,local_102,unaff_SS,puVar5,uVar6);
  FUN_1060_5b8d(&stack0xfffe,DAT_1160_0246,*(undefined2 *)(iVar3 + 0x538),
                *(undefined2 *)(iVar3 + 0x53a),0xff,local_102,unaff_SS);
  FUN_1060_5b8d(&stack0xfffe,DAT_1160_0248,*(undefined2 *)(iVar3 + 0x53c),
                *(undefined2 *)(iVar3 + 0x53e),0xff,local_102,unaff_SS);
  if (local_102[0] != '\0') {
    puVar2 = (undefined4 *)*(undefined4 *)(local_106 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)(0x1060,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),local_102);
  }
  local_102[0] = '\0';
  if (*(char *)((int)*(undefined4 *)(iVar3 + 0x548) + 0x29) != '\0') {
    FUN_1060_5b8d(&stack0xfffe,DAT_1160_0242,*(undefined2 *)(iVar3 + 0x528),
                  *(undefined2 *)(iVar3 + 0x52a),0xff,local_102,unaff_SS);
    FUN_1060_5b8d(&stack0xfffe,DAT_1160_0244,*(undefined2 *)(iVar3 + 0x548),
                  *(undefined2 *)(iVar3 + 0x54a),0xff,local_102,unaff_SS);
    FUN_1060_5b8d(&stack0xfffe,DAT_1160_0246,*(undefined2 *)(iVar3 + 0x518),
                  *(undefined2 *)(iVar3 + 0x51a),0xff,local_102,unaff_SS);
    FUN_1060_5b8d(&stack0xfffe,DAT_1160_0248,*(undefined2 *)(iVar3 + 0x51c),
                  *(undefined2 *)(iVar3 + 0x51e),0xff,local_102,unaff_SS);
  }
  if (local_102[0] != '\0') {
    puVar2 = (undefined4 *)*(undefined4 *)(local_106 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)(0x1060,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),local_102);
  }
  local_102[0] = '\0';
  if (*(char *)((int)*(undefined4 *)(iVar3 + 0x544) + 0x29) != '\0') {
    FUN_1060_5b8d(&stack0xfffe,DAT_1160_0242,*(undefined2 *)(iVar3 + 0x528),
                  *(undefined2 *)(iVar3 + 0x52a),0xff,local_102,unaff_SS);
    FUN_1060_5b8d(&stack0xfffe,DAT_1160_0244,*(undefined2 *)(iVar3 + 0x544),
                  *(undefined2 *)(iVar3 + 0x546),0xff,local_102,unaff_SS);
    FUN_1060_5b8d(&stack0xfffe,DAT_1160_0246,*(undefined2 *)(iVar3 + 0x4ec),
                  *(undefined2 *)(iVar3 + 0x4ee),0xff,local_102,unaff_SS);
    FUN_1060_5b8d(&stack0xfffe,DAT_1160_0248,*(undefined2 *)(iVar3 + 0x4fc),
                  *(undefined2 *)(iVar3 + 0x4fe),0xff,local_102,unaff_SS);
  }
  if (local_102[0] != '\0') {
    puVar2 = (undefined4 *)*(undefined4 *)(local_106 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)(0x1060,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),local_102);
  }
  local_102[0] = '\0';
  if (*(char *)((int)*(undefined4 *)(iVar3 + 0x540) + 0x29) != '\0') {
    FUN_1060_5b8d(&stack0xfffe,DAT_1160_0242,*(undefined2 *)(iVar3 + 0x528),
                  *(undefined2 *)(iVar3 + 0x52a),0xff,local_102,unaff_SS);
    FUN_1060_5b8d(&stack0xfffe,DAT_1160_0244,*(undefined2 *)(iVar3 + 0x540),
                  *(undefined2 *)(iVar3 + 0x542),0xff,local_102,unaff_SS);
    FUN_1060_5b8d(&stack0xfffe,DAT_1160_0246,*(undefined2 *)(iVar3 + 0x520),
                  *(undefined2 *)(iVar3 + 0x522),0xff,local_102,unaff_SS);
    FUN_1060_5b8d(&stack0xfffe,DAT_1160_0248,*(undefined2 *)(iVar3 + 0x524),
                  *(undefined2 *)(iVar3 + 0x526),0xff,local_102,unaff_SS);
  }
  if (local_102[0] != '\0') {
    puVar2 = (undefined4 *)*(undefined4 *)(local_106 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)(0x1060,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),local_102);
  }
  local_102[0] = '\0';
  FUN_1060_5b8d(&stack0xfffe,DAT_1160_0242,*(undefined2 *)(iVar3 + 0x514),
                *(undefined2 *)(iVar3 + 0x516),0xff,local_102,unaff_SS);
  puVar5 = local_206;
  uVar6 = unaff_SS;
  FUN_1158_17cd(local_102,unaff_SS);
  FUN_1158_184c(0x5e85,0x1158);
  FUN_1158_17e7(0xff,local_102,unaff_SS,puVar5,uVar6);
  FUN_1060_5b8d(&stack0xfffe,DAT_1160_0246,*(undefined2 *)(iVar3 + 0x4f0),
                *(undefined2 *)(iVar3 + 0x4f2),0xff,local_102,unaff_SS);
  FUN_1060_5b8d(&stack0xfffe,DAT_1160_0248,*(undefined2 *)(iVar3 + 0x500),
                *(undefined2 *)(iVar3 + 0x502),0xff,local_102,unaff_SS);
  if (local_102[0] != '\0') {
    puVar2 = (undefined4 *)*(undefined4 *)(local_106 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)(0x1060,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),local_102);
  }
  local_102[0] = '\0';
  if (*(char *)((int)*(undefined4 *)(iVar3 + 0x6e4) + 0x29) != '\0') {
    FUN_1060_5b8d(&stack0xfffe,DAT_1160_0242,*(undefined2 *)(iVar3 + 0x6e4),
                  *(undefined2 *)(iVar3 + 0x6e6),0xff,local_102,unaff_SS);
    FUN_1060_5b8d(&stack0xfffe,DAT_1160_0244,*(undefined2 *)(iVar3 + 0x6ec),
                  *(undefined2 *)(iVar3 + 0x6ee),0xff,local_102,unaff_SS);
    FUN_1060_5b8d(&stack0xfffe,DAT_1160_0246,*(undefined2 *)(iVar3 + 0x6f4),
                  *(undefined2 *)(iVar3 + 0x6f6),0xff,local_102,unaff_SS);
    FUN_1060_5b8d(&stack0xfffe,DAT_1160_0248,*(undefined2 *)(iVar3 + 0x6f8),
                  *(undefined2 *)(iVar3 + 0x6fa),0xff,local_102,unaff_SS);
  }
  if (local_102[0] != '\0') {
    puVar2 = (undefined4 *)*(undefined4 *)(local_106 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)(0x1060,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),local_102);
  }
  local_102[0] = '\0';
  if (*(char *)((int)*(undefined4 *)(iVar3 + 0x6e4) + 0x29) != '\0') {
    FUN_1060_5b8d(&stack0xfffe,DAT_1160_0242,*(undefined2 *)(iVar3 + 0x6e4),
                  *(undefined2 *)(iVar3 + 0x6e6),0xff,local_102,unaff_SS);
    FUN_1060_5b8d(&stack0xfffe,DAT_1160_0244,*(undefined2 *)(iVar3 + 0x6f0),
                  *(undefined2 *)(iVar3 + 0x6f2),0xff,local_102,unaff_SS);
    FUN_1060_5b8d(&stack0xfffe,DAT_1160_0246,*(undefined2 *)(iVar3 + 0x6fc),
                  *(undefined2 *)(iVar3 + 0x6fe),0xff,local_102,unaff_SS);
    FUN_1060_5b8d(&stack0xfffe,DAT_1160_0248,*(undefined2 *)(iVar3 + 0x700),
                  *(undefined2 *)(iVar3 + 0x702),0xff,local_102,unaff_SS);
  }
  if (local_102[0] != '\0') {
    puVar2 = (undefined4 *)*(undefined4 *)(local_106 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)(0x1060,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),local_102);
  }
  if (param_2 == 1) {
    puVar2 = (undefined4 *)*(undefined4 *)(local_106 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)(0x1060,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),0x5e87,0x1060);
  }
  local_102[0] = '\0';
  FUN_1060_5b8d(&stack0xfffe,DAT_1160_0240,*(undefined2 *)(iVar3 + 0x550),
                *(undefined2 *)(iVar3 + 0x552),0xff,local_102,unaff_SS);
  puVar5 = local_206;
  uVar6 = unaff_SS;
  FUN_1158_17cd(local_102,unaff_SS);
  FUN_1158_184c(0x5e85,0x1158);
  FUN_1158_17e7(0xff,local_102,unaff_SS,puVar5,uVar6);
  FUN_1060_5b8d(&stack0xfffe,DAT_1160_0246,*(undefined2 *)(iVar3 + 0x570),
                *(undefined2 *)(iVar3 + 0x572),0xff,local_102,unaff_SS);
  FUN_1060_5b8d(&stack0xfffe,DAT_1160_0248,*(undefined2 *)(iVar3 + 0x5b0),
                *(undefined2 *)(iVar3 + 0x5b2),0xff,local_102,unaff_SS);
  if (local_102[0] != '\0') {
    puVar2 = (undefined4 *)*(undefined4 *)(local_106 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)(0x1060,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),local_102);
  }
  local_102[0] = '\0';
  FUN_1060_5b8d(&stack0xfffe,DAT_1160_0242,*(undefined2 *)(iVar3 + 0x574),
                *(undefined2 *)(iVar3 + 0x576),0xff,local_102,unaff_SS);
  FUN_1060_5b8d(&stack0xfffe,DAT_1160_0244,*(undefined2 *)(iVar3 + 0x578),
                *(undefined2 *)(iVar3 + 0x57a),0xff,local_102,unaff_SS);
  FUN_1060_5b8d(&stack0xfffe,DAT_1160_0246,*(undefined2 *)(iVar3 + 0x554),
                *(undefined2 *)(iVar3 + 0x556),0xff,local_102,unaff_SS);
  FUN_1060_5b8d(&stack0xfffe,DAT_1160_0248,*(undefined2 *)(iVar3 + 0x5b4),
                *(undefined2 *)(iVar3 + 0x5b6),0xff,local_102,unaff_SS);
  if (local_102[0] != '\0') {
    puVar2 = (undefined4 *)*(undefined4 *)(local_106 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)(0x1060,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),local_102);
  }
  local_102[0] = '\0';
  FUN_1060_5b8d(&stack0xfffe,DAT_1160_0242,*(undefined2 *)(iVar3 + 0x574),
                *(undefined2 *)(iVar3 + 0x576),0xff,local_102,unaff_SS);
  FUN_1060_5b8d(&stack0xfffe,DAT_1160_0244,*(undefined2 *)(iVar3 + 0x5e0),
                *(undefined2 *)(iVar3 + 0x5e2),0xff,local_102,unaff_SS);
  FUN_1060_5b8d(&stack0xfffe,DAT_1160_0246,*(undefined2 *)(iVar3 + 0x558),
                *(undefined2 *)(iVar3 + 0x55a),0xff,local_102,unaff_SS);
  FUN_1060_5b8d(&stack0xfffe,DAT_1160_0248,*(undefined2 *)(iVar3 + 0x5b8),
                *(undefined2 *)(iVar3 + 0x5ba),0xff,local_102,unaff_SS);
  if (local_102[0] != '\0') {
    puVar2 = (undefined4 *)*(undefined4 *)(local_106 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)(0x1060,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),local_102);
  }
  local_102[0] = '\0';
  FUN_1060_5b8d(&stack0xfffe,DAT_1160_0242,*(undefined2 *)(iVar3 + 0x594),
                *(undefined2 *)(iVar3 + 0x596),0xff,local_102,unaff_SS);
  puVar5 = local_206;
  uVar6 = unaff_SS;
  FUN_1158_17cd(local_102,unaff_SS);
  FUN_1158_184c(0x5e85,0x1158);
  FUN_1158_17e7(0xff,local_102,unaff_SS,puVar5,uVar6);
  FUN_1060_5b8d(&stack0xfffe,DAT_1160_0246,*(undefined2 *)(iVar3 + 0x598),
                *(undefined2 *)(iVar3 + 0x59a),0xff,local_102,unaff_SS);
  FUN_1060_5b8d(&stack0xfffe,DAT_1160_0248,*(undefined2 *)(iVar3 + 0x5bc),
                *(undefined2 *)(iVar3 + 0x5be),0xff,local_102,unaff_SS);
  if (local_102[0] != '\0') {
    puVar2 = (undefined4 *)*(undefined4 *)(local_106 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)(0x1060,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),local_102);
  }
  local_102[0] = '\0';
  FUN_1060_5b8d(&stack0xfffe,DAT_1160_0242,*(undefined2 *)(iVar3 + 0x580),
                *(undefined2 *)(iVar3 + 0x582),0xff,local_102,unaff_SS);
  puVar5 = local_206;
  uVar6 = unaff_SS;
  FUN_1158_17cd(local_102,unaff_SS);
  FUN_1158_184c(0x5e85,0x1158);
  FUN_1158_17e7(0xff,local_102,unaff_SS,puVar5,uVar6);
  FUN_1060_5b8d(&stack0xfffe,DAT_1160_0246,*(undefined2 *)(iVar3 + 0x55c),
                *(undefined2 *)(iVar3 + 0x55e),0xff,local_102,unaff_SS);
  FUN_1060_5b8d(&stack0xfffe,DAT_1160_0248,*(undefined2 *)(iVar3 + 0x5c0),
                *(undefined2 *)(iVar3 + 0x5c2),0xff,local_102,unaff_SS);
  if (local_102[0] != '\0') {
    puVar2 = (undefined4 *)*(undefined4 *)(local_106 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)(0x1060,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),local_102);
  }
  local_102[0] = '\0';
  FUN_1060_5b8d(&stack0xfffe,DAT_1160_0242,*(undefined2 *)(iVar3 + 0x584),
                *(undefined2 *)(iVar3 + 0x586),0xff,local_102,unaff_SS);
  puVar5 = local_206;
  uVar6 = unaff_SS;
  FUN_1158_17cd(local_102,unaff_SS);
  FUN_1158_184c(0x5e85,0x1158);
  FUN_1158_17e7(0xff,local_102,unaff_SS,puVar5,uVar6);
  FUN_1060_5b8d(&stack0xfffe,DAT_1160_0246,*(undefined2 *)(iVar3 + 0x560),
                *(undefined2 *)(iVar3 + 0x562),0xff,local_102,unaff_SS);
  FUN_1060_5b8d(&stack0xfffe,DAT_1160_0248,*(undefined2 *)(iVar3 + 0x5c4),
                *(undefined2 *)(iVar3 + 0x5c6),0xff,local_102,unaff_SS);
  if (local_102[0] != '\0') {
    puVar2 = (undefined4 *)*(undefined4 *)(local_106 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)(0x1060,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),local_102);
  }
  local_102[0] = '\0';
  FUN_1060_5b8d(&stack0xfffe,DAT_1160_0242,*(undefined2 *)(iVar3 + 0x5a4),
                *(undefined2 *)(iVar3 + 0x5a6),0xff,local_102,unaff_SS);
  puVar5 = local_206;
  uVar6 = unaff_SS;
  FUN_1158_17cd(local_102,unaff_SS);
  FUN_1158_184c(0x5e85,0x1158);
  FUN_1158_17e7(0xff,local_102,unaff_SS,puVar5,uVar6);
  FUN_1060_5b8d(&stack0xfffe,DAT_1160_0246,*(undefined2 *)(iVar3 + 0x5a8),
                *(undefined2 *)(iVar3 + 0x5aa),0xff,local_102,unaff_SS);
  FUN_1060_5b8d(&stack0xfffe,DAT_1160_0248,*(undefined2 *)(iVar3 + 0x5c8),
                *(undefined2 *)(iVar3 + 0x5ca),0xff,local_102,unaff_SS);
  if (local_102[0] != '\0') {
    puVar2 = (undefined4 *)*(undefined4 *)(local_106 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)(0x1060,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),local_102);
  }
  local_102[0] = '\0';
  FUN_1060_5b8d(&stack0xfffe,DAT_1160_0242,*(undefined2 *)(iVar3 + 0x588),
                *(undefined2 *)(iVar3 + 0x58a),0xff,local_102,unaff_SS);
  puVar5 = local_206;
  uVar6 = unaff_SS;
  FUN_1158_17cd(local_102,unaff_SS);
  FUN_1158_184c(0x5e85,0x1158);
  FUN_1158_17e7(0xff,local_102,unaff_SS,puVar5,uVar6);
  FUN_1060_5b8d(&stack0xfffe,DAT_1160_0246,*(undefined2 *)(iVar3 + 0x564),
                *(undefined2 *)(iVar3 + 0x566),0xff,local_102,unaff_SS);
  FUN_1060_5b8d(&stack0xfffe,DAT_1160_0248,*(undefined2 *)(iVar3 + 0x5cc),
                *(undefined2 *)(iVar3 + 0x5ce),0xff,local_102,unaff_SS);
  if (local_102[0] != '\0') {
    puVar2 = (undefined4 *)*(undefined4 *)(local_106 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)(0x1060,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),local_102);
  }
  local_102[0] = '\0';
  FUN_1060_5b8d(&stack0xfffe,DAT_1160_0242,*(undefined2 *)(iVar3 + 0x58c),
                *(undefined2 *)(iVar3 + 0x58e),0xff,local_102,unaff_SS);
  puVar5 = local_206;
  uVar6 = unaff_SS;
  FUN_1158_17cd(local_102,unaff_SS);
  FUN_1158_184c(0x5e85,0x1158);
  FUN_1158_17e7(0xff,local_102,unaff_SS,puVar5,uVar6);
  FUN_1060_5b8d(&stack0xfffe,DAT_1160_0246,*(undefined2 *)(iVar3 + 0x568),
                *(undefined2 *)(iVar3 + 0x56a),0xff,local_102,unaff_SS);
  FUN_1060_5b8d(&stack0xfffe,DAT_1160_0248,*(undefined2 *)(iVar3 + 0x5d0),
                *(undefined2 *)(iVar3 + 0x5d2),0xff,local_102,unaff_SS);
  if (local_102[0] != '\0') {
    puVar2 = (undefined4 *)*(undefined4 *)(local_106 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)(0x1060,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),local_102);
  }
  local_102[0] = '\0';
  FUN_1060_5b8d(&stack0xfffe,DAT_1160_0242,*(undefined2 *)(iVar3 + 0x5e4),
                *(undefined2 *)(iVar3 + 0x5e6),0xff,local_102,unaff_SS);
  puVar5 = local_206;
  uVar6 = unaff_SS;
  FUN_1158_17cd(local_102,unaff_SS);
  FUN_1158_184c(0x5e85,0x1158);
  FUN_1158_17e7(0xff,local_102,unaff_SS,puVar5,uVar6);
  FUN_1060_5b8d(&stack0xfffe,DAT_1160_0246,*(undefined2 *)(iVar3 + 0x5e8),
                *(undefined2 *)(iVar3 + 0x5ea),0xff,local_102,unaff_SS);
  FUN_1060_5b8d(&stack0xfffe,DAT_1160_0248,*(undefined2 *)(iVar3 + 0x5d4),
                *(undefined2 *)(iVar3 + 0x5d6),0xff,local_102,unaff_SS);
  if (local_102[0] != '\0') {
    puVar2 = (undefined4 *)*(undefined4 *)(local_106 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)(0x1060,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),local_102);
  }
  local_102[0] = '\0';
  FUN_1060_5b8d(&stack0xfffe,DAT_1160_0242,*(undefined2 *)(iVar3 + 0x59c),
                *(undefined2 *)(iVar3 + 0x59e),0xff,local_102,unaff_SS);
  puVar5 = local_206;
  uVar6 = unaff_SS;
  FUN_1158_17cd(local_102,unaff_SS);
  FUN_1158_184c(0x5e85,0x1158);
  FUN_1158_17e7(0xff,local_102,unaff_SS,puVar5,uVar6);
  FUN_1060_5b8d(&stack0xfffe,DAT_1160_0246,*(undefined2 *)(iVar3 + 0x5a0),
                *(undefined2 *)(iVar3 + 0x5a2),0xff,local_102,unaff_SS);
  FUN_1060_5b8d(&stack0xfffe,DAT_1160_0248,*(undefined2 *)(iVar3 + 0x5dc),
                *(undefined2 *)(iVar3 + 0x5de),0xff,local_102,unaff_SS);
  if (local_102[0] != '\0') {
    puVar2 = (undefined4 *)*(undefined4 *)(local_106 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)(0x1060,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),local_102);
  }
  local_102[0] = '\0';
  FUN_1060_5b8d(&stack0xfffe,DAT_1160_0242,*(undefined2 *)(iVar3 + 0x590),
                *(undefined2 *)(iVar3 + 0x592),0xff,local_102,unaff_SS);
  puVar5 = local_206;
  uVar6 = unaff_SS;
  FUN_1158_17cd(local_102,unaff_SS);
  FUN_1158_184c(0x5e85,0x1158);
  FUN_1158_17e7(0xff,local_102,unaff_SS,puVar5,uVar6);
  FUN_1060_5b8d(&stack0xfffe,DAT_1160_0246,*(undefined2 *)(iVar3 + 0x56c),
                *(undefined2 *)(iVar3 + 0x56e),0xff,local_102,unaff_SS);
  FUN_1060_5b8d(&stack0xfffe,DAT_1160_0248,*(undefined2 *)(iVar3 + 0x5d8),
                *(undefined2 *)(iVar3 + 0x5da),0xff,local_102,unaff_SS);
  if (local_102[0] != '\0') {
    puVar2 = (undefined4 *)*(undefined4 *)(local_106 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)(0x1060,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),local_102);
  }
  if (param_2 == 1) {
    puVar2 = (undefined4 *)*(undefined4 *)(local_106 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)(0x1060,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),0x5e87,0x1060);
  }
  local_102[0] = '\0';
  FUN_1060_5b8d(&stack0xfffe,DAT_1160_0240,*(undefined2 *)(iVar3 + 0x5f0),
                *(undefined2 *)(iVar3 + 0x5f2),0xff,local_102,unaff_SS);
  puVar5 = local_206;
  uVar6 = unaff_SS;
  FUN_1158_17cd(local_102,unaff_SS);
  FUN_1158_184c(0x5e85,0x1158);
  FUN_1158_17e7(0xff,local_102,unaff_SS,puVar5,uVar6);
  FUN_1060_5b8d(&stack0xfffe,DAT_1160_0246,*(undefined2 *)(iVar3 + 0x608),
                *(undefined2 *)(iVar3 + 0x60a),0xff,local_102,unaff_SS);
  FUN_1060_5b8d(&stack0xfffe,DAT_1160_0248,*(undefined2 *)(iVar3 + 0x630),
                *(undefined2 *)(iVar3 + 0x632),0xff,local_102,unaff_SS);
  if (local_102[0] != '\0') {
    puVar2 = (undefined4 *)*(undefined4 *)(local_106 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)(0x1060,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),local_102);
  }
  local_102[0] = '\0';
  FUN_1060_5b8d(&stack0xfffe,DAT_1160_0242,*(undefined2 *)(iVar3 + 0x694),
                *(undefined2 *)(iVar3 + 0x696),0xff,local_102,unaff_SS);
  puVar5 = local_206;
  uVar6 = unaff_SS;
  FUN_1158_17cd(local_102,unaff_SS);
  FUN_1158_184c(0x5e85,0x1158);
  FUN_1158_17e7(0xff,local_102,unaff_SS,puVar5,uVar6);
  FUN_1060_5b8d(&stack0xfffe,DAT_1160_0246,*(undefined2 *)(iVar3 + 0x698),
                *(undefined2 *)(iVar3 + 0x69a),0xff,local_102,unaff_SS);
  FUN_1060_5b8d(&stack0xfffe,DAT_1160_0248,*(undefined2 *)(iVar3 + 0x69c),
                *(undefined2 *)(iVar3 + 0x69e),0xff,local_102,unaff_SS);
  if (local_102[0] != '\0') {
    puVar2 = (undefined4 *)*(undefined4 *)(local_106 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)(0x1060,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),local_102);
  }
  local_102[0] = '\0';
  FUN_1060_5b8d(&stack0xfffe,DAT_1160_0242,*(undefined2 *)(iVar3 + 0x6cc),
                *(undefined2 *)(iVar3 + 0x6ce),0xff,local_102,unaff_SS);
  puVar5 = local_206;
  uVar6 = unaff_SS;
  FUN_1158_17cd(local_102,unaff_SS);
  FUN_1158_184c(0x5e85,0x1158);
  FUN_1158_17e7(0xff,local_102,unaff_SS,puVar5,uVar6);
  FUN_1060_5b8d(&stack0xfffe,DAT_1160_0246,*(undefined2 *)(iVar3 + 0x6d0),
                *(undefined2 *)(iVar3 + 0x6d2),0xff,local_102,unaff_SS);
  FUN_1060_5b8d(&stack0xfffe,DAT_1160_0248,*(undefined2 *)(iVar3 + 0x6d4),
                *(undefined2 *)(iVar3 + 0x6d6),0xff,local_102,unaff_SS);
  if (local_102[0] != '\0') {
    puVar2 = (undefined4 *)*(undefined4 *)(local_106 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)(0x1060,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),local_102);
  }
  local_102[0] = '\0';
  FUN_1060_5b8d(&stack0xfffe,DAT_1160_0242,*(undefined2 *)(iVar3 + 0x6d8),
                *(undefined2 *)(iVar3 + 0x6da),0xff,local_102,unaff_SS);
  puVar5 = local_206;
  uVar6 = unaff_SS;
  FUN_1158_17cd(local_102,unaff_SS);
  FUN_1158_184c(0x5e85,0x1158);
  FUN_1158_17e7(0xff,local_102,unaff_SS,puVar5,uVar6);
  FUN_1060_5b8d(&stack0xfffe,DAT_1160_0246,*(undefined2 *)(iVar3 + 0x6dc),
                *(undefined2 *)(iVar3 + 0x6de),0xff,local_102,unaff_SS);
  FUN_1060_5b8d(&stack0xfffe,DAT_1160_0248,*(undefined2 *)(iVar3 + 0x6e0),
                *(undefined2 *)(iVar3 + 0x6e2),0xff,local_102,unaff_SS);
  if (local_102[0] != '\0') {
    puVar2 = (undefined4 *)*(undefined4 *)(local_106 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)(0x1060,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),local_102);
  }
  local_102[0] = '\0';
  if (*(char *)((int)*(undefined4 *)(iVar3 + 0x60c) + 0x29) != '\0') {
    FUN_1060_5b8d(&stack0xfffe,DAT_1160_0242,*(undefined2 *)(iVar3 + 0x60c),
                  *(undefined2 *)(iVar3 + 0x60e),0xff,local_102,unaff_SS);
    FUN_1060_5b8d(&stack0xfffe,DAT_1160_0244,*(undefined2 *)(iVar3 + 0x660),
                  *(undefined2 *)(iVar3 + 0x662),0xff,local_102,unaff_SS);
    FUN_1060_5b8d(&stack0xfffe,DAT_1160_0246,*(undefined2 *)(iVar3 + 0x5f4),
                  *(undefined2 *)(iVar3 + 0x5f6),0xff,local_102,unaff_SS);
    FUN_1060_5b8d(&stack0xfffe,DAT_1160_0248,*(undefined2 *)(iVar3 + 0x634),
                  *(undefined2 *)(iVar3 + 0x636),0xff,local_102,unaff_SS);
  }
  if (local_102[0] != '\0') {
    puVar2 = (undefined4 *)*(undefined4 *)(local_106 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)(0x1060,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),local_102);
  }
  local_102[0] = '\0';
  if (*(char *)((int)*(undefined4 *)(iVar3 + 0x61c) + 0x29) != '\0') {
    FUN_1060_5b8d(&stack0xfffe,DAT_1160_0242,*(undefined2 *)(iVar3 + 0x61c),
                  *(undefined2 *)(iVar3 + 0x61e),0xff,local_102,unaff_SS);
    FUN_1060_5b8d(&stack0xfffe,DAT_1160_0244,*(undefined2 *)(iVar3 + 0x664),
                  *(undefined2 *)(iVar3 + 0x666),0xff,local_102,unaff_SS);
    FUN_1060_5b8d(&stack0xfffe,DAT_1160_0246,*(undefined2 *)(iVar3 + 0x624),
                  *(undefined2 *)(iVar3 + 0x626),0xff,local_102,unaff_SS);
    FUN_1060_5b8d(&stack0xfffe,DAT_1160_0248,*(undefined2 *)(iVar3 + 0x638),
                  *(undefined2 *)(iVar3 + 0x63a),0xff,local_102,unaff_SS);
  }
  if (local_102[0] != '\0') {
    puVar2 = (undefined4 *)*(undefined4 *)(local_106 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)(0x1060,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),local_102);
  }
  local_102[0] = '\0';
  if (*(char *)((int)*(undefined4 *)(iVar3 + 0x620) + 0x29) != '\0') {
    FUN_1060_5b8d(&stack0xfffe,DAT_1160_0242,*(undefined2 *)(iVar3 + 0x620),
                  *(undefined2 *)(iVar3 + 0x622),0xff,local_102,unaff_SS);
    FUN_1060_5b8d(&stack0xfffe,DAT_1160_0244,*(undefined2 *)(iVar3 + 0x668),
                  *(undefined2 *)(iVar3 + 0x66a),0xff,local_102,unaff_SS);
    FUN_1060_5b8d(&stack0xfffe,DAT_1160_0246,*(undefined2 *)(iVar3 + 0x628),
                  *(undefined2 *)(iVar3 + 0x62a),0xff,local_102,unaff_SS);
    FUN_1060_5b8d(&stack0xfffe,DAT_1160_0248,*(undefined2 *)(iVar3 + 0x63c),
                  *(undefined2 *)(iVar3 + 0x63e),0xff,local_102,unaff_SS);
  }
  if (local_102[0] != '\0') {
    puVar2 = (undefined4 *)*(undefined4 *)(local_106 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)(0x1060,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),local_102);
  }
  local_102[0] = '\0';
  FUN_1060_5b8d(&stack0xfffe,DAT_1160_0242,*(undefined2 *)(iVar3 + 0x610),
                *(undefined2 *)(iVar3 + 0x612),0xff,local_102,unaff_SS);
  puVar5 = local_206;
  uVar6 = unaff_SS;
  FUN_1158_17cd(local_102,unaff_SS);
  FUN_1158_184c(0x5e85,0x1158);
  FUN_1158_17e7(0xff,local_102,unaff_SS,puVar5,uVar6);
  FUN_1060_5b8d(&stack0xfffe,DAT_1160_0246,*(undefined2 *)(iVar3 + 0x5f8),
                *(undefined2 *)(iVar3 + 0x5fa),0xff,local_102,unaff_SS);
  FUN_1060_5b8d(&stack0xfffe,DAT_1160_0248,*(undefined2 *)(iVar3 + 0x640),
                *(undefined2 *)(iVar3 + 0x642),0xff,local_102,unaff_SS);
  if (local_102[0] != '\0') {
    puVar2 = (undefined4 *)*(undefined4 *)(local_106 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)(0x1060,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),local_102);
  }
  local_102[0] = '\0';
  FUN_1060_5b8d(&stack0xfffe,DAT_1160_0242,*(undefined2 *)(iVar3 + 0x614),
                *(undefined2 *)(iVar3 + 0x616),0xff,local_102,unaff_SS);
  puVar5 = local_206;
  uVar6 = unaff_SS;
  FUN_1158_17cd(local_102,unaff_SS);
  FUN_1158_184c(0x5e85,0x1158);
  FUN_1158_17e7(0xff,local_102,unaff_SS,puVar5,uVar6);
  FUN_1060_5b8d(&stack0xfffe,DAT_1160_0246,*(undefined2 *)(iVar3 + 0x5fc),
                *(undefined2 *)(iVar3 + 0x5fe),0xff,local_102,unaff_SS);
  FUN_1060_5b8d(&stack0xfffe,DAT_1160_0248,*(undefined2 *)(iVar3 + 0x644),
                *(undefined2 *)(iVar3 + 0x646),0xff,local_102,unaff_SS);
  if (local_102[0] != '\0') {
    puVar2 = (undefined4 *)*(undefined4 *)(local_106 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)(0x1060,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),local_102);
  }
  local_102[0] = '\0';
  FUN_1060_5b8d(&stack0xfffe,DAT_1160_0242,*(undefined2 *)(iVar3 + 0x658),
                *(undefined2 *)(iVar3 + 0x65a),0xff,local_102,unaff_SS);
  FUN_1060_5b8d(&stack0xfffe,DAT_1160_0244,*(undefined2 *)(iVar3 + 0x66c),
                *(undefined2 *)(iVar3 + 0x66e),0xff,local_102,unaff_SS);
  FUN_1060_5b8d(&stack0xfffe,DAT_1160_0246,*(undefined2 *)(iVar3 + 0x600),
                *(undefined2 *)(iVar3 + 0x602),0xff,local_102,unaff_SS);
  FUN_1060_5b8d(&stack0xfffe,DAT_1160_0248,*(undefined2 *)(iVar3 + 0x648),
                *(undefined2 *)(iVar3 + 0x64a),0xff,local_102,unaff_SS);
  if (local_102[0] != '\0') {
    puVar2 = (undefined4 *)*(undefined4 *)(local_106 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)(0x1060,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),local_102);
  }
  local_102[0] = '\0';
  FUN_1060_5b8d(&stack0xfffe,DAT_1160_0242,*(undefined2 *)(iVar3 + 0x658),
                *(undefined2 *)(iVar3 + 0x65a),0xff,local_102,unaff_SS);
  FUN_1060_5b8d(&stack0xfffe,DAT_1160_0244,*(undefined2 *)(iVar3 + 0x670),
                *(undefined2 *)(iVar3 + 0x672),0xff,local_102,unaff_SS);
  FUN_1060_5b8d(&stack0xfffe,DAT_1160_0246,*(undefined2 *)(iVar3 + 0x604),
                *(undefined2 *)(iVar3 + 0x606),0xff,local_102,unaff_SS);
  FUN_1060_5b8d(&stack0xfffe,DAT_1160_0248,*(undefined2 *)(iVar3 + 0x64c),
                *(undefined2 *)(iVar3 + 0x64e),0xff,local_102,unaff_SS);
  if (local_102[0] != '\0') {
    puVar2 = (undefined4 *)*(undefined4 *)(local_106 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)(0x1060,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),local_102);
  }
  local_102[0] = '\0';
  FUN_1060_5b8d(&stack0xfffe,DAT_1160_0242,*(undefined2 *)(iVar3 + 0x654),
                *(undefined2 *)(iVar3 + 0x656),0xff,local_102,unaff_SS);
  puVar5 = local_206;
  uVar6 = unaff_SS;
  FUN_1158_17cd(local_102,unaff_SS);
  FUN_1158_184c(0x5e85,0x1158);
  FUN_1158_17e7(0xff,local_102,unaff_SS,puVar5,uVar6);
  FUN_1060_5b8d(&stack0xfffe,DAT_1160_0246,*(undefined2 *)(iVar3 + 0x618),
                *(undefined2 *)(iVar3 + 0x61a),0xff,local_102,unaff_SS);
  FUN_1060_5b8d(&stack0xfffe,DAT_1160_0248,*(undefined2 *)(iVar3 + 0x650),
                *(undefined2 *)(iVar3 + 0x652),0xff,local_102,unaff_SS);
  if (local_102[0] != '\0') {
    puVar2 = (undefined4 *)*(undefined4 *)(local_106 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)(0x1060,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),local_102);
  }
  return;
}



/* ---- TFormSERS_Situation_Situation1Click @ 1060:77c1  (46 octets) ---- */

void __stdcall16far TFormSERS_Situation_Situation1Click(undefined4 param_1)

{
  int iVar1;
  undefined2 uVar2;
  
  FUN_1158_0444();
  DAT_1160_0144 = 0x15;
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  DAT_1160_0146 = *(undefined2 *)(iVar1 + 0x7f4);
  DAT_1160_0148 = *(undefined2 *)(iVar1 + 0x7f2);
  FUN_1140_5556(iVar1,uVar2);
  return;
}



/* ---- TFormSERS_Situation_CompteDeResultats1Click @ 1060:77ef  (46 octets) ---- */

void __stdcall16far TFormSERS_Situation_CompteDeResultats1Click(undefined4 param_1)

{
  int iVar1;
  undefined2 uVar2;
  
  FUN_1158_0444();
  DAT_1160_0144 = 0x16;
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  DAT_1160_0146 = *(undefined2 *)(iVar1 + 0x7f4);
  DAT_1160_0148 = *(undefined2 *)(iVar1 + 0x7f2);
  FUN_1140_5556(iVar1,uVar2);
  return;
}



/* ---- TFormSERS_Situation_Bilan1Click @ 1060:781d  (46 octets) ---- */

void __stdcall16far TFormSERS_Situation_Bilan1Click(undefined4 param_1)

{
  int iVar1;
  undefined2 uVar2;
  
  FUN_1158_0444();
  DAT_1160_0144 = 0x17;
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  DAT_1160_0146 = *(undefined2 *)(iVar1 + 0x7f4);
  DAT_1160_0148 = *(undefined2 *)(iVar1 + 0x7f2);
  FUN_1140_5556(iVar1,uVar2);
  return;
}



/* ---- TFormSERS_Situation_TableauDeFinancement1Click @ 1060:784b  (46 octets) ---- */

void __stdcall16far TFormSERS_Situation_TableauDeFinancement1Click(undefined4 param_1)

{
  int iVar1;
  undefined2 uVar2;
  
  FUN_1158_0444();
  DAT_1160_0144 = 0x18;
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  DAT_1160_0146 = *(undefined2 *)(iVar1 + 0x7f4);
  DAT_1160_0148 = *(undefined2 *)(iVar1 + 0x7f2);
  FUN_1140_5556(iVar1,uVar2);
  return;
}



/* ---- TFormSERS_Situation_TableauDeTresorerie1Click @ 1060:7879  (46 octets) ---- */

void __stdcall16far TFormSERS_Situation_TableauDeTresorerie1Click(undefined4 param_1)

{
  int iVar1;
  undefined2 uVar2;
  
  FUN_1158_0444();
  DAT_1160_0144 = 0x19;
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  DAT_1160_0146 = *(undefined2 *)(iVar1 + 0x7f4);
  DAT_1160_0148 = *(undefined2 *)(iVar1 + 0x7f2);
  FUN_1140_5556(iVar1,uVar2);
  return;
}



/* ---- TFormSERS_Situation_SIG1Click @ 1060:78a7  (46 octets) ---- */

void __stdcall16far TFormSERS_Situation_SIG1Click(undefined4 param_1)

{
  int iVar1;
  undefined2 uVar2;
  
  FUN_1158_0444();
  DAT_1160_0144 = 0x1a;
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  DAT_1160_0146 = *(undefined2 *)(iVar1 + 0x7f4);
  DAT_1160_0148 = *(undefined2 *)(iVar1 + 0x7f2);
  FUN_1140_5556(iVar1,uVar2);
  return;
}



/* ---- TFormSERS_Situation_RappelDesDecisions1Click @ 1060:78d5  (36 octets) ---- */

void __stdcall16far TFormSERS_Situation_RappelDesDecisions1Click(undefined4 param_1)

{
  undefined2 uVar1;
  
  FUN_1158_0444();
  uVar1 = (undefined2)((ulong)param_1 >> 0x10);
  FUN_1078_0ca1(*(undefined2 *)((int)param_1 + 0x7f4),*(undefined2 *)((int)param_1 + 0x7f2),
                DAT_1160_0150);
  return;
}




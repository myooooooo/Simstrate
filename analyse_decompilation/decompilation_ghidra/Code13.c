/* Simstrat (FR).EXE - segment Code13 - 42 fonctions
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



/* ---- FUN_1060_2a6b @ 1060:2a6b  (77 octets) ---- */

void __stdcall16far FUN_1060_2a6b(undefined4 param_1,undefined2 param_2,undefined2 param_3)

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



/* ---- FUN_1060_2ab8 @ 1060:2ab8  (86 octets) ---- */

void __stdcall16far
FUN_1060_2ab8(undefined4 param_1,undefined2 param_2_00,int *param_2,undefined2 param_3,
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



/* ---- FUN_1060_406e @ 1060:406e  (27 octets) ---- */

void __stdcall16far FUN_1060_406e(void)

{
  FUN_1158_0444();
  FUN_1140_63a9((int)DAT_1160_2c2e,(int)((ulong)DAT_1160_2c2e >> 0x10),0xfffe);
  return;
}



/* ---- FUN_1060_4089 @ 1060:4089  (31 octets) ---- */

void __stdcall16far FUN_1060_4089(undefined4 param_1,undefined *param_2)

{
  FUN_1158_0444();
  FUN_1060_39f1((int)param_1,(int)((ulong)param_1 >> 0x10));
  *param_2 = 1;
  return;
}



/* ---- FUN_1060_40a8 @ 1060:40a8  (24 octets) ---- */

void __stdcall16far FUN_1060_40a8(undefined4 param_1)

{
  FUN_1158_0444();
  FUN_1140_5556((int)param_1,(int)((ulong)param_1 >> 0x10));
  return;
}



/* ---- FUN_1060_40c0 @ 1060:40c0  (48 octets) ---- */

void __stdcall16far FUN_1060_40c0(undefined4 param_1)

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



/* ---- FUN_1060_4219 @ 1060:4219  (41 octets) ---- */

void __stdcall16far FUN_1060_4219(undefined4 param_1)

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



/* ---- FUN_1060_4242 @ 1060:4242  (21 octets) ---- */

void __stdcall16far FUN_1060_4242(void)

{
  FUN_1158_0444();
  MESSAGEBEEP(0x1158,0);
  return;
}



/* ---- FUN_1060_4257 @ 1060:4257  (71 octets) ---- */

void __stdcall16far FUN_1060_4257(undefined4 param_1)

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



/* ---- FUN_1060_429e @ 1060:429e  (246 octets) ---- */

void __stdcall16far FUN_1060_429e(undefined4 param_1,undefined2 param_2,undefined2 param_3)

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



/* ---- FUN_1060_5415 @ 1060:5415  (43 octets) ---- */

void __stdcall16far FUN_1060_5415(undefined4 param_1)

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



/* ---- FUN_1060_5440 @ 1060:5440  (31 octets) ---- */

void __stdcall16far FUN_1060_5440(void)

{
  FUN_1158_0444();
  FUN_1140_77b2((int)DAT_1160_2c2a,(int)((ulong)DAT_1160_2c2a >> 0x10),0,0,3);
  return;
}



/* ---- FUN_1060_545f @ 1060:545f  (33 octets) ---- */

void __stdcall16far FUN_1060_545f(void)

{
  FUN_1158_0444();
  FUN_1140_77b2((int)DAT_1160_2c2a,(int)((ulong)DAT_1160_2c2a >> 0x10),0x23c,0x1160,0x105);
  return;
}



/* ---- FUN_1060_5480 @ 1060:5480  (31 octets) ---- */

void __stdcall16far FUN_1060_5480(void)

{
  FUN_1158_0444();
  FUN_1140_77b2((int)DAT_1160_2c2a,(int)((ulong)DAT_1160_2c2a >> 0x10),0,0,4);
  return;
}



/* ---- FUN_1060_549f @ 1060:549f  (29 octets) ---- */

void __stdcall16far FUN_1060_549f(void)

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



/* ---- FUN_1060_5537 @ 1060:5537  (183 octets) ---- */

void __stdcall16far FUN_1060_5537(undefined4 param_1)

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



/* ---- FUN_1060_55ee @ 1060:55ee  (105 octets) ---- */

void __stdcall16far FUN_1060_55ee(void)

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



/* ---- FUN_1060_5657 @ 1060:5657  (43 octets) ---- */

void __stdcall16far FUN_1060_5657(undefined4 param_1)

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



/* ---- FUN_1060_5b42 @ 1060:5b42  (71 octets) ---- */

void __stdcall16far FUN_1060_5b42(undefined4 param_1)

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



/* ---- FUN_1060_77c1 @ 1060:77c1  (46 octets) ---- */

void __stdcall16far FUN_1060_77c1(undefined4 param_1)

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



/* ---- FUN_1060_77ef @ 1060:77ef  (46 octets) ---- */

void __stdcall16far FUN_1060_77ef(undefined4 param_1)

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



/* ---- FUN_1060_781d @ 1060:781d  (46 octets) ---- */

void __stdcall16far FUN_1060_781d(undefined4 param_1)

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



/* ---- FUN_1060_784b @ 1060:784b  (46 octets) ---- */

void __stdcall16far FUN_1060_784b(undefined4 param_1)

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



/* ---- FUN_1060_7879 @ 1060:7879  (46 octets) ---- */

void __stdcall16far FUN_1060_7879(undefined4 param_1)

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



/* ---- FUN_1060_78a7 @ 1060:78a7  (46 octets) ---- */

void __stdcall16far FUN_1060_78a7(undefined4 param_1)

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



/* ---- FUN_1060_78d5 @ 1060:78d5  (36 octets) ---- */

void __stdcall16far FUN_1060_78d5(undefined4 param_1)

{
  undefined2 uVar1;
  
  FUN_1158_0444();
  uVar1 = (undefined2)((ulong)param_1 >> 0x10);
  FUN_1078_0ca1(*(undefined2 *)((int)param_1 + 0x7f4),*(undefined2 *)((int)param_1 + 0x7f2),
                DAT_1160_0150);
  return;
}




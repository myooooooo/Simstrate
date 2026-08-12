/* Simstrat (FR).EXE - segment Code9 - 41 fonctions
   Decompile par Ghidra 11.2.1 (x86 16 bits, chargeur NE). */

/* ---- FUN_1040_13ff @ 1040:13ff  (43 octets) ---- */

void __stdcall16far FUN_1040_13ff(undefined4 param_1)

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



/* ---- FUN_1040_1430 @ 1040:1430  (188 octets) ---- */

void __stdcall16far FUN_1040_1430(undefined2 param_1,int param_2)

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
  
  _local_6 = CONCAT22(unaff_CS,0x143b);
  FUN_1158_0444();
  uStack_c = (undefined2)((ulong)DAT_1160_2c2a >> 0x10);
  uStack_e = (undefined2)DAT_1160_2c2a;
  uStack_10 = 0x1158;
  uStack_12 = 0x1449;
  FUN_1140_7303();
  if (param_2 < 1) {
    return;
  }
  uStack_c = DAT_1160_2c2a._2_2_;
  uStack_e = (undefined2)DAT_1160_2c2a;
  uStack_10 = CONCAT11(extraout_AH,1);
  uStack_12 = 0x1040;
  uStack_14 = 0x22;
  uStack_16 = 0x1140;
  uStack_18 = 0x146a;
  local_a = FUN_1140_2553();
  uVar2 = (undefined2)((ulong)local_a >> 0x10);
  local_6 = (int)local_a;
  uStack_16 = 0x1140;
  uStack_18 = 0x142a;
  uStack_1c = DAT_1160_1858;
  DAT_1160_1858 = &uStack_1c;
  *(undefined2 *)(local_6 + 0x580) = param_1;
  *(int *)(local_6 + 0x57e) = param_2;
  puStack_1a = &stack0xfffe;
  FUN_1040_2123(local_a);
  FUN_1040_2bfe(local_a,*(undefined2 *)((int)local_a + 0x57e));
  FUN_1138_1ed5(local_a,0xfff0,0xffff);
  FUN_1140_3a14(local_a,2);
  uVar1 = (int)local_a;
  FUN_1140_5d45(local_a);
  DAT_1160_1858 = (undefined2 *)uVar1;
  puStack_1a = (undefined *)0x1140;
  uStack_1c = 0x14e8;
  FUN_1140_5f1d(local_6,uVar2);
  return;
}



/* ---- FUN_1040_14f2 @ 1040:14f2  (333 octets) ---- */

void __stdcall16far FUN_1040_14f2(char param_1,undefined2 param_2,int param_3)

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
  
  _local_6 = CONCAT22(unaff_CS,0x14fd);
  FUN_1158_0444();
  uStack_e = (undefined2)((ulong)DAT_1160_2c2a >> 0x10);
  uStack_10 = (undefined2)DAT_1160_2c2a;
  uStack_12 = 0x1158;
  uStack_14 = 0x150b;
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
  uStack_14 = 0x1040;
  uStack_16 = 0x22;
  uStack_18 = 0x1140;
  uStack_1a = 0x1554;
  local_c = FUN_1140_2553();
  uVar3 = (undefined2)((ulong)local_c >> 0x10);
  local_6 = (int)local_c;
  uStack_18 = 0x1140;
  uStack_1a = 0x14ec;
  uStack_1e = DAT_1160_1858;
  DAT_1160_1858 = &uStack_1e;
  *(undefined2 *)(local_6 + 0x580) = param_2;
  *(int *)(local_6 + 0x57e) = param_3;
  puStack_1c = &stack0xfffe;
  FUN_1040_2123(local_c);
  FUN_1040_2bfe(local_c,*(undefined2 *)((int)local_c + 0x57e));
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
    uVar4 = 0x1040;
    FUN_1040_5229(local_6,uVar3);
    DAT_1160_1858 = (undefined2 *)uVar2;
  }
  puStack_1c = (undefined *)0x163b;
  uStack_1e = uVar3;
  uStack_1a = uVar4;
  FUN_1140_5f1d(local_6);
  return;
}



/* ---- FUN_1040_163f @ 1040:163f  (34 octets) ---- */

void __stdcall16far FUN_1040_163f(undefined4 param_1)

{
  undefined2 uVar1;
  
  FUN_1158_0444();
  uVar1 = (undefined2)((ulong)param_1 >> 0x10);
  FUN_1040_14f2(0,*(undefined2 *)((int)param_1 + 0x580),*(undefined2 *)((int)param_1 + 0x57e));
  return;
}



/* ---- FUN_1040_1768 @ 1040:1768  (1136 octets) ---- */

void __stdcall16far FUN_1040_1768(undefined4 param_1,undefined4 param_2)

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
  
  local_6 = 0x1773;
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



/* ---- FUN_1040_1bd8 @ 1040:1bd8  (77 octets) ---- */

void __stdcall16far FUN_1040_1bd8(undefined4 param_1,undefined2 param_2,undefined2 param_3)

{
  undefined4 uVar1;
  char cVar2;
  char cVar3;
  
  FUN_1158_0444();
  cVar2 = FUN_1158_2255(0xba2,0x10d0,param_2,param_3);
  cVar3 = FUN_1158_2255(0x22,0x10d0,param_2,param_3);
  if (cVar3 != '\0' || cVar2 != '\0') {
    uVar1 = *(undefined4 *)((int)param_1 + 0x248);
    FUN_1138_1c77((int)uVar1,(int)((ulong)uVar1 >> 0x10),0);
  }
  return;
}



/* ---- FUN_1040_1c25 @ 1040:1c25  (86 octets) ---- */

void __stdcall16far
FUN_1040_1c25(undefined4 param_1,undefined2 param_2_00,int *param_2,undefined2 param_3,
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
      uVar1 = *(undefined4 *)((int)param_1 + 0x248);
      FUN_1138_1c77((int)uVar1,(int)((ulong)uVar1 >> 0x10),0);
    }
  }
  return;
}



/* ---- FUN_1040_209b @ 1040:209b  (136 octets) ---- */

void __stdcall16far FUN_1040_209b(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined4 uVar6;
  undefined2 uVar7;
  
  uVar7 = 0x20a6;
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
        FUN_1040_1768(uVar4,uVar5,uVar6);
      }
      if (iVar2 == iVar3) break;
      iVar2 = iVar2 + 1;
    }
  }
  return;
}



/* ---- FUN_1040_2123 @ 1040:2123  (733 octets) ---- */

void __stdcall16far FUN_1040_2123(undefined4 param_1)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  
  FUN_1158_0444();
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  uVar4 = (undefined2)((ulong)*(undefined4 *)(iVar1 + 0x224) >> 0x10);
  uVar2 = (undefined2)*(undefined4 *)(iVar1 + 0x224);
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
  uVar4 = (undefined2)((ulong)*(undefined4 *)(iVar1 + 0x24c) >> 0x10);
  uVar2 = (undefined2)*(undefined4 *)(iVar1 + 0x24c);
  FUN_10d8_31d2(uVar2,uVar4);
  FUN_10e0_2ffb(uVar2,uVar4,1);
  FUN_10e0_2ed2(uVar2,uVar4,0);
  FUN_10d8_31bf(uVar2,uVar4);
  uVar4 = (undefined2)((ulong)*(undefined4 *)(iVar1 + 0x250) >> 0x10);
  uVar2 = (undefined2)*(undefined4 *)(iVar1 + 0x250);
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



/* ---- FUN_1040_240a @ 1040:240a  (1827 octets) ---- */

void __stdcall16far FUN_1040_240a(undefined4 param_1)

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
  
  uStack_6 = 0x2415;
  FUN_1158_0444();
  puVar10 = local_204;
  uVar6 = (undefined2)((ulong)param_1 >> 0x10);
  iVar5 = (int)param_1;
  uVar7 = unaff_SS;
  FUN_1150_08a9(*(int *)(iVar5 + 0x580),*(int *)(iVar5 + 0x580) >> 0xf);
  FUN_1138_1d8c((int)*(undefined4 *)(iVar5 + 400),(int)((ulong)*(undefined4 *)(iVar5 + 400) >> 0x10)
                ,puVar10,uVar7);
  puVar10 = local_204;
  uVar7 = unaff_SS;
  FUN_1150_08a9(*(int *)(iVar5 + 0x57e),*(int *)(iVar5 + 0x57e) >> 0xf);
  FUN_1138_1d8c((int)*(undefined4 *)(iVar5 + 0x198),
                (int)((ulong)*(undefined4 *)(iVar5 + 0x198) >> 0x10),puVar10,uVar7);
  FUN_1158_17e7(0xff,local_104,unaff_SS,iVar5 + 0x582,uVar6);
  FUN_1158_1878(local_104,unaff_SS,0x2400,0x1158);
  cVar1 = FUN_1158_0416();
  if (cVar1 != '\0') {
    FUN_1158_1975(1,cVar1,local_104,unaff_SS);
    puVar10 = local_204;
    uVar7 = unaff_SS;
    FUN_1150_08a9(*(int *)(iVar5 + 0x57e),*(int *)(iVar5 + 0x57e) >> 0xf);
    FUN_1158_1916(cVar1,0xff,local_104,unaff_SS,puVar10,uVar7);
  }
  FUN_1158_1878(local_104,unaff_SS,0x2400,0x1158);
  cVar1 = FUN_1158_0416();
  if (cVar1 != '\0') {
    FUN_1158_1975(1,cVar1,local_104,unaff_SS);
    puVar10 = local_204;
    uVar7 = unaff_SS;
    FUN_1150_08a9(*(int *)(iVar5 + 0x580),*(int *)(iVar5 + 0x580) >> 0xf);
    FUN_1158_1916(cVar1,0xff,local_104,unaff_SS,puVar10,uVar7);
  }
  uVar7 = 0x1138;
  FUN_1138_1d8c(iVar5,uVar6,local_104,unaff_SS);
  local_108 = *(undefined4 *)(iVar5 + 0x390);
  bVar11 = 0;
  while( true ) {
    uVar2 = bVar11 + 1;
    if (SCARRY2((uint)bVar11,1)) {
      uVar2 = FUN_1158_043e(uVar7);
    }
    uVar3 = uVar2 & 0xff00;
    if (uVar2 == *(uint *)(iVar5 + 0x57e)) {
      uVar3 = uVar3 + 1;
    }
    uVar9 = FUN_1130_1353((int)local_108,(int)((ulong)local_108 >> 0x10),bVar11);
    uVar7 = 0x1130;
    FUN_1130_1275(uVar9,uVar3);
    if (bVar11 == 0x13) break;
    bVar11 = bVar11 + 1;
  }
  local_108 = *(undefined4 *)(iVar5 + 0x21c);
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
    if (uVar2 == *(uint *)(iVar5 + 0x580)) {
      uVar3 = uVar3 + 1;
    }
    uVar9 = FUN_1130_1353((int)local_108,(int)((ulong)local_108 >> 0x10),bVar11);
    uVar7 = 0x1130;
    FUN_1130_1275(uVar9,uVar3);
    if (bVar11 == local_109) break;
    bVar11 = bVar11 + 1;
  }
  local_108._2_2_ = (undefined2)((ulong)*(undefined4 *)(iVar5 + 0x224) >> 0x10);
  local_108._0_2_ = (undefined2)*(undefined4 *)(iVar5 + 0x224);
  local_110 = *(int *)(iVar5 + 0x57e) + -1;
  if (SBORROW2(*(int *)(iVar5 + 0x57e),1)) {
    local_110 = FUN_1158_043e(0x1130);
  }
  local_10e = local_110 >> 0xf;
  local_10c = 0;
  cVar1 = FUN_10e0_2895((undefined2)local_108,local_108._2_2_,0,&local_110,unaff_SS);
  if (cVar1 == '\0') {
    FUN_1040_13ff(iVar5,uVar6);
  }
  local_108 = *(undefined4 *)(iVar5 + 0x1a0);
  local_110 = *(int *)(iVar5 + 0x57e);
  local_10e = local_110 >> 0xf;
  local_10c = 0;
  cVar1 = FUN_10e0_2895((int)local_108,(int)((ulong)local_108 >> 0x10),0,&local_110,unaff_SS);
  if (cVar1 == '\0') {
    FUN_1040_13ff(iVar5,uVar6);
  }
  local_108 = *(undefined4 *)(iVar5 + 0x1a4);
  local_118 = *(int *)(iVar5 + 0x57e);
  local_116 = local_118 >> 0xf;
  local_114 = 0;
  local_110 = 1;
  local_10e = 0;
  local_10c = 0;
  cVar1 = FUN_10e0_2895((int)local_108,(int)((ulong)local_108 >> 0x10),1,&local_118,unaff_SS);
  if (cVar1 == '\0') {
    FUN_1040_13ff(iVar5,uVar6);
  }
  local_108 = *(undefined4 *)(iVar5 + 0x1a8);
  local_118 = *(int *)(iVar5 + 0x57e);
  local_116 = local_118 >> 0xf;
  local_114 = 0;
  local_110 = 2;
  local_10e = 0;
  local_10c = 0;
  pcVar8 = (char *)s_iTime_1160_10dc + 4;
  cVar1 = FUN_10e0_2895((int)local_108,(int)((ulong)local_108 >> 0x10),1,&local_118,unaff_SS);
  if (cVar1 == '\0') {
    pcVar8 = (char *)0x1040;
    FUN_1040_13ff(iVar5,uVar6);
  }
  local_108._2_2_ = (undefined2)((ulong)*(undefined4 *)(iVar5 + 0x1b8) >> 0x10);
  local_108._0_2_ = (undefined2)*(undefined4 *)(iVar5 + 0x1b8);
  iVar4 = *(int *)(iVar5 + 0x57e) + -1;
  if (SBORROW2(*(int *)(iVar5 + 0x57e),1)) {
    iVar4 = FUN_1158_043e(pcVar8);
  }
  local_116 = iVar4 >> 0xf;
  local_114 = 0;
  local_110 = *(int *)(iVar5 + 0x580);
  local_10e = local_110 >> 0xf;
  local_10c = 0;
  pcVar8 = (char *)s_iTime_1160_10dc + 4;
  local_118 = iVar4;
  cVar1 = FUN_10e0_2895((undefined2)local_108,local_108._2_2_,1,&local_118,unaff_SS);
  if (cVar1 == '\0') {
    pcVar8 = (char *)0x1040;
    FUN_1040_13ff(iVar5,uVar6);
  }
  local_108._2_2_ = (undefined2)((ulong)*(undefined4 *)(iVar5 + 0x24c) >> 0x10);
  local_108._0_2_ = (undefined2)*(undefined4 *)(iVar5 + 0x24c);
  local_120 = *(int *)(iVar5 + 0x57e) + -1;
  if (SBORROW2(*(int *)(iVar5 + 0x57e),1)) {
    local_120 = FUN_1158_043e(pcVar8);
  }
  local_11e = local_120 >> 0xf;
  local_11c = 0;
  local_118 = *(int *)(iVar5 + 0x580);
  local_116 = local_118 >> 0xf;
  local_114 = 0;
  local_110 = 1;
  local_10e = 0;
  local_10c = 0;
  pcVar8 = (char *)s_iTime_1160_10dc + 4;
  cVar1 = FUN_10e0_2895((undefined2)local_108,local_108._2_2_,2,&local_120,unaff_SS);
  if (cVar1 == '\0') {
    pcVar8 = (char *)0x1040;
    FUN_1040_13ff(iVar5,uVar6);
  }
  local_108._2_2_ = (undefined2)((ulong)*(undefined4 *)(iVar5 + 0x250) >> 0x10);
  local_108._0_2_ = (undefined2)*(undefined4 *)(iVar5 + 0x250);
  iVar4 = *(int *)(iVar5 + 0x57e) + -1;
  if (SBORROW2(*(int *)(iVar5 + 0x57e),1)) {
    iVar4 = FUN_1158_043e(pcVar8);
  }
  local_11e = iVar4 >> 0xf;
  local_11c = 0;
  local_118 = *(int *)(iVar5 + 0x580);
  local_116 = local_118 >> 0xf;
  local_114 = 0;
  local_110 = 2;
  local_10e = 0;
  local_10c = 0;
  local_120 = iVar4;
  cVar1 = FUN_10e0_2895((undefined2)local_108,local_108._2_2_,2,&local_120,unaff_SS);
  if (cVar1 == '\0') {
    FUN_1040_13ff(iVar5,uVar6);
  }
  local_108 = *(undefined4 *)(iVar5 + 0x1b0);
  local_120 = *(int *)(iVar5 + 0x57e);
  local_11e = local_120 >> 0xf;
  local_11c = 0;
  local_118 = *(int *)(iVar5 + 0x580);
  local_116 = local_118 >> 0xf;
  local_114 = 0;
  local_110 = 1;
  local_10e = 0;
  local_10c = 0;
  cVar1 = FUN_10e0_2895((int)local_108,(int)((ulong)local_108 >> 0x10),2,&local_120,unaff_SS);
  if (cVar1 == '\0') {
    FUN_1040_13ff(iVar5,uVar6);
  }
  local_108 = *(undefined4 *)(iVar5 + 0x1b4);
  local_120 = *(int *)(iVar5 + 0x57e);
  local_11e = local_120 >> 0xf;
  local_11c = 0;
  local_118 = *(int *)(iVar5 + 0x580);
  local_116 = local_118 >> 0xf;
  local_114 = 0;
  local_110 = 2;
  local_10e = 0;
  local_10c = 0;
  cVar1 = FUN_10e0_2895((int)local_108,(int)((ulong)local_108 >> 0x10),2,&local_120,unaff_SS);
  if (cVar1 == '\0') {
    FUN_1040_13ff(iVar5,uVar6);
  }
  local_108 = *(undefined4 *)(iVar5 + 0x1ac);
  local_118 = *(int *)(iVar5 + 0x57e);
  local_116 = local_118 >> 0xf;
  local_114 = 0;
  local_110 = *(int *)(iVar5 + 0x580);
  local_10e = local_110 >> 0xf;
  local_10c = 0;
  cVar1 = FUN_10e0_2895((int)local_108,(int)((ulong)local_108 >> 0x10),1,&local_118,unaff_SS);
  if (cVar1 == '\0') {
    FUN_1040_13ff(iVar5,uVar6);
  }
  local_108 = *(undefined4 *)(iVar5 + 0x1c0);
  local_120 = *(int *)(iVar5 + 0x57e);
  local_11e = local_120 >> 0xf;
  local_11c = 0;
  local_118 = *(int *)(iVar5 + 0x580);
  local_116 = local_118 >> 0xf;
  local_114 = 0;
  local_110 = 1;
  local_10e = 0;
  local_10c = 0;
  cVar1 = FUN_10e0_2895((int)local_108,(int)((ulong)local_108 >> 0x10),2,&local_120,unaff_SS);
  if (cVar1 == '\0') {
    FUN_1040_13ff(iVar5,uVar6);
  }
  local_108 = *(undefined4 *)(iVar5 + 0x1c4);
  local_120 = *(int *)(iVar5 + 0x57e);
  local_11e = local_120 >> 0xf;
  local_11c = 0;
  local_118 = *(int *)(iVar5 + 0x580);
  local_116 = local_118 >> 0xf;
  local_114 = 0;
  local_110 = 2;
  local_10e = 0;
  local_10c = 0;
  cVar1 = FUN_10e0_2895((int)local_108,(int)((ulong)local_108 >> 0x10),2,&local_120,unaff_SS);
  if (cVar1 == '\0') {
    FUN_1040_13ff(iVar5,uVar6);
  }
  local_108 = *(undefined4 *)(iVar5 + 0x1bc);
  local_118 = *(int *)(iVar5 + 0x57e);
  local_116 = local_118 >> 0xf;
  local_114 = 0;
  local_110 = *(int *)(iVar5 + 0x580);
  local_10e = local_110 >> 0xf;
  local_10c = 0;
  cVar1 = FUN_10e0_2895((int)local_108,(int)((ulong)local_108 >> 0x10),1,&local_118,unaff_SS);
  if (cVar1 == '\0') {
    FUN_1040_13ff(iVar5,uVar6);
  }
  FUN_1040_209b(iVar5,uVar6);
  return;
}



/* ---- FUN_1040_2b2d @ 1040:2b2d  (209 octets) ---- */

void __stdcall16far FUN_1040_2b2d(undefined4 param_1)

{
  int iVar1;
  undefined2 uVar2;
  
  FUN_1158_0444();
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  FUN_10d8_31d2((int)*(undefined4 *)(iVar1 + 0x224),
                (int)((ulong)*(undefined4 *)(iVar1 + 0x224) >> 0x10));
  FUN_10d8_31d2((int)*(undefined4 *)(iVar1 + 0x1a0),
                (int)((ulong)*(undefined4 *)(iVar1 + 0x1a0) >> 0x10));
  FUN_10d8_31d2((int)*(undefined4 *)(iVar1 + 0x1a4),
                (int)((ulong)*(undefined4 *)(iVar1 + 0x1a4) >> 0x10));
  FUN_10d8_31d2((int)*(undefined4 *)(iVar1 + 0x1a8),
                (int)((ulong)*(undefined4 *)(iVar1 + 0x1a8) >> 0x10));
  FUN_10d8_31d2((int)*(undefined4 *)(iVar1 + 0x1b8),
                (int)((ulong)*(undefined4 *)(iVar1 + 0x1b8) >> 0x10));
  FUN_10d8_31d2((int)*(undefined4 *)(iVar1 + 0x24c),
                (int)((ulong)*(undefined4 *)(iVar1 + 0x24c) >> 0x10));
  FUN_10d8_31d2((int)*(undefined4 *)(iVar1 + 0x250),
                (int)((ulong)*(undefined4 *)(iVar1 + 0x250) >> 0x10));
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



/* ---- FUN_1040_2bfe @ 1040:2bfe  (32 octets) ---- */

void __stdcall16far FUN_1040_2bfe(undefined4 param_1,undefined2 param_2)

{
  undefined2 uVar1;
  
  FUN_1158_0444();
  uVar1 = (undefined2)((ulong)param_1 >> 0x10);
  *(undefined2 *)((int)param_1 + 0x57e) = param_2;
  FUN_1040_240a((int)param_1,uVar1);
  return;
}



/* ---- FUN_1040_2c1e @ 1040:2c1e  (32 octets) ---- */

void __stdcall16far FUN_1040_2c1e(undefined4 param_1,undefined2 param_2)

{
  undefined2 uVar1;
  
  FUN_1158_0444();
  uVar1 = (undefined2)((ulong)param_1 >> 0x10);
  *(undefined2 *)((int)param_1 + 0x580) = param_2;
  FUN_1040_240a((int)param_1,uVar1);
  return;
}



/* ---- FUN_1040_308b @ 1040:308b  (27 octets) ---- */

void __stdcall16far FUN_1040_308b(void)

{
  FUN_1158_0444();
  FUN_1140_63a9((int)DAT_1160_2c2e,(int)((ulong)DAT_1160_2c2e >> 0x10),0xfffe);
  return;
}



/* ---- FUN_1040_30a6 @ 1040:30a6  (31 octets) ---- */

void __stdcall16far FUN_1040_30a6(undefined4 param_1,undefined *param_2)

{
  FUN_1158_0444();
  FUN_1040_2b2d((int)param_1,(int)((ulong)param_1 >> 0x10));
  *param_2 = 1;
  return;
}



/* ---- FUN_1040_30c5 @ 1040:30c5  (24 octets) ---- */

void __stdcall16far FUN_1040_30c5(undefined4 param_1)

{
  FUN_1158_0444();
  FUN_1140_5556((int)param_1,(int)((ulong)param_1 >> 0x10));
  return;
}



/* ---- FUN_1040_30dd @ 1040:30dd  (48 octets) ---- */

void __stdcall16far FUN_1040_30dd(undefined4 param_1)

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



/* ---- FUN_1040_3236 @ 1040:3236  (41 octets) ---- */

void __stdcall16far FUN_1040_3236(undefined4 param_1)

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
  uVar1 = *(undefined4 *)((int)param_1 + 0x1f8);
  FUN_1130_1275((int)uVar1,(int)((ulong)uVar1 >> 0x10),iVar2);
  return;
}



/* ---- FUN_1040_325f @ 1040:325f  (71 octets) ---- */

void __stdcall16far FUN_1040_325f(undefined4 param_1)

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
  iVar1 = FUN_1000_3e32(*(undefined2 *)(iVar2 + 0x57e),iVar1);
  if (iVar1 != *(int *)(iVar2 + 0x57e)) {
    FUN_1040_2bfe(iVar2,uVar3,iVar1);
  }
  return;
}



/* ---- FUN_1040_32a6 @ 1040:32a6  (246 octets) ---- */

void __stdcall16far FUN_1040_32a6(undefined4 param_1,undefined2 param_2,undefined2 param_3)

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
    iVar4 = *(int *)(iVar5 + 0x57e);
    uVar8 = FUN_1158_2273(0x94,0x1130,param_2,param_3);
    uVar7 = 0x1130;
    uVar2 = FUN_1130_162b((int)*(undefined4 *)(iVar5 + 0x390),
                          (int)((ulong)*(undefined4 *)(iVar5 + 0x390) >> 0x10),uVar8);
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
      iVar4 = FUN_1000_3e32(*(undefined2 *)(iVar5 + 0x57e),iVar4);
    }
    if (iVar4 != *(int *)(iVar5 + 0x57e)) {
      FUN_1040_2bfe(iVar5,uVar6,iVar4);
    }
  }
  return;
}



/* ---- FUN_1040_4f58 @ 1040:4f58  (43 octets) ---- */

void __stdcall16far FUN_1040_4f58(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined2 uVar3;
  
  FUN_1158_0444();
  uVar1 = *(undefined4 *)((int)param_1 + 0x2ec);
  uVar3 = (undefined2)((ulong)uVar1 >> 0x10);
  iVar2 = (int)uVar1;
  FUN_1140_77b2((int)DAT_1160_2c2a,(int)((ulong)DAT_1160_2c2a >> 0x10),*(undefined2 *)(iVar2 + 0x23)
                ,*(undefined2 *)(iVar2 + 0x25),1);
  return;
}



/* ---- FUN_1040_4f83 @ 1040:4f83  (31 octets) ---- */

void __stdcall16far FUN_1040_4f83(void)

{
  FUN_1158_0444();
  FUN_1140_77b2((int)DAT_1160_2c2a,(int)((ulong)DAT_1160_2c2a >> 0x10),0,0,3);
  return;
}



/* ---- FUN_1040_4fa2 @ 1040:4fa2  (33 octets) ---- */

void __stdcall16far FUN_1040_4fa2(void)

{
  FUN_1158_0444();
  FUN_1140_77b2((int)DAT_1160_2c2a,(int)((ulong)DAT_1160_2c2a >> 0x10),0x1ea,0x1160,0x105);
  return;
}



/* ---- FUN_1040_4fc3 @ 1040:4fc3  (31 octets) ---- */

void __stdcall16far FUN_1040_4fc3(void)

{
  FUN_1158_0444();
  FUN_1140_77b2((int)DAT_1160_2c2a,(int)((ulong)DAT_1160_2c2a >> 0x10),0,0,4);
  return;
}



/* ---- FUN_1040_4fe2 @ 1040:4fe2  (29 octets) ---- */

void __stdcall16far FUN_1040_4fe2(void)

{
  undefined2 uVar1;
  
  uVar1 = 0x4fed;
  FUN_1158_0444();
  FUN_1140_5d45((int)DAT_1160_2008,(int)((ulong)DAT_1160_2008 >> 0x10),uVar1);
  return;
}



/* ---- FUN_1040_4fff @ 1040:4fff  (123 octets) ---- */

void __stdcall16far FUN_1040_4fff(undefined4 *param_1,undefined *param_2,undefined4 param_3)

{
  undefined2 *puVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  
  uVar4 = 0x500a;
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



/* ---- FUN_1040_507a @ 1040:507a  (183 octets) ---- */

void __stdcall16far FUN_1040_507a(undefined4 param_1)

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
    *(undefined2 *)(iVar1 + 0x6d) = 0x4fff;
    *(undefined2 *)(iVar1 + 0x6f) = 0x1040;
    *(undefined2 *)(iVar1 + 0x71) = (int)param_1;
    *(undefined2 *)(iVar1 + 0x73) = (int)((ulong)param_1 >> 0x10);
  }
  return;
}



/* ---- FUN_1040_5131 @ 1040:5131  (105 octets) ---- */

void __stdcall16far FUN_1040_5131(void)

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



/* ---- FUN_1040_519a @ 1040:519a  (43 octets) ---- */

void __stdcall16far FUN_1040_519a(undefined4 param_1)

{
  undefined4 uVar1;
  char cVar2;
  undefined2 uVar3;
  
  FUN_1158_0444();
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  uVar1 = *(undefined4 *)((int)param_1 + 0x220);
  cVar2 = FUN_1108_2f17((int)uVar1,(int)((ulong)uVar1 >> 0x10));
  if (cVar2 != '\0') {
    FUN_1040_5229((int)param_1,uVar3);
  }
  return;
}



/* ---- FUN_1040_51cd @ 1040:51cd  (69 octets) ---- */

undefined2 __stdcall16far FUN_1040_51cd(void)

{
  undefined2 uVar1;
  undefined2 unaff_SS;
  undefined4 uVar2;
  undefined local_24 [30];
  undefined2 uStack_6;
  
  uStack_6 = 0x51d8;
  FUN_1158_0444();
  uVar2 = FUN_10f0_2a04((int)DAT_1160_2c54,(int)((ulong)DAT_1160_2c54 >> 0x10));
  uVar1 = FUN_1128_21d2(uVar2);
  GETTEXTMETRICS(0x1128,local_24,unaff_SS);
  uVar1 = FUN_1158_0416(uVar1);
  return uVar1;
}



/* ---- FUN_1040_5229 @ 1040:5229  (1112 octets) ---- */

void __cdecl16far FUN_1040_5229(undefined4 param_1)

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
  
  local_6 = 0x5234;
  FUN_1158_0444();
  uVar9 = (undefined2)((ulong)param_1 >> 0x10);
  iVar6 = (int)param_1;
  uStack_418 = 0x1158;
  puStack_416 = (undefined *)iVar6;
  puStack_414 = (undefined *)uVar9;
  FUN_1040_59cd();
  puStack_414 = local_106;
  puStack_416 = (undefined *)0x1040;
  uStack_418 = 0x524f;
  FUN_10f0_204e();
  puStack_414 = local_106;
  puStack_416 = (undefined *)0x10f0;
  uStack_418 = 0x525a;
  FUN_1158_09f5();
  puStack_414 = (undefined *)0x525f;
  FUN_1158_0408();
  puStack_414 = (undefined *)0x5223;
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
    FUN_1158_0db5(0,0x5212,uVar10);
    FUN_1158_0c78(puVar13,uVar14);
    uVar10 = 0x1158;
    FUN_1158_0408();
    if (iVar7 == 3) break;
    iVar7 = iVar7 + 1;
  }
  local_210 = *(undefined4 *)(iVar6 + 0x308);
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
        local_6 = FUN_1158_1878(local_206,unaff_SS,0x5213,0x1158);
        if (0 < local_6) {
          FUN_1158_1975(1,local_6,local_206,unaff_SS);
          FUN_1158_1916(local_6,0xff,local_206,unaff_SS,0x5215,0x1158);
        }
      } while (local_6 != 0);
      puVar13 = local_312;
      uVar10 = unaff_SS;
      FUN_1158_17cd(0x5217,0x1158);
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
  uVar3 = FUN_1040_51cd(&stack0xfffe);
  if (0xfffd < uVar3) {
    FUN_1158_043e(0x1040);
  }
  local_208 = FUN_1158_0416();
  puVar13 = local_410;
  uVar14 = unaff_SS;
  FUN_1158_17cd(0x5217,0x1158);
  puVar12 = local_310;
  uVar10 = unaff_SS;
  FUN_1138_1d53((int)*(undefined4 *)(iVar6 + 0x2f8),
                (int)((ulong)*(undefined4 *)(iVar6 + 0x2f8) >> 0x10));
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
  FUN_1158_17cd(0x5217,0x1128);
  puVar12 = local_310;
  uVar10 = unaff_SS;
  FUN_1138_1d53((int)*(undefined4 *)(iVar6 + 0x2fc),
                (int)((ulong)*(undefined4 *)(iVar6 + 0x2fc) >> 0x10));
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
  FUN_1158_17cd(0x5217,0x1128);
  puVar12 = local_310;
  uVar10 = unaff_SS;
  FUN_1138_1d53((int)*(undefined4 *)(iVar6 + 0x300),
                (int)((ulong)*(undefined4 *)(iVar6 + 0x300) >> 0x10));
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
  FUN_1158_17cd(0x5217,0x1128);
  puVar12 = local_310;
  uVar10 = unaff_SS;
  FUN_1138_1d53((int)*(undefined4 *)(iVar6 + 0x304),
                (int)((ulong)*(undefined4 *)(iVar6 + 0x304) >> 0x10));
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
  uStack_418 = 0x5681;
  FUN_1158_0a4f(local_106,unaff_SS);
  FUN_1158_0408();
  FUN_1120_49e3((int)*(undefined4 *)(iVar6 + 0x308),
                (int)((ulong)*(undefined4 *)(iVar6 + 0x308) >> 0x10));
  return;
}



/* ---- FUN_1040_5685 @ 1040:5685  (71 octets) ---- */

void __stdcall16far FUN_1040_5685(undefined4 param_1)

{
  undefined4 uVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  
  FUN_1158_0444();
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  FUN_1040_59cd((int)param_1,uVar2,0);
  uVar1 = *(undefined4 *)((int)param_1 + 0x308);
  uVar3 = (undefined2)((ulong)uVar1 >> 0x10);
  uVar2 = (undefined2)uVar1;
  FUN_1120_4a3f(uVar2,uVar3);
  FUN_1120_49ff(uVar2,uVar3);
  FUN_1120_49e3(uVar2,uVar3);
  return;
}



/* ---- FUN_1040_56d0 @ 1040:56d0  (760 octets) ---- */

void __stdcall16far
FUN_1040_56d0(int param_1,int param_2,undefined4 param_3,undefined2 param_4,byte *param_5)

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
  
  uStack_6 = 0x56db;
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
        FUN_1158_184c(0x56cc,0x1158);
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
        FUN_1158_184c(0x56ce,0x1158);
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
          FUN_1158_17cd(0x56ce,0x1158);
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



/* ---- FUN_1040_59cd @ 1040:59cd  (5487 octets) ---- */

void __stdcall16far FUN_1040_59cd(undefined4 param_1,int param_2)

{
  undefined2 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined2 uVar5;
  undefined2 unaff_SS;
  undefined2 uVar6;
  undefined2 uVar7;
  undefined2 uVar8;
  char *pcVar9;
  undefined *puVar10;
  undefined2 uVar11;
  undefined *puVar12;
  undefined local_306 [256];
  undefined local_206 [256];
  int local_106;
  undefined2 local_104;
  char local_102 [252];
  undefined2 uStack_6;
  
  uStack_6 = 23000;
  FUN_1158_0444();
  uVar5 = (undefined2)((ulong)param_1 >> 0x10);
  iVar4 = (int)param_1;
  local_104 = (undefined2)((ulong)*(undefined4 *)(iVar4 + 0x308) >> 0x10);
  local_106 = (int)*(undefined4 *)(iVar4 + 0x308);
  FUN_1120_49e3(local_106,local_104);
  local_102[0] = '\0';
  FUN_1040_56d0(&stack0xfffe,0,*(undefined2 *)(iVar4 + 0x184),*(undefined2 *)(iVar4 + 0x186),0xff,
                local_102,unaff_SS);
  puVar10 = local_206;
  uVar6 = unaff_SS;
  FUN_1158_17cd(local_102,unaff_SS);
  FUN_1158_184c(0x59c8,0x1158);
  puVar12 = local_306;
  uVar7 = unaff_SS;
  FUN_1138_1d53((int)*(undefined4 *)(iVar4 + 0x188),
                (int)((ulong)*(undefined4 *)(iVar4 + 0x188) >> 0x10));
  FUN_1158_184c(puVar12,uVar7);
  FUN_1158_17e7(0xff,local_102,unaff_SS,puVar10,uVar6);
  puVar2 = (undefined4 *)*(undefined4 *)(local_106 + 0xec);
  puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
  (*(code *)*puVar1)(0x1158,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),local_102);
  if (param_2 == 1) {
    puVar2 = (undefined4 *)*(undefined4 *)(local_106 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)(0x1158,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),0x59ca,0x1158);
  }
  local_102[0] = '\0';
  FUN_1040_56d0(&stack0xfffe,10,*(undefined2 *)(iVar4 + 0x18c),*(undefined2 *)(iVar4 + 0x18e),0xff,
                local_102,unaff_SS);
  puVar10 = local_206;
  uVar6 = unaff_SS;
  FUN_1158_17cd(local_102,unaff_SS);
  FUN_1158_184c(0x59cb,0x1158);
  puVar12 = local_306;
  uVar7 = unaff_SS;
  FUN_1138_1d53((int)*(undefined4 *)(iVar4 + 400),(int)((ulong)*(undefined4 *)(iVar4 + 400) >> 0x10)
               );
  FUN_1158_184c(puVar12,uVar7);
  FUN_1158_17e7(0xff,local_102,unaff_SS,puVar10,uVar6);
  FUN_1040_56d0(&stack0xfffe,0x25,*(undefined2 *)(iVar4 + 0x19c),*(undefined2 *)(iVar4 + 0x19e),0xff
                ,local_102,unaff_SS);
  FUN_1040_56d0(&stack0xfffe,0x46,*(undefined2 *)(iVar4 + 0x194),*(undefined2 *)(iVar4 + 0x196),0xff
                ,local_102,unaff_SS);
  puVar10 = local_206;
  uVar6 = unaff_SS;
  FUN_1158_17cd(local_102,unaff_SS);
  FUN_1158_184c(0x59cb,0x1158);
  puVar12 = local_306;
  uVar7 = unaff_SS;
  FUN_1138_1d53((int)*(undefined4 *)(iVar4 + 0x198),
                (int)((ulong)*(undefined4 *)(iVar4 + 0x198) >> 0x10));
  FUN_1158_184c(puVar12,uVar7);
  FUN_1158_17e7(0xff,local_102,unaff_SS,puVar10,uVar6);
  puVar2 = (undefined4 *)*(undefined4 *)(local_106 + 0xec);
  puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
  (*(code *)*puVar1)(0x1158,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),local_102);
  if (param_2 == 1) {
    puVar2 = (undefined4 *)*(undefined4 *)(local_106 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)(0x1158,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),0x59ca,0x1158);
  }
  local_102[0] = '\0';
  pcVar9 = local_102;
  uVar8 = 0xff;
  uVar7 = *(undefined2 *)(iVar4 + 0x556);
  uVar6 = *(undefined2 *)(iVar4 + 0x554);
  iVar3 = DAT_1160_01ec + 10;
  uVar11 = unaff_SS;
  if (SCARRY2(DAT_1160_01ec,10)) {
    iVar3 = FUN_1158_043e(0x1158,uVar6,uVar7,0xff,pcVar9);
  }
  FUN_1040_56d0(&stack0xfffe,iVar3,uVar6,uVar7,uVar8,pcVar9,uVar11);
  puVar10 = local_206;
  uVar7 = unaff_SS;
  FUN_1158_17cd(local_102,unaff_SS);
  FUN_1158_184c(0x59c8,0x1158);
  FUN_1158_17e7(0xff,local_102,unaff_SS,puVar10,uVar7);
  pcVar9 = local_102;
  uVar8 = 0xff;
  uVar7 = *(undefined2 *)(iVar4 + 0x402);
  uVar6 = *(undefined2 *)(iVar4 + 0x400);
  iVar3 = DAT_1160_01f6 + 6;
  uVar11 = unaff_SS;
  if (SCARRY2(DAT_1160_01f6,6)) {
    iVar3 = FUN_1158_043e(0x1158,uVar6,uVar7,0xff,pcVar9);
  }
  FUN_1040_56d0(&stack0xfffe,iVar3,uVar6,uVar7,uVar8,pcVar9,uVar11);
  pcVar9 = local_102;
  uVar8 = 0xff;
  uVar7 = *(undefined2 *)(iVar4 + 0x552);
  uVar6 = *(undefined2 *)(iVar4 + 0x550);
  iVar3 = DAT_1160_01f8 + 6;
  uVar11 = unaff_SS;
  if (SCARRY2(DAT_1160_01f8,6)) {
    iVar3 = FUN_1158_043e(0x1040,uVar6,uVar7,0xff,pcVar9);
  }
  FUN_1040_56d0(&stack0xfffe,iVar3,uVar6,uVar7,uVar8,pcVar9,uVar11);
  if (local_102[0] != '\0') {
    puVar2 = (undefined4 *)*(undefined4 *)(local_106 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)(0x1040,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),local_102);
  }
  local_102[0] = '\0';
  FUN_1040_56d0(&stack0xfffe,DAT_1160_01ec,*(undefined2 *)(iVar4 + 0x47c),
                *(undefined2 *)(iVar4 + 0x47e),0xff,local_102,unaff_SS);
  puVar10 = local_206;
  uVar7 = unaff_SS;
  FUN_1158_17cd(local_102,unaff_SS);
  FUN_1158_184c(0x59c8,0x1158);
  FUN_1158_184c(0x59c8,0x1158);
  FUN_1158_17e7(0xff,local_102,unaff_SS,puVar10,uVar7);
  FUN_1040_56d0(&stack0xfffe,DAT_1160_01f8,*(undefined2 *)(iVar4 + 0x3f4),
                *(undefined2 *)(iVar4 + 0x3f6),0xff,local_102,unaff_SS);
  if (local_102[0] != '\0') {
    puVar2 = (undefined4 *)*(undefined4 *)(local_106 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)(0x1040,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),local_102);
  }
  local_102[0] = '\0';
  FUN_1040_56d0(&stack0xfffe,DAT_1160_01ee,*(undefined2 *)(iVar4 + 0x408),
                *(undefined2 *)(iVar4 + 0x40a),0xff,local_102,unaff_SS);
  FUN_1040_56d0(&stack0xfffe,DAT_1160_01f4,*(undefined2 *)(iVar4 + 0x474),
                *(undefined2 *)(iVar4 + 0x476),0xff,local_102,unaff_SS);
  if (local_102[0] != '\0') {
    puVar2 = (undefined4 *)*(undefined4 *)(local_106 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)(0x1040,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),local_102);
  }
  local_102[0] = '\0';
  FUN_1040_56d0(&stack0xfffe,DAT_1160_01ee,*(undefined2 *)(iVar4 + 0x40c),
                *(undefined2 *)(iVar4 + 0x40e),0xff,local_102,unaff_SS);
  FUN_1040_56d0(&stack0xfffe,DAT_1160_01f4,*(undefined2 *)(iVar4 + 0x478),
                *(undefined2 *)(iVar4 + 0x47a),0xff,local_102,unaff_SS);
  if (local_102[0] != '\0') {
    puVar2 = (undefined4 *)*(undefined4 *)(local_106 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)(0x1040,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),local_102);
  }
  if (param_2 == 1) {
    puVar2 = (undefined4 *)*(undefined4 *)(local_106 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)(0x1040,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),0x59ca,0x1040);
  }
  local_102[0] = '\0';
  FUN_1040_56d0(&stack0xfffe,DAT_1160_01ec,*(undefined2 *)(iVar4 + 0x410),
                *(undefined2 *)(iVar4 + 0x412),0xff,local_102,unaff_SS);
  puVar10 = local_206;
  uVar7 = unaff_SS;
  FUN_1158_17cd(local_102,unaff_SS);
  FUN_1158_184c(0x59c8,0x1158);
  FUN_1158_184c(0x59c8,0x1158);
  FUN_1158_17e7(0xff,local_102,unaff_SS,puVar10,uVar7);
  FUN_1040_56d0(&stack0xfffe,DAT_1160_01f8,*(undefined2 *)(iVar4 + 0x48c),
                *(undefined2 *)(iVar4 + 0x48e),0xff,local_102,unaff_SS);
  if (local_102[0] != '\0') {
    puVar2 = (undefined4 *)*(undefined4 *)(local_106 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)(0x1040,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),local_102);
  }
  local_102[0] = '\0';
  FUN_1040_56d0(&stack0xfffe,DAT_1160_01ec,*(undefined2 *)(iVar4 + 0x558),
                *(undefined2 *)(iVar4 + 0x55a),0xff,local_102,unaff_SS);
  puVar10 = local_206;
  uVar7 = unaff_SS;
  FUN_1158_17cd(local_102,unaff_SS);
  FUN_1158_184c(0x59c8,0x1158);
  FUN_1158_184c(0x59c8,0x1158);
  FUN_1158_17e7(0xff,local_102,unaff_SS,puVar10,uVar7);
  FUN_1040_56d0(&stack0xfffe,DAT_1160_01f8,*(undefined2 *)(iVar4 + 0x560),
                *(undefined2 *)(iVar4 + 0x562),0xff,local_102,unaff_SS);
  if (local_102[0] != '\0') {
    puVar2 = (undefined4 *)*(undefined4 *)(local_106 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)(0x1040,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),local_102);
  }
  local_102[0] = '\0';
  FUN_1040_56d0(&stack0xfffe,DAT_1160_01ec,*(undefined2 *)(iVar4 + 0x414),
                *(undefined2 *)(iVar4 + 0x416),0xff,local_102,unaff_SS);
  puVar10 = local_206;
  uVar7 = unaff_SS;
  FUN_1158_17cd(local_102,unaff_SS);
  FUN_1158_184c(0x59c8,0x1158);
  FUN_1158_184c(0x59c8,0x1158);
  FUN_1158_17e7(0xff,local_102,unaff_SS,puVar10,uVar7);
  FUN_1040_56d0(&stack0xfffe,DAT_1160_01f8,*(undefined2 *)(iVar4 + 0x490),
                *(undefined2 *)(iVar4 + 0x492),0xff,local_102,unaff_SS);
  if (local_102[0] != '\0') {
    puVar2 = (undefined4 *)*(undefined4 *)(local_106 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)(0x1040,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),local_102);
  }
  local_102[0] = '\0';
  FUN_1040_56d0(&stack0xfffe,DAT_1160_01ec,*(undefined2 *)(iVar4 + 0x55c),
                *(undefined2 *)(iVar4 + 0x55e),0xff,local_102,unaff_SS);
  puVar10 = local_206;
  uVar7 = unaff_SS;
  FUN_1158_17cd(local_102,unaff_SS);
  FUN_1158_184c(0x59c8,0x1158);
  FUN_1158_184c(0x59c8,0x1158);
  FUN_1158_17e7(0xff,local_102,unaff_SS,puVar10,uVar7);
  FUN_1040_56d0(&stack0xfffe,DAT_1160_01f8,*(undefined2 *)(iVar4 + 0x564),
                *(undefined2 *)(iVar4 + 0x566),0xff,local_102,unaff_SS);
  if (local_102[0] != '\0') {
    puVar2 = (undefined4 *)*(undefined4 *)(local_106 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)(0x1040,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),local_102);
  }
  if (param_2 == 1) {
    puVar2 = (undefined4 *)*(undefined4 *)(local_106 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)(0x1040,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),0x59ca,0x1040);
  }
  local_102[0] = '\0';
  FUN_1040_56d0(&stack0xfffe,DAT_1160_01ec,*(undefined2 *)(iVar4 + 0x480),
                *(undefined2 *)(iVar4 + 0x482),0xff,local_102,unaff_SS);
  puVar10 = local_206;
  uVar7 = unaff_SS;
  FUN_1158_17cd(local_102,unaff_SS);
  FUN_1158_184c(0x59c8,0x1158);
  FUN_1158_17e7(0xff,local_102,unaff_SS,puVar10,uVar7);
  FUN_1040_56d0(&stack0xfffe,DAT_1160_01f6,*(undefined2 *)(iVar4 + 0x3fc),
                *(undefined2 *)(iVar4 + 0x3fe),0xff,local_102,unaff_SS);
  if (local_102[0] != '\0') {
    puVar2 = (undefined4 *)*(undefined4 *)(local_106 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)(0x1040,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),local_102);
  }
  local_102[0] = '\0';
  FUN_1040_56d0(&stack0xfffe,DAT_1160_01ee,*(undefined2 *)(iVar4 + 0x41c),
                *(undefined2 *)(iVar4 + 0x41e),0xff,local_102,unaff_SS);
  FUN_1040_56d0(&stack0xfffe,DAT_1160_01f4,*(undefined2 *)(iVar4 + 0x484),
                *(undefined2 *)(iVar4 + 0x486),0xff,local_102,unaff_SS);
  if (local_102[0] != '\0') {
    puVar2 = (undefined4 *)*(undefined4 *)(local_106 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)(0x1040,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),local_102);
  }
  local_102[0] = '\0';
  FUN_1040_56d0(&stack0xfffe,DAT_1160_01ee,*(undefined2 *)(iVar4 + 0x420),
                *(undefined2 *)(iVar4 + 0x422),0xff,local_102,unaff_SS);
  FUN_1040_56d0(&stack0xfffe,DAT_1160_01f4,*(undefined2 *)(iVar4 + 0x488),
                *(undefined2 *)(iVar4 + 0x48a),0xff,local_102,unaff_SS);
  if (local_102[0] != '\0') {
    puVar2 = (undefined4 *)*(undefined4 *)(local_106 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)(0x1040,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),local_102);
  }
  if (param_2 == 1) {
    puVar2 = (undefined4 *)*(undefined4 *)(local_106 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)(0x1040,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),0x59ca,0x1040);
  }
  local_102[0] = '\0';
  FUN_1040_56d0(&stack0xfffe,DAT_1160_01ec,*(undefined2 *)(iVar4 + 0x424),
                *(undefined2 *)(iVar4 + 0x426),0xff,local_102,unaff_SS);
  puVar10 = local_206;
  uVar7 = unaff_SS;
  FUN_1158_17cd(local_102,unaff_SS);
  FUN_1158_184c(0x59c8,0x1158);
  FUN_1158_17e7(0xff,local_102,unaff_SS,puVar10,uVar7);
  FUN_1040_56d0(&stack0xfffe,DAT_1160_01f6,*(undefined2 *)(iVar4 + 0x494),
                *(undefined2 *)(iVar4 + 0x496),0xff,local_102,unaff_SS);
  if (local_102[0] != '\0') {
    puVar2 = (undefined4 *)*(undefined4 *)(local_106 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)(0x1040,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),local_102);
  }
  local_102[0] = '\0';
  FUN_1040_56d0(&stack0xfffe,DAT_1160_01ec,*(undefined2 *)(iVar4 + 0x428),
                *(undefined2 *)(iVar4 + 0x42a),0xff,local_102,unaff_SS);
  puVar10 = local_206;
  uVar7 = unaff_SS;
  FUN_1158_17cd(local_102,unaff_SS);
  FUN_1158_184c(0x59c8,0x1158);
  FUN_1158_17e7(0xff,local_102,unaff_SS,puVar10,uVar7);
  FUN_1040_56d0(&stack0xfffe,DAT_1160_01f6,*(undefined2 *)(iVar4 + 0x498),
                *(undefined2 *)(iVar4 + 0x49a),0xff,local_102,unaff_SS);
  if (local_102[0] != '\0') {
    puVar2 = (undefined4 *)*(undefined4 *)(local_106 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)(0x1040,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),local_102);
  }
  local_102[0] = '\0';
  FUN_1040_56d0(&stack0xfffe,DAT_1160_01ec,*(undefined2 *)(iVar4 + 0x42c),
                *(undefined2 *)(iVar4 + 0x42e),0xff,local_102,unaff_SS);
  puVar10 = local_206;
  uVar7 = unaff_SS;
  FUN_1158_17cd(local_102,unaff_SS);
  FUN_1158_184c(0x59c8,0x1158);
  FUN_1158_17e7(0xff,local_102,unaff_SS,puVar10,uVar7);
  FUN_1040_56d0(&stack0xfffe,DAT_1160_01f6,*(undefined2 *)(iVar4 + 0x49c),
                *(undefined2 *)(iVar4 + 0x49e),0xff,local_102,unaff_SS);
  if (local_102[0] != '\0') {
    puVar2 = (undefined4 *)*(undefined4 *)(local_106 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)(0x1040,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),local_102);
  }
  local_102[0] = '\0';
  FUN_1040_56d0(&stack0xfffe,DAT_1160_01ec,*(undefined2 *)(iVar4 + 0x430),
                *(undefined2 *)(iVar4 + 0x432),0xff,local_102,unaff_SS);
  puVar10 = local_206;
  uVar7 = unaff_SS;
  FUN_1158_17cd(local_102,unaff_SS);
  FUN_1158_184c(0x59c8,0x1158);
  FUN_1158_17e7(0xff,local_102,unaff_SS,puVar10,uVar7);
  FUN_1040_56d0(&stack0xfffe,DAT_1160_01f6,*(undefined2 *)(iVar4 + 0x4a0),
                *(undefined2 *)(iVar4 + 0x4a2),0xff,local_102,unaff_SS);
  if (local_102[0] != '\0') {
    puVar2 = (undefined4 *)*(undefined4 *)(local_106 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)(0x1040,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),local_102);
  }
  local_102[0] = '\0';
  FUN_1040_56d0(&stack0xfffe,DAT_1160_01ec,*(undefined2 *)(iVar4 + 0x434),
                *(undefined2 *)(iVar4 + 0x436),0xff,local_102,unaff_SS);
  puVar10 = local_206;
  uVar7 = unaff_SS;
  FUN_1158_17cd(local_102,unaff_SS);
  FUN_1158_184c(0x59c8,0x1158);
  FUN_1158_17e7(0xff,local_102,unaff_SS,puVar10,uVar7);
  FUN_1040_56d0(&stack0xfffe,DAT_1160_01f6,*(undefined2 *)(iVar4 + 0x4a4),
                *(undefined2 *)(iVar4 + 0x4a6),0xff,local_102,unaff_SS);
  if (local_102[0] != '\0') {
    puVar2 = (undefined4 *)*(undefined4 *)(local_106 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)(0x1040,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),local_102);
  }
  local_102[0] = '\0';
  FUN_1040_56d0(&stack0xfffe,DAT_1160_01ec,*(undefined2 *)(iVar4 + 0x438),
                *(undefined2 *)(iVar4 + 0x43a),0xff,local_102,unaff_SS);
  puVar10 = local_206;
  uVar7 = unaff_SS;
  FUN_1158_17cd(local_102,unaff_SS);
  FUN_1158_184c(0x59c8,0x1158);
  FUN_1158_17e7(0xff,local_102,unaff_SS,puVar10,uVar7);
  FUN_1040_56d0(&stack0xfffe,DAT_1160_01f6,*(undefined2 *)(iVar4 + 0x4a8),
                *(undefined2 *)(iVar4 + 0x4aa),0xff,local_102,unaff_SS);
  if (local_102[0] != '\0') {
    puVar2 = (undefined4 *)*(undefined4 *)(local_106 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)(0x1040,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),local_102);
  }
  local_102[0] = '\0';
  FUN_1040_56d0(&stack0xfffe,DAT_1160_01ec,*(undefined2 *)(iVar4 + 0x568),
                *(undefined2 *)(iVar4 + 0x56a),0xff,local_102,unaff_SS);
  puVar10 = local_206;
  uVar7 = unaff_SS;
  FUN_1158_17cd(local_102,unaff_SS);
  FUN_1158_184c(0x59c8,0x1158);
  FUN_1158_17e7(0xff,local_102,unaff_SS,puVar10,uVar7);
  FUN_1040_56d0(&stack0xfffe,DAT_1160_01f6,*(undefined2 *)(iVar4 + 0x56c),
                *(undefined2 *)(iVar4 + 0x56e),0xff,local_102,unaff_SS);
  if (local_102[0] != '\0') {
    puVar2 = (undefined4 *)*(undefined4 *)(local_106 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)(0x1040,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),local_102);
  }
  local_102[0] = '\0';
  FUN_1040_56d0(&stack0xfffe,DAT_1160_01ec,*(undefined2 *)(iVar4 + 0x43c),
                *(undefined2 *)(iVar4 + 0x43e),0xff,local_102,unaff_SS);
  puVar10 = local_206;
  uVar7 = unaff_SS;
  FUN_1158_17cd(local_102,unaff_SS);
  FUN_1158_184c(0x59c8,0x1158);
  FUN_1158_17e7(0xff,local_102,unaff_SS,puVar10,uVar7);
  FUN_1040_56d0(&stack0xfffe,DAT_1160_01f6,*(undefined2 *)(iVar4 + 0x4ac),
                *(undefined2 *)(iVar4 + 0x4ae),0xff,local_102,unaff_SS);
  if (local_102[0] != '\0') {
    puVar2 = (undefined4 *)*(undefined4 *)(local_106 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)(0x1040,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),local_102);
  }
  local_102[0] = '\0';
  FUN_1040_56d0(&stack0xfffe,DAT_1160_01ec,*(undefined2 *)(iVar4 + 0x444),
                *(undefined2 *)(iVar4 + 0x446),0xff,local_102,unaff_SS);
  puVar10 = local_206;
  uVar7 = unaff_SS;
  FUN_1158_17cd(local_102,unaff_SS);
  FUN_1158_184c(0x59c8,0x1158);
  FUN_1158_17e7(0xff,local_102,unaff_SS,puVar10,uVar7);
  FUN_1040_56d0(&stack0xfffe,DAT_1160_01f6,*(undefined2 *)(iVar4 + 0x4b0),
                *(undefined2 *)(iVar4 + 0x4b2),0xff,local_102,unaff_SS);
  if (local_102[0] != '\0') {
    puVar2 = (undefined4 *)*(undefined4 *)(local_106 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)(0x1040,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),local_102);
  }
  local_102[0] = '\0';
  FUN_1040_56d0(&stack0xfffe,DAT_1160_01ec,*(undefined2 *)(iVar4 + 0x440),
                *(undefined2 *)(iVar4 + 0x442),0xff,local_102,unaff_SS);
  puVar10 = local_206;
  uVar7 = unaff_SS;
  FUN_1158_17cd(local_102,unaff_SS);
  FUN_1158_184c(0x59c8,0x1158);
  FUN_1158_17e7(0xff,local_102,unaff_SS,puVar10,uVar7);
  FUN_1040_56d0(&stack0xfffe,DAT_1160_01f6,*(undefined2 *)(iVar4 + 0x4b4),
                *(undefined2 *)(iVar4 + 0x4b6),0xff,local_102,unaff_SS);
  if (local_102[0] != '\0') {
    puVar2 = (undefined4 *)*(undefined4 *)(local_106 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)(0x1040,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),local_102);
  }
  local_102[0] = '\0';
  FUN_1040_56d0(&stack0xfffe,DAT_1160_01ec,*(undefined2 *)(iVar4 + 0x448),
                *(undefined2 *)(iVar4 + 0x44a),0xff,local_102,unaff_SS);
  puVar10 = local_206;
  uVar7 = unaff_SS;
  FUN_1158_17cd(local_102,unaff_SS);
  FUN_1158_184c(0x59c8,0x1158);
  FUN_1158_17e7(0xff,local_102,unaff_SS,puVar10,uVar7);
  FUN_1040_56d0(&stack0xfffe,DAT_1160_01f6,*(undefined2 *)(iVar4 + 0x4b8),
                *(undefined2 *)(iVar4 + 0x4ba),0xff,local_102,unaff_SS);
  if (local_102[0] != '\0') {
    puVar2 = (undefined4 *)*(undefined4 *)(local_106 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)(0x1040,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),local_102);
  }
  local_102[0] = '\0';
  FUN_1040_56d0(&stack0xfffe,DAT_1160_01ec,*(undefined2 *)(iVar4 + 0x44c),
                *(undefined2 *)(iVar4 + 0x44e),0xff,local_102,unaff_SS);
  puVar10 = local_206;
  uVar7 = unaff_SS;
  FUN_1158_17cd(local_102,unaff_SS);
  FUN_1158_184c(0x59c8,0x1158);
  FUN_1158_17e7(0xff,local_102,unaff_SS,puVar10,uVar7);
  FUN_1040_56d0(&stack0xfffe,DAT_1160_01f6,*(undefined2 *)(iVar4 + 0x4bc),
                *(undefined2 *)(iVar4 + 0x4be),0xff,local_102,unaff_SS);
  if (local_102[0] != '\0') {
    puVar2 = (undefined4 *)*(undefined4 *)(local_106 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)(0x1040,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),local_102);
  }
  local_102[0] = '\0';
  FUN_1040_56d0(&stack0xfffe,DAT_1160_01ec,*(undefined2 *)(iVar4 + 0x450),
                *(undefined2 *)(iVar4 + 0x452),0xff,local_102,unaff_SS);
  puVar10 = local_206;
  uVar7 = unaff_SS;
  FUN_1158_17cd(local_102,unaff_SS);
  FUN_1158_184c(0x59c8,0x1158);
  FUN_1158_184c(0x59c8,0x1158);
  FUN_1158_17e7(0xff,local_102,unaff_SS,puVar10,uVar7);
  FUN_1040_56d0(&stack0xfffe,DAT_1160_01f8,*(undefined2 *)(iVar4 + 0x4d0),
                *(undefined2 *)(iVar4 + 0x4d2),0xff,local_102,unaff_SS);
  if (local_102[0] != '\0') {
    puVar2 = (undefined4 *)*(undefined4 *)(local_106 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)(0x1040,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),local_102);
  }
  local_102[0] = '\0';
  FUN_1040_56d0(&stack0xfffe,DAT_1160_01ec,*(undefined2 *)(iVar4 + 0x454),
                *(undefined2 *)(iVar4 + 0x456),0xff,local_102,unaff_SS);
  puVar10 = local_206;
  uVar7 = unaff_SS;
  FUN_1158_17cd(local_102,unaff_SS);
  FUN_1158_184c(0x59c8,0x1158);
  FUN_1158_17e7(0xff,local_102,unaff_SS,puVar10,uVar7);
  FUN_1040_56d0(&stack0xfffe,DAT_1160_01f6,*(undefined2 *)(iVar4 + 0x4c0),
                *(undefined2 *)(iVar4 + 0x4c2),0xff,local_102,unaff_SS);
  if (local_102[0] != '\0') {
    puVar2 = (undefined4 *)*(undefined4 *)(local_106 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)(0x1040,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),local_102);
  }
  local_102[0] = '\0';
  FUN_1040_56d0(&stack0xfffe,DAT_1160_01ec,*(undefined2 *)(iVar4 + 0x458),
                *(undefined2 *)(iVar4 + 0x45a),0xff,local_102,unaff_SS);
  puVar10 = local_206;
  uVar7 = unaff_SS;
  FUN_1158_17cd(local_102,unaff_SS);
  FUN_1158_184c(0x59c8,0x1158);
  FUN_1158_184c(0x59c8,0x1158);
  FUN_1158_17e7(0xff,local_102,unaff_SS,puVar10,uVar7);
  FUN_1040_56d0(&stack0xfffe,DAT_1160_01f8,*(undefined2 *)(iVar4 + 0x4d4),
                *(undefined2 *)(iVar4 + 0x4d6),0xff,local_102,unaff_SS);
  if (local_102[0] != '\0') {
    puVar2 = (undefined4 *)*(undefined4 *)(local_106 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)(0x1040,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),local_102);
  }
  local_102[0] = '\0';
  FUN_1040_56d0(&stack0xfffe,DAT_1160_01ec,*(undefined2 *)(iVar4 + 0x45c),
                *(undefined2 *)(iVar4 + 0x45e),0xff,local_102,unaff_SS);
  puVar10 = local_206;
  uVar7 = unaff_SS;
  FUN_1158_17cd(local_102,unaff_SS);
  FUN_1158_184c(0x59c8,0x1158);
  FUN_1158_17e7(0xff,local_102,unaff_SS,puVar10,uVar7);
  FUN_1040_56d0(&stack0xfffe,DAT_1160_01f6,*(undefined2 *)(iVar4 + 0x4c4),
                *(undefined2 *)(iVar4 + 0x4c6),0xff,local_102,unaff_SS);
  if (local_102[0] != '\0') {
    puVar2 = (undefined4 *)*(undefined4 *)(local_106 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)(0x1040,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),local_102);
  }
  local_102[0] = '\0';
  FUN_1040_56d0(&stack0xfffe,DAT_1160_01ec,*(undefined2 *)(iVar4 + 0x460),
                *(undefined2 *)(iVar4 + 0x462),0xff,local_102,unaff_SS);
  puVar10 = local_206;
  uVar7 = unaff_SS;
  FUN_1158_17cd(local_102,unaff_SS);
  FUN_1158_184c(0x59c8,0x1158);
  FUN_1158_17e7(0xff,local_102,unaff_SS,puVar10,uVar7);
  FUN_1040_56d0(&stack0xfffe,DAT_1160_01f6,*(undefined2 *)(iVar4 + 0x4c8),
                *(undefined2 *)(iVar4 + 0x4ca),0xff,local_102,unaff_SS);
  if (local_102[0] != '\0') {
    puVar2 = (undefined4 *)*(undefined4 *)(local_106 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)(0x1040,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),local_102);
  }
  local_102[0] = '\0';
  FUN_1040_56d0(&stack0xfffe,DAT_1160_01ec,*(undefined2 *)(iVar4 + 0x464),
                *(undefined2 *)(iVar4 + 0x466),0xff,local_102,unaff_SS);
  puVar10 = local_206;
  uVar7 = unaff_SS;
  FUN_1158_17cd(local_102,unaff_SS);
  FUN_1158_184c(0x59c8,0x1158);
  FUN_1158_184c(0x59c8,0x1158);
  FUN_1158_17e7(0xff,local_102,unaff_SS,puVar10,uVar7);
  FUN_1040_56d0(&stack0xfffe,DAT_1160_01f8,*(undefined2 *)(iVar4 + 0x4d8),
                *(undefined2 *)(iVar4 + 0x4da),0xff,local_102,unaff_SS);
  if (local_102[0] != '\0') {
    puVar2 = (undefined4 *)*(undefined4 *)(local_106 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)(0x1040,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),local_102);
  }
  local_102[0] = '\0';
  FUN_1040_56d0(&stack0xfffe,DAT_1160_01ec,*(undefined2 *)(iVar4 + 0x468),
                *(undefined2 *)(iVar4 + 0x46a),0xff,local_102,unaff_SS);
  puVar10 = local_206;
  uVar7 = unaff_SS;
  FUN_1158_17cd(local_102,unaff_SS);
  FUN_1158_184c(0x59c8,0x1158);
  FUN_1158_17e7(0xff,local_102,unaff_SS,puVar10,uVar7);
  FUN_1040_56d0(&stack0xfffe,DAT_1160_01f6,*(undefined2 *)(iVar4 + 0x4cc),
                *(undefined2 *)(iVar4 + 0x4ce),0xff,local_102,unaff_SS);
  if (local_102[0] != '\0') {
    puVar2 = (undefined4 *)*(undefined4 *)(local_106 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)(0x1040,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),local_102);
  }
  if (param_2 == 1) {
    puVar2 = (undefined4 *)*(undefined4 *)(local_106 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)(0x1040,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),0x59ca,0x1040);
  }
  local_102[0] = '\0';
  FUN_1040_56d0(&stack0xfffe,DAT_1160_01ec,*(undefined2 *)(iVar4 + 0x4ec),
                *(undefined2 *)(iVar4 + 0x4ee),0xff,local_102,unaff_SS);
  puVar10 = local_206;
  uVar7 = unaff_SS;
  FUN_1158_17cd(local_102,unaff_SS);
  FUN_1158_184c(0x59c8,0x1158);
  FUN_1158_17e7(0xff,local_102,unaff_SS,puVar10,uVar7);
  FUN_1040_56d0(&stack0xfffe,DAT_1160_01f6,*(undefined2 *)(iVar4 + 0x4e4),
                *(undefined2 *)(iVar4 + 0x4e6),0xff,local_102,unaff_SS);
  FUN_1040_56d0(&stack0xfffe,DAT_1160_01f8,*(undefined2 *)(iVar4 + 0x4e8),
                *(undefined2 *)(iVar4 + 0x4ea),0xff,local_102,unaff_SS);
  if (local_102[0] != '\0') {
    puVar2 = (undefined4 *)*(undefined4 *)(local_106 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)(0x1040,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),local_102);
  }
  if (param_2 == 1) {
    puVar2 = (undefined4 *)*(undefined4 *)(local_106 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)(0x1040,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),0x59ca,0x1040);
  }
  local_102[0] = '\0';
  FUN_1040_56d0(&stack0xfffe,DAT_1160_01ec,*(undefined2 *)(iVar4 + 0x4f0),
                *(undefined2 *)(iVar4 + 0x4f2),0xff,local_102,unaff_SS);
  puVar10 = local_206;
  uVar7 = unaff_SS;
  FUN_1158_17cd(local_102,unaff_SS);
  FUN_1158_184c(0x59c8,0x1158);
  FUN_1158_184c(0x59c8,0x1158);
  FUN_1158_17e7(0xff,local_102,unaff_SS,puVar10,uVar7);
  FUN_1040_56d0(&stack0xfffe,DAT_1160_01f8,*(undefined2 *)(iVar4 + 0x4f8),
                *(undefined2 *)(iVar4 + 0x4fa),0xff,local_102,unaff_SS);
  if (local_102[0] != '\0') {
    puVar2 = (undefined4 *)*(undefined4 *)(local_106 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)(0x1040,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),local_102);
  }
  local_102[0] = '\0';
  FUN_1040_56d0(&stack0xfffe,DAT_1160_01ec,*(undefined2 *)(iVar4 + 0x508),
                *(undefined2 *)(iVar4 + 0x50a),0xff,local_102,unaff_SS);
  puVar10 = local_206;
  uVar7 = unaff_SS;
  FUN_1158_17cd(local_102,unaff_SS);
  FUN_1158_184c(0x59c8,0x1158);
  FUN_1158_184c(0x59c8,0x1158);
  FUN_1158_17e7(0xff,local_102,unaff_SS,puVar10,uVar7);
  FUN_1040_56d0(&stack0xfffe,DAT_1160_01f8,*(undefined2 *)(iVar4 + 0x4fc),
                *(undefined2 *)(iVar4 + 0x4fe),0xff,local_102,unaff_SS);
  if (local_102[0] != '\0') {
    puVar2 = (undefined4 *)*(undefined4 *)(local_106 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)(0x1040,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),local_102);
  }
  if (param_2 == 1) {
    puVar2 = (undefined4 *)*(undefined4 *)(local_106 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)(0x1040,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),0x59ca,0x1040);
  }
  local_102[0] = '\0';
  FUN_1040_56d0(&stack0xfffe,DAT_1160_01ec,*(undefined2 *)(iVar4 + 0x50c),
                *(undefined2 *)(iVar4 + 0x50e),0xff,local_102,unaff_SS);
  puVar10 = local_206;
  uVar7 = unaff_SS;
  FUN_1158_17cd(local_102,unaff_SS);
  FUN_1158_184c(0x59c8,0x1158);
  FUN_1158_184c(0x59c8,0x1158);
  FUN_1158_17e7(0xff,local_102,unaff_SS,puVar10,uVar7);
  FUN_1040_56d0(&stack0xfffe,DAT_1160_01f8,*(undefined2 *)(iVar4 + 0x500),
                *(undefined2 *)(iVar4 + 0x502),0xff,local_102,unaff_SS);
  if (local_102[0] != '\0') {
    puVar2 = (undefined4 *)*(undefined4 *)(local_106 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)(0x1040,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),local_102);
  }
  return;
}



/* ---- FUN_1040_6f3c @ 1040:6f3c  (46 octets) ---- */

void __stdcall16far FUN_1040_6f3c(undefined4 param_1)

{
  int iVar1;
  undefined2 uVar2;
  
  FUN_1158_0444();
  DAT_1160_0144 = 0x15;
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  DAT_1160_0146 = *(undefined2 *)(iVar1 + 0x580);
  DAT_1160_0148 = *(undefined2 *)(iVar1 + 0x57e);
  FUN_1140_5556(iVar1,uVar2);
  return;
}



/* ---- FUN_1040_6f6a @ 1040:6f6a  (46 octets) ---- */

void __stdcall16far FUN_1040_6f6a(undefined4 param_1)

{
  int iVar1;
  undefined2 uVar2;
  
  FUN_1158_0444();
  DAT_1160_0144 = 0x16;
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  DAT_1160_0146 = *(undefined2 *)(iVar1 + 0x580);
  DAT_1160_0148 = *(undefined2 *)(iVar1 + 0x57e);
  FUN_1140_5556(iVar1,uVar2);
  return;
}



/* ---- FUN_1040_6f98 @ 1040:6f98  (46 octets) ---- */

void __stdcall16far FUN_1040_6f98(undefined4 param_1)

{
  int iVar1;
  undefined2 uVar2;
  
  FUN_1158_0444();
  DAT_1160_0144 = 0x17;
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  DAT_1160_0146 = *(undefined2 *)(iVar1 + 0x580);
  DAT_1160_0148 = *(undefined2 *)(iVar1 + 0x57e);
  FUN_1140_5556(iVar1,uVar2);
  return;
}



/* ---- FUN_1040_6fc6 @ 1040:6fc6  (46 octets) ---- */

void __stdcall16far FUN_1040_6fc6(undefined4 param_1)

{
  int iVar1;
  undefined2 uVar2;
  
  FUN_1158_0444();
  DAT_1160_0144 = 0x18;
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  DAT_1160_0146 = *(undefined2 *)(iVar1 + 0x580);
  DAT_1160_0148 = *(undefined2 *)(iVar1 + 0x57e);
  FUN_1140_5556(iVar1,uVar2);
  return;
}



/* ---- FUN_1040_6ff4 @ 1040:6ff4  (46 octets) ---- */

void __stdcall16far FUN_1040_6ff4(undefined4 param_1)

{
  int iVar1;
  undefined2 uVar2;
  
  FUN_1158_0444();
  DAT_1160_0144 = 0x19;
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  DAT_1160_0146 = *(undefined2 *)(iVar1 + 0x580);
  DAT_1160_0148 = *(undefined2 *)(iVar1 + 0x57e);
  FUN_1140_5556(iVar1,uVar2);
  return;
}



/* ---- FUN_1040_7022 @ 1040:7022  (46 octets) ---- */

void __stdcall16far FUN_1040_7022(undefined4 param_1)

{
  int iVar1;
  undefined2 uVar2;
  
  FUN_1158_0444();
  DAT_1160_0144 = 0x1a;
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  DAT_1160_0146 = *(undefined2 *)(iVar1 + 0x580);
  DAT_1160_0148 = *(undefined2 *)(iVar1 + 0x57e);
  FUN_1140_5556(iVar1,uVar2);
  return;
}



/* ---- FUN_1040_7050 @ 1040:7050  (36 octets) ---- */

void __stdcall16far FUN_1040_7050(undefined4 param_1)

{
  undefined2 uVar1;
  
  FUN_1158_0444();
  uVar1 = (undefined2)((ulong)param_1 >> 0x10);
  FUN_1078_0ca1(*(undefined2 *)((int)param_1 + 0x580),*(undefined2 *)((int)param_1 + 0x57e),
                DAT_1160_0150);
  return;
}




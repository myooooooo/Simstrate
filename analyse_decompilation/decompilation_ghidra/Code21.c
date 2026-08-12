/* Simstrat (FR).EXE - segment Code21 - 29 fonctions
   Decompile par Ghidra 11.2.1 (x86 16 bits, chargeur NE). */

/* ---- FUN_10a0_064f @ 10a0:064f  (43 octets) ---- */

void __stdcall16far FUN_10a0_064f(undefined4 param_1)

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



/* ---- TFormSCDI_Print_FormCreate @ 10a0:069c  (1 octets) ---- */

/* WARNING: Removing unreachable block (ram,0x10a008d2) */

void TFormSCDI_Print_FormCreate(undefined2 param_1,undefined4 param_2)

{
  undefined2 *puVar1;
  undefined4 *puVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined2 uVar10;
  undefined2 uVar11;
  undefined2 unaff_SS;
  bool bVar12;
  bool bVar13;
  longdouble in_ST0;
  longdouble in_ST1;
  undefined4 uVar14;
  long lVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined2 uVar18;
  undefined auStack_406 [256];
  undefined auStack_306 [252];
  undefined auStack_20a [4];
  undefined auStack_206 [250];
  undefined4 uStack_10c;
  int iStack_108;
  undefined auStack_106 [256];
  int iStack_6;
  int iVar19;
  
  iStack_6 = 0x6a7;
  FUN_1158_0444();
  puVar17 = auStack_206;
  uVar18 = unaff_SS;
  FUN_1158_17cd(0x67a,0x1158);
  FUN_1158_184c(0x1dfa,0x1160);
  FUN_1158_184c(0x686,0x1158);
  puVar16 = auStack_306;
  uVar10 = (undefined2)((ulong)param_2 >> 0x10);
  iVar8 = (int)param_2;
  uVar11 = unaff_SS;
  FUN_1138_1d53();
  FUN_1158_184c(puVar16,uVar11);
  FUN_1138_1d8c(iVar8,uVar10,puVar17,uVar18);
  FUN_1138_1d8c((int)*(undefined4 *)(iVar8 + 0x188),
                (int)((ulong)*(undefined4 *)(iVar8 + 0x188) >> 0x10),0x1dfa,0x1160);
  puVar17 = auStack_306;
  uVar18 = unaff_SS;
  FUN_1158_17cd(0x68a,0x1138);
  puVar16 = auStack_206;
  uVar11 = unaff_SS;
  FUN_1150_08a9();
  FUN_1158_184c(puVar16,uVar11);
  FUN_1138_1d8c((int)*(undefined4 *)(iVar8 + 0x248),
                (int)((ulong)*(undefined4 *)(iVar8 + 0x248) >> 0x10),puVar17,uVar18);
  FUN_1140_1cd0((int)*(undefined4 *)(iVar8 + 0xd8),
                (int)((ulong)*(undefined4 *)(iVar8 + 0xd8) >> 0x10),0);
  FUN_1140_1cd0((int)*(undefined4 *)(iVar8 + 0xdc),
                (int)((ulong)*(undefined4 *)(iVar8 + 0xdc) >> 0x10),0);
  iStack_108 = (int)((ulong)*(undefined4 *)(iVar8 + 0x1e0) >> 0x10);
  uStack_10c._2_2_ = (undefined4 *)*(undefined4 *)(iVar8 + 0x1e0);
  iVar19 = 0;
  while( true ) {
    puVar2 = (undefined4 *)*(undefined4 *)((int)uStack_10c._2_2_ + 0xd8);
    uVar11 = (undefined2)((ulong)puVar2 >> 0x10);
    puVar9 = (undefined4 *)puVar2;
    puVar1 = (undefined2 *)((int)*puVar2 + 0xc);
    (*(code *)*puVar1)();
    FUN_1158_17e7(0xff,CONCAT42(CONCAT22(puVar9,unaff_SS),auStack_106),uVar11);
    iStack_6 = FUN_1158_1878();
    puVar17 = auStack_20a;
    iVar4 = iStack_6 + 1;
    uVar11 = unaff_SS;
    if (SCARRY2(iStack_6,1)) {
      iVar4 = FUN_1158_043e(0x1158);
    }
    FUN_1158_180b(100,iVar4);
    iVar4 = FUN_1158_0416();
    FUN_1158_17e7(0xff,CONCAT42(CONCAT22(puVar17,uVar10),iVar8 + iVar4 * 0x100 + 0x32c),uVar11);
    FUN_1158_1975();
    puVar1 = (undefined2 *)
             ((int)*(undefined4 *)*(undefined4 *)((int)uStack_10c._2_2_ + 0xd8) + 0x18);
    (*(code *)*puVar1)(0x1158);
    if (iVar19 == 2) break;
    iVar19 = iVar19 + 1;
  }
  uVar11 = 0x1148;
  iVar19 = FUN_1148_527d(iVar8,uVar10);
  iVar4 = iVar19 + -1;
  if (SBORROW2(iVar19,1)) {
    uVar11 = 0x1158;
    iVar4 = FUN_1158_043e(0x1148);
  }
  if (-1 < iVar4) {
    iVar19 = 0;
    iStack_108 = iVar4;
    while( true ) {
      uVar14 = FUN_1148_5246(iVar8,uVar10,iVar19);
      uVar11 = 0x1158;
      cVar3 = FUN_1158_2255(0x399,0x1138,uVar14);
      if (cVar3 != '\0') {
        uVar14 = FUN_1148_5246(iVar8,uVar10,iVar19);
        uVar11 = 0x1158;
        uVar14 = FUN_1158_2273(0x399,0x1138,uVar14);
        uVar18 = (undefined2)((ulong)uVar14 >> 0x10);
        iVar4 = (int)uVar14;
        uStack_10c = uVar14;
        if ((*(char *)(iVar4 + 0x29) != '\0') &&
           (*(int *)(iVar4 + 0xc) != 0 || *(int *)(iVar4 + 0xe) != 0)) {
          iVar6 = DAT_1160_1e06 >> 0xf;
          iVar5 = *(int *)(iVar4 + 0xc);
          uVar7 = *(uint *)(iVar4 + 0xe);
          bVar13 = false;
          if ((int)uVar7 < 0) {
            bVar12 = iVar5 != 0;
            iVar5 = -iVar5;
            iVar4 = ~uVar7 + 1;
            bVar13 = SBORROW2(~uVar7,-1) != SBORROW2(iVar4,(uint)bVar12);
            uVar7 = iVar4 - (uint)bVar12;
          }
          lVar15 = CONCAT22(uVar7,iVar5);
          iVar4 = DAT_1160_1e06;
          if (bVar13) {
            lVar15 = FUN_1158_043e(0x1158);
          }
          uVar11 = 0x1138;
          FUN_1138_1c77(uStack_10c,lVar15 <= CONCAT22(iVar6,iVar4));
        }
      }
      if (iVar19 == iStack_108) break;
      iVar19 = iVar19 + 1;
    }
  }
  puVar2 = (undefined4 *)*(undefined4 *)((int)*(undefined4 *)(iVar8 + 0x1e0) + 0xd8);
  iStack_108 = (int)((ulong)puVar2 >> 0x10);
  uStack_10c._2_2_ = (undefined4 *)puVar2;
  if (DAT_1160_1e06 < 3) {
    puVar1 = (undefined2 *)((int)*puVar2 + 0x34);
    (*(code *)*puVar1)(uVar11,uStack_10c._2_2_,iStack_108,2);
  }
  if (DAT_1160_1e06 < 2) {
    puVar1 = (undefined2 *)((int)*(undefined4 *)CONCAT22(iStack_108,uStack_10c._2_2_) + 0x34);
    (*(code *)*puVar1)(uVar11,uStack_10c._2_2_,iStack_108,1);
  }
  uVar11 = (undefined2)((ulong)*(undefined4 *)(iVar8 + 0x1e0) >> 0x10);
  iVar19 = (int)*(undefined4 *)(iVar8 + 0x1e0);
  FUN_1120_5d4d((int)*(undefined4 *)(iVar8 + 0x1e4),
                (int)((ulong)*(undefined4 *)(iVar8 + 0x1e4) >> 0x10),*(undefined2 *)(iVar19 + 0xd8),
                *(undefined2 *)(iVar19 + 0xda));
  puVar17 = auStack_206;
  uVar14 = *(undefined4 *)((int)DAT_1160_18f6 + 0x24c);
  uVar11 = unaff_SS;
  FUN_1138_1d53((int)uVar14,(int)((ulong)uVar14 >> 0x10));
  FUN_1138_1d8c((int)*(undefined4 *)(iVar8 + 0x2c4),
                (int)((ulong)*(undefined4 *)(iVar8 + 0x2c4) >> 0x10),puVar17,uVar11);
  puVar17 = auStack_206;
  uVar14 = *(undefined4 *)((int)DAT_1160_18f6 + 0x250);
  uVar11 = unaff_SS;
  FUN_1138_1d53((int)uVar14,(int)((ulong)uVar14 >> 0x10));
  FUN_1138_1d8c((int)*(undefined4 *)(iVar8 + 0x2c8),
                (int)((ulong)*(undefined4 *)(iVar8 + 0x2c8) >> 0x10),puVar17,uVar11);
  puVar17 = auStack_206;
  uVar14 = *(undefined4 *)((int)DAT_1160_18f6 + 0x254);
  uVar11 = unaff_SS;
  FUN_1138_1d53((int)uVar14,(int)((ulong)uVar14 >> 0x10));
  FUN_1138_1d8c((int)*(undefined4 *)(iVar8 + 0x2cc),
                (int)((ulong)*(undefined4 *)(iVar8 + 0x2cc) >> 0x10),puVar17,uVar11);
  puVar17 = auStack_206;
  uVar14 = *(undefined4 *)((int)DAT_1160_18f6 + 0x248);
  uVar18 = unaff_SS;
  FUN_1138_1d53((int)uVar14,(int)((ulong)uVar14 >> 0x10));
  FUN_1158_184c(0x686,0x1138);
  puVar16 = auStack_306;
  uVar11 = unaff_SS;
  FUN_1150_15fe(puVar16);
  FUN_1150_1cbf((double)in_ST0);
  FUN_1158_184c(puVar16,uVar11);
  FUN_1158_184c(0x686,0x1158);
  puVar16 = auStack_406;
  FUN_1150_15fe(puVar16);
  FUN_1150_1ce4((double)in_ST1);
  FUN_1158_184c(puVar16,unaff_SS);
  FUN_1158_184c(0x686,0x1158);
  FUN_1138_1d8c((int)*(undefined4 *)(iVar8 + 0x2d0),
                (int)((ulong)*(undefined4 *)(iVar8 + 0x2d0) >> 0x10),puVar17,uVar18);
  FUN_10e0_3017((int)*(undefined4 *)(iVar8 + 0x194),
                (int)((ulong)*(undefined4 *)(iVar8 + 0x194) >> 0x10),0x1e16,0x1160);
  FUN_10e0_3017((int)*(undefined4 *)(iVar8 + 0x19c),
                (int)((ulong)*(undefined4 *)(iVar8 + 0x19c) >> 0x10),0x1e24,0x1160);
  FUN_10e0_3017((int)*(undefined4 *)(iVar8 + 0x1a4),
                (int)((ulong)*(undefined4 *)(iVar8 + 0x1a4) >> 0x10),0x1e24,0x1160);
  return;
}



/* ---- TFormSCDI_Print_FormClose @ 10a0:0a84  (31 octets) ---- */

void __stdcall16far TFormSCDI_Print_FormClose(undefined4 param_1,undefined *param_2)

{
  FUN_1158_0444();
  FUN_10a0_0d1b((int)param_1,(int)((ulong)param_1 >> 0x10));
  *param_2 = 2;
  return;
}



/* ---- FUN_10a0_0abe @ 10a0:0abe  (469 octets) ---- */

void __stdcall16far FUN_10a0_0abe(undefined4 param_1,undefined4 param_2)

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
  
  local_6 = 0xac9;
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
      FUN_10e0_60f9(local_10e,0xab8,0x1158);
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
      FUN_10e0_60f9(local_10e,0xaad,0x1128);
    }
    else {
      FUN_1158_17e7(0xff,local_106,unaff_SS,0xaa3,0x1128);
      while( true ) {
        pbVar8 = local_106;
        uVar9 = unaff_SS;
        uVar5 = FUN_1140_33d5(uVar3,uVar4);
        iVar2 = FUN_1128_2003(uVar5,pbVar8,uVar9);
        if (0xb < local_106[0] || *(int *)(local_10a + 0x22) <= iVar2) break;
        FUN_1158_1916(3,0xff,local_106,unaff_SS,0xaab,0x1128);
      }
      if (7 < local_106[0]) {
        FUN_1158_1975(1,3,local_106,unaff_SS);
      }
      FUN_10e0_60f9(local_10e,local_106,unaff_SS);
    }
  }
  return;
}



/* ---- FUN_10a0_0c93 @ 10a0:0c93  (136 octets) ---- */

void __stdcall16far FUN_10a0_0c93(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined4 uVar6;
  undefined2 uVar7;
  
  uVar7 = 0xc9e;
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
        FUN_10a0_0abe(uVar4,uVar5,uVar6);
      }
      if (iVar2 == iVar3) break;
      iVar2 = iVar2 + 1;
    }
  }
  return;
}



/* ---- FUN_10a0_0d1b @ 10a0:0d1b  (59 octets) ---- */

void __stdcall16far FUN_10a0_0d1b(undefined4 param_1)

{
  int iVar1;
  undefined2 uVar2;
  
  FUN_1158_0444();
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  FUN_10d8_31d2((int)*(undefined4 *)(iVar1 + 0x194),
                (int)((ulong)*(undefined4 *)(iVar1 + 0x194) >> 0x10));
  FUN_10d8_31d2((int)*(undefined4 *)(iVar1 + 0x19c),
                (int)((ulong)*(undefined4 *)(iVar1 + 0x19c) >> 0x10));
  FUN_10d8_31d2((int)*(undefined4 *)(iVar1 + 0x1a4),
                (int)((ulong)*(undefined4 *)(iVar1 + 0x1a4) >> 0x10));
  return;
}



/* ---- FUN_10a0_0d56 @ 10a0:0d56  (183 octets) ---- */

void __stdcall16far FUN_10a0_0d56(undefined4 param_1)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  
  FUN_1158_0444();
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  uVar4 = (undefined2)((ulong)*(undefined4 *)(iVar1 + 0x194) >> 0x10);
  uVar2 = (undefined2)*(undefined4 *)(iVar1 + 0x194);
  FUN_10d8_31d2(uVar2,uVar4);
  FUN_10e0_2ffb(uVar2,uVar4,1);
  FUN_10e0_2ed2(uVar2,uVar4,0);
  FUN_10d8_31bf(uVar2,uVar4);
  uVar4 = (undefined2)((ulong)*(undefined4 *)(iVar1 + 0x19c) >> 0x10);
  uVar2 = (undefined2)*(undefined4 *)(iVar1 + 0x19c);
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
  return;
}



/* ---- FUN_10a0_0e7d @ 10a0:0e7d  (1078 octets) ---- */

void __stdcall16far FUN_10a0_0e7d(undefined4 param_1)

{
  undefined2 *puVar1;
  char cVar2;
  byte extraout_AH;
  byte extraout_AH_00;
  byte bVar8;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined2 uVar7;
  int iVar9;
  undefined4 *puVar10;
  undefined2 uVar11;
  undefined2 uVar12;
  char *pcVar13;
  undefined2 unaff_SS;
  undefined4 *puVar14;
  undefined4 uVar15;
  undefined *puVar16;
  undefined2 uStack_11c;
  undefined *puStack_11a;
  undefined2 uStack_118;
  undefined2 uStack_116;
  undefined local_114 [4];
  undefined local_110 [248];
  undefined2 local_18;
  undefined2 local_16;
  undefined4 local_14;
  undefined4 local_10;
  int local_c;
  undefined2 local_a;
  undefined4 local_8;
  
  local_8 = (undefined4 *)CONCAT22(0xe88,(undefined2)local_8);
  FUN_1158_0444();
  uStack_116 = 0x1158;
  uStack_118 = 0xe73;
  uStack_11c = DAT_1160_1858;
  uVar11 = (undefined2)((ulong)param_1 >> 0x10);
  iVar9 = (int)param_1;
  local_10 = *(undefined4 *)(iVar9 + 0x194);
  local_18 = 1;
  local_16 = 0;
  local_14 = local_14 & 0xffffff00;
  pcVar13 = (char *)s_iTime_1160_10dc + 4;
  DAT_1160_1858 = &uStack_11c;
  puStack_11a = &stack0xfffe;
  cVar2 = FUN_10e0_2895((int)local_10,(int)((ulong)local_10 >> 0x10),0,&local_18,unaff_SS);
  if (cVar2 == '\0') {
    pcVar13 = (char *)s_iCurrDigits_1160_109b + 5;
    FUN_10a0_064f(iVar9,uVar11);
  }
  puVar14 = (undefined4 *)FUN_10d8_3b9b((int)local_10,(int)((ulong)local_10 >> 0x10),0xe0d,pcVar13);
  puVar1 = (undefined2 *)((int)*puVar14 + 0x44);
  (*(code *)*puVar1)(0x10d8,puVar14);
  local_c = FUN_1158_0416();
  if (local_c == 0) {
    FUN_1138_1d8c((int)*(undefined4 *)(iVar9 + 0x31c),
                  (int)((ulong)*(undefined4 *)(iVar9 + 0x31c) >> 0x10),0xe27,0x1158);
    bVar8 = extraout_AH;
  }
  else {
    FUN_1138_1d8c((int)*(undefined4 *)(iVar9 + 0x31c),
                  (int)((ulong)*(undefined4 *)(iVar9 + 0x31c) >> 0x10),0xe30,0x1158);
    bVar8 = extraout_AH_00;
  }
  uVar3 = (uint)bVar8 * 0x100;
  if (2 < DAT_1160_1e06) {
    uVar3 = uVar3 + 1;
  }
  uVar4 = uVar3 & 0xff00;
  if (local_c == 1) {
    uVar4 = uVar4 + 1;
  }
  FUN_1138_1c77((int)*(undefined4 *)(iVar9 + 800),(int)((ulong)*(undefined4 *)(iVar9 + 800) >> 0x10)
                ,CONCAT11((char)(uVar4 >> 8),(byte)uVar4 & (byte)uVar3));
  local_8 = (undefined4 *)
            FUN_10d8_3c43((int)*(undefined4 *)(iVar9 + 0x194),
                          (int)((ulong)*(undefined4 *)(iVar9 + 0x194) >> 0x10),0xe3a,0x1138);
  if (local_8 == (undefined4 *)0x0) {
    local_a = 8;
  }
  else {
    puVar1 = (undefined2 *)((int)*local_8 + 0x44);
    (*(code *)*puVar1)(0x10d8,local_8);
    local_a = FUN_1158_0416();
  }
  FUN_10a0_12c9(iVar9,uVar11,local_a);
  local_10 = *(undefined4 *)(iVar9 + 0x19c);
  local_18 = 1;
  local_16 = 0;
  local_14 = local_14 & 0xffffff00;
  pcVar13 = (char *)s_iTime_1160_10dc + 4;
  cVar2 = FUN_10e0_2895((int)local_10,(int)((ulong)local_10 >> 0x10),0,&local_18,unaff_SS);
  if (cVar2 == '\0') {
    pcVar13 = (char *)s_iCurrDigits_1160_109b + 5;
    FUN_10a0_064f(iVar9,uVar11);
  }
  puVar14 = (undefined4 *)FUN_10d8_3b9b((int)local_10,(int)((ulong)local_10 >> 0x10),0xe48,pcVar13);
  puVar1 = (undefined2 *)((int)*puVar14 + 0x44);
  (*(code *)*puVar1)(0x10d8,puVar14);
  iVar5 = FUN_1158_0416();
  local_14 = *(ulong *)(iVar9 + 0x1e0);
  puVar14 = (undefined4 *)*(undefined4 *)((int)local_14 + 0xd8);
  puVar1 = (undefined2 *)((int)*puVar14 + 0x10);
  iVar6 = (*(code *)*puVar1)(0x1158,(undefined4 *)puVar14,(int)((ulong)puVar14 >> 0x10));
  uVar7 = (undefined2)(local_14 >> 0x10);
  if (iVar5 < iVar6) {
    FUN_1120_5c2e((int)local_14,uVar7,iVar5);
  }
  else {
    puVar14 = (undefined4 *)*(undefined4 *)((int)local_14 + 0xd8);
    puVar1 = (undefined2 *)((int)*puVar14 + 0x10);
    iVar5 = (*(code *)*puVar1)(0x1158,(undefined4 *)puVar14,(int)((ulong)puVar14 >> 0x10));
    iVar6 = iVar5 + -1;
    if (SBORROW2(iVar5,1)) {
      iVar6 = FUN_1158_043e(0x1158);
    }
    FUN_1120_5c2e((int)local_14,(int)(local_14 >> 0x10),iVar6);
  }
  FUN_1120_5c07((int)local_14,(int)(local_14 >> 0x10));
  iVar5 = FUN_1158_0416();
  FUN_1138_1d8c((int)*(undefined4 *)(iVar9 + 0x1c0),
                (int)((ulong)*(undefined4 *)(iVar9 + 0x1c0) >> 0x10),iVar9 + iVar5 * 0x100 + 0x32c,
                uVar11);
  puVar16 = local_114;
  uVar7 = FUN_1120_5c07((int)local_14,(int)(local_14 >> 0x10));
  puVar14 = (undefined4 *)*(undefined4 *)((int)local_14 + 0xd8);
  uVar12 = (undefined2)((ulong)puVar14 >> 0x10);
  puVar10 = (undefined4 *)puVar14;
  puVar1 = (undefined2 *)((int)*puVar14 + 0xc);
  (*(code *)*puVar1)(0x1120,puVar10,uVar12,uVar7,puVar16);
  FUN_1138_1d8c((int)*(undefined4 *)(iVar9 + 0x1d8),
                (int)((ulong)*(undefined4 *)(iVar9 + 0x1d8) >> 0x10),puVar10,uVar12);
  local_8 = (undefined4 *)FUN_10d8_3c43((int)local_10,(int)((ulong)local_10 >> 0x10),0xe61,0x1138);
  if (local_8 == (undefined4 *)0x0) {
    puVar16 = local_110;
    uVar7 = unaff_SS;
    FUN_1150_08a9(100,0);
    FUN_1138_1d8c((int)*(undefined4 *)(iVar9 + 0x2ec),
                  (int)((ulong)*(undefined4 *)(iVar9 + 0x2ec) >> 0x10),puVar16,uVar7);
  }
  else {
    puVar16 = local_110;
    puVar1 = (undefined2 *)((int)*local_8 + 0x44);
    uVar7 = unaff_SS;
    uVar15 = (*(code *)*puVar1)(0x10d8,local_8,puVar16);
    FUN_1150_08a9(uVar15);
    FUN_1138_1d8c((int)*(undefined4 *)(iVar9 + 0x2ec),
                  (int)((ulong)*(undefined4 *)(iVar9 + 0x2ec) >> 0x10),puVar16,uVar7);
  }
  local_10 = *(undefined4 *)(iVar9 + 0x1a4);
  local_18 = 2;
  local_16 = 0;
  local_14 = local_14 & 0xffffff00;
  pcVar13 = (char *)s_iTime_1160_10dc + 4;
  cVar2 = FUN_10e0_2895((int)local_10,(int)((ulong)local_10 >> 0x10),0,&local_18,unaff_SS);
  if (cVar2 == '\0') {
    pcVar13 = (char *)s_iCurrDigits_1160_109b + 5;
    FUN_10a0_064f(iVar9,uVar11);
  }
  puVar14 = (undefined4 *)FUN_10d8_3b9b((int)local_10,(int)((ulong)local_10 >> 0x10),0xe48,pcVar13);
  puVar1 = (undefined2 *)((int)*puVar14 + 0x44);
  (*(code *)*puVar1)(0x10d8,puVar14);
  iVar5 = FUN_1158_0416();
  local_14._2_2_ = (undefined2)((ulong)*(undefined4 *)(iVar9 + 0x1e4) >> 0x10);
  local_14._0_2_ = (int)*(undefined4 *)(iVar9 + 0x1e4);
  puVar14 = (undefined4 *)*(undefined4 *)((int)local_14 + 0xd8);
  puVar1 = (undefined2 *)((int)*puVar14 + 0x10);
  iVar6 = (*(code *)*puVar1)(0x1158,(undefined4 *)puVar14,(int)((ulong)puVar14 >> 0x10));
  if (iVar5 < iVar6) {
    FUN_1120_5c2e((int)local_14,local_14._2_2_,iVar5);
  }
  else {
    puVar14 = (undefined4 *)*(undefined4 *)((int)local_14 + 0xd8);
    puVar1 = (undefined2 *)((int)*puVar14 + 0x10);
    iVar5 = (*(code *)*puVar1)(0x1158,(undefined4 *)puVar14,(int)((ulong)puVar14 >> 0x10));
    iVar6 = iVar5 + -1;
    if (SBORROW2(iVar5,1)) {
      iVar6 = FUN_1158_043e(0x1158);
    }
    FUN_1120_5c2e((int)local_14,local_14._2_2_,iVar6);
  }
  FUN_1120_5c07((int)local_14,local_14._2_2_);
  iVar5 = FUN_1158_0416();
  FUN_1138_1d8c((int)*(undefined4 *)(iVar9 + 0x1f0),
                (int)((ulong)*(undefined4 *)(iVar9 + 0x1f0) >> 0x10),iVar9 + iVar5 * 0x100 + 0x32c,
                uVar11);
  puVar16 = local_114;
  uVar7 = FUN_1120_5c07((int)local_14,local_14._2_2_);
  puVar14 = (undefined4 *)*(undefined4 *)((int)local_14 + 0xd8);
  uVar12 = (undefined2)((ulong)puVar14 >> 0x10);
  puVar10 = (undefined4 *)puVar14;
  puVar1 = (undefined2 *)((int)*puVar14 + 0xc);
  (*(code *)*puVar1)(0x1120,puVar10,uVar12,uVar7,puVar16);
  FUN_1138_1d8c((int)*(undefined4 *)(iVar9 + 0x1fc),
                (int)((ulong)*(undefined4 *)(iVar9 + 0x1fc) >> 0x10),puVar10,uVar12);
  local_8 = (undefined4 *)FUN_10d8_3c43((int)local_10,(int)((ulong)local_10 >> 0x10),0xe61,0x1138);
  if (local_8 == (undefined4 *)0x0) {
    puVar16 = local_110;
    FUN_1150_08a9(100,0);
    FUN_1138_1d8c((int)*(undefined4 *)(iVar9 + 0x2f0),
                  (int)((ulong)*(undefined4 *)(iVar9 + 0x2f0) >> 0x10),puVar16,unaff_SS);
    DAT_1160_1858 = (undefined2 *)uVar7;
  }
  else {
    puVar16 = local_110;
    puVar1 = (undefined2 *)((int)*local_8 + 0x44);
    uVar15 = (*(code *)*puVar1)(0x10d8,local_8,puVar16);
    FUN_1150_08a9(uVar15);
    FUN_1138_1d8c((int)*(undefined4 *)(iVar9 + 0x2f0),
                  (int)((ulong)*(undefined4 *)(iVar9 + 0x2f0) >> 0x10),puVar16,unaff_SS);
    DAT_1160_1858 = (undefined2 *)uVar7;
  }
  FUN_10a0_0c93(iVar9,uVar11);
  return;
}



/* ---- FUN_10a0_12c9 @ 10a0:12c9  (214 octets) ---- */

void __stdcall16far FUN_10a0_12c9(undefined4 param_1,int param_2)

{
  byte extraout_AH;
  int iVar1;
  byte extraout_AH_00;
  byte extraout_AH_01;
  byte extraout_AH_02;
  byte extraout_AH_03;
  byte extraout_AH_04;
  byte extraout_AH_05;
  byte extraout_AH_06;
  int iVar2;
  undefined2 uVar3;
  
  FUN_1158_0444();
  iVar1 = (uint)extraout_AH * 0x100;
  if (10 < param_2) {
    iVar1 = iVar1 + 1;
  }
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  iVar2 = (int)param_1;
  FUN_1138_1c77((int)*(undefined4 *)(iVar2 + 0x310),
                (int)((ulong)*(undefined4 *)(iVar2 + 0x310) >> 0x10),iVar1);
  iVar1 = (uint)extraout_AH_00 * 0x100;
  if (10 < param_2) {
    iVar1 = iVar1 + 1;
  }
  FUN_1138_1c77((int)*(undefined4 *)(iVar2 + 0x318),
                (int)((ulong)*(undefined4 *)(iVar2 + 0x318) >> 0x10),iVar1);
  iVar1 = (uint)extraout_AH_01 * 0x100;
  if (9 < param_2) {
    iVar1 = iVar1 + 1;
  }
  FUN_1138_1c77((int)*(undefined4 *)(iVar2 + 0x308),
                (int)((ulong)*(undefined4 *)(iVar2 + 0x308) >> 0x10),iVar1);
  iVar1 = (uint)extraout_AH_02 * 0x100;
  if (9 < param_2) {
    iVar1 = iVar1 + 1;
  }
  FUN_1138_1c77((int)*(undefined4 *)(iVar2 + 0x314),
                (int)((ulong)*(undefined4 *)(iVar2 + 0x314) >> 0x10),iVar1);
  iVar1 = (uint)extraout_AH_03 * 0x100;
  if (8 < param_2) {
    iVar1 = iVar1 + 1;
  }
  FUN_1138_1c77((int)*(undefined4 *)(iVar2 + 0x304),
                (int)((ulong)*(undefined4 *)(iVar2 + 0x304) >> 0x10),iVar1);
  iVar1 = (uint)extraout_AH_04 * 0x100;
  if (8 < param_2) {
    iVar1 = iVar1 + 1;
  }
  FUN_1138_1c77((int)*(undefined4 *)(iVar2 + 0x30c),
                (int)((ulong)*(undefined4 *)(iVar2 + 0x30c) >> 0x10),iVar1);
  iVar1 = (uint)extraout_AH_05 * 0x100;
  if (7 < param_2) {
    iVar1 = iVar1 + 1;
  }
  FUN_1138_1c77((int)*(undefined4 *)(iVar2 + 0x290),
                (int)((ulong)*(undefined4 *)(iVar2 + 0x290) >> 0x10),iVar1);
  iVar1 = (uint)extraout_AH_06 * 0x100;
  if (7 < param_2) {
    iVar1 = iVar1 + 1;
  }
  FUN_1138_1c77((int)*(undefined4 *)(iVar2 + 0x294),
                (int)((ulong)*(undefined4 *)(iVar2 + 0x294) >> 0x10),iVar1);
  return;
}



/* ---- FUN_10a0_13a5 @ 10a0:13a5  (306 octets) ---- */

void __stdcall16far FUN_10a0_13a5(char param_1)

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
  
  _local_6 = CONCAT22(unaff_CS,0x13b0);
  FUN_1158_0444();
  uStack_e = (undefined2)((ulong)DAT_1160_2c2a >> 0x10);
  uStack_10 = (undefined2)DAT_1160_2c2a;
  uStack_12 = 0x1158;
  pcStack_14 = (char *)0x13be;
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
  pcStack_14 = (char *)s_iCurrDigits_1160_109b + 5;
  uStack_16 = 0x22;
  uStack_18 = 0x1140;
  uStack_1a = 0x1401;
  local_c = FUN_1140_2553();
  uVar3 = (undefined2)((ulong)local_c >> 0x10);
  local_6 = (int)local_c;
  uStack_18 = 0x1140;
  uStack_1a = 0x139f;
  uStack_1e = DAT_1160_1858;
  DAT_1160_1858 = &uStack_1e;
  puStack_1c = &stack0xfffe;
  FUN_10a0_0d56(local_c);
  FUN_10a0_0e7d(local_c);
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
    FUN_10a0_15dd(local_6,uVar3);
  }
  FUN_1140_7303((int)DAT_1160_2c2a,(int)((ulong)DAT_1160_2c2a >> 0x10));
  DAT_1160_1858 = (undefined2 *)uVar2;
  uStack_1a = 0x1140;
  puStack_1c = (undefined *)0x14d3;
  uStack_1e = uVar3;
  FUN_1140_5f1d(local_6);
  return;
}



/* ---- FUN_10a0_14dd @ 10a0:14dd  (154 octets) ---- */

void __cdecl16far FUN_10a0_14dd(void)

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
  char *pcStack_12;
  undefined2 uStack_10;
  undefined2 uStack_e;
  undefined2 uStack_c;
  undefined4 local_a;
  undefined2 local_6;
  
  _local_6 = CONCAT22(unaff_CS,0x14e8);
  FUN_1158_0444();
  uStack_c = (undefined2)((ulong)DAT_1160_2c2a >> 0x10);
  uStack_e = (undefined2)DAT_1160_2c2a;
  uStack_10 = 0x1158;
  pcStack_12 = (char *)0x14f6;
  FUN_1140_7303();
  uStack_c = DAT_1160_2c2a._2_2_;
  uStack_e = (undefined2)DAT_1160_2c2a;
  uStack_10 = CONCAT11(extraout_AH,1);
  pcStack_12 = (char *)s_iCurrDigits_1160_109b + 5;
  uStack_14 = 0x22;
  uStack_16 = 0x1140;
  uStack_18 = 0x150e;
  local_a = FUN_1140_2553();
  uVar1 = (ulong)local_a >> 0x10;
  local_6 = (undefined2)local_a;
  uStack_16 = 0x1140;
  uStack_18 = 0x14d7;
  uStack_1c = DAT_1160_1858;
  DAT_1160_1858 = &uStack_1c;
  puStack_1a = &stack0xfffe;
  FUN_10a0_0d56(local_a);
  FUN_10a0_0e7d(local_a);
  FUN_1138_1ed5(local_a,0xfff0,0xffff);
  FUN_1140_3a14(local_a,2);
  uVar2 = (undefined2)local_a;
  FUN_1140_5d45(local_a);
  DAT_1160_1858 = (undefined2 *)uVar2;
  puStack_1a = (undefined *)0x1140;
  uStack_1c = 0x1577;
  FUN_1140_5f1d(local_6,(int)uVar1);
  return;
}



/* ---- FUN_10a0_1581 @ 10a0:1581  (69 octets) ---- */

undefined2 __stdcall16far FUN_10a0_1581(void)

{
  undefined2 uVar1;
  undefined2 unaff_SS;
  undefined4 uVar2;
  undefined local_24 [30];
  undefined2 uStack_6;
  
  uStack_6 = 0x158c;
  FUN_1158_0444();
  uVar2 = FUN_10f0_2a04((int)DAT_1160_2c54,(int)((ulong)DAT_1160_2c54 >> 0x10));
  uVar1 = FUN_1128_21d2(uVar2);
  GETTEXTMETRICS(0x1128,local_24,unaff_SS);
  uVar1 = FUN_1158_0416(uVar1);
  return uVar1;
}



/* ---- FUN_10a0_15dd @ 10a0:15dd  (1112 octets) ---- */

void __cdecl16far FUN_10a0_15dd(undefined4 param_1)

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
  
  local_6 = 0x15e8;
  FUN_1158_0444();
  uVar9 = (undefined2)((ulong)param_1 >> 0x10);
  iVar6 = (int)param_1;
  uStack_418 = 0x1158;
  pcStack_416 = (char *)iVar6;
  puStack_414 = (undefined *)uVar9;
  FUN_10a0_1d9e();
  puStack_414 = local_106;
  pcStack_416 = (char *)s_iCurrDigits_1160_109b + 5;
  uStack_418 = 0x1603;
  FUN_10f0_204e();
  puStack_414 = local_106;
  pcStack_416 = (char *)0x10f0;
  uStack_418 = 0x160e;
  FUN_1158_09f5();
  puStack_414 = (undefined *)0x1613;
  FUN_1158_0408();
  puStack_414 = (undefined *)0x15d7;
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
    FUN_1158_0db5(0,0x15c6,uVar10);
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
        local_6 = FUN_1158_1878(local_206,unaff_SS,0x15c7,0x1158);
        if (0 < local_6) {
          FUN_1158_1975(1,local_6,local_206,unaff_SS);
          FUN_1158_1916(local_6,0xff,local_206,unaff_SS,0x15c9,0x1158);
        }
      } while (local_6 != 0);
      puVar13 = local_312;
      uVar10 = unaff_SS;
      FUN_1158_17cd(0x15cb,0x1158);
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
  uVar3 = FUN_10a0_1581(&stack0xfffe);
  if (0xfffd < uVar3) {
    FUN_1158_043e((char *)s_iCurrDigits_1160_109b + 5);
  }
  local_208 = FUN_1158_0416();
  puVar13 = local_410;
  uVar14 = unaff_SS;
  FUN_1158_17cd(0x15cb,0x1158);
  puVar12 = local_310;
  uVar10 = unaff_SS;
  FUN_1138_1d53((int)*(undefined4 *)(iVar6 + 0x2c4),
                (int)((ulong)*(undefined4 *)(iVar6 + 0x2c4) >> 0x10));
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
  FUN_1158_17cd(0x15cb,0x1128);
  puVar12 = local_310;
  uVar10 = unaff_SS;
  FUN_1138_1d53((int)*(undefined4 *)(iVar6 + 0x2c8),
                (int)((ulong)*(undefined4 *)(iVar6 + 0x2c8) >> 0x10));
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
  FUN_1158_17cd(0x15cb,0x1128);
  puVar12 = local_310;
  uVar10 = unaff_SS;
  FUN_1138_1d53((int)*(undefined4 *)(iVar6 + 0x2cc),
                (int)((ulong)*(undefined4 *)(iVar6 + 0x2cc) >> 0x10));
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
  FUN_1158_17cd(0x15cb,0x1128);
  puVar12 = local_310;
  uVar10 = unaff_SS;
  FUN_1138_1d53((int)*(undefined4 *)(iVar6 + 0x2d0),
                (int)((ulong)*(undefined4 *)(iVar6 + 0x2d0) >> 0x10));
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
  uStack_418 = 0x1a35;
  FUN_1158_0a4f(local_106,unaff_SS);
  FUN_1158_0408();
  FUN_1120_49e3((int)*(undefined4 *)(iVar6 + 0x2f4),
                (int)((ulong)*(undefined4 *)(iVar6 + 0x2f4) >> 0x10));
  return;
}



/* ---- FUN_10a0_1a3d @ 10a0:1a3d  (858 octets) ---- */

void __stdcall16far
FUN_10a0_1a3d(int param_1,undefined param_2,int param_3,undefined4 param_4,undefined2 param_5,
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
  
  uStack_6 = 0x1a48;
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
        FUN_1158_184c(0x1a39,0x1158);
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
        FUN_1158_184c(0x1a3b,0x1158);
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
        FUN_1158_17cd(0x1a3b,0x1158);
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



/* ---- FUN_10a0_1d9e @ 10a0:1d9e  (3808 octets) ---- */

void __stdcall16far FUN_10a0_1d9e(undefined4 param_1,int param_2)

{
  undefined2 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined2 uVar4;
  undefined2 unaff_SS;
  undefined uVar5;
  undefined *puVar6;
  undefined2 uVar7;
  undefined *puVar8;
  undefined2 uVar9;
  undefined local_506 [256];
  undefined local_406 [256];
  undefined local_306 [256];
  undefined local_206 [256];
  int local_106;
  undefined2 local_104;
  char local_102 [252];
  undefined2 uStack_6;
  
  uStack_6 = 0x1da9;
  FUN_1158_0444();
  uVar4 = (undefined2)((ulong)param_1 >> 0x10);
  iVar3 = (int)param_1;
  local_104 = (undefined2)((ulong)*(undefined4 *)(iVar3 + 0x2f4) >> 0x10);
  local_106 = (int)*(undefined4 *)(iVar3 + 0x2f4);
  FUN_1120_49e3(local_106,local_104);
  local_102[0] = '\0';
  FUN_10a0_1a3d(&stack0xfffe,0x67,0,*(undefined2 *)(iVar3 + 0x184),*(undefined2 *)(iVar3 + 0x186),
                0xff,local_102,unaff_SS);
  puVar8 = local_206;
  uVar9 = unaff_SS;
  FUN_1158_17cd(local_102,unaff_SS);
  FUN_1158_184c(0x1d97,0x1158);
  puVar6 = local_306;
  uVar7 = unaff_SS;
  FUN_1138_1d53((int)*(undefined4 *)(iVar3 + 0x188),
                (int)((ulong)*(undefined4 *)(iVar3 + 0x188) >> 0x10));
  FUN_1158_184c(puVar6,uVar7);
  FUN_1158_17e7(0xff,local_102,unaff_SS,puVar8,uVar9);
  puVar2 = (undefined4 *)*(undefined4 *)(local_106 + 0xec);
  puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
  (*(code *)*puVar1)(0x1158,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),local_102);
  if (param_2 == 1) {
    puVar2 = (undefined4 *)*(undefined4 *)(local_106 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)(0x1158,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),0x1d99,0x1158);
  }
  local_102[0] = '\0';
  FUN_10a0_1a3d(&stack0xfffe,0x67,10,*(undefined2 *)(iVar3 + 0x18c),*(undefined2 *)(iVar3 + 0x18e),
                0xff,local_102,unaff_SS);
  FUN_10a0_1a3d(&stack0xfffe,0x67,0x23,*(undefined2 *)(iVar3 + 400),*(undefined2 *)(iVar3 + 0x192),
                0xff,local_102,unaff_SS);
  puVar2 = (undefined4 *)*(undefined4 *)(local_106 + 0xec);
  puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
  (*(code *)*puVar1)((char *)s_iCurrDigits_1160_109b + 5,(undefined4 *)puVar2,
                     (int)((ulong)puVar2 >> 0x10),local_102);
  if (param_2 == 1) {
    puVar2 = (undefined4 *)*(undefined4 *)(local_106 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)((char *)s_iCurrDigits_1160_109b + 5,(undefined4 *)puVar2,
                       (int)((ulong)puVar2 >> 0x10),0x1d99,(char *)s_iCurrDigits_1160_109b + 5);
  }
  local_102[0] = '\0';
  FUN_10a0_1a3d(&stack0xfffe,0x67,DAT_1160_0492,*(undefined2 *)(iVar3 + 0x248),
                *(undefined2 *)(iVar3 + 0x24a),0xff,local_102,unaff_SS);
  if (local_102[0] != '\0') {
    puVar2 = (undefined4 *)*(undefined4 *)(local_106 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)((char *)s_iCurrDigits_1160_109b + 5,(undefined4 *)puVar2,
                       (int)((ulong)puVar2 >> 0x10),local_102);
  }
  local_102[0] = '\0';
  FUN_10a0_1a3d(&stack0xfffe,0x67,DAT_1160_0492,*(undefined2 *)(iVar3 + 0x208),
                *(undefined2 *)(iVar3 + 0x20a),0xff,local_102,unaff_SS);
  FUN_10a0_1a3d(&stack0xfffe,100,DAT_1160_0498,*(undefined2 *)(iVar3 + 0x20c),
                *(undefined2 *)(iVar3 + 0x20e),0xff,local_102,unaff_SS);
  if (local_102[0] != '\0') {
    puVar2 = (undefined4 *)*(undefined4 *)(local_106 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)((char *)s_iCurrDigits_1160_109b + 5,(undefined4 *)puVar2,
                       (int)((ulong)puVar2 >> 0x10),local_102);
  }
  if (param_2 == 1) {
    puVar2 = (undefined4 *)*(undefined4 *)(local_106 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)((char *)s_iCurrDigits_1160_109b + 5,(undefined4 *)puVar2,
                       (int)((ulong)puVar2 >> 0x10),0x1d99,(char *)s_iCurrDigits_1160_109b + 5);
  }
  local_102[0] = '\0';
  FUN_10a0_1a3d(&stack0xfffe,0x67,DAT_1160_0492,*(undefined2 *)(iVar3 + 0x214),
                *(undefined2 *)(iVar3 + 0x216),0xff,local_102,unaff_SS);
  FUN_10a0_1a3d(&stack0xfffe,100,DAT_1160_0498,*(undefined2 *)(iVar3 + 0x21c),
                *(undefined2 *)(iVar3 + 0x21e),0xff,local_102,unaff_SS);
  if (local_102[0] != '\0') {
    puVar2 = (undefined4 *)*(undefined4 *)(local_106 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)((char *)s_iCurrDigits_1160_109b + 5,(undefined4 *)puVar2,
                       (int)((ulong)puVar2 >> 0x10),local_102);
  }
  local_102[0] = '\0';
  FUN_10a0_1a3d(&stack0xfffe,0x67,DAT_1160_0492,*(undefined2 *)(iVar3 + 0x218),
                *(undefined2 *)(iVar3 + 0x21a),0xff,local_102,unaff_SS);
  FUN_10a0_1a3d(&stack0xfffe,100,DAT_1160_0498,*(undefined2 *)(iVar3 + 0x220),
                *(undefined2 *)(iVar3 + 0x222),0xff,local_102,unaff_SS);
  if (local_102[0] != '\0') {
    puVar2 = (undefined4 *)*(undefined4 *)(local_106 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)((char *)s_iCurrDigits_1160_109b + 5,(undefined4 *)puVar2,
                       (int)((ulong)puVar2 >> 0x10),local_102);
  }
  local_102[0] = '\0';
  FUN_10a0_1a3d(&stack0xfffe,0x67,DAT_1160_0492,*(undefined2 *)(iVar3 + 0x224),
                *(undefined2 *)(iVar3 + 0x226),0xff,local_102,unaff_SS);
  FUN_10a0_1a3d(&stack0xfffe,100,DAT_1160_0498,*(undefined2 *)(iVar3 + 0x31c),
                *(undefined2 *)(iVar3 + 0x31e),0xff,local_102,unaff_SS);
  if (local_102[0] != '\0') {
    puVar2 = (undefined4 *)*(undefined4 *)(local_106 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)((char *)s_iCurrDigits_1160_109b + 5,(undefined4 *)puVar2,
                       (int)((ulong)puVar2 >> 0x10),local_102);
  }
  local_102[0] = '\0';
  FUN_10a0_1a3d(&stack0xfffe,0x67,DAT_1160_0494,*(undefined2 *)(iVar3 + 0x228),
                *(undefined2 *)(iVar3 + 0x22a),0xff,local_102,unaff_SS);
  FUN_10a0_1a3d(&stack0xfffe,100,DAT_1160_0498,*(undefined2 *)(iVar3 + 0x22c),
                *(undefined2 *)(iVar3 + 0x22e),0xff,local_102,unaff_SS);
  if (local_102[0] != '\0') {
    puVar2 = (undefined4 *)*(undefined4 *)(local_106 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)((char *)s_iCurrDigits_1160_109b + 5,(undefined4 *)puVar2,
                       (int)((ulong)puVar2 >> 0x10),local_102);
  }
  if (*(char *)((int)*(undefined4 *)(iVar3 + 800) + 0x29) != '\0') {
    local_102[0] = '\0';
    FUN_10a0_1a3d(&stack0xfffe,0x67,DAT_1160_0494,*(undefined2 *)(iVar3 + 0x324),
                  *(undefined2 *)(iVar3 + 0x326),0xff,local_102,unaff_SS);
    FUN_10a0_1a3d(&stack0xfffe,100,DAT_1160_0498,*(undefined2 *)(iVar3 + 0x328),
                  *(undefined2 *)(iVar3 + 0x32a),0xff,local_102,unaff_SS);
    if (local_102[0] != '\0') {
      puVar2 = (undefined4 *)*(undefined4 *)(local_106 + 0xec);
      puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
      (*(code *)*puVar1)((char *)s_iCurrDigits_1160_109b + 5,(undefined4 *)puVar2,
                         (int)((ulong)puVar2 >> 0x10),local_102);
    }
  }
  if (2 < DAT_1160_1e06) {
    local_102[0] = '\0';
    FUN_10a0_1a3d(&stack0xfffe,0x67,DAT_1160_0492,*(undefined2 *)(iVar3 + 0x230),
                  *(undefined2 *)(iVar3 + 0x232),0xff,local_102,unaff_SS);
    if (local_102[0] != '\0') {
      puVar2 = (undefined4 *)*(undefined4 *)(local_106 + 0xec);
      puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
      (*(code *)*puVar1)((char *)s_iCurrDigits_1160_109b + 5,(undefined4 *)puVar2,
                         (int)((ulong)puVar2 >> 0x10),local_102);
    }
    local_102[0] = '\0';
    FUN_10a0_1a3d(&stack0xfffe,0x67,DAT_1160_0494,*(undefined2 *)(iVar3 + 0x234),
                  *(undefined2 *)(iVar3 + 0x236),0xff,local_102,unaff_SS);
    FUN_10a0_1a3d(&stack0xfffe,100,DAT_1160_0498,*(undefined2 *)(iVar3 + 0x23c),
                  *(undefined2 *)(iVar3 + 0x23e),0xff,local_102,unaff_SS);
    if (local_102[0] != '\0') {
      puVar2 = (undefined4 *)*(undefined4 *)(local_106 + 0xec);
      puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
      (*(code *)*puVar1)((char *)s_iCurrDigits_1160_109b + 5,(undefined4 *)puVar2,
                         (int)((ulong)puVar2 >> 0x10),local_102);
    }
    local_102[0] = '\0';
    FUN_10a0_1a3d(&stack0xfffe,0x67,DAT_1160_0494,*(undefined2 *)(iVar3 + 0x238),
                  *(undefined2 *)(iVar3 + 0x23a),0xff,local_102,unaff_SS);
    FUN_10a0_1a3d(&stack0xfffe,100,DAT_1160_0498,*(undefined2 *)(iVar3 + 0x240),
                  *(undefined2 *)(iVar3 + 0x242),0xff,local_102,unaff_SS);
    if (local_102[0] != '\0') {
      puVar2 = (undefined4 *)*(undefined4 *)(local_106 + 0xec);
      puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
      (*(code *)*puVar1)((char *)s_iCurrDigits_1160_109b + 5,(undefined4 *)puVar2,
                         (int)((ulong)puVar2 >> 0x10),local_102);
    }
  }
  if (param_2 == 1) {
    puVar2 = (undefined4 *)*(undefined4 *)(local_106 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)((char *)s_iCurrDigits_1160_109b + 5,(undefined4 *)puVar2,
                       (int)((ulong)puVar2 >> 0x10),0x1d99,(char *)s_iCurrDigits_1160_109b + 5);
  }
  local_102[0] = '\0';
  FUN_10a0_1a3d(&stack0xfffe,100,DAT_1160_0498,*(undefined2 *)(iVar3 + 0x1bc),
                *(undefined2 *)(iVar3 + 0x1be),0xff,local_102,unaff_SS);
  if (2 < DAT_1160_1e06) {
    FUN_10a0_1a3d(&stack0xfffe,100,DAT_1160_049a,*(undefined2 *)(iVar3 + 0x1ec),
                  *(undefined2 *)(iVar3 + 0x1ee),0xff,local_102,unaff_SS);
  }
  if (local_102[0] != '\0') {
    puVar2 = (undefined4 *)*(undefined4 *)(local_106 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)((char *)s_iCurrDigits_1160_109b + 5,(undefined4 *)puVar2,
                       (int)((ulong)puVar2 >> 0x10),local_102);
  }
  local_102[0] = '\0';
  FUN_10a0_1a3d(&stack0xfffe,0x67,DAT_1160_0492,*(undefined2 *)(iVar3 + 0x1c4),
                *(undefined2 *)(iVar3 + 0x1c6),0xff,local_102,unaff_SS);
  FUN_10a0_1a3d(&stack0xfffe,100,DAT_1160_0498,*(undefined2 *)(iVar3 + 0x1d0),
                *(undefined2 *)(iVar3 + 0x1d2),0xff,local_102,unaff_SS);
  if (2 < DAT_1160_1e06) {
    FUN_10a0_1a3d(&stack0xfffe,100,DAT_1160_049a,*(undefined2 *)(iVar3 + 500),
                  *(undefined2 *)(iVar3 + 0x1f6),0xff,local_102,unaff_SS);
  }
  if (local_102[0] != '\0') {
    puVar2 = (undefined4 *)*(undefined4 *)(local_106 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)((char *)s_iCurrDigits_1160_109b + 5,(undefined4 *)puVar2,
                       (int)((ulong)puVar2 >> 0x10),local_102);
  }
  local_102[0] = '\0';
  FUN_10a0_1a3d(&stack0xfffe,0x67,DAT_1160_0492,*(undefined2 *)(iVar3 + 0x1c8),
                *(undefined2 *)(iVar3 + 0x1ca),0xff,local_102,unaff_SS);
  FUN_10a0_1a3d(&stack0xfffe,100,DAT_1160_0498,*(undefined2 *)(iVar3 + 0x1d4),
                *(undefined2 *)(iVar3 + 0x1d6),0xff,local_102,unaff_SS);
  if (2 < DAT_1160_1e06) {
    FUN_10a0_1a3d(&stack0xfffe,100,DAT_1160_049a,*(undefined2 *)(iVar3 + 0x1f8),
                  *(undefined2 *)(iVar3 + 0x1fa),0xff,local_102,unaff_SS);
  }
  if (local_102[0] != '\0') {
    puVar2 = (undefined4 *)*(undefined4 *)(local_106 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)((char *)s_iCurrDigits_1160_109b + 5,(undefined4 *)puVar2,
                       (int)((ulong)puVar2 >> 0x10),local_102);
  }
  local_102[0] = '\0';
  FUN_10a0_1a3d(&stack0xfffe,0x67,DAT_1160_0492,*(undefined2 *)(iVar3 + 0x1cc),
                *(undefined2 *)(iVar3 + 0x1ce),0xff,local_102,unaff_SS);
  FUN_10a0_1a3d(&stack0xfffe,100,DAT_1160_0498,*(undefined2 *)(iVar3 + 0x1d8),
                *(undefined2 *)(iVar3 + 0x1da),0xff,local_102,unaff_SS);
  if (2 < DAT_1160_1e06) {
    FUN_10a0_1a3d(&stack0xfffe,100,DAT_1160_049a,*(undefined2 *)(iVar3 + 0x1fc),
                  *(undefined2 *)(iVar3 + 0x1fe),0xff,local_102,unaff_SS);
  }
  if (local_102[0] != '\0') {
    puVar2 = (undefined4 *)*(undefined4 *)(local_106 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)((char *)s_iCurrDigits_1160_109b + 5,(undefined4 *)puVar2,
                       (int)((ulong)puVar2 >> 0x10),local_102);
  }
  local_102[0] = '\0';
  FUN_10a0_1a3d(&stack0xfffe,0x67,DAT_1160_0494,*(undefined2 *)(iVar3 + 0x1c0),
                *(undefined2 *)(iVar3 + 0x1c2),0xff,local_102,unaff_SS);
  uVar5 = DAT_1160_1e06 == 2;
  if (2 < DAT_1160_1e06) {
    puVar8 = local_206;
    uVar9 = unaff_SS;
    FUN_1138_1d53((int)*(undefined4 *)(iVar3 + 0x1f0),
                  (int)((ulong)*(undefined4 *)(iVar3 + 0x1f0) >> 0x10));
    puVar6 = local_306;
    uVar7 = unaff_SS;
    FUN_1138_1d53((int)*(undefined4 *)(iVar3 + 0x1c0),
                  (int)((ulong)*(undefined4 *)(iVar3 + 0x1c0) >> 0x10));
    FUN_1158_18be(puVar6,uVar7,puVar8,uVar9);
    if (!(bool)uVar5) {
      puVar8 = local_406;
      uVar9 = unaff_SS;
      FUN_1158_17cd(local_102,unaff_SS);
      FUN_1158_184c(0x1d9a,0x1158);
      puVar6 = local_506;
      uVar7 = unaff_SS;
      FUN_1138_1d53((int)*(undefined4 *)(iVar3 + 0x1f0),
                    (int)((ulong)*(undefined4 *)(iVar3 + 0x1f0) >> 0x10));
      FUN_1158_184c(puVar6,uVar7);
      FUN_1158_17e7(0xff,local_102,unaff_SS,puVar8,uVar9);
    }
  }
  FUN_10a0_1a3d(&stack0xfffe,100,DAT_1160_0498,*(undefined2 *)(iVar3 + 0x1dc),
                *(undefined2 *)(iVar3 + 0x1de),0xff,local_102,unaff_SS);
  if (2 < DAT_1160_1e06) {
    FUN_10a0_1a3d(&stack0xfffe,100,DAT_1160_049a,*(undefined2 *)(iVar3 + 0x200),
                  *(undefined2 *)(iVar3 + 0x202),0xff,local_102,unaff_SS);
  }
  if (local_102[0] != '\0') {
    puVar2 = (undefined4 *)*(undefined4 *)(local_106 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)((char *)s_iCurrDigits_1160_109b + 5,(undefined4 *)puVar2,
                       (int)((ulong)puVar2 >> 0x10),local_102);
  }
  if (DAT_1160_1e06 == 4) {
    if (param_2 == 1) {
      puVar2 = (undefined4 *)*(undefined4 *)(local_106 + 0xec);
      puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
      (*(code *)*puVar1)((char *)s_iCurrDigits_1160_109b + 5,(undefined4 *)puVar2,
                         (int)((ulong)puVar2 >> 0x10),0x1d99,(char *)s_iCurrDigits_1160_109b + 5);
    }
    local_102[0] = '\0';
    FUN_10a0_1a3d(&stack0xfffe,0x67,DAT_1160_0492,*(undefined2 *)(iVar3 + 0x250),
                  *(undefined2 *)(iVar3 + 0x252),0xff,local_102,unaff_SS);
    if (local_102[0] != '\0') {
      puVar2 = (undefined4 *)*(undefined4 *)(local_106 + 0xec);
      puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
      (*(code *)*puVar1)((char *)s_iCurrDigits_1160_109b + 5,(undefined4 *)puVar2,
                         (int)((ulong)puVar2 >> 0x10),local_102);
    }
    local_102[0] = '\0';
    FUN_10a0_1a3d(&stack0xfffe,99,DAT_1160_0494,*(undefined2 *)(iVar3 + 0x254),
                  *(undefined2 *)(iVar3 + 0x256),0xff,local_102,unaff_SS);
    FUN_10a0_1a3d(&stack0xfffe,100,DAT_1160_0498,*(undefined2 *)(iVar3 + 0x2b4),
                  *(undefined2 *)(iVar3 + 0x2b6),0xff,local_102,unaff_SS);
    if (local_102[0] != '\0') {
      puVar2 = (undefined4 *)*(undefined4 *)(local_106 + 0xec);
      puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
      (*(code *)*puVar1)((char *)s_iCurrDigits_1160_109b + 5,(undefined4 *)puVar2,
                         (int)((ulong)puVar2 >> 0x10),local_102);
    }
    local_102[0] = '\0';
    FUN_10a0_1a3d(&stack0xfffe,100,DAT_1160_0494,*(undefined2 *)(iVar3 + 0x278),
                  *(undefined2 *)(iVar3 + 0x27a),0xff,local_102,unaff_SS);
    FUN_10a0_1a3d(&stack0xfffe,100,DAT_1160_0498,*(undefined2 *)(iVar3 + 0x2b0),
                  *(undefined2 *)(iVar3 + 0x2b2),0xff,local_102,unaff_SS);
    if (local_102[0] != '\0') {
      puVar2 = (undefined4 *)*(undefined4 *)(local_106 + 0xec);
      puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
      (*(code *)*puVar1)((char *)s_iCurrDigits_1160_109b + 5,(undefined4 *)puVar2,
                         (int)((ulong)puVar2 >> 0x10),local_102);
    }
    local_102[0] = '\0';
    FUN_10a0_1a3d(&stack0xfffe,100,DAT_1160_0494,*(undefined2 *)(iVar3 + 0x27c),
                  *(undefined2 *)(iVar3 + 0x27e),0xff,local_102,unaff_SS);
    FUN_10a0_1a3d(&stack0xfffe,100,DAT_1160_0498,*(undefined2 *)(iVar3 + 0x2ac),
                  *(undefined2 *)(iVar3 + 0x2ae),0xff,local_102,unaff_SS);
    if (local_102[0] != '\0') {
      puVar2 = (undefined4 *)*(undefined4 *)(local_106 + 0xec);
      puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
      (*(code *)*puVar1)((char *)s_iCurrDigits_1160_109b + 5,(undefined4 *)puVar2,
                         (int)((ulong)puVar2 >> 0x10),local_102);
    }
    local_102[0] = '\0';
    FUN_10a0_1a3d(&stack0xfffe,100,DAT_1160_0494,*(undefined2 *)(iVar3 + 0x280),
                  *(undefined2 *)(iVar3 + 0x282),0xff,local_102,unaff_SS);
    FUN_10a0_1a3d(&stack0xfffe,100,DAT_1160_0498,*(undefined2 *)(iVar3 + 0x2a8),
                  *(undefined2 *)(iVar3 + 0x2aa),0xff,local_102,unaff_SS);
    if (local_102[0] != '\0') {
      puVar2 = (undefined4 *)*(undefined4 *)(local_106 + 0xec);
      puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
      (*(code *)*puVar1)((char *)s_iCurrDigits_1160_109b + 5,(undefined4 *)puVar2,
                         (int)((ulong)puVar2 >> 0x10),local_102);
    }
    local_102[0] = '\0';
    FUN_10a0_1a3d(&stack0xfffe,100,DAT_1160_0494,*(undefined2 *)(iVar3 + 0x284),
                  *(undefined2 *)(iVar3 + 0x286),0xff,local_102,unaff_SS);
    FUN_10a0_1a3d(&stack0xfffe,100,DAT_1160_0498,*(undefined2 *)(iVar3 + 0x2a4),
                  *(undefined2 *)(iVar3 + 0x2a6),0xff,local_102,unaff_SS);
    if (local_102[0] != '\0') {
      puVar2 = (undefined4 *)*(undefined4 *)(local_106 + 0xec);
      puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
      (*(code *)*puVar1)((char *)s_iCurrDigits_1160_109b + 5,(undefined4 *)puVar2,
                         (int)((ulong)puVar2 >> 0x10),local_102);
    }
    local_102[0] = '\0';
    FUN_10a0_1a3d(&stack0xfffe,100,DAT_1160_0494,*(undefined2 *)(iVar3 + 0x288),
                  *(undefined2 *)(iVar3 + 0x28a),0xff,local_102,unaff_SS);
    FUN_10a0_1a3d(&stack0xfffe,100,DAT_1160_0498,*(undefined2 *)(iVar3 + 0x2a0),
                  *(undefined2 *)(iVar3 + 0x2a2),0xff,local_102,unaff_SS);
    if (local_102[0] != '\0') {
      puVar2 = (undefined4 *)*(undefined4 *)(local_106 + 0xec);
      puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
      (*(code *)*puVar1)((char *)s_iCurrDigits_1160_109b + 5,(undefined4 *)puVar2,
                         (int)((ulong)puVar2 >> 0x10),local_102);
    }
    local_102[0] = '\0';
    FUN_10a0_1a3d(&stack0xfffe,100,DAT_1160_0494,*(undefined2 *)(iVar3 + 0x28c),
                  *(undefined2 *)(iVar3 + 0x28e),0xff,local_102,unaff_SS);
    FUN_10a0_1a3d(&stack0xfffe,100,DAT_1160_0498,*(undefined2 *)(iVar3 + 0x29c),
                  *(undefined2 *)(iVar3 + 0x29e),0xff,local_102,unaff_SS);
    if (local_102[0] != '\0') {
      puVar2 = (undefined4 *)*(undefined4 *)(local_106 + 0xec);
      puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
      (*(code *)*puVar1)((char *)s_iCurrDigits_1160_109b + 5,(undefined4 *)puVar2,
                         (int)((ulong)puVar2 >> 0x10),local_102);
    }
    local_102[0] = '\0';
    FUN_10a0_1a3d(&stack0xfffe,100,DAT_1160_0494,*(undefined2 *)(iVar3 + 0x290),
                  *(undefined2 *)(iVar3 + 0x292),0xff,local_102,unaff_SS);
    FUN_10a0_1a3d(&stack0xfffe,100,DAT_1160_0498,*(undefined2 *)(iVar3 + 0x298),
                  *(undefined2 *)(iVar3 + 0x29a),0xff,local_102,unaff_SS);
    if (local_102[0] != '\0') {
      puVar2 = (undefined4 *)*(undefined4 *)(local_106 + 0xec);
      puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
      (*(code *)*puVar1)((char *)s_iCurrDigits_1160_109b + 5,(undefined4 *)puVar2,
                         (int)((ulong)puVar2 >> 0x10),local_102);
    }
    local_102[0] = '\0';
    FUN_10a0_1a3d(&stack0xfffe,100,DAT_1160_0494,*(undefined2 *)(iVar3 + 0x304),
                  *(undefined2 *)(iVar3 + 0x306),0xff,local_102,unaff_SS);
    FUN_10a0_1a3d(&stack0xfffe,100,DAT_1160_0498,*(undefined2 *)(iVar3 + 0x294),
                  *(undefined2 *)(iVar3 + 0x296),0xff,local_102,unaff_SS);
    if (local_102[0] != '\0') {
      puVar2 = (undefined4 *)*(undefined4 *)(local_106 + 0xec);
      puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
      (*(code *)*puVar1)((char *)s_iCurrDigits_1160_109b + 5,(undefined4 *)puVar2,
                         (int)((ulong)puVar2 >> 0x10),local_102);
    }
    local_102[0] = '\0';
    FUN_10a0_1a3d(&stack0xfffe,100,DAT_1160_0494,*(undefined2 *)(iVar3 + 0x308),
                  *(undefined2 *)(iVar3 + 0x30a),0xff,local_102,unaff_SS);
    FUN_10a0_1a3d(&stack0xfffe,100,DAT_1160_0498,*(undefined2 *)(iVar3 + 0x30c),
                  *(undefined2 *)(iVar3 + 0x30e),0xff,local_102,unaff_SS);
    if (local_102[0] != '\0') {
      puVar2 = (undefined4 *)*(undefined4 *)(local_106 + 0xec);
      puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
      (*(code *)*puVar1)((char *)s_iCurrDigits_1160_109b + 5,(undefined4 *)puVar2,
                         (int)((ulong)puVar2 >> 0x10),local_102);
    }
    local_102[0] = '\0';
    FUN_10a0_1a3d(&stack0xfffe,100,DAT_1160_0494,*(undefined2 *)(iVar3 + 0x310),
                  *(undefined2 *)(iVar3 + 0x312),0xff,local_102,unaff_SS);
    FUN_10a0_1a3d(&stack0xfffe,100,DAT_1160_0498,*(undefined2 *)(iVar3 + 0x314),
                  *(undefined2 *)(iVar3 + 0x316),0xff,local_102,unaff_SS);
    if (local_102[0] != '\0') {
      puVar2 = (undefined4 *)*(undefined4 *)(local_106 + 0xec);
      puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
      (*(code *)*puVar1)((char *)s_iCurrDigits_1160_109b + 5,(undefined4 *)puVar2,
                         (int)((ulong)puVar2 >> 0x10),local_102);
    }
    local_102[0] = '\0';
    FUN_10a0_1a3d(&stack0xfffe,100,DAT_1160_0498,*(undefined2 *)(iVar3 + 0x318),
                  *(undefined2 *)(iVar3 + 0x31a),0xff,local_102,unaff_SS);
    if (local_102[0] != '\0') {
      puVar2 = (undefined4 *)*(undefined4 *)(local_106 + 0xec);
      puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
      (*(code *)*puVar1)((char *)s_iCurrDigits_1160_109b + 5,(undefined4 *)puVar2,
                         (int)((ulong)puVar2 >> 0x10),local_102);
    }
  }
  if (1 < DAT_1160_1e06) {
    if (param_2 == 1) {
      puVar2 = (undefined4 *)*(undefined4 *)(local_106 + 0xec);
      puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
      (*(code *)*puVar1)((char *)s_iCurrDigits_1160_109b + 5,(undefined4 *)puVar2,
                         (int)((ulong)puVar2 >> 0x10),0x1d99,(char *)s_iCurrDigits_1160_109b + 5);
    }
    local_102[0] = '\0';
    FUN_10a0_1a3d(&stack0xfffe,100,DAT_1160_0498,*(undefined2 *)(iVar3 + 0x2e4),
                  *(undefined2 *)(iVar3 + 0x2e6),0xff,local_102,unaff_SS);
    if (2 < DAT_1160_1e06) {
      FUN_10a0_1a3d(&stack0xfffe,100,DAT_1160_049a,*(undefined2 *)(iVar3 + 0x2dc),
                    *(undefined2 *)(iVar3 + 0x2de),0xff,local_102,unaff_SS);
    }
    if (local_102[0] != '\0') {
      puVar2 = (undefined4 *)*(undefined4 *)(local_106 + 0xec);
      puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
      (*(code *)*puVar1)((char *)s_iCurrDigits_1160_109b + 5,(undefined4 *)puVar2,
                         (int)((ulong)puVar2 >> 0x10),local_102);
    }
    local_102[0] = '\0';
    FUN_10a0_1a3d(&stack0xfffe,0x67,DAT_1160_0492,*(undefined2 *)(iVar3 + 0x2e8),
                  *(undefined2 *)(iVar3 + 0x2ea),0xff,local_102,unaff_SS);
    FUN_10a0_1a3d(&stack0xfffe,100,DAT_1160_0498,*(undefined2 *)(iVar3 + 0x2ec),
                  *(undefined2 *)(iVar3 + 0x2ee),0xff,local_102,unaff_SS);
    if (2 < DAT_1160_1e06) {
      FUN_10a0_1a3d(&stack0xfffe,100,DAT_1160_049a,*(undefined2 *)(iVar3 + 0x2f0),
                    *(undefined2 *)(iVar3 + 0x2f2),0xff,local_102,unaff_SS);
    }
    if (local_102[0] != '\0') {
      puVar2 = (undefined4 *)*(undefined4 *)(local_106 + 0xec);
      puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
      (*(code *)*puVar1)((char *)s_iCurrDigits_1160_109b + 5,(undefined4 *)puVar2,
                         (int)((ulong)puVar2 >> 0x10),local_102);
    }
  }
  return;
}



/* ---- FUN_10a0_2c7e @ 10a0:2c7e  (21 octets) ---- */

undefined4 __stdcall16far FUN_10a0_2c7e(undefined4 param_1)

{
  undefined2 uVar1;
  
  uVar1 = (undefined2)((ulong)param_1 >> 0x10);
  return CONCAT22(uVar1,(uint)*(byte *)((int)param_1 + 1) + (int)param_1 + 2);
}



/* ---- FUN_10a0_2c93 @ 10a0:2c93  (44 octets) ---- */

byte * __stdcall16far FUN_10a0_2c93(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  byte *pbVar3;
  undefined2 uVar4;
  
  uVar4 = (undefined2)((ulong)param_2 >> 0x10);
  uVar1 = *(undefined4 *)((uint)*(byte *)((int)param_2 + 1) + (int)param_2 + 0xb);
  uVar4 = (undefined2)((ulong)uVar1 >> 0x10);
  iVar2 = (int)uVar1;
  pbVar3 = (byte *)((uint)*(byte *)(iVar2 + 1) + iVar2 + 0xf);
  if (param_1 != 0) {
    do {
      pbVar3 = pbVar3 + *pbVar3 + 1;
      param_1 = param_1 + -1;
    } while (param_1 != 0);
  }
  return (byte *)CONCAT22(uVar4,pbVar3);
}



/* ---- FUN_10a0_2cbf @ 10a0:2cbf  (84 octets) ---- */

void __stdcall16far FUN_10a0_2cbf(byte *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  byte *pbVar4;
  byte *pbVar5;
  byte *pbVar6;
  undefined2 uVar7;
  bool bVar8;
  
  uVar7 = (undefined2)((ulong)param_2 >> 0x10);
  uVar1 = *(undefined4 *)((uint)*(byte *)((int)param_2 + 1) + (int)param_2 + 0xb);
  uVar7 = (undefined2)((ulong)uVar1 >> 0x10);
  iVar3 = (int)uVar1;
  pbVar4 = (byte *)((uint)*(byte *)(iVar3 + 1) + iVar3 + 0xf);
  iVar3 = *(int *)((uint)*(byte *)(iVar3 + 1) + iVar3 + 7) + 1;
  do {
    if (*pbVar4 == *param_1) {
      uVar2 = (uint)*param_1;
      pbVar5 = pbVar4;
      pbVar6 = (byte *)param_1;
      do {
        pbVar5 = pbVar5 + 1;
        pbVar6 = pbVar6 + 1;
        bVar8 = ((*pbVar5 ^ *pbVar6) & 0xdf) == 0;
        if (!bVar8) break;
        uVar2 = uVar2 - 1;
        bVar8 = uVar2 == 0;
      } while (!bVar8);
      if (bVar8) {
        return;
      }
    }
    pbVar4 = pbVar4 + *pbVar4 + 1;
    iVar3 = iVar3 + -1;
    if (iVar3 == 0) {
      return;
    }
  } while( true );
}



/* ---- FUN_10a0_2d13 @ 10a0:2d13  (110 octets) ---- */

undefined4 __stdcall16far FUN_10a0_2d13(uint *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  byte *pbVar7;
  uint *puVar8;
  int iVar9;
  bool bVar10;
  
  iVar9 = (int)((ulong)param_2 >> 0x10);
  iVar6 = (int)param_2;
  do {
    iVar6 = (uint)*(byte *)(iVar6 + 1) + iVar6;
    iVar4 = *(int *)((uint)*(byte *)(iVar6 + 0xc) + iVar6 + 2 + 0xb);
    if (iVar4 != 0) {
      iVar2 = (uint)*(byte *)(iVar6 + 0xc) + iVar6 + 2 + 0xd;
      do {
        uVar5 = *(uint *)(iVar2 + 0x18) & 0xdfff;
        if (uVar5 == (*param_1 & 0xdfff)) {
          pbVar7 = (byte *)(iVar2 + 0x18);
          puVar8 = (uint *)param_1;
          uVar3 = *param_1 & 0xff;
          do {
            pbVar7 = pbVar7 + 1;
            puVar8 = (uint *)((int)puVar8 + 1);
            uVar5 = CONCAT11(*pbVar7 ^ *(byte *)puVar8,(char)uVar5) & 0xdfff;
            bVar10 = ((*pbVar7 ^ *(byte *)puVar8) & 0xdf) == 0;
            if (!bVar10) break;
            uVar3 = uVar3 - 1;
            bVar10 = uVar3 == 0;
          } while (!bVar10);
          if (bVar10) goto LAB_10a0_2d7c;
        }
        iVar2 = (uVar5 & 0xff) + iVar2 + 0x19;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
    puVar1 = (undefined4 *)(iVar6 + 6);
    iVar9 = (int)((ulong)*puVar1 >> 0x10);
    iVar6 = (int)*puVar1;
  } while (iVar9 != 0 || iVar6 != 0);
  iVar2 = 0;
  iVar9 = 0;
LAB_10a0_2d7c:
  return CONCAT22(iVar9,iVar2);
}



/* ---- FUN_10a0_2d81 @ 10a0:2d81  (102 octets) ---- */

void __stdcall16far FUN_10a0_2d81(undefined2 *param_1,undefined4 param_2)

{
  undefined2 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined2 *puVar7;
  undefined2 *puVar8;
  undefined2 uVar9;
  int iVar10;
  
  iVar10 = (int)((ulong)param_2 >> 0x10);
  iVar6 = (int)param_2;
  uVar9 = (undefined2)((ulong)param_1 >> 0x10);
  puVar7 = (undefined2 *)param_1;
  puVar8 = puVar7;
  for (iVar4 = *(int *)((uint)*(byte *)(iVar6 + 1) + iVar6 + 10) << 1; iVar4 != 0;
      iVar4 = iVar4 + -1) {
    puVar1 = puVar8;
    puVar8 = puVar8 + 1;
    *puVar1 = 0;
  }
  do {
    iVar4 = (uint)*(byte *)(iVar6 + 1) + iVar6;
    iVar2 = *(int *)(iVar4 + 8);
    iVar6 = *(int *)(iVar4 + 6);
    iVar5 = *(int *)((uint)*(byte *)(iVar4 + 0xc) + iVar4 + 2 + 0xb);
    if (iVar5 != 0) {
      iVar4 = (uint)*(byte *)(iVar4 + 0xc) + iVar4 + 2 + 0xd;
      do {
        iVar3 = *(int *)(iVar4 + 0x16);
        if (puVar7[iVar3 * 2] == 0 && puVar7[iVar3 * 2 + 1] == 0) {
          puVar7[iVar3 * 2] = iVar4;
          puVar7[iVar3 * 2 + 1] = iVar10;
        }
        iVar4 = (uint)*(byte *)(iVar4 + 0x18) + iVar4 + 0x19;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
    iVar10 = iVar2;
  } while (iVar2 != 0 || iVar6 != 0);
  return;
}



/* ---- FUN_10a0_2de7 @ 10a0:2de7  (75 octets) ---- */

int __stdcall16far FUN_10a0_2de7(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  undefined2 *puVar2;
  int iVar3;
  int iVar4;
  undefined2 uVar5;
  
  uVar5 = (undefined2)((ulong)param_1 >> 0x10);
  iVar4 = (int)param_1;
  iVar3 = *(int *)(iVar4 + 0xc);
  iVar1 = *(int *)(iVar4 + 0xe);
  if (iVar1 != 0) {
    if (iVar1 == -1) {
      iVar3 = CONCAT11((char)((uint)iVar3 >> 8),*(undefined *)(iVar3 + (int)(undefined4 *)param_2));
    }
    else if (iVar1 == -2) {
      puVar2 = (undefined2 *)(iVar3 + (int)*param_2);
      iVar3 = (*(code *)*puVar2)();
    }
    else {
      iVar3 = (*(code *)*(undefined2 *)(iVar4 + 0xc))();
    }
  }
  return iVar3;
}



/* ---- FUN_10a0_2e32 @ 10a0:2e32  (144 octets) ---- */

void __stdcall16far FUN_10a0_2e32(undefined4 param_1,undefined4 *param_2)

{
  undefined2 *puVar1;
  int iVar2;
  undefined2 uVar3;
  
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  iVar2 = (int)param_1;
  if (*(int *)(iVar2 + 6) != -1) {
    if (*(int *)(iVar2 + 6) == -2) {
      puVar1 = (undefined2 *)(*(int *)(iVar2 + 4) + (int)*param_2);
      (*(code *)*puVar1)();
    }
    else {
      (*(code *)*(undefined2 *)(iVar2 + 4))();
    }
  }
  return;
}



/* ---- FUN_10a0_2ec2 @ 10a0:2ec2  (128 octets) ---- */

void __stdcall16far
FUN_10a0_2ec2(undefined2 param_1,undefined2 param_2,undefined4 *param_3,undefined4 *param_4)

{
  int iVar1;
  undefined2 *puVar2;
  char *pcVar3;
  byte bVar4;
  undefined4 *puVar5;
  undefined2 uVar6;
  
  pcVar3 = (char *)*param_3;
  uVar6 = (undefined2)((ulong)pcVar3 >> 0x10);
  bVar4 = 4;
  if (*pcVar3 != '\a') {
    bVar4 = ((char *)pcVar3)[(byte)((char *)pcVar3)[1] + 2];
  }
  uVar6 = (undefined2)((ulong)param_3 >> 0x10);
  puVar5 = (undefined4 *)param_3;
  if (*(int *)((int)puVar5 + 10) == -1) {
    iVar1 = *(int *)(puVar5 + 2);
    uVar6 = (undefined2)((ulong)param_4 >> 0x10);
    puVar5 = (undefined4 *)param_4;
    *(undefined *)(iVar1 + (int)puVar5) = (char)param_1;
    if ((1 < bVar4) && (*(undefined2 *)(iVar1 + (int)puVar5) = param_1, 3 < bVar4)) {
      *(undefined2 *)((int)puVar5 + iVar1 + 2) = param_2;
    }
  }
  else if (*(int *)((int)puVar5 + 10) == -2) {
    puVar2 = (undefined2 *)(*(int *)(puVar5 + 2) + (int)*param_4);
    (*(code *)*puVar2)();
  }
  else {
    (**(code **)(puVar5 + 2))();
  }
  return;
}



/* ---- FUN_10a0_2f42 @ 10a0:2f42  (90 octets) ---- */

void __stdcall16far FUN_10a0_2f42(undefined4 param_1,undefined4 *param_2,byte *param_4)

{
  byte bVar1;
  undefined2 *puVar2;
  uint uVar3;
  byte *pbVar4;
  int iVar5;
  byte *pbVar6;
  undefined2 uVar7;
  undefined2 uVar8;
  
  uVar7 = (undefined2)((ulong)param_1 >> 0x10);
  iVar5 = (int)param_1;
  if (*(int *)(iVar5 + 6) == -1) {
    uVar8 = (undefined2)((ulong)param_2 >> 0x10);
    pbVar4 = (byte *)((int)(undefined4 *)param_2 + *(int *)(iVar5 + 4));
    pbVar6 = (byte *)param_4;
    bVar1 = *pbVar4;
    *param_4 = bVar1;
    uVar3 = (uint)bVar1;
    while( true ) {
      pbVar6 = pbVar6 + 1;
      pbVar4 = pbVar4 + 1;
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      *pbVar6 = *pbVar4;
    }
  }
  else if (*(int *)(iVar5 + 6) == -2) {
    puVar2 = (undefined2 *)(*(int *)(iVar5 + 4) + (int)*param_2);
    (*(code *)*puVar2)();
  }
  else {
    (*(code *)*(undefined2 *)(iVar5 + 4))();
  }
  return;
}



/* ---- FUN_10a0_2f9c @ 10a0:2f9c  (111 octets) ---- */

void __stdcall16far FUN_10a0_2f9c(byte *param_1,undefined4 *param_3,undefined4 *param_4)

{
  byte bVar1;
  undefined2 *puVar2;
  byte bVar3;
  uint uVar4;
  byte *pbVar5;
  undefined4 *puVar6;
  int iVar7;
  byte *pbVar8;
  undefined2 uVar9;
  undefined2 uVar10;
  
  uVar9 = (undefined2)((ulong)param_3 >> 0x10);
  puVar6 = (undefined4 *)param_3;
  if (*(int *)((int)puVar6 + 10) == -1) {
    uVar10 = (undefined2)((ulong)*param_3 >> 0x10);
    iVar7 = (int)*param_3;
    bVar1 = *(byte *)((uint)*(byte *)(iVar7 + 1) + iVar7 + 2);
    pbVar5 = (byte *)param_1;
    uVar10 = (undefined2)((ulong)param_4 >> 0x10);
    pbVar8 = (byte *)((int)(undefined4 *)param_4 + *(int *)(puVar6 + 2));
    bVar3 = *param_1;
    if (bVar1 <= *param_1) {
      bVar3 = bVar1;
    }
    *pbVar8 = bVar3;
    uVar4 = (uint)bVar3;
    while( true ) {
      pbVar8 = pbVar8 + 1;
      pbVar5 = pbVar5 + 1;
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      *pbVar8 = *pbVar5;
    }
  }
  else if (*(int *)((int)puVar6 + 10) == -2) {
    puVar2 = (undefined2 *)(*(int *)(puVar6 + 2) + (int)*param_4);
    (*(code *)*puVar2)();
  }
  else {
    (**(code **)(puVar6 + 2))();
  }
  return;
}



/* ---- FUN_10a0_300b @ 10a0:300b  (92 octets) ---- */

void __stdcall16far FUN_10a0_300b(undefined4 *param_1,undefined4 *param_2)

{
  undefined2 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined2 uVar4;
  
  uVar4 = (undefined2)((ulong)param_1 >> 0x10);
  puVar2 = (undefined4 *)param_1;
  if (*(int *)((int)puVar2 + 6) == -1) {
    uVar4 = (undefined2)((ulong)*param_1 >> 0x10);
    iVar3 = (int)*param_1;
    (*(code *)*(undefined2 *)((uint)*(byte *)((uint)*(byte *)(iVar3 + 1) + iVar3 + 2) * 2 + 0x3046))
              ();
  }
  else if (*(int *)((int)puVar2 + 6) == -2) {
    puVar1 = (undefined2 *)(*(int *)(puVar2 + 1) + (int)*param_2);
    (*(code *)*puVar1)();
  }
  else {
    (**(code **)(puVar2 + 1))();
  }
  return;
}



/* ---- FUN_10a0_3083 @ 10a0:3083  (116 octets) ---- */

/* WARNING: Unable to track spacebase fully for stack */

void __stdcall16far FUN_10a0_3083(void)

{
  code *pcVar1;
  undefined2 *puVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined2 uVar7;
  undefined2 unaff_SS;
  undefined4 *param_2;
  undefined4 *param_3;
  undefined2 param_4;
  int aiStack_6 [2];
  
  uVar7 = (undefined2)((ulong)*param_2 >> 0x10);
  iVar5 = (int)*param_2;
  iVar5 = (uint)*(byte *)((uint)*(byte *)(iVar5 + 1) + iVar5 + 2) * 2;
  uVar7 = (undefined2)((ulong)param_2 >> 0x10);
  puVar6 = (undefined4 *)param_2;
  if (*(int *)((int)puVar6 + 10) == -1) {
    aiStack_6[1] = 0x3117;
    (*(code *)*(undefined2 *)(iVar5 + 0x30ed))();
  }
  else {
    if (*(int *)(puVar6 + 4) != -0x8000) {
      aiStack_6[1] = *(int *)(puVar6 + 4);
    }
    iVar3 = -*(int *)(iVar5 + 0x30e5);
    *(undefined2 *)((int)aiStack_6 + iVar3) = unaff_SS;
    pcVar1 = (code *)*(undefined2 *)(iVar5 + 0x30ed);
    puVar4 = (undefined *)((int)aiStack_6 + iVar3);
    *(undefined2 *)((int)aiStack_6 + iVar3) = 0x30bf;
    (*pcVar1)();
    *(undefined2 *)(puVar4 + -2) = param_4;
    *(undefined4 **)(puVar4 + -4) = param_3;
    if (*(int *)((int)puVar6 + 10) == -2) {
      puVar2 = (undefined2 *)(*(int *)(puVar6 + 2) + (int)*_param_3);
      uVar7 = puVar2[1];
      pcVar1 = (code *)*puVar2;
      *(char **)(puVar4 + -6) = (char *)s_iCurrDigits_1160_109b + 5;
      *(undefined2 *)(puVar4 + -8) = 0x30e3;
      (*pcVar1)();
    }
    else {
      uVar7 = *(undefined2 *)((long)(puVar6 + 2) + 2);
      pcVar1 = *(code **)(puVar6 + 2);
      *(char **)(puVar4 + -6) = (char *)s_iCurrDigits_1160_109b + 5;
      *(undefined2 *)(puVar4 + -8) = 0x30d4;
      (*pcVar1)();
    }
  }
  return;
}



/* ---- FUN_10a0_311b @ 10a0:311b  (96 octets) ---- */

void __stdcall16far FUN_10a0_311b(undefined4 param_1,undefined4 *param_2,undefined2 *param_4)

{
  undefined2 *puVar1;
  undefined2 in_CX;
  int in_BX;
  int iVar2;
  undefined4 *puVar3;
  undefined2 *puVar4;
  undefined2 uVar5;
  undefined4 uVar6;
  
  uVar5 = (undefined2)((ulong)param_1 >> 0x10);
  iVar2 = (int)param_1;
  if (*(int *)(iVar2 + 6) == -1) {
    iVar2 = *(int *)(iVar2 + 4);
    uVar5 = (undefined2)((ulong)param_2 >> 0x10);
    puVar3 = (undefined4 *)param_2;
    uVar6 = CONCAT22(*(undefined2 *)((int)puVar3 + iVar2 + 2),*(undefined2 *)(iVar2 + (int)puVar3));
    in_CX = *(undefined2 *)((int)puVar3 + iVar2 + 4);
    in_BX = *(int *)((int)puVar3 + iVar2 + 6);
  }
  else if (*(int *)(iVar2 + 6) == -2) {
    in_BX = *(int *)(iVar2 + 4);
    puVar1 = (undefined2 *)(in_BX + (int)*param_2);
    uVar6 = (*(code *)*puVar1)();
  }
  else {
    uVar6 = (*(code *)*(undefined2 *)(iVar2 + 4))();
  }
  uVar5 = (undefined2)((ulong)param_4 >> 0x10);
  puVar4 = (undefined2 *)param_4;
  *param_4 = (int)uVar6;
  puVar4[1] = (int)((ulong)uVar6 >> 0x10);
  puVar4[2] = in_CX;
  puVar4[3] = in_BX;
  return;
}



/* ---- FUN_10a0_317b @ 10a0:317b  (103 octets) ---- */

void __stdcall16far FUN_10a0_317b(undefined2 *param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined2 *puVar1;
  int iVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  
  uVar5 = (undefined2)((ulong)param_2 >> 0x10);
  iVar2 = (int)param_2;
  puVar3 = (undefined2 *)param_1;
  uVar6 = (undefined2)((ulong)param_1 >> 0x10);
  if (*(int *)(iVar2 + 10) == -1) {
    uVar7 = (undefined2)((ulong)param_3 >> 0x10);
    puVar4 = (undefined2 *)((int)(undefined4 *)param_3 + *(int *)(iVar2 + 8));
    *puVar4 = *param_1;
    puVar4[1] = puVar3[1];
    puVar4[2] = puVar3[2];
    puVar4[3] = puVar3[3];
  }
  else if (*(int *)(iVar2 + 10) == -2) {
    puVar1 = (undefined2 *)(*(int *)(iVar2 + 8) + (int)*param_3);
    (*(code *)*puVar1)();
  }
  else {
    (*(code *)*(undefined2 *)(iVar2 + 8))();
  }
  return;
}




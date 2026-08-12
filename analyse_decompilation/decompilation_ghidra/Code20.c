/* Simstrat (FR).EXE - segment Code20 - 45 fonctions
   Decompile par Ghidra 11.2.1 (x86 16 bits, chargeur NE). */

/* ---- FUN_1098_0942 @ 1098:0942  (147 octets) ---- */

void __cdecl16far FUN_1098_0942(void)

{
  ulong uVar1;
  undefined extraout_AH;
  undefined2 unaff_CS;
  undefined *puStack_128;
  undefined4 uStack_126;
  char *pcStack_122;
  undefined2 uStack_120;
  undefined *puStack_11e;
  undefined2 uStack_11c;
  undefined2 uStack_11a;
  undefined2 uStack_118;
  char *pcStack_116;
  undefined2 uStack_114;
  undefined2 uStack_112;
  undefined2 uStack_110;
  undefined4 local_10a;
  undefined2 local_6;
  
  _local_6 = CONCAT22(unaff_CS,0x94d);
  FUN_1158_0444();
  uStack_110 = DAT_1160_2c2a._2_2_;
  uStack_112 = (undefined2)DAT_1160_2c2a;
  uStack_114 = CONCAT11(extraout_AH,1);
  pcStack_116 = (char *)s_sDecimal_1160_1092 + 6;
  uStack_118 = 0x22;
  uStack_11a = 0x1158;
  uStack_11c = 0x969;
  uStack_126 = FUN_1140_2553();
  uVar1 = (ulong)uStack_126 >> 0x10;
  local_6 = (undefined2)uStack_126;
  uStack_11a = 0x1140;
  uStack_11c = 0x93c;
  uStack_120 = DAT_1160_1858;
  pcStack_122 = (char *)0x0;
  puStack_128 = (undefined *)0x1140;
  DAT_1160_1858 = (undefined **)&uStack_120;
  puStack_11e = &stack0xfffe;
  local_10a = uStack_126;
  FUN_1098_0e6b();
  pcStack_122 = (char *)s_sDecimal_1160_1092 + 6;
  uStack_126._2_2_ = 0x932;
  puStack_128 = (undefined *)DAT_1160_1858;
  DAT_1160_1858 = &puStack_128;
  uStack_126._0_2_ = &stack0xfffe;
  FUN_1098_2bbf(local_10a);
  FUN_1140_5d45(local_10a);
  DAT_1160_1858 = (undefined **)uStack_126._2_2_;
  puStack_11e = (undefined *)0x1140;
  uStack_120 = 0x9e7;
  uStack_126._2_2_ = local_6;
  uStack_126._0_2_ = (undefined *)0x1140;
  puStack_128 = (undefined *)0x9e6;
  pcStack_122 = (char *)(int)uVar1;
  FUN_1140_5f1d();
  return;
}



/* ---- FUN_1098_09e9 @ 1098:09e9  (48 octets) ---- */

void __stdcall16far FUN_1098_09e9(undefined4 param_1)

{
  undefined2 uVar1;
  
  FUN_1158_0444();
  DAT_1160_048e = 1;
  FUN_1010_38c2(0);
  uVar1 = (undefined2)((ulong)param_1 >> 0x10);
  *(undefined2 *)((int)param_1 + 0x104) = 3;
  FUN_1140_5556((int)param_1,uVar1);
  FUN_1150_28c3(0x1140);
  return;
}



/* ---- TFormSCDD_Decisions_FormCreate @ 1098:0a3b  (1 octets) ---- */

/* WARNING: Removing unreachable block (ram,0x10980cad) */

void TFormSCDD_Decisions_FormCreate(undefined2 param_1,undefined4 param_2)

{
  undefined2 *puVar1;
  undefined4 *puVar2;
  char cVar3;
  undefined extraout_AH;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  undefined2 uVar10;
  char *pcVar11;
  undefined2 uVar12;
  undefined2 unaff_SS;
  bool bVar13;
  bool bVar14;
  undefined4 uVar15;
  long lVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined2 uVar19;
  undefined auStack_306 [250];
  undefined auStack_20c [6];
  undefined auStack_206 [250];
  undefined4 uStack_10c;
  int iStack_108;
  undefined auStack_106 [256];
  int iStack_6;
  
  iStack_6 = 0xa46;
  FUN_1158_0444();
  uVar15 = *(undefined4 *)((int)DAT_1160_18f6 + 0x1b4);
  uVar10 = (undefined2)((ulong)param_2 >> 0x10);
  iVar9 = (int)param_2;
  FUN_1138_1c77((int)*(undefined4 *)(iVar9 + 0x264),
                (int)((ulong)*(undefined4 *)(iVar9 + 0x264) >> 0x10),
                CONCAT11(extraout_AH,*(undefined *)((int)uVar15 + 0x31)));
  puVar18 = auStack_206;
  uVar19 = unaff_SS;
  FUN_1158_17cd(0xa19,0x1138);
  FUN_1158_184c(0x1dfa,0x1160);
  FUN_1158_184c(0xa25,0x1158);
  puVar17 = auStack_306;
  uVar12 = unaff_SS;
  FUN_1138_1d53(iVar9,uVar10);
  FUN_1158_184c(puVar17,uVar12);
  FUN_1138_1d8c(iVar9,uVar10,puVar18,uVar19);
  puVar18 = auStack_306;
  uVar19 = unaff_SS;
  FUN_1158_17cd(0xa29,0x1138);
  puVar17 = auStack_206;
  uVar12 = unaff_SS;
  FUN_1150_08a9(DAT_1160_1e06,DAT_1160_1e06 >> 0xf);
  FUN_1158_184c(puVar17,uVar12);
  FUN_1138_1d8c((int)*(undefined4 *)(iVar9 + 0x2ac),
                (int)((ulong)*(undefined4 *)(iVar9 + 0x2ac) >> 0x10),puVar18,uVar19);
  FUN_10a8_246f((int)*(undefined4 *)(iVar9 + 0x17c),
                (int)((ulong)*(undefined4 *)(iVar9 + 0x17c) >> 0x10),0);
  pcVar11 = (char *)s_sDecimal_1160_1092 + 6;
  FUN_1098_0e6b(iVar9,uVar10,1);
  iStack_108 = (int)((ulong)*(undefined4 *)(iVar9 + 0x244) >> 0x10);
  uStack_10c._2_2_ = (undefined4 *)*(undefined4 *)(iVar9 + 0x244);
  puVar2 = (undefined4 *)*(undefined4 *)((int)uStack_10c._2_2_ + 0xd8);
  puVar1 = (undefined2 *)((int)*puVar2 + 0x10);
  iVar4 = (*(code *)*puVar1)((char *)s_sDecimal_1160_1092 + 6,(undefined4 *)puVar2,
                             (int)((ulong)puVar2 >> 0x10));
  uStack_10c._0_2_ = iVar4 + -1;
  if (SBORROW2(iVar4,1)) {
    pcVar11 = (char *)0x1158;
    uStack_10c._0_2_ = FUN_1158_043e((char *)s_sDecimal_1160_1092 + 6);
  }
  if (-1 < (int)uStack_10c) {
    iVar4 = 0;
    while( true ) {
      puVar18 = auStack_20c;
      puVar2 = (undefined4 *)*(undefined4 *)((int)uStack_10c._2_2_ + 0xd8);
      puVar1 = (undefined2 *)((int)*puVar2 + 0xc);
      uVar12 = unaff_SS;
      (*(code *)*puVar1)(pcVar11,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),iVar4,puVar18);
      FUN_1158_17e7(0xff,auStack_106,unaff_SS,puVar18,uVar12);
      iStack_6 = FUN_1158_1878(auStack_106,unaff_SS,0xa31,0x1158);
      if (0 < iStack_6) {
        puVar18 = auStack_20c;
        puVar17 = auStack_106;
        iVar5 = iStack_6 + 1;
        uVar12 = unaff_SS;
        uVar19 = unaff_SS;
        if (SCARRY2(iStack_6,1)) {
          iVar5 = FUN_1158_043e(0x1158,puVar17);
        }
        FUN_1158_180b(100,iVar5,puVar17,uVar12);
        iVar5 = FUN_1158_0416(puVar18);
        FUN_1158_17e7(0xff,iVar9 + iVar5 * 0x100 + 0x36a,uVar10,puVar18,uVar19);
        FUN_1158_1975(100,iStack_6,auStack_106,unaff_SS);
        puVar2 = (undefined4 *)*(undefined4 *)((int)uStack_10c._2_2_ + 0xd8);
        puVar1 = (undefined2 *)((int)*puVar2 + 0x18);
        (*(code *)*puVar1)(0x1158,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),auStack_106);
      }
      pcVar11 = (char *)0x1158;
      if (iVar4 == (int)uStack_10c) break;
      iVar4 = iVar4 + 1;
    }
  }
  FUN_1138_1c77((int)*(undefined4 *)(iVar9 + 0x318),
                (int)((ulong)*(undefined4 *)(iVar9 + 0x318) >> 0x10),0);
  uVar12 = 0x1148;
  iVar4 = FUN_1148_527d(iVar9,uVar10);
  iVar5 = iVar4 + -1;
  if (SBORROW2(iVar4,1)) {
    uVar12 = 0x1158;
    iVar5 = FUN_1158_043e(0x1148);
  }
  iStack_108 = iVar5;
  if (-1 < iVar5) {
    iVar4 = 0;
    while( true ) {
      uVar15 = FUN_1148_5246(iVar9,uVar10,iVar4);
      uVar12 = 0x1158;
      cVar3 = FUN_1158_2255(0x399,0x1138,uVar15);
      if (cVar3 != '\0') {
        uVar15 = FUN_1148_5246(iVar9,uVar10,iVar4);
        uVar12 = 0x1158;
        uVar15 = FUN_1158_2273(0x399,0x1138,uVar15);
        uVar19 = (undefined2)((ulong)uVar15 >> 0x10);
        iVar5 = (int)uVar15;
        uStack_10c = uVar15;
        if (*(int *)(iVar5 + 0xc) != 0 || *(int *)(iVar5 + 0xe) != 0) {
          iVar7 = DAT_1160_1e06 >> 0xf;
          iVar6 = *(int *)(iVar5 + 0xc);
          uVar8 = *(uint *)(iVar5 + 0xe);
          bVar14 = false;
          if ((int)uVar8 < 0) {
            bVar13 = iVar6 != 0;
            iVar6 = -iVar6;
            iVar5 = ~uVar8 + 1;
            bVar14 = SBORROW2(~uVar8,-1) != SBORROW2(iVar5,(uint)bVar13);
            uVar8 = iVar5 - (uint)bVar13;
          }
          lVar16 = CONCAT22(uVar8,iVar6);
          iVar5 = DAT_1160_1e06;
          if (bVar14) {
            lVar16 = FUN_1158_043e(0x1158);
          }
          uVar12 = 0x1138;
          FUN_1138_1c77(uStack_10c,lVar16 <= CONCAT22(iVar7,iVar5));
        }
      }
      if (iVar4 == iStack_108) break;
      iVar4 = iVar4 + 1;
    }
  }
  puVar2 = (undefined4 *)*(undefined4 *)((int)*(undefined4 *)(iVar9 + 0x358) + 0xd8);
  if (DAT_1160_1e06 < 3) {
    puVar1 = (undefined2 *)((int)*puVar2 + 0x34);
    (*(code *)*puVar1)(uVar12,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),1);
  }
  if (DAT_1160_1e06 < 4) {
    puVar2 = (undefined4 *)*(undefined4 *)((int)*(undefined4 *)(iVar9 + 0x17c) + 0xea);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x34);
    (*(code *)*puVar1)(uVar12,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),1);
  }
  puVar2 = (undefined4 *)*(undefined4 *)((int)*(undefined4 *)(iVar9 + 0x244) + 0xd8);
  iStack_108 = (int)((ulong)puVar2 >> 0x10);
  uStack_10c._2_2_ = (undefined4 *)puVar2;
  if (DAT_1160_1e06 < 3) {
    puVar1 = (undefined2 *)((int)*puVar2 + 0x34);
    (*(code *)*puVar1)(uVar12,uStack_10c._2_2_,iStack_108,2);
  }
  if (DAT_1160_1e06 < 2) {
    puVar1 = (undefined2 *)((int)*(undefined4 *)CONCAT22(iStack_108,uStack_10c._2_2_) + 0x34);
    (*(code *)*puVar1)(uVar12,uStack_10c._2_2_,iStack_108,1);
  }
  uVar12 = (undefined2)((ulong)*(undefined4 *)(iVar9 + 0x244) >> 0x10);
  iVar4 = (int)*(undefined4 *)(iVar9 + 0x244);
  FUN_1120_5d4d((int)*(undefined4 *)(iVar9 + 0x22c),
                (int)((ulong)*(undefined4 *)(iVar9 + 0x22c) >> 0x10),*(undefined2 *)(iVar4 + 0xd8),
                *(undefined2 *)(iVar4 + 0xda));
  FUN_10e0_3017((int)*(undefined4 *)(iVar9 + 0x180),
                (int)((ulong)*(undefined4 *)(iVar9 + 0x180) >> 0x10),0x1e16,0x1160);
  FUN_10e0_3017((int)*(undefined4 *)(iVar9 + 0x194),
                (int)((ulong)*(undefined4 *)(iVar9 + 0x194) >> 0x10),0x1e24,0x1160);
  FUN_10e0_3017((int)*(undefined4 *)(iVar9 + 0x19c),
                (int)((ulong)*(undefined4 *)(iVar9 + 0x19c) >> 0x10),0x1e24,0x1160);
  DAT_1160_048e = 0;
  return;
}



/* ---- TFormSCDD_Decisions_FormClose @ 1098:0db0  (31 octets) ---- */

void __stdcall16far TFormSCDD_Decisions_FormClose(undefined4 param_1,undefined *param_2)

{
  FUN_1158_0444();
  FUN_1098_2b16((int)param_1,(int)((ulong)param_1 >> 0x10));
  *param_2 = 1;
  return;
}



/* ---- TFormSCDD_Decisions_FormCloseQuery @ 1098:0dcf  (152 octets) ---- */

void __stdcall16far TFormSCDD_Decisions_FormCloseQuery(undefined4 param_1,undefined *param_2)

{
  undefined uVar1;
  int iVar2;
  int iVar3;
  undefined2 uVar4;
  
  FUN_1158_0444();
  *param_2 = 1;
  if (DAT_1160_048e == '\0') {
    uVar4 = (undefined2)((ulong)param_1 >> 0x10);
    iVar3 = (int)param_1;
    if ((*(int *)(iVar3 + 0x104) == 1 & *(byte *)(iVar3 + 0x368)) != 0) {
      iVar2 = FUN_1010_39ca();
      if (iVar2 == 6) {
        uVar1 = FUN_1098_3474(iVar3,uVar4);
        *param_2 = uVar1;
      }
      else if (iVar2 == 7) {
        *(undefined2 *)(iVar3 + 0x104) = 2;
      }
      else if (iVar2 == 2) {
        *param_2 = 0;
      }
    }
    if ((*(int *)(iVar3 + 0x104) == 2 & *(byte *)(iVar3 + 0x368)) != 0) {
      iVar3 = FUN_1010_3a48();
      *param_2 = iVar3 == 6;
    }
  }
  return;
}



/* ---- FUN_1098_0e6b @ 1098:0e6b  (577 octets) ---- */

void __stdcall16far FUN_1098_0e6b(undefined4 param_1,undefined param_2)

{
  byte extraout_AH;
  int iVar1;
  byte extraout_AH_00;
  byte extraout_AH_01;
  undefined extraout_AH_02;
  undefined extraout_AH_03;
  undefined extraout_AH_04;
  byte extraout_AH_05;
  undefined extraout_AH_06;
  undefined extraout_AH_07;
  undefined extraout_AH_08;
  undefined extraout_AH_09;
  undefined extraout_AH_10;
  byte extraout_AH_11;
  byte extraout_AH_12;
  byte extraout_AH_13;
  byte bVar2;
  int iVar3;
  undefined2 uVar4;
  undefined2 unaff_SS;
  undefined *puVar5;
  undefined2 uVar6;
  undefined local_202 [256];
  undefined local_102 [252];
  undefined2 uStack_6;
  
  uStack_6 = 0xe76;
  FUN_1158_0444();
  uVar4 = (undefined2)((ulong)param_1 >> 0x10);
  iVar3 = (int)param_1;
  *(undefined *)(iVar3 + 0x368) = param_2;
  if (*(char *)(iVar3 + 0x368) == '\0') {
    puVar5 = local_202;
    uVar6 = unaff_SS;
    FUN_1138_1d53((int)*(undefined4 *)(iVar3 + 0x2f8),
                  (int)((ulong)*(undefined4 *)(iVar3 + 0x2f8) >> 0x10));
    FUN_1158_17e7(0xff,local_102,unaff_SS,puVar5,uVar6);
    puVar5 = local_202;
    uVar6 = unaff_SS;
    FUN_1138_1d53((int)*(undefined4 *)(iVar3 + 0x18c),
                  (int)((ulong)*(undefined4 *)(iVar3 + 0x18c) >> 0x10));
    FUN_1138_1d8c((int)*(undefined4 *)(iVar3 + 0x2f8),
                  (int)((ulong)*(undefined4 *)(iVar3 + 0x2f8) >> 0x10),puVar5,uVar6);
    FUN_1138_1d8c((int)*(undefined4 *)(iVar3 + 0x18c),
                  (int)((ulong)*(undefined4 *)(iVar3 + 0x18c) >> 0x10),local_102,unaff_SS);
    puVar5 = local_202;
    uVar6 = unaff_SS;
    FUN_1138_1d53(iVar3,uVar4);
    FUN_1158_184c(0xe67,0x1138);
    FUN_1158_184c(local_102,unaff_SS);
    FUN_1138_1d8c(iVar3,uVar4,puVar5,uVar6);
  }
  FUN_1138_1c77((int)*(undefined4 *)(iVar3 + 0x2f8),
                (int)((ulong)*(undefined4 *)(iVar3 + 0x2f8) >> 0x10),0);
  iVar1 = (uint)extraout_AH * 0x100;
  if (*(char *)(iVar3 + 0x368) == '\0') {
    iVar1 = iVar1 + 1;
  }
  FUN_1138_1c77((int)*(undefined4 *)(iVar3 + 0x310),
                (int)((ulong)*(undefined4 *)(iVar3 + 0x310) >> 0x10),iVar1);
  iVar1 = (uint)extraout_AH_00 * 0x100;
  if (*(char *)(iVar3 + 0x368) == '\0') {
    iVar1 = iVar1 + 1;
  }
  FUN_1138_1c77((int)*(undefined4 *)(iVar3 + 0x31c),
                (int)((ulong)*(undefined4 *)(iVar3 + 0x31c) >> 0x10),iVar1);
  iVar1 = (uint)extraout_AH_01 * 0x100;
  if (*(char *)(iVar3 + 0x368) == '\0') {
    iVar1 = iVar1 + 1;
  }
  FUN_1138_1c77((int)*(undefined4 *)(iVar3 + 0x318),
                (int)((ulong)*(undefined4 *)(iVar3 + 0x318) >> 0x10),iVar1);
  FUN_1138_1c77((int)*(undefined4 *)(iVar3 + 800),(int)((ulong)*(undefined4 *)(iVar3 + 800) >> 0x10)
                ,CONCAT11(extraout_AH_02,*(undefined *)(iVar3 + 0x368)));
  FUN_1138_179d((int)*(undefined4 *)(iVar3 + 800),(int)((ulong)*(undefined4 *)(iVar3 + 800) >> 0x10)
                ,*(undefined2 *)((int)*(undefined4 *)(iVar3 + 0x318) + 0x20));
  FUN_1138_1c77((int)*(undefined4 *)(iVar3 + 0x2ec),
                (int)((ulong)*(undefined4 *)(iVar3 + 0x2ec) >> 0x10),
                CONCAT11(extraout_AH_03,*(undefined *)(iVar3 + 0x368)));
  FUN_1138_1c77((int)*(undefined4 *)(iVar3 + 0x2b4),
                (int)((ulong)*(undefined4 *)(iVar3 + 0x2b4) >> 0x10),
                CONCAT11(extraout_AH_04,*(undefined *)(iVar3 + 0x368)));
  iVar1 = (uint)extraout_AH_05 * 0x100;
  if (*(char *)(iVar3 + 0x368) == '\0') {
    iVar1 = iVar1 + 1;
  }
  FUN_1138_1c77((int)*(undefined4 *)(iVar3 + 0x2b8),
                (int)((ulong)*(undefined4 *)(iVar3 + 0x2b8) >> 0x10),iVar1);
  FUN_1138_1cb8((int)*(undefined4 *)(iVar3 + 0x244),
                (int)((ulong)*(undefined4 *)(iVar3 + 0x244) >> 0x10),
                CONCAT11(extraout_AH_06,*(undefined *)(iVar3 + 0x368)));
  FUN_1138_1cb8((int)*(undefined4 *)(iVar3 + 0x22c),
                (int)((ulong)*(undefined4 *)(iVar3 + 0x22c) >> 0x10),
                CONCAT11(extraout_AH_07,*(undefined *)(iVar3 + 0x368)));
  FUN_1138_1cb8((int)*(undefined4 *)(iVar3 + 0x358),
                (int)((ulong)*(undefined4 *)(iVar3 + 0x358) >> 0x10),
                CONCAT11(extraout_AH_08,*(undefined *)(iVar3 + 0x368)));
  FUN_1138_1cb8((int)*(undefined4 *)(iVar3 + 0x2d4),
                (int)((ulong)*(undefined4 *)(iVar3 + 0x2d4) >> 0x10),
                CONCAT11(extraout_AH_09,*(undefined *)(iVar3 + 0x368)));
  FUN_1138_1cb8((int)*(undefined4 *)(iVar3 + 0x2d8),
                (int)((ulong)*(undefined4 *)(iVar3 + 0x2d8) >> 0x10),
                CONCAT11(extraout_AH_10,*(undefined *)(iVar3 + 0x368)));
  bVar2 = extraout_AH_11;
  if (DAT_1160_1e06 == 4) {
    FUN_1138_1c77((int)*(undefined4 *)(iVar3 + 0x350),
                  (int)((ulong)*(undefined4 *)(iVar3 + 0x350) >> 0x10),
                  CONCAT11(extraout_AH_11,*(undefined *)(iVar3 + 0x368)));
    iVar1 = (uint)extraout_AH_12 * 0x100;
    if (*(char *)(iVar3 + 0x368) == '\0') {
      iVar1 = iVar1 + 1;
    }
    FUN_1138_1c77((int)*(undefined4 *)(iVar3 + 0x354),
                  (int)((ulong)*(undefined4 *)(iVar3 + 0x354) >> 0x10),iVar1);
    bVar2 = extraout_AH_13;
  }
  iVar1 = (uint)bVar2 * 0x100;
  if (*(char *)(iVar3 + 0x368) == '\0') {
    iVar1 = iVar1 + 1;
  }
  FUN_1098_2924(iVar3,uVar4,iVar1);
  return;
}



/* ---- FUN_1098_10ac @ 1098:10ac  (38 octets) ---- */

int __stdcall16far FUN_1098_10ac(undefined4 param_1)

{
  byte extraout_AH;
  int iVar1;
  
  FUN_1158_0444();
  iVar1 = (uint)extraout_AH * 0x100;
  if (*(char *)((int)param_1 + 0x368) == '\0') {
    iVar1 = iVar1 + 1;
  }
  return iVar1;
}



/* ---- TFormSCDD_Decisions_FormShow @ 1098:10fa  (1 octets) ---- */

void TFormSCDD_Decisions_FormShow(undefined2 param_1,undefined4 param_2)

{
  undefined2 *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined2 uVar5;
  int iVar6;
  undefined2 uVar7;
  undefined4 *puVar8;
  
  FUN_1158_0444();
  uVar7 = (undefined2)((ulong)param_2 >> 0x10);
  iVar6 = (int)param_2;
  func_0x10982dab(0x1158,iVar6,uVar7);
  FUN_1138_1c77((int)*(undefined4 *)(iVar6 + 0x2f0),
                (int)((ulong)*(undefined4 *)(iVar6 + 0x2f0) >> 0x10),0);
  puVar8 = (undefined4 *)
           FUN_10d8_3b9b((int)*(undefined4 *)(iVar6 + 0x180),
                         (int)((ulong)*(undefined4 *)(iVar6 + 0x180) >> 0x10),0x10d2,0x1138);
  puVar1 = (undefined2 *)((int)*puVar8 + 0x44);
  (*(code *)*puVar1)(0x10d8,puVar8);
  uVar2 = FUN_1158_0416();
  uVar3 = uVar2 & 0xff00;
  if (2 < DAT_1160_1e06) {
    uVar3 = uVar3 + 1;
  }
  uVar4 = uVar3 & 0xff00;
  if (uVar2 == 1) {
    uVar4 = uVar4 + 1;
  }
  FUN_1138_1c77((int)*(undefined4 *)(iVar6 + 0x35c),
                (int)((ulong)*(undefined4 *)(iVar6 + 0x35c) >> 0x10),
                CONCAT11((char)(uVar4 >> 8),(byte)uVar4 & (byte)uVar3));
  puVar8 = (undefined4 *)
           FUN_10d8_3c43((int)*(undefined4 *)(iVar6 + 0x180),
                         (int)((ulong)*(undefined4 *)(iVar6 + 0x180) >> 0x10),0x10ec,0x1138);
  if (puVar8 == (undefined4 *)0x0) {
    uVar5 = 8;
  }
  else {
    puVar1 = (undefined2 *)((int)*puVar8 + 0x44);
    (*(code *)*puVar1)(0x10d8,puVar8);
    uVar5 = FUN_1158_0416();
  }
  FUN_1098_13c6(iVar6,uVar7,uVar5);
  FUN_1140_63a9((int)DAT_1160_2c2e,(int)((ulong)DAT_1160_2c2e >> 0x10),0xfffe);
  return;
}



/* ---- FUN_1098_11d4 @ 1098:11d4  (21 octets) ---- */

void __stdcall16far FUN_1098_11d4(void)

{
  FUN_1158_0444();
  FUN_10a0_13a5(0);
  return;
}



/* ---- TFormSCDD_Decisions_PrintBtnClick @ 1098:11ef  (1 octets) ---- */

void TFormSCDD_Decisions_PrintBtnClick(undefined2 param_1,undefined4 param_2)

{
  char cVar1;
  undefined2 uVar2;
  int iVar3;
  undefined2 uVar4;
  undefined2 uStack_218;
  undefined *puStack_216;
  undefined2 uStack_214;
  undefined2 uStack_212;
  undefined2 uStack_210;
  char *pcStack_20e;
  char *pcStack_20c;
  int iStack_20a;
  char *pcStack_208;
  undefined4 uStack_206;
  undefined2 uStack_6;
  
  uStack_6 = 0x11fa;
  FUN_1158_0444();
  uVar4 = (undefined2)((ulong)param_2 >> 0x10);
  iVar3 = (int)param_2;
  pcStack_20c = (char *)0x1158;
  pcStack_20e = (char *)0x1208;
  iStack_20a = iVar3;
  pcStack_208 = (char *)uVar4;
  cVar1 = FUN_1098_3169();
  if (cVar1 == '\0') {
    pcStack_208 = (char *)((ulong)*(undefined4 *)(iVar3 + 400) >> 0x10);
    iStack_20a = (int)*(undefined4 *)(iVar3 + 400);
    pcStack_20c = (char *)s_sDecimal_1160_1092 + 6;
    pcStack_20e = (char *)0x1223;
    uVar2 = FUN_1108_2f17();
    if ((char)uVar2 != '\0') {
      pcStack_20c = (char *)CONCAT11((char)((uint)uVar2 >> 8),1);
      pcStack_20e = (char *)s_windows_1160_100f + 1;
      uStack_210 = 0x25b4;
      uStack_212 = 0x1108;
      uStack_214 = 0x1240;
      iStack_20a = iVar3;
      pcStack_208 = (char *)uVar4;
      uStack_206 = FUN_1140_2553();
      uStack_212 = 0x1140;
      uStack_214 = 0x11e9;
      uStack_218 = DAT_1160_1858;
      DAT_1160_1858 = &uStack_218;
      puStack_216 = &stack0xfffe;
      DAT_1160_2004 = uStack_206;
      FUN_1010_2f8d(uStack_206,1);
      *(undefined2 *)((int)uStack_206 + 0x2b9) = 0x11d4;
      *(undefined2 *)((int)uStack_206 + 699) = (char *)s_sDecimal_1160_1092 + 6;
      *(int *)((int)uStack_206 + 0x2bd) = iVar3;
      *(undefined2 *)((int)uStack_206 + 0x2bf) = uVar4;
      iVar3 = (int)uStack_206;
      FUN_1140_5d45(uStack_206);
      DAT_1160_1858 = (undefined2 *)iVar3;
      puStack_216 = (undefined *)0x1140;
      uStack_218 = 0x12ac;
      FUN_1140_5f1d(DAT_1160_2004);
      return;
    }
  }
  else {
    pcStack_208 = (char *)s_sDecimal_1160_1092 + 6;
    iStack_20a = 0x1211;
    FUN_1010_37d1();
  }
  return;
}



/* ---- TFormSCDD_Decisions_PrintRapideBtnClick @ 1098:12b0  (61 octets) ---- */

void __stdcall16far TFormSCDD_Decisions_PrintRapideBtnClick(undefined4 param_1)

{
  undefined4 uVar1;
  char cVar2;
  undefined2 uVar3;
  
  FUN_1158_0444();
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  cVar2 = FUN_1098_3169((int)param_1,uVar3);
  if (cVar2 == '\0') {
    uVar1 = *(undefined4 *)((int)param_1 + 400);
    cVar2 = FUN_1108_2f17((int)uVar1,(int)((ulong)uVar1 >> 0x10));
    if (cVar2 != '\0') {
      FUN_10a0_13a5(1);
    }
  }
  else {
    FUN_1010_37d1();
  }
  return;
}



/* ---- TFormSCDD_Decisions_SpinEdit1Change @ 1098:12ed  (14 octets) ---- */

void __stdcall16far TFormSCDD_Decisions_SpinEdit1Change(void)

{
  FUN_1158_0444();
  return;
}



/* ---- TFormSCDD_Decisions_ComboBox3Change @ 1098:12fb  (53 octets) ---- */

void __stdcall16far TFormSCDD_Decisions_ComboBox3Change(undefined4 param_1)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  undefined2 uVar4;
  
  FUN_1158_0444();
  uVar4 = (undefined2)((ulong)param_1 >> 0x10);
  uVar1 = *(undefined4 *)((int)param_1 + 0x358);
  uVar2 = FUN_1120_5c07((int)uVar1,(int)((ulong)uVar1 >> 0x10));
  uVar3 = uVar2 & 0xff00;
  if (uVar2 == 1) {
    uVar3 = uVar3 + 1;
  }
  uVar1 = *(undefined4 *)((int)param_1 + 0x35c);
  FUN_1138_1c77((int)uVar1,(int)((ulong)uVar1 >> 0x10),uVar3);
  return;
}



/* ---- TFormSCDD_Decisions_ComboBox1Change @ 1098:1338  (67 octets) ---- */

void __stdcall16far TFormSCDD_Decisions_ComboBox1Change(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined2 uVar3;
  
  FUN_1158_0444();
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  iVar2 = (int)param_1;
  FUN_1120_5c07((int)*(undefined4 *)(iVar2 + 0x244),
                (int)((ulong)*(undefined4 *)(iVar2 + 0x244) >> 0x10));
  iVar1 = FUN_1158_0416();
  FUN_1138_1d8c((int)*(undefined4 *)(iVar2 + 0x2a0),
                (int)((ulong)*(undefined4 *)(iVar2 + 0x2a0) >> 0x10),iVar2 + iVar1 * 0x100 + 0x36a,
                uVar3);
  return;
}



/* ---- TFormSCDD_Decisions_ComboBox2Change @ 1098:1383  (67 octets) ---- */

void __stdcall16far TFormSCDD_Decisions_ComboBox2Change(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined2 uVar3;
  
  FUN_1158_0444();
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  iVar2 = (int)param_1;
  FUN_1120_5c07((int)*(undefined4 *)(iVar2 + 0x22c),
                (int)((ulong)*(undefined4 *)(iVar2 + 0x22c) >> 0x10));
  iVar1 = FUN_1158_0416();
  FUN_1138_1d8c((int)*(undefined4 *)(iVar2 + 0x2a8),
                (int)((ulong)*(undefined4 *)(iVar2 + 0x2a8) >> 0x10),iVar2 + iVar1 * 0x100 + 0x36a,
                uVar3);
  return;
}



/* ---- FUN_1098_13c6 @ 1098:13c6  (224 octets) ---- */

void __stdcall16far FUN_1098_13c6(undefined4 param_1,int param_2)

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
  if (DAT_1160_1e06 == 4) {
    iVar1 = (uint)extraout_AH * 0x100;
    if (10 < param_2) {
      iVar1 = iVar1 + 1;
    }
    uVar3 = (undefined2)((ulong)param_1 >> 0x10);
    iVar2 = (int)param_1;
    FUN_1138_1c77((int)*(undefined4 *)(iVar2 + 0x348),
                  (int)((ulong)*(undefined4 *)(iVar2 + 0x348) >> 0x10),iVar1);
    iVar1 = (uint)extraout_AH_00 * 0x100;
    if (10 < param_2) {
      iVar1 = iVar1 + 1;
    }
    FUN_1138_1c77((int)*(undefined4 *)(iVar2 + 0x340),
                  (int)((ulong)*(undefined4 *)(iVar2 + 0x340) >> 0x10),iVar1);
    iVar1 = (uint)extraout_AH_01 * 0x100;
    if (9 < param_2) {
      iVar1 = iVar1 + 1;
    }
    FUN_1138_1c77((int)*(undefined4 *)(iVar2 + 0x344),
                  (int)((ulong)*(undefined4 *)(iVar2 + 0x344) >> 0x10),iVar1);
    iVar1 = (uint)extraout_AH_02 * 0x100;
    if (9 < param_2) {
      iVar1 = iVar1 + 1;
    }
    FUN_1138_1c77((int)*(undefined4 *)(iVar2 + 0x338),
                  (int)((ulong)*(undefined4 *)(iVar2 + 0x338) >> 0x10),iVar1);
    iVar1 = (uint)extraout_AH_03 * 0x100;
    if (8 < param_2) {
      iVar1 = iVar1 + 1;
    }
    FUN_1138_1c77((int)*(undefined4 *)(iVar2 + 0x33c),
                  (int)((ulong)*(undefined4 *)(iVar2 + 0x33c) >> 0x10),iVar1);
    iVar1 = (uint)extraout_AH_04 * 0x100;
    if (8 < param_2) {
      iVar1 = iVar1 + 1;
    }
    FUN_1138_1c77((int)*(undefined4 *)(iVar2 + 0x334),
                  (int)((ulong)*(undefined4 *)(iVar2 + 0x334) >> 0x10),iVar1);
    iVar1 = (uint)extraout_AH_05 * 0x100;
    if (7 < param_2) {
      iVar1 = iVar1 + 1;
    }
    FUN_1138_1c77((int)*(undefined4 *)(iVar2 + 500),
                  (int)((ulong)*(undefined4 *)(iVar2 + 500) >> 0x10),iVar1);
    iVar1 = (uint)extraout_AH_06 * 0x100;
    if (7 < param_2) {
      iVar1 = iVar1 + 1;
    }
    FUN_1138_1c77((int)*(undefined4 *)(iVar2 + 0x1f0),
                  (int)((ulong)*(undefined4 *)(iVar2 + 0x1f0) >> 0x10),iVar1);
  }
  return;
}



/* ---- TFormSCDD_Decisions_SpinEdit2Change @ 1098:14ae  (1 octets) ---- */

void TFormSCDD_Decisions_SpinEdit2Change(undefined2 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  
  FUN_1158_0444();
  uVar3 = (undefined2)((ulong)param_2 >> 0x10);
  uVar1 = *(undefined4 *)((int)param_2 + 0x350);
  FUN_10f0_1733((int)uVar1,(int)((ulong)uVar1 >> 0x10));
  uVar2 = FUN_1158_0416();
  FUN_1098_13c6((int)param_2,uVar3,uVar2);
  return;
}



/* ---- FUN_1098_1508 @ 1098:1508  (1136 octets) ---- */

void __stdcall16far FUN_1098_1508(undefined4 param_1,undefined4 param_2)

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
  
  local_6 = 0x1513;
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



/* ---- TFormSCDD_Decisions_DBEdit2Enter @ 1098:1992  (1 octets) ---- */

void TFormSCDD_Decisions_DBEdit2Enter
               (undefined2 param_1,undefined4 param_2,undefined2 param_3,undefined2 param_4)

{
  int iVar1;
  undefined2 *puVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  undefined2 uVar9;
  undefined2 uVar10;
  undefined2 unaff_SS;
  bool bVar11;
  bool bVar12;
  unkbyte10 in_ST0;
  undefined4 uVar13;
  undefined2 uVar14;
  undefined2 uVar15;
  undefined *puVar16;
  undefined auStack_112 [4];
  undefined auStack_10e [4];
  undefined auStack_10a [248];
  long lStack_12;
  undefined4 *puStack_e;
  undefined4 uStack_a;
  undefined2 uStack_6;
  
  uStack_6 = 0x199d;
  FUN_1158_0444();
  cVar3 = FUN_1158_2255(0x22,0x10d0,param_3,param_4);
  if (cVar3 != '\0') {
    uStack_a = FUN_1158_2273(0x22,0x10d0,param_3,param_4);
    puVar16 = auStack_10a;
    uVar10 = unaff_SS;
    FUN_10d0_1a9f(uStack_a);
    uVar13 = FUN_10d0_1a5f((int)uStack_a,(int)((ulong)uStack_a >> 0x10));
    uVar13 = *(undefined4 *)((int)uVar13 + 0x1a);
    uVar13 = FUN_10d8_3b9b((int)uVar13,(int)((ulong)uVar13 >> 0x10),puVar16,uVar10);
    uVar10 = (undefined2)((ulong)uVar13 >> 0x10);
    uStack_6 = (undefined2)uVar13;
    cVar3 = FUN_1158_2255(0xa58,(char *)s_iTime_1160_10dc + 4,uVar13);
    iVar6 = (int)param_2;
    uVar9 = (undefined2)((ulong)param_2 >> 0x10);
    if (cVar3 == '\0') {
      cVar3 = FUN_1158_2255(0x7c8,(char *)s_iTime_1160_10dc + 4,uStack_6,uVar10);
      if (cVar3 == '\0') {
        puVar16 = auStack_10a;
        uVar10 = unaff_SS;
        FUN_1100_1524((int)uStack_a,(int)((ulong)uStack_a >> 0x10));
        FUN_1138_1d8c((int)*(undefined4 *)(iVar6 + 0x2e0),
                      (int)((ulong)*(undefined4 *)(iVar6 + 0x2e0) >> 0x10),puVar16,uVar10);
      }
      else {
        puStack_e = (undefined4 *)FUN_1158_2273(0x7c8,(char *)s_iTime_1160_10dc + 4,uStack_6,uVar10)
        ;
        puVar16 = auStack_112;
        uVar15 = 0x1158;
        uVar14 = 0x1983;
        puVar2 = (undefined2 *)((int)*puStack_e + 0x44);
        uVar10 = unaff_SS;
        lStack_12 = (*(code *)*puVar2)();
        FUN_1150_10d4((longdouble)lStack_12,uVar14,uVar15);
        FUN_1138_1d8c((int)*(undefined4 *)(iVar6 + 0x2e0),
                      (int)((ulong)*(undefined4 *)(iVar6 + 0x2e0) >> 0x10),puVar16,uVar10);
      }
    }
    else {
      puStack_e = (undefined4 *)FUN_1158_2273(0xa58,(char *)s_iTime_1160_10dc + 4,uStack_6,uVar10);
      puVar16 = auStack_10e;
      uVar15 = 0x1158;
      uVar14 = 0x1978;
      puVar2 = (undefined2 *)((int)*puStack_e + 0x40);
      uVar10 = unaff_SS;
      (*(code *)*puVar2)();
      FUN_1150_10d4(in_ST0,uVar14,uVar15);
      FUN_1138_1d8c((int)*(undefined4 *)(iVar6 + 0x2e0),
                    (int)((ulong)*(undefined4 *)(iVar6 + 0x2e0) >> 0x10),puVar16,uVar10);
    }
  }
  cVar3 = FUN_1158_2255(0x22,0x10d0,param_3,param_4);
  if (cVar3 != '\0') {
    uStack_a = FUN_1158_2273(0x22,0x10d0,param_3,param_4);
    puVar16 = auStack_10a;
    FUN_10d0_1a9f(uStack_a);
    uVar13 = FUN_10d0_1a5f((int)uStack_a,(int)((ulong)uStack_a >> 0x10));
    uVar13 = *(undefined4 *)((int)uVar13 + 0x1a);
    uVar13 = FUN_10d8_3b9b((int)uVar13,(int)((ulong)uVar13 >> 0x10),puVar16,unaff_SS);
    uVar10 = (undefined2)((ulong)uVar13 >> 0x10);
    uStack_6 = (undefined2)uVar13;
    cVar3 = FUN_1158_2255(0xa58,(char *)s_iTime_1160_10dc + 4,uVar13);
    if (cVar3 == '\0') {
      cVar3 = FUN_1158_2255(0x7c8,(char *)s_iTime_1160_10dc + 4,uStack_6,uVar10);
      if (cVar3 != '\0') {
        puStack_e = (undefined4 *)FUN_1158_2273(0x7c8,(char *)s_iTime_1160_10dc + 4,uStack_6,uVar10)
        ;
        FUN_10e0_60f9(puStack_e,0x198f,0x1158);
      }
    }
    else {
      puStack_e = (undefined4 *)FUN_1158_2273(0xa58,(char *)s_iTime_1160_10dc + 4,uStack_6,uVar10);
      FUN_10e0_60f9(puStack_e,0x1989,0x1158);
    }
  }
  cVar3 = FUN_1158_2255(0x626,0x10d0,param_3,param_4);
  cVar4 = FUN_1158_2255();
  cVar5 = FUN_1158_2255();
  if ((cVar5 != '\0' || cVar4 != '\0') || cVar3 != '\0') {
    uStack_a = FUN_1158_2273(0x5da,0x1148,param_3,param_4);
    uVar10 = (undefined2)((ulong)uStack_a >> 0x10);
    iVar6 = *(int *)((int)uStack_a + 0xc);
    uVar7 = *(uint *)((int)uStack_a + 0xe);
    bVar12 = false;
    if ((int)uVar7 < 0) {
      bVar11 = iVar6 != 0;
      iVar6 = -iVar6;
      iVar1 = ~uVar7 + 1;
      bVar12 = SBORROW2(~uVar7,-1) != SBORROW2(iVar1,(uint)bVar11);
      uVar7 = iVar1 - (uint)bVar11;
    }
    uVar13 = CONCAT22(uVar7,iVar6);
    if (bVar12) {
      uVar13 = FUN_1158_043e(0x1158);
    }
    uVar8 = ~(uint)((ulong)uVar13 >> 0x10);
    uVar7 = (uint)((int)uVar13 != 0);
    iVar6 = uVar8 + 1;
    uVar13 = CONCAT22(iVar6 - uVar7,-(int)uVar13);
    if (SBORROW2(uVar8,-1) != SBORROW2(iVar6,uVar7)) {
      uVar13 = FUN_1158_043e(0x1158);
    }
    uVar10 = (undefined2)((ulong)uStack_a >> 0x10);
    *(undefined2 *)((int)uStack_a + 0xc) = (int)uVar13;
    *(undefined2 *)((int)uStack_a + 0xe) = (int)((ulong)uVar13 >> 0x10);
  }
  cVar3 = FUN_1158_2255(0x22,0x10d0,param_3,param_4);
  if (cVar3 == '\0') {
    cVar3 = FUN_1158_2255(0xba2,0x10d0,param_3,param_4);
    if (cVar3 == '\0') {
      cVar3 = FUN_1158_2255(0x1b14,0x1120,param_3,param_4);
      if (cVar3 != '\0') {
        uStack_a = FUN_1158_2273(0x1b14,0x1120,param_3,param_4);
        FUN_1138_1ed5(uStack_a,0xfffa,0xffff);
        FUN_1120_5be7(uStack_a);
      }
    }
    else {
      uStack_a = FUN_1158_2273(0xba2,0x10d0,param_3,param_4);
      FUN_1138_1ed5(uStack_a,0xfffa,0xffff);
      FUN_1120_5be7(uStack_a);
    }
  }
  else {
    uStack_a = FUN_1158_2273(0x22,0x10d0,param_3,param_4);
    FUN_1138_1ed5(uStack_a,0xfffa,0xffff);
    FUN_1120_4a3f(uStack_a);
  }
  return;
}



/* ---- TFormSCDD_Decisions_DBEdit2Exit @ 1098:1d71  (1 octets) ---- */

void TFormSCDD_Decisions_DBEdit2Exit(undefined2 param_1,undefined4 param_2)

{
  undefined2 *puVar1;
  char cVar2;
  char cVar3;
  undefined2 uVar4;
  longdouble in_ST0;
  longdouble in_ST1;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  double dVar8;
  char cStack_10a;
  
  FUN_1158_0444();
  cVar2 = FUN_1158_2255();
  cVar3 = FUN_1158_2255();
  uVar4 = (undefined2)((ulong)param_2 >> 0x10);
  if (cVar3 != '\0' || cVar2 != '\0') {
    FUN_1138_1c77();
  }
  FUN_1138_1d8c();
  if (*(char *)((int)param_2 + 0x368) != '\0') {
    cVar2 = FUN_1158_2255();
    if (cVar2 != '\0') {
      uVar7 = FUN_1158_2273();
      cVar2 = FUN_10d0_1ae4(uVar7);
      if (cVar2 == '\0') {
        FUN_1100_14d8();
        if (cStack_10a == '\0') {
          FUN_10d0_1a9f();
          FUN_10d0_1a5f();
          FUN_10d8_3b9b();
          cVar2 = FUN_1158_2255();
          if (cVar2 == '\0') {
            cVar2 = FUN_1158_2255();
            if (cVar2 == '\0') {
              cVar2 = FUN_1158_2255();
              if (cVar2 != '\0') {
                puVar5 = (undefined4 *)FUN_1158_2273();
                puVar1 = (undefined2 *)((int)*puVar5 + 0x44);
                (*(code *)*puVar1)();
                puVar5 = (undefined4 *)FUN_10d0_1b18((int)uVar7);
                puVar1 = (undefined2 *)((int)*puVar5 + 0x60);
                (*(code *)*puVar1)(0x10d0,(undefined4 *)puVar5);
              }
            }
            else {
              puVar5 = (undefined4 *)FUN_1158_2273();
              puVar1 = (undefined2 *)((int)*puVar5 + 0x40);
              (*(code *)*puVar1)();
              dVar8 = (double)in_ST0;
              puVar6 = (undefined4 *)FUN_10d0_1b18(uVar7);
              puVar1 = (undefined2 *)((int)*puVar6 + 0x5c);
              (*(code *)*puVar1)(0x10d0,puVar6,dVar8,puVar5);
              in_ST0 = in_ST1;
            }
          }
          else {
            puVar5 = (undefined4 *)FUN_1158_2273();
            puVar1 = (undefined2 *)((int)*puVar5 + 0x40);
            (*(code *)*puVar1)();
            dVar8 = (double)in_ST0;
            puVar6 = (undefined4 *)FUN_10d0_1b18(uVar7);
            puVar1 = (undefined2 *)((int)*puVar6 + 0x5c);
            (*(code *)*puVar1)(0x10d0,puVar6,dVar8,puVar5);
            in_ST0 = in_ST1;
          }
        }
        FUN_1158_2273();
        FUN_1098_1508();
      }
    }
    cVar2 = FUN_1158_2255();
    if (cVar2 != '\0') {
      uVar7 = FUN_1158_2273();
      cVar2 = FUN_10d0_2ad7(uVar7);
      if ((cVar2 == '\0') && (FUN_1138_1d53(), cStack_10a == '\0')) {
        FUN_10d0_2a92();
        FUN_10d0_2a52();
        FUN_10d8_3b9b();
        cVar2 = FUN_1158_2255();
        if (cVar2 == '\0') {
          cVar2 = FUN_1158_2255();
          if (cVar2 == '\0') {
            cVar2 = FUN_1158_2255();
            if (cVar2 != '\0') {
              puVar5 = (undefined4 *)FUN_1158_2273();
              puVar1 = (undefined2 *)((int)*puVar5 + 0x44);
              (*(code *)*puVar1)();
              puVar5 = (undefined4 *)FUN_10d0_2b0b((int)uVar7);
              puVar1 = (undefined2 *)((int)*puVar5 + 0x60);
              (*(code *)*puVar1)(0x10d0,(undefined4 *)puVar5);
            }
          }
          else {
            puVar5 = (undefined4 *)FUN_1158_2273();
            puVar1 = (undefined2 *)((int)*puVar5 + 0x40);
            (*(code *)*puVar1)();
            dVar8 = (double)in_ST0;
            puVar6 = (undefined4 *)FUN_10d0_2b0b(uVar7);
            puVar1 = (undefined2 *)((int)*puVar6 + 0x5c);
            (*(code *)*puVar1)(0x10d0,puVar6,dVar8,puVar5);
          }
        }
        else {
          puVar5 = (undefined4 *)FUN_1158_2273();
          puVar1 = (undefined2 *)((int)*puVar5 + 0x40);
          (*(code *)*puVar1)();
          dVar8 = (double)in_ST0;
          puVar6 = (undefined4 *)FUN_10d0_2b0b(uVar7);
          puVar1 = (undefined2 *)((int)*puVar6 + 0x5c);
          (*(code *)*puVar1)(0x10d0,puVar6,dVar8,puVar5);
        }
      }
    }
    cVar2 = FUN_1158_2255();
    if ((cVar2 != '\0') && (uVar7 = FUN_1158_2273(), *(char *)((int)uVar7 + 0xdc) == '\0')) {
      FUN_10f0_1733(uVar7);
      FUN_10f0_178b();
    }
  }
  FUN_1098_3169((int)param_2,uVar4);
  return;
}



/* ---- TFormSCDD_Decisions_DBEdit2KeyUp @ 1098:218d  (150 octets) ---- */

void __stdcall16far
TFormSCDD_Decisions_DBEdit2KeyUp
          (undefined4 param_1,undefined2 param_2_00,int *param_2,undefined2 param_3,
          undefined2 param_4)

{
  char cVar1;
  undefined2 uVar2;
  undefined2 unaff_CS;
  undefined2 unaff_SS;
  undefined4 uVar3;
  undefined *puVar4;
  undefined local_106 [256];
  undefined2 local_6;
  
  _local_6 = CONCAT22(unaff_CS,0x2198);
  FUN_1158_0444();
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  if (*param_2 == 0x11) {
    uVar3 = *(undefined4 *)((int)param_1 + 0x1a4);
    FUN_1138_1c77((int)uVar3,(int)((ulong)uVar3 >> 0x10),0);
  }
  else if (*param_2 != 9) {
    cVar1 = FUN_1158_2255(0x22,0x10d0,param_3,param_4);
    if (cVar1 != '\0') {
      uVar3 = FUN_1158_2273(0x22,0x10d0,param_3,param_4);
      local_6 = (undefined2)uVar3;
      cVar1 = FUN_10d0_1ae4(uVar3);
      if (cVar1 == '\0') {
        puVar4 = local_106;
        FUN_1100_1524(local_6,(int)((ulong)uVar3 >> 0x10));
        uVar3 = *(undefined4 *)((int)param_1 + 0x2e0);
        FUN_1138_1d8c((int)uVar3,(int)((ulong)uVar3 >> 0x10),puVar4,unaff_SS);
      }
    }
  }
  return;
}



/* ---- TFormSCDD_Decisions_DBEdit2KeyDown @ 1098:2236  (1 octets) ---- */

void TFormSCDD_Decisions_DBEdit2KeyDown
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
  undefined auStack_20a [244];
  long lStack_116;
  undefined4 *puStack_112;
  undefined4 uStack_10e;
  char acStack_10a [256];
  undefined4 uStack_a;
  int iStack_6;
  
  iStack_6 = 0x2241;
  FUN_1158_0444();
  if ((*param_4 == 0x70) && (cVar2 = FUN_1158_2255(0x5c1,0x1138,param_5,param_6), cVar2 != '\0')) {
    *param_4 = 0;
    FUN_1158_2273();
    FUN_1140_77b2();
  }
  if (*param_4 == 0x11) {
    uVar7 = (undefined2)((ulong)param_2 >> 0x10);
    iVar5 = (int)param_2;
    if (*(char *)((int)*(undefined4 *)(iVar5 + 0x1a4) + 0x29) == '\0') {
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
          cVar2 = FUN_1158_2255(0x7c8,(char *)s_iTime_1160_10dc + 4,uStack_a);
          if (cVar2 == '\0') {
            FUN_1100_1524((int)uStack_10e,(int)((ulong)uStack_10e >> 0x10));
            FUN_1158_17e7();
          }
          else {
            puStack_112 = (undefined4 *)FUN_1158_2273(0x7c8,(char *)s_iTime_1160_10dc + 4,uStack_a);
            uVar9 = 0x1158;
            uVar8 = 0x222e;
            puVar1 = (undefined2 *)((int)*puStack_112 + 0x44);
            lStack_116 = (*(code *)*puVar1)();
            FUN_1150_10d4((longdouble)lStack_116,uVar8,uVar9);
            FUN_1158_17e7();
          }
        }
        else {
          puStack_112 = (undefined4 *)FUN_1158_2273(0xa58,(char *)s_iTime_1160_10dc + 4,uStack_a);
          uVar9 = 0x1158;
          uVar8 = 0x2223;
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
      cVar2 = FUN_1158_2255(0x1b14,0x1120,param_5,param_6);
      uVar10 = CONCAT22(unaff_CS,iStack_6);
      if (cVar2 != '\0') {
        uStack_10e = FUN_1158_2273(0x1b14,0x1120,param_5,param_6);
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
        FUN_1158_17cd(0x2234,uVar8);
        FUN_1158_184c(acStack_10a,unaff_SS);
        FUN_1158_184c(0x2234,0x1158);
        FUN_1138_1d8c((int)*(undefined4 *)(iVar5 + 0x1a4),
                      (int)((ulong)*(undefined4 *)(iVar5 + 0x1a4) >> 0x10),puVar11,uVar9);
        uStack_10e = FUN_1140_33d5(iVar5,uVar7);
        uVar8 = (undefined2)((ulong)*(undefined4 *)(iVar5 + 0x1a4) >> 0x10);
        iVar6 = (int)*(undefined4 *)(iVar5 + 0x1a4);
        FUN_1128_2099(uStack_10e,*(undefined2 *)(iVar6 + 0x34),*(undefined2 *)(iVar6 + 0x36));
        puVar11 = auStack_20e;
        uVar8 = unaff_SS;
        FUN_1138_1d53((int)*(undefined4 *)(iVar5 + 0x1a4),
                      (int)((ulong)*(undefined4 *)(iVar5 + 0x1a4) >> 0x10));
        uVar8 = FUN_1128_2003(uStack_10e,puVar11,uVar8);
        FUN_1138_17bf((int)*(undefined4 *)(iVar5 + 0x1a4),
                      (int)((ulong)*(undefined4 *)(iVar5 + 0x1a4) >> 0x10),uVar8);
        puVar11 = auStack_20e;
        FUN_1138_1d53((int)*(undefined4 *)(iVar5 + 0x1a4),
                      (int)((ulong)*(undefined4 *)(iVar5 + 0x1a4) >> 0x10));
        iVar6 = FUN_1128_204e(uStack_10e,puVar11,unaff_SS);
        iVar4 = (int)((long)iVar6 * 3);
        if ((long)iVar4 != (long)iVar6 * 3) {
          iVar4 = FUN_1158_043e(0x1128);
        }
        FUN_1138_17e1((int)*(undefined4 *)(iVar5 + 0x1a4),
                      (int)((ulong)*(undefined4 *)(iVar5 + 0x1a4) >> 0x10),iVar4 / 2);
        uVar10 = FUN_1138_1a06(iVar5,uVar7,iStack_6,(int)((ulong)uVar10 >> 0x10));
        iStack_6 = (int)uVar10;
        uStack_10e._2_2_ = (undefined2)((ulong)*(undefined4 *)(iVar5 + 0x1a4) >> 0x10);
        uStack_10e._0_2_ = (int)*(undefined4 *)(iVar5 + 0x1a4);
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
        FUN_1138_1c77((int)*(undefined4 *)(iVar5 + 0x1a4),
                      (int)((ulong)*(undefined4 *)(iVar5 + 0x1a4) >> 0x10),1);
      }
    }
  }
  return;
}



/* ---- FUN_1098_26cd @ 1098:26cd  (264 octets) ---- */

void __stdcall16far FUN_1098_26cd(undefined4 param_1,undefined2 param_2,undefined2 param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  undefined4 uVar8;
  
  FUN_1158_0444();
  uVar7 = (undefined2)((ulong)param_1 >> 0x10);
  uVar6 = (undefined2)param_1;
  iVar2 = FUN_1148_527d(uVar6,uVar7);
  iVar3 = iVar2 + -1;
  if (SBORROW2(iVar2,1)) {
    iVar3 = FUN_1158_043e(0x1148);
  }
  if (-1 < iVar3) {
    iVar2 = 0;
    while( true ) {
      uVar8 = FUN_1148_5246(uVar6,uVar7,iVar2);
      cVar1 = FUN_1158_2255(0x22,0x10d0,uVar8);
      if (cVar1 == '\0') {
        uVar8 = FUN_1148_5246(uVar6,uVar7,iVar2);
        cVar1 = FUN_1158_2255(0x1b14,0x1120,uVar8);
        if (cVar1 != '\0') {
          uVar8 = FUN_1148_5246(uVar6,uVar7,iVar2);
          uVar8 = FUN_1158_2273(0x1b14,0x1120,uVar8);
          uVar5 = param_3;
          uVar4 = FUN_1158_0416((int)uVar8);
          FUN_1138_1ed5(uVar8,uVar4,uVar5);
        }
      }
      else {
        uVar8 = FUN_1148_5246(uVar6,uVar7,iVar2);
        uVar8 = FUN_1158_2273(0x22,0x10d0,uVar8);
        uVar5 = param_3;
        uVar4 = FUN_1158_0416((int)uVar8);
        FUN_1138_1ed5(uVar8,uVar4,uVar5);
      }
      if (iVar2 == iVar3) break;
      iVar2 = iVar2 + 1;
    }
  }
  return;
}



/* ---- FUN_1098_27d5 @ 1098:27d5  (335 octets) ---- */

void __stdcall16far FUN_1098_27d5(undefined4 param_1,char param_2)

{
  int iVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  undefined2 uVar10;
  undefined2 uVar11;
  undefined2 uVar12;
  bool bVar13;
  bool bVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined2 uVar17;
  
  uVar17 = 0x27e0;
  FUN_1158_0444();
  uVar11 = (undefined2)((ulong)param_1 >> 0x10);
  uVar10 = (undefined2)param_1;
  iVar5 = FUN_1148_527d(uVar10,uVar11);
  iVar6 = iVar5 + -1;
  if (SBORROW2(iVar5,1)) {
    iVar6 = FUN_1158_043e(0x1148,uVar17);
  }
  if (-1 < iVar6) {
    iVar5 = 0;
    while( true ) {
      uVar15 = FUN_1148_5246(uVar10,uVar11,iVar5);
      cVar2 = FUN_1158_2255(0x626,0x10d0,uVar15);
      uVar15 = FUN_1148_5246(uVar10,uVar11,iVar5);
      cVar3 = FUN_1158_2255(0x1b14,0x1120,uVar15);
      uVar15 = FUN_1148_5246(uVar10,uVar11,iVar5);
      cVar4 = FUN_1158_2255(0x22,0x10d0,uVar15);
      if ((cVar4 != '\0' || cVar3 != '\0') || cVar2 != '\0') {
        if (param_2 == '\0') {
          uVar15 = FUN_1148_5246(uVar10,uVar11,iVar5);
          uVar17 = (undefined2)((ulong)uVar15 >> 0x10);
          iVar7 = *(int *)((int)uVar15 + 0xc);
          uVar8 = *(uint *)((int)uVar15 + 0xe);
          bVar14 = false;
          if ((int)uVar8 < 0) {
            bVar13 = iVar7 != 0;
            iVar7 = -iVar7;
            iVar1 = ~uVar8 + 1;
            bVar14 = SBORROW2(~uVar8,-1) != SBORROW2(iVar1,(uint)bVar13);
            uVar8 = iVar1 - (uint)bVar13;
          }
          uVar15 = CONCAT22(uVar8,iVar7);
          if (bVar14) {
            uVar15 = FUN_1158_043e(0x1148);
          }
          uVar16 = FUN_1148_5246(uVar10,uVar11,iVar5);
          uVar17 = (undefined2)((ulong)uVar16 >> 0x10);
          *(undefined2 *)((int)uVar16 + 0xc) = (int)uVar15;
          *(undefined2 *)((int)uVar16 + 0xe) = (int)((ulong)uVar15 >> 0x10);
        }
        else {
          uVar12 = 0x1148;
          uVar15 = FUN_1148_5246(uVar10,uVar11,iVar5);
          uVar17 = (undefined2)((ulong)uVar15 >> 0x10);
          iVar7 = *(int *)((int)uVar15 + 0xc);
          uVar8 = *(uint *)((int)uVar15 + 0xe);
          bVar14 = false;
          if ((int)uVar8 < 0) {
            bVar13 = iVar7 != 0;
            iVar7 = -iVar7;
            iVar1 = ~uVar8 + 1;
            bVar14 = SBORROW2(~uVar8,-1) != SBORROW2(iVar1,(uint)bVar13);
            uVar8 = iVar1 - (uint)bVar13;
          }
          uVar15 = CONCAT22(uVar8,iVar7);
          if (bVar14) {
            uVar12 = 0x1158;
            uVar15 = FUN_1158_043e(0x1148);
          }
          uVar9 = ~(uint)((ulong)uVar15 >> 0x10);
          uVar8 = (uint)((int)uVar15 != 0);
          iVar7 = uVar9 + 1;
          uVar15 = CONCAT22(iVar7 - uVar8,-(int)uVar15);
          if (SBORROW2(uVar9,-1) != SBORROW2(iVar7,uVar8)) {
            uVar15 = FUN_1158_043e(uVar12);
          }
          uVar16 = FUN_1148_5246(uVar10,uVar11,iVar5);
          uVar17 = (undefined2)((ulong)uVar16 >> 0x10);
          *(undefined2 *)((int)uVar16 + 0xc) = (int)uVar15;
          *(undefined2 *)((int)uVar16 + 0xe) = (int)((ulong)uVar15 >> 0x10);
        }
      }
      if (iVar5 == iVar6) break;
      iVar5 = iVar5 + 1;
    }
  }
  return;
}



/* ---- FUN_1098_2924 @ 1098:2924  (300 octets) ---- */

void __stdcall16far FUN_1098_2924(undefined4 param_1,undefined param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined4 uVar6;
  
  FUN_1158_0444();
  uVar5 = (undefined2)((ulong)param_1 >> 0x10);
  uVar4 = (undefined2)param_1;
  iVar2 = FUN_1148_527d(uVar4,uVar5);
  iVar3 = iVar2 + -1;
  if (SBORROW2(iVar2,1)) {
    iVar3 = FUN_1158_043e(0x1148);
  }
  if (-1 < iVar3) {
    iVar2 = 0;
    while( true ) {
      uVar6 = FUN_1148_5246(uVar4,uVar5,iVar2);
      cVar1 = FUN_1158_2255(0x22,0x10d0,uVar6);
      if (cVar1 == '\0') {
        uVar6 = FUN_1148_5246(uVar4,uVar5,iVar2);
        cVar1 = FUN_1158_2255(0xba2,0x10d0,uVar6);
        if (cVar1 == '\0') {
          uVar6 = FUN_1148_5246(uVar4,uVar5,iVar2);
          cVar1 = FUN_1158_2255(0x626,0x10d0,uVar6);
          if (cVar1 != '\0') {
            uVar6 = FUN_1148_5246(uVar4,uVar5,iVar2);
            uVar6 = FUN_1158_2273(0x626,0x10d0,uVar6);
            FUN_10d0_2570(uVar6,param_2);
          }
        }
        else {
          uVar6 = FUN_1148_5246(uVar4,uVar5,iVar2);
          uVar6 = FUN_1158_2273(0xba2,0x10d0,uVar6);
          FUN_10d0_2af1(uVar6,param_2);
        }
      }
      else {
        uVar6 = FUN_1148_5246(uVar4,uVar5,iVar2);
        uVar6 = FUN_1158_2273(0x22,0x10d0,uVar6);
        FUN_10d0_1afe(uVar6,param_2);
      }
      if (iVar2 == iVar3) break;
      iVar2 = iVar2 + 1;
    }
  }
  return;
}



/* ---- FUN_1098_2a50 @ 1098:2a50  (136 octets) ---- */

void __stdcall16far FUN_1098_2a50(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined4 uVar6;
  undefined2 uVar7;
  
  uVar7 = 0x2a5b;
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
        FUN_1098_1508(uVar4,uVar5,uVar6);
      }
      if (iVar2 == iVar3) break;
      iVar2 = iVar2 + 1;
    }
  }
  return;
}



/* ---- TFormSCDD_Decisions_VerifierBtnClick @ 1098:2ad8  (24 octets) ---- */

void __stdcall16far TFormSCDD_Decisions_VerifierBtnClick(undefined4 param_1)

{
  FUN_1158_0444();
  FUN_1098_38db((int)param_1,(int)((ulong)param_1 >> 0x10));
  return;
}



/* ---- TFormSCDD_Decisions_DefautBtnClick @ 1098:2af0  (24 octets) ---- */

void __stdcall16far TFormSCDD_Decisions_DefautBtnClick(undefined4 param_1)

{
  FUN_1158_0444();
  FUN_1098_323b((int)param_1,(int)((ulong)param_1 >> 0x10));
  return;
}



/* ---- TFormSCDD_Decisions_InitialBtnClick @ 1098:2b08  (14 octets) ---- */

void __stdcall16far TFormSCDD_Decisions_InitialBtnClick(void)

{
  FUN_1158_0444();
  return;
}



/* ---- FUN_1098_2b16 @ 1098:2b16  (159 octets) ---- */

void __stdcall16far FUN_1098_2b16(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  
  FUN_1158_0444();
  uVar4 = (undefined2)((ulong)param_1 >> 0x10);
  iVar2 = (int)param_1;
  uVar5 = (undefined2)((ulong)*(undefined4 *)(iVar2 + 0x180) >> 0x10);
  uVar3 = (undefined2)*(undefined4 *)(iVar2 + 0x180);
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
  uVar5 = (undefined2)((ulong)*(undefined4 *)(iVar2 + 0x19c) >> 0x10);
  uVar3 = (undefined2)*(undefined4 *)(iVar2 + 0x19c);
  cVar1 = FUN_10d8_3202(uVar3,uVar5);
  if (cVar1 != '\0') {
    FUN_10d8_31d2(uVar3,uVar5);
    FUN_10e0_2ed2(uVar3,uVar5,0);
  }
  return;
}



/* ---- FUN_1098_2bbf @ 1098:2bbf  (368 octets) ---- */

void __stdcall16far FUN_1098_2bbf(undefined4 param_1)

{
  char cVar1;
  undefined2 uVar2;
  int iVar3;
  undefined2 uVar4;
  undefined2 uStack_10;
  undefined *puStack_e;
  undefined2 uStack_c;
  undefined2 uStack_a;
  undefined2 local_8;
  undefined2 local_6;
  
  _local_8 = CONCAT22(0x2bca,local_8);
  FUN_1158_0444();
  uVar4 = (undefined2)((ulong)param_1 >> 0x10);
  iVar3 = (int)param_1;
  *(undefined *)((int)*(undefined4 *)(iVar3 + 0x184) + 0x23) = *(undefined *)(iVar3 + 0x368);
  *(undefined *)((int)*(undefined4 *)(iVar3 + 0x198) + 0x23) = *(undefined *)(iVar3 + 0x368);
  *(undefined *)((int)*(undefined4 *)(iVar3 + 0x1a0) + 0x23) = *(undefined *)(iVar3 + 0x368);
  uStack_a = 0x1158;
  uStack_c = 0x2bb5;
  uStack_10 = DAT_1160_1858;
  local_6 = (undefined2)((ulong)*(undefined4 *)(iVar3 + 0x180) >> 0x10);
  local_8 = (undefined2)*(undefined4 *)(iVar3 + 0x180);
  DAT_1160_1858 = &uStack_10;
  puStack_e = &stack0xfffe;
  FUN_10d8_31d2(local_8,local_6);
  uVar2 = FUN_1098_10ac(iVar3,uVar4);
  FUN_10e0_2ffb(local_8,local_6,uVar2);
  cVar1 = FUN_1098_10ac(iVar3,uVar4);
  if (cVar1 == '\0') {
    FUN_10e0_2ed2(local_8,local_6,1);
  }
  else {
    FUN_10e0_2ed2(local_8,local_6,0);
  }
  FUN_10d8_31bf(local_8,local_6);
  local_6 = (undefined2)((ulong)*(undefined4 *)(iVar3 + 0x194) >> 0x10);
  local_8 = (undefined2)*(undefined4 *)(iVar3 + 0x194);
  FUN_10d8_31d2(local_8,local_6);
  uVar2 = FUN_1098_10ac(iVar3,uVar4);
  FUN_10e0_2ffb(local_8,local_6,uVar2);
  cVar1 = FUN_1098_10ac(iVar3,uVar4);
  if (cVar1 == '\0') {
    FUN_10e0_2ed2(local_8,local_6,1);
  }
  else {
    FUN_10e0_2ed2(local_8,local_6,0);
  }
  FUN_10d8_31bf(local_8,local_6);
  local_6 = (undefined2)((ulong)*(undefined4 *)(iVar3 + 0x19c) >> 0x10);
  local_8 = (undefined2)*(undefined4 *)(iVar3 + 0x19c);
  FUN_10d8_31d2(local_8,local_6);
  uVar2 = FUN_1098_10ac(iVar3,uVar4);
  FUN_10e0_2ffb(local_8,local_6,uVar2);
  cVar1 = FUN_1098_10ac(iVar3,uVar4);
  if (cVar1 == '\0') {
    FUN_10e0_2ed2(local_8,local_6,1);
  }
  else {
    FUN_10e0_2ed2(local_8,local_6,0);
  }
  FUN_10d8_31bf(local_8,local_6);
  DAT_1160_1858 = (undefined2 *)uStack_10;
  return;
}



/* ---- FUN_1098_3169 @ 1098:3169  (167 octets) ---- */

byte __stdcall16far FUN_1098_3169(undefined4 param_1)

{
  undefined2 *puVar1;
  undefined uVar2;
  byte bVar3;
  int iVar4;
  undefined2 uVar5;
  undefined4 *puVar6;
  
  FUN_1158_0444();
  uVar5 = (undefined2)((ulong)param_1 >> 0x10);
  iVar4 = (int)param_1;
  puVar6 = (undefined4 *)
           FUN_10d8_3b9b((int)*(undefined4 *)(iVar4 + 0x180),
                         (int)((ulong)*(undefined4 *)(iVar4 + 0x180) >> 0x10),0x315e,0x1158);
  puVar1 = (undefined2 *)((int)*puVar6 + 0x38);
  uVar2 = (*(code *)*puVar1)(0x10d8,puVar6);
  *(undefined *)(iVar4 + 0x369) = uVar2;
  if (*(char *)(iVar4 + 0x368) == '\0') {
    bVar3 = 0;
  }
  else {
    bVar3 = *(byte *)((int)*(undefined4 *)(iVar4 + 0x180) + 0x3e) |
            *(byte *)((int)*(undefined4 *)(iVar4 + 0x194) + 0x3e) |
            *(byte *)((int)*(undefined4 *)(iVar4 + 0x19c) + 0x3e);
    if (bVar3 != 0) {
      *(undefined *)(iVar4 + 0x369) = 0;
    }
    FUN_1138_1c77((int)*(undefined4 *)(iVar4 + 0x2f0),
                  (int)((ulong)*(undefined4 *)(iVar4 + 0x2f0) >> 0x10),bVar3);
  }
  FUN_1120_6e11((int)*(undefined4 *)(iVar4 + 0x304),
                (int)((ulong)*(undefined4 *)(iVar4 + 0x304) >> 0x10),*(undefined *)(iVar4 + 0x369));
  return bVar3;
}



/* ---- FUN_1098_323b @ 1098:323b  (463 octets) ---- */

void __stdcall16far FUN_1098_323b(undefined4 param_1)

{
  undefined2 *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  undefined2 uVar8;
  undefined4 *puVar9;
  
  uVar8 = 0x1158;
  FUN_1158_0444();
  uVar6 = (undefined2)((ulong)param_1 >> 0x10);
  iVar4 = (int)param_1;
  uVar7 = (undefined2)((ulong)*(undefined4 *)(iVar4 + 0x180) >> 0x10);
  iVar5 = (int)*(undefined4 *)(iVar4 + 0x180);
  if (*(char *)(iVar5 + 0x181) == '\0') {
    FUN_10d8_533c(iVar5,uVar7);
    uVar8 = 0x10d8;
    FUN_10d8_558b(iVar5,uVar7);
  }
  uVar7 = (undefined2)((ulong)*(undefined4 *)(iVar4 + 0x194) >> 0x10);
  iVar5 = (int)*(undefined4 *)(iVar4 + 0x194);
  if (*(char *)(iVar5 + 0x181) == '\0') {
    FUN_10d8_533c(iVar5,uVar7);
    uVar8 = 0x10d8;
    FUN_10d8_558b(iVar5,uVar7);
  }
  uVar7 = (undefined2)((ulong)*(undefined4 *)(iVar4 + 0x19c) >> 0x10);
  iVar5 = (int)*(undefined4 *)(iVar4 + 0x19c);
  if (*(char *)(iVar5 + 0x181) == '\0') {
    FUN_10d8_533c(iVar5,uVar7);
    uVar8 = 0x10d8;
    FUN_10d8_558b(iVar5,uVar7);
  }
  puVar9 = (undefined4 *)
           FUN_10d8_3b9b((int)*(undefined4 *)(iVar4 + 0x180),
                         (int)((ulong)*(undefined4 *)(iVar4 + 0x180) >> 0x10),0x3210,uVar8);
  puVar1 = (undefined2 *)((int)*puVar9 + 0x44);
  (*(code *)*puVar1)(0x10d8,puVar9);
  uVar7 = FUN_1158_0416();
  FUN_1120_5c2e((int)*(undefined4 *)(iVar4 + 0x358),
                (int)((ulong)*(undefined4 *)(iVar4 + 0x358) >> 0x10),uVar7);
  uVar2 = FUN_1120_5c07((int)*(undefined4 *)(iVar4 + 0x358),
                        (int)((ulong)*(undefined4 *)(iVar4 + 0x358) >> 0x10));
  uVar3 = uVar2 & 0xff00;
  if (uVar2 == 1) {
    uVar3 = uVar3 + 1;
  }
  uVar2 = uVar3 & 0xff00;
  if (2 < DAT_1160_1e06) {
    uVar2 = uVar2 + 1;
  }
  uVar7 = 0x1138;
  FUN_1138_1c77((int)*(undefined4 *)(iVar4 + 0x35c),
                (int)((ulong)*(undefined4 *)(iVar4 + 0x35c) >> 0x10),
                CONCAT11((char)(uVar2 >> 8),(byte)uVar2 & (byte)uVar3));
  if (DAT_1160_1e06 == 4) {
    uVar7 = 0x10f0;
    FUN_10f0_178b((int)*(undefined4 *)(iVar4 + 0x350),
                  (int)((ulong)*(undefined4 *)(iVar4 + 0x350) >> 0x10),8,0);
  }
  puVar9 = (undefined4 *)
           FUN_10d8_3b9b((int)*(undefined4 *)(iVar4 + 0x194),
                         (int)((ulong)*(undefined4 *)(iVar4 + 0x194) >> 0x10),0x322a,uVar7);
  puVar1 = (undefined2 *)((int)*puVar9 + 0x44);
  (*(code *)*puVar1)(0x10d8,puVar9);
  uVar7 = FUN_1158_0416();
  FUN_1120_5c2e((int)*(undefined4 *)(iVar4 + 0x244),
                (int)((ulong)*(undefined4 *)(iVar4 + 0x244) >> 0x10),uVar7);
  puVar9 = (undefined4 *)
           FUN_10d8_3b9b((int)*(undefined4 *)(iVar4 + 0x19c),
                         (int)((ulong)*(undefined4 *)(iVar4 + 0x19c) >> 0x10),0x322a,0x1120);
  puVar1 = (undefined2 *)((int)*puVar9 + 0x44);
  (*(code *)*puVar1)(0x10d8,puVar9);
  uVar7 = FUN_1158_0416();
  FUN_1120_5c2e((int)*(undefined4 *)(iVar4 + 0x22c),
                (int)((ulong)*(undefined4 *)(iVar4 + 0x22c) >> 0x10),uVar7);
  TFormSCDD_Decisions_ComboBox1Change(iVar4,uVar6,iVar4,uVar6);
  TFormSCDD_Decisions_ComboBox2Change(iVar4,uVar6,iVar4,uVar6);
  FUN_1098_2a50(iVar4,uVar6);
  FUN_1098_26cd(iVar4,uVar6,0xfffa,0xffff);
  FUN_1098_27d5(iVar4,uVar6,0);
  FUN_1098_3169(iVar4,uVar6);
  return;
}



/* ---- FUN_1098_3474 @ 1098:3474  (683 octets) ---- */

undefined __stdcall16far FUN_1098_3474(undefined4 param_1)

{
  undefined2 *puVar1;
  char cVar2;
  undefined extraout_AH;
  undefined extraout_AH_00;
  undefined uVar3;
  int iVar4;
  undefined2 uVar5;
  undefined2 uStack_50;
  undefined *puStack_4e;
  undefined2 uStack_4c;
  undefined2 uStack_4a;
  undefined4 uStack_48;
  undefined2 uStack_44;
  undefined4 uStack_42;
  undefined4 uStack_3e;
  undefined4 uStack_3a;
  undefined4 uStack_36;
  undefined4 uStack_32;
  int iStack_2e;
  int iStack_2c;
  undefined4 uStack_2a;
  int iStack_26;
  int iStack_24;
  undefined4 uStack_22;
  undefined4 uStack_1e;
  undefined4 uStack_1a;
  int iStack_16;
  int iStack_14;
  undefined4 uStack_12;
  undefined4 uStack_e;
  undefined2 uStack_6;
  
  uStack_6 = 0x347f;
  FUN_1158_0444();
  uVar3 = 0;
  uVar5 = (undefined2)((ulong)param_1 >> 0x10);
  iVar4 = (int)param_1;
  uStack_12._2_2_ = (char *)0x1158;
  uStack_12._0_2_ = (undefined4 *)0x3490;
  uStack_e._0_2_ = iVar4;
  uStack_e._2_2_ = uVar5;
  cVar2 = FUN_1098_38db();
  if (cVar2 != '\0') {
    uStack_e._2_2_ = (undefined2)((ulong)*(undefined4 *)(iVar4 + 0x180) >> 0x10);
    uStack_e._0_2_ = (int)*(undefined4 *)(iVar4 + 0x180);
    uStack_12._2_2_ = (char *)s_sDecimal_1160_1092 + 6;
    uStack_12._0_2_ = (undefined4 *)0x34a6;
    FUN_10d8_533c();
    uStack_e._2_2_ = (undefined2)((ulong)*(undefined4 *)(iVar4 + 0x194) >> 0x10);
    uStack_e._0_2_ = (int)*(undefined4 *)(iVar4 + 0x194);
    uStack_12._2_2_ = (char *)0x10d8;
    uStack_12._0_2_ = (undefined4 *)0x34b5;
    FUN_10d8_533c();
    uStack_e._2_2_ = (undefined2)((ulong)*(undefined4 *)(iVar4 + 0x19c) >> 0x10);
    uStack_e._0_2_ = (int)*(undefined4 *)(iVar4 + 0x19c);
    uStack_12._2_2_ = (char *)0x10d8;
    uStack_12._0_2_ = (undefined4 *)0x34c4;
    FUN_10d8_533c();
    uStack_e._2_2_ = (undefined2)((ulong)*(undefined4 *)(iVar4 + 0x2b4) >> 0x10);
    uStack_e._0_2_ = (int)*(undefined4 *)(iVar4 + 0x2b4);
    uStack_12._2_2_ = (char *)0x10d8;
    uStack_12._0_2_ = (undefined4 *)0x34d3;
    uStack_e = FUN_10f0_1733();
    uStack_12._2_2_ = (char *)0x10f0;
    uStack_12._0_2_ = (undefined4 *)0x340a;
    iStack_14 = (int)((ulong)*(undefined4 *)(iVar4 + 0x180) >> 0x10);
    iStack_16 = (int)*(undefined4 *)(iVar4 + 0x180);
    uStack_1a._2_2_ = 0x10f0;
    uStack_1a._0_2_ = (undefined4 *)0x34e9;
    uStack_12 = (undefined4 *)FUN_10d8_3b9b();
    puVar1 = (undefined2 *)((int)*uStack_12 + 0x60);
    iStack_14 = 0x10d8;
    iStack_16 = 0x34f6;
    (*(code *)*puVar1)();
    iStack_14 = (int)((ulong)*(undefined4 *)(iVar4 + 0x358) >> 0x10);
    iStack_16 = (int)*(undefined4 *)(iVar4 + 0x358);
    uStack_1a._2_2_ = 0x10d8;
    uStack_1a._0_2_ = (undefined4 *)0x3505;
    iStack_16 = FUN_1120_5c07();
    iStack_14 = iStack_16 >> 0xf;
    uStack_1a._2_2_ = 0x1120;
    uStack_1a._0_2_ = (undefined4 *)0x341c;
    uStack_1e._2_2_ = (undefined2)((ulong)*(undefined4 *)(iVar4 + 0x180) >> 0x10);
    uStack_1e._0_2_ = (undefined2)*(undefined4 *)(iVar4 + 0x180);
    uStack_22._2_2_ = 0x1120;
    uStack_22._0_2_ = (undefined4 *)0x351c;
    uStack_1a = (undefined4 *)FUN_10d8_3b9b();
    puVar1 = (undefined2 *)((int)*uStack_1a + 0x60);
    uStack_1e._2_2_ = 0x10d8;
    uStack_1e._0_2_ = 0x3529;
    (*(code *)*puVar1)();
    if (DAT_1160_1e06 == 4) {
      uStack_1e._2_2_ = (undefined2)((ulong)*(undefined4 *)(iVar4 + 0x350) >> 0x10);
      uStack_1e._0_2_ = (undefined2)*(undefined4 *)(iVar4 + 0x350);
      uStack_22._2_2_ = 0x10d8;
      uStack_22._0_2_ = (undefined4 *)0x353f;
      uStack_1e = FUN_10f0_1733();
      uStack_22._2_2_ = 0x10f0;
      uStack_22._0_2_ = (undefined4 *)0x342e;
      iStack_24 = (int)((ulong)*(undefined4 *)(iVar4 + 0x180) >> 0x10);
      iStack_26 = (int)*(undefined4 *)(iVar4 + 0x180);
      uStack_2a._2_2_ = 0x10f0;
      uStack_2a._0_2_ = (undefined4 *)0x3555;
      uStack_22 = (undefined4 *)FUN_10d8_3b9b();
      puVar1 = (undefined2 *)((int)*uStack_22 + 0x60);
      iStack_24 = 0x10d8;
      iStack_26 = 0x3562;
      (*(code *)*puVar1)();
    }
    else {
      uStack_1e._2_2_ = 0;
      uStack_1e._0_2_ = 8;
      uStack_22._2_2_ = 0x10d8;
      uStack_22._0_2_ = (undefined4 *)0x342e;
      iStack_24 = (int)((ulong)*(undefined4 *)(iVar4 + 0x180) >> 0x10);
      iStack_26 = (int)*(undefined4 *)(iVar4 + 0x180);
      uStack_2a._2_2_ = 0x10d8;
      uStack_2a._0_2_ = (undefined4 *)0x357c;
      uStack_22 = (undefined4 *)FUN_10d8_3b9b();
      puVar1 = (undefined2 *)((int)*uStack_22 + 0x60);
      iStack_24 = 0x10d8;
      iStack_26 = 0x3589;
      (*(code *)*puVar1)();
    }
    iStack_24 = (int)((ulong)*(undefined4 *)(iVar4 + 0x244) >> 0x10);
    iStack_26 = (int)*(undefined4 *)(iVar4 + 0x244);
    uStack_2a._2_2_ = 0x10d8;
    uStack_2a._0_2_ = (undefined4 *)0x3598;
    iStack_26 = FUN_1120_5c07();
    iStack_24 = iStack_26 >> 0xf;
    uStack_2a._2_2_ = 0x1120;
    uStack_2a._0_2_ = (undefined4 *)0x343c;
    iStack_2c = (int)((ulong)*(undefined4 *)(iVar4 + 0x194) >> 0x10);
    iStack_2e = (int)*(undefined4 *)(iVar4 + 0x194);
    uStack_32._2_2_ = 0x1120;
    uStack_32._0_2_ = (undefined4 *)0x35af;
    uStack_2a = (undefined4 *)FUN_10d8_3b9b();
    puVar1 = (undefined2 *)((int)*uStack_2a + 0x60);
    iStack_2c = 0x10d8;
    iStack_2e = 0x35bc;
    (*(code *)*puVar1)();
    iStack_2c = (int)((ulong)*(undefined4 *)(iVar4 + 0x22c) >> 0x10);
    iStack_2e = (int)*(undefined4 *)(iVar4 + 0x22c);
    uStack_32._2_2_ = 0x10d8;
    uStack_32._0_2_ = (undefined4 *)0x35cb;
    iStack_2e = FUN_1120_5c07();
    iStack_2c = iStack_2e >> 0xf;
    uStack_32._2_2_ = 0x1120;
    uStack_32._0_2_ = (undefined4 *)0x343c;
    uStack_36._2_2_ = (undefined2)((ulong)*(undefined4 *)(iVar4 + 0x19c) >> 0x10);
    uStack_36._0_2_ = (undefined2)*(undefined4 *)(iVar4 + 0x19c);
    uStack_3a._2_2_ = 0x1120;
    uStack_3a._0_2_ = (undefined4 *)0x35e2;
    uStack_32 = (undefined4 *)FUN_10d8_3b9b();
    puVar1 = (undefined2 *)((int)*uStack_32 + 0x60);
    uStack_36._2_2_ = 0x10d8;
    uStack_36._0_2_ = 0x35ef;
    (*(code *)*puVar1)();
    if (DAT_1160_1e06 < 2) {
      uStack_36._2_2_ = 0;
      uStack_36._0_2_ = 100;
      uStack_3a._2_2_ = 0x10d8;
      uStack_3a._0_2_ = (undefined4 *)0x344d;
      uStack_3e._2_2_ = (undefined2)((ulong)*(undefined4 *)(iVar4 + 0x194) >> 0x10);
      uStack_3e._0_2_ = (undefined2)*(undefined4 *)(iVar4 + 0x194);
      uStack_42._2_2_ = 0x10d8;
      uStack_42._0_2_ = (undefined4 *)0x3674;
      uStack_3a = (undefined4 *)FUN_10d8_3b9b();
      puVar1 = (undefined2 *)((int)*uStack_3a + 0x60);
      uStack_3e._2_2_ = 0x10d8;
      uStack_3e._0_2_ = 0x3681;
      (*(code *)*puVar1)();
      uStack_3e._2_2_ = 0;
      uStack_3e._0_2_ = 100;
      uStack_42._2_2_ = 0x10d8;
      uStack_42._0_2_ = (undefined4 *)0x344d;
      uStack_44 = (undefined2)((ulong)*(undefined4 *)(iVar4 + 0x19c) >> 0x10);
      uStack_48._2_2_ = (undefined2)*(undefined4 *)(iVar4 + 0x19c);
      uStack_48._0_2_ = (undefined4 *)0x10d8;
      uStack_4a = 0x3699;
      uStack_42 = (undefined4 *)FUN_10d8_3b9b();
      puVar1 = (undefined2 *)((int)*uStack_42 + 0x60);
      uStack_44 = 0x10d8;
      uStack_48._2_2_ = 0x36a6;
      (*(code *)*puVar1)();
      uVar3 = extraout_AH_00;
    }
    else {
      uStack_36._2_2_ = (undefined2)((ulong)*(undefined4 *)(iVar4 + 0x2d4) >> 0x10);
      uStack_36._0_2_ = (undefined2)*(undefined4 *)(iVar4 + 0x2d4);
      uStack_3a._2_2_ = 0x10d8;
      uStack_3a._0_2_ = (undefined4 *)0x3605;
      uStack_36 = FUN_10f0_1733();
      uStack_3a._2_2_ = 0x10f0;
      uStack_3a._0_2_ = (undefined4 *)0x344d;
      uStack_3e._2_2_ = (undefined2)((ulong)*(undefined4 *)(iVar4 + 0x194) >> 0x10);
      uStack_3e._0_2_ = (undefined2)*(undefined4 *)(iVar4 + 0x194);
      uStack_42._2_2_ = 0x10f0;
      uStack_42._0_2_ = (undefined4 *)0x361b;
      uStack_3a = (undefined4 *)FUN_10d8_3b9b();
      puVar1 = (undefined2 *)((int)*uStack_3a + 0x60);
      uStack_3e._2_2_ = 0x10d8;
      uStack_3e._0_2_ = 0x3628;
      (*(code *)*puVar1)();
      uStack_3e._2_2_ = (undefined2)((ulong)*(undefined4 *)(iVar4 + 0x2d8) >> 0x10);
      uStack_3e._0_2_ = (undefined2)*(undefined4 *)(iVar4 + 0x2d8);
      uStack_42._2_2_ = 0x10d8;
      uStack_42._0_2_ = (undefined4 *)0x3637;
      uStack_3e = FUN_10f0_1733();
      uStack_42._2_2_ = 0x10f0;
      uStack_42._0_2_ = (undefined4 *)0x344d;
      uStack_44 = (undefined2)((ulong)*(undefined4 *)(iVar4 + 0x19c) >> 0x10);
      uStack_48._2_2_ = (undefined2)*(undefined4 *)(iVar4 + 0x19c);
      uStack_48._0_2_ = (undefined4 *)0x10f0;
      uStack_4a = 0x364d;
      uStack_42 = (undefined4 *)FUN_10d8_3b9b();
      puVar1 = (undefined2 *)((int)*uStack_42 + 0x60);
      uStack_44 = 0x10d8;
      uStack_48._2_2_ = 0x365a;
      (*(code *)*puVar1)();
      uVar3 = extraout_AH;
    }
    uStack_44 = CONCAT11(uVar3,*(undefined *)(iVar4 + 0x369));
    uStack_48._2_2_ = 0x10d8;
    uStack_48._0_2_ = (undefined4 *)0x345f;
    uStack_4a = (undefined2)((ulong)*(undefined4 *)(iVar4 + 0x180) >> 0x10);
    uStack_4c = (undefined2)*(undefined4 *)(iVar4 + 0x180);
    puStack_4e = (undefined *)0x10d8;
    uStack_50 = 0x36c3;
    uStack_48 = (undefined4 *)FUN_10d8_3b9b();
    puVar1 = (undefined2 *)((int)*uStack_48 + 0x54);
    uStack_4a = 0x10d8;
    uStack_4c = 0x36d0;
    (*(code *)*puVar1)();
    uStack_4a = 0x10d8;
    uStack_4c = 0x346a;
    uStack_50 = DAT_1160_1858;
    DAT_1160_1858 = &uStack_50;
    puStack_4e = &stack0xfffe;
    FUN_10d8_54a0((int)*(undefined4 *)(iVar4 + 0x194),
                  (int)((ulong)*(undefined4 *)(iVar4 + 0x194) >> 0x10));
    FUN_10d8_54a0((int)*(undefined4 *)(iVar4 + 0x19c),
                  (int)((ulong)*(undefined4 *)(iVar4 + 0x19c) >> 0x10));
    FUN_10d8_54a0((int)*(undefined4 *)(iVar4 + 0x180),
                  (int)((ulong)*(undefined4 *)(iVar4 + 0x180) >> 0x10));
    uVar3 = 1;
    DAT_1160_1858 = (undefined2 *)uStack_50;
  }
  return uVar3;
}



/* ---- FUN_1098_38db @ 1098:38db  (3707 octets) ---- */

/* WARNING: Removing unreachable block (ram,0x109843b0) */
/* WARNING: Removing unreachable block (ram,0x10983afa) */
/* WARNING: Removing unreachable block (ram,0x10983a16) */
/* WARNING: Removing unreachable block (ram,0x109839b0) */
/* WARNING: Removing unreachable block (ram,0x10983a00) */
/* WARNING: Removing unreachable block (ram,0x10983ae3) */
/* WARNING: Removing unreachable block (ram,0x109841fd) */

int __stdcall16far FUN_1098_38db(undefined4 param_1)

{
  double dVar1;
  undefined2 *puVar2;
  undefined4 *puVar3;
  char cVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  undefined2 uVar8;
  byte extraout_AH;
  byte extraout_AH_00;
  byte bVar9;
  int iVar10;
  undefined4 *puVar11;
  undefined2 uVar12;
  undefined2 uVar13;
  char *pcVar14;
  undefined2 unaff_SS;
  bool bVar15;
  bool bVar16;
  longdouble in_ST0;
  longdouble lVar17;
  longdouble lVar18;
  longdouble lVar19;
  longdouble in_ST1;
  longdouble in_ST2;
  longdouble in_ST3;
  longdouble in_ST4;
  longdouble in_ST5;
  longdouble in_ST6;
  longdouble in_ST7;
  long lVar20;
  undefined4 uVar21;
  undefined *puVar22;
  undefined local_22e [248];
  uint local_136;
  uint local_134;
  undefined4 local_132;
  undefined local_12e;
  byte bStack_12d;
  byte local_12c;
  byte bStack_12b;
  uint local_12a;
  int local_128;
  int local_126;
  int local_124 [2];
  undefined8 local_120;
  undefined4 local_118;
  double local_114;
  undefined4 local_10c;
  undefined4 local_100;
  undefined4 local_f4;
  undefined4 local_e8;
  undefined4 local_dc;
  undefined4 local_d0;
  undefined4 local_c4;
  undefined4 local_b8;
  undefined4 local_ac;
  undefined4 local_a0;
  double local_9c;
  undefined4 local_94;
  double local_90;
  undefined4 local_88;
  undefined4 local_7c;
  undefined4 local_70;
  undefined4 local_64;
  undefined4 local_58;
  undefined4 local_4c;
  undefined4 local_40;
  undefined4 local_34;
  undefined4 local_28;
  uint local_1c;
  undefined4 local_1a;
  double local_16;
  undefined4 *local_e;
  int local_a;
  undefined2 local_8;
  undefined2 local_6;
  
  local_6 = 0x38e6;
  FUN_1158_0444();
  uVar12 = (undefined2)((ulong)param_1 >> 0x10);
  iVar10 = (int)param_1;
  local_120._0_2_ = *(undefined2 *)(iVar10 + 0x194);
  local_120._2_2_ = *(undefined2 *)(iVar10 + 0x196);
  local_120._4_2_ = *(undefined2 *)(iVar10 + 0x19c);
  local_120._6_2_ = *(undefined2 *)(iVar10 + 0x19e);
  local_128 = (int)((ulong)*(undefined4 *)(iVar10 + 0x180) >> 0x10);
  local_12a = (uint)*(undefined4 *)(iVar10 + 0x180);
  local_e = (undefined4 *)FUN_10d8_3b9b(local_12a,local_128,0x3735,0x1158);
  puVar2 = (undefined2 *)((int)*local_e + 0x40);
  (*(code *)*puVar2)(0x10d8,local_e);
  local_16 = (double)in_ST0;
  bVar9 = (byte)(((uint)(local_16 == 0.0) << 0xe) >> 8);
  bStack_12b = local_16 < 0.0 | (byte)(((uint)NAN(local_16) << 10) >> 8) | bVar9;
  local_12c = 0;
  if (local_16 < 0.0 || bVar9 != 0) {
    uVar13 = (undefined2)((ulong)local_e >> 0x10);
    *(undefined2 *)((undefined4 *)local_e + 3) = 1;
    *(undefined2 *)((int)(undefined4 *)local_e + 0xe) = 0;
  }
  lVar18 = in_ST7;
  local_126 = FUN_1120_5c07((int)*(undefined4 *)(iVar10 + 0x358),
                            (int)((ulong)*(undefined4 *)(iVar10 + 0x358) >> 0x10));
  pcVar14 = (char *)0x10d8;
  local_e = (undefined4 *)FUN_10d8_3b9b(local_12a,local_128,0x374e,0x1120);
  puVar2 = (undefined2 *)((int)*local_e + 0x44);
  local_1a = (*(code *)*puVar2)(0x10d8,local_e);
  puVar11 = (undefined4 *)local_e;
  uVar13 = (undefined2)((ulong)local_e >> 0x10);
  if (100 < local_1a) {
    *(undefined2 *)(puVar11 + 3) = 1;
    *(undefined2 *)((int)puVar11 + 0xe) = 0;
  }
  if (2 < DAT_1160_1e06) {
    if ((local_126 == 1) && ((long)local_1a < 1 || 0xf < (long)local_1a)) {
      *(undefined2 *)(puVar11 + 3) = 1;
      *(undefined2 *)((int)puVar11 + 0xe) = 0;
    }
    pcVar14 = (char *)0x10d8;
    local_e = (undefined4 *)FUN_10d8_3b9b(local_12a,local_128,0x3761,0x10d8);
    puVar2 = (undefined2 *)((int)*local_e + 0x40);
    (*(code *)*puVar2)(0x10d8,local_e);
    local_16 = (double)in_ST1;
    in_ST1 = in_ST2;
    in_ST2 = in_ST3;
    in_ST3 = in_ST4;
    in_ST4 = in_ST5;
    in_ST5 = in_ST6;
    in_ST6 = in_ST7;
    in_ST7 = lVar18;
    if (local_126 == 1) {
      bVar9 = (byte)(((uint)(local_16 == 5.0) << 0xe) >> 8);
      bStack_12d = local_16 < 5.0 | (byte)(((uint)NAN(local_16) << 10) >> 8) | bVar9;
      local_12e = 0;
      pcVar14 = (char *)s_sDecimal_1160_1092 + 6;
      bStack_12b = local_16 < 1.0 | (byte)(((uint)NAN(local_16) << 10) >> 8) |
                   (byte)(((uint)(local_16 == 1.0) << 0xe) >> 8);
      local_12c = 0;
      if (local_16 < 1.0 || local_16 >= 5.0 && bVar9 == 0) {
        uVar13 = (undefined2)((ulong)local_e >> 0x10);
        *(undefined2 *)((undefined4 *)local_e + 3) = 1;
        *(undefined2 *)((int)(undefined4 *)local_e + 0xe) = 0;
      }
    }
  }
  local_e = (undefined4 *)FUN_10d8_3b9b(local_12a,local_128,0x377d,pcVar14);
  puVar2 = (undefined2 *)((int)*local_e + 0x44);
  lVar20 = (*(code *)*puVar2)(0x10d8,local_e);
  if (lVar20 < 1 || 10000 < lVar20) {
    uVar13 = (undefined2)((ulong)local_e >> 0x10);
    *(undefined2 *)((undefined4 *)local_e + 3) = 1;
    *(undefined2 *)((int)(undefined4 *)local_e + 0xe) = 0;
  }
  if (2 < DAT_1160_1e06) {
    local_1a = lVar20;
    local_e = (undefined4 *)FUN_10d8_3b9b(local_12a,local_128,0x378f,0x10d8);
    puVar2 = (undefined2 *)((int)*local_e + 0x40);
    (*(code *)*puVar2)(0x10d8,local_e);
    local_16 = (double)in_ST1;
    bVar9 = (byte)(((uint)(local_16 == 100.0) << 0xe) >> 8);
    bStack_12d = local_16 < 100.0 | (byte)(((uint)NAN(local_16) << 10) >> 8) | bVar9;
    local_12e = 0;
    bStack_12b = local_16 < 0.0 | (byte)(((uint)NAN(local_16) << 10) >> 8) |
                 (byte)(((uint)(local_16 == 0.0) << 0xe) >> 8);
    local_12c = 0;
    if (local_16 < 0.0 || local_16 >= 100.0 && bVar9 == 0) {
      uVar13 = (undefined2)((ulong)local_e >> 0x10);
      *(undefined2 *)((undefined4 *)local_e + 3) = 1;
      *(undefined2 *)((int)(undefined4 *)local_e + 0xe) = 0;
    }
    lVar17 = lVar18;
    local_e = (undefined4 *)
              FUN_10d8_3b9b(local_12a,local_128,0x379e,(char *)s_sDecimal_1160_1092 + 6);
    puVar2 = (undefined2 *)((int)*local_e + 0x40);
    in_ST1 = in_ST3;
    in_ST3 = in_ST5;
    in_ST5 = in_ST7;
    in_ST7 = lVar17;
    (*(code *)*puVar2)(0x10d8,local_e);
    local_16 = (double)in_ST2;
    bVar9 = (byte)(((uint)(local_16 == 100.0) << 0xe) >> 8);
    bStack_12d = local_16 < 100.0 | (byte)(((uint)NAN(local_16) << 10) >> 8) | bVar9;
    local_12e = 0;
    bStack_12b = local_16 < 0.0 | (byte)(((uint)NAN(local_16) << 10) >> 8) |
                 (byte)(((uint)(local_16 == 0.0) << 0xe) >> 8);
    local_12c = 0;
    in_ST2 = in_ST4;
    in_ST4 = in_ST6;
    in_ST6 = lVar18;
    lVar18 = in_ST7;
    lVar20 = local_1a;
    if (local_16 < 0.0 || local_16 >= 100.0 && bVar9 == 0) {
      uVar13 = (undefined2)((ulong)local_e >> 0x10);
      *(undefined2 *)((undefined4 *)local_e + 3) = 1;
      *(undefined2 *)((int)(undefined4 *)local_e + 0xe) = 0;
    }
  }
  if (DAT_1160_1e06 == 4) {
    local_1a = lVar20;
    FUN_10f0_1733((int)*(undefined4 *)(iVar10 + 0x350),
                  (int)((ulong)*(undefined4 *)(iVar10 + 0x350) >> 0x10));
    local_1c = FUN_1158_0416();
    local_94 = FUN_10d8_3b9b(local_12a,local_128,0x37b2,0x1158);
    local_88 = FUN_10d8_3b9b(local_12a,local_128,0x37bc,0x10d8);
    local_7c = FUN_10d8_3b9b(local_12a,local_128,0x37c6,0x10d8);
    local_70 = FUN_10d8_3b9b(local_12a,local_128,0x37d0,0x10d8);
    local_64 = FUN_10d8_3b9b(local_12a,local_128,0x37da,0x10d8);
    local_58 = FUN_10d8_3b9b(local_12a,local_128,0x37e4,0x10d8);
    local_4c = FUN_10d8_3b9b(local_12a,local_128,0x37ee,0x10d8);
    local_40 = FUN_10d8_3b9b(local_12a,local_128,0x37f8,0x10d8);
    local_34 = FUN_10d8_3b9b(local_12a,local_128,0x3802,0x10d8);
    local_28 = FUN_10d8_3b9b(local_12a,local_128,0x380c,0x10d8);
    local_118 = FUN_10d8_3b9b(local_12a,local_128,0x3817,0x10d8);
    local_10c = FUN_10d8_3b9b(local_12a,local_128,0x3821,0x10d8);
    local_100 = FUN_10d8_3b9b(local_12a,local_128,0x382b,0x10d8);
    local_f4 = FUN_10d8_3b9b(local_12a,local_128,0x3835,0x10d8);
    local_e8 = FUN_10d8_3b9b(local_12a,local_128,0x383f,0x10d8);
    local_dc = FUN_10d8_3b9b(local_12a,local_128,0x3849,0x10d8);
    local_d0 = FUN_10d8_3b9b(local_12a,local_128,0x3853,0x10d8);
    local_c4 = FUN_10d8_3b9b(local_12a,local_128,0x385d,0x10d8);
    local_b8 = FUN_10d8_3b9b(local_12a,local_128,0x3867,0x10d8);
    local_ac = FUN_10d8_3b9b(local_12a,local_128,0x3871,0x10d8);
    local_a0 = FUN_10d8_3b9b(local_12a,local_128,0x387c,0x10d8);
    iVar6 = local_1c - 1;
    if (SBORROW2(local_1c,1)) {
      iVar6 = FUN_1158_043e(0x10d8);
    }
    local_12e = (undefined)iVar6;
    bStack_12d = (byte)((uint)iVar6 >> 8);
    local_12c = (char)bStack_12d >> 7;
    if ((CONCAT11(local_12c,local_12c) < 0x8000) &&
       ((0 < (int)CONCAT11(local_12c,local_12c) || (iVar6 != 0)))) {
      local_1a._0_2_ = 1;
      local_1a._2_2_ = 0;
      lVar17 = in_ST1;
      in_ST1 = in_ST2;
      in_ST2 = in_ST3;
      in_ST3 = in_ST4;
      in_ST4 = in_ST5;
      in_ST5 = in_ST6;
      in_ST6 = in_ST7;
      in_ST7 = lVar18;
      bStack_12b = local_12c;
      while( true ) {
        iVar6 = FUN_1158_0416();
        local_132 = (int *)CONCAT22(unaff_SS,&local_a0 + iVar6 * 3);
        puVar3 = (undefined4 *)(&local_a0)[iVar6 * 3];
        puVar2 = (undefined2 *)((int)*puVar3 + 0x40);
        (*(code *)*puVar2)(0x1158,(undefined4 *)puVar3,(int)((ulong)puVar3 >> 0x10));
        *(double *)((int *)local_132 + 2) = (double)lVar17;
        if ((local_1a._2_2_ == CONCAT11(bStack_12b,local_12c)) &&
           (lVar18 = in_ST7, (uint)local_1a == CONCAT11(bStack_12d,local_12e))) break;
        bVar15 = 0xfffe < (uint)local_1a;
        local_1a._0_2_ = (uint)local_1a + 1;
        local_1a._2_2_ = local_1a._2_2_ + (uint)bVar15;
        lVar17 = in_ST1;
        in_ST1 = in_ST2;
        in_ST2 = in_ST3;
        in_ST3 = in_ST4;
        in_ST4 = in_ST5;
        in_ST5 = in_ST6;
        in_ST6 = in_ST7;
      }
    }
    local_12e = (undefined)local_1c;
    bStack_12d = (byte)(local_1c >> 8);
    local_12c = (char)bStack_12d >> 7;
    if ((CONCAT11(local_12c,local_12c) < 0x8000) &&
       ((0 < (int)CONCAT11(local_12c,local_12c) || (local_1c != 0)))) {
      local_1a._0_2_ = 1;
      local_1a._2_2_ = 0;
      lVar17 = in_ST1;
      in_ST1 = in_ST2;
      in_ST2 = in_ST3;
      in_ST3 = in_ST4;
      in_ST4 = in_ST5;
      in_ST5 = in_ST6;
      in_ST6 = in_ST7;
      in_ST7 = lVar18;
      bStack_12b = local_12c;
      while( true ) {
        iVar6 = FUN_1158_0416();
        local_132 = (int *)CONCAT22(unaff_SS,local_124 + iVar6 * 6);
        puVar3 = *(undefined4 **)(local_124 + iVar6 * 6);
        puVar2 = (undefined2 *)((int)*puVar3 + 0x40);
        (*(code *)*puVar2)(0x1158,(undefined4 *)puVar3,(int)((ulong)puVar3 >> 0x10));
        *(double *)((int *)local_132 + 2) = (double)lVar17;
        if ((local_1a._2_2_ == CONCAT11(bStack_12b,local_12c)) &&
           ((uint)local_1a == CONCAT11(bStack_12d,local_12e))) break;
        bVar15 = 0xfffe < (uint)local_1a;
        local_1a._0_2_ = (uint)local_1a + 1;
        local_1a._2_2_ = local_1a._2_2_ + (uint)bVar15;
        lVar17 = in_ST1;
        in_ST1 = in_ST2;
        in_ST2 = in_ST3;
        in_ST3 = in_ST4;
        in_ST4 = in_ST5;
        in_ST5 = in_ST6;
        in_ST6 = in_ST7;
      }
    }
    bVar9 = (byte)(((uint)(local_90 == 0.0) << 0xe) >> 8);
    bStack_12b = local_90 < 0.0 | (byte)(((uint)NAN(local_90) << 10) >> 8) | bVar9;
    local_12c = 0;
    if (local_90 < 0.0 || bVar9 != 0) {
      uVar13 = (undefined2)((ulong)local_94 >> 0x10);
      *(undefined2 *)((int)local_94 + 0xc) = 1;
      *(undefined2 *)((int)local_94 + 0xe) = 0;
    }
    uVar7 = local_1c - 1;
    if (SBORROW2(local_1c,1)) {
      uVar7 = FUN_1158_043e((char *)s_sDecimal_1160_1092 + 6);
    }
    local_12e = (undefined)uVar7;
    bStack_12d = (byte)(uVar7 >> 8);
    local_12c = (char)bStack_12d >> 7;
    if ((-1 < (char)local_12c) && ((0 < CONCAT11(local_12c,local_12c) || (1 < uVar7)))) {
      local_1a._0_2_ = 2;
      local_1a._2_2_ = 0;
      bStack_12b = local_12c;
      while( true ) {
        iVar6 = FUN_1158_0416();
        local_132 = (int *)CONCAT22(unaff_SS,&local_a0 + iVar6 * 3);
        lVar18 = (longdouble)*(double *)((int)&local_9c + iVar6 * 0xc);
        if (SBORROW2(local_1a._2_2_,(uint)((uint)local_1a == 0)) != false) {
          FUN_1158_043e(0x1158);
        }
        iVar6 = FUN_1158_0416();
        lVar17 = (longdouble)*(double *)((int)&local_9c + iVar6 * 0xc);
        local_136 = (uint)(lVar18 < lVar17) << 8 | (uint)(NAN(lVar18) || NAN(lVar17)) << 10 |
                    (uint)(lVar18 == lVar17) << 0xe;
        dVar1 = *(double *)((int *)local_132 + 2);
        local_134 = (uint)(dVar1 < 0.0) << 8 | (uint)NAN(dVar1) << 10 | (uint)(dVar1 == 0.0) << 0xe;
        if ((dVar1 < 0.0 || (dVar1 == 0.0) != 0) || (lVar18 < lVar17 || (lVar18 == lVar17) != 0)) {
          uVar13 = (undefined2)((ulong)*(undefined4 *)local_132 >> 0x10);
          iVar6 = (int)*(undefined4 *)local_132;
          *(undefined2 *)(iVar6 + 0xc) = 1;
          *(undefined2 *)(iVar6 + 0xe) = 0;
        }
        if ((local_1a._2_2_ == CONCAT11(bStack_12b,local_12c)) &&
           ((uint)local_1a == CONCAT11(bStack_12d,local_12e))) break;
        bVar15 = 0xfffe < (uint)local_1a;
        local_1a._0_2_ = (uint)local_1a + 1;
        local_1a._2_2_ = local_1a._2_2_ + (uint)bVar15;
      }
    }
    if (local_114 < 0.0) {
      uVar13 = (undefined2)((ulong)local_118 >> 0x10);
      *(undefined2 *)((int)local_118 + 0xc) = 1;
      *(undefined2 *)((int)local_118 + 0xe) = 0;
    }
    local_12e = (undefined)local_1c;
    bStack_12d = (byte)(local_1c >> 8);
    local_12c = (char)bStack_12d >> 7;
    lVar18 = in_ST7;
    bStack_12b = local_12c;
    lVar20 = local_1a;
    if ((-1 < (char)local_12c) && ((0 < CONCAT11(local_12c,local_12c) || (1 < local_1c)))) {
      local_1a._0_2_ = 2;
      local_1a._2_2_ = 0;
      while( true ) {
        iVar6 = FUN_1158_0416();
        local_132 = (int *)CONCAT22(unaff_SS,local_124 + iVar6 * 6);
        lVar18 = (longdouble)*(double *)((int)&local_120 + iVar6 * 0xc);
        if (SBORROW2(local_1a._2_2_,(uint)((uint)local_1a == 0)) != false) {
          FUN_1158_043e(0x1158);
        }
        iVar6 = FUN_1158_0416();
        lVar17 = (longdouble)*(double *)((int)&local_120 + iVar6 * 0xc);
        local_136 = (uint)(lVar18 < lVar17) << 8 | (uint)(NAN(lVar18) || NAN(lVar17)) << 10 |
                    (uint)(lVar18 == lVar17) << 0xe;
        dVar1 = *(double *)((int *)local_132 + 2);
        local_134 = (uint)(dVar1 < 0.0) << 8 | (uint)NAN(dVar1) << 10 | (uint)(dVar1 == 0.0) << 0xe;
        if (dVar1 < 0.0 || lVar18 < lVar17) {
          uVar13 = (undefined2)((ulong)*(undefined4 *)local_132 >> 0x10);
          iVar6 = (int)*(undefined4 *)local_132;
          *(undefined2 *)(iVar6 + 0xc) = 1;
          *(undefined2 *)(iVar6 + 0xe) = 0;
        }
        if ((local_1a._2_2_ == CONCAT11(bStack_12b,local_12c)) &&
           (lVar18 = in_ST7, lVar20 = CONCAT22(local_1a._2_2_,(uint)local_1a),
           (uint)local_1a == CONCAT11(bStack_12d,local_12e))) break;
        bVar15 = 0xfffe < (uint)local_1a;
        local_1a._0_2_ = (uint)local_1a + 1;
        local_1a._2_2_ = local_1a._2_2_ + (uint)bVar15;
      }
    }
  }
  if (DAT_1160_1e06 < 3) {
    local_a = 1;
  }
  else {
    local_a = 2;
  }
  local_128 = local_a;
  if (local_a != 0) {
    local_124[1] = 1;
    while( true ) {
      local_1a = lVar20;
      iVar6 = FUN_1158_0416();
      uVar21 = *(undefined4 *)(local_124 + iVar6 * 2);
      local_12a = (uint)((ulong)uVar21 >> 0x10);
      local_12c = (byte)uVar21;
      bStack_12b = (byte)((ulong)uVar21 >> 8);
      local_e = (undefined4 *)FUN_10d8_3b9b((int)uVar21,local_12a,0x389f,0x1158);
      puVar2 = (undefined2 *)((int)*local_e + 0x40);
      (*(code *)*puVar2)(0x10d8,local_e);
      local_16 = (double)in_ST1;
      bVar9 = (byte)(((uint)(local_16 == 0.0) << 0xe) >> 8);
      bStack_12d = local_16 < 0.0 | (byte)(((uint)NAN(local_16) << 10) >> 8) | bVar9;
      local_12e = 0;
      if (local_16 < 0.0 || bVar9 != 0) {
        uVar13 = (undefined2)((ulong)local_e >> 0x10);
        *(undefined2 *)((undefined4 *)local_e + 3) = 1;
        *(undefined2 *)((int)(undefined4 *)local_e + 0xe) = 0;
      }
      lVar17 = lVar18;
      local_e = (undefined4 *)
                FUN_10d8_3b9b(CONCAT11(bStack_12b,local_12c),local_12a,0x38b0,
                              (char *)s_sDecimal_1160_1092 + 6);
      puVar2 = (undefined2 *)((int)*local_e + 0x44);
      lVar20 = (*(code *)*puVar2)(0x10d8,local_e);
      puVar11 = (undefined4 *)local_e;
      uVar13 = (undefined2)((ulong)local_e >> 0x10);
      if (local_124[1] == 1) {
        if (lVar20 < 1) {
          *(undefined2 *)(puVar11 + 3) = 1;
          *(undefined2 *)((int)puVar11 + 0xe) = 0;
        }
      }
      else if ((local_124[1] == 2) && (lVar20 < 0)) {
        *(undefined2 *)(puVar11 + 3) = 1;
        *(undefined2 *)((int)puVar11 + 0xe) = 0;
      }
      local_1a = lVar20;
      local_e = (undefined4 *)FUN_10d8_3b9b(CONCAT11(bStack_12b,local_12c),local_12a,0x38be,0x10d8);
      puVar2 = (undefined2 *)((int)*local_e + 0x40);
      in_ST1 = in_ST3;
      in_ST3 = in_ST5;
      in_ST5 = in_ST7;
      in_ST7 = lVar17;
      (*(code *)*puVar2)(0x10d8,local_e);
      local_16 = (double)in_ST2;
      local_124[0] = 0;
      lVar17 = in_ST7;
      if (local_124[1] == 1) {
        local_124[0] = FUN_1120_5c07((int)*(undefined4 *)(iVar10 + 0x244),
                                     (int)((ulong)*(undefined4 *)(iVar10 + 0x244) >> 0x10));
        in_ST2 = in_ST4;
        lVar19 = in_ST6;
      }
      else {
        in_ST2 = in_ST4;
        lVar19 = in_ST6;
        if (local_124[1] == 2) {
          local_124[0] = FUN_1120_5c07((int)*(undefined4 *)(iVar10 + 0x22c),
                                       (int)((ulong)*(undefined4 *)(iVar10 + 0x22c) >> 0x10));
          in_ST2 = in_ST4;
          lVar19 = in_ST6;
        }
      }
      in_ST6 = lVar18;
      in_ST4 = lVar19;
      lVar20 = local_1a;
      if ((local_124[0] == 0) || (local_124[0] == 2)) {
        local_132 = (int *)CONCAT22((uint)(local_16 < 100.0) << 8 | (uint)NAN(local_16) << 10 |
                                    (uint)(local_16 == 100.0) << 0xe,(int *)local_132);
        bStack_12d = local_16 < 0.0 | (byte)(((uint)NAN(local_16) << 10) >> 8) |
                     (byte)(((uint)(local_16 == 0.0) << 0xe) >> 8);
        local_12e = 0;
        lVar18 = in_ST7;
        if (local_16 < 0.0 || local_16 >= 100.0 && (local_16 == 100.0) == 0) {
          uVar13 = (undefined2)((ulong)local_e >> 0x10);
          *(undefined2 *)((undefined4 *)local_e + 3) = 1;
          *(undefined2 *)((int)(undefined4 *)local_e + 0xe) = 0;
        }
      }
      else {
        lVar18 = lVar17;
        if (local_124[0] == 1) {
          lVar19 = (longdouble)local_16;
          FUN_1158_1041();
          lVar17 = (longdouble)local_16;
          local_132 = (int *)CONCAT22((uint)(local_16 < 10.0) << 8 | (uint)NAN(local_16) << 10 |
                                      (uint)(local_16 == 10.0) << 0xe,
                                      (int *)((uint)(lVar19 < lVar17) << 8 |
                                              (uint)(NAN(lVar19) || NAN(lVar17)) << 10 |
                                             (uint)(lVar19 == lVar17) << 0xe));
          bVar9 = (byte)(((uint)(local_16 == 0.0) << 0xe) >> 8);
          bStack_12d = local_16 < 0.0 | (byte)(((uint)NAN(local_16) << 10) >> 8) | bVar9;
          local_12e = 0;
          lVar18 = in_ST7;
          lVar20 = local_1a;
          if (((local_16 < 0.0 || bVar9 != 0) || local_16 >= 10.0 && (local_16 == 10.0) == 0) ||
              (lVar19 == lVar17) == 0) {
            uVar13 = (undefined2)((ulong)local_e >> 0x10);
            *(undefined2 *)((undefined4 *)local_e + 3) = 1;
            *(undefined2 *)((int)(undefined4 *)local_e + 0xe) = 0;
          }
        }
      }
      if (local_124[1] == local_128) break;
      local_124[1] = local_124[1] + 1;
    }
  }
  bVar15 = false;
  local_1a = lVar20;
  iVar6 = FUN_1148_527d(iVar10,uVar12);
  uVar7 = iVar6 - 1;
  lVar20 = local_1a;
  if (SBORROW2(iVar6,1)) {
    uVar7 = FUN_1158_043e(0x1148);
    lVar20 = local_1a;
  }
  local_128 = (int)uVar7 >> 0xf;
  local_1a._0_2_ = 0;
  local_12a = uVar7;
  if (-1 < local_128) {
    local_1a._0_2_ = 0;
    local_1a._2_2_ = 0;
    bVar15 = false;
    while( true ) {
      uVar13 = FUN_1158_0416();
      uVar21 = FUN_1148_5246(iVar10,uVar12,uVar13);
      cVar4 = FUN_1158_2255(0x399,0x1138,uVar21);
      if (cVar4 != '\0') {
        uVar13 = FUN_1158_0416();
        uVar21 = FUN_1148_5246(iVar10,uVar12,uVar13);
        uVar21 = FUN_1158_2273(0x399,0x1138,uVar21);
        if (*(char *)((int)uVar21 + 0x29) != '\0') {
          uVar13 = FUN_1158_0416();
          uVar21 = FUN_1148_5246(iVar10,uVar12,uVar13);
          cVar4 = FUN_1158_2255(0xba2,0x10d0,uVar21);
          uVar13 = FUN_1158_0416();
          uVar21 = FUN_1148_5246(iVar10,uVar12,uVar13);
          cVar5 = FUN_1158_2255(0x22,0x10d0,uVar21);
          if (cVar5 != '\0' || cVar4 != '\0') {
            uVar13 = FUN_1158_0416();
            uVar21 = FUN_1148_5246(iVar10,uVar12,uVar13);
            cVar4 = FUN_1158_2255(0x22,0x10d0,uVar21);
            if (cVar4 != '\0') {
              uVar13 = FUN_1158_0416();
              uVar21 = FUN_1148_5246(iVar10,uVar12,uVar13);
              uVar21 = FUN_1158_2273(0x22,0x10d0,uVar21);
              local_12e = (undefined)uVar21;
              bStack_12d = (byte)((ulong)uVar21 >> 8);
              local_12c = (byte)((ulong)uVar21 >> 0x10);
              bStack_12b = (byte)((ulong)uVar21 >> 0x18);
              puVar22 = local_22e;
              uVar13 = unaff_SS;
              FUN_10d0_1a9f((int)uVar21,(int)((ulong)uVar21 >> 0x10));
              uVar21 = FUN_10d0_1a5f(CONCAT11(bStack_12d,local_12e),
                                     (int)(CONCAT13(bStack_12b,
                                                    CONCAT12(local_12c,
                                                             CONCAT11(bStack_12d,local_12e))) >>
                                          0x10));
              uVar21 = *(undefined4 *)((int)uVar21 + 0x1a);
              local_e = (undefined4 *)
                        FUN_10d8_3b9b((int)uVar21,(int)((ulong)uVar21 >> 0x10),puVar22,uVar13);
            }
            uVar13 = FUN_1158_0416();
            uVar21 = FUN_1148_5246(iVar10,uVar12,uVar13);
            cVar4 = FUN_1158_2255(0xba2,0x10d0,uVar21);
            if (cVar4 != '\0') {
              uVar13 = FUN_1158_0416();
              uVar21 = FUN_1148_5246(iVar10,uVar12,uVar13);
              uVar21 = FUN_1158_2273(0xba2,0x10d0,uVar21);
              local_12e = (undefined)uVar21;
              bStack_12d = (byte)((ulong)uVar21 >> 8);
              local_12c = (byte)((ulong)uVar21 >> 0x10);
              bStack_12b = (byte)((ulong)uVar21 >> 0x18);
              puVar22 = local_22e;
              uVar13 = unaff_SS;
              FUN_10d0_2a92((int)uVar21,(int)((ulong)uVar21 >> 0x10));
              uVar21 = FUN_10d0_2a52(CONCAT11(bStack_12d,local_12e),
                                     (int)(CONCAT13(bStack_12b,
                                                    CONCAT12(local_12c,
                                                             CONCAT11(bStack_12d,local_12e))) >>
                                          0x10));
              uVar21 = *(undefined4 *)((int)uVar21 + 0x1a);
              local_e = (undefined4 *)
                        FUN_10d8_3b9b((int)uVar21,(int)((ulong)uVar21 >> 0x10),puVar22,uVar13);
            }
            uVar13 = (undefined2)((ulong)local_e >> 0x10);
            puVar11 = (undefined4 *)local_e;
            if ((*(int *)((int)puVar11 + 0xe) == 0) && (*(int *)(puVar11 + 3) == 1)) {
              local_8 = 0xff;
              local_6 = 0;
              bVar15 = true;
            }
            else {
              local_8 = 0xfffa;
              local_6 = 0xffff;
            }
            if ((*(int *)((int)puVar11 + 0xe) == 0) && (*(int *)(puVar11 + 3) == 2)) {
              local_8 = 0x80;
              local_6 = 0;
            }
            *(undefined2 *)(puVar11 + 3) = 0;
            *(undefined2 *)((int)puVar11 + 0xe) = 0;
            uVar13 = FUN_1158_0416();
            uVar21 = FUN_1148_5246(iVar10,uVar12,uVar13);
            cVar4 = FUN_1158_2255(0x22,0x10d0,uVar21);
            if (cVar4 != '\0') {
              uVar13 = FUN_1158_0416();
              uVar21 = FUN_1148_5246(iVar10,uVar12,uVar13);
              uVar21 = FUN_1158_2273(0x22,0x10d0,uVar21);
              local_12e = (undefined)uVar21;
              bStack_12d = (byte)((ulong)uVar21 >> 8);
              local_12c = (byte)((ulong)uVar21 >> 0x10);
              bStack_12b = (byte)((ulong)uVar21 >> 0x18);
              uVar13 = local_6;
              uVar8 = FUN_1158_0416();
              FUN_1138_1ed5(CONCAT11(bStack_12d,local_12e),
                            (int)(CONCAT13(bStack_12b,
                                           CONCAT12(local_12c,CONCAT11(bStack_12d,local_12e))) >>
                                 0x10),uVar8,uVar13);
            }
            uVar13 = FUN_1158_0416();
            uVar21 = FUN_1148_5246(iVar10,uVar12,uVar13);
            cVar4 = FUN_1158_2255(0xba2,0x10d0,uVar21);
            if (cVar4 != '\0') {
              uVar13 = FUN_1158_0416();
              uVar21 = FUN_1148_5246(iVar10,uVar12,uVar13);
              uVar21 = FUN_1158_2273(0xba2,0x10d0,uVar21);
              local_12e = (undefined)uVar21;
              bStack_12d = (byte)((ulong)uVar21 >> 8);
              local_12c = (byte)((ulong)uVar21 >> 0x10);
              bStack_12b = (byte)((ulong)uVar21 >> 0x18);
              uVar13 = local_6;
              uVar8 = FUN_1158_0416();
              FUN_1138_1ed5(CONCAT11(bStack_12d,local_12e),
                            (int)(CONCAT13(bStack_12b,
                                           CONCAT12(local_12c,CONCAT11(bStack_12d,local_12e))) >>
                                 0x10),uVar8,uVar13);
            }
          }
        }
      }
      lVar20 = CONCAT22(local_1a._2_2_,(uint)local_1a);
      if ((local_1a._2_2_ == local_128) && ((uint)local_1a == local_12a)) break;
      bVar16 = 0xfffe < (uint)local_1a;
      local_1a._0_2_ = (uint)local_1a + 1;
      local_1a._2_2_ = local_1a._2_2_ + (uint)bVar16;
    }
  }
  if (*(char *)(iVar10 + 0x368) != '\0') {
    uVar7 = (uint)local_1a & 0xff00;
    if (!bVar15) {
      uVar7 = uVar7 + 1;
    }
    *(undefined *)(iVar10 + 0x369) = (char)uVar7;
    local_1a = lVar20;
    FUN_1120_6e11((int)*(undefined4 *)(iVar10 + 0x304),
                  (int)((ulong)*(undefined4 *)(iVar10 + 0x304) >> 0x10),
                  CONCAT11((char)(uVar7 >> 8),*(undefined *)(iVar10 + 0x369)));
    lVar20 = local_1a;
  }
  local_1a = lVar20;
  if (bVar15) {
    FUN_1010_36fb();
    bVar9 = extraout_AH;
  }
  else {
    FUN_1010_3675();
    bVar9 = extraout_AH_00;
  }
  iVar10 = (uint)bVar9 * 0x100;
  if (!bVar15) {
    iVar10 = iVar10 + 1;
  }
  return iVar10;
}



/* ---- TFormSCDD_Decisions_FormKeyPress @ 1098:4756  (27 octets) ---- */

void __stdcall16far
TFormSCDD_Decisions_FormKeyPress(undefined2 param_1_00,undefined2 param_2,char *param_1)

{
  FUN_1158_0444();
  if (*param_1 == '.') {
    *param_1 = ',';
  }
  return;
}



/* ---- TFormSCDD_Decisions_FormKeyDown @ 1098:4771  (63 octets) ---- */

void __stdcall16far TFormSCDD_Decisions_FormKeyDown(void)

{
  FUN_1158_0444();
  return;
}



/* ---- TFormSCDD_Decisions_HelpBtnClick @ 1098:47b0  (45 octets) ---- */

void __stdcall16far TFormSCDD_Decisions_HelpBtnClick(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined2 uVar3;
  
  FUN_1158_0444();
  uVar1 = *(undefined4 *)((int)param_1 + 0x314);
  uVar3 = (undefined2)((ulong)uVar1 >> 0x10);
  iVar2 = (int)uVar1;
  FUN_1140_77b2((int)DAT_1160_2c2a,(int)((ulong)DAT_1160_2c2a >> 0x10),*(undefined2 *)(iVar2 + 0xac)
                ,*(undefined2 *)(iVar2 + 0xae),1);
  return;
}



/* ---- FUN_1098_47dd @ 1098:47dd  (123 octets) ---- */

void __stdcall16far FUN_1098_47dd(undefined4 *param_1,undefined *param_2,undefined4 param_3)

{
  undefined2 *puVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  
  uVar4 = 0x47e8;
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



/* ---- TFormSCDD_Decisions_DBEdit1MouseDown @ 1098:4858  (142 octets) ---- */

void __stdcall16far TFormSCDD_Decisions_DBEdit1MouseDown(undefined4 param_1)

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
  if (param_2 == '\x01') {
    cVar2 = FUN_1158_2255(0x5c1,0x1138,param_3,param_4);
    if (cVar2 != '\0') {
      uVar4 = (undefined2)((ulong)DAT_1160_2c2a >> 0x10);
      iVar1 = (int)DAT_1160_2c2a;
      uVar6 = 8;
      uVar5 = FUN_1158_2273(0x5c1,0x1138,param_3,param_4);
      uVar3 = (undefined2)((ulong)uVar5 >> 0x10);
      FUN_1140_77b2(iVar1,uVar4,*(undefined2 *)((int)uVar5 + 0xac),
                    *(undefined2 *)((int)uVar5 + 0xae),uVar6);
      FUN_1140_7303(iVar1,uVar4);
      *(undefined2 *)(iVar1 + 0x6d) = 0x47dd;
      *(undefined2 *)(iVar1 + 0x6f) = (char *)s_sDecimal_1160_1092 + 6;
      *(undefined2 *)(iVar1 + 0x71) = (int)param_1;
      *(undefined2 *)(iVar1 + 0x73) = (int)((ulong)param_1 >> 0x10);
    }
  }
  return;
}



/* ---- TFormSCDD_Decisions_Panel17MouseDown @ 1098:48e6  (105 octets) ---- */

void __stdcall16far TFormSCDD_Decisions_Panel17MouseDown(void)

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



/* ---- TFormSCDD_Decisions_CopierBtnClick @ 1098:4ce9  (1 octets) ---- */

/* WARNING: Removing unreachable block (ram,0x10985991) */

void TFormSCDD_Decisions_CopierBtnClick(undefined2 param_1,undefined4 param_2)

{
  undefined2 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined2 uVar5;
  char *pcVar6;
  undefined2 uVar7;
  undefined2 unaff_SS;
  undefined uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined2 uVar11;
  undefined auStack_50c [256];
  undefined auStack_40c [256];
  undefined auStack_30c [256];
  undefined auStack_20c [256];
  int iStack_10c;
  undefined2 uStack_10a;
  undefined4 *puStack_108;
  int iStack_104;
  char acStack_102 [252];
  undefined2 uStack_6;
  
  uStack_6 = 0x4cf4;
  FUN_1158_0444();
  uVar5 = (undefined2)((ulong)param_2 >> 0x10);
  iVar4 = (int)param_2;
  uStack_10a = (undefined2)((ulong)*(undefined4 *)(iVar4 + 0x250) >> 0x10);
  iStack_10c = (int)*(undefined4 *)(iVar4 + 0x250);
  FUN_1120_49e3(iStack_10c,uStack_10a);
  puVar9 = auStack_20c;
  uVar11 = unaff_SS;
  FUN_1158_17cd(0x1dfa,0x1160);
  FUN_1158_184c(0x4ccb,0x1158);
  puVar10 = auStack_30c;
  uVar7 = unaff_SS;
  FUN_1138_1d53(iVar4,uVar5);
  FUN_1158_184c(puVar10,uVar7);
  FUN_1158_17e7(0xff,acStack_102,unaff_SS,puVar9,uVar11);
  puVar2 = (undefined4 *)*(undefined4 *)(iStack_10c + 0xec);
  puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
  (*(code *)*puVar1)(0x1158,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),acStack_102);
  acStack_102[0] = '\0';
  func_0x10984951(0x1158,&stack0xfffe,*(undefined2 *)(iVar4 + 0x2ac),*(undefined2 *)(iVar4 + 0x2ae),
                  0xff,acStack_102);
  puVar2 = (undefined4 *)*(undefined4 *)(iStack_10c + 0xec);
  puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
  (*(code *)*puVar1)((char *)s_sDecimal_1160_1092 + 6,(undefined4 *)puVar2,
                     (int)((ulong)puVar2 >> 0x10),acStack_102);
  acStack_102[0] = '\0';
  func_0x10984951((char *)s_sDecimal_1160_1092 + 6,&stack0xfffe,*(undefined2 *)(iVar4 + 0x2b0),
                  *(undefined2 *)(iVar4 + 0x2b2),0xff,acStack_102);
  func_0x10984951((char *)s_sDecimal_1160_1092 + 6,&stack0xfffe,*(undefined2 *)(iVar4 + 0x2b8),
                  *(undefined2 *)(iVar4 + 0x2ba),0xff,acStack_102);
  puVar2 = (undefined4 *)*(undefined4 *)(iStack_10c + 0xec);
  puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
  (*(code *)*puVar1)((char *)s_sDecimal_1160_1092 + 6,(undefined4 *)puVar2,
                     (int)((ulong)puVar2 >> 0x10),acStack_102);
  acStack_102[0] = '\0';
  func_0x10984951((char *)s_sDecimal_1160_1092 + 6,&stack0xfffe,*(undefined2 *)(iVar4 + 0x268),
                  *(undefined2 *)(iVar4 + 0x26a),0xff,acStack_102);
  func_0x10984951((char *)s_sDecimal_1160_1092 + 6,&stack0xfffe,*(undefined2 *)(iVar4 + 0x26c),
                  *(undefined2 *)(iVar4 + 0x26e),0xff,acStack_102);
  if (acStack_102[0] != '\0') {
    puVar2 = (undefined4 *)*(undefined4 *)(iStack_10c + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)((char *)s_sDecimal_1160_1092 + 6,(undefined4 *)puVar2,
                       (int)((ulong)puVar2 >> 0x10),acStack_102);
  }
  acStack_102[0] = '\0';
  func_0x10984951((char *)s_sDecimal_1160_1092 + 6,&stack0xfffe,*(undefined2 *)(iVar4 + 0x270),
                  *(undefined2 *)(iVar4 + 0x272),0xff,acStack_102);
  func_0x10984951((char *)s_sDecimal_1160_1092 + 6,&stack0xfffe,*(undefined2 *)(iVar4 + 0x274),
                  *(undefined2 *)(iVar4 + 0x276),0xff,acStack_102);
  if (acStack_102[0] != '\0') {
    puVar2 = (undefined4 *)*(undefined4 *)(iStack_10c + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)((char *)s_sDecimal_1160_1092 + 6,(undefined4 *)puVar2,
                       (int)((ulong)puVar2 >> 0x10),acStack_102);
  }
  acStack_102[0] = '\0';
  func_0x10984951((char *)s_sDecimal_1160_1092 + 6,&stack0xfffe,*(undefined2 *)(iVar4 + 0x218),
                  *(undefined2 *)(iVar4 + 0x21a),0xff,acStack_102);
  func_0x10984951((char *)s_sDecimal_1160_1092 + 6,&stack0xfffe,*(undefined2 *)(iVar4 + 0x358),
                  *(undefined2 *)(iVar4 + 0x35a),0xff,acStack_102);
  if (acStack_102[0] != '\0') {
    puVar2 = (undefined4 *)*(undefined4 *)(iStack_10c + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)((char *)s_sDecimal_1160_1092 + 6,(undefined4 *)puVar2,
                       (int)((ulong)puVar2 >> 0x10),acStack_102);
  }
  acStack_102[0] = '\0';
  func_0x10984951((char *)s_sDecimal_1160_1092 + 6,&stack0xfffe,*(undefined2 *)(iVar4 + 0x278),
                  *(undefined2 *)(iVar4 + 0x27a),0xff,acStack_102);
  func_0x10984951((char *)s_sDecimal_1160_1092 + 6,&stack0xfffe,*(undefined2 *)(iVar4 + 0x27c),
                  *(undefined2 *)(iVar4 + 0x27e),0xff,acStack_102);
  if (acStack_102[0] != '\0') {
    puVar2 = (undefined4 *)*(undefined4 *)(iStack_10c + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)((char *)s_sDecimal_1160_1092 + 6,(undefined4 *)puVar2,
                       (int)((ulong)puVar2 >> 0x10),acStack_102);
  }
  pcVar6 = (char *)0x1120;
  iVar3 = FUN_1120_5c07((int)*(undefined4 *)(iVar4 + 0x358),
                        (int)((ulong)*(undefined4 *)(iVar4 + 0x358) >> 0x10));
  if (iVar3 == 1) {
    acStack_102[0] = '\0';
    func_0x10984951(0x1120,&stack0xfffe,*(undefined2 *)(iVar4 + 0x35c),
                    *(undefined2 *)(iVar4 + 0x35e),0xff,acStack_102);
    pcVar6 = (char *)s_sDecimal_1160_1092 + 6;
    func_0x10984951((char *)s_sDecimal_1160_1092 + 6,&stack0xfffe,*(undefined2 *)(iVar4 + 0x360),
                    *(undefined2 *)(iVar4 + 0x362),0xff,acStack_102);
    if (acStack_102[0] != '\0') {
      puVar2 = (undefined4 *)*(undefined4 *)(iStack_10c + 0xec);
      puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
      (*(code *)*puVar1)((char *)s_sDecimal_1160_1092 + 6,(undefined4 *)puVar2,
                         (int)((ulong)puVar2 >> 0x10),acStack_102);
    }
  }
  if (*(char *)((int)*(undefined4 *)(iVar4 + 0x24c) + 0x29) != '\0') {
    acStack_102[0] = '\0';
    func_0x10984951(pcVar6,&stack0xfffe,*(undefined2 *)(iVar4 + 0x24c),
                    *(undefined2 *)(iVar4 + 0x24e),0xff,acStack_102);
    if (acStack_102[0] != '\0') {
      puVar2 = (undefined4 *)*(undefined4 *)(iStack_10c + 0xec);
      puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
      (*(code *)*puVar1)((char *)s_sDecimal_1160_1092 + 6,(undefined4 *)puVar2,
                         (int)((ulong)puVar2 >> 0x10),acStack_102);
    }
    acStack_102[0] = '\0';
    func_0x10984951((char *)s_sDecimal_1160_1092 + 6,&stack0xfffe,*(undefined2 *)(iVar4 + 0x280),
                    *(undefined2 *)(iVar4 + 0x282),0xff,acStack_102);
    func_0x10984951((char *)s_sDecimal_1160_1092 + 6,&stack0xfffe,*(undefined2 *)(iVar4 + 0x284),
                    *(undefined2 *)(iVar4 + 0x286),0xff,acStack_102);
    if (acStack_102[0] != '\0') {
      puVar2 = (undefined4 *)*(undefined4 *)(iStack_10c + 0xec);
      puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
      (*(code *)*puVar1)((char *)s_sDecimal_1160_1092 + 6,(undefined4 *)puVar2,
                         (int)((ulong)puVar2 >> 0x10),acStack_102);
    }
    acStack_102[0] = '\0';
    func_0x10984951((char *)s_sDecimal_1160_1092 + 6,&stack0xfffe,*(undefined2 *)(iVar4 + 0x288),
                    *(undefined2 *)(iVar4 + 0x28a),0xff,acStack_102);
    pcVar6 = (char *)s_sDecimal_1160_1092 + 6;
    func_0x10984951((char *)s_sDecimal_1160_1092 + 6,&stack0xfffe,*(undefined2 *)(iVar4 + 0x28c),
                    *(undefined2 *)(iVar4 + 0x28e),0xff,acStack_102);
    if (acStack_102[0] != '\0') {
      puVar2 = (undefined4 *)*(undefined4 *)(iStack_10c + 0xec);
      puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
      (*(code *)*puVar1)((char *)s_sDecimal_1160_1092 + 6,(undefined4 *)puVar2,
                         (int)((ulong)puVar2 >> 0x10),acStack_102);
    }
  }
  acStack_102[0] = '\0';
  func_0x10984951(pcVar6,&stack0xfffe,*(undefined2 *)(iVar4 + 0x238),*(undefined2 *)(iVar4 + 0x23a),
                  0xff,acStack_102);
  puVar9 = auStack_20c;
  uVar7 = unaff_SS;
  FUN_1158_17cd(0x4ccb,(char *)s_sDecimal_1160_1092 + 6);
  FUN_1158_184c(acStack_102,unaff_SS);
  pcVar6 = (char *)0x1158;
  FUN_1158_17e7(0xff,acStack_102,unaff_SS,puVar9,uVar7);
  if (2 < DAT_1160_1e06) {
    pcVar6 = (char *)s_sDecimal_1160_1092 + 6;
    func_0x10984951(0x1158,&stack0xfffe,*(undefined2 *)(iVar4 + 0x220),
                    *(undefined2 *)(iVar4 + 0x222),0xff,acStack_102);
  }
  if (acStack_102[0] != '\0') {
    puVar2 = (undefined4 *)*(undefined4 *)(iStack_10c + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)(pcVar6,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),acStack_102);
  }
  acStack_102[0] = '\0';
  func_0x10984951(pcVar6,&stack0xfffe,*(undefined2 *)(iVar4 + 0x290),*(undefined2 *)(iVar4 + 0x292),
                  0xff,acStack_102);
  func_0x10984951((char *)s_sDecimal_1160_1092 + 6,&stack0xfffe,*(undefined2 *)(iVar4 + 0x23c),
                  *(undefined2 *)(iVar4 + 0x23e),0xff,acStack_102);
  func_0x10984951((char *)s_sDecimal_1160_1092 + 6,&stack0xfffe,*(undefined2 *)(iVar4 + 0x224),
                  *(undefined2 *)(iVar4 + 0x226),0xff,acStack_102);
  if (acStack_102[0] != '\0') {
    puVar2 = (undefined4 *)*(undefined4 *)(iStack_10c + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)((char *)s_sDecimal_1160_1092 + 6,(undefined4 *)puVar2,
                       (int)((ulong)puVar2 >> 0x10),acStack_102);
  }
  acStack_102[0] = '\0';
  func_0x10984951((char *)s_sDecimal_1160_1092 + 6,&stack0xfffe,*(undefined2 *)(iVar4 + 0x294),
                  *(undefined2 *)(iVar4 + 0x296),0xff,acStack_102);
  func_0x10984951((char *)s_sDecimal_1160_1092 + 6,&stack0xfffe,*(undefined2 *)(iVar4 + 0x240),
                  *(undefined2 *)(iVar4 + 0x242),0xff,acStack_102);
  func_0x10984951((char *)s_sDecimal_1160_1092 + 6,&stack0xfffe,*(undefined2 *)(iVar4 + 0x228),
                  *(undefined2 *)(iVar4 + 0x22a),0xff,acStack_102);
  if (acStack_102[0] != '\0') {
    puVar2 = (undefined4 *)*(undefined4 *)(iStack_10c + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)((char *)s_sDecimal_1160_1092 + 6,(undefined4 *)puVar2,
                       (int)((ulong)puVar2 >> 0x10),acStack_102);
  }
  acStack_102[0] = '\0';
  func_0x10984951((char *)s_sDecimal_1160_1092 + 6,&stack0xfffe,*(undefined2 *)(iVar4 + 0x298),
                  *(undefined2 *)(iVar4 + 0x29a),0xff,acStack_102);
  func_0x10984951((char *)s_sDecimal_1160_1092 + 6,&stack0xfffe,*(undefined2 *)(iVar4 + 0x244),
                  *(undefined2 *)(iVar4 + 0x246),0xff,acStack_102);
  func_0x10984951((char *)s_sDecimal_1160_1092 + 6,&stack0xfffe,*(undefined2 *)(iVar4 + 0x22c),
                  *(undefined2 *)(iVar4 + 0x22e),0xff,acStack_102);
  if (acStack_102[0] != '\0') {
    puVar2 = (undefined4 *)*(undefined4 *)(iStack_10c + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)((char *)s_sDecimal_1160_1092 + 6,(undefined4 *)puVar2,
                       (int)((ulong)puVar2 >> 0x10),acStack_102);
  }
  acStack_102[0] = '\0';
  pcVar6 = (char *)s_sDecimal_1160_1092 + 6;
  func_0x10984951((char *)s_sDecimal_1160_1092 + 6,&stack0xfffe,*(undefined2 *)(iVar4 + 0x2a0),
                  *(undefined2 *)(iVar4 + 0x2a2),0xff,acStack_102);
  uVar8 = DAT_1160_1e06 == 3;
  if (2 < DAT_1160_1e06) {
    puVar9 = auStack_20c;
    uVar11 = unaff_SS;
    FUN_1138_1d53((int)*(undefined4 *)(iVar4 + 0x2a8),
                  (int)((ulong)*(undefined4 *)(iVar4 + 0x2a8) >> 0x10));
    puVar10 = auStack_30c;
    uVar7 = unaff_SS;
    FUN_1138_1d53((int)*(undefined4 *)(iVar4 + 0x2a0),
                  (int)((ulong)*(undefined4 *)(iVar4 + 0x2a0) >> 0x10));
    pcVar6 = (char *)0x1158;
    FUN_1158_18be(puVar10,uVar7,puVar9,uVar11);
    if (!(bool)uVar8) {
      puVar9 = auStack_40c;
      uVar11 = unaff_SS;
      FUN_1158_17cd(acStack_102,unaff_SS);
      FUN_1158_184c(0x4ccd,0x1158);
      puVar10 = auStack_50c;
      uVar7 = unaff_SS;
      FUN_1138_1d53((int)*(undefined4 *)(iVar4 + 0x2a8),
                    (int)((ulong)*(undefined4 *)(iVar4 + 0x2a8) >> 0x10));
      FUN_1158_184c(puVar10,uVar7);
      pcVar6 = (char *)0x1158;
      FUN_1158_17e7(0xff,acStack_102,unaff_SS,puVar9,uVar11);
    }
  }
  func_0x10984951(pcVar6,&stack0xfffe,*(undefined2 *)(iVar4 + 0x248),*(undefined2 *)(iVar4 + 0x24a),
                  0xff,acStack_102);
  func_0x10984951((char *)s_sDecimal_1160_1092 + 6,&stack0xfffe,*(undefined2 *)(iVar4 + 0x230),
                  *(undefined2 *)(iVar4 + 0x232),0xff,acStack_102);
  if (acStack_102[0] != '\0') {
    puVar2 = (undefined4 *)*(undefined4 *)(iStack_10c + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)((char *)s_sDecimal_1160_1092 + 6,(undefined4 *)puVar2,
                       (int)((ulong)puVar2 >> 0x10),acStack_102);
  }
  if (DAT_1160_1e06 == 4) {
    uVar7 = 0x10d8;
    puStack_108 = (undefined4 *)
                  FUN_10d8_3c43((int)*(undefined4 *)(iVar4 + 0x180),
                                (int)((ulong)*(undefined4 *)(iVar4 + 0x180) >> 0x10),0x4cd1,
                                (char *)s_sDecimal_1160_1092 + 6);
    if (puStack_108 == (undefined4 *)0x0) {
      iStack_104 = 8;
    }
    else {
      puVar1 = (undefined2 *)((int)*puStack_108 + 0x44);
      (*(code *)*puVar1)(0x10d8,puStack_108);
      uVar7 = 0x1158;
      iStack_104 = FUN_1158_0416();
    }
    acStack_102[0] = '\0';
    func_0x10984951(uVar7,&stack0xfffe,*(undefined2 *)(iVar4 + 0x1b0),*(undefined2 *)(iVar4 + 0x1b2)
                    ,0xff,acStack_102);
    func_0x10984951((char *)s_sDecimal_1160_1092 + 6,&stack0xfffe,*(undefined2 *)(iVar4 + 0x1b4),
                    *(undefined2 *)(iVar4 + 0x1b6),0xff,acStack_102);
    func_0x10984951((char *)s_sDecimal_1160_1092 + 6,&stack0xfffe,*(undefined2 *)(iVar4 + 0x214),
                    *(undefined2 *)(iVar4 + 0x216),0xff,acStack_102);
    puVar2 = (undefined4 *)*(undefined4 *)(iStack_10c + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)((char *)s_sDecimal_1160_1092 + 6,(undefined4 *)puVar2,
                       (int)((ulong)puVar2 >> 0x10),acStack_102);
    FUN_1158_17e7(0xff,acStack_102,unaff_SS,0x4ce7,(char *)s_sDecimal_1160_1092 + 6);
    func_0x10984951(0x1158,&stack0xfffe,*(undefined2 *)(iVar4 + 0x1d8),
                    *(undefined2 *)(iVar4 + 0x1da),0xff,acStack_102);
    func_0x10984951((char *)s_sDecimal_1160_1092 + 6,&stack0xfffe,*(undefined2 *)(iVar4 + 0x210),
                    *(undefined2 *)(iVar4 + 0x212),0xff,acStack_102);
    puVar2 = (undefined4 *)*(undefined4 *)(iStack_10c + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)((char *)s_sDecimal_1160_1092 + 6,(undefined4 *)puVar2,
                       (int)((ulong)puVar2 >> 0x10),acStack_102);
    FUN_1158_17e7(0xff,acStack_102,unaff_SS,0x4ce7,(char *)s_sDecimal_1160_1092 + 6);
    func_0x10984951(0x1158,&stack0xfffe,*(undefined2 *)(iVar4 + 0x1dc),
                    *(undefined2 *)(iVar4 + 0x1de),0xff,acStack_102);
    func_0x10984951((char *)s_sDecimal_1160_1092 + 6,&stack0xfffe,*(undefined2 *)(iVar4 + 0x20c),
                    *(undefined2 *)(iVar4 + 0x20e),0xff,acStack_102);
    puVar2 = (undefined4 *)*(undefined4 *)(iStack_10c + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)((char *)s_sDecimal_1160_1092 + 6,(undefined4 *)puVar2,
                       (int)((ulong)puVar2 >> 0x10),acStack_102);
    FUN_1158_17e7(0xff,acStack_102,unaff_SS,0x4ce7,(char *)s_sDecimal_1160_1092 + 6);
    func_0x10984951(0x1158,&stack0xfffe,*(undefined2 *)(iVar4 + 0x1e0),
                    *(undefined2 *)(iVar4 + 0x1e2),0xff,acStack_102);
    func_0x10984951((char *)s_sDecimal_1160_1092 + 6,&stack0xfffe,*(undefined2 *)(iVar4 + 0x208),
                    *(undefined2 *)(iVar4 + 0x20a),0xff,acStack_102);
    puVar2 = (undefined4 *)*(undefined4 *)(iStack_10c + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)((char *)s_sDecimal_1160_1092 + 6,(undefined4 *)puVar2,
                       (int)((ulong)puVar2 >> 0x10),acStack_102);
    FUN_1158_17e7(0xff,acStack_102,unaff_SS,0x4ce7,(char *)s_sDecimal_1160_1092 + 6);
    func_0x10984951(0x1158,&stack0xfffe,*(undefined2 *)(iVar4 + 0x1e4),
                    *(undefined2 *)(iVar4 + 0x1e6),0xff,acStack_102);
    func_0x10984951((char *)s_sDecimal_1160_1092 + 6,&stack0xfffe,*(undefined2 *)(iVar4 + 0x204),
                    *(undefined2 *)(iVar4 + 0x206),0xff,acStack_102);
    puVar2 = (undefined4 *)*(undefined4 *)(iStack_10c + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)((char *)s_sDecimal_1160_1092 + 6,(undefined4 *)puVar2,
                       (int)((ulong)puVar2 >> 0x10),acStack_102);
    FUN_1158_17e7(0xff,acStack_102,unaff_SS,0x4ce7,(char *)s_sDecimal_1160_1092 + 6);
    func_0x10984951(0x1158,&stack0xfffe,*(undefined2 *)(iVar4 + 0x1e8),
                    *(undefined2 *)(iVar4 + 0x1ea),0xff,acStack_102);
    func_0x10984951((char *)s_sDecimal_1160_1092 + 6,&stack0xfffe,*(undefined2 *)(iVar4 + 0x200),
                    *(undefined2 *)(iVar4 + 0x202),0xff,acStack_102);
    puVar2 = (undefined4 *)*(undefined4 *)(iStack_10c + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)((char *)s_sDecimal_1160_1092 + 6,(undefined4 *)puVar2,
                       (int)((ulong)puVar2 >> 0x10),acStack_102);
    FUN_1158_17e7(0xff,acStack_102,unaff_SS,0x4ce7,(char *)s_sDecimal_1160_1092 + 6);
    func_0x10984951(0x1158,&stack0xfffe,*(undefined2 *)(iVar4 + 0x1ec),
                    *(undefined2 *)(iVar4 + 0x1ee),0xff,acStack_102);
    pcVar6 = (char *)s_sDecimal_1160_1092 + 6;
    func_0x10984951((char *)s_sDecimal_1160_1092 + 6,&stack0xfffe,*(undefined2 *)(iVar4 + 0x1fc),
                    *(undefined2 *)(iVar4 + 0x1fe),0xff,acStack_102);
    puVar2 = (undefined4 *)*(undefined4 *)(iStack_10c + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)((char *)s_sDecimal_1160_1092 + 6,(undefined4 *)puVar2,
                       (int)((ulong)puVar2 >> 0x10),acStack_102);
    if (iStack_104 == 7) {
      FUN_1158_17e7(0xff,acStack_102,unaff_SS,0x4ce7,(char *)s_sDecimal_1160_1092 + 6);
      func_0x10984951(0x1158,&stack0xfffe,*(undefined2 *)(iVar4 + 0x1f8),
                      *(undefined2 *)(iVar4 + 0x1fa),0xff,acStack_102);
      puVar9 = auStack_20c;
      uVar7 = unaff_SS;
      FUN_1158_17cd(0x4ccb,(char *)s_sDecimal_1160_1092 + 6);
      FUN_1158_184c(acStack_102,unaff_SS);
      pcVar6 = (char *)0x1158;
      FUN_1158_17e7(0xff,acStack_102,unaff_SS,puVar9,uVar7);
      puVar2 = (undefined4 *)*(undefined4 *)(iStack_10c + 0xec);
      puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
      (*(code *)*puVar1)(0x1158,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),acStack_102);
    }
    else if (7 < iStack_104) {
      FUN_1158_17e7(0xff,acStack_102,unaff_SS,0x4ce7,(char *)s_sDecimal_1160_1092 + 6);
      func_0x10984951(0x1158,&stack0xfffe,*(undefined2 *)(iVar4 + 0x1f0),
                      *(undefined2 *)(iVar4 + 0x1f2),0xff,acStack_102);
      pcVar6 = (char *)s_sDecimal_1160_1092 + 6;
      func_0x10984951((char *)s_sDecimal_1160_1092 + 6,&stack0xfffe,*(undefined2 *)(iVar4 + 0x1f8),
                      *(undefined2 *)(iVar4 + 0x1fa),0xff,acStack_102);
      puVar2 = (undefined4 *)*(undefined4 *)(iStack_10c + 0xec);
      puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
      (*(code *)*puVar1)((char *)s_sDecimal_1160_1092 + 6,(undefined4 *)puVar2,
                         (int)((ulong)puVar2 >> 0x10),acStack_102);
    }
    if (iStack_104 == 8) {
      FUN_1158_17e7(0xff,acStack_102,unaff_SS,0x4ce7,pcVar6);
      func_0x10984951(0x1158,&stack0xfffe,*(undefined2 *)(iVar4 + 500),
                      *(undefined2 *)(iVar4 + 0x1f6),0xff,acStack_102);
      puVar9 = auStack_20c;
      uVar7 = unaff_SS;
      FUN_1158_17cd(0x4ccb,(char *)s_sDecimal_1160_1092 + 6);
      FUN_1158_184c(acStack_102,unaff_SS);
      pcVar6 = (char *)0x1158;
      FUN_1158_17e7(0xff,acStack_102,unaff_SS,puVar9,uVar7);
      puVar2 = (undefined4 *)*(undefined4 *)(iStack_10c + 0xec);
      puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
      (*(code *)*puVar1)(0x1158,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),acStack_102);
    }
    else if (8 < iStack_104) {
      FUN_1158_17e7(0xff,acStack_102,unaff_SS,0x4ce7,pcVar6);
      func_0x10984951(0x1158,&stack0xfffe,*(undefined2 *)(iVar4 + 0x334),
                      *(undefined2 *)(iVar4 + 0x336),0xff,acStack_102);
      pcVar6 = (char *)s_sDecimal_1160_1092 + 6;
      func_0x10984951((char *)s_sDecimal_1160_1092 + 6,&stack0xfffe,*(undefined2 *)(iVar4 + 500),
                      *(undefined2 *)(iVar4 + 0x1f6),0xff,acStack_102);
      puVar2 = (undefined4 *)*(undefined4 *)(iStack_10c + 0xec);
      puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
      (*(code *)*puVar1)((char *)s_sDecimal_1160_1092 + 6,(undefined4 *)puVar2,
                         (int)((ulong)puVar2 >> 0x10),acStack_102);
    }
    if (iStack_104 == 9) {
      FUN_1158_17e7(0xff,acStack_102,unaff_SS,0x4ce7,pcVar6);
      func_0x10984951(0x1158,&stack0xfffe,*(undefined2 *)(iVar4 + 0x33c),
                      *(undefined2 *)(iVar4 + 0x33e),0xff,acStack_102);
      puVar9 = auStack_20c;
      uVar7 = unaff_SS;
      FUN_1158_17cd(0x4ccb,(char *)s_sDecimal_1160_1092 + 6);
      FUN_1158_184c(acStack_102,unaff_SS);
      pcVar6 = (char *)0x1158;
      FUN_1158_17e7(0xff,acStack_102,unaff_SS,puVar9,uVar7);
      puVar2 = (undefined4 *)*(undefined4 *)(iStack_10c + 0xec);
      puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
      (*(code *)*puVar1)(0x1158,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),acStack_102);
    }
    else if (9 < iStack_104) {
      FUN_1158_17e7(0xff,acStack_102,unaff_SS,0x4ce7,pcVar6);
      func_0x10984951(0x1158,&stack0xfffe,*(undefined2 *)(iVar4 + 0x338),
                      *(undefined2 *)(iVar4 + 0x33a),0xff,acStack_102);
      pcVar6 = (char *)s_sDecimal_1160_1092 + 6;
      func_0x10984951((char *)s_sDecimal_1160_1092 + 6,&stack0xfffe,*(undefined2 *)(iVar4 + 0x33c),
                      *(undefined2 *)(iVar4 + 0x33e),0xff,acStack_102);
      puVar2 = (undefined4 *)*(undefined4 *)(iStack_10c + 0xec);
      puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
      (*(code *)*puVar1)((char *)s_sDecimal_1160_1092 + 6,(undefined4 *)puVar2,
                         (int)((ulong)puVar2 >> 0x10),acStack_102);
    }
    if (iStack_104 == 10) {
      FUN_1158_17e7(0xff,acStack_102,unaff_SS,0x4ce7,pcVar6);
      func_0x10984951(0x1158,&stack0xfffe,*(undefined2 *)(iVar4 + 0x340),
                      *(undefined2 *)(iVar4 + 0x342),0xff,acStack_102);
      pcVar6 = (char *)s_sDecimal_1160_1092 + 6;
      func_0x10984951((char *)s_sDecimal_1160_1092 + 6,&stack0xfffe,*(undefined2 *)(iVar4 + 0x344),
                      *(undefined2 *)(iVar4 + 0x346),0xff,acStack_102);
      puVar2 = (undefined4 *)*(undefined4 *)(iStack_10c + 0xec);
      puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
      (*(code *)*puVar1)((char *)s_sDecimal_1160_1092 + 6,(undefined4 *)puVar2,
                         (int)((ulong)puVar2 >> 0x10),acStack_102);
    }
    if (iStack_104 == 0xb) {
      FUN_1158_17e7(0xff,acStack_102,unaff_SS,0x4ce7,pcVar6);
      func_0x10984951(0x1158,&stack0xfffe,*(undefined2 *)(iVar4 + 0x348),
                      *(undefined2 *)(iVar4 + 0x34a),0xff,acStack_102);
      puVar9 = auStack_20c;
      uVar7 = unaff_SS;
      FUN_1158_17cd(0x4ccb,(char *)s_sDecimal_1160_1092 + 6);
      FUN_1158_184c(acStack_102,unaff_SS);
      FUN_1158_17e7(0xff,acStack_102,unaff_SS,puVar9,uVar7);
      puVar2 = (undefined4 *)*(undefined4 *)(iStack_10c + 0xec);
      puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
      (*(code *)*puVar1)(0x1158,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),acStack_102);
    }
  }
  if (1 < DAT_1160_1e06) {
    acStack_102[0] = '\0';
    puVar9 = auStack_20c;
    uVar7 = unaff_SS;
    FUN_1158_17cd(acStack_102,unaff_SS);
    FUN_1158_184c(0x4ce7,0x1158);
    FUN_1158_17e7(0xff,acStack_102,unaff_SS,puVar9,uVar7);
    func_0x10984951(0x1158,&stack0xfffe,*(undefined2 *)(iVar4 + 0x2cc),
                    *(undefined2 *)(iVar4 + 0x2ce),0xff,acStack_102);
    if (2 < DAT_1160_1e06) {
      func_0x10984951((char *)s_sDecimal_1160_1092 + 6,&stack0xfffe,*(undefined2 *)(iVar4 + 0x2c4),
                      *(undefined2 *)(iVar4 + 0x2c6),0xff,acStack_102);
    }
    puVar2 = (undefined4 *)*(undefined4 *)(iStack_10c + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)((char *)s_sDecimal_1160_1092 + 6,(undefined4 *)puVar2,
                       (int)((ulong)puVar2 >> 0x10),acStack_102);
    acStack_102[0] = '\0';
    func_0x10984951((char *)s_sDecimal_1160_1092 + 6,&stack0xfffe,*(undefined2 *)(iVar4 + 0x2d0),
                    *(undefined2 *)(iVar4 + 0x2d2),0xff,acStack_102);
    func_0x10984951((char *)s_sDecimal_1160_1092 + 6,&stack0xfffe,*(undefined2 *)(iVar4 + 0x2d4),
                    *(undefined2 *)(iVar4 + 0x2d6),0xff,acStack_102);
    if (2 < DAT_1160_1e06) {
      func_0x10984951((char *)s_sDecimal_1160_1092 + 6,&stack0xfffe,*(undefined2 *)(iVar4 + 0x2d8),
                      *(undefined2 *)(iVar4 + 0x2da),0xff,acStack_102);
    }
    puVar2 = (undefined4 *)*(undefined4 *)(iStack_10c + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)((char *)s_sDecimal_1160_1092 + 6,(undefined4 *)puVar2,
                       (int)((ulong)puVar2 >> 0x10),acStack_102);
  }
  FUN_1120_4a3f(iStack_10c,uStack_10a);
  FUN_1120_49ff(iStack_10c,uStack_10a);
  FUN_1120_49e3(iStack_10c,uStack_10a);
  return;
}



/* ---- TFormSCDD_Decisions_TestBtnClick @ 1098:5c09  (122 octets) ---- */

void __stdcall16far
TFormSCDD_Decisions_TestBtnClick(undefined4 param_1,undefined2 param_2,undefined2 param_3)

{
  undefined2 *puVar1;
  undefined4 *puVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  FUN_1158_0444();
  uVar4 = FUN_1158_2273(0x4ac,0x1110,param_2,param_3);
  uVar3 = (undefined2)((ulong)uVar4 >> 0x10);
  uVar5 = FUN_1138_19d4(uVar4,*(int *)((int)uVar4 + 0x22) / 2,*(int *)((int)uVar4 + 0x24) / 2);
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  uVar4 = *(undefined4 *)((int)param_1 + 0x254);
  *(undefined *)((int)uVar4 + 0x25) = 0;
  puVar2 = (undefined4 *)*(undefined4 *)((int)param_1 + 0x254);
  puVar1 = (undefined2 *)((int)*puVar2 + 0x38);
  (*(code *)*puVar1)(0x1138,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),
                     (int)((ulong)uVar5 >> 0x10),(int)uVar5);
  return;
}



/* ---- TFormSCDD_Decisions_Print1Click @ 1098:5c83  (67 octets) ---- */

void __stdcall16far TFormSCDD_Decisions_Print1Click(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  undefined2 uVar3;
  
  FUN_1158_0444();
  cVar1 = FUN_1010_34c6();
  if (cVar1 != '\0') {
    uVar3 = (undefined2)((ulong)param_1 >> 0x10);
    iVar2 = (int)param_1;
    FUN_1138_1c77((int)*(undefined4 *)(iVar2 + 0x264),
                  (int)((ulong)*(undefined4 *)(iVar2 + 0x264) >> 0x10),0);
    FUN_1140_5a2d(iVar2,uVar3);
    FUN_1138_1c77((int)*(undefined4 *)(iVar2 + 0x264),
                  (int)((ulong)*(undefined4 *)(iVar2 + 0x264) >> 0x10),1);
  }
  return;
}



/* ---- TFormSCDD_Decisions_Copy1Click @ 1098:5cc6  (338 octets) ---- */

void __stdcall16far TFormSCDD_Decisions_Copy1Click(undefined4 param_1)

{
  undefined2 *puVar1;
  int iVar2;
  int iVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  undefined2 unaff_SS;
  undefined4 uVar7;
  undefined4 uVar8;
  int *piVar9;
  undefined2 *puVar10;
  int local_12;
  int local_10;
  int local_e;
  int local_c;
  undefined2 local_a;
  undefined2 local_8;
  undefined2 local_6;
  
  local_6 = 0x5cd1;
  FUN_1158_0444();
  uVar4 = (undefined2)((ulong)param_1 >> 0x10);
  iVar2 = (int)param_1;
  FUN_1138_1c77((int)*(undefined4 *)(iVar2 + 0x264),
                (int)((ulong)*(undefined4 *)(iVar2 + 0x264) >> 0x10),0);
  FUN_1138_17bf((int)*(undefined4 *)(iVar2 + 0x260),
                (int)((ulong)*(undefined4 *)(iVar2 + 0x260) >> 0x10),*(undefined2 *)(iVar2 + 0x22));
  FUN_1138_17e1((int)*(undefined4 *)(iVar2 + 0x260),
                (int)((ulong)*(undefined4 *)(iVar2 + 0x260) >> 0x10),*(undefined2 *)(iVar2 + 0x24));
  uVar5 = 0x1138;
  uVar7 = FUN_1138_19d4(iVar2,uVar4,0,0);
  iVar3 = (int)((ulong)uVar7 >> 0x10);
  local_12 = *(int *)(iVar2 + 0x1e) - (int)uVar7;
  if (SBORROW2(*(int *)(iVar2 + 0x1e),(int)uVar7)) {
    uVar5 = 0x1158;
    local_12 = FUN_1158_043e(0x1138);
  }
  local_10 = *(int *)(iVar2 + 0x20) - iVar3;
  uVar6 = uVar5;
  if (SBORROW2(*(int *)(iVar2 + 0x20),iVar3)) {
    uVar6 = 0x1158;
    local_10 = FUN_1158_043e(uVar5);
  }
  local_e = *(int *)(iVar2 + 0x22) + local_12;
  uVar5 = uVar6;
  if (SCARRY2(*(int *)(iVar2 + 0x22),local_12)) {
    uVar5 = 0x1158;
    local_e = FUN_1158_043e(uVar6);
  }
  local_c = *(int *)(iVar2 + 0x24) + local_10;
  if (SCARRY2(*(int *)(iVar2 + 0x24),local_10)) {
    local_c = FUN_1158_043e(uVar5);
  }
  local_a = 0;
  local_8 = 0;
  local_6 = *(undefined2 *)((int)*(undefined4 *)(iVar2 + 0x260) + 0x22);
  FUN_1138_1c77((int)*(undefined4 *)(iVar2 + 0x260),
                (int)((ulong)*(undefined4 *)(iVar2 + 0x260) >> 0x10),0);
  puVar10 = &local_a;
  uVar7 = FUN_1140_33d5(iVar2,uVar4);
  piVar9 = &local_12;
  uVar6 = (undefined2)((ulong)*(undefined4 *)(iVar2 + 0x260) >> 0x10);
  uVar5 = (undefined2)*(undefined4 *)(iVar2 + 0x260);
  uVar8 = FUN_1118_1f94(uVar5,uVar6,piVar9);
  FUN_1128_1b10(uVar8,uVar5,uVar6,piVar9,unaff_SS,uVar7);
  uVar5 = (undefined2)((ulong)*(undefined4 *)(iVar2 + 0x260) >> 0x10);
  iVar3 = (int)*(undefined4 *)(iVar2 + 0x260);
  puVar1 = (undefined2 *)((int)*DAT_1160_2ad0 + 8);
  (*(code *)*puVar1)(0x1128,(undefined4 *)DAT_1160_2ad0,(int)((ulong)DAT_1160_2ad0 >> 0x10),
                     *(undefined2 *)(iVar3 + 0x8e),*(undefined2 *)(iVar3 + 0x90),puVar10);
  FUN_1138_1c77((int)*(undefined4 *)(iVar2 + 0x264),
                (int)((ulong)*(undefined4 *)(iVar2 + 0x264) >> 0x10),1);
  return;
}




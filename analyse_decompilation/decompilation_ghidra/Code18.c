/* Simstrat (FR).EXE - segment Code18 - 57 fonctions
   Decompile par Ghidra 11.2.1 (x86 16 bits, chargeur NE). */

/* ---- FUN_1088_0d48 @ 1088:0d48  (79 octets) ---- */

void __stdcall16far FUN_1088_0d48(undefined4 param_1)

{
  int iVar1;
  undefined2 uVar2;
  
  FUN_1158_0444();
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  if (*(char *)(iVar1 + 0x48d) == '\0') {
    FUN_1088_0d97(iVar1,uVar2);
  }
  else {
    DAT_1160_037a = 1;
    FUN_1010_38c2(1);
    FUN_1000_28c7((int)DAT_1160_18f6,(int)((ulong)DAT_1160_18f6 >> 0x10));
    *(undefined2 *)(iVar1 + 0x104) = 3;
    FUN_1140_5556(iVar1,uVar2);
    FUN_1150_28c3(0x1140);
  }
  return;
}



/* ---- FUN_1088_0d97 @ 1088:0d97  (26 octets) ---- */

void __stdcall16far FUN_1088_0d97(void)

{
  FUN_1158_0444();
  FUN_1010_38c2(0);
  FUN_1150_28c3((char *)s_windows_1160_100f + 1);
  return;
}



/* ---- FUN_1088_0db7 @ 1088:0db7  (133 octets) ---- */

void __cdecl16far FUN_1088_0db7(void)

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
  
  _local_6 = CONCAT22(unaff_CS,0xdc2);
  FUN_1158_0444();
  uStack_c = DAT_1160_2c2a._2_2_;
  uStack_e = (undefined2)DAT_1160_2c2a;
  uStack_10 = CONCAT11(extraout_AH,1);
  pcStack_12 = (char *)s_sThousand_1160_1088;
  uStack_14 = 0x22;
  uStack_16 = 0x1158;
  uStack_18 = 0xddd;
  local_a = FUN_1140_2553();
  uVar1 = (ulong)local_a >> 0x10;
  local_6 = (undefined2)local_a;
  uStack_16 = 0x1140;
  uStack_18 = 0xdb1;
  uStack_1c = DAT_1160_1858;
  DAT_1160_1858 = &uStack_1c;
  puStack_1a = &stack0xfffe;
  FUN_1088_1383(local_a,1);
  FUN_1088_3250(local_a);
  FUN_1088_163e(local_a,DAT_1160_014c);
  uVar2 = (undefined2)local_a;
  FUN_1140_5d45(local_a);
  DAT_1160_1858 = (undefined2 *)uVar2;
  puStack_1a = (undefined *)0x1140;
  uStack_1c = 0xe3c;
  FUN_1140_5f1d(local_6,(int)uVar1);
  return;
}



/* ---- FUN_1088_0e44 @ 1088:0e44  (208 octets) ---- */

void __cdecl16far FUN_1088_0e44(undefined2 param_1)

{
  undefined2 uVar1;
  undefined extraout_AH;
  int iVar2;
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
  
  _local_6 = CONCAT22(unaff_CS,0xe4f);
  FUN_1158_0444();
  uStack_c = DAT_1160_2c2a._2_2_;
  uStack_e = (undefined2)DAT_1160_2c2a;
  uStack_10 = CONCAT11(extraout_AH,1);
  pcStack_12 = (char *)s_sThousand_1160_1088;
  uStack_14 = 0x22;
  uStack_16 = 0x1158;
  uStack_18 = 0xe6a;
  _local_6 = FUN_1140_2553();
  uStack_16 = 0x1140;
  uStack_18 = 0xe3e;
  uStack_1c = DAT_1160_1858;
  DAT_1160_1858 = &uStack_1c;
  puStack_1a = &stack0xfffe;
  local_a = _local_6;
  FUN_1088_1383(_local_6,0);
  FUN_1088_3250(local_a);
  FUN_1138_1c77((int)*(undefined4 *)((int)local_a + 0x474),
                (int)((ulong)*(undefined4 *)((int)local_a + 0x474) >> 0x10),1);
  FUN_1088_163e(local_a,param_1);
  if (1 < *(int *)((int)local_a + 0x48e) && *(char *)((int)local_a + 0x490) == '\0') {
    iVar2 = *(int *)((int)local_a + 0x48e) + -1;
    if (SBORROW2(*(int *)((int)local_a + 0x48e),1)) {
      iVar2 = FUN_1158_043e((char *)s_sThousand_1160_1088);
    }
    FUN_1088_163e(local_a,iVar2);
  }
  uVar1 = (int)local_a;
  FUN_1140_5d45(local_a);
  DAT_1160_1858 = (undefined2 *)uVar1;
  puStack_1a = (undefined *)0x1140;
  uStack_1c = 0xf14;
  FUN_1140_5f1d((int)_local_6,(int)((ulong)_local_6 >> 0x10));
  return;
}



/* ---- TFormSADD_Decisions_FormCreate @ 1088:0f28  (1 octets) ---- */

/* WARNING: Removing unreachable block (ram,0x108810c1) */

void TFormSADD_Decisions_FormCreate(undefined2 param_1,undefined4 param_2)

{
  char cVar1;
  undefined extraout_AH;
  int iVar2;
  int iVar3;
  byte extraout_AH_00;
  byte extraout_AH_01;
  byte extraout_AH_02;
  byte extraout_AH_03;
  byte extraout_AH_04;
  byte extraout_AH_05;
  byte extraout_AH_06;
  byte extraout_AH_07;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  undefined2 uVar8;
  undefined2 unaff_SS;
  bool bVar9;
  bool bVar10;
  undefined4 uVar11;
  long lVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined2 uVar15;
  undefined auStack_204 [256];
  undefined auStack_104 [250];
  undefined4 uStack_a;
  int iStack_6;
  
  iStack_6 = 0xf33;
  FUN_1158_0444();
  uVar11 = *(undefined4 *)((int)DAT_1160_18f6 + 0x1b4);
  uVar8 = (undefined2)((ulong)param_2 >> 0x10);
  iVar7 = (int)param_2;
  FUN_1138_1c77((int)*(undefined4 *)(iVar7 + 0x1ac),
                (int)((ulong)*(undefined4 *)(iVar7 + 0x1ac) >> 0x10),
                CONCAT11(extraout_AH,*(undefined *)((int)uVar11 + 0x31)));
  puVar14 = auStack_104;
  uVar15 = unaff_SS;
  FUN_1158_17cd(0xf18,0x1138);
  FUN_1158_184c(0x1dfa,0x1160);
  FUN_1158_184c(0xf24,0x1158);
  puVar13 = auStack_204;
  FUN_1138_1d53(iVar7,uVar8);
  FUN_1158_184c(puVar13,unaff_SS);
  FUN_1138_1d8c(iVar7,uVar8,puVar14,uVar15);
  FUN_10a8_246f((int)*(undefined4 *)(iVar7 + 0x17c),
                (int)((ulong)*(undefined4 *)(iVar7 + 0x17c) >> 0x10),0);
  *(undefined *)(iVar7 + 0x488) = 0;
  iStack_6 = (int)((ulong)*(undefined4 *)(iVar7 + 0x480) >> 0x10);
  uStack_a._2_2_ = (int)*(undefined4 *)(iVar7 + 0x480);
  *(undefined2 *)(uStack_a._2_2_ + 0xec) = 1;
  *(undefined2 *)(uStack_a._2_2_ + 0xee) = 0;
  iVar4 = DAT_1160_014c >> 0xf;
  *(int *)(uStack_a._2_2_ + 0xf0) = DAT_1160_014c;
  *(int *)(uStack_a._2_2_ + 0xf2) = iVar4;
  if ((*(int *)(uStack_a._2_2_ + 0xf2) < *(int *)(uStack_a._2_2_ + 0xee)) ||
     ((*(int *)(uStack_a._2_2_ + 0xf2) <= *(int *)(uStack_a._2_2_ + 0xee) &&
      (*(uint *)(uStack_a._2_2_ + 0xf0) <= *(uint *)(uStack_a._2_2_ + 0xec))))) {
    FUN_1138_1cb8(uStack_a._2_2_,iStack_6,0);
  }
  FUN_1138_1cb8((int)*(undefined4 *)(iVar7 + 0x460),
                (int)((ulong)*(undefined4 *)(iVar7 + 0x460) >> 0x10),0);
  FUN_1138_1c77((int)*(undefined4 *)(iVar7 + 0x474),
                (int)((ulong)*(undefined4 *)(iVar7 + 0x474) >> 0x10),0);
  iVar4 = FUN_1148_527d(iVar7,uVar8);
  iVar2 = iVar4 + -1;
  if (SBORROW2(iVar4,1)) {
    iVar2 = FUN_1158_043e(0x1148);
  }
  iStack_6 = iVar2;
  if (-1 < iVar2) {
    iVar4 = 0;
    while( true ) {
      uVar11 = FUN_1148_5246(iVar7,uVar8,iVar4);
      cVar1 = FUN_1158_2255(0x399,0x1138,uVar11);
      if (cVar1 != '\0') {
        uVar11 = FUN_1148_5246(iVar7,uVar8,iVar4);
        uVar11 = FUN_1158_2273(0x399,0x1138,uVar11);
        uVar15 = (undefined2)((ulong)uVar11 >> 0x10);
        iVar2 = (int)uVar11;
        uStack_a = uVar11;
        if (*(int *)(iVar2 + 0xc) != 0 || *(int *)(iVar2 + 0xe) != 0) {
          iVar5 = DAT_1160_1e06 >> 0xf;
          iVar3 = *(int *)(iVar2 + 0xc);
          uVar6 = *(uint *)(iVar2 + 0xe);
          bVar10 = false;
          if ((int)uVar6 < 0) {
            bVar9 = iVar3 != 0;
            iVar3 = -iVar3;
            iVar2 = ~uVar6 + 1;
            bVar10 = SBORROW2(~uVar6,-1) != SBORROW2(iVar2,(uint)bVar9);
            uVar6 = iVar2 - (uint)bVar9;
          }
          lVar12 = CONCAT22(uVar6,iVar3);
          iVar2 = DAT_1160_1e06;
          if (bVar10) {
            lVar12 = FUN_1158_043e(0x1158);
          }
          FUN_1138_1c77(uStack_a,lVar12 <= CONCAT22(iVar5,iVar2));
        }
      }
      if (iVar4 == iStack_6) break;
      iVar4 = iVar4 + 1;
    }
  }
  FUN_1138_179d((int)*(undefined4 *)(iVar7 + 0x2c8),
                (int)((ulong)*(undefined4 *)(iVar7 + 0x2c8) >> 0x10),
                *(undefined2 *)((int)*(undefined4 *)(iVar7 + 0x2b4) + 0x20));
  iVar4 = (uint)extraout_AH_00 * 0x100;
  if (0 < DAT_1160_014e) {
    iVar4 = iVar4 + 1;
  }
  FUN_1138_1c77((int)*(undefined4 *)(iVar7 + 0x2cc),
                (int)((ulong)*(undefined4 *)(iVar7 + 0x2cc) >> 0x10),iVar4);
  iVar4 = (uint)extraout_AH_01 * 0x100;
  if (1 < DAT_1160_014e) {
    iVar4 = iVar4 + 1;
  }
  FUN_1138_1c77((int)*(undefined4 *)(iVar7 + 0x2d4),
                (int)((ulong)*(undefined4 *)(iVar7 + 0x2d4) >> 0x10),iVar4);
  iVar4 = (uint)extraout_AH_02 * 0x100;
  if (2 < DAT_1160_014e) {
    iVar4 = iVar4 + 1;
  }
  FUN_1138_1c77((int)*(undefined4 *)(iVar7 + 0x2dc),
                (int)((ulong)*(undefined4 *)(iVar7 + 0x2dc) >> 0x10),iVar4);
  iVar4 = (uint)extraout_AH_03 * 0x100;
  if (3 < DAT_1160_014e) {
    iVar4 = iVar4 + 1;
  }
  FUN_1138_1c77((int)*(undefined4 *)(iVar7 + 0x2e4),
                (int)((ulong)*(undefined4 *)(iVar7 + 0x2e4) >> 0x10),iVar4);
  iVar4 = (uint)extraout_AH_04 * 0x100;
  if (4 < DAT_1160_014e) {
    iVar4 = iVar4 + 1;
  }
  FUN_1138_1c77((int)*(undefined4 *)(iVar7 + 0x2ec),
                (int)((ulong)*(undefined4 *)(iVar7 + 0x2ec) >> 0x10),iVar4);
  iVar4 = (uint)extraout_AH_05 * 0x100;
  if (5 < DAT_1160_014e) {
    iVar4 = iVar4 + 1;
  }
  FUN_1138_1c77((int)*(undefined4 *)(iVar7 + 0x2f4),
                (int)((ulong)*(undefined4 *)(iVar7 + 0x2f4) >> 0x10),iVar4);
  iVar4 = (uint)extraout_AH_06 * 0x100;
  if (6 < DAT_1160_014e) {
    iVar4 = iVar4 + 1;
  }
  FUN_1138_1c77((int)*(undefined4 *)(iVar7 + 0x2fc),
                (int)((ulong)*(undefined4 *)(iVar7 + 0x2fc) >> 0x10),iVar4);
  iVar4 = (uint)extraout_AH_07 * 0x100;
  if (6 < DAT_1160_014e) {
    iVar4 = iVar4 + 1;
  }
  FUN_1138_1c77((int)*(undefined4 *)(iVar7 + 0x304),
                (int)((ulong)*(undefined4 *)(iVar7 + 0x304) >> 0x10),iVar4);
  FUN_10e0_3017((int)*(undefined4 *)(iVar7 + 400),(int)((ulong)*(undefined4 *)(iVar7 + 400) >> 0x10)
                ,0x1e32,0x1160);
  FUN_10e0_3017((int)*(undefined4 *)(iVar7 + 0x1bc),
                (int)((ulong)*(undefined4 *)(iVar7 + 0x1bc) >> 0x10),0x1e40,0x1160);
  FUN_10e0_3017((int)*(undefined4 *)(iVar7 + 0x1c0),
                (int)((ulong)*(undefined4 *)(iVar7 + 0x1c0) >> 0x10),0x1e40,0x1160);
  FUN_10e0_3017((int)*(undefined4 *)(iVar7 + 0x1b4),
                (int)((ulong)*(undefined4 *)(iVar7 + 0x1b4) >> 0x10),0x1e32,0x1160);
  FUN_10e0_3017((int)*(undefined4 *)(iVar7 + 0x1b8),
                (int)((ulong)*(undefined4 *)(iVar7 + 0x1b8) >> 0x10),0x1e40,0x1160);
  FUN_10e0_3017((int)*(undefined4 *)(iVar7 + 0x1cc),
                (int)((ulong)*(undefined4 *)(iVar7 + 0x1cc) >> 0x10),0x1e4e,0x1160);
  DAT_1160_037a = 0;
  return;
}



/* ---- TFormSADD_Decisions_FormShow @ 1088:124d  (27 octets) ---- */

void __stdcall16far TFormSADD_Decisions_FormShow(void)

{
  FUN_1158_0444();
  FUN_1140_63a9((int)DAT_1160_2c2e,(int)((ulong)DAT_1160_2c2e >> 0x10),0xfffe);
  return;
}



/* ---- TFormSADD_Decisions_FormClose @ 1088:1268  (135 octets) ---- */

void __stdcall16far TFormSADD_Decisions_FormClose(undefined4 param_1,undefined *param_2)

{
  char cVar1;
  int iVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  
  FUN_1158_0444();
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  iVar2 = (int)param_1;
  if (*(char *)(iVar2 + 0x488) != '\0') {
    FUN_1140_5556((int)*(undefined4 *)(iVar2 + 0x489),
                  (int)((ulong)*(undefined4 *)(iVar2 + 0x489) >> 0x10));
    FUN_1140_5f1d((int)*(undefined4 *)(iVar2 + 0x489),
                  (int)((ulong)*(undefined4 *)(iVar2 + 0x489) >> 0x10));
  }
  cVar1 = FUN_1158_2255(0x22,(char *)s_sThousand_1160_1088,*(undefined2 *)(iVar2 + 4),
                        *(undefined2 *)(iVar2 + 6));
  if (cVar1 != '\0') {
    uVar4 = FUN_1158_2273(0x22,(char *)s_sThousand_1160_1088,*(undefined2 *)(iVar2 + 4),
                          *(undefined2 *)(iVar2 + 6));
    *(undefined *)((int)uVar4 + 0x488) = 0;
  }
  FUN_1088_3182(iVar2,uVar3);
  *param_2 = 1;
  return;
}



/* ---- TFormSADD_Decisions_FormCloseQuery @ 1088:12ef  (144 octets) ---- */

void __stdcall16far TFormSADD_Decisions_FormCloseQuery(undefined4 param_1,undefined *param_2)

{
  char cVar1;
  undefined uVar2;
  int iVar3;
  int iVar4;
  undefined2 uVar5;
  
  FUN_1158_0444();
  *param_2 = 1;
  uVar5 = (undefined2)((ulong)param_1 >> 0x10);
  iVar4 = (int)param_1;
  if ((DAT_1160_037a == '\0' & *(byte *)(iVar4 + 0x48d)) != 0) {
    cVar1 = FUN_1088_3ef5(iVar4,uVar5);
    if (*(char *)(iVar4 + 0x490) == '\0' || cVar1 != '\0') {
      iVar3 = FUN_1010_3b3a();
      if (iVar3 == 6) {
        uVar2 = FUN_1088_422b(iVar4,uVar5);
        *param_2 = uVar2;
      }
      else if ((iVar3 != 7) && (iVar3 == 2)) {
        *param_2 = 0;
      }
    }
    else {
      uVar2 = FUN_1088_4c86(iVar4,uVar5);
      *param_2 = uVar2;
    }
  }
  return;
}



/* ---- FUN_1088_1383 @ 1088:1383  (661 octets) ---- */

void __stdcall16far FUN_1088_1383(undefined4 param_1,undefined param_2)

{
  byte bVar1;
  undefined extraout_AH;
  byte extraout_AH_00;
  int iVar2;
  byte extraout_AH_01;
  byte extraout_AH_02;
  byte extraout_AH_03;
  byte extraout_AH_04;
  byte extraout_AH_05;
  byte extraout_AH_06;
  byte extraout_AH_07;
  byte extraout_AH_08;
  byte extraout_AH_09;
  byte extraout_AH_10;
  byte extraout_AH_11;
  undefined extraout_AH_12;
  undefined extraout_AH_13;
  byte extraout_AH_14;
  byte extraout_AH_15;
  int iVar3;
  undefined2 uVar4;
  undefined2 unaff_SS;
  undefined *puVar5;
  undefined2 uVar6;
  undefined local_202 [256];
  undefined local_102 [252];
  undefined2 uStack_6;
  
  uStack_6 = 0x138e;
  FUN_1158_0444();
  uVar4 = (undefined2)((ulong)param_1 >> 0x10);
  iVar3 = (int)param_1;
  *(undefined *)(iVar3 + 0x48d) = param_2;
  if (*(char *)(iVar3 + 0x48d) == '\0') {
    puVar5 = local_202;
    uVar6 = unaff_SS;
    FUN_1138_1d53((int)*(undefined4 *)(iVar3 + 0x454),
                  (int)((ulong)*(undefined4 *)(iVar3 + 0x454) >> 0x10));
    FUN_1158_17e7(0xff,local_102,unaff_SS,puVar5,uVar6);
    puVar5 = local_202;
    uVar6 = unaff_SS;
    FUN_1138_1d53((int)*(undefined4 *)(iVar3 + 0x1a4),
                  (int)((ulong)*(undefined4 *)(iVar3 + 0x1a4) >> 0x10));
    FUN_1138_1d8c((int)*(undefined4 *)(iVar3 + 0x454),
                  (int)((ulong)*(undefined4 *)(iVar3 + 0x454) >> 0x10),puVar5,uVar6);
    FUN_1138_1d8c((int)*(undefined4 *)(iVar3 + 0x1a4),
                  (int)((ulong)*(undefined4 *)(iVar3 + 0x1a4) >> 0x10),local_102,unaff_SS);
    puVar5 = local_202;
    uVar6 = unaff_SS;
    FUN_1138_1d53(iVar3,uVar4);
    FUN_1158_184c(0x137f,0x1138);
    FUN_1158_184c(local_102,unaff_SS);
    FUN_1138_1d8c(iVar3,uVar4,puVar5,uVar6);
  }
  bVar1 = FUN_1158_2255(0x22,(char *)s_sThousand_1160_1088,*(undefined2 *)(iVar3 + 4),
                        *(undefined2 *)(iVar3 + 6));
  FUN_1138_1c77((int)*(undefined4 *)(iVar3 + 0x454),
                (int)((ulong)*(undefined4 *)(iVar3 + 0x454) >> 0x10),
                bVar1 | *(byte *)(iVar3 + 0x48d));
  FUN_1138_1c77((int)*(undefined4 *)(iVar3 + 0x444),
                (int)((ulong)*(undefined4 *)(iVar3 + 0x444) >> 0x10),
                CONCAT11(extraout_AH,*(undefined *)(iVar3 + 0x48d)));
  iVar2 = (uint)extraout_AH_00 * 0x100;
  if (*(char *)(iVar3 + 0x48d) == '\0') {
    iVar2 = iVar2 + 1;
  }
  FUN_1120_4979((int)*(undefined4 *)(iVar3 + 0x2a8),
                (int)((ulong)*(undefined4 *)(iVar3 + 0x2a8) >> 0x10),iVar2);
  iVar2 = (uint)extraout_AH_01 * 0x100;
  if (*(char *)(iVar3 + 0x48d) == '\0') {
    iVar2 = iVar2 + 1;
  }
  FUN_1120_4979((int)*(undefined4 *)(iVar3 + 0x2ac),
                (int)((ulong)*(undefined4 *)(iVar3 + 0x2ac) >> 0x10),iVar2);
  iVar2 = (uint)extraout_AH_02 * 0x100;
  if (*(char *)(iVar3 + 0x48d) == '\0') {
    iVar2 = iVar2 + 1;
  }
  FUN_1120_4979((int)*(undefined4 *)(iVar3 + 700),(int)((ulong)*(undefined4 *)(iVar3 + 700) >> 0x10)
                ,iVar2);
  iVar2 = (uint)extraout_AH_03 * 0x100;
  if (*(char *)(iVar3 + 0x48d) == '\0') {
    iVar2 = iVar2 + 1;
  }
  FUN_1120_4979((int)*(undefined4 *)(iVar3 + 0x2c4),
                (int)((ulong)*(undefined4 *)(iVar3 + 0x2c4) >> 0x10),iVar2);
  iVar2 = (uint)extraout_AH_04 * 0x100;
  if (*(char *)(iVar3 + 0x48d) == '\0') {
    iVar2 = iVar2 + 1;
  }
  FUN_1120_4979((int)*(undefined4 *)(iVar3 + 0x2d0),
                (int)((ulong)*(undefined4 *)(iVar3 + 0x2d0) >> 0x10),iVar2);
  iVar2 = (uint)extraout_AH_05 * 0x100;
  if (*(char *)(iVar3 + 0x48d) == '\0') {
    iVar2 = iVar2 + 1;
  }
  FUN_1120_4979((int)*(undefined4 *)(iVar3 + 0x2d8),
                (int)((ulong)*(undefined4 *)(iVar3 + 0x2d8) >> 0x10),iVar2);
  iVar2 = (uint)extraout_AH_06 * 0x100;
  if (*(char *)(iVar3 + 0x48d) == '\0') {
    iVar2 = iVar2 + 1;
  }
  FUN_1120_4979((int)*(undefined4 *)(iVar3 + 0x2e0),
                (int)((ulong)*(undefined4 *)(iVar3 + 0x2e0) >> 0x10),iVar2);
  iVar2 = (uint)extraout_AH_07 * 0x100;
  if (*(char *)(iVar3 + 0x48d) == '\0') {
    iVar2 = iVar2 + 1;
  }
  FUN_1120_4979((int)*(undefined4 *)(iVar3 + 0x2e8),
                (int)((ulong)*(undefined4 *)(iVar3 + 0x2e8) >> 0x10),iVar2);
  iVar2 = (uint)extraout_AH_08 * 0x100;
  if (*(char *)(iVar3 + 0x48d) == '\0') {
    iVar2 = iVar2 + 1;
  }
  FUN_1120_4979((int)*(undefined4 *)(iVar3 + 0x2f0),
                (int)((ulong)*(undefined4 *)(iVar3 + 0x2f0) >> 0x10),iVar2);
  iVar2 = (uint)extraout_AH_09 * 0x100;
  if (*(char *)(iVar3 + 0x48d) == '\0') {
    iVar2 = iVar2 + 1;
  }
  FUN_1120_4979((int)*(undefined4 *)(iVar3 + 0x2f8),
                (int)((ulong)*(undefined4 *)(iVar3 + 0x2f8) >> 0x10),iVar2);
  iVar2 = (uint)extraout_AH_10 * 0x100;
  if (*(char *)(iVar3 + 0x48d) == '\0') {
    iVar2 = iVar2 + 1;
  }
  FUN_1120_4979((int)*(undefined4 *)(iVar3 + 0x300),
                (int)((ulong)*(undefined4 *)(iVar3 + 0x300) >> 0x10),iVar2);
  iVar2 = (uint)extraout_AH_11 * 0x100;
  if (*(char *)(iVar3 + 0x48d) == '\0') {
    iVar2 = iVar2 + 1;
  }
  FUN_1120_4979((int)*(undefined4 *)(iVar3 + 0x308),
                (int)((ulong)*(undefined4 *)(iVar3 + 0x308) >> 0x10),iVar2);
  FUN_1138_1c77((int)*(undefined4 *)(iVar3 + 0x30c),
                (int)((ulong)*(undefined4 *)(iVar3 + 0x30c) >> 0x10),
                CONCAT11(extraout_AH_12,*(undefined *)(iVar3 + 0x48d)));
  FUN_1138_1c77((int)*(undefined4 *)(iVar3 + 0x484),
                (int)((ulong)*(undefined4 *)(iVar3 + 0x484) >> 0x10),
                CONCAT11(extraout_AH_13,*(undefined *)(iVar3 + 0x48d)));
  iVar2 = (uint)extraout_AH_14 * 0x100;
  if (*(char *)(iVar3 + 0x48d) == '\0') {
    iVar2 = iVar2 + 1;
  }
  FUN_1138_1c77((int)*(undefined4 *)(iVar3 + 0x480),
                (int)((ulong)*(undefined4 *)(iVar3 + 0x480) >> 0x10),iVar2);
  iVar2 = (uint)extraout_AH_15 * 0x100;
  if (*(char *)(iVar3 + 0x48d) == '\0') {
    iVar2 = iVar2 + 1;
  }
  FUN_1088_2c43(iVar3,uVar4,iVar2);
  return;
}



/* ---- FUN_1088_1618 @ 1088:1618  (38 octets) ---- */

int __stdcall16far FUN_1088_1618(undefined4 param_1)

{
  byte extraout_AH;
  int iVar1;
  
  FUN_1158_0444();
  iVar1 = (uint)extraout_AH * 0x100;
  if (*(char *)((int)param_1 + 0x48d) == '\0') {
    iVar1 = iVar1 + 1;
  }
  return iVar1;
}



/* ---- FUN_1088_163e @ 1088:163e  (123 octets) ---- */

void __stdcall16far FUN_1088_163e(undefined4 param_1,undefined2 param_2)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 unaff_CS;
  undefined2 unaff_SS;
  undefined *puVar3;
  undefined local_102 [252];
  undefined2 local_6;
  
  _local_6 = CONCAT22(unaff_CS,0x1649);
  FUN_1158_0444();
  FUN_1140_7303((int)DAT_1160_2c2a,(int)((ulong)DAT_1160_2c2a >> 0x10));
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  *(undefined2 *)(iVar1 + 0x48e) = param_2;
  puVar3 = local_102;
  FUN_1150_08a9(*(int *)(iVar1 + 0x48e),*(int *)(iVar1 + 0x48e) >> 0xf);
  FUN_1138_1d8c((int)*(undefined4 *)(iVar1 + 0x484),
                (int)((ulong)*(undefined4 *)(iVar1 + 0x484) >> 0x10),puVar3,unaff_SS);
  _local_6 = *(undefined4 *)(iVar1 + 0x480);
  FUN_10f0_178b((int)_local_6,(int)((ulong)_local_6 >> 0x10),*(int *)(iVar1 + 0x48e),
                *(int *)(iVar1 + 0x48e) >> 0xf);
  FUN_1088_3c31(iVar1,uVar2);
  return;
}



/* ---- TFormSADD_Decisions_SpinEditP1Change @ 1088:16c1  (1 octets) ---- */

void TFormSADD_Decisions_SpinEditP1Change
               (undefined2 param_1,undefined4 param_2,undefined2 param_3,undefined2 param_4)

{
  char cVar1;
  undefined4 uVar2;
  undefined2 uVar3;
  
  uVar3 = 0x16cc;
  FUN_1158_0444();
  cVar1 = FUN_1158_2255(0x3eb,0x10f0,param_3,param_4);
  if (cVar1 != '\0') {
    uVar2 = FUN_1158_2273(0x3eb,0x10f0,param_3,param_4);
    FUN_10f0_1733(uVar2);
    uVar3 = FUN_1158_0416(uVar3);
    FUN_1088_163e((int)param_2,(int)((ulong)param_2 >> 0x10),uVar3);
  }
  return;
}



/* ---- FUN_1088_1741 @ 1088:1741  (1136 octets) ---- */

void __stdcall16far FUN_1088_1741(undefined4 param_1,undefined4 param_2)

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
  
  local_6 = 0x174c;
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



/* ---- TFormSADD_Decisions_DBEdit1Enter @ 1088:1bcb  (1 octets) ---- */

void TFormSADD_Decisions_DBEdit1Enter
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
  
  uStack_6 = 0x1bd6;
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
        FUN_1138_1d8c((int)*(undefined4 *)(iVar6 + 0x438),
                      (int)((ulong)*(undefined4 *)(iVar6 + 0x438) >> 0x10),puVar16,uVar10);
      }
      else {
        puStack_e = (undefined4 *)FUN_1158_2273(0x7c8,(char *)s_iTime_1160_10dc + 4,uStack_6,uVar10)
        ;
        puVar16 = auStack_112;
        uVar15 = 0x1158;
        uVar14 = 0x1bbc;
        puVar2 = (undefined2 *)((int)*puStack_e + 0x44);
        uVar10 = unaff_SS;
        lStack_12 = (*(code *)*puVar2)();
        FUN_1150_10d4((longdouble)lStack_12,uVar14,uVar15);
        FUN_1138_1d8c((int)*(undefined4 *)(iVar6 + 0x438),
                      (int)((ulong)*(undefined4 *)(iVar6 + 0x438) >> 0x10),puVar16,uVar10);
      }
    }
    else {
      puStack_e = (undefined4 *)FUN_1158_2273(0xa58,(char *)s_iTime_1160_10dc + 4,uStack_6,uVar10);
      puVar16 = auStack_10e;
      uVar15 = 0x1158;
      uVar14 = 0x1bb1;
      puVar2 = (undefined2 *)((int)*puStack_e + 0x40);
      uVar10 = unaff_SS;
      (*(code *)*puVar2)();
      FUN_1150_10d4(in_ST0,uVar14,uVar15);
      FUN_1138_1d8c((int)*(undefined4 *)(iVar6 + 0x438),
                    (int)((ulong)*(undefined4 *)(iVar6 + 0x438) >> 0x10),puVar16,uVar10);
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
        FUN_10e0_60f9(puStack_e,0x1bc8,0x1158);
      }
    }
    else {
      puStack_e = (undefined4 *)FUN_1158_2273(0xa58,(char *)s_iTime_1160_10dc + 4,uStack_6,uVar10);
      FUN_10e0_60f9(puStack_e,0x1bc2,0x1158);
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
    if (cVar3 != '\0') {
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



/* ---- TFormSADD_Decisions_DBEdit1Exit @ 1088:1f5e  (1 octets) ---- */

void TFormSADD_Decisions_DBEdit1Exit(undefined2 param_1,undefined4 param_2)

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
  if (*(char *)((int)param_2 + 0x48d) != '\0') {
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
        FUN_1088_1741();
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
  FUN_1088_3ef5((int)param_2,uVar4);
  return;
}



/* ---- TFormSADD_Decisions_DBEdit1KeyUp @ 1088:237a  (150 octets) ---- */

void __stdcall16far
TFormSADD_Decisions_DBEdit1KeyUp
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
  
  _local_6 = CONCAT22(unaff_CS,0x2385);
  FUN_1158_0444();
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  if (*param_2 == 0x11) {
    uVar3 = *(undefined4 *)((int)param_1 + 0x1c8);
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
        uVar3 = *(undefined4 *)((int)param_1 + 0x438);
        FUN_1138_1d8c((int)uVar3,(int)((ulong)uVar3 >> 0x10),puVar4,unaff_SS);
      }
    }
  }
  return;
}



/* ---- TFormSADD_Decisions_DBEdit1KeyDown @ 1088:2423  (1 octets) ---- */

void TFormSADD_Decisions_DBEdit1KeyDown
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
  undefined4 uStack_10a;
  char acStack_106 [256];
  int iStack_6;
  
  iStack_6 = 0x242e;
  FUN_1158_0444();
  if ((*param_4 == 0x70) && (cVar2 = FUN_1158_2255(0x5c1,0x1138,param_5,param_6), cVar2 != '\0')) {
    *param_4 = 0;
    FUN_1158_2273();
    FUN_1140_77b2();
  }
  if (*param_4 == 0x11) {
    uVar7 = (undefined2)((ulong)param_2 >> 0x10);
    iVar5 = (int)param_2;
    if (*(char *)((int)*(undefined4 *)(iVar5 + 0x1c8) + 0x29) == '\0') {
      acStack_106[0] = '\0';
      cVar2 = FUN_1158_2255(0x22,0x10d0,param_5,param_6);
      if (cVar2 != '\0') {
        uStack_10e = FUN_1158_2273(0x22,0x10d0,param_5,param_6);
        puVar11 = auStack_20e;
        uVar8 = unaff_SS;
        FUN_10d0_1a9f(uStack_10e);
        uVar10 = FUN_10d0_1a5f((int)uStack_10e,(int)((ulong)uStack_10e >> 0x10));
        uVar10 = *(undefined4 *)((int)uVar10 + 0x1a);
        uStack_10a = FUN_10d8_3b9b((int)uVar10,(int)((ulong)uVar10 >> 0x10),puVar11,uVar8);
        cVar2 = FUN_1158_2255(0xa58,(char *)s_iTime_1160_10dc + 4,uStack_10a);
        if (cVar2 == '\0') {
          cVar2 = FUN_1158_2255(0x7c8,(char *)s_iTime_1160_10dc + 4,uStack_10a);
          if (cVar2 == '\0') {
            FUN_1100_1524((int)uStack_10e,(int)((ulong)uStack_10e >> 0x10));
            FUN_1158_17e7();
          }
          else {
            puStack_112 = (undefined4 *)
                          FUN_1158_2273(0x7c8,(char *)s_iTime_1160_10dc + 4,uStack_10a);
            uVar9 = 0x1158;
            uVar8 = 0x241b;
            puVar1 = (undefined2 *)((int)*puStack_112 + 0x44);
            lStack_116 = (*(code *)*puVar1)();
            FUN_1150_10d4((longdouble)lStack_116,uVar8,uVar9);
            FUN_1158_17e7();
          }
        }
        else {
          puStack_112 = (undefined4 *)FUN_1158_2273(0xa58,(char *)s_iTime_1160_10dc + 4,uStack_10a);
          uVar9 = 0x1158;
          uVar8 = 0x2410;
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
        uVar10 = FUN_1138_19d4((int)uStack_10e,(int)((ulong)uStack_10e >> 0x10),iStack_6,iVar3);
      }
      iStack_6 = (int)uVar10;
      uVar8 = 0x1158;
      cVar2 = FUN_1158_2255(0x3eb,0x10f0,param_5,param_6);
      uVar10 = CONCAT22((int)((ulong)uVar10 >> 0x10),iStack_6);
      if (cVar2 != '\0') {
        uStack_10e = FUN_1158_2273(0x3eb,0x10f0,param_5,param_6);
        uVar10 = FUN_10f0_1733(uStack_10e);
        FUN_1150_08a9(uVar10);
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
      if (acStack_106[0] != '\0') {
        puVar11 = auStack_20a;
        uVar9 = unaff_SS;
        FUN_1158_17cd(0x2421,uVar8);
        FUN_1158_184c(acStack_106,unaff_SS);
        FUN_1158_184c(0x2421,0x1158);
        FUN_1138_1d8c((int)*(undefined4 *)(iVar5 + 0x1c8),
                      (int)((ulong)*(undefined4 *)(iVar5 + 0x1c8) >> 0x10),puVar11,uVar9);
        uStack_10e = FUN_1140_33d5(iVar5,uVar7);
        uVar8 = (undefined2)((ulong)*(undefined4 *)(iVar5 + 0x1c8) >> 0x10);
        iVar6 = (int)*(undefined4 *)(iVar5 + 0x1c8);
        FUN_1128_2099(uStack_10e,*(undefined2 *)(iVar6 + 0x34),*(undefined2 *)(iVar6 + 0x36));
        puVar11 = auStack_20e;
        uVar8 = unaff_SS;
        FUN_1138_1d53((int)*(undefined4 *)(iVar5 + 0x1c8),
                      (int)((ulong)*(undefined4 *)(iVar5 + 0x1c8) >> 0x10));
        uVar8 = FUN_1128_2003(uStack_10e,puVar11,uVar8);
        FUN_1138_17bf((int)*(undefined4 *)(iVar5 + 0x1c8),
                      (int)((ulong)*(undefined4 *)(iVar5 + 0x1c8) >> 0x10),uVar8);
        puVar11 = auStack_20e;
        FUN_1138_1d53((int)*(undefined4 *)(iVar5 + 0x1c8),
                      (int)((ulong)*(undefined4 *)(iVar5 + 0x1c8) >> 0x10));
        iVar6 = FUN_1128_204e(uStack_10e,puVar11,unaff_SS);
        iVar4 = (int)((long)iVar6 * 3);
        if ((long)iVar4 != (long)iVar6 * 3) {
          iVar4 = FUN_1158_043e(0x1128);
        }
        FUN_1138_17e1((int)*(undefined4 *)(iVar5 + 0x1c8),
                      (int)((ulong)*(undefined4 *)(iVar5 + 0x1c8) >> 0x10),iVar4 / 2);
        uVar10 = FUN_1138_1a06(iVar5,uVar7,iStack_6,(int)((ulong)uVar10 >> 0x10));
        iStack_6 = (int)uVar10;
        uStack_10e._2_2_ = (undefined2)((ulong)*(undefined4 *)(iVar5 + 0x1c8) >> 0x10);
        uStack_10e._0_2_ = (int)*(undefined4 *)(iVar5 + 0x1c8);
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
        FUN_1138_1c77((int)*(undefined4 *)(iVar5 + 0x1c8),
                      (int)((ulong)*(undefined4 *)(iVar5 + 0x1c8) >> 0x10),1);
      }
    }
  }
  return;
}



/* ---- FUN_1088_2964 @ 1088:2964  (264 octets) ---- */

void __stdcall16far FUN_1088_2964(undefined4 param_1,undefined2 param_2,undefined2 param_3)

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
        cVar1 = FUN_1158_2255(0xba2,0x10d0,uVar8);
        if (cVar1 != '\0') {
          uVar8 = FUN_1148_5246(uVar6,uVar7,iVar2);
          uVar8 = FUN_1158_2273(0xba2,0x10d0,uVar8);
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



/* ---- FUN_1088_2a6c @ 1088:2a6c  (335 octets) ---- */

void __stdcall16far FUN_1088_2a6c(undefined4 param_1,char param_2)

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
  
  uVar17 = 0x2a77;
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
      cVar3 = FUN_1158_2255(0xba2,0x10d0,uVar15);
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



/* ---- FUN_1088_2bbb @ 1088:2bbb  (136 octets) ---- */

void __stdcall16far FUN_1088_2bbb(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined4 uVar6;
  undefined2 uVar7;
  
  uVar7 = 0x2bc6;
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
        FUN_1088_1741(uVar4,uVar5,uVar6);
      }
      if (iVar2 == iVar3) break;
      iVar2 = iVar2 + 1;
    }
  }
  return;
}



/* ---- FUN_1088_2c43 @ 1088:2c43  (300 octets) ---- */

void __stdcall16far FUN_1088_2c43(undefined4 param_1,undefined param_2)

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



/* ---- FUN_1088_2d6f @ 1088:2d6f  (29 octets) ---- */

void __stdcall16far FUN_1088_2d6f(undefined4 param_1)

{
  FUN_1158_0444();
  FUN_1090_13b6(0,*(undefined2 *)((int)param_1 + 0x48e));
  return;
}



/* ---- TFormSADD_Decisions_PrintBtnClick @ 1088:2d92  (1 octets) ---- */

void TFormSADD_Decisions_PrintBtnClick(undefined2 param_1,undefined4 param_2)

{
  char cVar1;
  undefined2 uVar2;
  int iVar3;
  undefined2 uVar4;
  undefined2 unaff_CS;
  undefined4 uVar5;
  undefined2 uStack_18;
  undefined *puStack_16;
  undefined2 uStack_14;
  undefined2 uStack_12;
  undefined2 uStack_10;
  char *pcStack_e;
  char *pcStack_c;
  int iStack_a;
  char *pcStack_8;
  int iStack_6;
  
  _iStack_6 = CONCAT22(unaff_CS,0x2d9d);
  FUN_1158_0444();
  uVar4 = (undefined2)((ulong)param_2 >> 0x10);
  iVar3 = (int)param_2;
  pcStack_c = (char *)0x1158;
  pcStack_e = (char *)0x2daa;
  iStack_a = iVar3;
  pcStack_8 = (char *)uVar4;
  cVar1 = FUN_1088_3ef5();
  if (cVar1 == '\0') {
    pcStack_8 = (char *)((ulong)*(undefined4 *)(iVar3 + 0x1b0) >> 0x10);
    iStack_a = (int)*(undefined4 *)(iVar3 + 0x1b0);
    pcStack_c = (char *)s_sThousand_1160_1088;
    pcStack_e = (char *)0x2dc5;
    uVar2 = FUN_1108_2f17();
    if ((char)uVar2 != '\0') {
      pcStack_c = (char *)CONCAT11((char)((uint)uVar2 >> 8),1);
      pcStack_e = (char *)s_windows_1160_100f + 1;
      uStack_10 = 0x25b4;
      uStack_12 = 0x1108;
      uStack_14 = 0x2de2;
      iStack_a = iVar3;
      pcStack_8 = (char *)uVar4;
      uVar5 = FUN_1140_2553();
      uVar2 = (undefined2)((ulong)uVar5 >> 0x10);
      iStack_6 = (int)uVar5;
      uStack_12 = 0x1140;
      uStack_14 = 0x2d8c;
      uStack_18 = DAT_1160_1858;
      DAT_1160_1858 = &uStack_18;
      puStack_16 = &stack0xfffe;
      DAT_1160_2004._0_2_ = iStack_6;
      DAT_1160_2004._2_2_ = uVar2;
      FUN_1010_2f8d(uVar5,1);
      *(undefined2 *)(iStack_6 + 0x2b9) = 0x2d6f;
      *(undefined2 *)(iStack_6 + 699) = (char *)s_sThousand_1160_1088;
      *(int *)(iStack_6 + 0x2bd) = iVar3;
      *(undefined2 *)(iStack_6 + 0x2bf) = uVar4;
      iVar3 = iStack_6;
      FUN_1140_5d45(iStack_6,uVar2);
      DAT_1160_1858 = (undefined2 *)iVar3;
      puStack_16 = (undefined *)0x1140;
      uStack_18 = 0x2e4b;
      FUN_1140_5f1d((int)DAT_1160_2004,DAT_1160_2004._2_2_);
      return;
    }
  }
  else {
    pcStack_8 = (char *)s_sThousand_1160_1088;
    iStack_a = 0x2db3;
    FUN_1010_37d1();
  }
  return;
}



/* ---- TFormSADD_Decisions_PrintRapideBtn1Click @ 1088:2e4f  (69 octets) ---- */

void __stdcall16far TFormSADD_Decisions_PrintRapideBtn1Click(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  undefined2 uVar3;
  
  FUN_1158_0444();
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  iVar2 = (int)param_1;
  cVar1 = FUN_1088_3ef5(iVar2,uVar3);
  if (cVar1 == '\0') {
    cVar1 = FUN_1108_2f17((int)*(undefined4 *)(iVar2 + 0x1b0),
                          (int)((ulong)*(undefined4 *)(iVar2 + 0x1b0) >> 0x10));
    if (cVar1 != '\0') {
      FUN_1090_13b6(1,*(undefined2 *)(iVar2 + 0x48e));
    }
  }
  else {
    FUN_1010_37d1();
  }
  return;
}



/* ---- TFormSADD_Decisions_OKBtnClick @ 1088:2e94  (52 octets) ---- */

void __stdcall16far TFormSADD_Decisions_OKBtnClick(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  undefined2 uVar3;
  
  FUN_1158_0444();
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  iVar2 = (int)param_1;
  cVar1 = FUN_1158_2255(0x22,(char *)s_sThousand_1160_1088,*(undefined2 *)(iVar2 + 4),
                        *(undefined2 *)(iVar2 + 6));
  if (cVar1 != '\0') {
    FUN_1140_5556(iVar2,uVar3);
  }
  return;
}



/* ---- TFormSADD_Decisions_BasculeBtnClick @ 1088:2ec8  (410 octets) ---- */

void __stdcall16far TFormSADD_Decisions_BasculeBtnClick(undefined4 param_1)

{
  undefined2 *puVar1;
  char cVar2;
  undefined extraout_AH;
  int iVar3;
  undefined2 extraout_DX;
  int iVar4;
  int iVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  
  FUN_1158_0444();
  uVar6 = (undefined2)((ulong)param_1 >> 0x10);
  iVar4 = (int)param_1;
  if (*(char *)(iVar4 + 0x48d) == '\0') {
    cVar2 = FUN_1158_2255(0x22,(char *)s_sThousand_1160_1088,*(undefined2 *)(iVar4 + 4),
                          *(undefined2 *)(iVar4 + 6));
    if (cVar2 != '\0') {
      uVar9 = FUN_1158_2273(0x22,(char *)s_sThousand_1160_1088,*(undefined2 *)(iVar4 + 4),
                            *(undefined2 *)(iVar4 + 6));
      FUN_1140_5ccc(uVar9);
    }
  }
  else {
    if (*(char *)(iVar4 + 0x488) == '\0') {
      uVar9 = FUN_1140_2553(0x22,(char *)s_sThousand_1160_1088,CONCAT11(extraout_AH,1),iVar4,uVar6);
      *(undefined2 *)(iVar4 + 0x489) = (int)uVar9;
      *(undefined2 *)(iVar4 + 0x48b) = (int)((ulong)uVar9 >> 0x10);
      uVar7 = (undefined2)((ulong)*(undefined4 *)(iVar4 + 0x489) >> 0x10);
      iVar5 = (int)*(undefined4 *)(iVar4 + 0x489);
      FUN_1088_1383(iVar5,uVar7,0);
      FUN_1088_3250(iVar5,uVar7);
      FUN_1140_3865(iVar5,uVar7,0);
      puVar8 = (undefined4 *)
               FUN_1158_2273(0x4fb,0x1140,*(undefined2 *)(iVar5 + 4),*(undefined2 *)(iVar5 + 6));
      puVar1 = (undefined2 *)((int)*puVar8 + 0x30);
      (*(code *)*puVar1)(0x1158,puVar8);
      FUN_1138_179d(iVar5,uVar7,extraout_DX);
      puVar8 = (undefined4 *)
               FUN_1158_2273(0x4fb,0x1140,*(undefined2 *)(iVar5 + 4),*(undefined2 *)(iVar5 + 6));
      puVar1 = (undefined2 *)((int)*puVar8 + 0x30);
      uVar9 = (*(code *)*puVar1)(0x1158,puVar8);
      iVar3 = (int)uVar9 + 0x1e;
      if (SCARRY2((int)uVar9,0x1e)) {
        iVar3 = FUN_1158_043e(0x1158,uVar9);
      }
      FUN_1138_177b(iVar5,uVar7,iVar3);
      uVar9 = FUN_1158_2273(0x22,(char *)s_sThousand_1160_1088,*(undefined2 *)(iVar5 + 4),
                            *(undefined2 *)(iVar5 + 6));
      *(undefined *)((int)uVar9 + 0x488) = 1;
      FUN_1088_163e((int)*(undefined4 *)(iVar4 + 0x489),
                    (int)((ulong)*(undefined4 *)(iVar4 + 0x489) >> 0x10),
                    *(undefined2 *)(iVar4 + 0x48e));
    }
    uVar9 = *(undefined4 *)((int)*(undefined4 *)(iVar4 + 0x489) + 0x17c);
    FUN_10a8_246f((int)uVar9,(int)((ulong)uVar9 >> 0x10),
                  *(undefined2 *)((int)*(undefined4 *)(iVar4 + 0x17c) + 0xee));
    FUN_1140_5ccc((int)*(undefined4 *)(iVar4 + 0x489),
                  (int)((ulong)*(undefined4 *)(iVar4 + 0x489) >> 0x10));
  }
  return;
}



/* ---- TFormSADD_Decisions_VerifierBtnClick @ 1088:3062  (24 octets) ---- */

void __stdcall16far TFormSADD_Decisions_VerifierBtnClick(undefined4 param_1)

{
  FUN_1158_0444();
  FUN_1088_4c86((int)param_1,(int)((ulong)param_1 >> 0x10));
  return;
}



/* ---- TFormSADD_Decisions_EnregistrerBtnClick @ 1088:307a  (43 octets) ---- */

void __stdcall16far TFormSADD_Decisions_EnregistrerBtnClick(undefined4 param_1)

{
  undefined extraout_AH;
  int iVar1;
  undefined2 uVar2;
  
  FUN_1158_0444();
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = FUN_1010_3bda(CONCAT11(extraout_AH,*(undefined *)((int)param_1 + 0x490)));
  if (iVar1 == 6) {
    FUN_1088_407b((int)param_1,uVar2);
  }
  return;
}



/* ---- TFormSADD_Decisions_DefautBtnClick @ 1088:30a5  (24 octets) ---- */

void __stdcall16far TFormSADD_Decisions_DefautBtnClick(undefined4 param_1)

{
  FUN_1158_0444();
  FUN_1088_4306((int)param_1,(int)((ulong)param_1 >> 0x10));
  return;
}



/* ---- TFormSADD_Decisions_InitialBtnClick @ 1088:30bd  (197 octets) ---- */

void __stdcall16far TFormSADD_Decisions_InitialBtnClick(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  
  FUN_1158_0444();
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  uVar4 = (undefined2)((ulong)*(undefined4 *)(iVar1 + 400) >> 0x10);
  iVar2 = (int)*(undefined4 *)(iVar1 + 400);
  if (*(char *)(iVar2 + 0x181) == '\0') {
    FUN_10d8_558b(iVar2,uVar4);
    FUN_10d8_533c(iVar2,uVar4);
  }
  uVar4 = (undefined2)((ulong)*(undefined4 *)(iVar1 + 0x1bc) >> 0x10);
  iVar2 = (int)*(undefined4 *)(iVar1 + 0x1bc);
  if (*(char *)(iVar2 + 0x181) == '\0') {
    FUN_10d8_558b(iVar2,uVar4);
    FUN_10d8_533c(iVar2,uVar4);
  }
  uVar4 = (undefined2)((ulong)*(undefined4 *)(iVar1 + 0x1c0) >> 0x10);
  iVar2 = (int)*(undefined4 *)(iVar1 + 0x1c0);
  if (*(char *)(iVar2 + 0x181) == '\0') {
    FUN_10d8_558b(iVar2,uVar4);
    FUN_10d8_533c(iVar2,uVar4);
  }
  FUN_1088_35e4(iVar1,uVar3);
  *(undefined *)(iVar1 + 0x491) = 0;
  FUN_1088_2bbb(iVar1,uVar3);
  FUN_1088_2964(iVar1,uVar3,0xfffa,0xffff);
  FUN_1088_2a6c(iVar1,uVar3,0);
  FUN_1088_3ef5(iVar1,uVar3);
  return;
}



/* ---- FUN_1088_3182 @ 1088:3182  (206 octets) ---- */

void __stdcall16far FUN_1088_3182(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  
  FUN_1158_0444();
  uVar4 = (undefined2)((ulong)param_1 >> 0x10);
  iVar2 = (int)param_1;
  uVar5 = (undefined2)((ulong)*(undefined4 *)(iVar2 + 400) >> 0x10);
  uVar3 = (undefined2)*(undefined4 *)(iVar2 + 400);
  cVar1 = FUN_10d8_3202(uVar3,uVar5);
  if (cVar1 != '\0') {
    FUN_10d8_31d2(uVar3,uVar5);
    FUN_10e0_2ed2(uVar3,uVar5,0);
  }
  uVar5 = (undefined2)((ulong)*(undefined4 *)(iVar2 + 0x1bc) >> 0x10);
  uVar3 = (undefined2)*(undefined4 *)(iVar2 + 0x1bc);
  cVar1 = FUN_10d8_3202(uVar3,uVar5);
  if (cVar1 != '\0') {
    FUN_10d8_31d2(uVar3,uVar5);
    FUN_10e0_2ed2(uVar3,uVar5,0);
  }
  uVar5 = (undefined2)((ulong)*(undefined4 *)(iVar2 + 0x1c0) >> 0x10);
  uVar3 = (undefined2)*(undefined4 *)(iVar2 + 0x1c0);
  cVar1 = FUN_10d8_3202(uVar3,uVar5);
  if (cVar1 != '\0') {
    FUN_10d8_31d2(uVar3,uVar5);
    FUN_10e0_2ed2(uVar3,uVar5,0);
  }
  uVar5 = (undefined2)((ulong)*(undefined4 *)(iVar2 + 0x1cc) >> 0x10);
  uVar3 = (undefined2)*(undefined4 *)(iVar2 + 0x1cc);
  cVar1 = FUN_10d8_3202(uVar3,uVar5);
  if (cVar1 != '\0') {
    FUN_10d8_31d2(uVar3,uVar5);
    FUN_10e0_2ed2(uVar3,uVar5,0);
  }
  return;
}



/* ---- FUN_1088_3250 @ 1088:3250  (437 octets) ---- */

void __stdcall16far FUN_1088_3250(undefined4 param_1)

{
  char cVar1;
  undefined2 uVar2;
  int iVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  
  FUN_1158_0444();
  uVar5 = (undefined2)((ulong)param_1 >> 0x10);
  iVar3 = (int)param_1;
  *(undefined *)((int)*(undefined4 *)(iVar3 + 0x194) + 0x23) = *(undefined *)(iVar3 + 0x48d);
  *(undefined *)((int)*(undefined4 *)(iVar3 + 0x198) + 0x23) = *(undefined *)(iVar3 + 0x48d);
  *(undefined *)((int)*(undefined4 *)(iVar3 + 0x19c) + 0x23) = *(undefined *)(iVar3 + 0x48d);
  uVar6 = (undefined2)((ulong)*(undefined4 *)(iVar3 + 400) >> 0x10);
  uVar4 = (undefined2)*(undefined4 *)(iVar3 + 400);
  FUN_10d8_31d2(uVar4,uVar6);
  uVar2 = FUN_1088_1618(iVar3,uVar5);
  FUN_10e0_2ffb(uVar4,uVar6,uVar2);
  cVar1 = FUN_1088_1618(iVar3,uVar5);
  if (cVar1 == '\0') {
    FUN_10e0_2ed2(uVar4,uVar6,1);
  }
  else {
    FUN_10e0_2ed2(uVar4,uVar6,0);
  }
  FUN_10d8_31bf(uVar4,uVar6);
  uVar6 = (undefined2)((ulong)*(undefined4 *)(iVar3 + 0x1bc) >> 0x10);
  uVar4 = (undefined2)*(undefined4 *)(iVar3 + 0x1bc);
  FUN_10d8_31d2(uVar4,uVar6);
  uVar2 = FUN_1088_1618(iVar3,uVar5);
  FUN_10e0_2ffb(uVar4,uVar6,uVar2);
  cVar1 = FUN_1088_1618(iVar3,uVar5);
  if (cVar1 == '\0') {
    FUN_10e0_2ed2(uVar4,uVar6,1);
  }
  else {
    FUN_10e0_2ed2(uVar4,uVar6,0);
  }
  FUN_10d8_31bf(uVar4,uVar6);
  uVar6 = (undefined2)((ulong)*(undefined4 *)(iVar3 + 0x1c0) >> 0x10);
  uVar4 = (undefined2)*(undefined4 *)(iVar3 + 0x1c0);
  FUN_10d8_31d2(uVar4,uVar6);
  uVar2 = FUN_1088_1618(iVar3,uVar5);
  FUN_10e0_2ffb(uVar4,uVar6,uVar2);
  cVar1 = FUN_1088_1618(iVar3,uVar5);
  if (cVar1 == '\0') {
    FUN_10e0_2ed2(uVar4,uVar6,1);
  }
  else {
    FUN_10e0_2ed2(uVar4,uVar6,0);
  }
  FUN_10d8_31bf(uVar4,uVar6);
  uVar6 = (undefined2)((ulong)*(undefined4 *)(iVar3 + 0x1cc) >> 0x10);
  uVar4 = (undefined2)*(undefined4 *)(iVar3 + 0x1cc);
  FUN_10d8_31d2(uVar4,uVar6);
  uVar2 = FUN_1088_1618(iVar3,uVar5);
  FUN_10e0_2ffb(uVar4,uVar6,uVar2);
  cVar1 = FUN_1088_1618(iVar3,uVar5);
  if (cVar1 == '\0') {
    FUN_10e0_2ed2(uVar4,uVar6,1);
  }
  else {
    FUN_10e0_2ed2(uVar4,uVar6,0);
  }
  FUN_10d8_31bf(uVar4,uVar6);
  return;
}



/* ---- FUN_1088_3405 @ 1088:3405  (288 octets) ---- */

void __stdcall16far FUN_1088_3405(undefined4 param_1)

{
  int iVar1;
  undefined2 uVar2;
  
  FUN_1158_0444();
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  FUN_10f0_178b((int)*(undefined4 *)(iVar1 + 700),(int)((ulong)*(undefined4 *)(iVar1 + 700) >> 0x10)
                ,0,0);
  FUN_10f0_178b((int)*(undefined4 *)(iVar1 + 0x2c4),
                (int)((ulong)*(undefined4 *)(iVar1 + 0x2c4) >> 0x10),0,0);
  FUN_10f0_178b((int)*(undefined4 *)(iVar1 + 0x2d0),
                (int)((ulong)*(undefined4 *)(iVar1 + 0x2d0) >> 0x10),0,0);
  FUN_10f0_178b((int)*(undefined4 *)(iVar1 + 0x2d8),
                (int)((ulong)*(undefined4 *)(iVar1 + 0x2d8) >> 0x10),0,0);
  FUN_10f0_178b((int)*(undefined4 *)(iVar1 + 0x2e0),
                (int)((ulong)*(undefined4 *)(iVar1 + 0x2e0) >> 0x10),0,0);
  FUN_10f0_178b((int)*(undefined4 *)(iVar1 + 0x2e8),
                (int)((ulong)*(undefined4 *)(iVar1 + 0x2e8) >> 0x10),0,0);
  FUN_10f0_178b((int)*(undefined4 *)(iVar1 + 0x2f0),
                (int)((ulong)*(undefined4 *)(iVar1 + 0x2f0) >> 0x10),0,0);
  FUN_10f0_178b((int)*(undefined4 *)(iVar1 + 0x2f8),
                (int)((ulong)*(undefined4 *)(iVar1 + 0x2f8) >> 0x10),0,0);
  FUN_10f0_178b((int)*(undefined4 *)(iVar1 + 0x300),
                (int)((ulong)*(undefined4 *)(iVar1 + 0x300) >> 0x10),0,0);
  FUN_10f0_178b((int)*(undefined4 *)(iVar1 + 0x308),
                (int)((ulong)*(undefined4 *)(iVar1 + 0x308) >> 0x10),0,0);
  FUN_1120_714c((int)*(undefined4 *)(iVar1 + 0x310),
                (int)((ulong)*(undefined4 *)(iVar1 + 0x310) >> 0x10),1);
  FUN_1120_714c((int)*(undefined4 *)(iVar1 + 0x314),
                (int)((ulong)*(undefined4 *)(iVar1 + 0x314) >> 0x10),0);
  FUN_1120_714c((int)*(undefined4 *)(iVar1 + 0x318),
                (int)((ulong)*(undefined4 *)(iVar1 + 0x318) >> 0x10),0);
  TFormSADD_Decisions_RadioButton1Click(iVar1,uVar2,iVar1,uVar2);
  return;
}



/* ---- FUN_1088_35e4 @ 1088:35e4  (723 octets) ---- */

void __stdcall16far FUN_1088_35e4(undefined4 param_1)

{
  undefined2 *puVar1;
  undefined2 uVar2;
  uint uVar3;
  uint uVar4;
  byte extraout_AH;
  int iVar5;
  byte extraout_AH_00;
  int iVar6;
  undefined2 uVar7;
  undefined2 uVar8;
  undefined4 *puVar9;
  undefined4 uVar10;
  
  FUN_1158_0444();
  uVar7 = (undefined2)((ulong)param_1 >> 0x10);
  iVar6 = (int)param_1;
  uVar8 = (undefined2)((ulong)*(undefined4 *)(iVar6 + 400) >> 0x10);
  uVar2 = (undefined2)*(undefined4 *)(iVar6 + 400);
  puVar9 = (undefined4 *)FUN_10d8_3b9b(uVar2,uVar8,0x3525,0x1158);
  puVar1 = (undefined2 *)((int)*puVar9 + 0x44);
  uVar10 = (*(code *)*puVar1)(0x10d8,puVar9);
  FUN_10f0_178b((int)*(undefined4 *)(iVar6 + 0x2a8),
                (int)((ulong)*(undefined4 *)(iVar6 + 0x2a8) >> 0x10),uVar10);
  puVar9 = (undefined4 *)FUN_10d8_3b9b(uVar2,uVar8,0x352e,0x10f0);
  puVar1 = (undefined2 *)((int)*puVar9 + 0x44);
  uVar10 = (*(code *)*puVar1)(0x10d8,puVar9);
  FUN_10f0_178b((int)*(undefined4 *)(iVar6 + 0x2ac),
                (int)((ulong)*(undefined4 *)(iVar6 + 0x2ac) >> 0x10),uVar10);
  if (*(char *)(iVar6 + 0x48d) == '\0') {
    puVar9 = (undefined4 *)FUN_10d8_3b9b(uVar2,uVar8,0x3537,0x10f0);
    puVar1 = (undefined2 *)((int)*puVar9 + 0x44);
    uVar10 = (*(code *)*puVar1)(0x10d8,puVar9);
    FUN_10f0_178b((int)*(undefined4 *)(iVar6 + 700),
                  (int)((ulong)*(undefined4 *)(iVar6 + 700) >> 0x10),uVar10);
    puVar9 = (undefined4 *)FUN_10d8_3b9b(uVar2,uVar8,0x3546,0x10f0);
    puVar1 = (undefined2 *)((int)*puVar9 + 0x44);
    uVar10 = (*(code *)*puVar1)(0x10d8,puVar9);
    FUN_10f0_178b((int)*(undefined4 *)(iVar6 + 0x2c4),
                  (int)((ulong)*(undefined4 *)(iVar6 + 0x2c4) >> 0x10),uVar10);
    puVar9 = (undefined4 *)FUN_10d8_3b9b(uVar2,uVar8,0x3552,0x10f0);
    puVar1 = (undefined2 *)((int)*puVar9 + 0x44);
    uVar10 = (*(code *)*puVar1)(0x10d8,puVar9);
    FUN_10f0_178b((int)*(undefined4 *)(iVar6 + 0x2d0),
                  (int)((ulong)*(undefined4 *)(iVar6 + 0x2d0) >> 0x10),uVar10);
    puVar9 = (undefined4 *)FUN_10d8_3b9b(uVar2,uVar8,0x3562,0x10f0);
    puVar1 = (undefined2 *)((int)*puVar9 + 0x44);
    uVar10 = (*(code *)*puVar1)(0x10d8,puVar9);
    FUN_10f0_178b((int)*(undefined4 *)(iVar6 + 0x2d8),
                  (int)((ulong)*(undefined4 *)(iVar6 + 0x2d8) >> 0x10),uVar10);
    puVar9 = (undefined4 *)FUN_10d8_3b9b(uVar2,uVar8,0x3572,0x10f0);
    puVar1 = (undefined2 *)((int)*puVar9 + 0x44);
    uVar10 = (*(code *)*puVar1)(0x10d8,puVar9);
    FUN_10f0_178b((int)*(undefined4 *)(iVar6 + 0x2e0),
                  (int)((ulong)*(undefined4 *)(iVar6 + 0x2e0) >> 0x10),uVar10);
    puVar9 = (undefined4 *)FUN_10d8_3b9b(uVar2,uVar8,0x3582,0x10f0);
    puVar1 = (undefined2 *)((int)*puVar9 + 0x44);
    uVar10 = (*(code *)*puVar1)(0x10d8,puVar9);
    FUN_10f0_178b((int)*(undefined4 *)(iVar6 + 0x2e8),
                  (int)((ulong)*(undefined4 *)(iVar6 + 0x2e8) >> 0x10),uVar10);
    puVar9 = (undefined4 *)FUN_10d8_3b9b(uVar2,uVar8,0x3592,0x10f0);
    puVar1 = (undefined2 *)((int)*puVar9 + 0x44);
    uVar10 = (*(code *)*puVar1)(0x10d8,puVar9);
    FUN_10f0_178b((int)*(undefined4 *)(iVar6 + 0x2f0),
                  (int)((ulong)*(undefined4 *)(iVar6 + 0x2f0) >> 0x10),uVar10);
    puVar9 = (undefined4 *)FUN_10d8_3b9b(uVar2,uVar8,0x35a2,0x10f0);
    puVar1 = (undefined2 *)((int)*puVar9 + 0x44);
    uVar10 = (*(code *)*puVar1)(0x10d8,puVar9);
    FUN_10f0_178b((int)*(undefined4 *)(iVar6 + 0x2f8),
                  (int)((ulong)*(undefined4 *)(iVar6 + 0x2f8) >> 0x10),uVar10);
    puVar9 = (undefined4 *)FUN_10d8_3b9b(uVar2,uVar8,0x35b2,0x10f0);
    puVar1 = (undefined2 *)((int)*puVar9 + 0x44);
    uVar10 = (*(code *)*puVar1)(0x10d8,puVar9);
    FUN_10f0_178b((int)*(undefined4 *)(iVar6 + 0x300),
                  (int)((ulong)*(undefined4 *)(iVar6 + 0x300) >> 0x10),uVar10);
    puVar9 = (undefined4 *)FUN_10d8_3b9b(uVar2,uVar8,0x35c2,0x10f0);
    puVar1 = (undefined2 *)((int)*puVar9 + 0x44);
    uVar10 = (*(code *)*puVar1)(0x10d8,puVar9);
    FUN_10f0_178b((int)*(undefined4 *)(iVar6 + 0x308),
                  (int)((ulong)*(undefined4 *)(iVar6 + 0x308) >> 0x10),uVar10);
    puVar9 = (undefined4 *)FUN_10d8_3b9b(uVar2,uVar8,0x35d2,0x10f0);
    puVar1 = (undefined2 *)((int)*puVar9 + 0x44);
    (*(code *)*puVar1)(0x10d8,puVar9);
    uVar3 = FUN_1158_0416();
    uVar4 = uVar3 & 0xff00;
    if (uVar3 == 0) {
      uVar4 = uVar4 + 1;
    }
    FUN_1120_714c((int)*(undefined4 *)(iVar6 + 0x310),
                  (int)((ulong)*(undefined4 *)(iVar6 + 0x310) >> 0x10),uVar4);
    iVar5 = (uint)extraout_AH * 0x100;
    if (uVar3 == 1) {
      iVar5 = iVar5 + 1;
    }
    FUN_1120_714c((int)*(undefined4 *)(iVar6 + 0x314),
                  (int)((ulong)*(undefined4 *)(iVar6 + 0x314) >> 0x10),iVar5);
    iVar5 = (uint)extraout_AH_00 * 0x100;
    if (uVar3 == 2) {
      iVar5 = iVar5 + 1;
    }
    FUN_1120_714c((int)*(undefined4 *)(iVar6 + 0x318),
                  (int)((ulong)*(undefined4 *)(iVar6 + 0x318) >> 0x10),iVar5);
    TFormSADD_Decisions_RadioButton1Click(iVar6,uVar7,iVar6,uVar7);
  }
  else {
    FUN_1088_3405(iVar6,uVar7);
  }
  return;
}



/* ---- FUN_1088_396e @ 1088:396e  (679 octets) ---- */

void __stdcall16far FUN_1088_396e(undefined4 param_1)

{
  undefined2 *puVar1;
  int iVar2;
  int iVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  int unaff_CS;
  undefined4 uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  
  FUN_1158_0444();
  uVar4 = (undefined2)((ulong)param_1 >> 0x10);
  iVar2 = (int)param_1;
  uVar5 = (undefined2)((ulong)*(undefined4 *)(iVar2 + 400) >> 0x10);
  iVar3 = (int)*(undefined4 *)(iVar2 + 400);
  if (*(char *)(iVar3 + 0x3a) != '\0') {
    uVar6 = FUN_10f0_1733((int)*(undefined4 *)(iVar2 + 0x2a8),
                          (int)((ulong)*(undefined4 *)(iVar2 + 0x2a8) >> 0x10));
    puVar7 = (undefined4 *)FUN_10d8_3b9b(iVar3,uVar5,0x38b7,0x10f0);
    puVar1 = (undefined2 *)((int)*puVar7 + 0x60);
    (*(code *)*puVar1)(0x10d8,puVar7,uVar6);
    uVar6 = FUN_10f0_1733((int)*(undefined4 *)(iVar2 + 0x2ac),
                          (int)((ulong)*(undefined4 *)(iVar2 + 0x2ac) >> 0x10));
    puVar7 = (undefined4 *)FUN_10d8_3b9b(iVar3,uVar5,0x38c0,0x10f0);
    puVar1 = (undefined2 *)((int)*puVar7 + 0x60);
    (*(code *)*puVar1)(0x10d8,puVar7,uVar6);
    uVar6 = FUN_10f0_1733((int)*(undefined4 *)(iVar2 + 700),
                          (int)((ulong)*(undefined4 *)(iVar2 + 700) >> 0x10));
    puVar7 = (undefined4 *)FUN_10d8_3b9b(iVar3,uVar5,0x38c9,0x10f0);
    puVar1 = (undefined2 *)((int)*puVar7 + 0x60);
    (*(code *)*puVar1)(0x10d8,puVar7,uVar6);
    uVar6 = FUN_10f0_1733((int)*(undefined4 *)(iVar2 + 0x2c4),
                          (int)((ulong)*(undefined4 *)(iVar2 + 0x2c4) >> 0x10));
    puVar7 = (undefined4 *)FUN_10d8_3b9b(iVar3,uVar5,0x38d8,0x10f0);
    puVar1 = (undefined2 *)((int)*puVar7 + 0x60);
    (*(code *)*puVar1)(0x10d8,puVar7,uVar6);
    uVar6 = FUN_10f0_1733((int)*(undefined4 *)(iVar2 + 0x2d0),
                          (int)((ulong)*(undefined4 *)(iVar2 + 0x2d0) >> 0x10));
    puVar7 = (undefined4 *)FUN_10d8_3b9b(iVar3,uVar5,0x38e4,0x10f0);
    puVar1 = (undefined2 *)((int)*puVar7 + 0x60);
    (*(code *)*puVar1)(0x10d8,puVar7,uVar6);
    FUN_10f0_1733((int)*(undefined4 *)(iVar2 + 0x2d8),
                  (int)((ulong)*(undefined4 *)(iVar2 + 0x2d8) >> 0x10));
    puVar7 = (undefined4 *)FUN_10d8_3b9b(iVar3,uVar5,0x38f4,0x10f0);
    puVar1 = (undefined2 *)((int)*puVar7 + 0x60);
    (*(code *)*puVar1)(0x10d8,puVar7);
    FUN_10f0_1733((int)*(undefined4 *)(iVar2 + 0x2e0),
                  (int)((ulong)*(undefined4 *)(iVar2 + 0x2e0) >> 0x10));
    puVar7 = (undefined4 *)FUN_10d8_3b9b(iVar3,uVar5,0x3904,0x10f0);
    puVar1 = (undefined2 *)((int)*puVar7 + 0x60);
    (*(code *)*puVar1)(0x10d8,puVar7);
    FUN_10f0_1733((int)*(undefined4 *)(iVar2 + 0x2e8),
                  (int)((ulong)*(undefined4 *)(iVar2 + 0x2e8) >> 0x10));
    puVar7 = (undefined4 *)FUN_10d8_3b9b(iVar3,uVar5,0x3914,0x10f0);
    puVar1 = (undefined2 *)((int)*puVar7 + 0x60);
    (*(code *)*puVar1)(0x10d8,puVar7);
    FUN_10f0_1733((int)*(undefined4 *)(iVar2 + 0x2f0),
                  (int)((ulong)*(undefined4 *)(iVar2 + 0x2f0) >> 0x10));
    puVar7 = (undefined4 *)FUN_10d8_3b9b(iVar3,uVar5,0x3924,0x10f0);
    puVar1 = (undefined2 *)((int)*puVar7 + 0x60);
    (*(code *)*puVar1)(0x10d8,puVar7);
    FUN_10f0_1733((int)*(undefined4 *)(iVar2 + 0x2f8),
                  (int)((ulong)*(undefined4 *)(iVar2 + 0x2f8) >> 0x10));
    puVar7 = (undefined4 *)FUN_10d8_3b9b(iVar3,uVar5,0x3934,0x10f0);
    puVar1 = (undefined2 *)((int)*puVar7 + 0x60);
    (*(code *)*puVar1)(0x10d8,puVar7);
    FUN_10f0_1733((int)*(undefined4 *)(iVar2 + 0x300),
                  (int)((ulong)*(undefined4 *)(iVar2 + 0x300) >> 0x10));
    puVar7 = (undefined4 *)FUN_10d8_3b9b(iVar3,uVar5,0x3944,0x10f0);
    puVar1 = (undefined2 *)((int)*puVar7 + 0x60);
    (*(code *)*puVar1)(0x10d8,puVar7);
    uVar6 = FUN_10f0_1733((int)*(undefined4 *)(iVar2 + 0x308),
                          (int)((ulong)*(undefined4 *)(iVar2 + 0x308) >> 0x10));
    puVar7 = (undefined4 *)FUN_10d8_3b9b(iVar3,uVar5,0x3954,0x10f0);
    puVar1 = (undefined2 *)((int)*puVar7 + 0x60);
    (*(code *)*puVar1)(0x10d8,puVar7);
    if (*(char *)((int)*(undefined4 *)(iVar2 + 0x310) + 0xdb) != '\0') {
      unaff_CS = 0;
    }
    if (*(char *)((int)*(undefined4 *)(iVar2 + 0x314) + 0xdb) != '\0') {
      unaff_CS = 1;
    }
    if (*(char *)((int)*(undefined4 *)(iVar2 + 0x318) + 0xdb) != '\0') {
      unaff_CS = 2;
    }
    iVar2 = unaff_CS >> 0xf;
    puVar8 = (undefined4 *)FUN_10d8_3b9b(iVar3,uVar5,0x3964,0x10d8);
    puVar1 = (undefined2 *)((int)*puVar8 + 0x60);
    (*(code *)*puVar1)(0x10d8,puVar8,unaff_CS,iVar2,puVar7,uVar6);
  }
  return;
}



/* ---- FUN_1088_3c31 @ 1088:3c31  (630 octets) ---- */

void __stdcall16far FUN_1088_3c31(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined2 unaff_CS;
  undefined2 unaff_SS;
  undefined *puStack_26;
  undefined *puStack_24;
  undefined2 uStack_22;
  undefined2 uStack_20;
  undefined2 uStack_1e;
  undefined *puStack_1c;
  undefined2 uStack_1a;
  undefined2 uStack_18;
  int local_16;
  int local_14;
  undefined local_12;
  int local_e;
  int local_c;
  undefined local_a;
  int local_6;
  
  _local_6 = CONCAT22(unaff_CS,0x3c3c);
  FUN_1158_0444();
  uStack_18 = 0x1158;
  uStack_1a = 0x3c1f;
  puStack_26 = (undefined *)&uStack_1e;
  uStack_1e = DAT_1160_1858;
  uStack_20 = 0x1158;
  uStack_22 = 0x3c15;
  DAT_1160_1858 = &puStack_26;
  uVar4 = (undefined2)((ulong)param_1 >> 0x10);
  iVar2 = (int)param_1;
  _local_6 = *(undefined4 *)(iVar2 + 400);
  local_e = *(int *)(iVar2 + 0x48e);
  local_c = local_e >> 0xf;
  local_a = 0;
  puStack_24 = &stack0xfffe;
  puStack_1c = &stack0xfffe;
  cVar1 = FUN_10e0_2895((int)_local_6,(int)((ulong)_local_6 >> 0x10),0,&local_e,unaff_SS);
  if (cVar1 == '\0') {
    FUN_1088_0d48(iVar2,uVar4);
  }
  FUN_1088_35e4(iVar2,uVar4);
  _local_6 = *(undefined4 *)(iVar2 + 0x1bc);
  local_16 = *(int *)(iVar2 + 0x48e);
  local_14 = local_16 >> 0xf;
  local_12 = 0;
  local_e = 1;
  local_c = 0;
  local_a = 0;
  cVar1 = FUN_10e0_2895((int)_local_6,(int)((ulong)_local_6 >> 0x10),1,&local_16,unaff_SS);
  if (cVar1 == '\0') {
    FUN_1088_0d48(iVar2,uVar4);
  }
  _local_6 = *(undefined4 *)(iVar2 + 0x1c0);
  local_16 = *(int *)(iVar2 + 0x48e);
  local_14 = local_16 >> 0xf;
  local_12 = 0;
  local_e = 2;
  local_c = 0;
  local_a = 0;
  cVar1 = FUN_10e0_2895((int)_local_6,(int)((ulong)_local_6 >> 0x10),1,&local_16,unaff_SS);
  if (cVar1 == '\0') {
    FUN_1088_0d48(iVar2,uVar4);
  }
  local_6 = (int)*(undefined4 *)(iVar2 + 0x1cc);
  local_16 = *(int *)(iVar2 + 0x48e);
  local_14 = local_16 >> 0xf;
  local_12 = 0;
  local_e = 2;
  local_c = 0;
  local_a = 0;
  cVar1 = FUN_10e0_2895(local_6,(int)((ulong)*(undefined4 *)(iVar2 + 0x1cc) >> 0x10),1,&local_16,
                        unaff_SS);
  if (cVar1 == '\0') {
    FUN_1088_0d48(iVar2,uVar4);
  }
  if (*(char *)(iVar2 + 0x48d) == '\0') {
    uVar5 = (undefined2)((ulong)*(undefined4 *)(iVar2 + 400) >> 0x10);
    local_6 = (int)*(undefined4 *)(iVar2 + 400);
    if (*(char *)(local_6 + 0x181) == '\0') {
      FUN_10d8_533c(local_6,uVar5);
      FUN_10d8_558b(local_6,uVar5);
    }
    uVar5 = (undefined2)((ulong)*(undefined4 *)(iVar2 + 0x1bc) >> 0x10);
    local_6 = (int)*(undefined4 *)(iVar2 + 0x1bc);
    if (*(char *)(local_6 + 0x181) == '\0') {
      FUN_10d8_533c(local_6,uVar5);
      FUN_10d8_558b(local_6,uVar5);
    }
    uVar5 = (undefined2)((ulong)*(undefined4 *)(iVar2 + 0x1c0) >> 0x10);
    local_6 = (int)*(undefined4 *)(iVar2 + 0x1c0);
    if (*(char *)(local_6 + 0x181) == '\0') {
      FUN_10d8_533c(local_6,uVar5);
      FUN_10d8_558b(local_6,uVar5);
    }
  }
  else {
    uVar5 = (undefined2)((ulong)*(undefined4 *)(iVar2 + 400) >> 0x10);
    iVar3 = (int)*(undefined4 *)(iVar2 + 400);
    if (*(char *)(iVar3 + 0x181) == '\0') {
      FUN_10d8_533c(iVar3,uVar5);
    }
    uVar5 = (undefined2)((ulong)*(undefined4 *)(iVar2 + 0x1bc) >> 0x10);
    iVar3 = (int)*(undefined4 *)(iVar2 + 0x1bc);
    if (*(char *)(iVar3 + 0x181) == '\0') {
      FUN_10d8_533c(iVar3,uVar5);
    }
    uVar5 = (undefined2)((ulong)*(undefined4 *)(iVar2 + 0x1c0) >> 0x10);
    iVar3 = (int)*(undefined4 *)(iVar2 + 0x1c0);
    if (*(char *)(iVar3 + 0x181) == '\0') {
      FUN_10d8_533c(iVar3,uVar5);
    }
  }
  FUN_1088_35e4(iVar2,uVar4);
  *(undefined *)(iVar2 + 0x491) = 0;
  FUN_1088_2bbb(iVar2,uVar4);
  FUN_1088_2964(iVar2,uVar4,0xfffa,0xffff);
  FUN_1088_2a6c(iVar2,uVar4,0);
  FUN_1088_3ef5(iVar2,uVar4);
  DAT_1160_1858 = (undefined **)uStack_1e;
  return;
}



/* ---- FUN_1088_3ef5 @ 1088:3ef5  (172 octets) ---- */

byte __stdcall16far FUN_1088_3ef5(undefined4 param_1)

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
           FUN_10d8_3b9b((int)*(undefined4 *)(iVar4 + 400),
                         (int)((ulong)*(undefined4 *)(iVar4 + 400) >> 0x10),0x3eea,0x1158);
  puVar1 = (undefined2 *)((int)*puVar6 + 0x38);
  uVar2 = (*(code *)*puVar1)(0x10d8,puVar6);
  *(undefined *)(iVar4 + 0x490) = uVar2;
  if (*(char *)(iVar4 + 0x48d) == '\0') {
    bVar3 = 0;
  }
  else {
    bVar3 = *(byte *)((int)*(undefined4 *)(iVar4 + 400) + 0x3e) |
            *(byte *)((int)*(undefined4 *)(iVar4 + 0x1bc) + 0x3e) |
            *(byte *)((int)*(undefined4 *)(iVar4 + 0x1c0) + 0x3e) | *(byte *)(iVar4 + 0x491);
    if (bVar3 != 0) {
      *(undefined *)(iVar4 + 0x490) = 0;
    }
    FUN_1138_1c77((int)*(undefined4 *)(iVar4 + 0x450),
                  (int)((ulong)*(undefined4 *)(iVar4 + 0x450) >> 0x10),bVar3);
  }
  FUN_1120_6e11((int)*(undefined4 *)(iVar4 + 0x464),
                (int)((ulong)*(undefined4 *)(iVar4 + 0x464) >> 0x10),*(undefined *)(iVar4 + 0x490));
  return bVar3;
}



/* ---- FUN_1088_3fa1 @ 1088:3fa1  (197 octets) ---- */

void __stdcall16far FUN_1088_3fa1(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  
  FUN_1158_0444();
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  uVar4 = (undefined2)((ulong)*(undefined4 *)(iVar1 + 400) >> 0x10);
  iVar2 = (int)*(undefined4 *)(iVar1 + 400);
  if (*(char *)(iVar2 + 0x181) == '\0') {
    FUN_10d8_533c(iVar2,uVar4);
    FUN_10d8_558b(iVar2,uVar4);
  }
  uVar4 = (undefined2)((ulong)*(undefined4 *)(iVar1 + 0x1bc) >> 0x10);
  iVar2 = (int)*(undefined4 *)(iVar1 + 0x1bc);
  if (*(char *)(iVar2 + 0x181) == '\0') {
    FUN_10d8_533c(iVar2,uVar4);
    FUN_10d8_558b(iVar2,uVar4);
  }
  uVar4 = (undefined2)((ulong)*(undefined4 *)(iVar1 + 0x1c0) >> 0x10);
  iVar2 = (int)*(undefined4 *)(iVar1 + 0x1c0);
  if (*(char *)(iVar2 + 0x181) == '\0') {
    FUN_10d8_533c(iVar2,uVar4);
    FUN_10d8_558b(iVar2,uVar4);
  }
  FUN_1088_35e4(iVar1,uVar3);
  *(undefined *)(iVar1 + 0x491) = 0;
  FUN_1088_2bbb(iVar1,uVar3);
  FUN_1088_2964(iVar1,uVar3,0xfffa,0xffff);
  FUN_1088_2a6c(iVar1,uVar3,0);
  FUN_1088_3ef5(iVar1,uVar3);
  return;
}



/* ---- FUN_1088_407b @ 1088:407b  (410 octets) ---- */

undefined __stdcall16far FUN_1088_407b(undefined4 param_1)

{
  undefined2 *puVar1;
  char cVar2;
  undefined extraout_AH;
  int iVar3;
  undefined2 uVar4;
  undefined2 unaff_SS;
  undefined4 *puVar5;
  undefined2 uVar6;
  undefined4 *puVar7;
  undefined2 uStack_24;
  undefined *puStack_22;
  undefined2 uStack_20;
  undefined2 uStack_1e;
  int local_1c;
  int local_1a;
  undefined local_18;
  int local_14;
  int local_12;
  undefined local_10;
  int local_c;
  undefined2 local_a;
  undefined2 local_8;
  int local_6;
  
  local_6 = 0x4086;
  FUN_1158_0444();
  uStack_1e = 0x1158;
  uStack_20 = 0x4071;
  uStack_24 = DAT_1160_1858;
  uVar4 = (undefined2)((ulong)param_1 >> 0x10);
  iVar3 = (int)param_1;
  DAT_1160_1858 = (undefined4 *)&uStack_24;
  puStack_22 = &stack0xfffe;
  FUN_10d8_533c((int)*(undefined4 *)(iVar3 + 400),(int)((ulong)*(undefined4 *)(iVar3 + 400) >> 0x10)
               );
  FUN_10d8_533c((int)*(undefined4 *)(iVar3 + 0x1bc),
                (int)((ulong)*(undefined4 *)(iVar3 + 0x1bc) >> 0x10));
  FUN_10d8_533c((int)*(undefined4 *)(iVar3 + 0x1c0),
                (int)((ulong)*(undefined4 *)(iVar3 + 0x1c0) >> 0x10));
  FUN_1088_396e(iVar3,uVar4);
  uVar6 = CONCAT11(extraout_AH,*(undefined *)(iVar3 + 0x490));
  puVar5 = (undefined4 *)
           FUN_10d8_3b9b((int)*(undefined4 *)(iVar3 + 400),
                         (int)((ulong)*(undefined4 *)(iVar3 + 400) >> 0x10),0x4066,
                         (char *)s_sThousand_1160_1088);
  puVar7 = (undefined4 *)puVar5;
  puVar1 = (undefined2 *)((int)*puVar5 + 0x54);
  (*(code *)*puVar1)(0x10d8,puVar5,uVar6);
  FUN_10d8_54a0((int)*(undefined4 *)(iVar3 + 400),(int)((ulong)*(undefined4 *)(iVar3 + 400) >> 0x10)
               );
  FUN_10d8_54a0((int)*(undefined4 *)(iVar3 + 0x1bc),
                (int)((ulong)*(undefined4 *)(iVar3 + 0x1bc) >> 0x10));
  FUN_10d8_54a0((int)*(undefined4 *)(iVar3 + 0x1c0),
                (int)((ulong)*(undefined4 *)(iVar3 + 0x1c0) >> 0x10));
  local_8 = (undefined2)((ulong)*(undefined4 *)(iVar3 + 0x1cc) >> 0x10);
  local_a = (undefined2)*(undefined4 *)(iVar3 + 0x1cc);
  local_c = DAT_1160_014e;
  if (0 < DAT_1160_014e) {
    local_6 = 1;
    while( true ) {
      local_1c = *(int *)(iVar3 + 0x48e);
      local_1a = local_1c >> 0xf;
      local_18 = 0;
      local_12 = local_6 >> 0xf;
      local_14 = local_6;
      local_10 = 0;
      cVar2 = FUN_10e0_2895(local_a,local_8,1,&local_1c,unaff_SS);
      if (cVar2 == '\0') {
        FUN_1088_0d48(iVar3,uVar4);
      }
      FUN_10d8_533c(local_a,local_8);
      uVar6 = 0;
      puVar5 = (undefined4 *)FUN_10d8_3b9b(local_a,local_8,0x4066,0x10d8);
      puVar1 = (undefined2 *)((int)*puVar5 + 0x54);
      (*(code *)*puVar1)(0x10d8,puVar5,uVar6);
      FUN_10d8_54a0(local_a,local_8);
      if (local_6 == local_c) break;
      local_6 = local_6 + 1;
    }
  }
  FUN_10d8_533c((int)*(undefined4 *)(iVar3 + 400),(int)((ulong)*(undefined4 *)(iVar3 + 400) >> 0x10)
               );
  FUN_10d8_533c((int)*(undefined4 *)(iVar3 + 0x1bc),
                (int)((ulong)*(undefined4 *)(iVar3 + 0x1bc) >> 0x10));
  FUN_10d8_533c((int)*(undefined4 *)(iVar3 + 0x1c0),
                (int)((ulong)*(undefined4 *)(iVar3 + 0x1c0) >> 0x10));
  DAT_1160_1858 = puVar7;
  uStack_24 = uVar4;
  FUN_1088_3ef5(iVar3);
  return 1;
}



/* ---- FUN_1088_422b @ 1088:422b  (52 octets) ---- */

undefined __stdcall16far FUN_1088_422b(undefined4 param_1)

{
  char cVar1;
  undefined uVar2;
  undefined2 uVar3;
  
  FUN_1158_0444();
  uVar2 = 0;
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  cVar1 = FUN_1088_4c86((int)param_1,uVar3);
  if (cVar1 != '\0') {
    uVar2 = FUN_1088_407b((int)param_1,uVar3);
  }
  return uVar2;
}



/* ---- FUN_1088_4306 @ 1088:4306  (1784 octets) ---- */

void __cdecl16far FUN_1088_4306(undefined4 param_1)

{
  undefined2 *puVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined2 uVar6;
  longdouble in_ST0;
  longdouble lVar7;
  longdouble lVar8;
  longdouble lVar9;
  longdouble lVar10;
  longdouble lVar11;
  longdouble in_ST1;
  longdouble in_ST2;
  longdouble in_ST3;
  longdouble in_ST4;
  longdouble in_ST5;
  longdouble in_ST6;
  undefined4 *puVar12;
  undefined4 *puVar13;
  undefined4 uVar14;
  undefined2 uVar15;
  double dVar16;
  undefined2 uVar17;
  undefined2 uVar18;
  undefined2 uVar19;
  undefined2 uVar20;
  undefined *puStack_48;
  undefined *puStack_46;
  undefined2 uStack_44;
  undefined2 uStack_42;
  undefined *puStack_40;
  undefined *puStack_3e;
  undefined2 uStack_3c;
  undefined2 uStack_3a;
  undefined2 uStack_38;
  undefined *puStack_36;
  undefined2 uStack_34;
  undefined2 uStack_32;
  int local_30;
  int local_2e;
  undefined local_2c;
  int local_28;
  int local_26;
  undefined local_24;
  int local_22;
  undefined2 local_20;
  undefined2 local_1e;
  double local_1c;
  double local_14;
  undefined8 local_c;
  
  local_c = (double)CONCAT26(0x4311,(undefined6)local_c);
  FUN_1158_0444();
  uStack_32 = 0x1158;
  uStack_34 = 0x4300;
  puStack_40 = (undefined *)&uStack_38;
  uStack_38 = DAT_1160_1858;
  uStack_3a = 0x1158;
  uStack_3c = 0x42f6;
  puStack_48 = (undefined *)&puStack_40;
  uStack_42 = 0x1158;
  uStack_44 = 0x42ec;
  DAT_1160_1858 = &puStack_48;
  uVar6 = (undefined2)((ulong)param_1 >> 0x10);
  iVar5 = (int)param_1;
  local_1e = (undefined2)((ulong)*(undefined4 *)(iVar5 + 0x1b4) >> 0x10);
  local_20 = (undefined2)*(undefined4 *)(iVar5 + 0x1b4);
  puStack_46 = &stack0xfffe;
  puStack_3e = &stack0xfffe;
  puStack_36 = &stack0xfffe;
  FUN_10d8_31d2(local_20,local_1e);
  FUN_10e0_2ffb(local_20,local_1e,1);
  FUN_10e0_2ed2(local_20,local_1e,0);
  FUN_10d8_31bf(local_20,local_1e);
  local_28 = *(int *)(iVar5 + 0x48e) + -1;
  if (SBORROW2(*(int *)(iVar5 + 0x48e),1)) {
    local_28 = FUN_1158_043e(0x10d8);
  }
  local_26 = local_28 >> 0xf;
  local_24 = 0;
  cVar2 = FUN_10e0_2895();
  if (cVar2 == '\0') {
    FUN_1088_0d97(iVar5,uVar6);
  }
  local_1e = (undefined2)((ulong)*(undefined4 *)(iVar5 + 400) >> 0x10);
  local_20 = (undefined2)*(undefined4 *)(iVar5 + 400);
  FUN_10d8_533c(local_20,local_1e);
  iVar3 = FUN_10d8_3b32(local_20,local_1e);
  local_22 = iVar3 + -1;
  if (SBORROW2(iVar3,1)) {
    local_22 = FUN_1158_043e(0x10d8);
  }
  iVar3 = FUN_10d8_3daf(local_20,local_1e);
  if (iVar3 <= local_22) {
    while( true ) {
      FUN_10d8_3b4b((int)*(undefined4 *)(iVar5 + 0x1b4),
                    (int)((ulong)*(undefined4 *)(iVar5 + 0x1b4) >> 0x10),iVar3);
      FUN_10d8_3b70();
      if (iVar3 == local_22) break;
      iVar3 = iVar3 + 1;
    }
  }
  puVar12 = (undefined4 *)FUN_10d8_3b9b(local_20,local_1e,0x425f,0x10d8);
  puVar1 = (undefined2 *)((int)*puVar12 + 0x40);
  (*(code *)*puVar1)(0x10d8,puVar12);
  local_14 = (double)in_ST0;
  lVar7 = (longdouble)100.0 + (longdouble)local_14;
  lVar8 = (longdouble)100.0;
  FUN_1158_04b2();
  local_1c = (double)lVar8;
  lVar8 = in_ST6;
  puVar12 = (undefined4 *)FUN_10d8_3b9b();
  puVar1 = (undefined2 *)((int)*puVar12 + 0x40);
  (*(code *)*puVar1)();
  local_c = (double)lVar7;
  lVar7 = lVar8;
  FUN_1080_2fa6(local_c * local_1c);
  dVar16 = (double)in_ST1;
  lVar9 = lVar7;
  local_c = dVar16;
  puVar13 = (undefined4 *)FUN_10d8_3b9b(local_20,local_1e,0x426e,0x1080);
  puVar1 = (undefined2 *)((int)*puVar13 + 0x5c);
  (*(code *)*puVar1)(0x10d8,puVar13,dVar16,puVar12);
  puVar12 = (undefined4 *)FUN_10d8_3b9b();
  puVar1 = (undefined2 *)((int)*puVar12 + 0x40);
  (*(code *)*puVar1)();
  local_c = (double)in_ST2;
  lVar10 = lVar9;
  FUN_1080_2fa6(local_c * local_1c);
  dVar16 = (double)in_ST3;
  lVar11 = lVar10;
  local_c = dVar16;
  puVar13 = (undefined4 *)FUN_10d8_3b9b(local_20,local_1e,0x427f,0x1080);
  puVar1 = (undefined2 *)((int)*puVar13 + 0x5c);
  (*(code *)*puVar1)(0x10d8,puVar13,dVar16,puVar12);
  puVar12 = (undefined4 *)FUN_10d8_3b9b();
  puVar1 = (undefined2 *)((int)*puVar12 + 0x40);
  (*(code *)*puVar1)();
  local_c = (double)in_ST4;
  FUN_1080_2fa6(local_c * local_1c);
  local_c = (double)in_ST5;
  puVar12 = (undefined4 *)FUN_10d8_3b9b(local_20,local_1e,0x428e,0x1080);
  puVar1 = (undefined2 *)((int)*puVar12 + 0x5c);
  (*(code *)*puVar1)(0x10d8,puVar12);
  puVar12 = (undefined4 *)FUN_10d8_3b9b();
  puVar1 = (undefined2 *)((int)*puVar12 + 0x40);
  (*(code *)*puVar1)();
  local_c = (double)in_ST6;
  FUN_1080_2fa6(local_c * local_1c);
  dVar16 = (double)lVar8;
  local_c = dVar16;
  puVar12 = (undefined4 *)FUN_10d8_3b9b(local_20,local_1e,0x4297,0x1080);
  puVar1 = (undefined2 *)((int)*puVar12 + 0x5c);
  (*(code *)*puVar1)(0x10d8,puVar12,dVar16);
  puVar12 = (undefined4 *)FUN_10d8_3b9b(local_20,local_1e,0x42a9,0x10d8);
  puVar1 = (undefined2 *)((int)*puVar12 + 0x44);
  uVar14 = (*(code *)*puVar1)(0x10d8,puVar12);
  FUN_10f0_178b((int)*(undefined4 *)(iVar5 + 0x2a8),
                (int)((ulong)*(undefined4 *)(iVar5 + 0x2a8) >> 0x10),uVar14);
  puVar12 = (undefined4 *)FUN_10d8_3b9b(local_20,local_1e,0x42b2,0x10f0);
  puVar1 = (undefined2 *)((int)*puVar12 + 0x44);
  (*(code *)*puVar1)(0x10d8,puVar12);
  FUN_10f0_178b();
  FUN_1088_3405(iVar5,uVar6);
  FUN_10d8_44be(local_20,local_1e);
  local_1e = (undefined2)((ulong)*(undefined4 *)(iVar5 + 0x1b8) >> 0x10);
  local_20 = (undefined2)*(undefined4 *)(iVar5 + 0x1b8);
  FUN_10d8_31d2(local_20,local_1e);
  FUN_10e0_2ffb();
  FUN_10e0_2ed2();
  FUN_10d8_31bf(local_20,local_1e);
  local_1e = (undefined2)((ulong)*(undefined4 *)(iVar5 + 0x1b8) >> 0x10);
  local_20 = (undefined2)*(undefined4 *)(iVar5 + 0x1b8);
  local_30 = *(int *)(iVar5 + 0x48e) + -1;
  if (SBORROW2(*(int *)(iVar5 + 0x48e),1)) {
    local_30 = FUN_1158_043e(0x10d8);
  }
  local_2e = local_30 >> 0xf;
  local_2c = 0;
  local_28 = 1;
  local_26 = 0;
  local_24 = 0;
  cVar2 = FUN_10e0_2895();
  if (cVar2 == '\0') {
    FUN_1088_0d97(iVar5,uVar6);
  }
  local_1e = (undefined2)((ulong)*(undefined4 *)(iVar5 + 0x1bc) >> 0x10);
  local_20 = (undefined2)*(undefined4 *)(iVar5 + 0x1bc);
  FUN_10d8_533c(local_20,local_1e);
  iVar3 = FUN_10d8_3b32(local_20,local_1e);
  iVar4 = iVar3 + -1;
  if (SBORROW2(iVar3,1)) {
    iVar4 = FUN_1158_043e(0x10d8);
  }
  local_22 = iVar4;
  iVar3 = FUN_10d8_3daf(local_20,local_1e);
  if (iVar3 <= local_22) {
    while( true ) {
      FUN_10d8_3b4b();
      FUN_10d8_3b70();
      if (iVar3 == local_22) break;
      iVar3 = iVar3 + 1;
    }
  }
  puVar12 = (undefined4 *)FUN_10d8_3b9b();
  puVar1 = (undefined2 *)((int)*puVar12 + 0x40);
  (*(code *)*puVar1)();
  local_c = (double)lVar7;
  FUN_1080_2fa6(local_c * local_1c);
  dVar16 = (double)lVar9;
  local_c = dVar16;
  puVar13 = (undefined4 *)FUN_10d8_3b9b(local_20,local_1e,0x42bb,0x1080);
  puVar1 = (undefined2 *)((int)*puVar13 + 0x5c);
  (*(code *)*puVar1)(0x10d8,puVar13,dVar16,puVar12);
  uVar20 = 0;
  uVar19 = 0;
  puVar12 = (undefined4 *)FUN_10d8_3b9b(local_20,local_1e,0x42c7,0x10d8);
  puVar1 = (undefined2 *)((int)*puVar12 + 0x60);
  (*(code *)*puVar1)(0x10d8,puVar12,uVar19,uVar20);
  uVar18 = 0;
  uVar17 = 0;
  uVar20 = 0;
  uVar19 = 0;
  puVar12 = (undefined4 *)FUN_10d8_3b9b(local_20,local_1e,0x42da,0x10d8);
  puVar1 = (undefined2 *)((int)*puVar12 + 0x5c);
  (*(code *)*puVar1)(0x10d8,puVar12,uVar19,uVar20,uVar17,uVar18);
  FUN_10d8_44be(local_20,local_1e);
  local_1e = (undefined2)((ulong)*(undefined4 *)(iVar5 + 0x1b8) >> 0x10);
  local_20 = (undefined2)*(undefined4 *)(iVar5 + 0x1b8);
  iVar3 = *(int *)(iVar5 + 0x48e) + -1;
  if (SBORROW2(*(int *)(iVar5 + 0x48e),1)) {
    iVar3 = FUN_1158_043e(0x10d8);
  }
  local_2e = iVar3 >> 0xf;
  local_2c = 0;
  local_28 = 2;
  local_26 = 0;
  local_24 = 0;
  local_30 = iVar3;
  cVar2 = FUN_10e0_2895();
  if (cVar2 == '\0') {
    FUN_1088_0d97(iVar5,uVar6);
  }
  local_1e = (undefined2)((ulong)*(undefined4 *)(iVar5 + 0x1c0) >> 0x10);
  local_20 = (undefined2)*(undefined4 *)(iVar5 + 0x1c0);
  FUN_10d8_533c(local_20,local_1e);
  iVar3 = FUN_10d8_3b32(local_20,local_1e);
  iVar4 = iVar3 + -1;
  if (SBORROW2(iVar3,1)) {
    iVar4 = FUN_1158_043e(0x10d8);
  }
  local_22 = iVar4;
  iVar3 = FUN_10d8_3daf(local_20,local_1e);
  if (iVar3 <= local_22) {
    while( true ) {
      FUN_10d8_3b4b();
      FUN_10d8_3b70();
      if (iVar3 == local_22) break;
      iVar3 = iVar3 + 1;
    }
  }
  puVar12 = (undefined4 *)FUN_10d8_3b9b();
  puVar1 = (undefined2 *)((int)*puVar12 + 0x40);
  (*(code *)*puVar1)();
  local_c = (double)lVar10;
  FUN_1080_2fa6(local_c * local_1c);
  dVar16 = (double)lVar11;
  local_c = dVar16;
  puVar13 = (undefined4 *)FUN_10d8_3b9b(local_20,local_1e,0x42bb,0x1080);
  puVar1 = (undefined2 *)((int)*puVar13 + 0x5c);
  (*(code *)*puVar1)(0x10d8,puVar13,dVar16,puVar12);
  uVar20 = 0;
  uVar19 = 0;
  puVar12 = (undefined4 *)FUN_10d8_3b9b(local_20,local_1e,0x42c7,0x10d8);
  puVar1 = (undefined2 *)((int)*puVar12 + 0x60);
  (*(code *)*puVar1)(0x10d8,puVar12,uVar19,uVar20);
  uVar15 = 0;
  uVar18 = 0;
  uVar17 = 0;
  uVar20 = 0;
  puVar12 = (undefined4 *)FUN_10d8_3b9b(local_20,local_1e,0x42da,0x10d8);
  puVar1 = (undefined2 *)((int)*puVar12 + 0x5c);
  (*(code *)*puVar1)(0x10d8,puVar12,uVar20,uVar17,uVar18,uVar15);
  FUN_10d8_44be(local_20,local_1e);
  FUN_1088_2bbb(iVar5,uVar6);
  FUN_1088_2964(iVar5,uVar6,0xfffa,0xffff);
  FUN_1088_2a6c(iVar5,uVar6,0);
  FUN_1088_3ef5(iVar5,uVar6);
  DAT_1160_1858 = (undefined **)uVar19;
  FUN_10d8_31d2((int)*(undefined4 *)(iVar5 + 0x1b4),
                (int)((ulong)*(undefined4 *)(iVar5 + 0x1b4) >> 0x10));
  FUN_10d8_31d2((int)*(undefined4 *)(iVar5 + 0x1b8),
                (int)((ulong)*(undefined4 *)(iVar5 + 0x1b8) >> 0x10));
  return;
}



/* ---- FUN_1088_4c86 @ 1088:4c86  (4906 octets) ---- */

/* WARNING: Removing unreachable block (ram,0x10885d44) */
/* WARNING: Removing unreachable block (ram,0x1088557f) */
/* WARNING: Removing unreachable block (ram,0x10885c88) */

int __stdcall16far FUN_1088_4c86(undefined4 param_1)

{
  undefined2 *puVar1;
  double dVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined2 uVar7;
  byte extraout_AH;
  byte extraout_AH_00;
  byte bVar8;
  int iVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  undefined2 uVar13;
  undefined2 uVar14;
  undefined2 uVar15;
  char *pcVar16;
  undefined2 unaff_SS;
  bool bVar17;
  longdouble in_ST0;
  longdouble lVar18;
  longdouble lVar19;
  longdouble lVar20;
  longdouble lVar21;
  longdouble lVar22;
  longdouble lVar23;
  longdouble lVar24;
  longdouble lVar25;
  longdouble lVar26;
  longdouble lVar27;
  longdouble lVar28;
  longdouble lVar29;
  longdouble in_ST1;
  longdouble in_ST2;
  longdouble in_ST3;
  longdouble in_ST4;
  longdouble lVar30;
  longdouble in_ST5;
  longdouble lVar31;
  longdouble in_ST6;
  longdouble lVar32;
  longdouble in_ST7;
  long lVar33;
  undefined4 uVar34;
  undefined *puVar35;
  undefined local_192 [252];
  uint local_96;
  uint local_94;
  undefined local_92;
  byte bStack_91;
  undefined local_90;
  byte bStack_8f;
  uint local_8e;
  int local_8c;
  char local_89;
  uint local_88;
  int local_86;
  undefined local_84 [8];
  int local_7c;
  undefined2 local_7a;
  undefined2 local_78;
  undefined2 local_76;
  undefined2 local_74;
  undefined4 local_72;
  double local_6e;
  double local_66 [4];
  double local_46;
  undefined8 local_3e;
  undefined4 *local_36;
  undefined4 *local_32;
  undefined4 *local_2e;
  undefined4 *local_2a;
  undefined4 *local_26;
  double local_22;
  undefined4 *local_1a;
  undefined2 local_16;
  undefined2 local_14;
  char local_11;
  undefined4 local_10;
  undefined2 uStack_6;
  
  uStack_6 = 0x4c91;
  FUN_1158_0444();
  if (DAT_1160_1e06 < 3) {
    local_86 = 1;
  }
  else {
    local_86 = 2;
  }
  uVar13 = (undefined2)((ulong)param_1 >> 0x10);
  iVar9 = (int)param_1;
  local_7a = *(undefined2 *)(iVar9 + 0x1bc);
  local_78 = *(undefined2 *)(iVar9 + 0x1be);
  local_76 = *(undefined2 *)(iVar9 + 0x1c0);
  local_74 = *(undefined2 *)(iVar9 + 0x1c2);
  local_8c = (int)((ulong)*(undefined4 *)(iVar9 + 400) >> 0x10);
  local_8e = (uint)*(undefined4 *)(iVar9 + 400);
  local_36 = (undefined4 *)FUN_10d8_3b9b(local_8e,local_8c,0x4a2c,0x1158);
  puVar1 = (undefined2 *)((int)*local_36 + 0x40);
  (*(code *)*puVar1)(0x10d8,local_36);
  local_66[1] = (double)in_ST0;
  bVar8 = (byte)(((uint)(local_66[1] == 100.0) << 0xe) >> 8);
  bStack_91 = local_66[1] < 100.0 | (byte)(((uint)NAN(local_66[1]) << 10) >> 8) | bVar8;
  local_92 = 0;
  bStack_8f = local_66[1] < 0.0 | (byte)(((uint)NAN(local_66[1]) << 10) >> 8) |
              (byte)(((uint)(local_66[1] == 0.0) << 0xe) >> 8);
  local_90 = 0;
  if (local_66[1] < 0.0 || local_66[1] >= 100.0 && bVar8 == 0) {
    uVar14 = (undefined2)((ulong)local_36 >> 0x10);
    *(undefined2 *)((undefined4 *)local_36 + 3) = 1;
    *(undefined2 *)((int)(undefined4 *)local_36 + 0xe) = 0;
  }
  lVar18 = in_ST7;
  local_22 = local_66[1];
  local_32 = (undefined4 *)FUN_10d8_3b9b(local_8e,local_8c,0x4a42,(char *)s_sThousand_1160_1088);
  puVar1 = (undefined2 *)((int)*local_32 + 0x40);
  (*(code *)*puVar1)(0x10d8,local_32);
  local_66[2] = (double)in_ST1;
  bVar8 = (byte)(((uint)(local_66[2] == 100.0) << 0xe) >> 8);
  bStack_91 = local_66[2] < 100.0 | (byte)(((uint)NAN(local_66[2]) << 10) >> 8) | bVar8;
  local_92 = 0;
  bStack_8f = local_66[2] < 0.0 | (byte)(((uint)NAN(local_66[2]) << 10) >> 8) |
              (byte)(((uint)(local_66[2] == 0.0) << 0xe) >> 8);
  local_90 = 0;
  if (local_66[2] < 0.0 || local_66[2] >= 100.0 && bVar8 == 0) {
    uVar14 = (undefined2)((ulong)local_32 >> 0x10);
    *(undefined2 *)((undefined4 *)local_32 + 3) = 1;
    *(undefined2 *)((int)(undefined4 *)local_32 + 0xe) = 0;
  }
  lVar19 = lVar18;
  local_22 = local_66[2];
  local_2e = (undefined4 *)FUN_10d8_3b9b(local_8e,local_8c,0x4a4e,(char *)s_sThousand_1160_1088);
  puVar1 = (undefined2 *)((int)*local_2e + 0x40);
  (*(code *)*puVar1)(0x10d8,local_2e);
  local_66[3] = (double)in_ST2;
  bVar8 = (byte)(((uint)(local_66[3] == 100.0) << 0xe) >> 8);
  bStack_91 = local_66[3] < 100.0 | (byte)(((uint)NAN(local_66[3]) << 10) >> 8) | bVar8;
  local_92 = 0;
  bStack_8f = local_66[3] < 0.0 | (byte)(((uint)NAN(local_66[3]) << 10) >> 8) |
              (byte)(((uint)(local_66[3] == 0.0) << 0xe) >> 8);
  local_90 = 0;
  if (local_66[3] < 0.0 || local_66[3] >= 100.0 && bVar8 == 0) {
    uVar14 = (undefined2)((ulong)local_2e >> 0x10);
    *(undefined2 *)((undefined4 *)local_2e + 3) = 1;
    *(undefined2 *)((int)(undefined4 *)local_2e + 0xe) = 0;
  }
  lVar20 = lVar19;
  local_22 = local_66[3];
  local_2a = (undefined4 *)FUN_10d8_3b9b(local_8e,local_8c,0x4a60,(char *)s_sThousand_1160_1088);
  puVar1 = (undefined2 *)((int)*local_2a + 0x40);
  (*(code *)*puVar1)(0x10d8,local_2a);
  local_46 = (double)in_ST3;
  bVar8 = (byte)(((uint)(local_46 == 100.0) << 0xe) >> 8);
  bStack_91 = local_46 < 100.0 | (byte)(((uint)NAN(local_46) << 10) >> 8) | bVar8;
  local_92 = 0;
  puVar12 = (undefined4 *)local_2a;
  uVar14 = (undefined2)((ulong)local_2a >> 0x10);
  if (local_46 < 0.0 || local_46 >= 100.0 && bVar8 == 0) {
    *(undefined2 *)(puVar12 + 3) = 1;
    *(undefined2 *)((int)puVar12 + 0xe) = 0;
  }
  puVar10 = (undefined4 *)local_32;
  uVar7 = (undefined2)((ulong)local_32 >> 0x10);
  if ((2 < DAT_1160_1e06) && (local_66[2] < local_66[1])) {
    uVar15 = (undefined2)((ulong)local_36 >> 0x10);
    *(undefined2 *)((undefined4 *)local_36 + 3) = 1;
    *(undefined2 *)((int)(undefined4 *)local_36 + 0xe) = 0;
    *(undefined2 *)(puVar10 + 3) = 1;
    *(undefined2 *)((int)puVar10 + 0xe) = 0;
  }
  if (DAT_1160_1e06 < 4) {
    bVar8 = (byte)(((uint)(local_66[2] == local_46) << 0xe) >> 8);
    bStack_8f = local_66[2] < local_46 |
                (byte)(((uint)(NAN(local_66[2]) || NAN(local_46)) << 10) >> 8) | bVar8;
    if (local_66[2] >= local_46 && bVar8 == 0) {
      *(undefined2 *)(puVar10 + 3) = 1;
      *(undefined2 *)((int)puVar10 + 0xe) = 0;
      *(undefined2 *)(puVar12 + 3) = 1;
      *(undefined2 *)((int)puVar12 + 0xe) = 0;
    }
  }
  else {
    puVar11 = (undefined4 *)local_2e;
    uVar15 = (undefined2)((ulong)local_2e >> 0x10);
    if (local_66[3] < local_66[2]) {
      *(undefined2 *)(puVar10 + 3) = 1;
      *(undefined2 *)((int)puVar10 + 0xe) = 0;
      *(undefined2 *)(puVar11 + 3) = 1;
      *(undefined2 *)((int)puVar11 + 0xe) = 0;
    }
    bVar8 = (byte)(((uint)(local_66[3] == local_46) << 0xe) >> 8);
    bStack_8f = local_66[3] < local_46 |
                (byte)(((uint)(NAN(local_66[3]) || NAN(local_46)) << 10) >> 8) | bVar8;
    if (local_66[3] >= local_46 && bVar8 == 0) {
      *(undefined2 *)(puVar11 + 3) = 1;
      *(undefined2 *)((int)puVar11 + 0xe) = 0;
      *(undefined2 *)(puVar12 + 3) = 1;
      *(undefined2 *)((int)puVar12 + 0xe) = 0;
    }
  }
  local_90 = 0;
  lVar21 = lVar20;
  local_22 = local_46;
  local_1a = (undefined4 *)FUN_10d8_3b9b(local_8e,local_8c,0x4a73,(char *)s_sThousand_1160_1088);
  puVar1 = (undefined2 *)((int)*local_1a + 0x40);
  (*(code *)*puVar1)(0x10d8,local_1a);
  local_22 = (double)in_ST4;
  bVar8 = (byte)(((uint)(local_22 == 100.0) << 0xe) >> 8);
  bStack_91 = local_22 < 100.0 | (byte)(((uint)NAN(local_22) << 10) >> 8) | bVar8;
  local_92 = 0;
  bStack_8f = local_22 < 0.0 | (byte)(((uint)NAN(local_22) << 10) >> 8) |
              (byte)(((uint)(local_22 == 0.0) << 0xe) >> 8);
  local_90 = 0;
  if (local_22 < 0.0 || local_22 >= 100.0 && bVar8 == 0) {
    uVar14 = (undefined2)((ulong)local_1a >> 0x10);
    *(undefined2 *)((undefined4 *)local_1a + 3) = 1;
    *(undefined2 *)((int)(undefined4 *)local_1a + 0xe) = 0;
  }
  lVar22 = lVar21;
  local_1a = (undefined4 *)FUN_10d8_3b9b(local_8e,local_8c,0x4a7b,(char *)s_sThousand_1160_1088);
  puVar1 = (undefined2 *)((int)*local_1a + 0x40);
  (*(code *)*puVar1)(0x10d8,local_1a);
  local_22 = (double)in_ST5;
  bVar8 = (byte)(((uint)(local_22 == 100.0) << 0xe) >> 8);
  bStack_91 = local_22 < 100.0 | (byte)(((uint)NAN(local_22) << 10) >> 8) | bVar8;
  local_92 = 0;
  bStack_8f = local_22 < 0.0 | (byte)(((uint)NAN(local_22) << 10) >> 8) |
              (byte)(((uint)(local_22 == 0.0) << 0xe) >> 8);
  local_90 = 0;
  if (local_22 < 0.0 || local_22 >= 100.0 && bVar8 == 0) {
    uVar14 = (undefined2)((ulong)local_1a >> 0x10);
    *(undefined2 *)((undefined4 *)local_1a + 3) = 1;
    *(undefined2 *)((int)(undefined4 *)local_1a + 0xe) = 0;
  }
  local_8c = (int)((ulong)*(undefined4 *)(iVar9 + 400) >> 0x10);
  local_8e = (uint)*(undefined4 *)(iVar9 + 400);
  lVar23 = lVar22;
  local_1a = (undefined4 *)FUN_10d8_3b9b(local_8e,local_8c,0x4a82,(char *)s_sThousand_1160_1088);
  puVar1 = (undefined2 *)((int)*local_1a + 0x40);
  (*(code *)*puVar1)(0x10d8,local_1a);
  local_22 = (double)in_ST6;
  bVar8 = (byte)(((uint)(local_22 == 0.0) << 0xe) >> 8);
  bStack_8f = local_22 < 0.0 | (byte)(((uint)NAN(local_22) << 10) >> 8) | bVar8;
  local_90 = 0;
  if (local_22 < 0.0 || bVar8 != 0) {
    uVar14 = (undefined2)((ulong)local_1a >> 0x10);
    *(undefined2 *)((undefined4 *)local_1a + 3) = 1;
    *(undefined2 *)((int)(undefined4 *)local_1a + 0xe) = 0;
  }
  lVar24 = lVar23;
  local_1a = (undefined4 *)FUN_10d8_3b9b(local_8e,local_8c,0x4a93,(char *)s_sThousand_1160_1088);
  puVar1 = (undefined2 *)((int)*local_1a + 0x40);
  (*(code *)*puVar1)(0x10d8,local_1a);
  local_22 = (double)in_ST7;
  bVar8 = (byte)(((uint)(local_22 == 0.0) << 0xe) >> 8);
  bStack_8f = local_22 < 0.0 | (byte)(((uint)NAN(local_22) << 10) >> 8) | bVar8;
  local_90 = 0;
  if (local_22 < 0.0 || bVar8 != 0) {
    uVar14 = (undefined2)((ulong)local_1a >> 0x10);
    *(undefined2 *)((undefined4 *)local_1a + 3) = 1;
    *(undefined2 *)((int)(undefined4 *)local_1a + 0xe) = 0;
  }
  lVar25 = lVar24;
  local_1a = (undefined4 *)FUN_10d8_3b9b(local_8e,local_8c,0x4aa6,(char *)s_sThousand_1160_1088);
  puVar1 = (undefined2 *)((int)*local_1a + 0x40);
  (*(code *)*puVar1)(0x10d8,local_1a);
  local_84 = (undefined  [8])(double)lVar18;
  bVar8 = (byte)(((uint)((double)local_84 == 0.0) << 0xe) >> 8);
  bStack_8f = (double)local_84 < 0.0 | (byte)(((uint)NAN((double)local_84) << 10) >> 8) | bVar8;
  local_90 = 0;
  if ((double)local_84 < 0.0 || bVar8 != 0) {
    uVar14 = (undefined2)((ulong)local_1a >> 0x10);
    *(undefined2 *)((undefined4 *)local_1a + 3) = 1;
    *(undefined2 *)((int)(undefined4 *)local_1a + 0xe) = 0;
  }
  lVar18 = lVar25;
  local_1a = (undefined4 *)FUN_10d8_3b9b(local_8e,local_8c,0x4ab7,(char *)s_sThousand_1160_1088);
  puVar1 = (undefined2 *)((int)*local_1a + 0x40);
  (*(code *)*puVar1)(0x10d8,local_1a);
  local_22 = (double)lVar19;
  bVar8 = (byte)(((uint)(local_22 == (double)local_84) << 0xe) >> 8);
  bStack_91 = local_22 < (double)local_84 |
              (byte)(((uint)(NAN(local_22) || NAN((double)local_84)) << 10) >> 8) | bVar8;
  local_92 = 0;
  bStack_8f = local_22 < 0.0 | (byte)(((uint)NAN(local_22) << 10) >> 8) |
              (byte)(((uint)(local_22 == 0.0) << 0xe) >> 8);
  local_90 = 0;
  if (local_22 < 0.0 || local_22 >= (double)local_84 && bVar8 == 0) {
    uVar14 = (undefined2)((ulong)local_1a >> 0x10);
    *(undefined2 *)((undefined4 *)local_1a + 3) = 1;
    *(undefined2 *)((int)(undefined4 *)local_1a + 0xe) = 0;
  }
  lVar19 = lVar18;
  local_1a = (undefined4 *)FUN_10d8_3b9b(local_8e,local_8c,0x4acb,(char *)s_sThousand_1160_1088);
  puVar1 = (undefined2 *)((int)*local_1a + 0x40);
  (*(code *)*puVar1)(0x10d8,local_1a);
  local_22 = (double)lVar20;
  bStack_8f = local_22 < 0.0 | (byte)(((uint)NAN(local_22) << 10) >> 8) |
              (byte)(((uint)(local_22 == 0.0) << 0xe) >> 8);
  local_90 = 0;
  if (local_22 < 0.0) {
    uVar14 = (undefined2)((ulong)local_1a >> 0x10);
    *(undefined2 *)((undefined4 *)local_1a + 3) = 1;
    *(undefined2 *)((int)(undefined4 *)local_1a + 0xe) = 0;
  }
  lVar20 = lVar19;
  local_1a = (undefined4 *)FUN_10d8_3b9b(local_8e,local_8c,0x4ada,(char *)s_sThousand_1160_1088);
  puVar1 = (undefined2 *)((int)*local_1a + 0x40);
  (*(code *)*puVar1)(0x10d8,local_1a);
  local_22 = (double)lVar21;
  bVar8 = (byte)(((uint)(local_22 == 0.0) << 0xe) >> 8);
  bStack_8f = local_22 < 0.0 | (byte)(((uint)NAN(local_22) << 10) >> 8) | bVar8;
  local_90 = 0;
  if (local_22 < 0.0 || bVar8 != 0) {
    uVar14 = (undefined2)((ulong)local_1a >> 0x10);
    *(undefined2 *)((undefined4 *)local_1a + 3) = 1;
    *(undefined2 *)((int)(undefined4 *)local_1a + 0xe) = 0;
  }
  lVar21 = lVar20;
  local_1a = (undefined4 *)FUN_10d8_3b9b(local_8e,local_8c,0x4aed,(char *)s_sThousand_1160_1088);
  puVar1 = (undefined2 *)((int)*local_1a + 0x40);
  (*(code *)*puVar1)(0x10d8,local_1a);
  local_22 = (double)lVar22;
  bVar8 = (byte)(((uint)(local_22 == 0.0) << 0xe) >> 8);
  bStack_8f = local_22 < 0.0 | (byte)(((uint)NAN(local_22) << 10) >> 8) | bVar8;
  local_90 = 0;
  if (local_22 < 0.0 || bVar8 != 0) {
    uVar14 = (undefined2)((ulong)local_1a >> 0x10);
    *(undefined2 *)((undefined4 *)local_1a + 3) = 1;
    *(undefined2 *)((int)(undefined4 *)local_1a + 0xe) = 0;
  }
  lVar22 = lVar21;
  local_1a = (undefined4 *)FUN_10d8_3b9b(local_8e,local_8c,0x4afe,(char *)s_sThousand_1160_1088);
  puVar1 = (undefined2 *)((int)*local_1a + 0x40);
  (*(code *)*puVar1)(0x10d8,local_1a);
  local_22 = (double)lVar23;
  bVar8 = (byte)(((uint)(local_22 == 0.0) << 0xe) >> 8);
  bStack_8f = local_22 < 0.0 | (byte)(((uint)NAN(local_22) << 10) >> 8) | bVar8;
  local_90 = 0;
  if (local_22 < 0.0 || bVar8 != 0) {
    uVar14 = (undefined2)((ulong)local_1a >> 0x10);
    *(undefined2 *)((undefined4 *)local_1a + 3) = 1;
    *(undefined2 *)((int)(undefined4 *)local_1a + 0xe) = 0;
  }
  lVar23 = lVar22;
  local_1a = (undefined4 *)FUN_10d8_3b9b(local_8e,local_8c,0x4b0d,(char *)s_sThousand_1160_1088);
  puVar1 = (undefined2 *)((int)*local_1a + 0x40);
  (*(code *)*puVar1)(0x10d8,local_1a);
  local_22 = (double)lVar24;
  bStack_8f = local_22 < 0.0 | (byte)(((uint)NAN(local_22) << 10) >> 8) |
              (byte)(((uint)(local_22 == 0.0) << 0xe) >> 8);
  local_90 = 0;
  if (local_22 < 0.0) {
    uVar14 = (undefined2)((ulong)local_1a >> 0x10);
    *(undefined2 *)((undefined4 *)local_1a + 3) = 1;
    *(undefined2 *)((int)(undefined4 *)local_1a + 0xe) = 0;
  }
  lVar24 = lVar23;
  local_1a = (undefined4 *)FUN_10d8_3b9b(local_8e,local_8c,0x4b1c,(char *)s_sThousand_1160_1088);
  puVar1 = (undefined2 *)((int)*local_1a + 0x40);
  (*(code *)*puVar1)(0x10d8,local_1a);
  local_22 = (double)lVar25;
  bStack_8f = local_22 < 0.0 | (byte)(((uint)NAN(local_22) << 10) >> 8) |
              (byte)(((uint)(local_22 == 0.0) << 0xe) >> 8);
  local_90 = 0;
  if (local_22 < 0.0) {
    uVar14 = (undefined2)((ulong)local_1a >> 0x10);
    *(undefined2 *)((undefined4 *)local_1a + 3) = 1;
    *(undefined2 *)((int)(undefined4 *)local_1a + 0xe) = 0;
  }
  lVar25 = lVar24;
  local_1a = (undefined4 *)FUN_10d8_3b9b(local_8e,local_8c,0x4b2f,(char *)s_sThousand_1160_1088);
  puVar1 = (undefined2 *)((int)*local_1a + 0x40);
  (*(code *)*puVar1)(0x10d8,local_1a);
  local_22 = (double)lVar18;
  bVar8 = (byte)(((uint)(local_22 == 100.0) << 0xe) >> 8);
  bStack_91 = local_22 < 100.0 | (byte)(((uint)NAN(local_22) << 10) >> 8) | bVar8;
  local_92 = 0;
  bStack_8f = local_22 < 0.0 | (byte)(((uint)NAN(local_22) << 10) >> 8) |
              (byte)(((uint)(local_22 == 0.0) << 0xe) >> 8);
  local_90 = 0;
  if (local_22 < 0.0 || local_22 >= 100.0 && bVar8 == 0) {
    uVar14 = (undefined2)((ulong)local_1a >> 0x10);
    *(undefined2 *)((undefined4 *)local_1a + 3) = 1;
    *(undefined2 *)((int)(undefined4 *)local_1a + 0xe) = 0;
  }
  lVar18 = lVar25;
  local_1a = (undefined4 *)FUN_10d8_3b9b(local_8e,local_8c,0x4b3f,(char *)s_sThousand_1160_1088);
  puVar1 = (undefined2 *)((int)*local_1a + 0x40);
  (*(code *)*puVar1)(0x10d8,local_1a);
  local_22 = (double)lVar19;
  bStack_8f = local_22 < 0.0 | (byte)(((uint)NAN(local_22) << 10) >> 8) |
              (byte)(((uint)(local_22 == 0.0) << 0xe) >> 8);
  local_90 = 0;
  if (local_22 < 0.0) {
    uVar14 = (undefined2)((ulong)local_1a >> 0x10);
    *(undefined2 *)((undefined4 *)local_1a + 3) = 1;
    *(undefined2 *)((int)(undefined4 *)local_1a + 0xe) = 0;
  }
  lVar19 = lVar18;
  local_1a = (undefined4 *)FUN_10d8_3b9b(local_8e,local_8c,0x4b48,(char *)s_sThousand_1160_1088);
  puVar1 = (undefined2 *)((int)*local_1a + 0x40);
  (*(code *)*puVar1)(0x10d8,local_1a);
  local_22 = (double)lVar20;
  bStack_8f = local_22 < 0.0 | (byte)(((uint)NAN(local_22) << 10) >> 8) |
              (byte)(((uint)(local_22 == 0.0) << 0xe) >> 8);
  local_90 = 0;
  if (local_22 < 0.0) {
    uVar14 = (undefined2)((ulong)local_1a >> 0x10);
    *(undefined2 *)((undefined4 *)local_1a + 3) = 1;
    *(undefined2 *)((int)(undefined4 *)local_1a + 0xe) = 0;
  }
  lVar20 = lVar19;
  local_1a = (undefined4 *)FUN_10d8_3b9b(local_8e,local_8c,0x4b56,(char *)s_sThousand_1160_1088);
  puVar1 = (undefined2 *)((int)*local_1a + 0x40);
  (*(code *)*puVar1)(0x10d8,local_1a);
  local_22 = (double)lVar21;
  bStack_8f = local_22 < 0.0 | (byte)(((uint)NAN(local_22) << 10) >> 8) |
              (byte)(((uint)(local_22 == 0.0) << 0xe) >> 8);
  local_90 = 0;
  if (local_22 < 0.0) {
    uVar14 = (undefined2)((ulong)local_1a >> 0x10);
    *(undefined2 *)((undefined4 *)local_1a + 3) = 1;
    *(undefined2 *)((int)(undefined4 *)local_1a + 0xe) = 0;
  }
  lVar21 = lVar20;
  local_1a = (undefined4 *)FUN_10d8_3b9b(local_8e,local_8c,0x4b68,(char *)s_sThousand_1160_1088);
  puVar1 = (undefined2 *)((int)*local_1a + 0x44);
  local_10 = (*(code *)*puVar1)(0x10d8,local_1a);
  if (local_10 < 1) {
    uVar14 = (undefined2)((ulong)local_1a >> 0x10);
    *(undefined2 *)((undefined4 *)local_1a + 3) = 1;
    *(undefined2 *)((int)(undefined4 *)local_1a + 0xe) = 0;
  }
  local_1a = (undefined4 *)FUN_10d8_3b9b(local_8e,local_8c,0x4b7b,0x10d8);
  puVar1 = (undefined2 *)((int)*local_1a + 0x40);
  (*(code *)*puVar1)(0x10d8,local_1a);
  local_22 = (double)lVar22;
  bVar8 = (byte)(((uint)(local_22 == 4.0) << 0xe) >> 8);
  bStack_91 = local_22 < 4.0 | (byte)(((uint)NAN(local_22) << 10) >> 8) | bVar8;
  local_92 = 0;
  bStack_8f = local_22 < 0.0 | (byte)(((uint)NAN(local_22) << 10) >> 8) |
              (byte)(((uint)(local_22 == 0.0) << 0xe) >> 8);
  local_90 = 0;
  if (local_22 < 0.0 || local_22 >= 4.0 && bVar8 == 0) {
    uVar14 = (undefined2)((ulong)local_1a >> 0x10);
    *(undefined2 *)((undefined4 *)local_1a + 3) = 1;
    *(undefined2 *)((int)(undefined4 *)local_1a + 0xe) = 0;
  }
  lVar22 = lVar21;
  local_1a = (undefined4 *)FUN_10d8_3b9b(local_8e,local_8c,0x4b8b,(char *)s_sThousand_1160_1088);
  puVar1 = (undefined2 *)((int)*local_1a + 0x40);
  (*(code *)*puVar1)(0x10d8,local_1a);
  local_22 = (double)lVar23;
  bVar8 = (byte)(((uint)(local_22 == 100.0) << 0xe) >> 8);
  bStack_91 = local_22 < 100.0 | (byte)(((uint)NAN(local_22) << 10) >> 8) | bVar8;
  local_92 = 0;
  bStack_8f = local_22 < 0.0 | (byte)(((uint)NAN(local_22) << 10) >> 8) |
              (byte)(((uint)(local_22 == 0.0) << 0xe) >> 8);
  local_90 = 0;
  if (local_22 < 0.0 || local_22 >= 100.0 && bVar8 == 0) {
    uVar14 = (undefined2)((ulong)local_1a >> 0x10);
    *(undefined2 *)((undefined4 *)local_1a + 3) = 1;
    *(undefined2 *)((int)(undefined4 *)local_1a + 0xe) = 0;
  }
  lVar23 = lVar22;
  local_1a = (undefined4 *)FUN_10d8_3b9b(local_8e,local_8c,0x4b9b,(char *)s_sThousand_1160_1088);
  puVar1 = (undefined2 *)((int)*local_1a + 0x40);
  (*(code *)*puVar1)(0x10d8,local_1a);
  local_22 = (double)lVar24;
  dVar2 = ABS(local_22);
  bVar8 = (byte)(((uint)(dVar2 == 50.0) << 0xe) >> 8);
  bStack_8f = dVar2 < 50.0 | (byte)(((uint)NAN(dVar2) << 10) >> 8) | bVar8;
  local_90 = 0;
  if (dVar2 >= 50.0 && bVar8 == 0) {
    uVar14 = (undefined2)((ulong)local_1a >> 0x10);
    *(undefined2 *)((undefined4 *)local_1a + 3) = 1;
    *(undefined2 *)((int)(undefined4 *)local_1a + 0xe) = 0;
  }
  local_8c = local_86;
  if (0 < local_86) {
    local_7c = 1;
    while( true ) {
      lVar24 = lVar23;
      iVar5 = FUN_1158_0416();
      uVar34 = *(undefined4 *)(local_84 + iVar5 * 4 + 6);
      local_8e = (uint)((ulong)uVar34 >> 0x10);
      local_90 = (undefined)uVar34;
      bStack_8f = (byte)((ulong)uVar34 >> 8);
      local_1a = (undefined4 *)FUN_10d8_3b9b((int)uVar34,local_8e,0x4bb2,0x1158);
      puVar1 = (undefined2 *)((int)*local_1a + 0x40);
      (*(code *)*puVar1)(0x10d8,local_1a);
      local_66[0] = (double)lVar25;
      bVar8 = (byte)(((uint)(local_66[0] == 0.0) << 0xe) >> 8);
      bStack_91 = local_66[0] < 0.0 | (byte)(((uint)NAN(local_66[0]) << 10) >> 8) | bVar8;
      local_92 = 0;
      if (local_66[0] < 0.0 || bVar8 != 0) {
        uVar14 = (undefined2)((ulong)local_1a >> 0x10);
        *(undefined2 *)((undefined4 *)local_1a + 3) = 1;
        *(undefined2 *)((int)(undefined4 *)local_1a + 0xe) = 0;
      }
      lVar26 = lVar24;
      local_22 = local_66[0];
      local_1a = (undefined4 *)
                 FUN_10d8_3b9b(CONCAT11(bStack_8f,local_90),local_8e,0x4bbe,
                               (char *)s_sThousand_1160_1088);
      puVar1 = (undefined2 *)((int)*local_1a + 0x40);
      (*(code *)*puVar1)(0x10d8,local_1a);
      local_6e = (double)lVar18;
      bVar8 = (byte)(((uint)(local_6e == local_66[0]) << 0xe) >> 8);
      bStack_91 = local_6e < local_66[0] |
                  (byte)(((uint)(NAN(local_6e) || NAN(local_66[0])) << 10) >> 8) | bVar8;
      local_92 = 0;
      if (local_6e < local_66[0] || bVar8 != 0) {
        uVar14 = (undefined2)((ulong)local_1a >> 0x10);
        *(undefined2 *)((undefined4 *)local_1a + 3) = 1;
        *(undefined2 *)((int)(undefined4 *)local_1a + 0xe) = 0;
      }
      lVar27 = lVar26;
      local_22 = local_6e;
      local_1a = (undefined4 *)FUN_10d8_3b9b(CONCAT11(bStack_8f,local_90),local_8e,0x4bca,0x10d8);
      puVar1 = (undefined2 *)((int)*local_1a + 0x40);
      (*(code *)*puVar1)(0x10d8,local_1a);
      local_22 = (double)lVar19;
      local_94 = (uint)(local_22 < 0.5) << 8 | (uint)NAN(local_22) << 10 |
                 (uint)(local_22 == 0.5) << 0xe;
      bStack_91 = local_22 < -0.5 | (byte)(((uint)NAN(local_22) << 10) >> 8) |
                  (byte)(((uint)(local_22 == -0.5) << 0xe) >> 8);
      local_92 = 0;
      if (local_22 < -0.5 || local_22 >= 0.5 && (local_22 == 0.5) == 0) {
        uVar14 = (undefined2)((ulong)local_1a >> 0x10);
        *(undefined2 *)((undefined4 *)local_1a + 3) = 1;
        *(undefined2 *)((int)(undefined4 *)local_1a + 0xe) = 0;
      }
      lVar29 = lVar27;
      local_1a = (undefined4 *)
                 FUN_10d8_3b9b(CONCAT11(bStack_8f,local_90),local_8e,0x4be5,
                               (char *)s_sThousand_1160_1088);
      puVar1 = (undefined2 *)((int)*local_1a + 0x40);
      (*(code *)*puVar1)(0x10d8,local_1a);
      local_22 = (double)lVar20;
      bVar8 = (byte)(((uint)(local_22 == 0.0) << 0xe) >> 8);
      bStack_91 = local_22 < 0.0 | (byte)(((uint)NAN(local_22) << 10) >> 8) | bVar8;
      local_92 = 0;
      if (local_22 < 0.0 || bVar8 != 0) {
        uVar14 = (undefined2)((ulong)local_1a >> 0x10);
        *(undefined2 *)((undefined4 *)local_1a + 3) = 1;
        *(undefined2 *)((int)(undefined4 *)local_1a + 0xe) = 0;
      }
      local_89 = '\0';
      lVar25 = lVar29;
      local_36 = (undefined4 *)
                 FUN_10d8_3b9b(CONCAT11(bStack_8f,local_90),local_8e,0x4bf1,
                               (char *)s_sThousand_1160_1088);
      puVar1 = (undefined2 *)((int)*local_36 + 0x40);
      (*(code *)*puVar1)(0x10d8,local_36);
      local_66[1] = (double)lVar21;
      local_94 = (uint)(local_66[1] < 1.0) << 8 | (uint)NAN(local_66[1]) << 10 |
                 (uint)(local_66[1] == 1.0) << 0xe;
      bStack_91 = local_66[1] < 0.0 | (byte)(((uint)NAN(local_66[1]) << 10) >> 8) |
                  (byte)(((uint)(local_66[1] == 0.0) << 0xe) >> 8);
      local_92 = 0;
      if (local_66[1] < 0.0 || local_66[1] >= 1.0 && (local_66[1] == 1.0) == 0) {
        uVar14 = (undefined2)((ulong)local_1a >> 0x10);
        *(undefined2 *)((undefined4 *)local_1a + 3) = 1;
        *(undefined2 *)((int)(undefined4 *)local_1a + 0xe) = 0;
        local_89 = '\x01';
      }
      lVar18 = lVar25;
      local_32 = (undefined4 *)
                 FUN_10d8_3b9b(CONCAT11(bStack_8f,local_90),local_8e,0x4bff,
                               (char *)s_sThousand_1160_1088);
      puVar1 = (undefined2 *)((int)*local_32 + 0x40);
      (*(code *)*puVar1)(0x10d8,local_32);
      local_66[2] = (double)lVar22;
      local_94 = (uint)(local_66[2] < 1.0) << 8 | (uint)NAN(local_66[2]) << 10 |
                 (uint)(local_66[2] == 1.0) << 0xe;
      bStack_91 = local_66[2] < 0.0 | (byte)(((uint)NAN(local_66[2]) << 10) >> 8) |
                  (byte)(((uint)(local_66[2] == 0.0) << 0xe) >> 8);
      local_92 = 0;
      if (local_66[2] < 0.0 || local_66[2] >= 1.0 && (local_66[2] == 1.0) == 0) {
        uVar14 = (undefined2)((ulong)local_1a >> 0x10);
        *(undefined2 *)((undefined4 *)local_1a + 3) = 1;
        *(undefined2 *)((int)(undefined4 *)local_1a + 0xe) = 0;
        local_89 = '\x01';
      }
      lVar19 = lVar18;
      local_2e = (undefined4 *)
                 FUN_10d8_3b9b(CONCAT11(bStack_8f,local_90),local_8e,0x4c0e,
                               (char *)s_sThousand_1160_1088);
      puVar1 = (undefined2 *)((int)*local_2e + 0x40);
      (*(code *)*puVar1)(0x10d8,local_2e);
      local_66[3] = (double)lVar23;
      local_94 = (uint)(local_66[3] < 1.0) << 8 | (uint)NAN(local_66[3]) << 10 |
                 (uint)(local_66[3] == 1.0) << 0xe;
      bStack_91 = local_66[3] < 0.0 | (byte)(((uint)NAN(local_66[3]) << 10) >> 8) |
                  (byte)(((uint)(local_66[3] == 0.0) << 0xe) >> 8);
      local_92 = 0;
      if (local_66[3] < 0.0 || local_66[3] >= 1.0 && (local_66[3] == 1.0) == 0) {
        uVar14 = (undefined2)((ulong)local_1a >> 0x10);
        *(undefined2 *)((undefined4 *)local_1a + 3) = 1;
        *(undefined2 *)((int)(undefined4 *)local_1a + 0xe) = 0;
        local_89 = '\x01';
      }
      lVar20 = lVar19;
      local_2a = (undefined4 *)
                 FUN_10d8_3b9b(CONCAT11(bStack_8f,local_90),local_8e,0x4c1e,
                               (char *)s_sThousand_1160_1088);
      puVar1 = (undefined2 *)((int)*local_2a + 0x40);
      (*(code *)*puVar1)(0x10d8,local_2a);
      local_46 = (double)lVar24;
      local_94 = (uint)(local_46 < 1.0) << 8 | (uint)NAN(local_46) << 10 |
                 (uint)(local_46 == 1.0) << 0xe;
      bStack_91 = local_46 < 0.0 | (byte)(((uint)NAN(local_46) << 10) >> 8) |
                  (byte)(((uint)(local_46 == 0.0) << 0xe) >> 8);
      local_92 = 0;
      if (local_46 < 0.0 || local_46 >= 1.0 && (local_46 == 1.0) == 0) {
        uVar14 = (undefined2)((ulong)local_1a >> 0x10);
        *(undefined2 *)((undefined4 *)local_1a + 3) = 1;
        *(undefined2 *)((int)(undefined4 *)local_1a + 0xe) = 0;
        local_89 = '\x01';
      }
      lVar21 = lVar20;
      local_26 = (undefined4 *)
                 FUN_10d8_3b9b(CONCAT11(bStack_8f,local_90),local_8e,0x4c2a,
                               (char *)s_sThousand_1160_1088);
      puVar1 = (undefined2 *)((int)*local_26 + 0x40);
      (*(code *)*puVar1)(0x10d8,local_26);
      local_3e = (double)lVar26;
      local_94 = (uint)(local_3e < 1.0) << 8 | (uint)NAN(local_3e) << 10 |
                 (uint)(local_3e == 1.0) << 0xe;
      pcVar16 = (char *)s_sThousand_1160_1088;
      bStack_91 = local_3e < 0.0 | (byte)(((uint)NAN(local_3e) << 10) >> 8) |
                  (byte)(((uint)(local_3e == 0.0) << 0xe) >> 8);
      local_92 = 0;
      if (local_3e < 0.0 || local_3e >= 1.0 && (local_3e == 1.0) == 0) {
        uVar14 = (undefined2)((ulong)local_1a >> 0x10);
        *(undefined2 *)((undefined4 *)local_1a + 3) = 1;
        *(undefined2 *)((int)(undefined4 *)local_1a + 0xe) = 0;
        local_89 = '\x01';
      }
      lVar22 = lVar21;
      if (local_89 == '\0') {
        local_88 = 0;
        local_10._0_2_ = 1;
        local_10._2_2_ = 0;
        while( true ) {
          iVar5 = local_10._2_2_;
          iVar4 = FUN_1158_0416();
          lVar28 = (longdouble)local_66[iVar4] * (longdouble)100.0;
          lVar23 = lVar27;
          lVar24 = lVar29;
          lVar26 = lVar25;
          lVar30 = lVar18;
          lVar31 = lVar19;
          lVar32 = lVar20;
          lVar22 = lVar21;
          uVar6 = FUN_1158_102f();
          lVar27 = lVar28;
          lVar29 = lVar23;
          lVar25 = lVar24;
          lVar18 = lVar26;
          lVar19 = lVar30;
          lVar20 = lVar31;
          lVar21 = lVar32;
          if (SCARRY2((int)local_88 >> 0xf,iVar5) !=
              SCARRY2(((int)local_88 >> 0xf) + iVar5,(uint)CARRY2(local_88,uVar6))) {
            FUN_1158_043e(0x1158);
            lVar27 = lVar28;
            lVar29 = lVar23;
            lVar25 = lVar24;
            lVar18 = lVar26;
            lVar19 = lVar30;
            lVar20 = lVar31;
            lVar21 = lVar32;
          }
          pcVar16 = (char *)0x1158;
          local_88 = FUN_1158_0416();
          if ((local_10._2_2_ == 0) && ((uint)local_10 == 5)) break;
          bVar17 = 0xfffe < (uint)local_10;
          local_10._0_2_ = (uint)local_10 + 1;
          local_10._2_2_ = local_10._2_2_ + (uint)bVar17;
        }
        if (local_88 != 100) {
          local_10._0_2_ = 1;
          local_10._2_2_ = 0;
          while( true ) {
            pcVar16 = (char *)0x1158;
            iVar5 = FUN_1158_0416();
            uVar34 = *(undefined4 *)((int)&local_3e + iVar5 * 4 + 4);
            uVar14 = (undefined2)((ulong)uVar34 >> 0x10);
            iVar5 = (int)uVar34;
            *(undefined2 *)(iVar5 + 0xc) = 1;
            *(undefined2 *)(iVar5 + 0xe) = 0;
            if ((local_10._2_2_ == 0) && ((uint)local_10 == 5)) break;
            bVar17 = 0xfffe < (uint)local_10;
            local_10._0_2_ = (uint)local_10 + 1;
            local_10._2_2_ = local_10._2_2_ + (uint)bVar17;
          }
        }
      }
      local_1a = (undefined4 *)FUN_10d8_3b9b(CONCAT11(bStack_8f,local_90),local_8e,0x4c47,pcVar16);
      puVar1 = (undefined2 *)((int)*local_1a + 0x40);
      (*(code *)*puVar1)(0x10d8,local_1a);
      local_22 = (double)lVar27;
      local_94 = (uint)(local_22 < 1.0) << 8 | (uint)NAN(local_22) << 10 |
                 (uint)(local_22 == 1.0) << 0xe;
      bStack_91 = local_22 < 0.0 | (byte)(((uint)NAN(local_22) << 10) >> 8) |
                  (byte)(((uint)(local_22 == 0.0) << 0xe) >> 8);
      local_92 = 0;
      if (local_22 < 0.0 || local_22 >= 1.0 && (local_22 == 1.0) == 0) {
        uVar14 = (undefined2)((ulong)local_1a >> 0x10);
        *(undefined2 *)((undefined4 *)local_1a + 3) = 1;
        *(undefined2 *)((int)(undefined4 *)local_1a + 0xe) = 0;
      }
      lVar23 = lVar22;
      local_1a = (undefined4 *)
                 FUN_10d8_3b9b(CONCAT11(bStack_8f,local_90),local_8e,0x4c59,
                               (char *)s_sThousand_1160_1088);
      puVar1 = (undefined2 *)((int)*local_1a + 0x44);
      lVar33 = (*(code *)*puVar1)(0x10d8,local_1a);
      if (lVar33 < 0) {
        uVar14 = (undefined2)((ulong)local_1a >> 0x10);
        *(undefined2 *)((undefined4 *)local_1a + 3) = 1;
        *(undefined2 *)((int)(undefined4 *)local_1a + 0xe) = 0;
      }
      local_72 = lVar33;
      local_1a = (undefined4 *)FUN_10d8_3b9b(CONCAT11(bStack_8f,local_90),local_8e,0x4c6c,0x10d8);
      puVar1 = (undefined2 *)((int)*local_1a + 0x40);
      (*(code *)*puVar1)(0x10d8,local_1a);
      local_22 = (double)lVar29;
      local_96 = (uint)(local_22 < 0.0) << 8 | (uint)NAN(local_22) << 10 |
                 (uint)(local_22 == 0.0) << 0xe;
      local_94 = (uint)(local_22 < local_6e) << 8 | (uint)(NAN(local_22) || NAN(local_6e)) << 10 |
                 (uint)(local_22 == local_6e) << 0xe;
      bStack_91 = local_22 < 0.0 | (byte)(((uint)NAN(local_22) << 10) >> 8) |
                  (byte)(((uint)(local_22 == 0.0) << 0xe) >> 8);
      local_92 = 0;
      if ((local_22 < 0.0 || local_22 >= local_6e && (local_22 == local_6e) == 0) ||
          (local_22 == 0.0) != 0 && 0 < local_72) {
        uVar14 = (undefined2)((ulong)local_1a >> 0x10);
        *(undefined2 *)((undefined4 *)local_1a + 3) = 1;
        *(undefined2 *)((int)(undefined4 *)local_1a + 0xe) = 0;
      }
      if (local_7c == local_8c) break;
      local_7c = local_7c + 1;
    }
  }
  local_11 = '\0';
  iVar5 = FUN_1148_527d(iVar9,uVar13);
  uVar6 = iVar5 - 1;
  lVar33 = local_10;
  if (SBORROW2(iVar5,1)) {
    uVar6 = FUN_1158_043e(0x1148);
    lVar33 = local_10;
  }
  local_8c = (int)uVar6 >> 0xf;
  local_10._0_2_ = 0;
  local_8e = uVar6;
  if (-1 < local_8c) {
    local_10._0_2_ = 0;
    local_10._2_2_ = 0;
    while( true ) {
      uVar14 = FUN_1158_0416();
      uVar34 = FUN_1148_5246(iVar9,uVar13,uVar14);
      cVar3 = FUN_1158_2255(0x399,0x1138,uVar34);
      if (cVar3 != '\0') {
        uVar14 = FUN_1158_0416();
        uVar34 = FUN_1148_5246(iVar9,uVar13,uVar14);
        uVar34 = FUN_1158_2273(0x399,0x1138,uVar34);
        if (*(char *)((int)uVar34 + 0x29) != '\0') {
          uVar14 = FUN_1158_0416();
          uVar34 = FUN_1148_5246(iVar9,uVar13,uVar14);
          cVar3 = FUN_1158_2255(0x22,0x10d0,uVar34);
          if (cVar3 != '\0') {
            uVar14 = FUN_1158_0416();
            uVar34 = FUN_1148_5246(iVar9,uVar13,uVar14);
            cVar3 = FUN_1158_2255(0x22,0x10d0,uVar34);
            if (cVar3 != '\0') {
              uVar14 = FUN_1158_0416();
              uVar34 = FUN_1148_5246(iVar9,uVar13,uVar14);
              uVar34 = FUN_1158_2273(0x22,0x10d0,uVar34);
              local_92 = (undefined)uVar34;
              bStack_91 = (byte)((ulong)uVar34 >> 8);
              local_90 = (undefined)((ulong)uVar34 >> 0x10);
              bStack_8f = (byte)((ulong)uVar34 >> 0x18);
              puVar35 = local_192;
              uVar14 = unaff_SS;
              FUN_10d0_1a9f((int)uVar34,(int)((ulong)uVar34 >> 0x10));
              uVar34 = FUN_10d0_1a5f(CONCAT11(bStack_91,local_92),
                                     (int)(CONCAT13(bStack_8f,
                                                    CONCAT12(local_90,CONCAT11(bStack_91,local_92)))
                                          >> 0x10));
              uVar34 = *(undefined4 *)((int)uVar34 + 0x1a);
              local_1a = (undefined4 *)
                         FUN_10d8_3b9b((int)uVar34,(int)((ulong)uVar34 >> 0x10),puVar35,uVar14);
            }
            local_16 = 0xfffa;
            local_14 = 0xffff;
            uVar14 = (undefined2)((ulong)local_1a >> 0x10);
            puVar12 = (undefined4 *)local_1a;
            if ((*(int *)((int)puVar12 + 0xe) == 0) && (*(int *)(puVar12 + 3) == 1)) {
              local_16 = 0xff;
              local_14 = 0;
              local_11 = '\x01';
            }
            if ((*(int *)((int)puVar12 + 0xe) == 0) && (*(int *)(puVar12 + 3) == 2)) {
              local_16 = 0x80;
              local_14 = 0;
            }
            *(undefined2 *)(puVar12 + 3) = 0;
            *(undefined2 *)((int)puVar12 + 0xe) = 0;
            uVar14 = FUN_1158_0416();
            uVar34 = FUN_1148_5246(iVar9,uVar13,uVar14);
            cVar3 = FUN_1158_2255(0x22,0x10d0,uVar34);
            if (cVar3 != '\0') {
              uVar14 = FUN_1158_0416();
              uVar34 = FUN_1148_5246(iVar9,uVar13,uVar14);
              uVar34 = FUN_1158_2273(0x22,0x10d0,uVar34);
              local_92 = (undefined)uVar34;
              bStack_91 = (byte)((ulong)uVar34 >> 8);
              local_90 = (undefined)((ulong)uVar34 >> 0x10);
              bStack_8f = (byte)((ulong)uVar34 >> 0x18);
              uVar14 = local_14;
              uVar7 = FUN_1158_0416();
              FUN_1138_1ed5(CONCAT11(bStack_91,local_92),
                            (int)(CONCAT13(bStack_8f,CONCAT12(local_90,CONCAT11(bStack_91,local_92))
                                          ) >> 0x10),uVar7,uVar14);
            }
          }
        }
      }
      lVar33 = CONCAT22(local_10._2_2_,(uint)local_10);
      if ((local_10._2_2_ == local_8c) && ((uint)local_10 == local_8e)) break;
      bVar17 = 0xfffe < (uint)local_10;
      local_10._0_2_ = (uint)local_10 + 1;
      local_10._2_2_ = local_10._2_2_ + (uint)bVar17;
    }
  }
  if (*(char *)(iVar9 + 0x48d) != '\0') {
    uVar6 = (uint)local_10 & 0xff00;
    if (local_11 == '\0') {
      uVar6 = uVar6 + 1;
    }
    *(undefined *)(iVar9 + 0x490) = (char)uVar6;
    local_10 = lVar33;
    FUN_1120_6e11((int)*(undefined4 *)(iVar9 + 0x464),
                  (int)((ulong)*(undefined4 *)(iVar9 + 0x464) >> 0x10),
                  CONCAT11((char)(uVar6 >> 8),*(undefined *)(iVar9 + 0x490)));
    lVar33 = local_10;
  }
  local_10 = lVar33;
  if (local_11 == '\0') {
    FUN_1010_3675();
    bVar8 = extraout_AH_00;
  }
  else {
    FUN_1010_36fb();
    bVar8 = extraout_AH;
  }
  iVar9 = (uint)bVar8 * 0x100;
  if (local_11 == '\0') {
    iVar9 = iVar9 + 1;
  }
  return iVar9;
}



/* ---- TFormSADD_Decisions_Timer1Timer @ 1088:5fb0  (223 octets) ---- */

void __stdcall16far TFormSADD_Decisions_Timer1Timer(undefined4 param_1)

{
  undefined4 uVar1;
  uint uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined2 unaff_CS;
  undefined2 unaff_SS;
  undefined *puVar5;
  undefined *puVar6;
  undefined local_20a [256];
  undefined local_10a [256];
  undefined2 local_a;
  undefined2 local_8;
  int local_6;
  
  _local_6 = CONCAT22(unaff_CS,0x5fbb);
  FUN_1158_0444();
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  uVar1 = *(undefined4 *)((int)param_1 + 0x45c);
  uVar4 = (undefined2)((ulong)uVar1 >> 0x10);
  local_6 = (int)uVar1;
  local_8 = (undefined2)((ulong)*(undefined4 *)(local_6 + 0x34) >> 0x10);
  local_a = (undefined2)*(undefined4 *)(local_6 + 0x34);
  uVar2 = FUN_1128_121a(local_a,local_8);
  if ((uVar2 & 8) == 0) {
    if (*(char *)((int)param_1 + 0x490) == '\0') {
      puVar6 = local_10a;
      uVar3 = unaff_SS;
      FUN_1138_1d53(local_6,uVar4);
      FUN_1158_17e7(0xff,0x37c,0x1160,puVar6,uVar3);
      puVar6 = local_20a;
      puVar5 = local_10a;
      uVar3 = unaff_SS;
      FUN_1138_1d53(local_6,uVar4);
      FUN_1150_0781(puVar5,unaff_SS);
      FUN_1138_1d8c(local_6,uVar4,puVar6,uVar3);
      uVar2 = FUN_1128_121a(local_a,local_8);
      FUN_1128_1233(local_a,local_8,uVar2 | 8);
      FUN_1128_0fdf(local_a,local_8,0xff,0);
    }
  }
  else {
    FUN_1138_1d8c(local_6,uVar4,0x37c,0x1160);
    uVar2 = FUN_1128_121a(local_a,local_8);
    FUN_1128_1233(local_a,local_8,uVar2 & 0xfff7);
    FUN_1128_0fdf(local_a,local_8,0,0);
  }
  return;
}



/* ---- TFormSADD_Decisions_FormKeyPress @ 1088:608f  (27 octets) ---- */

void __stdcall16far
TFormSADD_Decisions_FormKeyPress(undefined2 param_1_00,undefined2 param_2,char *param_1)

{
  FUN_1158_0444();
  if (*param_1 == '.') {
    *param_1 = ',';
  }
  return;
}



/* ---- TFormSADD_Decisions_FormKeyDown @ 1088:60aa  (63 octets) ---- */

void __stdcall16far TFormSADD_Decisions_FormKeyDown(void)

{
  FUN_1158_0444();
  return;
}



/* ---- TFormSADD_Decisions_HelpBtnClick @ 1088:60e9  (45 octets) ---- */

void __stdcall16far TFormSADD_Decisions_HelpBtnClick(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined2 uVar3;
  
  FUN_1158_0444();
  uVar1 = *(undefined4 *)((int)param_1 + 0x46c);
  uVar3 = (undefined2)((ulong)uVar1 >> 0x10);
  iVar2 = (int)uVar1;
  FUN_1140_77b2((int)DAT_1160_2c2a,(int)((ulong)DAT_1160_2c2a >> 0x10),*(undefined2 *)(iVar2 + 0xac)
                ,*(undefined2 *)(iVar2 + 0xae),1);
  return;
}



/* ---- FUN_1088_6116 @ 1088:6116  (123 octets) ---- */

void __stdcall16far FUN_1088_6116(undefined4 *param_1,undefined *param_2,undefined4 param_3)

{
  undefined2 *puVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  
  uVar4 = 0x6121;
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



/* ---- TFormSADD_Decisions_DBEdit1MouseDown @ 1088:6191  (142 octets) ---- */

void __stdcall16far TFormSADD_Decisions_DBEdit1MouseDown(undefined4 param_1)

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
      *(undefined2 *)(iVar1 + 0x6d) = 0x6116;
      *(undefined2 *)(iVar1 + 0x6f) = (char *)s_sThousand_1160_1088;
      *(undefined2 *)(iVar1 + 0x71) = (int)param_1;
      *(undefined2 *)(iVar1 + 0x73) = (int)((ulong)param_1 >> 0x10);
    }
  }
  return;
}



/* ---- TFormSADD_Decisions_Panel25MouseDown @ 1088:621f  (105 octets) ---- */

void __stdcall16far TFormSADD_Decisions_Panel25MouseDown(void)

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



/* ---- TFormSADD_Decisions_CopierBtnClick @ 1088:666d  (1 octets) ---- */

void TFormSADD_Decisions_CopierBtnClick(undefined2 param_1,undefined4 param_2)

{
  undefined2 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined2 uVar4;
  char *pcVar5;
  undefined2 unaff_SS;
  undefined *puVar6;
  undefined2 uVar7;
  undefined *puVar8;
  undefined2 uVar9;
  undefined auStack_406 [256];
  undefined auStack_306 [256];
  undefined auStack_206 [256];
  int iStack_106;
  undefined2 uStack_104;
  char acStack_102 [252];
  undefined2 uStack_6;
  
  uStack_6 = 0x6678;
  FUN_1158_0444();
  uVar4 = (undefined2)((ulong)param_2 >> 0x10);
  iVar3 = (int)param_2;
  uStack_104 = (undefined2)((ulong)*(undefined4 *)(iVar3 + 0x288) >> 0x10);
  iStack_106 = (int)*(undefined4 *)(iVar3 + 0x288);
  FUN_1120_49e3(iStack_106,uStack_104);
  puVar6 = auStack_206;
  uVar9 = unaff_SS;
  FUN_1158_17cd(0x1dfa,0x1160);
  FUN_1158_184c(0x6668,0x1158);
  puVar8 = auStack_306;
  uVar7 = unaff_SS;
  FUN_1138_1d53((int)*(undefined4 *)(iVar3 + 0x47c),
                (int)((ulong)*(undefined4 *)(iVar3 + 0x47c) >> 0x10));
  FUN_1158_184c(puVar8,uVar7);
  puVar8 = auStack_406;
  uVar7 = unaff_SS;
  FUN_1150_08a9(*(int *)(iVar3 + 0x48e),*(int *)(iVar3 + 0x48e) >> 0xf);
  FUN_1158_184c(puVar8,uVar7);
  FUN_1158_17e7(0xff,acStack_102,unaff_SS,puVar6,uVar9);
  puVar2 = (undefined4 *)*(undefined4 *)(iStack_106 + 0xec);
  puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
  (*(code *)*puVar1)(0x1158,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),acStack_102);
  puVar6 = auStack_206;
  uVar9 = unaff_SS;
  FUN_1138_1d53((int)*(undefined4 *)(iVar3 + 0x1a4),
                (int)((ulong)*(undefined4 *)(iVar3 + 0x1a4) >> 0x10));
  FUN_1158_184c(0x6668,0x1138);
  puVar8 = auStack_306;
  uVar7 = unaff_SS;
  FUN_1138_1d53((int)*(undefined4 *)(iVar3 + 0x1a8),
                (int)((ulong)*(undefined4 *)(iVar3 + 0x1a8) >> 0x10));
  FUN_1158_184c(puVar8,uVar7);
  FUN_1158_17e7(0xff,acStack_102,unaff_SS,puVar6,uVar9);
  puVar2 = (undefined4 *)*(undefined4 *)(iStack_106 + 0xec);
  puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
  (*(code *)*puVar1)(0x1158,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),acStack_102);
  acStack_102[0] = '\0';
  func_0x10886292(0x1158,&stack0xfffe,*(undefined2 *)(iVar3 + 0x180),*(undefined2 *)(iVar3 + 0x182),
                  0xff,acStack_102);
  puVar2 = (undefined4 *)*(undefined4 *)(iStack_106 + 0xec);
  puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
  (*(code *)*puVar1)((char *)s_sThousand_1160_1088,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10)
                     ,acStack_102);
  acStack_102[0] = '\0';
  func_0x10886292((char *)s_sThousand_1160_1088,&stack0xfffe,*(undefined2 *)(iVar3 + 800),
                  *(undefined2 *)(iVar3 + 0x322),0xff,acStack_102);
  func_0x10886292((char *)s_sThousand_1160_1088,&stack0xfffe,*(undefined2 *)(iVar3 + 0x324),
                  *(undefined2 *)(iVar3 + 0x326),0xff,acStack_102);
  if (acStack_102[0] != '\0') {
    puVar2 = (undefined4 *)*(undefined4 *)(iStack_106 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)((char *)s_sThousand_1160_1088,(undefined4 *)puVar2,
                       (int)((ulong)puVar2 >> 0x10),acStack_102);
  }
  acStack_102[0] = '\0';
  func_0x10886292((char *)s_sThousand_1160_1088,&stack0xfffe,*(undefined2 *)(iVar3 + 0x328),
                  *(undefined2 *)(iVar3 + 0x32a),0xff,acStack_102);
  func_0x10886292((char *)s_sThousand_1160_1088,&stack0xfffe,*(undefined2 *)(iVar3 + 0x32c),
                  *(undefined2 *)(iVar3 + 0x32e),0xff,acStack_102);
  if (acStack_102[0] != '\0') {
    puVar2 = (undefined4 *)*(undefined4 *)(iStack_106 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)((char *)s_sThousand_1160_1088,(undefined4 *)puVar2,
                       (int)((ulong)puVar2 >> 0x10),acStack_102);
  }
  acStack_102[0] = '\0';
  func_0x10886292((char *)s_sThousand_1160_1088,&stack0xfffe,*(undefined2 *)(iVar3 + 0x330),
                  *(undefined2 *)(iVar3 + 0x332),0xff,acStack_102);
  func_0x10886292((char *)s_sThousand_1160_1088,&stack0xfffe,*(undefined2 *)(iVar3 + 0x334),
                  *(undefined2 *)(iVar3 + 0x336),0xff,acStack_102);
  if (acStack_102[0] != '\0') {
    puVar2 = (undefined4 *)*(undefined4 *)(iStack_106 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)((char *)s_sThousand_1160_1088,(undefined4 *)puVar2,
                       (int)((ulong)puVar2 >> 0x10),acStack_102);
  }
  acStack_102[0] = '\0';
  func_0x10886292((char *)s_sThousand_1160_1088,&stack0xfffe,*(undefined2 *)(iVar3 + 0x338),
                  *(undefined2 *)(iVar3 + 0x33a),0xff,acStack_102);
  func_0x10886292((char *)s_sThousand_1160_1088,&stack0xfffe,*(undefined2 *)(iVar3 + 0x33c),
                  *(undefined2 *)(iVar3 + 0x33e),0xff,acStack_102);
  if (acStack_102[0] != '\0') {
    puVar2 = (undefined4 *)*(undefined4 *)(iStack_106 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)((char *)s_sThousand_1160_1088,(undefined4 *)puVar2,
                       (int)((ulong)puVar2 >> 0x10),acStack_102);
  }
  acStack_102[0] = '\0';
  func_0x10886292((char *)s_sThousand_1160_1088,&stack0xfffe,*(undefined2 *)(iVar3 + 0x340),
                  *(undefined2 *)(iVar3 + 0x342),0xff,acStack_102);
  func_0x10886292((char *)s_sThousand_1160_1088,&stack0xfffe,*(undefined2 *)(iVar3 + 0x344),
                  *(undefined2 *)(iVar3 + 0x346),0xff,acStack_102);
  if (acStack_102[0] != '\0') {
    puVar2 = (undefined4 *)*(undefined4 *)(iStack_106 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)((char *)s_sThousand_1160_1088,(undefined4 *)puVar2,
                       (int)((ulong)puVar2 >> 0x10),acStack_102);
  }
  acStack_102[0] = '\0';
  func_0x10886292((char *)s_sThousand_1160_1088,&stack0xfffe,*(undefined2 *)(iVar3 + 0x348),
                  *(undefined2 *)(iVar3 + 0x34a),0xff,acStack_102);
  func_0x10886292((char *)s_sThousand_1160_1088,&stack0xfffe,*(undefined2 *)(iVar3 + 0x34c),
                  *(undefined2 *)(iVar3 + 0x34e),0xff,acStack_102);
  if (acStack_102[0] != '\0') {
    puVar2 = (undefined4 *)*(undefined4 *)(iStack_106 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)((char *)s_sThousand_1160_1088,(undefined4 *)puVar2,
                       (int)((ulong)puVar2 >> 0x10),acStack_102);
  }
  acStack_102[0] = '\0';
  func_0x10886292((char *)s_sThousand_1160_1088,&stack0xfffe,*(undefined2 *)(iVar3 + 0x350),
                  *(undefined2 *)(iVar3 + 0x352),0xff,acStack_102);
  func_0x10886292((char *)s_sThousand_1160_1088,&stack0xfffe,*(undefined2 *)(iVar3 + 0x354),
                  *(undefined2 *)(iVar3 + 0x356),0xff,acStack_102);
  if (acStack_102[0] != '\0') {
    puVar2 = (undefined4 *)*(undefined4 *)(iStack_106 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)((char *)s_sThousand_1160_1088,(undefined4 *)puVar2,
                       (int)((ulong)puVar2 >> 0x10),acStack_102);
  }
  acStack_102[0] = '\0';
  func_0x10886292((char *)s_sThousand_1160_1088,&stack0xfffe,*(undefined2 *)(iVar3 + 0x1c4),
                  *(undefined2 *)(iVar3 + 0x1c6),0xff,acStack_102);
  puVar2 = (undefined4 *)*(undefined4 *)(iStack_106 + 0xec);
  puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
  (*(code *)*puVar1)((char *)s_sThousand_1160_1088,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10)
                     ,acStack_102);
  acStack_102[0] = '\0';
  func_0x10886292((char *)s_sThousand_1160_1088,&stack0xfffe,*(undefined2 *)(iVar3 + 0x358),
                  *(undefined2 *)(iVar3 + 0x35a),0xff,acStack_102);
  func_0x10886292((char *)s_sThousand_1160_1088,&stack0xfffe,*(undefined2 *)(iVar3 + 0x35c),
                  *(undefined2 *)(iVar3 + 0x35e),0xff,acStack_102);
  if (acStack_102[0] != '\0') {
    puVar2 = (undefined4 *)*(undefined4 *)(iStack_106 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)((char *)s_sThousand_1160_1088,(undefined4 *)puVar2,
                       (int)((ulong)puVar2 >> 0x10),acStack_102);
  }
  acStack_102[0] = '\0';
  func_0x10886292((char *)s_sThousand_1160_1088,&stack0xfffe,*(undefined2 *)(iVar3 + 0x360),
                  *(undefined2 *)(iVar3 + 0x362),0xff,acStack_102);
  func_0x10886292((char *)s_sThousand_1160_1088,&stack0xfffe,*(undefined2 *)(iVar3 + 0x364),
                  *(undefined2 *)(iVar3 + 0x366),0xff,acStack_102);
  if (acStack_102[0] != '\0') {
    puVar2 = (undefined4 *)*(undefined4 *)(iStack_106 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)((char *)s_sThousand_1160_1088,(undefined4 *)puVar2,
                       (int)((ulong)puVar2 >> 0x10),acStack_102);
  }
  acStack_102[0] = '\0';
  func_0x10886292((char *)s_sThousand_1160_1088,&stack0xfffe,*(undefined2 *)(iVar3 + 0x184),
                  *(undefined2 *)(iVar3 + 0x186),0xff,acStack_102);
  func_0x10886292((char *)s_sThousand_1160_1088,&stack0xfffe,*(undefined2 *)(iVar3 + 0x1ec),
                  *(undefined2 *)(iVar3 + 0x1ee),0xff,acStack_102);
  func_0x10886292((char *)s_sThousand_1160_1088,&stack0xfffe,*(undefined2 *)(iVar3 + 0x200),
                  *(undefined2 *)(iVar3 + 0x202),0xff,acStack_102);
  if (acStack_102[0] != '\0') {
    puVar2 = (undefined4 *)*(undefined4 *)(iStack_106 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)((char *)s_sThousand_1160_1088,(undefined4 *)puVar2,
                       (int)((ulong)puVar2 >> 0x10),acStack_102);
  }
  acStack_102[0] = '\0';
  func_0x10886292((char *)s_sThousand_1160_1088,&stack0xfffe,*(undefined2 *)(iVar3 + 0x368),
                  *(undefined2 *)(iVar3 + 0x36a),0xff,acStack_102);
  func_0x10886292((char *)s_sThousand_1160_1088,&stack0xfffe,*(undefined2 *)(iVar3 + 0x1f0),
                  *(undefined2 *)(iVar3 + 0x1f2),0xff,acStack_102);
  func_0x10886292((char *)s_sThousand_1160_1088,&stack0xfffe,*(undefined2 *)(iVar3 + 0x204),
                  *(undefined2 *)(iVar3 + 0x206),0xff,acStack_102);
  if (acStack_102[0] != '\0') {
    puVar2 = (undefined4 *)*(undefined4 *)(iStack_106 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)((char *)s_sThousand_1160_1088,(undefined4 *)puVar2,
                       (int)((ulong)puVar2 >> 0x10),acStack_102);
  }
  acStack_102[0] = '\0';
  func_0x10886292((char *)s_sThousand_1160_1088,&stack0xfffe,*(undefined2 *)(iVar3 + 0x36c),
                  *(undefined2 *)(iVar3 + 0x36e),0xff,acStack_102);
  func_0x10886292((char *)s_sThousand_1160_1088,&stack0xfffe,*(undefined2 *)(iVar3 + 500),
                  *(undefined2 *)(iVar3 + 0x1f6),0xff,acStack_102);
  func_0x10886292((char *)s_sThousand_1160_1088,&stack0xfffe,*(undefined2 *)(iVar3 + 0x208),
                  *(undefined2 *)(iVar3 + 0x20a),0xff,acStack_102);
  if (acStack_102[0] != '\0') {
    puVar2 = (undefined4 *)*(undefined4 *)(iStack_106 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)((char *)s_sThousand_1160_1088,(undefined4 *)puVar2,
                       (int)((ulong)puVar2 >> 0x10),acStack_102);
  }
  acStack_102[0] = '\0';
  func_0x10886292((char *)s_sThousand_1160_1088,&stack0xfffe,*(undefined2 *)(iVar3 + 0x370),
                  *(undefined2 *)(iVar3 + 0x372),0xff,acStack_102);
  func_0x10886292((char *)s_sThousand_1160_1088,&stack0xfffe,*(undefined2 *)(iVar3 + 0x1f8),
                  *(undefined2 *)(iVar3 + 0x1fa),0xff,acStack_102);
  func_0x10886292((char *)s_sThousand_1160_1088,&stack0xfffe,*(undefined2 *)(iVar3 + 0x20c),
                  *(undefined2 *)(iVar3 + 0x20e),0xff,acStack_102);
  if (acStack_102[0] != '\0') {
    puVar2 = (undefined4 *)*(undefined4 *)(iStack_106 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)((char *)s_sThousand_1160_1088,(undefined4 *)puVar2,
                       (int)((ulong)puVar2 >> 0x10),acStack_102);
  }
  acStack_102[0] = '\0';
  func_0x10886292((char *)s_sThousand_1160_1088,&stack0xfffe,*(undefined2 *)(iVar3 + 0x188),
                  *(undefined2 *)(iVar3 + 0x18a),0xff,acStack_102);
  puVar2 = (undefined4 *)*(undefined4 *)(iStack_106 + 0xec);
  puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
  (*(code *)*puVar1)((char *)s_sThousand_1160_1088,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10)
                     ,acStack_102);
  acStack_102[0] = '\0';
  func_0x10886292((char *)s_sThousand_1160_1088,&stack0xfffe,*(undefined2 *)(iVar3 + 0x374),
                  *(undefined2 *)(iVar3 + 0x376),0xff,acStack_102);
  func_0x10886292((char *)s_sThousand_1160_1088,&stack0xfffe,*(undefined2 *)(iVar3 + 0x378),
                  *(undefined2 *)(iVar3 + 0x37a),0xff,acStack_102);
  if (acStack_102[0] != '\0') {
    puVar2 = (undefined4 *)*(undefined4 *)(iStack_106 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)((char *)s_sThousand_1160_1088,(undefined4 *)puVar2,
                       (int)((ulong)puVar2 >> 0x10),acStack_102);
  }
  acStack_102[0] = '\0';
  func_0x10886292((char *)s_sThousand_1160_1088,&stack0xfffe,*(undefined2 *)(iVar3 + 900),
                  *(undefined2 *)(iVar3 + 0x386),0xff,acStack_102);
  func_0x10886292((char *)s_sThousand_1160_1088,&stack0xfffe,*(undefined2 *)(iVar3 + 0x388),
                  *(undefined2 *)(iVar3 + 0x38a),0xff,acStack_102);
  if (acStack_102[0] != '\0') {
    puVar2 = (undefined4 *)*(undefined4 *)(iStack_106 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)((char *)s_sThousand_1160_1088,(undefined4 *)puVar2,
                       (int)((ulong)puVar2 >> 0x10),acStack_102);
  }
  acStack_102[0] = '\0';
  func_0x10886292((char *)s_sThousand_1160_1088,&stack0xfffe,*(undefined2 *)(iVar3 + 0x37c),
                  *(undefined2 *)(iVar3 + 0x37e),0xff,acStack_102);
  func_0x10886292((char *)s_sThousand_1160_1088,&stack0xfffe,*(undefined2 *)(iVar3 + 0x380),
                  *(undefined2 *)(iVar3 + 0x382),0xff,acStack_102);
  if (acStack_102[0] != '\0') {
    puVar2 = (undefined4 *)*(undefined4 *)(iStack_106 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)((char *)s_sThousand_1160_1088,(undefined4 *)puVar2,
                       (int)((ulong)puVar2 >> 0x10),acStack_102);
  }
  acStack_102[0] = '\0';
  func_0x10886292((char *)s_sThousand_1160_1088,&stack0xfffe,*(undefined2 *)(iVar3 + 0x18c),
                  *(undefined2 *)(iVar3 + 0x18e),0xff,acStack_102);
  func_0x10886292((char *)s_sThousand_1160_1088,&stack0xfffe,*(undefined2 *)(iVar3 + 0x214),
                  *(undefined2 *)(iVar3 + 0x216),0xff,acStack_102);
  func_0x10886292((char *)s_sThousand_1160_1088,&stack0xfffe,*(undefined2 *)(iVar3 + 0x220),
                  *(undefined2 *)(iVar3 + 0x222),0xff,acStack_102);
  if (acStack_102[0] != '\0') {
    puVar2 = (undefined4 *)*(undefined4 *)(iStack_106 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)((char *)s_sThousand_1160_1088,(undefined4 *)puVar2,
                       (int)((ulong)puVar2 >> 0x10),acStack_102);
  }
  acStack_102[0] = '\0';
  func_0x10886292((char *)s_sThousand_1160_1088,&stack0xfffe,*(undefined2 *)(iVar3 + 0x38c),
                  *(undefined2 *)(iVar3 + 0x38e),0xff,acStack_102);
  func_0x10886292((char *)s_sThousand_1160_1088,&stack0xfffe,*(undefined2 *)(iVar3 + 0x218),
                  *(undefined2 *)(iVar3 + 0x21a),0xff,acStack_102);
  func_0x10886292((char *)s_sThousand_1160_1088,&stack0xfffe,*(undefined2 *)(iVar3 + 0x224),
                  *(undefined2 *)(iVar3 + 0x226),0xff,acStack_102);
  if (acStack_102[0] != '\0') {
    puVar2 = (undefined4 *)*(undefined4 *)(iStack_106 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)((char *)s_sThousand_1160_1088,(undefined4 *)puVar2,
                       (int)((ulong)puVar2 >> 0x10),acStack_102);
  }
  acStack_102[0] = '\0';
  func_0x10886292((char *)s_sThousand_1160_1088,&stack0xfffe,*(undefined2 *)(iVar3 + 0x2a0),
                  *(undefined2 *)(iVar3 + 0x2a2),0xff,acStack_102);
  puVar2 = (undefined4 *)*(undefined4 *)(iStack_106 + 0xec);
  puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
  (*(code *)*puVar1)((char *)s_sThousand_1160_1088,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10)
                     ,acStack_102);
  acStack_102[0] = '\0';
  func_0x10886292((char *)s_sThousand_1160_1088,&stack0xfffe,*(undefined2 *)(iVar3 + 0x390),
                  *(undefined2 *)(iVar3 + 0x392),0xff,acStack_102);
  func_0x10886292((char *)s_sThousand_1160_1088,&stack0xfffe,*(undefined2 *)(iVar3 + 0x39c),
                  *(undefined2 *)(iVar3 + 0x39e),0xff,acStack_102);
  if (acStack_102[0] != '\0') {
    puVar2 = (undefined4 *)*(undefined4 *)(iStack_106 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)((char *)s_sThousand_1160_1088,(undefined4 *)puVar2,
                       (int)((ulong)puVar2 >> 0x10),acStack_102);
  }
  acStack_102[0] = '\0';
  func_0x10886292((char *)s_sThousand_1160_1088,&stack0xfffe,*(undefined2 *)(iVar3 + 0x394),
                  *(undefined2 *)(iVar3 + 0x396),0xff,acStack_102);
  func_0x10886292((char *)s_sThousand_1160_1088,&stack0xfffe,*(undefined2 *)(iVar3 + 0x3a0),
                  *(undefined2 *)(iVar3 + 0x3a2),0xff,acStack_102);
  if (acStack_102[0] != '\0') {
    puVar2 = (undefined4 *)*(undefined4 *)(iStack_106 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)((char *)s_sThousand_1160_1088,(undefined4 *)puVar2,
                       (int)((ulong)puVar2 >> 0x10),acStack_102);
  }
  acStack_102[0] = '\0';
  func_0x10886292((char *)s_sThousand_1160_1088,&stack0xfffe,*(undefined2 *)(iVar3 + 0x398),
                  *(undefined2 *)(iVar3 + 0x39a),0xff,acStack_102);
  func_0x10886292((char *)s_sThousand_1160_1088,&stack0xfffe,*(undefined2 *)(iVar3 + 0x3a4),
                  *(undefined2 *)(iVar3 + 0x3a6),0xff,acStack_102);
  if (acStack_102[0] != '\0') {
    puVar2 = (undefined4 *)*(undefined4 *)(iStack_106 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)((char *)s_sThousand_1160_1088,(undefined4 *)puVar2,
                       (int)((ulong)puVar2 >> 0x10),acStack_102);
  }
  acStack_102[0] = '\0';
  func_0x10886292((char *)s_sThousand_1160_1088,&stack0xfffe,*(undefined2 *)(iVar3 + 0x29c),
                  *(undefined2 *)(iVar3 + 0x29e),0xff,acStack_102);
  puVar2 = (undefined4 *)*(undefined4 *)(iStack_106 + 0xec);
  puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
  (*(code *)*puVar1)((char *)s_sThousand_1160_1088,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10)
                     ,acStack_102);
  acStack_102[0] = '\0';
  func_0x10886292((char *)s_sThousand_1160_1088,&stack0xfffe,*(undefined2 *)(iVar3 + 0x3a8),
                  *(undefined2 *)(iVar3 + 0x3aa),0xff,acStack_102);
  func_0x10886292((char *)s_sThousand_1160_1088,&stack0xfffe,*(undefined2 *)(iVar3 + 0x3ac),
                  *(undefined2 *)(iVar3 + 0x3ae),0xff,acStack_102);
  if (acStack_102[0] != '\0') {
    puVar2 = (undefined4 *)*(undefined4 *)(iStack_106 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)((char *)s_sThousand_1160_1088,(undefined4 *)puVar2,
                       (int)((ulong)puVar2 >> 0x10),acStack_102);
  }
  acStack_102[0] = '\0';
  func_0x10886292((char *)s_sThousand_1160_1088,&stack0xfffe,*(undefined2 *)(iVar3 + 0x3b0),
                  *(undefined2 *)(iVar3 + 0x3b2),0xff,acStack_102);
  func_0x10886292((char *)s_sThousand_1160_1088,&stack0xfffe,*(undefined2 *)(iVar3 + 0x3b4),
                  *(undefined2 *)(iVar3 + 0x3b6),0xff,acStack_102);
  if (acStack_102[0] != '\0') {
    puVar2 = (undefined4 *)*(undefined4 *)(iStack_106 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)((char *)s_sThousand_1160_1088,(undefined4 *)puVar2,
                       (int)((ulong)puVar2 >> 0x10),acStack_102);
  }
  acStack_102[0] = '\0';
  func_0x10886292((char *)s_sThousand_1160_1088,&stack0xfffe,*(undefined2 *)(iVar3 + 0x3b8),
                  *(undefined2 *)(iVar3 + 0x3ba),0xff,acStack_102);
  func_0x10886292((char *)s_sThousand_1160_1088,&stack0xfffe,*(undefined2 *)(iVar3 + 0x3bc),
                  *(undefined2 *)(iVar3 + 0x3be),0xff,acStack_102);
  if (acStack_102[0] != '\0') {
    puVar2 = (undefined4 *)*(undefined4 *)(iStack_106 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)((char *)s_sThousand_1160_1088,(undefined4 *)puVar2,
                       (int)((ulong)puVar2 >> 0x10),acStack_102);
  }
  acStack_102[0] = '\0';
  func_0x10886292((char *)s_sThousand_1160_1088,&stack0xfffe,*(undefined2 *)(iVar3 + 0x3c0),
                  *(undefined2 *)(iVar3 + 0x3c2),0xff,acStack_102);
  func_0x10886292((char *)s_sThousand_1160_1088,&stack0xfffe,*(undefined2 *)(iVar3 + 0x3c4),
                  *(undefined2 *)(iVar3 + 0x3c6),0xff,acStack_102);
  if (acStack_102[0] != '\0') {
    puVar2 = (undefined4 *)*(undefined4 *)(iStack_106 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)((char *)s_sThousand_1160_1088,(undefined4 *)puVar2,
                       (int)((ulong)puVar2 >> 0x10),acStack_102);
  }
  acStack_102[0] = '\0';
  func_0x10886292((char *)s_sThousand_1160_1088,&stack0xfffe,*(undefined2 *)(iVar3 + 0x3c8),
                  *(undefined2 *)(iVar3 + 0x3ca),0xff,acStack_102);
  func_0x10886292((char *)s_sThousand_1160_1088,&stack0xfffe,*(undefined2 *)(iVar3 + 0x3cc),
                  *(undefined2 *)(iVar3 + 0x3ce),0xff,acStack_102);
  if (acStack_102[0] != '\0') {
    puVar2 = (undefined4 *)*(undefined4 *)(iStack_106 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)((char *)s_sThousand_1160_1088,(undefined4 *)puVar2,
                       (int)((ulong)puVar2 >> 0x10),acStack_102);
  }
  acStack_102[0] = '\0';
  func_0x10886292((char *)s_sThousand_1160_1088,&stack0xfffe,*(undefined2 *)(iVar3 + 0x3d0),
                  *(undefined2 *)(iVar3 + 0x3d2),0xff,acStack_102);
  func_0x10886292((char *)s_sThousand_1160_1088,&stack0xfffe,*(undefined2 *)(iVar3 + 0x3d4),
                  *(undefined2 *)(iVar3 + 0x3d6),0xff,acStack_102);
  if (acStack_102[0] != '\0') {
    puVar2 = (undefined4 *)*(undefined4 *)(iStack_106 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)((char *)s_sThousand_1160_1088,(undefined4 *)puVar2,
                       (int)((ulong)puVar2 >> 0x10),acStack_102);
  }
  acStack_102[0] = '\0';
  func_0x10886292((char *)s_sThousand_1160_1088,&stack0xfffe,*(undefined2 *)(iVar3 + 0x3d8),
                  *(undefined2 *)(iVar3 + 0x3da),0xff,acStack_102);
  func_0x10886292((char *)s_sThousand_1160_1088,&stack0xfffe,*(undefined2 *)(iVar3 + 0x3dc),
                  *(undefined2 *)(iVar3 + 0x3de),0xff,acStack_102);
  if (acStack_102[0] != '\0') {
    puVar2 = (undefined4 *)*(undefined4 *)(iStack_106 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)((char *)s_sThousand_1160_1088,(undefined4 *)puVar2,
                       (int)((ulong)puVar2 >> 0x10),acStack_102);
  }
  acStack_102[0] = '\0';
  func_0x10886292((char *)s_sThousand_1160_1088,&stack0xfffe,*(undefined2 *)(iVar3 + 0x1e0),
                  *(undefined2 *)(iVar3 + 0x1e2),0xff,acStack_102);
  puVar6 = auStack_206;
  uVar9 = unaff_SS;
  FUN_1158_17cd(acStack_102,unaff_SS);
  FUN_1158_184c(0x666a,0x1158);
  puVar8 = auStack_306;
  uVar7 = unaff_SS;
  FUN_1138_1d53((int)*(undefined4 *)(iVar3 + 0x3e0),
                (int)((ulong)*(undefined4 *)(iVar3 + 0x3e0) >> 0x10));
  FUN_1158_184c(puVar8,uVar7);
  FUN_1158_17e7(0xff,acStack_102,unaff_SS,puVar6,uVar9);
  func_0x10886292(0x1158,&stack0xfffe,*(undefined2 *)(iVar3 + 0x3e4),*(undefined2 *)(iVar3 + 0x3e6),
                  0xff,acStack_102);
  if (acStack_102[0] != '\0') {
    puVar2 = (undefined4 *)*(undefined4 *)(iStack_106 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)((char *)s_sThousand_1160_1088,(undefined4 *)puVar2,
                       (int)((ulong)puVar2 >> 0x10),acStack_102);
  }
  acStack_102[0] = '\0';
  func_0x10886292((char *)s_sThousand_1160_1088,&stack0xfffe,*(undefined2 *)(iVar3 + 0x284),
                  *(undefined2 *)(iVar3 + 0x286),0xff,acStack_102);
  puVar6 = auStack_206;
  uVar9 = unaff_SS;
  FUN_1158_17cd(acStack_102,unaff_SS);
  FUN_1158_184c(0x666a,0x1158);
  puVar8 = auStack_306;
  uVar7 = unaff_SS;
  FUN_1138_1d53((int)*(undefined4 *)(iVar3 + 0x3f8),
                (int)((ulong)*(undefined4 *)(iVar3 + 0x3f8) >> 0x10));
  FUN_1158_184c(puVar8,uVar7);
  FUN_1158_17e7(0xff,acStack_102,unaff_SS,puVar6,uVar9);
  func_0x10886292(0x1158,&stack0xfffe,*(undefined2 *)(iVar3 + 0x3fc),*(undefined2 *)(iVar3 + 0x3fe),
                  0xff,acStack_102);
  if (acStack_102[0] != '\0') {
    puVar2 = (undefined4 *)*(undefined4 *)(iStack_106 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)((char *)s_sThousand_1160_1088,(undefined4 *)puVar2,
                       (int)((ulong)puVar2 >> 0x10),acStack_102);
  }
  acStack_102[0] = '\0';
  func_0x10886292((char *)s_sThousand_1160_1088,&stack0xfffe,*(undefined2 *)(iVar3 + 1000),
                  *(undefined2 *)(iVar3 + 0x3ea),0xff,acStack_102);
  func_0x10886292((char *)s_sThousand_1160_1088,&stack0xfffe,*(undefined2 *)(iVar3 + 0x3f0),
                  *(undefined2 *)(iVar3 + 0x3f2),0xff,acStack_102);
  puVar6 = auStack_206;
  uVar7 = unaff_SS;
  FUN_1158_17cd(0x6668,(char *)s_sThousand_1160_1088);
  FUN_1158_184c(acStack_102,unaff_SS);
  FUN_1158_17e7(0xff,acStack_102,unaff_SS,puVar6,uVar7);
  if (acStack_102[0] != '\0') {
    puVar2 = (undefined4 *)*(undefined4 *)(iStack_106 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)(0x1158,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),acStack_102);
  }
  acStack_102[0] = '\0';
  func_0x10886292(0x1158,&stack0xfffe,*(undefined2 *)(iVar3 + 0x280),*(undefined2 *)(iVar3 + 0x282),
                  0xff,acStack_102);
  func_0x10886292((char *)s_sThousand_1160_1088,&stack0xfffe,*(undefined2 *)(iVar3 + 0x3ec),
                  *(undefined2 *)(iVar3 + 0x3ee),0xff,acStack_102);
  func_0x10886292((char *)s_sThousand_1160_1088,&stack0xfffe,*(undefined2 *)(iVar3 + 0x3f4),
                  *(undefined2 *)(iVar3 + 0x3f6),0xff,acStack_102);
  if (acStack_102[0] != '\0') {
    puVar2 = (undefined4 *)*(undefined4 *)(iStack_106 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)((char *)s_sThousand_1160_1088,(undefined4 *)puVar2,
                       (int)((ulong)puVar2 >> 0x10),acStack_102);
  }
  acStack_102[0] = '\0';
  func_0x10886292((char *)s_sThousand_1160_1088,&stack0xfffe,*(undefined2 *)(iVar3 + 0x1d4),
                  *(undefined2 *)(iVar3 + 0x1d6),0xff,acStack_102);
  if (acStack_102[0] != '\0') {
    puVar2 = (undefined4 *)*(undefined4 *)(iStack_106 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)((char *)s_sThousand_1160_1088,(undefined4 *)puVar2,
                       (int)((ulong)puVar2 >> 0x10),acStack_102);
  }
  acStack_102[0] = '\0';
  func_0x10886292((char *)s_sThousand_1160_1088,&stack0xfffe,*(undefined2 *)(iVar3 + 0x400),
                  *(undefined2 *)(iVar3 + 0x402),0xff,acStack_102);
  func_0x10886292((char *)s_sThousand_1160_1088,&stack0xfffe,*(undefined2 *)(iVar3 + 0x230),
                  *(undefined2 *)(iVar3 + 0x232),0xff,acStack_102);
  func_0x10886292((char *)s_sThousand_1160_1088,&stack0xfffe,*(undefined2 *)(iVar3 + 0x248),
                  *(undefined2 *)(iVar3 + 0x24a),0xff,acStack_102);
  if (acStack_102[0] != '\0') {
    puVar2 = (undefined4 *)*(undefined4 *)(iStack_106 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)((char *)s_sThousand_1160_1088,(undefined4 *)puVar2,
                       (int)((ulong)puVar2 >> 0x10),acStack_102);
  }
  acStack_102[0] = '\0';
  func_0x10886292((char *)s_sThousand_1160_1088,&stack0xfffe,*(undefined2 *)(iVar3 + 0x404),
                  *(undefined2 *)(iVar3 + 0x406),0xff,acStack_102);
  func_0x10886292((char *)s_sThousand_1160_1088,&stack0xfffe,*(undefined2 *)(iVar3 + 0x234),
                  *(undefined2 *)(iVar3 + 0x236),0xff,acStack_102);
  func_0x10886292((char *)s_sThousand_1160_1088,&stack0xfffe,*(undefined2 *)(iVar3 + 0x24c),
                  *(undefined2 *)(iVar3 + 0x24e),0xff,acStack_102);
  if (acStack_102[0] != '\0') {
    puVar2 = (undefined4 *)*(undefined4 *)(iStack_106 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)((char *)s_sThousand_1160_1088,(undefined4 *)puVar2,
                       (int)((ulong)puVar2 >> 0x10),acStack_102);
  }
  acStack_102[0] = '\0';
  func_0x10886292((char *)s_sThousand_1160_1088,&stack0xfffe,*(undefined2 *)(iVar3 + 0x408),
                  *(undefined2 *)(iVar3 + 0x40a),0xff,acStack_102);
  func_0x10886292((char *)s_sThousand_1160_1088,&stack0xfffe,*(undefined2 *)(iVar3 + 0x238),
                  *(undefined2 *)(iVar3 + 0x23a),0xff,acStack_102);
  func_0x10886292((char *)s_sThousand_1160_1088,&stack0xfffe,*(undefined2 *)(iVar3 + 0x250),
                  *(undefined2 *)(iVar3 + 0x252),0xff,acStack_102);
  if (acStack_102[0] != '\0') {
    puVar2 = (undefined4 *)*(undefined4 *)(iStack_106 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)((char *)s_sThousand_1160_1088,(undefined4 *)puVar2,
                       (int)((ulong)puVar2 >> 0x10),acStack_102);
  }
  acStack_102[0] = '\0';
  func_0x10886292((char *)s_sThousand_1160_1088,&stack0xfffe,*(undefined2 *)(iVar3 + 0x40c),
                  *(undefined2 *)(iVar3 + 0x40e),0xff,acStack_102);
  func_0x10886292((char *)s_sThousand_1160_1088,&stack0xfffe,*(undefined2 *)(iVar3 + 0x23c),
                  *(undefined2 *)(iVar3 + 0x23e),0xff,acStack_102);
  func_0x10886292((char *)s_sThousand_1160_1088,&stack0xfffe,*(undefined2 *)(iVar3 + 0x254),
                  *(undefined2 *)(iVar3 + 0x256),0xff,acStack_102);
  if (acStack_102[0] != '\0') {
    puVar2 = (undefined4 *)*(undefined4 *)(iStack_106 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)((char *)s_sThousand_1160_1088,(undefined4 *)puVar2,
                       (int)((ulong)puVar2 >> 0x10),acStack_102);
  }
  acStack_102[0] = '\0';
  func_0x10886292((char *)s_sThousand_1160_1088,&stack0xfffe,*(undefined2 *)(iVar3 + 0x410),
                  *(undefined2 *)(iVar3 + 0x412),0xff,acStack_102);
  func_0x10886292((char *)s_sThousand_1160_1088,&stack0xfffe,*(undefined2 *)(iVar3 + 0x278),
                  *(undefined2 *)(iVar3 + 0x27a),0xff,acStack_102);
  func_0x10886292((char *)s_sThousand_1160_1088,&stack0xfffe,*(undefined2 *)(iVar3 + 0x27c),
                  *(undefined2 *)(iVar3 + 0x27e),0xff,acStack_102);
  if (acStack_102[0] != '\0') {
    puVar2 = (undefined4 *)*(undefined4 *)(iStack_106 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)((char *)s_sThousand_1160_1088,(undefined4 *)puVar2,
                       (int)((ulong)puVar2 >> 0x10),acStack_102);
  }
  acStack_102[0] = '\0';
  pcVar5 = (char *)s_sThousand_1160_1088;
  func_0x10886292((char *)s_sThousand_1160_1088,&stack0xfffe,*(undefined2 *)(iVar3 + 0x1d8),
                  *(undefined2 *)(iVar3 + 0x1da),0xff,acStack_102);
  if (acStack_102[0] != '\0') {
    puVar2 = (undefined4 *)*(undefined4 *)(iStack_106 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)((char *)s_sThousand_1160_1088,(undefined4 *)puVar2,
                       (int)((ulong)puVar2 >> 0x10),acStack_102);
  }
  acStack_102[0] = '\0';
  if (*(char *)((int)*(undefined4 *)(iVar3 + 0x418) + 0x29) != '\0') {
    puVar6 = auStack_206;
    uVar7 = unaff_SS;
    FUN_1138_1d53((int)*(undefined4 *)(iVar3 + 0x418),
                  (int)((ulong)*(undefined4 *)(iVar3 + 0x418) >> 0x10));
    pcVar5 = (char *)0x1158;
    FUN_1158_17e7(0xff,acStack_102,unaff_SS,puVar6,uVar7);
  }
  func_0x10886292(pcVar5,&stack0xfffe,*(undefined2 *)(iVar3 + 0x418),*(undefined2 *)(iVar3 + 0x41a),
                  0xff,acStack_102);
  if (acStack_102[0] != '\0') {
    puVar2 = (undefined4 *)*(undefined4 *)(iStack_106 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)((char *)s_sThousand_1160_1088,(undefined4 *)puVar2,
                       (int)((ulong)puVar2 >> 0x10),acStack_102);
  }
  acStack_102[0] = '\0';
  func_0x10886292((char *)s_sThousand_1160_1088,&stack0xfffe,*(undefined2 *)(iVar3 + 0x41c),
                  *(undefined2 *)(iVar3 + 0x41e),0xff,acStack_102);
  func_0x10886292((char *)s_sThousand_1160_1088,&stack0xfffe,*(undefined2 *)(iVar3 + 0x420),
                  *(undefined2 *)(iVar3 + 0x422),0xff,acStack_102);
  if (acStack_102[0] != '\0') {
    puVar2 = (undefined4 *)*(undefined4 *)(iStack_106 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)((char *)s_sThousand_1160_1088,(undefined4 *)puVar2,
                       (int)((ulong)puVar2 >> 0x10),acStack_102);
  }
  acStack_102[0] = '\0';
  func_0x10886292((char *)s_sThousand_1160_1088,&stack0xfffe,*(undefined2 *)(iVar3 + 0x1dc),
                  *(undefined2 *)(iVar3 + 0x1de),0xff,acStack_102);
  func_0x10886292((char *)s_sThousand_1160_1088,&stack0xfffe,*(undefined2 *)(iVar3 + 0x25c),
                  *(undefined2 *)(iVar3 + 0x25e),0xff,acStack_102);
  func_0x10886292((char *)s_sThousand_1160_1088,&stack0xfffe,*(undefined2 *)(iVar3 + 0x26c),
                  *(undefined2 *)(iVar3 + 0x26e),0xff,acStack_102);
  if (acStack_102[0] != '\0') {
    puVar2 = (undefined4 *)*(undefined4 *)(iStack_106 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)((char *)s_sThousand_1160_1088,(undefined4 *)puVar2,
                       (int)((ulong)puVar2 >> 0x10),acStack_102);
  }
  acStack_102[0] = '\0';
  func_0x10886292((char *)s_sThousand_1160_1088,&stack0xfffe,*(undefined2 *)(iVar3 + 0x424),
                  *(undefined2 *)(iVar3 + 0x426),0xff,acStack_102);
  func_0x10886292((char *)s_sThousand_1160_1088,&stack0xfffe,*(undefined2 *)(iVar3 + 0x260),
                  *(undefined2 *)(iVar3 + 0x262),0xff,acStack_102);
  func_0x10886292((char *)s_sThousand_1160_1088,&stack0xfffe,*(undefined2 *)(iVar3 + 0x270),
                  *(undefined2 *)(iVar3 + 0x272),0xff,acStack_102);
  if (acStack_102[0] != '\0') {
    puVar2 = (undefined4 *)*(undefined4 *)(iStack_106 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)((char *)s_sThousand_1160_1088,(undefined4 *)puVar2,
                       (int)((ulong)puVar2 >> 0x10),acStack_102);
  }
  acStack_102[0] = '\0';
  func_0x10886292((char *)s_sThousand_1160_1088,&stack0xfffe,*(undefined2 *)(iVar3 + 0x428),
                  *(undefined2 *)(iVar3 + 0x42a),0xff,acStack_102);
  func_0x10886292((char *)s_sThousand_1160_1088,&stack0xfffe,*(undefined2 *)(iVar3 + 0x264),
                  *(undefined2 *)(iVar3 + 0x266),0xff,acStack_102);
  func_0x10886292((char *)s_sThousand_1160_1088,&stack0xfffe,*(undefined2 *)(iVar3 + 0x274),
                  *(undefined2 *)(iVar3 + 0x276),0xff,acStack_102);
  if (acStack_102[0] != '\0') {
    puVar2 = (undefined4 *)*(undefined4 *)(iStack_106 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)((char *)s_sThousand_1160_1088,(undefined4 *)puVar2,
                       (int)((ulong)puVar2 >> 0x10),acStack_102);
  }
  acStack_102[0] = '\0';
  func_0x10886292((char *)s_sThousand_1160_1088,&stack0xfffe,*(undefined2 *)(iVar3 + 0x2a4),
                  *(undefined2 *)(iVar3 + 0x2a6),0xff,acStack_102);
  puVar2 = (undefined4 *)*(undefined4 *)(iStack_106 + 0xec);
  puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
  (*(code *)*puVar1)((char *)s_sThousand_1160_1088,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10)
                     ,acStack_102);
  acStack_102[0] = '\0';
  func_0x10886292((char *)s_sThousand_1160_1088,&stack0xfffe,*(undefined2 *)(iVar3 + 0x42c),
                  *(undefined2 *)(iVar3 + 0x42e),0xff,acStack_102);
  func_0x10886292((char *)s_sThousand_1160_1088,&stack0xfffe,*(undefined2 *)(iVar3 + 0x2a8),
                  *(undefined2 *)(iVar3 + 0x2aa),0xff,acStack_102);
  if (acStack_102[0] != '\0') {
    puVar2 = (undefined4 *)*(undefined4 *)(iStack_106 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)((char *)s_sThousand_1160_1088,(undefined4 *)puVar2,
                       (int)((ulong)puVar2 >> 0x10),acStack_102);
  }
  acStack_102[0] = '\0';
  func_0x10886292((char *)s_sThousand_1160_1088,&stack0xfffe,*(undefined2 *)(iVar3 + 0x430),
                  *(undefined2 *)(iVar3 + 0x432),0xff,acStack_102);
  func_0x10886292((char *)s_sThousand_1160_1088,&stack0xfffe,*(undefined2 *)(iVar3 + 0x2ac),
                  *(undefined2 *)(iVar3 + 0x2ae),0xff,acStack_102);
  if (acStack_102[0] != '\0') {
    puVar2 = (undefined4 *)*(undefined4 *)(iStack_106 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)((char *)s_sThousand_1160_1088,(undefined4 *)puVar2,
                       (int)((ulong)puVar2 >> 0x10),acStack_102);
  }
  FUN_1120_4a3f(iStack_106,uStack_104);
  FUN_1120_49ff(iStack_106,uStack_104);
  FUN_1120_49e3(iStack_106,uStack_104);
  return;
}



/* ---- TFormSADD_Decisions_TestBtnClick @ 1088:7b9b  (122 octets) ---- */

void __stdcall16far
TFormSADD_Decisions_TestBtnClick(undefined4 param_1,undefined2 param_2,undefined2 param_3)

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
  uVar4 = *(undefined4 *)((int)param_1 + 0x28c);
  *(undefined *)((int)uVar4 + 0x25) = 0;
  puVar2 = (undefined4 *)*(undefined4 *)((int)param_1 + 0x28c);
  puVar1 = (undefined2 *)((int)*puVar2 + 0x38);
  (*(code *)*puVar1)(0x1138,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),
                     (int)((ulong)uVar5 >> 0x10),(int)uVar5);
  return;
}



/* ---- TFormSADD_Decisions_Print1Click @ 1088:7c15  (67 octets) ---- */

void __stdcall16far TFormSADD_Decisions_Print1Click(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  undefined2 uVar3;
  
  FUN_1158_0444();
  cVar1 = FUN_1010_34c6();
  if (cVar1 != '\0') {
    uVar3 = (undefined2)((ulong)param_1 >> 0x10);
    iVar2 = (int)param_1;
    FUN_1138_1c77((int)*(undefined4 *)(iVar2 + 0x1ac),
                  (int)((ulong)*(undefined4 *)(iVar2 + 0x1ac) >> 0x10),0);
    FUN_1140_5a2d(iVar2,uVar3);
    FUN_1138_1c77((int)*(undefined4 *)(iVar2 + 0x1ac),
                  (int)((ulong)*(undefined4 *)(iVar2 + 0x1ac) >> 0x10),1);
  }
  return;
}



/* ---- TFormSADD_Decisions_Copy1Click @ 1088:7c58  (338 octets) ---- */

void __stdcall16far TFormSADD_Decisions_Copy1Click(undefined4 param_1)

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
  
  local_6 = 0x7c63;
  FUN_1158_0444();
  uVar4 = (undefined2)((ulong)param_1 >> 0x10);
  iVar2 = (int)param_1;
  FUN_1138_1c77((int)*(undefined4 *)(iVar2 + 0x1ac),
                (int)((ulong)*(undefined4 *)(iVar2 + 0x1ac) >> 0x10),0);
  FUN_1138_17bf((int)*(undefined4 *)(iVar2 + 0x298),
                (int)((ulong)*(undefined4 *)(iVar2 + 0x298) >> 0x10),*(undefined2 *)(iVar2 + 0x22));
  FUN_1138_17e1((int)*(undefined4 *)(iVar2 + 0x298),
                (int)((ulong)*(undefined4 *)(iVar2 + 0x298) >> 0x10),*(undefined2 *)(iVar2 + 0x24));
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
  local_6 = *(undefined2 *)((int)*(undefined4 *)(iVar2 + 0x298) + 0x22);
  FUN_1138_1c77((int)*(undefined4 *)(iVar2 + 0x298),
                (int)((ulong)*(undefined4 *)(iVar2 + 0x298) >> 0x10),0);
  puVar10 = &local_a;
  uVar7 = FUN_1140_33d5(iVar2,uVar4);
  piVar9 = &local_12;
  uVar6 = (undefined2)((ulong)*(undefined4 *)(iVar2 + 0x298) >> 0x10);
  uVar5 = (undefined2)*(undefined4 *)(iVar2 + 0x298);
  uVar8 = FUN_1118_1f94(uVar5,uVar6,piVar9);
  FUN_1128_1b10(uVar8,uVar5,uVar6,piVar9,unaff_SS,uVar7);
  uVar5 = (undefined2)((ulong)*(undefined4 *)(iVar2 + 0x298) >> 0x10);
  iVar3 = (int)*(undefined4 *)(iVar2 + 0x298);
  puVar1 = (undefined2 *)((int)*DAT_1160_2ad0 + 8);
  (*(code *)*puVar1)(0x1128,(undefined4 *)DAT_1160_2ad0,(int)((ulong)DAT_1160_2ad0 >> 0x10),
                     *(undefined2 *)(iVar3 + 0x8e),*(undefined2 *)(iVar3 + 0x90),puVar10);
  FUN_1138_1c77((int)*(undefined4 *)(iVar2 + 0x1ac),
                (int)((ulong)*(undefined4 *)(iVar2 + 0x1ac) >> 0x10),1);
  return;
}



/* ---- TFormSADD_Decisions_RadioButton1Click @ 1088:7daa  (88 octets) ---- */

void __stdcall16far TFormSADD_Decisions_RadioButton1Click(undefined4 param_1)

{
  undefined extraout_AH;
  undefined extraout_AH_00;
  int iVar1;
  undefined2 uVar2;
  
  FUN_1158_0444();
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  FUN_1138_1c77((int)*(undefined4 *)(iVar1 + 0x2b4),
                (int)((ulong)*(undefined4 *)(iVar1 + 0x2b4) >> 0x10),
                CONCAT11(extraout_AH,*(undefined *)((int)*(undefined4 *)(iVar1 + 0x314) + 0xdb)));
  FUN_1138_1c77((int)*(undefined4 *)(iVar1 + 0x2c8),
                (int)((ulong)*(undefined4 *)(iVar1 + 0x2c8) >> 0x10),
                CONCAT11(extraout_AH_00,*(undefined *)((int)*(undefined4 *)(iVar1 + 0x318) + 0xdb)))
  ;
  *(undefined *)(iVar1 + 0x491) = 1;
  FUN_1088_3ef5(iVar1,uVar2);
  return;
}



/* ---- TFormSADD_Decisions_RadioButton2Click @ 1088:7e02  (88 octets) ---- */

void __stdcall16far TFormSADD_Decisions_RadioButton2Click(undefined4 param_1)

{
  undefined extraout_AH;
  undefined extraout_AH_00;
  int iVar1;
  undefined2 uVar2;
  
  FUN_1158_0444();
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  FUN_1138_1c77((int)*(undefined4 *)(iVar1 + 0x2b4),
                (int)((ulong)*(undefined4 *)(iVar1 + 0x2b4) >> 0x10),
                CONCAT11(extraout_AH,*(undefined *)((int)*(undefined4 *)(iVar1 + 0x314) + 0xdb)));
  FUN_1138_1c77((int)*(undefined4 *)(iVar1 + 0x2c8),
                (int)((ulong)*(undefined4 *)(iVar1 + 0x2c8) >> 0x10),
                CONCAT11(extraout_AH_00,*(undefined *)((int)*(undefined4 *)(iVar1 + 0x318) + 0xdb)))
  ;
  *(undefined *)(iVar1 + 0x491) = 1;
  FUN_1088_3ef5(iVar1,uVar2);
  return;
}



/* ---- TFormSADD_Decisions_RadioButton3Click @ 1088:7e5a  (88 octets) ---- */

void __stdcall16far TFormSADD_Decisions_RadioButton3Click(undefined4 param_1)

{
  undefined extraout_AH;
  undefined extraout_AH_00;
  int iVar1;
  undefined2 uVar2;
  
  FUN_1158_0444();
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  FUN_1138_1c77((int)*(undefined4 *)(iVar1 + 0x2b4),
                (int)((ulong)*(undefined4 *)(iVar1 + 0x2b4) >> 0x10),
                CONCAT11(extraout_AH,*(undefined *)((int)*(undefined4 *)(iVar1 + 0x314) + 0xdb)));
  FUN_1138_1c77((int)*(undefined4 *)(iVar1 + 0x2c8),
                (int)((ulong)*(undefined4 *)(iVar1 + 0x2c8) >> 0x10),
                CONCAT11(extraout_AH_00,*(undefined *)((int)*(undefined4 *)(iVar1 + 0x318) + 0xdb)))
  ;
  *(undefined *)(iVar1 + 0x491) = 1;
  FUN_1088_3ef5(iVar1,uVar2);
  return;
}



/* ---- TFormSADD_Decisions_SpinEdit1Change @ 1088:7eb2  (30 octets) ---- */

void __stdcall16far TFormSADD_Decisions_SpinEdit1Change(undefined4 param_1)

{
  undefined2 uVar1;
  
  FUN_1158_0444();
  uVar1 = (undefined2)((ulong)param_1 >> 0x10);
  *(undefined *)((int)param_1 + 0x491) = 1;
  FUN_1088_3ef5((int)param_1,uVar1);
  return;
}




/* Simstrat (FR).EXE - segment Code16 - 56 fonctions
   Decompile par Ghidra 11.2.1 (x86 16 bits, chargeur NE). */

/* ---- FUN_1078_0b7b @ 1078:0b7b  (79 octets) ---- */

void __stdcall16far FUN_1078_0b7b(undefined4 param_1)

{
  int iVar1;
  undefined2 uVar2;
  
  FUN_1158_0444();
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  if (*(char *)(iVar1 + 0x409) == '\0') {
    FUN_1078_0bca(iVar1,uVar2);
  }
  else {
    DAT_1160_0266 = 1;
    FUN_1010_38c2(1);
    FUN_1000_28c7((int)DAT_1160_18f6,(int)((ulong)DAT_1160_18f6 >> 0x10));
    *(undefined2 *)(iVar1 + 0x104) = 3;
    FUN_1140_5556(iVar1,uVar2);
    FUN_1150_28c3(0x1140);
  }
  return;
}



/* ---- FUN_1078_0bca @ 1078:0bca  (26 octets) ---- */

void __stdcall16far FUN_1078_0bca(void)

{
  FUN_1158_0444();
  FUN_1010_38c2(0);
  FUN_1150_28c3((char *)s_windows_1160_100f + 1);
  return;
}



/* ---- FUN_1078_0ca1 @ 1078:0ca1  (269 octets) ---- */

void __cdecl16far FUN_1078_0ca1(int param_1,undefined2 param_2,int param_3)

{
  int *piVar1;
  undefined4 uVar2;
  undefined2 uVar3;
  undefined extraout_AH;
  int iVar4;
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
  
  _local_6 = CONCAT22(unaff_CS,0xcac);
  FUN_1158_0444();
  uStack_c = DAT_1160_2c2a._2_2_;
  uStack_e = (undefined2)DAT_1160_2c2a;
  uStack_10 = CONCAT11(extraout_AH,1);
  pcStack_12 = (char *)s_Currency_1160_1072 + 6;
  uStack_14 = 0x22;
  uStack_16 = 0x1158;
  uStack_18 = 0xcc7;
  _local_6 = FUN_1140_2553();
  uStack_16 = 0x1140;
  uStack_18 = 0xc9b;
  uStack_1c = DAT_1160_1858;
  DAT_1160_1858 = &uStack_1c;
  puStack_1a = &stack0xfffe;
  local_a = _local_6;
  FUN_1078_11af(_local_6,0);
  FUN_1078_31d4(local_a);
  FUN_1138_1c77((int)*(undefined4 *)((int)local_a + 0x3f4),
                (int)((ulong)*(undefined4 *)((int)local_a + 0x3f4) >> 0x10),1);
  *(undefined2 *)((int)local_a + 0x40c) = param_2;
  FUN_1078_1352(local_a,param_3);
  if (param_3 == 0 && param_1 == 0) {
    FUN_1078_13be(local_a,1);
    uVar2 = local_a;
  }
  else {
    FUN_1078_13be(local_a,param_1);
    uVar2 = local_a;
  }
  local_a._2_2_ = (undefined2)((ulong)uVar2 >> 0x10);
  local_a._0_2_ = (int)uVar2;
  if (1 < *(int *)((int)local_a + 0x40c) && *(char *)((int)local_a + 0x410) == '\0') {
    piVar1 = (int *)((int)local_a + 0x40c);
    iVar4 = *piVar1 + -1;
    local_a = uVar2;
    if (SBORROW2(*piVar1,1)) {
      iVar4 = FUN_1158_043e((char *)s_Currency_1160_1072 + 6);
    }
    FUN_1078_139e(local_a,iVar4);
    uVar2 = local_a;
  }
  local_a._0_2_ = (int)uVar2;
  uVar3 = (int)local_a;
  local_a = uVar2;
  FUN_1140_5d45(uVar2);
  DAT_1160_1858 = (undefined2 *)uVar3;
  puStack_1a = (undefined *)0x1140;
  uStack_1c = 0xdae;
  FUN_1140_5f1d((int)_local_6,(int)((ulong)_local_6 >> 0x10));
  return;
}



/* ---- TFormSEDD_Decisions_FormCreate @ 1078:0dc2  (1 octets) ---- */

/* WARNING: Removing unreachable block (ram,0x10780f60) */

void TFormSEDD_Decisions_FormCreate(undefined2 param_1,undefined4 param_2)

{
  char cVar1;
  undefined extraout_AH;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined2 uVar8;
  undefined2 uVar9;
  undefined2 unaff_SS;
  bool bVar10;
  bool bVar11;
  undefined4 uVar12;
  long lVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined auStack_204 [256];
  undefined auStack_104 [250];
  undefined4 uStack_a;
  int iStack_6;
  
  iStack_6 = 0xdcd;
  FUN_1158_0444();
  uVar12 = *(undefined4 *)((int)DAT_1160_18f6 + 0x1b4);
  uVar8 = (undefined2)((ulong)param_2 >> 0x10);
  iVar6 = (int)param_2;
  FUN_1138_1c77((int)*(undefined4 *)(iVar6 + 0x1d4),
                (int)((ulong)*(undefined4 *)(iVar6 + 0x1d4) >> 0x10),
                CONCAT11(extraout_AH,*(undefined *)((int)uVar12 + 0x31)));
  puVar15 = auStack_104;
  uVar9 = unaff_SS;
  FUN_1158_17cd(0xdb2,0x1138);
  FUN_1158_184c(0x1dfa,0x1160);
  FUN_1158_184c(0xdbe,0x1158);
  puVar14 = auStack_204;
  FUN_1138_1d53(iVar6,uVar8);
  FUN_1158_184c(puVar14,unaff_SS);
  FUN_1138_1d8c(iVar6,uVar8,puVar15,uVar9);
  FUN_10a8_246f((int)*(undefined4 *)(iVar6 + 0x194),
                (int)((ulong)*(undefined4 *)(iVar6 + 0x194) >> 0x10),0);
  *(undefined *)(iVar6 + 0x404) = 0;
  iStack_6 = (int)((ulong)*(undefined4 *)(iVar6 + 0x1cc) >> 0x10);
  uStack_a._2_2_ = (int)*(undefined4 *)(iVar6 + 0x1cc);
  *(undefined2 *)(uStack_a._2_2_ + 0xec) = 1;
  *(undefined2 *)(uStack_a._2_2_ + 0xee) = 0;
  iVar3 = DAT_1160_014c >> 0xf;
  *(int *)(uStack_a._2_2_ + 0xf0) = DAT_1160_014c;
  *(int *)(uStack_a._2_2_ + 0xf2) = iVar3;
  if ((*(int *)(uStack_a._2_2_ + 0xf2) < *(int *)(uStack_a._2_2_ + 0xee)) ||
     ((*(int *)(uStack_a._2_2_ + 0xf2) <= *(int *)(uStack_a._2_2_ + 0xee) &&
      (*(uint *)(uStack_a._2_2_ + 0xf0) <= *(uint *)(uStack_a._2_2_ + 0xec))))) {
    FUN_1138_1cb8(uStack_a._2_2_,iStack_6,0);
  }
  uVar9 = (undefined2)((ulong)*(undefined4 *)(iVar6 + 0x1c0) >> 0x10);
  iVar7 = (int)*(undefined4 *)(iVar6 + 0x1c0);
  iVar3 = DAT_1160_014e >> 0xf;
  *(int *)(iVar7 + 0xf0) = DAT_1160_014e;
  *(int *)(iVar7 + 0xf2) = iVar3;
  FUN_1138_1c77((int)*(undefined4 *)(iVar6 + 0x3f4),
                (int)((ulong)*(undefined4 *)(iVar6 + 0x3f4) >> 0x10),0);
  iVar3 = FUN_1148_527d(iVar6,uVar8);
  iVar7 = iVar3 + -1;
  if (SBORROW2(iVar3,1)) {
    iVar7 = FUN_1158_043e(0x1148);
  }
  iStack_6 = iVar7;
  if (-1 < iVar7) {
    iVar3 = 0;
    while( true ) {
      uVar12 = FUN_1148_5246(iVar6,uVar8,iVar3);
      cVar1 = FUN_1158_2255(0x399,0x1138,uVar12);
      if (cVar1 != '\0') {
        uVar12 = FUN_1148_5246(iVar6,uVar8,iVar3);
        uVar12 = FUN_1158_2273(0x399,0x1138,uVar12);
        uVar9 = (undefined2)((ulong)uVar12 >> 0x10);
        iVar7 = (int)uVar12;
        uStack_a = uVar12;
        if (*(int *)(iVar7 + 0xc) != 0 || *(int *)(iVar7 + 0xe) != 0) {
          iVar4 = DAT_1160_1e06 >> 0xf;
          iVar2 = *(int *)(iVar7 + 0xc);
          uVar5 = *(uint *)(iVar7 + 0xe);
          bVar11 = false;
          if ((int)uVar5 < 0) {
            bVar10 = iVar2 != 0;
            iVar2 = -iVar2;
            iVar7 = ~uVar5 + 1;
            bVar11 = SBORROW2(~uVar5,-1) != SBORROW2(iVar7,(uint)bVar10);
            uVar5 = iVar7 - (uint)bVar10;
          }
          lVar13 = CONCAT22(uVar5,iVar2);
          iVar7 = DAT_1160_1e06;
          if (bVar11) {
            lVar13 = FUN_1158_043e(0x1158);
          }
          FUN_1138_1c77(uStack_a,lVar13 <= CONCAT22(iVar4,iVar7));
        }
      }
      if (iVar3 == iStack_6) break;
      iVar3 = iVar3 + 1;
    }
  }
  FUN_10e0_3017((int)*(undefined4 *)(iVar6 + 0x17c),
                (int)((ulong)*(undefined4 *)(iVar6 + 0x17c) >> 0x10),0x1e4e,0x1160);
  FUN_10e0_3017((int)*(undefined4 *)(iVar6 + 0x1dc),
                (int)((ulong)*(undefined4 *)(iVar6 + 0x1dc) >> 0x10),0x1e5c,0x1160);
  FUN_10e0_3017((int)*(undefined4 *)(iVar6 + 0x1e0),
                (int)((ulong)*(undefined4 *)(iVar6 + 0x1e0) >> 0x10),0x1e5c,0x1160);
  FUN_10e0_3017((int)*(undefined4 *)(iVar6 + 0x188),
                (int)((ulong)*(undefined4 *)(iVar6 + 0x188) >> 0x10),0x1e6a,0x1160);
  FUN_10e0_3017((int)*(undefined4 *)(iVar6 + 0x1e4),
                (int)((ulong)*(undefined4 *)(iVar6 + 0x1e4) >> 0x10),0x1e4e,0x1160);
  FUN_10e0_3017((int)*(undefined4 *)(iVar6 + 0x1ec),
                (int)((ulong)*(undefined4 *)(iVar6 + 0x1ec) >> 0x10),0x1e5c,0x1160);
  FUN_10e0_3017((int)*(undefined4 *)(iVar6 + 0x1e8),
                (int)((ulong)*(undefined4 *)(iVar6 + 0x1e8) >> 0x10),0x1e6a,0x1160);
  FUN_10e0_3017((int)*(undefined4 *)(iVar6 + 0x1f0),
                (int)((ulong)*(undefined4 *)(iVar6 + 0x1f0) >> 0x10),0x1e78,0x1160);
  FUN_10e0_3017((int)*(undefined4 *)(iVar6 + 0x1f8),
                (int)((ulong)*(undefined4 *)(iVar6 + 0x1f8) >> 0x10),0x1e86,0x1160);
  FUN_10e0_3017((int)*(undefined4 *)(iVar6 + 0x218),
                (int)((ulong)*(undefined4 *)(iVar6 + 0x218) >> 0x10),0x1e16,0x1160);
  FUN_10e0_3017((int)*(undefined4 *)(iVar6 + 0x200),
                (int)((ulong)*(undefined4 *)(iVar6 + 0x200) >> 0x10),0x1e32,0x1160);
  FUN_10e0_3017((int)*(undefined4 *)(iVar6 + 500),(int)((ulong)*(undefined4 *)(iVar6 + 500) >> 0x10)
                ,0x1e40,0x1160);
  DAT_1160_0266 = 0;
  return;
}



/* ---- TFormSEDD_Decisions_FormShow @ 1078:1079  (27 octets) ---- */

void __stdcall16far TFormSEDD_Decisions_FormShow(void)

{
  FUN_1158_0444();
  FUN_1140_63a9((int)DAT_1160_2c2e,(int)((ulong)DAT_1160_2c2e >> 0x10),0xfffe);
  return;
}



/* ---- TFormSEDD_Decisions_FormClose @ 1078:1094  (135 octets) ---- */

void __stdcall16far TFormSEDD_Decisions_FormClose(undefined4 param_1,undefined *param_2)

{
  char cVar1;
  int iVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  
  FUN_1158_0444();
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  iVar2 = (int)param_1;
  if (*(char *)(iVar2 + 0x404) != '\0') {
    FUN_1140_5556((int)*(undefined4 *)(iVar2 + 0x405),
                  (int)((ulong)*(undefined4 *)(iVar2 + 0x405) >> 0x10));
    FUN_1140_5f1d((int)*(undefined4 *)(iVar2 + 0x405),
                  (int)((ulong)*(undefined4 *)(iVar2 + 0x405) >> 0x10));
  }
  cVar1 = FUN_1158_2255(0x22,(char *)s_Currency_1160_1072 + 6,*(undefined2 *)(iVar2 + 4),
                        *(undefined2 *)(iVar2 + 6));
  if (cVar1 != '\0') {
    uVar4 = FUN_1158_2273(0x22,(char *)s_Currency_1160_1072 + 6,*(undefined2 *)(iVar2 + 4),
                          *(undefined2 *)(iVar2 + 6));
    *(undefined *)((int)uVar4 + 0x404) = 0;
  }
  FUN_1078_3106(iVar2,uVar3);
  *param_2 = 1;
  return;
}



/* ---- TFormSEDD_Decisions_FormCloseQuery @ 1078:111b  (144 octets) ---- */

void __stdcall16far TFormSEDD_Decisions_FormCloseQuery(undefined4 param_1,undefined *param_2)

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
  if ((DAT_1160_0266 == '\0' & *(byte *)(iVar4 + 0x409)) != 0) {
    cVar1 = FUN_1078_3726(iVar4,uVar5);
    if (*(char *)(iVar4 + 0x410) == '\0' || cVar1 != '\0') {
      iVar3 = FUN_1010_3df6(*(undefined2 *)(iVar4 + 0x40e));
      if (iVar3 == 6) {
        uVar2 = FUN_1078_3a25(iVar4,uVar5);
        *param_2 = uVar2;
      }
      else if ((iVar3 != 7) && (iVar3 == 2)) {
        *param_2 = 0;
      }
    }
    else {
      uVar2 = FUN_1078_620b(iVar4,uVar5);
      *param_2 = uVar2;
    }
  }
  return;
}



/* ---- FUN_1078_11af @ 1078:11af  (381 octets) ---- */

void __stdcall16far FUN_1078_11af(undefined4 param_1,undefined param_2)

{
  byte bVar1;
  undefined extraout_AH;
  undefined extraout_AH_00;
  byte extraout_AH_01;
  int iVar2;
  undefined extraout_AH_02;
  byte extraout_AH_03;
  byte extraout_AH_04;
  int iVar3;
  undefined2 uVar4;
  undefined2 unaff_SS;
  undefined *puVar5;
  undefined2 uVar6;
  undefined local_202 [256];
  undefined local_102 [252];
  undefined2 uStack_6;
  
  uStack_6 = 0x11ba;
  FUN_1158_0444();
  uVar4 = (undefined2)((ulong)param_1 >> 0x10);
  iVar3 = (int)param_1;
  *(undefined *)(iVar3 + 0x409) = param_2;
  if (*(char *)(iVar3 + 0x409) == '\0') {
    puVar5 = local_202;
    uVar6 = unaff_SS;
    FUN_1138_1d53((int)*(undefined4 *)(iVar3 + 0x3fc),
                  (int)((ulong)*(undefined4 *)(iVar3 + 0x3fc) >> 0x10));
    FUN_1158_17e7(0xff,local_102,unaff_SS,puVar5,uVar6);
    puVar5 = local_202;
    uVar6 = unaff_SS;
    FUN_1138_1d53((int)*(undefined4 *)(iVar3 + 0x1b8),
                  (int)((ulong)*(undefined4 *)(iVar3 + 0x1b8) >> 0x10));
    FUN_1138_1d8c((int)*(undefined4 *)(iVar3 + 0x3fc),
                  (int)((ulong)*(undefined4 *)(iVar3 + 0x3fc) >> 0x10),puVar5,uVar6);
    FUN_1138_1d8c((int)*(undefined4 *)(iVar3 + 0x1b8),
                  (int)((ulong)*(undefined4 *)(iVar3 + 0x1b8) >> 0x10),local_102,unaff_SS);
    puVar5 = local_202;
    uVar6 = unaff_SS;
    FUN_1138_1d53(iVar3,uVar4);
    FUN_1158_184c((char *)s_Runtime_error_000_at_0000_0000__1160_118f + 0x1c,0x1138);
    FUN_1158_184c(local_102,unaff_SS);
    FUN_1138_1d8c(iVar3,uVar4,puVar5,uVar6);
  }
  bVar1 = FUN_1158_2255(0x22,(char *)s_Currency_1160_1072 + 6,*(undefined2 *)(iVar3 + 4),
                        *(undefined2 *)(iVar3 + 6));
  FUN_1138_1c77((int)*(undefined4 *)(iVar3 + 0x3fc),
                (int)((ulong)*(undefined4 *)(iVar3 + 0x3fc) >> 0x10),
                bVar1 | *(byte *)(iVar3 + 0x409));
  FUN_1138_1c77((int)*(undefined4 *)(iVar3 + 0x3c8),
                (int)((ulong)*(undefined4 *)(iVar3 + 0x3c8) >> 0x10),
                CONCAT11(extraout_AH,*(undefined *)(iVar3 + 0x409)));
  FUN_1138_1c77((int)*(undefined4 *)(iVar3 + 0x31c),
                (int)((ulong)*(undefined4 *)(iVar3 + 0x31c) >> 0x10),0);
  FUN_1138_1c77((int)*(undefined4 *)(iVar3 + 0x1c4),
                (int)((ulong)*(undefined4 *)(iVar3 + 0x1c4) >> 0x10),
                CONCAT11(extraout_AH_00,*(undefined *)(iVar3 + 0x409)));
  iVar2 = (uint)extraout_AH_01 * 0x100;
  if (*(char *)(iVar3 + 0x409) == '\0') {
    iVar2 = iVar2 + 1;
  }
  FUN_1138_1c77((int)*(undefined4 *)(iVar3 + 0x1c0),
                (int)((ulong)*(undefined4 *)(iVar3 + 0x1c0) >> 0x10),iVar2);
  FUN_1138_1c77((int)*(undefined4 *)(iVar3 + 0x1d0),
                (int)((ulong)*(undefined4 *)(iVar3 + 0x1d0) >> 0x10),
                CONCAT11(extraout_AH_02,*(undefined *)(iVar3 + 0x409)));
  iVar2 = (uint)extraout_AH_03 * 0x100;
  if (*(char *)(iVar3 + 0x409) == '\0') {
    iVar2 = iVar2 + 1;
  }
  FUN_1138_1c77((int)*(undefined4 *)(iVar3 + 0x1cc),
                (int)((ulong)*(undefined4 *)(iVar3 + 0x1cc) >> 0x10),iVar2);
  iVar2 = (uint)extraout_AH_04 * 0x100;
  if (*(char *)(iVar3 + 0x409) == '\0') {
    iVar2 = iVar2 + 1;
  }
  FUN_1078_2e8e(iVar3,uVar4,iVar2);
  return;
}



/* ---- FUN_1078_132c @ 1078:132c  (38 octets) ---- */

int __stdcall16far FUN_1078_132c(undefined4 param_1)

{
  byte extraout_AH;
  int iVar1;
  
  FUN_1158_0444();
  iVar1 = (uint)extraout_AH * 0x100;
  if (*(char *)((int)param_1 + 0x409) == '\0') {
    iVar1 = iVar1 + 1;
  }
  return iVar1;
}



/* ---- FUN_1078_1352 @ 1078:1352  (76 octets) ---- */

void __stdcall16far FUN_1078_1352(undefined4 param_1,uint param_2)

{
  byte extraout_AH;
  int iVar1;
  int iVar2;
  undefined2 uVar3;
  
  FUN_1158_0444();
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  iVar2 = (int)param_1;
  *(uint *)(iVar2 + 0x40a) = param_2;
  param_2 = param_2 & 0xff00;
  if (*(int *)(iVar2 + 0x40a) == 0) {
    param_2 = param_2 + 1;
  }
  FUN_1138_1c77((int)*(undefined4 *)(iVar2 + 0x1c0),
                (int)((ulong)*(undefined4 *)(iVar2 + 0x1c0) >> 0x10),param_2);
  iVar1 = (uint)extraout_AH * 0x100;
  if (*(int *)(iVar2 + 0x40a) != 0) {
    iVar1 = iVar1 + 1;
  }
  FUN_1138_1c77((int)*(undefined4 *)(iVar2 + 0x1c4),
                (int)((ulong)*(undefined4 *)(iVar2 + 0x1c4) >> 0x10),iVar1);
  return;
}



/* ---- FUN_1078_139e @ 1078:139e  (32 octets) ---- */

void __stdcall16far FUN_1078_139e(undefined4 param_1,undefined2 param_2)

{
  undefined2 uVar1;
  
  FUN_1158_0444();
  uVar1 = (undefined2)((ulong)param_1 >> 0x10);
  *(undefined2 *)((int)param_1 + 0x40c) = param_2;
  FUN_1078_13de((int)param_1,uVar1);
  return;
}



/* ---- FUN_1078_13be @ 1078:13be  (32 octets) ---- */

void __stdcall16far FUN_1078_13be(undefined4 param_1,undefined2 param_2)

{
  undefined2 uVar1;
  
  FUN_1158_0444();
  uVar1 = (undefined2)((ulong)param_1 >> 0x10);
  *(undefined2 *)((int)param_1 + 0x40e) = param_2;
  FUN_1078_13de((int)param_1,uVar1);
  return;
}



/* ---- FUN_1078_13de @ 1078:13de  (174 octets) ---- */

void __stdcall16far FUN_1078_13de(undefined4 param_1)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 unaff_SS;
  undefined *puVar3;
  undefined2 uVar4;
  undefined local_102 [252];
  undefined2 uStack_6;
  
  uStack_6 = 0x13e9;
  FUN_1158_0444();
  FUN_1140_7303((int)DAT_1160_2c2a,(int)((ulong)DAT_1160_2c2a >> 0x10));
  puVar3 = local_102;
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  uVar4 = unaff_SS;
  FUN_1150_08a9(*(int *)(iVar1 + 0x40c),*(int *)(iVar1 + 0x40c) >> 0xf);
  FUN_1138_1d8c((int)*(undefined4 *)(iVar1 + 0x1d0),
                (int)((ulong)*(undefined4 *)(iVar1 + 0x1d0) >> 0x10),puVar3,uVar4);
  FUN_10f0_178b((int)*(undefined4 *)(iVar1 + 0x1cc),
                (int)((ulong)*(undefined4 *)(iVar1 + 0x1cc) >> 0x10),*(int *)(iVar1 + 0x40c),
                *(int *)(iVar1 + 0x40c) >> 0xf);
  puVar3 = local_102;
  FUN_1150_08a9(*(int *)(iVar1 + 0x40e),*(int *)(iVar1 + 0x40e) >> 0xf);
  FUN_1138_1d8c((int)*(undefined4 *)(iVar1 + 0x1c4),
                (int)((ulong)*(undefined4 *)(iVar1 + 0x1c4) >> 0x10),puVar3,unaff_SS);
  FUN_10f0_178b((int)*(undefined4 *)(iVar1 + 0x1c0),
                (int)((ulong)*(undefined4 *)(iVar1 + 0x1c0) >> 0x10),*(int *)(iVar1 + 0x40e),
                *(int *)(iVar1 + 0x40e) >> 0xf);
  FUN_1078_33f1(iVar1,uVar2);
  FUN_1078_2baf(iVar1,uVar2,0xfffa,0xffff);
  return;
}



/* ---- TFormSEDD_Decisions_SpinEditP1Change @ 1078:1494  (1 octets) ---- */

void TFormSEDD_Decisions_SpinEditP1Change
               (undefined2 param_1,undefined4 param_2,undefined2 param_3,undefined2 param_4)

{
  char cVar1;
  undefined4 uVar2;
  undefined2 uVar3;
  
  uVar3 = 0x149f;
  FUN_1158_0444();
  cVar1 = FUN_1158_2255(0x3eb,0x10f0,param_3,param_4);
  if (cVar1 != '\0') {
    uVar2 = FUN_1158_2273(0x3eb,0x10f0,param_3,param_4);
    FUN_10f0_1733(uVar2);
    uVar3 = FUN_1158_0416(uVar3);
    FUN_1078_139e((int)param_2,(int)((ulong)param_2 >> 0x10),uVar3);
  }
  return;
}



/* ---- TFormSEDD_Decisions_SpinEditE1Change @ 1078:14f6  (1 octets) ---- */

void TFormSEDD_Decisions_SpinEditE1Change
               (undefined2 param_1,undefined4 param_2,undefined2 param_3,undefined2 param_4)

{
  char cVar1;
  int iVar2;
  undefined2 uVar3;
  int iVar4;
  undefined2 uVar5;
  undefined4 uVar6;
  long lVar7;
  
  FUN_1158_0444();
  cVar1 = FUN_1158_2255(0x3eb,0x10f0,param_3,param_4);
  if (cVar1 != '\0') {
    uVar6 = FUN_1158_2273(0x3eb,0x10f0,param_3,param_4);
    lVar7 = FUN_10f0_1733(uVar6);
    uVar5 = (undefined2)((ulong)param_2 >> 0x10);
    iVar4 = (int)param_2;
    if ((lVar7 != *(int *)(iVar4 + 0x40e) & *(byte *)(iVar4 + 0x409)) != 0) {
      cVar1 = FUN_1078_3726(iVar4,uVar5);
      if (*(char *)(iVar4 + 0x410) == '\0' || cVar1 != '\0') {
        iVar2 = func_0x10103e23((char *)s_Currency_1160_1072 + 6,*(undefined2 *)(iVar4 + 0x40e));
        if (iVar2 == 6) {
          cVar1 = FUN_1078_3a25(iVar4,uVar5);
          if (cVar1 == '\0') {
            FUN_10f0_178b(uVar6,*(int *)(iVar4 + 0x40e),*(int *)(iVar4 + 0x40e) >> 0xf);
          }
        }
        else if (iVar2 == 7) {
          FUN_1078_37de(iVar4,uVar5);
        }
        else if (iVar2 == 2) {
          FUN_10f0_178b(uVar6,*(int *)(iVar4 + 0x40e),*(int *)(iVar4 + 0x40e) >> 0xf);
        }
      }
      else {
        FUN_1078_620b(iVar4,uVar5);
      }
    }
    lVar7 = FUN_10f0_1733(uVar6);
    if (lVar7 != *(int *)(iVar4 + 0x40e)) {
      FUN_10f0_1733(uVar6);
      uVar3 = FUN_1158_0416();
      FUN_1078_13be(iVar4,uVar5,uVar3);
    }
  }
  return;
}



/* ---- TFormSEDD_Decisions_OKBtnClick @ 1078:1636  (52 octets) ---- */

void __stdcall16far TFormSEDD_Decisions_OKBtnClick(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  undefined2 uVar3;
  
  FUN_1158_0444();
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  iVar2 = (int)param_1;
  cVar1 = FUN_1158_2255(0x22,(char *)s_Currency_1160_1072 + 6,*(undefined2 *)(iVar2 + 4),
                        *(undefined2 *)(iVar2 + 6));
  if (cVar1 != '\0') {
    FUN_1140_5556(iVar2,uVar3);
  }
  return;
}



/* ---- TFormSEDD_Decisions_BasculeBtnClick @ 1078:166a  (517 octets) ---- */

void __stdcall16far TFormSEDD_Decisions_BasculeBtnClick(undefined4 param_1)

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
  undefined4 uVar10;
  
  FUN_1158_0444();
  uVar6 = (undefined2)((ulong)param_1 >> 0x10);
  iVar4 = (int)param_1;
  if (*(char *)(iVar4 + 0x409) == '\0') {
    cVar2 = FUN_1158_2255(0x22,(char *)s_Currency_1160_1072 + 6,*(undefined2 *)(iVar4 + 4),
                          *(undefined2 *)(iVar4 + 6));
    if (cVar2 != '\0') {
      uVar10 = FUN_1158_2273(0x22,(char *)s_Currency_1160_1072 + 6,*(undefined2 *)(iVar4 + 4),
                             *(undefined2 *)(iVar4 + 6));
      FUN_1140_5ccc(uVar10);
    }
  }
  else {
    if (*(char *)(iVar4 + 0x404) == '\0') {
      uVar10 = FUN_1140_2553(0x22,(char *)s_Currency_1160_1072 + 6,CONCAT11(extraout_AH,1),iVar4,
                             uVar6);
      *(undefined2 *)(iVar4 + 0x405) = (int)uVar10;
      *(undefined2 *)(iVar4 + 0x407) = (int)((ulong)uVar10 >> 0x10);
      uVar7 = (undefined2)((ulong)*(undefined4 *)(iVar4 + 0x405) >> 0x10);
      iVar5 = (int)*(undefined4 *)(iVar4 + 0x405);
      FUN_1078_11af(iVar5,uVar7,0);
      FUN_1078_31d4(iVar5,uVar7);
      FUN_1140_3865(iVar5,uVar7,0);
      puVar8 = (undefined4 *)
               FUN_1158_2273(0x4fb,0x1140,*(undefined2 *)(iVar5 + 4),*(undefined2 *)(iVar5 + 6));
      puVar1 = (undefined2 *)((int)*puVar8 + 0x30);
      (*(code *)*puVar1)(0x1158,puVar8);
      FUN_1138_179d(iVar5,uVar7,extraout_DX);
      puVar8 = (undefined4 *)
               FUN_1158_2273(0x4fb,0x1140,*(undefined2 *)(iVar5 + 4),*(undefined2 *)(iVar5 + 6));
      puVar1 = (undefined2 *)((int)*puVar8 + 0x30);
      uVar10 = (*(code *)*puVar1)(0x1158,puVar8);
      iVar3 = (int)uVar10 + 0x1e;
      if (SCARRY2((int)uVar10,0x1e)) {
        iVar3 = FUN_1158_043e(0x1158,uVar10);
      }
      FUN_1138_177b(iVar5,uVar7,iVar3);
      uVar9 = FUN_1158_2273(0x22,(char *)s_Currency_1160_1072 + 6,*(undefined2 *)(iVar5 + 4),
                            *(undefined2 *)(iVar5 + 6));
      *(undefined *)((int)uVar9 + 0x404) = 1;
      if (*(int *)(iVar4 + 0x40c) < 2) {
        *(undefined2 *)((int)*(undefined4 *)(iVar4 + 0x405) + 0x40c) =
             *(undefined2 *)(iVar4 + 0x40c);
      }
      else {
        iVar3 = *(int *)(iVar4 + 0x40c) + -1;
        if (SBORROW2(*(int *)(iVar4 + 0x40c),1)) {
          iVar3 = FUN_1158_043e(0x1158,uVar10);
        }
        *(int *)((int)*(undefined4 *)(iVar4 + 0x405) + 0x40c) = iVar3;
      }
      if (DAT_1160_0150 == 0) {
        FUN_1078_1352((int)*(undefined4 *)(iVar4 + 0x405),
                      (int)((ulong)*(undefined4 *)(iVar4 + 0x405) >> 0x10),0);
      }
      else {
        FUN_1078_1352((int)*(undefined4 *)(iVar4 + 0x405),
                      (int)((ulong)*(undefined4 *)(iVar4 + 0x405) >> 0x10),
                      *(undefined2 *)(iVar4 + 0x40a));
      }
      FUN_1078_13be((int)*(undefined4 *)(iVar4 + 0x405),
                    (int)((ulong)*(undefined4 *)(iVar4 + 0x405) >> 0x10),
                    *(undefined2 *)(iVar4 + 0x40e));
    }
    uVar10 = *(undefined4 *)((int)*(undefined4 *)(iVar4 + 0x405) + 0x194);
    FUN_10a8_246f((int)uVar10,(int)((ulong)uVar10 >> 0x10),
                  *(undefined2 *)((int)*(undefined4 *)(iVar4 + 0x194) + 0xee));
    FUN_1140_5ccc((int)*(undefined4 *)(iVar4 + 0x405),
                  (int)((ulong)*(undefined4 *)(iVar4 + 0x405) >> 0x10));
  }
  return;
}



/* ---- FUN_1078_186f @ 1078:186f  (34 octets) ---- */

void __stdcall16far FUN_1078_186f(undefined4 param_1)

{
  undefined2 uVar1;
  
  FUN_1158_0444();
  uVar1 = (undefined2)((ulong)param_1 >> 0x10);
  FUN_1080_11b8(0,*(undefined2 *)((int)param_1 + 0x40e),*(undefined2 *)((int)param_1 + 0x40c));
  return;
}



/* ---- TFormSEDD_Decisions_PrintBtnClick @ 1078:1897  (1 octets) ---- */

void TFormSEDD_Decisions_PrintBtnClick(undefined2 param_1,undefined4 param_2)

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
  
  _iStack_6 = CONCAT22(unaff_CS,0x18a2);
  FUN_1158_0444();
  uVar4 = (undefined2)((ulong)param_2 >> 0x10);
  iVar3 = (int)param_2;
  pcStack_c = (char *)0x1158;
  pcStack_e = (char *)0x18af;
  iStack_a = iVar3;
  pcStack_8 = (char *)uVar4;
  cVar1 = FUN_1078_3726();
  if (cVar1 == '\0') {
    pcStack_8 = (char *)((ulong)*(undefined4 *)(iVar3 + 0x1d8) >> 0x10);
    iStack_a = (int)*(undefined4 *)(iVar3 + 0x1d8);
    pcStack_c = (char *)s_Currency_1160_1072 + 6;
    pcStack_e = (char *)0x18ca;
    uVar2 = FUN_1108_2f17();
    if ((char)uVar2 != '\0') {
      pcStack_c = (char *)CONCAT11((char)((uint)uVar2 >> 8),1);
      pcStack_e = (char *)s_windows_1160_100f + 1;
      uStack_10 = 0x25b4;
      uStack_12 = 0x1108;
      uStack_14 = 0x18e7;
      iStack_a = iVar3;
      pcStack_8 = (char *)uVar4;
      uVar5 = FUN_1140_2553();
      uVar2 = (undefined2)((ulong)uVar5 >> 0x10);
      iStack_6 = (int)uVar5;
      uStack_12 = 0x1140;
      uStack_14 = 0x1891;
      uStack_18 = DAT_1160_1858;
      DAT_1160_1858 = &uStack_18;
      puStack_16 = &stack0xfffe;
      DAT_1160_2004._0_2_ = iStack_6;
      DAT_1160_2004._2_2_ = uVar2;
      FUN_1010_2f8d(uVar5,1);
      *(undefined2 *)(iStack_6 + 0x2b9) = 0x186f;
      *(undefined2 *)(iStack_6 + 699) = (char *)s_Currency_1160_1072 + 6;
      *(int *)(iStack_6 + 0x2bd) = iVar3;
      *(undefined2 *)(iStack_6 + 0x2bf) = uVar4;
      iVar3 = iStack_6;
      FUN_1140_5d45(iStack_6,uVar2);
      DAT_1160_1858 = (undefined2 *)iVar3;
      puStack_16 = (undefined *)0x1140;
      uStack_18 = 0x1950;
      FUN_1140_5f1d((int)DAT_1160_2004,DAT_1160_2004._2_2_);
      return;
    }
  }
  else {
    pcStack_8 = (char *)s_Currency_1160_1072 + 6;
    iStack_a = 0x18b8;
    FUN_1010_37d1();
  }
  return;
}



/* ---- TFormSEDD_Decisions_PrintRapideBtn1Click @ 1078:1954  (74 octets) ---- */

void __stdcall16far TFormSEDD_Decisions_PrintRapideBtn1Click(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  undefined2 uVar3;
  
  FUN_1158_0444();
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  iVar2 = (int)param_1;
  cVar1 = FUN_1078_3726(iVar2,uVar3);
  if (cVar1 == '\0') {
    cVar1 = FUN_1108_2f17((int)*(undefined4 *)(iVar2 + 0x1d8),
                          (int)((ulong)*(undefined4 *)(iVar2 + 0x1d8) >> 0x10));
    if (cVar1 != '\0') {
      FUN_1080_11b8(1,*(undefined2 *)(iVar2 + 0x40e),*(undefined2 *)(iVar2 + 0x40c));
    }
  }
  else {
    FUN_1010_37d1();
  }
  return;
}



/* ---- FUN_1078_19c4 @ 1078:19c4  (1136 octets) ---- */

void __stdcall16far FUN_1078_19c4(undefined4 param_1,undefined4 param_2)

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
  
  local_6 = 0x19cf;
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



/* ---- TFormSEDD_Decisions_DBEdit1Enter @ 1078:1e4e  (1 octets) ---- */

void TFormSEDD_Decisions_DBEdit1Enter
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
  
  uStack_6 = 0x1e59;
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
        FUN_1138_1d8c((int)*(undefined4 *)(iVar6 + 0x3bc),
                      (int)((ulong)*(undefined4 *)(iVar6 + 0x3bc) >> 0x10),puVar16,uVar10);
      }
      else {
        puStack_e = (undefined4 *)FUN_1158_2273(0x7c8,(char *)s_iTime_1160_10dc + 4,uStack_6,uVar10)
        ;
        puVar16 = auStack_112;
        uVar15 = 0x1158;
        uVar14 = 0x1e3f;
        puVar2 = (undefined2 *)((int)*puStack_e + 0x44);
        uVar10 = unaff_SS;
        lStack_12 = (*(code *)*puVar2)();
        FUN_1150_10d4((longdouble)lStack_12,uVar14,uVar15);
        FUN_1138_1d8c((int)*(undefined4 *)(iVar6 + 0x3bc),
                      (int)((ulong)*(undefined4 *)(iVar6 + 0x3bc) >> 0x10),puVar16,uVar10);
      }
    }
    else {
      puStack_e = (undefined4 *)FUN_1158_2273(0xa58,(char *)s_iTime_1160_10dc + 4,uStack_6,uVar10);
      puVar16 = auStack_10e;
      uVar15 = 0x1158;
      uVar14 = 0x1e34;
      puVar2 = (undefined2 *)((int)*puStack_e + 0x40);
      uVar10 = unaff_SS;
      (*(code *)*puVar2)();
      FUN_1150_10d4(in_ST0,uVar14,uVar15);
      FUN_1138_1d8c((int)*(undefined4 *)(iVar6 + 0x3bc),
                    (int)((ulong)*(undefined4 *)(iVar6 + 0x3bc) >> 0x10),puVar16,uVar10);
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
        FUN_10e0_60f9(puStack_e,0x1e4b,0x1158);
      }
    }
    else {
      puStack_e = (undefined4 *)FUN_1158_2273(0xa58,(char *)s_iTime_1160_10dc + 4,uStack_6,uVar10);
      FUN_10e0_60f9(puStack_e,0x1e45,0x1158);
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



/* ---- TFormSEDD_Decisions_DBEdit1Exit @ 1078:21e1  (1 octets) ---- */

void TFormSEDD_Decisions_DBEdit1Exit(undefined2 param_1,undefined4 param_2)

{
  undefined2 *puVar1;
  char cVar2;
  undefined2 uVar3;
  longdouble in_ST0;
  longdouble in_ST1;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  double dVar7;
  char cStack_10a;
  
  FUN_1158_0444();
  uVar3 = (undefined2)((ulong)param_2 >> 0x10);
  FUN_1138_1c77();
  FUN_1138_1d8c();
  if (*(char *)((int)param_2 + 0x409) != '\0') {
    cVar2 = FUN_1158_2255();
    if (cVar2 != '\0') {
      uVar6 = FUN_1158_2273();
      cVar2 = FUN_10d0_1ae4(uVar6);
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
                puVar4 = (undefined4 *)FUN_1158_2273();
                puVar1 = (undefined2 *)((int)*puVar4 + 0x44);
                (*(code *)*puVar1)();
                puVar4 = (undefined4 *)FUN_10d0_1b18((int)uVar6);
                puVar1 = (undefined2 *)((int)*puVar4 + 0x60);
                (*(code *)*puVar1)(0x10d0,(undefined4 *)puVar4);
              }
            }
            else {
              puVar4 = (undefined4 *)FUN_1158_2273();
              puVar1 = (undefined2 *)((int)*puVar4 + 0x40);
              (*(code *)*puVar1)();
              dVar7 = (double)in_ST0;
              puVar5 = (undefined4 *)FUN_10d0_1b18(uVar6);
              puVar1 = (undefined2 *)((int)*puVar5 + 0x5c);
              (*(code *)*puVar1)(0x10d0,puVar5,dVar7,puVar4);
              in_ST0 = in_ST1;
            }
          }
          else {
            puVar4 = (undefined4 *)FUN_1158_2273();
            puVar1 = (undefined2 *)((int)*puVar4 + 0x40);
            (*(code *)*puVar1)();
            dVar7 = (double)in_ST0;
            puVar5 = (undefined4 *)FUN_10d0_1b18(uVar6);
            puVar1 = (undefined2 *)((int)*puVar5 + 0x5c);
            (*(code *)*puVar1)(0x10d0,puVar5,dVar7,puVar4);
            in_ST0 = in_ST1;
          }
        }
        FUN_1158_2273();
        FUN_1078_19c4();
      }
    }
    cVar2 = FUN_1158_2255();
    if (cVar2 != '\0') {
      uVar6 = FUN_1158_2273();
      cVar2 = FUN_10d0_2ad7(uVar6);
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
              puVar4 = (undefined4 *)FUN_1158_2273();
              puVar1 = (undefined2 *)((int)*puVar4 + 0x44);
              (*(code *)*puVar1)();
              puVar4 = (undefined4 *)FUN_10d0_2b0b((int)uVar6);
              puVar1 = (undefined2 *)((int)*puVar4 + 0x60);
              (*(code *)*puVar1)(0x10d0,(undefined4 *)puVar4);
            }
          }
          else {
            puVar4 = (undefined4 *)FUN_1158_2273();
            puVar1 = (undefined2 *)((int)*puVar4 + 0x40);
            (*(code *)*puVar1)();
            dVar7 = (double)in_ST0;
            puVar5 = (undefined4 *)FUN_10d0_2b0b(uVar6);
            puVar1 = (undefined2 *)((int)*puVar5 + 0x5c);
            (*(code *)*puVar1)(0x10d0,puVar5,dVar7,puVar4);
          }
        }
        else {
          puVar4 = (undefined4 *)FUN_1158_2273();
          puVar1 = (undefined2 *)((int)*puVar4 + 0x40);
          (*(code *)*puVar1)();
          dVar7 = (double)in_ST0;
          puVar5 = (undefined4 *)FUN_10d0_2b0b(uVar6);
          puVar1 = (undefined2 *)((int)*puVar5 + 0x5c);
          (*(code *)*puVar1)(0x10d0,puVar5,dVar7,puVar4);
        }
      }
    }
    cVar2 = FUN_1158_2255();
    if ((cVar2 != '\0') && (uVar6 = FUN_1158_2273(), *(char *)((int)uVar6 + 0xdc) == '\0')) {
      FUN_10f0_1733(uVar6);
      FUN_10f0_178b();
    }
  }
  FUN_1078_3726((int)param_2,uVar3);
  return;
}



/* ---- TFormSEDD_Decisions_DBEdit1KeyUp @ 1078:25cf  (150 octets) ---- */

void __stdcall16far
TFormSEDD_Decisions_DBEdit1KeyUp
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
  
  _local_6 = CONCAT22(unaff_CS,0x25da);
  FUN_1158_0444();
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  if (*param_2 == 0x11) {
    uVar3 = *(undefined4 *)((int)param_1 + 0x1fc);
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
        uVar3 = *(undefined4 *)((int)param_1 + 0x3bc);
        FUN_1138_1d8c((int)uVar3,(int)((ulong)uVar3 >> 0x10),puVar4,unaff_SS);
      }
    }
  }
  return;
}



/* ---- TFormSEDD_Decisions_DBEdit1KeyDown @ 1078:2678  (1 octets) ---- */

void TFormSEDD_Decisions_DBEdit1KeyDown
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
  
  iStack_6 = 0x2683;
  FUN_1158_0444();
  if ((*param_4 == 0x70) && (cVar2 = FUN_1158_2255(0x5c1,0x1138,param_5,param_6), cVar2 != '\0')) {
    *param_4 = 0;
    FUN_1158_2273();
    FUN_1140_77b2();
  }
  if (*param_4 == 0x11) {
    uVar7 = (undefined2)((ulong)param_2 >> 0x10);
    iVar5 = (int)param_2;
    if (*(char *)((int)*(undefined4 *)(iVar5 + 0x1fc) + 0x29) == '\0') {
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
            uVar8 = 0x2670;
            puVar1 = (undefined2 *)((int)*puStack_112 + 0x44);
            lStack_116 = (*(code *)*puVar1)();
            FUN_1150_10d4((longdouble)lStack_116,uVar8,uVar9);
            FUN_1158_17e7();
          }
        }
        else {
          puStack_112 = (undefined4 *)FUN_1158_2273(0xa58,(char *)s_iTime_1160_10dc + 4,uStack_a);
          uVar9 = 0x1158;
          uVar8 = 0x2665;
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
      if (acStack_10a[0] != '\0') {
        puVar11 = auStack_20a;
        uVar9 = unaff_SS;
        FUN_1158_17cd(0x2676,uVar8);
        FUN_1158_184c(acStack_10a,unaff_SS);
        FUN_1158_184c(0x2676,0x1158);
        FUN_1138_1d8c((int)*(undefined4 *)(iVar5 + 0x1fc),
                      (int)((ulong)*(undefined4 *)(iVar5 + 0x1fc) >> 0x10),puVar11,uVar9);
        uStack_10e = FUN_1140_33d5(iVar5,uVar7);
        uVar8 = (undefined2)((ulong)*(undefined4 *)(iVar5 + 0x1fc) >> 0x10);
        iVar6 = (int)*(undefined4 *)(iVar5 + 0x1fc);
        FUN_1128_2099(uStack_10e,*(undefined2 *)(iVar6 + 0x34),*(undefined2 *)(iVar6 + 0x36));
        puVar11 = auStack_20e;
        uVar8 = unaff_SS;
        FUN_1138_1d53((int)*(undefined4 *)(iVar5 + 0x1fc),
                      (int)((ulong)*(undefined4 *)(iVar5 + 0x1fc) >> 0x10));
        uVar8 = FUN_1128_2003(uStack_10e,puVar11,uVar8);
        FUN_1138_17bf((int)*(undefined4 *)(iVar5 + 0x1fc),
                      (int)((ulong)*(undefined4 *)(iVar5 + 0x1fc) >> 0x10),uVar8);
        puVar11 = auStack_20e;
        FUN_1138_1d53((int)*(undefined4 *)(iVar5 + 0x1fc),
                      (int)((ulong)*(undefined4 *)(iVar5 + 0x1fc) >> 0x10));
        iVar6 = FUN_1128_204e(uStack_10e,puVar11,unaff_SS);
        iVar4 = (int)((long)iVar6 * 3);
        if ((long)iVar4 != (long)iVar6 * 3) {
          iVar4 = FUN_1158_043e(0x1128);
        }
        FUN_1138_17e1((int)*(undefined4 *)(iVar5 + 0x1fc),
                      (int)((ulong)*(undefined4 *)(iVar5 + 0x1fc) >> 0x10),iVar4 / 2);
        uVar10 = FUN_1138_1a06(iVar5,uVar7,iStack_6,(int)((ulong)uVar10 >> 0x10));
        iStack_6 = (int)uVar10;
        uStack_10e._2_2_ = (undefined2)((ulong)*(undefined4 *)(iVar5 + 0x1fc) >> 0x10);
        uStack_10e._0_2_ = (int)*(undefined4 *)(iVar5 + 0x1fc);
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
        FUN_1138_1c77((int)*(undefined4 *)(iVar5 + 0x1fc),
                      (int)((ulong)*(undefined4 *)(iVar5 + 0x1fc) >> 0x10),1);
      }
    }
  }
  return;
}



/* ---- FUN_1078_2baf @ 1078:2baf  (264 octets) ---- */

void __stdcall16far FUN_1078_2baf(undefined4 param_1,undefined2 param_2,undefined2 param_3)

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



/* ---- FUN_1078_2cb7 @ 1078:2cb7  (335 octets) ---- */

void __stdcall16far FUN_1078_2cb7(undefined4 param_1,char param_2)

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
  
  uVar17 = 0x2cc2;
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



/* ---- FUN_1078_2e06 @ 1078:2e06  (136 octets) ---- */

void __stdcall16far FUN_1078_2e06(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined4 uVar6;
  undefined2 uVar7;
  
  uVar7 = 0x2e11;
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
        FUN_1078_19c4(uVar4,uVar5,uVar6);
      }
      if (iVar2 == iVar3) break;
      iVar2 = iVar2 + 1;
    }
  }
  return;
}



/* ---- FUN_1078_2e8e @ 1078:2e8e  (300 octets) ---- */

void __stdcall16far FUN_1078_2e8e(undefined4 param_1,undefined param_2)

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



/* ---- TFormSEDD_Decisions_VerifierBtnClick @ 1078:2fba  (24 octets) ---- */

void __stdcall16far TFormSEDD_Decisions_VerifierBtnClick(undefined4 param_1)

{
  FUN_1158_0444();
  FUN_1078_620b((int)param_1,(int)((ulong)param_1 >> 0x10));
  return;
}



/* ---- TFormSEDD_Decisions_EnregistrerBtnClick @ 1078:2fd2  (48 octets) ---- */

void __stdcall16far TFormSEDD_Decisions_EnregistrerBtnClick(undefined4 param_1)

{
  undefined extraout_AH;
  int iVar1;
  int iVar2;
  undefined2 uVar3;
  
  FUN_1158_0444();
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  iVar2 = (int)param_1;
  iVar1 = FUN_1010_3e91(CONCAT11(extraout_AH,*(undefined *)(iVar2 + 0x410)),
                        *(undefined2 *)(iVar2 + 0x40e));
  if (iVar1 == 6) {
    FUN_1078_38df(iVar2,uVar3);
  }
  return;
}



/* ---- TFormSEDD_Decisions_DefautBtnClick @ 1078:3002  (24 octets) ---- */

void __stdcall16far TFormSEDD_Decisions_DefautBtnClick(undefined4 param_1)

{
  FUN_1158_0444();
  FUN_1078_3c11((int)param_1,(int)((ulong)param_1 >> 0x10));
  return;
}



/* ---- TFormSEDD_Decisions_InitialBtnClick @ 1078:301a  (236 octets) ---- */

void __stdcall16far TFormSEDD_Decisions_InitialBtnClick(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  
  FUN_1158_0444();
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  uVar4 = (undefined2)((ulong)*(undefined4 *)(iVar1 + 0x17c) >> 0x10);
  iVar2 = (int)*(undefined4 *)(iVar1 + 0x17c);
  if (*(char *)(iVar2 + 0x181) == '\0') {
    FUN_10d8_558b(iVar2,uVar4);
    FUN_10d8_533c(iVar2,uVar4);
  }
  uVar4 = (undefined2)((ulong)*(undefined4 *)(iVar1 + 0x1dc) >> 0x10);
  iVar2 = (int)*(undefined4 *)(iVar1 + 0x1dc);
  if (*(char *)(iVar2 + 0x181) == '\0') {
    FUN_10d8_558b(iVar2,uVar4);
    FUN_10d8_533c(iVar2,uVar4);
  }
  uVar4 = (undefined2)((ulong)*(undefined4 *)(iVar1 + 0x1e0) >> 0x10);
  iVar2 = (int)*(undefined4 *)(iVar1 + 0x1e0);
  if (*(char *)(iVar2 + 0x181) == '\0') {
    FUN_10d8_558b(iVar2,uVar4);
    FUN_10d8_533c(iVar2,uVar4);
  }
  uVar4 = (undefined2)((ulong)*(undefined4 *)(iVar1 + 0x188) >> 0x10);
  iVar2 = (int)*(undefined4 *)(iVar1 + 0x188);
  if (*(char *)(iVar2 + 0x181) == '\0') {
    FUN_10d8_558b(iVar2,uVar4);
    FUN_10d8_533c(iVar2,uVar4);
  }
  FUN_1078_339a(iVar1,uVar3);
  *(undefined *)(iVar1 + 0x412) = 0;
  FUN_1078_2e06(iVar1,uVar3);
  FUN_1078_2baf(iVar1,uVar3,0xfffa,0xffff);
  FUN_1078_2cb7(iVar1,uVar3,0);
  FUN_1078_3726(iVar1,uVar3);
  return;
}



/* ---- FUN_1078_3106 @ 1078:3106  (206 octets) ---- */

void __stdcall16far FUN_1078_3106(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  
  FUN_1158_0444();
  uVar4 = (undefined2)((ulong)param_1 >> 0x10);
  iVar2 = (int)param_1;
  uVar5 = (undefined2)((ulong)*(undefined4 *)(iVar2 + 0x17c) >> 0x10);
  uVar3 = (undefined2)*(undefined4 *)(iVar2 + 0x17c);
  cVar1 = FUN_10d8_3202(uVar3,uVar5);
  if (cVar1 != '\0') {
    FUN_10d8_31d2(uVar3,uVar5);
    FUN_10e0_2ed2(uVar3,uVar5,0);
  }
  uVar5 = (undefined2)((ulong)*(undefined4 *)(iVar2 + 0x1dc) >> 0x10);
  uVar3 = (undefined2)*(undefined4 *)(iVar2 + 0x1dc);
  cVar1 = FUN_10d8_3202(uVar3,uVar5);
  if (cVar1 != '\0') {
    FUN_10d8_31d2(uVar3,uVar5);
    FUN_10e0_2ed2(uVar3,uVar5,0);
  }
  uVar5 = (undefined2)((ulong)*(undefined4 *)(iVar2 + 0x1e0) >> 0x10);
  uVar3 = (undefined2)*(undefined4 *)(iVar2 + 0x1e0);
  cVar1 = FUN_10d8_3202(uVar3,uVar5);
  if (cVar1 != '\0') {
    FUN_10d8_31d2(uVar3,uVar5);
    FUN_10e0_2ed2(uVar3,uVar5,0);
  }
  uVar5 = (undefined2)((ulong)*(undefined4 *)(iVar2 + 0x188) >> 0x10);
  uVar3 = (undefined2)*(undefined4 *)(iVar2 + 0x188);
  cVar1 = FUN_10d8_3202(uVar3,uVar5);
  if (cVar1 != '\0') {
    FUN_10d8_31d2(uVar3,uVar5);
    FUN_10e0_2ed2(uVar3,uVar5,0);
  }
  return;
}



/* ---- FUN_1078_31d4 @ 1078:31d4  (454 octets) ---- */

void __stdcall16far FUN_1078_31d4(undefined4 param_1)

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
  *(undefined *)((int)*(undefined4 *)(iVar3 + 0x180) + 0x23) = *(undefined *)(iVar3 + 0x409);
  *(undefined *)((int)*(undefined4 *)(iVar3 + 400) + 0x23) = *(undefined *)(iVar3 + 0x409);
  *(undefined *)((int)*(undefined4 *)(iVar3 + 0x184) + 0x23) = *(undefined *)(iVar3 + 0x409);
  *(undefined *)((int)*(undefined4 *)(iVar3 + 0x18c) + 0x23) = *(undefined *)(iVar3 + 0x409);
  uVar6 = (undefined2)((ulong)*(undefined4 *)(iVar3 + 0x17c) >> 0x10);
  uVar4 = (undefined2)*(undefined4 *)(iVar3 + 0x17c);
  FUN_10d8_31d2(uVar4,uVar6);
  uVar2 = FUN_1078_132c(iVar3,uVar5);
  FUN_10e0_2ffb(uVar4,uVar6,uVar2);
  cVar1 = FUN_1078_132c(iVar3,uVar5);
  if (cVar1 == '\0') {
    FUN_10e0_2ed2(uVar4,uVar6,1);
  }
  else {
    FUN_10e0_2ed2(uVar4,uVar6,0);
  }
  FUN_10d8_31bf(uVar4,uVar6);
  uVar6 = (undefined2)((ulong)*(undefined4 *)(iVar3 + 0x1dc) >> 0x10);
  uVar4 = (undefined2)*(undefined4 *)(iVar3 + 0x1dc);
  FUN_10d8_31d2(uVar4,uVar6);
  uVar2 = FUN_1078_132c(iVar3,uVar5);
  FUN_10e0_2ffb(uVar4,uVar6,uVar2);
  cVar1 = FUN_1078_132c(iVar3,uVar5);
  if (cVar1 == '\0') {
    FUN_10e0_2ed2(uVar4,uVar6,1);
  }
  else {
    FUN_10e0_2ed2(uVar4,uVar6,0);
  }
  FUN_10d8_31bf(uVar4,uVar6);
  uVar6 = (undefined2)((ulong)*(undefined4 *)(iVar3 + 0x1e0) >> 0x10);
  uVar4 = (undefined2)*(undefined4 *)(iVar3 + 0x1e0);
  FUN_10d8_31d2(uVar4,uVar6);
  uVar2 = FUN_1078_132c(iVar3,uVar5);
  FUN_10e0_2ffb(uVar4,uVar6,uVar2);
  cVar1 = FUN_1078_132c(iVar3,uVar5);
  if (cVar1 == '\0') {
    FUN_10e0_2ed2(uVar4,uVar6,1);
  }
  else {
    FUN_10e0_2ed2(uVar4,uVar6,0);
  }
  FUN_10d8_31bf(uVar4,uVar6);
  uVar6 = (undefined2)((ulong)*(undefined4 *)(iVar3 + 0x188) >> 0x10);
  uVar4 = (undefined2)*(undefined4 *)(iVar3 + 0x188);
  FUN_10d8_31d2(uVar4,uVar6);
  uVar2 = FUN_1078_132c(iVar3,uVar5);
  FUN_10e0_2ffb(uVar4,uVar6,uVar2);
  cVar1 = FUN_1078_132c(iVar3,uVar5);
  if (cVar1 == '\0') {
    FUN_10e0_2ed2(uVar4,uVar6,1);
  }
  else {
    FUN_10e0_2ed2(uVar4,uVar6,0);
  }
  FUN_10d8_31bf(uVar4,uVar6);
  return;
}



/* ---- FUN_1078_339a @ 1078:339a  (26 octets) ---- */

void __stdcall16far FUN_1078_339a(void)

{
  FUN_1158_0444();
  return;
}



/* ---- FUN_1078_33b4 @ 1078:33b4  (33 octets) ---- */

void __stdcall16far FUN_1078_33b4(void)

{
  FUN_1158_0444();
  return;
}



/* ---- FUN_1078_33f1 @ 1078:33f1  (743 octets) ---- */

void __stdcall16far FUN_1078_33f1(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined2 unaff_CS;
  undefined2 unaff_SS;
  undefined *puStack_2e;
  undefined *puStack_2c;
  undefined2 uStack_2a;
  undefined2 uStack_28;
  undefined2 uStack_26;
  undefined *puStack_24;
  undefined2 uStack_22;
  undefined2 uStack_20;
  int local_1e;
  int local_1c;
  undefined local_1a;
  int local_16;
  int local_14;
  undefined local_12;
  int local_e;
  int local_c;
  undefined local_a;
  int local_6;
  
  _local_6 = CONCAT22(unaff_CS,0x33fc);
  FUN_1158_0444();
  uStack_20 = 0x1158;
  uStack_22 = 0x33df;
  puStack_2e = (undefined *)&uStack_26;
  uStack_26 = DAT_1160_1858;
  uStack_28 = 0x1158;
  uStack_2a = 0x33d5;
  DAT_1160_1858 = &puStack_2e;
  uVar4 = (undefined2)((ulong)param_1 >> 0x10);
  iVar2 = (int)param_1;
  _local_6 = *(undefined4 *)(iVar2 + 0x17c);
  local_16 = *(int *)(iVar2 + 0x40c);
  local_14 = local_16 >> 0xf;
  local_12 = 0;
  local_e = *(int *)(iVar2 + 0x40e);
  local_c = local_e >> 0xf;
  local_a = 0;
  puStack_2c = &stack0xfffe;
  puStack_24 = &stack0xfffe;
  cVar1 = FUN_10e0_2895((int)_local_6,(int)((ulong)_local_6 >> 0x10),1,&local_16,unaff_SS);
  if (cVar1 == '\0') {
    FUN_1078_0b7b(iVar2,uVar4);
  }
  FUN_1078_339a(iVar2,uVar4);
  _local_6 = *(undefined4 *)(iVar2 + 0x1dc);
  local_1e = *(int *)(iVar2 + 0x40c);
  local_1c = local_1e >> 0xf;
  local_1a = 0;
  local_16 = *(int *)(iVar2 + 0x40e);
  local_14 = local_16 >> 0xf;
  local_12 = 0;
  local_e = 1;
  local_c = 0;
  local_a = 0;
  cVar1 = FUN_10e0_2895((int)_local_6,(int)((ulong)_local_6 >> 0x10),2,&local_1e,unaff_SS);
  if (cVar1 == '\0') {
    FUN_1078_0b7b(iVar2,uVar4);
  }
  _local_6 = *(undefined4 *)(iVar2 + 0x1e0);
  local_1e = *(int *)(iVar2 + 0x40c);
  local_1c = local_1e >> 0xf;
  local_1a = 0;
  local_16 = *(int *)(iVar2 + 0x40e);
  local_14 = local_16 >> 0xf;
  local_12 = 0;
  local_e = 2;
  local_c = 0;
  local_a = 0;
  cVar1 = FUN_10e0_2895((int)_local_6,(int)((ulong)_local_6 >> 0x10),2,&local_1e,unaff_SS);
  if (cVar1 == '\0') {
    FUN_1078_0b7b(iVar2,uVar4);
  }
  local_6 = (int)*(undefined4 *)(iVar2 + 0x188);
  local_16 = *(int *)(iVar2 + 0x40c);
  local_14 = local_16 >> 0xf;
  local_12 = 0;
  local_e = *(int *)(iVar2 + 0x40e);
  local_c = local_e >> 0xf;
  local_a = 0;
  cVar1 = FUN_10e0_2895(local_6,(int)((ulong)*(undefined4 *)(iVar2 + 0x188) >> 0x10),1,&local_16,
                        unaff_SS);
  if (cVar1 == '\0') {
    FUN_1078_0b7b(iVar2,uVar4);
  }
  if (*(char *)(iVar2 + 0x409) == '\0') {
    uVar5 = (undefined2)((ulong)*(undefined4 *)(iVar2 + 0x17c) >> 0x10);
    local_6 = (int)*(undefined4 *)(iVar2 + 0x17c);
    if (*(char *)(local_6 + 0x181) == '\0') {
      FUN_10d8_533c(local_6,uVar5);
      FUN_10d8_558b(local_6,uVar5);
    }
    uVar5 = (undefined2)((ulong)*(undefined4 *)(iVar2 + 0x1dc) >> 0x10);
    local_6 = (int)*(undefined4 *)(iVar2 + 0x1dc);
    if (*(char *)(local_6 + 0x181) == '\0') {
      FUN_10d8_533c(local_6,uVar5);
      FUN_10d8_558b(local_6,uVar5);
    }
    uVar5 = (undefined2)((ulong)*(undefined4 *)(iVar2 + 0x1e0) >> 0x10);
    local_6 = (int)*(undefined4 *)(iVar2 + 0x1e0);
    if (*(char *)(local_6 + 0x181) == '\0') {
      FUN_10d8_533c(local_6,uVar5);
      FUN_10d8_558b(local_6,uVar5);
    }
    uVar5 = (undefined2)((ulong)*(undefined4 *)(iVar2 + 0x188) >> 0x10);
    local_6 = (int)*(undefined4 *)(iVar2 + 0x188);
    if (*(char *)(local_6 + 0x181) == '\0') {
      FUN_10d8_533c(local_6,uVar5);
      FUN_10d8_558b(local_6,uVar5);
    }
  }
  else {
    uVar5 = (undefined2)((ulong)*(undefined4 *)(iVar2 + 0x17c) >> 0x10);
    iVar3 = (int)*(undefined4 *)(iVar2 + 0x17c);
    if (*(char *)(iVar3 + 0x181) == '\0') {
      FUN_10d8_533c(iVar3,uVar5);
    }
    uVar5 = (undefined2)((ulong)*(undefined4 *)(iVar2 + 0x1dc) >> 0x10);
    iVar3 = (int)*(undefined4 *)(iVar2 + 0x1dc);
    if (*(char *)(iVar3 + 0x181) == '\0') {
      FUN_10d8_533c(iVar3,uVar5);
    }
    uVar5 = (undefined2)((ulong)*(undefined4 *)(iVar2 + 0x1e0) >> 0x10);
    iVar3 = (int)*(undefined4 *)(iVar2 + 0x1e0);
    if (*(char *)(iVar3 + 0x181) == '\0') {
      FUN_10d8_533c(iVar3,uVar5);
    }
    uVar5 = (undefined2)((ulong)*(undefined4 *)(iVar2 + 0x188) >> 0x10);
    iVar3 = (int)*(undefined4 *)(iVar2 + 0x188);
    if (*(char *)(iVar3 + 0x181) == '\0') {
      FUN_10d8_533c(iVar3,uVar5);
    }
  }
  FUN_1078_339a(iVar2,uVar4);
  *(undefined *)(iVar2 + 0x412) = 0;
  FUN_1078_2e06(iVar2,uVar4);
  FUN_1078_2baf(iVar2,uVar4,0xfffa,0xffff);
  FUN_1078_2cb7(iVar2,uVar4,0);
  FUN_1078_3726(iVar2,uVar4);
  DAT_1160_1858 = (undefined **)uStack_26;
  return;
}



/* ---- FUN_1078_3726 @ 1078:3726  (184 octets) ---- */

byte __stdcall16far FUN_1078_3726(undefined4 param_1)

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
           FUN_10d8_3b9b((int)*(undefined4 *)(iVar4 + 0x17c),
                         (int)((ulong)*(undefined4 *)(iVar4 + 0x17c) >> 0x10),0x371b,0x1158);
  puVar1 = (undefined2 *)((int)*puVar6 + 0x38);
  uVar2 = (*(code *)*puVar1)(0x10d8,puVar6);
  *(undefined *)(iVar4 + 0x410) = uVar2;
  if (*(char *)(iVar4 + 0x409) == '\0') {
    bVar3 = 0;
  }
  else {
    bVar3 = *(byte *)((int)*(undefined4 *)(iVar4 + 0x17c) + 0x3e) |
            *(byte *)((int)*(undefined4 *)(iVar4 + 0x1dc) + 0x3e) |
            *(byte *)((int)*(undefined4 *)(iVar4 + 0x1e0) + 0x3e) |
            *(byte *)((int)*(undefined4 *)(iVar4 + 0x188) + 0x3e) | *(byte *)(iVar4 + 0x412);
    if (bVar3 != 0) {
      *(undefined *)(iVar4 + 0x410) = 0;
    }
    FUN_1138_1c77((int)*(undefined4 *)(iVar4 + 0x3d4),
                  (int)((ulong)*(undefined4 *)(iVar4 + 0x3d4) >> 0x10),bVar3);
  }
  FUN_1120_6e11((int)*(undefined4 *)(iVar4 + 0x3e0),
                (int)((ulong)*(undefined4 *)(iVar4 + 0x3e0) >> 0x10),*(undefined *)(iVar4 + 0x410));
  return bVar3;
}



/* ---- FUN_1078_37de @ 1078:37de  (236 octets) ---- */

void __stdcall16far FUN_1078_37de(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  
  FUN_1158_0444();
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  uVar4 = (undefined2)((ulong)*(undefined4 *)(iVar1 + 0x17c) >> 0x10);
  iVar2 = (int)*(undefined4 *)(iVar1 + 0x17c);
  if (*(char *)(iVar2 + 0x181) == '\0') {
    FUN_10d8_533c(iVar2,uVar4);
    FUN_10d8_558b(iVar2,uVar4);
  }
  uVar4 = (undefined2)((ulong)*(undefined4 *)(iVar1 + 0x1dc) >> 0x10);
  iVar2 = (int)*(undefined4 *)(iVar1 + 0x1dc);
  if (*(char *)(iVar2 + 0x181) == '\0') {
    FUN_10d8_533c(iVar2,uVar4);
    FUN_10d8_558b(iVar2,uVar4);
  }
  uVar4 = (undefined2)((ulong)*(undefined4 *)(iVar1 + 0x1e0) >> 0x10);
  iVar2 = (int)*(undefined4 *)(iVar1 + 0x1e0);
  if (*(char *)(iVar2 + 0x181) == '\0') {
    FUN_10d8_533c(iVar2,uVar4);
    FUN_10d8_558b(iVar2,uVar4);
  }
  uVar4 = (undefined2)((ulong)*(undefined4 *)(iVar1 + 0x188) >> 0x10);
  iVar2 = (int)*(undefined4 *)(iVar1 + 0x188);
  if (*(char *)(iVar2 + 0x181) == '\0') {
    FUN_10d8_533c(iVar2,uVar4);
    FUN_10d8_558b(iVar2,uVar4);
  }
  FUN_1078_339a(iVar1,uVar3);
  *(undefined *)(iVar1 + 0x412) = 0;
  FUN_1078_2e06(iVar1,uVar3);
  FUN_1078_2baf(iVar1,uVar3,0xfffa,0xffff);
  FUN_1078_2cb7(iVar1,uVar3,0);
  FUN_1078_3726(iVar1,uVar3);
  return;
}



/* ---- FUN_1078_38df @ 1078:38df  (283 octets) ---- */

void __stdcall16far FUN_1078_38df(undefined4 param_1)

{
  undefined2 *puVar1;
  undefined extraout_AH;
  int iVar2;
  undefined2 uVar3;
  undefined2 uStack_14;
  undefined *puStack_12;
  int iStack_10;
  char *pcStack_e;
  undefined4 uStack_c;
  undefined2 uStack_8;
  undefined2 uStack_6;
  
  uStack_6 = 0x38ea;
  FUN_1158_0444();
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  iVar2 = (int)param_1;
  uStack_8 = (undefined2)((ulong)*(undefined4 *)(iVar2 + 0x17c) >> 0x10);
  uStack_c._2_2_ = (undefined2)*(undefined4 *)(iVar2 + 0x17c);
  uStack_c._0_2_ = (undefined4 *)0x1158;
  pcStack_e = (char *)0x38fc;
  FUN_10d8_533c();
  uStack_8 = (undefined2)((ulong)*(undefined4 *)(iVar2 + 0x1dc) >> 0x10);
  uStack_c._2_2_ = (undefined2)*(undefined4 *)(iVar2 + 0x1dc);
  uStack_c._0_2_ = (undefined4 *)0x10d8;
  pcStack_e = (char *)0x390b;
  FUN_10d8_533c();
  uStack_8 = (undefined2)((ulong)*(undefined4 *)(iVar2 + 0x1e0) >> 0x10);
  uStack_c._2_2_ = (undefined2)*(undefined4 *)(iVar2 + 0x1e0);
  uStack_c._0_2_ = (undefined4 *)0x10d8;
  pcStack_e = (char *)0x391a;
  FUN_10d8_533c();
  uStack_8 = (undefined2)((ulong)*(undefined4 *)(iVar2 + 0x188) >> 0x10);
  uStack_c._2_2_ = (undefined2)*(undefined4 *)(iVar2 + 0x188);
  uStack_c._0_2_ = (undefined4 *)0x10d8;
  pcStack_e = (char *)0x3929;
  FUN_10d8_533c();
  uStack_8 = CONCAT11(extraout_AH,*(undefined *)(iVar2 + 0x410));
  uStack_c._2_2_ = 0x10d8;
  uStack_c._0_2_ = (undefined4 *)0x38ca;
  pcStack_e = (char *)((ulong)*(undefined4 *)(iVar2 + 0x17c) >> 0x10);
  iStack_10 = (int)*(undefined4 *)(iVar2 + 0x17c);
  puStack_12 = (undefined *)0x10d8;
  uStack_14 = 0x3946;
  uStack_c = (undefined4 *)FUN_10d8_3b9b();
  puVar1 = (undefined2 *)((int)*uStack_c + 0x54);
  pcStack_e = (char *)0x10d8;
  iStack_10 = 0x3953;
  (*(code *)*puVar1)();
  puStack_12 = (undefined *)0x10d8;
  uStack_14 = 0x395d;
  iStack_10 = iVar2;
  pcStack_e = (char *)uVar3;
  FUN_1078_33b4();
  pcStack_e = (char *)s_Currency_1160_1072 + 6;
  iStack_10 = 0x38d5;
  uStack_14 = DAT_1160_1858;
  DAT_1160_1858 = &uStack_14;
  puStack_12 = &stack0xfffe;
  FUN_10d8_54a0((int)*(undefined4 *)(iVar2 + 0x17c),
                (int)((ulong)*(undefined4 *)(iVar2 + 0x17c) >> 0x10));
  FUN_10d8_54a0((int)*(undefined4 *)(iVar2 + 0x1dc),
                (int)((ulong)*(undefined4 *)(iVar2 + 0x1dc) >> 0x10));
  FUN_10d8_54a0((int)*(undefined4 *)(iVar2 + 0x1e0),
                (int)((ulong)*(undefined4 *)(iVar2 + 0x1e0) >> 0x10));
  FUN_10d8_54a0((int)*(undefined4 *)(iVar2 + 0x188),
                (int)((ulong)*(undefined4 *)(iVar2 + 0x188) >> 0x10));
  DAT_1160_1858 = (undefined2 *)uStack_14;
  pcStack_e = (char *)((ulong)*(undefined4 *)(iVar2 + 0x17c) >> 0x10);
  iStack_10 = (int)*(undefined4 *)(iVar2 + 0x17c);
  puStack_12 = (undefined *)0x10d8;
  uStack_14 = 0x39d5;
  FUN_10d8_533c();
  pcStack_e = (char *)((ulong)*(undefined4 *)(iVar2 + 0x1dc) >> 0x10);
  iStack_10 = (int)*(undefined4 *)(iVar2 + 0x1dc);
  puStack_12 = (undefined *)0x10d8;
  uStack_14 = 0x39e4;
  FUN_10d8_533c();
  pcStack_e = (char *)((ulong)*(undefined4 *)(iVar2 + 0x1e0) >> 0x10);
  iStack_10 = (int)*(undefined4 *)(iVar2 + 0x1e0);
  puStack_12 = (undefined *)0x10d8;
  uStack_14 = 0x39f3;
  FUN_10d8_533c();
  pcStack_e = (char *)((ulong)*(undefined4 *)(iVar2 + 0x188) >> 0x10);
  iStack_10 = (int)*(undefined4 *)(iVar2 + 0x188);
  puStack_12 = (undefined *)0x10d8;
  uStack_14 = 0x3a02;
  FUN_10d8_533c();
  puStack_12 = (undefined *)0x10d8;
  uStack_14 = 0x3a0c;
  iStack_10 = iVar2;
  pcStack_e = (char *)uVar3;
  FUN_1078_3726();
  return;
}



/* ---- FUN_1078_3a25 @ 1078:3a25  (241 octets) ---- */

bool __stdcall16far FUN_1078_3a25(undefined4 param_1)

{
  undefined2 *puVar1;
  char cVar2;
  undefined extraout_AH;
  int iVar3;
  undefined2 uVar4;
  undefined2 uStack_16;
  undefined *puStack_14;
  int iStack_12;
  char *pcStack_10;
  undefined4 uStack_e;
  undefined2 uStack_a;
  undefined2 uStack_6;
  
  uStack_6 = 0x3a30;
  FUN_1158_0444();
  uVar4 = (undefined2)((ulong)param_1 >> 0x10);
  iVar3 = (int)param_1;
  uStack_e._0_2_ = (char *)0x1158;
  pcStack_10 = (char *)0x3a41;
  uStack_e._2_2_ = iVar3;
  uStack_a = uVar4;
  cVar2 = FUN_1078_620b();
  if (cVar2 != '\0') {
    uStack_a = (undefined2)((ulong)*(undefined4 *)(iVar3 + 0x17c) >> 0x10);
    uStack_e._2_2_ = (int)*(undefined4 *)(iVar3 + 0x17c);
    uStack_e._0_2_ = (char *)s_Currency_1160_1072 + 6;
    pcStack_10 = (char *)0x3a57;
    FUN_10d8_533c();
    uStack_a = (undefined2)((ulong)*(undefined4 *)(iVar3 + 0x1dc) >> 0x10);
    uStack_e._2_2_ = (int)*(undefined4 *)(iVar3 + 0x1dc);
    uStack_e._0_2_ = (char *)0x10d8;
    pcStack_10 = (char *)0x3a66;
    FUN_10d8_533c();
    uStack_a = (undefined2)((ulong)*(undefined4 *)(iVar3 + 0x1e0) >> 0x10);
    uStack_e._2_2_ = (int)*(undefined4 *)(iVar3 + 0x1e0);
    uStack_e._0_2_ = (char *)0x10d8;
    pcStack_10 = (char *)0x3a75;
    FUN_10d8_533c();
    uStack_a = (undefined2)((ulong)*(undefined4 *)(iVar3 + 0x188) >> 0x10);
    uStack_e._2_2_ = (int)*(undefined4 *)(iVar3 + 0x188);
    uStack_e._0_2_ = (char *)0x10d8;
    pcStack_10 = (char *)0x3a84;
    FUN_10d8_533c();
    uStack_a = CONCAT11(extraout_AH,*(undefined *)(iVar3 + 0x410));
    uStack_e._2_2_ = 0x10d8;
    uStack_e._0_2_ = (char *)0x3a10;
    pcStack_10 = (char *)((ulong)*(undefined4 *)(iVar3 + 0x17c) >> 0x10);
    iStack_12 = (int)*(undefined4 *)(iVar3 + 0x17c);
    puStack_14 = (undefined *)0x10d8;
    uStack_16 = 0x3aa1;
    uStack_e = (undefined4 *)FUN_10d8_3b9b();
    puVar1 = (undefined2 *)((int)*uStack_e + 0x54);
    pcStack_10 = (char *)0x10d8;
    iStack_12 = 0x3aae;
    (*(code *)*puVar1)();
    puStack_14 = (undefined *)0x10d8;
    uStack_16 = 0x3ab8;
    iStack_12 = iVar3;
    pcStack_10 = (char *)uVar4;
    FUN_1078_33b4();
    pcStack_10 = (char *)s_Currency_1160_1072 + 6;
    iStack_12 = 0x3a1b;
    uStack_16 = DAT_1160_1858;
    DAT_1160_1858 = &uStack_16;
    puStack_14 = &stack0xfffe;
    FUN_10d8_54a0((int)*(undefined4 *)(iVar3 + 0x17c),
                  (int)((ulong)*(undefined4 *)(iVar3 + 0x17c) >> 0x10));
    FUN_10d8_54a0((int)*(undefined4 *)(iVar3 + 0x1dc),
                  (int)((ulong)*(undefined4 *)(iVar3 + 0x1dc) >> 0x10));
    FUN_10d8_54a0((int)*(undefined4 *)(iVar3 + 0x1e0),
                  (int)((ulong)*(undefined4 *)(iVar3 + 0x1e0) >> 0x10));
    FUN_10d8_54a0((int)*(undefined4 *)(iVar3 + 0x188),
                  (int)((ulong)*(undefined4 *)(iVar3 + 0x188) >> 0x10));
    DAT_1160_1858 = (undefined2 *)uStack_16;
  }
  return cVar2 != '\0';
}



/* ---- FUN_1078_3c11 @ 1078:3c11  (1701 octets) ---- */

void __cdecl16far FUN_1078_3c11(undefined4 param_1)

{
  undefined2 *puVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined2 uVar7;
  undefined2 unaff_SS;
  undefined4 uVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined2 uVar11;
  undefined2 uVar12;
  undefined2 uVar13;
  undefined2 uVar14;
  undefined *puStack_34;
  undefined *puStack_32;
  undefined2 uStack_30;
  undefined2 uStack_2e;
  undefined *puStack_2c;
  undefined *puStack_2a;
  undefined2 uStack_28;
  undefined2 uStack_26;
  undefined2 uStack_24;
  undefined *puStack_22;
  undefined2 uStack_20;
  undefined2 uStack_1e;
  int local_1c;
  int local_1a;
  uint local_18;
  int local_16;
  undefined2 local_14;
  int local_12;
  uint local_10;
  int local_e;
  undefined2 local_c;
  int local_a;
  undefined4 local_8;
  
  local_8 = CONCAT22(0x3c1c,(undefined2)local_8);
  FUN_1158_0444();
  uStack_1e = 0x1158;
  uStack_20 = 0x3c0b;
  puStack_2c = (undefined *)&uStack_24;
  uStack_24 = DAT_1160_1858;
  uStack_26 = 0x1158;
  uStack_28 = 0x3c01;
  puStack_34 = (undefined *)&puStack_2c;
  uStack_2e = 0x1158;
  uStack_30 = 0x3bf7;
  DAT_1160_1858 = &puStack_34;
  uVar7 = (undefined2)((ulong)param_1 >> 0x10);
  iVar6 = (int)param_1;
  local_8._2_2_ = (undefined2)((ulong)*(undefined4 *)(iVar6 + 0x1e4) >> 0x10);
  local_8._0_2_ = (undefined2)*(undefined4 *)(iVar6 + 0x1e4);
  puStack_32 = &stack0xfffe;
  puStack_2a = &stack0xfffe;
  puStack_22 = &stack0xfffe;
  FUN_10d8_31d2((undefined2)local_8,local_8._2_2_);
  FUN_10e0_2ffb((undefined2)local_8,local_8._2_2_,1);
  FUN_10e0_2ed2((undefined2)local_8,local_8._2_2_,0);
  FUN_10d8_31bf((undefined2)local_8,local_8._2_2_);
  local_18 = *(int *)(iVar6 + 0x40c) - 1;
  if (SBORROW2(*(int *)(iVar6 + 0x40c),1)) {
    local_18 = FUN_1158_043e(0x10d8);
  }
  local_16 = (int)local_18 >> 0xf;
  local_14 = (uint)local_14._1_1_ << 8;
  local_10 = *(uint *)(iVar6 + 0x40e);
  local_e = (int)local_10 >> 0xf;
  local_c = (uint)local_c._1_1_ << 8;
  cVar2 = FUN_10e0_2895((undefined2)local_8,local_8._2_2_,1,&local_18,unaff_SS);
  if (cVar2 == '\0') {
    FUN_1078_0bca(iVar6,uVar7);
  }
  local_8._2_2_ = (undefined2)((ulong)*(undefined4 *)(iVar6 + 0x17c) >> 0x10);
  local_8._0_2_ = (undefined2)*(undefined4 *)(iVar6 + 0x17c);
  FUN_10d8_533c((undefined2)local_8,local_8._2_2_);
  iVar3 = FUN_10d8_3b32((undefined2)local_8,local_8._2_2_);
  local_a = iVar3 + -1;
  if (SBORROW2(iVar3,1)) {
    local_a = FUN_1158_043e(0x10d8);
  }
  iVar3 = FUN_10d8_3daf((undefined2)local_8,local_8._2_2_);
  if (iVar3 <= local_a) {
    while( true ) {
      iVar4 = iVar3;
      uVar8 = FUN_10d8_3b4b((int)*(undefined4 *)(iVar6 + 0x1e4),
                            (int)((ulong)*(undefined4 *)(iVar6 + 0x1e4) >> 0x10),iVar3);
      FUN_10d8_3b70((undefined2)local_8,local_8._2_2_,uVar8,iVar4);
      if (iVar3 == local_a) break;
      iVar3 = iVar3 + 1;
    }
  }
  uVar14 = 0;
  uVar13 = 0;
  uVar12 = 0;
  uVar11 = 0;
  puVar9 = (undefined4 *)FUN_10d8_3b9b((undefined2)local_8,local_8._2_2_,0x3b2c,0x10d8);
  puVar1 = (undefined2 *)((int)*puVar9 + 0x5c);
  (*(code *)*puVar1)(0x10d8,puVar9,uVar11,uVar12,uVar13,uVar14);
  uVar14 = 0;
  uVar13 = 0;
  uVar12 = 0;
  uVar11 = 0;
  puVar9 = (undefined4 *)FUN_10d8_3b9b((undefined2)local_8,local_8._2_2_,0x3b3d,0x10d8);
  puVar1 = (undefined2 *)((int)*puVar9 + 0x5c);
  (*(code *)*puVar1)(0x10d8,puVar9,uVar11,uVar12,uVar13,uVar14);
  uVar14 = 0;
  uVar13 = 0;
  uVar12 = 0;
  uVar11 = 0;
  puVar9 = (undefined4 *)FUN_10d8_3b9b((undefined2)local_8,local_8._2_2_,0x3b48,0x10d8);
  puVar1 = (undefined2 *)((int)*puVar9 + 0x5c);
  (*(code *)*puVar1)(0x10d8,puVar9,uVar11,uVar12,uVar13,uVar14);
  uVar14 = 0;
  uVar13 = 0;
  uVar12 = 0;
  uVar11 = 0;
  puVar9 = (undefined4 *)FUN_10d8_3b9b((undefined2)local_8,local_8._2_2_,0x3b59,0x10d8);
  puVar1 = (undefined2 *)((int)*puVar9 + 0x5c);
  (*(code *)*puVar1)(0x10d8,puVar9,uVar11,uVar12,uVar13,uVar14);
  uVar14 = 0;
  uVar13 = 0;
  uVar12 = 0;
  uVar11 = 0;
  puVar9 = (undefined4 *)FUN_10d8_3b9b((undefined2)local_8,local_8._2_2_,0x3b65,0x10d8);
  puVar1 = (undefined2 *)((int)*puVar9 + 0x5c);
  (*(code *)*puVar1)(0x10d8,puVar9,uVar11,uVar12,uVar13,uVar14);
  uVar12 = 0;
  uVar11 = 0;
  puVar9 = (undefined4 *)FUN_10d8_3b9b((undefined2)local_8,local_8._2_2_,0x3b79,0x10d8);
  puVar1 = (undefined2 *)((int)*puVar9 + 0x60);
  (*(code *)*puVar1)(0x10d8,puVar9,uVar11,uVar12);
  uVar12 = 0;
  uVar11 = 0;
  puVar9 = (undefined4 *)FUN_10d8_3b9b((undefined2)local_8,local_8._2_2_,0x3b87,0x10d8);
  puVar1 = (undefined2 *)((int)*puVar9 + 0x60);
  (*(code *)*puVar1)(0x10d8,puVar9,uVar11,uVar12);
  puVar9 = (undefined4 *)FUN_10d8_3b9b((undefined2)local_8,local_8._2_2_,0x3b95,0x10d8);
  puVar1 = (undefined2 *)((int)*puVar9 + 0x60);
  (*(code *)*puVar1)(0x10d8,puVar9);
  puVar9 = (undefined4 *)FUN_10d8_3b9b((undefined2)local_8,local_8._2_2_,0x3ba9,0x10d8);
  puVar1 = (undefined2 *)((int)*puVar9 + 0x60);
  (*(code *)*puVar1)(0x10d8,puVar9);
  puVar9 = (undefined4 *)FUN_10d8_3b9b((undefined2)local_8,local_8._2_2_,0x3bb9,0x10d8);
  puVar1 = (undefined2 *)((int)*puVar9 + 0x60);
  (*(code *)*puVar1)(0x10d8,puVar9);
  FUN_10d8_44be((undefined2)local_8,local_8._2_2_);
  local_8 = *(ulong *)(iVar6 + 0x1ec);
  FUN_10d8_31d2((int)local_8,(int)(local_8 >> 0x10));
  FUN_10e0_2ffb((int)local_8,(int)(local_8 >> 0x10),1);
  FUN_10e0_2ed2((int)local_8,(int)(local_8 >> 0x10),0);
  FUN_10d8_31bf((int)local_8,(int)(local_8 >> 0x10));
  local_1c = *(int *)(iVar6 + 0x40c) + -1;
  if (SBORROW2(*(int *)(iVar6 + 0x40c),1)) {
    local_1c = FUN_1158_043e(0x10d8);
  }
  local_1a = local_1c >> 0xf;
  local_18 = local_18 & 0xff00;
  local_14 = *(int *)(iVar6 + 0x40e);
  local_12 = (int)local_14 >> 0xf;
  local_10 = local_10 & 0xff00;
  local_c = 1;
  local_a = 0;
  local_8 = local_8 & 0xffffff00;
  cVar2 = FUN_10e0_2895((int)*(undefined4 *)(iVar6 + 0x1ec),
                        (int)((ulong)*(undefined4 *)(iVar6 + 0x1ec) >> 0x10),2,&local_1c,unaff_SS);
  if (cVar2 == '\0') {
    FUN_1078_0bca(iVar6,uVar7);
  }
  local_8 = *(ulong *)(iVar6 + 0x1dc);
  FUN_10d8_533c((int)local_8,(int)(local_8 >> 0x10));
  iVar3 = FUN_10d8_3b32((int)local_8,(int)(local_8 >> 0x10));
  iVar4 = iVar3 + -1;
  if (SBORROW2(iVar3,1)) {
    iVar4 = FUN_1158_043e(0x10d8);
  }
  local_a = iVar4;
  iVar3 = FUN_10d8_3daf((int)local_8,(int)(local_8 >> 0x10));
  if (iVar3 <= local_a) {
    while( true ) {
      iVar4 = iVar3;
      uVar8 = FUN_10d8_3b4b((int)*(undefined4 *)(iVar6 + 0x1ec),
                            (int)((ulong)*(undefined4 *)(iVar6 + 0x1ec) >> 0x10),iVar3);
      FUN_10d8_3b70((int)local_8,(int)(local_8 >> 0x10),uVar8,iVar4);
      if (iVar3 == local_a) break;
      iVar3 = iVar3 + 1;
    }
  }
  uVar12 = 0;
  uVar11 = 0;
  puVar9 = (undefined4 *)FUN_10d8_3b9b((int)local_8,(int)(local_8 >> 0x10),0x3bc9,0x10d8);
  puVar1 = (undefined2 *)((int)*puVar9 + 0x60);
  (*(code *)*puVar1)(0x10d8,puVar9,uVar11,uVar12);
  uVar12 = 0;
  uVar11 = 0;
  puVar9 = (undefined4 *)FUN_10d8_3b9b((int)local_8,(int)(local_8 >> 0x10),0x3bd5,0x10d8);
  puVar1 = (undefined2 *)((int)*puVar9 + 0x60);
  (*(code *)*puVar1)(0x10d8,puVar9,uVar11,uVar12);
  uVar12 = 0;
  uVar11 = 0;
  puVar9 = (undefined4 *)FUN_10d8_3b9b((int)local_8,(int)(local_8 >> 0x10),0x3be8,0x10d8);
  puVar1 = (undefined2 *)((int)*puVar9 + 0x60);
  (*(code *)*puVar1)(0x10d8,puVar9,uVar11,uVar12);
  FUN_10d8_44be((int)local_8,(int)(local_8 >> 0x10));
  iVar3 = *(int *)(iVar6 + 0x40c) + -1;
  if (SBORROW2(*(int *)(iVar6 + 0x40c),1)) {
    iVar3 = FUN_1158_043e(0x10d8);
  }
  local_1a = iVar3 >> 0xf;
  local_18 = local_18 & 0xff00;
  local_14 = *(uint *)(iVar6 + 0x40e);
  local_12 = (int)local_14 >> 0xf;
  local_10 = local_10 & 0xff00;
  local_c = 2;
  local_a = 0;
  local_8 = local_8 & 0xffffff00;
  local_1c = iVar3;
  cVar2 = FUN_10e0_2895((int)*(undefined4 *)(iVar6 + 0x1ec),
                        (int)((ulong)*(undefined4 *)(iVar6 + 0x1ec) >> 0x10),2,&local_1c,unaff_SS);
  if (cVar2 == '\0') {
    FUN_1078_0bca(iVar6,uVar7);
  }
  local_8._2_2_ = (undefined2)((ulong)*(undefined4 *)(iVar6 + 0x1e0) >> 0x10);
  local_8._0_2_ = (undefined2)*(undefined4 *)(iVar6 + 0x1e0);
  FUN_10d8_533c((undefined2)local_8,local_8._2_2_);
  iVar3 = FUN_10d8_3b32((undefined2)local_8,local_8._2_2_);
  iVar4 = iVar3 + -1;
  if (SBORROW2(iVar3,1)) {
    iVar4 = FUN_1158_043e(0x10d8);
  }
  local_a = iVar4;
  iVar3 = FUN_10d8_3daf((undefined2)local_8,local_8._2_2_);
  if (iVar3 <= local_a) {
    while( true ) {
      iVar4 = iVar3;
      uVar8 = FUN_10d8_3b4b((int)*(undefined4 *)(iVar6 + 0x1ec),
                            (int)((ulong)*(undefined4 *)(iVar6 + 0x1ec) >> 0x10),iVar3);
      FUN_10d8_3b70((undefined2)local_8,local_8._2_2_,uVar8,iVar4);
      if (iVar3 == local_a) break;
      iVar3 = iVar3 + 1;
    }
  }
  uVar12 = 0;
  uVar11 = 0;
  puVar9 = (undefined4 *)FUN_10d8_3b9b((undefined2)local_8,local_8._2_2_,0x3bc9,0x10d8);
  puVar10 = (undefined4 *)puVar9;
  puVar1 = (undefined2 *)((int)*puVar9 + 0x60);
  (*(code *)*puVar1)(0x10d8,puVar9,uVar11,uVar12);
  uVar12 = 0;
  uVar11 = 0;
  puVar9 = (undefined4 *)FUN_10d8_3b9b((undefined2)local_8,local_8._2_2_,0x3bd5,0x10d8);
  puVar1 = (undefined2 *)((int)*puVar9 + 0x60);
  (*(code *)*puVar1)(0x10d8,puVar9,uVar11,uVar12);
  uVar12 = 0;
  uVar11 = 0;
  puVar9 = (undefined4 *)FUN_10d8_3b9b((undefined2)local_8,local_8._2_2_,0x3be8,0x10d8);
  puVar1 = (undefined2 *)((int)*puVar9 + 0x60);
  (*(code *)*puVar1)(0x10d8,puVar9,uVar11,uVar12);
  FUN_10d8_44be((undefined2)local_8,local_8._2_2_);
  local_8._2_2_ = (undefined2)((ulong)*(undefined4 *)(iVar6 + 0x1e8) >> 0x10);
  local_8._0_2_ = (undefined2)*(undefined4 *)(iVar6 + 0x1e8);
  FUN_10d8_31d2((undefined2)local_8,local_8._2_2_);
  FUN_10e0_2ffb((undefined2)local_8,local_8._2_2_,1);
  FUN_10e0_2ed2((undefined2)local_8,local_8._2_2_,0);
  FUN_10d8_31bf((undefined2)local_8,local_8._2_2_);
  uVar5 = *(int *)(iVar6 + 0x40c) - 1;
  if (SBORROW2(*(int *)(iVar6 + 0x40c),1)) {
    uVar5 = FUN_1158_043e(0x10d8);
  }
  local_16 = (int)uVar5 >> 0xf;
  local_14 = local_14 & 0xff00;
  local_10 = *(int *)(iVar6 + 0x40e);
  local_e = (int)local_10 >> 0xf;
  local_c = local_c & 0xff00;
  local_18 = uVar5;
  cVar2 = FUN_10e0_2895((undefined2)local_8,local_8._2_2_,1,&local_18,unaff_SS);
  if (cVar2 == '\0') {
    FUN_1078_0bca(iVar6,uVar7);
  }
  local_8._2_2_ = (undefined2)((ulong)*(undefined4 *)(iVar6 + 0x188) >> 0x10);
  local_8._0_2_ = (undefined2)*(undefined4 *)(iVar6 + 0x188);
  FUN_10d8_533c((undefined2)local_8,local_8._2_2_);
  iVar3 = FUN_10d8_3b32((undefined2)local_8,local_8._2_2_);
  iVar4 = iVar3 + -1;
  if (SBORROW2(iVar3,1)) {
    iVar4 = FUN_1158_043e(0x10d8);
  }
  local_a = iVar4;
  iVar3 = FUN_10d8_3daf((undefined2)local_8,local_8._2_2_);
  if (iVar3 <= local_a) {
    while( true ) {
      iVar4 = iVar3;
      uVar8 = FUN_10d8_3b4b((int)*(undefined4 *)(iVar6 + 0x1e8),
                            (int)((ulong)*(undefined4 *)(iVar6 + 0x1e8) >> 0x10),iVar3);
      FUN_10d8_3b70((undefined2)local_8,local_8._2_2_,uVar8,iVar4);
      if (iVar3 == local_a) break;
      iVar3 = iVar3 + 1;
    }
  }
  FUN_10d8_44be((undefined2)local_8,local_8._2_2_);
  FUN_1078_2e06(iVar6,uVar7);
  FUN_1078_2baf(iVar6,uVar7,0xfffa,0xffff);
  FUN_1078_2cb7(iVar6,uVar7,0);
  FUN_1078_3726(iVar6,uVar7);
  DAT_1160_1858 = (undefined **)puVar10;
  FUN_10d8_31d2((int)*(undefined4 *)(iVar6 + 0x1e4),
                (int)((ulong)*(undefined4 *)(iVar6 + 0x1e4) >> 0x10));
  FUN_10d8_31d2((int)*(undefined4 *)(iVar6 + 0x1ec),
                (int)((ulong)*(undefined4 *)(iVar6 + 0x1ec) >> 0x10));
  FUN_10d8_31d2((int)*(undefined4 *)(iVar6 + 0x1e8),
                (int)((ulong)*(undefined4 *)(iVar6 + 0x1e8) >> 0x10));
  return;
}



/* ---- FUN_1078_454f @ 1078:454f  (252 octets) ---- */

void __cdecl16far FUN_1078_454f(undefined4 param_1)

{
  undefined2 *puVar1;
  char cVar2;
  int iVar3;
  undefined2 uVar4;
  char *pcVar5;
  undefined2 unaff_SS;
  longdouble in_ST0;
  undefined4 *puVar6;
  char *pcStack_21a;
  char *pcStack_218;
  char *pcStack_216;
  char *pcStack_214;
  undefined2 local_116;
  undefined2 local_114;
  undefined local_112;
  char *local_10e;
  undefined2 local_10c;
  double local_be;
  undefined2 local_70;
  undefined2 local_34;
  undefined2 local_32;
  undefined2 local_30;
  undefined2 local_2e;
  undefined2 uStack_6;
  
  uStack_6 = 0x455a;
  FUN_1158_0444();
  if (DAT_1160_1e06 < 3) {
    local_70 = 1;
  }
  else {
    local_70 = 2;
  }
  uVar4 = (undefined2)((ulong)param_1 >> 0x10);
  iVar3 = (int)param_1;
  local_34 = *(undefined2 *)(iVar3 + 0x1dc);
  local_32 = *(undefined2 *)(iVar3 + 0x1de);
  local_30 = *(undefined2 *)(iVar3 + 0x1e0);
  local_2e = *(undefined2 *)(iVar3 + 0x1e2);
  pcStack_214 = (char *)((ulong)*(undefined4 *)(iVar3 + 0x218) >> 0x10);
  pcStack_216 = (char *)(char *)*(undefined4 *)(iVar3 + 0x218);
  pcStack_218 = (char *)0x1158;
  pcStack_21a = (char *)0x45a8;
  local_10e = pcStack_216;
  local_10c = pcStack_214;
  FUN_10d8_31d2();
  pcStack_214 = (char *)0x1;
  pcStack_216 = (char *)local_10c;
  pcStack_218 = local_10e;
  pcStack_21a = (char *)0x10d8;
  FUN_10e0_2ffb();
  pcStack_214 = (char *)0x0;
  pcStack_216 = (char *)local_10c;
  pcStack_218 = local_10e;
  pcStack_21a = (char *)s_iTime_1160_10dc + 4;
  FUN_10e0_2ed2();
  pcStack_214 = (char *)local_10c;
  pcStack_216 = local_10e;
  pcStack_218 = (char *)s_iTime_1160_10dc + 4;
  pcStack_21a = (char *)0x45cd;
  FUN_10d8_31bf();
  pcStack_214 = (char *)0x10d8;
  pcStack_216 = (char *)0x42ef;
  pcStack_21a = (char *)DAT_1160_1858;
  local_116 = 1;
  local_114 = 0;
  local_112 = 0;
  DAT_1160_1858 = &pcStack_21a;
  pcStack_218 = &stack0xfffe;
  cVar2 = FUN_10e0_2895(local_10e,local_10c,0,&local_116,unaff_SS);
  if (cVar2 == '\0') {
    pcVar5 = (char *)s_Currency_1160_1072 + 6;
    FUN_1078_0b7b(iVar3,uVar4);
  }
  else {
    pcVar5 = (char *)0x10d8;
    puVar6 = (undefined4 *)FUN_10d8_3b9b(local_10e,local_10c,0x42e4,(char *)s_iTime_1160_10dc + 4);
    puVar1 = (undefined2 *)((int)*puVar6 + 0x40);
    (*(code *)*puVar1)(0x10d8,puVar6);
    local_be = (double)in_ST0;
  }
  DAT_1160_1858 = (char **)pcStack_21a;
  pcStack_216 = (char *)0x464b;
  pcStack_218 = (char *)local_10c;
  pcStack_21a = local_10e;
  pcStack_214 = pcVar5;
  FUN_10d8_31d2();
  return;
}



/* ---- FUN_1078_620b @ 1078:620b  (127 octets) ---- */

int __stdcall16far FUN_1078_620b(undefined4 param_1)

{
  int iVar1;
  byte extraout_AH;
  byte extraout_AH_00;
  byte bVar2;
  int iVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  int iVar6;
  
  uVar5 = 0x6216;
  FUN_1158_0444();
  uVar4 = (undefined2)((ulong)param_1 >> 0x10);
  iVar3 = (int)param_1;
  *(undefined *)(iVar3 + 0x411) = 0;
  iVar1 = FUN_1078_454f(iVar3,uVar4,uVar5);
  iVar6 = iVar1;
  if (iVar1 == 1) {
    iVar1 = FUN_1010_36fb();
  }
  bVar2 = (byte)((uint)iVar1 >> 8);
  if (iVar6 == 2) {
    if (*(char *)(iVar3 + 0x409) == '\0') {
      FUN_1010_36fb();
      bVar2 = extraout_AH;
    }
    else {
      iVar1 = FUN_1000_3c6b();
      if (iVar1 == 6) {
        *(undefined *)(iVar3 + 0x411) = 1;
        iVar1 = FUN_1078_454f(iVar3,uVar4);
        iVar6 = iVar1;
      }
      bVar2 = (byte)((uint)iVar1 >> 8);
    }
  }
  if (iVar6 == 0) {
    FUN_1010_3675();
    bVar2 = extraout_AH_00;
  }
  iVar1 = (uint)bVar2 * 0x100;
  if (iVar6 == 0) {
    iVar1 = iVar1 + 1;
  }
  return iVar1;
}



/* ---- TFormSEDD_Decisions_Timer1Timer @ 1078:628a  (223 octets) ---- */

void __stdcall16far TFormSEDD_Decisions_Timer1Timer(undefined4 param_1)

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
  
  _local_6 = CONCAT22(unaff_CS,0x6295);
  FUN_1158_0444();
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  uVar1 = *(undefined4 *)((int)param_1 + 0x3e4);
  uVar4 = (undefined2)((ulong)uVar1 >> 0x10);
  local_6 = (int)uVar1;
  local_8 = (undefined2)((ulong)*(undefined4 *)(local_6 + 0x34) >> 0x10);
  local_a = (undefined2)*(undefined4 *)(local_6 + 0x34);
  uVar2 = FUN_1128_121a(local_a,local_8);
  if ((uVar2 & 8) == 0) {
    if (*(char *)((int)param_1 + 0x410) == '\0') {
      puVar6 = local_10a;
      uVar3 = unaff_SS;
      FUN_1138_1d53(local_6,uVar4);
      FUN_1158_17e7(0xff,0x268,0x1160,puVar6,uVar3);
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
    FUN_1138_1d8c(local_6,uVar4,0x268,0x1160);
    uVar2 = FUN_1128_121a(local_a,local_8);
    FUN_1128_1233(local_a,local_8,uVar2 & 0xfff7);
    FUN_1128_0fdf(local_a,local_8,0,0);
  }
  return;
}



/* ---- TFormSEDD_Decisions_FormKeyPress @ 1078:6369  (27 octets) ---- */

void __stdcall16far
TFormSEDD_Decisions_FormKeyPress(undefined2 param_1_00,undefined2 param_2,char *param_1)

{
  FUN_1158_0444();
  if (*param_1 == '.') {
    *param_1 = ',';
  }
  return;
}



/* ---- TFormSEDD_Decisions_FormKeyDown @ 1078:6384  (63 octets) ---- */

void __stdcall16far TFormSEDD_Decisions_FormKeyDown(void)

{
  FUN_1158_0444();
  return;
}



/* ---- TFormSEDD_Decisions_HelpBtnClick @ 1078:63c3  (45 octets) ---- */

void __stdcall16far TFormSEDD_Decisions_HelpBtnClick(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined2 uVar3;
  
  FUN_1158_0444();
  uVar1 = *(undefined4 *)((int)param_1 + 0x3ec);
  uVar3 = (undefined2)((ulong)uVar1 >> 0x10);
  iVar2 = (int)uVar1;
  FUN_1140_77b2((int)DAT_1160_2c2a,(int)((ulong)DAT_1160_2c2a >> 0x10),*(undefined2 *)(iVar2 + 0xac)
                ,*(undefined2 *)(iVar2 + 0xae),1);
  return;
}



/* ---- FUN_1078_63f0 @ 1078:63f0  (123 octets) ---- */

void __stdcall16far FUN_1078_63f0(undefined4 *param_1,undefined *param_2,undefined4 param_3)

{
  undefined2 *puVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  
  uVar4 = 0x63fb;
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



/* ---- TFormSEDD_Decisions_DBEdit1MouseDown @ 1078:646b  (142 octets) ---- */

void __stdcall16far TFormSEDD_Decisions_DBEdit1MouseDown(undefined4 param_1)

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
      *(undefined2 *)(iVar1 + 0x6d) = 0x63f0;
      *(undefined2 *)(iVar1 + 0x6f) = (char *)s_Currency_1160_1072 + 6;
      *(undefined2 *)(iVar1 + 0x71) = (int)param_1;
      *(undefined2 *)(iVar1 + 0x73) = (int)((ulong)param_1 >> 0x10);
    }
  }
  return;
}



/* ---- TFormSEDD_Decisions_Panel16MouseDown @ 1078:64f9  (105 octets) ---- */

void __stdcall16far TFormSEDD_Decisions_Panel16MouseDown(void)

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



/* ---- TFormSEDD_Decisions_CopierBtnClick @ 1078:69b6  (1 octets) ---- */

void TFormSEDD_Decisions_CopierBtnClick(undefined2 param_1,undefined4 param_2)

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
  undefined auStack_406 [256];
  undefined auStack_306 [256];
  undefined auStack_206 [256];
  int iStack_106;
  undefined2 uStack_104;
  char acStack_102 [252];
  undefined2 uStack_6;
  
  uStack_6 = 0x69c1;
  FUN_1158_0444();
  uVar4 = (undefined2)((ulong)param_2 >> 0x10);
  iVar3 = (int)param_2;
  uStack_104 = (undefined2)((ulong)*(undefined4 *)(iVar3 + 0x2cc) >> 0x10);
  iStack_106 = (int)*(undefined4 *)(iVar3 + 0x2cc);
  FUN_1120_49e3(iStack_106,uStack_104);
  puVar7 = auStack_206;
  uVar8 = unaff_SS;
  FUN_1158_17cd(0x1dfa,0x1160);
  FUN_1158_184c(0x69a8,0x1158);
  puVar5 = auStack_306;
  uVar6 = unaff_SS;
  FUN_1138_1d53((int)*(undefined4 *)(iVar3 + 0x1c8),
                (int)((ulong)*(undefined4 *)(iVar3 + 0x1c8) >> 0x10));
  FUN_1158_184c(puVar5,uVar6);
  FUN_1158_184c(0x69aa,0x1158);
  puVar5 = auStack_406;
  uVar6 = unaff_SS;
  FUN_1150_08a9(*(int *)(iVar3 + 0x40c),*(int *)(iVar3 + 0x40c) >> 0xf);
  FUN_1158_184c(puVar5,uVar6);
  FUN_1158_17e7(0xff,acStack_102,unaff_SS,puVar7,uVar8);
  puVar2 = (undefined4 *)*(undefined4 *)(iStack_106 + 0xec);
  puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
  (*(code *)*puVar1)(0x1158,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),acStack_102);
  puVar7 = auStack_206;
  uVar8 = unaff_SS;
  FUN_1138_1d53((int)*(undefined4 *)(iVar3 + 0x1bc),
                (int)((ulong)*(undefined4 *)(iVar3 + 0x1bc) >> 0x10));
  FUN_1158_184c(0x69aa,0x1138);
  puVar5 = auStack_306;
  uVar6 = unaff_SS;
  FUN_1150_08a9(*(int *)(iVar3 + 0x40e),*(int *)(iVar3 + 0x40e) >> 0xf);
  FUN_1158_184c(puVar5,uVar6);
  FUN_1158_184c(0x69a8,0x1158);
  FUN_1158_184c(0x69ac,0x1158);
  FUN_1158_17e7(0xff,acStack_102,unaff_SS,puVar7,uVar8);
  puVar2 = (undefined4 *)*(undefined4 *)(iStack_106 + 0xec);
  puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
  (*(code *)*puVar1)(0x1158,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),acStack_102);
  acStack_102[0] = '\0';
  func_0x1078656c(0x1158,&stack0xfffe,*(undefined2 *)(iVar3 + 0x19c),*(undefined2 *)(iVar3 + 0x19e),
                  0xff,acStack_102);
  if (acStack_102[0] != '\0') {
    puVar2 = (undefined4 *)*(undefined4 *)(iStack_106 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)((char *)s_Currency_1160_1072 + 6,(undefined4 *)puVar2,
                       (int)((ulong)puVar2 >> 0x10),acStack_102);
  }
  acStack_102[0] = '\0';
  func_0x1078656c((char *)s_Currency_1160_1072 + 6,&stack0xfffe,*(undefined2 *)(iVar3 + 0x2e0),
                  *(undefined2 *)(iVar3 + 0x2e2),0xff,acStack_102);
  func_0x1078656c((char *)s_Currency_1160_1072 + 6,&stack0xfffe,*(undefined2 *)(iVar3 + 0x2e4),
                  *(undefined2 *)(iVar3 + 0x2e6),0xff,acStack_102);
  if (acStack_102[0] != '\0') {
    puVar2 = (undefined4 *)*(undefined4 *)(iStack_106 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)((char *)s_Currency_1160_1072 + 6,(undefined4 *)puVar2,
                       (int)((ulong)puVar2 >> 0x10),acStack_102);
  }
  acStack_102[0] = '\0';
  func_0x1078656c((char *)s_Currency_1160_1072 + 6,&stack0xfffe,*(undefined2 *)(iVar3 + 0x2e8),
                  *(undefined2 *)(iVar3 + 0x2ea),0xff,acStack_102);
  func_0x1078656c((char *)s_Currency_1160_1072 + 6,&stack0xfffe,*(undefined2 *)(iVar3 + 0x2ec),
                  *(undefined2 *)(iVar3 + 0x2ee),0xff,acStack_102);
  if (acStack_102[0] != '\0') {
    puVar2 = (undefined4 *)*(undefined4 *)(iStack_106 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)((char *)s_Currency_1160_1072 + 6,(undefined4 *)puVar2,
                       (int)((ulong)puVar2 >> 0x10),acStack_102);
  }
  acStack_102[0] = '\0';
  func_0x1078656c((char *)s_Currency_1160_1072 + 6,&stack0xfffe,*(undefined2 *)(iVar3 + 0x2f0),
                  *(undefined2 *)(iVar3 + 0x2f2),0xff,acStack_102);
  func_0x1078656c((char *)s_Currency_1160_1072 + 6,&stack0xfffe,*(undefined2 *)(iVar3 + 0x2f4),
                  *(undefined2 *)(iVar3 + 0x2f6),0xff,acStack_102);
  if (acStack_102[0] != '\0') {
    puVar2 = (undefined4 *)*(undefined4 *)(iStack_106 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)((char *)s_Currency_1160_1072 + 6,(undefined4 *)puVar2,
                       (int)((ulong)puVar2 >> 0x10),acStack_102);
  }
  acStack_102[0] = '\0';
  func_0x1078656c((char *)s_Currency_1160_1072 + 6,&stack0xfffe,*(undefined2 *)(iVar3 + 0x2f8),
                  *(undefined2 *)(iVar3 + 0x2fa),0xff,acStack_102);
  func_0x1078656c((char *)s_Currency_1160_1072 + 6,&stack0xfffe,*(undefined2 *)(iVar3 + 0x2fc),
                  *(undefined2 *)(iVar3 + 0x2fe),0xff,acStack_102);
  if (acStack_102[0] != '\0') {
    puVar2 = (undefined4 *)*(undefined4 *)(iStack_106 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)((char *)s_Currency_1160_1072 + 6,(undefined4 *)puVar2,
                       (int)((ulong)puVar2 >> 0x10),acStack_102);
  }
  acStack_102[0] = '\0';
  func_0x1078656c((char *)s_Currency_1160_1072 + 6,&stack0xfffe,*(undefined2 *)(iVar3 + 0x300),
                  *(undefined2 *)(iVar3 + 0x302),0xff,acStack_102);
  func_0x1078656c((char *)s_Currency_1160_1072 + 6,&stack0xfffe,*(undefined2 *)(iVar3 + 0x304),
                  *(undefined2 *)(iVar3 + 0x306),0xff,acStack_102);
  if (acStack_102[0] != '\0') {
    puVar2 = (undefined4 *)*(undefined4 *)(iStack_106 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)((char *)s_Currency_1160_1072 + 6,(undefined4 *)puVar2,
                       (int)((ulong)puVar2 >> 0x10),acStack_102);
  }
  acStack_102[0] = '\0';
  func_0x1078656c((char *)s_Currency_1160_1072 + 6,&stack0xfffe,*(undefined2 *)(iVar3 + 0x198),
                  *(undefined2 *)(iVar3 + 0x19a),0xff,acStack_102);
  if (acStack_102[0] != '\0') {
    puVar2 = (undefined4 *)*(undefined4 *)(iStack_106 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)((char *)s_Currency_1160_1072 + 6,(undefined4 *)puVar2,
                       (int)((ulong)puVar2 >> 0x10),acStack_102);
  }
  acStack_102[0] = '\0';
  func_0x1078656c((char *)s_Currency_1160_1072 + 6,&stack0xfffe,*(undefined2 *)(iVar3 + 0x308),
                  *(undefined2 *)(iVar3 + 0x30a),0xff,acStack_102);
  func_0x1078656c((char *)s_Currency_1160_1072 + 6,&stack0xfffe,*(undefined2 *)(iVar3 + 0x30c),
                  *(undefined2 *)(iVar3 + 0x30e),0xff,acStack_102);
  if (acStack_102[0] != '\0') {
    puVar2 = (undefined4 *)*(undefined4 *)(iStack_106 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)((char *)s_Currency_1160_1072 + 6,(undefined4 *)puVar2,
                       (int)((ulong)puVar2 >> 0x10),acStack_102);
  }
  acStack_102[0] = '\0';
  func_0x1078656c((char *)s_Currency_1160_1072 + 6,&stack0xfffe,*(undefined2 *)(iVar3 + 0x310),
                  *(undefined2 *)(iVar3 + 0x312),0xff,acStack_102);
  func_0x1078656c((char *)s_Currency_1160_1072 + 6,&stack0xfffe,*(undefined2 *)(iVar3 + 0x314),
                  *(undefined2 *)(iVar3 + 0x316),0xff,acStack_102);
  if (acStack_102[0] != '\0') {
    puVar2 = (undefined4 *)*(undefined4 *)(iStack_106 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)((char *)s_Currency_1160_1072 + 6,(undefined4 *)puVar2,
                       (int)((ulong)puVar2 >> 0x10),acStack_102);
  }
  acStack_102[0] = '\0';
  func_0x1078656c((char *)s_Currency_1160_1072 + 6,&stack0xfffe,*(undefined2 *)(iVar3 + 0x318),
                  *(undefined2 *)(iVar3 + 0x31a),0xff,acStack_102);
  func_0x1078656c((char *)s_Currency_1160_1072 + 6,&stack0xfffe,*(undefined2 *)(iVar3 + 0x400),
                  *(undefined2 *)(iVar3 + 0x402),0xff,acStack_102);
  if (acStack_102[0] != '\0') {
    puVar2 = (undefined4 *)*(undefined4 *)(iStack_106 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)((char *)s_Currency_1160_1072 + 6,(undefined4 *)puVar2,
                       (int)((ulong)puVar2 >> 0x10),acStack_102);
  }
  acStack_102[0] = '\0';
  func_0x1078656c((char *)s_Currency_1160_1072 + 6,&stack0xfffe,*(undefined2 *)(iVar3 + 0x1a0),
                  *(undefined2 *)(iVar3 + 0x1a2),0xff,acStack_102);
  func_0x1078656c((char *)s_Currency_1160_1072 + 6,&stack0xfffe,*(undefined2 *)(iVar3 + 0x220),
                  *(undefined2 *)(iVar3 + 0x222),0xff,acStack_102);
  func_0x1078656c((char *)s_Currency_1160_1072 + 6,&stack0xfffe,*(undefined2 *)(iVar3 + 0x238),
                  *(undefined2 *)(iVar3 + 0x23a),0xff,acStack_102);
  if (acStack_102[0] != '\0') {
    puVar2 = (undefined4 *)*(undefined4 *)(iStack_106 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)((char *)s_Currency_1160_1072 + 6,(undefined4 *)puVar2,
                       (int)((ulong)puVar2 >> 0x10),acStack_102);
  }
  acStack_102[0] = '\0';
  func_0x1078656c((char *)s_Currency_1160_1072 + 6,&stack0xfffe,*(undefined2 *)(iVar3 + 800),
                  *(undefined2 *)(iVar3 + 0x322),0xff,acStack_102);
  func_0x1078656c((char *)s_Currency_1160_1072 + 6,&stack0xfffe,*(undefined2 *)(iVar3 + 0x224),
                  *(undefined2 *)(iVar3 + 0x226),0xff,acStack_102);
  func_0x1078656c((char *)s_Currency_1160_1072 + 6,&stack0xfffe,*(undefined2 *)(iVar3 + 0x23c),
                  *(undefined2 *)(iVar3 + 0x23e),0xff,acStack_102);
  if (acStack_102[0] != '\0') {
    puVar2 = (undefined4 *)*(undefined4 *)(iStack_106 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)((char *)s_Currency_1160_1072 + 6,(undefined4 *)puVar2,
                       (int)((ulong)puVar2 >> 0x10),acStack_102);
  }
  acStack_102[0] = '\0';
  func_0x1078656c((char *)s_Currency_1160_1072 + 6,&stack0xfffe,*(undefined2 *)(iVar3 + 0x324),
                  *(undefined2 *)(iVar3 + 0x326),0xff,acStack_102);
  func_0x1078656c((char *)s_Currency_1160_1072 + 6,&stack0xfffe,*(undefined2 *)(iVar3 + 0x228),
                  *(undefined2 *)(iVar3 + 0x22a),0xff,acStack_102);
  func_0x1078656c((char *)s_Currency_1160_1072 + 6,&stack0xfffe,*(undefined2 *)(iVar3 + 0x240),
                  *(undefined2 *)(iVar3 + 0x242),0xff,acStack_102);
  if (acStack_102[0] != '\0') {
    puVar2 = (undefined4 *)*(undefined4 *)(iStack_106 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)((char *)s_Currency_1160_1072 + 6,(undefined4 *)puVar2,
                       (int)((ulong)puVar2 >> 0x10),acStack_102);
  }
  acStack_102[0] = '\0';
  func_0x1078656c((char *)s_Currency_1160_1072 + 6,&stack0xfffe,*(undefined2 *)(iVar3 + 0x328),
                  *(undefined2 *)(iVar3 + 0x32a),0xff,acStack_102);
  func_0x1078656c((char *)s_Currency_1160_1072 + 6,&stack0xfffe,*(undefined2 *)(iVar3 + 0x22c),
                  *(undefined2 *)(iVar3 + 0x22e),0xff,acStack_102);
  func_0x1078656c((char *)s_Currency_1160_1072 + 6,&stack0xfffe,*(undefined2 *)(iVar3 + 0x244),
                  *(undefined2 *)(iVar3 + 0x246),0xff,acStack_102);
  if (acStack_102[0] != '\0') {
    puVar2 = (undefined4 *)*(undefined4 *)(iStack_106 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)((char *)s_Currency_1160_1072 + 6,(undefined4 *)puVar2,
                       (int)((ulong)puVar2 >> 0x10),acStack_102);
  }
  acStack_102[0] = '\0';
  func_0x1078656c((char *)s_Currency_1160_1072 + 6,&stack0xfffe,*(undefined2 *)(iVar3 + 0x32c),
                  *(undefined2 *)(iVar3 + 0x32e),0xff,acStack_102);
  func_0x1078656c((char *)s_Currency_1160_1072 + 6,&stack0xfffe,*(undefined2 *)(iVar3 + 0x230),
                  *(undefined2 *)(iVar3 + 0x232),0xff,acStack_102);
  func_0x1078656c((char *)s_Currency_1160_1072 + 6,&stack0xfffe,*(undefined2 *)(iVar3 + 0x248),
                  *(undefined2 *)(iVar3 + 0x24a),0xff,acStack_102);
  if (acStack_102[0] != '\0') {
    puVar2 = (undefined4 *)*(undefined4 *)(iStack_106 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)((char *)s_Currency_1160_1072 + 6,(undefined4 *)puVar2,
                       (int)((ulong)puVar2 >> 0x10),acStack_102);
  }
  acStack_102[0] = '\0';
  func_0x1078656c((char *)s_Currency_1160_1072 + 6,&stack0xfffe,*(undefined2 *)(iVar3 + 0x1a4),
                  *(undefined2 *)(iVar3 + 0x1a6),0xff,acStack_102);
  func_0x1078656c((char *)s_Currency_1160_1072 + 6,&stack0xfffe,*(undefined2 *)(iVar3 + 0x250),
                  *(undefined2 *)(iVar3 + 0x252),0xff,acStack_102);
  func_0x1078656c((char *)s_Currency_1160_1072 + 6,&stack0xfffe,*(undefined2 *)(iVar3 + 0x268),
                  *(undefined2 *)(iVar3 + 0x26a),0xff,acStack_102);
  if (acStack_102[0] != '\0') {
    puVar2 = (undefined4 *)*(undefined4 *)(iStack_106 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)((char *)s_Currency_1160_1072 + 6,(undefined4 *)puVar2,
                       (int)((ulong)puVar2 >> 0x10),acStack_102);
  }
  acStack_102[0] = '\0';
  func_0x1078656c((char *)s_Currency_1160_1072 + 6,&stack0xfffe,*(undefined2 *)(iVar3 + 0x330),
                  *(undefined2 *)(iVar3 + 0x332),0xff,acStack_102);
  func_0x1078656c((char *)s_Currency_1160_1072 + 6,&stack0xfffe,*(undefined2 *)(iVar3 + 0x254),
                  *(undefined2 *)(iVar3 + 0x256),0xff,acStack_102);
  func_0x1078656c((char *)s_Currency_1160_1072 + 6,&stack0xfffe,*(undefined2 *)(iVar3 + 0x26c),
                  *(undefined2 *)(iVar3 + 0x26e),0xff,acStack_102);
  if (acStack_102[0] != '\0') {
    puVar2 = (undefined4 *)*(undefined4 *)(iStack_106 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)((char *)s_Currency_1160_1072 + 6,(undefined4 *)puVar2,
                       (int)((ulong)puVar2 >> 0x10),acStack_102);
  }
  acStack_102[0] = '\0';
  func_0x1078656c((char *)s_Currency_1160_1072 + 6,&stack0xfffe,*(undefined2 *)(iVar3 + 0x334),
                  *(undefined2 *)(iVar3 + 0x336),0xff,acStack_102);
  func_0x1078656c((char *)s_Currency_1160_1072 + 6,&stack0xfffe,*(undefined2 *)(iVar3 + 600),
                  *(undefined2 *)(iVar3 + 0x25a),0xff,acStack_102);
  func_0x1078656c((char *)s_Currency_1160_1072 + 6,&stack0xfffe,*(undefined2 *)(iVar3 + 0x270),
                  *(undefined2 *)(iVar3 + 0x272),0xff,acStack_102);
  if (acStack_102[0] != '\0') {
    puVar2 = (undefined4 *)*(undefined4 *)(iStack_106 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)((char *)s_Currency_1160_1072 + 6,(undefined4 *)puVar2,
                       (int)((ulong)puVar2 >> 0x10),acStack_102);
  }
  acStack_102[0] = '\0';
  func_0x1078656c((char *)s_Currency_1160_1072 + 6,&stack0xfffe,*(undefined2 *)(iVar3 + 0x338),
                  *(undefined2 *)(iVar3 + 0x33a),0xff,acStack_102);
  func_0x1078656c((char *)s_Currency_1160_1072 + 6,&stack0xfffe,*(undefined2 *)(iVar3 + 0x25c),
                  *(undefined2 *)(iVar3 + 0x25e),0xff,acStack_102);
  func_0x1078656c((char *)s_Currency_1160_1072 + 6,&stack0xfffe,*(undefined2 *)(iVar3 + 0x274),
                  *(undefined2 *)(iVar3 + 0x276),0xff,acStack_102);
  if (acStack_102[0] != '\0') {
    puVar2 = (undefined4 *)*(undefined4 *)(iStack_106 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)((char *)s_Currency_1160_1072 + 6,(undefined4 *)puVar2,
                       (int)((ulong)puVar2 >> 0x10),acStack_102);
  }
  acStack_102[0] = '\0';
  func_0x1078656c((char *)s_Currency_1160_1072 + 6,&stack0xfffe,*(undefined2 *)(iVar3 + 0x33c),
                  *(undefined2 *)(iVar3 + 0x33e),0xff,acStack_102);
  func_0x1078656c((char *)s_Currency_1160_1072 + 6,&stack0xfffe,*(undefined2 *)(iVar3 + 0x2c4),
                  *(undefined2 *)(iVar3 + 0x2c6),0xff,acStack_102);
  func_0x1078656c((char *)s_Currency_1160_1072 + 6,&stack0xfffe,*(undefined2 *)(iVar3 + 0x2c8),
                  *(undefined2 *)(iVar3 + 0x2ca),0xff,acStack_102);
  if (acStack_102[0] != '\0') {
    puVar2 = (undefined4 *)*(undefined4 *)(iStack_106 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)((char *)s_Currency_1160_1072 + 6,(undefined4 *)puVar2,
                       (int)((ulong)puVar2 >> 0x10),acStack_102);
  }
  acStack_102[0] = '\0';
  func_0x1078656c((char *)s_Currency_1160_1072 + 6,&stack0xfffe,*(undefined2 *)(iVar3 + 0x340),
                  *(undefined2 *)(iVar3 + 0x342),0xff,acStack_102);
  func_0x1078656c((char *)s_Currency_1160_1072 + 6,&stack0xfffe,*(undefined2 *)(iVar3 + 0x260),
                  *(undefined2 *)(iVar3 + 0x262),0xff,acStack_102);
  func_0x1078656c((char *)s_Currency_1160_1072 + 6,&stack0xfffe,*(undefined2 *)(iVar3 + 0x278),
                  *(undefined2 *)(iVar3 + 0x27a),0xff,acStack_102);
  if (acStack_102[0] != '\0') {
    puVar2 = (undefined4 *)*(undefined4 *)(iStack_106 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)((char *)s_Currency_1160_1072 + 6,(undefined4 *)puVar2,
                       (int)((ulong)puVar2 >> 0x10),acStack_102);
  }
  acStack_102[0] = '\0';
  func_0x1078656c((char *)s_Currency_1160_1072 + 6,&stack0xfffe,*(undefined2 *)(iVar3 + 0x20c),
                  *(undefined2 *)(iVar3 + 0x20e),0xff,acStack_102);
  if (acStack_102[0] != '\0') {
    puVar2 = (undefined4 *)*(undefined4 *)(iStack_106 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)((char *)s_Currency_1160_1072 + 6,(undefined4 *)puVar2,
                       (int)((ulong)puVar2 >> 0x10),acStack_102);
  }
  acStack_102[0] = '\0';
  func_0x1078656c((char *)s_Currency_1160_1072 + 6,&stack0xfffe,*(undefined2 *)(iVar3 + 0x344),
                  *(undefined2 *)(iVar3 + 0x346),0xff,acStack_102);
  func_0x1078656c((char *)s_Currency_1160_1072 + 6,&stack0xfffe,*(undefined2 *)(iVar3 + 0x348),
                  *(undefined2 *)(iVar3 + 0x34a),0xff,acStack_102);
  if (acStack_102[0] != '\0') {
    puVar2 = (undefined4 *)*(undefined4 *)(iStack_106 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)((char *)s_Currency_1160_1072 + 6,(undefined4 *)puVar2,
                       (int)((ulong)puVar2 >> 0x10),acStack_102);
  }
  acStack_102[0] = '\0';
  func_0x1078656c((char *)s_Currency_1160_1072 + 6,&stack0xfffe,*(undefined2 *)(iVar3 + 0x34c),
                  *(undefined2 *)(iVar3 + 0x34e),0xff,acStack_102);
  func_0x1078656c((char *)s_Currency_1160_1072 + 6,&stack0xfffe,*(undefined2 *)(iVar3 + 0x350),
                  *(undefined2 *)(iVar3 + 0x352),0xff,acStack_102);
  if (acStack_102[0] != '\0') {
    puVar2 = (undefined4 *)*(undefined4 *)(iStack_106 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)((char *)s_Currency_1160_1072 + 6,(undefined4 *)puVar2,
                       (int)((ulong)puVar2 >> 0x10),acStack_102);
  }
  acStack_102[0] = '\0';
  func_0x1078656c((char *)s_Currency_1160_1072 + 6,&stack0xfffe,*(undefined2 *)(iVar3 + 0x354),
                  *(undefined2 *)(iVar3 + 0x356),0xff,acStack_102);
  func_0x1078656c((char *)s_Currency_1160_1072 + 6,&stack0xfffe,*(undefined2 *)(iVar3 + 0x358),
                  *(undefined2 *)(iVar3 + 0x35a),0xff,acStack_102);
  if (acStack_102[0] != '\0') {
    puVar2 = (undefined4 *)*(undefined4 *)(iStack_106 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)((char *)s_Currency_1160_1072 + 6,(undefined4 *)puVar2,
                       (int)((ulong)puVar2 >> 0x10),acStack_102);
  }
  if (*(char *)((int)*(undefined4 *)(iVar3 + 0x208) + 0x29) != '\0') {
    acStack_102[0] = '\0';
    func_0x1078656c((char *)s_Currency_1160_1072 + 6,&stack0xfffe,*(undefined2 *)(iVar3 + 0x208),
                    *(undefined2 *)(iVar3 + 0x20a),0xff,acStack_102);
    if (acStack_102[0] != '\0') {
      puVar2 = (undefined4 *)*(undefined4 *)(iStack_106 + 0xec);
      puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
      (*(code *)*puVar1)((char *)s_Currency_1160_1072 + 6,(undefined4 *)puVar2,
                         (int)((ulong)puVar2 >> 0x10),acStack_102);
    }
    acStack_102[0] = '\0';
    func_0x1078656c((char *)s_Currency_1160_1072 + 6,&stack0xfffe,*(undefined2 *)(iVar3 + 0x35c),
                    *(undefined2 *)(iVar3 + 0x35e),0xff,acStack_102);
    func_0x1078656c((char *)s_Currency_1160_1072 + 6,&stack0xfffe,*(undefined2 *)(iVar3 + 0x360),
                    *(undefined2 *)(iVar3 + 0x362),0xff,acStack_102);
    if (acStack_102[0] != '\0') {
      puVar2 = (undefined4 *)*(undefined4 *)(iStack_106 + 0xec);
      puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
      (*(code *)*puVar1)((char *)s_Currency_1160_1072 + 6,(undefined4 *)puVar2,
                         (int)((ulong)puVar2 >> 0x10),acStack_102);
    }
    acStack_102[0] = '\0';
    func_0x1078656c((char *)s_Currency_1160_1072 + 6,&stack0xfffe,*(undefined2 *)(iVar3 + 0x364),
                    *(undefined2 *)(iVar3 + 0x366),0xff,acStack_102);
    func_0x1078656c((char *)s_Currency_1160_1072 + 6,&stack0xfffe,*(undefined2 *)(iVar3 + 0x368),
                    *(undefined2 *)(iVar3 + 0x36a),0xff,acStack_102);
    if (acStack_102[0] != '\0') {
      puVar2 = (undefined4 *)*(undefined4 *)(iStack_106 + 0xec);
      puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
      (*(code *)*puVar1)((char *)s_Currency_1160_1072 + 6,(undefined4 *)puVar2,
                         (int)((ulong)puVar2 >> 0x10),acStack_102);
    }
  }
  acStack_102[0] = '\0';
  func_0x1078656c((char *)s_Currency_1160_1072 + 6,&stack0xfffe,*(undefined2 *)(iVar3 + 0x3a4),
                  *(undefined2 *)(iVar3 + 0x3a6),0xff,acStack_102);
  func_0x1078656c((char *)s_Currency_1160_1072 + 6,&stack0xfffe,*(undefined2 *)(iVar3 + 0x3a8),
                  *(undefined2 *)(iVar3 + 0x3aa),0xff,acStack_102);
  if (acStack_102[0] != '\0') {
    puVar2 = (undefined4 *)*(undefined4 *)(iStack_106 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)((char *)s_Currency_1160_1072 + 6,(undefined4 *)puVar2,
                       (int)((ulong)puVar2 >> 0x10),acStack_102);
  }
  if (*(char *)((int)*(undefined4 *)(iVar3 + 0x210) + 0x29) != '\0') {
    acStack_102[0] = '\0';
    func_0x1078656c((char *)s_Currency_1160_1072 + 6,&stack0xfffe,*(undefined2 *)(iVar3 + 0x210),
                    *(undefined2 *)(iVar3 + 0x212),0xff,acStack_102);
    func_0x1078656c((char *)s_Currency_1160_1072 + 6,&stack0xfffe,*(undefined2 *)(iVar3 + 0x280),
                    *(undefined2 *)(iVar3 + 0x282),0xff,acStack_102);
    func_0x1078656c((char *)s_Currency_1160_1072 + 6,&stack0xfffe,*(undefined2 *)(iVar3 + 0x290),
                    *(undefined2 *)(iVar3 + 0x292),0xff,acStack_102);
    if (acStack_102[0] != '\0') {
      puVar2 = (undefined4 *)*(undefined4 *)(iStack_106 + 0xec);
      puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
      (*(code *)*puVar1)((char *)s_Currency_1160_1072 + 6,(undefined4 *)puVar2,
                         (int)((ulong)puVar2 >> 0x10),acStack_102);
    }
    acStack_102[0] = '\0';
    func_0x1078656c((char *)s_Currency_1160_1072 + 6,&stack0xfffe,*(undefined2 *)(iVar3 + 0x3ac),
                    *(undefined2 *)(iVar3 + 0x3ae),0xff,acStack_102);
    func_0x1078656c((char *)s_Currency_1160_1072 + 6,&stack0xfffe,*(undefined2 *)(iVar3 + 0x284),
                    *(undefined2 *)(iVar3 + 0x286),0xff,acStack_102);
    func_0x1078656c((char *)s_Currency_1160_1072 + 6,&stack0xfffe,*(undefined2 *)(iVar3 + 0x28c),
                    *(undefined2 *)(iVar3 + 0x28e),0xff,acStack_102);
    if (acStack_102[0] != '\0') {
      puVar2 = (undefined4 *)*(undefined4 *)(iStack_106 + 0xec);
      puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
      (*(code *)*puVar1)((char *)s_Currency_1160_1072 + 6,(undefined4 *)puVar2,
                         (int)((ulong)puVar2 >> 0x10),acStack_102);
    }
  }
  if (*(char *)((int)*(undefined4 *)(iVar3 + 0x214) + 0x29) != '\0') {
    acStack_102[0] = '\0';
    func_0x1078656c((char *)s_Currency_1160_1072 + 6,&stack0xfffe,*(undefined2 *)(iVar3 + 0x214),
                    *(undefined2 *)(iVar3 + 0x216),0xff,acStack_102);
    func_0x1078656c((char *)s_Currency_1160_1072 + 6,&stack0xfffe,*(undefined2 *)(iVar3 + 0x298),
                    *(undefined2 *)(iVar3 + 0x29a),0xff,acStack_102);
    func_0x1078656c((char *)s_Currency_1160_1072 + 6,&stack0xfffe,*(undefined2 *)(iVar3 + 0x2a8),
                    *(undefined2 *)(iVar3 + 0x2aa),0xff,acStack_102);
    if (acStack_102[0] != '\0') {
      puVar2 = (undefined4 *)*(undefined4 *)(iStack_106 + 0xec);
      puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
      (*(code *)*puVar1)((char *)s_Currency_1160_1072 + 6,(undefined4 *)puVar2,
                         (int)((ulong)puVar2 >> 0x10),acStack_102);
    }
    acStack_102[0] = '\0';
    func_0x1078656c((char *)s_Currency_1160_1072 + 6,&stack0xfffe,*(undefined2 *)(iVar3 + 0x3b0),
                    *(undefined2 *)(iVar3 + 0x3b2),0xff,acStack_102);
    func_0x1078656c((char *)s_Currency_1160_1072 + 6,&stack0xfffe,*(undefined2 *)(iVar3 + 0x29c),
                    *(undefined2 *)(iVar3 + 0x29e),0xff,acStack_102);
    func_0x1078656c((char *)s_Currency_1160_1072 + 6,&stack0xfffe,*(undefined2 *)(iVar3 + 0x2ac),
                    *(undefined2 *)(iVar3 + 0x2ae),0xff,acStack_102);
    if (acStack_102[0] != '\0') {
      puVar2 = (undefined4 *)*(undefined4 *)(iStack_106 + 0xec);
      puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
      (*(code *)*puVar1)((char *)s_Currency_1160_1072 + 6,(undefined4 *)puVar2,
                         (int)((ulong)puVar2 >> 0x10),acStack_102);
    }
    acStack_102[0] = '\0';
    func_0x1078656c((char *)s_Currency_1160_1072 + 6,&stack0xfffe,*(undefined2 *)(iVar3 + 0x3b4),
                    *(undefined2 *)(iVar3 + 0x3b6),0xff,acStack_102);
    func_0x1078656c((char *)s_Currency_1160_1072 + 6,&stack0xfffe,*(undefined2 *)(iVar3 + 0x2a0),
                    *(undefined2 *)(iVar3 + 0x2a2),0xff,acStack_102);
    func_0x1078656c((char *)s_Currency_1160_1072 + 6,&stack0xfffe,*(undefined2 *)(iVar3 + 0x2b0),
                    *(undefined2 *)(iVar3 + 0x2b2),0xff,acStack_102);
    if (acStack_102[0] != '\0') {
      puVar2 = (undefined4 *)*(undefined4 *)(iStack_106 + 0xec);
      puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
      (*(code *)*puVar1)((char *)s_Currency_1160_1072 + 6,(undefined4 *)puVar2,
                         (int)((ulong)puVar2 >> 0x10),acStack_102);
    }
  }
  FUN_1120_4a3f(iStack_106,uStack_104);
  FUN_1120_49ff(iStack_106,uStack_104);
  FUN_1120_49e3(iStack_106,uStack_104);
  return;
}



/* ---- TFormSEDD_Decisions_TestBtnClick @ 1078:78b2  (122 octets) ---- */

void __stdcall16far
TFormSEDD_Decisions_TestBtnClick(undefined4 param_1,undefined2 param_2,undefined2 param_3)

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
  uVar4 = *(undefined4 *)((int)param_1 + 0x2d0);
  *(undefined *)((int)uVar4 + 0x25) = 0;
  puVar2 = (undefined4 *)*(undefined4 *)((int)param_1 + 0x2d0);
  puVar1 = (undefined2 *)((int)*puVar2 + 0x38);
  (*(code *)*puVar1)(0x1138,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),
                     (int)((ulong)uVar5 >> 0x10),(int)uVar5);
  return;
}



/* ---- TFormSEDD_Decisions_Print1Click @ 1078:792c  (67 octets) ---- */

void __stdcall16far TFormSEDD_Decisions_Print1Click(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  undefined2 uVar3;
  
  FUN_1158_0444();
  cVar1 = FUN_1010_34c6();
  if (cVar1 != '\0') {
    uVar3 = (undefined2)((ulong)param_1 >> 0x10);
    iVar2 = (int)param_1;
    FUN_1138_1c77((int)*(undefined4 *)(iVar2 + 0x1d4),
                  (int)((ulong)*(undefined4 *)(iVar2 + 0x1d4) >> 0x10),0);
    FUN_1140_5a2d(iVar2,uVar3);
    FUN_1138_1c77((int)*(undefined4 *)(iVar2 + 0x1d4),
                  (int)((ulong)*(undefined4 *)(iVar2 + 0x1d4) >> 0x10),1);
  }
  return;
}



/* ---- TFormSEDD_Decisions_Copy1Click @ 1078:796f  (338 octets) ---- */

void __stdcall16far TFormSEDD_Decisions_Copy1Click(undefined4 param_1)

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
  
  local_6 = 0x797a;
  FUN_1158_0444();
  uVar4 = (undefined2)((ulong)param_1 >> 0x10);
  iVar2 = (int)param_1;
  FUN_1138_1c77((int)*(undefined4 *)(iVar2 + 0x1d4),
                (int)((ulong)*(undefined4 *)(iVar2 + 0x1d4) >> 0x10),0);
  FUN_1138_17bf((int)*(undefined4 *)(iVar2 + 0x2dc),
                (int)((ulong)*(undefined4 *)(iVar2 + 0x2dc) >> 0x10),*(undefined2 *)(iVar2 + 0x22));
  FUN_1138_17e1((int)*(undefined4 *)(iVar2 + 0x2dc),
                (int)((ulong)*(undefined4 *)(iVar2 + 0x2dc) >> 0x10),*(undefined2 *)(iVar2 + 0x24));
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
  local_6 = *(undefined2 *)((int)*(undefined4 *)(iVar2 + 0x2dc) + 0x22);
  FUN_1138_1c77((int)*(undefined4 *)(iVar2 + 0x2dc),
                (int)((ulong)*(undefined4 *)(iVar2 + 0x2dc) >> 0x10),0);
  puVar10 = &local_a;
  uVar7 = FUN_1140_33d5(iVar2,uVar4);
  piVar9 = &local_12;
  uVar6 = (undefined2)((ulong)*(undefined4 *)(iVar2 + 0x2dc) >> 0x10);
  uVar5 = (undefined2)*(undefined4 *)(iVar2 + 0x2dc);
  uVar8 = FUN_1118_1f94(uVar5,uVar6,piVar9);
  FUN_1128_1b10(uVar8,uVar5,uVar6,piVar9,unaff_SS,uVar7);
  uVar5 = (undefined2)((ulong)*(undefined4 *)(iVar2 + 0x2dc) >> 0x10);
  iVar3 = (int)*(undefined4 *)(iVar2 + 0x2dc);
  puVar1 = (undefined2 *)((int)*DAT_1160_2ad0 + 8);
  (*(code *)*puVar1)(0x1128,(undefined4 *)DAT_1160_2ad0,(int)((ulong)DAT_1160_2ad0 >> 0x10),
                     *(undefined2 *)(iVar3 + 0x8e),*(undefined2 *)(iVar3 + 0x90),puVar10);
  FUN_1138_1c77((int)*(undefined4 *)(iVar2 + 0x1d4),
                (int)((ulong)*(undefined4 *)(iVar2 + 0x1d4) >> 0x10),1);
  return;
}




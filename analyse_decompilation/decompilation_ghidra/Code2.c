/* Simstrat (FR).EXE - segment Code2 - 44 fonctions
   Decompile par Ghidra 11.2.1 (x86 16 bits, chargeur NE). */

/* ---- FUN_1008_0c19 @ 1008:0c19  (43 octets) ---- */

void __stdcall16far FUN_1008_0c19(undefined4 param_1)

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



/* ---- FUN_1008_0c4a @ 1008:0c4a  (161 octets) ---- */

void __stdcall16far FUN_1008_0c4a(int param_1)

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
  
  _local_6 = CONCAT22(unaff_CS,0xc55);
  FUN_1158_0444();
  if (param_1 < 1) {
    return;
  }
  uStack_c = DAT_1160_2c2a._2_2_;
  uStack_e = (undefined2)DAT_1160_2c2a;
  uStack_10 = CONCAT11(extraout_AH,1);
  pcStack_12 = (char *)s_devices_1160_1007 + 1;
  uStack_14 = 0x22;
  uStack_16 = 0x1158;
  uStack_18 = 0xc79;
  local_a = FUN_1140_2553();
  uVar1 = (ulong)local_a >> 0x10;
  local_6 = (undefined2)local_a;
  uStack_16 = 0x1140;
  uStack_18 = 0xc44;
  uStack_1c = DAT_1160_1858;
  DAT_1160_1858 = &uStack_1c;
  puStack_1a = &stack0xfffe;
  FUN_1008_0faf(local_a,0);
  FUN_1008_14ca(local_a,param_1);
  FUN_1138_1ed5(local_a,0xfff0,0xffff);
  FUN_1140_3a14(local_a,2);
  uVar2 = (undefined2)local_a;
  FUN_1140_5d45(local_a);
  DAT_1160_1858 = (undefined2 *)uVar2;
  puStack_1a = (undefined *)0x1140;
  uStack_1c = 0xce7;
  FUN_1140_5f1d(local_6,(int)uVar1);
  return;
}



/* ---- FUN_1008_0cf9 @ 1008:0cf9  (694 octets) ---- */

void __stdcall16far FUN_1008_0cf9(char param_1,int param_2)

{
  undefined4 *puVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  long lVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined2 uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined2 unaff_CS;
  char *pcVar12;
  char *pcVar13;
  undefined2 uVar14;
  undefined2 uVar15;
  undefined2 uStack_2e;
  undefined *puStack_2c;
  char *pcStack_2a;
  undefined2 uStack_28;
  undefined2 uStack_26;
  char *pcStack_24;
  undefined2 uStack_22;
  undefined2 uStack_20;
  undefined2 uStack_1e;
  int local_1c;
  undefined4 local_1a;
  int local_16;
  undefined4 local_14;
  char local_f;
  int local_e;
  int local_c;
  int local_a;
  int local_8;
  int local_6;
  undefined2 uVar16;
  
  _local_6 = CONCAT22(unaff_CS,0xd04);
  uVar6 = FUN_1158_0444();
  local_f = '\0';
  if (0 < param_2) {
    if (param_1 == '\0') {
      uVar6 = uVar6 & 0xff00;
      if (*(char *)((int)DAT_1160_2004 + 0x1b4) == '\0') {
        uVar6 = uVar6 + 1;
      }
      local_f = (char)uVar6;
    }
    else {
      local_f = '\x01';
    }
  }
  if (local_f != '\0') {
    uStack_1e = DAT_1160_2c2a._2_2_;
    uStack_20 = (undefined2)DAT_1160_2c2a;
    uStack_22 = CONCAT11((char)(uVar6 >> 8),1);
    pcStack_24 = (char *)s_devices_1160_1007 + 1;
    uStack_26 = 0x22;
    uStack_28 = 0x1158;
    pcStack_2a = (char *)0xd50;
    _local_6 = FUN_1140_2553();
    uStack_28 = 0x1140;
    pcStack_2a = (char *)0xcf3;
    uStack_2e = DAT_1160_1858;
    DAT_1160_1858 = &uStack_2e;
    puStack_2c = &stack0xfffe;
    local_14 = _local_6;
    FUN_1008_0faf(_local_6,1);
    FUN_1008_14ca(local_14,param_2);
    FUN_1138_1ed5(local_14,0xffff,0xff);
    FUN_1140_36b2(local_14,0,0);
    FUN_1140_3a14(local_14,2);
    FUN_1140_34e5(local_14,1);
    uVar7 = FUN_10f0_2a9a((int)DAT_1160_2c54,(int)((ulong)DAT_1160_2c54 >> 0x10));
    FUN_1138_17bf(local_14,uVar7);
    FUN_10f8_754c((int)*(undefined4 *)((int)local_14 + 0x31c),
                  (int)((ulong)*(undefined4 *)((int)local_14 + 0x31c) >> 0x10),0);
    uVar7 = FUN_1138_62b9(local_14);
    SHOWWINDOW(0x1138,4);
    FUN_1140_3fd0(local_14,*(undefined2 *)((int)local_14 + 0x17c),
                  *(undefined2 *)((int)local_14 + 0x17e));
    if (param_1 == '\0') {
      pcVar12 = (char *)0x1140;
      FUN_1140_7303((int)DAT_1160_2c2a,(int)((ulong)DAT_1160_2c2a >> 0x10));
      iVar8 = DAT_1160_014e + *(int *)((int)local_14 + 0x3a1);
      if (SCARRY2(DAT_1160_014e,*(int *)((int)local_14 + 0x3a1))) {
        pcVar12 = (char *)0x1158;
        iVar8 = FUN_1158_043e(0x1140);
      }
      local_16 = iVar8 + -1;
      pcVar13 = pcVar12;
      uVar5 = local_14;
      if (SBORROW2(iVar8,1)) {
        pcVar13 = (char *)0x1158;
        local_16 = FUN_1158_043e(pcVar12);
        uVar5 = local_14;
      }
      local_14._2_2_ = (undefined2)((ulong)uVar5 >> 0x10);
      local_14._0_2_ = (int)uVar5;
      local_16 = local_16 / *(int *)((int)local_14 + 0x3a1);
      if (0 < local_16) {
        local_8 = 1;
        local_14 = uVar5;
        while( true ) {
          iVar8 = local_8 + -1;
          pcVar12 = pcVar13;
          uVar5 = local_14;
          if (SBORROW2(local_8,1)) {
            pcVar12 = (char *)0x1158;
            iVar8 = FUN_1158_043e(pcVar13);
            uVar5 = local_14;
          }
          local_14._2_2_ = (undefined2)((ulong)uVar5 >> 0x10);
          local_14._0_2_ = (int)uVar5;
          lVar4 = (long)iVar8 * (long)*(int *)((int)local_14 + 0x3a1);
          iVar8 = (int)lVar4;
          pcVar13 = pcVar12;
          if (iVar8 != lVar4) {
            pcVar13 = (char *)0x1158;
            local_14 = uVar5;
            iVar8 = FUN_1158_043e(pcVar12);
            uVar5 = local_14;
          }
          local_14._2_2_ = (undefined2)((ulong)uVar5 >> 0x10);
          local_14._0_2_ = (int)uVar5;
          lVar4 = (long)iVar8 * (long)*(int *)((int)local_14 + 0x4a5);
          iVar8 = (int)lVar4;
          pcVar12 = pcVar13;
          local_14 = uVar5;
          if (iVar8 != lVar4) {
            pcVar12 = (char *)0x1158;
            iVar8 = FUN_1158_043e(pcVar13);
          }
          iVar9 = iVar8 + 1;
          uVar5 = local_14;
          if (SCARRY2(iVar8,1)) {
            iVar9 = FUN_1158_043e(pcVar12);
            uVar5 = local_14;
          }
          local_14._2_2_ = (undefined2)((ulong)uVar5 >> 0x10);
          local_14._0_2_ = (int)uVar5;
          puVar1 = (undefined4 *)((int)local_14 + 0x31c);
          uVar14 = 0x10f8;
          local_14 = uVar5;
          FUN_10f8_7345((int)*puVar1,(int)((ulong)*puVar1 >> 0x10),iVar9,iVar9 >> 0xf);
          local_1a = *(undefined4 *)((int)local_14 + 0x31c);
          lVar4 = (long)*(int *)((int)local_14 + 0x3a1) * (long)*(int *)((int)local_14 + 0x4a5);
          iVar8 = (int)lVar4;
          if (iVar8 != lVar4) {
            uVar14 = 0x1158;
            iVar8 = FUN_1158_043e(0x10f8);
          }
          iVar9 = (int)((long)iVar8 * 2);
          local_c = iVar8;
          if ((long)iVar9 != (long)iVar8 * 2) {
            iVar9 = FUN_1158_043e(uVar14);
          }
          uVar14 = 0x10f8;
          iVar10 = FUN_10f8_6e30((int)local_1a,(int)((ulong)local_1a >> 0x10),0,0);
          uVar5 = *(undefined4 *)((int)_local_6 + 0x304);
          iVar8 = *(int *)((int)uVar5 + 0x22);
          iVar11 = iVar8 - iVar10;
          if (SBORROW2(iVar8,iVar10)) {
            uVar14 = 0x1158;
            iVar11 = FUN_1158_043e(0x10f8);
          }
          iVar8 = iVar11 - iVar9;
          uVar15 = uVar14;
          if (SBORROW2(iVar11,iVar9)) {
            uVar15 = 0x1158;
            iVar8 = FUN_1158_043e(uVar14);
          }
          local_a = iVar8 / local_c;
          uVar14 = (undefined2)((ulong)local_1a >> 0x10);
          if (SBORROW2(*(int *)((int)local_1a + 0xe8),(uint)(*(int *)((int)local_1a + 0xe6) == 0))
              != false) {
            FUN_1158_043e(uVar15);
          }
          local_1c = FUN_1158_0416();
          if (0 < local_1c) {
            local_e = 1;
            while( true ) {
              FUN_10f8_70c9((int)local_1a,(int)((ulong)local_1a >> 0x10),local_a,local_e,
                            local_e >> 0xf);
              if (local_e == local_1c) break;
              local_e = local_e + 1;
            }
          }
          uVar5 = _local_6;
          uVar16 = (undefined2)((ulong)_local_6 >> 0x10);
          uVar14 = uVar16;
          local_6 = (int)uVar5;
          puVar2 = (undefined2 *)(local_6 + 0x17e);
          puVar3 = (undefined2 *)(local_6 + 0x17c);
          pcVar13 = (char *)s_windows_1160_100f + 1;
          iVar8 = local_6;
          _local_6 = uVar5;
          FUN_1010_311a((int)DAT_1160_2004,(int)((ulong)DAT_1160_2004 >> 0x10),*puVar3,*puVar2,iVar8
                        ,uVar14);
          uVar5 = local_14;
          if (local_8 == local_16) break;
          local_8 = local_8 + 1;
        }
      }
      pcVar12 = (char *)0x1140;
      local_14 = uVar5;
      FUN_1140_7303((int)DAT_1160_2c2a,(int)((ulong)DAT_1160_2c2a >> 0x10));
      DAT_1160_1858 = (undefined2 *)uVar7;
    }
    else {
      pcVar12 = (char *)s_devices_1160_1007 + 1;
      FUN_1008_3925(local_14);
      DAT_1160_1858 = (undefined2 *)uVar7;
    }
    puStack_2c = (undefined *)0xfab;
    uStack_2e = (undefined2)((ulong)_local_6 >> 0x10);
    pcStack_2a = pcVar12;
    FUN_1140_5f1d((int)_local_6);
    return;
  }
  return;
}



/* ---- FUN_1008_0faf @ 1008:0faf  (210 octets) ---- */

void __stdcall16far FUN_1008_0faf(undefined4 param_1,undefined param_2)

{
  undefined extraout_AH;
  undefined extraout_AH_00;
  undefined extraout_AH_01;
  int iVar1;
  undefined2 uVar2;
  
  FUN_1158_0444();
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  *(undefined *)(iVar1 + 0x39e) = param_2;
  FUN_1140_1e62((int)*(undefined4 *)(iVar1 + 0xd8),
                (int)((ulong)*(undefined4 *)(iVar1 + 0xd8) >> 0x10),
                CONCAT11(extraout_AH,*(undefined *)(iVar1 + 0x39e)));
  FUN_1140_1e62((int)*(undefined4 *)(iVar1 + 0xdc),
                (int)((ulong)*(undefined4 *)(iVar1 + 0xdc) >> 0x10),
                CONCAT11(extraout_AH_00,*(undefined *)(iVar1 + 0x39e)));
  FUN_1140_1cd0((int)*(undefined4 *)(iVar1 + 0xd8),
                (int)((ulong)*(undefined4 *)(iVar1 + 0xd8) >> 0x10),0);
  FUN_1140_1cd0((int)*(undefined4 *)(iVar1 + 0xdc),
                (int)((ulong)*(undefined4 *)(iVar1 + 0xdc) >> 0x10),0);
  FUN_1138_1c77((int)*(undefined4 *)(iVar1 + 0x280),
                (int)((ulong)*(undefined4 *)(iVar1 + 0x280) >> 0x10),
                CONCAT11(extraout_AH_01,*(undefined *)(iVar1 + 0x39e)));
  if (*(char *)(iVar1 + 0x39e) == '\0') {
    *(undefined2 *)(iVar1 + 0x3a1) = (int)(4 / (long)*(int *)(iVar1 + 0x4a5));
    *(undefined2 *)(iVar1 + 0x3a3) = 0xf;
    FUN_1138_1672((int)*(undefined4 *)(iVar1 + 0x17c),
                  (int)((ulong)*(undefined4 *)(iVar1 + 0x17c) >> 0x10),5);
  }
  else {
    *(undefined2 *)(iVar1 + 0x3a1) = (int)(4 / (long)*(int *)(iVar1 + 0x4a5));
    *(undefined2 *)(iVar1 + 0x3a3) = 0x14;
  }
  FUN_1008_1a6a(iVar1,uVar2,iVar1 + 0x31c,uVar2);
  return;
}



/* ---- FUN_1008_1081 @ 1008:1081  (29 octets) ---- */

void __stdcall16far FUN_1008_1081(undefined4 param_1)

{
  FUN_1158_0444();
  FUN_1008_0cf9(0,*(undefined2 *)((int)param_1 + 0x39f));
  return;
}



/* ---- TFormSARP_Produits_Imprimer1Click @ 1008:10a4  (1 octets) ---- */

void TFormSARP_Produits_Imprimer1Click(undefined2 param_1,undefined4 param_2)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined2 uVar5;
  undefined2 unaff_CS;
  undefined2 uStack_18;
  undefined *puStack_16;
  char *pcStack_14;
  undefined2 uStack_12;
  undefined2 uStack_10;
  char *pcStack_e;
  undefined2 uStack_c;
  int iStack_a;
  undefined2 uStack_8;
  char *pcStack_6;
  
  _pcStack_6 = (char *)CONCAT22(unaff_CS,(char *)s_sShortDate_1160_10ad + 2);
  FUN_1158_0444();
  uVar5 = (undefined2)((ulong)param_2 >> 0x10);
  iVar4 = (int)param_2;
  uStack_8 = (undefined2)((ulong)*(undefined4 *)(iVar4 + 0x208) >> 0x10);
  iStack_a = (int)*(undefined4 *)(iVar4 + 0x208);
  uStack_c = 0x1158;
  pcStack_e = (char *)s_sLongDate_1160_10b8 + 9;
  uVar1 = FUN_1108_2f17();
  if ((char)uVar1 == '\0') {
    return;
  }
  uStack_c = CONCAT11((char)((uint)uVar1 >> 8),1);
  pcStack_e = (char *)s_windows_1160_100f + 1;
  uStack_10 = 0x25b4;
  uStack_12 = 0x1108;
  uVar1 = 0x1140;
  pcStack_14 = (char *)s_iTime_1160_10dc + 2;
  iStack_a = iVar4;
  uStack_8 = uVar5;
  DAT_1160_2004 = FUN_1140_2553();
  uStack_12 = 0x1140;
  pcStack_14 = (char *)s_iCurrDigits_1160_109b + 3;
  uStack_18 = DAT_1160_1858;
  iVar2 = DAT_1160_014e + *(int *)(iVar4 + 0x3a1);
  DAT_1160_1858 = &uStack_18;
  puStack_16 = &stack0xfffe;
  _pcStack_6 = (char *)DAT_1160_2004;
  if (SCARRY2(DAT_1160_014e,*(int *)(iVar4 + 0x3a1))) {
    uVar1 = 0x1158;
    DAT_1160_1858 = &uStack_18;
    puStack_16 = &stack0xfffe;
    iVar2 = FUN_1158_043e(0x1140);
  }
  iVar3 = iVar2 + -1;
  if (SBORROW2(iVar2,1)) {
    iVar3 = FUN_1158_043e(uVar1);
  }
  FUN_1010_2f8d((int)_pcStack_6,(int)((ulong)_pcStack_6 >> 0x10),iVar3 / *(int *)(iVar4 + 0x3a1));
  uVar1 = (undefined2)((ulong)_pcStack_6 >> 0x10);
  iVar2 = (int)_pcStack_6;
  *(undefined2 *)(iVar2 + 0x2b9) = 0x1081;
  *(undefined2 *)(iVar2 + 699) = (char *)s_devices_1160_1007 + 1;
  *(int *)(iVar2 + 0x2bd) = iVar4;
  *(undefined2 *)(iVar2 + 0x2bf) = uVar5;
  FUN_1140_5d45(iVar2,uVar1);
  DAT_1160_1858 = (undefined2 *)iVar2;
  puStack_16 = (undefined *)0x1140;
  uStack_18 = 0x116e;
  FUN_1140_5f1d((int)DAT_1160_2004,(int)((ulong)DAT_1160_2004 >> 0x10));
  return;
}



/* ---- TFormSARP_Produits_FormClose @ 1008:1172  (21 octets) ---- */

void __stdcall16far
TFormSARP_Produits_FormClose(undefined2 param_1_00,undefined2 param_2,undefined *param_1)

{
  FUN_1158_0444();
  *param_1 = 1;
  return;
}



/* ---- TFormSARP_Produits_FormShow @ 1008:1187  (86 octets) ---- */

void __stdcall16far TFormSARP_Produits_FormShow(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  
  FUN_1158_0444();
  uVar5 = (undefined2)((ulong)param_1 >> 0x10);
  iVar3 = (int)param_1;
  uVar6 = (undefined2)((ulong)*(undefined4 *)(iVar3 + 0x31c) >> 0x10);
  iVar4 = (int)*(undefined4 *)(iVar3 + 0x31c);
  iVar1 = *(int *)(iVar4 + 0x22);
  iVar2 = iVar1 + 1;
  if (SCARRY2(iVar1,1)) {
    iVar2 = FUN_1158_043e(0x1158);
  }
  FUN_1138_17bf(iVar4,uVar6,iVar2);
  TFormSARP_Produits_Panel0Resize(iVar3,uVar5,iVar3,uVar5);
  FUN_1140_63a9((int)DAT_1160_2c2e,(int)((ulong)DAT_1160_2c2e >> 0x10),0xfffe);
  return;
}



/* ---- TFormSARP_Produits_FormCreate @ 1008:11ed  (1 octets) ---- */

void TFormSARP_Produits_FormCreate(undefined2 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined2 unaff_SS;
  longdouble in_ST0;
  longdouble in_ST1;
  undefined4 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined auStack_304 [256];
  undefined auStack_204 [256];
  undefined auStack_104 [252];
  undefined4 uStack_8;
  int iVar9;
  
  uStack_8 = CONCAT22(0x11f8,(undefined2)uStack_8);
  FUN_1158_0444();
  FUN_1158_17cd(0x11dd,0x1158);
  FUN_1158_184c(0x1dfa,0x1160);
  FUN_1158_184c(0x11e9,0x1158);
  puVar7 = auStack_204;
  uVar3 = (undefined2)((ulong)param_2 >> 0x10);
  iVar2 = (int)param_2;
  uVar4 = unaff_SS;
  FUN_1138_1d53();
  FUN_1158_184c(puVar7,uVar4);
  uVar4 = 0x1158;
  FUN_1158_17e7();
  *(undefined2 *)(iVar2 + 0x39c) = 100;
  uStack_8 = *(undefined4 *)(iVar2 + 0x32c);
  iVar9 = 0;
  while( true ) {
    iVar1 = DAT_1160_014c + -1;
    uVar5 = uVar4;
    if (SBORROW2(DAT_1160_014c,1)) {
      uVar5 = 0x1158;
      iVar1 = FUN_1158_043e(uVar4);
    }
    uVar6 = CONCAT22(iVar1,iVar9 + 1);
    uVar4 = uVar5;
    if (SCARRY2(iVar9,1)) {
      uVar4 = 0x1158;
      uVar6 = FUN_1158_043e(uVar5);
    }
    if ((int)((ulong)uVar6 >> 0x10) < (int)uVar6) {
      uVar5 = 0;
      uVar6 = FUN_1130_1353((int)uStack_8,(int)((ulong)uStack_8 >> 0x10),iVar9);
      uVar4 = 0x1130;
      FUN_1130_13a5(uVar6,uVar5);
    }
    if (iVar9 == 0x14) break;
    iVar9 = iVar9 + 1;
  }
  iVar9 = DAT_1160_014c + -1;
  if (SBORROW2(DAT_1160_014c,1)) {
    iVar9 = FUN_1158_043e(uVar4);
  }
  *(int *)(iVar2 + 0x39f) = iVar9;
  if (DAT_1160_1e06 < 3) {
    *(undefined2 *)(iVar2 + 0x4a5) = 1;
  }
  else {
    *(undefined2 *)(iVar2 + 0x4a5) = 2;
  }
  puVar7 = auStack_104;
  uVar6 = *(undefined4 *)((int)DAT_1160_18f6 + 0x24c);
  uVar4 = unaff_SS;
  FUN_1138_1d53((int)uVar6,(int)((ulong)uVar6 >> 0x10));
  FUN_1138_1d8c((int)*(undefined4 *)(iVar2 + 0x284),
                (int)((ulong)*(undefined4 *)(iVar2 + 0x284) >> 0x10),puVar7,uVar4);
  puVar7 = auStack_104;
  uVar6 = *(undefined4 *)((int)DAT_1160_18f6 + 0x250);
  uVar4 = unaff_SS;
  FUN_1138_1d53((int)uVar6,(int)((ulong)uVar6 >> 0x10));
  FUN_1138_1d8c((int)*(undefined4 *)(iVar2 + 0x288),
                (int)((ulong)*(undefined4 *)(iVar2 + 0x288) >> 0x10),puVar7,uVar4);
  puVar7 = auStack_104;
  uVar6 = *(undefined4 *)((int)DAT_1160_18f6 + 0x254);
  uVar4 = unaff_SS;
  FUN_1138_1d53((int)uVar6,(int)((ulong)uVar6 >> 0x10));
  FUN_1138_1d8c((int)*(undefined4 *)(iVar2 + 0x28c),
                (int)((ulong)*(undefined4 *)(iVar2 + 0x28c) >> 0x10),puVar7,uVar4);
  puVar7 = auStack_104;
  uVar6 = *(undefined4 *)((int)DAT_1160_18f6 + 0x248);
  uVar5 = unaff_SS;
  FUN_1138_1d53((int)uVar6,(int)((ulong)uVar6 >> 0x10));
  FUN_1158_184c(0x11e9,0x1138);
  puVar8 = auStack_204;
  uVar4 = unaff_SS;
  FUN_1150_15fe(puVar8);
  FUN_1150_1cbf((double)in_ST0);
  FUN_1158_184c(puVar8,uVar4);
  FUN_1158_184c(0x11e9,0x1158);
  puVar8 = auStack_304;
  FUN_1150_15fe(puVar8);
  FUN_1150_1ce4((double)in_ST1);
  FUN_1158_184c(puVar8,unaff_SS);
  FUN_1158_184c(0x11e9,0x1158);
  FUN_1138_1d8c((int)*(undefined4 *)(iVar2 + 0x290),
                (int)((ulong)*(undefined4 *)(iVar2 + 0x290) >> 0x10),puVar7,uVar5);
  FUN_10e0_3017((int)*(undefined4 *)(iVar2 + 0x1c4),
                (int)((ulong)*(undefined4 *)(iVar2 + 0x1c4) >> 0x10),0x1e78,0x1160);
  FUN_10e0_3017((int)*(undefined4 *)(iVar2 + 0x1d4),
                (int)((ulong)*(undefined4 *)(iVar2 + 0x1d4) >> 0x10),0x1e86,0x1160);
  FUN_10e0_3017((int)*(undefined4 *)(iVar2 + 0x1c0),
                (int)((ulong)*(undefined4 *)(iVar2 + 0x1c0) >> 0x10),0x1e5c,0x1160);
  FUN_10e0_3017((int)*(undefined4 *)(iVar2 + 0x1bc),
                (int)((ulong)*(undefined4 *)(iVar2 + 0x1bc) >> 0x10),0x1e86,0x1160);
  FUN_10e0_3017((int)*(undefined4 *)(iVar2 + 0x20c),
                (int)((ulong)*(undefined4 *)(iVar2 + 0x20c) >> 0x10),0x1e24,0x1160);
  FUN_10e0_3017((int)*(undefined4 *)(iVar2 + 0x1c8),
                (int)((ulong)*(undefined4 *)(iVar2 + 0x1c8) >> 0x10),0x1e32,0x1160);
  FUN_10e0_3017((int)*(undefined4 *)(iVar2 + 0x1d0),
                (int)((ulong)*(undefined4 *)(iVar2 + 0x1d0) >> 0x10),0x1e40,0x1160);
  return;
}



/* ---- TFormSARP_Produits_FormResize @ 1008:1456  (57 octets) ---- */

void __stdcall16far TFormSARP_Produits_FormResize(undefined4 param_1)

{
  byte extraout_AH;
  int iVar1;
  int iVar2;
  undefined2 uVar3;
  
  FUN_1158_0444();
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  iVar2 = (int)param_1;
  iVar1 = (uint)extraout_AH * 0x100;
  if (*(char *)(iVar2 + 0xee) == '\x02') {
    iVar1 = iVar1 + 1;
  }
  FUN_1130_1275((int)*(undefined4 *)(iVar2 + 0x19c),
                (int)((ulong)*(undefined4 *)(iVar2 + 0x19c) >> 0x10),iVar1);
  TFormSARP_Produits_Panel0Resize(iVar2,uVar3,iVar2,uVar3);
  return;
}



/* ---- TFormSARP_Produits_Panel0Resize @ 1008:148f  (49 octets) ---- */

void __stdcall16far TFormSARP_Produits_Panel0Resize(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  
  FUN_1158_0444();
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  uVar1 = *(undefined4 *)((int)param_1 + 0x17c);
  uVar4 = (undefined2)((ulong)uVar1 >> 0x10);
  iVar2 = (int)uVar1;
  uVar1 = *(undefined4 *)((int)param_1 + 0x31c);
  FUN_10b0_1afd((int)uVar1,(int)((ulong)uVar1 >> 0x10),*(undefined2 *)(iVar2 + 0x24),
                *(undefined2 *)(iVar2 + 0x22));
  return;
}



/* ---- FUN_1008_14ca @ 1008:14ca  (279 octets) ---- */

void __stdcall16far FUN_1008_14ca(undefined4 param_1,undefined2 param_2)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  undefined2 unaff_SS;
  undefined4 uVar7;
  undefined *puVar8;
  undefined local_204 [252];
  undefined4 local_108;
  undefined local_104 [254];
  undefined2 uStack_6;
  byte bVar9;
  
  uStack_6 = 0x14d5;
  FUN_1158_0444();
  FUN_1140_7303((int)DAT_1160_2c2a,(int)((ulong)DAT_1160_2c2a >> 0x10));
  uVar5 = (undefined2)((ulong)param_1 >> 0x10);
  iVar4 = (int)param_1;
  *(undefined2 *)(iVar4 + 0x39f) = param_2;
  FUN_1008_2858(iVar4,uVar5,iVar4 + 0x31c,uVar5);
  FUN_1158_17e7(0xff,local_104,unaff_SS,iVar4 + 0x3a5,uVar5);
  FUN_1158_1878(local_104,unaff_SS,0x14c0,0x1158);
  cVar1 = FUN_1158_0416();
  if (cVar1 != '\0') {
    FUN_1158_1975(1,cVar1,local_104,unaff_SS);
    puVar8 = local_204;
    uVar6 = unaff_SS;
    FUN_1150_08a9(*(int *)(iVar4 + 0x39f),*(int *)(iVar4 + 0x39f) >> 0xf);
    FUN_1158_1916(cVar1,0xff,local_104,unaff_SS,puVar8,uVar6);
  }
  uVar6 = 0x1138;
  FUN_1138_1d8c(iVar4,uVar5,local_104,unaff_SS);
  local_108 = *(undefined4 *)(iVar4 + 0x32c);
  bVar9 = 0;
  while( true ) {
    uVar2 = bVar9 + 1;
    if (SCARRY2((uint)bVar9,1)) {
      uVar2 = FUN_1158_043e(uVar6);
    }
    uVar3 = uVar2 & 0xff00;
    if (uVar2 == *(uint *)(iVar4 + 0x39f)) {
      uVar3 = uVar3 + 1;
    }
    uVar7 = FUN_1130_1353((int)local_108,(int)((ulong)local_108 >> 0x10),bVar9);
    uVar6 = 0x1130;
    FUN_1130_1275(uVar7,uVar3);
    if (bVar9 == 0x13) break;
    bVar9 = bVar9 + 1;
  }
  return;
}



/* ---- FUN_1008_161f @ 1008:161f  (1053 octets) ---- */

void __stdcall16far FUN_1008_161f(undefined4 param_1)

{
  undefined2 *puVar1;
  longdouble lVar2;
  longdouble lVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined2 uVar8;
  char *pcVar9;
  undefined2 unaff_SS;
  longdouble in_ST0;
  longdouble lVar10;
  longdouble lVar11;
  longdouble in_ST1;
  longdouble in_ST2;
  longdouble in_ST3;
  longdouble in_ST4;
  longdouble in_ST5;
  longdouble in_ST6;
  longdouble lVar12;
  undefined4 *puVar13;
  long lVar14;
  int local_46;
  int local_44;
  undefined local_42;
  int local_3e;
  int local_3c;
  undefined local_3a;
  int local_36;
  int local_34;
  undefined4 local_32;
  undefined2 local_2e;
  undefined2 local_2c;
  int local_2a;
  double local_28;
  double local_20;
  double local_18;
  double local_10;
  int local_8;
  int local_6;
  
  local_6 = 0x162a;
  FUN_1158_0444();
  uVar8 = (undefined2)((ulong)param_1 >> 0x10);
  iVar7 = (int)param_1;
  local_2a = (int)((ulong)*(undefined4 *)(iVar7 + 0x1c0) >> 0x10);
  local_2c = (undefined2)*(undefined4 *)(iVar7 + 0x1c0);
  FUN_10d8_31d2(local_2c,local_2a);
  FUN_10e0_2ffb(local_2c,local_2a,1);
  FUN_10e0_2ed2(local_2c,local_2a,0);
  FUN_10d8_31bf(local_2c,local_2a);
  local_6 = 1;
  while( true ) {
    lVar10 = (longdouble)0.0;
    iVar5 = FUN_1158_0416();
    *(double *)(iVar7 + iVar5 * 8 + 0x49f) = (double)lVar10;
    lVar10 = (longdouble)0.0;
    iVar5 = FUN_1158_0416();
    *(double *)(iVar7 + iVar5 * 8 + 0x4af) = (double)lVar10;
    lVar10 = (longdouble)0.0;
    iVar5 = FUN_1158_0416();
    *(double *)(iVar7 + iVar5 * 8 + 0x4bf) = (double)lVar10;
    lVar10 = (longdouble)0.0;
    iVar5 = FUN_1158_0416();
    *(double *)(iVar7 + iVar5 * 8 + 0x4cf) = (double)lVar10;
    local_8 = 0;
    local_2a = DAT_1160_014e;
    if (0 < DAT_1160_014e) {
      iVar5 = 1;
      lVar10 = in_ST6;
      while( true ) {
        local_2c = (undefined2)((ulong)*(undefined4 *)(iVar7 + 0x1c0) >> 0x10);
        local_2e = (undefined2)*(undefined4 *)(iVar7 + 0x1c0);
        local_46 = *(int *)(iVar7 + 0x39f);
        local_44 = local_46 >> 0xf;
        local_42 = 0;
        local_3c = iVar5 >> 0xf;
        local_3a = 0;
        local_34 = local_6 >> 0xf;
        local_36 = local_6;
        local_32 = local_32 & 0xffffff00;
        pcVar9 = (char *)s_iTime_1160_10dc + 4;
        lVar12 = lVar10;
        local_3e = iVar5;
        cVar4 = FUN_10e0_2895(local_2e,local_2c,2,&local_46,unaff_SS);
        lVar11 = in_ST1;
        lVar2 = in_ST3;
        lVar3 = in_ST5;
        if (cVar4 == '\0') {
          pcVar9 = (char *)s_devices_1160_1007 + 1;
          FUN_1008_0c19(iVar7,uVar8);
          lVar11 = in_ST1;
          lVar2 = in_ST3;
          lVar3 = in_ST5;
        }
        in_ST5 = lVar12;
        in_ST3 = lVar3;
        in_ST1 = lVar2;
        puVar13 = (undefined4 *)FUN_10d8_3b9b(local_2e,local_2c,0x15ed,pcVar9);
        puVar1 = (undefined2 *)((int)*puVar13 + 0x40);
        (*(code *)*puVar1)(0x10d8,puVar13);
        local_10 = (double)in_ST0;
        in_ST6 = in_ST5;
        puVar13 = (undefined4 *)FUN_10d8_3b9b(local_2e,local_2c,0x15f2,0x10d8);
        puVar1 = (undefined2 *)((int)*puVar13 + 0x40);
        in_ST0 = in_ST2;
        in_ST2 = in_ST4;
        in_ST4 = lVar10;
        (*(code *)*puVar1)(0x10d8,puVar13);
        local_18 = (double)lVar11;
        puVar13 = (undefined4 *)FUN_10d8_3b9b(local_2e,local_2c,0x15fc,0x10d8);
        puVar1 = (undefined2 *)((int)*puVar13 + 0x44);
        local_32 = (*(code *)*puVar1)(0x10d8,puVar13);
        local_20 = (double)(long)local_32;
        puVar13 = (undefined4 *)FUN_10d8_3b9b(local_2e,local_2c,0x160d,0x10d8);
        puVar1 = (undefined2 *)((int)*puVar13 + 0x44);
        lVar14 = (*(code *)*puVar1)(0x10d8,puVar13);
        local_28 = (double)lVar14;
        local_32 = CONCAT22((uint)(local_10 < 0.0) << 8 | (uint)NAN(local_10) << 10 |
                            (uint)(local_10 == 0.0) << 0xe,(int)lVar14);
        if ((local_10 == 0.0) == 0) {
          iVar6 = FUN_1158_0416();
          lVar10 = (longdouble)*(double *)(iVar7 + iVar6 * 8 + 0x49f) + (longdouble)local_10;
          iVar6 = FUN_1158_0416();
          *(double *)(iVar7 + iVar6 * 8 + 0x49f) = (double)lVar10;
          iVar6 = FUN_1158_0416();
          lVar10 = (longdouble)*(double *)(iVar7 + iVar6 * 8 + 0x4af) + (longdouble)local_18;
          iVar6 = FUN_1158_0416();
          *(double *)(iVar7 + iVar6 * 8 + 0x4af) = (double)lVar10;
          iVar6 = FUN_1158_0416();
          lVar10 = (longdouble)*(double *)(iVar7 + iVar6 * 8 + 0x4bf) + (longdouble)local_20;
          iVar6 = FUN_1158_0416();
          *(double *)(iVar7 + iVar6 * 8 + 0x4bf) = (double)lVar10;
          iVar6 = FUN_1158_0416();
          lVar10 = (longdouble)*(double *)(iVar7 + iVar6 * 8 + 0x4cf) + (longdouble)local_28;
          iVar6 = FUN_1158_0416();
          *(double *)(iVar7 + iVar6 * 8 + 0x4cf) = (double)lVar10;
          local_8 = local_8 + 1;
        }
        if (iVar5 == local_2a) break;
        iVar5 = iVar5 + 1;
        lVar10 = in_ST6;
      }
    }
    if (local_8 != 0) {
      in_ST3 = (longdouble)local_8;
      iVar5 = FUN_1158_0416();
      lVar10 = (longdouble)*(double *)(iVar7 + iVar5 * 8 + 0x49f);
      FUN_1158_04af(0x1158);
      in_ST6 = in_ST2;
      iVar5 = FUN_1158_0416();
      *(double *)(iVar7 + iVar5 * 8 + 0x49f) = (double)lVar10;
      in_ST2 = (longdouble)local_8;
      iVar5 = FUN_1158_0416();
      lVar10 = (longdouble)*(double *)(iVar7 + iVar5 * 8 + 0x4af);
      FUN_1158_04af(0x1158);
      in_ST5 = in_ST1;
      iVar5 = FUN_1158_0416();
      *(double *)(iVar7 + iVar5 * 8 + 0x4af) = (double)lVar10;
      in_ST1 = (longdouble)local_8;
      iVar5 = FUN_1158_0416();
      lVar10 = (longdouble)*(double *)(iVar7 + iVar5 * 8 + 0x4bf);
      FUN_1158_04af(0x1158);
      in_ST4 = in_ST0;
      iVar5 = FUN_1158_0416();
      *(double *)(iVar7 + iVar5 * 8 + 0x4bf) = (double)lVar10;
      in_ST0 = (longdouble)local_8;
      iVar5 = FUN_1158_0416();
      lVar10 = (longdouble)*(double *)(iVar7 + iVar5 * 8 + 0x4cf);
      FUN_1158_04af(0x1158);
      iVar5 = FUN_1158_0416();
      *(double *)(iVar7 + iVar5 * 8 + 0x4cf) = (double)lVar10;
    }
    if (local_6 == 2) break;
    local_6 = local_6 + 1;
  }
  FUN_10d8_31d2((int)*(undefined4 *)(iVar7 + 0x1c0),
                (int)((ulong)*(undefined4 *)(iVar7 + 0x1c0) >> 0x10));
  return;
}



/* ---- FUN_1008_1a6a @ 1008:1a6a  (1122 octets) ---- */

void __stdcall16far FUN_1008_1a6a(undefined4 param_1,undefined4 *param_2)

{
  undefined2 *puVar1;
  long lVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  byte extraout_AH;
  int iVar7;
  int iVar8;
  undefined2 uVar9;
  undefined2 uVar10;
  undefined2 uVar11;
  undefined2 unaff_SS;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined2 uVar15;
  undefined2 uVar16;
  undefined2 uVar17;
  undefined local_512 [256];
  undefined local_412 [256];
  undefined local_312 [2];
  undefined local_310 [252];
  int local_214;
  int local_212;
  int local_210;
  undefined2 local_20e;
  undefined local_20c [256];
  int local_10c;
  int local_10a;
  undefined local_108 [256];
  int local_8;
  int local_6;
  
  local_6 = 0x1a75;
  FUN_1158_0444();
  uVar9 = (undefined2)((ulong)param_1 >> 0x10);
  iVar8 = (int)param_1;
  uVar10 = 0x1138;
  FUN_1138_1d8c((int)*(undefined4 *)(iVar8 + 0x310),
                (int)((ulong)*(undefined4 *)(iVar8 + 0x310) >> 0x10),0x1dfa,0x1160);
  local_20e = (undefined2)((ulong)*param_2 >> 0x10);
  local_210 = (int)*param_2;
  lVar2 = (long)DAT_1160_014e * (long)*(int *)(iVar8 + 0x4a5);
  iVar5 = (int)lVar2;
  if (iVar5 != lVar2) {
    uVar10 = 0x1158;
    iVar5 = FUN_1158_043e(0x1138);
  }
  iVar6 = iVar5 + *(int *)(local_210 + 0xfe);
  if (SCARRY2(iVar5,*(int *)(local_210 + 0xfe))) {
    iVar6 = FUN_1158_043e(uVar10);
  }
  FUN_10f8_701b(local_210,local_20e,iVar6,iVar6 >> 0xf);
  iVar5 = (uint)extraout_AH * 0x100;
  if (*(char *)(iVar8 + 0x39e) == '\0') {
    iVar5 = iVar5 + 1;
  }
  uVar10 = 0x1138;
  FUN_1138_1c77((int)*(undefined4 *)(local_210 + 0x196),
                (int)((ulong)*(undefined4 *)(local_210 + 0x196) >> 0x10),iVar5);
  lVar2 = (long)*(int *)(iVar8 + 0x3a1) * (long)*(int *)(iVar8 + 0x4a5);
  iVar5 = (int)lVar2;
  if (iVar5 != lVar2) {
    uVar10 = 0x1158;
    iVar5 = FUN_1158_043e(0x1138);
  }
  local_10a = iVar5 + 1;
  if (SCARRY2(iVar5,1)) {
    local_10a = FUN_1158_043e(uVar10);
  }
  uVar10 = 0x10f8;
  iVar5 = FUN_10f8_6e30(local_210,local_20e,0,0);
  local_10c = *(int *)(iVar8 + 0x22) - iVar5;
  if (SBORROW2(*(int *)(iVar8 + 0x22),iVar5)) {
    uVar10 = 0x1158;
    local_10c = FUN_1158_043e(0x10f8);
  }
  local_10c = local_10c / local_10a;
  if (SBORROW2(*(int *)(local_210 + 0xe8),(uint)(*(int *)(local_210 + 0xe6) == 0)) != false) {
    FUN_1158_043e(uVar10);
  }
  uVar10 = 0x1158;
  local_212 = FUN_1158_0416();
  if (0 < local_212) {
    local_6 = 1;
    while( true ) {
      uVar10 = 0x10f8;
      FUN_10f8_70c9(local_210,local_20e,local_10c,local_6,local_6 >> 0xf);
      if (local_6 == local_212) break;
      local_6 = local_6 + 1;
    }
  }
  if (SBORROW2(*(int *)(local_210 + 0xe8),(uint)(*(int *)(local_210 + 0xe6) == 0)) != false) {
    FUN_1158_043e(uVar10);
  }
  uVar10 = 0x1158;
  local_212 = FUN_1158_0416();
  if (-1 < local_212) {
    local_6 = 0;
    while( true ) {
      if (SBORROW2(*(int *)(local_210 + 0x10c),(uint)(*(int *)(local_210 + 0x10a) == 0)) != false) {
        FUN_1158_043e(uVar10);
      }
      uVar10 = 0x1158;
      local_214 = FUN_1158_0416();
      if (-1 < local_214) {
        local_8 = 0;
        while( true ) {
          if (local_8 < 1) {
            FUN_10f8_9b08(local_210,local_20e,0x1a3c,uVar10,local_8,local_6);
          }
          else if (local_6 % *(int *)(iVar8 + 0x4a5) == 0) {
            FUN_10f8_9b08(local_210,local_20e,0x1a44,uVar10,local_8,local_6);
          }
          else {
            FUN_10f8_9b08(local_210,local_20e,0x1a47,uVar10,local_8,local_6);
          }
          uVar10 = 0x10f8;
          if (local_8 == local_214) break;
          local_8 = local_8 + 1;
        }
      }
      if (local_6 == local_212) break;
      local_6 = local_6 + 1;
    }
  }
  if (*(int *)(iVar8 + 0x4a5) == 2) {
    FUN_1158_17e7(0xff,local_20c,unaff_SS,0x1a4b,uVar10);
  }
  else {
    FUN_1158_17e7(0xff,local_20c,unaff_SS,0x1a52,uVar10);
  }
  puVar14 = local_310;
  uVar3 = *(undefined4 *)((int)*(undefined4 *)(iVar8 + 0x294) + 0xd8);
  uVar10 = unaff_SS;
  FUN_1148_1519((int)uVar3,(int)((ulong)uVar3 >> 0x10),0x1a59,0x1158);
  uVar11 = 0x1158;
  FUN_1158_17e7(0xff,local_108,unaff_SS,puVar14,uVar10);
  local_212 = DAT_1160_014e;
  if (0 < DAT_1160_014e) {
    iVar5 = 1;
    while( true ) {
      iVar6 = iVar5 + -1;
      uVar10 = uVar11;
      if (SBORROW2(iVar5,1)) {
        uVar10 = 0x1158;
        iVar6 = FUN_1158_043e(uVar11);
      }
      lVar2 = (long)iVar6 * (long)*(int *)(iVar8 + 0x4a5);
      iVar6 = (int)lVar2;
      uVar11 = uVar10;
      if (iVar6 != lVar2) {
        uVar11 = 0x1158;
        iVar6 = FUN_1158_043e(uVar10);
      }
      iVar7 = iVar6 + 1;
      if (SCARRY2(iVar6,1)) {
        iVar7 = FUN_1158_043e(uVar11);
      }
      uVar16 = 0;
      puVar14 = local_312;
      uVar17 = unaff_SS;
      FUN_1158_17cd(local_20c,unaff_SS);
      FUN_1158_184c(local_108,unaff_SS);
      FUN_1158_184c(0x1a5d,0x1158);
      puVar13 = local_412;
      uVar10 = unaff_SS;
      FUN_1150_08a9(iVar5,iVar5 >> 0xf);
      FUN_1158_184c(puVar13,uVar10);
      uVar11 = 0x10f8;
      FUN_10f8_9b08(local_210,local_20e,puVar14,uVar17,uVar16,iVar7);
      if (iVar5 == local_212) break;
      iVar5 = iVar5 + 1;
    }
  }
  puVar14 = local_310;
  uVar3 = *(undefined4 *)((int)*(undefined4 *)(iVar8 + 0x294) + 0xd8);
  uVar10 = unaff_SS;
  FUN_1148_1519((int)uVar3,(int)((ulong)uVar3 >> 0x10),0x1a5f,uVar11);
  FUN_1158_17e7(0xff,local_108,unaff_SS,puVar14,uVar10);
  if (SBORROW2(*(int *)(local_210 + 0xe8),(uint)(*(int *)(local_210 + 0xe6) == 0)) != false) {
    FUN_1158_043e(0x1158);
  }
  uVar10 = 0x1158;
  local_212 = FUN_1158_0416();
  if (0 < local_212) {
    local_6 = 1;
    while( true ) {
      uVar17 = 1;
      puVar14 = local_312;
      uVar11 = unaff_SS;
      iVar5 = local_6;
      FUN_1158_17cd(0x1a63,uVar10);
      FUN_1158_184c(local_108,unaff_SS);
      FUN_1158_184c(0x1a5d,0x1158);
      puVar13 = local_412;
      iVar6 = local_6 + -1;
      uVar10 = unaff_SS;
      if (SBORROW2(local_6,1)) {
        iVar6 = FUN_1158_043e(0x1158,puVar13);
      }
      iVar6 = iVar6 % *(int *)(iVar8 + 0x4a5);
      iVar7 = iVar6 + 1;
      if (SCARRY2(iVar6,1)) {
        iVar7 = FUN_1158_043e(0x1158,puVar13);
      }
      FUN_1150_08a9(iVar7,iVar7 >> 0xf);
      FUN_1158_184c(puVar13,uVar10);
      uVar10 = 0x10f8;
      FUN_10f8_9b08(local_210,local_20e,puVar14,uVar11,uVar17,iVar5);
      if (local_6 == local_212) break;
      local_6 = local_6 + 1;
    }
  }
  puVar4 = (undefined4 *)*(undefined4 *)((int)*(undefined4 *)(iVar8 + 0x294) + 0xd8);
  puVar1 = (undefined2 *)((int)*puVar4 + 0x10);
  iVar5 = (*(code *)*puVar1)(uVar10,(undefined4 *)puVar4,(int)((ulong)puVar4 >> 0x10));
  iVar6 = iVar5 + -1;
  uVar11 = uVar10;
  if (SBORROW2(iVar5,1)) {
    uVar11 = 0x1158;
    iVar6 = FUN_1158_043e(uVar10);
  }
  if (1 < iVar6) {
    local_8 = 2;
    local_212 = iVar6;
    while( true ) {
      uVar15 = 0;
      puVar14 = local_512;
      puVar13 = local_412;
      uVar17 = unaff_SS;
      uVar16 = unaff_SS;
      iVar5 = local_8;
      FUN_1158_17cd(0x1a67,uVar11);
      puVar12 = local_312;
      uVar10 = unaff_SS;
      FUN_1150_08a9(local_8,local_8 >> 0xf);
      FUN_1158_184c(puVar12,uVar10);
      uVar3 = *(undefined4 *)((int)*(undefined4 *)(iVar8 + 0x294) + 0xd8);
      FUN_1148_1519((int)uVar3,(int)((ulong)uVar3 >> 0x10),puVar13,uVar17);
      uVar11 = 0x10f8;
      FUN_10f8_9b08(local_210,local_20e,puVar14,uVar16,iVar5,uVar15);
      if (local_8 == local_212) break;
      local_8 = local_8 + 1;
    }
  }
  return;
}



/* ---- FUN_1008_236d @ 1008:236d  (415 octets) ---- */

void __stdcall16far
FUN_1008_236d(int param_1,undefined4 param_2,undefined4 param_3,int *param_4,int param_5)

{
  undefined2 *puVar1;
  unkbyte10 Var2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined2 unaff_SS;
  undefined uVar6;
  unkbyte10 in_ST0;
  undefined4 *puVar7;
  undefined4 uVar8;
  undefined2 uVar9;
  undefined *puVar10;
  undefined2 uVar11;
  undefined local_218 [10];
  undefined local_20e [8];
  undefined local_206 [238];
  undefined *local_118;
  undefined local_110 [2];
  undefined2 uStack_10e;
  undefined2 uStack_10c;
  undefined3 uStack_109;
  undefined4 local_106;
  undefined local_102 [252];
  undefined2 uStack_6;
  
  uStack_6 = 0x2378;
  FUN_1158_0444();
  local_106 = *(undefined4 *)*(undefined4 *)(param_1 + 10);
  uVar6 = param_5 % *(int *)(param_1 + -8) == 0;
  if ((bool)uVar6) {
    FUN_1158_17e7(0xff,local_102,unaff_SS,0x2363,0x1158);
  }
  else {
    local_102[0] = 0;
  }
  puVar10 = local_206;
  uVar3 = unaff_SS;
  FUN_1158_17cd(local_102,unaff_SS);
  FUN_1158_184c(0x2366,0x1158);
  FUN_1158_17e7(0xff,local_102,unaff_SS,puVar10,uVar3);
  uVar4 = (undefined2)((ulong)param_3 >> 0x10);
  uVar3 = (undefined2)param_3;
  FUN_1158_18be(0x236a,0x1158,uVar3,uVar4);
  uVar5 = (undefined2)((ulong)param_2 >> 0x10);
  if ((bool)uVar6) {
    FUN_1158_17cd(local_102,unaff_SS);
    puVar10 = local_20e;
    uVar9 = 0x1158;
    uVar4 = 0x236a;
    uVar8 = *(undefined4 *)((int)*(undefined4 *)(param_1 + 6) + 0x1c0);
    uVar3 = unaff_SS;
    puVar7 = (undefined4 *)FUN_10d8_3b9b((int)uVar8,(int)((ulong)uVar8 >> 0x10),(int)param_2,uVar5);
    puVar1 = (undefined2 *)((int)*puVar7 + 0x44);
    uVar8 = (*(code *)*puVar1)(0x10d8,puVar7,uVar4,uVar9,puVar10);
    Var2 = _local_110;
    uStack_109 = SUB103(Var2,7);
    _local_110 = (uint7)CONCAT24((int)((ulong)uVar8 >> 0x10),CONCAT22((int)uVar8,local_110));
    FUN_1150_1034(0,&uStack_10e,unaff_SS,puVar7);
    FUN_1158_184c(uVar4,uVar9);
    FUN_1158_17e7(0xff,local_102,unaff_SS,puVar10,uVar3);
  }
  else {
    FUN_1158_17cd(local_102,unaff_SS);
    puVar10 = local_218;
    uVar9 = *(undefined2 *)((int)*(undefined4 *)(param_1 + 6) + 0x3a3);
    uVar8 = *(undefined4 *)((int)*(undefined4 *)(param_1 + 6) + 0x1c0);
    uVar11 = unaff_SS;
    puVar7 = (undefined4 *)FUN_10d8_3b9b((int)uVar8,(int)((ulong)uVar8 >> 0x10),(int)param_2,uVar5);
    puVar1 = (undefined2 *)((int)*puVar7 + 0x40);
    (*(code *)*puVar1)(0x10d8,puVar7,uVar3,uVar4,uVar9,puVar10);
    local_118 = local_110;
    _local_110 = in_ST0;
    FUN_1080_3093(0,&local_118,unaff_SS,puVar7,uVar3);
    FUN_1158_184c(uVar4,uVar9);
    FUN_1158_17e7(0xff,local_102,unaff_SS,puVar10,uVar11);
  }
  FUN_10f8_9b08((int)local_106,(int)((ulong)local_106 >> 0x10),local_102,unaff_SS,*param_4,param_5);
  *param_4 = *param_4 + 1;
  return;
}



/* ---- FUN_1008_2516 @ 1008:2516  (415 octets) ---- */

void __stdcall16far
FUN_1008_2516(int param_1,undefined4 param_2,undefined4 param_3,int *param_4,int param_5)

{
  undefined2 *puVar1;
  unkbyte10 Var2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined2 unaff_SS;
  undefined uVar6;
  unkbyte10 in_ST0;
  undefined4 *puVar7;
  undefined4 uVar8;
  undefined2 uVar9;
  undefined *puVar10;
  undefined2 uVar11;
  undefined local_218 [10];
  undefined local_20e [8];
  undefined local_206 [238];
  undefined *local_118;
  undefined local_110 [2];
  undefined2 uStack_10e;
  undefined2 uStack_10c;
  undefined3 uStack_109;
  undefined4 local_106;
  undefined local_102 [252];
  undefined2 uStack_6;
  
  uStack_6 = 0x2521;
  FUN_1158_0444();
  local_106 = *(undefined4 *)*(undefined4 *)(param_1 + 10);
  uVar6 = param_5 % *(int *)(param_1 + -8) == 0;
  if ((bool)uVar6) {
    FUN_1158_17e7(0xff,local_102,unaff_SS,0x250c,0x1158);
  }
  else {
    local_102[0] = 0;
  }
  puVar10 = local_206;
  uVar3 = unaff_SS;
  FUN_1158_17cd(local_102,unaff_SS);
  FUN_1158_184c(0x250f,0x1158);
  FUN_1158_17e7(0xff,local_102,unaff_SS,puVar10,uVar3);
  uVar4 = (undefined2)((ulong)param_3 >> 0x10);
  uVar3 = (undefined2)param_3;
  FUN_1158_18be(0x2513,0x1158,uVar3,uVar4);
  uVar5 = (undefined2)((ulong)param_2 >> 0x10);
  if ((bool)uVar6) {
    FUN_1158_17cd(local_102,unaff_SS);
    puVar10 = local_20e;
    uVar9 = 0x1158;
    uVar4 = 0x2513;
    uVar8 = *(undefined4 *)((int)*(undefined4 *)(param_1 + 6) + 0x1bc);
    uVar3 = unaff_SS;
    puVar7 = (undefined4 *)FUN_10d8_3b9b((int)uVar8,(int)((ulong)uVar8 >> 0x10),(int)param_2,uVar5);
    puVar1 = (undefined2 *)((int)*puVar7 + 0x44);
    uVar8 = (*(code *)*puVar1)(0x10d8,puVar7,uVar4,uVar9,puVar10);
    Var2 = _local_110;
    uStack_109 = SUB103(Var2,7);
    _local_110 = (uint7)CONCAT24((int)((ulong)uVar8 >> 0x10),CONCAT22((int)uVar8,local_110));
    FUN_1150_1034(0,&uStack_10e,unaff_SS,puVar7);
    FUN_1158_184c(uVar4,uVar9);
    FUN_1158_17e7(0xff,local_102,unaff_SS,puVar10,uVar3);
  }
  else {
    FUN_1158_17cd(local_102,unaff_SS);
    puVar10 = local_218;
    uVar9 = *(undefined2 *)((int)*(undefined4 *)(param_1 + 6) + 0x3a3);
    uVar8 = *(undefined4 *)((int)*(undefined4 *)(param_1 + 6) + 0x1bc);
    uVar11 = unaff_SS;
    puVar7 = (undefined4 *)FUN_10d8_3b9b((int)uVar8,(int)((ulong)uVar8 >> 0x10),(int)param_2,uVar5);
    puVar1 = (undefined2 *)((int)*puVar7 + 0x40);
    (*(code *)*puVar1)(0x10d8,puVar7,uVar3,uVar4,uVar9,puVar10);
    local_118 = local_110;
    _local_110 = in_ST0;
    FUN_1080_3093(0,&local_118,unaff_SS,puVar7,uVar3);
    FUN_1158_184c(uVar4,uVar9);
    FUN_1158_17e7(0xff,local_102,unaff_SS,puVar10,uVar11);
  }
  FUN_10f8_9b08((int)local_106,(int)((ulong)local_106 >> 0x10),local_102,unaff_SS,*param_4,param_5);
  *param_4 = *param_4 + 1;
  return;
}



/* ---- FUN_1008_2858 @ 1008:2858  (2924 octets) ---- */

void __stdcall16far FUN_1008_2858(undefined4 param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  undefined2 uVar8;
  char *pcVar9;
  char *pcVar10;
  undefined2 unaff_SS;
  undefined *puVar11;
  undefined2 uVar12;
  undefined *puVar13;
  undefined2 uVar14;
  undefined2 uVar15;
  undefined2 uVar16;
  undefined local_30a [256];
  undefined local_20a [256];
  undefined local_10a [220];
  int local_2e;
  int local_2c;
  undefined local_2a;
  int local_26;
  uint local_24;
  uint local_22;
  undefined local_20;
  int local_1e;
  int local_1c;
  uint local_1a;
  undefined local_18;
  int local_16;
  int local_14;
  undefined local_12;
  undefined uStack_11;
  undefined4 local_e;
  int local_a;
  int local_8;
  int local_6;
  int iVar17;
  
  local_6 = 0x2863;
  FUN_1158_0444();
  uVar8 = (undefined2)((ulong)param_1 >> 0x10);
  iVar7 = (int)param_1;
  FUN_1008_161f(iVar7,uVar8);
  local_e._2_2_ = (int)((ulong)*(undefined4 *)(iVar7 + 0x20c) >> 0x10);
  local_e._0_2_ = (undefined2)*(undefined4 *)(iVar7 + 0x20c);
  FUN_10d8_31d2((undefined2)local_e,local_e._2_2_);
  FUN_10e0_2ffb((undefined2)local_e,local_e._2_2_,1);
  FUN_10e0_2ed2((undefined2)local_e,local_e._2_2_,0);
  FUN_10d8_31bf((undefined2)local_e,local_e._2_2_);
  local_e._2_2_ = (int)((ulong)*(undefined4 *)(iVar7 + 0x1c8) >> 0x10);
  local_e._0_2_ = (undefined2)*(undefined4 *)(iVar7 + 0x1c8);
  FUN_10d8_31d2((undefined2)local_e,local_e._2_2_);
  FUN_10e0_2ffb((undefined2)local_e,local_e._2_2_,1);
  FUN_10e0_2ed2((undefined2)local_e,local_e._2_2_,0);
  FUN_10d8_31bf((undefined2)local_e,local_e._2_2_);
  local_e._2_2_ = (int)((ulong)*(undefined4 *)(iVar7 + 0x1d0) >> 0x10);
  local_e._0_2_ = (undefined2)*(undefined4 *)(iVar7 + 0x1d0);
  FUN_10d8_31d2((undefined2)local_e,local_e._2_2_);
  FUN_10e0_2ffb((undefined2)local_e,local_e._2_2_,1);
  FUN_10e0_2ed2((undefined2)local_e,local_e._2_2_,0);
  FUN_10d8_31bf((undefined2)local_e,local_e._2_2_);
  local_e._2_2_ = (int)((ulong)*(undefined4 *)(iVar7 + 0x1c4) >> 0x10);
  local_e._0_2_ = (undefined2)*(undefined4 *)(iVar7 + 0x1c4);
  FUN_10d8_31d2((undefined2)local_e,local_e._2_2_);
  FUN_10e0_2ffb((undefined2)local_e,local_e._2_2_,1);
  FUN_10e0_2ed2((undefined2)local_e,local_e._2_2_,0);
  FUN_10d8_31bf((undefined2)local_e,local_e._2_2_);
  local_e._2_2_ = (int)((ulong)*(undefined4 *)(iVar7 + 0x1d4) >> 0x10);
  local_e._0_2_ = (undefined2)*(undefined4 *)(iVar7 + 0x1d4);
  FUN_10d8_31d2((undefined2)local_e,local_e._2_2_);
  FUN_10e0_2ffb((undefined2)local_e,local_e._2_2_,1);
  FUN_10e0_2ed2((undefined2)local_e,local_e._2_2_,0);
  FUN_10d8_31bf((undefined2)local_e,local_e._2_2_);
  local_e._2_2_ = (int)((ulong)*(undefined4 *)(iVar7 + 0x1c0) >> 0x10);
  local_e._0_2_ = (undefined2)*(undefined4 *)(iVar7 + 0x1c0);
  FUN_10d8_31d2((undefined2)local_e,local_e._2_2_);
  FUN_10e0_2ffb((undefined2)local_e,local_e._2_2_,1);
  FUN_10e0_2ed2((undefined2)local_e,local_e._2_2_,0);
  FUN_10d8_31bf((undefined2)local_e,local_e._2_2_);
  local_e._2_2_ = (int)((ulong)*(undefined4 *)(iVar7 + 0x1bc) >> 0x10);
  local_e._0_2_ = (undefined2)*(undefined4 *)(iVar7 + 0x1bc);
  FUN_10d8_31d2((undefined2)local_e,local_e._2_2_);
  FUN_10e0_2ffb((undefined2)local_e,local_e._2_2_,1);
  FUN_10e0_2ed2((undefined2)local_e,local_e._2_2_,0);
  FUN_10d8_31bf((undefined2)local_e,local_e._2_2_);
  local_e = *(undefined4 *)(iVar7 + 0x1c8);
  local_16 = *(int *)(iVar7 + 0x39f);
  local_14 = local_16 >> 0xf;
  local_12 = 0;
  pcVar9 = (char *)s_iTime_1160_10dc + 4;
  cVar2 = FUN_10e0_2895((int)local_e,(int)((ulong)local_e >> 0x10),0,&local_16,unaff_SS);
  if (cVar2 == '\0') {
    pcVar9 = (char *)s_devices_1160_1007 + 1;
    FUN_1008_0c19(iVar7,uVar8);
  }
  uVar16 = 0;
  uVar15 = 0;
  puVar13 = local_20a;
  uVar14 = unaff_SS;
  FUN_1158_17cd(0x26b9,pcVar9);
  puVar11 = local_10a;
  uVar1 = *(undefined4 *)((int)*(undefined4 *)(iVar7 + 0x294) + 0xd8);
  uVar12 = unaff_SS;
  FUN_1148_1519((int)uVar1,(int)((ulong)uVar1 >> 0x10),0x26b5,0x1158);
  FUN_1158_184c(puVar11,uVar12);
  FUN_1158_184c(0x26bd,0x1158);
  puVar11 = local_30a;
  uVar12 = unaff_SS;
  FUN_1150_08a9(*(int *)(iVar7 + 0x39f),*(int *)(iVar7 + 0x39f) >> 0xf);
  FUN_1158_184c(puVar11,uVar12);
  pcVar9 = (char *)0x10f8;
  FUN_10f8_9b08((int)*param_2,(int)((ulong)*param_2 >> 0x10),puVar13,uVar14,uVar15,uVar16);
  local_a = *(int *)(iVar7 + 0x4a5);
  local_e = CONCAT22(DAT_1160_014e,(undefined2)local_e);
  if (0 < DAT_1160_014e) {
    iVar17 = 1;
    while( true ) {
      uVar1 = *(undefined4 *)(iVar7 + 0x1c4);
      local_14 = (int)uVar1;
      local_12 = (undefined)((ulong)uVar1 >> 0x10);
      uStack_11 = (undefined)((ulong)uVar1 >> 0x18);
      uVar3 = *(int *)(iVar7 + 0x39f) - 1;
      if (SBORROW2(*(int *)(iVar7 + 0x39f),1)) {
        uVar3 = FUN_1158_043e(pcVar9);
      }
      local_22 = (int)uVar3 >> 0xf;
      local_20 = 0;
      uVar6 = iVar17 >> 0xf;
      local_18 = 0;
      pcVar9 = (char *)s_iTime_1160_10dc + 4;
      local_24 = uVar3;
      local_1c = iVar17;
      local_1a = uVar6;
      cVar2 = FUN_10e0_2895(local_14,(int)(CONCAT13(uStack_11,CONCAT12(local_12,local_14)) >> 0x10),
                            1,&local_24,unaff_SS);
      if (cVar2 == '\0') {
        pcVar9 = (char *)s_devices_1160_1007 + 1;
        FUN_1008_0c19(iVar7,uVar8);
      }
      local_12 = (undefined)local_a;
      uStack_11 = (undefined)((uint)local_a >> 8);
      if (0 < local_a) {
        local_6 = 1;
        while( true ) {
          local_14 = (int)((ulong)*(undefined4 *)(iVar7 + 0x20c) >> 0x10);
          local_16 = (int)*(undefined4 *)(iVar7 + 0x20c);
          local_1c = local_6 >> 0xf;
          local_1e = local_6;
          local_1a = local_1a & 0xff00;
          cVar2 = FUN_10e0_2895(local_16,local_14,0,&local_1e,unaff_SS);
          if (cVar2 == '\0') {
            FUN_1008_0c19(iVar7,uVar8);
          }
          local_14 = (int)((ulong)*(undefined4 *)(iVar7 + 0x1d0) >> 0x10);
          local_16 = (int)*(undefined4 *)(iVar7 + 0x1d0);
          local_26 = *(int *)(iVar7 + 0x39f);
          local_24 = local_26 >> 0xf;
          local_22 = local_22 & 0xff00;
          local_1c = local_6 >> 0xf;
          local_1e = local_6;
          local_1a = local_1a & 0xff00;
          pcVar9 = (char *)s_iTime_1160_10dc + 4;
          cVar2 = FUN_10e0_2895(local_16,local_14,1,&local_26,unaff_SS);
          if (cVar2 == '\0') {
            pcVar9 = (char *)s_devices_1160_1007 + 1;
            FUN_1008_0c19(iVar7,uVar8);
          }
          local_14 = (int)((ulong)*(undefined4 *)(iVar7 + 0x1d4) >> 0x10);
          local_16 = (int)*(undefined4 *)(iVar7 + 0x1d4);
          iVar4 = *(int *)(iVar7 + 0x39f) + -1;
          if (SBORROW2(*(int *)(iVar7 + 0x39f),1)) {
            iVar4 = FUN_1158_043e(pcVar9);
          }
          local_2c = iVar4 >> 0xf;
          local_2a = 0;
          local_22 = local_22 & 0xff00;
          local_1c = local_6 >> 0xf;
          local_1e = local_6;
          local_1a = local_1a & 0xff00;
          local_2e = iVar4;
          local_26 = iVar17;
          local_24 = uVar6;
          cVar2 = FUN_10e0_2895(local_16,local_14,2,&local_2e,unaff_SS);
          if (cVar2 == '\0') {
            FUN_1008_0c19(iVar7,uVar8);
          }
          local_14 = (int)((ulong)*(undefined4 *)(iVar7 + 0x1c0) >> 0x10);
          local_16 = (int)*(undefined4 *)(iVar7 + 0x1c0);
          local_2e = *(int *)(iVar7 + 0x39f);
          local_2c = local_2e >> 0xf;
          local_2a = 0;
          local_22 = local_22 & 0xff00;
          local_1c = local_6 >> 0xf;
          local_1e = local_6;
          local_1a = local_1a & 0xff00;
          local_26 = iVar17;
          local_24 = uVar6;
          cVar2 = FUN_10e0_2895(local_16,local_14,2,&local_2e,unaff_SS);
          if (cVar2 == '\0') {
            FUN_1008_0c19(iVar7,uVar8);
          }
          local_14 = (int)((ulong)*(undefined4 *)(iVar7 + 0x1bc) >> 0x10);
          local_16 = (int)*(undefined4 *)(iVar7 + 0x1bc);
          local_2e = *(int *)(iVar7 + 0x39f);
          local_2c = local_2e >> 0xf;
          local_2a = 0;
          local_22 = local_22 & 0xff00;
          local_1c = local_6 >> 0xf;
          local_1e = local_6;
          local_1a = local_1a & 0xff00;
          pcVar9 = (char *)s_iTime_1160_10dc + 4;
          local_26 = iVar17;
          local_24 = uVar6;
          cVar2 = FUN_10e0_2895(local_16,local_14,2,&local_2e,unaff_SS);
          if (cVar2 == '\0') {
            pcVar9 = (char *)s_devices_1160_1007 + 1;
            FUN_1008_0c19(iVar7,uVar8);
          }
          local_8 = 3;
          iVar4 = iVar17 + -1;
          pcVar10 = pcVar9;
          if (SBORROW2(iVar17,1)) {
            pcVar10 = (char *)0x1158;
            iVar4 = FUN_1158_043e(pcVar9);
          }
          iVar5 = (int)((long)iVar4 * (long)local_a);
          pcVar9 = pcVar10;
          if ((long)iVar5 != (long)iVar4 * (long)local_a) {
            pcVar9 = (char *)0x1158;
            iVar5 = FUN_1158_043e(pcVar10);
          }
          iVar4 = iVar5 + local_6;
          pcVar10 = pcVar9;
          if (SCARRY2(iVar5,local_6)) {
            pcVar10 = (char *)0x1158;
            iVar4 = FUN_1158_043e(pcVar9);
          }
          pcVar9 = (char *)s_devices_1160_1007 + 1;
          FUN_1008_236d(&stack0xfffe,0x26c2,pcVar10,0x26bf,pcVar10,&local_8,unaff_SS,iVar4);
          iVar4 = iVar17 + -1;
          if (SBORROW2(iVar17,1)) {
            pcVar9 = (char *)0x1158;
            iVar4 = FUN_1158_043e((char *)s_devices_1160_1007 + 1);
          }
          iVar5 = (int)((long)iVar4 * (long)local_a);
          pcVar10 = pcVar9;
          if ((long)iVar5 != (long)iVar4 * (long)local_a) {
            pcVar10 = (char *)0x1158;
            iVar5 = FUN_1158_043e(pcVar9);
          }
          iVar4 = iVar5 + local_6;
          pcVar9 = pcVar10;
          if (SCARRY2(iVar5,local_6)) {
            pcVar9 = (char *)0x1158;
            iVar4 = FUN_1158_043e(pcVar10);
          }
          pcVar10 = (char *)s_devices_1160_1007 + 1;
          FUN_1008_2516(&stack0xfffe,0x26db,pcVar9,0x26d4,pcVar9,&local_8,unaff_SS,iVar4);
          iVar4 = iVar17 + -1;
          if (SBORROW2(iVar17,1)) {
            pcVar10 = (char *)0x1158;
            iVar4 = FUN_1158_043e((char *)s_devices_1160_1007 + 1);
          }
          iVar5 = (int)((long)iVar4 * (long)local_a);
          pcVar9 = pcVar10;
          if ((long)iVar5 != (long)iVar4 * (long)local_a) {
            pcVar9 = (char *)0x1158;
            iVar5 = FUN_1158_043e(pcVar10);
          }
          iVar4 = iVar5 + local_6;
          pcVar10 = pcVar9;
          if (SCARRY2(iVar5,local_6)) {
            pcVar10 = (char *)0x1158;
            iVar4 = FUN_1158_043e(pcVar9);
          }
          pcVar9 = (char *)s_devices_1160_1007 + 1;
          FUN_1008_2516(&stack0xfffe,0x26e5,pcVar10,0x26d4,pcVar10,&local_8,unaff_SS,iVar4);
          iVar4 = iVar17 + -1;
          if (SBORROW2(iVar17,1)) {
            pcVar9 = (char *)0x1158;
            iVar4 = FUN_1158_043e((char *)s_devices_1160_1007 + 1);
          }
          iVar5 = (int)((long)iVar4 * (long)local_a);
          pcVar10 = pcVar9;
          if ((long)iVar5 != (long)iVar4 * (long)local_a) {
            pcVar10 = (char *)0x1158;
            iVar5 = FUN_1158_043e(pcVar9);
          }
          iVar4 = iVar5 + local_6;
          pcVar9 = pcVar10;
          if (SCARRY2(iVar5,local_6)) {
            pcVar9 = (char *)0x1158;
            iVar4 = FUN_1158_043e(pcVar10);
          }
          pcVar10 = (char *)s_devices_1160_1007 + 1;
          FUN_1008_2516(&stack0xfffe,0x26f1,pcVar9,0x26d4,pcVar9,&local_8,unaff_SS,iVar4);
          iVar4 = iVar17 + -1;
          if (SBORROW2(iVar17,1)) {
            pcVar10 = (char *)0x1158;
            iVar4 = FUN_1158_043e((char *)s_devices_1160_1007 + 1);
          }
          iVar5 = (int)((long)iVar4 * (long)local_a);
          pcVar9 = pcVar10;
          if ((long)iVar5 != (long)iVar4 * (long)local_a) {
            pcVar9 = (char *)0x1158;
            iVar5 = FUN_1158_043e(pcVar10);
          }
          iVar4 = iVar5 + local_6;
          pcVar10 = pcVar9;
          if (SCARRY2(iVar5,local_6)) {
            pcVar10 = (char *)0x1158;
            iVar4 = FUN_1158_043e(pcVar9);
          }
          pcVar9 = (char *)s_devices_1160_1007 + 1;
          FUN_1008_2516(&stack0xfffe,0x2701,pcVar10,0x26d4,pcVar10,&local_8,unaff_SS,iVar4);
          iVar4 = iVar17 + -1;
          if (SBORROW2(iVar17,1)) {
            pcVar9 = (char *)0x1158;
            iVar4 = FUN_1158_043e((char *)s_devices_1160_1007 + 1);
          }
          iVar5 = (int)((long)iVar4 * (long)local_a);
          pcVar10 = pcVar9;
          if ((long)iVar5 != (long)iVar4 * (long)local_a) {
            pcVar10 = (char *)0x1158;
            iVar5 = FUN_1158_043e(pcVar9);
          }
          iVar4 = iVar5 + local_6;
          pcVar9 = pcVar10;
          if (SCARRY2(iVar5,local_6)) {
            pcVar9 = (char *)0x1158;
            iVar4 = FUN_1158_043e(pcVar10);
          }
          pcVar10 = (char *)s_devices_1160_1007 + 1;
          FUN_1008_2516(&stack0xfffe,0x270d,pcVar9,0x26bf,pcVar9,&local_8,unaff_SS,iVar4);
          local_8 = local_8 + 1;
          iVar4 = iVar17 + -1;
          if (SBORROW2(iVar17,1)) {
            pcVar10 = (char *)0x1158;
            iVar4 = FUN_1158_043e((char *)s_devices_1160_1007 + 1);
          }
          iVar5 = (int)((long)iVar4 * (long)local_a);
          pcVar9 = pcVar10;
          if ((long)iVar5 != (long)iVar4 * (long)local_a) {
            pcVar9 = (char *)0x1158;
            iVar5 = FUN_1158_043e(pcVar10);
          }
          iVar4 = iVar5 + local_6;
          pcVar10 = pcVar9;
          if (SCARRY2(iVar5,local_6)) {
            pcVar10 = (char *)0x1158;
            iVar4 = FUN_1158_043e(pcVar9);
          }
          pcVar9 = (char *)s_devices_1160_1007 + 1;
          FUN_1008_236d(&stack0xfffe,0x271e,pcVar10,0x26d4,pcVar10,&local_8,unaff_SS,iVar4);
          iVar4 = iVar17 + -1;
          if (SBORROW2(iVar17,1)) {
            pcVar9 = (char *)0x1158;
            iVar4 = FUN_1158_043e((char *)s_devices_1160_1007 + 1);
          }
          iVar5 = (int)((long)iVar4 * (long)local_a);
          pcVar10 = pcVar9;
          if ((long)iVar5 != (long)iVar4 * (long)local_a) {
            pcVar10 = (char *)0x1158;
            iVar5 = FUN_1158_043e(pcVar9);
          }
          iVar4 = iVar5 + local_6;
          pcVar9 = pcVar10;
          if (SCARRY2(iVar5,local_6)) {
            pcVar9 = (char *)0x1158;
            iVar4 = FUN_1158_043e(pcVar10);
          }
          pcVar10 = (char *)s_devices_1160_1007 + 1;
          FUN_1008_2516(&stack0xfffe,0x2723,pcVar9,0x26d4,pcVar9,&local_8,unaff_SS,iVar4);
          iVar4 = iVar17 + -1;
          if (SBORROW2(iVar17,1)) {
            pcVar10 = (char *)0x1158;
            iVar4 = FUN_1158_043e((char *)s_devices_1160_1007 + 1);
          }
          iVar5 = (int)((long)iVar4 * (long)local_a);
          pcVar9 = pcVar10;
          if ((long)iVar5 != (long)iVar4 * (long)local_a) {
            pcVar9 = (char *)0x1158;
            iVar5 = FUN_1158_043e(pcVar10);
          }
          iVar4 = iVar5 + local_6;
          pcVar10 = pcVar9;
          if (SCARRY2(iVar5,local_6)) {
            pcVar10 = (char *)0x1158;
            iVar4 = FUN_1158_043e(pcVar9);
          }
          pcVar9 = (char *)s_devices_1160_1007 + 1;
          FUN_1008_236d(&stack0xfffe,0x2732,pcVar10,0x26d4,pcVar10,&local_8,unaff_SS,iVar4);
          iVar4 = iVar17 + -1;
          if (SBORROW2(iVar17,1)) {
            pcVar9 = (char *)0x1158;
            iVar4 = FUN_1158_043e((char *)s_devices_1160_1007 + 1);
          }
          iVar5 = (int)((long)iVar4 * (long)local_a);
          pcVar10 = pcVar9;
          if ((long)iVar5 != (long)iVar4 * (long)local_a) {
            pcVar10 = (char *)0x1158;
            iVar5 = FUN_1158_043e(pcVar9);
          }
          iVar4 = iVar5 + local_6;
          pcVar9 = pcVar10;
          if (SCARRY2(iVar5,local_6)) {
            pcVar9 = (char *)0x1158;
            iVar4 = FUN_1158_043e(pcVar10);
          }
          pcVar10 = (char *)s_devices_1160_1007 + 1;
          FUN_1008_2516(&stack0xfffe,0x273c,pcVar9,0x26d4,pcVar9,&local_8,unaff_SS,iVar4);
          iVar4 = iVar17 + -1;
          if (SBORROW2(iVar17,1)) {
            pcVar10 = (char *)0x1158;
            iVar4 = FUN_1158_043e((char *)s_devices_1160_1007 + 1);
          }
          iVar5 = (int)((long)iVar4 * (long)local_a);
          pcVar9 = pcVar10;
          if ((long)iVar5 != (long)iVar4 * (long)local_a) {
            pcVar9 = (char *)0x1158;
            iVar5 = FUN_1158_043e(pcVar10);
          }
          iVar4 = iVar5 + local_6;
          pcVar10 = pcVar9;
          if (SCARRY2(iVar5,local_6)) {
            pcVar10 = (char *)0x1158;
            iVar4 = FUN_1158_043e(pcVar9);
          }
          pcVar9 = (char *)s_devices_1160_1007 + 1;
          FUN_1008_2516(&stack0xfffe,0x274b,pcVar10,0x26d4,pcVar10,&local_8,unaff_SS,iVar4);
          iVar4 = iVar17 + -1;
          if (SBORROW2(iVar17,1)) {
            pcVar9 = (char *)0x1158;
            iVar4 = FUN_1158_043e((char *)s_devices_1160_1007 + 1);
          }
          iVar5 = (int)((long)iVar4 * (long)local_a);
          pcVar10 = pcVar9;
          if ((long)iVar5 != (long)iVar4 * (long)local_a) {
            pcVar10 = (char *)0x1158;
            iVar5 = FUN_1158_043e(pcVar9);
          }
          iVar4 = iVar5 + local_6;
          pcVar9 = pcVar10;
          if (SCARRY2(iVar5,local_6)) {
            pcVar9 = (char *)0x1158;
            iVar4 = FUN_1158_043e(pcVar10);
          }
          pcVar10 = (char *)s_devices_1160_1007 + 1;
          FUN_1008_2516(&stack0xfffe,0x2755,pcVar9,0x26d4,pcVar9,&local_8,unaff_SS,iVar4);
          iVar4 = iVar17 + -1;
          if (SBORROW2(iVar17,1)) {
            pcVar10 = (char *)0x1158;
            iVar4 = FUN_1158_043e((char *)s_devices_1160_1007 + 1);
          }
          iVar5 = (int)((long)iVar4 * (long)local_a);
          pcVar9 = pcVar10;
          if ((long)iVar5 != (long)iVar4 * (long)local_a) {
            pcVar9 = (char *)0x1158;
            iVar5 = FUN_1158_043e(pcVar10);
          }
          iVar4 = iVar5 + local_6;
          pcVar10 = pcVar9;
          if (SCARRY2(iVar5,local_6)) {
            pcVar10 = (char *)0x1158;
            iVar4 = FUN_1158_043e(pcVar9);
          }
          pcVar9 = (char *)s_devices_1160_1007 + 1;
          FUN_1008_236d(&stack0xfffe,0x2763,pcVar10,0x26bf,pcVar10,&local_8,unaff_SS,iVar4);
          iVar4 = iVar17 + -1;
          if (SBORROW2(iVar17,1)) {
            pcVar9 = (char *)0x1158;
            iVar4 = FUN_1158_043e((char *)s_devices_1160_1007 + 1);
          }
          iVar5 = (int)((long)iVar4 * (long)local_a);
          pcVar10 = pcVar9;
          if ((long)iVar5 != (long)iVar4 * (long)local_a) {
            pcVar10 = (char *)0x1158;
            iVar5 = FUN_1158_043e(pcVar9);
          }
          iVar4 = iVar5 + local_6;
          pcVar9 = pcVar10;
          if (SCARRY2(iVar5,local_6)) {
            pcVar9 = (char *)0x1158;
            iVar4 = FUN_1158_043e(pcVar10);
          }
          pcVar10 = (char *)s_devices_1160_1007 + 1;
          FUN_1008_2516(&stack0xfffe,0x2774,pcVar9,0x26d4,pcVar9,&local_8,unaff_SS,iVar4);
          iVar4 = iVar17 + -1;
          if (SBORROW2(iVar17,1)) {
            pcVar10 = (char *)0x1158;
            iVar4 = FUN_1158_043e((char *)s_devices_1160_1007 + 1);
          }
          iVar5 = (int)((long)iVar4 * (long)local_a);
          pcVar9 = pcVar10;
          if ((long)iVar5 != (long)iVar4 * (long)local_a) {
            pcVar9 = (char *)0x1158;
            iVar5 = FUN_1158_043e(pcVar10);
          }
          iVar4 = iVar5 + local_6;
          pcVar10 = pcVar9;
          if (SCARRY2(iVar5,local_6)) {
            pcVar10 = (char *)0x1158;
            iVar4 = FUN_1158_043e(pcVar9);
          }
          pcVar9 = (char *)s_devices_1160_1007 + 1;
          FUN_1008_2516(&stack0xfffe,0x2788,pcVar10,0x26d4,pcVar10,&local_8,unaff_SS,iVar4);
          iVar4 = iVar17 + -1;
          if (SBORROW2(iVar17,1)) {
            pcVar9 = (char *)0x1158;
            iVar4 = FUN_1158_043e((char *)s_devices_1160_1007 + 1);
          }
          iVar5 = (int)((long)iVar4 * (long)local_a);
          pcVar10 = pcVar9;
          if ((long)iVar5 != (long)iVar4 * (long)local_a) {
            pcVar10 = (char *)0x1158;
            iVar5 = FUN_1158_043e(pcVar9);
          }
          iVar4 = iVar5 + local_6;
          pcVar9 = pcVar10;
          if (SCARRY2(iVar5,local_6)) {
            pcVar9 = (char *)0x1158;
            iVar4 = FUN_1158_043e(pcVar10);
          }
          pcVar10 = (char *)s_devices_1160_1007 + 1;
          FUN_1008_236d(&stack0xfffe,0x279a,pcVar9,0x26bf,pcVar9,&local_8,unaff_SS,iVar4);
          iVar4 = iVar17 + -1;
          if (SBORROW2(iVar17,1)) {
            pcVar10 = (char *)0x1158;
            iVar4 = FUN_1158_043e((char *)s_devices_1160_1007 + 1);
          }
          iVar5 = (int)((long)iVar4 * (long)local_a);
          pcVar9 = pcVar10;
          if ((long)iVar5 != (long)iVar4 * (long)local_a) {
            pcVar9 = (char *)0x1158;
            iVar5 = FUN_1158_043e(pcVar10);
          }
          iVar4 = iVar5 + local_6;
          pcVar10 = pcVar9;
          if (SCARRY2(iVar5,local_6)) {
            pcVar10 = (char *)0x1158;
            iVar4 = FUN_1158_043e(pcVar9);
          }
          pcVar9 = (char *)s_devices_1160_1007 + 1;
          FUN_1008_2516(&stack0xfffe,0x27ac,pcVar10,0x26d4,pcVar10,&local_8,unaff_SS,iVar4);
          local_8 = local_8 + 1;
          iVar4 = iVar17 + -1;
          if (SBORROW2(iVar17,1)) {
            pcVar9 = (char *)0x1158;
            iVar4 = FUN_1158_043e((char *)s_devices_1160_1007 + 1);
          }
          iVar5 = (int)((long)iVar4 * (long)local_a);
          pcVar10 = pcVar9;
          if ((long)iVar5 != (long)iVar4 * (long)local_a) {
            pcVar10 = (char *)0x1158;
            iVar5 = FUN_1158_043e(pcVar9);
          }
          iVar4 = iVar5 + local_6;
          pcVar9 = pcVar10;
          if (SCARRY2(iVar5,local_6)) {
            pcVar9 = (char *)0x1158;
            iVar4 = FUN_1158_043e(pcVar10);
          }
          pcVar10 = (char *)s_devices_1160_1007 + 1;
          FUN_1008_2516(&stack0xfffe,0x27c4,pcVar9,0x27bd,pcVar9,&local_8,unaff_SS,iVar4);
          iVar4 = iVar17 + -1;
          if (SBORROW2(iVar17,1)) {
            pcVar10 = (char *)0x1158;
            iVar4 = FUN_1158_043e((char *)s_devices_1160_1007 + 1);
          }
          iVar5 = (int)((long)iVar4 * (long)local_a);
          pcVar9 = pcVar10;
          if ((long)iVar5 != (long)iVar4 * (long)local_a) {
            pcVar9 = (char *)0x1158;
            iVar5 = FUN_1158_043e(pcVar10);
          }
          iVar4 = iVar5 + local_6;
          pcVar10 = pcVar9;
          if (SCARRY2(iVar5,local_6)) {
            pcVar10 = (char *)0x1158;
            iVar4 = FUN_1158_043e(pcVar9);
          }
          pcVar9 = (char *)s_devices_1160_1007 + 1;
          FUN_1008_2516(&stack0xfffe,0x27d1,pcVar10,0x27bd,pcVar10,&local_8,unaff_SS,iVar4);
          iVar4 = iVar17 + -1;
          if (SBORROW2(iVar17,1)) {
            pcVar9 = (char *)0x1158;
            iVar4 = FUN_1158_043e((char *)s_devices_1160_1007 + 1);
          }
          iVar5 = (int)((long)iVar4 * (long)local_a);
          pcVar10 = pcVar9;
          if ((long)iVar5 != (long)iVar4 * (long)local_a) {
            pcVar10 = (char *)0x1158;
            iVar5 = FUN_1158_043e(pcVar9);
          }
          iVar4 = iVar5 + local_6;
          pcVar9 = pcVar10;
          if (SCARRY2(iVar5,local_6)) {
            pcVar9 = (char *)0x1158;
            iVar4 = FUN_1158_043e(pcVar10);
          }
          pcVar10 = (char *)s_devices_1160_1007 + 1;
          FUN_1008_2516(&stack0xfffe,0x27dd,pcVar9,0x27bd,pcVar9,&local_8,unaff_SS,iVar4);
          iVar4 = iVar17 + -1;
          if (SBORROW2(iVar17,1)) {
            pcVar10 = (char *)0x1158;
            iVar4 = FUN_1158_043e((char *)s_devices_1160_1007 + 1);
          }
          iVar5 = (int)((long)iVar4 * (long)local_a);
          pcVar9 = pcVar10;
          if ((long)iVar5 != (long)iVar4 * (long)local_a) {
            pcVar9 = (char *)0x1158;
            iVar5 = FUN_1158_043e(pcVar10);
          }
          iVar4 = iVar5 + local_6;
          pcVar10 = pcVar9;
          if (SCARRY2(iVar5,local_6)) {
            pcVar10 = (char *)0x1158;
            iVar4 = FUN_1158_043e(pcVar9);
          }
          pcVar9 = (char *)s_devices_1160_1007 + 1;
          FUN_1008_2516(&stack0xfffe,0x27ec,pcVar10,0x27bd,pcVar10,&local_8,unaff_SS,iVar4);
          iVar4 = iVar17 + -1;
          if (SBORROW2(iVar17,1)) {
            pcVar9 = (char *)0x1158;
            iVar4 = FUN_1158_043e((char *)s_devices_1160_1007 + 1);
          }
          iVar5 = (int)((long)iVar4 * (long)local_a);
          pcVar10 = pcVar9;
          if ((long)iVar5 != (long)iVar4 * (long)local_a) {
            pcVar10 = (char *)0x1158;
            iVar5 = FUN_1158_043e(pcVar9);
          }
          iVar4 = iVar5 + local_6;
          pcVar9 = pcVar10;
          if (SCARRY2(iVar5,local_6)) {
            pcVar9 = (char *)0x1158;
            iVar4 = FUN_1158_043e(pcVar10);
          }
          pcVar10 = (char *)s_devices_1160_1007 + 1;
          FUN_1008_2516(&stack0xfffe,0x27fc,pcVar9,0x27bd,pcVar9,&local_8,unaff_SS,iVar4);
          local_8 = local_8 + 1;
          iVar4 = iVar17 + -1;
          if (SBORROW2(iVar17,1)) {
            pcVar10 = (char *)0x1158;
            iVar4 = FUN_1158_043e((char *)s_devices_1160_1007 + 1);
          }
          iVar5 = (int)((long)iVar4 * (long)local_a);
          pcVar9 = pcVar10;
          if ((long)iVar5 != (long)iVar4 * (long)local_a) {
            pcVar9 = (char *)0x1158;
            iVar5 = FUN_1158_043e(pcVar10);
          }
          iVar4 = iVar5 + local_6;
          pcVar10 = pcVar9;
          if (SCARRY2(iVar5,local_6)) {
            pcVar10 = (char *)0x1158;
            iVar4 = FUN_1158_043e(pcVar9);
          }
          pcVar9 = (char *)s_devices_1160_1007 + 1;
          FUN_1008_2516(&stack0xfffe,0x280b,pcVar10,0x26bf,pcVar10,&local_8,unaff_SS,iVar4);
          iVar4 = iVar17 + -1;
          if (SBORROW2(iVar17,1)) {
            pcVar9 = (char *)0x1158;
            iVar4 = FUN_1158_043e((char *)s_devices_1160_1007 + 1);
          }
          iVar5 = (int)((long)iVar4 * (long)local_a);
          pcVar10 = pcVar9;
          if ((long)iVar5 != (long)iVar4 * (long)local_a) {
            pcVar10 = (char *)0x1158;
            iVar5 = FUN_1158_043e(pcVar9);
          }
          iVar4 = iVar5 + local_6;
          pcVar9 = pcVar10;
          if (SCARRY2(iVar5,local_6)) {
            pcVar9 = (char *)0x1158;
            iVar4 = FUN_1158_043e(pcVar10);
          }
          pcVar10 = (char *)s_devices_1160_1007 + 1;
          FUN_1008_2516(&stack0xfffe,0x2812,pcVar9,0x27bd,pcVar9,&local_8,unaff_SS,iVar4);
          iVar4 = iVar17 + -1;
          if (SBORROW2(iVar17,1)) {
            pcVar10 = (char *)0x1158;
            iVar4 = FUN_1158_043e((char *)s_devices_1160_1007 + 1);
          }
          iVar5 = (int)((long)iVar4 * (long)local_a);
          pcVar9 = pcVar10;
          if ((long)iVar5 != (long)iVar4 * (long)local_a) {
            pcVar9 = (char *)0x1158;
            iVar5 = FUN_1158_043e(pcVar10);
          }
          iVar4 = iVar5 + local_6;
          pcVar10 = pcVar9;
          if (SCARRY2(iVar5,local_6)) {
            pcVar10 = (char *)0x1158;
            iVar4 = FUN_1158_043e(pcVar9);
          }
          pcVar9 = (char *)s_devices_1160_1007 + 1;
          FUN_1008_2516(&stack0xfffe,0x281d,pcVar10,0x26bf,pcVar10,&local_8,unaff_SS,iVar4);
          iVar4 = iVar17 + -1;
          if (SBORROW2(iVar17,1)) {
            pcVar9 = (char *)0x1158;
            iVar4 = FUN_1158_043e((char *)s_devices_1160_1007 + 1);
          }
          iVar5 = (int)((long)iVar4 * (long)local_a);
          pcVar10 = pcVar9;
          if ((long)iVar5 != (long)iVar4 * (long)local_a) {
            pcVar10 = (char *)0x1158;
            iVar5 = FUN_1158_043e(pcVar9);
          }
          iVar4 = iVar5 + local_6;
          pcVar9 = pcVar10;
          if (SCARRY2(iVar5,local_6)) {
            pcVar9 = (char *)0x1158;
            iVar4 = FUN_1158_043e(pcVar10);
          }
          pcVar10 = (char *)s_devices_1160_1007 + 1;
          FUN_1008_2516(&stack0xfffe,0x2832,pcVar9,0x26bf,pcVar9,&local_8,unaff_SS,iVar4);
          local_8 = local_8 + 1;
          iVar4 = iVar17 + -1;
          if (SBORROW2(iVar17,1)) {
            pcVar10 = (char *)0x1158;
            iVar4 = FUN_1158_043e((char *)s_devices_1160_1007 + 1);
          }
          iVar5 = (int)((long)iVar4 * (long)local_a);
          pcVar9 = pcVar10;
          if ((long)iVar5 != (long)iVar4 * (long)local_a) {
            pcVar9 = (char *)0x1158;
            iVar5 = FUN_1158_043e(pcVar10);
          }
          iVar4 = iVar5 + local_6;
          pcVar10 = pcVar9;
          if (SCARRY2(iVar5,local_6)) {
            pcVar10 = (char *)0x1158;
            iVar4 = FUN_1158_043e(pcVar9);
          }
          pcVar9 = (char *)s_devices_1160_1007 + 1;
          FUN_1008_2516(&stack0xfffe,0x283f,pcVar10,0x26d4,pcVar10,&local_8,unaff_SS,iVar4);
          iVar4 = iVar17 + -1;
          if (SBORROW2(iVar17,1)) {
            pcVar9 = (char *)0x1158;
            iVar4 = FUN_1158_043e((char *)s_devices_1160_1007 + 1);
          }
          iVar5 = (int)((long)iVar4 * (long)local_a);
          pcVar10 = pcVar9;
          if ((long)iVar5 != (long)iVar4 * (long)local_a) {
            pcVar10 = (char *)0x1158;
            iVar5 = FUN_1158_043e(pcVar9);
          }
          iVar4 = iVar5 + local_6;
          pcVar9 = pcVar10;
          if (SCARRY2(iVar5,local_6)) {
            pcVar9 = (char *)0x1158;
            iVar4 = FUN_1158_043e(pcVar10);
          }
          pcVar10 = (char *)s_devices_1160_1007 + 1;
          FUN_1008_2516(&stack0xfffe,0x2842,pcVar9,0x26d4,pcVar9,&local_8,unaff_SS,iVar4);
          iVar4 = iVar17 + -1;
          if (SBORROW2(iVar17,1)) {
            pcVar10 = (char *)0x1158;
            iVar4 = FUN_1158_043e((char *)s_devices_1160_1007 + 1);
          }
          iVar5 = (int)((long)iVar4 * (long)local_a);
          pcVar9 = pcVar10;
          if ((long)iVar5 != (long)iVar4 * (long)local_a) {
            pcVar9 = (char *)0x1158;
            iVar5 = FUN_1158_043e(pcVar10);
          }
          iVar4 = iVar5 + local_6;
          pcVar10 = pcVar9;
          if (SCARRY2(iVar5,local_6)) {
            pcVar10 = (char *)0x1158;
            iVar4 = FUN_1158_043e(pcVar9);
          }
          pcVar9 = (char *)s_devices_1160_1007 + 1;
          FUN_1008_2516(&stack0xfffe,0x284d,pcVar10,0x26d4,pcVar10,&local_8,unaff_SS,iVar4);
          if (local_6 == CONCAT11(uStack_11,local_12)) break;
          local_6 = local_6 + 1;
        }
      }
      if (iVar17 == local_e._2_2_) break;
      iVar17 = iVar17 + 1;
    }
  }
  FUN_1140_3fd0(iVar7,uVar8,*(undefined2 *)(iVar7 + 0x31c),*(undefined2 *)(iVar7 + 0x31e));
  FUN_10d8_31d2((int)*(undefined4 *)(iVar7 + 0x1bc),
                (int)((ulong)*(undefined4 *)(iVar7 + 0x1bc) >> 0x10));
  FUN_10d8_31d2((int)*(undefined4 *)(iVar7 + 0x1c0),
                (int)((ulong)*(undefined4 *)(iVar7 + 0x1c0) >> 0x10));
  FUN_10d8_31d2((int)*(undefined4 *)(iVar7 + 0x1d4),
                (int)((ulong)*(undefined4 *)(iVar7 + 0x1d4) >> 0x10));
  FUN_10d8_31d2((int)*(undefined4 *)(iVar7 + 0x1c4),
                (int)((ulong)*(undefined4 *)(iVar7 + 0x1c4) >> 0x10));
  FUN_10d8_31d2((int)*(undefined4 *)(iVar7 + 0x1d0),
                (int)((ulong)*(undefined4 *)(iVar7 + 0x1d0) >> 0x10));
  FUN_10d8_31d2((int)*(undefined4 *)(iVar7 + 0x1c8),
                (int)((ulong)*(undefined4 *)(iVar7 + 0x1c8) >> 0x10));
  FUN_10d8_31d2((int)*(undefined4 *)(iVar7 + 0x20c),
                (int)((ulong)*(undefined4 *)(iVar7 + 0x20c) >> 0x10));
  return;
}



/* ---- TFormSARP_Produits_N1001Click @ 1008:33d8  (1 octets) ---- */

void TFormSARP_Produits_N1001Click
               (undefined2 param_1,undefined4 param_2,undefined2 param_3,undefined2 param_4)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined2 uVar9;
  undefined2 uVar10;
  undefined2 uVar11;
  undefined4 uVar12;
  int iVar13;
  undefined2 uVar14;
  uint uStack_14;
  int iStack_8;
  int iStack_6;
  int iVar15;
  
  FUN_1158_0444();
  uVar9 = (undefined2)((ulong)param_2 >> 0x10);
  iVar7 = (int)param_2;
  iVar15 = *(int *)(iVar7 + 0x39c);
  uVar11 = 0x1158;
  cVar1 = FUN_1158_2255(0x94,0x1130,param_3,param_4);
  if (cVar1 != '\0') {
    uVar12 = FUN_1158_2273(0x94,0x1130,param_3,param_4);
    uVar2 = FUN_1130_162b((int)*(undefined4 *)(iVar7 + 0x1a4),
                          (int)((ulong)*(undefined4 *)(iVar7 + 0x1a4) >> 0x10),uVar12);
    switch(uVar2) {
    case 0:
      iVar15 = 100;
      break;
    case 1:
      iVar15 = 0x7d;
      break;
    case 2:
      iVar15 = 0x96;
      break;
    case 3:
      iVar15 = 200;
      break;
    case 4:
      iVar15 = 0x4b;
      break;
    case 5:
      iVar15 = 0x32;
    }
    uVar14 = (undefined2)((ulong)*(undefined4 *)(iVar7 + 0x1a4) >> 0x10);
    uVar10 = (undefined2)*(undefined4 *)(iVar7 + 0x1a4);
    uVar11 = 0x1130;
    iVar8 = FUN_1130_1326(uVar10,uVar14);
    uVar3 = iVar8 - 1;
    if (SBORROW2(iVar8,1)) {
      uVar11 = 0x1158;
      uVar3 = FUN_1158_043e(0x1130);
    }
    if (-1 < (int)uVar3) {
      uStack_14 = 0;
      while( true ) {
        uVar4 = uStack_14 & 0xff00;
        if (uStack_14 == uVar2) {
          uVar4 = uVar4 + 1;
        }
        uVar12 = FUN_1130_1353(uVar10,uVar14,uStack_14);
        uVar11 = 0x1130;
        FUN_1130_1275(uVar12,uVar4);
        if (uStack_14 == uVar3) break;
        uStack_14 = uStack_14 + 1;
      }
    }
  }
  if (iVar15 != *(int *)(iVar7 + 0x39c)) {
    uVar10 = (undefined2)((ulong)*(undefined4 *)(iVar7 + 0x31c) >> 0x10);
    iVar8 = (int)*(undefined4 *)(iVar7 + 0x31c);
    if (SBORROW2(*(int *)(iVar8 + 0xe8),(uint)(*(int *)(iVar8 + 0xe6) == 0)) != false) {
      FUN_1158_043e(uVar11);
    }
    uVar11 = 0x1158;
    iVar5 = FUN_1158_0416();
    if (-1 < iVar5) {
      iStack_6 = 0;
      while( true ) {
        iVar6 = iStack_6 >> 0xf;
        FUN_10f8_6e30(iVar8,uVar10,iStack_6,iVar6);
        func_0x1158175c(0x10f8,*(int *)(iVar7 + 0x39c),*(int *)(iVar7 + 0x39c) >> 0xf);
        FUN_1158_1670();
        func_0x1158175c(0x1158);
        FUN_1158_1670();
        iVar13 = iStack_6;
        uVar14 = FUN_1158_0416(iStack_6,iVar6);
        uVar11 = 0x10f8;
        FUN_10f8_70c9(iVar8,uVar10,uVar14,iVar13,iVar6);
        if (iStack_6 == iVar5) break;
        iStack_6 = iStack_6 + 1;
      }
    }
    if (SBORROW2(*(int *)(iVar8 + 0x10c),(uint)(*(int *)(iVar8 + 0x10a) == 0)) != false) {
      FUN_1158_043e(uVar11);
    }
    iVar5 = FUN_1158_0416();
    if (-1 < iVar5) {
      iStack_8 = 0;
      while( true ) {
        iVar6 = iStack_8 >> 0xf;
        FUN_10f8_6e8b(iVar8,uVar10,iStack_8,iVar6);
        func_0x1158175c(0x10f8,*(int *)(iVar7 + 0x39c),*(int *)(iVar7 + 0x39c) >> 0xf);
        FUN_1158_1670();
        func_0x1158175c(0x1158);
        FUN_1158_1670();
        iVar13 = iStack_8;
        uVar11 = FUN_1158_0416(iStack_8,iVar6);
        FUN_10f8_74a3(iVar8,uVar10,uVar11,iVar13,iVar6);
        if (iStack_8 == iVar5) break;
        iStack_8 = iStack_8 + 1;
      }
    }
    FUN_10f8_7345(iVar8,uVar10,*(int *)(iVar8 + 0xfe),*(int *)(iVar8 + 0xfe) >> 0xf);
    FUN_10f8_75dd(iVar8,uVar10,*(int *)(iVar8 + 0x100),*(int *)(iVar8 + 0x100) >> 0xf);
    uVar10 = (undefined2)((ulong)*(undefined4 *)(iVar7 + 0x2f0) >> 0x10);
    uVar11 = (undefined2)*(undefined4 *)(iVar7 + 0x2f0);
    iVar8 = FUN_1130_1326(uVar11,uVar10);
    iVar5 = iVar8 + -1;
    if (SBORROW2(iVar8,1)) {
      iVar5 = FUN_1158_043e(0x1130);
    }
    if (-1 < iVar5) {
      uStack_14 = 0;
      while( true ) {
        uVar14 = 0;
        uVar12 = FUN_1130_1353(uVar11,uVar10,uStack_14);
        FUN_1130_1275(uVar12,uVar14);
        if (uStack_14 == iVar5) break;
        uStack_14 = uStack_14 + 1;
      }
    }
    FUN_1138_5df4(iVar7,uVar9,*(undefined2 *)(iVar7 + 0x39c),iVar15);
    *(int *)(iVar7 + 0x39c) = iVar15;
    if (*(int *)(iVar7 + 0x39c) < 100) {
      uVar12 = *(undefined4 *)((int)*(undefined4 *)(iVar7 + 800) + 0x34);
      FUN_1128_11f5((int)uVar12,(int)((ulong)uVar12 >> 0x10),0x18);
    }
  }
  return;
}



/* ---- TFormSARP_Produits_Quitter1Click @ 1008:36fc  (24 octets) ---- */

void __stdcall16far TFormSARP_Produits_Quitter1Click(undefined4 param_1)

{
  FUN_1158_0444();
  FUN_1140_5556((int)param_1,(int)((ulong)param_1 >> 0x10));
  return;
}



/* ---- TFormSARP_Produits_PleinEcran1Click @ 1008:3714  (48 octets) ---- */

void __stdcall16far TFormSARP_Produits_PleinEcran1Click(undefined4 param_1)

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



/* ---- TFormSARP_Produits_Periode1Click @ 1008:3744  (71 octets) ---- */

void __stdcall16far TFormSARP_Produits_Periode1Click(undefined4 param_1)

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
  iVar1 = FUN_1000_3e32(*(undefined2 *)(iVar2 + 0x39f),iVar1);
  if (iVar1 != *(int *)(iVar2 + 0x39f)) {
    FUN_1008_14ca(iVar2,uVar3,iVar1);
  }
  return;
}



/* ---- TFormSARP_Produits_N11Click @ 1008:378b  (246 octets) ---- */

void __stdcall16far
TFormSARP_Produits_N11Click(undefined4 param_1,undefined2 param_2,undefined2 param_3)

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
    iVar4 = *(int *)(iVar5 + 0x39f);
    uVar8 = FUN_1158_2273(0x94,0x1130,param_2,param_3);
    uVar7 = 0x1130;
    uVar2 = FUN_1130_162b((int)*(undefined4 *)(iVar5 + 0x32c),
                          (int)((ulong)*(undefined4 *)(iVar5 + 0x32c) >> 0x10),uVar8);
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
      iVar4 = FUN_1000_3e32(*(undefined2 *)(iVar5 + 0x39f),iVar4);
    }
    if (iVar4 != *(int *)(iVar5 + 0x39f)) {
      FUN_1008_14ca(iVar5,uVar6,iVar4);
    }
  }
  return;
}



/* ---- TFormSARP_Produits_Barredoutils1Click @ 1008:3881  (21 octets) ---- */

void __stdcall16far TFormSARP_Produits_Barredoutils1Click(void)

{
  FUN_1158_0444();
  MESSAGEBEEP(0x1158,0);
  return;
}



/* ---- TFormSARP_Produits_ImpressionRapide1Click @ 1008:3896  (43 octets) ---- */

void __stdcall16far TFormSARP_Produits_ImpressionRapide1Click(undefined4 param_1)

{
  undefined4 uVar1;
  char cVar2;
  undefined2 uVar3;
  
  FUN_1158_0444();
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  uVar1 = *(undefined4 *)((int)param_1 + 0x208);
  cVar2 = FUN_1108_2f17((int)uVar1,(int)((ulong)uVar1 >> 0x10));
  if (cVar2 != '\0') {
    FUN_1008_3925((int)param_1,uVar3);
  }
  return;
}



/* ---- FUN_1008_38c9 @ 1008:38c9  (69 octets) ---- */

undefined2 __stdcall16far FUN_1008_38c9(void)

{
  undefined2 uVar1;
  undefined2 unaff_SS;
  undefined4 uVar2;
  undefined local_24 [30];
  undefined2 uStack_6;
  
  uStack_6 = 0x38d4;
  FUN_1158_0444();
  uVar2 = FUN_10f0_2a04((int)DAT_1160_2c54,(int)((ulong)DAT_1160_2c54 >> 0x10));
  uVar1 = FUN_1128_21d2(uVar2);
  GETTEXTMETRICS(0x1128,local_24,unaff_SS);
  uVar1 = FUN_1158_0416(uVar1);
  return uVar1;
}



/* ---- FUN_1008_3925 @ 1008:3925  (1333 octets) ---- */

void __cdecl16far FUN_1008_3925(undefined *param_1)

{
  undefined2 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined *puVar6;
  int iVar7;
  undefined2 uVar8;
  undefined2 uVar9;
  undefined2 uVar10;
  undefined2 unaff_SS;
  undefined4 uVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puStack_420;
  undefined local_418 [254];
  undefined local_31a [2];
  undefined local_318 [254];
  int local_21a;
  int local_218;
  undefined4 local_216;
  int local_212;
  int local_210;
  int local_20a;
  undefined2 local_208;
  undefined local_206 [256];
  undefined local_106 [256];
  int local_6;
  
  local_6 = 0x3930;
  FUN_1158_0444();
  uVar8 = (undefined2)((ulong)param_1 >> 0x10);
  puVar6 = (undefined *)param_1;
  local_208 = *(undefined2 *)(puVar6 + 0x3a3);
  *(undefined2 *)(puVar6 + 0x3a3) = 0x14;
  puStack_420 = puVar6;
  FUN_1008_2858();
  puStack_420 = (undefined *)0x3962;
  FUN_10f0_204e();
  puStack_420 = (undefined *)0x396d;
  FUN_1158_09f5();
  FUN_1158_0408();
  puStack_420 = (undefined *)DAT_1160_1858;
  DAT_1160_1858 = &puStack_420;
  local_216 = FUN_10f0_2a04((int)DAT_1160_2c54,(int)((ulong)DAT_1160_2c54 >> 0x10));
  uVar11 = *(undefined4 *)((int)DAT_1160_18f6 + 0x2c8);
  uVar9 = (undefined2)((ulong)uVar11 >> 0x10);
  iVar7 = (int)uVar11;
  uVar10 = 0x1128;
  FUN_1128_2099(local_216,*(undefined2 *)(iVar7 + 0x34),*(undefined2 *)(iVar7 + 0x36));
  iVar7 = DAT_1160_014e + *(int *)(puVar6 + 0x3a1);
  if (SCARRY2(DAT_1160_014e,*(int *)(puVar6 + 0x3a1))) {
    uVar10 = 0x1158;
    iVar7 = FUN_1158_043e(0x1128);
  }
  iVar3 = iVar7 + -1;
  if (SBORROW2(iVar7,1)) {
    iVar3 = FUN_1158_043e(uVar10);
  }
  local_216._2_2_ = iVar3 / *(int *)(puVar6 + 0x3a1);
  local_210 = local_216._2_2_;
  if (0 < local_216._2_2_) {
    local_212 = 1;
    while( true ) {
      FUN_1008_430d(puVar6,uVar8,local_212,1);
      uVar9 = 8;
      uVar11 = FUN_10f0_2a04((int)DAT_1160_2c54,(int)((ulong)DAT_1160_2c54 >> 0x10));
      uVar11 = *(undefined4 *)((int)uVar11 + 7);
      FUN_1128_11f5((int)uVar11,(int)((ulong)uVar11 >> 0x10),uVar9);
      uVar10 = 2;
      uVar11 = FUN_10f0_2a04((int)DAT_1160_2c54,(int)((ulong)DAT_1160_2c54 >> 0x10));
      uVar11 = *(undefined4 *)((int)uVar11 + 7);
      uVar9 = 0x1128;
      FUN_1128_1278((int)uVar11,(int)((ulong)uVar11 >> 0x10),uVar10);
      iVar7 = 1;
      while( true ) {
        puVar13 = local_106;
        uVar10 = unaff_SS;
        FUN_1158_0db5(0,0x390e,uVar9);
        FUN_1158_0c78(puVar13,uVar10);
        uVar9 = 0x1158;
        FUN_1158_0408();
        if (iVar7 == 2) break;
        iVar7 = iVar7 + 1;
      }
      local_216._0_2_ = (undefined2)((ulong)*(undefined4 *)(puVar6 + 0x2a0) >> 0x10);
      local_218 = (int)*(undefined4 *)(puVar6 + 0x2a0);
      puVar2 = (undefined4 *)*(undefined4 *)(local_218 + 0xec);
      puVar1 = (undefined2 *)((int)*puVar2 + 0x10);
      iVar7 = (*(code *)*puVar1)(0x1158,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10));
      iVar3 = iVar7 + -1;
      if (SBORROW2(iVar7,1)) {
        iVar3 = FUN_1158_043e(0x1158);
      }
      local_21a = iVar3;
      if (-1 < iVar3) {
        iVar7 = 0;
        while( true ) {
          puVar13 = local_31a;
          puVar2 = (undefined4 *)*(undefined4 *)(local_218 + 0xec);
          puVar1 = (undefined2 *)((int)*puVar2 + 0xc);
          uVar9 = unaff_SS;
          (*(code *)*puVar1)(0x1158,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),iVar7,puVar13)
          ;
          FUN_1158_17e7(0xff,local_206,unaff_SS,puVar13,uVar9);
          do {
            local_6 = FUN_1158_1878(local_206,unaff_SS,0x390f,0x1158);
            if (0 < local_6) {
              FUN_1158_1975(1,local_6,local_206,unaff_SS);
              FUN_1158_1916(local_6,0xff,local_206,unaff_SS,0x3911,0x1158);
            }
          } while (local_6 != 0);
          puVar13 = local_31a;
          uVar9 = unaff_SS;
          FUN_1158_17cd(0x3913,0x1158);
          FUN_1158_184c(local_206,unaff_SS);
          FUN_1158_17e7(0xff,local_206,unaff_SS,puVar13,uVar9);
          puVar13 = local_106;
          uVar9 = unaff_SS;
          FUN_1158_0db5(0,local_206,unaff_SS);
          FUN_1158_0c78(puVar13,uVar9);
          FUN_1158_0408();
          if (iVar7 == local_21a) break;
          iVar7 = iVar7 + 1;
        }
      }
      if (!(bool)((byte)local_212 & 1) || local_212 == local_210) {
        local_216._0_2_ = (undefined2)((ulong)DAT_1160_2c54 >> 0x10);
        local_218 = (int)DAT_1160_2c54;
        uVar9 = 6;
        uVar11 = FUN_10f0_2a04(local_218,(undefined2)local_216);
        uVar11 = *(undefined4 *)((int)uVar11 + 7);
        FUN_1128_11f5((int)uVar11,(int)((ulong)uVar11 >> 0x10),uVar9);
        uVar9 = 0;
        uVar11 = FUN_10f0_2a04(local_218,(undefined2)local_216);
        uVar11 = *(undefined4 *)((int)uVar11 + 7);
        FUN_1128_1278((int)uVar11,(int)((ulong)uVar11 >> 0x10),uVar9);
        uVar4 = FUN_1008_38c9(&stack0xfffe);
        if (0xfffd < uVar4) {
          FUN_1158_043e((char *)s_devices_1160_1007 + 1);
        }
        local_20a = FUN_1158_0416();
        puVar13 = local_418;
        uVar10 = unaff_SS;
        FUN_1158_17cd(0x3913,0x1158);
        puVar12 = local_318;
        uVar9 = unaff_SS;
        FUN_1138_1d53((int)*(undefined4 *)(puVar6 + 0x284),
                      (int)((ulong)*(undefined4 *)(puVar6 + 0x284) >> 0x10));
        FUN_1158_184c(puVar12,uVar9);
        FUN_1158_17e7(0xff,local_206,unaff_SS,puVar13,uVar10);
        uVar9 = 0;
        iVar7 = (int)((long)local_20a * 5);
        if ((long)iVar7 != (long)local_20a * 5) {
          iVar7 = FUN_1158_043e(0x1158,0);
        }
        iVar3 = FUN_10f0_2a72(local_218,(undefined2)local_216);
        iVar5 = iVar3 - iVar7;
        if (SBORROW2(iVar3,iVar7)) {
          iVar5 = FUN_1158_043e(0x10f0,uVar9);
        }
        puVar13 = local_206;
        uVar10 = unaff_SS;
        uVar11 = FUN_10f0_2a04(local_218,(undefined2)local_216);
        FUN_1128_1f09(uVar11,puVar13,uVar10,iVar5,uVar9);
        puVar13 = local_418;
        uVar10 = unaff_SS;
        FUN_1158_17cd(0x3913,0x1128);
        puVar12 = local_318;
        uVar9 = unaff_SS;
        FUN_1138_1d53((int)*(undefined4 *)(puVar6 + 0x288),
                      (int)((ulong)*(undefined4 *)(puVar6 + 0x288) >> 0x10));
        FUN_1158_184c(puVar12,uVar9);
        FUN_1158_17e7(0xff,local_206,unaff_SS,puVar13,uVar10);
        uVar9 = 0;
        iVar7 = (int)((long)local_20a * 4);
        if ((long)iVar7 != (long)local_20a * 4) {
          iVar7 = FUN_1158_043e(0x1158,0);
        }
        iVar3 = FUN_10f0_2a72(local_218,(undefined2)local_216);
        iVar5 = iVar3 - iVar7;
        if (SBORROW2(iVar3,iVar7)) {
          iVar5 = FUN_1158_043e(0x10f0,uVar9);
        }
        puVar13 = local_206;
        uVar10 = unaff_SS;
        uVar11 = FUN_10f0_2a04(local_218,(undefined2)local_216);
        FUN_1128_1f09(uVar11,puVar13,uVar10,iVar5,uVar9);
        puVar13 = local_418;
        uVar10 = unaff_SS;
        FUN_1158_17cd(0x3913,0x1128);
        puVar12 = local_318;
        uVar9 = unaff_SS;
        FUN_1138_1d53((int)*(undefined4 *)(puVar6 + 0x28c),
                      (int)((ulong)*(undefined4 *)(puVar6 + 0x28c) >> 0x10));
        FUN_1158_184c(puVar12,uVar9);
        FUN_1158_17e7(0xff,local_206,unaff_SS,puVar13,uVar10);
        uVar9 = 0;
        iVar7 = (int)((long)local_20a * 3);
        if ((long)iVar7 != (long)local_20a * 3) {
          iVar7 = FUN_1158_043e(0x1158,0);
        }
        iVar3 = FUN_10f0_2a72(local_218,(undefined2)local_216);
        iVar5 = iVar3 - iVar7;
        if (SBORROW2(iVar3,iVar7)) {
          iVar5 = FUN_1158_043e(0x10f0,uVar9);
        }
        puVar13 = local_206;
        uVar10 = unaff_SS;
        uVar11 = FUN_10f0_2a04(local_218,(undefined2)local_216);
        FUN_1128_1f09(uVar11,puVar13,uVar10,iVar5,uVar9);
        puVar13 = local_418;
        uVar10 = unaff_SS;
        FUN_1158_17cd(0x3913,0x1128);
        puVar12 = local_318;
        uVar9 = unaff_SS;
        FUN_1138_1d53((int)*(undefined4 *)(puVar6 + 0x290),
                      (int)((ulong)*(undefined4 *)(puVar6 + 0x290) >> 0x10));
        FUN_1158_184c(puVar12,uVar9);
        FUN_1158_17e7(0xff,local_206,unaff_SS,puVar13,uVar10);
        uVar9 = 0;
        iVar7 = (int)((long)local_20a * 2);
        if ((long)iVar7 != (long)local_20a * 2) {
          iVar7 = FUN_1158_043e(0x1158,0);
        }
        iVar3 = FUN_10f0_2a72(local_218,(undefined2)local_216);
        iVar5 = iVar3 - iVar7;
        if (SBORROW2(iVar3,iVar7)) {
          iVar5 = FUN_1158_043e(0x10f0,uVar9);
        }
        puVar13 = local_206;
        uVar10 = unaff_SS;
        uVar11 = FUN_10f0_2a04(local_218,(undefined2)local_216);
        FUN_1128_1f09(uVar11,puVar13,uVar10,iVar5,uVar9);
        if (local_212 < local_210) {
          puVar13 = local_106;
          uVar9 = unaff_SS;
          FUN_1158_0d25(0,0xc);
          FUN_1158_0c78(puVar13,uVar9);
          FUN_1158_0408();
        }
      }
      if (local_212 == local_216._2_2_) break;
      local_212 = local_212 + 1;
    }
  }
  DAT_1160_1858 = (undefined **)puStack_420;
  puStack_420 = local_106;
  FUN_1158_0a4f();
  puStack_420 = (undefined *)0x3e2e;
  FUN_1158_0408();
  puStack_420 = (undefined *)*(undefined **)(puVar6 + 0x2a0);
  FUN_1120_49e3();
  *(undefined2 *)(puVar6 + 0x3a3) = local_208;
  puStack_420 = puVar6 + 0x31c;
  FUN_1008_2858(puVar6,uVar8);
  return;
}



/* ---- TFormSARP_Produits_Copier1Click @ 1008:3e89  (1 octets) ---- */

/* WARNING: Removing unreachable block (ram,0x10083eb1) */
/* WARNING: Removing unreachable block (ram,0x100841d2) */

void TFormSARP_Produits_Copier1Click(undefined2 param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  undefined2 unaff_SS;
  long lVar8;
  undefined4 uVar9;
  undefined *puVar10;
  undefined *puVar11;
  int iStack_31e;
  char *pcStack_31c;
  char *pcStack_31a;
  undefined2 uStack_318;
  undefined auStack_316 [248];
  undefined auStack_21e [8];
  undefined auStack_216 [248];
  int iStack_11e;
  int iStack_11c;
  undefined4 uStack_11a;
  undefined2 uStack_116;
  long lStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  uint uStack_108;
  int iStack_106;
  int iStack_104;
  byte abStack_102 [252];
  undefined2 uStack_6;
  
  uStack_6 = 0x3e94;
  FUN_1158_0444();
  uStack_318 = 0x1158;
  pcStack_31a = (char *)0x3e9d;
  lStack_114 = func_0x115801ea();
  if (lStack_114 < 0x7531) {
    return;
  }
  uVar5 = (undefined2)((ulong)param_2 >> 0x10);
  iVar4 = (int)param_2;
  uStack_116 = *(undefined2 *)(iVar4 + 0x3a3);
  *(undefined2 *)(iVar4 + 0x3a3) = 0x14;
  pcStack_31a = (char *)(iVar4 + 0x31c);
  iStack_31e = iVar4;
  pcStack_31c = (char *)uVar5;
  uStack_318 = uVar5;
  FUN_1008_2858();
  uStack_318 = 30000;
  pcStack_31a = (char *)s_devices_1160_1007 + 1;
  pcStack_31c = (char *)0x3ee7;
  uStack_10c = (undefined *)FUN_1158_0182();
  uStack_318 = 100;
  pcStack_31a = (char *)0x1158;
  pcStack_31c = (char *)0x3ef6;
  uStack_110 = (undefined *)FUN_1158_0182();
  uStack_318 = 0x1158;
  pcStack_31a = (char *)0x3e83;
  iStack_31e = (int)DAT_1160_1858;
  DAT_1160_1858 = &iStack_31e;
  *uStack_10c = 0;
  *uStack_110 = 0;
  puVar11 = auStack_216;
  uVar7 = unaff_SS;
  pcStack_31c = &stack0xfffe;
  FUN_1158_17cd(0x1dfa,0x1160);
  FUN_1158_184c(0x3e5e,0x1158);
  puVar10 = auStack_316;
  uVar6 = unaff_SS;
  FUN_1138_1d53((int)*(undefined4 *)(iVar4 + 0x30c),
                (int)((ulong)*(undefined4 *)(iVar4 + 0x30c) >> 0x10));
  FUN_1158_184c(puVar10,uVar6);
  FUN_1158_184c(0x3e60,0x1158);
  FUN_1158_184c(0x3e62,0x1158);
  FUN_1158_17e7(0xff,abStack_102,unaff_SS,puVar11,uVar7);
  FUN_1150_0d4c(abStack_102,unaff_SS,(undefined *)uStack_110,uStack_110._2_2_);
  FUN_1150_0d8f((undefined *)uStack_110,uStack_110._2_2_,(undefined *)uStack_10c,uStack_10c._2_2_);
  uStack_11a = *(undefined4 *)(iVar4 + 0x31c);
  uVar6 = (undefined2)((ulong)uStack_11a >> 0x10);
  if (SBORROW2(*(int *)((int)uStack_11a + 0x10c),(uint)(*(int *)((int)uStack_11a + 0x10a) == 0)) !=
      false) {
    FUN_1158_043e(0x1150);
  }
  uVar6 = 0x1158;
  iStack_11c = FUN_1158_0416();
  if (-1 < iStack_11c) {
    iStack_106 = 0;
    while( true ) {
      uVar7 = (undefined2)((ulong)uStack_11a >> 0x10);
      if (SBORROW2(*(int *)((int)uStack_11a + 0xe8),(uint)(*(int *)((int)uStack_11a + 0xe6) == 0))
          != false) {
        FUN_1158_043e(uVar6);
      }
      uVar6 = 0x1158;
      iStack_11e = FUN_1158_0416();
      if (-1 < iStack_11e) {
        iStack_104 = 0;
        while( true ) {
          puVar11 = auStack_21e;
          uVar6 = unaff_SS;
          FUN_10f8_9a68((int)uStack_11a,(int)((ulong)uStack_11a >> 0x10),iStack_106,iStack_104);
          FUN_1158_17e7(0xff,abStack_102,unaff_SS,puVar11,uVar6);
          do {
            uStack_108 = FUN_1158_1878(abStack_102,unaff_SS,0x3e6c,0x1158);
            if (0 < (int)uStack_108) {
              FUN_1158_1975(2,uStack_108,abStack_102,unaff_SS);
            }
          } while (uStack_108 != 0);
          do {
            uStack_108 = FUN_1158_1878(abStack_102,unaff_SS,0x3e6f,0x1158);
            if (0 < (int)uStack_108) {
              FUN_1158_1975(3,uStack_108,abStack_102,unaff_SS);
            }
          } while (uStack_108 != 0);
          do {
            uStack_108 = FUN_1158_1878(abStack_102,unaff_SS,0x3e72,0x1158);
            if (0 < (int)uStack_108) {
              FUN_1158_1975(3,uStack_108,abStack_102,unaff_SS);
            }
          } while (uStack_108 != 0);
          do {
            uStack_108 = FUN_1158_1878(abStack_102,unaff_SS,0x3e75,0x1158);
            if (0 < (int)uStack_108) {
              FUN_1158_1975(2,uStack_108,abStack_102,unaff_SS);
              if (0 < iStack_104) {
                FUN_1158_1916(uStack_108,0xff,abStack_102,unaff_SS,0x3e5e,0x1158);
              }
            }
          } while (uStack_108 != 0);
          while (abStack_102[1] == ' ' && abStack_102[0] != 0) {
            FUN_1158_1975(1,1,abStack_102,unaff_SS);
          }
          uStack_108 = (uint)abStack_102[0];
          while( true ) {
            iVar3 = FUN_1158_0416();
            if ((int)uStack_108 < 1 || abStack_102[iVar3] != 0x20) break;
            FUN_1158_1975(1,uStack_108,abStack_102,unaff_SS);
            uStack_108 = uStack_108 - 1;
          }
          uVar6 = (undefined2)((ulong)uStack_11a >> 0x10);
          iVar3 = *(int *)((int)uStack_11a + 0xe6);
          iVar1 = *(int *)((int)uStack_11a + 0xe8);
          uVar2 = (uint)(iVar3 == 0);
          lVar8 = CONCAT22(iVar1 - uVar2,iVar3 + -1);
          if (SBORROW2(iVar1,uVar2) != false) {
            lVar8 = FUN_1158_043e(0x1158);
          }
          if (iStack_104 < lVar8) {
            puVar11 = auStack_21e;
            uVar6 = unaff_SS;
            FUN_1158_17cd(abStack_102,unaff_SS);
            FUN_1158_184c(0x3e5e,0x1158);
            FUN_1158_17e7(0xff,abStack_102,unaff_SS,puVar11,uVar6);
          }
          FUN_1150_0d4c(abStack_102,unaff_SS,(undefined *)uStack_110,uStack_110._2_2_);
          uVar6 = 0x1150;
          FUN_1150_0d8f((undefined *)uStack_110,uStack_110._2_2_,(undefined *)uStack_10c,
                        uStack_10c._2_2_);
          if (iStack_104 == iStack_11e) break;
          iStack_104 = iStack_104 + 1;
        }
      }
      FUN_1158_17e7(0xff,abStack_102,unaff_SS,16000,uVar6);
      FUN_1150_0d4c(abStack_102,unaff_SS,(undefined *)uStack_110,uStack_110._2_2_);
      uVar6 = 0x1150;
      FUN_1150_0d8f((undefined *)uStack_110,uStack_110._2_2_,(undefined *)uStack_10c,
                    uStack_10c._2_2_);
      if (iStack_106 == iStack_11c) break;
      iStack_106 = iStack_106 + 1;
    }
  }
  uVar6 = (undefined2)DAT_1160_2ad0;
  FUN_1090_36a1(uVar6,(int)((ulong)DAT_1160_2ad0 >> 0x10));
  uVar9 = FUN_1150_0ed6((undefined *)uStack_10c,uStack_10c._2_2_);
  FUN_1090_3999((int)DAT_1160_2ad0,(int)((ulong)DAT_1160_2ad0 >> 0x10),uVar9);
  DAT_1160_1858 = (int *)uVar6;
  pcStack_31c = (char *)s_sThousand_1160_1088 + 8;
  iStack_31e = 0x42e9;
  FUN_1158_019c(100,(undefined *)uStack_110,uStack_110._2_2_);
  FUN_1158_019c(30000,(undefined *)uStack_10c,uStack_10c._2_2_);
  *(undefined2 *)(iVar4 + 0x3a3) = uStack_116;
  FUN_1008_2858(iVar4,uVar5,iVar4 + 0x31c,uVar5);
  return;
}



/* ---- FUN_1008_430d @ 1008:430d  (1309 octets) ---- */

void __stdcall16far FUN_1008_430d(undefined4 param_1,int param_2,int param_3)

{
  undefined2 *puVar1;
  long lVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  byte bVar6;
  int iVar7;
  undefined2 uVar8;
  undefined2 uVar9;
  undefined2 unaff_SS;
  undefined2 uVar10;
  byte *pbVar11;
  undefined *puVar12;
  undefined2 uVar13;
  undefined2 uVar14;
  undefined *puVar15;
  undefined local_414 [248];
  undefined local_31c [8];
  undefined local_314 [248];
  int local_21c;
  int local_21a;
  undefined4 local_218;
  int local_214;
  undefined2 local_212;
  int local_210;
  int local_20e;
  int local_20c;
  int local_20a;
  uint local_208;
  int local_206;
  int local_204;
  byte local_202 [256];
  undefined local_102 [252];
  undefined2 uStack_6;
  
  uStack_6 = 0x4318;
  FUN_1158_0444();
  iVar7 = (int)param_1;
  uVar8 = (undefined2)((ulong)param_1 >> 0x10);
  if (param_2 == 0) {
    local_20c = 1;
    local_20e = DAT_1160_014e;
  }
  else {
    iVar4 = param_2 + -1;
    if (SBORROW2(param_2,1)) {
      iVar4 = FUN_1158_043e(0x1158);
    }
    lVar2 = (long)iVar4 * (long)*(int *)(iVar7 + 0x3a1);
    iVar4 = (int)lVar2;
    if (iVar4 != lVar2) {
      iVar4 = FUN_1158_043e(0x1158);
    }
    local_20c = iVar4 + 1;
    if (SCARRY2(iVar4,1)) {
      local_20c = FUN_1158_043e(0x1158);
    }
    lVar2 = (long)param_2 * (long)*(int *)(iVar7 + 0x3a1);
    local_20e = (int)lVar2;
    if (local_20e != lVar2) {
      local_20e = FUN_1158_043e(0x1158);
    }
  }
  if (DAT_1160_014e < local_20e) {
    local_20e = DAT_1160_014e;
  }
  local_212 = (undefined2)((ulong)*(undefined4 *)(iVar7 + 0x2a0) >> 0x10);
  local_214 = (int)*(undefined4 *)(iVar7 + 0x2a0);
  FUN_1120_49e3(local_214,local_212);
  puVar12 = local_314;
  uVar10 = unaff_SS;
  FUN_1158_17cd(0x1dfa,0x1160);
  FUN_1158_184c(0x42ed,0x1158);
  puVar15 = local_414;
  uVar9 = unaff_SS;
  FUN_1138_1d53((int)*(undefined4 *)(iVar7 + 0x30c),
                (int)((ulong)*(undefined4 *)(iVar7 + 0x30c) >> 0x10));
  FUN_1158_184c(puVar15,uVar9);
  FUN_1158_17e7(0xff,local_102,unaff_SS,puVar12,uVar10);
  puVar3 = (undefined4 *)*(undefined4 *)(local_214 + 0xec);
  puVar1 = (undefined2 *)((int)*puVar3 + 0x24);
  (*(code *)*puVar1)(0x1158,(undefined4 *)puVar3,(int)((ulong)puVar3 >> 0x10),local_102);
  local_218 = *(undefined4 *)(iVar7 + 0x31c);
  uVar9 = (undefined2)((ulong)local_218 >> 0x10);
  if (SBORROW2(*(int *)((int)local_218 + 0x10c),(uint)(*(int *)((int)local_218 + 0x10a) == 0)) !=
      false) {
    FUN_1158_043e(0x1158);
  }
  local_21a = FUN_1158_0416();
  if (-1 < local_21a) {
    local_206 = 0;
    while( true ) {
      local_102[0] = 0;
      uVar9 = (undefined2)((ulong)local_218 >> 0x10);
      if (SBORROW2(*(int *)((int)local_218 + 0xe8),(uint)(*(int *)((int)local_218 + 0xe6) == 0)) !=
          false) {
        FUN_1158_043e(0x1158);
      }
      local_21c = FUN_1158_0416();
      if (-1 < local_21c) {
        local_204 = 0;
        while( true ) {
          lVar2 = (long)*(int *)(iVar7 + 0x4a5) * (long)local_20e;
          iVar4 = (int)lVar2;
          if (iVar4 != lVar2) {
            iVar4 = FUN_1158_043e(0x1158);
          }
          bVar6 = local_204 <= iVar4;
          iVar4 = local_20c + -1;
          if (SBORROW2(local_20c,1)) {
            iVar4 = FUN_1158_043e(0x1158);
          }
          lVar2 = (long)iVar4 * (long)*(int *)(iVar7 + 0x4a5);
          iVar4 = (int)lVar2;
          if (iVar4 != lVar2) {
            iVar4 = FUN_1158_043e(0x1158);
          }
          iVar5 = iVar4 + 1;
          if (SCARRY2(iVar4,1)) {
            iVar5 = FUN_1158_043e(0x1158);
          }
          if (local_204 < 1 || (iVar5 <= local_204 & bVar6) != 0) {
            puVar12 = local_31c;
            uVar9 = unaff_SS;
            FUN_10f8_9a68((int)local_218,(int)((ulong)local_218 >> 0x10),local_206,local_204);
            FUN_1158_17e7(0xff,local_202,unaff_SS,puVar12,uVar9);
            do {
              local_208 = FUN_1158_1878(local_202,unaff_SS,0x42f7,0x1158);
              if (0 < (int)local_208) {
                FUN_1158_1975(2,local_208,local_202,unaff_SS);
              }
            } while (local_208 != 0);
            do {
              local_208 = FUN_1158_1878(local_202,unaff_SS,0x42fa,0x1158);
              if (0 < (int)local_208) {
                FUN_1158_1975(3,local_208,local_202,unaff_SS);
              }
            } while (local_208 != 0);
            do {
              local_208 = FUN_1158_1878(local_202,unaff_SS,0x42fd,0x1158);
              if (0 < (int)local_208) {
                FUN_1158_1975(3,local_208,local_202,unaff_SS);
              }
            } while (local_208 != 0);
            local_210 = 1;
            do {
              local_208 = FUN_1158_1878(local_202,unaff_SS,0x4300,0x1158);
              if (0 < (int)local_208) {
                local_210 = local_210 + 1;
                FUN_1158_1975(2,local_208,local_202,unaff_SS);
                if (0 < local_204) {
                  FUN_1158_1916(local_208,0xff,local_202,unaff_SS,0x42ed,0x1158);
                  iVar4 = local_202[0] - local_208;
                  if (SBORROW2((uint)local_202[0],local_208)) {
                    iVar4 = FUN_1158_043e(0x1158);
                  }
                  while (local_20a = iVar4, local_20a < 0x13) {
                    local_20a = local_20a + 1;
                    uVar14 = 0x1158;
                    uVar13 = 0x4303;
                    pbVar11 = local_202;
                    uVar10 = 0xff;
                    iVar4 = local_208 + 1;
                    uVar9 = unaff_SS;
                    if (SCARRY2(local_208,1)) {
                      iVar4 = FUN_1158_043e(0x1158,0xff,pbVar11);
                    }
                    FUN_1158_1916(iVar4,uVar10,pbVar11,uVar9,uVar13,uVar14);
                    iVar4 = local_20a;
                  }
                }
              }
            } while (local_208 != 0);
            if (param_3 == 0) {
              while (local_202[1] == ' ' && local_202[0] != 0) {
                FUN_1158_1975(1,1,local_202,unaff_SS);
              }
              local_208 = (uint)local_202[0];
              while (iVar4 = FUN_1158_0416(), 0 < (int)local_208 && local_202[iVar4] == 0x20) {
                FUN_1158_1975(1,local_208,local_202,unaff_SS);
                local_208 = local_208 - 1;
              }
            }
            if (param_3 == 1) {
              if (local_204 == 0) {
                for (local_208 = (uint)local_202[0]; 0x1e < (int)local_208;
                    local_208 = local_208 - 1) {
                  FUN_1158_1975(1,local_208,local_202,unaff_SS);
                }
                local_208 = (uint)local_202[0];
                while ((int)local_208 < 0x1e) {
                  local_208 = local_208 + 1;
                  puVar12 = local_31c;
                  uVar9 = unaff_SS;
                  FUN_1158_17cd(local_202,unaff_SS);
                  FUN_1158_184c(0x4303,0x1158);
                  FUN_1158_17e7(0xff,local_202,unaff_SS,puVar12,uVar9);
                }
              }
              else {
                local_208 = (uint)local_202[0];
                while( true ) {
                  iVar4 = (int)((long)local_210 * 0x13);
                  if ((long)iVar4 != (long)local_210 * 0x13) {
                    iVar4 = FUN_1158_043e(0x1158);
                  }
                  if (iVar4 <= (int)local_208) break;
                  local_208 = local_208 + 1;
                  puVar12 = local_31c;
                  uVar9 = unaff_SS;
                  FUN_1158_17cd(0x4303,0x1158);
                  FUN_1158_184c(local_202,unaff_SS);
                  FUN_1158_17e7(0xff,local_202,unaff_SS,puVar12,uVar9);
                }
              }
            }
            iVar4 = local_20e + -1;
            if (SBORROW2(local_20e,1)) {
              iVar4 = FUN_1158_043e(0x1158);
            }
            if (local_204 < iVar4) {
              puVar12 = local_31c;
              uVar9 = unaff_SS;
              FUN_1158_17cd(local_202,unaff_SS);
              FUN_1158_184c(0x42ed,0x1158);
              FUN_1158_17e7(0xff,local_202,unaff_SS,puVar12,uVar9);
            }
            puVar12 = local_31c;
            uVar9 = unaff_SS;
            FUN_1158_17cd(local_102,unaff_SS);
            FUN_1158_184c(local_202,unaff_SS);
            FUN_1158_17e7(0xff,local_102,unaff_SS,puVar12,uVar9);
          }
          if (local_204 == local_21c) break;
          local_204 = local_204 + 1;
        }
      }
      puVar3 = (undefined4 *)*(undefined4 *)(local_214 + 0xec);
      puVar1 = (undefined2 *)((int)*puVar3 + 0x24);
      (*(code *)*puVar1)(0x1158,(undefined4 *)puVar3,(int)((ulong)puVar3 >> 0x10),local_102);
      if (local_206 == local_21a) break;
      local_206 = local_206 + 1;
    }
  }
  return;
}



/* ---- TFormSARP_Produits_TableERPCalcFields @ 1008:4ad7  (1 octets) ---- */

void TFormSARP_Produits_TableERPCalcFields
               (undefined2 param_1,undefined4 param_2,undefined2 param_3,undefined2 param_4)

{
  uint uVar1;
  undefined2 *puVar2;
  undefined2 uVar3;
  int iVar4;
  undefined2 uVar5;
  int iVar6;
  int iVar7;
  undefined2 uVar8;
  longdouble lVar9;
  longdouble lVar10;
  longdouble lVar11;
  longdouble lVar12;
  longdouble lVar13;
  longdouble lVar14;
  longdouble lVar15;
  longdouble in_ST2;
  longdouble in_ST6;
  undefined4 uVar16;
  undefined4 *puVar17;
  undefined4 *puVar18;
  undefined4 uVar19;
  long lVar20;
  undefined2 uVar21;
  double dVar22;
  undefined8 uVar23;
  double dVar24;
  int iVar25;
  undefined2 uVar26;
  long lStack_86;
  undefined2 uStack_c;
  undefined2 uStack_a;
  undefined2 uStack_8;
  undefined2 uStack_6;
  
  FUN_1158_0444();
  uVar16 = FUN_1158_2273(0x138,(char *)s_iTime_1160_10dc + 4,param_3,param_4);
  uVar5 = (undefined2)((ulong)uVar16 >> 0x10);
  uVar3 = (undefined2)uVar16;
  puVar17 = (undefined4 *)FUN_10d8_3b9b(uVar16,0x482a,0x1158);
  puVar2 = (undefined2 *)((int)*puVar17 + 0x44);
  (*(code *)*puVar2)(0x10d8,puVar17);
  FUN_1158_0416();
  uVar8 = (undefined2)((ulong)param_2 >> 0x10);
  iVar7 = (int)param_2;
  puVar17 = (undefined4 *)
            FUN_10d8_3b9b((int)*(undefined4 *)(iVar7 + 0x1c0),
                          (int)((ulong)*(undefined4 *)(iVar7 + 0x1c0) >> 0x10),0x4846,0x1158);
  puVar2 = (undefined2 *)((int)*puVar17 + 0x44);
  lVar20 = (*(code *)*puVar2)(0x10d8,puVar17);
  uVar21 = SUB82((double)lVar20,0);
  uVar26 = (undefined2)((qword)(double)lVar20 >> 0x10);
  puVar17 = (undefined4 *)FUN_10d8_3b9b();
  puVar2 = (undefined2 *)((int)*puVar17 + 0x44);
  lVar20 = (*(code *)*puVar2)();
  FUN_1080_2ea7((double)lVar20,puVar17,uVar21,uVar26);
  puVar17 = (undefined4 *)FUN_10d8_3b9b(uVar3,CONCAT42(&UNK_1008_483c,uVar5));
  puVar2 = (undefined2 *)((int)*puVar17 + 0x5c);
  (*(code *)*puVar2)();
  puVar17 = (undefined4 *)
            FUN_10d8_3b9b((int)*(undefined4 *)(iVar7 + 0x20c),
                          (int)((ulong)*(undefined4 *)(iVar7 + 0x20c) >> 0x10),0x4871);
  puVar2 = (undefined2 *)((int)*puVar17 + 0x40);
  (*(code *)*puVar2)(0x10d8,(undefined4 *)puVar17);
  puVar17 = (undefined4 *)FUN_10d8_3b9b();
  puVar2 = (undefined2 *)((int)*puVar17 + 0x44);
  (*(code *)*puVar2)();
  puVar17 = (undefined4 *)
            FUN_10d8_3b9b((int)*(undefined4 *)(iVar7 + 0x1c0),
                          CONCAT42(0x10d84846,(int)((ulong)*(undefined4 *)(iVar7 + 0x1c0) >> 0x10)))
  ;
  puVar2 = (undefined2 *)((int)*puVar17 + 0x44);
  lVar20 = (*(code *)*puVar2)();
  puVar18 = (undefined4 *)FUN_10d8_3b9b();
  uVar23 = CONCAT62(CONCAT42(puVar17,(int)((ulong)puVar18 >> 0x10)),(undefined4 *)puVar18);
  puVar2 = (undefined2 *)((int)*puVar18 + 0x40);
  (*(code *)*puVar2)();
  lVar9 = in_ST6;
  FUN_1080_2ea7((double)((longdouble)lVar20 * in_ST2),uVar23);
  lVar10 = lVar9;
  puVar17 = (undefined4 *)FUN_10d8_3b9b(uVar3,CONCAT42(&UNK_1008_4865,uVar5));
  puVar2 = (undefined2 *)((int)*puVar17 + 0x5c);
  (*(code *)*puVar2)();
  puVar17 = (undefined4 *)
            FUN_10d8_3b9b((int)*(undefined4 *)(iVar7 + 0x1bc),
                          (int)((ulong)*(undefined4 *)(iVar7 + 0x1bc) >> 0x10),0x48b4);
  puVar2 = (undefined2 *)((int)*puVar17 + 0x40);
  (*(code *)*puVar2)(0x10d8,(undefined4 *)puVar17);
  puVar17 = (undefined4 *)
            FUN_10d8_3b9b((int)*(undefined4 *)(iVar7 + 0x1bc),
                          (int)((ulong)*(undefined4 *)(iVar7 + 0x1bc) >> 0x10),0x48c8,0x10d8);
  puVar2 = (undefined2 *)((int)*puVar17 + 0x40);
  (*(code *)*puVar2)(0x10d8,puVar17);
  lVar11 = lVar10;
  puVar17 = (undefined4 *)
            FUN_10d8_3b9b((int)*(undefined4 *)(iVar7 + 0x1c0),
                          (int)((ulong)*(undefined4 *)(iVar7 + 0x1c0) >> 0x10),0x48da,0x10d8);
  puVar2 = (undefined2 *)((int)*puVar17 + 0x40);
  (*(code *)*puVar2)(0x10d8,puVar17);
  puVar17 = (undefined4 *)FUN_10d8_3b9b(uVar16,0x48ea,0x10d8);
  puVar2 = (undefined2 *)((int)*puVar17 + 0x40);
  (*(code *)*puVar2)(0x10d8,puVar17);
  lVar12 = lVar11;
  puVar17 = (undefined4 *)FUN_10d8_3b9b();
  puVar2 = (undefined2 *)((int)*puVar17 + 0x40);
  (*(code *)*puVar2)();
  puVar17 = (undefined4 *)FUN_10d8_3b9b(uVar3,CONCAT42(0x10d84882,uVar5));
  puVar2 = (undefined2 *)((int)*puVar17 + 0x44);
  uVar19 = (*(code *)*puVar2)();
  uVar23 = CONCAT62(CONCAT42(puVar17,(int)((ulong)uVar19 >> 0x10)),(int)uVar19);
  puVar17 = (undefined4 *)
            FUN_10d8_3b9b((int)*(undefined4 *)(iVar7 + 0x1d4),
                          CONCAT42(0x10d84907,(int)((ulong)*(undefined4 *)(iVar7 + 0x1d4) >> 0x10)))
  ;
  puVar2 = (undefined2 *)((int)*puVar17 + 0x44);
  uVar19 = (*(code *)*puVar2)();
  iVar25 = (int)((ulong)puVar17 >> 0x10);
  iVar6 = (int)((ulong)uVar19 >> 0x10);
  uVar1 = (uint)CARRY2((uint)uVar19,(uint)(undefined4 *)puVar17);
  iVar4 = iVar6 + iVar25;
  lVar20 = CONCAT22(iVar4 + uVar1,(uint)uVar19 + (int)(undefined4 *)puVar17);
  if (SCARRY2(iVar6,iVar25) != SCARRY2(iVar4,uVar1)) {
    lVar20 = FUN_1158_043e();
  }
  lVar13 = lVar12;
  FUN_1080_2ea7((double)lVar20,uVar23);
  dVar22 = (double)in_ST6;
  lVar14 = lVar13;
  puVar17 = (undefined4 *)FUN_10d8_3b9b(uVar3,CONCAT42(0x108048a4,uVar5));
  puVar2 = (undefined2 *)((int)*puVar17 + 0x5c);
  (*(code *)*puVar2)();
  puVar18 = (undefined4 *)FUN_10d8_3b9b();
  uVar23 = CONCAT62(CONCAT42(puVar17,(int)((ulong)puVar18 >> 0x10)),(undefined4 *)puVar18);
  puVar2 = (undefined2 *)((int)*puVar18 + 0x40);
  (*(code *)*puVar2)();
  dVar24 = (double)lVar9;
  iVar4 = FUN_1158_0416(dVar24,uVar23,dVar22);
  iVar4 = iVar7 + iVar4 * 8;
  FUN_1080_2ea7(*(undefined2 *)(iVar4 + 0x49f),*(undefined2 *)(iVar4 + 0x4a1),
                *(undefined2 *)(iVar4 + 0x4a3),*(undefined2 *)(iVar4 + 0x4a5),dVar24);
  dVar22 = (double)(lVar10 * (longdouble)100.0);
  lVar9 = lVar14;
  puVar17 = (undefined4 *)FUN_10d8_3b9b(uVar16,0x4910,(char *)s_devices_1160_1007 + 1);
  puVar2 = (undefined2 *)((int)*puVar17 + 0x5c);
  (*(code *)*puVar2)(0x10d8,puVar17,dVar22);
  puVar17 = (undefined4 *)FUN_10d8_3b9b();
  puVar2 = (undefined2 *)((int)*puVar17 + 0x40);
  (*(code *)*puVar2)();
  puVar17 = (undefined4 *)FUN_10d8_3b9b();
  puVar2 = (undefined2 *)((int)*puVar17 + 0x44);
  uVar19 = (*(code *)*puVar2)();
  puVar17 = (undefined4 *)FUN_10d8_3b9b();
  uVar23 = CONCAT62(CONCAT42(uVar19,(int)((ulong)puVar17 >> 0x10)),(undefined4 *)puVar17);
  puVar2 = (undefined2 *)((int)*puVar17 + 0x44);
  uVar19 = (*(code *)*puVar2)();
  iVar6 = (int)((ulong)uVar19 >> 0x10);
  iVar25 = (int)((qword)uVar23 >> 0x10);
  uVar1 = (uint)CARRY2((uint)uVar19,(uint)uVar23);
  iVar4 = iVar6 + iVar25;
  lVar20 = CONCAT22(iVar4 + uVar1,(uint)uVar19 + (uint)uVar23);
  if (SCARRY2(iVar6,iVar25) != SCARRY2(iVar4,uVar1)) {
    uVar23 = CONCAT62((uint6)((qword)uVar23 >> 0x10) & 0xffffffff0000,0x4f1b);
    lVar20 = FUN_1158_043e();
  }
  uVar19 = (undefined4)((qword)uVar23 >> 0x20);
  puVar17 = (undefined4 *)FUN_10d8_3b9b();
  uVar23 = CONCAT62(CONCAT42(uVar19,(int)((ulong)puVar17 >> 0x10)),(undefined4 *)puVar17);
  puVar2 = (undefined2 *)((int)*puVar17 + 0x40);
  (*(code *)*puVar2)();
  FUN_1080_2ea7((double)((longdouble)lVar20 * lVar11),uVar23);
  puVar17 = (undefined4 *)FUN_10d8_3b9b(uVar3,CONCAT42(&UNK_1008_492c,uVar5));
  puVar2 = (undefined2 *)((int)*puVar17 + 0x5c);
  (*(code *)*puVar2)();
  puVar17 = (undefined4 *)
            FUN_10d8_3b9b((int)*(undefined4 *)(iVar7 + 0x1bc),
                          (int)((ulong)*(undefined4 *)(iVar7 + 0x1bc) >> 0x10),0x4945);
  puVar2 = (undefined2 *)((int)*puVar17 + 0x44);
  lVar20 = (*(code *)*puVar2)(0x10d8,(undefined4 *)puVar17);
  puVar17 = (undefined4 *)
            FUN_10d8_3b9b((int)*(undefined4 *)(iVar7 + 0x1c0),
                          (int)((ulong)*(undefined4 *)(iVar7 + 0x1c0) >> 0x10),0x491f,0x10d8);
  puVar2 = (undefined2 *)((int)*puVar17 + 0x40);
  (*(code *)*puVar2)(0x10d8,puVar17);
  dVar22 = (double)((longdouble)lVar20 * lVar12);
  lVar12 = lVar9;
  puVar17 = (undefined4 *)FUN_10d8_3b9b();
  puVar2 = (undefined2 *)((int)*puVar17 + 0x40);
  (*(code *)*puVar2)();
  uStack_6 = (undefined2)((qword)dVar22 >> 0x30);
  uStack_8 = (undefined2)((qword)dVar22 >> 0x20);
  uStack_a = (undefined2)((qword)dVar22 >> 0x10);
  uStack_c = SUB82(dVar22,0);
  lVar15 = lVar12;
  FUN_1080_2ea7(uStack_c,uStack_a,uStack_8,uStack_6,(double)lVar13);
  puVar17 = (undefined4 *)FUN_10d8_3b9b(uVar16,0x494c,(char *)s_devices_1160_1007 + 1);
  puVar2 = (undefined2 *)((int)*puVar17 + 0x5c);
  (*(code *)*puVar2)(0x10d8,puVar17);
  puVar17 = (undefined4 *)FUN_10d8_3b9b();
  puVar2 = (undefined2 *)((int)*puVar17 + 0x40);
  (*(code *)*puVar2)();
  dVar24 = (double)lVar14;
  lVar10 = lVar15;
  iVar4 = FUN_1158_0416();
  iVar4 = iVar7 + iVar4 * 8;
  FUN_1080_2ea7(*(undefined2 *)(iVar4 + 0x4af),*(undefined2 *)(iVar4 + 0x4b1),
                *(undefined2 *)(iVar4 + 0x4b3),*(undefined2 *)(iVar4 + 0x4b5),dVar24);
  puVar17 = (undefined4 *)FUN_10d8_3b9b(uVar16,0x4956,(char *)s_devices_1160_1007 + 1);
  puVar2 = (undefined2 *)((int)*puVar17 + 0x5c);
  (*(code *)*puVar2)(0x10d8,puVar17);
  uVar19 = SUB84(dVar22,0);
  puVar17 = (undefined4 *)FUN_10d8_3b9b();
  uVar23 = CONCAT62(CONCAT42(uVar19,(int)((ulong)puVar17 >> 0x10)),(undefined4 *)puVar17);
  puVar2 = (undefined2 *)((int)*puVar17 + 0x44);
  lVar20 = (*(code *)*puVar2)();
  FUN_1080_2ea7((double)lVar20,uVar23);
  puVar17 = (undefined4 *)FUN_10d8_3b9b(uVar3,CONCAT42(0x10804964,uVar5));
  puVar2 = (undefined2 *)((int)*puVar17 + 0x5c);
  (*(code *)*puVar2)();
  puVar17 = (undefined4 *)FUN_10d8_3b9b();
  puVar2 = (undefined2 *)((int)*puVar17 + 0x44);
  lVar20 = (*(code *)*puVar2)();
  dVar22 = (double)lVar20;
  lVar11 = lVar10;
  iVar4 = FUN_1158_0416();
  iVar4 = iVar7 + iVar4 * 8;
  FUN_1080_2ea7(*(undefined2 *)(iVar4 + 0x4bf),*(undefined2 *)(iVar4 + 0x4c1),
                *(undefined2 *)(iVar4 + 0x4c3),*(undefined2 *)(iVar4 + 0x4c5),dVar22);
  puVar17 = (undefined4 *)FUN_10d8_3b9b(uVar16,0x4989,(char *)s_devices_1160_1007 + 1);
  puVar2 = (undefined2 *)((int)*puVar17 + 0x5c);
  (*(code *)*puVar2)(0x10d8,puVar17);
  puVar17 = (undefined4 *)FUN_10d8_3b9b();
  puVar2 = (undefined2 *)((int)*puVar17 + 0x44);
  lVar20 = (*(code *)*puVar2)();
  dVar22 = (double)lVar20;
  iVar4 = FUN_1158_0416();
  iVar4 = iVar7 + iVar4 * 8;
  FUN_1080_2ea7(*(undefined2 *)(iVar4 + 0x4cf),*(undefined2 *)(iVar4 + 0x4d1),
                *(undefined2 *)(iVar4 + 0x4d3),*(undefined2 *)(iVar4 + 0x4d5),dVar22);
  dVar22 = (double)(lVar9 * (longdouble)100.0);
  puVar18 = (undefined4 *)FUN_10d8_3b9b(uVar16,0x499b,(char *)s_devices_1160_1007 + 1);
  puVar2 = (undefined2 *)((int)*puVar18 + 0x5c);
  (*(code *)*puVar2)(0x10d8,puVar18,dVar22,puVar17);
  puVar17 = (undefined4 *)
            FUN_10d8_3b9b((int)*(undefined4 *)(iVar7 + 0x1bc),
                          (int)((ulong)*(undefined4 *)(iVar7 + 0x1bc) >> 0x10),0x4945,0x10d8);
  puVar2 = (undefined2 *)((int)*puVar17 + 0x44);
  lVar20 = (*(code *)*puVar2)(0x10d8,puVar17);
  puVar17 = (undefined4 *)FUN_10d8_3b9b();
  puVar2 = (undefined2 *)((int)*puVar17 + 0x40);
  (*(code *)*puVar2)();
  lVar13 = lVar11;
  FUN_1080_2fa6((double)((longdouble)lVar20 * lVar12));
  puVar17 = (undefined4 *)
            FUN_10d8_3b9b((int)*(undefined4 *)(iVar7 + 0x1bc),
                          CONCAT42(0x108049c1,(int)((ulong)*(undefined4 *)(iVar7 + 0x1bc) >> 0x10)))
  ;
  puVar2 = (undefined2 *)((int)*puVar17 + 0x44);
  lVar20 = (*(code *)*puVar2)();
  puVar17 = (undefined4 *)FUN_10d8_3b9b();
  puVar2 = (undefined2 *)((int)*puVar17 + 0x40);
  (*(code *)*puVar2)();
  FUN_1080_2fa6((double)((longdouble)lVar20 * lVar15));
  puVar17 = (undefined4 *)
            FUN_10d8_3b9b((int)*(undefined4 *)(iVar7 + 0x1bc),
                          CONCAT42(0x108049e4,(int)((ulong)*(undefined4 *)(iVar7 + 0x1bc) >> 0x10)))
  ;
  puVar2 = (undefined2 *)((int)*puVar17 + 0x44);
  lVar20 = (*(code *)*puVar2)();
  puVar17 = (undefined4 *)FUN_10d8_3b9b();
  puVar2 = (undefined2 *)((int)*puVar17 + 0x40);
  (*(code *)*puVar2)();
  FUN_1080_2fa6((double)((longdouble)lVar20 * lVar10));
  lVar9 = lVar13;
  puVar17 = (undefined4 *)FUN_10d8_3b9b(uVar16,0x49be,0x1080);
  puVar2 = (undefined2 *)((int)*puVar17 + 0x5c);
  (*(code *)*puVar2)(0x10d8,puVar17);
  puVar17 = (undefined4 *)FUN_10d8_3b9b();
  puVar2 = (undefined2 *)((int)*puVar17 + 0x40);
  (*(code *)*puVar2)();
  puVar17 = (undefined4 *)FUN_10d8_3b9b(uVar16,0x49ff,(char *)s_devices_1160_1007 + 1);
  puVar2 = (undefined2 *)((int)*puVar17 + 0x5c);
  (*(code *)*puVar2)(0x10d8,puVar17);
  puVar17 = (undefined4 *)FUN_10d8_3b9b();
  puVar2 = (undefined2 *)((int)*puVar17 + 0x40);
  (*(code *)*puVar2)();
  dVar22 = (double)(lVar11 * (longdouble)100.0);
  puVar18 = (undefined4 *)FUN_10d8_3b9b(uVar16,0x4a16,(char *)s_devices_1160_1007 + 1);
  puVar2 = (undefined2 *)((int)*puVar18 + 0x5c);
  (*(code *)*puVar2)(0x10d8,puVar18,dVar22,puVar17);
  puVar17 = (undefined4 *)FUN_10d8_3b9b();
  puVar2 = (undefined2 *)((int)*puVar17 + 0x40);
  (*(code *)*puVar2)();
  puVar17 = (undefined4 *)FUN_10d8_3b9b(uVar16,0x4a2b,(char *)s_devices_1160_1007 + 1);
  puVar2 = (undefined2 *)((int)*puVar17 + 0x5c);
  (*(code *)*puVar2)(0x10d8,puVar17);
  puVar17 = (undefined4 *)FUN_10d8_3b9b();
  puVar2 = (undefined2 *)((int)*puVar17 + 0x40);
  (*(code *)*puVar2)();
  puVar17 = (undefined4 *)FUN_10d8_3b9b(uVar16,0x4a3e,(char *)s_devices_1160_1007 + 1);
  puVar2 = (undefined2 *)((int)*puVar17 + 0x5c);
  (*(code *)*puVar2)(0x10d8,puVar17);
  puVar17 = (undefined4 *)FUN_10d8_3b9b();
  puVar2 = (undefined2 *)((int)*puVar17 + 0x40);
  (*(code *)*puVar2)();
  puVar17 = (undefined4 *)FUN_10d8_3b9b(uVar16,0x4a59,(char *)s_devices_1160_1007 + 1);
  puVar2 = (undefined2 *)((int)*puVar17 + 0x5c);
  (*(code *)*puVar2)(0x10d8,puVar17);
  puVar17 = (undefined4 *)FUN_10d8_3b9b();
  puVar2 = (undefined2 *)((int)*puVar17 + 0x40);
  (*(code *)*puVar2)();
  dVar22 = (double)(lVar13 * (longdouble)100.0);
  puVar18 = (undefined4 *)FUN_10d8_3b9b(uVar16,0x4a76,(char *)s_devices_1160_1007 + 1);
  puVar2 = (undefined2 *)((int)*puVar18 + 0x5c);
  (*(code *)*puVar2)(0x10d8,puVar18,dVar22,puVar17);
  puVar17 = (undefined4 *)FUN_10d8_3b9b(uVar16,0x49be,0x10d8);
  puVar2 = (undefined2 *)((int)*puVar17 + 0x40);
  (*(code *)*puVar2)(0x10d8,puVar17);
  puVar17 = (undefined4 *)FUN_10d8_3b9b(uVar16,0x48fb,0x10d8);
  puVar2 = (undefined2 *)((int)*puVar17 + 0x40);
  (*(code *)*puVar2)(0x10d8,puVar17);
  puVar17 = (undefined4 *)
            FUN_10d8_3b9b((int)*(undefined4 *)(iVar7 + 0x1d4),
                          (int)((ulong)*(undefined4 *)(iVar7 + 0x1d4) >> 0x10),0x48fb,0x10d8);
  puVar2 = (undefined2 *)((int)*puVar17 + 0x40);
  (*(code *)*puVar2)(0x10d8,puVar17);
  puVar17 = (undefined4 *)
            FUN_10d8_3b9b((int)*(undefined4 *)(iVar7 + 0x1bc),
                          (int)((ulong)*(undefined4 *)(iVar7 + 0x1bc) >> 0x10),0x48b4,0x10d8);
  puVar2 = (undefined2 *)((int)*puVar17 + 0x40);
  (*(code *)*puVar2)(0x10d8,puVar17);
  puVar17 = (undefined4 *)
            FUN_10d8_3b9b((int)*(undefined4 *)(iVar7 + 0x1bc),
                          (int)((ulong)*(undefined4 *)(iVar7 + 0x1bc) >> 0x10),0x48c8,0x10d8);
  puVar2 = (undefined2 *)((int)*puVar17 + 0x40);
  (*(code *)*puVar2)(0x10d8,puVar17);
  lVar11 = lVar9;
  puVar17 = (undefined4 *)
            FUN_10d8_3b9b((int)*(undefined4 *)(iVar7 + 0x1c0),
                          (int)((ulong)*(undefined4 *)(iVar7 + 0x1c0) >> 0x10),0x48da,0x10d8);
  puVar2 = (undefined2 *)((int)*puVar17 + 0x40);
  (*(code *)*puVar2)(0x10d8,puVar17);
  puVar17 = (undefined4 *)FUN_10d8_3b9b(uVar16,0x48ea,0x10d8);
  puVar2 = (undefined2 *)((int)*puVar17 + 0x40);
  (*(code *)*puVar2)(0x10d8,puVar17);
  lVar12 = lVar11;
  puVar17 = (undefined4 *)
            FUN_10d8_3b9b((int)*(undefined4 *)(iVar7 + 0x1c0),
                          (int)((ulong)*(undefined4 *)(iVar7 + 0x1c0) >> 0x10),0x493b,0x10d8);
  puVar2 = (undefined2 *)((int)*puVar17 + 0x40);
  (*(code *)*puVar2)(0x10d8,puVar17);
  puVar17 = (undefined4 *)
            FUN_10d8_3b9b((int)*(undefined4 *)(iVar7 + 0x1c0),
                          (int)((ulong)*(undefined4 *)(iVar7 + 0x1c0) >> 0x10),0x4a9c,0x10d8);
  puVar2 = (undefined2 *)((int)*puVar17 + 0x40);
  (*(code *)*puVar2)(0x10d8,puVar17);
  puVar17 = (undefined4 *)
            FUN_10d8_3b9b((int)*(undefined4 *)(iVar7 + 0x1bc),
                          (int)((ulong)*(undefined4 *)(iVar7 + 0x1bc) >> 0x10),0x4aae,0x10d8);
  puVar2 = (undefined2 *)((int)*puVar17 + 0x40);
  (*(code *)*puVar2)(0x10d8,puVar17);
  puVar17 = (undefined4 *)
            FUN_10d8_3b9b((int)*(undefined4 *)(iVar7 + 0x1d4),
                          (int)((ulong)*(undefined4 *)(iVar7 + 0x1d4) >> 0x10),0x4907,0x10d8);
  puVar2 = (undefined2 *)((int)*puVar17 + 0x44);
  lStack_86 = (*(code *)*puVar2)(0x10d8,puVar17);
  puVar17 = (undefined4 *)FUN_10d8_3b9b();
  puVar2 = (undefined2 *)((int)*puVar17 + 0x40);
  (*(code *)*puVar2)();
  FUN_1080_2fa6((double)((longdouble)lStack_86 * lVar9));
  puVar17 = (undefined4 *)FUN_10d8_3b9b(uVar16,0x4a91,0x1080);
  puVar2 = (undefined2 *)((int)*puVar17 + 0x5c);
  (*(code *)*puVar2)(0x10d8,puVar17);
  puVar17 = (undefined4 *)FUN_10d8_3b9b(uVar16,0x4a91,0x10d8);
  puVar2 = (undefined2 *)((int)*puVar17 + 0x40);
  (*(code *)*puVar2)(0x10d8,puVar17);
  uVar8 = SUB82((double)lVar11,0);
  uVar21 = (undefined2)((qword)(double)lVar11 >> 0x10);
  puVar17 = (undefined4 *)FUN_10d8_3b9b();
  puVar2 = (undefined2 *)((int)*puVar17 + 0x40);
  (*(code *)*puVar2)();
  FUN_1080_2ea7((double)lVar12,puVar17,uVar8,uVar21);
  puVar17 = (undefined4 *)FUN_10d8_3b9b(uVar3,CONCAT42(&UNK_1008_4acc,uVar5));
  puVar2 = (undefined2 *)((int)*puVar17 + 0x5c);
  (*(code *)*puVar2)();
  return;
}



/* ---- TFormSARP_Produits_FormKeyDown @ 1008:5853  (149 octets) ---- */

void __stdcall16far TFormSARP_Produits_FormKeyDown(undefined4 param_1,char param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  
  FUN_1158_0444();
  iVar1 = (int)param_1;
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  if (((*param_3 == 0x70 && param_2 == '\0') && (*(int *)(iVar1 + 0xe6) == *(int *)(iVar1 + 0x31e)))
     && (*(int *)(iVar1 + 0xe4) == *(int *)(iVar1 + 0x31c))) {
    *param_3 = 0;
    uVar4 = (undefined2)((ulong)*(undefined4 *)(iVar1 + 0x31c) >> 0x10);
    iVar2 = (int)*(undefined4 *)(iVar1 + 0x31c);
    FUN_1008_5997(iVar1,uVar3,*(undefined2 *)(iVar2 + 0xf6),*(undefined2 *)(iVar2 + 0xf8),
                  *(undefined2 *)(iVar2 + 0xf2),*(undefined2 *)(iVar2 + 0xf4));
  }
  if (*param_3 != 0) {
    FUN_1140_2230(iVar1,uVar3,*(undefined2 *)(iVar1 + 0xe4),*(undefined2 *)(iVar1 + 0xe6));
  }
  return;
}



/* ---- TFormSARP_Produits_Fiche1Click @ 1008:58e8  (43 octets) ---- */

void __stdcall16far TFormSARP_Produits_Fiche1Click(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined2 uVar3;
  
  FUN_1158_0444();
  uVar1 = *(undefined4 *)((int)param_1 + 0x274);
  uVar3 = (undefined2)((ulong)uVar1 >> 0x10);
  iVar2 = (int)uVar1;
  FUN_1140_77b2((int)DAT_1160_2c2a,(int)((ulong)DAT_1160_2c2a >> 0x10),*(undefined2 *)(iVar2 + 0x23)
                ,*(undefined2 *)(iVar2 + 0x25),1);
  return;
}



/* ---- TFormSARP_Produits_Index1Click @ 1008:5913  (31 octets) ---- */

void __stdcall16far TFormSARP_Produits_Index1Click(void)

{
  FUN_1158_0444();
  FUN_1140_77b2((int)DAT_1160_2c2a,(int)((ulong)DAT_1160_2c2a >> 0x10),0,0,3);
  return;
}



/* ---- TFormSARP_Produits_Rechercher1Click @ 1008:5932  (33 octets) ---- */

void __stdcall16far TFormSARP_Produits_Rechercher1Click(void)

{
  FUN_1158_0444();
  FUN_1140_77b2((int)DAT_1160_2c2a,(int)((ulong)DAT_1160_2c2a >> 0x10),0x40,0x1160,0x105);
  return;
}



/* ---- TFormSARP_Produits_Utiliserlaide1Click @ 1008:5953  (31 octets) ---- */

void __stdcall16far TFormSARP_Produits_Utiliserlaide1Click(void)

{
  FUN_1158_0444();
  FUN_1140_77b2((int)DAT_1160_2c2a,(int)((ulong)DAT_1160_2c2a >> 0x10),0,0,4);
  return;
}



/* ---- TFormSARP_Produits_Apropos1Click @ 1008:5972  (29 octets) ---- */

void __stdcall16far TFormSARP_Produits_Apropos1Click(void)

{
  undefined2 uVar1;
  
  uVar1 = 0x597d;
  FUN_1158_0444();
  FUN_1140_5d45((int)DAT_1160_2008,(int)((ulong)DAT_1160_2008 >> 0x10),uVar1);
  return;
}



/* ---- FUN_1008_5997 @ 1008:5997  (346 octets) ---- */

void __stdcall16far FUN_1008_5997(undefined2 param_1,undefined2 param_2_00,uint param_2,int param_3)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  undefined4 uVar4;
  
  FUN_1158_0444();
  bVar2 = FUN_1158_0416();
  if ((((bVar2 < 3) || (bVar2 == 9)) || (bVar2 == 0x15)) || ((bVar2 == 0x1b || (bVar2 == 0x20)))) {
    uVar4 = 1;
  }
  else if ((param_3 < 0) || ((param_3 < 1 && (param_2 < 9)))) {
    uVar4 = CONCAT22(param_3 + 0x21 + (uint)(0x1c37 < param_2),param_2 + 0xe3c8);
    if (SCARRY2(param_3,0x21) != SCARRY2(param_3 + 0x21,(uint)(0x1c37 < param_2))) {
      uVar4 = FUN_1158_043e(0x1158);
    }
    iVar3 = (int)((ulong)uVar4 >> 0x10);
    uVar1 = (uint)((uint)uVar4 < 2);
    uVar4 = CONCAT22(iVar3 - uVar1,(uint)uVar4 - 2);
    if (SBORROW2(iVar3,uVar1) != false) {
      uVar4 = FUN_1158_043e(0x1158);
    }
  }
  else if ((param_3 < 0) || ((param_3 < 1 && (param_2 < 0x15)))) {
    uVar4 = CONCAT22(param_3 + 0x21 + (uint)(0x184f < param_2),param_2 + 0xe7b0);
    if (SCARRY2(param_3,0x21) != SCARRY2(param_3 + 0x21,(uint)(0x184f < param_2))) {
      uVar4 = FUN_1158_043e(0x1158);
    }
    iVar3 = (int)((ulong)uVar4 >> 0x10);
    uVar1 = (uint)((uint)uVar4 < 9);
    uVar4 = CONCAT22(iVar3 - uVar1,(uint)uVar4 - 9);
    if (SBORROW2(iVar3,uVar1) != false) {
      uVar4 = FUN_1158_043e(0x1158);
    }
  }
  else if ((param_3 < 0) || ((param_3 < 1 && (param_2 < 0x1b)))) {
    uVar4 = 0x21eb98;
  }
  else if ((param_3 < 0) || ((param_3 < 1 && (param_2 < 0x20)))) {
    uVar4 = CONCAT22(param_3 + 0x21 + (uint)(0x107f < param_2),param_2 + 0xef80);
    if (SCARRY2(param_3,0x21) != SCARRY2(param_3 + 0x21,(uint)(0x107f < param_2))) {
      uVar4 = FUN_1158_043e(0x1158);
    }
    iVar3 = (int)((ulong)uVar4 >> 0x10);
    uVar1 = (uint)((uint)uVar4 < 0x1b);
    uVar4 = CONCAT22(iVar3 - uVar1,(uint)uVar4 - 0x1b);
    if (SBORROW2(iVar3,uVar1) != false) {
      uVar4 = FUN_1158_043e(0x1158);
    }
  }
  else if ((param_3 < 0) || ((param_3 < 1 && (param_2 < 0x24)))) {
    uVar4 = CONCAT22(param_3 + 0x21 + (uint)(0xc97 < param_2),param_2 - 0xc98);
    if (SCARRY2(param_3,0x21) != SCARRY2(param_3 + 0x21,(uint)(0xc97 < param_2))) {
      uVar4 = FUN_1158_043e(0x1158);
    }
    iVar3 = (int)((ulong)uVar4 >> 0x10);
    uVar1 = (uint)((uint)uVar4 < 0x20);
    uVar4 = CONCAT22(iVar3 - uVar1,(uint)uVar4 - 0x20);
    if (SBORROW2(iVar3,uVar1) != false) {
      uVar4 = FUN_1158_043e(0x1158);
    }
  }
  else {
    uVar4 = 1;
  }
  FUN_1140_77b2((int)DAT_1160_2c2a,(int)((ulong)DAT_1160_2c2a >> 0x10),uVar4,8);
  return;
}



/* ---- TFormSARP_Produits_SpecialStringGrid1MouseDown @ 1008:5af1  (204 octets) ---- */

void __stdcall16far
TFormSARP_Produits_SpecialStringGrid1MouseDown
          (undefined4 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4_00,
          char param_4,undefined2 param_5,undefined2 param_6)

{
  uint uVar1;
  char cVar2;
  undefined2 uVar3;
  int iVar4;
  int unaff_CS;
  undefined2 unaff_SS;
  undefined4 uVar5;
  uint local_a;
  int local_8;
  uint local_6;
  
  local_6 = 0x5afc;
  FUN_1158_0444();
  if ((param_4 == '\x01') &&
     (cVar2 = FUN_1158_2255(0x18e7,(char *)s_sShortDate_1160_10ad + 3,param_5,param_6),
     cVar2 != '\0')) {
    uVar5 = FUN_1158_2273(0x18e7,(char *)s_sShortDate_1160_10ad + 3,param_5,param_6);
    uVar3 = (undefined2)((ulong)uVar5 >> 0x10);
    FUN_10f8_7f64(uVar5,&local_a,unaff_SS,&local_6,unaff_SS,param_2,param_3);
    uVar1 = *(uint *)((int)uVar5 + 0xfe);
    iVar4 = (int)uVar1 >> 0xf;
    if ((iVar4 < unaff_CS) || ((iVar4 <= unaff_CS && (uVar1 <= local_6)))) {
      FUN_10f8_6fe1(uVar5,local_6,unaff_CS);
    }
    uVar1 = *(uint *)((int)uVar5 + 0x100);
    iVar4 = (int)uVar1 >> 0xf;
    if ((iVar4 < local_8) || ((iVar4 <= local_8 && (uVar1 <= local_a)))) {
      FUN_10f8_73ec(uVar5,local_a,local_8);
    }
    FUN_1008_5997((int)param_1,(int)((ulong)param_1 >> 0x10),local_a,local_8,local_6,unaff_CS);
  }
  return;
}



/* ---- TFormSARP_Produits_ResultatsparProduits1Click @ 1008:5bbd  (43 octets) ---- */

void __stdcall16far TFormSARP_Produits_ResultatsparProduits1Click(undefined4 param_1)

{
  undefined2 uVar1;
  
  FUN_1158_0444();
  DAT_1160_0144 = 0xb;
  DAT_1160_0146 = 0;
  uVar1 = (undefined2)((ulong)param_1 >> 0x10);
  DAT_1160_0148 = *(undefined2 *)((int)param_1 + 0x39f);
  FUN_1140_5556((int)param_1,uVar1);
  return;
}



/* ---- TFormSARP_Produits_ResultatsGeneraux1Click @ 1008:5be8  (43 octets) ---- */

void __stdcall16far TFormSARP_Produits_ResultatsGeneraux1Click(undefined4 param_1)

{
  undefined2 uVar1;
  
  FUN_1158_0444();
  DAT_1160_0144 = 0xc;
  DAT_1160_0146 = 0;
  uVar1 = (undefined2)((ulong)param_1 >> 0x10);
  DAT_1160_0148 = *(undefined2 *)((int)param_1 + 0x39f);
  FUN_1140_5556((int)param_1,uVar1);
  return;
}



/* ---- TFormSARP_Produits_Animateur1Click @ 1008:5c13  (27 octets) ---- */

void __stdcall16far TFormSARP_Produits_Animateur1Click(undefined4 param_1)

{
  FUN_1158_0444();
  FUN_1088_0e44(*(undefined2 *)((int)param_1 + 0x39f));
  return;
}



/* ---- TFormSARP_Produits_Entreprises1Click @ 1008:5c2e  (33 octets) ---- */

void __stdcall16far TFormSARP_Produits_Entreprises1Click(undefined4 param_1)

{
  FUN_1158_0444();
  FUN_1078_0ca1(0,*(undefined2 *)((int)param_1 + 0x39f),DAT_1160_0150);
  return;
}



/* ---- TFormSARP_Produits_Creation1Click @ 1008:5c4f  (19 octets) ---- */

void __stdcall16far TFormSARP_Produits_Creation1Click(void)

{
  FUN_1158_0444();
  FUN_1098_0942();
  return;
}



/* ---- TFormSARP_Produits_Court1Click @ 1008:5c82  (1 octets) ---- */

/* WARNING: Removing unreachable block (ram,0x10085d29) */
/* WARNING: Removing unreachable block (ram,0x10085d8c) */

void TFormSARP_Produits_Court1Click
               (undefined2 param_1,undefined4 param_2,undefined2 param_3,undefined2 param_4)

{
  int iVar1;
  long lVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  undefined2 uVar10;
  int iVar11;
  undefined2 uVar12;
  undefined2 uVar13;
  undefined2 uVar14;
  undefined4 uVar15;
  int iStack_e;
  uint uStack_8;
  
  FUN_1158_0444();
  cVar3 = FUN_1158_2255(0x94,0x1130,param_3,param_4);
  if (cVar3 != '\0') {
    uVar15 = FUN_1158_2273(0x94,0x1130,param_3,param_4);
    uVar12 = (undefined2)((ulong)param_2 >> 0x10);
    iVar9 = (int)param_2;
    uVar4 = FUN_1130_162b((int)*(undefined4 *)(iVar9 + 0x2f0),
                          (int)((ulong)*(undefined4 *)(iVar9 + 0x2f0) >> 0x10),uVar15);
    iVar1 = *(int *)(iVar9 + 0x3a3);
    if (uVar4 == 0) {
      *(undefined2 *)(iVar9 + 0x3a3) = 10;
      FUN_1158_04b2();
    }
    else if (uVar4 == 1) {
      *(undefined2 *)(iVar9 + 0x3a3) = 0xf;
      FUN_1158_04b2();
    }
    else if (uVar4 == 2) {
      *(undefined2 *)(iVar9 + 0x3a3) = 0x14;
      FUN_1158_04b2();
    }
    else {
      FUN_1158_04b2();
    }
    uVar13 = (undefined2)((ulong)*(undefined4 *)(iVar9 + 0x2f0) >> 0x10);
    uVar10 = (undefined2)*(undefined4 *)(iVar9 + 0x2f0);
    iVar5 = FUN_1130_1326(uVar10,uVar13);
    uVar6 = iVar5 - 1;
    if (SBORROW2(iVar5,1)) {
      uVar6 = FUN_1158_043e(0x1130);
    }
    if (-1 < (int)uVar6) {
      uStack_8 = 0;
      while( true ) {
        uVar7 = uStack_8 & 0xff00;
        if (uStack_8 == uVar4) {
          uVar7 = uVar7 + 1;
        }
        uVar15 = FUN_1130_1353(uVar10,uVar13,uStack_8);
        FUN_1130_1275(uVar15,uVar7);
        if (uStack_8 == uVar6) break;
        uStack_8 = uStack_8 + 1;
      }
    }
    uVar10 = (undefined2)((ulong)*(undefined4 *)(iVar9 + 0x31c) >> 0x10);
    iVar11 = (int)*(undefined4 *)(iVar9 + 0x31c);
    uVar13 = 0x10f8;
    FUN_10f8_7345(iVar11,uVar10,*(int *)(iVar11 + 0xfe),*(int *)(iVar11 + 0xfe) >> 0xf);
    lVar2 = (long)*(int *)(iVar9 + 0x3a1) * (long)*(int *)(iVar9 + 0x4a5);
    iVar5 = (int)lVar2;
    if (iVar5 != lVar2) {
      uVar13 = 0x1158;
      iVar5 = FUN_1158_043e(0x10f8);
    }
    if (SCARRY2(iVar5,1)) {
      FUN_1158_043e(uVar13);
    }
    iVar5 = FUN_10f8_6e30(iVar11,uVar10,0,0);
    iVar8 = *(int *)(iVar9 + 0x22) - iVar5;
    if (SBORROW2(*(int *)(iVar9 + 0x22),iVar5)) {
      iVar8 = FUN_1158_043e(0x10f8);
    }
    FUN_1158_04b2(iVar8,iVar8 >> 0xf);
    FUN_1158_102f();
    uVar13 = FUN_1158_0416();
    if (SBORROW2(*(int *)(iVar11 + 0xe8),(uint)(*(int *)(iVar11 + 0xe6) == 0)) != false) {
      FUN_1158_043e(0x1158);
    }
    uVar14 = 0x1158;
    iVar5 = FUN_1158_0416();
    if (0 < iVar5) {
      iStack_e = 1;
      while( true ) {
        uVar14 = 0x10f8;
        FUN_10f8_70c9(iVar11,uVar10,uVar13,iStack_e,iStack_e >> 0xf);
        if (iStack_e == iVar5) break;
        iStack_e = iStack_e + 1;
      }
    }
    if (*(int *)(iVar9 + 0x3a3) != iVar1) {
      func_0x10081f0f(uVar14,iVar9,uVar12);
      FUN_1008_2858(iVar9,uVar12,iVar9 + 0x31c,uVar12);
    }
    TFormSARP_Produits_FormResize(iVar9,uVar12,iVar9,uVar12);
  }
  return;
}



/* ---- TFormSARP_Produits_Egaliser1Click @ 1008:5f23  (1 octets) ---- */

void TFormSARP_Produits_Egaliser1Click(undefined2 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  undefined4 uVar8;
  undefined2 uVar9;
  int iStack_6;
  int iVar10;
  
  FUN_1158_0444();
  uVar5 = (undefined2)((ulong)param_2 >> 0x10);
  iVar3 = (int)param_2;
  uVar6 = (undefined2)((ulong)*(undefined4 *)(iVar3 + 0x31c) >> 0x10);
  iVar4 = (int)*(undefined4 *)(iVar3 + 0x31c);
  if (*(char *)(iVar4 + 0x29) != '\0') {
    FUN_10f8_7345(iVar4,uVar6,*(int *)(iVar4 + 0xfe),*(int *)(iVar4 + 0xfe) >> 0xf);
    uVar7 = 0x10f8;
    iVar1 = FUN_10f8_6e30(iVar4,uVar6,*(undefined2 *)(iVar4 + 0xf2),*(undefined2 *)(iVar4 + 0xf4));
    if (0 < iVar1) {
      if (SBORROW2(*(int *)(iVar4 + 0xe8),(uint)(*(int *)(iVar4 + 0xe6) == 0)) != false) {
        FUN_1158_043e(0x10f8);
      }
      uVar7 = 0x1158;
      iVar2 = FUN_1158_0416();
      if (0 < iVar2) {
        iVar10 = 1;
        while( true ) {
          uVar7 = 0x10f8;
          FUN_10f8_70c9(iVar4,uVar6,iVar1,iVar10,iVar10 >> 0xf);
          if (iVar10 == iVar2) break;
          iVar10 = iVar10 + 1;
        }
      }
    }
    func_0x10081f0f(uVar7,iVar3,uVar5);
    uVar7 = (undefined2)((ulong)*(undefined4 *)(iVar3 + 0x2f0) >> 0x10);
    uVar6 = (undefined2)*(undefined4 *)(iVar3 + 0x2f0);
    iVar4 = FUN_1130_1326(uVar6,uVar7);
    iVar1 = iVar4 + -1;
    if (SBORROW2(iVar4,1)) {
      iVar1 = FUN_1158_043e(0x1130);
    }
    if (-1 < iVar1) {
      iStack_6 = 0;
      while( true ) {
        uVar9 = 0;
        uVar8 = FUN_1130_1353(uVar6,uVar7,iStack_6);
        FUN_1130_1275(uVar8,uVar9);
        if (iStack_6 == iVar1) break;
        iStack_6 = iStack_6 + 1;
      }
    }
    TFormSARP_Produits_FormResize(iVar3,uVar5,iVar3,uVar5);
  }
  return;
}




/* Simstrat (FR).EXE - segment Code14 - 37 fonctions
   Decompile par Ghidra 11.2.1 (x86 16 bits, chargeur NE). */

/* ---- FUN_1068_0f53 @ 1068:0f53  (43 octets) ---- */

void __stdcall16far FUN_1068_0f53(undefined4 param_1)

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



/* ---- TFormSPUB_FormCreate @ 1068:0f8e  (1 octets) ---- */

/* WARNING: Removing unreachable block (ram,0x1068111e) */

void TFormSPUB_FormCreate(undefined2 param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined2 uVar7;
  undefined2 uVar8;
  undefined2 unaff_SS;
  bool bVar9;
  bool bVar10;
  longdouble in_ST0;
  longdouble in_ST1;
  undefined4 uVar11;
  long lVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined2 uVar15;
  undefined auStack_304 [256];
  undefined auStack_204 [256];
  undefined auStack_104 [250];
  undefined4 uStack_a;
  int iStack_6;
  int iVar16;
  
  iStack_6 = 0xf99;
  FUN_1158_0444();
  FUN_1158_17cd(0xf7e,0x1158);
  FUN_1158_184c(0x1dfa,0x1160);
  FUN_1158_184c(0xf8a,0x1158);
  puVar13 = auStack_204;
  uVar7 = (undefined2)((ulong)param_2 >> 0x10);
  iVar6 = (int)param_2;
  uVar8 = unaff_SS;
  FUN_1138_1d53();
  FUN_1158_184c(puVar13,uVar8);
  FUN_1158_17e7();
  uVar8 = 0x1138;
  FUN_1138_1d8c((int)*(undefined4 *)(iVar6 + 0x188),
                (int)((ulong)*(undefined4 *)(iVar6 + 0x188) >> 0x10),0x1dfa,0x1160);
  *(undefined2 *)(iVar6 + 0x520) = 100;
  iStack_6 = (int)((ulong)*(undefined4 *)(iVar6 + 0x4c8) >> 0x10);
  uStack_a._2_2_ = (undefined2)*(undefined4 *)(iVar6 + 0x4c8);
  iVar16 = 0;
  while( true ) {
    iVar2 = iVar16 + 1;
    if (SCARRY2(iVar16,1)) {
      iVar2 = FUN_1158_043e(uVar8);
      uVar8 = 0x1158;
    }
    if (DAT_1160_014c < iVar2) {
      uVar15 = 0;
      uVar11 = FUN_1130_1353(uStack_a._2_2_,iStack_6,iVar16);
      uVar8 = 0x1130;
      FUN_1130_13a5(uVar11,uVar15);
    }
    if (iVar16 == 0x14) break;
    iVar16 = iVar16 + 1;
  }
  FUN_1140_1cd0((int)*(undefined4 *)(iVar6 + 0xd8),
                (int)((ulong)*(undefined4 *)(iVar6 + 0xd8) >> 0x10),0);
  FUN_1140_1cd0((int)*(undefined4 *)(iVar6 + 0xdc),
                (int)((ulong)*(undefined4 *)(iVar6 + 0xdc) >> 0x10),0);
  *(undefined2 *)(iVar6 + 0x524) = 1;
  iVar16 = FUN_1148_527d(iVar6,uVar7);
  iVar2 = iVar16 + -1;
  if (SBORROW2(iVar16,1)) {
    iVar2 = FUN_1158_043e(0x1148);
  }
  iStack_6 = iVar2;
  if (-1 < iVar2) {
    iVar16 = 0;
    while( true ) {
      uVar11 = FUN_1148_5246(iVar6,uVar7,iVar16);
      cVar1 = FUN_1158_2255(0x399,0x1138,uVar11);
      if (cVar1 != '\0') {
        uVar11 = FUN_1148_5246(iVar6,uVar7,iVar16);
        uVar11 = FUN_1158_2273(0x399,0x1138,uVar11);
        uVar8 = (undefined2)((ulong)uVar11 >> 0x10);
        iVar2 = (int)uVar11;
        uStack_a = uVar11;
        if ((*(char *)(iVar2 + 0x29) != '\0') &&
           (*(int *)(iVar2 + 0xc) != 0 || *(int *)(iVar2 + 0xe) != 0)) {
          iVar4 = DAT_1160_1e06 >> 0xf;
          iVar3 = *(int *)(iVar2 + 0xc);
          uVar5 = *(uint *)(iVar2 + 0xe);
          bVar10 = false;
          if ((int)uVar5 < 0) {
            bVar9 = iVar3 != 0;
            iVar3 = -iVar3;
            iVar2 = ~uVar5 + 1;
            bVar10 = SBORROW2(~uVar5,-1) != SBORROW2(iVar2,(uint)bVar9);
            uVar5 = iVar2 - (uint)bVar9;
          }
          lVar12 = CONCAT22(uVar5,iVar3);
          iVar2 = DAT_1160_1e06;
          if (bVar10) {
            lVar12 = FUN_1158_043e(0x1158);
          }
          FUN_1138_1c77(uStack_a,lVar12 <= CONCAT22(iVar4,iVar2));
        }
      }
      if (iVar16 == iStack_6) break;
      iVar16 = iVar16 + 1;
    }
  }
  puVar13 = auStack_104;
  uVar11 = *(undefined4 *)((int)DAT_1160_18f6 + 0x24c);
  uVar8 = unaff_SS;
  FUN_1138_1d53((int)uVar11,(int)((ulong)uVar11 >> 0x10));
  FUN_1138_1d8c((int)*(undefined4 *)(iVar6 + 0x38c),
                (int)((ulong)*(undefined4 *)(iVar6 + 0x38c) >> 0x10),puVar13,uVar8);
  puVar13 = auStack_104;
  uVar11 = *(undefined4 *)((int)DAT_1160_18f6 + 0x250);
  uVar8 = unaff_SS;
  FUN_1138_1d53((int)uVar11,(int)((ulong)uVar11 >> 0x10));
  FUN_1138_1d8c((int)*(undefined4 *)(iVar6 + 0x390),
                (int)((ulong)*(undefined4 *)(iVar6 + 0x390) >> 0x10),puVar13,uVar8);
  puVar13 = auStack_104;
  uVar11 = *(undefined4 *)((int)DAT_1160_18f6 + 0x254);
  uVar8 = unaff_SS;
  FUN_1138_1d53((int)uVar11,(int)((ulong)uVar11 >> 0x10));
  FUN_1138_1d8c((int)*(undefined4 *)(iVar6 + 0x394),
                (int)((ulong)*(undefined4 *)(iVar6 + 0x394) >> 0x10),puVar13,uVar8);
  puVar13 = auStack_104;
  uVar11 = *(undefined4 *)((int)DAT_1160_18f6 + 0x248);
  uVar15 = unaff_SS;
  FUN_1138_1d53((int)uVar11,(int)((ulong)uVar11 >> 0x10));
  FUN_1158_184c(0xf8a,0x1138);
  puVar14 = auStack_204;
  uVar8 = unaff_SS;
  FUN_1150_15fe(puVar14);
  FUN_1150_1cbf((double)in_ST0);
  FUN_1158_184c(puVar14,uVar8);
  FUN_1158_184c(0xf8a,0x1158);
  puVar14 = auStack_304;
  FUN_1150_15fe(puVar14);
  FUN_1150_1ce4((double)in_ST1);
  FUN_1158_184c(puVar14,unaff_SS);
  FUN_1158_184c(0xf8a,0x1158);
  FUN_1138_1d8c((int)*(undefined4 *)(iVar6 + 0x398),
                (int)((ulong)*(undefined4 *)(iVar6 + 0x398) >> 0x10),puVar13,uVar15);
  FUN_10e0_3017((int)*(undefined4 *)(iVar6 + 0x3ec),
                (int)((ulong)*(undefined4 *)(iVar6 + 0x3ec) >> 0x10),0x1e32,0x1160);
  FUN_10e0_3017((int)*(undefined4 *)(iVar6 + 0x3f4),
                (int)((ulong)*(undefined4 *)(iVar6 + 0x3f4) >> 0x10),0x1e40,0x1160);
  FUN_10e0_3017((int)*(undefined4 *)(iVar6 + 0x3fc),
                (int)((ulong)*(undefined4 *)(iVar6 + 0x3fc) >> 0x10),0x1e40,0x1160);
  return;
}



/* ---- TFormSPUB_FormShow @ 1068:1270  (27 octets) ---- */

void __stdcall16far TFormSPUB_FormShow(void)

{
  FUN_1158_0444();
  FUN_1140_63a9((int)DAT_1160_2c2e,(int)((ulong)DAT_1160_2c2e >> 0x10),0xfffe);
  return;
}



/* ---- TFormSPUB_FormClose @ 1068:128b  (31 octets) ---- */

void __stdcall16far TFormSPUB_FormClose(undefined4 param_1,undefined *param_2)

{
  FUN_1158_0444();
  FUN_1068_1848((int)param_1,(int)((ulong)param_1 >> 0x10));
  *param_2 = 2;
  return;
}



/* ---- TFormSPUB_FormResize @ 1068:12aa  (41 octets) ---- */

void __stdcall16far TFormSPUB_FormResize(undefined4 param_1)

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
  uVar1 = *(undefined4 *)((int)param_1 + 0x3c0);
  FUN_1130_1275((int)uVar1,(int)((ulong)uVar1 >> 0x10),iVar2);
  return;
}



/* ---- FUN_1068_12f9 @ 1068:12f9  (1106 octets) ---- */

void __stdcall16far FUN_1068_12f9(undefined4 param_1,undefined4 param_2)

{
  undefined2 *puVar1;
  char cVar2;
  undefined2 uVar3;
  undefined4 *puVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  undefined2 unaff_SS;
  unkbyte10 in_ST0;
  unkbyte10 in_ST1;
  undefined4 uVar7;
  byte *pbVar8;
  undefined *puVar9;
  undefined2 uVar10;
  undefined local_30a [248];
  long local_212;
  undefined4 *local_20e;
  int local_20a;
  undefined2 local_208;
  byte local_206 [256];
  undefined local_106 [256];
  undefined2 local_6;
  
  local_6 = 0x1304;
  FUN_1158_0444();
  local_208 = (undefined2)((ulong)param_2 >> 0x10);
  local_20a = (int)param_2;
  puVar9 = local_30a;
  uVar6 = unaff_SS;
  FUN_10d0_1a9f(local_20a,local_208);
  uVar7 = FUN_10d0_1a5f(local_20a,local_208);
  uVar7 = *(undefined4 *)((int)uVar7 + 0x1a);
  uVar7 = FUN_10d8_3b9b((int)uVar7,(int)((ulong)uVar7 >> 0x10),puVar9,uVar6);
  uVar6 = (undefined2)((ulong)uVar7 >> 0x10);
  local_6 = (undefined2)uVar7;
  cVar2 = FUN_1158_2255(0xa58,(char *)s_iTime_1160_10dc + 4,uVar7);
  uVar3 = (undefined2)param_1;
  uVar5 = (undefined2)((ulong)param_1 >> 0x10);
  if (cVar2 == '\0') {
    cVar2 = FUN_1158_2255(0x7c8,(char *)s_iTime_1160_10dc + 4,local_6,uVar6);
    if (cVar2 != '\0') {
      local_20e = (undefined4 *)FUN_1158_2273(0x7c8,(char *)s_iTime_1160_10dc + 4,local_6,uVar6);
      uVar6 = *(undefined2 *)(local_20a + 0x36);
      uVar10 = *(undefined2 *)(local_20a + 0x34);
      uVar7 = FUN_1140_33d5(uVar3,uVar5);
      FUN_1128_2099(uVar7,uVar10,uVar6);
      FUN_1158_17e7(0xff,local_206,unaff_SS,0x12f0,0x1128);
      uVar6 = (undefined2)((ulong)local_20e >> 0x10);
      puVar4 = (undefined4 *)local_20e;
      puVar1 = (undefined2 *)((int)*local_20e + 0x44);
      local_212 = (*(code *)*puVar1)();
      FUN_1150_10d4((longdouble)local_212,puVar4,uVar6);
      FUN_1158_17e7();
      puVar9 = local_106;
      uVar6 = unaff_SS;
      uVar7 = FUN_1140_33d5(uVar3,uVar5);
      uVar6 = FUN_1128_2003(uVar7,puVar9,uVar6);
      uVar7 = CONCAT22(uVar6,*(int *)(local_20a + 0x22) + -5);
      if (SBORROW2(*(int *)(local_20a + 0x22),5)) {
        uVar7 = FUN_1158_043e(0x1128);
      }
      if ((int)uVar7 <= (int)((ulong)uVar7 >> 0x10)) {
        FUN_1158_17e7();
        pbVar8 = local_206;
        puVar1 = (undefined2 *)((int)*local_20e + 0x44);
        uVar6 = unaff_SS;
        local_212 = (*(code *)*puVar1)();
        FUN_1150_10d4((longdouble)local_212,pbVar8,uVar6);
        FUN_1158_17e7();
        puVar9 = local_106;
        uVar6 = unaff_SS;
        uVar7 = FUN_1140_33d5(uVar3,uVar5);
        uVar6 = FUN_1128_2003(uVar7,puVar9,uVar6);
        uVar7 = CONCAT22(uVar6,*(int *)(local_20a + 0x22) + -5);
        if (SBORROW2(*(int *)(local_20a + 0x22),5)) {
          uVar7 = FUN_1158_043e(0x1128);
        }
        if ((int)uVar7 <= (int)((ulong)uVar7 >> 0x10)) {
          FUN_1158_17e7();
          while( true ) {
            pbVar8 = local_206;
            uVar6 = unaff_SS;
            uVar7 = FUN_1140_33d5(uVar3,uVar5);
            uVar6 = FUN_1128_2003(uVar7,pbVar8,uVar6);
            uVar7 = CONCAT22(uVar6,*(int *)(local_20a + 0x22) + -5);
            if (SBORROW2(*(int *)(local_20a + 0x22),5)) {
              uVar7 = FUN_1158_043e(0x1128);
            }
            if (0xb < local_206[0] || (int)uVar7 <= (int)((ulong)uVar7 >> 0x10)) break;
            FUN_1158_1916();
          }
          if (7 < local_206[0]) {
            FUN_1158_1975(1,3,local_206,unaff_SS);
          }
        }
      }
      FUN_10e0_60f9((undefined4 *)local_20e,(int)((ulong)local_20e >> 0x10),local_206,unaff_SS);
    }
  }
  else {
    local_20e = (undefined4 *)FUN_1158_2273(0xa58,(char *)s_iTime_1160_10dc + 4,local_6,uVar6);
    uVar6 = *(undefined2 *)(local_20a + 0x36);
    uVar10 = *(undefined2 *)(local_20a + 0x34);
    uVar7 = FUN_1140_33d5(uVar3,uVar5);
    FUN_1128_2099(uVar7,uVar10,uVar6);
    FUN_1158_17e7(0xff,local_206,unaff_SS,0x12d3,0x1128);
    uVar6 = (undefined2)((ulong)local_20e >> 0x10);
    puVar4 = (undefined4 *)local_20e;
    puVar1 = (undefined2 *)((int)*local_20e + 0x40);
    (*(code *)*puVar1)();
    FUN_1150_10d4(in_ST0,puVar4,uVar6);
    FUN_1158_17e7();
    puVar9 = local_106;
    uVar6 = unaff_SS;
    uVar7 = FUN_1140_33d5(uVar3,uVar5);
    uVar6 = FUN_1128_2003(uVar7,puVar9,uVar6);
    uVar7 = CONCAT22(uVar6,*(int *)(local_20a + 0x22) + -5);
    if (SBORROW2(*(int *)(local_20a + 0x22),5)) {
      uVar7 = FUN_1158_043e(0x1128);
    }
    if ((int)uVar7 <= (int)((ulong)uVar7 >> 0x10)) {
      FUN_1158_17e7();
      pbVar8 = local_206;
      puVar1 = (undefined2 *)((int)*local_20e + 0x40);
      uVar6 = unaff_SS;
      (*(code *)*puVar1)();
      FUN_1150_10d4(in_ST1,pbVar8,uVar6);
      FUN_1158_17e7();
      puVar9 = local_106;
      uVar6 = unaff_SS;
      uVar7 = FUN_1140_33d5(uVar3,uVar5);
      uVar6 = FUN_1128_2003(uVar7,puVar9,uVar6);
      uVar7 = CONCAT22(uVar6,*(int *)(local_20a + 0x22) + -5);
      if (SBORROW2(*(int *)(local_20a + 0x22),5)) {
        uVar7 = FUN_1158_043e(0x1128);
      }
      if ((int)uVar7 <= (int)((ulong)uVar7 >> 0x10)) {
        FUN_1158_17e7();
        while( true ) {
          pbVar8 = local_206;
          uVar6 = unaff_SS;
          uVar7 = FUN_1140_33d5(uVar3,uVar5);
          uVar6 = FUN_1128_2003(uVar7,pbVar8,uVar6);
          uVar7 = CONCAT22(uVar6,*(int *)(local_20a + 0x22) + -5);
          if (SBORROW2(*(int *)(local_20a + 0x22),5)) {
            uVar7 = FUN_1158_043e(0x1128);
          }
          if (0xb < local_206[0] || (int)uVar7 <= (int)((ulong)uVar7 >> 0x10)) break;
          FUN_1158_1916();
        }
        if (7 < local_206[0]) {
          FUN_1158_1975(1,3,local_206,unaff_SS);
        }
      }
    }
    FUN_10e0_60f9((undefined4 *)local_20e,(int)((ulong)local_20e >> 0x10),local_206,unaff_SS);
  }
  return;
}



/* ---- FUN_1068_174b @ 1068:174b  (136 octets) ---- */

void __stdcall16far FUN_1068_174b(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined4 uVar6;
  undefined2 uVar7;
  
  uVar7 = 0x1756;
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
        FUN_1068_12f9(uVar4,uVar5,uVar6);
      }
      if (iVar2 == iVar3) break;
      iVar2 = iVar2 + 1;
    }
  }
  return;
}



/* ---- FUN_1068_17d3 @ 1068:17d3  (117 octets) ---- */

void __stdcall16far FUN_1068_17d3(undefined4 param_1,undefined2 param_2)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  undefined4 uVar7;
  int iVar8;
  
  uVar6 = 0x1158;
  FUN_1158_0444();
  uVar5 = (undefined2)((ulong)param_1 >> 0x10);
  iVar4 = (int)param_1;
  *(undefined2 *)(iVar4 + 0x524) = param_2;
  uVar1 = *(undefined4 *)(iVar4 + 0x4c8);
  iVar8 = 0;
  while( true ) {
    uVar2 = iVar8 + 1;
    if (SCARRY2(iVar8,1)) {
      uVar2 = FUN_1158_043e(uVar6);
    }
    uVar3 = uVar2 & 0xff00;
    if (uVar2 == *(uint *)(iVar4 + 0x524)) {
      uVar3 = uVar3 + 1;
    }
    uVar7 = FUN_1130_1353((int)uVar1,(int)((ulong)uVar1 >> 0x10),iVar8);
    uVar6 = 0x1130;
    FUN_1130_1275(uVar7,uVar3);
    if (iVar8 == 0x13) break;
    iVar8 = iVar8 + 1;
  }
  FUN_1068_194e(iVar4,uVar5);
  return;
}



/* ---- FUN_1068_1848 @ 1068:1848  (59 octets) ---- */

void __stdcall16far FUN_1068_1848(undefined4 param_1)

{
  int iVar1;
  undefined2 uVar2;
  
  FUN_1158_0444();
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  FUN_10d8_31d2((int)*(undefined4 *)(iVar1 + 0x3ec),
                (int)((ulong)*(undefined4 *)(iVar1 + 0x3ec) >> 0x10));
  FUN_10d8_31d2((int)*(undefined4 *)(iVar1 + 0x3f4),
                (int)((ulong)*(undefined4 *)(iVar1 + 0x3f4) >> 0x10));
  FUN_10d8_31d2((int)*(undefined4 *)(iVar1 + 0x3fc),
                (int)((ulong)*(undefined4 *)(iVar1 + 0x3fc) >> 0x10));
  return;
}



/* ---- FUN_1068_1883 @ 1068:1883  (183 octets) ---- */

void __stdcall16far FUN_1068_1883(undefined4 param_1)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  
  FUN_1158_0444();
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  uVar4 = (undefined2)((ulong)*(undefined4 *)(iVar1 + 0x3ec) >> 0x10);
  uVar2 = (undefined2)*(undefined4 *)(iVar1 + 0x3ec);
  FUN_10d8_31d2(uVar2,uVar4);
  FUN_10e0_2ffb(uVar2,uVar4,1);
  FUN_10e0_2ed2(uVar2,uVar4,0);
  FUN_10d8_31bf(uVar2,uVar4);
  uVar4 = (undefined2)((ulong)*(undefined4 *)(iVar1 + 0x3f4) >> 0x10);
  uVar2 = (undefined2)*(undefined4 *)(iVar1 + 0x3f4);
  FUN_10d8_31d2(uVar2,uVar4);
  FUN_10e0_2ffb(uVar2,uVar4,1);
  FUN_10e0_2ed2(uVar2,uVar4,0);
  FUN_10d8_31bf(uVar2,uVar4);
  uVar4 = (undefined2)((ulong)*(undefined4 *)(iVar1 + 0x3fc) >> 0x10);
  uVar2 = (undefined2)*(undefined4 *)(iVar1 + 0x3fc);
  FUN_10d8_31d2(uVar2,uVar4);
  FUN_10e0_2ffb(uVar2,uVar4,1);
  FUN_10e0_2ed2(uVar2,uVar4,0);
  FUN_10d8_31bf(uVar2,uVar4);
  return;
}



/* ---- FUN_1068_194e @ 1068:194e  (464 octets) ---- */

void __stdcall16far FUN_1068_194e(undefined *param_1)

{
  undefined uVar1;
  char cVar2;
  undefined *puVar3;
  undefined2 uVar4;
  undefined2 unaff_SS;
  undefined *puStack_20c;
  int local_118;
  int local_116;
  undefined local_114;
  int local_110;
  int local_10e;
  undefined local_10c;
  undefined4 local_108;
  undefined local_104 [254];
  undefined2 uStack_6;
  
  uStack_6 = 0x1959;
  FUN_1158_0444();
  uVar4 = (undefined2)((ulong)param_1 >> 0x10);
  puVar3 = (undefined *)param_1;
  puStack_20c = *(undefined **)(puVar3 + 0x524);
  FUN_1150_08a9();
  puStack_20c = (undefined *)*(undefined **)(puVar3 + 0x194);
  FUN_1138_1d8c();
  puStack_20c = local_104;
  FUN_1158_17e7(0xff);
  puStack_20c = local_104;
  FUN_1158_1878();
  uVar1 = FUN_1158_0416();
  puStack_20c = (undefined *)0x1;
  FUN_1158_1975();
  puStack_20c = *(undefined **)(puVar3 + 0x524);
  FUN_1150_08a9();
  puStack_20c = local_104;
  FUN_1158_1916(uVar1,0xff);
  puStack_20c = puVar3;
  FUN_1138_1d8c();
  puStack_20c = (undefined *)DAT_1160_1858;
  local_108 = *(undefined4 *)(puVar3 + 0x3ec);
  local_110 = *(int *)(puVar3 + 0x524);
  local_10e = local_110 >> 0xf;
  local_10c = 0;
  DAT_1160_1858 = &puStack_20c;
  cVar2 = FUN_10e0_2895((int)local_108,(int)((ulong)local_108 >> 0x10),0,&local_110,unaff_SS);
  if (cVar2 == '\0') {
    FUN_1068_0f53(puVar3,uVar4);
  }
  local_108 = *(undefined4 *)(puVar3 + 0x3f4);
  local_118 = *(int *)(puVar3 + 0x524);
  local_116 = local_118 >> 0xf;
  local_114 = 0;
  local_110 = 1;
  local_10e = 0;
  local_10c = 0;
  cVar2 = FUN_10e0_2895((int)local_108,(int)((ulong)local_108 >> 0x10),1,&local_118,unaff_SS);
  if (cVar2 == '\0') {
    FUN_1068_0f53(puVar3,uVar4);
  }
  local_108 = *(undefined4 *)(puVar3 + 0x3fc);
  local_118 = *(int *)(puVar3 + 0x524);
  local_116 = local_118 >> 0xf;
  local_114 = 0;
  local_110 = 2;
  local_10e = 0;
  local_10c = 0;
  cVar2 = FUN_10e0_2895((int)local_108,(int)((ulong)local_108 >> 0x10),1,&local_118,unaff_SS);
  if (cVar2 == '\0') {
    FUN_1068_0f53(puVar3,uVar4);
  }
  DAT_1160_1858 = (undefined **)puStack_20c;
  puStack_20c = (undefined *)0x1b34;
  FUN_1068_174b();
  return;
}



/* ---- FUN_1068_1b3e @ 1068:1b3e  (323 octets) ---- */

void __stdcall16far FUN_1068_1b3e(char param_1,int param_2)

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
  
  _local_6 = CONCAT22(unaff_CS,0x1b49);
  FUN_1158_0444();
  uStack_e = (undefined2)((ulong)DAT_1160_2c2a >> 0x10);
  uStack_10 = (undefined2)DAT_1160_2c2a;
  uStack_12 = 0x1158;
  uStack_14 = 6999;
  uVar1 = FUN_1140_7303();
  local_7 = '\0';
  if (0 < param_2) {
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
  uStack_14 = 0x1068;
  uStack_16 = 0x22;
  uStack_18 = 0x1140;
  uStack_1a = 0x1ba0;
  local_c = FUN_1140_2553();
  uVar3 = (undefined2)((ulong)local_c >> 0x10);
  local_6 = (int)local_c;
  uStack_18 = 0x1140;
  uStack_1a = 0x1b38;
  uStack_1e = DAT_1160_1858;
  DAT_1160_1858 = &uStack_1e;
  *(int *)(local_6 + 0x522) = param_2;
  puStack_1c = &stack0xfffe;
  FUN_1068_1883(local_c);
  FUN_1068_17d3(local_c,param_2);
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
    uVar4 = 0x1068;
    FUN_1068_297b(local_6,uVar3);
    DAT_1160_1858 = (undefined2 *)uVar2;
  }
  puStack_1c = (undefined *)0x1c7d;
  uStack_1e = uVar3;
  uStack_1a = uVar4;
  FUN_1140_5f1d(local_6);
  return;
}



/* ---- FUN_1068_1d25 @ 1068:1d25  (29 octets) ---- */

void __stdcall16far FUN_1068_1d25(undefined4 param_1)

{
  FUN_1158_0444();
  FUN_1068_1b3e(0,*(undefined2 *)((int)param_1 + 0x524));
  return;
}



/* ---- TFormSPUB_Imprimer1Click @ 1068:1d42  (136 octets) ---- */

void __stdcall16far TFormSPUB_Imprimer1Click(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 unaff_CS;
  int iVar4;
  undefined4 uVar5;
  undefined2 uVar6;
  
  uVar5 = CONCAT22(unaff_CS,0x1d4d);
  FUN_1158_0444();
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  iVar2 = (int)param_1;
  cVar1 = FUN_1108_2f17((int)*(undefined4 *)(iVar2 + 0x404),
                        (int)((ulong)*(undefined4 *)(iVar2 + 0x404) >> 0x10));
  if (cVar1 != '\0') {
    DAT_1160_2004 = FUN_1140_2553(0x25b4,(char *)s_windows_1160_100f + 1,1,iVar2,uVar3,uVar5);
    uVar5 = DAT_1160_2004;
    FUN_1010_2f8d(DAT_1160_2004,1);
    uVar6 = (undefined2)((ulong)uVar5 >> 0x10);
    iVar4 = (int)uVar5;
    *(undefined2 *)(iVar4 + 0x2b9) = 0x1d25;
    *(undefined2 *)(iVar4 + 699) = 0x1068;
    *(int *)(iVar4 + 0x2bd) = iVar2;
    *(undefined2 *)(iVar4 + 0x2bf) = uVar3;
    FUN_1140_5d45(uVar5);
    FUN_1140_5f1d(uVar5);
  }
  return;
}



/* ---- TFormSPUB_Quitter1Click @ 1068:1dca  (24 octets) ---- */

void __stdcall16far TFormSPUB_Quitter1Click(undefined4 param_1)

{
  FUN_1158_0444();
  FUN_1140_5556((int)param_1,(int)((ulong)param_1 >> 0x10));
  return;
}



/* ---- TFormSPUB_PleinEcran1Click @ 1068:1de2  (48 octets) ---- */

void __stdcall16far TFormSPUB_PleinEcran1Click(undefined4 param_1)

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



/* ---- TFormSPUB_N1001Click @ 1068:1e1e  (1 octets) ---- */

void TFormSPUB_N1001Click
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
  iVar11 = *(int *)(iVar6 + 0x520);
  cVar1 = FUN_1158_2255(0x94,0x1130,param_3,param_4);
  if (cVar1 != '\0') {
    uVar10 = FUN_1158_2273(0x94,0x1130,param_3,param_4);
    uVar2 = FUN_1130_162b((int)*(undefined4 *)(iVar6 + 0x3c8),
                          (int)((ulong)*(undefined4 *)(iVar6 + 0x3c8) >> 0x10),uVar10);
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
    uVar9 = (undefined2)((ulong)*(undefined4 *)(iVar6 + 0x3c8) >> 0x10);
    uVar7 = (undefined2)*(undefined4 *)(iVar6 + 0x3c8);
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
  if (iVar11 != *(int *)(iVar6 + 0x520)) {
    FUN_1138_5df4(iVar6,uVar8,*(undefined2 *)(iVar6 + 0x520),iVar11);
    *(int *)(iVar6 + 0x520) = iVar11;
  }
  return;
}



/* ---- TFormSPUB_Periode1Click @ 1068:1f3b  (61 octets) ---- */

void __stdcall16far TFormSPUB_Periode1Click(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined2 uVar3;
  
  FUN_1158_0444();
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  iVar2 = (int)param_1;
  iVar1 = FUN_1000_3e32(*(undefined2 *)(iVar2 + 0x524),DAT_1160_014c);
  if (iVar1 != *(int *)(iVar2 + 0x524)) {
    FUN_1068_17d3(iVar2,uVar3,iVar1);
  }
  return;
}



/* ---- TFormSPUB_N11Click @ 1068:1f78  (264 octets) ---- */

void __stdcall16far TFormSPUB_N11Click(undefined4 param_1,undefined2 param_2,undefined2 param_3)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  undefined2 uVar8;
  undefined4 uVar9;
  
  FUN_1158_0444();
  cVar1 = FUN_1158_2255(0x94,0x1130,param_2,param_3);
  if (cVar1 != '\0') {
    FUN_1158_2273(0x94,0x1130,param_2,param_3);
    uVar6 = (undefined2)((ulong)param_1 >> 0x10);
    iVar5 = (int)param_1;
    iVar4 = *(int *)(iVar5 + 0x524);
    uVar9 = FUN_1158_2273(0x94,0x1130,param_2,param_3);
    uVar7 = 0x1130;
    uVar2 = FUN_1130_162b((int)*(undefined4 *)(iVar5 + 0x4c8),
                          (int)((ulong)*(undefined4 *)(iVar5 + 0x4c8) >> 0x10),uVar9);
    iVar3 = *(int *)(iVar5 + 0x522) + 1;
    if (SCARRY2(*(int *)(iVar5 + 0x522),1)) {
      uVar7 = 0x1158;
      iVar3 = FUN_1158_043e(0x1130);
    }
    uVar9 = CONCAT22(iVar3,uVar2 + 1);
    uVar8 = uVar7;
    if (SCARRY2(uVar2,1)) {
      uVar8 = 0x1158;
      uVar9 = FUN_1158_043e(uVar7);
    }
    if (uVar2 < 0x14 && (int)uVar9 < (int)((ulong)uVar9 >> 0x10)) {
      iVar4 = uVar2 + 1;
      if (SCARRY2(uVar2,1)) {
        iVar4 = FUN_1158_043e(uVar8);
      }
    }
    else if (uVar2 == 0x14) {
      iVar4 = FUN_1000_3e32(*(undefined2 *)(iVar5 + 0x524),*(undefined2 *)(iVar5 + 0x522));
    }
    else {
      MESSAGEBEEP(uVar8,0x30);
    }
    if (iVar4 != *(int *)(iVar5 + 0x524)) {
      FUN_1068_17d3(iVar5,uVar6,iVar4);
    }
  }
  return;
}



/* ---- TFormSPUB_FormKeyDown @ 1068:2098  (1 octets) ---- */

void TFormSPUB_FormKeyDown(undefined2 param_1,undefined4 param_2,byte param_3,int *param_4)

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
        iVar4 = FUN_1158_043e(0x1068);
      }
      FUN_1140_1cd0(iVar6,uVar8,iVar4);
      break;
    case 0x28:
      iVar4 = *(int *)(iVar6 + 10) + *(int *)(iVar6 + 8);
      if (SCARRY2(*(int *)(iVar6 + 10),*(int *)(iVar6 + 8))) {
        iVar4 = FUN_1158_043e(0x1068);
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



/* ---- TFormSPUB_DBEdit1Exit @ 1068:2264  (77 octets) ---- */

void __stdcall16far TFormSPUB_DBEdit1Exit(undefined4 param_1,undefined2 param_2,undefined2 param_3)

{
  undefined4 uVar1;
  char cVar2;
  char cVar3;
  
  FUN_1158_0444();
  cVar2 = FUN_1158_2255(0xba2,0x10d0,param_2,param_3);
  cVar3 = FUN_1158_2255(0x22,0x10d0,param_2,param_3);
  if (cVar3 != '\0' || cVar2 != '\0') {
    uVar1 = *(undefined4 *)((int)param_1 + 0x414);
    FUN_1138_1c77((int)uVar1,(int)((ulong)uVar1 >> 0x10),0);
  }
  return;
}



/* ---- TFormSPUB_DBEdit1KeyUp @ 1068:22b1  (86 octets) ---- */

void __stdcall16far
TFormSPUB_DBEdit1KeyUp
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
      uVar1 = *(undefined4 *)((int)param_1 + 0x414);
      FUN_1138_1c77((int)uVar1,(int)((ulong)uVar1 >> 0x10),0);
    }
  }
  return;
}



/* ---- TFormSPUB_DBEdit1KeyDown @ 1068:2314  (1 octets) ---- */

void TFormSPUB_DBEdit1KeyDown
               (undefined2 param_1,undefined4 param_2,undefined2 param_3,int *param_4,
               undefined2 param_5,undefined2 param_6)

{
  int *piVar1;
  undefined2 *puVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined2 uVar7;
  undefined2 uVar8;
  undefined2 uVar9;
  undefined2 unaff_SS;
  unkbyte10 in_ST0;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined *puVar12;
  undefined auStack_20e [4];
  undefined auStack_20a [248];
  undefined4 *puStack_112;
  undefined4 uStack_10e;
  char acStack_10a [256];
  undefined4 uStack_a;
  int iStack_6;
  
  iStack_6 = 0x231f;
  FUN_1158_0444();
  if ((*param_4 == 0x70) && (cVar3 = FUN_1158_2255(0x5c1,0x1138,param_5,param_6), cVar3 != '\0')) {
    *param_4 = 0;
    FUN_1158_2273();
    FUN_1140_77b2();
  }
  if (*param_4 == 0x11) {
    uVar7 = (undefined2)((ulong)param_2 >> 0x10);
    iVar6 = (int)param_2;
    if (*(char *)((int)*(undefined4 *)(iVar6 + 0x414) + 0x29) == '\0') {
      acStack_10a[0] = '\0';
      cVar3 = FUN_1158_2255(0x22,0x10d0,param_5,param_6);
      if (cVar3 != '\0') {
        uStack_10e = FUN_1158_2273(0x22,0x10d0,param_5,param_6);
        puVar12 = auStack_20e;
        uVar8 = unaff_SS;
        FUN_10d0_1a9f(uStack_10e);
        uVar10 = FUN_10d0_1a5f((int)uStack_10e,(int)((ulong)uStack_10e >> 0x10));
        uVar10 = *(undefined4 *)((int)uVar10 + 0x1a);
        uStack_a = FUN_10d8_3b9b((int)uVar10,(int)((ulong)uVar10 >> 0x10),puVar12,uVar8);
        cVar3 = FUN_1158_2255(0xa58,(char *)s_iTime_1160_10dc + 4,uStack_a);
        if (cVar3 == '\0') {
          FUN_1100_1524((int)uStack_10e,(int)((ulong)uStack_10e >> 0x10));
          FUN_1158_17e7();
        }
        else {
          puStack_112 = (undefined4 *)FUN_1158_2273(0xa58,(char *)s_iTime_1160_10dc + 4,uStack_a);
          uVar9 = 0x1158;
          uVar8 = 0x2307;
          puVar2 = (undefined2 *)((int)*puStack_112 + 0x40);
          (*(code *)*puVar2)();
          FUN_1150_10d4(in_ST0,uVar8,uVar9);
          FUN_1158_17e7();
        }
      }
      cVar3 = FUN_1158_2255(0xba2,0x10d0,param_5,param_6);
      if (cVar3 != '\0') {
        uStack_10e = FUN_1158_2273(0xba2,0x10d0,param_5,param_6);
        FUN_1138_1d53(uStack_10e);
        FUN_1158_17e7();
      }
      if (acStack_10a[0] != '\0') {
        uStack_10e = FUN_1158_2273(0x5c1,0x1138,param_5,param_6);
        iVar5 = *(int *)((int)uStack_10e + 0x22);
        iVar4 = iVar5 + -4;
        uVar10 = uStack_10e;
        if (SBORROW2(iVar5,4)) {
          iVar4 = FUN_1158_043e(0x1158);
          uVar10 = uStack_10e;
        }
        uStack_10e._2_2_ = (undefined2)((ulong)uVar10 >> 0x10);
        uStack_10e._0_2_ = (int)uVar10;
        piVar1 = (int *)((int)uStack_10e + 0x24);
        iVar5 = *piVar1 + -4;
        iStack_6 = iVar4;
        uStack_10e = uVar10;
        if (SBORROW2(*piVar1,4)) {
          iVar5 = FUN_1158_043e(0x1158);
        }
        uVar10 = FUN_1138_19d4(uStack_10e,iStack_6,iVar5);
        iStack_6 = (int)uVar10;
        uVar11 = FUN_1138_1a06(iVar6,uVar7,uVar10);
        iStack_6 = (int)uVar11;
        puVar12 = auStack_20a;
        uVar8 = unaff_SS;
        FUN_1158_17cd(0x2312,0x1138);
        FUN_1158_184c(acStack_10a,unaff_SS);
        FUN_1158_184c(0x2312,0x1158);
        FUN_1138_1d8c((int)*(undefined4 *)(iVar6 + 0x414),
                      (int)((ulong)*(undefined4 *)(iVar6 + 0x414) >> 0x10),puVar12,uVar8);
        uVar10 = *(undefined4 *)((int)*(undefined4 *)(iVar6 + 0x414) + 0x34);
        FUN_1128_11f5((int)uVar10,(int)((ulong)uVar10 >> 0x10),0x18);
        uVar10 = FUN_1140_33d5(iVar6,uVar7);
        uVar8 = (undefined2)((ulong)*(undefined4 *)(iVar6 + 0x414) >> 0x10);
        iVar5 = (int)*(undefined4 *)(iVar6 + 0x414);
        uStack_10e = uVar10;
        FUN_1128_2099(uVar10,*(undefined2 *)(iVar5 + 0x34),*(undefined2 *)(iVar5 + 0x36));
        puVar12 = auStack_20e;
        uVar8 = unaff_SS;
        FUN_1138_1d53((int)*(undefined4 *)(iVar6 + 0x414),
                      (int)((ulong)*(undefined4 *)(iVar6 + 0x414) >> 0x10));
        uVar8 = FUN_1128_2003(uStack_10e,puVar12,uVar8);
        FUN_1138_17bf((int)*(undefined4 *)(iVar6 + 0x414),
                      (int)((ulong)*(undefined4 *)(iVar6 + 0x414) >> 0x10),uVar8);
        puVar12 = auStack_20e;
        FUN_1138_1d53((int)*(undefined4 *)(iVar6 + 0x414),
                      (int)((ulong)*(undefined4 *)(iVar6 + 0x414) >> 0x10));
        iVar5 = FUN_1128_204e(uStack_10e,puVar12,unaff_SS);
        iVar4 = (int)((long)iVar5 * 3);
        if ((long)iVar4 != (long)iVar5 * 3) {
          iVar4 = FUN_1158_043e(0x1128);
        }
        FUN_1138_17e1((int)*(undefined4 *)(iVar6 + 0x414),
                      (int)((ulong)*(undefined4 *)(iVar6 + 0x414) >> 0x10),iVar4 / 2);
        uStack_10e._2_2_ = (undefined2)((ulong)*(undefined4 *)(iVar6 + 0x414) >> 0x10);
        uStack_10e._0_2_ = (int)*(undefined4 *)(iVar6 + 0x414);
        FUN_1138_177b((int)uStack_10e,uStack_10e._2_2_,iStack_6);
        FUN_1138_179d((int)uStack_10e,uStack_10e._2_2_,(int)((ulong)uVar11 >> 0x10));
        while( true ) {
          uVar9 = 0x1138;
          uVar8 = FUN_1138_18a9(iVar6,uVar7);
          uVar10 = CONCAT22(uVar8,*(int *)((int)uStack_10e + 0x1e) +
                                  *(int *)((int)uStack_10e + 0x22));
          if (SCARRY2(*(int *)((int)uStack_10e + 0x1e),*(int *)((int)uStack_10e + 0x22))) {
            uVar9 = 0x1158;
            uVar10 = FUN_1158_043e(0x1138);
          }
          if ((int)uVar10 <= (int)((ulong)uVar10 >> 0x10)) break;
          iVar5 = *(int *)((int)uStack_10e + 0x1e) + -8;
          if (SBORROW2(*(int *)((int)uStack_10e + 0x1e),8)) {
            iVar5 = FUN_1158_043e(uVar9);
          }
          FUN_1138_177b((int)uStack_10e,uStack_10e._2_2_,iVar5);
        }
        while( true ) {
          uVar9 = 0x1138;
          uVar8 = FUN_1138_18f4(iVar6,uVar7);
          uVar10 = CONCAT22(uVar8,*(int *)((int)uStack_10e + 0x20) +
                                  *(int *)((int)uStack_10e + 0x24));
          if (SCARRY2(*(int *)((int)uStack_10e + 0x20),*(int *)((int)uStack_10e + 0x24))) {
            uVar9 = 0x1158;
            uVar10 = FUN_1158_043e(0x1138);
          }
          if ((int)uVar10 <= (int)((ulong)uVar10 >> 0x10)) break;
          iVar5 = *(int *)((int)uStack_10e + 0x20) + -8;
          if (SBORROW2(*(int *)((int)uStack_10e + 0x20),8)) {
            iVar5 = FUN_1158_043e(uVar9);
          }
          FUN_1138_179d((int)uStack_10e,uStack_10e._2_2_,iVar5);
        }
        FUN_1138_1c77((int)*(undefined4 *)(iVar6 + 0x414),
                      (int)((ulong)*(undefined4 *)(iVar6 + 0x414) >> 0x10),1);
      }
    }
  }
  return;
}



/* ---- FUN_1068_2713 @ 1068:2713  (123 octets) ---- */

void __stdcall16far FUN_1068_2713(undefined4 *param_1,undefined *param_2,undefined4 param_3)

{
  undefined2 *puVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  
  uVar4 = 0x271e;
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



/* ---- TFormSPUB_DBEdit1MouseDown @ 1068:278e  (183 octets) ---- */

void __stdcall16far TFormSPUB_DBEdit1MouseDown(undefined4 param_1)

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
    *(undefined2 *)(iVar1 + 0x6d) = 0x2713;
    *(undefined2 *)(iVar1 + 0x6f) = 0x1068;
    *(undefined2 *)(iVar1 + 0x71) = (int)param_1;
    *(undefined2 *)(iVar1 + 0x73) = (int)((ulong)param_1 >> 0x10);
  }
  return;
}



/* ---- TFormSPUB_Fiche1Click @ 1068:2845  (43 octets) ---- */

void __stdcall16far TFormSPUB_Fiche1Click(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined2 uVar3;
  
  FUN_1158_0444();
  uVar1 = *(undefined4 *)((int)param_1 + 0x3d4);
  uVar3 = (undefined2)((ulong)uVar1 >> 0x10);
  iVar2 = (int)uVar1;
  FUN_1140_77b2((int)DAT_1160_2c2a,(int)((ulong)DAT_1160_2c2a >> 0x10),*(undefined2 *)(iVar2 + 0x23)
                ,*(undefined2 *)(iVar2 + 0x25),1);
  return;
}



/* ---- TFormSPUB_Index1Click @ 1068:2870  (31 octets) ---- */

void __stdcall16far TFormSPUB_Index1Click(void)

{
  FUN_1158_0444();
  FUN_1140_77b2((int)DAT_1160_2c2a,(int)((ulong)DAT_1160_2c2a >> 0x10),0,0,3);
  return;
}



/* ---- TFormSPUB_Rechercher1Click @ 1068:288f  (33 octets) ---- */

void __stdcall16far TFormSPUB_Rechercher1Click(void)

{
  FUN_1158_0444();
  FUN_1140_77b2((int)DAT_1160_2c2a,(int)((ulong)DAT_1160_2c2a >> 0x10),0x250,0x1160,0x105);
  return;
}



/* ---- TFormSPUB_Utiliserlaide1Click @ 1068:28b0  (31 octets) ---- */

void __stdcall16far TFormSPUB_Utiliserlaide1Click(void)

{
  FUN_1158_0444();
  FUN_1140_77b2((int)DAT_1160_2c2a,(int)((ulong)DAT_1160_2c2a >> 0x10),0,0,4);
  return;
}



/* ---- TFormSPUB_Apropos1Click @ 1068:28cf  (29 octets) ---- */

void __stdcall16far TFormSPUB_Apropos1Click(void)

{
  undefined2 uVar1;
  
  uVar1 = 0x28da;
  FUN_1158_0444();
  FUN_1140_5d45((int)DAT_1160_2008,(int)((ulong)DAT_1160_2008 >> 0x10),uVar1);
  return;
}



/* ---- TFormSPUB_ImpressionRapide1Click @ 1068:28ec  (43 octets) ---- */

void __stdcall16far TFormSPUB_ImpressionRapide1Click(undefined4 param_1)

{
  undefined4 uVar1;
  char cVar2;
  undefined2 uVar3;
  
  FUN_1158_0444();
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  uVar1 = *(undefined4 *)((int)param_1 + 0x404);
  cVar2 = FUN_1108_2f17((int)uVar1,(int)((ulong)uVar1 >> 0x10));
  if (cVar2 != '\0') {
    FUN_1068_297b((int)param_1,uVar3);
  }
  return;
}



/* ---- FUN_1068_291f @ 1068:291f  (69 octets) ---- */

undefined2 __stdcall16far FUN_1068_291f(void)

{
  undefined2 uVar1;
  undefined2 unaff_SS;
  undefined4 uVar2;
  undefined local_24 [30];
  undefined2 uStack_6;
  
  uStack_6 = 0x292a;
  FUN_1158_0444();
  uVar2 = FUN_10f0_2a04((int)DAT_1160_2c54,(int)((ulong)DAT_1160_2c54 >> 0x10));
  uVar1 = FUN_1128_21d2(uVar2);
  GETTEXTMETRICS(0x1128,local_24,unaff_SS);
  uVar1 = FUN_1158_0416(uVar1);
  return uVar1;
}



/* ---- FUN_1068_297b @ 1068:297b  (1112 octets) ---- */

void __cdecl16far FUN_1068_297b(undefined4 param_1)

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
  
  local_6 = 0x2986;
  FUN_1158_0444();
  uVar9 = (undefined2)((ulong)param_1 >> 0x10);
  iVar6 = (int)param_1;
  uStack_418 = 0x1158;
  puStack_416 = (undefined *)iVar6;
  puStack_414 = (undefined *)uVar9;
  FUN_1068_324e();
  puStack_414 = local_106;
  puStack_416 = (undefined *)0x1068;
  uStack_418 = 0x29a1;
  FUN_10f0_204e();
  puStack_414 = local_106;
  puStack_416 = (undefined *)0x10f0;
  uStack_418 = 0x29ac;
  FUN_1158_09f5();
  puStack_414 = (undefined *)0x29b1;
  FUN_1158_0408();
  puStack_414 = (undefined *)0x2975;
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
    FUN_1158_0db5(0,0x2964,uVar10);
    FUN_1158_0c78(puVar13,uVar14);
    uVar10 = 0x1158;
    FUN_1158_0408();
    if (iVar7 == 3) break;
    iVar7 = iVar7 + 1;
  }
  local_210 = *(undefined4 *)(iVar6 + 0x410);
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
        local_6 = FUN_1158_1878(local_206,unaff_SS,0x2965,0x1158);
        if (0 < local_6) {
          FUN_1158_1975(1,local_6,local_206,unaff_SS);
          FUN_1158_1916(local_6,0xff,local_206,unaff_SS,0x2967,0x1158);
        }
      } while (local_6 != 0);
      puVar13 = local_312;
      uVar10 = unaff_SS;
      FUN_1158_17cd(0x2969,0x1158);
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
  uVar3 = FUN_1068_291f(&stack0xfffe);
  if (0xfffd < uVar3) {
    FUN_1158_043e(0x1068);
  }
  local_208 = FUN_1158_0416();
  puVar13 = local_410;
  uVar14 = unaff_SS;
  FUN_1158_17cd(0x2969,0x1158);
  puVar12 = local_310;
  uVar10 = unaff_SS;
  FUN_1138_1d53((int)*(undefined4 *)(iVar6 + 0x38c),
                (int)((ulong)*(undefined4 *)(iVar6 + 0x38c) >> 0x10));
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
  FUN_1158_17cd(0x2969,0x1128);
  puVar12 = local_310;
  uVar10 = unaff_SS;
  FUN_1138_1d53((int)*(undefined4 *)(iVar6 + 0x390),
                (int)((ulong)*(undefined4 *)(iVar6 + 0x390) >> 0x10));
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
  FUN_1158_17cd(0x2969,0x1128);
  puVar12 = local_310;
  uVar10 = unaff_SS;
  FUN_1138_1d53((int)*(undefined4 *)(iVar6 + 0x394),
                (int)((ulong)*(undefined4 *)(iVar6 + 0x394) >> 0x10));
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
  FUN_1158_17cd(0x2969,0x1128);
  puVar12 = local_310;
  uVar10 = unaff_SS;
  FUN_1138_1d53((int)*(undefined4 *)(iVar6 + 0x398),
                (int)((ulong)*(undefined4 *)(iVar6 + 0x398) >> 0x10));
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
  uStack_418 = 0x2dd3;
  FUN_1158_0a4f(local_106,unaff_SS);
  FUN_1158_0408();
  FUN_1120_49e3((int)*(undefined4 *)(iVar6 + 0x410),
                (int)((ulong)*(undefined4 *)(iVar6 + 0x410) >> 0x10));
  return;
}



/* ---- TFormSPUB_Copier1Click @ 1068:2dd7  (71 octets) ---- */

void __stdcall16far TFormSPUB_Copier1Click(undefined4 param_1)

{
  undefined4 uVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  
  FUN_1158_0444();
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  FUN_1068_324e((int)param_1,uVar2,0);
  uVar1 = *(undefined4 *)((int)param_1 + 0x410);
  uVar3 = (undefined2)((ulong)uVar1 >> 0x10);
  uVar2 = (undefined2)uVar1;
  FUN_1120_4a3f(uVar2,uVar3);
  FUN_1120_49ff(uVar2,uVar3);
  FUN_1120_49e3(uVar2,uVar3);
  return;
}



/* ---- FUN_1068_2e28 @ 1068:2e28  (1054 octets) ---- */

void __stdcall16far
FUN_1068_2e28(int param_1,undefined param_2,int param_3,undefined4 param_4,undefined2 param_5,
             byte *param_6)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  byte *pbVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  undefined2 unaff_SS;
  undefined4 uVar7;
  undefined *puVar8;
  undefined2 uVar9;
  undefined local_208 [4];
  undefined local_204 [252];
  undefined4 local_108;
  uint local_104;
  byte local_102;
  char local_101;
  undefined2 uStack_6;
  
  uStack_6 = 0x2e33;
  FUN_1158_0444();
  uVar5 = (undefined2)((ulong)param_4 >> 0x10);
  iVar3 = (int)param_4;
  if (*(char *)(iVar3 + 0x29) != '\0') {
    local_102 = 0;
    pbVar4 = (byte *)param_6;
    uVar6 = (undefined2)((ulong)param_6 >> 0x10);
    if (*(int *)(param_1 + 10) == 0) {
      if (*param_6 != 0) {
        puVar8 = local_204;
        uVar9 = unaff_SS;
        FUN_1158_17cd(pbVar4,uVar6);
        FUN_1158_184c(param_1 + -0x100,unaff_SS);
        FUN_1158_17e7(param_5,pbVar4,uVar6,puVar8,uVar9);
      }
    }
    else if (*(int *)(param_1 + 10) == 1) {
      local_104 = (uint)*param_6;
      while ((int)local_104 < param_3) {
        local_104 = local_104 + 1;
        puVar8 = local_204;
        uVar9 = unaff_SS;
        FUN_1158_17cd(pbVar4,uVar6);
        FUN_1158_184c(0x2e1e,0x1158);
        FUN_1158_17e7(param_5,pbVar4,uVar6,puVar8,uVar9);
      }
    }
    cVar1 = FUN_1158_2255(0x10c,0x1120,iVar3,uVar5);
    if (cVar1 != '\0') {
      local_108 = FUN_1158_2273(0x10c,0x1120,iVar3,uVar5);
      puVar8 = local_208;
      uVar9 = unaff_SS;
      FUN_1138_1d53(local_108);
      FUN_1158_17e7(0xff,&local_102,unaff_SS,puVar8,uVar9);
      while (local_101 == ' ') {
        FUN_1158_1975(1,1,&local_102,unaff_SS);
      }
    }
    cVar1 = FUN_1158_2255(0xdad,0x1118,iVar3,uVar5);
    if (cVar1 != '\0') {
      local_108 = FUN_1158_2273(0xdad,0x1118,iVar3,uVar5);
      puVar8 = local_208;
      uVar9 = unaff_SS;
      FUN_1138_1d53(local_108);
      FUN_1158_17e7(0xff,&local_102,unaff_SS,puVar8,uVar9);
      while (local_101 == ' ') {
        FUN_1158_1975(1,1,&local_102,unaff_SS);
      }
    }
    cVar1 = FUN_1158_2255(0x617,0x1120,iVar3,uVar5);
    if (cVar1 != '\0') {
      local_108 = FUN_1158_2273(0x617,0x1120,iVar3,uVar5);
      puVar8 = local_208;
      uVar9 = unaff_SS;
      FUN_1138_1d53(local_108);
      FUN_1158_17e7(0xff,&local_102,unaff_SS,puVar8,uVar9);
      while (local_101 == ' ') {
        FUN_1158_1975(1,1,&local_102,unaff_SS);
      }
    }
    cVar1 = FUN_1158_2255(0x22,0x10d0,iVar3,uVar5);
    if (cVar1 != '\0') {
      local_108 = FUN_1158_2273(0x22,0x10d0,iVar3,uVar5);
      puVar8 = local_208;
      uVar9 = unaff_SS;
      FUN_1100_1524(local_108);
      FUN_1158_17e7(0xff,&local_102,unaff_SS,puVar8,uVar9);
    }
    cVar1 = FUN_1158_2255(0x1b14,0x1120,iVar3,uVar5);
    if (cVar1 != '\0') {
      local_108 = FUN_1158_2273(0x1b14,0x1120,iVar3,uVar5);
      puVar8 = local_208;
      uVar9 = unaff_SS;
      FUN_1138_1d53(local_108);
      FUN_1158_17e7(0xff,&local_102,unaff_SS,puVar8,uVar9);
    }
    cVar1 = FUN_1158_2255(0x626,0x10d0,iVar3,uVar5);
    if (cVar1 != '\0') {
      uVar7 = FUN_1158_2273(0x626,0x10d0,iVar3,uVar5);
      cVar1 = FUN_1120_6dd2(uVar7);
      if (cVar1 == '\0') {
        FUN_1158_17e7(0xff,&local_102,unaff_SS,0x2e24,0x1120);
      }
      else {
        FUN_1158_17e7(0xff,&local_102,unaff_SS,0x2e20,0x1120);
      }
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
          puVar8 = local_204;
          uVar5 = unaff_SS;
          FUN_1158_17cd(0x2e1e,0x1158);
          FUN_1158_184c(&local_102,unaff_SS);
          FUN_1158_17e7(0xff,&local_102,unaff_SS,puVar8,uVar5);
        }
      }
      else if (cVar1 == 'D') {
        uVar2 = 0x12 - local_102;
        if (SBORROW2(0x12,(uint)local_102)) {
          uVar2 = FUN_1158_043e(0x1158);
        }
        while (local_104 = uVar2, 0 < (int)local_104) {
          local_104 = local_104 - 1;
          puVar8 = local_204;
          uVar5 = unaff_SS;
          FUN_1158_17cd(0x2e1e,0x1158);
          FUN_1158_184c(&local_102,unaff_SS);
          FUN_1158_17e7(0xff,&local_102,unaff_SS,puVar8,uVar5);
          uVar2 = local_104;
        }
      }
    }
    puVar8 = local_204;
    uVar5 = unaff_SS;
    FUN_1158_17cd(pbVar4,uVar6);
    FUN_1158_184c(&local_102,unaff_SS);
    FUN_1158_17e7(param_5,pbVar4,uVar6,puVar8,uVar5);
  }
  return;
}



/* ---- FUN_1068_324e @ 1068:324e  (4871 octets) ---- */

void __stdcall16far FUN_1068_324e(undefined4 param_1,int param_2)

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
  undefined local_408 [254];
  undefined local_30a [2];
  undefined local_308 [254];
  int local_20a;
  int local_208;
  undefined2 local_206;
  int local_204;
  char local_202 [256];
  undefined local_102 [252];
  undefined2 uStack_6;
  
  uStack_6 = 0x3259;
  FUN_1158_0444();
  if (param_2 == 0) {
    FUN_1158_17e7(0xff,local_102,unaff_SS,0x3246,0x1158);
  }
  else if (param_2 == 1) {
    local_102[0] = 0;
  }
  else {
    local_102[0] = 0;
  }
  uVar4 = (undefined2)((ulong)param_1 >> 0x10);
  iVar3 = (int)param_1;
  local_206 = (undefined2)((ulong)*(undefined4 *)(iVar3 + 0x410) >> 0x10);
  local_208 = (int)*(undefined4 *)(iVar3 + 0x410);
  FUN_1120_49e3(local_208,local_206);
  local_202[0] = '\0';
  FUN_1068_2e28(&stack0xfffe,0x67,10,*(undefined2 *)(iVar3 + 0x184),*(undefined2 *)(iVar3 + 0x186),
                0xff,local_202,unaff_SS);
  FUN_1068_2e28(&stack0xfffe,0x67,0x14,*(undefined2 *)(iVar3 + 0x188),*(undefined2 *)(iVar3 + 0x18a)
                ,0xff,local_202,unaff_SS);
  FUN_1068_2e28(&stack0xfffe,0x67,0x25,*(undefined2 *)(iVar3 + 0x18c),*(undefined2 *)(iVar3 + 0x18e)
                ,0xff,local_202,unaff_SS);
  FUN_1068_2e28(&stack0xfffe,0x67,0x46,*(undefined2 *)(iVar3 + 400),*(undefined2 *)(iVar3 + 0x192),
                0xff,local_202,unaff_SS);
  puVar7 = local_308;
  uVar8 = unaff_SS;
  FUN_1158_17cd(local_202,unaff_SS);
  FUN_1158_184c(0x3248,0x1158);
  puVar5 = local_408;
  uVar6 = unaff_SS;
  FUN_1138_1d53((int)*(undefined4 *)(iVar3 + 0x194),
                (int)((ulong)*(undefined4 *)(iVar3 + 0x194) >> 0x10));
  FUN_1158_184c(puVar5,uVar6);
  FUN_1158_17e7(0xff,local_202,unaff_SS,puVar7,uVar8);
  puVar2 = (undefined4 *)*(undefined4 *)(local_208 + 0xec);
  puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
  (*(code *)*puVar1)(0x1158,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),local_202);
  if (param_2 == 1) {
    puVar2 = (undefined4 *)*(undefined4 *)(local_208 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)(0x1158,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),0x324a,0x1158);
  }
  local_202[0] = '\0';
  FUN_1068_2e28(&stack0xfffe,0x67,DAT_1160_0254,*(undefined2 *)(iVar3 + 0x1a0),
                *(undefined2 *)(iVar3 + 0x1a2),0xff,local_202,unaff_SS);
  if (local_202[0] != '\0') {
    puVar2 = (undefined4 *)*(undefined4 *)(local_208 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)(0x1068,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),local_202);
  }
  local_202[0] = '\0';
  FUN_1068_2e28(&stack0xfffe,0x67,DAT_1160_0256,*(undefined2 *)(iVar3 + 0x1a4),
                *(undefined2 *)(iVar3 + 0x1a6),0xff,local_202,unaff_SS);
  FUN_1068_2e28(&stack0xfffe,100,DAT_1160_025a,*(undefined2 *)(iVar3 + 0x1c0),
                *(undefined2 *)(iVar3 + 0x1c2),0xff,local_202,unaff_SS);
  if (local_202[0] != '\0') {
    puVar2 = (undefined4 *)*(undefined4 *)(local_208 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)(0x1068,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),local_202);
  }
  local_202[0] = '\0';
  FUN_1068_2e28(&stack0xfffe,0x67,DAT_1160_0256,*(undefined2 *)(iVar3 + 0x1b8),
                *(undefined2 *)(iVar3 + 0x1ba),0xff,local_202,unaff_SS);
  FUN_1068_2e28(&stack0xfffe,100,DAT_1160_025a,*(undefined2 *)(iVar3 + 0x1d4),
                *(undefined2 *)(iVar3 + 0x1d6),0xff,local_202,unaff_SS);
  if (local_202[0] != '\0') {
    puVar2 = (undefined4 *)*(undefined4 *)(local_208 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)(0x1068,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),local_202);
  }
  local_202[0] = '\0';
  FUN_1068_2e28(&stack0xfffe,0x67,DAT_1160_0256,*(undefined2 *)(iVar3 + 0x1bc),
                *(undefined2 *)(iVar3 + 0x1be),0xff,local_202,unaff_SS);
  FUN_1068_2e28(&stack0xfffe,100,DAT_1160_025a,*(undefined2 *)(iVar3 + 0x1d8),
                *(undefined2 *)(iVar3 + 0x1da),0xff,local_202,unaff_SS);
  if (local_202[0] != '\0') {
    puVar2 = (undefined4 *)*(undefined4 *)(local_208 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)(0x1068,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),local_202);
  }
  local_202[0] = '\0';
  FUN_1068_2e28(&stack0xfffe,0x67,DAT_1160_0256,*(undefined2 *)(iVar3 + 0x1b4),
                *(undefined2 *)(iVar3 + 0x1b6),0xff,local_202,unaff_SS);
  FUN_1068_2e28(&stack0xfffe,100,DAT_1160_025a,*(undefined2 *)(iVar3 + 0x1d0),
                *(undefined2 *)(iVar3 + 0x1d2),0xff,local_202,unaff_SS);
  if (local_202[0] != '\0') {
    puVar2 = (undefined4 *)*(undefined4 *)(local_208 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)(0x1068,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),local_202);
  }
  local_202[0] = '\0';
  FUN_1068_2e28(&stack0xfffe,0x67,DAT_1160_0256,*(undefined2 *)(iVar3 + 0x1ac),
                *(undefined2 *)(iVar3 + 0x1ae),0xff,local_202,unaff_SS);
  FUN_1068_2e28(&stack0xfffe,100,DAT_1160_025a,*(undefined2 *)(iVar3 + 0x1c8),
                *(undefined2 *)(iVar3 + 0x1ca),0xff,local_202,unaff_SS);
  if (local_202[0] != '\0') {
    puVar2 = (undefined4 *)*(undefined4 *)(local_208 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)(0x1068,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),local_202);
  }
  local_202[0] = '\0';
  FUN_1068_2e28(&stack0xfffe,0x67,DAT_1160_0256,*(undefined2 *)(iVar3 + 0x1a8),
                *(undefined2 *)(iVar3 + 0x1aa),0xff,local_202,unaff_SS);
  FUN_1068_2e28(&stack0xfffe,100,DAT_1160_025a,*(undefined2 *)(iVar3 + 0x1c4),
                *(undefined2 *)(iVar3 + 0x1c6),0xff,local_202,unaff_SS);
  if (local_202[0] != '\0') {
    puVar2 = (undefined4 *)*(undefined4 *)(local_208 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)(0x1068,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),local_202);
  }
  local_202[0] = '\0';
  FUN_1068_2e28(&stack0xfffe,0x67,DAT_1160_0256,*(undefined2 *)(iVar3 + 0x1b0),
                *(undefined2 *)(iVar3 + 0x1b2),0xff,local_202,unaff_SS);
  FUN_1068_2e28(&stack0xfffe,100,DAT_1160_025a,*(undefined2 *)(iVar3 + 0x1cc),
                *(undefined2 *)(iVar3 + 0x1ce),0xff,local_202,unaff_SS);
  if (local_202[0] != '\0') {
    puVar2 = (undefined4 *)*(undefined4 *)(local_208 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)(0x1068,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),local_202);
  }
  if (param_2 == 1) {
    puVar2 = (undefined4 *)*(undefined4 *)(local_208 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)(0x1068,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),0x324a,0x1068);
  }
  local_202[0] = '\0';
  FUN_1068_2e28(&stack0xfffe,0x67,DAT_1160_0254,*(undefined2 *)(iVar3 + 0x1dc),
                *(undefined2 *)(iVar3 + 0x1de),0xff,local_202,unaff_SS);
  puVar2 = (undefined4 *)*(undefined4 *)(local_208 + 0xec);
  puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
  (*(code *)*puVar1)(0x1068,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),local_202);
  local_202[0] = '\0';
  FUN_1068_2e28(&stack0xfffe,0x67,DAT_1160_0256,*(undefined2 *)(iVar3 + 0x1e0),
                *(undefined2 *)(iVar3 + 0x1e2),0xff,local_202,unaff_SS);
  FUN_1068_2e28(&stack0xfffe,100,DAT_1160_025a,*(undefined2 *)(iVar3 + 0x1e8),
                *(undefined2 *)(iVar3 + 0x1ea),0xff,local_202,unaff_SS);
  if (local_202[0] != '\0') {
    puVar2 = (undefined4 *)*(undefined4 *)(local_208 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)(0x1068,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),local_202);
  }
  local_202[0] = '\0';
  FUN_1068_2e28(&stack0xfffe,0x67,DAT_1160_0256,*(undefined2 *)(iVar3 + 0x1e4),
                *(undefined2 *)(iVar3 + 0x1e6),0xff,local_202,unaff_SS);
  FUN_1068_2e28(&stack0xfffe,100,DAT_1160_025a,*(undefined2 *)(iVar3 + 0x1ec),
                *(undefined2 *)(iVar3 + 0x1ee),0xff,local_202,unaff_SS);
  if (local_202[0] != '\0') {
    puVar2 = (undefined4 *)*(undefined4 *)(local_208 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)(0x1068,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),local_202);
  }
  if (param_2 == 1) {
    puVar2 = (undefined4 *)*(undefined4 *)(local_208 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)(0x1068,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),0x324a,0x1068);
  }
  local_202[0] = '\0';
  FUN_1068_2e28(&stack0xfffe,0x67,DAT_1160_0254,*(undefined2 *)(iVar3 + 0x1f0),
                *(undefined2 *)(iVar3 + 0x1f2),0xff,local_202,unaff_SS);
  FUN_1068_2e28(&stack0xfffe,100,DAT_1160_025a,*(undefined2 *)(iVar3 + 0x1f8),
                *(undefined2 *)(iVar3 + 0x1fa),0xff,local_202,unaff_SS);
  FUN_1068_2e28(&stack0xfffe,100,DAT_1160_025c,*(undefined2 *)(iVar3 + 0x218),
                *(undefined2 *)(iVar3 + 0x21a),0xff,local_202,unaff_SS);
  if (local_202[0] != '\0') {
    puVar2 = (undefined4 *)*(undefined4 *)(local_208 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)(0x1068,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),local_202);
  }
  local_202[0] = '\0';
  FUN_1068_2e28(&stack0xfffe,0x67,DAT_1160_0256,*(undefined2 *)(iVar3 + 0x41c),
                *(undefined2 *)(iVar3 + 0x41e),0xff,local_202,unaff_SS);
  FUN_1068_2e28(&stack0xfffe,100,DAT_1160_025a,*(undefined2 *)(iVar3 + 0x420),
                *(undefined2 *)(iVar3 + 0x422),0xff,local_202,unaff_SS);
  FUN_1068_2e28(&stack0xfffe,100,DAT_1160_025c,*(undefined2 *)(iVar3 + 0x424),
                *(undefined2 *)(iVar3 + 0x426),0xff,local_202,unaff_SS);
  if (local_202[0] != '\0') {
    puVar2 = (undefined4 *)*(undefined4 *)(local_208 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)(0x1068,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),local_202);
  }
  if (param_2 == 1) {
    puVar2 = (undefined4 *)*(undefined4 *)(local_208 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)(0x1068,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),0x324a,0x1068);
  }
  local_202[0] = '\0';
  FUN_1068_2e28(&stack0xfffe,0x67,DAT_1160_0254,*(undefined2 *)(iVar3 + 0x230),
                *(undefined2 *)(iVar3 + 0x232),0xff,local_202,unaff_SS);
  puVar2 = (undefined4 *)*(undefined4 *)(local_208 + 0xec);
  puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
  (*(code *)*puVar1)(0x1068,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),local_202);
  local_202[0] = '\0';
  FUN_1068_2e28(&stack0xfffe,0x67,DAT_1160_0256,*(undefined2 *)(iVar3 + 0x238),
                *(undefined2 *)(iVar3 + 0x23a),0xff,local_202,unaff_SS);
  FUN_1068_2e28(&stack0xfffe,100,DAT_1160_025a,*(undefined2 *)(iVar3 + 0x240),
                *(undefined2 *)(iVar3 + 0x242),0xff,local_202,unaff_SS);
  if (local_202[0] != '\0') {
    puVar2 = (undefined4 *)*(undefined4 *)(local_208 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)(0x1068,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),local_202);
  }
  local_202[0] = '\0';
  FUN_1068_2e28(&stack0xfffe,0x67,DAT_1160_0256,*(undefined2 *)(iVar3 + 0x234),
                *(undefined2 *)(iVar3 + 0x236),0xff,local_202,unaff_SS);
  FUN_1068_2e28(&stack0xfffe,100,DAT_1160_025a,*(undefined2 *)(iVar3 + 0x23c),
                *(undefined2 *)(iVar3 + 0x23e),0xff,local_202,unaff_SS);
  if (local_202[0] != '\0') {
    puVar2 = (undefined4 *)*(undefined4 *)(local_208 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)(0x1068,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),local_202);
  }
  local_202[0] = '\0';
  FUN_1068_2e28(&stack0xfffe,0x67,DAT_1160_0256,*(undefined2 *)(iVar3 + 0x408),
                *(undefined2 *)(iVar3 + 0x40a),0xff,local_202,unaff_SS);
  FUN_1068_2e28(&stack0xfffe,100,DAT_1160_025a,*(undefined2 *)(iVar3 + 0x40c),
                *(undefined2 *)(iVar3 + 0x40e),0xff,local_202,unaff_SS);
  if (local_202[0] != '\0') {
    puVar2 = (undefined4 *)*(undefined4 *)(local_208 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)(0x1068,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),local_202);
  }
  if (param_2 == 1) {
    puVar2 = (undefined4 *)*(undefined4 *)(local_208 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)(0x1068,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),0x324a,0x1068);
  }
  local_202[0] = '\0';
  FUN_1068_2e28(&stack0xfffe,0x67,DAT_1160_0254,*(undefined2 *)(iVar3 + 0x244),
                *(undefined2 *)(iVar3 + 0x246),0xff,local_202,unaff_SS);
  FUN_1068_2e28(&stack0xfffe,100,DAT_1160_025a,*(undefined2 *)(iVar3 + 0x24c),
                *(undefined2 *)(iVar3 + 0x24e),0xff,local_202,unaff_SS);
  FUN_1068_2e28(&stack0xfffe,100,DAT_1160_025c,*(undefined2 *)(iVar3 + 0x25c),
                *(undefined2 *)(iVar3 + 0x25e),0xff,local_202,unaff_SS);
  if (local_202[0] != '\0') {
    puVar2 = (undefined4 *)*(undefined4 *)(local_208 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)(0x1068,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),local_202);
  }
  local_202[0] = '\0';
  FUN_1068_2e28(&stack0xfffe,0x67,DAT_1160_0256,*(undefined2 *)(iVar3 + 0x250),
                *(undefined2 *)(iVar3 + 0x252),0xff,local_202,unaff_SS);
  FUN_1068_2e28(&stack0xfffe,100,DAT_1160_025a,*(undefined2 *)(iVar3 + 0x254),
                *(undefined2 *)(iVar3 + 0x256),0xff,local_202,unaff_SS);
  FUN_1068_2e28(&stack0xfffe,100,DAT_1160_025c,*(undefined2 *)(iVar3 + 0x260),
                *(undefined2 *)(iVar3 + 0x262),0xff,local_202,unaff_SS);
  if (local_202[0] != '\0') {
    puVar2 = (undefined4 *)*(undefined4 *)(local_208 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)(0x1068,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),local_202);
  }
  if (param_2 == 1) {
    puVar2 = (undefined4 *)*(undefined4 *)(local_208 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)(0x1068,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),0x324a,0x1068);
  }
  local_202[0] = '\0';
  FUN_1068_2e28(&stack0xfffe,0x67,DAT_1160_0254,*(undefined2 *)(iVar3 + 0x298),
                *(undefined2 *)(iVar3 + 0x29a),0xff,local_202,unaff_SS);
  puVar2 = (undefined4 *)*(undefined4 *)(local_208 + 0xec);
  puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
  (*(code *)*puVar1)(0x1068,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),local_202);
  local_202[0] = '\0';
  FUN_1068_2e28(&stack0xfffe,0x67,DAT_1160_0256,*(undefined2 *)(iVar3 + 0x29c),
                *(undefined2 *)(iVar3 + 0x29e),0xff,local_202,unaff_SS);
  FUN_1068_2e28(&stack0xfffe,100,DAT_1160_025a,*(undefined2 *)(iVar3 + 0x2a8),
                *(undefined2 *)(iVar3 + 0x2aa),0xff,local_202,unaff_SS);
  if (local_202[0] != '\0') {
    puVar2 = (undefined4 *)*(undefined4 *)(local_208 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)(0x1068,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),local_202);
  }
  local_202[0] = '\0';
  FUN_1068_2e28(&stack0xfffe,0x67,DAT_1160_0256,*(undefined2 *)(iVar3 + 0x2a0),
                *(undefined2 *)(iVar3 + 0x2a2),0xff,local_202,unaff_SS);
  FUN_1068_2e28(&stack0xfffe,100,DAT_1160_025a,*(undefined2 *)(iVar3 + 0x2ac),
                *(undefined2 *)(iVar3 + 0x2ae),0xff,local_202,unaff_SS);
  if (local_202[0] != '\0') {
    puVar2 = (undefined4 *)*(undefined4 *)(local_208 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)(0x1068,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),local_202);
  }
  local_202[0] = '\0';
  FUN_1068_2e28(&stack0xfffe,0x67,DAT_1160_0256,*(undefined2 *)(iVar3 + 0x2a4),
                *(undefined2 *)(iVar3 + 0x2a6),0xff,local_202,unaff_SS);
  FUN_1068_2e28(&stack0xfffe,100,DAT_1160_025a,*(undefined2 *)(iVar3 + 0x2b0),
                *(undefined2 *)(iVar3 + 0x2b2),0xff,local_202,unaff_SS);
  if (local_202[0] != '\0') {
    puVar2 = (undefined4 *)*(undefined4 *)(local_208 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)(0x1068,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),local_202);
  }
  if (param_2 == 1) {
    puVar2 = (undefined4 *)*(undefined4 *)(local_208 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)(0x1068,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),0x324a,0x1068);
  }
  local_202[0] = '\0';
  FUN_1068_2e28(&stack0xfffe,0x67,DAT_1160_0254,*(undefined2 *)(iVar3 + 0x264),
                *(undefined2 *)(iVar3 + 0x266),0xff,local_202,unaff_SS);
  puVar2 = (undefined4 *)*(undefined4 *)(local_208 + 0xec);
  puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
  (*(code *)*puVar1)(0x1068,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),local_202);
  local_202[0] = '\0';
  FUN_1068_2e28(&stack0xfffe,0x67,DAT_1160_0256,*(undefined2 *)(iVar3 + 0x268),
                *(undefined2 *)(iVar3 + 0x26a),0xff,local_202,unaff_SS);
  FUN_1068_2e28(&stack0xfffe,100,DAT_1160_025a,*(undefined2 *)(iVar3 + 0x280),
                *(undefined2 *)(iVar3 + 0x282),0xff,local_202,unaff_SS);
  if (local_202[0] != '\0') {
    puVar2 = (undefined4 *)*(undefined4 *)(local_208 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)(0x1068,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),local_202);
  }
  local_202[0] = '\0';
  FUN_1068_2e28(&stack0xfffe,0x67,DAT_1160_0256,*(undefined2 *)(iVar3 + 0x26c),
                *(undefined2 *)(iVar3 + 0x26e),0xff,local_202,unaff_SS);
  FUN_1068_2e28(&stack0xfffe,100,DAT_1160_025a,*(undefined2 *)(iVar3 + 0x284),
                *(undefined2 *)(iVar3 + 0x286),0xff,local_202,unaff_SS);
  if (local_202[0] != '\0') {
    puVar2 = (undefined4 *)*(undefined4 *)(local_208 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)(0x1068,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),local_202);
  }
  local_202[0] = '\0';
  FUN_1068_2e28(&stack0xfffe,0x67,DAT_1160_0256,*(undefined2 *)(iVar3 + 0x270),
                *(undefined2 *)(iVar3 + 0x272),0xff,local_202,unaff_SS);
  FUN_1068_2e28(&stack0xfffe,100,DAT_1160_025a,*(undefined2 *)(iVar3 + 0x288),
                *(undefined2 *)(iVar3 + 0x28a),0xff,local_202,unaff_SS);
  if (local_202[0] != '\0') {
    puVar2 = (undefined4 *)*(undefined4 *)(local_208 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)(0x1068,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),local_202);
  }
  local_202[0] = '\0';
  FUN_1068_2e28(&stack0xfffe,0x67,DAT_1160_0256,*(undefined2 *)(iVar3 + 0x27c),
                *(undefined2 *)(iVar3 + 0x27e),0xff,local_202,unaff_SS);
  FUN_1068_2e28(&stack0xfffe,100,DAT_1160_025a,*(undefined2 *)(iVar3 + 0x294),
                *(undefined2 *)(iVar3 + 0x296),0xff,local_202,unaff_SS);
  if (local_202[0] != '\0') {
    puVar2 = (undefined4 *)*(undefined4 *)(local_208 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)(0x1068,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),local_202);
  }
  local_202[0] = '\0';
  FUN_1068_2e28(&stack0xfffe,0x67,DAT_1160_0256,*(undefined2 *)(iVar3 + 0x274),
                *(undefined2 *)(iVar3 + 0x276),0xff,local_202,unaff_SS);
  FUN_1068_2e28(&stack0xfffe,100,DAT_1160_025a,*(undefined2 *)(iVar3 + 0x28c),
                *(undefined2 *)(iVar3 + 0x28e),0xff,local_202,unaff_SS);
  if (local_202[0] != '\0') {
    puVar2 = (undefined4 *)*(undefined4 *)(local_208 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)(0x1068,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),local_202);
  }
  local_202[0] = '\0';
  FUN_1068_2e28(&stack0xfffe,0x67,DAT_1160_0256,*(undefined2 *)(iVar3 + 0x278),
                *(undefined2 *)(iVar3 + 0x27a),0xff,local_202,unaff_SS);
  FUN_1068_2e28(&stack0xfffe,100,DAT_1160_025a,*(undefined2 *)(iVar3 + 0x290),
                *(undefined2 *)(iVar3 + 0x292),0xff,local_202,unaff_SS);
  if (local_202[0] != '\0') {
    puVar2 = (undefined4 *)*(undefined4 *)(local_208 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)(0x1068,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),local_202);
  }
  if (param_2 == 1) {
    puVar2 = (undefined4 *)*(undefined4 *)(local_208 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)(0x1068,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),0x324a,0x1068);
  }
  local_202[0] = '\0';
  FUN_1068_2e28(&stack0xfffe,0x67,DAT_1160_0254,*(undefined2 *)(iVar3 + 0x2b8),
                *(undefined2 *)(iVar3 + 0x2ba),0xff,local_202,unaff_SS);
  FUN_1068_2e28(&stack0xfffe,100,DAT_1160_025a,*(undefined2 *)(iVar3 + 700),
                *(undefined2 *)(iVar3 + 0x2be),0xff,local_202,unaff_SS);
  if (local_202[0] != '\0') {
    puVar2 = (undefined4 *)*(undefined4 *)(local_208 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)(0x1068,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),local_202);
  }
  local_202[0] = '\0';
  FUN_1068_2e28(&stack0xfffe,0x67,DAT_1160_0254,*(undefined2 *)(iVar3 + 0x2c0),
                *(undefined2 *)(iVar3 + 0x2c2),0xff,local_202,unaff_SS);
  puVar7 = local_308;
  uVar8 = unaff_SS;
  FUN_1158_17cd(local_202,unaff_SS);
  FUN_1158_184c(0x324b,0x1158);
  puVar5 = local_408;
  uVar6 = unaff_SS;
  FUN_1138_1d53((int)*(undefined4 *)(iVar3 + 0x2c4),
                (int)((ulong)*(undefined4 *)(iVar3 + 0x2c4) >> 0x10));
  FUN_1158_184c(puVar5,uVar6);
  FUN_1158_17e7(0xff,local_202,unaff_SS,puVar7,uVar8);
  FUN_1068_2e28(&stack0xfffe,100,DAT_1160_025a,*(undefined2 *)(iVar3 + 0x2c8),
                *(undefined2 *)(iVar3 + 0x2ca),0xff,local_202,unaff_SS);
  if (local_202[0] != '\0') {
    puVar2 = (undefined4 *)*(undefined4 *)(local_208 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)(0x1068,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),local_202);
  }
  local_202[0] = '\0';
  FUN_1068_2e28(&stack0xfffe,0x67,DAT_1160_0254,*(undefined2 *)(iVar3 + 0x348),
                *(undefined2 *)(iVar3 + 0x34a),0xff,local_202,unaff_SS);
  puVar7 = local_308;
  uVar8 = unaff_SS;
  FUN_1158_17cd(local_202,unaff_SS);
  FUN_1158_184c(0x324b,0x1158);
  puVar5 = local_408;
  uVar6 = unaff_SS;
  FUN_1138_1d53((int)*(undefined4 *)(iVar3 + 0x34c),
                (int)((ulong)*(undefined4 *)(iVar3 + 0x34c) >> 0x10));
  FUN_1158_184c(puVar5,uVar6);
  FUN_1158_17e7(0xff,local_202,unaff_SS,puVar7,uVar8);
  FUN_1068_2e28(&stack0xfffe,100,DAT_1160_025a,*(undefined2 *)(iVar3 + 0x350),
                *(undefined2 *)(iVar3 + 0x352),0xff,local_202,unaff_SS);
  if (local_202[0] != '\0') {
    puVar2 = (undefined4 *)*(undefined4 *)(local_208 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)(0x1068,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),local_202);
  }
  local_202[0] = '\0';
  FUN_1068_2e28(&stack0xfffe,0x67,DAT_1160_0254,*(undefined2 *)(iVar3 + 0x324),
                *(undefined2 *)(iVar3 + 0x326),0xff,local_202,unaff_SS);
  if (local_202[0] != '\0') {
    puVar2 = (undefined4 *)*(undefined4 *)(local_208 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)(0x1068,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),local_202);
  }
  local_202[0] = '\0';
  if (*(char *)((int)*(undefined4 *)(iVar3 + 0x32c) + 0x29) != '\0') {
    puVar7 = local_308;
    uVar6 = unaff_SS;
    FUN_1138_1d53((int)*(undefined4 *)(iVar3 + 0x32c),
                  (int)((ulong)*(undefined4 *)(iVar3 + 0x32c) >> 0x10));
    FUN_1158_17e7(0xff,local_202,unaff_SS,puVar7,uVar6);
    if ((param_2 == 1) && (local_20a = DAT_1160_0256, 0 < DAT_1160_0256)) {
      local_204 = 1;
      while( true ) {
        puVar7 = local_30a;
        uVar6 = unaff_SS;
        FUN_1158_17cd(0x3248,0x1158);
        FUN_1158_184c(local_202,unaff_SS);
        FUN_1158_17e7(0xff,local_202,unaff_SS,puVar7,uVar6);
        if (local_204 == local_20a) break;
        local_204 = local_204 + 1;
      }
    }
    FUN_1068_2e28(&stack0xfffe,100,DAT_1160_025a,*(undefined2 *)(iVar3 + 0x32c),
                  *(undefined2 *)(iVar3 + 0x32e),0xff,local_202,unaff_SS);
  }
  if (local_202[0] != '\0') {
    puVar2 = (undefined4 *)*(undefined4 *)(local_208 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)(0x1068,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),local_202);
  }
  local_202[0] = '\0';
  FUN_1068_2e28(&stack0xfffe,0x67,DAT_1160_0256,*(undefined2 *)(iVar3 + 0x328),
                *(undefined2 *)(iVar3 + 0x32a),0xff,local_202,unaff_SS);
  FUN_1068_2e28(&stack0xfffe,100,DAT_1160_025a,*(undefined2 *)(iVar3 + 0x330),
                *(undefined2 *)(iVar3 + 0x332),0xff,local_202,unaff_SS);
  if (local_202[0] != '\0') {
    puVar2 = (undefined4 *)*(undefined4 *)(local_208 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)(0x1068,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),local_202);
  }
  if (param_2 == 1) {
    puVar2 = (undefined4 *)*(undefined4 *)(local_208 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)(0x1068,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),0x324a,0x1068);
  }
  local_202[0] = '\0';
  FUN_1068_2e28(&stack0xfffe,0x67,DAT_1160_0254,*(undefined2 *)(iVar3 + 0x35c),
                *(undefined2 *)(iVar3 + 0x35e),0xff,local_202,unaff_SS);
  FUN_1068_2e28(&stack0xfffe,100,DAT_1160_025a,*(undefined2 *)(iVar3 + 0x364),
                *(undefined2 *)(iVar3 + 0x366),0xff,local_202,unaff_SS);
  FUN_1068_2e28(&stack0xfffe,100,DAT_1160_025c,*(undefined2 *)(iVar3 + 0x37c),
                *(undefined2 *)(iVar3 + 0x37e),0xff,local_202,unaff_SS);
  if (local_202[0] != '\0') {
    puVar2 = (undefined4 *)*(undefined4 *)(local_208 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)(0x1068,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),local_202);
  }
  local_202[0] = '\0';
  FUN_1068_2e28(&stack0xfffe,0x67,DAT_1160_0256,*(undefined2 *)(iVar3 + 0x36c),
                *(undefined2 *)(iVar3 + 0x36e),0xff,local_202,unaff_SS);
  FUN_1068_2e28(&stack0xfffe,100,DAT_1160_025a,*(undefined2 *)(iVar3 + 0x370),
                *(undefined2 *)(iVar3 + 0x372),0xff,local_202,unaff_SS);
  FUN_1068_2e28(&stack0xfffe,100,DAT_1160_025c,*(undefined2 *)(iVar3 + 0x380),
                *(undefined2 *)(iVar3 + 0x382),0xff,local_202,unaff_SS);
  if (local_202[0] != '\0') {
    puVar2 = (undefined4 *)*(undefined4 *)(local_208 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)(0x1068,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),local_202);
  }
  local_202[0] = '\0';
  FUN_1068_2e28(&stack0xfffe,0x67,DAT_1160_0256,*(undefined2 *)(iVar3 + 0x368),
                *(undefined2 *)(iVar3 + 0x36a),0xff,local_202,unaff_SS);
  FUN_1068_2e28(&stack0xfffe,100,DAT_1160_025a,*(undefined2 *)(iVar3 + 0x374),
                *(undefined2 *)(iVar3 + 0x376),0xff,local_202,unaff_SS);
  FUN_1068_2e28(&stack0xfffe,100,DAT_1160_025c,*(undefined2 *)(iVar3 + 900),
                *(undefined2 *)(iVar3 + 0x386),0xff,local_202,unaff_SS);
  if (local_202[0] != '\0') {
    puVar2 = (undefined4 *)*(undefined4 *)(local_208 + 0xec);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)(0x1068,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),local_202);
  }
  return;
}



/* ---- TFormSPUB_TableDP1CalcFields @ 1068:457b  (1 octets) ---- */

void TFormSPUB_TableDP1CalcFields(void)

{
  undefined2 *puVar1;
  longdouble in_ST0;
  longdouble lVar2;
  longdouble in_ST1;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined2 in_stack_00000008;
  undefined2 in_stack_0000000a;
  double dVar5;
  
  FUN_1158_0444();
  uVar3 = FUN_1158_2273(0x138,(char *)s_iTime_1160_10dc + 4,in_stack_00000008,in_stack_0000000a);
  puVar4 = (undefined4 *)FUN_10d8_3b9b(uVar3,0x455f,0x1158);
  puVar1 = (undefined2 *)((int)*puVar4 + 0x40);
  (*(code *)*puVar1)(0x10d8,puVar4);
  puVar4 = (undefined4 *)FUN_10d8_3b9b();
  puVar1 = (undefined2 *)((int)*puVar4 + 0x40);
  (*(code *)*puVar1)();
  in_ST0 = in_ST0 + in_ST1;
  lVar2 = (longdouble)2.0;
  FUN_1158_04b2(puVar4);
  FUN_1080_2fa6((double)lVar2);
  dVar5 = (double)in_ST0;
  puVar4 = (undefined4 *)FUN_10d8_3b9b(uVar3,0x4555,0x1080);
  puVar1 = (undefined2 *)((int)*puVar4 + 0x5c);
  (*(code *)*puVar1)(0x10d8,puVar4,dVar5);
  return;
}




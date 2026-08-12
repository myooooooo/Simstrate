/* Simstrat (FR).EXE - segment Code5 - 94 fonctions
   Decompile par Ghidra 11.2.1 (x86 16 bits, chargeur NE). */

/* ---- FUN_1020_1087 @ 1020:1087  (109 octets) ---- */

void __cdecl16far FUN_1020_1087(void)

{
  ulong uVar1;
  undefined2 uVar2;
  undefined extraout_AH;
  undefined2 unaff_CS;
  undefined2 uStack_1c;
  undefined *puStack_1a;
  char *pcStack_18;
  undefined2 uStack_16;
  undefined2 uStack_14;
  undefined2 uStack_12;
  undefined2 uStack_10;
  undefined2 uStack_e;
  undefined2 uStack_c;
  undefined4 local_a;
  char *local_6;
  
  _local_6 = (char *)CONCAT22(unaff_CS,(char *)s_sDecimal_1160_1092);
  FUN_1158_0444();
  uStack_c = DAT_1160_2c2a._2_2_;
  uStack_e = (undefined2)DAT_1160_2c2a;
  uStack_10 = CONCAT11(extraout_AH,1);
  uStack_12 = 0x1020;
  uStack_14 = 0x22;
  uStack_16 = 0x1158;
  pcStack_18 = (char *)s_sShortDate_1160_10ad;
  local_a = FUN_1140_2553();
  uVar1 = (ulong)local_a >> 0x10;
  local_6 = (char *)local_a;
  uStack_16 = 0x1140;
  pcStack_18 = (char *)0x1081;
  uStack_1c = DAT_1160_1858;
  DAT_1160_1858 = &uStack_1c;
  puStack_1a = &stack0xfffe;
  FUN_1140_3a14(local_a,2);
  uVar2 = (undefined2)local_a;
  FUN_1140_5d45(local_a);
  DAT_1160_1858 = (undefined2 *)uVar2;
  puStack_1a = (undefined *)0x1140;
  uStack_1c = 0x10f4;
  FUN_1140_5f1d(local_6,(int)uVar1);
  return;
}



/* ---- FUN_1020_10f6 @ 1020:10f6  (43 octets) ---- */

void __stdcall16far FUN_1020_10f6(undefined4 param_1)

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



/* ---- FUN_1020_1121 @ 1020:1121  (102 octets) ---- */

void __stdcall16far FUN_1020_1121(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined4 uVar5;
  
  FUN_1158_0444();
  uVar4 = (undefined2)((ulong)param_1 >> 0x10);
  uVar3 = (undefined2)param_1;
  iVar1 = FUN_1130_1326(uVar3,uVar4);
  iVar2 = iVar1 + -1;
  if (SBORROW2(iVar1,1)) {
    iVar2 = FUN_1158_043e(0x1130);
  }
  if (-1 < iVar2) {
    iVar1 = 0;
    while( true ) {
      uVar5 = FUN_1130_1353(uVar3,uVar4,iVar1);
      FUN_1020_1121(uVar5);
      if (iVar1 == iVar2) break;
      iVar1 = iVar1 + 1;
    }
  }
  FUN_1130_1275(uVar3,uVar4,0);
  return;
}



/* ---- FUN_1020_1187 @ 1020:1187  (144 octets) ---- */

undefined2 __stdcall16far FUN_1020_1187(undefined4 param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined extraout_AH;
  undefined extraout_AH_00;
  undefined uVar4;
  int iVar5;
  undefined2 uVar6;
  undefined4 uVar7;
  byte local_7;
  int local_6;
  
  FUN_1158_0444();
  uVar6 = (undefined2)((ulong)param_1 >> 0x10);
  iVar5 = (int)param_1;
  local_7 = *(byte *)(iVar5 + 0x1f);
  iVar2 = FUN_1130_1326(iVar5,uVar6);
  iVar3 = iVar2 + -1;
  if (SBORROW2(iVar2,1)) {
    iVar3 = FUN_1158_043e(0x1130);
  }
  if (-1 < iVar3) {
    local_6 = 0;
    while( true ) {
      uVar7 = FUN_1130_1353(iVar5,uVar6,local_6);
      bVar1 = FUN_1020_1187(uVar7);
      local_7 = bVar1 | local_7;
      if (local_6 == iVar3) break;
      local_6 = local_6 + 1;
    }
  }
  if (local_7 == 0) {
    FUN_1130_1275(iVar5,uVar6,0);
    uVar4 = extraout_AH_00;
  }
  else {
    FUN_1130_1275(iVar5,uVar6,1);
    uVar4 = extraout_AH;
  }
  return CONCAT11(uVar4,local_7);
}



/* ---- FUN_1020_122d @ 1020:122d  (330 octets) ---- */

void __stdcall16far
FUN_1020_122d(undefined2 param_1_00,undefined2 param_2_00,int param_1,int param_2,double param_3,
             undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined2 unaff_SS;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined *puVar5;
  undefined2 uVar6;
  undefined local_226 [256];
  int local_126;
  int local_124;
  undefined local_122;
  int local_11e;
  int local_11c;
  undefined local_11a;
  longdouble *local_116;
  longdouble local_10e;
  int local_104;
  byte local_102 [252];
  undefined2 uStack_6;
  
  uStack_6 = 0x1238;
  FUN_1158_0444();
  puVar5 = local_226;
  iVar2 = param_2 >> 0xf;
  local_126 = param_2;
  local_122 = 0;
  local_11c = param_1 >> 0xf;
  local_11e = param_1;
  local_11a = 0;
  local_10e = (longdouble)param_3;
  local_116 = &local_10e;
  uVar6 = unaff_SS;
  local_124 = iVar2;
  FUN_1150_1034(2,&local_126,unaff_SS,0x1217,0x1158);
  FUN_1158_17e7(0xff,local_102,unaff_SS,puVar5,uVar6);
  if (param_2 < (int)(uint)local_102[0]) {
    puVar5 = local_226;
    uVar4 = 0x1158;
    uVar3 = 0x121d;
    local_126 = param_2;
    local_122 = 0;
    iVar1 = param_2 + -8;
    uVar6 = unaff_SS;
    local_124 = iVar2;
    if (SBORROW2(param_2,8)) {
      iVar1 = FUN_1158_043e(0x1158,0x121d,0x1158,puVar5);
    }
    local_11c = iVar1 >> 0xf;
    local_11a = 0;
    local_10e = (longdouble)param_3;
    local_116 = &local_10e;
    local_11e = iVar1;
    FUN_1150_1034(2,&local_126,unaff_SS,uVar3,uVar4);
    FUN_1158_17e7(0xff,local_102,unaff_SS,puVar5,uVar6);
  }
  while (local_102[1] == ' ') {
    FUN_1158_1975(1,1,local_102,unaff_SS);
  }
  local_104 = FUN_1158_1878(local_102,unaff_SS,0x1223,0x1158);
  if (0 < local_104) {
    iVar2 = FUN_1158_0416();
    local_102[iVar2] = 0x2e;
  }
  FUN_1158_17e7(0xff,(int)param_4,(int)((ulong)param_4 >> 0x10),local_102,unaff_SS);
  return;
}



/* ---- FUN_1020_137f @ 1020:137f  (63 octets) ---- */

undefined2 __stdcall16far FUN_1020_137f(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined2 uVar3;
  
  FUN_1158_0444();
  uVar1 = *(undefined4 *)((int)param_1 + 0x198);
  uVar3 = (undefined2)((ulong)uVar1 >> 0x10);
  iVar2 = (int)uVar1;
  if (SBORROW2(*(int *)(iVar2 + 0xe8),(uint)(*(int *)(iVar2 + 0xe6) == 0)) != false) {
    FUN_1158_043e(0x1158);
  }
  uVar3 = FUN_1158_0416();
  return uVar3;
}



/* ---- FUN_1020_13c6 @ 1020:13c6  (63 octets) ---- */

undefined2 __stdcall16far FUN_1020_13c6(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined2 uVar3;
  
  FUN_1158_0444();
  uVar1 = *(undefined4 *)((int)param_1 + 0x198);
  uVar3 = (undefined2)((ulong)uVar1 >> 0x10);
  iVar2 = (int)uVar1;
  if (SBORROW2(*(int *)(iVar2 + 0x10c),(uint)(*(int *)(iVar2 + 0x10a) == 0)) != false) {
    FUN_1158_043e(0x1158);
  }
  uVar3 = FUN_1158_0416();
  return uVar3;
}



/* ---- FUN_1020_1405 @ 1020:1405  (78 octets) ---- */

int __stdcall16far FUN_1020_1405(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  
  uVar5 = 0x1410;
  FUN_1158_0444();
  uVar4 = (undefined2)((ulong)param_1 >> 0x10);
  iVar2 = FUN_1020_13c6((int)param_1,uVar4);
  iVar3 = iVar2 + 1;
  if (SCARRY2(iVar2,1)) {
    iVar3 = FUN_1158_043e(0x1020,uVar5);
  }
  uVar1 = *(undefined4 *)((int)param_1 + 0x230);
  iVar3 = *(int *)((int)uVar1 + 0x22) / iVar3;
  if (iVar3 < 0x14) {
    iVar3 = 0x14;
  }
  return iVar3;
}



/* ---- FUN_1020_146f @ 1020:146f  (503 octets) ---- */

void __stdcall16far FUN_1020_146f(undefined4 param_1)

{
  double dVar1;
  double dVar2;
  int iVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined2 unaff_CS;
  undefined2 unaff_SS;
  longdouble in_ST0;
  longdouble lVar6;
  longdouble in_ST1;
  longdouble in_ST2;
  longdouble in_ST3;
  longdouble in_ST4;
  longdouble in_ST5;
  longdouble in_ST6;
  longdouble lVar7;
  undefined *puVar8;
  undefined local_128 [254];
  uint local_2a;
  int local_28;
  int local_26;
  undefined4 local_24;
  int local_20;
  int local_1e;
  int local_1c;
  double local_1a;
  double local_12;
  undefined4 local_a;
  undefined2 uStack_6;
  
  _local_a = (double)CONCAT26(unaff_CS,CONCAT24(0x147a,local_a));
  FUN_1158_0444();
  uVar4 = (undefined2)((ulong)param_1 >> 0x10);
  iVar3 = (int)param_1;
  local_24 = *(undefined4 *)(iVar3 + 0x198);
  uVar5 = (undefined2)((ulong)local_24 >> 0x10);
  local_1a = 1e+16;
  local_12 = -1e+16;
  lVar7 = in_ST6;
  if (SBORROW2(*(int *)((int)local_24 + 0xe8),(uint)(*(int *)((int)local_24 + 0xe6) == 0)) != false)
  {
    FUN_1158_043e();
  }
  local_26 = FUN_1158_0416();
  if (0 < local_26) {
    local_1e = 1;
    while( true ) {
      uVar5 = (undefined2)((ulong)local_24 >> 0x10);
      if (SBORROW2(*(int *)((int)local_24 + 0x10c),(uint)(*(int *)((int)local_24 + 0x10a) == 0)) !=
          false) {
        FUN_1158_043e();
      }
      local_28 = FUN_1158_0416();
      if (0 < local_28) {
        local_1c = 1;
        lVar6 = in_ST0;
        in_ST0 = in_ST1;
        in_ST1 = in_ST2;
        in_ST2 = in_ST3;
        in_ST3 = in_ST4;
        in_ST4 = in_ST5;
        in_ST5 = in_ST6;
        in_ST6 = lVar7;
        while( true ) {
          puVar8 = (undefined *)CONCAT22(unaff_SS,local_128);
          FUN_10f8_9a68((int)local_24,(int)((ulong)local_24 >> 0x10),local_1c);
          FUN_1158_1e86(&local_20,CONCAT42(puVar8,unaff_SS));
          _local_a = (double)lVar6;
          if (local_20 == 0) {
            if (local_12 < _local_a) {
              local_12 = _local_a;
            }
            local_2a = (uint)(_local_a < local_1a) << 8 |
                       (uint)(NAN(_local_a) || NAN(local_1a)) << 10 |
                       (uint)(_local_a == local_1a) << 0xe;
            if (_local_a < local_1a) {
              local_1a = _local_a;
            }
          }
          lVar7 = in_ST6;
          if (local_1c == local_28) break;
          local_1c = local_1c + 1;
          lVar6 = in_ST0;
          in_ST0 = in_ST1;
          in_ST1 = in_ST2;
          in_ST2 = in_ST3;
          in_ST3 = in_ST4;
          in_ST4 = in_ST5;
          in_ST5 = in_ST6;
        }
      }
      if (local_1e == local_26) break;
      local_1e = local_1e + 1;
    }
  }
  FUN_1080_2fa6(local_12._0_2_,(int6)((qword)local_12 >> 0x10));
  local_12 = (double)in_ST0;
  FUN_1080_2fa6(local_1a._0_2_,(int6)((qword)local_1a >> 0x10));
  local_1a = (double)in_ST1;
  if (*(char *)(iVar3 + 0x85d) == '\0') {
    *(undefined8 *)(iVar3 + 0x876) = *(undefined8 *)(iVar3 + 0x866);
  }
  else {
    *(double *)(iVar3 + 0x876) = local_1a;
  }
  if (*(char *)(iVar3 + 0x85c) == '\0') {
    *(undefined8 *)(iVar3 + 0x86e) = *(undefined8 *)(iVar3 + 0x85e);
  }
  else {
    *(double *)(iVar3 + 0x86e) = local_12;
    *(undefined8 *)(iVar3 + 0x87e) = 0;
  }
  dVar1 = *(double *)(iVar3 + 0x86e);
  dVar2 = *(double *)(iVar3 + 0x876);
  local_24 = CONCAT22((uint)(dVar1 < dVar2) << 8 | (uint)(NAN(dVar1) || NAN(dVar2)) << 10 |
                      (uint)(dVar1 == dVar2) << 0xe,(undefined2)local_24);
  if (dVar1 < dVar2 || (dVar1 == dVar2) != 0) {
    FUN_1080_2fa6((*(double *)(iVar3 + 0x876) + 1.0) * 2.0);
    *(double *)(iVar3 + 0x86e) = (double)in_ST2;
  }
  return;
}



/* ---- FUN_1020_1666 @ 1020:1666  (660 octets) ---- */

void __stdcall16far FUN_1020_1666(undefined4 param_1)

{
  long lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  undefined2 unaff_SS;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined *puVar10;
  undefined local_21e [256];
  int local_11e;
  undefined4 local_11c;
  undefined2 local_118;
  undefined2 local_116;
  undefined2 local_114;
  undefined2 local_112;
  undefined local_110 [256];
  undefined2 local_10;
  int local_e;
  int local_c;
  int local_a;
  int local_8;
  int local_6;
  
  local_6 = 0x1671;
  FUN_1158_0444();
  local_118 = 0;
  local_116 = 0;
  uVar5 = (undefined2)((ulong)param_1 >> 0x10);
  iVar4 = (int)param_1;
  local_112 = *(undefined2 *)((int)*(undefined4 *)(iVar4 + 0x228) + 0x24);
  local_114 = *(undefined2 *)((int)*(undefined4 *)(iVar4 + 0x228) + 0x22);
  uVar8 = *(undefined4 *)((int)*(undefined4 *)(iVar4 + 0x228) + 0x8a);
  FUN_1128_1ce5((int)uVar8,(int)((ulong)uVar8 >> 0x10),&local_118,unaff_SS);
  iVar2 = FUN_1020_137f(iVar4,uVar5);
  if (0 < iVar2) {
    uVar6 = (undefined2)((ulong)*(undefined4 *)(iVar4 + 400) >> 0x10);
    iVar2 = (int)*(undefined4 *)(iVar4 + 400);
    uVar8 = *(undefined4 *)((int)*(undefined4 *)(iVar4 + 0x228) + 0x8a);
    FUN_1128_2099((int)uVar8,(int)((ulong)uVar8 >> 0x10),*(undefined2 *)(iVar2 + 0x34),
                  *(undefined2 *)(iVar2 + 0x36));
    local_8 = *(int *)((int)*(undefined4 *)(iVar4 + 0x228) + 0x22);
    iVar2 = *(int *)((int)*(undefined4 *)(iVar4 + 0x1f8) + 0xda);
    local_a = iVar2 + 1;
    if (SCARRY2(iVar2,1)) {
      local_a = FUN_1158_043e(0x1128);
    }
    uVar6 = 0x1020;
    iVar2 = FUN_1020_1405(iVar4,uVar5);
    iVar3 = local_8 + -4;
    if (SBORROW2(local_8,4)) {
      uVar6 = 0x1158;
      iVar3 = FUN_1158_043e(0x1020);
    }
    uVar8 = CONCAT22(iVar3 / iVar2,local_a + -1);
    uVar7 = uVar6;
    if (SBORROW2(local_a,1)) {
      uVar7 = 0x1158;
      uVar8 = FUN_1158_043e(uVar6);
    }
    iVar2 = (int)((ulong)uVar8 >> 0x10);
    local_c = (int)uVar8 + iVar2;
    if (SCARRY2((int)uVar8,iVar2)) {
      local_c = FUN_1158_043e(uVar7);
    }
    iVar2 = FUN_1020_13c6(iVar4,uVar5);
    if (iVar2 < local_c) {
      local_c = FUN_1020_13c6(iVar4,uVar5);
    }
    local_11c = *(undefined4 *)((int)*(undefined4 *)(iVar4 + 0x228) + 0x8a);
    local_11e = local_c;
    iVar2 = local_a;
    if (local_a <= local_c) {
      while( true ) {
        uVar7 = 0x1020;
        uVar6 = FUN_1020_1405(iVar4,uVar5);
        uVar8 = CONCAT22(uVar6,iVar2 - local_a);
        if (SBORROW2(iVar2,local_a)) {
          uVar7 = 0x1158;
          uVar8 = FUN_1158_043e(0x1020);
        }
        uVar9 = CONCAT22((int)((ulong)uVar8 >> 0x10),(int)uVar8 + 1);
        uVar6 = uVar7;
        if (SCARRY2((int)uVar8,1)) {
          uVar6 = 0x1158;
          uVar9 = FUN_1158_043e(uVar7);
        }
        lVar1 = (long)(int)uVar9 * (long)(int)((ulong)uVar9 >> 0x10);
        iVar3 = (int)lVar1;
        if (iVar3 != lVar1) {
          iVar3 = FUN_1158_043e(uVar6);
        }
        local_e = iVar3;
        FUN_1128_1db8((int)local_11c,(int)((ulong)local_11c >> 0x10),0,iVar3);
        FUN_1128_1d7b((int)local_11c,(int)((ulong)local_11c >> 0x10),2,local_e);
        if (iVar2 == local_11e) break;
        iVar2 = iVar2 + 1;
      }
    }
    uVar8 = *(undefined4 *)((int)*(undefined4 *)(iVar4 + 0x228) + 0x8a);
    local_11c._2_2_ = (undefined2)((ulong)uVar8 >> 0x10);
    local_11c._0_2_ = (undefined2)uVar8;
    local_11e = local_c;
    iVar2 = local_a;
    if (local_a <= local_c) {
      while( true ) {
        puVar10 = local_21e;
        uVar6 = unaff_SS;
        FUN_1150_08a9(iVar2,iVar2 >> 0xf);
        FUN_1158_17e7(0xff,local_110,unaff_SS,puVar10,uVar6);
        local_6 = FUN_1128_2003((undefined2)local_11c,local_11c._2_2_,local_110,unaff_SS);
        uVar7 = 0x1020;
        uVar6 = FUN_1020_1405(iVar4,uVar5);
        uVar8 = CONCAT22(uVar6,iVar2 - local_a);
        if (SBORROW2(iVar2,local_a)) {
          uVar7 = 0x1158;
          uVar8 = FUN_1158_043e(0x1020);
        }
        uVar9 = CONCAT22((int)((ulong)uVar8 >> 0x10),(int)uVar8 + 1);
        uVar6 = uVar7;
        if (SCARRY2((int)uVar8,1)) {
          uVar6 = 0x1158;
          uVar9 = FUN_1158_043e(uVar7);
        }
        lVar1 = (long)(int)uVar9 * (long)(int)((ulong)uVar9 >> 0x10);
        iVar3 = (int)lVar1;
        uVar7 = uVar6;
        if (iVar3 != lVar1) {
          uVar7 = 0x1158;
          iVar3 = FUN_1158_043e(uVar6);
        }
        local_e = iVar3 - local_6 / 2;
        uVar6 = uVar7;
        if (SBORROW2(iVar3,local_6 / 2)) {
          uVar6 = 0x1158;
          local_e = iVar3;
          local_e = FUN_1158_043e(uVar7);
        }
        local_10 = 1;
        iVar3 = local_e + local_6;
        if (SCARRY2(local_e,local_6)) {
          iVar3 = FUN_1158_043e(uVar6);
        }
        if (0 < local_e && iVar3 < local_8) {
          puVar10 = local_21e;
          uVar6 = unaff_SS;
          uVar7 = local_10;
          iVar3 = local_e;
          FUN_1150_08a9(iVar2,iVar2 >> 0xf);
          FUN_1128_1f09((undefined2)local_11c,local_11c._2_2_,puVar10,uVar6,uVar7,iVar3);
        }
        if (iVar2 == local_11e) break;
        iVar2 = iVar2 + 1;
      }
    }
  }
  return;
}



/* ---- FUN_1020_271c @ 1020:271c  (383 octets) ---- */

void __stdcall16far FUN_1020_271c(undefined4 param_1)

{
  undefined2 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined2 uVar8;
  undefined2 uVar9;
  undefined2 unaff_SS;
  undefined *puVar10;
  undefined local_20e [256];
  int local_10e;
  undefined local_108 [256];
  int local_8;
  int local_6;
  
  local_6 = 0x2727;
  FUN_1158_0444();
  uVar8 = (undefined2)((ulong)param_1 >> 0x10);
  iVar5 = (int)param_1;
  FUN_1020_31d0(iVar5,uVar8,1);
  *(undefined *)(iVar5 + 0x88c) = 0;
  FUN_1130_1275((int)*(undefined4 *)(iVar5 + 0x1bc),
                (int)((ulong)*(undefined4 *)(iVar5 + 0x1bc) >> 0x10),1);
  FUN_1130_1275((int)*(undefined4 *)(iVar5 + 0x1c0),
                (int)((ulong)*(undefined4 *)(iVar5 + 0x1c0) >> 0x10),0);
  FUN_1110_2470((int)*(undefined4 *)(iVar5 + 0x3f8),
                (int)((ulong)*(undefined4 *)(iVar5 + 0x3f8) >> 0x10),1);
  uVar9 = (undefined2)((ulong)*(undefined4 *)(iVar5 + 0x198) >> 0x10);
  iVar6 = (int)*(undefined4 *)(iVar5 + 0x198);
  local_6 = 0x2d;
  if (SBORROW2(*(int *)(iVar6 + 0xe8),(uint)(*(int *)(iVar6 + 0xe6) == 0)) != false) {
    FUN_1158_043e(0x1110);
  }
  local_10e = FUN_1158_0416();
  if (0 < local_10e) {
    iVar6 = 1;
    while( true ) {
      puVar10 = local_20e;
      uVar9 = unaff_SS;
      FUN_10f8_9a68((int)*(undefined4 *)(iVar5 + 0x198),
                    (int)((ulong)*(undefined4 *)(iVar5 + 0x198) >> 0x10),0,iVar6);
      FUN_1158_17e7(0xff,local_108,unaff_SS,puVar10,uVar9);
      uVar9 = (undefined2)((ulong)*(undefined4 *)(iVar5 + 400) >> 0x10);
      iVar7 = (int)*(undefined4 *)(iVar5 + 400);
      uVar2 = *(undefined4 *)((int)*(undefined4 *)(iVar5 + 0x19c) + 0x8a);
      FUN_1128_2099((int)uVar2,(int)((ulong)uVar2 >> 0x10),*(undefined2 *)(iVar7 + 0x34),
                    *(undefined2 *)(iVar7 + 0x36));
      uVar2 = *(undefined4 *)((int)*(undefined4 *)(iVar5 + 0x19c) + 0x8a);
      iVar7 = FUN_1128_2003((int)uVar2,(int)((ulong)uVar2 >> 0x10),local_108,unaff_SS);
      iVar4 = iVar7 + 0x2d;
      if (SCARRY2(iVar7,0x2d)) {
        iVar4 = FUN_1158_043e(0x1128);
      }
      if (local_6 < iVar4) {
        local_6 = iVar4;
      }
      local_8 = iVar4;
      if (iVar6 == local_10e) break;
      iVar6 = iVar6 + 1;
    }
  }
  FUN_1138_17bf((int)*(undefined4 *)(iVar5 + 400),(int)((ulong)*(undefined4 *)(iVar5 + 400) >> 0x10)
                ,local_6);
  puVar3 = (undefined4 *)*(undefined4 *)(iVar5 + 0x19c);
  puVar1 = (undefined2 *)((int)*puVar3 + 0x44);
  (*(code *)*puVar1)(0x1138,(undefined4 *)puVar3,(int)((ulong)puVar3 >> 0x10));
  FUN_1138_1c77((int)*(undefined4 *)(iVar5 + 0x1f0),
                (int)((ulong)*(undefined4 *)(iVar5 + 0x1f0) >> 0x10),0);
  FUN_1138_1c77((int)*(undefined4 *)(iVar5 + 0x194),
                (int)((ulong)*(undefined4 *)(iVar5 + 0x194) >> 0x10),1);
  FUN_1138_1672((int)*(undefined4 *)(iVar5 + 0x194),
                (int)((ulong)*(undefined4 *)(iVar5 + 0x194) >> 0x10),5);
  return;
}



/* ---- FUN_1020_28b7 @ 1020:28b7  (747 octets) ---- */

void __stdcall16far FUN_1020_28b7(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  undefined2 unaff_SS;
  undefined *puVar7;
  undefined local_30e [6];
  undefined local_308 [250];
  int local_20e;
  undefined4 local_20c;
  int local_208;
  int local_206;
  int local_204;
  byte local_202 [256];
  byte local_102 [252];
  undefined2 uStack_6;
  
  uStack_6 = 0x28c2;
  FUN_1158_0444();
  uVar5 = (undefined2)((ulong)param_1 >> 0x10);
  iVar3 = (int)param_1;
  FUN_1020_31d0(iVar3,uVar5,1);
  *(undefined *)(iVar3 + 0x88c) = 1;
  FUN_1138_2258((int)*(undefined4 *)(iVar3 + 0x184),
                (int)((ulong)*(undefined4 *)(iVar3 + 0x184) >> 0x10));
  FUN_1138_1c77((int)*(undefined4 *)(iVar3 + 0x194),
                (int)((ulong)*(undefined4 *)(iVar3 + 0x194) >> 0x10),0);
  FUN_1138_1c77((int)*(undefined4 *)(iVar3 + 0x1f0),
                (int)((ulong)*(undefined4 *)(iVar3 + 0x1f0) >> 0x10),1);
  FUN_1138_1672((int)*(undefined4 *)(iVar3 + 0x1f0),
                (int)((ulong)*(undefined4 *)(iVar3 + 0x1f0) >> 0x10),5);
  FUN_1130_1275((int)*(undefined4 *)(iVar3 + 0x1bc),
                (int)((ulong)*(undefined4 *)(iVar3 + 0x1bc) >> 0x10),0);
  FUN_1130_1275((int)*(undefined4 *)(iVar3 + 0x1c0),
                (int)((ulong)*(undefined4 *)(iVar3 + 0x1c0) >> 0x10),1);
  FUN_1110_2470((int)*(undefined4 *)(iVar3 + 0x3f8),
                (int)((ulong)*(undefined4 *)(iVar3 + 0x3f8) >> 0x10),0);
  uVar6 = (undefined2)((ulong)*(undefined4 *)(iVar3 + 0x198) >> 0x10);
  iVar4 = (int)*(undefined4 *)(iVar3 + 0x198);
  local_206 = 0x2d;
  if (SBORROW2(*(int *)(iVar4 + 0xe8),(uint)(*(int *)(iVar4 + 0xe6) == 0)) != false) {
    FUN_1158_043e(0x1110);
  }
  local_20e = FUN_1158_0416();
  if (0 < local_20e) {
    local_204 = 1;
    while( true ) {
      puVar7 = local_30e;
      uVar6 = unaff_SS;
      FUN_10f8_9a68((int)*(undefined4 *)(iVar3 + 0x198),
                    (int)((ulong)*(undefined4 *)(iVar3 + 0x198) >> 0x10),0,local_204);
      FUN_1158_17e7(0xff,local_102,unaff_SS,puVar7,uVar6);
      uVar6 = (undefined2)((ulong)*(undefined4 *)(iVar3 + 400) >> 0x10);
      iVar4 = (int)*(undefined4 *)(iVar3 + 400);
      uVar1 = *(undefined4 *)((int)*(undefined4 *)(iVar3 + 0x19c) + 0x8a);
      FUN_1128_2099((int)uVar1,(int)((ulong)uVar1 >> 0x10),*(undefined2 *)(iVar4 + 0x34),
                    *(undefined2 *)(iVar4 + 0x36));
      uVar1 = *(undefined4 *)((int)*(undefined4 *)(iVar3 + 0x19c) + 0x8a);
      iVar4 = FUN_1128_2003((int)uVar1,(int)((ulong)uVar1 >> 0x10),local_102,unaff_SS);
      iVar2 = iVar4 + 0x2d;
      if (SCARRY2(iVar4,0x2d)) {
        iVar2 = FUN_1158_043e(0x1128);
      }
      if (local_206 < iVar2) {
        local_206 = iVar2;
      }
      local_208 = iVar2;
      if (local_204 == local_20e) break;
      local_204 = local_204 + 1;
    }
  }
  FUN_1138_17bf((int)*(undefined4 *)(iVar3 + 400),(int)((ulong)*(undefined4 *)(iVar3 + 400) >> 0x10)
                ,local_206);
  local_20c = *(undefined4 *)(iVar3 + 0x224);
  uVar1 = *(undefined4 *)((int)local_20c + 0x34);
  iVar4 = FUN_1128_11cc((int)uVar1,(int)((ulong)uVar1 >> 0x10));
  iVar2 = (int)((long)iVar4 * 2);
  if ((long)iVar2 != (long)iVar4 * 2) {
    iVar2 = FUN_1158_043e(0x1128);
  }
  FUN_1138_17e1((int)local_20c,(int)((ulong)local_20c >> 0x10),iVar2);
  puVar7 = local_308;
  uVar6 = unaff_SS;
  FUN_1020_122d(iVar3,uVar5,2,0xc,*(undefined2 *)(iVar3 + 0x86e),*(undefined2 *)(iVar3 + 0x870),
                *(undefined2 *)(iVar3 + 0x872),*(undefined2 *)(iVar3 + 0x874));
  FUN_1158_184c(0x28a3,0x1020);
  FUN_1158_17e7(0xff,local_102,unaff_SS,puVar7,uVar6);
  puVar7 = local_308;
  uVar6 = unaff_SS;
  FUN_1020_122d(iVar3,uVar5,2,0xc,*(undefined2 *)(iVar3 + 0x876),*(undefined2 *)(iVar3 + 0x878),
                *(undefined2 *)(iVar3 + 0x87a),*(undefined2 *)(iVar3 + 0x87c));
  FUN_1158_184c(0x28a3,0x1020);
  FUN_1158_17e7(0xff,local_202,unaff_SS,puVar7,uVar6);
  if (local_102[0] < local_202[0]) {
    FUN_1158_17e7(0xff,local_102,unaff_SS,local_202,unaff_SS);
  }
  iVar4 = FUN_1158_1878(local_102,unaff_SS,0x28a6,0x1158);
  if (0 < iVar4) {
    FUN_1158_17e7(0xff,local_102,unaff_SS,0x28a8,0x1158);
  }
  local_20c._2_2_ = (undefined2)((ulong)*(undefined4 *)(iVar3 + 0x218) >> 0x10);
  local_20c._0_2_ = (int)*(undefined4 *)(iVar3 + 0x218);
  uVar1 = *(undefined4 *)((int)*(undefined4 *)(iVar3 + 0x21c) + 0x8a);
  FUN_1128_2099((int)uVar1,(int)((ulong)uVar1 >> 0x10),*(undefined2 *)((int)local_20c + 0x34),
                *(undefined2 *)((int)local_20c + 0x36));
  uVar1 = *(undefined4 *)((int)*(undefined4 *)(iVar3 + 0x21c) + 0x8a);
  uVar6 = FUN_1128_2003((int)uVar1,(int)((ulong)uVar1 >> 0x10),local_102,unaff_SS);
  FUN_1138_17bf((int)local_20c,local_20c._2_2_,uVar6);
  FUN_1020_345e(iVar3,uVar5);
  FUN_1138_226b((int)*(undefined4 *)(iVar3 + 0x184),
                (int)((ulong)*(undefined4 *)(iVar3 + 0x184) >> 0x10));
  return;
}



/* ---- FUN_1020_2ba2 @ 1020:2ba2  (56 octets) ---- */

void __stdcall16far FUN_1020_2ba2(undefined4 param_1,undefined2 param_2,undefined2 param_3)

{
  int iVar1;
  undefined2 uVar2;
  
  FUN_1158_0444();
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  if (*(char *)(iVar1 + 0x88c) == '\0') {
    FUN_1020_271c(iVar1,uVar2,param_2,param_3);
  }
  else {
    FUN_1020_28b7(iVar1,uVar2,param_2,param_3);
  }
  return;
}



/* ---- FUN_1020_2bda @ 1020:2bda  (69 octets) ---- */

void __stdcall16far FUN_1020_2bda(undefined4 param_1)

{
  undefined4 uVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  
  FUN_1158_0444();
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  FUN_1020_2c29((int)param_1,uVar2);
  uVar1 = *(undefined4 *)((int)param_1 + 0x2cc);
  uVar3 = (undefined2)((ulong)uVar1 >> 0x10);
  uVar2 = (undefined2)uVar1;
  FUN_1120_4a3f(uVar2,uVar3);
  FUN_1120_49ff(uVar2,uVar3);
  FUN_1120_49e3(uVar2,uVar3);
  return;
}



/* ---- FUN_1020_2c29 @ 1020:2c29  (323 octets) ---- */

void __stdcall16far FUN_1020_2c29(undefined4 param_1)

{
  undefined2 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined2 unaff_SS;
  undefined *puVar6;
  undefined *puVar7;
  undefined2 uVar8;
  undefined local_30e [256];
  undefined local_20e [2];
  undefined local_20c [254];
  int local_10e;
  int local_10c;
  undefined4 local_10a;
  int local_106;
  int local_104;
  undefined local_102 [252];
  undefined2 *puStack_6;
  
  puStack_6 = (undefined2 *)&DAT_1160_2c34;
  FUN_1158_0444();
  uVar4 = (undefined2)((ulong)param_1 >> 0x10);
  iVar3 = (int)param_1;
  FUN_1120_49e3((int)*(undefined4 *)(iVar3 + 0x2cc),
                (int)((ulong)*(undefined4 *)(iVar3 + 0x2cc) >> 0x10));
  local_10a = *(undefined4 *)(iVar3 + 0x198);
  uVar5 = (undefined2)((ulong)local_10a >> 0x10);
  if (SBORROW2(*(int *)((int)local_10a + 0x10c),(uint)(*(int *)((int)local_10a + 0x10a) == 0)) !=
      false) {
    FUN_1158_043e(0x1120);
  }
  local_10c = FUN_1158_0416();
  if (-1 < local_10c) {
    local_104 = 0;
    while( true ) {
      puVar7 = local_20c;
      uVar5 = unaff_SS;
      FUN_10f8_9a68((int)local_10a,(int)((ulong)local_10a >> 0x10),local_104,0);
      FUN_1158_17e7(0xff,local_102,unaff_SS,puVar7,uVar5);
      uVar5 = (undefined2)((ulong)local_10a >> 0x10);
      if (SBORROW2(*(int *)((int)local_10a + 0xe8),(uint)(*(int *)((int)local_10a + 0xe6) == 0)) !=
          false) {
        FUN_1158_043e(0x1158);
      }
      local_10e = FUN_1158_0416();
      if (0 < local_10e) {
        local_106 = 1;
        while( true ) {
          puVar7 = local_20e;
          uVar8 = unaff_SS;
          FUN_1158_17cd(local_102,unaff_SS);
          FUN_1158_184c(0x2c27,0x1158);
          puVar6 = local_30e;
          uVar5 = unaff_SS;
          FUN_10f8_9a68((int)local_10a,(int)((ulong)local_10a >> 0x10),local_104,local_106);
          FUN_1158_184c(puVar6,uVar5);
          FUN_1158_17e7(0xff,local_102,unaff_SS,puVar7,uVar8);
          if (local_106 == local_10e) break;
          local_106 = local_106 + 1;
        }
      }
      puVar2 = (undefined4 *)*(undefined4 *)((int)*(undefined4 *)(iVar3 + 0x2cc) + 0xec);
      puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
      (*(code *)*puVar1)(0x1158,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),local_102);
      if (local_104 == local_10c) break;
      local_104 = local_104 + 1;
    }
  }
  return;
}



/* ---- FUN_1020_31a1 @ 1020:31a1  (47 octets) ---- */

void __stdcall16far FUN_1020_31a1(undefined4 param_1)

{
  int iVar1;
  undefined2 uVar2;
  
  FUN_1158_0444();
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  FUN_1020_4bcb(iVar1,uVar2,*(undefined2 *)(iVar1 + 0x448),*(undefined2 *)(iVar1 + 0x44a));
  FUN_1140_63a9((int)DAT_1160_2c2e,(int)((ulong)DAT_1160_2c2e >> 0x10),0);
  return;
}



/* ---- FUN_1020_31d0 @ 1020:31d0  (109 octets) ---- */

void __stdcall16far FUN_1020_31d0(undefined4 param_1,undefined param_2)

{
  undefined extraout_AH;
  undefined extraout_AH_00;
  undefined extraout_AH_01;
  undefined extraout_AH_02;
  undefined extraout_AH_03;
  int iVar1;
  undefined2 uVar2;
  
  FUN_1158_0444();
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  FUN_1138_1c77((int)*(undefined4 *)(iVar1 + 0x17c),
                (int)((ulong)*(undefined4 *)(iVar1 + 0x17c) >> 0x10),CONCAT11(extraout_AH,param_2));
  FUN_1130_129b((int)*(undefined4 *)(iVar1 + 0x1b4),
                (int)((ulong)*(undefined4 *)(iVar1 + 0x1b4) >> 0x10),
                CONCAT11(extraout_AH_00,param_2));
  FUN_1130_129b((int)*(undefined4 *)(iVar1 + 0x1b8),
                (int)((ulong)*(undefined4 *)(iVar1 + 0x1b8) >> 0x10),
                CONCAT11(extraout_AH_01,param_2));
  FUN_1130_129b((int)*(undefined4 *)(iVar1 + 0x3b4),
                (int)((ulong)*(undefined4 *)(iVar1 + 0x3b4) >> 0x10),
                CONCAT11(extraout_AH_02,param_2));
  FUN_1130_129b((int)*(undefined4 *)(iVar1 + 0x238),
                (int)((ulong)*(undefined4 *)(iVar1 + 0x238) >> 0x10),
                CONCAT11(extraout_AH_03,param_2));
  return;
}



/* ---- FUN_1020_323d @ 1020:323d  (185 octets) ---- */

void __stdcall16far FUN_1020_323d(undefined4 param_1,undefined param_2)

{
  undefined extraout_AH;
  undefined extraout_AH_00;
  undefined extraout_AH_01;
  undefined extraout_AH_02;
  undefined extraout_AH_03;
  undefined extraout_AH_04;
  undefined extraout_AH_05;
  undefined extraout_AH_06;
  undefined extraout_AH_07;
  int iVar1;
  undefined2 uVar2;
  
  FUN_1158_0444();
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  FUN_1130_129b((int)*(undefined4 *)(iVar1 + 0x1b4),
                (int)((ulong)*(undefined4 *)(iVar1 + 0x1b4) >> 0x10),CONCAT11(extraout_AH,param_2));
  FUN_1138_1cb8((int)*(undefined4 *)(iVar1 + 0x3f0),
                (int)((ulong)*(undefined4 *)(iVar1 + 0x3f0) >> 0x10),
                CONCAT11(extraout_AH_00,param_2));
  FUN_1130_129b((int)*(undefined4 *)(iVar1 + 0x1b8),
                (int)((ulong)*(undefined4 *)(iVar1 + 0x1b8) >> 0x10),
                CONCAT11(extraout_AH_01,param_2));
  FUN_1138_1cb8((int)*(undefined4 *)(iVar1 + 0x3f4),
                (int)((ulong)*(undefined4 *)(iVar1 + 0x3f4) >> 0x10),
                CONCAT11(extraout_AH_02,param_2));
  FUN_1138_1cb8((int)*(undefined4 *)(iVar1 + 0x3f8),
                (int)((ulong)*(undefined4 *)(iVar1 + 0x3f8) >> 0x10),
                CONCAT11(extraout_AH_03,param_2));
  FUN_1138_1cb8((int)*(undefined4 *)(iVar1 + 0x3fc),
                (int)((ulong)*(undefined4 *)(iVar1 + 0x3fc) >> 0x10),
                CONCAT11(extraout_AH_04,param_2));
  FUN_1138_1cb8((int)*(undefined4 *)(iVar1 + 0x400),
                (int)((ulong)*(undefined4 *)(iVar1 + 0x400) >> 0x10),
                CONCAT11(extraout_AH_05,param_2));
  FUN_1138_1cb8((int)*(undefined4 *)(iVar1 + 0x404),
                (int)((ulong)*(undefined4 *)(iVar1 + 0x404) >> 0x10),
                CONCAT11(extraout_AH_06,param_2));
  FUN_1138_1cb8((int)*(undefined4 *)(iVar1 + 0x40c),
                (int)((ulong)*(undefined4 *)(iVar1 + 0x40c) >> 0x10),
                CONCAT11(extraout_AH_07,param_2));
  return;
}



/* ---- FUN_1020_3310 @ 1020:3310  (252 octets) ---- */

void __stdcall16far FUN_1020_3310(undefined4 param_1)

{
  int iVar1;
  char cVar2;
  undefined2 uVar3;
  int iVar4;
  undefined2 uVar5;
  int iStack_e;
  undefined *puStack_c;
  undefined2 uStack_a;
  undefined2 uStack_8;
  undefined2 local_6;
  
  local_6 = 0x331b;
  FUN_1158_0444();
  uVar5 = (undefined2)((ulong)param_1 >> 0x10);
  iVar4 = (int)param_1;
  uStack_8 = (undefined2)((ulong)*(undefined4 *)(iVar4 + 0x1e8) >> 0x10);
  uStack_a = (undefined2)*(undefined4 *)(iVar4 + 0x1e8);
  puStack_c = (undefined *)0x1158;
  iStack_e = 0x332d;
  cVar2 = FUN_1108_2f17();
  if (cVar2 != '\0') {
    uStack_8 = 0;
    uStack_a = (undefined2)((ulong)*(undefined4 *)(iVar4 + 0x3ec) >> 0x10);
    puStack_c = (undefined *)*(undefined4 *)(iVar4 + 0x3ec);
    iStack_e = 0x1108;
    FUN_1138_1c77();
    uStack_8 = 0;
    uStack_a = (undefined2)((ulong)*(undefined4 *)(iVar4 + 0x410) >> 0x10);
    puStack_c = (undefined *)*(undefined4 *)(iVar4 + 0x410);
    iStack_e = 0x1138;
    FUN_1138_1c77();
    uStack_8 = 1;
    uStack_a = (undefined2)((ulong)*(undefined4 *)(iVar4 + 0x420) >> 0x10);
    puStack_c = (undefined *)*(undefined4 *)(iVar4 + 0x420);
    iStack_e = 0x1138;
    FUN_1138_1c77();
    uVar3 = *(undefined2 *)(iVar4 + 0x3a);
    uStack_8 = 0x1138;
    uStack_a = 0x337a;
    local_6 = FUN_1158_0416();
    uStack_8 = 0xff;
    uStack_a = 0xffff;
    iStack_e = iVar4;
    puStack_c = (undefined *)uVar5;
    FUN_1138_1ed5();
    uStack_8 = 0x1138;
    uStack_a = 0x32fe;
    iStack_e = (int)DAT_1160_1858;
    DAT_1160_1858 = &iStack_e;
    iVar1 = iVar4;
    puStack_c = &stack0xfffe;
    FUN_1140_5a2d(iVar4,uVar5);
    DAT_1160_1858 = (int *)iVar1;
    puStack_c = (undefined *)0x1140;
    iStack_e = 0x33c3;
    iStack_e = FUN_1158_0416();
    puStack_c = (undefined *)uVar3;
    FUN_1138_1ed5(iVar4,uVar5);
    puStack_c = (undefined *)0x0;
    iStack_e = (int)((ulong)*(undefined4 *)(iVar4 + 0x420) >> 0x10);
    FUN_1138_1c77((int)*(undefined4 *)(iVar4 + 0x420));
    puStack_c = (undefined *)0x1;
    iStack_e = (int)((ulong)*(undefined4 *)(iVar4 + 0x410) >> 0x10);
    FUN_1138_1c77((int)*(undefined4 *)(iVar4 + 0x410));
    puStack_c = (undefined *)0x1;
    iStack_e = (int)((ulong)*(undefined4 *)(iVar4 + 0x3ec) >> 0x10);
    FUN_1138_1c77((int)*(undefined4 *)(iVar4 + 0x3ec));
    puStack_c = (undefined *)((ulong)DAT_1160_2c2a >> 0x10);
    iStack_e = (int)DAT_1160_2c2a;
    FUN_1140_7303();
  }
  return;
}



/* ---- FUN_1020_3411 @ 1020:3411  (24 octets) ---- */

void __stdcall16far FUN_1020_3411(undefined4 param_1)

{
  FUN_1158_0444();
  FUN_1140_5556((int)param_1,(int)((ulong)param_1 >> 0x10));
  return;
}



/* ---- FUN_1020_3429 @ 1020:3429  (29 octets) ---- */

void __stdcall16far FUN_1020_3429(undefined4 param_1)

{
  undefined4 uVar1;
  
  FUN_1158_0444();
  uVar1 = *(undefined4 *)((int)param_1 + 0x1e4);
  FUN_1108_2e41((int)uVar1,(int)((ulong)uVar1 >> 0x10));
  return;
}



/* ---- FUN_1020_3446 @ 1020:3446  (24 octets) ---- */

void __stdcall16far FUN_1020_3446(undefined4 param_1)

{
  FUN_1158_0444();
  FUN_1020_2bda((int)param_1,(int)((ulong)param_1 >> 0x10));
  return;
}



/* ---- FUN_1020_345e @ 1020:345e  (157 octets) ---- */

void __stdcall16far FUN_1020_345e(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined2 uVar7;
  undefined2 uVar8;
  undefined2 uVar9;
  
  FUN_1158_0444();
  uVar7 = (undefined2)((ulong)param_1 >> 0x10);
  iVar6 = (int)param_1;
  iVar2 = FUN_1020_1405(iVar6,uVar7);
  iVar2 = *(int *)((int)*(undefined4 *)(iVar6 + 0x230) + 0x22) / iVar2;
  uVar8 = (undefined2)((ulong)*(undefined4 *)(iVar6 + 0x1f8) >> 0x10);
  iVar1 = (int)*(undefined4 *)(iVar6 + 0x1f8);
  uVar3 = FUN_1020_13c6(iVar6,uVar7);
  uVar4 = uVar3 & 0xff00;
  if (iVar2 < (int)uVar3) {
    uVar4 = uVar4 + 1;
  }
  FUN_1138_1c77(iVar1,uVar8,uVar4);
  if (*(char *)(iVar1 + 0x29) != '\0') {
    uVar9 = 0x1020;
    iVar6 = FUN_1020_13c6(iVar6,uVar7);
    iVar5 = iVar6 - iVar2;
    if (SBORROW2(iVar6,iVar2)) {
      uVar9 = 0x1158;
      iVar5 = FUN_1158_043e(0x1020);
    }
    iVar2 = iVar5 + 1;
    if (SCARRY2(iVar5,1)) {
      iVar2 = FUN_1158_043e(uVar9);
    }
    FUN_1120_85a8(iVar1,uVar8,iVar2);
  }
  FUN_1120_856c(iVar1,uVar8,*(undefined2 *)(iVar1 + 0xdc));
  return;
}



/* ---- FUN_1020_34fb @ 1020:34fb  (50 octets) ---- */

void __stdcall16far
FUN_1020_34fb(undefined4 param_1,undefined2 param_2_00,undefined2 param_3,char param_2)

{
  undefined4 uVar1;
  undefined2 uVar2;
  
  FUN_1158_0444();
  if (param_2 == '\b') {
    uVar2 = (undefined2)((ulong)param_1 >> 0x10);
    uVar1 = *(undefined4 *)((int)param_1 + 0x220);
    FUN_1138_2258((int)uVar1,(int)((ulong)uVar1 >> 0x10));
    uVar1 = *(undefined4 *)((int)param_1 + 0x220);
    FUN_1138_226b((int)uVar1,(int)((ulong)uVar1 >> 0x10));
  }
  return;
}



/* ---- FUN_1020_352d @ 1020:352d  (24 octets) ---- */

void __stdcall16far FUN_1020_352d(undefined4 param_1)

{
  FUN_1158_0444();
  FUN_1020_345e((int)param_1,(int)((ulong)param_1 >> 0x10));
  return;
}



/* ---- FUN_1020_3545 @ 1020:3545  (273 octets) ---- */

void __stdcall16far FUN_1020_3545(undefined4 param_1)

{
  undefined4 uVar1;
  undefined2 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  undefined2 uVar8;
  undefined2 unaff_SS;
  undefined2 local_10e;
  undefined2 local_10c;
  undefined2 local_10a;
  undefined2 local_108;
  undefined local_106 [256];
  int local_6;
  
  local_6 = 0x3550;
  FUN_1158_0444();
  local_10e = 0;
  local_10c = 0;
  uVar6 = (undefined2)((ulong)param_1 >> 0x10);
  iVar4 = (int)param_1;
  local_108 = *(undefined2 *)((int)*(undefined4 *)(iVar4 + 0x208) + 0x24);
  local_10a = *(undefined2 *)((int)*(undefined4 *)(iVar4 + 0x208) + 0x22);
  uVar1 = *(undefined4 *)((int)*(undefined4 *)(iVar4 + 0x208) + 0x8a);
  FUN_1128_1ce5((int)uVar1,(int)((ulong)uVar1 >> 0x10),&local_10e,unaff_SS);
  uVar7 = (undefined2)((ulong)*(undefined4 *)(iVar4 + 0x208) >> 0x10);
  iVar5 = (int)*(undefined4 *)(iVar4 + 0x208);
  uVar8 = (undefined2)((ulong)*(undefined4 *)(iVar5 + 0x8a) >> 0x10);
  uVar2 = (undefined2)*(undefined4 *)(iVar5 + 0x8a);
  FUN_1158_17e7(0xff,local_106,unaff_SS,iVar4 + 0x65c,uVar6);
  uVar6 = 0x1128;
  iVar4 = FUN_1128_2003(uVar2,uVar8,local_106,unaff_SS);
  iVar3 = *(int *)(iVar5 + 0x24) - iVar4;
  if (SBORROW2(*(int *)(iVar5 + 0x24),iVar4)) {
    uVar6 = 0x1158;
    iVar3 = FUN_1158_043e(0x1128);
  }
  iVar4 = *(int *)(iVar5 + 0x24) - iVar3 / 2;
  if (SBORROW2(*(int *)(iVar5 + 0x24),iVar3 / 2)) {
    iVar4 = FUN_1158_043e(uVar6);
  }
  local_6 = iVar4;
  iVar4 = FUN_1128_204e(uVar2,uVar8,local_106,unaff_SS);
  iVar3 = *(int *)(iVar5 + 0x22) - iVar4;
  if (SBORROW2(*(int *)(iVar5 + 0x22),iVar4)) {
    iVar3 = FUN_1158_043e(0x1128);
  }
  FUN_1128_1f09(uVar2,uVar8,local_106,unaff_SS,local_6,iVar3 / 2);
  return;
}



/* ---- FUN_1020_3656 @ 1020:3656  (273 octets) ---- */

void __stdcall16far FUN_1020_3656(undefined4 param_1)

{
  undefined4 uVar1;
  undefined2 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  undefined2 uVar8;
  undefined2 unaff_SS;
  undefined2 local_10e;
  undefined2 local_10c;
  undefined2 local_10a;
  undefined2 local_108;
  undefined local_106 [256];
  int local_6;
  
  local_6 = 0x3661;
  FUN_1158_0444();
  local_10e = 0;
  local_10c = 0;
  uVar6 = (undefined2)((ulong)param_1 >> 0x10);
  iVar4 = (int)param_1;
  local_108 = *(undefined2 *)((int)*(undefined4 *)(iVar4 + 0x210) + 0x24);
  local_10a = *(undefined2 *)((int)*(undefined4 *)(iVar4 + 0x210) + 0x22);
  uVar1 = *(undefined4 *)((int)*(undefined4 *)(iVar4 + 0x210) + 0x8a);
  FUN_1128_1ce5((int)uVar1,(int)((ulong)uVar1 >> 0x10),&local_10e,unaff_SS);
  uVar7 = (undefined2)((ulong)*(undefined4 *)(iVar4 + 0x210) >> 0x10);
  iVar5 = (int)*(undefined4 *)(iVar4 + 0x210);
  uVar8 = (undefined2)((ulong)*(undefined4 *)(iVar5 + 0x8a) >> 0x10);
  uVar2 = (undefined2)*(undefined4 *)(iVar5 + 0x8a);
  FUN_1158_17e7(0xff,local_106,unaff_SS,iVar4 + 0x75c,uVar6);
  iVar4 = FUN_1128_2003(uVar2,uVar8,local_106,unaff_SS);
  iVar3 = *(int *)(iVar5 + 0x24) - iVar4;
  if (SBORROW2(*(int *)(iVar5 + 0x24),iVar4)) {
    iVar3 = FUN_1158_043e(0x1128);
  }
  local_6 = iVar3 / 2;
  uVar6 = 0x1128;
  iVar4 = FUN_1128_204e(uVar2,uVar8,local_106,unaff_SS);
  iVar3 = *(int *)(iVar5 + 0x22) - iVar4;
  if (SBORROW2(*(int *)(iVar5 + 0x22),iVar4)) {
    uVar6 = 0x1158;
    iVar3 = FUN_1158_043e(0x1128);
  }
  iVar4 = *(int *)(iVar5 + 0x22) - iVar3 / 2;
  if (SBORROW2(*(int *)(iVar5 + 0x22),iVar3 / 2)) {
    iVar4 = FUN_1158_043e(uVar6);
  }
  FUN_1128_1f09(uVar2,uVar8,local_106,unaff_SS,local_6,iVar4);
  return;
}



/* ---- FUN_1020_3767 @ 1020:3767  (136 octets) ---- */

void __stdcall16far FUN_1020_3767(undefined4 param_1,byte *param_2)

{
  byte *pbVar1;
  byte *pbVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  byte *pbVar6;
  int iVar7;
  int iVar8;
  undefined2 uVar9;
  undefined2 uVar10;
  undefined2 unaff_SS;
  byte local_102;
  byte abStack_101 [251];
  undefined2 uStack_6;
  
  uStack_6 = 0x3772;
  FUN_1158_0444();
  pbVar6 = (byte *)param_2;
  local_102 = *param_2;
  pbVar2 = abStack_101;
  for (uVar5 = (uint)local_102; pbVar6 = pbVar6 + 1, uVar5 != 0; uVar5 = uVar5 - 1) {
    pbVar1 = pbVar2;
    pbVar2 = pbVar2 + 1;
    *pbVar1 = *pbVar6;
  }
  uVar9 = (undefined2)((ulong)param_1 >> 0x10);
  iVar7 = (int)param_1;
  FUN_1158_17e7(0xff,iVar7 + 0x45c,uVar9,&local_102,unaff_SS);
  uVar10 = (undefined2)((ulong)*(undefined4 *)(iVar7 + 0x234) >> 0x10);
  iVar8 = (int)*(undefined4 *)(iVar7 + 0x234);
  iVar3 = FUN_1128_11cc((int)*(undefined4 *)(iVar8 + 0x34),
                        (int)((ulong)*(undefined4 *)(iVar8 + 0x34) >> 0x10));
  iVar4 = (int)((long)iVar3 * 2);
  if ((long)iVar4 != (long)iVar3 * 2) {
    iVar4 = FUN_1158_043e(0x1128);
  }
  FUN_1138_17e1(iVar8,uVar10,iVar4);
  FUN_1138_1d8c(iVar8,uVar10,iVar7 + 0x45c,uVar9);
  return;
}



/* ---- FUN_1020_37ef @ 1020:37ef  (136 octets) ---- */

void __stdcall16far FUN_1020_37ef(undefined4 param_1,byte *param_2)

{
  byte *pbVar1;
  byte *pbVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  byte *pbVar6;
  int iVar7;
  int iVar8;
  undefined2 uVar9;
  undefined2 uVar10;
  undefined2 unaff_SS;
  byte local_102;
  byte abStack_101 [251];
  undefined2 uStack_6;
  
  uStack_6 = 0x37fa;
  FUN_1158_0444();
  pbVar6 = (byte *)param_2;
  local_102 = *param_2;
  pbVar2 = abStack_101;
  for (uVar5 = (uint)local_102; pbVar6 = pbVar6 + 1, uVar5 != 0; uVar5 = uVar5 - 1) {
    pbVar1 = pbVar2;
    pbVar2 = pbVar2 + 1;
    *pbVar1 = *pbVar6;
  }
  uVar9 = (undefined2)((ulong)param_1 >> 0x10);
  iVar7 = (int)param_1;
  FUN_1158_17e7(0xff,iVar7 + 0x55c,uVar9,&local_102,unaff_SS);
  uVar10 = (undefined2)((ulong)*(undefined4 *)(iVar7 + 0x200) >> 0x10);
  iVar8 = (int)*(undefined4 *)(iVar7 + 0x200);
  iVar3 = FUN_1128_11cc((int)*(undefined4 *)(iVar8 + 0x34),
                        (int)((ulong)*(undefined4 *)(iVar8 + 0x34) >> 0x10));
  iVar4 = (int)((long)iVar3 * 2);
  if ((long)iVar4 != (long)iVar3 * 2) {
    iVar4 = FUN_1158_043e(0x1128);
  }
  FUN_1138_17e1(iVar8,uVar10,iVar4);
  FUN_1138_1d8c(iVar8,uVar10,iVar7 + 0x55c,uVar9);
  return;
}



/* ---- FUN_1020_3877 @ 1020:3877  (139 octets) ---- */

void __stdcall16far FUN_1020_3877(undefined4 param_1,byte *param_2)

{
  byte *pbVar1;
  byte *pbVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  byte *pbVar7;
  int iVar8;
  int iVar9;
  undefined2 uVar10;
  undefined2 uVar11;
  undefined2 unaff_SS;
  byte local_102;
  byte abStack_101 [251];
  undefined2 uStack_6;
  
  uStack_6 = 0x3882;
  FUN_1158_0444();
  pbVar7 = (byte *)param_2;
  local_102 = *param_2;
  pbVar2 = abStack_101;
  for (uVar6 = (uint)local_102; pbVar7 = pbVar7 + 1, uVar6 != 0; uVar6 = uVar6 - 1) {
    pbVar1 = pbVar2;
    pbVar2 = pbVar2 + 1;
    *pbVar1 = *pbVar7;
  }
  uVar10 = (undefined2)((ulong)param_1 >> 0x10);
  iVar8 = (int)param_1;
  FUN_1158_17e7(0xff,iVar8 + 0x65c,uVar10,&local_102,unaff_SS);
  uVar11 = (undefined2)((ulong)*(undefined4 *)(iVar8 + 0x204) >> 0x10);
  iVar9 = (int)*(undefined4 *)(iVar8 + 0x204);
  uVar3 = *(undefined4 *)(iVar9 + 0x34);
  iVar4 = FUN_1128_11cc((int)uVar3,(int)((ulong)uVar3 >> 0x10));
  iVar5 = (int)((long)iVar4 * 2);
  if ((long)iVar5 != (long)iVar4 * 2) {
    iVar5 = FUN_1158_043e(0x1128);
  }
  FUN_1138_17bf(iVar9,uVar11,iVar5);
  FUN_1020_3b85(iVar8,uVar10,900,*(undefined2 *)(iVar8 + 0x208),*(undefined2 *)(iVar8 + 0x20a));
  return;
}



/* ---- FUN_1020_3902 @ 1020:3902  (139 octets) ---- */

void __stdcall16far FUN_1020_3902(undefined4 param_1,byte *param_2)

{
  byte *pbVar1;
  byte *pbVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  byte *pbVar7;
  int iVar8;
  int iVar9;
  undefined2 uVar10;
  undefined2 uVar11;
  undefined2 unaff_SS;
  byte local_102;
  byte abStack_101 [251];
  undefined2 uStack_6;
  
  uStack_6 = 0x390d;
  FUN_1158_0444();
  pbVar7 = (byte *)param_2;
  local_102 = *param_2;
  pbVar2 = abStack_101;
  for (uVar6 = (uint)local_102; pbVar7 = pbVar7 + 1, uVar6 != 0; uVar6 = uVar6 - 1) {
    pbVar1 = pbVar2;
    pbVar2 = pbVar2 + 1;
    *pbVar1 = *pbVar7;
  }
  uVar10 = (undefined2)((ulong)param_1 >> 0x10);
  iVar8 = (int)param_1;
  FUN_1158_17e7(0xff,iVar8 + 0x75c,uVar10,&local_102,unaff_SS);
  uVar11 = (undefined2)((ulong)*(undefined4 *)(iVar8 + 0x20c) >> 0x10);
  iVar9 = (int)*(undefined4 *)(iVar8 + 0x20c);
  uVar3 = *(undefined4 *)(iVar9 + 0x34);
  iVar4 = FUN_1128_11cc((int)uVar3,(int)((ulong)uVar3 >> 0x10));
  iVar5 = (int)((long)iVar4 * 2);
  if ((long)iVar5 != (long)iVar4 * 2) {
    iVar5 = FUN_1158_043e(0x1128);
  }
  FUN_1138_17bf(iVar9,uVar11,iVar5);
  FUN_1020_3b85(iVar8,uVar10,0xfc7c,*(undefined2 *)(iVar8 + 0x210),*(undefined2 *)(iVar8 + 0x212));
  return;
}



/* ---- FUN_1020_398d @ 1020:398d  (96 octets) ---- */

void __stdcall16far FUN_1020_398d(undefined4 param_1)

{
  byte extraout_AH;
  int iVar1;
  undefined extraout_AH_00;
  undefined extraout_AH_01;
  int iVar2;
  int iVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  
  FUN_1158_0444();
  uVar4 = (undefined2)((ulong)param_1 >> 0x10);
  iVar2 = (int)param_1;
  uVar5 = (undefined2)((ulong)*(undefined4 *)(iVar2 + 0x240) >> 0x10);
  iVar3 = (int)*(undefined4 *)(iVar2 + 0x240);
  iVar1 = (uint)extraout_AH * 0x100;
  if (*(char *)(iVar3 + 0x1f) == '\0') {
    iVar1 = iVar1 + 1;
  }
  FUN_1130_1275(iVar3,uVar5,iVar1);
  FUN_1138_1c77((int)*(undefined4 *)(iVar2 + 0x234),
                (int)((ulong)*(undefined4 *)(iVar2 + 0x234) >> 0x10),
                CONCAT11(extraout_AH_00,*(undefined *)(iVar3 + 0x1f)));
  FUN_1130_1275((int)*(undefined4 *)(iVar2 + 0x298),
                (int)((ulong)*(undefined4 *)(iVar2 + 0x298) >> 0x10),
                CONCAT11(extraout_AH_01,*(undefined *)(iVar3 + 0x1f)));
  return;
}



/* ---- FUN_1020_39ed @ 1020:39ed  (96 octets) ---- */

void __stdcall16far FUN_1020_39ed(undefined4 param_1)

{
  byte extraout_AH;
  int iVar1;
  undefined extraout_AH_00;
  undefined extraout_AH_01;
  int iVar2;
  int iVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  
  FUN_1158_0444();
  uVar4 = (undefined2)((ulong)param_1 >> 0x10);
  iVar2 = (int)param_1;
  uVar5 = (undefined2)((ulong)*(undefined4 *)(iVar2 + 0x244) >> 0x10);
  iVar3 = (int)*(undefined4 *)(iVar2 + 0x244);
  iVar1 = (uint)extraout_AH * 0x100;
  if (*(char *)(iVar3 + 0x1f) == '\0') {
    iVar1 = iVar1 + 1;
  }
  FUN_1130_1275(iVar3,uVar5,iVar1);
  FUN_1138_1c77((int)*(undefined4 *)(iVar2 + 0x204),
                (int)((ulong)*(undefined4 *)(iVar2 + 0x204) >> 0x10),
                CONCAT11(extraout_AH_00,*(undefined *)(iVar3 + 0x1f)));
  FUN_1130_1275((int)*(undefined4 *)(iVar2 + 0x294),
                (int)((ulong)*(undefined4 *)(iVar2 + 0x294) >> 0x10),
                CONCAT11(extraout_AH_01,*(undefined *)(iVar3 + 0x1f)));
  return;
}



/* ---- FUN_1020_3a4d @ 1020:3a4d  (96 octets) ---- */

void __stdcall16far FUN_1020_3a4d(undefined4 param_1)

{
  byte extraout_AH;
  int iVar1;
  undefined extraout_AH_00;
  undefined extraout_AH_01;
  int iVar2;
  int iVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  
  FUN_1158_0444();
  uVar4 = (undefined2)((ulong)param_1 >> 0x10);
  iVar2 = (int)param_1;
  uVar5 = (undefined2)((ulong)*(undefined4 *)(iVar2 + 0x248) >> 0x10);
  iVar3 = (int)*(undefined4 *)(iVar2 + 0x248);
  iVar1 = (uint)extraout_AH * 0x100;
  if (*(char *)(iVar3 + 0x1f) == '\0') {
    iVar1 = iVar1 + 1;
  }
  FUN_1130_1275(iVar3,uVar5,iVar1);
  FUN_1138_1c77((int)*(undefined4 *)(iVar2 + 0x20c),
                (int)((ulong)*(undefined4 *)(iVar2 + 0x20c) >> 0x10),
                CONCAT11(extraout_AH_00,*(undefined *)(iVar3 + 0x1f)));
  FUN_1130_1275((int)*(undefined4 *)(iVar2 + 0x290),
                (int)((ulong)*(undefined4 *)(iVar2 + 0x290) >> 0x10),
                CONCAT11(extraout_AH_01,*(undefined *)(iVar3 + 0x1f)));
  return;
}



/* ---- FUN_1020_3aad @ 1020:3aad  (96 octets) ---- */

void __stdcall16far FUN_1020_3aad(undefined4 param_1)

{
  byte extraout_AH;
  int iVar1;
  undefined extraout_AH_00;
  undefined extraout_AH_01;
  int iVar2;
  int iVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  
  FUN_1158_0444();
  uVar4 = (undefined2)((ulong)param_1 >> 0x10);
  iVar2 = (int)param_1;
  uVar5 = (undefined2)((ulong)*(undefined4 *)(iVar2 + 0x27c) >> 0x10);
  iVar3 = (int)*(undefined4 *)(iVar2 + 0x27c);
  iVar1 = (uint)extraout_AH * 0x100;
  if (*(char *)(iVar3 + 0x1f) == '\0') {
    iVar1 = iVar1 + 1;
  }
  FUN_1130_1275(iVar3,uVar5,iVar1);
  FUN_1138_1c77((int)*(undefined4 *)(iVar2 + 0x200),
                (int)((ulong)*(undefined4 *)(iVar2 + 0x200) >> 0x10),
                CONCAT11(extraout_AH_00,*(undefined *)(iVar3 + 0x1f)));
  FUN_1130_1275((int)*(undefined4 *)(iVar2 + 0x28c),
                (int)((ulong)*(undefined4 *)(iVar2 + 0x28c) >> 0x10),
                CONCAT11(extraout_AH_01,*(undefined *)(iVar3 + 0x1f)));
  return;
}



/* ---- FUN_1020_3b0d @ 1020:3b0d  (30 octets) ---- */

void __stdcall16far FUN_1020_3b0d(undefined4 param_1,undefined2 param_2,undefined2 param_3)

{
  FUN_1158_0444();
  FUN_1020_398d((int)param_1,(int)((ulong)param_1 >> 0x10),param_2,param_3);
  return;
}



/* ---- FUN_1020_3b2b @ 1020:3b2b  (30 octets) ---- */

void __stdcall16far FUN_1020_3b2b(undefined4 param_1,undefined2 param_2,undefined2 param_3)

{
  FUN_1158_0444();
  FUN_1020_39ed((int)param_1,(int)((ulong)param_1 >> 0x10),param_2,param_3);
  return;
}



/* ---- FUN_1020_3b49 @ 1020:3b49  (30 octets) ---- */

void __stdcall16far FUN_1020_3b49(undefined4 param_1,undefined2 param_2,undefined2 param_3)

{
  FUN_1158_0444();
  FUN_1020_3a4d((int)param_1,(int)((ulong)param_1 >> 0x10),param_2,param_3);
  return;
}



/* ---- FUN_1020_3b67 @ 1020:3b67  (30 octets) ---- */

void __stdcall16far FUN_1020_3b67(undefined4 param_1,undefined2 param_2,undefined2 param_3)

{
  FUN_1158_0444();
  FUN_1020_3aad((int)param_1,(int)((ulong)param_1 >> 0x10),param_2,param_3);
  return;
}



/* ---- FUN_1020_3b85 @ 1020:3b85  (219 octets) ---- */

void __stdcall16far
FUN_1020_3b85(undefined2 param_1_00,undefined2 param_2_00,int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined2 uVar3;
  int iVar4;
  undefined2 uVar5;
  undefined4 uVar6;
  
  FUN_1158_0444();
  uVar5 = (undefined2)((ulong)param_2 >> 0x10);
  iVar4 = (int)param_2;
  uVar6 = FUN_1158_2273(0xdad,0x1118,*(undefined2 *)(iVar4 + 0x1a),*(undefined2 *)(iVar4 + 0x1c));
  uVar3 = (undefined2)((ulong)uVar6 >> 0x10);
  iVar1 = (int)uVar6;
  FUN_1138_1deb(iVar4,uVar5,*(undefined2 *)(iVar1 + 0x34),*(undefined2 *)(iVar1 + 0x36));
  if (param_1 == 0) {
    iVar1 = FUN_1128_11cc((int)*(undefined4 *)(iVar1 + 0x34),
                          (int)((ulong)*(undefined4 *)(iVar1 + 0x34) >> 0x10));
    iVar2 = (int)((long)iVar1 * 2);
    if ((long)iVar2 != (long)iVar1 * 2) {
      iVar2 = FUN_1158_043e(0x1128);
    }
    FUN_1138_17e1(uVar6,iVar2);
  }
  else {
    iVar1 = FUN_1128_11cc((int)*(undefined4 *)(iVar1 + 0x34),
                          (int)((ulong)*(undefined4 *)(iVar1 + 0x34) >> 0x10));
    iVar2 = (int)((long)iVar1 * 2);
    if ((long)iVar2 != (long)iVar1 * 2) {
      iVar2 = FUN_1158_043e(0x1128);
    }
    FUN_1138_17bf(uVar6,iVar2);
  }
  uVar3 = FUN_1080_3335(param_1,*(undefined2 *)(iVar4 + 0x34),*(undefined2 *)(iVar4 + 0x36));
  FUN_1128_10eb((int)*(undefined4 *)(iVar4 + 0x34),
                (int)((ulong)*(undefined4 *)(iVar4 + 0x34) >> 0x10),uVar3);
  FUN_1138_22c6(iVar4,uVar5);
  return;
}



/* ---- FUN_1020_3c60 @ 1020:3c60  (117 octets) ---- */

void __stdcall16far FUN_1020_3c60(undefined4 param_1)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  
  FUN_1158_0444();
  uVar5 = (undefined2)((ulong)param_1 >> 0x10);
  iVar3 = (int)param_1;
  uVar6 = (undefined2)((ulong)*(undefined4 *)(iVar3 + 0x1ec) >> 0x10);
  iVar1 = (int)*(undefined4 *)(iVar3 + 0x1ec);
  uVar7 = (undefined2)((ulong)*(undefined4 *)(iVar3 + 0x234) >> 0x10);
  iVar4 = (int)*(undefined4 *)(iVar3 + 0x234);
  FUN_1108_2a93(iVar1,uVar6,*(undefined2 *)(iVar4 + 0x34),*(undefined2 *)(iVar4 + 0x36));
  cVar2 = FUN_1108_2b0d(iVar1,uVar6);
  if (cVar2 != '\0') {
    FUN_1138_1deb((int)*(undefined4 *)(iVar3 + 0x234),
                  (int)((ulong)*(undefined4 *)(iVar3 + 0x234) >> 0x10),*(undefined2 *)(iVar1 + 0x1f)
                  ,*(undefined2 *)(iVar1 + 0x21));
    FUN_1020_3767(iVar3,uVar5,iVar3 + 0x45c,uVar5);
  }
  return;
}



/* ---- FUN_1020_3cd5 @ 1020:3cd5  (117 octets) ---- */

void __stdcall16far FUN_1020_3cd5(undefined4 param_1)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  
  FUN_1158_0444();
  uVar5 = (undefined2)((ulong)param_1 >> 0x10);
  iVar3 = (int)param_1;
  uVar6 = (undefined2)((ulong)*(undefined4 *)(iVar3 + 0x1ec) >> 0x10);
  iVar1 = (int)*(undefined4 *)(iVar3 + 0x1ec);
  uVar7 = (undefined2)((ulong)*(undefined4 *)(iVar3 + 0x200) >> 0x10);
  iVar4 = (int)*(undefined4 *)(iVar3 + 0x200);
  FUN_1108_2a93(iVar1,uVar6,*(undefined2 *)(iVar4 + 0x34),*(undefined2 *)(iVar4 + 0x36));
  cVar2 = FUN_1108_2b0d(iVar1,uVar6);
  if (cVar2 != '\0') {
    FUN_1138_1deb((int)*(undefined4 *)(iVar3 + 0x200),
                  (int)((ulong)*(undefined4 *)(iVar3 + 0x200) >> 0x10),*(undefined2 *)(iVar1 + 0x1f)
                  ,*(undefined2 *)(iVar1 + 0x21));
    FUN_1020_37ef(iVar3,uVar5,iVar3 + 0x55c,uVar5);
  }
  return;
}



/* ---- FUN_1020_3d4a @ 1020:3d4a  (117 octets) ---- */

void __stdcall16far FUN_1020_3d4a(undefined4 param_1)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  
  FUN_1158_0444();
  uVar5 = (undefined2)((ulong)param_1 >> 0x10);
  iVar3 = (int)param_1;
  uVar6 = (undefined2)((ulong)*(undefined4 *)(iVar3 + 0x1ec) >> 0x10);
  iVar1 = (int)*(undefined4 *)(iVar3 + 0x1ec);
  uVar7 = (undefined2)((ulong)*(undefined4 *)(iVar3 + 0x204) >> 0x10);
  iVar4 = (int)*(undefined4 *)(iVar3 + 0x204);
  FUN_1108_2a93(iVar1,uVar6,*(undefined2 *)(iVar4 + 0x34),*(undefined2 *)(iVar4 + 0x36));
  cVar2 = FUN_1108_2b0d(iVar1,uVar6);
  if (cVar2 != '\0') {
    FUN_1138_1deb((int)*(undefined4 *)(iVar3 + 0x204),
                  (int)((ulong)*(undefined4 *)(iVar3 + 0x204) >> 0x10),*(undefined2 *)(iVar1 + 0x1f)
                  ,*(undefined2 *)(iVar1 + 0x21));
    FUN_1020_3877(iVar3,uVar5,iVar3 + 0x65c,uVar5);
  }
  return;
}



/* ---- FUN_1020_3dbf @ 1020:3dbf  (117 octets) ---- */

void __stdcall16far FUN_1020_3dbf(undefined4 param_1)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  
  FUN_1158_0444();
  uVar5 = (undefined2)((ulong)param_1 >> 0x10);
  iVar3 = (int)param_1;
  uVar6 = (undefined2)((ulong)*(undefined4 *)(iVar3 + 0x1ec) >> 0x10);
  iVar1 = (int)*(undefined4 *)(iVar3 + 0x1ec);
  uVar7 = (undefined2)((ulong)*(undefined4 *)(iVar3 + 0x20c) >> 0x10);
  iVar4 = (int)*(undefined4 *)(iVar3 + 0x20c);
  FUN_1108_2a93(iVar1,uVar6,*(undefined2 *)(iVar4 + 0x34),*(undefined2 *)(iVar4 + 0x36));
  cVar2 = FUN_1108_2b0d(iVar1,uVar6);
  if (cVar2 != '\0') {
    FUN_1138_1deb((int)*(undefined4 *)(iVar3 + 0x20c),
                  (int)((ulong)*(undefined4 *)(iVar3 + 0x20c) >> 0x10),*(undefined2 *)(iVar1 + 0x1f)
                  ,*(undefined2 *)(iVar1 + 0x21));
    FUN_1020_3902(iVar3,uVar5,iVar3 + 0x75c,uVar5);
  }
  return;
}



/* ---- FUN_1020_3e65 @ 1020:3e65  (1577 octets) ---- */

void __stdcall16far FUN_1020_3e65(undefined4 param_1,int param_2,uint param_3,byte param_4)

{
  double dVar1;
  undefined4 uVar2;
  undefined2 uVar3;
  longdouble lVar4;
  longdouble lVar5;
  longdouble lVar6;
  longdouble lVar7;
  longdouble lVar8;
  undefined2 uVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  undefined2 uVar15;
  undefined2 unaff_CS;
  undefined2 uVar16;
  undefined2 uVar17;
  undefined2 unaff_SS;
  longdouble in_ST0;
  longdouble lVar18;
  longdouble lVar19;
  longdouble lVar20;
  longdouble in_ST1;
  longdouble in_ST2;
  longdouble in_ST3;
  longdouble lVar21;
  longdouble lVar22;
  char *pcStack_44c;
  undefined2 uStack_448;
  undefined6 uStack_44a;
  undefined local_444 [8];
  undefined local_43c [248];
  undefined local_344 [8];
  undefined local_33c [248];
  int local_244;
  uint local_242;
  undefined4 local_240;
  int local_23c;
  undefined2 local_23a;
  undefined4 local_238;
  undefined local_234 [2];
  double local_232;
  double local_22a;
  char local_122 [256];
  int local_22;
  int local_20;
  int local_1e;
  int local_1c;
  int local_1a;
  int local_18;
  int local_16;
  int local_14;
  undefined8 local_12;
  undefined2 local_a;
  undefined2 uStack_6;
  
  _local_a = (double)CONCAT26(unaff_CS,CONCAT24(0x3e70,_local_a));
  FUN_1158_0444();
  if ((DAT_1160_019a != '\0') && ((param_4 & 8) != 0)) {
    uVar15 = (undefined2)((ulong)param_1 >> 0x10);
    iVar14 = (int)param_1;
    local_238 = *(undefined4 *)(iVar14 + 0x230);
    uVar2 = *(undefined4 *)((int)local_238 + 0x8a);
    local_23a = (undefined2)((ulong)uVar2 >> 0x10);
    local_23c = (int)uVar2;
    _pcStack_44c = (double)(qword)*(ulong *)(local_23c + 0xb);
    FUN_1128_13da();
    _pcStack_44c = (double)CONCAT62(CONCAT42(CONCAT22(2,(int)((ulong)*(undefined4 *)
                                                                      (local_23c + 0xb) >> 0x10)),
                                             (int)*(undefined4 *)(local_23c + 0xb)),0x1128);
    FUN_1128_14b0();
    _pcStack_44c = (double)CONCAT62(CONCAT42(CONCAT22(1,(int)((ulong)*(undefined4 *)
                                                                      (local_23c + 0xb) >> 0x10)),
                                             (int)*(undefined4 *)(local_23c + 0xb)),0x1128);
    FUN_1128_14f5();
    _pcStack_44c = (double)CONCAT62(CONCAT42(CONCAT22(0xe,(int)((ulong)*(undefined4 *)
                                                                        (local_23c + 0xb) >> 0x10)),
                                             (int)*(undefined4 *)(local_23c + 0xb)),0x1128);
    FUN_1128_1473();
    local_18 = *(int *)((int)*(undefined4 *)(iVar14 + 0x230) + 0x24);
    _pcStack_44c = (double)CONCAT44(*(undefined4 *)((int)*(undefined4 *)(iVar14 + 0x21c) + 0x34),
                                    &UNK_1128_0000);
    uVar16 = 0x1128;
    _pcStack_44c = (double)CONCAT62(uStack_44a,0x3f08);
    iVar10 = FUN_1128_11cc();
    local_1a = (int)((long)iVar10 * 2);
    if ((long)local_1a != (long)iVar10 * 2) {
      uVar16 = 0x1158;
      _pcStack_44c = CONCAT24(0x3f14,_pcStack_44c);
      _pcStack_44c = (double)CONCAT26(0x1128,_pcStack_44c);
      local_1a = FUN_1158_043e();
    }
    local_14 = local_18 / local_1a;
    if (local_14 < 1) {
      local_14 = 1;
    }
    lVar18 = (longdouble)*(double *)(iVar14 + 0x86e) - (longdouble)*(double *)(iVar14 + 0x876);
    lVar19 = (longdouble)local_14;
    _pcStack_44c = CONCAT24(0x3f44,_pcStack_44c);
    _pcStack_44c = (double)CONCAT26(uVar16,_pcStack_44c);
    FUN_1158_04b2();
    local_12 = (double)lVar19;
    if (local_12 <= 0.0) {
      local_12 = 1.0;
    }
    uVar16 = 0x1020;
    dVar1 = *(double *)(iVar14 + 0x87e);
    local_240 = CONCAT22((uint)(local_12 < dVar1) << 8 | (uint)(NAN(local_12) || NAN(dVar1)) << 10 |
                         (uint)(local_12 == dVar1) << 0xe,(undefined2)local_240);
    if (local_12 < dVar1) {
      dVar1 = *(double *)(iVar14 + 0x87e);
      _pcStack_44c = (double)CONCAT62(CONCAT42(&UNK_1020_3e44,&stack0xfffe),DAT_1160_1858);
      local_12._6_2_ = (undefined2)((qword)dVar1 >> 0x30);
      uVar3 = local_12._6_2_;
      local_12._4_2_ = (undefined2)((qword)dVar1 >> 0x20);
      uVar17 = local_12._4_2_;
      local_12._2_2_ = (undefined2)((qword)dVar1 >> 0x10);
      uVar16 = local_12._2_2_;
      local_12._0_2_ = SUB82(dVar1,0);
      DAT_1160_1858 = &pcStack_44c;
      uVar9 = (undefined2)local_12;
      local_12 = dVar1;
      FUN_1080_2ea7(uVar9,uVar16,uVar17,uVar3,
                    *(double *)(iVar14 + 0x86e) - *(double *)(iVar14 + 0x876));
      FUN_1158_102f();
      uVar16 = 0x1158;
      local_14 = FUN_1158_0416();
      DAT_1160_1858 = (char **)pcStack_44c;
      if (local_14 < 1) {
        local_14 = 1;
      }
    }
    local_16 = local_18 - local_1a;
    uVar17 = uVar16;
    if (SBORROW2(local_18,local_1a)) {
      uVar17 = 0x1158;
      _pcStack_44c = CONCAT24(0x4006,_pcStack_44c);
      _pcStack_44c = (double)CONCAT26(uVar16,_pcStack_44c);
      local_16 = FUN_1158_043e();
    }
    local_16 = local_16 / local_14;
    if (local_16 < 1) {
      local_16 = 1;
    }
    if (DAT_1160_019b == '\0') {
      _pcStack_44c = (double)CONCAT62(CONCAT42(CONCAT22(1,(int)((ulong)*(undefined4 *)
                                                                        (iVar14 + 0x414) >> 0x10)),
                                               (int)*(undefined4 *)(iVar14 + 0x414)),uVar17);
      FUN_1138_1c77();
      _pcStack_44c = (double)CONCAT62(CONCAT42(CONCAT22(1,(int)((ulong)*(undefined4 *)
                                                                        (iVar14 + 0x418) >> 0x10)),
                                               (int)*(undefined4 *)(iVar14 + 0x418)),0x1138);
      FUN_1138_1c77();
      _pcStack_44c = (double)CONCAT62(CONCAT42(CONCAT22(1,(int)((ulong)*(undefined4 *)
                                                                        (iVar14 + 0x41c) >> 0x10)),
                                               (int)*(undefined4 *)(iVar14 + 0x41c)),0x1138);
      FUN_1138_1c77();
    }
    else {
      _pcStack_44c = (double)(qword)CONCAT42(CONCAT22(DAT_1160_0198,local_23a),local_23c);
      FUN_1128_1db8();
      _pcStack_44c = (double)CONCAT62(CONCAT42(CONCAT22(*(undefined2 *)((int)local_238 + 0x22),
                                                        DAT_1160_0198),local_23a),local_23c);
      FUN_1128_1d7b();
      _pcStack_44c = (double)((qword)(uint)s_Erreur_1160_0191._5_2_ << 0x30);
      _pcStack_44c = (double)CONCAT62(CONCAT42(_uStack_448,local_23a),local_23c);
      FUN_1128_1db8();
      _pcStack_44c = (double)CONCAT62(CONCAT42(CONCAT22(s_Erreur_1160_0191._5_2_,
                                                        *(undefined2 *)((int)local_238 + 0x24)),
                                               local_23a),local_23c);
      FUN_1128_1d7b();
    }
    _pcStack_44c = (double)(qword)CONCAT42(CONCAT22(param_2,local_23a),local_23c);
    FUN_1128_1db8();
    _pcStack_44c = (double)CONCAT62(CONCAT42(CONCAT22(*(undefined2 *)((int)local_238 + 0x22),param_2
                                                     ),local_23a),local_23c);
    FUN_1128_1d7b();
    _pcStack_44c = (double)((qword)param_3 << 0x30);
    _pcStack_44c = (double)CONCAT62(CONCAT42(_uStack_448,local_23a),local_23c);
    FUN_1128_1db8();
    _pcStack_44c = (double)CONCAT62(CONCAT42(CONCAT22(param_3,*(undefined2 *)((int)local_238 + 0x24)
                                                     ),local_23a),local_23c);
    FUN_1128_1d7b();
    DAT_1160_019b = '\x01';
    _pcStack_44c = (double)(int)param_3;
    iVar10 = FUN_1020_1405();
    local_240 = (long)iVar10;
    FUN_1080_2ea7((double)local_240);
    local_232 = (double)((longdouble)*(int *)((int)*(undefined4 *)(iVar14 + 0x1f8) + 0xda) + lVar18)
    ;
    lVar19 = (longdouble)local_232;
    _pcStack_44c = CONCAT24(0x414e,_pcStack_44c);
    _pcStack_44c = (double)CONCAT26(0x1080,_pcStack_44c);
    FUN_1158_102f();
    _pcStack_44c = CONCAT24(0x4156,_pcStack_44c);
    _pcStack_44c = (double)CONCAT26(0x1158,_pcStack_44c);
    local_1e = FUN_1158_0416();
    iVar10 = *(int *)((int)local_238 + 0x24);
    iVar11 = iVar10 - param_2;
    if (SBORROW2(iVar10,param_2)) {
      _pcStack_44c = CONCAT24(0x416b,_pcStack_44c);
      _pcStack_44c = (double)CONCAT26(0x1158,_pcStack_44c);
      iVar11 = FUN_1158_043e();
    }
    local_240 = (long)iVar11;
    lVar20 = (longdouble)local_240;
    lVar18 = (longdouble)local_16;
    _pcStack_44c = CONCAT24(0x4182,_pcStack_44c);
    _pcStack_44c = (double)CONCAT26(0x1158,_pcStack_44c);
    FUN_1158_04b2();
    local_22a = (double)(lVar18 * (longdouble)local_12 + (longdouble)*(double *)(iVar14 + 0x876));
    local_1c = 0;
    local_122[0] = '\0';
    _pcStack_44c = (double)CONCAT44(param_1,&UNK_1158_0000);
    _pcStack_44c = (double)CONCAT62(uStack_44a,0x41a7);
    iVar10 = FUN_1020_1405();
    local_240 = (long)iVar10;
    dVar1 = ABS(((double)local_1e - local_232) * (double)local_240);
    uVar16 = 0x1020;
    local_242 = (uint)(dVar1 < 3.0) << 8 | (uint)NAN(dVar1) << 10 | (uint)(dVar1 == 3.0) << 0xe;
    if (dVar1 < 3.0) {
      _pcStack_44c = (double)CONCAT44(param_1,&UNK_1020_0000);
      uVar16 = 0x1020;
      _pcStack_44c = (double)CONCAT62(uStack_44a,0x41e5);
      lVar18 = in_ST3;
      lVar21 = in_ST3;
      iVar10 = FUN_1020_13c6();
      if (0 < local_1e && local_1e <= iVar10) {
        _pcStack_44c = (double)CONCAT44(param_1,&UNK_1020_0000);
        uVar16 = 0x1020;
        _pcStack_44c = (double)CONCAT62(uStack_44a,0x420b);
        local_244 = FUN_1020_137f();
        if (0 < local_244) {
          local_20 = 1;
          while( true ) {
            _pcStack_44c = (double)CONCAT62(CONCAT42((long)local_20,
                                                     (int)((ulong)*(undefined4 *)(iVar14 + 0x198) >>
                                                          0x10)),
                                            (int)*(undefined4 *)(iVar14 + 0x198));
            uVar16 = 0x10f8;
            iVar10 = FUN_10f8_6e30();
            if (0 < iVar10) {
              _pcStack_44c = (double)CONCAT62(CONCAT42((undefined *)CONCAT22(unaff_SS,local_344),
                                                       local_20),local_1e);
              FUN_10f8_9a68();
              _pcStack_44c = (double)CONCAT62(CONCAT42(_uStack_448,unaff_SS),local_234);
              FUN_1158_1e86();
              _local_a = (double)lVar20;
              _pcStack_44c = _local_a - *(double *)(iVar14 + 0x876);
              FUN_1080_2ea7((undefined2)local_12,(int6)((qword)local_12 >> 0x10));
              lVar20 = (longdouble)local_16 * lVar19;
              _pcStack_44c = CONCAT24(0x42a0,_pcStack_44c);
              _pcStack_44c = (double)CONCAT26(0x1080,_pcStack_44c);
              lVar22 = lVar21;
              FUN_1158_102f();
              _pcStack_44c = CONCAT24(0x42a8,_pcStack_44c);
              _pcStack_44c = (double)CONCAT26(0x1158,_pcStack_44c);
              local_22 = FUN_1158_0416();
              iVar10 = *(int *)((int)local_238 + 0x24);
              iVar11 = iVar10 - local_22;
              lVar19 = in_ST0;
              lVar4 = in_ST1;
              lVar5 = in_ST2;
              lVar6 = in_ST3;
              lVar7 = lVar18;
              lVar8 = lVar21;
              if (SBORROW2(iVar10,local_22)) {
                _pcStack_44c = CONCAT24(0x42bd,_pcStack_44c);
                _pcStack_44c = (double)CONCAT26(0x1158,_pcStack_44c);
                iVar11 = FUN_1158_043e();
                lVar19 = in_ST0;
                lVar4 = in_ST1;
                lVar5 = in_ST2;
                lVar6 = in_ST3;
                lVar7 = lVar18;
                lVar8 = lVar21;
              }
              lVar21 = lVar22;
              lVar18 = lVar8;
              in_ST3 = lVar7;
              in_ST2 = lVar6;
              in_ST1 = lVar5;
              in_ST0 = lVar4;
              uVar12 = param_2 - iVar11;
              local_22 = iVar11;
              if (SBORROW2(param_2,iVar11)) {
                _pcStack_44c = CONCAT24(0x42cd,_pcStack_44c);
                _pcStack_44c = (double)CONCAT26(0x1158,_pcStack_44c);
                uVar12 = FUN_1158_043e();
              }
              uVar13 = (int)uVar12 >> 0xf;
              iVar10 = (uVar12 ^ uVar13) - uVar13;
              if (SBORROW2(uVar12 ^ uVar13,uVar13)) {
                _pcStack_44c = CONCAT24(0x42d9,_pcStack_44c);
                _pcStack_44c = (double)CONCAT26(0x1158,_pcStack_44c);
                iVar10 = FUN_1158_043e();
              }
              uVar16 = 0x1158;
              if (iVar10 < 3) {
                local_1c = local_20;
                local_232 = (double)local_1e;
                local_22a = _local_a;
                lVar21 = lVar18;
                if (local_122[0] != '\0') {
                  _pcStack_44c = (double)CONCAT62(CONCAT42((undefined *)CONCAT22(unaff_SS,local_344)
                                                           ,unaff_SS),local_122);
                  FUN_1158_17cd();
                  _pcStack_44c = (double)CONCAT44(_uStack_448,&UNK_1158_0000);
                  _pcStack_44c = (double)CONCAT62(uStack_44a,0x3e5a);
                  FUN_1158_184c();
                  _pcStack_44c = (double)CONCAT62(CONCAT42(_uStack_448,unaff_SS),local_122);
                  FUN_1158_17e7();
                }
                _pcStack_44c = (double)CONCAT62(CONCAT42((undefined *)CONCAT22(unaff_SS,local_444),
                                                         unaff_SS),local_122);
                FUN_1158_17cd();
                _pcStack_44c = (double)CONCAT62(CONCAT42(_uStack_448,unaff_SS),local_344);
                FUN_1150_08a9();
                FUN_1158_184c();
                _pcStack_44c = (double)CONCAT62(CONCAT42(_uStack_448,unaff_SS),local_122);
                uVar16 = 0x1158;
                FUN_1158_17e7();
              }
            }
            if (local_20 == local_244) break;
            local_20 = local_20 + 1;
          }
        }
      }
    }
    if (local_1c == 0) {
      iVar10 = *(int *)((int)local_238 + 0x24);
      iVar11 = iVar10 - param_2;
      uVar17 = uVar16;
      if (SBORROW2(iVar10,param_2)) {
        uVar17 = 0x1158;
        _pcStack_44c = CONCAT24(0x4386,_pcStack_44c);
        _pcStack_44c = (double)CONCAT26(uVar16,_pcStack_44c);
        iVar11 = FUN_1158_043e();
      }
      local_240 = (long)iVar11;
      lVar19 = (longdouble)local_16;
      uVar16 = 0x1158;
      _pcStack_44c = CONCAT24(0x439d,_pcStack_44c);
      _pcStack_44c = (double)CONCAT26(uVar17,_pcStack_44c);
      FUN_1158_04b2();
      _local_a = (double)(lVar19 * (longdouble)local_12 + (longdouble)*(double *)(iVar14 + 0x876));
    }
    else {
      _local_a = local_22a;
    }
    if (local_1c < 1) {
      _pcStack_44c = (double)CONCAT62(CONCAT42(*(ulong *)(iVar14 + 0x41c) >> 0x10,
                                               (int)*(ulong *)(iVar14 + 0x41c)),uVar16);
      FUN_1138_1c77();
    }
    else {
      _pcStack_44c = (double)CONCAT62(CONCAT42(CONCAT22(1,(int)((ulong)*(undefined4 *)
                                                                        (iVar14 + 0x41c) >> 0x10)),
                                               (int)*(undefined4 *)(iVar14 + 0x41c)),uVar16);
      FUN_1138_1c77();
      _pcStack_44c = (double)CONCAT62(CONCAT42((char *)CONCAT22(unaff_SS,local_122),
                                               (int)((ulong)*(undefined4 *)(iVar14 + 0x41c) >> 0x10)
                                              ),(int)*(undefined4 *)(iVar14 + 0x41c));
      FUN_1138_1d8c();
    }
    _pcStack_44c = (double)CONCAT44((undefined *)CONCAT22(unaff_SS,local_43c),&UNK_1138_0000);
    _pcStack_44c = (double)CONCAT62(uStack_44a,0x3e5d);
    FUN_1158_17cd();
    _pcStack_44c = (double)CONCAT62(CONCAT42(_uStack_448,unaff_SS),local_33c);
    FUN_1020_122d(iVar14,uVar15,2,0x14,local_a,(int6)((qword)_local_a >> 0x10));
    FUN_1158_184c();
    _pcStack_44c = (double)CONCAT62(CONCAT42(_uStack_448,
                                             (int)((ulong)*(undefined4 *)(iVar14 + 0x418) >> 0x10)),
                                    (int)*(undefined4 *)(iVar14 + 0x418));
    FUN_1138_1d8c();
    _pcStack_44c = (double)CONCAT44((undefined *)CONCAT22(unaff_SS,local_43c),&UNK_1138_0000);
    _pcStack_44c = (double)CONCAT62(uStack_44a,0x3e61);
    FUN_1158_17cd();
    _pcStack_44c = (double)CONCAT62(CONCAT42(_uStack_448,unaff_SS),local_33c);
    FUN_1020_122d(iVar14,uVar15,2,10,local_232._0_2_,(int6)((qword)local_232 >> 0x10));
    FUN_1158_184c();
    _pcStack_44c = (double)CONCAT62(CONCAT42(_uStack_448,
                                             (int)((ulong)*(undefined4 *)(iVar14 + 0x414) >> 0x10)),
                                    (int)*(undefined4 *)(iVar14 + 0x414));
    FUN_1138_1d8c();
  }
  s_Erreur_1160_0191._5_2_ = param_3;
  DAT_1160_0198 = param_2;
  return;
}



/* ---- FUN_1020_4498 @ 1020:4498  (68 octets) ---- */

void __stdcall16far
FUN_1020_4498(undefined4 param_1,undefined2 param_2,undefined2 param_3,undefined param_4,
             char param_5,undefined2 param_6,undefined2 param_7)

{
  FUN_1158_0444();
  if (param_5 == '\0') {
    s_Erreur_1160_0191._5_2_ = param_3;
    DAT_1160_0198 = param_2;
    DAT_1160_019a = 1;
    DAT_1160_019b = 0;
    FUN_1020_3e65((int)param_1,(int)((ulong)param_1 >> 0x10),param_2,param_3,param_4,param_6,param_7
                 );
  }
  return;
}



/* ---- FUN_1020_44dc @ 1020:44dc  (245 octets) ---- */

void __stdcall16far FUN_1020_44dc(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  
  FUN_1158_0444();
  iVar2 = (int)param_1;
  uVar4 = (undefined2)((ulong)param_1 >> 0x10);
  if (DAT_1160_019b != '\0') {
    uVar1 = *(undefined4 *)((int)*(undefined4 *)(iVar2 + 0x230) + 0x8a);
    uVar5 = (undefined2)((ulong)uVar1 >> 0x10);
    iVar3 = (int)uVar1;
    FUN_1128_13da((int)*(undefined4 *)(iVar3 + 0xb),
                  (int)((ulong)*(undefined4 *)(iVar3 + 0xb) >> 0x10),0,0);
    FUN_1128_14b0((int)*(undefined4 *)(iVar3 + 0xb),
                  (int)((ulong)*(undefined4 *)(iVar3 + 0xb) >> 0x10),2);
    FUN_1128_14f5((int)*(undefined4 *)(iVar3 + 0xb),
                  (int)((ulong)*(undefined4 *)(iVar3 + 0xb) >> 0x10),1);
    FUN_1128_1473((int)*(undefined4 *)(iVar3 + 0xb),
                  (int)((ulong)*(undefined4 *)(iVar3 + 0xb) >> 0x10),0xe);
    FUN_1128_1db8(iVar3,uVar5,DAT_1160_0198,0);
    FUN_1128_1d7b(iVar3,uVar5,DAT_1160_0198,*(undefined2 *)(iVar2 + 0x22));
    FUN_1128_1db8(iVar3,uVar5,0,s_Erreur_1160_0191._5_2_);
    FUN_1128_1d7b(iVar3,uVar5,*(undefined2 *)(iVar2 + 0x24),s_Erreur_1160_0191._5_2_);
  }
  DAT_1160_019a = 0;
  DAT_1160_019b = 0;
  FUN_1138_1c77((int)*(undefined4 *)(iVar2 + 0x414),
                (int)((ulong)*(undefined4 *)(iVar2 + 0x414) >> 0x10),0);
  FUN_1138_1c77((int)*(undefined4 *)(iVar2 + 0x418),
                (int)((ulong)*(undefined4 *)(iVar2 + 0x418) >> 0x10),0);
  FUN_1138_1c77((int)*(undefined4 *)(iVar2 + 0x41c),
                (int)((ulong)*(undefined4 *)(iVar2 + 0x41c) >> 0x10),0);
  return;
}



/* ---- FUN_1020_45d1 @ 1020:45d1  (26 octets) ---- */

void __stdcall16far
FUN_1020_45d1(undefined2 param_1_00,undefined2 param_2_00,undefined2 param_1,undefined2 param_2)

{
  FUN_1158_0444();
  s_EGPFault_1160_019c._0_2_ = param_2;
  s_EGPFault_1160_019c._2_2_ = param_1;
  return;
}



/* ---- FUN_1020_45eb @ 1020:45eb  (352 octets) ---- */

void __stdcall16far FUN_1020_45eb(undefined4 param_1)

{
  undefined2 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  byte extraout_DL;
  byte bVar9;
  int iVar10;
  undefined2 uVar11;
  undefined2 uVar12;
  undefined2 uVar13;
  undefined2 uVar14;
  int local_c;
  int local_8;
  
  FUN_1158_0444();
  uVar11 = (undefined2)((ulong)param_1 >> 0x10);
  iVar10 = (int)param_1;
  uVar2 = *(undefined4 *)((int)*(undefined4 *)(iVar10 + 0x19c) + 0x34);
  iVar4 = FUN_1128_11cc((int)uVar2,(int)((ulong)uVar2 >> 0x10));
  iVar4 = iVar4 / 2;
  uVar12 = 0x1020;
  iVar5 = FUN_1020_137f(iVar10,uVar11);
  iVar6 = iVar5 + 1;
  if (SCARRY2(iVar5,1)) {
    uVar12 = 0x1158;
    iVar6 = FUN_1158_043e(0x1020);
  }
  iVar6 = *(int *)((int)*(undefined4 *)(iVar10 + 0x19c) + 0x24) / iVar6;
  iVar5 = (int)((long)iVar4 * 3);
  uVar13 = uVar12;
  if ((long)iVar5 != (long)iVar4 * 3) {
    uVar13 = 0x1158;
    iVar5 = FUN_1158_043e(uVar12);
  }
  if ((iVar6 < iVar5) && (iVar6 = (int)((long)iVar4 * 3), (long)iVar6 != (long)iVar4 * 3)) {
    iVar6 = FUN_1158_043e(uVar13);
  }
  local_c = 0;
  uVar12 = 0x1020;
  iVar5 = FUN_1020_137f(iVar10,uVar11);
  if (0 < iVar5) {
    local_8 = 1;
    while( true ) {
      iVar7 = (int)((long)local_8 * (long)iVar6);
      uVar13 = uVar12;
      if ((long)iVar7 != (long)local_8 * (long)iVar6) {
        uVar13 = 0x1158;
        iVar7 = FUN_1158_043e(uVar12);
      }
      iVar8 = iVar7 + iVar4;
      uVar14 = uVar13;
      if (SCARRY2(iVar7,iVar4)) {
        uVar14 = 0x1158;
        iVar8 = FUN_1158_043e(uVar13);
      }
      bVar9 = (int)s_EGPFault_1160_019c._2_2_ < iVar8;
      iVar8 = iVar7 - iVar4;
      uVar12 = uVar14;
      if (SBORROW2(iVar7,iVar4)) {
        uVar12 = 0x1158;
        iVar8 = FUN_1158_043e(uVar14);
        bVar9 = extraout_DL;
      }
      if ((iVar8 < (int)s_EGPFault_1160_019c._2_2_ & bVar9) != 0) {
        local_c = local_8;
      }
      if (local_8 == iVar5) break;
      local_8 = local_8 + 1;
    }
  }
  if (0 < local_c) {
    uVar12 = (undefined2)((ulong)*(undefined4 *)(iVar10 + 0x198) >> 0x10);
    iVar6 = (int)*(undefined4 *)(iVar10 + 0x198);
    iVar5 = local_c >> 0xf;
    iVar4 = FUN_10f8_6e30(iVar6,uVar12,local_c,iVar5);
    if (iVar4 < 1) {
      FUN_10f8_70c9(iVar6,uVar12,*(undefined2 *)(iVar6 + 0xfa),local_c,iVar5);
    }
    else {
      FUN_10f8_70c9(iVar6,uVar12,0,local_c,iVar5);
    }
    puVar3 = (undefined4 *)*(undefined4 *)(iVar10 + 0x230);
    puVar1 = (undefined2 *)((int)*puVar3 + 0x44);
    (*(code *)*puVar1)(0x10f8,(undefined4 *)puVar3,(int)((ulong)puVar3 >> 0x10));
    puVar3 = (undefined4 *)*(undefined4 *)(iVar10 + 0x19c);
    puVar1 = (undefined2 *)((int)*puVar3 + 0x44);
    (*(code *)*puVar1)(0x10f8,(undefined4 *)puVar3,(int)((ulong)puVar3 >> 0x10));
  }
  return;
}



/* ---- FUN_1020_474b @ 1020:474b  (96 octets) ---- */

void __stdcall16far FUN_1020_474b(undefined4 param_1)

{
  byte extraout_AH;
  int iVar1;
  undefined extraout_AH_00;
  undefined extraout_AH_01;
  int iVar2;
  int iVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  
  FUN_1158_0444();
  uVar4 = (undefined2)((ulong)param_1 >> 0x10);
  iVar2 = (int)param_1;
  uVar5 = (undefined2)((ulong)*(undefined4 *)(iVar2 + 0x24c) >> 0x10);
  iVar3 = (int)*(undefined4 *)(iVar2 + 0x24c);
  iVar1 = (uint)extraout_AH * 0x100;
  if (*(char *)(iVar3 + 0x1f) == '\0') {
    iVar1 = iVar1 + 1;
  }
  FUN_1130_1275(iVar3,uVar5,iVar1);
  FUN_1130_1275((int)*(undefined4 *)(iVar2 + 0x29c),
                (int)((ulong)*(undefined4 *)(iVar2 + 0x29c) >> 0x10),
                CONCAT11(extraout_AH_00,*(undefined *)(iVar3 + 0x1f)));
  FUN_1138_1c77((int)*(undefined4 *)(iVar2 + 400),(int)((ulong)*(undefined4 *)(iVar2 + 400) >> 0x10)
                ,CONCAT11(extraout_AH_01,*(undefined *)(iVar3 + 0x1f)));
  return;
}



/* ---- FUN_1020_47ab @ 1020:47ab  (96 octets) ---- */

void __stdcall16far FUN_1020_47ab(undefined4 param_1)

{
  byte extraout_AH;
  int iVar1;
  undefined extraout_AH_00;
  undefined extraout_AH_01;
  int iVar2;
  int iVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  
  FUN_1158_0444();
  uVar4 = (undefined2)((ulong)param_1 >> 0x10);
  iVar2 = (int)param_1;
  uVar5 = (undefined2)((ulong)*(undefined4 *)(iVar2 + 0x278) >> 0x10);
  iVar3 = (int)*(undefined4 *)(iVar2 + 0x278);
  iVar1 = (uint)extraout_AH * 0x100;
  if (*(char *)(iVar3 + 0x1f) == '\0') {
    iVar1 = iVar1 + 1;
  }
  FUN_1130_1275(iVar3,uVar5,iVar1);
  FUN_1130_1275((int)*(undefined4 *)(iVar2 + 0x2a0),
                (int)((ulong)*(undefined4 *)(iVar2 + 0x2a0) >> 0x10),
                CONCAT11(extraout_AH_00,*(undefined *)(iVar3 + 0x1f)));
  FUN_1138_1c77((int)*(undefined4 *)(iVar2 + 0x180),
                (int)((ulong)*(undefined4 *)(iVar2 + 0x180) >> 0x10),
                CONCAT11(extraout_AH_01,*(undefined *)(iVar3 + 0x1f)));
  return;
}



/* ---- FUN_1020_480b @ 1020:480b  (96 octets) ---- */

void __stdcall16far FUN_1020_480b(undefined4 param_1)

{
  byte extraout_AH;
  int iVar1;
  undefined extraout_AH_00;
  undefined extraout_AH_01;
  int iVar2;
  int iVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  
  FUN_1158_0444();
  uVar4 = (undefined2)((ulong)param_1 >> 0x10);
  iVar2 = (int)param_1;
  uVar5 = (undefined2)((ulong)*(undefined4 *)(iVar2 + 0x280) >> 0x10);
  iVar3 = (int)*(undefined4 *)(iVar2 + 0x280);
  iVar1 = (uint)extraout_AH * 0x100;
  if (*(char *)(iVar3 + 0x1f) == '\0') {
    iVar1 = iVar1 + 1;
  }
  FUN_1130_1275(iVar3,uVar5,iVar1);
  FUN_1130_1275((int)*(undefined4 *)(iVar2 + 0x2a4),
                (int)((ulong)*(undefined4 *)(iVar2 + 0x2a4) >> 0x10),
                CONCAT11(extraout_AH_00,*(undefined *)(iVar3 + 0x1f)));
  FUN_1138_1c77((int)*(undefined4 *)(iVar2 + 0x188),
                (int)((ulong)*(undefined4 *)(iVar2 + 0x188) >> 0x10),
                CONCAT11(extraout_AH_01,*(undefined *)(iVar3 + 0x1f)));
  return;
}



/* ---- FUN_1020_486b @ 1020:486b  (30 octets) ---- */

void __stdcall16far FUN_1020_486b(undefined4 param_1,undefined2 param_2,undefined2 param_3)

{
  FUN_1158_0444();
  FUN_1020_474b((int)param_1,(int)((ulong)param_1 >> 0x10),param_2,param_3);
  return;
}



/* ---- FUN_1020_4889 @ 1020:4889  (30 octets) ---- */

void __stdcall16far FUN_1020_4889(undefined4 param_1,undefined2 param_2,undefined2 param_3)

{
  FUN_1158_0444();
  FUN_1020_47ab((int)param_1,(int)((ulong)param_1 >> 0x10),param_2,param_3);
  return;
}



/* ---- FUN_1020_48a7 @ 1020:48a7  (30 octets) ---- */

void __stdcall16far FUN_1020_48a7(undefined4 param_1,undefined2 param_2,undefined2 param_3)

{
  FUN_1158_0444();
  FUN_1020_480b((int)param_1,(int)((ulong)param_1 >> 0x10),param_2,param_3);
  return;
}



/* ---- FUN_1020_48c5 @ 1020:48c5  (31 octets) ---- */

void __stdcall16far FUN_1020_48c5(undefined4 param_1)

{
  undefined2 *puVar1;
  undefined4 *puVar2;
  
  FUN_1158_0444();
  puVar2 = (undefined4 *)*(undefined4 *)((int)param_1 + 0x19c);
  puVar1 = (undefined2 *)((int)*puVar2 + 0x44);
  (*(code *)*puVar1)(0x1158,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10));
  return;
}



/* ---- FUN_1020_48e4 @ 1020:48e4  (68 octets) ---- */

void __stdcall16far FUN_1020_48e4(undefined4 param_1,undefined2 param_2,undefined2 param_3)

{
  int iVar1;
  undefined2 uVar2;
  
  FUN_1158_0444();
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  if (*(char *)((int)*(undefined4 *)(iVar1 + 0x3f8) + 0x94) == '\0') {
    FUN_1020_28b7(iVar1,uVar2,param_2,param_3);
  }
  else {
    FUN_1020_271c(iVar1,uVar2,param_2,param_3);
  }
  return;
}



/* ---- FUN_1020_4928 @ 1020:4928  (83 octets) ---- */

void __stdcall16far FUN_1020_4928(undefined4 param_1)

{
  undefined2 *puVar1;
  undefined4 *puVar2;
  byte extraout_AH;
  int iVar3;
  int iVar4;
  undefined2 uVar5;
  
  FUN_1158_0444();
  uVar5 = (undefined2)((ulong)param_1 >> 0x10);
  iVar4 = (int)param_1;
  iVar3 = (uint)extraout_AH * 0x100;
  if (*(char *)(iVar4 + 0x887) == '\0') {
    iVar3 = iVar3 + 1;
  }
  *(undefined *)(iVar4 + 0x887) = (char)iVar3;
  *(byte *)(iVar4 + 0x886) = *(byte *)(iVar4 + 0x888) & *(byte *)(iVar4 + 0x887);
  FUN_1110_2470((int)*(undefined4 *)(iVar4 + 0x404),
                (int)((ulong)*(undefined4 *)(iVar4 + 0x404) >> 0x10),
                CONCAT11((char)((uint)iVar3 >> 8),*(undefined *)(iVar4 + 0x886)));
  puVar2 = (undefined4 *)*(undefined4 *)(iVar4 + 0x230);
  puVar1 = (undefined2 *)((int)*puVar2 + 0x44);
  (*(code *)*puVar1)(0x1110,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10));
  return;
}



/* ---- FUN_1020_497b @ 1020:497b  (83 octets) ---- */

void __stdcall16far FUN_1020_497b(undefined4 param_1)

{
  undefined2 *puVar1;
  undefined4 *puVar2;
  byte extraout_AH;
  int iVar3;
  int iVar4;
  undefined2 uVar5;
  
  FUN_1158_0444();
  uVar5 = (undefined2)((ulong)param_1 >> 0x10);
  iVar4 = (int)param_1;
  iVar3 = (uint)extraout_AH * 0x100;
  if (*(char *)(iVar4 + 0x888) == '\0') {
    iVar3 = iVar3 + 1;
  }
  *(undefined *)(iVar4 + 0x888) = (char)iVar3;
  *(byte *)(iVar4 + 0x886) = *(byte *)(iVar4 + 0x888) & *(byte *)(iVar4 + 0x887);
  FUN_1110_2470((int)*(undefined4 *)(iVar4 + 0x404),
                (int)((ulong)*(undefined4 *)(iVar4 + 0x404) >> 0x10),
                CONCAT11((char)((uint)iVar3 >> 8),*(undefined *)(iVar4 + 0x886)));
  puVar2 = (undefined4 *)*(undefined4 *)(iVar4 + 0x230);
  puVar1 = (undefined2 *)((int)*puVar2 + 0x44);
  (*(code *)*puVar1)(0x1110,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10));
  return;
}



/* ---- FUN_1020_49ce @ 1020:49ce  (109 octets) ---- */

void __stdcall16far FUN_1020_49ce(undefined4 param_1)

{
  undefined2 *puVar1;
  undefined4 *puVar2;
  byte extraout_AH;
  int iVar3;
  undefined extraout_AH_00;
  int iVar4;
  undefined2 uVar5;
  
  FUN_1158_0444();
  uVar5 = (undefined2)((ulong)param_1 >> 0x10);
  iVar4 = (int)param_1;
  iVar3 = (uint)extraout_AH * 0x100;
  if (*(char *)(iVar4 + 0x886) == '\0') {
    iVar3 = iVar3 + 1;
  }
  *(undefined *)(iVar4 + 0x886) = (char)iVar3;
  *(undefined *)(iVar4 + 0x888) = *(undefined *)(iVar4 + 0x886);
  *(undefined *)(iVar4 + 0x887) = *(undefined *)(iVar4 + 0x886);
  FUN_1110_2470((int)*(undefined4 *)(iVar4 + 0x3fc),
                (int)((ulong)*(undefined4 *)(iVar4 + 0x3fc) >> 0x10),
                CONCAT11((char)((uint)iVar3 >> 8),*(undefined *)(iVar4 + 0x887)));
  FUN_1110_2470((int)*(undefined4 *)(iVar4 + 0x400),
                (int)((ulong)*(undefined4 *)(iVar4 + 0x400) >> 0x10),
                CONCAT11(extraout_AH_00,*(undefined *)(iVar4 + 0x888)));
  puVar2 = (undefined4 *)*(undefined4 *)(iVar4 + 0x230);
  puVar1 = (undefined2 *)((int)*puVar2 + 0x44);
  (*(code *)*puVar1)(0x1110,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10));
  return;
}



/* ---- FUN_1020_4a3b @ 1020:4a3b  (124 octets) ---- */

void __stdcall16far
FUN_1020_4a3b(undefined4 param_1,int param_2,int param_3,undefined2 param_4_00,char param_4)

{
  undefined2 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  undefined4 uVar8;
  undefined2 uVar9;
  
  uVar9 = 0x4a46;
  FUN_1158_0444();
  if (param_4 == '\0') {
    uVar6 = (undefined2)((ulong)param_1 >> 0x10);
    uVar8 = *(undefined4 *)((int)param_1 + 0x40c);
    uVar7 = (undefined2)((ulong)uVar8 >> 0x10);
    iVar5 = (int)uVar8;
    iVar3 = param_3 + *(int *)(iVar5 + 0x1e);
    if (SCARRY2(param_3,*(int *)(iVar5 + 0x1e))) {
      iVar3 = FUN_1158_043e(0x1158,iVar5,uVar7,uVar9);
    }
    iVar4 = param_2 + *(int *)(iVar5 + 0x20);
    if (SCARRY2(param_2,*(int *)(iVar5 + 0x20))) {
      iVar4 = FUN_1158_043e(0x1158);
    }
    uVar8 = FUN_1138_19d4((int)*(undefined4 *)(iVar5 + 0x1a),
                          (int)((ulong)*(undefined4 *)(iVar5 + 0x1a) >> 0x10),iVar3,iVar4);
    puVar2 = (undefined4 *)*(undefined4 *)((int)param_1 + 0x284);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x38);
    (*(code *)*puVar1)(0x1138,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),
                       (int)((ulong)uVar8 >> 0x10),(int)uVar8);
  }
  return;
}



/* ---- FUN_1020_4ab7 @ 1020:4ab7  (30 octets) ---- */

void __stdcall16far FUN_1020_4ab7(undefined4 param_1,undefined2 param_2,undefined2 param_3)

{
  FUN_1158_0444();
  FUN_1020_3310((int)param_1,(int)((ulong)param_1 >> 0x10),param_2,param_3);
  return;
}



/* ---- FUN_1020_4ad5 @ 1020:4ad5  (30 octets) ---- */

void __stdcall16far FUN_1020_4ad5(undefined4 param_1,undefined2 param_2,undefined2 param_3)

{
  FUN_1158_0444();
  FUN_1020_3446((int)param_1,(int)((ulong)param_1 >> 0x10),param_2,param_3);
  return;
}



/* ---- FUN_1020_4af3 @ 1020:4af3  (14 octets) ---- */

void __stdcall16far FUN_1020_4af3(void)

{
  FUN_1158_0444();
  return;
}



/* ---- FUN_1020_4bb1 @ 1020:4bb1  (26 octets) ---- */

void __stdcall16far FUN_1020_4bb1(undefined4 param_1)

{
  FUN_1158_0444();
  FUN_1020_31d0((int)param_1,(int)((ulong)param_1 >> 0x10),0);
  return;
}



/* ---- FUN_1020_4bcb @ 1020:4bcb  (115 octets) ---- */

void __stdcall16far FUN_1020_4bcb(undefined4 param_1,undefined2 param_2,undefined2 param_3)

{
  int iVar1;
  undefined2 uVar2;
  
  FUN_1158_0444();
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  *(undefined2 *)(iVar1 + 0x88a) = 5;
  FUN_1020_7f5b(iVar1,uVar2,param_2,param_3);
  FUN_1130_13a5((int)*(undefined4 *)(iVar1 + 0x2f8),
                (int)((ulong)*(undefined4 *)(iVar1 + 0x2f8) >> 0x10),0);
  FUN_1130_13a5((int)*(undefined4 *)(iVar1 + 0x32c),
                (int)((ulong)*(undefined4 *)(iVar1 + 0x32c) >> 0x10),0);
  FUN_1130_13a5((int)*(undefined4 *)(iVar1 + 0x350),
                (int)((ulong)*(undefined4 *)(iVar1 + 0x350) >> 0x10),0);
  FUN_1130_13a5((int)*(undefined4 *)(iVar1 + 0x1dc),
                (int)((ulong)*(undefined4 *)(iVar1 + 0x1dc) >> 0x10),0);
  FUN_1020_4bb1(iVar1,uVar2);
  return;
}



/* ---- FUN_1020_4c4d @ 1020:4c4d  (437 octets) ---- */

void __stdcall16far FUN_1020_4c4d(undefined4 param_1)

{
  undefined4 uVar1;
  uint uVar2;
  undefined2 uVar3;
  int iVar4;
  undefined2 uVar5;
  undefined2 unaff_SS;
  undefined *puVar6;
  int iVar7;
  undefined local_20c [2];
  undefined local_20a [248];
  ulong local_112;
  int local_10e;
  int local_10c;
  undefined4 local_10a;
  undefined local_106 [256];
  int local_6;
  int iVar8;
  
  local_6 = 0x4c58;
  FUN_1158_0444();
  uVar5 = (undefined2)((ulong)param_1 >> 0x10);
  iVar4 = (int)param_1;
  FUN_1020_7d90(iVar4,CONCAT42(0x11584c3e,uVar5),0xffff,0xffff);
  local_10a = *(undefined4 *)(iVar4 + 0x198);
  FUN_10f8_7426();
  local_10c = FUN_1020_13c6(iVar4,uVar5);
  if (0 < local_10c) {
    iVar8 = 1;
    while( true ) {
      uVar3 = 0;
      puVar6 = (undefined *)CONCAT22(unaff_SS,local_20c);
      iVar7 = iVar8;
      FUN_1150_08a9(iVar8);
      FUN_10f8_9b08((int)local_10a,CONCAT42(puVar6,(int)((ulong)local_10a >> 0x10)),iVar7,uVar3);
      local_10e = FUN_1020_137f(iVar4,uVar5);
      if (0 < local_10e) {
        local_6 = 1;
        while( true ) {
          uVar2 = FUN_1158_1c2b();
          local_112 = (ulong)uVar2;
          FUN_1020_122d(iVar4,uVar5,2,0xc,
                        (double)((float)local_112 * 11.0 * (float)local_112 * 11.0));
          FUN_1158_17e7();
          FUN_10f8_9b08((int)local_10a,
                        CONCAT42((undefined *)CONCAT22(unaff_SS,local_106),
                                 (int)((ulong)local_10a >> 0x10)),iVar8,local_6);
          if (local_6 == local_10e) break;
          local_6 = local_6 + 1;
        }
      }
      if (iVar8 == local_10c) break;
      iVar8 = iVar8 + 1;
    }
  }
  FUN_10f8_9a68((int)local_10a,CONCAT42(0x10000,(int)((ulong)local_10a >> 0x10)));
  FUN_1158_184c();
  FUN_1128_2003();
  FUN_10f8_7172();
  puVar6 = (undefined *)CONCAT22(unaff_SS,local_20a);
  uVar3 = FUN_1020_13c6(iVar4);
  FUN_1150_08a9(uVar3);
  FUN_1158_184c(0x4c4b);
  uVar1 = *(undefined4 *)((int)local_10a + 0xd8);
  FUN_1128_2003((int)uVar1,CONCAT42(puVar6,(int)((ulong)uVar1 >> 0x10)));
  FUN_10f8_70c9();
  FUN_1020_146f(iVar4,uVar5);
  FUN_1020_2ba2();
  return;
}



/* ---- FUN_1020_5051 @ 1020:5051  (616 octets) ---- */

void __stdcall16far FUN_1020_5051(undefined4 param_1)

{
  undefined2 *puVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  undefined2 uVar8;
  undefined2 unaff_SS;
  bool bVar9;
  undefined4 *puVar10;
  long lVar11;
  undefined local_112 [256];
  undefined4 local_12;
  undefined4 local_e;
  uint local_a;
  int local_8;
  uint local_6;
  int iVar12;
  
  local_6 = 0x505c;
  FUN_1158_0444();
  uVar7 = (undefined2)((ulong)param_1 >> 0x10);
  iVar5 = (int)param_1;
  FUN_1020_7d90(iVar5,CONCAT42(0x11585016,uVar7),0xffff,0xffff);
  uVar8 = (undefined2)((ulong)*(undefined4 *)(iVar5 + 0x2e8) >> 0x10);
  uVar6 = (undefined2)*(undefined4 *)(iVar5 + 0x2e8);
  FUN_10d8_31d2(uVar6,uVar8);
  FUN_10e0_2ffb();
  FUN_10e0_2ed2();
  FUN_10d8_31bf(uVar6,uVar8);
  uVar2 = DAT_1160_1ea2;
  iVar4 = (int)DAT_1160_1ea2 >> 0xf;
  if ((-1 < iVar4) && ((0 < iVar4 || (DAT_1160_1ea2 != 0)))) {
    local_6 = 1;
    iVar12 = 0;
    while( true ) {
      local_12 = 0;
      local_a = 1;
      local_8 = 0;
      while( true ) {
        cVar3 = FUN_10e0_2895();
        if (cVar3 == '\0') {
          FUN_1020_10f6(iVar5,uVar7);
        }
        puVar10 = (undefined4 *)FUN_10d8_3b9b();
        puVar1 = (undefined2 *)((int)*puVar10 + 0x44);
        local_e = (*(code *)*puVar1)();
        FUN_1020_122d(iVar5,uVar7,0,0xc,(double)local_e);
        FUN_1158_17e7();
        uVar6 = FUN_1158_0416();
        uVar8 = FUN_1158_0416(uVar6);
        FUN_10f8_9b08((int)*(undefined4 *)(iVar5 + 0x198),
                      CONCAT42((undefined *)CONCAT22(unaff_SS,local_112),
                               (int)((ulong)*(undefined4 *)(iVar5 + 0x198) >> 0x10)),uVar8,uVar6);
        lVar11 = CONCAT22(local_12._2_2_ + local_e._2_2_ +
                          (uint)CARRY2((uint)local_12,(uint)local_e),(uint)local_12 + (uint)local_e)
        ;
        if (SCARRY2(local_12._2_2_,local_e._2_2_) !=
            SCARRY2(local_12._2_2_ + local_e._2_2_,(uint)CARRY2((uint)local_12,(uint)local_e))) {
          lVar11 = FUN_1158_043e(0x10f8);
        }
        local_12 = lVar11;
        if ((local_8 == 0) && (local_a == 2)) break;
        bVar9 = 0xfffe < local_a;
        local_a = local_a + 1;
        local_8 = local_8 + (uint)bVar9;
      }
      FUN_1020_122d(iVar5,uVar7,0,0xc,(double)local_12);
      FUN_1158_17e7();
      uVar8 = 3;
      uVar6 = FUN_1158_0416(3);
      FUN_10f8_9b08((int)*(undefined4 *)(iVar5 + 0x198),
                    CONCAT42((undefined *)CONCAT22(unaff_SS,local_112),
                             (int)((ulong)*(undefined4 *)(iVar5 + 0x198) >> 0x10)),uVar6,uVar8);
      if ((iVar12 == iVar4) && (local_6 == uVar2)) break;
      bVar9 = 0xfffe < local_6;
      local_6 = local_6 + 1;
      iVar12 = iVar12 + (uint)bVar9;
    }
  }
  FUN_10d8_31d2((int)*(undefined4 *)(iVar5 + 0x2e8),
                (int)((ulong)*(undefined4 *)(iVar5 + 0x2e8) >> 0x10));
  *(undefined *)(iVar5 + 0x85d) = 0;
  *(undefined8 *)(iVar5 + 0x866) = 0;
  FUN_1020_146f(iVar5,uVar7);
  FUN_1020_2ba2();
  return;
}



/* ---- FUN_1020_5476 @ 1020:5476  (745 octets) ---- */

void __stdcall16far FUN_1020_5476(undefined4 param_1)

{
  uint uVar1;
  int iVar2;
  undefined2 *puVar3;
  uint uVar4;
  uint uVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined2 uVar11;
  undefined2 uVar12;
  undefined2 uVar13;
  undefined2 unaff_SS;
  bool bVar14;
  undefined4 *puVar15;
  undefined4 uVar16;
  long lVar17;
  undefined local_11a [256];
  undefined4 local_1a;
  undefined4 local_16;
  undefined4 local_12;
  uint local_e;
  int local_c;
  uint local_a;
  int local_8;
  uint local_6;
  int iVar18;
  
  local_6 = 0x5481;
  FUN_1158_0444();
  uVar12 = (undefined2)((ulong)param_1 >> 0x10);
  iVar10 = (int)param_1;
  FUN_1020_7d90(iVar10,CONCAT42(0x11585445,uVar12),0xffff,0xffff);
  uVar13 = (undefined2)((ulong)*(undefined4 *)(iVar10 + 0x2e4) >> 0x10);
  uVar11 = (undefined2)*(undefined4 *)(iVar10 + 0x2e4);
  FUN_10d8_31d2(uVar11,uVar13);
  FUN_10e0_2ffb();
  FUN_10e0_2ed2();
  FUN_10d8_31bf(uVar11,uVar13);
  uVar5 = DAT_1160_1ea2;
  iVar7 = (int)DAT_1160_1ea2 >> 0xf;
  local_12 = CONCAT22(local_12._2_2_,(undefined2)local_12);
  if ((-1 < iVar7) &&
     ((0 < iVar7 || (local_12 = CONCAT22(local_12._2_2_,(undefined2)local_12), DAT_1160_1ea2 != 0)))
     ) {
    local_6 = 1;
    iVar18 = 0;
    local_12 = CONCAT22(local_12._2_2_,(undefined2)local_12);
    while( true ) {
      local_1a = 0;
      local_e = 1;
      local_c = 0;
      while( true ) {
        uVar4 = DAT_1160_014e;
        local_16 = 0;
        iVar8 = (int)DAT_1160_014e >> 0xf;
        if ((-1 < iVar8) && ((0 < iVar8 || (DAT_1160_014e != 0)))) {
          local_a = 1;
          local_8 = 0;
          while( true ) {
            cVar6 = FUN_10e0_2895();
            if (cVar6 == '\0') {
              FUN_1020_10f6(iVar10,uVar12);
            }
            puVar15 = (undefined4 *)FUN_10d8_3b9b();
            puVar3 = (undefined2 *)((int)*puVar15 + 0x44);
            uVar16 = (*(code *)*puVar3)();
            iVar9 = (int)((ulong)uVar16 >> 0x10);
            uVar1 = (uint)CARRY2((uint)local_16,(uint)uVar16);
            iVar2 = local_16._2_2_ + iVar9;
            local_12 = uVar16;
            lVar17 = CONCAT22(iVar2 + uVar1,(uint)local_16 + (uint)uVar16);
            if (SCARRY2(local_16._2_2_,iVar9) != SCARRY2(iVar2,uVar1)) {
              lVar17 = FUN_1158_043e(0x10d8);
            }
            local_16 = lVar17;
            if ((local_8 == iVar8) && (local_a == uVar4)) break;
            bVar14 = 0xfffe < local_a;
            local_a = local_a + 1;
            local_8 = local_8 + (uint)bVar14;
          }
        }
        FUN_1020_122d(iVar10,uVar12,0,0xc,(double)local_16);
        FUN_1158_17e7();
        uVar11 = FUN_1158_0416();
        uVar13 = FUN_1158_0416(uVar11);
        FUN_10f8_9b08((int)*(undefined4 *)(iVar10 + 0x198),
                      CONCAT42((undefined *)CONCAT22(unaff_SS,local_11a),
                               (int)((ulong)*(undefined4 *)(iVar10 + 0x198) >> 0x10)),uVar13,uVar11)
        ;
        lVar17 = CONCAT22(local_1a._2_2_ + local_16._2_2_ +
                          (uint)CARRY2((uint)local_1a,(uint)local_16),
                          (uint)local_1a + (uint)local_16);
        if (SCARRY2(local_1a._2_2_,local_16._2_2_) !=
            SCARRY2(local_1a._2_2_ + local_16._2_2_,(uint)CARRY2((uint)local_1a,(uint)local_16))) {
          lVar17 = FUN_1158_043e(0x10f8);
        }
        local_1a = lVar17;
        if ((local_c == 0) && (local_e == 2)) break;
        bVar14 = 0xfffe < local_e;
        local_e = local_e + 1;
        local_c = local_c + (uint)bVar14;
      }
      FUN_1020_122d(iVar10,uVar12,0,0xc,(double)local_1a);
      FUN_1158_17e7();
      uVar13 = 3;
      uVar11 = FUN_1158_0416(3);
      FUN_10f8_9b08((int)*(undefined4 *)(iVar10 + 0x198),
                    CONCAT42((undefined *)CONCAT22(unaff_SS,local_11a),
                             (int)((ulong)*(undefined4 *)(iVar10 + 0x198) >> 0x10)),uVar11,uVar13);
      if ((iVar18 == iVar7) && (local_6 == uVar5)) break;
      bVar14 = 0xfffe < local_6;
      local_6 = local_6 + 1;
      iVar18 = iVar18 + (uint)bVar14;
    }
  }
  FUN_10d8_31d2((int)*(undefined4 *)(iVar10 + 0x2e4),
                (int)((ulong)*(undefined4 *)(iVar10 + 0x2e4) >> 0x10));
  *(undefined *)(iVar10 + 0x85d) = 0;
  *(undefined8 *)(iVar10 + 0x866) = 0;
  FUN_1020_146f(iVar10,uVar12);
  FUN_1020_2ba2();
  return;
}



/* ---- FUN_1020_58ff @ 1020:58ff  (634 octets) ---- */

void __stdcall16far FUN_1020_58ff(undefined4 param_1,undefined2 param_2)

{
  undefined2 *puVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  undefined2 uVar8;
  undefined2 unaff_SS;
  bool bVar9;
  undefined4 *puVar10;
  long lVar11;
  undefined local_112 [256];
  undefined4 local_12;
  undefined4 local_e;
  uint local_a;
  int local_8;
  uint local_6;
  int iVar12;
  
  local_6 = 0x590a;
  FUN_1158_0444();
  uVar7 = (undefined2)((ulong)param_1 >> 0x10);
  iVar5 = (int)param_1;
  FUN_1020_7d90(iVar5,CONCAT42(0x115858eb,uVar7),0xffff,param_2);
  uVar8 = (undefined2)((ulong)*(undefined4 *)(iVar5 + 0x2e4) >> 0x10);
  uVar6 = (undefined2)*(undefined4 *)(iVar5 + 0x2e4);
  FUN_10d8_31d2(uVar6,uVar8);
  FUN_10e0_2ffb();
  FUN_10e0_2ed2();
  FUN_10d8_31bf(uVar6,uVar8);
  uVar2 = DAT_1160_1ea2;
  iVar4 = (int)DAT_1160_1ea2 >> 0xf;
  if ((-1 < iVar4) && ((0 < iVar4 || (DAT_1160_1ea2 != 0)))) {
    local_6 = 1;
    iVar12 = 0;
    while( true ) {
      local_12 = 0;
      local_a = 1;
      local_8 = 0;
      while( true ) {
        cVar3 = FUN_10e0_2895();
        if (cVar3 == '\0') {
          FUN_1020_10f6(iVar5,uVar7);
        }
        puVar10 = (undefined4 *)FUN_10d8_3b9b();
        puVar1 = (undefined2 *)((int)*puVar10 + 0x44);
        local_e = (*(code *)*puVar1)();
        FUN_1020_122d(iVar5,uVar7,0,0xc,(double)local_e);
        FUN_1158_17e7();
        uVar6 = FUN_1158_0416();
        uVar8 = FUN_1158_0416(uVar6);
        FUN_10f8_9b08((int)*(undefined4 *)(iVar5 + 0x198),
                      CONCAT42((undefined *)CONCAT22(unaff_SS,local_112),
                               (int)((ulong)*(undefined4 *)(iVar5 + 0x198) >> 0x10)),uVar8,uVar6);
        lVar11 = CONCAT22(local_12._2_2_ + local_e._2_2_ +
                          (uint)CARRY2((uint)local_12,(uint)local_e),(uint)local_12 + (uint)local_e)
        ;
        if (SCARRY2(local_12._2_2_,local_e._2_2_) !=
            SCARRY2(local_12._2_2_ + local_e._2_2_,(uint)CARRY2((uint)local_12,(uint)local_e))) {
          lVar11 = FUN_1158_043e(0x10f8);
        }
        local_12 = lVar11;
        if ((local_8 == 0) && (local_a == 2)) break;
        bVar9 = 0xfffe < local_a;
        local_a = local_a + 1;
        local_8 = local_8 + (uint)bVar9;
      }
      FUN_1020_122d(iVar5,uVar7,0,0xc,(double)local_12);
      FUN_1158_17e7();
      uVar8 = 3;
      uVar6 = FUN_1158_0416(3);
      FUN_10f8_9b08((int)*(undefined4 *)(iVar5 + 0x198),
                    CONCAT42((undefined *)CONCAT22(unaff_SS,local_112),
                             (int)((ulong)*(undefined4 *)(iVar5 + 0x198) >> 0x10)),uVar6,uVar8);
      if ((iVar12 == iVar4) && (local_6 == uVar2)) break;
      bVar9 = 0xfffe < local_6;
      local_6 = local_6 + 1;
      iVar12 = iVar12 + (uint)bVar9;
    }
  }
  FUN_10d8_31d2((int)*(undefined4 *)(iVar5 + 0x2e4),
                (int)((ulong)*(undefined4 *)(iVar5 + 0x2e4) >> 0x10));
  *(undefined *)(iVar5 + 0x85d) = 0;
  *(undefined8 *)(iVar5 + 0x866) = 0;
  FUN_1020_146f(iVar5,uVar7);
  FUN_1020_2ba2();
  return;
}



/* ---- FUN_1020_5d8d @ 1020:5d8d  (685 octets) ---- */

void __stdcall16far FUN_1020_5d8d(undefined4 param_1,undefined2 param_2)

{
  undefined2 *puVar1;
  uint uVar2;
  uint uVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined2 uVar8;
  undefined2 uVar9;
  undefined2 uVar10;
  undefined2 unaff_SS;
  bool bVar11;
  undefined4 *puVar12;
  long lVar13;
  undefined local_112 [256];
  undefined4 local_12;
  undefined4 local_e;
  uint local_a;
  int local_8;
  uint local_6;
  int iVar14;
  
  local_6 = 0x5d98;
  FUN_1158_0444();
  uVar9 = (undefined2)((ulong)param_1 >> 0x10);
  iVar7 = (int)param_1;
  FUN_1020_7d90(iVar7,CONCAT42(0x11585d7a,uVar9),0xffff,param_2);
  uVar10 = (undefined2)((ulong)*(undefined4 *)(iVar7 + 0x2e4) >> 0x10);
  uVar8 = (undefined2)*(undefined4 *)(iVar7 + 0x2e4);
  FUN_10d8_31d2(uVar8,uVar10);
  FUN_10e0_2ffb();
  FUN_10e0_2ed2();
  FUN_10d8_31bf(uVar8,uVar10);
  uVar3 = DAT_1160_1ea2;
  iVar5 = (int)DAT_1160_1ea2 >> 0xf;
  if ((-1 < iVar5) && ((0 < iVar5 || (DAT_1160_1ea2 != 0)))) {
    local_6 = 1;
    iVar14 = 0;
    while( true ) {
      uVar2 = DAT_1160_014e;
      local_12 = 0;
      iVar6 = (int)DAT_1160_014e >> 0xf;
      if ((-1 < iVar6) && ((0 < iVar6 || (DAT_1160_014e != 0)))) {
        local_a = 1;
        local_8 = 0;
        while( true ) {
          cVar4 = FUN_10e0_2895();
          if (cVar4 == '\0') {
            FUN_1020_10f6(iVar7,uVar9);
          }
          puVar12 = (undefined4 *)FUN_10d8_3b9b();
          puVar1 = (undefined2 *)((int)*puVar12 + 0x44);
          local_e = (*(code *)*puVar1)();
          FUN_1020_122d(iVar7,uVar9,0,0xc,(double)local_e);
          FUN_1158_17e7();
          uVar8 = FUN_1158_0416();
          uVar10 = FUN_1158_0416(uVar8);
          FUN_10f8_9b08((int)*(undefined4 *)(iVar7 + 0x198),
                        CONCAT42((undefined *)CONCAT22(unaff_SS,local_112),
                                 (int)((ulong)*(undefined4 *)(iVar7 + 0x198) >> 0x10)),uVar10,uVar8)
          ;
          lVar13 = CONCAT22(local_12._2_2_ + local_e._2_2_ +
                            (uint)CARRY2((uint)local_12,(uint)local_e),
                            (uint)local_12 + (uint)local_e);
          if (SCARRY2(local_12._2_2_,local_e._2_2_) !=
              SCARRY2(local_12._2_2_ + local_e._2_2_,(uint)CARRY2((uint)local_12,(uint)local_e))) {
            lVar13 = FUN_1158_043e(0x10f8);
          }
          local_12 = lVar13;
          if ((local_8 == iVar6) && (local_a == uVar2)) break;
          bVar11 = 0xfffe < local_a;
          local_a = local_a + 1;
          local_8 = local_8 + (uint)bVar11;
        }
      }
      FUN_1020_122d(iVar7,uVar9,0,0xc,(double)local_12);
      FUN_1158_17e7();
      iVar6 = DAT_1160_014e + 1;
      if (SCARRY2(DAT_1160_014e,1)) {
        iVar6 = FUN_1158_043e(0x1158);
      }
      uVar8 = FUN_1158_0416(iVar6);
      FUN_10f8_9b08((int)*(undefined4 *)(iVar7 + 0x198),
                    CONCAT42((undefined *)CONCAT22(unaff_SS,local_112),
                             (int)((ulong)*(undefined4 *)(iVar7 + 0x198) >> 0x10)),uVar8,iVar6);
      if ((iVar14 == iVar5) && (local_6 == uVar3)) break;
      bVar11 = 0xfffe < local_6;
      local_6 = local_6 + 1;
      iVar14 = iVar14 + (uint)bVar11;
    }
  }
  FUN_10d8_31d2((int)*(undefined4 *)(iVar7 + 0x2e4),
                (int)((ulong)*(undefined4 *)(iVar7 + 0x2e4) >> 0x10));
  *(undefined *)(iVar7 + 0x85d) = 0;
  *(undefined8 *)(iVar7 + 0x866) = 0;
  FUN_1020_146f(iVar7,uVar9);
  FUN_1020_2ba2();
  return;
}



/* ---- FUN_1020_624d @ 1020:624d  (634 octets) ---- */

void __stdcall16far FUN_1020_624d(undefined4 param_1,undefined2 param_2)

{
  undefined2 *puVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  undefined2 uVar8;
  undefined2 unaff_SS;
  bool bVar9;
  undefined4 *puVar10;
  long lVar11;
  undefined local_112 [256];
  undefined4 local_12;
  undefined4 local_e;
  uint local_a;
  int local_8;
  uint local_6;
  int iVar12;
  
  local_6 = 0x6258;
  FUN_1158_0444();
  uVar7 = (undefined2)((ulong)param_1 >> 0x10);
  iVar5 = (int)param_1;
  FUN_1020_7d90(iVar5,CONCAT42(0x1158623a,uVar7),0xffff,param_2);
  uVar8 = (undefined2)((ulong)*(undefined4 *)(iVar5 + 0x2e4) >> 0x10);
  uVar6 = (undefined2)*(undefined4 *)(iVar5 + 0x2e4);
  FUN_10d8_31d2(uVar6,uVar8);
  FUN_10e0_2ffb();
  FUN_10e0_2ed2();
  FUN_10d8_31bf(uVar6,uVar8);
  uVar2 = DAT_1160_1ea2;
  iVar4 = (int)DAT_1160_1ea2 >> 0xf;
  if ((-1 < iVar4) && ((0 < iVar4 || (DAT_1160_1ea2 != 0)))) {
    local_6 = 1;
    iVar12 = 0;
    while( true ) {
      local_12 = 0;
      local_a = 1;
      local_8 = 0;
      while( true ) {
        cVar3 = FUN_10e0_2895();
        if (cVar3 == '\0') {
          FUN_1020_10f6(iVar5,uVar7);
        }
        puVar10 = (undefined4 *)FUN_10d8_3b9b();
        puVar1 = (undefined2 *)((int)*puVar10 + 0x44);
        local_e = (*(code *)*puVar1)();
        FUN_1020_122d(iVar5,uVar7,0,0xc,(double)local_e);
        FUN_1158_17e7();
        uVar6 = FUN_1158_0416();
        uVar8 = FUN_1158_0416(uVar6);
        FUN_10f8_9b08((int)*(undefined4 *)(iVar5 + 0x198),
                      CONCAT42((undefined *)CONCAT22(unaff_SS,local_112),
                               (int)((ulong)*(undefined4 *)(iVar5 + 0x198) >> 0x10)),uVar8,uVar6);
        lVar11 = CONCAT22(local_12._2_2_ + local_e._2_2_ +
                          (uint)CARRY2((uint)local_12,(uint)local_e),(uint)local_12 + (uint)local_e)
        ;
        if (SCARRY2(local_12._2_2_,local_e._2_2_) !=
            SCARRY2(local_12._2_2_ + local_e._2_2_,(uint)CARRY2((uint)local_12,(uint)local_e))) {
          lVar11 = FUN_1158_043e(0x10f8);
        }
        local_12 = lVar11;
        if ((local_8 == 0) && (local_a == 2)) break;
        bVar9 = 0xfffe < local_a;
        local_a = local_a + 1;
        local_8 = local_8 + (uint)bVar9;
      }
      FUN_1020_122d(iVar5,uVar7,0,0xc,(double)local_12);
      FUN_1158_17e7();
      uVar8 = 3;
      uVar6 = FUN_1158_0416(3);
      FUN_10f8_9b08((int)*(undefined4 *)(iVar5 + 0x198),
                    CONCAT42((undefined *)CONCAT22(unaff_SS,local_112),
                             (int)((ulong)*(undefined4 *)(iVar5 + 0x198) >> 0x10)),uVar6,uVar8);
      if ((iVar12 == iVar4) && (local_6 == uVar2)) break;
      bVar9 = 0xfffe < local_6;
      local_6 = local_6 + 1;
      iVar12 = iVar12 + (uint)bVar9;
    }
  }
  FUN_10d8_31d2((int)*(undefined4 *)(iVar5 + 0x2e4),
                (int)((ulong)*(undefined4 *)(iVar5 + 0x2e4) >> 0x10));
  *(undefined *)(iVar5 + 0x85d) = 0;
  *(undefined8 *)(iVar5 + 0x866) = 0;
  FUN_1020_146f(iVar5,uVar7);
  FUN_1020_2ba2();
  return;
}



/* ---- FUN_1020_66ee @ 1020:66ee  (672 octets) ---- */

void __stdcall16far FUN_1020_66ee(undefined4 param_1,int param_2)

{
  double dVar1;
  undefined2 *puVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  char cVar5;
  undefined2 uVar6;
  int iVar7;
  undefined2 uVar8;
  int iVar9;
  undefined2 uVar10;
  char *pcVar11;
  undefined2 unaff_SS;
  bool bVar12;
  longdouble in_ST0;
  longdouble lVar13;
  longdouble in_ST1;
  longdouble in_ST2;
  longdouble in_ST3;
  longdouble in_ST4;
  longdouble in_ST5;
  longdouble in_ST6;
  undefined4 *puVar14;
  undefined *puVar15;
  undefined2 uVar16;
  undefined local_226 [4];
  undefined local_222 [228];
  uint local_13e;
  int local_13c;
  undefined local_13a;
  uint local_136;
  int local_134;
  undefined local_132;
  int local_12e;
  int local_12c;
  undefined local_12a;
  uint local_126;
  int local_124;
  undefined4 local_122;
  undefined4 local_11e;
  undefined local_11a [256];
  undefined8 local_1a;
  undefined8 local_12;
  uint local_a;
  int local_8;
  uint local_6;
  int iVar17;
  
  local_6 = 0x66f9;
  FUN_1158_0444();
  uVar10 = (undefined2)((ulong)param_1 >> 0x10);
  iVar9 = (int)param_1;
  FUN_1020_7d90(iVar9,uVar10,0x66c7,0x1158,0xffff,param_2);
  local_11e._2_2_ = (int)((ulong)*(undefined4 *)(iVar9 + 0x2e4) >> 0x10);
  local_11e._0_2_ = (uint)*(undefined4 *)(iVar9 + 0x2e4);
  FUN_10d8_31d2((uint)local_11e,local_11e._2_2_);
  FUN_10e0_2ffb((uint)local_11e,local_11e._2_2_,1);
  FUN_10e0_2ed2((uint)local_11e,local_11e._2_2_,0);
  FUN_10d8_31bf((uint)local_11e,local_11e._2_2_);
  local_11e = (long)DAT_1160_1ea2;
  if ((-1 < DAT_1160_1ea2 >> 0xf) && ((0 < DAT_1160_1ea2 >> 0xf || (DAT_1160_1ea2 != 0)))) {
    local_6 = 1;
    iVar17 = 0;
    while( true ) {
      local_122 = *(undefined4 *)(iVar9 + 0x2e4);
      local_1a = 0.0;
      local_124 = (int)DAT_1160_014e >> 0xf;
      local_126 = DAT_1160_014e;
      dVar1 = 0.0;
      if ((-1 < local_124) && ((0 < local_124 || (dVar1 = local_1a, DAT_1160_014e != 0)))) {
        local_a = 1;
        local_8 = 0;
        lVar13 = in_ST0;
        in_ST0 = in_ST1;
        in_ST1 = in_ST2;
        in_ST2 = in_ST3;
        in_ST3 = in_ST4;
        in_ST4 = in_ST5;
        in_ST5 = in_ST6;
        local_1a = 0.0;
        while( true ) {
          local_13e = local_6;
          local_13a = 0;
          local_136 = local_a;
          local_134 = local_8;
          local_132 = 0;
          local_12c = param_2 >> 0xf;
          local_12e = param_2;
          local_12a = 0;
          pcVar11 = (char *)s_iTime_1160_10dc + 4;
          in_ST6 = in_ST5;
          local_13c = iVar17;
          cVar5 = FUN_10e0_2895((int)local_122,(int)((ulong)local_122 >> 0x10),2,&local_13e,unaff_SS
                               );
          if (cVar5 == '\0') {
            pcVar11 = (char *)0x1020;
            FUN_1020_10f6(iVar9,uVar10);
          }
          puVar14 = (undefined4 *)
                    FUN_10d8_3b9b((int)local_122,(int)((ulong)local_122 >> 0x10),0x66db,pcVar11);
          puVar2 = (undefined2 *)((int)*puVar14 + 0x40);
          (*(code *)*puVar2)(0x10d8,puVar14);
          dVar1 = (double)lVar13;
          puVar15 = local_226;
          local_12._6_2_ = (undefined2)((qword)dVar1 >> 0x30);
          uVar3 = local_12._6_2_;
          local_12._4_2_ = (undefined2)((qword)dVar1 >> 0x20);
          uVar6 = local_12._4_2_;
          local_12._2_2_ = (undefined2)((qword)dVar1 >> 0x10);
          uVar8 = local_12._2_2_;
          local_12._0_2_ = SUB82(dVar1,0);
          uVar16 = unaff_SS;
          uVar4 = (undefined2)local_12;
          local_12 = dVar1;
          FUN_1020_122d(iVar9,uVar10,2,0xc,uVar4,uVar8,uVar6,uVar3);
          FUN_1158_17e7(0xff,local_11a,unaff_SS,puVar15,uVar16);
          uVar8 = FUN_1158_0416();
          uVar6 = FUN_1158_0416(uVar8);
          FUN_10f8_9b08((int)*(undefined4 *)(iVar9 + 0x198),
                        (int)((ulong)*(undefined4 *)(iVar9 + 0x198) >> 0x10),local_11a,unaff_SS,
                        uVar6,uVar8);
          local_1a = local_1a + local_12;
          if ((local_8 == local_124) && (dVar1 = local_1a, local_a == local_126)) break;
          bVar12 = 0xfffe < local_a;
          local_a = local_a + 1;
          local_8 = local_8 + (uint)bVar12;
          lVar13 = in_ST0;
          in_ST0 = in_ST1;
          in_ST1 = in_ST2;
          in_ST2 = in_ST3;
          in_ST3 = in_ST4;
          in_ST4 = in_ST5;
          in_ST5 = in_ST6;
        }
      }
      local_1a = dVar1;
      puVar15 = local_222;
      uVar8 = unaff_SS;
      FUN_1020_122d(iVar9,uVar10,0,0xc,(undefined2)local_1a,local_1a._2_2_,local_1a._4_2_,
                    local_1a._6_2_);
      FUN_1158_17e7(0xff,local_11a,unaff_SS,puVar15,uVar8);
      iVar7 = DAT_1160_014e + 1;
      if (SCARRY2(DAT_1160_014e,1)) {
        iVar7 = FUN_1158_043e(0x1158);
      }
      uVar8 = FUN_1158_0416(iVar7);
      FUN_10f8_9b08((int)*(undefined4 *)(iVar9 + 0x198),
                    (int)((ulong)*(undefined4 *)(iVar9 + 0x198) >> 0x10),local_11a,unaff_SS,uVar8,
                    iVar7);
      if ((iVar17 == local_11e._2_2_) && (local_6 == (uint)local_11e)) break;
      bVar12 = 0xfffe < local_6;
      local_6 = local_6 + 1;
      iVar17 = iVar17 + (uint)bVar12;
    }
  }
  FUN_10d8_31d2((int)*(undefined4 *)(iVar9 + 0x2e4),
                (int)((ulong)*(undefined4 *)(iVar9 + 0x2e4) >> 0x10));
  *(undefined *)(iVar9 + 0x85d) = 0;
  *(undefined8 *)(iVar9 + 0x866) = 0;
  FUN_1020_146f(iVar9,uVar10);
  FUN_1020_2ba2(iVar9,uVar10,iVar9,uVar10);
  return;
}



/* ---- FUN_1020_6be2 @ 1020:6be2  (621 octets) ---- */

void __stdcall16far FUN_1020_6be2(undefined4 param_1,int param_2)

{
  double dVar1;
  undefined2 *puVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  char cVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  int iVar8;
  undefined2 uVar9;
  char *pcVar10;
  undefined2 unaff_SS;
  bool bVar11;
  longdouble in_ST0;
  longdouble lVar12;
  longdouble in_ST1;
  longdouble in_ST2;
  longdouble in_ST3;
  longdouble in_ST4;
  longdouble in_ST5;
  longdouble in_ST6;
  undefined4 *puVar13;
  undefined *puVar14;
  undefined2 uVar15;
  undefined local_222 [232];
  uint local_13a;
  int local_138;
  undefined local_136;
  int local_132;
  int local_130;
  undefined local_12e;
  uint local_12a;
  int local_128;
  undefined local_126;
  undefined4 local_122;
  undefined4 local_11e;
  undefined local_11a [256];
  undefined8 local_1a;
  undefined8 local_12;
  uint local_a;
  int local_8;
  uint local_6;
  int iVar16;
  
  local_6 = 0x6bed;
  FUN_1158_0444();
  uVar9 = (undefined2)((ulong)param_1 >> 0x10);
  iVar8 = (int)param_1;
  FUN_1020_7d90(iVar8,uVar9,0x6bbb,0x1158,0xffff,param_2);
  local_11e._2_2_ = (int)((ulong)*(undefined4 *)(iVar8 + 0x2e4) >> 0x10);
  local_11e._0_2_ = (uint)*(undefined4 *)(iVar8 + 0x2e4);
  FUN_10d8_31d2((uint)local_11e,local_11e._2_2_);
  FUN_10e0_2ffb((uint)local_11e,local_11e._2_2_,1);
  FUN_10e0_2ed2((uint)local_11e,local_11e._2_2_,0);
  FUN_10d8_31bf((uint)local_11e,local_11e._2_2_);
  local_11e = (long)DAT_1160_1ea2;
  if ((-1 < DAT_1160_1ea2 >> 0xf) && ((0 < DAT_1160_1ea2 >> 0xf || (DAT_1160_1ea2 != 0)))) {
    local_6 = 1;
    iVar16 = 0;
    while( true ) {
      local_122 = *(undefined4 *)(iVar8 + 0x2e4);
      local_a = 1;
      local_8 = 0;
      lVar12 = in_ST0;
      in_ST0 = in_ST1;
      in_ST1 = in_ST2;
      in_ST2 = in_ST3;
      in_ST3 = in_ST4;
      in_ST4 = in_ST5;
      in_ST5 = in_ST6;
      local_1a = 0.0;
      while( true ) {
        local_13a = local_6;
        local_136 = 0;
        local_130 = param_2 >> 0xf;
        local_132 = param_2;
        local_12e = 0;
        local_12a = local_a;
        local_128 = local_8;
        local_126 = 0;
        pcVar10 = (char *)s_iTime_1160_10dc + 4;
        in_ST6 = in_ST5;
        local_138 = iVar16;
        cVar5 = FUN_10e0_2895((int)local_122,(int)((ulong)local_122 >> 0x10),2,&local_13a,unaff_SS);
        if (cVar5 == '\0') {
          pcVar10 = (char *)0x1020;
          FUN_1020_10f6(iVar8,uVar9);
        }
        puVar13 = (undefined4 *)
                  FUN_10d8_3b9b((int)local_122,(int)((ulong)local_122 >> 0x10),0x6bcf,pcVar10);
        puVar2 = (undefined2 *)((int)*puVar13 + 0x40);
        (*(code *)*puVar2)(0x10d8,puVar13);
        dVar1 = (double)lVar12;
        puVar14 = local_222;
        local_12._6_2_ = (undefined2)((qword)dVar1 >> 0x30);
        uVar3 = local_12._6_2_;
        local_12._4_2_ = (undefined2)((qword)dVar1 >> 0x20);
        uVar7 = local_12._4_2_;
        local_12._2_2_ = (undefined2)((qword)dVar1 >> 0x10);
        uVar6 = local_12._2_2_;
        local_12._0_2_ = SUB82(dVar1,0);
        uVar15 = unaff_SS;
        uVar4 = (undefined2)local_12;
        local_12 = dVar1;
        FUN_1020_122d(iVar8,uVar9,2,0xc,uVar4,uVar6,uVar7,uVar3);
        FUN_1158_17e7(0xff,local_11a,unaff_SS,puVar14,uVar15);
        uVar6 = FUN_1158_0416();
        uVar7 = FUN_1158_0416(uVar6);
        FUN_10f8_9b08((int)*(undefined4 *)(iVar8 + 0x198),
                      (int)((ulong)*(undefined4 *)(iVar8 + 0x198) >> 0x10),local_11a,unaff_SS,uVar7,
                      uVar6);
        dVar1 = local_1a + local_12;
        local_1a = dVar1;
        if ((local_8 == 0) && (local_a == 2)) break;
        bVar11 = 0xfffe < local_a;
        local_a = local_a + 1;
        local_8 = local_8 + (uint)bVar11;
        lVar12 = in_ST0;
        in_ST0 = in_ST1;
        in_ST1 = in_ST2;
        in_ST2 = in_ST3;
        in_ST3 = in_ST4;
        in_ST4 = in_ST5;
        in_ST5 = in_ST6;
      }
      puVar14 = local_222;
      local_1a._6_2_ = (undefined2)((qword)dVar1 >> 0x30);
      uVar3 = local_1a._6_2_;
      local_1a._4_2_ = (undefined2)((qword)dVar1 >> 0x20);
      uVar7 = local_1a._4_2_;
      local_1a._2_2_ = (undefined2)((qword)dVar1 >> 0x10);
      uVar6 = local_1a._2_2_;
      local_1a._0_2_ = SUB82(dVar1,0);
      uVar15 = unaff_SS;
      uVar4 = (undefined2)local_1a;
      FUN_1020_122d(iVar8,uVar9,0,0xc,uVar4,uVar6,uVar7,uVar3);
      FUN_1158_17e7(0xff,local_11a,unaff_SS,puVar14,uVar15);
      uVar7 = 3;
      uVar6 = FUN_1158_0416(3);
      FUN_10f8_9b08((int)*(undefined4 *)(iVar8 + 0x198),
                    (int)((ulong)*(undefined4 *)(iVar8 + 0x198) >> 0x10),local_11a,unaff_SS,uVar6,
                    uVar7);
      if ((iVar16 == local_11e._2_2_) && (local_6 == (uint)local_11e)) break;
      bVar11 = 0xfffe < local_6;
      local_6 = local_6 + 1;
      iVar16 = iVar16 + (uint)bVar11;
    }
  }
  FUN_10d8_31d2((int)*(undefined4 *)(iVar8 + 0x2e4),
                (int)((ulong)*(undefined4 *)(iVar8 + 0x2e4) >> 0x10));
  *(undefined *)(iVar8 + 0x85d) = 0;
  *(undefined8 *)(iVar8 + 0x866) = 0;
  FUN_1020_146f(iVar8,uVar9);
  FUN_1020_2ba2(iVar8,uVar9,iVar8,uVar9);
  return;
}



/* ---- FUN_1020_709f @ 1020:709f  (512 octets) ---- */

void __stdcall16far FUN_1020_709f(undefined4 param_1)

{
  double dVar1;
  undefined2 *puVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  char cVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  int iVar8;
  undefined2 uVar9;
  char *pcVar10;
  undefined2 unaff_SS;
  bool bVar11;
  longdouble in_ST0;
  longdouble lVar12;
  longdouble in_ST1;
  longdouble in_ST2;
  longdouble in_ST3;
  longdouble in_ST4;
  longdouble in_ST5;
  longdouble in_ST6;
  longdouble in_ST7;
  undefined4 *puVar13;
  undefined *puVar14;
  undefined2 uVar15;
  undefined local_21e [240];
  uint local_12e;
  int local_12c;
  undefined local_12a;
  uint local_126;
  int local_124;
  undefined local_122;
  uint local_11e;
  int local_11c;
  undefined4 local_11a;
  undefined4 local_116;
  undefined local_112 [256];
  undefined8 local_12;
  uint local_a;
  int local_8;
  uint local_6;
  int iVar16;
  
  local_6 = 0x70aa;
  FUN_1158_0444();
  uVar9 = (undefined2)((ulong)param_1 >> 0x10);
  iVar8 = (int)param_1;
  FUN_1020_7d90(iVar8,uVar9,0x707c,0x1158,0xffff,0xffff);
  local_116._2_2_ = (int)((ulong)*(undefined4 *)(iVar8 + 0x2e0) >> 0x10);
  local_116._0_2_ = (uint)*(undefined4 *)(iVar8 + 0x2e0);
  FUN_10d8_31d2((uint)local_116,local_116._2_2_);
  FUN_10e0_2ffb((uint)local_116,local_116._2_2_,1);
  FUN_10e0_2ed2((uint)local_116,local_116._2_2_,0);
  FUN_10d8_31bf((uint)local_116,local_116._2_2_);
  local_116 = (long)DAT_1160_1ea2;
  if ((-1 < DAT_1160_1ea2 >> 0xf) && ((0 < DAT_1160_1ea2 >> 0xf || (DAT_1160_1ea2 != 0)))) {
    local_6 = 1;
    iVar16 = 0;
    while( true ) {
      local_11a = *(undefined4 *)(iVar8 + 0x2e0);
      local_11c = (int)DAT_1160_014e >> 0xf;
      local_11e = DAT_1160_014e;
      if ((-1 < local_11c) && ((0 < local_11c || (DAT_1160_014e != 0)))) {
        local_a = 1;
        local_8 = 0;
        lVar12 = in_ST0;
        in_ST0 = in_ST1;
        in_ST1 = in_ST2;
        in_ST2 = in_ST3;
        in_ST3 = in_ST4;
        in_ST4 = in_ST5;
        in_ST5 = in_ST6;
        while( true ) {
          local_12e = local_6;
          local_12a = 0;
          local_126 = local_a;
          local_124 = local_8;
          local_122 = 0;
          pcVar10 = (char *)s_iTime_1160_10dc + 4;
          local_12c = iVar16;
          cVar5 = FUN_10e0_2895((int)local_11a,(int)((ulong)local_11a >> 0x10),1,&local_12e,unaff_SS
                               );
          in_ST6 = in_ST7;
          if (cVar5 == '\0') {
            pcVar10 = (char *)0x1020;
            FUN_1020_10f6(iVar8,uVar9);
            in_ST6 = in_ST7;
          }
          puVar13 = (undefined4 *)
                    FUN_10d8_3b9b((int)local_11a,(int)((ulong)local_11a >> 0x10),0x708b,pcVar10);
          puVar2 = (undefined2 *)((int)*puVar13 + 0x40);
          (*(code *)*puVar2)(0x10d8,puVar13);
          dVar1 = (double)lVar12;
          puVar14 = local_21e;
          local_12._6_2_ = (undefined2)((qword)dVar1 >> 0x30);
          uVar3 = local_12._6_2_;
          local_12._4_2_ = (undefined2)((qword)dVar1 >> 0x20);
          uVar7 = local_12._4_2_;
          local_12._2_2_ = (undefined2)((qword)dVar1 >> 0x10);
          uVar6 = local_12._2_2_;
          local_12._0_2_ = SUB82(dVar1,0);
          in_ST7 = in_ST6;
          uVar15 = unaff_SS;
          uVar4 = (undefined2)local_12;
          local_12 = dVar1;
          FUN_1020_122d(iVar8,uVar9,2,0xc,uVar4,uVar6,uVar7,uVar3);
          FUN_1158_17e7(0xff,local_112,unaff_SS,puVar14,uVar15);
          uVar6 = FUN_1158_0416();
          uVar7 = FUN_1158_0416(uVar6);
          FUN_10f8_9b08((int)*(undefined4 *)(iVar8 + 0x198),
                        (int)((ulong)*(undefined4 *)(iVar8 + 0x198) >> 0x10),local_112,unaff_SS,
                        uVar7,uVar6);
          if ((local_8 == local_11c) && (local_a == local_11e)) break;
          bVar11 = 0xfffe < local_a;
          local_a = local_a + 1;
          local_8 = local_8 + (uint)bVar11;
          lVar12 = in_ST0;
          in_ST0 = in_ST1;
          in_ST1 = in_ST2;
          in_ST2 = in_ST3;
          in_ST3 = in_ST4;
          in_ST4 = in_ST5;
          in_ST5 = in_ST6;
        }
      }
      if ((iVar16 == local_116._2_2_) && (local_6 == (uint)local_116)) break;
      bVar11 = 0xfffe < local_6;
      local_6 = local_6 + 1;
      iVar16 = iVar16 + (uint)bVar11;
    }
  }
  FUN_10d8_31d2((int)*(undefined4 *)(iVar8 + 0x2e0),
                (int)((ulong)*(undefined4 *)(iVar8 + 0x2e0) >> 0x10));
  FUN_1020_146f(iVar8,uVar9);
  FUN_1020_2ba2(iVar8,uVar9,iVar8,uVar9);
  return;
}



/* ---- FUN_1020_745c @ 1020:745c  (596 octets) ---- */

void __stdcall16far FUN_1020_745c(undefined4 param_1)

{
  double dVar1;
  undefined2 *puVar2;
  longdouble lVar3;
  longdouble lVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  char cVar7;
  undefined2 uVar8;
  undefined2 uVar9;
  int iVar10;
  undefined2 uVar11;
  char *pcVar12;
  undefined2 unaff_SS;
  bool bVar13;
  longdouble in_ST0;
  longdouble lVar14;
  longdouble in_ST1;
  longdouble in_ST2;
  longdouble in_ST3;
  longdouble in_ST4;
  longdouble in_ST5;
  longdouble in_ST6;
  longdouble in_ST7;
  undefined4 *puVar15;
  undefined *puVar16;
  undefined2 uVar17;
  undefined local_21e [236];
  undefined local_132 [4];
  uint uStack_12e;
  int iStack_12c;
  undefined uStack_129;
  undefined local_128 [4];
  int iStack_124;
  undefined3 uStack_121;
  uint local_11e;
  int local_11c;
  undefined4 local_11a;
  undefined4 local_116;
  undefined local_112 [256];
  undefined8 local_12;
  uint local_a;
  int local_8;
  uint local_6;
  int iVar18;
  
  local_6 = 0x7467;
  FUN_1158_0444();
  uVar11 = (undefined2)((ulong)param_1 >> 0x10);
  iVar10 = (int)param_1;
  FUN_1020_7d90(iVar10,uVar11,0x741e,0x1158,0xffff,0xffff);
  local_116._2_2_ = (int)((ulong)*(undefined4 *)(iVar10 + 0x2e0) >> 0x10);
  local_116._0_2_ = (uint)*(undefined4 *)(iVar10 + 0x2e0);
  FUN_10d8_31d2((uint)local_116,local_116._2_2_);
  FUN_10e0_2ffb((uint)local_116,local_116._2_2_,1);
  FUN_10e0_2ed2((uint)local_116,local_116._2_2_,0);
  FUN_10d8_31bf((uint)local_116,local_116._2_2_);
  local_116 = (long)DAT_1160_1ea2;
  if ((-1 < DAT_1160_1ea2 >> 0xf) && ((0 < DAT_1160_1ea2 >> 0xf || (DAT_1160_1ea2 != 0)))) {
    local_6 = 1;
    iVar18 = 0;
    while( true ) {
      local_11a = *(undefined4 *)(iVar10 + 0x2e0);
      local_11c = (int)DAT_1160_014e >> 0xf;
      local_11e = DAT_1160_014e;
      if ((-1 < local_11c) && ((0 < local_11c || (DAT_1160_014e != 0)))) {
        local_a = 1;
        local_8 = 0;
        lVar14 = in_ST2;
        in_ST2 = in_ST5;
        while( true ) {
          lVar4 = _local_128;
          lVar3 = _local_132;
          uStack_129 = SUB101(lVar3,9);
          _local_132 = (unkuint9)CONCAT26(iVar18,CONCAT24(local_6,local_132));
          uStack_121 = SUB103(lVar4,7);
          _local_128 = (uint7)CONCAT24(local_8,CONCAT22(local_a,local_128._0_2_));
          pcVar12 = (char *)s_iTime_1160_10dc + 4;
          cVar7 = FUN_10e0_2895((int)local_11a,(int)((ulong)local_11a >> 0x10),1,&uStack_12e,
                                unaff_SS);
          if (cVar7 == '\0') {
            pcVar12 = (char *)0x1020;
            FUN_1020_10f6(iVar10,uVar11);
          }
          puVar15 = (undefined4 *)
                    FUN_10d8_3b9b((int)local_11a,(int)((ulong)local_11a >> 0x10),0x7431,pcVar12);
          puVar2 = (undefined2 *)((int)*puVar15 + 0x40);
          (*(code *)*puVar2)(0x10d8,puVar15);
          _local_128 = in_ST0;
          puVar15 = (undefined4 *)
                    FUN_10d8_3b9b((int)local_11a,(int)((ulong)local_11a >> 0x10),0x743f,0x10d8);
          puVar2 = (undefined2 *)((int)*puVar15 + 0x40);
          in_ST0 = in_ST3;
          in_ST3 = in_ST6;
          (*(code *)*puVar2)(0x10d8,puVar15);
          _local_132 = _local_128 + in_ST1;
          in_ST5 = in_ST7;
          puVar15 = (undefined4 *)
                    FUN_10d8_3b9b((int)local_11a,(int)((ulong)local_11a >> 0x10),0x7448,0x10d8);
          puVar2 = (undefined2 *)((int)*puVar15 + 0x40);
          in_ST1 = in_ST4;
          in_ST4 = in_ST7;
          (*(code *)*puVar2)(0x10d8,puVar15);
          dVar1 = (double)(_local_132 + lVar14);
          puVar16 = local_21e;
          local_12._6_2_ = (undefined2)((qword)dVar1 >> 0x30);
          uVar5 = local_12._6_2_;
          local_12._4_2_ = (undefined2)((qword)dVar1 >> 0x20);
          uVar9 = local_12._4_2_;
          local_12._2_2_ = (undefined2)((qword)dVar1 >> 0x10);
          uVar8 = local_12._2_2_;
          local_12._0_2_ = SUB82(dVar1,0);
          in_ST6 = in_ST5;
          in_ST7 = in_ST5;
          uVar17 = unaff_SS;
          uVar6 = (undefined2)local_12;
          local_12 = dVar1;
          FUN_1020_122d(iVar10,uVar11,2,0xc,uVar6,uVar8,uVar9,uVar5);
          FUN_1158_17e7(0xff,local_112,unaff_SS,puVar16,uVar17);
          uVar8 = FUN_1158_0416();
          uVar9 = FUN_1158_0416(uVar8);
          FUN_10f8_9b08((int)*(undefined4 *)(iVar10 + 0x198),
                        (int)((ulong)*(undefined4 *)(iVar10 + 0x198) >> 0x10),local_112,unaff_SS,
                        uVar9,uVar8);
          if ((local_8 == local_11c) && (local_a == local_11e)) break;
          bVar13 = 0xfffe < local_a;
          local_a = local_a + 1;
          local_8 = local_8 + (uint)bVar13;
          lVar14 = in_ST2;
          in_ST2 = in_ST5;
        }
      }
      if ((iVar18 == local_116._2_2_) && (local_6 == (uint)local_116)) break;
      bVar13 = 0xfffe < local_6;
      local_6 = local_6 + 1;
      iVar18 = iVar18 + (uint)bVar13;
    }
  }
  FUN_10d8_31d2((int)*(undefined4 *)(iVar10 + 0x2e0),
                (int)((ulong)*(undefined4 *)(iVar10 + 0x2e0) >> 0x10));
  FUN_1020_146f(iVar10,uVar11);
  FUN_1020_2ba2(iVar10,uVar11,iVar10,uVar11);
  return;
}



/* ---- FUN_1020_78ab @ 1020:78ab  (857 octets) ---- */

void __stdcall16far FUN_1020_78ab(undefined4 param_1)

{
  double dVar1;
  undefined2 *puVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined2 uVar10;
  undefined2 uVar11;
  undefined2 uVar12;
  char *pcVar13;
  bool bVar14;
  longdouble in_ST0;
  longdouble lVar15;
  longdouble lVar16;
  longdouble in_ST1;
  longdouble lVar17;
  longdouble in_ST2;
  longdouble in_ST3;
  longdouble in_ST4;
  longdouble in_ST5;
  longdouble in_ST6;
  longdouble in_ST7;
  undefined4 *puVar18;
  undefined2 uStack_1e;
  undefined2 local_1a;
  uint local_a;
  int local_8;
  uint local_6;
  int iVar19;
  
  FUN_1158_0444();
  uVar11 = (undefined2)((ulong)param_1 >> 0x10);
  iVar9 = (int)param_1;
  FUN_1020_7d90();
  FUN_10d8_31d2();
  FUN_10e0_2ffb();
  FUN_10e0_2ed2();
  FUN_10d8_31bf();
  uVar5 = DAT_1160_1ea2;
  iVar7 = (int)DAT_1160_1ea2 >> 0xf;
  if ((-1 < iVar7) && ((0 < iVar7 || (DAT_1160_1ea2 != 0)))) {
    local_6 = 1;
    iVar19 = 0;
    while( true ) {
      uVar4 = DAT_1160_014e;
      uVar3 = *(undefined4 *)(iVar9 + 0x2e0);
      iVar8 = (int)DAT_1160_014e >> 0xf;
      if ((-1 < iVar8) && ((0 < iVar8 || (DAT_1160_014e != 0)))) {
        local_a = 1;
        local_8 = 0;
        while( true ) {
          pcVar13 = (char *)s_iTime_1160_10dc + 4;
          cVar6 = FUN_10e0_2895();
          if (cVar6 == '\0') {
            pcVar13 = (char *)0x1020;
            FUN_1020_10f6();
          }
          uVar12 = (undefined2)((ulong)uVar3 >> 0x10);
          uVar10 = (undefined2)uVar3;
          puVar18 = (undefined4 *)
                    FUN_10d8_3b9b(uVar10,CONCAT42((long)(CONCAT26(pcVar13,0x784800000000) >> 0x20),
                                                  uVar12));
          puVar2 = (undefined2 *)((int)*puVar18 + 0x40);
          (*(code *)*puVar2)();
          puVar18 = (undefined4 *)FUN_10d8_3b9b();
          puVar2 = (undefined2 *)((int)*puVar18 + 0x40);
          (*(code *)*puVar2)();
          lVar15 = in_ST7;
          puVar18 = (undefined4 *)FUN_10d8_3b9b(uVar10,CONCAT42(0x10d8785f,uVar12));
          puVar2 = (undefined2 *)((int)*puVar18 + 0x40);
          (*(code *)*puVar2)();
          lVar17 = in_ST0 + in_ST1 + in_ST2;
          lVar16 = lVar15;
          in_ST0 = lVar15;
          puVar18 = (undefined4 *)FUN_10d8_3b9b(uVar10,uVar12,0x786b);
          puVar2 = (undefined2 *)((int)*puVar18 + 0x40);
          (*(code *)*puVar2)(0x10d8,(undefined4 *)puVar18);
          puVar18 = (undefined4 *)FUN_10d8_3b9b(uVar10,uVar12,0x7873,0x10d8);
          puVar2 = (undefined2 *)((int)*puVar18 + 0x40);
          (*(code *)*puVar2)(0x10d8,puVar18);
          in_ST4 = in_ST3 + in_ST4;
          in_ST1 = in_ST0;
          puVar18 = (undefined4 *)FUN_10d8_3b9b(uVar10,uVar12,0x7881,0x10d8);
          puVar2 = (undefined2 *)((int)*puVar18 + 0x40);
          (*(code *)*puVar2)(0x10d8,puVar18);
          in_ST2 = in_ST1;
          puVar18 = (undefined4 *)FUN_10d8_3b9b(uVar10,uVar12,0x7890,0x10d8);
          puVar2 = (undefined2 *)((int)*puVar18 + 0x40);
          (*(code *)*puVar2)(0x10d8,puVar18);
          in_ST3 = in_ST2;
          puVar18 = (undefined4 *)FUN_10d8_3b9b(uVar10,uVar12,0x789d,0x10d8);
          puVar2 = (undefined2 *)((int)*puVar18 + 0x40);
          (*(code *)*puVar2)(0x10d8,puVar18);
          dVar1 = (double)(in_ST4 + in_ST5 + in_ST6 + in_ST7);
          local_1a = SUB82(dVar1,0);
          in_ST4 = in_ST3;
          in_ST5 = in_ST3;
          FUN_1080_2ea7((double)lVar17 + dVar1,local_1a,(int6)((qword)dVar1 >> 0x10));
          in_ST6 = in_ST5;
          FUN_1080_2fa6((double)lVar15);
          uStack_1e = (undefined2)((qword)(double)lVar16 >> 0x20);
          in_ST7 = in_ST6;
          FUN_1020_122d(iVar9,uVar11,2,(int6)(CONCAT44(SUB84((double)lVar16,0),0xc0000) >> 0x10),
                        uStack_1e);
          FUN_1158_17e7();
          FUN_1158_0416();
          FUN_1158_0416();
          FUN_10f8_9b08();
          if ((local_8 == iVar8) && (local_a == uVar4)) break;
          bVar14 = 0xfffe < local_a;
          local_a = local_a + 1;
          local_8 = local_8 + (uint)bVar14;
        }
      }
      if ((iVar19 == iVar7) && (local_6 == uVar5)) break;
      bVar14 = 0xfffe < local_6;
      local_6 = local_6 + 1;
      iVar19 = iVar19 + (uint)bVar14;
    }
  }
  FUN_10d8_31d2();
  FUN_1020_146f();
  FUN_1020_2ba2(iVar9,CONCAT42(param_1,uVar11));
  return;
}



/* ---- FUN_1020_7d90 @ 1020:7d90  (459 octets) ---- */

void __stdcall16far FUN_1020_7d90(undefined4 param_1,byte *param_2,int param_3,int param_4)

{
  byte *pbVar1;
  byte *pbVar2;
  int iVar3;
  uint uVar4;
  byte *pbVar5;
  int iVar6;
  undefined2 uVar7;
  undefined2 unaff_SS;
  undefined4 uVar8;
  undefined *puVar9;
  undefined2 uVar10;
  undefined local_404 [256];
  int local_304;
  undefined local_302 [256];
  undefined local_202 [256];
  byte local_102;
  byte abStack_101 [251];
  undefined2 uStack_6;
  
  uStack_6 = 0x7d9b;
  FUN_1158_0444();
  pbVar5 = (byte *)param_2;
  local_102 = *param_2;
  pbVar2 = abStack_101;
  for (uVar4 = (uint)local_102; pbVar5 = pbVar5 + 1, uVar4 != 0; uVar4 = uVar4 - 1) {
    pbVar1 = pbVar2;
    pbVar2 = pbVar2 + 1;
    *pbVar1 = *pbVar5;
  }
  uVar7 = (undefined2)((ulong)param_1 >> 0x10);
  iVar6 = (int)param_1;
  if (*(char *)((int)*(undefined4 *)(iVar6 + 0x2f8) + 0x31) == '\0') {
    local_202[0] = 0;
  }
  else {
    puVar9 = local_404;
    iVar3 = param_4 + -1;
    uVar10 = unaff_SS;
    if (SBORROW2(param_4,1)) {
      iVar3 = FUN_1158_043e(0x1158,puVar9);
    }
    uVar8 = FUN_1130_1353((int)*(undefined4 *)(iVar6 + 0x2f8),
                          (int)((ulong)*(undefined4 *)(iVar6 + 0x2f8) >> 0x10),iVar3);
    FUN_1130_1161(uVar8);
    FUN_1158_17e7(0xff,local_202,unaff_SS,puVar9,uVar10);
    local_304 = FUN_1158_1878(local_202,unaff_SS,0x7d89,0x1158);
    if (0 < local_304) {
      FUN_1158_1975(1,local_304,local_202,unaff_SS);
    }
    puVar9 = local_404;
    uVar10 = unaff_SS;
    FUN_1158_17cd(local_202,unaff_SS);
    FUN_1158_184c(0x7d8b,0x1158);
    FUN_1158_17e7(0xff,local_202,unaff_SS,puVar9,uVar10);
  }
  if (*(char *)((int)*(undefined4 *)(iVar6 + 0x32c) + 0x31) == '\0') {
    local_302[0] = 0;
  }
  else {
    puVar9 = local_404;
    iVar3 = param_3 + -1;
    uVar10 = unaff_SS;
    if (SBORROW2(param_3,1)) {
      iVar3 = FUN_1158_043e(0x1158,puVar9);
    }
    uVar8 = FUN_1130_1353((int)*(undefined4 *)(iVar6 + 0x32c),
                          (int)((ulong)*(undefined4 *)(iVar6 + 0x32c) >> 0x10),iVar3);
    FUN_1130_1161(uVar8);
    FUN_1158_17e7(0xff,local_302,unaff_SS,puVar9,uVar10);
    local_304 = FUN_1158_1878(local_302,unaff_SS,0x7d89,0x1158);
    if (0 < local_304) {
      FUN_1158_1975(1,local_304,local_302,unaff_SS);
    }
    puVar9 = local_404;
    uVar10 = unaff_SS;
    FUN_1158_17cd(0x7d8b,0x1158);
    FUN_1158_184c(local_302,unaff_SS);
    FUN_1158_17e7(0xff,local_302,unaff_SS,puVar9,uVar10);
  }
  puVar9 = local_404;
  uVar10 = unaff_SS;
  FUN_1158_17cd(local_202,unaff_SS);
  FUN_1158_184c(&local_102,unaff_SS);
  FUN_1158_184c(local_302,unaff_SS);
  FUN_1020_3767(iVar6,uVar7,puVar9,uVar10);
  FUN_10f8_9b08((int)*(undefined4 *)(iVar6 + 0x198),
                (int)((ulong)*(undefined4 *)(iVar6 + 0x198) >> 0x10),iVar6 + 0x45c,uVar7,0,0);
  return;
}



/* ---- FUN_1020_7f5b @ 1020:7f5b  (98 octets) ---- */

void __stdcall16far FUN_1020_7f5b(undefined4 param_1,undefined2 param_2,undefined2 param_3)

{
  int iVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  
  FUN_1158_0444();
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  FUN_1020_1121(*(undefined2 *)(iVar1 + 0x1d8),*(undefined2 *)(iVar1 + 0x1da));
  uVar3 = FUN_1158_2273(0x94,0x1130,param_2,param_3);
  FUN_1130_1275(uVar3,1);
  FUN_1020_1187(*(undefined2 *)(iVar1 + 0x1d8),*(undefined2 *)(iVar1 + 0x1da));
  FUN_1020_323d(iVar1,uVar2,1);
  return;
}



/* ---- FUN_1020_7fbd @ 1020:7fbd  (320 octets) ---- */

void __stdcall16far
FUN_1020_7fbd(undefined2 param_1_00,undefined2 param_2_00,undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined extraout_AH;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined2 unaff_SS;
  undefined4 uVar5;
  undefined *puVar6;
  undefined2 uVar7;
  undefined local_110 [6];
  undefined local_10a [250];
  undefined4 local_10;
  int local_c;
  undefined4 local_a;
  int local_6;
  
  local_6 = 0x7fc8;
  FUN_1158_0444();
  uVar4 = (undefined2)((ulong)param_1 >> 0x10);
  uVar3 = (undefined2)param_1;
  local_a = param_1;
  iVar1 = FUN_1130_1326(uVar3,uVar4);
  local_c = iVar1 + -1;
  if (SBORROW2(iVar1,1)) {
    local_c = FUN_1158_043e(0x1130);
  }
  if (-1 < local_c) {
    iVar1 = 0;
    while( true ) {
      uVar7 = 0;
      uVar5 = FUN_1130_1353((int)local_a,(int)((ulong)local_a >> 0x10),iVar1);
      FUN_1130_13a5(uVar5,uVar7);
      if (iVar1 == local_c) break;
      iVar1 = iVar1 + 1;
    }
  }
  local_a._2_2_ = (undefined2)((ulong)param_2 >> 0x10);
  local_a._0_2_ = (undefined2)param_2;
  puVar6 = local_10a;
  uVar7 = unaff_SS;
  FUN_1130_1161((undefined2)local_a,local_a._2_2_);
  FUN_1130_1237(uVar3,uVar4,puVar6,uVar7);
  local_6 = -1;
  iVar1 = FUN_1130_1326((undefined2)local_a,local_a._2_2_);
  iVar2 = iVar1 + -1;
  if (SBORROW2(iVar1,1)) {
    iVar2 = FUN_1158_043e(0x1130);
  }
  if (-1 < iVar2) {
    iVar1 = 0;
    local_c = iVar2;
    while( true ) {
      local_10 = FUN_1130_1353((undefined2)local_a,local_a._2_2_,iVar1);
      if (*(char *)((int)local_10 + 0x31) != '\0') {
        local_6 = local_6 + 1;
        puVar6 = local_110;
        uVar7 = unaff_SS;
        FUN_1130_1161(local_10);
        uVar5 = FUN_1130_1353(uVar3,uVar4,local_6);
        FUN_1130_1237(uVar5,puVar6,uVar7);
        uVar7 = CONCAT11(extraout_AH,*(undefined *)((int)local_10 + 0x31));
        uVar5 = FUN_1130_1353(uVar3,uVar4,local_6);
        FUN_1130_13a5(uVar5,uVar7);
        uVar7 = 0;
        uVar5 = FUN_1130_1353(uVar3,uVar4,local_6);
        FUN_1130_1275(uVar5,uVar7);
      }
      if (iVar1 == local_c) break;
      iVar1 = iVar1 + 1;
    }
  }
  return;
}



/* ---- FUN_1020_837d @ 1020:837d  (581 octets) ---- */

void __stdcall16far FUN_1020_837d(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  undefined4 uVar8;
  int local_6;
  
  uVar7 = 0x1158;
  FUN_1158_0444();
  local_6 = 1;
  uVar5 = (undefined2)((ulong)param_1 >> 0x10);
  iVar3 = (int)param_1;
  uVar6 = (undefined2)((ulong)*(undefined4 *)(iVar3 + 0x2f8) >> 0x10);
  iVar4 = (int)*(undefined4 *)(iVar3 + 0x2f8);
  if (*(char *)(iVar4 + 0x31) != '\0') {
    uVar7 = 0x1130;
    iVar1 = FUN_1130_1326(iVar4,uVar6);
    iVar2 = iVar1 + -1;
    if (SBORROW2(iVar1,1)) {
      uVar7 = 0x1158;
      iVar2 = FUN_1158_043e(0x1130);
    }
    if (-1 < iVar2) {
      iVar1 = 0;
      while( true ) {
        uVar7 = 0x1130;
        uVar8 = FUN_1130_1353(iVar4,uVar6,iVar1);
        if ((*(char *)((int)uVar8 + 0x1f) != '\0') && (local_6 = iVar1 + 1, SCARRY2(iVar1,1))) {
          uVar7 = 0x1158;
          local_6 = FUN_1158_043e(0x1130);
        }
        if (iVar1 == iVar2) break;
        iVar1 = iVar1 + 1;
      }
    }
  }
  uVar6 = (undefined2)((ulong)*(undefined4 *)(iVar3 + 0x32c) >> 0x10);
  iVar4 = (int)*(undefined4 *)(iVar3 + 0x32c);
  if (*(char *)(iVar4 + 0x31) != '\0') {
    uVar7 = 0x1130;
    iVar1 = FUN_1130_1326(iVar4,uVar6);
    iVar2 = iVar1 + -1;
    if (SBORROW2(iVar1,1)) {
      uVar7 = 0x1158;
      iVar2 = FUN_1158_043e(0x1130);
    }
    if (-1 < iVar2) {
      iVar1 = 0;
      while( true ) {
        uVar7 = 0x1130;
        uVar8 = FUN_1130_1353(iVar4,uVar6,iVar1);
        if ((*(char *)((int)uVar8 + 0x1f) != '\0') && (SCARRY2(iVar1,1))) {
          uVar7 = 0x1158;
          FUN_1158_043e(0x1130);
        }
        if (iVar1 == iVar2) break;
        iVar1 = iVar1 + 1;
      }
    }
  }
  uVar6 = (undefined2)((ulong)*(undefined4 *)(iVar3 + 0x350) >> 0x10);
  iVar4 = (int)*(undefined4 *)(iVar3 + 0x350);
  if (*(char *)(iVar4 + 0x31) != '\0') {
    uVar7 = 0x1130;
    iVar1 = FUN_1130_1326(iVar4,uVar6);
    iVar2 = iVar1 + -1;
    if (SBORROW2(iVar1,1)) {
      uVar7 = 0x1158;
      iVar2 = FUN_1158_043e(0x1130);
    }
    if (-1 < iVar2) {
      iVar1 = 0;
      while( true ) {
        uVar7 = 0x1130;
        uVar8 = FUN_1130_1353(iVar4,uVar6,iVar1);
        if ((*(char *)((int)uVar8 + 0x1f) != '\0') && (SCARRY2(iVar1,1))) {
          uVar7 = 0x1158;
          FUN_1158_043e(0x1130);
        }
        if (iVar1 == iVar2) break;
        iVar1 = iVar1 + 1;
      }
    }
  }
  iVar4 = *(int *)(iVar3 + 0x88a);
  if (iVar4 == 0) {
    FUN_1020_4c4d(iVar3,uVar5);
  }
  else if (iVar4 == 0xb) {
    FUN_1020_5051(iVar3,uVar5);
  }
  else if (iVar4 == 0xc) {
    FUN_1020_5476(iVar3,uVar5);
  }
  else if (iVar4 == 0xd) {
    FUN_1020_58ff(iVar3,uVar5,local_6);
  }
  else if (iVar4 == 0x15) {
    FUN_1020_5d8d(iVar3,uVar5,local_6);
  }
  else if (iVar4 == 0x16) {
    FUN_1020_624d(iVar3,uVar5,local_6);
  }
  else if (iVar4 == 0x1f) {
    FUN_1020_66ee(iVar3,uVar5,local_6);
  }
  else if (iVar4 == 0x20) {
    FUN_1020_6be2(iVar3,uVar5,local_6);
  }
  else if (iVar4 == 0x29) {
    FUN_1020_709f(iVar3,uVar5);
  }
  else if (iVar4 == 0x2a) {
    FUN_1020_745c(iVar3,uVar5);
  }
  else if (iVar4 == 0x2b) {
    FUN_1020_78ab(iVar3,uVar5);
  }
  else if (iVar4 == 5) {
    FUN_1020_4bb1(iVar3,uVar5);
  }
  else {
    MESSAGEBEEP(uVar7,0x30);
  }
  return;
}



/* ---- FUN_1020_85c2 @ 1020:85c2  (182 octets) ---- */

void __stdcall16far FUN_1020_85c2(undefined4 param_1,undefined2 param_2,undefined2 param_3)

{
  int iVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined4 uVar6;
  long lVar7;
  undefined2 uVar8;
  
  FUN_1158_0444();
  uVar6 = FUN_1158_2273(0x94,0x1130,param_2,param_3);
  FUN_1130_1275(uVar6,1);
  uVar4 = (undefined2)((ulong)param_1 >> 0x10);
  if (*(char *)((int)uVar6 + 0x1f) != '\0') {
    uVar6 = *(undefined4 *)((int)param_1 + 0x2f8);
    uVar5 = (undefined2)((ulong)uVar6 >> 0x10);
    uVar3 = (undefined2)uVar6;
    iVar1 = FUN_1130_1326(uVar3,uVar5);
    iVar2 = iVar1 + -1;
    if (SBORROW2(iVar1,1)) {
      iVar2 = FUN_1158_043e(0x1130);
    }
    if (-1 < iVar2) {
      iVar1 = 0;
      while( true ) {
        lVar7 = FUN_1130_1353(uVar3,uVar5,iVar1);
        if (lVar7 != CONCAT22(param_3,param_2)) {
          uVar8 = 0;
          uVar6 = FUN_1130_1353(uVar3,uVar5,iVar1);
          FUN_1130_1275(uVar6,uVar8);
        }
        if (iVar1 == iVar2) break;
        iVar1 = iVar1 + 1;
      }
    }
  }
  FUN_1020_837d((int)param_1,uVar4);
  return;
}



/* ---- FUN_1020_8678 @ 1020:8678  (182 octets) ---- */

void __stdcall16far FUN_1020_8678(undefined4 param_1,undefined2 param_2,undefined2 param_3)

{
  int iVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined4 uVar6;
  long lVar7;
  undefined2 uVar8;
  
  FUN_1158_0444();
  uVar6 = FUN_1158_2273(0x94,0x1130,param_2,param_3);
  FUN_1130_1275(uVar6,1);
  uVar4 = (undefined2)((ulong)param_1 >> 0x10);
  if (*(char *)((int)uVar6 + 0x1f) != '\0') {
    uVar6 = *(undefined4 *)((int)param_1 + 0x32c);
    uVar5 = (undefined2)((ulong)uVar6 >> 0x10);
    uVar3 = (undefined2)uVar6;
    iVar1 = FUN_1130_1326(uVar3,uVar5);
    iVar2 = iVar1 + -1;
    if (SBORROW2(iVar1,1)) {
      iVar2 = FUN_1158_043e(0x1130);
    }
    if (-1 < iVar2) {
      iVar1 = 0;
      while( true ) {
        lVar7 = FUN_1130_1353(uVar3,uVar5,iVar1);
        if (lVar7 != CONCAT22(param_3,param_2)) {
          uVar8 = 0;
          uVar6 = FUN_1130_1353(uVar3,uVar5,iVar1);
          FUN_1130_1275(uVar6,uVar8);
        }
        if (iVar1 == iVar2) break;
        iVar1 = iVar1 + 1;
      }
    }
  }
  FUN_1020_837d((int)param_1,uVar4);
  return;
}



/* ---- FUN_1020_872e @ 1020:872e  (182 octets) ---- */

void __stdcall16far FUN_1020_872e(undefined4 param_1,undefined2 param_2,undefined2 param_3)

{
  int iVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined4 uVar6;
  long lVar7;
  undefined2 uVar8;
  
  FUN_1158_0444();
  uVar6 = FUN_1158_2273(0x94,0x1130,param_2,param_3);
  FUN_1130_1275(uVar6,1);
  uVar4 = (undefined2)((ulong)param_1 >> 0x10);
  if (*(char *)((int)uVar6 + 0x1f) != '\0') {
    uVar6 = *(undefined4 *)((int)param_1 + 0x350);
    uVar5 = (undefined2)((ulong)uVar6 >> 0x10);
    uVar3 = (undefined2)uVar6;
    iVar1 = FUN_1130_1326(uVar3,uVar5);
    iVar2 = iVar1 + -1;
    if (SBORROW2(iVar1,1)) {
      iVar2 = FUN_1158_043e(0x1130);
    }
    if (-1 < iVar2) {
      iVar1 = 0;
      while( true ) {
        lVar7 = FUN_1130_1353(uVar3,uVar5,iVar1);
        if (lVar7 != CONCAT22(param_3,param_2)) {
          uVar8 = 0;
          uVar6 = FUN_1130_1353(uVar3,uVar5,iVar1);
          FUN_1130_1275(uVar6,uVar8);
        }
        if (iVar1 == iVar2) break;
        iVar1 = iVar1 + 1;
      }
    }
  }
  FUN_1020_837d((int)param_1,uVar4);
  return;
}



/* ---- FUN_1020_88e2 @ 1020:88e2  (140 octets) ---- */

void __stdcall16far FUN_1020_88e2(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  
  FUN_1158_0444();
  uVar5 = (undefined2)((ulong)param_1 >> 0x10);
  iVar3 = (int)param_1;
  uVar6 = (undefined2)((ulong)*(undefined4 *)(iVar3 + 0x1ec) >> 0x10);
  iVar2 = (int)*(undefined4 *)(iVar3 + 0x1ec);
  uVar7 = (undefined2)((ulong)*(undefined4 *)(iVar3 + 0x198) >> 0x10);
  iVar4 = (int)*(undefined4 *)(iVar3 + 0x198);
  FUN_1108_2a93(iVar2,uVar6,*(undefined2 *)(iVar4 + 0x34),*(undefined2 *)(iVar4 + 0x36));
  cVar1 = FUN_1108_2b0d(iVar2,uVar6);
  if (cVar1 != '\0') {
    FUN_1138_1deb((int)*(undefined4 *)(iVar3 + 0x198),
                  (int)((ulong)*(undefined4 *)(iVar3 + 0x198) >> 0x10),*(undefined2 *)(iVar2 + 0x1f)
                  ,*(undefined2 *)(iVar2 + 0x21));
    iVar2 = FUN_1128_11cc((int)*(undefined4 *)(iVar2 + 0x1f),
                          (int)((ulong)*(undefined4 *)(iVar2 + 0x1f) >> 0x10));
    iVar4 = (int)((long)iVar2 * 2);
    if ((long)iVar4 != (long)iVar2 * 2) {
      iVar4 = FUN_1158_043e(0x1128);
    }
    FUN_10f8_71b6((int)*(undefined4 *)(iVar3 + 0x198),
                  (int)((ulong)*(undefined4 *)(iVar3 + 0x198) >> 0x10),iVar4);
  }
  return;
}



/* ---- FUN_1020_896e @ 1020:896e  (125 octets) ---- */

void __stdcall16far FUN_1020_896e(undefined4 param_1)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  
  FUN_1158_0444();
  uVar5 = (undefined2)((ulong)param_1 >> 0x10);
  iVar3 = (int)param_1;
  uVar6 = (undefined2)((ulong)*(undefined4 *)(iVar3 + 0x1ec) >> 0x10);
  iVar1 = (int)*(undefined4 *)(iVar3 + 0x1ec);
  uVar7 = (undefined2)((ulong)*(undefined4 *)(iVar3 + 0x188) >> 0x10);
  iVar4 = (int)*(undefined4 *)(iVar3 + 0x188);
  FUN_1108_2a93(iVar1,uVar6,*(undefined2 *)(iVar4 + 0x34),*(undefined2 *)(iVar4 + 0x36));
  cVar2 = FUN_1108_2b0d(iVar1,uVar6);
  if (cVar2 != '\0') {
    FUN_1138_1deb((int)*(undefined4 *)(iVar3 + 0x188),
                  (int)((ulong)*(undefined4 *)(iVar3 + 0x188) >> 0x10),*(undefined2 *)(iVar1 + 0x1f)
                  ,*(undefined2 *)(iVar1 + 0x21));
    FUN_1138_17e1((int)*(undefined4 *)(iVar3 + 0x188),
                  (int)((ulong)*(undefined4 *)(iVar3 + 0x188) >> 0x10),
                  *(undefined2 *)((int)*(undefined4 *)(iVar3 + 0x414) + 0x24));
  }
  return;
}



/* ---- FUN_1020_89eb @ 1020:89eb  (40 octets) ---- */

void __stdcall16far FUN_1020_89eb(undefined4 param_1)

{
  undefined2 uVar1;
  
  FUN_1158_0444();
  uVar1 = (undefined2)((ulong)param_1 >> 0x10);
  FUN_1140_77b2((int)DAT_1160_2c2a,(int)((ulong)DAT_1160_2c2a >> 0x10),
                *(undefined2 *)((int)param_1 + 0xac),*(undefined2 *)((int)param_1 + 0xae),1);
  return;
}



/* ---- FUN_1020_8a13 @ 1020:8a13  (31 octets) ---- */

void __stdcall16far FUN_1020_8a13(void)

{
  FUN_1158_0444();
  FUN_1140_77b2((int)DAT_1160_2c2a,(int)((ulong)DAT_1160_2c2a >> 0x10),0,0,3);
  return;
}



/* ---- FUN_1020_8a32 @ 1020:8a32  (33 octets) ---- */

void __stdcall16far FUN_1020_8a32(void)

{
  FUN_1158_0444();
  FUN_1140_77b2((int)DAT_1160_2c2a,(int)((ulong)DAT_1160_2c2a >> 0x10),0x1a0,0x1160,0x105);
  return;
}



/* ---- FUN_1020_8a53 @ 1020:8a53  (31 octets) ---- */

void __stdcall16far FUN_1020_8a53(void)

{
  FUN_1158_0444();
  FUN_1140_77b2((int)DAT_1160_2c2a,(int)((ulong)DAT_1160_2c2a >> 0x10),0,0,4);
  return;
}



/* ---- FUN_1020_8a72 @ 1020:8a72  (29 octets) ---- */

void __stdcall16far FUN_1020_8a72(void)

{
  undefined2 uVar1;
  
  uVar1 = 0x8a7d;
  FUN_1158_0444();
  FUN_1140_5d45((int)DAT_1160_2008,(int)((ulong)DAT_1160_2008 >> 0x10),uVar1);
  return;
}



/* ---- FUN_1020_8a8f @ 1020:8a8f  (82 octets) ---- */

void __stdcall16far FUN_1020_8a8f(undefined4 param_1,undefined param_2)

{
  byte extraout_AH;
  int iVar1;
  byte extraout_AH_00;
  int iVar2;
  undefined2 uVar3;
  
  FUN_1158_0444();
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  iVar2 = (int)param_1;
  *(undefined *)(iVar2 + 0x85c) = param_2;
  *(undefined *)(iVar2 + 0x85d) = 1;
  iVar1 = (uint)extraout_AH * 0x100;
  if (*(char *)(iVar2 + 0x85c) == '\0') {
    iVar1 = iVar1 + 1;
  }
  FUN_1130_1275((int)*(undefined4 *)(iVar2 + 0x3b8),
                (int)((ulong)*(undefined4 *)(iVar2 + 0x3b8) >> 0x10),iVar1);
  iVar1 = (uint)extraout_AH_00 * 0x100;
  if (*(char *)(iVar2 + 0x85c) == '\0') {
    iVar1 = iVar1 + 1;
  }
  FUN_1110_2470((int)*(undefined4 *)(iVar2 + 0x408),
                (int)((ulong)*(undefined4 *)(iVar2 + 0x408) >> 0x10),iVar1);
  return;
}



/* ---- FUN_1020_8ae1 @ 1020:8ae1  (30 octets) ---- */

void __stdcall16far FUN_1020_8ae1(undefined4 param_1,undefined2 param_2,undefined2 param_3)

{
  FUN_1158_0444();
  FUN_1020_8aff((int)param_1,(int)((ulong)param_1 >> 0x10),param_2,param_3);
  return;
}



/* ---- FUN_1020_8aff @ 1020:8aff  (85 octets) ---- */

void __stdcall16far FUN_1020_8aff(undefined4 param_1)

{
  byte extraout_AH;
  int iVar1;
  int iVar2;
  undefined2 uVar3;
  
  FUN_1158_0444();
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  iVar2 = (int)param_1;
  iVar1 = (uint)extraout_AH * 0x100;
  if (*(char *)(iVar2 + 0x85c) == '\0') {
    iVar1 = iVar1 + 1;
  }
  FUN_1020_8a8f(iVar2,uVar3,iVar1);
  if (*(char *)(iVar2 + 0x85c) == '\0') {
    *(undefined8 *)(iVar2 + 0x85e) = *(undefined8 *)(iVar2 + 0x86e);
    *(undefined8 *)(iVar2 + 0x866) = *(undefined8 *)(iVar2 + 0x876);
  }
  FUN_1020_837d(iVar2,uVar3);
  return;
}




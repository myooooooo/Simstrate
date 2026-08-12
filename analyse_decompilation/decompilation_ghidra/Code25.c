/* Simstrat (FR).EXE - segment Code25 - 48 fonctions
   Decompile par Ghidra 11.2.1 (x86 16 bits, chargeur NE). */

/* ---- FUN_10c0_1160 @ 10c0:1160  (28 octets) ---- */

undefined2 FUN_10c0_1160(void)

{
  code *pcVar1;
  undefined2 uVar2;
  int iVar3;
  
  iVar3 = 0;
  pcVar1 = (code *)swi(0x2f);
  uVar2 = (*pcVar1)();
  if (iVar3 != 0) {
    pcVar1 = (code *)swi(0x2f);
    uVar2 = (*pcVar1)();
  }
  return uVar2;
}



/* ---- FUN_10c0_117c @ 10c0:117c  (66 octets) ---- */

undefined FUN_10c0_117c(void)

{
  code *pcVar1;
  undefined auStack_202 [18];
  char cStack_1f0;
  char cStack_1eb;
  undefined2 uStack_6;
  undefined local_3;
  
  local_3 = 0;
  uStack_6 = 0x1160;
  pcVar1 = (code *)swi(0x25);
  (*pcVar1)();
  if (((auStack_202 < (undefined *)0xfffe) && (cStack_1eb == -8)) && (cStack_1f0 == '\x01')) {
    local_3 = 1;
  }
  return local_3;
}



/* ---- FUN_10c0_11be @ 10c0:11be  (86 octets) ---- */

char FUN_10c0_11be(undefined2 param_1)

{
  char cVar1;
  uint uVar2;
  undefined2 uVar3;
  char local_3;
  
  uVar3 = param_1;
  local_3 = GETDRIVETYPE();
  if ((local_3 == '\x03') || (local_3 == '\x04')) {
    cVar1 = FUN_10c0_1160(param_1,uVar3);
    if (cVar1 == '\0') {
      if (local_3 == '\x03') {
        uVar2 = GETWINFLAGS(0x14d0);
        if ((uVar2 & 0x4000) == 0) {
          cVar1 = FUN_10c0_117c(param_1);
          if (cVar1 != '\0') {
            local_3 = '\x06';
          }
        }
      }
    }
    else {
      local_3 = '\x05';
    }
  }
  return local_3;
}



/* ---- FUN_10c0_121b @ 10c0:121b  (265 octets) ---- */

void FUN_10c0_121b(undefined *param_1)

{
  undefined *puVar1;
  undefined2 uVar2;
  undefined2 unaff_CS;
  undefined2 unaff_SS;
  undefined in_ZF;
  undefined *puVar3;
  undefined2 uVar4;
  undefined *puVar5;
  undefined2 uVar6;
  undefined local_206 [256];
  undefined local_106 [256];
  int local_6;
  char local_3;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  puVar1 = (undefined *)param_1;
  FUN_1158_18be(0x1214,unaff_CS,puVar1,uVar2);
  if ((bool)in_ZF) {
    *param_1 = 0;
  }
  else {
    if (puVar1[1] == '\\') {
      local_3 = '\x01';
      puVar5 = local_106;
      uVar4 = unaff_SS;
      FUN_1158_180b(0xff,2,puVar1,uVar2);
      FUN_1158_17e7(0x4f,puVar1,uVar2,puVar5,uVar4);
    }
    else {
      local_3 = '\0';
    }
    if (puVar1[1] == '.') {
      puVar5 = local_106;
      uVar4 = unaff_SS;
      FUN_1158_180b(0xff,5,puVar1,uVar2);
      FUN_1158_17e7(0x4f,puVar1,uVar2,puVar5,uVar4);
    }
    local_6 = FUN_1158_1878(puVar1,uVar2,0x1214,0x1158);
    if (local_6 == 0) {
      *param_1 = 0;
    }
    else {
      puVar5 = local_206;
      uVar6 = unaff_SS;
      FUN_1158_17cd(0x1216,0x1158);
      puVar3 = local_106;
      uVar4 = unaff_SS;
      FUN_1158_180b(0xff,local_6 + 1,puVar1,uVar2);
      FUN_1158_184c(puVar3,uVar4);
      FUN_1158_17e7(0x4f,puVar1,uVar2,puVar5,uVar6);
    }
    if (local_3 != '\0') {
      puVar5 = local_106;
      FUN_1158_17cd(0x1214,0x1158);
      FUN_1158_184c(puVar1,uVar2);
      FUN_1158_17e7(0x4f,puVar1,uVar2,puVar5,unaff_SS);
    }
  }
  return;
}



/* ---- FUN_10c0_1331 @ 10c0:1331  (382 octets) ---- */

void __stdcall16far
FUN_10c0_1331(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 unaff_SS;
  bool bVar4;
  undefined *puVar5;
  undefined2 uVar6;
  undefined local_1f8 [256];
  int local_f8;
  undefined local_f6 [80];
  char local_a6 [80];
  char local_56 [2];
  char local_54;
  char local_6 [4];
  
  uVar3 = (undefined2)((ulong)param_4 >> 0x10);
  uVar2 = (undefined2)param_4;
  FUN_1158_17e7(0x4f,uVar2,uVar3,(int)param_3,(int)((ulong)param_3 >> 0x10));
  puVar5 = local_1f8;
  uVar6 = unaff_SS;
  FUN_1150_0b6e(uVar2,uVar3);
  FUN_1158_17e7(0x4f,local_56,unaff_SS,puVar5,uVar6);
  puVar5 = local_1f8;
  uVar6 = unaff_SS;
  FUN_1150_0bc1(uVar2,uVar3);
  FUN_1158_17e7(0x4f,local_a6,unaff_SS,puVar5,uVar6);
  local_f8 = FUN_1158_1878(local_a6,unaff_SS,0x1324,0x1158);
  if (0 < local_f8) {
    local_a6[0] = (char)local_f8 + -1;
  }
  puVar5 = local_1f8;
  uVar6 = unaff_SS;
  FUN_1150_0c17(uVar2,uVar3);
  FUN_1158_17e7(0x4f,local_f6,unaff_SS,puVar5,uVar6);
  if (local_54 == ':') {
    puVar5 = local_1f8;
    uVar6 = unaff_SS;
    FUN_1158_180b(2,1,local_56,unaff_SS);
    FUN_1158_17e7(3,local_6,unaff_SS,puVar5,uVar6);
    puVar5 = local_1f8;
    uVar6 = unaff_SS;
    FUN_1158_180b(0xff,3,local_56,unaff_SS);
    FUN_1158_17e7(0x4f,local_56,unaff_SS,puVar5,uVar6);
  }
  else {
    local_6[0] = '\0';
  }
  while ((local_56[0] != '\0' || (local_6[0] != '\0'))) {
    iVar1 = FUN_1128_2003((int)param_2,(int)((ulong)param_2 >> 0x10),uVar2,uVar3);
    bVar4 = iVar1 == param_1;
    if (iVar1 <= param_1) {
      return;
    }
    FUN_1158_18be(0x1326,0x1128,local_56,unaff_SS);
    if (bVar4) {
      local_6[0] = '\0';
      FUN_1158_17e7(0x4f,local_56,unaff_SS,0x132c,0x1158);
    }
    else if (local_56[0] == '\0') {
      local_6[0] = '\0';
    }
    else {
      FUN_10c0_121b(local_56,unaff_SS);
    }
    puVar5 = local_1f8;
    uVar6 = unaff_SS;
    FUN_1158_17cd(local_6,unaff_SS);
    FUN_1158_184c(local_56,unaff_SS);
    FUN_1158_184c(local_a6,unaff_SS);
    FUN_1158_184c(local_f6,unaff_SS);
    FUN_1158_17e7(0x4f,uVar2,uVar3,puVar5,uVar6);
  }
  return;
}



/* ---- FUN_10c0_19d4 @ 10c0:19d4  (83 octets) ---- */

undefined2 FUN_10c0_19d4(undefined4 param_1)

{
  undefined2 uVar1;
  undefined2 unaff_SS;
  undefined2 local_2c [18];
  undefined2 local_8;
  undefined2 local_6;
  
  local_6 = GETDC();
  uVar1 = FUN_1128_1016((int)param_1,(int)((ulong)param_1 >> 0x10));
  local_8 = SELECTOBJECT(0x1128,uVar1);
  GETTEXTMETRICS(0x14d0,local_2c,unaff_SS);
  SELECTOBJECT(0x14d0,local_8);
  RELEASEDC(0x14d0,local_6);
  return local_2c[0];
}



/* ---- FUN_10c0_1a99 @ 10c0:1a99  (106 octets) ---- */

void __stdcall16far FUN_10c0_1a99(undefined4 param_1,char param_2)

{
  int iVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  FUN_1158_1f7f((int)*(undefined4 *)(iVar1 + 0x128),
                (int)((ulong)*(undefined4 *)(iVar1 + 0x128) >> 0x10));
  FUN_1158_1f7f((int)*(undefined4 *)(iVar1 + 300),(int)((ulong)*(undefined4 *)(iVar1 + 300) >> 0x10)
               );
  FUN_1158_1f7f((int)*(undefined4 *)(iVar1 + 0x130),
                (int)((ulong)*(undefined4 *)(iVar1 + 0x130) >> 0x10));
  FUN_1158_1f7f((int)*(undefined4 *)(iVar1 + 0x134),
                (int)((ulong)*(undefined4 *)(iVar1 + 0x134) >> 0x10));
  FUN_1158_1f7f((int)*(undefined4 *)(iVar1 + 0x138),
                (int)((ulong)*(undefined4 *)(iVar1 + 0x138) >> 0x10));
  FUN_1120_5b36(iVar1,uVar2,0);
  if (param_2 != '\0') {
    FUN_1158_200f();
  }
  return;
}



/* ---- FUN_10c0_1ca4 @ 10c0:1ca4  (294 octets) ---- */

void __stdcall16far FUN_10c0_1ca4(undefined4 param_1,undefined param_2)

{
  undefined2 *puVar1;
  undefined4 *puVar2;
  char cVar3;
  char cVar4;
  undefined uVar5;
  int iVar6;
  undefined extraout_AH;
  uint uVar7;
  int iVar8;
  undefined2 uVar9;
  char *pcVar10;
  undefined2 unaff_SS;
  undefined *puVar11;
  undefined2 uVar12;
  undefined local_206 [256];
  int local_106;
  undefined local_104;
  undefined local_103;
  char local_102;
  int local_4;
  
  uVar9 = (undefined2)((ulong)param_1 >> 0x10);
  iVar8 = (int)param_1;
  iVar6 = FUN_1120_5c07(iVar8,uVar9);
  if (-1 < iVar6) {
    cVar3 = FUN_1158_1ef9(*(undefined *)(iVar8 + 0x126));
    cVar4 = FUN_1158_1ef9(param_2);
    if (cVar4 == cVar3) {
      return;
    }
  }
  cVar3 = FUN_10c0_1dca(iVar8,uVar9);
  if (cVar3 == '\x01') {
    uVar5 = FUN_1158_1ef9(param_2);
    *(undefined *)(iVar8 + 0x126) = uVar5;
  }
  else {
    cVar3 = FUN_1158_1ef9(param_2);
    *(char *)(iVar8 + 0x126) = cVar3 + ' ';
  }
  pcVar10 = (char *)0x1158;
  puVar2 = (undefined4 *)*(undefined4 *)(iVar8 + 0xd8);
  puVar1 = (undefined2 *)((int)*puVar2 + 0x10);
  local_106 = (*(code *)*puVar1)(0x1158,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10));
  local_106 = local_106 + -1;
  if (-1 < local_106) {
    local_4 = 0;
    while( true ) {
      puVar11 = local_206;
      puVar2 = (undefined4 *)*(undefined4 *)(iVar8 + 0xd8);
      puVar1 = (undefined2 *)((int)*puVar2 + 0xc);
      uVar12 = unaff_SS;
      (*(code *)*puVar1)(0x1158,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),local_4,puVar11);
      FUN_1158_17e7(0xff,&local_104,unaff_SS,puVar11,uVar12);
      cVar3 = FUN_1158_1ef9(CONCAT11(extraout_AH,*(undefined *)(iVar8 + 0x126)));
      pcVar10 = (char *)0x1158;
      cVar4 = FUN_1158_1ef9(local_103);
      if ((cVar4 == cVar3) && (local_102 == ':')) break;
      if (local_4 == local_106) goto LAB_10c0_1d98;
      local_4 = local_4 + 1;
    }
    pcVar10 = (char *)0x1120;
    FUN_1120_5c2e(iVar8,uVar9,local_4);
  }
LAB_10c0_1d98:
  uVar7 = *(uint *)(iVar8 + 0x122) | *(uint *)(iVar8 + 0x124);
  if (uVar7 != 0) {
    pcVar10 = (char *)s_sLongDate_1160_10b8 + 8;
    FUN_10c0_250d((int)*(undefined4 *)(iVar8 + 0x122),
                  (int)((ulong)*(undefined4 *)(iVar8 + 0x122) >> 0x10),
                  CONCAT11((char)(uVar7 >> 8),*(undefined *)(iVar8 + 0x126)));
  }
  FUN_1158_206a(pcVar10,iVar8,uVar9);
  return;
}



/* ---- FUN_10c0_1dca @ 10c0:1dca  (22 octets) ---- */

undefined __stdcall16far FUN_10c0_1dca(undefined4 param_1)

{
  return *(undefined *)((int)param_1 + 0x127);
}



/* ---- FUN_10c0_1de0 @ 10c0:1de0  (51 octets) ---- */

void __stdcall16far FUN_10c0_1de0(undefined4 *param_1,undefined param_2)

{
  undefined uVar1;
  undefined2 *puVar2;
  undefined extraout_AH;
  undefined4 *puVar3;
  undefined2 uVar4;
  
  uVar4 = (undefined2)((ulong)param_1 >> 0x10);
  puVar3 = (undefined4 *)param_1;
  *(undefined *)((int)puVar3 + 0x127) = param_2;
  uVar1 = *(undefined *)((int)puVar3 + 0x126);
  puVar2 = (undefined2 *)((int)*param_1 + 0x88);
  (*(code *)*puVar2)();
  FUN_10c0_1ca4(puVar3,uVar4,CONCAT11(extraout_AH,uVar1));
  return;
}



/* ---- FUN_10c0_1e13 @ 10c0:1e13  (91 octets) ---- */

void __stdcall16far FUN_10c0_1e13(undefined4 param_1,undefined2 param_2,undefined2 param_3)

{
  int iVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  if (*(int *)(iVar1 + 0x122) != 0 || *(int *)(iVar1 + 0x124) != 0) {
    uVar4 = (undefined2)((ulong)*(undefined4 *)(iVar1 + 0x122) >> 0x10);
    iVar2 = (int)*(undefined4 *)(iVar1 + 0x122);
    *(undefined2 *)(iVar2 + 0x106) = 0;
    *(undefined2 *)(iVar2 + 0x108) = 0;
  }
  *(undefined2 *)(iVar1 + 0x122) = param_2;
  *(undefined2 *)(iVar1 + 0x124) = param_3;
  if (*(int *)(iVar1 + 0x122) != 0 || *(int *)(iVar1 + 0x124) != 0) {
    uVar4 = (undefined2)((ulong)*(undefined4 *)(iVar1 + 0x122) >> 0x10);
    iVar2 = (int)*(undefined4 *)(iVar1 + 0x122);
    *(int *)(iVar2 + 0x106) = iVar1;
    *(undefined2 *)(iVar2 + 0x108) = uVar3;
  }
  return;
}



/* ---- FUN_10c0_1e6e @ 10c0:1e6e  (46 octets) ---- */

void __stdcall16far FUN_10c0_1e6e(undefined4 *param_1)

{
  undefined2 *puVar1;
  undefined extraout_AH;
  undefined4 *puVar2;
  undefined2 uVar3;
  
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  puVar2 = (undefined4 *)param_1;
  FUN_1120_5df4(puVar2,uVar3);
  puVar1 = (undefined2 *)((int)*param_1 + 0x88);
  (*(code *)*puVar1)(0x1120,puVar2,uVar3);
  FUN_10c0_1ca4(puVar2,uVar3,CONCAT11(extraout_AH,*(undefined *)((int)puVar2 + 0x126)));
  return;
}



/* ---- FUN_10c0_206e @ 10c0:206e  (43 octets) ---- */

void __stdcall16far FUN_10c0_206e(undefined4 param_1,undefined2 param_2,undefined2 param_3)

{
  undefined2 uVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  uVar1 = (undefined2)param_1;
  FUN_1138_573a(uVar1,uVar2,param_2,param_3);
  FUN_10c0_2099(uVar1,uVar2);
  FUN_1138_405a(uVar1,uVar2);
  return;
}



/* ---- FUN_10c0_2099 @ 10c0:2099  (80 octets) ---- */

void __stdcall16far FUN_10c0_2099(undefined4 param_1)

{
  undefined2 *puVar1;
  int iVar2;
  int iVar3;
  undefined2 uVar4;
  int local_4;
  
  uVar4 = (undefined2)((ulong)param_1 >> 0x10);
  iVar3 = (int)param_1;
  local_4 = FUN_10c0_19d4(*(undefined2 *)(iVar3 + 0x34),*(undefined2 *)(iVar3 + 0x36));
  puVar1 = (undefined2 *)((int)*(undefined4 *)*(undefined4 *)(iVar3 + 0x128) + 0x18);
  iVar2 = (*(code *)*puVar1)();
  if (local_4 < iVar2) {
    puVar1 = (undefined2 *)((int)*(undefined4 *)*(undefined4 *)(iVar3 + 0x128) + 0x18);
    local_4 = (*(code *)*puVar1)();
  }
  FUN_1120_5d35(iVar3,uVar4,local_4);
  return;
}



/* ---- FUN_10c0_20e9 @ 10c0:20e9  (302 octets) ---- */

void __stdcall16far FUN_10c0_20e9(undefined4 param_1)

{
  undefined2 uVar1;
  undefined extraout_AH;
  undefined extraout_AH_00;
  undefined extraout_AH_01;
  undefined extraout_AH_02;
  int iVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  
  uVar4 = FUN_1128_56bd(0x83f,0x1128,1);
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  iVar2 = (int)param_1;
  *(undefined2 *)(iVar2 + 0x128) = (int)uVar4;
  *(undefined2 *)(iVar2 + 0x12a) = (int)((ulong)uVar4 >> 0x10);
  uVar1 = LOADBITMAP(0x1128,0x974,0x1160);
  FUN_1128_6104((int)*(undefined4 *)(iVar2 + 0x128),
                (int)((ulong)*(undefined4 *)(iVar2 + 0x128) >> 0x10),uVar1);
  uVar4 = FUN_1128_56bd(0x83f,0x1128,CONCAT11(extraout_AH,1));
  *(undefined2 *)(iVar2 + 300) = (int)uVar4;
  *(undefined2 *)(iVar2 + 0x12e) = (int)((ulong)uVar4 >> 0x10);
  uVar1 = LOADBITMAP(0x1128,0x97b,0x1160);
  FUN_1128_6104((int)*(undefined4 *)(iVar2 + 300),(int)((ulong)*(undefined4 *)(iVar2 + 300) >> 0x10)
                ,uVar1);
  uVar4 = FUN_1128_56bd(0x83f,0x1128,CONCAT11(extraout_AH_00,1));
  *(undefined2 *)(iVar2 + 0x130) = (int)uVar4;
  *(undefined2 *)(iVar2 + 0x132) = (int)((ulong)uVar4 >> 0x10);
  uVar1 = LOADBITMAP(0x1128,0x980,0x1160);
  FUN_1128_6104((int)*(undefined4 *)(iVar2 + 0x130),
                (int)((ulong)*(undefined4 *)(iVar2 + 0x130) >> 0x10),uVar1);
  uVar4 = FUN_1128_56bd(0x83f,0x1128,CONCAT11(extraout_AH_01,1));
  *(undefined2 *)(iVar2 + 0x134) = (int)uVar4;
  *(undefined2 *)(iVar2 + 0x136) = (int)((ulong)uVar4 >> 0x10);
  uVar1 = LOADBITMAP(0x1128,0x988,0x1160);
  FUN_1128_6104((int)*(undefined4 *)(iVar2 + 0x134),
                (int)((ulong)*(undefined4 *)(iVar2 + 0x134) >> 0x10),uVar1);
  uVar4 = FUN_1128_56bd(0x83f,0x1128,CONCAT11(extraout_AH_02,1));
  *(undefined2 *)(iVar2 + 0x138) = (int)uVar4;
  *(undefined2 *)(iVar2 + 0x13a) = (int)((ulong)uVar4 >> 0x10);
  uVar1 = LOADBITMAP(0x1128,0x98e,0x1160);
  FUN_1128_6104((int)*(undefined4 *)(iVar2 + 0x138),
                (int)((ulong)*(undefined4 *)(iVar2 + 0x138) >> 0x10),uVar1);
  return;
}



/* ---- FUN_10c0_2217 @ 10c0:2217  (68 octets) ---- */

void __stdcall16far FUN_10c0_2217(undefined4 param_1,char param_2,int param_3,int param_4)

{
  int iVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  FUN_1138_1632(iVar1,uVar2,param_2,param_3,param_4);
  if (param_2 == '\x01') {
    if ((param_4 == *(int *)(iVar1 + 0x124)) && (param_3 == *(int *)(iVar1 + 0x122))) {
      *(undefined2 *)(iVar1 + 0x122) = 0;
      *(undefined2 *)(iVar1 + 0x124) = 0;
    }
  }
  return;
}



/* ---- FUN_10c0_225b @ 10c0:225b  (40 octets) ---- */

void __stdcall16far FUN_10c0_225b(undefined4 param_1)

{
  undefined2 *puVar1;
  
  if (*(int *)((int)param_1 + 0x13e) != 0) {
    puVar1 = (undefined2 *)((int)param_1 + 0x13c);
    (*(code *)*puVar1)();
  }
  return;
}



/* ---- FUN_10c0_2283 @ 10c0:2283  (73 octets) ---- */

int FUN_10c0_2283(byte *param_1)

{
  uint local_6;
  int local_4;
  
  local_4 = 0;
  if (*param_1 != 0) {
    local_6 = 1;
    while( true ) {
      if (((byte *)param_1)[local_6] == 0x5c) {
        local_4 = local_4 + 1;
      }
      if (local_6 == *param_1) break;
      local_6 = local_6 + 1;
    }
  }
  return local_4;
}



/* ---- FUN_10c0_23d5 @ 10c0:23d5  (81 octets) ---- */

undefined4 * __stdcall16far FUN_10c0_23d5(undefined4 *param_1,char param_2)

{
  undefined2 *puVar1;
  undefined4 *puVar2;
  undefined2 uVar3;
  
  if (param_2 != '\0') {
    FUN_1158_1fe2();
  }
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  puVar2 = (undefined4 *)param_1;
  FUN_1128_56bd(puVar2,uVar3,0);
  puVar1 = (undefined2 *)((int)*param_1 + 0x28);
  (*(code *)*puVar1)(0x1128,puVar2,uVar3,0x10);
  puVar1 = (undefined2 *)((int)*param_1 + 0x24);
  (*(code *)*puVar1)(0x1128,puVar2,uVar3,0x10);
  if (param_2 != '\0') {
    DAT_1160_1858 = puVar2;
  }
  return param_1;
}



/* ---- FUN_10c0_24bf @ 10c0:24bf  (76 octets) ---- */

void __stdcall16far FUN_10c0_24bf(undefined4 param_1,char param_2)

{
  int iVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  FUN_1158_1f7f((int)*(undefined4 *)(iVar1 + 0x10f),
                (int)((ulong)*(undefined4 *)(iVar1 + 0x10f) >> 0x10));
  FUN_1158_1f7f((int)*(undefined4 *)(iVar1 + 0x113),
                (int)((ulong)*(undefined4 *)(iVar1 + 0x113) >> 0x10));
  FUN_1158_1f7f((int)*(undefined4 *)(iVar1 + 0x117),
                (int)((ulong)*(undefined4 *)(iVar1 + 0x117) >> 0x10));
  FUN_1120_76c5(iVar1,uVar2,0);
  if (param_2 != '\0') {
    FUN_1158_200f();
  }
  return;
}



/* ---- FUN_10c0_250d @ 10c0:250d  (141 octets) ---- */

void __stdcall16far FUN_10c0_250d(undefined4 *param_1,undefined param_2)

{
  undefined2 *puVar1;
  char cVar2;
  char cVar3;
  undefined2 uVar4;
  undefined4 *puVar5;
  undefined2 uVar6;
  undefined2 unaff_SS;
  undefined *puVar7;
  undefined local_102 [256];
  
  uVar6 = (undefined2)((ulong)param_1 >> 0x10);
  puVar5 = (undefined4 *)param_1;
  uVar4 = FUN_10c0_2f4b(puVar5,uVar6);
  cVar2 = FUN_1158_1ef9(uVar4);
  cVar3 = FUN_1158_1ef9(param_2);
  if (cVar3 != cVar2) {
    puVar7 = local_102;
    uVar4 = unaff_SS;
    FUN_1158_18e9(param_2);
    FUN_1158_184c(0x250b,0x1158);
    FUN_1158_0eb2(puVar7,uVar4);
    FUN_1158_0408();
    puVar7 = local_102;
    FUN_10c0_2616(puVar5,uVar6);
    FUN_1158_17e7(0xff,(int)puVar5 + 0x11b,uVar6,puVar7,unaff_SS);
    if (*(char *)((int)puVar5 + 0x10e) == '\0') {
      puVar1 = (undefined2 *)((int)*param_1 + 0x90);
      (*(code *)*puVar1)(0x1158,puVar5,uVar6);
      puVar1 = (undefined2 *)((int)*param_1 + 0x88);
      (*(code *)*puVar1)(0x1158,puVar5,uVar6);
    }
  }
  return;
}



/* ---- FUN_10c0_259a @ 10c0:259a  (91 octets) ---- */

void __stdcall16far FUN_10c0_259a(undefined4 param_1,undefined2 param_2,undefined2 param_3)

{
  int iVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  if (*(int *)(iVar1 + 0x102) != 0 || *(int *)(iVar1 + 0x104) != 0) {
    uVar4 = (undefined2)((ulong)*(undefined4 *)(iVar1 + 0x102) >> 0x10);
    iVar2 = (int)*(undefined4 *)(iVar1 + 0x102);
    *(undefined2 *)(iVar2 + 0x20b) = 0;
    *(undefined2 *)(iVar2 + 0x20d) = 0;
  }
  *(undefined2 *)(iVar1 + 0x102) = param_2;
  *(undefined2 *)(iVar1 + 0x104) = param_3;
  if (*(int *)(iVar1 + 0x102) != 0 || *(int *)(iVar1 + 0x104) != 0) {
    uVar4 = (undefined2)((ulong)*(undefined4 *)(iVar1 + 0x102) >> 0x10);
    iVar2 = (int)*(undefined4 *)(iVar1 + 0x102);
    *(int *)(iVar2 + 0x20b) = iVar1;
    *(undefined2 *)(iVar2 + 0x20d) = uVar3;
  }
  return;
}



/* ---- FUN_10c0_25f5 @ 10c0:25f5  (33 octets) ---- */

void __stdcall16far FUN_10c0_25f5(undefined4 param_1,undefined2 param_2,undefined2 param_3)

{
  int iVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  *(undefined2 *)(iVar1 + 0x10a) = param_2;
  *(undefined2 *)(iVar1 + 0x10c) = param_3;
  FUN_10c0_314d(iVar1,uVar2);
  return;
}



/* ---- FUN_10c0_2616 @ 10c0:2616  (52 octets) ---- */

void __stdcall16far FUN_10c0_2616(undefined2 param_1_00,undefined2 param_2,undefined4 param_1)

{
  undefined2 uVar1;
  undefined2 uVar2;
  undefined2 unaff_SS;
  undefined *puVar3;
  undefined local_102 [256];
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  uVar1 = (undefined2)param_1;
  FUN_1158_0e58(0xff,uVar1,uVar2,0);
  puVar3 = local_102;
  FUN_1150_07b7(uVar1,uVar2);
  FUN_1158_17e7(0xff,uVar1,uVar2,puVar3,unaff_SS);
  return;
}



/* ---- FUN_10c0_264a @ 10c0:264a  (29 octets) ---- */

void __stdcall16far FUN_10c0_264a(undefined4 param_1,undefined4 param_2)

{
  FUN_1158_17e7(0xff,(int)param_2,(int)((ulong)param_2 >> 0x10),(int)param_1 + 0x11b,
                (int)((ulong)param_1 >> 0x10));
  return;
}



/* ---- FUN_10c0_26cc @ 10c0:26cc  (48 octets) ---- */

void __stdcall16far FUN_10c0_26cc(undefined4 *param_1)

{
  undefined2 *puVar1;
  undefined2 uVar2;
  undefined4 *puVar3;
  undefined2 uVar4;
  undefined *puVar5;
  undefined local_102 [256];
  
  puVar5 = local_102;
  uVar4 = (undefined2)((ulong)param_1 >> 0x10);
  puVar3 = (undefined4 *)param_1;
  uVar2 = FUN_1120_77bb(puVar3,uVar4);
  FUN_10c0_2c98(puVar3,uVar4,uVar2);
  puVar1 = (undefined2 *)((int)*param_1 + 0x84);
  (*(code *)*puVar1)((char *)s_sLongDate_1160_10b8 + 8,puVar3,uVar4,puVar5);
  return;
}



/* ---- FUN_10c0_29d4 @ 10c0:29d4  (184 octets) ---- */

void __stdcall16far FUN_10c0_29d4(undefined4 param_1)

{
  undefined2 uVar1;
  undefined extraout_AH;
  undefined extraout_AH_00;
  int iVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  
  uVar4 = FUN_10c0_23d5(0x662,(char *)s_sLongDate_1160_10b8 + 8,1);
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  iVar2 = (int)param_1;
  *(undefined2 *)(iVar2 + 0x113) = (int)uVar4;
  *(undefined2 *)(iVar2 + 0x115) = (int)((ulong)uVar4 >> 0x10);
  uVar1 = LOADBITMAP((char *)s_sLongDate_1160_10b8 + 8,0x992,0x1160);
  FUN_1128_6104((int)*(undefined4 *)(iVar2 + 0x113),
                (int)((ulong)*(undefined4 *)(iVar2 + 0x113) >> 0x10),uVar1);
  uVar4 = FUN_10c0_23d5(0x662,(char *)s_sLongDate_1160_10b8 + 8,CONCAT11(extraout_AH,1));
  *(undefined2 *)(iVar2 + 0x10f) = (int)uVar4;
  *(undefined2 *)(iVar2 + 0x111) = (int)((ulong)uVar4 >> 0x10);
  uVar1 = LOADBITMAP((char *)s_sLongDate_1160_10b8 + 8,0x99d,0x1160);
  FUN_1128_6104((int)*(undefined4 *)(iVar2 + 0x10f),
                (int)((ulong)*(undefined4 *)(iVar2 + 0x10f) >> 0x10),uVar1);
  uVar4 = FUN_10c0_23d5(0x662,(char *)s_sLongDate_1160_10b8 + 8,CONCAT11(extraout_AH_00,1));
  *(undefined2 *)(iVar2 + 0x117) = (int)uVar4;
  *(undefined2 *)(iVar2 + 0x119) = (int)((ulong)uVar4 >> 0x10);
  uVar1 = LOADBITMAP((char *)s_sLongDate_1160_10b8 + 8,0x9aa,0x1160);
  FUN_1128_6104((int)*(undefined4 *)(iVar2 + 0x117),
                (int)((ulong)*(undefined4 *)(iVar2 + 0x117) >> 0x10),uVar1);
  return;
}



/* ---- FUN_10c0_2a8c @ 10c0:2a8c  (27 octets) ---- */

void __stdcall16far FUN_10c0_2a8c(undefined4 param_1)

{
  undefined2 uVar1;
  
  uVar1 = (undefined2)((ulong)param_1 >> 0x10);
  FUN_1138_2798((int)param_1,uVar1);
  FUN_10c0_26cc((int)param_1,uVar1);
  return;
}



/* ---- FUN_10c0_2c98 @ 10c0:2c98  (515 octets) ---- */

void __stdcall16far FUN_10c0_2c98(undefined4 param_1,int param_2,undefined *param_3)

{
  undefined2 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  undefined2 unaff_SS;
  undefined *puVar8;
  undefined *puVar9;
  undefined2 uVar10;
  undefined *puVar11;
  undefined local_30a [256];
  undefined local_20a [256];
  undefined4 local_10a;
  int local_106;
  int local_104;
  byte local_102 [256];
  
  *param_3 = 0;
  uVar6 = (undefined2)((ulong)param_1 >> 0x10);
  iVar4 = (int)param_1;
  puVar2 = (undefined4 *)*(undefined4 *)(iVar4 + 0xd8);
  uVar7 = (undefined2)((ulong)puVar2 >> 0x10);
  puVar5 = (undefined4 *)puVar2;
  puVar1 = (undefined2 *)((int)*puVar2 + 0x10);
  iVar3 = (*(code *)*puVar1)();
  if (param_2 < iVar3) {
    puVar11 = local_20a;
    uVar10 = unaff_SS;
    FUN_10c0_264a(iVar4,uVar6);
    FUN_1158_17e7(0xff,local_102,unaff_SS,puVar11,uVar10);
    puVar2 = (undefined4 *)*(undefined4 *)(iVar4 + 0xd8);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x14);
    local_10a = (*(code *)*puVar1)(0x1158,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),param_2,
                                   puVar5,uVar7);
    iVar3 = (int)((ulong)local_10a >> 0x10);
    puVar11 = (undefined *)param_3;
    uVar7 = (undefined2)((ulong)param_3 >> 0x10);
    if (param_2 == 0) {
      puVar9 = local_20a;
      uVar10 = unaff_SS;
      uVar6 = FUN_10c0_2f4b(iVar4,uVar6);
      FUN_1158_18e9(uVar6);
      FUN_1158_184c(0x2c93,0x1158);
      FUN_1158_17e7(0xff,puVar11,uVar7,puVar9,uVar10);
    }
    else if ((iVar3 == *(int *)(iVar4 + 0x111)) && ((int)local_10a == *(int *)(iVar4 + 0x10f))) {
      if (local_102[local_102[0]] == 0x5c) {
        puVar9 = local_30a;
        uVar10 = unaff_SS;
        FUN_1158_17cd(local_102,unaff_SS);
        puVar8 = local_20a;
        puVar2 = (undefined4 *)*(undefined4 *)(iVar4 + 0xd8);
        puVar1 = (undefined2 *)((int)*puVar2 + 0xc);
        uVar6 = unaff_SS;
        (*(code *)*puVar1)(0x1158,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),param_2,puVar8);
        FUN_1158_184c(puVar8,uVar6);
        FUN_1158_17e7(0xff,puVar11,uVar7,puVar9,uVar10);
      }
      else {
        puVar9 = local_20a;
        uVar10 = unaff_SS;
        FUN_1158_17cd(local_102,unaff_SS);
        FUN_1158_184c((undefined1 *)&DAT_1160_2c96,0x1158);
        puVar8 = local_30a;
        puVar2 = (undefined4 *)*(undefined4 *)(iVar4 + 0xd8);
        puVar1 = (undefined2 *)((int)*puVar2 + 0xc);
        uVar6 = unaff_SS;
        (*(code *)*puVar1)(0x1158,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),param_2,puVar8);
        FUN_1158_184c(puVar8,uVar6);
        FUN_1158_17e7(0xff,puVar11,uVar7,puVar9,uVar10);
      }
    }
    else if ((iVar3 == *(int *)(iVar4 + 0x119)) && ((int)local_10a == *(int *)(iVar4 + 0x117))) {
      FUN_1158_17e7(0xff,puVar11,uVar7,local_102,unaff_SS);
    }
    else {
      local_104 = 0;
      local_106 = 0;
      while ((iVar3 = local_104, param_2 + 1 != local_106 &&
             (iVar3 = local_104 + 1, iVar3 <= (int)(uint)local_102[0]))) {
        iVar4 = local_104 + 1;
        local_104 = iVar3;
        if (local_102[iVar4] == 0x5c) {
          local_106 = local_106 + 1;
        }
      }
      local_104 = iVar3;
      puVar9 = local_20a;
      uVar6 = unaff_SS;
      FUN_1158_180b(local_104 + -1,1,local_102,unaff_SS);
      FUN_1158_17e7(0xff,puVar11,uVar7,puVar9,uVar6);
    }
    puVar9 = local_20a;
    FUN_1150_0781(puVar11,uVar7);
    FUN_1158_17e7(0xff,puVar11,uVar7,puVar9,unaff_SS);
  }
  return;
}



/* ---- FUN_10c0_2ed8 @ 10c0:2ed8  (33 octets) ---- */

void __stdcall16far FUN_10c0_2ed8(undefined4 param_1,undefined2 param_2,undefined2 param_3)

{
  undefined2 uVar1;
  
  uVar1 = (undefined2)((ulong)param_1 >> 0x10);
  FUN_1138_573a((int)param_1,uVar1,param_2,param_3);
  FUN_10c0_2ef9((int)param_1,uVar1);
  return;
}



/* ---- FUN_10c0_2ef9 @ 10c0:2ef9  (82 octets) ---- */

void __stdcall16far FUN_10c0_2ef9(undefined4 param_1)

{
  undefined2 *puVar1;
  int iVar2;
  int iVar3;
  undefined2 uVar4;
  int local_4;
  
  uVar4 = (undefined2)((ulong)param_1 >> 0x10);
  iVar3 = (int)param_1;
  local_4 = FUN_10c0_19d4(*(undefined2 *)(iVar3 + 0x34),*(undefined2 *)(iVar3 + 0x36));
  puVar1 = (undefined2 *)((int)*(undefined4 *)*(undefined4 *)(iVar3 + 0x113) + 0x18);
  iVar2 = (*(code *)*puVar1)();
  if (local_4 < iVar2 + 1) {
    puVar1 = (undefined2 *)((int)*(undefined4 *)*(undefined4 *)(iVar3 + 0x113) + 0x18);
    local_4 = (*(code *)*puVar1)();
    local_4 = local_4 + 1;
  }
  FUN_1120_7893(iVar3,uVar4,local_4);
  return;
}



/* ---- FUN_10c0_2f4b @ 10c0:2f4b  (22 octets) ---- */

undefined __stdcall16far FUN_10c0_2f4b(undefined4 param_1)

{
  return *(undefined *)((int)param_1 + 0x11c);
}



/* ---- FUN_10c0_3092 @ 10c0:3092  (45 octets) ---- */

void __stdcall16far FUN_10c0_3092(undefined4 param_1,char *param_2)

{
  undefined2 uVar1;
  
  uVar1 = (undefined2)((ulong)param_1 >> 0x10);
  FUN_1138_521f((int)param_1,uVar1,(char *)param_2,(int)((ulong)param_2 >> 0x10));
  if (*param_2 == '\r') {
    FUN_10c0_26cc((int)param_1,uVar1);
  }
  return;
}



/* ---- FUN_10c0_30bf @ 10c0:30bf  (142 octets) ---- */

void __stdcall16far FUN_10c0_30bf(undefined4 param_1,char param_2,int param_3,int param_4)

{
  int iVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  FUN_1138_1632(iVar1,uVar2,param_2,param_3,param_4);
  if (param_2 == '\x01') {
    if ((param_4 == *(int *)(iVar1 + 0x104)) && (param_3 == *(int *)(iVar1 + 0x102))) {
      *(undefined2 *)(iVar1 + 0x102) = 0;
      *(undefined2 *)(iVar1 + 0x104) = 0;
    }
    else if ((param_4 == *(int *)(iVar1 + 0x108)) && (param_3 == *(int *)(iVar1 + 0x106))) {
      *(undefined2 *)(iVar1 + 0x106) = 0;
      *(undefined2 *)(iVar1 + 0x108) = 0;
    }
    else if ((param_4 == *(int *)(iVar1 + 0x10c)) && (param_3 == *(int *)(iVar1 + 0x10a))) {
      *(undefined2 *)(iVar1 + 0x10a) = 0;
      *(undefined2 *)(iVar1 + 0x10c) = 0;
    }
  }
  return;
}



/* ---- FUN_10c0_314d @ 10c0:314d  (121 octets) ---- */

void __stdcall16far FUN_10c0_314d(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined2 unaff_SS;
  undefined *puVar5;
  undefined *puVar6;
  undefined2 uVar7;
  undefined local_204 [256];
  undefined local_104 [256];
  undefined2 local_4;
  
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  if (*(int *)(iVar1 + 0x10a) != 0 || *(int *)(iVar1 + 0x10c) != 0) {
    local_4 = *(undefined2 *)(iVar1 + 0x22);
    if (*(char *)((int)*(undefined4 *)(iVar1 + 0x10a) + 0x93) == '\0') {
      local_4 = *(undefined2 *)((int)*(undefined4 *)(iVar1 + 0x10a) + 0x22);
    }
    puVar6 = local_204;
    puVar5 = local_104;
    uVar7 = unaff_SS;
    FUN_10c0_264a(iVar1,uVar3);
    uVar4 = (undefined2)((ulong)*(undefined4 *)(iVar1 + 0x10a) >> 0x10);
    iVar2 = (int)*(undefined4 *)(iVar1 + 0x10a);
    FUN_10c0_1331(local_4,*(undefined2 *)(iVar2 + 0x8a),*(undefined2 *)(iVar2 + 0x8c),puVar5,
                  unaff_SS);
    FUN_1138_1d8c((int)*(undefined4 *)(iVar1 + 0x10a),
                  (int)((ulong)*(undefined4 *)(iVar1 + 0x10a) >> 0x10),puVar6,uVar7);
  }
  return;
}



/* ---- FUN_10c0_31c6 @ 10c0:31c6  (183 octets) ---- */

undefined4 * __stdcall16far
FUN_10c0_31c6(undefined4 *param_1,char param_2,undefined2 param_3,undefined2 param_4)

{
  undefined2 *puVar1;
  undefined4 *puVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  
  if (param_2 != '\0') {
    FUN_1158_1fe2();
  }
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  puVar2 = (undefined4 *)param_1;
  FUN_1120_75dc(puVar2,uVar3,0,param_3,param_4);
  FUN_1138_17bf(puVar2,uVar3,0x91);
  *(undefined *)((int)puVar2 + 0x206) = 0x40;
  FUN_1158_0e58(0xff,(int)puVar2 + 0x102,uVar3,0);
  uVar4 = FUN_1150_0ed6(0x9b8,0x1160);
  *(undefined2 *)((int)puVar2 + 0x202) = (int)uVar4;
  *(int *)(puVar2 + 0x81) = (int)((ulong)uVar4 >> 0x10);
  FUN_1120_78bc(puVar2,uVar3,0);
  *(undefined2 *)(puVar2 + 0x8a) = 0xffff;
  puVar1 = (undefined2 *)((int)*param_1 + 0x84);
  puVar5 = puVar2;
  (*(code *)*puVar1)(0x1120,puVar2,uVar3);
  FUN_1120_794c(puVar2,uVar3,1);
  FUN_1120_796f(puVar2,uVar3,1);
  FUN_10c0_3c03(puVar2,uVar3);
  if (param_2 != '\0') {
    DAT_1160_1858 = puVar5;
  }
  return param_1;
}



/* ---- FUN_10c0_327d @ 10c0:327d  (94 octets) ---- */

void __stdcall16far FUN_10c0_327d(undefined4 param_1,char param_2)

{
  int iVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  FUN_1158_1f7f((int)*(undefined4 *)(iVar1 + 0x214),
                (int)((ulong)*(undefined4 *)(iVar1 + 0x214) >> 0x10));
  FUN_1158_1f7f((int)*(undefined4 *)(iVar1 + 0x218),
                (int)((ulong)*(undefined4 *)(iVar1 + 0x218) >> 0x10));
  FUN_1158_1f7f((int)*(undefined4 *)(iVar1 + 0x21c),
                (int)((ulong)*(undefined4 *)(iVar1 + 0x21c) >> 0x10));
  FUN_1150_0f23(*(undefined2 *)(iVar1 + 0x202),*(undefined2 *)(iVar1 + 0x204));
  FUN_1120_76c5(iVar1,uVar2,0);
  if (param_2 != '\0') {
    FUN_1158_200f();
  }
  return;
}



/* ---- FUN_10c0_32db @ 10c0:32db  (30 octets) ---- */

void __stdcall16far FUN_10c0_32db(undefined4 *param_1)

{
  undefined2 *puVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  FUN_1120_7bf7((undefined4 *)param_1,uVar2);
  puVar1 = (undefined2 *)((int)*param_1 + 0x8c);
  (*(code *)*puVar1)(0x1120,(undefined4 *)param_1,uVar2);
  return;
}



/* ---- FUN_10c0_32f9 @ 10c0:32f9  (44 octets) ---- */

uint __stdcall16far FUN_10c0_32f9(undefined4 param_1)

{
  uint uVar1;
  uint uVar2;
  undefined2 uVar3;
  
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  uVar1 = FUN_1150_0db2(*(undefined2 *)((int)param_1 + 0x202),*(undefined2 *)((int)param_1 + 0x204),
                        0x9bc,0x1160);
  uVar2 = uVar1 & 0xff00;
  if (uVar1 != 0) {
    uVar2 = uVar2 + 1;
  }
  return uVar2;
}



/* ---- FUN_10c0_3325 @ 10c0:3325  (22 octets) ---- */

undefined __stdcall16far FUN_10c0_3325(undefined4 param_1)

{
  return *(undefined *)((int)param_1 + 0x206);
}



/* ---- FUN_10c0_3368 @ 10c0:3368  (184 octets) ---- */

void __stdcall16far FUN_10c0_3368(undefined4 param_1)

{
  undefined2 uVar1;
  undefined extraout_AH;
  undefined extraout_AH_00;
  int iVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  
  uVar4 = FUN_1128_56bd(0x83f,0x1128,1);
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  iVar2 = (int)param_1;
  *(undefined2 *)(iVar2 + 0x214) = (int)uVar4;
  *(undefined2 *)(iVar2 + 0x216) = (int)((ulong)uVar4 >> 0x10);
  uVar1 = LOADBITMAP(0x1128,0x9c0,0x1160);
  FUN_1128_6104((int)*(undefined4 *)(iVar2 + 0x214),
                (int)((ulong)*(undefined4 *)(iVar2 + 0x214) >> 0x10),uVar1);
  uVar4 = FUN_1128_56bd(0x83f,0x1128,CONCAT11(extraout_AH,1));
  *(undefined2 *)(iVar2 + 0x218) = (int)uVar4;
  *(undefined2 *)(iVar2 + 0x21a) = (int)((ulong)uVar4 >> 0x10);
  uVar1 = LOADBITMAP(0x1128,0x9cb,0x1160);
  FUN_1128_6104((int)*(undefined4 *)(iVar2 + 0x218),
                (int)((ulong)*(undefined4 *)(iVar2 + 0x218) >> 0x10),uVar1);
  uVar4 = FUN_1128_56bd(0x83f,0x1128,CONCAT11(extraout_AH_00,1));
  *(undefined2 *)(iVar2 + 0x21c) = (int)uVar4;
  *(undefined2 *)(iVar2 + 0x21e) = (int)((ulong)uVar4 >> 0x10);
  uVar1 = LOADBITMAP(0x1128,0x9d8,0x1160);
  FUN_1128_6104((int)*(undefined4 *)(iVar2 + 0x21c),
                (int)((ulong)*(undefined4 *)(iVar2 + 0x21c) >> 0x10),uVar1);
  return;
}



/* ---- FUN_10c0_36c8 @ 10c0:36c8  (47 octets) ---- */

void __stdcall16far FUN_10c0_36c8(undefined4 *param_1)

{
  undefined2 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined2 uVar4;
  
  uVar4 = (undefined2)((ulong)param_1 >> 0x10);
  puVar3 = (undefined4 *)param_1;
  FUN_1138_2773(puVar3,uVar4);
  iVar2 = FUN_1120_77bb(puVar3,uVar4);
  if (iVar2 != *(int *)(puVar3 + 0x8a)) {
    puVar1 = (undefined2 *)((int)*param_1 + 0x88);
    (*(code *)*puVar1)(0x1120,puVar3,uVar4);
  }
  return;
}



/* ---- FUN_10c0_37a7 @ 10c0:37a7  (89 octets) ---- */

void __stdcall16far FUN_10c0_37a7(undefined4 *param_1,char param_2)

{
  undefined2 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined2 uVar5;
  char *unaff_CS;
  
  uVar5 = (undefined2)((ulong)param_1 >> 0x10);
  puVar4 = (undefined4 *)param_1;
  if (*(char *)((int)puVar4 + 0x213) != param_2) {
    *(char *)((int)puVar4 + 0x213) = param_2;
    if (*(char *)((int)puVar4 + 0x213) == '\x01') {
      puVar1 = (undefined2 *)((int)*(undefined4 *)puVar4[0x85] + 0x18);
      iVar2 = (*(code *)*puVar1)();
      iVar2 = iVar2 + 1;
      unaff_CS = (char *)0x1120;
      iVar3 = FUN_1120_7858(puVar4,uVar5);
      if (iVar3 < iVar2) {
        unaff_CS = (char *)s_sLongDate_1160_10b8 + 8;
        FUN_10c0_3c03(puVar4,uVar5);
      }
    }
    puVar1 = (undefined2 *)((int)*param_1 + 0x44);
    (*(code *)*puVar1)(unaff_CS,puVar4,uVar5);
  }
  return;
}



/* ---- FUN_10c0_3af1 @ 10c0:3af1  (96 octets) ---- */

void __stdcall16far FUN_10c0_3af1(undefined4 *param_1,undefined4 param_2)

{
  undefined2 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  
  uVar4 = (undefined2)((ulong)param_2 >> 0x10);
  uVar5 = (undefined2)((ulong)param_1 >> 0x10);
  puVar3 = (undefined4 *)param_1;
  iVar2 = FUN_1150_07ed((int)puVar3 + 0x102,uVar5,(int)param_2,uVar4);
  if (iVar2 != 0) {
    FUN_1158_0eb2((int)puVar3 + 0x102,uVar5);
    FUN_1158_0408();
    FUN_1158_0eb2((int)param_2,uVar4);
    FUN_1158_0408();
    FUN_1158_0e58(0xff,(int)puVar3 + 0x102,uVar5,0);
    puVar1 = (undefined2 *)((int)*param_1 + 0x8c);
    (*(code *)*puVar1)(0x1158,puVar3,uVar5);
  }
  return;
}



/* ---- FUN_10c0_3b51 @ 10c0:3b51  (38 octets) ---- */

void __stdcall16far FUN_10c0_3b51(undefined4 *param_1,char param_2)

{
  undefined2 *puVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  if (param_2 != *(char *)((int)(undefined4 *)param_1 + 0x206)) {
    *(char *)((int)(undefined4 *)param_1 + 0x206) = param_2;
    puVar1 = (undefined2 *)((int)*param_1 + 0x8c);
    (*(code *)*puVar1)();
  }
  return;
}



/* ---- FUN_10c0_3be2 @ 10c0:3be2  (33 octets) ---- */

void __stdcall16far FUN_10c0_3be2(undefined4 param_1,undefined2 param_2,undefined2 param_3)

{
  undefined2 uVar1;
  
  uVar1 = (undefined2)((ulong)param_1 >> 0x10);
  FUN_1138_573a((int)param_1,uVar1,param_2,param_3);
  FUN_10c0_3c03((int)param_1,uVar1);
  return;
}



/* ---- FUN_10c0_3c03 @ 10c0:3c03  (90 octets) ---- */

void __stdcall16far FUN_10c0_3c03(undefined4 param_1)

{
  undefined2 *puVar1;
  int iVar2;
  int iVar3;
  undefined2 uVar4;
  int local_4;
  
  uVar4 = (undefined2)((ulong)param_1 >> 0x10);
  iVar3 = (int)param_1;
  local_4 = FUN_10c0_19d4(*(undefined2 *)(iVar3 + 0x34),*(undefined2 *)(iVar3 + 0x36));
  if (*(char *)(iVar3 + 0x213) == '\x01') {
    puVar1 = (undefined2 *)((int)*(undefined4 *)*(undefined4 *)(iVar3 + 0x214) + 0x18);
    iVar2 = (*(code *)*puVar1)();
    if (local_4 < iVar2 + 1) {
      puVar1 = (undefined2 *)((int)*(undefined4 *)*(undefined4 *)(iVar3 + 0x214) + 0x18);
      local_4 = (*(code *)*puVar1)();
      local_4 = local_4 + 1;
    }
  }
  FUN_1120_7893(iVar3,uVar4,local_4);
  return;
}



/* ---- FUN_10c0_3f31 @ 10c0:3f31  (142 octets) ---- */

void __stdcall16far FUN_10c0_3f31(undefined4 param_1,char param_2,int param_3,int param_4)

{
  int iVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  FUN_1138_1632(iVar1,uVar2,param_2,param_3,param_4);
  if (param_2 == '\x01') {
    if ((param_4 == *(int *)(iVar1 + 0x209)) && (param_3 == *(int *)(iVar1 + 0x207))) {
      *(undefined2 *)(iVar1 + 0x207) = 0;
      *(undefined2 *)(iVar1 + 0x209) = 0;
    }
    else if ((param_4 == *(int *)(iVar1 + 0x20d)) && (param_3 == *(int *)(iVar1 + 0x20b))) {
      *(undefined2 *)(iVar1 + 0x20b) = 0;
      *(undefined2 *)(iVar1 + 0x20d) = 0;
    }
    else if ((param_4 == *(int *)(iVar1 + 0x211)) && (param_3 == *(int *)(iVar1 + 0x20f))) {
      *(undefined2 *)(iVar1 + 0x20f) = 0;
      *(undefined2 *)(iVar1 + 0x211) = 0;
    }
  }
  return;
}




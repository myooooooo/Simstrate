/* Simstrat (FR).EXE - segment Code40 - 278 fonctions
   Decompile par Ghidra 11.2.1 (x86 16 bits, chargeur NE). */

/* ---- FUN_1138_0a8d @ 1138:0a8d  (194 octets) ---- */

undefined4 __stdcall16far
FUN_1138_0a8d(undefined2 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4,
             undefined2 param_5)

{
  undefined2 *puVar1;
  uint extraout_DX;
  int iVar2;
  undefined2 uVar3;
  undefined2 unaff_CS;
  undefined2 unaff_SS;
  undefined4 uVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  undefined2 uVar8;
  
  *(undefined2 *)((int)*(undefined4 *)&DAT_1160_13e4 + 0xa2) = param_5;
  uVar3 = (undefined2)((ulong)*(undefined4 *)&DAT_1160_13e4 >> 0x10);
  iVar2 = (int)*(undefined4 *)&DAT_1160_13e4;
  SETWINDOWLONG(unaff_CS,*(undefined2 *)(iVar2 + 0x8a),*(undefined2 *)(iVar2 + 0x8c),0xfffc);
  uVar7 = 0xfff0;
  uVar3 = 0x14d0;
  uVar8 = param_5;
  GETWINDOWLONG(0x14d0,0xfff0);
  if ((extraout_DX & 0x4000) != 0) {
    uVar3 = 0xfff4;
    uVar7 = param_5;
    iVar2 = GETWINDOWWORD(0x14d0,0xfff4);
    if (iVar2 == 0) {
      uVar3 = param_5;
      SETWINDOWWORD(0x14d0,param_5,0xfff4);
    }
  }
  uVar6 = param_5;
  SETPROP(0x14d0,*(undefined2 *)&DAT_1160_13e4,*(undefined2 *)&DAT_1160_2c0e,0);
  uVar5 = param_5;
  SETPROP(0x14d0,*(undefined2 *)&DAT_1160_13e6,*(undefined2 *)&DAT_1160_2c10,0);
  uVar4 = *(undefined4 *)&DAT_1160_13e4;
  *(undefined2 *)&DAT_1160_13e4 = 0;
  *(undefined2 *)&DAT_1160_13e6 = 0;
  puVar1 = (undefined2 *)((int)uVar4 + 0x8a);
  uVar4 = (*(code *)*puVar1)(0x14d0,param_1,param_2,param_3,param_4,param_5,uVar5,uVar6,uVar3,uVar7,
                             uVar8);
  return uVar4;
}



/* ---- FUN_1138_0b4f @ 1138:0b4f  (64 octets) ---- */

undefined4 __stdcall16far FUN_1138_0b4f(int param_1)

{
  undefined2 unaff_CS;
  undefined2 local_6;
  undefined2 local_4;
  
  local_6 = 0;
  local_4 = 0;
  if (param_1 != 0) {
    local_6 = GETPROP(unaff_CS,DAT_1160_2c0e,0);
    local_4 = GETPROP(0x14d0,DAT_1160_2c10,0);
  }
  return CONCAT22(local_4,local_6);
}



/* ---- FUN_1138_0b8f @ 1138:0b8f  (66 octets) ---- */

undefined4
FUN_1138_0b8f(undefined2 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4)

{
  undefined2 unaff_CS;
  undefined4 uVar1;
  
  if (*(int *)((int)DAT_1160_2c2a + 0x1a) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = SENDMESSAGE(unaff_CS,param_1,param_2,param_3,param_4);
  }
  return uVar1;
}



/* ---- FUN_1138_0cae @ 1138:0cae  (88 octets) ---- */

void __stdcall16far FUN_1138_0cae(undefined4 param_1,undefined4 param_2)

{
  undefined2 uVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 unaff_CS;
  undefined2 unaff_SS;
  undefined *puVar4;
  undefined local_104 [256];
  int local_4;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  uVar1 = (undefined2)param_1;
  local_4 = FUN_1158_1878(uVar1,uVar2,0xcac,unaff_CS);
  uVar3 = (undefined2)((ulong)param_2 >> 0x10);
  if (local_4 == 0) {
    FUN_1158_17e7(0xff,(int)param_2,uVar3,uVar1,uVar2);
  }
  else {
    puVar4 = local_104;
    FUN_1158_180b(local_4 + -1,1,uVar1,uVar2);
    FUN_1158_17e7(0xff,(int)param_2,uVar3,puVar4,unaff_SS);
  }
  return;
}



/* ---- FUN_1138_0d08 @ 1138:0d08  (89 octets) ---- */

void __stdcall16far FUN_1138_0d08(undefined4 param_1,undefined4 param_2)

{
  undefined2 uVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 unaff_CS;
  undefined2 unaff_SS;
  undefined *puVar4;
  undefined local_104 [256];
  int local_4;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  uVar1 = (undefined2)param_1;
  local_4 = FUN_1158_1878(uVar1,uVar2,0xd06,unaff_CS);
  uVar3 = (undefined2)((ulong)param_2 >> 0x10);
  if (local_4 == 0) {
    FUN_1158_17e7(0xff,(int)param_2,uVar3,uVar1,uVar2);
  }
  else {
    puVar4 = local_104;
    FUN_1158_180b(0xff,local_4 + 1,uVar1,uVar2);
    FUN_1158_17e7(0xff,(int)param_2,uVar3,puVar4,unaff_SS);
  }
  return;
}



/* ---- FUN_1138_0d61 @ 1138:0d61  (81 octets) ---- */

int __cdecl16far FUN_1138_0d61(void)

{
  undefined2 uVar1;
  long lVar2;
  int local_6;
  
  uVar1 = GETCAPTURE();
  lVar2 = FUN_1138_0b4f(uVar1);
  local_6 = (int)lVar2;
  if (lVar2 != 0) {
    if (((int)DAT_1160_14f4 != 0 || DAT_1160_14f4._2_2_ != 0) &&
       (lVar2 == CONCAT22(*(undefined2 *)((int)DAT_1160_14f4 + 0x1c),
                          *(undefined2 *)((int)DAT_1160_14f4 + 0x1a)))) {
      local_6 = (int)DAT_1160_14f4;
    }
  }
  return local_6;
}



/* ---- FUN_1138_0db2 @ 1138:0db2  (112 octets) ---- */

void __stdcall16far FUN_1138_0db2(undefined4 param_1)

{
  char cVar1;
  undefined2 uVar2;
  
  RELEASECAPTURE();
  DAT_1160_14f4._0_2_ = 0;
  DAT_1160_14f4._2_2_ = 0;
  if ((int)param_1 != 0 || param_1._2_2_ != 0) {
    cVar1 = FUN_1158_2255(0x5c1,0x1138,(int)param_1,param_1._2_2_);
    if (cVar1 == '\0') {
      if (*(int *)((int)param_1 + 0x1a) == 0 && *(int *)((int)param_1 + 0x1c) == 0) {
        return;
      }
      DAT_1160_14f4._0_2_ = (int)param_1;
      DAT_1160_14f4._2_2_ = param_1._2_2_;
      param_1 = CONCAT22(*(undefined2 *)((int)param_1 + 0x1c),*(undefined2 *)((int)param_1 + 0x1a));
    }
    uVar2 = FUN_1138_62b9((int)param_1,(int)((ulong)param_1 >> 0x10));
    SETCAPTURE(0x1138,uVar2);
  }
  return;
}



/* ---- FUN_1138_0e22 @ 1138:0e22  (112 octets) ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined FUN_1138_0e22(void)

{
  int iVar1;
  undefined2 uVar2;
  undefined local_3;
  
  local_3 = 0;
  if ((DAT_1160_2c16 != 0 || DAT_1160_2c18 != 0) && (*(int *)(DAT_1160_2c16 + 0x6c) != 0)) {
    local_3 = 1;
    FUN_1138_1a06(DAT_1160_2c16,DAT_1160_2c18,DAT_1160_2c1e,DAT_1160_2c20);
    uVar2 = (undefined2)((ulong)_DAT_1160_2c16 >> 0x10);
    iVar1 = (int)_DAT_1160_2c16;
    (*(code *)*(undefined2 *)(iVar1 + 0x6a))
              (0x1138,*(undefined2 *)(iVar1 + 0x6e),*(undefined2 *)(iVar1 + 0x70),&local_3);
  }
  return local_3;
}



/* ---- FUN_1138_0e92 @ 1138:0e92  (171 octets) ---- */

long __stdcall16far FUN_1138_0e92(undefined param_1,undefined2 param_2,undefined2 param_3)

{
  long lVar1;
  undefined2 unaff_CS;
  long lVar2;
  undefined4 uVar3;
  long lVar4;
  undefined2 uVar5;
  int local_10;
  
  uVar5 = param_3;
  local_10 = WINDOWFROMPOINT(unaff_CS,param_2);
  lVar2 = 0;
  while( true ) {
    if ((local_10 == 0) || (lVar2 != 0)) break;
    lVar2 = FUN_1138_0b4f(local_10);
    if (lVar2 == 0) {
      local_10 = GETPARENT(0x1138,local_10,uVar5);
    }
  }
  lVar1 = 0;
  if (lVar2 != 0) {
    uVar3 = FUN_1138_1a06(lVar2,param_2,param_3);
    lVar4 = FUN_1138_42a8(lVar2,param_1,uVar3);
    lVar1 = lVar2;
    if (lVar4 != 0) {
      lVar1 = lVar4;
    }
  }
  return lVar1;
}



/* ---- FUN_1138_0f3d @ 1138:0f3d  (186 octets) ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1138_0f3d(int param_1,int param_2)

{
  char cVar1;
  uint uVar2;
  long lVar3;
  undefined2 uVar4;
  
  if (((DAT_1160_2c24 != '\0') ||
      (uVar2 = DAT_1160_2c1a - param_1 >> 0xf, 4 < (int)((DAT_1160_2c1a - param_1 ^ uVar2) - uVar2))
      ) || (uVar2 = DAT_1160_2c1c - param_2 >> 0xf,
           4 < (int)((DAT_1160_2c1c - param_2 ^ uVar2) - uVar2))) {
    DAT_1160_2c24 = '\x01';
    lVar3 = FUN_1138_0e92(0,param_1,param_2);
    if (lVar3 != CONCAT22(DAT_1160_2c18,DAT_1160_2c16)) {
      FUN_1138_0e22(1);
      DAT_1160_2c18 = (undefined2)((ulong)lVar3 >> 0x10);
      DAT_1160_2c16 = (undefined2)lVar3;
      DAT_1160_2c1e = param_1;
      DAT_1160_2c20 = param_2;
      FUN_1138_0e22(0);
    }
    DAT_1160_2c1e = param_1;
    DAT_1160_2c20 = param_2;
    uVar4 = 0xfff3;
    cVar1 = FUN_1138_0e22(2,lVar3,0xfff3);
    if (cVar1 != '\0') {
      uVar4 = *(undefined2 *)((int)_DAT_1160_2c12 + 0x3e);
    }
    uVar4 = FUN_1140_633e((int)DAT_1160_2c2e,(int)((ulong)DAT_1160_2c2e >> 0x10),uVar4);
    SETCURSOR(0x1140,uVar4);
  }
  return;
}



/* ---- FUN_1138_0ff7 @ 1138:0ff7  (83 octets) ---- */

void FUN_1138_0ff7(char param_1,undefined2 param_2,undefined2 param_3)

{
  DAT_1160_2c12 = param_2;
  DAT_1160_2c14 = param_3;
  DAT_1160_2c16 = 0;
  DAT_1160_2c18 = 0;
  GETCURSORPOS();
  DAT_1160_2c22 = GETCURSOR(0x14d0);
  DAT_1160_2c24 = param_1;
  FUN_1138_1fb3(DAT_1160_2c12,DAT_1160_2c14,1);
  if (DAT_1160_2c24 != '\0') {
    FUN_1138_0f3d(DAT_1160_2c1a,DAT_1160_2c1c);
  }
  return;
}



/* ---- FUN_1138_1050 @ 1138:1050  (217 octets) ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_1138_1050(void)

{
  undefined2 uVar1;
  undefined2 uVar2;
  char cVar3;
  int iVar4;
  undefined2 uVar5;
  undefined4 uVar6;
  char in_stack_00000002;
  undefined2 uStack_14;
  
  uStack_14 = 0x1061;
  FUN_1138_1fb3();
  SETCURSOR();
  uVar2 = DAT_1160_2c14;
  uVar1 = (undefined2)_DAT_1160_2c12;
  uStack_14 = DAT_1160_1858;
  DAT_1160_1858 = &uStack_14;
  if (((DAT_1160_2c24 == '\0') ||
      (DAT_1160_1858 = &uStack_14, cVar3 = FUN_1138_0e22(1), cVar3 == '\0')) ||
     (in_stack_00000002 == '\0')) {
    if (DAT_1160_2c24 == '\0') {
      FUN_1158_206a(0x14d0,uVar1,uVar2);
    }
    _DAT_1160_2c16 = 0;
  }
  else {
    uVar6 = FUN_1138_1a06((int)_DAT_1160_2c16,(int)((ulong)_DAT_1160_2c16 >> 0x10),DAT_1160_2c1e,
                          DAT_1160_2c20);
    _DAT_1160_2c12 = 0;
    uVar5 = (undefined2)((ulong)_DAT_1160_2c16 >> 0x10);
    iVar4 = (int)_DAT_1160_2c16;
    if (*(int *)(iVar4 + 100) != 0) {
      (*(code *)*(undefined2 *)(iVar4 + 0x62))
                (0x1138,*(undefined2 *)(iVar4 + 0x66),*(undefined2 *)(iVar4 + 0x68),
                 (int)((ulong)uVar6 >> 0x10),(int)uVar6,uVar1,uVar2,iVar4,uVar5);
    }
  }
  DAT_1160_1858 = (undefined2 *)uStack_14;
  _DAT_1160_2c12 = 0;
  return;
}



/* ---- FUN_1138_1165 @ 1138:1165  (77 octets) ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __stdcall16far FUN_1138_1165(int *param_1)

{
  undefined2 uVar1;
  undefined4 uVar2;
  undefined2 uStack_a;
  undefined *puStack_8;
  undefined2 uStack_6;
  
  puStack_8 = &stack0xfffe;
  uStack_6 = 0x115b;
  uStack_a = DAT_1160_1858;
  uVar1 = (undefined2)((ulong)param_1 >> 0x10);
  if (*param_1 == 0x200) {
    DAT_1160_1858 = &uStack_a;
    puStack_8 = &stack0xfffe;
    uVar2 = FUN_1138_19d4((int)_DAT_1160_2c12,(int)((ulong)_DAT_1160_2c12 >> 0x10),
                          ((int *)param_1)[2],((int *)param_1)[3]);
    FUN_1138_0f3d(uVar2);
  }
  else if (*param_1 == 0x202) {
    DAT_1160_1858 = &uStack_a;
    FUN_1138_1050();
  }
  DAT_1160_1858 = (undefined2 *)uStack_a;
  return;
}



/* ---- FUN_1138_11ca @ 1138:11ca  (64 octets) ---- */

void FUN_1138_11ca(undefined2 param_1,undefined2 param_2,int *param_3)

{
  undefined2 uVar1;
  undefined4 uVar2;
  
  uVar1 = (undefined2)((ulong)param_3 >> 0x10);
  if (*param_3 == 0 && ((int *)param_3)[1] == 0) {
    uVar2 = FUN_1158_1f50(0x2a3,0x1148,1);
    *param_3 = (int)uVar2;
    ((int *)param_3)[1] = (int)((ulong)uVar2 >> 0x10);
  }
  FUN_1148_0c2b((int)*(undefined4 *)param_3,(int)((ulong)*(undefined4 *)param_3 >> 0x10),param_1,
                param_2);
  return;
}



/* ---- FUN_1138_120a @ 1138:120a  (64 octets) ---- */

void FUN_1138_120a(undefined2 param_1,undefined2 param_2,undefined4 *param_3)

{
  FUN_1148_0fa7((int)*param_3,(int)((ulong)*param_3 >> 0x10),param_1,param_2);
  if (*(int *)((int)*param_3 + 8) == 0) {
    FUN_1158_1f7f((int)*param_3,(int)((ulong)*param_3 >> 0x10));
    *(undefined2 *)param_3 = 0;
    *(undefined2 *)((int)(undefined4 *)param_3 + 2) = 0;
  }
  return;
}



/* ---- FUN_1138_124a @ 1138:124a  (29 octets) ---- */

void __cdecl16near FUN_1138_124a(void)

{
  undefined4 uVar1;
  
  uVar1 = FUN_1148_0dd0((int)DAT_1160_2c26,(int)((ulong)DAT_1160_2c26 >> 0x10),0);
  FUN_1138_1320(uVar1);
  return;
}



/* ---- FUN_1138_1267 @ 1138:1267  (21 octets) ---- */

void __cdecl16near FUN_1138_1267(void)

{
  while (0 < *(int *)((int)DAT_1160_2c26 + 8)) {
    FUN_1138_124a();
  }
  return;
}



/* ---- FUN_1138_127c @ 1138:127c  (41 octets) ---- */

void __stdcall16far FUN_1138_127c(undefined4 param_1,char param_2)

{
  undefined2 uVar1;
  
  uVar1 = (undefined2)((ulong)param_1 >> 0x10);
  FUN_1138_1320((int)param_1,uVar1);
  FUN_1128_18b7((int)param_1,uVar1,0);
  if (param_2 != '\0') {
    FUN_1158_200f();
  }
  return;
}



/* ---- FUN_1138_12a5 @ 1138:12a5  (123 octets) ---- */

void __stdcall16far FUN_1138_12a5(undefined4 param_1)

{
  undefined2 *puVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  iVar2 = (int)param_1;
  if (*(int *)(iVar2 + 0x2b) == 0 && *(int *)(iVar2 + 0x2d) == 0) {
    FUN_1128_2256(iVar2,uVar3);
  }
  else {
    if (*(int *)(iVar2 + 0x2f) == 0) {
      uVar4 = (undefined2)((ulong)DAT_1160_2c26 >> 0x10);
      if (*(int *)((int)DAT_1160_2c26 + 8) == *(int *)((int)DAT_1160_2c26 + 10)) {
        FUN_1138_124a();
      }
      puVar1 = (undefined2 *)((int)*(undefined4 *)*(undefined4 *)(iVar2 + 0x2b) + 0x38);
      uVar4 = (*(code *)*puVar1)();
      *(undefined2 *)(iVar2 + 0x2f) = uVar4;
      FUN_1148_0c2b((int)DAT_1160_2c26,(int)((ulong)DAT_1160_2c26 >> 0x10),iVar2,uVar3);
    }
    FUN_1128_225d(iVar2,uVar3,*(undefined2 *)(iVar2 + 0x2f));
  }
  return;
}



/* ---- FUN_1138_1320 @ 1138:1320  (68 octets) ---- */

void __stdcall16far FUN_1138_1320(undefined4 param_1)

{
  int iVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  if (*(int *)(iVar1 + 0x2f) != 0) {
    FUN_1128_225d(iVar1,uVar2,0);
    FUN_1148_0fa7((int)DAT_1160_2c26,(int)((ulong)DAT_1160_2c26 >> 0x10),iVar1,uVar2);
    RELEASEDC(0x1148,*(undefined2 *)(iVar1 + 0x2f));
    *(undefined2 *)(iVar1 + 0x2f) = 0;
  }
  return;
}



/* ---- FUN_1138_1364 @ 1138:1364  (55 octets) ---- */

void __stdcall16far FUN_1138_1364(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  if ((*(int *)(iVar1 + 0x2d) != param_3) || (*(int *)(iVar1 + 0x2b) != param_2)) {
    FUN_1138_1320(iVar1,uVar2);
    *(int *)(iVar1 + 0x2b) = param_2;
    *(int *)(iVar1 + 0x2d) = param_3;
  }
  return;
}



/* ---- FUN_1138_139b @ 1138:139b  (189 octets) ---- */

undefined4 __stdcall16far
FUN_1138_139b(undefined4 param_1,char param_2,undefined2 param_3,undefined2 param_4)

{
  undefined extraout_AH;
  int iVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined4 uVar5;
  undefined2 uStack_a;
  
  if (param_2 != '\0') {
    FUN_1158_1fe2();
  }
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  FUN_1148_4bd9(iVar1,uVar3,0,param_3,param_4);
  *(undefined2 *)(iVar1 + 0x26) = 0xaa;
  uVar5 = FUN_1128_0e96(0x310,0x1128,CONCAT11(extraout_AH,1));
  *(undefined2 *)(iVar1 + 0x34) = (int)uVar5;
  *(undefined2 *)(iVar1 + 0x36) = (int)((ulong)uVar5 >> 0x10);
  uVar4 = (undefined2)((ulong)*(undefined4 *)(iVar1 + 0x34) >> 0x10);
  iVar2 = (int)*(undefined4 *)(iVar1 + 0x34);
  *(undefined2 *)(iVar2 + 4) = 0x1dcc;
  *(undefined2 *)(iVar2 + 6) = 0x1138;
  *(int *)(iVar2 + 8) = iVar1;
  *(undefined2 *)(iVar2 + 10) = uVar3;
  *(undefined2 *)(iVar1 + 0x38) = 0xfffa;
  *(undefined2 *)(iVar1 + 0x3a) = 0xffff;
  *(undefined *)(iVar1 + 0x29) = 1;
  *(undefined *)(iVar1 + 0x2a) = 1;
  *(undefined *)(iVar1 + 0x2b) = 1;
  *(undefined *)(iVar1 + 0x2c) = 1;
  *(undefined *)(iVar1 + 0x49) = 1;
  *(undefined *)(iVar1 + 0x2f) = 0;
  *(undefined2 *)(iVar1 + 0x3e) = 0xfff4;
  uVar4 = DAT_1160_1718;
  *(undefined2 *)(iVar1 + 0x44) = DAT_1160_1716;
  *(undefined2 *)(iVar1 + 0x46) = uVar4;
  if (param_2 != '\0') {
    DAT_1160_1858 = uStack_a;
  }
  return param_1;
}



/* ---- FUN_1138_1458 @ 1138:1458  (110 octets) ---- */

void __stdcall16far FUN_1138_1458(undefined4 *param_1,char param_3)

{
  undefined2 *puVar1;
  
  FUN_1140_675a((int)DAT_1160_2c2a,(int)((ulong)DAT_1160_2c2a >> 0x10),(undefined4 *)param_1,
                param_1._2_2_);
  FUN_1158_1f7f((int)((undefined4 *)param_1)[0xd],(int)((ulong)((undefined4 *)param_1)[0xd] >> 0x10)
               );
  FUN_1150_0f23(*(undefined2 *)((undefined4 *)param_1 + 0xc),
                *(undefined2 *)((int)(undefined4 *)param_1 + 0x32));
  FUN_1150_0624(*(undefined2 *)((undefined4 *)param_1 + 0x11),
                *(undefined2 *)((int)(undefined4 *)param_1 + 0x46));
  puVar1 = (undefined2 *)((int)*param_1 + 0x3c);
  (*(code *)*puVar1)(0x1150,(undefined4 *)param_1,param_1._2_2_,0,0);
  FUN_1148_4c2b((undefined4 *)param_1,param_1._2_2_,0);
  if (param_3 != '\0') {
    FUN_1158_200f();
  }
  return;
}



/* ---- FUN_1138_14c6 @ 1138:14c6  (16 octets) ---- */

undefined2 __stdcall16far FUN_1138_14c6(void)

{
  return 0;
}



/* ---- FUN_1138_14d6 @ 1138:14d6  (15 octets) ---- */

undefined __stdcall16far FUN_1138_14d6(void)

{
  return 1;
}



/* ---- FUN_1138_14e5 @ 1138:14e5  (142 octets) ---- */

undefined __stdcall16far FUN_1138_14e5(undefined4 *param_1,char param_2)

{
  undefined2 *puVar1;
  undefined2 uVar2;
  int iVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined local_a [2];
  int local_8;
  undefined2 local_6;
  undefined local_3;
  
  local_3 = 0;
  uVar4 = (undefined2)((ulong)param_1 >> 0x10);
  local_8 = FUN_1158_206a();
  if (local_8 != 0) {
    puVar1 = (undefined2 *)((int)*param_1 + 0x38);
    uVar2 = (*(code *)*puVar1)(0x1158,(undefined4 *)param_1,uVar4,local_a);
    uVar5 = uVar2;
    local_6 = SELECTPALETTE(0x1158,param_2 == '\0',local_8);
    iVar3 = REALIZEPALETTE(0x14d0,uVar2,uVar5);
    if (iVar3 != 0) {
      puVar1 = (undefined2 *)((int)*param_1 + 0x44);
      (*(code *)*puVar1)(0x14d0,(undefined4 *)param_1,uVar4);
    }
    uVar4 = uVar2;
    SELECTPALETTE(0x14d0,1,local_6);
    REALIZEPALETTE(0x14d0,uVar2,uVar4);
    RELEASEDC(0x14d0,uVar2);
    local_3 = 1;
  }
  return local_3;
}



/* ---- FUN_1138_1573 @ 1138:1573  (37 octets) ---- */

void __stdcall16far FUN_1138_1573(undefined4 param_1)

{
  int iVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  if (*(int *)(iVar1 + 0x1a) != 0 || *(int *)(iVar1 + 0x1c) != 0) {
    FUN_1138_3633((int)*(undefined4 *)(iVar1 + 0x1a),
                  (int)((ulong)*(undefined4 *)(iVar1 + 0x1a) >> 0x10),iVar1,uVar2);
  }
  return;
}



/* ---- FUN_1138_1598 @ 1138:1598  (154 octets) ---- */

void __stdcall16far FUN_1138_1598(undefined4 *param_1,undefined4 param_2)

{
  undefined2 *puVar1;
  char cVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  
  uVar5 = (undefined2)((ulong)param_1 >> 0x10);
  puVar3 = (undefined4 *)param_1;
  *(byte *)(puVar3 + 10) = *(byte *)(puVar3 + 10) | 8;
  uVar6 = (undefined2)((ulong)param_2 >> 0x10);
  iVar4 = (int)param_2;
  cVar2 = FUN_1158_2255(0x5c1,0x1138,*(undefined2 *)(iVar4 + 0x1a),*(undefined2 *)(iVar4 + 0x1c));
  if (cVar2 != '\0') {
    puVar1 = (undefined2 *)((int)*param_1 + 0x3c);
    (*(code *)*puVar1)(0x1158,puVar3,uVar5,*(undefined2 *)(iVar4 + 0x1a),
                       *(undefined2 *)(iVar4 + 0x1c));
  }
  FUN_1148_5003(puVar3,uVar5,iVar4,uVar6);
  *(byte *)(puVar3 + 10) = *(byte *)(puVar3 + 10) & 0xf7;
  if (*(int *)((int)puVar3 + 0x1a) != 0 || *(int *)(puVar3 + 7) != 0) {
    FUN_1138_24bb(puVar3,uVar5,0,0,0,0xf09);
    FUN_1138_24bb(puVar3,uVar5,0,0,0,0xf08);
    FUN_1138_24bb(puVar3,uVar5,0,0,0,0xf23);
  }
  return;
}



/* ---- FUN_1138_1632 @ 1138:1632  (64 octets) ---- */

void __stdcall16far FUN_1138_1632(undefined4 param_1,char param_2,int param_3,int param_4)

{
  int iVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  FUN_1148_4f05(iVar1,uVar2,param_2,param_3,param_4);
  if (((param_4 == *(int *)(iVar1 + 0x42)) && (param_3 == *(int *)(iVar1 + 0x40))) &&
     (param_2 == '\x01')) {
    *(undefined2 *)(iVar1 + 0x40) = 0;
    *(undefined2 *)(iVar1 + 0x42) = 0;
  }
  return;
}



/* ---- FUN_1138_1672 @ 1138:1672  (134 octets) ---- */

void __stdcall16far FUN_1138_1672(undefined4 *param_1,byte param_2)

{
  byte bVar1;
  undefined2 *puVar2;
  char cVar3;
  char cVar4;
  undefined4 *puVar5;
  undefined2 uVar6;
  
  uVar6 = (undefined2)((ulong)param_1 >> 0x10);
  puVar5 = (undefined4 *)param_1;
  if (*(byte *)((int)puVar5 + 0x2d) != param_2) {
    bVar1 = *(byte *)((int)puVar5 + 0x2d);
    *(byte *)((int)puVar5 + 0x2d) = param_2;
    if ((param_2 < 3) || (4 < param_2)) {
      cVar3 = '\0';
    }
    else {
      cVar3 = '\x01';
    }
    if ((bVar1 == 0) || (2 < bVar1)) {
      cVar4 = '\0';
    }
    else {
      cVar4 = '\x01';
    }
    if ((((cVar4 == cVar3) && (bVar1 != 0)) && (bVar1 != 5)) && ((param_2 != 0 && (param_2 != 5))))
    {
      puVar2 = (undefined2 *)((int)*param_1 + 0x4c);
      (*(code *)*puVar2)();
    }
  }
  FUN_1138_1573(puVar5,uVar6);
  return;
}



/* ---- FUN_1138_16f8 @ 1138:16f8  (131 octets) ---- */

void __stdcall16far
FUN_1138_16f8(undefined4 *param_1,int param_2,int param_3,int param_4,int param_5)

{
  undefined2 *puVar1;
  undefined4 *puVar2;
  undefined2 uVar3;
  
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  puVar2 = (undefined4 *)param_1;
  if ((((param_5 != *(int *)((int)puVar2 + 0x1e)) || (param_4 != *(int *)(puVar2 + 8))) ||
      (param_3 != *(int *)((int)puVar2 + 0x22))) || (param_2 != *(int *)(puVar2 + 9))) {
    FUN_1138_21b3(puVar2,uVar3,0,*(undefined *)((int)puVar2 + 0x29));
    *(int *)((int)puVar2 + 0x1e) = param_5;
    *(int *)(puVar2 + 8) = param_4;
    *(int *)((int)puVar2 + 0x22) = param_3;
    *(int *)(puVar2 + 9) = param_2;
    puVar1 = (undefined2 *)((int)*param_1 + 0x44);
    (*(code *)*puVar1)(0x1138,puVar2,uVar3);
    FUN_1138_24bb(puVar2,uVar3,0,0,0,0x47);
    FUN_1138_1573(puVar2,uVar3);
  }
  return;
}



/* ---- FUN_1138_177b @ 1138:177b  (34 octets) ---- */

void __stdcall16far FUN_1138_177b(undefined4 *param_1)

{
  undefined2 *puVar1;
  
  puVar1 = (undefined2 *)((int)*param_1 + 0x4c);
  (*(code *)*puVar1)();
  return;
}



/* ---- FUN_1138_179d @ 1138:179d  (34 octets) ---- */

void __stdcall16far FUN_1138_179d(undefined4 *param_1)

{
  undefined2 *puVar1;
  
  puVar1 = (undefined2 *)((int)*param_1 + 0x4c);
  (*(code *)*puVar1)();
  return;
}



/* ---- FUN_1138_17bf @ 1138:17bf  (34 octets) ---- */

void __stdcall16far FUN_1138_17bf(undefined4 *param_1)

{
  undefined2 *puVar1;
  
  puVar1 = (undefined2 *)((int)*param_1 + 0x4c);
  (*(code *)*puVar1)();
  return;
}



/* ---- FUN_1138_17e1 @ 1138:17e1  (34 octets) ---- */

void __stdcall16far FUN_1138_17e1(undefined4 *param_1)

{
  undefined2 *puVar1;
  
  puVar1 = (undefined2 *)((int)*param_1 + 0x4c);
  (*(code *)*puVar1)();
  return;
}



/* ---- FUN_1138_1803 @ 1138:1803  (70 octets) ---- */

void __stdcall16far FUN_1138_1803(undefined4 param_1,undefined2 *param_2)

{
  int iVar1;
  undefined2 *puVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  *param_2 = *(undefined2 *)(iVar1 + 0x1e);
  uVar4 = (undefined2)((ulong)param_2 >> 0x10);
  puVar2 = (undefined2 *)param_2;
  puVar2[1] = *(undefined2 *)(iVar1 + 0x20);
  puVar2[2] = *(int *)(iVar1 + 0x1e) + *(int *)(iVar1 + 0x22);
  puVar2[3] = *(int *)(iVar1 + 0x20) + *(int *)(iVar1 + 0x24);
  return;
}



/* ---- FUN_1138_1849 @ 1138:1849  (47 octets) ---- */

void __stdcall16far FUN_1138_1849(undefined4 *param_1)

{
  undefined2 *puVar1;
  
  puVar1 = (undefined2 *)((int)*param_1 + 0x4c);
  (*(code *)*puVar1)();
  return;
}



/* ---- FUN_1138_1878 @ 1138:1878  (49 octets) ---- */

void __stdcall16far FUN_1138_1878(undefined4 param_1,undefined2 *param_2)

{
  undefined2 *puVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  
  uVar2 = (undefined2)((ulong)param_2 >> 0x10);
  puVar1 = (undefined2 *)param_2;
  *param_2 = 0;
  puVar1[1] = 0;
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  puVar1[2] = *(undefined2 *)((int)param_1 + 0x22);
  puVar1[3] = *(undefined2 *)((int)param_1 + 0x24);
  return;
}



/* ---- FUN_1138_18a9 @ 1138:18a9  (37 octets) ---- */

undefined2 __stdcall16far FUN_1138_18a9(undefined4 *param_1)

{
  undefined2 *puVar1;
  undefined2 local_8;
  
  puVar1 = (undefined2 *)((int)*param_1 + 0x34);
  (*(code *)*puVar1)();
  return local_8;
}



/* ---- FUN_1138_18ce @ 1138:18ce  (38 octets) ---- */

void __stdcall16far FUN_1138_18ce(undefined4 param_1,undefined2 param_2)

{
  undefined2 uVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  uVar1 = FUN_1138_18f4((int)param_1,uVar2);
  uVar3 = FUN_1148_066e(uVar1,param_2);
  FUN_1138_1beb((int)param_1,uVar2,uVar3);
  return;
}



/* ---- FUN_1138_18f4 @ 1138:18f4  (37 octets) ---- */

undefined2 __stdcall16far FUN_1138_18f4(undefined4 *param_1)

{
  undefined2 *puVar1;
  undefined2 local_6;
  
  puVar1 = (undefined2 *)((int)*param_1 + 0x34);
  (*(code *)*puVar1)();
  return local_6;
}



/* ---- FUN_1138_1919 @ 1138:1919  (38 octets) ---- */

void __stdcall16far FUN_1138_1919(undefined4 param_1,undefined2 param_2)

{
  undefined2 uVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  uVar1 = FUN_1138_18a9((int)param_1,uVar2);
  uVar3 = FUN_1148_066e(param_2,uVar1);
  FUN_1138_1beb((int)param_1,uVar2,uVar3);
  return;
}



/* ---- FUN_1138_19d4 @ 1138:19d4  (50 octets) ---- */

undefined4 __stdcall16far FUN_1138_19d4(undefined4 *param_1,int param_2,int param_3)

{
  undefined2 *puVar1;
  undefined4 uVar2;
  
  puVar1 = (undefined2 *)((int)*param_1 + 0x30);
  uVar2 = (*(code *)*puVar1)();
  return CONCAT22(param_3 + (int)((ulong)uVar2 >> 0x10),param_2 + (int)uVar2);
}



/* ---- FUN_1138_1a06 @ 1138:1a06  (50 octets) ---- */

undefined4 __stdcall16far FUN_1138_1a06(undefined4 *param_1,int param_2,int param_3)

{
  undefined2 *puVar1;
  undefined4 uVar2;
  
  puVar1 = (undefined2 *)((int)*param_1 + 0x30);
  uVar2 = (*(code *)*puVar1)();
  return CONCAT22(param_3 - (int)((ulong)uVar2 >> 0x10),param_2 - (int)uVar2);
}



/* ---- FUN_1138_1a38 @ 1138:1a38  (49 octets) ---- */

void __stdcall16far
FUN_1138_1a38(undefined2 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4)

{
  long lVar1;
  
  lVar1 = FUN_1140_17a8(param_1,param_2);
  if (lVar1 != 0) {
    FUN_1140_4479(lVar1,param_3,param_4);
  }
  return;
}



/* ---- FUN_1138_1a69 @ 1138:1a69  (232 octets) ---- */

void __stdcall16far FUN_1138_1a69(undefined4 *param_1,undefined2 param_2,int param_3)

{
  undefined2 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined2 uVar5;
  undefined4 *puVar6;
  undefined2 uVar7;
  undefined2 unaff_CS;
  undefined2 uVar8;
  int local_a;
  int local_8;
  
  uVar7 = (undefined2)((ulong)param_1 >> 0x10);
  puVar6 = (undefined4 *)param_1;
  uVar5 = *(undefined2 *)((int)puVar6 + 0x1e);
  iVar2 = MULDIV(unaff_CS,param_2,param_3);
  uVar8 = *(undefined2 *)(puVar6 + 8);
  iVar4 = param_3;
  iVar3 = MULDIV(0x14d0,param_2,param_3);
  if (((*(byte *)((int)puVar6 + 0x27) & 1) == 0) || ((*(byte *)(puVar6 + 6) & 1) != 0)) {
    iVar4 = *(int *)((int)puVar6 + 0x1e) + *(int *)((int)puVar6 + 0x22);
    local_8 = MULDIV(0x14d0,param_2,param_3);
    local_8 = local_8 - iVar2;
  }
  else {
    local_8 = *(int *)((int)puVar6 + 0x22);
  }
  if (((*(byte *)((int)puVar6 + 0x27) & 2) == 0) || ((*(byte *)(puVar6 + 6) & 1) != 0)) {
    local_a = MULDIV(0x14d0,param_2,param_3);
    local_a = local_a - iVar3;
  }
  else {
    local_a = *(int *)(puVar6 + 9);
  }
  puVar1 = (undefined2 *)((int)*param_1 + 0x4c);
  (*(code *)*puVar1)(0x14d0,puVar6,uVar7,local_a,local_8,iVar3,iVar2,iVar4,uVar8,uVar5);
  if (*(char *)((int)puVar6 + 0x2b) == '\0') {
    FUN_1128_11cc((int)puVar6[0xd],(int)((ulong)puVar6[0xd] >> 0x10));
    uVar5 = MULDIV(0x1128,param_2,param_3);
    FUN_1128_11f5((int)puVar6[0xd],(int)((ulong)puVar6[0xd] >> 0x10),uVar5);
  }
  return;
}



/* ---- FUN_1138_1b51 @ 1138:1b51  (154 octets) ---- */

void __stdcall16far FUN_1138_1b51(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined2 unaff_SS;
  undefined uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined local_204 [256];
  undefined local_104 [257];
  char local_3;
  
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  iVar2 = (int)param_1;
  uVar5 = (*(byte *)(iVar2 + 0x26) & 0x20) == 0;
  if (!(bool)uVar5) {
    puVar7 = local_104;
    uVar4 = unaff_SS;
    FUN_1148_512a(iVar2,uVar3);
    puVar6 = local_204;
    FUN_1138_1d53(iVar2,uVar3);
    FUN_1158_18be(puVar6,unaff_SS,puVar7,uVar4);
    if ((bool)uVar5) {
      if (*(int *)(iVar2 + 4) != 0 || *(int *)(iVar2 + 6) != 0) {
        cVar1 = FUN_1158_2255(0x399,0x1138,*(undefined2 *)(iVar2 + 4),*(undefined2 *)(iVar2 + 6));
        if ((cVar1 != '\0') && ((*(byte *)((int)*(undefined4 *)(iVar2 + 4) + 0x18) & 1) != 0))
        goto LAB_1138_1bba;
      }
      local_3 = '\x01';
      goto LAB_1138_1bc0;
    }
  }
LAB_1138_1bba:
  local_3 = '\0';
LAB_1138_1bc0:
  uVar4 = (undefined2)((ulong)param_2 >> 0x10);
  FUN_1148_5146(iVar2,uVar3,(int)param_2,uVar4);
  if (local_3 != '\0') {
    FUN_1138_1d8c(iVar2,uVar3,(int)param_2,uVar4);
  }
  return;
}



/* ---- FUN_1138_1beb @ 1138:1beb  (79 octets) ---- */

void __stdcall16far FUN_1138_1beb(undefined4 *param_1,int param_2,int param_3)

{
  undefined2 *puVar1;
  undefined4 *puVar2;
  undefined2 uVar3;
  undefined2 unaff_SS;
  undefined4 *puVar4;
  undefined2 uVar5;
  undefined *puVar6;
  undefined local_12 [8];
  undefined local_a [4];
  int local_6;
  int local_4;
  
  puVar6 = local_12;
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  puVar2 = (undefined4 *)param_1;
  puVar1 = (undefined2 *)((int)*param_1 + 0x34);
  puVar4 = puVar2;
  uVar5 = uVar3;
  (*(code *)*puVar1)();
  FUN_1158_161b(8,local_a,unaff_SS,puVar4,uVar5);
  puVar1 = (undefined2 *)((int)*param_1 + 0x4c);
  (*(code *)*puVar1)(0x1158,puVar2,uVar3,(*(int *)(puVar2 + 9) - local_4) + param_3,
                     (*(int *)((int)puVar2 + 0x22) - local_6) + param_2,*(undefined2 *)(puVar2 + 8),
                     *(undefined2 *)((int)puVar2 + 0x1e),puVar6);
  return;
}



/* ---- FUN_1138_1c3a @ 1138:1c3a  (61 octets) ---- */

void __stdcall16far FUN_1138_1c3a(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  if (*(int *)(iVar1 + 0x1a) != 0 || *(int *)(iVar1 + 0x1c) != 0) {
    FUN_1138_3916((int)*(undefined4 *)(iVar1 + 0x1a),
                  (int)((ulong)*(undefined4 *)(iVar1 + 0x1a) >> 0x10),iVar1,uVar2);
  }
  if ((int)param_2 != 0 || param_2._2_2_ != 0) {
    FUN_1138_3859((int)param_2,param_2._2_2_,iVar1,uVar2);
  }
  return;
}



/* ---- FUN_1138_1c77 @ 1138:1c77  (65 octets) ---- */

void __stdcall16far FUN_1138_1c77(undefined4 param_1,char param_2)

{
  int iVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  if (*(char *)(iVar1 + 0x29) != param_2) {
    FUN_1158_206a();
    *(char *)(iVar1 + 0x29) = param_2;
    FUN_1138_24bb(iVar1,uVar2,0,0,0,0xf0b);
    FUN_1138_1573(iVar1,uVar2);
  }
  return;
}



/* ---- FUN_1138_1cb8 @ 1138:1cb8  (42 octets) ---- */

void __stdcall16far FUN_1138_1cb8(undefined4 param_1,char param_2)

{
  int iVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  if (*(char *)(iVar1 + 0x2a) != param_2) {
    *(char *)(iVar1 + 0x2a) = param_2;
    FUN_1138_24bb(iVar1,uVar2,0,0,0,0xf0c);
  }
  return;
}



/* ---- FUN_1138_1ce2 @ 1138:1ce2  (32 octets) ---- */

undefined2 __stdcall16far FUN_1138_1ce2(undefined4 param_1)

{
  undefined2 uVar1;
  
  uVar1 = FUN_1138_24bb((int)param_1,(int)((ulong)param_1 >> 0x10),0,0,0,0xe);
  return uVar1;
}



/* ---- FUN_1138_1d02 @ 1138:1d02  (35 octets) ---- */

undefined2 __stdcall16far
FUN_1138_1d02(undefined4 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4)

{
  undefined2 uVar1;
  
  uVar1 = FUN_1138_24bb((int)param_1,(int)((ulong)param_1 >> 0x10),param_3,param_4,param_2,0xd);
  return uVar1;
}



/* ---- FUN_1138_1d25 @ 1138:1d25  (46 octets) ---- */

void __stdcall16far FUN_1138_1d25(undefined4 param_1,undefined2 param_2,undefined2 param_3)

{
  undefined2 uVar1;
  
  uVar1 = (undefined2)((ulong)param_1 >> 0x10);
  FUN_1138_24bb((int)param_1,uVar1,param_2,param_3,0,0xc);
  FUN_1138_24bb((int)param_1,uVar1,0,0,0,0xf12);
  return;
}



/* ---- FUN_1138_1d53 @ 1138:1d53  (57 octets) ---- */

void __stdcall16far FUN_1138_1d53(undefined4 param_1,undefined *param_2)

{
  undefined2 uVar1;
  undefined *puVar2;
  undefined2 uVar3;
  undefined local_4;
  
  uVar3 = (undefined2)((ulong)param_2 >> 0x10);
  puVar2 = (undefined *)param_2;
  uVar1 = FUN_1138_1d02((int)param_1,(int)((ulong)param_1 >> 0x10),0x100,puVar2,uVar3);
  FUN_1158_1ec1(uVar1,puVar2 + 1,uVar3,puVar2,uVar3);
  local_4 = (undefined)uVar1;
  *param_2 = local_4;
  return;
}



/* ---- FUN_1138_1d8c @ 1138:1d8c  (64 octets) ---- */

void __stdcall16far FUN_1138_1d8c(undefined4 param_1,undefined4 param_2)

{
  undefined2 uVar1;
  undefined2 uVar2;
  undefined2 unaff_SS;
  undefined in_ZF;
  undefined4 uVar3;
  undefined *puVar4;
  undefined2 uVar5;
  undefined local_202 [256];
  undefined local_102 [256];
  
  puVar4 = local_202;
  uVar1 = (undefined2)((ulong)param_1 >> 0x10);
  uVar5 = unaff_SS;
  FUN_1138_1d53((int)param_1,uVar1);
  uVar2 = (undefined2)((ulong)param_2 >> 0x10);
  FUN_1158_18be((int)param_2,uVar2,puVar4,uVar5);
  if (!(bool)in_ZF) {
    uVar3 = FUN_1150_0d4c((int)param_2,uVar2,local_102,unaff_SS);
    FUN_1138_1d25((int)param_1,uVar1,uVar3);
  }
  return;
}



/* ---- FUN_1138_1dcc @ 1138:1dcc  (31 octets) ---- */

void __stdcall16far FUN_1138_1dcc(undefined4 param_1)

{
  undefined2 uVar1;
  
  uVar1 = (undefined2)((ulong)param_1 >> 0x10);
  *(undefined *)((int)param_1 + 0x2b) = 0;
  FUN_1138_24bb((int)param_1,uVar1,0,0,0,0xf0e);
  return;
}



/* ---- FUN_1138_1deb @ 1138:1deb  (29 octets) ---- */

void __stdcall16far FUN_1138_1deb(undefined4 param_1)

{
  undefined2 *puVar1;
  
  puVar1 = (undefined2 *)((int)*(undefined4 *)*(undefined4 *)((int)param_1 + 0x34) + 8);
  (*(code *)*puVar1)();
  return;
}



/* ---- FUN_1138_1e08 @ 1138:1e08  (27 octets) ---- */

uint __stdcall16far FUN_1138_1e08(undefined4 param_1)

{
  uint in_AX;
  uint uVar1;
  
  uVar1 = in_AX & 0xff00;
  if (*(char *)((int)param_1 + 0x2b) == '\0') {
    uVar1 = uVar1 + 1;
  }
  return uVar1;
}



/* ---- FUN_1138_1e23 @ 1138:1e23  (27 octets) ---- */

uint __stdcall16far FUN_1138_1e23(undefined4 param_1)

{
  uint in_AX;
  uint uVar1;
  
  uVar1 = in_AX & 0xff00;
  if (*(char *)((int)param_1 + 0x49) == '\0') {
    uVar1 = uVar1 + 1;
  }
  return uVar1;
}



/* ---- FUN_1138_1e3e @ 1138:1e3e  (52 octets) ---- */

void __stdcall16far FUN_1138_1e3e(undefined4 param_1,char param_2)

{
  int iVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  if ((*(char *)(iVar1 + 0x2b) != param_2) &&
     (*(char *)(iVar1 + 0x2b) = param_2, *(int *)(iVar1 + 0x1a) != 0 || *(int *)(iVar1 + 0x1c) != 0)
     ) {
    FUN_1138_24bb(iVar1,uVar2,0,0,0,0xf08);
  }
  return;
}



/* ---- FUN_1138_1e72 @ 1138:1e72  (47 octets) ---- */

void __stdcall16far FUN_1138_1e72(undefined4 param_1,char param_2)

{
  int iVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  if (*(char *)(iVar1 + 0x48) != param_2) {
    *(char *)(iVar1 + 0x48) = param_2;
    *(undefined *)(iVar1 + 0x49) = 0;
    FUN_1138_24bb(iVar1,uVar2,0,0,0,0xf22);
  }
  return;
}



/* ---- FUN_1138_1ea1 @ 1138:1ea1  (52 octets) ---- */

void __stdcall16far FUN_1138_1ea1(undefined4 param_1,char param_2)

{
  int iVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  if ((*(char *)(iVar1 + 0x49) != param_2) &&
     (*(char *)(iVar1 + 0x49) = param_2, *(int *)(iVar1 + 0x1a) != 0 || *(int *)(iVar1 + 0x1c) != 0)
     ) {
    FUN_1138_24bb(iVar1,uVar2,0,0,0,0xf23);
  }
  return;
}



/* ---- FUN_1138_1ed5 @ 1138:1ed5  (66 octets) ---- */

void __stdcall16far FUN_1138_1ed5(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  if ((*(int *)(iVar1 + 0x3a) != param_3) || (*(int *)(iVar1 + 0x38) != param_2)) {
    *(int *)(iVar1 + 0x38) = param_2;
    *(int *)(iVar1 + 0x3a) = param_3;
    *(undefined *)(iVar1 + 0x2c) = 0;
    FUN_1138_24bb(iVar1,uVar2,0,0,0,0xf0d);
  }
  return;
}



/* ---- FUN_1138_1f17 @ 1138:1f17  (27 octets) ---- */

uint __stdcall16far FUN_1138_1f17(undefined4 param_1)

{
  uint in_AX;
  uint uVar1;
  
  uVar1 = in_AX & 0xff00;
  if (*(char *)((int)param_1 + 0x2c) == '\0') {
    uVar1 = uVar1 + 1;
  }
  return uVar1;
}



/* ---- FUN_1138_1f32 @ 1138:1f32  (52 octets) ---- */

void __stdcall16far FUN_1138_1f32(undefined4 param_1,char param_2)

{
  int iVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  if ((*(char *)(iVar1 + 0x2c) != param_2) &&
     (*(char *)(iVar1 + 0x2c) = param_2, *(int *)(iVar1 + 0x1a) != 0 || *(int *)(iVar1 + 0x1c) != 0)
     ) {
    FUN_1138_24bb(iVar1,uVar2,0,0,0,0xf09);
  }
  return;
}



/* ---- FUN_1138_1f66 @ 1138:1f66  (42 octets) ---- */

void __stdcall16far FUN_1138_1f66(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  if (*(int *)(iVar1 + 0x3c) != param_2) {
    *(int *)(iVar1 + 0x3c) = param_2;
    FUN_1138_24bb(iVar1,uVar2,0,0,0,0xf0f);
  }
  return;
}



/* ---- FUN_1138_1f90 @ 1138:1f90  (35 octets) ---- */

undefined __stdcall16far FUN_1138_1f90(int param_1,int param_2)

{
  undefined uVar1;
  int iVar2;
  int in_DX;
  
  iVar2 = FUN_1138_0d61();
  if ((in_DX == param_2) && (iVar2 == param_1)) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



/* ---- FUN_1138_1fb3 @ 1138:1fb3  (50 octets) ---- */

void __stdcall16far FUN_1138_1fb3(undefined4 param_1,char param_2)

{
  char cVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  cVar1 = FUN_1138_1f90((int)param_1,uVar2);
  if (cVar1 != param_2) {
    if (param_2 == '\0') {
      FUN_1138_0db2(0,0);
    }
    else {
      FUN_1138_0db2((int)param_1,uVar2);
    }
  }
  return;
}



/* ---- FUN_1138_1fe5 @ 1138:1fe5  (29 octets) ---- */

void __stdcall16far FUN_1138_1fe5(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)((int)param_1 + 0x44);
  FUN_1158_17e7(0xff,(int)param_2,(int)((ulong)param_2 >> 0x10),(int)uVar1,
                (int)((ulong)uVar1 >> 0x10));
  return;
}



/* ---- FUN_1138_2002 @ 1138:2002  (26 octets) ---- */

void __stdcall16far FUN_1138_2002(undefined4 param_1,undefined4 param_2)

{
  FUN_1150_0651((int)param_2,(int)((ulong)param_2 >> 0x10),(int)param_1 + 0x44,
                (int)((ulong)param_1 >> 0x10));
  return;
}



/* ---- FUN_1138_201c @ 1138:201c  (22 octets) ---- */

void __stdcall16far FUN_1138_201c(void)

{
  FUN_1158_206a();
  return;
}



/* ---- FUN_1138_2032 @ 1138:2032  (208 octets) ---- */

void __stdcall16far FUN_1138_2032(undefined4 param_1,char param_2)

{
  int iVar1;
  undefined extraout_AH;
  int iVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  int local_6;
  
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  iVar2 = (int)param_1;
  if ((*(int *)(iVar2 + 0x1a) != 0 || *(int *)(iVar2 + 0x1c) != 0) &&
     (uVar4 = *(undefined4 *)((int)*(undefined4 *)(iVar2 + 0x1a) + 0x92),
     iVar1 = FUN_1148_0e58((int)uVar4,(int)((ulong)uVar4 >> 0x10),iVar2,uVar3), -1 < iVar1)) {
    if (param_2 == '\0') {
      local_6 = 0;
    }
    else {
      uVar4 = *(undefined4 *)((int)*(undefined4 *)(iVar2 + 0x1a) + 0x92);
      local_6 = *(int *)((int)uVar4 + 8) + -1;
    }
    if (local_6 != iVar1) {
      uVar4 = *(undefined4 *)((int)*(undefined4 *)(iVar2 + 0x1a) + 0x92);
      FUN_1148_0c94((int)uVar4,(int)((ulong)uVar4 >> 0x10),iVar1);
      uVar4 = *(undefined4 *)((int)*(undefined4 *)(iVar2 + 0x1a) + 0x92);
      FUN_1148_0ea7((int)uVar4,(int)((ulong)uVar4 >> 0x10),iVar2,uVar3,local_6);
      FUN_1138_21b3(iVar2,uVar3,1,CONCAT11(extraout_AH,*(undefined *)(iVar2 + 0x29)));
      uVar4 = FUN_1140_1801(iVar2,uVar3);
      if ((*(byte *)((int)uVar4 + 0x28) & 4) != 0) {
        FUN_1158_206a(0x1140,uVar4,1);
      }
    }
  }
  return;
}



/* ---- FUN_1138_21b3 @ 1138:21b3  (132 octets) ---- */

void __stdcall16far FUN_1138_21b3(undefined4 param_1,char param_2,char param_3)

{
  char cVar1;
  undefined uVar2;
  undefined2 uVar3;
  int iVar4;
  undefined2 uVar5;
  undefined2 unaff_SS;
  undefined *puVar6;
  undefined local_12 [8];
  undefined local_a [8];
  
  iVar4 = (int)param_1;
  uVar5 = (undefined2)((ulong)param_1 >> 0x10);
  if ((param_3 != '\0') || ((*(byte *)(iVar4 + 0x18) & 0x10) != 0)) {
    if (*(int *)(iVar4 + 0x1a) != 0 || *(int *)(iVar4 + 0x1c) != 0) {
      cVar1 = FUN_1138_64fa((int)*(undefined4 *)(iVar4 + 0x1a),
                            (int)((ulong)*(undefined4 *)(iVar4 + 0x1a) >> 0x10));
      if (cVar1 != '\0') {
        puVar6 = local_12;
        uVar3 = unaff_SS;
        FUN_1138_1803(iVar4,uVar5);
        FUN_1158_161b(8,local_a,unaff_SS,puVar6,uVar3);
        uVar3 = FUN_1138_62b9((int)*(undefined4 *)(iVar4 + 0x1a),
                              (int)((ulong)*(undefined4 *)(iVar4 + 0x1a) >> 0x10));
        if ((param_2 == '\0') &&
           ((*(byte *)((int)*(undefined4 *)(iVar4 + 0x1a) + 0x26) & 0x40) == 0)) {
          uVar2 = 1;
        }
        else {
          uVar2 = 0;
        }
        INVALIDATERECT(0x1138,uVar2,local_a,unaff_SS,uVar3);
      }
    }
  }
  return;
}



/* ---- FUN_1138_2237 @ 1138:2237  (33 octets) ---- */

void __stdcall16far FUN_1138_2237(undefined4 param_1)

{
  undefined2 in_AX;
  byte bVar2;
  int iVar1;
  int iVar3;
  undefined2 uVar4;
  
  uVar4 = (undefined2)((ulong)param_1 >> 0x10);
  iVar3 = (int)param_1;
  bVar2 = (byte)((uint)in_AX >> 8);
  iVar1 = (uint)bVar2 * 0x100;
  if ((*(byte *)(iVar3 + 0x26) & 0x40) != 0) {
    iVar1 = iVar1 + 1;
  }
  FUN_1138_21b3(iVar3,uVar4,iVar1,CONCAT11(bVar2,*(undefined *)(iVar3 + 0x29)));
  return;
}



/* ---- FUN_1138_2258 @ 1138:2258  (19 octets) ---- */

void __stdcall16far FUN_1138_2258(undefined4 param_1)

{
  FUN_1138_1c77((int)param_1,(int)((ulong)param_1 >> 0x10),0);
  return;
}



/* ---- FUN_1138_226b @ 1138:226b  (58 octets) ---- */

void __stdcall16far FUN_1138_226b(undefined4 param_1)

{
  undefined2 *puVar1;
  int iVar2;
  undefined2 uVar3;
  
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  iVar2 = (int)param_1;
  if (*(int *)(iVar2 + 0x1a) != 0 || *(int *)(iVar2 + 0x1c) != 0) {
    puVar1 = (undefined2 *)((int)*(undefined4 *)*(undefined4 *)(iVar2 + 0x1a) + 0x74);
    (*(code *)*puVar1)();
  }
  if ((*(byte *)(iVar2 + 0x18) & 0x10) == 0) {
    FUN_1138_1c77(iVar2,uVar3,1);
  }
  return;
}



/* ---- FUN_1138_22a5 @ 1138:22a5  (33 octets) ---- */

void __stdcall16far FUN_1138_22a5(undefined4 param_1)

{
  undefined2 *puVar1;
  int iVar2;
  undefined2 uVar3;
  
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  iVar2 = (int)param_1;
  if (*(int *)(iVar2 + 0x1a) != 0 || *(int *)(iVar2 + 0x1c) != 0) {
    puVar1 = (undefined2 *)((int)*(undefined4 *)*(undefined4 *)(iVar2 + 0x1a) + 0x50);
    (*(code *)*puVar1)();
  }
  return;
}



/* ---- FUN_1138_22c6 @ 1138:22c6  (19 octets) ---- */

void __stdcall16far FUN_1138_22c6(undefined4 *param_1)

{
  undefined2 *puVar1;
  
  puVar1 = (undefined2 *)((int)*param_1 + 0x48);
  (*(code *)*puVar1)();
  return;
}



/* ---- FUN_1138_23c6 @ 1138:23c6  (153 octets) ---- */

void __stdcall16far FUN_1138_23c6(undefined4 param_1,undefined param_3)

{
  char cVar1;
  undefined extraout_AH;
  undefined extraout_AH_00;
  undefined uVar2;
  undefined2 unaff_SS;
  undefined4 uVar3;
  undefined *puVar4;
  undefined local_106 [256];
  undefined4 local_6;
  
  cVar1 = FUN_1158_2255(0x4fb,0x1140,(int)param_1,param_1._2_2_);
  if (cVar1 != '\0') {
    puVar4 = local_106;
    FUN_1150_092b(0xf046);
    uVar3 = FUN_1150_28e6(0x52,0x1138,CONCAT11(extraout_AH,1),puVar4,unaff_SS);
    FUN_1158_1399(0x1150,uVar3);
  }
  if (DAT_1160_2c12 == 0 && DAT_1160_2c14 == 0) {
    uVar2 = 0;
    if ((*(byte *)((int)param_1 + 0x28) & 1) != 0) {
      GETCURSORPOS(0x1158,&local_6);
      local_6 = FUN_1138_1a06((int)param_1,param_1._2_2_,(undefined2)local_6,local_6._2_2_);
      FUN_1138_24bb((int)param_1,param_1._2_2_,local_6,0,0x202);
      uVar2 = extraout_AH_00;
    }
    FUN_1138_0ff7(CONCAT11(uVar2,param_3),(int)param_1,param_1._2_2_);
  }
  return;
}



/* ---- FUN_1138_245f @ 1138:245f  (48 octets) ---- */

void __stdcall16far FUN_1138_245f(undefined4 param_1)

{
  undefined2 *puVar1;
  
  if (*(int *)((int)param_1 + 100) != 0) {
    puVar1 = (undefined2 *)((int)param_1 + 0x62);
    (*(code *)*puVar1)();
  }
  return;
}



/* ---- FUN_1138_248f @ 1138:248f  (7 octets) ---- */

void __stdcall16far FUN_1138_248f(void)

{
  return;
}



/* ---- FUN_1138_2496 @ 1138:2496  (37 octets) ---- */

undefined2 __stdcall16far FUN_1138_2496(int param_1,int param_2)

{
  undefined uVar1;
  
  if ((DAT_1160_2c14 == param_2) && (DAT_1160_2c12 == param_1)) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return CONCAT11((char)((uint)DAT_1160_2c12 >> 8),uVar1);
}



/* ---- FUN_1138_24bb @ 1138:24bb  (83 octets) ---- */

undefined4 __stdcall16far FUN_1138_24bb(undefined4 *param_1)

{
  undefined2 *puVar1;
  
  if ((undefined4 *)param_1 != (undefined4 *)0x0 || param_1._2_2_ != 0) {
    puVar1 = (undefined2 *)((int)*param_1 + 0x40);
    (*(code *)*puVar1)();
  }
  return 0;
}



/* ---- FUN_1138_250e @ 1138:250e  (7 octets) ---- */

void __stdcall16far FUN_1138_250e(void)

{
  return;
}



/* ---- FUN_1138_2515 @ 1138:2515  (251 octets) ---- */

void __stdcall16far FUN_1138_2515(undefined4 param_1,uint *param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  char cVar3;
  int iVar4;
  undefined2 uVar5;
  int iVar6;
  uint *puVar7;
  undefined2 uVar8;
  undefined2 uVar9;
  undefined2 unaff_CS;
  long lVar10;
  
  uVar8 = (undefined2)((ulong)param_1 >> 0x10);
  iVar6 = (int)param_1;
  puVar7 = (uint *)param_2;
  uVar9 = (undefined2)((ulong)param_2 >> 0x10);
  if ((*(byte *)(iVar6 + 0x18) & 0x10) != 0) {
    unaff_CS = 0x1140;
    lVar10 = FUN_1140_17a8(iVar6,uVar8);
    uVar5 = (undefined2)((ulong)lVar10 >> 0x10);
    iVar4 = (int)lVar10;
    if ((lVar10 != 0) && (*(int *)(iVar4 + 0x106) != 0 || *(int *)(iVar4 + 0x108) != 0)) {
      puVar2 = (undefined4 *)*(undefined4 *)(iVar4 + 0x106);
      cVar3 = (*(code *)*(undefined2 *)(undefined2 *)*puVar2)
                        (0x1140,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),puVar7,uVar9,iVar6
                         ,uVar8);
      if (cVar3 != '\0') {
        return;
      }
    }
  }
  if ((0x1ff < *param_2) && (*param_2 < 0x20a)) {
    unaff_CS = 0x1138;
    cVar3 = FUN_1138_2496(iVar6,uVar8);
    if (cVar3 == '\0') {
      if (((*(byte *)(iVar6 + 0x26) & 0x80) == 0) &&
         (((uVar1 = *param_2, uVar1 == 0x203 || (uVar1 == 0x206)) || (uVar1 == 0x209)))) {
        *param_2 = *param_2 - 2;
      }
      uVar1 = *param_2;
      if ((uVar1 == 0x201) || (uVar1 == 0x203)) {
        if (*(char *)(iVar6 + 0x2e) == '\x01') {
          FUN_1138_23c6(iVar6,uVar8,1);
          return;
        }
        *(byte *)(iVar6 + 0x28) = *(byte *)(iVar6 + 0x28) | 1;
      }
      else if (uVar1 == 0x202) {
        *(byte *)(iVar6 + 0x28) = *(byte *)(iVar6 + 0x28) & 0xfe;
      }
    }
    else {
      unaff_CS = 0x1138;
      FUN_1138_1165(puVar7,uVar9);
    }
  }
  FUN_1158_2038(unaff_CS,iVar6,uVar8,puVar7,uVar9);
  return;
}



/* ---- FUN_1138_2610 @ 1138:2610  (239 octets) ---- */

void __stdcall16far FUN_1138_2610(undefined4 param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined4 uVar6;
  undefined2 local_6;
  undefined2 local_4;
  
  uVar4 = (undefined2)((ulong)param_2 >> 0x10);
  piVar1 = (int *)param_2;
  iVar2 = *param_2;
  iVar3 = (int)param_1;
  uVar5 = (undefined2)((ulong)param_1 >> 0x10);
  if (iVar2 == 0xd) {
    if (*(int *)(iVar3 + 0x30) == 0 && *(int *)(iVar3 + 0x32) == 0) {
      local_6 = 0x14f8;
      local_4 = 0x1160;
    }
    else {
      local_6 = *(undefined2 *)(iVar3 + 0x30);
      local_4 = *(undefined2 *)(iVar3 + 0x32);
    }
    uVar6 = FUN_1150_0d24(piVar1[1] + -1,local_6,local_4,piVar1[2],piVar1[3]);
    iVar2 = FUN_1150_0c8c(uVar6);
    piVar1[4] = iVar2;
    piVar1[5] = 0;
  }
  else if (iVar2 == 0xe) {
    if (*(int *)(iVar3 + 0x30) == 0 && *(int *)(iVar3 + 0x32) == 0) {
      piVar1[4] = 0;
      piVar1[5] = 0;
    }
    else {
      iVar2 = FUN_1150_0c8c(*(undefined2 *)(iVar3 + 0x30),*(undefined2 *)(iVar3 + 0x32));
      piVar1[4] = iVar2;
      piVar1[5] = 0;
    }
  }
  else if (iVar2 == 0xc) {
    uVar6 = FUN_1150_0ed6(piVar1[2],piVar1[3]);
    FUN_1150_0f23(*(undefined2 *)(iVar3 + 0x30),*(undefined2 *)(iVar3 + 0x32));
    *(undefined2 *)(iVar3 + 0x30) = (int)uVar6;
    *(undefined2 *)(iVar3 + 0x32) = (int)((ulong)uVar6 >> 0x10);
  }
  return;
}



/* ---- FUN_1138_26ff @ 1138:26ff  (24 octets) ---- */

void __stdcall16far FUN_1138_26ff(undefined4 param_1,undefined4 param_2)

{
  undefined uVar1;
  
  uVar1 = FUN_1148_3193((int)param_2,(int)((ulong)param_2 >> 0x10));
  *(undefined *)((int)param_1 + 0x2f) = uVar1;
  return;
}



/* ---- FUN_1138_2717 @ 1138:2717  (25 octets) ---- */

void __stdcall16far FUN_1138_2717(undefined4 param_1,undefined4 param_2)

{
  FUN_1148_42e2((int)param_2,(int)((ulong)param_2 >> 0x10),*(undefined *)((int)param_1 + 0x2f));
  return;
}



/* ---- FUN_1138_2773 @ 1138:2773  (37 octets) ---- */

void __stdcall16far FUN_1138_2773(undefined4 param_1)

{
  undefined2 *puVar1;
  
  if (*(int *)((int)param_1 + 0x7c) != 0) {
    puVar1 = (undefined2 *)((int)param_1 + 0x7a);
    (*(code *)*puVar1)();
  }
  return;
}



/* ---- FUN_1138_2798 @ 1138:2798  (40 octets) ---- */

void __stdcall16far FUN_1138_2798(undefined4 param_1)

{
  undefined2 *puVar1;
  
  if (*(int *)((int)param_1 + 0x84) != 0) {
    puVar1 = (undefined2 *)((int)param_1 + 0x82);
    (*(code *)*puVar1)();
  }
  return;
}



/* ---- FUN_1138_27c0 @ 1138:27c0  (50 octets) ---- */

void __stdcall16far FUN_1138_27c0(undefined4 param_1)

{
  undefined2 *puVar1;
  
  if (*(int *)((int)param_1 + 0x4c) != 0) {
    puVar1 = (undefined2 *)((int)param_1 + 0x4a);
    (*(code *)*puVar1)();
  }
  return;
}



/* ---- FUN_1138_27f2 @ 1138:27f2  (58 octets) ---- */

void __stdcall16far FUN_1138_27f2(undefined4 param_1,byte param_2,byte param_3,undefined4 param_4)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined2 uVar4;
  
  uVar4 = (undefined2)((ulong)param_4 >> 0x10);
  iVar3 = (int)param_4;
  uVar2 = (uint)param_3;
  bVar1 = FUN_1140_1697(*(undefined2 *)(iVar3 + 2));
  FUN_1158_206a(0x1140,(int)param_1,(int)((ulong)param_1 >> 0x10),*(undefined2 *)(iVar3 + 6),
                *(undefined2 *)(iVar3 + 4),bVar1 | param_2,uVar2);
  return;
}



/* ---- FUN_1138_282c @ 1138:282c  (142 octets) ---- */

void __stdcall16far FUN_1138_282c(undefined4 *param_1,undefined4 param_3)

{
  undefined2 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined2 uVar4;
  undefined4 uVar5;
  
  FUN_1138_1a38((undefined4 *)param_1,param_1._2_2_,(undefined4 *)param_1,param_1._2_2_);
  puVar1 = (undefined2 *)((int)*param_1 + -0x10);
  (*(code *)*puVar1)(0x1138,(undefined4 *)param_1,param_1._2_2_,(undefined2)param_3,param_3._2_2_);
  if ((*(byte *)((int)(undefined4 *)param_1 + 0x26) & 2) != 0) {
    FUN_1138_1fb3((undefined4 *)param_1,param_1._2_2_,1);
  }
  if ((*(byte *)((int)(undefined4 *)param_1 + 0x26) & 8) != 0) {
    *(byte *)((undefined4 *)param_1 + 10) = *(byte *)((undefined4 *)param_1 + 10) | 2;
  }
  uVar5 = FUN_1140_1801((undefined4 *)param_1,param_1._2_2_);
  uVar4 = (undefined2)((ulong)uVar5 >> 0x10);
  iVar3 = (int)uVar5;
  if (*(int *)(iVar3 + 0x11a) != 0 || *(int *)(iVar3 + 0x11c) != 0) {
    puVar2 = (undefined4 *)*(undefined4 *)(iVar3 + 0x11a);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x1c);
    (*(code *)*puVar1)(0x1140,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),
                       (undefined4 *)param_1,param_1._2_2_);
  }
  FUN_1138_27f2((undefined4 *)param_1,param_1._2_2_,0,0,(undefined2)param_3,param_3._2_2_);
  return;
}



/* ---- FUN_1138_28ba @ 1138:28ba  (41 octets) ---- */

void __stdcall16far FUN_1138_28ba(undefined4 *param_1,undefined2 param_3,undefined2 param_4)

{
  undefined2 *puVar1;
  
  FUN_1138_1a38((undefined4 *)param_1,param_1._2_2_,(undefined4 *)param_1,param_1._2_2_);
  puVar1 = (undefined2 *)((int)*param_1 + -0x10);
  (*(code *)*puVar1)(0x1138,(undefined4 *)param_1,param_1._2_2_,param_3,param_4);
  return;
}



/* ---- FUN_1138_28e3 @ 1138:28e3  (47 octets) ---- */

void __stdcall16far FUN_1138_28e3(undefined4 *param_1,undefined4 param_2)

{
  undefined2 *puVar1;
  undefined2 uVar2;
  
  puVar1 = (undefined2 *)((int)*param_1 + -0x10);
  (*(code *)*puVar1)();
  uVar2 = (undefined2)((ulong)param_2 >> 0x10);
  FUN_1138_2975((undefined4 *)param_1,(int)((ulong)param_1 >> 0x10),
                *(undefined2 *)((int)param_2 + 6),*(undefined2 *)((int)param_2 + 4));
  return;
}



/* ---- FUN_1138_2912 @ 1138:2912  (99 octets) ---- */

void __stdcall16far FUN_1138_2912(undefined4 *param_1,undefined4 param_3)

{
  undefined2 *puVar1;
  
  FUN_1138_1a38((undefined4 *)param_1,param_1._2_2_,(undefined4 *)param_1,param_1._2_2_);
  puVar1 = (undefined2 *)((int)*param_1 + -0x10);
  (*(code *)*puVar1)(0x1138,(undefined4 *)param_1,param_1._2_2_,(undefined2)param_3,param_3._2_2_);
  if ((*(byte *)((int)(undefined4 *)param_1 + 0x26) & 2) != 0) {
    FUN_1138_1fb3((undefined4 *)param_1,param_1._2_2_,1);
  }
  if ((*(byte *)((int)(undefined4 *)param_1 + 0x26) & 8) != 0) {
    FUN_1158_206a(0x1138,(undefined4 *)param_1,param_1._2_2_);
  }
  FUN_1138_27f2((undefined4 *)param_1,param_1._2_2_,0x40,0,(undefined2)param_3,param_3._2_2_);
  return;
}



/* ---- FUN_1138_2975 @ 1138:2975  (157 octets) ---- */

undefined __stdcall16far FUN_1138_2975(undefined4 param_1,undefined2 param_2,undefined2 param_3)

{
  int *piVar1;
  undefined2 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  undefined2 uVar6;
  int local_8;
  int local_6;
  
  iVar5 = (int)((ulong)param_1 >> 0x10);
  iVar4 = (int)param_1;
  local_8 = iVar4;
  local_6 = iVar5;
  if ((*(byte *)(iVar4 + 0x18) & 0x10) == 0) {
    while (local_8 != 0 || local_6 != 0) {
      if ((*(int *)(local_8 + 0x40) != 0 || *(int *)(local_8 + 0x42) != 0) &&
         (*(char *)((int)*(undefined4 *)(local_8 + 0x40) + 0x25) != '\0')) {
        FUN_1138_1a38(iVar4,iVar5,0,0);
        uVar6 = (undefined2)((ulong)*(undefined4 *)(local_8 + 0x40) >> 0x10);
        iVar4 = (int)*(undefined4 *)(local_8 + 0x40);
        *(int *)(iVar4 + 0x26) = local_8;
        *(int *)(iVar4 + 0x28) = local_6;
        puVar3 = (undefined4 *)*(undefined4 *)(local_8 + 0x40);
        puVar2 = (undefined2 *)((int)*puVar3 + 0x38);
        (*(code *)*puVar2)(0x1138,(undefined4 *)puVar3,(int)((ulong)puVar3 >> 0x10),param_2,param_3)
        ;
        return 1;
      }
      piVar1 = (int *)(local_8 + 0x1c);
      local_8 = *(int *)(local_8 + 0x1a);
      local_6 = *piVar1;
    }
  }
  return 0;
}



/* ---- FUN_1138_2a12 @ 1138:2a12  (92 octets) ---- */

void __stdcall16far FUN_1138_2a12(undefined4 *param_1,undefined4 param_2)

{
  undefined2 *puVar1;
  char cVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  undefined4 uVar7;
  
  uVar5 = (undefined2)((ulong)param_1 >> 0x10);
  puVar3 = (undefined4 *)param_1;
  puVar1 = (undefined2 *)((int)*param_1 + -0x10);
  (*(code *)*puVar1)();
  uVar6 = (undefined2)((ulong)param_2 >> 0x10);
  iVar4 = (int)param_2;
  uVar7 = FUN_1138_19d4(puVar3,uVar5,*(undefined2 *)(iVar4 + 4),*(undefined2 *)(iVar4 + 6));
  cVar2 = FUN_1138_2975(puVar3,uVar5,(int)((ulong)uVar7 >> 0x10),(int)uVar7);
  if (cVar2 == '\0') {
    FUN_1138_27f2(puVar3,uVar5,0,1,iVar4,uVar6);
  }
  return;
}



/* ---- FUN_1138_2a6e @ 1138:2a6e  (44 octets) ---- */

void __stdcall16far FUN_1138_2a6e(undefined4 *param_1,undefined4 param_2)

{
  undefined2 *puVar1;
  
  puVar1 = (undefined2 *)((int)*param_1 + -0x10);
  (*(code *)*puVar1)();
  FUN_1138_27f2((undefined4 *)param_1,(int)((ulong)param_1 >> 0x10),0x40,1,(int)param_2,
                (int)((ulong)param_2 >> 0x10));
  return;
}



/* ---- FUN_1138_2a9a @ 1138:2a9a  (44 octets) ---- */

void __stdcall16far FUN_1138_2a9a(undefined4 *param_1,undefined4 param_2)

{
  undefined2 *puVar1;
  
  puVar1 = (undefined2 *)((int)*param_1 + -0x10);
  (*(code *)*puVar1)();
  FUN_1138_27f2((undefined4 *)param_1,(int)((ulong)param_1 >> 0x10),0,2,(int)param_2,
                (int)((ulong)param_2 >> 0x10));
  return;
}



/* ---- FUN_1138_2ac6 @ 1138:2ac6  (44 octets) ---- */

void __stdcall16far FUN_1138_2ac6(undefined4 *param_1,undefined4 param_2)

{
  undefined2 *puVar1;
  
  puVar1 = (undefined2 *)((int)*param_1 + -0x10);
  (*(code *)*puVar1)();
  FUN_1138_27f2((undefined4 *)param_1,(int)((ulong)param_1 >> 0x10),0x40,2,(int)param_2,
                (int)((ulong)param_2 >> 0x10));
  return;
}



/* ---- FUN_1138_2af2 @ 1138:2af2  (46 octets) ---- */

void __stdcall16far FUN_1138_2af2(undefined4 param_1)

{
  undefined2 *puVar1;
  
  if (*(int *)((int)param_1 + 0x54) != 0) {
    puVar1 = (undefined2 *)((int)param_1 + 0x52);
    (*(code *)*puVar1)();
  }
  return;
}



/* ---- FUN_1138_2b20 @ 1138:2b20  (69 octets) ---- */

void __stdcall16far FUN_1138_2b20(undefined4 *param_1,undefined4 param_2)

{
  undefined2 *puVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined4 *puVar4;
  undefined2 uVar5;
  int iVar6;
  undefined2 uVar7;
  
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  puVar1 = (undefined2 *)((int)*param_1 + -0x10);
  puVar4 = (undefined4 *)param_1;
  uVar5 = uVar3;
  iVar6 = (int)param_2;
  uVar7 = param_2._2_2_;
  (*(code *)*puVar1)();
  uVar2 = FUN_1140_1697(*(undefined2 *)((int)param_2 + 2));
  FUN_1158_206a(0x1140,(undefined4 *)param_1,uVar3,*(undefined2 *)((int)param_2 + 6),
                *(undefined2 *)((int)param_2 + 4),uVar2,puVar4,uVar5,iVar6,uVar7);
  return;
}



/* ---- FUN_1138_2b65 @ 1138:2b65  (50 octets) ---- */

void __stdcall16far FUN_1138_2b65(undefined4 param_1)

{
  undefined2 *puVar1;
  
  if (*(int *)((int)param_1 + 0x5c) != 0) {
    puVar1 = (undefined2 *)((int)param_1 + 0x5a);
    (*(code *)*puVar1)();
  }
  return;
}



/* ---- FUN_1138_2b97 @ 1138:2b97  (55 octets) ---- */

void __stdcall16far FUN_1138_2b97(undefined4 param_1,byte param_2,undefined4 param_3)

{
  uint uVar1;
  undefined2 uVar2;
  int iVar3;
  undefined2 uVar4;
  
  uVar4 = (undefined2)((ulong)param_3 >> 0x10);
  iVar3 = (int)param_3;
  uVar1 = (uint)param_2;
  uVar2 = FUN_1140_1697(*(undefined2 *)(iVar3 + 2));
  FUN_1158_206a(0x1140,(int)param_1,(int)((ulong)param_1 >> 0x10),*(undefined2 *)(iVar3 + 6),
                *(undefined2 *)(iVar3 + 4),uVar2,uVar1);
  return;
}



/* ---- FUN_1138_2bce @ 1138:2bce  (127 octets) ---- */

void __stdcall16far FUN_1138_2bce(undefined4 *param_1,undefined4 param_2)

{
  undefined2 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined2 uVar4;
  undefined2 unaff_CS;
  undefined2 unaff_SS;
  undefined4 *puVar5;
  undefined2 uVar6;
  int iVar7;
  undefined2 uVar8;
  undefined local_a [8];
  
  uVar4 = (undefined2)((ulong)param_1 >> 0x10);
  puVar3 = (undefined4 *)param_1;
  puVar1 = (undefined2 *)((int)*param_1 + -0x10);
  puVar5 = puVar3;
  uVar6 = uVar4;
  iVar7 = (int)param_2;
  uVar8 = param_2._2_2_;
  (*(code *)*puVar1)();
  if ((*(byte *)((int)puVar3 + 0x26) & 2) != 0) {
    unaff_CS = 0x1138;
    FUN_1138_1fb3(puVar3,uVar4,0);
  }
  if ((*(byte *)(puVar3 + 10) & 2) != 0) {
    *(byte *)(puVar3 + 10) = *(byte *)(puVar3 + 10) & 0xfd;
    puVar1 = (undefined2 *)((int)*param_1 + 0x34);
    (*(code *)*puVar1)(unaff_CS,puVar3,uVar4,local_a);
    iVar2 = PTINRECT(unaff_CS,*(undefined2 *)((int)param_2 + 4),*(undefined2 *)((int)param_2 + 6),
                     unaff_SS);
    if (iVar2 != 0) {
      FUN_1158_206a(0x14d0,puVar3,uVar4,puVar5,uVar6,iVar7,uVar8);
    }
  }
  FUN_1138_2b97(puVar3,uVar4,0,(int)param_2,param_2._2_2_);
  return;
}



/* ---- FUN_1138_2c4d @ 1138:2c4d  (42 octets) ---- */

void __stdcall16far FUN_1138_2c4d(undefined4 *param_1,undefined4 param_2)

{
  undefined2 *puVar1;
  
  puVar1 = (undefined2 *)((int)*param_1 + -0x10);
  (*(code *)*puVar1)();
  FUN_1138_2b97((undefined4 *)param_1,(int)((ulong)param_1 >> 0x10),1,(int)param_2,
                (int)((ulong)param_2 >> 0x10));
  return;
}



/* ---- FUN_1138_2c77 @ 1138:2c77  (42 octets) ---- */

void __stdcall16far FUN_1138_2c77(undefined4 *param_1,undefined4 param_2)

{
  undefined2 *puVar1;
  
  puVar1 = (undefined2 *)((int)*param_1 + -0x10);
  (*(code *)*puVar1)();
  FUN_1138_2b97((undefined4 *)param_1,(int)((ulong)param_1 >> 0x10),2,(int)param_2,
                (int)((ulong)param_2 >> 0x10));
  return;
}



/* ---- FUN_1138_2ca1 @ 1138:2ca1  (77 octets) ---- */

void __stdcall16far FUN_1138_2ca1(undefined4 *param_1)

{
  undefined2 *puVar1;
  char cVar2;
  undefined4 *puVar3;
  undefined2 uVar4;
  
  uVar4 = (undefined2)((ulong)param_1 >> 0x10);
  puVar3 = (undefined4 *)param_1;
  puVar1 = (undefined2 *)((int)*param_1 + -0x10);
  (*(code *)*puVar1)();
  cVar2 = FUN_1138_1f90(puVar3,uVar4);
  if (cVar2 != '\0') {
    FUN_1138_1fb3(puVar3,uVar4,0);
    if ((*(byte *)(puVar3 + 10) & 1) != 0) {
      FUN_1138_24bb(puVar3,uVar4,0xffff,0xffff,0,0x202);
    }
  }
  return;
}



/* ---- FUN_1138_2cee @ 1138:2cee  (50 octets) ---- */

void __stdcall16far FUN_1138_2cee(undefined4 param_1)

{
  undefined2 uVar1;
  int iVar2;
  undefined2 uVar3;
  
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  iVar2 = (int)param_1;
  if ((*(byte *)(iVar2 + 0x18) & 0x10) == 0) {
    if ((*(char *)(iVar2 + 0x29) == '\0') || ((*(byte *)(iVar2 + 0x26) & 0x40) == 0)) {
      uVar1 = 0;
    }
    else {
      uVar1 = 1;
    }
    FUN_1138_21b3(iVar2,uVar3,uVar1,1);
  }
  return;
}



/* ---- FUN_1138_2d20 @ 1138:2d20  (19 octets) ---- */

void __stdcall16far FUN_1138_2d20(undefined4 *param_1)

{
  undefined2 *puVar1;
  
  puVar1 = (undefined2 *)((int)*param_1 + 0x44);
  (*(code *)*puVar1)();
  return;
}



/* ---- FUN_1138_2d33 @ 1138:2d33  (19 octets) ---- */

void __stdcall16far FUN_1138_2d33(undefined4 *param_1)

{
  undefined2 *puVar1;
  
  puVar1 = (undefined2 *)((int)*param_1 + 0x44);
  (*(code *)*puVar1)();
  return;
}



/* ---- FUN_1138_2d46 @ 1138:2d46  (19 octets) ---- */

void __stdcall16far FUN_1138_2d46(undefined4 *param_1)

{
  undefined2 *puVar1;
  
  puVar1 = (undefined2 *)((int)*param_1 + 0x44);
  (*(code *)*puVar1)();
  return;
}



/* ---- FUN_1138_2d59 @ 1138:2d59  (47 octets) ---- */

void __stdcall16far FUN_1138_2d59(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  if (*(char *)(iVar1 + 0x2c) != '\0') {
    uVar4 = (undefined2)((ulong)*(undefined4 *)(iVar1 + 0x1a) >> 0x10);
    iVar2 = (int)*(undefined4 *)(iVar1 + 0x1a);
    FUN_1138_1ed5(iVar1,uVar3,*(undefined2 *)(iVar2 + 0x38),*(undefined2 *)(iVar2 + 0x3a));
    *(undefined *)(iVar1 + 0x2c) = 1;
  }
  return;
}



/* ---- FUN_1138_2d88 @ 1138:2d88  (44 octets) ---- */

void __stdcall16far FUN_1138_2d88(undefined4 param_1)

{
  int iVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  if (*(char *)(iVar1 + 0x49) != '\0') {
    FUN_1138_1e72(iVar1,uVar2,*(undefined *)((int)*(undefined4 *)(iVar1 + 0x1a) + 0x48));
    *(undefined *)(iVar1 + 0x49) = 1;
  }
  return;
}



/* ---- FUN_1138_2db4 @ 1138:2db4  (47 octets) ---- */

void __stdcall16far FUN_1138_2db4(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  if (*(char *)(iVar1 + 0x2b) != '\0') {
    uVar4 = (undefined2)((ulong)*(undefined4 *)(iVar1 + 0x1a) >> 0x10);
    iVar2 = (int)*(undefined4 *)(iVar1 + 0x1a);
    FUN_1138_1deb(iVar1,uVar3,*(undefined2 *)(iVar2 + 0x34),*(undefined2 *)(iVar2 + 0x36));
    *(undefined *)(iVar1 + 0x2b) = 1;
  }
  return;
}



/* ---- FUN_1138_2de3 @ 1138:2de3  (22 octets) ---- */

void __stdcall16far FUN_1138_2de3(undefined2 param_1_00,undefined2 param_2,undefined4 param_1)

{
  undefined2 uVar1;
  
  uVar1 = (undefined2)((ulong)param_1 >> 0x10);
  *(undefined2 *)((int)param_1 + 8) = 1;
  *(undefined2 *)((int)param_1 + 10) = 0;
  return;
}



/* ---- FUN_1138_2df9 @ 1138:2df9  (42 octets) ---- */

void __stdcall16far FUN_1138_2df9(undefined4 param_1)

{
  int iVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  if (*(int *)(iVar1 + 0x1a) != 0 || *(int *)(iVar1 + 0x1c) != 0) {
    FUN_1138_24bb((int)*(undefined4 *)(iVar1 + 0x1a),
                  (int)((ulong)*(undefined4 *)(iVar1 + 0x1a) >> 0x10),iVar1,uVar2,0,0xf13);
  }
  return;
}



/* ---- FUN_1138_2e23 @ 1138:2e23  (42 octets) ---- */

void __stdcall16far FUN_1138_2e23(undefined4 param_1)

{
  int iVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  if (*(int *)(iVar1 + 0x1a) != 0 || *(int *)(iVar1 + 0x1c) != 0) {
    FUN_1138_24bb((int)*(undefined4 *)(iVar1 + 0x1a),
                  (int)((ulong)*(undefined4 *)(iVar1 + 0x1a) >> 0x10),iVar1,uVar2,0,0xf14);
  }
  return;
}



/* ---- FUN_1138_2e4d @ 1138:2e4d  (20 octets) ---- */

void __stdcall16far FUN_1138_2e4d(undefined2 param_1_00,undefined2 param_2,undefined4 param_1)

{
  undefined2 uVar1;
  
  uVar1 = (undefined2)((ulong)param_1 >> 0x10);
  *(undefined2 *)((int)param_1 + 8) = 0;
  *(undefined2 *)((int)param_1 + 10) = 0;
  return;
}



/* ---- FUN_1138_2e61 @ 1138:2e61  (155 octets) ---- */

undefined4 __stdcall16far
FUN_1138_2e61(undefined4 param_1,char param_2,undefined2 param_3,undefined2 param_4)

{
  int iVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  undefined2 uStack_a;
  
  if (param_2 != '\0') {
    FUN_1158_1fe2();
  }
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  FUN_1138_139b(iVar1,uVar2,0,param_3,param_4);
  uVar3 = FUN_1140_1489(0x421c,0x1138,iVar1,uVar2);
  *(undefined2 *)(iVar1 + 0x8a) = (int)uVar3;
  *(undefined2 *)(iVar1 + 0x8c) = (int)((ulong)uVar3 >> 0x10);
  uVar3 = FUN_1128_1527(0x4d4,0x1128,1);
  *(undefined2 *)(iVar1 + 0x9e) = (int)uVar3;
  *(undefined2 *)(iVar1 + 0xa0) = (int)((ulong)uVar3 >> 0x10);
  FUN_1128_1684((int)*(undefined4 *)(iVar1 + 0x9e),
                (int)((ulong)*(undefined4 *)(iVar1 + 0x9e) >> 0x10),*(undefined2 *)(iVar1 + 0x38),
                *(undefined2 *)(iVar1 + 0x3a));
  *(undefined *)(iVar1 + 0xa6) = 1;
  *(undefined2 *)(iVar1 + 0xa8) = 0xffff;
  if (param_2 != '\0') {
    DAT_1160_1858 = uStack_a;
  }
  return param_1;
}



/* ---- FUN_1138_2efc @ 1138:2efc  (203 octets) ---- */

void __stdcall16far FUN_1138_2efc(undefined4 *param_1,char param_2)

{
  undefined2 *puVar1;
  undefined extraout_AH;
  undefined4 *puVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined4 *puVar5;
  int local_4;
  
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  puVar2 = (undefined4 *)param_1;
  uVar4 = 0x1148;
  FUN_1148_4ea5(puVar2,uVar3);
  if (*(int *)((int)puVar2 + 0x1a) != 0 || *(int *)(puVar2 + 7) != 0) {
    uVar4 = 0x1138;
    FUN_1138_3752(puVar2,uVar3,1);
  }
  if (*(int *)((int)puVar2 + 0xa2) != 0) {
    puVar1 = (undefined2 *)((int)*param_1 + 100);
    (*(code *)*puVar1)(uVar4,puVar2,uVar3);
  }
  local_4 = FUN_1138_39fd(puVar2,uVar3);
  while (local_4 != 0) {
    local_4 = local_4 + -1;
    puVar5 = (undefined4 *)FUN_1138_398f(puVar2,uVar3,local_4);
    FUN_1138_37f6(puVar2,uVar3,puVar5);
    puVar1 = (undefined2 *)((int)*puVar5 + -4);
    (*(code *)*puVar1)(0x1138,puVar5,CONCAT11(extraout_AH,1));
  }
  FUN_1158_1f7f((int)*(undefined4 *)((int)puVar2 + 0x9e),
                (int)((ulong)*(undefined4 *)((int)puVar2 + 0x9e) >> 0x10));
  if (*(int *)((int)puVar2 + 0x8a) != 0 || *(int *)(puVar2 + 0x23) != 0) {
    FUN_1140_15a5(*(undefined2 *)((int)puVar2 + 0x8a),*(undefined2 *)(puVar2 + 0x23));
  }
  FUN_1138_1458(puVar2,uVar3,0);
  if (param_2 != '\0') {
    FUN_1158_200f();
  }
  return;
}



/* ---- FUN_1138_30ec @ 1138:30ec  (66 octets) ---- */

void __cdecl16far FUN_1138_30ec(undefined4 param_1,undefined2 param_2,undefined2 param_3)

{
  undefined2 uStack_a;
  
  uStack_a = 0x30f9;
  FUN_1138_36c5();
  uStack_a = DAT_1160_1858;
  DAT_1160_1858 = &uStack_a;
  FUN_1138_1598((int)param_1,(int)((ulong)param_1 >> 0x10),param_2,param_3);
  DAT_1160_1858 = (undefined2 *)uStack_a;
  uStack_a = (int)param_1;
  FUN_1138_36d4();
  return;
}



/* ---- FUN_1138_3163 @ 1138:3163  (106 octets) ---- */

void __stdcall16far FUN_1138_3163(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined2 uVar2;
  int iVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined4 uVar6;
  int local_4;
  
  uVar4 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = FUN_1138_39fd((int)param_1,uVar4);
  if (-1 < iVar1 + -1) {
    local_4 = 0;
    while( true ) {
      uVar6 = FUN_1138_398f((int)param_1,uVar4,local_4);
      uVar2 = (undefined2)((ulong)uVar6 >> 0x10);
      uVar5 = (undefined2)((ulong)param_2 >> 0x10);
      iVar3 = (int)param_2;
      if ((*(int *)((int)uVar6 + 6) == *(int *)(iVar3 + 0x14)) &&
         (*(int *)((int)uVar6 + 4) == *(int *)(iVar3 + 0x12))) {
        FUN_1148_432a(iVar3,uVar5,uVar6);
      }
      if (local_4 == iVar1 + -1) break;
      local_4 = local_4 + 1;
    }
  }
  return;
}



/* ---- FUN_1138_31cd @ 1138:31cd  (164 octets) ---- */

undefined2 FUN_1138_31cd(undefined2 param_1_00,char param_1,undefined4 param_2,undefined4 param_3)

{
  undefined2 in_AX;
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined2 uVar5;
  undefined local_3;
  int iVar4;
  undefined2 uVar6;
  
  local_3 = 0;
  uVar1 = CONCAT11((char)((uint)in_AX >> 8),param_1);
  iVar3 = (int)param_3;
  uVar5 = (undefined2)((ulong)param_3 >> 0x10);
  iVar4 = (int)param_2;
  uVar6 = (undefined2)((ulong)param_2 >> 0x10);
  if (param_1 == '\x01') {
    uVar1 = *(uint *)(iVar3 + 0x20) & 0xff00;
    if ((int)*(uint *)(iVar3 + 0x20) < *(int *)(iVar4 + 0x20)) {
      uVar1 = uVar1 + 1;
    }
    local_3 = (undefined)uVar1;
  }
  else if (param_1 == '\x02') {
    uVar2 = *(int *)(iVar3 + 0x20) + *(int *)(iVar3 + 0x24);
    uVar1 = uVar2 & 0xff00;
    if (*(int *)(iVar4 + 0x20) + *(int *)(iVar4 + 0x24) < (int)uVar2) {
      uVar1 = uVar1 + 1;
    }
    local_3 = (undefined)uVar1;
  }
  else if (param_1 == '\x03') {
    uVar1 = *(uint *)(iVar3 + 0x1e) & 0xff00;
    if ((int)*(uint *)(iVar3 + 0x1e) < *(int *)(iVar4 + 0x1e)) {
      uVar1 = uVar1 + 1;
    }
    local_3 = (undefined)uVar1;
  }
  else if (param_1 == '\x04') {
    uVar2 = *(int *)(iVar3 + 0x1e) + *(int *)(iVar3 + 0x22);
    uVar1 = uVar2 & 0xff00;
    if (*(int *)(iVar4 + 0x1e) + *(int *)(iVar4 + 0x22) < (int)uVar2) {
      uVar1 = uVar1 + 1;
    }
    local_3 = (undefined)uVar1;
  }
  return CONCAT11((char)(uVar1 >> 8),local_3);
}



/* ---- FUN_1138_327b @ 1138:327b  (364 octets) ---- */

void FUN_1138_327b(int param_1,char param_2,undefined4 *param_3)

{
  undefined2 *puVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  undefined2 unaff_SS;
  
  piVar2 = (int *)*(undefined4 *)(param_1 + 10);
  uVar6 = (undefined2)((ulong)piVar2 >> 0x10);
  piVar3 = (int *)piVar2;
  puVar5 = (undefined4 *)param_3;
  uVar7 = (undefined2)((ulong)param_3 >> 0x10);
  if (param_2 == '\x01') {
    piVar3[1] = piVar3[1] + *(int *)(puVar5 + 9);
  }
  else if (param_2 == '\x02') {
    piVar3[3] = piVar3[3] - *(int *)(puVar5 + 9);
  }
  else if (param_2 == '\x03') {
    *piVar2 = *piVar2 + *(int *)((int)puVar5 + 0x22);
  }
  else if (param_2 == '\x04') {
    piVar3[2] = piVar3[2] - *(int *)((int)puVar5 + 0x22);
  }
  iVar4 = ISRECTEMPTY();
  if (iVar4 == 0) {
    piVar2 = (int *)*(undefined4 *)(param_1 + 10);
    uVar6 = (undefined2)((ulong)piVar2 >> 0x10);
    piVar3 = (int *)piVar2;
    switch(param_2) {
    case '\x01':
      puVar1 = (undefined2 *)((int)*param_3 + 0x4c);
      (*(code *)*puVar1)(0x1138,puVar5,uVar7,*(undefined2 *)(puVar5 + 9),piVar3[2] - *piVar2,
                         piVar3[1] - *(int *)(puVar5 + 9),*piVar2);
      break;
    case '\x02':
      puVar1 = (undefined2 *)((int)*param_3 + 0x4c);
      (*(code *)*puVar1)(0x1138,puVar5,uVar7,*(undefined2 *)(puVar5 + 9),piVar3[2] - *piVar2,
                         piVar3[3],*piVar2);
      break;
    case '\x03':
      puVar1 = (undefined2 *)((int)*param_3 + 0x4c);
      (*(code *)*puVar1)(0x1138,puVar5,uVar7,piVar3[3] - piVar3[1],
                         *(undefined2 *)((int)puVar5 + 0x22),piVar3[1],
                         *piVar2 - *(int *)((int)puVar5 + 0x22));
      break;
    case '\x04':
      puVar1 = (undefined2 *)((int)*param_3 + 0x4c);
      (*(code *)*puVar1)(0x1138,puVar5,uVar7,piVar3[3] - piVar3[1],
                         *(undefined2 *)((int)puVar5 + 0x22),piVar3[1],piVar3[2]);
      break;
    case '\x05':
      FUN_1138_1849(puVar5,uVar7,(int)*(undefined4 *)(param_1 + 10),
                    (int)((ulong)*(undefined4 *)(param_1 + 10) >> 0x10));
    }
  }
  return;
}



/* ---- FUN_1138_33e7 @ 1138:33e7  (387 octets) ---- */

void FUN_1138_33e7(int param_1,char param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined2 unaff_SS;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int local_6;
  int local_4;
  
  FUN_1148_0c75((int)*(undefined4 *)(param_1 + -4),
                (int)((ulong)*(undefined4 *)(param_1 + -4) >> 0x10));
  if ((*(int *)(param_1 + 0xe) != 0 || *(int *)(param_1 + 0x10) != 0) &&
     (((*(char *)((int)*(undefined4 *)(param_1 + 0xe) + 0x29) != '\0' ||
       ((*(byte *)((int)*(undefined4 *)(param_1 + 6) + 0x18) & 0x10) != 0)) &&
      (*(char *)((int)*(undefined4 *)(param_1 + 0xe) + 0x2d) == param_2)))) {
    FUN_1148_0c2b((int)*(undefined4 *)(param_1 + -4),
                  (int)((ulong)*(undefined4 *)(param_1 + -4) >> 0x10),*(undefined2 *)(param_1 + 0xe)
                  ,*(undefined2 *)(param_1 + 0x10));
  }
  iVar2 = FUN_1138_39fd((int)*(undefined4 *)(param_1 + 6),
                        (int)((ulong)*(undefined4 *)(param_1 + 6) >> 0x10));
  if (-1 < iVar2 + -1) {
    local_4 = 0;
    do {
      uVar6 = FUN_1138_398f((int)*(undefined4 *)(param_1 + 6),
                            (int)((ulong)*(undefined4 *)(param_1 + 6) >> 0x10),local_4);
      iVar4 = (int)((ulong)uVar6 >> 0x10);
      iVar3 = (int)uVar6;
      if (((*(char *)(iVar3 + 0x2d) == param_2) &&
          ((*(char *)(iVar3 + 0x29) != '\0' ||
           ((*(byte *)((int)*(undefined4 *)(param_1 + 6) + 0x18) & 0x10) != 0)))) &&
         ((iVar4 != *(int *)(param_1 + 0x10) || (iVar3 != *(int *)(param_1 + 0xe))))) {
        for (local_6 = 0; local_6 < *(int *)((int)*(undefined4 *)(param_1 + -4) + 8);
            local_6 = local_6 + 1) {
          uVar7 = uVar6;
          uVar5 = FUN_1148_0dd0((int)*(undefined4 *)(param_1 + -4),
                                (int)((ulong)*(undefined4 *)(param_1 + -4) >> 0x10),local_6);
          cVar1 = FUN_1138_31cd(param_1,param_2,uVar5,uVar7);
          if (cVar1 != '\0') break;
        }
        FUN_1148_0ea7((int)*(undefined4 *)(param_1 + -4),
                      (int)((ulong)*(undefined4 *)(param_1 + -4) >> 0x10),uVar6,local_6);
      }
      if (local_4 == iVar2 + -1) break;
      local_4 = local_4 + 1;
    } while( true );
  }
  iVar2 = *(int *)((int)*(undefined4 *)(param_1 + -4) + 8) + -1;
  if (-1 < iVar2) {
    local_4 = 0;
    while( true ) {
      uVar6 = FUN_1148_0dd0((int)*(undefined4 *)(param_1 + -4),
                            (int)((ulong)*(undefined4 *)(param_1 + -4) >> 0x10),local_4);
      FUN_1138_327b(param_1,param_2,uVar6);
      if (local_4 == iVar2) break;
      local_4 = local_4 + 1;
    }
  }
  return;
}



/* ---- FUN_1138_356a @ 1138:356a  (82 octets) ---- */

undefined2 FUN_1138_356a(int param_1)

{
  int iVar1;
  undefined2 unaff_SS;
  undefined4 uVar2;
  undefined2 local_6;
  undefined local_3;
  
  local_3 = 1;
  iVar1 = FUN_1138_39fd((int)*(undefined4 *)(param_1 + 6),
                        (int)((ulong)*(undefined4 *)(param_1 + 6) >> 0x10));
  iVar1 = iVar1 + -1;
  local_6 = iVar1;
  if (iVar1 < 0) {
LAB_1138_35b1:
    local_3 = 0;
  }
  else {
    while( true ) {
      uVar2 = FUN_1138_398f((int)*(undefined4 *)(param_1 + 6),
                            (int)((ulong)*(undefined4 *)(param_1 + 6) >> 0x10),local_6);
      iVar1 = (int)uVar2;
      if (*(char *)(iVar1 + 0x2d) != '\0') break;
      if (local_6 == 0) goto LAB_1138_35b1;
      local_6 = local_6 + -1;
    }
  }
  return CONCAT11((char)((uint)iVar1 >> 8),local_3);
}



/* ---- FUN_1138_35c2 @ 1138:35c2  (107 octets) ---- */

void __stdcall16far FUN_1138_35c2(void)

{
  undefined2 uVar1;
  char cVar2;
  
  cVar2 = FUN_1138_356a();
  if (cVar2 == '\0') {
    return;
  }
  FUN_1158_1f50();
  uVar1 = DAT_1160_1858;
  DAT_1160_1858 = &stack0xfff2;
  FUN_1138_33e7(&stack0xfffe,1);
  FUN_1138_33e7(&stack0xfffe,2);
  FUN_1138_33e7(&stack0xfffe,3);
  FUN_1138_33e7(&stack0xfffe,4);
  FUN_1138_33e7(&stack0xfffe,5);
  DAT_1160_1858 = (undefined *)uVar1;
  FUN_1158_1f7f();
  return;
}



/* ---- FUN_1138_3633 @ 1138:3633  (146 octets) ---- */

void __stdcall16far FUN_1138_3633(undefined4 *param_1)

{
  undefined2 *puVar1;
  char cVar2;
  undefined4 *puVar3;
  undefined2 uVar4;
  undefined2 unaff_SS;
  undefined4 *puVar5;
  undefined2 uVar6;
  undefined2 uStack_1a;
  undefined local_12 [8];
  undefined local_a [8];
  
  uVar4 = (undefined2)((ulong)param_1 >> 0x10);
  puVar3 = (undefined4 *)param_1;
  uStack_1a = 0x3641;
  cVar2 = FUN_1138_64fa();
  if (cVar2 != '\0') {
    if (*(int *)((int)puVar3 + 0xaa) == 0) {
      uStack_1a = 0x3663;
      FUN_1138_36c5();
      uStack_1a = DAT_1160_1858;
      puVar1 = (undefined2 *)((int)*param_1 + 0x34);
      DAT_1160_1858 = (undefined4 *)&uStack_1a;
      puVar5 = puVar3;
      uVar6 = uVar4;
      (*(code *)*puVar1)(0x1138,puVar3,uVar4,local_12);
      FUN_1158_161b(8,local_a,unaff_SS,puVar5,uVar6);
      puVar1 = (undefined2 *)((int)*param_1 + 0x6c);
      puVar5 = puVar3;
      (*(code *)*puVar1)(0x1158,puVar3,uVar4,local_a);
      DAT_1160_1858 = puVar5;
      *(byte *)(puVar3 + 10) = *(byte *)(puVar3 + 10) & 0xef;
      FUN_1138_36d4(puVar3,uVar4);
      return;
    }
    *(byte *)(puVar3 + 10) = *(byte *)(puVar3 + 10) | 0x10;
  }
  return;
}



/* ---- FUN_1138_36c5 @ 1138:36c5  (15 octets) ---- */

void __stdcall16far FUN_1138_36c5(undefined4 param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int)param_1 + 0xaa);
  *piVar1 = *piVar1 + 1;
  return;
}



/* ---- FUN_1138_36d4 @ 1138:36d4  (37 octets) ---- */

void __stdcall16far FUN_1138_36d4(undefined4 param_1)

{
  int iVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  *(int *)(iVar1 + 0xaa) = *(int *)(iVar1 + 0xaa) + -1;
  if ((*(int *)(iVar1 + 0xaa) == 0) && ((*(byte *)(iVar1 + 0x28) & 0x10) != 0)) {
    FUN_1138_36f9(iVar1,uVar2);
  }
  return;
}



/* ---- FUN_1138_36f9 @ 1138:36f9  (21 octets) ---- */

void __stdcall16far FUN_1138_36f9(undefined4 param_1)

{
  FUN_1138_3633((int)param_1,(int)((ulong)param_1 >> 0x10),0,0);
  return;
}



/* ---- FUN_1138_370e @ 1138:370e  (68 octets) ---- */

uint __stdcall16far FUN_1138_370e(uint param_1,uint param_2,undefined4 param_3)

{
  uint uVar1;
  
  while (((uint)param_3 != 0 || param_3._2_2_ != 0 &&
         ((param_3._2_2_ != param_2 || ((uint)param_3 != param_1))))) {
    param_3 = CONCAT22(*(undefined2 *)((uint)param_3 + 0x1c),*(undefined2 *)((uint)param_3 + 0x1a));
  }
  uVar1 = ((uint)param_3 | param_3._2_2_) & 0xff00;
  if (((uint)param_3 | param_3._2_2_) != 0) {
    uVar1 = uVar1 + 1;
  }
  return uVar1;
}



/* ---- FUN_1138_3752 @ 1138:3752  (53 octets) ---- */

void __stdcall16far FUN_1138_3752(undefined2 param_1,undefined2 param_2,undefined param_3)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar2 = FUN_1140_17a8(param_1,param_2);
  uVar1 = (uint)uVar2 | (uint)((ulong)uVar2 >> 0x10);
  if (uVar1 != 0) {
    FUN_1140_4081(uVar2,CONCAT11((char)(uVar1 >> 8),param_3),param_1,param_2);
  }
  return;
}



/* ---- FUN_1138_3787 @ 1138:3787  (111 octets) ---- */

void __stdcall16far FUN_1138_3787(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  undefined2 uVar3;
  
  if ((int)param_2 != 0 || param_2._2_2_ != 0) {
    cVar1 = FUN_1158_2255(0x5c1,0x1138,(int)param_2,param_2._2_2_);
    iVar2 = (int)param_1;
    uVar3 = (undefined2)((ulong)param_1 >> 0x10);
    if (cVar1 == '\0') {
      FUN_1138_11ca((int)param_2,param_2._2_2_,iVar2 + 0x92,uVar3);
    }
    else {
      FUN_1138_11ca((int)param_2,param_2._2_2_,iVar2 + 0x96,uVar3);
      FUN_1138_11ca((int)param_2,param_2._2_2_,iVar2 + 0x9a,uVar3);
    }
    *(int *)((int)param_2 + 0x1a) = iVar2;
    *(undefined2 *)((int)param_2 + 0x1c) = uVar3;
  }
  return;
}



/* ---- FUN_1138_37f6 @ 1138:37f6  (99 octets) ---- */

void __stdcall16far FUN_1138_37f6(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  undefined2 uVar3;
  
  cVar1 = FUN_1158_2255(0x5c1,0x1138,(int)param_2,param_2._2_2_);
  iVar2 = (int)param_1;
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  if (cVar1 == '\0') {
    FUN_1138_120a((int)param_2,param_2._2_2_,iVar2 + 0x92,uVar3);
  }
  else {
    FUN_1138_120a((int)param_2,param_2._2_2_,iVar2 + 0x9a,uVar3);
    FUN_1138_120a((int)param_2,param_2._2_2_,iVar2 + 0x96,uVar3);
  }
  *(undefined2 *)((int)param_2 + 0x1a) = 0;
  *(undefined2 *)((int)param_2 + 0x1c) = 0;
  return;
}



/* ---- FUN_1138_3859 @ 1138:3859  (189 octets) ---- */

void __stdcall16far FUN_1138_3859(undefined4 param_1,undefined4 *param_2)

{
  undefined2 *puVar1;
  char cVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  
  uVar4 = (undefined2)((ulong)param_1 >> 0x10);
  uVar3 = (undefined2)param_1;
  FUN_1138_3787(uVar3,uVar4,(undefined4 *)param_2,param_2._2_2_);
  if ((*(byte *)((undefined4 *)param_2 + 10) & 8) == 0) {
    FUN_1138_24bb((undefined4 *)param_2,param_2._2_2_,0,0,0,0xf09);
    FUN_1138_24bb((undefined4 *)param_2,param_2._2_2_,0,0,0,0xf08);
    FUN_1138_24bb((undefined4 *)param_2,param_2._2_2_,0,0,0,0xf23);
    cVar2 = FUN_1158_2255(0x5c1,0x1138,(undefined4 *)param_2,param_2._2_2_);
    if (cVar2 == '\0') {
      cVar2 = FUN_1138_64fa(uVar3,uVar4);
      if (cVar2 != '\0') {
        puVar1 = (undefined2 *)((int)*param_2 + 0x44);
        (*(code *)*puVar1)(0x1138,(undefined4 *)param_2,param_2._2_2_);
      }
    }
    else {
      FUN_1138_24bb((undefined4 *)param_2,param_2._2_2_,0,0,0,0xf11);
      FUN_1138_41a5(uVar3,uVar4);
    }
    FUN_1138_3633(uVar3,uVar4,(undefined4 *)param_2,param_2._2_2_);
  }
  return;
}



/* ---- FUN_1138_3916 @ 1138:3916  (121 octets) ---- */

void __stdcall16far FUN_1138_3916(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  
  cVar1 = FUN_1158_2255(0x5c1,0x1138,(int)param_2,param_2._2_2_);
  uVar2 = (undefined2)param_1;
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  if (cVar1 == '\0') {
    cVar1 = FUN_1138_64fa(uVar2,uVar3);
    if (cVar1 != '\0') {
      FUN_1138_21b3((int)param_2,param_2._2_2_,0,*(undefined *)((int)param_2 + 0x29));
    }
  }
  else {
    FUN_1138_3752((int)param_2,param_2._2_2_,1);
    FUN_1138_3fee((int)param_2,param_2._2_2_);
  }
  FUN_1138_37f6(uVar2,uVar3,(int)param_2,param_2._2_2_);
  FUN_1138_36f9(uVar2,uVar3);
  return;
}



/* ---- FUN_1138_398f @ 1138:398f  (110 octets) ---- */

undefined4 __stdcall16far FUN_1138_398f(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  int local_8;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  if (*(int *)(iVar1 + 0x92) == 0 && *(int *)(iVar1 + 0x94) == 0) {
    local_8 = 0;
  }
  else {
    local_8 = *(int *)((int)*(undefined4 *)(iVar1 + 0x92) + 8);
  }
  if (param_2 < local_8) {
    uVar3 = FUN_1148_0dd0((int)*(undefined4 *)(iVar1 + 0x92),
                          (int)((ulong)*(undefined4 *)(iVar1 + 0x92) >> 0x10),param_2);
  }
  else {
    uVar3 = FUN_1148_0dd0((int)*(undefined4 *)(iVar1 + 0x96),
                          (int)((ulong)*(undefined4 *)(iVar1 + 0x96) >> 0x10),param_2 - local_8);
  }
  return uVar3;
}



/* ---- FUN_1138_39fd @ 1138:39fd  (70 octets) ---- */

int __stdcall16far FUN_1138_39fd(undefined4 param_1)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 local_4;
  
  local_4 = 0;
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  if (*(int *)(iVar1 + 0x92) != 0 || *(int *)(iVar1 + 0x94) != 0) {
    local_4 = *(int *)((int)*(undefined4 *)(iVar1 + 0x92) + 8);
  }
  if (*(int *)(iVar1 + 0x96) != 0 || *(int *)(iVar1 + 0x98) != 0) {
    local_4 = local_4 + *(int *)((int)*(undefined4 *)(iVar1 + 0x96) + 8);
  }
  return local_4;
}



/* ---- FUN_1138_3a43 @ 1138:3a43  (91 octets) ---- */

void __stdcall16far FUN_1138_3a43(undefined4 param_1,undefined4 param_2)

{
  undefined2 *puVar1;
  int iVar2;
  int iVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined2 uVar8;
  int local_4;
  
  uVar4 = (undefined2)((ulong)param_1 >> 0x10);
  iVar2 = FUN_1138_39fd((int)param_1,uVar4);
  if (-1 < iVar2 + -1) {
    local_4 = 0;
    while( true ) {
      uVar5 = (undefined2)((ulong)param_2 >> 0x10);
      iVar3 = (int)param_2;
      iVar7 = iVar3;
      uVar8 = uVar5;
      puVar6 = (undefined4 *)FUN_1138_398f((int)param_1,uVar4,local_4);
      puVar1 = (undefined2 *)((int)*puVar6 + 0x40);
      (*(code *)*puVar1)(0x1138,puVar6,iVar7,uVar8);
      if ((*(int *)(iVar3 + 8) != 0 || *(int *)(iVar3 + 10) != 0) || (local_4 == iVar2 + -1)) break;
      local_4 = local_4 + 1;
    }
  }
  return;
}



/* ---- FUN_1138_3a9e @ 1138:3a9e  (50 octets) ---- */

void __stdcall16far FUN_1138_3a9e(undefined4 param_1,undefined2 param_2)

{
  undefined2 unaff_SS;
  undefined2 local_e;
  undefined2 local_c;
  undefined2 local_a;
  undefined2 local_8;
  undefined2 local_6;
  undefined2 local_4;
  
  local_e = param_2;
  local_c = 0;
  local_a = 0;
  local_8 = 0;
  local_6 = 0;
  local_4 = 0;
  FUN_1138_3a43((int)param_1,(int)((ulong)param_1 >> 0x10),&local_e,unaff_SS);
  return;
}



/* ---- FUN_1138_3ad0 @ 1138:3ad0  (89 octets) ---- */

void __stdcall16far
FUN_1138_3ad0(undefined2 param_1_00,undefined2 param_2_00,int param_1,int param_2,undefined4 param_3
             )

{
  int iVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 unaff_CS;
  
  if (param_1 != 0 || param_2 != 0) {
    uVar3 = (undefined2)((ulong)param_3 >> 0x10);
    iVar2 = (int)param_3;
    iVar1 = GETCLASSINFO(unaff_CS,iVar2 + 0x1a,uVar3,param_1,param_2);
    if (iVar1 == 0) {
      GETCLASSINFO(0x14d0,iVar2 + 0x1a,uVar3,param_1,param_2);
    }
    *(uint *)(iVar2 + 0x1a) = *(uint *)(iVar2 + 0x1a) & 0xbf1f | 3;
  }
  return;
}



/* ---- FUN_1138_3b29 @ 1138:3b29  (351 octets) ---- */

void __stdcall16far FUN_1138_3b29(undefined4 *param_1,undefined2 *param_2)

{
  uint uVar1;
  undefined2 uVar2;
  undefined2 *puVar3;
  undefined4 *puVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  undefined2 unaff_SS;
  undefined *puVar8;
  undefined local_106 [256];
  undefined2 *local_6;
  
  uVar5 = (undefined2)((ulong)param_2 >> 0x10);
  puVar3 = (undefined2 *)param_2;
  uVar7 = 0x1158;
  FUN_1158_1ee5(0,0x74,puVar3,uVar5);
  local_6 = param_2;
  uVar6 = (undefined2)((ulong)param_1 >> 0x10);
  puVar4 = (undefined4 *)param_1;
  uVar2 = *(undefined2 *)((int)puVar4 + 0x32);
  *param_2 = *(undefined2 *)(puVar4 + 0xc);
  puVar3[1] = uVar2;
  puVar3[2] = 0;
  puVar3[3] = 0x4400;
  if ((*(byte *)((int)puVar4 + 0x26) & 1) != 0) {
    uVar1 = puVar3[3];
    puVar3[2] = puVar3[2];
    puVar3[3] = uVar1 | 0x200;
  }
  if (((*(byte *)(puVar4 + 6) & 0x10) == 0) && (*(char *)((int)puVar4 + 0x2a) == '\0')) {
    uVar1 = puVar3[3];
    puVar3[2] = puVar3[2];
    puVar3[3] = uVar1 | 0x800;
  }
  if (*(char *)(puVar4 + 0x29) != '\0') {
    uVar1 = puVar3[3];
    puVar3[2] = puVar3[2];
    puVar3[3] = uVar1 | 1;
  }
  puVar3[6] = *(undefined2 *)((int)puVar4 + 0x1e);
  puVar3[7] = *(undefined2 *)(puVar4 + 8);
  puVar3[8] = *(undefined2 *)((int)puVar4 + 0x22);
  puVar3[9] = *(undefined2 *)(puVar4 + 9);
  puVar3[10] = 0;
  if (*(int *)((int)puVar4 + 0x1a) != 0 || *(int *)(puVar4 + 7) != 0) {
    uVar7 = 0x1138;
    uVar2 = FUN_1138_62b9((int)*(undefined4 *)((int)puVar4 + 0x1a),
                          (int)((ulong)*(undefined4 *)((int)puVar4 + 0x1a) >> 0x10));
    ((undefined2 *)local_6)[10] = uVar2;
  }
  uVar2 = (undefined2)((ulong)local_6 >> 0x10);
  puVar3 = (undefined2 *)local_6;
  puVar3[0xd] = 0xb;
  puVar3[0xe] = 0x428;
  puVar3[0xf] = 0x14d0;
  uVar2 = LOADCURSOR(uVar7,0x7f00,0);
  uVar5 = (undefined2)((ulong)local_6 >> 0x10);
  puVar3 = (undefined2 *)local_6;
  puVar3[0x14] = uVar2;
  puVar3[0x15] = 0;
  puVar3 = puVar3 + 0x1a;
  puVar8 = local_106;
  FUN_1158_20ed((int)*param_1,(int)((ulong)*param_1 >> 0x10));
  FUN_1150_0d4c(puVar8,unaff_SS,puVar3,uVar5);
  return;
}



/* ---- FUN_1138_3c88 @ 1138:3c88  (399 octets) ---- */

void __stdcall16far FUN_1138_3c88(undefined4 *param_1)

{
  undefined2 *puVar1;
  undefined extraout_AH;
  int iVar2;
  undefined extraout_AH_00;
  undefined extraout_AH_01;
  undefined4 *puVar3;
  undefined2 uVar4;
  undefined2 unaff_CS;
  undefined2 uVar5;
  undefined2 unaff_SS;
  undefined4 uVar6;
  undefined *puVar7;
  undefined2 uVar8;
  undefined2 uVar9;
  undefined *puVar10;
  undefined4 *puVar11;
  undefined local_298 [256];
  undefined *local_198;
  undefined local_190 [256];
  undefined local_90 [26];
  undefined local_76 [6];
  uint local_70;
  int local_62;
  undefined local_5c [2];
  undefined2 local_5a;
  undefined2 local_58;
  undefined2 local_52;
  undefined *local_46;
  undefined local_42 [64];
  
  puVar7 = local_76;
  uVar4 = (undefined2)((ulong)param_1 >> 0x10);
  puVar3 = (undefined4 *)param_1;
  puVar1 = (undefined2 *)((int)*param_1 + 0x58);
  puVar11 = puVar3;
  uVar5 = uVar4;
  (*(code *)*puVar1)();
  if ((local_62 == 0) && ((local_70 & 0x4000) != 0)) {
    puVar10 = local_298;
    uVar9 = 0xf02a;
    uVar8 = unaff_SS;
    FUN_1148_512a(puVar3,uVar4);
    local_198 = local_190;
    FUN_1150_0950(0,&local_198,unaff_SS,uVar9);
    uVar6 = FUN_1150_28e6(0x52,0x1138,CONCAT11(extraout_AH,1),puVar10,uVar8);
    unaff_CS = 0x1158;
    FUN_1158_1399(0x1150,uVar6,puVar11,uVar5,puVar7);
  }
  *(undefined2 *)((int)puVar3 + 0x8e) = local_5a;
  *(undefined2 *)(puVar3 + 0x24) = local_58;
  uVar5 = 0x14d0;
  iVar2 = GETCLASSINFO(unaff_CS,local_90,unaff_SS,local_42,unaff_SS);
  if (iVar2 == 0) {
    local_5a = 0xa8d;
    local_58 = 0x1138;
    local_52 = DAT_1160_188c;
    local_46 = local_42;
    uVar5 = 0x14d0;
    iVar2 = REGISTERCLASS(0x14d0,local_5c);
    if (iVar2 == 0) {
      puVar7 = local_190;
      uVar5 = unaff_SS;
      FUN_1150_092b(0xf027);
      uVar6 = FUN_1150_28e6(0x22,0x1138,CONCAT11(extraout_AH_00,1),puVar7,uVar5);
      uVar5 = 0x1158;
      FUN_1158_1399(0x1150,uVar6);
    }
  }
  puVar1 = (undefined2 *)((int)*param_1 + 0x5c);
  DAT_1160_13e4 = puVar3;
  DAT_1160_13e6 = uVar4;
  (*(code *)*puVar1)(uVar5,puVar3,uVar4,local_76);
  if (*(int *)((int)puVar3 + 0xa2) == 0) {
    puVar7 = local_190;
    FUN_1150_092b(0xf028);
    uVar6 = FUN_1150_28e6(0x22,0x1138,CONCAT11(extraout_AH_01,1),puVar7,unaff_SS);
    FUN_1158_1399(0x1150,uVar6);
  }
  FUN_1150_0f23(*(undefined2 *)(puVar3 + 0xc),*(undefined2 *)((int)puVar3 + 0x32));
  *(undefined2 *)(puVar3 + 0xc) = 0;
  *(undefined2 *)((int)puVar3 + 0x32) = 0;
  FUN_1138_6516(puVar3,uVar4);
  uVar8 = 0x30;
  uVar5 = FUN_1128_1016((int)puVar3[0xd],(int)((ulong)puVar3[0xd] >> 0x10));
  FUN_1138_24bb(puVar3,uVar4,1,0,uVar5,uVar8);
  return;
}



/* ---- FUN_1138_3e17 @ 1138:3e17  (96 octets) ---- */

void __stdcall16far FUN_1138_3e17(undefined4 param_1,undefined2 *param_2)

{
  undefined2 *puVar1;
  undefined2 uVar2;
  undefined2 unaff_CS;
  
  uVar2 = (undefined2)((ulong)param_2 >> 0x10);
  puVar1 = (undefined2 *)param_2;
  uVar2 = CREATEWINDOWEX(unaff_CS,puVar1[0xb],puVar1[0xc],DAT_1160_188c,0,puVar1[10],puVar1[9],
                         puVar1[8],puVar1[7],puVar1[6],puVar1[2],puVar1[3],*param_2,puVar1[1],
                         puVar1 + 0x1a,uVar2,puVar1[4]);
  *(undefined2 *)((int)param_1 + 0xa2) = uVar2;
  return;
}



/* ---- FUN_1138_3e77 @ 1138:3e77  (118 octets) ---- */

void __stdcall16far FUN_1138_3e77(undefined4 *param_1)

{
  undefined2 *puVar1;
  int iVar2;
  undefined2 uVar3;
  undefined4 *puVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  undefined4 uVar7;
  undefined2 uVar8;
  undefined2 uVar9;
  
  uVar5 = (undefined2)((ulong)param_1 >> 0x10);
  puVar4 = (undefined4 *)param_1;
  iVar2 = FUN_1138_1ce2(puVar4,uVar5);
  if (iVar2 < 1) {
    uVar6 = 0x1150;
    uVar7 = FUN_1150_0ed6(0x14fa,0x1160);
    *(int *)(puVar4 + 0xc) = (int)uVar7;
    *(undefined2 *)((int)puVar4 + 0x32) = (int)((ulong)uVar7 >> 0x10);
  }
  else {
    uVar7 = FUN_1150_0e8f(iVar2 + 1);
    *(int *)(puVar4 + 0xc) = (int)uVar7;
    *(undefined2 *)((int)puVar4 + 0x32) = (int)((ulong)uVar7 >> 0x10);
    uVar9 = *(undefined2 *)((int)puVar4 + 0x32);
    uVar8 = *(undefined2 *)(puVar4 + 0xc);
    uVar3 = FUN_1150_0ebc(*(undefined2 *)(puVar4 + 0xc),*(undefined2 *)((int)puVar4 + 0x32));
    uVar6 = 0x1138;
    FUN_1138_1d02(puVar4,uVar5,uVar3,uVar8,uVar9);
  }
  FUN_1138_1267();
  puVar1 = (undefined2 *)((int)*param_1 + 100);
  (*(code *)*puVar1)(uVar6,puVar4,uVar5);
  return;
}



/* ---- FUN_1138_3eed @ 1138:3eed  (20 octets) ---- */

void __stdcall16far FUN_1138_3eed(void)

{
  DESTROYWINDOW();
  return;
}



/* ---- FUN_1138_3f01 @ 1138:3f01  (113 octets) ---- */

int __stdcall16far FUN_1138_3f01(undefined4 param_1,undefined2 param_2,undefined2 param_3)

{
  int iVar1;
  int iVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  undefined2 local_6;
  undefined2 local_4;
  
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  iVar2 = (int)param_1;
  iVar1 = *(int *)((int)*(undefined4 *)(iVar2 + 0x96) + 8) + -1;
  local_6 = FUN_1148_0e58((int)*(undefined4 *)(iVar2 + 0x96),
                          (int)((ulong)*(undefined4 *)(iVar2 + 0x96) >> 0x10),param_2,param_3);
  local_6 = local_6 + 1;
  if (iVar1 < local_6) {
LAB_1138_3f66:
    local_4 = 0;
  }
  else {
    while( true ) {
      uVar4 = FUN_1148_0dd0((int)*(undefined4 *)(iVar2 + 0x96),
                            (int)((ulong)*(undefined4 *)(iVar2 + 0x96) >> 0x10),local_6);
      local_4 = *(int *)((int)uVar4 + 0xa2);
      if (local_4 != 0) break;
      if (local_6 == iVar1) goto LAB_1138_3f66;
      local_6 = local_6 + 1;
    }
  }
  return local_4;
}



/* ---- FUN_1138_3f72 @ 1138:3f72  (124 octets) ---- */

void __stdcall16far FUN_1138_3f72(undefined4 *param_1)

{
  undefined2 *puVar1;
  undefined4 *puVar2;
  undefined2 uVar3;
  undefined2 unaff_CS;
  
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  puVar2 = (undefined4 *)param_1;
  if (*(int *)((int)puVar2 + 0xa2) == 0) {
    puVar1 = (undefined2 *)((int)*param_1 + 0x60);
    (*(code *)*puVar1)();
    SETPROP(unaff_CS,puVar2,DAT_1160_2c0e,0);
    SETPROP(0x14d0,uVar3,DAT_1160_2c10,0);
    if (*(int *)((int)puVar2 + 0x1a) != 0 || *(int *)(puVar2 + 7) != 0) {
      uVar3 = FUN_1138_3f01((int)*(undefined4 *)((int)puVar2 + 0x1a),
                            (int)((ulong)*(undefined4 *)((int)puVar2 + 0x1a) >> 0x10),puVar2,uVar3);
      SETWINDOWPOS(0x1138,0x13,0,0,0,0,uVar3);
    }
  }
  return;
}



/* ---- FUN_1138_3fee @ 1138:3fee  (108 octets) ---- */

void __stdcall16far FUN_1138_3fee(undefined4 *param_1)

{
  undefined2 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined2 uVar4;
  undefined2 unaff_CS;
  undefined4 uVar5;
  int local_4;
  
  uVar4 = (undefined2)((ulong)param_1 >> 0x10);
  puVar3 = (undefined4 *)param_1;
  if (*(int *)((int)puVar3 + 0xa2) != 0) {
    if ((*(int *)((int)puVar3 + 0x96) != 0 || *(int *)(puVar3 + 0x26) != 0) &&
       (iVar2 = *(int *)((int)*(undefined4 *)((int)puVar3 + 0x96) + 8) + -1, -1 < iVar2)) {
      local_4 = 0;
      while( true ) {
        uVar5 = FUN_1148_0dd0((int)*(undefined4 *)((int)puVar3 + 0x96),
                              (int)((ulong)*(undefined4 *)((int)puVar3 + 0x96) >> 0x10),local_4);
        unaff_CS = 0x1138;
        FUN_1138_3fee(uVar5);
        if (local_4 == iVar2) break;
        local_4 = local_4 + 1;
      }
    }
    puVar1 = (undefined2 *)((int)*param_1 + 0x68);
    (*(code *)*puVar1)(unaff_CS,puVar3,uVar4);
  }
  return;
}



/* ---- FUN_1138_405a @ 1138:405a  (76 octets) ---- */

void __stdcall16far FUN_1138_405a(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  undefined2 uVar3;
  
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  iVar2 = (int)param_1;
  if (*(int *)(iVar2 + 0xa2) != 0) {
    cVar1 = FUN_1138_6258(iVar2,uVar3);
    FUN_1138_3fee(iVar2,uVar3);
    FUN_1138_41a5(iVar2,uVar3);
    if (cVar1 != '\0') {
      if (*(int *)(iVar2 + 0xa2) != 0) {
        SETFOCUS(0x1138,*(undefined2 *)(iVar2 + 0xa2));
      }
    }
  }
  return;
}



/* ---- FUN_1138_40b0 @ 1138:40b0  (218 octets) ---- */

void __stdcall16far FUN_1138_40b0(undefined4 *param_1)

{
  undefined2 *puVar1;
  char cVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined2 uVar5;
  undefined2 unaff_CS;
  undefined2 uStack_10;
  int local_6;
  
  uVar5 = (undefined2)((ulong)param_1 >> 0x10);
  puVar4 = (undefined4 *)param_1;
  if (((*(char *)((int)puVar4 + 0x29) == '\0') && ((*(byte *)(puVar4 + 6) & 0x10) == 0)) ||
     ((*(byte *)(puVar4 + 10) & 8) != 0)) {
    cVar2 = '\0';
  }
  else {
    cVar2 = '\x01';
  }
  if (cVar2 != '\0') {
    if (*(int *)((int)puVar4 + 0xa2) == 0) {
      puVar1 = (undefined2 *)((int)*param_1 + 0x54);
      uStack_10 = 0x40f2;
      (*(code *)*puVar1)();
    }
    if ((*(int *)((int)puVar4 + 0x96) != 0 || *(int *)(puVar4 + 0x26) != 0) &&
       (iVar3 = *(int *)((int)*(undefined4 *)((int)puVar4 + 0x96) + 8) + -1, -1 < iVar3)) {
      local_6 = 0;
      while( true ) {
        uStack_10 = unaff_CS;
        FUN_1148_0dd0();
        unaff_CS = 0x1138;
        uStack_10 = 0x413a;
        FUN_1138_40b0();
        if (local_6 == iVar3) break;
        local_6 = local_6 + 1;
      }
    }
  }
  if ((*(int *)((int)puVar4 + 0xa2) != 0) && (*(char *)((int)puVar4 + 0xa7) != cVar2)) {
    *(char *)((int)puVar4 + 0xa7) = cVar2;
    uStack_10 = DAT_1160_1858;
    DAT_1160_1858 = &uStack_10;
    FUN_1138_24bb(puVar4,uVar5,0,0,0,0xf19);
    DAT_1160_1858 = (undefined2 *)uStack_10;
  }
  return;
}



/* ---- FUN_1138_41a5 @ 1138:41a5  (103 octets) ---- */

void __stdcall16far FUN_1138_41a5(undefined4 param_1)

{
  int *piVar1;
  long lVar2;
  int local_a;
  undefined2 local_8;
  
  lVar2 = FUN_1140_17a8((int)param_1,param_1._2_2_);
  if (lVar2 != 0) {
    local_a = (int)param_1;
    local_8 = param_1._2_2_;
    do {
      if (lVar2 == CONCAT22(local_8,local_a)) {
        FUN_1138_40b0((int)param_1,param_1._2_2_);
        return;
      }
      piVar1 = (int *)(local_a + 0x1a);
      local_8 = *(undefined2 *)(local_a + 0x1c);
      local_a = *piVar1;
    } while (*(char *)(*piVar1 + 0xa7) != '\0');
  }
  return;
}



/* ---- FUN_1138_42a8 @ 1138:42a8  (223 octets) ---- */

undefined4 * __stdcall16far FUN_1138_42a8(undefined4 param_1,char param_2,int param_3,int param_4)

{
  undefined2 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  undefined2 unaff_SS;
  undefined4 uVar7;
  long lVar8;
  undefined local_18 [8];
  undefined4 *local_10;
  undefined4 local_c;
  int local_8;
  undefined4 *local_6;
  
  uVar5 = (undefined2)((ulong)param_1 >> 0x10);
  iVar3 = (int)param_1;
  if ((*(int *)(iVar3 + 0x92) != 0 || *(int *)(iVar3 + 0x94) != 0) &&
     (local_8 = *(int *)((int)*(undefined4 *)(iVar3 + 0x92) + 8) + -1, -1 < local_8)) {
    while( true ) {
      local_10 = (undefined4 *)
                 FUN_1148_0dd0((int)*(undefined4 *)(iVar3 + 0x92),
                               (int)((ulong)*(undefined4 *)(iVar3 + 0x92) >> 0x10),local_8);
      uVar6 = (undefined2)((ulong)local_10 >> 0x10);
      local_6 = local_10;
      uVar7 = FUN_1148_066e(param_4 - *(int *)((undefined4 *)local_10 + 8),
                            param_3 - *(int *)((int)(undefined4 *)local_10 + 0x1e));
      puVar1 = (undefined2 *)((int)*local_10 + 0x34);
      uVar6 = unaff_SS;
      local_c = uVar7;
      (*(code *)*puVar1)(0x1148,(undefined4 *)local_10,(int)((ulong)local_10 >> 0x10),local_18);
      iVar2 = PTINRECT(0x1148,local_c,uVar6);
      if (iVar2 != 0) {
        uVar6 = (undefined2)((ulong)local_10 >> 0x10);
        puVar4 = (undefined4 *)local_10;
        if ((*(byte *)(puVar4 + 6) & 0x10) != 0) {
          return local_6;
        }
        if ((*(char *)((int)puVar4 + 0x29) != '\0') &&
           ((*(char *)((int)puVar4 + 0x2a) != '\0' || (param_2 != '\0')))) {
          lVar8 = FUN_1138_24bb(puVar4,uVar6,local_c,0,0xf0a);
          if (lVar8 != 0) {
            return local_6;
          }
        }
      }
      if (local_8 == 0) break;
      local_8 = local_8 + -1;
    }
  }
  return (undefined4 *)0x0;
}



/* ---- FUN_1138_4387 @ 1138:4387  (191 octets) ---- */

bool __stdcall16far FUN_1138_4387(undefined4 param_1,undefined2 *param_2)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  undefined2 *puVar4;
  int iVar5;
  long lVar6;
  int iVar7;
  int local_8;
  undefined2 local_6;
  
  iVar5 = (int)((ulong)param_1 >> 0x10);
  iVar3 = (int)param_1;
  uVar1 = FUN_1138_62b9(iVar3,iVar5);
  iVar7 = 0x1138;
  iVar2 = GETCAPTURE(0x1138,uVar1);
  puVar4 = (undefined2 *)param_2;
  uVar1 = (undefined2)((ulong)param_2 >> 0x10);
  if (iVar2 == iVar7) {
    lVar6 = 0;
    if ((((int)DAT_1160_14f4 != 0 || DAT_1160_14f4._2_2_ != 0) &&
        (lVar6 = 0, *(int *)((int)DAT_1160_14f4 + 0x1c) == iVar5)) &&
       (lVar6 = 0, *(int *)((int)DAT_1160_14f4 + 0x1a) == iVar3)) {
      lVar6 = DAT_1160_14f4;
    }
  }
  else {
    lVar6 = FUN_1138_42a8(iVar3,iVar5,0,puVar4[2],puVar4[3]);
  }
  local_6 = (undefined2)((ulong)lVar6 >> 0x10);
  local_8 = (int)lVar6;
  if (lVar6 != 0) {
    FUN_1138_24bb(lVar6,puVar4[2] - *(int *)(local_8 + 0x1e),puVar4[3] - *(int *)(local_8 + 0x20),
                  puVar4[1],*param_2);
  }
  return lVar6 != 0;
}



/* ---- FUN_1138_4446 @ 1138:4446  (397 octets) ---- */

void __stdcall16far FUN_1138_4446(undefined4 param_1,uint *param_3)

{
  uint uVar1;
  undefined2 *puVar2;
  undefined4 *puVar3;
  char cVar4;
  byte bVar5;
  undefined2 uVar6;
  int iVar7;
  uint *puVar8;
  undefined2 uVar9;
  undefined4 uVar10;
  long lVar11;
  int iVar12;
  
  uVar1 = *param_3;
  puVar8 = (uint *)param_3;
  uVar9 = (undefined2)((ulong)param_3 >> 0x10);
  if (uVar1 == 7) {
    iVar7 = (int)param_1;
    iVar12 = param_1._2_2_;
    uVar10 = FUN_1140_17a8((int)param_1,param_1._2_2_);
    cVar4 = FUN_1140_4122(uVar10,iVar7,iVar12);
    if (cVar4 == '\0') {
      return;
    }
  }
  else {
    if (uVar1 == 8) {
      bVar5 = *(byte *)((int)param_1 + 0x28) & 0x20;
    }
    else {
      if (uVar1 == 0x84) {
        FUN_1138_2515((int)param_1,param_1._2_2_,puVar8,uVar9);
        if (puVar8[5] != 0xffff) {
          return;
        }
        if (puVar8[4] != 0xffff) {
          return;
        }
        uVar10 = FUN_1138_1a06((int)param_1,param_1._2_2_,puVar8[2],puVar8[3]);
        lVar11 = FUN_1138_42a8((int)param_1,param_1._2_2_,0,uVar10);
        if (lVar11 == 0) {
          return;
        }
        puVar8[4] = 1;
        puVar8[5] = 0;
        return;
      }
      if ((uVar1 < 0x200) || (0x209 < uVar1)) {
        if ((uVar1 < 0x100) || (0x108 < uVar1)) {
          if (uVar1 == 0x1f) {
            uVar6 = FUN_1138_62b9((int)param_1,param_1._2_2_);
            iVar12 = 0x1138;
            iVar7 = GETCAPTURE(0x1138,uVar6);
            if (iVar7 == iVar12) {
              if ((((int)DAT_1160_14f4 != 0 || DAT_1160_14f4._2_2_ != 0) &&
                  (*(int *)((int)DAT_1160_14f4 + 0x1c) == param_1._2_2_)) &&
                 (*(int *)((int)DAT_1160_14f4 + 0x1a) == (int)param_1)) {
                FUN_1138_24bb((int)DAT_1160_14f4,DAT_1160_14f4._2_2_,0,0,0,0x1f);
              }
            }
          }
          else if (((DAT_1160_13ec != 0xffff) && (*param_3 == DAT_1160_13ec)) &&
                  ((*(byte *)((int)param_1 + 0x18) & 1) == 0)) {
            uVar10 = FUN_1140_17a8((int)param_1,param_1._2_2_);
            uVar6 = (undefined2)((ulong)uVar10 >> 0x10);
            iVar7 = (int)uVar10;
            if (*(int *)(iVar7 + 0x106) != 0 || *(int *)(iVar7 + 0x108) != 0) {
              puVar3 = (undefined4 *)*(undefined4 *)(iVar7 + 0x106);
              puVar2 = (undefined2 *)((int)*puVar3 + 4);
              (*(code *)*puVar2)(0x1140,(undefined4 *)puVar3,(int)((ulong)puVar3 >> 0x10));
            }
          }
          goto LAB_1138_45c3;
        }
        bVar5 = FUN_1138_2496((int)param_1,param_1._2_2_);
      }
      else {
        bVar5 = FUN_1138_4387((int)param_1,param_1._2_2_,puVar8,uVar9);
      }
    }
    if (bVar5 != 0) {
      return;
    }
  }
LAB_1138_45c3:
  FUN_1138_2515((int)param_1,param_1._2_2_,puVar8,uVar9);
  return;
}



/* ---- FUN_1138_45d6 @ 1138:45d6  (36 octets) ---- */

void __cdecl16near FUN_1138_45d6(void)

{
  undefined2 unaff_SS;
  int local_84;
  undefined local_82 [128];
  
  for (local_84 = 0; local_82[local_84] = (undefined)local_84, local_84 != 0x7f;
      local_84 = local_84 + 1) {
  }
  return;
}



/* ---- FUN_1138_45fa @ 1138:45fa  (113 octets) ---- */

void __stdcall16far FUN_1138_45fa(undefined4 param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined2 unaff_CS;
  undefined4 uVar5;
  
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  uVar4 = (undefined2)((ulong)param_2 >> 0x10);
  piVar2 = (int *)param_2;
  if (*(int *)(iVar1 + 0xa2) == 0) {
    FUN_1138_2610(iVar1,uVar3,piVar2,uVar4);
  }
  else {
    if ((*param_2 == 0xf) && (piVar2[1] != 0)) {
      FUN_1138_45d6();
    }
    uVar5 = CALLWINDOWPROC(unaff_CS,piVar2[2],piVar2[3],piVar2[1],*param_2,
                           *(undefined2 *)(iVar1 + 0xa2),*(undefined2 *)(iVar1 + 0x8e));
    piVar2[4] = (int)uVar5;
    piVar2[5] = (int)((ulong)uVar5 >> 0x10);
  }
  return;
}



/* ---- FUN_1138_466b @ 1138:466b  (90 octets) ---- */

undefined2 FUN_1138_466b(int *param_1,undefined2 param_2)

{
  uint uVar1;
  int *piVar2;
  undefined2 uVar3;
  bool bVar4;
  undefined4 uVar5;
  
  uVar5 = FUN_1138_0b4f(param_2);
  uVar1 = (uint)uVar5 | (uint)((ulong)uVar5 >> 0x10);
  bVar4 = uVar1 != 0;
  if (bVar4) {
    uVar3 = (undefined2)((ulong)param_1 >> 0x10);
    piVar2 = (int *)param_1;
    uVar5 = FUN_1138_24bb(uVar5,piVar2[2],piVar2[3],piVar2[1],*param_1 + 0x2000);
    uVar1 = (uint)uVar5;
    piVar2[4] = uVar1;
    piVar2[5] = (int)((ulong)uVar5 >> 0x10);
  }
  return CONCAT11((char)(uVar1 >> 8),bVar4);
}



/* ---- FUN_1138_46cb @ 1138:46cb  (333 octets) ---- */

void __cdecl16far FUN_1138_46cb(undefined4 *param_1,undefined4 param_2)

{
  undefined2 *puVar1;
  int iVar2;
  int iVar3;
  undefined2 uVar4;
  undefined4 *puVar5;
  undefined2 uVar6;
  int iVar7;
  undefined2 unaff_CS;
  undefined2 uVar8;
  undefined2 unaff_SS;
  undefined4 uVar9;
  undefined2 uStack_38;
  undefined local_2a [32];
  int local_a;
  undefined2 local_8;
  int local_6;
  int local_4;
  
  uVar6 = (undefined2)((ulong)param_2 >> 0x10);
  local_a = *(int *)((int)param_2 + 2);
  puVar5 = (undefined4 *)param_1;
  iVar7 = (int)((ulong)param_1 >> 0x10);
  if (local_a == 0) {
    uStack_38 = 0x46e9;
    FUN_1138_62b9();
    uStack_38 = 0x1138;
    unaff_CS = 0x14d0;
    local_a = BEGINPAINT();
  }
  uStack_38 = DAT_1160_1858;
  if (*(int *)((int)puVar5 + 0x92) == 0 && *(int *)(puVar5 + 0x25) == 0) {
    puVar1 = (undefined2 *)((int)*param_1 + 0x70);
    DAT_1160_1858 = &uStack_38;
    iVar2 = iVar7;
    (*(code *)*puVar1)(unaff_CS,puVar5,iVar7,local_a);
  }
  else {
    uVar8 = 0x14d0;
    DAT_1160_1858 = &uStack_38;
    local_8 = SAVEDC(unaff_CS,local_a);
    local_6 = 2;
    iVar2 = *(int *)((int)*(undefined4 *)((int)puVar5 + 0x92) + 8) + -1;
    if (-1 < iVar2) {
      local_4 = 0;
      do {
        uVar8 = 0x1148;
        uVar9 = FUN_1148_0dd0((int)*(undefined4 *)((int)puVar5 + 0x92),
                              (int)((ulong)*(undefined4 *)((int)puVar5 + 0x92) >> 0x10),local_4);
        uVar4 = (undefined2)((ulong)uVar9 >> 0x10);
        iVar3 = (int)uVar9;
        if (((*(char *)(iVar3 + 0x29) != '\0') || ((*(byte *)(iVar3 + 0x18) & 0x10) != 0)) &&
           ((*(byte *)(iVar3 + 0x26) & 0x40) != 0)) {
          uVar8 = 0x14d0;
          local_6 = EXCLUDECLIPRECT(0x1148,*(int *)(iVar3 + 0x20) + *(int *)(iVar3 + 0x24),
                                    *(int *)(iVar3 + 0x1e) + *(int *)(iVar3 + 0x22),
                                    *(undefined2 *)(iVar3 + 0x20),*(undefined2 *)(iVar3 + 0x1e));
          if (local_6 == 1) break;
        }
        if (local_4 == iVar2) break;
        local_4 = local_4 + 1;
      } while( true );
    }
    if (local_6 != 1) {
      puVar1 = (undefined2 *)((int)*param_1 + 0x70);
      (*(code *)*puVar1)(uVar8,puVar5,iVar7,local_a);
    }
    iVar2 = local_a;
    RESTOREDC(uVar8,local_8);
  }
  FUN_1138_4850(puVar5,iVar7,0,0,local_a);
  DAT_1160_1858 = (undefined2 *)iVar2;
  uStack_38 = 0x4818;
  if (*(int *)((int)param_2 + 2) == 0) {
    FUN_1138_62b9(puVar5,iVar7);
    ENDPAINT(0x1138,local_2a,unaff_SS);
  }
  return;
}



/* ---- FUN_1138_481c @ 1138:481c  (52 octets) ---- */

void __stdcall16far FUN_1138_481c(undefined4 *param_1)

{
  undefined2 *puVar1;
  
  puVar1 = (undefined2 *)((int)*param_1 + -0x10);
  (*(code *)*puVar1)();
  return;
}



/* ---- FUN_1138_4850 @ 1138:4850  (572 octets) ---- */

void __stdcall16far FUN_1138_4850(undefined4 param_1,int param_2,int param_3,undefined2 param_4)

{
  int iVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 unaff_SS;
  undefined auVar4 [4];
  undefined4 uVar5;
  undefined *puVar6;
  undefined2 uVar7;
  undefined2 uVar8;
  undefined2 uVar9;
  undefined local_18 [2];
  undefined local_16 [6];
  undefined local_10 [4];
  int local_c;
  undefined2 local_a;
  undefined2 local_8;
  int local_6;
  int local_4;
  
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  iVar2 = (int)param_1;
  if (*(int *)(iVar2 + 0x92) != 0 || *(int *)(iVar2 + 0x94) != 0) {
    local_4 = 0;
    if ((param_2 != 0 || param_3 != 0) &&
       (local_4 = FUN_1148_0e58((int)*(undefined4 *)(iVar2 + 0x92),
                                (int)((ulong)*(undefined4 *)(iVar2 + 0x92) >> 0x10),param_2,param_3)
       , local_4 < 0)) {
      local_4 = 0;
    }
    uVar5 = CONCAT22(local_c,local_10._2_2_);
    local_6 = *(int *)((int)*(undefined4 *)(iVar2 + 0x92) + 8);
    for (; local_10._2_2_ = (undefined2)uVar5, local_4 < local_6; local_4 = local_4 + 1) {
      unique0x100001fc = uVar5;
      uVar5 = FUN_1148_0dd0((int)*(undefined4 *)(iVar2 + 0x92),
                            (int)((ulong)*(undefined4 *)(iVar2 + 0x92) >> 0x10),local_4);
      uVar7 = (undefined2)((ulong)uVar5 >> 0x10);
      iVar1 = (int)uVar5;
      if ((*(char *)(iVar1 + 0x29) != '\0') || ((*(byte *)(iVar1 + 0x18) & 0x10) != 0)) {
        puVar6 = local_16;
        uVar8 = unaff_SS;
        uVar9 = param_4;
        unique0x100001e8 = uVar5;
        FUN_1148_0688(*(int *)(iVar1 + 0x20) + *(int *)(iVar1 + 0x24),
                      *(int *)(iVar1 + 0x1e) + *(int *)(iVar1 + 0x22),*(undefined2 *)(iVar1 + 0x20),
                      *(undefined2 *)(iVar1 + 0x1e));
        iVar1 = RECTVISIBLE(0x1148,puVar6,uVar8);
        uVar5 = stack0xfff2;
        if (iVar1 != 0) {
          local_8 = SAVEDC(0x14d0,param_4,uVar9);
          SETVIEWPORTORGEX(0x14d0,0,0,*(undefined2 *)(local_10._2_2_ + 0x20),
                           *(undefined2 *)(local_10._2_2_ + 0x1e));
          INTERSECTCLIPRECT(0x14d0,*(undefined2 *)(local_10._2_2_ + 0x24),
                            *(undefined2 *)(local_10._2_2_ + 0x22),0,0);
          FUN_1138_24bb(stack0xfff2,0,0,param_4,0xf);
          RESTOREDC(0x1138,local_8);
          uVar5 = stack0xfff2;
        }
      }
    }
  }
  auVar4 = (undefined  [4])CONCAT22(local_10._2_2_,local_10._0_2_);
  if ((*(int *)(iVar2 + 0x96) != 0 || *(int *)(iVar2 + 0x98) != 0) &&
     (local_c = *(int *)((int)*(undefined4 *)(iVar2 + 0x96) + 8) + -1, -1 < local_c)) {
    local_4 = 0;
    while( true ) {
      local_10 = auVar4;
      auVar4 = (undefined  [4])
               FUN_1148_0dd0((int)*(undefined4 *)(iVar2 + 0x96),
                             (int)((ulong)*(undefined4 *)(iVar2 + 0x96) >> 0x10),local_4);
      uVar7 = (undefined2)((ulong)auVar4 >> 0x10);
      iVar1 = SUB42(auVar4,0);
      if (((*(char *)(iVar1 + 0xa5) != '\0') && ((*(byte *)(iVar1 + 0x26) & 0x10) != 0)) &&
         ((*(char *)(iVar1 + 0x29) != '\0' || ((*(byte *)(iVar1 + 0x18) & 0x10) != 0)))) {
        local_10 = auVar4;
        uVar5 = FUN_1128_0ca5(0xffef,0xffff);
        uVar9 = (undefined2)((ulong)uVar5 >> 0x10);
        local_a = CREATESOLIDBRUSH(0x1128,(int)uVar5);
        puVar6 = local_18;
        uVar7 = unaff_SS;
        uVar8 = param_4;
        FUN_1148_0688(*(int *)(local_10._0_2_ + 0x20) + *(int *)(local_10._0_2_ + 0x24),
                      *(int *)(local_10._0_2_ + 0x1e) + *(int *)(local_10._0_2_ + 0x22),
                      *(int *)(local_10._0_2_ + 0x20) + -1,*(int *)(local_10._0_2_ + 0x1e) + -1);
        FRAMERECT(0x1148,local_a,puVar6,uVar7);
        DELETEOBJECT(0x14d0,local_a,uVar8,uVar9);
        uVar5 = FUN_1128_0ca5(0xffeb,0xffff);
        uVar9 = (undefined2)((ulong)uVar5 >> 0x10);
        local_a = CREATESOLIDBRUSH(0x1128,(int)uVar5);
        puVar6 = local_18;
        uVar7 = unaff_SS;
        uVar8 = param_4;
        FUN_1148_0688(*(int *)(local_10._0_2_ + 0x20) + *(int *)(local_10._0_2_ + 0x24) + 1,
                      *(int *)(local_10._0_2_ + 0x1e) + *(int *)(local_10._0_2_ + 0x22) + 1,
                      *(undefined2 *)(local_10._0_2_ + 0x20),*(undefined2 *)(local_10._0_2_ + 0x1e))
        ;
        FRAMERECT(0x1148,local_a,puVar6,uVar7);
        DELETEOBJECT(0x14d0,local_a,uVar8,uVar9);
        auVar4 = local_10;
      }
      if (local_4 == local_c) break;
      local_4 = local_4 + 1;
    }
  }
  return;
}



/* ---- FUN_1138_4a8c @ 1138:4a8c  (56 octets) ---- */

void __stdcall16far FUN_1138_4a8c(undefined4 *param_1,undefined4 param_2)

{
  undefined2 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined2 uVar4;
  
  uVar4 = (undefined2)((ulong)param_1 >> 0x10);
  puVar3 = (undefined4 *)param_1;
  iVar2 = FUN_1138_39fd(puVar3,uVar4);
  if (iVar2 == 0) {
    puVar1 = (undefined2 *)((int)*param_1 + -0x10);
    (*(code *)*puVar1)(0x1138,puVar3,uVar4,(undefined2)param_2,param_2._2_2_);
  }
  else {
    FUN_1138_46cb(puVar3,uVar4,(undefined2)param_2,param_2._2_2_);
  }
  return;
}



/* ---- FUN_1138_4ac4 @ 1138:4ac4  (41 octets) ---- */

void __stdcall16far FUN_1138_4ac4(undefined4 *param_1,undefined4 param_2)

{
  undefined2 *puVar1;
  char cVar2;
  undefined2 uVar3;
  
  uVar3 = (undefined2)((ulong)param_2 >> 0x10);
  cVar2 = FUN_1138_466b((int)param_2,uVar3,*(undefined2 *)((int)param_2 + 4));
  if (cVar2 == '\0') {
    puVar1 = (undefined2 *)((int)*param_1 + -0x10);
    (*(code *)*puVar1)();
  }
  return;
}



/* ---- FUN_1138_4aed @ 1138:4aed  (31 octets) ---- */

void __stdcall16far FUN_1138_4aed(undefined4 param_1)

{
  FUN_1128_0d43();
  FUN_1138_24bb((int)param_1,(int)((ulong)param_1 >> 0x10),0,0,0,0xf24);
  return;
}



/* ---- FUN_1138_4b0c @ 1138:4b0c  (35 octets) ---- */

void __stdcall16far FUN_1138_4b0c(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_2 >> 0x10);
  iVar1 = (int)param_2;
  FUN_1138_24bb((int)param_1,(int)((ulong)param_1 >> 0x10),*(undefined2 *)(iVar1 + 4),
                *(undefined2 *)(iVar1 + 6),*(undefined2 *)(iVar1 + 2),0xf25);
  return;
}



/* ---- FUN_1138_4b2f @ 1138:4b2f  (26 octets) ---- */

void __stdcall16far FUN_1138_4b2f(undefined4 param_1)

{
  FUN_1138_24bb((int)param_1,(int)((ulong)param_1 >> 0x10),0,0,0,0xf26);
  return;
}



/* ---- FUN_1138_4b49 @ 1138:4b49  (26 octets) ---- */

void __stdcall16far FUN_1138_4b49(undefined4 param_1)

{
  FUN_1138_24bb((int)param_1,(int)((ulong)param_1 >> 0x10),0,0,0,0xf27);
  return;
}



/* ---- FUN_1138_4b63 @ 1138:4b63  (41 octets) ---- */

void __stdcall16far FUN_1138_4b63(undefined4 *param_1,undefined4 param_2)

{
  undefined2 *puVar1;
  char cVar2;
  undefined2 uVar3;
  
  uVar3 = (undefined2)((ulong)param_2 >> 0x10);
  cVar2 = FUN_1138_466b((int)param_2,uVar3,*(undefined2 *)((int)param_2 + 4));
  if (cVar2 == '\0') {
    puVar1 = (undefined2 *)((int)*param_1 + -0x10);
    (*(code *)*puVar1)();
  }
  return;
}



/* ---- FUN_1138_4b8c @ 1138:4b8c  (41 octets) ---- */

void __stdcall16far FUN_1138_4b8c(undefined4 *param_1,undefined4 param_2)

{
  undefined2 *puVar1;
  char cVar2;
  undefined2 uVar3;
  
  uVar3 = (undefined2)((ulong)param_2 >> 0x10);
  cVar2 = FUN_1138_466b((int)param_2,uVar3,*(undefined2 *)((int)param_2 + 6));
  if (cVar2 == '\0') {
    puVar1 = (undefined2 *)((int)*param_1 + -0x10);
    (*(code *)*puVar1)();
  }
  return;
}



/* ---- FUN_1138_4bb5 @ 1138:4bb5  (41 octets) ---- */

void __stdcall16far FUN_1138_4bb5(undefined4 *param_1,undefined4 param_2)

{
  undefined2 *puVar1;
  char cVar2;
  undefined2 uVar3;
  
  uVar3 = (undefined2)((ulong)param_2 >> 0x10);
  cVar2 = FUN_1138_466b((int)param_2,uVar3,*(undefined2 *)((int)param_2 + 6));
  if (cVar2 == '\0') {
    puVar1 = (undefined2 *)((int)*param_1 + -0x10);
    (*(code *)*puVar1)();
  }
  return;
}



/* ---- FUN_1138_4bde @ 1138:4bde  (48 octets) ---- */

void __stdcall16far FUN_1138_4bde(undefined4 *param_1,undefined4 param_2)

{
  undefined2 *puVar1;
  undefined4 uVar2;
  char cVar3;
  undefined2 uVar4;
  
  uVar4 = (undefined2)((ulong)param_2 >> 0x10);
  uVar2 = *(undefined4 *)((int)param_2 + 4);
  cVar3 = FUN_1138_466b((int)param_2,uVar4,*(undefined2 *)((int)uVar2 + 2));
  if (cVar3 == '\0') {
    puVar1 = (undefined2 *)((int)*param_1 + -0x10);
    (*(code *)*puVar1)();
  }
  return;
}



/* ---- FUN_1138_4c0e @ 1138:4c0e  (48 octets) ---- */

void __stdcall16far FUN_1138_4c0e(undefined4 *param_1,undefined4 param_2)

{
  undefined2 *puVar1;
  undefined4 uVar2;
  char cVar3;
  undefined2 uVar4;
  
  uVar4 = (undefined2)((ulong)param_2 >> 0x10);
  uVar2 = *(undefined4 *)((int)param_2 + 4);
  cVar3 = FUN_1138_466b((int)param_2,uVar4,*(undefined2 *)((int)uVar2 + 2));
  if (cVar3 == '\0') {
    puVar1 = (undefined2 *)((int)*param_1 + -0x10);
    (*(code *)*puVar1)();
  }
  return;
}



/* ---- FUN_1138_4c3e @ 1138:4c3e  (48 octets) ---- */

void __stdcall16far FUN_1138_4c3e(undefined4 *param_1,undefined4 param_2)

{
  undefined2 *puVar1;
  undefined4 uVar2;
  char cVar3;
  undefined2 uVar4;
  
  uVar4 = (undefined2)((ulong)param_2 >> 0x10);
  uVar2 = *(undefined4 *)((int)param_2 + 4);
  cVar3 = FUN_1138_466b((int)param_2,uVar4,*(undefined2 *)((int)uVar2 + 2));
  if (cVar3 == '\0') {
    puVar1 = (undefined2 *)((int)*param_1 + -0x10);
    (*(code *)*puVar1)();
  }
  return;
}



/* ---- FUN_1138_4c6e @ 1138:4c6e  (48 octets) ---- */

void __stdcall16far FUN_1138_4c6e(undefined4 *param_1,undefined4 param_2)

{
  undefined2 *puVar1;
  undefined4 uVar2;
  char cVar3;
  undefined2 uVar4;
  
  uVar4 = (undefined2)((ulong)param_2 >> 0x10);
  uVar2 = *(undefined4 *)((int)param_2 + 4);
  cVar3 = FUN_1138_466b((int)param_2,uVar4,*(undefined2 *)((int)uVar2 + 2));
  if (cVar3 == '\0') {
    puVar1 = (undefined2 *)((int)*param_1 + -0x10);
    (*(code *)*puVar1)();
  }
  return;
}



/* ---- FUN_1138_4c9e @ 1138:4c9e  (68 octets) ---- */

void __stdcall16far FUN_1138_4c9e(undefined4 *param_1,undefined4 param_2)

{
  undefined2 *puVar1;
  undefined4 uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined4 *puVar5;
  undefined2 uVar6;
  
  uVar3 = (undefined2)((ulong)param_2 >> 0x10);
  uVar4 = (undefined2)((ulong)param_1 >> 0x10);
  puVar1 = (undefined2 *)((int)*param_1 + 0x34);
  puVar5 = (undefined4 *)param_1;
  uVar6 = uVar4;
  (*(code *)*puVar1)();
  uVar2 = *(undefined4 *)((int)(undefined4 *)param_1 + 0x9e);
  uVar4 = FUN_1128_16c0((int)uVar2,(int)((ulong)uVar2 >> 0x10));
  FILLRECT(0x1128,uVar4,puVar5,uVar6);
  *(undefined2 *)((int)param_2 + 8) = 1;
  *(undefined2 *)((int)param_2 + 10) = 0;
  return;
}



/* ---- FUN_1138_4ce2 @ 1138:4ce2  (198 octets) ---- */

void __stdcall16far FUN_1138_4ce2(undefined4 *param_1,undefined4 param_2)

{
  undefined2 *puVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined2 uVar7;
  undefined2 uVar8;
  
  uVar7 = (undefined2)((ulong)param_1 >> 0x10);
  puVar5 = (undefined4 *)param_1;
  iVar6 = (int)param_2;
  uVar8 = (undefined2)((ulong)param_2 >> 0x10);
  if ((((*(char *)((int)puVar5 + 0xa5) == '\0') || ((*(byte *)((int)puVar5 + 0x26) & 0x10) == 0)) ||
      (*(int *)((int)puVar5 + 0x1a) == 0 && *(int *)(puVar5 + 7) == 0)) ||
     ((*(uint *)((int)*(undefined4 *)(iVar6 + 4) + 0xc) & 8) != 0)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if ((*(uint *)((int)*(undefined4 *)(iVar6 + 4) + 0xc) & 3) != 3) {
    iVar4 = ISWINDOWVISIBLE();
    if (iVar4 != 0) {
      bVar3 = true;
      goto LAB_1138_4d47;
    }
  }
  bVar3 = false;
LAB_1138_4d47:
  if ((bVar2) && (bVar3)) {
    FUN_1138_617b(puVar5,uVar7);
  }
  FUN_1138_6516(puVar5,uVar7);
  puVar1 = (undefined2 *)((int)*param_1 + -0x10);
  (*(code *)*puVar1)(0x1138,puVar5,uVar7,iVar6,uVar8);
  if ((bVar2) && ((bVar3 || ((*(uint *)((int)*(undefined4 *)(iVar6 + 4) + 0xc) & 0xc0) != 0)))) {
    FUN_1138_617b(puVar5,uVar7);
  }
  return;
}



/* ---- FUN_1138_4da8 @ 1138:4da8  (45 octets) ---- */

void __stdcall16far FUN_1138_4da8(undefined4 *param_1,undefined2 param_2,undefined2 param_3)

{
  undefined2 *puVar1;
  undefined4 *puVar2;
  undefined2 uVar3;
  
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  puVar2 = (undefined4 *)param_1;
  FUN_1138_6516(puVar2,uVar3);
  puVar1 = (undefined2 *)((int)*param_1 + -0x10);
  (*(code *)*puVar1)(0x1138,puVar2,uVar3,param_2,param_3);
  FUN_1138_36f9(puVar2,uVar3);
  return;
}



/* ---- FUN_1138_4dd5 @ 1138:4dd5  (35 octets) ---- */

void __stdcall16far FUN_1138_4dd5(undefined4 *param_1)

{
  undefined2 *puVar1;
  
  puVar1 = (undefined2 *)((int)*param_1 + -0x10);
  (*(code *)*puVar1)();
  FUN_1138_6516((undefined4 *)param_1,(int)((ulong)param_1 >> 0x10));
  return;
}



/* ---- FUN_1138_4df8 @ 1138:4df8  (290 octets) ---- */

void __stdcall16far FUN_1138_4df8(undefined4 *param_1,undefined4 param_2)

{
  undefined2 *puVar1;
  undefined2 uVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  undefined2 uVar8;
  undefined2 unaff_CS;
  undefined4 uVar9;
  long lVar10;
  int iVar11;
  undefined2 local_c;
  undefined2 local_a;
  int local_4;
  
  uVar6 = (undefined2)((ulong)param_2 >> 0x10);
  iVar4 = (int)param_2;
  uVar7 = (undefined2)((ulong)param_1 >> 0x10);
  puVar5 = (undefined4 *)param_1;
  if (*(int *)(iVar4 + 2) == *(int *)((int)puVar5 + 0xa2)) {
    if (*(int *)(iVar4 + 4) == 1) {
      if ((*(byte *)(puVar5 + 6) & 0x10) == 0) {
        local_4 = *(int *)((int)DAT_1160_2c2e + 0x20);
        if (local_4 == 0) {
          GETCURSORPOS();
          uVar9 = FUN_1138_1a06(puVar5,uVar7,local_c,local_a);
          unaff_CS = 0x1138;
          lVar10 = FUN_1138_42a8(puVar5,uVar7,0,uVar9);
          if (lVar10 != 0) {
            local_4 = *(int *)((int)lVar10 + 0x3c);
          }
          if (local_4 == 0) {
            local_4 = *(int *)(puVar5 + 0xf);
          }
        }
      }
      else {
        local_4 = -2;
      }
      if (local_4 != 0) {
        uVar7 = FUN_1140_633e((int)DAT_1160_2c2e,(int)((ulong)DAT_1160_2c2e >> 0x10),local_4);
        SETCURSOR(0x1140,uVar7);
        *(undefined2 *)(iVar4 + 8) = 1;
        *(undefined2 *)(iVar4 + 10) = 0;
        return;
      }
    }
    else if ((*(int *)(iVar4 + 4) == -2) && (*(int *)(iVar4 + 6) == 0x201)) {
      uVar8 = (undefined2)((ulong)DAT_1160_2c2a >> 0x10);
      if (*(int *)((int)DAT_1160_2c2a + 0x1a) != 0) {
        uVar8 = *(undefined2 *)((int)DAT_1160_2c2a + 0x1a);
        uVar2 = GETLASTACTIVEPOPUP();
        iVar11 = 0x14d0;
        unaff_CS = 0x14d0;
        iVar3 = GETACTIVEWINDOW(0x14d0,uVar2,uVar8);
        if (iVar3 != iVar11) {
          FUN_1140_6fe8((int)DAT_1160_2c2a,(int)((ulong)DAT_1160_2c2a >> 0x10));
          return;
        }
      }
    }
  }
  puVar1 = (undefined2 *)((int)*param_1 + -0x10);
  (*(code *)*puVar1)(unaff_CS,puVar5,uVar7,iVar4,uVar6);
  return;
}



/* ---- FUN_1138_4f1a @ 1138:4f1a  (40 octets) ---- */

void __stdcall16far FUN_1138_4f1a(undefined4 param_1)

{
  undefined2 *puVar1;
  
  if (*(int *)((int)param_1 + 0xca) != 0) {
    puVar1 = (undefined2 *)((int)param_1 + 200);
    (*(code *)*puVar1)();
  }
  return;
}



/* ---- FUN_1138_4f42 @ 1138:4f42  (40 octets) ---- */

void __stdcall16far FUN_1138_4f42(undefined4 param_1)

{
  undefined2 *puVar1;
  
  if (*(int *)((int)param_1 + 0xd2) != 0) {
    puVar1 = (undefined2 *)((int)param_1 + 0xd0);
    (*(code *)*puVar1)();
  }
  return;
}



/* ---- FUN_1138_4f6a @ 1138:4f6a  (52 octets) ---- */

void __stdcall16far FUN_1138_4f6a(undefined4 param_1)

{
  undefined2 *puVar1;
  
  if (*(int *)((int)param_1 + 0xb2) != 0) {
    puVar1 = (undefined2 *)((int)param_1 + 0xb0);
    (*(code *)*puVar1)();
  }
  return;
}



/* ---- FUN_1138_4f9e @ 1138:4f9e  (264 octets) ---- */

undefined __stdcall16far FUN_1138_4f9e(long param_1,undefined4 param_3)

{
  char cVar1;
  undefined2 uVar2;
  int iVar3;
  undefined2 uVar4;
  long lVar5;
  int local_8;
  undefined2 local_6;
  undefined local_3;
  
  local_3 = 1;
  lVar5 = FUN_1140_17a8(param_1);
  iVar3 = (int)param_3;
  uVar4 = (undefined2)((ulong)param_3 >> 0x10);
  if ((((lVar5 == 0) || (lVar5 == param_1)) || (*(char *)((int)lVar5 + 0xf0) == '\0')) ||
     (cVar1 = FUN_1138_4f9e(lVar5,iVar3,uVar4), cVar1 == '\0')) {
    uVar2 = FUN_1140_16fb(*(undefined2 *)(iVar3 + 4),*(undefined2 *)(iVar3 + 6));
    FUN_1158_206a(0x1140,param_1,uVar2,iVar3 + 2,uVar4);
    if (*(int *)(iVar3 + 2) != 0) {
      if ((*(int *)(iVar3 + 2) == 0x70) && ((char)uVar2 == '\0')) {
        while( true ) {
          local_6 = (undefined2)((ulong)param_1 >> 0x10);
          local_8 = (int)param_1;
          if ((param_1 == 0) || (*(int *)(local_8 + 0xac) != 0 || *(int *)(local_8 + 0xae) != 0))
          break;
          param_1 = CONCAT22(*(undefined2 *)(local_8 + 0x1c),*(undefined2 *)(local_8 + 0x1a));
        }
        if ((param_1 != 0) &&
           (cVar1 = FUN_1140_7792((int)DAT_1160_2c2a,(int)((ulong)DAT_1160_2c2a >> 0x10),
                                  *(undefined2 *)(local_8 + 0xac),*(undefined2 *)(local_8 + 0xae)),
           cVar1 != '\0')) {
          return 1;
        }
      }
      local_3 = 0;
    }
  }
  return local_3;
}



/* ---- FUN_1138_50a6 @ 1138:50a6  (44 octets) ---- */

void __stdcall16far FUN_1138_50a6(undefined4 *param_1,undefined4 param_2)

{
  undefined2 *puVar1;
  char cVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  
  uVar3 = (undefined2)((ulong)param_2 >> 0x10);
  uVar4 = (undefined2)((ulong)param_1 >> 0x10);
  cVar2 = FUN_1138_4f9e((undefined4 *)param_1,uVar4,(int)param_2,uVar3);
  if (cVar2 == '\0') {
    puVar1 = (undefined2 *)((int)*param_1 + -0x10);
    (*(code *)*puVar1)(0x1138,(undefined4 *)param_1,uVar4,(int)param_2,uVar3);
  }
  return;
}



/* ---- FUN_1138_50d2 @ 1138:50d2  (44 octets) ---- */

void __stdcall16far FUN_1138_50d2(undefined4 *param_1,undefined4 param_2)

{
  undefined2 *puVar1;
  char cVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  
  uVar3 = (undefined2)((ulong)param_2 >> 0x10);
  uVar4 = (undefined2)((ulong)param_1 >> 0x10);
  cVar2 = FUN_1138_4f9e((undefined4 *)param_1,uVar4,(int)param_2,uVar3);
  if (cVar2 == '\0') {
    puVar1 = (undefined2 *)((int)*param_1 + -0x10);
    (*(code *)*puVar1)(0x1138,(undefined4 *)param_1,uVar4,(int)param_2,uVar3);
  }
  return;
}



/* ---- FUN_1138_50fe @ 1138:50fe  (52 octets) ---- */

void __stdcall16far FUN_1138_50fe(undefined4 param_1)

{
  undefined2 *puVar1;
  
  if (*(int *)((int)param_1 + 0xc2) != 0) {
    puVar1 = (undefined2 *)((int)param_1 + 0xc0);
    (*(code *)*puVar1)();
  }
  return;
}



/* ---- FUN_1138_5132 @ 1138:5132  (149 octets) ---- */

undefined __stdcall16far FUN_1138_5132(long param_1,undefined4 param_3)

{
  char cVar1;
  undefined2 uVar2;
  int iVar3;
  int iVar4;
  undefined2 uVar5;
  long lVar6;
  undefined2 uVar7;
  undefined local_3;
  
  local_3 = 1;
  lVar6 = FUN_1140_17a8(param_1);
  iVar3 = (int)param_3;
  uVar5 = (undefined2)((ulong)param_3 >> 0x10);
  if ((((lVar6 == 0) || (lVar6 == param_1)) || (*(char *)((int)lVar6 + 0xf0) == '\0')) ||
     (cVar1 = FUN_1138_5132(lVar6,iVar3,uVar5), cVar1 == '\0')) {
    iVar4 = iVar3 + 2;
    uVar7 = uVar5;
    uVar2 = FUN_1140_16fb(*(undefined2 *)(iVar3 + 4),*(undefined2 *)(iVar3 + 6));
    FUN_1158_206a(0x1140,param_1,uVar2,iVar4,uVar7);
    if (*(int *)(iVar3 + 2) != 0) {
      local_3 = 0;
    }
  }
  return local_3;
}



/* ---- FUN_1138_51c7 @ 1138:51c7  (44 octets) ---- */

void __stdcall16far FUN_1138_51c7(undefined4 *param_1,undefined4 param_2)

{
  undefined2 *puVar1;
  char cVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  
  uVar3 = (undefined2)((ulong)param_2 >> 0x10);
  uVar4 = (undefined2)((ulong)param_1 >> 0x10);
  cVar2 = FUN_1138_5132((undefined4 *)param_1,uVar4,(int)param_2,uVar3);
  if (cVar2 == '\0') {
    puVar1 = (undefined2 *)((int)*param_1 + -0x10);
    (*(code *)*puVar1)(0x1138,(undefined4 *)param_1,uVar4,(int)param_2,uVar3);
  }
  return;
}



/* ---- FUN_1138_51f3 @ 1138:51f3  (44 octets) ---- */

void __stdcall16far FUN_1138_51f3(undefined4 *param_1,undefined4 param_2)

{
  undefined2 *puVar1;
  char cVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  
  uVar3 = (undefined2)((ulong)param_2 >> 0x10);
  uVar4 = (undefined2)((ulong)param_1 >> 0x10);
  cVar2 = FUN_1138_5132((undefined4 *)param_1,uVar4,(int)param_2,uVar3);
  if (cVar2 == '\0') {
    puVar1 = (undefined2 *)((int)*param_1 + -0x10);
    (*(code *)*puVar1)(0x1138,(undefined4 *)param_1,uVar4,(int)param_2,uVar3);
  }
  return;
}



/* ---- FUN_1138_521f @ 1138:521f  (48 octets) ---- */

void __stdcall16far FUN_1138_521f(undefined4 param_1)

{
  undefined2 *puVar1;
  
  if (*(int *)((int)param_1 + 0xba) != 0) {
    puVar1 = (undefined2 *)((int)param_1 + 0xb8);
    (*(code *)*puVar1)();
  }
  return;
}



/* ---- FUN_1138_524f @ 1138:524f  (132 octets) ---- */

bool __stdcall16far FUN_1138_524f(long param_1,undefined4 param_3)

{
  char cVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  long lVar5;
  
  uVar4 = 0x1140;
  lVar5 = FUN_1140_17a8(param_1);
  iVar2 = (int)param_3;
  uVar3 = (undefined2)((ulong)param_3 >> 0x10);
  if (((lVar5 != 0) && (lVar5 != param_1)) && (*(char *)((int)lVar5 + 0xf0) != '\0')) {
    uVar4 = 0x1138;
    cVar1 = FUN_1138_524f(lVar5,iVar2,uVar3);
    if (cVar1 != '\0') {
      return true;
    }
  }
  FUN_1158_206a(uVar4,param_1,iVar2 + 2,uVar3);
  return *(char *)(iVar2 + 2) == '\0';
}



/* ---- FUN_1138_52d3 @ 1138:52d3  (44 octets) ---- */

void __stdcall16far FUN_1138_52d3(undefined4 *param_1,undefined4 param_2)

{
  undefined2 *puVar1;
  char cVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  
  uVar3 = (undefined2)((ulong)param_2 >> 0x10);
  uVar4 = (undefined2)((ulong)param_1 >> 0x10);
  cVar2 = FUN_1138_524f((undefined4 *)param_1,uVar4,(int)param_2,uVar3);
  if (cVar2 == '\0') {
    puVar1 = (undefined2 *)((int)*param_1 + -0x10);
    (*(code *)*puVar1)(0x1138,(undefined4 *)param_1,uVar4,(int)param_2,uVar3);
  }
  return;
}



/* ---- FUN_1138_52ff @ 1138:52ff  (150 octets) ---- */

void __stdcall16far FUN_1138_52ff(undefined4 *param_1,undefined4 param_2)

{
  undefined2 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined2 uVar5;
  int iVar6;
  undefined2 uVar7;
  undefined2 unaff_CS;
  long lVar8;
  
  uVar5 = (undefined2)((ulong)param_2 >> 0x10);
  iVar3 = (int)param_2;
  puVar4 = (undefined4 *)param_1;
  iVar6 = (int)((ulong)param_1 >> 0x10);
  if ((((*(uint *)(iVar3 + 2) & 0xfff0) == 0xf100) && (*(int *)(iVar3 + 4) != 0x20)) &&
     (*(int *)(iVar3 + 4) != 0x2d)) {
    unaff_CS = 0x14d0;
    iVar2 = ISICONIC();
    if (iVar2 == 0) {
      unaff_CS = 0x14d0;
      iVar2 = GETCAPTURE(0x14d0);
      if ((iVar2 == 0) &&
         ((uVar7 = (undefined2)((ulong)DAT_1160_2c2a >> 0x10),
          *(int *)((int)DAT_1160_2c2a + 0x22) != iVar6 ||
          ((undefined4 *)*(int *)((int)DAT_1160_2c2a + 0x20) != puVar4)))) {
        unaff_CS = 0x1138;
        FUN_1138_1a38(puVar4,iVar6,0,0);
        lVar8 = FUN_1138_0b8f(*(undefined2 *)(iVar3 + 4),0,*(undefined2 *)(iVar3 + 2),0xf17);
        if (lVar8 != 0) {
          return;
        }
      }
    }
  }
  puVar1 = (undefined2 *)((int)*param_1 + -0x10);
  (*(code *)*puVar1)(unaff_CS,puVar4,iVar6,iVar3,uVar5);
  return;
}



/* ---- FUN_1138_5395 @ 1138:5395  (41 octets) ---- */

void __stdcall16far FUN_1138_5395(undefined4 *param_1,undefined4 param_2)

{
  undefined2 *puVar1;
  char cVar2;
  undefined2 uVar3;
  
  uVar3 = (undefined2)((ulong)param_2 >> 0x10);
  cVar2 = FUN_1138_466b((int)param_2,uVar3,*(undefined2 *)((int)param_2 + 4));
  if (cVar2 == '\0') {
    puVar1 = (undefined2 *)((int)*param_1 + -0x10);
    (*(code *)*puVar1)();
  }
  return;
}



/* ---- FUN_1138_53be @ 1138:53be  (59 octets) ---- */

void __stdcall16far FUN_1138_53be(undefined4 *param_1,undefined4 param_2)

{
  undefined2 *puVar1;
  char cVar2;
  int iVar3;
  undefined2 uVar4;
  
  uVar4 = (undefined2)((ulong)param_2 >> 0x10);
  iVar3 = (int)param_2;
  if (((*(int *)(iVar3 + 2) == 1) || (*(int *)(iVar3 + 2) == 2)) &&
     (cVar2 = FUN_1138_466b(iVar3,uVar4,*(undefined2 *)(iVar3 + 4)), cVar2 != '\0')) {
    return;
  }
  puVar1 = (undefined2 *)((int)*param_1 + -0x10);
  (*(code *)*puVar1)();
  return;
}



/* ---- FUN_1138_53f9 @ 1138:53f9  (41 octets) ---- */

void __stdcall16far FUN_1138_53f9(undefined4 *param_1,undefined4 param_2)

{
  undefined2 *puVar1;
  char cVar2;
  undefined2 uVar3;
  
  uVar3 = (undefined2)((ulong)param_2 >> 0x10);
  cVar2 = FUN_1138_466b((int)param_2,uVar3,*(undefined2 *)((int)param_2 + 4));
  if (cVar2 == '\0') {
    puVar1 = (undefined2 *)((int)*param_1 + -0x10);
    (*(code *)*puVar1)();
  }
  return;
}



/* ---- FUN_1138_5422 @ 1138:5422  (65 octets) ---- */

void __stdcall16far FUN_1138_5422(undefined4 *param_1,undefined2 param_2,undefined2 param_3)

{
  undefined2 *puVar1;
  undefined4 *puVar2;
  undefined2 uVar3;
  undefined2 unaff_CS;
  undefined2 uVar4;
  undefined2 uVar5;
  
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  puVar2 = (undefined4 *)param_1;
  uVar5 = *(undefined2 *)((int)puVar2 + 0xa2);
  REMOVEPROP(unaff_CS,DAT_1160_2c0e,0);
  uVar4 = *(undefined2 *)((int)puVar2 + 0xa2);
  REMOVEPROP(0x14d0,DAT_1160_2c10,0);
  puVar1 = (undefined2 *)((int)*param_1 + -0x10);
  (*(code *)*puVar1)(0x14d0,puVar2,uVar3,param_2,param_3,uVar4,uVar5);
  return;
}



/* ---- FUN_1138_5463 @ 1138:5463  (41 octets) ---- */

void __stdcall16far FUN_1138_5463(undefined4 *param_1)

{
  undefined2 *puVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  puVar1 = (undefined2 *)((int)*param_1 + -0x10);
  (*(code *)*puVar1)();
  *(undefined2 *)((int)(undefined4 *)param_1 + 0xa2) = 0;
  *(undefined *)((int)(undefined4 *)param_1 + 0xa7) = 0;
  return;
}



/* ---- FUN_1138_548c @ 1138:548c  (72 octets) ---- */

void __stdcall16far FUN_1138_548c(undefined4 *param_1,undefined4 param_2)

{
  undefined2 *puVar1;
  undefined4 *puVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  
  uVar3 = (undefined2)((ulong)param_2 >> 0x10);
  uVar4 = (undefined2)((ulong)param_1 >> 0x10);
  puVar2 = (undefined4 *)param_1;
  if (((*(byte *)(puVar2 + 6) & 0x10) == 0) ||
     (*(int *)((int)puVar2 + 0x1a) == 0 && *(int *)(puVar2 + 7) == 0)) {
    puVar1 = (undefined2 *)((int)*param_1 + -0x10);
    (*(code *)*puVar1)();
  }
  else {
    *(undefined2 *)((int)param_2 + 8) = 1;
    *(undefined2 *)((int)param_2 + 10) = 0;
  }
  return;
}



/* ---- FUN_1138_54d4 @ 1138:54d4  (121 octets) ---- */

undefined2 __stdcall16far FUN_1138_54d4(undefined4 param_1,char param_2)

{
  int iVar1;
  undefined2 uVar2;
  byte bVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined4 uVar6;
  int local_6;
  char local_3;
  
  uVar5 = (undefined2)((ulong)param_1 >> 0x10);
  uVar4 = (undefined2)param_1;
  local_3 = FUN_1138_14e5(uVar4,uVar5,param_2);
  iVar1 = FUN_1138_39fd(uVar4,uVar5);
  iVar1 = iVar1 + -1;
  local_6 = iVar1;
  if (-1 < iVar1) {
    while ((param_2 == '\0' || (local_3 == '\0'))) {
      uVar2 = CONCAT11((char)((uint)iVar1 >> 8),param_2);
      uVar6 = FUN_1138_398f(uVar4,uVar5,local_6);
      uVar2 = FUN_1158_206a(0x1138,uVar6,uVar2);
      bVar3 = (byte)((uint)uVar2 >> 8);
      if (((char)uVar2 == '\0') && (local_3 == '\0')) {
        iVar1 = (uint)bVar3 << 8;
      }
      else {
        iVar1 = CONCAT11(bVar3,1);
      }
      local_3 = (char)iVar1;
      if (local_6 == 0) break;
      local_6 = local_6 + -1;
    }
  }
  return CONCAT11((char)((uint)iVar1 >> 8),local_3);
}



/* ---- FUN_1138_554d @ 1138:554d  (40 octets) ---- */

void __stdcall16far FUN_1138_554d(undefined4 param_1,undefined4 param_2)

{
  byte *pbVar1;
  char cVar2;
  undefined2 uVar3;
  
  pbVar1 = (byte *)((int)param_1 + 0x28);
  *pbVar1 = *pbVar1 | 4;
  cVar2 = FUN_1158_206a();
  uVar3 = (undefined2)((ulong)param_2 >> 0x10);
  *(int *)((int)param_2 + 8) = (int)cVar2;
  *(int *)((int)param_2 + 10) = (int)cVar2 >> 0xf;
  return;
}



/* ---- FUN_1138_5575 @ 1138:5575  (35 octets) ---- */

void __stdcall16far FUN_1138_5575(undefined2 param_1,undefined2 param_2_00,undefined4 param_2)

{
  char cVar1;
  undefined2 uVar2;
  
  cVar1 = FUN_1158_206a();
  uVar2 = (undefined2)((ulong)param_2 >> 0x10);
  *(int *)((int)param_2 + 8) = (int)cVar1;
  *(int *)((int)param_2 + 10) = (int)cVar1 >> 0xf;
  return;
}



/* ---- FUN_1138_5598 @ 1138:5598  (38 octets) ---- */

void __stdcall16far FUN_1138_5598(undefined4 *param_1)

{
  undefined2 *puVar1;
  
  puVar1 = (undefined2 *)((int)*param_1 + -0x10);
  (*(code *)*puVar1)();
  FUN_1138_3a9e((undefined4 *)param_1,(int)((ulong)param_1 >> 0x10),0xf23);
  return;
}



/* ---- FUN_1138_55be @ 1138:55be  (20 octets) ---- */

void __stdcall16far FUN_1138_55be(void)

{
  FUN_1158_206a();
  return;
}



/* ---- FUN_1138_55d2 @ 1138:55d2  (20 octets) ---- */

void __stdcall16far FUN_1138_55d2(void)

{
  FUN_1158_206a();
  return;
}



/* ---- FUN_1138_55e6 @ 1138:55e6  (42 octets) ---- */

void __stdcall16far FUN_1138_55e6(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  
  uVar2 = (undefined2)((ulong)param_2 >> 0x10);
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  cVar1 = FUN_1138_4387((int)param_1,uVar3,(int)param_2,uVar2);
  if (cVar1 == '\0') {
    FUN_1138_2e4d((int)param_1,uVar3,(int)param_2,uVar2);
  }
  return;
}



/* ---- FUN_1138_5610 @ 1138:5610  (22 octets) ---- */

void __stdcall16far FUN_1138_5610(undefined4 param_1,undefined4 param_2)

{
  FUN_1138_3a43((int)param_1,(int)((ulong)param_1 >> 0x10),(int)param_2,
                (int)((ulong)param_2 >> 0x10));
  return;
}



/* ---- FUN_1138_5626 @ 1138:5626  (22 octets) ---- */

void __stdcall16far FUN_1138_5626(undefined4 param_1,undefined4 param_2)

{
  FUN_1138_3a43((int)param_1,(int)((ulong)param_1 >> 0x10),(int)param_2,
                (int)((ulong)param_2 >> 0x10));
  return;
}



/* ---- FUN_1138_563c @ 1138:563c  (22 octets) ---- */

void __stdcall16far FUN_1138_563c(undefined4 param_1,undefined4 param_2)

{
  FUN_1138_3a43((int)param_1,(int)((ulong)param_1 >> 0x10),(int)param_2,
                (int)((ulong)param_2 >> 0x10));
  return;
}



/* ---- FUN_1138_5652 @ 1138:5652  (53 octets) ---- */

void __stdcall16far FUN_1138_5652(undefined4 param_1)

{
  int iVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  if ((*(char *)(iVar1 + 0x29) == '\0') &&
     (*(int *)(iVar1 + 0x1a) != 0 || *(int *)(iVar1 + 0x1c) != 0)) {
    FUN_1138_3752(iVar1,uVar2,0);
  }
  if ((*(byte *)(iVar1 + 0x18) & 0x10) == 0) {
    FUN_1138_41a5(iVar1,uVar2);
  }
  return;
}



/* ---- FUN_1138_5687 @ 1138:5687  (44 octets) ---- */

void __stdcall16far FUN_1138_5687(undefined4 param_1)

{
  undefined2 unaff_CS;
  
  SETWINDOWPOS(unaff_CS,*(undefined2 *)(*(char *)((int)param_1 + 0xa7) * 2 + 0x14fc),0,0,0,0,0);
  return;
}



/* ---- FUN_1138_56b3 @ 1138:56b3  (76 octets) ---- */

void __stdcall16far FUN_1138_56b3(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  undefined2 uVar3;
  
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  iVar2 = (int)param_1;
  if ((*(char *)(iVar2 + 0x2a) == '\0') &&
     (*(int *)(iVar2 + 0x1a) != 0 || *(int *)(iVar2 + 0x1c) != 0)) {
    FUN_1138_3752(iVar2,uVar3,0);
  }
  cVar1 = FUN_1138_64fa(iVar2,uVar3);
  if (cVar1 != '\0') {
    if ((*(byte *)(iVar2 + 0x18) & 0x10) == 0) {
      ENABLEWINDOW(0x1138,(int)*(char *)(iVar2 + 0x2a));
    }
  }
  return;
}



/* ---- FUN_1138_56ff @ 1138:56ff  (59 octets) ---- */

void __stdcall16far FUN_1138_56ff(undefined4 param_1,undefined2 param_2,undefined2 param_3)

{
  int iVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  FUN_1138_2d46(iVar1,uVar2,param_2,param_3);
  FUN_1128_1684((int)*(undefined4 *)(iVar1 + 0x9e),
                (int)((ulong)*(undefined4 *)(iVar1 + 0x9e) >> 0x10),*(undefined2 *)(iVar1 + 0x38),
                *(undefined2 *)(iVar1 + 0x3a));
  FUN_1138_3a9e(iVar1,uVar2,0xf09);
  return;
}



/* ---- FUN_1138_573a @ 1138:573a  (81 octets) ---- */

void __stdcall16far FUN_1138_573a(undefined4 param_1,undefined2 param_2,undefined2 param_3)

{
  char cVar1;
  undefined2 uVar2;
  int iVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  
  uVar4 = (undefined2)((ulong)param_1 >> 0x10);
  iVar3 = (int)param_1;
  FUN_1138_2d33(iVar3,uVar4,param_2,param_3);
  cVar1 = FUN_1138_64fa(iVar3,uVar4);
  if (cVar1 != '\0') {
    uVar5 = 0x30;
    uVar2 = FUN_1128_1016((int)*(undefined4 *)(iVar3 + 0x34),
                          (int)((ulong)*(undefined4 *)(iVar3 + 0x34) >> 0x10));
    FUN_1138_24bb(iVar3,uVar4,0,0,uVar2,uVar5);
  }
  FUN_1138_3a9e(iVar3,uVar4,0xf08);
  return;
}



/* ---- FUN_1138_578b @ 1138:578b  (77 octets) ---- */

void __stdcall16far FUN_1138_578b(undefined4 param_1)

{
  int iVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  undefined2 uVar4;
  undefined2 local_6;
  undefined2 local_4;
  
  iVar1 = GETCAPTURE();
  if (iVar1 == 0) {
    GETCURSORPOS(0x14d0,&local_6);
    uVar3 = FUN_1138_0e92(0,local_6,local_4);
    if (((int)((ulong)uVar3 >> 0x10) == param_1._2_2_) && ((int)uVar3 == (int)param_1)) {
      uVar4 = 0x20;
      uVar2 = FUN_1138_62b9((int)param_1,param_1._2_2_);
      FUN_1138_24bb((int)param_1,param_1._2_2_,1,0,uVar2,uVar4);
    }
  }
  return;
}



/* ---- FUN_1138_57d8 @ 1138:57d8  (78 octets) ---- */

void __stdcall16far FUN_1138_57d8(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined2 uVar4;
  
  uVar4 = (undefined2)((ulong)param_1 >> 0x10);
  iVar3 = (int)param_1;
  if (((*(byte *)(iVar3 + 0x26) & 0x10) != 0) &&
     (*(int *)(iVar3 + 0x1a) != 0 || *(int *)(iVar3 + 0x1c) != 0)) {
    cVar1 = FUN_1138_64fa(iVar3,uVar4);
    if (cVar1 != '\0') {
      iVar2 = ISWINDOWVISIBLE(0x1138,*(undefined2 *)(iVar3 + 0xa2));
      if (iVar2 != 0) {
        FUN_1138_617b(iVar3,uVar4);
      }
    }
  }
  FUN_1138_3a9e(iVar3,uVar4,0xf11);
  return;
}



/* ---- FUN_1138_5826 @ 1138:5826  (47 octets) ---- */

void __stdcall16far FUN_1138_5826(undefined4 param_1)

{
  int iVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  if (*(char *)(iVar1 + 0xa6) != '\0') {
    FUN_1138_6322(iVar1,uVar2,*(undefined *)((int)*(undefined4 *)(iVar1 + 0x1a) + 0xa5));
    *(undefined *)(iVar1 + 0xa6) = 1;
  }
  return;
}



/* ---- FUN_1138_5855 @ 1138:5855  (29 octets) ---- */

void __stdcall16far FUN_1138_5855(void)

{
  if (DAT_1160_13ea != 0) {
    (*DAT_1160_13e8)();
  }
  return;
}



/* ---- FUN_1138_5872 @ 1138:5872  (22 octets) ---- */

void __stdcall16far FUN_1138_5872(undefined4 param_1,undefined4 param_2)

{
  FUN_1138_3a43((int)param_1,(int)((ulong)param_1 >> 0x10),(int)param_2,
                (int)((ulong)param_2 >> 0x10));
  return;
}



/* ---- FUN_1138_5888 @ 1138:5888  (22 octets) ---- */

void __stdcall16far FUN_1138_5888(undefined4 param_1,undefined4 param_2)

{
  FUN_1138_3a43((int)param_1,(int)((ulong)param_1 >> 0x10),(int)param_2,
                (int)((ulong)param_2 >> 0x10));
  return;
}



/* ---- FUN_1138_589e @ 1138:589e  (22 octets) ---- */

void __stdcall16far FUN_1138_589e(undefined4 param_1,undefined4 param_2)

{
  FUN_1138_3a43((int)param_1,(int)((ulong)param_1 >> 0x10),(int)param_2,
                (int)((ulong)param_2 >> 0x10));
  return;
}



/* ---- FUN_1138_58b4 @ 1138:58b4  (22 octets) ---- */

void __stdcall16far FUN_1138_58b4(undefined4 param_1,undefined4 param_2)

{
  FUN_1138_3a43((int)param_1,(int)((ulong)param_1 >> 0x10),(int)param_2,
                (int)((ulong)param_2 >> 0x10));
  return;
}



/* ---- FUN_1138_58ca @ 1138:58ca  (112 octets) ---- */

void __stdcall16far FUN_1138_58ca(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined4 uVar6;
  
  uVar3 = (undefined2)((ulong)param_2 >> 0x10);
  uVar4 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  uVar5 = (undefined2)((ulong)*(undefined4 *)(iVar1 + 0x34) >> 0x10);
  iVar2 = (int)*(undefined4 *)(iVar1 + 0x34);
  uVar6 = FUN_1128_0ca5(*(undefined2 *)(iVar2 + 0x10),*(undefined2 *)(iVar2 + 0x12));
  SETTEXTCOLOR(0x1128,uVar6);
  uVar6 = FUN_1128_1661((int)*(undefined4 *)(iVar1 + 0x9e),
                        (int)((ulong)*(undefined4 *)(iVar1 + 0x9e) >> 0x10));
  uVar6 = FUN_1128_0ca5(uVar6);
  SETBKCOLOR(0x1128,uVar6);
  uVar4 = FUN_1128_16c0((int)*(undefined4 *)(iVar1 + 0x9e),
                        (int)((ulong)*(undefined4 *)(iVar1 + 0x9e) >> 0x10));
  *(undefined2 *)((int)param_2 + 8) = uVar4;
  *(undefined2 *)((int)param_2 + 10) = 0;
  return;
}



/* ---- FUN_1138_593a @ 1138:593a  (202 octets) ---- */

bool __stdcall16far FUN_1138_593a(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  long lVar6;
  undefined4 local_8;
  
  uVar4 = (undefined2)((ulong)param_1 >> 0x10);
  iVar3 = (int)param_2;
  uVar5 = (undefined2)((ulong)param_2 >> 0x10);
  if ((*(byte *)((int)param_1 + 0x18) & 0x10) == 0) {
    local_8 = param_1;
    while( true ) {
      if ((int)local_8 == 0 && local_8._2_2_ == 0) break;
      if ((*(int *)((int)local_8 + 0x40) != 0 || *(int *)((int)local_8 + 0x42) != 0) &&
         (cVar1 = FUN_1130_1b2a((int)*(undefined4 *)((int)local_8 + 0x40),
                                (int)((ulong)*(undefined4 *)((int)local_8 + 0x40) >> 0x10),iVar3,
                                uVar5), cVar1 != '\0')) {
        return true;
      }
      local_8 = CONCAT22(*(undefined2 *)((int)local_8 + 0x1c),*(undefined2 *)((int)local_8 + 0x1a));
    }
    lVar6 = FUN_1140_17a8((int)param_1,uVar4);
    uVar4 = (undefined2)((ulong)lVar6 >> 0x10);
    iVar2 = (int)lVar6;
    if (((lVar6 != 0) && (*(int *)(iVar2 + 0x100) != 0 || *(int *)(iVar2 + 0x102) != 0)) &&
       (cVar1 = FUN_1130_1b2a((int)*(undefined4 *)(iVar2 + 0x100),
                              (int)((ulong)*(undefined4 *)(iVar2 + 0x100) >> 0x10),iVar3,uVar5),
       cVar1 != '\0')) {
      return true;
    }
  }
  lVar6 = FUN_1138_0b8f(*(undefined2 *)(iVar3 + 4),*(undefined2 *)(iVar3 + 6),
                        *(undefined2 *)(iVar3 + 2),0xf16);
  return lVar6 != 0;
}



/* ---- FUN_1138_5a04 @ 1138:5a04  (256 octets) ---- */

void __stdcall16far FUN_1138_5a04(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  long lVar8;
  undefined4 uVar9;
  undefined2 uVar10;
  undefined2 uVar11;
  undefined2 uVar12;
  undefined2 uVar13;
  uint local_4;
  
  uVar6 = (undefined2)((ulong)param_2 >> 0x10);
  iVar4 = (int)param_2;
  uVar7 = (undefined2)((ulong)param_1 >> 0x10);
  iVar5 = (int)param_1;
  cVar2 = FUN_1138_593a(iVar5,uVar7,iVar4,uVar6);
  if (cVar2 == '\0') {
    if ((*(byte *)(iVar5 + 0x18) & 0x10) == 0) {
      iVar1 = *(int *)(iVar4 + 2);
      if (iVar1 == 9) {
        local_4 = 2;
      }
      else if ((((iVar1 == 0x25) || (iVar1 == 0x27)) || (iVar1 == 0x26)) || (iVar1 == 0x28)) {
        local_4 = 1;
      }
      else {
        if (((iVar1 != 0xd) && (iVar1 != 0x2b)) && ((iVar1 != 0x1b && (iVar1 != 3)))) {
          return;
        }
        local_4 = 4;
      }
      lVar8 = FUN_1138_24bb(iVar5,uVar7,0,0,*(undefined2 *)(iVar4 + 2),0xf1e);
      if ((lVar8 == 0) && (uVar3 = FUN_1138_24bb(iVar5,uVar7,0,0,0,0x87), (uVar3 & local_4) == 0)) {
        *(undefined2 *)(iVar4 + 8) = 1;
        *(undefined2 *)(iVar4 + 10) = 0;
        uVar13 = 0xf05;
        uVar12 = *(undefined2 *)(iVar4 + 2);
        uVar11 = *(undefined2 *)(iVar4 + 6);
        uVar10 = *(undefined2 *)(iVar4 + 4);
        uVar9 = FUN_1140_17a8(iVar5,uVar7);
        uVar9 = FUN_1138_24bb(uVar9,uVar10,uVar11,uVar12,uVar13);
        *(undefined2 *)(iVar4 + 8) = (int)uVar9;
        *(undefined2 *)(iVar4 + 10) = (int)((ulong)uVar9 >> 0x10);
      }
    }
  }
  else {
    *(undefined2 *)(iVar4 + 8) = 1;
    *(undefined2 *)(iVar4 + 10) = 0;
  }
  return;
}



/* ---- FUN_1138_5b04 @ 1138:5b04  (111 octets) ---- */

void __stdcall16far FUN_1138_5b04(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined4 uVar5;
  
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  if ((*(byte *)((int)param_1 + 0x18) & 0x10) == 0) {
    uVar4 = (undefined2)((ulong)param_2 >> 0x10);
    iVar2 = (int)param_2;
    iVar1 = *(int *)(iVar2 + 2);
    if ((((((iVar1 == 9) || (iVar1 == 0x25)) || (iVar1 == 0x27)) ||
         ((iVar1 == 0x26 || (iVar1 == 0x28)))) ||
        ((iVar1 == 0xd || ((iVar1 == 0x2b || (iVar1 == 0x1b)))))) || (iVar1 == 3)) {
      uVar5 = FUN_1138_24bb((int)param_1,uVar3,0,0,*(undefined2 *)(iVar2 + 2),0xf1e);
      *(undefined2 *)(iVar2 + 8) = (int)uVar5;
      *(undefined2 *)(iVar2 + 10) = (int)((ulong)uVar5 >> 0x10);
    }
  }
  return;
}



/* ---- FUN_1138_5b73 @ 1138:5b73  (116 octets) ---- */

void __stdcall16far FUN_1138_5b73(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined4 uVar6;
  undefined2 uVar7;
  undefined2 uVar8;
  undefined2 uVar9;
  undefined2 uVar10;
  
  uVar4 = (undefined2)((ulong)param_1 >> 0x10);
  iVar3 = (int)param_1;
  if ((*(byte *)(iVar3 + 0x18) & 0x10) == 0) {
    uVar5 = (undefined2)((ulong)param_2 >> 0x10);
    iVar1 = (int)param_2;
    uVar2 = FUN_1138_24bb(iVar3,uVar4,0,0,0,0x87);
    if ((uVar2 & 0x80) == 0) {
      *(undefined2 *)(iVar1 + 8) = 1;
      *(undefined2 *)(iVar1 + 10) = 0;
      uVar10 = 0xf06;
      uVar9 = *(undefined2 *)(iVar1 + 2);
      uVar8 = *(undefined2 *)(iVar1 + 6);
      uVar7 = *(undefined2 *)(iVar1 + 4);
      uVar6 = FUN_1140_17a8(iVar3,uVar4);
      uVar6 = FUN_1138_24bb(uVar6,uVar7,uVar8,uVar9,uVar10);
      *(undefined2 *)(iVar1 + 8) = (int)uVar6;
      *(undefined2 *)(iVar1 + 10) = (int)((ulong)uVar6 >> 0x10);
    }
  }
  return;
}



/* ---- FUN_1138_5be7 @ 1138:5be7  (41 octets) ---- */

void __stdcall16far FUN_1138_5be7(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  undefined2 uVar3;
  
  uVar3 = (undefined2)((ulong)param_2 >> 0x10);
  iVar2 = (int)param_2;
  cVar1 = FUN_1138_593a((int)param_1,(int)((ulong)param_1 >> 0x10),iVar2,uVar3);
  if (cVar1 != '\0') {
    *(undefined2 *)(iVar2 + 8) = 1;
    *(undefined2 *)(iVar2 + 10) = 0;
  }
  return;
}



/* ---- FUN_1138_5c10 @ 1138:5c10  (82 octets) ---- */

void __stdcall16far FUN_1138_5c10(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  undefined2 uVar8;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  if ((*(byte *)((int)param_1 + 0x18) & 0x10) == 0) {
    uVar3 = (undefined2)((ulong)param_2 >> 0x10);
    iVar1 = (int)param_2;
    if (*(int *)(iVar1 + 2) != 0x20) {
      uVar8 = 0xf06;
      uVar7 = *(undefined2 *)(iVar1 + 2);
      uVar6 = *(undefined2 *)(iVar1 + 6);
      uVar5 = *(undefined2 *)(iVar1 + 4);
      uVar4 = FUN_1140_17a8((int)param_1,uVar2);
      uVar4 = FUN_1138_24bb(uVar4,uVar5,uVar6,uVar7,uVar8);
      *(undefined2 *)(iVar1 + 8) = (int)uVar4;
      *(undefined2 *)(iVar1 + 10) = (int)((ulong)uVar4 >> 0x10);
    }
  }
  return;
}



/* ---- FUN_1138_5c62 @ 1138:5c62  (232 octets) ---- */

void __stdcall16far
FUN_1138_5c62(undefined4 param_1,int param_2,int param_3,int param_4,int param_5)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined2 uVar4;
  undefined2 unaff_SS;
  undefined *puVar5;
  undefined2 uVar6;
  undefined local_20 [8];
  undefined2 local_18 [7];
  undefined local_a [8];
  
  uVar4 = (undefined2)((ulong)param_1 >> 0x10);
  iVar3 = (int)param_1;
  if ((((param_5 != *(int *)(iVar3 + 0x1e)) || (param_4 != *(int *)(iVar3 + 0x20))) ||
      (param_3 != *(int *)(iVar3 + 0x22))) || (param_2 != *(int *)(iVar3 + 0x24))) {
    cVar1 = FUN_1138_64fa(iVar3,uVar4);
    if ((cVar1 == '\0') || (iVar2 = ISICONIC(0x1138,*(undefined2 *)(iVar3 + 0xa2)), iVar2 != 0)) {
      *(int *)(iVar3 + 0x1e) = param_5;
      *(int *)(iVar3 + 0x20) = param_4;
      *(int *)(iVar3 + 0x22) = param_3;
      *(int *)(iVar3 + 0x24) = param_2;
      cVar1 = FUN_1138_64fa(iVar3,uVar4);
      if (cVar1 != '\0') {
        local_18[0] = 0x16;
        GETWINDOWPLACEMENT(0x1138,local_18,unaff_SS);
        puVar5 = local_20;
        uVar6 = unaff_SS;
        FUN_1138_1803(iVar3,uVar4);
        FUN_1158_161b(8,local_a,unaff_SS,puVar5,uVar6);
        SETWINDOWPLACEMENT(0x1158,local_18,unaff_SS);
      }
    }
    else {
      SETWINDOWPOS(0x14d0,0x14,param_2,param_3,param_4,param_5,0);
    }
    FUN_1138_1573(iVar3,uVar4);
  }
  return;
}



/* ---- FUN_1138_5d4a @ 1138:5d4a  (78 octets) ---- */

void __stdcall16far FUN_1138_5d4a(undefined4 param_1,undefined2 param_2,undefined2 param_3)

{
  int iVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  int local_4;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = FUN_1138_39fd((int)param_1,uVar2);
  if (-1 < iVar1 + -1) {
    local_4 = 0;
    while( true ) {
      uVar4 = param_2;
      uVar5 = param_3;
      uVar3 = FUN_1138_398f((int)param_1,uVar2,local_4);
      FUN_1158_206a(0x1138,uVar3,uVar4,uVar5);
      if (local_4 == iVar1 + -1) break;
      local_4 = local_4 + 1;
    }
  }
  return;
}



/* ---- FUN_1138_5d9e @ 1138:5d9e  (82 octets) ---- */

void __cdecl16far FUN_1138_5d9e(undefined4 param_1,undefined2 param_2,undefined2 param_3)

{
  undefined2 uVar1;
  undefined2 uVar2;
  undefined2 uStack_a;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  uVar1 = (undefined2)param_1;
  uStack_a = 0x5dab;
  FUN_1138_36c5();
  uStack_a = DAT_1160_1858;
  DAT_1160_1858 = &uStack_a;
  FUN_1138_5d4a(uVar1,uVar2,param_2,param_3);
  FUN_1138_1a69(uVar1,uVar2,param_2,param_3);
  DAT_1160_1858 = (undefined2 *)uStack_a;
  uStack_a = uVar1;
  FUN_1138_36d4();
  return;
}



/* ---- FUN_1138_5df4 @ 1138:5df4  (192 octets) ---- */

void __stdcall16far FUN_1138_5df4(undefined4 *param_1,undefined2 param_2,undefined2 param_3)

{
  undefined2 *puVar1;
  char cVar2;
  undefined2 uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined2 uVar6;
  undefined2 unaff_SS;
  undefined *puVar7;
  undefined local_14 [8];
  undefined2 local_c;
  undefined2 local_a;
  char local_3;
  
  uVar6 = (undefined2)((ulong)param_1 >> 0x10);
  puVar5 = (undefined4 *)param_1;
  cVar2 = FUN_1138_64fa(puVar5,uVar6);
  if (cVar2 != '\0') {
    uVar3 = FUN_1138_62b9(puVar5,uVar6);
    iVar4 = ISWINDOWVISIBLE(0x1138,uVar3);
    if (iVar4 != 0) {
      local_3 = '\x01';
      goto LAB_1138_5e20;
    }
  }
  local_3 = '\0';
LAB_1138_5e20:
  if (local_3 != '\0') {
    FUN_1138_62b9(puVar5,uVar6);
    SETWINDOWPOS(0x1138,0x97,0,0,0,0,0);
  }
  puVar7 = local_14;
  uVar3 = unaff_SS;
  FUN_1138_1803(puVar5,uVar6);
  FUN_1158_161b(8,&local_c,unaff_SS,puVar7,uVar3);
  FUN_1158_206a(0x1158,puVar5,uVar6,param_2,param_3);
  puVar1 = (undefined2 *)((int)*param_1 + 0x4c);
  (*(code *)*puVar1)(0x1158,puVar5,uVar6,*(undefined2 *)(puVar5 + 9),
                     *(undefined2 *)((int)puVar5 + 0x22),local_a,local_c);
  if (local_3 != '\0') {
    FUN_1138_62b9(puVar5,uVar6);
    SETWINDOWPOS(0x1138,0x57,0,0,0,0,0);
  }
  return;
}



/* ---- FUN_1138_5eb4 @ 1138:5eb4  (250 octets) ---- */

void __stdcall16far FUN_1138_5eb4(undefined4 param_1,int param_2,int param_3)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined2 uVar5;
  int iVar6;
  undefined2 uVar7;
  undefined2 unaff_CS;
  undefined4 uVar8;
  int local_6;
  
  uVar7 = (undefined2)((ulong)param_1 >> 0x10);
  iVar6 = (int)param_1;
  if (*(int *)(iVar6 + 0xa2) != 0) {
    unaff_CS = 0x14d0;
    iVar3 = ISWINDOWVISIBLE();
    if (iVar3 != 0) {
      bVar1 = true;
      goto LAB_1138_5ed7;
    }
  }
  bVar1 = false;
LAB_1138_5ed7:
  if (bVar1) {
    SCROLLWINDOW(unaff_CS,0,0,0,0,param_2,param_3);
  }
  iVar3 = FUN_1138_39fd(iVar6,uVar7);
  if (-1 < iVar3 + -1) {
    local_6 = 0;
    while( true ) {
      uVar8 = FUN_1138_398f(iVar6,uVar7,local_6);
      uVar5 = (undefined2)((ulong)uVar8 >> 0x10);
      iVar4 = (int)uVar8;
      cVar2 = FUN_1158_2255(0x5c1,0x1138,uVar8);
      if ((cVar2 == '\0') || (*(int *)(iVar4 + 0xa2) == 0)) {
        *(int *)(iVar4 + 0x1e) = *(int *)(iVar4 + 0x1e) + param_3;
        *(int *)(iVar4 + 0x20) = *(int *)(iVar4 + 0x20) + param_2;
      }
      else if (!bVar1) {
        SETWINDOWPOS(0x1158,0x14,*(undefined2 *)(iVar4 + 0x24),*(undefined2 *)(iVar4 + 0x22),
                     *(int *)(iVar4 + 0x20) + param_2,*(int *)(iVar4 + 0x1e) + param_3,0);
      }
      if (local_6 == iVar3 + -1) break;
      local_6 = local_6 + 1;
    }
  }
  FUN_1138_36f9(iVar6,uVar7);
  return;
}



/* ---- FUN_1138_5fae @ 1138:5fae  (39 octets) ---- */

void __stdcall16far FUN_1138_5fae(undefined4 param_1)

{
  undefined2 *puVar1;
  int iVar2;
  undefined2 uVar3;
  
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  iVar2 = (int)param_1;
  if (*(int *)(iVar2 + 0x1a) != 0 || *(int *)(iVar2 + 0x1c) != 0) {
    puVar1 = (undefined2 *)((int)*(undefined4 *)*(undefined4 *)(iVar2 + 0x1a) + 0x74);
    (*(code *)*puVar1)();
  }
  return;
}



/* ---- FUN_1138_5fd5 @ 1138:5fd5  (186 octets) ---- */

void __stdcall16far FUN_1138_5fd5(undefined4 param_1,char param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined2 uVar4;
  undefined2 unaff_CS;
  undefined2 local_6;
  
  uVar4 = (undefined2)((ulong)param_1 >> 0x10);
  iVar3 = (int)param_1;
  if (*(int *)(iVar3 + 0x1a) != 0 || *(int *)(iVar3 + 0x1c) != 0) {
    uVar1 = *(undefined4 *)((int)*(undefined4 *)(iVar3 + 0x1a) + 0x96);
    unaff_CS = 0x1148;
    iVar2 = FUN_1148_0e58((int)uVar1,(int)((ulong)uVar1 >> 0x10),iVar3,uVar4);
    if (-1 < iVar2) {
      if (param_2 == '\0') {
        local_6 = 0;
      }
      else {
        uVar1 = *(undefined4 *)((int)*(undefined4 *)(iVar3 + 0x1a) + 0x96);
        local_6 = *(int *)((int)uVar1 + 8) + -1;
      }
      if (local_6 != iVar2) {
        uVar1 = *(undefined4 *)((int)*(undefined4 *)(iVar3 + 0x1a) + 0x96);
        FUN_1148_0c94((int)uVar1,(int)((ulong)uVar1 >> 0x10),iVar2);
        uVar1 = *(undefined4 *)((int)*(undefined4 *)(iVar3 + 0x1a) + 0x96);
        unaff_CS = 0x1148;
        FUN_1148_0ea7((int)uVar1,(int)((ulong)uVar1 >> 0x10),iVar3,uVar4,local_6);
      }
    }
  }
  if (*(int *)(iVar3 + 0xa2) != 0) {
    SETWINDOWPOS(unaff_CS,3,0,0,0,0,*(undefined2 *)(param_2 * 2 + 0x1500));
  }
  return;
}



/* ---- FUN_1138_6108 @ 1138:6108  (50 octets) ---- */

void __stdcall16far FUN_1138_6108(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  undefined2 uVar3;
  
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  iVar2 = (int)param_1;
  cVar1 = FUN_1138_64fa(iVar2,uVar3);
  if (cVar1 != '\0') {
    INVALIDATERECT(0x1138,(*(byte *)(iVar2 + 0x26) & 0x40) == 0,0,0,*(undefined2 *)(iVar2 + 0xa2));
  }
  return;
}



/* ---- FUN_1138_613a @ 1138:613a  (34 octets) ---- */

void __stdcall16far FUN_1138_613a(undefined4 param_1)

{
  char cVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  cVar1 = FUN_1138_64fa((int)param_1,uVar2);
  if (cVar1 != '\0') {
    UPDATEWINDOW(0x1138,*(undefined2 *)((int)param_1 + 0xa2));
  }
  return;
}



/* ---- FUN_1138_615c @ 1138:615c  (31 octets) ---- */

void __stdcall16far FUN_1138_615c(undefined4 *param_1)

{
  undefined2 *puVar1;
  
  puVar1 = (undefined2 *)((int)*param_1 + 0x44);
  (*(code *)*puVar1)();
  puVar1 = (undefined2 *)((int)*param_1 + 0x50);
  (*(code *)*puVar1)();
  return;
}



/* ---- FUN_1138_617b @ 1138:617b  (73 octets) ---- */

void __stdcall16far FUN_1138_617b(undefined4 param_1)

{
  undefined4 uVar1;
  undefined2 uVar2;
  undefined2 unaff_SS;
  undefined *puVar3;
  undefined2 uVar4;
  undefined local_12 [8];
  undefined local_a [8];
  
  puVar3 = local_12;
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  uVar4 = unaff_SS;
  FUN_1138_1803((int)param_1,uVar2);
  FUN_1158_161b(8,local_a,unaff_SS,puVar3,uVar4);
  INFLATERECT(0x1158,1,1,local_a);
  uVar1 = *(undefined4 *)((int)param_1 + 0x1a);
  INVALIDATERECT(0x14d0,1,local_a,unaff_SS,*(undefined2 *)((int)uVar1 + 0xa2));
  return;
}



/* ---- FUN_1138_61c4 @ 1138:61c4  (113 octets) ---- */

undefined2 __stdcall16far FUN_1138_61c4(uint param_1,undefined2 param_2)

{
  uint *puVar1;
  long lVar2;
  uint local_8;
  undefined2 local_6;
  undefined local_3;
  
  local_3 = 0;
  lVar2 = FUN_1140_17a8(param_1,param_2);
  local_8 = (uint)lVar2 | (uint)((ulong)lVar2 >> 0x10);
  if (local_8 != 0) {
    local_8 = param_1;
    local_6 = param_2;
    while (lVar2 != CONCAT22(local_6,local_8)) {
      if ((*(char *)(local_8 + 0x29) == '\0') || (*(char *)(local_8 + 0x2a) == '\0'))
      goto LAB_1138_622e;
      puVar1 = (uint *)(local_8 + 0x1a);
      local_6 = *(undefined2 *)(local_8 + 0x1c);
      local_8 = *puVar1;
    }
    local_3 = 1;
  }
LAB_1138_622e:
  return CONCAT11((char)(local_8 >> 8),local_3);
}



/* ---- FUN_1138_6235 @ 1138:6235  (35 octets) ---- */

void __stdcall16far FUN_1138_6235(undefined2 param_1,undefined2 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_1140_1801(param_1,param_2);
  FUN_1140_40ea(uVar1,param_1,param_2);
  return;
}



/* ---- FUN_1138_6258 @ 1138:6258  (46 octets) ---- */

undefined2 __stdcall16far FUN_1138_6258(undefined4 param_1)

{
  int iVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  if ((*(int *)((int)param_1 + 0xa2) != 0) &&
     (iVar1 = GETFOCUS(), iVar1 == *(int *)((int)param_1 + 0xa2))) {
    return 1;
  }
  return 0;
}



/* ---- FUN_1138_6286 @ 1138:6286  (51 octets) ---- */

void __stdcall16far FUN_1138_6286(undefined4 *param_1)

{
  undefined2 *puVar1;
  undefined4 *puVar2;
  undefined2 uVar3;
  undefined2 unaff_CS;
  
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  puVar2 = (undefined4 *)param_1;
  if (*(int *)((int)puVar2 + 0xa2) == 0) {
    if (*(int *)((int)puVar2 + 0x1a) != 0 || *(int *)(puVar2 + 7) != 0) {
      unaff_CS = 0x1138;
      FUN_1138_6286((int)*(undefined4 *)((int)puVar2 + 0x1a),
                    (int)((ulong)*(undefined4 *)((int)puVar2 + 0x1a) >> 0x10));
    }
    puVar1 = (undefined2 *)((int)*param_1 + 0x54);
    (*(code *)*puVar1)(unaff_CS,puVar2,uVar3);
  }
  return;
}



/* ---- FUN_1138_62b9 @ 1138:62b9  (32 octets) ---- */

undefined2 __stdcall16far FUN_1138_62b9(undefined4 param_1)

{
  undefined2 uVar1;
  
  uVar1 = (undefined2)((ulong)param_1 >> 0x10);
  FUN_1138_6286((int)param_1,uVar1);
  return *(undefined2 *)((int)param_1 + 0xa2);
}



/* ---- FUN_1138_62d9 @ 1138:62d9  (45 octets) ---- */

undefined4 __stdcall16far FUN_1138_62d9(undefined4 param_1)

{
  undefined2 unaff_SS;
  undefined2 local_6;
  undefined2 local_4;
  
  local_6 = 0;
  local_4 = 0;
  FUN_1138_62b9((int)param_1,(int)((ulong)param_1 >> 0x10));
  CLIENTTOSCREEN(0x1138,&local_6,unaff_SS);
  return CONCAT22(local_4,local_6);
}



/* ---- FUN_1138_6306 @ 1138:6306  (28 octets) ---- */

void __stdcall16far FUN_1138_6306(undefined4 param_1,undefined4 param_2)

{
  FUN_1138_62b9((int)param_1,(int)((ulong)param_1 >> 0x10));
  GETCLIENTRECT(0x1138,(int)param_2,(int)((ulong)param_2 >> 0x10));
  return;
}



/* ---- FUN_1138_6322 @ 1138:6322  (50 octets) ---- */

void __stdcall16far FUN_1138_6322(undefined4 param_1,char param_2)

{
  int iVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  if (*(char *)(iVar1 + 0xa5) != param_2) {
    *(char *)(iVar1 + 0xa5) = param_2;
    *(undefined *)(iVar1 + 0xa6) = 0;
    FUN_1138_24bb(iVar1,uVar2,0,0,0,0xf10);
  }
  return;
}



/* ---- FUN_1138_6354 @ 1138:6354  (28 octets) ---- */

uint __stdcall16far FUN_1138_6354(undefined4 param_1)

{
  uint in_AX;
  uint uVar1;
  
  uVar1 = in_AX & 0xff00;
  if (*(char *)((int)param_1 + 0xa6) == '\0') {
    uVar1 = uVar1 + 1;
  }
  return uVar1;
}



/* ---- FUN_1138_6370 @ 1138:6370  (54 octets) ---- */

void __stdcall16far FUN_1138_6370(undefined4 param_1,char param_2)

{
  int iVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  if ((*(char *)(iVar1 + 0xa6) != param_2) &&
     (*(char *)(iVar1 + 0xa6) = param_2, *(int *)(iVar1 + 0x1a) != 0 || *(int *)(iVar1 + 0x1c) != 0)
     ) {
    FUN_1138_24bb(iVar1,uVar2,0,0,0,0xf11);
  }
  return;
}



/* ---- FUN_1138_63a6 @ 1138:63a6  (56 octets) ---- */

undefined2 __stdcall16far FUN_1138_63a6(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 local_4;
  
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  iVar2 = (int)param_1;
  if (*(int *)(iVar2 + 0x1a) == 0 && *(int *)(iVar2 + 0x1c) == 0) {
    local_4 = 0xffff;
  }
  else {
    uVar1 = *(undefined4 *)((int)*(undefined4 *)(iVar2 + 0x1a) + 0x9a);
    local_4 = FUN_1148_0e58((int)uVar1,(int)((ulong)uVar1 >> 0x10),iVar2,uVar3);
  }
  return local_4;
}



/* ---- FUN_1138_63de @ 1138:63de  (130 octets) ---- */

void __stdcall16far FUN_1138_63de(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined2 uVar5;
  
  uVar5 = (undefined2)((ulong)param_1 >> 0x10);
  iVar4 = (int)param_1;
  iVar3 = FUN_1138_63a6(iVar4,uVar5);
  if (-1 < iVar3) {
    uVar2 = *(undefined4 *)((int)*(undefined4 *)(iVar4 + 0x1a) + 0x9a);
    iVar1 = *(int *)((int)uVar2 + 8);
    if (param_2 < 0) {
      param_2 = 0;
    }
    if (iVar1 <= param_2) {
      param_2 = iVar1 + -1;
    }
    if (param_2 != iVar3) {
      uVar2 = *(undefined4 *)((int)*(undefined4 *)(iVar4 + 0x1a) + 0x9a);
      FUN_1148_0c94((int)uVar2,(int)((ulong)uVar2 >> 0x10),iVar3);
      uVar2 = *(undefined4 *)((int)*(undefined4 *)(iVar4 + 0x1a) + 0x9a);
      FUN_1148_0ea7((int)uVar2,(int)((ulong)uVar2 >> 0x10),iVar4,uVar5,param_2);
    }
  }
  return;
}



/* ---- FUN_1138_6460 @ 1138:6460  (40 octets) ---- */

void __stdcall16far FUN_1138_6460(undefined4 param_1,undefined2 param_2)

{
  int iVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  if ((*(byte *)(iVar1 + 0x28) & 8) == 0) {
    FUN_1138_63de(iVar1,uVar2,param_2);
  }
  else {
    *(undefined2 *)(iVar1 + 0xa8) = param_2;
  }
  return;
}



/* ---- FUN_1138_6488 @ 1138:6488  (114 octets) ---- */

void __stdcall16far FUN_1138_6488(undefined4 param_1,char param_2)

{
  char cVar1;
  int iVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  undefined2 local_4;
  
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  iVar2 = (int)param_1;
  if (*(char *)(iVar2 + 0xa4) != param_2) {
    *(char *)(iVar2 + 0xa4) = param_2;
    cVar1 = FUN_1138_64fa(iVar2,uVar3);
    if (cVar1 != '\0') {
      uVar4 = GETWINDOWLONG(0x1138,0xfff0);
      local_4 = (uint)((ulong)uVar4 >> 0x10) & 0xfffe;
      if (param_2 != '\0') {
        local_4 = local_4 | 1;
      }
      SETWINDOWLONG(0x14d0,(int)uVar4,local_4,0xfff0);
    }
  }
  return;
}



/* ---- FUN_1138_64fa @ 1138:64fa  (28 octets) ---- */

uint __stdcall16far FUN_1138_64fa(undefined4 param_1)

{
  uint in_AX;
  uint uVar1;
  
  uVar1 = in_AX & 0xff00;
  if (*(int *)((int)param_1 + 0xa2) != 0) {
    uVar1 = uVar1 + 1;
  }
  return uVar1;
}



/* ---- FUN_1138_6516 @ 1138:6516  (250 octets) ---- */

void __stdcall16far FUN_1138_6516(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  undefined2 unaff_SS;
  undefined2 local_22 [7];
  undefined local_14 [8];
  int local_c;
  int local_a;
  int local_8;
  int local_6;
  int local_4;
  
  uVar4 = (undefined2)((ulong)param_1 >> 0x10);
  iVar3 = (int)param_1;
  iVar2 = ISICONIC();
  if (iVar2 == 0) {
    uVar6 = 0x14d0;
    GETWINDOWRECT(0x14d0,&local_c,unaff_SS);
  }
  else {
    local_22[0] = 0x16;
    GETWINDOWPLACEMENT(0x14d0,local_22,unaff_SS);
    uVar6 = 0x1158;
    FUN_1158_161b(8,&local_c,unaff_SS,local_14,unaff_SS);
  }
  local_4 = 0;
  if (*(int *)(iVar3 + 0x1a) == 0 && *(int *)(iVar3 + 0x1c) == 0) {
    uVar6 = 0x1158;
    cVar1 = FUN_1158_2255(0x4fb,0x1140,iVar3,uVar4);
    if (((cVar1 != '\0') && (*(char *)(iVar3 + 0xf2) == '\x01')) &&
       (uVar5 = (undefined2)((ulong)DAT_1160_2c2a >> 0x10), iVar2 = (int)DAT_1160_2c2a,
       *(int *)(iVar2 + 0x20) != 0 || *(int *)(iVar2 + 0x22) != 0)) {
      local_4 = *(int *)((int)*(undefined4 *)(iVar2 + 0x20) + 0x10e);
    }
  }
  else {
    local_4 = *(int *)((int)*(undefined4 *)(iVar3 + 0x1a) + 0xa2);
  }
  if (local_4 != 0) {
    SCREENTOCLIENT(uVar6,&local_c,unaff_SS);
    SCREENTOCLIENT(0x14d0,&local_8,unaff_SS);
  }
  *(int *)(iVar3 + 0x1e) = local_c;
  *(int *)(iVar3 + 0x20) = local_a;
  *(int *)(iVar3 + 0x22) = local_8 - local_c;
  *(int *)(iVar3 + 0x24) = local_6 - local_a;
  return;
}



/* ---- FUN_1138_6610 @ 1138:6610  (115 octets) ---- */

void __stdcall16far FUN_1138_6610(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined4 uVar5;
  int local_4;
  
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  iVar2 = (int)param_1;
  if ((*(int *)(iVar2 + 0x9a) != 0 || *(int *)(iVar2 + 0x9c) != 0) &&
     (iVar1 = *(int *)((int)*(undefined4 *)(iVar2 + 0x9a) + 8) + -1, -1 < iVar1)) {
    local_4 = 0;
    while( true ) {
      uVar5 = FUN_1148_0dd0((int)*(undefined4 *)(iVar2 + 0x9a),
                            (int)((ulong)*(undefined4 *)(iVar2 + 0x9a) >> 0x10),local_4);
      uVar4 = (undefined2)((ulong)param_2 >> 0x10);
      FUN_1148_0c2b((int)param_2,uVar4,uVar5);
      FUN_1138_6610(uVar5,(int)param_2,uVar4);
      if (local_4 == iVar1) break;
      local_4 = local_4 + 1;
    }
  }
  return;
}



/* ---- FUN_1138_6689 @ 1138:6689  (315 octets) ---- */

void __cdecl16far
FUN_1138_6689(undefined4 param_1,char param_2,char param_3,char param_4,undefined4 param_5)

{
  undefined2 *puVar1;
  long lVar2;
  undefined2 uVar3;
  char cVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined2 uVar7;
  undefined2 uVar8;
  int iVar9;
  undefined4 *puVar10;
  long lVar11;
  int local_a;
  int local_8;
  
  lVar2 = 0;
  puVar10 = (undefined4 *)FUN_1158_1f50();
  uVar3 = DAT_1160_1858;
  uVar7 = (undefined2)((ulong)puVar10 >> 0x10);
  puVar5 = (undefined4 *)puVar10;
  DAT_1160_1858 = &stack0xffea;
  iVar9 = (int)((ulong)param_1 >> 0x10);
  FUN_1138_6610((int)param_1,iVar9,puVar10);
  if (0 < *(int *)(puVar5 + 2)) {
    local_a = FUN_1148_0e58(puVar10,(undefined2)param_5,param_5._2_2_);
    if (local_a == -1) {
      if (param_4 == '\0') {
        local_a = 0;
      }
      else {
        local_a = *(int *)(puVar5 + 2) + -1;
      }
    }
    local_8 = local_a;
    do {
      if (param_4 == '\0') {
        if (local_8 == 0) {
          local_8 = *(int *)(puVar5 + 2);
        }
        local_8 = local_8 + -1;
      }
      else {
        local_8 = local_8 + 1;
        if (local_8 == *(int *)(puVar5 + 2)) {
          local_8 = 0;
        }
      }
      lVar11 = FUN_1148_0dd0(puVar10,local_8);
      uVar8 = (undefined2)((ulong)lVar11 >> 0x10);
      iVar6 = (int)lVar11;
      cVar4 = FUN_1138_61c4(lVar11);
      if (((cVar4 != '\0') && ((param_3 == '\0' || (*(char *)(iVar6 + 0xa4) != '\0')))) &&
         ((param_2 == '\0' ||
          ((*(int *)(iVar6 + 0x1c) == iVar9 && (*(int *)(iVar6 + 0x1a) == (int)param_1)))))) {
        lVar2 = lVar11;
      }
    } while ((lVar2 == 0) && (local_8 != local_a));
  }
  puVar1 = (undefined2 *)((int)*puVar10 + -4);
  DAT_1160_1858 = (undefined *)uVar3;
  (*(code *)*puVar1)(0x1138,puVar5);
  return;
}



/* ---- FUN_1138_67ce @ 1138:67ce  (67 octets) ---- */

void __stdcall16far
FUN_1138_67ce(undefined4 param_1,char param_2,undefined param_3,undefined4 *param_4)

{
  undefined2 *puVar1;
  undefined2 in_AX;
  byte bVar4;
  int iVar2;
  undefined4 *puVar3;
  int in_DX;
  
  bVar4 = (byte)((uint)in_AX >> 8);
  iVar2 = (uint)bVar4 * 0x100;
  if (param_2 == '\0') {
    iVar2 = iVar2 + 1;
  }
  puVar3 = (undefined4 *)
           FUN_1138_6689((int)param_1,(int)((ulong)param_1 >> 0x10),iVar2,CONCAT11(bVar4,param_2),
                         CONCAT11(bVar4,param_3),(undefined4 *)param_4,param_4._2_2_);
  param_4 = (undefined4 *)CONCAT22(in_DX,puVar3);
  if (puVar3 != (undefined4 *)0x0 || in_DX != 0) {
    puVar1 = (undefined2 *)((int)*param_4 + 0x78);
    (*(code *)*puVar1)(0x1138,puVar3,in_DX);
  }
  return;
}



/* ---- FUN_1138_6811 @ 1138:6811  (117 octets) ---- */

void __stdcall16far FUN_1138_6811(undefined4 param_1)

{
  long lVar1;
  int local_a;
  int local_8;
  
  lVar1 = FUN_1140_17a8((undefined2)param_1,param_1._2_2_);
  local_8 = (int)((ulong)lVar1 >> 0x10);
  if (lVar1 != 0) {
    local_a = FUN_1138_6689((undefined2)param_1,param_1._2_2_,0,1,1,0,0);
    if (local_a == 0 && local_8 == 0) {
      local_a = FUN_1138_6689((undefined2)param_1,param_1._2_2_,0,0,1,0,0);
    }
    if (local_a != 0 || local_8 != 0) {
      FUN_1140_3fd0(lVar1,local_a,local_8);
    }
  }
  return;
}



/* ---- FUN_1138_6886 @ 1138:6886  (106 octets) ---- */

undefined4 __stdcall16far
FUN_1138_6886(undefined4 param_1,char param_2,undefined2 param_3,undefined2 param_4)

{
  undefined extraout_AH;
  int iVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  undefined2 uStack_a;
  
  if (param_2 != '\0') {
    FUN_1158_1fe2();
  }
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  FUN_1138_139b(iVar1,uVar2,0,param_3,param_4);
  uVar3 = FUN_1128_17b8(0x96,0x1138,CONCAT11(extraout_AH,1));
  *(undefined2 *)(iVar1 + 0x8a) = (int)uVar3;
  *(undefined2 *)(iVar1 + 0x8c) = (int)((ulong)uVar3 >> 0x10);
  FUN_1138_1364((int)*(undefined4 *)(iVar1 + 0x8a),
                (int)((ulong)*(undefined4 *)(iVar1 + 0x8a) >> 0x10),iVar1,uVar2);
  if (param_2 != '\0') {
    DAT_1160_1858 = uStack_a;
  }
  return param_1;
}



/* ---- FUN_1138_68f0 @ 1138:68f0  (46 octets) ---- */

void __stdcall16far FUN_1138_68f0(undefined4 param_1,char param_2)

{
  undefined4 uVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  uVar1 = *(undefined4 *)((int)param_1 + 0x8a);
  FUN_1158_1f7f((int)uVar1,(int)((ulong)uVar1 >> 0x10));
  FUN_1138_1458((int)param_1,uVar2,0);
  if (param_2 != '\0') {
    FUN_1158_200f();
  }
  return;
}



/* ---- FUN_1138_6980 @ 1138:6980  (7 octets) ---- */

void __stdcall16far FUN_1138_6980(void)

{
  return;
}



/* ---- FUN_1138_6a21 @ 1138:6a21  (49 octets) ---- */

void __stdcall16far FUN_1138_6a21(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_2 >> 0x10);
  iVar1 = (int)param_2;
  FUN_1138_3b29((int)param_1,(int)((ulong)param_1 >> 0x10),iVar1,uVar2);
  *(undefined2 *)(iVar1 + 4) = 0;
  *(undefined2 *)(iVar1 + 6) = 0x8880;
  *(uint *)(iVar1 + 0x1a) = *(uint *)(iVar1 + 0x1a) | 0x800;
  return;
}



/* ---- FUN_1138_6ab7 @ 1138:6ab7  (104 octets) ---- */

undefined __stdcall16far FUN_1138_6ab7(undefined2 param_1_00,undefined2 param_2,undefined4 param_1)

{
  int iVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  if ((((((*(uint *)(iVar1 + 2) < 0x100) || (0x108 < *(uint *)(iVar1 + 2))) &&
        (*(int *)(iVar1 + 2) != 0xf00)) &&
       ((*(int *)(iVar1 + 2) != 0xf01 && (*(int *)(iVar1 + 2) != 0xf16)))) &&
      ((*(int *)(iVar1 + 2) != 0xf17 && (*(int *)(iVar1 + 2) != 0x111)))) &&
     ((*(uint *)(iVar1 + 2) < 0x201 || (0x209 < *(uint *)(iVar1 + 2))))) {
    return 0;
  }
  return 1;
}



/* ---- FUN_1138_6b1f @ 1138:6b1f  (17 octets) ---- */

void __stdcall16far FUN_1138_6b1f(undefined4 param_1)

{
  FUN_1138_3fee((int)param_1,(int)((ulong)param_1 >> 0x10));
  return;
}



/* ---- FUN_1138_6ba4 @ 1138:6ba4  (206 octets) ---- */

void __stdcall16far FUN_1138_6ba4(undefined4 param_1,undefined4 param_2,undefined *param_3)

{
  undefined *puVar1;
  int *piVar2;
  int iVar3;
  undefined *puVar4;
  int *piVar5;
  int iVar6;
  undefined2 uVar7;
  undefined2 unaff_SS;
  int local_a;
  int local_8;
  int local_4;
  
  piVar5 = &local_a;
  puVar4 = (undefined *)param_3;
  for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
    piVar2 = piVar5;
    piVar5 = (int *)((int)piVar5 + 1);
    puVar1 = puVar4;
    puVar4 = puVar4 + 1;
    *(undefined *)piVar2 = *puVar1;
  }
  uVar7 = (undefined2)((ulong)param_1 >> 0x10);
  iVar6 = (int)param_1;
  FUN_1138_1d8c(iVar6,uVar7,(int)param_2,(int)((ulong)param_2 >> 0x10));
  FUN_1138_1849(iVar6,uVar7,&local_a,unaff_SS);
  iVar3 = FUN_1140_60a5((int)DAT_1160_2c2e,(int)((ulong)DAT_1160_2c2e >> 0x10));
  if (iVar3 < local_8 + *(int *)(iVar6 + 0x24)) {
    local_8 = FUN_1140_60a5((int)DAT_1160_2c2e,(int)((ulong)DAT_1160_2c2e >> 0x10));
    local_8 = local_8 - *(int *)(iVar6 + 0x24);
  }
  iVar3 = FUN_1140_60ba((int)DAT_1160_2c2e,(int)((ulong)DAT_1160_2c2e >> 0x10));
  if (iVar3 < local_a + *(int *)(iVar6 + 0x22)) {
    local_a = FUN_1140_60ba((int)DAT_1160_2c2e,(int)((ulong)DAT_1160_2c2e >> 0x10));
    local_a = local_a - *(int *)(iVar6 + 0x22);
  }
  if (local_a < 0) {
    local_a = 0;
  }
  if (local_4 < 0) {
    local_4 = 0;
  }
  FUN_1138_62b9(iVar6,uVar7);
  SETWINDOWPOS(0x1138,0x51,0,0,local_8,local_a,0xffff);
  return;
}



/* ---- FUN_1138_6c72 @ 1138:6c72  (106 octets) ---- */

undefined4 __stdcall16far
FUN_1138_6c72(undefined4 param_1,char param_2,undefined2 param_3,undefined2 param_4)

{
  undefined extraout_AH;
  int iVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  undefined2 uStack_a;
  
  if (param_2 != '\0') {
    FUN_1158_1fe2();
  }
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  FUN_1138_2e61(iVar1,uVar2,0,param_3,param_4);
  uVar3 = FUN_1128_17b8(0x96,0x1138,CONCAT11(extraout_AH,1));
  *(undefined2 *)(iVar1 + 0xd8) = (int)uVar3;
  *(undefined2 *)(iVar1 + 0xda) = (int)((ulong)uVar3 >> 0x10);
  FUN_1138_1364((int)*(undefined4 *)(iVar1 + 0xd8),
                (int)((ulong)*(undefined4 *)(iVar1 + 0xd8) >> 0x10),iVar1,uVar2);
  if (param_2 != '\0') {
    DAT_1160_1858 = uStack_a;
  }
  return param_1;
}



/* ---- FUN_1138_6cdc @ 1138:6cdc  (46 octets) ---- */

void __stdcall16far FUN_1138_6cdc(undefined4 param_1,char param_2)

{
  undefined4 uVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  uVar1 = *(undefined4 *)((int)param_1 + 0xd8);
  FUN_1158_1f7f((int)uVar1,(int)((ulong)uVar1 >> 0x10));
  FUN_1138_2efc((int)param_1,uVar2,0);
  if (param_2 != '\0') {
    FUN_1158_200f();
  }
  return;
}



/* ---- FUN_1138_6d0a @ 1138:6d0a  (22 octets) ---- */

void __stdcall16far FUN_1138_6d0a(undefined4 param_1,undefined4 param_2)

{
  FUN_1138_46cb((int)param_1,(int)((ulong)param_1 >> 0x10),(int)param_2,
                (int)((ulong)param_2 >> 0x10));
  return;
}



/* ---- FUN_1138_6d77 @ 1138:6d77  (7 octets) ---- */

void __stdcall16far FUN_1138_6d77(void)

{
  return;
}



/* ---- FUN_1138_6d7e @ 1138:6d7e  (45 octets) ---- */

void __cdecl16far FUN_1138_6d7e(void)

{
  FUN_1158_1f7f((int)DAT_1160_2c2a,(int)((ulong)DAT_1160_2c2a >> 0x10));
  FUN_1158_1f7f((int)DAT_1160_2c2e,(int)((ulong)DAT_1160_2c2e >> 0x10));
  GLOBALDELETEATOM(0x1158,DAT_1160_2c0e);
  GLOBALDELETEATOM(0x14d0,DAT_1160_2c10);
  return;
}



/* ---- FUN_1138_6dab @ 1138:6dab  (312 octets) ---- */

void __cdecl16near FUN_1138_6dab(void)

{
  undefined extraout_AH;
  undefined2 unaff_SS;
  undefined2 uVar1;
  undefined2 local_1e;
  undefined2 local_1c;
  undefined local_1a;
  undefined local_16 [16];
  undefined2 *local_6;
  
  if (DAT_1160_1876 != 0) {
    uVar1 = 0x60;
    SETMESSAGEQUEUE();
    SETHANDLECOUNT(0x14d0,0xff,uVar1);
    _local_6 = (undefined2 *)CONCAT22(unaff_SS,(undefined2 *)0x28);
    *_local_6 = 0x4343;
    *(undefined2 *)0x2a = 0x5450;
    *(undefined2 *)&DAT_1160_002c = 0;
    *(undefined2 *)&DAT_1160_002e = 0;
  }
  local_1e = DAT_1160_188c;
  local_1c = 0;
  local_1a = 0;
  uVar1 = FUN_1150_0fa3(0,&local_1e,unaff_SS,0x1504,0x1160,local_16,unaff_SS);
  DAT_1160_2c0e = GLOBALADDATOM(0x1150,uVar1);
  local_1e = DAT_1160_188c;
  local_1c = 0;
  local_1a = 0;
  uVar1 = FUN_1150_0fa3(0,&local_1e,unaff_SS,0x1513,0x1160,local_16,unaff_SS);
  DAT_1160_2c10 = GLOBALADDATOM(0x1150,uVar1);
  DAT_1160_2c26 = FUN_1158_1f50(0x2a3,0x1148,1);
  FUN_1148_0fd8(DAT_1160_2c26,4);
  DAT_1160_2c2e = FUN_1140_5f80(0xd30,0x1140,CONCAT11(extraout_AH,1),0,0);
  DAT_1160_2c2a = FUN_1140_6455(0xda3,0x1140,1,0,0);
  FUN_1140_78a2(DAT_1160_2c2a,1);
  FUN_1150_0574(0x6d7e,0x1138);
  FUN_1148_0a36(0xbd1,0x1138,0xc3b,0x1138,100,0x1138);
  return;
}



/* ---- FUN_1138_6ee3 @ 1138:6ee3  (29 octets) ---- */

void __cdecl16far FUN_1138_6ee3(void)

{
  uint uVar1;
  
  FUN_1128_6fd9();
  FUN_1138_6dab();
  uVar1 = GETVERSION(0x1128);
  DAT_1160_2c0c = 0x5f02 < uVar1;
  return;
}




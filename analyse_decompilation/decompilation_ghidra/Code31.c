/* Simstrat (FR).EXE - segment Code31 - 83 fonctions
   Decompile par Ghidra 11.2.1 (x86 16 bits, chargeur NE). */

/* ---- FUN_10f0_0b39 @ 10f0:0b39  (166 octets) ---- */

undefined4 * __stdcall16far FUN_10f0_0b39(undefined4 param_1)

{
  undefined2 *puVar1;
  undefined4 *puVar2;
  undefined2 uVar3;
  undefined4 *puVar4;
  
  puVar4 = (undefined4 *)FUN_1110_1f27(0x9e1,0x10f0,1,(undefined2)param_1,param_1._2_2_);
  uVar3 = (undefined2)((ulong)puVar4 >> 0x10);
  puVar2 = (undefined4 *)puVar4;
  *(undefined2 *)((int)puVar2 + 0x7a) = 0xebe;
  *(undefined2 *)(puVar2 + 0x1f) = 0x10f0;
  *(undefined2 *)((int)puVar2 + 0x7e) = (undefined2)param_1;
  *(undefined2 *)(puVar2 + 0x20) = param_1._2_2_;
  *(undefined2 *)((int)puVar2 + 0x4a) = 0xe0b;
  *(undefined2 *)(puVar2 + 0x13) = 0x10f0;
  *(undefined2 *)((int)puVar2 + 0x4e) = (undefined2)param_1;
  *(undefined2 *)(puVar2 + 0x14) = param_1._2_2_;
  FUN_1138_1c77(puVar4,1);
  FUN_1138_1cb8(puVar4,1);
  *(undefined *)((int)puVar2 + 0xa1) = 2;
  FUN_1110_23bf(puVar4,1);
  puVar1 = (undefined2 *)((int)*puVar4 + 0x3c);
  (*(code *)*puVar1)(0x1110,puVar4,(undefined2)param_1,param_1._2_2_);
  return puVar4;
}



/* ---- FUN_10f0_0bdf @ 10f0:0bdf  (145 octets) ---- */

void __stdcall16far
FUN_10f0_0bdf(undefined4 param_1,undefined2 param_2,undefined2 param_3_00,int *param_3)

{
  undefined2 *puVar1;
  int iVar2;
  undefined2 uVar3;
  
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  iVar2 = (int)param_1;
  if ((*(int *)(iVar2 + 0xd8) != 0 || *(int *)(iVar2 + 0xda) != 0) &&
     ((*(byte *)(iVar2 + 0x18) & 1) == 0)) {
    if (*param_3 < 0xf) {
      *param_3 = 0xf;
    }
    puVar1 = (undefined2 *)((int)*(undefined4 *)*(undefined4 *)(iVar2 + 0xd8) + 0x4c);
    (*(code *)*puVar1)();
    puVar1 = (undefined2 *)((int)*(undefined4 *)*(undefined4 *)(iVar2 + 0xdc) + 0x4c);
    (*(code *)*puVar1)();
  }
  return;
}



/* ---- FUN_10f0_0c70 @ 10f0:0c70  (62 octets) ---- */

void __stdcall16far
FUN_10f0_0c70(undefined4 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4,
             undefined2 param_5)

{
  undefined2 uVar1;
  undefined2 unaff_SS;
  undefined2 local_6;
  undefined2 local_4;
  
  local_4 = param_3;
  local_6 = param_2;
  uVar1 = (undefined2)((ulong)param_1 >> 0x10);
  FUN_10f0_0bdf((int)param_1,uVar1,&local_6,unaff_SS,&local_4,unaff_SS);
  FUN_1138_5c62((int)param_1,uVar1,local_6,local_4,param_4,param_5);
  return;
}



/* ---- FUN_10f0_0cae @ 10f0:0cae  (119 octets) ---- */

void __stdcall16far FUN_10f0_0cae(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 unaff_SS;
  int local_6;
  int local_4;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  FUN_1138_4da8(iVar1,uVar2,(int)param_2,param_2._2_2_);
  local_4 = *(int *)(iVar1 + 0x22);
  local_6 = *(int *)(iVar1 + 0x24);
  FUN_10f0_0bdf(iVar1,uVar2,&local_6,unaff_SS,&local_4,unaff_SS);
  if ((local_4 != *(int *)(iVar1 + 0x22)) || (local_6 != *(int *)(iVar1 + 0x24))) {
    FUN_1138_5c62(iVar1,uVar2,local_6,local_4,*(undefined2 *)(iVar1 + 0x20),
                  *(undefined2 *)(iVar1 + 0x1e));
  }
  *(undefined2 *)((int)param_2 + 8) = 0;
  *(undefined2 *)((int)param_2 + 10) = 0;
  return;
}



/* ---- FUN_10f0_0d25 @ 10f0:0d25  (52 octets) ---- */

void __stdcall16far FUN_10f0_0d25(undefined4 param_1)

{
  undefined2 *puVar1;
  int iVar2;
  undefined2 uVar3;
  
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  iVar2 = (int)param_1;
  *(byte *)((int)*(undefined4 *)(iVar2 + 0xe0) + 0xa1) =
       *(byte *)((int)*(undefined4 *)(iVar2 + 0xe0) + 0xa1) | 1;
  puVar1 = (undefined2 *)((int)*(undefined4 *)*(undefined4 *)(iVar2 + 0xe0) + 0x44);
  (*(code *)*puVar1)();
  return;
}



/* ---- FUN_10f0_0d59 @ 10f0:0d59  (52 octets) ---- */

void __stdcall16far FUN_10f0_0d59(undefined4 param_1)

{
  undefined2 *puVar1;
  int iVar2;
  undefined2 uVar3;
  
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  iVar2 = (int)param_1;
  *(byte *)((int)*(undefined4 *)(iVar2 + 0xe0) + 0xa1) =
       *(byte *)((int)*(undefined4 *)(iVar2 + 0xe0) + 0xa1) & 0xfe;
  puVar1 = (undefined2 *)((int)*(undefined4 *)*(undefined4 *)(iVar2 + 0xe0) + 0x44);
  (*(code *)*puVar1)();
  return;
}



/* ---- FUN_10f0_0d8d @ 10f0:0d8d  (126 octets) ---- */

void __stdcall16far FUN_10f0_0d8d(undefined4 param_1,undefined2 param_2_00,int *param_2)

{
  int iVar1;
  int iVar2;
  undefined2 uVar3;
  
  iVar1 = *param_2;
  iVar2 = (int)param_1;
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  if (iVar1 == 0x26) {
    FUN_10f0_0f1d(iVar2,uVar3,*(undefined2 *)(iVar2 + 0xd8),*(undefined2 *)(iVar2 + 0xda));
    FUN_1158_206a(0x10f0,(int)*(undefined4 *)(iVar2 + 0xd8),
                  (int)((ulong)*(undefined4 *)(iVar2 + 0xd8) >> 0x10));
  }
  else if (iVar1 == 0x28) {
    FUN_10f0_0f1d(iVar2,uVar3,*(undefined2 *)(iVar2 + 0xdc),*(undefined2 *)(iVar2 + 0xde));
    FUN_1158_206a(0x10f0,(int)*(undefined4 *)(iVar2 + 0xdc),
                  (int)((ulong)*(undefined4 *)(iVar2 + 0xdc) >> 0x10));
  }
  else if (iVar1 == 0x20) {
    FUN_1158_206a();
  }
  return;
}



/* ---- FUN_10f0_0e0b @ 10f0:0e0b  (179 octets) ---- */

void __stdcall16far FUN_10f0_0e0b(undefined4 *param_1)

{
  undefined2 *puVar1;
  undefined4 *puVar2;
  char cVar3;
  undefined2 uVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined2 uVar7;
  char param_2;
  undefined2 param_3;
  undefined2 param_4;
  int iVar8;
  
  if (param_2 == '\0') {
    uVar7 = (undefined2)((ulong)param_1 >> 0x10);
    puVar6 = (undefined4 *)param_1;
    FUN_10f0_0f1d(puVar6,uVar7,param_3,param_4);
    if (((*(int *)(puVar6 + 0x39) != 0 || *(int *)((int)puVar6 + 0xe6) != 0) &&
        (*(char *)((int)puVar6[0x39] + 0xa4) != '\0')) &&
       (cVar3 = FUN_1138_61c4((int)puVar6[0x39],(int)((ulong)puVar6[0x39] >> 0x10)), cVar3 != '\0'))
    {
      uVar4 = FUN_1138_62b9((int)puVar6[0x39],(int)((ulong)puVar6[0x39] >> 0x10));
      iVar8 = 0x1138;
      iVar5 = GETFOCUS(0x1138,uVar4);
      if (iVar5 != iVar8) {
        puVar2 = (undefined4 *)puVar6[0x39];
        puVar1 = (undefined2 *)((int)*puVar2 + 0x78);
        (*(code *)*puVar1)(0x14d0,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10));
        return;
      }
    }
    if (*(char *)(puVar6 + 0x29) != '\0') {
      uVar4 = FUN_1138_62b9(puVar6,uVar7);
      iVar8 = 0x1138;
      iVar5 = GETFOCUS(0x1138,uVar4);
      if ((iVar5 != iVar8) && (cVar3 = FUN_1138_61c4(puVar6,uVar7), cVar3 != '\0')) {
        puVar1 = (undefined2 *)((int)*param_1 + 0x78);
        (*(code *)*puVar1)(0x1138,puVar6,uVar7);
      }
    }
  }
  return;
}



/* ---- FUN_10f0_0ebe @ 10f0:0ebe  (95 octets) ---- */

void __stdcall16far FUN_10f0_0ebe(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  if ((param_3 == *(int *)(iVar1 + 0xda)) && (param_2 == *(int *)(iVar1 + 0xd8))) {
    if (*(int *)(iVar1 + 0xea) != 0) {
      (*(code *)*(undefined2 *)(iVar1 + 0xe8))();
    }
  }
  else if (*(int *)(iVar1 + 0xf2) != 0) {
    (*(code *)*(undefined2 *)(iVar1 + 0xf0))();
  }
  return;
}



/* ---- FUN_10f0_0f1d @ 10f0:0f1d  (163 octets) ---- */

void __stdcall16far FUN_10f0_0f1d(undefined4 *param_1,int param_2,int param_3)

{
  undefined2 *puVar1;
  char cVar2;
  undefined2 uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined2 uVar6;
  int iVar7;
  
  uVar6 = (undefined2)((ulong)param_1 >> 0x10);
  puVar5 = (undefined4 *)param_1;
  if (((*(char *)(puVar5 + 0x29) != '\0') && (cVar2 = FUN_1138_61c4(puVar5,uVar6), cVar2 != '\0'))
     && ((param_3 != *(int *)((int)puVar5 + 0xe2) || (param_2 != *(int *)(puVar5 + 0x38))))) {
    *(byte *)((int)puVar5[0x38] + 0xa1) = *(byte *)((int)puVar5[0x38] + 0xa1) & 0xfe;
    *(int *)(puVar5 + 0x38) = param_2;
    *(int *)((int)puVar5 + 0xe2) = param_3;
    uVar3 = FUN_1138_62b9(puVar5,uVar6);
    iVar7 = 0x1138;
    iVar4 = GETFOCUS(0x1138,uVar3);
    if (iVar4 == iVar7) {
      *(byte *)((int)puVar5[0x38] + 0xa1) = *(byte *)((int)puVar5[0x38] + 0xa1) | 1;
      puVar1 = (undefined2 *)((int)*param_1 + 0x44);
      (*(code *)*puVar1)(0x14d0,puVar5,uVar6);
    }
  }
  return;
}



/* ---- FUN_10f0_0fc0 @ 10f0:0fc0  (22 octets) ---- */

void __stdcall16far FUN_10f0_0fc0(undefined2 param_1_00,undefined2 param_2,undefined4 param_1)

{
  undefined2 uVar1;
  
  uVar1 = (undefined2)((ulong)param_1 >> 0x10);
  *(undefined2 *)((int)param_1 + 8) = 1;
  *(undefined2 *)((int)param_1 + 10) = 0;
  return;
}



/* ---- FUN_10f0_0fd6 @ 10f0:0fd6  (100 octets) ---- */

void __stdcall16far FUN_10f0_0fd6(undefined4 param_1)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 unaff_SS;
  int local_6;
  int local_4;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  FUN_1148_4ff4(iVar1,uVar2);
  local_4 = *(int *)(iVar1 + 0x22);
  local_6 = *(int *)(iVar1 + 0x24);
  FUN_10f0_0bdf(iVar1,uVar2,&local_6,unaff_SS,&local_4,unaff_SS);
  if ((local_4 != *(int *)(iVar1 + 0x22)) || (local_6 != *(int *)(iVar1 + 0x24))) {
    FUN_1138_5c62(iVar1,uVar2,local_6,local_4,*(undefined2 *)(iVar1 + 0x20),
                  *(undefined2 *)(iVar1 + 0x1e));
  }
  return;
}



/* ---- FUN_10f0_103a @ 10f0:103a  (35 octets) ---- */

undefined4 __stdcall16far FUN_10f0_103a(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)((int)param_1 + 0xd8);
  uVar1 = FUN_1110_2359((int)uVar1,(int)((ulong)uVar1 >> 0x10));
  return uVar1;
}



/* ---- FUN_10f0_105d @ 10f0:105d  (113 octets) ---- */

void __stdcall16far FUN_10f0_105d(undefined4 param_1,int param_2,int param_3)

{
  undefined2 *puVar1;
  undefined4 *puVar2;
  undefined2 uVar3;
  int iVar4;
  undefined2 uVar5;
  undefined2 unaff_CS;
  undefined4 uVar6;
  undefined2 uVar7;
  
  iVar4 = (int)param_1;
  uVar5 = (undefined2)((ulong)param_1 >> 0x10);
  if (param_2 == 0 && param_3 == 0) {
    uVar7 = DAT_1160_188c;
    uVar3 = LOADBITMAP(unaff_CS,0xbca,0x1160);
    uVar6 = FUN_1110_2359((int)*(undefined4 *)(iVar4 + 0xd8),
                          (int)((ulong)*(undefined4 *)(iVar4 + 0xd8) >> 0x10));
    FUN_1128_6104(uVar6,uVar3);
    FUN_1110_23bf((int)*(undefined4 *)(iVar4 + 0xd8),
                  (int)((ulong)*(undefined4 *)(iVar4 + 0xd8) >> 0x10),1);
    puVar2 = (undefined4 *)*(undefined4 *)(iVar4 + 0xd8);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x44);
    (*(code *)*puVar1)(0x1110,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),uVar7);
  }
  else {
    FUN_1110_237d((int)*(undefined4 *)(iVar4 + 0xd8),
                  (int)((ulong)*(undefined4 *)(iVar4 + 0xd8) >> 0x10),param_2,param_3);
  }
  return;
}



/* ---- FUN_10f0_10ce @ 10f0:10ce  (35 octets) ---- */

undefined4 __stdcall16far FUN_10f0_10ce(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)((int)param_1 + 0xdc);
  uVar1 = FUN_1110_2359((int)uVar1,(int)((ulong)uVar1 >> 0x10));
  return uVar1;
}



/* ---- FUN_10f0_10f1 @ 10f0:10f1  (113 octets) ---- */

void __stdcall16far FUN_10f0_10f1(undefined4 param_1,int param_2,int param_3)

{
  undefined2 *puVar1;
  undefined4 *puVar2;
  undefined2 uVar3;
  int iVar4;
  undefined2 uVar5;
  undefined2 unaff_CS;
  undefined4 uVar6;
  undefined2 uVar7;
  
  iVar4 = (int)param_1;
  uVar5 = (undefined2)((ulong)param_1 >> 0x10);
  if (param_2 == 0 && param_3 == 0) {
    uVar7 = DAT_1160_188c;
    uVar3 = LOADBITMAP(unaff_CS,0xbd2,0x1160);
    uVar6 = FUN_1110_2359((int)*(undefined4 *)(iVar4 + 0xdc),
                          (int)((ulong)*(undefined4 *)(iVar4 + 0xdc) >> 0x10));
    FUN_1128_6104(uVar6,uVar3);
    FUN_1110_23bf((int)*(undefined4 *)(iVar4 + 0xdc),
                  (int)((ulong)*(undefined4 *)(iVar4 + 0xdc) >> 0x10),1);
    puVar2 = (undefined4 *)*(undefined4 *)(iVar4 + 0xdc);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x44);
    (*(code *)*puVar1)(0x1110,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),uVar7);
  }
  else {
    FUN_1110_237d((int)*(undefined4 *)(iVar4 + 0xdc),
                  (int)((ulong)*(undefined4 *)(iVar4 + 0xdc) >> 0x10),param_2,param_3);
  }
  return;
}



/* ---- FUN_10f0_12ae @ 10f0:12ae  (43 octets) ---- */

void __stdcall16far FUN_10f0_12ae(undefined4 param_1,char param_2)

{
  int iVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  *(undefined2 *)(iVar1 + 0xfc) = 0;
  *(undefined2 *)(iVar1 + 0xfe) = 0;
  FUN_1138_2efc(iVar1,uVar2,0);
  if (param_2 != '\0') {
    FUN_1158_200f();
  }
  return;
}



/* ---- FUN_10f0_12d9 @ 10f0:12d9  (84 octets) ---- */

void __stdcall16far FUN_10f0_12d9(undefined4 *param_1,undefined param_3,int *param_4)

{
  undefined2 *puVar1;
  undefined2 in_AX;
  undefined uVar2;
  undefined extraout_AH;
  undefined extraout_AH_00;
  
  uVar2 = (undefined)((uint)in_AX >> 8);
  if (*param_4 == 0x26) {
    puVar1 = (undefined2 *)((int)*param_1 + 0x80);
    (*(code *)*puVar1)();
    uVar2 = extraout_AH;
  }
  else if (*param_4 == 0x28) {
    puVar1 = (undefined2 *)((int)*param_1 + 0x84);
    (*(code *)*puVar1)();
    uVar2 = extraout_AH_00;
  }
  FUN_1138_4f6a((undefined4 *)param_1,param_1._2_2_,CONCAT11(uVar2,param_3),(int *)param_4,
                (int)((ulong)param_4 >> 0x10));
  return;
}



/* ---- FUN_10f0_132d @ 10f0:132d  (65 octets) ---- */

void __stdcall16far FUN_10f0_132d(undefined4 *param_1,char *param_2)

{
  undefined2 *puVar1;
  char cVar2;
  
  puVar1 = (undefined2 *)((int)*param_1 + 0x7c);
  cVar2 = (*(code *)*puVar1)();
  if (cVar2 == '\0') {
    *param_2 = '\0';
    MESSAGEBEEP();
  }
  if (*param_2 != '\0') {
    FUN_1138_521f((undefined4 *)param_1,(int)((ulong)param_1 >> 0x10),(char *)param_2,
                  (int)((ulong)param_2 >> 0x10));
  }
  return;
}



/* ---- FUN_10f0_140a @ 10f0:140a  (55 octets) ---- */

void __stdcall16far FUN_10f0_140a(undefined4 param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  undefined2 uVar3;
  
  uVar3 = (undefined2)((ulong)param_2 >> 0x10);
  iVar2 = (int)param_2;
  FUN_1120_4a5f((int)param_1,(int)((ulong)param_1 >> 0x10),iVar2,uVar3);
  uVar1 = *(uint *)(iVar2 + 6);
  *(uint *)(iVar2 + 4) = *(uint *)(iVar2 + 4) | 4;
  *(uint *)(iVar2 + 6) = uVar1 | 0x200;
  return;
}



/* ---- FUN_10f0_1441 @ 10f0:1441  (28 octets) ---- */

void __stdcall16far FUN_10f0_1441(undefined4 param_1)

{
  undefined2 uVar1;
  
  uVar1 = (undefined2)((ulong)param_1 >> 0x10);
  FUN_1120_4b62((int)param_1,uVar1);
  FUN_10f0_145d((int)param_1,uVar1);
  return;
}



/* ---- FUN_10f0_145d @ 10f0:145d  (137 octets) ---- */

void __stdcall16far FUN_10f0_145d(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 unaff_SS;
  undefined2 local_a;
  undefined2 local_8;
  int local_6;
  int local_4;
  
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  iVar2 = (int)param_1;
  FUN_1138_62b9(iVar2,uVar3);
  SENDMESSAGE(0x1138,&local_a,unaff_SS,0,0x402);
  local_4 = FUN_1138_18f4(iVar2,uVar3);
  local_4 = local_4 + 1;
  iVar1 = FUN_1138_18a9(iVar2,uVar3);
  local_6 = (iVar1 - *(int *)((int)*(undefined4 *)(iVar2 + 0xfc) + 0x22)) + -2;
  local_8 = 0;
  local_a = 0;
  FUN_1138_62b9(iVar2,uVar3);
  SENDMESSAGE(0x1138,&local_a,unaff_SS,0,0x404);
  FUN_1138_62b9(iVar2,uVar3);
  SENDMESSAGE(0x1138,&local_a,unaff_SS,0,0x402);
  return;
}



/* ---- FUN_10f0_14e6 @ 10f0:14e6  (135 octets) ---- */

void __stdcall16far FUN_10f0_14e6(undefined4 param_1,undefined2 param_2,undefined2 param_3)

{
  undefined2 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined2 uVar5;
  
  uVar5 = (undefined2)((ulong)param_1 >> 0x10);
  iVar4 = (int)param_1;
  FUN_1138_4da8(iVar4,uVar5,param_2,param_3);
  iVar3 = FUN_10f0_156d(iVar4,uVar5);
  if (*(int *)(iVar4 + 0x24) < iVar3) {
    FUN_1138_17e1(iVar4,uVar5,iVar3);
  }
  else if (*(int *)(iVar4 + 0xfc) != 0 || *(int *)(iVar4 + 0xfe) != 0) {
    puVar2 = (undefined4 *)*(undefined4 *)(iVar4 + 0xfc);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x4c);
    (*(code *)*puVar1)(0x10f0,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),
                       *(undefined2 *)(iVar4 + 0x24),
                       *(undefined2 *)((int)*(undefined4 *)(iVar4 + 0xfc) + 0x22),0,
                       *(int *)(iVar4 + 0x22) - *(int *)((int)*(undefined4 *)(iVar4 + 0xfc) + 0x22))
    ;
    FUN_10f0_145d(iVar4,uVar5);
  }
  return;
}



/* ---- FUN_10f0_156d @ 10f0:156d  (145 octets) ---- */

int __stdcall16far FUN_10f0_156d(undefined4 param_1)

{
  undefined4 uVar1;
  undefined2 uVar2;
  int iVar3;
  undefined2 unaff_SS;
  undefined2 uVar4;
  undefined2 uVar5;
  int local_4a [16];
  int local_2a [16];
  int local_a;
  undefined2 local_8;
  undefined2 local_6;
  
  local_6 = GETDC();
  GETTEXTMETRICS(0x14d0,local_2a,unaff_SS);
  uVar1 = *(undefined4 *)((int)param_1 + 0x34);
  uVar2 = FUN_1128_1016((int)uVar1,(int)((ulong)uVar1 >> 0x10));
  local_8 = SELECTOBJECT(0x1128,uVar2);
  uVar5 = local_6;
  GETTEXTMETRICS(0x14d0,local_4a,unaff_SS);
  uVar2 = local_6;
  SELECTOBJECT(0x14d0,local_8);
  uVar4 = 0;
  RELEASEDC(0x14d0,local_6);
  local_a = local_2a[0];
  if (local_4a[0] < local_2a[0]) {
    local_a = local_4a[0];
  }
  iVar3 = GETSYSTEMMETRICS(0x14d0,6,uVar4,uVar2,uVar5);
  return local_a / 4 + local_4a[0] + iVar3 * 4 + 2;
}



/* ---- FUN_10f0_15fe @ 10f0:15fe  (59 octets) ---- */

void __stdcall16far FUN_10f0_15fe(undefined4 param_1)

{
  int iVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  if (*(char *)(iVar1 + 0xdc) == '\0') {
    uVar3 = FUN_10f0_1733(iVar1,uVar2);
    FUN_10f0_178b(iVar1,uVar2,(uint)uVar3 + *(uint *)(iVar1 + 0xf8),
                  (int)((ulong)uVar3 >> 0x10) + *(int *)(iVar1 + 0xfa) +
                  (uint)CARRY2((uint)uVar3,*(uint *)(iVar1 + 0xf8)));
  }
  else {
    MESSAGEBEEP();
  }
  return;
}



/* ---- FUN_10f0_1639 @ 10f0:1639  (59 octets) ---- */

void __stdcall16far FUN_10f0_1639(undefined4 param_1)

{
  int iVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  if (*(char *)(iVar1 + 0xdc) == '\0') {
    uVar3 = FUN_10f0_1733(iVar1,uVar2);
    FUN_10f0_178b(iVar1,uVar2,(uint)uVar3 - *(uint *)(iVar1 + 0xf8),
                  ((int)((ulong)uVar3 >> 0x10) - *(int *)(iVar1 + 0xfa)) -
                  (uint)((uint)uVar3 < *(uint *)(iVar1 + 0xf8)));
  }
  else {
    MESSAGEBEEP();
  }
  return;
}



/* ---- FUN_10f0_1674 @ 10f0:1674  (46 octets) ---- */

void __stdcall16far FUN_10f0_1674(undefined4 *param_1)

{
  undefined2 *puVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  if ((*(char *)((undefined4 *)param_1 + 0x40) != '\0') &&
     (*(char *)((undefined4 *)param_1 + 0x37) == '\0')) {
    puVar1 = (undefined2 *)((int)*param_1 + -0x10);
    (*(code *)*puVar1)();
  }
  return;
}



/* ---- FUN_10f0_16a2 @ 10f0:16a2  (46 octets) ---- */

void __stdcall16far FUN_10f0_16a2(undefined4 *param_1)

{
  undefined2 *puVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  if ((*(char *)((undefined4 *)param_1 + 0x40) != '\0') &&
     (*(char *)((undefined4 *)param_1 + 0x37) == '\0')) {
    puVar1 = (undefined2 *)((int)*param_1 + -0x10);
    (*(code *)*puVar1)();
  }
  return;
}



/* ---- FUN_10f0_16d0 @ 10f0:16d0  (89 octets) ---- */

void __stdcall16far FUN_10f0_16d0(undefined4 param_1,undefined2 param_2,undefined2 param_3)

{
  undefined2 uVar1;
  undefined2 uVar2;
  long lVar3;
  undefined4 uVar4;
  long lVar5;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  uVar1 = (undefined2)param_1;
  FUN_1138_55d2(uVar1,uVar2,param_2,param_3);
  lVar3 = FUN_10f0_1733(uVar1,uVar2);
  uVar4 = FUN_10f0_1733(uVar1,uVar2);
  lVar5 = FUN_10f0_17ba(uVar1,uVar2,uVar4);
  if (lVar3 != lVar5) {
    uVar4 = FUN_10f0_1733(uVar1,uVar2);
    FUN_10f0_178b(uVar1,uVar2,uVar4);
  }
  return;
}



/* ---- FUN_10f0_1733 @ 10f0:1733  (64 octets) ---- */

undefined4 __stdcall16far FUN_10f0_1733(undefined4 param_1)

{
  undefined2 unaff_SS;
  undefined4 uVar1;
  undefined *puVar2;
  undefined2 uStack_10e;
  undefined *puStack_10c;
  undefined2 uStack_10a;
  undefined local_106 [260];
  
  puStack_10c = &stack0xfffe;
  uStack_10a = 0x1729;
  uStack_10e = DAT_1160_1858;
  puVar2 = local_106;
  DAT_1160_1858 = &uStack_10e;
  FUN_1138_1d53((int)param_1,(int)((ulong)param_1 >> 0x10));
  uVar1 = FUN_1150_08da(puVar2,unaff_SS);
  DAT_1160_1858 = (undefined2 *)uStack_10e;
  return uVar1;
}



/* ---- FUN_10f0_178b @ 10f0:178b  (47 octets) ---- */

void __stdcall16far FUN_10f0_178b(undefined4 param_1,undefined2 param_2,undefined2 param_3)

{
  undefined2 uVar1;
  undefined2 unaff_SS;
  undefined4 uVar2;
  undefined *puVar3;
  undefined local_102 [256];
  
  puVar3 = local_102;
  uVar1 = (undefined2)((ulong)param_1 >> 0x10);
  uVar2 = FUN_10f0_17ba((int)param_1,uVar1,param_2,param_3);
  FUN_1150_08a9(uVar2);
  FUN_1138_1d8c((int)param_1,uVar1,puVar3,unaff_SS);
  return;
}



/* ---- FUN_10f0_17ba @ 10f0:17ba  (143 octets) ---- */

undefined4 __stdcall16far FUN_10f0_17ba(undefined4 param_1,uint param_2,int param_3)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 local_6;
  undefined2 local_4;
  
  local_6 = param_2;
  local_4 = param_3;
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  if ((*(int *)(iVar1 + 0xf2) != *(int *)(iVar1 + 0xee)) ||
     (*(int *)(iVar1 + 0xf0) != *(int *)(iVar1 + 0xec))) {
    if ((param_3 < *(int *)(iVar1 + 0xee)) ||
       ((param_3 <= *(int *)(iVar1 + 0xee) && (param_2 < *(uint *)(iVar1 + 0xec))))) {
      local_6 = *(uint *)(iVar1 + 0xec);
      local_4 = *(int *)(iVar1 + 0xee);
    }
    else if ((*(int *)(iVar1 + 0xf2) < param_3) ||
            ((*(int *)(iVar1 + 0xf2) <= param_3 && (*(uint *)(iVar1 + 0xf0) < param_2)))) {
      local_6 = *(uint *)(iVar1 + 0xf0);
      local_4 = *(int *)(iVar1 + 0xf2);
    }
  }
  return CONCAT22(local_4,local_6);
}



/* ---- FUN_10f0_1849 @ 10f0:1849  (48 octets) ---- */

void __stdcall16far FUN_10f0_1849(undefined4 param_1,undefined2 param_2,undefined2 param_3)

{
  int iVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  if ((*(char *)(iVar1 + 0xde) != '\0') && ((*(byte *)(iVar1 + 0x28) & 1) == 0)) {
    FUN_1120_4a3f(iVar1,uVar2);
  }
  FUN_1120_4d3e(iVar1,uVar2,param_2,param_3);
  return;
}



/* ---- FUN_10f0_1879 @ 10f0:1879  (58 octets) ---- */

void __stdcall16far FUN_10f0_1879(undefined4 param_1,char param_2)

{
  int iVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  if (*(int *)(iVar1 + 0x9d) != 0 || *(int *)(iVar1 + 0x9f) != 0) {
    FUN_1158_1f7f((int)*(undefined4 *)(iVar1 + 0x9d),
                  (int)((ulong)*(undefined4 *)(iVar1 + 0x9d) >> 0x10));
  }
  FUN_1110_1fe0(iVar1,uVar2,0);
  if (param_2 != '\0') {
    FUN_1158_200f();
  }
  return;
}



/* ---- FUN_10f0_18b3 @ 10f0:18b3  (152 octets) ---- */

void __stdcall16far
FUN_10f0_18b3(undefined4 param_1,undefined2 param_2,undefined2 param_3,undefined param_4,
             undefined param_5)

{
  int iVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  FUN_1110_2172(iVar1,uVar2,param_2,param_3,param_4,param_5);
  if ((*(byte *)(iVar1 + 0xa1) & 2) != 0) {
    if (*(int *)(iVar1 + 0x9d) == 0 && *(int *)(iVar1 + 0x9f) == 0) {
      uVar3 = FUN_1118_25be(0xb8b,0x1118,1,iVar1,uVar2);
      *(undefined2 *)(iVar1 + 0x9d) = (int)uVar3;
      *(undefined2 *)(iVar1 + 0x9f) = (int)((ulong)uVar3 >> 0x10);
    }
    FUN_1118_278b((int)*(undefined4 *)(iVar1 + 0x9d),
                  (int)((ulong)*(undefined4 *)(iVar1 + 0x9d) >> 0x10),0x1991,0x10f0,iVar1,uVar2);
    FUN_1118_276a((int)*(undefined4 *)(iVar1 + 0x9d),
                  (int)((ulong)*(undefined4 *)(iVar1 + 0x9d) >> 0x10),400);
    FUN_1118_2749((int)*(undefined4 *)(iVar1 + 0x9d),
                  (int)((ulong)*(undefined4 *)(iVar1 + 0x9d) >> 0x10),1);
  }
  return;
}



/* ---- FUN_10f0_194b @ 10f0:194b  (60 octets) ---- */

void __stdcall16far
FUN_10f0_194b(undefined4 param_1,undefined2 param_2,undefined2 param_3,undefined param_4,
             undefined param_5)

{
  int iVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  FUN_1110_2257(iVar1,uVar2,param_2,param_3,param_4,param_5);
  if (*(int *)(iVar1 + 0x9d) != 0 || *(int *)(iVar1 + 0x9f) != 0) {
    FUN_1118_2749((int)*(undefined4 *)(iVar1 + 0x9d),
                  (int)((ulong)*(undefined4 *)(iVar1 + 0x9d) >> 0x10),0);
  }
  return;
}



/* ---- FUN_10f0_19fe @ 10f0:19fe  (131 octets) ---- */

void __stdcall16far FUN_10f0_19fe(undefined4 param_1)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 unaff_SS;
  undefined *puVar3;
  undefined2 uVar4;
  undefined local_12 [8];
  undefined local_a [8];
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  FUN_1110_202c(iVar1,uVar2);
  if ((*(byte *)(iVar1 + 0xa1) & 1) != 0) {
    puVar3 = local_12;
    uVar4 = unaff_SS;
    FUN_1148_06ae(*(undefined2 *)(iVar1 + 0x24),*(undefined2 *)(iVar1 + 0x22),0,0);
    FUN_1158_161b(8,local_a,unaff_SS,puVar3,uVar4);
    INFLATERECT(0x1158,0xfffd,0xfffd,local_a);
    if (*(char *)(iVar1 + 0x9c) == '\x02') {
      OFFSETRECT(0x14d0,1,1,local_a);
    }
    FUN_1128_21d2((int)*(undefined4 *)(iVar1 + 0x8a),
                  (int)((ulong)*(undefined4 *)(iVar1 + 0x8a) >> 0x10));
    DRAWFOCUSRECT(0x1128,local_a,unaff_SS);
  }
  return;
}



/* ---- FUN_10f0_1ad3 @ 10f0:1ad3  (141 octets) ---- */

char * FUN_10f0_1ad3(int *param_1)

{
  int *piVar1;
  undefined2 uVar2;
  undefined4 local_a;
  char *local_6;
  int local_4;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  piVar1 = (int *)param_1;
  local_6 = (char *)*param_1;
  local_4 = piVar1[1];
  if (*param_1 != 0 || piVar1[1] != 0) {
    local_a = (char *)CONCAT22(piVar1[1],(char *)*param_1);
    while( true ) {
      if (*local_a != ' ') break;
      local_a = (char *)CONCAT22(local_a._2_2_,(char *)local_a + 1);
    }
    local_6 = (char *)local_a;
    local_4 = local_a._2_2_;
    while( true ) {
      if ((*local_a == '\0') || (*local_a == ',')) break;
      local_a = (char *)CONCAT22(local_a._2_2_,(char *)local_a + 1);
    }
    if (*local_a == ',') {
      *local_a = '\0';
      local_a = (char *)CONCAT22(local_a._2_2_,(char *)local_a + 1);
    }
    *param_1 = (int)(char *)local_a;
    piVar1[1] = local_a._2_2_;
  }
  return (char *)CONCAT22(local_4,local_6);
}



/* ---- FUN_10f0_1b60 @ 10f0:1b60  (45 octets) ---- */

void FUN_10f0_1b60(undefined2 param_1)

{
  undefined extraout_AH;
  undefined2 unaff_SS;
  undefined4 uVar1;
  undefined *puVar2;
  undefined local_102 [256];
  
  puVar2 = local_102;
  FUN_1150_092b(param_1);
  uVar1 = FUN_1150_28e6(0x1aa1,0x10f0,CONCAT11(extraout_AH,1),puVar2,unaff_SS);
  FUN_1158_1399(0x1150,uVar1);
  return;
}



/* ---- FUN_10f0_1b8d @ 10f0:1b8d  (58 octets) ---- */

bool __stdcall16far FUN_10f0_1b8d(void)

{
  undefined2 unaff_SS;
  
  FUN_1140_7303((int)*(undefined4 *)&DAT_1160_2c2a,
                (int)((ulong)*(undefined4 *)&DAT_1160_2c2a >> 0x10));
  return *(char *)((int)*(undefined4 *)&DAT_1160_2c54 + 0x19) == '\0';
}



/* ---- FUN_10f0_1bc7 @ 10f0:1bc7  (36 octets) ---- */

uint FUN_10f0_1bc7(void)

{
  uint uVar1;
  uint uVar2;
  undefined2 unaff_CS;
  undefined2 local_6;
  
  uVar1 = ISBADWRITEPTR(unaff_CS,local_6,0);
  uVar2 = uVar1 & 0xff00;
  if (uVar1 == 0) {
    uVar2 = uVar2 + 1;
  }
  return uVar2;
}



/* ---- FUN_10f0_1beb @ 10f0:1beb  (33 octets) ---- */

void FUN_10f0_1beb(undefined2 *param_1)

{
  *param_1 = 0;
  ((undefined2 *)param_1)[1] = 0;
  FUN_10f0_269a((int)DAT_1160_2c54,(int)((ulong)DAT_1160_2c54 >> 0x10));
  return;
}



/* ---- FUN_10f0_1c0c @ 10f0:1c0c  (50 octets) ---- */

undefined2 FUN_10f0_1c0c(void)

{
  undefined2 unaff_SS;
  undefined4 uVar1;
  undefined2 local_24 [17];
  
  uVar1 = FUN_10f0_2a04((int)DAT_1160_2c54,(int)((ulong)DAT_1160_2c54 >> 0x10));
  FUN_1128_21d2(uVar1);
  GETTEXTMETRICS(0x1128,local_24,unaff_SS);
  return local_24[0];
}



/* ---- FUN_10f0_1c3e @ 10f0:1c3e  (113 octets) ---- */

void FUN_10f0_1c3e(undefined2 *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined2 *puVar4;
  undefined2 uVar5;
  
  uVar5 = (undefined2)((ulong)param_1 >> 0x10);
  puVar4 = (undefined2 *)param_1;
  *param_1 = 0;
  if (puVar4[4] == 0) {
    iVar2 = FUN_10f0_1c0c(&stack0xfffe);
    puVar4[1] = puVar4[1] + iVar2;
  }
  else {
    puVar4[1] = puVar4[1] + puVar4[4];
  }
  uVar1 = puVar4[3];
  iVar2 = ((int)uVar1 >> 0xf) - (uint)(uVar1 < (uint)(puVar4[4] * 2));
  iVar3 = (int)puVar4[1] >> 0xf;
  if ((iVar2 < iVar3) || ((iVar2 <= iVar3 && (uVar1 + puVar4[4] * -2 < (uint)puVar4[1])))) {
    FUN_10f0_1beb(puVar4,uVar5);
  }
  puVar4[4] = 0;
  return;
}



/* ---- FUN_10f0_1caf @ 10f0:1caf  (253 octets) ---- */

void FUN_10f0_1caf(int param_1,int param_2,undefined2 param_3,int *param_4)

{
  int *piVar1;
  undefined2 uVar2;
  undefined2 unaff_SS;
  bool bVar3;
  undefined4 uVar4;
  int local_8;
  int local_6;
  uint local_4;
  
  uVar2 = (undefined2)((ulong)param_4 >> 0x10);
  uVar4 = FUN_10f0_2a04((int)DAT_1160_2c54,(int)((ulong)DAT_1160_2c54 >> 0x10));
  while (0 < param_1) {
    local_8 = param_1;
    FUN_1128_21d2(uVar4);
    GETTEXTEXTENTPOINT(0x1128,&local_6,unaff_SS,param_1,param_2,param_3);
    while ((piVar1 = (int *)param_4, 0 < local_8 && (piVar1[2] < local_6 + *param_4))) {
      local_8 = local_8 + -1;
      FUN_1128_21d2(uVar4);
      GETTEXTEXTENTPOINT(0x1128,&local_6,unaff_SS,local_8,param_2,param_3);
    }
    bVar3 = -1 < (int)local_4 >> 0xf;
    if (((int)local_4 < 0 && bVar3) || ((bVar3 && ((uint)piVar1[4] < local_4)))) {
      piVar1[4] = local_4 + 2;
    }
    FUN_1128_21d2(uVar4);
    TEXTOUT(0x1128,local_8,param_2,param_3,piVar1[1],*param_4);
    param_1 = param_1 - local_8;
    param_2 = param_2 + local_8;
    if (param_1 < 1) {
      *param_4 = *param_4 + local_6;
    }
    else {
      FUN_10f0_1c3e(piVar1,uVar2);
    }
  }
  return;
}



/* ---- FUN_10f0_1dac @ 10f0:1dac  (71 octets) ---- */

void FUN_10f0_1dac(int param_1)

{
  undefined2 unaff_SS;
  
  if (*(int *)(param_1 + -2) != 0) {
    FUN_10f0_1caf(*(undefined2 *)(param_1 + -2),*(undefined2 *)(param_1 + 6),
                  *(undefined2 *)(param_1 + 8),(int)*(undefined4 *)(param_1 + 10),
                  (int)((ulong)*(undefined4 *)(param_1 + 10) >> 0x10));
  }
  *(int *)(param_1 + 6) = *(int *)(param_1 + 6) + *(int *)(param_1 + -2) + 1;
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) - (*(int *)(param_1 + -2) + 1);
  *(undefined2 *)(param_1 + -2) = 0;
  return;
}



/* ---- FUN_10f0_1df3 @ 10f0:1df3  (50 octets) ---- */

undefined2 FUN_10f0_1df3(void)

{
  undefined2 unaff_SS;
  undefined4 uVar1;
  undefined local_24 [10];
  undefined2 local_1a;
  
  uVar1 = FUN_10f0_2a04((int)DAT_1160_2c54,(int)((ulong)DAT_1160_2c54 >> 0x10));
  FUN_1128_21d2(uVar1);
  GETTEXTMETRICS(0x1128,local_24,unaff_SS);
  return local_1a;
}



/* ---- FUN_10f0_1e25 @ 10f0:1e25  (206 octets) ---- */

void FUN_10f0_1e25(int param_1,undefined4 param_2,int *param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined2 uVar5;
  int local_4;
  
  local_4 = 0;
  uVar5 = (undefined2)((ulong)param_3 >> 0x10);
  while (local_4 < param_1) {
    cVar1 = *(char *)((int)param_2 + local_4);
    piVar4 = (int *)param_3;
    if (cVar1 == '\t') {
      FUN_10f0_1dac(&stack0xfffe);
      iVar2 = FUN_10f0_1df3(&stack0xfffe);
      iVar3 = iVar2 * 8;
      FUN_1158_1670();
      *param_3 = *param_3 + (iVar2 * 8 - iVar3) + 1;
      if (piVar4[2] < *param_3) {
        FUN_10f0_1c3e(piVar4,uVar5);
      }
    }
    else if (cVar1 == '\r') {
      FUN_10f0_1dac(&stack0xfffe);
    }
    else if (cVar1 == '\n') {
      FUN_10f0_1dac(&stack0xfffe);
      FUN_10f0_1c3e(piVar4,uVar5);
    }
    else if (cVar1 == '\f') {
      FUN_10f0_1dac(&stack0xfffe);
      FUN_10f0_1beb(piVar4,uVar5);
    }
    else {
      local_4 = local_4 + 1;
    }
  }
  FUN_10f0_1dac(&stack0xfffe);
  return;
}



/* ---- FUN_10f0_1ef3 @ 10f0:1ef3  (31 octets) ---- */

undefined2 __stdcall16far FUN_10f0_1ef3(undefined4 param_1)

{
  undefined2 uVar1;
  
  uVar1 = (undefined2)((ulong)param_1 >> 0x10);
  *(undefined2 *)((int)param_1 + 8) = 0;
  *(undefined2 *)((int)param_1 + 10) = 0;
  return 0;
}



/* ---- FUN_10f0_1f12 @ 10f0:1f12  (58 octets) ---- */

undefined2 __stdcall16far FUN_10f0_1f12(undefined4 param_1)

{
  int iVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  FUN_10f0_1e25(*(undefined2 *)(iVar1 + 8),*(undefined2 *)(iVar1 + 0xc),*(undefined2 *)(iVar1 + 0xe)
                ,iVar1 + 0x20,uVar2);
  *(undefined2 *)(iVar1 + 8) = 0;
  return 0;
}



/* ---- FUN_10f0_1f4c @ 10f0:1f4c  (16 octets) ---- */

undefined2 __stdcall16far FUN_10f0_1f4c(void)

{
  return 0;
}



/* ---- FUN_10f0_1f5c @ 10f0:1f5c  (34 octets) ---- */

undefined2 __stdcall16far FUN_10f0_1f5c(void)

{
  FUN_10f0_2655((int)DAT_1160_2c54,(int)((ulong)DAT_1160_2c54 >> 0x10));
  return 0;
}



/* ---- FUN_10f0_1f7e @ 10f0:1f7e  (208 octets) ---- */

undefined2 __stdcall16far FUN_10f0_1f7e(undefined4 param_1)

{
  undefined2 uVar1;
  int iVar2;
  undefined2 uVar3;
  undefined4 local_c;
  
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  iVar2 = (int)param_1;
  local_c = (undefined2 *)CONCAT22(uVar3,(undefined2 *)(iVar2 + 0x20));
  if (*(int *)(iVar2 + 2) == -0x284f) {
    *(undefined2 *)(iVar2 + 0x14) = 0x1ef3;
    *(undefined2 *)(iVar2 + 0x16) = 0x10f0;
    *(undefined2 *)(iVar2 + 0x18) = (undefined2 *)&DAT_1160_1f4c;
    *(undefined2 *)(iVar2 + 0x1a) = 0x10f0;
    *(undefined2 *)(iVar2 + 0x1c) = (undefined2 *)&DAT_1160_1f4c;
    *(undefined2 *)(iVar2 + 0x1e) = 0x10f0;
  }
  else {
    *(undefined2 *)(iVar2 + 2) = 0xd7b2;
    *(undefined2 *)(iVar2 + 0x14) = (undefined2 *)&DAT_1160_1f12;
    *(undefined2 *)(iVar2 + 0x16) = 0x10f0;
    *(undefined2 *)(iVar2 + 0x18) = (undefined2 *)&DAT_1160_1f12;
    *(undefined2 *)(iVar2 + 0x1a) = 0x10f0;
    *(undefined2 *)(iVar2 + 0x1c) = (undefined2 *)&DAT_1160_1f5c;
    *(undefined2 *)(iVar2 + 0x1e) = 0x10f0;
    FUN_10f0_25a8((int)DAT_1160_2c54,(int)((ulong)DAT_1160_2c54 >> 0x10));
    *local_c = 0;
    *(undefined2 *)(iVar2 + 0x22) = 0;
    uVar1 = FUN_10f0_2a9a((int)DAT_1160_2c54,(int)((ulong)DAT_1160_2c54 >> 0x10));
    *(undefined2 *)(iVar2 + 0x24) = uVar1;
    uVar1 = FUN_10f0_2a72((int)DAT_1160_2c54,(int)((ulong)DAT_1160_2c54 >> 0x10));
    *(undefined2 *)(iVar2 + 0x26) = uVar1;
    *(undefined2 *)(iVar2 + 0x28) = 0;
  }
  return 0;
}



/* ---- FUN_10f0_204e @ 10f0:204e  (65 octets) ---- */

void __stdcall16far FUN_10f0_204e(undefined4 param_1)

{
  int iVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  *(undefined2 *)(iVar1 + 2) = 0xd7b0;
  *(undefined2 *)(iVar1 + 4) = 0x80;
  *(int *)(iVar1 + 0xc) = iVar1 + 0x80;
  *(undefined2 *)(iVar1 + 0xe) = uVar2;
  *(undefined2 *)(iVar1 + 0x10) = (undefined2 *)&DAT_1160_1f7e;
  *(undefined2 *)(iVar1 + 0x12) = 0x10f0;
  return;
}



/* ---- FUN_10f0_20be @ 10f0:20be  (119 octets) ---- */

undefined4 __stdcall16far
FUN_10f0_20be(undefined4 param_1,char param_2,undefined2 param_3,undefined2 param_4,
             undefined2 param_5,undefined2 param_6,undefined2 param_7,undefined2 param_8)

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
  FUN_1158_1f50(iVar1,uVar2,0);
  uVar3 = FUN_1150_0ed6(param_7,param_8);
  *(undefined2 *)(iVar1 + 4) = (int)uVar3;
  *(undefined2 *)(iVar1 + 6) = (int)((ulong)uVar3 >> 0x10);
  uVar3 = FUN_1150_0ed6(param_5,param_6);
  *(undefined2 *)(iVar1 + 8) = (int)uVar3;
  *(undefined2 *)(iVar1 + 10) = (int)((ulong)uVar3 >> 0x10);
  uVar3 = FUN_1150_0ed6(param_3,param_4);
  *(undefined2 *)(iVar1 + 0xc) = (int)uVar3;
  *(undefined2 *)(iVar1 + 0xe) = (int)((ulong)uVar3 >> 0x10);
  if (param_2 != '\0') {
    DAT_1160_1858 = uStack_a;
  }
  return param_1;
}



/* ---- FUN_10f0_2135 @ 10f0:2135  (66 octets) ---- */

void __stdcall16far FUN_10f0_2135(undefined4 param_1,char param_2)

{
  int iVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  FUN_1150_0f23(*(undefined2 *)(iVar1 + 4),*(undefined2 *)(iVar1 + 6));
  FUN_1150_0f23(*(undefined2 *)(iVar1 + 8),*(undefined2 *)(iVar1 + 10));
  FUN_1150_0f23(*(undefined2 *)(iVar1 + 0xc),*(undefined2 *)(iVar1 + 0xe));
  if (param_2 != '\0') {
    FUN_1158_200f();
  }
  return;
}



/* ---- FUN_10f0_2177 @ 10f0:2177  (98 octets) ---- */

uint __stdcall16far
FUN_10f0_2177(undefined4 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4,
             undefined2 param_5,undefined2 param_6,undefined2 param_7)

{
  uint uVar1;
  int iVar2;
  undefined2 uVar3;
  
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  iVar2 = (int)param_1;
  uVar1 = FUN_1150_0db2(param_6,param_7,*(undefined2 *)(iVar2 + 4),*(undefined2 *)(iVar2 + 6));
  if (((uVar1 == 0) &&
      (uVar1 = FUN_1150_0db2(param_4,param_5,*(undefined2 *)(iVar2 + 8),*(undefined2 *)(iVar2 + 10))
      , uVar1 == 0)) &&
     (uVar1 = FUN_1150_0db2(param_2,param_3,*(undefined2 *)(iVar2 + 0xc),
                            *(undefined2 *)(iVar2 + 0xe)), uVar1 == 0)) {
    return 1;
  }
  return uVar1 & 0xff00;
}



/* ---- FUN_10f0_228a @ 10f0:228a  (70 octets) ---- */

undefined4 __stdcall16far
FUN_10f0_228a(undefined4 param_1,char param_2,undefined2 param_3,undefined2 param_4)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uStack_a;
  
  if (param_2 != '\0') {
    FUN_1158_1fe2();
  }
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  FUN_1128_17b8(iVar1,uVar2,0);
  *(undefined2 *)(iVar1 + 0x2b) = param_3;
  *(undefined2 *)(iVar1 + 0x2d) = param_4;
  if (param_2 != '\0') {
    DAT_1160_1858 = uStack_a;
  }
  return param_1;
}



/* ---- TPrinterCanvas_CreateHandle @ 10f0:22d0  (54 octets) ---- */

void __stdcall16far TPrinterCanvas_CreateHandle(undefined4 param_1)

{
  int iVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  FUN_10f0_241d((int)*(undefined4 *)(iVar1 + 0x2b),
                (int)((ulong)*(undefined4 *)(iVar1 + 0x2b) >> 0x10),1);
  TPrinterCanvas_UpdateFont(iVar1,uVar2);
  FUN_1128_225d(iVar1,uVar2,*(undefined2 *)((int)*(undefined4 *)(iVar1 + 0x2b) + 0x1b));
  return;
}



/* ---- TPrinterCanvas_Changing @ 10f0:2306  (33 octets) ---- */

void __stdcall16far TPrinterCanvas_Changing(undefined4 param_1)

{
  undefined4 uVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  uVar1 = *(undefined4 *)((int)param_1 + 0x2b);
  FUN_10f0_2566((int)uVar1,(int)((ulong)uVar1 >> 0x10),1);
  FUN_1128_235b((int)param_1,uVar2);
  return;
}



/* ---- TPrinterCanvas_UpdateFont @ 10f0:2327  (71 octets) ---- */

void __stdcall16far TPrinterCanvas_UpdateFont(undefined4 param_1)

{
  undefined2 uVar1;
  undefined2 uVar2;
  int iVar3;
  undefined2 uVar4;
  
  uVar4 = (undefined2)((ulong)param_1 >> 0x10);
  iVar3 = (int)param_1;
  uVar1 = FUN_1128_11cc((int)*(undefined4 *)(iVar3 + 7),
                        (int)((ulong)*(undefined4 *)(iVar3 + 7) >> 0x10));
  uVar2 = GETDEVICECAPS(0x1128,0x5a);
  *(undefined2 *)((int)*(undefined4 *)(iVar3 + 7) + 0x14) = uVar2;
  FUN_1128_11f5((int)*(undefined4 *)(iVar3 + 7),(int)((ulong)*(undefined4 *)(iVar3 + 7) >> 0x10),
                uVar1);
  return;
}



/* ---- FUN_10f0_236e @ 10f0:236e  (62 octets) ---- */

undefined4 __stdcall16far FUN_10f0_236e(undefined4 param_1,char param_2)

{
  undefined2 uVar1;
  undefined2 uStack_a;
  
  if (param_2 != '\0') {
    FUN_1158_1fe2();
  }
  uVar1 = (undefined2)((ulong)param_1 >> 0x10);
  FUN_1158_1f50((int)param_1,uVar1,0);
  *(undefined2 *)((int)param_1 + 0x12) = 0xffff;
  if (param_2 != '\0') {
    DAT_1160_1858 = uStack_a;
  }
  return param_1;
}



/* ---- FUN_10f0_23ac @ 10f0:23ac  (113 octets) ---- */

void __stdcall16far FUN_10f0_23ac(undefined4 param_1,char param_2)

{
  int iVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  if (*(char *)(iVar1 + 0x18) != '\0') {
    FUN_10f0_2655(iVar1,uVar2);
  }
  FUN_10f0_241d(iVar1,uVar2,0);
  FUN_10f0_2d87(iVar1,uVar2);
  FUN_10f0_2dfd(iVar1,uVar2);
  FUN_1158_1f7f((int)*(undefined4 *)(iVar1 + 4),(int)((ulong)*(undefined4 *)(iVar1 + 4) >> 0x10));
  if (*(int *)(iVar1 + 0x23) != 0) {
    FREELIBRARY(0x1158,*(undefined2 *)(iVar1 + 0x23));
  }
  FUN_1158_1f66(iVar1,uVar2,0);
  if (param_2 != '\0') {
    FUN_1158_200f();
  }
  return;
}



/* ---- FUN_10f0_241d @ 10f0:241d  (329 octets) ---- */

void __stdcall16far FUN_10f0_241d(undefined4 param_1,char param_2)

{
  undefined2 *puVar1;
  int iVar2;
  int iVar3;
  undefined2 uVar4;
  undefined2 unaff_CS;
  undefined2 uVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  code *local_6;
  code *local_4;
  
  uVar4 = (undefined2)((ulong)param_1 >> 0x10);
  iVar3 = (int)param_1;
  if (param_2 != *(char *)(iVar3 + 0x1a)) {
    local_6 = (code *)0x0;
    local_4 = (code *)0x0;
    if (param_2 == '\0') {
      uVar5 = 0x10f0;
      FUN_10f0_2566(iVar3,uVar4,0);
      if (*(int *)(iVar3 + 6) != 0) {
        uVar5 = 0x1128;
        FUN_1128_225d((int)*(undefined4 *)(iVar3 + 4),
                      (int)((ulong)*(undefined4 *)(iVar3 + 4) >> 0x10),0);
      }
      DELETEDC(uVar5,*(undefined2 *)(iVar3 + 0x1b));
      *(undefined2 *)(iVar3 + 0x1b) = 0;
    }
    else if (param_2 == '\x01') {
      if (*(char *)(iVar3 + 0x1a) == '\x02') {
        return;
      }
      local_6 = (code *)0x2d8;
      local_4 = (code *)0x14d0;
    }
    else if (param_2 == '\x02') {
      if (*(int *)(iVar3 + 4) != 0 || *(int *)(iVar3 + 6) != 0) {
        unaff_CS = 0x1128;
        FUN_1128_225d((int)*(undefined4 *)(iVar3 + 4),
                      (int)((ulong)*(undefined4 *)(iVar3 + 4) >> 0x10),0);
      }
      if (*(int *)(iVar3 + 0x1b) != 0) {
        DELETEDC(unaff_CS,*(undefined2 *)(iVar3 + 0x1b));
      }
      local_6 = (code *)0x288;
      local_4 = (code *)0x14d0;
    }
    if (local_4 != (code *)0x0) {
      uVar5 = FUN_10f0_2ac2(iVar3,uVar4);
      puVar6 = (undefined4 *)FUN_10f0_2b01(iVar3,uVar4,uVar5);
      puVar1 = (undefined2 *)((int)*puVar6 + 0x14);
      uVar7 = (*(code *)*puVar1)(0x10f0,puVar6);
      uVar5 = (undefined2)((ulong)uVar7 >> 0x10);
      iVar2 = (int)uVar7;
      uVar5 = (*local_6)(0x10f0,0,*(undefined2 *)(iVar3 + 0x1d),*(undefined2 *)(iVar2 + 0xc),
                         *(undefined2 *)(iVar2 + 0xe),*(undefined2 *)(iVar2 + 8),
                         *(undefined2 *)(iVar2 + 10),*(undefined2 *)(iVar2 + 4),
                         *(undefined2 *)(iVar2 + 6));
      *(undefined2 *)(iVar3 + 0x1b) = uVar5;
      if (*(int *)(iVar3 + 0x1b) == 0) {
        FUN_10f0_1b60(0xf036);
      }
      if (*(int *)(iVar3 + 4) != 0 || *(int *)(iVar3 + 6) != 0) {
        FUN_1128_225d((int)*(undefined4 *)(iVar3 + 4),
                      (int)((ulong)*(undefined4 *)(iVar3 + 4) >> 0x10),*(undefined2 *)(iVar3 + 0x1b)
                     );
      }
    }
    *(char *)(iVar3 + 0x1a) = param_2;
  }
  return;
}



/* ---- FUN_10f0_2566 @ 10f0:2566  (39 octets) ---- */

void __stdcall16far FUN_10f0_2566(undefined4 param_1,char param_2)

{
  if (*(char *)((int)param_1 + 0x18) != param_2) {
    if (param_2 == '\0') {
      FUN_10f0_1b60(0xf034);
    }
    else {
      FUN_10f0_1b60(0xf033);
    }
  }
  return;
}



/* ---- FUN_10f0_258d @ 10f0:258d  (27 octets) ---- */

void __stdcall16far FUN_10f0_258d(undefined4 param_1)

{
  undefined2 uVar1;
  
  uVar1 = (undefined2)((ulong)param_1 >> 0x10);
  FUN_10f0_2566((int)param_1,uVar1,1);
  *(undefined *)((int)param_1 + 0x19) = 1;
  return;
}



/* ---- FUN_10f0_25a8 @ 10f0:25a8  (173 octets) ---- */

void __stdcall16far FUN_10f0_25a8(undefined4 param_1)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 unaff_SS;
  undefined4 uVar3;
  undefined *puVar4;
  undefined2 uVar5;
  undefined *puVar6;
  undefined2 uVar7;
  undefined local_12c [256];
  undefined2 local_2c;
  undefined *local_2a;
  undefined local_22 [32];
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  FUN_10f0_2566(iVar1,uVar2,0);
  FUN_10f0_241d(iVar1,uVar2,2);
  uVar3 = FUN_10f0_2a04(iVar1,uVar2);
  FUN_1128_1e65(uVar3);
  *(undefined *)(iVar1 + 0x18) = 1;
  *(undefined *)(iVar1 + 0x19) = 0;
  *(undefined2 *)(iVar1 + 0xc) = 1;
  puVar6 = local_22;
  puVar4 = local_12c;
  uVar5 = unaff_SS;
  uVar7 = unaff_SS;
  FUN_10f0_2cf0(iVar1,uVar2);
  FUN_1150_0d6a(0x1f,puVar4,uVar5,puVar6,uVar7);
  local_2c = 10;
  local_2a = local_22;
  uVar5 = *(undefined2 *)(iVar1 + 0x1b);
  SETABORTPROC(0x1150,0x1b8d,0x10f0);
  uVar7 = *(undefined2 *)(iVar1 + 0x1b);
  STARTDOC(0x14d0,&local_2c,unaff_SS);
  STARTPAGE(0x14d0,*(undefined2 *)(iVar1 + 0x1b),uVar7,uVar5);
  return;
}



/* ---- FUN_10f0_2655 @ 10f0:2655  (69 octets) ---- */

void __stdcall16far FUN_10f0_2655(undefined4 param_1)

{
  int iVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  FUN_10f0_2566(iVar1,uVar2,1);
  ENDPAGE(0x10f0,*(undefined2 *)(iVar1 + 0x1b));
  if (*(char *)(iVar1 + 0x19) == '\0') {
    ENDDOC(0x14d0,*(undefined2 *)(iVar1 + 0x1b));
  }
  *(undefined *)(iVar1 + 0x18) = 0;
  *(undefined *)(iVar1 + 0x19) = 0;
  *(undefined2 *)(iVar1 + 0xc) = 0;
  return;
}



/* ---- FUN_10f0_269a @ 10f0:269a  (68 octets) ---- */

void __stdcall16far FUN_10f0_269a(undefined4 param_1)

{
  int iVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  FUN_10f0_2566(iVar1,uVar2,1);
  ENDPAGE(0x10f0,*(undefined2 *)(iVar1 + 0x1b));
  STARTPAGE(0x14d0,*(undefined2 *)(iVar1 + 0x1b));
  *(int *)(iVar1 + 0xc) = *(int *)(iVar1 + 0xc) + 1;
  uVar3 = FUN_10f0_2a04(iVar1,uVar2);
  FUN_1128_1e65(uVar3);
  return;
}



/* ---- FUN_10f0_26de @ 10f0:26de  (128 octets) ---- */

void __stdcall16far
FUN_10f0_26de(undefined4 param_1,undefined2 *param_2,undefined2 param_3,undefined2 param_4,
             undefined2 param_5,undefined2 param_6,undefined2 param_7,undefined2 param_8)

{
  undefined2 *puVar1;
  undefined2 uVar2;
  int iVar3;
  undefined2 uVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  
  uVar4 = (undefined2)((ulong)param_1 >> 0x10);
  iVar3 = (int)param_1;
  *param_2 = *(undefined2 *)(iVar3 + 0x1d);
  uVar2 = FUN_10f0_2ac2(iVar3,uVar4);
  puVar5 = (undefined4 *)FUN_10f0_2b01(iVar3,uVar4,uVar2);
  puVar1 = (undefined2 *)((int)*puVar5 + 0x14);
  uVar6 = (*(code *)*puVar1)(0x10f0,puVar5);
  uVar2 = (undefined2)((ulong)uVar6 >> 0x10);
  iVar3 = (int)uVar6;
  FUN_1150_0cdf(*(undefined2 *)(iVar3 + 8),*(undefined2 *)(iVar3 + 10),param_7,param_8);
  FUN_1150_0cdf(*(undefined2 *)(iVar3 + 4),*(undefined2 *)(iVar3 + 6),param_5,param_6);
  FUN_1150_0cdf(*(undefined2 *)(iVar3 + 0xc),*(undefined2 *)(iVar3 + 0xe),param_3,param_4);
  return;
}



/* ---- FUN_10f0_2767 @ 10f0:2767  (669 octets) ---- */

void __stdcall16far
FUN_10f0_2767(undefined4 param_1,int param_2,undefined2 param_3,undefined2 param_4,
             undefined2 param_5,undefined2 param_6,undefined2 param_7,undefined2 param_8)

{
  uint uVar1;
  undefined2 *puVar2;
  char cVar3;
  undefined extraout_AH;
  undefined2 uVar4;
  int iVar5;
  int iVar6;
  undefined2 uVar7;
  undefined2 unaff_SS;
  undefined4 *puVar8;
  undefined4 uVar9;
  undefined2 uVar10;
  undefined2 uVar11;
  undefined *puVar12;
  undefined2 uVar13;
  undefined2 uVar14;
  undefined2 uVar15;
  undefined local_25a [256];
  undefined2 local_15a;
  undefined2 local_158;
  undefined local_156;
  undefined2 local_152;
  undefined2 local_150;
  undefined local_14e;
  int local_14c;
  undefined local_14a [256];
  long local_4a;
  undefined local_46 [64];
  int local_6;
  int local_4;
  
  uVar7 = (undefined2)((ulong)param_1 >> 0x10);
  iVar6 = (int)param_1;
  FUN_10f0_2566(iVar6,uVar7,0);
  if (param_2 != *(int *)(iVar6 + 0x1d)) {
    cVar3 = FUN_10f0_1bc7(*(undefined2 *)(iVar6 + 0x1d));
    if (cVar3 != '\0') {
      GLOBALFREE(0x10f0,*(undefined2 *)(iVar6 + 0x1d));
    }
    *(int *)(iVar6 + 0x1d) = param_2;
  }
  FUN_10f0_2dfd(iVar6,uVar7);
  *(undefined2 *)(iVar6 + 0x1f) = 0;
  *(undefined2 *)(iVar6 + 0x21) = 0;
  if (*(int *)(iVar6 + 0x23) != 0) {
    FREELIBRARY(0x10f0,*(undefined2 *)(iVar6 + 0x23));
    *(undefined2 *)(iVar6 + 0x23) = 0;
  }
  FUN_10f0_241d(iVar6,uVar7,0);
  local_6 = -1;
  puVar8 = (undefined4 *)FUN_10f0_2b01(iVar6,uVar7);
  puVar2 = (undefined2 *)((int)*puVar8 + 0x10);
  local_14c = (*(code *)*puVar2)(0x10f0,puVar8);
  local_14c = local_14c + -1;
  if (-1 < local_14c) {
    local_4 = 0;
    while( true ) {
      uVar4 = param_3;
      uVar10 = param_4;
      uVar11 = param_7;
      uVar13 = param_8;
      uVar14 = param_5;
      uVar15 = param_6;
      puVar8 = (undefined4 *)
               FUN_10f0_2b01(iVar6,uVar7,local_4,param_3,param_4,param_7,param_8,param_5,param_6);
      puVar2 = (undefined2 *)((int)*puVar8 + 0x14);
      uVar9 = (*(code *)*puVar2)(0x10f0,puVar8);
      cVar3 = FUN_10f0_2177(uVar9,uVar4,uVar10,uVar11,uVar13,uVar14,uVar15);
      if (cVar3 != '\0') break;
      if (local_4 == local_14c) goto LAB_10f0_285d;
      local_4 = local_4 + 1;
    }
    local_6 = local_4;
  }
LAB_10f0_285d:
  if (local_6 == -1) {
    puVar8 = (undefined4 *)*(undefined4 *)(iVar6 + 0xe);
    puVar2 = (undefined2 *)((int)*puVar8 + 0x10);
    local_6 = (*(code *)*puVar2)(0x10f0,(undefined4 *)puVar8,(int)((ulong)puVar8 >> 0x10));
    puVar12 = local_25a;
    local_15a = param_7;
    local_158 = param_8;
    local_156 = 6;
    local_152 = param_3;
    local_150 = param_4;
    local_14e = 6;
    FUN_1150_1034(1,&local_15a,unaff_SS,0x275e,0x10f0);
    uVar9 = FUN_10f0_20be(0x20af,0x10f0,CONCAT11(extraout_AH,1),param_3,param_4,param_7,param_8,
                          param_5,param_6);
    puVar8 = (undefined4 *)*(undefined4 *)(iVar6 + 0xe);
    puVar2 = (undefined2 *)((int)*puVar8 + 0x28);
    (*(code *)*puVar2)(0x10f0,(undefined4 *)puVar8,(int)((ulong)puVar8 >> 0x10),uVar9,puVar12);
  }
  *(int *)(iVar6 + 0x12) = local_6;
  uVar9 = FUN_1150_0cdf(param_5,param_6,local_14a,unaff_SS);
  FUN_1150_0d8f(0x16d2,0x1160,uVar9);
  uVar4 = LOADLIBRARY(0x1150,local_14a);
  *(undefined2 *)(iVar6 + 0x23) = uVar4;
  if (*(uint *)(iVar6 + 0x23) < 0x11) {
    *(undefined2 *)(iVar6 + 0x23) = 0;
  }
  if (*(int *)(iVar6 + 0x23) != 0) {
    uVar9 = GETPROCADDRESS(0x14d0,0x16d7,0x1160);
    *(undefined2 *)(iVar6 + 0x1f) = (int)uVar9;
    *(undefined2 *)(iVar6 + 0x21) = (int)((ulong)uVar9 >> 0x10);
    if ((*(int *)(iVar6 + 0x21) != 0) && (*(int *)(iVar6 + 0x1d) == 0)) {
      iVar5 = (*(code *)*(undefined2 *)(iVar6 + 0x1f))(0x14d0,0,0,0,local_46);
      uVar4 = GLOBALALLOC(0x14d0,iVar5,iVar5 >> 0xf);
      *(undefined2 *)(iVar6 + 0x1d) = uVar4;
      if (*(int *)(iVar6 + 0x1d) != 0) {
        uVar1 = *(uint *)(iVar6 + 0x1d);
        local_4a = (ulong)uVar1 << 0x10;
        iVar5 = (*(code *)*(undefined2 *)(iVar6 + 0x1f))
                          (0x14d0,2,0,0,0,uVar1,param_3,param_4,param_7,param_8,0,uVar1,
                           *(undefined2 *)(iVar6 + 0x23),0);
        if (iVar5 < 0) {
          GLOBALFREE(0x14d0,*(undefined2 *)(iVar6 + 0x1d));
          *(undefined2 *)(iVar6 + 0x1d) = 0;
        }
      }
    }
  }
  return;
}



/* ---- FUN_10f0_2a04 @ 10f0:2a04  (77 octets) ---- */

undefined4 __stdcall16far FUN_10f0_2a04(undefined4 param_1)

{
  int iVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  if (*(int *)(iVar1 + 4) == 0 && *(int *)(iVar1 + 6) == 0) {
    uVar3 = FUN_10f0_228a(0x21f9,0x10f0,1,iVar1,uVar2);
    *(undefined2 *)(iVar1 + 4) = (int)uVar3;
    *(undefined2 *)(iVar1 + 6) = (int)((ulong)uVar3 >> 0x10);
  }
  return CONCAT22(*(undefined2 *)(iVar1 + 6),*(undefined2 *)(iVar1 + 4));
}



/* ---- FUN_10f0_2a51 @ 10f0:2a51  (33 octets) ---- */

undefined2 __stdcall16far FUN_10f0_2a51(undefined4 param_1)

{
  undefined2 uVar1;
  
  uVar1 = (undefined2)((ulong)param_1 >> 0x10);
  FUN_10f0_241d((int)param_1,uVar1,1);
  return *(undefined2 *)((int)param_1 + 0x1b);
}



/* ---- FUN_10f0_2a72 @ 10f0:2a72  (40 octets) ---- */

undefined2 __stdcall16far FUN_10f0_2a72(undefined4 param_1)

{
  undefined2 uVar1;
  
  FUN_10f0_241d((int)param_1,(int)((ulong)param_1 >> 0x10),1);
  uVar1 = GETDEVICECAPS(0x10f0,10);
  return uVar1;
}



/* ---- FUN_10f0_2a9a @ 10f0:2a9a  (40 octets) ---- */

undefined2 __stdcall16far FUN_10f0_2a9a(undefined4 param_1)

{
  undefined2 uVar1;
  
  FUN_10f0_241d((int)param_1,(int)((ulong)param_1 >> 0x10),1);
  uVar1 = GETDEVICECAPS(0x10f0,8);
  return uVar1;
}



/* ---- FUN_10f0_2ac2 @ 10f0:2ac2  (38 octets) ---- */

undefined2 __stdcall16far FUN_10f0_2ac2(undefined4 param_1)

{
  int iVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  if (*(int *)(iVar1 + 0x12) == -1) {
    FUN_10f0_2d2f(iVar1,uVar2);
  }
  return *(undefined2 *)(iVar1 + 0x12);
}



/* ---- FUN_10f0_2b01 @ 10f0:2b01  (448 octets) ---- */

undefined4 __stdcall16far FUN_10f0_2b01(undefined4 param_1)

{
  undefined2 *puVar1;
  undefined4 *puVar2;
  undefined extraout_AH;
  int iVar3;
  int iVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  undefined2 unaff_SS;
  undefined4 uVar8;
  char *pcVar9;
  undefined *puVar10;
  undefined2 uVar11;
  undefined *puStack_1da;
  undefined *puStack_1d8;
  undefined2 uStack_1d6;
  undefined2 uStack_1d4;
  undefined local_1ca [256];
  char *local_ca;
  undefined2 local_c8;
  undefined local_c6;
  char *local_c2;
  undefined2 local_c0;
  undefined local_be;
  undefined4 local_ba;
  undefined4 local_b6;
  undefined4 local_b2;
  undefined local_5e [80];
  undefined *local_e;
  
  uVar5 = (undefined2)((ulong)param_1 >> 0x10);
  iVar4 = (int)param_1;
  if (*(int *)(iVar4 + 0xe) != 0 || *(int *)(iVar4 + 0x10) != 0) {
    return CONCAT22(*(undefined2 *)(iVar4 + 0x10),*(undefined2 *)(iVar4 + 0xe));
  }
  uStack_1d4 = 0x2b25;
  uVar8 = FUN_1148_1d08();
  *(undefined2 *)(iVar4 + 0xe) = (int)uVar8;
  *(undefined2 *)(iVar4 + 0x10) = (int)((ulong)uVar8 >> 0x10);
  DAT_1160_1858 = (undefined **)&stack0xfe2e;
  uStack_1d4 = 0x1000;
  uStack_1d6 = 0x1148;
  puStack_1d8 = (undefined *)0x2b46;
  pcVar9 = (char *)FUN_1158_0182();
  uStack_1d4 = 0x1158;
  uStack_1d6 = 0x2af1;
  puStack_1da = (undefined *)DAT_1160_1858;
  uVar11 = 0x1160;
  uVar6 = 0x14d0;
  DAT_1160_1858 = &puStack_1da;
  puStack_1d8 = &stack0xfffe;
  GETPROFILESTRING(0x1158,0x1000,pcVar9,0x16ed,0x1160,0,0,0x16e6);
  local_b2 = pcVar9;
  while (*local_b2 != '\0') {
    uVar7 = 0x14d0;
    GETPROFILESTRING(uVar6,0x50,local_5e,unaff_SS,0x16ed,0x1160,(char *)local_b2,local_b2._2_2_,
                     0x16e6);
    local_e = local_5e;
    uVar8 = FUN_10f0_1ad3(&local_e,unaff_SS);
    local_b6 = uVar8;
    local_ba = (char *)FUN_10f0_1ad3(&local_e,unaff_SS);
    while (*local_ba != '\0') {
      puVar10 = local_1ca;
      local_ca = (char *)local_b2;
      local_c8 = local_b2._2_2_;
      local_c6 = 6;
      local_c2 = (char *)local_ba;
      local_c0 = local_ba._2_2_;
      local_be = 6;
      FUN_1150_1034(1,&local_ca,unaff_SS,0x2ae8,uVar7);
      uVar7 = 0x10f0;
      uVar8 = FUN_10f0_20be(0x20af,0x10f0,CONCAT11(extraout_AH,1),(char *)local_ba,local_ba._2_2_,
                            (char *)local_b2,local_b2._2_2_,local_b6);
      puVar2 = (undefined4 *)*(undefined4 *)(iVar4 + 0xe);
      puVar1 = (undefined2 *)((int)*puVar2 + 0x28);
      (*(code *)*puVar1)(0x10f0,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),uVar8,puVar10);
      local_ba = (char *)FUN_10f0_1ad3(&local_e,unaff_SS);
    }
    uVar6 = 0x1150;
    iVar3 = FUN_1150_0c8c((char *)local_b2,local_b2._2_2_);
    local_b2 = (char *)CONCAT22(local_b2._2_2_,(char *)local_b2 + iVar3 + 1);
  }
  puStack_1d8 = (undefined *)0x2ca6;
  DAT_1160_1858 = (undefined **)uVar11;
  puStack_1da = (undefined *)((ulong)pcVar9 >> 0x10);
  uStack_1d6 = uVar6;
  uVar8 = FUN_1158_019c(0x1000,(char *)pcVar9);
  return uVar8;
}



/* ---- FUN_10f0_2cf0 @ 10f0:2cf0  (63 octets) ---- */

void __stdcall16far FUN_10f0_2cf0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 unaff_CS;
  undefined4 uVar3;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  if (*(int *)(iVar1 + 0x14) == 0 && *(int *)(iVar1 + 0x16) == 0) {
    uVar3 = FUN_1150_05d7(0x2cef,unaff_CS);
    *(undefined2 *)(iVar1 + 0x14) = (int)uVar3;
    *(undefined2 *)(iVar1 + 0x16) = (int)((ulong)uVar3 >> 0x10);
  }
  FUN_1158_17e7(0xff,(int)param_2,(int)((ulong)param_2 >> 0x10),(int)*(undefined4 *)(iVar1 + 0x14),
                (int)((ulong)*(undefined4 *)(iVar1 + 0x14) >> 0x10));
  return;
}



/* ---- FUN_10f0_2d2f @ 10f0:2d2f  (88 octets) ---- */

void __stdcall16far FUN_10f0_2d2f(undefined4 param_1)

{
  undefined2 unaff_CS;
  undefined2 unaff_SS;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined *local_5a;
  undefined local_56 [84];
  
  GETPROFILESTRING(unaff_CS,0x4f,local_56,unaff_SS,0x16f5,0x1160,0x16f6,0x1160,0x16ee);
  local_5a = local_56;
  uVar1 = FUN_10f0_1ad3(&local_5a,unaff_SS);
  uVar2 = FUN_10f0_1ad3(&local_5a,unaff_SS);
  uVar3 = FUN_10f0_1ad3(&local_5a,unaff_SS);
  FUN_10f0_2767((int)param_1,(int)((ulong)param_1 >> 0x10),0,uVar3,uVar2,uVar1);
  return;
}



/* ---- FUN_10f0_2d87 @ 10f0:2d87  (118 octets) ---- */

void __stdcall16far FUN_10f0_2d87(undefined4 param_1)

{
  undefined2 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  undefined2 unaff_CS;
  undefined4 uVar8;
  int local_4;
  
  uVar6 = (undefined2)((ulong)param_1 >> 0x10);
  iVar4 = (int)param_1;
  if (*(int *)(iVar4 + 0xe) != 0 || *(int *)(iVar4 + 0x10) != 0) {
    puVar2 = (undefined4 *)*(undefined4 *)(iVar4 + 0xe);
    uVar7 = (undefined2)((ulong)puVar2 >> 0x10);
    puVar5 = (undefined4 *)puVar2;
    puVar1 = (undefined2 *)((int)*puVar2 + 0x10);
    iVar3 = (*(code *)*puVar1)();
    if (-1 < iVar3 + -1) {
      local_4 = 0;
      while( true ) {
        puVar2 = (undefined4 *)*(undefined4 *)(iVar4 + 0xe);
        puVar1 = (undefined2 *)((int)*puVar2 + 0x14);
        uVar8 = (*(code *)*puVar1)(unaff_CS,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),
                                   local_4,puVar5,uVar7);
        unaff_CS = 0x1158;
        FUN_1158_1f7f(uVar8);
        if (local_4 == iVar3 + -1) break;
        local_4 = local_4 + 1;
      }
    }
    FUN_1158_1f7f((int)*(undefined4 *)(iVar4 + 0xe),
                  (int)((ulong)*(undefined4 *)(iVar4 + 0xe) >> 0x10));
    *(undefined2 *)(iVar4 + 0xe) = 0;
    *(undefined2 *)(iVar4 + 0x10) = 0;
  }
  return;
}



/* ---- FUN_10f0_2dfd @ 10f0:2dfd  (34 octets) ---- */

void __stdcall16far FUN_10f0_2dfd(undefined4 param_1)

{
  int iVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  FUN_1158_1f7f((int)*(undefined4 *)(iVar1 + 8),(int)((ulong)*(undefined4 *)(iVar1 + 8) >> 0x10));
  *(undefined2 *)(iVar1 + 8) = 0;
  *(undefined2 *)(iVar1 + 10) = 0;
  return;
}



/* ---- FUN_10f0_2e1f @ 10f0:2e1f  (16 octets) ---- */

void __cdecl16far FUN_10f0_2e1f(void)

{
  FUN_1158_1f7f((int)DAT_1160_2c54,(int)((ulong)DAT_1160_2c54 >> 0x10));
  return;
}



/* ---- FUN_10f0_2e2f @ 10f0:2e2f  (41 octets) ---- */

void __cdecl16far FUN_10f0_2e2f(void)

{
  DAT_1160_2c54 = FUN_10f0_236e(0x1aca,0x10f0,1);
  FUN_1150_0574(0x2e1f,0x10f0);
  return;
}




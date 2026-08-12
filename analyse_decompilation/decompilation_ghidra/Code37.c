/* Simstrat (FR).EXE - segment Code37 - 178 fonctions
   Decompile par Ghidra 11.2.1 (x86 16 bits, chargeur NE). */

/* ---- FUN_1120_3f20 @ 1120:3f20  (90 octets) ---- */

undefined4 __stdcall16far
FUN_1120_3f20(undefined4 param_1,char param_2,undefined2 param_3,undefined2 param_4)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uStack_a;
  
  if (param_2 != '\0') {
    FUN_1158_1fe2();
  }
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  FUN_1138_6c72(iVar1,uVar2,0,param_3,param_4);
  *(undefined2 *)(iVar1 + 0x26) = 0xab;
  FUN_1138_17bf(iVar1,uVar2,0xb9);
  FUN_1138_17e1(iVar1,uVar2,0x69);
  if (param_2 != '\0') {
    DAT_1160_1858 = uStack_a;
  }
  return param_1;
}



/* ---- FUN_1120_420f @ 1120:420f  (29 octets) ---- */

void __stdcall16far FUN_1120_420f(undefined4 *param_1)

{
  undefined2 *puVar1;
  
  puVar1 = (undefined2 *)((int)*param_1 + 0x44);
  (*(code *)*puVar1)();
  FUN_1138_36f9((undefined4 *)param_1,(int)((ulong)param_1 >> 0x10));
  return;
}



/* ---- FUN_1120_422c @ 1120:422c  (45 octets) ---- */

void __stdcall16far FUN_1120_422c(undefined4 *param_1,undefined2 param_2,undefined2 param_3)

{
  undefined2 *puVar1;
  undefined4 *puVar2;
  undefined2 uVar3;
  
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  puVar2 = (undefined4 *)param_1;
  FUN_1138_57d8(puVar2,uVar3,param_2,param_3);
  puVar1 = (undefined2 *)((int)*param_1 + 0x44);
  (*(code *)*puVar1)(0x1138,puVar2,uVar3);
  FUN_1138_36f9(puVar2,uVar3);
  return;
}



/* ---- FUN_1120_4259 @ 1120:4259  (109 octets) ---- */

undefined4 __stdcall16far
FUN_1120_4259(undefined4 param_1,char param_2,undefined2 param_3,undefined2 param_4)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uStack_a;
  
  if (param_2 != '\0') {
    FUN_1158_1fe2();
  }
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  FUN_1138_6886(iVar1,uVar2,0,param_3,param_4);
  *(uint *)(iVar1 + 0x26) = *(uint *)(iVar1 + 0x26) | 0x40;
  FUN_1138_17bf(iVar1,uVar2,0x41);
  FUN_1138_17e1(iVar1,uVar2,0x11);
  *(undefined *)(iVar1 + 0x93) = 1;
  *(undefined *)(iVar1 + 0x95) = 1;
  if (param_2 != '\0') {
    DAT_1160_1858 = uStack_a;
  }
  return param_1;
}



/* ---- FUN_1120_42c6 @ 1120:42c6  (205 octets) ---- */

void __stdcall16far FUN_1120_42c6(undefined4 param_1,uint param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 unaff_SS;
  char *pcVar4;
  char local_102;
  char local_101;
  
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  iVar2 = (int)param_1;
  FUN_1138_1d02(iVar2,uVar3,0x100,&local_102,unaff_SS);
  if (((param_2 & 0x400) != 0) &&
     ((local_102 == '\0' ||
      (((*(char *)(iVar2 + 0x95) != '\0' && (local_102 == '&')) && (local_101 == '\0')))))) {
    FUN_1150_0cdf(0xe66,0x1160,&local_102,unaff_SS);
  }
  if (*(char *)(iVar2 + 0x95) == '\0') {
    param_2 = param_2 | 0x800;
  }
  FUN_1128_2099((int)*(undefined4 *)(iVar2 + 0x8a),
                (int)((ulong)*(undefined4 *)(iVar2 + 0x8a) >> 0x10),*(undefined2 *)(iVar2 + 0x34),
                *(undefined2 *)(iVar2 + 0x36));
  if (*(char *)(iVar2 + 0x2a) == '\0') {
    uVar1 = *(undefined4 *)((int)*(undefined4 *)(iVar2 + 0x8a) + 7);
    FUN_1128_0fdf((int)uVar1,(int)((ulong)uVar1 >> 0x10),0xffee,0xffff);
  }
  FUN_1128_21d2((int)*(undefined4 *)(iVar2 + 0x8a),
                (int)((ulong)*(undefined4 *)(iVar2 + 0x8a) >> 0x10));
  pcVar4 = &local_102;
  uVar3 = FUN_1150_0c8c(&local_102,unaff_SS);
  DRAWTEXT(0x1150,param_2,(int)param_3,(int)((ulong)param_3 >> 0x10),uVar3,pcVar4,unaff_SS);
  return;
}



/* ---- FUN_1120_4393 @ 1120:4393  (185 octets) ---- */

void __stdcall16far FUN_1120_4393(undefined4 *param_1)

{
  undefined2 *puVar1;
  char cVar2;
  undefined4 *puVar3;
  undefined2 uVar4;
  undefined2 unaff_SS;
  undefined4 *puVar5;
  undefined2 uVar6;
  undefined *puVar7;
  undefined local_16 [8];
  int local_e;
  undefined2 local_c;
  undefined local_a [8];
  
  uVar4 = (undefined2)((ulong)param_1 >> 0x10);
  puVar3 = (undefined4 *)param_1;
  local_c = (undefined2)((ulong)*(undefined4 *)((int)puVar3 + 0x8a) >> 0x10);
  local_e = (int)*(undefined4 *)((int)puVar3 + 0x8a);
  cVar2 = FUN_1120_4561(puVar3,uVar4);
  if (cVar2 == '\0') {
    FUN_1128_1684((int)*(undefined4 *)(local_e + 0xf),
                  (int)((ulong)*(undefined4 *)(local_e + 0xf) >> 0x10),*(undefined2 *)(puVar3 + 0xe)
                  ,*(undefined2 *)((int)puVar3 + 0x3a));
    FUN_1128_177c((int)*(undefined4 *)(local_e + 0xf),
                  (int)((ulong)*(undefined4 *)(local_e + 0xf) >> 0x10),0);
    puVar7 = local_16;
    puVar1 = (undefined2 *)((int)*param_1 + 0x34);
    uVar6 = unaff_SS;
    (*(code *)*puVar1)(0x1128,puVar3,uVar4,puVar7);
    FUN_1128_1ce5(local_e,local_c,puVar7,uVar6);
  }
  FUN_1128_177c((int)*(undefined4 *)(local_e + 0xf),
                (int)((ulong)*(undefined4 *)(local_e + 0xf) >> 0x10),1);
  puVar1 = (undefined2 *)((int)*param_1 + 0x34);
  puVar5 = puVar3;
  uVar6 = uVar4;
  (*(code *)*puVar1)(0x1128,puVar3,uVar4,local_16);
  FUN_1158_161b(8,local_a,unaff_SS,puVar5,uVar6);
  FUN_1120_42c6(puVar3,uVar4,*(uint *)(*(char *)((int)puVar3 + 0x92) * 2 + 0xe68) | 0x50,local_a,
                unaff_SS);
  return;
}



/* ---- FUN_1120_444c @ 1120:444c  (205 octets) ---- */

void __stdcall16far FUN_1120_444c(undefined4 *param_1)

{
  undefined2 *puVar1;
  undefined4 *puVar2;
  undefined2 uVar3;
  undefined2 unaff_SS;
  undefined4 *puVar4;
  undefined2 uVar5;
  undefined *puVar6;
  undefined local_16 [8];
  undefined local_e [4];
  int local_a;
  undefined2 local_8;
  int local_6;
  undefined2 local_4;
  
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  puVar2 = (undefined4 *)param_1;
  if (((*(byte *)(puVar2 + 6) & 2) == 0) && (*(char *)((int)puVar2 + 0x93) != '\0')) {
    puVar6 = local_16;
    puVar1 = (undefined2 *)((int)*param_1 + 0x34);
    puVar4 = puVar2;
    uVar5 = uVar3;
    (*(code *)*puVar1)();
    FUN_1158_161b(8,local_e,unaff_SS,puVar4,uVar5);
    local_4 = GETDC(0x1158,0,puVar6);
    FUN_1128_225d((int)*(undefined4 *)((int)puVar2 + 0x8a),
                  (int)((ulong)*(undefined4 *)((int)puVar2 + 0x8a) >> 0x10),local_4);
    FUN_1120_42c6(puVar2,uVar3,*(uint *)(*(char *)(puVar2 + 0x25) * 2 + 0xe6e) | 0x440,local_e,
                  unaff_SS);
    FUN_1128_225d((int)*(undefined4 *)((int)puVar2 + 0x8a),
                  (int)((ulong)*(undefined4 *)((int)puVar2 + 0x8a) >> 0x10),0);
    uVar5 = 0;
    RELEASEDC(0x1128,local_4);
    local_6 = *(int *)((int)puVar2 + 0x1e);
    if (*(char *)((int)puVar2 + 0x92) == '\x01') {
      local_6 = local_6 + (*(int *)((int)puVar2 + 0x22) - local_a);
    }
    puVar1 = (undefined2 *)((int)*param_1 + 0x4c);
    (*(code *)*puVar1)(0x14d0,puVar2,uVar3,local_8,local_a,*(undefined2 *)(puVar2 + 8),local_6,uVar5
                      );
  }
  return;
}



/* ---- FUN_1120_4519 @ 1120:4519  (37 octets) ---- */

void __stdcall16far FUN_1120_4519(undefined4 *param_1,char param_2)

{
  undefined2 *puVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  if (*(char *)((int)(undefined4 *)param_1 + 0x92) != param_2) {
    *(char *)((int)(undefined4 *)param_1 + 0x92) = param_2;
    puVar1 = (undefined2 *)((int)*param_1 + 0x44);
    (*(code *)*puVar1)();
  }
  return;
}



/* ---- FUN_1120_453e @ 1120:453e  (35 octets) ---- */

void __stdcall16far FUN_1120_453e(undefined4 param_1,char param_2)

{
  int iVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  if (*(char *)(iVar1 + 0x93) != param_2) {
    *(char *)(iVar1 + 0x93) = param_2;
    FUN_1120_444c(iVar1,uVar2);
  }
  return;
}



/* ---- FUN_1120_4561 @ 1120:4561  (27 octets) ---- */

uint __stdcall16far FUN_1120_4561(undefined4 param_1)

{
  uint in_AX;
  uint uVar1;
  
  uVar1 = in_AX & 0xff00;
  if ((*(byte *)((int)param_1 + 0x26) & 0x40) == 0) {
    uVar1 = uVar1 + 1;
  }
  return uVar1;
}



/* ---- FUN_1120_457c @ 1120:457c  (37 octets) ---- */

void __stdcall16far FUN_1120_457c(undefined4 *param_1,char param_2)

{
  undefined2 *puVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  if (*(char *)((int)(undefined4 *)param_1 + 0x95) != param_2) {
    *(char *)((int)(undefined4 *)param_1 + 0x95) = param_2;
    puVar1 = (undefined2 *)((int)*param_1 + 0x44);
    (*(code *)*puVar1)();
  }
  return;
}



/* ---- FUN_1120_45a1 @ 1120:45a1  (70 octets) ---- */

void __stdcall16far FUN_1120_45a1(undefined4 *param_1,char param_2)

{
  undefined2 *puVar1;
  char cVar2;
  undefined4 *puVar3;
  undefined2 uVar4;
  
  uVar4 = (undefined2)((ulong)param_1 >> 0x10);
  puVar3 = (undefined4 *)param_1;
  cVar2 = FUN_1120_4561(puVar3,uVar4);
  if (cVar2 != param_2) {
    if (param_2 == '\0') {
      *(uint *)((int)puVar3 + 0x26) = *(uint *)((int)puVar3 + 0x26) | 0x40;
    }
    else {
      *(uint *)((int)puVar3 + 0x26) = *(uint *)((int)puVar3 + 0x26) & 0xffbf;
    }
    puVar1 = (undefined2 *)((int)*param_1 + 0x44);
    (*(code *)*puVar1)(0x1120,puVar3,uVar4);
  }
  return;
}



/* ---- FUN_1120_45e7 @ 1120:45e7  (35 octets) ---- */

void __stdcall16far FUN_1120_45e7(undefined4 param_1,char param_2)

{
  int iVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  if (*(char *)(iVar1 + 0x94) != param_2) {
    *(char *)(iVar1 + 0x94) = param_2;
    FUN_1120_444c(iVar1,uVar2);
  }
  return;
}



/* ---- FUN_1120_460a @ 1120:460a  (68 octets) ---- */

void __stdcall16far FUN_1120_460a(undefined4 param_1,char param_2,int param_3,int param_4)

{
  int iVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  FUN_1138_1632(iVar1,uVar2,param_2,param_3,param_4);
  if (param_2 == '\x01') {
    if ((param_4 == *(int *)(iVar1 + 0x90)) && (param_3 == *(int *)(iVar1 + 0x8e))) {
      *(undefined2 *)(iVar1 + 0x8e) = 0;
      *(undefined2 *)(iVar1 + 0x90) = 0;
    }
  }
  return;
}



/* ---- FUN_1120_464e @ 1120:464e  (29 octets) ---- */

void __stdcall16far FUN_1120_464e(undefined4 *param_1)

{
  undefined2 *puVar1;
  
  puVar1 = (undefined2 *)((int)*param_1 + 0x44);
  (*(code *)*puVar1)();
  FUN_1120_444c((undefined4 *)param_1,(int)((ulong)param_1 >> 0x10));
  return;
}



/* ---- FUN_1120_466b @ 1120:466b  (33 octets) ---- */

void __stdcall16far FUN_1120_466b(undefined4 param_1,undefined2 param_2,undefined2 param_3)

{
  undefined2 uVar1;
  
  uVar1 = (undefined2)((ulong)param_1 >> 0x10);
  FUN_1138_2d33((int)param_1,uVar1,param_2,param_3);
  FUN_1120_444c((int)param_1,uVar1);
  return;
}



/* ---- FUN_1120_4709 @ 1120:4709  (147 octets) ---- */

undefined4 __stdcall16far
FUN_1120_4709(undefined4 param_1,char param_2,undefined2 param_3,undefined2 param_4)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uStack_a;
  
  if (param_2 != '\0') {
    FUN_1158_1fe2();
  }
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  FUN_1138_2e61(iVar1,uVar2,0,param_3,param_4);
  *(undefined2 *)(iVar1 + 0x26) = 0x2b8;
  FUN_1138_17bf(iVar1,uVar2,0x79);
  FUN_1138_17e1(iVar1,uVar2,0x19);
  FUN_1138_6488(iVar1,uVar2,1);
  FUN_1138_1f32(iVar1,uVar2,0);
  *(undefined *)(iVar1 + 0xda) = 1;
  *(undefined *)(iVar1 + 0xdd) = 1;
  *(undefined *)(iVar1 + 0xde) = 1;
  *(undefined *)(iVar1 + 0xdf) = 1;
  FUN_1120_4c22(iVar1,uVar2);
  if (param_2 != '\0') {
    DAT_1160_1858 = uStack_a;
  }
  return param_1;
}



/* ---- FUN_1120_479c @ 1120:479c  (35 octets) ---- */

void __stdcall16far FUN_1120_479c(undefined4 param_1,char param_2)

{
  int iVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  if (*(char *)(iVar1 + 0xdd) != param_2) {
    *(char *)(iVar1 + 0xdd) = param_2;
    FUN_1120_4be6(iVar1,uVar2);
  }
  return;
}



/* ---- FUN_1120_47bf @ 1120:47bf  (45 octets) ---- */

void __stdcall16far FUN_1120_47bf(undefined4 param_1,char param_2)

{
  int iVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  if (*(char *)(iVar1 + 0xda) != param_2) {
    *(char *)(iVar1 + 0xda) = param_2;
    FUN_1120_4be6(iVar1,uVar2);
    FUN_1138_405a(iVar1,uVar2);
  }
  return;
}



/* ---- FUN_1120_47ec @ 1120:47ec  (35 octets) ---- */

void __stdcall16far FUN_1120_47ec(undefined4 param_1,char param_2)

{
  int iVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  if (*(char *)(iVar1 + 0xe1) != param_2) {
    *(char *)(iVar1 + 0xe1) = param_2;
    FUN_1138_405a(iVar1,uVar2);
  }
  return;
}



/* ---- FUN_1120_480f @ 1120:480f  (35 octets) ---- */

void __stdcall16far FUN_1120_480f(undefined4 param_1,char param_2)

{
  int iVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  if (*(char *)(iVar1 + 0xdf) != param_2) {
    *(char *)(iVar1 + 0xdf) = param_2;
    FUN_1138_405a(iVar1,uVar2);
  }
  return;
}



/* ---- FUN_1120_4832 @ 1120:4832  (65 octets) ---- */

void __stdcall16far FUN_1120_4832(undefined4 param_1,int param_2)

{
  char cVar1;
  int iVar2;
  undefined2 uVar3;
  
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  iVar2 = (int)param_1;
  if (*(int *)(iVar2 + 0xd8) != param_2) {
    *(int *)(iVar2 + 0xd8) = param_2;
    cVar1 = FUN_1138_64fa(iVar2,uVar3);
    if (cVar1 != '\0') {
      FUN_1138_62b9(iVar2,uVar3);
      SENDMESSAGE(0x1138,0,0,param_2,0x415);
    }
  }
  return;
}



/* ---- FUN_1120_4873 @ 1120:4873  (35 octets) ---- */

void __stdcall16far FUN_1120_4873(undefined4 param_1,char param_2)

{
  int iVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  if (*(char *)(iVar1 + 0xe0) != param_2) {
    *(char *)(iVar1 + 0xe0) = param_2;
    FUN_1138_405a(iVar1,uVar2);
  }
  return;
}



/* ---- FUN_1120_4896 @ 1120:4896  (64 octets) ---- */

bool __stdcall16far FUN_1120_4896(undefined4 param_1)

{
  char cVar1;
  undefined2 uVar2;
  long lVar3;
  bool local_3;
  
  local_3 = false;
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  cVar1 = FUN_1138_64fa((int)param_1,uVar2);
  if (cVar1 != '\0') {
    FUN_1138_62b9((int)param_1,uVar2);
    lVar3 = SENDMESSAGE(0x1138,0,0,0,0x408);
    local_3 = lVar3 != 0;
  }
  return local_3;
}



/* ---- FUN_1120_48d6 @ 1120:48d6  (50 octets) ---- */

void __stdcall16far FUN_1120_48d6(undefined4 param_1,undefined param_2)

{
  char cVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  cVar1 = FUN_1138_64fa((int)param_1,uVar2);
  if (cVar1 != '\0') {
    FUN_1138_62b9((int)param_1,uVar2);
    SENDMESSAGE(0x1138,0,0,param_2,0x409);
  }
  return;
}



/* ---- FUN_1120_4979 @ 1120:4979  (67 octets) ---- */

void __stdcall16far FUN_1120_4979(undefined4 param_1,char param_2)

{
  char cVar1;
  int iVar2;
  undefined2 uVar3;
  
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  iVar2 = (int)param_1;
  if (*(char *)(iVar2 + 0xdc) != param_2) {
    *(char *)(iVar2 + 0xdc) = param_2;
    cVar1 = FUN_1138_64fa(iVar2,uVar3);
    if (cVar1 != '\0') {
      FUN_1138_62b9(iVar2,uVar3);
      SENDMESSAGE(0x1138,0,0,(int)param_2,0x41f);
    }
  }
  return;
}



/* ---- FUN_1120_49bc @ 1120:49bc  (39 octets) ---- */

undefined2 __stdcall16far FUN_1120_49bc(undefined4 param_1)

{
  undefined2 uVar1;
  
  FUN_1138_62b9((int)param_1,(int)((ulong)param_1 >> 0x10));
  uVar1 = SENDMESSAGE(0x1138,0,0,0,0x400);
  return uVar1;
}



/* ---- FUN_1120_49e3 @ 1120:49e3  (28 octets) ---- */

void __stdcall16far FUN_1120_49e3(undefined4 param_1)

{
  undefined2 uVar1;
  
  uVar1 = FUN_1138_62b9((int)param_1,(int)((ulong)param_1 >> 0x10));
  SETWINDOWTEXT(0x1138,0xe72,0x1160,uVar1);
  return;
}



/* ---- FUN_1120_49ff @ 1120:49ff  (32 octets) ---- */

void __stdcall16far FUN_1120_49ff(undefined4 param_1)

{
  FUN_1138_62b9((int)param_1,(int)((ulong)param_1 >> 0x10));
  SENDMESSAGE(0x1138,0,0,0,0x301);
  return;
}



/* ---- FUN_1120_4a1f @ 1120:4a1f  (32 octets) ---- */

void __stdcall16far FUN_1120_4a1f(undefined4 param_1)

{
  FUN_1138_62b9((int)param_1,(int)((ulong)param_1 >> 0x10));
  SENDMESSAGE(0x1138,0,0,0,0x302);
  return;
}



/* ---- FUN_1120_4a3f @ 1120:4a3f  (32 octets) ---- */

void __stdcall16far FUN_1120_4a3f(undefined4 param_1)

{
  FUN_1138_62b9((int)param_1,(int)((ulong)param_1 >> 0x10));
  SENDMESSAGE(0x1138,0,0xffff,1,0x401);
  return;
}



/* ---- FUN_1120_4a5f @ 1120:4a5f  (253 octets) ---- */

void __stdcall16far FUN_1120_4a5f(undefined4 param_1,undefined4 param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  undefined2 uVar15;
  undefined2 uVar16;
  
  uVar15 = (undefined2)((ulong)param_2 >> 0x10);
  iVar8 = (int)param_2;
  uVar16 = (undefined2)((ulong)param_1 >> 0x10);
  iVar9 = (int)param_1;
  FUN_1138_3b29(iVar9,uVar16,iVar8,uVar15);
  FUN_1138_3ad0(iVar9,uVar16,0xea0,0x1160,iVar8,uVar15);
  iVar10 = *(char *)(iVar9 + 0xda) * 4;
  uVar1 = *(uint *)(iVar10 + 0xe60);
  uVar2 = *(uint *)(iVar8 + 6);
  iVar11 = (*(char *)(iVar9 + 0xdb) != '\0') * 4;
  uVar3 = *(uint *)(iVar11 + 0xe76);
  iVar12 = *(char *)(iVar9 + 0xdc) * 4;
  uVar4 = *(uint *)(iVar12 + 0xe7e);
  iVar13 = *(char *)(iVar9 + 0xe1) * 4;
  uVar5 = *(uint *)(iVar13 + 0xe86);
  iVar14 = *(char *)(iVar9 + 0xdf) * 4;
  uVar6 = *(uint *)(iVar14 + 0xe92);
  iVar9 = *(char *)(iVar9 + 0xe0) * 4;
  uVar7 = *(uint *)(iVar9 + 0xe9a);
  *(uint *)(iVar8 + 4) =
       *(uint *)(iVar9 + 0xe98) |
       *(uint *)(iVar14 + 0xe90) |
       *(uint *)(iVar13 + 0xe84) |
       *(uint *)(iVar12 + 0xe7c) |
       *(uint *)(iVar11 + 0xe74) | *(uint *)(iVar8 + 4) | 0xc0 | *(uint *)(iVar10 + 0xe5e);
  *(uint *)(iVar8 + 6) = uVar7 | uVar6 | uVar5 | uVar4 | uVar3 | uVar2 | uVar1;
  return;
}



/* ---- FUN_1120_4b62 @ 1120:4b62  (55 octets) ---- */

void __cdecl16far FUN_1120_4b62(undefined4 param_1)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uStack_a;
  undefined *puStack_8;
  undefined2 uStack_6;
  
  puStack_8 = &stack0xfffe;
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  *(undefined *)(iVar1 + 0xe2) = 1;
  uStack_6 = 0x4b5c;
  uStack_a = DAT_1160_1858;
  DAT_1160_1858 = &uStack_a;
  FUN_1138_3c88(iVar1,uVar2);
  DAT_1160_1858 = (undefined2 *)uStack_a;
  *(undefined *)(iVar1 + 0xe2) = 0;
  return;
}



/* ---- FUN_1120_4be6 @ 1120:4be6  (60 octets) ---- */

void __stdcall16far FUN_1120_4be6(undefined4 param_1)

{
  int iVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  if ((*(char *)(iVar1 + 0xdd) == '\0') || (*(char *)(iVar1 + 0xda) != '\x01')) {
    *(uint *)(iVar1 + 0x26) = *(uint *)(iVar1 + 0x26) & 0xfdff;
  }
  else {
    *(uint *)(iVar1 + 0x26) = *(uint *)(iVar1 + 0x26) | 0x200;
    FUN_1120_4c22(iVar1,uVar2);
  }
  return;
}



/* ---- FUN_1120_4c22 @ 1120:4c22  (148 octets) ---- */

void __stdcall16far FUN_1120_4c22(undefined4 param_1)

{
  undefined4 uVar1;
  undefined2 uVar2;
  int iVar3;
  undefined2 uVar4;
  undefined2 unaff_SS;
  undefined2 uVar5;
  undefined2 uVar6;
  int local_48 [16];
  int local_28 [16];
  int local_8;
  undefined2 local_6;
  undefined2 local_4;
  
  local_4 = GETDC();
  GETTEXTMETRICS(0x14d0,local_28,unaff_SS);
  uVar4 = (undefined2)((ulong)param_1 >> 0x10);
  uVar1 = *(undefined4 *)((int)param_1 + 0x34);
  uVar2 = FUN_1128_1016((int)uVar1,(int)((ulong)uVar1 >> 0x10));
  local_6 = SELECTOBJECT(0x1128,uVar2);
  uVar6 = local_4;
  GETTEXTMETRICS(0x14d0,local_48,unaff_SS);
  uVar2 = local_4;
  SELECTOBJECT(0x14d0,local_6);
  uVar5 = 0;
  RELEASEDC(0x14d0,local_4);
  local_8 = local_28[0];
  if (local_48[0] < local_28[0]) {
    local_8 = local_48[0];
  }
  iVar3 = GETSYSTEMMETRICS(0x14d0,6,uVar5,uVar2,uVar6);
  FUN_1138_17e1((int)param_1,uVar4,local_8 / 4 + local_48[0] + iVar3 * 4);
  return;
}



/* ---- FUN_1120_4cb6 @ 1120:4cb6  (40 octets) ---- */

void __stdcall16far FUN_1120_4cb6(undefined4 param_1)

{
  undefined2 *puVar1;
  
  if (*(int *)((int)param_1 + 0xe6) != 0) {
    puVar1 = (undefined2 *)((int)param_1 + 0xe4);
    (*(code *)*puVar1)();
  }
  return;
}



/* ---- FUN_1120_4cde @ 1120:4cde  (57 octets) ---- */

void __stdcall16far FUN_1120_4cde(undefined4 param_1,undefined2 param_2,undefined2 param_3)

{
  int iVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  FUN_1138_573a(iVar1,uVar2,param_2,param_3);
  if (((*(byte *)(iVar1 + 0x27) & 2) != 0) &&
     (((*(byte *)(iVar1 + 0x18) & 0x10) == 0 || ((*(byte *)(iVar1 + 0x18) & 1) == 0)))) {
    FUN_1120_4c22(iVar1,uVar2);
  }
  return;
}



/* ---- FUN_1120_4d17 @ 1120:4d17  (39 octets) ---- */

void __stdcall16far FUN_1120_4d17(undefined4 param_1,undefined4 param_2)

{
  if (*(int *)((int)param_2 + 6) == 0x300) {
    if (*(char *)((int)param_1 + 0xe2) == '\0') {
      FUN_1158_206a();
    }
  }
  return;
}



/* ---- FUN_1120_4d3e @ 1120:4d3e  (77 octets) ---- */

void __stdcall16far FUN_1120_4d3e(undefined4 param_1,undefined2 param_2,undefined2 param_3)

{
  uint uVar1;
  int iVar2;
  undefined2 uVar3;
  
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  iVar2 = (int)param_1;
  if ((*(char *)(iVar2 + 0xde) != '\0') && ((*(byte *)(iVar2 + 0x28) & 1) == 0)) {
    FUN_1138_62b9(iVar2,uVar3);
    uVar1 = GETWINDOWLONG(0x1138,0xfff0);
    if ((uVar1 & 4) == 0) {
      FUN_1120_4a3f(iVar2,uVar3);
    }
  }
  FUN_1138_55be(iVar2,uVar3,param_2,param_3);
  return;
}



/* ---- FUN_1120_4d8b @ 1120:4d8b  (81 octets) ---- */

void __stdcall16far FUN_1120_4d8b(undefined4 *param_1,undefined2 param_2,undefined2 param_3)

{
  undefined2 *puVar1;
  char cVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  undefined4 *puVar7;
  undefined2 uVar8;
  
  uVar5 = (undefined2)((ulong)param_1 >> 0x10);
  puVar4 = (undefined4 *)param_1;
  puVar1 = (undefined2 *)((int)*param_1 + -0x10);
  puVar7 = puVar4;
  uVar8 = uVar5;
  (*(code *)*puVar1)();
  uVar6 = 0x1138;
  cVar2 = FUN_1138_64fa(puVar4,uVar5);
  if (cVar2 != '\0') {
    FUN_1138_62b9(puVar4,uVar5);
    uVar6 = 0x14d0;
    uVar3 = GETWINDOWLONG(0x1138,0xfff0);
    if ((uVar3 & 4) == 0) {
      return;
    }
  }
  FUN_1158_206a(uVar6,puVar4,uVar5,puVar7,uVar8,param_2,param_3);
  return;
}



/* ---- FUN_1120_4ddc @ 1120:4ddc  (110 octets) ---- */

int __stdcall16far FUN_1120_4ddc(undefined4 param_1)

{
  undefined2 uVar1;
  int iVar2;
  undefined2 uVar3;
  long lVar4;
  int local_4;
  
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  iVar2 = (int)param_1;
  FUN_1138_62b9((int)*(undefined4 *)(iVar2 + 6),(int)((ulong)*(undefined4 *)(iVar2 + 6) >> 0x10));
  local_4 = SENDMESSAGE(0x1138,0,0,0,0x40a);
  FUN_1138_62b9((int)*(undefined4 *)(iVar2 + 6),(int)((ulong)*(undefined4 *)(iVar2 + 6) >> 0x10));
  uVar3 = FUN_1138_62b9((int)*(undefined4 *)(iVar2 + 6),
                        (int)((ulong)*(undefined4 *)(iVar2 + 6) >> 0x10));
  uVar1 = SENDMESSAGE(0x1138,0,0,local_4 + -1,0x40b);
  lVar4 = SENDMESSAGE(0x14d0,0,0,uVar1,uVar3);
  if (lVar4 == 0) {
    local_4 = local_4 + -1;
  }
  return local_4;
}



/* ---- FUN_1120_4e4a @ 1120:4e4a  (57 octets) ---- */

void __stdcall16far FUN_1120_4e4a(undefined4 param_1,undefined2 param_2,undefined *param_3)

{
  undefined4 uVar1;
  undefined uVar2;
  undefined2 uVar3;
  
  uVar3 = (undefined2)((ulong)param_3 >> 0x10);
  *(undefined2 *)((undefined *)param_3 + 1) = 0xff;
  uVar1 = *(undefined4 *)((int)param_1 + 6);
  FUN_1138_62b9((int)uVar1,(int)((ulong)uVar1 >> 0x10));
  uVar2 = SENDMESSAGE(0x1138,(undefined *)param_3 + 1,uVar3,param_2,0x414);
  *param_3 = uVar2;
  return;
}



/* ---- FUN_1120_5091 @ 1120:5091  (209 octets) ---- */

void __stdcall16far FUN_1120_5091(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 local_4;
  
  if (-1 < param_2) {
    uVar3 = (undefined2)((ulong)param_1 >> 0x10);
    iVar2 = (int)param_1;
    FUN_1138_62b9((int)*(undefined4 *)(iVar2 + 6),(int)((ulong)*(undefined4 *)(iVar2 + 6) >> 0x10));
    iVar1 = SENDMESSAGE(0x1138,0,0,param_2,0x40b);
    if (iVar1 != -1) {
      FUN_1138_62b9((int)*(undefined4 *)(iVar2 + 6),(int)((ulong)*(undefined4 *)(iVar2 + 6) >> 0x10)
                   );
      local_4 = SENDMESSAGE(0x1138,0,0,param_2 + 1,0x40b);
      if (local_4 == -1) {
        FUN_1138_62b9((int)*(undefined4 *)(iVar2 + 6),
                      (int)((ulong)*(undefined4 *)(iVar2 + 6) >> 0x10));
        local_4 = SENDMESSAGE(0x1138,0,0,iVar1,0x411);
        local_4 = iVar1 + local_4;
      }
      FUN_1138_62b9((int)*(undefined4 *)(iVar2 + 6),(int)((ulong)*(undefined4 *)(iVar2 + 6) >> 0x10)
                   );
      SENDMESSAGE(0x1138,iVar1,local_4,1,0x401);
      FUN_1138_62b9((int)*(undefined4 *)(iVar2 + 6),(int)((ulong)*(undefined4 *)(iVar2 + 6) >> 0x10)
                   );
      SENDMESSAGE(0x1138,s_Ctl3dSubclassCtl_1160_0ead._3_2_,s_Ctl3dSubclassCtl_1160_0ead._5_2_,0,
                  0x412);
    }
  }
  return;
}



/* ---- FUN_1120_5162 @ 1120:5162  (21 octets) ---- */

void __stdcall16far FUN_1120_5162(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)((int)param_1 + 6);
  FUN_1120_49e3((int)uVar1,(int)((ulong)uVar1 >> 0x10));
  return;
}



/* ---- FUN_1120_5177 @ 1120:5177  (64 octets) ---- */

void __stdcall16far FUN_1120_5177(undefined4 param_1,char param_2)

{
  undefined4 uVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  uVar1 = *(undefined4 *)((int)param_1 + 6);
  FUN_1138_62b9((int)uVar1,(int)((ulong)uVar1 >> 0x10));
  SENDMESSAGE(0x1138,0,0,param_2 == '\0',0xb);
  if (param_2 == '\0') {
    uVar1 = *(undefined4 *)((int)param_1 + 6);
    FUN_1138_22c6((int)uVar1,(int)((ulong)uVar1 >> 0x10));
  }
  return;
}



/* ---- FUN_1120_51b7 @ 1120:51b7  (69 octets) ---- */

int FUN_1120_51b7(char *param_1,char *param_2)

{
  char *pcVar1;
  char *pcVar2;
  char cVar3;
  char *pcVar4;
  char *pcVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  
  uVar6 = (undefined2)((ulong)param_2 >> 0x10);
  uVar7 = (undefined2)((ulong)param_1 >> 0x10);
  pcVar4 = (char *)param_1;
  pcVar2 = (char *)param_2;
LAB_1120_51c2:
  do {
    pcVar5 = pcVar2;
    pcVar1 = pcVar4;
    pcVar4 = pcVar4 + 1;
    cVar3 = *pcVar1;
    do {
      while( true ) {
        if (cVar3 == '\0') {
          *pcVar5 = '\0';
          return (int)pcVar5 - (int)(char *)param_2;
        }
        if (cVar3 == '\n') {
          pcVar5[0] = '\r';
          pcVar5[1] = '\n';
          pcVar2 = pcVar5 + 2;
          goto LAB_1120_51c2;
        }
        if (cVar3 != -0x14) break;
        pcVar1 = pcVar4;
        pcVar4 = pcVar4 + 1;
        cVar3 = *pcVar1;
        pcVar2 = pcVar5;
        if (cVar3 == '\n') goto LAB_1120_51c2;
        *pcVar5 = -0x14;
        pcVar5 = pcVar5 + 1;
      }
      pcVar2 = pcVar5 + 1;
      *pcVar5 = cVar3;
      if (cVar3 != '\r') break;
      pcVar5 = pcVar5 + 2;
      *pcVar2 = '\n';
      pcVar1 = pcVar4;
      pcVar4 = pcVar4 + 1;
      cVar3 = *pcVar1;
      pcVar2 = pcVar5;
    } while (cVar3 != '\n');
  } while( true );
}



/* ---- FUN_1120_541c @ 1120:541c  (159 octets) ---- */

undefined4 __stdcall16far
FUN_1120_541c(undefined4 param_1,char param_2,undefined2 param_3,undefined2 param_4)

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
  FUN_1120_4709(iVar1,uVar3,0,param_3,param_4);
  FUN_1138_17bf(iVar1,uVar3,0xb9);
  FUN_1138_17e1(iVar1,uVar3,0x59);
  FUN_1120_479c(iVar1,uVar3,0);
  *(undefined *)(iVar1 + 0xf2) = 1;
  *(undefined *)(iVar1 + 0xf3) = 1;
  uVar5 = FUN_1158_1f50(0x3d3a,0x1120,CONCAT11(extraout_AH,1));
  *(undefined2 *)(iVar1 + 0xec) = (int)uVar5;
  *(undefined2 *)(iVar1 + 0xee) = (int)((ulong)uVar5 >> 0x10);
  uVar4 = (undefined2)((ulong)*(undefined4 *)(iVar1 + 0xec) >> 0x10);
  iVar2 = (int)*(undefined4 *)(iVar1 + 0xec);
  *(int *)(iVar2 + 6) = iVar1;
  *(undefined2 *)(iVar2 + 8) = uVar3;
  if (param_2 != '\0') {
    DAT_1160_1858 = uStack_a;
  }
  return param_1;
}



/* ---- FUN_1120_54bb @ 1120:54bb  (46 octets) ---- */

void __stdcall16far FUN_1120_54bb(undefined4 param_1,char param_2)

{
  undefined4 uVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  uVar1 = *(undefined4 *)((int)param_1 + 0xec);
  FUN_1158_1f7f((int)uVar1,(int)((ulong)uVar1 >> 0x10));
  FUN_1138_2efc((int)param_1,uVar2,0);
  if (param_2 != '\0') {
    FUN_1158_200f();
  }
  return;
}



/* ---- FUN_1120_54e9 @ 1120:54e9  (133 octets) ---- */

void __stdcall16far FUN_1120_54e9(undefined4 param_1,undefined4 param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined2 uVar9;
  undefined2 uVar10;
  
  uVar9 = (undefined2)((ulong)param_2 >> 0x10);
  iVar5 = (int)param_2;
  uVar10 = (undefined2)((ulong)param_1 >> 0x10);
  iVar6 = (int)param_1;
  FUN_1120_4a5f(iVar6,uVar10,iVar5,uVar9);
  iVar7 = *(char *)(iVar6 + 0xf0) * 4;
  uVar1 = *(uint *)(iVar7 + 0xeb8);
  iVar8 = *(char *)(iVar6 + 0xf2) * 4;
  uVar2 = *(uint *)(iVar8 + 0xed4);
  uVar3 = *(uint *)(iVar5 + 6);
  iVar6 = *(char *)(iVar6 + 0xf1) * 4;
  uVar4 = *(uint *)(iVar6 + 0xec4);
  *(uint *)(iVar5 + 4) =
       *(uint *)(iVar6 + 0xec2) |
       ~*(uint *)(iVar8 + 0xed2) & *(uint *)(iVar5 + 4) | 4 | *(uint *)(iVar7 + 0xeb6);
  *(uint *)(iVar5 + 6) = uVar4 | ~uVar2 & uVar3 | uVar1;
  return;
}



/* ---- FUN_1120_556e @ 1120:556e  (162 octets) ---- */

void __stdcall16far FUN_1120_556e(undefined4 param_1,undefined2 *param_2)

{
  undefined2 uVar1;
  int iVar2;
  undefined2 *puVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined2 unaff_CS;
  
  uVar1 = GLOBALALLOC(unaff_CS,0x100,0);
  uVar4 = (undefined2)((ulong)param_1 >> 0x10);
  iVar2 = (int)param_1;
  *(undefined2 *)(iVar2 + 0xf6) = uVar1;
  if (*(int *)(iVar2 + 0xf6) == 0) {
    *(undefined2 *)(iVar2 + 0xf6) = DAT_1160_188c;
  }
  uVar5 = (undefined2)((ulong)param_2 >> 0x10);
  puVar3 = (undefined2 *)param_2;
  uVar1 = CREATEWINDOWEX(0x14d0,puVar3[0xb],puVar3[0xc],*(undefined2 *)(iVar2 + 0xf6),0,puVar3[10],
                         puVar3[9],puVar3[8],puVar3[7],puVar3[6],puVar3[2],puVar3[3],0xeda,0x1160,
                         puVar3 + 0x1a,uVar5,puVar3[4]);
  *(undefined2 *)(iVar2 + 0xa2) = uVar1;
  SENDMESSAGE(0x14d0,*param_2,puVar3[1],0,0xc);
  return;
}



/* ---- FUN_1120_5610 @ 1120:5610  (35 octets) ---- */

void __stdcall16far FUN_1120_5610(undefined4 param_1,char param_2)

{
  int iVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  if (*(char *)(iVar1 + 0xf0) != param_2) {
    *(char *)(iVar1 + 0xf0) = param_2;
    FUN_1138_405a(iVar1,uVar2);
  }
  return;
}



/* ---- FUN_1120_5633 @ 1120:5633  (30 octets) ---- */

void __stdcall16far FUN_1120_5633(undefined4 param_1)

{
  undefined2 *puVar1;
  
  puVar1 = (undefined2 *)((int)*(undefined4 *)*(undefined4 *)((int)param_1 + 0xec) + 8);
  (*(code *)*puVar1)();
  return;
}



/* ---- FUN_1120_5651 @ 1120:5651  (35 octets) ---- */

void __stdcall16far FUN_1120_5651(undefined4 param_1,char param_2)

{
  int iVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  if (*(char *)(iVar1 + 0xf1) != param_2) {
    *(char *)(iVar1 + 0xf1) = param_2;
    FUN_1138_405a(iVar1,uVar2);
  }
  return;
}



/* ---- FUN_1120_5674 @ 1120:5674  (35 octets) ---- */

void __stdcall16far FUN_1120_5674(undefined4 param_1,char param_2)

{
  int iVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  if (param_2 != *(char *)(iVar1 + 0xf2)) {
    *(char *)(iVar1 + 0xf2) = param_2;
    FUN_1138_405a(iVar1,uVar2);
  }
  return;
}



/* ---- FUN_1120_5697 @ 1120:5697  (99 octets) ---- */

void __stdcall16far FUN_1120_5697(undefined4 *param_1,undefined4 param_2)

{
  undefined2 uVar1;
  undefined2 *puVar2;
  int iVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  
  uVar4 = (undefined2)((ulong)param_1 >> 0x10);
  puVar2 = (undefined2 *)((int)*param_1 + -0x10);
  (*(code *)*puVar2)();
  iVar3 = (int)param_2;
  uVar5 = (undefined2)((ulong)param_2 >> 0x10);
  if (*(char *)((undefined4 *)param_1 + 0x3d) != '\0') {
    uVar1 = *(undefined2 *)(iVar3 + 10);
    *(uint *)(iVar3 + 8) = *(uint *)(iVar3 + 8) | 2;
    *(undefined2 *)(iVar3 + 10) = uVar1;
  }
  if (*(char *)((int)(undefined4 *)param_1 + 0xf3) == '\0') {
    uVar4 = *(undefined2 *)(iVar3 + 10);
    *(uint *)(iVar3 + 8) = *(uint *)(iVar3 + 8) & 0xfffb;
    *(undefined2 *)(iVar3 + 10) = uVar4;
  }
  return;
}



/* ---- FUN_1120_56fa @ 1120:56fa  (47 octets) ---- */

void __stdcall16far FUN_1120_56fa(undefined4 param_1,undefined2 param_2,undefined2 param_3)

{
  int iVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  FUN_1138_5463(iVar1,uVar2,param_2,param_3);
  if (*(int *)(iVar1 + 0xf6) != DAT_1160_188c) {
    GLOBALFREE(0x1138,*(undefined2 *)(iVar1 + 0xf6));
  }
  return;
}



/* ---- FUN_1120_5729 @ 1120:5729  (49 octets) ---- */

void __stdcall16far FUN_1120_5729(undefined4 param_1,char *param_2)

{
  undefined2 uVar1;
  
  uVar1 = (undefined2)((ulong)param_1 >> 0x10);
  FUN_1138_521f((int)param_1,uVar1,(char *)param_2,(int)((ulong)param_2 >> 0x10));
  if ((*param_2 == '\r') && (*(char *)((int)param_1 + 0xf3) == '\0')) {
    *param_2 = '\0';
  }
  return;
}



/* ---- FUN_1120_57cd @ 1120:57cd  (43 octets) ---- */

undefined2 __stdcall16far FUN_1120_57cd(undefined4 param_1)

{
  undefined4 uVar1;
  undefined2 uVar2;
  
  uVar1 = *(undefined4 *)((int)param_1 + 6);
  FUN_1138_62b9((int)uVar1,(int)((ulong)uVar1 >> 0x10));
  uVar2 = SENDMESSAGE(0x1138,0,0,0,0x406);
  return uVar2;
}



/* ---- FUN_1120_57f8 @ 1120:57f8  (81 octets) ---- */

void __stdcall16far FUN_1120_57f8(undefined4 param_1,undefined2 param_2,undefined *param_3)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined2 uVar3;
  int local_4;
  
  uVar1 = *(undefined4 *)((int)param_1 + 6);
  FUN_1138_62b9((int)uVar1,(int)((ulong)uVar1 >> 0x10));
  uVar3 = (undefined2)((ulong)param_3 >> 0x10);
  puVar2 = (undefined *)param_3;
  local_4 = SENDMESSAGE(0x1138,puVar2,uVar3,param_2,0x408);
  if (local_4 == -1) {
    local_4 = 0;
  }
  FUN_1158_1ec1(local_4,puVar2 + 1,uVar3,puVar2,uVar3);
  *param_3 = (undefined)local_4;
  return;
}



/* ---- FUN_1120_5849 @ 1120:5849  (50 octets) ---- */

undefined4 __stdcall16far FUN_1120_5849(undefined4 param_1,undefined2 param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)((int)param_1 + 6);
  FUN_1138_62b9((int)uVar1,(int)((ulong)uVar1 >> 0x10));
  uVar1 = SENDMESSAGE(0x1138,0,0,param_2,0x410);
  return uVar1;
}



/* ---- FUN_1120_587b @ 1120:587b  (39 octets) ---- */

void __stdcall16far
FUN_1120_587b(undefined4 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)((int)param_1 + 6);
  FUN_1138_62b9((int)uVar1,(int)((ulong)uVar1 >> 0x10));
  SENDMESSAGE(0x1138,param_2,param_3,param_4,0x411);
  return;
}



/* ---- FUN_1120_596b @ 1120:596b  (37 octets) ---- */

void __stdcall16far FUN_1120_596b(undefined4 param_1,undefined2 param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)((int)param_1 + 6);
  FUN_1138_62b9((int)uVar1,(int)((ulong)uVar1 >> 0x10));
  SENDMESSAGE(0x1138,0,0,param_2,0x404);
  return;
}



/* ---- FUN_1120_59e0 @ 1120:59e0  (64 octets) ---- */

void __stdcall16far FUN_1120_59e0(undefined4 param_1,char param_2)

{
  undefined4 uVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  uVar1 = *(undefined4 *)((int)param_1 + 6);
  FUN_1138_62b9((int)uVar1,(int)((ulong)uVar1 >> 0x10));
  SENDMESSAGE(0x1138,0,0,param_2 == '\0',0xb);
  if (param_2 == '\0') {
    uVar1 = *(undefined4 *)((int)param_1 + 6);
    FUN_1138_22c6((int)uVar1,(int)((ulong)uVar1 >> 0x10));
  }
  return;
}



/* ---- FUN_1120_5a20 @ 1120:5a20  (278 octets) ---- */

undefined4 __stdcall16far
FUN_1120_5a20(undefined4 param_1,char param_2,undefined2 param_3,undefined2 param_4)

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
  FUN_1138_2e61(iVar1,uVar3,0,param_3,param_4);
  FUN_1138_17bf(iVar1,uVar3,0x91);
  FUN_1138_17e1(iVar1,uVar3,0x19);
  FUN_1138_6488(iVar1,uVar3,1);
  FUN_1138_1f32(iVar1,uVar3,0);
  uVar5 = FUN_1158_1f50(0x3de2,0x1120,CONCAT11(extraout_AH,1));
  *(undefined2 *)(iVar1 + 0xd8) = (int)uVar5;
  *(undefined2 *)(iVar1 + 0xda) = (int)((ulong)uVar5 >> 0x10);
  uVar4 = (undefined2)((ulong)*(undefined4 *)(iVar1 + 0xd8) >> 0x10);
  iVar2 = (int)*(undefined4 *)(iVar1 + 0xd8);
  *(int *)(iVar2 + 6) = iVar1;
  *(undefined2 *)(iVar2 + 8) = uVar3;
  uVar5 = FUN_1128_17b8(0x96,0x1138,1);
  *(undefined2 *)(iVar1 + 0xdc) = (int)uVar5;
  *(undefined2 *)(iVar1 + 0xde) = (int)((ulong)uVar5 >> 0x10);
  *(undefined2 *)(iVar1 + 0xe2) = 0x10;
  *(undefined *)(iVar1 + 0xe1) = 0;
  *(undefined2 *)(iVar1 + 0x26) = 0x2a2;
  *(uint *)(iVar1 + 0x26) = *(uint *)(iVar1 + 0x26) | 0x10;
  uVar5 = FUN_1140_1489(0x6178,0x1120,iVar1,uVar3);
  *(undefined2 *)(iVar1 + 0xe8) = (int)uVar5;
  *(undefined2 *)(iVar1 + 0xea) = (int)((ulong)uVar5 >> 0x10);
  uVar5 = FUN_1140_1489(0x6241,0x1120,iVar1,uVar3);
  *(undefined2 *)(iVar1 + 0xec) = (int)uVar5;
  *(undefined2 *)(iVar1 + 0xee) = (int)((ulong)uVar5 >> 0x10);
  *(undefined2 *)(iVar1 + 0xe6) = 8;
  if (param_2 != '\0') {
    DAT_1160_1858 = uStack_a;
  }
  return param_1;
}



/* ---- FUN_1120_5b36 @ 1120:5b36  (138 octets) ---- */

void __stdcall16far FUN_1120_5b36(undefined4 *param_1,char param_2)

{
  undefined2 *puVar1;
  char cVar2;
  undefined4 *puVar3;
  undefined2 uVar4;
  
  uVar4 = (undefined2)((ulong)param_1 >> 0x10);
  puVar3 = (undefined4 *)param_1;
  cVar2 = FUN_1138_64fa(puVar3,uVar4);
  if (cVar2 != '\0') {
    puVar1 = (undefined2 *)((int)*param_1 + 100);
    (*(code *)*puVar1)(0x1138,puVar3,uVar4);
  }
  FUN_1140_15a5(*(undefined2 *)(puVar3 + 0x3b),*(undefined2 *)((int)puVar3 + 0xee));
  FUN_1140_15a5(*(undefined2 *)(puVar3 + 0x3a),*(undefined2 *)((int)puVar3 + 0xea));
  FUN_1158_1f7f((int)puVar3[0x37],(int)((ulong)puVar3[0x37] >> 0x10));
  FUN_1158_1f7f((int)puVar3[0x36],(int)((ulong)puVar3[0x36] >> 0x10));
  FUN_1158_1f7f((int)*(undefined4 *)((int)puVar3 + 0xfa),
                (int)((ulong)*(undefined4 *)((int)puVar3 + 0xfa) >> 0x10));
  FUN_1138_2efc(puVar3,uVar4,0);
  if (param_2 != '\0') {
    FUN_1158_200f();
  }
  return;
}



/* ---- FUN_1120_5bc0 @ 1120:5bc0  (39 octets) ---- */

void __stdcall16far FUN_1120_5bc0(undefined4 param_1)

{
  undefined2 *puVar1;
  undefined4 *puVar2;
  undefined2 uVar3;
  
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  FUN_1138_1d25((int)param_1,uVar3,0xedc,0x1160);
  puVar2 = (undefined4 *)*(undefined4 *)((int)param_1 + 0xd8);
  puVar1 = (undefined2 *)((int)*puVar2 + 0x30);
  (*(code *)*puVar1)(0x1138,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10));
  return;
}



/* ---- FUN_1120_5be7 @ 1120:5be7  (32 octets) ---- */

void __stdcall16far FUN_1120_5be7(undefined4 param_1)

{
  FUN_1138_62b9((int)param_1,(int)((ulong)param_1 >> 0x10));
  SENDMESSAGE(0x1138,0,0xffff,1,0x402);
  return;
}



/* ---- FUN_1120_5c07 @ 1120:5c07  (39 octets) ---- */

undefined2 __stdcall16far FUN_1120_5c07(undefined4 param_1)

{
  undefined2 uVar1;
  
  FUN_1138_62b9((int)param_1,(int)((ulong)param_1 >> 0x10));
  uVar1 = SENDMESSAGE(0x1138,0,0,0,0x407);
  return uVar1;
}



/* ---- FUN_1120_5c2e @ 1120:5c2e  (33 octets) ---- */

void __stdcall16far FUN_1120_5c2e(undefined4 param_1,undefined2 param_2)

{
  FUN_1138_62b9((int)param_1,(int)((ulong)param_1 >> 0x10));
  SENDMESSAGE(0x1138,0,0,param_2,0x40e);
  return;
}



/* ---- FUN_1120_5c4f @ 1120:5c4f  (65 octets) ---- */

void __stdcall16far FUN_1120_5c4f(undefined4 param_1,int param_2)

{
  char cVar1;
  int iVar2;
  undefined2 uVar3;
  
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  iVar2 = (int)param_1;
  if (*(int *)(iVar2 + 0xe4) != param_2) {
    *(int *)(iVar2 + 0xe4) = param_2;
    cVar1 = FUN_1138_64fa(iVar2,uVar3);
    if (cVar1 != '\0') {
      FUN_1138_62b9(iVar2,uVar3);
      SENDMESSAGE(0x1138,0,0,param_2,0x401);
    }
  }
  return;
}



/* ---- FUN_1120_5c90 @ 1120:5c90  (35 octets) ---- */

void __stdcall16far FUN_1120_5c90(undefined4 param_1,char param_2)

{
  int iVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  if (*(char *)(iVar1 + 0xe0) != param_2) {
    *(char *)(iVar1 + 0xe0) = param_2;
    FUN_1138_405a(iVar1,uVar2);
  }
  return;
}



/* ---- FUN_1120_5cb3 @ 1120:5cb3  (71 octets) ---- */

void __stdcall16far FUN_1120_5cb3(undefined4 param_1,char param_2)

{
  int iVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  if (*(char *)(iVar1 + 0xe1) != param_2) {
    *(char *)(iVar1 + 0xe1) = param_2;
    if (param_2 == '\x01') {
      *(uint *)(iVar1 + 0x26) = *(uint *)(iVar1 + 0x26) & 0xfdff;
    }
    else {
      *(uint *)(iVar1 + 0x26) = *(uint *)(iVar1 + 0x26) | 0x200;
    }
    FUN_1138_405a(iVar1,uVar2);
  }
  return;
}



/* ---- FUN_1120_5cfa @ 1120:5cfa  (59 octets) ---- */

undefined2 __stdcall16far FUN_1120_5cfa(undefined4 param_1)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 local_4;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  if ((*(byte *)(iVar1 + 0xe1) < 3) || (4 < *(byte *)(iVar1 + 0xe1))) {
    local_4 = FUN_1138_24bb(iVar1,uVar2,0,0,0,0x414);
  }
  else {
    local_4 = *(undefined2 *)(iVar1 + 0xe2);
  }
  return local_4;
}



/* ---- FUN_1120_5d35 @ 1120:5d35  (24 octets) ---- */

void __stdcall16far FUN_1120_5d35(undefined4 param_1,int param_2)

{
  if (0 < param_2) {
    *(int *)((int)param_1 + 0xe2) = param_2;
  }
  return;
}



/* ---- FUN_1120_5d4d @ 1120:5d4d  (30 octets) ---- */

void __stdcall16far FUN_1120_5d4d(undefined4 param_1)

{
  undefined2 *puVar1;
  
  puVar1 = (undefined2 *)((int)*(undefined4 *)*(undefined4 *)((int)param_1 + 0xd8) + 8);
  (*(code *)*puVar1)();
  return;
}



/* ---- FUN_1120_5d6b @ 1120:5d6b  (137 octets) ---- */

void __stdcall16far FUN_1120_5d6b(undefined4 param_1,undefined4 param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined2 uVar7;
  undefined2 uVar8;
  
  uVar7 = (undefined2)((ulong)param_2 >> 0x10);
  iVar4 = (int)param_2;
  uVar8 = (undefined2)((ulong)param_1 >> 0x10);
  iVar5 = (int)param_1;
  FUN_1138_3b29(iVar5,uVar8,iVar4,uVar7);
  FUN_1138_3ad0(iVar5,uVar8,0xefa,0x1160,iVar4,uVar7);
  iVar6 = *(char *)(iVar5 + 0xe1) * 4;
  uVar1 = *(uint *)(iVar6 + 0xee0);
  uVar2 = *(uint *)(iVar4 + 6);
  iVar5 = *(char *)(iVar5 + 0xe0) * 4;
  uVar3 = *(uint *)(iVar5 + 0xef4);
  *(uint *)(iVar4 + 4) =
       *(uint *)(iVar5 + 0xef2) | *(uint *)(iVar4 + 4) | 0x240 | *(uint *)(iVar6 + 0xede);
  *(uint *)(iVar4 + 6) = uVar3 | uVar2 | 0x20 | uVar1;
  return;
}



/* ---- FUN_1120_5df4 @ 1120:5df4  (335 octets) ---- */

void __stdcall16far FUN_1120_5df4(undefined4 param_1)

{
  undefined2 *puVar1;
  undefined4 *puVar2;
  undefined2 uVar3;
  int iVar4;
  undefined2 uVar5;
  undefined4 uVar6;
  int local_6;
  int local_4;
  
  uVar5 = (undefined2)((ulong)param_1 >> 0x10);
  iVar4 = (int)param_1;
  FUN_1138_3c88(iVar4,uVar5);
  local_6 = *(int *)(iVar4 + 0xe4);
  if ((local_6 < 1) || (0xff < local_6)) {
    local_6 = 0xff;
  }
  uVar3 = FUN_1138_62b9(iVar4,uVar5);
  SENDMESSAGE(0x1138,0,0,local_6,0x401);
  if (*(int *)(iVar4 + 0xfa) != 0 || *(int *)(iVar4 + 0xfc) != 0) {
    puVar2 = (undefined4 *)*(undefined4 *)(iVar4 + 0xd8);
    puVar1 = (undefined2 *)((int)*puVar2 + 8);
    (*(code *)*puVar1)(0x14d0,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),
                       *(undefined2 *)(iVar4 + 0xfa),*(undefined2 *)(iVar4 + 0xfc),uVar3);
    FUN_1158_1f7f((int)*(undefined4 *)(iVar4 + 0xfa),
                  (int)((ulong)*(undefined4 *)(iVar4 + 0xfa) >> 0x10));
    *(undefined2 *)(iVar4 + 0xfa) = 0;
    *(undefined2 *)(iVar4 + 0xfc) = 0;
  }
  *(undefined2 *)(iVar4 + 0x116) = 0;
  *(undefined2 *)(iVar4 + 0x118) = 0;
  if (*(byte *)(iVar4 + 0xe1) < 2) {
    FUN_1138_62b9(iVar4,uVar5);
    local_4 = GETWINDOW(0x1138,5);
    if (local_4 != 0) {
      if (*(char *)(iVar4 + 0xe1) == '\x01') {
        *(int *)(iVar4 + 0x118) = local_4;
        uVar6 = GETWINDOWLONG(0x14d0,0xfffc);
        *(undefined2 *)(iVar4 + 0xf4) = (int)uVar6;
        *(undefined2 *)(iVar4 + 0xf6) = (int)((ulong)uVar6 >> 0x10);
        SETWINDOWLONG(0x14d0,*(undefined2 *)(iVar4 + 0xec),*(undefined2 *)(iVar4 + 0xee),0xfffc);
        local_4 = GETWINDOW(0x14d0,2);
      }
      *(int *)(iVar4 + 0x116) = local_4;
      uVar6 = GETWINDOWLONG(0x14d0,0xfffc);
      *(undefined2 *)(iVar4 + 0xf0) = (int)uVar6;
      *(undefined2 *)(iVar4 + 0xf2) = (int)((ulong)uVar6 >> 0x10);
      SETWINDOWLONG(0x14d0,*(undefined2 *)(iVar4 + 0xe8),*(undefined2 *)(iVar4 + 0xea),0xfffc);
    }
  }
  return;
}



/* ---- FUN_1120_5f43 @ 1120:5f43  (91 octets) ---- */

void __stdcall16far FUN_1120_5f43(undefined4 param_1)

{
  undefined2 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  undefined4 uVar8;
  
  uVar6 = (undefined2)((ulong)param_1 >> 0x10);
  iVar4 = (int)param_1;
  puVar2 = (undefined4 *)*(undefined4 *)(iVar4 + 0xd8);
  uVar7 = (undefined2)((ulong)puVar2 >> 0x10);
  puVar5 = (undefined4 *)puVar2;
  puVar1 = (undefined2 *)((int)*puVar2 + 0x10);
  iVar3 = (*(code *)*puVar1)();
  if (0 < iVar3) {
    uVar8 = FUN_1148_1d08(0x3c9,0x1148,1);
    *(undefined2 *)(iVar4 + 0xfa) = (int)uVar8;
    *(undefined2 *)(iVar4 + 0xfc) = (int)((ulong)uVar8 >> 0x10);
    puVar2 = (undefined4 *)*(undefined4 *)(iVar4 + 0xfa);
    puVar1 = (undefined2 *)((int)*puVar2 + 8);
    (*(code *)*puVar1)(0x1148,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),
                       *(undefined2 *)(iVar4 + 0xd8),*(undefined2 *)(iVar4 + 0xda),puVar5,uVar7);
  }
  FUN_1138_3e77(iVar4,uVar6);
  return;
}



/* ---- FUN_1120_5f9e @ 1120:5f9e  (52 octets) ---- */

void __stdcall16far FUN_1120_5f9e(undefined4 *param_1,undefined2 param_2,undefined2 param_3)

{
  undefined2 *puVar1;
  undefined2 uVar2;
  undefined4 *puVar3;
  undefined2 uVar4;
  undefined4 *puVar5;
  undefined2 uVar6;
  
  uVar4 = (undefined2)((ulong)param_1 >> 0x10);
  puVar3 = (undefined4 *)param_1;
  puVar1 = (undefined2 *)((int)*param_1 + -0x10);
  puVar5 = puVar3;
  uVar6 = uVar4;
  (*(code *)*puVar1)();
  uVar2 = FUN_1138_62b9(puVar3,uVar4);
  SETWINDOWTEXT(0x1138,*(undefined2 *)(puVar3 + 0xc),*(undefined2 *)((int)puVar3 + 0x32),uVar2,
                puVar5,uVar6,param_2,param_3);
  return;
}



/* ---- FUN_1120_5fd2 @ 1120:5fd2  (83 octets) ---- */

void __stdcall16far FUN_1120_5fd2(undefined4 *param_1,undefined4 param_2)

{
  undefined2 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined4 *puVar6;
  undefined2 uVar7;
  
  uVar4 = (undefined2)((ulong)param_1 >> 0x10);
  puVar3 = (undefined4 *)param_1;
  if (*(char *)((int)puVar3 + 0xe1) < '\x02') {
    uVar5 = (undefined2)((ulong)param_2 >> 0x10);
    puVar1 = (undefined2 *)((int)*param_1 + 0x34);
    puVar6 = puVar3;
    uVar7 = uVar4;
    (*(code *)*puVar1)();
    uVar2 = *(undefined4 *)((int)*(undefined4 *)((int)puVar3 + 0x1a) + 0x9e);
    uVar4 = FUN_1128_16c0((int)uVar2,(int)((ulong)uVar2 >> 0x10));
    FILLRECT(0x1128,uVar4,puVar6,uVar7);
    *(undefined2 *)((int)param_2 + 8) = 1;
    *(undefined2 *)((int)param_2 + 10) = 0;
  }
  return;
}



/* ---- FUN_1120_6025 @ 1120:6025  (24 octets) ---- */

void __stdcall16far FUN_1120_6025(undefined4 *param_1)

{
  undefined2 *puVar1;
  
  puVar1 = (undefined2 *)((int)*param_1 + -0x10);
  (*(code *)*puVar1)();
  return;
}



/* ---- FUN_1120_603d @ 1120:603d  (24 octets) ---- */

void __stdcall16far FUN_1120_603d(undefined4 *param_1)

{
  undefined2 *puVar1;
  
  puVar1 = (undefined2 *)((int)*param_1 + -0x10);
  (*(code *)*puVar1)();
  return;
}



/* ---- FUN_1120_6055 @ 1120:6055  (24 octets) ---- */

void __stdcall16far FUN_1120_6055(undefined4 *param_1)

{
  undefined2 *puVar1;
  
  puVar1 = (undefined2 *)((int)*param_1 + -0x10);
  (*(code *)*puVar1)();
  return;
}



/* ---- FUN_1120_606d @ 1120:606d  (112 octets) ---- */

void __stdcall16far FUN_1120_606d(undefined4 param_1,undefined4 param_2)

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



/* ---- FUN_1120_60dd @ 1120:60dd  (47 octets) ---- */

void __stdcall16far FUN_1120_60dd(undefined4 param_1,undefined4 param_3)

{
  undefined2 uVar1;
  
  uVar1 = (undefined2)((ulong)param_3 >> 0x10);
  if ((*(int *)((int)param_3 + 6) != param_1._2_2_) || (*(int *)((int)param_3 + 4) != (int)param_1))
  {
    FUN_1138_24bb((int)param_1,param_1._2_2_,0,0,0,0x40f);
  }
  return;
}



/* ---- FUN_1120_610c @ 1120:610c  (43 octets) ---- */

void __stdcall16far FUN_1120_610c(undefined4 *param_1,undefined2 param_2,undefined2 param_3)

{
  undefined2 *puVar1;
  undefined4 *puVar2;
  undefined2 uVar3;
  
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  puVar2 = (undefined4 *)param_1;
  FUN_1138_2d59(puVar2,uVar3,param_2,param_3);
  if (*(char *)((int)puVar2 + 0xe1) < '\x02') {
    puVar1 = (undefined2 *)((int)*param_1 + 0x44);
    (*(code *)*puVar1)(0x1138,puVar2,uVar3);
  }
  return;
}



/* ---- FUN_1120_6137 @ 1120:6137  (65 octets) ---- */

void __stdcall16far FUN_1120_6137(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined2 uVar3;
  
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  iVar2 = (int)param_1;
  if (*(char *)(iVar2 + 0xe1) < '\x02') {
    uVar1 = *(undefined4 *)((int)*(undefined4 *)(iVar2 + 0x1a) + 0x9e);
    uVar3 = FUN_1128_16c0((int)uVar1,(int)((ulong)uVar1 >> 0x10));
    *(undefined2 *)((int)param_2 + 8) = uVar3;
    *(undefined2 *)((int)param_2 + 10) = 0;
  }
  else {
    FUN_1138_58ca(iVar2,uVar3,(int)param_2,param_2._2_2_);
  }
  return;
}



/* ---- FUN_1120_6178 @ 1120:6178  (201 octets) ---- */

void __stdcall16far FUN_1120_6178(undefined4 *param_1,uint *param_2)

{
  undefined2 *puVar1;
  char cVar2;
  undefined4 *puVar3;
  undefined2 uVar5;
  undefined2 unaff_CS;
  undefined4 local_6;
  uint *puVar4;
  undefined2 uVar6;
  
  puVar3 = (undefined4 *)param_1;
  uVar5 = (undefined2)((ulong)param_1 >> 0x10);
  puVar4 = (uint *)param_2;
  uVar6 = (undefined2)((ulong)param_2 >> 0x10);
  if ((0x1ff < *param_2) && (*param_2 < 0x20a)) {
    unaff_CS = 0x1138;
    cVar2 = FUN_1138_2496(puVar3,uVar5);
    if (cVar2 != '\0') {
      unaff_CS = 0x1138;
      FUN_1138_1165(puVar4,uVar6);
    }
  }
  if (*param_2 == 0x112) {
    puVar1 = (undefined2 *)((int)*param_1 + 0x40);
    (*(code *)*puVar1)(unaff_CS,puVar3,uVar5,puVar4,uVar6);
  }
  else {
    puVar1 = (undefined2 *)((int)*param_1 + 0x7c);
    (*(code *)*puVar1)(unaff_CS,puVar3,uVar5,*(undefined2 *)(puVar3 + 0x3c),
                       *(undefined2 *)((int)puVar3 + 0xf2),*(undefined2 *)((int)puVar3 + 0x116),
                       puVar4,uVar6);
    if (((*param_2 == 0x201) || (*param_2 == 0x203)) && (*(char *)((int)puVar3 + 0x2e) == '\x01')) {
      GETCURSORPOS(unaff_CS,&local_6);
      local_6 = FUN_1138_1a06(puVar3,uVar5,(undefined2)local_6,local_6._2_2_);
      SENDMESSAGE(0x1138,local_6,0,0x202);
      FUN_1138_23c6(puVar3,uVar5,0);
    }
  }
  return;
}



/* ---- FUN_1120_6241 @ 1120:6241  (39 octets) ---- */

void __stdcall16far FUN_1120_6241(undefined4 *param_1)

{
  undefined2 *puVar1;
  
  puVar1 = (undefined2 *)((int)*param_1 + 0x7c);
  (*(code *)*puVar1)();
  return;
}



/* ---- FUN_1120_6272 @ 1120:6272  (397 octets) ---- */

void __stdcall16far
FUN_1120_6272(undefined4 *param_1,undefined2 param_3,undefined2 param_4,int param_5,int *param_6)

{
  int iVar1;
  undefined2 *puVar2;
  undefined *puVar3;
  char cVar4;
  undefined2 uVar5;
  undefined2 unaff_CS;
  undefined4 uVar6;
  int *piVar7;
  undefined2 uStack_e;
  undefined *puStack_c;
  undefined2 uStack_a;
  
  puStack_c = &stack0xfffe;
  uStack_a = 0x6268;
  uStack_e = DAT_1160_1858;
  uVar5 = (undefined2)((ulong)param_6 >> 0x10);
  piVar7 = (int *)param_6;
  iVar1 = *param_6;
  if (iVar1 == 7) {
    DAT_1160_1858 = &uStack_e;
    puStack_c = &stack0xfffe;
    uVar6 = FUN_1140_17a8((undefined4 *)param_1,param_1._2_2_);
    unaff_CS = 0x1140;
    cVar4 = FUN_1140_4122(uVar6,(undefined4 *)param_1,param_1._2_2_);
    puVar3 = puStack_c;
    if (cVar4 == '\0') {
      FUN_1158_146a(uVar6,(undefined4 *)param_1,param_1._2_2_);
      return;
    }
  }
  else if (iVar1 == 8) {
    DAT_1160_1858 = &uStack_e;
    puVar3 = &stack0xfffe;
    if ((*(byte *)((undefined4 *)param_1 + 10) & 0x20) != 0) {
      DAT_1160_1858 = &uStack_e;
      puStack_c = &stack0xfffe;
      FUN_1158_146a();
      return;
    }
  }
  else if ((iVar1 == 0x100) || (iVar1 == 0x104)) {
    DAT_1160_1858 = &uStack_e;
    puVar3 = &stack0xfffe;
    if (param_5 != *(int *)((undefined4 *)param_1 + 0x46)) {
      unaff_CS = 0x1138;
      DAT_1160_1858 = &uStack_e;
      puStack_c = &stack0xfffe;
      cVar4 = FUN_1138_4f9e((undefined4 *)param_1,param_1._2_2_,piVar7,uVar5);
      puVar3 = puStack_c;
      if (cVar4 != '\0') {
        FUN_1158_146a();
        return;
      }
    }
  }
  else if (iVar1 == 0x102) {
    unaff_CS = 0x1138;
    DAT_1160_1858 = &uStack_e;
    puStack_c = &stack0xfffe;
    cVar4 = FUN_1138_524f((undefined4 *)param_1,param_1._2_2_,piVar7,uVar5);
    puVar3 = puStack_c;
    if (cVar4 != '\0') {
      FUN_1158_146a();
      return;
    }
  }
  else if ((iVar1 == 0x101) || (iVar1 == 0x105)) {
    unaff_CS = 0x1138;
    DAT_1160_1858 = &uStack_e;
    puStack_c = &stack0xfffe;
    cVar4 = FUN_1138_5132((undefined4 *)param_1,param_1._2_2_,piVar7,uVar5);
    puVar3 = puStack_c;
    if (cVar4 != '\0') {
      FUN_1158_146a();
      return;
    }
  }
  else if (iVar1 == 0x203) {
    DAT_1160_1858 = &uStack_e;
    puVar3 = &stack0xfffe;
    if ((*(byte *)((int)(undefined4 *)param_1 + 0x26) & 0x80) != 0) {
      unaff_CS = 0x1158;
      DAT_1160_1858 = &uStack_e;
      puStack_c = &stack0xfffe;
      FUN_1158_206a();
      puVar3 = puStack_c;
    }
  }
  else if (iVar1 == 0x84) {
    DAT_1160_1858 = &uStack_e;
    puVar3 = &stack0xfffe;
    if ((*(byte *)((undefined4 *)param_1 + 6) & 0x10) != 0) {
      DAT_1160_1858 = &uStack_e;
      piVar7[4] = -1;
      piVar7[5] = -1;
      puStack_c = &stack0xfffe;
      FUN_1158_146a();
      return;
    }
  }
  else if ((((iVar1 == 0x2100) || (iVar1 == 0x2102)) || (iVar1 == 0x2104)) ||
          (DAT_1160_1858 = &uStack_e, puVar3 = &stack0xfffe, iVar1 == 0x2106)) {
    puVar2 = (undefined2 *)((int)*param_1 + 0x40);
    DAT_1160_1858 = &uStack_e;
    (*(code *)*puVar2)();
    FUN_1158_146a((undefined4 *)param_1,param_1._2_2_,piVar7,uVar5);
    return;
  }
  puStack_c = puVar3;
  uVar6 = CALLWINDOWPROC(unaff_CS,piVar7[2],piVar7[3],piVar7[1],*param_6,param_5,param_3);
  piVar7[4] = (int)uVar6;
  piVar7[5] = (int)((ulong)uVar6 >> 0x10);
  DAT_1160_1858 = (undefined2 *)param_4;
  return;
}



/* ---- FUN_1120_6415 @ 1120:6415  (124 octets) ---- */

void __stdcall16far FUN_1120_6415(undefined4 param_1,int *param_2)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  
  uVar4 = (undefined2)((ulong)param_1 >> 0x10);
  iVar2 = (int)param_1;
  piVar3 = (int *)param_2;
  uVar5 = (undefined2)((ulong)param_2 >> 0x10);
  if ((((*(byte *)(iVar2 + 0x18) & 0x10) == 0) &&
      (((*param_2 == 0x201 || (*param_2 == 0x203)) &&
       (cVar1 = FUN_1138_2496(iVar2,uVar4), cVar1 == '\0')))) && (*(char *)(iVar2 + 0x2e) == '\x01')
     ) {
    cVar1 = FUN_1138_4387(iVar2,uVar4,piVar3,uVar5);
    if (cVar1 == '\0') {
      *(byte *)(iVar2 + 0x28) = *(byte *)(iVar2 + 0x28) | 1;
      FUN_1158_2038(0x1138,iVar2,uVar4,piVar3,uVar5);
    }
  }
  else {
    FUN_1138_4446(iVar2,uVar4,piVar3,uVar5);
  }
  return;
}



/* ---- FUN_1120_6672 @ 1120:6672  (40 octets) ---- */

void __stdcall16far FUN_1120_6672(undefined4 param_1)

{
  undefined2 *puVar1;
  
  if (*(int *)((int)param_1 + 0x11c) != 0) {
    puVar1 = (undefined2 *)((int)param_1 + 0x11a);
    (*(code *)*puVar1)();
  }
  return;
}



/* ---- FUN_1120_672e @ 1120:672e  (40 octets) ---- */

void __stdcall16far FUN_1120_672e(undefined4 param_1)

{
  undefined2 *puVar1;
  
  if (*(int *)((int)param_1 + 0x100) != 0) {
    puVar1 = (undefined2 *)((int)param_1 + 0xfe);
    (*(code *)*puVar1)();
  }
  return;
}



/* ---- FUN_1120_6756 @ 1120:6756  (51 octets) ---- */

void __stdcall16far FUN_1120_6756(undefined4 param_1)

{
  undefined2 *puVar1;
  
  if (*(int *)((int)param_1 + 0x110) != 0) {
    puVar1 = (undefined2 *)((int)param_1 + 0x10e);
    (*(code *)*puVar1)();
  }
  return;
}



/* ---- FUN_1120_6789 @ 1120:6789  (261 octets) ---- */

void __stdcall16far FUN_1120_6789(undefined4 *param_1,undefined4 param_2)

{
  byte bVar1;
  undefined2 *puVar2;
  undefined4 uVar3;
  undefined extraout_AH;
  undefined extraout_AH_00;
  undefined uVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined2 uVar7;
  undefined2 uVar8;
  
  uVar3 = *(undefined4 *)((int)param_2 + 4);
  uVar7 = (undefined2)((ulong)uVar3 >> 0x10);
  iVar5 = (int)uVar3;
  bVar1 = *(byte *)(iVar5 + 8);
  uVar8 = (undefined2)((ulong)param_1 >> 0x10);
  puVar6 = (undefined4 *)param_1;
  FUN_1128_225d((int)puVar6[0x37],(int)((ulong)puVar6[0x37] >> 0x10),*(undefined2 *)(iVar5 + 0xc));
  FUN_1128_2099((int)puVar6[0x37],(int)((ulong)puVar6[0x37] >> 0x10),*(undefined2 *)(puVar6 + 0xd),
                *(undefined2 *)((int)puVar6 + 0x36));
  FUN_1128_20d3((int)puVar6[0x37],(int)((ulong)puVar6[0x37] >> 0x10),
                *(undefined2 *)((int)puVar6 + 0x9e),*(undefined2 *)(puVar6 + 0x28));
  uVar4 = extraout_AH;
  if ((-1 < *(int *)(iVar5 + 4)) && ((bVar1 & 1) != 0)) {
    uVar3 = *(undefined4 *)((int)puVar6[0x37] + 0xf);
    FUN_1128_1684((int)uVar3,(int)((ulong)uVar3 >> 0x10),0xfff2,0xffff);
    uVar3 = *(undefined4 *)((int)puVar6[0x37] + 7);
    FUN_1128_0fdf((int)uVar3,(int)((ulong)uVar3 >> 0x10),0xfff1,0xffff);
    uVar4 = extraout_AH_00;
  }
  if (*(int *)(iVar5 + 4) < 0) {
    FUN_1128_1ce5((int)puVar6[0x37],(int)((ulong)puVar6[0x37] >> 0x10),iVar5 + 0xe,uVar7);
  }
  else {
    puVar2 = (undefined2 *)((int)*param_1 + 0x80);
    (*(code *)*puVar2)(0x1128,puVar6,uVar8,CONCAT11(uVar4,bVar1),iVar5 + 0xe,uVar7,
                       *(undefined2 *)(iVar5 + 4));
  }
  if ((bVar1 & 0x10) != 0) {
    DRAWFOCUSRECT(0x1128,iVar5 + 0xe,uVar7);
  }
  FUN_1128_225d((int)puVar6[0x37],(int)((ulong)puVar6[0x37] >> 0x10),0);
  return;
}



/* ---- FUN_1120_688e @ 1120:688e  (73 octets) ---- */

void __stdcall16far FUN_1120_688e(undefined4 *param_1,undefined4 param_2)

{
  undefined2 *puVar1;
  undefined4 uVar2;
  undefined2 uVar3;
  
  uVar2 = *(undefined4 *)((int)param_2 + 4);
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  *(undefined2 *)((int)uVar2 + 8) = *(undefined2 *)((int)(undefined4 *)param_1 + 0xe2);
  if (*(char *)((int)(undefined4 *)param_1 + 0xe1) == '\x04') {
    puVar1 = (undefined2 *)((int)*param_1 + 0x84);
    (*(code *)*puVar1)();
  }
  return;
}



/* ---- FUN_1120_68d7 @ 1120:68d7  (94 octets) ---- */

void __stdcall16far FUN_1120_68d7(undefined4 *param_1,undefined4 param_2)

{
  undefined2 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  
  uVar4 = (undefined2)((ulong)param_1 >> 0x10);
  puVar3 = (undefined4 *)param_1;
  uVar5 = (undefined2)((ulong)param_2 >> 0x10);
  if (((*(char *)((int)puVar3 + 0x2e) == '\x01') && (*(char *)((int)puVar3 + 0xe1) == '\x02')) &&
     (iVar2 = GETSYSTEMMETRICS(), *(int *)((int)param_2 + 4) < *(int *)((int)puVar3 + 0x22) - iVar2)
     ) {
    puVar1 = (undefined2 *)((int)*param_1 + 0x78);
    (*(code *)*puVar1)(0x14d0,puVar3,uVar4);
    FUN_1138_23c6(puVar3,uVar4,0);
    return;
  }
  FUN_1138_282c(puVar3,uVar4,(int)param_2,uVar5);
  return;
}



/* ---- FUN_1120_6935 @ 1120:6935  (123 octets) ---- */

void __stdcall16far FUN_1120_6935(undefined4 param_1,int *param_2)

{
  int iVar1;
  char cVar2;
  undefined2 uVar3;
  int iVar4;
  undefined2 uVar5;
  
  iVar1 = *param_2;
  iVar4 = (int)param_1;
  uVar5 = (undefined2)((ulong)param_1 >> 0x10);
  if ((iVar1 == 0x201) || (iVar1 == 0x203)) {
    if (((*(byte *)(iVar4 + 0x18) & 0x10) == 0) &&
       (cVar2 = FUN_1138_6258(iVar4,uVar5), cVar2 == '\0')) {
      *(undefined *)(iVar4 + 0xd8) = 1;
      uVar3 = FUN_1138_62b9(iVar4,uVar5);
      SETFOCUS(0x1138,uVar3);
      *(undefined *)(iVar4 + 0xd8) = 0;
      cVar2 = FUN_1138_6258(iVar4,uVar5);
      if (cVar2 == '\0') {
        return;
      }
    }
  }
  else if ((iVar1 == 0x2111) && (*(char *)(iVar4 + 0xd8) != '\0')) {
    return;
  }
  FUN_1138_4446(iVar4,uVar5,(int *)param_2,(int)((ulong)param_2 >> 0x10));
  return;
}



/* ---- FUN_1120_69b0 @ 1120:69b0  (101 octets) ---- */

undefined4 __stdcall16far
FUN_1120_69b0(undefined4 param_1,char param_2,undefined2 param_3,undefined2 param_4)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uStack_a;
  
  if (param_2 != '\0') {
    FUN_1158_1fe2();
  }
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  FUN_1138_2e61(iVar1,uVar2,0,param_3,param_4);
  *(undefined2 *)(iVar1 + 0x26) = 0xe0;
  FUN_1138_17bf(iVar1,uVar2,0x59);
  FUN_1138_17e1(iVar1,uVar2,0x21);
  FUN_1138_6488(iVar1,uVar2,1);
  if (param_2 != '\0') {
    DAT_1160_1858 = uStack_a;
  }
  return param_1;
}



/* ---- FUN_1120_6a15 @ 1120:6a15  (59 octets) ---- */

void __stdcall16far FUN_1120_6a15(undefined4 param_1)

{
  long lVar1;
  
  lVar1 = FUN_1140_17a8((int)param_1,param_1._2_2_);
  if (lVar1 != 0) {
    *(undefined2 *)((int)lVar1 + 0x104) = *(undefined2 *)((int)param_1 + 0xde);
  }
  FUN_1138_2773((int)param_1,param_1._2_2_);
  return;
}



/* ---- FUN_1120_6a50 @ 1120:6a50  (108 octets) ---- */

void __stdcall16far FUN_1120_6a50(undefined4 param_1,char param_2)

{
  char cVar1;
  byte bVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  
  uVar4 = (undefined2)((ulong)param_1 >> 0x10);
  uVar3 = (undefined2)param_1;
  cVar1 = FUN_1138_64fa(uVar3,uVar4);
  if (cVar1 != '\0') {
    FUN_1138_62b9(uVar3,uVar4);
    bVar2 = GETWINDOWLONG(0x1138,0xfff0);
    if ((param_2 != '\0') != (bool)(bVar2 & 0xf)) {
      FUN_1138_62b9(uVar3,uVar4);
      SENDMESSAGE(0x1138,1,0,param_2 != '\0',0x404);
    }
  }
  return;
}



/* ---- FUN_1120_6abc @ 1120:6abc  (67 octets) ---- */

void __stdcall16far FUN_1120_6abc(undefined4 param_1,undefined param_2)

{
  char cVar1;
  int iVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  iVar2 = (int)param_1;
  *(undefined *)(iVar2 + 0xda) = param_2;
  cVar1 = FUN_1138_64fa(iVar2,uVar3);
  if (cVar1 != '\0') {
    uVar4 = FUN_1140_17a8(iVar2,uVar3);
    uVar3 = (undefined2)((ulong)uVar4 >> 0x10);
    FUN_1138_24bb(uVar4,*(undefined2 *)((int)uVar4 + 0xe4),*(undefined2 *)((int)uVar4 + 0xe6),0,
                  0xf07);
  }
  return;
}



/* ---- FUN_1120_6aff @ 1120:6aff  (93 octets) ---- */

void __stdcall16far FUN_1120_6aff(undefined4 param_1,undefined4 param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  
  uVar5 = (undefined2)((ulong)param_2 >> 0x10);
  iVar3 = (int)param_2;
  uVar6 = (undefined2)((ulong)param_1 >> 0x10);
  iVar4 = (int)param_1;
  FUN_1138_3b29(iVar4,uVar6,iVar3,uVar5);
  FUN_1138_3ad0(iVar4,uVar6,0xf0c,0x1160,iVar3,uVar5);
  iVar4 = *(char *)(iVar4 + 0xda) * 4;
  uVar1 = *(uint *)(iVar4 + 0xf06);
  uVar2 = *(uint *)(iVar3 + 6);
  *(uint *)(iVar3 + 4) = *(uint *)(iVar4 + 0xf04) | *(uint *)(iVar3 + 4);
  *(uint *)(iVar3 + 6) = uVar1 | uVar2;
  return;
}



/* ---- FUN_1120_6b5c @ 1120:6b5c  (30 octets) ---- */

void __stdcall16far FUN_1120_6b5c(undefined4 param_1)

{
  int iVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  FUN_1138_3c88(iVar1,uVar2);
  *(undefined *)(iVar1 + 0xdc) = *(undefined *)(iVar1 + 0xda);
  return;
}



/* ---- FUN_1120_6b7a @ 1120:6b7a  (30 octets) ---- */

void __stdcall16far FUN_1120_6b7a(undefined2 param_1,undefined2 param_2_00,undefined4 param_2)

{
  if (*(int *)((int)param_2 + 6) == 0) {
    FUN_1158_206a();
  }
  return;
}



/* ---- FUN_1120_6b98 @ 1120:6b98  (136 octets) ---- */

void __stdcall16far FUN_1120_6b98(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  
  uVar4 = (undefined2)((ulong)param_2 >> 0x10);
  iVar2 = (int)param_2;
  iVar3 = (int)param_1;
  uVar5 = (undefined2)((ulong)param_1 >> 0x10);
  if ((((*(int *)(iVar2 + 2) == 0xd) && (*(char *)(iVar3 + 0xdc) != '\0')) ||
      ((*(int *)(iVar2 + 2) == 0x1b && (*(char *)(iVar3 + 0xdb) != '\0')))) &&
     ((cVar1 = FUN_1140_16fb(*(undefined2 *)(iVar2 + 4),*(undefined2 *)(iVar2 + 6)), cVar1 == '\0'
      && (cVar1 = FUN_1138_61c4(iVar3,uVar5), cVar1 != '\0')))) {
    FUN_1158_206a(0x1138,iVar3,uVar5);
    *(undefined2 *)(iVar2 + 8) = 1;
    *(undefined2 *)(iVar2 + 10) = 0;
    return;
  }
  FUN_1138_5610(iVar3,uVar5,iVar2,uVar4);
  return;
}



/* ---- FUN_1120_6c8a @ 1120:6c8a  (126 octets) ---- */

void __stdcall16far FUN_1120_6c8a(undefined4 *param_1,undefined4 param_3)

{
  undefined2 *puVar1;
  undefined uVar2;
  undefined2 uVar3;
  undefined uVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined2 uVar7;
  int iVar8;
  
  uVar7 = (undefined2)((ulong)param_3 >> 0x10);
  iVar5 = (int)param_3;
  uVar3 = FUN_1158_2255(0x2168,0x1120,*(undefined2 *)(iVar5 + 4),*(undefined2 *)(iVar5 + 6));
  uVar4 = (undefined)((uint)uVar3 >> 8);
  puVar6 = (undefined4 *)param_1;
  iVar8 = (int)((ulong)param_1 >> 0x10);
  if ((char)uVar3 == '\0') {
    *(undefined *)(puVar6 + 0x37) = *(undefined *)((int)puVar6 + 0xda);
  }
  else {
    uVar4 = (undefined)((uint)*(int *)(iVar5 + 4) >> 8);
    if ((*(int *)(iVar5 + 6) == iVar8) && ((undefined4 *)*(int *)(iVar5 + 4) == puVar6)) {
      uVar2 = 1;
    }
    else {
      uVar2 = 0;
    }
    *(undefined *)(puVar6 + 0x37) = uVar2;
  }
  puVar1 = (undefined2 *)((int)*param_1 + 0x7c);
  (*(code *)*puVar1)(0x1158,puVar6,iVar8,CONCAT11(uVar4,*(undefined *)(puVar6 + 0x37)));
  FUN_1138_563c(puVar6,iVar8,iVar5,uVar7);
  return;
}



/* ---- FUN_1120_6d08 @ 1120:6d08  (116 octets) ---- */

undefined4 __stdcall16far
FUN_1120_6d08(undefined4 param_1,char param_2,undefined2 param_3,undefined2 param_4)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uStack_a;
  
  if (param_2 != '\0') {
    FUN_1158_1fe2();
  }
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  FUN_1138_2e61(iVar1,uVar2,0,param_3,param_4);
  FUN_1138_17bf(iVar1,uVar2,0x61);
  FUN_1138_17e1(iVar1,uVar2,0x11);
  FUN_1138_6488(iVar1,uVar2,1);
  *(undefined2 *)(iVar1 + 0x26) = 0xa0;
  *(undefined *)(iVar1 + 0xda) = 1;
  *(undefined *)(iVar1 + 0xdc) = 0;
  if (param_2 != '\0') {
    DAT_1160_1858 = uStack_a;
  }
  return param_1;
}



/* ---- FUN_1120_6d7c @ 1120:6d7c  (86 octets) ---- */

void __stdcall16far FUN_1120_6d7c(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  undefined2 uVar3;
  
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  iVar2 = (int)param_1;
  cVar1 = *(char *)(iVar2 + 0xdc);
  if (cVar1 == '\0') {
    if (*(char *)(iVar2 + 0xdb) == '\0') {
      FUN_1120_6e38(iVar2,uVar3,1);
    }
    else {
      FUN_1120_6e38(iVar2,uVar3,2);
    }
  }
  else if (cVar1 == '\x01') {
    FUN_1120_6e38(iVar2,uVar3,0);
  }
  else if (cVar1 == '\x02') {
    FUN_1120_6e38(iVar2,uVar3,1);
  }
  return;
}



/* ---- FUN_1120_6dd2 @ 1120:6dd2  (28 octets) ---- */

uint __stdcall16far FUN_1120_6dd2(undefined4 param_1)

{
  uint in_AX;
  uint uVar1;
  
  uVar1 = in_AX & 0xff00;
  if (*(char *)((int)param_1 + 0xdc) == '\x01') {
    uVar1 = uVar1 + 1;
  }
  return uVar1;
}



/* ---- FUN_1120_6dee @ 1120:6dee  (35 octets) ---- */

void __stdcall16far FUN_1120_6dee(undefined4 param_1,char param_2)

{
  int iVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  if (*(char *)(iVar1 + 0xda) != param_2) {
    *(char *)(iVar1 + 0xda) = param_2;
    FUN_1138_405a(iVar1,uVar2);
  }
  return;
}



/* ---- FUN_1120_6e11 @ 1120:6e11  (39 octets) ---- */

void __stdcall16far FUN_1120_6e11(undefined4 param_1,char param_2)

{
  undefined2 uVar1;
  
  uVar1 = (undefined2)((ulong)param_1 >> 0x10);
  if (param_2 == '\0') {
    FUN_1120_6e38((int)param_1,uVar1,0);
  }
  else {
    FUN_1120_6e38((int)param_1,uVar1,1);
  }
  return;
}



/* ---- FUN_1120_6e38 @ 1120:6e38  (85 octets) ---- */

void __stdcall16far FUN_1120_6e38(undefined4 param_1,char param_2)

{
  char cVar1;
  undefined2 uVar2;
  int iVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  
  uVar4 = (undefined2)((ulong)param_1 >> 0x10);
  iVar3 = (int)param_1;
  if (*(char *)(iVar3 + 0xdc) != param_2) {
    *(char *)(iVar3 + 0xdc) = param_2;
    uVar5 = 0x1138;
    uVar2 = uVar4;
    cVar1 = FUN_1138_64fa(iVar3,uVar4);
    if (cVar1 != '\0') {
      uVar2 = FUN_1138_62b9(iVar3,uVar4);
      uVar5 = 0x14d0;
      SENDMESSAGE(0x1138,0,0,(int)*(char *)(iVar3 + 0xdc),0x401);
    }
    FUN_1158_206a(uVar5,iVar3,uVar4,uVar2);
  }
  return;
}



/* ---- FUN_1120_6e8d @ 1120:6e8d  (104 octets) ---- */

void __stdcall16far FUN_1120_6e8d(undefined4 param_1,undefined4 param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  
  uVar5 = (undefined2)((ulong)param_2 >> 0x10);
  iVar3 = (int)param_2;
  uVar6 = (undefined2)((ulong)param_1 >> 0x10);
  iVar4 = (int)param_1;
  FUN_1138_3b29(iVar4,uVar6,iVar3,uVar5);
  FUN_1138_3ad0(iVar4,uVar6,0xf1c,0x1160,iVar3,uVar5);
  iVar4 = *(char *)(iVar4 + 0xda) * 4;
  uVar1 = *(uint *)(iVar4 + 0xf16);
  uVar2 = *(uint *)(iVar3 + 6);
  *(uint *)(iVar3 + 4) = *(uint *)(iVar3 + 4) | 5 | *(uint *)(iVar4 + 0xf14);
  *(uint *)(iVar3 + 6) = uVar2 | uVar1;
  return;
}



/* ---- FUN_1120_6ef5 @ 1120:6ef5  (87 octets) ---- */

void __stdcall16far FUN_1120_6ef5(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined2 uVar3;
  
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  iVar2 = (int)param_1;
  FUN_1138_3c88(iVar2,uVar3);
  FUN_1138_62b9(iVar2,uVar3);
  SENDMESSAGE(0x1138,0,0,(int)*(char *)(iVar2 + 0xdc),0x401);
  iVar1 = DAT_1160_1524;
  if ((*(char *)(iVar2 + 0xa5) != '\0') && (DAT_1160_1522 != 0 || DAT_1160_1524 != 0)) {
    *(int *)(iVar2 + 0x8e) = DAT_1160_1522;
    *(int *)(iVar2 + 0x90) = iVar1;
  }
  return;
}



/* ---- FUN_1120_6f4c @ 1120:6f4c  (58 octets) ---- */

void __stdcall16far FUN_1120_6f4c(undefined4 *param_1,undefined2 param_2,undefined2 param_3)

{
  undefined2 *puVar1;
  undefined2 uVar2;
  undefined4 *puVar3;
  undefined2 uVar4;
  undefined2 unaff_CS;
  
  uVar4 = (undefined2)((ulong)param_1 >> 0x10);
  puVar3 = (undefined4 *)param_1;
  if ((*(char *)((int)puVar3 + 0xa5) != '\0') && (DAT_1160_1522 != 0 || DAT_1160_1524 != 0)) {
    uVar2 = FUN_1138_62b9(puVar3,uVar4);
    unaff_CS = 0x14d0;
    UPDATEWINDOW(0x1138,uVar2);
  }
  puVar1 = (undefined2 *)((int)*param_1 + -0x10);
  (*(code *)*puVar1)(unaff_CS,puVar3,uVar4,param_2,param_3);
  return;
}



/* ---- FUN_1120_6f86 @ 1120:6f86  (17 octets) ---- */

void __stdcall16far FUN_1120_6f86(undefined4 param_1)

{
  FUN_1138_405a((int)param_1,(int)((ulong)param_1 >> 0x10));
  return;
}



/* ---- FUN_1120_701a @ 1120:701a  (29 octets) ---- */

void __stdcall16far FUN_1120_701a(undefined4 *param_1,undefined4 param_2)

{
  undefined2 *puVar1;
  
  if (*(int *)((int)param_2 + 6) == 0) {
    puVar1 = (undefined2 *)((int)*param_1 + 0x7c);
    (*(code *)*puVar1)();
  }
  return;
}



/* ---- FUN_1120_7037 @ 1120:7037  (98 octets) ---- */

undefined4 __stdcall16far
FUN_1120_7037(undefined4 param_1,char param_2,undefined2 param_3,undefined2 param_4)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uStack_a;
  
  if (param_2 != '\0') {
    FUN_1158_1fe2();
  }
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  FUN_1138_2e61(iVar1,uVar2,0,param_3,param_4);
  FUN_1138_17bf(iVar1,uVar2,0x71);
  FUN_1138_17e1(iVar1,uVar2,0x11);
  *(undefined2 *)(iVar1 + 0x26) = 0xa0;
  *(undefined *)(iVar1 + 0xda) = 1;
  if (param_2 != '\0') {
    DAT_1160_1858 = uStack_a;
  }
  return param_1;
}



/* ---- FUN_1120_7099 @ 1120:7099  (35 octets) ---- */

void __stdcall16far FUN_1120_7099(undefined4 param_1,char param_2)

{
  int iVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  if (*(char *)(iVar1 + 0xda) != param_2) {
    *(char *)(iVar1 + 0xda) = param_2;
    FUN_1138_405a(iVar1,uVar2);
  }
  return;
}



/* ---- FUN_1120_70bc @ 1120:70bc  (144 octets) ---- */

void FUN_1120_70bc(int param_1)

{
  char cVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined2 unaff_SS;
  undefined4 uVar5;
  int local_4;
  
  uVar3 = (undefined2)((ulong)*(undefined4 *)(param_1 + 6) >> 0x10);
  iVar2 = (int)*(undefined4 *)(param_1 + 6);
  if (*(int *)(iVar2 + 0x1a) != 0 || *(int *)(iVar2 + 0x1c) != 0) {
    uVar4 = (undefined2)((ulong)*(undefined4 *)(iVar2 + 0x1a) >> 0x10);
    uVar3 = (undefined2)*(undefined4 *)(iVar2 + 0x1a);
    iVar2 = FUN_1138_39fd(uVar3,uVar4);
    if (-1 < iVar2 + -1) {
      local_4 = 0;
      while( true ) {
        uVar5 = FUN_1138_398f(uVar3,uVar4,local_4);
        if (((int)((ulong)uVar5 >> 0x10) != *(int *)(param_1 + 8)) ||
           ((int)uVar5 != *(int *)(param_1 + 6))) {
          cVar1 = FUN_1158_2255(0x2c19,0x1120,uVar5);
          if (cVar1 != '\0') {
            FUN_1120_714c(uVar5,0);
          }
        }
        if (local_4 == iVar2 + -1) break;
        local_4 = local_4 + 1;
      }
    }
  }
  return;
}



/* ---- FUN_1120_714c @ 1120:714c  (109 octets) ---- */

void __stdcall16far FUN_1120_714c(undefined4 param_1,char param_2)

{
  char cVar1;
  undefined2 uVar2;
  int iVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  
  uVar4 = (undefined2)((ulong)param_1 >> 0x10);
  iVar3 = (int)param_1;
  if (*(char *)(iVar3 + 0xdb) != param_2) {
    *(char *)(iVar3 + 0xdb) = param_2;
    FUN_1138_6488(iVar3,uVar4,param_2);
    uVar5 = 0x1138;
    uVar2 = uVar4;
    cVar1 = FUN_1138_64fa(iVar3,uVar4);
    if (cVar1 != '\0') {
      uVar2 = FUN_1138_62b9(iVar3,uVar4);
      uVar5 = 0x14d0;
      SENDMESSAGE(0x1138,0,0,(int)*(char *)(iVar3 + 0xdb),0x401);
    }
    if (param_2 != '\0') {
      FUN_1120_70bc(&stack0xfffe,uVar2);
      FUN_1158_206a(uVar5,iVar3,uVar4);
    }
  }
  return;
}



/* ---- FUN_1120_71b9 @ 1120:71b9  (104 octets) ---- */

void __stdcall16far FUN_1120_71b9(undefined4 param_1,undefined4 param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  
  uVar5 = (undefined2)((ulong)param_2 >> 0x10);
  iVar3 = (int)param_2;
  uVar6 = (undefined2)((ulong)param_1 >> 0x10);
  iVar4 = (int)param_1;
  FUN_1138_3b29(iVar4,uVar6,iVar3,uVar5);
  FUN_1138_3ad0(iVar4,uVar6,0xf2c,0x1160,iVar3,uVar5);
  iVar4 = *(char *)(iVar4 + 0xda) * 4;
  uVar1 = *(uint *)(iVar4 + 0xf26);
  uVar2 = *(uint *)(iVar3 + 6);
  *(uint *)(iVar3 + 4) = *(uint *)(iVar3 + 4) | 4 | *(uint *)(iVar4 + 0xf24);
  *(uint *)(iVar3 + 6) = uVar2 | uVar1;
  return;
}



/* ---- FUN_1120_7221 @ 1120:7221  (87 octets) ---- */

void __stdcall16far FUN_1120_7221(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined2 uVar3;
  
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  iVar2 = (int)param_1;
  FUN_1138_3c88(iVar2,uVar3);
  FUN_1138_62b9(iVar2,uVar3);
  SENDMESSAGE(0x1138,0,0,(int)*(char *)(iVar2 + 0xdb),0x401);
  iVar1 = DAT_1160_1524;
  if ((*(char *)(iVar2 + 0xa5) != '\0') && (DAT_1160_1522 != 0 || DAT_1160_1524 != 0)) {
    *(int *)(iVar2 + 0x8e) = DAT_1160_1522;
    *(int *)(iVar2 + 0x90) = iVar1;
  }
  return;
}



/* ---- FUN_1120_7278 @ 1120:7278  (58 octets) ---- */

void __stdcall16far FUN_1120_7278(undefined4 *param_1,undefined2 param_2,undefined2 param_3)

{
  undefined2 *puVar1;
  undefined2 uVar2;
  undefined4 *puVar3;
  undefined2 uVar4;
  undefined2 unaff_CS;
  
  uVar4 = (undefined2)((ulong)param_1 >> 0x10);
  puVar3 = (undefined4 *)param_1;
  if ((*(char *)((int)puVar3 + 0xa5) != '\0') && (DAT_1160_1522 != 0 || DAT_1160_1524 != 0)) {
    uVar2 = FUN_1138_62b9(puVar3,uVar4);
    unaff_CS = 0x14d0;
    UPDATEWINDOW(0x1138,uVar2);
  }
  puVar1 = (undefined2 *)((int)*param_1 + -0x10);
  (*(code *)*puVar1)(unaff_CS,puVar3,uVar4,param_2,param_3);
  return;
}



/* ---- FUN_1120_72b2 @ 1120:72b2  (17 octets) ---- */

void __stdcall16far FUN_1120_72b2(undefined4 param_1)

{
  FUN_1138_405a((int)param_1,(int)((ulong)param_1 >> 0x10));
  return;
}



/* ---- FUN_1120_732f @ 1120:732f  (51 octets) ---- */

void __stdcall16far FUN_1120_732f(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = *(int *)((int)param_2 + 6);
  if (iVar1 == 0) {
    FUN_1120_714c((int)param_1,(int)((ulong)param_1 >> 0x10),1);
  }
  else if (iVar1 == 5) {
    FUN_1158_206a();
  }
  return;
}



/* ---- FUN_1120_7362 @ 1120:7362  (43 octets) ---- */

undefined2 __stdcall16far FUN_1120_7362(undefined4 param_1)

{
  undefined4 uVar1;
  undefined2 uVar2;
  
  uVar1 = *(undefined4 *)((int)param_1 + 6);
  FUN_1138_62b9((int)uVar1,(int)((ulong)uVar1 >> 0x10));
  uVar2 = SENDMESSAGE(0x1138,0,0,0,0x40c);
  return uVar2;
}



/* ---- FUN_1120_7463 @ 1120:7463  (39 octets) ---- */

void __stdcall16far
FUN_1120_7463(undefined4 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)((int)param_1 + 6);
  FUN_1138_62b9((int)uVar1,(int)((ulong)uVar1 >> 0x10));
  SENDMESSAGE(0x1138,param_2,param_3,param_4,0x41b);
  return;
}



/* ---- FUN_1120_7553 @ 1120:7553  (37 octets) ---- */

void __stdcall16far FUN_1120_7553(undefined4 param_1,undefined2 param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)((int)param_1 + 6);
  FUN_1138_62b9((int)uVar1,(int)((ulong)uVar1 >> 0x10));
  SENDMESSAGE(0x1138,0,0,param_2,0x403);
  return;
}



/* ---- FUN_1120_7578 @ 1120:7578  (36 octets) ---- */

void __stdcall16far FUN_1120_7578(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)((int)param_1 + 6);
  FUN_1138_62b9((int)uVar1,(int)((ulong)uVar1 >> 0x10));
  SENDMESSAGE(0x1138,0,0,0,0x405);
  return;
}



/* ---- FUN_1120_759c @ 1120:759c  (64 octets) ---- */

void __stdcall16far FUN_1120_759c(undefined4 param_1,char param_2)

{
  undefined4 uVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  uVar1 = *(undefined4 *)((int)param_1 + 6);
  FUN_1138_62b9((int)uVar1,(int)((ulong)uVar1 >> 0x10));
  SENDMESSAGE(0x1138,0,0,param_2 == '\0',0xb);
  if (param_2 == '\0') {
    uVar1 = *(undefined4 *)((int)param_1 + 6);
    FUN_1138_22c6((int)uVar1,(int)((ulong)uVar1 >> 0x10));
  }
  return;
}



/* ---- FUN_1120_75dc @ 1120:75dc  (233 octets) ---- */

undefined4 __stdcall16far
FUN_1120_75dc(undefined4 param_1,char param_2,undefined2 param_3,undefined2 param_4)

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
  FUN_1138_2e61(iVar1,uVar3,0,param_3,param_4);
  FUN_1138_17bf(iVar1,uVar3,0x79);
  FUN_1138_17e1(iVar1,uVar3,0x61);
  FUN_1138_6488(iVar1,uVar3,1);
  FUN_1138_1f32(iVar1,uVar3,0);
  *(undefined2 *)(iVar1 + 0x26) = 0xb0;
  uVar5 = FUN_1158_1f50(0x3e92,0x1120,CONCAT11(extraout_AH,1));
  *(undefined2 *)(iVar1 + 0xd8) = (int)uVar5;
  *(undefined2 *)(iVar1 + 0xda) = (int)((ulong)uVar5 >> 0x10);
  uVar4 = (undefined2)((ulong)*(undefined4 *)(iVar1 + 0xd8) >> 0x10);
  iVar2 = (int)*(undefined4 *)(iVar1 + 0xd8);
  *(int *)(iVar2 + 6) = iVar1;
  *(undefined2 *)(iVar2 + 8) = uVar3;
  uVar5 = FUN_1128_17b8(0x96,0x1138,1);
  *(undefined2 *)(iVar1 + 0xdd) = (int)uVar5;
  *(undefined2 *)(iVar1 + 0xdf) = (int)((ulong)uVar5 >> 0x10);
  FUN_1138_1364((int)*(undefined4 *)(iVar1 + 0xdd),
                (int)((ulong)*(undefined4 *)(iVar1 + 0xdd) >> 0x10),iVar1,uVar3);
  *(undefined2 *)(iVar1 + 0xe3) = 0x10;
  *(undefined *)(iVar1 + 0xdc) = 1;
  *(undefined *)(iVar1 + 0xe9) = 1;
  if (param_2 != '\0') {
    DAT_1160_1858 = uStack_a;
  }
  return param_1;
}



/* ---- FUN_1120_76c5 @ 1120:76c5  (76 octets) ---- */

void __stdcall16far FUN_1120_76c5(undefined4 param_1,char param_2)

{
  int iVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  FUN_1158_1f7f((int)*(undefined4 *)(iVar1 + 0xdd),
                (int)((ulong)*(undefined4 *)(iVar1 + 0xdd) >> 0x10));
  FUN_1158_1f7f((int)*(undefined4 *)(iVar1 + 0xd8),
                (int)((ulong)*(undefined4 *)(iVar1 + 0xd8) >> 0x10));
  FUN_1158_1f7f((int)*(undefined4 *)(iVar1 + 0xea),
                (int)((ulong)*(undefined4 *)(iVar1 + 0xea) >> 0x10));
  FUN_1138_2efc(iVar1,uVar2,0);
  if (param_2 != '\0') {
    FUN_1158_200f();
  }
  return;
}



/* ---- FUN_1120_7711 @ 1120:7711  (24 octets) ---- */

void __stdcall16far FUN_1120_7711(undefined4 param_1)

{
  undefined2 *puVar1;
  
  puVar1 = (undefined2 *)((int)*(undefined4 *)*(undefined4 *)((int)param_1 + 0xd8) + 0x30);
  (*(code *)*puVar1)();
  return;
}



/* ---- FUN_1120_7729 @ 1120:7729  (60 octets) ---- */

void __stdcall16far FUN_1120_7729(undefined4 param_1)

{
  int iVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  if (*(int *)(iVar1 + 0xe1) != 0) {
    FUN_1138_62b9(iVar1,uVar2);
    SENDMESSAGE(0x1138,0,0,
                (*(int *)(iVar1 + 0x22) + *(int *)(iVar1 + 0xe1) + -3) / *(int *)(iVar1 + 0xe1),
                0x416);
  }
  return;
}



/* ---- FUN_1120_7765 @ 1120:7765  (86 octets) ---- */

void __stdcall16far FUN_1120_7765(undefined4 param_1,int param_2)

{
  char cVar1;
  int iVar2;
  undefined2 uVar3;
  
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  iVar2 = (int)param_1;
  if (*(int *)(iVar2 + 0xe1) != param_2) {
    if ((*(int *)(iVar2 + 0xe1) == 0) || (param_2 == 0)) {
      *(int *)(iVar2 + 0xe1) = param_2;
      FUN_1138_405a(iVar2,uVar3);
    }
    else {
      *(int *)(iVar2 + 0xe1) = param_2;
      cVar1 = FUN_1138_64fa(iVar2,uVar3);
      if (cVar1 != '\0') {
        FUN_1120_7729(iVar2,uVar3);
      }
    }
  }
  return;
}



/* ---- FUN_1120_77bb @ 1120:77bb  (39 octets) ---- */

undefined2 __stdcall16far FUN_1120_77bb(undefined4 param_1)

{
  undefined2 uVar1;
  
  FUN_1138_62b9((int)param_1,(int)((ulong)param_1 >> 0x10));
  uVar1 = SENDMESSAGE(0x1138,0,0,0,0x409);
  return uVar1;
}



/* ---- FUN_1120_77e2 @ 1120:77e2  (48 octets) ---- */

void __stdcall16far FUN_1120_77e2(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = FUN_1120_77bb((int)param_1,uVar2);
  if (iVar1 != param_2) {
    FUN_1138_62b9((int)param_1,uVar2);
    SENDMESSAGE(0x1138,0,0,param_2,0x407);
  }
  return;
}



/* ---- FUN_1120_7812 @ 1120:7812  (35 octets) ---- */

void __stdcall16far FUN_1120_7812(undefined4 param_1,char param_2)

{
  int iVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  if (param_2 != *(char *)(iVar1 + 0xe9)) {
    *(char *)(iVar1 + 0xe9) = param_2;
    FUN_1138_405a(iVar1,uVar2);
  }
  return;
}



/* ---- FUN_1120_7835 @ 1120:7835  (35 octets) ---- */

void __stdcall16far FUN_1120_7835(undefined4 param_1,char param_2)

{
  int iVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  if (param_2 != *(char *)(iVar1 + 0xe6)) {
    *(char *)(iVar1 + 0xe6) = param_2;
    FUN_1138_405a(iVar1,uVar2);
  }
  return;
}



/* ---- FUN_1120_7858 @ 1120:7858  (59 octets) ---- */

int __stdcall16far FUN_1120_7858(undefined4 param_1)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 unaff_SS;
  undefined local_c [2];
  int local_a;
  int local_6;
  int local_4;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  local_4 = *(int *)(iVar1 + 0xe3);
  if (*(char *)(iVar1 + 0xe5) == '\0') {
    FUN_1138_24bb(iVar1,uVar2,local_c,unaff_SS,0,0x419);
    local_4 = local_6 - local_a;
  }
  return local_4;
}



/* ---- FUN_1120_7893 @ 1120:7893  (41 octets) ---- */

void __stdcall16far FUN_1120_7893(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  if ((*(int *)(iVar1 + 0xe3) != param_2) && (0 < param_2)) {
    *(int *)(iVar1 + 0xe3) = param_2;
    FUN_1138_405a(iVar1,uVar2);
  }
  return;
}



/* ---- FUN_1120_78bc @ 1120:78bc  (35 octets) ---- */

void __stdcall16far FUN_1120_78bc(undefined4 param_1,char param_2)

{
  int iVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  if (*(char *)(iVar1 + 0xe7) != param_2) {
    *(char *)(iVar1 + 0xe7) = param_2;
    FUN_1138_405a(iVar1,uVar2);
  }
  return;
}



/* ---- FUN_1120_78df @ 1120:78df  (109 octets) ---- */

undefined2 __stdcall16far FUN_1120_78df(undefined4 param_1,undefined2 param_2)

{
  long lVar1;
  undefined2 uVar2;
  undefined extraout_AH;
  undefined2 unaff_SS;
  undefined4 uVar3;
  undefined *puVar4;
  undefined local_108 [256];
  undefined4 local_8;
  
  uVar2 = FUN_1138_62b9((int)param_1,(int)((ulong)param_1 >> 0x10));
  local_8 = SENDMESSAGE(0x1138,0,0,param_2,0x408);
  lVar1 = local_8;
  if (local_8 == -1) {
    puVar4 = local_108;
    FUN_1150_092b(0xf00b);
    uVar3 = FUN_1150_28e6(0x217,0x1148,CONCAT11(extraout_AH,1),puVar4,unaff_SS);
    FUN_1158_1399(0x1150,uVar3,uVar2);
    lVar1 = local_8;
  }
  local_8._2_2_ = (uint)((ulong)lVar1 >> 0x10);
  local_8._0_2_ = (uint)lVar1;
  return CONCAT11((char)(-((uint)local_8 | local_8._2_2_) >> 8),((uint)local_8 | local_8._2_2_) != 0
                 );
}



/* ---- FUN_1120_794c @ 1120:794c  (35 octets) ---- */

void __stdcall16far FUN_1120_794c(undefined4 param_1,char param_2)

{
  int iVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  if (*(char *)(iVar1 + 0xe8) != param_2) {
    *(char *)(iVar1 + 0xe8) = param_2;
    FUN_1138_405a(iVar1,uVar2);
  }
  return;
}



/* ---- FUN_1120_796f @ 1120:796f  (35 octets) ---- */

void __stdcall16far FUN_1120_796f(undefined4 param_1,char param_2)

{
  int iVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  if (*(char *)(iVar1 + 0xe5) != param_2) {
    *(char *)(iVar1 + 0xe5) = param_2;
    FUN_1138_405a(iVar1,uVar2);
  }
  return;
}



/* ---- FUN_1120_7992 @ 1120:7992  (39 octets) ---- */

undefined2 __stdcall16far FUN_1120_7992(undefined4 param_1)

{
  undefined2 uVar1;
  
  FUN_1138_62b9((int)param_1,(int)((ulong)param_1 >> 0x10));
  uVar1 = SENDMESSAGE(0x1138,0,0,0,0x40f);
  return uVar1;
}



/* ---- FUN_1120_79b9 @ 1120:79b9  (35 octets) ---- */

void __stdcall16far FUN_1120_79b9(undefined4 param_1,char param_2)

{
  int iVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  if (*(char *)(iVar1 + 0xdc) != param_2) {
    *(char *)(iVar1 + 0xdc) = param_2;
    FUN_1138_405a(iVar1,uVar2);
  }
  return;
}



/* ---- FUN_1120_79dc @ 1120:79dc  (48 octets) ---- */

void __stdcall16far FUN_1120_79dc(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = FUN_1120_7992((int)param_1,uVar2);
  if (iVar1 != param_2) {
    FUN_1138_62b9((int)param_1,uVar2);
    SENDMESSAGE(0x1138,0,0,param_2,0x418);
  }
  return;
}



/* ---- FUN_1120_7a0c @ 1120:7a0c  (30 octets) ---- */

void __stdcall16far FUN_1120_7a0c(undefined4 param_1)

{
  undefined2 *puVar1;
  
  puVar1 = (undefined2 *)((int)*(undefined4 *)*(undefined4 *)((int)param_1 + 0xd8) + 8);
  (*(code *)*puVar1)();
  return;
}



/* ---- FUN_1120_7a2a @ 1120:7a2a  (145 octets) ---- */

int __stdcall16far
FUN_1120_7a2a(undefined4 *param_1,char param_2,undefined2 param_3,undefined2 param_4)

{
  undefined2 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined2 uVar5;
  undefined2 unaff_CS;
  undefined2 unaff_SS;
  undefined4 *puVar6;
  undefined2 uVar7;
  undefined *puVar8;
  undefined local_1e [8];
  undefined local_16 [16];
  int local_6;
  int local_4;
  
  puVar8 = local_1e;
  uVar5 = (undefined2)((ulong)param_1 >> 0x10);
  puVar4 = (undefined4 *)param_1;
  puVar1 = (undefined2 *)((int)*param_1 + 0x34);
  puVar6 = puVar4;
  uVar7 = uVar5;
  (*(code *)*puVar1)();
  iVar3 = PTINRECT(unaff_CS,param_3,param_4,puVar6);
  if (iVar3 != 0) {
    local_4 = FUN_1120_7992(puVar4,uVar5);
    puVar2 = (undefined4 *)puVar4[0x36];
    puVar1 = (undefined2 *)((int)*puVar2 + 0x10);
    local_6 = (*(code *)*puVar1)(0x1120,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),uVar7,
                                 puVar8);
    for (; local_4 < local_6; local_4 = local_4 + 1) {
      FUN_1138_24bb(puVar4,uVar5,local_16,unaff_SS,local_4,0x419);
      iVar3 = PTINRECT(0x1138,param_3,param_4,local_16);
      if (iVar3 != 0) {
        return local_4;
      }
    }
    if (param_2 == '\0') {
      return local_4;
    }
  }
  return -1;
}



/* ---- FUN_1120_7abb @ 1120:7abb  (316 octets) ---- */

void __stdcall16far FUN_1120_7abb(undefined4 param_1,undefined4 param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint *puVar12;
  int iVar13;
  int iVar14;
  undefined2 uVar15;
  undefined2 uVar16;
  int local_6;
  
  uVar15 = (undefined2)((ulong)param_2 >> 0x10);
  iVar8 = (int)param_2;
  uVar16 = (undefined2)((ulong)param_1 >> 0x10);
  iVar9 = (int)param_1;
  FUN_1138_3b29(iVar9,uVar16,iVar8,uVar15);
  FUN_1138_3ad0(iVar9,uVar16,0xf68,0x1160,iVar8,uVar15);
  *(int *)(iVar8 + 0xc) = *(int *)(iVar8 + 0xc) + 1;
  *(int *)(iVar8 + 0xe) = *(int *)(iVar8 + 0xe) + 1;
  *(int *)(iVar8 + 0x10) = *(int *)(iVar8 + 0x10) + -2;
  *(int *)(iVar8 + 0x12) = *(int *)(iVar8 + 0x12) + -2;
  local_6 = 0xf48;
  if (*(char *)(iVar9 + 0xe9) != '\0') {
    local_6 = 0xf50;
  }
  iVar10 = *(char *)(iVar9 + 0xe5) * 4;
  uVar1 = *(uint *)(iVar10 + 0xf36);
  uVar2 = *(uint *)(iVar8 + 6);
  iVar11 = *(char *)(iVar9 + 0xe8) * 4;
  uVar3 = *(uint *)(iVar11 + 0xf42);
  puVar12 = (uint *)(local_6 + *(char *)(iVar9 + 0xe7) * 4);
  uVar4 = puVar12[1];
  iVar13 = *(char *)(iVar9 + 0xe6) * 4;
  uVar5 = *(uint *)(iVar13 + 0xf5a);
  iVar14 = (*(int *)(iVar9 + 0xe1) != 0) * 4;
  uVar6 = *(uint *)(iVar14 + 0xf62);
  iVar9 = *(char *)(iVar9 + 0xdc) * 4;
  uVar7 = *(uint *)(iVar9 + 0xe60);
  *(uint *)(iVar8 + 4) =
       *(uint *)(iVar9 + 0xe5e) |
       *(uint *)(iVar14 + 0xf60) |
       *(uint *)(iVar13 + 0xf58) |
       *puVar12 |
       *(uint *)(iVar11 + 0xf40) | *(uint *)(iVar8 + 4) | 0x41 | *(uint *)(iVar10 + 0xf34);
  *(uint *)(iVar8 + 6) = uVar7 | uVar6 | uVar5 | uVar4 | uVar3 | uVar2 | 0x10 | uVar1;
  return;
}



/* ---- FUN_1120_7bf7 @ 1120:7bf7  (126 octets) ---- */

void __stdcall16far FUN_1120_7bf7(undefined4 param_1)

{
  undefined2 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined2 uVar4;
  
  uVar4 = (undefined2)((ulong)param_1 >> 0x10);
  iVar3 = (int)param_1;
  FUN_1138_3c88(iVar3,uVar4);
  FUN_1120_7729(iVar3,uVar4);
  if (*(int *)(iVar3 + 0xea) != 0 || *(int *)(iVar3 + 0xec) != 0) {
    puVar2 = (undefined4 *)*(undefined4 *)(iVar3 + 0xd8);
    puVar1 = (undefined2 *)((int)*puVar2 + 8);
    (*(code *)*puVar1)(0x1120,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),
                       *(undefined2 *)(iVar3 + 0xea),*(undefined2 *)(iVar3 + 0xec));
    FUN_1120_79dc(iVar3,uVar4,*(undefined2 *)(iVar3 + 0xee));
    FUN_1120_77e2(iVar3,uVar4,*(undefined2 *)(iVar3 + 0xf0));
    FUN_1158_1f7f((int)*(undefined4 *)(iVar3 + 0xea),
                  (int)((ulong)*(undefined4 *)(iVar3 + 0xea) >> 0x10));
    *(undefined2 *)(iVar3 + 0xea) = 0;
    *(undefined2 *)(iVar3 + 0xec) = 0;
  }
  return;
}



/* ---- FUN_1120_7c75 @ 1120:7c75  (124 octets) ---- */

void __stdcall16far FUN_1120_7c75(undefined4 param_1)

{
  undefined2 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  undefined4 uVar8;
  
  uVar6 = (undefined2)((ulong)param_1 >> 0x10);
  iVar4 = (int)param_1;
  puVar2 = (undefined4 *)*(undefined4 *)(iVar4 + 0xd8);
  uVar7 = (undefined2)((ulong)puVar2 >> 0x10);
  puVar5 = (undefined4 *)puVar2;
  puVar1 = (undefined2 *)((int)*puVar2 + 0x10);
  iVar3 = (*(code *)*puVar1)();
  if (0 < iVar3) {
    uVar8 = FUN_1148_1d08(0x3c9,0x1148,1);
    *(undefined2 *)(iVar4 + 0xea) = (int)uVar8;
    *(undefined2 *)(iVar4 + 0xec) = (int)((ulong)uVar8 >> 0x10);
    puVar2 = (undefined4 *)*(undefined4 *)(iVar4 + 0xea);
    puVar1 = (undefined2 *)((int)*puVar2 + 8);
    (*(code *)*puVar1)(0x1148,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),
                       *(undefined2 *)(iVar4 + 0xd8),*(undefined2 *)(iVar4 + 0xda),puVar5,uVar7);
    uVar7 = FUN_1120_7992(iVar4,uVar6);
    *(undefined2 *)(iVar4 + 0xee) = uVar7;
    uVar7 = FUN_1120_77bb(iVar4,uVar6);
    *(undefined2 *)(iVar4 + 0xf0) = uVar7;
  }
  FUN_1138_3e77(iVar4,uVar6);
  return;
}



/* ---- FUN_1120_7cf1 @ 1120:7cf1  (124 octets) ---- */

void __stdcall16far FUN_1120_7cf1(undefined4 param_1,int *param_2)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  
  uVar4 = (undefined2)((ulong)param_1 >> 0x10);
  iVar2 = (int)param_1;
  piVar3 = (int *)param_2;
  uVar5 = (undefined2)((ulong)param_2 >> 0x10);
  if ((((*(byte *)(iVar2 + 0x18) & 0x10) == 0) &&
      (((*param_2 == 0x201 || (*param_2 == 0x203)) &&
       (cVar1 = FUN_1138_2496(iVar2,uVar4), cVar1 == '\0')))) && (*(char *)(iVar2 + 0x2e) == '\x01')
     ) {
    cVar1 = FUN_1138_4387(iVar2,uVar4,piVar3,uVar5);
    if (cVar1 == '\0') {
      *(byte *)(iVar2 + 0x28) = *(byte *)(iVar2 + 0x28) | 1;
      FUN_1158_2038(0x1138,iVar2,uVar4,piVar3,uVar5);
    }
  }
  else {
    FUN_1138_4446(iVar2,uVar4,piVar3,uVar5);
  }
  return;
}



/* ---- FUN_1120_7d6d @ 1120:7d6d  (174 octets) ---- */

void __stdcall16far FUN_1120_7d6d(undefined4 param_1,undefined4 param_2)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  
  uVar6 = (undefined2)((ulong)param_2 >> 0x10);
  iVar4 = (int)param_2;
  bVar1 = FUN_1140_1697(*(undefined2 *)(iVar4 + 2));
  uVar7 = (undefined2)((ulong)param_1 >> 0x10);
  iVar5 = (int)param_1;
  if ((((*(char *)(iVar5 + 0x2e) == '\x01') && (*(char *)(iVar5 + 0xe7) != '\0')) &&
      (((bVar1 & 1) == 0 || ((bVar1 & 4) != 0)))) &&
     ((iVar3 = FUN_1120_7a2a(iVar5,uVar7,1,*(undefined2 *)(iVar4 + 4),*(undefined2 *)(iVar4 + 6)),
      -1 < iVar3 && (cVar2 = FUN_1120_78df(iVar5,uVar7,iVar3), cVar2 != '\0')))) {
    FUN_1138_23c6(iVar5,uVar7,0);
    return;
  }
  FUN_1138_282c(iVar5,uVar7,iVar4,uVar6);
  if ((*(char *)(iVar5 + 0x2e) == '\x01') &&
     ((*(char *)(iVar5 + 0xe7) == '\0' || (((bVar1 & 4) == 0 && ((bVar1 & 1) == 0)))))) {
    FUN_1138_23c6(iVar5,uVar7,0);
  }
  return;
}



/* ---- FUN_1120_7e1b @ 1120:7e1b  (52 octets) ---- */

void __stdcall16far FUN_1120_7e1b(undefined2 param_1,undefined2 param_2_00,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = *(int *)((int)param_2 + 6);
  if (iVar1 == 1) {
    FUN_1158_206a();
  }
  else if (iVar1 == 2) {
    FUN_1158_206a();
  }
  return;
}



/* ---- FUN_1120_7e4f @ 1120:7e4f  (461 octets) ---- */

void FUN_1120_7e4f(int param_1)

{
  undefined2 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined2 unaff_SS;
  undefined4 uVar6;
  undefined *puVar7;
  undefined2 uVar8;
  undefined local_5a [8];
  undefined2 local_52;
  int local_50;
  int local_4e;
  int local_4c;
  undefined local_4a [8];
  undefined2 local_42;
  undefined2 local_40;
  int local_3e;
  undefined2 local_3c;
  int local_3a;
  undefined4 local_38;
  undefined2 local_34;
  undefined2 local_32;
  int local_30;
  undefined2 local_2e;
  undefined2 local_2c;
  undefined2 local_2a;
  undefined2 local_28;
  undefined local_26 [8];
  undefined4 local_1e;
  undefined2 local_1a;
  undefined2 local_18;
  undefined2 *local_16;
  undefined2 local_e;
  undefined2 local_c;
  undefined2 *local_a;
  
  local_e = 0x202b;
  local_a = &local_34;
  local_c = FUN_1138_62b9((int)*(undefined4 *)(param_1 + 6),
                          (int)((ulong)*(undefined4 *)(param_1 + 6) >> 0x10));
  local_34 = 2;
  local_2e = 1;
  local_2c = 0;
  local_28 = *(undefined2 *)((int)*(undefined4 *)(param_1 + 10) + 2);
  local_32 = FUN_1138_62b9((int)*(undefined4 *)(param_1 + 6),
                           (int)((ulong)*(undefined4 *)(param_1 + 6) >> 0x10));
  local_2a = FUN_1138_62b9((int)*(undefined4 *)(param_1 + 6),
                           (int)((ulong)*(undefined4 *)(param_1 + 6) >> 0x10));
  local_1a = 0x202c;
  local_18 = FUN_1138_62b9((int)*(undefined4 *)(param_1 + 6),
                           (int)((ulong)*(undefined4 *)(param_1 + 6) >> 0x10));
  local_16 = &local_42;
  local_42 = 2;
  local_40 = FUN_1138_62b9((int)*(undefined4 *)(param_1 + 6),
                           (int)((ulong)*(undefined4 *)(param_1 + 6) >> 0x10));
  local_4c = 0;
  local_4e = FUN_1120_7992((int)*(undefined4 *)(param_1 + 6),
                           (int)((ulong)*(undefined4 *)(param_1 + 6) >> 0x10));
  uVar8 = *(undefined2 *)((int)*(undefined4 *)(param_1 + 10) + 2);
  uVar5 = 0x14d0;
  GETCLIPBOX(0x1120,local_4a,unaff_SS);
  uVar4 = (undefined2)((ulong)*(undefined4 *)(param_1 + 6) >> 0x10);
  iVar3 = (int)*(undefined4 *)(param_1 + 6);
  local_50 = *(int *)(iVar3 + 0x24);
  local_52 = *(undefined2 *)(iVar3 + 0x22);
  do {
    if (local_50 <= local_4c) {
      return;
    }
    local_3e = local_4e;
    puVar2 = (undefined4 *)*(undefined4 *)((int)*(undefined4 *)(param_1 + 6) + 0xd8);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x10);
    iVar3 = (*(code *)*puVar1)(uVar5,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),uVar8);
    uVar6 = local_38;
    if (local_4e < iVar3) {
      puVar2 = (undefined4 *)*(undefined4 *)((int)*(undefined4 *)(param_1 + 6) + 0xd8);
      puVar1 = (undefined2 *)((int)*puVar2 + 0x14);
      uVar6 = (*(code *)*puVar1)(uVar5,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),local_4e);
    }
    local_3c = local_52;
    local_3a = *(int *)((int)*(undefined4 *)(param_1 + 6) + 0xe3);
    local_30 = local_4e;
    local_38 = uVar6;
    local_1e = uVar6;
    FUN_1158_2038(uVar5,(int)*(undefined4 *)(param_1 + 6),
                  (int)((ulong)*(undefined4 *)(param_1 + 6) >> 0x10),&local_1a);
    puVar7 = local_5a;
    uVar4 = unaff_SS;
    FUN_1148_0688(local_4c + local_3a,local_3c,local_4c,0);
    FUN_1158_161b(8,local_26,unaff_SS,puVar7,uVar4);
    uVar5 = 0x1158;
    FUN_1158_2038(0x1158,(int)*(undefined4 *)(param_1 + 6),
                  (int)((ulong)*(undefined4 *)(param_1 + 6) >> 0x10),&local_e);
    local_4c = local_4c + local_3a;
    local_4e = local_4e + 1;
    puVar2 = (undefined4 *)*(undefined4 *)((int)*(undefined4 *)(param_1 + 6) + 0xd8);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x10);
    iVar3 = (*(code *)*puVar1)(0x1158,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10));
  } while (local_4e < iVar3);
  return;
}



/* ---- FUN_1120_801c @ 1120:801c  (39 octets) ---- */

void __stdcall16far FUN_1120_801c(undefined4 param_1,undefined4 param_2)

{
  undefined2 uVar1;
  
  uVar1 = (undefined2)((ulong)param_2 >> 0x10);
  if (*(int *)((int)param_2 + 2) == 0) {
    FUN_1138_4a8c((int)param_1,(int)((ulong)param_1 >> 0x10),(int)param_2,uVar1);
  }
  else {
    FUN_1120_7e4f(&stack0xfffe);
  }
  return;
}



/* ---- FUN_1120_8043 @ 1120:8043  (33 octets) ---- */

void __stdcall16far FUN_1120_8043(undefined4 param_1,undefined2 param_2,undefined2 param_3)

{
  undefined2 uVar1;
  
  uVar1 = (undefined2)((ulong)param_1 >> 0x10);
  FUN_1138_4da8((int)param_1,uVar1,param_2,param_3);
  FUN_1120_7729((int)param_1,uVar1);
  return;
}



/* ---- FUN_1120_8064 @ 1120:8064  (97 octets) ---- */

void __stdcall16far FUN_1120_8064(undefined4 *param_1)

{
  undefined2 *puVar1;
  undefined4 *puVar2;
  undefined2 uVar3;
  undefined2 local_e;
  undefined2 local_c;
  undefined4 local_a;
  undefined2 local_6;
  undefined2 local_4;
  
  local_e = 0x201;
  GETCURSORPOS();
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  puVar2 = (undefined4 *)param_1;
  local_a = FUN_1138_1a06(puVar2,uVar3,(undefined2)local_a,local_a._2_2_);
  local_c = 0;
  local_6 = 0;
  local_4 = 0;
  puVar1 = (undefined2 *)((int)*param_1 + -0x10);
  (*(code *)*puVar1)(0x1138,puVar2,uVar3,&local_e);
  local_e = 0x202;
  puVar1 = (undefined2 *)((int)*param_1 + -0x10);
  (*(code *)*puVar1)(0x1138,puVar2,uVar3,&local_e);
  return;
}



/* ---- FUN_1120_816f @ 1120:816f  (51 octets) ---- */

void __stdcall16far FUN_1120_816f(undefined4 param_1)

{
  undefined2 *puVar1;
  
  if (*(int *)((int)param_1 + 0xfc) != 0) {
    puVar1 = (undefined2 *)((int)param_1 + 0xfa);
    (*(code *)*puVar1)();
  }
  return;
}



/* ---- FUN_1120_81a2 @ 1120:81a2  (260 octets) ---- */

void __stdcall16far FUN_1120_81a2(undefined4 *param_1,undefined4 param_2)

{
  byte bVar1;
  undefined2 *puVar2;
  undefined4 uVar3;
  undefined extraout_AH;
  undefined extraout_AH_00;
  undefined uVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined2 uVar7;
  undefined2 uVar8;
  
  uVar3 = *(undefined4 *)((int)param_2 + 4);
  uVar7 = (undefined2)((ulong)uVar3 >> 0x10);
  iVar5 = (int)uVar3;
  bVar1 = *(byte *)(iVar5 + 8);
  uVar8 = (undefined2)((ulong)param_1 >> 0x10);
  puVar6 = (undefined4 *)param_1;
  FUN_1128_225d((int)*(undefined4 *)((int)puVar6 + 0xdd),
                (int)((ulong)*(undefined4 *)((int)puVar6 + 0xdd) >> 0x10),
                *(undefined2 *)(iVar5 + 0xc));
  FUN_1128_2099((int)*(undefined4 *)((int)puVar6 + 0xdd),
                (int)((ulong)*(undefined4 *)((int)puVar6 + 0xdd) >> 0x10),
                *(undefined2 *)(puVar6 + 0xd),*(undefined2 *)((int)puVar6 + 0x36));
  FUN_1128_20d3((int)*(undefined4 *)((int)puVar6 + 0xdd),
                (int)((ulong)*(undefined4 *)((int)puVar6 + 0xdd) >> 0x10),
                *(undefined2 *)((int)puVar6 + 0x9e),*(undefined2 *)(puVar6 + 0x28));
  uVar4 = extraout_AH;
  if ((-1 < *(int *)(iVar5 + 4)) && ((bVar1 & 1) != 0)) {
    uVar3 = *(undefined4 *)((int)*(undefined4 *)((int)puVar6 + 0xdd) + 0xf);
    FUN_1128_1684((int)uVar3,(int)((ulong)uVar3 >> 0x10),0xfff2,0xffff);
    uVar3 = *(undefined4 *)((int)*(undefined4 *)((int)puVar6 + 0xdd) + 7);
    FUN_1128_0fdf((int)uVar3,(int)((ulong)uVar3 >> 0x10),0xfff1,0xffff);
    uVar4 = extraout_AH_00;
  }
  if (*(int *)(iVar5 + 4) < 0) {
    FUN_1128_1ce5((int)*(undefined4 *)((int)puVar6 + 0xdd),
                  (int)((ulong)*(undefined4 *)((int)puVar6 + 0xdd) >> 0x10),iVar5 + 0xe,uVar7);
  }
  else {
    puVar2 = (undefined2 *)((int)*param_1 + 0x7c);
    (*(code *)*puVar2)(0x1128,puVar6,uVar8,CONCAT11(uVar4,bVar1),iVar5 + 0xe,uVar7,
                       *(undefined2 *)(iVar5 + 4));
  }
  if ((bVar1 & 0x10) != 0) {
    DRAWFOCUSRECT(0x1128,iVar5 + 0xe,uVar7);
  }
  FUN_1128_225d((int)*(undefined4 *)((int)puVar6 + 0xdd),
                (int)((ulong)*(undefined4 *)((int)puVar6 + 0xdd) >> 0x10),0);
  return;
}



/* ---- FUN_1120_82a6 @ 1120:82a6  (73 octets) ---- */

void __stdcall16far FUN_1120_82a6(undefined4 *param_1,undefined4 param_2)

{
  undefined2 *puVar1;
  undefined4 uVar2;
  undefined2 uVar3;
  
  uVar2 = *(undefined4 *)((int)param_2 + 4);
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  *(undefined2 *)((int)uVar2 + 8) = *(undefined2 *)((int)(undefined4 *)param_1 + 0xe3);
  if (*(char *)((int)(undefined4 *)param_1 + 0xe5) == '\x02') {
    puVar1 = (undefined2 *)((int)*param_1 + 0x80);
    (*(code *)*puVar1)();
  }
  return;
}



/* ---- FUN_1120_82ef @ 1120:82ef  (151 octets) ---- */

undefined4 __stdcall16far
FUN_1120_82ef(undefined4 param_1,char param_2,undefined2 param_3,undefined2 param_4)

{
  undefined2 uVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  
  if (param_2 != '\0') {
    FUN_1158_1fe2();
  }
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  iVar2 = (int)param_1;
  FUN_1138_2e61(iVar2,uVar3,0,param_3,param_4);
  FUN_1138_17bf(iVar2,uVar3,0x79);
  uVar4 = 0x1138;
  uVar1 = GETSYSTEMMETRICS(0x1138,3);
  FUN_1138_17e1(iVar2,uVar3,uVar1);
  FUN_1138_6488(iVar2,uVar3,1);
  *(undefined2 *)(iVar2 + 0x26) = 0x90;
  *(undefined *)(iVar2 + 0xd8) = 0;
  *(undefined2 *)(iVar2 + 0xda) = 0;
  *(undefined2 *)(iVar2 + 0xdc) = 0;
  *(undefined2 *)(iVar2 + 0xde) = 100;
  *(undefined2 *)(iVar2 + 0xe0) = 1;
  *(undefined2 *)(iVar2 + 0xe2) = 1;
  if (param_2 != '\0') {
    DAT_1160_1858 = uVar4;
  }
  return param_1;
}



/* ---- FUN_1120_8386 @ 1120:8386  (93 octets) ---- */

void __stdcall16far FUN_1120_8386(undefined4 param_1,undefined4 param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  
  uVar5 = (undefined2)((ulong)param_2 >> 0x10);
  iVar3 = (int)param_2;
  uVar6 = (undefined2)((ulong)param_1 >> 0x10);
  iVar4 = (int)param_1;
  FUN_1138_3b29(iVar4,uVar6,iVar3,uVar5);
  FUN_1138_3ad0(iVar4,uVar6,0xf78,0x1160,iVar3,uVar5);
  iVar4 = *(char *)(iVar4 + 0xd8) * 4;
  uVar1 = *(uint *)(iVar4 + 0xf72);
  uVar2 = *(uint *)(iVar3 + 6);
  *(uint *)(iVar3 + 4) = *(uint *)(iVar4 + 0xf70) | *(uint *)(iVar3 + 4);
  *(uint *)(iVar3 + 6) = uVar1 | uVar2;
  return;
}



/* ---- FUN_1120_83e3 @ 1120:83e3  (78 octets) ---- */

void __stdcall16far FUN_1120_83e3(undefined4 param_1)

{
  int iVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  FUN_1138_3c88(iVar1,uVar2);
  FUN_1138_62b9(iVar1,uVar2);
  SETSCROLLRANGE(0x1138,0,*(undefined2 *)(iVar1 + 0xde),*(undefined2 *)(iVar1 + 0xdc),2);
  FUN_1138_62b9(iVar1,uVar2);
  SETSCROLLPOS(0x1138,1,*(undefined2 *)(iVar1 + 0xda),2);
  return;
}



/* ---- FUN_1120_8431 @ 1120:8431  (71 octets) ---- */

void __stdcall16far FUN_1120_8431(undefined4 *param_1,char param_2)

{
  undefined2 *puVar1;
  undefined4 *puVar2;
  undefined2 uVar3;
  
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  puVar2 = (undefined4 *)param_1;
  if (*(char *)(puVar2 + 0x36) != param_2) {
    *(char *)(puVar2 + 0x36) = param_2;
    if ((*(byte *)(puVar2 + 6) & 1) == 0) {
      puVar1 = (undefined2 *)((int)*param_1 + 0x4c);
      (*(code *)*puVar1)();
    }
    FUN_1138_405a(puVar2,uVar3);
  }
  return;
}



/* ---- FUN_1120_8478 @ 1120:8478  (244 octets) ---- */

void __stdcall16far FUN_1120_8478(undefined4 param_1,int param_2,int param_3,int param_4)

{
  char cVar1;
  undefined extraout_AH;
  int iVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined2 unaff_SS;
  undefined4 uVar5;
  undefined *puVar6;
  undefined local_102 [256];
  
  if (param_2 < param_3) {
    puVar6 = local_102;
    FUN_1150_092b(0xf02e);
    uVar5 = FUN_1150_28e6(0x52,0x1138,CONCAT11(extraout_AH,1),puVar6,unaff_SS);
    FUN_1158_1399(0x1150,uVar5);
  }
  if (param_4 < param_3) {
    param_4 = param_3;
  }
  if (param_2 < param_4) {
    param_4 = param_2;
  }
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  iVar2 = (int)param_1;
  if ((*(int *)(iVar2 + 0xdc) != param_3) || (*(int *)(iVar2 + 0xde) != param_2)) {
    *(int *)(iVar2 + 0xdc) = param_3;
    *(int *)(iVar2 + 0xde) = param_2;
    cVar1 = FUN_1138_64fa(iVar2,uVar3);
    if (cVar1 != '\0') {
      FUN_1138_62b9(iVar2,uVar3);
      SETSCROLLRANGE(0x1138,*(int *)(iVar2 + 0xda) == param_4,param_2,param_3,2);
    }
  }
  if (*(int *)(iVar2 + 0xda) != param_4) {
    *(int *)(iVar2 + 0xda) = param_4;
    uVar4 = 0x1138;
    cVar1 = FUN_1138_64fa(iVar2,uVar3);
    if (cVar1 != '\0') {
      FUN_1138_62b9(iVar2,uVar3);
      uVar4 = 0x14d0;
      SETSCROLLPOS(0x1138,1,param_4,2);
    }
    FUN_1158_206a(uVar4,iVar2,uVar3);
  }
  return;
}



/* ---- FUN_1120_856c @ 1120:856c  (30 octets) ---- */

void __stdcall16far FUN_1120_856c(undefined4 param_1,undefined2 param_2)

{
  int iVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  FUN_1120_8478(iVar1,uVar2,*(undefined2 *)(iVar1 + 0xde),*(undefined2 *)(iVar1 + 0xdc),param_2);
  return;
}



/* ---- FUN_1120_858a @ 1120:858a  (30 octets) ---- */

void __stdcall16far FUN_1120_858a(undefined4 param_1,undefined2 param_2)

{
  int iVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  FUN_1120_8478(iVar1,uVar2,*(undefined2 *)(iVar1 + 0xde),param_2,*(undefined2 *)(iVar1 + 0xda));
  return;
}



/* ---- FUN_1120_85a8 @ 1120:85a8  (30 octets) ---- */

void __stdcall16far FUN_1120_85a8(undefined4 param_1,undefined2 param_2)

{
  int iVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  FUN_1120_8478(iVar1,uVar2,param_2,*(undefined2 *)(iVar1 + 0xdc),*(undefined2 *)(iVar1 + 0xda));
  return;
}



/* ---- FUN_1120_85c6 @ 1120:85c6  (40 octets) ---- */

void __stdcall16far FUN_1120_85c6(undefined4 param_1)

{
  undefined2 *puVar1;
  
  if (*(int *)((int)param_1 + 0xe6) != 0) {
    puVar1 = (undefined2 *)((int)param_1 + 0xe4);
    (*(code *)*puVar1)();
  }
  return;
}



/* ---- FUN_1120_85ee @ 1120:85ee  (52 octets) ---- */

void __stdcall16far FUN_1120_85ee(undefined4 param_1)

{
  undefined2 *puVar1;
  
  if (*(int *)((int)param_1 + 0xee) != 0) {
    puVar1 = (undefined2 *)((int)param_1 + 0xec);
    (*(code *)*puVar1)();
  }
  return;
}



/* ---- FUN_1120_8632 @ 1120:8632  (289 octets) ---- */

void __stdcall16far FUN_1120_8632(undefined4 param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined2 unaff_CS;
  undefined2 uVar6;
  bool bVar7;
  uint local_8;
  int local_6;
  uint local_4;
  
  uVar4 = (undefined2)((ulong)param_2 >> 0x10);
  uVar5 = (undefined2)((ulong)param_1 >> 0x10);
  iVar3 = (int)param_1;
  local_8 = *(uint *)(iVar3 + 0xda);
  local_6 = (int)local_8 >> 0xf;
  uVar6 = 0x1120;
  switch(*(undefined *)((int)param_2 + 2)) {
  case 0:
    uVar1 = *(uint *)(iVar3 + 0xe0);
    bVar7 = local_8 < uVar1;
    local_8 = local_8 - uVar1;
    local_6 = (local_6 - ((int)uVar1 >> 0xf)) - (uint)bVar7;
    unaff_CS = uVar6;
    break;
  case 1:
    uVar1 = *(uint *)(iVar3 + 0xe0);
    bVar7 = CARRY2(local_8,uVar1);
    local_8 = local_8 + uVar1;
    local_6 = local_6 + ((int)uVar1 >> 0xf) + (uint)bVar7;
    unaff_CS = uVar6;
    break;
  case 2:
    uVar1 = *(uint *)(iVar3 + 0xe2);
    bVar7 = local_8 < uVar1;
    local_8 = local_8 - uVar1;
    local_6 = (local_6 - ((int)uVar1 >> 0xf)) - (uint)bVar7;
    unaff_CS = uVar6;
    break;
  case 3:
    uVar1 = *(uint *)(iVar3 + 0xe2);
    bVar7 = CARRY2(local_8,uVar1);
    local_8 = local_8 + uVar1;
    local_6 = local_6 + ((int)uVar1 >> 0xf) + (uint)bVar7;
    unaff_CS = uVar6;
    break;
  case 4:
  case 5:
    local_8 = *(uint *)((int)param_2 + 4);
    local_6 = (int)local_8 >> 0xf;
    unaff_CS = uVar6;
    break;
  case 6:
    local_8 = *(uint *)(iVar3 + 0xdc);
    local_6 = (int)local_8 >> 0xf;
    unaff_CS = uVar6;
    break;
  case 7:
    local_8 = *(uint *)(iVar3 + 0xde);
    local_6 = (int)local_8 >> 0xf;
    unaff_CS = uVar6;
  }
  iVar2 = (int)*(uint *)(iVar3 + 0xdc) >> 0xf;
  if ((local_6 < iVar2) || ((local_6 <= iVar2 && (local_8 < *(uint *)(iVar3 + 0xdc))))) {
    local_8 = *(uint *)(iVar3 + 0xdc);
    local_6 = (int)local_8 >> 0xf;
  }
  iVar2 = (int)*(uint *)(iVar3 + 0xde) >> 0xf;
  if ((iVar2 < local_6) || ((iVar2 <= local_6 && (*(uint *)(iVar3 + 0xde) < local_8)))) {
    local_8 = *(uint *)(iVar3 + 0xde);
  }
  local_4 = local_8;
  FUN_1158_206a(unaff_CS,iVar3,uVar5,&local_4);
  FUN_1120_856c(iVar3,uVar5,local_4);
  return;
}



/* ---- FUN_1120_8753 @ 1120:8753  (22 octets) ---- */

void __stdcall16far FUN_1120_8753(undefined4 param_1,undefined4 param_2)

{
  FUN_1120_8632((int)param_1,(int)((ulong)param_1 >> 0x10),(int)param_2,
                (int)((ulong)param_2 >> 0x10));
  return;
}



/* ---- FUN_1120_8769 @ 1120:8769  (22 octets) ---- */

void __stdcall16far FUN_1120_8769(undefined4 param_1,undefined4 param_2)

{
  FUN_1120_8632((int)param_1,(int)((ulong)param_1 >> 0x10),(int)param_2,
                (int)((ulong)param_2 >> 0x10));
  return;
}




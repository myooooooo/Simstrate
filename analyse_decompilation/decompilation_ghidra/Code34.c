/* Simstrat (FR).EXE - segment Code34 - 72 fonctions
   Decompile par Ghidra 11.2.1 (x86 16 bits, chargeur NE). */

/* ---- FUN_1108_0acf @ 1108:0acf  (387 octets) ---- */

undefined2 __stdcall16far
FUN_1108_0acf(undefined2 param_1,undefined2 param_2,undefined2 param_3,int param_4,
             undefined2 param_5)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int unaff_BP;
  undefined2 unaff_CS;
  undefined2 unaff_SS;
  undefined4 uVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  undefined2 uStack_1c;
  undefined *puStack_1a;
  undefined2 uStack_18;
  int local_10;
  int local_e;
  int local_c;
  int local_a;
  int local_8;
  undefined2 local_6;
  undefined2 local_4;
  int iStack_2;
  
  iStack_2 = unaff_BP + 1;
  puStack_1a = (undefined *)&iStack_2;
  local_4 = 0x1160;
  local_6 = 0;
  uStack_18 = 0xac5;
  uStack_1c = *(undefined2 *)&DAT_1160_1858;
  *(undefined2 **)0x1858 = &uStack_1c;
  if (param_4 == 0x110) {
    piVar1 = &iStack_2;
    if (*(int *)&DAT_1160_0cb6 != 0 || *(int *)&DAT_1160_0cb8 != 0) {
      unaff_CS = 0x1108;
      FUN_1108_1a28((int)*(undefined4 *)&DAT_1160_0cb6,
                    (int)((ulong)*(undefined4 *)&DAT_1160_0cb6 >> 0x10),0x480,param_5);
      *(undefined2 *)&DAT_1160_0cb6 = 0;
      *(undefined2 *)&DAT_1160_0cb8 = 0;
      piVar1 = (int *)puStack_1a;
    }
    puStack_1a = (undefined *)piVar1;
    if (*(char *)&DAT_1160_0cb4 != '\0') {
      FUN_1140_13ed(0xffff,param_5);
      unaff_CS = 0x1140;
      FUN_1140_140f(1);
    }
    uVar5 = param_5;
    GETWINDOWRECT(unaff_CS,&local_10,unaff_SS);
    local_8 = local_c - local_10;
    iVar2 = GETSYSTEMMETRICS(0x14d0,0,0,param_5,uVar5);
    uVar6 = 1;
    uVar5 = 0x14d0;
    iVar2 = GETSYSTEMMETRICS(0x14d0,1,(iVar2 - local_8) / 2);
    SETWINDOWPOS(0x14d0,0x15,0,0,((iVar2 - local_a) + local_e) / 3,uVar5,uVar6);
    local_6 = 1;
  }
  else if (param_4 == 2) {
    if (*(char *)&DAT_1160_0cb4 != '\0') {
      puStack_1a = (undefined *)&iStack_2;
      FUN_1140_140f(0);
    }
  }
  else if (param_4 == 0x19) {
    if ((*(char *)&DAT_1160_0cb4 != '\0') &&
       (*(int *)&DAT_1160_152a != 0 || *(int *)&DAT_1160_152c != 0)) {
      puStack_1a = (undefined *)&iStack_2;
      local_6 = (*(code *)*(undefined2 *)&DAT_1160_152a)();
    }
  }
  else if ((((param_4 == 0x86) || (param_4 == 0x85)) || (param_4 == 0xc)) &&
          ((*(char *)&DAT_1160_0cb4 != '\0' &&
           (*(int *)&DAT_1160_1526 != 0 || *(int *)&DAT_1160_1528 != 0)))) {
    puStack_1a = (undefined *)&iStack_2;
    uVar3 = GETWINFLAGS();
    if (((uVar3 & 0x4000) != 0) &&
       ((param_4 == 0xc && (*(int *)&DAT_1160_0cba != 0 || *(int *)&DAT_1160_0cbc != 0)))) {
      param_1 = *(undefined2 *)&DAT_1160_0cba;
      param_2 = *(undefined2 *)&DAT_1160_0cbc;
    }
    uVar4 = (*(code *)*(undefined2 *)&DAT_1160_1526)
                      (0x14d0,param_1,param_2,param_3,param_4,param_5,0,param_5);
    SETWINDOWLONG(0x14d0,uVar4,unaff_CS);
    local_6 = 1;
  }
  *(undefined2 *)&DAT_1160_1858 = uStack_1c;
  return local_6;
}



/* ---- FUN_1108_0c6c @ 1108:0c6c  (82 octets) ---- */
/* echec : 
Low-level Error: Overlapping input varnodes */

/* ---- FUN_1108_0cc5 @ 1108:0cc5  (35 octets) ---- */

undefined2 FUN_1108_0cc5(void)

{
  int iVar1;
  undefined2 unaff_CS;
  undefined2 local_6;
  
  iVar1 = ISBADWRITEPTR(unaff_CS,local_6,0);
  return CONCAT11((char)((uint)-iVar1 >> 8),iVar1 != 0);
}



/* ---- FUN_1108_0ce8 @ 1108:0ce8  (96 octets) ---- */

undefined4 __stdcall16far
FUN_1108_0ce8(undefined4 param_1,char param_2,undefined2 param_3,undefined2 param_4)

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
  uVar3 = FUN_1140_1489(0xdd7,0x1108,iVar1,uVar2);
  *(undefined2 *)(iVar1 + 4) = (int)uVar3;
  *(undefined2 *)(iVar1 + 6) = (int)((ulong)uVar3 >> 0x10);
  *(undefined2 *)(iVar1 + 0xc) = param_3;
  *(undefined2 *)(iVar1 + 0xe) = param_4;
  if (param_2 != '\0') {
    DAT_1160_1858 = uStack_a;
  }
  return param_1;
}



/* ---- FUN_1108_0d48 @ 1108:0d48  (47 octets) ---- */

void __stdcall16far FUN_1108_0d48(undefined4 param_1,char param_2)

{
  int iVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  FUN_1140_15a5(*(undefined2 *)(iVar1 + 4),*(undefined2 *)(iVar1 + 6));
  FUN_1158_1f66(iVar1,uVar2,0);
  if (param_2 != '\0') {
    FUN_1158_200f();
  }
  return;
}



/* ---- FUN_1108_0d77 @ 1108:0d77  (86 octets) ---- */

void __stdcall16far FUN_1108_0d77(undefined4 param_1,undefined2 *param_2)

{
  undefined2 *puVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined2 unaff_CS;
  undefined4 uVar5;
  
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  iVar2 = (int)param_1;
  if ((*(int *)(iVar2 + 0x10) != 0) && (*(int *)(iVar2 + 8) != 0 || *(int *)(iVar2 + 10) != 0)) {
    uVar4 = (undefined2)((ulong)param_2 >> 0x10);
    puVar1 = (undefined2 *)param_2;
    uVar5 = CALLWINDOWPROC(unaff_CS,puVar1[2],puVar1[3],puVar1[1],*param_2,
                           *(undefined2 *)(iVar2 + 0x10),*(undefined2 *)(iVar2 + 8));
    puVar1[4] = (int)uVar5;
    puVar1[5] = (int)((ulong)uVar5 >> 0x10);
  }
  return;
}



/* ---- FUN_1108_0e1c @ 1108:0e1c  (82 octets) ---- */

void __stdcall16far FUN_1108_0e1c(undefined4 param_1,char param_2)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 unaff_CS;
  undefined2 local_4;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  if (param_2 != *(char *)(iVar1 + 0x12)) {
    *(char *)(iVar1 + 0x12) = param_2;
    if (*(char *)(iVar1 + 0x12) == '\0') {
      local_4 = 0xfffe;
    }
    else {
      local_4 = 0xffff;
    }
    SETWINDOWPOS(unaff_CS,*(undefined2 *)(*(char *)(iVar1 + 0x12) * 2 + 0xcbe),0,0,0,0,local_4);
  }
  return;
}



/* ---- FUN_1108_0e6e @ 1108:0e6e  (22 octets) ---- */

void __stdcall16far FUN_1108_0e6e(void)

{
  FUN_1158_2038();
  return;
}



/* ---- FUN_1108_0e84 @ 1108:0e84  (34 octets) ---- */

void __stdcall16far FUN_1108_0e84(undefined4 *param_1)

{
  undefined2 *puVar1;
  
  puVar1 = (undefined2 *)((int)*param_1 + -0x10);
  (*(code *)*puVar1)();
  *(undefined2 *)((undefined4 *)param_1 + 4) = 0;
  return;
}



/* ---- FUN_1108_0ea6 @ 1108:0ea6  (55 octets) ---- */

void __stdcall16far FUN_1108_0ea6(undefined4 param_1)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 unaff_CS;
  undefined4 uVar3;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  *(undefined2 *)(iVar1 + 0x10) = *(undefined2 *)((int)*(undefined4 *)(iVar1 + 0xc) + 0xc);
  uVar3 = SETWINDOWLONG(unaff_CS,*(undefined2 *)(iVar1 + 4),*(undefined2 *)(iVar1 + 6),0xfffc);
  *(undefined2 *)(iVar1 + 8) = (int)uVar3;
  *(undefined2 *)(iVar1 + 10) = (int)((ulong)uVar3 >> 0x10);
  return;
}



/* ---- FUN_1108_0edd @ 1108:0edd  (163 octets) ---- */

void __stdcall16far FUN_1108_0edd(undefined4 param_1,int *param_2)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined2 unaff_CS;
  
  uVar4 = (undefined2)((ulong)param_2 >> 0x10);
  piVar2 = (int *)param_2;
  iVar3 = (int)param_1;
  uVar5 = (undefined2)((ulong)param_1 >> 0x10);
  if (((*param_2 == 0x100) || (*param_2 == 0x104)) &&
     ((*(char *)(piVar2 + 1) == '&' || (*(char *)(piVar2 + 1) == '(')))) {
    uVar1 = *(undefined4 *)((int)*(undefined4 *)(iVar3 + 0xc) + 0x1e);
    if (((*(char *)((int)uVar1 + 0x12) == '\0') && (piVar2[1] == 0x28)) &&
       ((piVar2[3] & 0x2000U) != 0)) {
      FUN_1108_14d4((int)*(undefined4 *)(iVar3 + 0xc),
                    (int)((ulong)*(undefined4 *)(iVar3 + 0xc) >> 0x10));
    }
    else {
      SENDMESSAGE(unaff_CS,piVar2[2],piVar2[3],piVar2[1],*param_2);
    }
  }
  else {
    FUN_1108_0d77(iVar3,uVar5,piVar2,uVar4);
  }
  return;
}



/* ---- FUN_1108_0f80 @ 1108:0f80  (39 octets) ---- */

void __stdcall16far FUN_1108_0f80(undefined4 *param_1,undefined2 param_2,undefined2 param_3)

{
  undefined2 *puVar1;
  undefined4 uVar2;
  undefined2 uVar3;
  
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  uVar2 = ((undefined4 *)param_1)[3];
  FUN_1108_1294((int)uVar2,(int)((ulong)uVar2 >> 0x10));
  puVar1 = (undefined2 *)((int)*param_1 + -0x10);
  (*(code *)*puVar1)(0x1108,(undefined4 *)param_1,uVar3,param_2,param_3);
  return;
}



/* ---- FUN_1108_0fa7 @ 1108:0fa7  (60 octets) ---- */

void __stdcall16far FUN_1108_0fa7(undefined4 param_1)

{
  undefined2 uVar1;
  int iVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  iVar2 = (int)param_1;
  uVar1 = GETPARENT();
  *(undefined2 *)(iVar2 + 0x10) = uVar1;
  uVar4 = SETWINDOWLONG(0x14d0,*(undefined2 *)(iVar2 + 4),*(undefined2 *)(iVar2 + 6),0xfffc);
  *(undefined2 *)(iVar2 + 8) = (int)uVar4;
  *(undefined2 *)(iVar2 + 10) = (int)((ulong)uVar4 >> 0x10);
  return;
}



/* ---- FUN_1108_0fe3 @ 1108:0fe3  (39 octets) ---- */

void __stdcall16far FUN_1108_0fe3(undefined4 *param_1,undefined2 param_2,undefined2 param_3)

{
  undefined2 *puVar1;
  undefined4 uVar2;
  undefined2 uVar3;
  
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  uVar2 = ((undefined4 *)param_1)[3];
  FUN_1108_1294((int)uVar2,(int)((ulong)uVar2 >> 0x10));
  puVar1 = (undefined2 *)((int)*param_1 + -0x10);
  (*(code *)*puVar1)(0x1108,(undefined4 *)param_1,uVar3,param_2,param_3);
  return;
}



/* ---- FUN_1108_100a @ 1108:100a  (39 octets) ---- */

void __stdcall16far FUN_1108_100a(undefined4 *param_1,undefined2 param_2,undefined2 param_3)

{
  undefined2 *puVar1;
  undefined4 uVar2;
  undefined2 uVar3;
  
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  uVar2 = ((undefined4 *)param_1)[3];
  FUN_1108_1294((int)uVar2,(int)((ulong)uVar2 >> 0x10));
  puVar1 = (undefined2 *)((int)*param_1 + -0x10);
  (*(code *)*puVar1)(0x1108,(undefined4 *)param_1,uVar3,param_2,param_3);
  return;
}



/* ---- FUN_1108_10e4 @ 1108:10e4  (39 octets) ---- */

void __stdcall16far FUN_1108_10e4(undefined4 *param_1)

{
  undefined2 *puVar1;
  
  puVar1 = (undefined2 *)((int)*param_1 + -0x10);
  (*(code *)*puVar1)();
  FUN_1108_1294((int)((undefined4 *)param_1)[3],(int)((ulong)((undefined4 *)param_1)[3] >> 0x10));
  return;
}



/* ---- FUN_1108_110b @ 1108:110b  (276 octets) ---- */

undefined4 __stdcall16far
FUN_1108_110b(undefined4 param_1,char param_2,undefined2 param_3,undefined2 param_4)

{
  undefined2 uVar1;
  undefined extraout_AH;
  int iVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  undefined2 uVar5;
  
  if (param_2 != '\0') {
    FUN_1158_1fe2();
  }
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  iVar2 = (int)param_1;
  FUN_1158_1f50(iVar2,uVar3,0);
  *(undefined2 *)(iVar2 + 0x1a) = param_3;
  *(undefined2 *)(iVar2 + 0x1c) = param_4;
  uVar4 = FUN_1140_1489(0x1d88,0x1108,iVar2,uVar3);
  *(undefined2 *)(iVar2 + 4) = (int)uVar4;
  *(undefined2 *)(iVar2 + 6) = (int)((ulong)uVar4 >> 0x10);
  uVar4 = FUN_1128_17b8(0x560,0x1128,1);
  *(undefined2 *)(iVar2 + 0x10) = (int)uVar4;
  *(undefined2 *)(iVar2 + 0x12) = (int)((ulong)uVar4 >> 0x10);
  uVar4 = FUN_1128_56bd(0x83f,0x1128,1);
  *(undefined2 *)(iVar2 + 0x14) = (int)uVar4;
  *(undefined2 *)(iVar2 + 0x16) = (int)((ulong)uVar4 >> 0x10);
  uVar5 = 0;
  uVar1 = LOADBITMAP(0x1128,0x7fe2,0);
  FUN_1128_6104((int)*(undefined4 *)(iVar2 + 0x14),
                (int)((ulong)*(undefined4 *)(iVar2 + 0x14) >> 0x10),uVar1);
  uVar4 = FUN_1108_0ce8(0xa27,0x1108,CONCAT11(extraout_AH,1),iVar2,uVar3);
  *(undefined2 *)(iVar2 + 0x1e) = (int)uVar4;
  *(undefined2 *)(iVar2 + 0x20) = (int)((ulong)uVar4 >> 0x10);
  uVar4 = FUN_1108_0ce8(0xa64,0x1108,1,iVar2,uVar3);
  *(undefined2 *)(iVar2 + 0x22) = (int)uVar4;
  *(undefined2 *)(iVar2 + 0x24) = (int)((ulong)uVar4 >> 0x10);
  uVar4 = FUN_1108_0ce8(0xaa4,0x1108,1,iVar2,uVar3);
  *(undefined2 *)(iVar2 + 0x26) = (int)uVar4;
  *(undefined2 *)(iVar2 + 0x28) = (int)((ulong)uVar4 >> 0x10);
  if (param_2 != '\0') {
    DAT_1160_1858 = uVar5;
  }
  return param_1;
}



/* ---- FUN_1108_121f @ 1108:121f  (117 octets) ---- */

void __stdcall16far FUN_1108_121f(undefined4 param_1,char param_2)

{
  int iVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  FUN_1140_15a5(*(undefined2 *)(iVar1 + 4),*(undefined2 *)(iVar1 + 6));
  FUN_1158_1f7f((int)*(undefined4 *)(iVar1 + 0x10),
                (int)((ulong)*(undefined4 *)(iVar1 + 0x10) >> 0x10));
  FUN_1158_1f7f((int)*(undefined4 *)(iVar1 + 0x14),
                (int)((ulong)*(undefined4 *)(iVar1 + 0x14) >> 0x10));
  FUN_1158_1f7f((int)*(undefined4 *)(iVar1 + 0x1e),
                (int)((ulong)*(undefined4 *)(iVar1 + 0x1e) >> 0x10));
  FUN_1158_1f7f((int)*(undefined4 *)(iVar1 + 0x22),
                (int)((ulong)*(undefined4 *)(iVar1 + 0x22) >> 0x10));
  FUN_1158_1f7f((int)*(undefined4 *)(iVar1 + 0x26),
                (int)((ulong)*(undefined4 *)(iVar1 + 0x26) >> 0x10));
  FUN_1158_1f66(iVar1,uVar2,0);
  if (param_2 != '\0') {
    FUN_1158_200f();
  }
  return;
}



/* ---- FUN_1108_1294 @ 1108:1294  (23 octets) ---- */

void __stdcall16far FUN_1108_1294(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)((int)param_1 + 0x1e);
  FUN_1108_0e1c((int)uVar1,(int)((ulong)uVar1 >> 0x10),0);
  return;
}



/* ---- FUN_1108_12ab @ 1108:12ab  (63 octets) ---- */

undefined2 FUN_1108_12ab(undefined2 param_1,undefined *param_2)

{
  undefined2 unaff_SS;
  undefined4 uVar1;
  undefined2 local_108 [2];
  undefined local_104 [258];
  
  uVar1 = FUN_1150_0d4c((undefined *)param_2,(int)((ulong)param_2 >> 0x10),local_104,unaff_SS);
  GETTEXTEXTENTPOINT(0x1150,local_108,unaff_SS,*param_2,uVar1);
  return local_108[0];
}



/* ---- FUN_1108_12f0 @ 1108:12f0  (480 octets) ---- */

void __cdecl16far FUN_1108_12f0(undefined2 param_1)

{
  undefined2 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined2 uVar6;
  undefined2 unaff_SS;
  int in_stack_00000002;
  undefined *puVar7;
  undefined2 uVar8;
  undefined2 uVar9;
  undefined2 uStack_15a;
  undefined *puStack_158;
  int *piStack_156;
  undefined local_14a [256];
  int local_4a;
  int local_48;
  int local_46;
  undefined2 local_44;
  undefined local_40 [4];
  int local_3c;
  int local_38;
  int local_36;
  int local_32;
  int local_30 [16];
  int local_10;
  int local_e;
  int local_c;
  int local_a;
  int local_8;
  undefined2 local_6;
  undefined2 local_4;
  
  local_4 = CREATECOMPATIBLEDC();
  piStack_156 = (int *)0x0;
  puStack_158 = (undefined *)0x0;
  uStack_15a = 0x14d0;
  SENDMESSAGE();
  piStack_156 = (int *)0x1317;
  local_6 = SELECTOBJECT();
  piStack_156 = local_30;
  puStack_158 = (undefined *)0x14d0;
  uStack_15a = 0x1327;
  GETTEXTMETRICS();
  piStack_156 = (int *)0x12ea;
  uStack_15a = DAT_1160_1858;
  uVar2 = *(undefined4 *)((int)*(undefined4 *)(in_stack_00000002 + 6) + 0x1a);
  puVar3 = (undefined4 *)*(undefined4 *)((int)uVar2 + 0x1f);
  puVar1 = (undefined2 *)((int)*puVar3 + 0x10);
  DAT_1160_1858 = &uStack_15a;
  puStack_158 = &stack0xfffe;
  local_c = (*(code *)*puVar1)(0x14d0,(undefined4 *)puVar3,(int)((ulong)puVar3 >> 0x10));
  if (local_c < 1) {
    local_c = 1;
  }
  if (8 < local_c) {
    local_c = 8;
  }
  local_44 = GETPARENT(0x14d0,*(undefined2 *)((int)*(undefined4 *)(in_stack_00000002 + 6) + 0xe));
  uVar6 = *(undefined2 *)((int)*(undefined4 *)(in_stack_00000002 + 6) + 0xc);
  GETWINDOWRECT(0x14d0,&local_38,unaff_SS);
  uVar8 = *(undefined2 *)((int)*(undefined4 *)(in_stack_00000002 + 6) + 0xe);
  GETWINDOWRECT(0x14d0,local_40,unaff_SS);
  local_e = local_3c - local_38;
  local_10 = local_e * 2;
  uVar2 = *(undefined4 *)((int)*(undefined4 *)(in_stack_00000002 + 6) + 0x1a);
  puVar3 = (undefined4 *)*(undefined4 *)((int)uVar2 + 0x1f);
  puVar1 = (undefined2 *)((int)*puVar3 + 0x10);
  local_4a = (*(code *)*puVar1)(0x14d0,(undefined4 *)puVar3,(int)((ulong)puVar3 >> 0x10),uVar8,uVar6
                               );
  local_4a = local_4a + -1;
  if (-1 < local_4a) {
    local_8 = 0;
    while( true ) {
      puVar7 = local_14a;
      uVar2 = *(undefined4 *)((int)*(undefined4 *)(in_stack_00000002 + 6) + 0x1a);
      puVar3 = (undefined4 *)*(undefined4 *)((int)uVar2 + 0x1f);
      uVar6 = (undefined2)((ulong)puVar3 >> 0x10);
      puVar5 = (undefined4 *)puVar3;
      puVar1 = (undefined2 *)((int)*puVar3 + 0xc);
      (*(code *)*puVar1)(0x14d0,puVar5,uVar6,local_8,puVar7);
      local_a = FUN_1108_12ab(&stack0xfffe,puVar5,uVar6);
      uVar2 = *(undefined4 *)((int)*(undefined4 *)(in_stack_00000002 + 6) + 0x1a);
      puVar3 = (undefined4 *)*(undefined4 *)((int)uVar2 + 0x1f);
      puVar1 = (undefined2 *)((int)*puVar3 + 0x10);
      iVar4 = (*(code *)*puVar1)(0x14d0,(undefined4 *)puVar3,(int)((ulong)puVar3 >> 0x10));
      if (8 < iVar4) {
        iVar4 = GETSYSTEMMETRICS(puVar7,2,0x14d0);
        local_a = local_a + iVar4;
      }
      if ((local_e < local_a) && (local_a < local_10)) {
        local_e = local_a;
      }
      if (local_8 == local_4a) break;
      local_8 = local_8 + 1;
    }
  }
  local_46 = local_30[0] * local_c + 2;
  local_48 = local_32 + -1;
  iVar4 = FUN_1140_60a5((int)DAT_1160_2c2e,(int)((ulong)DAT_1160_2c2e >> 0x10));
  if (iVar4 < local_48 + local_46) {
    local_48 = (local_36 - local_46) + 1;
  }
  if (local_48 < 0) {
    local_48 = local_32 + -1;
  }
  uVar6 = param_1;
  SETWINDOWPOS(0x1140,0x10,local_46,local_e,local_48,local_38,0);
  DAT_1160_1858 = (undefined2 *)uVar6;
  uVar9 = 0x14d0;
  uVar8 = 0x14d0;
  uVar6 = local_4;
  SELECTOBJECT(0x14d0,local_6);
  DELETEDC(0x14d0,local_4,uVar6,uVar8,uVar9);
  return;
}



/* ---- FUN_1108_14d4 @ 1108:14d4  (144 octets) ---- */

void __stdcall16far FUN_1108_14d4(undefined4 param_1)

{
  undefined2 uVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 unaff_SS;
  undefined local_102 [256];
  
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  iVar2 = (int)param_1;
  if (*(char *)((int)*(undefined4 *)(iVar2 + 0x1e) + 0x12) == '\0') {
    FUN_1108_12f0(*(undefined2 *)((int)*(undefined4 *)(iVar2 + 0x1e) + 0x10));
    SETFOCUS();
    GETWINDOWTEXT(0x14d0,0x100,local_102);
    uVar1 = SENDMESSAGE(0x14d0,local_102,unaff_SS,0xffff,0x423);
    SENDMESSAGE(0x14d0,0,0,uVar1,0x407);
    FUN_1108_0e1c((int)*(undefined4 *)(iVar2 + 0x1e),
                  (int)((ulong)*(undefined4 *)(iVar2 + 0x1e) >> 0x10),1);
  }
  return;
}



/* ---- FUN_1108_15f1 @ 1108:15f1  (55 octets) ---- */

void __stdcall16far FUN_1108_15f1(undefined4 *param_1)

{
  undefined2 *puVar1;
  undefined4 uVar2;
  
  puVar1 = (undefined2 *)((int)*param_1 + -0x10);
  (*(code *)*puVar1)();
  uVar2 = *(undefined4 *)((int)(undefined4 *)param_1 + 0x1e);
  if (*(int *)((int)uVar2 + 0x10) != 0) {
    DESTROYWINDOW();
  }
  return;
}



/* ---- FUN_1108_1628 @ 1108:1628  (34 octets) ---- */

void __stdcall16far FUN_1108_1628(undefined4 *param_1)

{
  undefined2 *puVar1;
  
  puVar1 = (undefined2 *)((int)*param_1 + -0x10);
  (*(code *)*puVar1)();
  *(undefined2 *)((int)(undefined4 *)param_1 + 0xe) = 0;
  return;
}



/* ---- FUN_1108_186d @ 1108:186d  (93 octets) ---- */

void __stdcall16far FUN_1108_186d(undefined4 *param_1,undefined2 param_2,undefined2 param_3)

{
  undefined2 *puVar1;
  undefined4 *puVar2;
  undefined2 uVar3;
  undefined4 *puVar4;
  undefined2 uVar5;
  
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  puVar2 = (undefined4 *)param_1;
  puVar1 = (undefined2 *)((int)*param_1 + -0x10);
  puVar4 = puVar2;
  uVar5 = uVar3;
  (*(code *)*puVar1)();
  if (*(char *)((int)*(undefined4 *)((int)puVar2 + 0x1e) + 0x12) == '\0') {
    FUN_1108_14d4(puVar2,uVar3);
    SETCAPTURE(0x1108,*(undefined2 *)((int)puVar2 + 0xe),puVar4,uVar5,param_2,param_3);
    *(undefined *)(puVar2 + 6) = 1;
    *(undefined *)((int)puVar2 + 0x19) = 1;
    FUN_1108_1d03(puVar2,uVar3);
  }
  else {
    FUN_1108_1294(puVar2,uVar3);
  }
  return;
}



/* ---- FUN_1108_18ca @ 1108:18ca  (280 octets) ---- */

void __stdcall16far FUN_1108_18ca(undefined4 *param_1,undefined4 param_2)

{
  undefined2 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined2 uVar4;
  undefined2 unaff_CS;
  undefined2 uVar5;
  undefined2 unaff_SS;
  undefined local_10 [4];
  int local_c;
  int local_a;
  undefined2 local_8;
  undefined2 local_6;
  char local_3;
  
  uVar4 = (undefined2)((ulong)param_1 >> 0x10);
  puVar3 = (undefined4 *)param_1;
  puVar1 = (undefined2 *)((int)*param_1 + -0x10);
  (*(code *)*puVar1)();
  if (*(char *)((int)puVar3 + 0x19) != '\0') {
    iVar2 = (int)param_2;
    uVar5 = 0x14d0;
    GETCLIENTRECT(unaff_CS,local_10,unaff_SS);
    if ((((*(int *)(iVar2 + 4) < 0) || (*(int *)(iVar2 + 6) < 0)) ||
        (local_c <= *(int *)(iVar2 + 4))) || (local_a <= *(int *)(iVar2 + 6))) {
      local_3 = '\0';
    }
    else {
      local_3 = '\x01';
    }
    if (*(char *)(puVar3 + 6) != local_3) {
      *(char *)(puVar3 + 6) = local_3;
      uVar5 = 0x1108;
      FUN_1108_1d03(puVar3,uVar4);
    }
    if ((*(char *)(puVar3 + 6) == '\0') &&
       (*(char *)((int)*(undefined4 *)((int)puVar3 + 0x1e) + 0x12) != '\0')) {
      local_8 = *(undefined2 *)(iVar2 + 4);
      local_6 = *(undefined2 *)(iVar2 + 6);
      CLIENTTOSCREEN(uVar5,&local_8,unaff_SS);
      GETWINDOWRECT(0x14d0,local_10,unaff_SS);
      iVar2 = PTINRECT(0x14d0,local_8,local_6,local_10);
      if (iVar2 != 0) {
        SENDMESSAGE(0x14d0,0,0,0,0x202);
        SENDMESSAGE(0x14d0,0,0,0,0x201);
      }
    }
  }
  return;
}



/* ---- FUN_1108_19e2 @ 1108:19e2  (60 octets) ---- */

void __stdcall16far FUN_1108_19e2(undefined4 *param_1)

{
  undefined2 *puVar1;
  undefined4 *puVar2;
  undefined2 uVar3;
  
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  puVar2 = (undefined4 *)param_1;
  puVar1 = (undefined2 *)((int)*param_1 + -0x10);
  (*(code *)*puVar1)();
  if (*(char *)((int)puVar2 + 0x19) != '\0') {
    RELEASECAPTURE();
    *(undefined *)(puVar2 + 6) = 0;
    *(undefined *)((int)puVar2 + 0x19) = 0;
    FUN_1108_1d03(puVar2,uVar3);
  }
  return;
}



/* ---- FUN_1108_1a28 @ 1108:1a28  (524 octets) ---- */

void __stdcall16far FUN_1108_1a28(undefined4 param_1,undefined2 param_2,int param_3)

{
  undefined2 *puVar1;
  undefined4 *puVar2;
  undefined2 uVar3;
  undefined extraout_AH;
  int iVar4;
  int iVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  undefined2 unaff_SS;
  undefined4 uVar8;
  undefined2 uVar9;
  undefined *puVar10;
  undefined2 uVar11;
  undefined2 uVar12;
  undefined2 uVar13;
  undefined4 *puVar14;
  undefined2 uVar15;
  undefined2 uStack_21a;
  undefined *puStack_218;
  undefined local_210 [2];
  undefined local_20e [254];
  int local_110;
  undefined2 local_10e;
  undefined local_10c [256];
  int local_c;
  int local_a;
  int local_8;
  int local_6;
  int local_4;
  
  if (param_3 != 0) {
    uVar6 = (undefined2)((ulong)param_1 >> 0x10);
    iVar4 = (int)param_1;
    puStack_218 = (undefined *)0x1a3f;
    FUN_1108_1c60();
    puStack_218 = (undefined *)0x1a4a;
    uVar3 = GETDLGITEM();
    *(undefined2 *)(iVar4 + 0xc) = uVar3;
    if (*(int *)(iVar4 + 0xc) != 0) {
      uStack_21a = DAT_1160_1858;
      DAT_1160_1858 = &uStack_21a;
      puStack_218 = &stack0xfffe;
      GETWINDOWRECT(0x14d0,&local_a,unaff_SS);
      SCREENTOCLIENT(0x14d0,&local_a,unaff_SS);
      iVar5 = param_3;
      SCREENTOCLIENT(0x14d0,&local_6,unaff_SS);
      local_6 = local_6 + -0x19;
      uVar3 = *(undefined2 *)(iVar4 + 0xc);
      SETWINDOWPOS(0x14d0,2,local_4 - local_8,local_6 - local_a,0,0,0);
      uVar3 = CREATEWINDOW(0x14d0,0,0,DAT_1160_188c,0xffff,param_3,local_4 - local_8,0x11,local_8,
                           local_6 + 8,0,0x5000,0xcd8,0x1160,0xcca,0x1160,uVar3);
      *(undefined2 *)(iVar4 + 0xe) = uVar3;
      if (*(int *)(iVar4 + 0xe) == 0) {
        puVar10 = local_20e;
        FUN_1150_092b(0xf028);
        puVar14 = (undefined4 *)0x22;
        param_3 = 0x1150;
        uVar3 = 0x1c05;
        uVar8 = FUN_1150_28e6(0x22,0x1138,CONCAT11(extraout_AH,1),puVar10,unaff_SS);
        uVar7 = 0x1158;
        uVar15 = 0x1c0c;
        FUN_1158_1399(0x1150,uVar8);
      }
      else {
        uVar3 = *(undefined2 *)(iVar4 + 0xe);
        uVar8 = SETWINDOWLONG(0x14d0,*(undefined2 *)(iVar4 + 4),*(undefined2 *)(iVar4 + 6),0xfffc);
        *(undefined2 *)(iVar4 + 8) = (int)uVar8;
        *(undefined2 *)(iVar4 + 10) = (int)((ulong)uVar8 >> 0x10);
        puVar2 = (undefined4 *)*(undefined4 *)(iVar4 + 0x1e);
        (*(code *)*(undefined2 *)(undefined2 *)*puVar2)
                  (0x14d0,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),uVar3,iVar5);
        puVar2 = (undefined4 *)*(undefined4 *)(iVar4 + 0x22);
        uVar15 = (undefined2)((ulong)puVar2 >> 0x10);
        puVar14 = (undefined4 *)puVar2;
        (*(code *)*(undefined2 *)(undefined2 *)*puVar2)(0x14d0,puVar14,uVar15);
        local_10e = SENDMESSAGE(0x14d0,0,0,0,0x31);
        uVar3 = *(undefined2 *)((int)*(undefined4 *)(iVar4 + 0x1e) + 0x10);
        SENDMESSAGE(0x14d0,0,0,local_10e,0x30);
        uVar7 = (undefined2)((ulong)*(undefined4 *)(iVar4 + 0x1a) >> 0x10);
        iVar5 = (int)*(undefined4 *)(iVar4 + 0x1a);
        if (*(int *)(iVar5 + 0x1f) != 0 || *(int *)(iVar5 + 0x21) != 0) {
          puVar2 = (undefined4 *)*(undefined4 *)((int)*(undefined4 *)(iVar4 + 0x1a) + 0x1f);
          puVar1 = (undefined2 *)((int)*puVar2 + 0x10);
          local_110 = (*(code *)*puVar1)(0x14d0,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),
                                         uVar3,param_3);
          local_110 = local_110 + -1;
          if (-1 < local_110) {
            local_c = 0;
            while( true ) {
              uVar7 = *(undefined2 *)((int)*(undefined4 *)(iVar4 + 0x1e) + 0x10);
              uVar13 = 0x401;
              uVar12 = 0;
              puVar10 = local_10c;
              puVar2 = (undefined4 *)*(undefined4 *)((int)*(undefined4 *)(iVar4 + 0x1a) + 0x1f);
              puVar1 = (undefined2 *)((int)*puVar2 + 0xc);
              uVar9 = unaff_SS;
              uVar11 = unaff_SS;
              (*(code *)*puVar1)(0x14d0,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),local_c,
                                 local_210);
              uVar8 = FUN_1150_0d4c(uVar9,puVar10,uVar11,uVar12);
              SENDMESSAGE(0x1150,uVar8,uVar13,uVar7);
              if (local_c == local_110) break;
              local_c = local_c + 1;
            }
          }
        }
        uVar7 = 0x14d0;
      }
      puVar2 = (undefined4 *)*(undefined4 *)(iVar4 + 0x26);
      (*(code *)*(undefined2 *)(undefined2 *)*puVar2)
                (uVar7,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),uVar3,param_3,puVar14,
                 uVar15);
      uVar3 = *(undefined2 *)(iVar4 + 0xe);
      UPDATEWINDOW(uVar7);
      DAT_1160_1858 = (undefined2 *)uVar3;
    }
  }
  return;
}



/* ---- FUN_1108_1c60 @ 1108:1c60  (163 octets) ---- */

void __stdcall16far FUN_1108_1c60(void)

{
  int iVar1;
  undefined extraout_AH;
  undefined2 unaff_CS;
  undefined2 unaff_SS;
  undefined4 uVar2;
  undefined *puVar3;
  undefined local_15c [256];
  undefined local_5c [64];
  undefined2 local_1c;
  undefined2 local_1a;
  undefined2 local_18;
  undefined2 local_12;
  undefined2 local_e;
  undefined2 local_c;
  undefined4 local_6;
  
  iVar1 = GETCLASSINFO(unaff_CS,&local_1c,unaff_SS,0xcda,0x1160);
  if (iVar1 == 0) {
    FUN_1158_1ee5(0,0x1a,&local_1c,unaff_SS);
    local_1c = 3;
    local_1a = 0x428;
    local_18 = 0x14d0;
    local_e = LOADCURSOR(0x1158,0x7f00,0);
    local_c = 6;
    local_6 = FUN_1150_0d4c(0x1c51,0x14d0,local_5c,unaff_SS);
    local_12 = DAT_1160_188c;
    iVar1 = REGISTERCLASS(0x1150,&local_1c);
    if (iVar1 == 0) {
      puVar3 = local_15c;
      FUN_1150_092b(0xf027);
      uVar2 = FUN_1150_28e6(0x22,0x1138,CONCAT11(extraout_AH,1),puVar3,unaff_SS);
      FUN_1158_1399(0x1150,uVar2);
    }
  }
  return;
}



/* ---- FUN_1108_1d03 @ 1108:1d03  (37 octets) ---- */

void __stdcall16far FUN_1108_1d03(undefined4 param_1)

{
  undefined2 uVar1;
  undefined2 unaff_CS;
  
  uVar1 = (undefined2)((ulong)param_1 >> 0x10);
  INVALIDATERECT(unaff_CS,0,0,0,*(undefined2 *)((int)param_1 + 0xe));
  UPDATEWINDOW(0x14d0,*(undefined2 *)((int)param_1 + 0xe));
  return;
}



/* ---- FUN_1108_1d28 @ 1108:1d28  (86 octets) ---- */

void __stdcall16far FUN_1108_1d28(undefined4 param_1,undefined2 *param_2)

{
  undefined2 *puVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined2 unaff_CS;
  undefined4 uVar5;
  
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  iVar2 = (int)param_1;
  if ((*(int *)(iVar2 + 0xe) != 0) && (*(int *)(iVar2 + 8) != 0 || *(int *)(iVar2 + 10) != 0)) {
    uVar4 = (undefined2)((ulong)param_2 >> 0x10);
    puVar1 = (undefined2 *)param_2;
    uVar5 = CALLWINDOWPROC(unaff_CS,puVar1[2],puVar1[3],puVar1[1],*param_2,
                           *(undefined2 *)(iVar2 + 0xe),*(undefined2 *)(iVar2 + 8));
    puVar1[4] = (int)uVar5;
    puVar1[5] = (int)((ulong)uVar5 >> 0x10);
  }
  return;
}



/* ---- FUN_1108_1e0f @ 1108:1e0f  (146 octets) ---- */

long __stdcall16far FUN_1108_1e0f(undefined4 param_1,int param_2,int param_3)

{
  int *piVar1;
  int unaff_BP;
  int iVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined2 unaff_CS;
  undefined2 unaff_SS;
  long lVar5;
  int in_stack_0000ffea;
  undefined2 uStack_14;
  undefined *puStack_12;
  undefined2 uStack_10;
  int iStack_2;
  
  iStack_2 = unaff_BP + 1;
  puStack_12 = (undefined *)&iStack_2;
  uStack_10 = 0x1e05;
  uStack_14 = *(undefined2 *)&DAT_1160_1858;
  *(undefined2 **)0x1858 = &uStack_14;
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  piVar1 = &iStack_2;
  lVar5 = 0;
  if ((-1 < param_3) && (piVar1 = &iStack_2, lVar5 = 0, param_2 == 0)) {
    unaff_CS = 0x1108;
    in_stack_0000ffea = param_3;
    lVar5 = FUN_1108_2063((int)*(undefined4 *)&DAT_1160_2ad8,
                          (int)((ulong)*(undefined4 *)&DAT_1160_2ad8 >> 0x10),(int)param_1,uVar3,0,
                          param_3);
    piVar1 = (int *)puStack_12;
  }
  puStack_12 = (undefined *)piVar1;
  if (lVar5 == 0) {
    uVar4 = (undefined2)((ulong)*(undefined4 *)&DAT_1160_2ad8 >> 0x10);
    iVar2 = (int)*(undefined4 *)&DAT_1160_2ad8;
    in_stack_0000ffea = *(int *)(iVar2 + 0xe);
    lVar5 = CALLNEXTHOOKEX(unaff_CS,(int)param_1,uVar3,param_2,param_3,*(undefined2 *)(iVar2 + 0xc))
    ;
  }
  *(int *)&DAT_1160_1858 = in_stack_0000ffea;
  return lVar5;
}



/* ---- FUN_1108_1eb5 @ 1108:1eb5  (70 octets) ---- */

void __stdcall16far FUN_1108_1eb5(undefined4 param_1,char param_2)

{
  int iVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  if (*(int *)(iVar1 + 0xc) != 0 || *(int *)(iVar1 + 0xe) != 0) {
    UNHOOKWINDOWSHOOKEX();
    *(undefined2 *)(iVar1 + 0xc) = 0;
    *(undefined2 *)(iVar1 + 0xe) = 0;
  }
  FUN_1148_0c0f(iVar1,uVar2,0);
  if (param_2 != '\0') {
    FUN_1158_200f();
  }
  return;
}



/* ---- FUN_1108_1efb @ 1108:1efb  (104 octets) ---- */

void __stdcall16far FUN_1108_1efb(undefined4 param_1,undefined4 *param_2)

{
  undefined2 uVar1;
  int iVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  undefined2 uVar8;
  
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  iVar2 = (int)param_1;
  if (*(int *)(iVar2 + 8) == 0) {
    uVar8 = 0xffff;
    uVar7 = 0x1108;
    uVar6 = 0x1e0f;
    uVar1 = FUN_1028_3f52(DAT_1160_188c);
    uVar5 = 0x1028;
    uVar7 = GETCURRENTTASK(0x1028,uVar1,uVar6,uVar7,uVar8);
    uVar4 = SETWINDOWSHOOKEX(0x14d0,uVar7,uVar5,uVar1,uVar6);
    *(undefined2 *)(iVar2 + 0xc) = (int)uVar4;
    *(undefined2 *)(iVar2 + 0xe) = (int)((ulong)uVar4 >> 0x10);
  }
  FUN_1148_0c2b(iVar2,uVar3,(undefined4 *)param_2,param_2._2_2_);
  uVar3 = (undefined2)((ulong)*param_2 >> 0x10);
  iVar2 = (int)*param_2;
  FUN_1140_7339((int)DAT_1160_2c2a,(int)((ulong)DAT_1160_2c2a >> 0x10),*(undefined2 *)(iVar2 + 0x30)
                ,*(undefined2 *)(iVar2 + 0x32),(undefined4 *)param_2,param_2._2_2_);
  return;
}



/* ---- FUN_1108_1f63 @ 1108:1f63  (98 octets) ---- */

void __stdcall16far FUN_1108_1f63(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  FUN_1148_0fa7(iVar1,uVar3,(undefined4 *)param_2,param_2._2_2_);
  uVar4 = (undefined2)((ulong)*param_2 >> 0x10);
  iVar2 = (int)*param_2;
  FUN_1140_73a7((int)DAT_1160_2c2a,(int)((ulong)DAT_1160_2c2a >> 0x10),*(undefined2 *)(iVar2 + 0x30)
                ,*(undefined2 *)(iVar2 + 0x32),(undefined4 *)param_2,param_2._2_2_);
  if ((*(int *)(iVar1 + 8) == 0) && (*(int *)(iVar1 + 0xc) != 0 || *(int *)(iVar1 + 0xe) != 0)) {
    UNHOOKWINDOWSHOOKEX(0x1140,*(undefined2 *)(iVar1 + 0xc),*(undefined2 *)(iVar1 + 0xe));
    *(undefined2 *)(iVar1 + 0xc) = 0;
    *(undefined2 *)(iVar1 + 0xe) = 0;
  }
  return;
}



/* ---- FUN_1108_1fc5 @ 1108:1fc5  (75 octets) ---- */

undefined2 FUN_1108_1fc5(int param_1)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 unaff_SS;
  
  uVar2 = (undefined2)((ulong)*(undefined4 *)(param_1 + 10) >> 0x10);
  iVar1 = (int)*(undefined4 *)(param_1 + 10);
  if ((((*(int *)(iVar1 + 4) == 0x70) && ((*(uint *)(iVar1 + 6) & 4) == 0)) &&
      (iVar1 = GETKEYSTATE(), -1 < iVar1)) && (iVar1 = GETKEYSTATE(0x14d0,0x10), -1 < iVar1)) {
    return 1;
  }
  return 0;
}



/* ---- FUN_1108_2010 @ 1108:2010  (83 octets) ---- */

void FUN_1108_2010(int param_1)

{
  undefined2 uVar1;
  undefined2 unaff_CS;
  undefined2 unaff_SS;
  
  *(undefined2 *)(param_1 + -6) = 0;
  *(undefined2 *)(param_1 + -8) = 0;
  *(undefined2 *)(param_1 + -10) = *(undefined2 *)*(undefined4 *)(param_1 + 10);
  while (*(int *)(param_1 + -10) != 0) {
    *(undefined2 *)(param_1 + -8) = *(undefined2 *)(param_1 + -6);
    *(undefined2 *)(param_1 + -6) = *(undefined2 *)(param_1 + -10);
    uVar1 = GETPARENT(unaff_CS,*(undefined2 *)(param_1 + -10));
    *(undefined2 *)(param_1 + -10) = uVar1;
    unaff_CS = 0x14d0;
  }
  return;
}



/* ---- FUN_1108_2063 @ 1108:2063  (123 octets) ---- */

undefined2 __stdcall16far FUN_1108_2063(undefined2 param_1_00,undefined2 param_2,undefined4 param_1)

{
  char cVar1;
  int iVar2;
  undefined2 unaff_CS;
  int local_a;
  int local_8;
  undefined2 local_6;
  
  local_6 = 0;
  FUN_1108_2010(&stack0xfffe);
  if ((((local_8 != 0) && (local_8 == *(int *)((int)DAT_1160_2c2a + 0x1a))) && (local_a != 0)) &&
     (*(int *)((int)param_1 + 2) == 0x100)) {
    cVar1 = FUN_1108_1fc5(&stack0xfffe);
    if (cVar1 != '\0') {
      iVar2 = GETDLGITEM(unaff_CS,0x40e);
      if (iVar2 != 0) {
        POSTMESSAGE(0x14d0,0,iVar2,0x40e,0x111);
        local_6 = 1;
      }
    }
  }
  return local_6;
}



/* ---- FUN_1108_20de @ 1108:20de  (67 octets) ---- */

undefined4 __stdcall16far
FUN_1108_20de(undefined4 param_1,char param_2,undefined2 param_3,undefined2 param_4)

{
  undefined2 uVar1;
  undefined2 uStack_a;
  
  if (param_2 != '\0') {
    FUN_1158_1fe2();
  }
  uVar1 = (undefined2)((ulong)param_1 >> 0x10);
  FUN_1148_4bd9((int)param_1,uVar1,0,param_3,param_4);
  *(undefined *)((int)param_1 + 0x1a) = 1;
  if (param_2 != '\0') {
    DAT_1160_1858 = uStack_a;
  }
  return param_1;
}



/* ---- FUN_1108_2121 @ 1108:2121  (81 octets) ---- */

undefined __stdcall16far FUN_1108_2121(undefined4 param_1,int *param_2)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 unaff_SS;
  undefined local_5;
  
  local_5 = 0;
  if (*param_2 == *(int *)&DAT_1160_2ad4) {
    uVar2 = (undefined2)((ulong)param_1 >> 0x10);
    iVar1 = (int)param_1;
    if (*(int *)(iVar1 + 0x1b) != 0 || *(int *)(iVar1 + 0x1d) != 0) {
      FUN_1140_7792((int)*(undefined4 *)&DAT_1160_2c2a,
                    (int)((ulong)*(undefined4 *)&DAT_1160_2c2a >> 0x10),
                    *(undefined2 *)(iVar1 + 0x1b),*(undefined2 *)(iVar1 + 0x1d));
      local_5 = 1;
    }
  }
  return local_5;
}



/* ---- FUN_1108_2172 @ 1108:2172  (205 octets) ---- */

undefined4 __stdcall16far
FUN_1108_2172(undefined4 param_1,char param_2,undefined2 param_3,undefined2 param_4)

{
  undefined2 uVar1;
  undefined extraout_AH;
  int iVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  undefined2 uStack_a;
  
  if (param_2 != '\0') {
    FUN_1158_1fe2();
  }
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  iVar2 = (int)param_1;
  FUN_1108_20de(iVar2,uVar3,0,param_3,param_4);
  uVar4 = FUN_1148_1d08(0x3c9,0x1148,CONCAT11(extraout_AH,1));
  *(undefined2 *)(iVar2 + 0x1f) = (int)uVar4;
  *(undefined2 *)(iVar2 + 0x21) = (int)((ulong)uVar4 >> 0x10);
  uVar4 = FUN_1148_1d08(0x3c9,0x1148,1);
  *(undefined2 *)(iVar2 + 0x8b) = (int)uVar4;
  *(undefined2 *)(iVar2 + 0x8d) = (int)((ulong)uVar4 >> 0x10);
  uVar4 = FUN_1108_110b(0x268,0x1108,1,iVar2,uVar3);
  *(undefined2 *)(iVar2 + 0x23) = (int)uVar4;
  *(undefined2 *)(iVar2 + 0x25) = (int)((ulong)uVar4 >> 0x10);
  uVar1 = DAT_1160_1718;
  *(undefined2 *)(iVar2 + 0x29) = DAT_1160_1716;
  *(undefined2 *)(iVar2 + 0x2b) = uVar1;
  uVar1 = DAT_1160_1718;
  *(undefined2 *)(iVar2 + 0x2f) = DAT_1160_1716;
  *(undefined2 *)(iVar2 + 0x31) = uVar1;
  uVar1 = DAT_1160_1718;
  *(undefined2 *)(iVar2 + 0x33) = DAT_1160_1716;
  *(undefined2 *)(iVar2 + 0x35) = uVar1;
  *(undefined2 *)(iVar2 + 0x2d) = 1;
  *(undefined *)(iVar2 + 0x8f) = 0;
  if (param_2 != '\0') {
    DAT_1160_1858 = uStack_a;
  }
  return param_1;
}



/* ---- FUN_1108_223f @ 1108:223f  (122 octets) ---- */

void __stdcall16far FUN_1108_223f(undefined4 param_1,char param_2)

{
  int iVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  FUN_1150_0624(*(undefined2 *)(iVar1 + 0x33),*(undefined2 *)(iVar1 + 0x35));
  FUN_1150_0624(*(undefined2 *)(iVar1 + 0x2f),*(undefined2 *)(iVar1 + 0x31));
  FUN_1150_0624(*(undefined2 *)(iVar1 + 0x29),*(undefined2 *)(iVar1 + 0x2b));
  FUN_1158_1f7f((int)*(undefined4 *)(iVar1 + 0x23),
                (int)((ulong)*(undefined4 *)(iVar1 + 0x23) >> 0x10));
  FUN_1158_1f7f((int)*(undefined4 *)(iVar1 + 0x1f),
                (int)((ulong)*(undefined4 *)(iVar1 + 0x1f) >> 0x10));
  FUN_1158_1f7f((int)*(undefined4 *)(iVar1 + 0x8b),
                (int)((ulong)*(undefined4 *)(iVar1 + 0x8b) >> 0x10));
  FUN_1148_4c2b(iVar1,uVar2,0);
  if (param_2 != '\0') {
    FUN_1158_200f();
  }
  return;
}



/* ---- FUN_1108_22b9 @ 1108:22b9  (90 octets) ---- */

undefined4 FUN_1108_22b9(undefined2 param_1_00,char *param_1,char *param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (*param_1 != '\0') {
    uVar1 = FUN_1150_0d4c((char *)param_1,(int)((ulong)param_1 >> 0x10),(char *)param_2,
                          param_2._2_2_);
    while (*param_2 != '\0') {
      if (*param_2 == '|') {
        *param_2 = '\0';
      }
      param_2 = (char *)CONCAT22(param_2._2_2_,(char *)param_2 + 1);
    }
    param_2 = (char *)CONCAT22(param_2._2_2_,(char *)param_2 + 1);
    *param_2 = '\0';
  }
  return uVar1;
}



/* ---- FUN_1108_2313 @ 1108:2313  (125 octets) ---- */

void FUN_1108_2313(undefined2 param_1_00,int *param_1,undefined *param_2)

{
  int local_4;
  
  for (local_4 = 0;
      (*(char *)((int)*(undefined4 *)param_1 + local_4) != '\0' &&
      (*(char *)((int)*(undefined4 *)param_1 + local_4) != ' ')); local_4 = local_4 + 1) {
    ((undefined *)param_2)[local_4 + 1] = *(undefined *)((int)*(undefined4 *)param_1 + local_4);
  }
  *param_2 = (undefined)local_4;
  if (*(char *)((int)*(undefined4 *)param_1 + local_4) == '\0') {
    *param_1 = *param_1 + local_4;
  }
  else {
    *param_1 = *param_1 + local_4 + 1;
  }
  return;
}



/* ---- FUN_1108_2392 @ 1108:2392  (207 octets) ---- */

void FUN_1108_2392(int param_1)

{
  undefined2 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined2 unaff_SS;
  undefined *puVar4;
  undefined2 uVar5;
  undefined local_302 [256];
  char local_202 [256];
  char local_102 [256];
  
  puVar4 = local_302;
  uVar5 = unaff_SS;
  FUN_1108_2313(param_1,&stack0x0004,unaff_SS);
  FUN_1158_17e7(0xff,local_102,unaff_SS,puVar4,uVar5);
  if (local_102[0] != '\0') {
    do {
      puVar4 = local_302;
      uVar5 = unaff_SS;
      FUN_1108_2313(param_1,&stack0x0004,unaff_SS);
      FUN_1158_17e7(0xff,local_202,unaff_SS,puVar4,uVar5);
      if (local_202[0] != '\0') {
        puVar4 = local_302;
        FUN_1158_17cd(local_102,unaff_SS);
        FUN_1158_184c(0x2390,0x1158);
        FUN_1158_184c(local_202,unaff_SS);
        puVar2 = (undefined4 *)*(undefined4 *)((int)*(undefined4 *)(param_1 + 6) + 0x8b);
        puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
        (*(code *)*puVar1)(0x1158,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),puVar4);
      }
    } while (local_202[0] != '\0');
    puVar2 = (undefined4 *)*(undefined4 *)((int)*(undefined4 *)(param_1 + 6) + 0x8b);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x10);
    iVar3 = (*(code *)*puVar1)(0x1158,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10));
    if (iVar3 == 0) {
      puVar2 = (undefined4 *)*(undefined4 *)((int)*(undefined4 *)(param_1 + 6) + 0x8b);
      puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
      (*(code *)*puVar1)(0x1158,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),local_102);
    }
  }
  return;
}



/* ---- FUN_1108_2467 @ 1108:2467  (706 octets) ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_1108_2467(undefined4 param_1)

{
  undefined2 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  undefined2 unaff_SS;
  undefined *puVar7;
  undefined2 uVar8;
  undefined2 uStack_300;
  undefined *puStack_2fe;
  undefined2 *puStack_2fc;
  undefined local_2f4 [256];
  undefined local_1f4 [258];
  undefined local_f2 [80];
  undefined local_a2 [80];
  undefined local_52 [4];
  undefined2 local_4e;
  undefined2 local_4c;
  undefined2 local_4a;
  undefined2 local_48;
  undefined4 local_46;
  int local_3a;
  int local_38;
  undefined4 local_36;
  int local_32;
  undefined2 local_30;
  undefined4 local_26;
  undefined4 local_22;
  uint local_1e;
  uint local_1c;
  undefined4 local_16;
  undefined2 local_e;
  undefined2 local_c;
  byte local_5;
  int local_4;
  
  uVar5 = (undefined2)((ulong)param_1 >> 0x10);
  iVar4 = (int)param_1;
  puVar1 = (undefined2 *)((int)*(undefined4 *)*(undefined4 *)(iVar4 + 0x8b) + 0x30);
  puStack_2fc = (undefined2 *)0x247c;
  (*(code *)*puVar1)();
  puStack_2fc = &local_4e;
  puStack_2fe = (undefined *)0x48;
  uStack_300 = 0;
  FUN_1158_1ee5();
  local_4e = 0x48;
  local_4c = 0;
  local_48 = DAT_1160_188c;
  puStack_2fc = (undefined2 *)local_1f4;
  puStack_2fe = (undefined *)((ulong)*(undefined4 *)(iVar4 + 0x29) >> 0x10);
  uStack_300 = (undefined2)*(undefined4 *)(iVar4 + 0x29);
  local_46 = FUN_1108_22b9(&stack0xfffe);
  local_3a = *(int *)(iVar4 + 0x2d);
  local_38 = local_3a >> 0xf;
  if ((*(byte *)(iVar4 + 0x27) & 0x40) == 0) {
    local_32 = 0x50;
  }
  else {
    local_32 = 0x1000;
  }
  local_30 = 0;
  puStack_2fc = (undefined2 *)0x2461;
  uStack_300 = DAT_1160_1858;
  DAT_1160_1858 = &uStack_300;
  puStack_2fe = &stack0xfffe;
  local_36 = FUN_1158_0182(local_32 + 1);
  FUN_1158_1ee5(0,local_32 + 1,local_36);
  FUN_1150_0d4c(iVar4 + 0x3b,uVar5,local_36);
  local_26 = FUN_1150_0d6a(0x4f,(int)*(undefined4 *)(iVar4 + 0x2f),
                           (int)((ulong)*(undefined4 *)(iVar4 + 0x2f) >> 0x10),local_a2,unaff_SS);
  local_22 = FUN_1150_0d6a(0x4f,(int)*(undefined4 *)(iVar4 + 0x33),
                           (int)((ulong)*(undefined4 *)(iVar4 + 0x33) >> 0x10),local_f2,unaff_SS);
  uVar3 = CONCAT22(DAT_1160_0cbc,DAT_1160_0cba);
  if (*(char *)*(undefined4 *)(iVar4 + 0x33) != '\0') {
    uVar3 = local_22;
  }
  DAT_1160_0cbc = (undefined2)((ulong)uVar3 >> 0x10);
  DAT_1160_0cba = (undefined2)uVar3;
  local_1e = 0x20;
  local_1c = 0;
  local_5 = 0;
  while( true ) {
    if ((local_5 < 0x10) &&
       ((*(uint *)(iVar4 + 0x27) & (1 << (local_5 & 0xf) | 1U >> 0x10 - (local_5 & 0xf))) != 0)) {
      local_1e = *(uint *)((char)local_5 * 4 + 0xcea) | local_1e;
      local_1c = *(uint *)((char)local_5 * 4 + 0xcec) | local_1c;
    }
    if (local_5 == 0xd) break;
    local_5 = local_5 + 1;
  }
  local_16 = FUN_1150_0d4c(iVar4 + 0x37,uVar5,local_52,unaff_SS);
  local_e = 0xacf;
  local_c = 0x1108;
  DAT_1160_0cb4 = *(undefined *)(iVar4 + 0x1a);
  DAT_1160_0cb5 = 0;
  if (*(char *)(iVar4 + 0x8f) == '\x01') {
    DAT_1160_0cb6 = *(undefined2 *)(iVar4 + 0x23);
    DAT_1160_0cb8 = *(undefined2 *)(iVar4 + 0x25);
  }
  else {
    DAT_1160_0cb6 = 0;
    DAT_1160_0cb8 = 0;
  }
  FUN_1108_1efb((int)_DAT_1160_2ad8,(int)((ulong)_DAT_1160_2ad8 >> 0x10),iVar4,uVar5);
  local_4a = *(undefined2 *)((int)DAT_1160_2c2a + 0x1a);
  uVar8 = unaff_SS;
  local_4 = FUN_1108_0c6c();
  DAT_1160_0cba = 0;
  DAT_1160_0cbc = 0;
  uVar6 = 0x1108;
  FUN_1108_1f63((int)_DAT_1160_2ad8,(int)((ulong)_DAT_1160_2ad8 >> 0x10),iVar4,uVar5);
  if (local_4 != 0) {
    FUN_1108_2392(&stack0xfffe,local_36);
    puVar7 = local_2f4;
    puVar2 = (undefined4 *)*(undefined4 *)(iVar4 + 0x8b);
    puVar1 = (undefined2 *)((int)*puVar2 + 0xc);
    (*(code *)*puVar1)(0x1108,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),0,puVar7);
    uVar6 = 0x1158;
    FUN_1158_17e7(0x4f,iVar4 + 0x3b,uVar5,puVar7,unaff_SS);
    if ((local_1e & 0x400) == 0) {
      *(uint *)(iVar4 + 0x27) = *(uint *)(iVar4 + 0x27) & 0xff7f;
    }
    else {
      *(uint *)(iVar4 + 0x27) = *(uint *)(iVar4 + 0x27) | 0x80;
    }
    if ((local_1e & 1) == 0) {
      *(uint *)(iVar4 + 0x27) = *(uint *)(iVar4 + 0x27) & 0xfffe;
    }
    else {
      *(uint *)(iVar4 + 0x27) = *(uint *)(iVar4 + 0x27) | 1;
    }
  }
  DAT_1160_1858 = (undefined2 *)uVar8;
  uStack_300 = uVar6;
  FUN_1158_019c(local_32 + 1,local_36);
  return;
}



/* ---- FUN_1108_2730 @ 1108:2730  (29 octets) ---- */

void __stdcall16far FUN_1108_2730(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)((int)param_1 + 0x29);
  FUN_1158_17e7(0xff,(int)param_2,(int)((ulong)param_2 >> 0x10),(int)uVar1,
                (int)((ulong)uVar1 >> 0x10));
  return;
}



/* ---- FUN_1108_274d @ 1108:274d  (29 octets) ---- */

void __stdcall16far FUN_1108_274d(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)((int)param_1 + 0x2f);
  FUN_1158_17e7(0xff,(int)param_2,(int)((ulong)param_2 >> 0x10),(int)uVar1,
                (int)((ulong)uVar1 >> 0x10));
  return;
}



/* ---- FUN_1108_276a @ 1108:276a  (29 octets) ---- */

void __stdcall16far FUN_1108_276a(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)((int)param_1 + 0x33);
  FUN_1158_17e7(0xff,(int)param_2,(int)((ulong)param_2 >> 0x10),(int)uVar1,
                (int)((ulong)uVar1 >> 0x10));
  return;
}



/* ---- FUN_1108_2787 @ 1108:2787  (26 octets) ---- */

void __stdcall16far FUN_1108_2787(undefined4 param_1,undefined4 param_2)

{
  FUN_1150_0651((int)param_2,(int)((ulong)param_2 >> 0x10),(int)param_1 + 0x29,
                (int)((ulong)param_1 >> 0x10));
  return;
}



/* ---- FUN_1108_283e @ 1108:283e  (29 octets) ---- */

void __stdcall16far FUN_1108_283e(undefined4 param_1)

{
  undefined2 *puVar1;
  
  puVar1 = (undefined2 *)((int)*(undefined4 *)*(undefined4 *)((int)param_1 + 0x1f) + 8);
  (*(code *)*puVar1)();
  return;
}



/* ---- FUN_1108_285b @ 1108:285b  (26 octets) ---- */

void __stdcall16far FUN_1108_285b(undefined4 param_1,undefined4 param_2)

{
  FUN_1150_0651((int)param_2,(int)((ulong)param_2 >> 0x10),(int)param_1 + 0x33,
                (int)((ulong)param_1 >> 0x10));
  return;
}



/* ---- FUN_1108_2875 @ 1108:2875  (38 octets) ---- */

undefined2 __stdcall16far FUN_1108_2875(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_1108_2467((int)param_1,(int)((ulong)param_1 >> 0x10),0,0x14d0);
  return CONCAT11((char)((uint)-iVar1 >> 8),iVar1 != 0);
}



/* ---- FUN_1108_289b @ 1108:289b  (92 octets) ---- */

undefined4 __stdcall16far
FUN_1108_289b(undefined4 param_1,char param_2,undefined2 param_3,undefined2 param_4)

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
  FUN_1108_20de(iVar1,uVar2,0,param_3,param_4);
  uVar3 = FUN_1128_0e96(0x310,0x1128,CONCAT11(extraout_AH,1));
  *(undefined2 *)(iVar1 + 0x1f) = (int)uVar3;
  *(undefined2 *)(iVar1 + 0x21) = (int)((ulong)uVar3 >> 0x10);
  *(undefined2 *)(iVar1 + 0x24) = 4;
  if (param_2 != '\0') {
    DAT_1160_1858 = uStack_a;
  }
  return param_1;
}



/* ---- FUN_1108_28f7 @ 1108:28f7  (45 octets) ---- */

void __stdcall16far FUN_1108_28f7(undefined4 param_1,char param_2)

{
  undefined4 uVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  uVar1 = *(undefined4 *)((int)param_1 + 0x1f);
  FUN_1158_1f7f((int)uVar1,(int)((ulong)uVar1 >> 0x10));
  FUN_1148_4c2b((int)param_1,uVar2,0);
  if (param_2 != '\0') {
    FUN_1158_200f();
  }
  return;
}



/* ---- FUN_1108_2924 @ 1108:2924  (150 octets) ---- */

void __stdcall16far FUN_1108_2924(undefined4 param_1,undefined2 *param_2)

{
  undefined extraout_AH;
  undefined2 *puVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined2 unaff_SS;
  undefined *puVar5;
  undefined local_108 [252];
  undefined2 *local_c;
  byte local_3;
  
  puVar5 = local_108;
  uVar3 = (undefined2)((ulong)param_2 >> 0x10);
  puVar1 = (undefined2 *)param_2;
  FUN_1150_0e6e(puVar1 + 9,uVar3);
  uVar4 = (undefined2)((ulong)param_1 >> 0x10);
  iVar2 = (int)param_1;
  FUN_1128_117e((int)*(undefined4 *)(iVar2 + 0x1f),
                (int)((ulong)*(undefined4 *)(iVar2 + 0x1f) >> 0x10),puVar5,unaff_SS);
  FUN_1128_1132((int)*(undefined4 *)(iVar2 + 0x1f),
                (int)((ulong)*(undefined4 *)(iVar2 + 0x1f) >> 0x10),*param_2);
  local_c = param_2;
  local_3 = 400 < (int)puVar1[4];
  if (*(char *)(puVar1 + 5) != '\0') {
    local_3 = local_3 | 2;
  }
  if (*(char *)((int)puVar1 + 0xb) != '\0') {
    local_3 = local_3 | 4;
  }
  if (*(char *)(puVar1 + 6) != '\0') {
    local_3 = local_3 | 8;
  }
  FUN_1128_1233((int)*(undefined4 *)(iVar2 + 0x1f),
                (int)((ulong)*(undefined4 *)(iVar2 + 0x1f) >> 0x10),CONCAT11(extraout_AH,local_3));
  return;
}



/* ---- FUN_1108_29ba @ 1108:29ba  (39 octets) ---- */

void __stdcall16far FUN_1108_29ba(undefined4 param_1)

{
  undefined2 *puVar1;
  
  if (*(int *)((int)param_1 + 0x28) != 0) {
    puVar1 = (undefined2 *)((int)param_1 + 0x26);
    (*(code *)*puVar1)();
  }
  return;
}



/* ---- FUN_1108_29eb @ 1108:29eb  (146 octets) ---- */

void __stdcall16far FUN_1108_29eb(undefined4 param_1,undefined2 param_2)

{
  int iVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined2 uStack_44;
  
  uStack_44 = 0x2a01;
  SENDMESSAGE();
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  iVar2 = (int)param_1;
  uStack_44 = 0x2a10;
  FUN_1108_2924();
  uStack_44 = 0;
  uVar4 = 0x14d0;
  iVar1 = SENDDLGITEMMESSAGE(0x1108);
  if (iVar1 != -1) {
    uStack_44 = 0;
    SENDDLGITEMMESSAGE(0x14d0,0);
    uStack_44 = (undefined2)*(undefined4 *)(iVar2 + 0x1f);
    uVar4 = 0x1128;
    FUN_1128_0fdf();
  }
  uStack_44 = DAT_1160_1858;
  DAT_1160_1858 = &uStack_44;
  FUN_1158_206a(uVar4,iVar2,uVar3,param_2);
  DAT_1160_1858 = (undefined2 *)iVar2;
  return;
}



/* ---- FUN_1108_2a93 @ 1108:2a93  (29 octets) ---- */

void __stdcall16far FUN_1108_2a93(undefined4 param_1)

{
  undefined2 *puVar1;
  
  puVar1 = (undefined2 *)((int)*(undefined4 *)*(undefined4 *)((int)param_1 + 0x1f) + 8);
  (*(code *)*puVar1)();
  return;
}



/* ---- FUN_1108_2ab0 @ 1108:2ab0  (93 octets) ---- */

undefined2 __stdcall16far
FUN_1108_2ab0(undefined2 param_1,int param_2,int param_3,int param_4,undefined2 param_5)

{
  undefined2 unaff_SS;
  undefined2 local_6;
  
  if (((param_4 == 0x111) && (param_3 == 0x402)) && (param_2 == 0)) {
    FUN_1108_29eb((int)*(undefined4 *)&DAT_1160_2adc,
                  (int)((ulong)*(undefined4 *)&DAT_1160_2adc >> 0x10),param_5);
    local_6 = 1;
  }
  else {
    local_6 = FUN_1108_0acf(param_1,param_2,param_3,param_4,param_5);
  }
  return local_6;
}



/* ---- FUN_1108_2b0d @ 1108:2b0d  (465 octets) ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined2 __stdcall16far FUN_1108_2b0d(undefined4 param_1)

{
  undefined2 uVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined extraout_AH;
  undefined extraout_AH_00;
  undefined uVar4;
  int iVar5;
  int iVar6;
  undefined2 uVar7;
  undefined2 uVar8;
  undefined2 unaff_SS;
  char local_65;
  undefined local_64 [50];
  undefined2 local_32;
  undefined2 local_30;
  undefined2 local_2e;
  undefined2 local_2c;
  undefined *local_2a;
  
  local_32 = 0x2e;
  local_30 = 0;
  local_2c = 0;
  uVar7 = (undefined2)((ulong)param_1 >> 0x10);
  iVar5 = (int)param_1;
  if (*(char *)(iVar5 + 0x23) != '\0') {
    local_2c = FUN_10f0_2a51((int)DAT_1160_2c54,(int)((ulong)DAT_1160_2c54 >> 0x10));
  }
  local_2a = local_64;
  FUN_1128_1016((int)*(undefined4 *)(iVar5 + 0x1f),
                (int)((ulong)*(undefined4 *)(iVar5 + 0x1f) >> 0x10));
  GETOBJECT(0x1128,local_64,unaff_SS,0x32);
  uVar3 = DAT_1160_2ade;
  uVar2 = DAT_1160_2adc;
  for (local_65 = '\0'; local_65 != '\x0e'; local_65 = local_65 + '\x01') {
  }
  uVar8 = (undefined2)((ulong)*(undefined4 *)(iVar5 + 0x1f) >> 0x10);
  iVar6 = (int)*(undefined4 *)(iVar5 + 0x1f);
  uVar1 = *(undefined2 *)(iVar6 + 0x10);
  uVar8 = *(undefined2 *)(iVar6 + 0x12);
  DAT_1160_0cb4 = *(undefined *)(iVar5 + 0x1a);
  DAT_1160_0cb5 = 0;
  DAT_1160_2adc = iVar5;
  DAT_1160_2ade = uVar7;
  FUN_1108_1efb((int)_DAT_1160_2ad8,(int)((ulong)_DAT_1160_2ad8 >> 0x10),iVar5,uVar7);
  local_2e = *(undefined2 *)((int)DAT_1160_2c2a + 0x1a);
  iVar6 = FUN_1108_0c6c();
  DAT_1160_2adc = uVar2;
  DAT_1160_2ade = uVar3;
  FUN_1108_1f63((int)_DAT_1160_2ad8,(int)((ulong)_DAT_1160_2ad8 >> 0x10),iVar5,uVar7);
  uVar4 = extraout_AH;
  if (iVar6 != 0) {
    FUN_1108_2924(iVar5,uVar7,local_64,unaff_SS);
    FUN_1128_0fdf((int)*(undefined4 *)(iVar5 + 0x1f),
                  (int)((ulong)*(undefined4 *)(iVar5 + 0x1f) >> 0x10),uVar1,uVar8);
    uVar4 = extraout_AH_00;
  }
  return CONCAT11(uVar4,iVar6 != 0);
}



/* ---- FUN_1108_2cde @ 1108:2cde  (267 octets) ---- */

void FUN_1108_2cde(uint *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined2 unaff_SS;
  undefined4 uVar5;
  int *local_fe;
  undefined local_f6 [80];
  undefined local_a6 [80];
  undefined local_56 [80];
  long local_6;
  
  FUN_10f0_26de((int)DAT_1160_2c54,(int)((ulong)DAT_1160_2c54 >> 0x10),(int *)param_2,
                (int)((ulong)param_2 >> 0x10),local_f6,unaff_SS,local_a6,unaff_SS,local_56,unaff_SS)
  ;
  if (*param_2 != 0) {
    iVar1 = FUN_1150_0c8c(local_f6,unaff_SS);
    iVar1 = iVar1 * 3;
    iVar2 = FUN_1150_0c8c(local_a6,unaff_SS);
    iVar3 = FUN_1150_0c8c(local_56,unaff_SS);
    uVar4 = GLOBALALLOC(0x1150,iVar3 + 8 + iVar2 + iVar1,0);
    *param_1 = uVar4;
    uVar4 = *param_1;
    local_6 = (ulong)uVar4 << 0x10;
    local_fe = (int *)((ulong)uVar4 << 0x10);
    *(undefined2 *)0x2 = 8;
    uVar5 = FUN_1150_0d01(local_56,unaff_SS,8,uVar4);
    iVar1 = (int)uVar5 + 1;
    *local_fe = iVar1;
    uVar5 = FUN_1150_0d01(local_a6,unaff_SS,iVar1,(int)((ulong)uVar5 >> 0x10));
    iVar1 = (int)uVar5 + 1;
    *(int *)0x4 = iVar1;
    FUN_1150_0cdf(local_f6,unaff_SS,iVar1,(int)((ulong)uVar5 >> 0x10));
  }
  return;
}



/* ---- FUN_1108_2de9 @ 1108:2de9  (88 octets) ---- */

void FUN_1108_2de9(uint param_1,undefined2 param_2)

{
  undefined4 local_a;
  
  local_a = (undefined2 *)((ulong)param_1 << 0x10);
  FUN_10f0_2767((int)DAT_1160_2c54,(int)((ulong)DAT_1160_2c54 >> 0x10),param_2,*(undefined2 *)0x4,
                param_1,*local_a,param_1,*(undefined2 *)0x2,param_1);
  GLOBALFREE(0x10f0,param_1);
  return;
}



/* ---- FUN_1108_2e41 @ 1108:2e41  (214 octets) ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __stdcall16far FUN_1108_2e41(undefined4 param_1)

{
  undefined2 *puVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  undefined2 unaff_SS;
  undefined2 *puVar7;
  undefined2 local_36;
  undefined2 local_34;
  undefined2 local_32;
  undefined2 *local_30;
  undefined2 local_2e [2];
  undefined2 local_2a;
  undefined2 local_28;
  undefined2 local_1c;
  undefined2 local_12;
  undefined2 local_10;
  
  FUN_1158_1ee5(0,0x34,&local_36,unaff_SS);
  local_36 = 0x34;
  local_34 = 0;
  local_1c = DAT_1160_188c;
  FUN_1108_2cde(local_2e,unaff_SS,&local_30,unaff_SS);
  puVar1 = local_30;
  local_2a = 0x2040;
  local_28 = 0;
  local_12 = 0xacf;
  local_10 = 0x1108;
  uVar5 = (undefined2)((ulong)param_1 >> 0x10);
  iVar4 = (int)param_1;
  DAT_1160_0cb4 = *(undefined *)(iVar4 + 0x1a);
  DAT_1160_0cb5 = 0;
  uVar6 = 0x1108;
  FUN_1108_1efb((int)_DAT_1160_2ad8,(int)((ulong)_DAT_1160_2ad8 >> 0x10),iVar4,uVar5);
  local_32 = *(undefined2 *)((int)DAT_1160_2c2a + 0x1a);
  puVar7 = &local_36;
  iVar3 = FUN_1108_0c6c();
  if (iVar3 == 0) {
    if (puVar1 != local_30) {
      puVar7 = local_30;
      cVar2 = FUN_1108_0cc5(local_30);
      if (cVar2 != '\0') {
        uVar6 = 0x14d0;
        GLOBALFREE(0x1108,local_30);
        puVar7 = local_30;
      }
    }
    cVar2 = FUN_1108_0cc5(local_2e[0],puVar7);
    if (cVar2 != '\0') {
      GLOBALFREE(uVar6,local_2e[0]);
    }
  }
  else {
    FUN_1108_2de9(local_2e[0],local_30);
  }
  FUN_1108_1f63((int)_DAT_1160_2ad8,(int)((ulong)_DAT_1160_2ad8 >> 0x10),iVar4,uVar5);
  return;
}



/* ---- FUN_1108_2f17 @ 1108:2f17  (566 octets) ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char __stdcall16far FUN_1108_2f17(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined2 uVar4;
  undefined2 unaff_SS;
  bool bVar5;
  uint local_3c;
  int local_3a;
  undefined2 local_38;
  undefined2 local_36;
  undefined2 local_34;
  undefined2 local_32;
  undefined2 local_30 [2];
  uint local_2c;
  int local_2a;
  undefined2 local_28;
  undefined2 local_26;
  undefined2 local_24;
  undefined2 local_22;
  undefined2 local_20;
  undefined2 local_1e;
  undefined2 local_18;
  undefined2 local_16;
  undefined2 local_14;
  undefined2 local_12;
  char local_3;
  
  FUN_1158_1ee5(0,0x34,&local_38,unaff_SS);
  local_38 = 0x34;
  local_36 = 0;
  local_1e = DAT_1160_188c;
  uVar4 = (undefined2)((ulong)param_1 >> 0x10);
  iVar3 = (int)param_1;
  local_3c = *(uint *)(*(char *)(iVar3 + 0x26) * 2 + 0xd6a) | 0x3000;
  local_3a = (int)local_3c >> 0xf;
  if (*(char *)(iVar3 + 0x23) != '\0') {
    bVar5 = 0xffef < local_3c;
    local_3c = local_3c + 0x10;
    local_3a = local_3a + (uint)bVar5;
  }
  if ((*(byte *)(iVar3 + 0x24) & 1) == 0) {
    local_3a = local_3a + 0x10;
  }
  if ((*(byte *)(iVar3 + 0x24) & 2) == 0) {
    bVar5 = 0xfff7 < local_3c;
    local_3c = local_3c + 8;
    local_3a = local_3a + (uint)bVar5;
  }
  if ((*(byte *)(iVar3 + 0x24) & 4) == 0) {
    bVar5 = 0xfffb < local_3c;
    local_3c = local_3c + 4;
    local_3a = local_3a + (uint)bVar5;
  }
  if ((*(byte *)(iVar3 + 0x24) & 0x20) != 0) {
    local_3a = local_3a + 8;
  }
  if (*(char *)(iVar3 + 0x25) != '\0') {
    bVar5 = 0xffdf < local_3c;
    local_3c = local_3c + 0x20;
    local_3a = local_3a + (uint)bVar5;
  }
  if ((*(byte *)(iVar3 + 0x24) & 0x10) != 0) {
    bVar5 = 0xf7ff < local_3c;
    local_3c = local_3c + 0x800;
    local_3a = local_3a + (uint)bVar5;
  }
  if ((*(byte *)(iVar3 + 0x24) & 8) == 0) {
    bVar5 = 0xff7f < local_3c;
    local_3c = local_3c + 0x80;
    local_3a = local_3a + (uint)bVar5;
  }
  local_2c = local_3c;
  local_2a = local_3a;
  local_28 = *(undefined2 *)(iVar3 + 0x1f);
  local_26 = *(undefined2 *)(iVar3 + 0x21);
  local_24 = *(undefined2 *)(iVar3 + 0x27);
  local_22 = *(undefined2 *)(iVar3 + 0x29);
  local_20 = *(undefined2 *)(iVar3 + 0x2b);
  local_18 = 0xacf;
  local_16 = 0x1108;
  local_14 = 0xacf;
  local_12 = 0x1108;
  DAT_1160_0cb4 = *(undefined *)(iVar3 + 0x1a);
  DAT_1160_0cb5 = 0;
  FUN_1108_2cde(local_30,unaff_SS,&local_32,unaff_SS);
  FUN_1108_1efb((int)_DAT_1160_2ad8,(int)((ulong)_DAT_1160_2ad8 >> 0x10),iVar3,uVar4);
  local_34 = *(undefined2 *)((int)DAT_1160_2c2a + 0x1a);
  iVar2 = FUN_1108_0c6c();
  local_3 = iVar2 != 0;
  FUN_1108_1f63((int)_DAT_1160_2ad8,(int)((ulong)_DAT_1160_2ad8 >> 0x10),iVar3,uVar4);
  if (local_3 == '\0') {
    cVar1 = FUN_1108_0cc5(local_30[0]);
    if (cVar1 != '\0') {
      GLOBALFREE(0x1108,local_30[0]);
    }
  }
  else {
    FUN_1108_2de9(local_30[0],local_32);
    *(bool *)(iVar3 + 0x23) = (local_2c & 0x10) != 0;
    *(bool *)(iVar3 + 0x25) = (local_2c & 0x20) != 0;
    if ((local_2c & 1) == 0) {
      if ((local_2c & 2) == 0) {
        *(undefined *)(iVar3 + 0x26) = 0;
      }
      else {
        *(undefined *)(iVar3 + 0x26) = 2;
      }
    }
    else {
      *(undefined *)(iVar3 + 0x26) = 1;
    }
    *(undefined2 *)(iVar3 + 0x1f) = local_28;
    *(undefined2 *)(iVar3 + 0x21) = local_26;
    *(undefined2 *)(iVar3 + 0x2b) = local_20;
  }
  return local_3;
}



/* ---- FUN_1108_314d @ 1108:314d  (33 octets) ---- */

int FUN_1108_314d(undefined2 param_1_00,int param_1,int param_2)

{
  undefined2 local_4;
  
  if (param_2 < param_1) {
    local_4 = param_1;
  }
  else {
    local_4 = param_2;
  }
  return local_4;
}



/* ---- FUN_1108_3190 @ 1108:3190  (1784 octets) ---- */

/* WARNING: Removing unreachable block (ram,0x1108340f) */
/* WARNING: Removing unreachable block (ram,0x11083432) */

undefined4 __stdcall16far FUN_1108_3190(uint param_1,char param_2)

{
  undefined2 *puVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined2 uVar8;
  undefined2 uVar9;
  undefined *puVar10;
  undefined2 uVar11;
  undefined2 unaff_SS;
  undefined4 uVar12;
  undefined *puStack_37c;
  undefined local_256 [252];
  undefined local_15a [4];
  undefined4 *local_156;
  undefined4 local_152;
  int local_14e;
  int local_14c;
  int local_4a;
  int local_48;
  int local_46;
  int local_44;
  int local_42;
  int local_40;
  int local_3e;
  int local_3c;
  int local_3a;
  byte local_37;
  int local_36 [18];
  undefined4 local_12;
  undefined4 local_e;
  undefined4 *local_a;
  undefined4 local_6;
  
  local_152 = FUN_1140_265b();
  local_6 = local_152;
  FUN_1140_3838();
  FUN_1140_326e();
  FUN_1140_3244();
  FUN_1138_6322();
  FUN_1128_117e();
  FUN_1128_1132();
  FUN_1128_1233();
  FUN_1140_60ba();
  FUN_1148_0688();
  FUN_1158_161b();
  FUN_1140_33d5();
  FUN_1128_21d2();
  FUN_1150_0d4c();
  DRAWTEXT();
  local_a = (undefined4 *)FUN_1120_4259();
  puVar1 = (undefined2 *)((int)*local_a + 0x1c);
  (*(code *)*puVar1)();
  puVar1 = (undefined2 *)((int)*local_a + 0x3c);
  (*(code *)*puVar1)();
  FUN_1120_45e7();
  FUN_1138_1d8c();
  FUN_1138_1849();
  if (*(int *)(param_2 * 4 + 0xc32) == 0 && *(int *)(param_2 * 4 + 0xc34) == 0) {
    local_42 = (local_46 - local_4a) + 0x14;
    local_40 = (local_44 - local_48) + 10;
    local_e = (undefined4 *)0x0;
    local_3a = 0;
    local_37 = 0;
    while( true ) {
      if ((local_37 < 0x10) &&
         ((param_1 & (1 << (local_37 & 0xf) | 1U >> 0x10 - (local_37 & 0xf))) != 0)) {
        local_3a = local_3a + 1;
        uVar12 = FUN_1110_26fe();
        local_36[(char)local_37 * 2] = (int)uVar12;
        local_36[(char)local_37 * 2 + 1] = (int)((ulong)uVar12 >> 0x10);
        local_156 = *(undefined4 **)(local_36 + (char)local_37 * 2);
        puVar1 = (undefined2 *)((int)*local_156 + 0x3c);
        (*(code *)*puVar1)();
        puVar1 = (undefined2 *)((int)*local_156 + 0x4c);
        puStack_37c = (undefined *)0x34f8;
        (*(code *)*puVar1)();
        puStack_37c = (undefined *)((ulong)local_156 >> 0x10);
        FUN_1110_2cd0((undefined4 *)local_156);
        puVar10 = (undefined *)((ulong)local_156 >> 0x10);
        if (DAT_1160_0c1f == '\0') {
          puStack_37c = (undefined *)0x0;
          FUN_1110_2c18((undefined4 *)local_156,puVar10);
          puStack_37c = (undefined *)((ulong)local_156 >> 0x10);
          FUN_1110_2f4d((undefined4 *)local_156);
        }
        else {
          puStack_37c = puVar10;
          FUN_1110_2f4d((undefined4 *)local_156);
        }
        puStack_37c = (undefined *)((ulong)local_156 >> 0x10);
        FUN_1110_2f28((undefined4 *)local_156);
        puStack_37c = local_256;
        FUN_1150_092b(*(undefined2 *)((char)local_37 * 2 + 0xc50));
        FUN_1138_1d8c((undefined4 *)local_156,(int)((ulong)local_156 >> 0x10));
        puStack_37c = local_256;
        FUN_1150_0e6e(*(undefined2 *)((char)local_37 * 4 + 0xc62),
                      *(undefined2 *)((char)local_37 * 4 + 0xc64));
        puVar1 = (undefined2 *)((int)*local_156 + 0x1c);
        (*(code *)*puVar1)(0x1150,(undefined4 *)local_156,(int)((ulong)local_156 >> 0x10));
        FUN_1110_2cab();
      }
      else {
        local_36[(char)local_37 * 2] = 0;
        local_36[(char)local_37 * 2 + 1] = 0;
      }
      if (local_37 == 8) break;
      local_37 = local_37 + 1;
    }
    if (((param_1 & 2) != 0) && ((param_1 & 8) != 0)) {
      *(undefined *)((int)local_36._4_4_ + 0xdb) = 0;
    }
    if (((param_1 & 4) != 0) && ((param_1 & 8) == 0)) {
      *(undefined *)((int)local_36._8_4_ + 0xdb) = 1;
    }
    local_3e = local_3a * DAT_1160_0c20 + (local_3a + -1) * 8 + 0x1e;
    local_3c = DAT_1160_0c22 + 0x12;
    FUN_1108_314d();
    FUN_1108_314d();
    FUN_1140_2ec9();
    FUN_1108_314d();
    FUN_1140_2ef1();
    if (((int)local_e == 0 && local_e._2_2_ == 0) ||
       (*(int *)((int)local_e + 0x24) <= local_44 - local_48)) {
      FUN_1138_179d();
      if ((int)local_e != 0 || local_e._2_2_ != 0) {
        FUN_1138_179d();
      }
      uVar11 = (undefined2)((ulong)local_a >> 0x10);
      local_14e = *(int *)((undefined4 *)local_a + 8) + *(int *)((undefined4 *)local_a + 9);
    }
    else {
      FUN_1138_179d();
      uVar12 = *(undefined4 *)((int)local_e + 0x8e);
      puVar1 = (undefined2 *)((int)*(undefined4 *)*(undefined4 *)((int)uVar12 + 4) + 0x18);
      (*(code *)*puVar1)();
      FUN_1138_179d();
      uVar11 = (undefined2)((ulong)local_e >> 0x10);
      local_14e = *(int *)((int)local_e + 0x20) + *(int *)((int)local_e + 0x24);
    }
    if ((int)local_e == 0 && local_e._2_2_ == 0) {
      FUN_1138_177b();
    }
    else {
      FUN_1138_177b();
    }
    iVar4 = local_3e / 2;
    iVar5 = FUN_1138_18a9();
    local_14c = (iVar5 / 2 - iVar4) + 0xf;
    local_37 = '\0';
    while( true ) {
      if (local_36[(char)local_37 * 2] != 0 || local_36[(char)local_37 * 2 + 1] != 0) {
        FUN_1138_177b();
        FUN_1138_179d();
        local_14c = local_14c +
                    *(int *)((int)*(undefined4 *)(local_36 + (char)local_37 * 2) + 0x22) + 8;
      }
      if (local_37 == '\b') break;
      local_37 = local_37 + '\x01';
    }
    if (*(int *)(param_2 * 2 + 0xc28) == 0) {
      FUN_1158_0de6();
      FUN_1150_0bc1();
      FUN_1138_1d8c();
    }
    else {
      FUN_1150_092b();
      FUN_1138_1d8c();
    }
    FUN_1140_60ba();
    FUN_1138_177b();
    FUN_1140_60a5();
    FUN_1138_179d();
    return local_6;
  }
  local_e = (undefined4 *)FUN_1118_1d28();
  puVar1 = (undefined2 *)((int)*local_e + 0x1c);
  (*(code *)*puVar1)();
  puVar1 = (undefined2 *)((int)*local_e + 0x3c);
  (*(code *)*puVar1)();
  puStack_37c = (undefined *)0x1118;
  local_12 = (undefined4 *)FUN_1128_640e();
  puStack_37c = (undefined *)DAT_1160_1858;
  DAT_1160_1858 = &puStack_37c;
  uVar11 = LOADICON(0x1128,*(undefined2 *)(param_2 * 4 + 0xc32),*(undefined2 *)(param_2 * 4 + 0xc34)
                   );
  FUN_1128_68b7((undefined4 *)local_12,(int)((ulong)local_12 >> 0x10),uVar11);
  uVar12 = *(undefined4 *)((int)(undefined4 *)local_e + 0x8e);
  FUN_1128_42f9((int)uVar12,(int)((ulong)uVar12 >> 0x10),(undefined4 *)local_12,local_12._2_2_);
  uVar11 = 0;
  uVar8 = (undefined2)((ulong)local_12 >> 0x10);
  puVar6 = (undefined4 *)local_12;
  puVar1 = (undefined2 *)((int)*local_12 + 0x1c);
  uVar2 = (*(code *)*puVar1)(0x1128,puVar6,uVar8,0,10,local_15a);
  uVar9 = (undefined2)((ulong)local_12 >> 0x10);
  puVar7 = (undefined4 *)local_12;
  puVar1 = (undefined2 *)((int)*local_12 + 0x18);
  uVar3 = (*(code *)*puVar1)(0x1128,puVar7,uVar9,uVar2);
  FUN_1148_06ae(uVar3,puVar7,uVar9,uVar2);
  FUN_1138_1849((undefined4 *)local_e,(int)((ulong)local_e >> 0x10),puVar6,uVar8);
  DAT_1160_1858 = (undefined **)uVar11;
  uVar12 = FUN_1158_1f7f((undefined4 *)local_12,(int)((ulong)local_12 >> 0x10));
  return uVar12;
}



/* ---- FUN_1108_388a @ 1108:388a  (41 octets) ---- */

undefined2 __stdcall16far
FUN_1108_388a(undefined2 param_1,undefined2 param_2,undefined2 param_3,undefined param_4,
             undefined4 param_5)

{
  undefined2 uVar1;
  
  uVar1 = FUN_1108_38b9(0xffff,0xffff,param_1,param_2,param_3,param_4,(int)param_5,
                        (int)((ulong)param_5 >> 0x10));
  return uVar1;
}



/* ---- FUN_1108_38b9 @ 1108:38b9  (159 octets) ---- */

void __cdecl16far FUN_1108_38b9(int param_1,int param_2,undefined2 param_3,undefined2 param_4)

{
  int iVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  undefined2 uStack_18;
  undefined *puStack_16;
  undefined2 uStack_14;
  
  uStack_14 = 0x38d3;
  uVar3 = FUN_1108_3190();
  uVar2 = (undefined2)((ulong)uVar3 >> 0x10);
  iVar1 = (int)uVar3;
  uStack_14 = 0x38b3;
  uStack_18 = DAT_1160_1858;
  DAT_1160_1858 = &uStack_18;
  *(undefined2 *)(iVar1 + 0xac) = param_3;
  *(undefined2 *)(iVar1 + 0xae) = param_4;
  puStack_16 = &stack0xfffe;
  if (-1 < param_2) {
    puStack_16 = &stack0xfffe;
    FUN_1138_177b(uVar3,param_2);
  }
  if (-1 < param_1) {
    FUN_1138_179d(uVar3,param_1);
  }
  FUN_1138_5df4(uVar3,0x60,*(undefined2 *)((int)DAT_1160_2c2e + 0x1e));
  FUN_1140_5d45(uVar3);
  DAT_1160_1858 = (undefined2 *)iVar1;
  puStack_16 = (undefined *)0x1140;
  uStack_18 = 0x3958;
  FUN_1158_1f7f(uVar3);
  return;
}



/* ---- FUN_1108_395f @ 1108:395f  (43 octets) ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_1108_395f(void)

{
  undefined2 unaff_CS;
  
  if (DAT_1160_2ad8 != 0 || DAT_1160_2ada != 0) {
    unaff_CS = 0x1158;
    FUN_1158_1f7f(DAT_1160_2ad8,DAT_1160_2ada);
  }
  GLOBALDELETEATOM(unaff_CS,DAT_1160_0c26);
  GLOBALDELETEATOM(0x14d0,DAT_1160_0c24);
  return;
}



/* ---- FUN_1108_398a @ 1108:398a  (162 octets) ---- */

void __cdecl16near FUN_1108_398a(void)

{
  undefined2 uVar1;
  undefined2 unaff_CS;
  undefined2 unaff_SS;
  undefined4 uVar2;
  undefined2 local_1a;
  undefined2 local_18;
  undefined local_16;
  undefined local_12 [16];
  
  DAT_1160_2ad4 = REGISTERWINDOWMESSAGE(unaff_CS,0xd70);
  DAT_1160_2ad6 = REGISTERWINDOWMESSAGE(0x14d0,0xd7d);
  uVar2 = FUN_1158_1f50(0x1deb,0x1108,1);
  DAT_1160_2ada = (undefined2)((ulong)uVar2 >> 0x10);
  DAT_1160_2ad8 = (undefined2)uVar2;
  local_1a = DAT_1160_188c;
  local_18 = 0;
  local_16 = 0;
  uVar1 = FUN_1150_0fa3(0,&local_1a,unaff_SS,0xd91,0x1160,local_12,unaff_SS);
  DAT_1160_0c26 = GLOBALADDATOM(0x1150,uVar1);
  local_1a = DAT_1160_188c;
  local_18 = 0;
  local_16 = 0;
  uVar1 = FUN_1150_0fa3(0,&local_1a,unaff_SS,0xda0,0x1160,local_12,unaff_SS);
  DAT_1160_0c24 = GLOBALADDATOM(0x1150,uVar1);
  FUN_1150_0574(0x395f,0x1108);
  return;
}



/* ---- FUN_1108_3a2c @ 1108:3a2c  (8 octets) ---- */

void __cdecl16far FUN_1108_3a2c(void)

{
  FUN_1108_398a();
  return;
}




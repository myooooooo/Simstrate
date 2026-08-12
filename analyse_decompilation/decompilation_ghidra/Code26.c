/* Simstrat (FR).EXE - segment Code26 - 64 fonctions
   Decompile par Ghidra 11.2.1 (x86 16 bits, chargeur NE). */

/* ---- FUN_10c8_08b5 @ 10c8:08b5  (35 octets) ---- */

void FUN_10c8_08b5(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_1150_28e6(0x22,0x10f8,1,(int)param_1,(int)((ulong)param_1 >> 0x10));
  FUN_1158_1399(0x1150,uVar1);
  return;
}



/* ---- FUN_10c8_08d8 @ 10c8:08d8  (25 octets) ---- */

void FUN_10c8_08d8(undefined2 param_1)

{
  undefined2 unaff_SS;
  undefined *puVar1;
  undefined local_102 [256];
  
  puVar1 = local_102;
  FUN_1150_092b(param_1);
  FUN_10c8_08b5(puVar1,unaff_SS);
  return;
}



/* ---- FUN_10c8_08f1 @ 10c8:08f1  (70 octets) ---- */

undefined4 __stdcall16far
FUN_10c8_08f1(undefined4 param_1,char param_2,undefined2 param_3,undefined2 param_4)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uStack_a;
  
  if (param_2 != '\0') {
    FUN_1158_1fe2();
  }
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  FUN_10d8_75dc(iVar1,uVar2,0);
  *(undefined2 *)(iVar1 + 0x14) = param_3;
  *(undefined2 *)(iVar1 + 0x16) = param_4;
  if (param_2 != '\0') {
    DAT_1160_1858 = uStack_a;
  }
  return param_1;
}



/* ---- FUN_10c8_0937 @ 10c8:0937  (41 octets) ---- */

void __stdcall16far FUN_10c8_0937(undefined4 param_1,char param_2)

{
  undefined2 uVar1;
  
  uVar1 = (undefined2)((ulong)param_1 >> 0x10);
  FUN_10c8_0b23((int)param_1,uVar1);
  FUN_10d8_761a((int)param_1,uVar1,0);
  if (param_2 != '\0') {
    FUN_1158_200f();
  }
  return;
}



/* ---- FUN_10c8_0960 @ 10c8:0960  (50 octets) ---- */

undefined2 __stdcall16far FUN_10c8_0960(undefined4 param_1)

{
  uint uVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  undefined local_3;
  
  local_3 = 1;
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  uVar3 = FUN_10d8_76fa((int)param_1,uVar2);
  uVar1 = (uint)uVar3 | (uint)((ulong)uVar3 >> 0x10);
  if (uVar1 != 0) {
    uVar3 = FUN_10d8_76fa((int)param_1,uVar2);
    local_3 = *(undefined *)((int)uVar3 + 0x3c);
    uVar1 = CONCAT11((char)((ulong)uVar3 >> 8),local_3);
  }
  return CONCAT11((char)(uVar1 >> 8),local_3);
}



/* ---- FUN_10c8_0992 @ 10c8:0992  (67 octets) ---- */

undefined4 __stdcall16far FUN_10c8_0992(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  undefined2 uVar4;
  undefined2 local_6;
  undefined2 local_4;
  
  uVar3 = CONCAT22(local_4,local_6);
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  if (param_2 < *(int *)(iVar1 + 0x18)) {
    uVar4 = *(undefined2 *)((int)*(undefined4 *)(iVar1 + 0x1e) + param_2 * 2);
    uVar3 = FUN_10d8_76fa(iVar1,uVar2);
    uVar3 = FUN_10d8_3b4b(uVar3,uVar4);
  }
  return uVar3;
}



/* ---- FUN_10c8_09d5 @ 10c8:09d5  (305 octets) ---- */

undefined2 __stdcall16far FUN_10c8_09d5(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int local_a;
  
  uVar6 = (undefined2)((ulong)param_1 >> 0x10);
  iVar4 = (int)param_1;
  if (0x7ff7 < *(int *)(iVar4 + 0x18)) {
    FUN_10c8_08d8(0xf255);
  }
  uVar7 = (undefined2)((ulong)param_2 >> 0x10);
  uVar5 = (undefined2)param_2;
  uVar8 = FUN_10d8_76fa(iVar4,uVar6);
  uVar8 = FUN_10d8_3b9b(uVar8,uVar5,uVar7);
  uVar2 = (uint)uVar8 | (uint)((ulong)uVar8 >> 0x10);
  uVar3 = uVar2 & 0xff00;
  if (uVar2 != 0) {
    uVar3 = uVar3 + 1;
  }
  cVar1 = (char)uVar3;
  if (cVar1 != '\0') {
    if (*(int *)(iVar4 + 0x1a) == 0) {
      *(undefined2 *)(iVar4 + 0x1a) = 8;
      uVar9 = FUN_1158_0182(*(int *)(iVar4 + 0x1a) << 1);
      *(undefined2 *)(iVar4 + 0x1e) = (int)uVar9;
      *(undefined2 *)(iVar4 + 0x20) = (int)((ulong)uVar9 >> 0x10);
    }
    else if (*(int *)(iVar4 + 0x18) == *(int *)(iVar4 + 0x1a)) {
      local_a = *(int *)(iVar4 + 0x1a) * 2;
      if ((0x7ff8 < local_a) || (local_a < *(int *)(iVar4 + 0x18))) {
        local_a = 0x7ff8;
      }
      uVar9 = FUN_1158_0182(local_a << 1);
      FUN_1158_1ec1(*(int *)(iVar4 + 0x18) << 1,uVar9,(int)*(undefined4 *)(iVar4 + 0x1e),
                    (int)((ulong)*(undefined4 *)(iVar4 + 0x1e) >> 0x10));
      FUN_1158_019c(*(int *)(iVar4 + 0x18) << 1,*(undefined2 *)(iVar4 + 0x1e),
                    *(undefined2 *)(iVar4 + 0x20));
      *(int *)(iVar4 + 0x1a) = local_a;
      *(undefined2 *)(iVar4 + 0x1e) = (int)uVar9;
      *(undefined2 *)(iVar4 + 0x20) = (int)((ulong)uVar9 >> 0x10);
    }
    uVar5 = FUN_10d8_693c(uVar8);
    uVar3 = *(int *)(iVar4 + 0x18) * 2;
    *(undefined2 *)((int)*(undefined4 *)(iVar4 + 0x1e) + uVar3) = uVar5;
    *(int *)(iVar4 + 0x18) = *(int *)(iVar4 + 0x18) + 1;
  }
  return CONCAT11((char)(uVar3 >> 8),cVar1);
}



/* ---- FUN_10c8_0b06 @ 10c8:0b06  (29 octets) ---- */

void __stdcall16far FUN_10c8_0b06(undefined4 param_1)

{
  undefined2 *puVar1;
  
  puVar1 = (undefined2 *)((int)*(undefined4 *)*(undefined4 *)((int)param_1 + 0x14) + 0xa4);
  (*(code *)*puVar1)();
  return;
}



/* ---- FUN_10c8_0b23 @ 10c8:0b23  (55 octets) ---- */

void __stdcall16far FUN_10c8_0b23(undefined4 param_1)

{
  int iVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  if (*(int *)(iVar1 + 0x1e) != 0 || *(int *)(iVar1 + 0x20) != 0) {
    FUN_1158_019c(*(int *)(iVar1 + 0x1a) << 1,*(undefined2 *)(iVar1 + 0x1e),
                  *(undefined2 *)(iVar1 + 0x20));
    *(undefined2 *)(iVar1 + 0x1a) = 0;
    *(undefined2 *)(iVar1 + 0x18) = 0;
  }
  return;
}



/* ---- FUN_10c8_0b5a @ 10c8:0b5a  (15 octets) ---- */

void __stdcall16far FUN_10c8_0b5a(undefined4 param_1)

{
  *(undefined *)((int)param_1 + 0x1c) = 1;
  return;
}



/* ---- FUN_10c8_0b69 @ 10c8:0b69  (29 octets) ---- */

void __stdcall16far FUN_10c8_0b69(undefined4 param_1)

{
  undefined4 uVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  uVar1 = *(undefined4 *)((int)param_1 + 0x14);
  FUN_10c8_1a06((int)uVar1,(int)((ulong)uVar1 >> 0x10));
  *(undefined *)((int)param_1 + 0x1c) = 0;
  return;
}



/* ---- FUN_10c8_0b86 @ 10c8:0b86  (27 octets) ---- */

void __stdcall16far FUN_10c8_0b86(undefined4 param_1)

{
  undefined2 *puVar1;
  
  puVar1 = (undefined2 *)((int)*(undefined4 *)*(undefined4 *)((int)param_1 + 0x14) + 0x94);
  (*(code *)*puVar1)();
  return;
}



/* ---- FUN_10c8_0ba1 @ 10c8:0ba1  (24 octets) ---- */

void __stdcall16far FUN_10c8_0ba1(undefined4 param_1)

{
  undefined2 *puVar1;
  
  puVar1 = (undefined2 *)((int)*(undefined4 *)*(undefined4 *)((int)param_1 + 0x14) + 0x90);
  (*(code *)*puVar1)();
  return;
}



/* ---- FUN_10c8_0bb9 @ 10c8:0bb9  (21 octets) ---- */

void __stdcall16far FUN_10c8_0bb9(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)((int)param_1 + 0x14);
  FUN_10c8_1a65((int)uVar1,(int)((ulong)uVar1 >> 0x10));
  return;
}



/* ---- FUN_10c8_0bce @ 10c8:0bce  (53 octets) ---- */

void __stdcall16far FUN_10c8_0bce(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  undefined2 uVar2;
  
  iVar1 = (int)param_1;
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  if ((param_2 == 0 && param_3 == 0) || (*(char *)(iVar1 + 0x1d) == '\0')) {
    FUN_10c8_1a8a((int)*(undefined4 *)(iVar1 + 0x14),
                  (int)((ulong)*(undefined4 *)(iVar1 + 0x14) >> 0x10),param_2,param_3);
    *(undefined *)(iVar1 + 0x1c) = 0;
  }
  return;
}



/* ---- FUN_10c8_0c55 @ 10c8:0c55  (53 octets) ---- */

void __stdcall16far FUN_10c8_0c55(undefined4 *param_1)

{
  undefined2 *puVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  if (*(char *)((undefined4 *)param_1 + 7) == '\0') {
    uVar3 = FUN_10d8_76fa((undefined4 *)param_1,uVar2);
    FUN_10d8_558b(uVar3);
  }
  else {
    puVar1 = (undefined2 *)((int)*param_1 + 0x28);
    (*(code *)*puVar1)();
  }
  return;
}



/* ---- FUN_10c8_0c8a @ 10c8:0c8a  (52 octets) ---- */

void __cdecl16near FUN_10c8_0c8a(void)

{
  if (DAT_1160_2ac4 == 0) {
    DAT_1160_2ac0 = FUN_1128_56bd(0x83f,0x1128,1);
    FUN_1128_6226(DAT_1160_2ac0,1);
  }
  DAT_1160_2ac4 = DAT_1160_2ac4 + 1;
  return;
}



/* ---- FUN_10c8_0cbe @ 10c8:0cbe  (27 octets) ---- */

void __cdecl16near FUN_10c8_0cbe(void)

{
  DAT_1160_2ac4 = DAT_1160_2ac4 + -1;
  if (DAT_1160_2ac4 == 0) {
    FUN_1158_1f7f((int)DAT_1160_2ac0,(int)((ulong)DAT_1160_2ac0 >> 0x10));
  }
  return;
}



/* ---- FUN_10c8_0cd9 @ 10c8:0cd9  (31 octets) ---- */

int FUN_10c8_0cd9(int param_1,int param_2)

{
  undefined2 local_4;
  
  local_4 = param_1;
  if (param_1 < param_2) {
    local_4 = param_2;
  }
  return local_4;
}



/* ---- FUN_10c8_0cf8 @ 10c8:0cf8  (588 octets) ---- */

void FUN_10c8_0cf8(int param_1,undefined *param_2,int param_3,int param_4,int *param_5,
                  undefined4 param_6)

{
  undefined2 *puVar1;
  int iVar2;
  undefined2 uVar3;
  undefined *puVar4;
  int *piVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  undefined2 unaff_SS;
  undefined4 uVar8;
  int *piVar9;
  undefined *puVar10;
  undefined2 uVar11;
  undefined2 uVar12;
  undefined local_122 [8];
  int *local_11a;
  undefined4 local_116;
  undefined local_112 [8];
  undefined local_10a [8];
  undefined local_102 [256];
  
  iVar2 = (int)param_6;
  uVar12 = (undefined2)((ulong)param_6 >> 0x10);
  piVar9 = (int *)param_5;
  uVar11 = (undefined2)((ulong)param_5 >> 0x10);
  puVar4 = (undefined *)param_2;
  uVar6 = (undefined2)((ulong)param_2 >> 0x10);
  if (param_1 == 0) {
    FUN_1128_21d2(iVar2,uVar12);
    param_4 = *param_5 + param_4;
    param_3 = piVar9[1] + param_3;
    uVar12 = 6;
    uVar8 = FUN_1150_0d4c(puVar4,uVar6,local_102,unaff_SS);
    EXTTEXTOUT(0x1150,0,0,*param_2,uVar8,piVar9,uVar11,uVar12,param_3,param_4);
  }
  else if (param_1 == 2) {
    local_116._0_2_ = iVar2;
    local_116._2_2_ = uVar12;
    FUN_1128_21d2(iVar2,uVar12);
    iVar2 = FUN_1128_2003((int)local_116,local_116._2_2_,puVar4,uVar6);
    iVar2 = (piVar9[2] - iVar2) + -3;
    param_3 = piVar9[1] + param_3;
    uVar12 = 6;
    uVar8 = FUN_1150_0d4c(puVar4,uVar6,local_102,unaff_SS);
    EXTTEXTOUT(0x1150,0,0,*param_2,uVar8,piVar9,uVar11,uVar12,param_3,iVar2);
  }
  else {
    local_116 = DAT_1160_2ac0;
    local_11a = param_5;
    puVar1 = (undefined2 *)((int)*DAT_1160_2ac0 + 0x1c);
    uVar3 = (*(code *)*puVar1)();
    FUN_10c8_0cd9(((int *)local_11a)[2] - *local_11a,uVar3);
    puVar1 = (undefined2 *)((int)*local_116 + 0x28);
    (*(code *)*puVar1)();
    puVar1 = (undefined2 *)((int)*local_116 + 0x18);
    uVar3 = (*(code *)*puVar1)();
    uVar7 = (undefined2)((ulong)local_11a >> 0x10);
    FUN_10c8_0cd9(((int *)local_11a)[3] - ((int *)local_11a)[1],uVar3);
    puVar1 = (undefined2 *)((int)*local_116 + 0x24);
    (*(code *)*puVar1)();
    puVar10 = local_122;
    uVar7 = (undefined2)((ulong)local_11a >> 0x10);
    piVar5 = (int *)local_11a;
    uVar3 = unaff_SS;
    FUN_1148_0688((piVar5[3] - piVar5[1]) + -1,(piVar5[2] - *local_11a) + -1,param_3,param_4);
    FUN_1158_161b(8,local_112,unaff_SS,puVar10,uVar3);
    puVar10 = local_122;
    uVar7 = (undefined2)((ulong)local_11a >> 0x10);
    piVar5 = (int *)local_11a;
    uVar3 = unaff_SS;
    FUN_1148_0688(piVar5[3] - piVar5[1],piVar5[2] - *local_11a,0,0);
    FUN_1158_161b(8,local_10a,unaff_SS,puVar10,uVar3);
    local_116 = (undefined4 *)
                FUN_1128_5a0f((undefined4 *)DAT_1160_2ac0,(int)((ulong)DAT_1160_2ac0 >> 0x10));
    FUN_1128_2099(local_116,*(undefined2 *)(iVar2 + 7),*(undefined2 *)(iVar2 + 9));
    FUN_1128_0fdf((int)*(undefined4 *)((int)local_116 + 7),
                  (int)((ulong)*(undefined4 *)((int)local_116 + 7) >> 0x10),0,0);
    FUN_1128_1ce5(local_116,local_10a,unaff_SS);
    FUN_1128_21d2(local_116);
    uVar8 = FUN_1150_0d4c(puVar4,uVar6,local_102,unaff_SS);
    DRAWTEXT(0x1150,param_1,local_112,unaff_SS,*param_2,uVar8);
    local_116 = DAT_1160_2ac0;
    uVar8 = FUN_1128_5a0f((undefined4 *)DAT_1160_2ac0,(int)((ulong)DAT_1160_2ac0 >> 0x10));
    FUN_1128_1b10(iVar2,uVar12,local_10a,unaff_SS,uVar8,piVar9,uVar11);
  }
  return;
}



/* ---- FUN_10c8_118f @ 10c8:118f  (76 octets) ---- */

void __stdcall16far FUN_10c8_118f(undefined4 param_1,char param_2)

{
  int iVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  FUN_1158_1f7f((int)*(undefined4 *)(iVar1 + 0x15d),
                (int)((ulong)*(undefined4 *)(iVar1 + 0x15d) >> 0x10));
  *(undefined2 *)(iVar1 + 0x15d) = 0;
  *(undefined2 *)(iVar1 + 0x15f) = 0;
  FUN_1158_1f7f((int)*(undefined4 *)(iVar1 + 0x141),
                (int)((ulong)*(undefined4 *)(iVar1 + 0x141) >> 0x10));
  FUN_10f8_1fa0(iVar1,uVar2,0);
  FUN_10c8_0cbe();
  if (param_2 != '\0') {
    FUN_1158_200f();
  }
  return;
}



/* ---- FUN_10c8_125b @ 10c8:125b  (58 octets) ---- */

void __stdcall16far FUN_10c8_125b(undefined4 param_1)

{
  undefined2 *puVar1;
  
  if (*(int *)((int)param_1 + 0x173) != 0) {
    puVar1 = (undefined2 *)((int)param_1 + 0x171);
    (*(code *)*puVar1)();
  }
  return;
}



/* ---- FUN_10c8_15e9 @ 10c8:15e9  (71 octets) ---- */

void __stdcall16far FUN_10c8_15e9(undefined4 *param_1,char param_2)

{
  undefined2 *puVar1;
  undefined4 *puVar2;
  undefined2 uVar3;
  undefined2 unaff_CS;
  
  puVar2 = (undefined4 *)param_1;
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  if (param_2 == '\0') {
    unaff_CS = 0x10f8;
    FUN_10f8_2532(puVar2,uVar3);
  }
  puVar1 = (undefined2 *)((int)*param_1 + 0x90);
  (*(code *)*puVar1)(unaff_CS,puVar2,uVar3);
  FUN_10c8_2068(puVar2,uVar3);
  if (param_2 != '\0') {
    if ((*(byte *)((int)puVar2 + 0x153) & 2) != 0) {
      FUN_10f8_2549(puVar2,uVar3);
    }
  }
  return;
}



/* ---- FUN_10c8_1630 @ 10c8:1630  (40 octets) ---- */

void __stdcall16far FUN_10c8_1630(undefined4 *param_1)

{
  undefined2 *puVar1;
  undefined4 *puVar2;
  undefined2 uVar3;
  
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  puVar2 = (undefined4 *)param_1;
  FUN_1138_3c88(puVar2,uVar3);
  puVar1 = (undefined2 *)((int)*param_1 + 0x90);
  (*(code *)*puVar1)(0x1138,puVar2,uVar3);
  FUN_10c8_2068(puVar2,uVar3);
  return;
}



/* ---- FUN_10c8_1658 @ 10c8:1658  (36 octets) ---- */

undefined4 __stdcall16far FUN_10c8_1658(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined2 uVar3;
  
  uVar1 = *(undefined4 *)((int)param_1 + 0x15d);
  uVar3 = (undefined2)((ulong)uVar1 >> 0x10);
  iVar2 = (int)uVar1;
  return CONCAT22(*(undefined2 *)(iVar2 + 6),*(undefined2 *)(iVar2 + 4));
}



/* ---- FUN_10c8_167c @ 10c8:167c  (91 octets) ---- */

undefined2 __stdcall16far FUN_10c8_167c(undefined4 param_1,byte param_2)

{
  undefined2 *puVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  undefined2 uVar5;
  int iVar6;
  undefined2 uVar7;
  undefined4 *puVar8;
  
  uVar7 = (undefined2)((ulong)param_1 >> 0x10);
  iVar6 = (int)param_1;
  if ((*(char *)((int)*(undefined4 *)(iVar6 + 0x15d) + 0x11) != '\0') &&
     (iVar3 = FUN_10c8_1919(iVar6,uVar7), 0 < iVar3)) {
    uVar4 = (uint)param_2;
    uVar5 = FUN_10c8_19da(iVar6,uVar7);
    puVar8 = (undefined4 *)FUN_10c8_1933(iVar6,uVar7,uVar5);
    puVar1 = (undefined2 *)((int)*puVar8 + 0x70);
    cVar2 = (*(code *)*puVar1)(0x10c8,puVar8,uVar4);
    if (cVar2 != '\0') {
      return 1;
    }
  }
  return 0;
}



/* ---- FUN_10c8_16d7 @ 10c8:16d7  (80 octets) ---- */

undefined2 __stdcall16far FUN_10c8_16d7(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined4 uVar5;
  undefined2 local_4;
  
  local_4 = 0;
  uVar4 = (undefined2)((ulong)param_1 >> 0x10);
  uVar3 = (undefined2)param_1;
  iVar2 = FUN_10c8_1919(uVar3,uVar4);
  if (0 < iVar2) {
    uVar5 = FUN_10c8_198f(uVar3,uVar4);
    cVar1 = FUN_1158_2255(0x56f,(char *)s_iTime_1160_10dc + 4,uVar5);
    if (cVar1 != '\0') {
      uVar5 = FUN_10c8_198f(uVar3,uVar4);
      local_4 = *(undefined2 *)((int)uVar5 + 0x2a);
    }
  }
  return local_4;
}



/* ---- FUN_10c8_1727 @ 10c8:1727  (157 octets) ---- */

char __stdcall16far FUN_10c8_1727(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  undefined2 uVar3;
  int iVar4;
  undefined2 uVar5;
  undefined4 uVar6;
  char local_3;
  
  local_3 = '\0';
  uVar5 = (undefined2)((ulong)param_1 >> 0x10);
  iVar4 = (int)param_1;
  if ((((*(char *)(iVar4 + 0x14d) == '\0') &&
       (*(char *)((int)*(undefined4 *)(iVar4 + 0x15d) + 0x11) != '\0')) &&
      (*(char *)((int)*(undefined4 *)(iVar4 + 0x15d) + 0x10) == '\0')) &&
     (iVar2 = FUN_10c8_1919(iVar4,uVar5), 0 < iVar2)) {
    uVar3 = FUN_10c8_19da(iVar4,uVar5);
    uVar6 = FUN_10c8_1933(iVar4,uVar5,uVar3);
    cVar1 = FUN_10d8_65ca(uVar6);
    if (cVar1 != '\0') {
      FUN_10d8_7899((int)*(undefined4 *)(iVar4 + 0x15d),
                    (int)((ulong)*(undefined4 *)(iVar4 + 0x15d) >> 0x10));
      local_3 = *(char *)((int)*(undefined4 *)(iVar4 + 0x15d) + 0x12);
      if (local_3 != '\0') {
        FUN_10c8_0b5a((int)*(undefined4 *)(iVar4 + 0x15d),
                      (int)((ulong)*(undefined4 *)(iVar4 + 0x15d) >> 0x10));
      }
    }
  }
  return local_3;
}



/* ---- FUN_10c8_18fc @ 10c8:18fc  (29 octets) ---- */

void __stdcall16far FUN_10c8_18fc(undefined4 param_1,undefined4 param_2)

{
  FUN_1158_17e7(0xff,(int)param_1 + 0x179,(int)((ulong)param_1 >> 0x10),(int)param_2,
                (int)((ulong)param_2 >> 0x10));
  return;
}



/* ---- FUN_10c8_1919 @ 10c8:1919  (26 octets) ---- */

undefined2 __stdcall16far FUN_10c8_1919(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)((int)param_1 + 0x15d);
  return *(undefined2 *)((int)uVar1 + 0x18);
}



/* ---- FUN_10c8_1933 @ 10c8:1933  (38 octets) ---- */

undefined4 __stdcall16far FUN_10c8_1933(undefined4 param_1,undefined2 param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)((int)param_1 + 0x15d);
  uVar1 = FUN_10c8_0992((int)uVar1,(int)((ulong)uVar1 >> 0x10),param_2);
  return uVar1;
}



/* ---- FUN_10c8_1959 @ 10c8:1959  (54 octets) ---- */

void __stdcall16far FUN_10c8_1959(undefined4 *param_1,undefined2 param_2,undefined2 param_3)

{
  undefined2 *puVar1;
  undefined extraout_AH;
  undefined4 *puVar2;
  undefined2 uVar3;
  
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  puVar2 = (undefined4 *)param_1;
  FUN_10d8_7731((int)*(undefined4 *)((int)puVar2 + 0x15d),
                (int)((ulong)*(undefined4 *)((int)puVar2 + 0x15d) >> 0x10),param_2,param_3);
  puVar1 = (undefined2 *)((int)*param_1 + 0xa4);
  (*(code *)*puVar1)(0x10d8,puVar2,uVar3,
                     CONCAT11(extraout_AH,
                              *(undefined *)((int)*(undefined4 *)((int)puVar2 + 0x15d) + 0x11)));
  return;
}



/* ---- FUN_10c8_198f @ 10c8:198f  (75 octets) ---- */

undefined4 __stdcall16far FUN_10c8_198f(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined4 uVar6;
  
  uVar6 = 0;
  uVar5 = (undefined2)((ulong)param_1 >> 0x10);
  uVar4 = (undefined2)param_1;
  iVar1 = FUN_10c8_1919(uVar4,uVar5);
  iVar2 = FUN_10c8_19da(uVar4,uVar5);
  if (iVar2 < iVar1) {
    uVar3 = FUN_10c8_19da(uVar4,uVar5);
    uVar6 = FUN_10c8_1933(uVar4,uVar5,uVar3);
  }
  return uVar6;
}



/* ---- FUN_10c8_19da @ 10c8:19da  (44 octets) ---- */

undefined4 __stdcall16far FUN_10c8_19da(undefined4 param_1)

{
  int iVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  return CONCAT22(*(int *)(iVar1 + 0xf4) -
                  (uint)(*(uint *)(iVar1 + 0xf2) < (uint)*(byte *)(iVar1 + 0x156)),
                  *(uint *)(iVar1 + 0xf2) - (uint)*(byte *)(iVar1 + 0x156));
}



/* ---- FUN_10c8_1a06 @ 10c8:1a06  (95 octets) ---- */

void __stdcall16far FUN_10c8_1a06(undefined4 *param_1)

{
  undefined2 *puVar1;
  char cVar2;
  undefined2 uVar3;
  undefined2 unaff_BP;
  undefined4 *puVar4;
  undefined2 uVar5;
  
  uVar5 = (undefined2)((ulong)param_1 >> 0x10);
  puVar4 = (undefined4 *)param_1;
  cVar2 = FUN_1138_64fa(puVar4,uVar5);
  if (cVar2 != '\0') {
    FUN_10c8_211e(puVar4,uVar5);
    FUN_10c8_2068(puVar4,uVar5);
    FUN_10c8_1f11(puVar4,uVar5);
    FUN_10f8_259f(puVar4,uVar5);
    uVar3 = FUN_1138_62b9(puVar4,uVar5);
    VALIDATERECT(0x1138,0,0,uVar3,unaff_BP);
    puVar1 = (undefined2 *)((int)*param_1 + 0x44);
    (*(code *)*puVar1)(0x14d0,puVar4,uVar5);
  }
  return;
}



/* ---- FUN_10c8_1a65 @ 10c8:1a65  (37 octets) ---- */

void __stdcall16far FUN_10c8_1a65(undefined4 param_1)

{
  int iVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  if ((*(byte *)(iVar1 + 0x153) & 8) != 0) {
    FUN_10f8_483b(iVar1,uVar2,*(int *)(iVar1 + 0x15b),*(int *)(iVar1 + 0x15b) >> 0xf,0,0);
  }
  return;
}



/* ---- FUN_10c8_1a8a @ 10c8:1a8a  (345 octets) ---- */

void __stdcall16far FUN_10c8_1a8a(undefined4 param_1,int param_2,int param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined2 uVar4;
  int iVar5;
  undefined2 uVar6;
  undefined2 unaff_SS;
  bool bVar7;
  long lVar8;
  undefined4 uVar9;
  undefined *puVar10;
  undefined local_10e [248];
  undefined local_16 [6];
  int local_10;
  int local_e;
  int local_c;
  undefined local_a [8];
  
  uVar6 = (undefined2)((ulong)param_1 >> 0x10);
  iVar5 = (int)param_1;
  cVar1 = FUN_1138_64fa(iVar5,uVar6);
  if (cVar1 != '\0') {
    local_c = 0;
    if (param_2 == 0 && param_3 == 0) {
      local_e = *(int *)(iVar5 + 0xe6) + -1;
    }
    else {
      local_10 = FUN_10c8_1919(iVar5,uVar6);
      local_10 = local_10 + -1;
      if (-1 < local_10) {
        local_c = 0;
        while ((lVar8 = FUN_10c8_1933(iVar5,uVar6,local_c), lVar8 != CONCAT22(param_3,param_2) &&
               (local_c != local_10))) {
          local_c = local_c + 1;
        }
      }
      local_e = local_c;
    }
    puVar10 = local_16;
    iVar2 = (uint)*(byte *)(iVar5 + 0x156) + local_c;
    iVar3 = (uint)*(byte *)(iVar5 + 0x156) + local_e;
    uVar4 = unaff_SS;
    FUN_10f8_23b3(iVar5,uVar6,*(undefined2 *)(iVar5 + 0xf6),*(undefined2 *)(iVar5 + 0xf8),iVar3,
                  iVar3 >> 0xf,*(undefined2 *)(iVar5 + 0xf6),*(undefined2 *)(iVar5 + 0xf8),iVar2,
                  iVar2 >> 0xf);
    FUN_1158_161b(8,local_a,unaff_SS,puVar10,uVar4);
    uVar4 = FUN_1138_62b9(iVar5,uVar6);
    INVALIDATERECT(0x1138,0,local_a,unaff_SS,uVar4);
    if ((param_2 == 0 && param_3 == 0) ||
       (lVar8 = FUN_10c8_198f(iVar5,uVar6), lVar8 == CONCAT22(param_3,param_2))) {
      puVar10 = local_10e;
      uVar4 = FUN_10c8_19da(iVar5,uVar6);
      uVar9 = FUN_10c8_1933(iVar5,uVar6,uVar4);
      FUN_10d8_68cf(uVar9);
      bVar7 = iVar5 + 0x179 == 0;
      FUN_1158_18be(iVar5 + 0x179,uVar6,puVar10,unaff_SS);
      if ((!bVar7) &&
         (FUN_10f8_259f(iVar5,uVar6), *(int *)(iVar5 + 0x12f) != 0 || *(int *)(iVar5 + 0x131) != 0))
      {
        FUN_10f8_1bfb((int)*(undefined4 *)(iVar5 + 0x12f),
                      (int)((ulong)*(undefined4 *)(iVar5 + 0x12f) >> 0x10));
      }
    }
  }
  return;
}



/* ---- FUN_10c8_1e92 @ 10c8:1e92  (55 octets) ---- */

void __stdcall16far FUN_10c8_1e92(undefined4 *param_1)

{
  undefined2 *puVar1;
  undefined4 *puVar2;
  undefined2 uVar3;
  undefined2 unaff_CS;
  
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  puVar2 = (undefined4 *)param_1;
  if ((*(char *)((int)puVar2 + 0x15a) == '\0') && ((*(byte *)(puVar2 + 6) & 1) == 0)) {
    unaff_CS = 0x1138;
    FUN_1138_1e3e(puVar2,uVar3,0);
  }
  if ((*(byte *)((int)puVar2 + 0x153) & 4) != 0) {
    puVar1 = (undefined2 *)((int)*param_1 + 0x90);
    (*(code *)*puVar1)(unaff_CS,puVar2,uVar3);
  }
  return;
}



/* ---- FUN_10c8_1ec9 @ 10c8:1ec9  (72 octets) ---- */

void __stdcall16far FUN_10c8_1ec9(undefined4 param_1)

{
  int iVar1;
  undefined2 uVar2;
  int iVar3;
  undefined2 uVar4;
  undefined4 uVar5;
  
  uVar4 = (undefined2)((ulong)param_1 >> 0x10);
  iVar3 = (int)param_1;
  iVar1 = FUN_10c8_1919(iVar3,uVar4);
  if (0 < iVar1) {
    uVar2 = FUN_10c8_19da(iVar3,uVar4);
    uVar5 = FUN_10c8_1933(iVar3,uVar4,uVar2);
    FUN_10d8_6f56(uVar5,iVar3 + 0x179,uVar4);
  }
  return;
}



/* ---- FUN_10c8_1f11 @ 10c8:1f11  (188 octets) ---- */

void __stdcall16far FUN_10c8_1f11(undefined4 param_1)

{
  int iVar1;
  undefined2 uVar2;
  int iVar3;
  undefined2 uVar4;
  undefined2 unaff_SS;
  bool bVar5;
  undefined4 uVar6;
  undefined *puVar7;
  undefined local_106 [256];
  int local_6;
  
  uVar4 = (undefined2)((ulong)param_1 >> 0x10);
  iVar3 = (int)param_1;
  if (*(char *)((int)*(undefined4 *)(iVar3 + 0x15d) + 0x11) != '\0') {
    local_6 = FUN_10d8_78cd((int)*(undefined4 *)(iVar3 + 0x15d),
                            (int)((ulong)*(undefined4 *)(iVar3 + 0x15d) >> 0x10));
    local_6 = (uint)*(byte *)(iVar3 + 0x155) + local_6;
    if ((local_6 >> 0xf != *(int *)(iVar3 + 0xf8)) || (local_6 != *(int *)(iVar3 + 0xf6))) {
      if ((*(byte *)(iVar3 + 0x153) & 2) == 0) {
        FUN_10f8_2532(iVar3,uVar4);
      }
      FUN_10f8_73ec(iVar3,uVar4,local_6,local_6 >> 0xf);
    }
    iVar1 = FUN_10c8_1919(iVar3,uVar4);
    if (0 < iVar1) {
      puVar7 = local_106;
      uVar2 = FUN_10c8_19da(iVar3,uVar4);
      uVar6 = FUN_10c8_1933(iVar3,uVar4,uVar2);
      FUN_10d8_68cf(uVar6);
      bVar5 = iVar3 + 0x179 == 0;
      FUN_1158_18be(iVar3 + 0x179,uVar4,puVar7,unaff_SS);
      if (!bVar5) {
        FUN_10f8_259f(iVar3,uVar4);
      }
    }
  }
  return;
}



/* ---- FUN_10c8_1fcd @ 10c8:1fcd  (84 octets) ---- */

undefined4 __stdcall16far FUN_10c8_1fcd(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  
  uVar3 = 0;
  if (((-1 < param_2) &&
      (uVar2 = (undefined2)((ulong)param_1 >> 0x10), iVar1 = (int)param_1, uVar3 = 0,
      *(char *)((int)*(undefined4 *)(iVar1 + 0x15d) + 0x11) != '\0')) &&
     (uVar3 = 0, param_2 < *(int *)((int)*(undefined4 *)(iVar1 + 0x15d) + 0x18))) {
    uVar3 = FUN_10c8_0992((int)*(undefined4 *)(iVar1 + 0x15d),
                          (int)((ulong)*(undefined4 *)(iVar1 + 0x15d) >> 0x10),param_2);
  }
  return uVar3;
}



/* ---- FUN_10c8_2068 @ 10c8:2068  (182 octets) ---- */

void __stdcall16far FUN_10c8_2068(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  undefined2 uVar3;
  int iVar4;
  undefined2 uVar5;
  undefined4 uVar6;
  int local_4;
  
  uVar5 = (undefined2)((ulong)param_1 >> 0x10);
  iVar4 = (int)param_1;
  if ((*(char *)((int)*(undefined4 *)(iVar4 + 0x15d) + 0x11) != '\0') &&
     (cVar1 = FUN_1138_64fa(iVar4,uVar5), cVar1 != '\0')) {
    uVar6 = FUN_10d8_76fa((int)*(undefined4 *)(iVar4 + 0x15d),
                          (int)((ulong)*(undefined4 *)(iVar4 + 0x15d) >> 0x10));
    uVar3 = (undefined2)((ulong)uVar6 >> 0x10);
    FUN_1138_62b9(iVar4,uVar5);
    SETSCROLLRANGE(0x1138,0,4,0,1);
    if (*(char *)((int)uVar6 + 0x38) == '\0') {
      if (*(char *)((int)uVar6 + 0x39) == '\0') {
        local_4 = 2;
      }
      else {
        local_4 = 4;
      }
    }
    else {
      local_4 = 0;
    }
    FUN_1138_62b9(iVar4,uVar5);
    iVar2 = GETSCROLLPOS(0x1138,1);
    if (iVar2 != local_4) {
      FUN_1138_62b9(iVar4,uVar5);
      SETSCROLLPOS(0x1138,1,local_4,1);
    }
  }
  return;
}



/* ---- FUN_10c8_211e @ 10c8:211e  (215 octets) ---- */

void __stdcall16far FUN_10c8_211e(undefined4 param_1)

{
  int iVar1;
  undefined2 uVar2;
  int iVar3;
  int iVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  
  uVar5 = (undefined2)((ulong)param_1 >> 0x10);
  iVar3 = (int)param_1;
  if ((0x7fff < *(uint *)(iVar3 + 0x10c)) ||
     (((int)*(uint *)(iVar3 + 0x10c) < 1 &&
      (*(uint *)(iVar3 + 0x10a) <= (uint)*(byte *)(iVar3 + 0x155))))) {
    FUN_10f8_7426(iVar3,uVar5,*(byte *)(iVar3 + 0x155) + 1,0);
  }
  FUN_10f8_728b(iVar3,uVar5,*(undefined *)(iVar3 + 0x155));
  uVar6 = (undefined2)((ulong)*(undefined4 *)(iVar3 + 0x15d) >> 0x10);
  iVar4 = (int)*(undefined4 *)(iVar3 + 0x15d);
  if ((*(char *)(iVar4 + 0x11) != '\0') && (iVar1 = FUN_10d8_7978(iVar4,uVar6), iVar1 != 0)) {
    FUN_10f8_7426(iVar3,uVar5,1000,0);
    uVar2 = FUN_10f8_6f88(iVar3,uVar5);
    FUN_10d8_7931((int)*(undefined4 *)(iVar3 + 0x15d),
                  (int)((ulong)*(undefined4 *)(iVar3 + 0x15d) >> 0x10),uVar2);
    iVar4 = FUN_10d8_7978(iVar4,uVar6);
    iVar4 = (uint)*(byte *)(iVar3 + 0x155) + iVar4;
    FUN_10f8_7426(iVar3,uVar5,iVar4,iVar4 >> 0xf);
    FUN_10c8_1f11(iVar3,uVar5);
    return;
  }
  FUN_10f8_7426(iVar3,uVar5,*(byte *)(iVar3 + 0x155) + 1,0);
  return;
}



/* ---- FUN_10c8_21f5 @ 10c8:21f5  (110 octets) ---- */

undefined __stdcall16far FUN_10c8_21f5(undefined4 *param_1)

{
  undefined2 *puVar1;
  char cVar2;
  undefined4 *puVar3;
  undefined2 uVar4;
  undefined local_3;
  
  local_3 = 1;
  uVar4 = (undefined2)((ulong)param_1 >> 0x10);
  puVar3 = (undefined4 *)param_1;
  if (((*(char *)((int)puVar3 + 0x27a) != '\0') &&
      (cVar2 = FUN_1138_61c4(puVar3,uVar4), cVar2 != '\0')) && ((*(byte *)(puVar3 + 6) & 0x10) == 0)
     ) {
    puVar1 = (undefined2 *)((int)*param_1 + 0x78);
    (*(code *)*puVar1)(0x1138,puVar3,uVar4);
    cVar2 = FUN_1138_6258(puVar3,uVar4);
    if ((cVar2 == '\0') &&
       ((*(int *)((int)puVar3 + 0x12f) == 0 && *(int *)((int)puVar3 + 0x131) == 0 ||
        (cVar2 = FUN_1138_6258((int)*(undefined4 *)((int)puVar3 + 0x12f),
                               (int)((ulong)*(undefined4 *)((int)puVar3 + 0x12f) >> 0x10)),
        cVar2 == '\0')))) {
      local_3 = 0;
    }
    else {
      local_3 = 1;
    }
  }
  return local_3;
}



/* ---- FUN_10c8_238f @ 10c8:238f  (36 octets) ---- */

void __stdcall16far FUN_10c8_238f(undefined4 *param_1,undefined2 param_2,undefined2 param_3)

{
  undefined2 *puVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  FUN_10f8_7c8d((undefined4 *)param_1,uVar2,param_2,param_3);
  puVar1 = (undefined2 *)((int)*param_1 + 0x90);
  (*(code *)*puVar1)(0x10f8,(undefined4 *)param_1,uVar2);
  return;
}



/* ---- FUN_10c8_23b3 @ 10c8:23b3  (205 octets) ---- */

void __stdcall16far FUN_10c8_23b3(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  undefined2 uVar3;
  uint local_a;
  uint local_8;
  uint local_6;
  uint local_4;
  
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  iVar2 = (int)param_1;
  FUN_10f8_7cea(iVar2,uVar3,(int)param_2,param_2._2_2_);
  if (*(int *)((int)param_2 + 8) == 0 && *(int *)((int)param_2 + 10) == 0) {
    FUN_10f8_2844(iVar2,uVar3,*(undefined2 *)((int)param_2 + 6),*(undefined2 *)((int)param_2 + 4));
    if ((0 < (int)local_8) || ((local_8 < 0x8000 && (*(byte *)(iVar2 + 0x156) <= local_a)))) {
      if ((0x7fff < local_4) || (((int)local_4 < 1 && (local_6 < *(byte *)(iVar2 + 0x155))))) {
        *(undefined2 *)((int)param_2 + 8) = 1;
        *(undefined2 *)((int)param_2 + 10) = 0;
      }
    }
  }
  if ((*(int *)((int)param_2 + 10) == 0) && (*(int *)((int)param_2 + 8) == 1)) {
    if ((*(int *)(iVar2 + 0x15d) != 0 || *(int *)(iVar2 + 0x15f) != 0) &&
       ((cVar1 = FUN_10c8_0960((int)*(undefined4 *)(iVar2 + 0x15d),
                               (int)((ulong)*(undefined4 *)(iVar2 + 0x15d) >> 0x10)), cVar1 == '\0'
        && (*(char *)((int)*(undefined4 *)(iVar2 + 0x15d) + 0x11) != '\0')))) {
      return;
    }
    *(undefined2 *)((int)param_2 + 8) = 0;
    *(undefined2 *)((int)param_2 + 10) = 0;
  }
  return;
}



/* ---- FUN_10c8_2480 @ 10c8:2480  (96 octets) ---- */

void __stdcall16far FUN_10c8_2480(undefined4 param_1,undefined2 param_2,undefined2 param_3)

{
  char cVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 unaff_CS;
  undefined2 uVar4;
  
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  iVar2 = (int)param_1;
  if ((*(byte *)(iVar2 + 0x18) & 0x10) == 0) {
LAB_10c8_24cc:
    FUN_10f8_7aaa(iVar2,uVar3,param_2,param_3);
  }
  else {
    if (*(int *)(iVar2 + 0x15d) != 0 || *(int *)(iVar2 + 0x15f) != 0) {
      unaff_CS = 0x10c8;
      cVar1 = FUN_10c8_0960((int)*(undefined4 *)(iVar2 + 0x15d),
                            (int)((ulong)*(undefined4 *)(iVar2 + 0x15d) >> 0x10));
      if ((cVar1 == '\0') && (*(char *)((int)*(undefined4 *)(iVar2 + 0x15d) + 0x11) != '\0'))
      goto LAB_10c8_24cc;
    }
    uVar4 = 0;
    uVar3 = LOADCURSOR(unaff_CS,0x7f00,0);
    SETCURSOR(0x14d0,uVar3,uVar4);
  }
  return;
}



/* ---- FUN_10c8_24e0 @ 10c8:24e0  (41 octets) ---- */

void __stdcall16far FUN_10c8_24e0(undefined4 param_1,undefined2 param_2,undefined2 param_3)

{
  int iVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  FUN_10f8_7be8(iVar1,uVar2,param_2,param_3);
  if (*(char *)(iVar1 + 0x157) == '\0') {
    FUN_10c8_211e(iVar1,uVar2);
  }
  return;
}



/* ---- FUN_10c8_267f @ 10c8:267f  (48 octets) ---- */

undefined __stdcall16far FUN_10c8_267f(undefined4 param_1,byte param_2)

{
  char cVar1;
  undefined uVar2;
  undefined2 uVar3;
  
  if ((param_2 & 1) == 0) {
LAB_10c8_269f:
    uVar2 = 0;
  }
  else {
    uVar3 = (undefined2)((ulong)param_1 >> 0x10);
    if ((*(byte *)((int)param_1 + 0x154) & 2) == 0) {
      cVar1 = FUN_1138_6258((int)param_1,uVar3);
      if (cVar1 == '\0') goto LAB_10c8_269f;
    }
    uVar2 = 1;
  }
  return uVar2;
}



/* ---- FUN_10c8_271b @ 10c8:271b  (57 octets) ---- */

void FUN_10c8_271b(int param_1,char param_2,undefined4 param_3)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 unaff_SS;
  
  uVar2 = (undefined2)((ulong)*(undefined4 *)(param_1 + 6) >> 0x10);
  iVar1 = (int)*(undefined4 *)(param_1 + 6);
  FUN_10c8_0cf8(*(undefined2 *)(param_2 * 2 + 0xa12),(int)param_3,(int)((ulong)param_3 >> 0x10),2,2,
                param_1 + -8,unaff_SS,*(undefined2 *)(iVar1 + 0xd8),*(undefined2 *)(iVar1 + 0xda));
  return;
}



/* ---- FUN_10c8_2b86 @ 10c8:2b86  (223 octets) ---- */

void __stdcall16far FUN_10c8_2b86(undefined4 param_1,int param_2)

{
  undefined2 *puVar1;
  int iVar2;
  int iVar3;
  undefined2 uVar4;
  int iStack_10;
  
  uVar4 = (undefined2)((ulong)param_1 >> 0x10);
  iVar3 = (int)param_1;
  puVar1 = (undefined2 *)((int)*(undefined4 *)*(undefined4 *)(iVar3 + 0x15d) + 0x2c);
  (*(code *)*puVar1)();
  iStack_10 = 0x2ba5;
  iVar2 = FUN_10c8_1919();
  if (iVar2 <= param_2) {
    iStack_10 = 0x2bb4;
    param_2 = FUN_10c8_1919();
    param_2 = param_2 + -1;
  }
  if (param_2 < 0) {
    param_2 = 0;
  }
  if (param_2 != *(int *)(iVar3 + 0xf2) - (uint)*(byte *)(iVar3 + 0x156)) {
    if (*(char *)(iVar3 + 0x158) == '\0') {
      *(undefined *)(iVar3 + 0x158) = 1;
      iStack_10 = (int)DAT_1160_1858;
      DAT_1160_1858 = &iStack_10;
      iVar2 = iVar3;
      FUN_1158_206a(0x10c8,iVar3,uVar4);
      DAT_1160_1858 = (int *)iVar2;
      *(undefined *)(iVar3 + 0x158) = 0;
      return;
    }
    if ((*(byte *)(iVar3 + 0x153) & 2) == 0) {
      iStack_10 = 0x2c6d;
      FUN_10f8_2532();
    }
    iStack_10 = iVar3;
    FUN_10f8_6fe1();
    iStack_10 = 0x2c91;
    FUN_1158_206a();
  }
  return;
}



/* ---- FUN_10c8_2c95 @ 10c8:2c95  (146 octets) ---- */

void FUN_10c8_2c95(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 unaff_SS;
  undefined4 uVar4;
  
  uVar4 = *(undefined4 *)((int)*(undefined4 *)(param_1 + 6) + 0x15d);
  uVar4 = FUN_10d8_76fa((int)uVar4,(int)((ulong)uVar4 >> 0x10));
  uVar3 = (undefined2)((ulong)uVar4 >> 0x10);
  iVar2 = (int)uVar4;
  if (((*(char *)(iVar2 + 0x3a) == '\x03') && (*(char *)(iVar2 + 0x3e) == '\0')) &&
     (uVar1 = *(undefined4 *)((int)*(undefined4 *)(param_1 + 6) + 0x15d),
     *(char *)((int)uVar1 + 0x1c) == '\0')) {
    if (*(char *)(iVar2 + 0x39) != '\0') {
      return;
    }
    FUN_10d8_558b(uVar4);
  }
  else {
    FUN_10d8_4eec(uVar4);
  }
  if (((*(char *)(iVar2 + 0x39) != '\0') && (*(char *)(iVar2 + 0x3d) != '\0')) &&
     ((*(byte *)((int)*(undefined4 *)(param_1 + 6) + 0x153) & 1) != 0)) {
    FUN_10d8_5049(uVar4);
  }
  return;
}



/* ---- FUN_10c8_2d29 @ 10c8:2d29  (99 octets) ---- */

void FUN_10c8_2d29(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 unaff_SS;
  undefined4 uVar4;
  
  uVar4 = *(undefined4 *)((int)*(undefined4 *)(param_1 + 6) + 0x15d);
  uVar4 = FUN_10d8_76fa((int)uVar4,(int)((ulong)uVar4 >> 0x10));
  uVar3 = (undefined2)((ulong)uVar4 >> 0x10);
  iVar2 = (int)uVar4;
  if ((((*(char *)(iVar2 + 0x3a) == '\x03') && (*(char *)(iVar2 + 0x3e) == '\0')) &&
      (*(char *)(iVar2 + 0x39) != '\0')) &&
     (uVar1 = *(undefined4 *)((int)*(undefined4 *)(param_1 + 6) + 0x15d),
     *(char *)((int)uVar1 + 0x1c) == '\0')) {
    FUN_10d8_558b(uVar4);
  }
  else {
    FUN_10d8_4eff(uVar4);
  }
  return;
}



/* ---- FUN_10c8_2d8c @ 10c8:2d8c  (172 octets) ---- */

void FUN_10c8_2d8c(int param_1,char param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined2 uVar5;
  undefined2 unaff_SS;
  int local_4;
  
  iVar2 = FUN_10c8_19da((int)*(undefined4 *)(param_1 + 6),
                        (int)((ulong)*(undefined4 *)(param_1 + 6) >> 0x10));
  local_4 = iVar2;
  while( true ) {
    if (param_2 == '\0') {
      local_4 = local_4 + -1;
    }
    else {
      local_4 = local_4 + 1;
    }
    iVar3 = FUN_10c8_1919((int)*(undefined4 *)(param_1 + 6),
                          (int)((ulong)*(undefined4 *)(param_1 + 6) >> 0x10));
    if (local_4 < iVar3) {
      if (local_4 < 0) {
        FUN_10c8_2d29(param_1);
        local_4 = FUN_10c8_1919((int)*(undefined4 *)(param_1 + 6),
                                (int)((ulong)*(undefined4 *)(param_1 + 6) >> 0x10));
        local_4 = local_4 + -1;
      }
    }
    else {
      FUN_10c8_2c95(param_1);
      local_4 = 0;
    }
    if (local_4 == iVar2) break;
    uVar5 = (undefined2)((ulong)*(undefined4 *)(param_1 + 6) >> 0x10);
    iVar4 = (int)*(undefined4 *)(param_1 + 6);
    iVar3 = (uint)*(byte *)(iVar4 + 0x156) + local_4;
    cVar1 = FUN_10f8_6f14(iVar4,uVar5,iVar3,iVar3 >> 0xf);
    if (cVar1 != '\0') {
      FUN_10c8_2b86((int)*(undefined4 *)(param_1 + 6),
                    (int)((ulong)*(undefined4 *)(param_1 + 6) >> 0x10),local_4);
      return;
    }
  }
  return;
}



/* ---- FUN_10c8_3195 @ 10c8:3195  (59 octets) ---- */

void __stdcall16far FUN_10c8_3195(undefined4 param_1,char *param_2)

{
  undefined2 *puVar1;
  int iVar2;
  undefined2 uVar3;
  
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  iVar2 = (int)param_1;
  if (((*(byte *)(iVar2 + 0x153) & 2) == 0) && (*param_2 == '\r')) {
    puVar1 = (undefined2 *)((int)*(undefined4 *)*(undefined4 *)(iVar2 + 0x15d) + 0x2c);
    (*(code *)*puVar1)();
  }
  FUN_10f8_63b6(iVar2,uVar3,(char *)param_2,(int)((ulong)param_2 >> 0x10));
  return;
}



/* ---- FUN_10c8_31d0 @ 10c8:31d0  (415 octets) ---- */

void __stdcall16far
FUN_10c8_31d0(undefined4 param_1,undefined2 param_2,undefined2 param_3,byte param_4,char param_5)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined2 uVar4;
  undefined2 unaff_SS;
  undefined4 uVar5;
  undefined *puVar6;
  undefined2 uVar7;
  undefined local_12 [8];
  uint local_a;
  uint local_8;
  uint local_6;
  uint local_4;
  
  uVar4 = (undefined2)((ulong)param_1 >> 0x10);
  iVar3 = (int)param_1;
  cVar1 = FUN_10c8_21f5(iVar3,uVar4);
  if (cVar1 != '\0') {
    if (((param_4 & 0x40) == 0) || (param_5 != '\0')) {
      cVar1 = FUN_10f8_2897(iVar3,uVar4,param_2,param_3);
      if (cVar1 == '\0') {
        puVar6 = local_12;
        uVar7 = unaff_SS;
        FUN_10f8_2844(iVar3,uVar4,param_2,param_3);
        FUN_1158_161b(8,&local_a,unaff_SS,puVar6,uVar7);
        if (((*(byte *)(iVar3 + 0x18) & 0x10) != 0) || ((*(byte *)(iVar3 + 0x153) & 0x10) != 0)) {
          if ((0x7fff < local_4) || (((int)local_4 < 1 && (local_6 < *(byte *)(iVar3 + 0x155))))) {
            FUN_10f8_640f(iVar3,uVar4,param_2,param_3,param_4,param_5);
            return;
          }
        }
        if (*(char *)((int)*(undefined4 *)(iVar3 + 0x15d) + 0x11) != '\0') {
          if ((((local_8 == *(uint *)(iVar3 + 0xf4)) && (local_a == *(uint *)(iVar3 + 0xf2))) &&
              (local_4 == *(uint *)(iVar3 + 0xf8))) && (local_6 == *(uint *)(iVar3 + 0xf6))) {
            FUN_10f8_2549(iVar3,uVar4);
          }
          if ((0 < (int)local_8) || ((local_8 < 0x8000 && (*(byte *)(iVar3 + 0x156) <= local_a)))) {
            FUN_10c8_2b86(iVar3,uVar4,local_a - *(byte *)(iVar3 + 0x156));
          }
          if (((0 < (int)local_4) || ((local_4 < 0x8000 && (*(byte *)(iVar3 + 0x155) <= local_6))))
             && (local_6 != *(uint *)(iVar3 + 0xf6) ||
                 local_4 - *(int *)(iVar3 + 0xf8) != (uint)(local_6 < *(uint *)(iVar3 + 0xf6)))) {
            iVar2 = local_6 - *(int *)(iVar3 + 0xf6);
            uVar5 = FUN_10d8_76fa((int)*(undefined4 *)(iVar3 + 0x15d),
                                  (int)((ulong)*(undefined4 *)(iVar3 + 0x15d) >> 0x10));
            FUN_10d8_4dc7(uVar5,iVar2);
          }
        }
      }
      else {
        FUN_10f8_640f(iVar3,uVar4,param_2,param_3,param_4,param_5);
      }
    }
    else {
      FUN_1158_206a(0x10c8,iVar3,uVar4);
    }
  }
  return;
}



/* ---- FUN_10c8_336f @ 10c8:336f  (40 octets) ---- */

void __stdcall16far FUN_10c8_336f(undefined4 param_1)

{
  undefined2 *puVar1;
  
  if (*(int *)((int)param_1 + 0x163) != 0) {
    puVar1 = (undefined2 *)((int)param_1 + 0x161);
    (*(code *)*puVar1)();
  }
  return;
}



/* ---- FUN_10c8_3397 @ 10c8:3397  (40 octets) ---- */

void __stdcall16far FUN_10c8_3397(undefined4 param_1)

{
  undefined2 *puVar1;
  
  if (*(int *)((int)param_1 + 0x16b) != 0) {
    puVar1 = (undefined2 *)((int)param_1 + 0x169);
    (*(code *)*puVar1)();
  }
  return;
}



/* ---- FUN_10c8_33bf @ 10c8:33bf  (127 octets) ---- */

void __stdcall16far FUN_10c8_33bf(undefined4 param_1,int param_2,undefined2 param_3,int param_4)

{
  int iVar1;
  undefined2 uVar2;
  int iVar3;
  undefined2 uVar4;
  undefined4 uVar5;
  
  uVar4 = (undefined2)((ulong)param_1 >> 0x10);
  iVar3 = (int)param_1;
  if (*(char *)((int)*(undefined4 *)(iVar3 + 0x15d) + 0x11) != '\0') {
    iVar1 = FUN_10c8_1919(iVar3,uVar4);
    if (0 < iVar1) {
      uVar5 = FUN_10c8_1933(iVar3,uVar4,param_2 - (uint)*(byte *)(iVar3 + 0x156));
      uVar2 = FUN_10d8_693c(uVar5);
      uVar5 = FUN_10c8_1933(iVar3,uVar4,param_4 - (uint)*(byte *)(iVar3 + 0x156));
      FUN_10d8_7022(uVar5,uVar2);
    }
  }
  return;
}



/* ---- FUN_10c8_343e @ 10c8:343e  (79 octets) ---- */

void __stdcall16far
FUN_10c8_343e(undefined4 param_1,char param_2,undefined2 param_3,undefined2 param_4)

{
  int iVar1;
  undefined2 uVar2;
  long lVar3;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  FUN_1138_1632(iVar1,uVar2,param_2,param_3,param_4);
  if (((param_2 == '\x01') && (*(int *)(iVar1 + 0x15d) != 0 || *(int *)(iVar1 + 0x15f) != 0)) &&
     (lVar3 = FUN_10c8_1658(iVar1,uVar2), lVar3 == CONCAT22(param_4,param_3))) {
    FUN_10c8_1959(iVar1,uVar2,0,0);
  }
  return;
}



/* ---- FUN_10c8_348d @ 10c8:348d  (158 octets) ---- */

void __stdcall16far FUN_10c8_348d(undefined4 param_1,byte param_2)

{
  undefined2 in_AX;
  int iVar1;
  undefined extraout_AH;
  int iVar2;
  undefined extraout_AH_00;
  undefined uVar3;
  int iVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  undefined4 uVar8;
  
  uVar3 = (undefined)((uint)in_AX >> 8);
  uVar6 = (undefined2)((ulong)param_1 >> 0x10);
  iVar4 = (int)param_1;
  if (*(char *)((int)*(undefined4 *)(iVar4 + 0x15d) + 0x11) != '\0') {
    uVar7 = (undefined2)((ulong)*(undefined4 *)(iVar4 + 0x15d) >> 0x10);
    uVar5 = (undefined2)*(undefined4 *)(iVar4 + 0x15d);
    if ((param_2 & 4) != 0) {
      iVar1 = FUN_10d8_78cd(uVar5,uVar7);
      iVar1 = -1 - iVar1;
      uVar8 = FUN_10d8_76fa(uVar5,uVar7);
      FUN_10d8_4dc7(uVar8,iVar1);
      param_2 = param_2 & 0xfb;
      uVar3 = extraout_AH;
    }
    if ((param_2 & 8) != 0) {
      iVar1 = FUN_10d8_78cd(uVar5,uVar7);
      iVar2 = FUN_10d8_7978(uVar5,uVar7);
      iVar2 = iVar2 - iVar1;
      uVar8 = FUN_10d8_76fa(uVar5,uVar7);
      FUN_10d8_4dc7(uVar8,iVar2);
      param_2 = param_2 & 0xf7;
      uVar3 = extraout_AH_00;
    }
    if (param_2 != 0) {
      FUN_10f8_7d4d(iVar4,uVar6,CONCAT11(uVar3,param_2));
    }
  }
  return;
}



/* ---- FUN_10c8_3683 @ 10c8:3683  (30 octets) ---- */

void __stdcall16far FUN_10c8_3683(undefined4 *param_1)

{
  undefined2 *puVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  FUN_1148_4ff4((undefined4 *)param_1,uVar2);
  puVar1 = (undefined2 *)((int)*param_1 + 0x90);
  (*(code *)*puVar1)(0x1148,(undefined4 *)param_1,uVar2);
  return;
}



/* ---- FUN_10c8_36a1 @ 10c8:36a1  (183 octets) ---- */

void __stdcall16far FUN_10c8_36a1(undefined4 *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  undefined2 *puVar3;
  undefined4 *puVar4;
  undefined2 uVar5;
  uint local_4;
  
  uVar5 = (undefined2)((ulong)param_1 >> 0x10);
  puVar4 = (undefined4 *)param_1;
  if (*(uint *)((int)puVar4 + 0x153) != param_2) {
    local_4 = 0;
    if ((param_2 & 0x20) != 0) {
      local_4 = 5;
    }
    if ((param_2 & 0x40) != 0) {
      local_4 = local_4 | 10;
    }
    if ((param_2 & 0x10) != 0) {
      local_4 = local_4 | 0x280;
    }
    if ((param_2 & 0x80) != 0) {
      local_4 = local_4 | 0x800;
    }
    if ((param_2 & 0x100) != 0) {
      local_4 = local_4 | 0x1000;
    }
    if ((param_2 & 1) != 0) {
      local_4 = local_4 | 0x400;
    }
    if ((param_2 & 2) != 0) {
      local_4 = local_4 | 0x2000;
    }
    FUN_10f8_737d(puVar4,uVar5,local_4);
    uVar1 = *(uint *)((int)puVar4 + 0x153);
    uVar2 = *(uint *)((int)puVar4 + 0x153);
    *(uint *)((int)puVar4 + 0x153) = param_2;
    if (((uVar2 | param_2) & ~(uVar1 & param_2) & 0x36f) != 0) {
      puVar3 = (undefined2 *)((int)*param_1 + 0x90);
      (*(code *)*puVar3)(0x10f8,puVar4,uVar5);
    }
  }
  return;
}



/* ---- FUN_10c8_3758 @ 10c8:3758  (43 octets) ---- */

void __stdcall16far FUN_10c8_3758(undefined4 *param_1)

{
  undefined2 *puVar1;
  
  puVar1 = (undefined2 *)
           ((int)*(undefined4 *)*(undefined4 *)((int)(undefined4 *)param_1 + 0x145) + 8);
  (*(code *)*puVar1)();
  puVar1 = (undefined2 *)((int)*param_1 + 0x90);
  (*(code *)*puVar1)();
  return;
}




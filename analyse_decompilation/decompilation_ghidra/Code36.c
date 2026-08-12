/* Simstrat (FR).EXE - segment Code36 - 66 fonctions
   Decompile par Ghidra 11.2.1 (x86 16 bits, chargeur NE). */

/* ---- FUN_1118_1805 @ 1118:1805  (229 octets) ---- */

void FUN_1118_1805(int param_1)

{
  int *piVar1;
  undefined2 uVar2;
  undefined2 unaff_SS;
  int local_1e;
  int local_1c;
  int local_1a;
  int local_18;
  int local_16;
  int local_14;
  int *local_12;
  int local_e;
  undefined2 local_c;
  int local_a;
  int local_8;
  int local_6;
  int local_4;
  
  local_c = (undefined2)((ulong)*(undefined4 *)(param_1 + 0x14) >> 0x10);
  local_e = (int)*(undefined4 *)(param_1 + 0x14);
  local_12 = (int *)*(undefined4 *)(param_1 + 0x10);
  uVar2 = (undefined2)((ulong)local_12 >> 0x10);
  piVar1 = (int *)local_12;
  local_6 = piVar1[2];
  local_4 = piVar1[1];
  local_a = *local_12;
  local_8 = piVar1[3];
  FUN_1128_13da((int)*(undefined4 *)(local_e + 0xb),
                (int)((ulong)*(undefined4 *)(local_e + 0xb) >> 0x10),*(undefined2 *)(param_1 + 0xc),
                *(undefined2 *)(param_1 + 0xe));
  local_1e = local_a;
  local_1c = local_8;
  local_1a = *local_12;
  local_18 = ((int *)local_12)[1];
  local_16 = local_6;
  local_14 = local_4;
  FUN_1128_1de1(local_e,local_c,2,&local_1e,unaff_SS);
  FUN_1128_13da((int)*(undefined4 *)(local_e + 0xb),
                (int)((ulong)*(undefined4 *)(local_e + 0xb) >> 0x10),*(undefined2 *)(param_1 + 8),
                *(undefined2 *)(param_1 + 10));
  local_16 = local_a + -1;
  local_1e = local_6;
  local_1c = local_4;
  uVar2 = (undefined2)((ulong)local_12 >> 0x10);
  local_1a = ((int *)local_12)[2];
  local_18 = ((int *)local_12)[3];
  local_14 = local_8;
  local_a = local_16;
  FUN_1128_1de1(local_e,local_c,2,&local_1e,unaff_SS);
  return;
}



/* ---- FUN_1118_18ea @ 1118:18ea  (74 octets) ---- */

void __stdcall16far FUN_1118_18ea(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined4 param_2;
  undefined4 param_3;
  
  uVar1 = *(undefined4 *)((int)param_3 + 0xb);
  FUN_1128_14f5((int)uVar1,(int)((ulong)uVar1 >> 0x10),1);
  uVar3 = (undefined2)((ulong)param_2 >> 0x10);
  iVar2 = (int)param_2;
  *(int *)(iVar2 + 6) = *(int *)(iVar2 + 6) + -1;
  *(int *)(iVar2 + 4) = *(int *)(iVar2 + 4) + -1;
  uVar4 = 0x1128;
  while (0 < param_1) {
    param_1 = param_1 + -1;
    FUN_1118_1805(&stack0xfffe);
    INFLATERECT(uVar4,0xffff,0xffff,iVar2);
    uVar4 = 0x14d0;
  }
  *(int *)(iVar2 + 6) = *(int *)(iVar2 + 6) + 1;
  *(int *)(iVar2 + 4) = *(int *)(iVar2 + 4) + 1;
  return;
}



/* ---- FUN_1118_1934 @ 1118:1934  (199 octets) ---- */

undefined4 __stdcall16far
FUN_1118_1934(undefined4 param_1,char param_2,undefined2 param_3,undefined2 param_4)

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
  FUN_1138_6886(iVar1,uVar3,0,param_3,param_4);
  FUN_1138_17bf(iVar1,uVar3,0x41);
  FUN_1138_17e1(iVar1,uVar3,0x41);
  uVar5 = FUN_1128_12a4(0x411,0x1128,CONCAT11(extraout_AH,1));
  *(undefined2 *)(iVar1 + 0x90) = (int)uVar5;
  *(undefined2 *)(iVar1 + 0x92) = (int)((ulong)uVar5 >> 0x10);
  uVar4 = (undefined2)((ulong)*(undefined4 *)(iVar1 + 0x90) >> 0x10);
  iVar2 = (int)*(undefined4 *)(iVar1 + 0x90);
  *(undefined2 *)(iVar2 + 4) = 0x1bbb;
  *(undefined2 *)(iVar2 + 6) = 0x1118;
  *(int *)(iVar2 + 8) = iVar1;
  *(undefined2 *)(iVar2 + 10) = uVar3;
  uVar5 = FUN_1128_1527(0x4d4,0x1128,0x1b01);
  *(undefined2 *)(iVar1 + 0x94) = (int)uVar5;
  *(undefined2 *)(iVar1 + 0x96) = (int)((ulong)uVar5 >> 0x10);
  uVar4 = (undefined2)((ulong)*(undefined4 *)(iVar1 + 0x94) >> 0x10);
  iVar2 = (int)*(undefined4 *)(iVar1 + 0x94);
  *(undefined2 *)(iVar2 + 4) = 0x1bbb;
  *(undefined2 *)(iVar2 + 6) = 0x1118;
  *(int *)(iVar2 + 8) = iVar1;
  *(undefined2 *)(iVar2 + 10) = uVar3;
  if (param_2 != '\0') {
    DAT_1160_1858 = uStack_a;
  }
  return param_1;
}



/* ---- FUN_1118_19fb @ 1118:19fb  (61 octets) ---- */

void __stdcall16far FUN_1118_19fb(undefined4 param_1,char param_2)

{
  int iVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  FUN_1158_1f7f((int)*(undefined4 *)(iVar1 + 0x90),
                (int)((ulong)*(undefined4 *)(iVar1 + 0x90) >> 0x10));
  FUN_1158_1f7f((int)*(undefined4 *)(iVar1 + 0x94),
                (int)((ulong)*(undefined4 *)(iVar1 + 0x94) >> 0x10));
  FUN_1138_68f0(iVar1,uVar2,0);
  if (param_2 != '\0') {
    FUN_1158_200f();
  }
  return;
}



/* ---- FUN_1118_1bbb @ 1118:1bbb  (19 octets) ---- */

void __stdcall16far FUN_1118_1bbb(undefined4 *param_1)

{
  undefined2 *puVar1;
  
  puVar1 = (undefined2 *)((int)*param_1 + 0x44);
  (*(code *)*puVar1)();
  return;
}



/* ---- FUN_1118_1bce @ 1118:1bce  (30 octets) ---- */

void __stdcall16far FUN_1118_1bce(undefined4 param_1)

{
  undefined2 *puVar1;
  
  puVar1 = (undefined2 *)((int)*(undefined4 *)*(undefined4 *)((int)param_1 + 0x94) + 8);
  (*(code *)*puVar1)();
  return;
}



/* ---- FUN_1118_1bec @ 1118:1bec  (30 octets) ---- */

void __stdcall16far FUN_1118_1bec(undefined4 param_1)

{
  undefined2 *puVar1;
  
  puVar1 = (undefined2 *)((int)*(undefined4 *)*(undefined4 *)((int)param_1 + 0x90) + 8);
  (*(code *)*puVar1)();
  return;
}



/* ---- FUN_1118_1c0a @ 1118:1c0a  (37 octets) ---- */

void __stdcall16far FUN_1118_1c0a(undefined4 *param_1,char param_2)

{
  undefined2 *puVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  if (*(char *)((int)(undefined4 *)param_1 + 0x8e) != param_2) {
    *(char *)((int)(undefined4 *)param_1 + 0x8e) = param_2;
    puVar1 = (undefined2 *)((int)*param_1 + 0x44);
    (*(code *)*puVar1)();
  }
  return;
}



/* ---- FUN_1118_1c2f @ 1118:1c2f  (83 octets) ---- */

undefined4 __stdcall16far
FUN_1118_1c2f(undefined4 param_1,char param_2,undefined2 param_3,undefined2 param_4)

{
  undefined2 uVar1;
  undefined2 uVar2;
  undefined2 uStack_a;
  
  if (param_2 != '\0') {
    FUN_1158_1fe2();
  }
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  uVar1 = (undefined2)param_1;
  FUN_1138_6886(uVar1,uVar2,0,param_3,param_4);
  FUN_1138_17bf(uVar1,uVar2,0x69);
  FUN_1138_17e1(uVar1,uVar2,0x69);
  if (param_2 != '\0') {
    DAT_1160_1858 = uStack_a;
  }
  return param_1;
}



/* ---- FUN_1118_1c82 @ 1118:1c82  (166 octets) ---- */

void __stdcall16far FUN_1118_1c82(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  
  uVar4 = (undefined2)((ulong)param_1 >> 0x10);
  iVar2 = (int)param_1;
  FUN_1128_2099((int)*(undefined4 *)(iVar2 + 0x8a),
                (int)((ulong)*(undefined4 *)(iVar2 + 0x8a) >> 0x10),*(undefined2 *)(iVar2 + 0x34),
                *(undefined2 *)(iVar2 + 0x36));
  uVar1 = *(undefined4 *)((int)*(undefined4 *)(iVar2 + 0x8a) + 0xf);
  FUN_1128_1684((int)uVar1,(int)((ulong)uVar1 >> 0x10),*(undefined2 *)(iVar2 + 0x38),
                *(undefined2 *)(iVar2 + 0x3a));
  if ((*(byte *)(iVar2 + 0x18) & 0x10) != 0) {
    uVar5 = (undefined2)((ulong)*(undefined4 *)(iVar2 + 0x8a) >> 0x10);
    iVar3 = (int)*(undefined4 *)(iVar2 + 0x8a);
    FUN_1128_14b0((int)*(undefined4 *)(iVar3 + 0xb),
                  (int)((ulong)*(undefined4 *)(iVar3 + 0xb) >> 0x10),1);
    FUN_1128_177c((int)*(undefined4 *)(iVar3 + 0xf),
                  (int)((ulong)*(undefined4 *)(iVar3 + 0xf) >> 0x10),1);
    FUN_1128_1e22(iVar3,uVar5,*(undefined2 *)(iVar2 + 0x24),*(undefined2 *)(iVar2 + 0x22),0,0);
  }
  if (*(int *)(iVar2 + 0x90) != 0) {
    (*(code *)*(undefined2 *)(iVar2 + 0x8e))
              (0x1128,*(undefined2 *)(iVar2 + 0x92),*(undefined2 *)(iVar2 + 0x94),iVar2,uVar4);
  }
  return;
}



/* ---- FUN_1118_1d28 @ 1118:1d28  (141 octets) ---- */

undefined4 __stdcall16far
FUN_1118_1d28(undefined4 param_1,char param_2,undefined2 param_3,undefined2 param_4)

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
  FUN_1138_6886(iVar1,uVar3,0,param_3,param_4);
  uVar5 = FUN_1158_1f50(0x6c6,0x1128,CONCAT11(extraout_AH,1));
  *(undefined2 *)(iVar1 + 0x8e) = (int)uVar5;
  *(undefined2 *)(iVar1 + 0x90) = (int)((ulong)uVar5 >> 0x10);
  uVar4 = (undefined2)((ulong)*(undefined4 *)(iVar1 + 0x8e) >> 0x10);
  iVar2 = (int)*(undefined4 *)(iVar1 + 0x8e);
  *(undefined2 *)(iVar2 + 8) = 0x2108;
  *(undefined2 *)(iVar2 + 10) = 0x1118;
  *(int *)(iVar2 + 0xc) = iVar1;
  *(undefined2 *)(iVar2 + 0xe) = uVar3;
  FUN_1138_17e1(iVar1,uVar3,0x69);
  FUN_1138_17bf(iVar1,uVar3,0x69);
  if (param_2 != '\0') {
    DAT_1160_1858 = uStack_a;
  }
  return param_1;
}



/* ---- FUN_1118_1db5 @ 1118:1db5  (46 octets) ---- */

void __stdcall16far FUN_1118_1db5(undefined4 param_1,char param_2)

{
  undefined4 uVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  uVar1 = *(undefined4 *)((int)param_1 + 0x8e);
  FUN_1158_1f7f((int)uVar1,(int)((ulong)uVar1 >> 0x10));
  FUN_1138_68f0((int)param_1,uVar2,0);
  if (param_2 != '\0') {
    FUN_1158_200f();
  }
  return;
}



/* ---- FUN_1118_1de3 @ 1118:1de3  (71 octets) ---- */

undefined2 __stdcall16far FUN_1118_1de3(undefined4 param_1)

{
  undefined4 uVar1;
  char cVar2;
  int iVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined2 local_4;
  
  local_4 = 0;
  uVar4 = (undefined2)((ulong)param_1 >> 0x10);
  uVar1 = *(undefined4 *)((int)param_1 + 0x8e);
  uVar5 = (undefined2)((ulong)uVar1 >> 0x10);
  iVar3 = (int)uVar1;
  cVar2 = FUN_1158_2255(0x83f,0x1128,*(undefined2 *)(iVar3 + 4),*(undefined2 *)(iVar3 + 6));
  if (cVar2 != '\0') {
    uVar1 = *(undefined4 *)((int)param_1 + 0x8e);
    uVar1 = *(undefined4 *)((int)uVar1 + 4);
    local_4 = FUN_1128_5b0d((int)uVar1,(int)((ulong)uVar1 >> 0x10));
  }
  return local_4;
}



/* ---- FUN_1118_1e2a @ 1118:1e2a  (356 octets) ---- */

void __stdcall16far FUN_1118_1e2a(undefined4 *param_1)

{
  undefined2 *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined2 uVar8;
  undefined2 uVar9;
  undefined2 unaff_CS;
  undefined2 unaff_SS;
  undefined2 uVar10;
  undefined2 uVar11;
  undefined *puVar12;
  undefined local_12 [4];
  undefined4 local_e;
  undefined local_a [8];
  
  uVar8 = (undefined2)((ulong)param_1 >> 0x10);
  puVar6 = (undefined4 *)param_1;
  if ((*(byte *)(puVar6 + 6) & 0x10) != 0) {
    local_e = *(undefined4 *)((int)puVar6 + 0x8a);
    uVar2 = *(undefined4 *)((int)local_e + 0xb);
    FUN_1128_14b0((int)uVar2,(int)((ulong)uVar2 >> 0x10),1);
    uVar2 = *(undefined4 *)((int)local_e + 0xf);
    FUN_1128_177c((int)uVar2,(int)((ulong)uVar2 >> 0x10),1);
    unaff_CS = 0x1128;
    FUN_1128_1e22((int)local_e,(int)((ulong)local_e >> 0x10),*(undefined2 *)(puVar6 + 9),
                  *(undefined2 *)((int)puVar6 + 0x22),0,0);
  }
  if (*(char *)((int)puVar6 + 0x93) == '\0') {
    if (*(char *)(puVar6 + 0x25) == '\0') {
      puVar12 = local_12;
      uVar11 = 0;
      uVar10 = 0;
      uVar9 = unaff_SS;
      uVar4 = FUN_1128_47c5((int)*(undefined4 *)((int)puVar6 + 0x8e),
                            (int)((ulong)*(undefined4 *)((int)puVar6 + 0x8e) >> 0x10));
      uVar5 = FUN_1128_47f2((int)*(undefined4 *)((int)puVar6 + 0x8e),
                            (int)((ulong)*(undefined4 *)((int)puVar6 + 0x8e) >> 0x10));
      FUN_1148_0688(uVar5,uVar4,uVar10,uVar11);
      FUN_1158_161b(8,local_a,unaff_SS,puVar12,uVar9);
    }
    else {
      puVar12 = local_12;
      uVar9 = unaff_SS;
      iVar7 = FUN_1128_47c5((int)*(undefined4 *)((int)puVar6 + 0x8e),
                            (int)((ulong)*(undefined4 *)((int)puVar6 + 0x8e) >> 0x10));
      iVar7 = (*(int *)((int)puVar6 + 0x22) - iVar7) / 2;
      iVar3 = FUN_1128_47f2((int)*(undefined4 *)((int)puVar6 + 0x8e),
                            (int)((ulong)*(undefined4 *)((int)puVar6 + 0x8e) >> 0x10));
      iVar3 = (*(int *)(puVar6 + 9) - iVar3) / 2;
      uVar4 = FUN_1128_47c5((int)*(undefined4 *)((int)puVar6 + 0x8e),
                            (int)((ulong)*(undefined4 *)((int)puVar6 + 0x8e) >> 0x10));
      uVar5 = FUN_1128_47f2((int)*(undefined4 *)((int)puVar6 + 0x8e),
                            (int)((ulong)*(undefined4 *)((int)puVar6 + 0x8e) >> 0x10));
      FUN_1148_06ae(uVar5,uVar4,iVar3,iVar7);
      FUN_1158_161b(8,local_a,unaff_SS,puVar12,uVar9);
    }
  }
  else {
    puVar12 = local_12;
    puVar1 = (undefined2 *)((int)*param_1 + 0x34);
    uVar9 = unaff_SS;
    (*(code *)*puVar1)(unaff_CS,puVar6,uVar8,puVar12);
    FUN_1158_161b(8,local_a,unaff_SS,puVar12,uVar9);
  }
  local_e = *(undefined4 *)((int)puVar6 + 0x8a);
  uVar9 = (undefined2)((ulong)*(undefined4 *)((int)puVar6 + 0x8e) >> 0x10);
  iVar7 = (int)*(undefined4 *)((int)puVar6 + 0x8e);
  FUN_1128_1ebf((int)local_e,(int)((ulong)local_e >> 0x10),*(undefined2 *)(iVar7 + 4),
                *(undefined2 *)(iVar7 + 6),local_a,unaff_SS);
  return;
}



/* ---- FUN_1118_1f94 @ 1118:1f94  (247 octets) ---- */

undefined2 __stdcall16far FUN_1118_1f94(undefined4 param_1)

{
  undefined2 *puVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined2 local_6;
  
  uVar5 = (undefined2)((ulong)param_1 >> 0x10);
  iVar3 = (int)param_1;
  uVar6 = (undefined2)((ulong)*(undefined4 *)(iVar3 + 0x8e) >> 0x10);
  iVar4 = (int)*(undefined4 *)(iVar3 + 0x8e);
  if (*(int *)(iVar4 + 4) == 0 && *(int *)(iVar4 + 6) == 0) {
    puVar7 = (undefined4 *)FUN_1128_56bd();
    puVar8 = (undefined4 *)puVar7;
    DAT_1160_1858 = (undefined4 *)&stack0xfeee;
    puVar1 = (undefined2 *)((int)*puVar7 + 0x28);
    (*(code *)*puVar1)(0x1128,puVar7,*(undefined2 *)(iVar3 + 0x22));
    puVar1 = (undefined2 *)((int)*puVar7 + 0x24);
    (*(code *)*puVar1)(0x1128,puVar7,*(undefined2 *)(iVar3 + 0x24));
    FUN_1128_42f9((int)*(undefined4 *)(iVar3 + 0x8e),
                  (int)((ulong)*(undefined4 *)(iVar3 + 0x8e) >> 0x10),puVar7);
    DAT_1160_1858 = puVar8;
    uVar5 = FUN_1158_1f7f(puVar7);
    return uVar5;
  }
  cVar2 = FUN_1158_2255();
  if (cVar2 == '\0') {
    FUN_1150_092b();
    FUN_1150_28e6(0x52);
    FUN_1158_1399();
  }
  else {
    local_6 = FUN_1128_5a0f();
  }
  return local_6;
}



/* ---- FUN_1118_208b @ 1118:208b  (31 octets) ---- */

void __stdcall16far FUN_1118_208b(undefined4 param_1,undefined param_2)

{
  int iVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  *(undefined *)(iVar1 + 0x92) = param_2;
  FUN_1118_2108(iVar1,uVar2,iVar1,uVar2);
  return;
}



/* ---- FUN_1118_20aa @ 1118:20aa  (37 octets) ---- */

void __stdcall16far FUN_1118_20aa(undefined4 *param_1,char param_2)

{
  undefined2 *puVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  if (*(char *)((undefined4 *)param_1 + 0x25) != param_2) {
    *(char *)((undefined4 *)param_1 + 0x25) = param_2;
    puVar1 = (undefined2 *)((int)*param_1 + 0x44);
    (*(code *)*puVar1)();
  }
  return;
}



/* ---- FUN_1118_20cf @ 1118:20cf  (30 octets) ---- */

void __stdcall16far FUN_1118_20cf(undefined4 param_1)

{
  undefined2 *puVar1;
  
  puVar1 = (undefined2 *)((int)*(undefined4 *)*(undefined4 *)((int)param_1 + 0x8e) + 8);
  (*(code *)*puVar1)();
  return;
}



/* ---- FUN_1118_20ed @ 1118:20ed  (27 octets) ---- */

void __stdcall16far FUN_1118_20ed(undefined4 *param_1,undefined param_2)

{
  undefined2 *puVar1;
  
  *(undefined *)((int)(undefined4 *)param_1 + 0x93) = param_2;
  puVar1 = (undefined2 *)((int)*param_1 + 0x44);
  (*(code *)*puVar1)();
  return;
}



/* ---- FUN_1118_2108 @ 1118:2108  (222 octets) ---- */

void __stdcall16far FUN_1118_2108(undefined4 *param_1)

{
  undefined2 *puVar1;
  char cVar2;
  int iVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined4 *puVar6;
  undefined2 uVar7;
  undefined2 uVar8;
  undefined2 uVar9;
  
  uVar7 = (undefined2)((ulong)param_1 >> 0x10);
  puVar6 = (undefined4 *)param_1;
  if (*(char *)((int)puVar6 + 0x92) != '\0') {
    iVar3 = FUN_1128_47c5((int)*(undefined4 *)((int)puVar6 + 0x8e),
                          (int)((ulong)*(undefined4 *)((int)puVar6 + 0x8e) >> 0x10));
    if (0 < iVar3) {
      iVar3 = FUN_1128_47f2((int)*(undefined4 *)((int)puVar6 + 0x8e),
                            (int)((ulong)*(undefined4 *)((int)puVar6 + 0x8e) >> 0x10));
      if (0 < iVar3) {
        uVar8 = *(undefined2 *)((int)puVar6 + 0x1e);
        uVar9 = *(undefined2 *)(puVar6 + 8);
        uVar4 = FUN_1128_47c5((int)*(undefined4 *)((int)puVar6 + 0x8e),
                              (int)((ulong)*(undefined4 *)((int)puVar6 + 0x8e) >> 0x10));
        uVar5 = FUN_1128_47f2((int)*(undefined4 *)((int)puVar6 + 0x8e),
                              (int)((ulong)*(undefined4 *)((int)puVar6 + 0x8e) >> 0x10));
        puVar1 = (undefined2 *)((int)*param_1 + 0x4c);
        (*(code *)*puVar1)(0x1128,puVar6,uVar7,uVar5,uVar4,uVar9,uVar8);
      }
    }
  }
  uVar8 = (undefined2)((ulong)*(undefined4 *)((int)puVar6 + 0x8e) >> 0x10);
  iVar3 = (int)*(undefined4 *)((int)puVar6 + 0x8e);
  uVar9 = 0x1158;
  cVar2 = FUN_1158_2255(0x83f,0x1128,*(undefined2 *)(iVar3 + 4),*(undefined2 *)(iVar3 + 6));
  if (cVar2 != '\0') {
    uVar9 = 0x1128;
    iVar3 = FUN_1128_47c5((int)*(undefined4 *)((int)puVar6 + 0x8e),
                          (int)((ulong)*(undefined4 *)((int)puVar6 + 0x8e) >> 0x10));
    if (iVar3 == *(int *)((int)puVar6 + 0x22)) {
      uVar9 = 0x1128;
      iVar3 = FUN_1128_47f2((int)*(undefined4 *)((int)puVar6 + 0x8e),
                            (int)((ulong)*(undefined4 *)((int)puVar6 + 0x8e) >> 0x10));
      if (iVar3 == *(int *)(puVar6 + 9)) {
        *(uint *)((int)puVar6 + 0x26) = *(uint *)((int)puVar6 + 0x26) | 0x40;
        goto LAB_1118_21d6;
      }
    }
  }
  *(uint *)((int)puVar6 + 0x26) = *(uint *)((int)puVar6 + 0x26) & 0xffbf;
LAB_1118_21d6:
  puVar1 = (undefined2 *)((int)*param_1 + 0x44);
  (*(code *)*puVar1)(uVar9,puVar6,uVar7);
  return;
}



/* ---- FUN_1118_21e6 @ 1118:21e6  (95 octets) ---- */

undefined4 __stdcall16far
FUN_1118_21e6(undefined4 param_1,char param_2,undefined2 param_3,undefined2 param_4)

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
  *(undefined *)(iVar1 + 0x8e) = 0;
  *(undefined *)(iVar1 + 0x8f) = 0;
  FUN_1138_17bf(iVar1,uVar2,0x32);
  FUN_1138_17e1(iVar1,uVar2,0x32);
  if (param_2 != '\0') {
    DAT_1160_1858 = uStack_a;
  }
  return param_1;
}



/* ---- FUN_1118_2245 @ 1118:2245  (37 octets) ---- */

void __stdcall16far FUN_1118_2245(undefined4 *param_1,char param_2)

{
  undefined2 *puVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  if (param_2 != *(char *)((int)(undefined4 *)param_1 + 0x8e)) {
    *(char *)((int)(undefined4 *)param_1 + 0x8e) = param_2;
    puVar1 = (undefined2 *)((int)*param_1 + 0x44);
    (*(code *)*puVar1)();
  }
  return;
}



/* ---- FUN_1118_226a @ 1118:226a  (37 octets) ---- */

void __stdcall16far FUN_1118_226a(undefined4 *param_1,char param_2)

{
  undefined2 *puVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  if (param_2 != *(char *)((int)(undefined4 *)param_1 + 0x8f)) {
    *(char *)((int)(undefined4 *)param_1 + 0x8f) = param_2;
    puVar1 = (undefined2 *)((int)*param_1 + 0x44);
    (*(code *)*puVar1)();
  }
  return;
}



/* ---- FUN_1118_228f @ 1118:228f  (239 octets) ---- */

void FUN_1118_228f(int param_1,undefined2 *param_2)

{
  undefined2 *puVar1;
  undefined2 uVar2;
  undefined2 unaff_SS;
  undefined4 uVar3;
  undefined4 local_12;
  undefined4 local_e;
  undefined4 local_a;
  int local_6;
  undefined2 local_4;
  
  uVar3 = *(undefined4 *)((int)*(undefined4 *)(param_1 + 6) + 0x8a);
  local_4 = (undefined2)((ulong)uVar3 >> 0x10);
  local_6 = (int)uVar3;
  FUN_1128_13da((int)*(undefined4 *)(local_6 + 0xb),
                (int)((ulong)*(undefined4 *)(local_6 + 0xb) >> 0x10),*(undefined2 *)(param_1 + -4),
                *(undefined2 *)(param_1 + -2));
  uVar2 = (undefined2)((ulong)param_2 >> 0x10);
  puVar1 = (undefined2 *)param_2;
  local_12 = FUN_1148_066e(puVar1[3],*param_2);
  local_e = FUN_1148_066e(puVar1[1],*param_2);
  local_a = FUN_1148_066e(puVar1[1],puVar1[2]);
  FUN_1128_1de1(local_6,local_4,2,&local_12,unaff_SS);
  FUN_1128_13da((int)*(undefined4 *)(local_6 + 0xb),
                (int)((ulong)*(undefined4 *)(local_6 + 0xb) >> 0x10),*(undefined2 *)(param_1 + -8),
                *(undefined2 *)(param_1 + -6));
  uVar3 = FUN_1148_066e(puVar1[1],puVar1[2]);
  local_12 = uVar3;
  uVar3 = FUN_1148_066e(puVar1[3],puVar1[2]);
  local_e = uVar3;
  uVar3 = FUN_1148_066e(puVar1[3],*param_2);
  local_a = uVar3;
  FUN_1128_1de1(local_6,local_4,2,&local_12,unaff_SS);
  return;
}



/* ---- FUN_1118_237e @ 1118:237e  (75 octets) ---- */

void FUN_1118_237e(int param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4,
                  undefined2 param_5,undefined2 param_6,undefined2 param_7)

{
  undefined4 uVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 unaff_SS;
  
  uVar1 = *(undefined4 *)((int)*(undefined4 *)(param_1 + 6) + 0x8a);
  uVar3 = (undefined2)((ulong)uVar1 >> 0x10);
  iVar2 = (int)uVar1;
  FUN_1128_13da((int)*(undefined4 *)(iVar2 + 0xb),(int)((ulong)*(undefined4 *)(iVar2 + 0xb) >> 0x10)
                ,param_6,param_7);
  FUN_1128_1db8(iVar2,uVar3,param_4,param_5);
  FUN_1128_1d7b(iVar2,uVar3,param_2,param_3);
  return;
}



/* ---- FUN_1118_25be @ 1118:25be  (95 octets) ---- */

undefined4 __stdcall16far
FUN_1118_25be(undefined4 param_1,char param_2,undefined2 param_3,undefined2 param_4)

{
  undefined2 uVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 uStack_a;
  
  if (param_2 != '\0') {
    FUN_1158_1fe2();
  }
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  iVar2 = (int)param_1;
  FUN_1148_4bd9(iVar2,uVar3,0,param_3,param_4);
  *(undefined *)(iVar2 + 0x1a) = 1;
  *(undefined2 *)(iVar2 + 0x1c) = 1000;
  uVar1 = FUN_1140_15ed(0x2661,0x1118,iVar2,uVar3);
  *(undefined2 *)(iVar2 + 0x1e) = uVar1;
  if (param_2 != '\0') {
    DAT_1160_1858 = uStack_a;
  }
  return param_1;
}



/* ---- FUN_1118_261d @ 1118:261d  (58 octets) ---- */

void __stdcall16far FUN_1118_261d(undefined4 param_1,char param_2)

{
  int iVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  *(undefined *)(iVar1 + 0x1a) = 0;
  FUN_1118_26de(iVar1,uVar2);
  FUN_1140_166c(*(undefined2 *)(iVar1 + 0x1e));
  FUN_1148_4c2b(iVar1,uVar2,0);
  if (param_2 != '\0') {
    FUN_1158_200f();
  }
  return;
}



/* ---- FUN_1118_26de @ 1118:26de  (107 octets) ---- */

void __stdcall16far FUN_1118_26de(undefined4 param_1)

{
  undefined extraout_AH;
  int iVar1;
  undefined2 uVar2;
  undefined2 unaff_CS;
  undefined2 unaff_SS;
  undefined4 uVar3;
  undefined *puVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  undefined local_102 [256];
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  uVar6 = *(undefined2 *)(iVar1 + 0x1e);
  KILLTIMER(unaff_CS,1);
  if (((*(int *)(iVar1 + 0x1c) != 0) && (*(char *)(iVar1 + 0x1a) != '\0')) &&
     (*(int *)(iVar1 + 0x22) != 0)) {
    uVar5 = *(undefined2 *)(iVar1 + 0x1e);
    iVar1 = SETTIMER(0x14d0,0,0,*(undefined2 *)(iVar1 + 0x1c),1);
    if (iVar1 == 0) {
      puVar4 = local_102;
      FUN_1150_092b(0xf032);
      uVar3 = FUN_1150_28e6(0x22,0x1138,CONCAT11(extraout_AH,1),puVar4,unaff_SS);
      FUN_1158_1399(0x1150,uVar3,uVar5,uVar6);
    }
  }
  return;
}



/* ---- FUN_1118_2749 @ 1118:2749  (33 octets) ---- */

void __stdcall16far FUN_1118_2749(undefined4 param_1,char param_2)

{
  int iVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  if (param_2 != *(char *)(iVar1 + 0x1a)) {
    *(char *)(iVar1 + 0x1a) = param_2;
    FUN_1118_26de(iVar1,uVar2);
  }
  return;
}



/* ---- FUN_1118_276a @ 1118:276a  (33 octets) ---- */

void __stdcall16far FUN_1118_276a(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  if (param_2 != *(int *)(iVar1 + 0x1c)) {
    *(int *)(iVar1 + 0x1c) = param_2;
    FUN_1118_26de(iVar1,uVar2);
  }
  return;
}



/* ---- FUN_1118_278b @ 1118:278b  (38 octets) ---- */

void __stdcall16far FUN_1118_278b(undefined4 param_1)

{
  undefined2 uVar1;
  undefined2 unaff_SS;
  
  uVar1 = (undefined2)((ulong)param_1 >> 0x10);
  FUN_1158_161b(8,(int)param_1 + 0x20,uVar1,&stack0x0008,unaff_SS);
  FUN_1118_26de((int)param_1,uVar1);
  return;
}



/* ---- FUN_1118_27b1 @ 1118:27b1  (36 octets) ---- */

void __stdcall16far FUN_1118_27b1(undefined4 param_1)

{
  undefined2 *puVar1;
  
  if (*(int *)((int)param_1 + 0x22) != 0) {
    puVar1 = (undefined2 *)((int)param_1 + 0x20);
    (*(code *)*puVar1)();
  }
  return;
}



/* ---- FUN_1118_27d5 @ 1118:27d5  (140 octets) ---- */

undefined4 __stdcall16far
FUN_1118_27d5(undefined4 param_1,char param_2,undefined2 param_3,undefined2 param_4)

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
  *(undefined2 *)(iVar1 + 0x26) = 0xeb;
  FUN_1138_17bf(iVar1,uVar2,0xb9);
  FUN_1138_17e1(iVar1,uVar2,0x29);
  *(undefined *)(iVar1 + 0xec) = 2;
  FUN_1118_2c3e(iVar1,uVar2,2);
  FUN_1118_2c63(iVar1,uVar2,1);
  *(undefined *)(iVar1 + 0xe2) = 0;
  FUN_1138_1ed5(iVar1,uVar2,0xfff0,0xffff);
  if (param_2 != '\0') {
    DAT_1160_1858 = uStack_a;
  }
  return param_1;
}



/* ---- FUN_1118_2861 @ 1118:2861  (87 octets) ---- */

void __stdcall16far FUN_1118_2861(undefined4 param_1,undefined4 param_2)

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
  FUN_1138_3b29((int)param_1,uVar6,iVar3,uVar5);
  *(uint *)(iVar3 + 0x1a) = *(uint *)(iVar3 + 0x1a) | 3;
  iVar4 = *(char *)((int)param_1 + 0xe2) * 4;
  uVar1 = *(uint *)(iVar4 + 0xe52);
  uVar2 = *(uint *)(iVar3 + 6);
  *(uint *)(iVar3 + 4) = *(uint *)(iVar4 + 0xe50) | *(uint *)(iVar3 + 4);
  *(uint *)(iVar3 + 6) = uVar1 | uVar2;
  return;
}



/* ---- FUN_1118_28b8 @ 1118:28b8  (19 octets) ---- */

void __stdcall16far FUN_1118_28b8(undefined4 *param_1)

{
  undefined2 *puVar1;
  
  puVar1 = (undefined2 *)((int)*param_1 + 0x44);
  (*(code *)*puVar1)();
  return;
}



/* ---- FUN_1118_28cb @ 1118:28cb  (40 octets) ---- */

void __stdcall16far FUN_1118_28cb(undefined4 param_1)

{
  undefined2 *puVar1;
  
  if (*(int *)((int)param_1 + 0xe6) != 0) {
    puVar1 = (undefined2 *)((int)param_1 + 0xe4);
    (*(code *)*puVar1)();
  }
  return;
}



/* ---- FUN_1118_28f3 @ 1118:28f3  (43 octets) ---- */

void __stdcall16far FUN_1118_28f3(undefined4 param_1,undefined2 param_2,undefined2 param_3)

{
  int iVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  FUN_1138_4da8(iVar1,uVar2,param_2,param_3);
  if ((*(byte *)(iVar1 + 0x18) & 1) == 0) {
    FUN_1158_206a(0x1138,iVar1,uVar2);
  }
  return;
}



/* ---- FUN_1118_291e @ 1118:291e  (97 octets) ---- */

void __stdcall16far
FUN_1118_291e(undefined4 param_1,undefined4 param_2,undefined2 param_3,undefined2 param_4)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 unaff_CS;
  undefined2 uVar4;
  undefined2 local_4;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  local_4 = *(int *)(iVar1 + 0xe0);
  if (*(char *)(iVar1 + 0xdd) != '\0') {
    local_4 = local_4 + *(int *)(iVar1 + 0xde);
  }
  if (*(char *)(iVar1 + 0xdc) != '\0') {
    local_4 = local_4 + *(int *)(iVar1 + 0xde);
  }
  uVar3 = (undefined2)((ulong)param_2 >> 0x10);
  uVar4 = uVar3;
  INFLATERECT(unaff_CS,-local_4,-local_4,(int)param_2);
  FUN_1138_35c2(iVar1,uVar2,(int)param_2,uVar3,param_3,param_4,uVar4);
  return;
}



/* ---- FUN_1118_29dc @ 1118:29dc  (28 octets) ---- */

void __stdcall16far FUN_1118_29dc(undefined4 param_1,undefined4 param_2)

{
  undefined2 uVar1;
  
  uVar1 = FUN_1148_3193((int)param_2,(int)((ulong)param_2 >> 0x10));
  FUN_1138_1e72((int)param_1,(int)((ulong)param_1 >> 0x10),uVar1);
  return;
}



/* ---- FUN_1118_29f8 @ 1118:29f8  (73 octets) ---- */

void FUN_1118_29f8(int param_1,char param_2)

{
  undefined2 unaff_SS;
  
  *(undefined2 *)(param_1 + -0xc) = 0xffeb;
  *(undefined2 *)(param_1 + -10) = 0xffff;
  if (param_2 == '\x01') {
    *(undefined2 *)(param_1 + -0xc) = 0xffef;
    *(undefined2 *)(param_1 + -10) = 0xffff;
  }
  *(undefined2 *)(param_1 + -0x10) = 0xffef;
  *(undefined2 *)(param_1 + -0xe) = 0xffff;
  if (param_2 == '\x01') {
    *(undefined2 *)(param_1 + -0x10) = 0xffeb;
    *(undefined2 *)(param_1 + -0xe) = 0xffff;
  }
  return;
}



/* ---- FUN_1118_2bfe @ 1118:2bfe  (27 octets) ---- */

void __stdcall16far FUN_1118_2bfe(undefined4 *param_1,undefined param_2)

{
  undefined2 *puVar1;
  
  *(undefined *)((undefined4 *)param_1 + 0x3b) = param_2;
  puVar1 = (undefined2 *)((int)*param_1 + 0x44);
  (*(code *)*puVar1)();
  return;
}



/* ---- FUN_1118_2c19 @ 1118:2c19  (37 octets) ---- */

void __stdcall16far FUN_1118_2c19(undefined4 *param_1,undefined param_2)

{
  undefined2 *puVar1;
  undefined4 *puVar2;
  undefined2 uVar3;
  
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  puVar2 = (undefined4 *)param_1;
  *(undefined *)(puVar2 + 0x37) = param_2;
  FUN_1138_36f9(puVar2,uVar3);
  puVar1 = (undefined2 *)((int)*param_1 + 0x44);
  (*(code *)*puVar1)(0x1138,puVar2,uVar3);
  return;
}



/* ---- FUN_1118_2c3e @ 1118:2c3e  (37 octets) ---- */

void __stdcall16far FUN_1118_2c3e(undefined4 *param_1,undefined param_2)

{
  undefined2 *puVar1;
  undefined4 *puVar2;
  undefined2 uVar3;
  
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  puVar2 = (undefined4 *)param_1;
  *(undefined *)((int)puVar2 + 0xdd) = param_2;
  FUN_1138_36f9(puVar2,uVar3);
  puVar1 = (undefined2 *)((int)*param_1 + 0x44);
  (*(code *)*puVar1)(0x1138,puVar2,uVar3);
  return;
}



/* ---- FUN_1118_2c63 @ 1118:2c63  (37 octets) ---- */

void __stdcall16far FUN_1118_2c63(undefined4 *param_1,undefined2 param_2)

{
  undefined2 *puVar1;
  undefined4 *puVar2;
  undefined2 uVar3;
  
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  puVar2 = (undefined4 *)param_1;
  *(undefined2 *)((int)puVar2 + 0xde) = param_2;
  FUN_1138_36f9(puVar2,uVar3);
  puVar1 = (undefined2 *)((int)*param_1 + 0x44);
  (*(code *)*puVar1)(0x1138,puVar2,uVar3);
  return;
}



/* ---- FUN_1118_2c88 @ 1118:2c88  (37 octets) ---- */

void __stdcall16far FUN_1118_2c88(undefined4 *param_1,undefined2 param_2)

{
  undefined2 *puVar1;
  undefined4 *puVar2;
  undefined2 uVar3;
  
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  puVar2 = (undefined4 *)param_1;
  *(undefined2 *)(puVar2 + 0x38) = param_2;
  FUN_1138_36f9(puVar2,uVar3);
  puVar1 = (undefined2 *)((int)*param_1 + 0x44);
  (*(code *)*puVar1)(0x1138,puVar2,uVar3);
  return;
}



/* ---- FUN_1118_2cad @ 1118:2cad  (35 octets) ---- */

void __stdcall16far FUN_1118_2cad(undefined4 param_1,char param_2)

{
  int iVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  if (*(char *)(iVar1 + 0xe2) != param_2) {
    *(char *)(iVar1 + 0xe2) = param_2;
    FUN_1138_405a(iVar1,uVar2);
  }
  return;
}



/* ---- FUN_1118_2db0 @ 1118:2db0  (168 octets) ---- */

undefined4 * __stdcall16far FUN_1118_2db0(undefined4 *param_1,char param_2,undefined4 param_3)

{
  undefined2 *puVar1;
  undefined extraout_AH;
  undefined4 *puVar2;
  undefined2 uVar3;
  
  if (param_2 != '\0') {
    FUN_1158_1fe2();
  }
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  puVar2 = (undefined4 *)param_1;
  FUN_1120_7037(puVar2,uVar3,0,(int)param_3,param_3._2_2_);
  FUN_1148_0c2b((int)*(undefined4 *)((int)param_3 + 0xdc),
                (int)((ulong)*(undefined4 *)((int)param_3 + 0xdc) >> 0x10),puVar2,uVar3);
  FUN_1138_1c77(puVar2,uVar3,0);
  FUN_1138_1cb8(puVar2,uVar3,CONCAT11(extraout_AH,*(undefined *)((int)param_3 + 0x2a)));
  FUN_1138_1ea1(puVar2,uVar3,0);
  *(undefined2 *)((int)puVar2 + 0x7a) = 0x31ab;
  *(undefined2 *)(puVar2 + 0x1f) = 0x1118;
  *(int *)((int)puVar2 + 0x7e) = (int)param_3;
  *(undefined2 *)(puVar2 + 0x20) = param_3._2_2_;
  puVar1 = (undefined2 *)((int)*param_1 + 0x3c);
  (*(code *)*puVar1)(0x1138,puVar2,uVar3,(int)param_3,param_3._2_2_);
  if (param_2 != '\0') {
    DAT_1160_1858 = puVar2;
  }
  return param_1;
}



/* ---- FUN_1118_2e58 @ 1118:2e58  (56 octets) ---- */

void __stdcall16far FUN_1118_2e58(undefined4 param_1,char param_3)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)((int)*(undefined4 *)((int)param_1 + 4) + 0xdc);
  FUN_1148_0fa7((int)uVar1,(int)((ulong)uVar1 >> 0x10),(int)param_1,param_1._2_2_);
  FUN_1138_2efc((int)param_1,param_1._2_2_,0);
  if (param_3 != '\0') {
    FUN_1158_200f();
  }
  return;
}



/* ---- FUN_1118_2e90 @ 1118:2e90  (61 octets) ---- */

void __stdcall16far FUN_1118_2e90(undefined4 param_1,undefined4 param_2)

{
  undefined2 *puVar1;
  char cVar2;
  int iVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  
  uVar4 = (undefined2)((ulong)param_2 >> 0x10);
  iVar3 = (int)param_2;
  if ((*(int *)(iVar3 + 6) == 0) || (*(int *)(iVar3 + 6) == 5)) {
    uVar5 = (undefined2)((ulong)param_1 >> 0x10);
    puVar1 = (undefined2 *)((int)*(undefined4 *)*(undefined4 *)((int)param_1 + 0x1a) + 0x80);
    cVar2 = (*(code *)*puVar1)();
    if (cVar2 != '\0') {
      FUN_1120_732f((int)param_1,uVar5,iVar3,uVar4);
    }
  }
  return;
}



/* ---- FUN_1118_2ecd @ 1118:2ecd  (87 octets) ---- */

void __stdcall16far FUN_1118_2ecd(undefined4 param_1,char *param_2)

{
  undefined2 *puVar1;
  undefined4 *puVar2;
  char cVar3;
  int iVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  
  uVar5 = (undefined2)((ulong)param_2 >> 0x10);
  uVar6 = (undefined2)((ulong)param_1 >> 0x10);
  iVar4 = (int)param_1;
  FUN_1138_521f(iVar4,uVar6,(char *)param_2,uVar5);
  FUN_1158_206a(0x1138,(int)*(undefined4 *)(iVar4 + 0x1a),
                (int)((ulong)*(undefined4 *)(iVar4 + 0x1a) >> 0x10),(char *)param_2,uVar5);
  if ((*param_2 == '\b') || (*param_2 == ' ')) {
    puVar2 = (undefined4 *)*(undefined4 *)(iVar4 + 0x1a);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x80);
    cVar3 = (*(code *)*puVar1)(0x1158,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10));
    if (cVar3 == '\0') {
      *param_2 = '\0';
    }
  }
  return;
}



/* ---- FUN_1118_2f24 @ 1118:2f24  (52 octets) ---- */

void __stdcall16far FUN_1118_2f24(undefined4 param_1,undefined param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined extraout_AH;
  undefined2 uVar2;
  undefined2 uVar3;
  
  uVar2 = (undefined2)((ulong)param_3 >> 0x10);
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  FUN_1138_4f6a((int)param_1,uVar3,param_2,(int)param_3,uVar2);
  uVar1 = *(undefined4 *)((int)param_1 + 0x1a);
  FUN_1158_206a(0x1138,(int)uVar1,(int)((ulong)uVar1 >> 0x10),CONCAT11(extraout_AH,param_2),
                (int)param_3,uVar2);
  return;
}



/* ---- FUN_1118_2f58 @ 1118:2f58  (172 octets) ---- */

undefined4 __stdcall16far
FUN_1118_2f58(undefined4 param_1,char param_2,undefined2 param_3,undefined2 param_4)

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
  FUN_1120_3f20(iVar1,uVar3,0,param_3,param_4);
  *(undefined2 *)(iVar1 + 0x26) = 0xa0;
  uVar5 = FUN_1158_1f50(0x2a3,0x1148,CONCAT11(extraout_AH,1));
  *(undefined2 *)(iVar1 + 0xdc) = (int)uVar5;
  *(undefined2 *)(iVar1 + 0xde) = (int)((ulong)uVar5 >> 0x10);
  uVar5 = FUN_1148_1d08(0x3c9,0x1148,1);
  *(undefined2 *)(iVar1 + 0xe0) = (int)uVar5;
  *(undefined2 *)(iVar1 + 0xe2) = (int)((ulong)uVar5 >> 0x10);
  uVar4 = (undefined2)((ulong)*(undefined4 *)(iVar1 + 0xe0) >> 0x10);
  iVar2 = (int)*(undefined4 *)(iVar1 + 0xe0);
  *(undefined2 *)(iVar2 + 0xc) = 0x31e1;
  *(undefined2 *)(iVar2 + 0xe) = 0x1118;
  *(int *)(iVar2 + 0x10) = iVar1;
  *(undefined2 *)(iVar2 + 0x12) = uVar3;
  *(undefined2 *)(iVar1 + 0xe4) = 0xffff;
  *(undefined2 *)(iVar1 + 0xe6) = 1;
  if (param_2 != '\0') {
    DAT_1160_1858 = uStack_a;
  }
  return param_1;
}



/* ---- FUN_1118_3004 @ 1118:3004  (99 octets) ---- */

void __stdcall16far FUN_1118_3004(undefined4 param_1,char param_2)

{
  int iVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  FUN_1118_325a(iVar1,uVar3,0);
  uVar4 = (undefined2)((ulong)*(undefined4 *)(iVar1 + 0xe0) >> 0x10);
  iVar2 = (int)*(undefined4 *)(iVar1 + 0xe0);
  *(undefined2 *)(iVar2 + 0xc) = 0;
  *(undefined2 *)(iVar2 + 0xe) = 0;
  *(undefined2 *)(iVar2 + 0x10) = 0;
  *(undefined2 *)(iVar2 + 0x12) = 0;
  FUN_1158_1f7f((int)*(undefined4 *)(iVar1 + 0xe0),
                (int)((ulong)*(undefined4 *)(iVar1 + 0xe0) >> 0x10));
  FUN_1158_1f7f((int)*(undefined4 *)(iVar1 + 0xdc),
                (int)((ulong)*(undefined4 *)(iVar1 + 0xdc) >> 0x10));
  FUN_1138_6cdc(iVar1,uVar3,0);
  if (param_2 != '\0') {
    FUN_1158_200f();
  }
  return;
}



/* ---- FUN_1118_3067 @ 1118:3067  (324 octets) ---- */

void __stdcall16far FUN_1118_3067(undefined4 param_1)

{
  undefined2 *puVar1;
  undefined2 uVar2;
  int iVar3;
  int iVar4;
  undefined2 uVar5;
  undefined2 unaff_SS;
  undefined4 *puVar6;
  undefined2 uVar7;
  int local_30 [16];
  undefined2 local_10;
  undefined2 local_e;
  int local_c;
  int local_a;
  int local_8;
  int local_6;
  int local_4;
  
  uVar5 = (undefined2)((ulong)param_1 >> 0x10);
  iVar4 = (int)param_1;
  if ((*(int *)((int)*(undefined4 *)(iVar4 + 0xdc) + 8) != 0) && (*(char *)(iVar4 + 0xe8) == '\0'))
  {
    local_e = GETDC();
    uVar2 = FUN_1128_1016((int)*(undefined4 *)(iVar4 + 0x34),
                          (int)((ulong)*(undefined4 *)(iVar4 + 0x34) >> 0x10));
    local_10 = SELECTOBJECT(0x1128,uVar2);
    GETTEXTMETRICS(0x14d0,local_30,unaff_SS);
    uVar2 = local_e;
    SELECTOBJECT(0x14d0,local_10);
    uVar7 = 0;
    RELEASEDC(0x14d0,local_e);
    local_4 = (*(int *)((int)*(undefined4 *)(iVar4 + 0xdc) + 8) + *(int *)(iVar4 + 0xe6) + -1) /
              *(int *)(iVar4 + 0xe6);
    local_6 = (*(int *)(iVar4 + 0x22) + -10) / *(int *)(iVar4 + 0xe6);
    iVar3 = (*(int *)(iVar4 + 0x24) - local_30[0]) + -5;
    local_8 = iVar3 / local_4;
    local_a = local_30[0] + 1 + (iVar3 % local_4) / 2;
    iVar3 = *(int *)((int)*(undefined4 *)(iVar4 + 0xdc) + 8) + -1;
    if (-1 < iVar3) {
      local_c = 0;
      while( true ) {
        puVar6 = (undefined4 *)
                 FUN_1148_0dd0((int)*(undefined4 *)(iVar4 + 0xdc),
                               (int)((ulong)*(undefined4 *)(iVar4 + 0xdc) >> 0x10),local_c);
        puVar1 = (undefined2 *)((int)*puVar6 + 0x4c);
        (*(code *)*puVar1)(0x1148,puVar6,local_8,local_6,(local_c % local_4) * local_8 + local_a,
                           (local_c / local_4) * local_6 + 8,uVar7,uVar2);
        FUN_1138_1c77(puVar6,1);
        if (local_c == iVar3) break;
        local_c = local_c + 1;
      }
    }
  }
  return;
}



/* ---- FUN_1118_31ab @ 1118:31ab  (54 octets) ---- */

void __stdcall16far FUN_1118_31ab(undefined4 param_1,undefined2 param_2,undefined2 param_3)

{
  undefined2 uVar1;
  int iVar2;
  undefined2 uVar3;
  
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  iVar2 = (int)param_1;
  if (*(char *)(iVar2 + 0xe9) == '\0') {
    uVar1 = FUN_1148_0e58((int)*(undefined4 *)(iVar2 + 0xdc),
                          (int)((ulong)*(undefined4 *)(iVar2 + 0xdc) >> 0x10),param_2,param_3);
    *(undefined2 *)(iVar2 + 0xe4) = uVar1;
    FUN_1158_206a(0x1148,iVar2,uVar3);
  }
  return;
}



/* ---- FUN_1118_31e1 @ 1118:31e1  (76 octets) ---- */

void __stdcall16far FUN_1118_31e1(undefined4 param_1)

{
  undefined2 *puVar1;
  int iVar2;
  int iVar3;
  undefined2 uVar4;
  
  uVar4 = (undefined2)((ulong)param_1 >> 0x10);
  iVar3 = (int)param_1;
  if (*(char *)(iVar3 + 0xe8) == '\0') {
    puVar1 = (undefined2 *)((int)*(undefined4 *)*(undefined4 *)(iVar3 + 0xe0) + 0x10);
    iVar2 = (*(code *)*puVar1)();
    if (iVar2 <= *(int *)(iVar3 + 0xe4)) {
      puVar1 = (undefined2 *)((int)*(undefined4 *)*(undefined4 *)(iVar3 + 0xe0) + 0x10);
      iVar2 = (*(code *)*puVar1)();
      *(int *)(iVar3 + 0xe4) = iVar2 + -1;
    }
    FUN_1118_33bb(iVar3,uVar4);
  }
  return;
}



/* ---- FUN_1118_322d @ 1118:322d  (45 octets) ---- */

void __stdcall16far FUN_1118_322d(undefined4 param_1,undefined2 param_2,undefined2 param_3)

{
  int iVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  *(undefined *)(iVar1 + 0xe8) = 1;
  FUN_1138_30ec(iVar1,uVar2,param_2,param_3);
  *(undefined *)(iVar1 + 0xe8) = 0;
  FUN_1118_33bb(iVar1,uVar2);
  return;
}



/* ---- FUN_1118_325a @ 1118:325a  (93 octets) ---- */

void __stdcall16far FUN_1118_325a(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  
  while (uVar3 = (undefined2)((ulong)param_1 >> 0x10), iVar2 = (int)param_1,
        iVar1 = *(int *)((int)*(undefined4 *)(iVar2 + 0xdc) + 8), iVar1 < param_2) {
    FUN_1118_2db0(0x2cf0,0x1118,CONCAT11((char)((uint)iVar1 >> 8),1),iVar2,uVar3);
  }
  while (param_2 < *(int *)((int)*(undefined4 *)(iVar2 + 0xdc) + 8)) {
    uVar4 = FUN_1148_0f43((int)*(undefined4 *)(iVar2 + 0xdc),
                          (int)((ulong)*(undefined4 *)(iVar2 + 0xdc) >> 0x10));
    FUN_1158_1f7f(uVar4);
  }
  return;
}



/* ---- FUN_1118_32b7 @ 1118:32b7  (57 octets) ---- */

void __stdcall16far FUN_1118_32b7(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined2 uVar2;
  
  if (param_2 < 1) {
    param_2 = 1;
  }
  if (0x10 < param_2) {
    param_2 = 0x10;
  }
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  if (*(int *)(iVar1 + 0xe6) != param_2) {
    *(int *)(iVar1 + 0xe6) = param_2;
    FUN_1118_3067(iVar1,uVar2);
  }
  return;
}



/* ---- FUN_1118_32f0 @ 1118:32f0  (173 octets) ---- */

void __stdcall16far FUN_1118_32f0(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  undefined2 uVar4;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  if (*(char *)(iVar1 + 0xe8) == '\0') {
    if (param_2 < -1) {
      param_2 = -1;
    }
    if (*(int *)((int)*(undefined4 *)(iVar1 + 0xdc) + 8) <= param_2) {
      param_2 = *(int *)((int)*(undefined4 *)(iVar1 + 0xdc) + 8) + -1;
    }
    if (*(int *)(iVar1 + 0xe4) != param_2) {
      if (-1 < *(int *)(iVar1 + 0xe4)) {
        uVar4 = 0;
        uVar3 = FUN_1148_0dd0((int)*(undefined4 *)(iVar1 + 0xdc),
                              (int)((ulong)*(undefined4 *)(iVar1 + 0xdc) >> 0x10),
                              *(undefined2 *)(iVar1 + 0xe4));
        FUN_1120_714c(uVar3,uVar4);
      }
      *(int *)(iVar1 + 0xe4) = param_2;
      if (-1 < *(int *)(iVar1 + 0xe4)) {
        uVar4 = 1;
        uVar3 = FUN_1148_0dd0((int)*(undefined4 *)(iVar1 + 0xdc),
                              (int)((ulong)*(undefined4 *)(iVar1 + 0xdc) >> 0x10),
                              *(undefined2 *)(iVar1 + 0xe4));
        FUN_1120_714c(uVar3,uVar4);
      }
    }
  }
  else {
    *(int *)(iVar1 + 0xe4) = param_2;
  }
  return;
}



/* ---- FUN_1118_339d @ 1118:339d  (30 octets) ---- */

void __stdcall16far FUN_1118_339d(undefined4 param_1)

{
  undefined2 *puVar1;
  
  puVar1 = (undefined2 *)((int)*(undefined4 *)*(undefined4 *)((int)param_1 + 0xe0) + 8);
  (*(code *)*puVar1)();
  return;
}



/* ---- FUN_1118_33bb @ 1118:33bb  (196 octets) ---- */

void __stdcall16far FUN_1118_33bb(undefined4 param_1)

{
  undefined2 *puVar1;
  undefined4 *puVar2;
  undefined2 uVar3;
  int iVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  undefined2 unaff_SS;
  undefined4 uVar7;
  undefined *puVar8;
  undefined local_106 [256];
  int local_6;
  int local_4;
  
  uVar5 = (undefined2)((ulong)param_1 >> 0x10);
  iVar4 = (int)param_1;
  puVar1 = (undefined2 *)((int)*(undefined4 *)*(undefined4 *)(iVar4 + 0xe0) + 0x10);
  uVar3 = (*(code *)*puVar1)();
  uVar6 = 0x1118;
  FUN_1118_325a(iVar4,uVar5,uVar3);
  local_6 = *(int *)((int)*(undefined4 *)(iVar4 + 0xdc) + 8) + -1;
  if (-1 < local_6) {
    local_4 = 0;
    while( true ) {
      puVar8 = local_106;
      puVar2 = (undefined4 *)*(undefined4 *)(iVar4 + 0xe0);
      puVar1 = (undefined2 *)((int)*puVar2 + 0xc);
      uVar3 = unaff_SS;
      (*(code *)*puVar1)(uVar6,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),local_4,puVar8);
      uVar7 = FUN_1148_0dd0((int)*(undefined4 *)(iVar4 + 0xdc),
                            (int)((ulong)*(undefined4 *)(iVar4 + 0xdc) >> 0x10),local_4);
      uVar6 = 0x1138;
      FUN_1138_1d8c(uVar7,puVar8,uVar3);
      if (local_4 == local_6) break;
      local_4 = local_4 + 1;
    }
  }
  if (-1 < *(int *)(iVar4 + 0xe4)) {
    *(undefined *)(iVar4 + 0xe9) = 1;
    uVar3 = 1;
    uVar7 = FUN_1148_0dd0((int)*(undefined4 *)(iVar4 + 0xdc),
                          (int)((ulong)*(undefined4 *)(iVar4 + 0xdc) >> 0x10),
                          *(undefined2 *)(iVar4 + 0xe4));
    FUN_1120_714c(uVar7,uVar3);
    *(undefined *)(iVar4 + 0xe9) = 0;
  }
  FUN_1118_3067(iVar4,uVar5);
  return;
}



/* ---- FUN_1118_347f @ 1118:347f  (97 octets) ---- */

void __stdcall16far FUN_1118_347f(undefined4 param_1,undefined2 param_2,undefined2 param_3)

{
  int iVar1;
  int iVar2;
  undefined2 uVar3;
  int iVar4;
  undefined2 uVar5;
  undefined4 uVar6;
  int local_4;
  
  uVar5 = (undefined2)((ulong)param_1 >> 0x10);
  iVar4 = (int)param_1;
  FUN_1138_56b3(iVar4,uVar5,param_2,param_3);
  iVar1 = *(int *)((int)*(undefined4 *)(iVar4 + 0xdc) + 8) + -1;
  if (-1 < iVar1) {
    local_4 = 0;
    iVar2 = 0;
    while( true ) {
      uVar3 = CONCAT11((char)((uint)iVar2 >> 8),*(undefined *)(iVar4 + 0x2a));
      uVar6 = FUN_1148_0dd0((int)*(undefined4 *)(iVar4 + 0xdc),
                            (int)((ulong)*(undefined4 *)(iVar4 + 0xdc) >> 0x10),local_4);
      FUN_1138_1cb8(uVar6,uVar3);
      if (local_4 == iVar1) break;
      iVar2 = local_4;
      local_4 = local_4 + 1;
    }
  }
  return;
}



/* ---- FUN_1118_34e0 @ 1118:34e0  (33 octets) ---- */

void __stdcall16far FUN_1118_34e0(undefined4 param_1,undefined2 param_2,undefined2 param_3)

{
  undefined2 uVar1;
  
  uVar1 = (undefined2)((ulong)param_1 >> 0x10);
  FUN_1138_573a((int)param_1,uVar1,param_2,param_3);
  FUN_1118_3067((int)param_1,uVar1);
  return;
}



/* ---- FUN_1118_3501 @ 1118:3501  (33 octets) ---- */

void __stdcall16far FUN_1118_3501(undefined4 param_1,undefined2 param_2,undefined2 param_3)

{
  undefined2 uVar1;
  
  uVar1 = (undefined2)((ulong)param_1 >> 0x10);
  FUN_1138_4da8((int)param_1,uVar1,param_2,param_3);
  FUN_1118_3067((int)param_1,uVar1);
  return;
}



/* ---- FUN_1118_3522 @ 1118:3522  (15 octets) ---- */

undefined __stdcall16far FUN_1118_3522(void)

{
  return 1;
}




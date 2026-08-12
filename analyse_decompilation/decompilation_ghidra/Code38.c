/* Simstrat (FR).EXE - segment Code38 - 222 fonctions
   Decompile par Ghidra 11.2.1 (x86 16 bits, chargeur NE). */

/* ---- FUN_1128_09c2 @ 1128:09c2  (24 octets) ---- */

int FUN_1128_09c2(int param_1,byte *param_2)

{
  int iVar1;
  byte *pbVar2;
  
  pbVar2 = (byte *)param_2;
  iVar1 = 0;
  do {
    iVar1 = CONCAT11((char)((uint)(iVar1 << 5) >> 8),
                     ((byte)(iVar1 << 5) | (byte)((uint)iVar1 >> 0xb)) ^ *pbVar2);
    pbVar2 = pbVar2 + 1;
    param_1 = param_1 + -1;
  } while (param_1 != 0);
  return iVar1;
}



/* ---- FUN_1128_09da @ 1128:09da  (26 octets) ---- */

bool FUN_1128_09da(int param_1,char *param_2,char *param_3)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  bool bVar5;
  
  pcVar3 = (char *)param_3;
  pcVar4 = (char *)param_2;
  bVar5 = true;
  do {
    if (param_1 == 0) {
      return bVar5;
    }
    param_1 = param_1 + -1;
    pcVar2 = pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar1 = pcVar3;
    pcVar3 = pcVar3 + 1;
    bVar5 = *pcVar1 == *pcVar2;
  } while (bVar5);
  return bVar5;
}



/* ---- FUN_1128_09f4 @ 1128:09f4  (50 octets) ---- */

undefined4 __stdcall16far FUN_1128_09f4(undefined4 param_1,char param_2,undefined2 param_3)

{
  undefined2 uStack_a;
  
  if (param_2 != '\0') {
    FUN_1158_1fe2();
  }
  *(undefined2 *)((int)param_1 + 8) = param_3;
  if (param_2 != '\0') {
    DAT_1160_1858 = uStack_a;
  }
  return param_1;
}



/* ---- FUN_1128_0a26 @ 1128:0a26  (251 octets) ---- */

undefined2 * __stdcall16far FUN_1128_0a26(undefined4 param_1,undefined2 *param_2)

{
  undefined2 uVar1;
  char cVar2;
  int iVar3;
  undefined2 *puVar4;
  undefined2 uVar5;
  undefined2 *puVar6;
  int iVar7;
  undefined2 uVar8;
  undefined2 uVar9;
  undefined4 local_6;
  
  uVar8 = (undefined2)((ulong)param_2 >> 0x10);
  puVar6 = (undefined2 *)param_2;
  uVar9 = (undefined2)((ulong)param_1 >> 0x10);
  iVar7 = (int)param_1;
  iVar3 = FUN_1128_09c2(*(undefined2 *)(iVar7 + 8),puVar6,uVar8);
  for (local_6 = (undefined2 *)
                 CONCAT22(*(undefined2 *)(iVar7 + 6),(undefined2 *)*(undefined2 *)(iVar7 + 4));
      (undefined2 *)local_6 != (undefined2 *)0x0 || local_6._2_2_ != 0;
      local_6 = (undefined2 *)CONCAT22(((undefined2 *)local_6)[1],(undefined2 *)*local_6)) {
    if (((undefined2 *)local_6)[4] == iVar3) {
      cVar2 = FUN_1128_09da(*(undefined2 *)(iVar7 + 8),puVar6,uVar8,(undefined2 *)local_6 + 5,
                            local_6._2_2_);
      if (cVar2 != '\0') break;
    }
  }
  if ((undefined2 *)local_6 == (undefined2 *)0x0 && local_6._2_2_ == 0) {
    local_6 = (undefined2 *)FUN_1158_0182(*(int *)(iVar7 + 8) + 10);
    uVar5 = (undefined2)((ulong)local_6 >> 0x10);
    puVar4 = (undefined2 *)local_6;
    uVar1 = *(undefined2 *)(iVar7 + 6);
    *local_6 = *(undefined2 *)(iVar7 + 4);
    puVar4[1] = uVar1;
    puVar4[2] = 0;
    puVar4[3] = *param_2;
    puVar4[4] = iVar3;
    FUN_1158_1ec1(*(undefined2 *)(iVar7 + 8),puVar4 + 5,uVar5,puVar6,uVar8);
    *(undefined2 *)(iVar7 + 4) = puVar4;
    *(undefined2 *)(iVar7 + 6) = uVar5;
  }
  ((undefined2 *)local_6)[2] = ((undefined2 *)local_6)[2] + 1;
  return local_6;
}



/* ---- FUN_1128_0b21 @ 1128:0b21  (193 octets) ---- */

void __stdcall16far FUN_1128_0b21(undefined4 param_1,undefined2 *param_2)

{
  undefined2 uVar1;
  int iVar2;
  undefined2 *puVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined4 local_6;
  
  if (((undefined2 *)param_2 != (undefined2 *)0x0 || param_2._2_2_ != 0) &&
     (((undefined2 *)param_2)[2] = ((undefined2 *)param_2)[2] + -1, ((undefined2 *)param_2)[2] == 0)
     ) {
    if (((undefined2 *)param_2)[3] != 0) {
      DELETEOBJECT();
    }
    uVar4 = (undefined2)((ulong)param_1 >> 0x10);
    iVar2 = (int)param_1;
    if ((param_2._2_2_ == *(int *)(iVar2 + 6)) &&
       ((undefined2 *)param_2 == (undefined2 *)*(int *)(iVar2 + 4))) {
      uVar5 = ((undefined2 *)param_2)[1];
      *(undefined2 *)(iVar2 + 4) = *param_2;
      *(undefined2 *)(iVar2 + 6) = uVar5;
    }
    else {
      local_6 = (undefined2 *)
                CONCAT22(*(undefined2 *)(iVar2 + 6),(undefined2 *)*(undefined2 *)(iVar2 + 4));
      while( true ) {
        uVar5 = (undefined2)((ulong)local_6 >> 0x10);
        puVar3 = (undefined2 *)local_6;
        if ((puVar3[1] == param_2._2_2_) && ((undefined2 *)*local_6 == (undefined2 *)param_2))
        break;
        local_6 = (undefined2 *)CONCAT22(puVar3[1],(undefined2 *)*local_6);
      }
      uVar1 = ((undefined2 *)param_2)[1];
      *local_6 = *param_2;
      puVar3[1] = uVar1;
    }
    FUN_1158_019c(*(int *)(iVar2 + 8) + 10,(undefined2 *)param_2,param_2._2_2_);
  }
  return;
}



/* ---- FUN_1128_0be2 @ 1128:0be2  (101 octets) ---- */

void __stdcall16far FUN_1128_0be2(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined4 uVar6;
  
  uVar4 = (undefined2)((ulong)param_3 >> 0x10);
  iVar3 = (int)param_3;
  iVar1 = *(int *)(iVar3 + 0xc);
  iVar2 = *(int *)(iVar3 + 0xe);
  uVar5 = (undefined2)((ulong)param_1 >> 0x10);
  uVar6 = FUN_1128_0a26((int)param_1,uVar5,(int)param_2,(int)((ulong)param_2 >> 0x10));
  *(undefined2 *)(iVar3 + 0xc) = (int)uVar6;
  *(undefined2 *)(iVar3 + 0xe) = (int)((ulong)uVar6 >> 0x10);
  if ((*(int *)(iVar3 + 0xe) != iVar2) || (*(int *)(iVar3 + 0xc) != iVar1)) {
    FUN_1158_206a(0x1128,iVar3,uVar4);
  }
  FUN_1128_0b21((int)param_1,uVar5,iVar1,iVar2);
  return;
}



/* ---- FUN_1128_0c47 @ 1128:0c47  (94 octets) ---- */

void __stdcall16far FUN_1128_0c47(undefined4 param_1,undefined4 param_2,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined2 uVar4;
  
  uVar4 = (undefined2)((ulong)param_4 >> 0x10);
  iVar3 = (int)param_4;
  iVar1 = *(int *)(iVar3 + 0xc);
  iVar2 = *(int *)(iVar3 + 0xe);
  if ((iVar2 != param_2._2_2_) || (iVar1 != (int)param_2)) {
    *(int *)((int)param_2 + 4) = *(int *)((int)param_2 + 4) + 1;
    *(int *)(iVar3 + 0xc) = (int)param_2;
    *(int *)(iVar3 + 0xe) = param_2._2_2_;
    FUN_1158_206a();
    FUN_1128_0b21((int)param_1,(int)((ulong)param_1 >> 0x10),iVar1,iVar2);
  }
  return;
}



/* ---- FUN_1128_0ca5 @ 1128:0ca5  (71 octets) ---- */

undefined4 __stdcall16far FUN_1128_0ca5(undefined2 param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = CONCAT22(param_2,param_1);
  if (param_2 < 0) {
    uVar1 = GETSYSCOLOR();
  }
  return uVar1;
}



/* ---- FUN_1128_0cec @ 1128:0cec  (87 octets) ---- */

void FUN_1128_0cec(undefined2 param_1_00,undefined2 *param_1)

{
  undefined2 unaff_CS;
  
  while( true ) {
    if ((undefined2 *)param_1 == (undefined2 *)0x0 && param_1._2_2_ == 0) break;
    if ((((undefined2 *)param_1)[3] != 0) && ((int)((undefined2 *)param_1)[7] < 0)) {
      DELETEOBJECT(unaff_CS,((undefined2 *)param_1)[3]);
      ((undefined2 *)param_1)[3] = 0;
      unaff_CS = 0x14d0;
    }
    param_1 = (undefined2 *)CONCAT22(((undefined2 *)param_1)[1],(undefined2 *)*param_1);
  }
  return;
}



/* ---- FUN_1128_0d43 @ 1128:0d43  (98 octets) ---- */

void __cdecl16far FUN_1128_0d43(void)

{
  int iVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  int local_4;
  
  iVar1 = *(int *)((int)DAT_1160_2b2c + 8) + -1;
  if (-1 < iVar1) {
    local_4 = 0;
    while( true ) {
      uVar3 = FUN_1148_0dd0((int)DAT_1160_2b2c,(int)((ulong)DAT_1160_2b2c >> 0x10),local_4);
      FUN_1128_21ff(uVar3);
      if (local_4 == iVar1) break;
      local_4 = local_4 + 1;
    }
  }
  uVar2 = (undefined2)((ulong)DAT_1160_2b24 >> 0x10);
  FUN_1128_0cec(&stack0xfffe,*(undefined2 *)((int)DAT_1160_2b24 + 4),
                *(undefined2 *)((int)DAT_1160_2b24 + 6));
  uVar2 = (undefined2)((ulong)DAT_1160_2b28 >> 0x10);
  FUN_1128_0cec(&stack0xfffe,*(undefined2 *)((int)DAT_1160_2b28 + 4),
                *(undefined2 *)((int)DAT_1160_2b28 + 6));
  return;
}



/* ---- FUN_1128_0e72 @ 1128:0e72  (36 octets) ---- */

void __stdcall16far FUN_1128_0e72(undefined4 param_1)

{
  undefined2 *puVar1;
  
  if (*(int *)((int)param_1 + 6) != 0) {
    puVar1 = (undefined2 *)((int)param_1 + 4);
    (*(code *)*puVar1)();
  }
  return;
}



/* ---- FUN_1128_0e96 @ 1128:0e96  (86 octets) ---- */

undefined4 __stdcall16far FUN_1128_0e96(undefined4 param_1,char param_2)

{
  int iVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  undefined2 uStack_a;
  
  if (param_2 != '\0') {
    FUN_1158_1fe2();
  }
  uVar3 = FUN_1128_0a26((int)DAT_1160_2b20,(int)((ulong)DAT_1160_2b20 >> 0x10),0x1242,0x1160);
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  *(undefined2 *)(iVar1 + 0xc) = (int)uVar3;
  *(undefined2 *)(iVar1 + 0xe) = (int)((ulong)uVar3 >> 0x10);
  *(undefined2 *)(iVar1 + 0x10) = 0xfff7;
  *(undefined2 *)(iVar1 + 0x12) = 0xffff;
  *(undefined2 *)(iVar1 + 0x14) = DAT_1160_2b16;
  if (param_2 != '\0') {
    DAT_1160_1858 = uStack_a;
  }
  return param_1;
}



/* ---- FUN_1128_0eec @ 1128:0eec  (40 octets) ---- */

void __stdcall16far FUN_1128_0eec(undefined4 param_1,char param_2)

{
  undefined2 uVar1;
  
  uVar1 = (undefined2)((ulong)param_1 >> 0x10);
  FUN_1128_0b21((int)DAT_1160_2b20,(int)((ulong)DAT_1160_2b20 >> 0x10),
                *(undefined2 *)((int)param_1 + 0xc),*(undefined2 *)((int)param_1 + 0xe));
  if (param_2 != '\0') {
    FUN_1158_200f();
  }
  return;
}



/* ---- FUN_1128_0f14 @ 1128:0f14  (134 octets) ---- */

void __stdcall16far FUN_1128_0f14(undefined4 param_1,undefined4 param_3)

{
  char cVar1;
  undefined2 uVar2;
  
  cVar1 = FUN_1158_2255(0x310,0x1128,(int)param_3,param_3._2_2_);
  if (cVar1 == '\0') {
    FUN_1148_10fa((int)param_1,param_1._2_2_,(int)param_3,param_3._2_2_);
  }
  else {
    FUN_1128_0c47((int)DAT_1160_2b20,(int)((ulong)DAT_1160_2b20 >> 0x10),
                  *(undefined2 *)((int)param_3 + 0xc),*(undefined2 *)((int)param_3 + 0xe),
                  (int)param_1,param_1._2_2_);
    FUN_1128_0fdf((int)param_1,param_1._2_2_,*(undefined2 *)((int)param_3 + 0x10),
                  *(undefined2 *)((int)param_3 + 0x12));
    if (*(int *)((int)param_1 + 0x14) != *(int *)((int)param_3 + 0x14)) {
      uVar2 = FUN_1128_11cc((int)param_3,param_3._2_2_);
      FUN_1128_11f5((int)param_1,param_1._2_2_,uVar2);
    }
  }
  return;
}



/* ---- FUN_1128_0f9a @ 1128:0f9a  (40 octets) ---- */

void __stdcall16far FUN_1128_0f9a(undefined4 param_1,undefined2 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)((int)param_1 + 0xc);
  FUN_1158_161b(0x26,(undefined2 *)param_2,(int)((ulong)param_2 >> 0x10),(int)uVar1 + 10,
                (int)((ulong)uVar1 >> 0x10));
  *param_2 = 0;
  return;
}



/* ---- FUN_1128_0fc2 @ 1128:0fc2  (29 octets) ---- */

void __stdcall16far FUN_1128_0fc2(undefined2 param_1,undefined2 param_2,undefined4 param_3)

{
  FUN_1128_0be2((int)DAT_1160_2b20,(int)((ulong)DAT_1160_2b20 >> 0x10),(int)param_3,
                (int)((ulong)param_3 >> 0x10),param_1,param_2);
  return;
}



/* ---- FUN_1128_0fdf @ 1128:0fdf  (55 octets) ---- */

void __stdcall16far FUN_1128_0fdf(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  if ((*(int *)(iVar1 + 0x12) != param_3) || (*(int *)(iVar1 + 0x10) != param_2)) {
    *(int *)(iVar1 + 0x10) = param_2;
    *(int *)(iVar1 + 0x12) = param_3;
    FUN_1158_206a();
  }
  return;
}



/* ---- FUN_1128_1016 @ 1128:1016  (213 octets) ---- */

undefined2 __stdcall16far FUN_1128_1016(undefined4 param_1)

{
  undefined4 uVar1;
  char cVar2;
  int iVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined2 unaff_SS;
  undefined2 local_36;
  undefined2 local_34;
  undefined2 local_32;
  undefined2 local_30;
  undefined2 local_2e;
  undefined local_2c;
  undefined local_2b;
  undefined local_2a;
  undefined local_29;
  undefined local_28;
  undefined local_27;
  undefined local_26;
  undefined local_25;
  undefined local_24 [34];
  
  uVar4 = (undefined2)((ulong)param_1 >> 0x10);
  uVar1 = *(undefined4 *)((int)param_1 + 0xc);
  uVar5 = (undefined2)((ulong)uVar1 >> 0x10);
  iVar3 = (int)uVar1;
  if (*(int *)(iVar3 + 6) == 0) {
    local_36 = *(undefined2 *)(iVar3 + 0xc);
    local_34 = 0;
    local_32 = 0;
    local_30 = 0;
    if ((*(byte *)(iVar3 + 0xf) & 1) == 0) {
      local_2e = 400;
    }
    else {
      local_2e = 700;
    }
    local_2c = (*(byte *)(iVar3 + 0xf) & 2) != 0;
    local_2b = (*(byte *)(iVar3 + 0xf) & 4) != 0;
    local_2a = (*(byte *)(iVar3 + 0xf) & 8) != 0;
    local_29 = 1;
    FUN_1150_0d4c(iVar3 + 0x10,uVar5,local_24,unaff_SS);
    local_26 = 0;
    local_28 = 0;
    local_27 = 0;
    cVar2 = FUN_1128_125f((int)param_1,uVar4);
    if (cVar2 == '\x01') {
      local_25 = 2;
    }
    else if (cVar2 == '\x02') {
      local_25 = 1;
    }
    else {
      local_25 = 0;
    }
    uVar4 = CREATEFONTINDIRECT(0x1128,&local_36);
    *(undefined2 *)(iVar3 + 6) = uVar4;
  }
  return *(undefined2 *)(iVar3 + 6);
}



/* ---- FUN_1128_10eb @ 1128:10eb  (46 octets) ---- */

void __stdcall16far FUN_1128_10eb(undefined4 param_1,undefined2 param_2)

{
  undefined2 unaff_SS;
  undefined2 local_28 [19];
  
  FUN_1158_161b(0x26,local_28,unaff_SS,0x1242,0x1160);
  local_28[0] = param_2;
  FUN_1128_0fc2((int)param_1,(int)((ulong)param_1 >> 0x10),local_28,unaff_SS);
  return;
}



/* ---- FUN_1128_1119 @ 1128:1119  (25 octets) ---- */

undefined2 __stdcall16far FUN_1128_1119(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)((int)param_1 + 0xc);
  return *(undefined2 *)((int)uVar1 + 0xc);
}



/* ---- FUN_1128_1132 @ 1128:1132  (44 octets) ---- */

void __stdcall16far FUN_1128_1132(undefined4 param_1,undefined2 param_2)

{
  undefined2 uVar1;
  undefined2 unaff_SS;
  undefined local_28 [2];
  undefined2 local_26;
  
  uVar1 = (undefined2)((ulong)param_1 >> 0x10);
  FUN_1128_0f9a((int)param_1,uVar1,local_28,unaff_SS);
  local_26 = param_2;
  FUN_1128_0fc2((int)param_1,uVar1,local_28,unaff_SS);
  return;
}



/* ---- FUN_1128_115e @ 1128:115e  (32 octets) ---- */

void __stdcall16far FUN_1128_115e(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)((int)param_1 + 0xc);
  FUN_1158_17e7(0x1f,(int)param_2,(int)((ulong)param_2 >> 0x10),(int)uVar1 + 0x10,
                (int)((ulong)uVar1 >> 0x10));
  return;
}



/* ---- FUN_1128_117e @ 1128:117e  (78 octets) ---- */

void __stdcall16far FUN_1128_117e(undefined4 param_1,char *param_2)

{
  undefined2 uVar1;
  undefined2 unaff_SS;
  undefined local_28 [6];
  undefined local_22 [32];
  
  if (*param_2 != '\0') {
    uVar1 = (undefined2)((ulong)param_1 >> 0x10);
    FUN_1128_0f9a((int)param_1,uVar1,local_28,unaff_SS);
    FUN_1158_1ee5(0,0x20,local_22,unaff_SS);
    FUN_1158_17e7(0x1f,local_22,unaff_SS,(char *)param_2,(int)((ulong)param_2 >> 0x10));
    FUN_1128_0fc2((int)param_1,uVar1,local_28,unaff_SS);
  }
  return;
}



/* ---- FUN_1128_11cc @ 1128:11cc  (41 octets) ---- */

int __stdcall16far FUN_1128_11cc(undefined4 param_1)

{
  int iVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  FUN_1128_1119((int)param_1,uVar2);
  iVar1 = MULDIV(0x1128,*(undefined2 *)((int)param_1 + 0x14),0x48);
  return -iVar1;
}



/* ---- FUN_1128_11f5 @ 1128:11f5  (37 octets) ---- */

void __stdcall16far FUN_1128_11f5(undefined4 param_1)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 unaff_CS;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = MULDIV(unaff_CS,0x48,*(undefined2 *)((int)param_1 + 0x14));
  FUN_1128_1132((int)param_1,uVar2,-iVar1);
  return;
}



/* ---- FUN_1128_121a @ 1128:121a  (25 octets) ---- */

undefined __stdcall16far FUN_1128_121a(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)((int)param_1 + 0xc);
  return *(undefined *)((int)uVar1 + 0xf);
}



/* ---- FUN_1128_1233 @ 1128:1233  (44 octets) ---- */

void __stdcall16far FUN_1128_1233(undefined4 param_1,undefined param_2)

{
  undefined2 uVar1;
  undefined2 unaff_SS;
  undefined local_28 [5];
  undefined local_23;
  
  uVar1 = (undefined2)((ulong)param_1 >> 0x10);
  FUN_1128_0f9a((int)param_1,uVar1,local_28,unaff_SS);
  local_23 = param_2;
  FUN_1128_0fc2((int)param_1,uVar1,local_28,unaff_SS);
  return;
}



/* ---- FUN_1128_125f @ 1128:125f  (25 octets) ---- */

undefined __stdcall16far FUN_1128_125f(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)((int)param_1 + 0xc);
  return *(undefined *)((int)uVar1 + 0xe);
}



/* ---- FUN_1128_1278 @ 1128:1278  (44 octets) ---- */

void __stdcall16far FUN_1128_1278(undefined4 param_1,undefined param_2)

{
  undefined2 uVar1;
  undefined2 unaff_SS;
  undefined local_28 [4];
  undefined local_24;
  
  uVar1 = (undefined2)((ulong)param_1 >> 0x10);
  FUN_1128_0f9a((int)param_1,uVar1,local_28,unaff_SS);
  local_24 = param_2;
  FUN_1128_0fc2((int)param_1,uVar1,local_28,unaff_SS);
  return;
}



/* ---- FUN_1128_12a4 @ 1128:12a4  (72 octets) ---- */

undefined4 __stdcall16far FUN_1128_12a4(undefined4 param_1,char param_2)

{
  int iVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  undefined2 uStack_a;
  
  if (param_2 != '\0') {
    FUN_1158_1fe2();
  }
  uVar3 = FUN_1128_0a26((int)DAT_1160_2b24,(int)((ulong)DAT_1160_2b24 >> 0x10),0x1268,0x1160);
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  *(undefined2 *)(iVar1 + 0xc) = (int)uVar3;
  *(undefined2 *)(iVar1 + 0xe) = (int)((ulong)uVar3 >> 0x10);
  *(undefined *)(iVar1 + 0x10) = 4;
  if (param_2 != '\0') {
    DAT_1160_1858 = uStack_a;
  }
  return param_1;
}



/* ---- FUN_1128_12ec @ 1128:12ec  (40 octets) ---- */

void __stdcall16far FUN_1128_12ec(undefined4 param_1,char param_2)

{
  undefined2 uVar1;
  
  uVar1 = (undefined2)((ulong)param_1 >> 0x10);
  FUN_1128_0b21((int)DAT_1160_2b24,(int)((ulong)DAT_1160_2b24 >> 0x10),
                *(undefined2 *)((int)param_1 + 0xc),*(undefined2 *)((int)param_1 + 0xe));
  if (param_2 != '\0') {
    FUN_1158_200f();
  }
  return;
}



/* ---- FUN_1128_1314 @ 1128:1314  (94 octets) ---- */

void __stdcall16far FUN_1128_1314(undefined4 param_1,undefined4 param_3)

{
  char cVar1;
  undefined extraout_AH;
  
  cVar1 = FUN_1158_2255(0x411,0x1128,(int)param_3,param_3._2_2_);
  if (cVar1 == '\0') {
    FUN_1148_10fa((undefined2)param_1,param_1._2_2_,(int)param_3,param_3._2_2_);
  }
  else {
    FUN_1128_0c47((int)DAT_1160_2b24,(int)((ulong)DAT_1160_2b24 >> 0x10),
                  *(undefined2 *)((int)param_3 + 0xc),*(undefined2 *)((int)param_3 + 0xe),
                  (undefined2)param_1,param_1._2_2_);
    FUN_1128_1473((undefined2)param_1,param_1._2_2_,
                  CONCAT11(extraout_AH,*(undefined *)((int)param_3 + 0x10)));
  }
  return;
}



/* ---- FUN_1128_1372 @ 1128:1372  (40 octets) ---- */

void __stdcall16far FUN_1128_1372(undefined4 param_1,undefined2 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)((int)param_1 + 0xc);
  FUN_1158_161b(9,(undefined2 *)param_2,(int)((ulong)param_2 >> 0x10),(int)uVar1 + 10,
                (int)((ulong)uVar1 >> 0x10));
  *param_2 = 0;
  return;
}



/* ---- FUN_1128_139a @ 1128:139a  (29 octets) ---- */

void __stdcall16far FUN_1128_139a(undefined2 param_1,undefined2 param_2,undefined4 param_3)

{
  FUN_1128_0be2((int)DAT_1160_2b24,(int)((ulong)DAT_1160_2b24 >> 0x10),(int)param_3,
                (int)((ulong)param_3 >> 0x10),param_1,param_2);
  return;
}



/* ---- FUN_1128_13b7 @ 1128:13b7  (35 octets) ---- */

undefined4 __stdcall16far FUN_1128_13b7(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined2 uVar3;
  
  uVar1 = *(undefined4 *)((int)param_1 + 0xc);
  uVar3 = (undefined2)((ulong)uVar1 >> 0x10);
  iVar2 = (int)uVar1;
  return CONCAT22(*(undefined2 *)(iVar2 + 0xe),*(undefined2 *)(iVar2 + 0xc));
}



/* ---- FUN_1128_13da @ 1128:13da  (50 octets) ---- */

void __stdcall16far FUN_1128_13da(undefined4 param_1,undefined2 param_2,undefined2 param_3)

{
  undefined2 uVar1;
  undefined2 unaff_SS;
  undefined local_c [2];
  undefined2 local_a;
  undefined2 local_8;
  
  uVar1 = (undefined2)((ulong)param_1 >> 0x10);
  FUN_1128_1372((int)param_1,uVar1,local_c,unaff_SS);
  local_a = param_2;
  local_8 = param_3;
  FUN_1128_139a((int)param_1,uVar1,local_c,unaff_SS);
  return;
}



/* ---- FUN_1128_140c @ 1128:140c  (103 octets) ---- */

undefined2 __stdcall16far FUN_1128_140c(undefined4 param_1)

{
  undefined4 uVar1;
  undefined2 uVar2;
  int iVar3;
  undefined2 uVar4;
  undefined2 local_e;
  undefined2 local_c;
  undefined4 local_8;
  
  uVar1 = *(undefined4 *)((int)param_1 + 0xc);
  uVar4 = (undefined2)((ulong)uVar1 >> 0x10);
  iVar3 = (int)uVar1;
  if (*(int *)(iVar3 + 6) == 0) {
    local_e = *(undefined2 *)(*(char *)(iVar3 + 0x12) * 2 + 0x1272);
    local_c = *(undefined2 *)(iVar3 + 0x10);
    local_8 = FUN_1128_0ca5(*(undefined2 *)(iVar3 + 0xc),*(undefined2 *)(iVar3 + 0xe));
    uVar2 = CREATEPENINDIRECT(0x1128,&local_e);
    *(undefined2 *)(iVar3 + 6) = uVar2;
  }
  return *(undefined2 *)(iVar3 + 6);
}



/* ---- FUN_1128_1473 @ 1128:1473  (36 octets) ---- */

void __stdcall16far FUN_1128_1473(undefined4 param_1,char param_2)

{
  undefined2 uVar1;
  
  uVar1 = (undefined2)((ulong)param_1 >> 0x10);
  if (*(char *)((int)param_1 + 0x10) != param_2) {
    *(char *)((int)param_1 + 0x10) = param_2;
    FUN_1158_206a();
  }
  return;
}



/* ---- FUN_1128_1497 @ 1128:1497  (25 octets) ---- */

undefined __stdcall16far FUN_1128_1497(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)((int)param_1 + 0xc);
  return *(undefined *)((int)uVar1 + 0x12);
}



/* ---- FUN_1128_14b0 @ 1128:14b0  (44 octets) ---- */

void __stdcall16far FUN_1128_14b0(undefined4 param_1,undefined param_2)

{
  undefined2 uVar1;
  undefined2 unaff_SS;
  undefined local_c [8];
  undefined local_4;
  
  uVar1 = (undefined2)((ulong)param_1 >> 0x10);
  FUN_1128_1372((int)param_1,uVar1,local_c,unaff_SS);
  local_4 = param_2;
  FUN_1128_139a((int)param_1,uVar1,local_c,unaff_SS);
  return;
}



/* ---- FUN_1128_14dc @ 1128:14dc  (25 octets) ---- */

undefined2 __stdcall16far FUN_1128_14dc(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)((int)param_1 + 0xc);
  return *(undefined2 *)((int)uVar1 + 0x10);
}



/* ---- FUN_1128_14f5 @ 1128:14f5  (50 octets) ---- */

void __stdcall16far FUN_1128_14f5(undefined4 param_1,int param_2)

{
  undefined2 uVar1;
  undefined2 unaff_SS;
  undefined local_c [6];
  int local_6;
  
  if (-1 < param_2) {
    uVar1 = (undefined2)((ulong)param_1 >> 0x10);
    FUN_1128_1372((int)param_1,uVar1,local_c,unaff_SS);
    local_6 = param_2;
    FUN_1128_139a((int)param_1,uVar1,local_c,unaff_SS);
  }
  return;
}



/* ---- FUN_1128_1527 @ 1128:1527  (67 octets) ---- */

undefined4 __stdcall16far FUN_1128_1527(undefined4 param_1,char param_2)

{
  undefined2 uVar1;
  undefined4 uVar2;
  undefined2 uStack_a;
  
  if (param_2 != '\0') {
    FUN_1158_1fe2();
  }
  uVar2 = FUN_1128_0a26((int)DAT_1160_2b28,(int)((ulong)DAT_1160_2b28 >> 0x10),0x1280,0x1160);
  uVar1 = (undefined2)((ulong)param_1 >> 0x10);
  *(undefined2 *)((int)param_1 + 0xc) = (int)uVar2;
  *(undefined2 *)((int)param_1 + 0xe) = (int)((ulong)uVar2 >> 0x10);
  if (param_2 != '\0') {
    DAT_1160_1858 = uStack_a;
  }
  return param_1;
}



/* ---- FUN_1128_156a @ 1128:156a  (40 octets) ---- */

void __stdcall16far FUN_1128_156a(undefined4 param_1,char param_2)

{
  undefined2 uVar1;
  
  uVar1 = (undefined2)((ulong)param_1 >> 0x10);
  FUN_1128_0b21((int)DAT_1160_2b28,(int)((ulong)DAT_1160_2b28 >> 0x10),
                *(undefined2 *)((int)param_1 + 0xc),*(undefined2 *)((int)param_1 + 0xe));
  if (param_2 != '\0') {
    FUN_1158_200f();
  }
  return;
}



/* ---- FUN_1128_1592 @ 1128:1592  (76 octets) ---- */

void __stdcall16far FUN_1128_1592(undefined4 param_1,undefined4 param_3)

{
  char cVar1;
  
  cVar1 = FUN_1158_2255(0x4d4,0x1128,(int)param_3,param_3._2_2_);
  if (cVar1 == '\0') {
    FUN_1148_10fa((undefined2)param_1,param_1._2_2_,(int)param_3,param_3._2_2_);
  }
  else {
    FUN_1128_0c47((int)DAT_1160_2b28,(int)((ulong)DAT_1160_2b28 >> 0x10),
                  *(undefined2 *)((int)param_3 + 0xc),*(undefined2 *)((int)param_3 + 0xe),
                  (undefined2)param_1,param_1._2_2_);
  }
  return;
}



/* ---- FUN_1128_15de @ 1128:15de  (50 octets) ---- */

void __stdcall16far FUN_1128_15de(undefined4 param_1,undefined2 *param_2)

{
  undefined4 uVar1;
  undefined2 *puVar2;
  undefined2 uVar3;
  
  uVar1 = *(undefined4 *)((int)param_1 + 0xc);
  uVar3 = (undefined2)((ulong)param_2 >> 0x10);
  puVar2 = (undefined2 *)param_2;
  FUN_1158_161b(0xb,puVar2,uVar3,(int)uVar1 + 10,(int)((ulong)uVar1 >> 0x10));
  *param_2 = 0;
  puVar2[3] = 0;
  puVar2[4] = 0;
  return;
}



/* ---- FUN_1128_1610 @ 1128:1610  (29 octets) ---- */

void __stdcall16far FUN_1128_1610(undefined2 param_1,undefined2 param_2,undefined4 param_3)

{
  FUN_1128_0be2((int)DAT_1160_2b28,(int)((ulong)DAT_1160_2b28 >> 0x10),(int)param_3,
                (int)((ulong)param_3 >> 0x10),param_1,param_2);
  return;
}



/* ---- FUN_1128_162d @ 1128:162d  (52 octets) ---- */

void __stdcall16far FUN_1128_162d(undefined4 param_1,undefined2 param_2,undefined2 param_3)

{
  undefined2 unaff_SS;
  undefined local_e [6];
  undefined2 local_8;
  undefined2 local_6;
  
  FUN_1158_161b(0xb,local_e,unaff_SS,0x1280,0x1160);
  local_8 = param_2;
  local_6 = param_3;
  FUN_1128_1610((int)param_1,(int)((ulong)param_1 >> 0x10),local_e,unaff_SS);
  return;
}



/* ---- FUN_1128_1661 @ 1128:1661  (35 octets) ---- */

undefined4 __stdcall16far FUN_1128_1661(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined2 uVar3;
  
  uVar1 = *(undefined4 *)((int)param_1 + 0xc);
  uVar3 = (undefined2)((ulong)uVar1 >> 0x10);
  iVar2 = (int)uVar1;
  return CONCAT22(*(undefined2 *)(iVar2 + 0xe),*(undefined2 *)(iVar2 + 0xc));
}



/* ---- FUN_1128_1684 @ 1128:1684  (60 octets) ---- */

void __stdcall16far FUN_1128_1684(undefined4 param_1,undefined2 param_2,undefined2 param_3)

{
  undefined2 uVar1;
  undefined2 unaff_SS;
  undefined local_e [2];
  undefined2 local_c;
  undefined2 local_a;
  char local_4;
  
  uVar1 = (undefined2)((ulong)param_1 >> 0x10);
  FUN_1128_15de((int)param_1,uVar1,local_e,unaff_SS);
  local_c = param_2;
  local_a = param_3;
  if (local_4 == '\x01') {
    local_4 = '\0';
  }
  FUN_1128_1610((int)param_1,uVar1,local_e,unaff_SS);
  return;
}



/* ---- FUN_1128_16c0 @ 1128:16c0  (163 octets) ---- */

undefined2 __stdcall16far FUN_1128_16c0(undefined4 param_1)

{
  undefined4 uVar1;
  undefined2 uVar2;
  int iVar3;
  undefined2 uVar4;
  undefined2 local_c;
  undefined4 local_a;
  int local_6;
  
  uVar1 = *(undefined4 *)((int)param_1 + 0xc);
  uVar4 = (undefined2)((ulong)uVar1 >> 0x10);
  iVar3 = (int)uVar1;
  if (*(int *)(iVar3 + 6) == 0) {
    if (*(int *)(iVar3 + 0x10) == 0 && *(int *)(iVar3 + 0x12) == 0) {
      local_6 = 0;
      if (*(char *)(iVar3 + 0x14) == '\0') {
        local_c = 0;
      }
      else if (*(char *)(iVar3 + 0x14) == '\x01') {
        local_c = 1;
      }
      else {
        local_c = 2;
        local_6 = *(char *)(iVar3 + 0x14) + -2;
      }
    }
    else {
      local_c = 3;
      local_6 = FUN_1128_5a9e((int)*(undefined4 *)(iVar3 + 0x10),
                              (int)((ulong)*(undefined4 *)(iVar3 + 0x10) >> 0x10));
    }
    local_a = FUN_1128_0ca5(*(undefined2 *)(iVar3 + 0xc),*(undefined2 *)(iVar3 + 0xe));
    uVar2 = CREATEBRUSHINDIRECT(0x1128,&local_c);
    *(undefined2 *)(iVar3 + 6) = uVar2;
  }
  return *(undefined2 *)(iVar3 + 6);
}



/* ---- FUN_1128_1763 @ 1128:1763  (25 octets) ---- */

undefined __stdcall16far FUN_1128_1763(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)((int)param_1 + 0xc);
  return *(undefined *)((int)uVar1 + 0x14);
}



/* ---- FUN_1128_177c @ 1128:177c  (60 octets) ---- */

void __stdcall16far FUN_1128_177c(undefined4 param_1,char param_2)

{
  undefined2 uVar1;
  undefined2 unaff_SS;
  undefined local_e [2];
  undefined2 local_c;
  undefined2 local_a;
  char local_4;
  
  uVar1 = (undefined2)((ulong)param_1 >> 0x10);
  FUN_1128_15de((int)param_1,uVar1,local_e,unaff_SS);
  local_4 = param_2;
  if (param_2 == '\x01') {
    local_c = 0xffff;
    local_a = 0xff;
  }
  FUN_1128_1610((int)param_1,uVar1,local_e,unaff_SS);
  return;
}



/* ---- FUN_1128_17b8 @ 1128:17b8  (255 octets) ---- */

undefined4 __stdcall16far FUN_1128_17b8(undefined4 param_1,char param_2)

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
  FUN_1158_1f50(iVar1,uVar3,0);
  uVar5 = FUN_1128_0e96(0x310,0x1128,CONCAT11(extraout_AH,1));
  *(undefined2 *)(iVar1 + 7) = (int)uVar5;
  *(undefined2 *)(iVar1 + 9) = (int)((ulong)uVar5 >> 0x10);
  uVar4 = (undefined2)((ulong)*(undefined4 *)(iVar1 + 7) >> 0x10);
  iVar2 = (int)*(undefined4 *)(iVar1 + 7);
  *(undefined2 *)(iVar2 + 4) = 0x24a0;
  *(undefined2 *)(iVar2 + 6) = 0x1128;
  *(int *)(iVar2 + 8) = iVar1;
  *(undefined2 *)(iVar2 + 10) = uVar3;
  uVar5 = FUN_1128_12a4(0x411,0x1128,0x2401);
  *(undefined2 *)(iVar1 + 0xb) = (int)uVar5;
  *(undefined2 *)(iVar1 + 0xd) = (int)((ulong)uVar5 >> 0x10);
  uVar4 = (undefined2)((ulong)*(undefined4 *)(iVar1 + 0xb) >> 0x10);
  iVar2 = (int)*(undefined4 *)(iVar1 + 0xb);
  *(undefined2 *)(iVar2 + 4) = 0x24c3;
  *(undefined2 *)(iVar2 + 6) = 0x1128;
  *(int *)(iVar2 + 8) = iVar1;
  *(undefined2 *)(iVar2 + 10) = uVar3;
  uVar5 = FUN_1128_1527(0x4d4,0x1128,0x2401);
  *(undefined2 *)(iVar1 + 0xf) = (int)uVar5;
  *(undefined2 *)(iVar1 + 0x11) = (int)((ulong)uVar5 >> 0x10);
  uVar4 = (undefined2)((ulong)*(undefined4 *)(iVar1 + 0xf) >> 0x10);
  iVar2 = (int)*(undefined4 *)(iVar1 + 0xf);
  *(undefined2 *)(iVar2 + 4) = 0x24e6;
  *(undefined2 *)(iVar2 + 6) = 0x1128;
  *(int *)(iVar2 + 8) = iVar1;
  *(undefined2 *)(iVar2 + 10) = uVar3;
  *(undefined2 *)(iVar1 + 0x17) = 0x20;
  *(undefined2 *)(iVar1 + 0x19) = 0xcc;
  *(undefined *)(iVar1 + 6) = 0;
  FUN_1148_0c2b((int)DAT_1160_2b2c,(int)((ulong)DAT_1160_2b2c >> 0x10),iVar1,uVar3);
  if (param_2 != '\0') {
    DAT_1160_1858 = uStack_a;
  }
  return param_1;
}



/* ---- FUN_1128_18b7 @ 1128:18b7  (102 octets) ---- */

void __stdcall16far FUN_1128_18b7(undefined4 param_1,char param_3)

{
  FUN_1148_0fa7((int)DAT_1160_2b2c,(int)((ulong)DAT_1160_2b2c >> 0x10),(int)param_1,param_1._2_2_);
  FUN_1128_225d((int)param_1,param_1._2_2_,0);
  FUN_1158_1f7f((int)*(undefined4 *)((int)param_1 + 7),
                (int)((ulong)*(undefined4 *)((int)param_1 + 7) >> 0x10));
  FUN_1158_1f7f((int)*(undefined4 *)((int)param_1 + 0xb),
                (int)((ulong)*(undefined4 *)((int)param_1 + 0xb) >> 0x10));
  FUN_1158_1f7f((int)*(undefined4 *)((int)param_1 + 0xf),
                (int)((ulong)*(undefined4 *)((int)param_1 + 0xf) >> 0x10));
  FUN_1158_1f66((int)param_1,param_1._2_2_,0);
  if (param_3 != '\0') {
    FUN_1158_200f();
  }
  return;
}



/* ---- FUN_1128_1923 @ 1128:1923  (481 octets) ---- */

void __stdcall16far
FUN_1128_1923(undefined4 *param_1,undefined2 param_2,undefined2 param_3,int *param_4,
             undefined4 param_5,int *param_7)

{
  undefined2 *puVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  int iVar12;
  int iVar13;
  undefined2 uVar14;
  
  if ((int)param_5 == 0 && param_5._2_2_ == 0) {
    return;
  }
  uVar6 = (undefined2)((ulong)param_1 >> 0x10);
  puVar1 = (undefined2 *)((int)*param_1 + 0x10);
  (*(code *)*puVar1)();
  puVar8 = (undefined4 *)FUN_1128_56bd();
  DAT_1160_1858 = &stack0xffe6;
  puVar1 = (undefined2 *)((int)*puVar8 + 8);
  (*(code *)*puVar1)(0x1128,puVar8,(int)param_5,param_5._2_2_);
  uVar9 = FUN_1128_5a0f(puVar8);
  uVar9 = *(undefined4 *)((int)uVar9 + 0xf);
  FUN_1128_1684((int)uVar9,(int)((ulong)uVar9 >> 0x10),param_2,param_3);
  FUN_1128_6226(puVar8,0);
  FUN_1128_6226(puVar8,1);
  uVar14 = 1;
  uVar9 = FUN_1128_5a0f((int)param_5,param_5._2_2_);
  FUN_1128_22c2(uVar9,uVar14);
  uVar14 = 1;
  uVar9 = FUN_1128_5a0f(puVar8);
  FUN_1128_22c2(uVar9,uVar14);
  FUN_1128_22c2((undefined4 *)param_1,uVar6,9);
  uVar14 = (undefined2)((ulong)param_7 >> 0x10);
  piVar4 = (int *)param_7;
  iVar13 = *param_7;
  iVar12 = piVar4[1];
  iVar2 = piVar4[2] - *param_7;
  iVar3 = piVar4[3] - piVar4[1];
  uVar9 = FUN_1128_5a0f((int)param_5,param_5._2_2_);
  uVar7 = (undefined2)((ulong)param_4 >> 0x10);
  piVar5 = (int *)param_4;
  STRETCHBLT(0x1128,0x20,0xcc,piVar5[3] - piVar5[1],piVar5[2] - *param_4,piVar5[1],*param_4,
             *(undefined2 *)((int)uVar9 + 4),iVar3,iVar2,iVar12,iVar13);
  uVar9 = SETTEXTCOLOR(0x14d0,0,0);
  uVar10 = SETBKCOLOR(0x14d0,0xffff,0xff);
  iVar13 = *param_7;
  iVar12 = piVar4[1];
  iVar2 = piVar4[2] - *param_7;
  iVar3 = piVar4[3] - piVar4[1];
  uVar11 = FUN_1128_5a0f(puVar8);
  STRETCHBLT(0x1128,0x746,0xe2,piVar5[3] - piVar5[1],piVar5[2] - *param_4,piVar5[1],*param_4,
             *(undefined2 *)((int)uVar11 + 4),iVar3,iVar2,iVar12,iVar13);
  SETTEXTCOLOR(0x14d0,uVar9);
  uVar6 = *(undefined2 *)((undefined4 *)param_1 + 1);
  SETBKCOLOR(0x14d0,uVar10);
  DAT_1160_1858 = (undefined *)uVar6;
  FUN_1158_1f7f(puVar8);
  return;
}



/* ---- FUN_1128_1b10 @ 1128:1b10  (139 octets) ---- */

void __stdcall16far FUN_1128_1b10(undefined4 *param_1,int *param_2,undefined4 param_3,int *param_4)

{
  undefined2 *puVar1;
  undefined4 *puVar2;
  int *piVar3;
  int *piVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  undefined2 uVar8;
  undefined2 uVar9;
  undefined4 *puVar10;
  undefined2 uVar11;
  
  uVar5 = (undefined2)((ulong)param_1 >> 0x10);
  puVar2 = (undefined4 *)param_1;
  puVar1 = (undefined2 *)((int)*param_1 + 0x10);
  puVar10 = puVar2;
  uVar11 = uVar5;
  (*(code *)*puVar1)();
  FUN_1128_22c2(puVar2,uVar5,0xb);
  uVar6 = (undefined2)((ulong)param_3 >> 0x10);
  FUN_1128_22c2((int)param_3,uVar6,1);
  uVar9 = *(undefined2 *)(puVar2 + 1);
  uVar7 = (undefined2)((ulong)param_4 >> 0x10);
  piVar3 = (int *)param_4;
  uVar8 = (undefined2)((ulong)param_2 >> 0x10);
  piVar4 = (int *)param_2;
  STRETCHBLT(0x1128,*(undefined2 *)((int)puVar2 + 0x17),*(undefined2 *)((int)puVar2 + 0x19),
             piVar4[3] - piVar4[1],piVar4[2] - *param_2,piVar4[1],*param_2,
             *(undefined2 *)((int)param_3 + 4),piVar3[3] - piVar3[1],piVar3[2] - *param_4,piVar3[1],
             *param_4);
  puVar1 = (undefined2 *)((int)*param_1 + 0xc);
  (*(code *)*puVar1)(0x14d0,puVar2,uVar5,uVar9,puVar10,uVar11);
  return;
}



/* ---- FUN_1128_1b9b @ 1128:1b9b  (203 octets) ---- */

void __stdcall16far FUN_1128_1b9b(undefined4 *param_1,undefined4 *param_2,int param_4,int param_5)

{
  undefined2 *puVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined2 uVar7;
  undefined2 uVar8;
  undefined4 uVar9;
  undefined4 *puVar10;
  undefined local_a [8];
  
  if (((undefined4 *)param_2 != (undefined4 *)0x0 || param_2._2_2_ != 0) &&
     (puVar1 = (undefined2 *)((int)*param_2 + 0x14), cVar2 = (*(code *)*puVar1)(), cVar2 == '\0')) {
    uVar7 = (undefined2)((ulong)param_1 >> 0x10);
    puVar5 = (undefined4 *)param_1;
    puVar1 = (undefined2 *)((int)*param_1 + 0x10);
    (*(code *)*puVar1)();
    FUN_1128_22c2(puVar5,uVar7,1);
    uVar9 = FUN_1128_1661((int)*(undefined4 *)((int)puVar5 + 0xf),
                          (int)((ulong)*(undefined4 *)((int)puVar5 + 0xf) >> 0x10));
    uVar9 = FUN_1128_0ca5(uVar9);
    SETBKCOLOR(0x1128,uVar9);
    uVar8 = (undefined2)((ulong)*(undefined4 *)((int)puVar5 + 7) >> 0x10);
    iVar6 = (int)*(undefined4 *)((int)puVar5 + 7);
    uVar9 = FUN_1128_0ca5(*(undefined2 *)(iVar6 + 0x10),*(undefined2 *)(iVar6 + 0x12));
    SETTEXTCOLOR(0x1128,uVar9);
    puVar1 = (undefined2 *)((int)*param_2 + 0x1c);
    iVar3 = (*(code *)*puVar1)(0x14d0,(undefined4 *)param_2,param_2._2_2_,param_4,param_5,local_a);
    iVar3 = iVar3 + param_5;
    puVar1 = (undefined2 *)((int)*param_2 + 0x18);
    puVar10 = (undefined4 *)param_2;
    iVar6 = param_2._2_2_;
    iVar4 = (*(code *)*puVar1)(0x14d0,(undefined4 *)param_2,param_2._2_2_,iVar3);
    FUN_1148_0688(iVar4 + param_4,puVar10,iVar6,iVar3);
    puVar1 = (undefined2 *)((int)*param_2 + 0x10);
    (*(code *)*puVar1)(0x1148,(undefined4 *)param_2,param_2._2_2_);
    puVar1 = (undefined2 *)((int)*param_1 + 0xc);
    (*(code *)*puVar1)(0x1148,puVar5,uVar7);
  }
  return;
}



/* ---- FUN_1128_1c66 @ 1128:1c66  (60 octets) ---- */

void __stdcall16far FUN_1128_1c66(undefined4 *param_1,undefined4 param_2)

{
  undefined2 *puVar1;
  undefined4 *puVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined4 *puVar5;
  undefined2 uVar6;
  
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  puVar2 = (undefined4 *)param_1;
  puVar1 = (undefined2 *)((int)*param_1 + 0x10);
  puVar5 = puVar2;
  uVar6 = uVar3;
  (*(code *)*puVar1)();
  FUN_1128_22c2(puVar2,uVar3,1);
  uVar4 = *(undefined2 *)(puVar2 + 1);
  DRAWFOCUSRECT(0x1128,(int)param_2,(int)((ulong)param_2 >> 0x10));
  puVar1 = (undefined2 *)((int)*param_1 + 0xc);
  (*(code *)*puVar1)(0x14d0,puVar2,uVar3,uVar4,puVar5,uVar6);
  return;
}



/* ---- FUN_1128_1ca2 @ 1128:1ca2  (67 octets) ---- */

void __stdcall16far
FUN_1128_1ca2(undefined4 *param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4,
             undefined2 param_5)

{
  undefined2 *puVar1;
  undefined4 *puVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined4 *puVar5;
  undefined2 uVar6;
  
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  puVar2 = (undefined4 *)param_1;
  puVar1 = (undefined2 *)((int)*param_1 + 0x10);
  puVar5 = puVar2;
  uVar6 = uVar3;
  (*(code *)*puVar1)();
  FUN_1128_22c2(puVar2,uVar3,0xd);
  uVar4 = *(undefined2 *)(puVar2 + 1);
  ELLIPSE(0x1128,param_2,param_3,param_4,param_5);
  puVar1 = (undefined2 *)((int)*param_1 + 0xc);
  (*(code *)*puVar1)(0x14d0,puVar2,uVar3,uVar4,puVar5,uVar6);
  return;
}



/* ---- FUN_1128_1ce5 @ 1128:1ce5  (75 octets) ---- */

void __stdcall16far FUN_1128_1ce5(undefined4 *param_1,undefined4 param_2)

{
  undefined2 *puVar1;
  undefined2 uVar2;
  undefined4 *puVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  undefined4 *puVar8;
  undefined2 uVar9;
  
  uVar5 = (undefined2)((ulong)param_1 >> 0x10);
  puVar3 = (undefined4 *)param_1;
  puVar1 = (undefined2 *)((int)*param_1 + 0x10);
  puVar8 = puVar3;
  uVar9 = uVar5;
  (*(code *)*puVar1)();
  FUN_1128_22c2(puVar3,uVar5,9);
  uVar7 = *(undefined2 *)(puVar3 + 1);
  uVar6 = (undefined2)((ulong)param_2 >> 0x10);
  uVar4 = (undefined2)param_2;
  uVar2 = FUN_1128_16c0((int)*(undefined4 *)((int)puVar3 + 0xf),
                        (int)((ulong)*(undefined4 *)((int)puVar3 + 0xf) >> 0x10));
  FILLRECT(0x1128,uVar2,uVar4,uVar6);
  puVar1 = (undefined2 *)((int)*param_1 + 0xc);
  (*(code *)*puVar1)(0x14d0,puVar3,uVar5,uVar7,puVar8,uVar9);
  return;
}



/* ---- FUN_1128_1d30 @ 1128:1d30  (75 octets) ---- */

void __stdcall16far FUN_1128_1d30(undefined4 *param_1,undefined4 param_2)

{
  undefined2 *puVar1;
  undefined2 uVar2;
  undefined4 *puVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  undefined4 *puVar8;
  undefined2 uVar9;
  
  uVar5 = (undefined2)((ulong)param_1 >> 0x10);
  puVar3 = (undefined4 *)param_1;
  puVar1 = (undefined2 *)((int)*param_1 + 0x10);
  puVar8 = puVar3;
  uVar9 = uVar5;
  (*(code *)*puVar1)();
  FUN_1128_22c2(puVar3,uVar5,9);
  uVar7 = *(undefined2 *)(puVar3 + 1);
  uVar6 = (undefined2)((ulong)param_2 >> 0x10);
  uVar4 = (undefined2)param_2;
  uVar2 = FUN_1128_16c0((int)*(undefined4 *)((int)puVar3 + 0xf),
                        (int)((ulong)*(undefined4 *)((int)puVar3 + 0xf) >> 0x10));
  FRAMERECT(0x1128,uVar2,uVar4,uVar6);
  puVar1 = (undefined2 *)((int)*param_1 + 0xc);
  (*(code *)*puVar1)(0x14d0,puVar3,uVar5,uVar7,puVar8,uVar9);
  return;
}



/* ---- FUN_1128_1d7b @ 1128:1d7b  (61 octets) ---- */

void __stdcall16far FUN_1128_1d7b(undefined4 *param_1,undefined2 param_2,undefined2 param_3)

{
  undefined2 *puVar1;
  undefined4 *puVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined4 *puVar5;
  undefined2 uVar6;
  
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  puVar2 = (undefined4 *)param_1;
  puVar1 = (undefined2 *)((int)*param_1 + 0x10);
  puVar5 = puVar2;
  uVar6 = uVar3;
  (*(code *)*puVar1)();
  FUN_1128_22c2(puVar2,uVar3,5);
  uVar4 = *(undefined2 *)(puVar2 + 1);
  LINETO(0x1128,param_2,param_3);
  puVar1 = (undefined2 *)((int)*param_1 + 0xc);
  (*(code *)*puVar1)(0x14d0,puVar2,uVar3,uVar4,puVar5,uVar6);
  return;
}



/* ---- FUN_1128_1db8 @ 1128:1db8  (41 octets) ---- */

void __stdcall16far FUN_1128_1db8(undefined4 param_1,undefined2 param_2,undefined2 param_3)

{
  FUN_1128_22c2((int)param_1,(int)((ulong)param_1 >> 0x10),1);
  MOVETOEX(0x1128,0,0,param_2,param_3);
  return;
}



/* ---- FUN_1128_1de1 @ 1128:1de1  (65 octets) ---- */

void __stdcall16far FUN_1128_1de1(undefined4 *param_1,int param_2,undefined4 param_3)

{
  undefined2 *puVar1;
  undefined4 *puVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined4 *puVar5;
  undefined2 uVar6;
  
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  puVar2 = (undefined4 *)param_1;
  puVar1 = (undefined2 *)((int)*param_1 + 0x10);
  puVar5 = puVar2;
  uVar6 = uVar3;
  (*(code *)*puVar1)();
  FUN_1128_22c2(puVar2,uVar3,0xd);
  uVar4 = *(undefined2 *)(puVar2 + 1);
  POLYLINE(0x1128,param_2 + 1,(int)param_3,(int)((ulong)param_3 >> 0x10));
  puVar1 = (undefined2 *)((int)*param_1 + 0xc);
  (*(code *)*puVar1)(0x14d0,puVar2,uVar3,uVar4,puVar5,uVar6);
  return;
}



/* ---- FUN_1128_1e22 @ 1128:1e22  (67 octets) ---- */

void __stdcall16far
FUN_1128_1e22(undefined4 *param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4,
             undefined2 param_5)

{
  undefined2 *puVar1;
  undefined4 *puVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined4 *puVar5;
  undefined2 uVar6;
  
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  puVar2 = (undefined4 *)param_1;
  puVar1 = (undefined2 *)((int)*param_1 + 0x10);
  puVar5 = puVar2;
  uVar6 = uVar3;
  (*(code *)*puVar1)();
  FUN_1128_22c2(puVar2,uVar3,0xd);
  uVar4 = *(undefined2 *)(puVar2 + 1);
  RECTANGLE(0x1128,param_2,param_3,param_4,param_5);
  puVar1 = (undefined2 *)((int)*param_1 + 0xc);
  (*(code *)*puVar1)(0x14d0,puVar2,uVar3,uVar4,puVar5,uVar6);
  return;
}



/* ---- FUN_1128_1e65 @ 1128:1e65  (17 octets) ---- */

void __stdcall16far FUN_1128_1e65(undefined4 param_1)

{
  FUN_1128_21ff((int)param_1,(int)((ulong)param_1 >> 0x10));
  return;
}



/* ---- FUN_1128_1e76 @ 1128:1e76  (73 octets) ---- */

void __stdcall16far
FUN_1128_1e76(undefined4 *param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4,
             undefined2 param_5,undefined2 param_6,undefined2 param_7)

{
  undefined2 *puVar1;
  undefined4 *puVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined4 *puVar5;
  undefined2 uVar6;
  
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  puVar2 = (undefined4 *)param_1;
  puVar1 = (undefined2 *)((int)*param_1 + 0x10);
  puVar5 = puVar2;
  uVar6 = uVar3;
  (*(code *)*puVar1)();
  FUN_1128_22c2(puVar2,uVar3,0xd);
  uVar4 = *(undefined2 *)(puVar2 + 1);
  ROUNDRECT(0x1128,param_2,param_3,param_4,param_5,param_6,param_7);
  puVar1 = (undefined2 *)((int)*param_1 + 0xc);
  (*(code *)*puVar1)(0x14d0,puVar2,uVar3,uVar4,puVar5,uVar6);
  return;
}



/* ---- FUN_1128_1ebf @ 1128:1ebf  (74 octets) ---- */

void __stdcall16far FUN_1128_1ebf(undefined4 *param_1,undefined4 *param_2,undefined4 param_4)

{
  undefined2 *puVar1;
  undefined4 *puVar2;
  undefined2 uVar3;
  undefined4 *puVar4;
  undefined2 uVar5;
  
  if ((undefined4 *)param_2 != (undefined4 *)0x0 || param_2._2_2_ != 0) {
    uVar3 = (undefined2)((ulong)param_1 >> 0x10);
    puVar2 = (undefined4 *)param_1;
    puVar1 = (undefined2 *)((int)*param_1 + 0x10);
    puVar4 = puVar2;
    uVar5 = uVar3;
    (*(code *)*puVar1)();
    FUN_1128_22c2(puVar2,uVar3,0xf);
    puVar1 = (undefined2 *)((int)*param_2 + 0x10);
    (*(code *)*puVar1)(0x1128,(undefined4 *)param_2,param_2._2_2_,(int)param_4,
                       (int)((ulong)param_4 >> 0x10),puVar2,uVar3,puVar4,uVar5);
    puVar1 = (undefined2 *)((int)*param_1 + 0xc);
    (*(code *)*puVar1)(0x1128,puVar2,uVar3);
  }
  return;
}



/* ---- FUN_1128_1f09 @ 1128:1f09  (111 octets) ---- */

void __stdcall16far
FUN_1128_1f09(undefined4 *param_1,undefined *param_2,undefined2 param_3,int param_4)

{
  undefined2 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  
  uVar4 = (undefined2)((ulong)param_1 >> 0x10);
  puVar3 = (undefined4 *)param_1;
  puVar1 = (undefined2 *)((int)*param_1 + 0x10);
  (*(code *)*puVar1)();
  FUN_1128_22c2(puVar3,uVar4,0xb);
  uVar6 = *(undefined2 *)(puVar3 + 1);
  uVar5 = (undefined2)((ulong)param_2 >> 0x10);
  TEXTOUT(0x1128,*param_2,(undefined *)param_2 + 1,uVar5,param_3,param_4);
  iVar2 = FUN_1128_2003(puVar3,uVar4,(undefined *)param_2,uVar5);
  FUN_1128_1db8(puVar3,uVar4,param_3,iVar2 + param_4);
  puVar1 = (undefined2 *)((int)*param_1 + 0xc);
  (*(code *)*puVar1)(0x1128,puVar3,uVar4,uVar6);
  return;
}



/* ---- FUN_1128_1f78 @ 1128:1f78  (139 octets) ---- */

void __stdcall16far
FUN_1128_1f78(undefined4 *param_1,undefined *param_2,undefined2 param_3,undefined2 param_4,
             undefined *param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined2 *puVar3;
  char cVar4;
  int iVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined4 *puVar8;
  undefined2 uVar9;
  undefined2 unaff_SS;
  undefined2 uVar10;
  undefined4 *puVar11;
  undefined2 uVar12;
  undefined2 local_c;
  undefined local_a [8];
  
  puVar7 = local_a;
  puVar6 = (undefined *)param_5;
  for (iVar5 = 8; iVar5 != 0; iVar5 = iVar5 + -1) {
    puVar2 = puVar7;
    puVar7 = puVar7 + 1;
    puVar1 = puVar6;
    puVar6 = puVar6 + 1;
    *puVar2 = *puVar1;
  }
  uVar9 = (undefined2)((ulong)param_1 >> 0x10);
  puVar8 = (undefined4 *)param_1;
  puVar3 = (undefined2 *)((int)*param_1 + 0x10);
  puVar11 = puVar8;
  uVar12 = uVar9;
  (*(code *)*puVar3)();
  FUN_1128_22c2(puVar8,uVar9,0xb);
  local_c = 4;
  cVar4 = FUN_1128_1763((int)*(undefined4 *)((int)puVar8 + 0xf),
                        (int)((ulong)*(undefined4 *)((int)puVar8 + 0xf) >> 0x10));
  if (cVar4 != '\x01') {
    local_c = 6;
  }
  uVar10 = *(undefined2 *)(puVar8 + 1);
  EXTTEXTOUT(0x1128,0,0,*param_2,(undefined *)param_2 + 1,(int)((ulong)param_2 >> 0x10),local_a,
             unaff_SS,local_c,param_3,param_4);
  puVar3 = (undefined2 *)((int)*param_1 + 0xc);
  (*(code *)*puVar3)(0x14d0,puVar8,uVar9,uVar10,puVar11,uVar12);
  return;
}



/* ---- FUN_1128_2003 @ 1128:2003  (75 octets) ---- */

undefined2 __stdcall16far FUN_1128_2003(undefined4 param_1,undefined *param_2)

{
  int iVar1;
  undefined2 unaff_SS;
  undefined2 local_8 [2];
  undefined2 local_4;
  
  FUN_1128_22c2((int)param_1,(int)((ulong)param_1 >> 0x10),3);
  iVar1 = GETTEXTEXTENTPOINT(0x1128,local_8,unaff_SS,*param_2,(undefined *)param_2 + 1,
                             (int)((ulong)param_2 >> 0x10));
  if (iVar1 == 0) {
    local_4 = 0;
  }
  else {
    local_4 = local_8[0];
  }
  return local_4;
}



/* ---- FUN_1128_204e @ 1128:204e  (75 octets) ---- */

undefined2 __stdcall16far FUN_1128_204e(undefined4 param_1,undefined *param_2)

{
  int iVar1;
  undefined2 unaff_SS;
  undefined local_8 [2];
  undefined2 local_6;
  undefined2 local_4;
  
  FUN_1128_22c2((int)param_1,(int)((ulong)param_1 >> 0x10),3);
  iVar1 = GETTEXTEXTENTPOINT(0x1128,local_8,unaff_SS,*param_2,(undefined *)param_2 + 1,
                             (int)((ulong)param_2 >> 0x10));
  if (iVar1 == 0) {
    local_4 = 0;
  }
  else {
    local_4 = local_6;
  }
  return local_4;
}



/* ---- FUN_1128_2099 @ 1128:2099  (29 octets) ---- */

void __stdcall16far FUN_1128_2099(undefined4 param_1)

{
  undefined2 *puVar1;
  
  puVar1 = (undefined2 *)((int)*(undefined4 *)*(undefined4 *)((int)param_1 + 7) + 8);
  (*(code *)*puVar1)();
  return;
}



/* ---- FUN_1128_20b6 @ 1128:20b6  (29 octets) ---- */

void __stdcall16far FUN_1128_20b6(undefined4 param_1)

{
  undefined2 *puVar1;
  
  puVar1 = (undefined2 *)((int)*(undefined4 *)*(undefined4 *)((int)param_1 + 0xb) + 8);
  (*(code *)*puVar1)();
  return;
}



/* ---- FUN_1128_20d3 @ 1128:20d3  (29 octets) ---- */

void __stdcall16far FUN_1128_20d3(undefined4 param_1)

{
  undefined2 *puVar1;
  
  puVar1 = (undefined2 *)((int)*(undefined4 *)*(undefined4 *)((int)param_1 + 0xf) + 8);
  (*(code *)*puVar1)();
  return;
}



/* ---- FUN_1128_20f0 @ 1128:20f0  (43 octets) ---- */

undefined4 __stdcall16far FUN_1128_20f0(undefined4 param_1)

{
  undefined2 unaff_SS;
  undefined2 local_6;
  undefined2 local_4;
  
  FUN_1128_22c2((int)param_1,(int)((ulong)param_1 >> 0x10),1);
  GETCURRENTPOSITIONEX(0x1128,&local_6,unaff_SS);
  return CONCAT22(local_4,local_6);
}



/* ---- FUN_1128_211b @ 1128:211b  (23 octets) ---- */

void __stdcall16far FUN_1128_211b(undefined4 param_1,undefined2 param_2,undefined2 param_3)

{
  FUN_1128_1db8((int)param_1,(int)((ulong)param_1 >> 0x10),param_3,param_2);
  return;
}



/* ---- FUN_1128_2132 @ 1128:2132  (50 octets) ---- */

undefined4 __stdcall16far FUN_1128_2132(undefined4 param_1,undefined2 param_2,undefined2 param_3)

{
  undefined4 uVar1;
  
  FUN_1128_22c2((int)param_1,(int)((ulong)param_1 >> 0x10),1);
  uVar1 = GETPIXEL(0x1128,param_2,param_3);
  return uVar1;
}



/* ---- FUN_1128_2164 @ 1128:2164  (74 octets) ---- */

void __stdcall16far
FUN_1128_2164(undefined4 *param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4,
             undefined2 param_5)

{
  undefined2 *puVar1;
  undefined4 *puVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  undefined2 uVar5;
  undefined4 *puVar6;
  undefined2 uVar7;
  
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  puVar2 = (undefined4 *)param_1;
  puVar1 = (undefined2 *)((int)*param_1 + 0x10);
  puVar6 = puVar2;
  uVar7 = uVar3;
  (*(code *)*puVar1)();
  FUN_1128_22c2(puVar2,uVar3,1);
  uVar5 = *(undefined2 *)(puVar2 + 1);
  uVar4 = FUN_1128_0ca5(param_2,param_3);
  SETPIXEL(0x1128,uVar4,param_4,param_5);
  puVar1 = (undefined2 *)((int)*param_1 + 0xc);
  (*(code *)*puVar1)(0x14d0,puVar2,uVar3,uVar5,puVar6,uVar7);
  return;
}



/* ---- FUN_1128_21ae @ 1128:21ae  (36 octets) ---- */

void __stdcall16far FUN_1128_21ae(undefined4 param_1,undefined4 param_2)

{
  FUN_1128_22c2((int)param_1,(int)((ulong)param_1 >> 0x10),1);
  GETCLIPBOX(0x1128,(int)param_2,(int)((ulong)param_2 >> 0x10));
  return;
}



/* ---- FUN_1128_21d2 @ 1128:21d2  (45 octets) ---- */

undefined2 __stdcall16far FUN_1128_21d2(undefined4 *param_1)

{
  undefined2 *puVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  puVar1 = (undefined2 *)((int)*param_1 + 0x10);
  (*(code *)*puVar1)();
  FUN_1128_22c2((undefined4 *)param_1,uVar2,0xf);
  return *(undefined2 *)((undefined4 *)param_1 + 1);
}



/* ---- FUN_1128_21ff @ 1128:21ff  (87 octets) ---- */

void __stdcall16far FUN_1128_21ff(undefined4 param_1)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 unaff_CS;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  if ((*(int *)(iVar1 + 4) != 0) && ((*(byte *)(iVar1 + 6) & 0xf1) != *(byte *)(iVar1 + 6))) {
    SELECTOBJECT(unaff_CS,DAT_1160_2b18);
    SELECTOBJECT(0x14d0,DAT_1160_2b1a);
    SELECTOBJECT(0x14d0,DAT_1160_2b1c);
    *(byte *)(iVar1 + 6) = *(byte *)(iVar1 + 6) & 0xf1;
  }
  return;
}



/* ---- FUN_1128_2256 @ 1128:2256  (7 octets) ---- */

void __stdcall16far FUN_1128_2256(void)

{
  return;
}



/* ---- FUN_1128_225d @ 1128:225d  (101 octets) ---- */

void __stdcall16far FUN_1128_225d(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  if (*(int *)(iVar1 + 4) != param_2) {
    if (*(int *)(iVar1 + 4) != 0) {
      FUN_1128_21ff(iVar1,uVar2);
      uVar3 = FUN_1128_20f0(iVar1,uVar2);
      *(undefined2 *)(iVar1 + 0x13) = (int)uVar3;
      *(undefined2 *)(iVar1 + 0x15) = (int)((ulong)uVar3 >> 0x10);
      *(undefined2 *)(iVar1 + 4) = 0;
      *(byte *)(iVar1 + 6) = *(byte *)(iVar1 + 6) & 0xfe;
    }
    if (param_2 != 0) {
      *(byte *)(iVar1 + 6) = *(byte *)(iVar1 + 6) | 1;
      *(int *)(iVar1 + 4) = param_2;
      FUN_1128_211b(iVar1,uVar2,*(undefined2 *)(iVar1 + 0x13),*(undefined2 *)(iVar1 + 0x15));
    }
  }
  return;
}



/* ---- FUN_1128_22c2 @ 1128:22c2  (153 octets) ---- */

void __stdcall16far FUN_1128_22c2(undefined4 *param_1,byte param_2)

{
  undefined2 *puVar1;
  undefined extraout_AH;
  undefined4 *puVar2;
  undefined2 uVar3;
  undefined2 unaff_SS;
  undefined4 uVar4;
  undefined *puVar5;
  undefined local_104 [257];
  byte local_3;
  
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  puVar2 = (undefined4 *)param_1;
  local_3 = ~*(byte *)((int)puVar2 + 6) & param_2;
  if (local_3 != 0) {
    if ((local_3 & 1) != 0) {
      puVar1 = (undefined2 *)((int)*param_1 + 0x14);
      (*(code *)*puVar1)();
      if (*(int *)(puVar2 + 1) == 0) {
        puVar5 = local_104;
        FUN_1150_092b(0xf021);
        uVar4 = FUN_1150_28e6(0x52,0x1138,CONCAT11(extraout_AH,1),puVar5,unaff_SS);
        FUN_1158_1399(0x1150,uVar4);
      }
    }
    if ((local_3 & 2) != 0) {
      FUN_1128_23a3(puVar2,uVar3);
    }
    if ((local_3 & 4) != 0) {
      FUN_1128_23e1(puVar2,uVar3);
    }
    if ((local_3 & 8) != 0) {
      FUN_1128_241d(puVar2,uVar3);
    }
    *(byte *)((int)puVar2 + 6) = *(byte *)((int)puVar2 + 6) | local_3;
  }
  return;
}



/* ---- FUN_1128_235b @ 1128:235b  (36 octets) ---- */

void __stdcall16far FUN_1128_235b(undefined4 param_1)

{
  undefined2 *puVar1;
  
  if (*(int *)((int)param_1 + 0x25) != 0) {
    puVar1 = (undefined2 *)((int)param_1 + 0x23);
    (*(code *)*puVar1)();
  }
  return;
}



/* ---- FUN_1128_237f @ 1128:237f  (36 octets) ---- */

void __stdcall16far FUN_1128_237f(undefined4 param_1)

{
  undefined2 *puVar1;
  
  if (*(int *)((int)param_1 + 0x1d) != 0) {
    puVar1 = (undefined2 *)((int)param_1 + 0x1b);
    (*(code *)*puVar1)();
  }
  return;
}



/* ---- FUN_1128_23a3 @ 1128:23a3  (62 octets) ---- */

void __stdcall16far FUN_1128_23a3(undefined4 param_1)

{
  undefined2 uVar1;
  int iVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  uVar4 = *(undefined4 *)((int)param_1 + 7);
  uVar1 = FUN_1128_1016((int)uVar4,(int)((ulong)uVar4 >> 0x10));
  SELECTOBJECT(0x1128,uVar1);
  uVar4 = *(undefined4 *)((int)param_1 + 7);
  uVar1 = (undefined2)((ulong)uVar4 >> 0x10);
  iVar2 = (int)uVar4;
  uVar4 = FUN_1128_0ca5(*(undefined2 *)(iVar2 + 0x10),*(undefined2 *)(iVar2 + 0x12));
  SETTEXTCOLOR(0x1128,uVar4);
  return;
}



/* ---- FUN_1128_23e1 @ 1128:23e1  (60 octets) ---- */

void __stdcall16far FUN_1128_23e1(undefined4 param_1)

{
  undefined4 uVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  uVar1 = *(undefined4 *)((int)param_1 + 0xb);
  uVar2 = FUN_1128_140c((int)uVar1,(int)((ulong)uVar1 >> 0x10));
  SELECTOBJECT(0x1128,uVar2);
  uVar1 = *(undefined4 *)((int)param_1 + 0xb);
  SETROP2(0x14d0,*(undefined2 *)(*(char *)((int)uVar1 + 0x10) * 2 + 0x128c));
  return;
}



/* ---- FUN_1128_241d @ 1128:241d  (131 octets) ---- */

void __stdcall16far FUN_1128_241d(undefined4 param_1)

{
  char cVar1;
  undefined2 uVar2;
  int iVar3;
  undefined2 uVar4;
  undefined4 uVar5;
  
  uVar4 = (undefined2)((ulong)param_1 >> 0x10);
  iVar3 = (int)param_1;
  uVar2 = FUN_1128_16c0((int)*(undefined4 *)(iVar3 + 0xf),
                        (int)((ulong)*(undefined4 *)(iVar3 + 0xf) >> 0x10));
  UNREALIZEOBJECT(0x1128,uVar2);
  uVar2 = FUN_1128_16c0((int)*(undefined4 *)(iVar3 + 0xf),
                        (int)((ulong)*(undefined4 *)(iVar3 + 0xf) >> 0x10));
  SELECTOBJECT(0x1128,uVar2);
  uVar5 = FUN_1128_1661((int)*(undefined4 *)(iVar3 + 0xf),
                        (int)((ulong)*(undefined4 *)(iVar3 + 0xf) >> 0x10));
  uVar5 = FUN_1128_0ca5(uVar5);
  SETBKCOLOR(0x1128,uVar5);
  cVar1 = FUN_1128_1763((int)*(undefined4 *)(iVar3 + 0xf),
                        (int)((ulong)*(undefined4 *)(iVar3 + 0xf) >> 0x10));
  if (cVar1 == '\0') {
    SETBKMODE(0x1128,2);
  }
  else {
    SETBKMODE(0x1128,1);
  }
  return;
}



/* ---- FUN_1128_24a0 @ 1128:24a0  (35 octets) ---- */

void __stdcall16far FUN_1128_24a0(undefined4 param_1)

{
  byte *pbVar1;
  undefined2 uVar2;
  undefined2 unaff_CS;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  if ((*(byte *)((int)param_1 + 6) & 2) != 0) {
    pbVar1 = (byte *)((int)param_1 + 6);
    *pbVar1 = *pbVar1 & 0xfd;
    SELECTOBJECT(unaff_CS,DAT_1160_2b1c);
  }
  return;
}



/* ---- FUN_1128_24c3 @ 1128:24c3  (35 octets) ---- */

void __stdcall16far FUN_1128_24c3(undefined4 param_1)

{
  byte *pbVar1;
  undefined2 uVar2;
  undefined2 unaff_CS;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  if ((*(byte *)((int)param_1 + 6) & 4) != 0) {
    pbVar1 = (byte *)((int)param_1 + 6);
    *pbVar1 = *pbVar1 & 0xfb;
    SELECTOBJECT(unaff_CS,DAT_1160_2b18);
  }
  return;
}



/* ---- FUN_1128_24e6 @ 1128:24e6  (35 octets) ---- */

void __stdcall16far FUN_1128_24e6(undefined4 param_1)

{
  byte *pbVar1;
  undefined2 uVar2;
  undefined2 unaff_CS;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  if ((*(byte *)((int)param_1 + 6) & 8) != 0) {
    pbVar1 = (byte *)((int)param_1 + 6);
    *pbVar1 = *pbVar1 & 0xf7;
    SELECTOBJECT(unaff_CS,DAT_1160_2b1a);
  }
  return;
}



/* ---- FUN_1128_2509 @ 1128:2509  (45 octets) ---- */

void FUN_1128_2509(undefined2 param_1)

{
  undefined extraout_AH;
  undefined2 unaff_SS;
  undefined4 uVar1;
  undefined *puVar2;
  undefined local_102 [256];
  
  puVar2 = local_102;
  FUN_1150_092b(param_1);
  uVar1 = FUN_1150_28e6(99,0x1128,CONCAT11(extraout_AH,1),puVar2,unaff_SS);
  FUN_1158_1399(0x1150,uVar1);
  return;
}



/* ---- FUN_1128_2536 @ 1128:2536  (45 octets) ---- */

void FUN_1128_2536(undefined2 param_1)

{
  undefined extraout_AH;
  undefined2 unaff_SS;
  undefined4 uVar1;
  undefined *puVar2;
  undefined local_102 [256];
  
  puVar2 = local_102;
  FUN_1150_092b(param_1);
  uVar1 = FUN_1150_28e6(0x33,0x1128,CONCAT11(extraout_AH,1),puVar2,unaff_SS);
  FUN_1158_1399(0x1150,uVar1);
  return;
}



/* ---- FUN_1128_2563 @ 1128:2563  (11 octets) ---- */

void __cdecl16near FUN_1128_2563(void)

{
  FUN_1128_2536(0xf019);
  return;
}



/* ---- FUN_1128_256e @ 1128:256e  (11 octets) ---- */

void __cdecl16near FUN_1128_256e(void)

{
  FUN_1128_2536(0xf01a);
  return;
}



/* ---- FUN_1128_2579 @ 1128:2579  (11 octets) ---- */

void __cdecl16near FUN_1128_2579(void)

{
  FUN_1128_2536(0xf01b);
  return;
}



/* ---- FUN_1128_2584 @ 1128:2584  (43 octets) ---- */

void __cdecl16near FUN_1128_2584(void)

{
  undefined extraout_AH;
  undefined2 unaff_SS;
  undefined4 uVar1;
  undefined *puVar2;
  undefined local_102 [256];
  
  puVar2 = local_102;
  FUN_1150_092b(0xf020);
  uVar1 = FUN_1150_28e6(0x22,0x1138,CONCAT11(extraout_AH,1),puVar2,unaff_SS);
  FUN_1158_1399(0x1150,uVar1);
  return;
}



/* ---- FUN_1128_25af @ 1128:25af  (76 octets) ---- */

undefined4 __stdcall16far FUN_1128_25af(int param_1,int param_2)

{
  undefined2 uVar1;
  undefined2 unaff_CS;
  undefined4 uVar2;
  undefined2 uVar3;
  
  if ((param_2 < 0) || ((param_2 < 1 && (param_1 != -1)))) {
    uVar2 = FUN_1158_0182(param_1);
  }
  else {
    uVar3 = DAT_1160_189a;
    uVar1 = GLOBALALLOC(unaff_CS,param_1,param_2);
    uVar2 = GLOBALLOCK(0x14d0,uVar1,uVar3);
  }
  return uVar2;
}



/* ---- FUN_1128_2717 @ 1128:2717  (47 octets) ---- */

int FUN_1128_2717(int param_1)

{
  undefined2 local_4;
  
  if (((param_1 == 1) || (param_1 == 4)) || (param_1 == 8)) {
    local_4 = 1 << ((byte)param_1 & 0x1f);
  }
  else {
    local_4 = 0;
  }
  return local_4;
}



/* ---- FUN_1128_2752 @ 1128:2752  (432 octets) ---- */

undefined2 FUN_1128_2752(undefined4 local_res2)

{
  undefined2 *puVar1;
  undefined2 uVar2;
  int iVar3;
  undefined2 uVar4;
  int iVar5;
  undefined2 uVar6;
  undefined2 *puVar7;
  undefined2 uVar8;
  undefined *puStack_72;
  undefined *puStack_70;
  undefined2 uStack_6e;
  int iStack_6c;
  undefined4 uStack_6a;
  undefined2 uStack_66;
  int local_c;
  int local_a;
  
  uVar6 = (undefined2)((ulong)local_res2 >> 0x10);
  iVar5 = (int)local_res2;
  if (*(int *)(iVar5 + 0x20) == 0 && *(int *)(iVar5 + 0x22) == 0) {
    local_a = FUN_1128_2717();
  }
  else {
    local_a = *(int *)(iVar5 + 0x20);
  }
  if (local_a < 3) {
    return 0;
  }
  uStack_66 = 0x27a9;
  puVar7 = (undefined2 *)FUN_1128_25af();
  uVar4 = (undefined2)((ulong)puVar7 >> 0x10);
  puVar1 = (undefined2 *)puVar7;
  uStack_66 = DAT_1160_1858;
  uStack_6e = 0;
  puStack_70 = (undefined *)0x1128;
  puStack_72 = (undefined *)0x27cc;
  DAT_1160_1858 = (undefined **)&uStack_66;
  iStack_6c = (local_a + -1) * 4 + 8;
  uStack_6a = puVar7;
  FUN_1158_1ee5();
  puVar1[1] = local_a;
  *puVar7 = 0x300;
  uStack_6a._2_2_ = 0x1158;
  uStack_6a._0_2_ = (undefined2 *)0x27e6;
  uStack_6a._0_2_ = (undefined2 *)GETFOCUS();
  iStack_6c = 0x14d0;
  uStack_6e = 0x27f1;
  uVar2 = GETDC();
  iStack_6c = 0x14d0;
  uStack_6e = 0x2746;
  puStack_72 = (undefined *)DAT_1160_1858;
  uVar8 = 0x14d0;
  DAT_1160_1858 = &puStack_72;
  puStack_70 = &stack0xfffe;
  iVar3 = GETDEVICECAPS(0x14d0,0x68);
  if ((local_a == 0x10) && (0xf < iVar3)) {
    GETSYSTEMPALETTEENTRIES(0x14d0,puVar1 + 2,uVar4,8,0);
    uVar6 = uVar2;
    GETSYSTEMPALETTEENTRIES(0x14d0,puVar1 + 0x12,uVar4,8,iVar3 + -8);
    DAT_1160_1858 = (undefined **)uVar6;
  }
  else {
    DAT_1160_1858 = (undefined **)uVar8;
    if (-1 < local_a + -1) {
      local_c = 0;
      while( true ) {
        *(undefined *)(puVar1 + local_c * 2 + 2) = *(undefined *)(iVar5 + local_c * 4 + 0x2a);
        *(undefined *)((int)puVar1 + local_c * 4 + 5) = *(undefined *)(iVar5 + local_c * 4 + 0x29);
        *(undefined *)(puVar1 + local_c * 2 + 3) = *(undefined *)(iVar5 + local_c * 4 + 0x28);
        *(undefined *)((int)puVar1 + local_c * 4 + 7) = 0;
        if (local_c == local_a + -1) break;
        local_c = local_c + 1;
      }
    }
  }
  puStack_72 = (undefined *)0x14d0;
  uVar6 = RELEASEDC(0x14d0,uVar2);
  return uVar6;
}



/* ---- FUN_1128_2942 @ 1128:2942  (483 octets) ---- */

void __cdecl16far
FUN_1128_2942(int param_1,undefined2 param_2,undefined2 param_3,int *param_4,int *param_5,
             undefined4 *param_6)

{
  int iVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined4 uVar5;
  uint in_stack_00000002;
  undefined *puVar6;
  undefined *puStack_96;
  undefined *puStack_94;
  undefined2 uStack_92;
  undefined2 uStack_90;
  undefined *puStack_8e;
  undefined *puStack_8c;
  undefined *puStack_8a;
  undefined *puStack_88;
  undefined2 uStack_86;
  undefined2 uStack_84;
  undefined2 uStack_82;
  undefined2 uStack_80;
  undefined4 *puStack_7e;
  undefined2 uStack_7c;
  uint uStack_7a;
  int iStack_78;
  undefined4 uStack_76;
  undefined *puStack_72;
  undefined *puStack_70;
  uint uStack_6e;
  int iStack_6c;
  undefined4 uStack_6a;
  undefined4 *puStack_66;
  undefined2 uStack_64;
  undefined4 uStack_62;
  undefined2 *puStack_5e;
  undefined2 uStack_5a;
  undefined *puStack_58;
  int iStack_56;
  int local_3a;
  undefined2 local_34;
  undefined2 local_32;
  int local_28;
  int local_14;
  int local_12;
  undefined4 local_c;
  undefined *local_8;
  undefined2 local_6;
  int local_4;
  
  uVar4 = (undefined2)((ulong)param_6 >> 0x10);
  iStack_56 = 0x295a;
  (*(code *)*(undefined2 *)(undefined2 *)*param_6)();
  local_34 = param_2;
  local_32 = param_3;
  if (local_28 != 1) {
    FUN_1128_2563();
  }
  if (local_14 == 0 && local_12 == 0) {
    iStack_56 = 0x297d;
    local_14 = FUN_1128_2717();
    local_12 = local_14 >> 0xf;
  }
  iStack_56 = 0x2994;
  local_4 = FUN_1158_1633();
  iStack_56 = local_4 + 0x28;
  puStack_58 = (undefined *)0x1158;
  uStack_5a = 0x29a6;
  uVar5 = FUN_1128_25af();
  uVar3 = (undefined2)((ulong)uVar5 >> 0x10);
  iVar2 = (int)uVar5;
  iStack_56 = 0x293c;
  uStack_5a = DAT_1160_1858;
  puStack_5e = &local_34;
  uStack_64 = 0x28;
  puStack_66 = (undefined4 *)0x1128;
  uStack_6a._2_2_ = 0x29d4;
  DAT_1160_1858 = (undefined **)&uStack_5a;
  puStack_58 = &stack0xfffe;
  uStack_62 = uVar5;
  FUN_1158_161b();
  puStack_5e = (undefined2 *)(iVar2 + 0x28);
  uStack_62._2_2_ = 0;
  uStack_62._0_2_ = local_4;
  uStack_6a._2_2_ = 0x1158;
  uStack_6a._0_2_ = 0x29ef;
  puStack_66 = (undefined4 *)param_6;
  uStack_64 = uVar4;
  (*(code *)*(undefined2 *)(undefined2 *)*param_6)();
  iStack_6c = 0x29f7;
  uStack_6a = uVar5;
  iVar1 = FUN_1128_2752();
  *param_4 = iVar1;
  uStack_7a = in_stack_00000002 - (local_4 + 0x28U);
  param_1 = param_1 - (uint)(in_stack_00000002 < local_4 + 0x28U);
  if (*(int *)(iVar2 + 0x14) != 0 || *(int *)(iVar2 + 0x16) != 0) {
    if ((*(int *)(iVar2 + 0x16) < param_1) ||
       ((*(int *)(iVar2 + 0x16) <= param_1 && (*(uint *)(iVar2 + 0x14) < uStack_7a)))) {
      uStack_7a = *(uint *)(iVar2 + 0x14);
      param_1 = *(int *)(iVar2 + 0x16);
    }
  }
  iStack_6c = param_1;
  puStack_70 = (undefined *)0x1158;
  puStack_72 = (undefined *)0x2a4e;
  uStack_6e = uStack_7a;
  local_c = FUN_1128_25af();
  iStack_6c = 0x1128;
  uStack_6e = 0x2936;
  puStack_72 = (undefined *)DAT_1160_1858;
  iStack_78 = param_1;
  uStack_80 = 0x1128;
  uStack_82 = 0x2a78;
  DAT_1160_1858 = &puStack_72;
  puStack_7e = (undefined4 *)param_6;
  uStack_7c = uVar4;
  puStack_70 = &stack0xfffe;
  uStack_76 = local_c;
  (*(code *)*(undefined2 *)(undefined2 *)*param_6)();
  uStack_80 = 0x1128;
  uStack_82 = 0x2a7d;
  uStack_82 = GETFOCUS();
  uStack_84 = 0x14d0;
  uStack_86 = 0x2a88;
  local_6 = uStack_82;
  local_8 = (undefined *)GETDC();
  if (local_8 == (undefined *)0x0) {
    uStack_84 = 0x2a94;
    FUN_1128_2584();
  }
  uStack_84 = 0x14d0;
  uStack_86 = 0x2930;
  puStack_8a = (undefined *)DAT_1160_1858;
  if (*param_4 == 0) {
    local_3a = 0;
    DAT_1160_1858 = &puStack_8a;
    puStack_88 = &stack0xfffe;
  }
  else {
    puStack_8c = local_8;
    puStack_8e = (undefined *)*param_4;
    uStack_90 = 0;
    uStack_92 = 0x14d0;
    puStack_94 = (undefined *)0x2ab8;
    DAT_1160_1858 = &puStack_8a;
    puStack_88 = &stack0xfffe;
    local_3a = SELECTPALETTE();
    puStack_8e = local_8;
    uStack_90 = 0x14d0;
    uStack_92 = 0x2ac3;
    REALIZEPALETTE();
  }
  uStack_90 = 0x14d0;
  uStack_92 = 0x292a;
  puStack_96 = (undefined *)DAT_1160_1858;
  DAT_1160_1858 = &puStack_96;
  puVar6 = local_8;
  puStack_94 = &stack0xfffe;
  iVar2 = CREATEDIBITMAP(0x14d0,0,uVar5,(undefined2)local_c,local_c._2_2_,4,0,uVar5);
  *param_5 = iVar2;
  if (*param_5 == 0) {
    FUN_1128_2584();
  }
  DAT_1160_1858 = (undefined **)puVar6;
  uStack_92 = 0x14d0;
  puStack_94 = (undefined *)0x2b25;
  if (local_3a != 0) {
    puStack_96 = local_8;
    SELECTPALETTE(0x14d0,0,local_3a);
  }
  return;
}



/* ---- FUN_1128_2b81 @ 1128:2b81  (310 octets) ---- */

undefined2 FUN_1128_2b81(undefined4 local_res2)

{
  int iVar1;
  undefined2 *puVar2;
  undefined2 uVar3;
  int iVar4;
  undefined2 uVar5;
  undefined2 *puVar6;
  undefined2 uStack_1e;
  int local_c;
  
  uVar5 = (undefined2)((ulong)local_res2 >> 0x10);
  iVar4 = (int)local_res2;
  iVar1 = FUN_1128_2717();
  if (iVar1 != 0) {
    uStack_1e = 0x2bbc;
    puVar6 = (undefined2 *)FUN_1128_25af();
    uVar3 = (undefined2)((ulong)puVar6 >> 0x10);
    puVar2 = (undefined2 *)puVar6;
    uStack_1e = 0;
    FUN_1158_1ee5();
    uStack_1e = DAT_1160_1858;
    DAT_1160_1858 = &uStack_1e;
    puVar2[1] = iVar1;
    *puVar6 = 0x300;
    if (-1 < iVar1 + -1) {
      local_c = 0;
      while( true ) {
        *(undefined *)(puVar2 + local_c * 2 + 2) = *(undefined *)(iVar4 + local_c * 3 + 0xe);
        *(undefined *)((int)puVar2 + local_c * 4 + 5) = *(undefined *)(iVar4 + local_c * 3 + 0xd);
        *(undefined *)(puVar2 + local_c * 2 + 3) = *(undefined *)(iVar4 + local_c * 3 + 0xc);
        *(undefined *)((int)puVar2 + local_c * 4 + 7) = 0;
        if (local_c == iVar1 + -1) break;
        local_c = local_c + 1;
      }
    }
    uVar5 = uVar3;
    CREATEPALETTE(0x1158,puVar2);
    DAT_1160_1858 = (undefined2 *)uVar5;
    uStack_1e = uVar3;
    uVar5 = FUN_1158_019c((iVar1 + -1) * 4 + 8,puVar2);
    return uVar5;
  }
  return 0;
}



/* ---- FUN_1128_2ccf @ 1128:2ccf  (418 octets) ---- */

void __cdecl16far
FUN_1128_2ccf(undefined2 param_1_00,undefined2 param_1,undefined2 param_2,int *param_3,int *param_4,
             undefined4 *param_5)

{
  int iVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined4 uVar5;
  undefined *puVar6;
  undefined *puStack_7a;
  undefined *puStack_78;
  undefined2 uStack_76;
  undefined2 uStack_74;
  undefined *puStack_72;
  undefined *puStack_70;
  undefined *puStack_6e;
  undefined *puStack_6c;
  undefined2 uStack_6a;
  undefined2 uStack_68;
  undefined2 uStack_66;
  undefined2 uStack_64;
  undefined4 *puStack_62;
  undefined2 uStack_60;
  int iStack_5e;
  undefined2 uStack_5c;
  undefined4 uStack_5a;
  undefined *puStack_56;
  undefined *puStack_54;
  int iStack_52;
  undefined2 uStack_50;
  undefined4 uStack_4e;
  undefined4 *puStack_4a;
  undefined2 uStack_48;
  undefined4 uStack_46;
  undefined2 *puStack_42;
  undefined2 uStack_3e;
  int local_1e;
  undefined2 local_18;
  undefined2 local_16;
  int local_10;
  undefined4 local_c;
  undefined *local_8;
  undefined2 local_6;
  int local_4;
  
  uVar4 = (undefined2)((ulong)param_5 >> 0x10);
  (*(code *)*(undefined2 *)(undefined2 *)*param_5)();
  local_18 = param_1;
  local_16 = param_2;
  if (local_10 != 1) {
    FUN_1128_2563();
  }
  local_4 = FUN_1128_2717();
  local_4 = local_4 * 3;
  uStack_3e = 0x2d1a;
  uVar5 = FUN_1128_25af();
  uVar3 = (undefined2)((ulong)uVar5 >> 0x10);
  iVar2 = (int)uVar5;
  uStack_3e = DAT_1160_1858;
  puStack_42 = &local_18;
  uStack_48 = 0xc;
  puStack_4a = (undefined4 *)0x1128;
  uStack_4e._2_2_ = 0x2d48;
  DAT_1160_1858 = (undefined **)&uStack_3e;
  uStack_46 = uVar5;
  FUN_1158_161b();
  puStack_42 = (undefined2 *)(iVar2 + 0xc);
  uStack_46._2_2_ = 0;
  uStack_46._0_2_ = local_4;
  uStack_4e._2_2_ = 0x1158;
  uStack_4e._0_2_ = 0x2d63;
  puStack_4a = (undefined4 *)param_5;
  uStack_48 = uVar4;
  (*(code *)*(undefined2 *)(undefined2 *)*param_5)();
  uStack_50 = 0x2d6b;
  uStack_4e = uVar5;
  iVar1 = FUN_1128_2b81();
  *param_3 = iVar1;
  iVar2 = (*(int *)(iVar2 + 4) * *(int *)(iVar2 + 10) + 0x1fU >> 5) * 4 * *(int *)(iVar2 + 6);
  uStack_50 = 0;
  puStack_54 = (undefined *)0x1158;
  puStack_56 = (undefined *)0x2d9c;
  iStack_52 = iVar2;
  local_c = FUN_1128_25af();
  uStack_50 = 0x1128;
  iStack_52 = 0x2cc3;
  puStack_56 = (undefined *)DAT_1160_1858;
  uStack_5c = 0;
  uStack_64 = 0x1128;
  uStack_66 = 0x2dc6;
  DAT_1160_1858 = &puStack_56;
  puStack_62 = (undefined4 *)param_5;
  uStack_60 = uVar4;
  iStack_5e = iVar2;
  puStack_54 = &stack0xfffe;
  uStack_5a = local_c;
  (*(code *)*(undefined2 *)(undefined2 *)*param_5)();
  uStack_64 = 0x1128;
  uStack_66 = 0x2dcb;
  uStack_66 = GETFOCUS();
  uStack_68 = 0x14d0;
  uStack_6a = 0x2dd6;
  local_6 = uStack_66;
  local_8 = (undefined *)GETDC();
  if (local_8 == (undefined *)0x0) {
    uStack_68 = 0x2de2;
    FUN_1128_2584();
  }
  uStack_68 = 0x14d0;
  uStack_6a = 0x2cbd;
  puStack_6e = (undefined *)DAT_1160_1858;
  local_1e = 0;
  DAT_1160_1858 = &puStack_6e;
  puStack_6c = &stack0xfffe;
  if (*param_3 != 0) {
    puStack_70 = local_8;
    puStack_72 = (undefined *)*param_3;
    uStack_74 = 0;
    uStack_76 = 0x14d0;
    puStack_78 = (undefined *)0x2e0b;
    DAT_1160_1858 = &puStack_6e;
    puStack_6c = &stack0xfffe;
    local_1e = SELECTPALETTE();
    puStack_72 = local_8;
    uStack_74 = 0x14d0;
    uStack_76 = 0x2e16;
    REALIZEPALETTE();
  }
  uStack_74 = 0x14d0;
  uStack_76 = 0x2cb7;
  puStack_7a = (undefined *)DAT_1160_1858;
  DAT_1160_1858 = &puStack_7a;
  puVar6 = local_8;
  puStack_78 = &stack0xfffe;
  iVar2 = CREATEDIBITMAP(0x14d0,0,uVar5,(undefined2)local_c,local_c._2_2_,4,0,uVar5);
  *param_4 = iVar2;
  if (*param_4 == 0) {
    FUN_1128_2584();
  }
  DAT_1160_1858 = (undefined **)puVar6;
  uStack_76 = 0x14d0;
  puStack_78 = (undefined *)0x2e71;
  if (local_1e != 0) {
    puStack_7a = local_8;
    SELECTPALETTE(0x14d0,0,local_1e);
  }
  return;
}



/* ---- FUN_1128_2ec7 @ 1128:2ec7  (121 octets) ---- */

void FUN_1128_2ec7(undefined2 param_1,undefined2 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 *param_5)

{
  undefined4 *puVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined4 *puVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  undefined2 uVar8;
  int *piVar9;
  int local_6;
  int local_4;
  undefined2 uVar4;
  
  piVar9 = &local_6;
  uVar8 = 0;
  uVar7 = 4;
  uVar2 = (undefined2)((ulong)param_5 >> 0x10);
  puVar1 = (undefined4 *)param_5;
  puVar5 = puVar1;
  uVar6 = uVar2;
  (*(code *)*(undefined2 *)(undefined2 *)*param_5)();
  uVar3 = (undefined2)((ulong)param_4 >> 0x10);
  uVar4 = (undefined2)((ulong)param_3 >> 0x10);
  if ((local_4 == 0) && (local_6 == 0x28)) {
    FUN_1128_2942(param_2,0x28,0,(int)param_3,uVar4,(int)param_4,uVar3,puVar1,uVar2);
  }
  else if ((local_4 == 0) && (local_6 == 0xc)) {
    FUN_1128_2ccf(param_2,0xc,0,(int)param_3,uVar4,(int)param_4,uVar3,puVar1,uVar2);
  }
  else {
    FUN_1128_2563(puVar5,uVar6,uVar7,uVar8,piVar9);
  }
  return;
}



/* ---- FUN_1128_2f40 @ 1128:2f40  (52 octets) ---- */

undefined4 FUN_1128_2f40(uint param_1,int param_2)

{
  undefined2 uVar1;
  
  param_2 = param_2 + (uint)(0xffe0 < param_1);
  FUN_1158_1670();
  uVar1 = FUN_1158_1633();
  return CONCAT22(param_2,uVar1);
}



/* ---- FUN_1128_2f74 @ 1128:2f74  (52 octets) ---- */

undefined4 FUN_1128_2f74(uint param_1,int param_2)

{
  undefined2 uVar1;
  
  param_2 = param_2 + (uint)(0xfff0 < param_1);
  FUN_1158_1670();
  uVar1 = FUN_1158_1633();
  return CONCAT22(param_2,uVar1);
}



/* ---- FUN_1128_31f2 @ 1128:31f2  (193 octets) ---- */

void __cdecl16far
FUN_1128_31f2(int param_1,undefined2 param_2_00,undefined2 param_3,undefined4 *param_2)

{
  int iVar1;
  undefined2 uVar2;
  undefined *puStack_7a;
  undefined *puStack_78;
  undefined2 uStack_76;
  undefined2 uStack_74;
  undefined2 uStack_72;
  undefined2 uStack_70;
  undefined2 uStack_6e;
  undefined2 uStack_6c;
  undefined2 uStack_6a;
  undefined4 *puStack_68;
  undefined2 uStack_66;
  int iStack_64;
  int iStack_62;
  undefined4 uStack_60;
  undefined2 uStack_5c;
  
  uStack_5c = 0x320a;
  uStack_60 = FUN_1128_25af();
  uStack_5c = DAT_1160_1858;
  uStack_66 = (undefined2)((ulong)param_2 >> 0x10);
  puStack_68 = (undefined4 *)param_2;
  uStack_6a = 0x1128;
  uStack_6c = 0x3234;
  DAT_1160_1858 = (undefined **)&uStack_5c;
  iStack_64 = param_1 << 4;
  iStack_62 = (param_1 << 4) >> 0xf;
  (*(code *)*(undefined2 *)(undefined2 *)*param_2)();
  uStack_6a = 0xb;
  uStack_6c = 0x1128;
  uStack_6e = 0x323b;
  GETSYSTEMMETRICS();
  uStack_6e = 0xc;
  uStack_70 = 0x14d0;
  uStack_72 = 0x3245;
  GETSYSTEMMETRICS();
  uStack_72 = 0;
  uStack_74 = 0x14d0;
  uStack_76 = 0x324f;
  iVar1 = GETDC();
  if (iVar1 == 0) {
    uStack_74 = 0x325b;
    FUN_1128_2584();
  }
  uStack_74 = 0x14d0;
  uStack_76 = 0x31da;
  puStack_7a = (undefined *)DAT_1160_1858;
  DAT_1160_1858 = &puStack_7a;
  puStack_78 = &stack0xfffe;
  uVar2 = GETDEVICECAPS(0x14d0,0xc);
  GETDEVICECAPS(0x14d0,0xe);
  DAT_1160_1858 = (undefined **)uVar2;
  puStack_78 = (undefined *)0x14d0;
  puStack_7a = (undefined *)0x32b3;
  RELEASEDC(0x14d0,iVar1);
  return;
}



/* ---- FUN_1128_354a @ 1128:354a  (81 octets) ---- */

uint FUN_1128_354a(uint *param_1)

{
  int iVar1;
  undefined4 local_8;
  uint local_4;
  
  local_4 = 0;
  iVar1 = (int)((ulong)param_1 >> 0x10);
  local_8 = param_1;
  while( true ) {
    if ((iVar1 <= local_8._2_2_) &&
       ((iVar1 < local_8._2_2_ || ((uint *)param_1 + 10 <= (uint *)local_8)))) break;
    local_4 = local_4 ^ *local_8;
    local_8 = (uint *)CONCAT22(local_8._2_2_ + (uint)((uint *)0xfffd < (uint *)local_8),
                               (uint *)local_8 + 1);
  }
  return local_4;
}



/* ---- FUN_1128_35a5 @ 1128:35a5  (197 octets) ---- */

void FUN_1128_35a5(undefined2 *param_1,int *param_2,int *param_3,uint param_4,int param_5,
                  int *param_6,undefined4 *param_7)

{
  int iVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  undefined2 uStack_34;
  int local_18;
  int local_16;
  int local_12;
  int local_10;
  int local_e;
  int local_c;
  undefined2 local_a;
  int local_4;
  
  (*(code *)*(undefined2 *)(undefined2 *)*param_7)();
  if ((local_16 == -0x653a) && (local_18 == -0x3229)) {
    iVar1 = FUN_1128_354a();
    if (iVar1 == local_4) goto LAB_1128_35db;
  }
  FUN_1128_2579();
LAB_1128_35db:
  uStack_34 = 0x35f0;
  uVar2 = GLOBALALLOC();
  uStack_34 = DAT_1160_1858;
  DAT_1160_1858 = &uStack_34;
  uVar3 = GLOBALLOCK(0x14d0,uVar2);
  (*(code *)*(undefined2 *)(undefined2 *)*param_7)
            (0x14d0,(undefined4 *)param_7,(int)((ulong)param_7 >> 0x10),param_4 - 0x16,
             param_5 - (uint)(param_4 < 0x16),uVar3);
  iVar1 = SETMETAFILEBITSBETTER(0x14d0);
  *param_6 = iVar1;
  if (*param_6 == 0) {
    FUN_1128_2579();
  }
  *param_3 = local_e - local_12;
  *param_2 = local_c - local_10;
  *param_1 = local_a;
  DAT_1160_1858 = (undefined2 *)uVar2;
  return;
}



/* ---- FUN_1128_3684 @ 1128:3684  (276 octets) ---- */

void FUN_1128_3684(int param_1,undefined2 *param_2,undefined2 param_3)

{
  undefined2 uVar1;
  undefined2 uVar2;
  undefined2 extraout_DX;
  undefined2 *puVar3;
  undefined2 uVar4;
  undefined2 unaff_CS;
  undefined2 unaff_SS;
  undefined local_10 [2];
  int local_e;
  int local_c;
  byte local_8;
  byte local_7;
  
  GETOBJECT(unaff_CS,local_10,unaff_SS,0xe);
  uVar4 = (undefined2)((ulong)param_2 >> 0x10);
  puVar3 = (undefined2 *)param_2;
  *param_2 = 0x28;
  puVar3[1] = 0;
  puVar3[2] = local_e;
  puVar3[3] = local_e >> 0xf;
  puVar3[4] = local_c;
  puVar3[5] = local_c >> 0xf;
  if (param_1 == 0) {
    puVar3[7] = (uint)local_7 * (uint)local_8;
  }
  else if (param_1 == 2) {
    puVar3[7] = 1;
  }
  else if (param_1 == 0x10) {
    puVar3[7] = 4;
  }
  else if (param_1 == 0x100) {
    puVar3[7] = 8;
  }
  puVar3[6] = 1;
  puVar3[0xc] = 0;
  puVar3[0xd] = 0;
  puVar3[0xe] = 0;
  puVar3[0xf] = 0;
  puVar3[0x10] = 0;
  puVar3[0x11] = 0;
  puVar3[0x12] = 0;
  puVar3[0x13] = 0;
  puVar3[8] = 0;
  puVar3[9] = 0;
  if ((*(char *)(puVar3 + 7) == '\x10') || (*(char *)(puVar3 + 7) == ' ')) {
    puVar3[7] = 0x18;
  }
  uVar2 = 0;
  uVar1 = FUN_1158_1633(param_3);
  FUN_1128_2f40(uVar1,uVar2);
  uVar1 = extraout_DX;
  uVar2 = FUN_1158_1633();
  puVar3[10] = uVar2;
  puVar3[0xb] = uVar1;
  return;
}



/* ---- FUN_1128_3798 @ 1128:3798  (76 octets) ---- */

void FUN_1128_3798(undefined2 param_1,undefined2 *param_2,int *param_3,undefined2 param_4)

{
  undefined2 unaff_SS;
  undefined local_2a [14];
  int local_1c;
  undefined2 local_16;
  undefined2 local_14;
  
  FUN_1128_3684(param_1,local_2a,unaff_SS,param_4);
  if (local_1c == 0x18) {
    *param_3 = 0x28;
  }
  else {
    *param_3 = (1 << ((byte)local_1c & 0x1f)) * 4 + 0x28;
  }
  *param_2 = local_16;
  ((undefined2 *)param_2)[1] = local_14;
  return;
}



/* ---- FUN_1128_37e4 @ 1128:37e4  (25 octets) ---- */

void __stdcall16far FUN_1128_37e4(undefined4 param_1,undefined4 param_2,undefined2 param_3)

{
  FUN_1128_3798(0,(int)param_1,(int)((ulong)param_1 >> 0x10),(int)param_2,
                (int)((ulong)param_2 >> 0x10),param_3);
  return;
}



/* ---- FUN_1128_3803 @ 1128:3803  (171 octets) ---- */

void __cdecl16far
FUN_1128_3803(undefined4 param_1,undefined4 param_2,int param_3,undefined2 param_4)

{
  undefined2 uVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined2 uStack_16;
  undefined *puStack_14;
  undefined2 uStack_12;
  int iStack_10;
  undefined2 uStack_e;
  int local_6;
  
  uVar3 = (undefined2)((ulong)param_2 >> 0x10);
  iVar2 = (int)param_2;
  puStack_14 = (undefined *)0x3815;
  iStack_10 = iVar2;
  uStack_e = uVar3;
  FUN_1128_3684();
  local_6 = 0;
  uStack_e = 0x381f;
  uStack_e = GETFOCUS();
  iStack_10 = 0x14d0;
  uStack_12 = 0x382a;
  uVar1 = GETDC();
  iStack_10 = 0x14d0;
  uStack_12 = 0x37fd;
  uStack_16 = DAT_1160_1858;
  DAT_1160_1858 = &uStack_16;
  puStack_14 = &stack0xfffe;
  if (param_3 != 0) {
    DAT_1160_1858 = &uStack_16;
    uVar4 = uVar1;
    puStack_14 = &stack0xfffe;
    local_6 = SELECTPALETTE(0x14d0,0,param_3);
    REALIZEPALETTE(0x14d0,uVar1,uVar4);
  }
  uVar4 = uVar1;
  GETDIBITS(0x14d0,0,iVar2,uVar3,(int)param_1,(int)((ulong)param_1 >> 0x10),
            *(undefined2 *)(iVar2 + 8),0,param_4);
  DAT_1160_1858 = (undefined2 *)uVar4;
  uStack_16 = 0x14d0;
  if (local_6 != 0) {
    SELECTPALETTE(0x14d0,0,local_6);
  }
  RELEASEDC(0x14d0,uVar1);
  return;
}



/* ---- FUN_1128_38b5 @ 1128:38b5  (35 octets) ---- */

undefined __stdcall16far
FUN_1128_38b5(undefined4 param_1,undefined4 param_2,undefined2 param_3,undefined2 param_4)

{
  undefined uVar1;
  
  uVar1 = FUN_1128_3803((int)param_1,(int)((ulong)param_1 >> 0x10),(int)param_2,
                        (int)((ulong)param_2 >> 0x10),param_3,param_4);
  return uVar1;
}



/* ---- FUN_1128_38e2 @ 1128:38e2  (242 octets) ---- */

undefined2 * FUN_1128_38e2(int *param_1,undefined2 param_2,undefined2 param_3,int param_4)

{
  int iVar1;
  long lVar2;
  uint uVar3;
  undefined2 uVar4;
  uint local_c;
  int local_a;
  int local_8;
  undefined4 local_6;
  
  if (param_4 == 0) {
    FUN_1128_2563();
  }
  FUN_1128_3798(param_2,&local_c);
  uVar3 = local_8 + 0xe;
  uVar4 = (undefined2)((ulong)param_1 >> 0x10);
  *param_1 = uVar3 + local_c;
  ((int *)param_1)[1] = ((int)uVar3 >> 0xf) + local_a + (uint)CARRY2(uVar3,local_c);
  local_6 = (undefined2 *)FUN_1128_25af();
  DAT_1160_1858 = &stack0xffdc;
  FUN_1158_1ee5(0,*param_1,local_6);
  *local_6 = 0x4d42;
  iVar1 = ((int *)param_1)[1];
  ((undefined2 *)local_6)[1] = *param_1;
  ((undefined2 *)local_6)[2] = iVar1;
  ((undefined2 *)local_6)[5] = local_8 + 0xe;
  ((undefined2 *)local_6)[6] = local_8 + 0xe >> 0xf;
  lVar2 = (long)(local_6 + 7) + (long)local_8;
  uVar4 = (undefined2)lVar2;
  FUN_1128_3803(lVar2,local_6 + 7,param_3,param_4);
  DAT_1160_1858 = (undefined *)uVar4;
  return local_6;
}



/* ---- FUN_1128_39f5 @ 1128:39f5  (117 octets) ---- */

void __cdecl16far FUN_1128_39f5(undefined2 param_1,undefined2 param_2,undefined4 *param_3)

{
  undefined2 *puVar1;
  undefined *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  char in_stack_00000002;
  undefined2 local_6 [2];
  
  uVar4 = FUN_1128_38e2(local_6);
  DAT_1160_1858 = (undefined4 *)&stack0xffee;
  puVar2 = &stack0xffee;
  if (in_stack_00000002 != '\0') {
    puVar1 = (undefined2 *)((int)*param_3 + 4);
    (*(code *)*puVar1)();
    puVar2 = (undefined *)DAT_1160_1858;
  }
  DAT_1160_1858 = (undefined4 *)puVar2;
  puVar1 = (undefined2 *)((int)*param_3 + 4);
  puVar3 = (undefined4 *)param_3;
  (*(code *)*puVar1)();
  DAT_1160_1858 = puVar3;
  FUN_1158_019c(local_6[0],uVar4);
  return;
}



/* ---- FUN_1128_3a8c @ 1128:3a8c  (139 octets) ---- */

void __cdecl16far FUN_1128_3a8c(void)

{
  int iVar1;
  int iVar2;
  long lVar3;
  undefined2 uStack_54;
  
  uStack_54 = 0x3a9e;
  FUN_1158_1ee5();
  uStack_54 = 0x3aac;
  FUN_1158_1ee5();
  lVar3 = LOCKRESOURCE();
  if (lVar3 == 0) {
    FUN_1128_256e();
  }
  iVar2 = GETDC();
  if (iVar2 == 0) {
    FUN_1128_2584();
  }
  uStack_54 = DAT_1160_1858;
  DAT_1160_1858 = &uStack_54;
  GETDEVICECAPS(0x14d0,0xc);
  iVar1 = iVar2;
  GETDEVICECAPS(0x14d0,0xe);
  DAT_1160_1858 = (undefined2 *)iVar1;
  uStack_54 = 0x3b17;
  RELEASEDC(0x14d0,iVar2);
  return;
}



/* ---- FUN_1128_3dd1 @ 1128:3dd1  (297 octets) ---- */

void __cdecl16far
FUN_1128_3dd1(int param_1,undefined2 param_2,char param_3,undefined2 param_4,undefined4 *param_5)

{
  undefined2 *puVar1;
  undefined4 *puVar2;
  undefined2 uVar3;
  undefined *puStack_42;
  undefined *puStack_40;
  undefined2 uStack_3e;
  undefined2 uStack_3c;
  undefined2 uStack_3a;
  int iStack_38;
  undefined4 local_24;
  undefined4 local_20;
  undefined2 local_1c;
  int local_1a;
  undefined2 local_18;
  undefined2 local_16;
  undefined2 local_4;
  
  iStack_38 = 0x3de3;
  FUN_1158_1ee5();
  local_18 = 0xcdd7;
  local_16 = 0x9ac6;
  iStack_38 = param_1;
  uStack_3a = 0x1158;
  uStack_3c = 0x3e01;
  FUN_1148_0688();
  iStack_38 = 0x1148;
  uStack_3a = 0x3e0d;
  FUN_1158_161b();
  local_4 = FUN_1128_354a();
  local_1a = COPYMETAFILE();
  if (local_1a == 0) {
    FUN_1128_2584();
  }
  DAT_1160_1858 = (undefined **)&stack0xffca;
  iStack_38 = local_1a;
  uStack_3a = 0x14d0;
  uStack_3c = 0x3e4c;
  uStack_3a = GETMETAFILEBITS();
  DAT_1160_1858 = (undefined **)&iStack_38;
  uStack_3c = 0x14d0;
  uStack_3e = 16000;
  local_1c = uStack_3a;
  local_20 = GLOBALLOCK();
  uStack_3c = 0x14d0;
  uStack_3e = 0x3dc5;
  puStack_42 = (undefined *)DAT_1160_1858;
  DAT_1160_1858 = &puStack_42;
  puStack_40 = &stack0xfffe;
  local_24 = GLOBALSIZE(0x14d0,local_1c);
  local_24 = local_24 + 0x16;
  puVar2 = (undefined4 *)param_5;
  uVar3 = (undefined2)((ulong)param_5 >> 0x10);
  if (param_3 != '\0') {
    puVar1 = (undefined2 *)((int)*param_5 + 4);
    (*(code *)*puVar1)(0x14d0,puVar2,uVar3,4,0,&local_24);
  }
  puVar1 = (undefined2 *)((int)*param_5 + 4);
  (*(code *)*puVar1)(0x14d0,puVar2,uVar3,0x16,0,&local_18);
  puVar1 = (undefined2 *)((int)*param_5 + 4);
  (*(code *)*puVar1)(0x14d0,puVar2,uVar3,(uint)local_24 - 0x16,
                     local_24._2_2_ - (uint)((uint)local_24 < 0x16),(int)local_20,
                     (int)((ulong)local_20 >> 0x10));
  DAT_1160_1858 = (undefined **)puVar2;
  GLOBALUNLOCK(0x14d0,local_1c,0x3f0c,0x14d0);
  return;
}



/* ---- FUN_1128_3f5a @ 1128:3f5a  (84 octets) ---- */

void __stdcall16far FUN_1128_3f5a(undefined4 param_1,int *param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 local_4;
  
  *param_2 = -1;
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  iVar2 = *(int *)((int)param_1 + 8) + -1;
  if (-1 < iVar2) {
    local_4 = 0;
    while (uVar1 = *(undefined4 *)((int)param_1 + 4), *(int *)((int)uVar1 + local_4 * 4) != param_3)
    {
      if (local_4 == iVar2) {
        return;
      }
      local_4 = local_4 + 1;
    }
    *param_2 = local_4;
  }
  return;
}



/* ---- FUN_1128_3fae @ 1128:3fae  (84 octets) ---- */

void __stdcall16far FUN_1128_3fae(undefined4 param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 unaff_SS;
  int local_4;
  
  if (param_2 != 0) {
    uVar3 = (undefined2)((ulong)param_1 >> 0x10);
    iVar2 = (int)param_1;
    FUN_1128_3f5a(iVar2,uVar3,&local_4,unaff_SS,param_2);
    if (local_4 < 0) {
      FUN_1148_0c2b(iVar2,uVar3,param_2,1);
    }
    else {
      piVar1 = (int *)((int)*(undefined4 *)(iVar2 + 4) + local_4 * 4 + 2);
      *piVar1 = *piVar1 + 1;
    }
  }
  return;
}



/* ---- FUN_1128_4002 @ 1128:4002  (53 octets) ---- */

undefined4 __stdcall16far FUN_1128_4002(undefined4 param_1,char param_2)

{
  undefined2 uStack_a;
  
  if (param_2 != '\0') {
    FUN_1158_1fe2();
  }
  FUN_1158_1f50((int)param_1,(int)((ulong)param_1 >> 0x10),0);
  if (param_2 != '\0') {
    DAT_1160_1858 = uStack_a;
  }
  return param_1;
}



/* ---- FUN_1128_4037 @ 1128:4037  (103 octets) ---- */

void __stdcall16far FUN_1128_4037(undefined4 *param_1,undefined4 param_2)

{
  undefined2 *puVar1;
  char cVar2;
  undefined4 *puVar3;
  undefined2 uVar4;
  undefined4 uVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  
  cVar2 = FUN_1158_2255(0x6c6,0x1128,(int)param_2,param_2._2_2_);
  puVar3 = (undefined4 *)param_1;
  uVar4 = (undefined2)((ulong)param_1 >> 0x10);
  if (cVar2 != '\0') {
    uVar7 = *(undefined2 *)((int)param_2 + 6);
    uVar6 = *(undefined2 *)((int)param_2 + 4);
    uVar5 = FUN_1158_20dd(puVar3,uVar4);
    cVar2 = FUN_1158_2255(uVar5,uVar6,uVar7);
    if (cVar2 != '\0') {
      puVar1 = (undefined2 *)((int)*param_1 + 8);
      (*(code *)*puVar1)(0x1158,puVar3,uVar4,*(undefined2 *)((int)param_2 + 4),
                         *(undefined2 *)((int)param_2 + 6));
      return;
    }
  }
  FUN_1148_10fa(puVar3,uVar4,(int)param_2,param_2._2_2_);
  return;
}



/* ---- FUN_1128_409e @ 1128:409e  (41 octets) ---- */

void __stdcall16far FUN_1128_409e(undefined4 param_1)

{
  int iVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  *(undefined *)(iVar1 + 0xc) = 1;
  if (*(int *)(iVar1 + 6) != 0) {
    (*(code *)*(undefined2 *)(iVar1 + 4))();
  }
  return;
}



/* ---- FUN_1128_41e0 @ 1128:41e0  (25 octets) ---- */

void __stdcall16far FUN_1128_41e0(undefined4 *param_1)

{
  undefined2 *puVar1;
  
  puVar1 = (undefined2 *)((int)*param_1 + 0x38);
  (*(code *)*puVar1)();
  return;
}



/* ---- FUN_1128_41f9 @ 1128:41f9  (25 octets) ---- */

void __stdcall16far FUN_1128_41f9(undefined4 *param_1)

{
  undefined2 *puVar1;
  
  puVar1 = (undefined2 *)((int)*param_1 + 0x3c);
  (*(code *)*puVar1)();
  return;
}



/* ---- FUN_1128_4212 @ 1128:4212  (45 octets) ---- */

void __stdcall16far FUN_1128_4212(undefined4 param_1,char param_2)

{
  undefined4 uVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  uVar1 = *(undefined4 *)((int)param_1 + 4);
  FUN_1158_1f7f((int)uVar1,(int)((ulong)uVar1 >> 0x10));
  FUN_1158_1f66((int)param_1,uVar2,0);
  if (param_2 != '\0') {
    FUN_1158_200f();
  }
  return;
}



/* ---- FUN_1128_423f @ 1128:423f  (127 octets) ---- */

void __stdcall16far FUN_1128_423f(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined4 uVar6;
  
  uVar4 = (undefined2)((ulong)param_1 >> 0x10);
  iVar2 = (int)param_1;
  cVar1 = FUN_1158_2255((int)param_2,param_2._2_2_,*(undefined2 *)(iVar2 + 4),
                        *(undefined2 *)(iVar2 + 6));
  if (cVar1 == '\0') {
    FUN_1158_1f7f((int)*(undefined4 *)(iVar2 + 4),(int)((ulong)*(undefined4 *)(iVar2 + 4) >> 0x10));
    *(undefined2 *)(iVar2 + 4) = 0;
    *(undefined2 *)(iVar2 + 6) = 0;
    uVar6 = (*(code *)*(undefined2 *)((int)param_2 + 0xc))(0x1158,(int)param_2,param_2._2_2_,1);
    *(undefined2 *)(iVar2 + 4) = (int)uVar6;
    *(undefined2 *)(iVar2 + 6) = (int)((ulong)uVar6 >> 0x10);
    uVar5 = (undefined2)((ulong)*(undefined4 *)(iVar2 + 4) >> 0x10);
    iVar3 = (int)*(undefined4 *)(iVar2 + 4);
    *(undefined2 *)(iVar3 + 4) = 0x45b8;
    *(undefined2 *)(iVar3 + 6) = 0x1128;
    *(int *)(iVar3 + 8) = iVar2;
    *(undefined2 *)(iVar3 + 10) = uVar4;
    FUN_1128_45b8(iVar2,uVar4,iVar2,uVar4);
  }
  return;
}



/* ---- FUN_1128_42be @ 1128:42be  (49 octets) ---- */

undefined4 __stdcall16far FUN_1128_42be(undefined4 param_1)

{
  int iVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  FUN_1128_423f(iVar1,uVar2,0x83f,0x1128);
  return CONCAT22(*(undefined2 *)(iVar1 + 6),*(undefined2 *)(iVar1 + 4));
}



/* ---- FUN_1128_42f9 @ 1128:42f9  (169 octets) ---- */

void __stdcall16far FUN_1128_42f9(undefined4 param_1,undefined4 param_2)

{
  undefined2 *puVar1;
  undefined4 *puVar2;
  undefined2 uVar3;
  int iVar4;
  undefined2 uVar5;
  undefined4 local_6;
  
  local_6 = (undefined4 *)0x0;
  iVar4 = (int)param_1;
  uVar5 = (undefined2)((ulong)param_1 >> 0x10);
  if ((int)param_2 != 0 || param_2._2_2_ != 0) {
    FUN_1158_20dd();
    local_6 = (undefined4 *)FUN_1158_1f50();
    uVar3 = (undefined2)((ulong)local_6 >> 0x10);
    puVar2 = (undefined4 *)local_6;
    puVar1 = (undefined2 *)((int)*local_6 + 8);
    (*(code *)*puVar1)(0x1158);
    *(undefined2 *)(puVar2 + 1) = 0x45b8;
    *(undefined2 *)((int)puVar2 + 6) = 0x1128;
    *(int *)(puVar2 + 2) = iVar4;
    *(undefined2 *)((int)puVar2 + 10) = uVar5;
  }
  uVar3 = DAT_1160_1858;
  DAT_1160_1858 = &stack0xfff2;
  FUN_1158_1f7f((int)*(undefined4 *)(iVar4 + 4),(int)((ulong)*(undefined4 *)(iVar4 + 4) >> 0x10));
  *(undefined2 *)(iVar4 + 4) = (undefined4 *)local_6;
  *(undefined2 *)(iVar4 + 6) = local_6._2_2_;
  FUN_1128_45b8(iVar4,uVar5,iVar4,uVar5);
  DAT_1160_1858 = (undefined *)uVar3;
  return;
}



/* ---- FUN_1128_43c0 @ 1128:43c0  (218 octets) ---- */

void __stdcall16far
FUN_1128_43c0(undefined4 param_1,undefined2 param_2,undefined2 param_3,int param_4)

{
  undefined2 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  undefined4 *puVar7;
  undefined2 uStack_1c;
  undefined *puStack_1a;
  undefined2 uStack_18;
  undefined4 local_e;
  undefined4 *local_a;
  int local_8;
  
  local_a = DAT_1160_12f4;
  local_8 = DAT_1160_12f6;
  while( true ) {
    if (local_a == (undefined4 *)0x0 && local_8 == 0) {
      FUN_1128_2536();
      return;
    }
    local_e = (undefined4 *)CONCAT22(local_8,local_a);
    if (param_4 == *(int *)(local_a + 1)) break;
    puVar1 = (undefined2 *)((int)local_a + 6);
    local_8 = *(int *)(local_a + 2);
    local_a = (undefined4 *)*puVar1;
  }
  puVar1 = (undefined2 *)((int)*local_e + 0xc);
  uStack_18 = 0x440e;
  puVar7 = (undefined4 *)(*(code *)*puVar1)();
  uStack_18 = 0x43b6;
  uStack_1c = DAT_1160_1858;
  puVar1 = (undefined2 *)((int)*puVar7 + 0x40);
  DAT_1160_1858 = (undefined4 *)&uStack_1c;
  puVar2 = (undefined4 *)puVar7;
  puStack_1a = &stack0xfffe;
  (*(code *)*puVar1)();
  DAT_1160_1858 = puVar2;
  uVar5 = (undefined2)((ulong)param_1 >> 0x10);
  iVar3 = (int)param_1;
  FUN_1158_1f7f((int)*(undefined4 *)(iVar3 + 4),(int)((ulong)*(undefined4 *)(iVar3 + 4) >> 0x10));
  *(undefined2 *)(iVar3 + 4) = (undefined4 *)puVar7;
  *(undefined2 *)(iVar3 + 6) = (int)((ulong)puVar7 >> 0x10);
  uVar6 = (undefined2)((ulong)*(undefined4 *)(iVar3 + 4) >> 0x10);
  iVar4 = (int)*(undefined4 *)(iVar3 + 4);
  *(undefined2 *)(iVar4 + 4) = 0x45b8;
  *(undefined2 *)(iVar4 + 6) = 0x1128;
  *(int *)(iVar4 + 8) = iVar3;
  *(undefined2 *)(iVar4 + 10) = uVar5;
  FUN_1128_45b8(iVar3,uVar5,iVar3,uVar5);
  return;
}



/* ---- FUN_1128_44ae @ 1128:44ae  (51 octets) ---- */

void __stdcall16far FUN_1128_44ae(undefined4 param_1)

{
  undefined2 *puVar1;
  int iVar2;
  undefined2 uVar3;
  
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  iVar2 = (int)param_1;
  if (*(int *)(iVar2 + 4) != 0 || *(int *)(iVar2 + 6) != 0) {
    puVar1 = (undefined2 *)((int)*(undefined4 *)*(undefined4 *)(iVar2 + 4) + 0x44);
    (*(code *)*puVar1)();
  }
  return;
}



/* ---- FUN_1128_44e1 @ 1128:44e1  (79 octets) ---- */

undefined __stdcall16far FUN_1128_44e1(undefined2 param_1_00,undefined2 param_2,int param_1)

{
  int *piVar1;
  int local_8;
  int local_6;
  
  local_8 = DAT_1160_12f4;
  local_6 = DAT_1160_12f6;
  while( true ) {
    if (local_8 == 0 && local_6 == 0) {
      return 0;
    }
    if (param_1 == *(int *)(local_8 + 4)) break;
    piVar1 = (int *)(local_8 + 6);
    local_6 = *(int *)(local_8 + 8);
    local_8 = *piVar1;
  }
  return 1;
}



/* ---- FUN_1128_4532 @ 1128:4532  (134 octets) ---- */

void __stdcall16far FUN_1128_4532(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  
  uVar2 = (undefined2)param_1;
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  if ((int)param_2 == 0 && param_2._2_2_ == 0) {
    FUN_1128_42f9(uVar2,uVar3,0,0);
  }
  else {
    cVar1 = FUN_1158_2255(0x6c6,0x1128,(int)param_2,param_2._2_2_);
    if (cVar1 == '\0') {
      cVar1 = FUN_1158_2255(0x636,0x1128,(int)param_2,param_2._2_2_);
      if (cVar1 == '\0') {
        FUN_1148_10fa(uVar2,uVar3,(int)param_2,param_2._2_2_);
      }
      else {
        FUN_1128_42f9(uVar2,uVar3,(int)param_2,param_2._2_2_);
      }
    }
    else {
      FUN_1128_42f9(uVar2,uVar3,*(undefined2 *)((int)param_2 + 4),*(undefined2 *)((int)param_2 + 6))
      ;
    }
  }
  return;
}



/* ---- FUN_1128_45b8 @ 1128:45b8  (36 octets) ---- */

void __stdcall16far FUN_1128_45b8(undefined4 param_1)

{
  undefined2 *puVar1;
  
  if (*(int *)((int)param_1 + 10) != 0) {
    puVar1 = (undefined2 *)((int)param_1 + 8);
    (*(code *)*puVar1)();
  }
  return;
}



/* ---- FUN_1128_47c5 @ 1128:47c5  (45 octets) ---- */

undefined2 __stdcall16far FUN_1128_47c5(undefined4 param_1)

{
  undefined2 *puVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 local_4;
  
  local_4 = 0;
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  iVar2 = (int)param_1;
  if (*(int *)(iVar2 + 4) != 0 || *(int *)(iVar2 + 6) != 0) {
    puVar1 = (undefined2 *)((int)*(undefined4 *)*(undefined4 *)(iVar2 + 4) + 0x1c);
    local_4 = (*(code *)*puVar1)();
  }
  return local_4;
}



/* ---- FUN_1128_47f2 @ 1128:47f2  (45 octets) ---- */

undefined2 __stdcall16far FUN_1128_47f2(undefined4 param_1)

{
  undefined2 *puVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 local_4;
  
  local_4 = 0;
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  iVar2 = (int)param_1;
  if (*(int *)(iVar2 + 4) != 0 || *(int *)(iVar2 + 6) != 0) {
    puVar1 = (undefined2 *)((int)*(undefined4 *)*(undefined4 *)(iVar2 + 4) + 0x18);
    local_4 = (*(code *)*puVar1)();
  }
  return local_4;
}



/* ---- FUN_1128_481f @ 1128:481f  (14 octets) ---- */

void __stdcall16far FUN_1128_481f(undefined4 param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int)param_1 + 4);
  *piVar1 = *piVar1 + 1;
  return;
}



/* ---- FUN_1128_482d @ 1128:482d  (55 octets) ---- */

void __stdcall16far FUN_1128_482d(undefined4 param_1)

{
  if ((int)param_1 != 0 || param_1._2_2_ != 0) {
    *(int *)((int)param_1 + 4) = *(int *)((int)param_1 + 4) + -1;
    if (*(int *)((int)param_1 + 4) == 0) {
      if (*(int *)((int)param_1 + 6) != 0) {
        DELETEMETAFILE();
      }
      FUN_1158_1f7f((int)param_1,param_1._2_2_);
    }
  }
  return;
}



/* ---- FUN_1128_4864 @ 1128:4864  (45 octets) ---- */

void __stdcall16far FUN_1128_4864(undefined4 param_1,char param_2)

{
  undefined4 uVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  uVar1 = *(undefined4 *)((int)param_1 + 0xe);
  FUN_1128_482d((int)uVar1,(int)((ulong)uVar1 >> 0x10));
  FUN_1158_1f66((int)param_1,uVar2,0);
  if (param_2 != '\0') {
    FUN_1158_200f();
  }
  return;
}



/* ---- FUN_1128_4891 @ 1128:4891  (159 octets) ---- */

void __stdcall16far FUN_1128_4891(undefined4 param_1,undefined4 param_2)

{
  undefined2 uVar1;
  char cVar2;
  int iVar3;
  undefined2 uVar4;
  undefined4 uVar5;
  
  iVar3 = (int)param_1;
  uVar4 = (undefined2)((ulong)param_1 >> 0x10);
  if (((int)param_2 != 0 || param_2._2_2_ != 0) &&
     (cVar2 = FUN_1158_2255(0x749,0x1128,(int)param_2,param_2._2_2_), cVar2 == '\0')) {
    FUN_1128_4037(iVar3,uVar4,(int)param_2,param_2._2_2_);
    return;
  }
  FUN_1128_482d((int)*(undefined4 *)(iVar3 + 0xe),(int)((ulong)*(undefined4 *)(iVar3 + 0xe) >> 0x10)
               );
  if ((int)param_2 == 0 && param_2._2_2_ == 0) {
    uVar5 = FUN_1158_1f50(0x71a,0x1128,1);
    *(undefined2 *)(iVar3 + 0xe) = (int)uVar5;
    *(undefined2 *)(iVar3 + 0x10) = (int)((ulong)uVar5 >> 0x10);
  }
  else {
    uVar1 = *(undefined2 *)((int)param_2 + 0x10);
    *(undefined2 *)(iVar3 + 0xe) = *(undefined2 *)((int)param_2 + 0xe);
    *(undefined2 *)(iVar3 + 0x10) = uVar1;
  }
  FUN_1128_481f((int)*(undefined4 *)(iVar3 + 0xe),(int)((ulong)*(undefined4 *)(iVar3 + 0xe) >> 0x10)
               );
  FUN_1128_409e(iVar3,uVar4,iVar3,uVar4);
  return;
}



/* ---- FUN_1128_4930 @ 1128:4930  (170 octets) ---- */

void __stdcall16far FUN_1128_4930(undefined4 param_1)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  int iVar4;
  undefined2 uVar5;
  undefined4 uVar6;
  
  uVar5 = (undefined2)((ulong)param_1 >> 0x10);
  iVar4 = (int)param_1;
  if (1 < *(int *)((int)*(undefined4 *)(iVar4 + 0xe) + 4)) {
    uVar6 = FUN_1158_1f50(0x71a,0x1128,1);
    uVar3 = (undefined2)((ulong)uVar6 >> 0x10);
    iVar1 = (int)uVar6;
    uVar2 = COPYMETAFILE(0x1158,0,0);
    *(undefined2 *)(iVar1 + 6) = uVar2;
    *(undefined2 *)(iVar1 + 10) = *(undefined2 *)((int)*(undefined4 *)(iVar4 + 0xe) + 10);
    *(undefined2 *)(iVar1 + 8) = *(undefined2 *)((int)*(undefined4 *)(iVar4 + 0xe) + 8);
    *(undefined2 *)(iVar1 + 0xc) = *(undefined2 *)((int)*(undefined4 *)(iVar4 + 0xe) + 0xc);
    FUN_1128_482d((int)*(undefined4 *)(iVar4 + 0xe),
                  (int)((ulong)*(undefined4 *)(iVar4 + 0xe) >> 0x10));
    *(int *)(iVar4 + 0xe) = iVar1;
    *(undefined2 *)(iVar4 + 0x10) = uVar3;
    FUN_1128_481f((int)*(undefined4 *)(iVar4 + 0xe),
                  (int)((ulong)*(undefined4 *)(iVar4 + 0xe) >> 0x10));
  }
  return;
}



/* ---- FUN_1128_49da @ 1128:49da  (59 octets) ---- */

void __stdcall16far FUN_1128_49da(undefined4 param_1)

{
  undefined extraout_AH;
  int iVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  FUN_1128_482d((int)*(undefined4 *)(iVar1 + 0xe),(int)((ulong)*(undefined4 *)(iVar1 + 0xe) >> 0x10)
               );
  uVar3 = FUN_1158_1f50(0x71a,0x1128,CONCAT11(extraout_AH,1));
  *(undefined2 *)(iVar1 + 0xe) = (int)uVar3;
  *(undefined2 *)(iVar1 + 0x10) = (int)((ulong)uVar3 >> 0x10);
  FUN_1128_481f((int)*(undefined4 *)(iVar1 + 0xe),(int)((ulong)*(undefined4 *)(iVar1 + 0xe) >> 0x10)
               );
  return;
}



/* ---- FUN_1128_4a15 @ 1128:4a15  (30 octets) ---- */

uint __stdcall16far FUN_1128_4a15(undefined4 param_1)

{
  uint uVar1;
  uint uVar2;
  undefined2 uVar3;
  
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  uVar1 = *(uint *)((int)param_1 + 0xe) | *(uint *)((int)param_1 + 0x10);
  uVar2 = uVar1 & 0xff00;
  if (uVar1 == 0) {
    uVar2 = uVar2 + 1;
  }
  return uVar2;
}



/* ---- FUN_1128_4a33 @ 1128:4a33  (80 octets) ---- */

undefined2 __stdcall16far FUN_1128_4a33(undefined4 param_1)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 unaff_CS;
  undefined2 local_4;
  
  local_4 = 0;
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  if (*(int *)(iVar1 + 0xe) != 0 || *(int *)(iVar1 + 0x10) != 0) {
    uVar3 = (undefined2)((ulong)*(undefined4 *)(iVar1 + 0xe) >> 0x10);
    iVar1 = (int)*(undefined4 *)(iVar1 + 0xe);
    local_4 = *(undefined2 *)(iVar1 + 10);
    if (*(int *)(iVar1 + 0xc) != 0) {
      local_4 = MULDIV(unaff_CS,*(undefined2 *)(iVar1 + 0xc),
                       *(undefined2 *)((int)DAT_1160_2c2e + 0x1e));
    }
  }
  return local_4;
}



/* ---- FUN_1128_4a83 @ 1128:4a83  (80 octets) ---- */

undefined2 __stdcall16far FUN_1128_4a83(undefined4 param_1)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 unaff_CS;
  undefined2 local_4;
  
  local_4 = 0;
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  if (*(int *)(iVar1 + 0xe) != 0 || *(int *)(iVar1 + 0x10) != 0) {
    uVar3 = (undefined2)((ulong)*(undefined4 *)(iVar1 + 0xe) >> 0x10);
    iVar1 = (int)*(undefined4 *)(iVar1 + 0xe);
    local_4 = *(undefined2 *)(iVar1 + 8);
    if (*(int *)(iVar1 + 0xc) != 0) {
      local_4 = MULDIV(unaff_CS,*(undefined2 *)(iVar1 + 0xc),
                       *(undefined2 *)((int)DAT_1160_2c2e + 0x1e));
    }
  }
  return local_4;
}



/* ---- FUN_1128_4ad3 @ 1128:4ad3  (121 octets) ---- */

void __stdcall16far FUN_1128_4ad3(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined2 unaff_CS;
  
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  if (*(int *)(iVar1 + 0xe) == 0 && *(int *)(iVar1 + 0x10) == 0) {
    unaff_CS = 0x1128;
    FUN_1128_49da(iVar1,uVar3);
  }
  uVar4 = (undefined2)((ulong)*(undefined4 *)(iVar1 + 0xe) >> 0x10);
  iVar2 = (int)*(undefined4 *)(iVar1 + 0xe);
  if (*(int *)(iVar2 + 0xc) != 0) {
    param_2 = MULDIV(unaff_CS,*(undefined2 *)((int)DAT_1160_2c2e + 0x1e),
                     *(undefined2 *)(iVar2 + 0xc));
  }
  if (*(int *)((int)*(undefined4 *)(iVar1 + 0xe) + 10) != param_2) {
    FUN_1128_4930(iVar1,uVar3);
    *(int *)((int)*(undefined4 *)(iVar1 + 0xe) + 10) = param_2;
    FUN_1128_409e(iVar1,uVar3,iVar1,uVar3);
  }
  return;
}



/* ---- FUN_1128_4b4c @ 1128:4b4c  (115 octets) ---- */

void __stdcall16far FUN_1128_4b4c(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined2 unaff_CS;
  
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  if (*(int *)(iVar1 + 0xe) == 0 && *(int *)(iVar1 + 0x10) == 0) {
    unaff_CS = 0x1128;
    FUN_1128_49da(iVar1,uVar3);
  }
  uVar4 = (undefined2)((ulong)*(undefined4 *)(iVar1 + 0xe) >> 0x10);
  iVar2 = (int)*(undefined4 *)(iVar1 + 0xe);
  if (*(int *)(iVar2 + 0xc) != 0) {
    param_2 = MULDIV(unaff_CS,0x60,*(undefined2 *)(iVar2 + 0xc));
  }
  if (*(int *)((int)*(undefined4 *)(iVar1 + 0xe) + 8) != param_2) {
    FUN_1128_4930(iVar1,uVar3);
    *(int *)((int)*(undefined4 *)(iVar1 + 0xe) + 8) = param_2;
    FUN_1128_409e(iVar1,uVar3,iVar1,uVar3);
  }
  return;
}



/* ---- FUN_1128_4bbf @ 1128:4bbf  (115 octets) ---- */

void __stdcall16far FUN_1128_4bbf(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined2 local_6;
  undefined2 local_4;
  
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  FUN_1128_49da(iVar1,uVar3);
  uVar4 = (undefined2)((ulong)param_2 >> 0x10);
  (*(code *)*(undefined2 *)(undefined2 *)*param_2)(0x1128,(undefined4 *)param_2,uVar4,4,0,&local_6);
  uVar5 = (undefined2)((ulong)*(undefined4 *)(iVar1 + 0xe) >> 0x10);
  iVar2 = (int)*(undefined4 *)(iVar1 + 0xe);
  FUN_1128_35a5(iVar2 + 0xc,uVar5,iVar2 + 10,uVar5,iVar2 + 8,uVar5,local_6,local_4,iVar2 + 6,uVar5,
                (undefined4 *)param_2,uVar4);
  FUN_1128_409e(iVar1,uVar3,iVar1,uVar3);
  return;
}



/* ---- FUN_1128_4c32 @ 1128:4c32  (52 octets) ---- */

void __stdcall16far FUN_1128_4c32(undefined4 param_1,undefined2 param_2,undefined2 param_3)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  if (*(int *)(iVar1 + 0xe) != 0 || *(int *)(iVar1 + 0x10) != 0) {
    uVar3 = (undefined2)((ulong)*(undefined4 *)(iVar1 + 0xe) >> 0x10);
    iVar1 = (int)*(undefined4 *)(iVar1 + 0xe);
    FUN_1128_3dd1(*(undefined2 *)(iVar1 + 10),*(undefined2 *)(iVar1 + 8),1,
                  *(undefined2 *)(iVar1 + 6),param_2,param_3);
  }
  return;
}



/* ---- FUN_1128_4c66 @ 1128:4c66  (190 octets) ---- */

void __stdcall16far FUN_1128_4c66(undefined4 param_1,int *param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined2 unaff_SS;
  int local_a;
  int local_8;
  undefined2 local_6;
  undefined2 local_4;
  
  uVar4 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  if (*(int *)(iVar1 + 0xe) != 0 || *(int *)(iVar1 + 0x10) != 0) {
    local_6 = FUN_1128_21d2((int)param_3,(int)((ulong)param_3 >> 0x10));
    local_4 = SAVEDC(0x1128,local_6);
    SETMAPMODE(0x14d0,8);
    uVar5 = (undefined2)((ulong)*(undefined4 *)(iVar1 + 0xe) >> 0x10);
    iVar2 = (int)*(undefined4 *)(iVar1 + 0xe);
    SETWINDOWEXTEX(0x14d0,0,0,*(undefined2 *)(iVar2 + 10),*(undefined2 *)(iVar2 + 8));
    uVar5 = (undefined2)((ulong)param_2 >> 0x10);
    piVar3 = (int *)param_2;
    SETVIEWPORTEXTEX(0x14d0,0,0,piVar3[3] - piVar3[1],piVar3[2] - *param_2);
    GETVIEWPORTORGEX(0x14d0,&local_a,unaff_SS);
    SETVIEWPORTORGEX(0x14d0,0,0,local_8 + piVar3[1],local_a + *param_2);
    PLAYMETAFILE(0x14d0,*(undefined2 *)((int)*(undefined4 *)(iVar1 + 0xe) + 6));
    RESTOREDC(0x14d0,local_4);
  }
  return;
}



/* ---- FUN_1128_4d24 @ 1128:4d24  (119 octets) ---- */

void __stdcall16far FUN_1128_4d24(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  long lVar6;
  long lVar7;
  undefined2 uVar8;
  undefined2 uVar9;
  undefined2 uVar10;
  
  uVar4 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  FUN_1128_49da(iVar1,uVar4);
  uVar5 = (undefined2)((ulong)*(undefined4 *)(iVar1 + 0xe) >> 0x10);
  iVar2 = (int)*(undefined4 *)(iVar1 + 0xe);
  iVar3 = iVar2 + 6;
  uVar8 = uVar5;
  uVar9 = (undefined2)param_2;
  uVar10 = param_2._2_2_;
  lVar6 = FUN_1148_237e((undefined2)param_2,param_2._2_2_);
  lVar7 = FUN_1148_23bf((undefined2)param_2,param_2._2_2_);
  FUN_1128_35a5(iVar2 + 0xc,uVar5,iVar2 + 10,uVar5,iVar2 + 8,uVar5,lVar7 - lVar6,iVar3,uVar8,uVar9,
                uVar10);
  FUN_1128_409e(iVar1,uVar4,iVar1,uVar4);
  return;
}



/* ---- FUN_1128_4d9b @ 1128:4d9b  (52 octets) ---- */

void __stdcall16far FUN_1128_4d9b(undefined4 param_1,undefined2 param_2,undefined2 param_3)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  if (*(int *)(iVar1 + 0xe) != 0 || *(int *)(iVar1 + 0x10) != 0) {
    uVar3 = (undefined2)((ulong)*(undefined4 *)(iVar1 + 0xe) >> 0x10);
    iVar1 = (int)*(undefined4 *)(iVar1 + 0xe);
    FUN_1128_3dd1(*(undefined2 *)(iVar1 + 10),*(undefined2 *)(iVar1 + 8),0,
                  *(undefined2 *)(iVar1 + 6),param_2,param_3);
  }
  return;
}



/* ---- FUN_1128_5102 @ 1128:5102  (96 octets) ---- */

void FUN_1128_5102(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  int local_4;
  
  local_4 = *(int *)((int)DAT_1160_2b70 + 8) + -1;
  if (-1 < local_4) {
    while( true ) {
      uVar4 = FUN_1148_0dd0((int)DAT_1160_2b70,(int)((ulong)DAT_1160_2b70 >> 0x10),local_4);
      uVar3 = (undefined2)((ulong)uVar4 >> 0x10);
      iVar2 = (int)uVar4;
      if ((*(int *)(iVar2 + 0x2b) != 0 || *(int *)(iVar2 + 0x2d) != 0) &&
         (uVar1 = *(undefined4 *)((int)*(undefined4 *)(iVar2 + 0x2b) + 0xe),
         *(int *)((int)uVar1 + 10) == param_1)) {
        FUN_1128_51d1(uVar4);
      }
      if (local_4 == 0) break;
      local_4 = local_4 + -1;
    }
  }
  return;
}



/* ---- FUN_1128_5162 @ 1128:5162  (70 octets) ---- */

undefined4 __stdcall16far
FUN_1128_5162(undefined4 param_1,char param_2,undefined2 param_3,undefined2 param_4)

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



/* ---- FUN_1128_51a8 @ 1128:51a8  (41 octets) ---- */

void __stdcall16far FUN_1128_51a8(undefined4 param_1,char param_2)

{
  undefined2 uVar1;
  
  uVar1 = (undefined2)((ulong)param_1 >> 0x10);
  FUN_1128_51d1((int)param_1,uVar1);
  FUN_1128_18b7((int)param_1,uVar1,0);
  if (param_2 != '\0') {
    FUN_1158_200f();
  }
  return;
}



/* ---- FUN_1128_51d1 @ 1128:51d1  (107 octets) ---- */

void __stdcall16far FUN_1128_51d1(undefined4 param_1)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 unaff_CS;
  undefined2 uVar3;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  if (*(int *)(iVar1 + 4) != 0) {
    uVar3 = unaff_CS;
    if (*(int *)(iVar1 + 0x2f) != 0) {
      uVar3 = 0x14d0;
      SELECTOBJECT(unaff_CS,*(undefined2 *)(iVar1 + 0x2f));
    }
    if (*(int *)(iVar1 + 0x31) != 0) {
      SELECTPALETTE(uVar3,1,*(undefined2 *)(iVar1 + 0x31));
    }
    uVar3 = *(undefined2 *)(iVar1 + 4);
    FUN_1128_225d(iVar1,uVar2,0);
    DELETEDC(0x1128,uVar3);
    FUN_1148_0fa7((int)DAT_1160_2b70,(int)((ulong)DAT_1160_2b70 >> 0x10),iVar1,uVar2);
  }
  return;
}



/* ---- FUN_1128_523c @ 1128:523c  (221 octets) ---- */

void __stdcall16far FUN_1128_523c(undefined4 param_1)

{
  undefined4 uVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  int iVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  
  uVar6 = (undefined2)((ulong)param_1 >> 0x10);
  iVar5 = (int)param_1;
  if (*(int *)(iVar5 + 0x2b) != 0 || *(int *)(iVar5 + 0x2d) != 0) {
    FUN_1128_5bc4((int)*(undefined4 *)(iVar5 + 0x2b),
                  (int)((ulong)*(undefined4 *)(iVar5 + 0x2b) >> 0x10));
    uVar1 = *(undefined4 *)((int)*(undefined4 *)(iVar5 + 0x2b) + 0xe);
    FUN_1128_5102(*(undefined2 *)((int)uVar1 + 10));
    uVar7 = 0x1128;
    uVar2 = CREATECOMPATIBLEDC(0x1128,0);
    uVar1 = *(undefined4 *)((int)*(undefined4 *)(iVar5 + 0x2b) + 0xe);
    if (*(int *)((int)uVar1 + 10) == 0) {
      *(undefined2 *)(iVar5 + 0x2f) = 0;
    }
    else {
      uVar1 = *(undefined4 *)((int)*(undefined4 *)(iVar5 + 0x2b) + 0xe);
      uVar7 = uVar2;
      uVar3 = SELECTOBJECT(0x14d0,*(undefined2 *)((int)uVar1 + 10));
      *(undefined2 *)(iVar5 + 0x2f) = uVar3;
    }
    uVar1 = *(undefined4 *)((int)*(undefined4 *)(iVar5 + 0x2b) + 0xe);
    if (*(int *)((int)uVar1 + 0xc) == 0) {
      *(undefined2 *)(iVar5 + 0x31) = 0;
    }
    else {
      uVar1 = *(undefined4 *)((int)*(undefined4 *)(iVar5 + 0x2b) + 0xe);
      uVar3 = uVar2;
      uVar4 = SELECTPALETTE(0x14d0,1,*(undefined2 *)((int)uVar1 + 0xc));
      *(undefined2 *)(iVar5 + 0x31) = uVar4;
      REALIZEPALETTE(0x14d0,uVar2,uVar3,uVar7);
    }
    FUN_1128_225d(iVar5,uVar6,uVar2);
    FUN_1148_0c2b((int)DAT_1160_2b70,(int)((ulong)DAT_1160_2b70 >> 0x10),iVar5,uVar6);
  }
  return;
}



/* ---- FUN_1128_5319 @ 1128:5319  (14 octets) ---- */

void __stdcall16far FUN_1128_5319(undefined4 param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int)param_1 + 4);
  *piVar1 = *piVar1 + 1;
  return;
}



/* ---- FUN_1128_5327 @ 1128:5327  (61 octets) ---- */

void __stdcall16far FUN_1128_5327(undefined4 *param_1)

{
  if ((undefined4 *)param_1 != (undefined4 *)0x0 || param_1._2_2_ != 0) {
    *(int *)((undefined4 *)param_1 + 1) = *(int *)((undefined4 *)param_1 + 1) + -1;
    if (*(int *)((undefined4 *)param_1 + 1) == 0) {
      FUN_1158_1f7f((int)*(undefined4 *)((int)(undefined4 *)param_1 + 6),
                    (int)((ulong)*(undefined4 *)((int)(undefined4 *)param_1 + 6) >> 0x10));
      (*(code *)*(undefined2 *)(undefined2 *)*param_1)(0x1158,(undefined4 *)param_1,param_1._2_2_);
      FUN_1158_1f7f((undefined4 *)param_1,param_1._2_2_);
    }
  }
  return;
}



/* ---- FUN_1128_5364 @ 1128:5364  (70 octets) ---- */

void __stdcall16far FUN_1128_5364(undefined4 param_1)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 unaff_CS;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  if (*(int *)(iVar1 + 10) != 0) {
    FUN_1128_5102(*(undefined2 *)(iVar1 + 10));
    unaff_CS = 0x14d0;
    DELETEOBJECT();
  }
  if (*(int *)(iVar1 + 0xc) != 0) {
    DELETEOBJECT(unaff_CS,*(undefined2 *)(iVar1 + 0xc));
  }
  *(undefined2 *)(iVar1 + 10) = 0;
  *(undefined2 *)(iVar1 + 0xc) = 0;
  return;
}



/* ---- FUN_1128_53c0 @ 1128:53c0  (575 octets) ---- */

undefined2
FUN_1128_53c0(char local_res2,undefined4 param_1,int param_3,undefined *param_4,int param_5,
             int param_6)

{
  int iVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined *puStack_48;
  undefined auStack_46 [4];
  undefined *puStack_42;
  undefined *puStack_3a;
  undefined *puStack_38;
  int iStack_36;
  undefined *puStack_34;
  undefined *puStack_32;
  undefined2 uStack_30;
  undefined *puStack_2e;
  undefined2 uStack_2c;
  undefined2 uStack_2a;
  undefined local_24 [8];
  int local_1c;
  undefined2 local_1a;
  undefined *local_18;
  undefined2 local_16;
  undefined2 local_14;
  int local_4;
  
  local_4 = 0;
  if ((param_6 == 0) && ((param_4 == (undefined *)0x0 || (param_3 == 0)))) {
    return 0;
  }
  uStack_2a = 0x53e5;
  local_18 = (undefined *)GETDC();
  uStack_2a = 0x14d0;
  uStack_2c = 0x53f0;
  local_1a = CREATECOMPATIBLEDC();
  uStack_2a = 0x14d0;
  uStack_2c = 0x53ba;
  uStack_30 = DAT_1160_1858;
  if (local_res2 == '\0') {
    puStack_32 = local_18;
    puStack_34 = param_4;
    iStack_36 = param_3;
    puStack_38 = (undefined *)0x14d0;
    puStack_3a = (undefined *)0x542d;
    DAT_1160_1858 = (undefined **)&uStack_30;
    puStack_2e = &stack0xfffe;
    local_4 = CREATECOMPATIBLEBITMAP();
  }
  else {
    puStack_32 = param_4;
    puStack_34 = (undefined *)param_3;
    iStack_36 = 1;
    puStack_38 = (undefined *)0x1;
    puStack_3a = (undefined *)0x0;
    DAT_1160_1858 = (undefined **)&uStack_30;
    puStack_2e = &stack0xfffe;
    local_4 = CREATEBITMAP();
  }
  if (local_4 == 0) {
    puStack_34 = (undefined *)0x5439;
    FUN_1128_2584();
  }
  puStack_34 = (undefined *)0x14d0;
  iStack_36 = 0x53b0;
  puStack_3a = (undefined *)DAT_1160_1858;
  puStack_42 = (undefined *)0x5452;
  DAT_1160_1858 = &puStack_3a;
  puStack_38 = &stack0xfffe;
  local_16 = SELECTOBJECT();
  if ((int)param_1 == 0 && param_1._2_2_ == 0) {
    puStack_42 = (undefined *)0x0;
    auStack_46._2_2_ = param_4;
    auStack_46._0_2_ = param_3;
    puStack_48 = (undefined *)0xff;
    PATBLT(0x14d0,0x62);
  }
  else {
    puStack_42 = local_24;
    auStack_46._2_2_ = 0;
    auStack_46._0_2_ = 0;
    puStack_48 = param_4;
    FUN_1148_0688(param_3);
    auStack_46._2_2_ = (undefined2)((ulong)*(undefined4 *)((int)param_1 + 0xf) >> 0x10);
    auStack_46._0_2_ = (undefined2)*(undefined4 *)((int)param_1 + 0xf);
    puStack_48 = (undefined *)0x1148;
    auStack_46._2_2_ = FUN_1128_16c0();
    auStack_46._0_2_ = 0x1128;
    puStack_48 = (undefined *)0x5488;
    FILLRECT();
    uVar2 = (undefined2)((ulong)*(undefined4 *)((int)param_1 + 7) >> 0x10);
    iVar1 = (int)*(undefined4 *)((int)param_1 + 7);
    puStack_42 = (undefined *)*(undefined2 *)(iVar1 + 0x12);
    auStack_46._2_2_ = *(undefined2 *)(iVar1 + 0x10);
    auStack_46._0_2_ = 0x14d0;
    puStack_48 = (undefined *)0x549f;
    join_0x00000008_0x00000000_ = FUN_1128_0ca5();
    auStack_46._0_2_ = 0x1128;
    puStack_48 = (undefined *)0x54a6;
    SETTEXTCOLOR();
    puStack_42 = (undefined *)local_1a;
    auStack_46._2_2_ = (undefined2)((ulong)*(undefined4 *)((int)param_1 + 0xf) >> 0x10);
    auStack_46._0_2_ = (undefined2)*(undefined4 *)((int)param_1 + 0xf);
    puStack_48 = (undefined *)0x14d0;
    auStack_46 = (undefined  [4])FUN_1128_1661();
    puStack_48 = (undefined *)0x1128;
    uVar3 = FUN_1128_0ca5();
    puStack_48 = (undefined *)0x1128;
    auStack_46 = (undefined  [4])uVar3;
    SETBKCOLOR();
  }
  if (param_6 == 0) {
    DAT_1160_1858 = (undefined **)iStack_36;
    uStack_30 = 0x14d0;
    puStack_32 = (undefined *)0x5615;
    puStack_34 = (undefined *)local_1a;
    iStack_36 = 0x14d0;
    puStack_38 = (undefined *)0x560a;
    DELETEDC();
    iStack_36 = 0;
    puStack_38 = local_18;
    puStack_3a = (undefined *)0x14d0;
    uVar2 = RELEASEDC();
    return uVar2;
  }
  puStack_42 = (undefined *)0x14d0;
  auStack_46._2_2_ = 0x54ef;
  local_1c = CREATECOMPATIBLEDC();
  if (local_1c == 0) {
    puStack_42 = (undefined *)0x54fb;
    FUN_1128_2584();
  }
  puStack_42 = (undefined *)0x14d0;
  auStack_46._2_2_ = 0x53aa;
  puStack_48 = (undefined *)DAT_1160_1858;
  DAT_1160_1858 = &puStack_48;
  auStack_46._0_2_ = &stack0xfffe;
  FUN_1128_5102(param_6);
  iVar1 = local_1c;
  local_14 = SELECTOBJECT(0x14d0,param_6);
  if (param_5 != 0) {
    iVar4 = local_1c;
    SELECTPALETTE(0x14d0,1,param_5);
    REALIZEPALETTE(0x14d0,local_1c,iVar4,iVar1);
    uVar2 = local_1a;
    SELECTPALETTE(0x14d0,1,param_5);
    REALIZEPALETTE(0x14d0,local_1a,uVar2);
  }
  if ((int)param_1 != 0 || param_1._2_2_ != 0) {
    uVar2 = (undefined2)((ulong)*(undefined4 *)((int)param_1 + 7) >> 0x10);
    iVar1 = (int)*(undefined4 *)((int)param_1 + 7);
    uVar3 = FUN_1128_0ca5(*(undefined2 *)(iVar1 + 0x10),*(undefined2 *)(iVar1 + 0x12));
    SETTEXTCOLOR(0x1128,uVar3);
    uVar3 = FUN_1128_1661((int)*(undefined4 *)((int)param_1 + 0xf),
                          (int)((ulong)*(undefined4 *)((int)param_1 + 0xf) >> 0x10));
    uVar3 = FUN_1128_0ca5(uVar3);
    SETBKCOLOR(0x1128,uVar3);
  }
  BITBLT(0x14d0,0x20,0xcc,0,0,local_1c,param_3,param_4,0,0);
  iVar1 = local_1c;
  SELECTOBJECT(0x14d0,local_14);
  DAT_1160_1858 = (undefined **)iVar1;
  uVar2 = DELETEDC(0x14d0,local_1c,0x55d0,0x14d0);
  return uVar2;
}



/* ---- FUN_1128_5622 @ 1128:5622  (155 octets) ---- */

undefined2 FUN_1128_5622(int local_res2)

{
  undefined2 *puVar1;
  undefined2 uVar2;
  undefined2 *puVar3;
  int local_6;
  
  if (local_res2 == 0) {
    return 0;
  }
  GETOBJECT();
  puVar3 = (undefined2 *)FUN_1158_0182();
  uVar2 = (undefined2)((ulong)puVar3 >> 0x10);
  puVar1 = (undefined2 *)puVar3;
  DAT_1160_1858 = &stack0xffe6;
  *puVar3 = 0x300;
  puVar1[1] = local_6;
  GETPALETTEENTRIES(0x1158,puVar1 + 2,uVar2,local_6,0);
  CREATEPALETTE(0x14d0,puVar1);
  DAT_1160_1858 = (undefined *)uVar2;
  uVar2 = FUN_1158_019c((local_6 + -1) * 4 + 8,puVar3);
  return uVar2;
}



/* ---- FUN_1128_56bd @ 1128:56bd  (91 octets) ---- */

undefined4 __stdcall16far FUN_1128_56bd(undefined4 param_1,char param_2)

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
  FUN_1128_4002(iVar1,uVar2,0);
  uVar3 = FUN_1158_1f50(0x80e,0x1128,CONCAT11(extraout_AH,1));
  *(undefined2 *)(iVar1 + 0xe) = (int)uVar3;
  *(undefined2 *)(iVar1 + 0x10) = (int)((ulong)uVar3 >> 0x10);
  FUN_1128_5319((int)*(undefined4 *)(iVar1 + 0xe),(int)((ulong)*(undefined4 *)(iVar1 + 0xe) >> 0x10)
               );
  if (param_2 != '\0') {
    DAT_1160_1858 = uStack_a;
  }
  return param_1;
}



/* ---- FUN_1128_5718 @ 1128:5718  (59 octets) ---- */

void __stdcall16far FUN_1128_5718(undefined4 param_1,char param_2)

{
  int iVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  FUN_1128_5327((int)*(undefined4 *)(iVar1 + 0xe),(int)((ulong)*(undefined4 *)(iVar1 + 0xe) >> 0x10)
               );
  FUN_1158_1f7f((int)*(undefined4 *)(iVar1 + 0x12),
                (int)((ulong)*(undefined4 *)(iVar1 + 0x12) >> 0x10));
  FUN_1158_1f66(iVar1,uVar2,0);
  if (param_2 != '\0') {
    FUN_1158_200f();
  }
  return;
}



/* ---- FUN_1128_5753 @ 1128:5753  (156 octets) ---- */

void __stdcall16far FUN_1128_5753(undefined4 param_1,undefined4 param_2)

{
  undefined2 uVar1;
  char cVar2;
  int iVar3;
  undefined2 uVar4;
  
  iVar3 = (int)param_1;
  uVar4 = (undefined2)((ulong)param_1 >> 0x10);
  if (((int)param_2 != 0 || param_2._2_2_ != 0) &&
     (cVar2 = FUN_1158_2255(0x83f,0x1128,(int)param_2,param_2._2_2_), cVar2 == '\0')) {
    FUN_1128_4037(iVar3,uVar4,(int)param_2,param_2._2_2_);
    return;
  }
  if ((int)param_2 == 0 && param_2._2_2_ == 0) {
    FUN_1128_5e60(iVar3,uVar4,0,0,0,0,0,0,0);
  }
  else {
    FUN_1128_5319((int)*(undefined4 *)((int)param_2 + 0xe),
                  (int)((ulong)*(undefined4 *)((int)param_2 + 0xe) >> 0x10));
    FUN_1128_5327((int)*(undefined4 *)(iVar3 + 0xe),
                  (int)((ulong)*(undefined4 *)(iVar3 + 0xe) >> 0x10));
    uVar1 = *(undefined2 *)((int)param_2 + 0x10);
    *(undefined2 *)(iVar3 + 0xe) = *(undefined2 *)((int)param_2 + 0xe);
    *(undefined2 *)(iVar3 + 0x10) = uVar1;
  }
  FUN_1128_409e(iVar3,uVar4,iVar3,uVar4);
  return;
}



/* ---- FUN_1128_5803 @ 1128:5803  (135 octets) ---- */

void __stdcall16far
FUN_1128_5803(undefined4 param_1,undefined param_2,undefined2 param_3,undefined2 param_4,
             undefined2 param_5)

{
  undefined extraout_AH;
  undefined2 uVar1;
  undefined2 uVar2;
  int iVar3;
  undefined2 uVar4;
  undefined *puStack_22;
  undefined *puStack_20;
  undefined2 uStack_1e;
  undefined2 uStack_1c;
  undefined2 uStack_1a;
  undefined2 uStack_18;
  undefined *puStack_16;
  undefined2 uStack_14;
  undefined2 uStack_12;
  undefined2 uStack_10;
  undefined2 uStack_e;
  undefined2 uStack_c;
  undefined2 uStack_a;
  
  uVar4 = (undefined2)((ulong)param_1 >> 0x10);
  iVar3 = (int)param_1;
  uStack_a = 0x5810;
  FUN_1128_5ba5();
  uStack_a = param_3;
  uStack_c = *(undefined2 *)(iVar3 + 0x14);
  uStack_e = *(undefined2 *)(iVar3 + 0x12);
  uStack_10 = CONCAT11(extraout_AH,param_2);
  uStack_12 = 0x582e;
  uVar1 = FUN_1128_53c0();
  uStack_12 = 0x1128;
  uStack_14 = 0x57f9;
  uStack_18 = DAT_1160_1858;
  uStack_1a = param_5;
  uStack_1c = 0x5845;
  DAT_1160_1858 = (undefined **)&uStack_18;
  puStack_16 = &stack0xfffe;
  uVar2 = FUN_1128_5622();
  uStack_1c = 0x1128;
  uStack_1e = 0x57ef;
  puStack_22 = (undefined *)DAT_1160_1858;
  DAT_1160_1858 = &puStack_22;
  puStack_20 = &stack0xfffe;
  FUN_1128_5e60(iVar3,uVar4,0,0,CONCAT11(0x57,param_2),param_3,param_4,uVar2,uVar1);
  DAT_1160_1858 = (undefined **)uStack_1a;
  return;
}



/* ---- FUN_1128_58ae @ 1128:58ae  (17 octets) ---- */

void __stdcall16far FUN_1128_58ae(undefined4 param_1)

{
  FUN_1128_598b((int)param_1,(int)((ulong)param_1 >> 0x10));
  return;
}



/* ---- FUN_1128_58bf @ 1128:58bf  (32 octets) ---- */

void __stdcall16far FUN_1128_58bf(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  FUN_1128_5c6a((int)param_1,uVar2);
  puVar1 = (undefined4 *)*(undefined4 *)((int)param_1 + 0xe);
  (*(code *)*(undefined2 *)(undefined2 *)*puVar1)
            (0x1128,(undefined4 *)puVar1,(int)((ulong)puVar1 >> 0x10));
  return;
}



/* ---- FUN_1128_58df @ 1128:58df  (172 octets) ---- */

void __stdcall16far FUN_1128_58df(undefined4 param_1,int *param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined2 uVar8;
  undefined2 uVar9;
  undefined2 uVar10;
  undefined4 uVar11;
  int iVar12;
  int iVar13;
  undefined2 uVar14;
  
  uVar14 = 0xf;
  uVar8 = (undefined2)((ulong)param_1 >> 0x10);
  iVar6 = (int)param_1;
  uVar11 = FUN_1128_5a0f(iVar6,uVar8);
  FUN_1128_22c2(uVar11,uVar14);
  cVar3 = FUN_1128_5af4(iVar6,uVar8);
  iVar7 = (int)param_3;
  uVar14 = (undefined2)((ulong)param_3 >> 0x10);
  if (cVar3 == '\0') {
    FUN_1128_21d2(iVar7,uVar14);
    SETSTRETCHBLTMODE(0x1128,3);
  }
  uVar9 = (undefined2)((ulong)param_2 >> 0x10);
  piVar1 = (int *)param_2;
  uVar10 = (undefined2)((ulong)*(undefined4 *)(iVar6 + 0xe) >> 0x10);
  iVar2 = (int)*(undefined4 *)(iVar6 + 0xe);
  FUN_1128_21d2(iVar7,uVar14);
  iVar13 = *param_2;
  iVar12 = piVar1[1];
  iVar4 = piVar1[2] - *param_2;
  iVar5 = piVar1[3] - piVar1[1];
  uVar11 = FUN_1128_5a0f(iVar6,uVar8);
  STRETCHBLT(0x1128,*(undefined2 *)(iVar7 + 0x17),*(undefined2 *)(iVar7 + 0x19),
             *(undefined2 *)(iVar2 + 0x10),*(undefined2 *)(iVar2 + 0xe),0,0,
             *(undefined2 *)((int)uVar11 + 4),iVar5,iVar4,iVar12,iVar13);
  return;
}



/* ---- FUN_1128_598b @ 1128:598b  (88 octets) ---- */

void __stdcall16far FUN_1128_598b(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  uVar1 = *(undefined4 *)((int)param_1 + 0xe);
  uVar4 = (undefined2)((ulong)uVar1 >> 0x10);
  iVar2 = (int)uVar1;
  if (*(int *)(iVar2 + 4) < 2) {
    FUN_1158_1f7f((int)*(undefined4 *)(iVar2 + 6),(int)((ulong)*(undefined4 *)(iVar2 + 6) >> 0x10));
    *(undefined2 *)(iVar2 + 6) = 0;
    *(undefined2 *)(iVar2 + 8) = 0;
  }
  else {
    FUN_1128_5803((int)param_1,uVar3,*(undefined *)(iVar2 + 0x12),*(undefined2 *)(iVar2 + 0x10),
                  *(undefined2 *)(iVar2 + 0xe),*(undefined2 *)(iVar2 + 0xc),
                  *(undefined2 *)(iVar2 + 10));
  }
  return;
}



/* ---- FUN_1128_59e3 @ 1128:59e3  (44 octets) ---- */

uint __stdcall16far FUN_1128_59e3(undefined4 param_1)

{
  undefined4 uVar1;
  uint in_AX;
  uint uVar2;
  int iVar3;
  undefined2 uVar4;
  
  uVar1 = *(undefined4 *)((int)param_1 + 0xe);
  uVar4 = (undefined2)((ulong)uVar1 >> 0x10);
  iVar3 = (int)uVar1;
  if ((*(int *)(iVar3 + 10) == 0) &&
     (in_AX = *(uint *)(iVar3 + 6) | *(uint *)(iVar3 + 8), in_AX == 0)) {
    uVar2 = 1;
  }
  else {
    uVar2 = in_AX & 0xff00;
  }
  return uVar2;
}



/* ---- FUN_1128_5a0f @ 1128:5a0f  (143 octets) ---- */

undefined4 __stdcall16far FUN_1128_5a0f(undefined4 param_1)

{
  undefined extraout_AH;
  int iVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined4 uVar5;
  
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  if (*(int *)(iVar1 + 0x12) == 0 && *(int *)(iVar1 + 0x14) == 0) {
    FUN_1128_5bc4(iVar1,uVar3);
    uVar5 = FUN_1128_5162(0x508e,0x1128,CONCAT11(extraout_AH,1),iVar1,uVar3);
    *(undefined2 *)(iVar1 + 0x12) = (int)uVar5;
    *(undefined2 *)(iVar1 + 0x14) = (int)((ulong)uVar5 >> 0x10);
    uVar4 = (undefined2)((ulong)*(undefined4 *)(iVar1 + 0x12) >> 0x10);
    iVar2 = (int)*(undefined4 *)(iVar1 + 0x12);
    *(undefined2 *)(iVar2 + 0x1b) = 0x409e;
    *(undefined2 *)(iVar2 + 0x1d) = 0x1128;
    *(int *)(iVar2 + 0x1f) = iVar1;
    *(undefined2 *)(iVar2 + 0x21) = uVar3;
    uVar4 = (undefined2)((ulong)*(undefined4 *)(iVar1 + 0x12) >> 0x10);
    iVar2 = (int)*(undefined4 *)(iVar1 + 0x12);
    *(undefined2 *)(iVar2 + 0x23) = 0x58ae;
    *(undefined2 *)(iVar2 + 0x25) = 0x1128;
    *(int *)(iVar2 + 0x27) = iVar1;
    *(undefined2 *)(iVar2 + 0x29) = uVar3;
  }
  return CONCAT22(*(undefined2 *)(iVar1 + 0x14),*(undefined2 *)(iVar1 + 0x12));
}



/* ---- FUN_1128_5a9e @ 1128:5a9e  (61 octets) ---- */

undefined2 __stdcall16far FUN_1128_5a9e(undefined4 param_1)

{
  int iVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  FUN_1128_5ba5(iVar1,uVar2);
  FUN_1128_5bc4(iVar1,uVar2);
  FUN_1128_58ae(iVar1,uVar2,iVar1,uVar2);
  return *(undefined2 *)((int)*(undefined4 *)(iVar1 + 0xe) + 10);
}



/* ---- FUN_1128_5adb @ 1128:5adb  (25 octets) ---- */

undefined2 __stdcall16far FUN_1128_5adb(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)((int)param_1 + 0xe);
  return *(undefined2 *)((int)uVar1 + 0x10);
}



/* ---- FUN_1128_5af4 @ 1128:5af4  (25 octets) ---- */

undefined __stdcall16far FUN_1128_5af4(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)((int)param_1 + 0xe);
  return *(undefined *)((int)uVar1 + 0x12);
}



/* ---- FUN_1128_5b0d @ 1128:5b0d  (25 octets) ---- */

undefined2 __stdcall16far FUN_1128_5b0d(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)((int)param_1 + 0xe);
  return *(undefined2 *)((int)uVar1 + 0xc);
}



/* ---- FUN_1128_5b26 @ 1128:5b26  (102 octets) ---- */

ulong __stdcall16far FUN_1128_5b26(undefined4 *param_1)

{
  undefined2 *puVar1;
  char cVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined2 uVar5;
  undefined4 uVar6;
  ulong uVar7;
  undefined4 *puVar8;
  
  uVar5 = (undefined2)((ulong)param_1 >> 0x10);
  puVar4 = (undefined4 *)param_1;
  cVar2 = FUN_1128_5af4(puVar4,uVar5);
  if (cVar2 == '\0') {
    puVar1 = (undefined2 *)((int)*param_1 + 0x18);
    puVar8 = puVar4;
    iVar3 = (*(code *)*puVar1)(0x1128,puVar4,uVar5,0);
    iVar3 = iVar3 + -1;
    uVar6 = FUN_1128_5a0f(puVar4,uVar5);
    uVar7 = FUN_1128_2132(uVar6,iVar3,puVar8);
  }
  else {
    uVar7 = 0xffffff;
  }
  return uVar7 | 0x2000000;
}



/* ---- FUN_1128_5b8c @ 1128:5b8c  (25 octets) ---- */

undefined2 __stdcall16far FUN_1128_5b8c(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)((int)param_1 + 0xe);
  return *(undefined2 *)((int)uVar1 + 0xe);
}



/* ---- FUN_1128_5ba5 @ 1128:5ba5  (31 octets) ---- */

void __stdcall16far FUN_1128_5ba5(undefined4 param_1)

{
  int iVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  if (*(int *)(iVar1 + 0x12) != 0 || *(int *)(iVar1 + 0x14) != 0) {
    FUN_1128_51d1((int)*(undefined4 *)(iVar1 + 0x12),
                  (int)((ulong)*(undefined4 *)(iVar1 + 0x12) >> 0x10));
  }
  return;
}



/* ---- FUN_1128_5bc4 @ 1128:5bc4  (156 octets) ---- */

void __stdcall16far FUN_1128_5bc4(undefined4 param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined2 uVar5;
  long lVar6;
  undefined4 uVar7;
  undefined2 uVar8;
  undefined2 uVar9;
  undefined2 uVar10;
  undefined local_10 [14];
  
  uVar7 = *(undefined4 *)((int)param_1 + 0xe);
  uVar5 = (undefined2)((ulong)uVar7 >> 0x10);
  iVar2 = (int)uVar7;
  if ((*(int *)(iVar2 + 10) == 0) && (*(int *)(iVar2 + 6) != 0 || *(int *)(iVar2 + 8) != 0)) {
    FUN_1148_23a4((int)*(undefined4 *)(iVar2 + 6),(int)((ulong)*(undefined4 *)(iVar2 + 6) >> 0x10),0
                  ,0);
    lVar6 = FUN_1148_23bf((int)*(undefined4 *)(iVar2 + 6),
                          (int)((ulong)*(undefined4 *)(iVar2 + 6) >> 0x10));
    if (lVar6 != 0) {
      puVar1 = (undefined4 *)*(undefined4 *)(iVar2 + 6);
      (*(code *)*(undefined2 *)(undefined2 *)*puVar1)
                (0x1148,(undefined4 *)puVar1,(int)((ulong)puVar1 >> 0x10),0xe,0,local_10);
      uVar10 = *(undefined2 *)(iVar2 + 8);
      uVar9 = *(undefined2 *)(iVar2 + 6);
      iVar3 = iVar2 + 10;
      iVar4 = iVar2 + 0xc;
      uVar8 = uVar5;
      uVar7 = FUN_1148_23bf((int)*(undefined4 *)(iVar2 + 6),
                            (int)((ulong)*(undefined4 *)(iVar2 + 6) >> 0x10));
      FUN_1128_2ec7((uint)uVar7 - 0xe,(int)((ulong)uVar7 >> 0x10) - (uint)((uint)uVar7 < 0xe),iVar4,
                    uVar5,iVar3,uVar8,uVar9,uVar10);
    }
  }
  return;
}



/* ---- FUN_1128_5c6a @ 1128:5c6a  (139 octets) ---- */

void __stdcall16far FUN_1128_5c6a(undefined4 param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  undefined2 in_stack_0000ffe6;
  
  uVar4 = *(undefined4 *)((int)param_1 + 0xe);
  uVar3 = (undefined2)((ulong)uVar4 >> 0x10);
  iVar2 = (int)uVar4;
  if (*(int *)(iVar2 + 6) == 0 && *(int *)(iVar2 + 8) == 0) {
    uVar4 = FUN_1158_1f50();
    DAT_1160_1858 = &stack0xffee;
    puVar1 = &stack0xffee;
    if (*(int *)(iVar2 + 10) != 0) {
      in_stack_0000ffe6 = *(undefined2 *)(iVar2 + 0xc);
      FUN_1128_39f5(in_stack_0000ffe6,*(undefined2 *)(iVar2 + 10),uVar4);
      puVar1 = DAT_1160_1858;
    }
    DAT_1160_1858 = puVar1;
    FUN_1148_23a4(uVar4,0,0);
    DAT_1160_1858 = (undefined *)in_stack_0000ffe6;
    *(undefined2 *)(iVar2 + 6) = (int)uVar4;
    *(undefined2 *)(iVar2 + 8) = (int)((ulong)uVar4 >> 0x10);
  }
  return;
}



/* ---- FUN_1128_5e11 @ 1128:5e11  (69 octets) ---- */

void __stdcall16far FUN_1128_5e11(undefined4 param_1,undefined4 param_2)

{
  undefined2 uVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  long lVar5;
  long lVar6;
  
  uVar3 = (undefined2)((ulong)param_2 >> 0x10);
  uVar1 = (undefined2)param_2;
  lVar5 = FUN_1148_237e(uVar1,uVar3);
  lVar6 = FUN_1148_23bf(uVar1,uVar3);
  uVar4 = (undefined2)((ulong)param_1 >> 0x10);
  uVar2 = (undefined2)param_1;
  FUN_1128_5f62(uVar2,uVar4,uVar1,uVar3,lVar6 - lVar5);
  FUN_1128_409e(uVar2,uVar4,uVar2,uVar4);
  return;
}



/* ---- FUN_1128_5e60 @ 1128:5e60  (162 octets) ---- */

void __stdcall16far
FUN_1128_5e60(undefined4 param_1,undefined2 param_2,undefined2 param_3,undefined param_4,
             undefined2 param_5,undefined2 param_6,undefined2 param_7,undefined2 param_8)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  
  uVar4 = FUN_1158_1f50();
  uVar2 = (undefined2)((ulong)uVar4 >> 0x10);
  iVar1 = (int)uVar4;
  *(undefined2 *)(iVar1 + 10) = param_8;
  *(undefined2 *)(iVar1 + 0xc) = param_7;
  *(undefined2 *)(iVar1 + 0xe) = param_6;
  *(undefined2 *)(iVar1 + 0x10) = param_5;
  *(undefined *)(iVar1 + 0x12) = param_4;
  *(undefined2 *)(iVar1 + 6) = param_2;
  *(undefined2 *)(iVar1 + 8) = param_3;
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  FUN_1128_5327();
  *(int *)((int)param_1 + 0xe) = iVar1;
  *(undefined2 *)((int)param_1 + 0x10) = uVar2;
  FUN_1128_5319();
  return;
}



/* ---- FUN_1128_5f16 @ 1128:5f16  (66 octets) ---- */

void __stdcall16far FUN_1128_5f16(undefined4 param_1,undefined4 *param_2)

{
  undefined2 uVar1;
  undefined2 uVar2;
  undefined2 local_6;
  undefined2 local_4;
  
  (*(code *)*(undefined2 *)(undefined2 *)*param_2)();
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  uVar1 = (undefined2)param_1;
  FUN_1128_5f62(uVar1,uVar2,(undefined4 *)param_2,(int)((ulong)param_2 >> 0x10),local_6,local_4);
  FUN_1128_409e(uVar1,uVar2,uVar1,uVar2);
  return;
}



/* ---- FUN_1128_5f62 @ 1128:5f62  (388 octets) ---- */

void __stdcall16far FUN_1128_5f62(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  undefined2 *puVar1;
  undefined extraout_AH;
  undefined2 uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puStack_56;
  undefined local_4d;
  undefined2 local_4c;
  undefined2 local_4a;
  undefined local_44 [4];
  undefined2 local_40;
  undefined2 local_3c;
  int local_38;
  int local_36;
  undefined local_1c [4];
  undefined2 local_18;
  undefined2 local_16;
  int local_14;
  int local_12;
  int local_10 [7];
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  puStack_56 = (undefined4 *)0x5f70;
  FUN_1128_5ba5();
  if (param_3 == 0 && param_4 == 0) {
    puStack_56 = (undefined4 *)0x0;
    FUN_1128_5e60((int)param_1,uVar2,0,0,0);
  }
  else {
    puStack_56 = (undefined4 *)0x1128;
    puVar3 = (undefined4 *)FUN_1158_1f50();
    puVar4 = (undefined4 *)puVar3;
    puStack_56 = (undefined4 *)DAT_1160_1858;
    DAT_1160_1858 = &puStack_56;
    FUN_1148_2ab5(puVar3,param_3,param_4);
    FUN_1148_2411((int)param_2,(int)((ulong)param_2 >> 0x10),param_3,param_4,(int)puVar4[1],
                  (int)((ulong)puVar4[1] >> 0x10));
    (*(code *)*(undefined2 *)(undefined2 *)*puVar3)(0x1148,puVar3,0xe,0,local_10);
    if (local_10[0] != 0x4d42) {
      FUN_1128_2563();
    }
    (*(code *)*(undefined2 *)(undefined2 *)*puVar3)(0x1148,puVar3,4,0,&param_3);
    puVar1 = (undefined2 *)((int)*puVar3 + 8);
    (*(code *)*puVar1)(0x1148,puVar3,1,0xfffc,0xffff);
    if ((param_4 == 0) && (param_3 == 0xc)) {
      (*(code *)*(undefined2 *)(undefined2 *)*puVar3)(0x1148,puVar3,0xc,0,local_1c);
      local_4c = local_16;
      local_4a = local_18;
      if ((local_14 == 1) && (local_12 == 1)) {
        local_4d = 1;
      }
      else {
        local_4d = 0;
      }
    }
    else if ((param_4 == 0) && (param_3 == 0x28)) {
      (*(code *)*(undefined2 *)(undefined2 *)*puVar3)(0x1148,puVar3,0x28,0,local_44);
      local_4c = local_3c;
      local_4a = local_40;
      if ((local_38 == 1) && (local_36 == 1)) {
        local_4d = 1;
      }
      else {
        local_4d = 0;
      }
    }
    else {
      FUN_1128_2563();
    }
    FUN_1148_23a4(puVar3,0,0);
    FUN_1128_5e60((int)param_1,uVar2,puVar3,CONCAT11(extraout_AH,local_4d),local_4c,local_4a,0,0);
    DAT_1160_1858 = (undefined4 **)puVar4;
  }
  return;
}



/* ---- FUN_1128_6104 @ 1128:6104  (202 octets) ---- */

void __stdcall16far FUN_1128_6104(undefined *param_1,int param_2)

{
  undefined *puVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined *puStack_1e;
  undefined2 local_12;
  undefined local_10 [2];
  undefined2 local_e;
  undefined2 local_c;
  char local_8;
  char local_7;
  
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  puVar1 = (undefined *)param_1;
  uVar4 = (undefined2)((ulong)*(undefined4 *)(puVar1 + 0xe) >> 0x10);
  iVar2 = (int)*(undefined4 *)(puVar1 + 0xe);
  if (*(int *)(iVar2 + 10) != param_2) {
    puStack_1e = (undefined *)0x612b;
    FUN_1128_5ba5();
    if (param_2 == 0) {
      puStack_1e = (undefined *)0x0;
      FUN_1158_1ee5();
    }
    else {
      puStack_1e = local_10;
      GETOBJECT(0x1128);
    }
    if (*(int *)(iVar2 + 4) == 1) {
      local_12 = *(undefined2 *)(iVar2 + 0xc);
      *(undefined2 *)(iVar2 + 0xc) = 0;
    }
    else {
      local_12 = FUN_1128_5622();
    }
    puStack_1e = (undefined *)DAT_1160_1858;
    if ((local_8 == '\x01') && (local_7 == '\x01')) {
      uVar4 = 0x6001;
    }
    else {
      uVar4 = 0x6000;
    }
    DAT_1160_1858 = &puStack_1e;
    FUN_1128_5e60(puVar1,uVar3,0,0,uVar4,local_c,local_e,local_12,param_2);
    DAT_1160_1858 = (undefined **)puStack_1e;
    puStack_1e = puVar1;
    FUN_1128_409e();
  }
  return;
}



/* ---- FUN_1128_61e0 @ 1128:61e0  (70 octets) ---- */

void __stdcall16far FUN_1128_61e0(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  uVar4 = (undefined2)((ulong)*(undefined4 *)(iVar1 + 0xe) >> 0x10);
  iVar2 = (int)*(undefined4 *)(iVar1 + 0xe);
  if (*(int *)(iVar2 + 0x10) != param_2) {
    FUN_1128_5803(iVar1,uVar3,
                  CONCAT11((char)((uint)*(int *)(iVar2 + 0x10) >> 8),*(undefined *)(iVar2 + 0x12)),
                  param_2,*(undefined2 *)(iVar2 + 0xe),*(undefined2 *)(iVar2 + 0xc),
                  *(undefined2 *)(iVar2 + 10));
    FUN_1128_409e(iVar1,uVar3,iVar1,uVar3);
  }
  return;
}



/* ---- FUN_1128_6226 @ 1128:6226  (70 octets) ---- */

void __stdcall16far FUN_1128_6226(undefined4 param_1,char param_2)

{
  int iVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  uVar4 = (undefined2)((ulong)*(undefined4 *)(iVar1 + 0xe) >> 0x10);
  iVar2 = (int)*(undefined4 *)(iVar1 + 0xe);
  if (param_2 != *(char *)(iVar2 + 0x12)) {
    FUN_1128_5803(iVar1,uVar3,param_2,*(undefined2 *)(iVar2 + 0x10),*(undefined2 *)(iVar2 + 0xe),
                  *(undefined2 *)(iVar2 + 0xc),*(undefined2 *)(iVar2 + 10));
    FUN_1128_409e(iVar1,uVar3,iVar1,uVar3);
  }
  return;
}



/* ---- FUN_1128_626c @ 1128:626c  (70 octets) ---- */

void __stdcall16far FUN_1128_626c(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  uVar4 = (undefined2)((ulong)*(undefined4 *)(iVar1 + 0xe) >> 0x10);
  iVar2 = (int)*(undefined4 *)(iVar1 + 0xe);
  if (*(int *)(iVar2 + 0xe) != param_2) {
    FUN_1128_5803(iVar1,uVar3,
                  CONCAT11((char)((uint)*(int *)(iVar2 + 0xe) >> 8),*(undefined *)(iVar2 + 0x12)),
                  *(undefined2 *)(iVar2 + 0x10),param_2,*(undefined2 *)(iVar2 + 0xc),
                  *(undefined2 *)(iVar2 + 10));
    FUN_1128_409e(iVar1,uVar3,iVar1,uVar3);
  }
  return;
}



/* ---- FUN_1128_62b2 @ 1128:62b2  (25 octets) ---- */

void __stdcall16far FUN_1128_62b2(undefined4 param_1,undefined2 param_2,undefined2 param_3)

{
  FUN_1128_62cb((int)param_1,(int)((ulong)param_1 >> 0x10),1,param_2,param_3);
  return;
}



/* ---- FUN_1128_62cb @ 1128:62cb  (113 octets) ---- */

void __stdcall16far FUN_1128_62cb(undefined4 param_1,char param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined2 unaff_SS;
  long local_6;
  
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  uVar1 = *(undefined4 *)((int)param_1 + 0xe);
  uVar4 = (undefined2)((ulong)uVar1 >> 0x10);
  iVar2 = (int)uVar1;
  FUN_1128_5c6a((int)param_1,uVar3);
  uVar1 = *(undefined4 *)(iVar2 + 6);
  local_6 = FUN_1148_23bf((int)uVar1,(int)((ulong)uVar1 >> 0x10));
  uVar3 = (undefined2)((ulong)param_3 >> 0x10);
  if (param_2 != '\0') {
    FUN_1148_2466((int)param_3,uVar3,4,0,&local_6,unaff_SS);
  }
  if (local_6 != 0) {
    uVar1 = *(undefined4 *)(iVar2 + 6);
    uVar1 = *(undefined4 *)((int)uVar1 + 4);
    FUN_1148_2466((int)param_3,uVar3,local_6,(int)uVar1,(int)((ulong)uVar1 >> 0x10));
  }
  return;
}



/* ---- FUN_1128_633c @ 1128:633c  (25 octets) ---- */

void __stdcall16far FUN_1128_633c(undefined4 param_1,undefined2 param_2,undefined2 param_3)

{
  FUN_1128_62cb((int)param_1,(int)((ulong)param_1 >> 0x10),0,param_2,param_3);
  return;
}



/* ---- FUN_1128_63eb @ 1128:63eb  (35 octets) ---- */

void __stdcall16far FUN_1128_63eb(undefined4 param_1)

{
  undefined2 uVar1;
  
  uVar1 = (undefined2)((ulong)param_1 >> 0x10);
  if (*(int *)((int)param_1 + 10) != 0) {
    DESTROYICON();
  }
  *(undefined2 *)((int)param_1 + 10) = 0;
  return;
}



/* ---- FUN_1128_640e @ 1128:640e  (91 octets) ---- */

undefined4 __stdcall16far FUN_1128_640e(undefined4 param_1,char param_2)

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
  FUN_1128_4002(iVar1,uVar2,0);
  uVar3 = FUN_1158_1f50(0x8cd,0x1128,CONCAT11(extraout_AH,1));
  *(undefined2 *)(iVar1 + 0xe) = (int)uVar3;
  *(undefined2 *)(iVar1 + 0x10) = (int)((ulong)uVar3 >> 0x10);
  FUN_1128_5319((int)*(undefined4 *)(iVar1 + 0xe),(int)((ulong)*(undefined4 *)(iVar1 + 0xe) >> 0x10)
               );
  if (param_2 != '\0') {
    DAT_1160_1858 = uStack_a;
  }
  return param_1;
}



/* ---- FUN_1128_6469 @ 1128:6469  (45 octets) ---- */

void __stdcall16far FUN_1128_6469(undefined4 param_1,char param_2)

{
  undefined4 uVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  uVar1 = *(undefined4 *)((int)param_1 + 0xe);
  FUN_1128_5327((int)uVar1,(int)((ulong)uVar1 >> 0x10));
  FUN_1158_1f66((int)param_1,uVar2,0);
  if (param_2 != '\0') {
    FUN_1158_200f();
  }
  return;
}



/* ---- FUN_1128_6496 @ 1128:6496  (148 octets) ---- */

void __stdcall16far FUN_1128_6496(undefined4 param_1,undefined4 param_2)

{
  undefined2 uVar1;
  char cVar2;
  int iVar3;
  undefined2 uVar4;
  
  iVar3 = (int)param_1;
  uVar4 = (undefined2)((ulong)param_1 >> 0x10);
  if (((int)param_2 != 0 || param_2._2_2_ != 0) &&
     (cVar2 = FUN_1158_2255(0x8fc,0x1128,(int)param_2,param_2._2_2_), cVar2 == '\0')) {
    FUN_1128_4037(iVar3,uVar4,(int)param_2,param_2._2_2_);
    return;
  }
  if ((int)param_2 == 0 && param_2._2_2_ == 0) {
    FUN_1128_682a(iVar3,uVar4,0,0,0);
  }
  else {
    FUN_1128_5319((int)*(undefined4 *)((int)param_2 + 0xe),
                  (int)((ulong)*(undefined4 *)((int)param_2 + 0xe) >> 0x10));
    FUN_1128_5327((int)*(undefined4 *)(iVar3 + 0xe),
                  (int)((ulong)*(undefined4 *)(iVar3 + 0xe) >> 0x10));
    uVar1 = *(undefined2 *)((int)param_2 + 0x10);
    *(undefined2 *)(iVar3 + 0xe) = *(undefined2 *)((int)param_2 + 0xe);
    *(undefined2 *)(iVar3 + 0x10) = uVar1;
  }
  FUN_1128_409e(iVar3,uVar4,iVar3,uVar4);
  return;
}



/* ---- FUN_1128_652a @ 1128:652a  (62 octets) ---- */

void __stdcall16far FUN_1128_652a(undefined4 param_1,undefined2 *param_2,undefined4 param_3)

{
  undefined2 uVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  
  FUN_1128_22c2((int)param_3,(int)((ulong)param_3 >> 0x10),1);
  uVar3 = *param_2;
  uVar2 = ((undefined2 *)param_2)[1];
  uVar1 = FUN_1128_6594((int)param_1,(int)((ulong)param_1 >> 0x10));
  DRAWICON(0x1128,uVar1,uVar2,uVar3);
  return;
}



/* ---- FUN_1128_6568 @ 1128:6568  (44 octets) ---- */

uint __stdcall16far FUN_1128_6568(undefined4 param_1)

{
  undefined4 uVar1;
  uint in_AX;
  uint uVar2;
  int iVar3;
  undefined2 uVar4;
  
  uVar1 = *(undefined4 *)((int)param_1 + 0xe);
  uVar4 = (undefined2)((ulong)uVar1 >> 0x10);
  iVar3 = (int)uVar1;
  if ((*(int *)(iVar3 + 10) == 0) &&
     (in_AX = *(uint *)(iVar3 + 6) | *(uint *)(iVar3 + 8), in_AX == 0)) {
    uVar2 = 1;
  }
  else {
    uVar2 = in_AX & 0xff00;
  }
  return uVar2;
}



/* ---- FUN_1128_6594 @ 1128:6594  (35 octets) ---- */

undefined2 __stdcall16far FUN_1128_6594(undefined4 param_1)

{
  undefined4 uVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  FUN_1128_65e1((int)param_1,uVar2);
  uVar1 = *(undefined4 *)((int)param_1 + 0xe);
  return *(undefined2 *)((int)uVar1 + 10);
}



/* ---- FUN_1128_65b7 @ 1128:65b7  (21 octets) ---- */

undefined2 __stdcall16far FUN_1128_65b7(void)

{
  undefined2 uVar1;
  
  uVar1 = GETSYSTEMMETRICS();
  return uVar1;
}



/* ---- FUN_1128_65cc @ 1128:65cc  (21 octets) ---- */

undefined2 __stdcall16far FUN_1128_65cc(void)

{
  undefined2 uVar1;
  
  uVar1 = GETSYSTEMMETRICS();
  return uVar1;
}



/* ---- FUN_1128_65e1 @ 1128:65e1  (146 octets) ---- */

void __stdcall16far FUN_1128_65e1(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 unaff_SS;
  undefined2 local_a;
  undefined local_8 [2];
  int local_6;
  undefined2 local_4;
  
  uVar1 = *(undefined4 *)((int)param_1 + 0xe);
  uVar3 = (undefined2)((ulong)uVar1 >> 0x10);
  iVar2 = (int)uVar1;
  if ((*(int *)(iVar2 + 10) == 0) && (*(int *)(iVar2 + 6) != 0 || *(int *)(iVar2 + 8) != 0)) {
    FUN_1148_23a4((int)*(undefined4 *)(iVar2 + 6),(int)((ulong)*(undefined4 *)(iVar2 + 6) >> 0x10),0
                  ,0);
    FUN_1148_2411((int)*(undefined4 *)(iVar2 + 6),(int)((ulong)*(undefined4 *)(iVar2 + 6) >> 0x10),6
                  ,0,local_8,unaff_SS);
    if (local_6 == 0) {
      local_a = DAT_1160_2b1e;
    }
    else if (local_6 == 1) {
      FUN_1128_31f2(local_4,&local_a);
    }
    else {
      FUN_1128_256e();
    }
    *(undefined2 *)(iVar2 + 10) = local_a;
  }
  return;
}



/* ---- FUN_1128_667d @ 1128:667d  (182 octets) ---- */

void __stdcall16far FUN_1128_667d(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined2 unaff_SS;
  undefined4 uVar6;
  undefined local_c [6];
  undefined4 local_6;
  
  uVar4 = (undefined2)((ulong)param_1 >> 0x10);
  iVar2 = (int)param_1;
  uVar5 = (undefined2)((ulong)*(undefined4 *)(iVar2 + 0xe) >> 0x10);
  iVar3 = (int)*(undefined4 *)(iVar2 + 0xe);
  if (*(int *)(iVar3 + 6) == 0 && *(int *)(iVar3 + 8) == 0) {
    if (*(int *)(iVar3 + 10) == 0) {
      FUN_1128_256e();
    }
    local_6 = FUN_1158_1f50();
    DAT_1160_1858 = &stack0xffe8;
    iVar1 = FUN_1128_6594(iVar2,uVar4);
    if (iVar1 == DAT_1160_2b1e) {
      FUN_1158_1ee5(0,6,local_c,unaff_SS);
      uVar4 = 0;
      FUN_1148_2466(local_6,6,0,local_c,unaff_SS);
      DAT_1160_1858 = (undefined *)uVar4;
      uVar6 = local_6;
    }
    else {
      uVar6 = local_6;
      uVar4 = FUN_1128_6594(iVar2,uVar4);
      FUN_1128_3a8c(uVar4,uVar6);
      DAT_1160_1858 = (undefined *)uVar4;
      uVar6 = local_6;
    }
    local_6._2_2_ = (undefined2)((ulong)uVar6 >> 0x10);
    local_6._0_2_ = (undefined2)uVar6;
    *(undefined2 *)(iVar3 + 6) = (undefined2)local_6;
    *(undefined2 *)(iVar3 + 8) = local_6._2_2_;
  }
  return;
}



/* ---- FUN_1128_682a @ 1128:682a  (121 octets) ---- */

void __stdcall16far
FUN_1128_682a(undefined4 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  
  uVar4 = FUN_1158_1f50();
  uVar2 = (undefined2)((ulong)uVar4 >> 0x10);
  iVar1 = (int)uVar4;
  *(undefined2 *)(iVar1 + 10) = param_4;
  *(undefined2 *)(iVar1 + 6) = param_2;
  *(undefined2 *)(iVar1 + 8) = param_3;
  FUN_1128_5319();
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  FUN_1128_5327();
  *(int *)((int)param_1 + 0xe) = iVar1;
  *(undefined2 *)((int)param_1 + 0x10) = uVar2;
  return;
}



/* ---- FUN_1128_68b7 @ 1128:68b7  (40 octets) ---- */

void __stdcall16far FUN_1128_68b7(undefined4 param_1,undefined2 param_2)

{
  undefined2 uVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  uVar1 = (undefined2)param_1;
  FUN_1128_682a(uVar1,uVar2,0,0,param_2);
  FUN_1128_409e(uVar1,uVar2,uVar1,uVar2);
  return;
}



/* ---- FUN_1128_68df @ 1128:68df  (13 octets) ---- */

void __stdcall16far FUN_1128_68df(void)

{
  FUN_1128_2509(0xf01d);
  return;
}



/* ---- FUN_1128_68ec @ 1128:68ec  (13 octets) ---- */

void __stdcall16far FUN_1128_68ec(void)

{
  FUN_1128_2509(0xf01d);
  return;
}



/* ---- FUN_1128_68f9 @ 1128:68f9  (63 octets) ---- */

void __stdcall16far FUN_1128_68f9(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined4 uVar5;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  FUN_1128_667d((int)param_1,uVar2);
  uVar5 = *(undefined4 *)((int)param_1 + 0xe);
  uVar5 = *(undefined4 *)((int)uVar5 + 6);
  uVar3 = (undefined2)((ulong)uVar5 >> 0x10);
  iVar1 = (int)uVar5;
  uVar5 = *(undefined4 *)(iVar1 + 4);
  uVar4 = (undefined2)((ulong)uVar5 >> 0x10);
  uVar2 = (undefined2)uVar5;
  uVar5 = FUN_1148_23bf(iVar1,uVar3);
  FUN_1148_2466((int)param_2,(int)((ulong)param_2 >> 0x10),uVar5,uVar2,uVar4);
  return;
}



/* ---- FUN_1128_6938 @ 1128:6938  (13 octets) ---- */

void __stdcall16far FUN_1128_6938(void)

{
  FUN_1128_2509(0xf0a8);
  return;
}



/* ---- FUN_1128_6945 @ 1128:6945  (188 octets) ---- */

undefined4 __stdcall16far FUN_1128_6945(undefined4 param_1,char param_2,int param_3,int param_4)

{
  undefined2 *puVar1;
  undefined4 *puVar2;
  undefined extraout_AH;
  undefined extraout_AH_00;
  undefined uVar3;
  undefined extraout_AH_01;
  int iVar4;
  undefined4 *puVar5;
  undefined2 uVar6;
  undefined4 uVar7;
  
  if (param_2 != '\0') {
    FUN_1158_1fe2();
  }
  uVar6 = (undefined2)((ulong)param_1 >> 0x10);
  iVar4 = (int)param_1;
  FUN_1158_1f50(iVar4,uVar6,0);
  if ((param_3 < 1) || (uVar3 = extraout_AH, param_4 < 1)) {
    FUN_1128_2509(0xf022);
    uVar3 = extraout_AH_00;
  }
  uVar7 = FUN_1128_56bd(0x83f,0x1128,CONCAT11(uVar3,1));
  *(undefined2 *)(iVar4 + 0xe) = (int)uVar7;
  *(undefined2 *)(iVar4 + 0x10) = (int)((ulong)uVar7 >> 0x10);
  puVar2 = (undefined4 *)*(undefined4 *)(iVar4 + 0xe);
  puVar5 = (undefined4 *)puVar2;
  puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
  (*(code *)*puVar1)(0x1128,puVar5,(int)((ulong)puVar2 >> 0x10),param_3);
  uVar7 = FUN_1128_56bd(0x83f,0x1128,CONCAT11(extraout_AH_01,1));
  *(undefined2 *)(iVar4 + 0x12) = (int)uVar7;
  *(undefined2 *)(iVar4 + 0x14) = (int)((ulong)uVar7 >> 0x10);
  uVar7 = FUN_1158_1f50(0x2a3,0x1148,1);
  *(undefined2 *)(iVar4 + 0x16) = (int)uVar7;
  *(undefined2 *)(iVar4 + 0x18) = (int)((ulong)uVar7 >> 0x10);
  *(int *)(iVar4 + 6) = param_3;
  *(int *)(iVar4 + 4) = param_4;
  *(undefined2 *)(iVar4 + 0xc) = 4;
  if (param_2 != '\0') {
    DAT_1160_1858 = puVar5;
  }
  return param_1;
}



/* ---- FUN_1128_6a01 @ 1128:6a01  (73 octets) ---- */

void __stdcall16far FUN_1128_6a01(undefined4 param_1,char param_2)

{
  int iVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  FUN_1158_1f7f((int)*(undefined4 *)(iVar1 + 0xe),(int)((ulong)*(undefined4 *)(iVar1 + 0xe) >> 0x10)
               );
  FUN_1158_1f7f((int)*(undefined4 *)(iVar1 + 0x12),
                (int)((ulong)*(undefined4 *)(iVar1 + 0x12) >> 0x10));
  FUN_1158_1f7f((int)*(undefined4 *)(iVar1 + 0x16),
                (int)((ulong)*(undefined4 *)(iVar1 + 0x16) >> 0x10));
  FUN_1158_1f66(iVar1,uVar2,0);
  if (param_2 != '\0') {
    FUN_1158_200f();
  }
  return;
}



/* ---- FUN_1128_6a4a @ 1128:6a4a  (192 octets) ---- */

undefined2 __stdcall16far FUN_1128_6a4a(undefined4 param_1)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  undefined2 *puVar4;
  undefined4 *puVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined2 uVar10;
  undefined2 uVar11;
  int iVar12;
  
  uVar10 = (undefined2)((ulong)param_1 >> 0x10);
  iVar8 = (int)param_1;
  iVar2 = *(int *)(iVar8 + 8);
  uVar3 = *(uint *)(iVar8 + 4);
  puVar1 = (uint *)(iVar8 + 8);
  uVar6 = *puVar1;
  *puVar1 = *puVar1 + uVar3;
  *(int *)(iVar8 + 10) = *(int *)(iVar8 + 10) + ((int)uVar3 >> 0xf) + (uint)CARRY2(uVar6,uVar3);
  puVar5 = (undefined4 *)*(undefined4 *)(iVar8 + 0xe);
  uVar11 = (undefined2)((ulong)puVar5 >> 0x10);
  puVar9 = (undefined4 *)puVar5;
  puVar4 = (undefined2 *)((int)*puVar5 + 0x1c);
  uVar6 = (*(code *)*puVar4)();
  if (((int)uVar6 >> 0xf < *(int *)(iVar8 + 10)) ||
     (((int)uVar6 >> 0xf <= *(int *)(iVar8 + 10) && (uVar6 < *(uint *)(iVar8 + 8))))) {
    iVar7 = *(int *)(iVar8 + 0xc) >> 0xf;
    uVar11 = FUN_1158_1633(puVar9,uVar11);
    puVar5 = (undefined4 *)*(undefined4 *)(iVar8 + 0xe);
    iVar12 = (int)((ulong)puVar5 >> 0x10);
    puVar9 = (undefined4 *)puVar5;
    puVar4 = (undefined2 *)((int)*puVar5 + 0x1c);
    uVar6 = (*(code *)*puVar4)(0x1158,puVar9,iVar12,uVar11,iVar7);
    iVar7 = ((int)uVar6 >> 0xf) + iVar12 + (uint)CARRY2(uVar6,(uint)puVar9);
    if ((0 < iVar7) || ((-1 < iVar7 && (0x8000 < uVar6 + (int)puVar9)))) {
      FUN_1128_2509(0xf023);
    }
    puVar5 = (undefined4 *)*(undefined4 *)(iVar8 + 0xe);
    puVar4 = (undefined2 *)((int)*puVar5 + 0x28);
    (*(code *)*puVar4)(0x1158,(undefined4 *)puVar5,(int)((ulong)puVar5 >> 0x10),uVar6 + (int)puVar9)
    ;
  }
  uVar11 = *(undefined2 *)((int)*(undefined4 *)(iVar8 + 0x16) + 8);
  FUN_1148_0c2b((int)*(undefined4 *)(iVar8 + 0x16),
                (int)((ulong)*(undefined4 *)(iVar8 + 0x16) >> 0x10),iVar2,iVar2 >> 0xf);
  return uVar11;
}



/* ---- FUN_1128_6b0a @ 1128:6b0a  (72 octets) ---- */

void __stdcall16far FUN_1128_6b0a(undefined4 param_1,undefined4 *param_2)

{
  undefined2 *puVar1;
  int iVar2;
  undefined2 uVar3;
  undefined4 *puVar4;
  int iVar5;
  
  if ((undefined4 *)param_2 != (undefined4 *)0x0 || param_2._2_2_ != 0) {
    puVar1 = (undefined2 *)((int)*param_2 + 0x18);
    puVar4 = (undefined4 *)param_2;
    iVar5 = param_2._2_2_;
    iVar2 = (*(code *)*puVar1)();
    uVar3 = (undefined2)((ulong)param_1 >> 0x10);
    if ((iVar2 != *(int *)((int)param_1 + 6)) ||
       (puVar1 = (undefined2 *)((int)*param_2 + 0x1c), iVar2 = (*(code *)*puVar1)(),
       iVar2 != *(int *)((int)param_1 + 4))) {
      FUN_1128_2509(0xf024,puVar4,iVar5);
    }
  }
  return;
}



/* ---- FUN_1128_6b52 @ 1128:6b52  (81 octets) ---- */

undefined2 __stdcall16far
FUN_1128_6b52(undefined4 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4,
             undefined2 param_5)

{
  undefined2 uVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  uVar2 = (undefined2)param_1;
  FUN_1128_6b0a(uVar2,uVar3,param_4,param_5);
  FUN_1128_6b0a(uVar2,uVar3,param_2,param_3);
  uVar1 = FUN_1128_6a4a(uVar2,uVar3);
  FUN_1128_6be4(uVar2,uVar3,param_2,param_3,param_4,param_5,uVar1);
  return uVar1;
}



/* ---- FUN_1128_6ba3 @ 1128:6ba3  (65 octets) ---- */

undefined2 __stdcall16far
FUN_1128_6ba3(undefined4 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4,
             undefined2 param_5)

{
  undefined2 uVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  uVar2 = (undefined2)param_1;
  FUN_1128_6b0a(uVar2,uVar3,param_4,param_5);
  uVar1 = FUN_1128_6a4a(uVar2,uVar3);
  FUN_1128_6cfa(uVar2,uVar3,param_2,param_3,param_4,param_5,uVar1);
  return uVar1;
}



/* ---- FUN_1128_6be4 @ 1128:6be4  (266 octets) ---- */

void __stdcall16far
FUN_1128_6be4(undefined4 param_1,undefined2 param_2,int param_3,undefined2 param_4,int param_5,
             undefined2 param_6)

{
  undefined2 *puVar1;
  undefined4 *puVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined extraout_DH;
  int iVar5;
  undefined2 uVar6;
  undefined4 uVar7;
  undefined2 uVar8;
  undefined2 local_4;
  
  uVar6 = (undefined2)((ulong)param_1 >> 0x10);
  iVar5 = (int)param_1;
  FUN_1128_6b0a(iVar5,uVar6,param_4,param_5);
  FUN_1128_6b0a(iVar5,uVar6,param_2,param_3);
  uVar3 = FUN_1148_0dd0((int)*(undefined4 *)(iVar5 + 0x16),
                        (int)((ulong)*(undefined4 *)(iVar5 + 0x16) >> 0x10),param_6);
  if (param_5 != 0) {
    uVar8 = 0;
    uVar4 = uVar3;
    uVar7 = FUN_1128_5a0f((int)*(undefined4 *)(iVar5 + 0xe),
                          (int)((ulong)*(undefined4 *)(iVar5 + 0xe) >> 0x10));
    FUN_1128_1b9b(uVar7,param_4,param_5,uVar8,uVar4);
  }
  local_4 = CONCAT11(extraout_DH,param_3 != 0);
  if (param_3 != 0) {
    FUN_1128_6226((int)*(undefined4 *)(iVar5 + 0x12),
                  (int)((ulong)*(undefined4 *)(iVar5 + 0x12) >> 0x10),1);
    puVar2 = (undefined4 *)*(undefined4 *)(iVar5 + 0xe);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x18);
    uVar4 = (*(code *)*puVar1)(0x1128,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10));
    puVar2 = (undefined4 *)*(undefined4 *)(iVar5 + 0x12);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
    (*(code *)*puVar1)(0x1128,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),uVar4);
    puVar2 = (undefined4 *)*(undefined4 *)(iVar5 + 0xe);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x1c);
    uVar4 = (*(code *)*puVar1)(0x1128,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10));
    puVar2 = (undefined4 *)*(undefined4 *)(iVar5 + 0x12);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x28);
    (*(code *)*puVar1)(0x1128,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),uVar4);
    uVar8 = 0;
    uVar4 = uVar3;
    uVar7 = FUN_1128_5a0f((int)*(undefined4 *)(iVar5 + 0x12),
                          (int)((ulong)*(undefined4 *)(iVar5 + 0x12) >> 0x10));
    FUN_1128_1b9b(uVar7,param_2,param_3,uVar8,uVar4);
  }
  FUN_1148_0f67((int)*(undefined4 *)(iVar5 + 0x16),
                (int)((ulong)*(undefined4 *)(iVar5 + 0x16) >> 0x10),uVar3,local_4,param_6);
  return;
}



/* ---- FUN_1128_6cfa @ 1128:6cfa  (305 octets) ---- */

void __cdecl16far
FUN_1128_6cfa(undefined4 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4,
             undefined2 param_5,undefined2 param_6)

{
  undefined2 *puVar1;
  undefined4 *puVar2;
  undefined extraout_AH;
  undefined extraout_AH_00;
  int iVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  undefined4 *puStack_26;
  undefined4 *puStack_24;
  undefined2 uStack_22;
  undefined2 uStack_20;
  undefined4 *puStack_1e;
  undefined2 uStack_1a;
  undefined2 uStack_16;
  undefined *puStack_14;
  undefined2 uStack_12;
  undefined2 uStack_10;
  undefined4 local_e;
  undefined4 local_a;
  undefined4 local_6;
  
  uStack_10 = param_5;
  uStack_12 = param_4;
  uVar5 = (undefined2)((ulong)param_1 >> 0x10);
  uStack_1a = 0x6d0e;
  uStack_16 = (int)param_1;
  puStack_14 = (undefined *)uVar5;
  FUN_1128_6b0a();
  uStack_10 = CONCAT11(extraout_AH,1);
  uStack_12 = 0x1128;
  puStack_14 = (undefined *)0x83f;
  uStack_16 = 0x1128;
  local_6 = (undefined4 *)FUN_1128_56bd();
  uStack_10 = 0x1128;
  uStack_12 = 0x6cf4;
  uStack_16 = DAT_1160_1858;
  uStack_1a = param_4;
  puVar1 = (undefined2 *)((int)*local_6 + 8);
  uStack_20 = 0x1128;
  uStack_22 = 0x6d44;
  DAT_1160_1858 = (undefined4 **)&uStack_16;
  puStack_14 = &stack0xfffe;
  puStack_1e = local_6;
  (*(code *)*puVar1)();
  uStack_20 = param_3;
  uStack_22 = param_2;
  puStack_24 = (undefined4 *)((ulong)local_6 >> 0x10);
  puStack_26 = (undefined4 *)local_6;
  uVar6 = FUN_1128_5a0f();
  puVar2 = (undefined4 *)*(undefined4 *)((int)uVar6 + 0xf);
  puStack_24 = (undefined4 *)((ulong)puVar2 >> 0x10);
  puStack_26 = (undefined4 *)puVar2;
  FUN_1128_1684();
  uStack_20 = 1;
  uStack_22 = (undefined2)((ulong)local_6 >> 0x10);
  puStack_24 = (undefined4 *)local_6;
  puStack_26 = (undefined4 *)0x1128;
  FUN_1128_6226();
  uStack_20 = CONCAT11(extraout_AH_00,1);
  uStack_22 = 0x1128;
  puStack_24 = (undefined4 *)0x83f;
  puStack_26 = (undefined4 *)0x1128;
  local_a = (undefined4 *)FUN_1128_56bd();
  puVar7 = (undefined4 *)local_a;
  uStack_20 = 0x1128;
  uStack_22 = 0x6cee;
  puStack_26 = (undefined4 *)DAT_1160_1858;
  puVar1 = (undefined2 *)((int)*local_a + 8);
  DAT_1160_1858 = &puStack_26;
  puStack_24 = (undefined4 *)&stack0xfffe;
  (*(code *)*puVar1)(0x1128,local_a,param_4,param_5);
  local_e = FUN_1128_5a0f((undefined4 *)local_a,(int)((ulong)local_a >> 0x10));
  uVar4 = (undefined2)((ulong)local_e >> 0x10);
  iVar3 = (int)local_e;
  *(undefined2 *)(iVar3 + 0x17) = 0xc6;
  *(undefined2 *)(iVar3 + 0x19) = 0x88;
  FUN_1128_1684((int)*(undefined4 *)(iVar3 + 0xf),(int)((ulong)*(undefined4 *)(iVar3 + 0xf) >> 0x10)
                ,0,0);
  FUN_1128_0fdf((int)*(undefined4 *)((int)local_e + 7),
                (int)((ulong)*(undefined4 *)((int)local_e + 7) >> 0x10),0xffff,0xff);
  FUN_1128_1b9b(local_e,(undefined4 *)local_6,local_6._2_2_,0,0);
  FUN_1128_6be4((int)param_1,uVar5,(undefined4 *)local_6,local_6._2_2_,(undefined4 *)local_a,
                local_a._2_2_,param_6);
  DAT_1160_1858 = (undefined4 **)puVar7;
  FUN_1158_1f7f((undefined4 *)local_a,(int)((ulong)local_a >> 0x10));
  return;
}



/* ---- FUN_1128_6e46 @ 1128:6e46  (403 octets) ---- */

void __stdcall16far
FUN_1128_6e46(undefined4 param_1,undefined2 param_2,int param_3,int param_4,undefined4 param_5)

{
  undefined2 uVar1;
  undefined2 uVar2;
  char extraout_DL;
  int iVar3;
  int iVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  undefined2 unaff_SS;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int *piVar10;
  undefined2 uVar11;
  int local_12;
  int local_10;
  int local_e;
  int local_c;
  int local_a [3];
  undefined2 local_4;
  
  uVar5 = (undefined2)((ulong)param_1 >> 0x10);
  iVar3 = (int)param_1;
  local_a[0] = FUN_1148_0dd0((int)*(undefined4 *)(iVar3 + 0x16),
                             (int)((ulong)*(undefined4 *)(iVar3 + 0x16) >> 0x10),param_2);
  local_12 = param_4;
  local_10 = param_3;
  local_e = param_4 + *(int *)(iVar3 + 4);
  local_c = param_3 + *(int *)(iVar3 + 6);
  local_a[1] = 0;
  local_a[2] = local_a[0] + *(int *)(iVar3 + 4);
  local_4 = *(undefined2 *)(iVar3 + 6);
  uVar6 = (undefined2)((ulong)param_5 >> 0x10);
  iVar4 = (int)param_5;
  if (extraout_DL == '\0') {
    uVar1 = *(undefined2 *)(iVar4 + 0x17);
    uVar2 = *(undefined2 *)(iVar4 + 0x19);
    piVar10 = &local_12;
    uVar11 = unaff_SS;
    uVar7 = FUN_1128_5a0f((int)*(undefined4 *)(iVar3 + 0xe),
                          (int)((ulong)*(undefined4 *)(iVar3 + 0xe) >> 0x10));
    FUN_1128_1b10(iVar4,uVar6,local_a,unaff_SS,uVar7,piVar10,uVar11);
    *(undefined2 *)(iVar4 + 0x17) = uVar1;
    *(undefined2 *)(iVar4 + 0x19) = uVar2;
  }
  else {
    uVar1 = *(undefined2 *)(iVar4 + 0x17);
    uVar2 = *(undefined2 *)(iVar4 + 0x19);
    *(undefined2 *)(iVar4 + 0x17) = 0xc6;
    *(undefined2 *)(iVar4 + 0x19) = 0x88;
    FUN_1128_21d2(iVar4,uVar6);
    uVar7 = SETTEXTCOLOR(0x1128,0,0);
    FUN_1128_21d2(iVar4,uVar6);
    uVar8 = SETBKCOLOR(0x1128,0xffff,0xff);
    piVar10 = &local_12;
    uVar11 = unaff_SS;
    uVar9 = FUN_1128_5a0f((int)*(undefined4 *)(iVar3 + 0x12),
                          (int)((ulong)*(undefined4 *)(iVar3 + 0x12) >> 0x10));
    FUN_1128_1b10(iVar4,uVar6,local_a,unaff_SS,uVar9,piVar10,uVar11);
    *(undefined2 *)(iVar4 + 0x17) = 0x46;
    *(undefined2 *)(iVar4 + 0x19) = 0x66;
    piVar10 = &local_12;
    uVar11 = unaff_SS;
    uVar9 = FUN_1128_5a0f((int)*(undefined4 *)(iVar3 + 0xe),
                          (int)((ulong)*(undefined4 *)(iVar3 + 0xe) >> 0x10));
    FUN_1128_1b10(iVar4,uVar6,local_a,unaff_SS,uVar9,piVar10,uVar11);
    *(undefined2 *)(iVar4 + 0x17) = uVar1;
    *(undefined2 *)(iVar4 + 0x19) = uVar2;
    FUN_1128_21d2(iVar4,uVar6);
    SETTEXTCOLOR(0x1128,uVar7);
    FUN_1128_21d2(iVar4,uVar6);
    SETBKCOLOR(0x1128,uVar8);
  }
  return;
}



/* ---- FUN_1128_6fd9 @ 1128:6fd9  (435 octets) ---- */

void __cdecl16far FUN_1128_6fd9(void)

{
  undefined2 uVar1;
  int iVar2;
  undefined extraout_AH;
  undefined2 unaff_SS;
  undefined4 uVar3;
  undefined *puVar4;
  undefined2 uVar5;
  undefined local_104 [256];
  undefined2 local_4;
  
  uVar5 = 0;
  uVar1 = CREATECOMPATIBLEDC();
  local_4 = uVar1;
  DAT_1160_2b16 = GETDEVICECAPS(0x14d0,0x5a);
  DELETEDC(0x14d0,local_4,uVar1,uVar5);
  uVar1 = 10;
  iVar2 = MULDIV(0x14d0,0x48,DAT_1160_2b16);
  DAT_1160_1244 = -iVar2;
  DAT_1160_2b18 = GETSTOCKOBJECT(0x14d0,7,uVar1);
  DAT_1160_2b1a = GETSTOCKOBJECT(0x14d0,5);
  DAT_1160_2b1c = GETSTOCKOBJECT(0x14d0,0xd);
  DAT_1160_2b1e = LOADICON(0x14d0,0x7f00,0);
  DAT_1160_2b20 = FUN_1128_09f4(0x9b1,0x1128,1,0x26);
  DAT_1160_2b24 = FUN_1128_09f4(0x9b1,0x1128,1,9);
  DAT_1160_2b28 = FUN_1128_09f4(0x9b1,0x1128,1,0xb);
  DAT_1160_2b70 = FUN_1158_1f50(0x2a3,0x1148,1);
  uVar3 = FUN_1158_1f50(0x3f45,0x1128,1);
  DAT_1160_2b32 = (undefined2)((ulong)uVar3 >> 0x10);
  DAT_1160_2b30 = (undefined2)uVar3;
  uVar3 = FUN_1158_1f50(0x3f45,0x1128,1);
  DAT_1160_2b36 = (undefined2)((ulong)uVar3 >> 0x10);
  DAT_1160_2b34 = (undefined2)uVar3;
  uVar3 = FUN_1158_1f50(0x3f45,0x1128,1);
  DAT_1160_2b3a = (undefined2)((ulong)uVar3 >> 0x10);
  DAT_1160_2b38 = (undefined2)uVar3;
  DAT_1160_2b3c = FUN_1158_1f50(0x3f45,0x1128,1);
  FUN_1128_3fae(DAT_1160_2b3c,DAT_1160_2b1e);
  DAT_1160_2b2c = FUN_1158_1f50(0x2a3,0x1148,CONCAT11(extraout_AH,1));
  puVar4 = local_104;
  uVar1 = unaff_SS;
  FUN_1150_092b(0xf052);
  FUN_1158_17e7(0xf,0x2b40,0x1160,puVar4,uVar1);
  puVar4 = local_104;
  uVar1 = unaff_SS;
  FUN_1150_092b(0xf053);
  FUN_1158_17e7(0xf,0x2b50,0x1160,puVar4,uVar1);
  puVar4 = local_104;
  FUN_1150_092b(0xf054);
  FUN_1158_17e7(0xf,0x2b60,0x1160,puVar4,unaff_SS);
  FUN_1148_0a36(0xda5,0x1128,0xe08,0x1128,2,0x1128);
  return;
}




/* Simstrat (FR).EXE - segment Code29 - 217 fonctions
   Decompile par Ghidra 11.2.1 (x86 16 bits, chargeur NE). */

/* ---- FUN_10e0_1604 @ 10e0:1604  (67 octets) ---- */

undefined FUN_10e0_1604(int param_1)

{
  char cVar1;
  undefined local_3;
  
  if (param_1 == 0) {
    local_3 = 1;
  }
  else if (param_1 == 0x2902) {
    cVar1 = FUN_10d8_1b56((int)DAT_1160_2ac6,(int)((ulong)DAT_1160_2ac6 >> 0x10));
    if (cVar1 == '\0') {
      FUN_10d8_122d(0x2902);
    }
    local_3 = 0;
  }
  else {
    FUN_10d8_122d(param_1);
  }
  return local_3;
}



/* ---- FUN_10e0_1667 @ 10e0:1667  (123 octets) ---- */

undefined2 FUN_10e0_1667(byte *param_1)

{
  byte bVar1;
  undefined2 in_AX;
  undefined uVar2;
  undefined extraout_AH;
  undefined extraout_AH_00;
  int iVar3;
  undefined2 unaff_SS;
  byte local_28 [32];
  uint local_8;
  uint local_6;
  undefined local_3;
  
  uVar2 = (undefined)((uint)in_AX >> 8);
  local_3 = 0;
  if (*param_1 != 0) {
    local_8 = (uint)*param_1;
    local_6 = 0;
    if (local_8 == 0) {
LAB_10e0_16d7:
      uVar2 = (undefined)(local_6 >> 8);
      local_3 = 1;
    }
    else {
      local_6 = 1;
      while( true ) {
        iVar3 = 0x20;
        bVar1 = FUN_1158_1a99();
        FUN_1158_19e4(0x20,0x1647,0x1158);
        FUN_1158_1a24(CONCAT11(extraout_AH,DAT_1160_2c62._1_1_));
        uVar2 = extraout_AH_00;
        if ((local_28[iVar3] & bVar1) == 0) break;
        if (local_6 == local_8) goto LAB_10e0_16d7;
        local_6 = local_6 + 1;
      }
    }
  }
  return CONCAT11(uVar2,local_3);
}



/* ---- FUN_10e0_16e2 @ 10e0:16e2  (81 octets) ---- */

undefined FUN_10e0_16e2(byte *param_1)

{
  uint local_6;
  undefined local_3;
  
  local_3 = 0;
  if (*param_1 != 0) {
    if (*param_1 == 0) {
LAB_10e0_1728:
      local_3 = 1;
    }
    else {
      for (local_6 = 1; (0x2f < ((byte *)param_1)[local_6] && (((byte *)param_1)[local_6] < 0x3a));
          local_6 = local_6 + 1) {
        if (local_6 == *param_1) goto LAB_10e0_1728;
      }
    }
  }
  return local_3;
}



/* ---- FUN_10e0_1733 @ 10e0:1733  (142 octets) ---- */

undefined4 __stdcall16far
FUN_10e0_1733(undefined4 param_1,char param_3,undefined param_4,undefined4 param_5,
             undefined4 param_6,undefined4 param_7)

{
  undefined4 uVar1;
  undefined2 uStack_a;
  
  if (param_3 != '\0') {
    FUN_1158_1fe2();
  }
  if ((int)param_7 != 0 || param_7._2_2_ != 0) {
    FUN_1148_0c2b((int)*(undefined4 *)((int)param_7 + 8),
                  (int)((ulong)*(undefined4 *)((int)param_7 + 8) >> 0x10),(int)param_1,param_1._2_2_
                 );
    *(undefined *)((int)param_7 + 0xc) = 0;
    *(int *)((int)param_1 + 4) = (int)param_7;
    *(int *)((int)param_1 + 6) = param_7._2_2_;
  }
  uVar1 = FUN_1150_05d7((int)param_6,(int)((ulong)param_6 >> 0x10));
  *(undefined2 *)((int)param_1 + 8) = (int)uVar1;
  *(undefined2 *)((int)param_1 + 10) = (int)((ulong)uVar1 >> 0x10);
  uVar1 = FUN_1150_05d7((int)param_5,(int)((ulong)param_5 >> 0x10));
  *(undefined2 *)((int)param_1 + 0xc) = (int)uVar1;
  *(undefined2 *)((int)param_1 + 0xe) = (int)((ulong)uVar1 >> 0x10);
  *(undefined *)((int)param_1 + 0x10) = param_4;
  if (param_3 != '\0') {
    DAT_1160_1858 = uStack_a;
  }
  return param_1;
}



/* ---- FUN_10e0_17c1 @ 10e0:17c1  (96 octets) ---- */

void __stdcall16far FUN_10e0_17c1(undefined4 param_1,char param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined2 uVar3;
  
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  iVar2 = (int)param_1;
  FUN_1150_0624(*(undefined2 *)(iVar2 + 0xc),*(undefined2 *)(iVar2 + 0xe));
  FUN_1150_0624(*(undefined2 *)(iVar2 + 8),*(undefined2 *)(iVar2 + 10));
  if (*(int *)(iVar2 + 4) != 0 || *(int *)(iVar2 + 6) != 0) {
    uVar1 = *(undefined4 *)((int)*(undefined4 *)(iVar2 + 4) + 8);
    FUN_1148_0fa7((int)uVar1,(int)((ulong)uVar1 >> 0x10),iVar2,uVar3);
    *(undefined *)((int)*(undefined4 *)(iVar2 + 4) + 0xc) = 0;
  }
  if (param_2 != '\0') {
    FUN_1158_200f();
  }
  return;
}



/* ---- FUN_10e0_1821 @ 10e0:1821  (48 octets) ---- */

void __stdcall16far FUN_10e0_1821(undefined4 param_1,undefined *param_2)

{
  undefined4 uVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  if ((*(byte *)((int)param_1 + 0x10) & 0x10) == 0) {
    uVar1 = *(undefined4 *)((int)param_1 + 0xc);
    FUN_1158_17e7(0xff,(undefined *)param_2,(int)((ulong)param_2 >> 0x10),(int)uVar1,
                  (int)((ulong)uVar1 >> 0x10));
  }
  else {
    *param_2 = 0;
  }
  return;
}



/* ---- FUN_10e0_1851 @ 10e0:1851  (29 octets) ---- */

void __stdcall16far FUN_10e0_1851(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)((int)param_1 + 8);
  FUN_1158_17e7(0xff,(int)param_2,(int)((ulong)param_2 >> 0x10),(int)uVar1,
                (int)((ulong)uVar1 >> 0x10));
  return;
}



/* ---- FUN_10e0_186e @ 10e0:186e  (84 octets) ---- */

undefined4 __stdcall16far
FUN_10e0_186e(undefined4 param_1,char param_2,undefined2 param_3,undefined2 param_4)

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
  *(undefined2 *)(iVar1 + 4) = param_3;
  *(undefined2 *)(iVar1 + 6) = param_4;
  uVar3 = FUN_1158_1f50(0x2a3,0x1148,1);
  *(undefined2 *)(iVar1 + 8) = (int)uVar3;
  *(undefined2 *)(iVar1 + 10) = (int)((ulong)uVar3 >> 0x10);
  if (param_2 != '\0') {
    DAT_1160_1858 = uStack_a;
  }
  return param_1;
}



/* ---- FUN_10e0_18c2 @ 10e0:18c2  (52 octets) ---- */

void __stdcall16far FUN_10e0_18c2(undefined4 param_1,char param_2)

{
  int iVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  if (*(int *)(iVar1 + 8) != 0 || *(int *)(iVar1 + 10) != 0) {
    FUN_10e0_1955(iVar1,uVar2);
  }
  FUN_1158_1f7f((int)*(undefined4 *)(iVar1 + 8),(int)((ulong)*(undefined4 *)(iVar1 + 8) >> 0x10));
  if (param_2 != '\0') {
    FUN_1158_200f();
  }
  return;
}



/* ---- FUN_10e0_18f6 @ 10e0:18f6  (95 octets) ---- */

void __stdcall16far
FUN_10e0_18f6(undefined4 param_1,undefined param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined2 unaff_SS;
  undefined2 local_a;
  undefined2 local_8;
  undefined local_6;
  
  uVar3 = (undefined2)((ulong)param_4 >> 0x10);
  uVar2 = (undefined2)param_4;
  uVar4 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = FUN_10e0_1aee((int)param_1,uVar4,uVar2,uVar3);
  if (-1 < iVar1) {
    local_6 = 4;
    local_a = uVar2;
    local_8 = uVar3;
    FUN_10d8_120a(0,&local_a,unaff_SS,0xf223);
  }
  FUN_10e0_1733(0x22,(char *)s_iTime_1160_10dc + 4,1,param_2,(int)param_3,
                (int)((ulong)param_3 >> 0x10),uVar2,uVar3,(int)param_1,uVar4);
  return;
}



/* ---- FUN_10e0_1955 @ 10e0:1955  (48 octets) ---- */

void __stdcall16far FUN_10e0_1955(undefined4 param_1)

{
  undefined2 uVar1;
  undefined4 uVar2;
  
  while (uVar1 = (undefined2)((ulong)param_1 >> 0x10), uVar2 = *(undefined4 *)((int)param_1 + 8),
        0 < *(int *)((int)uVar2 + 8)) {
    uVar2 = *(undefined4 *)((int)param_1 + 8);
    uVar2 = FUN_1148_0f43((int)uVar2,(int)((ulong)uVar2 >> 0x10));
    FUN_1158_1f7f(uVar2);
  }
  return;
}



/* ---- FUN_10e0_1985 @ 10e0:1985  (299 octets) ---- */

undefined4 __stdcall16far FUN_10e0_1985(undefined4 param_1,byte *param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  byte *pbVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  undefined2 unaff_SS;
  undefined *puVar8;
  undefined2 uVar9;
  byte *pbVar10;
  undefined2 uVar11;
  undefined local_10e [242];
  int local_1c;
  undefined2 local_1a;
  undefined local_18;
  byte *local_14;
  undefined2 local_12;
  undefined local_10;
  int local_e;
  uint local_c;
  int local_a;
  char local_7;
  undefined4 local_6;
  
  uVar5 = (undefined2)((ulong)param_1 >> 0x10);
  iVar3 = (int)param_1;
  FUN_10e0_1b4f(iVar3,uVar5);
  local_c = (uint)*param_2;
  local_7 = '\x01';
  do {
    local_e = *(int *)((int)*(undefined4 *)(iVar3 + 8) + 8) + -1;
    pbVar4 = (byte *)param_2;
    uVar6 = (undefined2)((ulong)param_2 >> 0x10);
    if (-1 < local_e) {
      local_a = 0;
      while( true ) {
        local_6 = FUN_1148_0dd0((int)*(undefined4 *)(iVar3 + 8),
                                (int)((ulong)*(undefined4 *)(iVar3 + 8) >> 0x10),local_a);
        uVar7 = (undefined2)((ulong)local_6 >> 0x10);
        iVar2 = (int)local_6;
        if ((*(byte *)(iVar2 + 0x10) & 0x14) == 0) {
          if (local_7 == '\0') {
            puVar8 = local_10e;
            uVar9 = unaff_SS;
            pbVar10 = pbVar4;
            uVar11 = uVar6;
            FUN_1158_180b(local_c,1,(int)*(undefined4 *)(iVar2 + 0xc),
                          (int)((ulong)*(undefined4 *)(iVar2 + 0xc) >> 0x10));
            iVar2 = FUN_1150_07ed(puVar8,uVar9,pbVar10,uVar11);
            if (iVar2 == 0) {
              uVar7 = (undefined2)((ulong)local_6 >> 0x10);
              if (*(byte *)*(undefined4 *)((int)local_6 + 0xc) == local_c) {
                return local_6;
              }
              uVar1 = *(undefined4 *)((int)local_6 + 0xc);
              if (*(char *)((int)uVar1 + local_c + 1) == ';') {
                return local_6;
              }
            }
          }
          else {
            iVar2 = FUN_1150_07ed((int)*(undefined4 *)(iVar2 + 0xc),
                                  (int)((ulong)*(undefined4 *)(iVar2 + 0xc) >> 0x10),pbVar4,uVar6);
            if (iVar2 == 0) {
              return local_6;
            }
          }
        }
        if (local_a == local_e) break;
        local_a = local_a + 1;
      }
    }
    if (local_7 == '\0') {
      local_1a = (undefined2)((ulong)*(undefined4 *)(iVar3 + 4) >> 0x10);
      local_1c = (int)*(undefined4 *)(iVar3 + 4) + 0x184;
      local_18 = 4;
      local_10 = 4;
      local_14 = pbVar4;
      local_12 = uVar6;
      FUN_10d8_120a(1,&local_1c,unaff_SS,0xf225);
    }
    local_7 = '\0';
  } while( true );
}



/* ---- FUN_10e0_1ab0 @ 10e0:1ab0  (25 octets) ---- */

undefined2 __stdcall16far FUN_10e0_1ab0(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)((int)param_1 + 8);
  return *(undefined2 *)((int)uVar1 + 8);
}



/* ---- FUN_10e0_1ac9 @ 10e0:1ac9  (37 octets) ---- */

undefined4 __stdcall16far FUN_10e0_1ac9(undefined4 param_1,undefined2 param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)((int)param_1 + 8);
  uVar1 = FUN_1148_0dd0((int)uVar1,(int)((ulong)uVar1 >> 0x10),param_2);
  return uVar1;
}



/* ---- FUN_10e0_1aee @ 10e0:1aee  (97 octets) ---- */

int __stdcall16far FUN_10e0_1aee(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  undefined2 local_4;
  
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  uVar4 = *(undefined4 *)((int)param_1 + 8);
  iVar1 = *(int *)((int)uVar4 + 8) + -1;
  if (iVar1 < 0) {
LAB_10e0_1b43:
    local_4 = -1;
  }
  else {
    local_4 = 0;
    while( true ) {
      uVar4 = *(undefined4 *)((int)param_1 + 8);
      uVar4 = FUN_1148_0dd0((int)uVar4,(int)((ulong)uVar4 >> 0x10),local_4);
      uVar4 = *(undefined4 *)((int)uVar4 + 8);
      iVar2 = FUN_1150_07ed((int)param_2,(int)((ulong)param_2 >> 0x10),(int)uVar4,
                            (int)((ulong)uVar4 >> 0x10));
      if (iVar2 == 0) break;
      if (local_4 == iVar1) goto LAB_10e0_1b43;
      local_4 = local_4 + 1;
    }
  }
  return local_4;
}



/* ---- FUN_10e0_1b4f @ 10e0:1b4f  (21 octets) ---- */

void __stdcall16far FUN_10e0_1b4f(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)((int)param_1 + 4);
  FUN_10e0_3077((int)uVar1,(int)((ulong)uVar1 >> 0x10));
  return;
}



/* ---- FUN_10e0_1b64 @ 10e0:1b64  (112 octets) ---- */

undefined4 __stdcall16far
FUN_10e0_1b64(undefined4 param_1,char param_2,undefined2 param_3,undefined2 param_4)

{
  undefined2 uVar1;
  undefined2 uVar2;
  int iVar3;
  undefined2 uVar4;
  undefined4 uVar5;
  undefined2 uStack_a;
  
  if (param_2 != '\0') {
    FUN_1158_1fe2();
  }
  uVar4 = (undefined2)((ulong)param_1 >> 0x10);
  iVar3 = (int)param_1;
  FUN_10d8_75dc(iVar3,uVar4,0);
  *(undefined2 *)(iVar3 + 0x14) = param_3;
  *(undefined2 *)(iVar3 + 0x16) = param_4;
  uVar2 = DAT_1160_1718;
  uVar1 = DAT_1160_1716;
  *(undefined2 *)(iVar3 + 0x18) = DAT_1160_1716;
  *(undefined2 *)(iVar3 + 0x1a) = uVar2;
  uVar5 = FUN_1158_1f50(0x2a3,0x1148,CONCAT11((char)((uint)uVar1 >> 8),1));
  *(undefined2 *)(iVar3 + 0x1c) = (int)uVar5;
  *(undefined2 *)(iVar3 + 0x1e) = (int)((ulong)uVar5 >> 0x10);
  if (param_2 != '\0') {
    DAT_1160_1858 = uStack_a;
  }
  return param_1;
}



/* ---- FUN_10e0_1bd4 @ 10e0:1bd4  (61 octets) ---- */

void __stdcall16far FUN_10e0_1bd4(undefined4 param_1,char param_2)

{
  int iVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  FUN_1150_0624(*(undefined2 *)(iVar1 + 0x18),*(undefined2 *)(iVar1 + 0x1a));
  FUN_1158_1f7f((int)*(undefined4 *)(iVar1 + 0x1c),
                (int)((ulong)*(undefined4 *)(iVar1 + 0x1c) >> 0x10));
  FUN_10d8_761a(iVar1,uVar2,0);
  if (param_2 != '\0') {
    FUN_1158_200f();
  }
  return;
}



/* ---- FUN_10e0_1d16 @ 10e0:1d16  (39 octets) ---- */

void __stdcall16far FUN_10e0_1d16(undefined4 param_1)

{
  undefined4 uVar1;
  char cVar2;
  undefined2 uVar3;
  
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  uVar1 = *(undefined4 *)((int)param_1 + 0x14);
  cVar2 = FUN_10d8_3202((int)uVar1,(int)((ulong)uVar1 >> 0x10));
  if (cVar2 != '\0') {
    uVar1 = *(undefined4 *)((int)param_1 + 0x14);
    FUN_10d8_4c3d((int)uVar1,(int)((ulong)uVar1 >> 0x10));
  }
  return;
}



/* ---- FUN_10e0_1d3d @ 10e0:1d3d  (19 octets) ---- */

void __stdcall16far FUN_10e0_1d3d(undefined4 *param_1)

{
  undefined2 *puVar1;
  
  puVar1 = (undefined2 *)((int)*param_1 + 0xc);
  (*(code *)*puVar1)();
  return;
}



/* ---- FUN_10e0_1d50 @ 10e0:1d50  (99 octets) ---- */

void __stdcall16far FUN_10e0_1d50(undefined4 param_1,int param_2,int param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined2 uVar4;
  
  uVar4 = (undefined2)((ulong)param_1 >> 0x10);
  iVar3 = (int)param_1;
  if (((*(char *)((int)*(undefined4 *)(iVar3 + 4) + 0x24) != '\x04') &&
      (cVar1 = FUN_10d8_3202((int)*(undefined4 *)(iVar3 + 0x14),
                             (int)((ulong)*(undefined4 *)(iVar3 + 0x14) >> 0x10)), cVar1 != '\0'))
     && (0 < *(int *)((int)*(undefined4 *)(iVar3 + 0x1c) + 8))) {
    if ((param_2 != 0 || param_3 != 0) &&
       (iVar2 = FUN_1148_0e58((int)*(undefined4 *)(iVar3 + 0x1c),
                              (int)((ulong)*(undefined4 *)(iVar3 + 0x1c) >> 0x10),param_2,param_3),
       iVar2 < 0)) {
      return;
    }
    FUN_10e0_2e38((int)*(undefined4 *)(iVar3 + 0x14),
                  (int)((ulong)*(undefined4 *)(iVar3 + 0x14) >> 0x10));
  }
  return;
}



/* ---- FUN_10e0_1db3 @ 10e0:1db3  (59 octets) ---- */

void __stdcall16far FUN_10e0_1db3(undefined4 *param_1,undefined4 param_2)

{
  undefined2 *puVar1;
  undefined4 *puVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined in_ZF;
  
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  puVar2 = (undefined4 *)param_1;
  uVar4 = (undefined2)((ulong)param_2 >> 0x10);
  FUN_1158_18be((int)param_2,uVar4,(int)puVar2[6],(int)((ulong)puVar2[6] >> 0x10));
  if (!(bool)in_ZF) {
    FUN_1150_0651((int)param_2,uVar4,puVar2 + 6,uVar3);
    puVar1 = (undefined2 *)((int)*param_1 + 0xc);
    (*(code *)*puVar1)(0x1150,puVar2,uVar3);
  }
  return;
}



/* ---- FUN_10e0_1dee @ 10e0:1dee  (129 octets) ---- */

undefined4 __stdcall16far
FUN_10e0_1dee(undefined4 param_1,char param_2,undefined2 param_3,undefined2 param_4)

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
  FUN_10d8_2de5(iVar1,uVar2,0,param_3,param_4);
  uVar3 = FUN_10e0_186e(0x4c,(char *)s_iTime_1160_10dc + 4,CONCAT11(extraout_AH,1),iVar1,uVar2);
  *(undefined2 *)(iVar1 + 0x178) = (int)uVar3;
  *(undefined2 *)(iVar1 + 0x17a) = (int)((ulong)uVar3 >> 0x10);
  uVar3 = FUN_10e0_1b64(0x77,(char *)s_iTime_1160_10dc + 4,1,iVar1,uVar2);
  *(undefined2 *)(iVar1 + 0x17c) = (int)uVar3;
  *(undefined2 *)(iVar1 + 0x17e) = (int)((ulong)uVar3 >> 0x10);
  if (param_2 != '\0') {
    DAT_1160_1858 = uStack_a;
  }
  return param_1;
}



/* ---- FUN_10e0_1e6f @ 10e0:1e6f  (61 octets) ---- */

void __stdcall16far FUN_10e0_1e6f(undefined4 param_1,char param_2)

{
  int iVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  FUN_1158_1f7f((int)*(undefined4 *)(iVar1 + 0x17c),
                (int)((ulong)*(undefined4 *)(iVar1 + 0x17c) >> 0x10));
  FUN_1158_1f7f((int)*(undefined4 *)(iVar1 + 0x178),
                (int)((ulong)*(undefined4 *)(iVar1 + 0x178) >> 0x10));
  FUN_10d8_2e9a(iVar1,uVar2,0);
  if (param_2 != '\0') {
    FUN_1158_200f();
  }
  return;
}



/* ---- FUN_10e0_1eac @ 10e0:1eac  (41 octets) ---- */

void __stdcall16far FUN_10e0_1eac(undefined4 param_1)

{
  char cVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  uVar2 = (undefined2)param_1;
  FUN_10d8_4c3d(uVar2,uVar3);
  cVar1 = FUN_10d8_584a(uVar2,uVar3);
  if (cVar1 != '\0') {
    FUN_10d8_4ccd(uVar2,uVar3);
  }
  return;
}



/* ---- FUN_10e0_1ed5 @ 10e0:1ed5  (53 octets) ---- */

void __stdcall16far FUN_10e0_1ed5(undefined4 param_1)

{
  char cVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  uVar2 = (undefined2)param_1;
  FUN_10d8_4c3d(uVar2,uVar3);
  FUN_10d8_483b(uVar2,uVar3);
  cVar1 = FUN_10d8_59a2(uVar2,uVar3);
  if (cVar1 != '\0') {
    FUN_10d8_4b1e(uVar2,uVar3,0);
  }
  return;
}



/* ---- FUN_10e0_23c4 @ 10e0:23c4  (46 octets) ---- */

void __stdcall16far
FUN_10e0_23c4(undefined4 param_1,undefined2 param_2,undefined2 param_3,char param_4)

{
  undefined4 uVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  if (param_4 == '\b') {
    uVar1 = *(undefined4 *)((int)param_1 + 0x178);
    *(undefined *)((int)uVar1 + 0xc) = 0;
  }
  FUN_10d8_4319((int)param_1,uVar2,param_2,param_3,param_4);
  return;
}



/* ---- FUN_10e0_23f4 @ 10e0:23f4  (382 octets) ---- */

void __stdcall16far
FUN_10e0_23f4(undefined4 param_1,byte *param_2,undefined2 param_3,undefined *param_4,
             undefined2 param_5,undefined4 param_6,undefined4 param_7)

{
  int iVar1;
  undefined *puVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined2 unaff_SS;
  undefined4 uVar5;
  undefined *puVar6;
  undefined2 uVar7;
  undefined *puVar8;
  undefined2 uVar9;
  undefined local_210 [256];
  undefined local_110 [256];
  int local_10;
  int local_e;
  undefined2 local_c;
  int local_a;
  undefined2 local_8;
  int local_6;
  byte local_3;
  
  local_8 = (undefined2)((ulong)param_7 >> 0x10);
  local_e = (int)param_7;
  local_a = local_e;
  if (*(char *)(local_e + 0x82) != '\0') {
    local_a = local_e + 0x82;
  }
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  local_c = local_8;
  FUN_10d8_0f13(param_5,(int)param_6,(int)((ulong)param_6 >> 0x10),local_a,local_8,
                *(undefined2 *)(iVar1 + 0x56),*(undefined2 *)(iVar1 + 0x58));
  local_3 = *(int *)(local_e + 0xc2) != 0;
  if (*(int *)(local_e + 0xc4) != 0) {
    local_3 = local_3 | 2;
  }
  if (*(int *)(local_e + 0xc6) != 0) {
    local_3 = local_3 | 4;
  }
  if (*(int *)(local_e + 0x2b2) != 0) {
    local_3 = local_3 | 8;
  }
  puVar2 = (undefined *)param_4;
  uVar4 = (undefined2)((ulong)param_4 >> 0x10);
  if (*(int *)(local_e + 0xcc) == 0) {
    *param_4 = 0;
    local_10 = *(int *)(local_e + 0xd0) + -1;
    if (-1 < local_10) {
      local_6 = 0;
      while( true ) {
        if (local_6 != 0) {
          puVar8 = local_110;
          uVar7 = unaff_SS;
          FUN_1158_17cd(puVar2,uVar4);
          FUN_1158_184c(0x23f2,0x1158);
          FUN_1158_17e7(param_3,puVar2,uVar4,puVar8,uVar7);
        }
        puVar8 = local_210;
        uVar9 = unaff_SS;
        FUN_1158_17cd(puVar2,uVar4);
        puVar6 = local_110;
        uVar7 = unaff_SS;
        uVar5 = FUN_10d8_2d4a((int)*(undefined4 *)(iVar1 + 0x22),
                              (int)((ulong)*(undefined4 *)(iVar1 + 0x22) >> 0x10),
                              *(int *)(local_e + local_6 * 2 + 0xd8) + -1);
        FUN_10d8_29fc(uVar5);
        FUN_1158_184c(puVar6,uVar7);
        FUN_1158_17e7(param_3,puVar2,uVar4,puVar8,uVar9);
        if (local_6 == local_10) break;
        local_6 = local_6 + 1;
      }
    }
  }
  else {
    local_3 = local_3 | 0x10;
    FUN_10d8_0f13(param_3,puVar2,uVar4,local_e + 0xf8,local_c,*(undefined2 *)(iVar1 + 0x56),
                  *(undefined2 *)(iVar1 + 0x58));
  }
  *param_2 = local_3;
  return;
}



/* ---- FUN_10e0_260d @ 10e0:260d  (132 octets) ---- */

void __stdcall16far FUN_10e0_260d(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  int iVar5;
  int local_4;
  
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  iVar2 = (int)param_1;
  if (((*(char *)((int)*(undefined4 *)(iVar2 + 0x17c) + 0x11) != '\0') &&
      (uVar4 = *(undefined4 *)((int)*(undefined4 *)(iVar2 + 0x17c) + 0x1c),
      0 < *(int *)((int)uVar4 + 8))) &&
     (uVar4 = *(undefined4 *)((int)*(undefined4 *)(iVar2 + 0x17c) + 0x1c),
     iVar1 = *(int *)((int)uVar4 + 8) + -1, -1 < iVar1)) {
    local_4 = 0;
    while( true ) {
      uVar4 = *(undefined4 *)((int)*(undefined4 *)(iVar2 + 0x17c) + 0x1c);
      iVar5 = local_4;
      uVar4 = FUN_1148_0dd0((int)uVar4,(int)((ulong)uVar4 >> 0x10),local_4);
      FUN_10d8_3d88(iVar2,uVar3,uVar4,iVar5);
      if (local_4 == iVar1) break;
      local_4 = local_4 + 1;
    }
  }
  FUN_10d8_5d4c(iVar2,uVar3);
  return;
}



/* ---- FUN_10e0_2691 @ 10e0:2691  (188 octets) ---- */

void __stdcall16far
FUN_10e0_2691(undefined4 param_1,undefined2 param_2,char param_3,undefined4 param_4,
             undefined4 param_5)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  
  uVar2 = (undefined2)((ulong)param_5 >> 0x10);
  iVar1 = (int)param_5;
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  FUN_10d8_0eb7(0x1f,iVar1 + 2,uVar2,(int)param_4,(int)((ulong)param_4 >> 0x10),
                *(undefined2 *)((int)param_1 + 0x56),*(undefined2 *)((int)param_1 + 0x58));
  *(uint *)(iVar1 + 0x22) = (uint)*(byte *)(param_3 + 0xb68);
  if ((((param_3 == '\x01') || (param_3 == '\f')) || (param_3 == '\r')) ||
     (((param_3 == '\x0e' || (param_3 == '\x0f')) || (param_3 == '\x10')))) {
    *(undefined2 *)(iVar1 + 0x26) = param_2;
  }
  else if (param_3 == '\b') {
    *(undefined2 *)(iVar1 + 0x26) = 0x20;
    *(undefined2 *)(iVar1 + 0x28) = param_2;
  }
  if (param_3 == '\a') {
    *(undefined2 *)(iVar1 + 0x24) = 0x15;
  }
  else if (param_3 == '\x0e') {
    *(undefined2 *)(iVar1 + 0x24) = 0x17;
  }
  else if (param_3 == '\x0f') {
    *(undefined2 *)(iVar1 + 0x24) = 0x16;
  }
  else if (param_3 == '\x10') {
    *(undefined2 *)(iVar1 + 0x24) = 0x1a;
  }
  return;
}



/* ---- FUN_10e0_2895 @ 10e0:2895  (54 octets) ---- */

undefined __stdcall16far FUN_10e0_2895(undefined4 param_1,undefined2 param_2,undefined4 param_3)

{
  undefined uVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  uVar2 = (undefined2)param_1;
  FUN_10d8_4c3d(uVar2,uVar3);
  FUN_10d8_5785(uVar2,uVar3,param_2,(int)param_3,(int)((ulong)param_3 >> 0x10),0);
  uVar1 = FUN_10e0_2bcb(uVar2,uVar3);
  return uVar1;
}



/* ---- FUN_10e0_28cb @ 10e0:28cb  (36 octets) ---- */

undefined4 __stdcall16far FUN_10e0_28cb(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined2 uVar3;
  
  uVar1 = *(undefined4 *)((int)param_1 + 0x17c);
  uVar3 = (undefined2)((ulong)uVar1 >> 0x10);
  iVar2 = (int)uVar1;
  return CONCAT22(*(undefined2 *)(iVar2 + 6),*(undefined2 *)(iVar2 + 4));
}



/* ---- FUN_10e0_28ef @ 10e0:28ef  (133 octets) ---- */

long __stdcall16far FUN_10e0_28ef(undefined4 param_1,undefined2 param_2,undefined2 param_3)

{
  undefined2 uVar1;
  int iVar2;
  undefined2 uVar3;
  long lVar4;
  undefined local_8 [2];
  undefined4 local_6;
  
  local_6._0_2_ = param_2;
  local_6._2_2_ = param_3;
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  FUN_10d8_5f2b((int)param_1,uVar3);
  uVar1 = FUN_10e8_21ad(0x10d8,local_8);
  FUN_10d8_124e(uVar1);
  iVar2 = FUN_1150_0ddb(0xb7a,0x1160,param_2,param_3);
  lVar4 = CONCAT22(local_6._2_2_,(undefined2)local_6);
  if (iVar2 == 0) {
    lVar4 = FUN_10e0_2b5d((int)param_1,uVar3);
    if (lVar4 != 0) {
      local_6 = lVar4;
      lVar4 = FUN_1150_0cdf(lVar4,param_2,param_3);
    }
  }
  return lVar4;
}



/* ---- FUN_10e0_2974 @ 10e0:2974  (46 octets) ---- */

void __stdcall16far FUN_10e0_2974(undefined4 param_1,undefined *param_2)

{
  undefined2 uVar1;
  
  uVar1 = (undefined2)((ulong)param_1 >> 0x10);
  if (*(char *)((int)param_1 + 0x183) == '\0') {
    *param_2 = 0;
  }
  else {
    FUN_1158_17e7(0xff,(undefined *)param_2,(int)((ulong)param_2 >> 0x10),(int)param_1 + 0x1d4,uVar1
                 );
  }
  return;
}



/* ---- FUN_10e0_29a2 @ 10e0:29a2  (49 octets) ---- */

void __stdcall16far FUN_10e0_29a2(undefined4 param_1,undefined *param_2)

{
  undefined2 uVar1;
  
  uVar1 = (undefined2)((ulong)param_1 >> 0x10);
  if (*(char *)((int)param_1 + 0x183) == '\0') {
    FUN_1158_17e7(0xff,(undefined *)param_2,(int)((ulong)param_2 >> 0x10),(int)param_1 + 0x1d4,uVar1
                 );
  }
  else {
    *param_2 = 0;
  }
  return;
}



/* ---- FUN_10e0_29da @ 10e0:29da  (353 octets) ---- */

void __stdcall16far
FUN_10e0_29da(undefined4 param_1,undefined *param_2,undefined *param_3,char param_4,char *param_5)

{
  char cVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined2 unaff_SS;
  undefined4 uVar5;
  undefined *puVar6;
  undefined2 uVar7;
  undefined local_184 [254];
  uint local_86;
  byte local_84 [128];
  uint local_4;
  
  *param_3 = 0;
  *param_2 = 0;
  if (*param_5 != '\0') {
    uVar3 = (undefined2)((ulong)param_1 >> 0x10);
    iVar2 = (int)param_1;
    if (*(char *)(iVar2 + 0x40) == '\0') {
      uVar4 = (undefined2)((ulong)param_5 >> 0x10);
      FUN_1158_17e7(0x7f,local_84,unaff_SS,(char *)param_5,uVar4);
      if (param_4 != '\0') {
        cVar1 = FUN_10d8_217a((int)*(undefined4 *)(iVar2 + 0x124),
                              (int)((ulong)*(undefined4 *)(iVar2 + 0x124) >> 0x10));
        if (cVar1 == '\0') {
          puVar6 = local_184;
          uVar7 = unaff_SS;
          uVar5 = FUN_10e0_1985((int)*(undefined4 *)(iVar2 + 0x178),
                                (int)((ulong)*(undefined4 *)(iVar2 + 0x178) >> 0x10),(char *)param_5
                                ,uVar4);
          FUN_10e0_1851(uVar5);
          FUN_1158_17e7(0x7f,local_84,unaff_SS,puVar6,uVar7);
        }
        else {
          local_86 = (uint)local_84[0];
          if (local_86 != 0) {
            local_4 = 1;
            while( true ) {
              if (local_84[local_4] == 0x3b) {
                local_84[local_4] = 0x40;
              }
              if (local_4 == local_86) break;
              local_4 = local_4 + 1;
            }
          }
          puVar6 = local_184;
          uVar4 = unaff_SS;
          FUN_1158_17cd(0x29d3,0x10d8);
          FUN_1158_184c(local_84,unaff_SS);
          FUN_1158_17e7(0x7f,local_84,unaff_SS,puVar6,uVar4);
        }
      }
      cVar1 = FUN_10e0_2df7(iVar2,uVar3);
      if (cVar1 != '\0') {
        uVar5 = FUN_10d8_5f65(iVar2,uVar3);
        FUN_10d8_0eb7(0x1f,(undefined *)param_2,param_2._2_2_,local_84,unaff_SS,uVar5);
        puVar6 = local_184;
        uVar4 = unaff_SS;
        FUN_1150_0af2(0x29d5,0x10d8,iVar2 + 0x184,uVar3);
        FUN_1158_17e7(0x7f,local_84,unaff_SS,puVar6,uVar4);
      }
      uVar5 = FUN_10d8_5f65(iVar2,uVar3);
      FUN_10d8_0eb7(0x7f,(undefined *)param_3,param_3._2_2_,local_84,unaff_SS,uVar5);
    }
  }
  return;
}



/* ---- FUN_10e0_2b3b @ 10e0:2b3b  (34 octets) ---- */

void __stdcall16far FUN_10e0_2b3b(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)((int)param_1 + 0x17c);
  uVar1 = *(undefined4 *)((int)uVar1 + 0x18);
  FUN_1158_17e7(0xff,(int)param_2,(int)((ulong)param_2 >> 0x10),(int)uVar1,
                (int)((ulong)uVar1 >> 0x10));
  return;
}



/* ---- FUN_10e0_2b5d @ 10e0:2b5d  (110 octets) ---- */

undefined4 __stdcall16far FUN_10e0_2b5d(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  undefined2 uVar3;
  undefined local_106;
  undefined2 local_6;
  undefined2 local_4;
  
  local_6 = 0;
  local_4 = 0;
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  iVar2 = (int)param_1;
  cVar1 = FUN_10d8_217a((int)*(undefined4 *)(iVar2 + 0x124),
                        (int)((ulong)*(undefined4 *)(iVar2 + 0x124) >> 0x10));
  if (cVar1 == '\0') {
    if (*(char *)(iVar2 + 0x182) == '\0') {
      FUN_1150_0c17(iVar2 + 0x184,uVar3);
      if (local_106 != '\0') goto LAB_10e0_2bc1;
    }
    iVar2 = *(char *)(iVar2 + 0x182) * 4;
    local_6 = *(undefined2 *)(iVar2 + 0xb84);
    local_4 = *(undefined2 *)(iVar2 + 0xb86);
  }
LAB_10e0_2bc1:
  return CONCAT22(local_4,local_6);
}



/* ---- FUN_10e0_2bcb @ 10e0:2bcb  (115 octets) ---- */

bool __stdcall16far FUN_10e0_2bcb(undefined4 param_1)

{
  int iVar1;
  undefined2 uVar2;
  int iVar3;
  undefined2 uVar4;
  undefined4 uVar5;
  
  uVar4 = (undefined2)((ulong)param_1 >> 0x10);
  iVar3 = (int)param_1;
  FUN_10d8_4c3d(iVar3,uVar4);
  FUN_10d8_4857(iVar3,uVar4);
  uVar5 = FUN_10d8_56e8(iVar3,uVar4,0);
  uVar2 = (undefined2)((ulong)uVar5 >> 0x10);
  iVar1 = FUN_10e8_095d(0x10d8,0,0,(int)uVar5 + 4,uVar2,0,*(undefined2 *)((int)uVar5 + 2),0,
                        *(undefined2 *)(iVar3 + 0x34),*(undefined2 *)(iVar3 + 0x36));
  if (iVar1 == 0) {
    FUN_10d8_4b1e(iVar3,uVar4,3);
  }
  return iVar1 == 0;
}



/* ---- FUN_10e0_2df7 @ 10e0:2df7  (65 octets) ---- */

undefined2 __stdcall16far FUN_10e0_2df7(undefined4 param_1)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 unaff_SS;
  undefined *puVar3;
  undefined local_104 [258];
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  if (*(char *)((int)param_1 + 0x182) != '\x02') {
    puVar3 = local_104;
    FUN_1150_0c17((int)param_1 + 0x184,uVar2);
    iVar1 = FUN_1150_0730(0x2df2,0x1150,puVar3,unaff_SS);
    if (iVar1 != 0) {
      return 0;
    }
  }
  return 1;
}



/* ---- FUN_10e0_2e38 @ 10e0:2e38  (37 octets) ---- */

void __stdcall16far FUN_10e0_2e38(undefined4 param_1)

{
  undefined2 uVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  uVar1 = (undefined2)param_1;
  FUN_10d8_4c3d(uVar1,uVar2);
  FUN_10e0_31d3(uVar1,uVar2);
  FUN_10e0_1eac(uVar1,uVar2);
  return;
}



/* ---- FUN_10e0_2e5d @ 10e0:2e5d  (61 octets) ---- */

void __stdcall16far FUN_10e0_2e5d(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined2 uVar3;
  
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  iVar2 = (int)param_1;
  if ((*(char *)((int)*(undefined4 *)(iVar2 + 0x17c) + 0x11) != '\0') &&
     (uVar1 = *(undefined4 *)((int)*(undefined4 *)(iVar2 + 0x17c) + 0x1c),
     0 < *(int *)((int)uVar1 + 8))) {
    FUN_10e0_31d3(iVar2,uVar3);
    FUN_10d8_584a(iVar2,uVar3);
  }
  return;
}



/* ---- FUN_10e0_2e9a @ 10e0:2e9a  (56 octets) ---- */

void __stdcall16far FUN_10e0_2e9a(undefined4 param_1,undefined2 param_2,undefined2 param_3)

{
  undefined4 uVar1;
  char cVar2;
  undefined2 uVar3;
  
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  cVar2 = FUN_10d8_3dda((int)param_1,uVar3,param_2,param_3);
  if (cVar2 != '\0') {
    FUN_10d8_11ef(0xf21f);
  }
  uVar1 = *(undefined4 *)((int)param_1 + 0x17c);
  FUN_10d8_7731((int)uVar1,(int)((ulong)uVar1 >> 0x10),param_2,param_3);
  return;
}



/* ---- FUN_10e0_2ed2 @ 10e0:2ed2  (28 octets) ---- */

void __stdcall16far FUN_10e0_2ed2(undefined4 param_1,undefined param_2)

{
  undefined2 uVar1;
  
  uVar1 = (undefined2)((ulong)param_1 >> 0x10);
  FUN_10d8_31e5((int)param_1,uVar1);
  *(undefined *)((int)param_1 + 0x180) = param_2;
  return;
}



/* ---- FUN_10e0_2eee @ 10e0:2eee  (186 octets) ---- */

void __stdcall16far FUN_10e0_2eee(undefined4 param_1,char param_2,undefined4 param_3)

{
  char cVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined2 unaff_SS;
  bool bVar6;
  undefined local_a2 [32];
  undefined local_82 [128];
  
  uVar4 = (undefined2)((ulong)param_1 >> 0x10);
  iVar2 = (int)param_1;
  cVar1 = FUN_10d8_3202(iVar2,uVar4);
  if (cVar1 != '\0') {
    FUN_10d8_4c3d(iVar2,uVar4);
  }
  bVar6 = iVar2 + 0x1d4 == 0;
  uVar5 = (undefined2)((ulong)param_3 >> 0x10);
  uVar3 = (undefined2)param_3;
  FUN_1158_18be(uVar3,uVar5,iVar2 + 0x1d4,uVar4);
  if ((!bVar6) || (*(char *)(iVar2 + 0x183) != param_2)) {
    cVar1 = FUN_10d8_3202(iVar2,uVar4);
    if (cVar1 != '\0') {
      FUN_10e0_29da(iVar2,uVar4,local_a2,unaff_SS,local_82,unaff_SS,param_2,uVar3,uVar5);
      FUN_10d8_3916(iVar2,uVar4,local_a2,unaff_SS,local_82,unaff_SS);
    }
    FUN_1158_17e7(0x7f,iVar2 + 0x1d4,uVar4,uVar3,uVar5);
    *(char *)(iVar2 + 0x183) = param_2;
    cVar1 = FUN_10d8_3202(iVar2,uVar4);
    if (cVar1 != '\0') {
      FUN_10d8_4b1e(iVar2,uVar4,0);
    }
  }
  return;
}



/* ---- FUN_10e0_2fa8 @ 10e0:2fa8  (32 octets) ---- */

void __stdcall16far FUN_10e0_2fa8(undefined4 param_1,char *param_2)

{
  uint in_AX;
  uint uVar1;
  
  uVar1 = in_AX & 0xff00;
  if (*param_2 != '\0') {
    uVar1 = uVar1 + 1;
  }
  FUN_10e0_2eee((int)param_1,(int)((ulong)param_1 >> 0x10),uVar1,(char *)param_2,
                (int)((ulong)param_2 >> 0x10));
  return;
}



/* ---- FUN_10e0_2fc8 @ 10e0:2fc8  (24 octets) ---- */

void __stdcall16far FUN_10e0_2fc8(undefined4 param_1,undefined4 param_2)

{
  FUN_10e0_2eee((int)param_1,(int)((ulong)param_1 >> 0x10),0,(int)param_2,
                (int)((ulong)param_2 >> 0x10));
  return;
}



/* ---- FUN_10e0_2fe0 @ 10e0:2fe0  (27 octets) ---- */

void __stdcall16far FUN_10e0_2fe0(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)((int)param_1 + 0x17c);
  FUN_10e0_1db3((int)uVar1,(int)((ulong)uVar1 >> 0x10),(int)param_2,(int)((ulong)param_2 >> 0x10));
  return;
}



/* ---- FUN_10e0_2ffb @ 10e0:2ffb  (28 octets) ---- */

void __stdcall16far FUN_10e0_2ffb(undefined4 param_1,undefined param_2)

{
  undefined2 uVar1;
  
  uVar1 = (undefined2)((ulong)param_1 >> 0x10);
  FUN_10d8_31e5((int)param_1,uVar1);
  *(undefined *)((int)param_1 + 0x181) = param_2;
  return;
}



/* ---- FUN_10e0_3017 @ 10e0:3017  (56 octets) ---- */

void __stdcall16far FUN_10e0_3017(undefined4 *param_1,undefined4 param_2)

{
  undefined2 *puVar1;
  undefined4 *puVar2;
  undefined2 uVar3;
  
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  puVar2 = (undefined4 *)param_1;
  FUN_10d8_31e5(puVar2,uVar3);
  FUN_1158_17e7(0x4f,puVar2 + 0x61,uVar3,(int)param_2,(int)((ulong)param_2 >> 0x10));
  puVar1 = (undefined2 *)((int)*param_1 + 0x38);
  (*(code *)*puVar1)(0x1158,puVar2,uVar3,0,0,8);
  return;
}



/* ---- FUN_10e0_304f @ 10e0:304f  (28 octets) ---- */

void __stdcall16far FUN_10e0_304f(undefined4 param_1,undefined param_2)

{
  undefined2 uVar1;
  
  uVar1 = (undefined2)((ulong)param_1 >> 0x10);
  FUN_10d8_31e5((int)param_1,uVar1);
  *(undefined *)((int)param_1 + 0x182) = param_2;
  return;
}



/* ---- FUN_10e0_3077 @ 10e0:3077  (318 octets) ---- */

void __stdcall16far FUN_10e0_3077(undefined4 *param_1)

{
  undefined2 *puVar1;
  char cVar2;
  int iVar3;
  undefined extraout_AH;
  undefined4 *puVar4;
  undefined2 uVar5;
  char *pcVar6;
  undefined2 unaff_SS;
  undefined4 *puStack_468;
  undefined2 uStack_460;
  undefined *puStack_45e;
  undefined2 uStack_45c;
  undefined local_450 [200];
  int local_388;
  undefined local_178 [256];
  undefined local_78 [33];
  undefined local_57;
  undefined local_56 [80];
  undefined4 local_6;
  
  uVar5 = (undefined2)((ulong)param_1 >> 0x10);
  puVar4 = (undefined4 *)param_1;
  if (*(char *)((int)puVar4[0x5e] + 0xc) == '\0') {
    puVar1 = (undefined2 *)((int)*param_1 + 0x90);
    uStack_45c = 0x309e;
    (*(code *)*puVar1)();
    uStack_45c = 0x3071;
    uStack_460 = DAT_1160_1858;
    puStack_468 = (undefined4 *)0x30ba;
    DAT_1160_1858 = (undefined4 **)&uStack_460;
    puStack_45e = &stack0xfffe;
    FUN_10d8_2dd0();
    do {
      puStack_468 = (undefined4 *)0x30c4;
      FUN_10d8_5f2b();
      puStack_468 = puVar4;
      puStack_468 = (undefined4 *)FUN_10d8_5f65();
      puStack_468 = (undefined4 *)FUN_10d8_0eb7(0x4f,local_56,unaff_SS,puVar4 + 0x61,uVar5);
      FUN_10e0_2b5d(puVar4,uVar5);
      FUN_10e8_01ed((char *)s_iTime_1160_10dc + 4,&local_6);
      cVar2 = FUN_10e0_1604();
    } while (cVar2 == '\0');
    puStack_468 = (undefined4 *)DAT_1160_1858;
    DAT_1160_1858 = &puStack_468;
    FUN_10e0_1955((int)puVar4[0x5e],(int)((ulong)puVar4[0x5e] >> 0x10));
    pcVar6 = (char *)s_iTime_1160_10dc + 4;
    while( true ) {
      iVar3 = FUN_10e8_00ed(pcVar6,0,0,local_450);
      if (iVar3 != 0) break;
      pcVar6 = (char *)0x10e8;
      if (local_388 != 0) {
        FUN_10e0_23f4(puVar4,uVar5,&local_57,unaff_SS,0xff,local_178,unaff_SS,0x1f,local_78,unaff_SS
                      ,local_450,unaff_SS);
        pcVar6 = (char *)s_iTime_1160_10dc + 4;
        FUN_10e0_18f6((int)puVar4[0x5e],(int)((ulong)puVar4[0x5e] >> 0x10),
                      CONCAT11(extraout_AH,local_57),local_178,unaff_SS,local_78,unaff_SS);
      }
    }
    *(undefined *)((int)puVar4[0x5e] + 0xc) = 1;
    DAT_1160_1858 = (undefined4 **)puStack_468;
    puStack_468 = &local_6;
    FUN_10e8_00ad(0x10e8);
    return;
  }
  return;
}



/* ---- FUN_10e0_31d3 @ 10e0:31d3  (33 octets) ---- */

void __stdcall16far FUN_10e0_31d3(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  uVar1 = *(undefined4 *)((int)param_1 + 0x17c);
  uVar4 = (undefined2)((ulong)uVar1 >> 0x10);
  iVar2 = (int)uVar1;
  FUN_10d8_5a0f((int)param_1,uVar3,*(undefined2 *)(iVar2 + 0x1c),*(undefined2 *)(iVar2 + 0x1e));
  return;
}



/* ---- FUN_10e0_31f4 @ 10e0:31f4  (67 octets) ---- */

undefined4 __stdcall16far FUN_10e0_31f4(undefined4 param_1,char param_2)

{
  undefined2 in_AX;
  undefined uVar1;
  undefined extraout_AH;
  undefined2 uVar2;
  undefined4 uVar3;
  undefined2 uStack_a;
  
  uVar1 = (undefined)((uint)in_AX >> 8);
  if (param_2 != '\0') {
    FUN_1158_1fe2();
    uVar1 = extraout_AH;
  }
  uVar3 = FUN_1158_1f50(0x2a3,0x1148,CONCAT11(uVar1,1));
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  *(undefined2 *)((int)param_1 + 4) = (int)uVar3;
  *(undefined2 *)((int)param_1 + 6) = (int)((ulong)uVar3 >> 0x10);
  if (param_2 != '\0') {
    DAT_1160_1858 = uStack_a;
  }
  return param_1;
}



/* ---- FUN_10e0_3237 @ 10e0:3237  (55 octets) ---- */

void __stdcall16far FUN_10e0_3237(undefined4 param_1,char param_2)

{
  int iVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  FUN_10e0_34d0(iVar1,uVar2);
  FUN_1158_1f7f((int)*(undefined4 *)(iVar1 + 4),(int)((ulong)*(undefined4 *)(iVar1 + 4) >> 0x10));
  FUN_1158_1f66(iVar1,uVar2,0);
  if (param_2 != '\0') {
    FUN_1158_200f();
  }
  return;
}



/* ---- FUN_10e0_326e @ 10e0:326e  (155 octets) ---- */

void __stdcall16far FUN_10e0_326e(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int local_4;
  
  cVar1 = FUN_1158_2255(0x375,(char *)s_iTime_1160_10dc + 4,(undefined2)param_2,param_2._2_2_);
  uVar4 = (undefined2)param_1;
  uVar5 = (undefined2)((ulong)param_1 >> 0x10);
  if (cVar1 == '\0') {
    FUN_1148_10fa(uVar4,uVar5,(undefined2)param_2,param_2._2_2_);
  }
  else {
    FUN_10e0_34d0(uVar4,uVar5);
    iVar2 = FUN_10e0_34b7((undefined2)param_2,param_2._2_2_);
    if (-1 < iVar2 + -1) {
      local_4 = 0;
      iVar3 = 0;
      while( true ) {
        uVar6 = FUN_10e0_393e(0x34e,(char *)s_iTime_1160_10dc + 4,
                              CONCAT11((char)((uint)iVar3 >> 8),1),0,uVar4,uVar5);
        uVar7 = FUN_10e0_3500((undefined2)param_2,param_2._2_2_,local_4);
        FUN_10e0_3e9d(uVar6,uVar7);
        if (local_4 == iVar2 + -1) break;
        iVar3 = local_4;
        local_4 = local_4 + 1;
      }
    }
  }
  return;
}



/* ---- FUN_10e0_3309 @ 10e0:3309  (66 octets) ---- */

void __stdcall16far FUN_10e0_3309(undefined4 param_1,undefined4 *param_3)

{
  undefined2 *puVar1;
  char cVar2;
  
  cVar2 = FUN_1158_2255(0x375,(char *)s_iTime_1160_10dc + 4,(undefined4 *)param_3,param_3._2_2_);
  if (cVar2 == '\0') {
    FUN_1148_11cd((undefined2)param_1,param_1._2_2_,(undefined4 *)param_3,param_3._2_2_);
  }
  else {
    puVar1 = (undefined2 *)((int)*param_3 + 8);
    (*(code *)*puVar1)(0x1158,(undefined4 *)param_3,param_3._2_2_,(undefined2)param_1,param_1._2_2_)
    ;
  }
  return;
}



/* ---- FUN_10e0_334b @ 10e0:334b  (196 octets) ---- */

void __stdcall16far FUN_10e0_334b(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  undefined2 unaff_SS;
  undefined uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined *puVar10;
  undefined2 uVar11;
  undefined *puVar12;
  undefined2 uVar13;
  undefined local_20a [256];
  undefined local_10a [256];
  uint local_a;
  int local_8;
  uint local_6;
  int local_4;
  
  uVar5 = (undefined2)((ulong)param_1 >> 0x10);
  uVar3 = (undefined2)param_1;
  local_8 = FUN_10e0_34b7(uVar3,uVar5);
  local_8 = local_8 + -1;
  if (local_8 < 0) {
    return;
  }
  local_4 = 0;
  do {
    uVar6 = (undefined2)((ulong)param_2 >> 0x10);
    uVar4 = (undefined2)param_2;
    iVar1 = FUN_10e0_34b7(uVar4,uVar6);
    uVar2 = iVar1 - 1;
    local_a = uVar2;
    if (uVar2 < 0x8000) {
      local_6 = 0;
      while( true ) {
        uVar7 = uVar2 == 0;
        puVar12 = local_10a;
        uVar13 = unaff_SS;
        uVar8 = FUN_10e0_3500(uVar3,uVar5,local_4);
        FUN_10e0_3a56(uVar8);
        puVar10 = local_20a;
        uVar11 = unaff_SS;
        uVar8 = FUN_10e0_3500(uVar4,uVar6,local_6);
        FUN_10e0_3a56(uVar8);
        FUN_1158_18be(puVar10,uVar11,puVar12,uVar13);
        if ((bool)uVar7) break;
        if (local_6 == local_a) goto LAB_10e0_3400;
        uVar2 = local_6 + 1;
        local_6 = uVar2;
      }
      uVar8 = FUN_10e0_3500(uVar4,uVar6,local_6);
      uVar9 = FUN_10e0_3500(uVar3,uVar5,local_4);
      FUN_10e0_3e9d(uVar9,uVar8);
    }
LAB_10e0_3400:
    if (local_4 == local_8) {
      return;
    }
    local_4 = local_4 + 1;
  } while( true );
}



/* ---- FUN_10e0_340f @ 10e0:340f  (44 octets) ---- */

void __stdcall16far FUN_10e0_340f(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  uVar1 = *(undefined4 *)((int)param_1 + 4);
  FUN_1148_0c2b((int)uVar1,(int)((ulong)uVar1 >> 0x10),(int)param_2,param_2._2_2_);
  *(int *)((int)param_2 + 4) = (int)param_1;
  *(undefined2 *)((int)param_2 + 6) = uVar2;
  return;
}



/* ---- FUN_10e0_343b @ 10e0:343b  (40 octets) ---- */

void __stdcall16far FUN_10e0_343b(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)((int)param_1 + 4);
  FUN_1148_0fa7((int)uVar1,(int)((ulong)uVar1 >> 0x10),(int)param_2,param_2._2_2_);
  *(undefined2 *)((int)param_2 + 4) = 0;
  *(undefined2 *)((int)param_2 + 6) = 0;
  return;
}



/* ---- FUN_10e0_3463 @ 10e0:3463  (84 octets) ---- */

undefined4 __stdcall16far
FUN_10e0_3463(undefined2 param_1,undefined2 param_2,undefined param_3,undefined4 param_4,
             undefined param_5)

{
  undefined extraout_AH;
  undefined4 uVar1;
  
  uVar1 = FUN_10e0_393e(0x34e,(char *)s_iTime_1160_10dc + 4,1,param_3,param_1,param_2);
  FUN_10e0_3a3c(uVar1,(int)param_4,(int)((ulong)param_4 >> 0x10));
  FUN_10e0_3a0b(uVar1,CONCAT11(extraout_AH,param_5));
  return uVar1;
}



/* ---- FUN_10e0_34b7 @ 10e0:34b7  (25 octets) ---- */

undefined2 __stdcall16far FUN_10e0_34b7(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)((int)param_1 + 4);
  return *(undefined2 *)((int)uVar1 + 8);
}



/* ---- FUN_10e0_34d0 @ 10e0:34d0  (48 octets) ---- */

void __stdcall16far FUN_10e0_34d0(undefined4 param_1)

{
  undefined2 uVar1;
  undefined4 uVar2;
  
  while (uVar1 = (undefined2)((ulong)param_1 >> 0x10), uVar2 = *(undefined4 *)((int)param_1 + 4),
        0 < *(int *)((int)uVar2 + 8)) {
    uVar2 = *(undefined4 *)((int)param_1 + 4);
    uVar2 = FUN_1148_0f43((int)uVar2,(int)((ulong)uVar2 >> 0x10));
    FUN_1158_1f7f(uVar2);
  }
  return;
}



/* ---- FUN_10e0_3500 @ 10e0:3500  (64 octets) ---- */

undefined4 __stdcall16far FUN_10e0_3500(undefined4 param_1,undefined2 param_2)

{
  undefined2 uVar1;
  undefined2 unaff_SS;
  undefined4 uVar2;
  undefined *puVar3;
  undefined local_106 [260];
  
  puVar3 = local_106;
  uVar1 = (undefined2)((ulong)param_1 >> 0x10);
  uVar2 = *(undefined4 *)((int)param_1 + 4);
  uVar2 = FUN_1148_0dd0((int)uVar2,(int)((ulong)uVar2 >> 0x10),param_2);
  FUN_10e0_3a56(uVar2);
  uVar2 = FUN_10e0_3540((int)param_1,uVar1,puVar3,unaff_SS);
  return uVar2;
}



/* ---- FUN_10e0_3540 @ 10e0:3540  (139 octets) ---- */

undefined4 __stdcall16far FUN_10e0_3540(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined2 unaff_SS;
  undefined *puVar5;
  undefined2 uVar6;
  undefined local_10a [250];
  undefined2 local_10;
  undefined2 local_e;
  undefined local_c;
  int local_a;
  int local_8;
  undefined4 local_6;
  
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  uVar1 = *(undefined4 *)((int)param_1 + 4);
  local_a = *(int *)((int)uVar1 + 8) + -1;
  uVar4 = (undefined2)((ulong)param_2 >> 0x10);
  if (local_a < 0) {
LAB_10e0_35a1:
    local_c = 4;
    local_10 = (int)param_2;
    local_e = uVar4;
    FUN_10d8_120a(0,&local_10,unaff_SS,0xf22c);
  }
  else {
    local_8 = 0;
    while( true ) {
      uVar1 = *(undefined4 *)((int)param_1 + 4);
      local_6 = FUN_1148_0dd0((int)uVar1,(int)((ulong)uVar1 >> 0x10),local_8);
      puVar5 = local_10a;
      uVar6 = unaff_SS;
      FUN_10e0_3a56(local_6);
      iVar2 = FUN_1150_07ed((int)param_2,uVar4,puVar5,uVar6);
      if (iVar2 == 0) break;
      if (local_8 == local_a) goto LAB_10e0_35a1;
      local_8 = local_8 + 1;
    }
  }
  return local_6;
}



/* ---- FUN_10e0_392e @ 10e0:392e  (16 octets) ---- */

undefined2 __stdcall16far FUN_10e0_392e(void)

{
  return 1;
}



/* ---- FUN_10e0_393e @ 10e0:393e  (121 octets) ---- */

undefined4 __stdcall16far
FUN_10e0_393e(undefined4 param_1,char param_3,undefined param_4,undefined4 param_5)

{
  undefined2 uVar1;
  undefined2 uStack_a;
  
  if (param_3 != '\0') {
    FUN_1158_1fe2();
  }
  if ((int)param_5 != 0 || param_5._2_2_ != 0) {
    FUN_10e0_340f((int)param_5,param_5._2_2_,(int)param_1,param_1._2_2_);
  }
  uVar1 = DAT_1160_1718;
  *(undefined2 *)((int)param_1 + 0x10) = DAT_1160_1716;
  *(undefined2 *)((int)param_1 + 0x12) = uVar1;
  uVar1 = DAT_1160_1718;
  *(undefined2 *)((int)param_1 + 0x14) = DAT_1160_1716;
  *(undefined2 *)((int)param_1 + 0x16) = uVar1;
  FUN_10e0_3a0b((int)param_1,param_1._2_2_,0);
  *(undefined *)((int)param_1 + 0x1b) = param_4;
  *(undefined *)((int)param_1 + 0x1a) = 0;
  if (param_3 != '\0') {
    DAT_1160_1858 = uStack_a;
  }
  return param_1;
}



/* ---- FUN_10e0_39b7 @ 10e0:39b7  (80 octets) ---- */

void __stdcall16far FUN_10e0_39b7(undefined4 param_1,char param_2)

{
  int iVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  if (*(int *)(iVar1 + 4) != 0 || *(int *)(iVar1 + 6) != 0) {
    FUN_10e0_343b((int)*(undefined4 *)(iVar1 + 4),(int)((ulong)*(undefined4 *)(iVar1 + 4) >> 0x10),
                  iVar1,uVar2);
  }
  FUN_1150_0624(*(undefined2 *)(iVar1 + 0x10),*(undefined2 *)(iVar1 + 0x12));
  FUN_1150_0624(*(undefined2 *)(iVar1 + 0x14),*(undefined2 *)(iVar1 + 0x16));
  if (param_2 != '\0') {
    FUN_1158_200f();
  }
  return;
}



/* ---- FUN_10e0_3a0b @ 10e0:3a0b  (49 octets) ---- */

void __stdcall16far FUN_10e0_3a0b(undefined4 param_1,undefined param_2)

{
  int iVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  *(undefined8 *)(iVar1 + 8) = 0;
  FUN_1150_0651(0x3a07,(char *)s_iTime_1160_10dc + 4,iVar1 + 0x14,uVar2);
  *(undefined *)(iVar1 + 0x18) = param_2;
  return;
}



/* ---- FUN_10e0_3a3c @ 10e0:3a3c  (26 octets) ---- */

void __stdcall16far FUN_10e0_3a3c(undefined4 param_1,undefined4 param_2)

{
  FUN_1150_0651((int)param_2,(int)((ulong)param_2 >> 0x10),(int)param_1 + 0x10,
                (int)((ulong)param_1 >> 0x10));
  return;
}



/* ---- FUN_10e0_3a56 @ 10e0:3a56  (29 octets) ---- */

void __stdcall16far FUN_10e0_3a56(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)((int)param_1 + 0x10);
  FUN_1158_17e7(0xff,(int)param_2,(int)((ulong)param_2 >> 0x10),(int)uVar1,
                (int)((ulong)uVar1 >> 0x10));
  return;
}



/* ---- FUN_10e0_3a8b @ 10e0:3a8b  (159 octets) ---- */

int __stdcall16far FUN_10e0_3a8b(undefined4 param_1)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 unaff_SS;
  undefined2 local_c;
  undefined2 local_a;
  undefined local_8;
  int local_4;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  switch(*(undefined *)(iVar1 + 0x18)) {
  case 0:
    local_a = (undefined2)((ulong)*(undefined4 *)(iVar1 + 0x10) >> 0x10);
    local_c = (undefined2)*(undefined4 *)(iVar1 + 0x10);
    local_8 = 4;
    FUN_10d8_120a(0,&local_c,unaff_SS,0xf21b);
    break;
  case 1:
    local_4 = *(byte *)*(undefined4 *)(iVar1 + 0x14) + 1;
    break;
  case 2:
    local_4 = 2;
    break;
  case 3:
  case 9:
  case 10:
    local_4 = 4;
    break;
  case 4:
    local_4 = 2;
    break;
  case 5:
    local_4 = 2;
    break;
  case 6:
  case 7:
  case 8:
  case 0xb:
    local_4 = 8;
    break;
  default:
    local_a = (undefined2)((ulong)*(undefined4 *)(iVar1 + 0x10) >> 0x10);
    local_c = (undefined2)*(undefined4 *)(iVar1 + 0x10);
    local_8 = 4;
    FUN_10d8_120a(0,&local_c,unaff_SS,0xf21c);
  }
  return local_4;
}



/* ---- FUN_10e0_3b46 @ 10e0:3b46  (371 octets) ---- */

void __stdcall16far FUN_10e0_3b46(undefined4 param_1,double *param_2)

{
  char cVar1;
  undefined2 uVar2;
  undefined2 extraout_DX;
  undefined2 extraout_DX_00;
  int iVar3;
  undefined2 uVar4;
  undefined2 unaff_SS;
  longdouble in_ST0;
  undefined4 uVar5;
  undefined2 local_a;
  undefined2 local_8;
  undefined local_6;
  
  uVar4 = (undefined2)((ulong)param_1 >> 0x10);
  iVar3 = (int)param_1;
  switch(*(undefined *)(iVar3 + 0x18)) {
  case 0:
    local_8 = (undefined2)((ulong)*(undefined4 *)(iVar3 + 0x10) >> 0x10);
    local_a = (undefined2)*(undefined4 *)(iVar3 + 0x10);
    local_6 = 4;
    FUN_10d8_120a(0,&local_a,unaff_SS,0xf21b);
    break;
  case 1:
    FUN_1150_0cba(*(undefined *)*(undefined4 *)(iVar3 + 0x14),(int)*(undefined4 *)(iVar3 + 0x14) + 1
                  ,(int)((ulong)*(undefined4 *)(iVar3 + 0x14) >> 0x10),(double *)param_2,
                  param_2._2_2_);
    *(undefined *)((int)(double *)param_2 + (uint)*(byte *)*(undefined4 *)(iVar3 + 0x14)) = 0;
    break;
  case 2:
    uVar4 = FUN_10e0_4840(iVar3,uVar4);
    *(undefined2 *)param_2 = uVar4;
    break;
  case 3:
    uVar5 = FUN_10e0_4840(iVar3,uVar4);
    *(int *)param_2 = (int)uVar5;
    *(undefined2 *)((int)(double *)param_2 + 2) = (int)((ulong)uVar5 >> 0x10);
    break;
  case 4:
    uVar4 = FUN_10e0_4840(iVar3,uVar4);
    *(undefined2 *)param_2 = uVar4;
    break;
  case 5:
    cVar1 = FUN_10e0_443c(iVar3,uVar4);
    *(int *)param_2 = (int)cVar1;
    break;
  case 6:
  case 7:
  case 8:
    FUN_10e0_46bc(iVar3,uVar4);
    *param_2 = (double)in_ST0;
    break;
  case 9:
    FUN_10e0_4bd4(iVar3,uVar4);
    uVar4 = extraout_DX_00;
    uVar2 = FUN_1158_100e();
    *(undefined2 *)param_2 = uVar2;
    *(undefined2 *)((int)(double *)param_2 + 2) = uVar4;
    break;
  case 10:
    FUN_10e0_4bd4(iVar3,uVar4);
    uVar4 = extraout_DX;
    FUN_1158_1057();
    uVar2 = FUN_1158_102f();
    *(undefined2 *)param_2 = uVar2;
    *(undefined2 *)((int)(double *)param_2 + 2) = uVar4;
    break;
  case 0xb:
    FUN_10e0_4bd4(iVar3,uVar4);
    *param_2 = (double)(in_ST0 * (longdouble)8.64e+07);
    break;
  default:
    local_8 = (undefined2)((ulong)*(undefined4 *)(iVar3 + 0x10) >> 0x10);
    local_a = (undefined2)*(undefined4 *)(iVar3 + 0x10);
    local_6 = 4;
    FUN_10d8_120a(0,&local_a,unaff_SS,0xf21c);
  }
  return;
}



/* ---- FUN_10e0_3e9d @ 10e0:3e9d  (475 octets) ---- */

void __stdcall16far FUN_10e0_3e9d(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 unaff_SS;
  longdouble in_ST0;
  undefined *puVar4;
  undefined local_102 [256];
  
  if ((int)param_2 != 0 || param_2._2_2_ != 0) {
    uVar3 = (undefined2)((ulong)param_1 >> 0x10);
    iVar2 = (int)param_1;
    FUN_10e0_3a0b();
    if (*(char *)((int)param_2 + 0x19) == '\0') {
      switch(*(undefined *)(iVar2 + 0x18)) {
      case 1:
        puVar4 = (undefined *)CONCAT22(unaff_SS,local_102);
        FUN_10e0_4988((int)param_2);
        FUN_10e0_4940(iVar2,CONCAT42(puVar4,uVar3));
        break;
      case 2:
        uVar1 = FUN_10e0_4840();
        FUN_10e0_480b(iVar2,CONCAT42(uVar1,uVar3));
        break;
      case 3:
        uVar1 = FUN_10e0_4840();
        FUN_10e0_47be(iVar2,CONCAT42(uVar1,uVar3));
        break;
      case 4:
        uVar1 = FUN_10e0_4840();
        FUN_10e0_47ec(iVar2,CONCAT42(uVar1,uVar3));
        break;
      case 5:
        FUN_10e0_443c();
        FUN_10e0_4319();
        break;
      case 6:
        FUN_10e0_46bc();
        FUN_10e0_462d(iVar2,uVar3,(double)in_ST0);
        break;
      case 7:
        FUN_10e0_46bc();
        FUN_10e0_4658(iVar2,uVar3,(double)in_ST0);
        break;
      case 8:
        FUN_10e0_46bc();
        FUN_10e0_467d(iVar2,uVar3,(double)in_ST0);
        break;
      case 9:
        FUN_10e0_4bd4();
        FUN_10e0_4b45(iVar2,uVar3,(double)in_ST0);
        break;
      case 10:
        FUN_10e0_4bd4();
        FUN_10e0_4b70(iVar2,uVar3,(double)in_ST0);
        break;
      case 0xb:
        FUN_10e0_4bd4();
        FUN_10e0_4b95(iVar2,uVar3,(double)in_ST0);
      }
    }
    else {
      FUN_10e0_42d9();
    }
    *(undefined *)(iVar2 + 0x1a) = *(undefined *)((int)param_2 + 0x1a);
    puVar4 = (undefined *)CONCAT22(unaff_SS,local_102);
    FUN_10e0_3a56((int)param_2);
    FUN_10e0_3a3c(iVar2,CONCAT42(puVar4,uVar3));
    if (*(char *)(iVar2 + 0x1b) == '\0') {
      *(undefined *)(iVar2 + 0x1b) = *(undefined *)((int)param_2 + 0x1b);
    }
  }
  return;
}



/* ---- FUN_10e0_4090 @ 10e0:4090  (537 octets) ---- */

void __stdcall16far FUN_10e0_4090(undefined4 param_1,undefined4 *param_2)

{
  undefined2 *puVar1;
  undefined4 uVar2;
  char cVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined2 uVar6;
  undefined2 unaff_SS;
  longdouble in_ST0;
  undefined *puVar7;
  undefined local_102 [248];
  undefined2 local_a;
  undefined2 local_8;
  undefined local_6;
  
  puVar4 = (undefined4 *)param_2;
  uVar6 = (undefined2)((ulong)param_1 >> 0x10);
  iVar5 = (int)param_1;
  FUN_10e0_3a0b();
  cVar3 = FUN_10d8_69db();
  if (cVar3 == '\0') {
    switch(*(undefined *)((int)puVar4 + 0x22)) {
    case 0:
      local_8 = (undefined2)((ulong)*(undefined4 *)(iVar5 + 0x10) >> 0x10);
      local_a = (undefined2)*(undefined4 *)(iVar5 + 0x10);
      local_6 = 4;
      FUN_10d8_120a(0,CONCAT42(CONCAT22(0xf21b,unaff_SS),&local_a));
      break;
    case 1:
      puVar7 = (undefined *)CONCAT22(unaff_SS,local_102);
      puVar1 = (undefined2 *)((int)*param_2 + 0x48);
      (*(code *)*puVar1)((char *)s_iTime_1160_10dc + 4,puVar4);
      FUN_10e0_4940(iVar5,CONCAT42(puVar7,uVar6));
      break;
    case 2:
      puVar1 = (undefined2 *)((int)*param_2 + 0x44);
      uVar2 = (*(code *)*puVar1)();
      FUN_10e0_480b(iVar5,CONCAT42(uVar2,uVar6));
      break;
    case 3:
      puVar1 = (undefined2 *)((int)*param_2 + 0x44);
      uVar2 = (*(code *)*puVar1)();
      FUN_10e0_47be(iVar5,CONCAT42(uVar2,uVar6));
      break;
    case 4:
      puVar1 = (undefined2 *)((int)*param_2 + 0x44);
      uVar2 = (*(code *)*puVar1)();
      FUN_10e0_47ec(iVar5,CONCAT42(uVar2,uVar6));
      break;
    case 5:
      puVar1 = (undefined2 *)((int)*param_2 + 0x38);
      (*(code *)*puVar1)();
      FUN_10e0_4319();
      break;
    case 6:
      puVar1 = (undefined2 *)((int)*param_2 + 0x40);
      (*(code *)*puVar1)();
      FUN_10e0_462d(iVar5,uVar6,(double)in_ST0);
      break;
    case 7:
      puVar1 = (undefined2 *)((int)*param_2 + 0x40);
      (*(code *)*puVar1)();
      FUN_10e0_4658(iVar5,uVar6,(double)in_ST0);
      break;
    case 8:
      puVar1 = (undefined2 *)((int)*param_2 + 0x40);
      (*(code *)*puVar1)();
      FUN_10e0_467d(iVar5,uVar6,(double)in_ST0);
      break;
    case 9:
      puVar1 = (undefined2 *)((int)*param_2 + 0x3c);
      (*(code *)*puVar1)();
      FUN_10e0_4b45(iVar5,uVar6,(double)in_ST0);
      break;
    case 10:
      puVar1 = (undefined2 *)((int)*param_2 + 0x3c);
      (*(code *)*puVar1)();
      FUN_10e0_4b70(iVar5,uVar6,(double)in_ST0);
      break;
    case 0xb:
      puVar1 = (undefined2 *)((int)*param_2 + 0x3c);
      (*(code *)*puVar1)();
      FUN_10e0_4b95(iVar5,uVar6,(double)in_ST0);
      break;
    default:
      local_8 = (undefined2)((ulong)*(undefined4 *)(iVar5 + 0x10) >> 0x10);
      local_a = (undefined2)*(undefined4 *)(iVar5 + 0x10);
      local_6 = 4;
      FUN_10d8_120a(0,CONCAT42(CONCAT22(0xf21c,unaff_SS),&local_a));
    }
  }
  else {
    FUN_10e0_42d9();
  }
  *(undefined *)(iVar5 + 0x1a) = 1;
  puVar7 = (undefined *)CONCAT22(unaff_SS,local_102);
  FUN_10d8_691f(puVar4);
  FUN_10e0_3a3c(iVar5,CONCAT42(puVar7,uVar6));
  return;
}



/* ---- FUN_10e0_42a9 @ 10e0:42a9  (44 octets) ---- */

void __stdcall16far FUN_10e0_42a9(undefined4 param_1)

{
  undefined4 uVar1;
  undefined2 unaff_SS;
  undefined2 local_a;
  undefined2 local_8;
  undefined local_6;
  
  uVar1 = *(undefined4 *)((int)param_1 + 0x10);
  local_8 = (undefined2)((ulong)uVar1 >> 0x10);
  local_a = (undefined2)uVar1;
  local_6 = 4;
  FUN_10d8_120a(0,&local_a,unaff_SS,0xf22d);
  return;
}



/* ---- FUN_10e0_42d9 @ 10e0:42d9  (44 octets) ---- */

void __stdcall16far FUN_10e0_42d9(undefined4 param_1)

{
  int iVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  *(undefined *)(iVar1 + 0x19) = 1;
  *(undefined8 *)(iVar1 + 8) = 0;
  FUN_1150_0651(0x42d5,(char *)s_iTime_1160_10dc + 4,iVar1 + 0x14,uVar2);
  return;
}



/* ---- FUN_10e0_4305 @ 10e0:4305  (20 octets) ---- */

void __stdcall16far FUN_10e0_4305(undefined4 param_1)

{
  undefined2 uVar1;
  
  uVar1 = (undefined2)((ulong)param_1 >> 0x10);
  *(undefined *)((int)param_1 + 0x1a) = 1;
  *(undefined *)((int)param_1 + 0x19) = 0;
  return;
}



/* ---- FUN_10e0_4319 @ 10e0:4319  (40 octets) ---- */

void __stdcall16far FUN_10e0_4319(undefined4 param_1,char param_2)

{
  int iVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  FUN_10e0_4305(iVar1,uVar2);
  FUN_10e0_3a0b(iVar1,uVar2,5);
  *(int *)(iVar1 + 8) = (int)param_2;
  return;
}



/* ---- FUN_10e0_4341 @ 10e0:4341  (113 octets) ---- */

char __stdcall16far FUN_10e0_4341(undefined4 param_1,undefined2 *param_2,undefined4 param_3)

{
  undefined2 uVar1;
  undefined2 unaff_SS;
  undefined4 uVar2;
  undefined *local_10e;
  undefined local_106 [256];
  int local_6;
  char local_3;
  
  uVar1 = (undefined2)((ulong)param_3 >> 0x10);
  local_3 = FUN_10e0_16e2((int)param_3,uVar1);
  if (local_3 != '\0') {
    uVar2 = FUN_1158_1dfb(&local_6,unaff_SS,(int)param_3,uVar1);
    *param_2 = (int)uVar2;
    ((undefined2 *)param_2)[1] = (int)((ulong)uVar2 >> 0x10);
    if (local_6 != 0) {
      uVar1 = 0xf20d;
      FUN_10e0_3a56((int)param_1,(int)((ulong)param_1 >> 0x10));
      local_10e = local_106;
      FUN_10d8_120a(0,&local_10e,unaff_SS,uVar1);
    }
  }
  return local_3;
}



/* ---- FUN_10e0_43b2 @ 10e0:43b2  (112 octets) ---- */

char __stdcall16far FUN_10e0_43b2(undefined4 param_1,double *param_2,undefined4 param_3)

{
  undefined2 uVar1;
  undefined2 unaff_SS;
  longdouble in_ST0;
  undefined *local_10e;
  undefined local_106 [256];
  int local_6;
  char local_3;
  
  uVar1 = (undefined2)((ulong)param_3 >> 0x10);
  local_3 = FUN_10e0_1667((int)param_3,uVar1);
  if (local_3 != '\0') {
    FUN_1158_1e86(&local_6,unaff_SS,(int)param_3,uVar1);
    *param_2 = (double)in_ST0;
    if (local_6 != 0) {
      uVar1 = 0xf20c;
      FUN_10e0_3a56((int)param_1,(int)((ulong)param_1 >> 0x10));
      local_10e = local_106;
      FUN_10d8_120a(0,&local_10e,unaff_SS,uVar1);
    }
  }
  return local_3;
}



/* ---- FUN_10e0_443c @ 10e0:443c  (497 octets) ---- */

undefined __stdcall16far FUN_10e0_443c(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  undefined2 unaff_SS;
  longdouble in_ST0;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined2 uVar10;
  undefined2 uVar11;
  undefined2 local_522;
  undefined2 local_520;
  undefined local_51e;
  undefined *local_51a;
  undefined local_512 [256];
  undefined local_412 [256];
  undefined local_312 [256];
  undefined local_212 [256];
  undefined local_112 [256];
  uint local_12;
  int local_10;
  int local_e;
  double local_c;
  undefined local_3;
  
  uVar5 = (undefined2)((ulong)param_1 >> 0x10);
  iVar3 = (int)param_1;
  if (*(char *)(iVar3 + 0x19) == '\0') {
    switch(*(undefined *)(iVar3 + 0x18)) {
    case 1:
      local_12 = (uint)*(byte *)*(undefined4 *)(iVar3 + 0x14);
      if (local_12 == 0) {
        local_3 = 0;
      }
      else {
        cVar1 = FUN_10e0_4341(iVar3,uVar5,&local_10,unaff_SS,(int)*(undefined4 *)(iVar3 + 0x14),
                              (int)((ulong)*(undefined4 *)(iVar3 + 0x14) >> 0x10));
        if (cVar1 == '\0') {
          cVar1 = FUN_10e0_43b2(iVar3,uVar5,&local_c,unaff_SS,(int)*(undefined4 *)(iVar3 + 0x14),
                                (int)((ulong)*(undefined4 *)(iVar3 + 0x14) >> 0x10));
          if (cVar1 == '\0') {
            uVar6 = (undefined2)((ulong)*(undefined4 *)(iVar3 + 0x14) >> 0x10);
            uVar4 = (undefined2)*(undefined4 *)(iVar3 + 0x14);
            puVar9 = local_212;
            puVar8 = local_112;
            uVar11 = unaff_SS;
            uVar10 = unaff_SS;
            FUN_1150_092b(0xf226);
            FUN_1158_180b(local_12,1,puVar8,uVar11);
            iVar2 = FUN_1150_07ed(puVar9,uVar10,uVar4,uVar6);
            if (iVar2 == 0) {
              local_3 = 0;
            }
            else {
              uVar6 = (undefined2)((ulong)*(undefined4 *)(iVar3 + 0x14) >> 0x10);
              uVar4 = (undefined2)*(undefined4 *)(iVar3 + 0x14);
              puVar9 = local_412;
              puVar8 = local_312;
              uVar11 = unaff_SS;
              uVar10 = unaff_SS;
              FUN_1150_092b(0xf227);
              FUN_1158_180b(local_12,1,puVar8,uVar11);
              iVar2 = FUN_1150_07ed(puVar9,uVar10,uVar4,uVar6);
              if (iVar2 == 0) {
                local_3 = 1;
              }
              else {
                uVar11 = 0xf211;
                local_520 = (undefined2)((ulong)*(undefined4 *)(iVar3 + 0x14) >> 0x10);
                local_522 = (undefined2)*(undefined4 *)(iVar3 + 0x14);
                local_51e = 4;
                FUN_10e0_3a56(iVar3,uVar5);
                local_51a = local_512;
                FUN_10d8_120a(1,&local_522,unaff_SS,uVar11);
              }
            }
          }
          else {
            local_3 = local_c != 0.0;
          }
        }
        else {
          local_3 = local_10 != 0 || local_e != 0;
        }
      }
      break;
    case 2:
    case 3:
    case 4:
      lVar7 = FUN_10e0_4840(iVar3,uVar5);
      local_3 = lVar7 != 0;
      break;
    case 5:
      local_3 = *(int *)(iVar3 + 8) != 0;
      break;
    case 6:
    case 7:
    case 8:
      FUN_10e0_46bc(iVar3,uVar5);
      local_3 = in_ST0 != (longdouble)0.0;
      break;
    case 9:
    case 10:
    case 0xb:
      FUN_10e0_4bd4(iVar3,uVar5);
      local_3 = in_ST0 != (longdouble)0.0;
      break;
    default:
      FUN_10e0_42a9(iVar3,uVar5);
    }
  }
  else {
    local_3 = 0;
  }
  return local_3;
}



/* ---- FUN_10e0_462d @ 10e0:462d  (43 octets) ---- */

void __stdcall16far FUN_10e0_462d(undefined4 param_1,undefined8 param_2)

{
  int iVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  FUN_10e0_4305(iVar1,uVar2);
  FUN_10e0_3a0b(iVar1,uVar2,6);
  *(undefined8 *)(iVar1 + 8) = param_2;
  return;
}



/* ---- FUN_10e0_4658 @ 10e0:4658  (37 octets) ---- */

void __stdcall16far
FUN_10e0_4658(undefined4 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4,
             undefined2 param_5)

{
  undefined2 uVar1;
  
  uVar1 = (undefined2)((ulong)param_1 >> 0x10);
  FUN_10e0_462d((int)param_1,uVar1,param_2,param_3,param_4,param_5);
  *(undefined *)((int)param_1 + 0x18) = 7;
  return;
}



/* ---- FUN_10e0_467d @ 10e0:467d  (37 octets) ---- */

void __stdcall16far
FUN_10e0_467d(undefined4 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4,
             undefined2 param_5)

{
  undefined2 uVar1;
  
  uVar1 = (undefined2)((ulong)param_1 >> 0x10);
  FUN_10e0_462d((int)param_1,uVar1,param_2,param_3,param_4,param_5);
  *(undefined *)((int)param_1 + 0x18) = 8;
  return;
}



/* ---- FUN_10e0_46bc @ 10e0:46bc  (258 octets) ---- */

void __stdcall16far FUN_10e0_46bc(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 unaff_SS;
  undefined local_16 [4];
  undefined local_12 [16];
  
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  iVar2 = (int)param_1;
  if (*(char *)(iVar2 + 0x19) == '\0') {
    switch(*(undefined *)(iVar2 + 0x18)) {
    case 1:
      if ((*(char *)*(undefined4 *)(iVar2 + 0x14) != '\0') &&
         (cVar1 = FUN_10e0_4341(iVar2,uVar3,local_16,unaff_SS,(int)*(undefined4 *)(iVar2 + 0x14),
                                (int)((ulong)*(undefined4 *)(iVar2 + 0x14) >> 0x10)), cVar1 == '\0')
         ) {
        FUN_10e0_43b2(iVar2,uVar3,local_12,unaff_SS,(int)*(undefined4 *)(iVar2 + 0x14),
                      (int)((ulong)*(undefined4 *)(iVar2 + 0x14) >> 0x10));
      }
      break;
    case 2:
    case 3:
    case 4:
      FUN_10e0_4840(iVar2,uVar3);
      break;
    default:
      FUN_10e0_42a9(iVar2,uVar3);
      break;
    case 6:
    case 7:
    case 8:
      break;
    case 9:
    case 10:
    case 0xb:
      FUN_10e0_4bd4(iVar2,uVar3);
    }
  }
  return;
}



/* ---- FUN_10e0_47be @ 10e0:47be  (46 octets) ---- */

void __stdcall16far FUN_10e0_47be(undefined4 param_1,undefined2 param_2,undefined2 param_3)

{
  int iVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  FUN_10e0_4305(iVar1,uVar2);
  FUN_10e0_3a0b(iVar1,uVar2,3);
  *(undefined2 *)(iVar1 + 8) = param_2;
  *(undefined2 *)(iVar1 + 10) = param_3;
  return;
}



/* ---- FUN_10e0_47ec @ 10e0:47ec  (31 octets) ---- */

void __stdcall16far FUN_10e0_47ec(undefined4 param_1,undefined2 param_2,undefined2 param_3)

{
  undefined2 uVar1;
  
  uVar1 = (undefined2)((ulong)param_1 >> 0x10);
  FUN_10e0_47be((int)param_1,uVar1,param_2,param_3);
  *(undefined *)((int)param_1 + 0x18) = 4;
  return;
}



/* ---- FUN_10e0_480b @ 10e0:480b  (31 octets) ---- */

void __stdcall16far FUN_10e0_480b(undefined4 param_1,undefined2 param_2,undefined2 param_3)

{
  undefined2 uVar1;
  
  uVar1 = (undefined2)((ulong)param_1 >> 0x10);
  FUN_10e0_47be((int)param_1,uVar1,param_2,param_3);
  *(undefined *)((int)param_1 + 0x18) = 2;
  return;
}



/* ---- FUN_10e0_4840 @ 10e0:4840  (256 octets) ---- */

undefined4 __stdcall16far FUN_10e0_4840(undefined4 param_1)

{
  char cVar1;
  undefined2 extraout_DX;
  undefined2 extraout_DX_00;
  undefined2 extraout_DX_01;
  int iVar2;
  undefined2 uVar3;
  undefined2 unaff_SS;
  undefined2 local_12;
  undefined2 local_10;
  undefined local_e [8];
  undefined2 local_6;
  undefined2 local_4;
  
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  iVar2 = (int)param_1;
  if (*(char *)(iVar2 + 0x19) == '\0') {
    switch(*(undefined *)(iVar2 + 0x18)) {
    case 1:
      if (*(char *)*(undefined4 *)(iVar2 + 0x14) == '\0') {
        local_6 = 0;
        local_4 = 0;
      }
      else {
        cVar1 = FUN_10e0_4341(iVar2,uVar3,&local_12,unaff_SS,(int)*(undefined4 *)(iVar2 + 0x14),
                              (int)((ulong)*(undefined4 *)(iVar2 + 0x14) >> 0x10));
        if (cVar1 == '\0') {
          cVar1 = FUN_10e0_43b2(iVar2,uVar3,local_e,unaff_SS,(int)*(undefined4 *)(iVar2 + 0x14),
                                (int)((ulong)*(undefined4 *)(iVar2 + 0x14) >> 0x10));
          if (cVar1 == '\0') {
            local_6 = 0;
            local_4 = 0;
          }
          else {
            uVar3 = extraout_DX;
            local_6 = FUN_1158_100e();
            local_4 = uVar3;
          }
        }
        else {
          local_6 = local_12;
          local_4 = local_10;
        }
      }
      break;
    case 2:
    case 3:
    case 4:
      local_6 = *(undefined2 *)(iVar2 + 8);
      local_4 = *(undefined2 *)(iVar2 + 10);
      break;
    default:
      FUN_10e0_42a9(iVar2,uVar3);
      break;
    case 6:
    case 7:
    case 8:
      FUN_10e0_46bc(iVar2,uVar3);
      uVar3 = extraout_DX_00;
      local_6 = FUN_1158_100e();
      local_4 = uVar3;
      break;
    case 9:
    case 10:
    case 0xb:
      FUN_10e0_4bd4(iVar2,uVar3);
      uVar3 = extraout_DX_01;
      local_6 = FUN_1158_100e();
      local_4 = uVar3;
    }
  }
  else {
    local_6 = 0;
    local_4 = 0;
  }
  return CONCAT22(local_4,local_6);
}



/* ---- FUN_10e0_4940 @ 10e0:4940  (48 octets) ---- */

void __stdcall16far FUN_10e0_4940(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  FUN_10e0_4305(iVar1,uVar2);
  FUN_10e0_3a0b(iVar1,uVar2,1);
  FUN_1150_0651((int)param_2,(int)((ulong)param_2 >> 0x10),iVar1 + 0x14,uVar2);
  return;
}



/* ---- FUN_10e0_4988 @ 10e0:4988  (445 octets) ---- */

void __stdcall16far FUN_10e0_4988(undefined4 param_1,undefined *param_2)

{
  char cVar1;
  int iVar2;
  undefined2 uVar3;
  
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  iVar2 = (int)param_1;
  if (*(char *)(iVar2 + 0x19) == '\0') {
    switch(*(undefined *)(iVar2 + 0x18)) {
    case 0:
      FUN_10d8_120a();
      break;
    case 1:
      FUN_1158_17e7();
      break;
    case 2:
    case 3:
    case 4:
      FUN_1150_08a9();
      FUN_1158_17e7();
      break;
    case 5:
      cVar1 = FUN_10e0_443c(iVar2,uVar3);
      if (cVar1 == '\0') {
        FUN_1150_092b();
        FUN_1158_17e7();
      }
      else {
        FUN_1150_092b();
        FUN_1158_17e7();
      }
      break;
    case 6:
    case 7:
    case 8:
      FUN_1150_10a4((longdouble)*(double *)(iVar2 + 8));
      FUN_1158_17e7();
      break;
    case 9:
      FUN_1150_1cbf();
      FUN_1158_17e7();
      break;
    case 10:
      FUN_1150_1ce4();
      FUN_1158_17e7();
      break;
    case 0xb:
      FUN_1150_1d0a();
      FUN_1158_17e7();
      break;
    default:
      FUN_10d8_120a();
    }
  }
  else {
    *param_2 = 0;
  }
  return;
}



/* ---- FUN_10e0_4b45 @ 10e0:4b45  (43 octets) ---- */

void __stdcall16far FUN_10e0_4b45(undefined4 param_1,undefined8 param_2)

{
  int iVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  FUN_10e0_4305(iVar1,uVar2);
  FUN_10e0_3a0b(iVar1,uVar2,9);
  *(undefined8 *)(iVar1 + 8) = param_2;
  return;
}



/* ---- FUN_10e0_4b70 @ 10e0:4b70  (37 octets) ---- */

void __stdcall16far
FUN_10e0_4b70(undefined4 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4,
             undefined2 param_5)

{
  undefined2 uVar1;
  
  uVar1 = (undefined2)((ulong)param_1 >> 0x10);
  FUN_10e0_4b45((int)param_1,uVar1,param_2,param_3,param_4,param_5);
  *(undefined *)((int)param_1 + 0x18) = 10;
  return;
}



/* ---- FUN_10e0_4b95 @ 10e0:4b95  (37 octets) ---- */

void __stdcall16far
FUN_10e0_4b95(undefined4 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4,
             undefined2 param_5)

{
  undefined2 uVar1;
  
  uVar1 = (undefined2)((ulong)param_1 >> 0x10);
  FUN_10e0_4b45((int)param_1,uVar1,param_2,param_3,param_4,param_5);
  *(undefined *)((int)param_1 + 0x18) = 0xb;
  return;
}



/* ---- FUN_10e0_4bd4 @ 10e0:4bd4  (162 octets) ---- */

void __stdcall16far FUN_10e0_4bd4(undefined4 param_1)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 unaff_SS;
  undefined *puVar3;
  undefined local_10a [264];
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  if (*(char *)(iVar1 + 0x19) == '\0') {
    switch(*(undefined *)(iVar1 + 0x18)) {
    case 1:
      puVar3 = local_10a;
      FUN_10e0_4988(iVar1,uVar2);
      FUN_1150_2214(puVar3,unaff_SS);
      break;
    case 2:
    case 3:
    case 4:
      FUN_10e0_4840(iVar1,uVar2);
      break;
    default:
      FUN_10e0_42a9(iVar1,uVar2);
      break;
    case 6:
    case 7:
    case 8:
      FUN_10e0_46bc(iVar1,uVar2);
      break;
    case 9:
    case 10:
    case 0xb:
    }
  }
  return;
}



/* ---- FUN_10e0_4c76 @ 10e0:4c76  (70 octets) ---- */

undefined4 __stdcall16far
FUN_10e0_4c76(undefined4 param_1,char param_2,undefined2 param_3,undefined2 param_4)

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



/* ---- FUN_10e0_4cbc @ 10e0:4cbc  (39 octets) ---- */

void __stdcall16far FUN_10e0_4cbc(undefined4 param_1)

{
  undefined4 uVar1;
  char cVar2;
  undefined2 uVar3;
  
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  uVar1 = *(undefined4 *)((int)param_1 + 0x14);
  cVar2 = FUN_10d8_3202((int)uVar1,(int)((ulong)uVar1 >> 0x10));
  if (cVar2 != '\0') {
    uVar1 = *(undefined4 *)((int)param_1 + 0x14);
    FUN_10e0_52e3((int)uVar1,(int)((ulong)uVar1 >> 0x10));
  }
  return;
}



/* ---- FUN_10e0_4ce3 @ 10e0:4ce3  (47 octets) ---- */

void __stdcall16far FUN_10e0_4ce3(undefined4 param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  char cVar2;
  undefined2 uVar3;
  
  if (param_2 == 0 && param_3 == 0) {
    uVar3 = (undefined2)((ulong)param_1 >> 0x10);
    uVar1 = *(undefined4 *)((int)param_1 + 0x14);
    cVar2 = FUN_10d8_3202((int)uVar1,(int)((ulong)uVar1 >> 0x10));
    if (cVar2 != '\0') {
      uVar1 = *(undefined4 *)((int)param_1 + 0x14);
      FUN_10e0_52e3((int)uVar1,(int)((ulong)uVar1 >> 0x10));
    }
  }
  return;
}



/* ---- FUN_10e0_4d12 @ 10e0:4d12  (39 octets) ---- */

void __stdcall16far FUN_10e0_4d12(undefined4 param_1)

{
  undefined4 uVar1;
  char cVar2;
  undefined2 uVar3;
  
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  uVar1 = *(undefined4 *)((int)param_1 + 0x14);
  cVar2 = FUN_10d8_3202((int)uVar1,(int)((ulong)uVar1 >> 0x10));
  if (cVar2 != '\0') {
    uVar1 = *(undefined4 *)((int)param_1 + 0x14);
    FUN_10d8_4c3d((int)uVar1,(int)((ulong)uVar1 >> 0x10));
  }
  return;
}



/* ---- FUN_10e0_4d39 @ 10e0:4d39  (199 octets) ---- */

undefined4 __stdcall16far
FUN_10e0_4d39(undefined4 param_1,char param_2,undefined2 param_3,undefined2 param_4)

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
  FUN_10d8_2de5(iVar1,uVar3,0,param_3,param_4);
  uVar5 = FUN_1148_1d08(0x3c9,0x1148,CONCAT11(extraout_AH,1));
  *(undefined2 *)(iVar1 + 0x17c) = (int)uVar5;
  *(undefined2 *)(iVar1 + 0x17e) = (int)((ulong)uVar5 >> 0x10);
  uVar4 = (undefined2)((ulong)*(undefined4 *)(iVar1 + 0x17c) >> 0x10);
  iVar2 = (int)*(undefined4 *)(iVar1 + 0x17c);
  *(undefined2 *)(iVar2 + 0xc) = 0x4f9f;
  *(undefined2 *)(iVar2 + 0xe) = (char *)s_iTime_1160_10dc + 4;
  *(int *)(iVar2 + 0x10) = iVar1;
  *(undefined2 *)(iVar2 + 0x12) = uVar3;
  uVar5 = FUN_10e0_31f4(0x375,(char *)s_iTime_1160_10dc + 4,0x4f01);
  *(undefined2 *)(iVar1 + 0x181) = (int)uVar5;
  *(undefined2 *)(iVar1 + 0x183) = (int)((ulong)uVar5 >> 0x10);
  uVar5 = FUN_10e0_4c76(0x15a0,(char *)s_iTime_1160_10dc + 4,1,iVar1,uVar3);
  *(undefined2 *)(iVar1 + 0x189) = (int)uVar5;
  *(undefined2 *)(iVar1 + 0x18b) = (int)((ulong)uVar5 >> 0x10);
  *(undefined2 *)(iVar1 + 0x185) = 0;
  *(undefined2 *)(iVar1 + 0x187) = 0;
  *(undefined *)(iVar1 + 399) = 0;
  if (param_2 != '\0') {
    DAT_1160_1858 = uStack_a;
  }
  return param_1;
}



/* ---- FUN_10e0_4e00 @ 10e0:4e00  (135 octets) ---- */

void __stdcall16far FUN_10e0_4e00(undefined4 *param_1,char param_2)

{
  undefined2 *puVar1;
  undefined4 *puVar2;
  undefined2 uVar3;
  
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  puVar2 = (undefined4 *)param_1;
  FUN_1148_4ea5(puVar2,uVar3);
  puVar1 = (undefined2 *)((int)*param_1 + 0x8c);
  (*(code *)*puVar1)(0x1148,puVar2,uVar3);
  FUN_1158_1f7f((int)puVar2[0x5f],(int)((ulong)puVar2[0x5f] >> 0x10));
  FUN_1150_0f23(*(undefined2 *)((int)puVar2 + 0x185),*(undefined2 *)((int)puVar2 + 0x187));
  FUN_1158_1f7f((int)*(undefined4 *)((int)puVar2 + 0x181),
                (int)((ulong)*(undefined4 *)((int)puVar2 + 0x181) >> 0x10));
  FUN_1158_1f7f((int)*(undefined4 *)((int)puVar2 + 0x189),
                (int)((ulong)*(undefined4 *)((int)puVar2 + 0x189) >> 0x10));
  FUN_1150_0f23(*(undefined2 *)(puVar2 + 100),*(undefined2 *)((int)puVar2 + 0x192));
  FUN_10d8_2e9a(puVar2,uVar3,0);
  if (param_2 != '\0') {
    FUN_1158_200f();
  }
  return;
}



/* ---- FUN_10e0_4e87 @ 10e0:4e87  (27 octets) ---- */

void __stdcall16far FUN_10e0_4e87(undefined4 param_1)

{
  undefined2 uVar1;
  
  uVar1 = (undefined2)((ulong)param_1 >> 0x10);
  FUN_10d8_31d2((int)param_1,uVar1);
  FUN_10e0_4ea2((int)param_1,uVar1);
  return;
}



/* ---- FUN_10e0_4ea2 @ 10e0:4ea2  (36 octets) ---- */

void __stdcall16far FUN_10e0_4ea2(undefined4 *param_1)

{
  undefined2 *puVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  FUN_10e0_5179((undefined4 *)param_1,uVar2,0);
  puVar1 = (undefined2 *)((int)*param_1 + 0x90);
  (*(code *)*puVar1)((char *)s_iTime_1160_10dc + 4,(undefined4 *)param_1,uVar2,0,1);
  return;
}



/* ---- FUN_10e0_4ec6 @ 10e0:4ec6  (56 octets) ---- */

void __stdcall16far FUN_10e0_4ec6(undefined4 param_1,undefined2 param_2,undefined2 param_3)

{
  undefined4 uVar1;
  char cVar2;
  undefined2 uVar3;
  
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  cVar2 = FUN_10d8_3dda((int)param_1,uVar3,param_2,param_3);
  if (cVar2 != '\0') {
    FUN_10d8_11ef(0xf21f);
  }
  uVar1 = *(undefined4 *)((int)param_1 + 0x189);
  FUN_10d8_7731((int)uVar1,(int)((ulong)uVar1 >> 0x10),param_2,param_3);
  return;
}



/* ---- FUN_10e0_4efe @ 10e0:4efe  (36 octets) ---- */

undefined4 __stdcall16far FUN_10e0_4efe(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined2 uVar3;
  
  uVar1 = *(undefined4 *)((int)param_1 + 0x189);
  uVar3 = (undefined2)((ulong)uVar1 >> 0x10);
  iVar2 = (int)uVar1;
  return CONCAT22(*(undefined2 *)(iVar2 + 6),*(undefined2 *)(iVar2 + 4));
}



/* ---- FUN_10e0_4f22 @ 10e0:4f22  (115 octets) ---- */

void __stdcall16far FUN_10e0_4f22(undefined4 *param_1)

{
  undefined2 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  
  uVar4 = (undefined2)((ulong)param_1 >> 0x10);
  puVar2 = (undefined4 *)param_1;
  puVar1 = (undefined2 *)((int)*param_1 + 0x8c);
  (*(code *)*puVar1)();
  uVar5 = (undefined2)((ulong)puVar2[0x5f] >> 0x10);
  iVar3 = (int)puVar2[0x5f];
  *(undefined2 *)(iVar3 + 0xc) = 0;
  *(undefined2 *)(iVar3 + 0xe) = 0;
  *(undefined2 *)(iVar3 + 0x10) = 0;
  *(undefined2 *)(iVar3 + 0x12) = 0;
  puVar1 = (undefined2 *)((int)*(undefined4 *)puVar2[0x5f] + 8);
  (*(code *)*puVar1)();
  uVar5 = (undefined2)((ulong)puVar2[0x5f] >> 0x10);
  iVar3 = (int)puVar2[0x5f];
  *(undefined2 *)(iVar3 + 0xc) = 0x4f9f;
  *(undefined2 *)(iVar3 + 0xe) = (char *)s_iTime_1160_10dc + 4;
  *(undefined2 *)(iVar3 + 0x10) = puVar2;
  *(undefined2 *)(iVar3 + 0x12) = uVar4;
  FUN_10e0_4f9f(puVar2,uVar4,0,0);
  return;
}



/* ---- FUN_10e0_4f9f @ 10e0:4f9f  (227 octets) ---- */

void __stdcall16far FUN_10e0_4f9f(undefined4 *param_1)

{
  undefined2 *puVar1;
  undefined4 *puVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  undefined2 uStack_16;
  undefined *puStack_14;
  char *pcStack_12;
  
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  puVar2 = (undefined4 *)param_1;
  puVar1 = (undefined2 *)((int)*param_1 + 0x8c);
  (*(code *)*puVar1)();
  pcStack_12 = (char *)0x4fc2;
  FUN_1150_0f23();
  puVar1 = (undefined2 *)((int)*(undefined4 *)puVar2[0x5f] + 0x3c);
  pcStack_12 = (char *)0x4fd3;
  uVar4 = (*(code *)*puVar1)();
  *(undefined2 *)((int)puVar2 + 0x185) = (int)uVar4;
  *(undefined2 *)((int)puVar2 + 0x187) = (int)((ulong)uVar4 >> 0x10);
  pcStack_12 = *(char **)(puVar2 + 100);
  puStack_14 = (undefined *)0x1150;
  uStack_16 = 0x4fef;
  FUN_1150_0f23();
  *(undefined2 *)(puVar2 + 100) = 0;
  *(undefined2 *)((int)puVar2 + 0x192) = 0;
  pcStack_12 = (char *)s_iTime_1160_10dc + 4;
  puStack_14 = (undefined *)0x375;
  uStack_16 = 0x1150;
  uVar4 = FUN_10e0_31f4();
  pcStack_12 = (char *)0x4f95;
  uStack_16 = DAT_1160_1858;
  DAT_1160_1858 = &uStack_16;
  puStack_14 = &stack0xfffe;
  FUN_10e0_54df(puVar2,uVar3,*(undefined2 *)((int)puVar2 + 0x185),
                *(undefined2 *)((int)puVar2 + 0x187),uVar4);
  FUN_10e0_334b(uVar4,*(undefined2 *)((int)puVar2 + 0x181),*(undefined2 *)((int)puVar2 + 0x183));
  FUN_1158_1f7f((int)*(undefined4 *)((int)puVar2 + 0x181),
                (int)((ulong)*(undefined4 *)((int)puVar2 + 0x181) >> 0x10));
  *(undefined2 *)((int)puVar2 + 0x181) = (int)uVar4;
  *(undefined2 *)((int)puVar2 + 0x183) = (int)((ulong)uVar4 >> 0x10);
  DAT_1160_1858 = (undefined2 *)uStack_16;
  return;
}



/* ---- FUN_10e0_5091 @ 10e0:5091  (28 octets) ---- */

void __stdcall16far FUN_10e0_5091(undefined4 param_1,undefined2 param_2,undefined2 param_3)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)((int)param_1 + 0x181);
  FUN_10e0_334b((int)uVar1,(int)((ulong)uVar1 >> 0x10),param_2,param_3);
  return;
}



/* ---- FUN_10e0_5107 @ 10e0:5107  (65 octets) ---- */

void __stdcall16far FUN_10e0_5107(undefined4 param_1,undefined4 param_2)

{
  undefined2 uVar1;
  undefined2 uVar2;
  int iVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined4 uVar6;
  
  uVar4 = (undefined2)((ulong)param_2 >> 0x10);
  uVar2 = (undefined2)param_2;
  uVar1 = FUN_1148_23bf(uVar2,uVar4);
  uVar6 = FUN_1150_0e8f(uVar1);
  uVar1 = (undefined2)((ulong)param_1 >> 0x10);
  iVar3 = (int)param_1;
  *(undefined2 *)(iVar3 + 400) = (int)uVar6;
  *(undefined2 *)(iVar3 + 0x192) = (int)((ulong)uVar6 >> 0x10);
  uVar5 = (undefined2)((ulong)*(undefined4 *)(iVar3 + 400) >> 0x10);
  uVar1 = (undefined2)*(undefined4 *)(iVar3 + 400);
  uVar6 = FUN_1148_23bf(uVar2,uVar4);
  FUN_1148_2411(uVar2,uVar4,uVar6,uVar1,uVar5);
  return;
}



/* ---- FUN_10e0_5148 @ 10e0:5148  (49 octets) ---- */

void __stdcall16far FUN_10e0_5148(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  uVar4 = (undefined2)((ulong)*(undefined4 *)(iVar1 + 400) >> 0x10);
  uVar2 = (undefined2)*(undefined4 *)(iVar1 + 400);
  uVar3 = FUN_1150_0ebc(*(undefined2 *)(iVar1 + 400),*(undefined2 *)(iVar1 + 0x192));
  FUN_1148_2466((int)param_2,(int)((ulong)param_2 >> 0x10),uVar3,0,uVar2,uVar4);
  return;
}



/* ---- FUN_10e0_5179 @ 10e0:5179  (120 octets) ---- */

void __stdcall16far FUN_10e0_5179(undefined4 param_1,char param_2)

{
  uint uVar1;
  int iVar2;
  undefined2 uVar3;
  
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  iVar2 = (int)param_1;
  if (*(int *)(iVar2 + 0x34) != 0 || *(int *)(iVar2 + 0x36) != 0) {
    FUN_10d8_11ef(0xf204);
  }
  if (param_2 != *(char *)(iVar2 + 0x180)) {
    if (param_2 == '\0') {
      FUN_10e0_51f1(iVar2,uVar3);
    }
    else {
      uVar1 = FUN_1150_0c8c(*(undefined2 *)(iVar2 + 0x185),*(undefined2 *)(iVar2 + 0x187));
      if (uVar1 < 2) {
        FUN_10d8_11ef(0xf229);
      }
      else {
        FUN_10e0_5b48(iVar2,uVar3,*(undefined2 *)(iVar2 + 0x185),*(undefined2 *)(iVar2 + 0x187));
      }
    }
    *(char *)(iVar2 + 0x180) = param_2;
  }
  return;
}



/* ---- FUN_10e0_51f1 @ 10e0:51f1  (33 octets) ---- */

void __stdcall16far FUN_10e0_51f1(undefined4 param_1)

{
  undefined2 uVar1;
  
  uVar1 = (undefined2)((ulong)param_1 >> 0x10);
  if (*(int *)((int)param_1 + 0x178) != 0 || *(int *)((int)param_1 + 0x17a) != 0) {
    FUN_10e8_06cd();
  }
  return;
}



/* ---- FUN_10e0_5212 @ 10e0:5212  (203 octets) ---- */

void __stdcall16far FUN_10e0_5212(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  undefined2 unaff_SS;
  undefined4 uVar7;
  undefined *puVar8;
  undefined local_112 [256];
  undefined4 local_12;
  int local_e;
  int local_8;
  int local_6;
  int local_4;
  
  uVar5 = (undefined2)((ulong)param_1 >> 0x10);
  iVar2 = (int)param_1;
  uVar6 = (undefined2)((ulong)*(undefined4 *)(iVar2 + 0x189) >> 0x10);
  iVar3 = (int)*(undefined4 *)(iVar2 + 0x189);
  if (*(int *)(iVar3 + 4) != 0 || *(int *)(iVar3 + 6) != 0) {
    uVar7 = *(undefined4 *)((int)*(undefined4 *)(iVar2 + 0x189) + 4);
    uVar6 = (undefined2)((ulong)uVar7 >> 0x10);
    iVar4 = (int)uVar7;
    iVar3 = *(int *)(iVar4 + 0x1a);
    iVar4 = *(int *)(iVar4 + 0x1c);
    _local_8 = CONCAT22(iVar4,iVar3);
    if ((iVar3 != 0 || iVar4 != 0) && (cVar1 = FUN_10d8_3202(iVar3,iVar4), cVar1 != '\0')) {
      local_e = FUN_10e0_34b7((int)*(undefined4 *)(iVar2 + 0x181),
                              (int)((ulong)*(undefined4 *)(iVar2 + 0x181) >> 0x10));
      local_e = local_e + -1;
      if (-1 < local_e) {
        local_4 = 0;
        while( true ) {
          local_12 = FUN_10e0_3500((int)*(undefined4 *)(iVar2 + 0x181),
                                   (int)((ulong)*(undefined4 *)(iVar2 + 0x181) >> 0x10),local_4);
          if (*(char *)((int)local_12 + 0x1a) == '\0') {
            puVar8 = local_112;
            uVar6 = unaff_SS;
            FUN_10e0_3a56(local_12);
            uVar7 = FUN_10d8_3b9b((int)_local_8,(int)((ulong)_local_8 >> 0x10),puVar8,uVar6);
            FUN_10e0_4090((int)local_12,(int)((ulong)local_12 >> 0x10),uVar7);
            *(undefined *)((int)local_12 + 0x1a) = 0;
          }
          if (local_4 == local_e) break;
          local_4 = local_4 + 1;
        }
      }
    }
  }
  return;
}



/* ---- FUN_10e0_52e3 @ 10e0:52e3  (147 octets) ---- */

void __cdecl16far FUN_10e0_52e3(undefined4 param_1)

{
  undefined4 uVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  int iStack_e;
  
  uVar6 = (undefined2)((ulong)param_1 >> 0x10);
  iVar3 = (int)param_1;
  iStack_e = 0x52f1;
  FUN_10d8_4441();
  iStack_e = (int)DAT_1160_1858;
  uVar7 = (undefined2)((ulong)*(undefined4 *)(iVar3 + 0x189) >> 0x10);
  iVar4 = (int)*(undefined4 *)(iVar3 + 0x189);
  if (*(int *)(iVar4 + 4) != 0 || *(int *)(iVar4 + 6) != 0) {
    uVar1 = *(undefined4 *)((int)*(undefined4 *)(iVar3 + 0x189) + 4);
    uVar7 = (undefined2)((ulong)uVar1 >> 0x10);
    iVar5 = (int)uVar1;
    iVar4 = *(int *)(iVar5 + 0x1a);
    iVar5 = *(int *)(iVar5 + 0x1c);
    if (iVar4 != 0 || iVar5 != 0) {
      DAT_1160_1858 = &iStack_e;
      cVar2 = FUN_10d8_3202(iVar4,iVar5);
      if ((cVar2 != '\0') && (*(char *)(iVar4 + 0x3a) != '\x04')) {
        FUN_10d8_31d2(iVar3,uVar6);
        FUN_10d8_31bf(iVar3,uVar6);
      }
    }
  }
  DAT_1160_1858 = (int *)iStack_e;
  iStack_e = iVar3;
  FUN_10d8_4466();
  return;
}



/* ---- FUN_10e0_537a @ 10e0:537a  (51 octets) ---- */

undefined FUN_10e0_537a(int param_1)

{
  char cVar1;
  undefined uVar2;
  undefined2 unaff_SS;
  
  cVar1 = *(char *)(param_1 + -0xb);
  if ((((cVar1 == '\n') || (cVar1 == '\r')) || (cVar1 == ' ')) ||
     (((cVar1 == ')' || (cVar1 == ',')) || (cVar1 == ';')))) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



/* ---- FUN_10e0_53ad @ 10e0:53ad  (35 octets) ---- */

undefined FUN_10e0_53ad(int param_1)

{
  undefined uVar1;
  undefined2 unaff_SS;
  
  if ((*(char *)(param_1 + -0xb) == '\"') || (*(char *)(param_1 + -0xb) == '\'')) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



/* ---- FUN_10e0_53d0 @ 10e0:53d0  (121 octets) ---- */

void FUN_10e0_53d0(int param_1,char param_2)

{
  int iVar1;
  undefined2 unaff_SS;
  
  if (*(char *)*(undefined4 *)(param_1 + -6) == param_2) {
    FUN_1150_0cba(*(int *)(param_1 + -2) + -1,*(int *)(param_1 + -6) + 1,
                  *(undefined2 *)(param_1 + -4),*(undefined2 *)(param_1 + -6),
                  *(undefined2 *)(param_1 + -4));
  }
  iVar1 = FUN_1150_0c8c(*(undefined2 *)(param_1 + -6),*(undefined2 *)(param_1 + -4));
  if (*(char *)((int)*(undefined4 *)(param_1 + -6) + iVar1 + -1) == param_2) {
    iVar1 = FUN_1150_0c8c(*(undefined2 *)(param_1 + -6),*(undefined2 *)(param_1 + -4));
    *(undefined *)((int)*(undefined4 *)(param_1 + -6) + iVar1 + -1) = 0;
  }
  return;
}



/* ---- FUN_10e0_544f @ 10e0:544f  (140 octets) ---- */

void __cdecl16far FUN_10e0_544f(undefined2 param_1,undefined2 param_2,undefined *param_3)

{
  undefined2 unaff_SS;
  undefined *puVar1;
  undefined2 uStack_110;
  undefined local_108 [256];
  undefined4 local_8;
  int local_4;
  
  uStack_110 = 0x545e;
  local_4 = FUN_1150_0c8c();
  local_4 = local_4 + 1;
  local_8 = FUN_1150_0476();
  *param_3 = 0;
  uStack_110 = DAT_1160_1858;
  DAT_1160_1858 = &uStack_110;
  FUN_1150_0cdf(param_1,param_2,local_8);
  FUN_10e0_53d0(&stack0xfffe,0x27);
  FUN_10e0_53d0(&stack0xfffe,0x22);
  puVar1 = local_108;
  FUN_1150_0e6e(local_8);
  FUN_1158_17e7(0xff,(undefined *)param_3,(int)((ulong)param_3 >> 0x10),puVar1,unaff_SS);
  DAT_1160_1858 = (undefined2 *)uStack_110;
  uStack_110 = (undefined2)local_8;
  FUN_1158_019c(local_4);
  return;
}



/* ---- FUN_10e0_54df @ 10e0:54df  (446 octets) ---- */

void __stdcall16far
FUN_10e0_54df(undefined2 param_1_00,undefined2 param_2_00,char *param_1,undefined2 param_2,
             undefined4 param_3)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  int iVar4;
  undefined2 unaff_SS;
  undefined2 uVar5;
  undefined *puVar6;
  undefined2 uVar7;
  undefined local_210 [256];
  undefined local_110 [257];
  char local_f;
  byte local_e;
  char local_d;
  int local_c;
  undefined4 local_a;
  undefined4 local_6;
  
  local_c = FUN_1150_0c8c(param_1,param_2);
  local_c = local_c + 1;
  local_6 = (char *)CONCAT22(param_2,param_1);
  local_e = 0;
  local_f = '\0';
  do {
    local_d = *local_6;
    if (((local_d == ':') && (local_e == 0)) && (((char *)local_6)[1] != ':')) {
      local_a = local_6;
      while ((local_d != '\0' &&
             ((local_e != 0 || (cVar1 = FUN_10e0_537a(&stack0xfffe), cVar1 == '\0'))))) {
        local_6 = (char *)CONCAT22(local_6._2_2_,(char *)local_6 + 1);
        local_d = *local_6;
        cVar1 = FUN_10e0_53ad(&stack0xfffe);
        if (cVar1 != '\0') {
          local_e = local_e ^ 1;
          if ((local_a._2_2_ == local_6._2_2_) && ((char *)local_a + 1 == (char *)local_6)) {
            local_f = '\x01';
          }
        }
      }
      *local_6 = '\0';
      if (local_f == '\0') {
        puVar6 = local_210;
        uVar5 = unaff_SS;
        FUN_1150_0e6e((char *)local_a + 1,local_a._2_2_);
        FUN_1158_17e7(0xff,local_110,unaff_SS,puVar6,uVar5);
      }
      else {
        pcVar2 = (char *)local_a + 1;
        uVar5 = local_a._2_2_;
        FUN_10e0_544f(pcVar2,local_a._2_2_,local_210);
        FUN_1158_17e7(0xff,local_110,unaff_SS,pcVar2,uVar5);
        local_f = '\0';
      }
      FUN_10e0_3463((int)param_3,(int)((ulong)param_3 >> 0x10),0,local_110,unaff_SS,0);
      *local_6 = local_d;
      *local_a = '?';
      pcVar2 = (char *)local_a + 1;
      local_a = (char *)CONCAT22(local_a._2_2_,pcVar2);
      pcVar3 = (char *)local_6;
      uVar5 = local_6._2_2_;
      uVar7 = local_a._2_2_;
      iVar4 = FUN_1150_0c8c((char *)local_6,local_6._2_2_);
      FUN_1150_0cba(iVar4 + 1,pcVar3,uVar5,pcVar2,uVar7);
      local_6 = local_a;
    }
    else if (((local_d == ':') && (local_e == 0)) && (((char *)local_6)[1] == ':')) {
      pcVar3 = (char *)local_6 + 1;
      uVar5 = local_6._2_2_;
      pcVar2 = (char *)local_6;
      uVar7 = local_6._2_2_;
      iVar4 = FUN_1150_0c8c((char *)local_6,local_6._2_2_);
      FUN_1150_0cba(iVar4 + 1,pcVar3,uVar5,pcVar2,uVar7);
    }
    else {
      cVar1 = FUN_10e0_53ad(&stack0xfffe);
      if (cVar1 != '\0') {
        local_e = local_e ^ 1;
      }
    }
    local_6 = (char *)CONCAT22(local_6._2_2_,(char *)local_6 + 1);
  } while (local_d != '\0');
  return;
}



/* ---- FUN_10e0_569d @ 10e0:569d  (105 octets) ---- */

undefined4 __stdcall16far FUN_10e0_569d(undefined4 param_1,undefined param_2)

{
  undefined2 *puVar1;
  int iVar2;
  int iVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined4 uVar6;
  
  uVar4 = (undefined2)((ulong)param_1 >> 0x10);
  iVar3 = (int)param_1;
  puVar1 = (undefined2 *)((int)*(undefined4 *)*(undefined4 *)(iVar3 + 0x17c) + 0x10);
  iVar2 = (*(code *)*puVar1)();
  if (iVar2 < 1) {
    uVar6 = 0;
  }
  else {
    FUN_10e0_5179(iVar3,uVar4,1);
    uVar5 = (undefined2)((ulong)*(undefined4 *)(iVar3 + 0x189) >> 0x10);
    iVar2 = (int)*(undefined4 *)(iVar3 + 0x189);
    if (*(int *)(iVar2 + 4) != 0 || *(int *)(iVar2 + 6) != 0) {
      FUN_10e0_5212(iVar3,uVar4);
    }
    uVar6 = FUN_10e0_5726(iVar3,uVar4,param_2);
  }
  return uVar6;
}



/* ---- FUN_10e0_5706 @ 10e0:5706  (32 octets) ---- */

undefined4 __stdcall16far FUN_10e0_5706(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_10e0_569d((int)param_1,(int)((ulong)param_1 >> 0x10),1);
  return uVar1;
}



/* ---- FUN_10e0_5726 @ 10e0:5726  (108 octets) ---- */

undefined4 __stdcall16far FUN_10e0_5726(undefined4 param_1,char param_2)

{
  int iVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 unaff_SS;
  undefined2 *local_a;
  undefined2 local_6;
  undefined2 local_4;
  
  local_6 = 0;
  local_4 = 0;
  if (param_2 == '\0') {
    local_a = (undefined2 *)0x0;
    unaff_SS = 0;
  }
  else {
    local_a = &local_6;
  }
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  iVar2 = (int)param_1;
  iVar1 = FUN_10e0_34b7((int)*(undefined4 *)(iVar2 + 0x181),
                        (int)((ulong)*(undefined4 *)(iVar2 + 0x181) >> 0x10));
  if (0 < iVar1) {
    FUN_10e0_579e(iVar2,uVar3);
  }
  uVar3 = FUN_10e8_069d((char *)s_iTime_1160_10dc + 4,local_a,unaff_SS,
                        *(undefined2 *)(iVar2 + 0x178),*(undefined2 *)(iVar2 + 0x17a));
  FUN_10d8_124e(uVar3);
  return CONCAT22(local_4,local_6);
}



/* ---- FUN_10e0_579e @ 10e0:579e  (691 octets) ---- */

void __cdecl16far FUN_10e0_579e(undefined4 param_1)

{
  int iVar1;
  undefined2 uVar2;
  int iVar3;
  int *piVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  undefined2 unaff_SS;
  undefined4 uVar8;
  undefined4 uVar9;
  int iVar10;
  char *pcStack_176;
  char *pcStack_174;
  undefined4 uStack_172;
  int *piStack_16e;
  undefined *local_154;
  undefined local_14c [256];
  int *local_4c;
  int local_48;
  int local_46;
  int local_44;
  undefined local_42;
  undefined4 local_22;
  undefined4 local_1a;
  undefined4 local_16;
  undefined4 local_12;
  undefined4 local_e;
  int local_a;
  int local_8;
  int *local_6;
  
  uVar5 = (undefined2)((ulong)param_1 >> 0x10);
  iVar3 = (int)param_1;
  FUN_10e0_34b7();
  local_6 = (int *)FUN_1150_0476();
  local_a = 2;
  local_42 = 0;
  local_46 = 0;
  local_44 = 0;
  local_12 = local_6;
  FUN_10e8_21ad();
  uVar7 = 0x1150;
  piStack_16e = (int *)0x5809;
  iVar1 = FUN_1150_0c8c();
  if (iVar1 != 0) {
    piStack_16e = &local_46;
    uStack_172._2_2_ = 0x1150;
    uVar7 = 0x10e8;
    uStack_172._0_2_ = (char *)0x581c;
    FUN_10e8_13ad();
  }
  piStack_16e = (int *)DAT_1160_1858;
  uStack_172._2_2_ = (int)((ulong)*(undefined4 *)(iVar3 + 0x181) >> 0x10);
  uStack_172._0_2_ = (char *)*(undefined4 *)(iVar3 + 0x181);
  pcStack_176 = (char *)0x5839;
  DAT_1160_1858 = &piStack_16e;
  pcStack_174 = (char *)uVar7;
  local_48 = FUN_10e0_34b7();
  local_48 = local_48 + -1;
  if (-1 < local_48) {
    local_8 = 0;
    while( true ) {
      uStack_172._2_2_ = local_8;
      uStack_172._0_2_ = (char *)((ulong)*(undefined4 *)(iVar3 + 0x181) >> 0x10);
      pcStack_174 = (char *)*(undefined4 *)(iVar3 + 0x181);
      pcStack_176 = (char *)s_iTime_1160_10dc + 4;
      uStack_172 = FUN_10e0_3500();
      pcStack_174 = (char *)s_iTime_1160_10dc + 4;
      pcStack_176 = (char *)0x5869;
      iVar1 = FUN_10e0_3a8b();
      local_a = local_a + iVar1;
      if (local_8 == local_48) break;
      local_8 = local_8 + 1;
    }
  }
  uStack_172._2_2_ = local_a;
  uStack_172._0_2_ = (char *)s_iTime_1160_10dc + 4;
  pcStack_174 = (char *)0x587c;
  local_1a = FUN_1150_0476();
  local_22 = (undefined2 *)
             CONCAT22((int)((ulong)local_1a >> 0x10),(undefined2 *)((int)local_1a + local_a + -2));
  *local_22 = 0xffff;
  uStack_172._2_2_ = 0x1150;
  uStack_172._0_2_ = (char *)0x5792;
  pcStack_176 = (char *)DAT_1160_1858;
  DAT_1160_1858 = (int **)&pcStack_176;
  pcStack_174 = &stack0xfffe;
  local_16 = local_1a;
  local_48 = FUN_10e0_34b7((int)*(undefined4 *)(iVar3 + 0x181),
                           (int)((ulong)*(undefined4 *)(iVar3 + 0x181) >> 0x10));
  local_48 = local_48 + -1;
  if (-1 < local_48) {
    local_8 = 0;
    while( true ) {
      local_e = FUN_10e0_3500((int)*(undefined4 *)(iVar3 + 0x181),
                              (int)((ulong)*(undefined4 *)(iVar3 + 0x181) >> 0x10),local_8);
      local_4c = local_12;
      ((int *)local_12)[0x11] = (uint)*(byte *)(*(char *)((int)local_e + 0x18) + 0xbac);
      if (((int *)local_12)[0x11] == 0) {
        uVar7 = 0xf22a;
        FUN_10e0_3a56(local_e);
        local_154 = local_14c;
        FUN_10d8_120a(0,&local_154,unaff_SS,uVar7);
      }
      *local_4c = local_8 + 1;
      iVar1 = FUN_10e0_3a8b((int)local_e,(int)((ulong)local_e >> 0x10));
      uVar7 = (undefined2)((ulong)local_4c >> 0x10);
      piVar4 = (int *)local_4c;
      piVar4[0x16] = iVar1;
      if (piVar4[0x11] == 1) {
        piVar4[0x13] = piVar4[0x16] + -1;
      }
      piVar4[0x15] = (int)local_1a - (int)local_16;
      uVar6 = (undefined2)((ulong)local_e >> 0x10);
      if (*(char *)((int)local_e + 0x19) != '\0') {
        piVar4[0x17] = (int)(undefined2 *)local_22 - (int)local_16;
      }
      local_4c = (int *)local_e;
      FUN_10e0_3b46((int)local_e,uVar6,local_1a);
      if ((((int *)local_12)[0x11] == 1) && (local_46 != 0 || local_44 != 0)) {
        iVar1 = local_46;
        iVar10 = local_44;
        uVar8 = local_1a;
        uVar9 = local_1a;
        uVar7 = FUN_10e0_3a8b((int)local_4c,(int)((ulong)local_4c >> 0x10));
        FUN_10d8_0f5d(uVar7,uVar8,uVar9,iVar1,iVar10);
      }
      iVar1 = FUN_10e0_3a8b((int)local_4c,(int)((ulong)local_4c >> 0x10));
      local_1a = CONCAT22(local_1a._2_2_,(int)local_1a + iVar1);
      local_12 = (int *)CONCAT22(local_12._2_2_,(int *)local_12 + 0x1a);
      if (local_8 == local_48) break;
      local_8 = local_8 + 1;
    }
  }
  uVar7 = *(undefined2 *)(iVar3 + 0x17a);
  uVar6 = *(undefined2 *)(iVar3 + 0x178);
  uVar2 = FUN_10e0_34b7((int)*(undefined4 *)(iVar3 + 0x181),
                        (int)((ulong)*(undefined4 *)(iVar3 + 0x181) >> 0x10));
  uVar5 = (int)local_16;
  uVar7 = FUN_10e8_06ad((char *)s_iTime_1160_10dc + 4,local_16,local_6,uVar2,uVar6,uVar7);
  FUN_10d8_124e(uVar7);
  DAT_1160_1858 = (int **)uVar5;
  FUN_1158_019c(local_a,local_16);
  return;
}



/* ---- FUN_10e0_5b48 @ 10e0:5b48  (68 octets) ---- */

void __stdcall16far FUN_10e0_5b48(undefined4 param_1,undefined2 param_2,undefined2 param_3)

{
  int iVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  FUN_10e0_5b8c(iVar1,uVar2,param_2,param_3);
  if (*(char *)(iVar1 + 0x18d) == '\0') {
    uVar2 = FUN_10e8_21bd((char *)s_iTime_1160_10dc + 4,(int)*(char *)(iVar1 + 0x18e),
                          (int)*(char *)(iVar1 + 0x18e) >> 0xf,0x10,6,*(undefined2 *)(iVar1 + 0x178)
                          ,*(undefined2 *)(iVar1 + 0x17a));
    FUN_10d8_124e(uVar2);
  }
  return;
}



/* ---- FUN_10e0_5b8c @ 10e0:5b8c  (238 octets) ---- */

void __stdcall16far FUN_10e0_5b8c(undefined4 param_1,undefined2 param_2,undefined2 param_3)

{
  char cVar1;
  undefined2 uVar2;
  int iVar3;
  int iVar4;
  undefined2 uVar5;
  undefined4 uVar6;
  
  uVar5 = (undefined2)((ulong)param_1 >> 0x10);
  iVar3 = (int)param_1;
  if (*(char *)(iVar3 + 0x18d) == '\0') {
    if (*(char *)(iVar3 + 399) == '\0') {
      uVar6 = FUN_10d8_5f2b(iVar3,uVar5);
      uVar5 = FUN_10e8_068d(0x10d8,iVar3 + 0x178,uVar5,param_2,param_3,2,uVar6);
      FUN_10d8_124e(uVar5);
    }
    else {
      uVar6 = FUN_10d8_5f2b(iVar3,uVar5);
      uVar5 = FUN_10e8_24ad(0x10d8,iVar3 + 0x178,uVar5,1,param_2,param_3,2,uVar6);
      FUN_10d8_124e(uVar5);
    }
  }
  else {
    do {
      uVar6 = FUN_10d8_5f2b(iVar3,uVar5);
      uVar2 = FUN_10e8_068d(0x10d8,iVar3 + 0x178,uVar5,param_2,param_3,2,uVar6);
      cVar1 = FUN_10e0_1604(uVar2);
    } while (cVar1 == '\0');
    iVar4 = *(char *)(iVar3 + 399) * 4;
    uVar2 = FUN_10e8_21bd(0x10e8,*(undefined2 *)(iVar4 + 0xbbe),*(undefined2 *)(iVar4 + 0xbc0),0x21,
                          6,*(undefined2 *)(iVar3 + 0x178),*(undefined2 *)(iVar3 + 0x17a));
    FUN_10d8_124e(uVar2);
    uVar5 = FUN_10e8_21bd(0x10d8,0,0,0x26,6,*(undefined2 *)(iVar3 + 0x178),
                          *(undefined2 *)(iVar3 + 0x17a));
    FUN_10d8_124e(uVar5);
  }
  return;
}



/* ---- FUN_10e0_5c7a @ 10e0:5c7a  (91 octets) ---- */

undefined4 __stdcall16far
FUN_10e0_5c7a(undefined4 param_1,char param_2,undefined2 param_3,undefined2 param_4)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uStack_a;
  
  if (param_2 != '\0') {
    FUN_1158_1fe2();
  }
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  FUN_10d8_5fee(iVar1,uVar2,0,param_3,param_4);
  FUN_10d8_6e85(iVar1,uVar2,1);
  FUN_10d8_70c6(iVar1,uVar2,0x14);
  *(undefined *)(iVar1 + 0x60) = 1;
  if (param_2 != '\0') {
    DAT_1160_1858 = uStack_a;
  }
  return param_1;
}



/* ---- FUN_10e0_5e1f @ 10e0:5e1f  (21 octets) ---- */

undefined2 __stdcall16far FUN_10e0_5e1f(undefined4 param_1)

{
  return *(undefined2 *)((int)param_1 + 0x2a);
}



/* ---- FUN_10e0_5ea3 @ 10e0:5ea3  (33 octets) ---- */

void __stdcall16far FUN_10e0_5ea3(undefined4 *param_1)

{
  undefined2 *puVar1;
  
  puVar1 = (undefined2 *)((int)*param_1 + 100);
  (*(code *)*puVar1)();
  return;
}



/* ---- FUN_10e0_5fa0 @ 10e0:5fa0  (104 octets) ---- */

undefined4 __stdcall16far
FUN_10e0_5fa0(undefined4 param_1,char param_2,undefined2 param_3,undefined2 param_4)

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
  FUN_10d8_5fee(iVar2,uVar3,0,param_3,param_4);
  FUN_10d8_6b9a(iVar2,uVar3,1);
  uVar1 = DAT_1160_1718;
  *(undefined2 *)(iVar2 + 0x60) = DAT_1160_1716;
  *(undefined2 *)(iVar2 + 0x62) = uVar1;
  uVar1 = DAT_1160_1718;
  *(undefined2 *)(iVar2 + 100) = DAT_1160_1716;
  *(undefined2 *)(iVar2 + 0x66) = uVar1;
  if (param_2 != '\0') {
    DAT_1160_1858 = uStack_a;
  }
  return param_1;
}



/* ---- FUN_10e0_6008 @ 10e0:6008  (63 octets) ---- */

void __stdcall16far FUN_10e0_6008(undefined4 param_1,char param_2)

{
  int iVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  FUN_1150_0624(*(undefined2 *)(iVar1 + 100),*(undefined2 *)(iVar1 + 0x66));
  FUN_1150_0624(*(undefined2 *)(iVar1 + 0x60),*(undefined2 *)(iVar1 + 0x62));
  FUN_10d8_605e(iVar1,uVar2,0);
  if (param_2 != '\0') {
    FUN_1158_200f();
  }
  return;
}



/* ---- FUN_10e0_6047 @ 10e0:6047  (29 octets) ---- */

void __stdcall16far FUN_10e0_6047(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)((int)param_1 + 0x60);
  FUN_1158_17e7(0xff,(int)param_2,(int)((ulong)param_2 >> 0x10),(int)uVar1,
                (int)((ulong)uVar1 >> 0x10));
  return;
}



/* ---- FUN_10e0_6064 @ 10e0:6064  (29 octets) ---- */

void __stdcall16far FUN_10e0_6064(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)((int)param_1 + 100);
  FUN_1158_17e7(0xff,(int)param_2,(int)((ulong)param_2 >> 0x10),(int)uVar1,
                (int)((ulong)uVar1 >> 0x10));
  return;
}



/* ---- FUN_10e0_6081 @ 10e0:6081  (120 octets) ---- */

void __stdcall16far FUN_10e0_6081(undefined4 param_1)

{
  undefined2 unaff_SS;
  double param_4;
  undefined2 uVar1;
  longdouble *local_40;
  longdouble local_c;
  
  uVar1 = 0xf20e;
  local_c = (longdouble)param_4;
  local_40 = &local_c;
  FUN_10d8_67f6((int)param_1,(int)((ulong)param_1 >> 0x10));
  FUN_10d8_120a(3,&local_40,unaff_SS,uVar1);
  return;
}



/* ---- FUN_10e0_60f9 @ 10e0:60f9  (59 octets) ---- */

void __stdcall16far FUN_10e0_60f9(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined in_ZF;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  uVar3 = (undefined2)((ulong)param_2 >> 0x10);
  FUN_1158_18be((int)param_2,uVar3,(int)*(undefined4 *)(iVar1 + 0x60),
                (int)((ulong)*(undefined4 *)(iVar1 + 0x60) >> 0x10));
  if (!(bool)in_ZF) {
    FUN_1150_0651((int)param_2,uVar3,iVar1 + 0x60,uVar2);
    FUN_10d8_6a7c(iVar1,uVar2,0);
  }
  return;
}



/* ---- FUN_10e0_6134 @ 10e0:6134  (59 octets) ---- */

void __stdcall16far FUN_10e0_6134(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined in_ZF;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  uVar3 = (undefined2)((ulong)param_2 >> 0x10);
  FUN_1158_18be((int)param_2,uVar3,(int)*(undefined4 *)(iVar1 + 100),
                (int)((ulong)*(undefined4 *)(iVar1 + 100) >> 0x10));
  if (!(bool)in_ZF) {
    FUN_1150_0651((int)param_2,uVar3,iVar1 + 100,uVar2);
    FUN_10d8_6a7c(iVar1,uVar2,0);
  }
  return;
}



/* ---- FUN_10e0_616f @ 10e0:616f  (98 octets) ---- */

undefined4 __stdcall16far
FUN_10e0_616f(undefined4 param_1,char param_2,undefined2 param_3,undefined2 param_4)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uStack_a;
  
  if (param_2 != '\0') {
    FUN_1158_1fe2();
  }
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  FUN_10e0_5fa0(iVar1,uVar2,0,param_3,param_4);
  FUN_10d8_6e85(iVar1,uVar2,3);
  *(undefined2 *)(iVar1 + 0x68) = 0;
  *(undefined2 *)(iVar1 + 0x6a) = 0x8000;
  *(undefined2 *)(iVar1 + 0x6c) = 0xffff;
  *(undefined2 *)(iVar1 + 0x6e) = 0x7fff;
  if (param_2 != '\0') {
    DAT_1160_1858 = uStack_a;
  }
  return param_1;
}



/* ---- FUN_10e0_61d1 @ 10e0:61d1  (98 octets) ---- */

void __stdcall16far FUN_10e0_61d1(undefined4 param_1,long param_2,long param_4,long param_6)

{
  if ((param_4._2_2_ <= param_6._2_2_) &&
     (((param_4._2_2_ < param_6._2_2_ || ((uint)param_4 <= (uint)param_6)) &&
      (param_6._2_2_ <= param_2._2_2_)))) {
    if (param_6._2_2_ < param_2._2_2_) {
      return;
    }
    if ((uint)param_6 <= (uint)param_2) {
      return;
    }
  }
  FUN_10e0_6081((int)param_1,(int)((ulong)param_1 >> 0x10),(double)param_2,(double)param_4,
                (double)param_6);
  return;
}



/* ---- FUN_10e0_6233 @ 10e0:6233  (42 octets) ---- */

void __stdcall16far FUN_10e0_6233(undefined4 *param_1)

{
  undefined2 *puVar1;
  
  puVar1 = (undefined2 *)((int)*param_1 + 0x44);
  (*(code *)*puVar1)();
  return;
}



/* ---- FUN_10e0_625d @ 10e0:625d  (41 octets) ---- */

undefined4 __stdcall16far FUN_10e0_625d(undefined4 param_1)

{
  char cVar1;
  undefined2 unaff_SS;
  undefined2 local_6;
  undefined2 local_4;
  
  cVar1 = FUN_10e0_6375((int)param_1,(int)((ulong)param_1 >> 0x10),&local_6,unaff_SS);
  if (cVar1 == '\0') {
    local_6 = 0;
    local_4 = 0;
  }
  return CONCAT22(local_4,local_6);
}



/* ---- FUN_10e0_6286 @ 10e0:6286  (57 octets) ---- */

void __stdcall16far FUN_10e0_6286(undefined4 param_1,undefined *param_2)

{
  char cVar1;
  undefined2 unaff_SS;
  undefined2 local_6;
  undefined2 local_4;
  
  cVar1 = FUN_10e0_6375((int)param_1,(int)((ulong)param_1 >> 0x10),&local_6,unaff_SS);
  if (cVar1 == '\0') {
    *param_2 = 0;
  }
  else {
    FUN_1158_1db0(0xff,(undefined *)param_2,(int)((ulong)param_2 >> 0x10),0,local_6,local_4);
  }
  return;
}



/* ---- FUN_10e0_6375 @ 10e0:6375  (99 octets) ---- */

char __stdcall16far FUN_10e0_6375(undefined4 param_1,int *param_2)

{
  char cVar1;
  char cVar2;
  int *piVar3;
  undefined2 uVar4;
  undefined2 unaff_SS;
  int local_8;
  int local_6;
  
  uVar4 = (undefined2)((ulong)param_1 >> 0x10);
  cVar2 = FUN_10d8_6635((int)param_1,uVar4,&local_8,unaff_SS);
  if (cVar2 != '\0') {
    cVar1 = *(char *)((int)param_1 + 0x22);
    piVar3 = (int *)param_2;
    uVar4 = (undefined2)((ulong)param_2 >> 0x10);
    if (cVar1 == '\x02') {
      *param_2 = local_8;
      piVar3[1] = local_8 >> 0xf;
    }
    else if (cVar1 == '\x04') {
      *param_2 = local_8;
      piVar3[1] = 0;
    }
    else {
      *param_2 = local_8;
      piVar3[1] = local_6;
    }
  }
  return cVar2;
}



/* ---- FUN_10e0_63d8 @ 10e0:63d8  (39 octets) ---- */

undefined __stdcall16far FUN_10e0_63d8(undefined2 param_1_00,undefined2 param_2,byte param_1)

{
  undefined uVar1;
  
  if (((param_1 == 0x2b) || (param_1 == 0x2d)) || ((0x2f < param_1 && (param_1 < 0x3a)))) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



/* ---- FUN_10e0_63ff @ 10e0:63ff  (30 octets) ---- */

void __stdcall16far FUN_10e0_63ff(undefined4 *param_1)

{
  undefined2 *puVar1;
  undefined2 uVar2;
  undefined2 in_DX;
  
  uVar2 = FUN_1158_102f();
  puVar1 = (undefined2 *)((int)*param_1 + 0x60);
  (*(code *)*puVar1)(0x1158,(undefined4 *)param_1,(int)((ulong)param_1 >> 0x10),uVar2,in_DX);
  return;
}



/* ---- FUN_10e0_641d @ 10e0:641d  (111 octets) ---- */

void __stdcall16far FUN_10e0_641d(undefined4 param_1,undefined2 param_2,undefined2 param_3)

{
  int iVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  if ((*(int *)(iVar1 + 0x70) == 0 && *(int *)(iVar1 + 0x72) == 0) &&
     (*(int *)(iVar1 + 0x74) == 0 && *(int *)(iVar1 + 0x76) == 0)) {
    FUN_10e0_61d1(iVar1,uVar2,*(undefined2 *)(iVar1 + 0x6c),*(undefined2 *)(iVar1 + 0x6e),
                  *(undefined2 *)(iVar1 + 0x68),*(undefined2 *)(iVar1 + 0x6a),param_2,param_3);
  }
  else {
    FUN_10e0_61d1(iVar1,uVar2,*(undefined2 *)(iVar1 + 0x74),*(undefined2 *)(iVar1 + 0x76),
                  *(undefined2 *)(iVar1 + 0x70),*(undefined2 *)(iVar1 + 0x72),param_2,param_3);
  }
  FUN_10d8_6bde(iVar1,uVar2,&param_2);
  return;
}



/* ---- FUN_10e0_648c @ 10e0:648c  (136 octets) ---- */

void __stdcall16far FUN_10e0_648c(undefined4 *param_1,char *param_2)

{
  undefined2 *puVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined2 unaff_SS;
  undefined2 uVar5;
  char *local_18;
  undefined2 local_16;
  undefined local_14;
  undefined4 local_10;
  undefined local_c;
  undefined4 local_8;
  int local_4;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  if (*param_2 == '\0') {
    puVar1 = (undefined2 *)((int)*param_1 + 0x6c);
    (*(code *)*puVar1)();
  }
  else {
    uVar3 = (undefined2)((ulong)param_2 >> 0x10);
    uVar4 = 0x1158;
    local_8 = FUN_1158_1dfb(&local_4,unaff_SS,(char *)param_2,uVar3);
    if (local_4 != 0) {
      uVar5 = 0xf20f;
      local_14 = 4;
      local_18 = (char *)param_2;
      local_16 = uVar3;
      local_10 = FUN_10d8_67f6((undefined4 *)param_1,uVar2);
      local_c = 4;
      uVar4 = 0x10d8;
      FUN_10d8_120a(1,&local_18,unaff_SS,uVar5);
    }
    puVar1 = (undefined2 *)((int)*param_1 + 0x60);
    (*(code *)*puVar1)(uVar4,(undefined4 *)param_1,uVar2,local_8);
  }
  return;
}



/* ---- FUN_10e0_6514 @ 10e0:6514  (56 octets) ---- */

void __stdcall16far FUN_10e0_6514(undefined4 param_1,undefined2 param_2,undefined2 param_3)

{
  int iVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  FUN_10e0_61d1(iVar1,uVar2,*(undefined2 *)(iVar1 + 0x6c),*(undefined2 *)(iVar1 + 0x6e),
                *(undefined2 *)(iVar1 + 0x68),*(undefined2 *)(iVar1 + 0x6a),param_2,param_3);
  *(undefined2 *)(iVar1 + 0x74) = param_2;
  *(undefined2 *)(iVar1 + 0x76) = param_3;
  return;
}



/* ---- FUN_10e0_654c @ 10e0:654c  (56 octets) ---- */

void __stdcall16far FUN_10e0_654c(undefined4 param_1,undefined2 param_2,undefined2 param_3)

{
  int iVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  FUN_10e0_61d1(iVar1,uVar2,*(undefined2 *)(iVar1 + 0x6c),*(undefined2 *)(iVar1 + 0x6e),
                *(undefined2 *)(iVar1 + 0x68),*(undefined2 *)(iVar1 + 0x6a),param_2,param_3);
  *(undefined2 *)(iVar1 + 0x70) = param_2;
  *(undefined2 *)(iVar1 + 0x72) = param_3;
  return;
}



/* ---- FUN_10e0_6584 @ 10e0:6584  (98 octets) ---- */

undefined4 __stdcall16far
FUN_10e0_6584(undefined4 param_1,char param_2,undefined2 param_3,undefined2 param_4)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uStack_a;
  
  if (param_2 != '\0') {
    FUN_1158_1fe2();
  }
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  FUN_10e0_616f(iVar1,uVar2,0,param_3,param_4);
  FUN_10d8_6e85(iVar1,uVar2,2);
  *(undefined2 *)(iVar1 + 0x68) = 0x8000;
  *(undefined2 *)(iVar1 + 0x6a) = 0xffff;
  *(undefined2 *)(iVar1 + 0x6c) = 0x7fff;
  *(undefined2 *)(iVar1 + 0x6e) = 0;
  if (param_2 != '\0') {
    DAT_1160_1858 = uStack_a;
  }
  return param_1;
}



/* ---- FUN_10e0_65e6 @ 10e0:65e6  (96 octets) ---- */

undefined4 __stdcall16far
FUN_10e0_65e6(undefined4 param_1,char param_2,undefined2 param_3,undefined2 param_4)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uStack_a;
  
  if (param_2 != '\0') {
    FUN_1158_1fe2();
  }
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  FUN_10e0_616f(iVar1,uVar2,0,param_3,param_4);
  FUN_10d8_6e85(iVar1,uVar2,4);
  *(undefined2 *)(iVar1 + 0x68) = 0;
  *(undefined2 *)(iVar1 + 0x6a) = 0;
  *(undefined2 *)(iVar1 + 0x6c) = 0xffff;
  *(undefined2 *)(iVar1 + 0x6e) = 0;
  if (param_2 != '\0') {
    DAT_1160_1858 = uStack_a;
  }
  return param_1;
}



/* ---- FUN_10e0_6646 @ 10e0:6646  (80 octets) ---- */

undefined4 __stdcall16far
FUN_10e0_6646(undefined4 param_1,char param_2,undefined2 param_3,undefined2 param_4)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uStack_a;
  
  if (param_2 != '\0') {
    FUN_1158_1fe2();
  }
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  FUN_10e0_5fa0(iVar1,uVar2,0,param_3,param_4);
  FUN_10d8_6e85(iVar1,uVar2,6);
  *(undefined2 *)(iVar1 + 0x6a) = 0xf;
  if (param_2 != '\0') {
    DAT_1160_1858 = uStack_a;
  }
  return param_1;
}



/* ---- FUN_10e0_66c7 @ 10e0:66c7  (37 octets) ---- */

undefined4 __stdcall16far FUN_10e0_66c7(undefined4 *param_1)

{
  undefined2 *puVar1;
  undefined2 extraout_DX;
  undefined2 uVar2;
  undefined4 *puVar3;
  undefined2 uVar4;
  
  uVar4 = (undefined2)((ulong)param_1 >> 0x10);
  puVar3 = (undefined4 *)param_1;
  puVar1 = (undefined2 *)((int)*param_1 + 0x40);
  (*(code *)*puVar1)();
  uVar2 = extraout_DX;
  uVar4 = FUN_1158_102f(puVar3,uVar4);
  return CONCAT22(uVar2,uVar4);
}



/* ---- FUN_10e0_69a0 @ 10e0:69a0  (34 octets) ---- */

void __stdcall16far FUN_10e0_69a0(undefined4 *param_1)

{
  undefined2 *puVar1;
  
  puVar1 = (undefined2 *)((int)*param_1 + 0x5c);
  (*(code *)*puVar1)();
  return;
}



/* ---- FUN_10e0_6a59 @ 10e0:6a59  (35 octets) ---- */

void __stdcall16far FUN_10e0_6a59(undefined4 param_1,char param_2)

{
  int iVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  if (*(char *)(iVar1 + 0x68) != param_2) {
    *(char *)(iVar1 + 0x68) = param_2;
    FUN_10d8_6a7c(iVar1,uVar2,0);
  }
  return;
}



/* ---- FUN_10e0_6a7c @ 10e0:6a7c  (28 octets) ---- */

void __stdcall16far FUN_10e0_6a7c(undefined4 param_1,undefined8 param_2)

{
  undefined2 uVar1;
  
  uVar1 = (undefined2)((ulong)param_1 >> 0x10);
  *(undefined8 *)((int)param_1 + 0x74) = param_2;
  FUN_10e0_6af1((int)param_1,uVar1);
  return;
}



/* ---- FUN_10e0_6a98 @ 10e0:6a98  (28 octets) ---- */

void __stdcall16far FUN_10e0_6a98(undefined4 param_1,undefined8 param_2)

{
  undefined2 uVar1;
  
  uVar1 = (undefined2)((ulong)param_1 >> 0x10);
  *(undefined8 *)((int)param_1 + 0x6c) = param_2;
  FUN_10e0_6af1((int)param_1,uVar1);
  return;
}



/* ---- FUN_10e0_6ab4 @ 10e0:6ab4  (57 octets) ---- */

void __stdcall16far FUN_10e0_6ab4(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined2 uVar2;
  
  if (param_2 < 2) {
    param_2 = 2;
  }
  if (0xf < param_2) {
    param_2 = 0xf;
  }
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  if (*(int *)(iVar1 + 0x6a) != param_2) {
    *(int *)(iVar1 + 0x6a) = param_2;
    FUN_10d8_6a7c(iVar1,uVar2,0);
  }
  return;
}



/* ---- FUN_10e0_6af1 @ 10e0:6af1  (70 octets) ---- */

void __stdcall16far FUN_10e0_6af1(undefined4 param_1)

{
  undefined uVar1;
  int iVar2;
  undefined2 uVar3;
  
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  iVar2 = (int)param_1;
  if (*(double *)(iVar2 + 0x6c) == 0.0) {
    if (*(double *)(iVar2 + 0x74) == 0.0) {
      uVar1 = 0;
      goto LAB_10e0_6b2c;
    }
  }
  uVar1 = 1;
LAB_10e0_6b2c:
  *(undefined *)(iVar2 + 0x69) = uVar1;
  return;
}



/* ---- FUN_10e0_6b37 @ 10e0:6b37  (79 octets) ---- */

undefined4 __stdcall16far
FUN_10e0_6b37(undefined4 param_1,char param_2,undefined2 param_3,undefined2 param_4)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uStack_a;
  
  if (param_2 != '\0') {
    FUN_1158_1fe2();
  }
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  FUN_10e0_6646(iVar1,uVar2,0,param_3,param_4);
  FUN_10d8_6e85(iVar1,uVar2,7);
  *(undefined *)(iVar1 + 0x68) = 1;
  if (param_2 != '\0') {
    DAT_1160_1858 = uStack_a;
  }
  return param_1;
}



/* ---- FUN_10e0_6b86 @ 10e0:6b86  (83 octets) ---- */

undefined4 __stdcall16far
FUN_10e0_6b86(undefined4 param_1,char param_2,undefined2 param_3,undefined2 param_4)

{
  undefined2 uVar1;
  undefined2 uVar2;
  undefined2 uStack_a;
  
  if (param_2 != '\0') {
    FUN_1158_1fe2();
  }
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  uVar1 = (undefined2)param_1;
  FUN_10e0_6646(uVar1,uVar2,0,param_3,param_4);
  FUN_10d8_6e85(uVar1,uVar2,8);
  FUN_10d8_70c6(uVar1,uVar2,4);
  if (param_2 != '\0') {
    DAT_1160_1858 = uStack_a;
  }
  return param_1;
}



/* ---- FUN_10e0_6bd9 @ 10e0:6bd9  (96 octets) ---- */

undefined4 __stdcall16far
FUN_10e0_6bd9(undefined4 param_1,char param_2,undefined2 param_3,undefined2 param_4)

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
  FUN_10d8_5fee(iVar2,uVar3,0,param_3,param_4);
  FUN_10d8_6e85(iVar2,uVar3,5);
  uVar1 = DAT_1160_1718;
  *(undefined2 *)(iVar2 + 0x60) = DAT_1160_1716;
  *(undefined2 *)(iVar2 + 0x62) = uVar1;
  FUN_10e0_6d2d(iVar2,uVar3);
  if (param_2 != '\0') {
    DAT_1160_1858 = uStack_a;
  }
  return param_1;
}



/* ---- FUN_10e0_6c39 @ 10e0:6c39  (47 octets) ---- */

void __stdcall16far FUN_10e0_6c39(undefined4 param_1,char param_2)

{
  int iVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  FUN_1150_0624(*(undefined2 *)(iVar1 + 0x60),*(undefined2 *)(iVar1 + 0x62));
  FUN_10d8_605e(iVar1,uVar2,0);
  if (param_2 != '\0') {
    FUN_1158_200f();
  }
  return;
}



/* ---- FUN_10e0_6c68 @ 10e0:6c68  (48 octets) ---- */

undefined2 __stdcall16far FUN_10e0_6c68(undefined4 param_1)

{
  char extraout_AL;
  undefined extraout_AH;
  undefined uVar1;
  undefined2 unaff_SS;
  int local_6;
  bool local_3;
  
  FUN_10d8_6635((int)param_1,(int)((ulong)param_1 >> 0x10),&local_6,unaff_SS);
  uVar1 = extraout_AH;
  if (extraout_AL != '\0') {
    uVar1 = (undefined)((uint)-local_6 >> 8);
  }
  local_3 = extraout_AL != '\0' && local_6 != 0;
  return CONCAT11(uVar1,local_3);
}



/* ---- FUN_10e0_6c98 @ 10e0:6c98  (73 octets) ---- */

void __stdcall16far FUN_10e0_6c98(undefined4 param_1,undefined *param_2)

{
  char cVar1;
  undefined2 uVar2;
  undefined2 unaff_SS;
  int local_4;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  cVar1 = FUN_10d8_6635((int)param_1,uVar2,&local_4,unaff_SS);
  if (cVar1 == '\0') {
    *param_2 = 0;
  }
  else {
    FUN_1158_17e7(0xff,(undefined *)param_2,(int)((ulong)param_2 >> 0x10),
                  (int)param_1 + (local_4 != 0) * 0x10 + 100,uVar2);
  }
  return;
}



/* ---- FUN_10e0_6ce1 @ 10e0:6ce1  (47 octets) ---- */

undefined __stdcall16far FUN_10e0_6ce1(undefined4 param_1)

{
  undefined uVar1;
  int iVar2;
  undefined2 uVar3;
  
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  iVar2 = (int)param_1;
  if (*(byte *)(iVar2 + 0x74) < *(byte *)(iVar2 + 100)) {
    uVar1 = *(undefined *)(iVar2 + 100);
  }
  else {
    uVar1 = *(undefined *)(iVar2 + 0x74);
  }
  return uVar1;
}



/* ---- FUN_10e0_6d10 @ 10e0:6d10  (29 octets) ---- */

void __stdcall16far FUN_10e0_6d10(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)((int)param_1 + 0x60);
  FUN_1158_17e7(0xff,(int)param_2,(int)((ulong)param_2 >> 0x10),(int)uVar1,
                (int)((ulong)uVar1 >> 0x10));
  return;
}



/* ---- FUN_10e0_6d2d @ 10e0:6d2d  (68 octets) ---- */

void __stdcall16far FUN_10e0_6d2d(undefined4 param_1)

{
  undefined2 uVar1;
  undefined2 unaff_SS;
  undefined *puVar2;
  undefined2 uVar3;
  undefined local_102 [256];
  
  puVar2 = local_102;
  uVar3 = unaff_SS;
  FUN_1150_092b(0xf226);
  uVar1 = (undefined2)((ulong)param_1 >> 0x10);
  FUN_1158_17e7(0xf,(int)param_1 + 100,uVar1,puVar2,uVar3);
  puVar2 = local_102;
  FUN_1150_092b(0xf227);
  FUN_1158_17e7(0xf,(int)param_1 + 0x74,uVar1,puVar2,unaff_SS);
  return;
}



/* ---- FUN_10e0_6d71 @ 10e0:6d71  (30 octets) ---- */

void __stdcall16far FUN_10e0_6d71(undefined4 param_1,char param_2)

{
  int local_4;
  
  local_4 = (int)param_2;
  FUN_10d8_6bde((int)param_1,(int)((ulong)param_1 >> 0x10),&local_4);
  return;
}



/* ---- FUN_10e0_6f58 @ 10e0:6f58  (89 octets) ---- */

undefined4 __stdcall16far
FUN_10e0_6f58(undefined4 param_1,char param_2,undefined2 param_3,undefined2 param_4)

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
  FUN_10d8_5fee(iVar2,uVar3,0,param_3,param_4);
  FUN_10d8_6e85(iVar2,uVar3,0xb);
  uVar1 = DAT_1160_1718;
  *(undefined2 *)(iVar2 + 0x60) = DAT_1160_1716;
  *(undefined2 *)(iVar2 + 0x62) = uVar1;
  if (param_2 != '\0') {
    DAT_1160_1858 = uStack_a;
  }
  return param_1;
}



/* ---- FUN_10e0_6fb1 @ 10e0:6fb1  (47 octets) ---- */

void __stdcall16far FUN_10e0_6fb1(undefined4 param_1,char param_2)

{
  int iVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  FUN_1150_0624(*(undefined2 *)(iVar1 + 0x60),*(undefined2 *)(iVar1 + 0x62));
  FUN_10d8_605e(iVar1,uVar2,0);
  if (param_2 != '\0') {
    FUN_1158_200f();
  }
  return;
}



/* ---- FUN_10e0_7011 @ 10e0:7011  (32 octets) ---- */

void __stdcall16far FUN_10e0_7011(undefined4 *param_1)

{
  undefined2 *puVar1;
  
  puVar1 = (undefined2 *)((int)*param_1 + 0x3c);
  (*(code *)*puVar1)();
  return;
}



/* ---- FUN_10e0_7031 @ 10e0:7031  (29 octets) ---- */

void __stdcall16far FUN_10e0_7031(undefined4 *param_1)

{
  undefined2 *puVar1;
  
  puVar1 = (undefined2 *)((int)*param_1 + 0x50);
  (*(code *)*puVar1)();
  return;
}



/* ---- FUN_10e0_704e @ 10e0:704e  (29 octets) ---- */

void __stdcall16far FUN_10e0_704e(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)((int)param_1 + 0x60);
  FUN_1158_17e7(0xff,(int)param_2,(int)((ulong)param_2 >> 0x10),(int)uVar1,
                (int)((ulong)uVar1 >> 0x10));
  return;
}



/* ---- FUN_10e0_706b @ 10e0:706b  (158 octets) ---- */

void __stdcall16far
FUN_10e0_706b(undefined4 param_1,char param_2,undefined2 param_3,undefined *param_4)

{
  char cVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 unaff_SS;
  undefined2 local_e;
  undefined2 local_c;
  undefined2 local_a;
  undefined2 local_8;
  undefined2 local_6;
  undefined2 local_4;
  
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  iVar2 = (int)param_1;
  cVar1 = FUN_10e0_710d(iVar2,uVar3,&local_e,unaff_SS);
  if (cVar1 == '\0') {
    *param_4 = 0;
  }
  else {
    if ((param_2 == '\0') || (*(char *)*(undefined4 *)(iVar2 + 0x60) == '\0')) {
      if (*(char *)(iVar2 + 0x22) == '\t') {
        local_6 = 0x2c66;
        local_4 = 0x1160;
      }
      else if (*(char *)(iVar2 + 0x22) == '\n') {
        local_6 = 0x2cb8;
        local_4 = 0x1160;
      }
      else {
        local_6 = DAT_1160_1716;
        local_4 = DAT_1160_1718;
      }
    }
    else {
      local_6 = *(undefined2 *)(iVar2 + 0x60);
      local_4 = *(undefined2 *)(iVar2 + 0x62);
    }
    FUN_1150_1c9c(local_e,local_c,local_a,local_8,local_6,local_4,param_3,(undefined *)param_4,
                  (int)((ulong)param_4 >> 0x10));
  }
  return;
}



/* ---- FUN_10e0_710d @ 10e0:710d  (115 octets) ---- */

char __stdcall16far FUN_10e0_710d(undefined4 param_1,double *param_2)

{
  char cVar1;
  undefined2 uVar2;
  undefined2 unaff_SS;
  longdouble lVar3;
  long local_c [2];
  char local_3;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  local_3 = FUN_10d8_6635((int)param_1,uVar2,local_c,unaff_SS);
  if (local_3 != '\0') {
    cVar1 = *(char *)((int)param_1 + 0x22);
    if (cVar1 == '\t') {
      *param_2 = (double)local_c[0];
    }
    else if (cVar1 == '\n') {
      lVar3 = (longdouble)8.64e+07;
      FUN_1158_04b2();
      *param_2 = (double)lVar3;
    }
    else {
      lVar3 = (longdouble)8.64e+07;
      FUN_1158_04b2();
      *param_2 = (double)lVar3;
    }
  }
  return local_3;
}



/* ---- FUN_10e0_71e7 @ 10e0:71e7  (31 octets) ---- */

void __stdcall16far FUN_10e0_71e7(undefined4 *param_1)

{
  undefined2 *puVar1;
  
  puVar1 = (undefined2 *)((int)*param_1 + 0x58);
  (*(code *)*puVar1)();
  return;
}



/* ---- FUN_10e0_7206 @ 10e0:7206  (122 octets) ---- */

void __stdcall16far FUN_10e0_7206(undefined4 *param_1,char *param_2)

{
  char cVar1;
  undefined2 *puVar2;
  char *pcVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  longdouble in_ST0;
  undefined8 local_a;
  
  uVar4 = (undefined2)((ulong)param_1 >> 0x10);
  if (*param_2 == '\0') {
    puVar2 = (undefined2 *)((int)*param_1 + 0x6c);
    (*(code *)*puVar2)();
  }
  else {
    cVar1 = *(char *)((int)(undefined4 *)param_1 + 0x22);
    pcVar3 = (char *)param_2;
    uVar5 = (undefined2)((ulong)param_2 >> 0x10);
    if (cVar1 == '\t') {
      FUN_1150_2154(pcVar3,uVar5);
      local_a = (double)in_ST0;
    }
    else if (cVar1 == '\n') {
      FUN_1150_21b2(pcVar3,uVar5);
      local_a = (double)in_ST0;
    }
    else {
      FUN_1150_2214(pcVar3,uVar5);
      local_a = (double)in_ST0;
    }
    puVar2 = (undefined2 *)((int)*param_1 + 0x58);
    (*(code *)*puVar2)(0x1150,(undefined4 *)param_1,uVar4,(undefined2)local_a,local_a._2_2_,
                       local_a._4_2_,local_a._6_2_);
  }
  return;
}



/* ---- FUN_10e0_7280 @ 10e0:7280  (59 octets) ---- */

void __stdcall16far FUN_10e0_7280(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined in_ZF;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  uVar3 = (undefined2)((ulong)param_2 >> 0x10);
  FUN_1158_18be((int)param_2,uVar3,(int)*(undefined4 *)(iVar1 + 0x60),
                (int)((ulong)*(undefined4 *)(iVar1 + 0x60) >> 0x10));
  if (!(bool)in_ZF) {
    FUN_1150_0651((int)param_2,uVar3,iVar1 + 0x60,uVar2);
    FUN_10d8_6a7c(iVar1,uVar2,0);
  }
  return;
}



/* ---- FUN_10e0_72bb @ 10e0:72bb  (71 octets) ---- */

undefined4 __stdcall16far
FUN_10e0_72bb(undefined4 param_1,char param_2,undefined2 param_3,undefined2 param_4)

{
  undefined2 uVar1;
  undefined2 uStack_a;
  
  if (param_2 != '\0') {
    FUN_1158_1fe2();
  }
  uVar1 = (undefined2)((ulong)param_1 >> 0x10);
  FUN_10e0_6f58((int)param_1,uVar1,0,param_3,param_4);
  FUN_10d8_6e85((int)param_1,uVar1,9);
  if (param_2 != '\0') {
    DAT_1160_1858 = uStack_a;
  }
  return param_1;
}



/* ---- FUN_10e0_7302 @ 10e0:7302  (71 octets) ---- */

undefined4 __stdcall16far
FUN_10e0_7302(undefined4 param_1,char param_2,undefined2 param_3,undefined2 param_4)

{
  undefined2 uVar1;
  undefined2 uStack_a;
  
  if (param_2 != '\0') {
    FUN_1158_1fe2();
  }
  uVar1 = (undefined2)((ulong)param_1 >> 0x10);
  FUN_10e0_6f58((int)param_1,uVar1,0,param_3,param_4);
  FUN_10d8_6e85((int)param_1,uVar1,10);
  if (param_2 != '\0') {
    DAT_1160_1858 = uStack_a;
  }
  return param_1;
}



/* ---- FUN_10e0_7349 @ 10e0:7349  (71 octets) ---- */

undefined4 __stdcall16far
FUN_10e0_7349(undefined4 param_1,char param_2,undefined2 param_3,undefined2 param_4)

{
  undefined2 uVar1;
  undefined2 uStack_a;
  
  if (param_2 != '\0') {
    FUN_1158_1fe2();
  }
  uVar1 = (undefined2)((ulong)param_1 >> 0x10);
  FUN_10d8_5fee((int)param_1,uVar1,0,param_3,param_4);
  FUN_10d8_6e85((int)param_1,uVar1,0xc);
  if (param_2 != '\0') {
    DAT_1160_1858 = uStack_a;
  }
  return param_1;
}



/* ---- FUN_10e0_7390 @ 10e0:7390  (71 octets) ---- */

undefined4 __stdcall16far
FUN_10e0_7390(undefined4 param_1,char param_2,undefined2 param_3,undefined2 param_4)

{
  undefined2 uVar1;
  undefined2 uStack_a;
  
  if (param_2 != '\0') {
    FUN_1158_1fe2();
  }
  uVar1 = (undefined2)((ulong)param_1 >> 0x10);
  FUN_10d8_5fee((int)param_1,uVar1,0,param_3,param_4);
  FUN_10d8_6e85((int)param_1,uVar1,0xd);
  if (param_2 != '\0') {
    DAT_1160_1858 = uStack_a;
  }
  return param_1;
}



/* ---- FUN_10e0_73d7 @ 10e0:73d7  (71 octets) ---- */

undefined4 __stdcall16far
FUN_10e0_73d7(undefined4 param_1,char param_2,undefined2 param_3,undefined2 param_4)

{
  undefined2 uVar1;
  undefined2 uStack_a;
  
  if (param_2 != '\0') {
    FUN_1158_1fe2();
  }
  uVar1 = (undefined2)((ulong)param_1 >> 0x10);
  FUN_10d8_5fee((int)param_1,uVar1,0,param_3,param_4);
  FUN_10d8_6e85((int)param_1,uVar1,0xe);
  if (param_2 != '\0') {
    DAT_1160_1858 = uStack_a;
  }
  return param_1;
}



/* ---- FUN_10e0_741e @ 10e0:741e  (222 octets) ---- */

void __stdcall16far FUN_10e0_741e(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  
  cVar1 = FUN_1158_2255(0x1281,(char *)s_iTime_1160_10dc + 4,(int)param_2,param_2._2_2_);
  uVar2 = (undefined2)param_1;
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  if (cVar1 == '\0') {
    cVar1 = FUN_1158_2255(0x32a,0x1148,(int)param_2,param_2._2_2_);
    if (cVar1 == '\0') {
      cVar1 = FUN_1158_2255(0x83f,0x1128,(int)param_2,param_2._2_2_);
      if (cVar1 == '\0') {
        cVar1 = FUN_1158_2255(0x6c6,0x1128,(int)param_2,param_2._2_2_);
        if ((cVar1 != '\0') &&
           (cVar1 = FUN_1158_2255(0x83f,0x1128,*(undefined2 *)((int)param_2 + 4),
                                  *(undefined2 *)((int)param_2 + 6)), cVar1 != '\0')) {
          FUN_10e0_7605(uVar2,uVar3,*(undefined2 *)((int)param_2 + 4),
                        *(undefined2 *)((int)param_2 + 6));
          return;
        }
        FUN_10d8_611d(uVar2,uVar3,(int)param_2,param_2._2_2_);
      }
      else {
        FUN_10e0_7605(uVar2,uVar3,(int)param_2,param_2._2_2_);
      }
    }
    else {
      FUN_10e0_7747(uVar2,uVar3,(int)param_2,param_2._2_2_);
    }
  }
  else {
    FUN_10e0_76e6(uVar2,uVar3,(int)param_2,param_2._2_2_);
  }
  return;
}



/* ---- FUN_10e0_74fc @ 10e0:74fc  (152 octets) ---- */

void __stdcall16far FUN_10e0_74fc(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  
  cVar1 = FUN_1158_2255(0x32a,0x1148,(undefined2)param_2,param_2._2_2_);
  uVar2 = (undefined2)param_1;
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  if (cVar1 == '\0') {
    cVar1 = FUN_1158_2255(0x83f,0x1128,(undefined2)param_2,param_2._2_2_);
    if (cVar1 == '\0') {
      cVar1 = FUN_1158_2255(0x6c6,0x1128,(undefined2)param_2,param_2._2_2_);
      if (cVar1 == '\0') {
        FUN_1148_11cd(uVar2,uVar3,(undefined2)param_2,param_2._2_2_);
      }
      else {
        uVar4 = FUN_1128_42be((undefined2)param_2,param_2._2_2_);
        FUN_10e0_77aa(uVar2,uVar3,uVar4);
      }
    }
    else {
      FUN_10e0_77aa(uVar2,uVar3,(undefined2)param_2,param_2._2_2_);
    }
  }
  else {
    FUN_10e0_78d5(uVar2,uVar3,(undefined2)param_2,param_2._2_2_);
  }
  return;
}



/* ---- FUN_10e0_7594 @ 10e0:7594  (42 octets) ---- */

void __stdcall16far FUN_10e0_7594(undefined2 param_1,undefined2 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_10e0_79c8(0x14e4,(char *)s_iTime_1160_10dc + 4,1,1,param_1,param_2);
  FUN_1158_1f7f(uVar1);
  return;
}



/* ---- FUN_10e0_75be @ 10e0:75be  (65 octets) ---- */

void __stdcall16far FUN_10e0_75be(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined4 uVar5;
  undefined2 uVar6;
  
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  if (*(char *)(iVar1 + 0x60) != '\0') {
    uVar4 = (undefined2)((ulong)*(undefined4 *)(iVar1 + 0x1a) >> 0x10);
    iVar2 = (int)*(undefined4 *)(iVar1 + 0x1a);
    uVar6 = *(undefined2 *)(iVar2 + 0x36);
    uVar4 = *(undefined2 *)(iVar2 + 0x34);
    uVar5 = FUN_10d8_45a7((int)*(undefined4 *)(iVar1 + 0x1a),
                          (int)((ulong)*(undefined4 *)(iVar1 + 0x1a) >> 0x10));
    FUN_10e8_05bd(0x10d8,*(undefined2 *)(iVar1 + 0x2e),uVar5,uVar4,uVar6);
    *(undefined *)(iVar1 + 0x60) = 0;
  }
  return;
}



/* ---- FUN_10e0_7605 @ 10e0:7605  (215 octets) ---- */

void __cdecl16far FUN_10e0_7605(undefined4 param_1,undefined4 *param_3)

{
  undefined2 *puVar1;
  undefined2 in_AX;
  undefined4 *puVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  undefined4 *in_stack_0000ffca;
  undefined2 uStack_16;
  undefined *puStack_14;
  int iStack_12;
  char *pcStack_10;
  undefined2 local_e;
  undefined2 local_c;
  int local_a;
  int local_8;
  undefined4 local_6;
  
  pcStack_10 = (char *)param_1._2_2_;
  iStack_12 = (int)param_1;
  puStack_14 = (undefined *)0x1;
  uStack_16 = CONCAT11((char)((uint)in_AX >> 8),1);
  local_6 = (undefined4 *)FUN_10e0_79c8(0x14e4,(char *)s_iTime_1160_10dc + 4);
  pcStack_10 = (char *)s_iTime_1160_10dc + 4;
  iStack_12 = 0x75ff;
  uStack_16 = DAT_1160_1858;
  uVar3 = (undefined2)((ulong)param_3 >> 0x10);
  if (*(char *)((int)param_1 + 0x22) == '\x10') {
    local_e = 1;
    local_c = 0x100;
    local_a = 0;
    local_8 = 0;
    puVar1 = (undefined2 *)((int)*local_6 + 4);
    DAT_1160_1858 = (undefined4 *)&uStack_16;
    puStack_14 = &stack0xfffe;
    (*(code *)*puVar1)((char *)s_iTime_1160_10dc + 4,local_6,8,0,&local_e);
    puVar1 = (undefined2 *)((int)*param_3 + 0x3c);
    (*(code *)*puVar1)((char *)s_iTime_1160_10dc + 4,(undefined4 *)param_3,uVar3,
                       (undefined4 *)local_6,local_6._2_2_);
    uVar4 = FUN_1148_237e((undefined4 *)local_6,(int)((ulong)local_6 >> 0x10));
    local_a = (uint)uVar4 - 8;
    local_8 = (int)((ulong)uVar4 >> 0x10) - (uint)((uint)uVar4 < 8);
    FUN_1148_23a4((undefined4 *)local_6,(int)((ulong)local_6 >> 0x10),0,0);
    puVar2 = (undefined4 *)local_6;
    puVar1 = (undefined2 *)((int)*local_6 + 4);
    (*(code *)*puVar1)(0x1148,puVar2,(int)((ulong)local_6 >> 0x10),8,0,&local_e);
    DAT_1160_1858 = puVar2;
  }
  else {
    puVar1 = (undefined2 *)((int)*param_3 + 0x3c);
    DAT_1160_1858 = (undefined4 *)&uStack_16;
    puStack_14 = &stack0xfffe;
    (*(code *)*puVar1)((char *)s_iTime_1160_10dc + 4,(undefined4 *)param_3,uVar3,local_6);
    DAT_1160_1858 = in_stack_0000ffca;
  }
  FUN_1158_1f7f((undefined4 *)local_6,(int)((ulong)local_6 >> 0x10));
  return;
}



/* ---- FUN_10e0_76e6 @ 10e0:76e6  (87 octets) ---- */

void __cdecl16far FUN_10e0_76e6(undefined2 param_1,undefined2 param_2,undefined4 param_3)

{
  undefined2 uVar1;
  undefined2 in_AX;
  undefined2 uStack_e;
  undefined *puStack_c;
  undefined2 uStack_a;
  char *pcStack_8;
  undefined4 local_6;
  
  pcStack_8 = (char *)param_2;
  uStack_a = param_1;
  puStack_c = (undefined *)0x1;
  uStack_e = CONCAT11((char)((uint)in_AX >> 8),1);
  local_6 = FUN_10e0_79c8(0x14e4,(char *)s_iTime_1160_10dc + 4);
  pcStack_8 = (char *)s_iTime_1160_10dc + 4;
  uStack_a = 0x76e0;
  uStack_e = DAT_1160_1858;
  DAT_1160_1858 = &uStack_e;
  uVar1 = (int)param_3;
  puStack_c = &stack0xfffe;
  FUN_10e0_7870((int)param_3,(int)((ulong)param_3 >> 0x10),local_6);
  DAT_1160_1858 = (undefined2 *)uVar1;
  FUN_1158_1f7f(local_6);
  return;
}



/* ---- FUN_10e0_7747 @ 10e0:7747  (89 octets) ---- */

void __cdecl16far FUN_10e0_7747(undefined2 param_1,undefined2 param_2,undefined4 *param_3)

{
  undefined2 *puVar1;
  undefined4 *puVar2;
  undefined2 in_AX;
  undefined2 uStack_e;
  undefined *puStack_c;
  undefined2 uStack_a;
  char *pcStack_8;
  undefined4 local_6;
  
  pcStack_8 = (char *)param_2;
  uStack_a = param_1;
  puStack_c = (undefined *)0x1;
  uStack_e = CONCAT11((char)((uint)in_AX >> 8),1);
  local_6 = FUN_10e0_79c8(0x14e4,(char *)s_iTime_1160_10dc + 4);
  pcStack_8 = (char *)s_iTime_1160_10dc + 4;
  uStack_a = 0x7741;
  uStack_e = DAT_1160_1858;
  puVar1 = (undefined2 *)((int)*param_3 + 0x50);
  DAT_1160_1858 = (undefined4 *)&uStack_e;
  puVar2 = (undefined4 *)param_3;
  puStack_c = &stack0xfffe;
  (*(code *)*puVar1)((char *)s_iTime_1160_10dc + 4,(undefined4 *)param_3,
                     (int)((ulong)param_3 >> 0x10),local_6);
  DAT_1160_1858 = puVar2;
  FUN_1158_1f7f(local_6);
  return;
}



/* ---- FUN_10e0_77aa @ 10e0:77aa  (188 octets) ---- */

/* WARNING: Removing unreachable block (ram,0x10e077f2) */

void __cdecl16far FUN_10e0_77aa(undefined2 param_1,undefined2 param_2,undefined4 *param_3)

{
  undefined2 *puVar1;
  undefined4 *puVar2;
  undefined2 in_AX;
  undefined2 uStack_1a;
  undefined *puStack_18;
  undefined2 uStack_16;
  char *pcStack_14;
  int local_12;
  int local_10;
  int local_e;
  int local_c;
  undefined4 local_a;
  undefined4 local_6;
  
  pcStack_14 = (char *)param_2;
  uStack_16 = param_1;
  puStack_18 = (undefined *)0x0;
  uStack_1a = CONCAT11((char)((uint)in_AX >> 8),1);
  local_6 = (undefined4 *)FUN_10e0_79c8(0x14e4,(char *)s_iTime_1160_10dc + 4);
  pcStack_14 = (char *)s_iTime_1160_10dc + 4;
  uStack_16 = 0x77a4;
  uStack_1a = DAT_1160_1858;
  DAT_1160_1858 = (undefined4 *)&uStack_1a;
  puStack_18 = &stack0xfffe;
  local_a = FUN_1148_23bf(local_6);
  if (7 < local_a) {
    (*(code *)*(undefined2 *)(undefined2 *)*local_6)
              (0x1148,(undefined4 *)local_6,(int)((ulong)local_6 >> 0x10),8,0,&local_12);
    if ((((local_12 != 1) || (local_10 != 0x100)) ||
        (local_a._2_2_ - (uint)((uint)local_a < 8) != local_c)) || ((uint)local_a - 8 != local_e)) {
      FUN_1148_23a4((undefined4 *)local_6,(int)((ulong)local_6 >> 0x10),0,0);
    }
  }
  puVar1 = (undefined2 *)((int)*param_3 + 0x38);
  puVar2 = (undefined4 *)param_3;
  (*(code *)*puVar1)(0x1148,(undefined4 *)param_3,(int)((ulong)param_3 >> 0x10),
                     (undefined4 *)local_6,local_6._2_2_);
  DAT_1160_1858 = puVar2;
  FUN_1158_1f7f((undefined4 *)local_6,(int)((ulong)local_6 >> 0x10));
  return;
}



/* ---- FUN_10e0_7870 @ 10e0:7870  (91 octets) ---- */

void __cdecl16far FUN_10e0_7870(undefined2 param_1,undefined2 param_2,undefined4 param_3)

{
  undefined2 uVar1;
  undefined2 in_AX;
  undefined2 uStack_e;
  undefined *puStack_c;
  undefined2 uStack_a;
  char *pcStack_8;
  undefined4 local_6;
  
  pcStack_8 = (char *)param_2;
  uStack_a = param_1;
  puStack_c = (undefined *)0x0;
  uStack_e = CONCAT11((char)((uint)in_AX >> 8),1);
  local_6 = FUN_10e0_79c8(0x14e4,(char *)s_iTime_1160_10dc + 4);
  pcStack_8 = (char *)s_iTime_1160_10dc + 4;
  uStack_a = 0x786a;
  uStack_e = DAT_1160_1858;
  DAT_1160_1858 = &uStack_e;
  uVar1 = (int)param_3;
  puStack_c = &stack0xfffe;
  FUN_1148_24c2((int)param_3,(int)((ulong)param_3 >> 0x10),0,0,local_6);
  DAT_1160_1858 = (undefined2 *)uVar1;
  FUN_1158_1f7f(local_6);
  return;
}



/* ---- FUN_10e0_78d5 @ 10e0:78d5  (89 octets) ---- */

void __cdecl16far FUN_10e0_78d5(undefined2 param_1,undefined2 param_2,undefined4 *param_3)

{
  undefined2 *puVar1;
  undefined4 *puVar2;
  undefined2 in_AX;
  undefined2 uStack_e;
  undefined *puStack_c;
  undefined2 uStack_a;
  char *pcStack_8;
  undefined4 local_6;
  
  pcStack_8 = (char *)param_2;
  uStack_a = param_1;
  puStack_c = (undefined *)0x0;
  uStack_e = CONCAT11((char)((uint)in_AX >> 8),1);
  local_6 = FUN_10e0_79c8(0x14e4,(char *)s_iTime_1160_10dc + 4);
  pcStack_8 = (char *)s_iTime_1160_10dc + 4;
  uStack_a = 0x78cf;
  uStack_e = DAT_1160_1858;
  puVar1 = (undefined2 *)((int)*param_3 + 0x48);
  DAT_1160_1858 = (undefined4 *)&uStack_e;
  puVar2 = (undefined4 *)param_3;
  puStack_c = &stack0xfffe;
  (*(code *)*puVar1)((char *)s_iTime_1160_10dc + 4,(undefined4 *)param_3,
                     (int)((ulong)param_3 >> 0x10),local_6);
  DAT_1160_1858 = puVar2;
  FUN_1158_1f7f(local_6);
  return;
}



/* ---- FUN_10e0_7932 @ 10e0:7932  (79 octets) ---- */

undefined4 __stdcall16far
FUN_10e0_7932(undefined4 param_1,char param_2,undefined2 param_3,undefined2 param_4)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uStack_a;
  
  if (param_2 != '\0') {
    FUN_1158_1fe2();
  }
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  FUN_10e0_73d7(iVar1,uVar2,0,param_3,param_4);
  FUN_10d8_6e85(iVar1,uVar2,0xf);
  *(undefined *)(iVar1 + 0x61) = 1;
  if (param_2 != '\0') {
    DAT_1160_1858 = uStack_a;
  }
  return param_1;
}



/* ---- FUN_10e0_7981 @ 10e0:7981  (71 octets) ---- */

undefined4 __stdcall16far
FUN_10e0_7981(undefined4 param_1,char param_2,undefined2 param_3,undefined2 param_4)

{
  undefined2 uVar1;
  undefined2 uStack_a;
  
  if (param_2 != '\0') {
    FUN_1158_1fe2();
  }
  uVar1 = (undefined2)((ulong)param_1 >> 0x10);
  FUN_10e0_73d7((int)param_1,uVar1,0,param_3,param_4);
  FUN_10d8_6e85((int)param_1,uVar1,0x10);
  if (param_2 != '\0') {
    DAT_1160_1858 = uStack_a;
  }
  return param_1;
}



/* ---- FUN_10e0_79c8 @ 10e0:79c8  (308 octets) ---- */

undefined4 __stdcall16far
FUN_10e0_79c8(undefined4 param_1,char param_2,char param_3,undefined4 param_4)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  undefined4 uVar7;
  undefined2 uStack_c;
  undefined2 local_4;
  
  if (param_2 != '\0') {
    FUN_1158_1fe2();
  }
  uVar5 = (undefined2)((ulong)param_1 >> 0x10);
  iVar3 = (int)param_1;
  *(int *)(iVar3 + 4) = (int)param_4;
  *(undefined2 *)(iVar3 + 6) = param_4._2_2_;
  uVar6 = *(undefined2 *)((int)param_4 + 0x1c);
  *(undefined2 *)(iVar3 + 8) = *(undefined2 *)((int)param_4 + 0x1a);
  *(undefined2 *)(iVar3 + 10) = uVar6;
  uVar7 = FUN_10d8_45a7((int)*(undefined4 *)(iVar3 + 8),
                        (int)((ulong)*(undefined4 *)(iVar3 + 8) >> 0x10));
  *(undefined2 *)(iVar3 + 0xc) = (int)uVar7;
  *(undefined2 *)(iVar3 + 0xe) = (int)((ulong)uVar7 >> 0x10);
  *(undefined2 *)(iVar3 + 0x14) = *(undefined2 *)((int)param_4 + 0x2e);
  if (*(char *)((int)*(undefined4 *)(iVar3 + 4) + 0x60) == '\0') {
    if (param_3 == '\0') {
      uVar7 = FUN_1150_0476(*(undefined2 *)((int)*(undefined4 *)(iVar3 + 8) + 0x46));
      *(undefined2 *)(iVar3 + 0x10) = (int)uVar7;
      *(undefined2 *)(iVar3 + 0x12) = (int)((ulong)uVar7 >> 0x10);
      uVar6 = *(undefined2 *)(iVar3 + 0x12);
      *(undefined2 *)(iVar3 + 0xc) = *(undefined2 *)(iVar3 + 0x10);
      *(undefined2 *)(iVar3 + 0xe) = uVar6;
      cVar2 = FUN_10d8_4867((int)*(undefined4 *)(iVar3 + 8),
                            (int)((ulong)*(undefined4 *)(iVar3 + 8) >> 0x10),
                            *(undefined2 *)(iVar3 + 0x10),*(undefined2 *)(iVar3 + 0x12));
      if (cVar2 == '\0') goto LAB_10e0_7ae5;
      local_4 = 1;
    }
    else {
      bVar1 = *(byte *)((int)*(undefined4 *)(iVar3 + 8) + 0x3a);
      if ((bVar1 < 2) || (3 < bVar1)) {
        FUN_10d8_11ef(0xf212);
      }
      local_4 = 0;
    }
    uVar6 = (undefined2)((ulong)*(undefined4 *)(iVar3 + 8) >> 0x10);
    iVar4 = (int)*(undefined4 *)(iVar3 + 8);
    uVar6 = FUN_10e8_056d(0x10d8,local_4,*(undefined2 *)(iVar3 + 0x14),*(undefined2 *)(iVar3 + 0xc),
                          *(undefined2 *)(iVar3 + 0xe),*(undefined2 *)(iVar4 + 0x34),
                          *(undefined2 *)(iVar4 + 0x36));
    FUN_10d8_124e(uVar6);
  }
  *(undefined *)(iVar3 + 0x16) = 1;
  if (param_3 == '\x01') {
    FUN_10e0_7f22(iVar3,uVar5);
  }
LAB_10e0_7ae5:
  if (param_2 != '\0') {
    DAT_1160_1858 = uStack_c;
  }
  return param_1;
}



/* ---- FUN_10e0_7bc7 @ 10e0:7bc7  (325 octets) ---- */

undefined4 __stdcall16far
FUN_10e0_7bc7(undefined4 param_1,uint param_2,uint param_3,undefined4 param_4)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  undefined2 unaff_CS;
  undefined2 uVar7;
  bool bVar8;
  uint local_12;
  int local_10;
  uint local_e;
  int local_c;
  uint local_a;
  int local_8;
  uint local_6;
  int local_4;
  
  local_6 = 0;
  local_4 = 0;
  uVar5 = (undefined2)((ulong)param_1 >> 0x10);
  iVar3 = (int)param_1;
  if (*(char *)(iVar3 + 0x16) != '\0') {
    local_10 = (int)((ulong)param_4 >> 0x10);
    local_12 = (uint)param_4;
    while ((0 < (int)param_3 || ((-1 < (int)param_3 && (param_2 != 0))))) {
      if (local_12 < 0x8000) {
        local_a = 0x8000;
      }
      else {
        local_a = -local_12;
      }
      if ((0x7fff < param_3) || (((int)param_3 < 1 && (param_2 < local_a)))) {
        local_a = param_2;
      }
      uVar7 = 0x10e8;
      local_8 = FUN_10e8_058d(unaff_CS,&local_e);
      if ((local_8 == 0) || (local_8 == 0x2207)) {
        if (*(char *)((int)*(undefined4 *)(iVar3 + 4) + 0x61) != '\0') {
          uVar6 = (undefined2)((ulong)*(undefined4 *)(iVar3 + 8) >> 0x10);
          iVar4 = (int)*(undefined4 *)(iVar3 + 8);
          uVar7 = 0x10d8;
          FUN_10d8_0fa8(local_e,local_12,local_10,local_12,local_10,*(undefined2 *)(iVar4 + 0x56),
                        *(undefined2 *)(iVar4 + 0x58));
        }
        puVar1 = (uint *)(iVar3 + 0x18);
        uVar2 = *puVar1;
        *puVar1 = *puVar1 + local_e;
        *(int *)(iVar3 + 0x1a) = *(int *)(iVar3 + 0x1a) + local_c + (uint)CARRY2(uVar2,local_e);
        bVar8 = CARRY2(local_6,local_e);
        local_6 = local_6 + local_e;
        local_4 = local_4 + local_c + (uint)bVar8;
      }
      else if (local_8 != 0x270e) {
        uVar7 = 0x10d8;
        FUN_10d8_122d(local_8);
      }
      if (local_8 != 0) break;
      bVar8 = param_2 < local_a;
      param_2 = param_2 - local_a;
      param_3 = param_3 - bVar8;
      local_12 = local_12 + local_a;
      unaff_CS = uVar7;
      if (local_12 == 0) {
        local_10 = local_10 + DAT_1160_187e;
      }
    }
  }
  return CONCAT22(local_4,local_6);
}



/* ---- FUN_10e0_7eb0 @ 10e0:7eb0  (114 octets) ---- */

undefined4 __stdcall16far FUN_10e0_7eb0(undefined4 param_1,int param_2,uint param_3,int param_4)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  undefined2 uVar4;
  long lVar5;
  
  iVar3 = (int)param_1;
  uVar4 = (undefined2)((ulong)param_1 >> 0x10);
  if (param_2 == 0) {
    *(uint *)(iVar3 + 0x18) = param_3;
    *(int *)(iVar3 + 0x1a) = param_4;
  }
  else if (param_2 == 1) {
    puVar1 = (uint *)(iVar3 + 0x18);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 + param_3;
    *(int *)(iVar3 + 0x1a) = *(int *)(iVar3 + 0x1a) + param_4 + (uint)CARRY2(uVar2,param_3);
  }
  else if (param_2 == 2) {
    lVar5 = FUN_10e0_7f69(iVar3,uVar4);
    lVar5 = lVar5 + CONCAT22(param_4,param_3);
    *(undefined2 *)(iVar3 + 0x18) = (int)lVar5;
    *(undefined2 *)(iVar3 + 0x1a) = (int)((ulong)lVar5 >> 0x10);
  }
  return CONCAT22(*(undefined2 *)(iVar3 + 0x1a),*(undefined2 *)(iVar3 + 0x18));
}



/* ---- FUN_10e0_7f22 @ 10e0:7f22  (71 octets) ---- */

void __stdcall16far FUN_10e0_7f22(undefined4 param_1)

{
  undefined2 uVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  if (*(char *)((int)param_1 + 0x16) != '\0') {
    uVar1 = FUN_10e8_05ad();
    FUN_10d8_124e(uVar1);
    *(undefined *)((int)param_1 + 0x17) = 1;
  }
  return;
}



/* ---- FUN_10e0_7f69 @ 10e0:7f69  (75 octets) ---- */

undefined4 __stdcall16far FUN_10e0_7f69(undefined4 param_1)

{
  undefined2 uVar1;
  
  if (*(char *)((int)param_1 + 0x16) != '\0') {
    uVar1 = FUN_10e8_057d();
    FUN_10d8_124e(uVar1);
  }
  return 0;
}



/* ---- FUN_10e0_7fb4 @ 10e0:7fb4  (71 octets) ---- */

undefined4 __stdcall16far FUN_10e0_7fb4(undefined4 param_1,char param_2)

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
  FUN_10d8_75dc(iVar2,uVar3,0);
  uVar1 = DAT_1160_1718;
  *(undefined2 *)(iVar2 + 0x18) = DAT_1160_1716;
  *(undefined2 *)(iVar2 + 0x1a) = uVar1;
  if (param_2 != '\0') {
    DAT_1160_1858 = uStack_a;
  }
  return param_1;
}



/* ---- FUN_10e0_7ffb @ 10e0:7ffb  (47 octets) ---- */

void __stdcall16far FUN_10e0_7ffb(undefined4 param_1,char param_2)

{
  int iVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  FUN_1150_0624(*(undefined2 *)(iVar1 + 0x18),*(undefined2 *)(iVar1 + 0x1a));
  FUN_10d8_761a(iVar1,uVar2,0);
  if (param_2 != '\0') {
    FUN_1158_200f();
  }
  return;
}



/* ---- FUN_10e0_802a @ 10e0:802a  (57 octets) ---- */

void __stdcall16far FUN_10e0_802a(undefined4 param_1,char param_2)

{
  int iVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  if (*(char *)(iVar1 + 0x20) != param_2) {
    *(char *)(iVar1 + 0x20) = param_2;
    *(undefined *)(iVar1 + 0x21) = 0;
    if (*(int *)(iVar1 + 0x2c) != 0) {
      (*(code *)*(undefined2 *)(iVar1 + 0x2a))();
    }
  }
  return;
}



/* ---- FUN_10e0_8063 @ 10e0:8063  (29 octets) ---- */

void __stdcall16far FUN_10e0_8063(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)((int)param_1 + 0x18);
  FUN_1158_17e7(0xff,(int)param_2,(int)((ulong)param_2 >> 0x10),(int)uVar1,
                (int)((ulong)uVar1 >> 0x10));
  return;
}



/* ---- FUN_10e0_8080 @ 10e0:8080  (57 octets) ---- */

void __stdcall16far FUN_10e0_8080(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined in_ZF;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  uVar3 = (undefined2)((ulong)param_2 >> 0x10);
  FUN_1158_18be((int)param_2,uVar3,(int)*(undefined4 *)(iVar1 + 0x18),
                (int)((ulong)*(undefined4 *)(iVar1 + 0x18) >> 0x10));
  if (!(bool)in_ZF) {
    FUN_1150_0651((int)param_2,uVar3,iVar1 + 0x18,uVar2);
    FUN_10e0_80ff(iVar1,uVar2);
  }
  return;
}



/* ---- FUN_10e0_80b9 @ 10e0:80b9  (70 octets) ---- */

void __stdcall16far FUN_10e0_80b9(undefined4 *param_1,int param_2,int param_3)

{
  undefined2 *puVar1;
  undefined4 *puVar2;
  undefined2 uVar3;
  
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  puVar2 = (undefined4 *)param_1;
  if ((*(int *)((int)puVar2 + 0x16) != param_3) || (*(int *)(puVar2 + 5) != param_2)) {
    *(int *)(puVar2 + 5) = param_2;
    *(int *)((int)puVar2 + 0x16) = param_3;
    puVar1 = (undefined2 *)((int)*param_1 + 0x20);
    (*(code *)*puVar1)();
    puVar1 = (undefined2 *)((int)*param_1 + 0x28);
    (*(code *)*puVar1)();
  }
  return;
}



/* ---- FUN_10e0_80ff @ 10e0:80ff  (80 octets) ---- */

void __stdcall16far FUN_10e0_80ff(undefined4 param_1)

{
  int iVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  FUN_10e0_80b9(iVar1,uVar2,0,0);
  if ((*(char *)(iVar1 + 0x11) != '\0') && (*(char *)*(undefined4 *)(iVar1 + 0x18) != '\0')) {
    uVar3 = *(undefined4 *)((int)*(undefined4 *)(iVar1 + 4) + 0x1a);
    uVar3 = FUN_10d8_3b9b((int)uVar3,(int)((ulong)uVar3 >> 0x10),(int)*(undefined4 *)(iVar1 + 0x18),
                          (int)((ulong)*(undefined4 *)(iVar1 + 0x18) >> 0x10));
    FUN_10e0_80b9(iVar1,uVar2,uVar3);
  }
  return;
}



/* ---- FUN_10e0_814f @ 10e0:814f  (45 octets) ---- */

undefined __stdcall16far FUN_10e0_814f(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  undefined2 uVar3;
  
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  iVar2 = (int)param_1;
  cVar1 = FUN_10e0_817c(iVar2,uVar3);
  if (cVar1 != '\0') {
    FUN_10d8_7899(iVar2,uVar3);
  }
  return *(undefined *)(iVar2 + 0x20);
}



/* ---- FUN_10e0_817c @ 10e0:817c  (55 octets) ---- */

undefined2 __stdcall16far FUN_10e0_817c(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  undefined2 uVar3;
  
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  iVar2 = (int)param_1;
  if ((*(char *)(iVar2 + 0x10) == '\0') &&
     (*(int *)(iVar2 + 0x14) != 0 || *(int *)(iVar2 + 0x16) != 0)) {
    cVar1 = FUN_10d8_65ca((int)*(undefined4 *)(iVar2 + 0x14),
                          (int)((ulong)*(undefined4 *)(iVar2 + 0x14) >> 0x10));
    if (cVar1 != '\0') {
      return 1;
    }
  }
  return 0;
}



/* ---- FUN_10e0_81b3 @ 10e0:81b3  (15 octets) ---- */

void __stdcall16far FUN_10e0_81b3(undefined4 param_1)

{
  *(undefined *)((int)param_1 + 0x21) = 1;
  return;
}



/* ---- FUN_10e0_81c2 @ 10e0:81c2  (23 octets) ---- */

void __stdcall16far FUN_10e0_81c2(undefined4 *param_1)

{
  undefined2 *puVar1;
  
  puVar1 = (undefined2 *)((int)*param_1 + 0x28);
  (*(code *)*puVar1)();
  return;
}



/* ---- FUN_10e0_81d9 @ 10e0:81d9  (46 octets) ---- */

void __stdcall16far FUN_10e0_81d9(undefined4 param_1)

{
  int iVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  FUN_10e0_80ff(iVar1,uVar2);
  if (*(int *)(iVar1 + 0x3c) != 0) {
    (*(code *)*(undefined2 *)(iVar1 + 0x3a))
              ((char *)s_iTime_1160_10dc + 4,*(undefined2 *)(iVar1 + 0x3e),
               *(undefined2 *)(iVar1 + 0x40),iVar1,uVar2);
  }
  return;
}



/* ---- FUN_10e0_8207 @ 10e0:8207  (45 octets) ---- */

void __stdcall16far FUN_10e0_8207(undefined4 param_1)

{
  char cVar1;
  undefined2 uVar2;
  int iVar3;
  undefined2 uVar4;
  
  uVar4 = (undefined2)((ulong)param_1 >> 0x10);
  iVar3 = (int)param_1;
  if (*(char *)(iVar3 + 0x12) != '\0') {
    cVar1 = FUN_10e0_817c(iVar3,uVar4);
    if (cVar1 != '\0') {
      uVar2 = 1;
      goto LAB_10e0_8225;
    }
  }
  uVar2 = 0;
LAB_10e0_8225:
  FUN_10e0_802a(iVar3,uVar4,uVar2);
  return;
}



/* ---- FUN_10e0_8234 @ 10e0:8234  (97 octets) ---- */

void __stdcall16far FUN_10e0_8234(undefined4 param_1,int *param_2)

{
  undefined2 *puVar1;
  undefined4 *puVar2;
  char cVar3;
  int *piVar4;
  int iVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  
  uVar6 = (undefined2)((ulong)param_2 >> 0x10);
  piVar4 = (int *)param_2;
  if (*param_2 != 0 || piVar4[1] != 0) {
    uVar7 = (undefined2)((ulong)param_1 >> 0x10);
    iVar5 = (int)param_1;
    if (((piVar4[1] == *(int *)(iVar5 + 0x16)) && (*param_2 == *(int *)(iVar5 + 0x14))) &&
       (*(int *)(iVar5 + 0x1c) != 0 || *(int *)(iVar5 + 0x1e) != 0)) {
      cVar3 = FUN_1138_61c4((int)*(undefined4 *)(iVar5 + 0x1c),
                            (int)((ulong)*(undefined4 *)(iVar5 + 0x1c) >> 0x10));
      if (cVar3 != '\0') {
        *param_2 = 0;
        piVar4[1] = 0;
        puVar2 = (undefined4 *)*(undefined4 *)(iVar5 + 0x1c);
        puVar1 = (undefined2 *)((int)*puVar2 + 0x78);
        (*(code *)*puVar1)(0x1138,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10));
      }
    }
  }
  return;
}



/* ---- FUN_10e0_8295 @ 10e0:8295  (73 octets) ---- */

void __stdcall16far FUN_10e0_8295(undefined4 param_1,int param_2,int param_3)

{
  if (param_2 != 0 || param_3 != 0) {
    if (param_3 != *(int *)((int)param_1 + 0x16)) {
      return;
    }
    if (param_2 != *(int *)((int)param_1 + 0x14)) {
      return;
    }
  }
  if (*(int *)((int)param_1 + 0x24) != 0) {
    (*(code *)*(undefined2 *)((int)param_1 + 0x22))();
  }
  *(undefined *)((int)param_1 + 0x21) = 0;
  return;
}



/* ---- FUN_10e0_82de @ 10e0:82de  (17 octets) ---- */

void __stdcall16far FUN_10e0_82de(undefined4 param_1)

{
  FUN_10e0_80ff((int)param_1,(int)((ulong)param_1 >> 0x10));
  return;
}



/* ---- FUN_10e0_82ef @ 10e0:82ef  (61 octets) ---- */

void __stdcall16far FUN_10e0_82ef(undefined4 param_1)

{
  int iVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  if (*(char *)(iVar1 + 0x21) != '\0') {
    if ((*(int *)(iVar1 + 0x14) != 0 || *(int *)(iVar1 + 0x16) != 0) &&
       (*(int *)(iVar1 + 0x34) != 0)) {
      (*(code *)*(undefined2 *)(iVar1 + 0x32))();
    }
    *(undefined *)(iVar1 + 0x21) = 0;
  }
  return;
}




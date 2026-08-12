/* Simstrat (FR).EXE - segment Code28 - 267 fonctions
   Decompile par Ghidra 11.2.1 (x86 16 bits, chargeur NE). */

/* ---- FUN_10d8_0d71 @ 10d8:0d71  (56 octets) ---- */

void __stdcall16far FUN_10d8_0d71(undefined2 param_1_00,undefined2 param_2,undefined2 param_1)

{
  undefined2 unaff_CS;
  undefined2 unaff_SS;
  
  KILLTIMER(unaff_CS,param_1);
  ((char *)s_clInactiveCaption_1160_0aa3 + 9)[0] = '\0';
  ((char *)s_clInactiveCaption_1160_0aa3 + 9)[1] = '\0';
  FUN_1140_63a9((int)*(undefined4 *)&DAT_1160_2c2e,
                (int)((ulong)*(undefined4 *)&DAT_1160_2c2e >> 0x10),0);
  ((char *)s_clInactiveCaption_1160_0aa3 + 5)[0] = '\0';
  ((char *)s_clInactiveCaption_1160_0aa3 + 5)[1] = '\0';
  ((char *)s_clInactiveCaption_1160_0aa3 + 7)[0] = '\0';
  ((char *)s_clInactiveCaption_1160_0aa3 + 7)[1] = '\0';
  return;
}



/* ---- FUN_10d8_0da9 @ 10d8:0da9  (198 octets) ---- */

undefined2 __stdcall16far
FUN_10d8_0da9(int *param_1,undefined2 param_2_00,undefined2 param_3,int param_2)

{
  undefined2 uVar1;
  int iVar2;
  undefined2 unaff_CS;
  undefined2 unaff_SS;
  undefined4 uVar3;
  undefined2 uVar4;
  undefined2 local_6;
  
  local_6 = 0;
  if (param_2 == 0x15) {
    if (*param_1 == 1) {
      if (*(int *)((char *)s_clInactiveCaption_1160_0aa3 + 5) == 0 &&
          *(int *)((char *)s_clInactiveCaption_1160_0aa3 + 7) == 0) {
        uVar4 = 0;
        uVar1 = SETTIMER(unaff_CS,0xd71,0x10d8,1000,0);
        *(undefined2 *)((char *)s_clInactiveCaption_1160_0aa3 + 9) = uVar1;
        unaff_CS = 0x14d0;
        uVar3 = GETTICKCOUNT(0x14d0,uVar4);
        *(int *)((char *)s_clInactiveCaption_1160_0aa3 + 5) = (int)uVar3;
        *(int *)((char *)s_clInactiveCaption_1160_0aa3 + 7) = (int)((ulong)uVar3 >> 0x10);
      }
      else if (*(int *)((char *)s_clInactiveCaption_1160_0aa3 + 9) != 0) {
        unaff_CS = 0x14d0;
        uVar3 = GETTICKCOUNT();
        iVar2 = ((int)((ulong)uVar3 >> 0x10) - *(int *)((char *)s_clInactiveCaption_1160_0aa3 + 7))
                - (uint)((uint)uVar3 < *(uint *)((char *)s_clInactiveCaption_1160_0aa3 + 5));
        if ((0 < iVar2) ||
           ((-1 < iVar2 &&
            (500 < (uint)uVar3 - *(uint *)((char *)s_clInactiveCaption_1160_0aa3 + 5))))) {
          unaff_CS = 0x1140;
          FUN_1140_63a9((int)*(undefined4 *)&DAT_1160_2c2e,
                        (int)((ulong)*(undefined4 *)&DAT_1160_2c2e >> 0x10),0xffef);
        }
      }
    }
    uVar1 = (undefined2)((ulong)*(undefined4 *)&DAT_1160_2ac6 >> 0x10);
    iVar2 = (int)*(undefined4 *)&DAT_1160_2ac6;
    if (*(int *)(iVar2 + 0x32) != 0 || *(int *)(iVar2 + 0x34) != 0) {
      local_6 = (*(code *)*(undefined2 *)(iVar2 + 0x32))
                          (unaff_CS,iVar2 + 0x2e,uVar1,*(undefined2 *)(iVar2 + 0x28),
                           *(undefined2 *)(iVar2 + 0x2a),0x15);
    }
  }
  return local_6;
}



/* ---- FUN_10d8_0e6f @ 10d8:0e6f  (46 octets) ---- */

void FUN_10d8_0e6f(undefined2 param_1,int *param_2)

{
  int *piVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_2 >> 0x10);
  piVar1 = (int *)param_2;
  if (*param_2 != 0 || piVar1[1] != 0) {
    FUN_1158_019c(param_1,*param_2,piVar1[1]);
    *param_2 = 0;
    piVar1[1] = 0;
  }
  return;
}



/* ---- FUN_10d8_0e9d @ 10d8:0e9d  (26 octets) ---- */

bool FUN_10d8_0e9d(int param_1,char *param_2,char *param_3)

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



/* ---- FUN_10d8_0eb7 @ 10d8:0eb7  (92 octets) ---- */

undefined4 __stdcall16far
FUN_10d8_0eb7(uint param_1,undefined4 param_2,byte *param_4,undefined2 param_5,undefined2 param_6)

{
  uint local_8;
  
  local_8 = (uint)*param_4;
  if (param_1 < local_8) {
    local_8 = param_1;
  }
  FUN_10d8_0f5d(local_8,(int)param_2,param_2._2_2_,(byte *)param_4 + 1,(int)((ulong)param_4 >> 0x10)
                ,param_5,param_6);
  *(undefined *)((int)param_2 + local_8) = 0;
  return param_2;
}



/* ---- FUN_10d8_0f13 @ 10d8:0f13  (74 octets) ---- */

void __stdcall16far
FUN_10d8_0f13(uint param_1,undefined *param_2,undefined2 param_3,undefined2 param_4,
             undefined2 param_5,undefined2 param_6)

{
  uint local_4;
  
  local_4 = FUN_1150_0c8c(param_3,param_4);
  if (param_1 < local_4) {
    local_4 = param_1;
  }
  FUN_10d8_0fa8(local_4,(undefined *)param_2 + 1,(int)((ulong)param_2 >> 0x10),param_3,param_4,
                param_5,param_6);
  *param_2 = (undefined)local_4;
  return;
}



/* ---- FUN_10d8_0f5d @ 10d8:0f5d  (75 octets) ---- */

void __stdcall16far FUN_10d8_0f5d(int param_1)

{
  int param_6;
  int param_7;
  
  if (param_1 != 0) {
    if (param_6 == 0 && param_7 == 0) {
      Ordinal_134();
    }
    else {
      FUN_10e8_219d();
    }
  }
  return;
}



/* ---- FUN_10d8_0fa8 @ 10d8:0fa8  (75 octets) ---- */

void __stdcall16far FUN_10d8_0fa8(int param_1)

{
  int param_6;
  int param_7;
  
  if (param_1 != 0) {
    if (param_6 == 0 && param_7 == 0) {
      Ordinal_135();
    }
    else {
      FUN_10e8_218d();
    }
  }
  return;
}



/* ---- FUN_10d8_0ff3 @ 10d8:0ff3  (124 octets) ---- */

void __stdcall16far FUN_10d8_0ff3(int *param_1,byte *param_2,undefined4 param_3)

{
  byte *pbVar1;
  undefined2 uVar2;
  undefined2 unaff_SS;
  undefined *puVar3;
  undefined local_104 [256];
  int local_4;
  
  local_4 = *param_1;
  while( true ) {
    uVar2 = (undefined2)((ulong)param_2 >> 0x10);
    pbVar1 = (byte *)param_2;
    if (((int)(uint)*param_2 < local_4) || (pbVar1[local_4] == 0x3b)) break;
    local_4 = local_4 + 1;
  }
  puVar3 = local_104;
  FUN_1158_180b(local_4 - *param_1,*param_1,pbVar1,uVar2);
  FUN_1158_17e7(0xff,(int)param_3,(int)((ulong)param_3 >> 0x10),puVar3,unaff_SS);
  if ((local_4 <= (int)(uint)*param_2) && (pbVar1[local_4] == 0x3b)) {
    local_4 = local_4 + 1;
  }
  *param_1 = local_4;
  return;
}



/* ---- FUN_10d8_1073 @ 10d8:1073  (67 octets) ---- */

undefined2 FUN_10d8_1073(char *param_1)

{
  undefined uVar1;
  int in_AX;
  undefined uVar2;
  undefined2 uVar3;
  undefined2 unaff_CS;
  
  if (*param_1 != '\0') {
    uVar3 = (undefined2)((ulong)param_1 >> 0x10);
    in_AX = FUN_1158_1878((char *)param_1,uVar3,0x106f,unaff_CS);
    if (in_AX == 0) {
      in_AX = FUN_1158_1878((char *)param_1,uVar3,0x1071,0x1158);
      if (in_AX == 0) {
        uVar1 = 0;
        uVar2 = 0;
        goto LAB_10d8_10ac;
      }
    }
  }
  uVar2 = (undefined)((uint)in_AX >> 8);
  uVar1 = 1;
LAB_10d8_10ac:
  return CONCAT11(uVar2,uVar1);
}



/* ---- FUN_10d8_10b8 @ 10d8:10b8  (175 octets) ---- */

void FUN_10d8_10b8(undefined4 *param_1,undefined4 param_2)

{
  undefined2 *puVar1;
  undefined2 unaff_CS;
  undefined2 unaff_SS;
  undefined *puVar2;
  undefined2 uVar3;
  undefined *puVar4;
  undefined2 uVar5;
  undefined local_308 [256];
  undefined local_208 [256];
  int local_108;
  undefined local_106 [256];
  int local_6;
  int local_4;
  
  puVar1 = (undefined2 *)((int)*param_1 + 0x10);
  local_108 = (*(code *)*puVar1)();
  local_108 = local_108 + -1;
  if (-1 < local_108) {
    local_4 = 0;
    while( true ) {
      puVar4 = local_208;
      puVar1 = (undefined2 *)((int)*param_1 + 0xc);
      uVar3 = unaff_SS;
      (*(code *)*puVar1)(unaff_CS,(undefined4 *)param_1,(int)((ulong)param_1 >> 0x10),local_4,puVar4
                        );
      FUN_1158_17e7(0xff,local_106,unaff_SS,puVar4,uVar3);
      unaff_CS = 0x1158;
      local_6 = FUN_1158_1878(local_106,unaff_SS,(char *)s_sShortDate_1160_10ad + 9,0x1158);
      if (1 < local_6) {
        puVar4 = local_208;
        uVar5 = unaff_SS;
        FUN_1158_180b(local_6 + -1,1,local_106,unaff_SS);
        puVar2 = local_308;
        uVar3 = unaff_SS;
        FUN_1158_180b(0xff,local_6 + 1,local_106,unaff_SS);
        unaff_CS = 0x1148;
        FUN_1148_1b1b((int)param_2,(int)((ulong)param_2 >> 0x10),puVar2,uVar3,puVar4,uVar5);
      }
      if (local_4 == local_108) break;
      local_4 = local_4 + 1;
    }
  }
  return;
}



/* ---- FUN_10d8_1167 @ 10d8:1167  (101 octets) ---- */

/* WARNING: Removing unreachable block (ram,0x10d811b6) */

void FUN_10d8_1167(uint param_1,char param_2)

{
  if (param_2 == '\x01') {
    if ((param_1 != 0) && (param_1 < 0x100)) {
      return;
    }
  }
  else if (param_2 == '\b') {
    if (param_1 < 0x21) {
      return;
    }
  }
  else if ((param_2 == '\f') || (param_2 == '\r')) {
    if (param_1 != 0) {
      return;
    }
  }
  else {
    if (param_2 == '\x0e') {
      return;
    }
    if (param_2 == '\x0f') {
      return;
    }
    if (param_2 == '\x10') {
      return;
    }
    if (param_1 == 0) {
      return;
    }
  }
  FUN_10d8_11ef(0xf21e);
  return;
}



/* ---- FUN_10d8_11cc @ 10d8:11cc  (35 octets) ---- */

void __stdcall16far FUN_10d8_11cc(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_1150_28e6(0x2f,0x10d8,1,(int)param_1,(int)((ulong)param_1 >> 0x10));
  FUN_1158_1399(0x1150,uVar1);
  return;
}



/* ---- FUN_10d8_11ef @ 10d8:11ef  (27 octets) ---- */

void __stdcall16far FUN_10d8_11ef(undefined2 param_1)

{
  undefined2 unaff_SS;
  undefined *puVar1;
  undefined local_102 [256];
  
  puVar1 = local_102;
  FUN_1150_092b(param_1);
  FUN_10d8_11cc(puVar1,unaff_SS);
  return;
}



/* ---- FUN_10d8_120a @ 10d8:120a  (35 octets) ---- */

void __stdcall16far FUN_10d8_120a(undefined2 param_1,undefined4 param_2,undefined2 param_3)

{
  undefined2 unaff_SS;
  undefined *puVar1;
  undefined local_102 [256];
  
  puVar1 = local_102;
  FUN_1150_0950(param_1,(int)param_2,(int)((ulong)param_2 >> 0x10),param_3);
  FUN_10d8_11cc(puVar1,unaff_SS);
  return;
}



/* ---- FUN_10d8_122d @ 10d8:122d  (33 octets) ---- */

void __stdcall16far FUN_10d8_122d(undefined2 param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_10d8_1373(0x5e,0x10d8,1,param_1);
  FUN_1158_1399(0x10d8,uVar1);
  return;
}



/* ---- FUN_10d8_124e @ 10d8:124e  (21 octets) ---- */

void __stdcall16far FUN_10d8_124e(int param_1)

{
  if (param_1 != 0) {
    FUN_10d8_122d(param_1);
  }
  return;
}



/* ---- FUN_10d8_1263 @ 10d8:1263  (118 octets) ---- */

undefined4 __stdcall16far
FUN_10d8_1263(undefined4 param_1,char param_3,undefined2 param_4,undefined2 param_5,
             undefined2 param_6,undefined2 param_7,undefined2 param_8,undefined4 param_9)

{
  undefined4 uVar1;
  undefined2 unaff_SS;
  undefined *puVar2;
  undefined2 uStack_10a;
  undefined local_102 [256];
  
  if (param_3 != '\0') {
    FUN_1158_1fe2();
  }
  uVar1 = *(undefined4 *)((int)param_9 + 0xc);
  FUN_1148_0c2b((int)uVar1,(int)((ulong)uVar1 >> 0x10),(int)param_1,param_1._2_2_);
  *(undefined2 *)((int)param_1 + 4) = param_8;
  *(undefined2 *)((int)param_1 + 6) = param_6;
  *(undefined2 *)((int)param_1 + 8) = param_7;
  puVar2 = local_102;
  FUN_1150_0e6e(param_4,param_5);
  FUN_1158_17e7(0x7f,(int)param_1 + 10,param_1._2_2_,puVar2,unaff_SS);
  if (param_3 != '\0') {
    DAT_1160_1858 = uStack_10a;
  }
  return param_1;
}



/* ---- FUN_10d8_12d9 @ 10d8:12d9  (146 octets) ---- */

byte * FUN_10d8_12d9(byte *param_1,undefined2 param_2)

{
  bool bVar1;
  undefined4 local_10;
  undefined4 local_c;
  
  local_10 = (byte *)CONCAT22(param_2,param_1);
  bVar1 = false;
  local_c = (byte *)CONCAT22(param_2,param_1);
  while (*local_c != 0) {
    if (*local_c < 0x21) {
      bVar1 = true;
    }
    else {
      if (bVar1) {
        *local_10 = 0x20;
        local_10 = (byte *)CONCAT22(local_10._2_2_,(byte *)local_10 + 1);
        bVar1 = false;
      }
      *local_10 = *local_c;
      local_10 = (byte *)CONCAT22(local_10._2_2_,(byte *)local_10 + 1);
    }
    local_c = (byte *)CONCAT22(local_c._2_2_,(byte *)local_c + 1);
  }
  if ((param_1 < (byte *)local_10) && (((byte *)local_10)[-1] == 0x2e)) {
    local_10 = (byte *)CONCAT22(local_10._2_2_,(byte *)local_10 + -1);
  }
  *local_10 = 0;
  return (byte *)CONCAT22(param_2,param_1);
}



/* ---- FUN_10d8_1373 @ 10d8:1373  (440 octets) ---- */

undefined4 __stdcall16far FUN_10d8_1373(undefined4 param_1,char param_2,char *param_3)

{
  undefined extraout_AH;
  undefined extraout_AH_00;
  int iVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 unaff_CS;
  undefined2 unaff_SS;
  undefined4 uVar4;
  undefined *puVar5;
  undefined2 uVar6;
  char *pcVar7;
  undefined local_218 [8];
  undefined local_210 [8];
  undefined local_208 [240];
  undefined2 local_118;
  undefined2 local_116;
  undefined local_114;
  char *local_110;
  undefined local_108 [128];
  char local_88 [128];
  undefined2 local_8;
  undefined2 local_6;
  int local_4;
  
  if (param_2 != '\0') {
    unaff_CS = 0x1158;
    FUN_1158_1fe2();
  }
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  iVar2 = (int)param_1;
  FUN_1150_28e6(iVar2,uVar3,0,0x136b,unaff_CS);
  uVar4 = FUN_1158_1f50(0x2a3,0x1148,CONCAT11(extraout_AH,1));
  *(undefined2 *)(iVar2 + 0xc) = (int)uVar4;
  *(undefined2 *)(iVar2 + 0xe) = (int)((ulong)uVar4 >> 0x10);
  pcVar7 = local_88;
  FUN_10e8_09fd(0x1158);
  FUN_10d8_1263(0x8d,0x10d8,CONCAT11(extraout_AH_00,1),local_88,unaff_SS,0,0,param_3,iVar2,uVar3);
  FUN_10d8_12d9(local_88,unaff_SS);
  if (local_88[0] == '\0') {
    puVar5 = local_210;
    local_110 = param_3;
    uVar6 = unaff_SS;
    FUN_1150_0950(0,&local_110,unaff_SS,0xf25a);
    FUN_1150_2a03(iVar2,uVar3,puVar5,uVar6);
  }
  else {
    puVar5 = local_208;
    uVar6 = unaff_SS;
    FUN_1150_0e6e(local_88,unaff_SS);
    FUN_1150_2a03(iVar2,uVar3,puVar5,uVar6);
  }
  local_4 = 1;
  while( true ) {
    FUN_1150_0cdf(local_88,unaff_SS,local_108,unaff_SS);
    iVar1 = FUN_10e8_0a1d(0x1150,local_88);
    if (iVar1 == 0) break;
    FUN_10d8_1263(0x8d,0x10d8,1,local_88,unaff_SS,local_8,local_6,iVar1,iVar2,uVar3);
    FUN_10d8_12d9(local_88,unaff_SS);
    if (local_88[0] != '\0') {
      iVar1 = FUN_1150_0db2(local_108,unaff_SS,local_88,unaff_SS);
      if (iVar1 != 0) {
        puVar5 = local_218;
        local_116 = (undefined2)((ulong)*(undefined4 *)(iVar2 + 4) >> 0x10);
        local_118 = (undefined2)*(undefined4 *)(iVar2 + 4);
        local_114 = 4;
        local_110 = local_88;
        uVar6 = unaff_SS;
        FUN_1150_1034(1,&local_118,unaff_SS,0x136c,0x1150);
        FUN_1150_2a03(iVar2,uVar3,puVar5,uVar6);
      }
    }
    local_4 = local_4 + 1;
  }
  if (param_2 != '\0') {
    DAT_1160_1858 = pcVar7;
  }
  return param_1;
}



/* ---- FUN_10d8_152b @ 10d8:152b  (114 octets) ---- */

void __stdcall16far FUN_10d8_152b(undefined4 param_1,char param_2)

{
  int iVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  int local_4;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  if (*(int *)(iVar1 + 0xc) != 0 || *(int *)(iVar1 + 0xe) != 0) {
    local_4 = *(int *)((int)*(undefined4 *)(iVar1 + 0xc) + 8) + -1;
    if (-1 < local_4) {
      while( true ) {
        uVar3 = FUN_1148_0dd0((int)*(undefined4 *)(iVar1 + 0xc),
                              (int)((ulong)*(undefined4 *)(iVar1 + 0xc) >> 0x10),local_4);
        FUN_1158_1f7f(uVar3);
        if (local_4 == 0) break;
        local_4 = local_4 + -1;
      }
    }
    FUN_1158_1f7f((int)*(undefined4 *)(iVar1 + 0xc),
                  (int)((ulong)*(undefined4 *)(iVar1 + 0xc) >> 0x10));
  }
  FUN_1150_29c4(iVar1,uVar2,0);
  if (param_2 != '\0') {
    FUN_1158_200f();
  }
  return;
}



/* ---- FUN_10d8_159d @ 10d8:159d  (331 octets) ---- */

undefined4 __stdcall16far
FUN_10d8_159d(undefined4 param_1,char param_2,undefined2 param_3,undefined2 param_4)

{
  undefined extraout_AH;
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 unaff_SS;
  undefined4 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined2 uVar7;
  undefined local_1ea [248];
  int local_f2 [2];
  undefined4 local_ee;
  undefined local_ea [166];
  undefined local_44 [64];
  int local_4;
  
  if (param_2 != '\0') {
    FUN_1158_1fe2();
  }
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  FUN_1148_4bd9(iVar1,uVar2,0,param_3,param_4);
  uVar4 = FUN_1158_1f50(0x2a3,0x1148,CONCAT11(extraout_AH,1));
  *(undefined2 *)(iVar1 + 0x1a) = (int)uVar4;
  *(undefined2 *)(iVar1 + 0x1c) = (int)((ulong)uVar4 >> 0x10);
  *(undefined *)(iVar1 + 0x22) = 1;
  FUN_1158_1ee5(0,0xe6,local_ea,unaff_SS);
  puVar6 = local_44;
  puVar5 = local_1ea;
  uVar3 = unaff_SS;
  uVar7 = unaff_SS;
  FUN_1150_092b(0xf258);
  FUN_1150_0d6a(0x1f,puVar5,uVar3,puVar6,uVar7);
  uVar3 = 0x10e8;
  local_4 = FUN_10e8_0002(local_ea,unaff_SS);
  if (local_4 == 0) {
    uVar4 = FUN_1150_0476(2);
    *(undefined2 *)(iVar1 + 0x24) = (int)uVar4;
    *(undefined2 *)(iVar1 + 0x26) = (int)((ulong)uVar4 >> 0x10);
    *(undefined *)(iVar1 + 0x23) = 1;
    local_ee = CONCAT22(uVar2,iVar1 + 0x28);
    FUN_10e8_0a7d(0x1150,iVar1 + 0x32,uVar2,iVar1 + 0x2e,uVar2,iVar1 + 0x2c,uVar2,iVar1 + 0x28,uVar2
                  ,0x15,0,0);
    uVar3 = 0x10e8;
    FUN_10e8_06dd(0x10e8,0xda9,0x10d8,*(undefined2 *)(iVar1 + 0x24),*(undefined2 *)(iVar1 + 0x26),2,
                  0,0,0x15,0,0);
  }
  else if (local_4 != 0x2a07) {
    local_f2[1] = 0;
    local_ee = local_ee & 0xffffff00;
    uVar3 = 0x10d8;
    local_f2[0] = local_4;
    FUN_10d8_120a(0,local_f2,unaff_SS,0xf232);
  }
  iVar1 = iVar1 + 0x1e;
  uVar3 = FUN_10e8_09ad(uVar3,iVar1,uVar2,0,0);
  FUN_10d8_124e(uVar3);
  if (param_2 != '\0') {
    DAT_1160_1858 = iVar1;
  }
  return param_1;
}



/* ---- FUN_10d8_16e8 @ 10d8:16e8  (175 octets) ---- */

void __stdcall16far FUN_10d8_16e8(undefined4 param_1,char param_2)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 unaff_CS;
  undefined4 uVar3;
  int local_4;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  local_4 = *(int *)((int)*(undefined4 *)(iVar1 + 0x1a) + 8) + -1;
  if (-1 < local_4) {
    while( true ) {
      uVar3 = FUN_1148_0dd0((int)*(undefined4 *)(iVar1 + 0x1a),
                            (int)((ulong)*(undefined4 *)(iVar1 + 0x1a) >> 0x10),local_4);
      unaff_CS = 0x1158;
      FUN_1158_1f7f(uVar3);
      if (local_4 == 0) break;
      local_4 = local_4 + -1;
    }
  }
  if (*(char *)(iVar1 + 0x23) != '\0') {
    FUN_10e8_06dd(unaff_CS,0,0,*(undefined2 *)(iVar1 + 0x24),*(undefined2 *)(iVar1 + 0x26),2,0,0,
                  0x15,0,0);
    FUN_10e8_31a3();
    if (s_clInactiveCaption_1160_0aa3._9_2_ != 0) {
      KILLTIMER(0x10e8,s_clInactiveCaption_1160_0aa3._9_2_);
      s_clInactiveCaption_1160_0aa3[9] = '\0';
      s_clInactiveCaption_1160_0aa3[10] = '\0';
    }
    FUN_1158_019c(2,*(undefined2 *)(iVar1 + 0x24),*(undefined2 *)(iVar1 + 0x26));
  }
  FUN_1148_4c2b(iVar1,uVar2,0);
  if (param_2 != '\0') {
    FUN_1158_200f();
  }
  return;
}



/* ---- FUN_10d8_17d3 @ 10d8:17d3  (76 octets) ---- */

void __stdcall16far FUN_10d8_17d3(undefined2 param_1_00,undefined2 param_2,undefined4 param_1)

{
  int iVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  if (*(int *)(iVar1 + 0x26) != 0) {
    *(int *)(iVar1 + 0x26) = *(int *)(iVar1 + 0x26) + -1;
  }
  if ((*(int *)(iVar1 + 0x26) == 0) && (*(char *)(iVar1 + 0x20) == '\0')) {
    if (*(char *)(iVar1 + 0x21) == '\0') {
      FUN_10d8_2023(iVar1,uVar2);
    }
    else {
      FUN_1158_1f7f(iVar1,uVar2);
    }
  }
  return;
}



/* ---- FUN_10d8_181f @ 10d8:181f  (128 octets) ---- */

undefined4 __stdcall16far FUN_10d8_181f(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined4 uVar5;
  int local_8;
  
  uVar4 = (undefined2)((ulong)param_1 >> 0x10);
  uVar5 = *(undefined4 *)((int)param_1 + 0x1a);
  iVar1 = *(int *)((int)uVar5 + 8) + -1;
  if (-1 < iVar1) {
    local_8 = 0;
    while( true ) {
      uVar5 = *(undefined4 *)((int)param_1 + 0x1a);
      uVar5 = FUN_1148_0dd0((int)uVar5,(int)((ulong)uVar5 >> 0x10),local_8);
      uVar3 = (undefined2)((ulong)uVar5 >> 0x10);
      iVar2 = (int)uVar5;
      if (((*(char *)(iVar2 + 0x38) != '\0') || (*(char *)(iVar2 + 0x21) != '\0')) &&
         (iVar2 = FUN_1150_07ed((int)param_2,(int)((ulong)param_2 >> 0x10),iVar2 + 0x38,uVar3),
         iVar2 == 0)) {
        return uVar5;
      }
      if (local_8 == iVar1) break;
      local_8 = local_8 + 1;
    }
  }
  return 0;
}



/* ---- FUN_10d8_18ad @ 10d8:18ad  (236 octets) ---- */

void __cdecl16far FUN_10d8_18ad(undefined4 *param_1,undefined4 *param_2,undefined4 param_3)

{
  undefined2 *puVar1;
  undefined2 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined2 uVar6;
  undefined2 unaff_SS;
  undefined *puVar7;
  undefined2 uStack_1e4;
  undefined local_1dc [256];
  undefined *local_dc;
  undefined local_d4 [64];
  undefined local_94 [82];
  undefined local_42 [32];
  undefined local_22 [32];
  
  uVar6 = (undefined2)((ulong)param_2 >> 0x10);
  puVar4 = (undefined4 *)param_2;
  uStack_1e4 = 0x18bb;
  FUN_1148_13c5();
  uStack_1e4 = DAT_1160_1858;
  puVar1 = (undefined2 *)((int)*param_2 + 0x30);
  DAT_1160_1858 = (undefined4 *)&uStack_1e4;
  (*(code *)*puVar1)(0x1148,puVar4,uVar6);
  FUN_1150_0d6a(0x1f,(int)param_3,(int)((ulong)param_3 >> 0x10),local_22,unaff_SS);
  Ordinal_5(0x1150,local_22);
  uVar2 = FUN_10e8_04bd(0x14d0,local_d4);
  FUN_10d8_124e(uVar2);
  iVar3 = FUN_1150_0ddb(0xaae,0x1160,local_42,unaff_SS);
  if (iVar3 == 0) {
    Ordinal_6(0x1150,local_94);
    puVar7 = local_1dc;
    local_dc = local_94;
    FUN_1150_1034(0,&local_dc,unaff_SS,0x189f,0x14d0);
    puVar1 = (undefined2 *)((int)*param_2 + 0x24);
    puVar5 = puVar4;
    (*(code *)*puVar1)(0x1150,puVar4,uVar6,puVar7);
    DAT_1160_1858 = puVar5;
  }
  else {
    puVar5 = (undefined4 *)param_1;
    FUN_10d8_19b3(puVar5,(int)((ulong)param_1 >> 0x10),puVar4,uVar6,local_22);
    DAT_1160_1858 = puVar5;
  }
  FUN_1148_1435(puVar4,uVar6);
  return;
}



/* ---- FUN_10d8_19b3 @ 10d8:19b3  (249 octets) ---- */

void __cdecl16far
FUN_10d8_19b3(undefined2 param_1_00,undefined2 param_2_00,undefined4 *param_1,undefined *param_2)

{
  undefined2 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined2 unaff_SS;
  undefined *puVar6;
  undefined2 uStack_292;
  undefined **ppuStack_290;
  undefined local_27a [256];
  undefined *local_17a;
  undefined *local_172;
  undefined local_16a [162];
  undefined local_c8 [194];
  undefined local_6 [4];
  
  local_172 = param_2;
  ppuStack_290 = &local_172;
  uStack_292 = 0;
  FUN_1150_0feb();
  FUN_10e8_212d();
  uVar5 = 0x10d8;
  ppuStack_290 = (undefined **)0x19fe;
  FUN_10d8_124e();
  uStack_292 = DAT_1160_1858;
  DAT_1160_1858 = (undefined4 *)&uStack_292;
  ppuStack_290 = (undefined **)&stack0xfffe;
  while( true ) {
    iVar2 = FUN_10e8_00ed(uVar5,0,0,local_16a);
    puVar3 = (undefined4 *)param_1;
    uVar4 = (undefined2)((ulong)param_1 >> 0x10);
    if (iVar2 != 0) break;
    Ordinal_6(0x10e8,local_c8);
    puVar6 = local_27a;
    local_17a = local_16a;
    local_172 = local_c8;
    uVar5 = 0x1150;
    FUN_1150_1034(1,&local_17a,unaff_SS,0x199d,0x14d0);
    puVar1 = (undefined2 *)((int)*param_1 + 0x24);
    (*(code *)*puVar1)(0x1150,puVar3,uVar4,puVar6);
  }
  puVar1 = (undefined2 *)((int)*param_1 + 0x24);
  (*(code *)*puVar1)(0x10e8,puVar3,uVar4,0x19a3,0x10e8);
  DAT_1160_1858 = puVar3;
  FUN_10e8_00ad(0x10e8,local_6);
  return;
}



/* ---- FUN_10d8_1ac5 @ 10d8:1ac5  (141 octets) ---- */

void __cdecl16far FUN_10d8_1ac5(undefined4 param_1,undefined4 *param_2,undefined4 param_3)

{
  undefined2 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined2 unaff_SS;
  undefined4 uVar6;
  undefined2 in_stack_0000ffc2;
  undefined2 uVar7;
  undefined2 uVar8;
  undefined2 uStack_2a;
  undefined local_22 [32];
  
  uVar4 = (undefined2)((ulong)param_2 >> 0x10);
  puVar3 = (undefined4 *)param_2;
  uStack_2a = 0x1ad3;
  FUN_1148_13c5();
  uStack_2a = DAT_1160_1858;
  puVar1 = (undefined2 *)((int)*param_2 + 0x30);
  DAT_1160_1858 = &uStack_2a;
  (*(code *)*puVar1)(0x1148,puVar3,uVar4);
  uVar5 = (undefined2)((ulong)param_3 >> 0x10);
  iVar2 = FUN_1150_0730(0x1ab0,0x1148,(int)param_3,uVar5);
  if (iVar2 == 0) {
    puVar1 = (undefined2 *)((int)*param_2 + 0x24);
    (*(code *)*puVar1)(0x1150,puVar3,uVar4,0x1ab9,0x1150);
    DAT_1160_1858 = (undefined2 *)in_stack_0000ffc2;
  }
  else {
    uVar8 = 0x1160;
    uVar7 = 0xace;
    uVar6 = FUN_1150_0d6a(0x1f,(int)param_3,uVar5,local_22,unaff_SS);
    uVar5 = (undefined2)param_1;
    FUN_10d8_19b3(uVar5,(int)((ulong)param_1 >> 0x10),puVar3,uVar4,uVar6,uVar7,uVar8);
    DAT_1160_1858 = (undefined2 *)uVar5;
  }
  FUN_1148_1435(puVar3,uVar4);
  return;
}



/* ---- FUN_10d8_1b56 @ 10d8:1b56  (54 octets) ---- */

undefined __stdcall16far FUN_10d8_1b56(undefined4 param_1)

{
  undefined2 *puVar1;
  undefined local_3;
  
  if (*(int *)((int)param_1 + 0x38) == 0) {
    local_3 = FUN_1080_3d03();
  }
  else {
    local_3 = 0;
    puVar1 = (undefined2 *)((int)param_1 + 0x36);
    (*(code *)*puVar1)();
  }
  return local_3;
}



/* ---- FUN_10d8_1b96 @ 10d8:1b96  (172 octets) ---- */

long __stdcall16far FUN_10d8_1b96(undefined4 param_1,undefined4 param_2)

{
  undefined extraout_AH;
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  long lVar4;
  undefined2 uStack_12;
  undefined *puStack_10;
  undefined2 uStack_e;
  int local_6;
  undefined2 local_4;
  
  puStack_10 = &stack0xfffe;
  uStack_e = 0x1b8c;
  uStack_12 = DAT_1160_1858;
  uVar2 = (undefined2)((ulong)param_2 >> 0x10);
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  DAT_1160_1858 = &uStack_12;
  lVar4 = FUN_10d8_181f(iVar1,uVar3,(int)param_2,uVar2);
  if (lVar4 == 0) {
    lVar4 = FUN_10d8_1ee2(0x1d7,0x10d8,1,iVar1,uVar3);
    FUN_10d8_26a8(lVar4,(int)param_2,uVar2);
    FUN_10d8_273a(lVar4,CONCAT11(extraout_AH,*(undefined *)(iVar1 + 0x22)));
    *(undefined *)((int)lVar4 + 0x21) = 1;
  }
  local_4 = (undefined2)((ulong)lVar4 >> 0x10);
  local_6 = (int)lVar4;
  iVar1 = local_6;
  FUN_10d8_2323(lVar4);
  *(int *)(local_6 + 0x26) = *(int *)(local_6 + 0x26) + 1;
  DAT_1160_1858 = (undefined2 *)iVar1;
  return lVar4;
}



/* ---- FUN_10d8_1c56 @ 10d8:1c56  (16 octets) ---- */

void __stdcall16far FUN_10d8_1c56(void)

{
  FUN_10e8_043d();
  return;
}



/* ---- FUN_10d8_1c9e @ 10d8:1c9e  (522 octets) ---- */

undefined4 __stdcall16far FUN_10d8_1c9e(undefined4 param_1,char param_2,undefined4 *param_3)

{
  undefined2 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  undefined2 unaff_CS;
  undefined2 uVar8;
  undefined2 unaff_SS;
  undefined4 uVar9;
  undefined *puVar10;
  int iVar11;
  undefined4 *puVar12;
  undefined local_212 [4];
  undefined local_20e [252];
  int *local_112;
  undefined2 local_110;
  int local_10e;
  byte local_10c [256];
  int local_c;
  undefined2 local_a;
  int local_8;
  int local_6;
  int local_4;
  
  if (param_2 != '\0') {
    unaff_CS = 0x1158;
    FUN_1158_1fe2();
  }
  uVar5 = (undefined2)((ulong)param_3 >> 0x10);
  puVar2 = (undefined4 *)param_3;
  puVar1 = (undefined2 *)((int)*param_3 + 0x10);
  puVar12 = puVar2;
  local_10e = (*(code *)*puVar1)(unaff_CS,puVar2,uVar5);
  local_10e = local_10e + -1;
  iVar3 = (int)param_1;
  uVar6 = (undefined2)((ulong)param_1 >> 0x10);
  if (-1 < local_10e) {
    local_4 = 0;
    while( true ) {
      puVar10 = local_20e;
      puVar1 = (undefined2 *)((int)*param_3 + 0xc);
      uVar8 = unaff_SS;
      (*(code *)*puVar1)(unaff_CS,puVar2,uVar5,local_4,puVar10);
      FUN_1158_17e7(0xff,local_10c,unaff_SS,puVar10,uVar8);
      unaff_CS = 0x1158;
      local_6 = FUN_1158_1878(local_10c,unaff_SS,0x1c9c,0x1158);
      if (local_6 != 0) {
        *(int *)(iVar3 + 4) = *(int *)(iVar3 + 4) + 1;
        *(int *)(iVar3 + 6) = *(int *)(iVar3 + 6) + ((uint)local_10c[0] - local_6) + 1;
      }
      if (local_4 == local_10e) break;
      local_4 = local_4 + 1;
    }
  }
  if (0 < *(int *)(iVar3 + 4)) {
    uVar9 = FUN_1150_0476(*(int *)(iVar3 + 4) * 0x34);
    *(undefined2 *)(iVar3 + 8) = (int)uVar9;
    *(undefined2 *)(iVar3 + 10) = (int)((ulong)uVar9 >> 0x10);
    uVar8 = 0x1150;
    uVar9 = FUN_1150_0476(*(undefined2 *)(iVar3 + 6));
    *(undefined2 *)(iVar3 + 0xc) = (int)uVar9;
    *(undefined2 *)(iVar3 + 0xe) = (int)((ulong)uVar9 >> 0x10);
    local_8 = 0;
    local_c = *(int *)(iVar3 + 0xc);
    local_a = *(undefined2 *)(iVar3 + 0xe);
    puVar1 = (undefined2 *)((int)*param_3 + 0x10);
    local_10e = (*(code *)*puVar1)(0x1150,puVar2,uVar5);
    local_10e = local_10e + -1;
    if (-1 < local_10e) {
      local_4 = 0;
      while( true ) {
        puVar10 = local_20e;
        puVar1 = (undefined2 *)((int)*param_3 + 0xc);
        uVar7 = unaff_SS;
        (*(code *)*puVar1)(uVar8,puVar2,uVar5,local_4,puVar10);
        FUN_1158_17e7(0xff,local_10c,unaff_SS,puVar10,uVar7);
        uVar8 = 0x1158;
        local_6 = FUN_1158_1878(local_10c,unaff_SS,0x1c9c,0x1158);
        if (local_6 != 0) {
          uVar7 = (undefined2)((ulong)*(undefined4 *)(iVar3 + 8) >> 0x10);
          piVar4 = (int *)((int)*(undefined4 *)(iVar3 + 8) + local_8 * 0x34);
          _local_112 = (int *)CONCAT22(uVar7,piVar4);
          local_8 = local_8 + 1;
          *piVar4 = local_8;
          piVar4 = piVar4 + 1;
          puVar10 = local_212;
          uVar8 = unaff_SS;
          FUN_1158_180b(local_6 + -1,1,local_10c,unaff_SS);
          FUN_1150_0d6a(0x1f,puVar10,uVar8,piVar4,uVar7);
          uVar8 = (undefined2)((ulong)_local_112 >> 0x10);
          piVar4 = (int *)_local_112;
          piVar4[0x11] = 1;
          piVar4[0x15] = local_c - *(int *)(iVar3 + 0xc);
          piVar4[0x16] = ((uint)local_10c[0] - local_6) + 1;
          puVar10 = local_212;
          uVar8 = unaff_SS;
          iVar11 = local_c;
          uVar7 = local_a;
          FUN_1158_180b(0xff,local_6 + 1,local_10c,unaff_SS);
          FUN_1150_0d4c(puVar10,uVar8,iVar11,uVar7);
          uVar8 = 0x14d0;
          Ordinal_5(0x1150,local_c,local_a,local_c,local_a);
          local_c = local_c + ((int *)_local_112)[0x16];
        }
        if (local_4 == local_10e) break;
        local_4 = local_4 + 1;
      }
    }
  }
  if (param_2 != '\0') {
    DAT_1160_1858 = puVar12;
  }
  return param_1;
}



/* ---- FUN_10d8_1ea8 @ 10d8:1ea8  (58 octets) ---- */

void __stdcall16far FUN_10d8_1ea8(undefined4 param_1,char param_2)

{
  int iVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  FUN_10d8_0e6f(*(undefined2 *)(iVar1 + 6),iVar1 + 0xc,uVar2);
  FUN_10d8_0e6f(*(int *)(iVar1 + 4) * 0x34,iVar1 + 8,uVar2);
  if (param_2 != '\0') {
    FUN_1158_200f();
  }
  return;
}



/* ---- FUN_10d8_1ee2 @ 10d8:1ee2  (203 octets) ---- */

undefined4 __stdcall16far
FUN_10d8_1ee2(undefined4 param_1,char param_2,undefined2 param_3,undefined2 param_4)

{
  undefined extraout_AH;
  int iVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined4 uVar6;
  undefined2 uStack_a;
  
  if (param_2 != '\0') {
    FUN_1158_1fe2();
  }
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  FUN_1148_4bd9(iVar1,uVar3,0,param_3,param_4);
  uVar6 = *(undefined4 *)((int)DAT_1160_2ac6 + 0x1a);
  FUN_1148_0c2b((int)uVar6,(int)((ulong)uVar6 >> 0x10),iVar1,uVar3);
  uVar6 = FUN_1158_1f50(0x2a3,0x1148,CONCAT11(extraout_AH,1));
  *(undefined2 *)(iVar1 + 0x1a) = (int)uVar6;
  *(undefined2 *)(iVar1 + 0x1c) = (int)((ulong)uVar6 >> 0x10);
  uVar6 = FUN_1148_1d08(0x3c9,0x1148,1);
  *(undefined2 *)(iVar1 + 0x34) = (int)uVar6;
  *(undefined2 *)(iVar1 + 0x36) = (int)((ulong)uVar6 >> 0x10);
  uVar4 = (undefined2)((ulong)*(undefined4 *)(iVar1 + 0x34) >> 0x10);
  iVar2 = (int)*(undefined4 *)(iVar1 + 0x34);
  *(undefined2 *)(iVar2 + 0x14) = 0x2649;
  *(undefined2 *)(iVar2 + 0x16) = 0x10d8;
  *(int *)(iVar2 + 0x18) = iVar1;
  *(undefined2 *)(iVar2 + 0x1a) = uVar3;
  *(undefined *)(iVar1 + 0x1f) = 1;
  *(undefined *)(iVar1 + 0x20) = 1;
  uVar5 = (undefined2)((ulong)DAT_1160_2ac6 >> 0x10);
  uVar4 = *(undefined2 *)((int)DAT_1160_2ac6 + 0x20);
  *(undefined2 *)(iVar1 + 0x30) = *(undefined2 *)((int)DAT_1160_2ac6 + 0x1e);
  *(undefined2 *)(iVar1 + 0x32) = uVar4;
  *(undefined *)(iVar1 + 0x1e) = 1;
  if (param_2 != '\0') {
    DAT_1160_1858 = uStack_a;
  }
  return param_1;
}



/* ---- FUN_10d8_1fad @ 10d8:1fad  (90 octets) ---- */

void __stdcall16far FUN_10d8_1fad(undefined4 param_1,char param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined2 uVar3;
  
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  iVar2 = (int)param_1;
  FUN_10d8_2023(iVar2,uVar3);
  FUN_1158_1f7f((int)*(undefined4 *)(iVar2 + 0x34),
                (int)((ulong)*(undefined4 *)(iVar2 + 0x34) >> 0x10));
  FUN_1158_1f7f((int)*(undefined4 *)(iVar2 + 0x1a),
                (int)((ulong)*(undefined4 *)(iVar2 + 0x1a) >> 0x10));
  uVar1 = *(undefined4 *)((int)DAT_1160_2ac6 + 0x1a);
  FUN_1148_0fa7((int)uVar1,(int)((ulong)uVar1 >> 0x10),iVar2,uVar3);
  FUN_1148_4c2b(iVar2,uVar3,0);
  if (param_2 != '\0') {
    FUN_1158_200f();
  }
  return;
}



/* ---- FUN_10d8_2007 @ 10d8:2007  (28 octets) ---- */

void __stdcall16far FUN_10d8_2007(undefined4 param_1)

{
  undefined2 uVar1;
  
  uVar1 = (undefined2)((ulong)param_1 >> 0x10);
  if (*(int *)((int)param_1 + 0x28) != 0 || *(int *)((int)param_1 + 0x2a) != 0) {
    FUN_10d8_11ef(0xf202);
  }
  return;
}



/* ---- FUN_10d8_2023 @ 10d8:2023  (109 octets) ---- */

void __stdcall16far FUN_10d8_2023(undefined4 param_1)

{
  undefined2 uVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  iVar2 = (int)param_1;
  if (*(int *)(iVar2 + 0x28) != 0 || *(int *)(iVar2 + 0x2a) != 0) {
    uVar5 = 0x10d8;
    FUN_10d8_2090(iVar2,uVar3);
    if (*(char *)(iVar2 + 0x23) != '\0') {
      uVar5 = 0x10e8;
      FUN_10e8_14dd(0x10d8,iVar2 + 0x30,uVar3);
    }
    *(undefined *)(iVar2 + 0x23) = 0;
    uVar4 = (undefined2)((ulong)DAT_1160_2ac6 >> 0x10);
    uVar1 = *(undefined2 *)((int)DAT_1160_2ac6 + 0x20);
    *(undefined2 *)(iVar2 + 0x30) = *(undefined2 *)((int)DAT_1160_2ac6 + 0x1e);
    *(undefined2 *)(iVar2 + 0x32) = uVar1;
    FUN_10e8_005d(uVar5,iVar2 + 0x28,uVar3);
    *(undefined2 *)(iVar2 + 0x28) = 0;
    *(undefined2 *)(iVar2 + 0x2a) = 0;
    *(undefined2 *)(iVar2 + 0x26) = 0;
  }
  return;
}



/* ---- FUN_10d8_2090 @ 10d8:2090  (51 octets) ---- */

void __stdcall16far FUN_10d8_2090(undefined4 param_1)

{
  undefined2 *puVar1;
  undefined4 uVar2;
  undefined2 uVar3;
  undefined4 *puVar4;
  
  while (uVar3 = (undefined2)((ulong)param_1 >> 0x10), uVar2 = *(undefined4 *)((int)param_1 + 0x1a),
        *(int *)((int)uVar2 + 8) != 0) {
    uVar2 = *(undefined4 *)((int)param_1 + 0x1a);
    puVar4 = (undefined4 *)FUN_1148_0f43((int)uVar2,(int)((ulong)uVar2 >> 0x10));
    puVar1 = (undefined2 *)((int)*puVar4 + 0x8c);
    (*(code *)*puVar1)(0x1148,puVar4);
  }
  return;
}



/* ---- FUN_10d8_20c3 @ 10d8:20c3  (44 octets) ---- */

void __stdcall16far FUN_10d8_20c3(undefined4 param_1,undefined *param_2)

{
  undefined2 uVar1;
  
  uVar1 = (undefined2)((ulong)param_1 >> 0x10);
  if (*(char *)((int)param_1 + 0x24) == '\0') {
    *param_2 = 0;
  }
  else {
    FUN_1158_17e7(0x1f,(undefined *)param_2,(int)((ulong)param_2 >> 0x10),(int)param_1 + 0x88,uVar1)
    ;
  }
  return;
}



/* ---- FUN_10d8_20ef @ 10d8:20ef  (30 octets) ---- */

uint __stdcall16far FUN_10d8_20ef(undefined4 param_1)

{
  uint uVar1;
  uint uVar2;
  undefined2 uVar3;
  
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  uVar1 = *(uint *)((int)param_1 + 0x28) | *(uint *)((int)param_1 + 0x2a);
  uVar2 = uVar1 & 0xff00;
  if (uVar1 != 0) {
    uVar2 = uVar2 + 1;
  }
  return uVar2;
}



/* ---- FUN_10d8_210d @ 10d8:210d  (37 octets) ---- */

undefined4 __stdcall16far FUN_10d8_210d(undefined4 param_1,undefined2 param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)((int)param_1 + 0x1a);
  uVar1 = FUN_1148_0dd0((int)uVar1,(int)((ulong)uVar1 >> 0x10),param_2);
  return uVar1;
}



/* ---- FUN_10d8_2132 @ 10d8:2132  (25 octets) ---- */

undefined2 __stdcall16far FUN_10d8_2132(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)((int)param_1 + 0x1a);
  return *(undefined2 *)((int)uVar1 + 8);
}



/* ---- FUN_10d8_214b @ 10d8:214b  (47 octets) ---- */

void __stdcall16far FUN_10d8_214b(undefined4 param_1,undefined *param_2)

{
  undefined2 uVar1;
  
  uVar1 = (undefined2)((ulong)param_1 >> 0x10);
  if (*(char *)((int)param_1 + 0x24) == '\0') {
    FUN_1158_17e7(0x1f,(undefined *)param_2,(int)((ulong)param_2 >> 0x10),(int)param_1 + 0x88,uVar1)
    ;
  }
  else {
    *param_2 = 0;
  }
  return;
}



/* ---- FUN_10d8_217a @ 10d8:217a  (88 octets) ---- */

undefined2 __stdcall16far FUN_10d8_217a(undefined4 param_1)

{
  uint uVar1;
  uint uVar2;
  undefined2 uVar3;
  undefined2 unaff_SS;
  undefined local_46 [67];
  undefined local_3;
  
  local_3 = 0;
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  uVar1 = *(uint *)((int)param_1 + 0x28) | *(uint *)((int)param_1 + 0x2a);
  if (uVar1 != 0) {
    uVar3 = FUN_10e8_21ad();
    FUN_10d8_124e(uVar3);
    uVar2 = FUN_1150_0ddb(0xae2,0x1160,local_46,unaff_SS);
    uVar1 = uVar2 & 0xff00;
    if (uVar2 != 0) {
      uVar1 = uVar1 + 1;
    }
    local_3 = (undefined)uVar1;
  }
  return CONCAT11((char)(uVar1 >> 8),local_3);
}



/* ---- FUN_10d8_224f @ 10d8:224f  (189 octets) ---- */

void __stdcall16far FUN_10d8_224f(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined2 unaff_CS;
  undefined2 uVar6;
  undefined2 unaff_SS;
  undefined *puVar7;
  undefined local_142 [248];
  int local_4a;
  undefined2 local_48;
  undefined local_46;
  undefined local_42 [32];
  undefined local_22 [32];
  
  uVar4 = (undefined2)((ulong)param_1 >> 0x10);
  iVar2 = (int)param_1;
  if (*(int *)(iVar2 + 0xaa) == 0) {
    puVar7 = local_142;
    uVar5 = (undefined2)((ulong)param_2 >> 0x10);
    uVar3 = (undefined2)param_2;
    uVar6 = unaff_SS;
    FUN_1148_1519(uVar3,uVar5,0x223c,unaff_CS);
    FUN_1158_17e7(0x1f,local_22,unaff_SS,puVar7,uVar6);
    uVar6 = 0x1080;
    cVar1 = FUN_1080_3a57(0x1f,local_42);
    if (cVar1 == '\0') {
      local_4a = iVar2 + 0x38;
      local_46 = 4;
      uVar6 = 0x10d8;
      local_48 = uVar4;
      FUN_10d8_120a(0,&local_4a,unaff_SS,0xf22e);
    }
    FUN_1148_1b1b(uVar3,uVar5,local_22,unaff_SS,0x223c,uVar6);
    FUN_1148_1b1b(uVar3,uVar5,local_42,unaff_SS,0x2246,0x1148);
  }
  else {
    (*(code *)*(undefined2 *)(iVar2 + 0xa8))();
  }
  return;
}



/* ---- FUN_10d8_2323 @ 10d8:2323  (736 octets) ---- */

void __stdcall16far FUN_10d8_2323(undefined4 param_1)

{
  undefined2 *puVar1;
  char cVar2;
  int iVar3;
  undefined extraout_AH;
  int iVar4;
  undefined2 uVar5;
  undefined *unaff_CS;
  undefined2 uVar6;
  undefined2 unaff_SS;
  bool bVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined2 uVar10;
  undefined *puStack_21e;
  undefined local_216 [8];
  undefined local_20e [248];
  int local_116;
  undefined2 local_114;
  undefined local_112;
  undefined local_10e [146];
  undefined local_7c [32];
  undefined local_5c [32];
  undefined local_3c [32];
  undefined *local_1c;
  undefined2 local_1a;
  undefined4 local_14;
  undefined4 local_10;
  undefined *local_c;
  char local_3;
  
  uVar5 = (undefined2)((ulong)param_1 >> 0x10);
  iVar4 = (int)param_1;
  if (*(int *)(iVar4 + 0x28) != 0 || *(int *)(iVar4 + 0x2a) != 0) {
    return;
  }
  if ((*(char *)(iVar4 + 0x38) == '\0') && (*(char *)(iVar4 + 0x21) == '\0')) {
    unaff_CS = (undefined *)0x10d8;
    FUN_10d8_11ef();
  }
  local_c = (undefined *)0x0;
  local_14 = 0;
  puStack_21e = unaff_CS;
  local_10 = (undefined4 *)FUN_1148_1d08();
  puStack_21e = (undefined *)DAT_1160_1858;
  DAT_1160_1858 = &puStack_21e;
  if ((*(char *)(iVar4 + 0x88) == '\0') &&
     (DAT_1160_1858 = &puStack_21e, cVar2 = FUN_10d8_1073(iVar4 + 0x38,uVar5), cVar2 != '\0')) {
    puVar9 = local_216;
    local_116 = iVar4 + 0x38;
    local_112 = 4;
    uVar6 = 0x1150;
    local_114 = uVar5;
    FUN_1150_1034(0,&local_116,unaff_SS,0x230c,0x1148);
    puVar1 = (undefined2 *)((int)*local_10 + 0x24);
    (*(code *)*puVar1)(0x1150,(undefined4 *)local_10,(int)((ulong)local_10 >> 0x10),puVar9);
    goto LAB_10d8_251c;
  }
  if (*(char *)(iVar4 + 0x88) == '\0') {
    puVar9 = (undefined *)(iVar4 + 0x38);
    local_3 = '\x01';
  }
  else {
    puVar9 = (undefined *)(iVar4 + 0x88);
    local_3 = *(char *)(iVar4 + 0x24);
  }
  _local_1c = (undefined *)CONCAT22(uVar5,puVar9);
  FUN_1150_0d6a(0x1f,puVar9,uVar5,local_5c,unaff_SS);
  Ordinal_5(0x1150,local_5c);
  if (local_3 == '\0') {
    puStack_21e = local_5c;
    uVar6 = 0x1150;
    local_c = puStack_21e;
    iVar3 = FUN_1150_0ddb(0xaec,0x1160);
    bVar7 = iVar3 != 0;
  }
  else {
    puStack_21e = local_5c;
    uVar6 = 0x10e8;
    iVar3 = FUN_10e8_04bd(0x14d0,local_10e);
    if (iVar3 == 0) {
      puStack_21e = local_7c;
      uVar6 = 0x1150;
      iVar3 = FUN_1150_0ddb(0xaec,0x1160);
      if (iVar3 != 0) {
        bVar7 = true;
        goto LAB_10d8_249b;
      }
    }
    bVar7 = false;
  }
LAB_10d8_249b:
  if ((bVar7) && (*(char *)(iVar4 + 0x1f) != '\0')) {
    puStack_21e = (undefined *)_local_1c;
    uVar6 = (undefined2)((ulong)DAT_1160_2ac6 >> 0x10);
    if (local_3 == '\0') {
      FUN_10d8_1ac5((int)DAT_1160_2ac6,uVar6,(undefined4 *)local_10,local_10._2_2_);
    }
    else {
      FUN_10d8_18ad((int)DAT_1160_2ac6,uVar6,(undefined4 *)local_10,local_10._2_2_);
    }
    FUN_10d8_10b8(*(undefined2 *)(iVar4 + 0x34),*(undefined2 *)(iVar4 + 0x36),(undefined4 *)local_10
                  ,local_10._2_2_);
    uVar6 = 0x10d8;
    FUN_10d8_224f(iVar4,uVar5,(undefined4 *)local_10,local_10._2_2_);
  }
  else {
    puStack_21e = (undefined *)*(undefined2 *)(iVar4 + 0x34);
    puVar1 = (undefined2 *)((int)*local_10 + 8);
    (*(code *)*puVar1)(uVar6,(undefined4 *)local_10,local_10._2_2_);
  }
LAB_10d8_251c:
  puVar9 = local_3c;
  puVar8 = local_20e;
  uVar10 = unaff_SS;
  FUN_1148_1519((undefined4 *)local_10,(int)((ulong)local_10 >> 0x10),0x2314,uVar6);
  FUN_1150_0d6a(0x1f,puVar8,unaff_SS,puVar9,uVar10);
  Ordinal_5(0x1150,local_3c);
  local_14 = FUN_10d8_1c9e(0x128,0x10d8,CONCAT11(extraout_AH,1),(undefined4 *)local_10,
                           local_10._2_2_);
  uVar6 = (undefined2)((ulong)local_14 >> 0x10);
  iVar3 = (int)local_14;
  uVar6 = FUN_10e8_004d(0x10d8,iVar4 + 0x28,uVar5,*(undefined2 *)(iVar3 + 0xc),
                        *(undefined2 *)(iVar3 + 0xe),*(undefined2 *)(iVar3 + 8),
                        *(undefined2 *)(iVar3 + 10),*(undefined2 *)(iVar3 + 4),local_3c);
  FUN_10d8_124e(uVar6);
  FUN_10e8_21bd(0x10d8,1,0,5,4,*(undefined2 *)(iVar4 + 0x28),*(undefined2 *)(iVar4 + 0x2a));
  uVar6 = 1;
  FUN_10e8_21bd(0x10e8,1,0,4,4,*(undefined2 *)(iVar4 + 0x28),*(undefined2 *)(iVar4 + 0x2a));
  DAT_1160_1858 = (undefined **)uVar6;
  FUN_1158_1f7f(local_14);
  FUN_1158_1f7f((undefined4 *)local_10,(int)((ulong)local_10 >> 0x10));
  return;
}



/* ---- FUN_10d8_2649 @ 10d8:2649  (17 octets) ---- */

void __stdcall16far FUN_10d8_2649(undefined4 param_1)

{
  FUN_10d8_2007((int)param_1,(int)((ulong)param_1 >> 0x10));
  return;
}



/* ---- FUN_10d8_265a @ 10d8:265a  (24 octets) ---- */

void __stdcall16far FUN_10d8_265a(undefined4 param_1,undefined4 param_2)

{
  FUN_10d8_26f2((int)param_1,(int)((ulong)param_1 >> 0x10),1,(int)param_2,
                (int)((ulong)param_2 >> 0x10));
  return;
}



/* ---- FUN_10d8_2672 @ 10d8:2672  (54 octets) ---- */

void __stdcall16far FUN_10d8_2672(undefined4 param_1,char param_2)

{
  int iVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  if ((*(byte *)(iVar1 + 0x18) & 2) == 0) {
    if (param_2 == '\0') {
      FUN_10d8_2023(iVar1,uVar2);
    }
    else {
      FUN_10d8_2323(iVar1,uVar2);
    }
  }
  else {
    *(char *)(iVar1 + 0x22) = param_2;
  }
  return;
}



/* ---- FUN_10d8_26a8 @ 10d8:26a8  (74 octets) ---- */

void __stdcall16far FUN_10d8_26a8(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  bool bVar5;
  
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  FUN_10d8_2007(iVar1,uVar3);
  bVar5 = iVar1 + 0x38 == 0;
  uVar4 = (undefined2)((ulong)param_2 >> 0x10);
  uVar2 = (undefined2)param_2;
  FUN_1158_18be(uVar2,uVar4,iVar1 + 0x38,uVar3);
  if (!bVar5) {
    FUN_10d8_2785(iVar1,uVar3,uVar2,uVar4);
    FUN_1158_17e7(0x4f,iVar1 + 0x38,uVar3,uVar2,uVar4);
  }
  return;
}



/* ---- FUN_10d8_26f2 @ 10d8:26f2  (48 octets) ---- */

void __stdcall16far FUN_10d8_26f2(undefined4 param_1,undefined param_2,undefined4 param_3)

{
  int iVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  FUN_10d8_2007(iVar1,uVar2);
  FUN_1158_17e7(0x1f,iVar1 + 0x88,uVar2,(int)param_3,(int)((ulong)param_3 >> 0x10));
  *(undefined *)(iVar1 + 0x24) = param_2;
  return;
}



/* ---- FUN_10d8_2722 @ 10d8:2722  (24 octets) ---- */

void __stdcall16far FUN_10d8_2722(undefined4 param_1,undefined4 param_2)

{
  FUN_10d8_26f2((int)param_1,(int)((ulong)param_1 >> 0x10),0,(int)param_2,
                (int)((ulong)param_2 >> 0x10));
  return;
}



/* ---- FUN_10d8_273a @ 10d8:273a  (46 octets) ---- */

void __stdcall16far FUN_10d8_273a(undefined4 param_1,char param_2)

{
  int iVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  if (((*(char *)(iVar1 + 0x20) != param_2) && (*(char *)(iVar1 + 0x20) = param_2, param_2 == '\0'))
     && (*(int *)(iVar1 + 0x26) == 0)) {
    FUN_10d8_2023(iVar1,uVar2);
  }
  return;
}



/* ---- FUN_10d8_2768 @ 10d8:2768  (29 octets) ---- */

void __stdcall16far FUN_10d8_2768(undefined4 param_1)

{
  undefined2 *puVar1;
  
  puVar1 = (undefined2 *)((int)*(undefined4 *)*(undefined4 *)((int)param_1 + 0x34) + 8);
  (*(code *)*puVar1)();
  return;
}



/* ---- FUN_10d8_2785 @ 10d8:2785  (122 octets) ---- */

void __stdcall16far FUN_10d8_2785(undefined2 param_1,undefined2 param_2,char *param_3)

{
  undefined2 uVar1;
  undefined2 uVar2;
  undefined2 unaff_SS;
  char *local_e;
  undefined2 local_c;
  undefined local_a;
  long local_6;
  
  uVar2 = (undefined2)((ulong)param_3 >> 0x10);
  if (*param_3 != '\0') {
    local_6 = FUN_10d8_181f((int)DAT_1160_2ac6,(int)((ulong)DAT_1160_2ac6 >> 0x10),(char *)param_3,
                            uVar2);
    uVar1 = (undefined2)((ulong)local_6 >> 0x10);
    if ((local_6 != 0) && (local_6 != CONCAT22(param_2,param_1))) {
      if ((*(char *)((int)local_6 + 0x21) == '\0') || (*(int *)((int)local_6 + 0x26) != 0)) {
        local_a = 4;
        local_e = (char *)param_3;
        local_c = uVar2;
        FUN_10d8_120a(0,&local_e,unaff_SS,0xf200);
      }
      FUN_1158_1f7f(local_6);
    }
  }
  return;
}



/* ---- FUN_10d8_27ff @ 10d8:27ff  (152 octets) ---- */

undefined4 __stdcall16far
FUN_10d8_27ff(undefined4 param_1,char param_3,undefined2 param_4,undefined param_5,
             undefined2 param_6,undefined param_7,undefined4 param_8,undefined4 param_9)

{
  undefined2 in_AX;
  undefined uVar1;
  undefined extraout_AH;
  undefined4 uVar2;
  undefined2 uStack_a;
  
  uVar1 = (undefined)((uint)in_AX >> 8);
  if (param_3 != '\0') {
    FUN_1158_1fe2();
    uVar1 = extraout_AH;
  }
  FUN_10d8_1167(param_6,CONCAT11(uVar1,param_7));
  if ((int)param_9 != 0 || param_9._2_2_ != 0) {
    FUN_1148_0c2b((int)*(undefined4 *)((int)param_9 + 8),
                  (int)((ulong)*(undefined4 *)((int)param_9 + 8) >> 0x10),(int)param_1,param_1._2_2_
                 );
    *(undefined *)((int)param_9 + 0xc) = 0;
    *(int *)((int)param_1 + 4) = (int)param_9;
    *(int *)((int)param_1 + 6) = param_9._2_2_;
  }
  uVar2 = FUN_1150_05d7((int)param_8,(int)((ulong)param_8 >> 0x10));
  *(undefined2 *)((int)param_1 + 8) = (int)uVar2;
  *(undefined2 *)((int)param_1 + 10) = (int)((ulong)uVar2 >> 0x10);
  *(undefined *)((int)param_1 + 0xc) = param_7;
  *(undefined2 *)((int)param_1 + 0xe) = param_6;
  *(undefined *)((int)param_1 + 0xd) = param_5;
  *(undefined2 *)((int)param_1 + 0x10) = param_4;
  if (param_3 != '\0') {
    DAT_1160_1858 = uStack_a;
  }
  return param_1;
}



/* ---- FUN_10d8_2897 @ 10d8:2897  (80 octets) ---- */

void __stdcall16far FUN_10d8_2897(undefined4 param_1,char param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined2 uVar3;
  
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  iVar2 = (int)param_1;
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



/* ---- FUN_10d8_28f1 @ 10d8:28f1  (206 octets) ---- */

undefined4 __stdcall16far FUN_10d8_28f1(undefined4 param_1)

{
  undefined2 *puVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  long lVar5;
  undefined4 uVar6;
  undefined2 uStack_24;
  undefined *puStack_22;
  undefined2 uStack_20;
  undefined2 uStack_1e;
  undefined4 uStack_1c;
  
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  iVar2 = (int)param_1;
  uStack_1c._2_2_ = 0x28ff;
  lVar5 = FUN_10d8_29d3();
  if (lVar5 == 0) {
    uStack_1c._2_2_ = 0;
    uStack_1c._0_2_ = 0x10d8;
    uStack_1e = 0x2931;
    FUN_10d8_120a();
  }
  puVar1 = (undefined2 *)((int)lVar5 + 0x2c);
  uStack_1e = 0x10d8;
  uStack_20 = 0x2943;
  uStack_1c = lVar5;
  uVar6 = (*(code *)*puVar1)();
  uStack_1e = 0x10d8;
  uStack_20 = 0x28e7;
  uStack_24 = DAT_1160_1858;
  DAT_1160_1858 = &uStack_24;
  puStack_22 = &stack0xfffe;
  FUN_10d8_6f96(uVar6,(int)*(undefined4 *)(iVar2 + 8),
                (int)((ulong)*(undefined4 *)(iVar2 + 8) >> 0x10));
  FUN_10d8_70c6(uVar6,*(undefined2 *)(iVar2 + 0xe));
  *(undefined *)((int)uVar6 + 0x27) = *(undefined *)(iVar2 + 0xd);
  if (*(int *)(iVar2 + 4) != 0 || *(int *)(iVar2 + 6) != 0) {
    uVar4 = (undefined2)((ulong)*(undefined4 *)(iVar2 + 4) >> 0x10);
    iVar2 = (int)*(undefined4 *)(iVar2 + 4);
    FUN_10d8_6e0b(uVar6,*(undefined2 *)(iVar2 + 4),*(undefined2 *)(iVar2 + 6));
  }
  DAT_1160_1858 = (undefined2 *)uStack_24;
  return uVar6;
}



/* ---- FUN_10d8_29d3 @ 10d8:29d3  (41 octets) ---- */

undefined4 __stdcall16far FUN_10d8_29d3(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = *(char *)((int)param_1 + 0xc) * 4;
  return CONCAT22(*(undefined2 *)(iVar1 + 0xaf8),*(undefined2 *)(iVar1 + 0xaf6));
}



/* ---- FUN_10d8_29fc @ 10d8:29fc  (29 octets) ---- */

void __stdcall16far FUN_10d8_29fc(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)((int)param_1 + 8);
  FUN_1158_17e7(0xff,(int)param_2,(int)((ulong)param_2 >> 0x10),(int)uVar1,
                (int)((ulong)uVar1 >> 0x10));
  return;
}



/* ---- FUN_10d8_2a19 @ 10d8:2a19  (84 octets) ---- */

undefined4 __stdcall16far
FUN_10d8_2a19(undefined4 param_1,char param_2,undefined2 param_3,undefined2 param_4)

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



/* ---- FUN_10d8_2a6d @ 10d8:2a6d  (52 octets) ---- */

void __stdcall16far FUN_10d8_2a6d(undefined4 param_1,char param_2)

{
  int iVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  if (*(int *)(iVar1 + 8) != 0 || *(int *)(iVar1 + 10) != 0) {
    FUN_10d8_2ca4(iVar1,uVar2);
  }
  FUN_1158_1f7f((int)*(undefined4 *)(iVar1 + 8),(int)((ulong)*(undefined4 *)(iVar1 + 8) >> 0x10));
  if (param_2 != '\0') {
    FUN_1158_200f();
  }
  return;
}



/* ---- FUN_10d8_2aa1 @ 10d8:2aa1  (127 octets) ---- */

void __stdcall16far
FUN_10d8_2aa1(undefined4 param_1,undefined param_2,undefined2 param_3,undefined param_4,
             char *param_5)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined2 unaff_SS;
  char *local_a;
  undefined2 local_8;
  undefined local_6;
  
  if (*param_5 == '\0') {
    FUN_10d8_11ef(0xf224);
  }
  uVar4 = (undefined2)((ulong)param_5 >> 0x10);
  pcVar2 = (char *)param_5;
  uVar5 = (undefined2)((ulong)param_1 >> 0x10);
  iVar3 = (int)param_1;
  iVar1 = FUN_10d8_2d6f(iVar3,uVar5,pcVar2,uVar4);
  if (-1 < iVar1) {
    local_6 = 4;
    local_a = pcVar2;
    local_8 = uVar4;
    FUN_10d8_120a(0,&local_a,unaff_SS,0xf222);
  }
  iVar1 = *(int *)((int)*(undefined4 *)(iVar3 + 8) + 8) + 1;
  FUN_10d8_27ff(0x388,0x10d8,CONCAT11((char)((uint)iVar1 >> 8),1),iVar1,param_2,param_3,param_4,
                pcVar2,uVar4,iVar3,uVar5);
  return;
}



/* ---- FUN_10d8_2b44 @ 10d8:2b44  (352 octets) ---- */

void __stdcall16far
FUN_10d8_2b44(undefined4 param_1,undefined2 param_2,undefined param_3,undefined *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  undefined2 uVar7;
  undefined2 uVar8;
  undefined2 unaff_SS;
  undefined local_190 [256];
  undefined *local_90;
  undefined local_80 [36];
  undefined local_5c [32];
  int local_3c;
  int local_3a;
  char local_37;
  undefined local_36 [2];
  undefined local_34 [32];
  uint local_14;
  int local_12;
  int local_10;
  int local_e;
  int local_a;
  
  puVar5 = local_36;
  puVar4 = (undefined *)param_4;
  for (iVar3 = 0x34; iVar3 != 0; iVar3 = iVar3 + -1) {
    puVar2 = puVar5;
    puVar5 = puVar5 + 1;
    puVar1 = puVar4;
    puVar4 = puVar4 + 1;
    *puVar2 = *puVar1;
  }
  uVar7 = (undefined2)((ulong)param_1 >> 0x10);
  iVar3 = (int)param_1;
  uVar8 = (undefined2)((ulong)*(undefined4 *)(iVar3 + 4) >> 0x10);
  iVar6 = (int)*(undefined4 *)(iVar3 + 4);
  FUN_10d8_0f13(0x1f,local_5c,unaff_SS,local_34,unaff_SS,*(undefined2 *)(iVar6 + 0x56),
                *(undefined2 *)(iVar6 + 0x58));
  local_3c = 0;
  FUN_1158_17e7(0x23,local_80,unaff_SS,local_5c,unaff_SS);
  while (iVar6 = FUN_10d8_2d6f(iVar3,uVar7,local_80,unaff_SS), -1 < iVar6) {
    local_3c = local_3c + 1;
    puVar5 = local_190;
    local_90 = local_5c;
    uVar8 = unaff_SS;
    FUN_1150_1034(1,&local_90,unaff_SS,(undefined4 *)&DAT_1160_2b20,0x10d8);
    FUN_1158_17e7(0x23,local_80,unaff_SS,puVar5,uVar8);
  }
  if (local_14 < 0x11) {
    local_37 = *(char *)(local_14 + 0xb3a);
  }
  else {
    local_37 = '\0';
  }
  local_3a = 0;
  switch(local_14 - 1) {
  case 0:
  case 8:
  case 0xe:
    local_3a = local_10;
    break;
  case 2:
    local_3a = local_10;
    if (local_12 == 0x16) {
      local_37 = '\x0f';
    }
    else if (local_12 == 0x1a) {
      local_37 = '\x10';
    }
    break;
  case 4:
  case 0xb:
    if (local_a != 2) {
      local_37 = '\0';
    }
    break;
  case 6:
    if (local_12 == 0x15) {
      local_37 = '\a';
    }
    break;
  case 7:
    if (local_10 == 0x20) {
      local_3a = local_e;
    }
    else {
      local_37 = '\0';
    }
  }
  if (local_37 != '\0') {
    FUN_10d8_27ff(0x388,0x10d8,1,param_2,param_3,local_3a,local_37,local_80,unaff_SS,iVar3,uVar7);
  }
  return;
}



/* ---- FUN_10d8_2ca4 @ 10d8:2ca4  (48 octets) ---- */

void __stdcall16far FUN_10d8_2ca4(undefined4 param_1)

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



/* ---- FUN_10d8_2cd4 @ 10d8:2cd4  (93 octets) ---- */

undefined4 __stdcall16far FUN_10d8_2cd4(undefined4 param_1,undefined4 param_2)

{
  undefined2 uVar1;
  undefined2 uVar2;
  undefined2 unaff_SS;
  undefined4 uVar3;
  undefined2 local_10;
  undefined2 local_e;
  undefined local_c;
  int local_8;
  
  uVar1 = (undefined2)((ulong)param_2 >> 0x10);
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  local_8 = FUN_10d8_2d6f((int)param_1,uVar2,(int)param_2,uVar1);
  if (local_8 < 0) {
    local_c = 4;
    local_10 = (int)param_2;
    local_e = uVar1;
    FUN_10d8_120a(0,&local_10,unaff_SS,0xf208);
  }
  uVar3 = *(undefined4 *)((int)param_1 + 8);
  uVar3 = FUN_1148_0dd0((int)uVar3,(int)((ulong)uVar3 >> 0x10),local_8);
  return uVar3;
}



/* ---- FUN_10d8_2d31 @ 10d8:2d31  (25 octets) ---- */

undefined2 __stdcall16far FUN_10d8_2d31(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)((int)param_1 + 8);
  return *(undefined2 *)((int)uVar1 + 8);
}



/* ---- FUN_10d8_2d4a @ 10d8:2d4a  (37 octets) ---- */

undefined4 __stdcall16far FUN_10d8_2d4a(undefined4 param_1,undefined2 param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)((int)param_1 + 8);
  uVar1 = FUN_1148_0dd0((int)uVar1,(int)((ulong)uVar1 >> 0x10),param_2);
  return uVar1;
}



/* ---- FUN_10d8_2d6f @ 10d8:2d6f  (97 octets) ---- */

int __stdcall16far FUN_10d8_2d6f(undefined4 param_1,undefined4 param_2)

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
LAB_10d8_2dc4:
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
      if (local_4 == iVar1) goto LAB_10d8_2dc4;
      local_4 = local_4 + 1;
    }
  }
  return local_4;
}



/* ---- FUN_10d8_2dd0 @ 10d8:2dd0  (21 octets) ---- */

void __stdcall16far FUN_10d8_2dd0(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)((int)param_1 + 4);
  FUN_10d8_3a54((int)uVar1,(int)((ulong)uVar1 >> 0x10));
  return;
}



/* ---- FUN_10d8_2de5 @ 10d8:2de5  (181 octets) ---- */

undefined4 __stdcall16far
FUN_10d8_2de5(undefined4 param_1,char param_2,undefined2 param_3,undefined2 param_4)

{
  undefined2 uVar1;
  undefined extraout_AH;
  int iVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined4 uVar5;
  undefined2 uStack_a;
  
  if (param_2 != '\0') {
    FUN_1158_1fe2();
  }
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  iVar2 = (int)param_1;
  FUN_1148_4bd9(iVar2,uVar3,0,param_3,param_4);
  uVar5 = FUN_10d8_2a19(0x3b2,0x10d8,CONCAT11(extraout_AH,1),iVar2,uVar3);
  *(undefined2 *)(iVar2 + 0x22) = (int)uVar5;
  *(undefined2 *)(iVar2 + 0x24) = (int)((ulong)uVar5 >> 0x10);
  uVar5 = FUN_1158_1f50(0x2a3,0x1148,1);
  *(undefined2 *)(iVar2 + 0x1a) = (int)uVar5;
  *(undefined2 *)(iVar2 + 0x1c) = (int)((ulong)uVar5 >> 0x10);
  uVar5 = FUN_1158_1f50(0x2a3,0x1148,1);
  *(undefined2 *)(iVar2 + 0x1e) = (int)uVar5;
  *(undefined2 *)(iVar2 + 0x20) = (int)((ulong)uVar5 >> 0x10);
  *(undefined *)(iVar2 + 0x3b) = 1;
  FUN_10d8_45d2(iVar2,uVar3);
  uVar4 = (undefined2)((ulong)DAT_1160_2ac6 >> 0x10);
  uVar1 = *(undefined2 *)((int)DAT_1160_2ac6 + 0x20);
  *(undefined2 *)(iVar2 + 0x56) = *(undefined2 *)((int)DAT_1160_2ac6 + 0x1e);
  *(undefined2 *)(iVar2 + 0x58) = uVar1;
  if (param_2 != '\0') {
    DAT_1160_1858 = uStack_a;
  }
  return param_1;
}



/* ---- FUN_10d8_2e9a @ 10d8:2e9a  (159 octets) ---- */

void __stdcall16far FUN_10d8_2e9a(undefined4 param_1,char param_2)

{
  int iVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  FUN_1148_4ea5(iVar1,uVar2);
  FUN_10d8_31d2(iVar1,uVar2);
  FUN_1158_1f7f((int)*(undefined4 *)(iVar1 + 0x5a),
                (int)((ulong)*(undefined4 *)(iVar1 + 0x5a) >> 0x10));
  while (0 < *(int *)((int)*(undefined4 *)(iVar1 + 0x1e) + 8)) {
    uVar3 = FUN_1148_0f43((int)*(undefined4 *)(iVar1 + 0x1e),
                          (int)((ulong)*(undefined4 *)(iVar1 + 0x1e) >> 0x10));
    FUN_10d8_3e76(iVar1,uVar2,uVar3);
  }
  FUN_1158_1f7f((int)*(undefined4 *)(iVar1 + 0x1e),
                (int)((ulong)*(undefined4 *)(iVar1 + 0x1e) >> 0x10));
  FUN_10d8_376b(iVar1,uVar2);
  FUN_1158_1f7f((int)*(undefined4 *)(iVar1 + 0x1a),
                (int)((ulong)*(undefined4 *)(iVar1 + 0x1a) >> 0x10));
  FUN_1158_1f7f((int)*(undefined4 *)(iVar1 + 0x22),
                (int)((ulong)*(undefined4 *)(iVar1 + 0x22) >> 0x10));
  FUN_1148_4c2b(iVar1,uVar2,0);
  if (param_2 != '\0') {
    FUN_1158_200f();
  }
  return;
}



/* ---- FUN_10d8_30b6 @ 10d8:30b6  (111 octets) ---- */

void __stdcall16far FUN_10d8_30b6(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined2 uVar2;
  int iVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined4 uVar6;
  int local_4;
  
  uVar4 = (undefined2)((ulong)param_1 >> 0x10);
  uVar6 = *(undefined4 *)((int)param_1 + 0x1a);
  iVar1 = *(int *)((int)uVar6 + 8) + -1;
  if (-1 < iVar1) {
    local_4 = 0;
    while( true ) {
      uVar6 = *(undefined4 *)((int)param_1 + 0x1a);
      uVar6 = FUN_1148_0dd0((int)uVar6,(int)((ulong)uVar6 >> 0x10),local_4);
      uVar2 = (undefined2)((ulong)uVar6 >> 0x10);
      uVar5 = (undefined2)((ulong)param_2 >> 0x10);
      iVar3 = (int)param_2;
      if ((*(int *)((int)uVar6 + 6) == *(int *)(iVar3 + 0x14)) &&
         (*(int *)((int)uVar6 + 4) == *(int *)(iVar3 + 0x12))) {
        FUN_1148_432a(iVar3,uVar5,uVar6);
      }
      if (local_4 == iVar1) break;
      local_4 = local_4 + 1;
    }
  }
  return;
}



/* ---- FUN_10d8_3191 @ 10d8:3191  (46 octets) ---- */

void __stdcall16far FUN_10d8_3191(undefined4 *param_1,char param_2)

{
  undefined2 *puVar1;
  undefined4 *puVar2;
  undefined2 uVar3;
  
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  puVar2 = (undefined4 *)param_1;
  if (*(char *)((int)puVar2 + 0x3a) != param_2) {
    *(char *)((int)puVar2 + 0x3a) = param_2;
    *(undefined *)((int)puVar2 + 0x3e) = 0;
    puVar1 = (undefined2 *)((int)*param_1 + 0x38);
    (*(code *)*puVar1)();
  }
  return;
}



/* ---- FUN_10d8_31bf @ 10d8:31bf  (19 octets) ---- */

void __stdcall16far FUN_10d8_31bf(undefined4 param_1)

{
  FUN_10d8_3227((int)param_1,(int)((ulong)param_1 >> 0x10),1);
  return;
}



/* ---- FUN_10d8_31d2 @ 10d8:31d2  (19 octets) ---- */

void __stdcall16far FUN_10d8_31d2(undefined4 param_1)

{
  FUN_10d8_3227((int)param_1,(int)((ulong)param_1 >> 0x10),0);
  return;
}



/* ---- FUN_10d8_31e5 @ 10d8:31e5  (29 octets) ---- */

void __stdcall16far FUN_10d8_31e5(undefined4 param_1)

{
  char cVar1;
  
  cVar1 = FUN_10d8_3202((int)param_1,(int)((ulong)param_1 >> 0x10));
  if (cVar1 != '\0') {
    FUN_10d8_11ef(0xf204);
  }
  return;
}



/* ---- FUN_10d8_3202 @ 10d8:3202  (27 octets) ---- */

uint __stdcall16far FUN_10d8_3202(undefined4 param_1)

{
  uint in_AX;
  uint uVar1;
  
  uVar1 = in_AX & 0xff00;
  if (*(char *)((int)param_1 + 0x3a) != '\0') {
    uVar1 = uVar1 + 1;
  }
  return uVar1;
}



/* ---- FUN_10d8_3227 @ 10d8:3227  (194 octets) ---- */

void __stdcall16far FUN_10d8_3227(undefined4 *param_1,char param_2)

{
  undefined2 *puVar1;
  char cVar2;
  undefined4 *puVar3;
  undefined2 uVar4;
  undefined4 *puVar5;
  undefined4 *puStack_10;
  undefined *puStack_e;
  undefined4 *puStack_c;
  
  uVar4 = (undefined2)((ulong)param_1 >> 0x10);
  puVar3 = (undefined4 *)param_1;
  if ((*(byte *)(puVar3 + 6) & 2) == 0) {
    puStack_c = (undefined4 *)0x324f;
    cVar2 = FUN_10d8_3202();
    if (cVar2 != param_2) {
      if (param_2 == '\0') {
        if ((*(byte *)(puVar3 + 6) & 8) == 0) {
          puVar1 = (undefined2 *)((int)*param_1 + 0x5c);
          puStack_c = (undefined4 *)0x32dc;
          (*(code *)*puVar1)();
        }
        puStack_c = (undefined4 *)0x10d8;
        puStack_e = (undefined *)0x32e8;
        FUN_10d8_3191();
        puVar1 = (undefined2 *)((int)*param_1 + 0x30);
        puStack_c = (undefined4 *)0x32f4;
        (*(code *)*puVar1)();
        if ((*(byte *)(puVar3 + 6) & 8) == 0) {
          puVar1 = (undefined2 *)((int)*param_1 + 0x40);
          puStack_e = (undefined *)0x10d8;
          puStack_10 = (undefined4 *)0x3307;
          puStack_c = puVar3;
          (*(code *)*puVar1)();
        }
      }
      else {
        puVar1 = (undefined2 *)((int)*param_1 + 0x6c);
        puStack_c = (undefined4 *)0x3269;
        (*(code *)*puVar1)();
        puStack_c = (undefined4 *)0x321d;
        puStack_10 = (undefined4 *)DAT_1160_1858;
        puVar1 = (undefined2 *)((int)*param_1 + 0x84);
        DAT_1160_1858 = &puStack_10;
        puVar5 = puVar3;
        puStack_e = &stack0xfffe;
        (*(code *)*puVar1)(0x10d8,puVar3,uVar4);
        FUN_10d8_3191(puVar3,uVar4,1);
        DAT_1160_1858 = (undefined4 **)puVar5;
        puVar1 = (undefined2 *)((int)*param_1 + 0x50);
        puStack_10 = puVar3;
        puStack_e = (undefined *)uVar4;
        (*(code *)*puVar1)(0x10d8);
      }
    }
  }
  else if (param_2 != '\0') {
    *(char *)((int)puVar3 + 0x3f) = param_2;
  }
  return;
}



/* ---- FUN_10d8_330b @ 10d8:330b  (101 octets) ---- */

void __stdcall16far FUN_10d8_330b(undefined4 *param_1)

{
  undefined2 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined2 uVar4;
  undefined2 unaff_CS;
  undefined4 uVar5;
  undefined2 local_6;
  undefined2 local_4;
  
  uVar4 = (undefined2)((ulong)param_1 >> 0x10);
  puVar3 = (undefined4 *)param_1;
  puVar1 = (undefined2 *)((int)*param_1 + 0x34);
  uVar5 = (*(code *)*puVar1)();
  *(int *)(puVar3 + 0xd) = (int)uVar5;
  *(undefined2 *)((int)puVar3 + 0x36) = (int)((ulong)uVar5 >> 0x10);
  if (*(int *)(puVar3 + 0xd) == 0 && *(int *)((int)puVar3 + 0x36) == 0) {
    unaff_CS = 0x10d8;
    FUN_10d8_11ef(0xf206);
  }
  iVar2 = FUN_10e8_09ad(unaff_CS,&local_6);
  if (iVar2 == 0) {
    *(undefined2 *)((int)puVar3 + 0x56) = local_6;
    *(undefined2 *)(puVar3 + 0x16) = local_4;
  }
  FUN_10d8_33d6(puVar3,uVar4);
  return;
}



/* ---- FUN_10d8_3370 @ 10d8:3370  (74 octets) ---- */

void __stdcall16far FUN_10d8_3370(undefined4 param_1)

{
  undefined2 uVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  iVar2 = (int)param_1;
  FUN_10d8_3624(iVar2,uVar3);
  uVar4 = (undefined2)((ulong)DAT_1160_2ac6 >> 0x10);
  uVar1 = *(undefined2 *)((int)DAT_1160_2ac6 + 0x20);
  *(undefined2 *)(iVar2 + 0x56) = *(undefined2 *)((int)DAT_1160_2ac6 + 0x1e);
  *(undefined2 *)(iVar2 + 0x58) = uVar1;
  if (*(int *)(iVar2 + 0x34) != 0 || *(int *)(iVar2 + 0x36) != 0) {
    FUN_10e8_00ad(0x10d8,iVar2 + 0x34,uVar3);
    *(undefined2 *)(iVar2 + 0x34) = 0;
    *(undefined2 *)(iVar2 + 0x36) = 0;
  }
  return;
}



/* ---- FUN_10d8_33ba @ 10d8:33ba  (22 octets) ---- */

undefined4 __stdcall16far FUN_10d8_33ba(void)

{
  return 0;
}



/* ---- FUN_10d8_33d6 @ 10d8:33d6  (374 octets) ---- */

void __cdecl16far FUN_10d8_33d6(undefined4 param_1)

{
  undefined uVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined2 uVar9;
  undefined2 uVar10;
  undefined2 uVar11;
  undefined2 unaff_SS;
  undefined local_556 [2];
  int local_554;
  int local_54e;
  int local_a6;
  undefined2 local_a2;
  int local_9c;
  undefined2 local_98;
  int local_94;
  int local_4c;
  byte local_2a [32];
  undefined4 local_a;
  int local_6;
  
  uVar9 = (undefined2)((ulong)param_1 >> 0x10);
  iVar7 = (int)param_1;
  FUN_10e8_007d();
  *(undefined2 *)(iVar7 + 0x46) = local_a2;
  *(undefined2 *)(iVar7 + 0x48) = local_98;
  if ((local_94 == 0) && (local_4c == 0)) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  *(undefined *)(iVar7 + 0x3d) = uVar1;
  FUN_1158_1a0e();
  FUN_1158_1a79(0x20);
  if (0 < local_9c) {
    local_6 = 1;
    uVar10 = 0x1158;
    while( true ) {
      uVar11 = 0x10e8;
      FUN_10e8_234d(uVar10,local_556);
      if ((local_554 != 0) && (local_54e == 0)) {
        iVar5 = 0x20;
        uVar11 = 0x1158;
        bVar2 = FUN_1158_1a99();
        local_2a[iVar5] = local_2a[iVar5] | bVar2;
      }
      if (local_6 == local_9c) break;
      local_6 = local_6 + 1;
      uVar10 = uVar11;
    }
  }
  local_a = FUN_1150_0476();
  uVar10 = (undefined2)local_a;
  DAT_1160_1858 = &stack0xfa7a;
  FUN_10e8_009d(0x1150,local_a,*(undefined2 *)(iVar7 + 0x34),*(undefined2 *)(iVar7 + 0x36));
  FUN_10d8_2ca4((int)*(undefined4 *)(iVar7 + 0x22),
                (int)((ulong)*(undefined4 *)(iVar7 + 0x22) >> 0x10));
  iVar5 = local_a6 + -1;
  if (-1 < iVar5) {
    local_6 = 0;
    while( true ) {
      uVar11 = (undefined2)((ulong)local_a >> 0x10);
      iVar8 = (int)local_a + local_6 * 0x34;
      iVar6 = 0x20;
      uVar3 = FUN_1158_1a99(iVar8,uVar11);
      uVar4 = uVar3 & 0xff00;
      if ((local_2a[iVar6] & (byte)uVar3) != 0) {
        uVar4 = uVar4 + 1;
      }
      FUN_10d8_2b44((int)*(undefined4 *)(iVar7 + 0x22),
                    (int)((ulong)*(undefined4 *)(iVar7 + 0x22) >> 0x10),local_6 + 1,uVar4,iVar8,
                    uVar11);
      if (local_6 == iVar5) break;
      local_6 = local_6 + 1;
    }
  }
  DAT_1160_1858 = (undefined *)uVar10;
  FUN_1158_019c(local_a6 * 0x34,(undefined2)local_a,local_a._2_2_);
  return;
}



/* ---- FUN_10d8_3624 @ 10d8:3624  (154 octets) ---- */

void __stdcall16far FUN_10d8_3624(undefined4 param_1)

{
  int iVar1;
  undefined2 uVar2;
  char local_3;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  if (*(char *)(iVar1 + 0x40) == '\0') {
    FUN_10d8_3a08(iVar1,uVar2);
    FUN_10d8_3ebc(iVar1,uVar2,0);
    *(undefined2 *)(iVar1 + 0x2c) = 0;
    FUN_10d8_45d2(iVar1,uVar2);
    for (local_3 = '\0'; FUN_10d8_0e6f(*(int *)(iVar1 + 0x46) + 4,iVar1 + local_3 * 4 + 0x5e,uVar2),
        local_3 != '\x05'; local_3 = local_3 + '\x01') {
    }
    FUN_10d8_37b1(iVar1,uVar2,0);
    if (*(char *)(iVar1 + 0x3c) != '\0') {
      FUN_10d8_376b(iVar1,uVar2);
    }
    *(undefined *)(iVar1 + 0x3c) = 0;
    *(undefined2 *)(iVar1 + 0x7e) = 0;
  }
  *(undefined *)(iVar1 + 0x3d) = 0;
  return;
}



/* ---- FUN_10d8_36be @ 10d8:36be  (76 octets) ---- */

void __stdcall16far FUN_10d8_36be(undefined4 param_1)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 unaff_SS;
  int local_20e;
  undefined2 local_20a;
  undefined local_202 [512];
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = FUN_10e8_076d();
  if ((iVar1 == 0) && (local_20e == 0)) {
    *(undefined2 *)((int)param_1 + 0x7e) = local_20a;
    FUN_1158_161b(0x20,(int)param_1 + 0x80,uVar2,local_202,unaff_SS);
  }
  return;
}



/* ---- FUN_10d8_370a @ 10d8:370a  (7 octets) ---- */

void __stdcall16far FUN_10d8_370a(void)

{
  return;
}



/* ---- FUN_10d8_3711 @ 10d8:3711  (90 octets) ---- */

void __stdcall16far FUN_10d8_3711(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  int local_4;
  
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  iVar2 = (int)param_1;
  iVar1 = FUN_10d8_2d31((int)*(undefined4 *)(iVar2 + 0x22),
                        (int)((ulong)*(undefined4 *)(iVar2 + 0x22) >> 0x10));
  if (-1 < iVar1 + -1) {
    local_4 = 0;
    while( true ) {
      uVar4 = FUN_10d8_2d4a((int)*(undefined4 *)(iVar2 + 0x22),
                            (int)((ulong)*(undefined4 *)(iVar2 + 0x22) >> 0x10),local_4);
      if (*(char *)((int)uVar4 + 0xc) != '\0') {
        FUN_10d8_28f1(uVar4,iVar2,uVar3);
      }
      if (local_4 == iVar1 + -1) break;
      local_4 = local_4 + 1;
    }
  }
  return;
}



/* ---- FUN_10d8_376b @ 10d8:376b  (70 octets) ---- */

void __stdcall16far FUN_10d8_376b(undefined4 param_1)

{
  int iVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  
  while (uVar2 = (undefined2)((ulong)param_1 >> 0x10), iVar1 = (int)param_1,
        0 < *(int *)((int)*(undefined4 *)(iVar1 + 0x1a) + 8)) {
    uVar3 = FUN_1148_0f43((int)*(undefined4 *)(iVar1 + 0x1a),
                          (int)((ulong)*(undefined4 *)(iVar1 + 0x1a) >> 0x10));
    FUN_10d8_3b0a(iVar1,uVar2,uVar3);
    FUN_1158_1f7f(uVar3);
  }
  return;
}



/* ---- FUN_10d8_37b1 @ 10d8:37b1  (347 octets) ---- */

void __stdcall16far FUN_10d8_37b1(undefined4 param_1,char param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined2 unaff_SS;
  undefined4 uVar6;
  undefined2 uVar7;
  undefined4 local_16;
  undefined local_12;
  undefined4 local_e;
  int local_a;
  undefined4 local_8;
  int local_4;
  
  uVar4 = (undefined2)((ulong)param_1 >> 0x10);
  iVar2 = (int)param_1;
  *(undefined2 *)(iVar2 + 0x4c) = 0;
  local_a = *(int *)((int)*(undefined4 *)(iVar2 + 0x1a) + 8) + -1;
  if (-1 < local_a) {
    local_4 = 0;
    while( true ) {
      local_e = FUN_1148_0dd0((int)*(undefined4 *)(iVar2 + 0x1a),
                              (int)((ulong)*(undefined4 *)(iVar2 + 0x1a) >> 0x10),local_4);
      uVar7 = (undefined2)((ulong)local_e >> 0x10);
      iVar3 = (int)local_e;
      if (param_2 == '\0') {
        *(undefined2 *)(iVar3 + 0x2e) = 0;
      }
      else if (*(char *)(iVar3 + 0x24) == '\0') {
        local_8 = FUN_10d8_2cd4((int)*(undefined4 *)(iVar2 + 0x22),
                                (int)((ulong)*(undefined4 *)(iVar2 + 0x22) >> 0x10),
                                (int)*(undefined4 *)(iVar3 + 0x1e),
                                (int)((ulong)*(undefined4 *)(iVar3 + 0x1e) >> 0x10));
        uVar7 = (undefined2)((ulong)local_8 >> 0x10);
        uVar5 = (undefined2)((ulong)local_e >> 0x10);
        iVar3 = (int)local_e;
        if ((*(char *)(*(char *)(iVar3 + 0x22) + 0xb4c) !=
             *(char *)(*(char *)((int)local_8 + 0xc) + 0xb4c)) ||
           (*(int *)(iVar3 + 0x2a) != *(int *)((int)local_8 + 0xe))) {
          uVar7 = 0xf20b;
          uVar6 = FUN_10d8_67f6(iVar3,uVar5);
          local_12 = 4;
          local_16 = uVar6;
          FUN_10d8_120a(0,&local_16,unaff_SS,uVar7);
        }
        *(undefined2 *)((int)local_e + 0x2e) = *(undefined2 *)((int)local_8 + 0x10);
      }
      else {
        bVar1 = *(byte *)(iVar3 + 0x22);
        if ((bVar1 == 0) || ((7 < bVar1 && ((bVar1 < 9 || (0xb < bVar1)))))) {
          uVar7 = 0xf21d;
          uVar6 = FUN_10d8_67f6(local_e);
          local_12 = 4;
          local_16 = uVar6;
          FUN_10d8_120a(0,&local_16,unaff_SS,uVar7);
        }
        uVar7 = (undefined2)((ulong)local_e >> 0x10);
        iVar3 = (int)local_e;
        *(undefined2 *)(iVar3 + 0x2e) = 0xffff;
        *(undefined2 *)(iVar3 + 0x30) = *(undefined2 *)(iVar2 + 0x4c);
        *(int *)(iVar2 + 0x4c) = *(int *)(iVar2 + 0x4c) + *(int *)(iVar3 + 0x2c) + 1;
      }
      if (local_4 == local_a) break;
      local_4 = local_4 + 1;
    }
  }
  return;
}



/* ---- FUN_10d8_3916 @ 10d8:3916  (208 octets) ---- */

void __stdcall16far
FUN_10d8_3916(undefined4 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uStack_142;
  undefined *puStack_140;
  int iStack_13e;
  undefined2 uStack_13c;
  undefined *puStack_13a;
  undefined local_122 [176];
  undefined2 local_72;
  int local_4;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  FUN_10d8_483b();
  local_4 = FUN_10e8_075d();
  if (local_4 == 0x2205) {
    puStack_13a = (undefined *)param_4;
    uStack_13c = param_3;
    iStack_13e = param_2;
    puStack_140 = (undefined *)0x0;
    uStack_142 = 0;
    local_4 = FUN_10e8_075d(0x10e8);
  }
  FUN_10d8_124e();
  puStack_13a = (undefined *)0x10d8;
  uStack_13c = 0x3981;
  FUN_10d8_3ebc();
  *(undefined2 *)(iVar1 + 0x7e) = 0;
  puStack_13a = local_122;
  uStack_13c = 0x10d8;
  iStack_13e = 0x399d;
  FUN_10e8_007d();
  *(undefined2 *)(iVar1 + 0x48) = local_72;
  *(int *)(iVar1 + 0x4e) = *(int *)(iVar1 + 0x4a) + 1 + *(int *)(iVar1 + 0x48);
  uStack_13c = 0x10e8;
  iStack_13e = 0x390c;
  uStack_142 = DAT_1160_1858;
  DAT_1160_1858 = &uStack_142;
  puStack_140 = &stack0xfffe;
  FUN_10d8_3ebc(iVar1,uVar2,*(int *)(iVar1 + 0x2c) + 1);
  DAT_1160_1858 = (undefined2 *)uStack_142;
  puStack_140 = (undefined *)0x10d8;
  uStack_142 = 0x3a04;
  iStack_13e = iVar1;
  uStack_13c = uVar2;
  FUN_10d8_36be();
  return;
}



/* ---- FUN_10d8_3a08 @ 10d8:3a08  (76 octets) ---- */

void __stdcall16far FUN_10d8_3a08(undefined4 param_1)

{
  undefined2 *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined2 uVar4;
  undefined4 *puVar5;
  int local_4;
  
  uVar4 = (undefined2)((ulong)param_1 >> 0x10);
  uVar2 = *(undefined4 *)((int)param_1 + 0x1a);
  iVar3 = *(int *)((int)uVar2 + 8) + -1;
  if (-1 < iVar3) {
    local_4 = 0;
    while( true ) {
      uVar2 = *(undefined4 *)((int)param_1 + 0x1a);
      puVar5 = (undefined4 *)FUN_1148_0dd0((int)uVar2,(int)((ulong)uVar2 >> 0x10),local_4);
      puVar1 = (undefined2 *)((int)*puVar5 + 0x34);
      (*(code *)*puVar1)(0x1148,puVar5);
      if (local_4 == iVar3) break;
      local_4 = local_4 + 1;
    }
  }
  return;
}



/* ---- FUN_10d8_3a54 @ 10d8:3a54  (46 octets) ---- */

void __stdcall16far FUN_10d8_3a54(undefined4 *param_1)

{
  undefined2 *puVar1;
  undefined4 uVar2;
  undefined2 uVar3;
  
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  uVar2 = *(undefined4 *)((int)(undefined4 *)param_1 + 0x22);
  if (*(char *)((int)uVar2 + 0xc) == '\0') {
    puVar1 = (undefined2 *)((int)*param_1 + 0x80);
    (*(code *)*puVar1)();
    uVar2 = *(undefined4 *)((int)(undefined4 *)param_1 + 0x22);
    *(undefined *)((int)uVar2 + 0xc) = 1;
  }
  return;
}



/* ---- FUN_10d8_3ade @ 10d8:3ade  (44 octets) ---- */

void __stdcall16far FUN_10d8_3ade(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  uVar1 = *(undefined4 *)((int)param_1 + 0x1a);
  FUN_1148_0c2b((int)uVar1,(int)((ulong)uVar1 >> 0x10),(int)param_2,param_2._2_2_);
  *(int *)((int)param_2 + 0x1a) = (int)param_1;
  *(undefined2 *)((int)param_2 + 0x1c) = uVar2;
  return;
}



/* ---- FUN_10d8_3b0a @ 10d8:3b0a  (40 octets) ---- */

void __stdcall16far FUN_10d8_3b0a(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined2 uVar3;
  
  uVar3 = (undefined2)((ulong)param_2 >> 0x10);
  iVar2 = (int)param_2;
  *(undefined2 *)(iVar2 + 0x1a) = 0;
  *(undefined2 *)(iVar2 + 0x1c) = 0;
  uVar1 = *(undefined4 *)((int)param_1 + 0x1a);
  FUN_1148_0fa7((int)uVar1,(int)((ulong)uVar1 >> 0x10),iVar2,uVar3);
  return;
}



/* ---- FUN_10d8_3b32 @ 10d8:3b32  (25 octets) ---- */

undefined2 __stdcall16far FUN_10d8_3b32(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)((int)param_1 + 0x1a);
  return *(undefined2 *)((int)uVar1 + 8);
}



/* ---- FUN_10d8_3b4b @ 10d8:3b4b  (37 octets) ---- */

undefined4 __stdcall16far FUN_10d8_3b4b(undefined4 param_1,undefined2 param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)((int)param_1 + 0x1a);
  uVar1 = FUN_1148_0dd0((int)uVar1,(int)((ulong)uVar1 >> 0x10),param_2);
  return uVar1;
}



/* ---- FUN_10d8_3b70 @ 10d8:3b70  (43 octets) ---- */

void __stdcall16far
FUN_10d8_3b70(undefined4 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4)

{
  undefined2 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  
  uVar2 = *(undefined4 *)((int)param_1 + 0x1a);
  puVar3 = (undefined4 *)FUN_1148_0dd0((int)uVar2,(int)((ulong)uVar2 >> 0x10),param_4);
  puVar1 = (undefined2 *)((int)*puVar3 + 8);
  (*(code *)*puVar1)(0x1148,puVar3,param_2,param_3);
  return;
}



/* ---- FUN_10d8_3b9b @ 10d8:3b9b  (75 octets) ---- */

long __stdcall16far FUN_10d8_3b9b(undefined4 param_1,undefined4 param_2)

{
  undefined2 uVar1;
  undefined2 unaff_SS;
  undefined2 local_e;
  undefined2 local_c;
  undefined local_a;
  long local_6;
  
  uVar1 = (undefined2)((ulong)param_2 >> 0x10);
  local_6 = FUN_10d8_3c43((int)param_1,(int)((ulong)param_1 >> 0x10),(int)param_2,uVar1);
  if (local_6 == 0) {
    local_a = 4;
    local_e = (int)param_2;
    local_c = uVar1;
    FUN_10d8_120a(0,&local_e,unaff_SS,0xf208);
  }
  return local_6;
}



/* ---- FUN_10d8_3be6 @ 10d8:3be6  (93 octets) ---- */

undefined4 __stdcall16far FUN_10d8_3be6(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  int local_8;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  uVar3 = *(undefined4 *)((int)param_1 + 0x1a);
  iVar1 = *(int *)((int)uVar3 + 8) + -1;
  if (iVar1 < 0) {
LAB_10d8_3c31:
    uVar3 = 0;
  }
  else {
    local_8 = 0;
    while (uVar3 = FUN_10d8_3b4b((int)param_1,uVar2,local_8), *(int *)((int)uVar3 + 0x2e) != param_2
          ) {
      if (local_8 == iVar1) goto LAB_10d8_3c31;
      local_8 = local_8 + 1;
    }
  }
  return uVar3;
}



/* ---- FUN_10d8_3c43 @ 10d8:3c43  (108 octets) ---- */

undefined4 __stdcall16far FUN_10d8_3c43(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined2 uVar4;
  undefined4 uVar5;
  int local_8;
  
  uVar4 = (undefined2)((ulong)param_1 >> 0x10);
  uVar1 = *(undefined4 *)((int)param_1 + 0x1a);
  iVar2 = *(int *)((int)uVar1 + 8) + -1;
  if (iVar2 < 0) {
LAB_10d8_3c9d:
    uVar5 = 0;
  }
  else {
    local_8 = 0;
    while( true ) {
      uVar1 = *(undefined4 *)((int)param_1 + 0x1a);
      uVar5 = FUN_1148_0dd0((int)uVar1,(int)((ulong)uVar1 >> 0x10),local_8);
      uVar1 = *(undefined4 *)((int)uVar5 + 0x1e);
      iVar3 = FUN_1150_07ed((int)param_2,(int)((ulong)param_2 >> 0x10),(int)uVar1,
                            (int)((ulong)uVar1 >> 0x10));
      if (iVar3 == 0) break;
      if (local_8 == iVar2) goto LAB_10d8_3c9d;
      local_8 = local_8 + 1;
    }
  }
  return uVar5;
}



/* ---- FUN_10d8_3caf @ 10d8:3caf  (76 octets) ---- */

void __stdcall16far FUN_10d8_3caf(undefined4 param_1,char *param_2)

{
  undefined2 uVar1;
  undefined2 unaff_SS;
  long lVar2;
  char *local_a;
  undefined2 local_8;
  undefined local_6;
  
  if (*param_2 == '\0') {
    FUN_10d8_11ef(0xf224);
  }
  uVar1 = (undefined2)((ulong)param_2 >> 0x10);
  lVar2 = FUN_10d8_3c43((int)param_1,(int)((ulong)param_1 >> 0x10),(char *)param_2,uVar1);
  if (lVar2 != 0) {
    local_6 = 4;
    local_a = (char *)param_2;
    local_8 = uVar1;
    FUN_10d8_120a(0,&local_a,unaff_SS,0xf222);
  }
  return;
}



/* ---- FUN_10d8_3cfb @ 10d8:3cfb  (141 octets) ---- */

long __stdcall16far FUN_10d8_3cfb(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 unaff_SS;
  undefined4 uVar3;
  undefined2 uVar4;
  undefined2 local_10;
  undefined2 local_e;
  undefined local_c;
  int local_8;
  long local_6;
  
  iVar1 = (int)param_1;
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  if ((param_2 < 0) || (*(int *)(iVar1 + 0x7e) <= param_2)) {
    FUN_10d8_11ef(0xf220);
  }
  local_8 = *(int *)(iVar1 + param_2 * 2 + 0x80);
  local_6 = FUN_10d8_3be6(iVar1,uVar2,local_8);
  if (local_6 == 0) {
    uVar4 = 0xf221;
    uVar3 = FUN_10d8_2d4a((int)*(undefined4 *)(iVar1 + 0x22),
                          (int)((ulong)*(undefined4 *)(iVar1 + 0x22) >> 0x10),local_8 + -1);
    uVar3 = *(undefined4 *)((int)uVar3 + 8);
    local_e = (undefined2)((ulong)uVar3 >> 0x10);
    local_10 = (undefined2)uVar3;
    local_c = 4;
    FUN_10d8_120a(0,&local_10,unaff_SS,uVar4);
  }
  return local_6;
}



/* ---- FUN_10d8_3d88 @ 10d8:3d88  (39 octets) ---- */

void __stdcall16far
FUN_10d8_3d88(undefined4 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4)

{
  undefined2 *puVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)FUN_10d8_3cfb((int)param_1,(int)((ulong)param_1 >> 0x10),param_4);
  puVar1 = (undefined2 *)((int)*puVar2 + 8);
  (*(code *)*puVar1)(0x10d8,puVar2,param_2,param_3);
  return;
}



/* ---- FUN_10d8_3daf @ 10d8:3daf  (21 octets) ---- */

undefined2 __stdcall16far FUN_10d8_3daf(undefined4 param_1)

{
  return *(undefined2 *)((int)param_1 + 0x7e);
}



/* ---- FUN_10d8_3dc4 @ 10d8:3dc4  (22 octets) ---- */

undefined4 __stdcall16far FUN_10d8_3dc4(void)

{
  return 0;
}



/* ---- FUN_10d8_3dda @ 10d8:3dda  (92 octets) ---- */

undefined2 __stdcall16far FUN_10d8_3dda(undefined4 *param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined2 *puVar2;
  undefined4 *puVar3;
  undefined4 local_8;
  undefined local_3;
  
  local_3 = 1;
  do {
    puVar3 = (undefined4 *)((uint)param_3 | param_3._2_2_);
    if (puVar3 == (undefined4 *)0x0) {
LAB_10d8_3e2b:
      local_3 = 0;
LAB_10d8_3e2f:
      return CONCAT11((char)((uint)puVar3 >> 8),local_3);
    }
    puVar3 = (undefined4 *)*(int *)((uint)param_3 + 0x1a);
    iVar1 = *(int *)((uint)param_3 + 0x1c);
    local_8 = (undefined4 *)CONCAT22(iVar1,puVar3);
    if (puVar3 == (undefined4 *)0x0 && iVar1 == 0) {
      puVar3 = (undefined4 *)0x0;
      goto LAB_10d8_3e2b;
    }
    if ((iVar1 == param_2) && (puVar3 == param_1)) goto LAB_10d8_3e2f;
    puVar2 = (undefined2 *)((int)*local_8 + 0x7c);
    param_3 = (*(code *)*puVar2)();
  } while( true );
}



/* ---- FUN_10d8_3e36 @ 10d8:3e36  (64 octets) ---- */

void __stdcall16far FUN_10d8_3e36(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  FUN_1148_0c2b((int)*(undefined4 *)(iVar1 + 0x1e),
                (int)((ulong)*(undefined4 *)(iVar1 + 0x1e) >> 0x10),(int)param_2,param_2._2_2_);
  *(int *)((int)param_2 + 0x1a) = iVar1;
  *(undefined2 *)((int)param_2 + 0x1c) = uVar2;
  FUN_10d8_41b5(iVar1,uVar2);
  FUN_10d8_732d((int)param_2,param_2._2_2_);
  return;
}



/* ---- FUN_10d8_3e76 @ 10d8:3e76  (60 octets) ---- */

void __stdcall16far FUN_10d8_3e76(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  
  uVar3 = (undefined2)((ulong)param_2 >> 0x10);
  iVar2 = (int)param_2;
  *(undefined2 *)(iVar2 + 0x1a) = 0;
  *(undefined2 *)(iVar2 + 0x1c) = 0;
  uVar4 = (undefined2)((ulong)param_1 >> 0x10);
  uVar1 = *(undefined4 *)((int)param_1 + 0x1e);
  FUN_1148_0fa7((int)uVar1,(int)((ulong)uVar1 >> 0x10),iVar2,uVar3);
  FUN_10d8_732d(iVar2,uVar3);
  FUN_10d8_41b5((int)param_1,uVar4);
  return;
}



/* ---- FUN_10d8_3ebc @ 10d8:3ebc  (331 octets) ---- */

void __stdcall16far FUN_10d8_3ebc(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined2 uVar3;
  int iVar4;
  undefined2 *puVar5;
  undefined2 uVar6;
  undefined4 uVar7;
  undefined4 uStack_12;
  int local_4;
  
  uVar6 = (undefined2)((ulong)param_1 >> 0x10);
  iVar4 = (int)param_1;
  if (*(int *)(iVar4 + 0x2a) != param_2) {
    uStack_12._2_2_ = (undefined *)0x3edb;
    uStack_12 = FUN_1158_0182();
    uVar3 = (undefined2)((ulong)uStack_12 >> 0x10);
    iVar1 = (int)uStack_12;
    if (param_2 < *(int *)(iVar4 + 0x2a)) {
      if (param_2 != 0) {
        FUN_1158_1ec1(param_2 << 2);
      }
      iVar2 = *(int *)(iVar4 + 0x2a) + -1;
      if (param_2 <= iVar2) {
        local_4 = param_2;
        while( true ) {
          uStack_12._2_2_ = (undefined *)*(undefined2 *)(iVar4 + 0x4e);
          uStack_12._0_2_ = 0x1158;
          FUN_1158_019c();
          if (local_4 == iVar2) break;
          local_4 = local_4 + 1;
        }
      }
    }
    else {
      if (*(int *)(iVar4 + 0x2a) != 0) {
        FUN_1158_1ec1(*(int *)(iVar4 + 0x2a) << 2);
      }
      uStack_12._0_2_ = DAT_1160_1858;
      local_4 = *(int *)(iVar4 + 0x2a);
      DAT_1160_1858 = &uStack_12;
      uStack_12._2_2_ = &stack0xfffe;
      if (local_4 <= param_2 + -1) {
        while( true ) {
          uVar7 = FUN_1158_0182(*(undefined2 *)(iVar4 + 0x4e));
          puVar5 = (undefined2 *)(iVar1 + local_4 * 4);
          *puVar5 = (int)uVar7;
          puVar5[1] = (int)((ulong)uVar7 >> 0x10);
          if (local_4 == param_2 + -1) break;
          local_4 = local_4 + 1;
        }
      }
      DAT_1160_1858 = (undefined4 *)(undefined2)uStack_12;
    }
    uStack_12._2_2_ = (undefined *)(*(int *)(iVar4 + 0x2a) << 2);
    uStack_12._0_2_ = 0x1158;
    FUN_1158_019c();
    *(int *)(iVar4 + 0x26) = iVar1;
    *(undefined2 *)(iVar4 + 0x28) = uVar3;
    *(int *)(iVar4 + 0x2a) = param_2;
  }
  return;
}



/* ---- FUN_10d8_4064 @ 10d8:4064  (72 octets) ---- */

void FUN_10d8_4064(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 unaff_SS;
  undefined2 local_6;
  undefined2 local_4;
  
  if (param_2 != 0) {
    uVar3 = (undefined2)((ulong)*(undefined4 *)(param_1 + 6) >> 0x10);
    iVar2 = (int)*(undefined4 *)(param_1 + 6);
    local_4 = *(int *)(iVar2 + 0x54);
    local_6 = *(int *)(iVar2 + 0x52);
    while (local_6 != 0 || local_4 != 0) {
      *(int *)(local_6 + 0xe) = *(int *)(local_6 + 0xe) + param_2;
      piVar1 = (int *)(local_6 + 8);
      local_4 = *(int *)(local_6 + 10);
      local_6 = *piVar1;
    }
  }
  return;
}



/* ---- FUN_10d8_40ac @ 10d8:40ac  (265 octets) ---- */

void __stdcall16far FUN_10d8_40ac(undefined4 param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  undefined2 uVar3;
  int local_a;
  int local_8;
  int local_6;
  int local_4;
  
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  iVar2 = (int)param_1;
  if (*(int *)(iVar2 + 0x2c) != param_2) {
    if ((param_2 < *(int *)(iVar2 + 0x2c)) && (0 < *(int *)(iVar2 + 0x2e))) {
      local_6 = *(int *)(iVar2 + 0x30);
      local_8 = *(int *)(iVar2 + 0x54);
      local_a = *(int *)(iVar2 + 0x52);
      while (local_a != 0 || local_8 != 0) {
        if (*(int *)(local_a + 0xe) < local_6) {
          local_6 = *(int *)(local_a + 0xe);
        }
        piVar1 = (int *)(local_a + 8);
        local_8 = *(int *)(local_a + 10);
        local_a = *piVar1;
      }
      if (-1 < param_2 + -1) {
        for (local_4 = 0; FUN_10d8_44ee(iVar2,uVar3,local_4,local_4 + local_6),
            local_4 != param_2 + -1; local_4 = local_4 + 1) {
        }
      }
      *(int *)(iVar2 + 0x30) = *(int *)(iVar2 + 0x30) - local_6;
      if (*(int *)(iVar2 + 0x32) != -1) {
        *(int *)(iVar2 + 0x32) = *(int *)(iVar2 + 0x32) - local_6;
      }
      if (param_2 < *(int *)(iVar2 + 0x2e)) {
        *(int *)(iVar2 + 0x2e) = param_2;
      }
      FUN_10d8_4064(&stack0xfffe,-local_6);
    }
    FUN_10d8_3ebc(iVar2,uVar3,param_2 + 1);
    *(int *)(iVar2 + 0x2c) = param_2;
    FUN_10d8_4a78(iVar2,uVar3);
    uVar3 = FUN_10d8_4acb(iVar2,uVar3);
    FUN_10d8_4064(&stack0xfffe,uVar3);
  }
  return;
}



/* ---- FUN_10d8_41b5 @ 10d8:41b5  (223 octets) ---- */

void __stdcall16far FUN_10d8_41b5(undefined4 param_1)

{
  undefined2 uVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  int iVar5;
  undefined2 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined2 local_8;
  undefined2 local_6;
  undefined2 local_4;
  
  uVar6 = (undefined2)((ulong)param_1 >> 0x10);
  iVar5 = (int)param_1;
  if (*(int *)(iVar5 + 0x34) != 0 || *(int *)(iVar5 + 0x36) != 0) {
    local_8 = 1;
    *(undefined2 *)(iVar5 + 0x52) = 0;
    *(undefined2 *)(iVar5 + 0x54) = 0;
    local_4 = *(int *)((int)*(undefined4 *)(iVar5 + 0x1e) + 8) + -1;
    if (-1 < local_4) {
      while( true ) {
        uVar7 = FUN_1148_0dd0((int)*(undefined4 *)(iVar5 + 0x1e),
                              (int)((ulong)*(undefined4 *)(iVar5 + 0x1e) >> 0x10),local_4);
        uVar3 = (undefined2)((ulong)uVar7 >> 0x10);
        uVar8 = *(undefined4 *)((int)uVar7 + 0x1e);
        local_6 = *(int *)((int)uVar8 + 8) + -1;
        if (-1 < local_6) {
          while( true ) {
            uVar8 = *(undefined4 *)((int)uVar7 + 0x1e);
            uVar8 = FUN_1148_0dd0((int)uVar8,(int)((ulong)uVar8 >> 0x10),local_6);
            uVar4 = (undefined2)((ulong)uVar8 >> 0x10);
            iVar2 = (int)uVar8;
            uVar1 = *(undefined2 *)(iVar5 + 0x54);
            *(undefined2 *)(iVar2 + 8) = *(undefined2 *)(iVar5 + 0x52);
            *(undefined2 *)(iVar2 + 10) = uVar1;
            *(int *)(iVar5 + 0x52) = iVar2;
            *(undefined2 *)(iVar5 + 0x54) = uVar4;
            if (local_8 < *(int *)(iVar2 + 0xc)) {
              local_8 = *(int *)(iVar2 + 0xc);
            }
            if (local_6 == 0) break;
            local_6 = local_6 + -1;
          }
        }
        if (local_4 == 0) break;
        local_4 = local_4 + -1;
      }
    }
    FUN_10d8_40ac(iVar5,uVar6,local_8);
  }
  return;
}



/* ---- FUN_10d8_4294 @ 10d8:4294  (57 octets) ---- */

void __stdcall16far FUN_10d8_4294(undefined4 param_1,undefined4 param_2)

{
  undefined2 uVar1;
  
  uVar1 = (undefined2)((ulong)param_1 >> 0x10);
  FUN_10e8_07cd();
  FUN_1158_1ee5(0,*(undefined2 *)((int)param_1 + 0x4c),(int)param_2 + *(int *)((int)param_1 + 0x46),
                (int)((ulong)param_2 >> 0x10));
  return;
}



/* ---- FUN_10d8_42cd @ 10d8:42cd  (76 octets) ---- */

undefined4 __stdcall16far FUN_10d8_42cd(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  
  uVar2 = (undefined2)((ulong)param_2 >> 0x10);
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  FUN_1158_1ee5(0,*(int *)(iVar1 + 0x46) + 4,(int)param_2,uVar2);
  FUN_10e8_07cd(0x1158,(int)param_2 + 4,uVar2,*(undefined2 *)(iVar1 + 0x34),
                *(undefined2 *)(iVar1 + 0x36));
  return param_2;
}



/* ---- FUN_10d8_4319 @ 10d8:4319  (296 octets) ---- */

void __stdcall16far FUN_10d8_4319(undefined4 *param_1,undefined4 *param_2,char param_3)

{
  undefined2 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined2 uVar4;
  uint uVar6;
  undefined4 *puVar7;
  undefined2 uVar9;
  undefined2 unaff_CS;
  undefined4 uVar11;
  undefined4 *puVar12;
  undefined2 uVar13;
  int local_4;
  int iVar5;
  undefined4 *puVar8;
  undefined2 uVar10;
  
  puVar7 = (undefined4 *)param_2;
  uVar9 = (undefined2)((ulong)param_2 >> 0x10);
  puVar8 = (undefined4 *)param_1;
  uVar10 = (undefined2)((ulong)param_1 >> 0x10);
  if (param_3 == '\0') {
    if (*(char *)(puVar7 + 9) == '\0') {
      *(undefined *)((int)puVar8 + 0x3e) = 1;
    }
    if (*(char *)((int)puVar8 + 0x3a) != '\x04') {
      if (((*(int *)(puVar8 + 0x13) != 0) && (*(char *)((int)puVar8 + 0x3b) != '\0')) &&
         (*(char *)(puVar7 + 9) == '\0')) {
        iVar3 = *(int *)((int)puVar8 + 0x46);
        uVar11 = FUN_10d8_45a7(puVar8,uVar10);
        unaff_CS = 0x1158;
        FUN_1158_1ee5(0,*(undefined2 *)(puVar8 + 0x13),(int)uVar11 + iVar3,
                      (int)((ulong)uVar11 >> 0x10));
        puVar1 = (undefined2 *)((int)*param_1 + 0x74);
        (*(code *)*puVar1)(0x1158,puVar8,uVar10);
      }
      puVar1 = (undefined2 *)((int)*param_2 + 0x30);
      (*(code *)*puVar1)(unaff_CS,puVar7,uVar9);
    }
  }
  else if (param_3 == '\b') {
    *(undefined *)((int)*(undefined4 *)((int)puVar8 + 0x22) + 0xc) = 0;
  }
  if (*(int *)(puVar8 + 0x14) == 0) {
    iVar3 = *(int *)((int)*(undefined4 *)((int)puVar8 + 0x1e) + 8) + -1;
    if (-1 < iVar3) {
      local_4 = 0;
      iVar5 = 0;
      while( true ) {
        uVar4 = CONCAT11((char)((uint)iVar5 >> 8),param_3);
        puVar12 = puVar7;
        uVar13 = uVar9;
        uVar11 = FUN_1148_0dd0((int)*(undefined4 *)((int)puVar8 + 0x1e),
                               (int)((ulong)*(undefined4 *)((int)puVar8 + 0x1e) >> 0x10),local_4);
        unaff_CS = 0x10d8;
        FUN_10d8_752e(uVar11,puVar12,uVar13,uVar4);
        if (local_4 == iVar3) break;
        iVar5 = local_4;
        local_4 = local_4 + 1;
      }
    }
    uVar6 = *(uint *)((int)puVar8 + 0x5a) | *(uint *)(puVar8 + 0x17);
    if (uVar6 != 0) {
      puVar2 = (undefined4 *)*(undefined4 *)((int)puVar8 + 0x5a);
      (*(code *)*(undefined2 *)(undefined2 *)*puVar2)
                (unaff_CS,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),puVar7,uVar9,
                 CONCAT11((char)(uVar6 >> 8),param_3));
    }
  }
  else if (((param_3 == '\x06') && (*(char *)((int)puVar8 + 0x3a) == '\0')) || (param_3 == '\x04'))
  {
    *(undefined *)((int)puVar8 + 0x42) = 4;
  }
  return;
}



/* ---- FUN_10d8_4441 @ 10d8:4441  (37 octets) ---- */

void __stdcall16far FUN_10d8_4441(undefined4 param_1)

{
  int iVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  if (*(int *)(iVar1 + 0x50) == 0) {
    *(undefined *)(iVar1 + 0x41) = *(undefined *)(iVar1 + 0x3a);
    *(undefined *)(iVar1 + 0x42) = 2;
  }
  *(int *)(iVar1 + 0x50) = *(int *)(iVar1 + 0x50) + 1;
  return;
}



/* ---- FUN_10d8_4466 @ 10d8:4466  (88 octets) ---- */

void __stdcall16far FUN_10d8_4466(undefined4 *param_1)

{
  undefined2 *puVar1;
  undefined4 *puVar2;
  undefined2 uVar3;
  
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  puVar2 = (undefined4 *)param_1;
  if ((*(int *)(puVar2 + 0x14) != 0) &&
     (*(int *)(puVar2 + 0x14) = *(int *)(puVar2 + 0x14) + -1, *(int *)(puVar2 + 0x14) == 0)) {
    if (*(char *)((int)puVar2 + 0x41) != *(char *)((int)puVar2 + 0x3a)) {
      puVar1 = (undefined2 *)((int)*param_1 + 0x38);
      (*(code *)*puVar1)();
    }
    if ((*(char *)((int)puVar2 + 0x41) != '\0') && (*(char *)((int)puVar2 + 0x3a) != '\0')) {
      puVar1 = (undefined2 *)((int)*param_1 + 0x38);
      (*(code *)*puVar1)();
    }
  }
  return;
}



/* ---- FUN_10d8_44be @ 10d8:44be  (48 octets) ---- */

void __stdcall16far FUN_10d8_44be(undefined4 *param_1)

{
  byte bVar1;
  undefined2 *puVar2;
  undefined2 uVar3;
  undefined2 unaff_CS;
  
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  bVar1 = *(byte *)((int)(undefined4 *)param_1 + 0x3a);
  if ((bVar1 < 2) || (4 < bVar1)) {
    unaff_CS = 0x10d8;
    FUN_10d8_11ef(0xf212);
  }
  puVar2 = (undefined2 *)((int)*param_1 + 0x38);
  (*(code *)*puVar2)(unaff_CS,(undefined4 *)param_1,uVar3,0,0,5);
  return;
}



/* ---- FUN_10d8_44ee @ 10d8:44ee  (185 octets) ---- */

void __stdcall16far FUN_10d8_44ee(undefined4 param_1,int param_2,int param_3)

{
  undefined2 uVar1;
  int iVar2;
  undefined2 *puVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  
  if (param_3 != param_2) {
    uVar4 = (undefined2)((ulong)param_1 >> 0x10);
    iVar2 = (int)param_1;
    uVar5 = (undefined2)((ulong)*(undefined4 *)(iVar2 + 0x26) >> 0x10);
    puVar3 = (undefined2 *)((int)*(undefined4 *)(iVar2 + 0x26) + param_3 * 4);
    uVar1 = *puVar3;
    uVar5 = puVar3[1];
    if (param_3 < param_2) {
      FUN_1158_1ec1((param_2 - param_3) * 4,(int)*(undefined4 *)(iVar2 + 0x26) + param_3 * 4,
                    (int)((ulong)*(undefined4 *)(iVar2 + 0x26) >> 0x10),
                    (int)*(undefined4 *)(iVar2 + 0x26) + (param_3 + 1) * 4,
                    (int)((ulong)*(undefined4 *)(iVar2 + 0x26) >> 0x10));
    }
    else {
      FUN_1158_1ec1((param_3 - param_2) * 4,(int)*(undefined4 *)(iVar2 + 0x26) + (param_2 + 1) * 4,
                    (int)((ulong)*(undefined4 *)(iVar2 + 0x26) >> 0x10),
                    (int)*(undefined4 *)(iVar2 + 0x26) + param_2 * 4,
                    (int)((ulong)*(undefined4 *)(iVar2 + 0x26) >> 0x10));
    }
    uVar6 = (undefined2)((ulong)*(undefined4 *)(iVar2 + 0x26) >> 0x10);
    puVar3 = (undefined2 *)((int)*(undefined4 *)(iVar2 + 0x26) + param_2 * 4);
    *puVar3 = uVar1;
    puVar3[1] = uVar5;
  }
  return;
}



/* ---- FUN_10d8_45a7 @ 10d8:45a7  (43 octets) ---- */

undefined4 __stdcall16far FUN_10d8_45a7(undefined4 param_1)

{
  undefined4 uVar1;
  undefined2 *puVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  uVar1 = *(undefined4 *)((int)param_1 + 0x26);
  uVar4 = (undefined2)((ulong)uVar1 >> 0x10);
  puVar2 = (undefined2 *)((int)uVar1 + *(int *)((int)param_1 + 0x30) * 4);
  return CONCAT22(puVar2[1],*puVar2);
}



/* ---- FUN_10d8_45d2 @ 10d8:45d2  (38 octets) ---- */

void __stdcall16far FUN_10d8_45d2(undefined4 param_1)

{
  int iVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  *(undefined2 *)(iVar1 + 0x2e) = 0;
  *(undefined2 *)(iVar1 + 0x30) = 0;
  *(undefined2 *)(iVar1 + 0x32) = 0xffff;
  *(undefined *)(iVar1 + 0x38) = 1;
  *(undefined *)(iVar1 + 0x39) = 1;
  return;
}



/* ---- FUN_10d8_45f8 @ 10d8:45f8  (38 octets) ---- */

void __stdcall16far FUN_10d8_45f8(undefined4 param_1)

{
  int iVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  *(undefined2 *)(iVar1 + 0x2e) = 1;
  *(undefined2 *)(iVar1 + 0x30) = 0;
  *(undefined2 *)(iVar1 + 0x32) = 0;
  *(undefined *)(iVar1 + 0x38) = 0;
  *(undefined *)(iVar1 + 0x39) = 0;
  return;
}



/* ---- FUN_10d8_4624 @ 10d8:4624  (135 octets) ---- */

void __stdcall16far FUN_10d8_4624(undefined4 *param_1,int param_2)

{
  undefined uVar1;
  undefined2 uVar2;
  undefined2 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined2 *puVar6;
  undefined2 uVar7;
  undefined2 uVar8;
  undefined2 uStack_c;
  undefined *puStack_a;
  undefined2 uStack_8;
  
  puStack_a = &stack0xfffe;
  uVar7 = (undefined2)((ulong)param_1 >> 0x10);
  puVar5 = (undefined4 *)param_1;
  if (*(int *)(puVar5 + 0x13) != 0) {
    uStack_8 = 0x461e;
    uStack_c = DAT_1160_1858;
    uVar1 = *(undefined *)((int)puVar5 + 0x3a);
    DAT_1160_1858 = (undefined4 *)&uStack_c;
    *(undefined *)((int)puVar5 + 0x3a) = 5;
    uVar8 = (undefined2)((ulong)*(undefined4 *)((int)puVar5 + 0x26) >> 0x10);
    puVar6 = (undefined2 *)((int)*(undefined4 *)((int)puVar5 + 0x26) + param_2 * 4);
    uVar2 = puVar6[1];
    *(undefined2 *)((int)puVar5 + 0x7a) = *puVar6;
    *(undefined2 *)(puVar5 + 0x1f) = uVar2;
    FUN_1158_1ee5(0,*(undefined2 *)(puVar5 + 0x13),
                  (int)*(undefined4 *)((int)puVar5 + 0x7a) + *(int *)((int)puVar5 + 0x46),
                  (int)((ulong)*(undefined4 *)((int)puVar5 + 0x7a) >> 0x10));
    puVar3 = (undefined2 *)((int)*param_1 + 0x74);
    puVar4 = puVar5;
    (*(code *)*puVar3)(0x1158,puVar5,uVar7);
    DAT_1160_1858 = puVar4;
    *(undefined *)((int)puVar5 + 0x3a) = uVar1;
    return;
  }
  return;
}



/* ---- FUN_10d8_46ab @ 10d8:46ab  (230 octets) ---- */

int __stdcall16far FUN_10d8_46ab(undefined4 param_1,char param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  int local_4;
  
  uVar5 = (undefined2)((ulong)param_1 >> 0x10);
  iVar3 = (int)param_1;
  uVar6 = (undefined2)((ulong)*(undefined4 *)(iVar3 + 0x26) >> 0x10);
  piVar4 = (int *)((int)*(undefined4 *)(iVar3 + 0x26) + param_3 * 4);
  iVar1 = *piVar4;
  iVar2 = piVar4[1];
  if (param_2 == '\0') {
    local_4 = FUN_10e8_010d();
  }
  else if (param_2 == '\x01') {
    local_4 = FUN_10e8_00ed();
  }
  else if (param_2 == '\x02') {
    local_4 = FUN_10e8_00fd();
  }
  else {
    local_4 = 0;
  }
  if (local_4 == 0) {
    FUN_10d8_4624(iVar3,uVar5,param_3);
    *(undefined *)(iVar1 + *(int *)(iVar3 + 0x4a)) = 0;
    uVar5 = FUN_10e8_078d(0x10d8,iVar1 + *(int *)(iVar3 + 0x4a) + 1,iVar2,
                          *(undefined2 *)(iVar3 + 0x34),*(undefined2 *)(iVar3 + 0x36));
    FUN_10d8_124e(uVar5);
  }
  return local_4;
}



/* ---- FUN_10d8_4791 @ 10d8:4791  (170 octets) ---- */

void __stdcall16far FUN_10d8_4791(undefined4 param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  
  uVar4 = (undefined2)((ulong)param_1 >> 0x10);
  iVar2 = (int)param_1;
  if (*(int *)(iVar2 + 0x32) != param_2) {
    uVar5 = (undefined2)((ulong)*(undefined4 *)(iVar2 + 0x26) >> 0x10);
    piVar3 = (int *)((int)*(undefined4 *)(iVar2 + 0x26) + param_2 * 4);
    cVar1 = *(char *)(*piVar3 + *(int *)(iVar2 + 0x4a));
    if (cVar1 == '\0') {
      uVar5 = FUN_10e8_079d();
      FUN_10d8_124e(uVar5);
    }
    else if (cVar1 == '\x01') {
      uVar5 = FUN_10e8_00bd();
      FUN_10d8_124e(uVar5);
    }
    else if (cVar1 == '\x02') {
      uVar5 = FUN_10e8_00cd();
      FUN_10d8_124e(uVar5);
    }
    *(int *)(iVar2 + 0x32) = param_2;
  }
  return;
}



/* ---- FUN_10d8_483b @ 10d8:483b  (28 octets) ---- */

void __stdcall16far FUN_10d8_483b(undefined4 param_1)

{
  int iVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  if (0 < *(int *)(iVar1 + 0x2e)) {
    FUN_10d8_4791(iVar1,uVar2,*(undefined2 *)(iVar1 + 0x30));
  }
  return;
}



/* ---- FUN_10d8_4857 @ 10d8:4857  (16 octets) ---- */

void __stdcall16far FUN_10d8_4857(undefined4 param_1)

{
  *(undefined2 *)((int)param_1 + 0x32) = 0xffff;
  return;
}



/* ---- FUN_10d8_4867 @ 10d8:4867  (148 octets) ---- */

undefined __stdcall16far FUN_10d8_4867(undefined4 param_1,undefined2 param_2,undefined2 param_3)

{
  int iVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 unaff_CS;
  undefined local_3;
  
  local_3 = 0;
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  iVar2 = (int)param_1;
  if (((*(byte *)(iVar2 + 0x3a) != 0) && (*(byte *)(iVar2 + 0x3a) < 3)) &&
     (*(int *)(iVar2 + 0x30) < *(int *)(iVar2 + 0x2e))) {
    if (*(int *)(iVar2 + 0x32) != *(int *)(iVar2 + 0x30)) {
      unaff_CS = 0x10e8;
      iVar1 = FUN_10e8_079d();
      if (iVar1 != 0) {
        return 0;
      }
      *(undefined2 *)(iVar2 + 0x32) = *(undefined2 *)(iVar2 + 0x30);
    }
    iVar2 = FUN_10e8_010d(unaff_CS,0,0,param_2,param_3,0,*(undefined2 *)(iVar2 + 0x34),
                          *(undefined2 *)(iVar2 + 0x36));
    if (iVar2 == 0) {
      local_3 = 1;
    }
  }
  return local_3;
}



/* ---- FUN_10d8_48fb @ 10d8:48fb  (215 octets) ---- */

undefined __stdcall16far FUN_10d8_48fb(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  undefined local_4;
  undefined local_3;
  
  local_4 = 1;
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  iVar2 = (int)param_1;
  if (0 < *(int *)(iVar2 + 0x2e)) {
    FUN_10d8_4791(iVar2,uVar3,*(int *)(iVar2 + 0x2e) + -1);
    if ((*(char *)(iVar2 + 0x3a) == '\x03') && (*(int *)(iVar2 + 0x32) == *(int *)(iVar2 + 0x30))) {
      iVar1 = *(int *)(iVar2 + 0x4a);
      uVar4 = FUN_10d8_45a7(iVar2,uVar3);
      if (*(char *)((int)uVar4 + iVar1) == '\0') {
        local_4 = 0;
      }
    }
  }
  iVar1 = FUN_10d8_46ab(iVar2,uVar3,local_4,*(undefined2 *)(iVar2 + 0x2e));
  if (iVar1 == 0) {
    if (*(int *)(iVar2 + 0x2e) == 0) {
      FUN_10d8_45f8(iVar2,uVar3);
    }
    else if (*(int *)(iVar2 + 0x2e) < *(int *)(iVar2 + 0x2c)) {
      *(int *)(iVar2 + 0x2e) = *(int *)(iVar2 + 0x2e) + 1;
    }
    else {
      FUN_10d8_44ee(iVar2,uVar3,*(undefined2 *)(iVar2 + 0x2e),0);
    }
    *(int *)(iVar2 + 0x32) = *(int *)(iVar2 + 0x2e) + -1;
    local_3 = 1;
  }
  else if (iVar1 == 0x2202) {
    *(undefined2 *)(iVar2 + 0x32) = 0xffff;
    local_3 = 0;
  }
  else {
    FUN_10d8_122d(iVar1);
  }
  return local_3;
}



/* ---- FUN_10d8_49d2 @ 10d8:49d2  (156 octets) ---- */

undefined2 __stdcall16far FUN_10d8_49d2(undefined4 param_1)

{
  int iVar1;
  undefined uVar2;
  undefined extraout_AH;
  int iVar3;
  undefined2 uVar4;
  undefined local_3;
  
  uVar4 = (undefined2)((ulong)param_1 >> 0x10);
  iVar3 = (int)param_1;
  if (0 < *(int *)(iVar3 + 0x2e)) {
    FUN_10d8_4791(iVar3,uVar4,0);
  }
  iVar1 = FUN_10d8_46ab(iVar3,uVar4,2,*(undefined2 *)(iVar3 + 0x2e));
  if (iVar1 == 0) {
    if (*(int *)(iVar3 + 0x2e) == 0) {
      FUN_10d8_45f8(iVar3,uVar4);
    }
    else {
      FUN_10d8_44ee(iVar3,uVar4,0,*(undefined2 *)(iVar3 + 0x2e));
      if (*(int *)(iVar3 + 0x2e) < *(int *)(iVar3 + 0x2c)) {
        *(int *)(iVar3 + 0x2e) = *(int *)(iVar3 + 0x2e) + 1;
        *(int *)(iVar3 + 0x30) = *(int *)(iVar3 + 0x30) + 1;
      }
    }
    uVar2 = 0;
    *(undefined2 *)(iVar3 + 0x32) = 0;
    local_3 = 1;
  }
  else if (iVar1 == 0x2201) {
    *(undefined2 *)(iVar3 + 0x32) = 0xffff;
    local_3 = 0;
    uVar2 = 0x22;
  }
  else {
    FUN_10d8_122d(iVar1);
    uVar2 = extraout_AH;
  }
  return CONCAT11(uVar2,local_3);
}



/* ---- FUN_10d8_4a78 @ 10d8:4a78  (68 octets) ---- */

int __stdcall16far FUN_10d8_4a78(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 uStack_c;
  undefined *puStack_a;
  undefined2 uStack_8;
  int local_4;
  
  puStack_a = &stack0xfffe;
  local_4 = 0;
  uStack_8 = 0x4a6e;
  uStack_c = DAT_1160_1858;
  DAT_1160_1858 = &uStack_c;
  while( true ) {
    uVar3 = (undefined2)((ulong)param_1 >> 0x10);
    iVar2 = (int)param_1;
    if (*(int *)(iVar2 + 0x2c) <= *(int *)(iVar2 + 0x2e)) {
      DAT_1160_1858 = (undefined2 *)uStack_c;
      return local_4;
    }
    cVar1 = FUN_10d8_48fb(iVar2,uVar3);
    if (cVar1 == '\0') break;
    local_4 = local_4 + 1;
  }
  DAT_1160_1858 = (undefined2 *)uStack_c;
  return local_4;
}



/* ---- FUN_10d8_4acb @ 10d8:4acb  (68 octets) ---- */

int __stdcall16far FUN_10d8_4acb(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 uStack_c;
  undefined *puStack_a;
  undefined2 uStack_8;
  int local_4;
  
  puStack_a = &stack0xfffe;
  local_4 = 0;
  uStack_8 = 0x4ac1;
  uStack_c = DAT_1160_1858;
  DAT_1160_1858 = &uStack_c;
  while( true ) {
    uVar3 = (undefined2)((ulong)param_1 >> 0x10);
    iVar2 = (int)param_1;
    if (*(int *)(iVar2 + 0x2c) <= *(int *)(iVar2 + 0x2e)) {
      DAT_1160_1858 = (undefined2 *)uStack_c;
      return local_4;
    }
    cVar1 = FUN_10d8_49d2(iVar2,uVar3);
    if (cVar1 == '\0') break;
    local_4 = local_4 + 1;
  }
  DAT_1160_1858 = (undefined2 *)uStack_c;
  return local_4;
}



/* ---- FUN_10d8_4b1e @ 10d8:4b1e  (282 octets) ---- */

void __stdcall16far FUN_10d8_4b1e(undefined4 *param_1,byte param_2)

{
  undefined2 *puVar1;
  char cVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puStack_c;
  undefined4 *puStack_a;
  undefined4 *puStack_8;
  undefined4 *puStack_6;
  int local_4;
  
  puVar4 = (undefined4 *)param_1;
  puVar5 = (undefined4 *)((ulong)param_1 >> 0x10);
  puStack_c = puVar4;
  puStack_a = puVar5;
  if ((param_2 & 1) == 0) {
    puStack_6 = (undefined4 *)*(undefined2 *)((int)puVar4 + 0x2e);
    puStack_8 = (undefined4 *)0x0;
    iVar3 = FUN_10d8_46ab();
    if (iVar3 != 0) {
      puStack_6 = (undefined4 *)*(undefined2 *)((int)puVar4 + 0x2e);
      puStack_8 = (undefined4 *)0x1;
      puStack_c = puVar4;
      puStack_a = puVar5;
      iVar3 = FUN_10d8_46ab();
      if (iVar3 != 0) {
        puStack_6 = (undefined4 *)*(undefined2 *)((int)puVar4 + 0x2e);
        puStack_8 = (undefined4 *)0x2;
        puStack_c = puVar4;
        puStack_a = puVar5;
        iVar3 = FUN_10d8_46ab();
        if (iVar3 != 0) {
          puStack_a = (undefined4 *)0x10d8;
          puStack_c = (undefined4 *)0x4b8c;
          puStack_8 = puVar4;
          puStack_6 = puVar5;
          FUN_10d8_45d2();
          puStack_6 = (undefined4 *)0x2;
          puStack_8 = (undefined4 *)0x0;
          puStack_a = (undefined4 *)0x0;
          puVar1 = (undefined2 *)((int)*param_1 + 0x38);
          puStack_c = puVar5;
          (*(code *)*puVar1)(0x10d8,puVar4);
          return;
        }
      }
    }
  }
  else {
    *(undefined2 *)((int)puVar4 + 0x32) = 0xffff;
    puStack_6 = (undefined4 *)*(undefined2 *)((int)puVar4 + 0x2e);
    puStack_8 = (undefined4 *)0x0;
    puStack_6 = (undefined4 *)FUN_10d8_46ab();
    puStack_8 = (undefined4 *)0x10d8;
    puStack_a = (undefined4 *)0x4b44;
    FUN_10d8_124e();
  }
  if ((param_2 & 2) == 0) {
    local_4 = *(int *)(puVar4 + 0xc);
  }
  else {
    local_4 = (*(int *)(puVar4 + 0xb) + -1) / 2;
  }
  puStack_6 = (undefined4 *)*(undefined2 *)((int)puVar4 + 0x2e);
  puStack_8 = (undefined4 *)0x0;
  puStack_c = puVar4;
  puStack_a = puVar5;
  FUN_10d8_44ee();
  puStack_a = (undefined4 *)0x10d8;
  puStack_c = (undefined4 *)0x4bde;
  puStack_8 = puVar4;
  puStack_6 = puVar5;
  FUN_10d8_45f8();
  puStack_6 = (undefined4 *)0x10d8;
  puStack_8 = (undefined4 *)0x4b14;
  puStack_c = (undefined4 *)DAT_1160_1858;
  DAT_1160_1858 = &puStack_c;
  puStack_a = (undefined4 *)&stack0xfffe;
  while ((0 < local_4 && (cVar2 = FUN_10d8_49d2(puVar4,puVar5), cVar2 != '\0'))) {
    local_4 = local_4 + -1;
  }
  FUN_10d8_4a78(puVar4,puVar5);
  FUN_10d8_4acb(puVar4,puVar5);
  DAT_1160_1858 = (undefined4 **)puStack_c;
  puStack_6 = (undefined4 *)0x2;
  puStack_8 = (undefined4 *)0x0;
  puStack_a = (undefined4 *)0x0;
  puVar1 = (undefined2 *)((int)*param_1 + 0x38);
  puStack_c = puVar5;
  (*(code *)*puVar1)(0x10d8,puVar4);
  return;
}



/* ---- FUN_10d8_4c3d @ 10d8:4c3d  (113 octets) ---- */

void __stdcall16far FUN_10d8_4c3d(undefined4 *param_1)

{
  char cVar1;
  undefined2 *puVar2;
  undefined4 *puVar3;
  undefined2 uVar4;
  undefined2 unaff_CS;
  
  uVar4 = (undefined2)((ulong)param_1 >> 0x10);
  puVar3 = (undefined4 *)param_1;
  if (*(char *)((int)puVar3 + 0x3a) == '\0') {
    unaff_CS = 0x10d8;
    FUN_10d8_11ef(0xf205);
  }
  puVar2 = (undefined2 *)((int)*param_1 + 0x38);
  (*(code *)*puVar2)(unaff_CS,puVar3,uVar4,0,0,7);
  cVar1 = *(char *)((int)puVar3 + 0x3a);
  if ((cVar1 == '\x02') || (cVar1 == '\x03')) {
    FUN_10d8_44be(puVar3,uVar4);
    if (*(char *)((int)puVar3 + 0x3e) == '\0') {
      FUN_10d8_558b(puVar3,uVar4);
    }
    else {
      FUN_10d8_54a0(puVar3,uVar4);
    }
  }
  else if (cVar1 == '\x04') {
    FUN_10d8_54a0(puVar3,uVar4);
  }
  return;
}



/* ---- FUN_10d8_4cae @ 10d8:4cae  (25 octets) ---- */

void __stdcall16far FUN_10d8_4cae(undefined4 param_1)

{
  if (*(char *)((int)param_1 + 0x3d) == '\0') {
    FUN_10d8_11ef(0xf214);
  }
  return;
}



/* ---- FUN_10d8_4ccd @ 10d8:4ccd  (115 octets) ---- */

void __cdecl16far FUN_10d8_4ccd(undefined4 *param_1)

{
  undefined2 *puVar1;
  undefined2 uVar2;
  undefined4 *puVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined2 uStack_a;
  
  uVar4 = (undefined2)((ulong)param_1 >> 0x10);
  puVar3 = (undefined4 *)param_1;
  uStack_a = 0x4cda;
  FUN_10d8_4c3d();
  uStack_a = 0x4ce4;
  FUN_10d8_45d2();
  uStack_a = DAT_1160_1858;
  uVar5 = *(undefined2 *)(puVar3 + 0xd);
  DAT_1160_1858 = &uStack_a;
  uVar2 = FUN_10e8_00bd(0x10d8,uVar5,*(undefined2 *)((int)puVar3 + 0x36));
  FUN_10d8_124e(uVar2);
  FUN_10d8_48fb(puVar3,uVar4);
  FUN_10d8_4a78(puVar3,uVar4);
  DAT_1160_1858 = (undefined2 *)uVar5;
  uStack_a = 0x4d40;
  *(undefined *)(puVar3 + 0xe) = 1;
  puVar1 = (undefined2 *)((int)*param_1 + 0x38);
  (*(code *)*puVar1)(0x10d8,puVar3,uVar4,0,0,2);
  return;
}



/* ---- FUN_10d8_4d4a @ 10d8:4d4a  (115 octets) ---- */

void __cdecl16far FUN_10d8_4d4a(undefined4 *param_1)

{
  undefined2 *puVar1;
  undefined2 uVar2;
  undefined4 *puVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined2 uStack_a;
  
  uVar4 = (undefined2)((ulong)param_1 >> 0x10);
  puVar3 = (undefined4 *)param_1;
  uStack_a = 0x4d57;
  FUN_10d8_4c3d();
  uStack_a = 0x4d61;
  FUN_10d8_45d2();
  uStack_a = DAT_1160_1858;
  uVar5 = *(undefined2 *)(puVar3 + 0xd);
  DAT_1160_1858 = &uStack_a;
  uVar2 = FUN_10e8_00cd(0x10d8,uVar5,*(undefined2 *)((int)puVar3 + 0x36));
  FUN_10d8_124e(uVar2);
  FUN_10d8_49d2(puVar3,uVar4);
  FUN_10d8_4acb(puVar3,uVar4);
  DAT_1160_1858 = (undefined2 *)uVar5;
  uStack_a = 0x4dbd;
  *(undefined *)((int)puVar3 + 0x39) = 1;
  puVar1 = (undefined2 *)((int)*param_1 + 0x38);
  (*(code *)*puVar1)(0x10d8,puVar3,uVar4,0,0,2);
  return;
}



/* ---- FUN_10d8_4dc7 @ 10d8:4dc7  (293 octets) ---- */

void __stdcall16far FUN_10d8_4dc7(undefined4 *param_1,int param_2)

{
  undefined2 *puVar1;
  char cVar2;
  undefined4 *puVar3;
  undefined2 uVar4;
  int iStack_e;
  int local_6;
  uint local_4;
  
  uVar4 = (undefined2)((ulong)param_1 >> 0x10);
  puVar3 = (undefined4 *)param_1;
  iStack_e = 0x4dd5;
  FUN_10d8_4c3d();
  if (((param_2 < 1) || (*(char *)((int)puVar3 + 0x39) != '\0')) &&
     ((-1 < param_2 || (*(char *)(puVar3 + 0xe) != '\0')))) {
    return;
  }
  *(undefined *)(puVar3 + 0xe) = 0;
  *(undefined *)((int)puVar3 + 0x39) = 0;
  local_6 = 0;
  iStack_e = (int)DAT_1160_1858;
  DAT_1160_1858 = &iStack_e;
  for (; 0 < param_2; param_2 = param_2 + -1) {
    if (*(int *)(puVar3 + 0xc) < *(int *)((int)puVar3 + 0x2e) + -1) {
      *(int *)(puVar3 + 0xc) = *(int *)(puVar3 + 0xc) + 1;
    }
    else {
      local_4 = (uint)(*(int *)(puVar3 + 0xb) <= *(int *)((int)puVar3 + 0x2e));
      cVar2 = FUN_10d8_48fb(puVar3,uVar4);
      if (cVar2 == '\0') {
        *(undefined *)((int)puVar3 + 0x39) = 1;
        break;
      }
      local_6 = local_6 - local_4;
    }
  }
  do {
    if (-1 < param_2) {
LAB_10d8_4ec7:
      DAT_1160_1858 = (int *)iStack_e;
      iStack_e = local_6 >> 0xf;
      puVar1 = (undefined2 *)((int)*param_1 + 0x38);
      (*(code *)*puVar1)(0x10d8,puVar3,uVar4,local_6);
      return;
    }
    if (*(int *)(puVar3 + 0xc) < 1) {
      local_4 = (uint)(*(int *)(puVar3 + 0xb) <= *(int *)((int)puVar3 + 0x2e));
      cVar2 = FUN_10d8_49d2(puVar3,uVar4);
      if (cVar2 == '\0') {
        *(undefined *)(puVar3 + 0xe) = 1;
        goto LAB_10d8_4ec7;
      }
      local_6 = local_6 + local_4;
    }
    else {
      *(int *)(puVar3 + 0xc) = *(int *)(puVar3 + 0xc) + -1;
    }
    param_2 = param_2 + 1;
  } while( true );
}



/* ---- FUN_10d8_4eec @ 10d8:4eec  (19 octets) ---- */

void __stdcall16far FUN_10d8_4eec(undefined4 param_1)

{
  FUN_10d8_4dc7((int)param_1,(int)((ulong)param_1 >> 0x10),1);
  return;
}



/* ---- FUN_10d8_4eff @ 10d8:4eff  (19 octets) ---- */

void __stdcall16far FUN_10d8_4eff(undefined4 param_1)

{
  FUN_10d8_4dc7((int)param_1,(int)((ulong)param_1 >> 0x10),0xffff);
  return;
}



/* ---- FUN_10d8_4f12 @ 10d8:4f12  (61 octets) ---- */

void __stdcall16far FUN_10d8_4f12(undefined4 param_1)

{
  undefined2 uVar1;
  int iVar2;
  undefined2 uVar3;
  
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  iVar2 = (int)param_1;
  FUN_10d8_4c3d(iVar2,uVar3);
  FUN_10d8_483b(iVar2,uVar3);
  uVar1 = FUN_10e8_03bd(0x10d8,*(undefined2 *)(iVar2 + 0x34),*(undefined2 *)(iVar2 + 0x36));
  FUN_10d8_124e(uVar1);
  FUN_10d8_4b1e(iVar2,uVar3,0);
  return;
}



/* ---- FUN_10d8_4f4f @ 10d8:4f4f  (74 octets) ---- */

void __stdcall16far FUN_10d8_4f4f(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  int local_4;
  
  if (-1 < param_2) {
    local_4 = 0;
    while( true ) {
      uVar2 = (undefined2)((ulong)param_3 >> 0x10);
      iVar1 = (int)param_3 + local_4 * 8;
      uVar3 = FUN_10d8_3b4b((int)param_1,(int)((ulong)param_1 >> 0x10),local_4);
      FUN_10d8_6277(uVar3,iVar1,uVar2);
      if (local_4 == param_2) break;
      local_4 = local_4 + 1;
    }
  }
  return;
}



/* ---- FUN_10d8_4f99 @ 10d8:4f99  (176 octets) ---- */

void __stdcall16far FUN_10d8_4f99(undefined4 param_1)

{
  undefined4 uVar1;
  undefined2 uVar2;
  int iVar3;
  undefined2 uVar4;
  undefined4 uVar5;
  
  uVar4 = (undefined2)((ulong)param_1 >> 0x10);
  iVar3 = (int)param_1;
  FUN_10d8_50b8(iVar3,uVar4);
  FUN_10d8_44ee(iVar3,uVar4,*(undefined2 *)(iVar3 + 0x30),*(undefined2 *)(iVar3 + 0x2e));
  uVar5 = FUN_10d8_45a7(iVar3,uVar4);
  uVar2 = (undefined2)((ulong)uVar5 >> 0x10);
  FUN_10d8_4294(iVar3,uVar4,uVar5);
  if (*(int *)(iVar3 + 0x2e) == 0) {
    *(undefined *)((int)uVar5 + *(int *)(iVar3 + 0x4a)) = 1;
  }
  else {
    uVar1 = *(undefined4 *)((int)*(undefined4 *)(iVar3 + 0x26) + (*(int *)(iVar3 + 0x30) + 1) * 4);
    FUN_1158_1ec1(*(int *)(iVar3 + 0x48) + 1,(int)uVar5 + *(int *)(iVar3 + 0x4a),uVar2,
                  (int)uVar1 + *(int *)(iVar3 + 0x4a),(int)((ulong)uVar1 >> 0x10));
  }
  if (*(int *)(iVar3 + 0x2e) < *(int *)(iVar3 + 0x2c)) {
    *(int *)(iVar3 + 0x2e) = *(int *)(iVar3 + 0x2e) + 1;
  }
  FUN_10d8_50e9(iVar3,uVar4);
  return;
}



/* ---- FUN_10d8_5049 @ 10d8:5049  (111 octets) ---- */

void __stdcall16far FUN_10d8_5049(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined2 uVar5;
  
  uVar5 = (undefined2)((ulong)param_1 >> 0x10);
  iVar4 = (int)param_1;
  FUN_10d8_50b8(iVar4,uVar5);
  FUN_10d8_45d2(iVar4,uVar5);
  piVar3 = (int *)*(undefined4 *)(iVar4 + 0x26);
  iVar1 = *piVar3;
  iVar2 = ((int *)piVar3)[1];
  FUN_10d8_4294(iVar4,uVar5,iVar1,iVar2);
  *(undefined *)(iVar1 + *(int *)(iVar4 + 0x4a)) = 2;
  *(undefined2 *)(iVar4 + 0x2e) = 1;
  *(undefined *)(iVar4 + 0x38) = 0;
  FUN_10d8_4acb(iVar4,uVar5);
  FUN_10d8_50e9(iVar4,uVar5);
  return;
}



/* ---- FUN_10d8_50b8 @ 10d8:50b8  (39 octets) ---- */

void __stdcall16far FUN_10d8_50b8(undefined4 *param_1)

{
  undefined2 *puVar1;
  undefined4 *puVar2;
  undefined2 uVar3;
  
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  puVar2 = (undefined4 *)param_1;
  FUN_10d8_4c3d(puVar2,uVar3);
  FUN_10d8_4cae(puVar2,uVar3);
  puVar1 = (undefined2 *)((int)*param_1 + 0x68);
  (*(code *)*puVar1)(0x10d8,puVar2,uVar3);
  return;
}



/* ---- FUN_10d8_50e9 @ 10d8:50e9  (89 octets) ---- */

void __stdcall16far FUN_10d8_50e9(undefined4 *param_1)

{
  undefined2 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined2 uVar4;
  
  uVar4 = (undefined2)((ulong)param_1 >> 0x10);
  puVar3 = (undefined4 *)param_1;
  FUN_10d8_3191();
  DAT_1160_1858 = (undefined4 *)&stack0xfff6;
  puVar1 = (undefined2 *)((int)*param_1 + 0x78);
  puVar2 = puVar3;
  (*(code *)*puVar1)(0x10d8,puVar3,uVar4);
  DAT_1160_1858 = puVar2;
  *(undefined *)((int)puVar3 + 0x3e) = 0;
  puVar1 = (undefined2 *)((int)*param_1 + 0x38);
  (*(code *)*puVar1)(0x10d8,puVar3,uVar4,0);
  puVar1 = (undefined2 *)((int)*param_1 + 0x4c);
  (*(code *)*puVar1)(0x10d8,puVar3,uVar4);
  return;
}



/* ---- FUN_10d8_518e @ 10d8:518e  (288 octets) ---- */

void __cdecl16far
FUN_10d8_518e(undefined4 *param_1,char param_2,undefined2 param_3,undefined4 param_4)

{
  undefined2 *puVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined4 *puVar4;
  undefined2 uVar5;
  undefined4 uVar6;
  undefined4 *puStack_1e;
  undefined *puStack_1c;
  undefined4 uStack_1a;
  undefined4 *puStack_16;
  undefined *puStack_14;
  undefined2 uStack_12;
  undefined2 uStack_10;
  undefined2 uStack_e;
  
  uVar5 = (undefined2)((ulong)param_1 >> 0x10);
  puVar4 = (undefined4 *)param_1;
  uStack_e = 0x519c;
  FUN_10d8_50b8();
  if (param_2 == '\0') {
    uStack_e = 0x51ac;
    FUN_10d8_483b();
  }
  uStack_e = 0x51b6;
  FUN_10d8_4441();
  uStack_e = DAT_1160_1858;
  uStack_10 = *(undefined2 *)((int)puVar4 + 0x2e);
  uStack_12 = *(undefined2 *)(puVar4 + 0xc);
  uStack_1a._2_2_ = 0x10d8;
  uStack_1a._0_2_ = (undefined4 *)0x51d6;
  DAT_1160_1858 = (undefined4 **)&uStack_e;
  puStack_16 = puVar4;
  puStack_14 = (undefined *)uVar5;
  FUN_10d8_44ee();
  uStack_10 = 0x10d8;
  uStack_12 = 0x517e;
  puStack_16 = (undefined4 *)DAT_1160_1858;
  puStack_1c = (undefined *)0x10d8;
  puStack_1e = (undefined4 *)0x51ee;
  DAT_1160_1858 = &puStack_16;
  uStack_1a._0_2_ = puVar4;
  uStack_1a._2_2_ = uVar5;
  puStack_14 = &stack0xfffe;
  uVar6 = FUN_10d8_45a7();
  uVar2 = (undefined2)((ulong)uVar6 >> 0x10);
  uVar3 = (undefined2)uVar6;
  puStack_1e = puVar4;
  puStack_1c = (undefined *)uVar5;
  uStack_1a = uVar6;
  FUN_10d8_4294();
  *(undefined *)((int)puVar4 + 0x3a) = 3;
  uStack_1a._2_2_ = 0x10d8;
  uStack_1a._0_2_ = (undefined4 *)0x5178;
  puStack_1e = (undefined4 *)DAT_1160_1858;
  puVar1 = (undefined2 *)((int)*param_1 + 0x78);
  DAT_1160_1858 = &puStack_1e;
  puStack_1c = &stack0xfffe;
  (*(code *)*puVar1)(0x10d8,puVar4,uVar5);
  puVar1 = (undefined2 *)((int)*param_1 + 0x4c);
  (*(code *)*puVar1)(0x10d8,puVar4,uVar5);
  FUN_10d8_4f4f(puVar4,uVar5,param_3,(int)param_4,(int)((ulong)param_4 >> 0x10));
  puVar1 = (undefined2 *)((int)*param_1 + 0x70);
  (*(code *)*puVar1)(0x10d8,puVar4,uVar5);
  if (param_2 == '\0') {
    uVar3 = FUN_10e8_013d(0x10d8,uVar6,0,*(undefined2 *)(puVar4 + 0xd),
                          *(undefined2 *)((int)puVar4 + 0x36));
    FUN_10d8_124e(uVar3);
    DAT_1160_1858 = (undefined4 **)uVar2;
  }
  else {
    uVar2 = FUN_10e8_093d(0x10d8,uVar6,*(undefined2 *)(puVar4 + 0xd),
                          *(undefined2 *)((int)puVar4 + 0x36));
    FUN_10d8_124e(uVar2);
    DAT_1160_1858 = (undefined4 **)uVar3;
  }
  FUN_10d8_3a08(puVar4,uVar5);
  *(undefined *)((int)puVar4 + 0x3a) = 1;
  return;
}



/* ---- FUN_10d8_5306 @ 10d8:5306  (27 octets) ---- */

void __stdcall16far FUN_10d8_5306(undefined4 param_1,undefined2 param_2,undefined4 param_3)

{
  FUN_10d8_518e((int)param_1,(int)((ulong)param_1 >> 0x10),0,param_2,(int)param_3,
                (int)((ulong)param_3 >> 0x10));
  return;
}



/* ---- FUN_10d8_5321 @ 10d8:5321  (27 octets) ---- */

void __stdcall16far FUN_10d8_5321(undefined4 param_1,undefined2 param_2,undefined4 param_3)

{
  FUN_10d8_518e((int)param_1,(int)((ulong)param_1 >> 0x10),1,param_2,(int)param_3,
                (int)((ulong)param_3 >> 0x10));
  return;
}



/* ---- FUN_10d8_533c @ 10d8:533c  (180 octets) ---- */

void __stdcall16far FUN_10d8_533c(undefined4 *param_1)

{
  undefined2 *puVar1;
  undefined2 uVar2;
  undefined4 *puVar3;
  undefined2 uVar4;
  undefined4 uVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  
  uVar4 = (undefined2)((ulong)param_1 >> 0x10);
  puVar3 = (undefined4 *)param_1;
  if ((*(byte *)((int)puVar3 + 0x3a) < 2) || (3 < *(byte *)((int)puVar3 + 0x3a))) {
    if (*(int *)((int)puVar3 + 0x2e) == 0) {
      FUN_10d8_4f99(puVar3,uVar4);
    }
    else {
      FUN_10d8_4c3d(puVar3,uVar4);
      FUN_10d8_4cae(puVar3,uVar4);
      puVar1 = (undefined2 *)((int)*param_1 + 100);
      (*(code *)*puVar1)(0x10d8,puVar3,uVar4);
      FUN_10d8_483b(puVar3,uVar4);
      uVar2 = *(undefined2 *)((int)puVar3 + 0x36);
      uVar7 = *(undefined2 *)(puVar3 + 0xd);
      uVar6 = 1;
      uVar5 = FUN_10d8_45a7(puVar3,uVar4);
      uVar2 = FUN_10e8_010d(0x10d8,0,0,uVar5,uVar6,uVar7,uVar2);
      FUN_10d8_124e(uVar2);
      FUN_10d8_4624(puVar3,uVar4,*(undefined2 *)(puVar3 + 0xc));
      FUN_10d8_3191(puVar3,uVar4,2);
      puVar1 = (undefined2 *)((int)*param_1 + 0x38);
      (*(code *)*puVar1)(0x10d8,puVar3,uVar4,0,0,1);
      puVar1 = (undefined2 *)((int)*param_1 + 0x48);
      (*(code *)*puVar1)(0x10d8,puVar3,uVar4);
    }
  }
  return;
}



/* ---- FUN_10d8_53f0 @ 10d8:53f0  (176 octets) ---- */

void __stdcall16far FUN_10d8_53f0(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 unaff_SS;
  undefined4 uVar4;
  undefined2 uVar5;
  undefined4 local_12;
  undefined local_e;
  undefined4 local_a;
  int local_6;
  int local_4;
  
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  uVar4 = *(undefined4 *)((int)param_1 + 0x1a);
  local_6 = *(int *)((int)uVar4 + 8) + -1;
  if (-1 < local_6) {
    local_4 = 0;
    while( true ) {
      uVar4 = *(undefined4 *)((int)param_1 + 0x1a);
      local_a = FUN_1148_0dd0((int)uVar4,(int)((ulong)uVar4 >> 0x10),local_4);
      uVar5 = (undefined2)((ulong)local_a >> 0x10);
      iVar2 = (int)local_a;
      if ((((*(char *)(iVar2 + 0x27) != '\0') && (*(char *)(iVar2 + 0x23) == '\0')) &&
          (*(char *)(iVar2 + 0x24) == '\0')) &&
         ((*(byte *)(iVar2 + 0x22) != 0 && (*(byte *)(iVar2 + 0x22) < 0xe)))) {
        cVar1 = FUN_10d8_69db(local_a);
        if (cVar1 != '\0') {
          FUN_10d8_6426((int)local_a,(int)((ulong)local_a >> 0x10));
          uVar5 = 0xf217;
          uVar4 = FUN_10d8_67f6((int)local_a,(int)((ulong)local_a >> 0x10));
          local_e = 4;
          local_12 = uVar4;
          FUN_10d8_120a(0,&local_12,unaff_SS,uVar5);
        }
      }
      if (local_4 == local_6) break;
      local_4 = local_4 + 1;
    }
  }
  return;
}



/* ---- FUN_10d8_54a0 @ 10d8:54a0  (235 octets) ---- */

void __stdcall16far FUN_10d8_54a0(undefined4 *param_1)

{
  char cVar1;
  undefined2 *puVar2;
  undefined2 uVar3;
  undefined4 *puVar4;
  undefined2 uVar5;
  undefined4 uVar6;
  
  uVar5 = (undefined2)((ulong)param_1 >> 0x10);
  puVar4 = (undefined4 *)param_1;
  FUN_10d8_44be(puVar4,uVar5);
  cVar1 = *(char *)((int)puVar4 + 0x3a);
  if ((cVar1 == '\x02') || (cVar1 == '\x03')) {
    puVar2 = (undefined2 *)((int)*param_1 + 0x38);
    (*(code *)*puVar2)(0x10d8,puVar4,uVar5,0,0,7);
    FUN_10d8_53f0(puVar4,uVar5);
    puVar2 = (undefined2 *)((int)*param_1 + 0x70);
    (*(code *)*puVar2)(0x10d8,puVar4,uVar5);
    uVar6 = FUN_10d8_45a7(puVar4,uVar5);
    FUN_10d8_483b(puVar4,uVar5);
    if (*(char *)((int)puVar4 + 0x3a) == '\x02') {
      uVar3 = FUN_10e8_014d(0x10d8,1,uVar6,*(undefined2 *)(puVar4 + 0xd),
                            *(undefined2 *)((int)puVar4 + 0x36));
      FUN_10d8_124e(uVar3);
    }
    else {
      uVar3 = FUN_10e8_013d(0x10d8,uVar6,0,*(undefined2 *)(puVar4 + 0xd),
                            *(undefined2 *)((int)puVar4 + 0x36));
      FUN_10d8_124e(uVar3);
    }
    FUN_10d8_3a08(puVar4,uVar5);
    FUN_10d8_3191(puVar4,uVar5,1);
    FUN_10d8_4b1e(puVar4,uVar5,0);
    puVar2 = (undefined2 *)((int)*param_1 + 0x54);
    (*(code *)*puVar2)(0x10d8,puVar4,uVar5);
  }
  else if (cVar1 == '\x04') {
    FUN_10d8_5710(puVar4,uVar5,1);
  }
  return;
}



/* ---- FUN_10d8_558b @ 10d8:558b  (151 octets) ---- */

void __stdcall16far FUN_10d8_558b(undefined4 *param_1)

{
  char cVar1;
  undefined2 *puVar2;
  undefined4 *puVar3;
  undefined2 uVar4;
  undefined4 *puVar5;
  undefined2 uVar6;
  undefined4 *puVar7;
  undefined2 uVar8;
  undefined2 uVar9;
  undefined2 uVar10;
  undefined2 uVar11;
  
  uVar4 = (undefined2)((ulong)param_1 >> 0x10);
  puVar3 = (undefined4 *)param_1;
  cVar1 = *(char *)((int)puVar3 + 0x3a);
  if ((cVar1 == '\x02') || (cVar1 == '\x03')) {
    uVar11 = 7;
    uVar10 = 0;
    uVar9 = 0;
    puVar2 = (undefined2 *)((int)*param_1 + 0x38);
    puVar7 = puVar3;
    uVar8 = uVar4;
    (*(code *)*puVar2)();
    puVar2 = (undefined2 *)((int)*param_1 + 0x58);
    puVar5 = puVar3;
    uVar6 = uVar4;
    (*(code *)*puVar2)();
    FUN_10d8_483b(puVar3,uVar4);
    if (*(char *)((int)puVar3 + 0x3a) == '\x02') {
      FUN_10e8_037d(0x10d8,0,*(undefined2 *)(puVar3 + 0xd),*(undefined2 *)((int)puVar3 + 0x36),
                    puVar5,uVar6,puVar7,uVar8,uVar9,uVar10,uVar11);
    }
    FUN_10d8_3a08(puVar3,uVar4);
    FUN_10d8_3191(puVar3,uVar4,1);
    FUN_10d8_4b1e(puVar3,uVar4,0);
    puVar2 = (undefined2 *)((int)*param_1 + 0x3c);
    (*(code *)*puVar2)(0x10d8,puVar3,uVar4);
  }
  else if (cVar1 == '\x04') {
    FUN_10d8_5710(puVar3,uVar4,0);
  }
  return;
}



/* ---- FUN_10d8_5622 @ 10d8:5622  (198 octets) ---- */

void __stdcall16far FUN_10d8_5622(undefined4 *param_1)

{
  undefined2 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined2 uVar4;
  undefined2 unaff_CS;
  char cStack_3;
  
  uVar4 = (undefined2)((ulong)param_1 >> 0x10);
  puVar3 = (undefined4 *)param_1;
  if (*(char *)((int)puVar3 + 0x3a) == '\0') {
    unaff_CS = 0x10d8;
    FUN_10d8_11ef(0xf205);
  }
  if ((*(byte *)((int)puVar3 + 0x3a) < 3) || (4 < *(byte *)((int)puVar3 + 0x3a))) {
    if (*(int *)((int)puVar3 + 0x2e) == 0) {
      unaff_CS = 0x10d8;
      FUN_10d8_11ef(0xf20a);
    }
    puVar1 = (undefined2 *)((int)*param_1 + 0x38);
    (*(code *)*puVar1)(unaff_CS,puVar3,uVar4,0,0,7);
    puVar1 = (undefined2 *)((int)*param_1 + 0x60);
    (*(code *)*puVar1)(unaff_CS,puVar3,uVar4);
    FUN_10d8_483b(puVar3,uVar4);
    iVar2 = FUN_10e8_015d(0x10d8,0,0,*(undefined2 *)(puVar3 + 0xd),
                          *(undefined2 *)((int)puVar3 + 0x36));
    if ((iVar2 != 0) && (cStack_3 = (char)((uint)iVar2 >> 8), cStack_3 != '\"')) {
      FUN_10d8_122d(iVar2);
    }
    FUN_10d8_3a08(puVar3,uVar4);
    FUN_10d8_3191(puVar3,uVar4,1);
    FUN_10d8_4b1e(puVar3,uVar4,0);
    puVar1 = (undefined2 *)((int)*param_1 + 0x44);
    (*(code *)*puVar1)(0x10d8,puVar3,uVar4);
  }
  else {
    FUN_10d8_558b(puVar3,uVar4);
  }
  return;
}



/* ---- FUN_10d8_56e8 @ 10d8:56e8  (40 octets) ---- */

undefined4 __stdcall16far FUN_10d8_56e8(undefined4 param_1,char param_2)

{
  int iVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1 + param_2 * 4;
  return CONCAT22(*(undefined2 *)(iVar1 + 0x60),*(undefined2 *)(iVar1 + 0x5e));
}



/* ---- FUN_10d8_5710 @ 10d8:5710  (111 octets) ---- */

void __stdcall16far FUN_10d8_5710(undefined4 *param_1,char param_2)

{
  undefined2 *puVar1;
  undefined4 *puVar2;
  undefined2 uVar3;
  undefined4 *puVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  undefined2 uVar8;
  
  uVar8 = 7;
  uVar7 = 0;
  uVar6 = 0;
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  puVar2 = (undefined4 *)param_1;
  puVar1 = (undefined2 *)((int)*param_1 + 0x38);
  puVar4 = puVar2;
  uVar5 = uVar3;
  (*(code *)*puVar1)();
  if (param_2 == '\0') {
    FUN_1158_1ec1(*(int *)((int)puVar2 + 0x46) + 4,(int)*(undefined4 *)((int)puVar2 + 0x76),
                  (int)((ulong)*(undefined4 *)((int)puVar2 + 0x76) >> 0x10),
                  (int)*(undefined4 *)((int)puVar2 + 0x72),
                  (int)((ulong)*(undefined4 *)((int)puVar2 + 0x72) >> 0x10));
  }
  else {
    *(undefined *)*(undefined4 *)((int)puVar2 + 0x76) = *(undefined *)((int)puVar2 + 0x3e);
  }
  FUN_10d8_3191(puVar2,uVar3,1);
  puVar1 = (undefined2 *)((int)*param_1 + 0x38);
  (*(code *)*puVar1)(0x10d8,puVar2,uVar3,0,0,2,puVar4,uVar5,uVar6,uVar7,uVar8);
  return;
}



/* ---- FUN_10d8_5785 @ 10d8:5785  (193 octets) ---- */

void __cdecl16far FUN_10d8_5785(undefined4 param_1,int param_2,undefined4 param_3,char param_4)

{
  int iVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined4 uVar5;
  int iStack_e;
  undefined *puStack_c;
  undefined2 uStack_a;
  undefined2 uStack_8;
  int local_6;
  int local_4;
  
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  *(int *)(iVar1 + 0x50) = *(int *)(iVar1 + 0x50) + 1;
  *(undefined *)(iVar1 + 0x3a) = 4;
  *(undefined *)(iVar1 + 0x3e) = 0;
  iVar2 = iVar1 + param_4 * 4;
  uStack_8 = *(undefined2 *)(iVar2 + 0x60);
  uStack_a = *(undefined2 *)(iVar2 + 0x5e);
  iStack_e = iVar1;
  puStack_c = (undefined *)uVar3;
  uVar5 = FUN_10d8_42cd();
  *(undefined2 *)(iVar1 + 0x76) = (int)uVar5;
  *(undefined2 *)(iVar1 + 0x78) = (int)((ulong)uVar5 >> 0x10);
  uStack_8 = 0x10d8;
  uStack_a = 0x577f;
  iStack_e = (int)DAT_1160_1858;
  local_6 = param_2;
  if (-1 < param_2) {
    local_4 = 0;
    DAT_1160_1858 = &iStack_e;
    puStack_c = &stack0xfffe;
    while( true ) {
      uVar4 = (undefined2)((ulong)param_3 >> 0x10);
      iVar2 = (int)param_3 + local_4 * 8;
      uVar5 = FUN_10d8_3cfb(iVar1,uVar3,local_4);
      FUN_10d8_6277(uVar5,iVar2,uVar4);
      if (local_4 == local_6) break;
      local_4 = local_4 + 1;
    }
  }
  *(int *)((int)*(undefined4 *)(iVar1 + 0x76) + 2) = param_2 + 1;
  *(undefined *)*(undefined4 *)(iVar1 + 0x76) = *(undefined *)(iVar1 + 0x3e);
  DAT_1160_1858 = (int *)iStack_e;
  *(undefined *)(iVar1 + 0x3a) = 1;
  *(int *)(iVar1 + 0x50) = *(int *)(iVar1 + 0x50) + -1;
  return;
}



/* ---- FUN_10d8_584a @ 10d8:584a  (344 octets) ---- */

undefined __stdcall16far FUN_10d8_584a(undefined4 param_1)

{
  char cVar1;
  undefined2 uVar2;
  int iVar3;
  undefined2 uVar4;
  undefined local_3;
  
  local_3 = 0;
  uVar4 = (undefined2)((ulong)param_1 >> 0x10);
  iVar3 = (int)param_1;
  cVar1 = FUN_10d8_0e9d(*(int *)(iVar3 + 0x46) + 4,*(undefined2 *)(iVar3 + 0x6a),
                        *(undefined2 *)(iVar3 + 0x6c),*(undefined2 *)(iVar3 + 0x62),
                        *(undefined2 *)(iVar3 + 100));
  if ((cVar1 == '\0') ||
     (cVar1 = FUN_10d8_0e9d(*(int *)(iVar3 + 0x46) + 4,*(undefined2 *)(iVar3 + 0x6e),
                            *(undefined2 *)(iVar3 + 0x70),*(undefined2 *)(iVar3 + 0x66),
                            *(undefined2 *)(iVar3 + 0x68)), cVar1 == '\0')) {
    uVar2 = FUN_10e8_017d();
    FUN_10d8_124e(uVar2);
    FUN_1158_1ec1(*(int *)(iVar3 + 0x46) + 4,(int)*(undefined4 *)(iVar3 + 0x6a),
                  (int)((ulong)*(undefined4 *)(iVar3 + 0x6a) >> 0x10),
                  (int)*(undefined4 *)(iVar3 + 0x62),
                  (int)((ulong)*(undefined4 *)(iVar3 + 0x62) >> 0x10));
    FUN_1158_1ec1(*(int *)(iVar3 + 0x46) + 4,(int)*(undefined4 *)(iVar3 + 0x6e),
                  (int)((ulong)*(undefined4 *)(iVar3 + 0x6e) >> 0x10),
                  (int)*(undefined4 *)(iVar3 + 0x66),
                  (int)((ulong)*(undefined4 *)(iVar3 + 0x66) >> 0x10));
    local_3 = 1;
  }
  return local_3;
}



/* ---- FUN_10d8_59a2 @ 10d8:59a2  (103 octets) ---- */

undefined2 __stdcall16far FUN_10d8_59a2(undefined4 param_1)

{
  undefined2 in_AX;
  undefined uVar2;
  undefined2 uVar1;
  undefined extraout_AH;
  int iVar3;
  undefined2 uVar4;
  undefined local_3;
  
  uVar2 = (undefined)((uint)in_AX >> 8);
  local_3 = 0;
  uVar4 = (undefined2)((ulong)param_1 >> 0x10);
  iVar3 = (int)param_1;
  if ((*(char *)*(undefined4 *)(iVar3 + 0x6a) != '\0') ||
     (*(char *)*(undefined4 *)(iVar3 + 0x6e) != '\0')) {
    uVar1 = FUN_10e8_018d();
    FUN_10d8_124e(uVar1);
    FUN_10d8_42cd(iVar3,uVar4,*(undefined2 *)(iVar3 + 0x6a),*(undefined2 *)(iVar3 + 0x6c));
    FUN_10d8_42cd(iVar3,uVar4,*(undefined2 *)(iVar3 + 0x6e),*(undefined2 *)(iVar3 + 0x70));
    local_3 = 1;
    uVar2 = extraout_AH;
  }
  return CONCAT11(uVar2,local_3);
}



/* ---- FUN_10d8_5a0f @ 10d8:5a0f  (191 octets) ---- */

void __cdecl16far FUN_10d8_5a0f(undefined4 param_1,undefined4 param_2)

{
  undefined uVar1;
  undefined2 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  undefined2 uStack_10;
  undefined *puStack_e;
  undefined2 uStack_c;
  int local_6;
  
  puStack_e = &stack0xfffe;
  uVar6 = (undefined2)((ulong)param_1 >> 0x10);
  iVar4 = (int)param_1;
  *(int *)(iVar4 + 0x50) = *(int *)(iVar4 + 0x50) + 1;
  uVar1 = *(undefined *)(iVar4 + 0x3a);
  *(undefined *)(iVar4 + 0x3a) = 4;
  uStack_c = 0x5a09;
  uStack_10 = DAT_1160_1858;
  DAT_1160_1858 = &uStack_10;
  uVar8 = FUN_10d8_42cd(iVar4,uVar6,*(undefined2 *)(iVar4 + 0x62),*(undefined2 *)(iVar4 + 100));
  *(undefined2 *)(iVar4 + 0x76) = (int)uVar8;
  *(undefined2 *)(iVar4 + 0x78) = (int)((ulong)uVar8 >> 0x10);
  *(undefined *)*(undefined4 *)(iVar4 + 0x76) = 1;
  uVar7 = (undefined2)((ulong)param_2 >> 0x10);
  iVar5 = (int)param_2;
  iVar3 = *(int *)(iVar5 + 8) + -1;
  if (-1 < iVar3) {
    local_6 = 0;
    while( true ) {
      uVar8 = FUN_1148_0dd0(iVar5,uVar7,local_6);
      puVar9 = (undefined4 *)FUN_10d8_3cfb(iVar4,uVar6,local_6);
      puVar2 = (undefined2 *)((int)*puVar9 + 8);
      (*(code *)*puVar2)(0x10d8,puVar9,uVar8);
      if (local_6 == iVar3) break;
      local_6 = local_6 + 1;
    }
  }
  *(undefined2 *)((int)*(undefined4 *)(iVar4 + 0x76) + 2) = *(undefined2 *)(iVar5 + 8);
  DAT_1160_1858 = (undefined2 *)uStack_10;
  *(undefined *)(iVar4 + 0x3a) = uVar1;
  *(int *)(iVar4 + 0x50) = *(int *)(iVar4 + 0x50) + -1;
  return;
}



/* ---- FUN_10d8_5af4 @ 10d8:5af4  (40 octets) ---- */

void __stdcall16far FUN_10d8_5af4(undefined4 param_1)

{
  undefined2 *puVar1;
  
  if (*(int *)((int)param_1 + 0xfa) != 0) {
    puVar1 = (undefined2 *)((int)param_1 + 0xf8);
    (*(code *)*puVar1)();
  }
  return;
}



/* ---- FUN_10d8_5b1c @ 10d8:5b1c  (40 octets) ---- */

void __stdcall16far FUN_10d8_5b1c(undefined4 param_1)

{
  undefined2 *puVar1;
  
  if (*(int *)((int)param_1 + 0xba) != 0) {
    puVar1 = (undefined2 *)((int)param_1 + 0xb8);
    (*(code *)*puVar1)();
  }
  return;
}



/* ---- FUN_10d8_5b44 @ 10d8:5b44  (40 octets) ---- */

void __stdcall16far FUN_10d8_5b44(undefined4 param_1)

{
  undefined2 *puVar1;
  
  if (*(int *)((int)param_1 + 0x10a) != 0) {
    puVar1 = (undefined2 *)((int)param_1 + 0x108);
    (*(code *)*puVar1)();
  }
  return;
}



/* ---- FUN_10d8_5b6c @ 10d8:5b6c  (40 octets) ---- */

void __stdcall16far FUN_10d8_5b6c(undefined4 param_1)

{
  undefined2 *puVar1;
  
  if (*(int *)((int)param_1 + 0xda) != 0) {
    puVar1 = (undefined2 *)((int)param_1 + 0xd8);
    (*(code *)*puVar1)();
  }
  return;
}



/* ---- FUN_10d8_5b94 @ 10d8:5b94  (40 octets) ---- */

void __stdcall16far FUN_10d8_5b94(undefined4 param_1)

{
  undefined2 *puVar1;
  
  if (*(int *)((int)param_1 + 0xca) != 0) {
    puVar1 = (undefined2 *)((int)param_1 + 200);
    (*(code *)*puVar1)();
  }
  return;
}



/* ---- FUN_10d8_5bbc @ 10d8:5bbc  (40 octets) ---- */

void __stdcall16far FUN_10d8_5bbc(undefined4 param_1)

{
  undefined2 *puVar1;
  
  if (*(int *)((int)param_1 + 0xaa) != 0) {
    puVar1 = (undefined2 *)((int)param_1 + 0xa8);
    (*(code *)*puVar1)();
  }
  return;
}



/* ---- FUN_10d8_5be4 @ 10d8:5be4  (40 octets) ---- */

void __stdcall16far FUN_10d8_5be4(undefined4 param_1)

{
  undefined2 *puVar1;
  
  if (*(int *)((int)param_1 + 0xea) != 0) {
    puVar1 = (undefined2 *)((int)param_1 + 0xe8);
    (*(code *)*puVar1)();
  }
  return;
}



/* ---- FUN_10d8_5c0c @ 10d8:5c0c  (40 octets) ---- */

void __stdcall16far FUN_10d8_5c0c(undefined4 param_1)

{
  undefined2 *puVar1;
  
  if (*(int *)((int)param_1 + 0xf2) != 0) {
    puVar1 = (undefined2 *)((int)param_1 + 0xf0);
    (*(code *)*puVar1)();
  }
  return;
}



/* ---- FUN_10d8_5c34 @ 10d8:5c34  (40 octets) ---- */

void __stdcall16far FUN_10d8_5c34(undefined4 param_1)

{
  undefined2 *puVar1;
  
  if (*(int *)((int)param_1 + 0xb2) != 0) {
    puVar1 = (undefined2 *)((int)param_1 + 0xb0);
    (*(code *)*puVar1)();
  }
  return;
}



/* ---- FUN_10d8_5c5c @ 10d8:5c5c  (40 octets) ---- */

void __stdcall16far FUN_10d8_5c5c(undefined4 param_1)

{
  undefined2 *puVar1;
  
  if (*(int *)((int)param_1 + 0x102) != 0) {
    puVar1 = (undefined2 *)((int)param_1 + 0x100);
    (*(code *)*puVar1)();
  }
  return;
}



/* ---- FUN_10d8_5c84 @ 10d8:5c84  (40 octets) ---- */

void __stdcall16far FUN_10d8_5c84(undefined4 param_1)

{
  undefined2 *puVar1;
  
  if (*(int *)((int)param_1 + 0xd2) != 0) {
    puVar1 = (undefined2 *)((int)param_1 + 0xd0);
    (*(code *)*puVar1)();
  }
  return;
}



/* ---- FUN_10d8_5cac @ 10d8:5cac  (40 octets) ---- */

void __stdcall16far FUN_10d8_5cac(undefined4 param_1)

{
  undefined2 *puVar1;
  
  if (*(int *)((int)param_1 + 0xc2) != 0) {
    puVar1 = (undefined2 *)((int)param_1 + 0xc0);
    (*(code *)*puVar1)();
  }
  return;
}



/* ---- FUN_10d8_5cd4 @ 10d8:5cd4  (40 octets) ---- */

void __stdcall16far FUN_10d8_5cd4(undefined4 param_1)

{
  undefined2 *puVar1;
  
  if (*(int *)((int)param_1 + 0xa2) != 0) {
    puVar1 = (undefined2 *)((int)param_1 + 0xa0);
    (*(code *)*puVar1)();
  }
  return;
}



/* ---- FUN_10d8_5cfc @ 10d8:5cfc  (40 octets) ---- */

void __stdcall16far FUN_10d8_5cfc(undefined4 param_1)

{
  undefined2 *puVar1;
  
  if (*(int *)((int)param_1 + 0xe2) != 0) {
    puVar1 = (undefined2 *)((int)param_1 + 0xe0);
    (*(code *)*puVar1)();
  }
  return;
}



/* ---- FUN_10d8_5d24 @ 10d8:5d24  (40 octets) ---- */

void __stdcall16far FUN_10d8_5d24(undefined4 param_1)

{
  undefined2 *puVar1;
  
  if (*(int *)((int)param_1 + 0x11a) != 0) {
    puVar1 = (undefined2 *)((int)param_1 + 0x118);
    (*(code *)*puVar1)();
  }
  return;
}



/* ---- FUN_10d8_5d4c @ 10d8:5d4c  (40 octets) ---- */

void __stdcall16far FUN_10d8_5d4c(undefined4 param_1)

{
  undefined2 *puVar1;
  
  if (*(int *)((int)param_1 + 0x112) != 0) {
    puVar1 = (undefined2 *)((int)param_1 + 0x110);
    (*(code *)*puVar1)();
  }
  return;
}



/* ---- FUN_10d8_5d74 @ 10d8:5d74  (96 octets) ---- */

void __stdcall16far FUN_10d8_5d74(undefined4 *param_1)

{
  undefined2 *puVar1;
  char cVar2;
  undefined2 uVar3;
  undefined4 *puVar4;
  undefined2 uVar5;
  undefined4 *puVar6;
  undefined2 uVar7;
  undefined2 uVar8;
  
  uVar8 = 0;
  uVar7 = 1;
  uVar5 = (undefined2)((ulong)param_1 >> 0x10);
  puVar4 = (undefined4 *)param_1;
  puVar1 = (undefined2 *)((int)*param_1 + 0x90);
  puVar6 = puVar4;
  uVar3 = uVar5;
  (*(code *)*puVar1)();
  FUN_10d8_330b(puVar4,uVar5);
  cVar2 = FUN_10d8_217a((int)puVar4[0x49],(int)((ulong)puVar4[0x49] >> 0x10));
  if (cVar2 != '\0') {
    if (*(char *)((int)puVar4 + 0x3d) != '\0') {
      uVar3 = FUN_10e8_21bd(0x10d8,(int)*(char *)((int)puVar4 + 0x122),
                            (int)*(char *)((int)puVar4 + 0x122) >> 0xf,0,0x405,
                            *(undefined2 *)(puVar4 + 0xd),*(undefined2 *)((int)puVar4 + 0x36),puVar6
                            ,uVar3,uVar7,uVar8);
      FUN_10d8_124e(uVar3);
    }
  }
  return;
}



/* ---- FUN_10d8_5dd4 @ 10d8:5dd4  (34 octets) ---- */

void __stdcall16far FUN_10d8_5dd4(undefined4 *param_1)

{
  undefined2 *puVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  FUN_10d8_3370((undefined4 *)param_1,uVar2);
  puVar1 = (undefined2 *)((int)*param_1 + 0x90);
  (*(code *)*puVar1)(0x10d8,(undefined4 *)param_1,uVar2,0,0);
  return;
}



/* ---- FUN_10d8_5df6 @ 10d8:5df6  (17 octets) ---- */

void __stdcall16far FUN_10d8_5df6(undefined4 param_1)

{
  FUN_10d8_31d2((int)param_1,(int)((ulong)param_1 >> 0x10));
  return;
}



/* ---- FUN_10d8_5e07 @ 10d8:5e07  (292 octets) ---- */

void __stdcall16far FUN_10d8_5e07(undefined4 param_1,char param_2,byte param_3)

{
  undefined2 uVar1;
  int iVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  
  if (param_2 == '\0') {
    if ((param_3 < 0x10) &&
       ((*(uint *)((int)param_1 + 0x120) & (1 << (param_3 & 0xf) | 1U >> 0x10 - (param_3 & 0xf))) !=
        0)) {
      if (param_3 < 0x10) {
        *(uint *)((int)param_1 + 0x120) =
             *(uint *)((int)param_1 + 0x120) &
             (-2 << (param_3 & 0xf) | 0xfffeU >> 0x10 - (param_3 & 0xf));
      }
      if (*(int *)((int)param_1 + 0x120) == 0) {
        uVar3 = (undefined2)((ulong)DAT_1160_2ac6 >> 0x10);
        uVar1 = *(undefined2 *)((int)DAT_1160_2ac6 + 0x20);
        *(undefined2 *)((int)param_1 + 0x56) = *(undefined2 *)((int)DAT_1160_2ac6 + 0x1e);
        *(undefined2 *)((int)param_1 + 0x58) = uVar1;
        uVar4 = *(undefined4 *)((int)*(undefined4 *)((int)param_1 + 0x124) + 0x1a);
        FUN_1148_0fa7((int)uVar4,(int)((ulong)uVar4 >> 0x10),(int)param_1,param_1._2_2_);
        FUN_10d8_17d3((int)DAT_1160_2ac6,(int)((ulong)DAT_1160_2ac6 >> 0x10),
                      *(undefined2 *)((int)param_1 + 0x124),*(undefined2 *)((int)param_1 + 0x126));
        *(undefined2 *)((int)param_1 + 0x124) = 0;
        *(undefined2 *)((int)param_1 + 0x126) = 0;
      }
    }
  }
  else if ((0xf < param_3) ||
          ((*(uint *)((int)param_1 + 0x120) & (1 << (param_3 & 0xf) | 1U >> 0x10 - (param_3 & 0xf)))
           == 0)) {
    if (*(int *)((int)param_1 + 0x120) == 0) {
      uVar4 = FUN_10d8_1b96((int)DAT_1160_2ac6,(int)((ulong)DAT_1160_2ac6 >> 0x10),
                            (int)param_1 + 0x128,param_1._2_2_);
      *(undefined2 *)((int)param_1 + 0x124) = (int)uVar4;
      *(undefined2 *)((int)param_1 + 0x126) = (int)((ulong)uVar4 >> 0x10);
      uVar4 = *(undefined4 *)((int)*(undefined4 *)((int)param_1 + 0x124) + 0x1a);
      FUN_1148_0c2b((int)uVar4,(int)((ulong)uVar4 >> 0x10),(int)param_1,param_1._2_2_);
      uVar3 = (undefined2)((ulong)*(undefined4 *)((int)param_1 + 0x124) >> 0x10);
      iVar2 = (int)*(undefined4 *)((int)param_1 + 0x124);
      uVar1 = *(undefined2 *)(iVar2 + 0x32);
      *(undefined2 *)((int)param_1 + 0x56) = *(undefined2 *)(iVar2 + 0x30);
      *(undefined2 *)((int)param_1 + 0x58) = uVar1;
    }
    if (param_3 < 0x10) {
      *(uint *)((int)param_1 + 0x120) =
           *(uint *)((int)param_1 + 0x120) | 1 << (param_3 & 0xf) | 1U >> 0x10 - (param_3 & 0xf);
    }
  }
  return;
}



/* ---- FUN_10d8_5f2b @ 10d8:5f2b  (58 octets) ---- */

undefined4 __stdcall16far FUN_10d8_5f2b(undefined4 param_1)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 local_6;
  undefined2 local_4;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  if (*(int *)(iVar1 + 0x124) == 0 && *(int *)(iVar1 + 0x126) == 0) {
    local_6 = 0;
    local_4 = 0;
  }
  else {
    uVar3 = (undefined2)((ulong)*(undefined4 *)(iVar1 + 0x124) >> 0x10);
    iVar1 = (int)*(undefined4 *)(iVar1 + 0x124);
    local_6 = *(undefined2 *)(iVar1 + 0x28);
    local_4 = *(undefined2 *)(iVar1 + 0x2a);
  }
  return CONCAT22(local_4,local_6);
}



/* ---- FUN_10d8_5f65 @ 10d8:5f65  (68 octets) ---- */

undefined4 __stdcall16far FUN_10d8_5f65(undefined4 param_1)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 local_6;
  undefined2 local_4;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  if (*(int *)(iVar1 + 0x124) == 0 && *(int *)(iVar1 + 0x126) == 0) {
    uVar2 = (undefined2)((ulong)DAT_1160_2ac6 >> 0x10);
    local_6 = *(undefined2 *)((int)DAT_1160_2ac6 + 0x1e);
    local_4 = *(undefined2 *)((int)DAT_1160_2ac6 + 0x20);
  }
  else {
    uVar3 = (undefined2)((ulong)*(undefined4 *)(iVar1 + 0x124) >> 0x10);
    iVar1 = (int)*(undefined4 *)(iVar1 + 0x124);
    local_6 = *(undefined2 *)(iVar1 + 0x30);
    local_4 = *(undefined2 *)(iVar1 + 0x32);
  }
  return CONCAT22(local_4,local_6);
}



/* ---- FUN_10d8_5fa9 @ 10d8:5fa9  (69 octets) ---- */

void __stdcall16far FUN_10d8_5fa9(undefined4 *param_1,undefined4 param_2)

{
  undefined2 *puVar1;
  undefined4 *puVar2;
  undefined2 uVar3;
  
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  puVar2 = (undefined4 *)param_1;
  if (*(int *)(puVar2 + 0x49) != 0 || *(int *)((int)puVar2 + 0x126) != 0) {
    FUN_10d8_11ef(0xf202);
  }
  FUN_1158_17e7(0x4f,puVar2 + 0x4a,uVar3,(int)param_2,(int)((ulong)param_2 >> 0x10));
  puVar1 = (undefined2 *)((int)*param_1 + 0x38);
  (*(code *)*puVar1)(0x1158,puVar2,uVar3,0,0,8);
  return;
}



/* ---- FUN_10d8_5fee @ 10d8:5fee  (112 octets) ---- */

undefined4 __stdcall16far
FUN_10d8_5fee(undefined4 param_1,char param_2,undefined2 param_3,undefined2 param_4)

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
  *(undefined *)(iVar2 + 0x26) = 1;
  uVar1 = DAT_1160_1718;
  *(undefined2 *)(iVar2 + 0x1e) = DAT_1160_1716;
  *(undefined2 *)(iVar2 + 0x20) = uVar1;
  uVar1 = DAT_1160_1718;
  *(undefined2 *)(iVar2 + 0x34) = DAT_1160_1716;
  *(undefined2 *)(iVar2 + 0x36) = uVar1;
  uVar1 = DAT_1160_1718;
  *(undefined2 *)(iVar2 + 0x38) = DAT_1160_1716;
  *(undefined2 *)(iVar2 + 0x3a) = uVar1;
  if (param_2 != '\0') {
    DAT_1160_1858 = uStack_a;
  }
  return param_1;
}



/* ---- FUN_10d8_605e @ 10d8:605e  (123 octets) ---- */

void __stdcall16far FUN_10d8_605e(undefined4 param_1,char param_2)

{
  int iVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  if (*(int *)(iVar1 + 0x1a) != 0 || *(int *)(iVar1 + 0x1c) != 0) {
    FUN_10d8_31d2((int)*(undefined4 *)(iVar1 + 0x1a),
                  (int)((ulong)*(undefined4 *)(iVar1 + 0x1a) >> 0x10));
    FUN_10d8_3b0a((int)*(undefined4 *)(iVar1 + 0x1a),
                  (int)((ulong)*(undefined4 *)(iVar1 + 0x1a) >> 0x10),iVar1,uVar2);
  }
  FUN_1150_0624(*(undefined2 *)(iVar1 + 0x38),*(undefined2 *)(iVar1 + 0x3a));
  FUN_1150_0624(*(undefined2 *)(iVar1 + 0x34),*(undefined2 *)(iVar1 + 0x36));
  FUN_1150_0624(*(undefined2 *)(iVar1 + 0x1e),*(undefined2 *)(iVar1 + 0x20));
  FUN_1148_4c2b(iVar1,uVar2,0);
  if (param_2 != '\0') {
    FUN_1158_200f();
  }
  return;
}



/* ---- FUN_10d8_60d9 @ 10d8:60d9  (68 octets) ---- */

void __stdcall16far FUN_10d8_60d9(undefined4 param_1,undefined4 param_2)

{
  undefined2 unaff_SS;
  undefined2 uVar1;
  undefined4 local_12;
  undefined local_e;
  undefined2 local_a;
  undefined2 local_8;
  undefined local_6;
  
  uVar1 = 0xf218;
  local_12 = FUN_10d8_67f6((int)param_1,(int)((ulong)param_1 >> 0x10));
  local_e = 4;
  local_8 = (undefined2)((ulong)param_2 >> 0x10);
  local_a = (undefined2)param_2;
  local_6 = 4;
  FUN_10d8_120a(1,&local_12,unaff_SS,uVar1);
  return;
}



/* ---- FUN_10d8_611d @ 10d8:611d  (275 octets) ---- */

void __stdcall16far FUN_10d8_611d(undefined4 *param_1,undefined4 param_2)

{
  undefined2 *puVar1;
  char cVar2;
  undefined4 *puVar3;
  undefined2 uVar4;
  undefined2 unaff_SS;
  undefined2 uVar5;
  undefined4 local_112;
  undefined local_10e;
  undefined4 local_10a;
  undefined local_106;
  undefined local_102 [256];
  
  puVar3 = (undefined4 *)param_1;
  uVar4 = (undefined2)((ulong)param_1 >> 0x10);
  if ((int)param_2 == 0 && param_2._2_2_ == 0) {
    puVar1 = (undefined2 *)((int)*param_1 + 0x6c);
    (*(code *)*puVar1)();
  }
  else {
    cVar2 = FUN_1158_2255(0xab2,0x10d8,(int)param_2,param_2._2_2_);
    if (cVar2 == '\0') {
      FUN_1148_10fa(puVar3,uVar4,(int)param_2,param_2._2_2_);
    }
    else {
      if ((((*(int *)((int)puVar3 + 0x2e) == 0) || (*(int *)((int)param_2 + 0x2e) == 0)) ||
          (*(char *)((int)puVar3 + 0x22) != *(char *)((int)param_2 + 0x22))) ||
         (((*(int *)((int)puVar3 + 0x2a) != *(int *)((int)param_2 + 0x2a) ||
           (*(char *)((int)puVar3 + 0x22) == '\x0e')) || (0x100 < *(uint *)(puVar3 + 0xb))))) {
        uVar5 = 0xf219;
        local_112 = FUN_10d8_67f6(puVar3,uVar4);
        local_10e = 4;
        local_10a = FUN_10d8_67f6((int)param_2,param_2._2_2_);
        local_106 = 4;
        FUN_10d8_120a(1,&local_112,unaff_SS,uVar5);
      }
      cVar2 = FUN_10d8_6635((int)param_2,param_2._2_2_,local_102,unaff_SS);
      if (cVar2 == '\0') {
        FUN_10d8_6bde(puVar3,uVar4,0,0);
      }
      else {
        FUN_10d8_6bde(puVar3,uVar4,local_102);
      }
    }
  }
  return;
}



/* ---- FUN_10d8_6230 @ 10d8:6230  (55 octets) ---- */

void FUN_10d8_6230(int param_1)

{
  undefined2 unaff_SS;
  undefined2 uVar1;
  undefined4 local_a;
  undefined local_6;
  
  uVar1 = 0xf21a;
  local_a = FUN_10d8_67f6((int)*(undefined4 *)(param_1 + 6),
                          (int)((ulong)*(undefined4 *)(param_1 + 6) >> 0x10));
  local_6 = 4;
  FUN_10d8_120a(0,&local_a,unaff_SS,uVar1);
  return;
}



/* ---- FUN_10d8_6277 @ 10d8:6277  (300 octets) ---- */

void __stdcall16far FUN_10d8_6277(undefined4 *param_1,int *param_2)

{
  undefined2 *puVar1;
  char cVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  
  uVar5 = (undefined2)((ulong)param_2 >> 0x10);
  piVar3 = (int *)param_2;
  uVar6 = 0x10d8;
  puVar4 = (undefined4 *)param_1;
  switch(*(undefined *)(piVar3 + 2)) {
  case 0:
    puVar1 = (undefined2 *)((int)*param_1 + 0x60);
    (*(code *)*puVar1)(0x10d8,puVar4);
    break;
  case 1:
    puVar1 = (undefined2 *)((int)*param_1 + 0x54);
    (*(code *)*puVar1)(0x10d8);
    break;
  case 2:
    FUN_1158_18e9();
    puVar1 = (undefined2 *)((int)*param_1 + 100);
    (*(code *)*puVar1)(0x1158,puVar4);
    break;
  case 3:
    puVar1 = (undefined2 *)((int)*param_1 + 0x5c);
    (*(code *)*puVar1)(0x10d8,puVar4,(int)((ulong)param_1 >> 0x10),(double)**(longdouble **)param_2)
    ;
    break;
  case 4:
    puVar1 = (undefined2 *)((int)*param_1 + 100);
    (*(code *)*puVar1)(0x10d8,puVar4);
    break;
  case 5:
    if (*param_2 != 0 || piVar3[1] != 0) {
      FUN_10d8_6230();
    }
    break;
  case 6:
    FUN_1150_0e6e(*param_2);
    puVar1 = (undefined2 *)((int)*param_1 + 100);
    (*(code *)*puVar1)(0x1150,puVar4);
    break;
  case 7:
    if (*param_2 != 0 || piVar3[1] != 0) {
      uVar6 = 0x1158;
      cVar2 = FUN_1158_2255(0x2d1,(int6)(CONCAT44(CONCAT22(piVar3[1],*param_2),&UNK_1148_0000) >>
                                        0x10));
      if (cVar2 == '\0') {
        FUN_10d8_6230();
        return;
      }
    }
    puVar1 = (undefined2 *)((int)*param_1 + 8);
    (*(code *)*puVar1)(uVar6,puVar4);
    break;
  default:
    FUN_10d8_6230();
  }
  return;
}



/* ---- FUN_10d8_63a3 @ 10d8:63a3  (36 octets) ---- */

void __stdcall16far FUN_10d8_63a3(undefined4 param_1)

{
  undefined2 *puVar1;
  
  if (*(int *)((int)param_1 + 0x42) != 0) {
    puVar1 = (undefined2 *)((int)param_1 + 0x40);
    (*(code *)*puVar1)();
  }
  return;
}



/* ---- FUN_10d8_63c7 @ 10d8:63c7  (43 octets) ---- */

void __stdcall16far FUN_10d8_63c7(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  undefined2 uVar3;
  
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  iVar2 = (int)param_1;
  if (*(int *)(iVar2 + 0x1a) != 0 || *(int *)(iVar2 + 0x1c) != 0) {
    cVar1 = FUN_10d8_3202((int)*(undefined4 *)(iVar2 + 0x1a),
                          (int)((ulong)*(undefined4 *)(iVar2 + 0x1a) >> 0x10));
    if (cVar1 != '\0') {
      FUN_10d8_11ef(0xf204);
    }
  }
  return;
}



/* ---- FUN_10d8_63f2 @ 10d8:63f2  (21 octets) ---- */

void __stdcall16far FUN_10d8_63f2(undefined4 param_1)

{
  FUN_10d8_6bde((int)param_1,(int)((ulong)param_1 >> 0x10),0,0);
  return;
}



/* ---- FUN_10d8_6407 @ 10d8:6407  (31 octets) ---- */

void __stdcall16far FUN_10d8_6407(undefined4 param_1)

{
  undefined2 *puVar1;
  
  puVar1 = (undefined2 *)((int)*(undefined4 *)*(undefined4 *)((int)param_1 + 0x1a) + 0x38);
  (*(code *)*puVar1)();
  return;
}



/* ---- FUN_10d8_6426 @ 10d8:6426  (71 octets) ---- */

void __stdcall16far FUN_10d8_6426(undefined4 param_1)

{
  undefined2 *puVar1;
  undefined4 *puVar2;
  char cVar3;
  int iVar4;
  undefined2 uVar5;
  int local_6;
  undefined2 local_4;
  
  uVar5 = (undefined2)((ulong)param_1 >> 0x10);
  iVar4 = (int)param_1;
  if (*(int *)(iVar4 + 0x1a) != 0 || *(int *)(iVar4 + 0x1c) != 0) {
    cVar3 = FUN_10d8_3202((int)*(undefined4 *)(iVar4 + 0x1a),
                          (int)((ulong)*(undefined4 *)(iVar4 + 0x1a) >> 0x10));
    if (cVar3 != '\0') {
      puVar2 = (undefined4 *)*(undefined4 *)(iVar4 + 0x1a);
      puVar1 = (undefined2 *)((int)*puVar2 + 0x38);
      local_6 = iVar4;
      local_4 = uVar5;
      (*(code *)*puVar1)(0x10d8,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),&local_6);
    }
  }
  return;
}



/* ---- FUN_10d8_646d @ 10d8:646d  (7 octets) ---- */

void __stdcall16far FUN_10d8_646d(void)

{
  return;
}



/* ---- FUN_10d8_65ca @ 10d8:65ca  (107 octets) ---- */

undefined __stdcall16far FUN_10d8_65ca(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  undefined2 uVar3;
  undefined local_3;
  
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  iVar2 = (int)param_1;
  if (*(int *)(iVar2 + 0x2e) < 1) {
    local_3 = 0;
  }
  else if (*(char *)((int)*(undefined4 *)(iVar2 + 0x1a) + 0x3a) == '\x04') {
    if ((*(int *)((int)*(undefined4 *)(iVar2 + 0x1a) + 0x7e) == 0) ||
       (cVar1 = FUN_10d8_6973(iVar2,uVar3), cVar1 != '\0')) {
      local_3 = 1;
    }
    else {
      local_3 = 0;
    }
  }
  else if ((*(char *)(iVar2 + 0x23) == '\0') &&
          (*(char *)((int)*(undefined4 *)(iVar2 + 0x1a) + 0x3d) != '\0')) {
    local_3 = 1;
  }
  else {
    local_3 = 0;
  }
  return local_3;
}



/* ---- FUN_10d8_6635 @ 10d8:6635  (397 octets) ---- */

char __stdcall16far FUN_10d8_6635(undefined4 param_1,undefined4 param_2)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  undefined2 unaff_CS;
  undefined2 unaff_SS;
  undefined2 uVar7;
  undefined4 local_12;
  undefined4 local_e;
  undefined4 local_a;
  int local_6;
  char local_3;
  
  uVar5 = (undefined2)((ulong)param_1 >> 0x10);
  iVar2 = (int)param_1;
  if (*(int *)(iVar2 + 0x1a) == 0 && *(int *)(iVar2 + 0x1c) == 0) {
    uVar7 = 0xf209;
    local_12 = FUN_10d8_67f6(iVar2,uVar5);
    local_e = CONCAT31(local_e._1_3_,4);
    unaff_CS = 0x10d8;
    FUN_10d8_120a(0,&local_12,unaff_SS,uVar7);
  }
  local_3 = '\0';
  local_e = *(undefined4 *)(iVar2 + 0x1a);
  uVar7 = (undefined2)((ulong)local_e >> 0x10);
  iVar3 = (int)local_e;
  if (*(char *)(iVar3 + 0x3a) == '\x04') {
    local_a._2_2_ = *(int *)(iVar3 + 0x78);
    local_a._0_2_ = *(int *)(iVar3 + 0x76) + 4;
  }
  else if (*(char *)(iVar3 + 0x3a) == '\x05') {
    local_a._0_2_ = *(int *)(iVar3 + 0x7a);
    local_a._2_2_ = *(int *)(iVar3 + 0x7c);
  }
  else {
    if (*(int *)(iVar3 + 0x2e) <= *(int *)(iVar3 + 0x30)) {
      return '\0';
    }
    uVar6 = (undefined2)((ulong)*(undefined4 *)(iVar3 + 0x26) >> 0x10);
    piVar4 = (int *)((int)*(undefined4 *)(iVar3 + 0x26) + *(int *)(iVar3 + 0x30) * 4);
    local_a._0_2_ = *piVar4;
    local_a._2_2_ = piVar4[1];
  }
  if (*(int *)(iVar2 + 0x2e) < 1) {
    if ((*(int *)(iVar2 + 0x2e) < 0) && (*(char *)(iVar3 + 0x3a) != '\x04')) {
      pcVar1 = (char *)((int)local_a + *(int *)(iVar3 + 0x46) + *(int *)(iVar2 + 0x30));
      local_a = (char *)CONCAT22(local_a._2_2_,pcVar1);
      local_3 = *local_a;
      if ((local_3 != '\0') && ((int)param_2 != 0 || param_2._2_2_ != 0)) {
        FUN_1158_1ec1(*(undefined2 *)(iVar2 + 0x2c),(int)param_2,param_2._2_2_,pcVar1 + 1,
                      local_a._2_2_);
      }
    }
  }
  else if (*(char *)(iVar2 + 0x28) == '\0') {
    uVar5 = FUN_10e8_06ed(unaff_CS,&local_6);
    FUN_10d8_124e(uVar5);
    local_3 = local_6 == 0;
  }
  else {
    local_3 = *(int *)(iVar2 + 0x3c) != 0 || *(int *)(iVar2 + 0x3e) != 0;
    if (((bool)local_3) && ((int)param_2 != 0 || param_2._2_2_ != 0)) {
      FUN_1158_1ec1(*(undefined2 *)(iVar2 + 0x2c),(int)param_2,param_2._2_2_,
                    (int)*(undefined4 *)(iVar2 + 0x3c),
                    (int)((ulong)*(undefined4 *)(iVar2 + 0x3c) >> 0x10));
    }
  }
  return local_3;
}



/* ---- FUN_10d8_67c2 @ 10d8:67c2  (16 octets) ---- */

undefined2 __stdcall16far FUN_10d8_67c2(void)

{
  return 10;
}



/* ---- FUN_10d8_67d2 @ 10d8:67d2  (36 octets) ---- */

void __stdcall16far FUN_10d8_67d2(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_10d8_67f6((int)param_1,(int)((ulong)param_1 >> 0x10));
  FUN_1158_17e7(0xff,(int)param_2,(int)((ulong)param_2 >> 0x10),uVar1);
  return;
}



/* ---- FUN_10d8_67f6 @ 10d8:67f6  (63 octets) ---- */

undefined4 __stdcall16far FUN_10d8_67f6(undefined4 param_1)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 local_6;
  undefined2 local_4;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  if (*(char *)*(undefined4 *)(iVar1 + 0x34) == '\0') {
    local_6 = *(undefined2 *)(iVar1 + 0x1e);
    local_4 = *(undefined2 *)(iVar1 + 0x20);
  }
  else {
    local_6 = *(undefined2 *)(iVar1 + 0x34);
    local_4 = *(undefined2 *)(iVar1 + 0x36);
  }
  return CONCAT22(local_4,local_6);
}



/* ---- FUN_10d8_6835 @ 10d8:6835  (80 octets) ---- */

void __stdcall16far FUN_10d8_6835(undefined4 *param_1,undefined *param_2)

{
  undefined4 *puVar1;
  undefined2 *puVar2;
  
  *param_2 = 0;
  if (*(int *)((int)(undefined4 *)param_1 + 0x52) == 0) {
    puVar2 = (undefined2 *)((int)*param_1 + 0x50);
    (*(code *)*puVar2)();
  }
  else {
    puVar1 = (undefined4 *)param_1 + 0x14;
    (**(code **)puVar1)();
  }
  return;
}



/* ---- FUN_10d8_6885 @ 10d8:6885  (45 octets) ---- */

undefined2 __stdcall16far FUN_10d8_6885(undefined4 *param_1)

{
  undefined2 *puVar1;
  undefined2 uVar2;
  undefined2 local_4;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  if (*(int *)((int)(undefined4 *)param_1 + 0x32) < 1) {
    puVar1 = (undefined2 *)((int)*param_1 + 0x4c);
    local_4 = (*(code *)*puVar1)();
  }
  else {
    local_4 = *(undefined2 *)((int)(undefined4 *)param_1 + 0x32);
  }
  return local_4;
}



/* ---- FUN_10d8_68b2 @ 10d8:68b2  (29 octets) ---- */

void __stdcall16far FUN_10d8_68b2(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)((int)param_1 + 0x38);
  FUN_1158_17e7(0xff,(int)param_2,(int)((ulong)param_2 >> 0x10),(int)uVar1,
                (int)((ulong)uVar1 >> 0x10));
  return;
}



/* ---- FUN_10d8_68cf @ 10d8:68cf  (80 octets) ---- */

void __stdcall16far FUN_10d8_68cf(undefined4 *param_1,undefined *param_2)

{
  undefined4 *puVar1;
  undefined2 *puVar2;
  
  *param_2 = 0;
  if (*(int *)((int)(undefined4 *)param_1 + 0x52) == 0) {
    puVar2 = (undefined2 *)((int)*param_1 + 0x50);
    (*(code *)*puVar2)();
  }
  else {
    puVar1 = (undefined4 *)param_1 + 0x14;
    (**(code **)puVar1)();
  }
  return;
}



/* ---- FUN_10d8_691f @ 10d8:691f  (29 octets) ---- */

void __stdcall16far FUN_10d8_691f(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)((int)param_1 + 0x1e);
  FUN_1158_17e7(0xff,(int)param_2,(int)((ulong)param_2 >> 0x10),(int)uVar1,
                (int)((ulong)uVar1 >> 0x10));
  return;
}



/* ---- FUN_10d8_693c @ 10d8:693c  (55 octets) ---- */

undefined2 __stdcall16far FUN_10d8_693c(undefined4 param_1)

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
    uVar1 = *(undefined4 *)((int)*(undefined4 *)(iVar2 + 0x1a) + 0x1a);
    local_4 = FUN_1148_0e58((int)uVar1,(int)((ulong)uVar1 >> 0x10),iVar2,uVar3);
  }
  return local_4;
}



/* ---- FUN_10d8_6973 @ 10d8:6973  (104 octets) ---- */

undefined __stdcall16far FUN_10d8_6973(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined2 uVar3;
  int local_6;
  undefined local_3;
  
  local_3 = 0;
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  iVar2 = (int)param_1;
  if ((0 < *(int *)(iVar2 + 0x2e)) &&
     (iVar1 = *(int *)((int)*(undefined4 *)(iVar2 + 0x1a) + 0x7e) + -1, -1 < iVar1)) {
    local_6 = 0;
    while( true ) {
      if ((-1 < *(int *)(iVar2 + 0x2e)) &&
         (*(int *)((int)*(undefined4 *)(iVar2 + 0x1a) + local_6 * 2 + 0x80) ==
          *(int *)(iVar2 + 0x2e))) break;
      if (local_6 == iVar1) {
        return 0;
      }
      local_6 = local_6 + 1;
    }
    local_3 = 1;
  }
  return local_3;
}



/* ---- FUN_10d8_69db @ 10d8:69db  (35 octets) ---- */

uint __stdcall16far FUN_10d8_69db(undefined4 param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = FUN_10d8_6635((int)param_1,(int)((ulong)param_1 >> 0x10),0,0);
  uVar2 = uVar1 & 0xff00;
  if ((char)uVar1 == '\0') {
    uVar2 = uVar2 + 1;
  }
  return uVar2;
}



/* ---- FUN_10d8_6a25 @ 10d8:6a25  (15 octets) ---- */

undefined __stdcall16far FUN_10d8_6a25(void)

{
  return 1;
}



/* ---- FUN_10d8_6a34 @ 10d8:6a34  (15 octets) ---- */

undefined __stdcall16far FUN_10d8_6a34(void)

{
  return 1;
}



/* ---- FUN_10d8_6a43 @ 10d8:6a43  (30 octets) ---- */

uint __stdcall16far FUN_10d8_6a43(undefined4 param_1)

{
  uint in_AX;
  uint uVar1;
  
  uVar1 = in_AX & 0xff00;
  if (*(char *)*(undefined4 *)((int)param_1 + 0x34) != '\0') {
    uVar1 = uVar1 + 1;
  }
  return uVar1;
}



/* ---- FUN_10d8_6a61 @ 10d8:6a61  (27 octets) ---- */

uint __stdcall16far FUN_10d8_6a61(undefined4 param_1)

{
  uint in_AX;
  uint uVar1;
  
  uVar1 = in_AX & 0xff00;
  if (0 < *(int *)((int)param_1 + 0x32)) {
    uVar1 = uVar1 + 1;
  }
  return uVar1;
}



/* ---- FUN_10d8_6a7c @ 10d8:6a7c  (66 octets) ---- */

void __stdcall16far FUN_10d8_6a7c(undefined4 param_1,char param_2)

{
  undefined2 *puVar1;
  undefined4 *puVar2;
  char cVar3;
  int iVar4;
  undefined2 uVar5;
  
  uVar5 = (undefined2)((ulong)param_1 >> 0x10);
  iVar4 = (int)param_1;
  if (*(int *)(iVar4 + 0x1a) != 0 || *(int *)(iVar4 + 0x1c) != 0) {
    cVar3 = FUN_10d8_3202((int)*(undefined4 *)(iVar4 + 0x1a),
                          (int)((ulong)*(undefined4 *)(iVar4 + 0x1a) >> 0x10));
    if (cVar3 != '\0') {
      puVar2 = (undefined4 *)*(undefined4 *)(iVar4 + 0x1a);
      puVar1 = (undefined2 *)((int)*puVar2 + 0x38);
      (*(code *)*puVar1)(0x10d8,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),0,0,
                         CONCAT11(param_2 >> 7,*(undefined *)(param_2 + 0xb5e)));
    }
  }
  return;
}



/* ---- FUN_10d8_6abe @ 10d8:6abe  (72 octets) ---- */

void __stdcall16far FUN_10d8_6abe(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  FUN_1148_5003((int)param_1,uVar2,(int)param_2,param_2._2_2_);
  cVar1 = FUN_1158_2255(0x406,0x10d8,*(undefined2 *)((int)param_2 + 0x1a),
                        *(undefined2 *)((int)param_2 + 0x1c));
  if (cVar1 != '\0') {
    FUN_10d8_6e0b((int)param_1,uVar2,*(undefined2 *)((int)param_2 + 0x1a),
                  *(undefined2 *)((int)param_2 + 0x1c));
  }
  return;
}



/* ---- FUN_10d8_6b9a @ 10d8:6b9a  (35 octets) ---- */

void __stdcall16far FUN_10d8_6b9a(undefined4 param_1,char param_2)

{
  int iVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  if (*(char *)(iVar1 + 0x25) != param_2) {
    *(char *)(iVar1 + 0x25) = param_2;
    FUN_10d8_6a7c(iVar1,uVar2,0);
  }
  return;
}



/* ---- FUN_10d8_6bbd @ 10d8:6bbd  (27 octets) ---- */

void __stdcall16far FUN_10d8_6bbd(undefined4 param_1,undefined param_2)

{
  undefined2 uVar1;
  
  uVar1 = (undefined2)((ulong)param_1 >> 0x10);
  FUN_10d8_63c7((int)param_1,uVar1);
  *(undefined *)((int)param_1 + 0x24) = param_2;
  return;
}



/* ---- FUN_10d8_6bde @ 10d8:6bde  (557 octets) ---- */

void __stdcall16far FUN_10d8_6bde(undefined4 param_1,undefined4 param_2)

{
  undefined2 *puVar1;
  undefined4 *puVar2;
  char cVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined2 *puVar6;
  undefined2 uVar7;
  undefined2 uVar8;
  undefined2 uVar9;
  undefined2 unaff_CS;
  undefined4 local_6;
  
  uVar7 = (undefined2)((ulong)param_1 >> 0x10);
  iVar4 = (int)param_1;
  if (*(int *)(iVar4 + 0x1a) == 0 && *(int *)(iVar4 + 0x1c) == 0) {
    FUN_10d8_67f6();
    unaff_CS = 0x10d8;
    FUN_10d8_120a();
  }
  puVar2 = (undefined4 *)*(undefined4 *)(iVar4 + 0x1a);
  uVar8 = (undefined2)((ulong)puVar2 >> 0x10);
  puVar5 = (undefined4 *)puVar2;
  if (*(char *)((int)puVar5 + 0x3a) != '\x04') {
    cVar3 = *(char *)((int)puVar5 + 0x3a);
    if (cVar3 == '\x05') {
      local_6 = (char *)CONCAT22(*(undefined2 *)(puVar5 + 0x1f),*(undefined2 *)((int)puVar5 + 0x7a))
      ;
    }
    else if ((cVar3 == '\x02') || (cVar3 == '\x03')) {
      uVar9 = (undefined2)((ulong)*(undefined4 *)((int)puVar5 + 0x26) >> 0x10);
      puVar6 = (undefined2 *)((int)*(undefined4 *)((int)puVar5 + 0x26) + *(int *)(puVar5 + 0xc) * 4)
      ;
      local_6 = (char *)CONCAT22(puVar6[1],*puVar6);
    }
    else {
      unaff_CS = 0x10d8;
      FUN_10d8_11ef();
    }
    if (*(char *)(iVar4 + 0x23) != '\0') {
      FUN_10d8_67f6();
      unaff_CS = 0x10d8;
      FUN_10d8_120a();
    }
    goto LAB_10d8_6d07;
  }
  local_6 = (char *)CONCAT22(*(undefined2 *)(puVar5 + 0x1e),*(int *)((int)puVar5 + 0x76) + 4);
  if (-1 < *(int *)(iVar4 + 0x2e)) {
    if (*(int *)((int)puVar5 + 0x7e) < 1) goto LAB_10d8_6d07;
    unaff_CS = 0x10d8;
    cVar3 = FUN_10d8_6973();
    if (cVar3 != '\0') goto LAB_10d8_6d07;
  }
  FUN_10d8_67f6();
  unaff_CS = 0x10d8;
  FUN_10d8_120a();
LAB_10d8_6d07:
  if (*(int *)(iVar4 + 0x2e) < 1) {
    local_6 = (char *)CONCAT22(local_6._2_2_,
                               (char *)((int)local_6 +
                                       *(int *)((int)puVar5 + 0x46) + *(int *)(iVar4 + 0x30)));
    *local_6 = (int)param_2 != 0 || param_2._2_2_ != 0;
    if (*local_6 != '\0') {
      unaff_CS = 0x1158;
      FUN_1158_1ec1(*(undefined2 *)(iVar4 + 0x2c));
    }
  }
  else {
    if (*(char *)((int)puVar5 + 0x3a) == '\x05') {
      unaff_CS = 0x10d8;
      FUN_10d8_11ef();
    }
    if (*(int *)(iVar4 + 0x4a) != 0) {
      *(int *)(iVar4 + 0x3c) = (int)param_2;
      *(int *)(iVar4 + 0x3e) = param_2._2_2_;
      *(undefined *)(iVar4 + 0x28) = 1;
      DAT_1160_1858 = &stack0xffe6;
      uVar8 = *(undefined2 *)(iVar4 + 0x4c);
      (*(code *)*(undefined2 *)(iVar4 + 0x48))
                (unaff_CS,*(undefined2 *)(iVar4 + 0x4c),*(undefined2 *)(iVar4 + 0x4e),iVar4,uVar7);
      DAT_1160_1858 = (undefined *)uVar8;
      *(undefined *)(iVar4 + 0x28) = 0;
      return;
    }
    FUN_10e8_06fd(unaff_CS,(int)param_2,param_2._2_2_,(int)local_6);
    unaff_CS = 0x10d8;
    FUN_10d8_124e();
  }
  if (*(char *)((int)puVar5 + 0x3a) != '\x05') {
    puVar1 = (undefined2 *)((int)*puVar2 + 0x38);
    (*(code *)*puVar1)(unaff_CS,puVar5);
  }
  return;
}



/* ---- FUN_10d8_6e0b @ 10d8:6e0b  (122 octets) ---- */

void __stdcall16far FUN_10d8_6e0b(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  if (*(int *)(iVar1 + 0x1a) != 0 || *(int *)(iVar1 + 0x1c) != 0) {
    FUN_10d8_31e5((int)*(undefined4 *)(iVar1 + 0x1a),
                  (int)((ulong)*(undefined4 *)(iVar1 + 0x1a) >> 0x10));
  }
  if ((int)param_2 != 0 || param_2._2_2_ != 0) {
    FUN_10d8_31e5((int)param_2,param_2._2_2_);
    FUN_10d8_3caf((int)param_2,param_2._2_2_,(int)*(undefined4 *)(iVar1 + 0x1e),
                  (int)((ulong)*(undefined4 *)(iVar1 + 0x1e) >> 0x10));
  }
  if (*(int *)(iVar1 + 0x1a) != 0 || *(int *)(iVar1 + 0x1c) != 0) {
    FUN_10d8_3b0a((int)*(undefined4 *)(iVar1 + 0x1a),
                  (int)((ulong)*(undefined4 *)(iVar1 + 0x1a) >> 0x10),iVar1,uVar2);
  }
  if ((int)param_2 != 0 || param_2._2_2_ != 0) {
    FUN_10d8_3ade((int)param_2,param_2._2_2_,iVar1,uVar2);
  }
  return;
}



/* ---- FUN_10d8_6e85 @ 10d8:6e85  (24 octets) ---- */

void __stdcall16far FUN_10d8_6e85(undefined4 param_1,undefined param_2)

{
  undefined2 uVar1;
  
  uVar1 = (undefined2)((ulong)param_1 >> 0x10);
  *(undefined *)((int)param_1 + 0x22) = param_2;
  FUN_10d8_714b((int)param_1,uVar1);
  return;
}



/* ---- FUN_10d8_6f0d @ 10d8:6f0d  (35 octets) ---- */

void __stdcall16far FUN_10d8_6f0d(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  if (*(int *)(iVar1 + 0x32) != param_2) {
    *(int *)(iVar1 + 0x32) = param_2;
    FUN_10d8_6a7c(iVar1,uVar2,1);
  }
  return;
}



/* ---- FUN_10d8_6f30 @ 10d8:6f30  (38 octets) ---- */

void __stdcall16far FUN_10d8_6f30(undefined4 param_1,undefined4 param_2)

{
  undefined2 uVar1;
  
  uVar1 = (undefined2)((ulong)param_1 >> 0x10);
  FUN_1150_0651((int)param_2,(int)((ulong)param_2 >> 0x10),(int)param_1 + 0x38,uVar1);
  FUN_10d8_6a7c((int)param_1,uVar1,0);
  return;
}



/* ---- FUN_10d8_6f56 @ 10d8:6f56  (63 octets) ---- */

void __stdcall16far FUN_10d8_6f56(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined2 *puVar2;
  
  if (*(int *)((int)(undefined4 *)param_1 + 0x5a) == 0) {
    puVar2 = (undefined2 *)((int)*param_1 + 0x68);
    (*(code *)*puVar2)();
  }
  else {
    puVar1 = (undefined4 *)param_1 + 0x16;
    (**(code **)puVar1)();
  }
  return;
}



/* ---- FUN_10d8_6f96 @ 10d8:6f96  (140 octets) ---- */

void __stdcall16far FUN_10d8_6f96(undefined4 param_1,undefined4 param_2)

{
  undefined2 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  undefined uVar8;
  
  uVar5 = (undefined2)((ulong)param_1 >> 0x10);
  iVar3 = (int)param_1;
  FUN_10d8_63c7(iVar3,uVar5);
  uVar4 = (undefined2)param_2;
  uVar6 = (undefined2)((ulong)param_2 >> 0x10);
  if (*(int *)(iVar3 + 0x1a) != 0 || *(int *)(iVar3 + 0x1c) != 0) {
    FUN_10d8_3caf((int)*(undefined4 *)(iVar3 + 0x1a),
                  (int)((ulong)*(undefined4 *)(iVar3 + 0x1a) >> 0x10),uVar4,uVar6);
  }
  uVar8 = iVar3 + 0x1e == 0;
  FUN_1150_0651(uVar4,uVar6,iVar3 + 0x1e,uVar5);
  uVar7 = 0x1158;
  FUN_1158_18be(uVar4,uVar6,(int)*(undefined4 *)(iVar3 + 0x34),
                (int)((ulong)*(undefined4 *)(iVar3 + 0x34) >> 0x10));
  if ((bool)uVar8) {
    uVar7 = 0x1150;
    FUN_1150_0651(0x6f95,0x1158,iVar3 + 0x34,uVar5);
  }
  if (*(int *)(iVar3 + 0x1a) != 0 || *(int *)(iVar3 + 0x1c) != 0) {
    puVar2 = (undefined4 *)*(undefined4 *)(iVar3 + 0x1a);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x38);
    (*(code *)*puVar1)(uVar7,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),0,0,9);
  }
  return;
}



/* ---- FUN_10d8_7022 @ 10d8:7022  (164 octets) ---- */

void __stdcall16far FUN_10d8_7022(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined2 *puVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  undefined2 uVar7;
  
  uVar7 = (undefined2)((ulong)param_1 >> 0x10);
  iVar6 = (int)param_1;
  iVar5 = FUN_10d8_693c(iVar6,uVar7);
  if (-1 < iVar5) {
    uVar3 = *(undefined4 *)((int)*(undefined4 *)(iVar6 + 0x1a) + 0x1a);
    iVar1 = *(int *)((int)uVar3 + 8);
    if (param_2 < 0) {
      param_2 = 0;
    }
    if (iVar1 <= param_2) {
      param_2 = iVar1 + -1;
    }
    if (param_2 != iVar5) {
      uVar3 = *(undefined4 *)((int)*(undefined4 *)(iVar6 + 0x1a) + 0x1a);
      FUN_1148_0c94((int)uVar3,(int)((ulong)uVar3 >> 0x10),iVar5);
      uVar3 = *(undefined4 *)((int)*(undefined4 *)(iVar6 + 0x1a) + 0x1a);
      FUN_1148_0ea7((int)uVar3,(int)((ulong)uVar3 >> 0x10),iVar6,uVar7,param_2);
      FUN_10d8_6a7c(iVar6,uVar7,1);
      puVar4 = (undefined4 *)*(undefined4 *)(iVar6 + 0x1a);
      puVar2 = (undefined2 *)((int)*puVar4 + 0x38);
      (*(code *)*puVar2)(0x10d8,(undefined4 *)puVar4,(int)((ulong)puVar4 >> 0x10),0,0,9);
    }
  }
  return;
}



/* ---- FUN_10d8_70c6 @ 10d8:70c6  (48 octets) ---- */

void __stdcall16far FUN_10d8_70c6(undefined4 param_1,undefined2 param_2)

{
  undefined extraout_AH;
  int iVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  FUN_10d8_63c7(iVar1,uVar2);
  FUN_10d8_1167(param_2,CONCAT11(extraout_AH,*(undefined *)(iVar1 + 0x22)));
  *(undefined2 *)(iVar1 + 0x2a) = param_2;
  FUN_10d8_714b(iVar1,uVar2);
  return;
}



/* ---- FUN_10d8_70f6 @ 10d8:70f6  (24 octets) ---- */

void __stdcall16far FUN_10d8_70f6(undefined4 *param_1)

{
  undefined2 *puVar1;
  
  puVar1 = (undefined2 *)((int)*param_1 + 100);
  (*(code *)*puVar1)();
  return;
}



/* ---- FUN_10d8_710e @ 10d8:710e  (35 octets) ---- */

void __stdcall16far FUN_10d8_710e(undefined4 param_1,char param_2)

{
  int iVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  if (*(char *)(iVar1 + 0x26) != param_2) {
    *(char *)(iVar1 + 0x26) = param_2;
    FUN_10d8_6a7c(iVar1,uVar2,1);
  }
  return;
}



/* ---- FUN_10d8_714b @ 10d8:714b  (110 octets) ---- */

void __stdcall16far FUN_10d8_714b(undefined4 param_1)

{
  int iVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  switch(*(undefined *)(iVar1 + 0x22)) {
  case 1:
    *(int *)(iVar1 + 0x2c) = *(int *)(iVar1 + 0x2a) + 1;
    break;
  case 2:
  case 4:
  case 5:
    *(undefined2 *)(iVar1 + 0x2c) = 2;
    break;
  case 3:
  case 9:
  case 10:
    *(undefined2 *)(iVar1 + 0x2c) = 4;
    break;
  case 6:
  case 7:
  case 0xb:
    *(undefined2 *)(iVar1 + 0x2c) = 8;
    break;
  case 8:
    *(undefined2 *)(iVar1 + 0x2c) = 0x12;
    break;
  case 0xc:
  case 0xd:
    *(undefined2 *)(iVar1 + 0x2c) = *(undefined2 *)(iVar1 + 0x2a);
    break;
  default:
    *(undefined2 *)(iVar1 + 0x2c) = 0;
  }
  return;
}



/* ---- FUN_10d8_71b9 @ 10d8:71b9  (96 octets) ---- */

undefined4 __stdcall16far
FUN_10d8_71b9(undefined4 param_1,char param_2,undefined2 param_3,undefined2 param_4)

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
  FUN_1148_4bd9(iVar1,uVar2,0,param_3,param_4);
  uVar3 = FUN_1158_1f50(0x2a3,0x1148,CONCAT11(extraout_AH,1));
  *(undefined2 *)(iVar1 + 0x1e) = (int)uVar3;
  *(undefined2 *)(iVar1 + 0x20) = (int)((ulong)uVar3 >> 0x10);
  *(undefined *)(iVar1 + 0x22) = 1;
  *(undefined *)(iVar1 + 0x23) = 1;
  if (param_2 != '\0') {
    DAT_1160_1858 = uStack_a;
  }
  return param_1;
}



/* ---- FUN_10d8_7219 @ 10d8:7219  (119 octets) ---- */

void __stdcall16far FUN_10d8_7219(undefined4 param_1,char param_2)

{
  int iVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  *(undefined2 *)(iVar1 + 0x26) = 0;
  *(undefined2 *)(iVar1 + 0x28) = 0;
  *(undefined2 *)(iVar1 + 0x2a) = 0;
  *(undefined2 *)(iVar1 + 0x2c) = 0;
  FUN_10d8_73c5(iVar1,uVar2,0,0);
  while (0 < *(int *)((int)*(undefined4 *)(iVar1 + 0x1e) + 8)) {
    uVar3 = FUN_1148_0f43((int)*(undefined4 *)(iVar1 + 0x1e),
                          (int)((ulong)*(undefined4 *)(iVar1 + 0x1e) >> 0x10));
    FUN_10d8_7484(iVar1,uVar2,uVar3);
  }
  FUN_1158_1f7f((int)*(undefined4 *)(iVar1 + 0x1e),
                (int)((ulong)*(undefined4 *)(iVar1 + 0x1e) >> 0x10));
  FUN_1148_4c2b(iVar1,uVar2,0);
  if (param_2 != '\0') {
    FUN_1158_200f();
  }
  return;
}



/* ---- FUN_10d8_7290 @ 10d8:7290  (35 octets) ---- */

void __stdcall16far FUN_10d8_7290(undefined4 param_1)

{
  int iVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  if ((*(char *)(iVar1 + 0x23) != '\0') && (*(char *)(iVar1 + 0x24) == '\x01')) {
    FUN_10d8_533c((int)*(undefined4 *)(iVar1 + 0x1a),
                  (int)((ulong)*(undefined4 *)(iVar1 + 0x1a) >> 0x10));
  }
  return;
}



/* ---- FUN_10d8_72b3 @ 10d8:72b3  (122 octets) ---- */

void __stdcall16far FUN_10d8_72b3(undefined4 param_1,char param_2)

{
  char cVar1;
  int iVar2;
  undefined2 uVar3;
  
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  iVar2 = (int)param_1;
  if (*(char *)(iVar2 + 0x24) != param_2) {
    cVar1 = *(char *)(iVar2 + 0x24);
    *(char *)(iVar2 + 0x24) = param_2;
    FUN_10d8_74ce(iVar2,uVar3,0,0,6);
    if ((*(byte *)(iVar2 + 0x18) & 8) == 0) {
      if (*(int *)(iVar2 + 0x28) != 0) {
        (*(code *)*(undefined2 *)(iVar2 + 0x26))
                  (0x10d8,*(undefined2 *)(iVar2 + 0x2a),*(undefined2 *)(iVar2 + 0x2c),iVar2,uVar3);
      }
      if (cVar1 == '\0') {
        if (*(int *)(iVar2 + 0x30) != 0) {
          (*(code *)*(undefined2 *)(iVar2 + 0x2e))
                    (0x10d8,*(undefined2 *)(iVar2 + 0x32),*(undefined2 *)(iVar2 + 0x34),0,0,iVar2,
                     uVar3);
        }
      }
    }
  }
  return;
}



/* ---- FUN_10d8_732d @ 10d8:732d  (60 octets) ---- */

void __stdcall16far FUN_10d8_732d(undefined4 param_1)

{
  uint uVar1;
  int iVar2;
  undefined2 uVar3;
  
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  iVar2 = (int)param_1;
  if ((*(char *)(iVar2 + 0x22) == '\0') ||
     (uVar1 = *(uint *)(iVar2 + 0x1a) | *(uint *)(iVar2 + 0x1c), uVar1 == 0)) {
    FUN_10d8_72b3(iVar2,uVar3,0);
  }
  else {
    FUN_10d8_72b3(iVar2,uVar3,
                  CONCAT11((char)(uVar1 >> 8),
                           *(undefined *)((int)*(undefined4 *)(iVar2 + 0x1a) + 0x3a)));
  }
  return;
}



/* ---- FUN_10d8_7369 @ 10d8:7369  (92 octets) ---- */

undefined2 __stdcall16far FUN_10d8_7369(undefined2 param_1,undefined2 param_2,undefined4 *param_3)

{
  undefined2 *puVar1;
  uint uVar2;
  undefined2 uVar3;
  long lVar4;
  undefined local_3;
  
  local_3 = 1;
  do {
    uVar2 = (uint)(undefined4 *)param_3 | param_3._2_2_;
    if (uVar2 == 0) {
LAB_10d8_73ba:
      local_3 = 0;
LAB_10d8_73be:
      return CONCAT11((char)(uVar2 >> 8),local_3);
    }
    puVar1 = (undefined2 *)((int)*param_3 + 0x7c);
    lVar4 = (*(code *)*puVar1)();
    uVar3 = (undefined2)((ulong)lVar4 >> 0x10);
    uVar2 = (uint)lVar4;
    if (lVar4 == 0) {
      uVar2 = 0;
      goto LAB_10d8_73ba;
    }
    if (lVar4 == CONCAT22(param_2,param_1)) goto LAB_10d8_73be;
    param_3 = (undefined4 *)
              CONCAT22(*(undefined2 *)(uVar2 + 0x1c),(undefined4 *)*(undefined2 *)(uVar2 + 0x1a));
  } while( true );
}



/* ---- FUN_10d8_73c5 @ 10d8:73c5  (89 octets) ---- */

void __stdcall16far FUN_10d8_73c5(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  undefined2 uVar3;
  
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  iVar2 = (int)param_1;
  cVar1 = FUN_10d8_7369(iVar2,uVar3,(int)param_2,param_2._2_2_);
  if (cVar1 != '\0') {
    FUN_10d8_11ef(0xf21f);
  }
  if (*(int *)(iVar2 + 0x1a) != 0 || *(int *)(iVar2 + 0x1c) != 0) {
    FUN_10d8_3e76((int)*(undefined4 *)(iVar2 + 0x1a),
                  (int)((ulong)*(undefined4 *)(iVar2 + 0x1a) >> 0x10),iVar2,uVar3);
  }
  if ((int)param_2 != 0 || param_2._2_2_ != 0) {
    FUN_10d8_3e36((int)param_2,param_2._2_2_,iVar2,uVar3);
  }
  return;
}



/* ---- FUN_10d8_741e @ 10d8:741e  (24 octets) ---- */

void __stdcall16far FUN_10d8_741e(undefined4 param_1,undefined param_2)

{
  undefined2 uVar1;
  
  uVar1 = (undefined2)((ulong)param_1 >> 0x10);
  *(undefined *)((int)param_1 + 0x22) = param_2;
  FUN_10d8_732d((int)param_1,uVar1);
  return;
}



/* ---- FUN_10d8_7436 @ 10d8:7436  (78 octets) ---- */

void __stdcall16far FUN_10d8_7436(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  FUN_1148_0c2b((int)*(undefined4 *)(iVar1 + 0x1e),
                (int)((ulong)*(undefined4 *)(iVar1 + 0x1e) >> 0x10),(int)param_2,param_2._2_2_);
  *(int *)((int)param_2 + 4) = iVar1;
  *(undefined2 *)((int)param_2 + 6) = uVar2;
  if (*(int *)(iVar1 + 0x1a) != 0 || *(int *)(iVar1 + 0x1c) != 0) {
    FUN_10d8_41b5((int)*(undefined4 *)(iVar1 + 0x1a),
                  (int)((ulong)*(undefined4 *)(iVar1 + 0x1a) >> 0x10));
  }
  FUN_10d8_77f0((int)param_2,param_2._2_2_);
  return;
}



/* ---- FUN_10d8_7484 @ 10d8:7484  (74 octets) ---- */

void __stdcall16far FUN_10d8_7484(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  
  uVar3 = (undefined2)((ulong)param_2 >> 0x10);
  iVar1 = (int)param_2;
  *(undefined2 *)(iVar1 + 4) = 0;
  *(undefined2 *)(iVar1 + 6) = 0;
  uVar4 = (undefined2)((ulong)param_1 >> 0x10);
  iVar2 = (int)param_1;
  FUN_1148_0fa7((int)*(undefined4 *)(iVar2 + 0x1e),
                (int)((ulong)*(undefined4 *)(iVar2 + 0x1e) >> 0x10),iVar1,uVar3);
  FUN_10d8_77f0(iVar1,uVar3);
  if (*(int *)(iVar2 + 0x1a) != 0 || *(int *)(iVar2 + 0x1c) != 0) {
    FUN_10d8_41b5((int)*(undefined4 *)(iVar2 + 0x1a),
                  (int)((ulong)*(undefined4 *)(iVar2 + 0x1a) >> 0x10));
  }
  return;
}



/* ---- FUN_10d8_74ce @ 10d8:74ce  (84 octets) ---- */

void __stdcall16far
FUN_10d8_74ce(undefined4 param_1,undefined2 param_2,undefined2 param_3,undefined param_4)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar4;
  undefined4 uVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  int local_4;
  int iVar3;
  
  uVar4 = (undefined2)((ulong)param_1 >> 0x10);
  uVar5 = *(undefined4 *)((int)param_1 + 0x1e);
  iVar1 = *(int *)((int)uVar5 + 8) + -1;
  if (-1 < iVar1) {
    local_4 = 0;
    iVar3 = 0;
    while( true ) {
      uVar2 = CONCAT11((char)((uint)iVar3 >> 8),param_4);
      uVar5 = *(undefined4 *)((int)param_1 + 0x1e);
      uVar6 = param_2;
      uVar7 = param_3;
      uVar5 = FUN_1148_0dd0((int)uVar5,(int)((ulong)uVar5 >> 0x10),local_4);
      FUN_10d8_79d3(uVar5,uVar6,uVar7,uVar2);
      if (local_4 == iVar1) break;
      iVar3 = local_4;
      local_4 = local_4 + 1;
    }
  }
  return;
}



/* ---- FUN_10d8_752e @ 10d8:752e  (174 octets) ---- */

void __stdcall16far
FUN_10d8_752e(undefined4 param_1,undefined2 param_2,undefined2 param_3,char param_4)

{
  int iVar1;
  undefined2 uVar2;
  
  iVar1 = (int)param_1;
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  if (param_4 == '\x06') {
    FUN_10d8_732d(iVar1,uVar2);
  }
  else if (*(char *)(iVar1 + 0x24) != '\0') {
    FUN_10d8_74ce(iVar1,uVar2,param_2,param_3,param_4);
    switch(param_4) {
    case '\0':
      if (*(int *)(iVar1 + 0x30) != 0) {
        (*(code *)*(undefined2 *)(iVar1 + 0x2e))
                  (0x10d8,*(undefined2 *)(iVar1 + 0x32),*(undefined2 *)(iVar1 + 0x34),param_2,
                   param_3,iVar1,uVar2);
      }
      break;
    case '\x01':
    case '\x02':
    case '\x03':
    case '\x04':
      if (*(int *)(iVar1 + 0x30) != 0) {
        (*(code *)*(undefined2 *)(iVar1 + 0x2e))
                  (0x10d8,*(undefined2 *)(iVar1 + 0x32),*(undefined2 *)(iVar1 + 0x34),0,0,iVar1,
                   uVar2);
      }
      break;
    case '\x05':
      if (*(int *)(iVar1 + 0x38) != 0) {
        (*(code *)*(undefined2 *)(iVar1 + 0x36))
                  (0x10d8,*(undefined2 *)(iVar1 + 0x3a),*(undefined2 *)(iVar1 + 0x3c),iVar1,uVar2);
      }
    }
  }
  return;
}



/* ---- FUN_10d8_75dc @ 10d8:75dc  (62 octets) ---- */

undefined4 __stdcall16far FUN_10d8_75dc(undefined4 param_1,char param_2)

{
  undefined2 uVar1;
  undefined2 uStack_a;
  
  if (param_2 != '\0') {
    FUN_1158_1fe2();
  }
  uVar1 = (undefined2)((ulong)param_1 >> 0x10);
  FUN_1158_1f50((int)param_1,uVar1,0);
  *(undefined2 *)((int)param_1 + 0xc) = 1;
  if (param_2 != '\0') {
    DAT_1160_1858 = uStack_a;
  }
  return param_1;
}



/* ---- FUN_10d8_761a @ 10d8:761a  (55 octets) ---- */

void __stdcall16far FUN_10d8_761a(undefined4 param_1,char param_2)

{
  int iVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  *(undefined *)(iVar1 + 0x11) = 0;
  *(undefined *)(iVar1 + 0x12) = 0;
  FUN_10d8_7731(iVar1,uVar2,0,0);
  FUN_1158_1f66(iVar1,uVar2,0);
  if (param_2 != '\0') {
    FUN_1158_200f();
  }
  return;
}



/* ---- FUN_10d8_7651 @ 10d8:7651  (169 octets) ---- */

void __stdcall16far FUN_10d8_7651(undefined4 param_1)

{
  int iVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  undefined2 local_6;
  undefined2 local_4;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  uVar3 = FUN_10d8_76fa(iVar1,uVar2);
  local_4 = (*(int *)((int)uVar3 + 0x30) - *(int *)(iVar1 + 0xc)) + 1;
  if (local_4 < 0) {
    local_4 = 0;
  }
  uVar3 = FUN_10d8_76fa(iVar1,uVar2);
  local_6 = *(int *)((int)uVar3 + 0x2c) - *(int *)(iVar1 + 0xc);
  if (local_6 < 0) {
    local_6 = 0;
  }
  uVar3 = FUN_10d8_76fa(iVar1,uVar2);
  if (*(int *)((int)uVar3 + 0x30) < local_6) {
    uVar3 = FUN_10d8_76fa(iVar1,uVar2);
    local_6 = *(int *)((int)uVar3 + 0x30);
  }
  if (*(int *)(iVar1 + 0xe) < local_4) {
    *(int *)(iVar1 + 0xe) = local_4;
  }
  if (local_6 < *(int *)(iVar1 + 0xe)) {
    *(int *)(iVar1 + 0xe) = local_6;
  }
  return;
}



/* ---- FUN_10d8_76fa @ 10d8:76fa  (55 octets) ---- */

undefined4 __stdcall16far FUN_10d8_76fa(undefined4 param_1)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 local_6;
  undefined2 local_4;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  if (*(int *)(iVar1 + 4) == 0 && *(int *)(iVar1 + 6) == 0) {
    local_6 = 0;
    local_4 = 0;
  }
  else {
    uVar3 = (undefined2)((ulong)*(undefined4 *)(iVar1 + 4) >> 0x10);
    iVar1 = (int)*(undefined4 *)(iVar1 + 4);
    local_6 = *(undefined2 *)(iVar1 + 0x1a);
    local_4 = *(undefined2 *)(iVar1 + 0x1c);
  }
  return CONCAT22(local_4,local_6);
}



/* ---- FUN_10d8_7731 @ 10d8:7731  (61 octets) ---- */

void __stdcall16far FUN_10d8_7731(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  if (*(int *)(iVar1 + 4) != 0 || *(int *)(iVar1 + 6) != 0) {
    FUN_10d8_7484((int)*(undefined4 *)(iVar1 + 4),(int)((ulong)*(undefined4 *)(iVar1 + 4) >> 0x10),
                  iVar1,uVar2);
  }
  if ((int)param_2 != 0 || param_2._2_2_ != 0) {
    FUN_10d8_7436((int)param_2,param_2._2_2_,iVar1,uVar2);
  }
  return;
}



/* ---- FUN_10d8_776e @ 10d8:776e  (33 octets) ---- */

void __stdcall16far FUN_10d8_776e(undefined4 param_1,char param_2)

{
  int iVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  if (*(char *)(iVar1 + 0x10) != param_2) {
    *(char *)(iVar1 + 0x10) = param_2;
    FUN_10d8_77f0(iVar1,uVar2);
  }
  return;
}



/* ---- FUN_10d8_778f @ 10d8:778f  (62 octets) ---- */

void __stdcall16far FUN_10d8_778f(undefined4 *param_1,char param_2)

{
  undefined2 *puVar1;
  undefined4 *puVar2;
  undefined2 uVar3;
  undefined2 unaff_CS;
  
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  puVar2 = (undefined4 *)param_1;
  if (*(char *)((int)puVar2 + 0x11) != param_2) {
    *(char *)((int)puVar2 + 0x11) = param_2;
    if (param_2 == '\0') {
      *(undefined2 *)((int)puVar2 + 0xe) = 0;
    }
    else {
      unaff_CS = 0x10d8;
      FUN_10d8_7651(puVar2,uVar3);
    }
    puVar1 = (undefined2 *)((int)*param_1 + 0xc);
    (*(code *)*puVar1)(unaff_CS,puVar2,uVar3);
  }
  return;
}



/* ---- FUN_10d8_77cd @ 10d8:77cd  (35 octets) ---- */

void __stdcall16far FUN_10d8_77cd(undefined4 *param_1,char param_2)

{
  undefined2 *puVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  if (*(char *)((int)(undefined4 *)param_1 + 0x12) != param_2) {
    *(char *)((int)(undefined4 *)param_1 + 0x12) = param_2;
    puVar1 = (undefined2 *)((int)*param_1 + 0x20);
    (*(code *)*puVar1)();
  }
  return;
}



/* ---- FUN_10d8_77f0 @ 10d8:77f0  (104 octets) ---- */

void __stdcall16far FUN_10d8_77f0(undefined4 param_1)

{
  uint uVar1;
  byte bVar3;
  int iVar2;
  undefined uVar4;
  int iVar5;
  undefined2 uVar6;
  
  uVar6 = (undefined2)((ulong)param_1 >> 0x10);
  iVar5 = (int)param_1;
  uVar1 = *(uint *)(iVar5 + 4) | *(uint *)(iVar5 + 6);
  bVar3 = (byte)(uVar1 >> 8);
  if ((uVar1 == 0) || (*(char *)((int)*(undefined4 *)(iVar5 + 4) + 0x24) == '\0')) {
    iVar2 = (uint)bVar3 << 8;
  }
  else {
    iVar2 = CONCAT11(bVar3,1);
  }
  FUN_10d8_778f(iVar5,uVar6,iVar2);
  uVar1 = *(uint *)(iVar5 + 4) | *(uint *)(iVar5 + 6);
  if (uVar1 != 0) {
    bVar3 = *(byte *)((int)*(undefined4 *)(iVar5 + 4) + 0x24);
    uVar4 = (undefined)(uVar1 >> 8);
    uVar1 = CONCAT11(uVar4,bVar3);
    if (((1 < bVar3) && (bVar3 < 5)) && (*(char *)(iVar5 + 0x10) == '\0')) {
      uVar1 = CONCAT11(uVar4,1);
      goto LAB_10d8_7849;
    }
  }
  uVar1 = uVar1 & 0xff00;
LAB_10d8_7849:
  FUN_10d8_77cd(iVar5,uVar6,uVar1);
  return;
}



/* ---- FUN_10d8_785e @ 10d8:785e  (55 octets) ---- */

void __cdecl16far FUN_10d8_785e(undefined4 *param_1)

{
  undefined2 *puVar1;
  undefined4 *puVar2;
  undefined2 uVar3;
  undefined2 uStack_a;
  
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  puVar2 = (undefined4 *)param_1;
  *(undefined *)((int)puVar2 + 0x13) = 1;
  uStack_a = DAT_1160_1858;
  puVar1 = (undefined2 *)((int)*param_1 + 0x2c);
  DAT_1160_1858 = (undefined4 *)&uStack_a;
  (*(code *)*puVar1)();
  DAT_1160_1858 = puVar2;
  *(undefined *)((int)puVar2 + 0x13) = 0;
  return;
}



/* ---- FUN_10d8_7899 @ 10d8:7899  (52 octets) ---- */

undefined __stdcall16far FUN_10d8_7899(undefined4 param_1)

{
  int iVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  if ((*(char *)(iVar1 + 0x10) == '\0') && (*(int *)(iVar1 + 4) != 0 || *(int *)(iVar1 + 6) != 0)) {
    FUN_10d8_7290((int)*(undefined4 *)(iVar1 + 4),(int)((ulong)*(undefined4 *)(iVar1 + 4) >> 0x10));
  }
  return *(undefined *)(iVar1 + 0x12);
}



/* ---- FUN_10d8_78cd @ 10d8:78cd  (57 octets) ---- */

int __stdcall16far FUN_10d8_78cd(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 local_4;
  
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  iVar2 = (int)param_1;
  if (*(char *)((int)*(undefined4 *)(iVar2 + 4) + 0x24) == '\x04') {
    local_4 = 0;
  }
  else {
    uVar1 = *(undefined4 *)((int)*(undefined4 *)(iVar2 + 4) + 0x1a);
    local_4 = *(int *)((int)uVar1 + 0x30) - *(int *)(iVar2 + 0xe);
  }
  return local_4;
}



/* ---- FUN_10d8_7906 @ 10d8:7906  (43 octets) ---- */

void __stdcall16far FUN_10d8_7906(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined2 uVar3;
  
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  iVar2 = (int)param_1;
  if (*(char *)((int)*(undefined4 *)(iVar2 + 4) + 0x24) != '\x04') {
    uVar1 = *(undefined4 *)((int)*(undefined4 *)(iVar2 + 4) + 0x1a);
    *(int *)((int)uVar1 + 0x30) = param_2 + *(int *)(iVar2 + 0xe);
  }
  return;
}



/* ---- FUN_10d8_7931 @ 10d8:7931  (71 octets) ---- */

void __stdcall16far FUN_10d8_7931(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  if ((*(int *)(iVar1 + 0xc) != param_2) &&
     (*(int *)(iVar1 + 0xc) = param_2, *(char *)(iVar1 + 0x11) != '\0')) {
    FUN_10d8_7651(iVar1,uVar2);
    uVar3 = FUN_10d8_76fa(iVar1,uVar2);
    FUN_10d8_41b5(uVar3);
    FUN_10d8_7651(iVar1,uVar2);
  }
  return;
}



/* ---- FUN_10d8_7978 @ 10d8:7978  (69 octets) ---- */

int __stdcall16far FUN_10d8_7978(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 local_4;
  
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  iVar2 = (int)param_1;
  if (*(char *)((int)*(undefined4 *)(iVar2 + 4) + 0x24) == '\x04') {
    local_4 = 1;
  }
  else {
    uVar1 = *(undefined4 *)((int)*(undefined4 *)(iVar2 + 4) + 0x1a);
    local_4 = *(int *)((int)uVar1 + 0x2e);
    if (*(int *)(iVar2 + 0xc) < local_4) {
      local_4 = *(int *)(iVar2 + 0xc);
    }
  }
  return local_4;
}



/* ---- FUN_10d8_79d3 @ 10d8:79d3  (306 octets) ---- */

void __stdcall16far FUN_10d8_79d3(undefined4 *param_1,int param_2,undefined2 param_3,char param_4)

{
  int iVar1;
  undefined2 *puVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined2 uVar6;
  int local_a;
  
  puVar5 = (undefined4 *)param_1;
  uVar6 = (undefined2)((ulong)param_1 >> 0x10);
  if (param_4 == '\x06') {
    FUN_10d8_77f0(puVar5,uVar6);
  }
  else if (*(char *)((int)puVar5 + 0x11) != '\0') {
    switch(param_4) {
    case '\0':
    case '\x01':
      if (*(char *)((int)puVar5 + 0x13) == '\0') {
        puVar2 = (undefined2 *)((int)*param_1 + 0x28);
        (*(code *)*puVar2)(0x10d8,puVar5,uVar6,param_2,param_3);
      }
      break;
    case '\x02':
    case '\x03':
    case '\x04':
      local_a = 0;
      if (*(char *)((int)puVar5[1] + 0x24) != '\x04') {
        uVar3 = *(undefined4 *)((int)puVar5[1] + 0x1a);
        iVar1 = *(int *)((int)uVar3 + 0x30);
        param_2 = *(int *)((int)puVar5 + 0xe) + param_2;
        iVar4 = param_2 + *(int *)(puVar5 + 3) + -1;
        if (iVar4 < iVar1) {
          local_a = iVar1 - iVar4;
        }
        else if (iVar1 < param_2) {
          local_a = iVar1 - param_2;
        }
        *(int *)((int)puVar5 + 0xe) = param_2 + local_a;
      }
      if (param_4 == '\x02') {
        puVar2 = (undefined2 *)((int)*param_1 + 0x14);
        (*(code *)*puVar2)(0x10d8,puVar5,uVar6);
      }
      else if (param_4 == '\x03') {
        puVar2 = (undefined2 *)((int)*param_1 + 0x18);
        (*(code *)*puVar2)(0x10d8,puVar5,uVar6,local_a);
      }
      else if (param_4 == '\x04') {
        puVar2 = (undefined2 *)((int)*param_1 + 0x24);
        (*(code *)*puVar2)(0x10d8,puVar5,uVar6);
      }
      break;
    case '\x05':
      FUN_10d8_785e(puVar5,uVar6);
      break;
    case '\a':
      puVar2 = (undefined2 *)((int)*param_1 + 0x10);
      (*(code *)*puVar2)(0x10d8,puVar5,uVar6);
      break;
    case '\n':
      puVar2 = (undefined2 *)((int)*param_1 + 0x1c);
      (*(code *)*puVar2)(0x10d8,puVar5,uVar6,param_2,param_3);
    }
  }
  return;
}



/* ---- FUN_10d8_7b05 @ 10d8:7b05  (7 octets) ---- */

void __stdcall16far FUN_10d8_7b05(void)

{
  return;
}



/* ---- FUN_10d8_7b0c @ 10d8:7b0c  (7 octets) ---- */

void __stdcall16far FUN_10d8_7b0c(void)

{
  return;
}



/* ---- FUN_10d8_7b13 @ 10d8:7b13  (23 octets) ---- */

void __stdcall16far FUN_10d8_7b13(undefined4 *param_1)

{
  undefined2 *puVar1;
  
  puVar1 = (undefined2 *)((int)*param_1 + 0x28);
  (*(code *)*puVar1)();
  return;
}



/* ---- FUN_10d8_7b2a @ 10d8:7b2a  (19 octets) ---- */

void __stdcall16far FUN_10d8_7b2a(undefined4 *param_1)

{
  undefined2 *puVar1;
  
  puVar1 = (undefined2 *)((int)*param_1 + 0x14);
  (*(code *)*puVar1)();
  return;
}



/* ---- FUN_10d8_7b3d @ 10d8:7b3d  (7 octets) ---- */

void __stdcall16far FUN_10d8_7b3d(void)

{
  return;
}



/* ---- FUN_10d8_7b44 @ 10d8:7b44  (7 octets) ---- */

void __stdcall16far FUN_10d8_7b44(void)

{
  return;
}



/* ---- FUN_10d8_7b4b @ 10d8:7b4b  (19 octets) ---- */

void __stdcall16far FUN_10d8_7b4b(undefined4 *param_1)

{
  undefined2 *puVar1;
  
  puVar1 = (undefined2 *)((int)*param_1 + 0x14);
  (*(code *)*puVar1)();
  return;
}



/* ---- FUN_10d8_7b5e @ 10d8:7b5e  (7 octets) ---- */

void __stdcall16far FUN_10d8_7b5e(void)

{
  return;
}



/* ---- FUN_10d8_7b65 @ 10d8:7b65  (7 octets) ---- */

void __stdcall16far FUN_10d8_7b65(void)

{
  return;
}



/* ---- FUN_10d8_7b6c @ 10d8:7b6c  (16 octets) ---- */

void __cdecl16far FUN_10d8_7b6c(void)

{
  FUN_1158_1f7f((int)DAT_1160_2ac6,(int)((ulong)DAT_1160_2ac6 >> 0x10));
  return;
}



/* ---- FUN_10d8_7b7c @ 10d8:7b7c  (45 octets) ---- */

void __cdecl16far FUN_10d8_7b7c(void)

{
  DAT_1160_2ac6 = FUN_10d8_159d(0xb6,0x10d8,1,0,0);
  FUN_1150_0574(0x7b6c,0x10d8);
  return;
}




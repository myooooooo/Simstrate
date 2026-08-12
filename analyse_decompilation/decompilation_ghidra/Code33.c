/* Simstrat (FR).EXE - segment Code33 - 58 fonctions
   Decompile par Ghidra 11.2.1 (x86 16 bits, chargeur NE). */

/* ---- FUN_1100_0715 @ 1100:0715  (296 octets) ---- */

undefined2 FUN_1100_0715(int param_1,byte *param_2)

{
  byte bVar1;
  uint uVar2;
  undefined uVar3;
  byte *pbVar4;
  undefined2 uVar5;
  undefined local_3;
  
  local_3 = 1;
  uVar5 = (undefined2)((ulong)param_2 >> 0x10);
  pbVar4 = (byte *)param_2;
  bVar1 = pbVar4[param_1];
  uVar2 = (uint)*param_2;
  if ((int)uVar2 < param_1) {
    local_3 = 0;
  }
  else if (((param_1 < 2) || (uVar2 = param_1 - 1, pbVar4[uVar2] != 0x5c)) ||
          ((2 < param_1 && (uVar2 = param_1 - 2, pbVar4[uVar2] == 0x5c)))) {
    uVar2 = CONCAT11((char)(uVar2 >> 8),bVar1);
    if (((bVar1 == DAT_1160_0bfb) && (3 < *param_2)) && (uVar2 = *param_2 - 4, (int)uVar2 < param_1)
       ) {
      local_3 = 6;
    }
    else if (((*param_2 < 4) || (uVar2 = *param_2 - 4, param_1 <= (int)uVar2)) ||
            ((uVar2 = CONCAT11((char)((uint)(param_1 + -1) >> 8),pbVar4[param_1 + -1]),
             pbVar4[param_1 + -1] != DAT_1160_0bfb ||
             ((2 < param_1 && (uVar2 = param_1 - 2, pbVar4[uVar2] == 0x5c)))))) {
      uVar3 = (undefined)(uVar2 >> 8);
      uVar2 = CONCAT11(uVar3,bVar1);
      if ((bVar1 == 0x2f) || (bVar1 == 0x3a)) {
        local_3 = 2;
      }
      else {
        uVar2 = CONCAT11(uVar3,bVar1);
        if ((((bVar1 == 0x21) || (bVar1 == 0x3c)) || (bVar1 == 0x3e)) || (bVar1 == 0x5c)) {
          local_3 = 3;
        }
        else {
          uVar2 = CONCAT11(uVar3,bVar1);
          if (((bVar1 == 0x23) || (bVar1 == 0x39)) ||
             ((bVar1 == 0x61 || ((bVar1 == 99 || (bVar1 == 0x6c)))))) {
            local_3 = 5;
          }
          else {
            uVar2 = CONCAT11(uVar3,bVar1);
            if ((bVar1 == 0x30) || (((bVar1 == 0x41 || (bVar1 == 0x43)) || (bVar1 == 0x4c)))) {
              local_3 = 4;
            }
          }
        }
      }
    }
    else {
      local_3 = 7;
    }
  }
  else {
    local_3 = 1;
  }
  return CONCAT11((char)(uVar2 >> 8),local_3);
}



/* ---- FUN_1100_083d @ 1100:083d  (162 octets) ---- */

byte FUN_1100_083d(int param_1,byte *param_2)

{
  byte bVar1;
  char cVar2;
  byte *pbVar3;
  undefined2 uVar4;
  uint local_6;
  byte local_3;
  
  local_3 = 0;
  pbVar3 = (byte *)param_2;
  uVar4 = (undefined2)((ulong)param_2 >> 0x10);
  if (*param_2 != 0) {
    local_6 = 1;
    while( true ) {
      bVar1 = pbVar3[local_6];
      if (bVar1 == 0x21) {
        local_3 = local_3 | 1;
      }
      else if ((bVar1 == 0x3e) && ((int)local_6 < param_1)) {
        local_3 = local_3 & 0xfb;
        if (((int)local_6 < 2) || (pbVar3[local_6 - 1] != 0x3c)) {
          local_3 = local_3 | 2;
        }
      }
      else if ((bVar1 == 0x3c) && ((int)local_6 < param_1)) {
        local_3 = local_3 & 0xfd | 4;
      }
      if (local_6 == *param_2) break;
      local_6 = local_6 + 1;
    }
  }
  cVar2 = FUN_1100_0715(param_1,pbVar3,uVar4);
  if (cVar2 == '\x01') {
    local_3 = local_3 | 8;
  }
  return local_3;
}



/* ---- FUN_1100_08df @ 1100:08df  (42 octets) ---- */

char FUN_1100_08df(char param_1)

{
  undefined local_3;
  
  local_3 = param_1;
  if (param_1 == ':') {
    local_3 = DAT_1160_2c96;
  }
  else if (param_1 == '/') {
    local_3 = DAT_1160_2c65;
  }
  return local_3;
}



/* ---- FUN_1100_0909 @ 1100:0909  (556 octets) ---- */

void FUN_1100_0909(undefined param_1,undefined4 param_2,byte *param_3,byte *param_4)

{
  undefined extraout_AH;
  undefined2 uVar1;
  byte *pbVar2;
  byte *pbVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined2 unaff_SS;
  undefined *puVar6;
  undefined2 uVar7;
  undefined *puVar8;
  undefined2 uVar9;
  undefined local_30e [256];
  undefined local_20e [256];
  undefined local_10e [256];
  uint local_e;
  byte local_c;
  byte local_b;
  uint local_a;
  uint local_8;
  int local_4;
  
  uVar4 = (undefined2)((ulong)param_4 >> 0x10);
  pbVar2 = (byte *)param_4;
  FUN_1158_17e7(0xff,pbVar2,uVar4,(int)param_2,(int)((ulong)param_2 >> 0x10));
  uVar5 = (undefined2)((ulong)param_3 >> 0x10);
  pbVar3 = (byte *)param_3;
  local_c = FUN_1100_083d(1,pbVar3,uVar5);
  if ((local_c & 1) == 0) {
    local_8 = 1;
    local_e = (uint)*param_3;
    if (local_e != 0) {
      local_a = 1;
      while( true ) {
        local_b = FUN_1100_0715(local_a,pbVar3,uVar5);
        if ((local_b == 0) || (2 < local_b)) {
          if ((3 < local_b) && (local_b < 6)) {
            if ((int)(uint)*param_4 < (int)local_8) {
              puVar8 = local_20e;
              uVar9 = unaff_SS;
              FUN_1158_17cd(pbVar2,uVar4);
              puVar6 = local_10e;
              uVar7 = unaff_SS;
              FUN_1158_18e9(CONCAT11(extraout_AH,param_1));
              FUN_1158_184c(puVar6,uVar7);
              FUN_1158_17e7(0xff,pbVar2,uVar4,puVar8,uVar9);
            }
            local_8 = local_8 + 1;
          }
        }
        else {
          puVar8 = local_10e;
          uVar9 = unaff_SS;
          FUN_1158_180b(local_8 + -1,1,pbVar2,uVar4);
          puVar6 = local_20e;
          uVar7 = unaff_SS;
          uVar1 = FUN_1100_08df(pbVar3[local_a],puVar6);
          FUN_1158_18e9(uVar1);
          FUN_1158_184c(puVar6,uVar7);
          puVar6 = local_30e;
          uVar7 = unaff_SS;
          FUN_1158_180b((*param_4 - local_8) + 1,local_8,pbVar2,uVar4);
          FUN_1158_184c(puVar6,uVar7);
          FUN_1158_17e7(0xff,pbVar2,uVar4,puVar8,uVar9);
          local_8 = local_8 + 1;
        }
        if (local_a == local_e) break;
        local_a = local_a + 1;
      }
    }
  }
  else {
    local_8 = (uint)*param_4;
    local_e = *param_3 - 1;
    if (-1 < (int)local_e) {
      local_4 = 0;
      while( true ) {
        local_a = (uint)*param_3 - local_4;
        local_b = FUN_1100_0715(local_a,pbVar3,uVar5);
        if ((local_b == 0) || (2 < local_b)) {
          if ((3 < local_b) && (local_b < 6)) {
            if ((int)local_8 < 1) {
              puVar8 = local_10e;
              uVar7 = unaff_SS;
              FUN_1158_18e9(param_1);
              FUN_1158_184c(pbVar2,uVar4);
              FUN_1158_17e7(0xff,pbVar2,uVar4,puVar8,uVar7);
            }
            else {
              local_8 = local_8 - 1;
            }
          }
        }
        else {
          puVar8 = local_10e;
          uVar9 = unaff_SS;
          FUN_1158_180b(local_8,1,pbVar2,uVar4);
          puVar6 = local_20e;
          uVar7 = unaff_SS;
          uVar1 = FUN_1100_08df(pbVar3[local_a],puVar6);
          FUN_1158_18e9(uVar1);
          FUN_1158_184c(puVar6,uVar7);
          puVar6 = local_30e;
          uVar7 = unaff_SS;
          FUN_1158_180b(*param_4 - local_8,local_8 + 1,pbVar2,uVar4);
          FUN_1158_184c(puVar6,uVar7);
          FUN_1158_17e7(0xff,pbVar2,uVar4,puVar8,uVar9);
        }
        if (local_4 == local_e) break;
        local_4 = local_4 + 1;
      }
    }
  }
  return;
}



/* ---- FUN_1100_0b35 @ 1100:0b35  (161 octets) ---- */

bool __stdcall16far FUN_1100_0b35(byte *param_1)

{
  char cVar1;
  undefined2 uVar2;
  uint local_a;
  uint local_8;
  uint local_6;
  bool local_3;
  
  local_3 = true;
  if (3 < *param_1) {
    local_8 = 0xffff;
    local_a = 0xffff;
    local_6 = (uint)*param_1;
    while( true ) {
      uVar2 = (undefined2)((ulong)param_1 >> 0x10);
      if (-1 < (int)local_a) break;
      cVar1 = FUN_1100_0715(local_6,(byte *)param_1,uVar2);
      if (cVar1 == '\x06') {
        if ((int)local_8 < 0) {
          local_8 = local_6;
        }
        else {
          local_a = local_6;
        }
      }
      local_6 = local_6 - 1;
      if (((int)local_6 < 1) || ((int)local_6 < (int)(*param_1 - 4))) break;
    }
    if ((int)local_a < 0) {
      local_a = local_8;
    }
    if (*param_1 != local_a) {
      local_3 = ((byte *)param_1)[local_a + 1] != DAT_1160_0bfc;
    }
  }
  return local_3;
}



/* ---- FUN_1100_0bd6 @ 1100:0bd6  (99 octets) ---- */

undefined2 __stdcall16far FUN_1100_0bd6(byte *param_1)

{
  char extraout_AL;
  char cVar1;
  char extraout_AL_00;
  undefined2 in_AX;
  undefined uVar2;
  undefined extraout_AH;
  undefined extraout_AH_00;
  byte *pbVar3;
  undefined2 uVar4;
  byte local_3;
  
  uVar2 = (undefined)((uint)in_AX >> 8);
  local_3 = DAT_1160_0bfa;
  uVar4 = (undefined2)((ulong)param_1 >> 0x10);
  pbVar3 = (byte *)param_1;
  if (3 < *param_1) {
    FUN_1100_0715(*param_1 - 1,pbVar3,uVar4);
    uVar2 = extraout_AH;
    if (extraout_AL == '\x06') {
      cVar1 = FUN_1100_0715(*param_1 - 2,pbVar3,uVar4);
      if (cVar1 != '\x06') {
        FUN_1100_0715(*param_1 - 3,pbVar3,uVar4);
        uVar2 = extraout_AH_00;
        if (extraout_AL_00 != '\x06') goto LAB_1100_0c32;
      }
      local_3 = pbVar3[*param_1];
      uVar2 = 0;
    }
  }
LAB_1100_0c32:
  return CONCAT11(uVar2,local_3);
}



/* ---- FUN_1100_0c39 @ 1100:0c39  (78 octets) ---- */

int FUN_1100_0c39(int param_1,undefined4 param_2)

{
  byte bVar1;
  undefined2 local_6;
  undefined2 local_4;
  
  local_4 = 0;
  if (0 < param_1) {
    local_6 = 1;
    while( true ) {
      bVar1 = FUN_1100_0715(local_6,(int)param_2,(int)((ulong)param_2 >> 0x10));
      if ((bVar1 != 3) && ((bVar1 < 6 || (7 < bVar1)))) {
        local_4 = local_4 + 1;
      }
      if (local_6 == param_1) break;
      local_6 = local_6 + 1;
    }
  }
  return local_4;
}



/* ---- FUN_1100_0c87 @ 1100:0c87  (118 octets) ---- */

int FUN_1100_0c87(int param_1,byte *param_2)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  undefined2 uVar4;
  int local_8;
  uint local_6;
  int local_4;
  
  uVar4 = (undefined2)((ulong)param_2 >> 0x10);
  iVar3 = FUN_1100_0c39(*param_2,(byte *)param_2,uVar4);
  if (iVar3 < param_1) {
    local_4 = -1;
  }
  else {
    local_4 = 0;
    local_8 = param_1;
    bVar1 = *param_2;
    if (bVar1 != 0) {
      local_6 = 1;
      while( true ) {
        local_4 = local_4 + 1;
        cVar2 = FUN_1100_0715(local_6,(byte *)param_2,uVar4);
        if (((cVar2 != '\x03') && (local_8 = local_8 + -1, local_8 < 0)) || (local_6 == bVar1))
        break;
        local_6 = local_6 + 1;
      }
    }
  }
  return local_4;
}



/* ---- FUN_1100_0cfd @ 1100:0cfd  (69 octets) ---- */

undefined FUN_1100_0cfd(undefined2 param_1,undefined4 param_2)

{
  byte bVar1;
  int iVar2;
  undefined2 uVar3;
  undefined local_3;
  
  local_3 = 0;
  uVar3 = (undefined2)((ulong)param_2 >> 0x10);
  iVar2 = FUN_1100_0c87(param_1,(int)param_2,uVar3);
  if (-1 < iVar2) {
    bVar1 = FUN_1100_0715(iVar2,(int)param_2,uVar3);
    if ((bVar1 == 0) || (2 < bVar1)) {
      local_3 = 0;
    }
    else {
      local_3 = 1;
    }
  }
  return local_3;
}



/* ---- FUN_1100_0d42 @ 1100:0d42  (436 octets) ---- */

void FUN_1100_0d42(undefined param_1,int param_2,int param_3,int param_4,undefined *param_5,
                  undefined4 param_6,undefined4 param_7)

{
  undefined extraout_AH;
  undefined *puVar1;
  undefined2 uVar3;
  undefined2 unaff_SS;
  undefined *puVar5;
  undefined2 uVar6;
  undefined *puVar7;
  undefined2 uVar8;
  undefined local_20a [2];
  undefined local_208 [254];
  undefined local_10a [2];
  undefined local_108 [254];
  int local_a;
  int local_8;
  int local_6;
  byte local_3;
  undefined2 uVar2;
  undefined2 uVar4;
  
  uVar6 = (undefined2)((ulong)param_6 >> 0x10);
  puVar1 = (undefined *)param_5;
  uVar3 = (undefined2)((ulong)param_5 >> 0x10);
  uVar2 = (undefined2)param_7;
  uVar4 = (undefined2)((ulong)param_7 >> 0x10);
  if (param_3 - param_4 < param_2) {
    local_3 = FUN_1100_083d(1,(int)param_6,uVar6);
    local_6 = param_3 + -1;
    if ((local_3 & 1) != 0) {
      local_6 = param_4 + -1;
    }
    puVar7 = local_108;
    uVar6 = unaff_SS;
    FUN_1158_180b(local_6,1,puVar1,uVar3);
    FUN_1158_17e7(0xff,uVar2,uVar4,puVar7,uVar6);
    local_a = param_2 - (param_3 - param_4);
    if (0 < local_a) {
      local_8 = 1;
      while( true ) {
        puVar7 = local_20a;
        uVar8 = unaff_SS;
        FUN_1158_17cd(uVar2,uVar4);
        puVar5 = local_10a;
        uVar6 = unaff_SS;
        FUN_1158_18e9(CONCAT11(extraout_AH,param_1));
        FUN_1158_184c(puVar5,uVar6);
        FUN_1158_17e7(0xff,uVar2,uVar4,puVar7,uVar8);
        if (local_8 == local_a) break;
        local_8 = local_8 + 1;
      }
    }
    puVar7 = local_208;
    uVar6 = unaff_SS;
    FUN_1158_17cd(uVar2,uVar4);
    puVar5 = local_108;
    FUN_1158_180b(*param_5,local_6 + 1,puVar1,uVar3);
    FUN_1158_184c(puVar5,unaff_SS);
    FUN_1158_17e7(0xff,uVar2,uVar4,puVar7,uVar6);
  }
  else if (param_2 < param_3 - param_4) {
    local_3 = FUN_1100_083d(1,(int)param_6,uVar6);
    if ((local_3 & 1) == 0) {
      puVar7 = local_108;
      uVar6 = unaff_SS;
      FUN_1158_180b(param_4 + param_2 + -1,1,puVar1,uVar3);
      puVar5 = local_208;
      FUN_1158_180b(*param_5,param_3,puVar1,uVar3);
      FUN_1158_184c(puVar5,unaff_SS);
      FUN_1158_17e7(0xff,uVar2,uVar4,puVar7,uVar6);
    }
    else {
      puVar7 = local_108;
      uVar6 = unaff_SS;
      FUN_1158_180b(param_4 + -1,1,puVar1,uVar3);
      puVar5 = local_208;
      FUN_1158_180b(*param_5,param_3 - param_2,puVar1,uVar3);
      FUN_1158_184c(puVar5,unaff_SS);
      FUN_1158_17e7(0xff,uVar2,uVar4,puVar7,uVar6);
    }
  }
  else {
    FUN_1158_17e7(0xff,uVar2,uVar4,puVar1,uVar3);
  }
  return;
}



/* ---- FUN_1100_0ef6 @ 1100:0ef6  (520 octets) ---- */

void FUN_1100_0ef6(byte param_1,undefined4 param_2,byte *param_3,byte *param_4)

{
  byte bVar1;
  char cVar2;
  undefined2 uVar3;
  int iVar4;
  byte *pbVar5;
  byte *pbVar6;
  undefined2 uVar7;
  undefined2 uVar8;
  undefined2 unaff_SS;
  undefined *puVar9;
  undefined2 uVar10;
  undefined *puVar11;
  undefined2 uVar12;
  undefined local_312 [256];
  undefined local_212 [2];
  undefined local_210 [252];
  int local_114;
  uint local_112;
  uint local_110;
  byte local_d;
  uint local_c;
  uint local_a;
  int local_8;
  int local_6;
  int local_4;
  
  local_c = 1;
  local_6 = 0;
  uVar7 = (undefined2)((ulong)param_4 >> 0x10);
  pbVar5 = (byte *)param_4;
  FUN_1158_17e7(0xff,pbVar5,uVar7,(int)param_2,(int)((ulong)param_2 >> 0x10));
  local_112 = (uint)*param_3;
  pbVar6 = (byte *)param_3;
  uVar8 = (undefined2)((ulong)param_3 >> 0x10);
  if (local_112 == 0) {
LAB_1100_1050:
    local_110 = FUN_1100_0c39(*param_3,pbVar6,uVar8);
    if (*param_4 != local_110) {
      puVar11 = local_210;
      FUN_1100_0d42(CONCAT11((char)(local_110 - local_6 >> 8),param_1),local_110 - local_6,
                    *param_4 + 1,local_6 + 1,pbVar5,uVar7,pbVar6,uVar8);
      FUN_1158_17e7(0xff,pbVar5,uVar7,puVar11,unaff_SS);
    }
    local_112 = (uint)*param_4;
    local_a = 0;
    while( true ) {
      if ((pbVar5[local_a] == 0x20) &&
         (cVar2 = FUN_1100_0cfd(local_a - 1,pbVar6,uVar8), cVar2 == '\0')) {
        pbVar5[local_a] = param_1;
      }
      if (local_a == local_112) break;
      local_a = local_a + 1;
    }
    return;
  }
  local_c = 1;
  do {
    local_d = FUN_1100_0715(local_c,pbVar6,uVar8);
    if ((local_d != 0) && (local_d < 3)) {
      local_a = FUN_1100_0c39(local_c,pbVar6,uVar8);
      local_8 = *param_4 + 1;
      local_114 = *param_4 + 1;
      iVar4 = local_6 + 1;
      if (local_6 + 1 <= local_114) {
        while (local_4 = iVar4, bVar1 = FUN_1100_08df(pbVar6[local_c]), pbVar5[local_4] != bVar1) {
          if (local_4 == local_114) goto LAB_1100_0fbc;
          iVar4 = local_4 + 1;
        }
        local_8 = local_4;
      }
LAB_1100_0fbc:
      if ((int)(uint)*param_4 < local_8) {
        puVar11 = local_312;
        uVar12 = unaff_SS;
        FUN_1158_17cd(pbVar5,uVar7);
        puVar9 = local_212;
        uVar10 = unaff_SS;
        uVar3 = FUN_1100_08df(pbVar6[local_c],puVar9);
        FUN_1158_18e9(uVar3);
        FUN_1158_184c(puVar9,uVar10);
        FUN_1158_17e7(0xff,pbVar5,uVar7,puVar11,uVar12);
      }
      puVar11 = local_212;
      iVar4 = local_a - (local_6 + 1);
      uVar10 = unaff_SS;
      FUN_1100_0d42(CONCAT11((char)((uint)iVar4 >> 8),param_1),iVar4,local_8,local_6 + 1,pbVar5,
                    uVar7,pbVar6,uVar8);
      FUN_1158_17e7(0xff,pbVar5,uVar7,puVar11,uVar10);
      local_6 = local_a;
    }
    if (local_c == local_112) goto LAB_1100_1050;
    local_c = local_c + 1;
  } while( true );
}



/* ---- FUN_1100_115a @ 1100:115a  (110 octets) ---- */

undefined4 __stdcall16far
FUN_1100_115a(undefined4 param_1,char param_2,undefined2 param_3,undefined2 param_4)

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
  FUN_1120_4709(iVar2,uVar3,0,param_3,param_4);
  *(undefined *)(iVar2 + 0xf4) = 0;
  uVar1 = DAT_1160_1718;
  *(undefined2 *)(iVar2 + 0xf9) = DAT_1160_1716;
  *(undefined2 *)(iVar2 + 0xfb) = uVar1;
  *(undefined *)(iVar2 + 0xf0) = DAT_1160_0bfa;
  uVar1 = DAT_1160_1718;
  *(undefined2 *)(iVar2 + 0xec) = DAT_1160_1716;
  *(undefined2 *)(iVar2 + 0xee) = uVar1;
  if (param_2 != '\0') {
    DAT_1160_1858 = uStack_a;
  }
  return param_1;
}



/* ---- FUN_1100_11c8 @ 1100:11c8  (67 octets) ---- */

void __stdcall16far FUN_1100_11c8(undefined4 param_1,char param_2)

{
  int iVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  FUN_1150_0624(*(undefined2 *)(iVar1 + 0xf9),*(undefined2 *)(iVar1 + 0xfb));
  FUN_1150_0624(*(undefined2 *)(iVar1 + 0xec),*(undefined2 *)(iVar1 + 0xee));
  FUN_1138_2efc(iVar1,uVar2,0);
  if (param_2 != '\0') {
    FUN_1158_200f();
  }
  return;
}



/* ---- FUN_1100_120b @ 1100:120b  (292 octets) ---- */

void __stdcall16far FUN_1100_120b(undefined4 *param_1,byte param_2,int *param_3)

{
  undefined2 *puVar1;
  char cVar2;
  undefined4 *puVar3;
  undefined2 uVar4;
  
  uVar4 = (undefined2)((ulong)param_1 >> 0x10);
  puVar3 = (undefined4 *)param_1;
  FUN_1138_4f6a(puVar3,uVar4,param_2,(int *)param_3,(int)((ulong)param_3 >> 0x10));
  cVar2 = FUN_1100_181c(puVar3,uVar4);
  if (((cVar2 != '\0') && (*param_3 != 0)) && ((param_2 & 2) == 0)) {
    if ((*param_3 == 0x25) || (*param_3 == 0x27)) {
      FUN_1100_1e12(puVar3,uVar4,param_2,*param_3);
      if (((param_2 & 1) == 0) && ((param_2 & 4) == 0)) {
        *param_3 = 0;
      }
    }
    else if ((*param_3 == 0x26) || (*param_3 == 0x28)) {
      *param_3 = 0;
    }
    else if ((*param_3 == 0x24) || (*param_3 == 0x23)) {
      FUN_1100_203e(puVar3,uVar4,param_2,*param_3);
      *param_3 = 0;
    }
    else if ((*param_3 == 0x2e) || (*param_3 == 8)) {
      puVar1 = (undefined2 *)((int)*param_1 + 0x7c);
      cVar2 = (*(code *)*puVar1)(0x1100,puVar3,uVar4);
      if (cVar2 != '\0') {
        FUN_1100_2113(puVar3,uVar4,*param_3);
      }
      *param_3 = 0;
    }
    else if ((*param_3 == 0x2d) && ((param_2 & 1) != 0)) {
      FUN_1120_4a1f(puVar3,uVar4);
      *param_3 = 0;
    }
    else {
      FUN_1100_1c52(puVar3,uVar4);
    }
  }
  return;
}



/* ---- FUN_1100_1339 @ 1100:1339  (78 octets) ---- */

void __stdcall16far FUN_1100_1339(undefined4 param_1,byte param_2,int *param_3)

{
  char cVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  uVar2 = (undefined2)param_1;
  FUN_1138_50fe(uVar2,uVar3,param_2,(int *)param_3,(int)((ulong)param_3 >> 0x10));
  cVar1 = FUN_1100_181c(uVar2,uVar3);
  if ((((cVar1 != '\0') && (*param_3 != 0)) && ((*param_3 == 0x25 || (*param_3 == 0x27)))) &&
     ((param_2 & 4) != 0)) {
    FUN_1100_1c52(uVar2,uVar3);
  }
  return;
}



/* ---- FUN_1100_1387 @ 1100:1387  (64 octets) ---- */

void __stdcall16far FUN_1100_1387(undefined4 param_1,char *param_2)

{
  char cVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  
  uVar3 = (undefined2)((ulong)param_2 >> 0x10);
  uVar4 = (undefined2)((ulong)param_1 >> 0x10);
  uVar2 = (undefined2)param_1;
  FUN_1138_521f(uVar2,uVar4,(char *)param_2,uVar3);
  cVar1 = FUN_1100_181c(uVar2,uVar4);
  if (cVar1 != '\0') {
    if (*param_2 != '\0') {
      FUN_1100_1ce5(uVar2,uVar4,(char *)param_2,uVar3);
      *param_2 = '\0';
    }
  }
  return;
}



/* ---- FUN_1100_13c7 @ 1100:13c7  (38 octets) ---- */

void __stdcall16far FUN_1100_13c7(undefined4 param_1,undefined4 param_2)

{
  undefined2 uVar1;
  
  uVar1 = (undefined2)((ulong)param_1 >> 0x10);
  FUN_1138_282c((int)param_1,uVar1,(int)param_2,param_2._2_2_);
  *(undefined2 *)((int)param_1 + 0xf7) = *(undefined2 *)((int)param_2 + 4);
  return;
}



/* ---- FUN_1100_13ed @ 1100:13ed  (112 octets) ---- */

void __stdcall16far FUN_1100_13ed(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 unaff_SS;
  int local_6;
  int local_4;
  
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  iVar2 = (int)param_1;
  FUN_1138_2bce(iVar2,uVar3,(int)param_2,param_2._2_2_);
  cVar1 = FUN_1100_181c(iVar2,uVar3);
  if (cVar1 != '\0') {
    FUN_1100_1a9e(iVar2,uVar3,&local_6,unaff_SS,&local_4,unaff_SS);
    *(int *)(iVar2 + 0xf5) = local_4;
    if (local_4 != local_6) {
      if (*(int *)(iVar2 + 0xf7) < *(int *)((int)param_2 + 4)) {
        *(int *)(iVar2 + 0xf5) = local_6;
      }
    }
    FUN_1100_1c52(iVar2,uVar3);
  }
  return;
}



/* ---- FUN_1100_145d @ 1100:145d  (49 octets) ---- */

void __stdcall16far FUN_1100_145d(undefined4 *param_1)

{
  undefined2 *puVar1;
  char cVar2;
  undefined2 uVar3;
  
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  puVar1 = (undefined2 *)((int)*param_1 + -0x10);
  (*(code *)*puVar1)();
  cVar2 = FUN_1100_181c((undefined4 *)param_1,uVar3);
  if (cVar2 != '\0') {
    FUN_1100_1c52((undefined4 *)param_1,uVar3);
  }
  return;
}



/* ---- FUN_1100_148e @ 1100:148e  (74 octets) ---- */

void __stdcall16far FUN_1100_148e(undefined4 param_1,undefined4 param_2)

{
  undefined2 uVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 unaff_SS;
  undefined in_ZF;
  undefined4 uVar4;
  undefined *puVar5;
  undefined2 uVar6;
  undefined local_202 [256];
  undefined local_102 [256];
  
  puVar5 = local_202;
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  uVar1 = (undefined2)param_1;
  uVar6 = unaff_SS;
  FUN_1100_14d8(uVar1,uVar2);
  uVar3 = (undefined2)((ulong)param_2 >> 0x10);
  FUN_1158_18be((int)param_2,uVar3,puVar5,uVar6);
  if (!(bool)in_ZF) {
    uVar4 = FUN_1150_0d4c((int)param_2,uVar3,local_102,unaff_SS);
    FUN_1138_1d25(uVar1,uVar2,uVar4);
    FUN_1100_1c52(uVar1,uVar2);
  }
  return;
}



/* ---- FUN_1100_14d8 @ 1100:14d8  (37 octets) ---- */

void __stdcall16far FUN_1100_14d8(undefined4 param_1,undefined4 param_2)

{
  undefined2 unaff_SS;
  undefined *puVar1;
  undefined local_102 [256];
  
  puVar1 = local_102;
  FUN_1138_1d53((int)param_1,(int)((ulong)param_1 >> 0x10));
  FUN_1158_17e7(0xff,(int)param_2,(int)((ulong)param_2 >> 0x10),puVar1,unaff_SS);
  return;
}



/* ---- FUN_1100_14fd @ 1100:14fd  (39 octets) ---- */

undefined __stdcall16far FUN_1100_14fd(undefined4 param_1)

{
  undefined local_104;
  
  FUN_1100_1524((int)param_1,(int)((ulong)param_1 >> 0x10));
  return local_104;
}



/* ---- FUN_1100_1524 @ 1100:1524  (145 octets) ---- */

void __stdcall16far FUN_1100_1524(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined2 unaff_SS;
  undefined *puVar6;
  undefined2 uVar7;
  undefined *puVar8;
  undefined2 uVar9;
  undefined local_204 [256];
  undefined local_104 [258];
  
  uVar4 = (undefined2)((ulong)param_1 >> 0x10);
  iVar2 = (int)param_1;
  cVar1 = FUN_1100_181c(iVar2,uVar4);
  uVar3 = (undefined2)param_2;
  uVar5 = (undefined2)((ulong)param_2 >> 0x10);
  if (cVar1 == '\0') {
    puVar8 = local_104;
    FUN_1138_1d53(iVar2,uVar4);
    FUN_1158_17e7(0xff,uVar3,uVar5,puVar8,unaff_SS);
  }
  else {
    puVar8 = local_204;
    puVar6 = local_104;
    uVar7 = unaff_SS;
    uVar9 = unaff_SS;
    FUN_1100_14d8(iVar2,uVar4);
    FUN_1100_2572(iVar2,uVar4,puVar6,uVar7);
    FUN_1158_17e7(0xff,uVar3,uVar5,puVar8,uVar9);
    if (*(char *)(iVar2 + 0xf3) != '\0') {
      puVar8 = local_104;
      FUN_1100_250d(iVar2,uVar4,0,uVar3,uVar5);
      FUN_1158_17e7(0xff,uVar3,uVar5,puVar8,unaff_SS);
    }
  }
  return;
}



/* ---- FUN_1100_15b5 @ 1100:15b5  (268 octets) ---- */

void __stdcall16far FUN_1100_15b5(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  undefined extraout_AH;
  undefined extraout_AH_00;
  int iVar2;
  undefined2 uVar3;
  undefined2 unaff_SS;
  undefined4 uVar4;
  undefined *puVar5;
  undefined2 uVar6;
  undefined *puVar7;
  undefined2 uVar8;
  undefined local_306 [256];
  undefined local_206 [258];
  undefined local_104 [2];
  undefined local_102 [256];
  
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  iVar2 = (int)param_1;
  cVar1 = FUN_1100_181c(iVar2,uVar3);
  uVar6 = (undefined2)((ulong)param_2 >> 0x10);
  if (cVar1 == '\0') {
    FUN_1138_1d8c(iVar2,uVar3,(int)param_2,uVar6);
  }
  else {
    FUN_1158_17e7(0xff,local_102,unaff_SS,(int)param_2,uVar6);
    if (*(char *)(iVar2 + 0xf3) == '\0') {
      puVar7 = local_206;
      uVar6 = unaff_SS;
      FUN_1100_250d(iVar2,uVar3,1,local_102,unaff_SS);
      FUN_1158_17e7(0xff,local_102,unaff_SS,puVar7,uVar6);
    }
    else {
      puVar7 = local_306;
      puVar5 = local_206;
      uVar6 = unaff_SS;
      uVar8 = unaff_SS;
      FUN_1100_17fe(iVar2,uVar3);
      FUN_1100_0ef6(CONCAT11(extraout_AH,*(undefined *)(iVar2 + 0xf0)),local_102,unaff_SS,puVar5,
                    uVar6);
      FUN_1158_17e7(0xff,local_102,unaff_SS,puVar7,uVar8);
    }
    if ((((*(byte *)(iVar2 + 0xf4) & 4) == 0) && ((*(byte *)(iVar2 + 0x18) & 0x10) != 0)) &&
       ((*(byte *)(iVar2 + 0x18) & 1) == 0)) {
      cVar1 = FUN_1100_2a76(iVar2,uVar3,local_104,unaff_SS,local_102,unaff_SS);
      if (cVar1 == '\0') {
        puVar7 = local_206;
        uVar6 = unaff_SS;
        FUN_1150_092b(0xf067);
        uVar4 = FUN_1150_28e6(0x22,0x1100,CONCAT11(extraout_AH_00,1),puVar7,uVar6);
        FUN_1158_1399(0x1150,uVar4);
      }
    }
    FUN_1100_148e(iVar2,uVar3,local_102,unaff_SS);
  }
  return;
}



/* ---- FUN_1100_16c1 @ 1100:16c1  (63 octets) ---- */

void __stdcall16far FUN_1100_16c1(undefined4 *param_1,undefined2 param_2,undefined2 param_3)

{
  undefined2 *puVar1;
  char cVar2;
  undefined4 *puVar3;
  undefined2 uVar4;
  
  uVar4 = (undefined2)((ulong)param_1 >> 0x10);
  puVar3 = (undefined4 *)param_1;
  cVar2 = FUN_1100_181c(puVar3,uVar4);
  if (cVar2 == '\0') {
    puVar1 = (undefined2 *)((int)*param_1 + -0x10);
    (*(code *)*puVar1)(0x1100,puVar3,uVar4,param_2,param_3);
  }
  else {
    FUN_1120_49ff(puVar3,uVar4);
    FUN_1100_2113(puVar3,uVar4,0x2e);
  }
  return;
}



/* ---- FUN_1100_1700 @ 1100:1700  (254 octets) ---- */

void __stdcall16far FUN_1100_1700(undefined4 *param_1,undefined2 param_2,undefined2 param_3)

{
  undefined2 *puVar1;
  char cVar2;
  undefined4 *puVar3;
  undefined2 uVar4;
  undefined2 unaff_SS;
  undefined *puVar5;
  undefined2 uVar6;
  undefined local_306 [256];
  int local_206;
  int local_204;
  undefined local_202 [256];
  undefined local_102 [256];
  
  uVar4 = (undefined2)((ulong)param_1 >> 0x10);
  puVar3 = (undefined4 *)param_1;
  cVar2 = FUN_1100_181c(puVar3,uVar4);
  if ((cVar2 == '\0') || (*(char *)(puVar3 + 0x37) != '\0')) {
    puVar1 = (undefined2 *)((int)*param_1 + -0x10);
    (*(code *)*puVar1)(0x1100,puVar3,uVar4,param_2,param_3);
  }
  else {
    FUN_1090_3745((int)DAT_1160_2ad0,(int)((ulong)DAT_1160_2ad0 >> 0x10));
    puVar5 = local_306;
    uVar6 = unaff_SS;
    FUN_1090_39be((int)DAT_1160_2ad0,(int)((ulong)DAT_1160_2ad0 >> 0x10));
    FUN_1158_17e7(0xff,local_102,unaff_SS,puVar5,uVar6);
    FUN_1090_3703((int)DAT_1160_2ad0,(int)((ulong)DAT_1160_2ad0 >> 0x10));
    FUN_1100_1a9e(puVar3,uVar4,&local_206,unaff_SS,&local_204,unaff_SS);
    puVar5 = local_306;
    uVar6 = unaff_SS;
    FUN_1100_14d8(puVar3,uVar4);
    FUN_1158_17e7(0xff,local_202,unaff_SS,puVar5,uVar6);
    FUN_1100_2b2e(puVar3,uVar4,local_206 - local_204,local_204,0xff,local_202,unaff_SS);
    local_204 = FUN_1100_2be4(puVar3,uVar4,local_204,local_102,unaff_SS,0xff,local_202,unaff_SS);
    FUN_1100_148e(puVar3,uVar4,local_202,unaff_SS);
    FUN_1100_1b12(puVar3,uVar4,local_204);
  }
  return;
}



/* ---- FUN_1100_17fe @ 1100:17fe  (30 octets) ---- */

void __stdcall16far FUN_1100_17fe(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)((int)param_1 + 0xec);
  FUN_1158_17e7(0xff,(int)param_2,(int)((ulong)param_2 >> 0x10),(int)uVar1,
                (int)((ulong)uVar1 >> 0x10));
  return;
}



/* ---- FUN_1100_181c @ 1100:181c  (31 octets) ---- */

uint __stdcall16far FUN_1100_181c(undefined4 param_1)

{
  uint in_AX;
  uint uVar1;
  
  uVar1 = in_AX & 0xff00;
  if (*(char *)*(undefined4 *)((int)param_1 + 0xec) != '\0') {
    uVar1 = uVar1 + 1;
  }
  return uVar1;
}



/* ---- FUN_1100_183b @ 1100:183b  (238 octets) ---- */

void __stdcall16far FUN_1100_183b(undefined4 param_1,undefined *param_2)

{
  undefined uVar1;
  undefined2 uVar2;
  int iVar3;
  undefined *puVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  undefined2 unaff_SS;
  undefined *puVar7;
  undefined local_208 [258];
  undefined4 local_106;
  undefined local_102 [256];
  
  puVar7 = local_208;
  uVar5 = (undefined2)((ulong)param_1 >> 0x10);
  iVar3 = (int)param_1;
  uVar2 = unaff_SS;
  FUN_1100_14d8(iVar3,uVar5);
  FUN_1158_17e7(0xff,local_102,unaff_SS,puVar7,uVar2);
  local_106 = FUN_1140_17a8(iVar3,uVar5);
  puVar7 = local_208;
  uVar2 = unaff_SS;
  FUN_1100_2572(iVar3,uVar5,local_102,unaff_SS);
  FUN_1158_17e7(0xff,local_102,unaff_SS,puVar7,uVar2);
  uVar6 = (undefined2)((ulong)param_2 >> 0x10);
  puVar4 = (undefined *)param_2;
  FUN_1150_0651(puVar4,uVar6,iVar3 + 0xec,uVar5);
  puVar7 = local_208;
  uVar2 = unaff_SS;
  FUN_1100_17fe(iVar3,uVar5);
  uVar2 = FUN_1100_0c39(*param_2,puVar7,uVar2);
  *(undefined2 *)(iVar3 + 0xf1) = uVar2;
  uVar1 = FUN_1100_0b35(puVar4,uVar6);
  *(undefined *)(iVar3 + 0xf3) = uVar1;
  uVar1 = FUN_1100_0bd6(puVar4,uVar6);
  *(undefined *)(iVar3 + 0xf0) = uVar1;
  puVar7 = local_208;
  uVar2 = unaff_SS;
  FUN_1100_250d(iVar3,uVar5,1,local_102,unaff_SS);
  FUN_1158_17e7(0xff,local_102,unaff_SS,puVar7,uVar2);
  FUN_1100_148e(iVar3,uVar5,local_102,unaff_SS);
  return;
}



/* ---- FUN_1100_192a @ 1100:192a  (299 octets) ---- */

void __stdcall16far FUN_1100_192a(undefined4 param_1,char *param_2)

{
  byte *pbVar1;
  char cVar2;
  undefined2 uVar3;
  int iVar4;
  int iVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  undefined2 unaff_SS;
  undefined in_ZF;
  undefined uVar8;
  undefined *puVar9;
  char *pcVar10;
  int iVar11;
  undefined2 uVar12;
  undefined local_208 [256];
  undefined local_108 [257];
  undefined local_7;
  undefined local_6 [2];
  undefined2 local_4;
  
  uVar6 = (undefined2)((ulong)param_2 >> 0x10);
  puVar9 = local_108;
  uVar7 = (undefined2)((ulong)param_1 >> 0x10);
  iVar5 = (int)param_1;
  uVar3 = unaff_SS;
  pcVar10 = (char *)param_2;
  uVar12 = uVar6;
  FUN_1100_17fe(iVar5,uVar7);
  FUN_1158_18be(puVar9,uVar3,pcVar10,uVar12);
  if (!(bool)in_ZF) {
    local_7 = 0;
    if ((((*(byte *)(iVar5 + 0x18) & 0x10) != 0) && (*param_2 != '\0')) &&
       ((*(byte *)(iVar5 + 0x18) & 1) == 0)) {
      FUN_1100_148e(iVar5,uVar7,0x1929,0x1158);
    }
    local_7 = FUN_1100_181c(iVar5,uVar7);
    cVar2 = FUN_1138_64fa(iVar5,uVar7);
    if (cVar2 != '\0') {
      FUN_1100_1a9e(iVar5,uVar7,local_6,unaff_SS,&local_4,unaff_SS);
    }
    FUN_1100_183b(iVar5,uVar7,(char *)param_2,uVar6);
    pbVar1 = (byte *)(iVar5 + 0xf4);
    *pbVar1 = *pbVar1 & 0xfe;
    uVar8 = *pbVar1 == 0;
    puVar9 = local_208;
    FUN_1100_17fe(iVar5,uVar7);
    FUN_1158_18be(0x1714,0x1160,puVar9,unaff_SS);
    if (!(bool)uVar8) {
      *(byte *)(iVar5 + 0xf4) = *(byte *)(iVar5 + 0xf4) | 1;
    }
    FUN_1120_4832(iVar5,uVar7,0);
    cVar2 = FUN_1100_181c(iVar5,uVar7);
    if ((cVar2 != '\0') && (0 < *(int *)(iVar5 + 0xf1))) {
      FUN_1120_4832(iVar5,uVar7,*(undefined2 *)(iVar5 + 0xf1));
    }
    cVar2 = FUN_1138_64fa(iVar5,uVar7);
    if (cVar2 != '\0') {
      uVar3 = FUN_1138_62b9(iVar5,uVar7);
      iVar11 = 0x1138;
      iVar4 = GETFOCUS(0x1138,uVar3);
      if ((iVar4 == iVar11) && ((*(byte *)(iVar5 + 0x18) & 0x10) == 0)) {
        FUN_1100_1b12(iVar5,uVar7,local_4);
      }
    }
  }
  return;
}



/* ---- FUN_1100_1a55 @ 1100:1a55  (22 octets) ---- */

undefined2 __stdcall16far FUN_1100_1a55(undefined4 param_1)

{
  return *(undefined2 *)((int)param_1 + 0xd8);
}



/* ---- FUN_1100_1a6b @ 1100:1a6b  (51 octets) ---- */

void __stdcall16far FUN_1100_1a6b(undefined4 param_1,undefined2 param_2)

{
  char cVar1;
  int iVar2;
  undefined2 uVar3;
  
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  iVar2 = (int)param_1;
  cVar1 = FUN_1100_181c(iVar2,uVar3);
  if (cVar1 == '\0') {
    FUN_1120_4832(iVar2,uVar3,param_2);
  }
  else {
    FUN_1120_4832(iVar2,uVar3,*(undefined2 *)(iVar2 + 0xf1));
  }
  return;
}



/* ---- FUN_1100_1a9e @ 1100:1a9e  (67 octets) ---- */

void __stdcall16far FUN_1100_1a9e(undefined4 param_1,undefined2 *param_2,undefined2 *param_3)

{
  undefined4 uVar1;
  
  FUN_1138_62b9((int)param_1,(int)((ulong)param_1 >> 0x10));
  uVar1 = SENDMESSAGE(0x1138,0,0,0,0x400);
  *param_3 = (int)uVar1;
  *param_2 = (int)((ulong)uVar1 >> 0x10);
  return;
}



/* ---- FUN_1100_1ae1 @ 1100:1ae1  (49 octets) ---- */

void __stdcall16far FUN_1100_1ae1(undefined4 param_1,undefined2 param_2,undefined2 param_3)

{
  FUN_1138_62b9((int)param_1,(int)((ulong)param_1 >> 0x10));
  SENDMESSAGE(0x1138,param_3,param_2,0,0x401);
  return;
}



/* ---- FUN_1100_1b12 @ 1100:1b12  (320 octets) ---- */

void __stdcall16far FUN_1100_1b12(undefined4 param_1,uint param_2)

{
  char cVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 unaff_SS;
  byte local_408;
  byte local_308;
  int local_208;
  undefined local_206 [16];
  undefined local_1f6;
  undefined local_1e1;
  undefined local_106 [256];
  uint local_6;
  uint local_4;
  
  local_4 = param_2;
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  iVar2 = (int)param_1;
  cVar1 = FUN_1100_181c(iVar2,uVar3);
  if (cVar1 == '\0') {
    if ((int)local_4 < 0) {
      local_4 = 0;
    }
    FUN_1100_14d8(iVar2,uVar3);
    if ((int)(uint)local_308 <= (int)local_4) {
      FUN_1100_14d8(iVar2,uVar3);
      local_4 = (uint)local_408;
    }
    FUN_1100_1ae1(iVar2,uVar3,local_4,local_4);
  }
  else {
    if ((int)local_4 < 0) {
      local_4 = 0;
    }
    local_6 = local_4 + 1;
    if (*(int *)(iVar2 + 0xf1) <= (int)local_4) {
      local_6 = *(uint *)(iVar2 + 0xf1);
      local_4 = local_6;
    }
    FUN_1100_1ae1(iVar2,uVar3,local_6,local_6);
    if (local_4 != local_6) {
      GETKEYBOARDSTATE(0x1100,local_106);
      for (local_208 = 0; local_206[local_208] = 0, local_208 != 0xff; local_208 = local_208 + 1) {
      }
      local_1f6 = 0x81;
      local_1e1 = 0x81;
      SETKEYBOARDSTATE(0x14d0,local_206);
      FUN_1138_62b9(iVar2,uVar3);
      SENDMESSAGE(0x1138,1,0,0x25,0x100);
      FUN_1138_62b9(iVar2,uVar3);
      SENDMESSAGE(0x1138,1,0,0x25,0x101);
      SETKEYBOARDSTATE(0x14d0,local_106);
    }
    *(uint *)(iVar2 + 0xf5) = local_4;
  }
  return;
}



/* ---- FUN_1100_1c52 @ 1100:1c52  (79 octets) ---- */

void __stdcall16far FUN_1100_1c52(undefined4 param_1)

{
  char cVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 unaff_SS;
  int local_6;
  int local_4;
  
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  uVar2 = (undefined2)param_1;
  cVar1 = FUN_1138_64fa(uVar2,uVar3);
  if (((cVar1 != '\0') && (cVar1 = FUN_1100_181c(uVar2,uVar3), cVar1 != '\0')) &&
     (FUN_1100_1a9e(uVar2,uVar3,&local_6,unaff_SS,&local_4,unaff_SS), local_4 == local_6)) {
    FUN_1100_1b12(uVar2,uVar3,local_4);
  }
  return;
}



/* ---- FUN_1100_1ca1 @ 1100:1ca1  (15 octets) ---- */

undefined __stdcall16far FUN_1100_1ca1(void)

{
  return 1;
}



/* ---- FUN_1100_1cb0 @ 1100:1cb0  (53 octets) ---- */

void __stdcall16far FUN_1100_1cb0(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  undefined2 uVar3;
  
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  iVar2 = (int)param_1;
  cVar1 = FUN_1120_4896(iVar2,uVar3);
  if (cVar1 != '\0') {
    FUN_1100_148e(iVar2,uVar3,(int)*(undefined4 *)(iVar2 + 0xf9),
                  (int)((ulong)*(undefined4 *)(iVar2 + 0xf9) >> 0x10));
    FUN_1120_48d6(iVar2,uVar3,0);
  }
  return;
}



/* ---- FUN_1100_1ce5 @ 1100:1ce5  (301 octets) ---- */

char __stdcall16far FUN_1100_1ce5(undefined4 *param_1,char *param_2)

{
  undefined2 *puVar1;
  char cVar2;
  undefined4 *puVar3;
  undefined2 uVar4;
  undefined2 unaff_SS;
  char local_c [4];
  int local_8;
  int local_6;
  char local_3;
  
  local_3 = '\0';
  puVar3 = (undefined4 *)param_1;
  uVar4 = (undefined2)((ulong)param_1 >> 0x10);
  if (*param_2 == '\x1b') {
    puVar1 = (undefined2 *)((int)*param_1 + 0x80);
    (*(code *)*puVar1)();
  }
  else {
    puVar1 = (undefined2 *)((int)*param_1 + 0x7c);
    cVar2 = (*(code *)*puVar1)();
    if (((cVar2 != '\0') && (*(char *)(puVar3 + 0x37) == '\0')) && (*param_2 != '\b')) {
      if (*param_2 == '\r') {
        FUN_1100_23ff(puVar3,uVar4);
      }
      else {
        FUN_1100_1a9e(puVar3,uVar4,&local_8,unaff_SS,&local_6,unaff_SS);
        if (1 < local_8 - local_6) {
          FUN_1100_2113(puVar3,uVar4,0x2e);
          local_6 = FUN_1100_1fb5(puVar3,uVar4,local_6);
          FUN_1100_1b12(puVar3,uVar4,local_6);
        }
        local_3 = FUN_1100_2775(puVar3,uVar4,local_6,(char *)param_2,(int)((ulong)param_2 >> 0x10));
        if (local_3 != '\0') {
          local_c[0] = *param_2;
          local_c[1] = 0;
          FUN_1138_62b9(puVar3,uVar4);
          SENDMESSAGE(0x1138,local_c,unaff_SS,0,0x412);
          FUN_1100_1a9e(puVar3,uVar4,&local_8,unaff_SS,&local_6,unaff_SS);
          FUN_1100_1f39(puVar3,uVar4,0,local_6);
        }
      }
    }
  }
  return local_3;
}



/* ---- FUN_1100_1e12 @ 1100:1e12  (295 octets) ---- */

void __stdcall16far FUN_1100_1e12(undefined4 param_1,byte param_2,int param_3)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 unaff_SS;
  int local_6;
  int local_4;
  
  if ((param_2 & 4) == 0) {
    uVar2 = (undefined2)((ulong)param_1 >> 0x10);
    iVar1 = (int)param_1;
    FUN_1100_1a9e(iVar1,uVar2,&local_6,unaff_SS,&local_4,unaff_SS);
    if ((param_2 & 1) == 0) {
      if (local_6 - local_4 < 2) {
        if (param_3 == 0x25) {
          FUN_1100_1f87(iVar1,uVar2,local_4);
        }
        else if (local_6 == local_4) {
          FUN_1100_1b12(iVar1,uVar2,local_4);
        }
        else {
          FUN_1100_1f39(iVar1,uVar2,1,local_4);
        }
      }
      else {
        if (local_6 == *(int *)(iVar1 + 0xf5)) {
          *(int *)(iVar1 + 0xf5) = *(int *)(iVar1 + 0xf5) + -1;
        }
        FUN_1100_1b12(iVar1,uVar2,*(undefined2 *)(iVar1 + 0xf5));
      }
    }
    else if (param_3 == 0x27) {
      *(int *)(iVar1 + 0xf5) = *(int *)(iVar1 + 0xf5) + 1;
      if (local_4 + 1 == local_6) {
        FUN_1100_1ae1(iVar1,uVar2,local_6,local_4);
        *(int *)(iVar1 + 0xf5) = *(int *)(iVar1 + 0xf5) + 1;
      }
      if (*(int *)(iVar1 + 0xf1) < *(int *)(iVar1 + 0xf5)) {
        *(undefined2 *)(iVar1 + 0xf5) = *(undefined2 *)(iVar1 + 0xf1);
      }
    }
    else {
      *(int *)(iVar1 + 0xf5) = *(int *)(iVar1 + 0xf5) + -1;
      if ((local_4 + 2 == local_6) && (local_4 < *(int *)(iVar1 + 0xf5))) {
        FUN_1100_1ae1(iVar1,uVar2,local_4 + 1,local_4 + 1);
        *(int *)(iVar1 + 0xf5) = *(int *)(iVar1 + 0xf5) + -1;
      }
      if (*(int *)(iVar1 + 0xf5) < 0) {
        *(undefined2 *)(iVar1 + 0xf5) = 0;
      }
    }
  }
  return;
}



/* ---- FUN_1100_1f39 @ 1100:1f39  (78 octets) ---- */

void __stdcall16far FUN_1100_1f39(undefined4 param_1,int param_2,int param_3)

{
  char cVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 unaff_SS;
  undefined *puVar4;
  undefined local_104 [256];
  int local_4;
  
  local_4 = param_3 + param_2;
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  uVar2 = (undefined2)param_1;
  local_4 = FUN_1100_1fb5(uVar2,uVar3,local_4);
  puVar4 = local_104;
  FUN_1100_17fe(uVar2,uVar3);
  cVar1 = FUN_1100_0cfd(local_4,puVar4,unaff_SS);
  if (cVar1 != '\0') {
    local_4 = param_3;
  }
  FUN_1100_1b12(uVar2,uVar3,local_4);
  return;
}



/* ---- FUN_1100_1f87 @ 1100:1f87  (46 octets) ---- */

void __stdcall16far FUN_1100_1f87(undefined4 param_1,int param_2)

{
  undefined2 uVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  uVar1 = FUN_1100_1ff2((int)param_1,uVar2,param_2 + -1);
  FUN_1100_1b12((int)param_1,uVar2,uVar1);
  return;
}



/* ---- FUN_1100_1fb5 @ 1100:1fb5  (61 octets) ---- */

int __stdcall16far FUN_1100_1fb5(undefined4 param_1,int param_2)

{
  char cVar1;
  undefined2 uVar2;
  undefined2 unaff_SS;
  undefined *puVar3;
  undefined2 uVar4;
  undefined local_104 [256];
  int local_4;
  
  local_4 = param_2;
  while( true ) {
    uVar2 = (undefined2)((ulong)param_1 >> 0x10);
    if (*(int *)((int)param_1 + 0xf1) <= local_4) {
      return local_4;
    }
    puVar3 = local_104;
    uVar4 = unaff_SS;
    FUN_1100_17fe((int)param_1,uVar2);
    cVar1 = FUN_1100_0cfd(local_4,puVar3,uVar4);
    if (cVar1 == '\0') break;
    local_4 = local_4 + 1;
  }
  return local_4;
}



/* ---- FUN_1100_1ff2 @ 1100:1ff2  (76 octets) ---- */

int __stdcall16far FUN_1100_1ff2(undefined4 param_1,int param_2)

{
  char cVar1;
  undefined2 uVar2;
  undefined2 unaff_SS;
  undefined *puVar3;
  undefined2 uVar4;
  undefined local_104 [256];
  int local_4;
  
  for (local_4 = param_2; uVar2 = (undefined2)((ulong)param_1 >> 0x10), -1 < local_4;
      local_4 = local_4 + -1) {
    puVar3 = local_104;
    uVar4 = unaff_SS;
    FUN_1100_17fe((int)param_1,uVar2);
    cVar1 = FUN_1100_0cfd(local_4,puVar3,uVar4);
    if (cVar1 == '\0') break;
  }
  if (local_4 < 0) {
    local_4 = FUN_1100_1fb5((int)param_1,uVar2,local_4);
  }
  return local_4;
}



/* ---- FUN_1100_203e @ 1100:203e  (213 octets) ---- */

void __stdcall16far FUN_1100_203e(undefined4 param_1,byte param_2,int param_3)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 unaff_SS;
  int local_6;
  int local_4;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  FUN_1100_1a9e(iVar1,uVar2,&local_6,unaff_SS,&local_4,unaff_SS);
  if (param_3 == 0x24) {
    if ((param_2 & 1) == 0) {
      FUN_1100_1b12(iVar1,uVar2,0);
    }
    else {
      if ((local_4 != *(int *)(iVar1 + 0xf5)) && (local_4 + 1 != local_6)) {
        local_6 = local_4 + 1;
      }
      FUN_1100_1ae1(iVar1,uVar2,local_6,0);
      FUN_1100_1c52(iVar1,uVar2);
    }
    *(undefined2 *)(iVar1 + 0xf5) = 0;
  }
  else {
    if ((param_2 & 1) == 0) {
      FUN_1100_1b12(iVar1,uVar2,*(undefined2 *)(iVar1 + 0xf1));
    }
    else {
      if ((local_6 != *(int *)(iVar1 + 0xf5)) && (local_4 + 1 != local_6)) {
        local_4 = local_6 + -1;
      }
      FUN_1100_1ae1(iVar1,uVar2,*(undefined2 *)(iVar1 + 0xf1),local_4);
      FUN_1100_1c52(iVar1,uVar2);
    }
    *(undefined2 *)(iVar1 + 0xf5) = *(undefined2 *)(iVar1 + 0xf1);
  }
  return;
}



/* ---- FUN_1100_2113 @ 1100:2113  (362 octets) ---- */

void __stdcall16far FUN_1100_2113(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 unaff_SS;
  undefined *puVar3;
  undefined2 uVar4;
  undefined local_310 [256];
  undefined *local_210;
  undefined local_20c [256];
  undefined local_10c [260];
  int local_8;
  int local_6;
  int local_4;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  if (*(char *)(iVar1 + 0xdc) == '\0') {
    FUN_1100_1a9e(iVar1,uVar2,&local_6,unaff_SS,&local_4,unaff_SS);
    if ((local_6 - local_4 < 2) && (param_2 == 8)) {
      local_8 = local_4;
      FUN_1100_1f87(iVar1,uVar2,local_4);
      FUN_1100_1a9e(iVar1,uVar2,&local_6,unaff_SS,&local_4,unaff_SS);
      if (local_4 == local_8) {
        return;
      }
    }
    if (0 < local_6 - local_4) {
      puVar3 = local_310;
      uVar4 = unaff_SS;
      FUN_1100_14d8(iVar1,uVar2);
      FUN_1158_17e7(0xff,local_10c,unaff_SS,puVar3,uVar4);
      FUN_1100_2b2e(iVar1,uVar2,local_6 - local_4,local_4,0xff,local_10c,unaff_SS);
      puVar3 = local_310;
      uVar4 = unaff_SS;
      FUN_1158_180b(local_6 - local_4,local_4 + 1,local_10c,unaff_SS);
      FUN_1158_17e7(0xff,local_10c,unaff_SS,puVar3,uVar4);
      FUN_1150_0d4c(local_10c,unaff_SS,local_20c,unaff_SS);
      local_210 = local_20c;
      FUN_1138_62b9(iVar1,uVar2);
      SENDMESSAGE(0x1138,local_210,unaff_SS,0,0x412);
      if (local_6 - local_4 == 1) {
        FUN_1100_1a9e(iVar1,uVar2,&local_6,unaff_SS,&local_4,unaff_SS);
        FUN_1100_1b12(iVar1,uVar2,local_4 + -1);
      }
      else {
        local_4 = FUN_1100_1fb5(iVar1,uVar2,local_4);
        FUN_1100_1b12(iVar1,uVar2,local_4);
      }
    }
  }
  return;
}



/* ---- FUN_1100_227d @ 1100:227d  (117 octets) ---- */

void __stdcall16far FUN_1100_227d(undefined4 param_1,undefined2 param_2,undefined2 param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined2 uVar4;
  undefined2 unaff_SS;
  undefined *puVar5;
  undefined2 uVar6;
  undefined local_102 [256];
  
  uVar4 = (undefined2)((ulong)param_1 >> 0x10);
  iVar2 = (int)param_1;
  cVar1 = FUN_1100_181c(iVar2,uVar4);
  if ((cVar1 != '\0') && ((*(byte *)(iVar2 + 0x18) & 0x10) == 0)) {
    if ((*(byte *)(iVar2 + 0xf4) & 2) == 0) {
      iVar3 = iVar2 + 0xf9;
      puVar5 = local_102;
      uVar6 = uVar4;
      FUN_1100_14d8(iVar2,uVar4);
      FUN_1150_0651(puVar5,unaff_SS,iVar3,uVar6);
      FUN_1120_4d3e(iVar2,uVar4,param_2,param_3);
    }
    *(byte *)(iVar2 + 0xf4) = *(byte *)(iVar2 + 0xf4) & 0xfd;
    FUN_1100_1c52(iVar2,uVar4);
    return;
  }
  FUN_1120_4d3e(iVar2,uVar4,param_2,param_3);
  return;
}



/* ---- FUN_1100_236f @ 1100:236f  (79 octets) ---- */

void __stdcall16far FUN_1100_236f(undefined4 *param_1,undefined4 param_2)

{
  undefined2 *puVar1;
  char cVar2;
  int iVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  
  uVar4 = (undefined2)((ulong)param_1 >> 0x10);
  puVar1 = (undefined2 *)((int)*param_1 + -0x10);
  (*(code *)*puVar1)();
  cVar2 = FUN_1100_181c((undefined4 *)param_1,uVar4);
  if (cVar2 != '\0') {
    cVar2 = FUN_1120_4896((undefined4 *)param_1,uVar4);
    if (cVar2 != '\0') {
      uVar5 = (undefined2)((ulong)param_2 >> 0x10);
      iVar3 = (int)param_2;
      uVar4 = *(undefined2 *)(iVar3 + 10);
      *(uint *)(iVar3 + 8) = *(uint *)(iVar3 + 8) | 4;
      *(undefined2 *)(iVar3 + 10) = uVar4;
    }
  }
  return;
}



/* ---- FUN_1100_23ff @ 1100:23ff  (141 octets) ---- */

void __stdcall16far FUN_1100_23ff(undefined4 *param_1)

{
  undefined2 *puVar1;
  char cVar2;
  undefined4 *puVar3;
  undefined2 uVar4;
  undefined2 unaff_SS;
  undefined *puVar5;
  undefined2 uVar6;
  undefined local_204 [256];
  undefined2 local_104;
  undefined local_102 [256];
  
  puVar5 = local_204;
  uVar4 = (undefined2)((ulong)param_1 >> 0x10);
  puVar3 = (undefined4 *)param_1;
  uVar6 = unaff_SS;
  FUN_1100_14d8(puVar3,uVar4);
  FUN_1158_17e7(0xff,local_102,unaff_SS,puVar5,uVar6);
  cVar2 = FUN_1100_181c(puVar3,uVar4);
  if (cVar2 != '\0') {
    cVar2 = FUN_1120_4896(puVar3,uVar4);
    if (cVar2 != '\0') {
      cVar2 = FUN_1100_2a76(puVar3,uVar4,&local_104,unaff_SS,local_102,unaff_SS);
      if (cVar2 == '\0') {
        if ((*(byte *)(puVar3 + 6) & 0x10) == 0) {
          *(byte *)(puVar3 + 0x3d) = *(byte *)(puVar3 + 0x3d) | 2;
          puVar1 = (undefined2 *)((int)*param_1 + 0x78);
          (*(code *)*puVar1)(0x1100,puVar3,uVar4);
        }
        FUN_1100_1b12(puVar3,uVar4,local_104);
        FUN_1100_248c(puVar3,uVar4);
      }
    }
  }
  return;
}



/* ---- FUN_1100_248c @ 1100:248c  (129 octets) ---- */

void __stdcall16far FUN_1100_248c(undefined4 param_1)

{
  undefined extraout_AH;
  undefined2 unaff_SS;
  undefined4 uVar1;
  undefined *puVar2;
  undefined2 uVar3;
  undefined local_20a [8];
  undefined local_202 [248];
  undefined *local_10a;
  undefined local_102 [256];
  
  MESSAGEBEEP();
  puVar2 = local_202;
  uVar3 = unaff_SS;
  FUN_1100_17fe((int)param_1,(int)((ulong)param_1 >> 0x10));
  FUN_1158_17e7(0xff,local_102,unaff_SS,puVar2,uVar3);
  puVar2 = local_20a;
  local_10a = local_102;
  uVar3 = unaff_SS;
  FUN_1150_0950(0,&local_10a,unaff_SS,0xf068);
  FUN_1158_17e7(0xff,local_102,unaff_SS,puVar2,uVar3);
  uVar1 = FUN_1150_28e6(0x22,0x1100,CONCAT11(extraout_AH,1),local_102,unaff_SS);
  FUN_1158_1399(0x1150,uVar1);
  return;
}



/* ---- FUN_1100_250d @ 1100:250d  (101 octets) ---- */

void __stdcall16far
FUN_1100_250d(undefined4 param_1,char param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 unaff_SS;
  undefined *puVar5;
  undefined local_102 [256];
  undefined2 uVar3;
  undefined2 uVar4;
  
  iVar1 = (int)param_1;
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  uVar3 = (undefined2)((ulong)param_3 >> 0x10);
  uVar4 = (undefined2)((ulong)param_4 >> 0x10);
  if (param_2 == '\0') {
    puVar5 = local_102;
    FUN_1100_0909(0x20,(int)param_3,uVar3,(int)*(undefined4 *)(iVar1 + 0xec),
                  (int)((ulong)*(undefined4 *)(iVar1 + 0xec) >> 0x10));
    FUN_1158_17e7(0xff,(int)param_4,uVar4,puVar5,unaff_SS);
  }
  else {
    puVar5 = local_102;
    FUN_1100_0909(*(undefined *)(iVar1 + 0xf0),(int)param_3,uVar3,(int)*(undefined4 *)(iVar1 + 0xec)
                  ,(int)((ulong)*(undefined4 *)(iVar1 + 0xec) >> 0x10));
    FUN_1158_17e7(0xff,(int)param_4,uVar4,puVar5,unaff_SS);
  }
  return;
}



/* ---- FUN_1100_2572 @ 1100:2572  (515 octets) ---- */

void __stdcall16far FUN_1100_2572(undefined4 param_1,byte *param_2,byte *param_3)

{
  uint uVar1;
  byte *pbVar2;
  int iVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined2 unaff_SS;
  undefined *puVar6;
  undefined2 uVar7;
  undefined *puVar8;
  undefined2 uVar9;
  undefined local_20e [256];
  undefined local_10e [2];
  undefined local_10c [254];
  uint local_e;
  byte local_c;
  byte local_b;
  uint local_a;
  int local_8;
  uint local_6;
  uint local_4;
  
  local_6 = (uint)*param_2;
  local_a = 1;
  local_8 = 1;
  uVar4 = (undefined2)((ulong)param_3 >> 0x10);
  pbVar2 = (byte *)param_3;
  FUN_1158_17e7(0xff,pbVar2,uVar4,(byte *)param_2,(int)((ulong)param_2 >> 0x10));
  uVar5 = (undefined2)((ulong)param_1 >> 0x10);
  iVar3 = (int)param_1;
  local_e = (uint)*(byte *)*(undefined4 *)(iVar3 + 0xec);
  if (local_e != 0) {
    local_a = 1;
    while( true ) {
      local_b = FUN_1100_0715(local_a,(int)*(undefined4 *)(iVar3 + 0xec),
                              (int)((ulong)*(undefined4 *)(iVar3 + 0xec) >> 0x10));
      if ((local_b != 0) && (local_b < 3)) {
        puVar8 = local_10e;
        uVar9 = unaff_SS;
        FUN_1158_180b(local_8 + -1,1,pbVar2,uVar4);
        puVar6 = local_20e;
        uVar7 = unaff_SS;
        FUN_1158_180b((uint)*param_3 - local_8,local_8 + 1,pbVar2,uVar4);
        FUN_1158_184c(puVar6,uVar7);
        FUN_1158_17e7(0xff,pbVar2,uVar4,puVar8,uVar9);
      }
      if ((3 < local_b) && (local_b < 6)) {
        local_8 = local_8 + 1;
      }
      if (local_a == local_e) break;
      local_a = local_a + 1;
    }
  }
  local_c = FUN_1100_083d(1,(int)*(undefined4 *)(iVar3 + 0xec),
                          (int)((ulong)*(undefined4 *)(iVar3 + 0xec) >> 0x10));
  if ((local_c & 1) == 0) {
    uVar1 = (uint)*param_3;
    if (uVar1 != 0) {
      for (local_4 = 1;
          (pbVar2[(uVar1 - local_4) + 1] == *(byte *)(iVar3 + 0xf0) &&
          (*param_3 = *param_3 - 1, local_4 != uVar1)); local_4 = local_4 + 1) {
      }
    }
  }
  else {
    local_8 = 1;
    local_e = (uint)*param_3;
    if (local_e != 0) {
      for (local_4 = 1;
          (pbVar2[local_4] == *(byte *)(iVar3 + 0xf0) && (local_8 = local_8 + 1, local_4 != local_e)
          ); local_4 = local_4 + 1) {
      }
    }
    if (local_8 != 1) {
      puVar8 = local_10c;
      FUN_1158_180b(((uint)*param_3 - local_8) + 1,local_8,pbVar2,uVar4);
      FUN_1158_17e7(0xff,pbVar2,uVar4,puVar8,unaff_SS);
    }
  }
  if ((*(char *)(iVar3 + 0xf0) != ' ') && (uVar1 = (uint)*param_3, uVar1 != 0)) {
    local_4 = 1;
    while( true ) {
      if (pbVar2[local_4] == *(byte *)(iVar3 + 0xf0)) {
        pbVar2[local_4] = 0x20;
      }
      if (((int)uVar1 < (int)local_4) || (local_4 == uVar1)) break;
      local_4 = local_4 + 1;
    }
  }
  return;
}



/* ---- FUN_1100_2775 @ 1100:2775  (223 octets) ---- */

undefined2 __stdcall16far FUN_1100_2775(undefined4 param_1,undefined2 param_2,undefined *param_3)

{
  int iVar1;
  undefined uVar2;
  undefined extraout_AH;
  undefined extraout_AH_00;
  int iVar3;
  undefined2 uVar4;
  undefined2 unaff_CS;
  undefined2 unaff_SS;
  undefined *puVar5;
  undefined2 uVar6;
  undefined local_10a [258];
  undefined local_8;
  byte local_7;
  int local_6;
  char local_3;
  
  local_3 = '\x01';
  uVar4 = (undefined2)((ulong)param_1 >> 0x10);
  iVar3 = (int)param_1;
  iVar1 = *(int *)(iVar3 + 0xec);
  if ((*(int *)(iVar3 + 0xee) != DAT_1160_1718) || (iVar1 != DAT_1160_1716)) {
    local_3 = '\0';
    puVar5 = local_10a;
    unaff_CS = 0x1100;
    uVar6 = unaff_SS;
    FUN_1100_17fe(iVar3,uVar4);
    iVar1 = FUN_1100_0c87(param_2,puVar5,uVar6);
    local_6 = iVar1;
    if (-1 < iVar1) {
      local_7 = FUN_1100_0715(iVar1,(int)*(undefined4 *)(iVar3 + 0xec),
                              (int)((ulong)*(undefined4 *)(iVar3 + 0xec) >> 0x10));
      local_8 = *param_3;
      unaff_CS = 0x1100;
      iVar1 = FUN_1100_2856(iVar3,uVar4,local_6,(undefined *)param_3,(int)((ulong)param_3 >> 0x10));
      local_3 = (char)iVar1;
      if (local_3 == '\0') {
        uVar2 = (undefined)((uint)iVar1 >> 8);
        iVar1 = CONCAT11(uVar2,local_7);
        if ((3 < local_7) && (local_7 < 6)) {
          unaff_CS = 0x1100;
          iVar1 = FUN_1100_2e21(iVar3,uVar4,CONCAT11(uVar2,local_8),local_6);
          local_6 = iVar1;
          if (0 < iVar1) {
            puVar5 = local_10a;
            FUN_1100_17fe(iVar3,uVar4);
            local_6 = FUN_1100_0c39(local_6,puVar5,unaff_SS);
            FUN_1100_1b12(iVar3,uVar4,local_6);
            uVar2 = extraout_AH;
            goto LAB_1100_284d;
          }
        }
      }
    }
  }
  uVar2 = (undefined)((uint)iVar1 >> 8);
  if (local_3 == '\0') {
    MESSAGEBEEP(unaff_CS,0);
    uVar2 = extraout_AH_00;
  }
LAB_1100_284d:
  return CONCAT11(uVar2,local_3);
}



/* ---- FUN_1100_2856 @ 1100:2856  (544 octets) ---- */

undefined __stdcall16far FUN_1100_2856(undefined4 param_1,int param_2,byte *param_3)

{
  char cVar1;
  byte bVar2;
  undefined extraout_AH;
  int iVar3;
  int iVar4;
  undefined2 uVar5;
  undefined2 unaff_CS;
  undefined2 unaff_SS;
  undefined *puVar6;
  undefined local_206 [257];
  byte local_105;
  undefined local_104;
  byte local_103;
  byte local_4;
  undefined local_3;
  
  local_3 = 1;
  uVar5 = (undefined2)((ulong)param_1 >> 0x10);
  iVar4 = (int)param_1;
  local_105 = FUN_1100_0715(param_2,(int)*(undefined4 *)(iVar4 + 0xec),
                            (int)((ulong)*(undefined4 *)(iVar4 + 0xec) >> 0x10));
  if ((local_105 == 0) || (2 < local_105)) {
    local_4 = FUN_1100_083d(param_2,(int)*(undefined4 *)(iVar4 + 0xec),
                            (int)((ulong)*(undefined4 *)(iVar4 + 0xec) >> 0x10));
    cVar1 = *(char *)((int)*(undefined4 *)(iVar4 + 0xec) + param_2);
    if ((cVar1 == '0') || (cVar1 == '9')) {
      if ((*param_3 < 0x30) || (0x39 < *param_3)) {
        local_3 = 0;
      }
    }
    else if (cVar1 == '#') {
      if (((*param_3 < 0x30) || (0x39 < *param_3)) &&
         ((*param_3 != 0x20 && ((*param_3 != 0x2b && (*param_3 != 0x2d)))))) {
        local_3 = 0;
      }
    }
    else if ((cVar1 == 'C') || (cVar1 == 'c')) {
      iVar4 = ISCHARALPHA();
      if (iVar4 != 0) {
        FUN_1158_17e7(0xff,&local_104,unaff_SS,0x2854,0x14d0);
        local_103 = *param_3;
        if ((local_4 & 2) == 0) {
          if ((local_4 & 4) != 0) {
            puVar6 = local_206;
            uVar5 = unaff_SS;
            FUN_1150_07b7(&local_104,unaff_SS);
            FUN_1158_17e7(0xff,&local_104,unaff_SS,puVar6,uVar5);
          }
        }
        else {
          puVar6 = local_206;
          uVar5 = unaff_SS;
          FUN_1150_0781(&local_104,unaff_SS);
          FUN_1158_17e7(0xff,&local_104,unaff_SS,puVar6,uVar5);
        }
        *param_3 = local_103;
      }
    }
    else if ((((cVar1 == 'L') || (cVar1 == 'l')) || (cVar1 == 'A')) || (cVar1 == 'a')) {
      FUN_1158_17e7(0xff,&local_104,unaff_SS,0x2854,unaff_CS);
      local_103 = *param_3;
      iVar3 = ISCHARALPHA(0x1158,CONCAT11(extraout_AH,*param_3));
      if (iVar3 == 0) {
        local_3 = 0;
        if (((*(char *)((int)*(undefined4 *)(iVar4 + 0xec) + param_2) == 'A') ||
            (*(char *)((int)*(undefined4 *)(iVar4 + 0xec) + param_2) == 'a')) &&
           (iVar4 = ISCHARALPHANUMERIC(0x14d0,*param_3), iVar4 != 0)) {
          local_3 = 1;
        }
      }
      else if ((local_4 & 2) == 0) {
        if ((local_4 & 4) != 0) {
          puVar6 = local_206;
          uVar5 = unaff_SS;
          FUN_1150_07b7(&local_104,unaff_SS);
          FUN_1158_17e7(0xff,&local_104,unaff_SS,puVar6,uVar5);
        }
      }
      else {
        puVar6 = local_206;
        uVar5 = unaff_SS;
        FUN_1150_0781(&local_104,unaff_SS);
        FUN_1158_17e7(0xff,&local_104,unaff_SS,puVar6,uVar5);
      }
      *param_3 = local_103;
    }
  }
  else {
    bVar2 = FUN_1100_08df(*(undefined *)((int)*(undefined4 *)(iVar4 + 0xec) + param_2));
    *param_3 = bVar2;
  }
  return local_3;
}



/* ---- FUN_1100_2a76 @ 1100:2a76  (184 octets) ---- */

undefined2 __stdcall16far FUN_1100_2a76(undefined4 param_1,uint *param_2,undefined4 param_3)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  uint local_8;
  int local_6;
  undefined local_3;
  
  local_3 = 1;
  local_6 = 1;
  uVar4 = (undefined2)((ulong)param_1 >> 0x10);
  iVar3 = (int)param_1;
  bVar1 = *(byte *)*(undefined4 *)(iVar3 + 0xec);
  local_8 = 0;
  if (bVar1 == 0) {
LAB_1100_2b27:
    return CONCAT11((char)(local_8 >> 8),local_3);
  }
  local_8 = 1;
  do {
    bVar2 = FUN_1100_0715(local_8,(int)*(undefined4 *)(iVar3 + 0xec),
                          (int)((ulong)*(undefined4 *)(iVar3 + 0xec) >> 0x10));
    if ((bVar2 == 0) || ((2 < bVar2 && (bVar2 != 5)))) {
      if (bVar2 == 4) {
        uVar5 = (undefined2)((ulong)param_3 >> 0x10);
        if ((*(char *)((int)param_3 + local_6) == *(char *)(iVar3 + 0xf0)) ||
           ((*(char *)((int)param_3 + local_6) == ' ' &&
            (*(char *)((int)*(undefined4 *)(iVar3 + 0xec) + local_8) != 'C')))) {
          local_3 = 0;
          local_8 = local_6 - 1;
          *param_2 = local_8;
          goto LAB_1100_2b27;
        }
        local_6 = local_6 + 1;
      }
    }
    else {
      local_6 = local_6 + 1;
    }
    if (local_8 == bVar1) goto LAB_1100_2b27;
    local_8 = local_8 + 1;
  } while( true );
}



/* ---- FUN_1100_2b2e @ 1100:2b2e  (182 octets) ---- */

undefined __stdcall16far
FUN_1100_2b2e(undefined4 param_1,int param_2,int param_3,undefined2 param_4_00,undefined4 param_4)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 unaff_SS;
  undefined *puVar3;
  undefined local_10e [254];
  uint local_10;
  byte local_d;
  uint local_c;
  uint local_a;
  int local_8;
  int local_6;
  undefined local_3;
  
  local_3 = 1;
  local_8 = param_3 + 1;
  local_6 = local_8 + param_2;
  puVar3 = local_10e;
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  FUN_1100_17fe(iVar1,uVar2);
  local_c = FUN_1100_0c87(param_3,puVar3,unaff_SS);
  if ((-1 < (int)local_c) &&
     (local_10 = (uint)*(byte *)*(undefined4 *)(iVar1 + 0xec), local_a = local_c,
     (int)local_c <= (int)local_10)) {
    while( true ) {
      local_d = FUN_1100_0715(local_a,(int)*(undefined4 *)(iVar1 + 0xec),
                              (int)((ulong)*(undefined4 *)(iVar1 + 0xec) >> 0x10));
      if ((local_d == 0) || (2 < local_d)) {
        if ((3 < local_d) && (local_d < 6)) {
          *(undefined *)((int)param_4 + local_8) = *(undefined *)(iVar1 + 0xf0);
          local_8 = local_8 + 1;
        }
      }
      else {
        local_8 = local_8 + 1;
      }
      if ((local_6 < local_8) || (local_a == local_10)) break;
      local_a = local_a + 1;
    }
  }
  return local_3;
}



/* ---- FUN_1100_2be4 @ 1100:2be4  (573 octets) ---- */

int __stdcall16far
FUN_1100_2be4(undefined4 param_1,int param_2,undefined4 param_3,undefined2 param_4,
             undefined4 param_5)

{
  uint uVar1;
  char cVar2;
  undefined extraout_AH;
  int iVar3;
  undefined2 uVar4;
  undefined2 unaff_SS;
  undefined *puVar5;
  undefined2 uVar6;
  undefined *puVar7;
  undefined2 uVar8;
  undefined2 uVar9;
  undefined local_410 [256];
  undefined local_310 [2];
  undefined local_30e [254];
  undefined local_210 [2];
  undefined local_20e [254];
  uint local_110;
  byte local_10d;
  byte local_10c [257];
  byte local_b;
  uint local_a;
  uint local_8;
  int local_6;
  int local_4;
  
  local_6 = 1;
  FUN_1158_17e7(0xff,local_10c,unaff_SS,(int)param_3,(int)((ulong)param_3 >> 0x10));
  puVar7 = local_20e;
  uVar4 = (undefined2)((ulong)param_1 >> 0x10);
  iVar3 = (int)param_1;
  uVar6 = unaff_SS;
  FUN_1100_17fe(iVar3,uVar4);
  local_a = FUN_1100_0c87(param_2,puVar7,uVar6);
  if (-1 < (int)local_a) {
    local_110 = (uint)*(byte *)*(undefined4 *)(iVar3 + 0xec);
    uVar1 = local_a;
    if ((int)local_a <= (int)local_110) {
      while( true ) {
        local_8 = uVar1;
        local_b = FUN_1100_0715(local_8,(int)*(undefined4 *)(iVar3 + 0xec),
                                (int)((ulong)*(undefined4 *)(iVar3 + 0xec) >> 0x10));
        if ((local_b != 0) && ((local_b < 3 || ((3 < local_b && (local_b < 6)))))) {
          local_10d = local_10c[local_6];
          cVar2 = FUN_1100_2856(iVar3,uVar4,local_8,&local_10d,unaff_SS);
          if (cVar2 == '\0') {
            local_10d = *(byte *)(iVar3 + 0xf0);
          }
          if (((local_b == 0) || (2 < local_b)) || (local_10d == local_10c[local_6])) {
            local_10c[local_6] = local_10d;
          }
          else {
            puVar7 = local_210;
            uVar8 = unaff_SS;
            FUN_1158_180b(local_6 + -1,1,local_10c,unaff_SS);
            puVar5 = local_310;
            uVar6 = unaff_SS;
            FUN_1158_18e9(CONCAT11(extraout_AH,local_10d));
            FUN_1158_184c(puVar5,uVar6);
            puVar5 = local_410;
            uVar6 = unaff_SS;
            FUN_1158_180b(local_10c[0],local_6,local_10c,unaff_SS);
            FUN_1158_184c(puVar5,uVar6);
            FUN_1158_17e7(0xff,local_10c,unaff_SS,puVar7,uVar8);
          }
          local_6 = local_6 + 1;
        }
        if (((*(int *)(iVar3 + 0xf1) < local_6 + param_2) || ((int)(uint)local_10c[0] < local_6)) ||
           (local_8 == local_110)) break;
        uVar1 = local_8 + 1;
      }
    }
    uVar6 = (undefined2)param_5;
    uVar8 = (undefined2)((ulong)param_5 >> 0x10);
    if ((int)((uint)local_10c[0] + param_2) < *(int *)(iVar3 + 0xf1)) {
      puVar7 = local_20e;
      uVar9 = unaff_SS;
      FUN_1158_180b(param_2,1,uVar6,uVar8);
      FUN_1158_184c(local_10c,unaff_SS);
      puVar5 = local_30e;
      FUN_1158_180b(*(int *)(iVar3 + 0xf1) - ((uint)local_10c[0] + param_2),
                    (uint)local_10c[0] + param_2 + 1,uVar6,uVar8);
      FUN_1158_184c(puVar5,unaff_SS);
      FUN_1158_17e7(param_4,uVar6,uVar8,puVar7,uVar9);
    }
    else {
      puVar7 = local_20e;
      uVar9 = unaff_SS;
      FUN_1158_180b(param_2,1,uVar6,uVar8);
      puVar5 = local_30e;
      FUN_1158_180b(*(int *)(iVar3 + 0xf1) - param_2,1,local_10c,unaff_SS);
      FUN_1158_184c(puVar5,unaff_SS);
      FUN_1158_17e7(param_4,uVar6,uVar8,puVar7,uVar9);
    }
    local_4 = local_6 + param_2 + -1;
  }
  return local_4;
}



/* ---- FUN_1100_2e21 @ 1100:2e21  (120 octets) ---- */

int __stdcall16far FUN_1100_2e21(undefined4 param_1,char param_2,int param_3)

{
  byte bVar1;
  int iVar2;
  undefined2 uVar3;
  char local_6;
  int local_4;
  
  local_4 = -1;
  do {
    uVar3 = (undefined2)((ulong)param_1 >> 0x10);
    iVar2 = (int)param_1;
    if ((int)(uint)*(byte *)*(undefined4 *)(iVar2 + 0xec) <= param_3) {
      return -1;
    }
    param_3 = param_3 + 1;
    bVar1 = FUN_1100_0715(param_3,(int)*(undefined4 *)(iVar2 + 0xec),
                          (int)((ulong)*(undefined4 *)(iVar2 + 0xec) >> 0x10));
  } while ((bVar1 == 0) || (2 < bVar1));
  local_6 = *(char *)((int)*(undefined4 *)(iVar2 + 0xec) + param_3);
  if (bVar1 == 2) {
    local_6 = FUN_1100_08df(CONCAT11((char)((uint)param_3 >> 8),local_6));
  }
  if (local_6 == param_2) {
    local_4 = param_3;
  }
  return local_4;
}




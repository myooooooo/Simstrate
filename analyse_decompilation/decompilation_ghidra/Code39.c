/* Simstrat (FR).EXE - segment Code39 - 73 fonctions
   Decompile par Ghidra 11.2.1 (x86 16 bits, chargeur NE). */

/* ---- FUN_1130_04b3 @ 1130:04b3  (35 octets) ---- */

void FUN_1130_04b3(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_1150_28e6(0x22,0x1130,1,(int)param_1,(int)((ulong)param_1 >> 0x10));
  FUN_1158_1399(0x1150,uVar1);
  return;
}



/* ---- FUN_1130_04d6 @ 1130:04d6  (23 octets) ---- */

void __cdecl16near FUN_1130_04d6(void)

{
  undefined2 unaff_SS;
  undefined *puVar1;
  undefined local_102 [256];
  
  puVar1 = local_102;
  FUN_1150_092b(0xf02f);
  FUN_1130_04b3(puVar1,unaff_SS);
  return;
}



/* ---- FUN_1130_04ed @ 1130:04ed  (66 octets) ---- */

void __cdecl16near FUN_1130_04ed(void)

{
  undefined2 unaff_SS;
  undefined *puVar1;
  undefined2 uVar2;
  undefined local_104 [257];
  char local_3;
  
  local_3 = '\0';
  while( true ) {
    puVar1 = local_104;
    uVar2 = unaff_SS;
    FUN_1150_092b(*(undefined2 *)(local_3 * 2 + 0x130c));
    FUN_1158_17e7(7,local_3 * 8 + 0x2b74,0x1160,puVar1,uVar2);
    if (local_3 == '\x11') break;
    local_3 = local_3 + '\x01';
  }
  return;
}



/* ---- FUN_1130_052f @ 1130:052f  (564 octets) ---- */

void __stdcall16far FUN_1130_052f(uint param_1,undefined *param_2)

{
  char cVar1;
  undefined *puVar2;
  int iVar3;
  undefined2 uVar4;
  undefined2 unaff_SS;
  undefined *puVar5;
  undefined *puVar6;
  undefined2 uVar7;
  undefined local_20a [256];
  undefined local_10a [4];
  undefined local_106 [252];
  undefined4 local_a;
  int local_4;
  
  *param_2 = 0;
  puVar2 = (undefined *)param_2;
  uVar4 = (undefined2)((ulong)param_2 >> 0x10);
  if ((param_1 & 0x2000) != 0) {
    puVar6 = local_106;
    uVar7 = unaff_SS;
    FUN_1158_17cd(puVar2,uVar4);
    FUN_1158_184c(0x2bec,0x1160);
    FUN_1158_17e7(0xff,puVar2,uVar4,puVar6,uVar7);
  }
  if ((param_1 & 0x4000) != 0) {
    puVar6 = local_106;
    uVar7 = unaff_SS;
    FUN_1158_17cd(puVar2,uVar4);
    FUN_1158_184c(0x2bf4,0x1160);
    FUN_1158_17e7(0xff,puVar2,uVar4,puVar6,uVar7);
  }
  if ((param_1 & 0x8000) != 0) {
    puVar6 = local_106;
    uVar7 = unaff_SS;
    FUN_1158_17cd(puVar2,uVar4);
    FUN_1158_184c(0x2bfc,0x1160);
    FUN_1158_17e7(0xff,puVar2,uVar4,puVar6,uVar7);
  }
  local_4 = 0;
  while( true ) {
    iVar3 = local_4 * 7;
    local_a = (byte *)CONCAT22(0x1160,(byte *)(iVar3 + 0x1354));
    if ((byte)param_1 < *(byte *)(iVar3 + 0x1354)) {
      return;
    }
    if ((byte)param_1 <= *(byte *)(iVar3 + 0x1355)) break;
    if (local_4 == 0xc) {
      *param_2 = 0;
      return;
    }
    local_4 = local_4 + 1;
  }
  cVar1 = *(char *)(iVar3 + 0x1356);
  if (cVar1 == '\x02') {
    puVar6 = local_10a;
    FUN_1158_17cd(puVar2,uVar4);
    FUN_1158_184c((char)((((byte *)local_a)[3] + (byte)param_1) - *local_a) * 8 + 0x2b74,0x1160);
    FUN_1158_17e7(0xff,puVar2,uVar4,puVar6,unaff_SS);
    return;
  }
  if (cVar1 == '\x03') {
    puVar6 = local_10a;
    FUN_1158_17cd(puVar2,uVar4);
    FUN_1158_184c((char)((((byte *)local_a)[3] + (byte)param_1) - *local_a) * 2 + 0x1334,0x1160);
    FUN_1158_17e7(0xff,puVar2,uVar4,puVar6,unaff_SS);
    return;
  }
  if (cVar1 == '\x01') {
    puVar6 = local_10a;
    uVar7 = unaff_SS;
    FUN_1158_17cd(puVar2,uVar4);
    FUN_1158_184c((int)*(undefined4 *)((byte *)local_a + 3),
                  (int)((ulong)*(undefined4 *)((byte *)local_a + 3) >> 0x10));
    puVar5 = local_20a;
    FUN_1158_18e9(((param_1 & 0xff) - (uint)*local_a) + 0x41);
    FUN_1158_184c(puVar5,unaff_SS);
    FUN_1158_17e7(0xff,puVar2,uVar4,puVar6,uVar7);
    return;
  }
  if (cVar1 != '\0') {
    return;
  }
  puVar6 = local_10a;
  uVar7 = unaff_SS;
  FUN_1158_17cd(puVar2,uVar4);
  FUN_1158_184c((int)*(undefined4 *)((byte *)local_a + 3),
                (int)((ulong)*(undefined4 *)((byte *)local_a + 3) >> 0x10));
  puVar5 = local_20a;
  iVar3 = (param_1 & 0xff) - (uint)*local_a;
  FUN_1150_08a9(iVar3,iVar3 >> 0xf);
  FUN_1158_184c(puVar5,unaff_SS);
  FUN_1158_17e7(0xff,puVar2,uVar4,puVar6,uVar7);
  return;
}



/* ---- FUN_1130_08e8 @ 1130:08e8  (106 octets) ---- */

void __stdcall16far FUN_1130_08e8(undefined4 param_1,char param_2,int param_3)

{
  uint *puVar1;
  byte bVar2;
  undefined2 uVar3;
  
  param_3 = param_3 + -1;
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  if (param_2 == '\0') {
    bVar2 = (byte)(param_3 % 0x10);
    if (bVar2 < 0x10) {
      bVar2 = bVar2 & 0xf;
      puVar1 = (uint *)((int)param_1 + (param_3 / 0x10) * 2 + 4);
      *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffeU >> 0x10 - bVar2);
    }
  }
  else {
    bVar2 = (byte)(param_3 % 0x10);
    if (bVar2 < 0x10) {
      bVar2 = bVar2 & 0xf;
      puVar1 = (uint *)((int)param_1 + (param_3 / 0x10) * 2 + 4);
      *puVar1 = *puVar1 | 1 << bVar2 | 1U >> 0x10 - bVar2;
    }
  }
  return;
}



/* ---- FUN_1130_0952 @ 1130:0952  (120 octets) ---- */

int __stdcall16far FUN_1130_0952(undefined4 param_1)

{
  undefined2 uVar1;
  byte local_9;
  int local_6;
  
  local_6 = 0;
  do {
    uVar1 = (undefined2)((ulong)param_1 >> 0x10);
    if (*(int *)((int)param_1 + local_6 * 2 + 4) != -1) {
      local_9 = 0;
      while( true ) {
        if ((0xf < local_9) ||
           ((*(uint *)((int)param_1 + local_6 * 2 + 4) &
            (1 << (local_9 & 0xf) | 1U >> 0x10 - (local_9 & 0xf))) == 0)) {
          return local_6 * 0x10 + (int)(char)local_9 + 1;
        }
        if (local_9 == 0xf) break;
        local_9 = local_9 + 1;
      }
    }
    if (local_6 == 0xff) {
      return -1;
    }
    local_6 = local_6 + 1;
  } while( true );
}



/* ---- FUN_1130_09ca @ 1130:09ca  (39 octets) ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined2 __cdecl16near FUN_1130_09ca(void)

{
  undefined2 uVar1;
  
  uVar1 = FUN_1130_0952((int)_DAT_1160_2c04,(int)((ulong)_DAT_1160_2c04 >> 0x10));
  FUN_1130_08e8((int)_DAT_1160_2c04,(int)((ulong)_DAT_1160_2c04 >> 0x10),1,uVar1);
  return uVar1;
}



/* ---- FUN_1130_09f1 @ 1130:09f1  (112 octets) ---- */

char FUN_1130_09f1(undefined2 *param_1,code *param_2,undefined4 param_3,int *param_5)

{
  int iVar1;
  undefined2 unaff_SS;
  undefined4 uVar2;
  char local_3;
  
  if ((int)param_3 != 0 || param_3._2_2_ != 0) {
    local_3 = '\0';
    while ((local_3 == '\0' && (iVar1 = FUN_1130_1326((int)param_3,param_3._2_2_), *param_5 < iVar1)
           )) {
      uVar2 = FUN_1130_1353((int)param_3,param_3._2_2_,*param_5);
      if (*(byte *)((int)param_1 + -5) < *(byte *)((int)uVar2 + 0x32)) {
        return '\0';
      }
      local_3 = (*param_2)(*param_1,uVar2);
      *param_5 = *param_5 + 1;
    }
  }
  return local_3;
}



/* ---- FUN_1130_0a61 @ 1130:0a61  (313 octets) ---- */

void FUN_1130_0a61(undefined4 param_1,undefined4 param_3,undefined2 param_5)

{
  undefined2 unaff_SS;
  undefined4 uVar1;
  char local_d;
  int local_c;
  int local_a;
  byte local_8;
  byte local_7;
  int local_6;
  int local_4;
  
  local_4 = 0;
  local_6 = 0;
  local_a = 0;
  local_c = 0;
  if ((int)param_3 != 0 || param_3._2_2_ != 0) {
    local_a = FUN_1130_1326((int)param_3,param_3._2_2_);
  }
  if ((int)param_1 != 0 || param_1._2_2_ != 0) {
    local_c = FUN_1130_1326((int)param_1,param_1._2_2_);
  }
  local_d = '\0';
  while ((local_d == '\0' && ((local_4 < local_a || (local_6 < local_c))))) {
    local_7 = 0xff;
    local_8 = 0xff;
    if (local_4 < local_a) {
      uVar1 = FUN_1130_1353((int)param_3,param_3._2_2_,local_4);
      local_7 = *(byte *)((int)uVar1 + 0x32);
    }
    if (local_6 < local_c) {
      uVar1 = FUN_1130_1353((int)param_1,param_1._2_2_,local_6);
      local_8 = *(byte *)((int)uVar1 + 0x32);
    }
    if (local_8 < local_7) {
      local_7 = local_8;
      local_d = FUN_1130_09f1(&stack0xfffe,param_5,(int)param_1,param_1._2_2_,&local_6,unaff_SS);
    }
    else {
      local_d = FUN_1130_09f1(&stack0xfffe,param_5,(int)param_3,param_3._2_2_,&local_4,unaff_SS);
    }
    while ((local_4 < local_a &&
           (uVar1 = FUN_1130_1353((int)param_3,param_3._2_2_,local_4),
           *(byte *)((int)uVar1 + 0x32) <= local_7))) {
      local_4 = local_4 + 1;
    }
    while ((local_6 < local_c &&
           (uVar1 = FUN_1130_1353((int)param_1,param_1._2_2_,local_6),
           *(byte *)((int)uVar1 + 0x32) <= local_7))) {
      local_6 = local_6 + 1;
    }
  }
  return;
}



/* ---- FUN_1130_0b9b @ 1130:0b9b  (115 octets) ---- */

undefined4 __stdcall16far
FUN_1130_0b9b(undefined4 param_1,char param_2,undefined2 param_3,undefined2 param_4)

{
  undefined2 uVar1;
  int iVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  undefined2 uStack_a;
  
  if (param_2 != '\0') {
    FUN_1158_1fe2();
  }
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  iVar2 = (int)param_1;
  FUN_1148_4bd9(iVar2,uVar3,0,param_3,param_4);
  uVar4 = FUN_1150_05d7(0xb9a,0x1148);
  *(undefined2 *)(iVar2 + 0x1b) = (int)uVar4;
  *(undefined2 *)(iVar2 + 0x1d) = (int)((ulong)uVar4 >> 0x10);
  *(undefined *)(iVar2 + 0x31) = 1;
  *(undefined *)(iVar2 + 0x20) = 1;
  uVar1 = DAT_1160_1718;
  *(undefined2 *)(iVar2 + 0x27) = DAT_1160_1716;
  *(undefined2 *)(iVar2 + 0x29) = uVar1;
  uVar1 = FUN_1130_09ca();
  *(undefined2 *)(iVar2 + 0x43) = uVar1;
  if (param_2 != '\0') {
    DAT_1160_1858 = uStack_a;
  }
  return param_1;
}



/* ---- FUN_1130_0c0e @ 1130:0c0e  (213 octets) ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __stdcall16far FUN_1130_0c0e(undefined4 param_1,char param_2)

{
  int iVar1;
  int iVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  iVar2 = (int)param_1;
  if (*(int *)(iVar2 + 0x45) != 0 || *(int *)(iVar2 + 0x47) != 0) {
    FUN_1130_167e((int)*(undefined4 *)(iVar2 + 0x45),
                  (int)((ulong)*(undefined4 *)(iVar2 + 0x45) >> 0x10),iVar2,uVar3);
    *(undefined2 *)(iVar2 + 0x45) = 0;
    *(undefined2 *)(iVar2 + 0x47) = 0;
  }
  if (*(int *)(iVar2 + 0x21) != 0) {
    FUN_1130_0f24(iVar2,uVar3,0,0);
    DESTROYMENU(0x1130,*(undefined2 *)(iVar2 + 0x21));
    FUN_1130_0d36(iVar2,uVar3);
  }
  while( true ) {
    iVar1 = FUN_1130_1326(iVar2,uVar3);
    if (iVar1 < 1) break;
    uVar4 = FUN_1130_1353(iVar2,uVar3,0);
    FUN_1158_1f7f(uVar4);
  }
  FUN_1158_1f7f((int)*(undefined4 *)(iVar2 + 0x2b),
                (int)((ulong)*(undefined4 *)(iVar2 + 0x2b) >> 0x10));
  FUN_1150_0624(*(undefined2 *)(iVar2 + 0x1b),*(undefined2 *)(iVar2 + 0x1d));
  if (*(int *)(iVar2 + 0x43) != 0) {
    FUN_1130_08e8((int)_DAT_1160_2c04,(int)((ulong)_DAT_1160_2c04 >> 0x10),0,
                  *(undefined2 *)(iVar2 + 0x43));
  }
  FUN_1148_4c2b(iVar2,uVar3,0);
  if (param_2 != '\0') {
    FUN_1158_200f();
  }
  return;
}



/* ---- FUN_1130_0ce3 @ 1130:0ce3  (83 octets) ---- */

void FUN_1130_0ce3(undefined2 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  int local_4;
  
  uVar3 = (undefined2)((ulong)param_2 >> 0x10);
  iVar2 = (int)param_2;
  *(undefined2 *)(iVar2 + 0x21) = 0;
  iVar1 = FUN_1130_1326(iVar2,uVar3);
  if (-1 < iVar1 + -1) {
    local_4 = 0;
    while( true ) {
      uVar4 = FUN_1148_0dd0((int)*(undefined4 *)(iVar2 + 0x2b),
                            (int)((ulong)*(undefined4 *)(iVar2 + 0x2b) >> 0x10),local_4);
      FUN_1130_0ce3(param_1,uVar4);
      if (local_4 == iVar1 + -1) break;
      local_4 = local_4 + 1;
    }
  }
  return;
}



/* ---- FUN_1130_0d36 @ 1130:0d36  (17 octets) ---- */

void __stdcall16far FUN_1130_0d36(undefined2 param_1,undefined2 param_2)

{
  FUN_1130_0ce3(&stack0xfffe,param_1,param_2);
  return;
}



/* ---- FUN_1130_0d49 @ 1130:0d49  (364 octets) ---- */

void __stdcall16far FUN_1130_0d49(undefined4 param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  undefined2 unaff_SS;
  char cVar7;
  undefined4 uVar8;
  undefined *puVar9;
  undefined local_204 [256];
  uint local_104;
  undefined local_102 [256];
  
  uVar4 = (undefined2)((ulong)param_1 >> 0x10);
  iVar3 = (int)param_1;
  cVar7 = *(char *)(iVar3 + 0x31) == '\0';
  if ((bool)cVar7) {
    return;
  }
  FUN_1150_0d4c((int)*(undefined4 *)(iVar3 + 0x1b),
                (int)((ulong)*(undefined4 *)(iVar3 + 0x1b) >> 0x10),local_102,unaff_SS);
  FUN_1158_18be(0xd47,0x1150,(int)*(undefined4 *)(iVar3 + 0x1b),
                (int)((ulong)*(undefined4 *)(iVar3 + 0x1b) >> 0x10));
  local_104 = *(uint *)(*(char *)(iVar3 + 0x20) * 4 + 0x13c4) |
              *(uint *)(*(char *)(iVar3 + 0x1a) * 4 + 0x13b0) |
              *(uint *)(*(char *)(iVar3 + 0x1f) * 4 + 0x13bc) |
              ((undefined2 *)&DAT_1160_13cc)[cVar7 * 2] | 0x400;
  uVar6 = 0x1130;
  iVar1 = FUN_1130_1326(iVar3,uVar4);
  if (0 < iVar1) {
    uVar6 = 0xffff;
    uVar2 = local_104 | 0x10;
    uVar4 = FUN_1130_105d(iVar3,uVar4);
    INSERTMENU(0x1130,local_102,unaff_SS,uVar4,uVar2,uVar6);
    return;
  }
  if (*(int *)(iVar3 + 0x2f) != 0) {
    if ((*(int *)(iVar3 + 0x45) != 0 || *(int *)(iVar3 + 0x47) != 0) &&
       (uVar6 = (undefined2)((ulong)*(undefined4 *)(iVar3 + 0x45) >> 0x10),
       iVar1 = (int)*(undefined4 *)(iVar3 + 0x45),
       *(int *)(iVar1 + 0x45) == 0 && *(int *)(iVar1 + 0x47) == 0)) {
      uVar5 = (undefined2)((ulong)*(undefined4 *)(iVar3 + 0x45) >> 0x10);
      iVar1 = (int)*(undefined4 *)(iVar3 + 0x45);
      uVar6 = 0x1158;
      cVar7 = FUN_1158_2255(0x2ef,0x1130,*(undefined2 *)(iVar1 + 4),*(undefined2 *)(iVar1 + 6));
      if (cVar7 != '\0') goto LAB_1130_0e96;
    }
    uVar8 = FUN_1150_0ca3(local_102,unaff_SS);
    uVar8 = FUN_1150_0d01(0x13d4,0x1160,uVar8);
    puVar9 = local_204;
    uVar5 = unaff_SS;
    FUN_1130_052f(*(undefined2 *)(iVar3 + 0x2f));
    uVar6 = 0x1150;
    FUN_1150_0d4c(puVar9,uVar5,uVar8);
  }
LAB_1130_0e96:
  INSERTMENU(uVar6,local_102,unaff_SS,*(undefined2 *)(iVar3 + 0x43),local_104,0xffff);
  return;
}



/* ---- FUN_1130_0eb5 @ 1130:0eb5  (36 octets) ---- */

undefined FUN_1130_0eb5(int param_1,undefined4 param_2)

{
  undefined2 unaff_SS;
  
  FUN_1130_0d49((int)param_2,(int)((ulong)param_2 >> 0x10),
                *(undefined2 *)((int)*(undefined4 *)(param_1 + 6) + 0x21));
  return 0;
}



/* ---- FUN_1130_0ed9 @ 1130:0ed9  (35 octets) ---- */

void __stdcall16far FUN_1130_0ed9(undefined4 param_1)

{
  int iVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  FUN_1130_0a61(iVar1,uVar2,*(undefined2 *)(iVar1 + 0x49),*(undefined2 *)(iVar1 + 0x4b),0xeb5,0x1130
               );
  return;
}



/* ---- FUN_1130_0f24 @ 1130:0f24  (52 octets) ---- */

void __stdcall16far FUN_1130_0f24(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  if ((*(int *)(iVar1 + 0x4b) != param_3) || (*(int *)(iVar1 + 0x49) != param_2)) {
    *(int *)(iVar1 + 0x49) = param_2;
    *(int *)(iVar1 + 0x4b) = param_3;
    FUN_1130_0f58(iVar1,uVar2);
  }
  return;
}



/* ---- FUN_1130_0f58 @ 1130:0f58  (75 octets) ---- */

void __stdcall16far FUN_1130_0f58(undefined4 param_1)

{
  undefined2 uVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  
  while( true ) {
    uVar4 = (undefined2)((ulong)param_1 >> 0x10);
    uVar3 = (undefined2)param_1;
    uVar1 = FUN_1130_105d(uVar3,uVar4);
    iVar2 = GETMENUITEMCOUNT(0x1130,uVar1);
    if (iVar2 < 1) break;
    FUN_1130_105d(uVar3,uVar4);
    REMOVEMENU(0x1130,0x400,0);
  }
  FUN_1130_0ed9(uVar3,uVar4);
  FUN_1158_206a(0x1130,uVar3,uVar4,0);
  return;
}



/* ---- FUN_1130_0fa3 @ 1130:0fa3  (150 octets) ---- */

void __stdcall16far FUN_1130_0fa3(undefined4 param_1,byte param_2,int param_3)

{
  undefined2 uVar1;
  undefined2 uVar2;
  undefined2 unaff_SS;
  undefined4 uVar3;
  undefined *puVar4;
  byte bVar5;
  undefined2 uVar6;
  undefined local_106 [256];
  int local_6;
  int local_4;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  uVar1 = (undefined2)param_1;
  local_6 = FUN_1130_1326(uVar1,uVar2);
  local_6 = local_6 + -1;
  if (-1 < local_6) {
    local_4 = 0;
    while( true ) {
      if (local_4 < param_3) {
        uVar3 = FUN_1130_1353(uVar1,uVar2,local_4);
        if (param_2 < *(byte *)((int)uVar3 + 0x32)) {
          puVar4 = local_106;
          uVar6 = unaff_SS;
          FUN_1150_092b(0xf037);
          FUN_1130_04b3(puVar4,uVar6);
        }
      }
      else {
        uVar3 = FUN_1130_1353(uVar1,uVar2,local_4);
        if (*(byte *)((int)uVar3 + 0x32) < param_2) {
          bVar5 = param_2;
          uVar3 = FUN_1130_1353(uVar1,uVar2,local_4);
          *(byte *)((int)uVar3 + 0x32) = bVar5;
        }
      }
      if (local_4 == local_6) break;
      local_4 = local_4 + 1;
    }
  }
  return;
}



/* ---- FUN_1130_105d @ 1130:105d  (139 octets) ---- */

undefined2 __stdcall16far FUN_1130_105d(undefined4 param_1)

{
  char cVar1;
  undefined2 uVar2;
  undefined extraout_AH;
  int iVar3;
  undefined2 uVar4;
  undefined2 unaff_SS;
  undefined4 uVar5;
  undefined *puVar6;
  undefined local_106 [260];
  
  uVar4 = (undefined2)((ulong)param_1 >> 0x10);
  iVar3 = (int)param_1;
  if (*(int *)(iVar3 + 0x21) == 0) {
    cVar1 = FUN_1158_2255(0x3c6,0x1130,*(undefined2 *)(iVar3 + 4),*(undefined2 *)(iVar3 + 6));
    if (cVar1 == '\0') {
      uVar2 = CREATEMENU(0x1158);
      *(undefined2 *)(iVar3 + 0x21) = uVar2;
    }
    else {
      uVar2 = CREATEPOPUPMENU(0x1158);
      *(undefined2 *)(iVar3 + 0x21) = uVar2;
    }
    if (*(int *)(iVar3 + 0x21) == 0) {
      puVar6 = local_106;
      FUN_1150_092b(0xf020);
      uVar5 = FUN_1150_28e6(0x22,0x1130,CONCAT11(extraout_AH,1),puVar6,unaff_SS);
      FUN_1158_1399(0x1150,uVar5);
    }
    FUN_1130_0ed9(iVar3,uVar4);
  }
  return *(undefined2 *)(iVar3 + 0x21);
}



/* ---- FUN_1130_10e8 @ 1130:10e8  (29 octets) ---- */

void __stdcall16far FUN_1130_10e8(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)((int)param_1 + 0x27);
  FUN_1158_17e7(0xff,(int)param_2,(int)((ulong)param_2 >> 0x10),(int)uVar1,
                (int)((ulong)uVar1 >> 0x10));
  return;
}



/* ---- FUN_1130_1161 @ 1130:1161  (29 octets) ---- */

void __stdcall16far FUN_1130_1161(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)((int)param_1 + 0x1b);
  FUN_1158_17e7(0xff,(int)param_2,(int)((ulong)param_2 >> 0x10),(int)uVar1,
                (int)((ulong)uVar1 >> 0x10));
  return;
}



/* ---- FUN_1130_117e @ 1130:117e  (15 octets) ---- */

undefined __stdcall16far FUN_1130_117e(void)

{
  return 1;
}



/* ---- FUN_1130_118d @ 1130:118d  (132 octets) ---- */

void __stdcall16far FUN_1130_118d(undefined4 param_1,undefined4 param_3)

{
  undefined4 uVar1;
  char cVar2;
  int iVar3;
  undefined2 uVar4;
  
  uVar4 = (undefined2)((ulong)param_3 >> 0x10);
  iVar3 = (int)param_3;
  cVar2 = FUN_1158_2255(0x25a,0x1130,*(undefined2 *)(iVar3 + 0x1a),*(undefined2 *)(iVar3 + 0x1c));
  if (cVar2 == '\0') {
    cVar2 = FUN_1158_2255(0x94,0x1130,*(undefined2 *)(iVar3 + 0x1a),*(undefined2 *)(iVar3 + 0x1c));
    if (cVar2 != '\0') {
      FUN_1130_165c((int)*(undefined4 *)(iVar3 + 0x1a),
                    (int)((ulong)*(undefined4 *)(iVar3 + 0x1a) >> 0x10),(undefined2)param_1,
                    param_1._2_2_);
    }
  }
  else {
    uVar1 = *(undefined4 *)((int)*(undefined4 *)(iVar3 + 0x1a) + 0x1a);
    FUN_1130_165c((int)uVar1,(int)((ulong)uVar1 >> 0x10),(undefined2)param_1,param_1._2_2_);
  }
  FUN_1148_5003((undefined2)param_1,param_1._2_2_,iVar3,uVar4);
  return;
}



/* ---- FUN_1130_1211 @ 1130:1211  (38 octets) ---- */

void __stdcall16far FUN_1130_1211(undefined4 param_1,char param_2)

{
  undefined2 uVar1;
  
  uVar1 = (undefined2)((ulong)param_1 >> 0x10);
  if (*(char *)((int)param_1 + 0x1a) != param_2) {
    *(char *)((int)param_1 + 0x1a) = param_2;
    FUN_1158_206a();
  }
  return;
}



/* ---- FUN_1130_1237 @ 1130:1237  (62 octets) ---- */

void __stdcall16far FUN_1130_1237(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined in_ZF;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  uVar3 = (undefined2)((ulong)param_2 >> 0x10);
  FUN_1158_18be((int)param_2,uVar3,(int)*(undefined4 *)(iVar1 + 0x1b),
                (int)((ulong)*(undefined4 *)(iVar1 + 0x1b) >> 0x10));
  if (!(bool)in_ZF) {
    FUN_1150_0651((int)param_2,uVar3,iVar1 + 0x1b,uVar2);
    FUN_1158_206a(0x1150,iVar1,uVar2,1);
  }
  return;
}



/* ---- FUN_1130_1275 @ 1130:1275  (38 octets) ---- */

void __stdcall16far FUN_1130_1275(undefined4 param_1,char param_2)

{
  undefined2 uVar1;
  
  uVar1 = (undefined2)((ulong)param_1 >> 0x10);
  if (*(char *)((int)param_1 + 0x1f) != param_2) {
    *(char *)((int)param_1 + 0x1f) = param_2;
    FUN_1158_206a();
  }
  return;
}



/* ---- FUN_1130_129b @ 1130:129b  (38 octets) ---- */

void __stdcall16far FUN_1130_129b(undefined4 param_1,char param_2)

{
  undefined2 uVar1;
  
  uVar1 = (undefined2)((ulong)param_1 >> 0x10);
  if (*(char *)((int)param_1 + 0x20) != param_2) {
    *(char *)((int)param_1 + 0x20) = param_2;
    FUN_1158_206a();
  }
  return;
}



/* ---- FUN_1130_12c1 @ 1130:12c1  (26 octets) ---- */

void __stdcall16far FUN_1130_12c1(undefined4 param_1,undefined4 param_2)

{
  FUN_1150_0651((int)param_2,(int)((ulong)param_2 >> 0x10),(int)param_1 + 0x27,
                (int)((ulong)param_1 >> 0x10));
  return;
}



/* ---- FUN_1130_12db @ 1130:12db  (75 octets) ---- */

void __stdcall16far FUN_1130_12db(undefined4 param_1,char param_2)

{
  undefined2 uVar1;
  int iVar2;
  undefined2 uVar3;
  
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  iVar2 = (int)param_1;
  if (*(char *)(iVar2 + 0x32) != param_2) {
    if (*(int *)(iVar2 + 0x45) != 0 || *(int *)(iVar2 + 0x47) != 0) {
      uVar1 = FUN_1130_162b((int)*(undefined4 *)(iVar2 + 0x45),
                            (int)((ulong)*(undefined4 *)(iVar2 + 0x45) >> 0x10),iVar2,uVar3);
      FUN_1130_0fa3((int)*(undefined4 *)(iVar2 + 0x45),
                    (int)((ulong)*(undefined4 *)(iVar2 + 0x45) >> 0x10),param_2,uVar1);
    }
    *(char *)(iVar2 + 0x32) = param_2;
  }
  return;
}



/* ---- FUN_1130_1326 @ 1130:1326  (45 octets) ---- */

undefined2 __stdcall16far FUN_1130_1326(undefined4 param_1)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 local_4;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  if (*(int *)(iVar1 + 0x2b) == 0 && *(int *)(iVar1 + 0x2d) == 0) {
    local_4 = 0;
  }
  else {
    local_4 = *(undefined2 *)((int)*(undefined4 *)(iVar1 + 0x2b) + 8);
  }
  return local_4;
}



/* ---- FUN_1130_1353 @ 1130:1353  (53 octets) ---- */

undefined4 __stdcall16far FUN_1130_1353(undefined4 param_1,undefined2 param_2)

{
  int iVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  if (*(int *)(iVar1 + 0x2b) == 0 && *(int *)(iVar1 + 0x2d) == 0) {
    FUN_1130_04d6();
  }
  uVar3 = FUN_1148_0dd0((int)*(undefined4 *)(iVar1 + 0x2b),
                        (int)((ulong)*(undefined4 *)(iVar1 + 0x2b) >> 0x10),param_2);
  return uVar3;
}



/* ---- FUN_1130_1388 @ 1130:1388  (29 octets) ---- */

void __stdcall16far FUN_1130_1388(undefined4 param_1,undefined2 param_2)

{
  *(undefined2 *)((int)param_1 + 0x2f) = param_2;
  FUN_1158_206a();
  return;
}



/* ---- FUN_1130_13a5 @ 1130:13a5  (29 octets) ---- */

void __stdcall16far FUN_1130_13a5(undefined4 param_1,undefined param_2)

{
  *(undefined *)((int)param_1 + 0x31) = param_2;
  FUN_1158_206a();
  return;
}



/* ---- FUN_1130_13c2 @ 1130:13c2  (106 octets) ---- */

void __stdcall16far FUN_1130_13c2(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined2 uVar2;
  int iVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined4 uVar6;
  int local_4;
  
  uVar4 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = FUN_1130_1326((int)param_1,uVar4);
  if (-1 < iVar1 + -1) {
    local_4 = 0;
    while( true ) {
      uVar6 = FUN_1130_1353((int)param_1,uVar4,local_4);
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



/* ---- FUN_1130_142c @ 1130:142c  (320 octets) ---- */

void __stdcall16far FUN_1130_142c(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined extraout_AH;
  int iVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined2 unaff_SS;
  undefined4 uVar6;
  undefined *puVar7;
  undefined local_102 [256];
  
  uVar3 = (undefined2)((ulong)param_2 >> 0x10);
  iVar1 = (int)param_2;
  if (*(int *)(iVar1 + 0x45) != 0 || *(int *)(iVar1 + 0x47) != 0) {
    puVar7 = local_102;
    FUN_1150_092b(0xf030);
    uVar6 = FUN_1150_28e6(0x22,0x1130,CONCAT11(extraout_AH,1),puVar7,unaff_SS);
    FUN_1158_1399(0x1150,uVar6);
  }
  uVar4 = (undefined2)((ulong)param_1 >> 0x10);
  iVar2 = (int)param_1;
  if (*(int *)(iVar2 + 0x2b) == 0 && *(int *)(iVar2 + 0x2d) == 0) {
    uVar6 = FUN_1158_1f50(0x2a3,0x1148,1);
    *(undefined2 *)(iVar2 + 0x2b) = (int)uVar6;
    *(undefined2 *)(iVar2 + 0x2d) = (int)((ulong)uVar6 >> 0x10);
  }
  if ((-1 < param_3 + -1) && (param_3 + -1 < *(int *)((int)*(undefined4 *)(iVar2 + 0x2b) + 8))) {
    uVar6 = FUN_1148_0dd0((int)*(undefined4 *)(iVar2 + 0x2b),
                          (int)((ulong)*(undefined4 *)(iVar2 + 0x2b) >> 0x10),param_3 + -1);
    if (*(byte *)(iVar1 + 0x32) < *(byte *)((int)uVar6 + 0x32)) {
      uVar6 = FUN_1148_0dd0((int)*(undefined4 *)(iVar2 + 0x2b),
                            (int)((ulong)*(undefined4 *)(iVar2 + 0x2b) >> 0x10),param_3 + -1);
      FUN_1130_12db(iVar1,uVar3,*(undefined *)((int)uVar6 + 0x32));
    }
  }
  FUN_1130_0fa3(iVar2,uVar4,*(undefined *)(iVar1 + 0x32),param_3);
  uVar5 = 0x1148;
  FUN_1148_0ea7((int)*(undefined4 *)(iVar2 + 0x2b),
                (int)((ulong)*(undefined4 *)(iVar2 + 0x2b) >> 0x10),iVar1,uVar3,param_3);
  *(int *)(iVar1 + 0x45) = iVar2;
  *(undefined2 *)(iVar1 + 0x47) = uVar4;
  *(undefined2 *)(iVar1 + 0x33) = 0x16f9;
  *(undefined2 *)(iVar1 + 0x35) = 0x1130;
  *(int *)(iVar1 + 0x37) = iVar2;
  *(undefined2 *)(iVar1 + 0x39) = uVar4;
  if (*(int *)(iVar2 + 0x21) != 0) {
    uVar5 = 0x1130;
    FUN_1130_0f58(iVar2,uVar4);
  }
  FUN_1158_206a(uVar5,iVar2,uVar4,1);
  return;
}



/* ---- FUN_1130_156c @ 1130:156c  (148 octets) ---- */

void __stdcall16far FUN_1130_156c(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined2 uVar2;
  int iVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined4 uVar6;
  
  iVar3 = (int)param_1;
  uVar4 = (undefined2)((ulong)param_1 >> 0x10);
  if (-1 < param_2) {
    if (*(int *)(iVar3 + 0x2b) != 0 || *(int *)(iVar3 + 0x2d) != 0) {
      iVar1 = FUN_1130_1326(iVar3,uVar4);
      if (param_2 < iVar1) goto LAB_1130_1592;
    }
  }
  FUN_1130_04d6();
LAB_1130_1592:
  uVar6 = FUN_1148_0dd0((int)*(undefined4 *)(iVar3 + 0x2b),
                        (int)((ulong)*(undefined4 *)(iVar3 + 0x2b) >> 0x10),param_2);
  uVar2 = (undefined2)((ulong)uVar6 >> 0x10);
  iVar1 = (int)uVar6;
  uVar5 = 0x1148;
  FUN_1148_0c94((int)*(undefined4 *)(iVar3 + 0x2b),
                (int)((ulong)*(undefined4 *)(iVar3 + 0x2b) >> 0x10),param_2);
  *(undefined2 *)(iVar1 + 0x45) = 0;
  *(undefined2 *)(iVar1 + 0x47) = 0;
  *(undefined2 *)(iVar1 + 0x33) = 0;
  *(undefined2 *)(iVar1 + 0x35) = 0;
  *(undefined2 *)(iVar1 + 0x37) = 0;
  *(undefined2 *)(iVar1 + 0x39) = 0;
  if (*(int *)(iVar3 + 0x21) != 0) {
    uVar5 = 0x1130;
    FUN_1130_0f58(iVar3,uVar4);
  }
  FUN_1158_206a(uVar5,iVar3,uVar4,1);
  return;
}



/* ---- FUN_1130_1600 @ 1130:1600  (43 octets) ---- */

void __stdcall16far FUN_1130_1600(undefined4 param_1)

{
  int iVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  if ((*(char *)(iVar1 + 0x20) != '\0') && (*(int *)(iVar1 + 0x3d) != 0)) {
    (*(code *)*(undefined2 *)(iVar1 + 0x3b))();
  }
  return;
}



/* ---- FUN_1130_162b @ 1130:162b  (49 octets) ---- */

undefined2 __stdcall16far FUN_1130_162b(undefined4 param_1,undefined2 param_2,undefined2 param_3)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 local_4;
  
  local_4 = 0xffff;
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  if (*(int *)(iVar1 + 0x2b) != 0 || *(int *)(iVar1 + 0x2d) != 0) {
    local_4 = FUN_1148_0e58((int)*(undefined4 *)(iVar1 + 0x2b),
                            (int)((ulong)*(undefined4 *)(iVar1 + 0x2b) >> 0x10),param_2,param_3);
  }
  return local_4;
}



/* ---- FUN_1130_165c @ 1130:165c  (34 octets) ---- */

void __stdcall16far FUN_1130_165c(undefined4 param_1,undefined2 param_2,undefined2 param_3)

{
  undefined2 uVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  uVar1 = FUN_1130_1326((int)param_1,uVar2);
  FUN_1130_142c((int)param_1,uVar2,param_2,param_3,uVar1);
  return;
}



/* ---- FUN_1130_167e @ 1130:167e  (83 octets) ---- */

void __stdcall16far FUN_1130_167e(undefined4 param_1,undefined2 param_2,undefined2 param_3)

{
  undefined extraout_AH;
  undefined2 uVar1;
  undefined2 unaff_SS;
  undefined4 uVar2;
  undefined *puVar3;
  undefined local_104 [256];
  int local_4;
  
  uVar1 = (undefined2)((ulong)param_1 >> 0x10);
  local_4 = FUN_1130_162b((int)param_1,uVar1,param_2,param_3);
  if (local_4 == -1) {
    puVar3 = local_104;
    FUN_1150_092b(0xf031);
    uVar2 = FUN_1150_28e6(0x22,0x1130,CONCAT11(extraout_AH,1),puVar3,unaff_SS);
    FUN_1158_1399(0x1150,uVar2);
  }
  FUN_1130_156c((int)param_1,uVar1,local_4);
  return;
}



/* ---- FUN_1130_16d1 @ 1130:16d1  (40 octets) ---- */

void __stdcall16far FUN_1130_16d1(undefined4 param_1)

{
  undefined2 *puVar1;
  
  if (*(int *)((int)param_1 + 0x35) != 0) {
    puVar1 = (undefined2 *)((int)param_1 + 0x33);
    (*(code *)*puVar1)();
  }
  return;
}



/* ---- FUN_1130_16f9 @ 1130:16f9  (106 octets) ---- */

void __stdcall16far FUN_1130_16f9(undefined4 param_1,char param_2)

{
  char cVar1;
  int iVar2;
  undefined2 uVar3;
  
  iVar2 = (int)param_1;
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  if (param_2 != '\0') {
    if (*(int *)(iVar2 + 0x21) != 0) {
      FUN_1130_0f58(iVar2,uVar3);
    }
  }
  if (*(int *)(iVar2 + 0x45) == 0 && *(int *)(iVar2 + 0x47) == 0) {
    cVar1 = FUN_1158_2255(0x2ef,0x1130,*(undefined2 *)(iVar2 + 4),*(undefined2 *)(iVar2 + 6));
    if (cVar1 != '\0') {
      FUN_1130_1e6c((int)*(undefined4 *)(iVar2 + 4),(int)((ulong)*(undefined4 *)(iVar2 + 4) >> 0x10)
                   );
    }
  }
  else {
    FUN_1130_16f9((int)*(undefined4 *)(iVar2 + 0x45),
                  (int)((ulong)*(undefined4 *)(iVar2 + 0x45) >> 0x10),0,iVar2,uVar3);
  }
  return;
}



/* ---- FUN_1130_1763 @ 1130:1763  (128 octets) ---- */

undefined4 * __stdcall16far
FUN_1130_1763(undefined4 *param_1,char param_3,undefined2 param_4,undefined2 param_5)

{
  undefined2 uVar1;
  undefined2 in_AX;
  undefined uVar2;
  undefined extraout_AH;
  int iVar3;
  int iVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  undefined4 uVar7;
  undefined2 uStack_a;
  
  uVar2 = (undefined)((uint)in_AX >> 8);
  if (param_3 != '\0') {
    FUN_1158_1fe2();
    uVar2 = extraout_AH;
  }
  uVar7 = FUN_1130_0b9b(0x94,0x1130,CONCAT11(uVar2,1),(undefined4 *)param_1,param_1._2_2_);
  *(undefined2 *)((int)(undefined4 *)param_1 + 0x1a) = (int)uVar7;
  *(int *)((undefined4 *)param_1 + 7) = (int)((ulong)uVar7 >> 0x10);
  uVar5 = (undefined2)((ulong)*param_1 >> 0x10);
  iVar3 = (int)*param_1;
  uVar1 = *(undefined2 *)(iVar3 + 0x32);
  uVar6 = (undefined2)((ulong)*(undefined4 *)((int)(undefined4 *)param_1 + 0x1a) >> 0x10);
  iVar4 = (int)*(undefined4 *)((int)(undefined4 *)param_1 + 0x1a);
  *(undefined2 *)(iVar4 + 0x33) = *(undefined2 *)(iVar3 + 0x30);
  *(undefined2 *)(iVar4 + 0x35) = uVar1;
  *(undefined2 *)(iVar4 + 0x37) = (undefined4 *)param_1;
  *(undefined2 *)(iVar4 + 0x39) = param_1._2_2_;
  FUN_1148_4bd9((undefined4 *)param_1,param_1._2_2_,0,param_4,param_5);
  if (param_3 != '\0') {
    DAT_1160_1858 = uStack_a;
  }
  return param_1;
}



/* ---- FUN_1130_17e3 @ 1130:17e3  (45 octets) ---- */

void __stdcall16far FUN_1130_17e3(undefined4 param_1,char param_2)

{
  undefined4 uVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  uVar1 = *(undefined4 *)((int)param_1 + 0x1a);
  FUN_1158_1f7f((int)uVar1,(int)((ulong)uVar1 >> 0x10));
  FUN_1148_4c2b((int)param_1,uVar2,0);
  if (param_2 != '\0') {
    FUN_1158_200f();
  }
  return;
}



/* ---- FUN_1130_1810 @ 1130:1810  (28 octets) ---- */

undefined2 __stdcall16far FUN_1130_1810(undefined4 param_1)

{
  undefined4 uVar1;
  undefined2 uVar2;
  
  uVar1 = *(undefined4 *)((int)param_1 + 0x1a);
  uVar2 = FUN_1130_105d((int)uVar1,(int)((ulong)uVar1 >> 0x10));
  return uVar2;
}



/* ---- FUN_1130_182c @ 1130:182c  (29 octets) ---- */

void __stdcall16far FUN_1130_182c(undefined4 param_1)

{
  undefined2 *puVar1;
  
  puVar1 = (undefined2 *)((int)*(undefined4 *)*(undefined4 *)((int)param_1 + 0x1a) + 0x24);
  (*(code *)*puVar1)();
  return;
}



/* ---- FUN_1130_1849 @ 1130:1849  (176 octets) ---- */

undefined FUN_1130_1849(int param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  undefined2 unaff_SS;
  undefined4 uVar3;
  int local_6;
  undefined local_3;
  
  local_3 = 0;
  if ((((*(char *)(param_1 + 10) == '\0') &&
       (*(int *)(param_1 + 0xc) == *(int *)((int)param_2 + 0x43))) ||
      ((*(char *)(param_1 + 10) == '\x01' &&
       (*(int *)(param_1 + 0xc) == *(int *)((int)param_2 + 0x21))))) ||
     ((*(char *)(param_1 + 10) == '\x02' &&
      (*(int *)(param_1 + 0xc) == *(int *)((int)param_2 + 0x2f))))) {
    *(int *)(param_1 + -8) = (int)param_2;
    *(undefined2 *)(param_1 + -6) = param_2._2_2_;
    local_3 = 1;
  }
  else {
    iVar2 = FUN_1130_1326((int)param_2,param_2._2_2_);
    if (-1 < iVar2 + -1) {
      local_6 = 0;
      while( true ) {
        uVar3 = FUN_1130_1353((int)param_2,param_2._2_2_,local_6);
        cVar1 = FUN_1130_1849(param_1,uVar3);
        if (cVar1 != '\0') break;
        if (local_6 == iVar2 + -1) {
          return 0;
        }
        local_6 = local_6 + 1;
      }
      local_3 = 1;
    }
  }
  return local_3;
}



/* ---- FUN_1130_18fb @ 1130:18fb  (71 octets) ---- */

undefined4 __stdcall16far FUN_1130_18fb(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  uVar4 = (undefined2)((ulong)*(undefined4 *)(iVar1 + 0x1a) >> 0x10);
  iVar2 = (int)*(undefined4 *)(iVar1 + 0x1a);
  FUN_1130_0a61(*(undefined2 *)(iVar1 + 0x1a),*(undefined2 *)(iVar1 + 0x1c),
                *(undefined2 *)(iVar2 + 0x49),*(undefined2 *)(iVar2 + 0x4b),0x1849,0x1130);
  return 0;
}



/* ---- FUN_1130_1942 @ 1130:1942  (124 octets) ---- */

undefined4 __stdcall16far FUN_1130_1942(undefined4 param_1,char param_2,undefined2 param_3)

{
  long lVar1;
  int local_a;
  undefined2 local_8;
  undefined2 local_6;
  undefined2 local_4;
  
  local_6 = 0;
  local_4 = 0;
  lVar1 = FUN_1130_18fb((int)param_1,(int)((ulong)param_1 >> 0x10),param_2 == '\0',param_3);
  while( true ) {
    local_8 = (undefined2)((ulong)lVar1 >> 0x10);
    local_a = (int)lVar1;
    if ((lVar1 == 0) || (*(int *)(local_a + 0x23) != 0 || *(int *)(local_a + 0x25) != 0)) break;
    lVar1 = CONCAT22(*(undefined2 *)(local_a + 0x47),*(undefined2 *)(local_a + 0x45));
  }
  if (lVar1 != 0) {
    local_6 = *(undefined2 *)(local_a + 0x23);
    local_4 = *(undefined2 *)(local_a + 0x25);
  }
  return CONCAT22(local_4,local_6);
}



/* ---- FUN_1130_19be @ 1130:19be  (60 octets) ---- */

bool __stdcall16far FUN_1130_19be(undefined4 param_1,undefined2 param_2)

{
  undefined2 *puVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)FUN_1130_18fb((int)param_1,(int)((ulong)param_1 >> 0x10),0,param_2);
  if (puVar2 != (undefined4 *)0x0) {
    puVar1 = (undefined2 *)((int)*puVar2 + 0x30);
    (*(code *)*puVar1)(0x1130,puVar2);
  }
  return puVar2 != (undefined4 *)0x0;
}



/* ---- FUN_1130_19fa @ 1130:19fa  (60 octets) ---- */

bool __stdcall16far FUN_1130_19fa(undefined4 param_1,undefined2 param_2)

{
  undefined2 *puVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)FUN_1130_18fb((int)param_1,(int)((ulong)param_1 >> 0x10),1,param_2);
  if (puVar2 != (undefined4 *)0x0) {
    puVar1 = (undefined2 *)((int)*puVar2 + 0x30);
    (*(code *)*puVar1)(0x1130,puVar2);
  }
  return puVar2 != (undefined4 *)0x0;
}



/* ---- FUN_1130_1a36 @ 1130:1a36  (65 octets) ---- */

undefined2 FUN_1130_1a36(undefined2 param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  undefined2 uVar3;
  
  uVar3 = (undefined2)((ulong)param_2 >> 0x10);
  iVar2 = (int)param_2;
  if (*(char *)(iVar2 + 0x20) == '\0') {
LAB_1130_1a67:
    uVar3 = 0;
  }
  else {
    if (*(int *)(iVar2 + 0x45) != 0 || *(int *)(iVar2 + 0x47) != 0) {
      cVar1 = FUN_1130_1a36(param_1,*(undefined2 *)(iVar2 + 0x45),*(undefined2 *)(iVar2 + 0x47));
      if (cVar1 == '\0') goto LAB_1130_1a67;
    }
    uVar3 = 1;
  }
  return uVar3;
}



/* ---- FUN_1130_1a81 @ 1130:1a81  (142 octets) ---- */

undefined FUN_1130_1a81(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  undefined2 *puVar1;
  char cVar2;
  undefined4 *puVar3;
  undefined2 uVar4;
  undefined4 *puStack_c;
  undefined4 *puStack_a;
  undefined4 *puStack_8;
  undefined local_3;
  
  local_3 = 0;
  uVar4 = (undefined2)((ulong)param_3 >> 0x10);
  puVar3 = (undefined4 *)param_3;
  if (*(char *)(puVar3 + 8) != '\0') {
    if (*(int *)((int)puVar3 + 0x45) != 0 || *(int *)((int)puVar3 + 0x47) != 0) {
      puStack_8 = (undefined4 *)*(undefined2 *)((int)puVar3 + 0x45);
      puStack_a = (undefined4 *)*(undefined2 *)((int)*(undefined4 *)((int)puVar3 + 0x45) + 0x2f);
      puStack_c = param_1;
      cVar2 = FUN_1130_1a81();
      if (cVar2 == '\0') {
        return 0;
      }
    }
    puStack_a = param_1;
    puStack_c = (undefined4 *)0x1ad1;
    puStack_8 = puVar3;
    cVar2 = FUN_1130_1a36();
    if ((cVar2 != '\0') && (*(int *)((int)puVar3 + 0x2f) == param_2)) {
      puStack_8 = (undefined4 *)0x1a77;
      puStack_c = (undefined4 *)DAT_1160_1858;
      puVar1 = (undefined2 *)((int)*param_3 + 0x30);
      DAT_1160_1858 = &puStack_c;
      puStack_a = (undefined4 *)&stack0xfffe;
      (*(code *)*puVar1)();
      local_3 = 1;
      DAT_1160_1858 = (undefined4 **)puVar3;
    }
  }
  return local_3;
}



/* ---- FUN_1130_1b2a @ 1130:1b2a  (207 octets) ---- */

char __stdcall16far FUN_1130_1b2a(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  long lVar5;
  uint local_6;
  char local_3;
  
  local_3 = '\0';
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  iVar2 = (int)param_1;
  if (*(int *)(iVar2 + 0x1e) != 0) {
    uVar4 = (undefined2)((ulong)param_2 >> 0x10);
    local_6 = (uint)*(byte *)((int)param_2 + 2);
    iVar1 = GETKEYSTATE();
    if (iVar1 < 0) {
      local_6 = local_6 + 0x2000;
    }
    iVar1 = GETKEYSTATE(0x14d0,0x11);
    if (iVar1 < 0) {
      local_6 = local_6 + 0x4000;
    }
    if ((*(uint *)((int)param_2 + 6) & 0x2000) != 0) {
      local_6 = local_6 + 0x8000;
    }
    lVar5 = FUN_1130_18fb(iVar2,uVar3,2,local_6);
    if ((((lVar5 != 0) && (local_3 = FUN_1130_1a81(&stack0xfffe,local_6,lVar5), local_3 == '\0')) &&
        (*(uint *)((int)lVar5 + 0x2f) != local_6)) &&
       (lVar5 = FUN_1130_18fb(iVar2,uVar3,2,local_6), lVar5 != 0)) {
      local_3 = FUN_1130_1a81(&stack0xfffe,local_6,lVar5);
    }
  }
  return local_3;
}



/* ---- FUN_1130_1bf9 @ 1130:1bf9  (259 octets) ---- */

void FUN_1130_1bf9(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined2 uVar3;
  undefined2 unaff_SS;
  undefined4 uVar4;
  int local_c;
  uint local_6;
  
  uVar3 = 0x14d0;
  iVar1 = GETMENUITEMCOUNT();
  local_c = 0;
  local_6 = param_1 - 0x202;
  while ((local_c < iVar1 && (local_6 < param_1 - 7U))) {
    GETMENUSTRING(uVar3,0x400,(param_1 - 7U) - local_6,local_6,unaff_SS,local_c);
    uVar4 = FUN_1150_0ca3(local_6,unaff_SS);
    uVar2 = GETMENUSTATE(0x1150,0x400,local_c);
    if ((uVar2 & 2) != 0) {
      uVar4 = FUN_1150_0d01(0x13d6,0x1160,uVar4);
    }
    if ((uVar2 & 0x40) != 0) {
      uVar4 = FUN_1150_0d01(0x13d8,0x1160,uVar4);
    }
    if ((uVar2 & 1) != 0) {
      uVar4 = FUN_1150_0d01(0x13da,0x1160,uVar4);
    }
    uVar3 = 0x1150;
    uVar4 = FUN_1150_0d01(0x13dc,0x1160,uVar4);
    unaff_SS = (undefined2)((ulong)uVar4 >> 0x10);
    local_c = local_c + 1;
    local_6 = (uint)uVar4;
  }
  return;
}



/* ---- FUN_1130_1cfc @ 1130:1cfc  (123 octets) ---- */

undefined __stdcall16far FUN_1130_1cfc(undefined4 *param_1)

{
  undefined2 *puVar1;
  undefined2 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined2 uVar5;
  undefined2 unaff_SS;
  undefined4 uVar6;
  undefined local_204 [513];
  undefined local_3;
  
  local_3 = 0;
  uVar5 = (undefined2)((ulong)param_1 >> 0x10);
  puVar4 = (undefined4 *)param_1;
  puVar1 = (undefined2 *)((int)*param_1 + 0x34);
  uVar2 = (*(code *)*puVar1)();
  FUN_1130_1bf9(&stack0xfffe,uVar2);
  if ((*(int *)(puVar4 + 8) != 0 || *(int *)((int)puVar4 + 0x22) != 0) &&
     (iVar3 = FUN_1150_0db2(local_204,unaff_SS,*(undefined2 *)(puVar4 + 8),
                            *(undefined2 *)((int)puVar4 + 0x22)), iVar3 == 0)) {
    return local_3;
  }
  local_3 = 1;
  FUN_1150_0f23(*(undefined2 *)(puVar4 + 8),*(undefined2 *)((int)puVar4 + 0x22));
  *(undefined2 *)(puVar4 + 8) = 0;
  *(undefined2 *)((int)puVar4 + 0x22) = 0;
  uVar6 = FUN_1150_0ed6(local_204,unaff_SS);
  *(int *)(puVar4 + 8) = (int)uVar6;
  *(undefined2 *)((int)puVar4 + 0x22) = (int)((ulong)uVar6 >> 0x10);
  return local_3;
}



/* ---- FUN_1130_1d77 @ 1130:1d77  (24 octets) ---- */

void __stdcall16far FUN_1130_1d77(undefined4 param_1,undefined2 param_2)

{
  undefined2 uVar1;
  
  uVar1 = (undefined2)((ulong)param_1 >> 0x10);
  *(undefined2 *)((int)param_1 + 0x1e) = param_2;
  FUN_1130_1cfc((int)param_1,uVar1);
  return;
}



/* ---- FUN_1130_1d8f @ 1130:1d8f  (7 octets) ---- */

void __stdcall16far FUN_1130_1d8f(void)

{
  return;
}



/* ---- FUN_1130_1d96 @ 1130:1d96  (51 octets) ---- */

void __stdcall16far FUN_1130_1d96(undefined4 param_1,char param_2)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 unaff_CS;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  if ((*(char *)(iVar1 + 0x2a) != param_2) &&
     (*(char *)(iVar1 + 0x2a) = param_2, *(int *)(iVar1 + 0x1e) != 0)) {
    SENDMESSAGE(unaff_CS,0,0,0,0xf15);
  }
  return;
}



/* ---- FUN_1130_1dc9 @ 1130:1dc9  (40 octets) ---- */

void __stdcall16far FUN_1130_1dc9(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  undefined2 uVar3;
  
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  iVar2 = (int)param_1;
  if (*(int *)(iVar2 + 0x1e) != 0) {
    cVar1 = FUN_1130_1cfc(iVar2,uVar3);
    if (cVar1 != '\0') {
      DRAWMENUBAR(0x1130,*(undefined2 *)(iVar2 + 0x1e));
    }
  }
  return;
}



/* ---- FUN_1130_1df1 @ 1130:1df1  (60 octets) ---- */

void __stdcall16far FUN_1130_1df1(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  if ((int)param_2 == 0 && param_2._2_2_ == 0) {
    uVar1 = *(undefined4 *)((int)param_1 + 0x1a);
    FUN_1130_0f24((int)uVar1,(int)((ulong)uVar1 >> 0x10),0,0);
  }
  else {
    uVar1 = *(undefined4 *)((int)param_1 + 0x1a);
    FUN_1130_0f24((int)uVar1,(int)((ulong)uVar1 >> 0x10),*(undefined2 *)((int)param_2 + 0x1a),
                  *(undefined2 *)((int)param_2 + 0x1c));
  }
  return;
}



/* ---- FUN_1130_1e2d @ 1130:1e2d  (63 octets) ---- */

void __stdcall16far FUN_1130_1e2d(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  
  if ((int)param_2 != 0 || param_2._2_2_ != 0) {
    uVar3 = (undefined2)((ulong)param_1 >> 0x10);
    uVar1 = *(undefined4 *)((int)param_1 + 0x1a);
    uVar4 = (undefined2)((ulong)uVar1 >> 0x10);
    iVar2 = (int)uVar1;
    if ((*(int *)(iVar2 + 0x4b) == *(int *)((int)param_2 + 0x1c)) &&
       (*(int *)(iVar2 + 0x49) == *(int *)((int)param_2 + 0x1a))) {
      uVar1 = *(undefined4 *)((int)param_1 + 0x1a);
      FUN_1130_0f24((int)uVar1,(int)((ulong)uVar1 >> 0x10),0,0);
    }
  }
  return;
}



/* ---- FUN_1130_1e6c @ 1130:1e6c  (35 octets) ---- */

void __stdcall16far FUN_1130_1e6c(undefined4 param_1)

{
  undefined2 unaff_CS;
  
  if (*(int *)((int)param_1 + 0x1e) != 0) {
    SENDMESSAGE(unaff_CS,0,0,0,0xf15);
  }
  return;
}



/* ---- FUN_1130_1e8f @ 1130:1e8f  (43 octets) ---- */

undefined2 __stdcall16far FUN_1130_1e8f(undefined4 param_1)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 local_4;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  if (*(int *)(iVar1 + 0x28) == 0) {
    local_4 = FUN_1130_1810(iVar1,uVar2);
  }
  else {
    local_4 = *(undefined2 *)(iVar1 + 0x28);
  }
  return local_4;
}



/* ---- FUN_1130_20d7 @ 1130:20d7  (55 octets) ---- */

void __stdcall16far FUN_1130_20d7(undefined4 param_1,undefined2 param_2,undefined2 param_3)

{
  undefined2 uVar1;
  int iVar2;
  undefined2 uVar3;
  
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  iVar2 = (int)param_1;
  if (*(int *)(iVar2 + 8) == 0) {
    uVar1 = FUN_1140_15ed((undefined2 *)&DAT_1160_1ef8,0x1130,iVar2,uVar3);
    *(undefined2 *)(iVar2 + 0xc) = uVar1;
  }
  FUN_1148_0c2b(iVar2,uVar3,param_2,param_3);
  return;
}



/* ---- FUN_1130_210e @ 1130:210e  (42 octets) ---- */

void __stdcall16far FUN_1130_210e(undefined4 param_1,undefined2 param_2,undefined2 param_3)

{
  int iVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  FUN_1148_0fa7(iVar1,uVar2,param_2,param_3);
  if (*(int *)(iVar1 + 8) == 0) {
    FUN_1140_166c(*(undefined2 *)(iVar1 + 0xc));
  }
  return;
}



/* ---- FUN_1130_2138 @ 1130:2138  (96 octets) ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __stdcall16far
FUN_1130_2138(undefined4 param_1,char param_2,undefined2 param_3,undefined2 param_4)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uStack_a;
  
  if (param_2 != '\0') {
    FUN_1158_1fe2();
  }
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  FUN_1130_1763(iVar1,uVar2,0,param_3,param_4);
  *(undefined2 *)(iVar1 + 0x1e) = *(undefined2 *)((int)DAT_1160_2c2a + 0x1a);
  *(undefined *)(iVar1 + 0x25) = 1;
  FUN_1130_20d7((int)_DAT_1160_2c08,(int)((ulong)_DAT_1160_2c08 >> 0x10),iVar1,uVar2);
  if (param_2 != '\0') {
    DAT_1160_1858 = uStack_a;
  }
  return param_1;
}



/* ---- FUN_1130_2198 @ 1130:2198  (48 octets) ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __stdcall16far FUN_1130_2198(undefined4 param_1,char param_3)

{
  FUN_1130_210e((int)_DAT_1160_2c08,(int)((ulong)_DAT_1160_2c08 >> 0x10),(undefined2)param_1,
                param_1._2_2_);
  FUN_1130_17e3((undefined2)param_1,param_1._2_2_,0);
  if (param_3 != '\0') {
    FUN_1158_200f();
  }
  return;
}



/* ---- FUN_1130_21c8 @ 1130:21c8  (35 octets) ---- */

undefined4 __stdcall16far FUN_1130_21c8(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined2 uVar3;
  
  uVar1 = *(undefined4 *)((int)param_1 + 0x1a);
  uVar3 = (undefined2)((ulong)uVar1 >> 0x10);
  iVar2 = (int)uVar1;
  return CONCAT22(*(undefined2 *)(iVar2 + 0x25),*(undefined2 *)(iVar2 + 0x23));
}



/* ---- FUN_1130_21eb @ 1130:21eb  (28 octets) ---- */

void __stdcall16far FUN_1130_21eb(undefined4 param_1,undefined2 param_2,undefined2 param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined2 uVar3;
  
  uVar1 = *(undefined4 *)((int)param_1 + 0x1a);
  uVar3 = (undefined2)((ulong)uVar1 >> 0x10);
  iVar2 = (int)uVar1;
  *(undefined2 *)(iVar2 + 0x23) = param_2;
  *(undefined2 *)(iVar2 + 0x25) = param_3;
  return;
}



/* ---- FUN_1130_2207 @ 1130:2207  (118 octets) ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __stdcall16far FUN_1130_2207(undefined4 param_1,undefined2 param_2,undefined2 param_3)

{
  int iVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined4 uVar5;
  
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  if (*(int *)(iVar1 + 0x2c) != 0) {
    (*(code *)*(undefined2 *)(iVar1 + 0x2a))();
  }
  uVar5 = FUN_1130_21c8(iVar1,uVar3);
  uVar4 = (undefined2)((ulong)_DAT_1160_2c08 >> 0x10);
  iVar2 = (int)_DAT_1160_2c08;
  *(undefined2 *)(iVar2 + 0xe) = (int)uVar5;
  *(undefined2 *)(iVar2 + 0x10) = (int)((ulong)uVar5 >> 0x10);
  FUN_1130_105d((int)*(undefined4 *)(iVar1 + 0x1a),
                (int)((ulong)*(undefined4 *)(iVar1 + 0x1a) >> 0x10));
  TRACKPOPUPMENU(0x1130,0,0,*(undefined2 *)((int)_DAT_1160_2c08 + 0xc),0,param_2,param_3,
                 *(uint *)(*(char *)(iVar1 + 0x24) * 2 + 0x13de) | 2);
  return;
}



/* ---- FUN_1130_227d @ 1130:227d  (79 octets) ---- */

void __cdecl16far FUN_1130_227d(void)

{
  undefined extraout_AH;
  undefined2 unaff_SS;
  undefined4 uVar1;
  undefined2 local_6;
  undefined2 local_4;
  
  local_6 = 0x94;
  local_4 = 0x1130;
  FUN_1148_095a(0,&local_6,unaff_SS);
  FUN_1130_04ed();
  uVar1 = FUN_1158_1f50(0x8df,0x1130,CONCAT11(extraout_AH,1));
  DAT_1160_2c06 = (undefined2)((ulong)uVar1 >> 0x10);
  DAT_1160_2c04 = (undefined2)uVar1;
  uVar1 = FUN_1158_1f50((undefined2 *)&DAT_1160_1eda,0x1130,1);
  DAT_1160_2c08 = (int)uVar1;
  DAT_1160_2c0a = (int)((ulong)uVar1 >> 0x10);
  return;
}




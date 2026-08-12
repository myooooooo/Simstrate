/* Simstrat (FR).EXE - segment Code41 - 214 fonctions
   Decompile par Ghidra 11.2.1 (x86 16 bits, chargeur NE). */

/* ---- FUN_1140_0e00 @ 1140:0e00  (31 octets) ---- */

int FUN_1140_0e00(int param_1,int param_2)

{
  undefined2 local_4;
  
  local_4 = param_2;
  if (param_2 < param_1) {
    local_4 = param_1;
  }
  return local_4;
}



/* ---- FUN_1140_0e1f @ 1140:0e1f  (54 octets) ---- */

void __cdecl16far FUN_1140_0e1f(void)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 unaff_CS;
  
  uVar2 = (undefined2)((ulong)DAT_1160_2c2a >> 0x10);
  iVar1 = (int)DAT_1160_2c2a;
  if (*(int *)(iVar1 + 0x1a) != 0) {
    SHOWOWNEDPOPUPS(unaff_CS,0);
  }
  FUN_1148_4ea5(iVar1,uVar2);
  FUN_1148_4e5e(iVar1,uVar2);
  return;
}



/* ---- FUN_1140_0e55 @ 1140:0e55  (130 octets) ---- */

undefined2 __stdcall16far FUN_1140_0e55(undefined2 param_1_00,undefined2 param_2,int param_1)

{
  undefined2 uVar1;
  int iVar2;
  undefined2 *puVar3;
  undefined2 uVar4;
  undefined2 unaff_SS;
  undefined2 *puVar5;
  
  if (param_1 != *(int *)&DAT_1160_1544) {
    iVar2 = ISWINDOWVISIBLE();
    if (iVar2 != 0) {
      iVar2 = ISWINDOWENABLED(0x14d0,param_1);
      if (iVar2 != 0) {
        puVar5 = (undefined2 *)FUN_1158_0182(6);
        uVar4 = (undefined2)((ulong)puVar5 >> 0x10);
        puVar3 = (undefined2 *)puVar5;
        uVar1 = *(undefined2 *)&DAT_1160_154c;
        *puVar5 = *(undefined2 *)&DAT_1160_154a;
        puVar3[1] = uVar1;
        puVar3[2] = param_1;
        *(undefined2 *)&DAT_1160_154a = puVar3;
        *(undefined2 *)&DAT_1160_154c = uVar4;
        ENABLEWINDOW(0x1158,0);
      }
    }
  }
  return 1;
}



/* ---- FUN_1140_0ee7 @ 1140:0ee7  (232 octets) ---- */

void __cdecl16far FUN_1140_0ee7(undefined2 param_1)

{
  undefined2 *puVar1;
  undefined2 uVar2;
  int iVar3;
  int iVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  undefined4 uVar7;
  undefined *puStack_22;
  undefined *puStack_20;
  undefined4 uStack_1e;
  undefined2 uStack_1a;
  
  uVar5 = (undefined2)((ulong)DAT_1160_2c2a >> 0x10);
  iVar3 = (int)DAT_1160_2c2a;
  if ((*(int *)(iVar3 + 0x20) != 0 || *(int *)(iVar3 + 0x22) != 0) &&
     (uVar6 = (undefined2)((ulong)*(undefined4 *)(iVar3 + 0x20) >> 0x10),
     iVar4 = (int)*(undefined4 *)(iVar3 + 0x20),
     *(int *)(iVar4 + 0x11a) != 0 || *(int *)(iVar4 + 0x11c) != 0)) {
    puVar1 = (undefined2 *)
             ((int)*(undefined4 *)*(undefined4 *)((int)*(undefined4 *)(iVar3 + 0x20) + 0x11a) + 0x18
             );
    uStack_1a = 0xf25;
    (*(code *)*puVar1)();
  }
  uVar2 = DAT_1160_154c;
  uVar6 = DAT_1160_154a;
  uVar5 = DAT_1160_1544;
  DAT_1160_1544 = param_1;
  DAT_1160_154a = 0;
  DAT_1160_154c = 0;
  uStack_1a = 0xf57;
  uVar7 = MAKEPROCINSTANCE();
  puStack_22 = (undefined *)&uStack_1a;
  uStack_1a = DAT_1160_1858;
  uStack_1e._2_2_ = 0x14d0;
  uStack_1e._0_2_ = 0xed7;
  DAT_1160_1858 = &puStack_22;
  puStack_20 = &stack0xfffe;
  GETCURRENTTASK(0x14d0);
  ENUMTASKWINDOWS(0x14d0,0,0,uVar7);
  DAT_1160_1858 = (undefined **)(undefined2)uStack_1e;
  uStack_1a = 0xfe6;
  puStack_20 = (undefined *)0x14d0;
  puStack_22 = (undefined *)0xfd2;
  uStack_1e = uVar7;
  FREEPROCINSTANCE();
  DAT_1160_154a = uVar6;
  DAT_1160_154c = uVar2;
  DAT_1160_1544 = uVar5;
  return;
}



/* ---- FUN_1140_0ff0 @ 1140:0ff0  (147 octets) ---- */

void __stdcall16far FUN_1140_0ff0(undefined2 *param_1,int param_2)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  int iVar3;
  int iVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  undefined2 unaff_CS;
  undefined4 local_6;
  
  uVar5 = (undefined2)((ulong)DAT_1160_2c2a >> 0x10);
  iVar3 = (int)DAT_1160_2c2a;
  if ((*(int *)(iVar3 + 0x20) != 0 || *(int *)(iVar3 + 0x22) != 0) &&
     (uVar6 = (undefined2)((ulong)*(undefined4 *)(iVar3 + 0x20) >> 0x10),
     iVar4 = (int)*(undefined4 *)(iVar3 + 0x20),
     *(int *)(iVar4 + 0x11a) != 0 || *(int *)(iVar4 + 0x11c) != 0)) {
    puVar2 = (undefined2 *)
             ((int)*(undefined4 *)*(undefined4 *)((int)*(undefined4 *)(iVar3 + 0x20) + 0x11a) + 0x18
             );
    (*(code *)*puVar2)();
  }
  while (param_1 != (undefined2 *)0x0 || param_2 != 0) {
    local_6 = (undefined2 *)CONCAT22(param_2,param_1);
    iVar3 = ISWINDOW(unaff_CS,param_1[2]);
    if (iVar3 != 0) {
      ENABLEWINDOW(0x14d0,1);
    }
    puVar1 = (undefined2 *)*local_6;
    iVar3 = param_1[1];
    unaff_CS = 0x1158;
    FUN_1158_019c(6,param_1,param_2);
    param_1 = puVar1;
    param_2 = iVar3;
  }
  return;
}



/* ---- FUN_1140_1083 @ 1140:1083  (129 octets) ---- */

undefined2 __stdcall16far FUN_1140_1083(undefined2 param_1_00,undefined2 param_2,int param_1)

{
  int iVar1;
  uint uVar2;
  undefined2 unaff_SS;
  
  if ((((param_1 != *(int *)&DAT_1160_1544) &&
       (param_1 != *(int *)((int)*(undefined4 *)&DAT_1160_2c2a + 0x1a))) &&
      (iVar1 = ISWINDOWVISIBLE(), iVar1 != 0)) &&
     (iVar1 = ISWINDOWENABLED(0x14d0,param_1), iVar1 != 0)) {
    uVar2 = GETWINDOWLONG(0x14d0,0xffec);
    if ((uVar2 & 8) == 0) {
      if (*(int *)0x1546 == 0) {
        *(int *)0x1546 = param_1;
      }
    }
    else if (*(int *)0x1548 == 0) {
      *(int *)0x1548 = param_1;
    }
  }
  return 1;
}



/* ---- FUN_1140_118c @ 1140:118c  (48 octets) ---- */

uint FUN_1140_118c(undefined2 param_1)

{
  uint uVar1;
  uint uVar2;
  undefined2 unaff_CS;
  
  uVar1 = DAT_1160_1534;
  SENDMESSAGE(unaff_CS,0,0,0,param_1);
  uVar2 = DAT_1160_1534 & 0xff00;
  if (DAT_1160_1534 == uVar1) {
    uVar2 = uVar2 + 1;
  }
  return uVar2;
}



/* ---- FUN_1140_11bc @ 1140:11bc  (58 octets) ---- */

bool __stdcall16far FUN_1140_11bc(int *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *param_1;
  if (iVar1 == param_2) {
    *(undefined *)((int *)param_1 + 1) = 1;
  }
  return iVar1 != param_2;
}



/* ---- FUN_1140_11fc @ 1140:11fc  (99 octets) ---- */

void __cdecl16far FUN_1140_11fc(void)

{
  undefined2 uVar1;
  undefined2 unaff_SS;
  undefined4 uVar2;
  undefined2 uStack_16;
  undefined *puStack_14;
  undefined2 uStack_12;
  undefined2 uStack_10;
  undefined2 uStack_e;
  undefined2 local_6;
  undefined local_4;
  
  uStack_e = 0x1205;
  local_6 = GETACTIVEWINDOW();
  local_4 = 0;
  uStack_e = 0x1140;
  uStack_10 = 0x11bc;
  uStack_12 = DAT_1160_188c;
  puStack_14 = (undefined *)0x14d0;
  uStack_16 = 0x121d;
  uVar2 = MAKEPROCINSTANCE();
  uStack_10 = 0x14d0;
  uStack_12 = 0x11f6;
  uStack_16 = DAT_1160_1858;
  DAT_1160_1858 = &uStack_16;
  puStack_14 = &stack0xfffe;
  uVar1 = GETCURRENTTASK(0x14d0);
  ENUMTASKWINDOWS(0x14d0,&local_6,unaff_SS,uVar2);
  DAT_1160_1858 = (undefined2 *)uVar1;
  puStack_14 = (undefined *)0x14d0;
  uStack_16 = 0x125f;
  FREEPROCINSTANCE(0x14d0,(int)uVar2);
  return;
}



/* ---- FUN_1140_126a @ 1140:126a  (358 octets) ---- */

void __cdecl16near FUN_1140_126a(void)

{
  undefined2 uVar1;
  int iVar2;
  code *pcVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined2 uVar6;
  
  uVar4 = CONCAT22(DAT_1160_1524,DAT_1160_1522);
  if (DAT_1160_154e == 0) {
    uVar1 = GETVERSION();
    if (((byte)uVar1 < 4) && ((byte)((uint)uVar1 >> 8) < 0x59)) {
      uVar1 = SETERRORMODE(0x14d0,0x8000);
      uVar6 = 0x1160;
      DAT_1160_154e = LOADLIBRARY(0x14d0,0x1550);
      SETERRORMODE(0x14d0,uVar1,uVar6);
    }
    uVar4 = CONCAT22(DAT_1160_1524,DAT_1160_1522);
    if (DAT_1160_154e < 0x20) {
      DAT_1160_154e = 1;
    }
    if (0x1f < DAT_1160_154e) {
      uVar5 = DAT_1160_154e;
      pcVar3 = (code *)GETPROCADDRESS(0x14d0,0x155c,0x1160);
      DAT_1160_2c34 = (undefined2)((ulong)pcVar3 >> 0x10);
      DAT_1160_2c32 = (code *)pcVar3;
      iVar2 = (*pcVar3)(0x14d0,DAT_1160_188c,uVar5);
      if (iVar2 == 0) {
        FREELIBRARY(0x14d0,DAT_1160_154e);
        uVar4 = CONCAT22(DAT_1160_1524,DAT_1160_1522);
        DAT_1160_154e = 1;
      }
      else {
        uVar4 = GETPROCADDRESS(0x14d0,0x156a,0x1160);
        DAT_1160_2c38 = (undefined2)((ulong)uVar4 >> 0x10);
        DAT_1160_2c36 = (undefined2)uVar4;
        uVar4 = GETPROCADDRESS(0x14d0,0x157a,0x1160);
        DAT_1160_2c3c = (undefined2)((ulong)uVar4 >> 0x10);
        DAT_1160_2c3a = (undefined2)uVar4;
        uVar4 = GETPROCADDRESS(0x14d0,0x158b,0x1160);
        DAT_1160_2c40 = (undefined2)((ulong)uVar4 >> 0x10);
        DAT_1160_2c3e = (undefined2)uVar4;
        uVar4 = GETPROCADDRESS(0x14d0,0x159c,0x1160);
        DAT_1160_1528 = (undefined2)((ulong)uVar4 >> 0x10);
        DAT_1160_1526 = (undefined2)uVar4;
        uVar4 = GETPROCADDRESS(0x14d0,0x15af,0x1160);
        DAT_1160_152c = (undefined2)((ulong)uVar4 >> 0x10);
        DAT_1160_152a = (undefined2)uVar4;
        uVar4 = GETPROCADDRESS(0x14d0,0x15bf,0x1160);
        DAT_1160_2c44 = (undefined2)((ulong)uVar4 >> 0x10);
        DAT_1160_2c42 = (undefined2)uVar4;
        uVar4 = GETPROCADDRESS(0x14d0,0x15d1,0x1160);
        DAT_1160_2c48 = (undefined2)((ulong)uVar4 >> 0x10);
        DAT_1160_2c46 = (undefined2)uVar4;
        uVar4 = GETPROCADDRESS(0x14d0,0x15e5,0x1160);
        DAT_1160_2c4c = (undefined2)((ulong)uVar4 >> 0x10);
        DAT_1160_2c4a = (undefined2)uVar4;
        uVar4 = GETPROCADDRESS(0x14d0,0x15f6,0x1160);
      }
    }
  }
  DAT_1160_1524 = (undefined2)((ulong)uVar4 >> 0x10);
  DAT_1160_1522 = (undefined2)uVar4;
  return;
}



/* ---- FUN_1140_13d0 @ 1140:13d0  (29 octets) ---- */

void __cdecl16far FUN_1140_13d0(void)

{
  if (0x1f < DAT_1160_154e) {
    (*DAT_1160_2c36)();
    FREELIBRARY();
  }
  return;
}



/* ---- FUN_1140_13ed @ 1140:13ed  (34 octets) ---- */

void __stdcall16far FUN_1140_13ed(void)

{
  if (DAT_1160_154e == 0) {
    FUN_1140_126a();
  }
  if (0x1f < DAT_1160_154e) {
    (*DAT_1160_2c3e)();
  }
  return;
}



/* ---- FUN_1140_140f @ 1140:140f  (64 octets) ---- */

void __stdcall16far FUN_1140_140f(char param_1)

{
  if (DAT_1160_154e == 0) {
    FUN_1140_126a();
  }
  if (((0x1f < DAT_1160_154e) && (DAT_1160_2c42 != (code *)0x0 || DAT_1160_2c44 != 0)) &&
     (DAT_1160_2c46 != (code *)0x0 || DAT_1160_2c48 != 0)) {
    if (param_1 == '\0') {
      (*DAT_1160_2c46)();
    }
    else {
      (*DAT_1160_2c42)();
    }
  }
  return;
}



/* ---- FUN_1140_1451 @ 1140:1451  (56 octets) ---- */

undefined4 __stdcall16far
FUN_1140_1451(undefined2 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4)

{
  undefined2 *in_BX;
  undefined2 unaff_SS;
  
  (*(code *)*in_BX)();
  return CONCAT22(param_3,param_4);
}



/* ---- FUN_1140_1489 @ 1140:1489  (284 octets) ---- */

undefined2 * __stdcall16far FUN_1140_1489(void)

{
  undefined2 uVar1;
  undefined2 *puVar2;
  undefined2 uVar3;
  int iVar4;
  undefined2 unaff_CS;
  undefined2 unaff_SS;
  undefined2 *puVar5;
  undefined4 local_e;
  
  if (DAT_1160_2c50 == (undefined2 *)0x0 && DAT_1160_2c52 == 0) {
    uVar3 = DAT_1160_189a;
    uVar1 = GLOBALALLOC(unaff_CS,0x400,0);
    puVar5 = (undefined2 *)GLOBALLOCK(0x14d0,uVar1,uVar3);
    uVar3 = (undefined2)((ulong)puVar5 >> 0x10);
    puVar2 = (undefined2 *)puVar5;
    *puVar5 = DAT_1160_2c4e;
    FUN_1158_1ec1(6,puVar2 + 1,uVar3,0x1604,0x1160);
    puVar2[4] = 0x1451;
    puVar2[5] = 0x1140;
    local_e = (undefined2 *)CONCAT22(uVar3,puVar2 + 6);
    do {
      *(undefined *)local_e = 0xe8;
      iVar4 = (int)((ulong)local_e >> 0x10);
      *(int *)((int)(undefined2 *)local_e + 1) = -1 - (int)(undefined2 *)local_e;
      *(undefined2 *)((int)(undefined2 *)local_e + 3) = DAT_1160_2c50;
      *(int *)((int)(undefined2 *)local_e + 5) = DAT_1160_2c52;
      DAT_1160_2c50 = (undefined2 *)local_e;
      local_e._0_2_ = (undefined2 *)((int)(undefined2 *)local_e + 0xb);
      local_e = (undefined2 *)CONCAT22(iVar4,(undefined2 *)local_e);
      DAT_1160_2c52 = iVar4;
    } while ((undefined2 *)local_e != (undefined2 *)0x400);
    unaff_CS = 0x14d0;
    DAT_1160_2c4e = uVar3;
    PRESTOCHANGOSELECTOR(0x1158,uVar3);
  }
  iVar4 = DAT_1160_2c52;
  puVar2 = DAT_1160_2c50;
  uVar3 = ALLOCCSTODSALIAS(unaff_CS,DAT_1160_2c52);
  DAT_1160_2c50 = (undefined2 *)*(undefined2 *)((int)puVar2 + 3);
  DAT_1160_2c52 = *(undefined2 *)((int)puVar2 + 5);
  FUN_1158_161b(8,(undefined *)((int)puVar2 + 3),uVar3,&stack0x0004,unaff_SS);
  FREESELECTOR(0x1158,uVar3);
  return (undefined2 *)CONCAT22(iVar4,puVar2);
}



/* ---- FUN_1140_15a5 @ 1140:15a5  (72 octets) ---- */

void __stdcall16far FUN_1140_15a5(int param_1,int param_2)

{
  int iVar1;
  undefined2 uVar2;
  int iVar3;
  
  if (param_1 != 0 || param_2 != 0) {
    iVar3 = param_2;
    uVar2 = ALLOCCSTODSALIAS();
    iVar1 = DAT_1160_2c52;
    *(int *)(param_1 + 3) = DAT_1160_2c50;
    *(int *)(param_1 + 5) = iVar1;
    FREESELECTOR(0x14d0,uVar2,iVar3);
    DAT_1160_2c50 = param_1;
    DAT_1160_2c52 = param_2;
  }
  return;
}



/* ---- FUN_1140_15ed @ 1140:15ed  (127 octets) ---- */

undefined2 __stdcall16far
FUN_1140_15ed(undefined2 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4)

{
  int iVar1;
  undefined2 unaff_CS;
  undefined2 unaff_SS;
  undefined4 uVar2;
  undefined2 uVar3;
  undefined local_1e [26];
  undefined2 local_4;
  
  DAT_1160_1614 = DAT_1160_188c;
  uVar3 = DAT_1160_1622;
  iVar1 = GETCLASSINFO(unaff_CS,local_1e,unaff_SS,DAT_1160_1620,DAT_1160_1622);
  if (iVar1 == 0) {
    uVar3 = 0x1160;
    REGISTERCLASS(0x14d0,0x160a);
  }
  local_4 = CREATEWINDOW(0x14d0,0,0,DAT_1160_188c,0,0,0,0,0,0,0,0,0x1632,0x1160,DAT_1160_1620,
                         DAT_1160_1622,uVar3);
  uVar3 = 0xfffc;
  uVar2 = FUN_1140_1489(param_1,param_2,param_3,param_4);
  SETWINDOWLONG(0x1140,uVar2,uVar3);
  return local_4;
}



/* ---- FUN_1140_166c @ 1140:166c  (43 octets) ---- */

void __stdcall16far FUN_1140_166c(undefined2 param_1)

{
  undefined2 unaff_CS;
  undefined4 uVar1;
  undefined2 uVar2;
  
  uVar2 = param_1;
  uVar1 = GETWINDOWLONG(unaff_CS,0xfffc);
  DESTROYWINDOW(0x14d0,param_1,uVar2,uVar1);
  FUN_1140_15a5(uVar1);
  return;
}



/* ---- FUN_1140_1697 @ 1140:1697  (100 octets) ---- */

byte __stdcall16far FUN_1140_1697(uint param_1)

{
  int iVar1;
  byte local_3;
  
  local_3 = (param_1 & 4) != 0;
  if ((param_1 & 8) != 0) {
    local_3 = local_3 | 4;
  }
  if ((param_1 & 1) != 0) {
    local_3 = local_3 | 8;
  }
  if ((param_1 & 2) != 0) {
    local_3 = local_3 | 0x10;
  }
  if ((param_1 & 0x10) != 0) {
    local_3 = local_3 | 0x20;
  }
  iVar1 = GETKEYSTATE();
  if (iVar1 < 0) {
    local_3 = local_3 | 2;
  }
  return local_3;
}



/* ---- FUN_1140_16fb @ 1140:16fb  (66 octets) ---- */

undefined2 __stdcall16far FUN_1140_16fb(undefined2 param_1,uint param_2)

{
  int iVar1;
  byte local_3;
  
  iVar1 = GETKEYSTATE();
  local_3 = iVar1 < 0;
  iVar1 = GETKEYSTATE(0x14d0,0x11);
  if (iVar1 < 0) {
    local_3 = local_3 | 4;
  }
  if ((param_2 & 0x2000) != 0) {
    local_3 = local_3 | 2;
  }
  return CONCAT11((char)((param_2 & 0x2000) >> 8),local_3);
}



/* ---- FUN_1140_17a8 @ 1140:17a8  (89 octets) ---- */

undefined4 __stdcall16far FUN_1140_17a8(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 local_6;
  undefined2 local_4;
  
  while (uVar3 = (undefined2)((ulong)param_1 >> 0x10), iVar2 = (int)param_1,
        *(int *)(iVar2 + 0x1a) != 0 || *(int *)(iVar2 + 0x1c) != 0) {
    param_1 = CONCAT22(*(undefined2 *)(iVar2 + 0x1c),*(undefined2 *)(iVar2 + 0x1a));
  }
  local_6 = 0;
  local_4 = 0;
  cVar1 = FUN_1158_2255(0x4fb,0x1140,iVar2,uVar3);
  if (cVar1 != '\0') {
    local_6 = iVar2;
    local_4 = uVar3;
  }
  return CONCAT22(local_4,local_6);
}



/* ---- FUN_1140_1801 @ 1140:1801  (122 octets) ---- */

long __stdcall16far FUN_1140_1801(undefined4 param_1)

{
  undefined extraout_AH;
  undefined2 unaff_SS;
  undefined4 uVar1;
  undefined2 uVar2;
  undefined *puVar3;
  undefined2 uVar4;
  undefined local_20e [256];
  undefined *local_10e;
  undefined local_106 [256];
  long local_6;
  
  local_6 = FUN_1140_17a8((undefined2)param_1,param_1._2_2_);
  if (local_6 == 0) {
    puVar3 = local_20e;
    uVar2 = 0xf02a;
    uVar4 = unaff_SS;
    FUN_1148_512a((undefined2)param_1,param_1._2_2_);
    local_10e = local_106;
    FUN_1150_0950(0,&local_10e,unaff_SS,uVar2);
    uVar1 = FUN_1150_28e6(0x52,0x1138,CONCAT11(extraout_AH,1),puVar3,uVar4);
    FUN_1158_1399(0x1150,uVar1);
  }
  return local_6;
}



/* ---- FUN_1140_187b @ 1140:187b  (88 octets) ---- */

undefined4 __stdcall16far
FUN_1140_187b(undefined4 param_1,char param_2,undefined param_3,undefined2 param_4,
             undefined2 param_5)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uStack_a;
  
  if (param_2 != '\0') {
    FUN_1158_1fe2();
  }
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  FUN_1158_1f50(iVar1,uVar2,0);
  *(undefined2 *)(iVar1 + 4) = param_4;
  *(undefined2 *)(iVar1 + 6) = param_5;
  *(undefined *)(iVar1 + 0x10) = param_3;
  *(undefined2 *)(iVar1 + 8) = 8;
  *(undefined *)(iVar1 + 0x13) = 1;
  if (param_2 != '\0') {
    DAT_1160_1858 = uStack_a;
  }
  return param_1;
}



/* ---- FUN_1140_18d3 @ 1140:18d3  (114 octets) ---- */

void __stdcall16far FUN_1140_18d3(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  undefined2 uVar3;
  
  cVar1 = FUN_1158_2255(0x6f,0x1140,(int)param_2,param_2._2_2_);
  iVar2 = (int)param_1;
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  if (cVar1 == '\0') {
    FUN_1148_10fa(iVar2,uVar3,(int)param_2,param_2._2_2_);
  }
  else {
    FUN_1140_1e62(iVar2,uVar3,*(undefined *)((int)param_2 + 0x13));
    FUN_1140_1e21(iVar2,uVar3,*(undefined2 *)((int)param_2 + 0xc));
    FUN_1140_1cd0(iVar2,uVar3,*(undefined2 *)((int)param_2 + 10));
    *(undefined2 *)(iVar2 + 8) = *(undefined2 *)((int)param_2 + 8);
  }
  return;
}



/* ---- FUN_1140_1945 @ 1140:1945  (91 octets) ---- */

void FUN_1140_1945(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 unaff_SS;
  
  uVar2 = (undefined2)((ulong)param_2 >> 0x10);
  iVar1 = (int)param_2;
  if (*(char *)(iVar1 + 0x29) != '\0') {
    if (*(char *)(iVar1 + 0x2d) == '\0') {
      uVar2 = FUN_1140_0e00(*(int *)((int)*(undefined4 *)(param_1 + 6) + 10) +
                            *(int *)(iVar1 + 0x1e) + *(int *)(iVar1 + 0x22),
                            *(undefined2 *)(param_1 + -4));
      *(undefined2 *)(param_1 + -4) = uVar2;
    }
    else if (*(char *)(iVar1 + 0x2d) == '\x04') {
      *(int *)(param_1 + -6) = *(int *)(param_1 + -6) + *(int *)(iVar1 + 0x22);
    }
  }
  return;
}



/* ---- FUN_1140_19a0 @ 1140:19a0  (91 octets) ---- */

void FUN_1140_19a0(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 unaff_SS;
  
  uVar2 = (undefined2)((ulong)param_2 >> 0x10);
  iVar1 = (int)param_2;
  if (*(char *)(iVar1 + 0x29) != '\0') {
    if (*(char *)(iVar1 + 0x2d) == '\0') {
      uVar2 = FUN_1140_0e00(*(int *)((int)*(undefined4 *)(param_1 + 6) + 10) +
                            *(int *)(iVar1 + 0x20) + *(int *)(iVar1 + 0x24),
                            *(undefined2 *)(param_1 + -4));
      *(undefined2 *)(param_1 + -4) = uVar2;
    }
    else if (*(char *)(iVar1 + 0x2d) == '\x02') {
      *(int *)(param_1 + -6) = *(int *)(param_1 + -6) + *(int *)(iVar1 + 0x24);
    }
  }
  return;
}



/* ---- FUN_1140_19fb @ 1140:19fb  (164 octets) ---- */

void __stdcall16far FUN_1140_19fb(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  int local_4;
  
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  iVar2 = (int)param_1;
  if (*(char *)((int)*(undefined4 *)(iVar2 + 4) + 0xe0) != '\0') {
    iVar1 = FUN_1138_39fd((int)*(undefined4 *)(iVar2 + 4),
                          (int)((ulong)*(undefined4 *)(iVar2 + 4) >> 0x10));
    if (-1 < iVar1 + -1) {
      local_4 = 0;
      while( true ) {
        if (*(char *)(iVar2 + 0x10) == '\0') {
          uVar4 = FUN_1138_398f((int)*(undefined4 *)(iVar2 + 4),
                                (int)((ulong)*(undefined4 *)(iVar2 + 4) >> 0x10),local_4);
          FUN_1140_1945(&stack0xfffe,uVar4);
        }
        else {
          uVar4 = FUN_1138_398f((int)*(undefined4 *)(iVar2 + 4),
                                (int)((ulong)*(undefined4 *)(iVar2 + 4) >> 0x10),local_4);
          FUN_1140_19a0(&stack0xfffe,uVar4);
        }
        if (local_4 == iVar1 + -1) break;
        local_4 = local_4 + 1;
      }
    }
    FUN_1140_1df5(iVar2,uVar3,*(undefined2 *)(iVar2 + 0x11));
  }
  return;
}



/* ---- FUN_1140_1a9f @ 1140:1a9f  (79 octets) ---- */

bool FUN_1140_1a9f(int param_1,int param_2)

{
  undefined4 uVar1;
  uint extraout_DX;
  undefined2 unaff_SS;
  uint local_6;
  
  local_6 = 0x10;
  if (param_2 == 1) {
    local_6 = 0x20;
  }
  uVar1 = *(undefined4 *)((int)*(undefined4 *)(param_1 + 6) + 4);
  FUN_1138_62b9((int)uVar1,(int)((ulong)uVar1 >> 0x10));
  GETWINDOWLONG(0x1138,0xfff0);
  return (extraout_DX & local_6) != 0;
}



/* ---- FUN_1140_1aee @ 1140:1aee  (105 octets) ---- */

int FUN_1140_1aee(int param_1,undefined2 param_2,undefined2 param_3)

{
  char cVar1;
  int iVar2;
  undefined2 unaff_SS;
  int local_4;
  
  local_4 = 0;
  if (*(char *)(param_1 + 0xc) == '\0') {
    if ((*(char *)(param_1 + 10) != '\0') && (cVar1 = FUN_1140_1a9f(param_1,param_3), cVar1 == '\0')
       ) {
      iVar2 = GETSYSTEMMETRICS();
      return -(iVar2 - *(int *)(param_1 + -4));
    }
    if ((*(char *)(param_1 + 10) == '\0') && (cVar1 = FUN_1140_1a9f(param_1,param_3), cVar1 != '\0')
       ) {
      local_4 = GETSYSTEMMETRICS();
      local_4 = local_4 - *(int *)(param_1 + -4);
    }
  }
  return local_4;
}



/* ---- FUN_1140_1b57 @ 1140:1b57  (121 octets) ---- */

int __stdcall16far FUN_1140_1b57(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined2 uVar3;
  int local_4;
  
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  iVar2 = (int)param_1;
  FUN_1138_62b9((int)*(undefined4 *)(iVar2 + 4),(int)((ulong)*(undefined4 *)(iVar2 + 4) >> 0x10));
  GETWINDOWLONG(0x1138,0xfff0);
  if (*(char *)(iVar2 + 0x10) == '\x01') {
    iVar1 = FUN_1140_1aee(&stack0xfffe,0x15,0);
    local_4 = FUN_1138_18f4((int)*(undefined4 *)(iVar2 + 4),
                            (int)((ulong)*(undefined4 *)(iVar2 + 4) >> 0x10));
    local_4 = local_4 + iVar1;
  }
  else {
    iVar1 = FUN_1140_1aee(&stack0xfffe,0x14,1);
    local_4 = FUN_1138_18a9((int)*(undefined4 *)(iVar2 + 4),
                            (int)((ulong)*(undefined4 *)(iVar2 + 4) >> 0x10));
    local_4 = local_4 + iVar1;
  }
  return local_4;
}



/* ---- FUN_1140_1bd0 @ 1140:1bd0  (40 octets) ---- */

uint __stdcall16far FUN_1140_1bd0(undefined4 param_1)

{
  uint uVar1;
  uint uVar2;
  undefined2 uVar3;
  
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  uVar1 = FUN_1140_1b57((int)param_1,uVar3,0,0);
  uVar2 = uVar1 & 0xff00;
  if ((int)uVar1 < *(int *)((int)param_1 + 0xc)) {
    uVar2 = uVar2 + 1;
  }
  return uVar2;
}



/* ---- FUN_1140_1c0a @ 1140:1c0a  (198 octets) ---- */

void __stdcall16far FUN_1140_1c0a(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  
  uVar3 = (undefined2)((ulong)param_2 >> 0x10);
  iVar2 = (int)param_1;
  uVar4 = (undefined2)((ulong)param_1 >> 0x10);
  switch(*(undefined2 *)((int)param_2 + 2)) {
  case 0:
    FUN_1140_1cd0(iVar2,uVar4,*(int *)(iVar2 + 10) - *(int *)(iVar2 + 8));
    break;
  case 1:
    FUN_1140_1cd0(iVar2,uVar4,*(int *)(iVar2 + 10) + *(int *)(iVar2 + 8));
    break;
  case 2:
    iVar1 = FUN_1140_1b57(iVar2,uVar4,0,1);
    FUN_1140_1cd0(iVar2,uVar4,*(int *)(iVar2 + 10) - iVar1);
    break;
  case 3:
    iVar1 = FUN_1140_1b57(iVar2,uVar4,0,1);
    FUN_1140_1cd0(iVar2,uVar4,iVar1 + *(int *)(iVar2 + 10));
    break;
  case 4:
    FUN_1140_1cd0(iVar2,uVar4,*(undefined2 *)((int)param_2 + 4));
    break;
  case 5:
    break;
  case 6:
    FUN_1140_1cd0(iVar2,uVar4,0);
    break;
  case 7:
    FUN_1140_1cd0(iVar2,uVar4,*(undefined2 *)(iVar2 + 0xe));
  }
  return;
}



/* ---- FUN_1140_1cd0 @ 1140:1cd0  (293 octets) ---- */

void __stdcall16far FUN_1140_1cd0(undefined4 param_1,int param_2)

{
  undefined2 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined2 uVar4;
  int iVar5;
  undefined2 uVar6;
  bool bVar7;
  long lVar8;
  
  uVar6 = (undefined2)((ulong)param_1 >> 0x10);
  iVar5 = (int)param_1;
  if ((*(byte *)((int)*(undefined4 *)(iVar5 + 4) + 0x18) & 2) == 0) {
    if (*(int *)(iVar5 + 0xe) < param_2) {
      param_2 = *(int *)(iVar5 + 0xe);
    }
    else if (param_2 < 0) {
      param_2 = 0;
    }
    bVar7 = *(char *)(iVar5 + 0x10) != '\0';
    if (param_2 != *(int *)(iVar5 + 10)) {
      iVar3 = *(int *)(iVar5 + 10);
      *(int *)(iVar5 + 10) = param_2;
      if (*(char *)(iVar5 + 0x10) == '\0') {
        FUN_1138_5eb4((int)*(undefined4 *)(iVar5 + 4),
                      (int)((ulong)*(undefined4 *)(iVar5 + 4) >> 0x10),0,iVar3 - param_2);
      }
      else {
        FUN_1138_5eb4((int)*(undefined4 *)(iVar5 + 4),
                      (int)((ulong)*(undefined4 *)(iVar5 + 4) >> 0x10),iVar3 - param_2,0);
      }
      lVar8 = FUN_1140_17a8(*(undefined2 *)(iVar5 + 4),*(undefined2 *)(iVar5 + 6));
      uVar4 = (undefined2)((ulong)lVar8 >> 0x10);
      iVar3 = (int)lVar8;
      if ((lVar8 != 0) && (*(int *)(iVar3 + 0x106) != 0 || *(int *)(iVar3 + 0x108) != 0)) {
        puVar2 = (undefined4 *)*(undefined4 *)(iVar3 + 0x106);
        puVar1 = (undefined2 *)((int)*puVar2 + 4);
        (*(code *)*puVar1)(0x1140,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10));
      }
    }
    FUN_1138_62b9((int)*(undefined4 *)(iVar5 + 4),(int)((ulong)*(undefined4 *)(iVar5 + 4) >> 0x10));
    iVar3 = GETSCROLLPOS(0x1138,bVar7);
    if (iVar3 != *(int *)(iVar5 + 10)) {
      FUN_1138_62b9((int)*(undefined4 *)(iVar5 + 4),(int)((ulong)*(undefined4 *)(iVar5 + 4) >> 0x10)
                   );
      SETSCROLLPOS(0x1138,1,*(undefined2 *)(iVar5 + 10),bVar7);
    }
  }
  else {
    *(int *)(iVar5 + 10) = param_2;
  }
  return;
}



/* ---- FUN_1140_1df5 @ 1140:1df5  (44 octets) ---- */

void __stdcall16far FUN_1140_1df5(undefined4 param_1,undefined2 param_2)

{
  int iVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  *(undefined2 *)(iVar1 + 0xc) = param_2;
  if (*(int *)(iVar1 + 0xc) < 0) {
    *(undefined2 *)(iVar1 + 0xc) = 0;
  }
  FUN_1140_2117((int)*(undefined4 *)(iVar1 + 4),(int)((ulong)*(undefined4 *)(iVar1 + 4) >> 0x10));
  return;
}



/* ---- FUN_1140_1e21 @ 1140:1e21  (33 octets) ---- */

void __stdcall16far FUN_1140_1e21(undefined4 param_1,undefined2 param_2)

{
  undefined4 uVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  uVar1 = *(undefined4 *)((int)param_1 + 4);
  *(undefined *)((int)uVar1 + 0xe0) = 0;
  FUN_1140_1df5((int)param_1,uVar2,param_2);
  return;
}



/* ---- FUN_1140_1e42 @ 1140:1e42  (32 octets) ---- */

uint __stdcall16far FUN_1140_1e42(undefined4 param_1)

{
  undefined4 uVar1;
  uint in_AX;
  uint uVar2;
  
  uVar1 = *(undefined4 *)((int)param_1 + 4);
  uVar2 = in_AX & 0xff00;
  if (*(char *)((int)uVar1 + 0xe0) == '\0') {
    uVar2 = uVar2 + 1;
  }
  return uVar2;
}



/* ---- FUN_1140_1e62 @ 1140:1e62  (28 octets) ---- */

void __stdcall16far FUN_1140_1e62(undefined4 param_1,undefined param_2)

{
  undefined4 uVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  *(undefined *)((int)param_1 + 0x13) = param_2;
  uVar1 = *(undefined4 *)((int)param_1 + 4);
  FUN_1140_2117((int)uVar1,(int)((ulong)uVar1 >> 0x10));
  return;
}



/* ---- FUN_1140_1e7e @ 1140:1e7e  (135 octets) ---- */

void __stdcall16far FUN_1140_1e7e(undefined4 param_1,undefined param_2,undefined param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined2 uVar4;
  
  uVar4 = (undefined2)((ulong)param_1 >> 0x10);
  iVar3 = (int)param_1;
  *(undefined2 *)(iVar3 + 0xe) = 0;
  cVar1 = *(char *)(iVar3 + 0x10);
  if (*(char *)(iVar3 + 0x13) != '\0') {
    iVar2 = FUN_1140_1b57(iVar3,uVar4,param_2,param_3);
    *(int *)(iVar3 + 0xe) = *(int *)(iVar3 + 0xc) - iVar2;
    if (*(int *)(iVar3 + 0xe) < 0) {
      *(undefined2 *)(iVar3 + 0xe) = 0;
    }
  }
  FUN_1138_62b9((int)*(undefined4 *)(iVar3 + 4),(int)((ulong)*(undefined4 *)(iVar3 + 4) >> 0x10));
  SETSCROLLRANGE(0x1138,1,*(undefined2 *)(iVar3 + 0xe),0,cVar1 == '\x01');
  FUN_1140_1cd0(iVar3,uVar4,*(undefined2 *)(iVar3 + 10));
  return;
}



/* ---- FUN_1140_1f05 @ 1140:1f05  (139 octets) ---- */

undefined4 __stdcall16far
FUN_1140_1f05(undefined4 param_1,char param_2,undefined2 param_3,undefined2 param_4)

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
  FUN_1138_2e61(iVar1,uVar2,0,param_3,param_4);
  uVar3 = FUN_1140_187b(0x6f,0x1140,CONCAT11(extraout_AH,1),0,iVar1,uVar2);
  *(undefined2 *)(iVar1 + 0xd8) = (int)uVar3;
  *(undefined2 *)(iVar1 + 0xda) = (int)((ulong)uVar3 >> 0x10);
  uVar3 = FUN_1140_187b(0x6f,0x1140,1,1,iVar1,uVar2);
  *(undefined2 *)(iVar1 + 0xdc) = (int)uVar3;
  *(undefined2 *)(iVar1 + 0xde) = (int)((ulong)uVar3 >> 0x10);
  *(undefined *)(iVar1 + 0xe0) = 1;
  if (param_2 != '\0') {
    DAT_1160_1858 = uStack_a;
  }
  return param_1;
}



/* ---- FUN_1140_1f90 @ 1140:1f90  (61 octets) ---- */

void __stdcall16far FUN_1140_1f90(undefined4 param_1,char param_2)

{
  int iVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  FUN_1158_1f7f((int)*(undefined4 *)(iVar1 + 0xd8),
                (int)((ulong)*(undefined4 *)(iVar1 + 0xd8) >> 0x10));
  FUN_1158_1f7f((int)*(undefined4 *)(iVar1 + 0xdc),
                (int)((ulong)*(undefined4 *)(iVar1 + 0xdc) >> 0x10));
  FUN_1138_2efc(iVar1,uVar2,0);
  if (param_2 != '\0') {
    FUN_1158_200f();
  }
  return;
}



/* ---- FUN_1140_1fcd @ 1140:1fcd  (27 octets) ---- */

void __stdcall16far FUN_1140_1fcd(undefined4 param_1)

{
  undefined2 uVar1;
  
  uVar1 = (undefined2)((ulong)param_1 >> 0x10);
  FUN_1138_3c88((int)param_1,uVar1);
  FUN_1140_2117((int)param_1,uVar1);
  return;
}



/* ---- FUN_1140_1fe8 @ 1140:1fe8  (145 octets) ---- */

void __stdcall16far
FUN_1140_1fe8(undefined4 param_1,undefined4 param_2,undefined2 param_3,undefined2 param_4)

{
  int iVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  int iVar5;
  undefined2 uVar6;
  undefined2 unaff_SS;
  undefined *puVar7;
  undefined local_a [8];
  
  uVar6 = (undefined2)((ulong)param_1 >> 0x10);
  iVar5 = (int)param_1;
  FUN_1140_2079(iVar5,uVar6);
  puVar7 = local_a;
  iVar1 = -*(int *)((int)*(undefined4 *)(iVar5 + 0xd8) + 10);
  iVar2 = -*(int *)((int)*(undefined4 *)(iVar5 + 0xdc) + 10);
  uVar4 = *(undefined2 *)((int)*(undefined4 *)(iVar5 + 0xd8) + 0xc);
  uVar3 = FUN_1138_18a9(iVar5,uVar6);
  uVar4 = FUN_1140_0e00(uVar3,uVar4);
  uVar3 = FUN_1138_18f4(iVar5,uVar6);
  uVar3 = FUN_1140_0e00(*(undefined2 *)((int)*(undefined4 *)(iVar5 + 0xdc) + 0xc),uVar3);
  FUN_1148_06ae(uVar3,uVar4,iVar2,iVar1);
  uVar4 = (undefined2)((ulong)param_2 >> 0x10);
  FUN_1158_161b(8,(int)param_2,uVar4,puVar7,unaff_SS);
  FUN_1138_35c2(iVar5,uVar6,(int)param_2,uVar4,param_3,param_4);
  return;
}



/* ---- FUN_1140_2079 @ 1140:2079  (45 octets) ---- */

void __stdcall16far FUN_1140_2079(undefined4 param_1)

{
  int iVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  if (*(char *)(iVar1 + 0xe1) == '\0') {
    FUN_1140_19fb((int)*(undefined4 *)(iVar1 + 0xd8),
                  (int)((ulong)*(undefined4 *)(iVar1 + 0xd8) >> 0x10));
    FUN_1140_19fb((int)*(undefined4 *)(iVar1 + 0xdc),
                  (int)((ulong)*(undefined4 *)(iVar1 + 0xdc) >> 0x10));
  }
  return;
}



/* ---- FUN_1140_20a6 @ 1140:20a6  (77 octets) ---- */

void __stdcall16far FUN_1140_20a6(undefined4 param_1,char param_2)

{
  int iVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  if (*(char *)(iVar1 + 0xe0) != param_2) {
    *(char *)(iVar1 + 0xe0) = param_2;
    if (param_2 == '\0') {
      FUN_1140_1e21((int)*(undefined4 *)(iVar1 + 0xd8),
                    (int)((ulong)*(undefined4 *)(iVar1 + 0xd8) >> 0x10),0);
      FUN_1140_1e21((int)*(undefined4 *)(iVar1 + 0xdc),
                    (int)((ulong)*(undefined4 *)(iVar1 + 0xdc) >> 0x10),0);
    }
    else {
      FUN_1140_2079(iVar1,uVar2);
    }
  }
  return;
}



/* ---- FUN_1140_20f3 @ 1140:20f3  (30 octets) ---- */

void __stdcall16far FUN_1140_20f3(undefined4 param_1)

{
  undefined2 *puVar1;
  
  puVar1 = (undefined2 *)((int)*(undefined4 *)*(undefined4 *)((int)param_1 + 0xd8) + 8);
  (*(code *)*puVar1)();
  return;
}



/* ---- FUN_1140_2117 @ 1140:2117  (233 octets) ---- */

void __stdcall16far FUN_1140_2117(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 uStack_a;
  
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  iVar2 = (int)param_1;
  if (*(char *)(iVar2 + 0xe2) == '\0') {
    uStack_a = 0x212f;
    cVar1 = FUN_1138_64fa();
    if (cVar1 != '\0') {
      uStack_a = DAT_1160_1858;
      DAT_1160_1858 = &uStack_a;
      *(undefined *)(iVar2 + 0xe2) = 1;
      cVar1 = FUN_1140_1bd0((int)*(undefined4 *)(iVar2 + 0xdc),
                            (int)((ulong)*(undefined4 *)(iVar2 + 0xdc) >> 0x10));
      if (cVar1 == '\0') {
        cVar1 = FUN_1140_1bd0((int)*(undefined4 *)(iVar2 + 0xd8),
                              (int)((ulong)*(undefined4 *)(iVar2 + 0xd8) >> 0x10));
        if (cVar1 == '\0') {
          FUN_1140_1e7e((int)*(undefined4 *)(iVar2 + 0xdc),
                        (int)((ulong)*(undefined4 *)(iVar2 + 0xdc) >> 0x10),0,0);
          FUN_1140_1e7e((int)*(undefined4 *)(iVar2 + 0xd8),
                        (int)((ulong)*(undefined4 *)(iVar2 + 0xd8) >> 0x10),0,1);
        }
        else {
          FUN_1140_1e7e((int)*(undefined4 *)(iVar2 + 0xdc),
                        (int)((ulong)*(undefined4 *)(iVar2 + 0xdc) >> 0x10),1,0);
          FUN_1140_1e7e((int)*(undefined4 *)(iVar2 + 0xd8),
                        (int)((ulong)*(undefined4 *)(iVar2 + 0xd8) >> 0x10),0,1);
        }
      }
      else {
        FUN_1140_1e7e((int)*(undefined4 *)(iVar2 + 0xd8),
                      (int)((ulong)*(undefined4 *)(iVar2 + 0xd8) >> 0x10),1,0);
        FUN_1140_1e7e((int)*(undefined4 *)(iVar2 + 0xdc),
                      (int)((ulong)*(undefined4 *)(iVar2 + 0xdc) >> 0x10),0,1);
      }
      DAT_1160_1858 = (undefined2 *)uStack_a;
      *(undefined *)(iVar2 + 0xe2) = 0;
      return;
    }
  }
  return;
}



/* ---- FUN_1140_2200 @ 1140:2200  (48 octets) ---- */

void __stdcall16far FUN_1140_2200(undefined4 param_1,undefined4 param_2)

{
  undefined2 uVar1;
  
  if (((int)param_2 != 0 || param_2._2_2_ != 0) && ((*(byte *)((int)param_2 + 0x18) & 1) == 0)) {
    uVar1 = (undefined2)((ulong)param_1 >> 0x10);
    if ((*(byte *)((int)param_1 + 0x18) & 1) == 0) {
      FUN_1140_2230((int)param_1,uVar1,(int)param_2,param_2._2_2_);
    }
  }
  return;
}



/* ---- FUN_1140_2230 @ 1140:2230  (436 octets) ---- */

void __stdcall16far FUN_1140_2230(undefined4 param_1,undefined4 *param_2)

{
  undefined2 *puVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  undefined2 unaff_SS;
  undefined4 uVar8;
  undefined4 *puVar9;
  undefined4 local_a;
  undefined4 local_6;
  
  if ((undefined4 *)param_2 != (undefined4 *)0x0 || param_2._2_2_ != 0) {
    puVar1 = (undefined2 *)((int)*param_2 + 0x34);
    puVar9 = (undefined4 *)param_2;
    iVar3 = param_2._2_2_;
    (*(code *)*puVar1)();
    FUN_1158_161b(8,&local_a,unaff_SS,puVar9,iVar3);
    uVar6 = (undefined2)((ulong)param_1 >> 0x10);
    iVar3 = (int)param_1;
    local_a._0_2_ = (int)local_a - *(int *)((int)*(undefined4 *)(iVar3 + 0xd8) + 0x11);
    local_6._0_2_ = (int)local_6 + *(int *)((int)*(undefined4 *)(iVar3 + 0xd8) + 0x11);
    local_a._2_2_ = local_a._2_2_ - *(int *)((int)*(undefined4 *)(iVar3 + 0xdc) + 0x11);
    local_6._2_2_ = local_6._2_2_ + *(int *)((int)*(undefined4 *)(iVar3 + 0xdc) + 0x11);
    uVar8 = FUN_1138_19d4((undefined4 *)param_2,param_2._2_2_,(int)local_a,local_a._2_2_);
    local_a = FUN_1138_1a06(iVar3,uVar6,uVar8);
    uVar8 = FUN_1138_19d4((undefined4 *)param_2,param_2._2_2_,(int)local_6,local_6._2_2_);
    local_6 = FUN_1138_1a06(iVar3,uVar6,uVar8);
    if ((int)local_a < 0) {
      uVar7 = (undefined2)((ulong)*(undefined4 *)(iVar3 + 0xd8) >> 0x10);
      iVar4 = (int)*(undefined4 *)(iVar3 + 0xd8);
      FUN_1140_1cd0(iVar4,uVar7,*(int *)(iVar4 + 10) + (int)local_a);
      lVar2 = local_a;
    }
    else {
      iVar4 = FUN_1138_18a9(iVar3,uVar6);
      lVar2 = local_a;
      if (iVar4 < (int)local_6) {
        iVar4 = FUN_1138_18a9(iVar3,uVar6);
        if (iVar4 < (int)local_6 - (int)local_a) {
          iVar4 = FUN_1138_18a9(iVar3,uVar6);
          local_6 = CONCAT22(local_6._2_2_,iVar4 + (int)local_a);
        }
        uVar8 = *(undefined4 *)(iVar3 + 0xd8);
        iVar4 = FUN_1138_18a9(iVar3,uVar6);
        uVar7 = (undefined2)((ulong)uVar8 >> 0x10);
        iVar5 = (int)uVar8;
        FUN_1140_1cd0(iVar5,uVar7,(*(int *)(iVar5 + 10) + (int)local_6) - iVar4);
        lVar2 = local_a;
      }
    }
    local_a._2_2_ = (int)((ulong)lVar2 >> 0x10);
    local_a = lVar2;
    if (lVar2 < 0) {
      uVar7 = (undefined2)((ulong)*(undefined4 *)(iVar3 + 0xdc) >> 0x10);
      iVar4 = (int)*(undefined4 *)(iVar3 + 0xdc);
      iVar3 = *(int *)(iVar4 + 10) + local_a._2_2_;
      FUN_1140_1cd0(iVar4,uVar7,iVar3);
    }
    else {
      iVar4 = FUN_1138_18f4(iVar3,uVar6);
      if (iVar4 < local_6._2_2_) {
        iVar4 = FUN_1138_18f4(iVar3,uVar6);
        if (iVar4 < local_6._2_2_ - local_a._2_2_) {
          iVar4 = FUN_1138_18f4(iVar3,uVar6);
          local_6 = CONCAT22(iVar4 + local_a._2_2_,(int)local_6);
        }
        uVar7 = (undefined2)((ulong)*(undefined4 *)(iVar3 + 0xdc) >> 0x10);
        iVar4 = (int)*(undefined4 *)(iVar3 + 0xdc);
        iVar3 = FUN_1138_18f4(iVar3,uVar6);
        FUN_1140_1cd0(iVar4,uVar7,(*(int *)(iVar4 + 10) + local_6._2_2_) - iVar3);
      }
    }
  }
  return;
}



/* ---- FUN_1140_23e4 @ 1140:23e4  (127 octets) ---- */

void __stdcall16far FUN_1140_23e4(undefined4 param_1,undefined2 param_2,undefined2 param_3)

{
  undefined2 uVar1;
  int iVar2;
  undefined2 uVar3;
  
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  iVar2 = (int)param_1;
  FUN_1140_1cd0((int)*(undefined4 *)(iVar2 + 0xd8),
                (int)((ulong)*(undefined4 *)(iVar2 + 0xd8) >> 0x10),0);
  FUN_1140_1cd0((int)*(undefined4 *)(iVar2 + 0xdc),
                (int)((ulong)*(undefined4 *)(iVar2 + 0xdc) >> 0x10),0);
  if (*(char *)(iVar2 + 0xe0) == '\0') {
    uVar1 = MULDIV(0x1140,param_2,param_3);
    FUN_1140_1e21((int)*(undefined4 *)(iVar2 + 0xd8),
                  (int)((ulong)*(undefined4 *)(iVar2 + 0xd8) >> 0x10),uVar1);
    uVar1 = MULDIV(0x1140,param_2,param_3);
    FUN_1140_1e21((int)*(undefined4 *)(iVar2 + 0xdc),
                  (int)((ulong)*(undefined4 *)(iVar2 + 0xdc) >> 0x10),uVar1);
  }
  return;
}



/* ---- FUN_1140_2463 @ 1140:2463  (39 octets) ---- */

void __stdcall16far FUN_1140_2463(undefined4 param_1,undefined2 param_2,undefined2 param_3)

{
  undefined2 uVar1;
  
  uVar1 = (undefined2)((ulong)param_1 >> 0x10);
  FUN_1140_23e4((int)param_1,uVar1,param_2,param_3);
  FUN_1138_5d9e((int)param_1,uVar1,param_2,param_3);
  return;
}



/* ---- FUN_1140_2490 @ 1140:2490  (61 octets) ---- */

void __cdecl16far FUN_1140_2490(undefined4 param_1,undefined2 param_2,undefined2 param_3)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uStack_a;
  undefined *puStack_8;
  undefined2 uStack_6;
  
  puStack_8 = &stack0xfffe;
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  *(undefined *)(iVar1 + 0xe1) = 1;
  uStack_6 = 0x248a;
  uStack_a = DAT_1160_1858;
  DAT_1160_1858 = &uStack_a;
  FUN_1138_4da8(iVar1,uVar2,param_2,param_3);
  DAT_1160_1858 = (undefined2 *)uStack_a;
  *(undefined *)(iVar1 + 0xe1) = 0;
  return;
}



/* ---- FUN_1140_24db @ 1140:24db  (52 octets) ---- */

void __stdcall16far FUN_1140_24db(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  
  uVar3 = (undefined2)((ulong)param_2 >> 0x10);
  iVar2 = (int)param_2;
  uVar4 = (undefined2)((ulong)param_1 >> 0x10);
  if (*(int *)(iVar2 + 6) == 0) {
    uVar1 = *(undefined4 *)((int)param_1 + 0xd8);
    FUN_1140_1c0a((int)uVar1,(int)((ulong)uVar1 >> 0x10),iVar2,uVar3);
  }
  else {
    FUN_1138_4b8c((int)param_1,uVar4,iVar2,uVar3);
  }
  return;
}



/* ---- FUN_1140_250f @ 1140:250f  (52 octets) ---- */

void __stdcall16far FUN_1140_250f(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  
  uVar3 = (undefined2)((ulong)param_2 >> 0x10);
  iVar2 = (int)param_2;
  uVar4 = (undefined2)((ulong)param_1 >> 0x10);
  if (*(int *)(iVar2 + 6) == 0) {
    uVar1 = *(undefined4 *)((int)param_1 + 0xdc);
    FUN_1140_1c0a((int)uVar1,(int)((ulong)uVar1 >> 0x10),iVar2,uVar3);
  }
  else {
    FUN_1138_4bb5((int)param_1,uVar4,iVar2,uVar3);
  }
  return;
}



/* ---- FUN_1140_2553 @ 1140:2553  (166 octets) ---- */

undefined4 * __stdcall16far FUN_1140_2553(undefined4 *param_1,char param_2,undefined2 param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined2 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined2 uStack_112;
  undefined *puStack_110;
  undefined4 *puStack_10e;
  undefined2 uStack_10a;
  undefined local_102 [256];
  
  if (param_2 != '\0') {
    puStack_10e = (undefined4 *)0x2565;
    FUN_1158_1fe2();
  }
  puStack_10e = (undefined4 *)param_3;
  puStack_110 = (undefined *)0x0;
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  puVar2 = (undefined4 *)param_1;
  uStack_112 = uVar3;
  FUN_1140_265b(puVar2);
  puStack_110 = (undefined *)0x1140;
  uStack_112 = 0x2582;
  puStack_10e = puVar2;
  puVar4 = (undefined *)FUN_1158_20dd();
  if (puVar4 != &UNK_1140_04fb) {
    *(byte *)((int)puVar2 + 0xf5) = *(byte *)((int)puVar2 + 0xf5) | 1;
    puStack_10e = (undefined4 *)0x2543;
    uStack_112 = DAT_1160_1858;
    puVar5 = local_102;
    DAT_1160_1858 = (undefined4 *)&uStack_112;
    puStack_110 = &stack0xfffe;
    FUN_1158_20ed((int)*param_1,(int)((ulong)*param_1 >> 0x10));
    puVar1 = puVar2;
    FUN_1148_0a78(puVar2,uVar3,puVar5);
    DAT_1160_1858 = puVar1;
    *(byte *)((int)puVar2 + 0xf5) = *(byte *)((int)puVar2 + 0xf5) & 0xfe;
    return (undefined4 *)0x25e2;
  }
  if (param_2 != '\0') {
    DAT_1160_1858 = (undefined4 *)uStack_10a;
  }
  return param_1;
}



/* ---- FUN_1140_265b @ 1140:265b  (328 octets) ---- */

undefined4 __stdcall16far
FUN_1140_265b(undefined4 param_1,char param_2,undefined2 param_3,undefined2 param_4)

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
  FUN_1140_1f05(iVar1,uVar3,0,param_3,param_4);
  *(undefined2 *)(iVar1 + 0x26) = 0xab;
  FUN_1138_177b(iVar1,uVar3,0);
  FUN_1138_179d(iVar1,uVar3,0);
  FUN_1138_17bf(iVar1,uVar3,0x140);
  FUN_1138_17e1(iVar1,uVar3,0xf0);
  FUN_1140_2f19(iVar1,uVar3,0);
  FUN_1138_1f32(iVar1,uVar3,0);
  FUN_1138_1e3e(iVar1,uVar3,0);
  FUN_1138_6322(iVar1,uVar3,1);
  *(undefined *)(iVar1 + 0xec) = 7;
  *(undefined *)(iVar1 + 0xed) = 2;
  *(undefined *)(iVar1 + 0xee) = 0;
  uVar5 = FUN_1128_640e(0x8fc,0x1128,CONCAT11(extraout_AH,1));
  *(undefined2 *)(iVar1 + 0xfc) = (int)uVar5;
  *(undefined2 *)(iVar1 + 0xfe) = (int)((ulong)uVar5 >> 0x10);
  uVar4 = (undefined2)((ulong)*(undefined4 *)(iVar1 + 0xfc) >> 0x10);
  iVar2 = (int)*(undefined4 *)(iVar1 + 0xfc);
  *(undefined2 *)(iVar2 + 4) = 0x2c41;
  *(undefined2 *)(iVar2 + 6) = 0x1140;
  *(int *)(iVar2 + 8) = iVar1;
  *(undefined2 *)(iVar2 + 10) = uVar3;
  uVar5 = FUN_1128_17b8(0x96,0x1138,0x2c01);
  *(undefined2 *)(iVar1 + 0xf8) = (int)uVar5;
  *(undefined2 *)(iVar1 + 0xfa) = (int)((ulong)uVar5 >> 0x10);
  FUN_1138_1364((int)*(undefined4 *)(iVar1 + 0xf8),
                (int)((ulong)*(undefined4 *)(iVar1 + 0xf8) >> 0x10),iVar1,uVar3);
  *(undefined2 *)(iVar1 + 0x114) = *(undefined2 *)((int)DAT_1160_2c2e + 0x1e);
  *(undefined *)(iVar1 + 0xf7) = 1;
  FUN_1140_619c((int)DAT_1160_2c2e,(int)((ulong)DAT_1160_2c2e >> 0x10),iVar1,uVar3);
  if (param_2 != '\0') {
    DAT_1160_1858 = uStack_a;
  }
  return param_1;
}



/* ---- FUN_1140_289a @ 1140:289a  (229 octets) ---- */

void __stdcall16far FUN_1140_289a(undefined4 param_1,char param_2,undefined4 param_3)

{
  undefined2 *puVar1;
  undefined4 *puVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined2 uVar7;
  
  iVar6 = (int)((ulong)param_1 >> 0x10);
  iVar5 = (int)param_1;
  uVar7 = 0x1138;
  FUN_1138_1632(iVar5,iVar6,param_2,(int)param_3,param_3._2_2_);
  if (param_2 == '\0') {
    if (((((*(byte *)(iVar5 + 0x18) & 1) == 0) &&
         (*(int *)(iVar5 + 0x100) == 0 && *(int *)(iVar5 + 0x102) == 0)) &&
        (*(int *)((int)param_3 + 6) == iVar6)) && (*(int *)((int)param_3 + 4) == iVar5)) {
      uVar7 = 0x1158;
      cVar3 = FUN_1158_2255(0x2ef,0x1130,(int)param_3,param_3._2_2_);
      if (cVar3 != '\0') {
        uVar7 = 0x1140;
        FUN_1140_36b2(iVar5,iVar6,(int)param_3,param_3._2_2_);
      }
    }
  }
  else if (param_2 == '\x01') {
    if ((*(int *)(iVar5 + 0x102) == param_3._2_2_) && (*(int *)(iVar5 + 0x100) == (int)param_3)) {
      uVar7 = 0x1140;
      FUN_1140_36b2(iVar5,iVar6,0,0);
    }
    if ((*(int *)(iVar5 + 0x112) == param_3._2_2_) && (*(int *)(iVar5 + 0x110) == (int)param_3)) {
      uVar7 = 0x1140;
      FUN_1140_367a(iVar5,iVar6,0,0);
    }
  }
  uVar4 = *(uint *)(iVar5 + 0x106) | *(uint *)(iVar5 + 0x108);
  if (uVar4 != 0) {
    puVar2 = (undefined4 *)*(undefined4 *)(iVar5 + 0x106);
    puVar1 = (undefined2 *)((int)*puVar2 + 8);
    (*(code *)*puVar1)(uVar7,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),
                       CONCAT11((char)(uVar4 >> 8),param_2),(int)param_3,param_3._2_2_);
  }
  return;
}



/* ---- FUN_1140_2b3a @ 1140:2b3a  (25 octets) ---- */

void __stdcall16far FUN_1140_2b3a(undefined4 param_1,undefined4 param_2)

{
  undefined2 uVar1;
  
  uVar1 = FUN_1148_3609((int)param_2,(int)((ulong)param_2 >> 0x10));
  *(undefined2 *)((int)param_1 + 0x122) = uVar1;
  return;
}



/* ---- FUN_1140_2b53 @ 1140:2b53  (30 octets) ---- */

void __stdcall16far FUN_1140_2b53(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_1140_2b73((int)param_1,(int)((ulong)param_1 >> 0x10));
  FUN_1148_44cb((int)param_2,(int)((ulong)param_2 >> 0x10),iVar1,iVar1 >> 0xf);
  return;
}



/* ---- FUN_1140_2b73 @ 1140:2b73  (40 octets) ---- */

undefined2 __stdcall16far FUN_1140_2b73(undefined4 param_1)

{
  undefined2 unaff_CS;
  undefined4 uVar1;
  undefined2 uVar2;
  
  uVar2 = 0x2b71;
  uVar1 = FUN_1140_33d5((int)param_1,(int)((ulong)param_1 >> 0x10));
  uVar2 = FUN_1128_204e(uVar1,uVar2,unaff_CS);
  return uVar2;
}



/* ---- FUN_1140_2b9b @ 1140:2b9b  (166 octets) ---- */

void __stdcall16far FUN_1140_2b9b(undefined4 param_1,undefined2 param_2,undefined2 param_3)

{
  char cVar1;
  undefined2 uVar2;
  int iVar3;
  undefined2 uVar4;
  
  uVar4 = (undefined2)((ulong)param_1 >> 0x10);
  iVar3 = (int)param_1;
  FUN_1140_23e4(iVar3,uVar4,param_2,param_3);
  FUN_1138_5d4a(iVar3,uVar4,param_2,param_3);
  cVar1 = FUN_1140_2ca4(iVar3,uVar4);
  if (cVar1 != '\0') {
    FUN_1138_18f4(iVar3,uVar4);
    FUN_1138_18a9(iVar3,uVar4);
    uVar2 = MULDIV(0x1138,param_2,param_3);
    FUN_1140_2ec9(iVar3,uVar4,uVar2);
    uVar2 = MULDIV(0x1140,param_2,param_3);
    FUN_1140_2ef1(iVar3,uVar4,uVar2);
  }
  FUN_1128_11cc((int)*(undefined4 *)(iVar3 + 0x34),
                (int)((ulong)*(undefined4 *)(iVar3 + 0x34) >> 0x10));
  uVar2 = MULDIV(0x1128,param_2,param_3);
  FUN_1128_11f5((int)*(undefined4 *)(iVar3 + 0x34),
                (int)((ulong)*(undefined4 *)(iVar3 + 0x34) >> 0x10),uVar2);
  return;
}



/* ---- FUN_1140_2c41 @ 1140:2c41  (99 octets) ---- */

void __stdcall16far FUN_1140_2c41(undefined4 *param_1)

{
  undefined2 *puVar1;
  undefined2 uVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  
  iVar5 = (int)((ulong)param_1 >> 0x10);
  puVar4 = (undefined4 *)param_1;
  uVar2 = FUN_1138_62b9(puVar4,iVar5);
  iVar3 = ISICONIC(0x1138,uVar2);
  if (iVar3 == 0) {
    uVar2 = (undefined2)((ulong)DAT_1160_2c2a >> 0x10);
    iVar3 = (int)DAT_1160_2c2a;
    if ((*(int *)(iVar3 + 0x22) == iVar5) && ((undefined4 *)*(int *)(iVar3 + 0x20) == puVar4)) {
      iVar3 = ISICONIC(0x14d0,*(undefined2 *)(iVar3 + 0x1a));
      if (iVar3 != 0) {
        INVALIDATERECT(0x14d0,1,0,0,*(undefined2 *)((int)DAT_1160_2c2a + 0x1a));
      }
    }
  }
  else {
    puVar1 = (undefined2 *)((int)*param_1 + 0x44);
    (*(code *)*puVar1)(0x14d0,puVar4,iVar5);
  }
  return;
}



/* ---- FUN_1140_2ca4 @ 1140:2ca4  (31 octets) ---- */

uint __stdcall16far FUN_1140_2ca4(undefined4 param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = FUN_1140_2cc3((int)param_1,(int)((ulong)param_1 >> 0x10));
  uVar2 = uVar1 & 0xff00;
  if ((char)uVar1 == '\0') {
    uVar2 = uVar2 + 1;
  }
  return uVar2;
}



/* ---- FUN_1140_2cc3 @ 1140:2cc3  (58 octets) ---- */

undefined __stdcall16far FUN_1140_2cc3(undefined4 param_1)

{
  undefined uVar1;
  int iVar2;
  undefined2 uVar3;
  
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  iVar2 = (int)param_1;
  if (((*(char *)(iVar2 + 0xe0) == '\0') &&
      (*(int *)((int)*(undefined4 *)(iVar2 + 0xd8) + 0xc) == 0)) &&
     (*(int *)((int)*(undefined4 *)(iVar2 + 0xdc) + 0xc) == 0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}



/* ---- FUN_1140_2cfd @ 1140:2cfd  (55 octets) ---- */

uint __stdcall16far FUN_1140_2cfd(undefined4 param_1)

{
  uint uVar1;
  int iVar2;
  undefined2 uVar3;
  
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  iVar2 = (int)param_1;
  uVar1 = FUN_1140_3495(iVar2,uVar3);
  if ((char)uVar1 != '\0') {
    uVar1 = uVar1 & 0xff00;
    if (*(char *)(iVar2 + 0xed) == '\x02') {
      uVar1 = uVar1 + 1;
    }
    if ((char)uVar1 != *(char *)(iVar2 + 0xe0)) {
      return CONCAT11((char)(uVar1 >> 8),1);
    }
  }
  return uVar1 & 0xff00;
}



/* ---- FUN_1140_2d34 @ 1140:2d34  (40 octets) ---- */

void __stdcall16far FUN_1140_2d34(undefined4 param_1)

{
  undefined2 *puVar1;
  
  if (*(int *)((int)param_1 + 0x14e) != 0) {
    puVar1 = (undefined2 *)((int)param_1 + 0x14c);
    (*(code *)*puVar1)();
  }
  return;
}



/* ---- FUN_1140_2d5c @ 1140:2d5c  (40 octets) ---- */

void __stdcall16far FUN_1140_2d5c(undefined4 param_1)

{
  undefined2 *puVar1;
  
  if (*(int *)((int)param_1 + 0x166) != 0) {
    puVar1 = (undefined2 *)((int)param_1 + 0x164);
    (*(code *)*puVar1)();
  }
  return;
}



/* ---- FUN_1140_2d84 @ 1140:2d84  (209 octets) ---- */

int __stdcall16far FUN_1140_2d84(undefined4 param_1,char param_2)

{
  int iVar1;
  int iVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  undefined local_5;
  undefined2 local_4;
  
  local_4 = 0;
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  iVar2 = (int)param_1;
  local_5 = *(byte *)(iVar2 + 0xed);
  if ((*(byte *)(iVar2 + 0x18) & 0x10) != 0) {
    local_5 = 2;
  }
  if (local_5 != 0) {
    local_4 = GETSYSTEMMETRICS();
    local_4 = local_4 * 2;
    if (local_5 == 3) {
      local_4 = local_4 + 2;
    }
    if (param_2 != '\0') {
      iVar1 = GETSYSTEMMETRICS(0x14d0,4);
      local_4 = local_4 + iVar1 + -1;
      if (*(int *)(iVar2 + 0x100) != 0 || *(int *)(iVar2 + 0x102) != 0) {
        iVar1 = GETSYSTEMMETRICS(0x14d0,0xf);
        local_4 = local_4 + iVar1 + 1;
      }
    }
  }
  uVar3 = FUN_1138_62b9(iVar2,uVar3);
  uVar4 = GETWINDOWLONG(0x1138,0xfff0);
  if ((*(uint *)(param_2 * 4 + 0x163a) & (uint)uVar4) != 0 ||
      (*(uint *)(param_2 * 4 + 0x163c) & (uint)((ulong)uVar4 >> 0x10)) != 0) {
    iVar2 = GETSYSTEMMETRICS(0x14d0,param_2 + 2,uVar3);
    local_4 = local_4 + iVar2;
    if ((local_5 != 0) && (local_5 < 3)) {
      local_4 = local_4 + -1;
    }
  }
  return local_4;
}



/* ---- FUN_1140_2e55 @ 1140:2e55  (116 octets) ---- */

void __stdcall16far FUN_1140_2e55(undefined4 param_1,undefined4 param_2)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined2 uVar5;
  undefined2 unaff_SS;
  undefined2 uVar6;
  undefined2 uVar7;
  undefined *puVar8;
  undefined local_a [8];
  
  uVar5 = (undefined2)((ulong)param_1 >> 0x10);
  iVar4 = (int)param_1;
  uVar1 = FUN_1138_62b9(iVar4,uVar5);
  iVar2 = ISICONIC(0x1138,uVar1);
  uVar1 = (undefined2)param_2;
  if (iVar2 == 0) {
    puVar8 = local_a;
    FUN_1138_6306(iVar4,uVar5);
    FUN_1158_161b(8,uVar1,(int)((ulong)param_2 >> 0x10),puVar8,unaff_SS);
  }
  else {
    uVar7 = 0;
    uVar6 = 0;
    iVar2 = FUN_1140_2d84(iVar4,uVar5,0);
    iVar2 = *(int *)(iVar4 + 0x22) - iVar2;
    iVar3 = FUN_1140_2d84(iVar4,uVar5,1);
    SETRECT(0x1140,*(int *)(iVar4 + 0x24) - iVar3,iVar2,uVar6,uVar7,uVar1);
  }
  return;
}



/* ---- FUN_1140_2ec9 @ 1140:2ec9  (40 octets) ---- */

void __stdcall16far FUN_1140_2ec9(undefined4 param_1,undefined2 param_2)

{
  int iVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  if ((*(byte *)(iVar1 + 0x28) & 8) == 0) {
    FUN_1138_18ce(iVar1,uVar2,param_2);
  }
  else {
    *(undefined2 *)(iVar1 + 0x11e) = param_2;
  }
  return;
}



/* ---- FUN_1140_2ef1 @ 1140:2ef1  (40 octets) ---- */

void __stdcall16far FUN_1140_2ef1(undefined4 param_1,undefined2 param_2)

{
  int iVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  if ((*(byte *)(iVar1 + 0x28) & 8) == 0) {
    FUN_1138_1919(iVar1,uVar2,param_2);
  }
  else {
    *(undefined2 *)(iVar1 + 0x120) = param_2;
  }
  return;
}



/* ---- FUN_1140_2f19 @ 1140:2f19  (57 octets) ---- */

void __stdcall16far FUN_1140_2f19(undefined4 param_1,char param_2)

{
  int iVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  if ((*(byte *)(iVar1 + 0xf5) & 1) == 0) {
    FUN_1138_1c77(iVar1,uVar2,param_2);
  }
  else if (param_2 == '\0') {
    *(byte *)(iVar1 + 0xf5) = *(byte *)(iVar1 + 0xf5) & 0xfd;
  }
  else {
    *(byte *)(iVar1 + 0xf5) = *(byte *)(iVar1 + 0xf5) | 2;
  }
  return;
}



/* ---- FUN_1140_2f91 @ 1140:2f91  (81 octets) ---- */

void __stdcall16far
FUN_1140_2f91(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined2 param_4,
             undefined2 param_5)

{
  undefined2 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  
  uVar4 = (undefined2)((ulong)param_3 >> 0x10);
  uVar5 = (undefined2)((ulong)param_2 >> 0x10);
  uVar6 = (undefined2)((ulong)param_1 >> 0x10);
  iVar3 = (int)param_1;
  FUN_1148_5038(iVar3,uVar6,(int)param_2,uVar5,(int)param_3,uVar4,param_4,param_5);
  if (*(int *)(iVar3 + 0x106) != 0 || *(int *)(iVar3 + 0x108) != 0) {
    puVar2 = (undefined4 *)*(undefined4 *)(iVar3 + 0x106);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x10);
    (*(code *)*puVar1)(0x1148,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),(int)param_2,uVar5,
                       (int)param_3,uVar4,param_4,param_5);
  }
  return;
}



/* ---- FUN_1140_2fe2 @ 1140:2fe2  (308 octets) ---- */

void __stdcall16far FUN_1140_2fe2(undefined4 param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  char cVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined2 unaff_CS;
  undefined4 uVar6;
  long lVar7;
  int local_4;
  
  uVar5 = (undefined2)((ulong)param_2 >> 0x10);
  piVar2 = (int *)param_2;
  iVar1 = *param_2;
  if (((iVar1 == 0xc) || (iVar1 == 0x85)) || (iVar1 == 0x86)) {
    cVar3 = FUN_1138_64fa((int)param_1,param_1._2_2_);
    if (((cVar3 != '\0') && (*(char *)((int)param_1 + 0xed) == '\x03')) &&
       ((*(char *)((int)param_1 + 0xa5) != '\0' &&
        (DAT_1160_1526 != (code *)0x0 || DAT_1160_1528 != 0)))) {
      uVar4 = FUN_1138_62b9((int)param_1,param_1._2_2_);
      uVar6 = (*DAT_1160_1526)(0x1138,piVar2[2],piVar2[3],piVar2[1],*param_2,uVar4);
      piVar2[4] = (int)uVar6;
      piVar2[5] = (int)((ulong)uVar6 >> 0x10);
      return;
    }
  }
  else if (((iVar1 == 6) || (iVar1 == 7)) || (iVar1 == 8)) {
    if (DAT_1160_1532 == '\0') {
      return;
    }
    if ((*param_2 == 7) && ((*(byte *)((int)param_1 + 0x18) & 0x10) == 0)) {
      local_4 = 0;
      if (*(char *)((int)param_1 + 0xf2) == '\x02') {
        unaff_CS = 0x1140;
        lVar7 = FUN_1140_32ae((int)param_1,param_1._2_2_);
        if (lVar7 != 0) {
          uVar6 = FUN_1140_32ae((int)param_1,param_1._2_2_);
          unaff_CS = 0x1138;
          local_4 = FUN_1138_62b9(uVar6);
        }
      }
      else if ((*(int *)((int)param_1 + 0xe4) != 0 || *(int *)((int)param_1 + 0xe6) != 0) &&
              ((*(int *)((int)param_1 + 0xe6) != param_1._2_2_ ||
               (*(int *)((int)param_1 + 0xe4) != (int)param_1)))) {
        unaff_CS = 0x1138;
        local_4 = FUN_1138_62b9((int)*(undefined4 *)((int)param_1 + 0xe4),
                                (int)((ulong)*(undefined4 *)((int)param_1 + 0xe4) >> 0x10));
      }
      if (local_4 != 0) {
        SETFOCUS(unaff_CS,local_4);
        return;
      }
    }
  }
  FUN_1138_4446((int)param_1,param_1._2_2_,piVar2,uVar5);
  return;
}



/* ---- FUN_1140_3116 @ 1140:3116  (77 octets) ---- */

void FUN_1140_3116(int param_1)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  int iVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined2 unaff_CS;
  undefined2 unaff_SS;
  undefined4 uVar6;
  
  puVar1 = (undefined2 *)*(undefined4 *)(param_1 + 10);
  uVar4 = (undefined2)((ulong)puVar1 >> 0x10);
  puVar2 = (undefined2 *)puVar1;
  uVar5 = (undefined2)((ulong)*(undefined4 *)(param_1 + 6) >> 0x10);
  iVar3 = (int)*(undefined4 *)(param_1 + 6);
  uVar6 = CALLWINDOWPROC(unaff_CS,puVar2[2],puVar2[3],puVar2[1],*puVar1,
                         *(undefined2 *)(iVar3 + 0x10e),*(undefined2 *)(iVar3 + 0x124));
  puVar2[4] = (int)uVar6;
  puVar2[5] = (int)((ulong)uVar6 >> 0x10);
  return;
}



/* ---- FUN_1140_3163 @ 1140:3163  (131 octets) ---- */

void __stdcall16far FUN_1140_3163(undefined4 *param_1,int *param_2)

{
  undefined2 *puVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined4 *puVar6;
  undefined2 uVar7;
  
  uVar4 = (undefined2)((ulong)param_2 >> 0x10);
  piVar3 = (int *)param_2;
  if (*param_2 == 0x84) {
    FUN_1140_3116(&stack0xfffe);
    if ((piVar3[5] == 0) && (piVar3[4] == 1)) {
      piVar3[4] = -1;
      piVar3[5] = -1;
    }
  }
  else if (*param_2 == 0x14) {
    uVar5 = (undefined2)((ulong)param_1 >> 0x10);
    puVar1 = (undefined2 *)((int)*param_1 + 0x34);
    puVar6 = (undefined4 *)param_1;
    uVar7 = uVar5;
    (*(code *)*puVar1)();
    uVar2 = *(undefined4 *)((int)(undefined4 *)param_1 + 0x9e);
    uVar5 = FUN_1128_16c0((int)uVar2,(int)((ulong)uVar2 >> 0x10));
    FILLRECT(0x1128,uVar5,puVar6,uVar7);
    piVar3[4] = 1;
    piVar3[5] = 0;
  }
  else {
    FUN_1140_3116(&stack0xfffe);
  }
  return;
}



/* ---- FUN_1140_31e6 @ 1140:31e6  (94 octets) ---- */

void __stdcall16far
FUN_1140_31e6(undefined4 param_1,int *param_2,undefined2 param_3,undefined2 param_4)

{
  int *piVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  
  uVar2 = (undefined2)((ulong)param_2 >> 0x10);
  piVar1 = (int *)param_2;
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  FUN_1140_1fe8((int)param_1,uVar3,piVar1,uVar2,param_3,param_4);
  if (*(int *)((int)param_1 + 0x10e) != 0) {
    SETWINDOWPOS(0x1140,0x100,piVar1[3] - piVar1[1],piVar1[2] - *param_2,piVar1[1],*param_2,1);
  }
  return;
}



/* ---- FUN_1140_3244 @ 1140:3244  (42 octets) ---- */

void __stdcall16far FUN_1140_3244(undefined4 param_1,char param_2)

{
  int iVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  if ((*(char *)(iVar1 + 0xec) != param_2) &&
     (*(char *)(iVar1 + 0xec) = param_2, (*(byte *)(iVar1 + 0x18) & 0x10) == 0)) {
    FUN_1138_405a(iVar1,uVar2);
  }
  return;
}



/* ---- FUN_1140_326e @ 1140:326e  (64 octets) ---- */

void __stdcall16far FUN_1140_326e(undefined4 param_1,char param_2)

{
  uint in_AX;
  uint uVar1;
  int iVar2;
  undefined2 uVar3;
  
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  iVar2 = (int)param_1;
  if (*(char *)(iVar2 + 0xed) != param_2) {
    *(char *)(iVar2 + 0xed) = param_2;
    uVar1 = in_AX & 0xff00;
    if (*(char *)(iVar2 + 0xed) == '\x02') {
      uVar1 = uVar1 + 1;
    }
    FUN_1140_20a6(iVar2,uVar3,uVar1);
    if ((*(byte *)(iVar2 + 0x18) & 0x10) == 0) {
      FUN_1138_405a(iVar2,uVar3);
    }
  }
  return;
}



/* ---- FUN_1140_32ae @ 1140:32ae  (72 octets) ---- */

undefined4 __stdcall16far FUN_1140_32ae(undefined4 param_1)

{
  undefined2 uVar1;
  undefined2 unaff_CS;
  undefined4 uVar2;
  
  uVar1 = (undefined2)((ulong)param_1 >> 0x10);
  uVar2 = 0;
  if ((*(char *)((int)param_1 + 0xf2) == '\x02') && (uVar2 = 0, *(int *)((int)param_1 + 0x10e) != 0)
     ) {
    uVar1 = SENDMESSAGE(unaff_CS,0,0,0,0x229);
    uVar2 = FUN_1138_0b4f(uVar1);
  }
  return uVar2;
}



/* ---- FUN_1140_32f6 @ 1140:32f6  (102 octets) ---- */

int __stdcall16far FUN_1140_32f6(undefined4 param_1)

{
  int iVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  undefined2 local_6;
  undefined2 local_4;
  
  local_4 = 0;
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  if ((*(char *)((int)param_1 + 0xf2) == '\x02') && (*(int *)((int)param_1 + 0x10e) != 0)) {
    iVar1 = FUN_1140_60f4((int)DAT_1160_2c2e,(int)((ulong)DAT_1160_2c2e >> 0x10));
    if (-1 < iVar1 + -1) {
      local_6 = 0;
      while( true ) {
        uVar3 = FUN_1140_60cf((int)DAT_1160_2c2e,(int)((ulong)DAT_1160_2c2e >> 0x10),local_6);
        if (*(char *)((int)uVar3 + 0xf2) == '\x01') {
          local_4 = local_4 + 1;
        }
        if (local_6 == iVar1 + -1) break;
        local_6 = local_6 + 1;
      }
    }
  }
  return local_4;
}



/* ---- FUN_1140_335c @ 1140:335c  (121 octets) ---- */

undefined4 __stdcall16far FUN_1140_335c(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  int local_8;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  if ((*(char *)((int)param_1 + 0xf2) == '\x02') && (*(int *)((int)param_1 + 0x10e) != 0)) {
    iVar1 = FUN_1140_60f4((int)DAT_1160_2c2e,(int)((ulong)DAT_1160_2c2e >> 0x10));
    if (-1 < iVar1 + -1) {
      local_8 = 0;
      while( true ) {
        uVar3 = FUN_1140_60cf((int)DAT_1160_2c2e,(int)((ulong)DAT_1160_2c2e >> 0x10),local_8);
        if ((*(char *)((int)uVar3 + 0xf2) == '\x01') && (param_2 = param_2 + -1, param_2 < 0)) {
          return uVar3;
        }
        if (local_8 == iVar1 + -1) break;
        local_8 = local_8 + 1;
      }
    }
  }
  return 0;
}



/* ---- FUN_1140_33d5 @ 1140:33d5  (33 octets) ---- */

undefined4 __stdcall16far FUN_1140_33d5(undefined4 param_1)

{
  undefined2 uVar1;
  
  uVar1 = (undefined2)((ulong)param_1 >> 0x10);
  return CONCAT22(*(undefined2 *)((int)param_1 + 0xfa),*(undefined2 *)((int)param_1 + 0xf8));
}



/* ---- FUN_1140_33f6 @ 1140:33f6  (89 octets) ---- */

void __stdcall16far FUN_1140_33f6(undefined4 param_1)

{
  undefined2 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined2 uVar5;
  undefined2 unaff_CS;
  
  iVar4 = (int)((ulong)param_1 >> 0x10);
  iVar2 = (int)param_1;
  puVar1 = (undefined2 *)((int)*(undefined4 *)*(undefined4 *)(iVar2 + 0xfc) + 8);
  (*(code *)*puVar1)();
  if (*(char *)(iVar2 + 0xee) == '\x01') {
    unaff_CS = 0x1138;
    FUN_1138_22c6(iVar2,iVar4);
  }
  uVar5 = (undefined2)((ulong)DAT_1160_2c2a >> 0x10);
  iVar3 = (int)DAT_1160_2c2a;
  if ((iVar4 == *(int *)(iVar3 + 0x22)) && (iVar2 == *(int *)(iVar3 + 0x20))) {
    INVALIDATERECT(unaff_CS,1,0,0,*(undefined2 *)(iVar3 + 0x1a));
  }
  return;
}



/* ---- FUN_1140_344f @ 1140:344f  (70 octets) ---- */

undefined __stdcall16far FUN_1140_344f(undefined4 param_1)

{
  int iVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  if (((*(char *)(iVar1 + 0xa5) == '\0') ||
      ((*(int *)(iVar1 + 0x3a) == -1 && (*(int *)(iVar1 + 0x38) == -0x10)))) &&
     ((*(char *)(iVar1 + 0xa5) != '\0' ||
      ((*(int *)(iVar1 + 0x3a) == -1 && (*(int *)(iVar1 + 0x38) == -6)))))) {
    return 0;
  }
  return 1;
}



/* ---- FUN_1140_3495 @ 1140:3495  (27 octets) ---- */

uint __stdcall16far FUN_1140_3495(undefined4 param_1)

{
  uint in_AX;
  uint uVar1;
  
  uVar1 = in_AX & 0xff00;
  if (*(char *)((int)param_1 + 0x2f) == '\0') {
    uVar1 = uVar1 + 1;
  }
  return uVar1;
}



/* ---- FUN_1140_34b0 @ 1140:34b0  (53 octets) ---- */

undefined2 __stdcall16far FUN_1140_34b0(undefined4 param_1)

{
  undefined4 uVar1;
  char cVar2;
  int iVar3;
  undefined2 uVar4;
  
  uVar4 = (undefined2)((ulong)param_1 >> 0x10);
  cVar2 = FUN_1140_3495((int)param_1,uVar4);
  if ((cVar2 != '\0') &&
     (uVar1 = *(undefined4 *)((int)param_1 + 0xfc),
     iVar3 = FUN_1128_6594((int)uVar1,(int)((ulong)uVar1 >> 0x10)), iVar3 != 0)) {
    return 1;
  }
  return 0;
}



/* ---- FUN_1140_34e5 @ 1140:34e5  (160 octets) ---- */

void __stdcall16far FUN_1140_34e5(undefined4 param_1,char param_2)

{
  char cVar1;
  int iVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  iVar2 = (int)param_1;
  if (*(char *)(iVar2 + 0xf2) != param_2) {
    if ((param_2 == '\x01') && (*(char *)(iVar2 + 0xf3) == '\0')) {
      FUN_1140_3865(iVar2,uVar3,1);
    }
    if ((*(byte *)(iVar2 + 0x18) & 0x10) == 0) {
      FUN_1138_3fee(iVar2,uVar3);
    }
    cVar1 = *(char *)(iVar2 + 0xf2);
    *(char *)(iVar2 + 0xf2) = param_2;
    if (((param_2 == '\x02') || (cVar1 == '\x02')) && (*(char *)(iVar2 + 0xa5) == '\0')) {
      uVar4 = FUN_1140_391f(iVar2,uVar3);
      FUN_1138_1ed5(iVar2,uVar3,uVar4);
    }
    if ((*(byte *)(iVar2 + 0x18) & 0x10) == 0) {
      FUN_1138_41a5(iVar2,uVar3);
    }
    if (param_2 == '\x01') {
      FUN_1140_2f19(iVar2,uVar3,1);
    }
  }
  return;
}



/* ---- FUN_1140_3585 @ 1140:3585  (199 octets) ---- */

void __stdcall16far FUN_1140_3585(undefined4 param_1)

{
  undefined2 *puVar1;
  undefined2 uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  undefined2 uVar8;
  uint local_4;
  
  uVar6 = (undefined2)((ulong)param_1 >> 0x10);
  iVar5 = (int)param_1;
  if ((*(char *)(iVar5 + 0xf2) == '\x02') && (*(int *)(iVar5 + 0x10e) != 0)) {
    local_4 = 0;
    if (*(int *)(iVar5 + 0x100) != 0 || *(int *)(iVar5 + 0x102) != 0) {
      puVar1 = (undefined2 *)((int)*(undefined4 *)*(undefined4 *)(iVar5 + 0x100) + 0x34);
      local_4 = (*(code *)*puVar1)();
    }
    if (*(int *)(iVar5 + 0x110) != 0 || *(int *)(iVar5 + 0x112) != 0) {
      FUN_1130_105d((int)*(undefined4 *)(iVar5 + 0x110),
                    (int)((ulong)*(undefined4 *)(iVar5 + 0x110) >> 0x10));
    }
    uVar2 = FUN_1138_62b9(iVar5,uVar6);
    uVar3 = GETMENU(0x1138,uVar2);
    uVar8 = 0x230;
    uVar7 = 0;
    uVar2 = 0;
    uVar4 = FUN_1158_1739(0,0x230,*(undefined2 *)(iVar5 + 0x10e));
    SENDMESSAGE(0x1158,local_4 | uVar4,uVar2,uVar7,uVar8);
    if (uVar3 != local_4) {
      uVar6 = FUN_1138_62b9(iVar5,uVar6);
      DRAWMENUBAR(0x1138,uVar6);
    }
  }
  return;
}



/* ---- FUN_1140_364c @ 1140:364c  (46 octets) ---- */

void __stdcall16far FUN_1140_364c(undefined4 param_1,undefined4 param_2)

{
  undefined2 uVar1;
  
  uVar1 = (undefined2)((ulong)param_1 >> 0x10);
  *(int *)((int)param_1 + 0x116) = (int)param_2;
  *(int *)((int)param_1 + 0x118) = param_2._2_2_;
  if ((int)param_2 != 0 || param_2._2_2_ != 0) {
    FUN_1130_129b((int)param_2,param_2._2_2_,0);
  }
  return;
}



/* ---- FUN_1140_367a @ 1140:367a  (56 octets) ---- */

void __stdcall16far FUN_1140_367a(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  if ((*(int *)(iVar1 + 0x112) != param_3) || (*(int *)(iVar1 + 0x110) != param_2)) {
    *(int *)(iVar1 + 0x110) = param_2;
    *(int *)(iVar1 + 0x112) = param_3;
    FUN_1140_3585(iVar1,uVar2);
  }
  return;
}



/* ---- FUN_1140_36b2 @ 1140:36b2  (351 octets) ---- */

void __stdcall16far FUN_1140_36b2(undefined4 param_1,undefined4 param_2)

{
  undefined2 *puVar1;
  undefined4 *puVar2;
  char cVar3;
  undefined2 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined2 uVar8;
  
  uVar8 = (undefined2)((ulong)param_1 >> 0x10);
  iVar7 = (int)param_1;
  if (*(int *)(iVar7 + 0x100) != 0 || *(int *)(iVar7 + 0x102) != 0) {
    FUN_1130_1d77((int)*(undefined4 *)(iVar7 + 0x100),
                  (int)((ulong)*(undefined4 *)(iVar7 + 0x100) >> 0x10),0);
  }
  *(int *)(iVar7 + 0x100) = (int)param_2;
  *(int *)(iVar7 + 0x102) = param_2._2_2_;
  if (((int)param_2 == 0 && param_2._2_2_ == 0) ||
     (((*(byte *)(iVar7 + 0x18) & 0x10) == 0 && (*(char *)(iVar7 + 0xed) == '\x03')))) {
    cVar3 = FUN_1138_64fa(iVar7,uVar8);
    if (cVar3 != '\0') {
      FUN_1138_62b9(iVar7,uVar8);
      SETMENU(0x1138,0);
    }
  }
  else if (((*(char *)((int)*(undefined4 *)(iVar7 + 0x100) + 0x2a) == '\0') &&
           (*(char *)(iVar7 + 0xf2) != '\x01')) || ((*(byte *)(iVar7 + 0x18) & 0x10) != 0)) {
    cVar3 = FUN_1138_64fa(iVar7,uVar8);
    if (cVar3 != '\0') {
      puVar2 = (undefined4 *)*(undefined4 *)(iVar7 + 0x100);
      puVar1 = (undefined2 *)((int)*puVar2 + 0x34);
      uVar4 = (*(code *)*puVar1)(0x1138,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10));
      iVar5 = FUN_1138_62b9(iVar7,uVar8);
      iVar6 = GETMENU(0x1138,iVar5,uVar4);
      if (iVar6 != iVar5) {
        uVar4 = FUN_1138_62b9(iVar7,uVar8);
        puVar2 = (undefined4 *)*(undefined4 *)(iVar7 + 0x100);
        puVar1 = (undefined2 *)((int)*puVar2 + 0x34);
        uVar4 = (*(code *)*puVar1)(0x1138,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),uVar4);
        SETMENU(0x1138,uVar4);
      }
      uVar4 = FUN_1138_62b9(iVar7,uVar8);
      FUN_1130_1d77((int)param_2,param_2._2_2_,uVar4);
    }
  }
  else if ((*(char *)(iVar7 + 0xf2) != '\x01') &&
          (cVar3 = FUN_1138_64fa(iVar7,uVar8), cVar3 != '\0')) {
    FUN_1138_62b9(iVar7,uVar8);
    SETMENU(0x1138,0);
  }
  if (*(char *)(iVar7 + 0xf1) != '\0') {
    FUN_1140_44df(iVar7,uVar8,1);
  }
  FUN_1140_3585(iVar7,uVar8);
  return;
}



/* ---- FUN_1140_3811 @ 1140:3811  (39 octets) ---- */

int __stdcall16far FUN_1140_3811(undefined4 param_1)

{
  undefined2 local_4;
  
  local_4 = *(int *)((int)param_1 + 0x114);
  if (local_4 == 0) {
    local_4 = *(int *)((int)DAT_1160_2c2e + 0x1e);
  }
  return local_4;
}



/* ---- FUN_1140_3838 @ 1140:3838  (45 octets) ---- */

void __stdcall16far FUN_1140_3838(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = FUN_1140_3811((int)param_1,uVar2);
  if ((iVar1 != param_2) && ((param_2 == 0 || (0x23 < param_2)))) {
    *(int *)((int)param_1 + 0x114) = param_2;
  }
  return;
}



/* ---- FUN_1140_3865 @ 1140:3865  (42 octets) ---- */

void __stdcall16far FUN_1140_3865(undefined4 param_1,char param_2)

{
  int iVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  if ((*(char *)(iVar1 + 0xf3) != param_2) &&
     (*(char *)(iVar1 + 0xf3) = param_2, (*(byte *)(iVar1 + 0x18) & 0x10) == 0)) {
    FUN_1138_405a(iVar1,uVar2);
  }
  return;
}



/* ---- FUN_1140_388f @ 1140:388f  (28 octets) ---- */

uint __stdcall16far FUN_1140_388f(undefined4 param_1)

{
  uint in_AX;
  uint uVar1;
  
  uVar1 = in_AX & 0xff00;
  if (*(int *)((int)param_1 + 0x114) != 0) {
    uVar1 = uVar1 + 1;
  }
  return uVar1;
}



/* ---- FUN_1140_38ab @ 1140:38ab  (54 octets) ---- */

void __stdcall16far FUN_1140_38ab(undefined4 param_1,char param_2)

{
  char cVar1;
  int iVar2;
  undefined2 uVar3;
  
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  iVar2 = (int)param_1;
  cVar1 = FUN_1140_388f(iVar2,uVar3);
  if ((cVar1 != param_2) && (*(undefined2 *)(iVar2 + 0x114) = 0, param_2 != '\0')) {
    *(undefined2 *)(iVar2 + 0x114) = *(undefined2 *)((int)DAT_1160_2c2e + 0x1e);
  }
  return;
}



/* ---- FUN_1140_38e1 @ 1140:38e1  (62 octets) ---- */

void __stdcall16far FUN_1140_38e1(undefined4 param_1,undefined2 param_2,undefined2 param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined2 uVar3;
  
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  iVar2 = (int)param_1;
  FUN_1138_56ff(iVar2,uVar3,param_2,param_3);
  if (*(int *)(iVar2 + 0xf8) != 0 || *(int *)(iVar2 + 0xfa) != 0) {
    uVar1 = *(undefined4 *)((int)*(undefined4 *)(iVar2 + 0xf8) + 0xf);
    FUN_1128_1684((int)uVar1,(int)((ulong)uVar1 >> 0x10),*(undefined2 *)(iVar2 + 0x38),
                  *(undefined2 *)(iVar2 + 0x3a));
  }
  return;
}



/* ---- FUN_1140_391f @ 1140:391f  (45 octets) ---- */

undefined4 __stdcall16far FUN_1140_391f(undefined4 param_1)

{
  undefined2 local_6;
  
  local_6 = 0xfffa;
  if (*(char *)((int)param_1 + 0xf2) == '\x02') {
    local_6 = 0xfff3;
  }
  return CONCAT22(0xffff,local_6);
}



/* ---- FUN_1140_394c @ 1140:394c  (105 octets) ---- */

void __stdcall16far FUN_1140_394c(undefined4 param_1,undefined2 param_2,undefined2 param_3)

{
  int iVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  FUN_1138_57d8(iVar1,uVar2,param_2,param_3);
  if (*(char *)(iVar1 + 0xa5) == '\0') {
    if ((*(int *)(iVar1 + 0x3a) == -1) && (*(int *)(iVar1 + 0x38) == -0x10)) {
      uVar3 = FUN_1140_391f(iVar1,uVar2);
      FUN_1138_1ed5(iVar1,uVar2,uVar3);
    }
  }
  else {
    uVar3 = FUN_1140_391f(iVar1,uVar2);
    if (((int)((ulong)uVar3 >> 0x10) == *(int *)(iVar1 + 0x3a)) &&
       ((int)uVar3 == *(int *)(iVar1 + 0x38))) {
      FUN_1138_1ed5(iVar1,uVar2,0xfff0,0xffff);
    }
  }
  return;
}



/* ---- FUN_1140_39b5 @ 1140:39b5  (58 octets) ---- */

void __stdcall16far FUN_1140_39b5(undefined4 param_1,undefined2 param_2,undefined2 param_3)

{
  int iVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  FUN_1138_573a(iVar1,uVar2,param_2,param_3);
  if (*(int *)(iVar1 + 0xf8) != 0 || *(int *)(iVar1 + 0xfa) != 0) {
    FUN_1128_2099((int)*(undefined4 *)(iVar1 + 0xf8),
                  (int)((ulong)*(undefined4 *)(iVar1 + 0xf8) >> 0x10),*(undefined2 *)(iVar1 + 0x34),
                  *(undefined2 *)(iVar1 + 0x36));
  }
  return;
}



/* ---- FUN_1140_39ef @ 1140:39ef  (37 octets) ---- */

void __stdcall16far FUN_1140_39ef(undefined4 param_1)

{
  int iVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  FUN_1140_3585(iVar1,uVar2);
  FUN_1140_36b2(iVar1,uVar2,*(undefined2 *)(iVar1 + 0x100),*(undefined2 *)(iVar1 + 0x102));
  return;
}



/* ---- FUN_1140_3a14 @ 1140:3a14  (68 octets) ---- */

void __stdcall16far FUN_1140_3a14(undefined4 param_1,char param_2)

{
  int iVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  if (((*(char *)(iVar1 + 0xee) != param_2) &&
      (*(char *)(iVar1 + 0xee) = param_2, (*(byte *)(iVar1 + 0x18) & 0x10) == 0)) &&
     (*(char *)(iVar1 + 0xa7) != '\0')) {
    FUN_1138_62b9(iVar1,uVar2);
    SHOWWINDOW(0x1138,*(undefined2 *)(param_2 * 2 + 0x1642));
  }
  return;
}



/* ---- FUN_1140_3a58 @ 1140:3a58  (652 octets) ---- */

void __stdcall16far FUN_1140_3a58(undefined4 param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  char local_4;
  byte local_3;
  
  uVar4 = (undefined2)((ulong)param_2 >> 0x10);
  iVar2 = (int)param_2;
  uVar5 = (undefined2)((ulong)param_1 >> 0x10);
  iVar3 = (int)param_1;
  FUN_1138_3b29(iVar3,uVar5,iVar2,uVar4);
  if (*(int *)(iVar3 + 0x1a) == 0 && *(int *)(iVar3 + 0x1c) == 0) {
    *(undefined2 *)(iVar2 + 0x14) = *(undefined2 *)((int)DAT_1160_2c2a + 0x1a);
    uVar1 = *(uint *)(iVar2 + 6);
    *(undefined2 *)(iVar2 + 4) = *(undefined2 *)(iVar2 + 4);
    *(uint *)(iVar2 + 6) = uVar1 & 0xbffc;
  }
  *(undefined2 *)(iVar2 + 0x1a) = 8;
  if ((*(byte *)(iVar3 + 0x18) & 0x10) == 0) {
    if ((*(byte *)(iVar3 + 0xf3) != 0) && (*(byte *)(iVar3 + 0xf3) < 3)) {
      *(undefined2 *)(iVar2 + 0xc) = 0x8000;
      *(undefined2 *)(iVar2 + 0xe) = 0x8000;
    }
    local_3 = *(byte *)(iVar3 + 0xec);
    local_4 = *(char *)(iVar3 + 0xed);
    if ((*(char *)(iVar3 + 0xf2) == '\x01') && ((local_4 == '\0' || (local_4 == '\x03')))) {
      local_4 = '\x02';
    }
    if (local_4 == '\0') {
      if (*(int *)(iVar3 + 0x1a) == 0 && *(int *)(iVar3 + 0x1c) == 0) {
        uVar1 = *(uint *)(iVar2 + 6);
        *(undefined2 *)(iVar2 + 4) = *(undefined2 *)(iVar2 + 4);
        *(uint *)(iVar2 + 6) = uVar1 | 0x8000;
      }
      local_3 = 0;
    }
    else if (local_4 == '\x01') {
      uVar1 = *(uint *)(iVar2 + 6);
      *(undefined2 *)(iVar2 + 4) = *(undefined2 *)(iVar2 + 4);
      *(uint *)(iVar2 + 6) = uVar1 | 0xc0;
    }
    else if (local_4 == '\x02') {
      uVar1 = *(uint *)(iVar2 + 6);
      *(undefined2 *)(iVar2 + 4) = *(undefined2 *)(iVar2 + 4);
      *(uint *)(iVar2 + 6) = uVar1 | 0xc4;
      if ((*(char *)(iVar3 + 0xf3) == '\x01') || (*(char *)(iVar3 + 0xf3) == '\x03')) {
        *(undefined2 *)(iVar2 + 0x10) = 0x8000;
        *(undefined2 *)(iVar2 + 0x12) = 0x8000;
      }
    }
    else if (local_4 == '\x03') {
      uVar1 = *(uint *)(iVar2 + 6);
      *(uint *)(iVar2 + 4) = *(uint *)(iVar2 + 4) | 0x80;
      *(uint *)(iVar2 + 6) = uVar1 | 0xc0;
      *(undefined2 *)(iVar2 + 8) = 1;
      *(undefined2 *)(iVar2 + 10) = 0;
      local_3 = local_3 & 1;
      *(undefined2 *)(iVar2 + 0x1a) = 0x2808;
    }
    if (local_4 == '\x03') {
      *(undefined *)(iVar3 + 0xee) = 0;
    }
    else {
      if ((*(char *)(iVar3 + 0xf2) != '\x01') || ((local_3 & 1) != 0)) {
        if ((local_3 & 2) != 0) {
          uVar1 = *(uint *)(iVar2 + 6);
          *(undefined2 *)(iVar2 + 4) = *(undefined2 *)(iVar2 + 4);
          *(uint *)(iVar2 + 6) = uVar1 | 2;
        }
        if ((local_3 & 4) != 0) {
          uVar1 = *(uint *)(iVar2 + 6);
          *(undefined2 *)(iVar2 + 4) = *(undefined2 *)(iVar2 + 4);
          *(uint *)(iVar2 + 6) = uVar1 | 1;
        }
      }
      if (*(char *)(iVar3 + 0xee) == '\x01') {
        uVar1 = *(uint *)(iVar2 + 6);
        *(undefined2 *)(iVar2 + 4) = *(undefined2 *)(iVar2 + 4);
        *(uint *)(iVar2 + 6) = uVar1 | 0x2000;
      }
      else if (*(char *)(iVar3 + 0xee) == '\x02') {
        uVar1 = *(uint *)(iVar2 + 6);
        *(undefined2 *)(iVar2 + 4) = *(undefined2 *)(iVar2 + 4);
        *(uint *)(iVar2 + 6) = uVar1 | 0x100;
      }
    }
    if ((local_3 & 1) != 0) {
      uVar1 = *(uint *)(iVar2 + 6);
      *(undefined2 *)(iVar2 + 4) = *(undefined2 *)(iVar2 + 4);
      *(uint *)(iVar2 + 6) = uVar1 | 8;
    }
    if (*(char *)(iVar3 + 0xf2) == '\x01') {
      *(undefined2 *)(iVar2 + 0x1c) = 0x55c;
      *(undefined2 *)(iVar2 + 0x1e) = 0x14d0;
    }
  }
  else {
    uVar1 = *(uint *)(iVar2 + 6);
    *(undefined2 *)(iVar2 + 4) = *(undefined2 *)(iVar2 + 4);
    *(uint *)(iVar2 + 6) = uVar1 | 0xcf;
  }
  return;
}



/* ---- FUN_1140_3ce4 @ 1140:3ce4  (264 octets) ---- */

void __stdcall16far FUN_1140_3ce4(undefined4 param_1)

{
  undefined2 uVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  int iVar4;
  undefined2 uVar5;
  undefined2 unaff_SS;
  undefined4 uVar6;
  undefined2 uVar7;
  undefined2 uVar8;
  undefined2 uVar9;
  undefined2 uVar10;
  undefined2 uVar11;
  undefined2 uVar12;
  undefined2 uVar13;
  undefined2 uVar14;
  undefined2 local_6;
  undefined2 local_4;
  
  uVar5 = (undefined2)((ulong)param_1 >> 0x10);
  iVar4 = (int)param_1;
  FUN_1140_1fcd(iVar4,uVar5);
  if ((*(byte *)(iVar4 + 0x18) & 0x10) == 0) {
    if (*(char *)(iVar4 + 0xf2) == '\x02') {
      local_4 = 0xff00;
      local_6 = 0;
      if (*(int *)(iVar4 + 0x110) != 0 || *(int *)(iVar4 + 0x112) != 0) {
        local_6 = FUN_1130_105d((int)*(undefined4 *)(iVar4 + 0x110),
                                (int)((ulong)*(undefined4 *)(iVar4 + 0x110) >> 0x10));
      }
      uVar14 = 0x1160;
      uVar13 = 0x1648;
      uVar12 = 0;
      uVar11 = 0;
      uVar10 = 0x5633;
      uVar9 = 1;
      uVar8 = 0;
      uVar7 = 0;
      uVar1 = FUN_1138_18a9(iVar4,uVar5);
      uVar2 = FUN_1138_18f4(iVar4,uVar5);
      uVar3 = FUN_1138_62b9(iVar4,uVar5);
      uVar1 = CREATEWINDOW(0x1138,&local_6,unaff_SS,DAT_1160_188c,0,uVar3,uVar2,uVar1,uVar7,uVar8,
                           uVar9,uVar10,uVar11,uVar12,uVar13,uVar14);
      *(undefined2 *)(iVar4 + 0x10e) = uVar1;
      local_6 = uVar5;
      uVar6 = FUN_1140_1489(0x3163,0x1140,iVar4);
      *(undefined2 *)(iVar4 + 0x128) = (int)uVar6;
      *(undefined2 *)(iVar4 + 0x12a) = (int)((ulong)uVar6 >> 0x10);
      local_6 = *(undefined2 *)(iVar4 + 0x10e);
      uVar6 = GETWINDOWLONG(0x1140,0xfffc);
      *(undefined2 *)(iVar4 + 0x124) = (int)uVar6;
      *(undefined2 *)(iVar4 + 0x126) = (int)((ulong)uVar6 >> 0x10);
      SETWINDOWLONG(0x14d0,*(undefined2 *)(iVar4 + 0x128),*(undefined2 *)(iVar4 + 0x12a),0xfffc);
    }
    else if (*(char *)(iVar4 + 0xf2) == '\x03') {
      FUN_1138_62b9(iVar4,uVar5);
      SETWINDOWPOS(0x1138,0x13,0,0,0,0,0xffff);
    }
  }
  return;
}



/* ---- FUN_1140_3eed @ 1140:3eed  (76 octets) ---- */

void __stdcall16far FUN_1140_3eed(undefined4 param_1)

{
  undefined2 uVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  iVar2 = (int)param_1;
  if ((*(byte *)(iVar2 + 0xf5) & 0x10) == 0) {
    FUN_1138_3eed(iVar2,uVar3);
  }
  else {
    uVar4 = 0x221;
    uVar1 = FUN_1138_62b9(iVar2,uVar3);
    SENDMESSAGE(0x1138,0,0,uVar1,uVar4);
  }
  *(undefined2 *)(iVar2 + 0x10e) = 0;
  return;
}



/* ---- FUN_1140_3f39 @ 1140:3f39  (151 octets) ---- */

void __stdcall16far FUN_1140_3f39(undefined4 param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined4 uVar5;
  
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  iVar2 = (int)param_1;
  uVar4 = (undefined2)((ulong)param_2 >> 0x10);
  piVar1 = (int *)param_2;
  if (*(int *)(iVar2 + 0x10e) == 0) {
    FUN_1138_45fa(iVar2,uVar3,piVar1,uVar4);
  }
  else if (*param_2 == 5) {
    FUN_1138_62b9(iVar2,uVar3);
    uVar5 = DEFWINDOWPROC(0x1138,piVar1[2],piVar1[3],piVar1[1],*param_2);
    piVar1[4] = (int)uVar5;
    piVar1[5] = (int)((ulong)uVar5 >> 0x10);
  }
  else {
    FUN_1138_62b9(iVar2,uVar3);
    uVar5 = DEFFRAMEPROC(0x1138,piVar1[2],piVar1[3],piVar1[1],*param_2,
                         *(undefined2 *)(iVar2 + 0x10e));
    piVar1[4] = (int)uVar5;
    piVar1[5] = (int)((ulong)uVar5 >> 0x10);
  }
  return;
}



/* ---- FUN_1140_3fd0 @ 1140:3fd0  (177 octets) ---- */

void __stdcall16far FUN_1140_3fd0(long param_1,long param_2)

{
  char cVar1;
  undefined extraout_AH;
  int iVar2;
  undefined2 uVar3;
  undefined2 unaff_CS;
  undefined2 unaff_SS;
  long lVar4;
  undefined4 uVar5;
  undefined *puVar6;
  undefined local_102 [256];
  
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  iVar2 = (int)param_1;
  if (param_2 == CONCAT22(*(undefined2 *)(iVar2 + 0xe6),*(undefined2 *)(iVar2 + 0xe4))) {
    return;
  }
  if (param_2 != 0) {
    if ((param_1 != param_2) && (lVar4 = FUN_1140_17a8(param_2), lVar4 == param_1)) {
      unaff_CS = 0x1138;
      cVar1 = FUN_1138_61c4(param_2);
      if (cVar1 != '\0') goto LAB_1140_404e;
    }
    puVar6 = local_102;
    FUN_1150_092b(0xf029);
    uVar5 = FUN_1150_28e6(0x52,0x1138,CONCAT11(extraout_AH,1),puVar6,unaff_SS);
    unaff_CS = 0x1158;
    FUN_1158_1399(0x1150,uVar5);
  }
LAB_1140_404e:
  *(undefined2 *)(iVar2 + 0xe4) = (undefined2)param_2;
  *(undefined2 *)(iVar2 + 0xe6) = param_2._2_2_;
  if (*(char *)(iVar2 + 0xf1) != '\0') {
    unaff_CS = 0x1140;
    FUN_1140_4433(param_1);
  }
  FUN_1158_206a(unaff_CS,param_1);
  return;
}



/* ---- FUN_1140_4081 @ 1140:4081  (105 octets) ---- */

void __stdcall16far FUN_1140_4081(undefined4 param_1,char param_2,undefined4 param_3)

{
  undefined2 uVar1;
  char cVar2;
  int iVar3;
  undefined2 uVar5;
  int iVar4;
  undefined2 uVar6;
  
  iVar3 = (int)param_1;
  uVar5 = (undefined2)((ulong)param_1 >> 0x10);
  iVar4 = (int)param_3;
  uVar6 = (undefined2)((ulong)param_3 >> 0x10);
  if (param_2 != '\0') {
    cVar2 = FUN_1138_370e(iVar4,uVar6,*(undefined2 *)(iVar3 + 0xe8),*(undefined2 *)(iVar3 + 0xea));
    if (cVar2 != '\0') {
      uVar1 = *(undefined2 *)(iVar4 + 0x1c);
      *(undefined2 *)(iVar3 + 0xe8) = *(undefined2 *)(iVar4 + 0x1a);
      *(undefined2 *)(iVar3 + 0xea) = uVar1;
    }
  }
  cVar2 = FUN_1138_370e(iVar4,uVar6,*(undefined2 *)(iVar3 + 0xe4),*(undefined2 *)(iVar3 + 0xe6));
  if (cVar2 != '\0') {
    FUN_1140_3fd0(iVar3,uVar5,0,0);
  }
  return;
}



/* ---- FUN_1140_40ea @ 1140:40ea  (50 octets) ---- */

void __stdcall16far FUN_1140_40ea(undefined4 *param_1,undefined2 param_2,undefined2 param_3)

{
  char cVar1;
  undefined2 *puVar2;
  undefined4 *puVar3;
  undefined2 uVar4;
  
  uVar4 = (undefined2)((ulong)param_1 >> 0x10);
  puVar3 = (undefined4 *)param_1;
  cVar1 = *(char *)((int)puVar3 + 0xf1);
  FUN_1140_3fd0(puVar3,uVar4,param_2,param_3);
  if (cVar1 == '\0') {
    puVar2 = (undefined2 *)((int)*param_1 + 0x78);
    (*(code *)*puVar2)(0x1140,puVar3,uVar4);
  }
  return;
}



/* ---- FUN_1140_4122 @ 1140:4122  (763 octets) ---- */

uint __stdcall16far FUN_1140_4122(undefined4 param_1,undefined4 param_2)

{
  int *piVar1;
  undefined *puVar2;
  undefined4 uVar3;
  char cVar4;
  undefined extraout_AH;
  undefined extraout_AH_00;
  undefined extraout_AH_01;
  undefined extraout_AH_02;
  undefined extraout_AH_03;
  uint uVar5;
  undefined uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined2 uVar10;
  undefined2 uVar11;
  undefined *puStack_12;
  undefined *puStack_10;
  int iStack_e;
  int iStack_c;
  int local_a;
  int local_8;
  undefined2 local_6;
  undefined local_3;
  
  local_3 = 0;
  DAT_1160_1534 = DAT_1160_1534 + 1;
  iVar9 = (int)((ulong)param_1 >> 0x10);
  iVar7 = (int)param_1;
  if (*(int *)(iVar7 + 0x106) == 0 && *(int *)(iVar7 + 0x108) == 0) {
    if ((param_2._2_2_ == iVar9) && ((int)param_2 == iVar7)) {
      *(undefined2 *)(iVar7 + 0xe4) = 0;
      *(undefined2 *)(iVar7 + 0xe6) = 0;
    }
    else {
      *(int *)(iVar7 + 0xe4) = (int)param_2;
      *(int *)(iVar7 + 0xe6) = param_2._2_2_;
    }
  }
  uVar10 = (undefined2)((ulong)DAT_1160_2c2e >> 0x10);
  iVar8 = (int)DAT_1160_2c2e;
  *(int *)(iVar8 + 0x2c) = (int)param_2;
  *(int *)(iVar8 + 0x2e) = param_2._2_2_;
  uVar10 = (undefined2)((ulong)DAT_1160_2c2e >> 0x10);
  iVar8 = (int)DAT_1160_2c2e;
  *(int *)(iVar8 + 0x30) = iVar7;
  *(int *)(iVar8 + 0x32) = iVar9;
  puVar2 = (undefined *)*(undefined4 *)((int)DAT_1160_2c2e + 0x22);
  puStack_10 = (undefined *)((ulong)puVar2 >> 0x10);
  puStack_12 = (undefined *)puVar2;
  iStack_e = iVar7;
  iStack_c = iVar9;
  FUN_1148_0fa7();
  iStack_c = 0;
  uVar3 = *(undefined4 *)((int)DAT_1160_2c2e + 0x22);
  puStack_12 = (undefined *)((ulong)uVar3 >> 0x10);
  puStack_10 = (undefined *)iVar7;
  iStack_e = iVar9;
  FUN_1148_0ea7((int)uVar3);
  uVar6 = extraout_AH;
  if ((*(byte *)((int)param_2 + 0x28) & 0x20) == 0) {
    *(byte *)((int)param_2 + 0x28) = *(byte *)((int)param_2 + 0x28) | 0x20;
    iStack_c = 0x1148;
    iStack_e = 0x411c;
    puStack_12 = (undefined *)DAT_1160_1858;
    uVar10 = (undefined2)((ulong)DAT_1160_2c2e >> 0x10);
    iVar8 = (int)DAT_1160_2c2e;
    if ((*(int *)(iVar8 + 0x3e) != iVar9) ||
       (DAT_1160_1858 = &puStack_12, puStack_10 = &stack0xfffe, *(int *)(iVar8 + 0x3c) != iVar7)) {
      DAT_1160_1858 = &puStack_12;
      puStack_10 = &stack0xfffe;
      if (*(int *)(iVar8 + 0x3c) != 0 || *(int *)(iVar8 + 0x3e) != 0) {
        DAT_1160_1858 = &puStack_12;
        puStack_10 = &stack0xfffe;
        local_6 = FUN_1138_62b9((int)*(undefined4 *)(iVar8 + 0x3c),
                                (int)((ulong)*(undefined4 *)(iVar8 + 0x3c) >> 0x10));
        uVar10 = (undefined2)((ulong)DAT_1160_2c2e >> 0x10);
        iVar8 = (int)DAT_1160_2c2e;
        *(undefined2 *)(iVar8 + 0x3c) = 0;
        *(undefined2 *)(iVar8 + 0x3e) = 0;
        cVar4 = FUN_1140_118c(0xf01,local_6);
        if (cVar4 == '\0') {
          FUN_1158_146a();
          uVar6 = extraout_AH_00;
          goto LAB_1140_4425;
        }
      }
      uVar10 = (undefined2)((ulong)DAT_1160_2c2e >> 0x10);
      iVar8 = (int)DAT_1160_2c2e;
      *(int *)(iVar8 + 0x3c) = iVar7;
      *(int *)(iVar8 + 0x3e) = iVar9;
      uVar10 = FUN_1138_62b9(iVar7,iVar9);
      cVar4 = FUN_1140_118c(0xf00,uVar10);
      if (cVar4 == '\0') {
        FUN_1158_146a();
        uVar6 = extraout_AH_01;
        goto LAB_1140_4425;
      }
    }
    if (*(int *)(iVar7 + 0xe8) == 0 && *(int *)(iVar7 + 0xea) == 0) {
      *(int *)(iVar7 + 0xe8) = iVar7;
      *(int *)(iVar7 + 0xea) = iVar9;
    }
    if ((*(int *)(iVar7 + 0xea) == param_2._2_2_) && (*(int *)(iVar7 + 0xe8) == (int)param_2)) {
LAB_1140_43f9:
      DAT_1160_1858 = (undefined **)puStack_12;
      uVar5 = CONCAT11(0x44,*(undefined *)((int)param_2 + 0x28)) & 0xffdf;
      *(undefined *)((int)param_2 + 0x28) = (char)uVar5;
      return uVar5;
    }
    do {
      cVar4 = FUN_1138_370e((int)*(undefined4 *)(iVar7 + 0xe8),
                            (int)((ulong)*(undefined4 *)(iVar7 + 0xe8) >> 0x10),(int)param_2,
                            param_2._2_2_);
      if (cVar4 != '\0') goto LAB_1140_430c;
      local_6 = FUN_1138_62b9((int)*(undefined4 *)(iVar7 + 0xe8),
                              (int)((ulong)*(undefined4 *)(iVar7 + 0xe8) >> 0x10));
      uVar11 = (undefined2)((ulong)*(undefined4 *)(iVar7 + 0xe8) >> 0x10);
      iVar8 = (int)*(undefined4 *)(iVar7 + 0xe8);
      uVar10 = *(undefined2 *)(iVar8 + 0x1c);
      *(undefined2 *)(iVar7 + 0xe8) = *(undefined2 *)(iVar8 + 0x1a);
      *(undefined2 *)(iVar7 + 0xea) = uVar10;
      cVar4 = FUN_1140_118c(0xf1b,local_6);
    } while (cVar4 != '\0');
    FUN_1158_146a();
    uVar6 = extraout_AH_02;
  }
  goto LAB_1140_4425;
  while( true ) {
    local_a = (int)param_2;
    local_8 = param_2._2_2_;
    while ((*(int *)(local_a + 0x1c) != *(int *)(iVar7 + 0xea) ||
           (*(int *)(local_a + 0x1a) != *(int *)(iVar7 + 0xe8)))) {
      piVar1 = (int *)(local_a + 0x1a);
      local_8 = *(int *)(local_a + 0x1c);
      local_a = *piVar1;
    }
    *(int *)(iVar7 + 0xe8) = local_a;
    *(int *)(iVar7 + 0xea) = local_8;
    uVar10 = FUN_1138_62b9(local_a,local_8);
    cVar4 = FUN_1140_118c(0xf1a,uVar10);
    if (cVar4 == '\0') break;
LAB_1140_430c:
    if ((*(int *)(iVar7 + 0xea) == param_2._2_2_) && (*(int *)(iVar7 + 0xe8) == (int)param_2)) {
      local_8 = *(int *)((int)param_2 + 0x1c);
      local_a = *(int *)((int)param_2 + 0x1a);
      while (local_a != 0 || local_8 != 0) {
        cVar4 = FUN_1158_2255(0x172,0x1140,local_a,local_8);
        if (cVar4 != '\0') {
          FUN_1140_2200(local_a,local_8,(int)param_2,param_2._2_2_);
        }
        piVar1 = (int *)(local_a + 0x1a);
        local_8 = *(int *)(local_a + 0x1c);
        local_a = *piVar1;
      }
      FUN_1138_24bb(iVar7,iVar9,(int)param_2,param_2._2_2_,0,0xf07);
      goto LAB_1140_43f9;
    }
  }
  FUN_1158_146a();
  uVar6 = extraout_AH_03;
LAB_1140_4425:
  return CONCAT11(uVar6,local_3);
}



/* ---- FUN_1140_442c @ 1140:442c  (7 octets) ---- */

void __stdcall16far FUN_1140_442c(void)

{
  return;
}



/* ---- FUN_1140_4433 @ 1140:4433  (70 octets) ---- */

void __stdcall16far FUN_1140_4433(undefined4 param_1)

{
  int iVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  if ((*(int *)(iVar1 + 0xe4) == 0 && *(int *)(iVar1 + 0xe6) == 0) ||
     (*(int *)(iVar1 + 0x106) != 0 || *(int *)(iVar1 + 0x108) != 0)) {
    uVar2 = FUN_1138_62b9(iVar1,uVar2);
    SETFOCUS(0x1138,uVar2);
  }
  else {
    uVar2 = FUN_1138_62b9((int)*(undefined4 *)(iVar1 + 0xe4),
                          (int)((ulong)*(undefined4 *)(iVar1 + 0xe4) >> 0x10));
    SETFOCUS(0x1138,uVar2);
  }
  return;
}



/* ---- FUN_1140_4479 @ 1140:4479  (102 octets) ---- */

void __stdcall16far FUN_1140_4479(undefined4 param_1,undefined2 param_2,undefined2 param_3)

{
  int iVar1;
  undefined2 uVar2;
  long lVar3;
  undefined4 uVar4;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  if ((*(char *)(iVar1 + 0xf1) != '\0') &&
     (*(int *)(iVar1 + 0xe4) != 0 || *(int *)(iVar1 + 0xe6) != 0)) {
    FUN_1138_24bb((int)*(undefined4 *)(iVar1 + 0xe4),
                  (int)((ulong)*(undefined4 *)(iVar1 + 0xe4) >> 0x10),param_2,param_3,0,0xf04);
  }
  if (*(char *)(iVar1 + 0xf2) == '\x02') {
    lVar3 = FUN_1140_32ae(iVar1,uVar2);
    if (lVar3 != 0) {
      uVar4 = FUN_1140_32ae(iVar1,uVar2);
      FUN_1140_4479(uVar4,param_2,param_3);
    }
  }
  return;
}



/* ---- FUN_1140_44df @ 1140:44df  (365 octets) ---- */

void __stdcall16far FUN_1140_44df(undefined4 param_1,char param_2)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined2 uVar8;
  undefined2 uVar9;
  undefined2 local_6;
  undefined2 local_4;
  
  iVar7 = (int)((ulong)param_1 >> 0x10);
  iVar4 = (int)param_1;
  if ((*(byte *)(iVar4 + 0xf5) & 8) == 0) {
    uVar8 = (undefined2)((ulong)DAT_1160_2c2a >> 0x10);
    iVar5 = (int)DAT_1160_2c2a;
    if ((((*(int *)(iVar5 + 0x20) != 0 || *(int *)(iVar5 + 0x22) != 0) &&
         (uVar9 = (undefined2)((ulong)*(undefined4 *)(iVar5 + 0x20) >> 0x10),
         iVar6 = (int)*(undefined4 *)(iVar5 + 0x20),
         *(int *)(iVar6 + 0x100) != 0 || *(int *)(iVar6 + 0x102) != 0)) &&
        ((*(int *)(iVar5 + 0x22) != iVar7 || (*(int *)(iVar5 + 0x20) != iVar4)))) &&
       ((*(char *)(iVar4 + 0xf2) == '\x01' ||
        (*(char *)((int)*(undefined4 *)(iVar5 + 0x20) + 0xf2) != '\x02')))) {
      local_6 = 0;
      local_4 = 0;
      if (((*(byte *)(iVar4 + 0x18) & 0x10) == 0) &&
         ((*(int *)(iVar4 + 0x100) != 0 || *(int *)(iVar4 + 0x102) != 0 &&
          ((*(char *)((int)*(undefined4 *)(iVar4 + 0x100) + 0x2a) != '\0' ||
           (*(char *)(iVar4 + 0xf2) == '\x01')))))) {
        local_6 = *(undefined2 *)(iVar4 + 0x100);
        local_4 = *(undefined2 *)(iVar4 + 0x102);
      }
      uVar1 = *(undefined4 *)((int)*(undefined4 *)(iVar5 + 0x20) + 0x100);
      uVar9 = (undefined2)((ulong)uVar1 >> 0x10);
      uVar8 = (undefined2)uVar1;
      if (param_2 == '\0') {
        FUN_1130_1e2d(uVar8,uVar9,local_6,local_4);
      }
      else {
        FUN_1130_1df1(uVar8,uVar9,local_6,local_4);
        if ((*(char *)(iVar4 + 0xf2) == '\x01') && (*(char *)(iVar4 + 0xee) == '\x02')) {
          iVar5 = FUN_1138_18f4(iVar4,iVar7);
          iVar5 = iVar5 >> 0xf;
          uVar2 = FUN_1158_1739();
          uVar3 = FUN_1138_18a9(iVar4,iVar7);
          iVar5 = ((int)uVar3 >> 0xf) + iVar5 + (uint)CARRY2(uVar3,uVar2);
          FUN_1138_62b9(iVar4,iVar7);
          SENDMESSAGE(0x1138,uVar3 + uVar2,iVar5,0,5);
          FUN_1138_62b9(iVar4,iVar7);
          SENDMESSAGE(0x1138,uVar3 + uVar2,iVar5,2,5);
        }
      }
    }
  }
  return;
}



/* ---- FUN_1140_464c @ 1140:464c  (40 octets) ---- */

void __stdcall16far FUN_1140_464c(undefined4 param_1)

{
  undefined2 *puVar1;
  
  if (*(int *)((int)param_1 + 0x12e) != 0) {
    puVar1 = (undefined2 *)((int)param_1 + 300);
    (*(code *)*puVar1)();
  }
  return;
}



/* ---- FUN_1140_4674 @ 1140:4674  (40 octets) ---- */

void __stdcall16far FUN_1140_4674(undefined4 param_1)

{
  undefined2 *puVar1;
  
  if (*(int *)((int)param_1 + 0x146) != 0) {
    puVar1 = (undefined2 *)((int)param_1 + 0x144);
    (*(code *)*puVar1)();
  }
  return;
}



/* ---- FUN_1140_469c @ 1140:469c  (40 octets) ---- */

void __stdcall16far FUN_1140_469c(undefined4 param_1)

{
  undefined2 *puVar1;
  
  if (*(int *)((int)param_1 + 0x156) != 0) {
    puVar1 = (undefined2 *)((int)param_1 + 0x154);
    (*(code *)*puVar1)();
  }
  return;
}



/* ---- FUN_1140_46c4 @ 1140:46c4  (40 octets) ---- */

void __stdcall16far FUN_1140_46c4(undefined4 param_1)

{
  undefined2 *puVar1;
  
  if (*(int *)((int)param_1 + 0x15e) != 0) {
    puVar1 = (undefined2 *)((int)param_1 + 0x15c);
    (*(code *)*puVar1)();
  }
  return;
}



/* ---- FUN_1140_46ec @ 1140:46ec  (74 octets) ---- */

int __stdcall16far FUN_1140_46ec(undefined4 param_1)

{
  undefined4 uVar1;
  undefined2 local_4;
  
  uVar1 = *(undefined4 *)((int)param_1 + 0xfc);
  local_4 = FUN_1128_6594((int)uVar1,(int)((ulong)uVar1 >> 0x10));
  if (local_4 == 0) {
    uVar1 = *(undefined4 *)((int)DAT_1160_2c2a + 0x55);
    local_4 = FUN_1128_6594((int)uVar1,(int)((ulong)uVar1 >> 0x10));
  }
  if (local_4 == 0) {
    local_4 = LOADICON(0x1128,0x7f00,0);
  }
  return local_4;
}



/* ---- FUN_1140_481e @ 1140:481e  (96 octets) ---- */

void __stdcall16far FUN_1140_481e(undefined4 *param_1)

{
  undefined2 *puVar1;
  undefined4 uVar2;
  undefined2 uVar3;
  undefined4 *puVar4;
  undefined2 uVar5;
  
  uVar5 = (undefined2)((ulong)param_1 >> 0x10);
  puVar4 = (undefined4 *)param_1;
  if ((*(char *)((int)puVar4 + 0xf2) == '\x01') && ((*(byte *)(puVar4 + 6) & 0x10) == 0)) {
    puVar1 = (undefined2 *)((int)*param_1 + 0x34);
    (*(code *)*puVar1)();
    uVar2 = *(undefined4 *)((int)DAT_1160_2c2a + 0x20);
    uVar2 = *(undefined4 *)((int)uVar2 + 0x9e);
    uVar3 = FUN_1128_16c0((int)uVar2,(int)((ulong)uVar2 >> 0x10));
    FILLRECT(0x1128,uVar3,puVar4,uVar5);
  }
  else {
    puVar1 = (undefined2 *)((int)*param_1 + -0x10);
    (*(code *)*puVar1)();
  }
  return;
}



/* ---- FUN_1140_487e @ 1140:487e  (65 octets) ---- */

void __stdcall16far FUN_1140_487e(undefined4 param_1,undefined2 *param_2)

{
  undefined2 uVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  
  uVar4 = (undefined2)((ulong)param_1 >> 0x10);
  uVar3 = (undefined2)param_1;
  uVar1 = FUN_1138_62b9(uVar3,uVar4);
  iVar2 = ISICONIC(0x1138,uVar1);
  if (iVar2 == 0) {
    FUN_1138_4c9e(uVar3,uVar4,(undefined2 *)param_2,param_2._2_2_);
  }
  else {
    *param_2 = 0x27;
    FUN_1158_2038(0x14d0,uVar3,uVar4,(undefined2 *)param_2,param_2._2_2_);
  }
  return;
}



/* ---- FUN_1140_48bf @ 1140:48bf  (30 octets) ---- */

void __stdcall16far FUN_1140_48bf(undefined4 param_1,undefined4 param_2)

{
  undefined2 uVar1;
  undefined2 uVar2;
  
  uVar1 = FUN_1140_46ec((int)param_1,(int)((ulong)param_1 >> 0x10));
  uVar2 = (undefined2)((ulong)param_2 >> 0x10);
  *(undefined2 *)((int)param_2 + 8) = uVar1;
  *(undefined2 *)((int)param_2 + 10) = 0;
  return;
}



/* ---- FUN_1140_48dd @ 1140:48dd  (230 octets) ---- */

void FUN_1140_48dd(int param_1)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 unaff_SS;
  
  uVar2 = (undefined2)((ulong)*(undefined4 *)(param_1 + 6) >> 0x10);
  iVar1 = (int)*(undefined4 *)(param_1 + 6);
  if (((*(char *)(iVar1 + 0xed) != '\0') && ((*(byte *)(iVar1 + 0xec) & 1) != 0)) &&
     (*(char *)(iVar1 + 0xf2) != '\x01')) {
    FUN_1138_62b9(iVar1,uVar2);
    GETSYSTEMMENU(0x1138,0);
    if (*(char *)((int)*(undefined4 *)(param_1 + 6) + 0xed) == '\x03') {
      DELETEMENU(0x14d0,0,0xf130);
      DELETEMENU(0x14d0,0x400,7);
      DELETEMENU(0x14d0,0x400,5);
      DELETEMENU(0x14d0,0,0xf030);
      DELETEMENU(0x14d0,0,0xf020);
      DELETEMENU(0x14d0,0,0xf000);
      DELETEMENU(0x14d0,0,0xf120);
    }
    else {
      if ((*(byte *)((int)*(undefined4 *)(param_1 + 6) + 0xec) & 2) == 0) {
        ENABLEMENUITEM(0x14d0,1,0xf020);
      }
      if ((*(byte *)((int)*(undefined4 *)(param_1 + 6) + 0xec) & 4) == 0) {
        ENABLEMENUITEM(0x14d0,1,0xf030);
      }
    }
  }
  return;
}



/* ---- FUN_1140_49c3 @ 1140:49c3  (59 octets) ---- */

void __stdcall16far FUN_1140_49c3(undefined4 *param_1,undefined2 param_2,undefined2 param_3)

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
  FUN_1140_36b2(puVar2,uVar3,*(undefined2 *)(puVar2 + 0x40),*(undefined2 *)((int)puVar2 + 0x102));
  if ((*(byte *)(puVar2 + 6) & 0x10) == 0) {
    FUN_1140_48dd(&stack0xfffe,puVar4,uVar5,param_2,param_3);
  }
  return;
}



/* ---- FUN_1140_49fe @ 1140:49fe  (109 octets) ---- */

void __stdcall16far FUN_1140_49fe(undefined4 param_1,undefined2 param_2,undefined2 param_3)

{
  undefined2 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined2 uVar4;
  undefined2 unaff_CS;
  
  uVar4 = (undefined2)((ulong)param_1 >> 0x10);
  iVar3 = (int)param_1;
  if ((*(int *)(iVar3 + 0x100) != 0 || *(int *)(iVar3 + 0x102) != 0) &&
     (*(char *)(iVar3 + 0xf2) != '\x01')) {
    FUN_1138_62b9(iVar3,uVar4);
    SETMENU(0x1138,0);
    unaff_CS = 0x1130;
    FUN_1130_1d77((int)*(undefined4 *)(iVar3 + 0x100),
                  (int)((ulong)*(undefined4 *)(iVar3 + 0x100) >> 0x10),0);
  }
  if (*(int *)(iVar3 + 0x11a) != 0 || *(int *)(iVar3 + 0x11c) != 0) {
    puVar2 = (undefined4 *)*(undefined4 *)(iVar3 + 0x11a);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x10);
    (*(code *)*puVar1)(unaff_CS,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),0);
  }
  FUN_1138_5422(iVar3,uVar4,param_2,param_3);
  return;
}



/* ---- FUN_1140_4a6b @ 1140:4a6b  (81 octets) ---- */

void __stdcall16far FUN_1140_4a6b(undefined4 param_1,undefined4 param_2)

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
  if (((*(int *)(iVar2 + 4) == 0) && (*(int *)(iVar3 + 0x100) != 0 || *(int *)(iVar3 + 0x102) != 0))
     && (cVar1 = FUN_1130_19be((int)*(undefined4 *)(iVar3 + 0x100),
                               (int)((ulong)*(undefined4 *)(iVar3 + 0x100) >> 0x10),
                               *(undefined2 *)(iVar2 + 2)), cVar1 != '\0')) {
    return;
  }
  FUN_1138_4ac4(iVar3,uVar5,iVar2,uVar4);
  return;
}



/* ---- FUN_1140_4abc @ 1140:4abc  (44 octets) ---- */

void __stdcall16far FUN_1140_4abc(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  if (*(int *)(iVar1 + 0x100) != 0 || *(int *)(iVar1 + 0x102) != 0) {
    FUN_1130_19fa((int)*(undefined4 *)(iVar1 + 0x100),
                  (int)((ulong)*(undefined4 *)(iVar1 + 0x100) >> 0x10),
                  *(undefined2 *)((int)param_2 + 2));
  }
  return;
}



/* ---- FUN_1140_4bb1 @ 1140:4bb1  (111 octets) ---- */

void __stdcall16far FUN_1140_4bb1(undefined4 param_1,undefined4 param_2)

{
  undefined2 uVar1;
  undefined2 uVar2;
  int iVar3;
  undefined2 uVar4;
  
  if (*(int *)((int)param_2 + 2) == 2) {
    iVar3 = GETKEYSTATE();
    if (iVar3 < 0) {
      uVar4 = (undefined2)((ulong)param_1 >> 0x10);
      iVar3 = (int)param_1;
      if (*(int *)(iVar3 + 0x10a) != 0 || *(int *)(iVar3 + 0x10c) != 0) {
        uVar1 = *(undefined2 *)(iVar3 + 0x10a);
        uVar2 = *(undefined2 *)(iVar3 + 0x10c);
        GETACTIVEWINDOW(0x14d0);
        SENDMESSAGE(0x14d0,0,0,0,0x1f);
        FUN_1140_7792((int)DAT_1160_2c2a,(int)((ulong)DAT_1160_2c2a >> 0x10),uVar1,uVar2);
        *(undefined2 *)(iVar3 + 0x10a) = 0;
        *(undefined2 *)(iVar3 + 0x10c) = 0;
      }
    }
  }
  return;
}



/* ---- FUN_1140_4c20 @ 1140:4c20  (149 octets) ---- */

void __stdcall16far FUN_1140_4c20(undefined4 param_1,undefined4 param_2)

{
  undefined2 *puVar1;
  int iVar2;
  undefined2 uVar3;
  
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  iVar2 = (int)param_1;
  if (*(int *)(iVar2 + 0x11a) != 0 || *(int *)(iVar2 + 0x11c) != 0) {
    puVar1 = (undefined2 *)((int)*(undefined4 *)*(undefined4 *)(iVar2 + 0x11a) + 0xc);
    (*(code *)*puVar1)();
  }
  if ((*(char *)(iVar2 + 0xf2) != '\x02') || ((*(byte *)(iVar2 + 0x18) & 0x10) != 0)) {
    if (*(int *)((int)param_2 + 2) == 0) {
      *(undefined *)(iVar2 + 0xf1) = 0;
    }
    else {
      if ((*(int *)(iVar2 + 0xe4) == 0 && *(int *)(iVar2 + 0xe6) == 0) &&
         ((*(byte *)(iVar2 + 0x18) & 0x10) == 0)) {
        FUN_1138_6811(iVar2,uVar3);
      }
      *(undefined *)(iVar2 + 0xf1) = 1;
      FUN_1140_44df(iVar2,uVar3,1);
      FUN_1140_4433(iVar2,uVar3);
    }
  }
  return;
}



/* ---- FUN_1140_4cb5 @ 1140:4cb5  (145 octets) ---- */

void __stdcall16far FUN_1140_4cb5(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined2 *puVar2;
  int iVar3;
  undefined2 uVar4;
  
  uVar4 = (undefined2)((ulong)param_1 >> 0x10);
  iVar3 = (int)param_1;
  if (*(int *)(iVar3 + 0x11a) != 0 || *(int *)(iVar3 + 0x11c) != 0) {
    puVar2 = (undefined2 *)((int)*(undefined4 *)*(undefined4 *)(iVar3 + 0x11a) + 8);
    (*(code *)*puVar2)();
  }
  FUN_1140_2490(iVar3,uVar4,(int)param_2,param_2._2_2_);
  if ((*(byte *)(iVar3 + 0x18) & 0x10) == 0) {
    iVar1 = *(int *)((int)param_2 + 2);
    if (iVar1 == 0) {
      *(undefined *)(iVar3 + 0xee) = 0;
    }
    else if (iVar1 == 1) {
      *(undefined *)(iVar3 + 0xee) = 1;
    }
    else if (iVar1 == 2) {
      *(undefined *)(iVar3 + 0xee) = 2;
    }
  }
  if ((*(byte *)(iVar3 + 0x18) & 1) == 0) {
    FUN_1158_206a(0x1140,iVar3,uVar4);
  }
  FUN_1140_2079(iVar3,uVar4);
  return;
}



/* ---- FUN_1140_4d46 @ 1140:4d46  (17 octets) ---- */

void __stdcall16far FUN_1140_4d46(undefined4 param_1)

{
  FUN_1140_5556((int)param_1,(int)((ulong)param_1 >> 0x10));
  return;
}



/* ---- FUN_1140_4d57 @ 1140:4d57  (51 octets) ---- */

void __stdcall16far FUN_1140_4d57(undefined4 param_1,undefined4 param_2)

{
  undefined2 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined2 uVar4;
  
  uVar4 = (undefined2)((ulong)param_1 >> 0x10);
  iVar3 = (int)param_1;
  FUN_1138_1b51(iVar3,uVar4,(int)param_2,(int)((ulong)param_2 >> 0x10));
  if (*(int *)(iVar3 + 0x11a) != 0 || *(int *)(iVar3 + 0x11c) != 0) {
    puVar2 = (undefined4 *)*(undefined4 *)(iVar3 + 0x11a);
    puVar1 = (undefined2 *)((int)*puVar2 + 4);
    (*(code *)*puVar1)(0x1138,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10));
  }
  return;
}



/* ---- FUN_1140_4d8a @ 1140:4d8a  (55 octets) ---- */

void __stdcall16far FUN_1140_4d8a(undefined4 *param_1)

{
  undefined2 *puVar1;
  undefined4 *puVar2;
  undefined2 uVar3;
  
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  puVar2 = (undefined4 *)param_1;
  puVar1 = (undefined2 *)((int)*param_1 + -0x10);
  (*(code *)*puVar1)();
  if (*(int *)((int)puVar2 + 0x11a) != 0 || *(int *)(puVar2 + 0x47) != 0) {
    puVar1 = (undefined2 *)*(undefined2 **)*(undefined4 *)((int)puVar2 + 0x11a);
    (*(code *)*puVar1)();
  }
  return;
}



/* ---- FUN_1140_4dc1 @ 1140:4dc1  (55 octets) ---- */

void __stdcall16far FUN_1140_4dc1(undefined4 *param_1)

{
  undefined2 *puVar1;
  undefined4 *puVar2;
  undefined2 uVar3;
  
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  puVar2 = (undefined4 *)param_1;
  puVar1 = (undefined2 *)((int)*param_1 + -0x10);
  (*(code *)*puVar1)();
  if (*(int *)((int)puVar2 + 0x11a) != 0 || *(int *)(puVar2 + 0x47) != 0) {
    puVar1 = (undefined2 *)*(undefined2 **)*(undefined4 *)((int)puVar2 + 0x11a);
    (*(code *)*puVar1)();
  }
  return;
}



/* ---- FUN_1140_4df8 @ 1140:4df8  (60 octets) ---- */

void __stdcall16far FUN_1140_4df8(undefined4 param_1,undefined4 param_2)

{
  undefined2 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined2 uVar4;
  
  uVar4 = (undefined2)((ulong)param_1 >> 0x10);
  iVar3 = (int)param_1;
  FUN_1138_53be(iVar3,uVar4,(undefined2)param_2,param_2._2_2_);
  if (*(int *)(iVar3 + 0x11a) != 0 || *(int *)(iVar3 + 0x11c) != 0) {
    puVar2 = (undefined4 *)*(undefined4 *)(iVar3 + 0x11a);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x14);
    (*(code *)*puVar1)(0x1138,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),(undefined2)param_2,
                       param_2._2_2_);
  }
  return;
}



/* ---- FUN_1140_4e34 @ 1140:4e34  (30 octets) ---- */

void __stdcall16far FUN_1140_4e34(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  undefined2 uVar2;
  
  cVar1 = FUN_1140_5648((int)param_1,(int)((ulong)param_1 >> 0x10));
  uVar2 = (undefined2)((ulong)param_2 >> 0x10);
  *(int *)((int)param_2 + 8) = (int)cVar1;
  *(int *)((int)param_2 + 10) = (int)cVar1 >> 0xf;
  return;
}



/* ---- FUN_1140_4e52 @ 1140:4e52  (134 octets) ---- */

void __stdcall16far FUN_1140_4e52(undefined4 *param_1,undefined4 param_3)

{
  undefined2 *puVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  
  uVar3 = (undefined2)((ulong)param_3 >> 0x10);
  if ((((*(uint *)((int)param_3 + 2) & 0xfff0) == 0xf020) &&
      (uVar4 = (undefined2)((ulong)DAT_1160_2c2a >> 0x10), iVar2 = (int)DAT_1160_2c2a,
      *(int *)(iVar2 + 0x22) == param_1._2_2_)) &&
     ((undefined4 *)*(int *)(iVar2 + 0x20) == (undefined4 *)param_1)) {
    FUN_1140_6f0d(iVar2,uVar4);
  }
  else if ((((*(byte *)((undefined4 *)param_1 + 6) & 0x10) == 0) &&
           (*(char *)((int)(undefined4 *)param_1 + 0xf2) != '\x01')) &&
          ((*(int *)((undefined4 *)param_1 + 0x40) != 0 ||
            *(int *)((int)(undefined4 *)param_1 + 0x102) != 0 &&
           (*(char *)((int)((undefined4 *)param_1)[0x40] + 0x2a) == '\0')))) {
    puVar1 = (undefined2 *)((int)*param_1 + -0x10);
    (*(code *)*puVar1)();
  }
  else {
    FUN_1138_52ff((undefined4 *)param_1,param_1._2_2_,(int)param_3,uVar3);
  }
  return;
}



/* ---- FUN_1140_4ed8 @ 1140:4ed8  (186 octets) ---- */

void __stdcall16far FUN_1140_4ed8(undefined4 *param_1,undefined4 param_2)

{
  undefined2 *puVar1;
  undefined2 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  undefined2 uVar8;
  
  uVar5 = (undefined2)((ulong)param_2 >> 0x10);
  iVar3 = *(int *)((int)param_2 + 4);
  puVar4 = (undefined4 *)param_1;
  uVar6 = (undefined2)((ulong)param_1 >> 0x10);
  if (iVar3 == 1) {
    uVar7 = 0x4ef2;
    uVar2 = FUN_1138_62b9(puVar4,uVar6);
    uVar8 = 0x4ef8;
    iVar3 = ISICONIC(0x1138,uVar2);
    if (iVar3 == 0) {
      uVar8 = FUN_1138_62b9(puVar4,uVar6);
      uVar7 = 0x1138;
      iVar3 = ISZOOMED(0x1138,uVar8);
      if (iVar3 == 0) {
        *(undefined *)((int)puVar4 + 0xef) = 1;
      }
      else {
        *(undefined *)((int)puVar4 + 0xef) = 3;
      }
    }
    else {
      *(undefined *)((int)puVar4 + 0xef) = 2;
    }
    puVar1 = (undefined2 *)((int)*param_1 + -0x10);
    (*(code *)*puVar1)(0x14d0,puVar4,uVar6,(int)param_2,uVar5,uVar7,uVar8);
  }
  else if (iVar3 == 3) {
    if (*(char *)((int)puVar4 + 0xef) != '\0') {
      FUN_1138_62b9(puVar4,uVar6);
      SHOWWINDOW(0x1138,*(undefined2 *)(*(char *)((int)puVar4 + 0xef) * 2 + 0x1650));
      *(undefined *)((int)puVar4 + 0xef) = 0;
    }
  }
  else {
    puVar1 = (undefined2 *)((int)*param_1 + -0x10);
    (*(code *)*puVar1)();
  }
  return;
}



/* ---- FUN_1140_4f92 @ 1140:4f92  (40 octets) ---- */

void __stdcall16far FUN_1140_4f92(undefined4 *param_1,undefined4 param_2)

{
  undefined2 *puVar1;
  
  puVar1 = (undefined2 *)((int)*param_1 + -0x10);
  (*(code *)*puVar1)();
  FUN_1140_4c20((undefined4 *)param_1,(int)((ulong)param_1 >> 0x10),(int)param_2,
                (int)((ulong)param_2 >> 0x10));
  return;
}



/* ---- FUN_1140_4fba @ 1140:4fba  (77 octets) ---- */

void __stdcall16far FUN_1140_4fba(undefined4 param_1,undefined4 param_2)

{
  uint in_AX;
  uint uVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  
  uVar3 = (undefined2)((ulong)param_2 >> 0x10);
  if (*(int *)((int)param_2 + 4) == 0) {
    uVar4 = (undefined2)((ulong)param_1 >> 0x10);
    iVar2 = (int)param_1;
    uVar1 = in_AX & 0xff00;
    if (*(int *)((int)param_2 + 2) == 0) {
      uVar1 = uVar1 + 1;
    }
    FUN_1138_67ce(iVar2,uVar4,1,uVar1,*(undefined2 *)(iVar2 + 0xe4),*(undefined2 *)(iVar2 + 0xe6));
  }
  else {
    SETFOCUS();
  }
  return;
}



/* ---- FUN_1140_5007 @ 1140:5007  (39 octets) ---- */

void __stdcall16far FUN_1140_5007(undefined4 *param_1,undefined2 param_2,undefined2 param_3)

{
  undefined2 *puVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  FUN_1140_4479((undefined4 *)param_1,uVar2,0,0);
  puVar1 = (undefined2 *)((int)*param_1 + -0x10);
  (*(code *)*puVar1)(0x1140,(undefined4 *)param_1,uVar2,param_2,param_3);
  return;
}



/* ---- FUN_1140_502e @ 1140:502e  (20 octets) ---- */

void __stdcall16far FUN_1140_502e(void)

{
  FUN_1158_206a();
  return;
}



/* ---- FUN_1140_5042 @ 1140:5042  (20 octets) ---- */

void __stdcall16far FUN_1140_5042(void)

{
  FUN_1158_206a();
  return;
}



/* ---- FUN_1140_5056 @ 1140:5056  (219 octets) ---- */

void __stdcall16far FUN_1140_5056(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  byte bVar5;
  int iVar6;
  int iVar7;
  undefined2 uVar8;
  undefined2 uVar9;
  undefined2 uVar10;
  undefined2 uVar11;
  
  uVar8 = (undefined2)((ulong)param_2 >> 0x10);
  iVar6 = (int)param_2;
  iVar2 = *(int *)(iVar6 + 2);
  iVar7 = (int)param_1;
  uVar9 = (undefined2)((ulong)param_1 >> 0x10);
  if (iVar2 == 9) {
    iVar2 = GETKEYSTATE();
    if (-1 < iVar2) {
      uVar11 = 0x10;
      uVar10 = 0x14d0;
      uVar3 = GETKEYSTATE(0x14d0,0x10,*(undefined2 *)(iVar7 + 0xe4),*(undefined2 *)(iVar7 + 0xe6));
      uVar4 = uVar3 & 0xff00;
      if (-1 < (int)uVar3) {
        uVar4 = uVar4 + 1;
      }
      FUN_1138_67ce(iVar7,uVar9,1,uVar4,uVar10,uVar11);
      *(undefined2 *)(iVar6 + 8) = 1;
      *(undefined2 *)(iVar6 + 10) = 0;
      return;
    }
  }
  else if ((((iVar2 == 0x25) || (iVar2 == 0x27)) || (iVar2 == 0x26)) || (iVar2 == 0x28)) {
    uVar3 = *(uint *)(iVar7 + 0xe4) | *(uint *)(iVar7 + 0xe6);
    if (uVar3 == 0) {
      return;
    }
    bVar5 = (byte)(uVar3 >> 8);
    if ((*(int *)(iVar6 + 2) == 0x27) || (*(int *)(iVar6 + 2) == 0x28)) {
      iVar2 = CONCAT11(bVar5,1);
    }
    else {
      iVar2 = (uint)bVar5 << 8;
    }
    uVar1 = *(undefined4 *)((int)*(undefined4 *)(iVar7 + 0xe4) + 0x1a);
    FUN_1138_67ce((int)uVar1,(int)((ulong)uVar1 >> 0x10),0,iVar2,*(undefined2 *)(iVar7 + 0xe4),
                  *(undefined2 *)(iVar7 + 0xe6));
    *(undefined2 *)(iVar6 + 8) = 1;
    *(undefined2 *)(iVar6 + 10) = 0;
    return;
  }
  FUN_1138_5610(iVar7,uVar9,iVar6,uVar8);
  return;
}



/* ---- FUN_1140_54c2 @ 1140:54c2  (38 octets) ---- */

void __stdcall16far FUN_1140_54c2(undefined4 *param_1)

{
  undefined2 *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined2 uVar4;
  
  uVar4 = (undefined2)((ulong)param_1 >> 0x10);
  uVar2 = ((undefined4 *)param_1)[0x3f];
  iVar3 = FUN_1128_6594((int)uVar2,(int)((ulong)uVar2 >> 0x10));
  if (iVar3 == 0) {
    puVar1 = (undefined2 *)((int)*param_1 + 0x44);
    (*(code *)*puVar1)(0x1128,(undefined4 *)param_1,uVar4);
  }
  return;
}



/* ---- FUN_1140_54e8 @ 1140:54e8  (17 octets) ---- */

void __stdcall16far FUN_1140_54e8(undefined4 param_1)

{
  FUN_1158_1f7f((int)param_1,(int)((ulong)param_1 >> 0x10));
  return;
}



/* ---- FUN_1140_54f9 @ 1140:54f9  (93 octets) ---- */

void __stdcall16far FUN_1140_54f9(undefined4 *param_1)

{
  undefined2 *puVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 unaff_CS;
  
  puVar1 = (undefined2 *)((int)*param_1 + -0x10);
  (*(code *)*puVar1)();
  if (((*(char *)((int)(undefined4 *)param_1 + 0xf2) == '\x01') &&
      (uVar3 = (undefined2)((ulong)DAT_1160_2c2a >> 0x10), iVar2 = (int)DAT_1160_2c2a,
      *(int *)(iVar2 + 0x20) != 0 || *(int *)(iVar2 + 0x22) != 0)) &&
     (*(int *)((int)*(undefined4 *)(iVar2 + 0x20) + 0x10e) != 0)) {
    SENDMESSAGE(unaff_CS,0,0,1,0x230);
  }
  return;
}



/* ---- FUN_1140_5556 @ 1140:5556  (242 octets) ---- */

void __stdcall16far FUN_1140_5556(undefined4 param_1)

{
  undefined2 *puVar1;
  undefined4 *puVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined2 uVar7;
  char local_3;
  
  iVar6 = (int)((ulong)param_1 >> 0x10);
  iVar4 = (int)param_1;
  if ((*(byte *)(iVar4 + 0xf5) & 8) == 0) {
    cVar3 = FUN_1140_5648(iVar4,iVar6);
    if (cVar3 != '\0') {
      if (*(char *)(iVar4 + 0xf2) == '\x01') {
        if ((*(byte *)(iVar4 + 0xec) & 2) == 0) {
          local_3 = '\0';
        }
        else {
          local_3 = '\x03';
        }
      }
      else {
        local_3 = '\x01';
      }
      if (*(int *)(iVar4 + 0x136) != 0) {
        (*(code *)*(undefined2 *)(iVar4 + 0x134))
                  (0x1140,*(undefined2 *)(iVar4 + 0x138),*(undefined2 *)(iVar4 + 0x13a),&local_3);
      }
      if (*(int *)(iVar4 + 0x11a) != 0 || *(int *)(iVar4 + 0x11c) != 0) {
        puVar2 = (undefined4 *)*(undefined4 *)(iVar4 + 0x11a);
        puVar1 = (undefined2 *)((int)*puVar2 + 0x10);
        (*(code *)*puVar1)(0x1140,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),1);
      }
      if (local_3 != '\0') {
        uVar7 = (undefined2)((ulong)DAT_1160_2c2a >> 0x10);
        iVar5 = (int)DAT_1160_2c2a;
        if ((*(int *)(iVar5 + 0x22) == iVar6) && (*(int *)(iVar5 + 0x20) == iVar4)) {
          FUN_1140_7543(iVar5,uVar7);
        }
        else if (local_3 == '\x01') {
          FUN_1140_5cb9(iVar4,iVar6);
        }
        else if (local_3 == '\x03') {
          FUN_1140_3a14(iVar4,iVar6,1);
        }
        else {
          FUN_1140_5f1d(iVar4,iVar6);
        }
      }
    }
  }
  else {
    *(undefined2 *)(iVar4 + 0x104) = 2;
  }
  return;
}



/* ---- FUN_1140_5648 @ 1140:5648  (135 octets) ---- */

undefined __stdcall16far FUN_1140_5648(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined2 uVar4;
  undefined2 unaff_CS;
  undefined4 uVar5;
  int local_6;
  undefined local_3;
  
  uVar4 = (undefined2)((ulong)param_1 >> 0x10);
  iVar3 = (int)param_1;
  if (*(char *)(iVar3 + 0xf2) == '\x02') {
    local_3 = 0;
    unaff_CS = 0x1140;
    iVar2 = FUN_1140_32f6(iVar3,uVar4);
    if (-1 < iVar2 + -1) {
      local_6 = 0;
      while( true ) {
        uVar5 = FUN_1140_335c(iVar3,uVar4,local_6);
        unaff_CS = 0x1140;
        cVar1 = FUN_1140_5648(uVar5);
        if (cVar1 == '\0') {
          return local_3;
        }
        if (local_6 == iVar2 + -1) break;
        local_6 = local_6 + 1;
      }
    }
  }
  local_3 = 1;
  if (*(int *)(iVar3 + 0x13e) != 0) {
    (*(code *)*(undefined2 *)(iVar3 + 0x13c))
              (unaff_CS,*(undefined2 *)(iVar3 + 0x140),*(undefined2 *)(iVar3 + 0x142),&local_3);
  }
  return local_3;
}



/* ---- FUN_1140_56d9 @ 1140:56d9  (110 octets) ---- */

void __stdcall16far FUN_1140_56d9(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 uStack_c;
  undefined *puStack_a;
  undefined2 uStack_8;
  char local_3;
  
  puStack_a = &stack0xfffe;
  uStack_8 = 0x56cf;
  uStack_c = DAT_1160_1858;
  local_3 = '\0';
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  iVar2 = (int)param_1;
  DAT_1160_1858 = &uStack_c;
  cVar1 = FUN_1140_5648(iVar2,uVar3);
  if ((cVar1 != '\0') && (local_3 = '\x01', *(int *)(iVar2 + 0x136) != 0)) {
    (*(code *)*(undefined2 *)(iVar2 + 0x134))
              (0x1140,*(undefined2 *)(iVar2 + 0x138),*(undefined2 *)(iVar2 + 0x13a),&local_3);
  }
  if (local_3 == '\0') {
    *(undefined2 *)(iVar2 + 0x104) = 0;
  }
  DAT_1160_1858 = (undefined2 *)uStack_c;
  return;
}



/* ---- FUN_1140_5767 @ 1140:5767  (263 octets) ---- */

void FUN_1140_5767(int param_1)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 unaff_SS;
  int local_c;
  int local_a;
  int local_8;
  int local_6;
  int local_4;
  
  iVar1 = ISWINDOWVISIBLE();
  if (iVar1 != 0) {
    uVar2 = SAVEDC(0x14d0,*(undefined2 *)(param_1 + -8));
    GETCLIENTRECT(0x14d0,&local_a,unaff_SS);
    uVar3 = FUN_1138_62b9((int)*(undefined4 *)(param_1 + 6),
                          (int)((ulong)*(undefined4 *)(param_1 + 6) >> 0x10));
    MAPWINDOWPOINTS(0x1138,2,&local_a,unaff_SS,uVar3);
    SETWINDOWORGEX(0x14d0,0,0,-local_8,-local_a);
    INTERSECTCLIPRECT(0x14d0,local_4 - local_8,local_6 - local_a,0,0);
    SENDMESSAGE(0x14d0,0,0,*(undefined2 *)(param_1 + -8),0x14);
    SENDMESSAGE(0x14d0,*(undefined2 *)(param_1 + -0x10),*(undefined2 *)(param_1 + -0xe),
                *(undefined2 *)(param_1 + -8),0xf);
    iVar1 = GETWINDOW(0x14d0,5);
    if (iVar1 != 0) {
      local_c = GETWINDOW(0x14d0,1);
      while (local_c != 0) {
        FUN_1140_5767(param_1,local_c);
        local_c = GETWINDOW(0x14d0,3);
      }
    }
    RESTOREDC(0x14d0,uVar2);
  }
  return;
}



/* ---- FUN_1140_588a @ 1140:588a  (258 octets) ---- */

void __cdecl16far FUN_1140_588a(undefined4 *param_1)

{
  undefined2 *puVar1;
  uint uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined4 *puVar5;
  undefined2 uVar6;
  undefined4 *puVar7;
  undefined *puVar8;
  undefined *puStack_44;
  undefined *puStack_42;
  undefined2 uStack_40;
  undefined2 uStack_3e;
  undefined2 uStack_3c;
  undefined *puStack_3a;
  undefined4 *puStack_38;
  undefined4 *puStack_36;
  undefined2 uStack_34;
  undefined2 uStack_32;
  undefined *puStack_30;
  undefined *puStack_2e;
  undefined2 uStack_2c;
  undefined2 uStack_2a;
  undefined2 uStack_28;
  undefined2 uStack_26;
  undefined2 uStack_24;
  undefined *puStack_22;
  undefined2 uStack_20;
  undefined local_1a [8];
  undefined2 local_12;
  undefined2 local_10;
  undefined2 local_e;
  undefined2 local_c;
  undefined2 local_a;
  undefined2 local_8;
  undefined2 local_6;
  undefined2 local_4;
  
  local_6 = 0;
  local_4 = 0;
  uStack_20 = 0x589d;
  uStack_26 = GETDC();
  local_12 = 0;
  local_10 = 0;
  uStack_20 = 0x5884;
  uStack_24 = DAT_1160_1858;
  uStack_28 = 0x14d0;
  uStack_2a = 0x58be;
  DAT_1160_1858 = (undefined **)&uStack_24;
  puStack_22 = &stack0xfffe;
  local_8 = uStack_26;
  local_a = CREATECOMPATIBLEDC();
  uStack_28 = 0x14d0;
  uStack_2a = 0x58c6;
  uVar2 = GETWINFLAGS();
  if ((uVar2 & 0x4000) != 0) {
    local_12 = local_a;
    local_10 = 0xdefe;
  }
  uStack_2a = 0x14d0;
  uStack_2c = 0x587e;
  puStack_30 = (undefined *)DAT_1160_1858;
  uStack_32 = local_8;
  uVar6 = (undefined2)((ulong)param_1 >> 0x10);
  puVar5 = (undefined4 *)param_1;
  puStack_38 = (undefined4 *)0x14d0;
  puStack_3a = (undefined *)0x58fe;
  DAT_1160_1858 = &puStack_30;
  puStack_36 = puVar5;
  uStack_34 = uVar6;
  puStack_2e = &stack0xfffe;
  uStack_34 = FUN_1138_18a9();
  puStack_3a = (undefined *)0x1138;
  uStack_3c = 0x5909;
  puStack_38 = puVar5;
  puStack_36 = (undefined4 *)uVar6;
  puStack_36 = (undefined4 *)FUN_1138_18f4();
  puStack_38 = (undefined4 *)0x1138;
  puStack_3a = (undefined *)0x590f;
  uStack_3e = CREATECOMPATIBLEBITMAP();
  uStack_34 = 0x14d0;
  puStack_36 = (undefined4 *)0x5874;
  puStack_3a = (undefined *)DAT_1160_1858;
  uStack_3c = local_a;
  uStack_40 = 0x14d0;
  puStack_42 = (undefined *)0x592b;
  DAT_1160_1858 = &puStack_3a;
  puStack_38 = (undefined4 *)&stack0xfffe;
  local_e = uStack_3e;
  local_c = SELECTOBJECT();
  uStack_3e = 0x14d0;
  uStack_40 = 0x586e;
  puStack_44 = (undefined *)DAT_1160_1858;
  puVar8 = local_1a;
  puVar1 = (undefined2 *)((int)*param_1 + 0x34);
  DAT_1160_1858 = &puStack_44;
  puVar7 = puVar5;
  uVar4 = uVar6;
  puStack_42 = &stack0xfffe;
  (*(code *)*puVar1)(0x14d0,puVar5,uVar6);
  uVar3 = FUN_1128_16c0((int)*(undefined4 *)((int)puVar5 + 0x9e),
                        (int)((ulong)*(undefined4 *)((int)puVar5 + 0x9e) >> 0x10));
  FILLRECT(0x1128,uVar3,puVar7,uVar4);
  uVar4 = FUN_1138_62b9(puVar5,uVar6);
  FUN_1140_5767(&stack0xfffe,uVar4);
  DAT_1160_1858 = (undefined **)puVar8;
  puStack_44 = (undefined *)0x1138;
  SELECTOBJECT(0x1138,local_c);
  return;
}



/* ---- FUN_1140_5a2d @ 1140:5a2d  (574 octets) ---- */

void __cdecl16far FUN_1140_5a2d(undefined4 param_1)

{
  uint uVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  uint uVar5;
  undefined2 uVar6;
  undefined2 extraout_DX;
  int iVar7;
  undefined2 uVar8;
  undefined2 uVar9;
  undefined4 uVar10;
  undefined *puStack_56;
  undefined *puStack_54;
  undefined2 uStack_52;
  undefined2 *puStack_50;
  undefined *puStack_46;
  undefined *puStack_44;
  undefined2 uStack_42;
  undefined2 uStack_40;
  int iStack_3e;
  undefined2 uStack_3c;
  undefined2 uStack_3a;
  undefined2 local_26;
  uint local_22;
  undefined2 local_14;
  undefined2 local_12;
  undefined4 local_10;
  undefined4 local_a;
  undefined2 local_6;
  undefined2 local_4;
  
  uStack_3a = 0x5a3c;
  FUN_10f0_25a8();
  uStack_3a = DAT_1160_1858;
  uVar8 = (undefined2)((ulong)param_1 >> 0x10);
  iVar7 = (int)param_1;
  uStack_40 = 0x10f0;
  uStack_42 = 0x5a54;
  uVar2 = extraout_DX;
  DAT_1160_1858 = (undefined **)&uStack_3a;
  iStack_3e = iVar7;
  uStack_3c = uVar8;
  local_6 = FUN_1140_588a();
  uStack_40 = 0x1140;
  uStack_42 = 0x5a21;
  puStack_46 = (undefined *)DAT_1160_1858;
  uVar9 = (undefined2)((ulong)DAT_1160_2c54 >> 0x10);
  uVar6 = (undefined2)DAT_1160_2c54;
  DAT_1160_1858 = &puStack_46;
  puStack_44 = &stack0xfffe;
  local_4 = uVar2;
  uVar10 = FUN_10f0_2a04();
  uVar2 = FUN_1128_5a9e();
  puStack_50 = &local_14;
  uStack_52 = 0x1128;
  puStack_54 = (undefined *)0x5aa2;
  FUN_1128_37e4();
  local_a = FUN_1128_25af();
  DAT_1160_1858 = (undefined **)&stack0xffb2;
  puStack_50 = (undefined2 *)local_12;
  uStack_52 = local_14;
  puStack_54 = (undefined *)0x1128;
  puStack_56 = (undefined *)0x5acc;
  local_10 = FUN_1128_25af();
  puStack_50 = (undefined2 *)0x1128;
  uStack_52 = 0x5a15;
  puStack_56 = (undefined *)DAT_1160_1858;
  DAT_1160_1858 = &puStack_56;
  puStack_54 = &stack0xfffe;
  FUN_1128_38b5(local_10,local_a,0,uVar2);
  uVar1 = *(uint *)((int)local_a + 4);
  uVar2 = *(undefined2 *)((int)local_a + 8);
  if (*(char *)(iVar7 + 0xf7) == '\x01') {
    FUN_1128_21d2(uVar10);
    uVar3 = GETDEVICECAPS(0x1128,0x58);
    uVar4 = FUN_1140_3811(iVar7,uVar8);
    local_22 = MULDIV(0x1140,uVar4,uVar3);
    FUN_1128_21d2(uVar10);
    uVar3 = GETDEVICECAPS(0x1128,0x5a);
    uVar8 = FUN_1140_3811(iVar7,uVar8);
    local_26 = MULDIV(0x1140,uVar8,uVar3);
  }
  else {
    local_26 = uVar2;
    local_22 = uVar1;
    if (*(char *)(iVar7 + 0xf7) == '\x02') {
      uVar8 = FUN_10f0_2a72(uVar6,uVar9);
      local_22 = MULDIV(0x10f0,uVar2,uVar8);
      uVar5 = FUN_10f0_2a9a(uVar6,uVar9);
      if (((int)local_22 >> 0xf < (int)uVar5 >> 0xf) ||
         (((int)local_22 >> 0xf <= (int)uVar5 >> 0xf && (local_22 < uVar5)))) {
        local_26 = FUN_10f0_2a72(uVar6,uVar9);
      }
      else {
        local_22 = FUN_10f0_2a9a(uVar6,uVar9);
        uVar8 = FUN_10f0_2a9a(uVar6,uVar9);
        local_26 = MULDIV(0x10f0,uVar1,uVar8);
      }
    }
  }
  uVar10 = FUN_10f0_2a04(uVar6,uVar9);
  uVar6 = FUN_1128_21d2(uVar10);
  STRETCHDIBITS(0x1128,0x20,0xcc,0,local_a,(undefined2)local_10,local_10._2_2_,uVar2,uVar1,0,0,
                local_26,local_22,0,0);
  DAT_1160_1858 = (undefined **)uVar6;
  puStack_56 = (undefined *)0x14d0;
  FUN_1158_019c(local_14,(undefined2)local_10,local_10._2_2_);
  return;
}



/* ---- FUN_1140_5cb9 @ 1140:5cb9  (19 octets) ---- */

void __stdcall16far FUN_1140_5cb9(undefined4 param_1)

{
  FUN_1140_2f19((int)param_1,(int)((ulong)param_1 >> 0x10),0);
  return;
}



/* ---- FUN_1140_5ccc @ 1140:5ccc  (29 octets) ---- */

void __stdcall16far FUN_1140_5ccc(undefined4 param_1)

{
  undefined2 uVar1;
  
  uVar1 = (undefined2)((ulong)param_1 >> 0x10);
  FUN_1140_2f19((int)param_1,uVar1,1);
  FUN_1138_201c((int)param_1,uVar1);
  return;
}



/* ---- FUN_1140_5d45 @ 1140:5d45  (394 octets) ---- */

void __cdecl16far FUN_1140_5d45(undefined4 param_1)

{
  int iVar1;
  undefined2 uVar2;
  int iVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined *puStack_12c;
  undefined *puStack_12a;
  int iStack_128;
  undefined2 uStack_126;
  undefined2 uStack_124;
  undefined *puStack_122;
  undefined2 uStack_120;
  undefined2 uStack_11e;
  undefined2 uStack_11c;
  undefined2 uStack_11a;
  
  uVar4 = (undefined2)((ulong)param_1 >> 0x10);
  iVar3 = (int)param_1;
  if ((((*(char *)(iVar3 + 0x29) != '\0') || (*(char *)(iVar3 + 0x2a) == '\0')) ||
      ((*(byte *)(iVar3 + 0xf5) & 8) != 0)) || (*(char *)(iVar3 + 0xf2) == '\x01')) {
    uStack_11a = 0x5d78;
    FUN_1150_092b();
    uStack_11a = 0x52;
    uStack_11c = 0x1150;
    uStack_11e = 0x5d88;
    FUN_1150_28e6();
    FUN_1158_1399();
  }
  iVar1 = GETCAPTURE();
  if (iVar1 != 0) {
    GETCAPTURE();
    uStack_11a = 0;
    uStack_11c = 0;
    uStack_11e = 0;
    uStack_120 = 0x14d0;
    puStack_122 = (undefined *)0x5dab;
    SENDMESSAGE();
  }
  uStack_11a = 0x5db0;
  RELEASECAPTURE();
  *(byte *)(iVar3 + 0xf5) = *(byte *)(iVar3 + 0xf5) | 8;
  uStack_11a = 0x14d0;
  uStack_11c = 0x5dbe;
  GETACTIVEWINDOW();
  uVar5 = (undefined2)((ulong)DAT_1160_2c2e >> 0x10);
  iVar1 = (int)DAT_1160_2c2e;
  *(int *)(iVar1 + 0x3c) = iVar3;
  *(undefined2 *)(iVar1 + 0x3e) = uVar4;
  uStack_11c = 0;
  uStack_11e = 0x14d0;
  uStack_120 = 0x5df2;
  FUN_1140_0ee7();
  uStack_11e = 0x1140;
  uStack_120 = 0x5d3f;
  uStack_124 = DAT_1160_1858;
  puStack_12a = (undefined *)0x1140;
  puStack_12c = (undefined *)0x5e10;
  DAT_1160_1858 = (undefined **)&uStack_124;
  iStack_128 = iVar3;
  uStack_126 = uVar4;
  puStack_122 = &stack0xfffe;
  FUN_1140_5ccc();
  uStack_126 = 0x1140;
  iStack_128 = 0x5d39;
  puStack_12c = (undefined *)DAT_1160_1858;
  DAT_1160_1858 = &puStack_12c;
  puStack_12a = &stack0xfffe;
  FUN_1138_62b9(iVar3,uVar4);
  SENDMESSAGE(0x1138,0,0,0,0xf00);
  *(undefined2 *)(iVar3 + 0x104) = 0;
  do {
    FUN_1140_731a((int)DAT_1160_2c2a,(int)((ulong)DAT_1160_2c2a >> 0x10));
    if (*(char *)((int)DAT_1160_2c2a + 0x59) == '\0') {
      if (*(int *)(iVar3 + 0x104) != 0) {
        FUN_1140_56d9(iVar3,uVar4);
      }
    }
    else {
      *(undefined2 *)(iVar3 + 0x104) = 2;
    }
  } while (*(int *)(iVar3 + 0x104) == 0);
  uVar2 = FUN_1138_62b9(iVar3,uVar4);
  SENDMESSAGE(0x1138,0,0,0,0xf01);
  uVar5 = FUN_1138_62b9(iVar3,uVar4);
  GETACTIVEWINDOW(0x1138,uVar5,uVar2);
  DAT_1160_1858 = (undefined **)uVar5;
  puStack_12c = (undefined *)0x14d0;
  FUN_1140_5cb9(iVar3,uVar4);
  return;
}



/* ---- FUN_1140_5f1d @ 1140:5f1d  (32 octets) ---- */

void __stdcall16far FUN_1140_5f1d(undefined4 param_1)

{
  FUN_1138_62b9((int)param_1,(int)((ulong)param_1 >> 0x10));
  POSTMESSAGE(0x1138,0,0,0,0xf21);
  return;
}



/* ---- FUN_1140_5f3d @ 1140:5f3d  (67 octets) ---- */

undefined2 __stdcall16far FUN_1140_5f3d(undefined4 *param_1)

{
  undefined2 *puVar1;
  int unaff_BP;
  undefined2 unaff_SS;
  undefined4 param_2;
  undefined *puVar2;
  undefined local_106 [258];
  undefined2 local_4;
  int iStack_2;
  
  iStack_2 = unaff_BP + 1;
  local_4 = 0x1160;
  puVar2 = local_106;
  FUN_1150_0e6e((int)param_2 + 0x12,(int)((ulong)param_2 >> 0x10));
  puVar1 = (undefined2 *)((int)*param_1 + 0x24);
  (*(code *)*puVar1)(0x1150,(undefined4 *)param_1,(int)((ulong)param_1 >> 0x10),puVar2);
  return 1;
}



/* ---- FUN_1140_5f80 @ 1140:5f80  (224 octets) ---- */

undefined4 __stdcall16far
FUN_1140_5f80(undefined4 param_1,char param_2,undefined2 param_3,undefined2 param_4)

{
  undefined extraout_AH;
  undefined2 uVar1;
  undefined2 uVar2;
  int iVar3;
  undefined2 uVar4;
  undefined4 uVar5;
  
  if (param_2 != '\0') {
    FUN_1158_1fe2();
  }
  uVar4 = (undefined2)((ulong)param_1 >> 0x10);
  iVar3 = (int)param_1;
  FUN_1148_4bd9(iVar3,uVar4,0,param_3,param_4);
  FUN_1140_61fd(iVar3,uVar4);
  uVar5 = FUN_1148_1d08(0x3c9,0x1148,CONCAT11(extraout_AH,1));
  *(undefined2 *)(iVar3 + 0x1a) = (int)uVar5;
  *(undefined2 *)(iVar3 + 0x1c) = (int)((ulong)uVar5 >> 0x10);
  uVar5 = FUN_1158_1f50(0x2a3,0x1148,1);
  *(undefined2 *)(iVar3 + 0x22) = (int)uVar5;
  *(undefined2 *)(iVar3 + 0x24) = (int)((ulong)uVar5 >> 0x10);
  uVar1 = GETDC(0x1158,0);
  uVar5 = MAKEPROCINSTANCE(0x14d0,DAT_1160_188c,0x5f3d);
  ENUMFONTS(0x14d0,*(undefined2 *)(iVar3 + 0x1a),*(undefined2 *)(iVar3 + 0x1c),uVar5,0,0);
  FREEPROCINSTANCE(0x14d0,(int)uVar5);
  uVar2 = GETDEVICECAPS(0x14d0,0x5a);
  *(undefined2 *)(iVar3 + 0x1e) = uVar2;
  uVar2 = 0;
  RELEASEDC(0x14d0,uVar1);
  if (param_2 != '\0') {
    DAT_1160_1858 = uVar2;
  }
  return param_1;
}



/* ---- FUN_1140_6060 @ 1140:6060  (69 octets) ---- */

void __stdcall16far FUN_1140_6060(undefined4 param_1,char param_2)

{
  int iVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  FUN_1158_1f7f((int)*(undefined4 *)(iVar1 + 0x22),
                (int)((ulong)*(undefined4 *)(iVar1 + 0x22) >> 0x10));
  FUN_1158_1f7f((int)*(undefined4 *)(iVar1 + 0x1a),
                (int)((ulong)*(undefined4 *)(iVar1 + 0x1a) >> 0x10));
  FUN_1140_625f(iVar1,uVar2);
  FUN_1148_4c2b(iVar1,uVar2,0);
  if (param_2 != '\0') {
    FUN_1158_200f();
  }
  return;
}



/* ---- FUN_1140_60a5 @ 1140:60a5  (21 octets) ---- */

undefined2 __stdcall16far FUN_1140_60a5(void)

{
  undefined2 uVar1;
  
  uVar1 = GETSYSTEMMETRICS();
  return uVar1;
}



/* ---- FUN_1140_60ba @ 1140:60ba  (21 octets) ---- */

undefined2 __stdcall16far FUN_1140_60ba(void)

{
  undefined2 uVar1;
  
  uVar1 = GETSYSTEMMETRICS();
  return uVar1;
}



/* ---- FUN_1140_60cf @ 1140:60cf  (37 octets) ---- */

undefined4 __stdcall16far FUN_1140_60cf(undefined4 param_1,undefined2 param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)((int)param_1 + 0x22);
  uVar1 = FUN_1148_0dd0((int)uVar1,(int)((ulong)uVar1 >> 0x10),param_2);
  return uVar1;
}



/* ---- FUN_1140_60f4 @ 1140:60f4  (25 octets) ---- */

undefined2 __stdcall16far FUN_1140_60f4(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)((int)param_1 + 0x22);
  return *(undefined2 *)((int)uVar1 + 8);
}



/* ---- FUN_1140_610d @ 1140:610d  (143 octets) ---- */

void __stdcall16far FUN_1140_610d(undefined4 param_1)

{
  undefined2 uVar1;
  int iVar2;
  undefined2 uVar3;
  
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  iVar2 = (int)param_1;
  if ((*(int *)(iVar2 + 0x3a) != *(int *)(iVar2 + 0x32)) ||
     (*(int *)(iVar2 + 0x38) != *(int *)(iVar2 + 0x30))) {
    uVar1 = *(undefined2 *)(iVar2 + 0x32);
    *(undefined2 *)(iVar2 + 0x38) = *(undefined2 *)(iVar2 + 0x30);
    *(undefined2 *)(iVar2 + 0x3a) = uVar1;
    if (*(int *)(iVar2 + 0x4a) != 0) {
      (*(code *)*(undefined2 *)(iVar2 + 0x48))();
    }
  }
  if ((*(int *)(iVar2 + 0x36) != *(int *)(iVar2 + 0x2e)) ||
     (*(int *)(iVar2 + 0x34) != *(int *)(iVar2 + 0x2c))) {
    uVar1 = *(undefined2 *)(iVar2 + 0x2e);
    *(undefined2 *)(iVar2 + 0x34) = *(undefined2 *)(iVar2 + 0x2c);
    *(undefined2 *)(iVar2 + 0x36) = uVar1;
    if (*(int *)(iVar2 + 0x42) != 0) {
      (*(code *)*(undefined2 *)(iVar2 + 0x40))();
    }
  }
  return;
}



/* ---- FUN_1140_619c @ 1140:619c  (27 octets) ---- */

void __stdcall16far FUN_1140_619c(undefined4 param_1,undefined2 param_2,undefined2 param_3)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)((int)param_1 + 0x22);
  FUN_1148_0c2b((int)uVar1,(int)((ulong)uVar1 >> 0x10),param_2,param_3);
  return;
}



/* ---- FUN_1140_61b7 @ 1140:61b7  (70 octets) ---- */

void __stdcall16far FUN_1140_61b7(undefined4 param_1,undefined2 param_2,undefined2 param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined2 uVar3;
  
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  uVar1 = *(undefined4 *)((int)param_1 + 0x22);
  FUN_1148_0fa7((int)uVar1,(int)((ulong)uVar1 >> 0x10),param_2,param_3);
  uVar1 = *(undefined4 *)((int)param_1 + 0x22);
  if ((*(int *)((int)uVar1 + 8) == 0) &&
     (uVar3 = (undefined2)((ulong)DAT_1160_2c2a >> 0x10), iVar2 = (int)DAT_1160_2c2a,
     *(int *)(iVar2 + 0x43) != 0 || *(int *)(iVar2 + 0x45) != 0)) {
    FUN_1138_6b1f((int)*(undefined4 *)(iVar2 + 0x43),
                  (int)((ulong)*(undefined4 *)(iVar2 + 0x43) >> 0x10));
  }
  return;
}



/* ---- FUN_1140_61fd @ 1140:61fd  (98 octets) ---- */

void __stdcall16far FUN_1140_61fd(undefined4 param_1)

{
  undefined2 uVar1;
  undefined2 uVar2;
  undefined2 unaff_CS;
  undefined2 uVar3;
  undefined2 local_6;
  undefined2 local_4;
  
  uVar3 = 0x14d0;
  uVar1 = LOADCURSOR(unaff_CS,0x7f00,0);
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  *(undefined2 *)((int)param_1 + 0x2a) = uVar1;
  local_4 = -0x11;
  while( true ) {
    if (local_4 < -0xb) {
      local_6 = DAT_1160_188c;
    }
    else {
      local_6 = 0;
    }
    uVar1 = LOADCURSOR(uVar3,*(undefined2 *)(local_4 * 4 + 0x16a2),
                       *(undefined2 *)(local_4 * 4 + 0x16a4));
    uVar3 = 0x1140;
    FUN_1140_62ef((int)param_1,uVar2,uVar1,local_6);
    if (local_4 == -2) break;
    local_4 = local_4 + 1;
  }
  return;
}



/* ---- FUN_1140_625f @ 1140:625f  (144 octets) ---- */

void __stdcall16far FUN_1140_625f(undefined4 param_1)

{
  undefined2 *puVar1;
  int iVar2;
  int iVar3;
  undefined2 uVar4;
  undefined2 unaff_CS;
  undefined2 uVar5;
  undefined4 local_6;
  
  uVar4 = (undefined2)((ulong)param_1 >> 0x10);
  iVar3 = (int)param_1;
  local_6 = (undefined2 *)
            CONCAT22(*(undefined2 *)(iVar3 + 0x28),(undefined2 *)*(undefined2 *)(iVar3 + 0x26));
  while ((undefined2 *)local_6 != (undefined2 *)0x0 || local_6._2_2_ != 0) {
    if (((int)((undefined2 *)local_6)[2] < -0xb) || (0 < (int)((undefined2 *)local_6)[2])) {
      DESTROYCURSOR(unaff_CS,((undefined2 *)local_6)[3]);
    }
    puVar1 = (undefined2 *)*local_6;
    uVar5 = ((undefined2 *)local_6)[1];
    unaff_CS = 0x1158;
    FUN_1158_019c(8,(undefined2 *)local_6,local_6._2_2_);
    local_6 = (undefined2 *)CONCAT22(uVar5,puVar1);
  }
  uVar5 = 0;
  iVar2 = LOADCURSOR(unaff_CS,0x7f00,0);
  if (iVar2 != *(int *)(iVar3 + 0x2a)) {
    DESTROYCURSOR(0x14d0,*(undefined2 *)(iVar3 + 0x2a),uVar5);
  }
  return;
}



/* ---- FUN_1140_62ef @ 1140:62ef  (79 octets) ---- */

void __stdcall16far FUN_1140_62ef(undefined4 param_1,undefined2 param_2,undefined2 param_3)

{
  undefined2 uVar1;
  undefined2 *puVar2;
  undefined2 uVar3;
  int iVar4;
  undefined2 uVar5;
  undefined2 *puVar6;
  
  puVar6 = (undefined2 *)FUN_1158_0182(8);
  uVar3 = (undefined2)((ulong)puVar6 >> 0x10);
  puVar2 = (undefined2 *)puVar6;
  uVar5 = (undefined2)((ulong)param_1 >> 0x10);
  iVar4 = (int)param_1;
  uVar1 = *(undefined2 *)(iVar4 + 0x28);
  *puVar6 = *(undefined2 *)(iVar4 + 0x26);
  puVar2[1] = uVar1;
  puVar2[2] = param_3;
  puVar2[3] = param_2;
  *(undefined2 *)(iVar4 + 0x26) = puVar2;
  *(undefined2 *)(iVar4 + 0x28) = uVar3;
  return;
}



/* ---- FUN_1140_633e @ 1140:633e  (107 octets) ---- */

undefined2 __stdcall16far FUN_1140_633e(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined2 uVar2;
  undefined4 local_8;
  undefined2 local_4;
  
  local_4 = 0;
  if (param_2 != -1) {
    uVar2 = (undefined2)((ulong)param_1 >> 0x10);
    iVar1 = (int)param_1;
    for (local_8 = (undefined2 *)
                   CONCAT22(*(undefined2 *)(iVar1 + 0x28),
                            (undefined2 *)*(undefined2 *)(iVar1 + 0x26));
        ((undefined2 *)local_8 != (undefined2 *)0x0 || local_8._2_2_ != 0 &&
        (((undefined2 *)local_8)[2] != param_2));
        local_8 = (undefined2 *)CONCAT22(((undefined2 *)local_8)[1],(undefined2 *)*local_8)) {
    }
    if ((undefined2 *)local_8 == (undefined2 *)0x0 && local_8._2_2_ == 0) {
      local_4 = *(undefined2 *)(iVar1 + 0x2a);
    }
    else {
      local_4 = ((undefined2 *)local_8)[3];
    }
  }
  return local_4;
}



/* ---- FUN_1140_63a9 @ 1140:63a9  (132 octets) ---- */

void __stdcall16far FUN_1140_63a9(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 local_6;
  undefined2 local_4;
  
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  iVar2 = (int)param_1;
  if (param_2 != *(int *)(iVar2 + 0x20)) {
    *(int *)(iVar2 + 0x20) = param_2;
    if (param_2 == 0) {
      GETCURSORPOS();
      iVar1 = WINDOWFROMPOINT(0x14d0,local_6);
      if (iVar1 != 0) {
        uVar3 = SENDMESSAGE(0x14d0,local_6,local_4,0,0x84);
        SENDMESSAGE(0x14d0,uVar3,0x200,iVar1,0x20);
        return;
      }
    }
    uVar3 = FUN_1140_633e(iVar2,uVar3,param_2);
    SETCURSOR(0x1140,uVar3);
  }
  return;
}



/* ---- FUN_1140_642d @ 1140:642d  (40 octets) ---- */

void __stdcall16far FUN_1140_642d(void)

{
  undefined2 unaff_SS;
  
  if (*(int *)&DAT_1160_2c2a != 0 || *(int *)((int)(undefined4 *)&DAT_1160_2c2a + 2) != 0) {
    FUN_1140_77f5((int)*(undefined4 *)&DAT_1160_2c2a,
                  (int)((ulong)*(undefined4 *)&DAT_1160_2c2a >> 0x10));
  }
  return;
}



/* ---- FUN_1140_6455 @ 1140:6455  (666 octets) ---- */

undefined4 __stdcall16far
FUN_1140_6455(undefined4 param_1,char param_2,undefined2 param_3,undefined2 param_4)

{
  undefined extraout_AH;
  int iVar1;
  undefined2 uVar2;
  undefined extraout_AH_00;
  int iVar3;
  int iVar4;
  undefined2 uVar5;
  undefined2 unaff_CS;
  undefined2 unaff_SS;
  undefined4 uVar6;
  undefined2 uVar7;
  undefined2 uVar8;
  undefined2 uVar9;
  undefined2 uVar10;
  undefined *puVar11;
  undefined2 uVar12;
  undefined local_220 [256];
  undefined local_120;
  undefined local_11f [255];
  undefined local_20 [26];
  undefined *local_6;
  
  if (param_2 != '\0') {
    unaff_CS = 0x1158;
    FUN_1158_1fe2();
  }
  GETMODULEFILENAME(unaff_CS,0x100,&local_120,unaff_SS);
  Ordinal_6(0x14d0,&local_120);
  local_6 = (undefined *)FUN_1150_0e47(0x5c,&local_120,unaff_SS);
  if (local_6 != (undefined *)0x0) {
    FUN_1150_0cdf((int)local_6 + 1,(int)((ulong)local_6 >> 0x10),&local_120,unaff_SS);
  }
  local_6 = (undefined *)FUN_1150_0e1f(0x2e,&local_120,unaff_SS);
  if (local_6 != (undefined *)0x0) {
    *local_6 = 0;
  }
  ANSILOWER(0x1150,local_11f);
  iVar3 = (int)param_1;
  uVar5 = (undefined2)((ulong)param_1 >> 0x10);
  if (DAT_1160_1876 != 0) {
    uVar6 = FUN_1140_1489(0x6a77,0x1140,iVar3,uVar5);
    *(undefined2 *)(iVar3 + 0x1c) = (int)uVar6;
    *(undefined2 *)(iVar3 + 0x1e) = (int)((ulong)uVar6 >> 0x10);
    uVar2 = 0x14d0;
    uVar7 = DAT_1160_188c;
    iVar4 = GETCLASSINFO(0x1140,local_20,unaff_SS,DAT_1160_16b4,DAT_1160_16b6);
    if (iVar4 == 0) {
      DAT_1160_16a8 = DAT_1160_188c;
      uVar12 = 0x1160;
      uVar2 = 0x14d0;
      iVar4 = REGISTERCLASS(0x14d0,0x169e);
      if (iVar4 == 0) {
        puVar11 = local_220;
        FUN_1150_092b(0xf027);
        uVar6 = FUN_1150_28e6(0x22,0x1138,CONCAT11(extraout_AH,1),puVar11,unaff_SS);
        uVar2 = 0x1158;
        FUN_1158_1399(0x1150,uVar6,uVar12,uVar7);
      }
    }
    puVar11 = &local_120;
    uVar10 = 0x940a;
    uVar9 = 0;
    uVar8 = 0;
    iVar4 = GETSYSTEMMETRICS(uVar2,0,0,0x940a,puVar11);
    iVar4 = iVar4 / 2;
    uVar12 = 1;
    uVar7 = 0x14d0;
    iVar1 = GETSYSTEMMETRICS(0x14d0,1,iVar4);
    uVar7 = CREATEWINDOW(0x14d0,0,0,DAT_1160_188c,0,0,0,0,iVar1 / 2,uVar7,uVar12,iVar4,uVar2,uVar8,
                         uVar9,uVar10,puVar11);
    *(undefined2 *)(iVar3 + 0x1a) = uVar7;
    SETWINDOWLONG(0x14d0,*(undefined2 *)(iVar3 + 0x1c),*(undefined2 *)(iVar3 + 0x1e),0xfffc);
    DAT_1160_002e = *(undefined2 *)(iVar3 + 0x1a);
  }
  uVar7 = DAT_1160_1718;
  *(undefined2 *)(iVar3 + 0x2c) = DAT_1160_1716;
  *(undefined2 *)(iVar3 + 0x2e) = uVar7;
  uVar7 = DAT_1160_1718;
  *(undefined2 *)(iVar3 + 0x28) = DAT_1160_1716;
  *(undefined2 *)(iVar3 + 0x2a) = uVar7;
  uVar2 = DAT_1160_1718;
  uVar7 = DAT_1160_1716;
  *(undefined2 *)(iVar3 + 0x4b) = DAT_1160_1716;
  *(undefined2 *)(iVar3 + 0x4d) = uVar2;
  uVar6 = FUN_1128_640e(0x8fc,0x1128,CONCAT11((char)((uint)uVar7 >> 8),1));
  *(undefined2 *)(iVar3 + 0x55) = (int)uVar6;
  *(undefined2 *)(iVar3 + 0x57) = (int)((ulong)uVar6 >> 0x10);
  uVar6 = FUN_1158_1f50(0x2a3,0x1148,1);
  *(undefined2 *)(iVar3 + 0x4f) = (int)uVar6;
  *(undefined2 *)(iVar3 + 0x51) = (int)((ulong)uVar6 >> 0x10);
  uVar7 = DAT_1160_188c;
  uVar2 = LOADICON(0x1158,0x16c6,0x1160);
  FUN_1128_68b7((int)*(undefined4 *)(iVar3 + 0x55),
                (int)((ulong)*(undefined4 *)(iVar3 + 0x55) >> 0x10),uVar2);
  uVar2 = (undefined2)((ulong)*(undefined4 *)(iVar3 + 0x55) >> 0x10);
  iVar4 = (int)*(undefined4 *)(iVar3 + 0x55);
  *(undefined2 *)(iVar4 + 4) = 0x8070;
  *(undefined2 *)(iVar4 + 6) = 0x1140;
  *(int *)(iVar4 + 8) = iVar3;
  *(undefined2 *)(iVar4 + 10) = uVar5;
  FUN_1148_4bd9(iVar3,uVar5,0,param_3,param_4);
  FUN_1140_126a();
  uVar6 = FUN_1158_1f50(0x2a3,0x1148,CONCAT11(extraout_AH_00,1));
  *(undefined2 *)(iVar3 + 0x5b) = (int)uVar6;
  *(undefined2 *)(iVar3 + 0x5d) = (int)((ulong)uVar6 >> 0x10);
  *(undefined *)(iVar3 + 0x47) = 0;
  *(undefined2 *)(iVar3 + 0x35) = 0;
  *(undefined2 *)(iVar3 + 0x37) = 0;
  *(undefined2 *)(iVar3 + 0x43) = 0;
  *(undefined2 *)(iVar3 + 0x45) = 0;
  *(undefined2 *)(iVar3 + 0x31) = 0xffff;
  *(undefined2 *)(iVar3 + 0x33) = 0x80;
  *(undefined2 *)(iVar3 + 0x41) = 800;
  *(undefined *)(iVar3 + 0x5a) = 1;
  if (param_2 != '\0') {
    DAT_1160_1858 = uVar7;
  }
  return param_1;
}



/* ---- FUN_1140_66ef @ 1140:66ef  (107 octets) ---- */

void __stdcall16far FUN_1140_66ef(undefined4 param_1,char param_2)

{
  int iVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  *(undefined *)(iVar1 + 0x5a) = 0;
  FUN_1148_4c2b(iVar1,uVar2,0);
  if (DAT_1160_1876 != 0) {
    if (*(int *)(iVar1 + 0x1a) != 0) {
      DESTROYWINDOW(0x1148,*(undefined2 *)(iVar1 + 0x1a));
    }
  }
  if (*(int *)(iVar1 + 0x1c) != 0 || *(int *)(iVar1 + 0x1e) != 0) {
    FUN_1140_15a5(*(undefined2 *)(iVar1 + 0x1c),*(undefined2 *)(iVar1 + 0x1e));
  }
  FUN_1140_13d0();
  FUN_1158_1f7f((int)*(undefined4 *)(iVar1 + 0x5b),
                (int)((ulong)*(undefined4 *)(iVar1 + 0x5b) >> 0x10));
  if (param_2 != '\0') {
    FUN_1158_200f();
  }
  return;
}



/* ---- FUN_1140_675a @ 1140:675a  (188 octets) ---- */

void __stdcall16far FUN_1140_675a(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  if ((*(int *)(iVar1 + 0x22) == param_3) && (*(int *)(iVar1 + 0x20) == param_2)) {
    *(undefined2 *)(iVar1 + 0x20) = 0;
    *(undefined2 *)(iVar1 + 0x22) = 0;
  }
  if ((*(int *)(iVar1 + 0x26) == param_3) && (*(int *)(iVar1 + 0x24) == param_2)) {
    *(undefined2 *)(iVar1 + 0x24) = 0;
    *(undefined2 *)(iVar1 + 0x26) = 0;
  }
  uVar2 = (undefined2)((ulong)DAT_1160_2c2e >> 0x10);
  iVar1 = (int)DAT_1160_2c2e;
  if ((*(int *)(iVar1 + 0x2e) == param_3) && (*(int *)(iVar1 + 0x2c) == param_2)) {
    *(undefined2 *)(iVar1 + 0x2c) = 0;
    *(undefined2 *)(iVar1 + 0x2e) = 0;
  }
  uVar2 = (undefined2)((ulong)DAT_1160_2c2e >> 0x10);
  iVar1 = (int)DAT_1160_2c2e;
  if ((*(int *)(iVar1 + 0x32) == param_3) && (*(int *)(iVar1 + 0x30) == param_2)) {
    *(undefined2 *)(iVar1 + 0x30) = 0;
    *(undefined2 *)(iVar1 + 0x32) = 0;
  }
  uVar2 = (undefined2)((ulong)DAT_1160_2c2e >> 0x10);
  iVar1 = (int)DAT_1160_2c2e;
  if ((*(int *)(iVar1 + 0x3e) == param_3) && (*(int *)(iVar1 + 0x3c) == param_2)) {
    *(undefined2 *)(iVar1 + 0x3c) = 0;
    *(undefined2 *)(iVar1 + 0x3e) = 0;
  }
  FUN_1140_610d((int)DAT_1160_2c2e,(int)((ulong)DAT_1160_2c2e >> 0x10));
  return;
}



/* ---- FUN_1140_6816 @ 1140:6816  (147 octets) ---- */

undefined2 __stdcall16far FUN_1140_6816(int *param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  undefined2 uVar4;
  undefined2 unaff_CS;
  undefined2 unaff_SS;
  undefined2 local_6;
  
  local_6 = 1;
  iVar2 = GETWINDOW(unaff_CS,4);
  if (iVar2 == *(int *)((int)*(undefined4 *)&DAT_1160_2c2a + 0x1a)) {
    uVar3 = GETWINDOWLONG(0x14d0,0xffec);
    if (((uVar3 & 8) == 0) ||
       ((uVar4 = (undefined2)((ulong)*(undefined4 *)&DAT_1160_2c2a >> 0x10),
        iVar2 = (int)*(undefined4 *)&DAT_1160_2c2a,
        *(int *)(iVar2 + 0x20) != 0 || *(int *)(iVar2 + 0x22) != 0 &&
        (uVar1 = *(undefined4 *)((int)*(undefined4 *)&DAT_1160_2c2a + 0x20),
        iVar2 = FUN_1138_62b9((int)uVar1,(int)((ulong)uVar1 >> 0x10)), iVar2 == param_2)))) {
      *param_1 = param_2;
      local_6 = 0;
    }
    else {
      uVar1 = *(undefined4 *)((int)*(undefined4 *)&DAT_1160_2c2a + 0x4f);
      FUN_1148_0c2b((int)uVar1,(int)((ulong)uVar1 >> 0x10),param_2,0);
    }
    return local_6;
  }
  return 1;
}



/* ---- FUN_1140_68a9 @ 1140:68a9  (186 octets) ---- */

void __stdcall16far FUN_1140_68a9(undefined4 param_1)

{
  uint uVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 unaff_CS;
  undefined2 unaff_SS;
  undefined2 local_6;
  int local_4;
  
  if (*(int *)((int)DAT_1160_2c2a + 0x1a) != 0) {
    uVar3 = (undefined2)((ulong)param_1 >> 0x10);
    iVar2 = (int)param_1;
    if (*(int *)(iVar2 + 0x53) == 0) {
      local_6 = *(undefined2 *)(iVar2 + 0x1a);
      ENUMWINDOWS(unaff_CS,&local_6,unaff_SS,0x6816);
      if (*(int *)((int)*(undefined4 *)(iVar2 + 0x4f) + 8) != 0) {
        local_6 = GETWINDOW(0x14d0,3);
        uVar1 = GETWINDOWLONG(0x14d0,0xffec);
        if ((uVar1 & 8) != 0) {
          local_6 = 0xfffe;
        }
        local_4 = *(int *)((int)*(undefined4 *)(iVar2 + 0x4f) + 8) + -1;
        if (-1 < local_4) {
          while( true ) {
            FUN_1148_0dd0((int)*(undefined4 *)(iVar2 + 0x4f),
                          (int)((ulong)*(undefined4 *)(iVar2 + 0x4f) >> 0x10),local_4);
            SETWINDOWPOS(0x1148,0x13,0,0,0,0,local_6);
            if (local_4 == 0) break;
            local_4 = local_4 + -1;
          }
        }
      }
    }
    *(int *)(iVar2 + 0x53) = *(int *)(iVar2 + 0x53) + 1;
  }
  return;
}



/* ---- FUN_1140_6963 @ 1140:6963  (109 octets) ---- */

void __stdcall16far FUN_1140_6963(undefined4 param_1)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 local_4;
  
  if (*(int *)((int)DAT_1160_2c2a + 0x1a) != 0) {
    uVar2 = (undefined2)((ulong)param_1 >> 0x10);
    iVar1 = (int)param_1;
    *(int *)(iVar1 + 0x53) = *(int *)(iVar1 + 0x53) + -1;
    if (*(int *)(iVar1 + 0x53) == 0) {
      local_4 = *(int *)((int)*(undefined4 *)(iVar1 + 0x4f) + 8) + -1;
      if (-1 < local_4) {
        while( true ) {
          FUN_1148_0dd0((int)*(undefined4 *)(iVar1 + 0x4f),
                        (int)((ulong)*(undefined4 *)(iVar1 + 0x4f) >> 0x10),local_4);
          SETWINDOWPOS(0x1148,0x13,0,0,0,0,0xffff);
          if (local_4 == 0) break;
          local_4 = local_4 + -1;
        }
      }
      FUN_1148_0c75((int)*(undefined4 *)(iVar1 + 0x4f),
                    (int)((ulong)*(undefined4 *)(iVar1 + 0x4f) >> 0x10));
    }
  }
  return;
}



/* ---- FUN_1140_69d0 @ 1140:69d0  (66 octets) ---- */

void FUN_1140_69d0(int param_1)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined2 uVar3;
  undefined2 unaff_CS;
  undefined2 unaff_SS;
  undefined4 uVar4;
  
  puVar1 = (undefined2 *)*(undefined4 *)(param_1 + 10);
  uVar3 = (undefined2)((ulong)puVar1 >> 0x10);
  puVar2 = (undefined2 *)puVar1;
  uVar4 = DEFWINDOWPROC(unaff_CS,puVar2[2],puVar2[3],puVar2[1],*puVar1);
  puVar2[4] = (int)uVar4;
  puVar2[5] = (int)((ulong)uVar4 >> 0x10);
  return;
}



/* ---- FUN_1140_6f0d @ 1140:6f0d  (92 octets) ---- */

void __stdcall16far FUN_1140_6f0d(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  iVar2 = (int)param_1;
  iVar1 = ISICONIC();
  if (iVar1 == 0) {
    FUN_1140_68a9(iVar2,uVar3);
    SETACTIVEWINDOW(0x1140,*(undefined2 *)(iVar2 + 0x1a));
    uVar4 = *(undefined2 *)(iVar2 + 0x1a);
    SHOWWINDOW(0x14d0,6);
    if (*(int *)(iVar2 + 0xa7) != 0) {
      (*(code *)*(undefined2 *)(iVar2 + 0xa5))
                (0x14d0,*(undefined2 *)(iVar2 + 0xa9),*(undefined2 *)(iVar2 + 0xab),iVar2,uVar3,
                 uVar4);
    }
  }
  return;
}



/* ---- FUN_1140_6f69 @ 1140:6f69  (127 octets) ---- */

void __stdcall16far FUN_1140_6f69(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  iVar2 = (int)param_1;
  iVar1 = ISICONIC();
  if (iVar1 != 0) {
    SETACTIVEWINDOW(0x14d0,*(undefined2 *)(iVar2 + 0x1a));
    uVar6 = *(undefined2 *)(iVar2 + 0x1a);
    SHOWWINDOW(0x14d0,9);
    uVar5 = 0x1140;
    FUN_1140_6963(iVar2,uVar3);
    uVar4 = (undefined2)((ulong)DAT_1160_2c2e >> 0x10);
    iVar1 = (int)DAT_1160_2c2e;
    if (*(int *)(iVar1 + 0x2c) != 0 || *(int *)(iVar1 + 0x2e) != 0) {
      uVar4 = FUN_1138_62b9((int)*(undefined4 *)(iVar1 + 0x2c),
                            (int)((ulong)*(undefined4 *)(iVar1 + 0x2c) >> 0x10));
      uVar5 = 0x14d0;
      SETFOCUS(0x1138,uVar4,uVar6);
    }
    if (*(int *)(iVar2 + 0xaf) != 0) {
      (*(code *)*(undefined2 *)(iVar2 + 0xad))
                (uVar5,*(undefined2 *)(iVar2 + 0xb1),*(undefined2 *)(iVar2 + 0xb3),iVar2,uVar3);
    }
  }
  return;
}



/* ---- FUN_1140_6fe8 @ 1140:6fe8  (80 octets) ---- */

void __stdcall16far FUN_1140_6fe8(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  iVar2 = (int)param_1;
  if (*(int *)(iVar2 + 0x1a) != 0) {
    uVar4 = *(undefined2 *)(iVar2 + 0x1a);
    iVar1 = GETLASTACTIVEPOPUP();
    if ((iVar1 != 0) && (iVar1 != *(int *)(iVar2 + 0x1a))) {
      iVar2 = ISWINDOWVISIBLE(0x14d0,iVar1,uVar4);
      if (iVar2 != 0) {
        iVar2 = ISWINDOWENABLED(0x14d0,iVar1);
        if (iVar2 != 0) {
          BRINGWINDOWTOTOP(0x14d0,iVar1);
        }
      }
    }
  }
  return;
}



/* ---- FUN_1140_7038 @ 1140:7038  (90 octets) ---- */

void __stdcall16far FUN_1140_7038(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined2 uVar2;
  undefined2 unaff_SS;
  undefined *puVar3;
  undefined local_202 [256];
  undefined local_102 [256];
  
  uVar2 = (undefined2)((ulong)param_2 >> 0x10);
  if (DAT_1160_1876 == 0) {
    uVar1 = *(undefined4 *)((int)param_1 + 0x4b);
    FUN_1158_17e7(0xff,(int)param_2,uVar2,(int)uVar1,(int)((ulong)uVar1 >> 0x10));
  }
  else {
    GETWINDOWTEXT();
    puVar3 = local_202;
    FUN_1150_0e6e(local_102,unaff_SS);
    FUN_1158_17e7(0xff,(int)param_2,uVar2,puVar3,unaff_SS);
  }
  return;
}



/* ---- FUN_1140_70d4 @ 1140:70d4  (48 octets) ---- */

bool __stdcall16far FUN_1140_70d4(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined2 unaff_CS;
  undefined local_3;
  
  local_3 = false;
  if (*(int *)((int)param_1 + 99) != 0) {
    iVar1 = ISDIALOGMESSAGE(unaff_CS,(int)param_2,(int)((ulong)param_2 >> 0x10));
    local_3 = iVar1 != 0;
  }
  return local_3;
}



/* ---- FUN_1140_7104 @ 1140:7104  (101 octets) ---- */

undefined2 __stdcall16far FUN_1140_7104(undefined4 param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 unaff_CS;
  undefined local_3;
  
  local_3 = false;
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  iVar2 = (int)param_1;
  uVar1 = *(uint *)(iVar2 + 0x20) | *(uint *)(iVar2 + 0x22);
  if ((((uVar1 != 0) && (*(char *)((int)*(undefined4 *)(iVar2 + 0x20) + 0xf2) == '\x02')) &&
      (uVar3 = (undefined2)((ulong)DAT_1160_2c2e >> 0x10), iVar2 = (int)DAT_1160_2c2e,
      uVar1 = *(uint *)(iVar2 + 0x30) | *(uint *)(iVar2 + 0x32), uVar1 != 0)) &&
     (*(char *)((int)*(undefined4 *)(iVar2 + 0x30) + 0xf2) == '\x01')) {
    iVar2 = TRANSLATEMDISYSACCEL(unaff_CS,(int)param_2,(int)((ulong)param_2 >> 0x10));
    local_3 = iVar2 != 0;
    uVar1 = CONCAT11((char)((uint)-iVar2 >> 8),local_3);
  }
  return CONCAT11((char)(uVar1 >> 8),local_3);
}



/* ---- FUN_1140_7169 @ 1140:7169  (141 octets) ---- */

undefined __stdcall16far FUN_1140_7169(undefined4 param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  long lVar6;
  undefined local_3;
  
  local_3 = 0;
  uVar3 = (undefined2)((ulong)param_2 >> 0x10);
  piVar2 = (int *)param_2;
  if ((0xff < (uint)piVar2[1]) && ((uint)piVar2[1] < 0x109)) {
    uVar5 = 0x14d0;
    iVar1 = GETCAPTURE();
    if (iVar1 == 0) {
      uVar4 = (undefined2)((ulong)param_1 >> 0x10);
      iVar1 = (int)param_1;
      if ((*(int *)(iVar1 + 0x20) != 0 || *(int *)(iVar1 + 0x22) != 0) &&
         (*param_2 == *(int *)((int)*(undefined4 *)(iVar1 + 0x20) + 0x10e))) {
        uVar5 = 0x1138;
        FUN_1138_62b9((int)*(undefined4 *)(iVar1 + 0x20),
                      (int)((ulong)*(undefined4 *)(iVar1 + 0x20) >> 0x10));
      }
      lVar6 = SENDMESSAGE(uVar5,piVar2[3],piVar2[4],piVar2[2],piVar2[1] + 0x2000);
      if (lVar6 != 0) {
        local_3 = 1;
      }
    }
  }
  return local_3;
}



/* ---- FUN_1140_71f6 @ 1140:71f6  (64 octets) ---- */

uint __stdcall16far FUN_1140_71f6(undefined4 param_1)

{
  undefined2 *puVar1;
  uint uVar2;
  int iVar3;
  undefined2 uVar4;
  
  uVar4 = (undefined2)((ulong)param_1 >> 0x10);
  iVar3 = (int)param_1;
  uVar2 = *(uint *)(iVar3 + 0x43) | *(uint *)(iVar3 + 0x45);
  if (uVar2 != 0) {
    puVar1 = (undefined2 *)((int)*(undefined4 *)*(undefined4 *)(iVar3 + 0x43) + 0x84);
    uVar2 = (*(code *)*puVar1)();
    if ((char)uVar2 != '\0') {
      uVar2 = FUN_1140_7911(iVar3,uVar4);
    }
  }
  return uVar2 & 0xff00;
}



/* ---- FUN_1140_7236 @ 1140:7236  (205 octets) ---- */

undefined __stdcall16far FUN_1140_7236(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 unaff_CS;
  undefined2 unaff_SS;
  undefined local_16 [2];
  int local_14;
  char local_4;
  undefined local_3;
  
  local_3 = 0;
  iVar2 = PEEKMESSAGE(unaff_CS,1,0,0,0,local_16,unaff_SS);
  if (iVar2 != 0) {
    local_3 = 1;
    iVar2 = (int)param_1;
    uVar3 = (undefined2)((ulong)param_1 >> 0x10);
    if (local_14 == 0x12) {
      *(undefined *)(iVar2 + 0x59) = 1;
    }
    else {
      local_4 = '\0';
      if (*(int *)(iVar2 + 0x6f) != 0) {
        (*(code *)*(undefined2 *)(iVar2 + 0x6d))
                  (0x14d0,*(undefined2 *)(iVar2 + 0x71),*(undefined2 *)(iVar2 + 0x73),&local_4);
      }
      cVar1 = FUN_1140_71f6(iVar2,uVar3,local_16,unaff_SS);
      if ((((cVar1 == '\0') && (local_4 == '\0')) &&
          (cVar1 = FUN_1140_7104(iVar2,uVar3,local_16,unaff_SS), cVar1 == '\0')) &&
         ((cVar1 = FUN_1140_7169(iVar2,uVar3,local_16,unaff_SS), cVar1 == '\0' &&
          (cVar1 = FUN_1140_70d4(iVar2,uVar3,local_16,unaff_SS), cVar1 == '\0')))) {
        TRANSLATEMESSAGE(0x1140,local_16);
        DISPATCHMESSAGE(0x14d0,local_16);
      }
    }
  }
  return local_3;
}



/* ---- FUN_1140_7303 @ 1140:7303  (23 octets) ---- */

void __stdcall16far FUN_1140_7303(undefined4 param_1)

{
  char cVar1;
  
  do {
    cVar1 = FUN_1140_7236((int)param_1,(int)((ulong)param_1 >> 0x10));
  } while (cVar1 != '\0');
  return;
}



/* ---- FUN_1140_731a @ 1140:731a  (31 octets) ---- */

void __stdcall16far FUN_1140_731a(undefined4 param_1)

{
  char cVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  cVar1 = FUN_1140_7236((int)param_1,uVar2);
  if (cVar1 == '\0') {
    FUN_1140_7e1b((int)param_1,uVar2);
  }
  return;
}



/* ---- FUN_1140_7339 @ 1140:7339  (110 octets) ---- */

void __stdcall16far FUN_1140_7339(undefined4 param_1)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 unaff_CS;
  undefined2 unaff_SS;
  undefined4 uVar3;
  
  iVar1 = (int)param_1;
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  if (DAT_1160_1876 == 0) {
    if (*(int *)(iVar1 + 0x1a) != 0) {
      SENDMESSAGE(unaff_CS,&stack0x0008,unaff_SS,0,0xf20);
    }
  }
  else {
    FUN_1148_0da0((int)*(undefined4 *)(iVar1 + 0x5b),
                  (int)((ulong)*(undefined4 *)(iVar1 + 0x5b) >> 0x10));
    uVar3 = FUN_1158_0182(8);
    FUN_1158_161b(8,uVar3,&stack0x0008,unaff_SS);
    FUN_1148_0c2b((int)*(undefined4 *)(iVar1 + 0x5b),
                  (int)((ulong)*(undefined4 *)(iVar1 + 0x5b) >> 0x10),uVar3);
  }
  return;
}



/* ---- FUN_1140_73a7 @ 1140:73a7  (181 octets) ---- */

void __stdcall16far
FUN_1140_73a7(undefined4 param_1,int param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  int *piVar2;
  undefined2 uVar3;
  int iVar4;
  undefined2 uVar5;
  undefined2 unaff_CS;
  undefined2 unaff_SS;
  int *piVar6;
  int local_4;
  
  iVar4 = (int)param_1;
  uVar5 = (undefined2)((ulong)param_1 >> 0x10);
  if (DAT_1160_1876 == 0) {
    if (*(int *)(iVar4 + 0x1a) != 0) {
      SENDMESSAGE(unaff_CS,&param_2,unaff_SS,1,0xf20);
    }
  }
  else {
    iVar1 = *(int *)((int)*(undefined4 *)(iVar4 + 0x5b) + 8) + -1;
    if (-1 < iVar1) {
      local_4 = 0;
      while( true ) {
        piVar6 = (int *)FUN_1148_0dd0((int)*(undefined4 *)(iVar4 + 0x5b),
                                      (int)((ulong)*(undefined4 *)(iVar4 + 0x5b) >> 0x10),local_4);
        uVar3 = (undefined2)((ulong)piVar6 >> 0x10);
        piVar2 = (int *)piVar6;
        if ((((piVar2[1] == param_3) && (*piVar6 == param_2)) && (piVar2[3] == param_5)) &&
           (piVar2[2] == param_4)) break;
        if (local_4 == iVar1) {
          return;
        }
        local_4 = local_4 + 1;
      }
      FUN_1158_019c(8,piVar6);
      FUN_1148_0c94((int)*(undefined4 *)(iVar4 + 0x5b),
                    (int)((ulong)*(undefined4 *)(iVar4 + 0x5b) >> 0x10),local_4);
    }
  }
  return;
}



/* ---- FUN_1140_7501 @ 1140:7501  (66 octets) ---- */

void __stdcall16far FUN_1140_7501(undefined4 param_1)

{
  int iVar1;
  undefined2 uVar2;
  
  FUN_1150_0574(0xe1f,0x1140);
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  if (*(int *)(iVar1 + 0x20) != 0 || *(int *)(iVar1 + 0x22) != 0) {
    FUN_1140_2f19((int)*(undefined4 *)(iVar1 + 0x20),
                  (int)((ulong)*(undefined4 *)(iVar1 + 0x20) >> 0x10),1);
    do {
      FUN_1140_731a(iVar1,uVar2);
    } while (*(char *)(iVar1 + 0x59) == '\0');
  }
  return;
}



/* ---- FUN_1140_7543 @ 1140:7543  (14 octets) ---- */

void __stdcall16far FUN_1140_7543(void)

{
  POSTQUITMESSAGE();
  return;
}



/* ---- FUN_1140_7551 @ 1140:7551  (162 octets) ---- */

void __stdcall16far FUN_1140_7551(undefined4 param_1,undefined2 param_2,undefined2 param_3)

{
  char cVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined2 extraout_DX;
  undefined2 extraout_DX_00;
  undefined2 extraout_DX_01;
  int iVar5;
  undefined2 uVar6;
  undefined4 uVar7;
  
  uVar7 = GETCAPTURE();
  uVar6 = (undefined2)((ulong)uVar7 >> 0x10);
  if ((int)uVar7 != 0) {
    GETCAPTURE(0x14d0);
    SENDMESSAGE(0x14d0,0,0,0,0x1f);
    uVar6 = extraout_DX;
  }
  uVar2 = FUN_1150_2630();
  cVar1 = FUN_1158_2255(0x2e,0x1150,uVar2,uVar6);
  if (cVar1 == '\0') {
    uVar6 = extraout_DX_00;
    uVar3 = FUN_1150_2630();
    uVar2 = uVar6;
    uVar4 = FUN_1150_2644(uVar3,uVar6);
    FUN_1150_2700(uVar4,uVar6,uVar3,uVar2);
  }
  else {
    uVar6 = extraout_DX_00;
    uVar2 = FUN_1150_2630();
    cVar1 = FUN_1158_2255(0x58,0x1150,uVar2,uVar6);
    if (cVar1 == '\0') {
      uVar6 = (undefined2)((ulong)param_1 >> 0x10);
      iVar5 = (int)param_1;
      if (*(int *)(iVar5 + 0x67) == 0) {
        uVar2 = extraout_DX_01;
        uVar3 = FUN_1150_2630();
        FUN_1140_7665(iVar5,uVar6,uVar3,uVar2);
      }
      else {
        uVar2 = extraout_DX_01;
        uVar3 = FUN_1150_2630(param_2,param_3);
        (*(code *)*(undefined2 *)(iVar5 + 0x65))
                  (0x1150,*(undefined2 *)(iVar5 + 0x69),*(undefined2 *)(iVar5 + 0x6b),uVar3,uVar2);
      }
    }
  }
  return;
}



/* ---- FUN_1140_75f9 @ 1140:75f9  (101 octets) ---- */

void __cdecl16far
FUN_1140_75f9(undefined4 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4,
             undefined2 param_5,undefined2 param_6)

{
  undefined2 uVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  undefined2 uStack_16;
  undefined *puStack_14;
  undefined2 uStack_12;
  undefined2 uStack_10;
  undefined2 uStack_e;
  
  uStack_e = 0x7602;
  uVar4 = GETACTIVEWINDOW();
  uVar3 = (undefined2)((ulong)uVar4 >> 0x10);
  uStack_e = 0;
  uStack_10 = 0x14d0;
  uStack_12 = 0x760c;
  uVar2 = FUN_1140_0ee7();
  uStack_10 = 0x1140;
  uStack_12 = 0x75f3;
  uStack_16 = DAT_1160_1858;
  DAT_1160_1858 = &uStack_16;
  uVar1 = *(undefined2 *)((int)param_1 + 0x1a);
  puStack_14 = &stack0xfffe;
  MESSAGEBOX(0x1140,param_2,param_3,param_4,param_5,param_6);
  DAT_1160_1858 = (undefined2 *)uVar1;
  uStack_12 = 0x14d0;
  puStack_14 = (undefined *)0x765e;
  uStack_16 = uVar3;
  FUN_1140_0ff0(uVar2);
  uStack_16 = (int)uVar4;
  SETACTIVEWINDOW(0x1140);
  return;
}



/* ---- FUN_1140_7665 @ 1140:7665  (98 octets) ---- */

void __stdcall16far FUN_1140_7665(undefined4 param_1,undefined4 param_2)

{
  undefined2 uVar1;
  undefined2 unaff_SS;
  undefined4 uVar2;
  undefined *puVar3;
  undefined2 uVar4;
  undefined *puVar5;
  undefined2 uVar6;
  undefined local_244 [256];
  undefined local_144 [258];
  undefined local_42 [64];
  
  puVar5 = local_42;
  puVar3 = local_244;
  uVar1 = (undefined2)((ulong)param_1 >> 0x10);
  uVar4 = unaff_SS;
  uVar6 = unaff_SS;
  FUN_1140_7038((int)param_1,uVar1);
  FUN_1150_0d6a(0x3f,puVar3,uVar4,puVar5,uVar6);
  puVar5 = local_144;
  puVar3 = local_244;
  uVar4 = unaff_SS;
  FUN_1150_29e6((int)param_2,(int)((ulong)param_2 >> 0x10));
  uVar2 = FUN_1150_0d4c(puVar3,unaff_SS,puVar5,uVar4);
  FUN_1150_0d8f(0x16d0,0x1160,uVar2);
  FUN_1140_75f9((int)param_1,uVar1,0x10,local_42);
  return;
}



/* ---- FUN_1140_76c7 @ 1140:76c7  (203 octets) ---- */

/* WARNING: Removing unreachable block (ram,0x11407707) */

undefined2 __stdcall16far
FUN_1140_76c7(undefined4 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4)

{
  int iVar1;
  undefined uVar2;
  undefined extraout_AH;
  int iVar3;
  undefined2 uVar4;
  undefined2 unaff_CS;
  undefined2 unaff_SS;
  undefined4 uVar5;
  undefined local_104 [257];
  undefined local_3;
  
  local_3 = 0;
  uVar4 = (undefined2)((ulong)param_1 >> 0x10);
  iVar3 = (int)param_1;
  iVar1 = *(int *)(iVar3 + 0x77);
  if (iVar1 != 0) {
    iVar1 = (*(code *)*(undefined2 *)(iVar3 + 0x75))();
    local_3 = (undefined)iVar1;
  }
  uVar2 = (undefined)((uint)iVar1 >> 8);
  if (*(char *)*(undefined4 *)(iVar3 + 0x28) == '\0') {
    if (DAT_1160_1876 == 0) {
      POSTMESSAGE(unaff_CS,param_2,param_3,param_4,0xf1f);
      uVar2 = extraout_AH;
    }
  }
  else {
    if (*(int *)(iVar3 + 0x20) != 0 || *(int *)(iVar3 + 0x22) != 0) {
      FUN_1138_62b9((int)*(undefined4 *)(iVar3 + 0x20),
                    (int)((ulong)*(undefined4 *)(iVar3 + 0x20) >> 0x10));
    }
    uVar5 = FUN_1150_0d4c((int)*(undefined4 *)(iVar3 + 0x28),
                          (int)((ulong)*(undefined4 *)(iVar3 + 0x28) >> 0x10),local_104,unaff_SS);
    iVar1 = WINHELP(0x1150,param_2,param_3,param_4,uVar5);
    local_3 = iVar1 != 0;
    uVar2 = (undefined)((uint)-iVar1 >> 8);
  }
  return CONCAT11(uVar2,local_3);
}



/* ---- FUN_1140_7792 @ 1140:7792  (32 octets) ---- */

undefined __stdcall16far FUN_1140_7792(undefined4 param_1,undefined2 param_2,undefined2 param_3)

{
  undefined uVar1;
  
  uVar1 = FUN_1140_76c7((int)param_1,(int)((ulong)param_1 >> 0x10),param_2,param_3,1);
  return uVar1;
}



/* ---- FUN_1140_77b2 @ 1140:77b2  (33 octets) ---- */

undefined __stdcall16far
FUN_1140_77b2(undefined4 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4)

{
  undefined uVar1;
  
  uVar1 = FUN_1140_76c7((int)param_1,(int)((ulong)param_1 >> 0x10),param_2,param_3,param_4);
  return uVar1;
}



/* ---- FUN_1140_77f5 @ 1140:77f5  (173 octets) ---- */

void __stdcall16far FUN_1140_77f5(undefined4 param_1)

{
  int iVar1;
  undefined2 uVar2;
  long lVar3;
  int local_a;
  int local_8;
  undefined2 local_6;
  undefined2 local_4;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  if (*(int *)(iVar1 + 0x43) != 0 || *(int *)(iVar1 + 0x45) != 0) {
    GETCURSORPOS();
    lVar3 = FUN_1138_0e92(1,local_6,local_4);
    if ((lVar3 != 0) && ((*(byte *)((int)lVar3 + 0x18) & 0x10) != 0)) {
      lVar3 = 0;
    }
    while( true ) {
      local_8 = (int)((ulong)lVar3 >> 0x10);
      local_a = (int)lVar3;
      if (((lVar3 == 0) || (*(char *)(local_a + 0x48) != '\0')) ||
         (*(int *)(local_a + 0x1a) == 0 && *(int *)(local_a + 0x1c) == 0)) break;
      lVar3 = CONCAT22(*(undefined2 *)(local_a + 0x1c),*(undefined2 *)(local_a + 0x1a));
    }
    if ((local_8 == *(int *)(iVar1 + 0x37)) && (local_a == *(int *)(iVar1 + 0x35))) {
      FUN_1140_7977(iVar1,uVar2,local_6,local_4);
    }
  }
  FUN_1140_7cc6(iVar1,uVar2);
  return;
}



/* ---- FUN_1140_78a2 @ 1140:78a2  (111 octets) ---- */

void __stdcall16far FUN_1140_78a2(undefined4 param_1,char param_2)

{
  undefined2 *puVar1;
  int iVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  iVar2 = (int)param_1;
  if (*(char *)(iVar2 + 0x47) != param_2) {
    *(char *)(iVar2 + 0x47) = param_2;
    if (*(char *)(iVar2 + 0x47) == '\0') {
      FUN_1158_1f7f((int)*(undefined4 *)(iVar2 + 0x43),
                    (int)((ulong)*(undefined4 *)(iVar2 + 0x43) >> 0x10));
      *(undefined2 *)(iVar2 + 0x43) = 0;
      *(undefined2 *)(iVar2 + 0x45) = 0;
    }
    else {
      puVar1 = (undefined2 *)((int)DAT_1160_152e + 0x2c);
      uVar4 = (*(code *)*puVar1)();
      *(undefined2 *)(iVar2 + 0x43) = (int)uVar4;
      *(undefined2 *)(iVar2 + 0x45) = (int)((ulong)uVar4 >> 0x10);
      FUN_1138_1ed5((int)*(undefined4 *)(iVar2 + 0x43),
                    (int)((ulong)*(undefined4 *)(iVar2 + 0x43) >> 0x10),
                    *(undefined2 *)(iVar2 + 0x31),*(undefined2 *)(iVar2 + 0x33));
    }
  }
  return;
}



/* ---- FUN_1140_7911 @ 1140:7911  (102 octets) ---- */

void __stdcall16far FUN_1140_7911(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  undefined2 uVar3;
  
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  iVar2 = (int)param_1;
  if (*(char *)(iVar2 + 0x47) != '\0') {
    if (*(char *)(iVar2 + 0x48) != '\0') {
      FUN_1140_7cc6(iVar2,uVar3);
    }
    *(undefined2 *)(iVar2 + 0x35) = 0;
    *(undefined2 *)(iVar2 + 0x37) = 0;
    *(undefined *)(iVar2 + 0x30) = 0;
    FUN_1138_1c77((int)*(undefined4 *)(iVar2 + 0x43),
                  (int)((ulong)*(undefined4 *)(iVar2 + 0x43) >> 0x10),0);
    cVar1 = FUN_1138_64fa((int)*(undefined4 *)(iVar2 + 0x43),
                          (int)((ulong)*(undefined4 *)(iVar2 + 0x43) >> 0x10));
    if (cVar1 != '\0') {
      FUN_1138_62b9((int)*(undefined4 *)(iVar2 + 0x43),
                    (int)((ulong)*(undefined4 *)(iVar2 + 0x43) >> 0x10));
      SHOWWINDOW(0x1138,0);
    }
  }
  return;
}



/* ---- FUN_1140_7977 @ 1140:7977  (750 octets) ---- */

void __stdcall16far FUN_1140_7977(undefined4 param_1,undefined2 param_2,undefined2 param_3)

{
  int *piVar1;
  undefined2 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined2 uVar8;
  undefined2 uVar9;
  undefined2 uVar10;
  undefined2 uVar11;
  undefined2 unaff_SS;
  undefined4 uVar12;
  undefined4 uVar13;
  char *pcVar14;
  undefined *puVar15;
  undefined local_432 [256];
  char local_332 [248];
  undefined local_23a [8];
  int local_232;
  int local_230;
  undefined local_22e [256];
  undefined local_12e [4];
  int local_12a;
  int local_128;
  char local_125;
  char local_124 [256];
  undefined2 local_24;
  undefined2 local_22;
  undefined2 local_20;
  int local_1e;
  undefined2 local_1c;
  undefined2 local_1a;
  undefined2 local_18;
  undefined2 local_16;
  undefined2 local_14;
  undefined2 local_12;
  undefined2 local_10;
  undefined4 local_e;
  undefined4 local_a;
  undefined4 local_6;
  
  uVar8 = (undefined2)((ulong)param_1 >> 0x10);
  iVar5 = (int)param_1;
  if ((*(char *)(iVar5 + 0x47) != '\0') &&
     (*(int *)(iVar5 + 0x35) != 0 || *(int *)(iVar5 + 0x37) != 0)) {
    local_24 = *(undefined2 *)(iVar5 + 0x35);
    local_22 = *(undefined2 *)(iVar5 + 0x37);
    puVar3 = (undefined4 *)*(undefined4 *)(iVar5 + 0x35);
    uVar9 = (undefined2)((ulong)puVar3 >> 0x10);
    puVar6 = (undefined4 *)puVar3;
    puVar2 = (undefined2 *)((int)*puVar3 + 0x30);
    uVar12 = (*(code *)*puVar2)();
    local_20 = (undefined2)uVar12;
    local_1e = (int)((ulong)uVar12 >> 0x10) +
               *(int *)((int)*(undefined4 *)(iVar5 + 0x35) + 0x24) + 6;
    local_1c = FUN_1140_60ba((int)DAT_1160_2c2e,(int)((ulong)DAT_1160_2c2e >> 0x10));
    local_1a = *(undefined2 *)(iVar5 + 0x31);
    local_18 = *(undefined2 *)(iVar5 + 0x33);
    puVar15 = local_23a;
    uVar10 = unaff_SS;
    FUN_1138_1803((int)*(undefined4 *)(iVar5 + 0x35),
                  (int)((ulong)*(undefined4 *)(iVar5 + 0x35) >> 0x10));
    uVar11 = 0x1158;
    FUN_1158_161b(8,&local_16,unaff_SS,puVar15,uVar10);
    puVar3 = (undefined4 *)*(undefined4 *)(iVar5 + 0x35);
    puVar2 = (undefined2 *)((int)*puVar3 + 0x30);
    local_6 = (*(code *)*puVar2)(0x1158,(undefined4 *)puVar3,(int)((ulong)puVar3 >> 0x10),puVar6,
                                 uVar9);
    uVar10 = (undefined2)((ulong)*(undefined4 *)(iVar5 + 0x35) >> 0x10);
    iVar7 = (int)*(undefined4 *)(iVar5 + 0x35);
    if (*(int *)(iVar7 + 0x1a) == 0 && *(int *)(iVar7 + 0x1c) == 0) {
      uVar11 = 0x1148;
      uVar13 = FUN_1148_066e(0,0);
      uVar12 = local_6;
    }
    else {
      puVar3 = (undefined4 *)*(undefined4 *)((int)*(undefined4 *)(iVar5 + 0x35) + 0x1a);
      puVar2 = (undefined2 *)((int)*puVar3 + 0x30);
      uVar13 = (*(code *)*puVar2)(0x1158,(undefined4 *)puVar3,(int)((ulong)puVar3 >> 0x10));
      uVar12 = local_6;
    }
    local_a._2_2_ = (int)((ulong)uVar13 >> 0x10);
    local_a._0_2_ = (int)uVar13;
    local_6._2_2_ = (int)((ulong)uVar12 >> 0x10);
    local_6._0_2_ = (int)uVar12;
    iVar7 = (int)local_a - (int)local_6;
    iVar4 = local_a._2_2_ - local_6._2_2_;
    local_a = uVar13;
    local_6 = uVar12;
    OFFSETRECT(uVar11,iVar4,iVar7,&local_16);
    local_e = FUN_1138_1a06((int)*(undefined4 *)(iVar5 + 0x35),
                            (int)((ulong)*(undefined4 *)(iVar5 + 0x35) >> 0x10),param_2,param_3);
    local_230 = *(int *)(iVar5 + 0x37);
    local_232 = *(int *)(iVar5 + 0x35);
    while( true ) {
      uVar10 = 0x1138;
      FUN_1138_1fe5(local_232,local_230);
      if ((local_332[0] != '\0') ||
         (*(int *)(local_232 + 0x1a) == 0 && *(int *)(local_232 + 0x1c) == 0)) break;
      piVar1 = (int *)(local_232 + 0x1a);
      local_230 = *(int *)(local_232 + 0x1c);
      local_232 = *piVar1;
    }
    if (local_232 == 0 && local_230 == 0) {
      local_124[0] = '\0';
    }
    else {
      puVar15 = local_432;
      pcVar14 = local_332;
      uVar10 = unaff_SS;
      uVar9 = unaff_SS;
      FUN_1138_1fe5(local_232,local_230);
      FUN_1138_0cae(pcVar14,uVar10);
      uVar10 = 0x1158;
      FUN_1158_17e7(0xff,local_124,unaff_SS,puVar15,uVar9);
    }
    local_125 = '\x01';
    if (*(int *)(iVar5 + 0x9f) != 0) {
      (*(code *)*(undefined2 *)(iVar5 + 0x9d))
                (uVar10,*(undefined2 *)(iVar5 + 0xa1),*(undefined2 *)(iVar5 + 0xa3),&local_24);
    }
    if ((local_125 == '\0') || (local_124[0] == '\0')) {
      if (local_125 == '\0') {
        *(undefined *)(iVar5 + 0x30) = 0;
      }
    }
    else {
      puVar15 = local_23a;
      uVar10 = unaff_SS;
      FUN_1148_06ae(0,local_1c,0,0);
      FUN_1158_161b(8,local_12e,unaff_SS,puVar15,uVar10);
      uVar12 = *(undefined4 *)((int)*(undefined4 *)(iVar5 + 0x43) + 0xd8);
      FUN_1128_21d2((int)uVar12,(int)((ulong)uVar12 >> 0x10));
      uVar12 = FUN_1150_0d4c(local_124,unaff_SS,local_22e,unaff_SS);
      DRAWTEXT(0x1150,0xc10,local_12e,unaff_SS,0xffff,uVar12);
      OFFSETRECT(0x14d0,local_1e,local_20,local_12e);
      local_12a = local_12a + 6;
      local_128 = local_128 + 2;
      uVar12 = FUN_1138_19d4((int)*(undefined4 *)(iVar5 + 0x35),
                             (int)((ulong)*(undefined4 *)(iVar5 + 0x35) >> 0x10),local_16,local_14);
      *(undefined2 *)(iVar5 + 0x39) = (int)uVar12;
      *(undefined2 *)(iVar5 + 0x3b) = (int)((ulong)uVar12 >> 0x10);
      uVar12 = FUN_1138_19d4((int)*(undefined4 *)(iVar5 + 0x35),
                             (int)((ulong)*(undefined4 *)(iVar5 + 0x35) >> 0x10),local_12,local_10);
      *(undefined2 *)(iVar5 + 0x3d) = (int)uVar12;
      *(undefined2 *)(iVar5 + 0x3f) = (int)((ulong)uVar12 >> 0x10);
      FUN_1138_1ed5((int)*(undefined4 *)(iVar5 + 0x43),
                    (int)((ulong)*(undefined4 *)(iVar5 + 0x43) >> 0x10),local_1a,local_18);
      puVar3 = (undefined4 *)*(undefined4 *)(iVar5 + 0x43);
      puVar2 = (undefined2 *)((int)*puVar3 + 0x80);
      (*(code *)*puVar2)(0x1138,(undefined4 *)puVar3,(int)((ulong)puVar3 >> 0x10),local_124);
      *(undefined *)(iVar5 + 0x30) = 1;
    }
    FUN_1140_7cc6(iVar5,uVar8);
  }
  return;
}



/* ---- FUN_1140_7c65 @ 1140:7c65  (97 octets) ---- */

void __stdcall16far FUN_1140_7c65(undefined4 param_1)

{
  undefined2 uVar1;
  undefined extraout_AH;
  int iVar2;
  undefined2 uVar3;
  undefined2 unaff_CS;
  undefined2 unaff_SS;
  undefined4 uVar4;
  undefined *puVar5;
  undefined2 uVar6;
  undefined local_102 [256];
  
  uVar6 = 0;
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  iVar2 = (int)param_1;
  uVar1 = SETTIMER(unaff_CS,0x642d,0x1140,*(undefined2 *)(iVar2 + 0x41),1);
  *(undefined2 *)(iVar2 + 0x49) = uVar1;
  *(bool *)(iVar2 + 0x48) = *(int *)(iVar2 + 0x49) != 0;
  if (*(char *)(iVar2 + 0x48) == '\0') {
    puVar5 = local_102;
    FUN_1150_092b(0xf032);
    uVar4 = FUN_1150_28e6(0x22,0x1138,CONCAT11(extraout_AH,1),puVar5,unaff_SS);
    FUN_1158_1399(0x1150,uVar4,uVar6);
  }
  return;
}



/* ---- FUN_1140_7cc6 @ 1140:7cc6  (36 octets) ---- */

void __stdcall16far FUN_1140_7cc6(undefined4 param_1)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 unaff_CS;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  if (*(char *)(iVar1 + 0x48) != '\0') {
    KILLTIMER(unaff_CS,*(undefined2 *)(iVar1 + 0x49));
    *(undefined *)(iVar1 + 0x48) = 0;
  }
  return;
}



/* ---- FUN_1140_7cea @ 1140:7cea  (304 octets) ---- */

void __stdcall16far FUN_1140_7cea(undefined4 param_1,undefined2 param_2,undefined2 param_3)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  undefined2 uVar4;
  int iVar5;
  undefined2 uVar6;
  undefined2 unaff_CS;
  int local_6;
  int local_4;
  
  uVar6 = (undefined2)((ulong)param_1 >> 0x10);
  iVar5 = (int)param_1;
  local_4 = *(int *)(iVar5 + 0x26);
  local_6 = *(int *)(iVar5 + 0x24);
  while ((*(char *)(local_6 + 0x48) == '\0' &&
         (*(int *)(local_6 + 0x1a) != 0 || *(int *)(local_6 + 0x1c) != 0))) {
    piVar1 = (int *)(local_6 + 0x1a);
    local_4 = *(int *)(local_6 + 0x1c);
    local_6 = *piVar1;
  }
  if (((local_4 != *(int *)(iVar5 + 0x37)) || (local_6 != *(int *)(iVar5 + 0x35))) ||
     (iVar3 = PTINRECT(unaff_CS,param_2,param_3,iVar5 + 0x39), iVar3 == 0)) {
    if (*(int *)(iVar5 + 0x43) != 0 || *(int *)(iVar5 + 0x45) != 0) {
      uVar4 = FUN_1138_62b9((int)*(undefined4 *)(iVar5 + 0x43),
                            (int)((ulong)*(undefined4 *)(iVar5 + 0x43) >> 0x10));
      iVar3 = ISWINDOWVISIBLE(0x1138,uVar4);
      if (iVar3 != 0) {
        FUN_1138_62b9((int)*(undefined4 *)(iVar5 + 0x43),
                      (int)((ulong)*(undefined4 *)(iVar5 + 0x43) >> 0x10));
        SHOWWINDOW(0x1138,0);
      }
    }
    if ((*(char *)(iVar5 + 0x30) == '\0') ||
       ((local_6 != 0 || local_4 != 0 && (*(char *)(local_6 + 0x48) != '\0')))) {
      if ((local_6 == 0 && local_4 == 0) || (*(char *)(local_6 + 0x48) == '\0')) {
        *(undefined2 *)(iVar5 + 0x35) = 0;
        *(undefined2 *)(iVar5 + 0x37) = 0;
      }
      else {
        *(int *)(iVar5 + 0x35) = local_6;
        *(int *)(iVar5 + 0x37) = local_4;
        if (*(char *)(iVar5 + 0x30) == '\0') {
          cVar2 = FUN_1140_11fc();
          if ((cVar2 != '\0') && (*(char *)(iVar5 + 0x48) == '\0')) {
            FUN_1140_7c65(iVar5,uVar6);
          }
        }
        else {
          FUN_1140_7977(iVar5,uVar6,param_2,param_3);
        }
      }
    }
    else {
      FUN_1140_7911(iVar5,uVar6);
    }
  }
  return;
}



/* ---- FUN_1140_7e1b @ 1140:7e1b  (517 octets) ---- */

void __stdcall16far FUN_1140_7e1b(undefined4 param_1)

{
  long lVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined2 unaff_SS;
  char *pcVar5;
  undefined *puVar6;
  undefined local_210 [256];
  char local_110 [257];
  char local_f;
  int local_e;
  int local_c;
  undefined4 local_a;
  undefined2 local_6;
  undefined2 local_4;
  
  GETCURSORPOS();
  local_a = FUN_1138_0e92(1,local_6,local_4);
  local_c = (int)((ulong)local_a >> 0x10);
  if ((local_a != 0) && ((*(byte *)((int)local_a + 0x18) & 0x10) != 0)) {
    local_a = 0;
  }
  local_e = FUN_1138_0d61();
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  iVar2 = (int)param_1;
  if (local_a != CONCAT22(*(undefined2 *)(iVar2 + 0x26),*(undefined2 *)(iVar2 + 0x24))) {
    if (((*(int *)(iVar2 + 0x24) != 0 || *(int *)(iVar2 + 0x26) != 0) &&
        (local_e == 0 && local_c == 0)) ||
       ((lVar1 = local_a, local_e != 0 || local_c != 0 &&
        ((*(int *)(iVar2 + 0x26) == local_c && (*(int *)(iVar2 + 0x24) == local_e)))))) {
      FUN_1138_24bb((int)*(undefined4 *)(iVar2 + 0x24),
                    (int)((ulong)*(undefined4 *)(iVar2 + 0x24) >> 0x10),0,0,0,0xf14);
      lVar1 = local_a;
    }
    local_a._2_2_ = (undefined2)((ulong)lVar1 >> 0x10);
    local_a._0_2_ = (int)lVar1;
    *(undefined2 *)(iVar2 + 0x24) = (int)local_a;
    *(undefined2 *)(iVar2 + 0x26) = local_a._2_2_;
    local_a = lVar1;
    if (((*(int *)(iVar2 + 0x24) != 0 || *(int *)(iVar2 + 0x26) != 0) &&
        (local_e == 0 && local_c == 0)) ||
       ((local_e != 0 || local_c != 0 &&
        ((*(int *)(iVar2 + 0x26) == local_c && (*(int *)(iVar2 + 0x24) == local_e)))))) {
      FUN_1138_24bb((int)*(undefined4 *)(iVar2 + 0x24),
                    (int)((ulong)*(undefined4 *)(iVar2 + 0x24) >> 0x10),0,0,0,0xf13);
    }
  }
  uVar4 = 0x1138;
  if (*(char *)(iVar2 + 0x47) != '\0') {
    if (*(int *)(iVar2 + 0x24) == 0 && *(int *)(iVar2 + 0x26) == 0) {
      uVar4 = 0x1140;
      FUN_1140_7911(iVar2,uVar3);
    }
    else if ((local_e == 0 && local_c == 0) ||
            ((*(int *)(iVar2 + 0x26) == local_c && (*(int *)(iVar2 + 0x24) == local_e)))) {
      uVar4 = 0x1140;
      FUN_1140_7cea(iVar2,uVar3,local_6,local_4);
    }
    else {
      uVar4 = 0x1140;
      FUN_1140_7cc6(iVar2,uVar3);
    }
  }
  while (local_a != 0) {
    uVar4 = 0x1138;
    FUN_1138_1fe5(local_a);
    if (local_110[0] != '\0') break;
    local_a = CONCAT22(*(undefined2 *)((int)local_a + 0x1c),*(undefined2 *)((int)local_a + 0x1a));
  }
  if (local_a == 0) {
    FUN_1140_809e((int)DAT_1160_2c2a,(int)((ulong)DAT_1160_2c2a >> 0x10),0x7e1a,uVar4);
  }
  else {
    puVar6 = local_210;
    pcVar5 = local_110;
    uVar4 = unaff_SS;
    FUN_1138_1fe5(local_a);
    FUN_1138_0d08(pcVar5,unaff_SS);
    FUN_1140_809e((int)DAT_1160_2c2a,(int)((ulong)DAT_1160_2c2a >> 0x10),puVar6,uVar4);
  }
  local_f = '\x01';
  if (*(int *)(iVar2 + 0x87) != 0) {
    (*(code *)*(undefined2 *)(iVar2 + 0x85))
              (0x1140,*(undefined2 *)(iVar2 + 0x89),*(undefined2 *)(iVar2 + 0x8b),&local_f);
  }
  if (local_f != '\0') {
    WAITMESSAGE(0x1140);
  }
  return;
}



/* ---- FUN_1140_8020 @ 1140:8020  (80 octets) ---- */

void __stdcall16far FUN_1140_8020(undefined2 param_1_00,undefined2 param_2,undefined2 param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  int local_4;
  
  iVar1 = FUN_1140_60f4((int)DAT_1160_2c2e,(int)((ulong)DAT_1160_2c2e >> 0x10));
  if (-1 < iVar1 + -1) {
    local_4 = 0;
    while( true ) {
      uVar5 = 0;
      uVar4 = 0;
      uVar3 = 0;
      uVar6 = param_1;
      uVar2 = FUN_1140_60cf((int)DAT_1160_2c2e,(int)((ulong)DAT_1160_2c2e >> 0x10),local_4);
      FUN_1138_24bb(uVar2,uVar3,uVar4,uVar5,uVar6);
      if (local_4 == iVar1 + -1) break;
      local_4 = local_4 + 1;
    }
  }
  return;
}



/* ---- FUN_1140_8070 @ 1140:8070  (20 octets) ---- */

void __stdcall16far FUN_1140_8070(undefined4 param_1)

{
  FUN_1140_8020((int)param_1,(int)((ulong)param_1 >> 0x10),0xf1d);
  return;
}



/* ---- FUN_1140_8084 @ 1140:8084  (26 octets) ---- */

void __stdcall16far FUN_1140_8084(undefined4 param_1,undefined4 param_2)

{
  FUN_1150_0651((int)param_2,(int)((ulong)param_2 >> 0x10),(int)param_1 + 0x28,
                (int)((ulong)param_1 >> 0x10));
  return;
}



/* ---- FUN_1140_809e @ 1140:809e  (78 octets) ---- */

void __stdcall16far FUN_1140_809e(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined in_ZF;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  uVar3 = (undefined2)((ulong)param_2 >> 0x10);
  FUN_1158_18be((int)param_2,uVar3,(int)*(undefined4 *)(iVar1 + 0x2c),
                (int)((ulong)*(undefined4 *)(iVar1 + 0x2c) >> 0x10));
  if (!(bool)in_ZF) {
    FUN_1150_0651((int)param_2,uVar3,iVar1 + 0x2c,uVar2);
    if (*(int *)(iVar1 + 0x7f) != 0) {
      (*(code *)*(undefined2 *)(iVar1 + 0x7d))
                (0x1150,*(undefined2 *)(iVar1 + 0x81),*(undefined2 *)(iVar1 + 0x83),iVar1,uVar2);
    }
  }
  return;
}



/* ---- FUN_1140_80ec @ 1140:80ec  (41 octets) ---- */

void __stdcall16far FUN_1140_80ec(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_3 >> 0x10);
  iVar1 = (int)param_3;
  if ((*(int *)(iVar1 + 0x14) == param_2) && (*(int *)(iVar1 + 0x12) == param_1)) {
    *(undefined2 *)(iVar1 + 0x12) = 0;
    *(undefined2 *)(iVar1 + 0x14) = 0;
  }
  return;
}




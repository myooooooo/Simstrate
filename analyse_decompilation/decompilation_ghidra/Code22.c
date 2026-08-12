/* Simstrat (FR).EXE - segment Code22 - 36 fonctions
   Decompile par Ghidra 11.2.1 (x86 16 bits, chargeur NE). */

/* ---- FUN_10a8_06cf @ 10a8:06cf  (25 octets) ---- */

undefined2 __stdcall16far FUN_10a8_06cf(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)((int)param_1 + 10);
  return *(undefined2 *)((int)uVar1 + 8);
}



/* ---- FUN_10a8_071f @ 10a8:071f  (73 octets) ---- */

void __stdcall16far FUN_10a8_071f(undefined4 param_1,undefined4 param_2,undefined2 param_3)

{
  undefined2 uVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  
  uVar2 = (undefined2)((ulong)param_2 >> 0x10);
  uVar1 = (undefined2)param_2;
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  uVar4 = *(undefined4 *)((int)param_1 + 10);
  uVar5 = uVar1;
  uVar6 = uVar2;
  uVar4 = FUN_1148_0dd0((int)uVar4,(int)((ulong)uVar4 >> 0x10),param_3);
  FUN_1138_1d8c(uVar4,uVar5,uVar6);
  uVar4 = *(undefined4 *)((int)param_1 + 6);
  uVar4 = FUN_1148_0dd0((int)uVar4,(int)((ulong)uVar4 >> 0x10),param_3);
  FUN_1138_1d8c(uVar4,uVar1,uVar2);
  return;
}



/* ---- FUN_10a8_0768 @ 10a8:0768  (37 octets) ---- */

undefined4 __stdcall16far FUN_10a8_0768(undefined4 param_1,undefined2 param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)((int)param_1 + 10);
  uVar1 = FUN_1148_0dd0((int)uVar1,(int)((ulong)uVar1 >> 0x10),param_2);
  return uVar1;
}



/* ---- FUN_10a8_078d @ 10a8:078d  (7 octets) ---- */

void __stdcall16far FUN_10a8_078d(void)

{
  return;
}



/* ---- FUN_10a8_0794 @ 10a8:0794  (212 octets) ---- */

void __stdcall16far FUN_10a8_0794(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  int local_4;
  
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  iVar2 = (int)param_1;
  iVar1 = *(int *)((int)*(undefined4 *)(iVar2 + 10) + 8) + -1;
  if (-1 < iVar1) {
    local_4 = 0;
    while( true ) {
      uVar4 = FUN_1148_0dd0((int)*(undefined4 *)(iVar2 + 10),
                            (int)((ulong)*(undefined4 *)(iVar2 + 10) >> 0x10),local_4);
      uVar4 = FUN_1158_2273(0x6b,(char *)s_sDate_1160_10a7 + 1,uVar4);
      FUN_1158_1f7f(uVar4);
      if (local_4 == iVar1) break;
      local_4 = local_4 + 1;
    }
  }
  FUN_1148_0c75((int)*(undefined4 *)(iVar2 + 10),(int)((ulong)*(undefined4 *)(iVar2 + 10) >> 0x10));
  iVar1 = *(int *)((int)*(undefined4 *)(iVar2 + 6) + 8) + -1;
  if (-1 < iVar1) {
    local_4 = 0;
    while( true ) {
      uVar4 = FUN_1148_0dd0((int)*(undefined4 *)(iVar2 + 6),
                            (int)((ulong)*(undefined4 *)(iVar2 + 6) >> 0x10),local_4);
      uVar4 = FUN_1158_2273(0x5c5,(char *)s_sDate_1160_10a7 + 1,uVar4);
      FUN_1158_1f7f(uVar4);
      if (local_4 == iVar1) break;
      local_4 = local_4 + 1;
    }
  }
  FUN_1148_0c75((int)*(undefined4 *)(iVar2 + 6),(int)((ulong)*(undefined4 *)(iVar2 + 6) >> 0x10));
  FUN_1138_36f9((int)*(undefined4 *)(iVar2 + 0xe),(int)((ulong)*(undefined4 *)(iVar2 + 0xe) >> 0x10)
               );
  return;
}



/* ---- FUN_10a8_0868 @ 10a8:0868  (235 octets) ---- */

void __stdcall16far FUN_10a8_0868(undefined4 param_1,int param_2)

{
  int *piVar1;
  undefined2 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined2 uVar5;
  undefined4 uVar6;
  
  uVar5 = (undefined2)((ulong)param_1 >> 0x10);
  iVar4 = (int)param_1;
  uVar6 = FUN_1148_0dd0((int)*(undefined4 *)(iVar4 + 10),
                        (int)((ulong)*(undefined4 *)(iVar4 + 10) >> 0x10),param_2);
  uVar6 = FUN_1158_2273(0x6b,(char *)s_sDate_1160_10a7 + 1,uVar6);
  FUN_1158_1f7f(uVar6);
  FUN_1148_0c94((int)*(undefined4 *)(iVar4 + 10),(int)((ulong)*(undefined4 *)(iVar4 + 10) >> 0x10),
                param_2);
  uVar6 = FUN_1148_0dd0((int)*(undefined4 *)(iVar4 + 6),
                        (int)((ulong)*(undefined4 *)(iVar4 + 6) >> 0x10),param_2);
  uVar6 = FUN_1158_2273(0x5c5,(char *)s_sDate_1160_10a7 + 1,uVar6);
  FUN_1158_1f7f(uVar6);
  FUN_1148_0c94((int)*(undefined4 *)(iVar4 + 6),(int)((ulong)*(undefined4 *)(iVar4 + 6) >> 0x10),
                param_2);
  if (param_2 == *(int *)((int)*(undefined4 *)(iVar4 + 0xe) + 0xee)) {
    *(undefined2 *)((int)*(undefined4 *)(iVar4 + 0xe) + 0xee) = 0xffff;
    FUN_10a8_246f((int)*(undefined4 *)(iVar4 + 0xe),
                  (int)((ulong)*(undefined4 *)(iVar4 + 0xe) >> 0x10),0);
  }
  else if (param_2 < *(int *)((int)*(undefined4 *)(iVar4 + 0xe) + 0xee)) {
    piVar1 = (int *)((int)*(undefined4 *)(iVar4 + 0xe) + 0xee);
    *piVar1 = *piVar1 + -1;
  }
  FUN_1138_36f9((int)*(undefined4 *)(iVar4 + 0xe),(int)((ulong)*(undefined4 *)(iVar4 + 0xe) >> 0x10)
               );
  puVar3 = (undefined4 *)*(undefined4 *)(iVar4 + 0xe);
  puVar2 = (undefined2 *)((int)*puVar3 + 0x44);
  (*(code *)*puVar2)(0x1138,(undefined4 *)puVar3,(int)((ulong)puVar3 >> 0x10));
  return;
}



/* ---- FUN_10a8_0953 @ 10a8:0953  (271 octets) ---- */

void __stdcall16far FUN_10a8_0953(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined2 *puVar1;
  byte extraout_AH;
  int iVar2;
  int iVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined4 *puVar6;
  
  uVar4 = (undefined2)((ulong)param_1 >> 0x10);
  iVar3 = (int)param_1;
  puVar6 = (undefined4 *)
           FUN_10a8_1bdb(0x6b,(char *)s_sDate_1160_10a7 + 1,1,*(undefined2 *)(iVar3 + 0xe),
                         *(undefined2 *)(iVar3 + 0x10));
  puVar1 = (undefined2 *)((int)*puVar6 + 0x3c);
  (*(code *)*puVar1)((char *)s_sDate_1160_10a7 + 1,puVar6,*(undefined2 *)(iVar3 + 0xe),
                     *(undefined2 *)(iVar3 + 0x10));
  uVar5 = (undefined2)((ulong)param_2 >> 0x10);
  FUN_1138_1d8c(puVar6,(int)param_2,uVar5);
  FUN_1148_0ea7((int)*(undefined4 *)(iVar3 + 10),(int)((ulong)*(undefined4 *)(iVar3 + 10) >> 0x10),
                puVar6,param_3);
  iVar2 = (uint)extraout_AH * 0x100;
  if (param_3 == 0) {
    iVar2 = iVar2 + 1;
  }
  puVar6 = (undefined4 *)
           FUN_10a8_0b27(0x5c5,(char *)s_sDate_1160_10a7 + 1,CONCAT11((char)((uint)iVar2 >> 8),1),
                         iVar2,*(undefined2 *)(iVar3 + 0xe),*(undefined2 *)(iVar3 + 0x10));
  puVar1 = (undefined2 *)((int)*puVar6 + 0x3c);
  (*(code *)*puVar1)((char *)s_sDate_1160_10a7 + 1,puVar6,*(undefined2 *)(iVar3 + 0xe),
                     *(undefined2 *)(iVar3 + 0x10));
  FUN_1138_1d8c(puVar6,(int)param_2,uVar5);
  FUN_1148_0ea7((int)*(undefined4 *)(iVar3 + 6),(int)((ulong)*(undefined4 *)(iVar3 + 6) >> 0x10),
                puVar6,param_3);
  FUN_10a8_246f((int)*(undefined4 *)(iVar3 + 0xe),(int)((ulong)*(undefined4 *)(iVar3 + 0xe) >> 0x10)
                ,param_3);
  FUN_1138_36f9((int)*(undefined4 *)(iVar3 + 0xe),(int)((ulong)*(undefined4 *)(iVar3 + 0xe) >> 0x10)
               );
  puVar6 = (undefined4 *)*(undefined4 *)(iVar3 + 0xe);
  puVar1 = (undefined2 *)((int)*puVar6 + 0x44);
  (*(code *)*puVar1)(0x1138,(undefined4 *)puVar6,(int)((ulong)puVar6 >> 0x10));
  return;
}



/* ---- FUN_10a8_0a62 @ 10a8:0a62  (197 octets) ---- */

void __stdcall16far FUN_10a8_0a62(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  
  if (param_3 != param_2) {
    uVar2 = (undefined2)((ulong)param_1 >> 0x10);
    iVar1 = (int)param_1;
    uVar3 = FUN_1148_0dd0((int)*(undefined4 *)(iVar1 + 10),
                          (int)((ulong)*(undefined4 *)(iVar1 + 10) >> 0x10),param_3);
    iVar5 = param_3;
    uVar4 = FUN_1148_0dd0((int)*(undefined4 *)(iVar1 + 10),
                          (int)((ulong)*(undefined4 *)(iVar1 + 10) >> 0x10),param_2);
    FUN_1148_0f67((int)*(undefined4 *)(iVar1 + 10),(int)((ulong)*(undefined4 *)(iVar1 + 10) >> 0x10)
                  ,uVar4,iVar5);
    FUN_1148_0f67((int)*(undefined4 *)(iVar1 + 10),(int)((ulong)*(undefined4 *)(iVar1 + 10) >> 0x10)
                  ,uVar3,param_2);
    uVar3 = FUN_1148_0dd0((int)*(undefined4 *)(iVar1 + 6),
                          (int)((ulong)*(undefined4 *)(iVar1 + 6) >> 0x10),param_3);
    uVar4 = FUN_1148_0dd0((int)*(undefined4 *)(iVar1 + 6),
                          (int)((ulong)*(undefined4 *)(iVar1 + 6) >> 0x10),param_2);
    FUN_1148_0f67((int)*(undefined4 *)(iVar1 + 6),(int)((ulong)*(undefined4 *)(iVar1 + 6) >> 0x10),
                  uVar4,param_3);
    FUN_1148_0f67((int)*(undefined4 *)(iVar1 + 6),(int)((ulong)*(undefined4 *)(iVar1 + 6) >> 0x10),
                  uVar3,param_2);
    FUN_1138_36f9((int)*(undefined4 *)(iVar1 + 0xe),
                  (int)((ulong)*(undefined4 *)(iVar1 + 0xe) >> 0x10));
  }
  return;
}



/* ---- FUN_10a8_0b27 @ 10a8:0b27  (112 octets) ---- */

undefined4 __stdcall16far
FUN_10a8_0b27(undefined4 param_1,char param_2,undefined param_3,undefined2 param_4,
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
  FUN_1138_6886(iVar1,uVar2,0,param_4,param_5);
  FUN_1138_17bf(iVar1,uVar2,0x59);
  FUN_1138_17e1(iVar1,uVar2,0x17);
  *(undefined2 *)(iVar1 + 0x26) = 0xa0;
  FUN_1138_1e3e(iVar1,uVar2,0);
  *(undefined *)(iVar1 + 0x8f) = param_3;
  if (param_2 != '\0') {
    DAT_1160_1858 = uStack_a;
  }
  return param_1;
}



/* ---- FUN_10a8_0b97 @ 10a8:0b97  (84 octets) ---- */

void __stdcall16far FUN_10a8_0b97(undefined4 param_1,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  undefined2 uVar3;
  
  uVar3 = (undefined2)((ulong)param_3 >> 0x10);
  iVar1 = *(int *)((int)param_3 + 4);
  iVar2 = *(int *)((int)param_3 + 6);
  if ((iVar1 != 0 || iVar2 != 0) &&
     (((iVar2 != param_1._2_2_ || (iVar1 != (int)param_1)) && (*(char *)(iVar1 + 0x8e) != '\0')))) {
    if (*(char *)((int)param_1 + 0x8e) != '\0') {
      *(undefined *)((int)param_1 + 0x8e) = 0;
      FUN_1138_22c6((int)param_1,param_1._2_2_);
    }
  }
  return;
}



/* ---- FUN_10a8_0beb @ 10a8:0beb  (98 octets) ---- */

void __stdcall16far FUN_10a8_0beb(undefined4 param_1,char param_2)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 unaff_SS;
  undefined2 local_e;
  undefined2 local_c;
  int local_a;
  undefined2 local_8;
  undefined2 local_6;
  undefined2 local_4;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  if (*(char *)(iVar1 + 0x8e) != param_2) {
    *(char *)(iVar1 + 0x8e) = param_2;
    FUN_1138_22c6(iVar1,uVar2);
    if (*(int *)(iVar1 + 0x1a) != 0 || *(int *)(iVar1 + 0x1c) != 0) {
      local_e = 0xf18;
      local_c = 0;
      local_6 = 0;
      local_4 = 0;
      local_a = iVar1;
      local_8 = uVar2;
      FUN_1138_3a43((int)*(undefined4 *)(iVar1 + 0x1a),
                    (int)((ulong)*(undefined4 *)(iVar1 + 0x1a) >> 0x10),&local_e,unaff_SS);
    }
  }
  return;
}



/* ---- FUN_10a8_0c4d @ 10a8:0c4d  (57 octets) ---- */

void __stdcall16far
FUN_10a8_0c4d(undefined4 param_1,undefined2 param_2,undefined2 param_3,undefined param_4,
             char param_5)

{
  int iVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  FUN_1138_27c0(iVar1,uVar2,param_2,param_3,param_4,param_5);
  if (param_5 == '\0') {
    if (*(char *)(iVar1 + 0x2a) != '\0') {
      FUN_1158_206a(0x1138,iVar1,uVar2);
    }
  }
  return;
}



/* ---- FUN_10a8_1b93 @ 10a8:1b93  (35 octets) ---- */

void __stdcall16far FUN_10a8_1b93(undefined4 *param_1,undefined2 param_2,undefined2 param_3)

{
  undefined2 *puVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  FUN_1138_2d33((undefined4 *)param_1,uVar2,param_2,param_3);
  puVar1 = (undefined2 *)((int)*param_1 + 0x44);
  (*(code *)*puVar1)(0x1138,(undefined4 *)param_1,uVar2);
  return;
}



/* ---- FUN_10a8_1bb6 @ 10a8:1bb6  (37 octets) ---- */

void __stdcall16far FUN_10a8_1bb6(undefined4 *param_1)

{
  undefined2 *puVar1;
  
  puVar1 = (undefined2 *)((int)*param_1 + -0x10);
  (*(code *)*puVar1)();
  puVar1 = (undefined2 *)((int)*param_1 + 0x44);
  (*(code *)*puVar1)();
  return;
}



/* ---- FUN_10a8_1bdb @ 10a8:1bdb  (118 octets) ---- */

undefined4 __stdcall16far
FUN_10a8_1bdb(undefined4 param_1,char param_2,undefined2 param_3,undefined2 param_4)

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
  *(uint *)(iVar1 + 0x26) = *(uint *)(iVar1 + 0x26) | 1;
  FUN_1138_1672(iVar1,uVar2,5);
  FUN_1138_6488(iVar1,uVar2,0);
  FUN_1138_1cb8(iVar1,uVar2,0);
  FUN_1138_1c77(iVar1,uVar2,0);
  if (param_2 != '\0') {
    DAT_1160_1858 = uStack_a;
  }
  return param_1;
}



/* ---- FUN_10a8_1d03 @ 10a8:1d03  (106 octets) ---- */

void __stdcall16far FUN_10a8_1d03(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined2 uVar2;
  int iVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined4 uVar6;
  int local_4;
  
  uVar4 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = FUN_1138_39fd((int)param_1,uVar4);
  if (-1 < iVar1 + -1) {
    local_4 = 0;
    while( true ) {
      uVar6 = FUN_1138_398f((int)param_1,uVar4,local_4);
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



/* ---- FUN_10a8_1f49 @ 10a8:1f49  (106 octets) ---- */

void __stdcall16far FUN_10a8_1f49(undefined4 param_1,char param_2)

{
  int iVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  FUN_1158_1f7f((int)*(undefined4 *)(iVar1 + 0xea),
                (int)((ulong)*(undefined4 *)(iVar1 + 0xea) >> 0x10));
  FUN_1158_1f7f((int)*(undefined4 *)(iVar1 + 0xde),
                (int)((ulong)*(undefined4 *)(iVar1 + 0xde) >> 0x10));
  FUN_1158_1f7f((int)*(undefined4 *)(iVar1 + 0xe2),
                (int)((ulong)*(undefined4 *)(iVar1 + 0xe2) >> 0x10));
  FUN_1158_1f7f((int)*(undefined4 *)(iVar1 + 0xf0),
                (int)((ulong)*(undefined4 *)(iVar1 + 0xf0) >> 0x10));
  FUN_1158_1f7f((int)*(undefined4 *)(iVar1 + 0xf4),
                (int)((ulong)*(undefined4 *)(iVar1 + 0xf4) >> 0x10));
  FUN_1138_6cdc(iVar1,uVar2,0);
  if (param_2 != '\0') {
    FUN_1158_200f();
  }
  return;
}



/* ---- FUN_10a8_1fb3 @ 10a8:1fb3  (48 octets) ---- */

void __stdcall16far FUN_10a8_1fb3(undefined4 param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  undefined2 uVar3;
  
  uVar3 = (undefined2)((ulong)param_2 >> 0x10);
  iVar2 = (int)param_2;
  FUN_1138_3b29((int)param_1,(int)((ulong)param_1 >> 0x10),iVar2,uVar3);
  uVar1 = *(uint *)(iVar2 + 6);
  *(undefined2 *)(iVar2 + 4) = *(undefined2 *)(iVar2 + 4);
  *(uint *)(iVar2 + 6) = uVar1 | 0x200;
  return;
}



/* ---- FUN_10a8_1fe3 @ 10a8:1fe3  (269 octets) ---- */

void __stdcall16far FUN_10a8_1fe3(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  undefined2 uVar5;
  int local_4;
  
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  iVar2 = (int)param_1;
  FUN_1148_4ff4(iVar2,uVar3);
  iVar1 = *(int *)((int)*(undefined4 *)(iVar2 + 0xde) + 8) + -1;
  if (-1 < iVar1) {
    local_4 = 0;
    while( true ) {
      if (local_4 == *(int *)(iVar2 + 0xee)) {
        uVar5 = 1;
        uVar4 = FUN_1148_0dd0((int)*(undefined4 *)(iVar2 + 0xde),
                              (int)((ulong)*(undefined4 *)(iVar2 + 0xde) >> 0x10),local_4);
        uVar4 = FUN_1158_2273(0x6b,(char *)s_sDate_1160_10a7 + 1,uVar4);
        FUN_1138_1cb8(uVar4,uVar5);
        uVar5 = 1;
        uVar4 = FUN_1148_0dd0((int)*(undefined4 *)(iVar2 + 0xde),
                              (int)((ulong)*(undefined4 *)(iVar2 + 0xde) >> 0x10),local_4);
        uVar4 = FUN_1158_2273(0x6b,(char *)s_sDate_1160_10a7 + 1,uVar4);
        FUN_1138_1c77(uVar4,uVar5);
      }
      else {
        uVar5 = 0;
        uVar4 = FUN_1148_0dd0((int)*(undefined4 *)(iVar2 + 0xde),
                              (int)((ulong)*(undefined4 *)(iVar2 + 0xde) >> 0x10),local_4);
        uVar4 = FUN_1158_2273(0x6b,(char *)s_sDate_1160_10a7 + 1,uVar4);
        FUN_1138_1cb8(uVar4,uVar5);
        uVar5 = 0;
        uVar4 = FUN_1148_0dd0((int)*(undefined4 *)(iVar2 + 0xde),
                              (int)((ulong)*(undefined4 *)(iVar2 + 0xde) >> 0x10),local_4);
        uVar4 = FUN_1158_2273(0x6b,(char *)s_sDate_1160_10a7 + 1,uVar4);
        FUN_1138_1c77(uVar4,uVar5);
      }
      if (local_4 == iVar1) break;
      local_4 = local_4 + 1;
    }
  }
  FUN_1138_36f9(iVar2,uVar3);
  return;
}



/* ---- FUN_10a8_236f @ 10a8:236f  (77 octets) ---- */

void __stdcall16far FUN_10a8_236f(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  int local_4;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  uVar3 = *(undefined4 *)((int)param_1 + 0xde);
  iVar1 = *(int *)((int)uVar3 + 8) + -1;
  if (-1 < iVar1) {
    local_4 = 0;
    while( true ) {
      uVar3 = *(undefined4 *)((int)param_1 + 0xde);
      uVar3 = FUN_1148_0dd0((int)uVar3,(int)((ulong)uVar3 >> 0x10),local_4);
      FUN_1148_432a((int)param_2,(int)((ulong)param_2 >> 0x10),uVar3);
      if (local_4 == iVar1) break;
      local_4 = local_4 + 1;
    }
  }
  return;
}



/* ---- FUN_10a8_23bc @ 10a8:23bc  (73 octets) ---- */

void __stdcall16far FUN_10a8_23bc(undefined4 param_1)

{
  undefined2 *puVar1;
  int iVar2;
  int iVar3;
  undefined2 uVar4;
  
  uVar4 = (undefined2)((ulong)param_1 >> 0x10);
  iVar3 = (int)param_1;
  puVar1 = (undefined2 *)((int)*(undefined4 *)*(undefined4 *)(iVar3 + 0xea) + 8);
  (*(code *)*puVar1)();
  puVar1 = (undefined2 *)((int)*(undefined4 *)*(undefined4 *)(iVar3 + 0xea) + 0x10);
  iVar2 = (*(code *)*puVar1)();
  if (iVar2 < 1) {
    *(undefined2 *)(iVar3 + 0xee) = 0xffff;
  }
  else {
    *(undefined2 *)(iVar3 + 0xee) = 0;
  }
  return;
}



/* ---- FUN_10a8_2405 @ 10a8:2405  (106 octets) ---- */

void __stdcall16far FUN_10a8_2405(undefined4 param_1,undefined2 param_2,undefined2 param_3)

{
  int iVar1;
  int iVar2;
  undefined2 uVar3;
  long lVar4;
  int local_4;
  
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  iVar2 = (int)param_1;
  iVar1 = *(int *)((int)*(undefined4 *)(iVar2 + 0xde) + 8) + -1;
  if (-1 < iVar1) {
    local_4 = 0;
    while( true ) {
      lVar4 = FUN_1148_0dd0((int)*(undefined4 *)(iVar2 + 0xde),
                            (int)((ulong)*(undefined4 *)(iVar2 + 0xde) >> 0x10),local_4);
      if (lVar4 == CONCAT22(param_3,param_2)) {
        FUN_10a8_246f(iVar2,uVar3,local_4);
        return;
      }
      if (local_4 == iVar1) break;
      local_4 = local_4 + 1;
    }
  }
  FUN_1138_5fae(iVar2,uVar3,param_2,param_3);
  return;
}



/* ---- FUN_10a8_246f @ 10a8:246f  (564 octets) ---- */

/* WARNING: Removing unreachable block (ram,0x10a824e8) */

void __stdcall16far FUN_10a8_246f(undefined4 param_1,int param_2)

{
  undefined2 *puVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined2 uVar6;
  long lVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  undefined2 uVar10;
  
  uVar6 = (undefined2)((ulong)param_1 >> 0x10);
  iVar5 = (int)param_1;
  if ((*(byte *)(iVar5 + 0x18) & 1) == 0) {
    if (((param_2 != *(int *)(iVar5 + 0xee)) && (-1 < param_2)) &&
       (param_2 < *(int *)((int)*(undefined4 *)(iVar5 + 0xde) + 8))) {
      if (*(int *)(iVar5 + 0x108) != 0) {
        (*(code *)*(undefined2 *)(iVar5 + 0x106))();
      }
      lVar7 = FUN_1140_17a8(iVar5,uVar6);
      uVar10 = (undefined2)((ulong)lVar7 >> 0x10);
      if ((lVar7 != 0) &&
         (cVar2 = FUN_1138_370e(iVar5,uVar6,*(undefined2 *)((int)lVar7 + 0xe4),
                                *(undefined2 *)((int)lVar7 + 0xe6)), cVar2 != '\0')) {
        FUN_1140_3fd0(lVar7,iVar5,uVar6);
      }
      uVar8 = FUN_1148_0dd0((int)*(undefined4 *)(iVar5 + 0xde),
                            (int)((ulong)*(undefined4 *)(iVar5 + 0xde) >> 0x10),param_2);
      FUN_1138_201c(uVar8);
      FUN_1138_1c77(uVar8,1);
      FUN_1138_1cb8(uVar8,1);
      if ((-1 < *(int *)(iVar5 + 0xee)) &&
         (*(int *)(iVar5 + 0xee) < *(int *)((int)*(undefined4 *)(iVar5 + 0xde) + 8))) {
        uVar8 = FUN_1148_0dd0((int)*(undefined4 *)(iVar5 + 0xde),
                              (int)((ulong)*(undefined4 *)(iVar5 + 0xde) >> 0x10),
                              *(undefined2 *)(iVar5 + 0xee));
        FUN_1138_1c77(uVar8,0);
        FUN_1138_1cb8(uVar8,0);
      }
      cVar2 = FUN_1138_64fa(iVar5,uVar6);
      if (cVar2 != '\0') {
        iVar3 = GETFOCUS(0x1138);
        iVar4 = FUN_1138_62b9(iVar5,uVar6);
        if (iVar4 == iVar3) {
          if (-1 < *(int *)(iVar5 + 0xee)) {
            uVar8 = FUN_1148_0dd0((int)*(undefined4 *)(iVar5 + 0xe2),
                                  (int)((ulong)*(undefined4 *)(iVar5 + 0xe2) >> 0x10),
                                  *(undefined2 *)(iVar5 + 0xee));
            *(undefined *)((int)uVar8 + 0x90) = 0;
          }
          uVar8 = FUN_1148_0dd0((int)*(undefined4 *)(iVar5 + 0xe2),
                                (int)((ulong)*(undefined4 *)(iVar5 + 0xe2) >> 0x10),param_2);
          *(undefined *)((int)uVar8 + 0x90) = 1;
        }
      }
      if (*(int *)(iVar5 + 0xee) / *(int *)(iVar5 + 0xf8) == param_2 / *(int *)(iVar5 + 0xf8)) {
        *(int *)(iVar5 + 0xee) = param_2;
        uVar10 = 1;
        puVar9 = (undefined4 *)
                 FUN_1148_0dd0((int)*(undefined4 *)(iVar5 + 0xe2),
                               (int)((ulong)*(undefined4 *)(iVar5 + 0xe2) >> 0x10),param_2);
        puVar1 = (undefined2 *)((int)*puVar9 + 0x58);
        (*(code *)*puVar1)(0x1148,puVar9,uVar10);
      }
      else {
        *(int *)(iVar5 + 0xee) = param_2;
        uVar10 = 1;
        puVar9 = (undefined4 *)
                 FUN_1148_0dd0((int)*(undefined4 *)(iVar5 + 0xe2),
                               (int)((ulong)*(undefined4 *)(iVar5 + 0xe2) >> 0x10),param_2);
        puVar1 = (undefined2 *)((int)*puVar9 + 0x58);
        (*(code *)*puVar1)(0x1148,puVar9,uVar10);
        FUN_1138_36f9(iVar5,uVar6);
        FUN_10a8_299e(iVar5,uVar6);
      }
    }
  }
  else {
    *(int *)(iVar5 + 0xee) = param_2;
  }
  return;
}



/* ---- FUN_10a8_26a3 @ 10a8:26a3  (40 octets) ---- */

void __stdcall16far FUN_10a8_26a3(undefined4 param_1)

{
  undefined2 *puVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  puVar1 = (undefined2 *)((int)*(undefined4 *)*(undefined4 *)((int)param_1 + 0xea) + 0x40);
  uVar2 = (*(code *)*puVar1)();
  FUN_10a8_246f((int)param_1,uVar3,uVar2);
  return;
}



/* ---- FUN_10a8_2725 @ 10a8:2725  (96 octets) ---- */

void __stdcall16far FUN_10a8_2725(undefined4 *param_1,undefined2 param_2,undefined2 param_3)

{
  undefined2 *puVar1;
  undefined4 *puVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined2 uVar7;
  
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  puVar2 = (undefined4 *)param_1;
  puVar1 = (undefined2 *)((int)*param_1 + -0x10);
  puVar6 = puVar2;
  uVar7 = uVar3;
  (*(code *)*puVar1)();
  if (-1 < *(int *)((int)puVar2 + 0xee)) {
    uVar4 = FUN_1148_0dd0((int)*(undefined4 *)((int)puVar2 + 0xe2),
                          (int)((ulong)*(undefined4 *)((int)puVar2 + 0xe2) >> 0x10),
                          *(undefined2 *)((int)puVar2 + 0xee));
    *(undefined *)((int)uVar4 + 0x90) = 1;
    puVar5 = (undefined4 *)
             FUN_1148_0dd0((int)*(undefined4 *)((int)puVar2 + 0xe2),
                           (int)((ulong)*(undefined4 *)((int)puVar2 + 0xe2) >> 0x10),
                           *(undefined2 *)((int)puVar2 + 0xee));
    puVar1 = (undefined2 *)((int)*puVar5 + 0x44);
    (*(code *)*puVar1)(0x1148,puVar5,puVar6,uVar7,param_2,param_3);
  }
  return;
}



/* ---- FUN_10a8_2785 @ 10a8:2785  (96 octets) ---- */

void __stdcall16far FUN_10a8_2785(undefined4 *param_1,undefined2 param_2,undefined2 param_3)

{
  undefined2 *puVar1;
  undefined4 *puVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined2 uVar7;
  
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  puVar2 = (undefined4 *)param_1;
  puVar1 = (undefined2 *)((int)*param_1 + -0x10);
  puVar6 = puVar2;
  uVar7 = uVar3;
  (*(code *)*puVar1)();
  if (-1 < *(int *)((int)puVar2 + 0xee)) {
    uVar4 = FUN_1148_0dd0((int)*(undefined4 *)((int)puVar2 + 0xe2),
                          (int)((ulong)*(undefined4 *)((int)puVar2 + 0xe2) >> 0x10),
                          *(undefined2 *)((int)puVar2 + 0xee));
    *(undefined *)((int)uVar4 + 0x90) = 0;
    puVar5 = (undefined4 *)
             FUN_1148_0dd0((int)*(undefined4 *)((int)puVar2 + 0xe2),
                           (int)((ulong)*(undefined4 *)((int)puVar2 + 0xe2) >> 0x10),
                           *(undefined2 *)((int)puVar2 + 0xee));
    puVar1 = (undefined2 *)((int)*puVar5 + 0x44);
    (*(code *)*puVar1)(0x1148,puVar5,puVar6,uVar7,param_2,param_3);
  }
  return;
}



/* ---- FUN_10a8_27e5 @ 10a8:27e5  (22 octets) ---- */

void __stdcall16far FUN_10a8_27e5(undefined2 param_1_00,undefined2 param_2,undefined4 param_1)

{
  undefined2 uVar1;
  
  uVar1 = (undefined2)((ulong)param_1 >> 0x10);
  *(undefined2 *)((int)param_1 + 8) = 1;
  *(undefined2 *)((int)param_1 + 10) = 0;
  return;
}



/* ---- FUN_10a8_28d0 @ 10a8:28d0  (163 octets) ---- */

void __stdcall16far FUN_10a8_28d0(undefined4 param_1,undefined2 param_2_00,int *param_2)

{
  int iVar1;
  int iVar2;
  undefined2 uVar3;
  
  iVar1 = *param_2;
  iVar2 = (int)param_1;
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  if ((iVar1 == 0x27) || (iVar1 == 0x28)) {
    if (*(int *)(iVar2 + 0xee) < *(int *)((int)*(undefined4 *)(iVar2 + 0xde) + 8) + -1) {
      FUN_10a8_246f(iVar2,uVar3,*(int *)(iVar2 + 0xee) + 1);
    }
    else {
      FUN_10a8_246f(iVar2,uVar3,0);
    }
    FUN_1158_206a((char *)s_sDate_1160_10a7 + 1,iVar2,uVar3);
  }
  else if ((iVar1 == 0x25) || (iVar1 == 0x26)) {
    if (*(int *)(iVar2 + 0xee) < 1) {
      FUN_10a8_246f(iVar2,uVar3,*(int *)((int)*(undefined4 *)(iVar2 + 0xde) + 8) + -1);
    }
    else {
      FUN_10a8_246f(iVar2,uVar3,*(int *)(iVar2 + 0xee) + -1);
    }
    FUN_1158_206a((char *)s_sDate_1160_10a7 + 1,iVar2,uVar3);
  }
  return;
}



/* ---- FUN_10a8_2973 @ 10a8:2973  (43 octets) ---- */

void __stdcall16far FUN_10a8_2973(undefined4 *param_1,int param_2)

{
  undefined2 *puVar1;
  undefined4 *puVar2;
  undefined2 uVar3;
  
  if (2 < param_2) {
    uVar3 = (undefined2)((ulong)param_1 >> 0x10);
    puVar2 = (undefined4 *)param_1;
    *(int *)(puVar2 + 0x3e) = param_2;
    FUN_1138_36f9(puVar2,uVar3);
    puVar1 = (undefined2 *)((int)*param_1 + 0x44);
    (*(code *)*puVar1)(0x1138,puVar2,uVar3);
  }
  return;
}



/* ---- FUN_10a8_299e @ 10a8:299e  (1247 octets) ---- */

void __stdcall16far FUN_10a8_299e(undefined4 *param_1)

{
  undefined2 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  int iVar9;
  undefined2 uVar10;
  undefined2 uVar11;
  undefined2 unaff_SS;
  undefined4 uVar12;
  undefined4 *puVar13;
  int local_1c;
  int local_18;
  int local_16;
  int local_10;
  int local_a;
  int local_8;
  int local_6;
  int local_4;
  
  uVar10 = (undefined2)((ulong)param_1 >> 0x10);
  puVar7 = (undefined4 *)param_1;
  puVar1 = (undefined2 *)((int)*param_1 + 0x34);
  puVar13 = puVar7;
  uVar11 = uVar10;
  (*(code *)*puVar1)();
  FUN_1158_161b(8,&local_a,unaff_SS,puVar13,uVar11);
  if (1 < *(int *)((int)puVar7 + 0xfa)) {
    local_16 = local_6 + (*(int *)((int)puVar7 + 0xfa) + -1) * -8 + -2;
    iVar9 = *(int *)((int)*(undefined4 *)((int)puVar7 + 0xe2) + 8) % *(int *)(puVar7 + 0x3e);
    local_1c = *(int *)((int)puVar7 + 0xfa) + -1;
    if (0 < local_1c) {
      while( true ) {
        iVar2 = local_6 + (local_1c + -1) * -8;
        iVar3 = iVar2 + -2;
        if (*(int *)((int)puVar7 + 0xee) / *(int *)(puVar7 + 0x3e) == local_1c) {
          local_18 = iVar9 * *(int *)(puVar7 + 0x3f) + 4 +
                     (*(int *)((int)puVar7 + 0xfa) - local_1c) * 8;
        }
        else {
          local_18 = local_16;
        }
        iVar4 = local_1c * *(int *)(puVar7 + 0x37) + local_8;
        iVar5 = iVar4 + 4;
        iVar6 = local_4 + (*(int *)((int)puVar7 + 0xfa) - local_1c) * -8;
        uVar11 = (undefined2)((ulong)puVar7[0x36] >> 0x10);
        iVar8 = (int)puVar7[0x36];
        FUN_1128_13da((int)*(undefined4 *)(iVar8 + 0xb),
                      (int)((ulong)*(undefined4 *)(iVar8 + 0xb) >> 0x10),0,0);
        FUN_1128_1db8(iVar8,uVar11,iVar5,local_18);
        FUN_1128_1d7b(iVar8,uVar11,iVar5,iVar3);
        FUN_1128_1d7b(iVar8,uVar11,iVar6 + -6,iVar3);
        FUN_1128_1d7b(iVar8,uVar11,iVar6 + -6,local_16);
        if ((iVar9 < 1) ||
           ((*(int *)((int)puVar7 + 0xee) / *(int *)(puVar7 + 0x3e) != local_1c &&
            (*(int *)((int)puVar7 + 0xee) / *(int *)(puVar7 + 0x3e) + 1 != local_1c)))) {
          FUN_1128_13da((int)*(undefined4 *)(iVar8 + 0xb),
                        (int)((ulong)*(undefined4 *)(iVar8 + 0xb) >> 0x10),0xfff0,0xffff);
          FUN_1128_1db8(iVar8,uVar11,iVar5,iVar2 + -9);
          FUN_1128_1d7b(iVar8,uVar11,iVar5,iVar2 + -4);
          FUN_1128_1d7b(iVar8,uVar11,iVar4 + 5,iVar2 + -4);
          FUN_1128_1d7b(iVar8,uVar11,iVar4 + 5,iVar2 + -10);
        }
        else {
          FUN_1128_13da((int)*(undefined4 *)(iVar8 + 0xb),
                        (int)((ulong)*(undefined4 *)(iVar8 + 0xb) >> 0x10),0xffeb,0xffff);
          FUN_1128_1db8(iVar8,uVar11,iVar5,local_18 + -1);
          FUN_1128_1d7b(iVar8,uVar11,iVar4 + 5,local_18);
          FUN_1128_1d7b(iVar8,uVar11,iVar4 + 5,iVar2 + -3);
        }
        FUN_1128_13da((int)*(undefined4 *)(iVar8 + 0xb),
                      (int)((ulong)*(undefined4 *)(iVar8 + 0xb) >> 0x10),0xffef,0xffff);
        FUN_1128_1db8(iVar8,uVar11,iVar5,iVar2 + -3);
        FUN_1128_1d7b(iVar8,uVar11,iVar6 + -7,iVar2 + -3);
        FUN_1128_1d7b(iVar8,uVar11,iVar6 + -7,local_16);
        if (local_1c == 1) break;
        local_1c = local_1c + -1;
        local_16 = iVar3;
      }
    }
  }
  local_a = local_a + 2;
  local_4 = local_4 + -2;
  local_6 = local_6 + (*(int *)((int)puVar7 + 0xfa) + -1) * -8 + -2;
  local_8 = *(int *)((int)puVar7 + 0xfa) * *(int *)(puVar7 + 0x37) + 4;
  local_10 = 0;
  if (-1 < *(int *)((int)puVar7 + 0xee)) {
    uVar12 = FUN_1148_0dd0((int)*(undefined4 *)((int)puVar7 + 0xe2),
                           (int)((ulong)*(undefined4 *)((int)puVar7 + 0xe2) >> 0x10),
                           *(undefined2 *)((int)puVar7 + 0xee));
    local_10 = *(int *)((int)uVar12 + 0x22);
    uVar12 = FUN_1148_0dd0((int)*(undefined4 *)((int)puVar7 + 0xe2),
                           (int)((ulong)*(undefined4 *)((int)puVar7 + 0xe2) >> 0x10),
                           *(undefined2 *)((int)puVar7 + 0xee));
    local_10 = *(int *)((int)uVar12 + 0x1e) + local_10;
  }
  uVar11 = (undefined2)((ulong)puVar7[0x36] >> 0x10);
  iVar9 = (int)puVar7[0x36];
  FUN_1128_13da((int)*(undefined4 *)(iVar9 + 0xb),(int)((ulong)*(undefined4 *)(iVar9 + 0xb) >> 0x10)
                ,0,0);
  FUN_1128_1db8(iVar9,uVar11,local_8,local_a);
  FUN_1128_1d7b(iVar9,uVar11,local_4 + -1,local_a);
  FUN_1128_1d7b(iVar9,uVar11,local_4 + -1,local_6 + -1);
  FUN_1128_1d7b(iVar9,uVar11,local_8,local_6 + -1);
  FUN_1128_1d7b(iVar9,uVar11,local_8,local_10);
  INFLATERECT(0x1128,0xffff,0xffff,&local_a);
  FUN_1128_13da((int)*(undefined4 *)(iVar9 + 0xb),(int)((ulong)*(undefined4 *)(iVar9 + 0xb) >> 0x10)
                ,0xffef,0xffff);
  FUN_1128_1db8(iVar9,uVar11,local_4 + -1,local_a);
  FUN_1128_1d7b(iVar9,uVar11,local_4 + -1,local_6 + -1);
  FUN_1128_1d7b(iVar9,uVar11,local_8,local_6 + -1);
  FUN_1128_13da((int)*(undefined4 *)(iVar9 + 0xb),(int)((ulong)*(undefined4 *)(iVar9 + 0xb) >> 0x10)
                ,0xffeb,0xffff);
  FUN_1128_1db8(iVar9,uVar11,local_8,local_10);
  FUN_1128_1d7b(iVar9,uVar11,local_8,local_6 + -1);
  FUN_1128_1db8(iVar9,uVar11,local_8,local_a);
  FUN_1128_1d7b(iVar9,uVar11,local_4 + -1,local_a);
  INFLATERECT(0x1128,0xffff,0xffff,&local_a);
  FUN_1128_13da((int)*(undefined4 *)(iVar9 + 0xb),(int)((ulong)*(undefined4 *)(iVar9 + 0xb) >> 0x10)
                ,0xffef,0xffff);
  FUN_1128_1db8(iVar9,uVar11,local_4 + -1,local_a);
  FUN_1128_1d7b(iVar9,uVar11,local_4 + -1,local_6 + -1);
  FUN_1128_1d7b(iVar9,uVar11,local_8,local_6 + -1);
  FUN_1128_13da((int)*(undefined4 *)(iVar9 + 0xb),(int)((ulong)*(undefined4 *)(iVar9 + 0xb) >> 0x10)
                ,0xffeb,0xffff);
  FUN_1128_1db8(iVar9,uVar11,local_8,local_10);
  FUN_1128_1d7b(iVar9,uVar11,local_8,local_6 + -1);
  FUN_1128_1db8(iVar9,uVar11,local_8,local_a);
  FUN_1128_1d7b(iVar9,uVar11,local_4 + -1,local_a);
  return;
}



/* ---- FUN_10a8_2e7d @ 10a8:2e7d  (27 octets) ---- */

void __stdcall16far FUN_10a8_2e7d(undefined4 param_1)

{
  undefined2 uVar1;
  
  uVar1 = (undefined2)((ulong)param_1 >> 0x10);
  FUN_1138_6d77((int)param_1,uVar1);
  FUN_10a8_299e((int)param_1,uVar1);
  return;
}



/* ---- FUN_10a8_2f21 @ 10a8:2f21  (30 octets) ---- */

void __stdcall16far FUN_10a8_2f21(undefined4 param_1)

{
  undefined2 *puVar1;
  
  puVar1 = (undefined2 *)((int)*(undefined4 *)*(undefined4 *)((int)param_1 + 0xf0) + 8);
  (*(code *)*puVar1)();
  return;
}



/* ---- FUN_10a8_3046 @ 10a8:3046  (618 octets) ---- */

void __stdcall16far FUN_10a8_3046(undefined4 param_1,int *param_2)

{
  undefined2 *puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  undefined2 uVar7;
  undefined2 uVar8;
  undefined2 unaff_CS;
  undefined4 uVar9;
  undefined4 *puVar10;
  int local_18;
  int local_16;
  int local_10;
  int local_a;
  int local_8;
  int local_6;
  int local_4;
  
  uVar7 = (undefined2)((ulong)param_1 >> 0x10);
  iVar5 = (int)param_1;
  iVar2 = *(int *)((int)*(undefined4 *)(iVar5 + 0xe2) + 8);
  *(int *)(iVar5 + 0xfa) = iVar2 / *(int *)(iVar5 + 0xf8);
  if (*(int *)(iVar5 + 0xfa) * *(int *)(iVar5 + 0xf8) < iVar2) {
    *(int *)(iVar5 + 0xfa) = *(int *)(iVar5 + 0xfa) + 1;
  }
  *param_2 = *param_2 + 5;
  uVar8 = (undefined2)((ulong)param_2 >> 0x10);
  piVar6 = (int *)param_2;
  piVar6[2] = piVar6[2] + (*(int *)(iVar5 + 0xfa) + -1) * -8 + -5;
  piVar6[1] = piVar6[1] + 7 + *(int *)(iVar5 + 0xfa) * *(int *)(iVar5 + 0xdc);
  piVar6[3] = piVar6[3] + -5;
  if ((-1 < *(int *)(iVar5 + 0xee)) &&
     (*(int *)(iVar5 + 0xee) < *(int *)((int)*(undefined4 *)(iVar5 + 0xde) + 8))) {
    uVar9 = FUN_1148_0dd0((int)*(undefined4 *)(iVar5 + 0xde),
                          (int)((ulong)*(undefined4 *)(iVar5 + 0xde) >> 0x10),
                          *(undefined2 *)(iVar5 + 0xee));
    unaff_CS = 0x1138;
    FUN_1138_35c2(iVar5,uVar7,piVar6,uVar8,uVar9);
  }
  uVar4 = piVar6[2] - *param_2 >> 0xf;
  iVar2 = ((piVar6[2] - *param_2 ^ uVar4) - uVar4) + 6;
  puVar10 = (undefined4 *)*(undefined4 *)(iVar5 + 0xea);
  puVar1 = (undefined2 *)((int)*puVar10 + 0x10);
  iVar3 = (*(code *)*puVar1)(unaff_CS,(undefined4 *)puVar10,(int)((ulong)puVar10 >> 0x10));
  if (0 < iVar3) {
    local_8 = 0;
    local_a = 0;
    *(int *)(iVar5 + 0xfc) = iVar2 / *(int *)(iVar5 + 0xf8);
    if (iVar2 / 3 < *(int *)(iVar5 + 0xfc)) {
      *(int *)(iVar5 + 0xfc) = iVar2 / 3;
    }
    local_4 = (*(int *)(iVar5 + 0xee) / *(int *)(iVar5 + 0xf8)) * *(int *)(iVar5 + 0xf8);
    if (local_4 < 0) {
      local_4 = 0;
    }
    local_6 = *(int *)((int)*(undefined4 *)(iVar5 + 0xe2) + 8) + -1;
    local_10 = local_4;
    while (local_10 <= local_6) {
      if (local_a == *(int *)(iVar5 + 0xf8)) {
        local_a = 0;
        local_8 = local_8 + 1;
      }
      iVar2 = local_a * *(int *)(iVar5 + 0xfc) + local_8 * 8 + 2;
      iVar3 = ((*(int *)(iVar5 + 0xfa) - local_8) + -1) * *(int *)(iVar5 + 0xdc) + 4;
      local_16 = *(int *)(iVar5 + 0xdc);
      local_18 = *(int *)(iVar5 + 0xfc) + 1;
      if (local_8 == 0) {
        local_16 = local_16 + 3;
      }
      if (*(int *)(iVar5 + 0xf8) + -1 == local_a) {
        local_18 = (*(int *)(iVar5 + 0x22) + -2 + ((*(int *)(iVar5 + 0xfa) + -1) - local_8) * -8) -
                   iVar2;
      }
      puVar10 = (undefined4 *)
                FUN_1148_0dd0((int)*(undefined4 *)(iVar5 + 0xe2),
                              (int)((ulong)*(undefined4 *)(iVar5 + 0xe2) >> 0x10),local_10);
      puVar1 = (undefined2 *)((int)*puVar10 + 0x4c);
      (*(code *)*puVar1)(0x1148,puVar10,local_16,local_18,iVar3,iVar2);
      local_a = local_a + 1;
      local_10 = local_10 + 1;
      if ((local_6 < local_10) && (0 < local_4)) {
        local_10 = 0;
        local_a = 0;
        local_8 = local_8 + 1;
        local_6 = local_4 + -1;
        local_4 = 0;
      }
    }
  }
  return;
}



/* ---- FUN_10a8_32b0 @ 10a8:32b0  (26 octets) ---- */

void __stdcall16far FUN_10a8_32b0(undefined4 param_1)

{
  FUN_1138_24bb((int)param_1,(int)((ulong)param_1 >> 0x10),0,0,0,0xf64);
  return;
}



/* ---- FUN_10a8_32ca @ 10a8:32ca  (40 octets) ---- */

void __stdcall16far FUN_10a8_32ca(undefined4 param_1)

{
  undefined2 *puVar1;
  
  if (*(int *)((int)param_1 + 0x100) != 0) {
    puVar1 = (undefined2 *)((int)param_1 + 0xfe);
    (*(code *)*puVar1)();
  }
  return;
}



/* ---- FUN_10a8_32f2 @ 10a8:32f2  (42 octets) ---- */

void __cdecl16far FUN_10a8_32f2(void)

{
  undefined2 unaff_SS;
  undefined2 local_a;
  char *local_8;
  undefined2 local_6;
  char *local_4;
  
  local_a = 0x6b;
  local_8 = (char *)s_sDate_1160_10a7 + 1;
  local_6 = 0x5c5;
  local_4 = (char *)s_sDate_1160_10a7 + 1;
  FUN_1148_095a(1,&local_a,unaff_SS);
  return;
}




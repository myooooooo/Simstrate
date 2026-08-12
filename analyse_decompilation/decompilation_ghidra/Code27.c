/* Simstrat (FR).EXE - segment Code27 - 93 fonctions
   Decompile par Ghidra 11.2.1 (x86 16 bits, chargeur NE). */

/* ---- FUN_10d0_1833 @ 10d0:1833  (73 octets) ---- */

void __stdcall16far FUN_10d0_1833(undefined4 param_1,char param_2)

{
  int iVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  FUN_1158_1f7f((int)*(undefined4 *)(iVar1 + 0xfd),
                (int)((ulong)*(undefined4 *)(iVar1 + 0xfd) >> 0x10));
  *(undefined2 *)(iVar1 + 0xfd) = 0;
  *(undefined2 *)(iVar1 + 0xff) = 0;
  FUN_1158_1f7f((int)*(undefined4 *)(iVar1 + 0x101),
                (int)((ulong)*(undefined4 *)(iVar1 + 0x101) >> 0x10));
  FUN_1100_11c8(iVar1,uVar2,0);
  if (param_2 != '\0') {
    FUN_1158_200f();
  }
  return;
}



/* ---- FUN_10d0_187c @ 10d0:187c  (79 octets) ---- */

void __stdcall16far
FUN_10d0_187c(undefined4 param_1,char param_2,undefined2 param_3,undefined2 param_4)

{
  int iVar1;
  undefined2 uVar2;
  long lVar3;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  FUN_1138_1632(iVar1,uVar2,param_2,param_3,param_4);
  if (((param_2 == '\x01') && (*(int *)(iVar1 + 0xfd) != 0 || *(int *)(iVar1 + 0xff) != 0)) &&
     (lVar3 = FUN_10d0_1a5f(iVar1,uVar2), lVar3 == CONCAT22(param_4,param_3))) {
    FUN_10d0_1a83(iVar1,uVar2,0,0);
  }
  return;
}



/* ---- FUN_10d0_18cb @ 10d0:18cb  (62 octets) ---- */

void __stdcall16far FUN_10d0_18cb(undefined4 param_1,byte param_2,int *param_3)

{
  undefined4 uVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  FUN_1100_120b((int)param_1,uVar2,param_2,(int *)param_3,(int)((ulong)param_3 >> 0x10));
  if ((*param_3 == 0x2e) || ((*param_3 == 0x2d && ((param_2 & 1) != 0)))) {
    uVar1 = *(undefined4 *)((int)param_1 + 0xfd);
    FUN_10e0_814f((int)uVar1,(int)((ulong)uVar1 >> 0x10));
  }
  return;
}



/* ---- FUN_10d0_1909 @ 10d0:1909  (175 octets) ---- */

void __stdcall16far FUN_10d0_1909(undefined4 param_1,byte *param_2)

{
  byte bVar1;
  undefined2 *puVar2;
  undefined4 *puVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined2 uVar8;
  undefined2 uVar9;
  
  uVar8 = (undefined2)((ulong)param_1 >> 0x10);
  iVar6 = (int)param_1;
  FUN_1100_1387(iVar6,uVar8,(byte *)param_2,(int)((ulong)param_2 >> 0x10));
  if ((0x1f < *param_2) &&
     (uVar9 = (undefined2)((ulong)*(undefined4 *)(iVar6 + 0xfd) >> 0x10),
     iVar7 = (int)*(undefined4 *)(iVar6 + 0xfd),
     uVar5 = *(uint *)(iVar7 + 0x14) | *(uint *)(iVar7 + 0x16), uVar5 != 0)) {
    puVar3 = (undefined4 *)*(undefined4 *)((int)*(undefined4 *)(iVar6 + 0xfd) + 0x14);
    puVar2 = (undefined2 *)((int)*puVar3 + 0x70);
    cVar4 = (*(code *)*puVar2)(0x1100,(undefined4 *)puVar3,(int)((ulong)puVar3 >> 0x10),
                               CONCAT11((char)(uVar5 >> 8),*param_2));
    if (cVar4 == '\0') {
      MESSAGEBEEP(0x1100,0);
      *param_2 = 0;
    }
  }
  bVar1 = *param_2;
  if ((((bVar1 == 8) || (bVar1 == 0x16)) || (bVar1 == 0x18)) || (0x1f < bVar1)) {
    FUN_10e0_814f((int)*(undefined4 *)(iVar6 + 0xfd),
                  (int)((ulong)*(undefined4 *)(iVar6 + 0xfd) >> 0x10));
  }
  else if (bVar1 == 0x1b) {
    FUN_10e0_81c2((int)*(undefined4 *)(iVar6 + 0xfd),
                  (int)((ulong)*(undefined4 *)(iVar6 + 0xfd) >> 0x10));
    FUN_1120_4a3f(iVar6,uVar8);
    *param_2 = 0;
  }
  return;
}



/* ---- FUN_10d0_19b8 @ 10d0:19b8  (29 octets) ---- */

undefined __stdcall16far FUN_10d0_19b8(undefined4 param_1)

{
  undefined4 uVar1;
  undefined uVar2;
  
  uVar1 = *(undefined4 *)((int)param_1 + 0xfd);
  uVar2 = FUN_10e0_814f((int)uVar1,(int)((ulong)uVar1 >> 0x10));
  return uVar2;
}



/* ---- FUN_10d0_19d5 @ 10d0:19d5  (32 octets) ---- */

void __stdcall16far FUN_10d0_19d5(undefined4 param_1)

{
  undefined4 uVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  uVar1 = *(undefined4 *)((int)param_1 + 0xfd);
  FUN_10e0_81c2((int)uVar1,(int)((ulong)uVar1 >> 0x10));
  FUN_1120_4a3f((int)param_1,uVar2);
  return;
}



/* ---- FUN_10d0_19f5 @ 10d0:19f5  (74 octets) ---- */

void __stdcall16far FUN_10d0_19f5(undefined4 *param_1,char param_2)

{
  undefined2 *puVar1;
  char cVar2;
  undefined4 *puVar3;
  undefined2 uVar4;
  
  uVar4 = (undefined2)((ulong)param_1 >> 0x10);
  puVar3 = (undefined4 *)param_1;
  if (*(char *)((int)puVar3 + 0x106) != param_2) {
    *(char *)((int)puVar3 + 0x106) = param_2;
    if (*(char *)((int)puVar3 + 0x105) != '\0') {
      cVar2 = FUN_1100_181c(puVar3,uVar4);
      if (cVar2 == '\0') {
        puVar1 = (undefined2 *)((int)*param_1 + 0x44);
        (*(code *)*puVar1)(0x1100,puVar3,uVar4);
      }
    }
    FUN_10e0_81c2((int)*(undefined4 *)((int)puVar3 + 0xfd),
                  (int)((ulong)*(undefined4 *)((int)puVar3 + 0xfd) >> 0x10));
  }
  return;
}



/* ---- FUN_10d0_1a3f @ 10d0:1a3f  (32 octets) ---- */

void __stdcall16far FUN_10d0_1a3f(undefined4 param_1)

{
  undefined4 uVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  uVar1 = *(undefined4 *)((int)param_1 + 0xfd);
  FUN_10e0_81b3((int)uVar1,(int)((ulong)uVar1 >> 0x10));
  FUN_1120_4cb6((int)param_1,uVar2);
  return;
}



/* ---- FUN_10d0_1a5f @ 10d0:1a5f  (36 octets) ---- */

undefined4 __stdcall16far FUN_10d0_1a5f(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined2 uVar3;
  
  uVar1 = *(undefined4 *)((int)param_1 + 0xfd);
  uVar3 = (undefined2)((ulong)uVar1 >> 0x10);
  iVar2 = (int)uVar1;
  return CONCAT22(*(undefined2 *)(iVar2 + 6),*(undefined2 *)(iVar2 + 4));
}



/* ---- FUN_10d0_1a83 @ 10d0:1a83  (28 octets) ---- */

void __stdcall16far FUN_10d0_1a83(undefined4 param_1,undefined2 param_2,undefined2 param_3)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)((int)param_1 + 0xfd);
  FUN_10d8_7731((int)uVar1,(int)((ulong)uVar1 >> 0x10),param_2,param_3);
  return;
}



/* ---- FUN_10d0_1a9f @ 10d0:1a9f  (42 octets) ---- */

void __stdcall16far FUN_10d0_1a9f(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined2 unaff_SS;
  undefined *puVar2;
  undefined local_102 [256];
  
  puVar2 = local_102;
  uVar1 = *(undefined4 *)((int)param_1 + 0xfd);
  FUN_10e0_8063((int)uVar1,(int)((ulong)uVar1 >> 0x10));
  FUN_1158_17e7(0xff,(int)param_2,(int)((ulong)param_2 >> 0x10),puVar2,unaff_SS);
  return;
}



/* ---- FUN_10d0_1ac9 @ 10d0:1ac9  (27 octets) ---- */

void __stdcall16far FUN_10d0_1ac9(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)((int)param_1 + 0xfd);
  FUN_10e0_8080((int)uVar1,(int)((ulong)uVar1 >> 0x10),(int)param_2,(int)((ulong)param_2 >> 0x10));
  return;
}



/* ---- FUN_10d0_1ae4 @ 10d0:1ae4  (26 octets) ---- */

undefined __stdcall16far FUN_10d0_1ae4(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)((int)param_1 + 0xfd);
  return *(undefined *)((int)uVar1 + 0x10);
}



/* ---- FUN_10d0_1afe @ 10d0:1afe  (26 octets) ---- */

void __stdcall16far FUN_10d0_1afe(undefined4 param_1,undefined param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)((int)param_1 + 0xfd);
  FUN_10d8_776e((int)uVar1,(int)((ulong)uVar1 >> 0x10),param_2);
  return;
}



/* ---- FUN_10d0_1b18 @ 10d0:1b18  (36 octets) ---- */

undefined4 __stdcall16far FUN_10d0_1b18(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined2 uVar3;
  
  uVar1 = *(undefined4 *)((int)param_1 + 0xfd);
  uVar3 = (undefined2)((ulong)uVar1 >> 0x10);
  iVar2 = (int)uVar1;
  return CONCAT22(*(undefined2 *)(iVar2 + 0x16),*(undefined2 *)(iVar2 + 0x14));
}



/* ---- FUN_10d0_1cb4 @ 10d0:1cb4  (36 octets) ---- */

void __stdcall16far FUN_10d0_1cb4(undefined4 param_1)

{
  undefined4 uVar1;
  uint in_AX;
  uint uVar2;
  undefined2 uVar3;
  
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  uVar1 = *(undefined4 *)((int)param_1 + 0xfd);
  uVar2 = in_AX & 0xff00;
  if (*(char *)((int)uVar1 + 0x20) == '\0') {
    uVar2 = uVar2 + 1;
  }
  FUN_1120_4979((int)param_1,uVar3,uVar2);
  return;
}



/* ---- FUN_10d0_1d0d @ 10d0:1d0d  (38 octets) ---- */

void __stdcall16far FUN_10d0_1d0d(undefined4 param_1,undefined2 param_2,undefined2 param_3)

{
  undefined4 uVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  uVar1 = *(undefined4 *)((int)param_1 + 0xfd);
  FUN_10e0_814f((int)uVar1,(int)((ulong)uVar1 >> 0x10));
  FUN_1100_1700((int)param_1,uVar2,param_2,param_3);
  return;
}



/* ---- FUN_10d0_1d33 @ 10d0:1d33  (38 octets) ---- */

void __stdcall16far FUN_10d0_1d33(undefined4 param_1,undefined2 param_2,undefined2 param_3)

{
  undefined4 uVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  uVar1 = *(undefined4 *)((int)param_1 + 0xfd);
  FUN_10e0_814f((int)uVar1,(int)((ulong)uVar1 >> 0x10));
  FUN_1100_16c1((int)param_1,uVar2,param_2,param_3);
  return;
}



/* ---- FUN_10d0_1d59 @ 10d0:1d59  (35 octets) ---- */

void __stdcall16far FUN_10d0_1d59(undefined4 param_1,undefined2 param_2,undefined2 param_3)

{
  undefined2 uVar1;
  
  uVar1 = (undefined2)((ulong)param_1 >> 0x10);
  FUN_10d0_19f5((int)param_1,uVar1,1);
  FUN_1100_227d((int)param_1,uVar1,param_2,param_3);
  return;
}



/* ---- FUN_10d0_205e @ 10d0:205e  (33 octets) ---- */

void __stdcall16far FUN_10d0_205e(undefined4 param_1,undefined2 param_2,undefined2 param_3)

{
  undefined2 uVar1;
  
  uVar1 = (undefined2)((ulong)param_1 >> 0x10);
  FUN_1120_4cde((int)param_1,uVar1,param_2,param_3);
  FUN_10d0_207f((int)param_1,uVar1);
  return;
}



/* ---- FUN_10d0_207f @ 10d0:207f  (128 octets) ---- */

void __stdcall16far FUN_10d0_207f(undefined4 param_1)

{
  undefined4 uVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 unaff_SS;
  int local_48 [16];
  int local_28 [16];
  int local_8;
  undefined2 local_6;
  undefined2 local_4;
  
  local_4 = GETDC();
  GETTEXTMETRICS(0x14d0,local_28,unaff_SS);
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  uVar1 = *(undefined4 *)((int)param_1 + 0x34);
  uVar2 = FUN_1128_1016((int)uVar1,(int)((ulong)uVar1 >> 0x10));
  local_6 = SELECTOBJECT(0x1128,uVar2);
  GETTEXTMETRICS(0x14d0,local_48,unaff_SS);
  SELECTOBJECT(0x14d0,local_6);
  RELEASEDC(0x14d0,local_4);
  local_8 = local_28[0];
  if (local_48[0] < local_28[0]) {
    local_8 = local_48[0];
  }
  *(int *)((int)param_1 + 0x107) = local_8 / 4;
  return;
}



/* ---- FUN_10d0_21f7 @ 10d0:21f7  (94 octets) ---- */

void __stdcall16far FUN_10d0_21f7(undefined4 param_1,char param_2)

{
  int iVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  FUN_1158_1f7f((int)*(undefined4 *)(iVar1 + 0xde),
                (int)((ulong)*(undefined4 *)(iVar1 + 0xde) >> 0x10));
  *(undefined2 *)(iVar1 + 0xde) = 0;
  *(undefined2 *)(iVar1 + 0xe0) = 0;
  FUN_1150_0624(*(undefined2 *)(iVar1 + 0xe6),*(undefined2 *)(iVar1 + 0xe8));
  FUN_1150_0624(*(undefined2 *)(iVar1 + 0xe2),*(undefined2 *)(iVar1 + 0xe4));
  FUN_1138_2efc(iVar1,uVar2,0);
  if (param_2 != '\0') {
    FUN_1158_200f();
  }
  return;
}



/* ---- FUN_10d0_2255 @ 10d0:2255  (79 octets) ---- */

void __stdcall16far
FUN_10d0_2255(undefined4 param_1,char param_2,undefined2 param_3,undefined2 param_4)

{
  int iVar1;
  undefined2 uVar2;
  long lVar3;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  FUN_1138_1632(iVar1,uVar2,param_2,param_3,param_4);
  if (((param_2 == '\x01') && (*(int *)(iVar1 + 0xde) != 0 || *(int *)(iVar1 + 0xe0) != 0)) &&
     (lVar3 = FUN_10d0_24d1(iVar1,uVar2), lVar3 == CONCAT22(param_4,param_3))) {
    FUN_10d0_24f5(iVar1,uVar2,0,0);
  }
  return;
}



/* ---- FUN_10d0_22a4 @ 10d0:22a4  (238 octets) ---- */

void __stdcall16far FUN_10d0_22a4(undefined4 param_1)

{
  undefined2 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  undefined2 uVar7;
  undefined2 uVar8;
  undefined2 unaff_SS;
  undefined *puVar9;
  undefined local_204 [256];
  undefined local_104 [257];
  undefined local_3;
  
  local_3 = 2;
  uVar7 = (undefined2)((ulong)param_1 >> 0x10);
  iVar5 = (int)param_1;
  uVar8 = (undefined2)((ulong)*(undefined4 *)(iVar5 + 0xde) >> 0x10);
  iVar6 = (int)*(undefined4 *)(iVar5 + 0xde);
  if ((*(int *)(iVar6 + 0x14) != 0 || *(int *)(iVar6 + 0x16) != 0) &&
     (uVar2 = *(undefined4 *)((int)*(undefined4 *)(iVar5 + 0xde) + 0x14),
     cVar4 = FUN_10d8_69db((int)uVar2,(int)((ulong)uVar2 >> 0x10)), cVar4 == '\0')) {
    uVar2 = *(undefined4 *)((int)*(undefined4 *)(iVar5 + 0xde) + 0x14);
    if (*(char *)((int)uVar2 + 0x22) == '\x05') {
      puVar3 = (undefined4 *)*(undefined4 *)((int)*(undefined4 *)(iVar5 + 0xde) + 0x14);
      puVar1 = (undefined2 *)((int)*puVar3 + 0x38);
      cVar4 = (*(code *)*puVar1)(0x10d8,(undefined4 *)puVar3,(int)((ulong)puVar3 >> 0x10));
      local_3 = cVar4 != '\0';
    }
    else {
      puVar9 = local_204;
      uVar2 = *(undefined4 *)((int)*(undefined4 *)(iVar5 + 0xde) + 0x14);
      uVar8 = unaff_SS;
      FUN_10d8_68cf((int)uVar2,(int)((ulong)uVar2 >> 0x10));
      FUN_1158_17e7(0xff,local_104,unaff_SS,puVar9,uVar8);
      cVar4 = FUN_10d0_2452(iVar5,uVar7,local_104,unaff_SS,(int)*(undefined4 *)(iVar5 + 0xe2),
                            (int)((ulong)*(undefined4 *)(iVar5 + 0xe2) >> 0x10));
      if (cVar4 == '\0') {
        cVar4 = FUN_10d0_2452(iVar5,uVar7,local_104,unaff_SS,(int)*(undefined4 *)(iVar5 + 0xe6),
                              (int)((ulong)*(undefined4 *)(iVar5 + 0xe6) >> 0x10));
        if (cVar4 != '\0') {
          local_3 = 0;
        }
      }
      else {
        local_3 = 1;
      }
    }
  }
  FUN_1120_6e38(iVar5,uVar7,local_3);
  return;
}



/* ---- FUN_10d0_2452 @ 10d0:2452  (76 octets) ---- */

undefined __stdcall16far
FUN_10d0_2452(undefined2 param_1_00,undefined2 param_2_00,undefined4 param_1,byte *param_2)

{
  int iVar1;
  undefined2 unaff_SS;
  undefined *puVar2;
  undefined2 uVar3;
  undefined local_106 [256];
  int local_6;
  undefined local_3;
  
  local_3 = 0;
  local_6 = 1;
  do {
    if ((int)(uint)*param_2 < local_6) {
      return local_3;
    }
    puVar2 = local_106;
    uVar3 = unaff_SS;
    FUN_10d8_0ff3(&local_6,unaff_SS,(byte *)param_2,(int)((ulong)param_2 >> 0x10));
    iVar1 = FUN_1150_07ed((int)param_1,(int)((ulong)param_1 >> 0x10),puVar2,uVar3);
  } while (iVar1 != 0);
  return 1;
}



/* ---- FUN_10d0_249e @ 10d0:249e  (51 octets) ---- */

void __stdcall16far FUN_10d0_249e(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  undefined2 uVar3;
  
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  iVar2 = (int)param_1;
  cVar1 = FUN_10e0_814f((int)*(undefined4 *)(iVar2 + 0xde),
                        (int)((ulong)*(undefined4 *)(iVar2 + 0xde) >> 0x10));
  if (cVar1 != '\0') {
    FUN_1120_6d7c(iVar2,uVar3);
    FUN_10e0_81b3((int)*(undefined4 *)(iVar2 + 0xde),
                  (int)((ulong)*(undefined4 *)(iVar2 + 0xde) >> 0x10));
  }
  return;
}



/* ---- FUN_10d0_24d1 @ 10d0:24d1  (36 octets) ---- */

undefined4 __stdcall16far FUN_10d0_24d1(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined2 uVar3;
  
  uVar1 = *(undefined4 *)((int)param_1 + 0xde);
  uVar3 = (undefined2)((ulong)uVar1 >> 0x10);
  iVar2 = (int)uVar1;
  return CONCAT22(*(undefined2 *)(iVar2 + 6),*(undefined2 *)(iVar2 + 4));
}



/* ---- FUN_10d0_24f5 @ 10d0:24f5  (28 octets) ---- */

void __stdcall16far FUN_10d0_24f5(undefined4 param_1,undefined2 param_2,undefined2 param_3)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)((int)param_1 + 0xde);
  FUN_10d8_7731((int)uVar1,(int)((ulong)uVar1 >> 0x10),param_2,param_3);
  return;
}



/* ---- FUN_10d0_253b @ 10d0:253b  (27 octets) ---- */

void __stdcall16far FUN_10d0_253b(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)((int)param_1 + 0xde);
  FUN_10e0_8080((int)uVar1,(int)((ulong)uVar1 >> 0x10),(int)param_2,(int)((ulong)param_2 >> 0x10));
  return;
}



/* ---- FUN_10d0_2556 @ 10d0:2556  (26 octets) ---- */

undefined __stdcall16far FUN_10d0_2556(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)((int)param_1 + 0xde);
  return *(undefined *)((int)uVar1 + 0x10);
}



/* ---- FUN_10d0_2570 @ 10d0:2570  (26 octets) ---- */

void __stdcall16far FUN_10d0_2570(undefined4 param_1,undefined param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)((int)param_1 + 0xde);
  FUN_10d8_776e((int)uVar1,(int)((ulong)uVar1 >> 0x10),param_2);
  return;
}



/* ---- FUN_10d0_258a @ 10d0:258a  (72 octets) ---- */

void __stdcall16far FUN_10d0_258a(undefined4 param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  undefined2 uVar3;
  
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  iVar2 = (int)param_1;
  FUN_1138_521f(iVar2,uVar3,(char *)param_2,(int)((ulong)param_2 >> 0x10));
  cVar1 = *param_2;
  if ((cVar1 == '\b') || (cVar1 == ' ')) {
    FUN_10e0_814f((int)*(undefined4 *)(iVar2 + 0xde),
                  (int)((ulong)*(undefined4 *)(iVar2 + 0xde) >> 0x10));
  }
  else if (cVar1 == '\x1b') {
    FUN_10e0_81c2((int)*(undefined4 *)(iVar2 + 0xde),
                  (int)((ulong)*(undefined4 *)(iVar2 + 0xde) >> 0x10));
  }
  return;
}



/* ---- FUN_10d0_25d2 @ 10d0:25d2  (30 octets) ---- */

void __stdcall16far FUN_10d0_25d2(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)((int)param_1 + 0xe2);
  FUN_1158_17e7(0xff,(int)param_2,(int)((ulong)param_2 >> 0x10),(int)uVar1,
                (int)((ulong)uVar1 >> 0x10));
  return;
}



/* ---- FUN_10d0_25f0 @ 10d0:25f0  (30 octets) ---- */

void __stdcall16far FUN_10d0_25f0(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)((int)param_1 + 0xe6);
  FUN_1158_17e7(0xff,(int)param_2,(int)((ulong)param_2 >> 0x10),(int)uVar1,
                (int)((ulong)uVar1 >> 0x10));
  return;
}



/* ---- FUN_10d0_260e @ 10d0:260e  (42 octets) ---- */

void __stdcall16far FUN_10d0_260e(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  FUN_1150_0651((int)param_2,(int)((ulong)param_2 >> 0x10),iVar1 + 0xe2,uVar2);
  FUN_10d0_22a4(iVar1,uVar2,iVar1,uVar2);
  return;
}



/* ---- FUN_10d0_2638 @ 10d0:2638  (42 octets) ---- */

void __stdcall16far FUN_10d0_2638(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  FUN_1150_0651((int)param_2,(int)((ulong)param_2 >> 0x10),iVar1 + 0xe6,uVar2);
  FUN_10d0_22a4(iVar1,uVar2,iVar1,uVar2);
  return;
}



/* ---- FUN_10d0_26bf @ 10d0:26bf  (203 octets) ---- */

undefined4 __stdcall16far
FUN_10d0_26bf(undefined4 param_1,char param_2,undefined2 param_3,undefined2 param_4)

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
  FUN_1120_5a20(iVar1,uVar3,0,param_3,param_4);
  uVar5 = FUN_10e0_7fb4(0x151c,(char *)s_iTime_1160_10dc + 4,CONCAT11(extraout_AH,1));
  *(undefined2 *)(iVar1 + 0x122) = (int)uVar5;
  *(undefined2 *)(iVar1 + 0x124) = (int)((ulong)uVar5 >> 0x10);
  uVar4 = (undefined2)((ulong)*(undefined4 *)(iVar1 + 0x122) >> 0x10);
  iVar2 = (int)*(undefined4 *)(iVar1 + 0x122);
  *(int *)(iVar2 + 0x1c) = iVar1;
  *(undefined2 *)(iVar2 + 0x1e) = uVar3;
  uVar4 = (undefined2)((ulong)*(undefined4 *)(iVar1 + 0x122) >> 0x10);
  iVar2 = (int)*(undefined4 *)(iVar1 + 0x122);
  *(undefined2 *)(iVar2 + 0x22) = 0x282f;
  *(undefined2 *)(iVar2 + 0x24) = 0x10d0;
  *(int *)(iVar2 + 0x26) = iVar1;
  *(undefined2 *)(iVar2 + 0x28) = uVar3;
  uVar4 = (undefined2)((ulong)*(undefined4 *)(iVar1 + 0x122) >> 0x10);
  iVar2 = (int)*(undefined4 *)(iVar1 + 0x122);
  *(undefined2 *)(iVar2 + 0x32) = 0x28a3;
  *(undefined2 *)(iVar2 + 0x34) = 0x10d0;
  *(int *)(iVar2 + 0x36) = iVar1;
  *(undefined2 *)(iVar2 + 0x38) = uVar3;
  uVar4 = (undefined2)((ulong)*(undefined4 *)(iVar1 + 0x122) >> 0x10);
  iVar2 = (int)*(undefined4 *)(iVar1 + 0x122);
  *(undefined2 *)(iVar2 + 0x2a) = 0x2c2f;
  *(undefined2 *)(iVar2 + 0x2c) = 0x10d0;
  *(int *)(iVar2 + 0x2e) = iVar1;
  *(undefined2 *)(iVar2 + 0x30) = uVar3;
  if (param_2 != '\0') {
    DAT_1160_1858 = uStack_a;
  }
  return param_1;
}



/* ---- FUN_10d0_278a @ 10d0:278a  (58 octets) ---- */

void __stdcall16far FUN_10d0_278a(undefined4 param_1,char param_2)

{
  int iVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  FUN_1158_1f7f((int)*(undefined4 *)(iVar1 + 0x122),
                (int)((ulong)*(undefined4 *)(iVar1 + 0x122) >> 0x10));
  *(undefined2 *)(iVar1 + 0x122) = 0;
  *(undefined2 *)(iVar1 + 0x124) = 0;
  FUN_1120_5b36(iVar1,uVar2,0);
  if (param_2 != '\0') {
    FUN_1158_200f();
  }
  return;
}



/* ---- FUN_10d0_27c4 @ 10d0:27c4  (79 octets) ---- */

void __stdcall16far
FUN_10d0_27c4(undefined4 param_1,char param_2,undefined2 param_3,undefined2 param_4)

{
  int iVar1;
  undefined2 uVar2;
  long lVar3;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  FUN_1138_1632(iVar1,uVar2,param_2,param_3,param_4);
  if (((param_2 == '\x01') && (*(int *)(iVar1 + 0x122) != 0 || *(int *)(iVar1 + 0x124) != 0)) &&
     (lVar3 = FUN_10d0_2a52(iVar1,uVar2), lVar3 == CONCAT22(param_4,param_3))) {
    FUN_10d0_2a76(iVar1,uVar2,0,0);
  }
  return;
}



/* ---- FUN_10d0_2813 @ 10d0:2813  (27 octets) ---- */

void __stdcall16far FUN_10d0_2813(undefined4 param_1)

{
  undefined2 uVar1;
  
  uVar1 = (undefined2)((ulong)param_1 >> 0x10);
  FUN_1120_5df4((int)param_1,uVar1);
  FUN_10d0_2c40((int)param_1,uVar1);
  return;
}



/* ---- FUN_10d0_282f @ 10d0:282f  (116 octets) ---- */

void __stdcall16far FUN_10d0_282f(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined2 unaff_CS;
  undefined2 unaff_SS;
  undefined *puVar6;
  undefined local_102 [256];
  
  uVar4 = (undefined2)((ulong)param_1 >> 0x10);
  iVar2 = (int)param_1;
  uVar5 = (undefined2)((ulong)*(undefined4 *)(iVar2 + 0x122) >> 0x10);
  iVar3 = (int)*(undefined4 *)(iVar2 + 0x122);
  if (*(int *)(iVar3 + 0x14) == 0 && *(int *)(iVar3 + 0x16) == 0) {
    if ((*(byte *)(iVar2 + 0x18) & 0x10) == 0) {
      FUN_10d0_28ce(iVar2,uVar4,0x282e,unaff_CS);
    }
    else {
      puVar6 = local_102;
      FUN_1148_512a(iVar2,uVar4);
      FUN_10d0_28ce(iVar2,uVar4,puVar6,unaff_SS);
    }
  }
  else {
    puVar6 = local_102;
    uVar1 = *(undefined4 *)((int)*(undefined4 *)(iVar2 + 0x122) + 0x14);
    FUN_10d8_68cf((int)uVar1,(int)((ulong)uVar1 >> 0x10));
    FUN_10d0_28ce(iVar2,uVar4,puVar6,unaff_SS);
  }
  return;
}



/* ---- FUN_10d0_28ce @ 10d0:28ce  (136 octets) ---- */

void __stdcall16far FUN_10d0_28ce(undefined4 param_1,char *param_2)

{
  undefined2 *puVar1;
  undefined4 *puVar2;
  char *pcVar3;
  int iVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  undefined2 unaff_SS;
  undefined in_ZF;
  undefined *puVar7;
  char *pcVar8;
  undefined2 uVar9;
  undefined local_104 [256];
  int local_4;
  
  uVar5 = (undefined2)((ulong)param_2 >> 0x10);
  pcVar3 = (char *)param_2;
  puVar7 = local_104;
  uVar6 = (undefined2)((ulong)param_1 >> 0x10);
  iVar4 = (int)param_1;
  pcVar8 = pcVar3;
  uVar9 = uVar5;
  FUN_10d0_2956(iVar4,uVar6);
  FUN_1158_18be(puVar7,unaff_SS,pcVar8,uVar9);
  if (!(bool)in_ZF) {
    if (*(char *)(iVar4 + 0xe1) != '\0') {
      if (*param_2 == '\0') {
        local_4 = -1;
      }
      else {
        puVar2 = (undefined4 *)*(undefined4 *)(iVar4 + 0xd8);
        puVar1 = (undefined2 *)((int)*puVar2 + 0x40);
        local_4 = (*(code *)*puVar1)(0x1158,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),pcVar3
                                     ,uVar5);
      }
      FUN_1120_5c2e(iVar4,uVar6,local_4);
      if (-1 < local_4) {
        return;
      }
    }
    if (*(byte *)(iVar4 + 0xe1) < 2) {
      FUN_1138_1d8c(iVar4,uVar6,pcVar3,uVar5);
    }
  }
  return;
}



/* ---- FUN_10d0_2956 @ 10d0:2956  (126 octets) ---- */

void __stdcall16far FUN_10d0_2956(undefined4 param_1,undefined *param_2)

{
  undefined2 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  undefined2 unaff_SS;
  undefined *puVar8;
  undefined local_104 [256];
  undefined2 local_4;
  
  uVar6 = (undefined2)((ulong)param_1 >> 0x10);
  iVar4 = (int)param_1;
  uVar7 = (undefined2)((ulong)param_2 >> 0x10);
  if (*(byte *)(iVar4 + 0xe1) < 2) {
    puVar8 = local_104;
    FUN_1138_1d53(iVar4,uVar6);
    FUN_1158_17e7(0xff,(undefined *)param_2,uVar7,puVar8,unaff_SS);
  }
  else {
    local_4 = FUN_1120_5c07(iVar4,uVar6);
    iVar3 = FUN_1120_5c07(iVar4,uVar6);
    if (iVar3 < 0) {
      *param_2 = 0;
    }
    else {
      puVar2 = (undefined4 *)*(undefined4 *)(iVar4 + 0xd8);
      uVar6 = (undefined2)((ulong)puVar2 >> 0x10);
      puVar5 = (undefined4 *)puVar2;
      puVar1 = (undefined2 *)((int)*puVar2 + 0xc);
      (*(code *)*puVar1)(0x1120,puVar5,uVar6,local_4,local_104);
      FUN_1158_17e7(0xff,(undefined *)param_2,uVar7,puVar5,uVar6);
    }
  }
  return;
}



/* ---- FUN_10d0_29d4 @ 10d0:29d4  (47 octets) ---- */

void __stdcall16far FUN_10d0_29d4(undefined4 param_1)

{
  int iVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  FUN_10e0_814f((int)*(undefined4 *)(iVar1 + 0x122),
                (int)((ulong)*(undefined4 *)(iVar1 + 0x122) >> 0x10));
  FUN_1120_6672(iVar1,uVar2);
  FUN_10e0_81b3((int)*(undefined4 *)(iVar1 + 0x122),
                (int)((ulong)*(undefined4 *)(iVar1 + 0x122) >> 0x10));
  return;
}



/* ---- FUN_10d0_2a03 @ 10d0:2a03  (47 octets) ---- */

void __stdcall16far FUN_10d0_2a03(undefined4 param_1)

{
  int iVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  FUN_10e0_814f((int)*(undefined4 *)(iVar1 + 0x122),
                (int)((ulong)*(undefined4 *)(iVar1 + 0x122) >> 0x10));
  FUN_1138_2773(iVar1,uVar2);
  FUN_10e0_81b3((int)*(undefined4 *)(iVar1 + 0x122),
                (int)((ulong)*(undefined4 *)(iVar1 + 0x122) >> 0x10));
  return;
}



/* ---- FUN_10d0_2a32 @ 10d0:2a32  (32 octets) ---- */

void __stdcall16far FUN_10d0_2a32(undefined4 param_1)

{
  undefined4 uVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  uVar1 = *(undefined4 *)((int)param_1 + 0x122);
  FUN_10e0_814f((int)uVar1,(int)((ulong)uVar1 >> 0x10));
  FUN_1120_672e((int)param_1,uVar2);
  return;
}



/* ---- FUN_10d0_2a52 @ 10d0:2a52  (36 octets) ---- */

undefined4 __stdcall16far FUN_10d0_2a52(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined2 uVar3;
  
  uVar1 = *(undefined4 *)((int)param_1 + 0x122);
  uVar3 = (undefined2)((ulong)uVar1 >> 0x10);
  iVar2 = (int)uVar1;
  return CONCAT22(*(undefined2 *)(iVar2 + 6),*(undefined2 *)(iVar2 + 4));
}



/* ---- FUN_10d0_2a76 @ 10d0:2a76  (28 octets) ---- */

void __stdcall16far FUN_10d0_2a76(undefined4 param_1,undefined2 param_2,undefined2 param_3)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)((int)param_1 + 0x122);
  FUN_10d8_7731((int)uVar1,(int)((ulong)uVar1 >> 0x10),param_2,param_3);
  return;
}



/* ---- FUN_10d0_2a92 @ 10d0:2a92  (42 octets) ---- */

void __stdcall16far FUN_10d0_2a92(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined2 unaff_SS;
  undefined *puVar2;
  undefined local_102 [256];
  
  puVar2 = local_102;
  uVar1 = *(undefined4 *)((int)param_1 + 0x122);
  FUN_10e0_8063((int)uVar1,(int)((ulong)uVar1 >> 0x10));
  FUN_1158_17e7(0xff,(int)param_2,(int)((ulong)param_2 >> 0x10),puVar2,unaff_SS);
  return;
}



/* ---- FUN_10d0_2abc @ 10d0:2abc  (27 octets) ---- */

void __stdcall16far FUN_10d0_2abc(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)((int)param_1 + 0x122);
  FUN_10e0_8080((int)uVar1,(int)((ulong)uVar1 >> 0x10),(int)param_2,(int)((ulong)param_2 >> 0x10));
  return;
}



/* ---- FUN_10d0_2ad7 @ 10d0:2ad7  (26 octets) ---- */

undefined __stdcall16far FUN_10d0_2ad7(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)((int)param_1 + 0x122);
  return *(undefined *)((int)uVar1 + 0x10);
}



/* ---- FUN_10d0_2af1 @ 10d0:2af1  (26 octets) ---- */

void __stdcall16far FUN_10d0_2af1(undefined4 param_1,undefined param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)((int)param_1 + 0x122);
  FUN_10d8_776e((int)uVar1,(int)((ulong)uVar1 >> 0x10),param_2);
  return;
}



/* ---- FUN_10d0_2b0b @ 10d0:2b0b  (36 octets) ---- */

undefined4 __stdcall16far FUN_10d0_2b0b(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined2 uVar3;
  
  uVar1 = *(undefined4 *)((int)param_1 + 0x122);
  uVar3 = (undefined2)((ulong)uVar1 >> 0x10);
  iVar2 = (int)uVar1;
  return CONCAT22(*(undefined2 *)(iVar2 + 0x16),*(undefined2 *)(iVar2 + 0x14));
}



/* ---- FUN_10d0_2b2f @ 10d0:2b2f  (81 octets) ---- */

void __stdcall16far FUN_10d0_2b2f(undefined4 param_1,undefined param_2,byte *param_3)

{
  undefined4 uVar1;
  char cVar2;
  undefined2 uVar3;
  
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  FUN_1138_4f6a((int)param_1,uVar3,param_2,(byte *)param_3,(int)((ulong)param_3 >> 0x10));
  if ((*param_3 == 8) || (0x1f < *param_3)) {
    uVar1 = *(undefined4 *)((int)param_1 + 0x122);
    cVar2 = FUN_10e0_814f((int)uVar1,(int)((ulong)uVar1 >> 0x10));
    if ((cVar2 == '\0') && ((*param_3 == 0x26 || (*param_3 == 0x28)))) {
      param_3[0] = 0;
      param_3[1] = 0;
    }
  }
  return;
}



/* ---- FUN_10d0_2b80 @ 10d0:2b80  (175 octets) ---- */

void __stdcall16far FUN_10d0_2b80(undefined4 param_1,byte *param_2)

{
  byte bVar1;
  undefined2 *puVar2;
  undefined4 *puVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined2 uVar8;
  undefined2 uVar9;
  
  uVar8 = (undefined2)((ulong)param_1 >> 0x10);
  iVar6 = (int)param_1;
  FUN_1138_521f(iVar6,uVar8,(byte *)param_2,(int)((ulong)param_2 >> 0x10));
  if ((0x1f < *param_2) &&
     (uVar9 = (undefined2)((ulong)*(undefined4 *)(iVar6 + 0x122) >> 0x10),
     iVar7 = (int)*(undefined4 *)(iVar6 + 0x122),
     uVar5 = *(uint *)(iVar7 + 0x14) | *(uint *)(iVar7 + 0x16), uVar5 != 0)) {
    puVar3 = (undefined4 *)*(undefined4 *)((int)*(undefined4 *)(iVar6 + 0x122) + 0x14);
    puVar2 = (undefined2 *)((int)*puVar3 + 0x70);
    cVar4 = (*(code *)*puVar2)(0x1138,(undefined4 *)puVar3,(int)((ulong)puVar3 >> 0x10),
                               CONCAT11((char)(uVar5 >> 8),*param_2));
    if (cVar4 == '\0') {
      MESSAGEBEEP(0x1138,0);
      *param_2 = 0;
    }
  }
  bVar1 = *param_2;
  if ((((bVar1 == 8) || (bVar1 == 0x16)) || (bVar1 == 0x18)) || (0x1f < bVar1)) {
    FUN_10e0_814f((int)*(undefined4 *)(iVar6 + 0x122),
                  (int)((ulong)*(undefined4 *)(iVar6 + 0x122) >> 0x10));
  }
  else if (bVar1 == 0x1b) {
    FUN_10e0_81c2((int)*(undefined4 *)(iVar6 + 0x122),
                  (int)((ulong)*(undefined4 *)(iVar6 + 0x122) >> 0x10));
    FUN_1120_5be7(iVar6,uVar8);
    *param_2 = 0;
  }
  return;
}



/* ---- FUN_10d0_2c2f @ 10d0:2c2f  (17 octets) ---- */

void __stdcall16far FUN_10d0_2c2f(undefined4 param_1)

{
  FUN_10d0_2c40((int)param_1,(int)((ulong)param_1 >> 0x10));
  return;
}



/* ---- FUN_10d0_2c40 @ 10d0:2c40  (67 octets) ---- */

void __stdcall16far FUN_10d0_2c40(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  undefined2 uVar3;
  
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  iVar2 = (int)param_1;
  if ((*(byte *)(iVar2 + 0xe1) < 2) && (cVar1 = FUN_1138_64fa(iVar2,uVar3), cVar1 != '\0')) {
    SENDMESSAGE(0x1138,0,0,*(char *)((int)*(undefined4 *)(iVar2 + 0x122) + 0x20) == '\0',0x41f);
  }
  return;
}



/* ---- FUN_10d0_2c83 @ 10d0:2c83  (172 octets) ---- */

void __stdcall16far FUN_10d0_2c83(undefined4 param_1,int *param_2)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  
  uVar4 = (undefined2)((ulong)param_1 >> 0x10);
  iVar2 = (int)param_1;
  piVar3 = (int *)param_2;
  uVar5 = (undefined2)((ulong)param_2 >> 0x10);
  if ((*(byte *)(iVar2 + 0x18) & 0x10) == 0) {
    if (*param_2 == 0x111) {
      if ((piVar3[3] == 1) &&
         (cVar1 = FUN_10e0_814f((int)*(undefined4 *)(iVar2 + 0x122),
                                (int)((ulong)*(undefined4 *)(iVar2 + 0x122) >> 0x10)), cVar1 == '\0'
         )) {
        if (*(char *)(iVar2 + 0xe1) == '\x01') {
          return;
        }
        FUN_1138_62b9(iVar2,uVar4);
        POSTMESSAGE(0x1138,0,0,0,0x40f);
        return;
      }
    }
    else if (*param_2 == 0x40f) {
      if (piVar3[1] == 0) {
        if (*(char *)((int)*(undefined4 *)(iVar2 + 0x122) + 0x20) == '\0') {
          FUN_10d0_282f(iVar2,uVar4,iVar2,uVar4);
        }
      }
      else {
        FUN_10e0_814f((int)*(undefined4 *)(iVar2 + 0x122),
                      (int)((ulong)*(undefined4 *)(iVar2 + 0x122) >> 0x10));
      }
    }
  }
  FUN_1120_6415(iVar2,uVar4,piVar3,uVar5);
  return;
}



/* ---- FUN_10d0_2d2f @ 10d0:2d2f  (91 octets) ---- */

void __stdcall16far
FUN_10d0_2d2f(undefined4 param_1,undefined2 param_2,undefined2 param_3,int param_4,int *param_5)

{
  char cVar1;
  int iVar2;
  undefined2 uVar3;
  
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  iVar2 = (int)param_1;
  if (((((*(byte *)(iVar2 + 0x18) & 0x10) != 0) || (*param_5 != 0x201)) ||
      (*(char *)(iVar2 + 0xe1) != '\x01')) ||
     ((param_4 == *(int *)(iVar2 + 0x116) ||
      (cVar1 = FUN_10e0_814f((int)*(undefined4 *)(iVar2 + 0x122),
                             (int)((ulong)*(undefined4 *)(iVar2 + 0x122) >> 0x10)), cVar1 != '\0')))
     ) {
    FUN_1120_6272(iVar2,uVar3,param_2,param_3,param_4,(int *)param_5,(int)((ulong)param_5 >> 0x10));
  }
  return;
}



/* ---- FUN_10d0_2df1 @ 10d0:2df1  (46 octets) ---- */

void __stdcall16far FUN_10d0_2df1(undefined4 param_1)

{
  undefined2 *puVar1;
  int iVar2;
  undefined2 uVar3;
  
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  iVar2 = (int)param_1;
  puVar1 = (undefined2 *)((int)*(undefined4 *)*(undefined4 *)(iVar2 + 0xd8) + 8);
  (*(code *)*puVar1)();
  FUN_10d0_282f(iVar2,uVar3,iVar2,uVar3);
  return;
}



/* ---- FUN_10d0_2e1f @ 10d0:2e1f  (225 octets) ---- */

undefined4 __stdcall16far
FUN_10d0_2e1f(undefined4 param_1,char param_2,undefined2 param_3,undefined2 param_4)

{
  uint uVar1;
  int iVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  undefined2 uStack_a;
  
  if (param_2 != '\0') {
    FUN_1158_1fe2();
  }
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  iVar2 = (int)param_1;
  FUN_1118_27d5(iVar2,uVar3,0,param_3,param_4);
  uVar1 = *(uint *)(iVar2 + 0x26) & 0xffde;
  *(uint *)(iVar2 + 0x26) = uVar1 | 0x50;
  uVar4 = FUN_10d0_3f0d(0x16f3,0x10d0,CONCAT11((char)(uVar1 >> 8),1),iVar2,uVar3);
  *(undefined2 *)(iVar2 + 0xed) = (int)uVar4;
  *(undefined2 *)(iVar2 + 0xef) = (int)((ulong)uVar4 >> 0x10);
  *(undefined2 *)(iVar2 + 0xf1) = 0x3ff;
  uVar4 = FUN_1148_1d08(0x3c9,0x1148,1);
  *(undefined2 *)(iVar2 + 0xf3) = (int)uVar4;
  *(undefined2 *)(iVar2 + 0xf5) = (int)((ulong)uVar4 >> 0x10);
  FUN_10d0_2f3a(iVar2,uVar3);
  FUN_1118_2c3e(iVar2,uVar3,0);
  FUN_1118_2c19(iVar2,uVar3,0);
  FUN_1138_17bf(iVar2,uVar3,0xf1);
  FUN_1138_17e1(iVar2,uVar3,0x19);
  *(undefined2 *)(iVar2 + 0xf7) = 0;
  *(undefined *)(iVar2 + 0x105) = 0;
  *(undefined *)(iVar2 + 0x106) = 1;
  if (param_2 != '\0') {
    DAT_1160_1858 = uStack_a;
  }
  return param_1;
}



/* ---- FUN_10d0_2f00 @ 10d0:2f00  (58 octets) ---- */

void __stdcall16far FUN_10d0_2f00(undefined4 param_1,char param_2)

{
  int iVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  FUN_1158_1f7f((int)*(undefined4 *)(iVar1 + 0xed),
                (int)((ulong)*(undefined4 *)(iVar1 + 0xed) >> 0x10));
  *(undefined2 *)(iVar1 + 0xed) = 0;
  *(undefined2 *)(iVar1 + 0xef) = 0;
  FUN_1138_6cdc(iVar1,uVar2,0);
  if (param_2 != '\0') {
    FUN_1158_200f();
  }
  return;
}



/* ---- FUN_10d0_2f3a @ 10d0:2f3a  (452 octets) ---- */

void __stdcall16far FUN_10d0_2f3a(undefined4 param_1)

{
  undefined2 *puVar1;
  uint uVar2;
  undefined2 uVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined2 uVar7;
  undefined2 unaff_SS;
  undefined4 uVar8;
  undefined2 local_3c;
  undefined2 local_3a;
  undefined local_38;
  undefined local_34 [42];
  int local_a;
  undefined4 local_8;
  byte local_3;
  
  uVar8 = FUN_1148_066e(0x12,0x14);
  uVar7 = (undefined2)((ulong)param_1 >> 0x10);
  iVar4 = (int)param_1;
  *(undefined2 *)(iVar4 + 0xf9) = (int)uVar8;
  *(undefined2 *)(iVar4 + 0xfb) = (int)((ulong)uVar8 >> 0x10);
  local_a = 0;
  local_3 = 0;
  while( true ) {
    local_8 = (undefined4 *)
              FUN_1110_1f27(0x1642,0x10d0,CONCAT11((char)((uint)local_a >> 8),1),iVar4,uVar7);
    uVar2 = CONCAT11((char)((ulong)local_8 >> 8),local_3);
    *(byte *)((int)(undefined4 *)local_8 + 0x9d) = local_3;
    if ((local_3 < 0x10) &&
       (uVar2 = 1 << (local_3 & 0xf) | 1U >> 0x10 - (local_3 & 0xf),
       (*(uint *)(iVar4 + 0xf1) & uVar2) != 0)) {
      uVar2 = CONCAT11((char)(uVar2 >> 8),1);
    }
    else {
      uVar2 = uVar2 & 0xff00;
    }
    FUN_1138_1c77(local_8,uVar2);
    FUN_1138_1cb8((undefined4 *)local_8,(int)((ulong)local_8 >> 0x10),1);
    puVar1 = (undefined2 *)((int)*local_8 + 0x4c);
    (*(code *)*puVar1)(0x1138,(undefined4 *)local_8,(int)((ulong)local_8 >> 0x10),
                       *(undefined2 *)(iVar4 + 0xfb),*(undefined2 *)(iVar4 + 0xf9),0,local_a);
    local_3c = *(undefined2 *)((char)local_3 * 4 + 0xa26);
    local_3a = *(undefined2 *)((char)local_3 * 4 + 0xa28);
    local_38 = 6;
    uVar8 = FUN_1150_0fa3(0,&local_3c,unaff_SS,0xaa0,0x1160,local_34,unaff_SS);
    uVar3 = LOADBITMAP(0x1150,uVar8);
    uVar8 = FUN_1110_2359((undefined4 *)local_8,(int)((ulong)local_8 >> 0x10));
    FUN_1128_6104(uVar8,uVar3);
    FUN_1110_23bf((undefined4 *)local_8,(int)((ulong)local_8 >> 0x10),2);
    uVar3 = (undefined2)((ulong)local_8 >> 0x10);
    puVar5 = (undefined4 *)local_8;
    *(undefined2 *)((int)puVar5 + 0x7a) = 0x3561;
    *(undefined2 *)(puVar5 + 0x1f) = 0x10d0;
    *(int *)((int)puVar5 + 0x7e) = iVar4;
    *(undefined2 *)(puVar5 + 0x20) = uVar7;
    *(undefined2 *)((int)puVar5 + 0x4a) = 0x357b;
    *(undefined2 *)(puVar5 + 0x13) = 0x10d0;
    *(int *)((int)puVar5 + 0x4e) = iVar4;
    *(undefined2 *)(puVar5 + 0x14) = uVar7;
    puVar1 = (undefined2 *)((int)*local_8 + 0x3c);
    (*(code *)*puVar1)(0x1110,puVar5,uVar3,iVar4,uVar7);
    iVar6 = iVar4 + (char)local_3 * 4;
    *(undefined2 *)(iVar6 + 0x107) = (undefined4 *)local_8;
    *(undefined2 *)(iVar6 + 0x109) = local_8._2_2_;
    local_a = local_a + *(int *)(iVar4 + 0xf9);
    if (local_3 == 9) break;
    local_3 = local_3 + 1;
  }
  FUN_10d0_30fe(iVar4,uVar7);
  *(byte *)((int)*(undefined4 *)(iVar4 + 0x10b) + 0x9e) =
       *(byte *)((int)*(undefined4 *)(iVar4 + 0x10b) + 0x9e) | 1;
  *(byte *)((int)*(undefined4 *)(iVar4 + 0x10f) + 0x9e) =
       *(byte *)((int)*(undefined4 *)(iVar4 + 0x10f) + 0x9e) | 1;
  return;
}



/* ---- FUN_10d0_30fe @ 10d0:30fe  (215 octets) ---- */

void __stdcall16far FUN_10d0_30fe(undefined4 param_1)

{
  undefined2 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined2 uVar5;
  undefined2 unaff_SS;
  undefined *puVar6;
  undefined2 uVar7;
  undefined local_208 [256];
  char local_108 [2];
  undefined local_106 [254];
  int local_8;
  char local_5;
  int local_4;
  
  local_5 = '\0';
  while( true ) {
    puVar6 = local_106;
    uVar7 = unaff_SS;
    FUN_1150_092b(*(undefined2 *)(local_5 * 2 + 0xa8c));
    uVar5 = (undefined2)((ulong)param_1 >> 0x10);
    iVar4 = (int)param_1;
    uVar2 = *(undefined4 *)(iVar4 + local_5 * 4 + 0x107);
    FUN_1138_2002((int)uVar2,(int)((ulong)uVar2 >> 0x10),puVar6,uVar7);
    if (local_5 == '\t') break;
    local_5 = local_5 + '\x01';
  }
  local_5 = '\0';
  puVar3 = (undefined4 *)*(undefined4 *)(iVar4 + 0xf3);
  puVar1 = (undefined2 *)((int)*puVar3 + 0x10);
  local_8 = (*(code *)*puVar1)(0x1138,(undefined4 *)puVar3,(int)((ulong)puVar3 >> 0x10));
  local_8 = local_8 + -1;
  if (-1 < local_8) {
    local_4 = 0;
    while( true ) {
      puVar3 = (undefined4 *)*(undefined4 *)(iVar4 + 0xf3);
      puVar1 = (undefined2 *)((int)*puVar3 + 0xc);
      (*(code *)*puVar1)(0x1138,(undefined4 *)puVar3,(int)((ulong)puVar3 >> 0x10),local_4,local_108)
      ;
      if (local_108[0] != '\0') {
        puVar6 = local_208;
        puVar3 = (undefined4 *)*(undefined4 *)(iVar4 + 0xf3);
        puVar1 = (undefined2 *)((int)*puVar3 + 0xc);
        uVar7 = unaff_SS;
        (*(code *)*puVar1)(0x1138,(undefined4 *)puVar3,(int)((ulong)puVar3 >> 0x10),local_4,puVar6);
        uVar2 = *(undefined4 *)(iVar4 + local_5 * 4 + 0x107);
        FUN_1138_2002((int)uVar2,(int)((ulong)uVar2 >> 0x10),puVar6,uVar7);
      }
      if ((local_5 == '\t') || (local_5 = local_5 + '\x01', local_4 == local_8)) break;
      local_4 = local_4 + 1;
    }
  }
  return;
}



/* ---- FUN_10d0_31d5 @ 10d0:31d5  (40 octets) ---- */

void __stdcall16far FUN_10d0_31d5(undefined4 param_1)

{
  undefined2 *puVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  puVar1 = (undefined2 *)((int)*(undefined4 *)*(undefined4 *)((int)param_1 + 0xf3) + 8);
  (*(code *)*puVar1)();
  FUN_10d0_30fe((int)param_1,uVar2);
  return;
}



/* ---- FUN_10d0_31fd @ 10d0:31fd  (79 octets) ---- */

void __stdcall16far
FUN_10d0_31fd(undefined4 param_1,char param_2,undefined2 param_3,undefined2 param_4)

{
  int iVar1;
  undefined2 uVar2;
  long lVar3;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  FUN_1138_1632(iVar1,uVar2,param_2,param_3,param_4);
  if (((param_2 == '\x01') && (*(int *)(iVar1 + 0xed) != 0 || *(int *)(iVar1 + 0xef) != 0)) &&
     (lVar3 = FUN_10d0_3c48(iVar1,uVar2), lVar3 == CONCAT22(param_4,param_3))) {
    FUN_10d0_3c1b(iVar1,uVar2,0,0);
  }
  return;
}



/* ---- FUN_10d0_324c @ 10d0:324c  (179 octets) ---- */

void __stdcall16far FUN_10d0_324c(undefined4 *param_1,uint param_2)

{
  undefined2 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined2 unaff_SS;
  int local_8;
  int local_6;
  byte local_3;
  
  uVar4 = (undefined2)((ulong)param_1 >> 0x10);
  puVar3 = (undefined4 *)param_1;
  local_6 = *(int *)((int)puVar3 + 0x22);
  local_8 = *(int *)(puVar3 + 9);
  *(uint *)((int)puVar3 + 0xf1) = param_2;
  local_3 = 0;
  while( true ) {
    if ((local_3 < 0x10) &&
       (param_2 = 1 << (local_3 & 0xf) | 1U >> 0x10 - (local_3 & 0xf),
       (*(uint *)((int)puVar3 + 0xf1) & param_2) != 0)) {
      param_2 = CONCAT11((char)(param_2 >> 8),1);
    }
    else {
      param_2 = param_2 & 0xff00;
    }
    uVar2 = *(undefined4 *)((int)puVar3 + (char)local_3 * 4 + 0x107);
    param_2 = FUN_1138_1c77((int)uVar2,(int)((ulong)uVar2 >> 0x10),param_2);
    if (local_3 == 9) break;
    local_3 = local_3 + 1;
  }
  uVar5 = 0x10d0;
  FUN_10d0_32ff(puVar3,uVar4,&local_8,unaff_SS,&local_6,unaff_SS);
  if ((local_6 != *(int *)((int)puVar3 + 0x22)) || (local_8 != *(int *)(puVar3 + 9))) {
    uVar5 = 0x1138;
    FUN_1138_5c62(puVar3,uVar4,local_8,local_6,*(undefined2 *)(puVar3 + 8),
                  *(undefined2 *)((int)puVar3 + 0x1e));
  }
  puVar1 = (undefined2 *)((int)*param_1 + 0x44);
  (*(code *)*puVar1)(uVar5,puVar3,uVar4);
  return;
}



/* ---- FUN_10d0_32ff @ 10d0:32ff  (429 octets) ---- */

void __stdcall16far FUN_10d0_32ff(undefined4 param_1,int *param_2,int *param_3)

{
  undefined2 *puVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined2 uVar5;
  int local_c;
  char local_7;
  int local_4;
  
  uVar5 = (undefined2)((ulong)param_1 >> 0x10);
  iVar4 = (int)param_1;
  if (((*(byte *)(iVar4 + 0x18) & 1) == 0) &&
     (*(int *)(iVar4 + 0x107) != 0 || *(int *)(iVar4 + 0x109) != 0)) {
    local_4 = 0;
    local_7 = '\0';
    while( true ) {
      uVar2 = *(undefined4 *)(iVar4 + local_7 * 4 + 0x107);
      if (*(char *)((int)uVar2 + 0x29) != '\0') {
        local_4 = local_4 + 1;
      }
      if (local_7 == '\t') break;
      local_7 = local_7 + '\x01';
    }
    if (local_4 == 0) {
      local_4 = 1;
    }
    iVar3 = (*(int *)(iVar4 + 0xf9) + -1) * local_4 + 1;
    if (*param_3 < iVar3) {
      *param_3 = iVar3;
    }
    if (*param_2 < *(int *)(iVar4 + 0xfb)) {
      *param_2 = *(int *)(iVar4 + 0xfb);
    }
    *(int *)(iVar4 + 0xf7) = (*param_3 + -1) / local_4 + 1;
    iVar3 = (*(int *)(iVar4 + 0xf7) + -1) * local_4 + 1;
    if (*(char *)(iVar4 + 0x2d) == '\0') {
      *param_3 = iVar3;
    }
    iVar3 = *param_3 - iVar3;
    local_c = local_4 / 2;
    local_7 = '\0';
    while( true ) {
      uVar2 = *(undefined4 *)(iVar4 + local_7 * 4 + 0x107);
      if (*(char *)((int)uVar2 + 0x29) == '\0') {
        puVar1 = (undefined2 *)
                 ((int)*(undefined4 *)*(undefined4 *)(iVar4 + local_7 * 4 + 0x107) + 0x4c);
        (*(code *)*puVar1)();
      }
      else {
        if ((iVar3 != 0) && (local_c = local_c - iVar3, local_c < 0)) {
          local_c = local_c + local_4;
        }
        puVar1 = (undefined2 *)
                 ((int)*(undefined4 *)*(undefined4 *)(iVar4 + local_7 * 4 + 0x107) + 0x4c);
        (*(code *)*puVar1)();
      }
      if (local_7 == '\t') break;
      local_7 = local_7 + '\x01';
    }
  }
  return;
}



/* ---- FUN_10d0_34ac @ 10d0:34ac  (62 octets) ---- */

void __stdcall16far
FUN_10d0_34ac(undefined4 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4,
             undefined2 param_5)

{
  undefined2 uVar1;
  undefined2 unaff_SS;
  undefined2 local_6;
  undefined2 local_4;
  
  local_4 = param_3;
  local_6 = param_2;
  uVar1 = (undefined2)((ulong)param_1 >> 0x10);
  FUN_10d0_32ff((int)param_1,uVar1,&local_6,unaff_SS,&local_4,unaff_SS);
  FUN_1138_5c62((int)param_1,uVar1,local_6,local_4,param_4,param_5);
  return;
}



/* ---- FUN_10d0_34ea @ 10d0:34ea  (119 octets) ---- */

void __stdcall16far FUN_10d0_34ea(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 unaff_SS;
  int local_6;
  int local_4;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  FUN_1118_28f3(iVar1,uVar2,(int)param_2,param_2._2_2_);
  local_4 = *(int *)(iVar1 + 0x22);
  local_6 = *(int *)(iVar1 + 0x24);
  FUN_10d0_32ff(iVar1,uVar2,&local_6,unaff_SS,&local_4,unaff_SS);
  if ((local_4 != *(int *)(iVar1 + 0x22)) || (local_6 != *(int *)(iVar1 + 0x24))) {
    FUN_1138_5c62(iVar1,uVar2,local_6,local_4,*(undefined2 *)(iVar1 + 0x20),
                  *(undefined2 *)(iVar1 + 0x1e));
  }
  *(undefined2 *)((int)param_2 + 8) = 0;
  *(undefined2 *)((int)param_2 + 10) = 0;
  return;
}



/* ---- FUN_10d0_3561 @ 10d0:3561  (26 octets) ---- */

void __stdcall16far FUN_10d0_3561(undefined4 param_1,undefined4 param_2)

{
  FUN_10d0_365c((int)param_1,(int)((ulong)param_1 >> 0x10),*(undefined *)((int)param_2 + 0x9d));
  return;
}



/* ---- FUN_10d0_357b @ 10d0:357b  (205 octets) ---- */

void __stdcall16far FUN_10d0_357b(undefined4 *param_1)

{
  char cVar1;
  undefined2 *puVar2;
  undefined4 *puVar3;
  char cVar4;
  undefined2 uVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined2 uVar8;
  undefined4 param_2;
  int iVar9;
  
  uVar8 = (undefined2)((ulong)param_1 >> 0x10);
  puVar7 = (undefined4 *)param_1;
  cVar1 = *(char *)((int)puVar7 + 0x105);
  *(undefined *)((int)puVar7 + 0x105) = *(undefined *)((int)param_2 + 0x9d);
  if (*(char *)(puVar7 + 0x29) != '\0') {
    uVar5 = FUN_1138_62b9(puVar7,uVar8);
    iVar9 = 0x1138;
    iVar6 = GETFOCUS(0x1138,uVar5);
    if ((iVar6 != iVar9) && (cVar4 = FUN_1138_61c4(puVar7,uVar8), cVar4 != '\0')) {
      puVar2 = (undefined2 *)((int)*param_1 + 0x78);
      (*(code *)*puVar2)(0x1138,puVar7,uVar8);
      uVar8 = FUN_1138_62b9(puVar7,uVar8);
      GETFOCUS(0x1138,uVar8);
      return;
    }
  }
  if (*(char *)(puVar7 + 0x29) != '\0') {
    uVar5 = FUN_1138_62b9(puVar7,uVar8);
    iVar9 = 0x1138;
    iVar6 = GETFOCUS(0x1138,uVar5);
    if ((iVar6 == iVar9) && (cVar1 != *(char *)((int)puVar7 + 0x105))) {
      puVar3 = (undefined4 *)*(undefined4 *)((int)puVar7 + cVar1 * 4 + 0x107);
      puVar2 = (undefined2 *)((int)*puVar3 + 0x44);
      (*(code *)*puVar2)(0x14d0,(undefined4 *)puVar3,(int)((ulong)puVar3 >> 0x10));
      puVar3 = (undefined4 *)
               *(undefined4 *)((int)puVar7 + *(char *)((int)puVar7 + 0x105) * 4 + 0x107);
      puVar2 = (undefined2 *)((int)*puVar3 + 0x44);
      (*(code *)*puVar2)(0x14d0,(undefined4 *)puVar3,(int)((ulong)puVar3 >> 0x10));
    }
  }
  return;
}



/* ---- FUN_10d0_365c @ 10d0:365c  (300 octets) ---- */

void __stdcall16far FUN_10d0_365c(undefined4 param_1,undefined param_2)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  undefined2 unaff_SS;
  long lVar7;
  undefined4 uVar8;
  undefined *puVar9;
  undefined local_106 [256];
  undefined4 local_6;
  
  uVar4 = (undefined2)((ulong)param_1 >> 0x10);
  iVar3 = (int)param_1;
  uVar6 = 0x10d0;
  lVar7 = FUN_10d0_3c48(iVar3,uVar4);
  if (lVar7 != 0) {
    uVar6 = 0x10d0;
    uVar8 = FUN_10d0_3c48(iVar3,uVar4);
    if (*(char *)((int)uVar8 + 0x24) != '\0') {
      uVar6 = 0x10d0;
      uVar8 = FUN_10d0_3c48(iVar3,uVar4);
      local_6 = *(undefined4 *)((int)uVar8 + 0x1a);
      uVar5 = (undefined2)((ulong)local_6 >> 0x10);
      uVar1 = (undefined2)local_6;
      switch(param_2) {
      case 0:
        uVar6 = 0x10d8;
        FUN_10d8_4ccd(uVar1,uVar5);
        break;
      case 1:
        uVar6 = 0x10d8;
        FUN_10d8_4eff(uVar1,uVar5);
        break;
      case 2:
        uVar6 = 0x10d8;
        FUN_10d8_4eec(uVar1,uVar5);
        break;
      case 3:
        uVar6 = 0x10d8;
        FUN_10d8_4d4a(uVar1,uVar5);
        break;
      case 4:
        uVar6 = 0x10d8;
        FUN_10d8_4f99(uVar1,uVar5);
        break;
      case 5:
        if (*(char *)(iVar3 + 0x106) != '\0') {
          puVar9 = local_106;
          FUN_1150_092b(0xf24d);
          uVar6 = 0x1108;
          iVar2 = FUN_1108_388a(0,0,0xc,3,puVar9,unaff_SS);
          if (iVar2 == 2) break;
        }
        uVar6 = 0x10d8;
        FUN_10d8_5622((int)local_6,(int)((ulong)local_6 >> 0x10));
        break;
      case 6:
        uVar6 = 0x10d8;
        FUN_10d8_533c(uVar1,uVar5);
        break;
      case 7:
        uVar6 = 0x10d8;
        FUN_10d8_54a0(uVar1,uVar5);
        break;
      case 8:
        uVar6 = 0x10d8;
        FUN_10d8_558b(uVar1,uVar5);
        break;
      case 9:
        uVar6 = 0x10d8;
        FUN_10d8_4f12(uVar1,uVar5);
      }
    }
  }
  if (((*(byte *)(iVar3 + 0x18) & 0x10) == 0) && (*(int *)(iVar3 + 0xff) != 0)) {
    (*(code *)*(undefined2 *)(iVar3 + 0xfd))
              (uVar6,*(undefined2 *)(iVar3 + 0x101),*(undefined2 *)(iVar3 + 0x103),
               CONCAT11((char)((uint)*(int *)(iVar3 + 0xff) >> 8),param_2),iVar3,uVar4);
  }
  return;
}



/* ---- FUN_10d0_3788 @ 10d0:3788  (35 octets) ---- */

void __stdcall16far FUN_10d0_3788(undefined4 param_1)

{
  undefined2 *puVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  puVar1 = (undefined2 *)
           ((int)*(undefined4 *)
                  *(undefined4 *)((int)param_1 + *(char *)((int)param_1 + 0x105) * 4 + 0x107) + 0x44
           );
  (*(code *)*puVar1)();
  return;
}



/* ---- FUN_10d0_37ab @ 10d0:37ab  (35 octets) ---- */

void __stdcall16far FUN_10d0_37ab(undefined4 param_1)

{
  undefined2 *puVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  puVar1 = (undefined2 *)
           ((int)*(undefined4 *)
                  *(undefined4 *)((int)param_1 + *(char *)((int)param_1 + 0x105) * 4 + 0x107) + 0x44
           );
  (*(code *)*puVar1)();
  return;
}



/* ---- FUN_10d0_37ce @ 10d0:37ce  (360 octets) ---- */

void __stdcall16far FUN_10d0_37ce(undefined4 param_1,undefined2 param_2_00,int *param_2)

{
  char cVar1;
  int iVar2;
  undefined2 *puVar3;
  undefined4 uVar4;
  int iVar5;
  undefined2 uVar6;
  char local_3;
  
  uVar6 = (undefined2)((ulong)param_1 >> 0x10);
  iVar5 = (int)param_1;
  cVar1 = *(char *)(iVar5 + 0x105);
  iVar2 = *param_2;
  if (iVar2 == 0x27) {
    local_3 = *(char *)(iVar5 + 0x105);
    do {
      if (local_3 < '\t') {
        local_3 = local_3 + '\x01';
      }
    } while ((local_3 != '\t') &&
            (uVar4 = *(undefined4 *)(iVar5 + local_3 * 4 + 0x107),
            *(char *)((int)uVar4 + 0x29) == '\0'));
    if (local_3 != *(char *)(iVar5 + 0x105)) {
      *(char *)(iVar5 + 0x105) = local_3;
      puVar3 = (undefined2 *)((int)*(undefined4 *)*(undefined4 *)(iVar5 + cVar1 * 4 + 0x107) + 0x44)
      ;
      (*(code *)*puVar3)();
      puVar3 = (undefined2 *)
               ((int)*(undefined4 *)*(undefined4 *)(iVar5 + *(char *)(iVar5 + 0x105) * 4 + 0x107) +
               0x44);
      (*(code *)*puVar3)();
    }
  }
  else if (iVar2 == 0x25) {
    local_3 = *(char *)(iVar5 + 0x105);
    do {
      if ('\0' < local_3) {
        local_3 = local_3 + -1;
      }
    } while ((local_3 != '\0') &&
            (uVar4 = *(undefined4 *)(iVar5 + local_3 * 4 + 0x107),
            *(char *)((int)uVar4 + 0x29) == '\0'));
    if (local_3 != *(char *)(iVar5 + 0x105)) {
      *(char *)(iVar5 + 0x105) = local_3;
      puVar3 = (undefined2 *)((int)*(undefined4 *)*(undefined4 *)(iVar5 + cVar1 * 4 + 0x107) + 0x44)
      ;
      (*(code *)*puVar3)();
      puVar3 = (undefined2 *)
               ((int)*(undefined4 *)*(undefined4 *)(iVar5 + *(char *)(iVar5 + 0x105) * 4 + 0x107) +
               0x44);
      (*(code *)*puVar3)();
    }
  }
  else if ((iVar2 == 0x20) &&
          (uVar4 = *(undefined4 *)(iVar5 + *(char *)(iVar5 + 0x105) * 4 + 0x107),
          *(char *)((int)uVar4 + 0x2a) != '\0')) {
    FUN_1158_206a();
  }
  return;
}



/* ---- FUN_10d0_3936 @ 10d0:3936  (22 octets) ---- */

void __stdcall16far FUN_10d0_3936(undefined2 param_1_00,undefined2 param_2,undefined4 param_1)

{
  undefined2 uVar1;
  
  uVar1 = (undefined2)((ulong)param_1 >> 0x10);
  *(undefined2 *)((int)param_1 + 8) = 1;
  *(undefined2 *)((int)param_1 + 10) = 0;
  return;
}



/* ---- FUN_10d0_394c @ 10d0:394c  (320 octets) ---- */

void __stdcall16far FUN_10d0_394c(undefined4 param_1)

{
  uint in_AX;
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined2 uVar4;
  undefined4 uVar5;
  
  uVar4 = (undefined2)((ulong)param_1 >> 0x10);
  iVar3 = (int)param_1;
  if ((*(char *)(iVar3 + 0x2a) == '\0') ||
     (*(char *)((int)*(undefined4 *)(iVar3 + 0xed) + 0x11) == '\0')) {
LAB_10d0_3980:
    uVar2 = in_AX & 0xff00;
  }
  else {
    uVar5 = FUN_10d8_76fa((int)*(undefined4 *)(iVar3 + 0xed),
                          (int)((ulong)*(undefined4 *)(iVar3 + 0xed) >> 0x10));
    in_AX = (uint)uVar5;
    if (*(char *)(in_AX + 0x38) != '\0') goto LAB_10d0_3980;
    uVar2 = CONCAT11((char)((ulong)uVar5 >> 8),1);
  }
  uVar1 = uVar2;
  if ((*(char *)(iVar3 + 0x2a) == '\0') ||
     (*(char *)((int)*(undefined4 *)(iVar3 + 0xed) + 0x11) == '\0')) {
LAB_10d0_39b9:
    uVar1 = uVar1 & 0xff00;
  }
  else {
    uVar5 = FUN_10d8_76fa((int)*(undefined4 *)(iVar3 + 0xed),
                          (int)((ulong)*(undefined4 *)(iVar3 + 0xed) >> 0x10));
    uVar1 = (uint)uVar5;
    if (*(char *)(uVar1 + 0x39) != '\0') goto LAB_10d0_39b9;
    uVar1 = CONCAT11((char)((ulong)uVar5 >> 8),1);
  }
  FUN_1138_1cb8((int)*(undefined4 *)(iVar3 + 0x107),
                (int)((ulong)*(undefined4 *)(iVar3 + 0x107) >> 0x10),
                CONCAT11((char)(uVar1 >> 8),(char)uVar2));
  FUN_1138_1cb8((int)*(undefined4 *)(iVar3 + 0x10b),
                (int)((ulong)*(undefined4 *)(iVar3 + 0x10b) >> 0x10),uVar2 & 0xff);
  FUN_1138_1cb8((int)*(undefined4 *)(iVar3 + 0x10f),
                (int)((ulong)*(undefined4 *)(iVar3 + 0x10f) >> 0x10),uVar1 & 0xff);
  uVar2 = FUN_1138_1cb8((int)*(undefined4 *)(iVar3 + 0x113),
                        (int)((ulong)*(undefined4 *)(iVar3 + 0x113) >> 0x10),uVar1 & 0xff);
  if ((*(char *)(iVar3 + 0x2a) != '\0') &&
     (*(char *)((int)*(undefined4 *)(iVar3 + 0xed) + 0x11) != '\0')) {
    uVar5 = FUN_10d8_76fa((int)*(undefined4 *)(iVar3 + 0xed),
                          (int)((ulong)*(undefined4 *)(iVar3 + 0xed) >> 0x10));
    uVar2 = (uint)uVar5;
    if (*(char *)(uVar2 + 0x3d) != '\0') {
      uVar5 = FUN_10d8_76fa((int)*(undefined4 *)(iVar3 + 0xed),
                            (int)((ulong)*(undefined4 *)(iVar3 + 0xed) >> 0x10));
      uVar2 = (uint)uVar5;
      if (*(char *)(uVar2 + 0x38) != '\0') {
        uVar5 = FUN_10d8_76fa((int)*(undefined4 *)(iVar3 + 0xed),
                              (int)((ulong)*(undefined4 *)(iVar3 + 0xed) >> 0x10));
        uVar2 = (uint)uVar5;
        if (*(char *)(uVar2 + 0x39) != '\0') goto LAB_10d0_3a72;
      }
      uVar2 = CONCAT11((char)(uVar2 >> 8),1);
      goto LAB_10d0_3a78;
    }
  }
LAB_10d0_3a72:
  uVar2 = uVar2 & 0xff00;
LAB_10d0_3a78:
  FUN_1138_1cb8((int)*(undefined4 *)(iVar3 + 0x11b),
                (int)((ulong)*(undefined4 *)(iVar3 + 0x11b) >> 0x10),uVar2);
  return;
}



/* ---- FUN_10d0_3a8c @ 10d0:3a8c  (266 octets) ---- */

void __stdcall16far FUN_10d0_3a8c(undefined4 param_1)

{
  char cVar1;
  byte extraout_AH;
  int iVar2;
  byte extraout_AH_00;
  byte extraout_AH_01;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined2 uVar6;
  undefined4 uVar7;
  
  uVar6 = (undefined2)((ulong)param_1 >> 0x10);
  iVar5 = (int)param_1;
  if ((*(char *)(iVar5 + 0x2a) != '\0') &&
     (*(char *)((int)*(undefined4 *)(iVar5 + 0xed) + 0x11) != '\0')) {
    uVar7 = FUN_10d8_76fa((int)*(undefined4 *)(iVar5 + 0xed),
                          (int)((ulong)*(undefined4 *)(iVar5 + 0xed) >> 0x10));
    if (*(char *)((int)uVar7 + 0x3d) != '\0') {
      cVar1 = '\x01';
      goto LAB_10d0_3ac6;
    }
  }
  cVar1 = '\0';
LAB_10d0_3ac6:
  FUN_1138_1cb8((int)*(undefined4 *)(iVar5 + 0x117),
                (int)((ulong)*(undefined4 *)(iVar5 + 0x117) >> 0x10),cVar1);
  if ((cVar1 == '\0') || (*(char *)((int)*(undefined4 *)(iVar5 + 0xed) + 0x12) != '\0')) {
    iVar2 = (uint)extraout_AH << 8;
  }
  else {
    iVar2 = CONCAT11(extraout_AH,1);
  }
  FUN_1138_1cb8((int)*(undefined4 *)(iVar5 + 0x11f),
                (int)((ulong)*(undefined4 *)(iVar5 + 0x11f) >> 0x10),iVar2);
  if ((cVar1 == '\0') || (*(char *)((int)*(undefined4 *)(iVar5 + 0xed) + 0x12) == '\0')) {
    iVar2 = (uint)extraout_AH_00 << 8;
  }
  else {
    iVar2 = CONCAT11(extraout_AH_00,1);
  }
  FUN_1138_1cb8((int)*(undefined4 *)(iVar5 + 0x123),
                (int)((ulong)*(undefined4 *)(iVar5 + 0x123) >> 0x10),iVar2);
  if ((cVar1 == '\0') || (*(char *)((int)*(undefined4 *)(iVar5 + 0xed) + 0x12) == '\0')) {
    iVar2 = (uint)extraout_AH_01 << 8;
  }
  else {
    iVar2 = CONCAT11(extraout_AH_01,1);
  }
  FUN_1138_1cb8((int)*(undefined4 *)(iVar5 + 0x127),
                (int)((ulong)*(undefined4 *)(iVar5 + 0x127) >> 0x10),iVar2);
  uVar7 = FUN_10d8_76fa((int)*(undefined4 *)(iVar5 + 0xed),
                        (int)((ulong)*(undefined4 *)(iVar5 + 0xed) >> 0x10));
  uVar3 = FUN_1158_2255(0x3cb,(char *)s_iTime_1160_10dc + 4,uVar7);
  uVar4 = uVar3 & 0xff00;
  if ((char)uVar3 == '\0') {
    uVar4 = uVar4 + 1;
  }
  FUN_1138_1cb8((int)*(undefined4 *)(iVar5 + 299),(int)((ulong)*(undefined4 *)(iVar5 + 299) >> 0x10)
                ,uVar4);
  return;
}



/* ---- FUN_10d0_3b96 @ 10d0:3b96  (93 octets) ---- */

void __stdcall16far FUN_10d0_3b96(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined2 uVar3;
  char local_3;
  
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  iVar2 = (int)param_1;
  if ((*(char *)(iVar2 + 0x2a) == '\0') ||
     (*(char *)((int)*(undefined4 *)(iVar2 + 0xed) + 0x11) == '\0')) {
    for (local_3 = '\0'; uVar1 = *(undefined4 *)(iVar2 + local_3 * 4 + 0x107),
        FUN_1138_1cb8((int)uVar1,(int)((ulong)uVar1 >> 0x10),0), local_3 != '\t';
        local_3 = local_3 + '\x01') {
    }
  }
  else {
    FUN_10d0_394c(iVar2,uVar3);
    FUN_10d0_3a8c(iVar2,uVar3);
  }
  return;
}



/* ---- FUN_10d0_3bf3 @ 10d0:3bf3  (40 octets) ---- */

void __stdcall16far FUN_10d0_3bf3(undefined4 param_1,undefined2 param_2,undefined2 param_3)

{
  int iVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  FUN_1138_56b3(iVar1,uVar2,param_2,param_3);
  if ((*(byte *)(iVar1 + 0x18) & 1) == 0) {
    FUN_10d0_3b96(iVar1,uVar2);
  }
  return;
}



/* ---- FUN_10d0_3c1b @ 10d0:3c1b  (45 octets) ---- */

void __stdcall16far FUN_10d0_3c1b(undefined4 param_1,undefined2 param_2,undefined2 param_3)

{
  int iVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  FUN_10d8_7731((int)*(undefined4 *)(iVar1 + 0xed),
                (int)((ulong)*(undefined4 *)(iVar1 + 0xed) >> 0x10),param_2,param_3);
  if ((*(byte *)(iVar1 + 0x18) & 1) == 0) {
    FUN_10d0_3b96(iVar1,uVar2);
  }
  return;
}



/* ---- FUN_10d0_3c48 @ 10d0:3c48  (36 octets) ---- */

undefined4 __stdcall16far FUN_10d0_3c48(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined2 uVar3;
  
  uVar1 = *(undefined4 *)((int)param_1 + 0xed);
  uVar3 = (undefined2)((ulong)uVar1 >> 0x10);
  iVar2 = (int)uVar1;
  return CONCAT22(*(undefined2 *)(iVar2 + 6),*(undefined2 *)(iVar2 + 4));
}



/* ---- FUN_10d0_3c6c @ 10d0:3c6c  (120 octets) ---- */

void __stdcall16far FUN_10d0_3c6c(undefined4 param_1)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 unaff_SS;
  int local_6;
  int local_4;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  FUN_1148_4ff4(iVar1,uVar2);
  local_4 = *(int *)(iVar1 + 0x22);
  local_6 = *(int *)(iVar1 + 0x24);
  FUN_10d0_32ff(iVar1,uVar2,&local_6,unaff_SS,&local_4,unaff_SS);
  if ((local_4 != *(int *)(iVar1 + 0x22)) || (local_6 != *(int *)(iVar1 + 0x24))) {
    FUN_1138_5c62(iVar1,uVar2,local_6,local_4,*(undefined2 *)(iVar1 + 0x20),
                  *(undefined2 *)(iVar1 + 0x1e));
  }
  FUN_10d0_30fe(iVar1,uVar2);
  FUN_10d0_3b96(iVar1,uVar2);
  return;
}



/* ---- FUN_10d0_3ce4 @ 10d0:3ce4  (58 octets) ---- */

void __stdcall16far FUN_10d0_3ce4(undefined4 param_1,char param_2)

{
  int iVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  if (*(int *)(iVar1 + 0x9f) != 0 || *(int *)(iVar1 + 0xa1) != 0) {
    FUN_1158_1f7f((int)*(undefined4 *)(iVar1 + 0x9f),
                  (int)((ulong)*(undefined4 *)(iVar1 + 0x9f) >> 0x10));
  }
  FUN_1110_1fe0(iVar1,uVar2,0);
  if (param_2 != '\0') {
    FUN_1158_200f();
  }
  return;
}



/* ---- FUN_10d0_3d1e @ 10d0:3d1e  (152 octets) ---- */

void __stdcall16far
FUN_10d0_3d1e(undefined4 param_1,undefined2 param_2,undefined2 param_3,undefined param_4,
             undefined param_5)

{
  int iVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  FUN_1110_2172(iVar1,uVar2,param_2,param_3,param_4,param_5);
  if ((*(byte *)(iVar1 + 0x9e) & 1) != 0) {
    if (*(int *)(iVar1 + 0x9f) == 0 && *(int *)(iVar1 + 0xa1) == 0) {
      uVar3 = FUN_1118_25be(0xb8b,0x1118,1,iVar1,uVar2);
      *(undefined2 *)(iVar1 + 0x9f) = (int)uVar3;
      *(undefined2 *)(iVar1 + 0xa1) = (int)((ulong)uVar3 >> 0x10);
    }
    FUN_1118_278b((int)*(undefined4 *)(iVar1 + 0x9f),
                  (int)((ulong)*(undefined4 *)(iVar1 + 0x9f) >> 0x10),0x3dfc,0x10d0,iVar1,uVar2);
    FUN_1118_276a((int)*(undefined4 *)(iVar1 + 0x9f),
                  (int)((ulong)*(undefined4 *)(iVar1 + 0x9f) >> 0x10),400);
    FUN_1118_2749((int)*(undefined4 *)(iVar1 + 0x9f),
                  (int)((ulong)*(undefined4 *)(iVar1 + 0x9f) >> 0x10),1);
  }
  return;
}



/* ---- FUN_10d0_3db6 @ 10d0:3db6  (60 octets) ---- */

void __stdcall16far
FUN_10d0_3db6(undefined4 param_1,undefined2 param_2,undefined2 param_3,undefined param_4,
             undefined param_5)

{
  int iVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  FUN_1110_2257(iVar1,uVar2,param_2,param_3,param_4,param_5);
  if (*(int *)(iVar1 + 0x9f) != 0 || *(int *)(iVar1 + 0xa1) != 0) {
    FUN_1118_2749((int)*(undefined4 *)(iVar1 + 0x9f),
                  (int)((ulong)*(undefined4 *)(iVar1 + 0x9f) >> 0x10),0);
  }
  return;
}



/* ---- FUN_10d0_3e69 @ 10d0:3e69  (164 octets) ---- */

void __stdcall16far FUN_10d0_3e69(undefined4 param_1)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  undefined2 uVar4;
  undefined2 unaff_SS;
  undefined *puVar5;
  int iVar6;
  undefined local_12 [8];
  undefined local_a [8];
  
  uVar4 = (undefined2)((ulong)param_1 >> 0x10);
  iVar3 = (int)param_1;
  FUN_1110_202c(iVar3,uVar4);
  uVar1 = FUN_1138_62b9((int)*(undefined4 *)(iVar3 + 0x1a),
                        (int)((ulong)*(undefined4 *)(iVar3 + 0x1a) >> 0x10));
  iVar6 = 0x1138;
  iVar2 = GETFOCUS(0x1138,uVar1);
  if ((iVar2 == iVar6) &&
     (*(char *)(iVar3 + 0x9d) == *(char *)((int)*(undefined4 *)(iVar3 + 0x1a) + 0x105))) {
    puVar5 = local_12;
    uVar1 = unaff_SS;
    FUN_1148_06ae(*(undefined2 *)(iVar3 + 0x24),*(undefined2 *)(iVar3 + 0x22),0,0);
    FUN_1158_161b(8,local_a,unaff_SS,puVar5,uVar1);
    INFLATERECT(0x1158,0xfffd,0xfffd,local_a);
    if (*(char *)(iVar3 + 0x9c) == '\x02') {
      OFFSETRECT(0x14d0,1,1,local_a);
    }
    FUN_1128_21d2((int)*(undefined4 *)(iVar3 + 0x8a),
                  (int)((ulong)*(undefined4 *)(iVar3 + 0x8a) >> 0x10));
    DRAWFOCUSRECT(0x1128,local_a,unaff_SS);
  }
  return;
}



/* ---- FUN_10d0_3f0d @ 10d0:3f0d  (70 octets) ---- */

undefined4 __stdcall16far
FUN_10d0_3f0d(undefined4 param_1,char param_2,undefined2 param_3,undefined2 param_4)

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



/* ---- FUN_10d0_3f53 @ 10d0:3f53  (41 octets) ---- */

void __stdcall16far FUN_10d0_3f53(undefined4 param_1,char param_2)

{
  int iVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  *(undefined2 *)(iVar1 + 0x14) = 0;
  *(undefined2 *)(iVar1 + 0x16) = 0;
  FUN_10d8_761a(iVar1,uVar2,0);
  if (param_2 != '\0') {
    FUN_1158_200f();
  }
  return;
}



/* ---- FUN_10d0_3f7c @ 10d0:3f7c  (31 octets) ---- */

void __stdcall16far FUN_10d0_3f7c(undefined4 param_1)

{
  int iVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  if (*(int *)(iVar1 + 0x14) != 0 || *(int *)(iVar1 + 0x16) != 0) {
    FUN_10d0_3a8c((int)*(undefined4 *)(iVar1 + 0x14),
                  (int)((ulong)*(undefined4 *)(iVar1 + 0x14) >> 0x10));
  }
  return;
}



/* ---- FUN_10d0_3f9b @ 10d0:3f9b  (31 octets) ---- */

void __stdcall16far FUN_10d0_3f9b(undefined4 param_1)

{
  int iVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  if (*(int *)(iVar1 + 0x14) != 0 || *(int *)(iVar1 + 0x16) != 0) {
    FUN_10d0_394c((int)*(undefined4 *)(iVar1 + 0x14),
                  (int)((ulong)*(undefined4 *)(iVar1 + 0x14) >> 0x10));
  }
  return;
}



/* ---- FUN_10d0_3fba @ 10d0:3fba  (31 octets) ---- */

void __stdcall16far FUN_10d0_3fba(undefined4 param_1)

{
  int iVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  if (*(int *)(iVar1 + 0x14) != 0 || *(int *)(iVar1 + 0x16) != 0) {
    FUN_10d0_3b96((int)*(undefined4 *)(iVar1 + 0x14),
                  (int)((ulong)*(undefined4 *)(iVar1 + 0x14) >> 0x10));
  }
  return;
}




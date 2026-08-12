/* Simstrat (FR).EXE - segment Code43 - 141 fonctions
   Decompile par Ghidra 11.2.1 (x86 16 bits, chargeur NE). */

/* ---- FUN_1150_042a @ 1150:042a  (13 octets) ---- */

long FUN_1150_042a(uint param_1,uint param_2)

{
  return (ulong)param_2 * (ulong)param_1;
}



/* ---- FUN_1150_0437 @ 1150:0437  (28 octets) ---- */

void FUN_1150_0437(undefined2 *param_1,undefined2 *param_2,uint param_3,undefined2 param_4,
                  undefined2 param_5)

{
  *param_2 = (int)(CONCAT22(param_5,param_4) / (ulong)param_3);
  *param_1 = (int)(CONCAT22(param_5,param_4) % (ulong)param_3);
  return;
}



/* ---- FUN_1150_0453 @ 1150:0453  (35 octets) ---- */

void FUN_1150_0453(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_1150_28e6(0x2ba,0x1150,1,(int)param_1,(int)((ulong)param_1 >> 0x10));
  FUN_1158_1399(0x1150,uVar1);
  return;
}



/* ---- FUN_1150_0476 @ 1150:0476  (43 octets) ---- */

undefined4 __stdcall16far FUN_1150_0476(undefined2 param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_1158_0182(param_1);
  FUN_1158_1ee5(0,param_1,uVar1);
  return uVar1;
}



/* ---- FUN_1150_04a1 @ 1150:04a1  (124 octets) ---- */

undefined4 __stdcall16far FUN_1150_04a1(uint param_1,uint param_2,undefined4 param_3)

{
  undefined2 uVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  uVar1 = (undefined2)((ulong)param_3 >> 0x10);
  if (param_1 != 0) {
    uVar2 = FUN_1158_0182(param_1);
    if (param_2 < param_1) {
      FUN_1158_1ee5(0,param_1 - param_2,(int)uVar2 + param_2,(int)((ulong)uVar2 >> 0x10));
      param_1 = param_2;
    }
    if (param_1 != 0) {
      FUN_1158_1ec1(param_1,uVar2,(int)param_3,uVar1);
    }
  }
  if (param_2 != 0) {
    FUN_1158_019c(param_2,(int)param_3,uVar1);
  }
  return uVar2;
}



/* ---- FUN_1150_051d @ 1150:051d  (87 octets) ---- */

void __cdecl16far FUN_1150_051d(void)

{
  undefined2 *puVar1;
  code *pcVar2;
  undefined2 *puVar3;
  undefined2 uVar4;
  undefined2 local_8;
  undefined4 local_6;
  
  uVar4 = DAT_1160_171c;
  puVar3 = DAT_1160_171a;
  local_6 = (undefined2 *)CONCAT22(DAT_1160_171c,DAT_1160_171a);
  puVar1 = DAT_1160_171a + 1;
  DAT_1160_186c = DAT_1160_171a[2];
  DAT_1160_186e = DAT_1160_171a[3];
  pcVar2 = (code *)DAT_1160_171a[4];
  local_8 = DAT_1160_171a[5];
  DAT_1160_171a = (undefined2 *)*local_6;
  DAT_1160_171c = *puVar1;
  FUN_1158_019c(0xc,puVar3,uVar4);
  (*pcVar2)(0x1158);
  return;
}



/* ---- FUN_1150_0574 @ 1150:0574  (99 octets) ---- */

void __stdcall16far FUN_1150_0574(undefined2 param_1,undefined2 param_2)

{
  undefined2 *puVar1;
  undefined2 uVar2;
  undefined2 *puVar3;
  
  puVar3 = (undefined2 *)FUN_1158_0182(0xc);
  uVar2 = (undefined2)((ulong)puVar3 >> 0x10);
  puVar1 = (undefined2 *)puVar3;
  *puVar3 = DAT_1160_171a;
  puVar1[1] = DAT_1160_171c;
  puVar1[2] = DAT_1160_186c;
  puVar1[3] = DAT_1160_186e;
  puVar1[4] = param_1;
  puVar1[5] = param_2;
  DAT_1160_171a = puVar1;
  DAT_1160_171c = uVar2;
  DAT_1160_186c = 0x51d;
  DAT_1160_186e = 0x1150;
  return;
}



/* ---- FUN_1150_05d7 @ 1150:05d7  (77 octets) ---- */

undefined4 __stdcall16far FUN_1150_05d7(byte *param_1)

{
  undefined4 uVar1;
  
  if (*param_1 == 0) {
    uVar1 = CONCAT22(DAT_1160_1718,DAT_1160_1716);
  }
  else {
    uVar1 = FUN_1158_0182(*param_1 + 1);
    FUN_1158_17e7(0xff,uVar1,(byte *)param_1,(int)((ulong)param_1 >> 0x10));
  }
  return uVar1;
}



/* ---- FUN_1150_0624 @ 1150:0624  (45 octets) ---- */

void __stdcall16far FUN_1150_0624(byte *param_1)

{
  if (((byte *)param_1 != (byte *)0x0 || param_1._2_2_ != 0) && (*param_1 != 0)) {
    FUN_1158_019c(*param_1 + 1,(byte *)param_1,param_1._2_2_);
  }
  return;
}



/* ---- FUN_1150_0651 @ 1150:0651  (55 octets) ---- */

void __stdcall16far FUN_1150_0651(undefined4 param_1,undefined2 *param_2)

{
  undefined2 uVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  
  uVar3 = (undefined2)((ulong)param_2 >> 0x10);
  uVar1 = *param_2;
  uVar2 = ((undefined2 *)param_2)[1];
  uVar4 = FUN_1150_05d7((int)param_1,(int)((ulong)param_1 >> 0x10));
  *param_2 = (int)uVar4;
  ((undefined2 *)param_2)[1] = (int)((ulong)uVar4 >> 0x10);
  FUN_1150_0624(uVar1,uVar2);
  return;
}



/* ---- FUN_1150_0688 @ 1150:0688  (45 octets) ---- */

void __stdcall16far FUN_1150_0688(byte *param_1,uint param_2,byte *param_3)

{
  uint uVar1;
  uint uVar2;
  byte *pbVar3;
  byte *pbVar4;
  
  uVar2 = (uint)*param_3;
  uVar1 = param_2 - uVar2;
  if (uVar2 <= param_2 && uVar1 != 0) {
    pbVar3 = (byte *)param_1;
    if (*param_1 <= uVar1) {
      uVar1 = (uint)*param_1;
    }
    *param_3 = *param_3 + (char)uVar1;
    pbVar4 = (byte *)param_3 + uVar2;
    while( true ) {
      pbVar4 = pbVar4 + 1;
      pbVar3 = pbVar3 + 1;
      if (uVar1 == 0) break;
      uVar1 = uVar1 - 1;
      *pbVar4 = *pbVar3;
    }
  }
  return;
}



/* ---- FUN_1150_06b5 @ 1150:06b5  (38 octets) ---- */

void __stdcall16far FUN_1150_06b5(byte *param_1,byte *param_2)

{
  byte bVar1;
  uint uVar2;
  byte *pbVar3;
  byte *pbVar4;
  
  pbVar3 = (byte *)param_1;
  pbVar4 = (byte *)param_2;
  bVar1 = *param_1;
  *param_2 = bVar1;
  for (uVar2 = (uint)bVar1; uVar2 != 0; uVar2 = uVar2 - 1) {
    pbVar4 = pbVar4 + 1;
    pbVar3 = pbVar3 + 1;
    bVar1 = *pbVar3;
    if ((0x60 < bVar1) && (bVar1 < 0x7b)) {
      bVar1 = bVar1 - 0x20;
    }
    *pbVar4 = bVar1;
  }
  return;
}



/* ---- FUN_1150_06db @ 1150:06db  (38 octets) ---- */

void __stdcall16far FUN_1150_06db(byte *param_1,byte *param_2)

{
  byte bVar1;
  uint uVar2;
  byte *pbVar3;
  byte *pbVar4;
  
  pbVar3 = (byte *)param_1;
  pbVar4 = (byte *)param_2;
  bVar1 = *param_1;
  *param_2 = bVar1;
  for (uVar2 = (uint)bVar1; uVar2 != 0; uVar2 = uVar2 - 1) {
    pbVar4 = pbVar4 + 1;
    pbVar3 = pbVar3 + 1;
    bVar1 = *pbVar3;
    if ((0x40 < bVar1) && (bVar1 < 0x5b)) {
      bVar1 = bVar1 + 0x20;
    }
    *pbVar4 = bVar1;
  }
  return;
}



/* ---- FUN_1150_0701 @ 1150:0701  (47 octets) ---- */

int __stdcall16far FUN_1150_0701(byte *param_1,byte *param_2)

{
  byte *pbVar1;
  byte bVar2;
  byte *pbVar3;
  byte bVar4;
  byte bVar5;
  uint uVar6;
  byte *pbVar7;
  byte *pbVar8;
  undefined2 uVar9;
  undefined2 uVar10;
  bool bVar11;
  
  uVar10 = (undefined2)((ulong)param_2 >> 0x10);
  uVar9 = (undefined2)((ulong)param_1 >> 0x10);
  pbVar7 = (byte *)param_2 + 1;
  bVar2 = *param_2;
  bVar4 = *param_1;
  pbVar8 = (byte *)param_1 + 1;
  bVar5 = bVar2;
  if (bVar4 < bVar2) {
    bVar5 = bVar4;
  }
  uVar6 = (uint)bVar5;
  bVar11 = true;
  do {
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    pbVar3 = pbVar8;
    pbVar8 = pbVar8 + 1;
    pbVar1 = pbVar7;
    pbVar7 = pbVar7 + 1;
    bVar11 = *pbVar1 == *pbVar3;
  } while (bVar11);
  if (!bVar11) {
    bVar2 = pbVar7[-1];
    bVar4 = pbVar8[-1];
  }
  return (uint)bVar2 - (uint)bVar4;
}



/* ---- FUN_1150_0730 @ 1150:0730  (81 octets) ---- */

int __stdcall16far FUN_1150_0730(byte *param_1,byte *param_2)

{
  byte *pbVar1;
  byte bVar2;
  byte *pbVar3;
  byte bVar4;
  uint uVar5;
  byte bVar6;
  byte bVar7;
  byte *pbVar8;
  byte *pbVar9;
  undefined2 uVar10;
  undefined2 uVar11;
  bool bVar12;
  
  uVar11 = (undefined2)((ulong)param_2 >> 0x10);
  uVar10 = (undefined2)((ulong)param_1 >> 0x10);
  pbVar8 = (byte *)param_2 + 1;
  bVar2 = *param_2;
  bVar4 = *param_1;
  pbVar9 = (byte *)param_1 + 1;
  bVar6 = bVar2;
  if (bVar4 < bVar2) {
    bVar6 = bVar4;
  }
  uVar5 = (uint)bVar6;
  bVar12 = true;
LAB_1150_074d:
  do {
    if (uVar5 != 0) {
      uVar5 = uVar5 - 1;
      pbVar3 = pbVar9;
      pbVar9 = pbVar9 + 1;
      pbVar1 = pbVar8;
      pbVar8 = pbVar8 + 1;
      bVar12 = *pbVar1 == *pbVar3;
      if (bVar12) goto LAB_1150_074d;
    }
    bVar6 = bVar2;
    bVar7 = bVar4;
    if (bVar12) goto LAB_1150_077a;
    bVar6 = pbVar8[-1];
    if ((0x60 < bVar6) && (bVar6 < 0x7b)) {
      bVar6 = bVar6 - 0x20;
    }
    bVar7 = pbVar9[-1];
    if ((0x60 < bVar7) && (bVar7 < 0x7b)) {
      bVar7 = bVar7 - 0x20;
    }
    bVar12 = bVar6 == bVar7;
    if (!bVar12) {
LAB_1150_077a:
      return (uint)bVar6 - (uint)bVar7;
    }
  } while( true );
}



/* ---- FUN_1150_0781 @ 1150:0781  (54 octets) ---- */

void __stdcall16far FUN_1150_0781(undefined4 param_1,char *param_2)

{
  FUN_1158_17e7(0xff,(char *)param_2,(int)((ulong)param_2 >> 0x10),(int)param_1,
                (int)((ulong)param_1 >> 0x10));
  if (*param_2 != '\0') {
    ANSIUPPERBUFF(0x1158,*param_2,(char *)param_2 + 1);
  }
  return;
}



/* ---- FUN_1150_07b7 @ 1150:07b7  (54 octets) ---- */

void __stdcall16far FUN_1150_07b7(undefined4 param_1,char *param_2)

{
  FUN_1158_17e7(0xff,(char *)param_2,(int)((ulong)param_2 >> 0x10),(int)param_1,
                (int)((ulong)param_1 >> 0x10));
  if (*param_2 != '\0') {
    ANSILOWERBUFF(0x1158,*param_2,(char *)param_2 + 1);
  }
  return;
}



/* ---- FUN_1150_07ed @ 1150:07ed  (55 octets) ---- */

undefined2 __stdcall16far FUN_1150_07ed(undefined4 param_1,undefined4 param_2)

{
  undefined2 uVar1;
  undefined2 unaff_SS;
  undefined4 uVar2;
  undefined local_204 [256];
  undefined local_104 [258];
  
  uVar1 = FUN_1150_0d4c((int)param_2,(int)((ulong)param_2 >> 0x10),local_104,unaff_SS);
  uVar2 = FUN_1150_0d4c((int)param_1,(int)((ulong)param_1 >> 0x10),local_204,unaff_SS);
  uVar1 = LSTRCMPI(0x1150,uVar2,uVar1);
  return uVar1;
}



/* ---- FUN_1150_0824 @ 1150:0824  (130 octets) ---- */

undefined __stdcall16far FUN_1150_0824(byte *param_1)

{
  byte bVar1;
  undefined2 uVar2;
  uint local_6;
  undefined local_3;
  
  local_3 = 0;
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  if (((*param_1 != 0) && (bVar1 = ((byte *)param_1)[1], 0x40 < bVar1)) &&
     (((bVar1 < 0x5b || (bVar1 == 0x5f)) || ((0x60 < bVar1 && (bVar1 < 0x7b)))))) {
    if (*param_1 < 2) {
LAB_1150_089b:
      local_3 = 1;
    }
    else {
      for (local_6 = 2;
          (bVar1 = ((byte *)param_1)[local_6], 0x2f < bVar1 &&
          ((bVar1 < 0x3a ||
           ((0x40 < bVar1 &&
            (((bVar1 < 0x5b || (bVar1 == 0x5f)) || ((0x60 < bVar1 && (bVar1 < 0x7b))))))))));
          local_6 = local_6 + 1) {
        if (local_6 == *param_1) goto LAB_1150_089b;
      }
    }
  }
  return local_3;
}



/* ---- FUN_1150_08a9 @ 1150:08a9  (49 octets) ---- */

void __stdcall16far FUN_1150_08a9(undefined2 param_1,undefined2 param_2,undefined4 param_3)

{
  undefined2 unaff_CS;
  undefined2 unaff_SS;
  undefined2 local_a;
  undefined2 local_8;
  undefined local_6;
  
  local_a = param_1;
  local_8 = param_2;
  local_6 = 0;
  FUN_1150_106c(0,&local_a,unaff_SS,0x8a6,unaff_CS,0xff,(int)param_3,(int)((ulong)param_3 >> 0x10));
  return;
}



/* ---- FUN_1150_08da @ 1150:08da  (81 octets) ---- */

undefined4 __stdcall16far FUN_1150_08da(undefined4 param_1)

{
  undefined2 uVar1;
  undefined2 unaff_SS;
  undefined *puVar2;
  undefined local_110 [256];
  undefined2 local_10;
  undefined2 local_e;
  undefined local_c;
  int local_8;
  undefined4 local_6;
  
  uVar1 = (undefined2)((ulong)param_1 >> 0x10);
  local_6 = FUN_1158_1dfb(&local_8,unaff_SS,(int)param_1,uVar1);
  if (local_8 != 0) {
    puVar2 = local_110;
    local_c = 4;
    local_10 = (int)param_1;
    local_e = uVar1;
    FUN_1150_0950(0,&local_10,unaff_SS,0xff80);
    FUN_1150_0453(puVar2,unaff_SS);
  }
  return local_6;
}



/* ---- FUN_1150_092b @ 1150:092b  (37 octets) ---- */

void __stdcall16far FUN_1150_092b(undefined2 param_1,undefined *param_2)

{
  undefined uVar1;
  undefined2 unaff_CS;
  
  uVar1 = LOADSTRING(unaff_CS,0xfe,(undefined *)param_2 + 1,(int)((ulong)param_2 >> 0x10),param_1);
  *param_2 = uVar1;
  return;
}



/* ---- FUN_1150_0950 @ 1150:0950  (43 octets) ---- */

void __stdcall16far
FUN_1150_0950(undefined2 param_1,undefined4 param_2,undefined2 param_3,undefined4 param_4)

{
  undefined2 uVar1;
  undefined2 uVar2;
  undefined2 unaff_SS;
  undefined *puVar3;
  undefined2 uVar4;
  undefined local_102 [256];
  
  uVar2 = (undefined2)((ulong)param_4 >> 0x10);
  uVar1 = (undefined2)param_4;
  uVar4 = 0xff;
  puVar3 = local_102;
  FUN_1150_092b(param_3);
  FUN_1150_106c(param_1,(int)param_2,(int)((ulong)param_2 >> 0x10),puVar3,unaff_SS,uVar4,uVar1,uVar2
               );
  return;
}



/* ---- FUN_1150_097b @ 1150:097b  (38 octets) ---- */

void FUN_1150_097b(undefined4 param_1,undefined2 param_2,undefined2 param_3)

{
  undefined4 uVar1;
  
  uVar1 = FUN_1150_0d6a(0x4f,(int)param_1,(int)((ulong)param_1 >> 0x10),param_2,param_3);
  Ordinal_5(0x1150,param_2,param_3,uVar1);
  return;
}



/* ---- FUN_1150_09f0 @ 1150:09f0  (54 octets) ---- */

undefined4 __stdcall16far FUN_1150_09f0(undefined2 param_1,undefined2 param_2)

{
  code *pcVar1;
  undefined2 unaff_SS;
  bool bVar2;
  undefined2 local_6c;
  undefined2 local_6a;
  undefined local_52 [80];
  
  FUN_1150_097b(param_1,param_2,local_52,unaff_SS);
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  bVar2 = false;
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  if (bVar2) {
    local_6c = 0xffff;
    local_6a = 0xffff;
  }
  return CONCAT22(local_6a,local_6c);
}



/* ---- FUN_1150_0a26 @ 1150:0a26  (40 octets) ---- */

bool __stdcall16far FUN_1150_0a26(undefined4 param_1)

{
  long lVar1;
  
  lVar1 = FUN_1150_09f0((int)param_1,(int)((ulong)param_1 >> 0x10));
  return lVar1 != -1;
}



/* ---- FUN_1150_0a4e @ 1150:0a4e  (55 octets) ---- */

void FUN_1150_0a4e(undefined2 param_1,undefined2 param_2,undefined4 param_3)

{
  undefined2 unaff_SS;
  undefined *puVar1;
  undefined local_102 [256];
  
  Ordinal_6();
  puVar1 = local_102;
  FUN_1150_0e6e(param_1,param_2);
  FUN_1158_17e7(0xff,(int)param_3,(int)((ulong)param_3 >> 0x10),puVar1,unaff_SS);
  return;
}



/* ---- FUN_1150_0ac8 @ 1150:0ac8  (42 octets) ---- */

int __stdcall16far FUN_1150_0ac8(int param_1)

{
  code *pcVar1;
  int iVar2;
  undefined in_CF;
  
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  pcVar1 = (code *)swi(0x21);
  iVar2 = (*pcVar1)();
  if (!(bool)in_CF) {
    FUN_1150_0a4e(param_1 + 0x1e);
    iVar2 = 0;
  }
  return -iVar2;
}



/* ---- FUN_1150_0af2 @ 1150:0af2  (124 octets) ---- */

void __stdcall16far FUN_1150_0af2(undefined4 param_1,byte *param_2,undefined4 param_3)

{
  byte bVar1;
  byte *pbVar2;
  undefined2 uVar3;
  undefined2 unaff_SS;
  undefined *puVar4;
  undefined local_104 [256];
  uint local_4;
  
  for (local_4 = (uint)*param_2;
      (((pbVar2 = (byte *)param_2, uVar3 = (undefined2)((ulong)param_2 >> 0x10), 0 < (int)local_4 &&
        (bVar1 = pbVar2[local_4], bVar1 != 0x2e)) && (bVar1 != 0x3a)) && (bVar1 != 0x5c));
      local_4 = local_4 - 1) {
  }
  if ((local_4 == 0) || (pbVar2[local_4] != 0x2e)) {
    local_4 = 0x100;
  }
  puVar4 = local_104;
  FUN_1158_180b(local_4 - 1,1,pbVar2,uVar3);
  FUN_1158_184c((int)param_1,(int)((ulong)param_1 >> 0x10));
  FUN_1158_17e7(0xff,(int)param_3,(int)((ulong)param_3 >> 0x10),puVar4,unaff_SS);
  return;
}



/* ---- FUN_1150_0b6e @ 1150:0b6e  (83 octets) ---- */

void __stdcall16far FUN_1150_0b6e(byte *param_1,undefined4 param_2)

{
  byte bVar1;
  undefined2 uVar2;
  undefined2 unaff_SS;
  undefined *puVar3;
  undefined local_104 [256];
  uint local_4;
  
  for (local_4 = (uint)*param_1;
      ((uVar2 = (undefined2)((ulong)param_1 >> 0x10), 0 < (int)local_4 &&
       (bVar1 = ((byte *)param_1)[local_4], bVar1 != 0x3a)) && (bVar1 != 0x5c));
      local_4 = local_4 - 1) {
  }
  puVar3 = local_104;
  FUN_1158_180b(local_4,1,(byte *)param_1,uVar2);
  FUN_1158_17e7(0xff,(int)param_2,(int)((ulong)param_2 >> 0x10),puVar3,unaff_SS);
  return;
}



/* ---- FUN_1150_0bc1 @ 1150:0bc1  (86 octets) ---- */

void __stdcall16far FUN_1150_0bc1(byte *param_1,undefined4 param_2)

{
  byte bVar1;
  undefined2 uVar2;
  undefined2 unaff_SS;
  undefined *puVar3;
  undefined local_104 [256];
  uint local_4;
  
  for (local_4 = (uint)*param_1;
      ((uVar2 = (undefined2)((ulong)param_1 >> 0x10), 0 < (int)local_4 &&
       (bVar1 = ((byte *)param_1)[local_4], bVar1 != 0x3a)) && (bVar1 != 0x5c));
      local_4 = local_4 - 1) {
  }
  puVar3 = local_104;
  FUN_1158_180b(0xff,local_4 + 1,(byte *)param_1,uVar2);
  FUN_1158_17e7(0xff,(int)param_2,(int)((ulong)param_2 >> 0x10),puVar3,unaff_SS);
  return;
}



/* ---- FUN_1150_0c17 @ 1150:0c17  (117 octets) ---- */

void __stdcall16far FUN_1150_0c17(byte *param_1,undefined *param_2)

{
  byte bVar1;
  byte *pbVar2;
  undefined2 uVar3;
  undefined2 unaff_SS;
  undefined *puVar4;
  undefined local_104 [256];
  uint local_4;
  
  for (local_4 = (uint)*param_1;
      (((pbVar2 = (byte *)param_1, uVar3 = (undefined2)((ulong)param_1 >> 0x10), 0 < (int)local_4 &&
        (bVar1 = pbVar2[local_4], bVar1 != 0x2e)) && (bVar1 != 0x3a)) && (bVar1 != 0x5c));
      local_4 = local_4 - 1) {
  }
  if (((int)local_4 < 1) || (pbVar2[local_4] != 0x2e)) {
    *param_2 = 0;
  }
  else {
    puVar4 = local_104;
    FUN_1158_180b(0xff,local_4,pbVar2,uVar3);
    FUN_1158_17e7(0xff,(undefined *)param_2,(int)((ulong)param_2 >> 0x10),puVar4,unaff_SS);
  }
  return;
}



/* ---- FUN_1150_0c8c @ 1150:0c8c  (23 octets) ---- */

int __stdcall16far FUN_1150_0c8c(char *param_1)

{
  char *pcVar1;
  int iVar2;
  char *pcVar3;
  
  pcVar3 = (char *)param_1;
  iVar2 = -1;
  do {
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    pcVar1 = pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (*pcVar1 != '\0');
  return -2 - iVar2;
}



/* ---- FUN_1150_0ca3 @ 1150:0ca3  (23 octets) ---- */

char * __stdcall16far FUN_1150_0ca3(char *param_1)

{
  char *pcVar1;
  int iVar2;
  char *pcVar3;
  undefined2 uVar4;
  
  uVar4 = (undefined2)((ulong)param_1 >> 0x10);
  pcVar3 = (char *)param_1;
  iVar2 = -1;
  do {
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    pcVar1 = pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (*pcVar1 != '\0');
  return (char *)CONCAT22(uVar4,pcVar3 + -1);
}



/* ---- FUN_1150_0cba @ 1150:0cba  (37 octets) ---- */

undefined * __stdcall16far FUN_1150_0cba(int param_1,undefined *param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  byte bVar5;
  
  bVar5 = 0;
  puVar3 = (undefined *)param_2;
  puVar4 = (undefined *)param_3;
  if (puVar3 < puVar4) {
    bVar5 = 1;
    puVar3 = puVar3 + param_1 + -1;
    puVar4 = puVar4 + param_1 + -1;
  }
  for (; param_1 != 0; param_1 = param_1 + -1) {
    puVar2 = puVar4;
    puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
    puVar1 = puVar3;
    puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
    *puVar2 = *puVar1;
  }
  return param_3;
}



/* ---- FUN_1150_0cdf @ 1150:0cdf  (34 octets) ---- */

char * __stdcall16far FUN_1150_0cdf(char *param_1,char *param_2)

{
  char *pcVar1;
  char *pcVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  undefined2 uVar6;
  
  uVar6 = (undefined2)((ulong)param_1 >> 0x10);
  pcVar4 = (char *)param_1;
  uVar3 = 0xffff;
  pcVar5 = pcVar4;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    pcVar1 = pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (*pcVar1 != '\0');
  pcVar5 = (char *)param_2;
  for (uVar3 = ~uVar3; uVar3 != 0; uVar3 = uVar3 - 1) {
    pcVar2 = pcVar5;
    pcVar5 = pcVar5 + 1;
    pcVar1 = pcVar4;
    pcVar4 = pcVar4 + 1;
    *pcVar2 = *pcVar1;
  }
  return param_2;
}



/* ---- FUN_1150_0d01 @ 1150:0d01  (35 octets) ---- */

char * __stdcall16far FUN_1150_0d01(char *param_1,char *param_2)

{
  char *pcVar1;
  char *pcVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  
  uVar6 = (undefined2)((ulong)param_1 >> 0x10);
  pcVar4 = (char *)param_1;
  uVar3 = 0xffff;
  pcVar5 = pcVar4;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    pcVar1 = pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (*pcVar1 != '\0');
  uVar7 = (undefined2)((ulong)param_2 >> 0x10);
  pcVar5 = (char *)param_2;
  for (uVar3 = ~uVar3; uVar3 != 0; uVar3 = uVar3 - 1) {
    pcVar2 = pcVar5;
    pcVar5 = pcVar5 + 1;
    pcVar1 = pcVar4;
    pcVar4 = pcVar4 + 1;
    *pcVar2 = *pcVar1;
  }
  return (char *)CONCAT22(uVar7,pcVar5 + -1);
}



/* ---- FUN_1150_0d24 @ 1150:0d24  (40 octets) ---- */

char * __stdcall16far FUN_1150_0d24(int param_1,char *param_2,char *param_3)

{
  char *pcVar1;
  char *pcVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  
  uVar6 = (undefined2)((ulong)param_2 >> 0x10);
  pcVar4 = (char *)param_2;
  iVar3 = param_1;
  pcVar5 = pcVar4;
  do {
    if (iVar3 == 0) break;
    iVar3 = iVar3 + -1;
    pcVar1 = pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (*pcVar1 != '\0');
  uVar7 = (undefined2)((ulong)param_3 >> 0x10);
  pcVar5 = (char *)param_3;
  for (param_1 = param_1 - iVar3; param_1 != 0; param_1 = param_1 + -1) {
    pcVar2 = pcVar5;
    pcVar5 = pcVar5 + 1;
    pcVar1 = pcVar4;
    pcVar4 = pcVar4 + 1;
    *pcVar2 = *pcVar1;
  }
  *pcVar5 = '\0';
  return param_3;
}



/* ---- FUN_1150_0d4c @ 1150:0d4c  (30 octets) ---- */

byte * __stdcall16far FUN_1150_0d4c(byte *param_1,byte *param_2)

{
  byte *pbVar1;
  uint uVar2;
  byte *pbVar3;
  byte *pbVar4;
  undefined2 uVar5;
  
  pbVar3 = (byte *)param_1;
  uVar5 = (undefined2)((ulong)param_2 >> 0x10);
  pbVar4 = (byte *)param_2;
  for (uVar2 = (uint)*param_1; pbVar3 = pbVar3 + 1, uVar2 != 0; uVar2 = uVar2 - 1) {
    pbVar1 = pbVar4;
    pbVar4 = pbVar4 + 1;
    *pbVar1 = *pbVar3;
  }
  *pbVar4 = 0;
  return param_2;
}



/* ---- FUN_1150_0d6a @ 1150:0d6a  (37 octets) ---- */

byte * __stdcall16far FUN_1150_0d6a(uint param_1,byte *param_2,byte *param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte *pbVar4;
  undefined2 uVar5;
  
  uVar5 = (undefined2)((ulong)param_3 >> 0x10);
  pbVar4 = (byte *)param_3;
  pbVar3 = (byte *)param_2 + 1;
  if (*param_2 <= param_1) {
    param_1 = (uint)*param_2;
  }
  for (; param_1 != 0; param_1 = param_1 - 1) {
    pbVar2 = pbVar4;
    pbVar4 = pbVar4 + 1;
    pbVar1 = pbVar3;
    pbVar3 = pbVar3 + 1;
    *pbVar2 = *pbVar1;
  }
  *pbVar4 = 0;
  return param_3;
}



/* ---- FUN_1150_0d8f @ 1150:0d8f  (35 octets) ---- */

undefined4 __stdcall16far
FUN_1150_0d8f(undefined2 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4)

{
  undefined4 uVar1;
  
  uVar1 = FUN_1150_0ca3(param_3,param_4);
  FUN_1150_0cdf(param_1,param_2,uVar1);
  return CONCAT22(param_4,param_3);
}



/* ---- FUN_1150_0db2 @ 1150:0db2  (41 octets) ---- */

int __stdcall16far FUN_1150_0db2(char *param_1,char *param_2)

{
  char *pcVar1;
  char *pcVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  
  uVar6 = (undefined2)((ulong)param_1 >> 0x10);
  pcVar5 = (char *)param_1;
  uVar3 = 0xffff;
  pcVar4 = pcVar5;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    pcVar1 = pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (*pcVar1 != '\0');
  uVar3 = ~uVar3;
  uVar7 = (undefined2)((ulong)param_2 >> 0x10);
  pcVar4 = (char *)param_2;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    pcVar2 = pcVar5;
    pcVar5 = pcVar5 + 1;
    pcVar1 = pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (*pcVar1 == *pcVar2);
  return (uint)(byte)pcVar4[-1] - (uint)(byte)pcVar5[-1];
}



/* ---- FUN_1150_0ddb @ 1150:0ddb  (68 octets) ---- */

void __stdcall16far FUN_1150_0ddb(char *param_1,char *param_2)

{
  char *pcVar1;
  char *pcVar2;
  byte bVar3;
  int iVar4;
  undefined uVar5;
  uint uVar6;
  uint uVar7;
  char *pcVar8;
  char *pcVar9;
  undefined2 uVar10;
  undefined2 uVar11;
  bool bVar12;
  
  uVar10 = (undefined2)((ulong)param_1 >> 0x10);
  pcVar9 = (char *)param_1;
  uVar6 = 0xffff;
  iVar4 = 0;
  bVar12 = true;
  pcVar8 = pcVar9;
  do {
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    pcVar1 = pcVar8;
    pcVar8 = pcVar8 + 1;
    bVar12 = *pcVar1 == '\0';
  } while (!bVar12);
  uVar6 = ~uVar6;
  uVar11 = (undefined2)((ulong)param_2 >> 0x10);
  pcVar8 = (char *)param_2;
LAB_1150_0df4:
  do {
    if (uVar6 != 0) {
      uVar6 = uVar6 - 1;
      pcVar2 = pcVar9;
      pcVar9 = pcVar9 + 1;
      pcVar1 = pcVar8;
      pcVar8 = pcVar8 + 1;
      bVar12 = *pcVar1 == *pcVar2;
      if (bVar12) goto LAB_1150_0df4;
    }
    if (bVar12) {
      return;
    }
    bVar3 = pcVar8[-1];
    uVar5 = (undefined)((uint)iVar4 >> 8);
    iVar4 = CONCAT11(uVar5,bVar3);
    if ((0x60 < bVar3) && (bVar3 < 0x7b)) {
      iVar4 = CONCAT11(uVar5,bVar3 - 0x20);
    }
    bVar3 = pcVar9[-1];
    uVar7 = (uint)bVar3;
    if ((0x60 < bVar3) && (bVar3 < 0x7b)) {
      uVar7 = (uint)(byte)(bVar3 - 0x20);
    }
    iVar4 = iVar4 - uVar7;
    bVar12 = iVar4 == 0;
    if (!bVar12) {
      return;
    }
  } while( true );
}



/* ---- FUN_1150_0e1f @ 1150:0e1f  (40 octets) ---- */

char * __stdcall16far FUN_1150_0e1f(char param_1,char *param_2)

{
  char *pcVar1;
  char *pcVar2;
  uint uVar3;
  undefined2 uVar4;
  char *pcVar5;
  undefined2 uVar6;
  bool bVar7;
  
  uVar6 = (undefined2)((ulong)param_2 >> 0x10);
  pcVar5 = (char *)param_2;
  uVar3 = 0xffff;
  bVar7 = true;
  pcVar2 = pcVar5;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    pcVar1 = pcVar2;
    pcVar2 = pcVar2 + 1;
    bVar7 = *pcVar1 == '\0';
  } while (!bVar7);
  uVar3 = ~uVar3;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    pcVar1 = pcVar5;
    pcVar5 = pcVar5 + 1;
    bVar7 = param_1 == *pcVar1;
  } while (!bVar7);
  pcVar2 = (char *)0x0;
  uVar4 = 0;
  if (bVar7) {
    pcVar2 = pcVar5 + -1;
    uVar4 = uVar6;
  }
  return (char *)CONCAT22(uVar4,pcVar2);
}



/* ---- FUN_1150_0e47 @ 1150:0e47  (39 octets) ---- */

char * __stdcall16far FUN_1150_0e47(char param_1,char *param_2)

{
  char *pcVar1;
  char *pcVar2;
  uint uVar3;
  undefined2 uVar4;
  char *pcVar5;
  undefined2 uVar6;
  bool bVar7;
  
  uVar6 = (undefined2)((ulong)param_2 >> 0x10);
  pcVar5 = (char *)param_2;
  uVar3 = 0xffff;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    pcVar1 = pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (*pcVar1 != '\0');
  uVar3 = ~uVar3;
  pcVar5 = pcVar5 + -1;
  bVar7 = pcVar5 == (char *)0x0;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    pcVar1 = pcVar5;
    pcVar5 = pcVar5 + -1;
    bVar7 = param_1 == *pcVar1;
  } while (!bVar7);
  pcVar2 = (char *)0x0;
  uVar4 = 0;
  if (bVar7) {
    pcVar2 = pcVar5 + 1;
    uVar4 = uVar6;
  }
  return (char *)CONCAT22(uVar4,pcVar2);
}



/* ---- FUN_1150_0e6e @ 1150:0e6e  (33 octets) ---- */

void __stdcall16far FUN_1150_0e6e(byte *param_1,byte *param_2)

{
  byte *pbVar1;
  int iVar2;
  byte *pbVar3;
  byte *pbVar4;
  undefined2 uVar5;
  
  uVar5 = (undefined2)((ulong)param_1 >> 0x10);
  pbVar3 = (byte *)param_1;
  iVar2 = 0x100;
  pbVar4 = pbVar3;
  do {
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    pbVar1 = pbVar4;
    pbVar4 = pbVar4 + 1;
  } while (*pbVar1 != 0);
  pbVar4 = (byte *)param_2;
  *param_2 = ~(byte)iVar2;
  for (iVar2 = CONCAT11((char)((uint)iVar2 >> 8),~(byte)iVar2); pbVar4 = pbVar4 + 1, iVar2 != 0;
      iVar2 = iVar2 + -1) {
    pbVar1 = pbVar3;
    pbVar3 = pbVar3 + 1;
    *pbVar4 = *pbVar1;
  }
  return;
}



/* ---- FUN_1150_0e8f @ 1150:0e8f  (45 octets) ---- */

int * __stdcall16far FUN_1150_0e8f(int param_1)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_1158_0182(param_1 + 2);
  *piVar1 = param_1 + 2;
  return (int *)piVar1 + 1;
}



/* ---- FUN_1150_0ebc @ 1150:0ebc  (26 octets) ---- */

int __stdcall16far FUN_1150_0ebc(int *param_1)

{
  param_1 = (int *)CONCAT22(param_1._2_2_,(int *)((int)(int *)param_1 + -2));
  return *param_1 + -2;
}



/* ---- FUN_1150_0ed6 @ 1150:0ed6  (77 octets) ---- */

undefined4 __stdcall16far FUN_1150_0ed6(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_1 == 0 && param_2 == 0) {
    uVar2 = 0;
  }
  else {
    iVar1 = FUN_1150_0c8c(param_1,param_2);
    uVar2 = FUN_1150_0e8f(iVar1 + 1);
    uVar2 = FUN_1150_0cba(iVar1 + 1,param_1,param_2,uVar2);
  }
  return uVar2;
}



/* ---- FUN_1150_0f23 @ 1150:0f23  (36 octets) ---- */

void __stdcall16far FUN_1150_0f23(undefined2 *param_1)

{
  undefined2 *puVar1;
  
  if ((undefined2 *)param_1 != (undefined2 *)0x0 || param_1._2_2_ != 0) {
    puVar1 = (undefined2 *)((int)(undefined2 *)param_1 + -2);
    param_1 = (undefined2 *)CONCAT22(param_1._2_2_,puVar1);
    FUN_1158_019c(*param_1,puVar1,param_1._2_2_);
  }
  return;
}



/* ---- FUN_1150_0f47 @ 1150:0f47  (92 octets) ---- */

void FUN_1150_0f47(uint param_1,undefined2 param_2,undefined2 param_3,int param_4)

{
  undefined2 unaff_SS;
  undefined *puVar1;
  undefined local_12a [256];
  undefined *local_2a;
  undefined local_22 [32];
  
  if (0x1f < param_1) {
    param_1 = 0x1f;
  }
  FUN_1150_0cba(param_1,param_2,param_3,local_22,unaff_SS);
  local_22[param_1] = 0;
  puVar1 = local_12a;
  local_2a = local_22;
  FUN_1150_0950(0,&local_2a,unaff_SS,param_4 + -0x5b);
  FUN_1150_0453(puVar1,unaff_SS);
  return;
}



/* ---- FUN_1150_0fa3 @ 1150:0fa3  (72 octets) ---- */

undefined4 __stdcall16far
FUN_1150_0fa3(undefined2 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined2 uVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  
  uVar4 = (undefined2)((ulong)param_4 >> 0x10);
  uVar6 = 0xffff;
  uVar5 = (undefined2)((ulong)param_3 >> 0x10);
  uVar3 = (undefined2)param_3;
  iVar2 = (int)param_4;
  uVar7 = uVar4;
  uVar1 = FUN_1150_0c8c(uVar3,uVar5);
  iVar2 = FUN_1150_2e50(param_1,(int)param_2,(int)((ulong)param_2 >> 0x10),uVar1,uVar3,uVar5,uVar6,
                        iVar2,uVar7);
  *(undefined *)((int)param_4 + iVar2) = 0;
  return param_4;
}



/* ---- FUN_1150_0feb @ 1150:0feb  (73 octets) ---- */

undefined4 __stdcall16far
FUN_1150_0feb(undefined2 param_1,undefined4 param_2,undefined4 param_3,undefined2 param_4,
             undefined4 param_5)

{
  undefined2 uVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  
  uVar4 = (undefined2)((ulong)param_5 >> 0x10);
  uVar5 = (undefined2)((ulong)param_3 >> 0x10);
  uVar3 = (undefined2)param_3;
  iVar2 = (int)param_5;
  uVar6 = uVar4;
  uVar1 = FUN_1150_0c8c(uVar3,uVar5);
  iVar2 = FUN_1150_2e50(param_1,(int)param_2,(int)((ulong)param_2 >> 0x10),uVar1,uVar3,uVar5,param_4
                        ,iVar2,uVar6);
  *(undefined *)((int)param_5 + iVar2) = 0;
  return param_5;
}



/* ---- FUN_1150_1034 @ 1150:1034  (56 octets) ---- */

void __stdcall16far
FUN_1150_1034(undefined2 param_1,undefined4 param_2,undefined *param_3,undefined *param_4)

{
  undefined uVar1;
  
  uVar1 = FUN_1150_2e50(param_1,(int)param_2,(int)((ulong)param_2 >> 0x10),*param_3,
                        (undefined *)param_3 + 1,(int)((ulong)param_3 >> 0x10),0xff,
                        (undefined *)param_4 + 1,(int)((ulong)param_4 >> 0x10));
  *param_4 = uVar1;
  return;
}



/* ---- FUN_1150_106c @ 1150:106c  (56 octets) ---- */

void __stdcall16far
FUN_1150_106c(undefined2 param_1,undefined4 param_2,undefined *param_3,undefined2 param_4,
             undefined *param_5)

{
  undefined uVar1;
  
  uVar1 = FUN_1150_2e50(param_1,(int)param_2,(int)((ulong)param_2 >> 0x10),*param_3,
                        (undefined *)param_3 + 1,(int)((ulong)param_3 >> 0x10),param_4,
                        (undefined *)param_5 + 1,(int)((ulong)param_5 >> 0x10));
  *param_5 = uVar1;
  return;
}



/* ---- FUN_1150_10a4 @ 1150:10a4  (48 octets) ---- */

void __stdcall16far
FUN_1150_10a4(undefined2 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4,
             undefined2 param_5,undefined *param_6)

{
  undefined uVar1;
  
  uVar1 = FUN_1150_31a0(0,0xf,0,param_1,param_2,param_3,param_4,param_5,(undefined *)param_6 + 1,
                        (int)((ulong)param_6 >> 0x10));
  *param_6 = uVar1;
  return;
}



/* ---- FUN_1150_10d4 @ 1150:10d4  (64 octets) ---- */

void __stdcall16far
FUN_1150_10d4(undefined2 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4,
             undefined2 param_5,undefined4 param_6,undefined *param_7)

{
  undefined uVar1;
  undefined *puVar2;
  undefined2 uVar3;
  undefined2 unaff_SS;
  undefined4 uVar4;
  undefined local_e2 [224];
  
  uVar3 = (undefined2)((ulong)param_7 >> 0x10);
  puVar2 = (undefined *)param_7 + 1;
  uVar4 = FUN_1150_0d6a(0xdf,(int)param_6,(int)((ulong)param_6 >> 0x10),local_e2,unaff_SS);
  uVar1 = FUN_1150_3419(uVar4,param_1,param_2,param_3,param_4,param_5,puVar2,uVar3);
  *param_7 = uVar1;
  return;
}



/* ---- FUN_1150_116f @ 1150:116f  (116 octets) ---- */

undefined2 FUN_1150_116f(double *param_1,uint param_2,uint param_3,uint param_4,uint param_5)

{
  undefined2 in_AX;
  undefined uVar2;
  uint uVar1;
  undefined extraout_AH;
  longdouble lVar3;
  undefined4 uVar4;
  undefined local_3;
  
  uVar2 = (undefined)((uint)in_AX >> 8);
  local_3 = 0;
  if ((((param_5 < 0x18) && (param_4 < 0x3c)) && (param_3 < 0x3c)) && (param_2 < 1000)) {
    uVar4 = FUN_1150_042a(60000,param_5 * 0x3c + param_4);
    uVar1 = param_3 * 1000 + (uint)uVar4;
    lVar3 = (longdouble)8.64e+07;
    FUN_1158_04b2(param_2 + uVar1,
                  (int)((ulong)uVar4 >> 0x10) + (uint)CARRY2(param_3 * 1000,(uint)uVar4) +
                  (uint)CARRY2(param_2,uVar1));
    *param_1 = (double)lVar3;
    local_3 = 1;
    uVar2 = extraout_AH;
  }
  return CONCAT11(uVar2,local_3);
}



/* ---- FUN_1150_11e3 @ 1150:11e3  (54 octets) ---- */

void __stdcall16far
FUN_1150_11e3(undefined2 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4)

{
  char cVar1;
  undefined2 unaff_SS;
  undefined *puVar2;
  undefined local_10a [256];
  undefined local_a [8];
  
  cVar1 = FUN_1150_116f(local_a,unaff_SS,param_1,param_2,param_3,param_4);
  if (cVar1 == '\0') {
    puVar2 = local_10a;
    FUN_1150_092b(0xff85);
    FUN_1150_0453(puVar2,unaff_SS);
  }
  return;
}



/* ---- FUN_1150_1227 @ 1150:1227  (97 octets) ---- */

void __stdcall16far
FUN_1150_1227(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined2 uVar1;
  undefined2 in_DX;
  undefined2 unaff_SS;
  undefined2 local_6;
  undefined2 local_4;
  
  FUN_1158_1057();
  uVar1 = FUN_1158_100e();
  FUN_1150_0437(&local_6,unaff_SS,&local_4,unaff_SS,60000,uVar1,in_DX);
  FUN_1150_0437((int)param_3,(int)((ulong)param_3 >> 0x10),(int)param_4,
                (int)((ulong)param_4 >> 0x10),0x3c,local_4,0);
  FUN_1150_0437((int)param_1,(int)((ulong)param_1 >> 0x10),(int)param_2,
                (int)((ulong)param_2 >> 0x10),1000,local_6,0);
  return;
}



/* ---- FUN_1150_1288 @ 1150:1288  (65 octets) ---- */

undefined4 FUN_1150_1288(uint param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = param_1 / 4;
  uVar2 = param_1 % 4;
  if (uVar2 == 0) {
    uVar1 = param_1 / 100;
    uVar2 = param_1 % 100;
    if (uVar2 == 0) {
      uVar1 = param_1 / 400;
      uVar2 = param_1 % 400;
      if (uVar2 != 0) goto LAB_1150_12b9;
    }
    uVar2 = CONCAT11((char)(uVar2 >> 8),1);
  }
  else {
LAB_1150_12b9:
    uVar2 = uVar2 & 0xff00;
  }
  return CONCAT22(uVar1,uVar2);
}



/* ---- FUN_1150_12c9 @ 1150:12c9  (40 octets) ---- */

undefined4 FUN_1150_12c9(undefined2 param_1)

{
  char cVar1;
  
  cVar1 = FUN_1150_1288(param_1);
  return CONCAT22(*(undefined2 *)(cVar1 * 4 + 0x1750),*(undefined2 *)(cVar1 * 4 + 0x174e));
}



/* ---- FUN_1150_12f1 @ 1150:12f1  (229 octets) ---- */

undefined2 FUN_1150_12f1(double *param_1,uint param_2,uint param_3,uint param_4)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  long lVar5;
  undefined2 uVar6;
  long local_e;
  int local_6;
  undefined local_3;
  
  local_3 = 0;
  uVar4 = FUN_1150_12c9(param_4);
  uVar6 = (undefined2)((ulong)uVar4 >> 0x10);
  uVar1 = (uint)uVar4;
  uVar3 = uVar1;
  if ((((param_4 != 0) && (param_4 < 10000)) && (param_3 != 0)) &&
     (((param_3 < 0xd && (param_2 != 0)) &&
      (uVar3 = *(uint *)(uVar1 + param_3 * 2 + -2), param_2 <= uVar3)))) {
    if (param_3 != 1) {
      for (local_6 = 1; param_2 = param_2 + *(int *)(uVar1 + local_6 * 2 + -2),
          local_6 != param_3 - 1; local_6 = local_6 + 1) {
      }
    }
    param_4 = param_4 - 1;
    iVar2 = (((param_4 >> 2) + param_2) - param_4 / 100) + param_4 / 400;
    uVar6 = 0;
    lVar5 = FUN_1150_042a(0x16d,param_4);
    local_e = lVar5 + CONCAT22(uVar6,iVar2);
    *param_1 = (double)local_e;
    local_3 = 1;
    uVar3 = (int)lVar5 + iVar2;
  }
  return CONCAT11((char)(uVar3 >> 8),local_3);
}



/* ---- FUN_1150_13d6 @ 1150:13d6  (51 octets) ---- */

void __stdcall16far FUN_1150_13d6(undefined2 param_1,undefined2 param_2,undefined2 param_3)

{
  char cVar1;
  undefined2 unaff_SS;
  undefined *puVar2;
  undefined local_10a [256];
  undefined local_a [8];
  
  cVar1 = FUN_1150_12f1(local_a,unaff_SS,param_1,param_2,param_3);
  if (cVar1 == '\0') {
    puVar2 = local_10a;
    FUN_1150_092b(0xff86);
    FUN_1150_0453(puVar2,unaff_SS);
  }
  return;
}



/* ---- FUN_1150_1413 @ 1150:1413  (315 octets) ---- */

void __stdcall16far FUN_1150_1413(int *param_1,int *param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  int in_DX;
  undefined2 unaff_SS;
  undefined4 uVar3;
  uint local_e;
  int local_c;
  int local_a;
  uint local_8;
  int local_6;
  int local_4;
  
  iVar2 = FUN_1158_100e();
  if ((in_DX < 0) || ((in_DX < 1 && (iVar2 == 0)))) {
    *param_3 = 0;
    *param_2 = 0;
    *param_1 = 0;
  }
  else {
    local_c = in_DX - (uint)(iVar2 == 0);
    local_4 = 1;
    for (local_e = iVar2 - 1; (2 < local_c || ((1 < local_c && (0x3ab0 < local_e))));
        local_e = local_e + 0xc54f) {
      local_c = (local_c + -2) - (uint)(local_e < 0x3ab1);
      local_4 = local_4 + 400;
    }
    FUN_1150_0437(&local_8,unaff_SS,&local_a,unaff_SS,0x8eac,local_e,local_c);
    if (local_a == 4) {
      local_a = 3;
      local_8 = local_8 + 0x8eac;
    }
    local_4 = local_4 + local_a * 100;
    FUN_1150_0437(&local_8,unaff_SS,&local_a,unaff_SS,0x5b5,local_8,0);
    local_4 = local_4 + local_a * 4;
    FUN_1150_0437(&local_8,unaff_SS,&local_a,unaff_SS,0x16d,local_8,0);
    if (local_a == 4) {
      local_a = 3;
      local_8 = local_8 + 0x16d;
    }
    local_4 = local_4 + local_a;
    uVar3 = FUN_1150_12c9(local_4);
    local_6 = 1;
    for (; uVar1 = *(uint *)((int)uVar3 + local_6 * 2 + -2), uVar1 <= local_8;
        local_8 = local_8 - uVar1) {
      local_6 = local_6 + 1;
    }
    *param_3 = local_4;
    *param_2 = local_6;
    *param_1 = local_8 + 1;
  }
  return;
}



/* ---- FUN_1150_1558 @ 1150:1558  (49 octets) ---- */

undefined4 __stdcall16far FUN_1150_1558(void)

{
  uint uVar1;
  int iVar2;
  
  FUN_1158_100e();
  uVar1 = 7;
  iVar2 = 0;
  FUN_1158_1670();
  return CONCAT22(iVar2 + (uint)(0xfffe < uVar1),uVar1 + 1);
}



/* ---- FUN_1150_1589 @ 1150:1589  (51 octets) ---- */

void __cdecl16far FUN_1150_1589(void)

{
  code *pcVar1;
  undefined2 in_CX;
  undefined extraout_DH;
  
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  FUN_1150_13d6(extraout_DH,extraout_DH,in_CX);
  return;
}



/* ---- FUN_1150_15bc @ 1150:15bc  (66 octets) ---- */

void __cdecl16far FUN_1150_15bc(void)

{
  code *pcVar1;
  byte in_CH;
  
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  FUN_1150_11e3((uint)in_CH * 10,0,in_CH,in_CH);
  return;
}



/* ---- FUN_1150_15fe @ 1150:15fe  (39 octets) ---- */

void __cdecl16far FUN_1150_15fe(void)

{
  unkbyte10 in_ST0;
  
  FUN_1150_1589();
  FUN_1150_15bc(in_ST0);
  return;
}



/* ---- FUN_1150_1625 @ 1150:1625  (7 octets) ---- */

undefined2 __cdecl16near FUN_1150_1625(void)

{
  code *pcVar1;
  undefined2 in_CX;
  
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  return in_CX;
}



/* ---- FUN_1150_162c @ 1150:162c  (33 octets) ---- */

void FUN_1150_162c(int param_1,undefined4 param_2)

{
  undefined2 unaff_SS;
  
  FUN_1150_0688((int)param_2,(int)((ulong)param_2 >> 0x10),*(undefined2 *)(param_1 + 0x12),
                (int)*(undefined4 *)(param_1 + 0x14),
                (int)((ulong)*(undefined4 *)(param_1 + 0x14) >> 0x10));
  return;
}



/* ---- FUN_1150_164d @ 1150:164d  (36 octets) ---- */

void FUN_1150_164d(int param_1,byte param_2)

{
  byte *pbVar1;
  undefined2 unaff_SS;
  
  pbVar1 = (byte *)*(undefined4 *)(param_1 + 0x14);
  if (*pbVar1 != 0xff) {
    *pbVar1 = *pbVar1 + 1;
    ((byte *)pbVar1)[*pbVar1] = param_2;
  }
  return;
}



/* ---- FUN_1150_1676 @ 1150:1676  (80 octets) ---- */

void FUN_1150_1676(int param_1,int param_2,int param_3)

{
  undefined2 uVar1;
  undefined2 uVar2;
  undefined2 unaff_CS;
  undefined2 unaff_SS;
  undefined *puVar3;
  undefined2 uVar4;
  undefined local_112 [256];
  int local_12;
  int local_10;
  undefined local_e;
  int local_a;
  int local_8;
  undefined local_6;
  
  uVar2 = (undefined2)((ulong)*(undefined4 *)(param_1 + 0x14) >> 0x10);
  uVar1 = (undefined2)*(undefined4 *)(param_1 + 0x14);
  uVar4 = *(undefined2 *)(param_1 + 0x12);
  puVar3 = local_112;
  local_10 = param_2 >> 0xf;
  local_12 = param_2;
  local_e = 0;
  local_8 = param_3 >> 0xf;
  local_a = param_3;
  local_6 = 0;
  FUN_1150_1034(1,&local_12,unaff_SS,0x1671,unaff_CS);
  FUN_1150_0688(puVar3,unaff_SS,uVar4,uVar1,uVar2);
  return;
}



/* ---- FUN_1150_16c6 @ 1150:16c6  (77 octets) ---- */

void FUN_1150_16c6(int param_1)

{
  int iVar1;
  undefined2 unaff_SS;
  
  iVar1 = *(int *)(param_1 + -0xc);
  while ((*(int *)(param_1 + -0xc) <= *(int *)(param_1 + -0xe) &&
         (*(char *)((int)*(undefined4 *)(param_1 + 6) + *(int *)(param_1 + -0xc)) ==
          *(char *)(param_1 + -1)))) {
    *(int *)(param_1 + -0xc) = *(int *)(param_1 + -0xc) + 1;
  }
  *(int *)(param_1 + -0x10) = (*(int *)(param_1 + -0xc) - iVar1) + 1;
  return;
}



/* ---- FUN_1150_1713 @ 1150:1713  (80 octets) ---- */

void FUN_1150_1713(int param_1)

{
  int iVar1;
  undefined2 unaff_SS;
  
  if (*(char *)(param_1 + -4) == '\0') {
    iVar1 = *(int *)(param_1 + 4);
    FUN_1150_1413(param_1 + -0x16,unaff_SS,param_1 + -0x14,unaff_SS,param_1 + -0x12,unaff_SS,
                  *(undefined2 *)(iVar1 + 6),*(undefined2 *)(iVar1 + 8),*(undefined2 *)(iVar1 + 10),
                  *(undefined2 *)(iVar1 + 0xc));
    *(undefined *)(param_1 + -4) = 1;
  }
  return;
}



/* ---- FUN_1150_1763 @ 1150:1763  (89 octets) ---- */

void FUN_1150_1763(int param_1)

{
  int iVar1;
  undefined2 unaff_SS;
  
  if (*(char *)(param_1 + -5) == '\0') {
    iVar1 = *(int *)(param_1 + 4);
    FUN_1150_1227(param_1 + -0x1e,unaff_SS,param_1 + -0x1c,unaff_SS,param_1 + -0x1a,unaff_SS,
                  param_1 + -0x18,unaff_SS,*(undefined2 *)(iVar1 + 6),*(undefined2 *)(iVar1 + 8),
                  *(undefined2 *)(iVar1 + 10),*(undefined2 *)(iVar1 + 0xc));
    *(undefined *)(param_1 + -5) = 1;
  }
  return;
}



/* ---- FUN_1150_17d5 @ 1150:17d5  (1133 octets) ---- */

void FUN_1150_17d5(int param_1,byte *param_2)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  undefined2 uVar4;
  undefined2 unaff_SS;
  undefined *puVar5;
  undefined2 uVar6;
  undefined local_322 [256];
  undefined local_222 [256];
  undefined local_122 [256];
  uint local_22;
  undefined2 local_1e;
  undefined2 local_1c;
  uint local_1a;
  undefined2 local_18;
  int local_16;
  uint local_14;
  int local_12;
  uint local_10;
  int local_e;
  int local_c;
  bool local_9;
  char local_8;
  undefined local_7;
  undefined local_6;
  byte local_5;
  byte local_4;
  byte local_3;
  
  local_e = 1;
  local_10 = (uint)*param_2;
  local_5 = 0x20;
  local_6 = 0;
  local_7 = 0;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            if ((int)local_10 < local_e) {
              return;
            }
            uVar4 = (undefined2)((ulong)param_2 >> 0x10);
            pbVar3 = (byte *)param_2;
            local_3 = pbVar3[local_e];
            iVar2 = local_e + 1;
            local_4 = local_3;
            if ((0x60 < local_3) && (local_3 < 0x7b)) {
              local_4 = local_3 - 0x20;
            }
            if ((0x40 < local_4) && (local_4 < 0x5b)) {
              if ((local_4 == 0x4d) && (local_5 == 0x48)) {
                local_4 = 0x4e;
              }
              local_5 = local_4;
            }
            local_e = iVar2;
            if (local_4 != 0x59) break;
            FUN_1150_16c6(&stack0xfffe);
            FUN_1150_1713(&stack0xfffe);
            if (local_12 < 3) {
              FUN_1150_1676(param_1,2,local_14 % 100);
            }
            else {
              FUN_1150_1676(param_1,4,local_14);
            }
          }
          if (local_4 != 0x4d) break;
          FUN_1150_16c6(&stack0xfffe);
          FUN_1150_1713(&stack0xfffe);
          if ((local_12 == 1) || (local_12 == 2)) {
            FUN_1150_1676(param_1,local_12,local_16);
          }
          else if (local_12 == 3) {
            FUN_1150_162c(param_1,local_16 * 8 + 0x2cd0,0x1160);
          }
          else {
            FUN_1150_162c(param_1,local_16 * 0x10 + 0x2d28,0x1160);
          }
        }
        if (local_4 != 0x44) break;
        FUN_1150_16c6(&stack0xfffe);
        switch(local_12) {
        case 1:
        case 2:
          FUN_1150_1713(&stack0xfffe);
          FUN_1150_1676(param_1,local_12,local_18);
          break;
        case 3:
          iVar2 = FUN_1150_1558(*(undefined2 *)(param_1 + 6),*(undefined2 *)(param_1 + 8),
                                *(undefined2 *)(param_1 + 10),*(undefined2 *)(param_1 + 0xc));
          FUN_1150_162c(param_1,iVar2 * 8 + 0x2df0,0x1160);
          break;
        case 4:
          iVar2 = FUN_1150_1558(*(undefined2 *)(param_1 + 6),*(undefined2 *)(param_1 + 8),
                                *(undefined2 *)(param_1 + 10),*(undefined2 *)(param_1 + 0xc));
          FUN_1150_162c(param_1,iVar2 * 0x10 + 0x2e20,0x1160);
          break;
        case 5:
          FUN_1150_17d5(param_1,0x2c66,0x1160);
          break;
        default:
          FUN_1150_17d5(param_1,0x2c76,0x1160);
        }
      }
      if (local_4 == 0x48) break;
      if (local_4 == 0x4e) {
        FUN_1150_16c6(&stack0xfffe);
        FUN_1150_1763(&stack0xfffe);
        if (2 < local_12) {
          local_12 = 2;
        }
        FUN_1150_1676(param_1,local_12,local_1c);
      }
      else if (local_4 == 0x53) {
        FUN_1150_16c6(&stack0xfffe);
        FUN_1150_1763(&stack0xfffe);
        if (2 < local_12) {
          local_12 = 2;
        }
        FUN_1150_1676(param_1,local_12,local_1e);
      }
      else if (local_4 == 0x54) {
        FUN_1150_16c6(&stack0xfffe);
        if (local_12 == 1) {
          FUN_1150_17d5(param_1,0x2ca8,0x1160);
        }
        else {
          FUN_1150_17d5(param_1,0x2cb8,0x1160);
        }
      }
      else if (local_4 == 0x41) {
        FUN_1150_1763(&stack0xfffe);
        local_c = local_e + -1;
        puVar5 = local_122;
        uVar6 = unaff_SS;
        FUN_1158_180b(5,local_c,pbVar3,uVar4);
        iVar2 = FUN_1150_0730(0x17c6,0x1158,puVar5,uVar6);
        if (iVar2 == 0) {
          if (0xb < local_1a) {
            local_c = local_c + 3;
          }
          puVar5 = local_222;
          uVar6 = unaff_SS;
          FUN_1158_180b(2,local_c,pbVar3,uVar4);
          FUN_1150_162c(param_1,puVar5,uVar6);
          local_e = local_e + 4;
        }
        else {
          puVar5 = local_222;
          uVar6 = unaff_SS;
          FUN_1158_180b(3,local_c,pbVar3,uVar4);
          iVar2 = FUN_1150_0730(0x17cc,0x1158,puVar5,uVar6);
          if (iVar2 == 0) {
            if (0xb < local_1a) {
              local_c = local_c + 2;
            }
            FUN_1150_164d(param_1,pbVar3[local_c]);
            local_e = local_e + 2;
          }
          else {
            puVar5 = local_322;
            uVar6 = unaff_SS;
            FUN_1158_180b(4,local_c,pbVar3,uVar4);
            iVar2 = FUN_1150_0730(0x17d0,0x1158,puVar5,uVar6);
            if (iVar2 == 0) {
              if (local_1a < 0xc) {
                FUN_1150_162c(param_1,0x2c98,0x1160);
              }
              else {
                FUN_1150_162c(param_1,0x2ca0,0x1160);
              }
              local_e = local_e + 3;
            }
            else {
              FUN_1150_164d(param_1,local_3);
            }
          }
        }
      }
      else if (local_4 == 0x43) {
        FUN_1150_16c6(&stack0xfffe);
        FUN_1150_1c52(param_1);
      }
      else if (local_4 == 0x2f) {
        FUN_1150_164d(param_1,DAT_1160_2c65);
      }
      else if (local_4 == 0x3a) {
        FUN_1150_164d(param_1,DAT_1160_2c96);
      }
      else if ((local_4 == 0x27) || (local_4 == 0x22)) {
        for (; (local_e <= (int)local_10 && (pbVar3[local_e] != local_3)); local_e = local_e + 1) {
        }
        puVar5 = local_122;
        uVar6 = unaff_SS;
        local_c = iVar2;
        FUN_1158_180b(local_e - iVar2,iVar2,pbVar3,uVar4);
        FUN_1150_162c(param_1,puVar5,uVar6);
        if (local_e <= (int)local_10) {
          local_e = local_e + 1;
        }
      }
      else {
        FUN_1150_164d(param_1,local_3);
      }
    }
    FUN_1150_16c6(&stack0xfffe);
    FUN_1150_1763(&stack0xfffe);
    local_8 = '\0';
    local_9 = false;
    for (local_c = local_e; local_c <= (int)local_10; local_c = local_c + 1) {
      bVar1 = pbVar3[local_c];
      if ((bVar1 == 0x41) || (bVar1 == 0x61)) {
        if (local_9 == false) {
          local_8 = '\x01';
          break;
        }
      }
      else {
        if ((bVar1 == 0x48) || (bVar1 == 0x68)) break;
        if ((bVar1 == 0x27) || (bVar1 == 0x22)) {
          local_9 = local_9 == false;
        }
      }
    }
    local_22 = local_1a;
    if (local_8 != '\0') {
      if (local_1a == 0) {
        local_22 = 0xc;
      }
      else if (0xc < local_1a) {
        local_22 = local_1a - 0xc;
      }
    }
    if (2 < local_12) {
      local_12 = 2;
    }
    FUN_1150_1676(param_1,local_12,local_22);
  } while( true );
}



/* ---- FUN_1150_1c52 @ 1150:1c52  (74 octets) ---- */

void FUN_1150_1c52(undefined2 param_1)

{
  int iVar1;
  int extraout_DX;
  int iVar2;
  
  FUN_1150_17d5(param_1,0x2c66,0x1160);
  iVar2 = extraout_DX;
  FUN_1158_1057();
  iVar1 = FUN_1158_100e();
  if (iVar1 != 0 || iVar2 != 0) {
    FUN_1150_164d(param_1,0x20);
    FUN_1150_17d5(param_1,0x2cb8,0x1160);
  }
  return;
}



/* ---- FUN_1150_1c9c @ 1150:1c9c  (35 octets) ---- */

void __stdcall16far FUN_1150_1c9c(void)

{
  char *param_1;
  undefined *param_2;
  
  *param_2 = 0;
  if (*param_1 == '\0') {
    FUN_1150_1c52(&stack0xfffe);
  }
  else {
    FUN_1150_17d5(&stack0xfffe,(char *)param_1,(int)((ulong)param_1 >> 0x10));
  }
  return;
}



/* ---- FUN_1150_1cbf @ 1150:1cbf  (37 octets) ---- */

void __stdcall16far
FUN_1150_1cbf(undefined2 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4,
             undefined4 param_5)

{
  FUN_1150_1c9c(param_1,param_2,param_3,param_4,0x2c66,0x1160,0xff,(int)param_5,
                (int)((ulong)param_5 >> 0x10));
  return;
}



/* ---- FUN_1150_1ce4 @ 1150:1ce4  (37 octets) ---- */

void __stdcall16far
FUN_1150_1ce4(undefined2 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4,
             undefined4 param_5)

{
  FUN_1150_1c9c(param_1,param_2,param_3,param_4,0x2cb8,0x1160,0xff,(int)param_5,
                (int)((ulong)param_5 >> 0x10));
  return;
}



/* ---- FUN_1150_1d0a @ 1150:1d0a  (37 octets) ---- */

void __stdcall16far
FUN_1150_1d0a(undefined2 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4,
             undefined4 param_5)

{
  undefined2 unaff_CS;
  
  FUN_1150_1c9c(param_1,param_2,param_3,param_4,0x1d09,unaff_CS,0xff,(int)param_5,
                (int)((ulong)param_5 >> 0x10));
  return;
}



/* ---- FUN_1150_1d2f @ 1150:1d2f  (55 octets) ---- */

void FUN_1150_1d2f(int *param_1,byte *param_2)

{
  int local_4;
  
  local_4 = *param_1;
  while( true ) {
    if (((int)(uint)*param_2 < local_4) || (((byte *)param_2)[local_4] != 0x20)) break;
    local_4 = local_4 + 1;
  }
  *param_1 = local_4;
  return;
}



/* ---- FUN_1150_1d66 @ 1150:1d66  (140 octets) ---- */

undefined2 FUN_1150_1d66(uint *param_1,uint *param_2,byte *param_3)

{
  bool bVar1;
  byte *pbVar2;
  undefined2 uVar3;
  uint local_8;
  uint local_6;
  
  uVar3 = (undefined2)((ulong)param_3 >> 0x10);
  pbVar2 = (byte *)param_3;
  FUN_1150_1d2f((uint *)param_2,(int)((ulong)param_2 >> 0x10),pbVar2,uVar3);
  local_6 = *param_2;
  local_8 = 0;
  while( true ) {
    if (((((int)(uint)*param_3 < (int)local_6) || (pbVar2[local_6] < 0x30)) ||
        (0x39 < pbVar2[local_6])) || (999 < local_8)) break;
    local_8 = local_8 * 10 + (pbVar2[local_6] - 0x30);
    local_6 = local_6 + 1;
  }
  bVar1 = (int)*param_2 < (int)local_6;
  if (bVar1) {
    *param_2 = local_6;
    *param_1 = local_8;
    local_6 = local_8;
  }
  return CONCAT11((char)(local_6 >> 8),bVar1);
}



/* ---- FUN_1150_1df2 @ 1150:1df2  (100 octets) ---- */

undefined FUN_1150_1df2(byte *param_1,int *param_2,undefined4 param_3)

{
  int iVar1;
  byte *pbVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined2 unaff_SS;
  undefined *puVar5;
  undefined local_104 [257];
  undefined local_3;
  
  local_3 = 0;
  if (*param_1 != 0) {
    uVar3 = (undefined2)((ulong)param_3 >> 0x10);
    FUN_1150_1d2f((int *)param_2,(int)((ulong)param_2 >> 0x10),(int)param_3,uVar3);
    uVar4 = (undefined2)((ulong)param_1 >> 0x10);
    pbVar2 = (byte *)param_1;
    puVar5 = local_104;
    FUN_1158_180b(*param_1,*param_2,(int)param_3,uVar3);
    iVar1 = FUN_1150_07ed(puVar5,unaff_SS,pbVar2,uVar4);
    if (iVar1 == 0) {
      *param_2 = *param_2 + (uint)*param_1;
      local_3 = 1;
    }
  }
  return local_3;
}



/* ---- FUN_1150_1e56 @ 1150:1e56  (70 octets) ---- */

undefined2 FUN_1150_1e56(byte param_1,int *param_2,byte *param_3)

{
  byte bVar1;
  uint uVar2;
  undefined2 uVar3;
  undefined local_3;
  
  local_3 = 0;
  uVar3 = (undefined2)((ulong)param_3 >> 0x10);
  FUN_1150_1d2f((int *)param_2,(int)((ulong)param_2 >> 0x10),(byte *)param_3,uVar3);
  uVar2 = (uint)*param_3;
  if ((*param_2 <= (int)uVar2) &&
     (bVar1 = ((byte *)param_3)[*param_2], uVar2 = CONCAT11((char)((uint)*param_2 >> 8),bVar1),
     bVar1 == param_1)) {
    *param_2 = *param_2 + 1;
    local_3 = 1;
  }
  return CONCAT11((char)(uVar2 >> 8),local_3);
}



/* ---- FUN_1150_1e9c @ 1150:1e9c  (80 octets) ---- */

undefined2 FUN_1150_1e9c(byte *param_1)

{
  char cVar1;
  uint uVar2;
  int local_6;
  undefined local_3;
  
  local_6 = 1;
  do {
    uVar2 = (uint)*param_1;
    if ((int)uVar2 < local_6) {
      local_3 = 0;
LAB_1150_1ee7:
      return CONCAT11((char)(uVar2 >> 8),local_3);
    }
    uVar2 = CONCAT11((char)((uint)local_6 >> 8),((byte *)param_1)[local_6]) & 0xffdf;
    cVar1 = (char)uVar2;
    if (cVar1 == 'Y') {
      local_3 = 2;
      goto LAB_1150_1ee7;
    }
    if (cVar1 == 'M') {
      local_3 = 0;
      goto LAB_1150_1ee7;
    }
    if (cVar1 == 'D') {
      local_3 = 1;
      goto LAB_1150_1ee7;
    }
    local_6 = local_6 + 1;
  } while( true );
}



/* ---- FUN_1150_1eee @ 1150:1eee  (297 octets) ---- */

undefined FUN_1150_1eee(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined2 unaff_SS;
  uint local_12;
  uint local_10;
  uint local_e;
  uint local_c;
  uint local_a;
  uint local_8 [2];
  char local_4;
  undefined local_3;
  
  local_3 = 0;
  local_4 = FUN_1150_1e9c(0x2c66,0x1160);
  uVar4 = (undefined2)((ulong)param_3 >> 0x10);
  uVar2 = (undefined2)param_3;
  uVar5 = (undefined2)((ulong)param_2 >> 0x10);
  uVar3 = (undefined2)param_2;
  cVar1 = FUN_1150_1d66(local_8,unaff_SS,uVar3,uVar5,uVar2,uVar4);
  if (((cVar1 != '\0') &&
      (cVar1 = FUN_1150_1e56(DAT_1160_2c65,uVar3,uVar5,uVar2,uVar4), cVar1 != '\0')) &&
     (cVar1 = FUN_1150_1d66(&local_a,unaff_SS,uVar3,uVar5,uVar2,uVar4), cVar1 != '\0')) {
    cVar1 = FUN_1150_1e56(DAT_1160_2c65,uVar3,uVar5,uVar2,uVar4);
    if (cVar1 == '\0') {
      local_e = FUN_1150_1625();
      if (local_4 == '\x01') {
        local_12 = local_8[0];
        local_10 = local_a;
      }
      else {
        local_10 = local_8[0];
        local_12 = local_a;
      }
    }
    else {
      cVar1 = FUN_1150_1d66(&local_c,unaff_SS,uVar3,uVar5,uVar2,uVar4);
      if (cVar1 == '\0') {
        return local_3;
      }
      if (local_4 == '\0') {
        local_e = local_c;
        local_10 = local_8[0];
        local_12 = local_a;
      }
      else if (local_4 == '\x01') {
        local_e = local_c;
        local_10 = local_a;
        local_12 = local_8[0];
      }
      else if (local_4 == '\x02') {
        local_e = local_8[0];
        local_10 = local_a;
        local_12 = local_c;
      }
      if (local_e < 100) {
        local_e = local_e + 0x76c;
      }
    }
    FUN_1150_1d2f(uVar3,uVar5,uVar2,uVar4);
    local_3 = FUN_1150_12f1((int)param_1,(int)((ulong)param_1 >> 0x10),local_12,local_10,local_e);
  }
  return local_3;
}



/* ---- FUN_1150_201d @ 1150:201d  (311 octets) ---- */

undefined FUN_1150_201d(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined2 unaff_CS;
  undefined2 unaff_SS;
  undefined2 local_c;
  undefined2 local_a;
  uint local_8;
  int local_6;
  undefined local_3;
  
  local_3 = 0;
  uVar4 = (undefined2)((ulong)param_3 >> 0x10);
  uVar2 = (undefined2)param_3;
  uVar5 = (undefined2)((ulong)param_2 >> 0x10);
  uVar3 = (undefined2)param_2;
  cVar1 = FUN_1150_1d66(&local_8,unaff_SS,uVar3,uVar5,uVar2,uVar4);
  if (((cVar1 != '\0') &&
      (cVar1 = FUN_1150_1e56(DAT_1160_2c96,uVar3,uVar5,uVar2,uVar4), cVar1 != '\0')) &&
     (cVar1 = FUN_1150_1d66(&local_a,unaff_SS,uVar3,uVar5,uVar2,uVar4), cVar1 != '\0')) {
    local_c = 0;
    cVar1 = FUN_1150_1e56(DAT_1160_2c96,uVar3,uVar5,uVar2,uVar4);
    if ((cVar1 == '\0') ||
       (cVar1 = FUN_1150_1d66(&local_c,unaff_SS,uVar3,uVar5,uVar2,uVar4), cVar1 != '\0')) {
      local_6 = -1;
      cVar1 = FUN_1150_1df2(0x2c98,0x1160,uVar3,uVar5,uVar2,uVar4);
      if ((cVar1 == '\0') &&
         (cVar1 = FUN_1150_1df2(0x2017,unaff_CS,uVar3,uVar5,uVar2,uVar4), cVar1 == '\0')) {
        cVar1 = FUN_1150_1df2(0x2ca0,0x1160,uVar3,uVar5,uVar2,uVar4);
        if ((cVar1 != '\0') ||
           (cVar1 = FUN_1150_1df2(0x201a,unaff_CS,uVar3,uVar5,uVar2,uVar4), cVar1 != '\0')) {
          local_6 = 0xc;
        }
      }
      else {
        local_6 = 0;
      }
      if (-1 < local_6) {
        if (local_8 == 0) {
          return local_3;
        }
        if (0xc < local_8) {
          return local_3;
        }
        if (local_8 == 0xc) {
          local_8 = 0;
        }
        local_8 = local_8 + local_6;
      }
      FUN_1150_1d2f(uVar3,uVar5,uVar2,uVar4);
      local_3 = FUN_1150_116f((int)param_1,(int)((ulong)param_1 >> 0x10),0,local_c,local_a,local_8);
    }
  }
  return local_3;
}



/* ---- FUN_1150_2154 @ 1150:2154  (94 octets) ---- */

void __stdcall16far FUN_1150_2154(byte *param_1)

{
  char cVar1;
  undefined2 uVar2;
  undefined2 unaff_SS;
  undefined *puVar3;
  undefined local_114 [256];
  byte *local_14;
  undefined2 local_12;
  undefined local_10;
  int local_c;
  undefined local_a [8];
  
  local_c = 1;
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  cVar1 = FUN_1150_1eee(local_a,unaff_SS,&local_c,unaff_SS,(byte *)param_1,uVar2);
  if ((cVar1 == '\0') || (local_c <= (int)(uint)*param_1)) {
    puVar3 = local_114;
    local_10 = 4;
    local_14 = (byte *)param_1;
    local_12 = uVar2;
    FUN_1150_0950(0,&local_14,unaff_SS,0xff82);
    FUN_1150_0453(puVar3,unaff_SS);
  }
  return;
}



/* ---- FUN_1150_21b2 @ 1150:21b2  (94 octets) ---- */

void __stdcall16far FUN_1150_21b2(byte *param_1)

{
  char cVar1;
  undefined2 uVar2;
  undefined2 unaff_SS;
  undefined *puVar3;
  undefined local_114 [256];
  byte *local_14;
  undefined2 local_12;
  undefined local_10;
  int local_c;
  undefined local_a [8];
  
  local_c = 1;
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  cVar1 = FUN_1150_201d(local_a,unaff_SS,&local_c,unaff_SS,(byte *)param_1,uVar2);
  if ((cVar1 == '\0') || (local_c <= (int)(uint)*param_1)) {
    puVar3 = local_114;
    local_10 = 4;
    local_14 = (byte *)param_1;
    local_12 = uVar2;
    FUN_1150_0950(0,&local_14,unaff_SS,0xff83);
    FUN_1150_0453(puVar3,unaff_SS);
  }
  return;
}



/* ---- FUN_1150_2214 @ 1150:2214  (139 octets) ---- */

void __stdcall16far FUN_1150_2214(byte *param_1)

{
  char cVar1;
  byte *pbVar2;
  undefined2 uVar3;
  undefined2 unaff_SS;
  undefined *puVar4;
  undefined local_124 [256];
  byte *local_24;
  undefined2 local_22;
  undefined local_20;
  undefined8 local_1c;
  undefined local_14 [8];
  int local_c [5];
  
  local_c[0] = 1;
  local_1c = 0;
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  pbVar2 = (byte *)param_1;
  cVar1 = FUN_1150_1eee(local_14,unaff_SS,local_c,unaff_SS,pbVar2,uVar3);
  if (cVar1 != '\0') {
    if ((int)(uint)*param_1 < local_c[0]) {
      return;
    }
    cVar1 = FUN_1150_201d(&local_1c,unaff_SS,local_c,unaff_SS,pbVar2,uVar3);
    if (cVar1 != '\0') {
      return;
    }
  }
  puVar4 = local_124;
  local_20 = 4;
  local_24 = pbVar2;
  local_22 = uVar3;
  FUN_1150_0950(0,&local_24,unaff_SS,0xff84);
  FUN_1150_0453(puVar4,unaff_SS);
  return;
}



/* ---- FUN_1150_229f @ 1150:229f  (61 octets) ---- */

void __stdcall16far
FUN_1150_229f(undefined4 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4,
             undefined2 param_5,undefined *param_6)

{
  undefined uVar1;
  undefined2 unaff_SS;
  undefined4 uVar2;
  undefined local_102 [256];
  
  uVar2 = FUN_1150_0d4c((int)param_1,(int)((ulong)param_1 >> 0x10),local_102,unaff_SS);
  uVar1 = GETPROFILESTRING(0x1150,0xff,(undefined *)param_6 + 1,(int)((ulong)param_6 >> 0x10),uVar2,
                           param_2,param_3,param_4);
  *param_6 = uVar1;
  return;
}



/* ---- FUN_1150_22dc @ 1150:22dc  (68 octets) ---- */

undefined __stdcall16far
FUN_1150_22dc(undefined param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4)

{
  int iVar1;
  undefined2 unaff_CS;
  undefined2 unaff_SS;
  undefined local_8 [2];
  undefined local_6;
  undefined local_5;
  undefined local_3;
  
  local_6 = param_1;
  local_5 = 0;
  iVar1 = GETPROFILESTRING(unaff_CS,2,local_8,unaff_SS,&local_6,unaff_SS,param_2,param_3,param_4);
  if (iVar1 == 0) {
    local_3 = param_1;
  }
  else {
    local_3 = local_8[0];
  }
  return local_3;
}



/* ---- FUN_1150_2320 @ 1150:2320  (202 octets) ---- */

void __cdecl16near FUN_1150_2320(void)

{
  undefined2 unaff_SS;
  undefined *puVar1;
  undefined2 uVar2;
  undefined local_104 [256];
  int local_4;
  
  local_4 = 1;
  while( true ) {
    puVar1 = local_104;
    uVar2 = unaff_SS;
    FUN_1150_092b(local_4 + -0x41);
    FUN_1158_17e7(7,local_4 * 8 + 0x2cd0,0x1160,puVar1,uVar2);
    puVar1 = local_104;
    uVar2 = unaff_SS;
    FUN_1150_092b(local_4 + -0x31);
    FUN_1158_17e7(0xf,local_4 * 0x10 + 0x2d28,0x1160,puVar1,uVar2);
    if (local_4 == 0xc) break;
    local_4 = local_4 + 1;
  }
  local_4 = 1;
  while( true ) {
    puVar1 = local_104;
    uVar2 = unaff_SS;
    FUN_1150_092b(local_4 + -0x21);
    FUN_1158_17e7(7,local_4 * 8 + 0x2df0,0x1160,puVar1,uVar2);
    puVar1 = local_104;
    uVar2 = unaff_SS;
    FUN_1150_092b(local_4 + -0x1a);
    FUN_1158_17e7(0xf,local_4 * 0x10 + 0x2e20,0x1160,puVar1,uVar2);
    if (local_4 == 7) break;
    local_4 = local_4 + 1;
  }
  return;
}



/* ---- FUN_1150_241b @ 1150:241b  (533 octets) ---- */

void __cdecl16far FUN_1150_241b(void)

{
  int iVar1;
  undefined2 unaff_CS;
  undefined2 unaff_SS;
  undefined *puVar2;
  undefined2 uVar3;
  undefined local_112 [256];
  undefined local_12 [8];
  undefined local_a [8];
  
  puVar2 = local_112;
  uVar3 = unaff_SS;
  FUN_1150_229f(0x23ea,unaff_CS,0x175b,0x1160,0x1756,0x1160);
  FUN_1158_17e7(7,0x2c58,0x1160,puVar2,uVar3);
  DAT_1160_2c60._0_1_ = GETPROFILEINT(0x1158,0,0x1765,0x1160,0x1756);
  DAT_1160_2c60._1_1_ = GETPROFILEINT(0x14d0,0,5999,0x1160,0x1756);
  DAT_1160_2c62._0_1_ = FUN_1150_22dc(0x2c,0x1778,0x1160,0x1756,0x1160);
  DAT_1160_2c62._1_1_ = FUN_1150_22dc(0x2e,0x1782,0x1160,0x1756,0x1160);
  DAT_1160_2c64 = GETPROFILEINT(0x1150,2,0x178b,0x1160,0x1756);
  DAT_1160_2c65 = FUN_1150_22dc(0x2f,0x1797,0x1160,0x1756,0x1160);
  puVar2 = local_112;
  uVar3 = unaff_SS;
  FUN_1150_229f(0x23eb,0x1150,0x179d,0x1160,0x1756,0x1160);
  FUN_1158_17e7(0xf,0x2c66,0x1160,puVar2,uVar3);
  puVar2 = local_112;
  uVar3 = unaff_SS;
  FUN_1150_229f(0x23f2,0x1158,0x17a8,0x1160,0x1756,0x1160);
  FUN_1158_17e7(0x1f,0x2c76,0x1160,puVar2,uVar3);
  DAT_1160_2c96 = FUN_1150_22dc(0x3a,0x17b2,0x1160,0x1756,0x1160);
  puVar2 = local_112;
  uVar3 = unaff_SS;
  FUN_1150_229f(0x23ff,0x1150,0x17b8,0x1160,0x1756,0x1160);
  FUN_1158_17e7(7,0x2c98,0x1160,puVar2,uVar3);
  puVar2 = local_112;
  uVar3 = unaff_SS;
  FUN_1150_229f(0x2402,0x1158,0x17be,0x1160,0x1756,0x1160);
  FUN_1158_17e7(7,0x2ca0,0x1160,puVar2,uVar3);
  iVar1 = GETPROFILEINT(0x1158,0,0x17c4,0x1160,0x1756);
  if (iVar1 == 0) {
    FUN_1158_17e7(7,local_a,unaff_SS,0x2405,0x14d0);
  }
  else {
    FUN_1158_17e7(7,local_a,unaff_SS,0x2407,0x14d0);
  }
  iVar1 = GETPROFILEINT(0x1158,0,0x17cc,0x1160,0x1756);
  if (iVar1 == 0) {
    FUN_1158_17e7(7,local_12,unaff_SS,0x240a,0x14d0);
  }
  else {
    local_12[0] = 0;
  }
  puVar2 = local_112;
  uVar3 = unaff_SS;
  FUN_1158_17cd(local_a,unaff_SS);
  FUN_1158_184c(0x2410,0x1158);
  FUN_1158_184c(local_12,unaff_SS);
  FUN_1158_17e7(0xf,0x2ca8,0x1160,puVar2,uVar3);
  puVar2 = local_112;
  uVar3 = unaff_SS;
  FUN_1158_17cd(local_a,unaff_SS);
  FUN_1158_184c(0x2414,0x1158);
  FUN_1158_184c(local_12,unaff_SS);
  FUN_1158_17e7(0x1f,0x2cb8,0x1160,puVar2,uVar3);
  return;
}



/* ---- FUN_1150_2630 @ 1150:2630  (20 octets) ---- */

undefined2 __cdecl16far FUN_1150_2630(void)

{
  undefined2 uVar1;
  undefined2 unaff_SS;
  
  uVar1 = 0;
  if (DAT_1160_185a != 0) {
    uVar1 = *(undefined2 *)(DAT_1160_185a + 6);
  }
  return uVar1;
}



/* ---- FUN_1150_2644 @ 1150:2644  (20 octets) ---- */

undefined2 __cdecl16far FUN_1150_2644(void)

{
  undefined2 uVar1;
  undefined2 unaff_SS;
  
  uVar1 = 0;
  if (DAT_1160_185a != 0) {
    uVar1 = *(undefined2 *)(DAT_1160_185a + 2);
  }
  return uVar1;
}



/* ---- FUN_1150_2658 @ 1150:2658  (32 octets) ---- */

void FUN_1150_2658(void)

{
  return;
}



/* ---- FUN_1150_2678 @ 1150:2678  (136 octets) ---- */

void FUN_1150_2678(undefined2 *param_1,undefined *param_2)

{
  int iVar1;
  undefined2 unaff_CS;
  undefined2 unaff_SS;
  undefined4 uVar2;
  undefined *puVar3;
  undefined local_23a [256];
  undefined2 local_13a;
  undefined2 local_138;
  undefined local_128 [258];
  undefined2 local_26;
  undefined2 local_24;
  undefined2 local_10;
  byte local_e;
  undefined2 local_c;
  
  *param_2 = 0;
  local_26 = 0x24;
  local_24 = 0;
  iVar1 = GLOBALENTRYHANDLE(unaff_CS,*param_1,&local_26);
  if (iVar1 != 0) {
    local_13a = 0x114;
    local_138 = 0;
    iVar1 = MODULEFINDHANDLE(0x14d0,local_10,&local_13a);
    if (iVar1 != 0) {
      puVar3 = local_23a;
      uVar2 = FUN_1150_0e47(0x5c,local_128,unaff_SS);
      FUN_1150_0e6e((int)uVar2 + 1,(int)((ulong)uVar2 >> 0x10));
      FUN_1158_17e7(0x4f,(undefined *)param_2,(int)((ulong)param_2 >> 0x10),puVar3,unaff_SS);
      if ((local_e != 0) && (local_e < 4)) {
        *param_1 = local_c;
      }
    }
  }
  return;
}



/* ---- FUN_1150_2700 @ 1150:2700  (444 octets) ---- */

void __stdcall16far FUN_1150_2700(undefined2 param_1,undefined2 param_2,undefined4 *param_3)

{
  char cVar1;
  int iVar2;
  undefined2 unaff_SS;
  undefined4 uVar3;
  undefined *puVar4;
  undefined2 uVar5;
  undefined local_2a0 [216];
  undefined *local_1c8;
  undefined2 local_19e;
  undefined2 local_19c;
  undefined local_17a [256];
  undefined local_7a [64];
  undefined local_3a [32];
  undefined local_1a [16];
  undefined2 local_a;
  undefined2 local_8;
  undefined4 local_6;
  
  puVar4 = local_2a0;
  uVar5 = unaff_SS;
  FUN_1158_20ed((int)*param_3,(int)((ulong)*param_3 >> 0x10));
  FUN_1158_17e7(0x1f,local_3a,unaff_SS,puVar4,uVar5);
  local_19e = 0x24;
  local_19c = 0;
  iVar2 = GLOBALENTRYHANDLE(0x1158,param_2,&local_19e);
  if (iVar2 == 0) {
    FUN_1150_2658(param_1,param_2);
  }
  GETMODULEFILENAME(0x14d0,0x100,local_17a,unaff_SS);
  puVar4 = local_1a;
  uVar5 = unaff_SS;
  uVar3 = FUN_1150_0e47(0x5c,local_17a,unaff_SS);
  FUN_1150_0cdf((int)uVar3 + 1,(int)((ulong)uVar3 >> 0x10),puVar4,uVar5);
  local_6 = (byte *)CONCAT22(DAT_1160_1718,DAT_1160_1716);
  local_a = 0x17d2;
  local_8 = 0x1160;
  cVar1 = FUN_1158_2255(0x2e,0x1150,(undefined4 *)param_3,param_3._2_2_);
  if (cVar1 != '\0') {
    local_6 = (byte *)CONCAT22(*(undefined2 *)((int)(undefined4 *)param_3 + 6),
                               *(byte **)((undefined4 *)param_3 + 1));
    if ((*local_6 != 0) && ((*(byte **)((undefined4 *)param_3 + 1))[*local_6] != 0x2e)) {
      local_a = 0x17d3;
      local_8 = 0x1160;
    }
  }
  LOADSTRING(0x1158,0x40,local_7a,unaff_SS,0xffa3);
  local_1c8 = local_3a;
  FUN_1150_0fa3(4,&local_1c8,unaff_SS,local_7a,unaff_SS,local_17a,unaff_SS);
  LOADSTRING(0x1150,0x40,local_7a,unaff_SS,0xffa4);
  MESSAGEBOX(0x14d0,(char *)s_windows_1160_100f + 1,local_7a,unaff_SS,local_17a,unaff_SS);
  return;
}



/* ---- FUN_1150_28bc @ 1150:28bc  (7 octets) ---- */

undefined4 __cdecl16near FUN_1150_28bc(void)

{
  int unaff_BP;
  undefined2 unaff_SS;
  
  return CONCAT22(*(undefined2 *)(unaff_BP + 4),*(undefined2 *)(unaff_BP + 2));
}



/* ---- FUN_1150_28c3 @ 1150:28c3  (33 octets) ---- */

void FUN_1150_28c3(void)

{
  undefined2 extraout_DX;
  undefined4 uVar1;
  
  uVar1 = FUN_1150_2923(0x58,0x1150,1,0xffa0);
  FUN_1150_28bc(uVar1);
  FUN_1158_1399(extraout_DX);
  return;
}



/* ---- FUN_1150_28e6 @ 1150:28e6  (61 octets) ---- */

undefined4 __stdcall16far FUN_1150_28e6(undefined4 param_1,char param_2,undefined4 param_3)

{
  undefined2 uVar1;
  undefined4 uVar2;
  undefined2 uStack_a;
  
  if (param_2 != '\0') {
    FUN_1158_1fe2();
  }
  uVar2 = FUN_1150_05d7((int)param_3,(int)((ulong)param_3 >> 0x10));
  uVar1 = (undefined2)((ulong)param_1 >> 0x10);
  *(undefined2 *)((int)param_1 + 4) = (int)uVar2;
  *(undefined2 *)((int)param_1 + 6) = (int)((ulong)uVar2 >> 0x10);
  if (param_2 != '\0') {
    DAT_1160_1858 = uStack_a;
  }
  return param_1;
}



/* ---- FUN_1150_2923 @ 1150:2923  (71 octets) ---- */

undefined4 __stdcall16far FUN_1150_2923(undefined4 param_1,char param_2,undefined2 param_3)

{
  undefined2 uVar1;
  undefined2 unaff_SS;
  undefined4 uVar2;
  undefined *puVar3;
  undefined2 uStack_10a;
  undefined local_102 [256];
  
  if (param_2 != '\0') {
    FUN_1158_1fe2();
  }
  puVar3 = local_102;
  FUN_1150_092b(param_3);
  uVar2 = FUN_1150_05d7(puVar3,unaff_SS);
  uVar1 = (undefined2)((ulong)param_1 >> 0x10);
  *(undefined2 *)((int)param_1 + 4) = (int)uVar2;
  *(undefined2 *)((int)param_1 + 6) = (int)((ulong)uVar2 >> 0x10);
  if (param_2 != '\0') {
    DAT_1160_1858 = uStack_10a;
  }
  return param_1;
}



/* ---- FUN_1150_296a @ 1150:296a  (90 octets) ---- */

undefined4 __stdcall16far
FUN_1150_296a(undefined4 param_1,char param_2,undefined2 param_3,undefined4 param_4,
             undefined2 param_5)

{
  undefined2 uVar1;
  undefined2 unaff_SS;
  undefined4 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined2 uStack_20a;
  undefined local_202 [256];
  undefined local_102 [256];
  
  if (param_2 != '\0') {
    FUN_1158_1fe2();
  }
  puVar4 = local_202;
  puVar3 = local_102;
  uVar1 = unaff_SS;
  FUN_1150_092b(param_5);
  FUN_1150_1034(param_3,(int)param_4,(int)((ulong)param_4 >> 0x10),puVar3,unaff_SS);
  uVar2 = FUN_1150_05d7(puVar4,uVar1);
  uVar1 = (undefined2)((ulong)param_1 >> 0x10);
  *(undefined2 *)((int)param_1 + 4) = (int)uVar2;
  *(undefined2 *)((int)param_1 + 6) = (int)((ulong)uVar2 >> 0x10);
  if (param_2 != '\0') {
    DAT_1160_1858 = uStack_20a;
  }
  return param_1;
}



/* ---- FUN_1150_29c4 @ 1150:29c4  (34 octets) ---- */

void __stdcall16far FUN_1150_29c4(undefined4 param_1,char param_2)

{
  undefined2 uVar1;
  
  uVar1 = (undefined2)((ulong)param_1 >> 0x10);
  FUN_1150_0624(*(undefined2 *)((int)param_1 + 4),*(undefined2 *)((int)param_1 + 6));
  if (param_2 != '\0') {
    FUN_1158_200f();
  }
  return;
}



/* ---- FUN_1150_29e6 @ 1150:29e6  (29 octets) ---- */

void __stdcall16far FUN_1150_29e6(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)((int)param_1 + 4);
  FUN_1158_17e7(0xff,(int)param_2,(int)((ulong)param_2 >> 0x10),(int)uVar1,
                (int)((ulong)uVar1 >> 0x10));
  return;
}



/* ---- FUN_1150_2a03 @ 1150:2a03  (26 octets) ---- */

void __stdcall16far FUN_1150_2a03(undefined4 param_1,undefined4 param_2)

{
  FUN_1150_0651((int)param_2,(int)((ulong)param_2 >> 0x10),(int)param_1 + 4,
                (int)((ulong)param_1 >> 0x10));
  return;
}



/* ---- FUN_1150_2a1d @ 1150:2a1d  (18 octets) ---- */

void __stdcall16far FUN_1150_2a1d(undefined2 param_1_00,undefined2 param_2,char param_1)

{
  if (param_1 != '\0') {
    FUN_1158_200f();
  }
  return;
}



/* ---- FUN_1150_2a2f @ 1150:2a2f  (7 octets) ---- */

void __stdcall16far FUN_1150_2a2f(void)

{
  return;
}



/* ---- FUN_1150_2a36 @ 1150:2a36  (144 octets) ---- */

undefined4 __cdecl16near FUN_1150_2a36(void)

{
  int iVar1;
  undefined2 unaff_SS;
  undefined4 uVar2;
  int local_10;
  int local_e;
  undefined local_c;
  int local_8;
  int local_6;
  undefined2 local_4;
  
  iVar1 = 0;
  local_8 = 0;
  while ((local_8 < 8 && (iVar1 = *(int *)(local_8 * 4 + 0x17d6), iVar1 != DAT_1160_1878))) {
    local_8 = local_8 + 1;
  }
  if (local_8 < 8) {
    uVar2 = FUN_1150_2923(0xac,0x1150,CONCAT11((char)((uint)iVar1 >> 8),1),
                          *(undefined2 *)(local_8 * 4 + 0x17d8));
  }
  else {
    local_e = DAT_1160_1878 >> 0xf;
    local_10 = DAT_1160_1878;
    local_c = 0;
    uVar2 = FUN_1150_296a(0xac,0x1150,CONCAT11((char)((uint)DAT_1160_1878 >> 8),1),0,&local_10,
                          unaff_SS,0xff88);
  }
  local_4 = (undefined2)((ulong)uVar2 >> 0x10);
  local_6 = (int)uVar2;
  *(int *)(local_6 + 0xc) = DAT_1160_1878;
  DAT_1160_1878 = 0;
  return uVar2;
}



/* ---- FUN_1150_2c51 @ 1150:2c51  (32 octets) ---- */

void __stdcall16far
FUN_1150_2c51(undefined2 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4)

{
  FUN_1150_2700(param_1,param_2,param_3,param_4);
  FUN_1158_0093(0x1150);
  return;
}



/* ---- FUN_1150_2c81 @ 1150:2c81  (553 octets) ---- */

undefined2 __cdecl16far
FUN_1150_2c81(undefined2 param_1_00,uint param_1,undefined2 param_3_00,int param_2,
             undefined2 param_3)

{
  char cVar1;
  undefined2 uVar2;
  undefined2 in_AX;
  int iVar3;
  undefined uVar4;
  undefined2 in_CX;
  undefined2 in_DX;
  undefined2 unaff_SS;
  undefined4 uVar5;
  undefined2 uVar6;
  char *local_170;
  char *local_168;
  char local_158 [256];
  undefined4 local_58;
  int local_54;
  undefined2 local_52;
  char local_50 [46];
  undefined2 uStack_22;
  undefined2 uStack_20;
  int iStack_1e;
  undefined2 uStack_1c;
  uint uStack_1a;
  
  if ((param_1 & 0x8000) == 0) {
    uStack_1a = 0x2c95;
    iVar3 = GETCURRENTTASK();
    if ((iVar3 != 0) && (iVar3 == *(int *)&DAT_1160_17f6)) {
      if (0xe < param_1) {
        return in_CX;
      }
      if (*(char *)0x1712 == '\0') {
        if (param_1 == 1) {
          return in_CX;
        }
        if (param_1 == 3) {
          return in_CX;
        }
      }
      uVar4 = (undefined)(param_1 >> 8);
      uStack_1a = CONCAT11(uVar4,*(undefined *)(ulong)((param_1 & 0xff) + 0x2c71));
      if (uStack_1a != 0) {
        if (*(int *)0x170e == 0 && *(int *)0x1710 == 0) {
          if (*(int *)0x17fc == 0) {
            *(int *)0x17fc = *(int *)0x17fc + 1;
            LOCK();
            UNLOCK();
            *(int *)0x17fc = *(int *)0x17fc + -1;
            if (uStack_1a == 1) {
              uVar5 = CONCAT22(*(undefined2 *)&DAT_1160_2ea2,*(undefined2 *)&DAT_1160_2ea0);
            }
            else if ((uStack_1a == 2) || ((3 < (int)uStack_1a && ((int)uStack_1a < 0xb)))) {
              uVar5 = *(undefined4 *)(uStack_1a * 6 + 0x17f2);
              uVar5 = FUN_1150_2923((int)uVar5,(int)((ulong)uVar5 >> 0x10),CONCAT11(uVar4,1),
                                    ((undefined2 *)&DAT_1160_17f6)[uStack_1a * 3]);
            }
            else if ((uStack_1a == 3) || ((10 < (int)uStack_1a && ((int)uStack_1a < 0x11)))) {
              local_58 = (undefined4 *)CONCAT22(in_AX,(undefined4 *)(uStack_1a * 6 + 0x17f2));
              local_52 = param_3;
              local_54 = param_2 + 1;
              FUN_1150_2678(&local_52,unaff_SS,local_50,unaff_SS);
              uVar2 = (undefined2)((ulong)local_58 >> 0x10);
              if (local_50[0] == '\0') {
                uVar6 = 0xffa2;
                FUN_1150_092b(*(undefined2 *)((undefined4 *)local_58 + 1));
                local_168 = local_158;
                uVar5 = FUN_1150_296a((int)*local_58,(int)((ulong)*local_58 >> 0x10),1,1,&local_168,
                                      unaff_SS,uVar6);
              }
              else {
                uVar6 = 0xffa1;
                FUN_1150_092b(*(undefined2 *)((undefined4 *)local_58 + 1));
                local_170 = local_158;
                local_168 = local_50;
                uVar5 = FUN_1150_296a((int)*local_58,(int)((ulong)*local_58 >> 0x10),1,2,&local_170,
                                      unaff_SS,uVar6);
              }
            }
            else {
              uVar5 = FUN_1150_2a36();
            }
            uVar2 = FUN_1158_1399(param_3,uVar5);
            return uVar2;
          }
        }
        else {
          uStack_1a = param_1;
          uStack_1c = param_3;
          iStack_1e = param_2;
          uStack_20 = 0x1150;
          uStack_22 = 0x2cd9;
          cVar1 = (*(code *)*(undefined2 *)0x170e)();
          if (cVar1 != '\0') {
            if (cVar1 == '\x01') {
              return in_DX;
            }
            return in_CX;
          }
        }
        uStack_1a = *(undefined2 *)&DAT_1160_17f6;
        uStack_1c = 1;
        iStack_1e = 0x1150;
        uStack_20 = 0x2d19;
        TERMINATEAPP();
        return in_DX;
      }
    }
    *(int *)0x17fc = *(int *)0x17fc + -1;
  }
  return in_CX;
}



/* ---- FUN_1150_2d24 @ 1150:2d24  (24 octets) ---- */

void FUN_1150_2d24(undefined param_1)

{
  int iVar1;
  
  iVar1 = (int)((ulong)DAT_1160_0024 >> 0x10);
  if (iVar1 != 0 || (int)DAT_1160_0024 != 0) {
    *(undefined *)((int)DAT_1160_0024 + 0x2e) = param_1;
  }
  return;
}



/* ---- FUN_1150_2d3c @ 1150:2d3c  (123 octets) ---- */

void __stdcall16far FUN_1150_2d3c(char param_1)

{
  undefined2 unaff_CS;
  undefined4 uVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  
  if (DAT_1160_1876 != 0) {
    if ((param_1 == '\0') || (DAT_1160_17f8 != 0 || DAT_1160_17fa != 0)) {
      if ((param_1 == '\0') && (DAT_1160_17f8 != 0 || DAT_1160_17fa != 0)) {
        FUN_1150_2d24(0);
        INTERRUPTUNREGISTER();
        FREEPROCINSTANCE(0x14d0,DAT_1160_17f8);
        DAT_1160_17f8 = 0;
        DAT_1160_17fa = 0;
      }
    }
    else {
      uVar3 = 0x1150;
      uVar1 = MAKEPROCINSTANCE(unaff_CS,DAT_1160_188c,0x2c81);
      DAT_1160_17fa = (int)((ulong)uVar1 >> 0x10);
      DAT_1160_17f8 = (int)uVar1;
      uVar2 = 0;
      INTERRUPTREGISTER(0x14d0,uVar1);
      FUN_1150_2d24(1,uVar2,uVar3);
    }
  }
  return;
}



/* ---- FUN_1150_2db7 @ 1150:2db7  (26 octets) ---- */

void __cdecl16far FUN_1150_2db7(void)

{
  FUN_1150_2d3c(0);
  DAT_1160_186c = DAT_1160_2ea4;
  DAT_1160_186e = DAT_1160_2ea6;
  return;
}



/* ---- FUN_1150_2dd1 @ 1150:2dd1  (111 octets) ---- */

void __cdecl16near FUN_1150_2dd1(void)

{
  undefined4 uVar1;
  
  DAT_1160_17f6 = GETCURRENTTASK();
  uVar1 = FUN_1150_2923(0x7f,0x1150,1,0xff87);
  DAT_1160_2ea2 = (undefined2)((ulong)uVar1 >> 0x10);
  DAT_1160_2ea0 = (undefined2)uVar1;
  DAT_1160_1860 = (undefined4 *)&DAT_1160_2ac6;
  DAT_1160_1862 = 0x1150;
  DAT_1160_185c = 0x2c51;
  DAT_1160_185e = 0x1150;
  DAT_1160_1864 = 0x2e;
  DAT_1160_1866 = 0x1150;
  DAT_1160_2ea4 = DAT_1160_186c;
  DAT_1160_2ea6 = DAT_1160_186e;
  DAT_1160_186c = 0x2db7;
  DAT_1160_186e = 0x1150;
  FUN_1150_2d3c(1);
  return;
}



/* ---- FUN_1150_2e40 @ 1150:2e40  (16 octets) ---- */

void __cdecl16far FUN_1150_2e40(void)

{
  FUN_1150_2dd1();
  FUN_1150_2320();
  FUN_1150_241b();
  return;
}



/* ---- FUN_1150_2e50 @ 1150:2e50  (181 octets) ---- */

int __stdcall16far FUN_1150_2e50(void)

{
  char *pcVar1;
  char *pcVar2;
  undefined2 uVar3;
  char cVar4;
  char cVar5;
  char *pcVar6;
  char *extraout_DX;
  char *extraout_DX_00;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  char *pcVar11;
  char *pcVar12;
  undefined2 uVar13;
  undefined2 uVar14;
  bool bVar15;
  char *param_1;
  char *param_2;
  char *param_3;
  char *param_4;
  
  uVar13 = (undefined2)((ulong)param_4 >> 0x10);
  pcVar11 = (char *)param_2;
  pcVar12 = (char *)param_4;
  uVar3 = (int)((ulong)param_2 >> 0x10);
  while (uVar14 = uVar3, param_3 != (char *)0x0) {
    while( true ) {
      if (param_1 == (char *)0x0) goto LAB_1150_2e7b;
      pcVar1 = pcVar11;
      pcVar11 = pcVar11 + 1;
      cVar4 = *pcVar1;
      param_1 = param_1 + -1;
      pcVar7 = param_1;
      pcVar6 = pcVar11;
      if (cVar4 == '%') break;
LAB_1150_2e77:
      pcVar1 = pcVar12;
      pcVar12 = pcVar12 + 1;
      *pcVar1 = cVar4;
      param_3 = param_3 + -1;
      if (param_3 == (char *)0x0) goto LAB_1150_2e7b;
    }
    do {
      if (pcVar7 == (char *)0x0) goto LAB_1150_2e7b;
      pcVar11 = pcVar6 + 1;
      cVar4 = *pcVar6;
      param_1 = pcVar7 + -1;
      if (cVar4 == '%') goto LAB_1150_2e77;
      pcVar9 = pcVar6 + -1;
      if (cVar4 == '-') {
        if (param_1 == (char *)0x0) goto LAB_1150_2e7b;
        pcVar11 = pcVar6 + 2;
        param_1 = pcVar7 + -2;
      }
      cVar5 = FUN_1150_2f05();
      pcVar7 = param_1;
      param_3 = extraout_DX;
      pcVar6 = pcVar11;
    } while (cVar5 == ':');
    pcVar7 = extraout_DX;
    if (cVar5 == '.') {
      if (param_1 == (char *)0x0) break;
      pcVar11 = pcVar11 + 1;
      param_1 = param_1 + -1;
      FUN_1150_2f05();
      pcVar7 = extraout_DX_00;
    }
    param_2 = (char *)CONCAT22(param_2._2_2_,pcVar11);
    pcVar6 = param_1;
    FUN_1150_2f56();
    pcVar10 = pcVar9 + -(int)pcVar6;
    if (pcVar9 < pcVar6) {
      pcVar10 = (char *)0x0;
    }
    pcVar9 = pcVar11;
    if (cVar4 == '-') {
      bVar15 = pcVar7 < pcVar6;
      pcVar7 = pcVar7 + -(int)pcVar6;
      if (bVar15) {
        pcVar6 = pcVar6 + (int)pcVar7;
        pcVar7 = (char *)0x0;
      }
      for (; pcVar6 != (char *)0x0; pcVar6 = pcVar6 + -1) {
        pcVar2 = pcVar12;
        pcVar12 = pcVar12 + 1;
        pcVar1 = pcVar9;
        pcVar9 = pcVar9 + 1;
        *pcVar2 = *pcVar1;
      }
    }
    pcVar8 = pcVar7 + -(int)pcVar10;
    if (pcVar7 < pcVar10) {
      pcVar10 = pcVar10 + (int)pcVar8;
      pcVar8 = (char *)0x0;
    }
    for (; pcVar10 != (char *)0x0; pcVar10 = pcVar10 + -1) {
      pcVar1 = pcVar12;
      pcVar12 = pcVar12 + 1;
      *pcVar1 = ' ';
    }
    param_3 = pcVar8 + -(int)pcVar6;
    if (pcVar8 < pcVar6) {
      pcVar6 = pcVar6 + (int)param_3;
      param_3 = (char *)0x0;
    }
    for (; uVar3 = param_2._2_2_, pcVar6 != (char *)0x0; pcVar6 = pcVar6 + -1) {
      pcVar2 = pcVar12;
      pcVar12 = pcVar12 + 1;
      pcVar1 = pcVar9;
      pcVar9 = pcVar9 + 1;
      *pcVar2 = *pcVar1;
    }
  }
LAB_1150_2e7b:
  return (int)pcVar12 - (int)(char *)param_4;
}



/* ---- FUN_1150_2f05 @ 1150:2f05  (81 octets) ---- */

uint __cdecl16near FUN_1150_2f05(void)

{
  byte *pbVar1;
  uint in_AX;
  uint uVar2;
  int in_CX;
  int unaff_BP;
  byte *unaff_SI;
  int unaff_DI;
  undefined2 unaff_SS;
  
  if ((char)in_AX == '*') {
    uVar2 = *(uint *)(unaff_BP + -4);
    if (uVar2 <= *(uint *)(unaff_BP + 6)) {
      *(int *)(unaff_BP + -4) = *(int *)(unaff_BP + -4) + 1;
      uVar2 = uVar2 * 8;
    }
    if (in_CX == 0) {
LAB_1150_2e7b:
      return unaff_DI - *(int *)(unaff_BP + 0x14);
    }
    in_AX = CONCAT11((char)(uVar2 >> 8),*unaff_SI);
  }
  else {
    while ((0x2f < (byte)in_AX && ((byte)in_AX < 0x3a))) {
      if (in_CX == 0) goto LAB_1150_2e7b;
      pbVar1 = unaff_SI;
      unaff_SI = unaff_SI + 1;
      in_CX = in_CX + -1;
      in_AX = (uint)*pbVar1;
    }
  }
  return in_AX;
}



/* ---- FUN_1150_2f56 @ 1150:2f56  (109 octets) ---- */

void __cdecl16near FUN_1150_2f56(void)

{
  undefined2 uVar1;
  ulong uVar2;
  byte in_AL;
  undefined2 uVar3;
  uint uVar4;
  int iVar5;
  char cVar6;
  uint uVar7;
  byte bVar8;
  uint uVar9;
  int unaff_BP;
  int unaff_SI;
  byte *pbVar10;
  undefined2 unaff_SS;
  ulong uVar11;
  
  uVar4 = (uint)(in_AL & 0xdf);
  uVar3 = 1;
  uVar7 = *(uint *)(unaff_BP + -4);
  if (uVar7 <= *(uint *)(unaff_BP + 6)) {
    *(int *)(unaff_BP + -4) = *(int *)(unaff_BP + -4) + 1;
                    /* WARNING: Could not recover jumptable at 0x11502f7f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)*(undefined2 *)
               ((uint)*(byte *)((int)*(undefined4 *)(unaff_BP + 8) + uVar7 * 8 + 4) * 2 + 0x2f84))()
    ;
    return;
  }
  do {
    uVar1 = *(undefined2 *)(unaff_BP + -2);
    uVar11 = FUN_1150_0f47(*(int *)(unaff_BP + 0xe) - *(int *)(unaff_BP + -0xc),
                           *(undefined2 *)(unaff_BP + -0xc),*(undefined2 *)(unaff_BP + 0x10),uVar3);
    cVar6 = (char)uVar4;
    if (cVar6 == 'D') {
      if ((long)uVar11 < 0) {
        FUN_1150_2fd5();
        *(undefined *)(unaff_SI + -1) = 0x2d;
        return;
      }
code_r0x11502fd5:
      uVar7 = 10;
LAB_1150_2fd8:
      pbVar10 = (byte *)(unaff_BP + -0x24);
      do {
        uVar9 = (uint)(uVar11 >> 0x10);
        uVar4 = uVar9 / uVar7;
        uVar2 = (ulong)uVar9 % (ulong)uVar7 << 0x10 | uVar11 & 0xffff;
        iVar5 = (int)(uVar2 / uVar7);
        uVar11 = CONCAT22(uVar4,iVar5);
        cVar6 = (char)(uVar2 % (ulong)uVar7);
        bVar8 = cVar6 + 0x30;
        if (0x39 < bVar8) {
          bVar8 = cVar6 + 0x37;
        }
        pbVar10 = pbVar10 + -1;
        *pbVar10 = bVar8;
      } while (iVar5 != 0 || uVar4 != 0);
      uVar4 = (unaff_BP + -0x24) - (int)pbVar10;
      uVar7 = *(uint *)(unaff_BP + -8);
      if (uVar7 < 0x10) {
        iVar5 = uVar7 - uVar4;
        if (uVar4 <= uVar7 && iVar5 != 0) {
          do {
            pbVar10 = pbVar10 + -1;
            *pbVar10 = 0x30;
            iVar5 = iVar5 + -1;
          } while (iVar5 != 0);
        }
        return;
      }
      return;
    }
    if (cVar6 == 'U') goto code_r0x11502fd5;
    if (cVar6 == 'X') {
      uVar7 = 0x10;
      goto LAB_1150_2fd8;
    }
    uVar3 = 0;
  } while( true );
}



/* ---- FUN_1150_2fd5 @ 1150:2fd5  (69 octets) ---- */

void __cdecl16near FUN_1150_2fd5(void)

{
  uint uVar1;
  ulong uVar2;
  uint in_AX;
  uint uVar3;
  byte bVar4;
  uint in_DX;
  int iVar6;
  int unaff_BP;
  byte *pbVar7;
  undefined2 unaff_SS;
  char cVar5;
  
  pbVar7 = (byte *)(unaff_BP + -0x24);
  do {
    uVar2 = (ulong)in_DX;
    in_DX = in_DX / 10;
    uVar2 = uVar2 % 10 << 0x10 | (ulong)in_AX;
    in_AX = (uint)(uVar2 / 10);
    cVar5 = (char)(uVar2 % 10);
    bVar4 = cVar5 + 0x30;
    if (0x39 < bVar4) {
      bVar4 = cVar5 + 0x37;
    }
    pbVar7 = pbVar7 + -1;
    *pbVar7 = bVar4;
  } while (in_AX != 0 || in_DX != 0);
  uVar3 = (unaff_BP + -0x24) - (int)pbVar7;
  uVar1 = *(uint *)(unaff_BP + -8);
  if (uVar1 < 0x10) {
    iVar6 = uVar1 - uVar3;
    if (uVar3 <= uVar1 && iVar6 != 0) {
      do {
        pbVar7 = pbVar7 + -1;
        *pbVar7 = 0x30;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
    return;
  }
  return;
}



/* ---- FUN_1150_31a0 @ 1150:31a0  (168 octets) ---- */

int __stdcall16far
FUN_1150_31a0(undefined2 param_1,int param_2,byte param_3,undefined2 param_4,undefined2 param_5,
             undefined2 param_6,undefined2 param_7,undefined2 param_8,undefined *param_9)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined2 uVar3;
  int iVar4;
  uint uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined2 unaff_CS;
  undefined2 unaff_SS;
  int local_1e [11];
  undefined2 local_8;
  undefined2 local_6;
  undefined2 local_4;
  
  local_4 = 0x1160;
  local_6 = DAT_1160_2c60;
  local_8 = DAT_1160_2c62;
  if (param_2 < 2) {
    param_2 = 2;
  }
  if (0x12 < param_2) {
    param_2 = 0x12;
  }
  uVar3 = 9999;
  if (1 < param_3) {
    uVar3 = param_1;
  }
  FUN_1150_36ca(uVar3,param_2,param_4,param_5,param_6,param_7,param_8,local_1e,unaff_SS);
  puVar7 = (undefined *)param_9;
  puVar8 = puVar7;
  if (local_1e[0] + 0x8001U < 2) {
    puVar6 = (undefined *)(local_1e[0] + -0x4e65 + (local_1e[0] + 0x8001U) * 2);
    for (iVar4 = 3; iVar4 != 0; iVar4 = iVar4 + -1) {
      puVar2 = puVar8;
      puVar8 = puVar8 + 1;
      puVar1 = puVar6;
      puVar6 = puVar6 + 1;
      *puVar2 = *puVar1;
    }
  }
  else {
    uVar5 = (uint)param_3;
    if ((param_3 != 1) && ((4 < param_3 || (param_2 < local_1e[0])))) {
      uVar5 = 0;
    }
    (*(code *)*(undefined2 *)(uVar5 * 2 + 0x3248))(0x1160);
  }
  return (int)puVar8 - (int)puVar7;
}



/* ---- FUN_1150_325b @ 1150:325b  (10 octets) ---- */

void __cdecl16near FUN_1150_325b(void)

{
  int unaff_BP;
  undefined *unaff_DI;
  undefined2 unaff_ES;
  undefined2 unaff_SS;
  
  if (*(char *)(unaff_BP + -0x1a) != '\0') {
    *unaff_DI = 0x2d;
  }
  return;
}



/* ---- FUN_1150_3265 @ 1150:3265  (97 octets) ---- */

/* WARNING: Removing unreachable block (ram,0x115032fe) */

void __cdecl16near FUN_1150_3265(void)

{
  char *pcVar1;
  char *pcVar2;
  char cVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  char *pcVar8;
  int unaff_BP;
  char *unaff_SI;
  char *unaff_DI;
  char *pcVar9;
  undefined2 unaff_ES;
  undefined2 unaff_SS;
  char acStack_4 [2];
  undefined2 uStack_2;
  
  uStack_2 = 0x3268;
  FUN_1150_325b();
  iVar6 = *(int *)(unaff_BP + -0x1c);
  bVar4 = false;
  if ((*(int *)(unaff_BP + 8) < iVar6) || (iVar6 < -3)) {
    iVar6 = 1;
    bVar4 = true;
LAB_1150_3293:
    do {
      pcVar9 = unaff_DI;
      pcVar8 = unaff_SI;
      if (*pcVar8 == '\0') goto code_r0x115032b0;
      unaff_DI = pcVar9 + 1;
      *pcVar9 = *pcVar8;
      iVar6 = iVar6 + -1;
      unaff_SI = pcVar8 + 1;
    } while (iVar6 != 0);
    unaff_SI = pcVar8 + 2;
    cVar3 = pcVar8[1];
    if (cVar3 == '\0') goto LAB_1150_32b2;
    pcVar9 = pcVar9 + 3;
    *(uint *)unaff_DI = CONCAT11(cVar3,*(undefined *)(unaff_BP + -5));
  }
  else {
    if (0 < iVar6) goto LAB_1150_3293;
    pcVar9 = unaff_DI + 1;
    *unaff_DI = '0';
    if (*unaff_SI == '\0') {
      return;
    }
    *pcVar9 = *(char *)(unaff_BP + -5);
    for (iVar6 = -iVar6; pcVar9 = pcVar9 + 1, iVar6 != 0; iVar6 = iVar6 + -1) {
      *pcVar9 = '0';
    }
  }
  while( true ) {
    pcVar1 = unaff_SI;
    unaff_SI = unaff_SI + 1;
    unaff_DI = pcVar9;
    if (*pcVar1 == '\0') break;
    pcVar2 = pcVar9;
    pcVar9 = pcVar9 + 1;
    *pcVar2 = *pcVar1;
  }
LAB_1150_32b2:
  if (!bVar4) {
    return;
  }
  iVar6 = 0;
  cVar3 = *(char *)(unaff_BP + -0x19);
  uVar7 = *(int *)(unaff_BP + -0x1c) - 1;
  pcVar9 = unaff_DI + 1;
  *unaff_DI = 'E';
  if (cVar3 == '\0') {
    uVar7 = 0;
  }
  else if ((int)uVar7 < 0) {
    uVar7 = -uVar7;
    pcVar1 = pcVar9;
    pcVar9 = unaff_DI + 2;
    *pcVar1 = '-';
  }
  pcVar8 = acStack_4;
  do {
    do {
      uVar5 = uVar7 / 10;
      *pcVar8 = (char)(uVar7 % 10) + '0';
      pcVar8 = pcVar8 + 1;
      iVar6 = iVar6 + -1;
      uVar7 = uVar5;
    } while (uVar5 != 0);
  } while (0 < iVar6);
  do {
    pcVar8 = pcVar8 + -1;
    pcVar1 = pcVar9;
    pcVar9 = pcVar9 + 1;
    *pcVar1 = *pcVar8;
  } while (pcVar8 != acStack_4);
  return;
code_r0x115032b0:
  for (; unaff_DI = pcVar9, iVar6 != 0; iVar6 = iVar6 + -1) {
    pcVar1 = pcVar9;
    pcVar9 = pcVar9 + 1;
    *pcVar1 = '0';
  }
  goto LAB_1150_32b2;
}



/* ---- FUN_1150_32e7 @ 1150:32e7  (68 octets) ---- */

void __cdecl16near FUN_1150_32e7(void)

{
  char *pcVar1;
  undefined2 in_AX;
  char cVar3;
  uint uVar2;
  int in_CX;
  uint in_DX;
  char in_BL;
  char *pcVar4;
  undefined *unaff_DI;
  char *pcVar5;
  undefined2 unaff_ES;
  undefined2 unaff_SS;
  char acStack_4 [4];
  
  pcVar5 = unaff_DI + 1;
  *unaff_DI = (char)in_AX;
  cVar3 = (char)((uint)in_AX >> 8);
  if (in_BL == '\0') {
    in_DX = 0;
LAB_1150_32fa:
    if (cVar3 == '\0') goto LAB_1150_3301;
  }
  else {
    if (-1 < (int)in_DX) goto LAB_1150_32fa;
    cVar3 = '-';
    in_DX = -in_DX;
  }
  pcVar1 = pcVar5;
  pcVar5 = unaff_DI + 2;
  *pcVar1 = cVar3;
LAB_1150_3301:
  pcVar4 = acStack_4;
  do {
    do {
      uVar2 = in_DX / 10;
      *pcVar4 = (char)(in_DX % 10) + '0';
      pcVar4 = pcVar4 + 1;
      in_CX = in_CX + -1;
      in_DX = uVar2;
    } while (uVar2 != 0);
  } while (0 < in_CX);
  do {
    pcVar4 = pcVar4 + -1;
    pcVar1 = pcVar5;
    pcVar5 = pcVar5 + 1;
    *pcVar1 = *pcVar4;
  } while (pcVar4 != acStack_4);
  return;
}



/* ---- FUN_1150_3419 @ 1150:3419  (184 octets) ---- */

/* WARNING: Removing unreachable block (ram,0x115034c5) */

void __stdcall16far
FUN_1150_3419(undefined2 param_1_00,undefined2 param_2_00,int param_1,int param_2,int param_3,
             int param_4,int param_5,undefined2 param_6,undefined2 param_7)

{
  int iVar1;
  undefined2 unaff_SS;
  bool bVar2;
  int local_2a;
  char local_27;
  int local_c;
  int local_a;
  char local_4;
  
  bVar2 = (((param_1 == 0 && param_2 == 0) && param_3 == 0) && param_4 == 0) && param_5 == 0;
  if ((((param_1 != 0 || param_2 != 0) || param_3 != 0) || param_4 != 0) || param_5 != 0) {
    bVar2 = -1 < param_5;
  }
  FUN_1150_34d1();
  if (!bVar2) {
    FUN_1150_350e();
    iVar1 = 9999;
    if (local_4 == '\0') {
      iVar1 = local_a - local_c;
      local_a = 0x12;
    }
    FUN_1150_36ca(iVar1,local_a,param_1,param_2,param_3,param_4,param_5,&local_2a,unaff_SS);
    if ((((local_2a != -0x8000) && (local_2a != 0x7fff)) && ((local_2a < 0x13 || (local_4 != '\0')))
        ) && ((bVar2 = local_27 == '\0', !bVar2 || (FUN_1150_34d1(), !bVar2)))) {
      FUN_1150_35b5();
      return;
    }
  }
  FUN_1150_31a0(0,0xf,0,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return;
}



/* ---- FUN_1150_34d1 @ 1150:34d1  (61 octets) ---- */

void __cdecl16near FUN_1150_34d1(void)

{
  char *pcVar1;
  char cVar2;
  int in_CX;
  int unaff_BP;
  char *pcVar3;
  undefined2 unaff_SS;
  undefined2 uVar4;
  
  uVar4 = (undefined2)((ulong)*(undefined4 *)(unaff_BP + 6) >> 0x10);
  pcVar3 = (char *)(char *)*(undefined4 *)(unaff_BP + 6);
  if (in_CX != 0) {
    do {
      while( true ) {
        pcVar1 = pcVar3;
        pcVar3 = pcVar3 + 1;
        cVar2 = *pcVar1;
        if ((cVar2 != '\'') && (cVar2 != '\"')) break;
        while( true ) {
          pcVar1 = pcVar3;
          pcVar3 = pcVar3 + 1;
          if (*pcVar1 == cVar2) break;
          if (*pcVar1 == '\0') {
            return;
          }
        }
      }
    } while ((cVar2 != '\0') && ((cVar2 != ';' || (in_CX = in_CX + -1, in_CX != 0))));
  }
  return;
}



/* ---- FUN_1150_350e @ 1150:350e  (167 octets) ---- */

void __cdecl16near FUN_1150_350e(void)

{
  char *pcVar1;
  undefined2 uVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int unaff_BP;
  char *unaff_SI;
  undefined2 unaff_SS;
  
  uVar2 = *(undefined2 *)(unaff_BP + 8);
  *(undefined2 *)(unaff_BP + -6) = unaff_SI;
  iVar6 = 0x7fff;
  iVar5 = 0;
  *(undefined2 *)(unaff_BP + -10) = 0xffff;
  *(undefined2 *)(unaff_BP + -2) = 0;
  iVar4 = 0;
LAB_1150_3524:
  do {
    pcVar1 = unaff_SI;
    unaff_SI = unaff_SI + 1;
    cVar3 = *pcVar1;
    while (cVar3 != '#') {
      if (cVar3 == '0') {
        if (iVar4 < iVar6) {
          iVar6 = iVar4;
        }
        iVar5 = iVar4 + 1;
        iVar4 = iVar5;
        goto LAB_1150_3524;
      }
      if (cVar3 == '.') {
        if (*(int *)(unaff_BP + -10) == -1) {
          *(int *)(unaff_BP + -10) = iVar4;
        }
        goto LAB_1150_3524;
      }
      if (cVar3 == ',') {
        *(undefined *)(unaff_BP + -1) = 1;
        goto LAB_1150_3524;
      }
      if ((cVar3 == '\'') || (cVar3 == '\"')) goto LAB_1150_3570;
      if ((cVar3 != 'E') && (cVar3 != 'e')) {
        if ((cVar3 == ';') || (cVar3 == '\0')) goto LAB_1150_358f;
        goto LAB_1150_3524;
      }
      pcVar1 = unaff_SI;
      unaff_SI = unaff_SI + 1;
      cVar3 = *pcVar1;
      if ((cVar3 == '-') || (cVar3 == '+')) {
        *(undefined *)(unaff_BP + -2) = 1;
        do {
          pcVar1 = unaff_SI;
          unaff_SI = unaff_SI + 1;
          cVar3 = *pcVar1;
        } while (cVar3 == '0');
      }
    }
    iVar4 = iVar4 + 1;
  } while( true );
LAB_1150_3570:
  pcVar1 = unaff_SI;
  unaff_SI = unaff_SI + 1;
  if (*pcVar1 == cVar3) goto LAB_1150_3524;
  if (*pcVar1 == '\0') {
LAB_1150_358f:
    *(int *)(unaff_BP + -8) = iVar4;
    if (*(int *)(unaff_BP + -10) == -1) {
      *(int *)(unaff_BP + -10) = iVar4;
    }
    iVar4 = *(int *)(unaff_BP + -10) - iVar5;
    if (iVar4 != 0 && iVar5 <= *(int *)(unaff_BP + -10)) {
      iVar4 = 0;
    }
    *(int *)(unaff_BP + -0xe) = iVar4;
    iVar4 = *(int *)(unaff_BP + -10) - iVar6;
    if (*(int *)(unaff_BP + -10) < iVar6) {
      iVar4 = 0;
    }
    *(int *)(unaff_BP + -0xc) = iVar4;
    return;
  }
  goto LAB_1150_3570;
}



/* ---- FUN_1150_35b5 @ 1150:35b5  (181 octets) ---- */

int __cdecl16near FUN_1150_35b5(void)

{
  char cVar1;
  char cVar2;
  undefined2 uVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  int unaff_BP;
  char *pcVar7;
  char *pcVar8;
  undefined2 uVar9;
  undefined2 unaff_SS;
  undefined2 uVar10;
  
  uVar10 = 0x1160;
  if (*(char *)(unaff_BP + -2) == '\0') {
    iVar5 = *(int *)(unaff_BP + -0x28);
    if (iVar5 <= *(int *)(unaff_BP + -10)) {
      iVar5 = *(int *)(unaff_BP + -10);
    }
    iVar6 = *(int *)(unaff_BP + -0x28) - *(int *)(unaff_BP + -10);
  }
  else {
    iVar5 = *(int *)(unaff_BP + -10);
    iVar6 = 0;
  }
  *(int *)(unaff_BP + -0x10) = iVar5;
  *(int *)(unaff_BP + -0x12) = iVar6;
  uVar3 = *(undefined2 *)(unaff_BP + 8);
  pcVar7 = (char *)*(undefined2 *)(unaff_BP + -6);
  pcVar4 = (char *)*(undefined4 *)(unaff_BP + 0x14);
  uVar9 = (undefined2)((ulong)pcVar4 >> 0x10);
  pcVar8 = (char *)pcVar4;
  iVar5 = unaff_BP + -0x25;
  if ((*(char *)(unaff_BP + -0x26) != '\0') && (pcVar7 == (char *)*(undefined2 *)(unaff_BP + 6))) {
    pcVar8 = pcVar8 + 1;
    *pcVar4 = '-';
  }
LAB_1150_35f4:
  do {
    while( true ) {
      do {
        while( true ) {
          pcVar4 = pcVar7;
          pcVar7 = pcVar7 + 1;
          cVar1 = *pcVar4;
          if ((cVar1 != '#') && (cVar1 != '0')) break;
          FUN_1150_366a(uVar10);
        }
      } while ((cVar1 == '.') || (cVar1 == ','));
      if ((cVar1 != '\'') && (cVar1 != '\"')) break;
      while( true ) {
        pcVar4 = pcVar7;
        pcVar7 = pcVar7 + 1;
        cVar2 = *pcVar4;
        if (cVar2 == cVar1) break;
        if (cVar2 == '\0') goto LAB_1150_3663;
        pcVar4 = pcVar8;
        pcVar8 = pcVar8 + 1;
        *pcVar4 = cVar2;
      }
    }
    if ((cVar1 == 'E') || (cVar1 == 'e')) {
      if ((*pcVar7 == '+') || (*pcVar7 == '-')) break;
    }
    else if ((cVar1 == ';') || (cVar1 == '\0')) {
LAB_1150_3663:
      return (int)pcVar8 - *(int *)(unaff_BP + 0x14);
    }
    pcVar4 = pcVar8;
    pcVar8 = pcVar8 + 1;
    *pcVar4 = cVar1;
  } while( true );
  do {
    pcVar7 = pcVar7 + 1;
  } while (*pcVar7 == '0');
  FUN_1150_32e7(iVar5);
  goto LAB_1150_35f4;
}



/* ---- FUN_1150_366a @ 1150:366a  (31 octets) ---- */

void FUN_1150_366a(void)

{
  int *piVar1;
  char cVar2;
  char *in_BX;
  int unaff_BP;
  char *unaff_DI;
  undefined2 unaff_ES;
  undefined2 unaff_SS;
  
  if (*(int *)(unaff_BP + -0x12) == 0) {
    cVar2 = *in_BX;
    if (cVar2 == '\0') {
      if (*(int *)(unaff_BP + -0x10) <= *(int *)(unaff_BP + -0xe)) goto LAB_1150_36c6;
      goto LAB_1150_369a;
    }
  }
  else {
    if (-1 < *(int *)(unaff_BP + -0x12)) {
      do {
        FUN_1150_3689();
        piVar1 = (int *)(unaff_BP + -0x12);
        *piVar1 = *piVar1 + -1;
      } while (*piVar1 != 0);
      FUN_1150_3689();
      return;
    }
    *(int *)(unaff_BP + -0x12) = *(int *)(unaff_BP + -0x12) + 1;
    if (*(int *)(unaff_BP + -0xc) < *(int *)(unaff_BP + -0x10)) goto LAB_1150_36c6;
LAB_1150_369a:
    cVar2 = '0';
  }
  if (*(int *)(unaff_BP + -0x10) == 0) {
    *(uint *)unaff_DI = CONCAT11(cVar2,*(undefined *)(unaff_BP + -3));
  }
  else {
    *unaff_DI = cVar2;
    if (((*(char *)(unaff_BP + -1) != '\0') && (1 < (int)*(uint *)(unaff_BP + -0x10))) &&
       ((char)(*(uint *)(unaff_BP + -0x10) % 3) == '\x01')) {
      unaff_DI[1] = *(char *)(unaff_BP + -4);
    }
  }
LAB_1150_36c6:
  *(int *)(unaff_BP + -0x10) = *(int *)(unaff_BP + -0x10) + -1;
  return;
}



/* ---- FUN_1150_3689 @ 1150:3689  (65 octets) ---- */

void __cdecl16near FUN_1150_3689(void)

{
  char cVar1;
  char *in_BX;
  int unaff_BP;
  char *unaff_DI;
  undefined2 unaff_ES;
  undefined2 unaff_SS;
  
  cVar1 = *in_BX;
  if (cVar1 == '\0') {
    if (*(int *)(unaff_BP + -0x10) <= *(int *)(unaff_BP + -0xe)) goto LAB_1150_36c6;
    cVar1 = '0';
  }
  if (*(int *)(unaff_BP + -0x10) == 0) {
    *(uint *)unaff_DI = CONCAT11(cVar1,*(undefined *)(unaff_BP + -3));
  }
  else {
    *unaff_DI = cVar1;
    if (((*(char *)(unaff_BP + -1) != '\0') && (1 < (int)*(uint *)(unaff_BP + -0x10))) &&
       ((char)(*(uint *)(unaff_BP + -0x10) % 3) == '\x01')) {
      unaff_DI[1] = *(char *)(unaff_BP + -4);
    }
  }
LAB_1150_36c6:
  *(int *)(unaff_BP + -0x10) = *(int *)(unaff_BP + -0x10) + -1;
  return;
}



/* ---- FUN_1150_36ca @ 1150:36ca  (286 octets) ---- */

/* WARNING: Removing unreachable block (ram,0x1150374c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __stdcall16far
FUN_1150_36ca(int param_1,uint param_2,undefined6 param_3,int param_4_00,uint param_5,uint *param_4)

{
  char *pcVar1;
  int *piVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  uint *puVar6;
  int *piVar7;
  undefined2 uVar8;
  undefined2 unaff_SS;
  longdouble lVar9;
  undefined2 uStack_16;
  unkbyte10 local_14;
  uint local_a;
  uint local_8;
  uint local_6;
  
  uVar8 = (undefined2)((ulong)param_4 >> 0x10);
  puVar6 = (uint *)param_4;
  local_a = param_5;
  local_8 = param_5 & 0x7fff;
  if (local_8 == 0) {
LAB_1150_36f7:
    local_a = 0;
  }
  else {
    if (local_8 != 0x7fff) {
      lVar9 = (longdouble)CONCAT28(local_8,CONCAT26(param_4_00,param_3));
      local_8 = (int)((ulong)((long)(int)(local_8 + 0xc001) * 0x4d10) >> 0x10) + 1;
      uStack_16 = 0x371c;
      FUN_1150_38d5();
      lVar9 = ROUND(lVar9);
      local_6 = (uint)(_DAT_1150_3184 < lVar9) << 8 |
                (uint)(NAN(_DAT_1150_3184) || NAN(lVar9)) << 10 |
                (uint)(_DAT_1150_3184 == lVar9) << 0xe;
      if (_DAT_1150_3184 < lVar9 || (_DAT_1150_3184 == lVar9) != 0) {
        lVar9 = lVar9 / (longdouble)10;
        local_8 = local_8 + 1;
      }
      piVar7 = (int *)((int)puVar6 + 3);
      local_14 = to_bcd(lVar9);
      iVar5 = 9;
      do {
        bVar3 = *(byte *)((int)&uStack_16 + iVar5 + 1);
        piVar2 = piVar7;
        piVar7 = piVar7 + 1;
        *piVar2 = (CONCAT11(bVar3,bVar3 >> 4) & 0xfff) + 0x3030;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
      *(undefined *)piVar7 = 0;
                    /* WARNING: Read-only address (ram,0x11503184) is written */
      uVar4 = param_1 + local_8;
      if (-1 < (int)uVar4) {
        if (param_2 <= uVar4) {
          uVar4 = param_2;
        }
        if (uVar4 < 0x12) {
          if (0x34 < *(byte *)((int)puVar6 + uVar4 + 3)) {
            do {
              *(undefined *)((int)puVar6 + uVar4 + 3) = 0;
              if ((int)(uVar4 - 1) < 0) {
                *(undefined2 *)((int)puVar6 + 3) = 0x31;
                local_8 = local_8 + 1;
                break;
              }
              pcVar1 = (char *)((int)puVar6 + uVar4 + 2);
              *pcVar1 = *pcVar1 + '\x01';
              iVar5 = uVar4 + 2;
              uVar4 = uVar4 - 1;
            } while (0x39 < *(byte *)((int)puVar6 + iVar5));
            goto LAB_1150_37cd;
          }
        }
        else {
          uVar4 = 0x12;
        }
        do {
          *(undefined *)((int)puVar6 + uVar4 + 3) = 0;
          if ((int)(uVar4 - 1) < 0) goto LAB_1150_377b;
          iVar5 = uVar4 + 2;
          uVar4 = uVar4 - 1;
        } while (*(char *)((int)puVar6 + iVar5) == '0');
        goto LAB_1150_37cd;
      }
LAB_1150_377b:
      local_8 = 0;
      goto LAB_1150_36f7;
    }
    if (param_4_00 != -0x8000) {
      local_8 = 0x8000;
      goto LAB_1150_36f7;
    }
  }
  *(undefined *)((int)puVar6 + 3) = 0;
LAB_1150_37cd:
  *param_4 = local_8;
  *(bool *)(puVar6 + 1) = CARRY2(local_a,local_a);
  return;
}



/* ---- FUN_1150_37e9 @ 1150:37e9  (153 octets) ---- */

undefined2 __stdcall16far FUN_1150_37e9(longdouble *param_1,byte *param_2)

{
  byte bVar1;
  undefined extraout_AH;
  byte bVar2;
  byte *extraout_DX;
  byte *extraout_DX_00;
  byte *pbVar3;
  int iVar4;
  byte *pbVar5;
  undefined2 uVar6;
  uint uVar7;
  longdouble lVar8;
  undefined2 uVar9;
  
  uVar7 = 0;
  lVar8 = (longdouble)0;
  uVar9 = 0x1160;
  uVar6 = (undefined2)((ulong)param_2 >> 0x10);
  pbVar5 = (byte *)param_2;
  bVar2 = DAT_1160_2c62._1_1_;
  FUN_1150_3882(0x1160);
  bVar1 = *param_2;
  if ((bVar1 == 0x2b) || (bVar1 == 0x2d)) {
    pbVar5 = pbVar5 + 1;
  }
  FUN_1150_3889();
  iVar4 = 0;
  pbVar3 = extraout_DX;
  if (bVar2 == *pbVar5) {
    pbVar5 = pbVar5 + 1;
    FUN_1150_3889();
    iVar4 = -iVar4;
    pbVar3 = extraout_DX_00;
  }
  if (pbVar5 != pbVar3) {
    if ((*pbVar5 & 0xdf) == 0x45) {
      pbVar5 = pbVar5 + 1;
      FUN_1150_38a5(iVar4);
    }
    FUN_1150_3882(uVar9);
    if (*pbVar5 == 0) {
      FUN_1150_38d5();
      if (bVar1 == 0x2d) {
        lVar8 = -lVar8;
      }
      if ((uVar7 & 9) == 0) {
        *param_1 = lVar8;
        return CONCAT11(extraout_AH,1);
      }
    }
  }
  return 0;
}



/* ---- FUN_1150_3882 @ 1150:3882  (7 octets) ---- */

void __cdecl16near FUN_1150_3882(void)

{
  char *pcVar1;
  char *unaff_SI;
  
  do {
    pcVar1 = unaff_SI;
    unaff_SI = unaff_SI + 1;
  } while (*pcVar1 == ' ');
  return;
}



/* ---- FUN_1150_3889 @ 1150:3889  (28 octets) ---- */

void __cdecl16near FUN_1150_3889(void)

{
  char *pcVar1;
  int unaff_BP;
  char *unaff_SI;
  undefined2 unaff_SS;
  
  while( true ) {
    pcVar1 = unaff_SI;
    unaff_SI = unaff_SI + 1;
    if ((byte)(*pcVar1 - 0x3aU) < 0xf6) break;
    *(int *)(unaff_BP + -4) = (int)(char)(*pcVar1 + -0x30);
  }
  return;
}



/* ---- FUN_1150_38a5 @ 1150:38a5  (48 octets) ---- */

uint __cdecl16near FUN_1150_38a5(void)

{
  char cVar1;
  uint uVar2;
  char *unaff_SI;
  
  uVar2 = 0;
  cVar1 = *unaff_SI;
  if ((cVar1 == '+') || (cVar1 == '-')) {
    unaff_SI = unaff_SI + 1;
  }
  do {
    if ((byte)(*unaff_SI - 0x3aU) < 0xf6) break;
    uVar2 = uVar2 * 10 + (uint)(byte)(*unaff_SI - 0x30);
    unaff_SI = unaff_SI + 1;
  } while (uVar2 < 500);
  if (cVar1 == '-') {
    uVar2 = -uVar2;
  }
  return uVar2;
}



/* ---- FUN_1150_38d5 @ 1150:38d5  (104 octets) ---- */

void __cdecl16near FUN_1150_38d5(void)

{
  uint in_AX;
  int iVar1;
  uint uVar2;
  
  if (0x1000 < (int)in_AX) {
    in_AX = in_AX - 0x1000;
  }
  if ((int)in_AX < -0x1000) {
    iVar1 = FUN_1158_04b2();
    in_AX = iVar1 + 0x1000;
  }
  if (in_AX != 0) {
    uVar2 = in_AX;
    if ((int)in_AX < 0) {
      uVar2 = -in_AX;
    }
    for (uVar2 = uVar2 >> 3; uVar2 != 0; uVar2 = uVar2 >> 1) {
    }
    if (-1 < (int)in_AX) {
      return;
    }
    FUN_1158_04b2();
  }
  return;
}



/* ---- FUN_1150_393d @ 1150:393d  (80 octets) ---- */

void __cdecl16near FUN_1150_393d(void)

{
  byte bVar1;
  int unaff_DI;
  undefined2 unaff_ES;
  
  *(undefined *)(unaff_DI + 0x12) = 0;
  FUN_1150_398d();
  FUN_1150_398d();
  FUN_1150_398d();
  bVar1 = FUN_1150_398d();
  *(int *)(unaff_DI + 0x10) = CONCAT11(bVar1 % 10,bVar1 / 10) + 0x3030;
  return;
}



/* ---- FUN_1150_398d @ 1150:398d  (28 octets) ---- */

undefined4 __cdecl16near FUN_1150_398d(void)

{
  byte bVar1;
  undefined2 in_AX;
  byte bVar5;
  int iVar2;
  int iVar3;
  undefined2 uVar4;
  uint in_DX;
  undefined2 *unaff_DI;
  undefined2 unaff_ES;
  
  bVar1 = (byte)(in_DX / 100);
  bVar5 = (byte)(in_DX % 100);
  iVar2 = CONCAT11(bVar1 / 10,bVar1 % 10) + 0x3030;
  iVar3 = CONCAT11(bVar5 / 10,bVar5 % 10) + 0x3030;
  uVar4 = CONCAT11((char)iVar3,(char)((uint)iVar3 >> 8));
  *unaff_DI = uVar4;
  unaff_DI[1] = CONCAT11((char)iVar2,(char)((uint)iVar2 >> 8));
  return CONCAT22(uVar4,in_AX);
}




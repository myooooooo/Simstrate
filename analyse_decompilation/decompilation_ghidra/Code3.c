/* Simstrat (FR).EXE - segment Code3 - 65 fonctions
   Decompile par Ghidra 11.2.1 (x86 16 bits, chargeur NE). */

/* ---- FUN_1010_0411 @ 1010:0411  (103 octets) ---- */

void __cdecl16far FUN_1010_0411(void)

{
  undefined2 uVar1;
  undefined extraout_AH;
  undefined2 uVar2;
  undefined2 unaff_CS;
  undefined4 uVar3;
  undefined2 uStack_18;
  undefined *puStack_16;
  undefined2 uStack_14;
  undefined2 uStack_12;
  undefined2 uStack_10;
  char *pcStack_e;
  undefined2 uStack_c;
  undefined2 uStack_a;
  undefined2 uStack_8;
  undefined2 local_6;
  
  _local_6 = CONCAT22(unaff_CS,0x41c);
  FUN_1158_0444();
  uStack_8 = DAT_1160_2c2a._2_2_;
  uStack_a = (undefined2)DAT_1160_2c2a;
  uStack_c = CONCAT11(extraout_AH,1);
  pcStack_e = (char *)s_windows_1160_100f + 1;
  uStack_10 = 0x22;
  uStack_12 = 0x1158;
  uStack_14 = 0x437;
  uVar3 = FUN_1140_2553();
  uVar2 = (undefined2)((ulong)uVar3 >> 0x10);
  local_6 = (undefined2)uVar3;
  uStack_12 = 0x1140;
  uStack_14 = 0x40b;
  uStack_18 = DAT_1160_1858;
  DAT_1160_1858 = &uStack_18;
  puStack_16 = &stack0xfffe;
  FUN_1140_3a14(uVar3,2);
  uVar1 = local_6;
  FUN_1140_5d45(local_6,uVar2);
  DAT_1160_1858 = (undefined2 *)uVar1;
  puStack_16 = (undefined *)0x1140;
  uStack_18 = 0x478;
  FUN_1140_5f1d(local_6,uVar2);
  return;
}



/* ---- FUN_1010_0559 @ 1010:0559  (27 octets) ---- */

void __stdcall16far FUN_1010_0559(void)

{
  FUN_1158_0444();
  FUN_1140_63a9((int)DAT_1160_2c2e,(int)((ulong)DAT_1160_2c2e >> 0x10),0xfffe);
  return;
}



/* ---- FUN_1010_0574 @ 1010:0574  (36 octets) ---- */

void __stdcall16far FUN_1010_0574(undefined4 param_1,undefined *param_2)

{
  undefined4 uVar1;
  
  FUN_1158_0444();
  uVar1 = *(undefined4 *)((int)param_1 + 0x18c);
  FUN_10d8_31d2((int)uVar1,(int)((ulong)uVar1 >> 0x10));
  *param_2 = 2;
  return;
}



/* ---- FUN_1010_0598 @ 1010:0598  (24 octets) ---- */

void __stdcall16far FUN_1010_0598(undefined4 param_1)

{
  FUN_1158_0444();
  FUN_1140_5556((int)param_1,(int)((ulong)param_1 >> 0x10));
  return;
}



/* ---- FUN_1010_08ce @ 1010:08ce  (82 octets) ---- */

void __stdcall16far FUN_1010_08ce(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  
  FUN_1158_0444();
  uVar4 = (undefined2)((ulong)param_1 >> 0x10);
  iVar2 = (int)param_1;
  FUN_1108_2a93((int)*(undefined4 *)(iVar2 + 0x1ac),
                (int)((ulong)*(undefined4 *)(iVar2 + 0x1ac) >> 0x10),*(undefined2 *)(iVar2 + 0x34),
                *(undefined2 *)(iVar2 + 0x36));
  cVar1 = FUN_1108_2b0d((int)*(undefined4 *)(iVar2 + 0x1ac),
                        (int)((ulong)*(undefined4 *)(iVar2 + 0x1ac) >> 0x10));
  if (cVar1 != '\0') {
    uVar5 = (undefined2)((ulong)*(undefined4 *)(iVar2 + 0x1ac) >> 0x10);
    iVar3 = (int)*(undefined4 *)(iVar2 + 0x1ac);
    FUN_1138_1deb(iVar2,uVar4,*(undefined2 *)(iVar3 + 0x1f),*(undefined2 *)(iVar3 + 0x21));
  }
  return;
}



/* ---- FUN_1010_0920 @ 1010:0920  (14 octets) ---- */

void __stdcall16far FUN_1010_0920(void)

{
  FUN_1158_0444();
  return;
}



/* ---- FUN_1010_092e @ 1010:092e  (19 octets) ---- */

void __stdcall16far FUN_1010_092e(void)

{
  FUN_1158_0444();
  FUN_1010_203e();
  return;
}



/* ---- FUN_1010_0941 @ 1010:0941  (40 octets) ---- */

void __stdcall16far FUN_1010_0941(undefined4 param_1)

{
  undefined2 uVar1;
  
  FUN_1158_0444();
  uVar1 = (undefined2)((ulong)param_1 >> 0x10);
  FUN_1140_77b2((int)DAT_1160_2c2a,(int)((ulong)DAT_1160_2c2a >> 0x10),
                *(undefined2 *)((int)param_1 + 0xac),*(undefined2 *)((int)param_1 + 0xae),1);
  return;
}



/* ---- FUN_1010_0969 @ 1010:0969  (31 octets) ---- */

void __stdcall16far FUN_1010_0969(void)

{
  FUN_1158_0444();
  FUN_1140_77b2((int)DAT_1160_2c2a,(int)((ulong)DAT_1160_2c2a >> 0x10),0,0,3);
  return;
}



/* ---- FUN_1010_0988 @ 1010:0988  (33 octets) ---- */

void __stdcall16far FUN_1010_0988(void)

{
  FUN_1158_0444();
  FUN_1140_77b2((int)DAT_1160_2c2a,(int)((ulong)DAT_1160_2c2a >> 0x10),0x172,0x1160,0x105);
  return;
}



/* ---- FUN_1010_09a9 @ 1010:09a9  (31 octets) ---- */

void __stdcall16far FUN_1010_09a9(void)

{
  FUN_1158_0444();
  FUN_1140_77b2((int)DAT_1160_2c2a,(int)((ulong)DAT_1160_2c2a >> 0x10),0,0,4);
  return;
}



/* ---- FUN_1010_09c8 @ 1010:09c8  (29 octets) ---- */

void __stdcall16far FUN_1010_09c8(void)

{
  undefined2 uVar1;
  
  uVar1 = 0x9d3;
  FUN_1158_0444();
  FUN_1140_5d45((int)DAT_1160_2008,(int)((ulong)DAT_1160_2008 >> 0x10),uVar1);
  return;
}



/* ---- FUN_1010_09e5 @ 1010:09e5  (73 octets) ---- */

void __stdcall16far FUN_1010_09e5(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  
  FUN_1158_0444();
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  uVar4 = (undefined2)((ulong)*(undefined4 *)(iVar1 + 0x1f0) >> 0x10);
  iVar2 = (int)*(undefined4 *)(iVar1 + 0x1f0);
  FUN_1138_17bf((int)*(undefined4 *)(iVar1 + 500),(int)((ulong)*(undefined4 *)(iVar1 + 500) >> 0x10)
                ,*(undefined2 *)(iVar2 + 0x22));
  FUN_1138_17e1((int)*(undefined4 *)(iVar1 + 500),(int)((ulong)*(undefined4 *)(iVar1 + 500) >> 0x10)
                ,*(undefined2 *)(iVar2 + 0x24));
  return;
}



/* ---- FUN_1010_0c1f @ 1010:0c1f  (643 octets) ---- */

void __stdcall16far FUN_1010_0c1f(undefined4 param_1)

{
  undefined2 *puVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  undefined2 uVar8;
  undefined2 unaff_SS;
  undefined4 *puVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined *puVar12;
  undefined local_20a [4];
  undefined local_206 [252];
  undefined4 local_10a;
  char local_106 [256];
  int local_6;
  
  local_6 = 0xc2a;
  FUN_1158_0444();
  uVar6 = (undefined2)((ulong)param_1 >> 0x10);
  iVar5 = (int)param_1;
  if ((*(char *)((int)*(undefined4 *)(iVar5 + 0x1f8) + 0x29) == '\0') &&
     (cVar2 = FUN_10d8_3202((int)*(undefined4 *)(iVar5 + 0x18c),
                            (int)((ulong)*(undefined4 *)(iVar5 + 0x18c) >> 0x10)), cVar2 != '\0')) {
    puVar12 = local_206;
    puVar9 = (undefined4 *)
             FUN_10c8_198f((int)*(undefined4 *)(iVar5 + 0x17c),
                           (int)((ulong)*(undefined4 *)(iVar5 + 0x17c) >> 0x10));
    puVar1 = (undefined2 *)((int)*puVar9 + 0x48);
    (*(code *)*puVar1)(0x10c8,puVar9,puVar12);
    FUN_1158_17e7(0xff,local_106,unaff_SS,puVar9);
    if (local_106[0] != '\0') {
      local_10a._2_2_ = (undefined2)((ulong)*(undefined4 *)(iVar5 + 0x1e4) >> 0x10);
      local_10a._0_2_ = (int)*(undefined4 *)(iVar5 + 0x1e4);
      iVar3 = *(int *)((int)local_10a + 0x22) + -4;
      if (SBORROW2(*(int *)((int)local_10a + 0x22),4)) {
        iVar3 = FUN_1158_043e(0x1158);
      }
      iVar4 = *(int *)((int)local_10a + 0x24) + -4;
      local_6 = iVar3;
      if (SBORROW2(*(int *)((int)local_10a + 0x24),4)) {
        iVar4 = FUN_1158_043e(0x1158);
      }
      uVar10 = FUN_1138_19d4((int)local_10a,local_10a._2_2_,local_6,iVar4);
      local_6 = (int)uVar10;
      uVar11 = FUN_1138_1a06(iVar5,uVar6,uVar10);
      local_6 = (int)uVar11;
      puVar12 = local_206;
      uVar7 = unaff_SS;
      FUN_1158_17cd(0xc1d,0x1138);
      FUN_1158_184c(local_106,unaff_SS);
      FUN_1158_184c(0xc1d,0x1158);
      FUN_1138_1d8c((int)*(undefined4 *)(iVar5 + 0x1f8),
                    (int)((ulong)*(undefined4 *)(iVar5 + 0x1f8) >> 0x10),puVar12,uVar7);
      uVar10 = *(undefined4 *)((int)*(undefined4 *)(iVar5 + 0x1f8) + 0x34);
      FUN_1128_11f5((int)uVar10,(int)((ulong)uVar10 >> 0x10),0x18);
      local_10a = FUN_1140_33d5(iVar5,uVar6);
      uVar7 = (undefined2)((ulong)*(undefined4 *)(iVar5 + 0x1f8) >> 0x10);
      iVar3 = (int)*(undefined4 *)(iVar5 + 0x1f8);
      FUN_1128_2099(local_10a,*(undefined2 *)(iVar3 + 0x34),*(undefined2 *)(iVar3 + 0x36));
      puVar12 = local_20a;
      uVar7 = unaff_SS;
      FUN_1138_1d53((int)*(undefined4 *)(iVar5 + 0x1f8),
                    (int)((ulong)*(undefined4 *)(iVar5 + 0x1f8) >> 0x10));
      uVar7 = FUN_1128_2003(local_10a,puVar12,uVar7);
      FUN_1138_17bf((int)*(undefined4 *)(iVar5 + 0x1f8),
                    (int)((ulong)*(undefined4 *)(iVar5 + 0x1f8) >> 0x10),uVar7);
      puVar12 = local_20a;
      FUN_1138_1d53((int)*(undefined4 *)(iVar5 + 0x1f8),
                    (int)((ulong)*(undefined4 *)(iVar5 + 0x1f8) >> 0x10));
      iVar3 = FUN_1128_204e(local_10a,puVar12,unaff_SS);
      iVar4 = (int)((long)iVar3 * 3);
      if ((long)iVar4 != (long)iVar3 * 3) {
        iVar4 = FUN_1158_043e(0x1128);
      }
      FUN_1138_17e1((int)*(undefined4 *)(iVar5 + 0x1f8),
                    (int)((ulong)*(undefined4 *)(iVar5 + 0x1f8) >> 0x10),iVar4 / 2);
      local_10a._2_2_ = (undefined2)((ulong)*(undefined4 *)(iVar5 + 0x1f8) >> 0x10);
      local_10a._0_2_ = (int)*(undefined4 *)(iVar5 + 0x1f8);
      FUN_1138_177b((int)local_10a,local_10a._2_2_,local_6);
      FUN_1138_179d((int)local_10a,local_10a._2_2_,(int)((ulong)uVar11 >> 0x10));
      while( true ) {
        uVar8 = 0x1138;
        uVar7 = FUN_1138_18a9(iVar5,uVar6);
        uVar10 = CONCAT22(uVar7,*(int *)((int)local_10a + 0x1e) + *(int *)((int)local_10a + 0x22));
        if (SCARRY2(*(int *)((int)local_10a + 0x1e),*(int *)((int)local_10a + 0x22))) {
          uVar8 = 0x1158;
          uVar10 = FUN_1158_043e(0x1138);
        }
        if ((int)uVar10 <= (int)((ulong)uVar10 >> 0x10)) break;
        iVar3 = *(int *)((int)local_10a + 0x1e) + -8;
        if (SBORROW2(*(int *)((int)local_10a + 0x1e),8)) {
          iVar3 = FUN_1158_043e(uVar8);
        }
        FUN_1138_177b((int)local_10a,local_10a._2_2_,iVar3);
      }
      while( true ) {
        uVar8 = 0x1138;
        uVar7 = FUN_1138_18f4(iVar5,uVar6);
        uVar10 = CONCAT22(uVar7,*(int *)((int)local_10a + 0x20) + *(int *)((int)local_10a + 0x24));
        if (SCARRY2(*(int *)((int)local_10a + 0x20),*(int *)((int)local_10a + 0x24))) {
          uVar8 = 0x1158;
          uVar10 = FUN_1158_043e(0x1138);
        }
        if ((int)uVar10 <= (int)((ulong)uVar10 >> 0x10)) break;
        iVar3 = *(int *)((int)local_10a + 0x20) + -8;
        if (SBORROW2(*(int *)((int)local_10a + 0x20),8)) {
          iVar3 = FUN_1158_043e(uVar8);
        }
        FUN_1138_179d((int)local_10a,local_10a._2_2_,iVar3);
      }
      FUN_1138_1c77((int)*(undefined4 *)(iVar5 + 0x1f8),
                    (int)((ulong)*(undefined4 *)(iVar5 + 0x1f8) >> 0x10),1);
    }
  }
  return;
}



/* ---- FUN_1010_0ea2 @ 1010:0ea2  (33 octets) ---- */

void __stdcall16far FUN_1010_0ea2(undefined4 param_1,undefined2 param_2_00,int *param_2)

{
  FUN_1158_0444();
  if (*param_2 == 0x11) {
    FUN_1010_0c1f((int)param_1,(int)((ulong)param_1 >> 0x10));
  }
  return;
}



/* ---- FUN_1010_0ec3 @ 1010:0ec3  (40 octets) ---- */

void __stdcall16far FUN_1010_0ec3(undefined4 param_1,undefined2 param_2_00,int *param_2)

{
  undefined4 uVar1;
  
  FUN_1158_0444();
  if (*param_2 == 0x11) {
    uVar1 = *(undefined4 *)((int)param_1 + 0x1f8);
    FUN_1138_1c77((int)uVar1,(int)((ulong)uVar1 >> 0x10),0);
  }
  return;
}



/* ---- FUN_1010_0eeb @ 1010:0eeb  (31 octets) ---- */

void __stdcall16far FUN_1010_0eeb(undefined4 param_1)

{
  undefined4 uVar1;
  
  FUN_1158_0444();
  uVar1 = *(undefined4 *)((int)param_1 + 0x1f8);
  FUN_1138_1c77((int)uVar1,(int)((ulong)uVar1 >> 0x10),0);
  return;
}



/* ---- FUN_1010_0f0a @ 1010:0f0a  (24 octets) ---- */

void __stdcall16far FUN_1010_0f0a(undefined4 param_1)

{
  FUN_1158_0444();
  FUN_1010_0c1f((int)param_1,(int)((ulong)param_1 >> 0x10));
  return;
}



/* ---- FUN_1010_10f4 @ 1010:10f4  (107 octets) ---- */

void __cdecl16far FUN_1010_10f4(void)

{
  ulong uVar1;
  undefined2 uVar2;
  undefined extraout_AH;
  undefined2 unaff_CS;
  undefined2 uStack_1c;
  undefined *puStack_1a;
  undefined2 uStack_18;
  undefined2 uStack_16;
  undefined2 uStack_14;
  char *pcStack_12;
  undefined2 uStack_10;
  undefined2 uStack_e;
  undefined2 uStack_c;
  undefined4 local_a;
  undefined2 local_6;
  
  _local_6 = CONCAT22(unaff_CS,0x10ff);
  FUN_1158_0444();
  uStack_c = DAT_1160_2c2a._2_2_;
  uStack_e = (undefined2)DAT_1160_2c2a;
  uStack_10 = CONCAT11(extraout_AH,1);
  pcStack_12 = (char *)s_windows_1160_100f + 1;
  uStack_14 = 0xf42;
  uStack_16 = 0x1158;
  uStack_18 = 0x111a;
  local_a = FUN_1140_2553();
  uVar1 = (ulong)local_a >> 0x10;
  local_6 = (undefined2)local_a;
  uStack_16 = 0x1140;
  uStack_18 = 0x10ee;
  uStack_1c = DAT_1160_1858;
  DAT_1160_1858 = &uStack_1c;
  puStack_1a = &stack0xfffe;
  FUN_1010_1161(local_a);
  uVar2 = (undefined2)local_a;
  FUN_1140_5d45(local_a);
  DAT_1160_1858 = (undefined2 *)uVar2;
  puStack_1a = (undefined *)0x1140;
  uStack_1c = 0x115f;
  FUN_1140_5f1d(local_6,(int)uVar1);
  return;
}



/* ---- FUN_1010_1161 @ 1010:1161  (183 octets) ---- */

void __stdcall16far FUN_1010_1161(undefined4 param_1)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  
  FUN_1158_0444();
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  uVar4 = (undefined2)((ulong)*(undefined4 *)(iVar1 + 0x19c) >> 0x10);
  uVar2 = (undefined2)*(undefined4 *)(iVar1 + 0x19c);
  FUN_10d8_31d2(uVar2,uVar4);
  FUN_10e0_2ffb(uVar2,uVar4,0);
  FUN_10e0_2ed2(uVar2,uVar4,1);
  FUN_10d8_31bf(uVar2,uVar4);
  uVar4 = (undefined2)((ulong)*(undefined4 *)(iVar1 + 0x1a4) >> 0x10);
  uVar2 = (undefined2)*(undefined4 *)(iVar1 + 0x1a4);
  FUN_10d8_31d2(uVar2,uVar4);
  FUN_10e0_2ffb(uVar2,uVar4,0);
  FUN_10e0_2ed2(uVar2,uVar4,1);
  FUN_10d8_31bf(uVar2,uVar4);
  uVar4 = (undefined2)((ulong)*(undefined4 *)(iVar1 + 0x1a8) >> 0x10);
  uVar2 = (undefined2)*(undefined4 *)(iVar1 + 0x1a8);
  FUN_10d8_31d2(uVar2,uVar4);
  FUN_10e0_2ffb(uVar2,uVar4,0);
  FUN_10e0_2ed2(uVar2,uVar4,1);
  FUN_10d8_31bf(uVar2,uVar4);
  return;
}



/* ---- FUN_1010_1218 @ 1010:1218  (159 octets) ---- */

void __stdcall16far FUN_1010_1218(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  
  FUN_1158_0444();
  uVar4 = (undefined2)((ulong)param_1 >> 0x10);
  iVar2 = (int)param_1;
  uVar5 = (undefined2)((ulong)*(undefined4 *)(iVar2 + 0x19c) >> 0x10);
  uVar3 = (undefined2)*(undefined4 *)(iVar2 + 0x19c);
  cVar1 = FUN_10d8_3202(uVar3,uVar5);
  if (cVar1 != '\0') {
    FUN_10d8_31d2(uVar3,uVar5);
    FUN_10e0_2ed2(uVar3,uVar5,0);
  }
  uVar5 = (undefined2)((ulong)*(undefined4 *)(iVar2 + 0x1a4) >> 0x10);
  uVar3 = (undefined2)*(undefined4 *)(iVar2 + 0x1a4);
  cVar1 = FUN_10d8_3202(uVar3,uVar5);
  if (cVar1 != '\0') {
    FUN_10d8_31d2(uVar3,uVar5);
    FUN_10e0_2ed2(uVar3,uVar5,0);
  }
  uVar5 = (undefined2)((ulong)*(undefined4 *)(iVar2 + 0x1a8) >> 0x10);
  uVar3 = (undefined2)*(undefined4 *)(iVar2 + 0x1a8);
  cVar1 = FUN_10d8_3202(uVar3,uVar5);
  if (cVar1 != '\0') {
    FUN_10d8_31d2(uVar3,uVar5);
    FUN_10e0_2ed2(uVar3,uVar5,0);
  }
  return;
}



/* ---- FUN_1010_13d2 @ 1010:13d2  (40 octets) ---- */

void __stdcall16far FUN_1010_13d2(undefined4 param_1)

{
  undefined2 uVar1;
  
  FUN_1158_0444();
  uVar1 = (undefined2)((ulong)param_1 >> 0x10);
  FUN_1140_77b2((int)DAT_1160_2c2a,(int)((ulong)DAT_1160_2c2a >> 0x10),
                *(undefined2 *)((int)param_1 + 0xac),*(undefined2 *)((int)param_1 + 0xae),1);
  return;
}



/* ---- FUN_1010_13fa @ 1010:13fa  (31 octets) ---- */

void __stdcall16far FUN_1010_13fa(undefined4 param_1,undefined *param_2)

{
  FUN_1158_0444();
  FUN_1010_1218((int)param_1,(int)((ulong)param_1 >> 0x10));
  *param_2 = 2;
  return;
}



/* ---- FUN_1010_1aaa @ 1010:1aaa  (40 octets) ---- */

void __stdcall16far FUN_1010_1aaa(undefined4 param_1)

{
  undefined2 uVar1;
  
  FUN_1158_0444();
  uVar1 = (undefined2)((ulong)param_1 >> 0x10);
  FUN_1140_77b2((int)DAT_1160_2c2a,(int)((ulong)DAT_1160_2c2a >> 0x10),
                *(undefined2 *)((int)param_1 + 0xac),*(undefined2 *)((int)param_1 + 0xae),1);
  return;
}



/* ---- FUN_1010_1ad2 @ 1010:1ad2  (85 octets) ---- */

void __stdcall16far FUN_1010_1ad2(undefined4 param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined extraout_AH;
  int iVar4;
  int iVar5;
  undefined2 uVar6;
  
  FUN_1158_0444();
  uVar3 = *(undefined4 *)((int)DAT_1160_18f6 + 0x1b4);
  uVar6 = (undefined2)((ulong)param_1 >> 0x10);
  iVar5 = (int)param_1;
  FUN_1138_1c77((int)*(undefined4 *)(iVar5 + 0x1cc),
                (int)((ulong)*(undefined4 *)(iVar5 + 0x1cc) >> 0x10),
                CONCAT11(extraout_AH,*(undefined *)((int)uVar3 + 0x31)));
  iVar2 = *(int *)((int)*(undefined4 *)(iVar5 + 0x184) + 0x20);
  piVar1 = (int *)((int)*(undefined4 *)(iVar5 + 0x184) + 0x24);
  iVar4 = iVar2 + *piVar1;
  if (SCARRY2(iVar2,*piVar1)) {
    iVar4 = FUN_1158_043e(0x1138);
  }
  FUN_1140_2ef1(iVar5,uVar6,iVar4);
  return;
}



/* ---- FUN_1010_1b27 @ 1010:1b27  (122 octets) ---- */

void __stdcall16far FUN_1010_1b27(undefined4 param_1,undefined2 param_2,undefined2 param_3)

{
  undefined2 *puVar1;
  undefined4 *puVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  FUN_1158_0444();
  uVar4 = FUN_1158_2273(0x4ac,0x1110,param_2,param_3);
  uVar3 = (undefined2)((ulong)uVar4 >> 0x10);
  uVar5 = FUN_1138_19d4(uVar4,*(int *)((int)uVar4 + 0x22) / 2,*(int *)((int)uVar4 + 0x24) / 2);
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  uVar4 = *(undefined4 *)((int)param_1 + 0x1c0);
  *(undefined *)((int)uVar4 + 0x25) = 0;
  puVar2 = (undefined4 *)*(undefined4 *)((int)param_1 + 0x1c0);
  puVar1 = (undefined2 *)((int)*puVar2 + 0x38);
  (*(code *)*puVar1)(0x1138,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),
                     (int)((ulong)uVar5 >> 0x10),(int)uVar5);
  return;
}



/* ---- FUN_1010_1ba1 @ 1010:1ba1  (67 octets) ---- */

void __stdcall16far FUN_1010_1ba1(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  undefined2 uVar3;
  
  FUN_1158_0444();
  cVar1 = FUN_1010_34c6();
  if (cVar1 != '\0') {
    uVar3 = (undefined2)((ulong)param_1 >> 0x10);
    iVar2 = (int)param_1;
    FUN_1138_1c77((int)*(undefined4 *)(iVar2 + 0x1cc),
                  (int)((ulong)*(undefined4 *)(iVar2 + 0x1cc) >> 0x10),0);
    FUN_1140_5a2d(iVar2,uVar3);
    FUN_1138_1c77((int)*(undefined4 *)(iVar2 + 0x1cc),
                  (int)((ulong)*(undefined4 *)(iVar2 + 0x1cc) >> 0x10),1);
  }
  return;
}



/* ---- FUN_1010_1be4 @ 1010:1be4  (338 octets) ---- */

void __stdcall16far FUN_1010_1be4(undefined4 param_1)

{
  undefined2 *puVar1;
  int iVar2;
  int iVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  undefined2 unaff_SS;
  undefined4 uVar7;
  undefined4 uVar8;
  int *piVar9;
  undefined2 *puVar10;
  int local_12;
  int local_10;
  int local_e;
  int local_c;
  undefined2 local_a;
  undefined2 local_8;
  undefined2 local_6;
  
  local_6 = 0x1bef;
  FUN_1158_0444();
  uVar4 = (undefined2)((ulong)param_1 >> 0x10);
  iVar2 = (int)param_1;
  FUN_1138_1c77((int)*(undefined4 *)(iVar2 + 0x1cc),
                (int)((ulong)*(undefined4 *)(iVar2 + 0x1cc) >> 0x10),0);
  FUN_1138_17bf((int)*(undefined4 *)(iVar2 + 0x1d0),
                (int)((ulong)*(undefined4 *)(iVar2 + 0x1d0) >> 0x10),*(undefined2 *)(iVar2 + 0x22));
  FUN_1138_17e1((int)*(undefined4 *)(iVar2 + 0x1d0),
                (int)((ulong)*(undefined4 *)(iVar2 + 0x1d0) >> 0x10),*(undefined2 *)(iVar2 + 0x24));
  uVar5 = 0x1138;
  uVar7 = FUN_1138_19d4(iVar2,uVar4,0,0);
  iVar3 = (int)((ulong)uVar7 >> 0x10);
  local_12 = *(int *)(iVar2 + 0x1e) - (int)uVar7;
  if (SBORROW2(*(int *)(iVar2 + 0x1e),(int)uVar7)) {
    uVar5 = 0x1158;
    local_12 = FUN_1158_043e(0x1138);
  }
  local_10 = *(int *)(iVar2 + 0x20) - iVar3;
  uVar6 = uVar5;
  if (SBORROW2(*(int *)(iVar2 + 0x20),iVar3)) {
    uVar6 = 0x1158;
    local_10 = FUN_1158_043e(uVar5);
  }
  local_e = *(int *)(iVar2 + 0x22) + local_12;
  uVar5 = uVar6;
  if (SCARRY2(*(int *)(iVar2 + 0x22),local_12)) {
    uVar5 = 0x1158;
    local_e = FUN_1158_043e(uVar6);
  }
  local_c = *(int *)(iVar2 + 0x24) + local_10;
  if (SCARRY2(*(int *)(iVar2 + 0x24),local_10)) {
    local_c = FUN_1158_043e(uVar5);
  }
  local_a = 0;
  local_8 = 0;
  local_6 = *(undefined2 *)((int)*(undefined4 *)(iVar2 + 0x1d0) + 0x22);
  FUN_1138_1c77((int)*(undefined4 *)(iVar2 + 0x1d0),
                (int)((ulong)*(undefined4 *)(iVar2 + 0x1d0) >> 0x10),0);
  puVar10 = &local_a;
  uVar7 = FUN_1140_33d5(iVar2,uVar4);
  piVar9 = &local_12;
  uVar6 = (undefined2)((ulong)*(undefined4 *)(iVar2 + 0x1d0) >> 0x10);
  uVar5 = (undefined2)*(undefined4 *)(iVar2 + 0x1d0);
  uVar8 = FUN_1118_1f94(uVar5,uVar6,piVar9);
  FUN_1128_1b10(uVar8,uVar5,uVar6,piVar9,unaff_SS,uVar7);
  uVar5 = (undefined2)((ulong)*(undefined4 *)(iVar2 + 0x1d0) >> 0x10);
  iVar3 = (int)*(undefined4 *)(iVar2 + 0x1d0);
  puVar1 = (undefined2 *)((int)*DAT_1160_2ad0 + 8);
  (*(code *)*puVar1)(0x1128,(undefined4 *)DAT_1160_2ad0,(int)((ulong)DAT_1160_2ad0 >> 0x10),
                     *(undefined2 *)(iVar3 + 0x8e),*(undefined2 *)(iVar3 + 0x90),puVar10);
  FUN_1138_1c77((int)*(undefined4 *)(iVar2 + 0x1cc),
                (int)((ulong)*(undefined4 *)(iVar2 + 0x1cc) >> 0x10),1);
  return;
}



/* ---- FUN_1010_203e @ 1010:203e  (76 octets) ---- */

void __cdecl16far FUN_1010_203e(void)

{
  undefined extraout_AH;
  undefined2 unaff_CS;
  undefined4 uVar1;
  
  uVar1 = CONCAT22(unaff_CS,0x2049);
  FUN_1158_0444();
  if (DAT_1160_014a != '\0') {
    FUN_1140_63a9((int)DAT_1160_2c2e,(int)((ulong)DAT_1160_2c2e >> 0x10),0xfff5);
    uVar1 = FUN_1140_2553(0x1d56,(char *)s_windows_1160_100f + 1,CONCAT11(extraout_AH,1),
                          (undefined2)DAT_1160_2c2a,DAT_1160_2c2a._2_2_,uVar1);
    FUN_1140_5d45(uVar1);
  }
  return;
}



/* ---- FUN_1010_232d @ 1010:232d  (27 octets) ---- */

void __stdcall16far FUN_1010_232d(void)

{
  FUN_1158_0444();
  FUN_1140_63a9((int)DAT_1160_2c2e,(int)((ulong)DAT_1160_2c2e >> 0x10),0);
  return;
}



/* ---- FUN_1010_2348 @ 1010:2348  (21 octets) ---- */

void __stdcall16far FUN_1010_2348(undefined2 param_1_00,undefined2 param_2,undefined *param_1)

{
  FUN_1158_0444();
  *param_1 = 2;
  return;
}



/* ---- FUN_1010_235d @ 1010:235d  (122 octets) ---- */

void __stdcall16far FUN_1010_235d(undefined4 param_1,undefined2 param_2,undefined2 param_3)

{
  undefined2 *puVar1;
  undefined4 *puVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  FUN_1158_0444();
  uVar4 = FUN_1158_2273(0x4ac,0x1110,param_2,param_3);
  uVar3 = (undefined2)((ulong)uVar4 >> 0x10);
  uVar5 = FUN_1138_19d4(uVar4,*(int *)((int)uVar4 + 0x22) / 2,*(int *)((int)uVar4 + 0x24) / 2);
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  uVar4 = *(undefined4 *)((int)param_1 + 0x204);
  *(undefined *)((int)uVar4 + 0x25) = 0;
  puVar2 = (undefined4 *)*(undefined4 *)((int)param_1 + 0x204);
  puVar1 = (undefined2 *)((int)*puVar2 + 0x38);
  (*(code *)*puVar1)(0x1138,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),
                     (int)((ulong)uVar5 >> 0x10),(int)uVar5);
  return;
}



/* ---- FUN_1010_23d7 @ 1010:23d7  (67 octets) ---- */

void __stdcall16far FUN_1010_23d7(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  undefined2 uVar3;
  
  FUN_1158_0444();
  cVar1 = FUN_1010_34c6();
  if (cVar1 != '\0') {
    uVar3 = (undefined2)((ulong)param_1 >> 0x10);
    iVar2 = (int)param_1;
    FUN_1138_1c77((int)*(undefined4 *)(iVar2 + 0x1fc),
                  (int)((ulong)*(undefined4 *)(iVar2 + 0x1fc) >> 0x10),0);
    FUN_1140_5a2d(iVar2,uVar3);
    FUN_1138_1c77((int)*(undefined4 *)(iVar2 + 0x1fc),
                  (int)((ulong)*(undefined4 *)(iVar2 + 0x1fc) >> 0x10),1);
  }
  return;
}



/* ---- FUN_1010_241a @ 1010:241a  (338 octets) ---- */

void __stdcall16far FUN_1010_241a(undefined4 param_1)

{
  undefined2 *puVar1;
  int iVar2;
  int iVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  undefined2 unaff_SS;
  undefined4 uVar7;
  undefined4 uVar8;
  int *piVar9;
  undefined2 *puVar10;
  int local_12;
  int local_10;
  int local_e;
  int local_c;
  undefined2 local_a;
  undefined2 local_8;
  undefined2 local_6;
  
  local_6 = 0x2425;
  FUN_1158_0444();
  uVar4 = (undefined2)((ulong)param_1 >> 0x10);
  iVar2 = (int)param_1;
  FUN_1138_1c77((int)*(undefined4 *)(iVar2 + 0x1fc),
                (int)((ulong)*(undefined4 *)(iVar2 + 0x1fc) >> 0x10),0);
  FUN_1138_17bf((int)*(undefined4 *)(iVar2 + 0x200),
                (int)((ulong)*(undefined4 *)(iVar2 + 0x200) >> 0x10),*(undefined2 *)(iVar2 + 0x22));
  FUN_1138_17e1((int)*(undefined4 *)(iVar2 + 0x200),
                (int)((ulong)*(undefined4 *)(iVar2 + 0x200) >> 0x10),*(undefined2 *)(iVar2 + 0x24));
  uVar5 = 0x1138;
  uVar7 = FUN_1138_19d4(iVar2,uVar4,0,0);
  iVar3 = (int)((ulong)uVar7 >> 0x10);
  local_12 = *(int *)(iVar2 + 0x1e) - (int)uVar7;
  if (SBORROW2(*(int *)(iVar2 + 0x1e),(int)uVar7)) {
    uVar5 = 0x1158;
    local_12 = FUN_1158_043e(0x1138);
  }
  local_10 = *(int *)(iVar2 + 0x20) - iVar3;
  uVar6 = uVar5;
  if (SBORROW2(*(int *)(iVar2 + 0x20),iVar3)) {
    uVar6 = 0x1158;
    local_10 = FUN_1158_043e(uVar5);
  }
  local_e = *(int *)(iVar2 + 0x22) + local_12;
  uVar5 = uVar6;
  if (SCARRY2(*(int *)(iVar2 + 0x22),local_12)) {
    uVar5 = 0x1158;
    local_e = FUN_1158_043e(uVar6);
  }
  local_c = *(int *)(iVar2 + 0x24) + local_10;
  if (SCARRY2(*(int *)(iVar2 + 0x24),local_10)) {
    local_c = FUN_1158_043e(uVar5);
  }
  local_a = 0;
  local_8 = 0;
  local_6 = *(undefined2 *)((int)*(undefined4 *)(iVar2 + 0x200) + 0x22);
  FUN_1138_1c77((int)*(undefined4 *)(iVar2 + 0x200),
                (int)((ulong)*(undefined4 *)(iVar2 + 0x200) >> 0x10),0);
  puVar10 = &local_a;
  uVar7 = FUN_1140_33d5(iVar2,uVar4);
  piVar9 = &local_12;
  uVar6 = (undefined2)((ulong)*(undefined4 *)(iVar2 + 0x200) >> 0x10);
  uVar5 = (undefined2)*(undefined4 *)(iVar2 + 0x200);
  uVar8 = FUN_1118_1f94(uVar5,uVar6,piVar9);
  FUN_1128_1b10(uVar8,uVar5,uVar6,piVar9,unaff_SS,uVar7);
  uVar5 = (undefined2)((ulong)*(undefined4 *)(iVar2 + 0x200) >> 0x10);
  iVar3 = (int)*(undefined4 *)(iVar2 + 0x200);
  puVar1 = (undefined2 *)((int)*DAT_1160_2ad0 + 8);
  (*(code *)*puVar1)(0x1128,(undefined4 *)DAT_1160_2ad0,(int)((ulong)DAT_1160_2ad0 >> 0x10),
                     *(undefined2 *)(iVar3 + 0x8e),*(undefined2 *)(iVar3 + 0x90),puVar10);
  FUN_1138_1c77((int)*(undefined4 *)(iVar2 + 0x1fc),
                (int)((ulong)*(undefined4 *)(iVar2 + 0x1fc) >> 0x10),1);
  return;
}



/* ---- FUN_1010_256c @ 1010:256c  (40 octets) ---- */

void __stdcall16far FUN_1010_256c(undefined4 param_1)

{
  undefined2 uVar1;
  
  FUN_1158_0444();
  uVar1 = (undefined2)((ulong)param_1 >> 0x10);
  FUN_1140_77b2((int)DAT_1160_2c2a,(int)((ulong)DAT_1160_2c2a >> 0x10),
                *(undefined2 *)((int)param_1 + 0xac),*(undefined2 *)((int)param_1 + 0xae),1);
  return;
}



/* ---- FUN_1010_2767 @ 1010:2767  (303 octets) ---- */

/* WARNING: Removing unreachable block (ram,0x101027cc) */
/* WARNING: Removing unreachable block (ram,0x101027d9) */

void __stdcall16far FUN_1010_2767(int param_1,undefined2 param_2)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  int iVar4;
  int unaff_CS;
  undefined2 uVar5;
  undefined2 unaff_SS;
  undefined2 uVar6;
  undefined2 uVar7;
  undefined2 uVar8;
  int local_c;
  int local_a;
  int local_8;
  int local_6;
  
  local_6 = 0x2772;
  FUN_1158_0444();
  iVar1 = ISWINDOWVISIBLE(0x1158,param_2);
  if (iVar1 != 0) {
    uVar2 = SAVEDC(0x14d0,*(undefined2 *)(param_1 + -8));
    uVar8 = param_2;
    GETCLIENTRECT(0x14d0,&local_a,unaff_SS);
    uVar3 = FUN_1138_62b9((int)*(undefined4 *)(param_1 + 10),
                          (int)((ulong)*(undefined4 *)(param_1 + 10) >> 0x10));
    MAPWINDOWPOINTS(0x1138,2,&local_a,unaff_SS,uVar3);
    uVar3 = *(undefined2 *)(param_1 + -8);
    uVar5 = 0x14d0;
    SETWINDOWORGEX(0x14d0,0,0,-local_8,-local_a);
    uVar7 = 0;
    uVar6 = 0;
    iVar1 = local_6 - local_a;
    if (SBORROW2(local_6,local_a)) {
      uVar5 = 0x1158;
      iVar1 = FUN_1158_043e(0x14d0,0,0,*(undefined2 *)(param_1 + -8),uVar3,param_2,uVar8);
    }
    iVar4 = unaff_CS - local_8;
    uVar3 = uVar5;
    if (SBORROW2(unaff_CS,local_8)) {
      uVar3 = 0x1158;
      iVar4 = FUN_1158_043e(uVar5,iVar1);
    }
    INTERSECTCLIPRECT(uVar3,iVar4,iVar1,uVar6,uVar7);
    SENDMESSAGE(0x14d0,0,0,*(undefined2 *)(param_1 + -8),0x14);
    SENDMESSAGE(0x14d0,*(undefined2 *)(param_1 + -0x10),*(undefined2 *)(param_1 + -0xe),
                *(undefined2 *)(param_1 + -8),0xf);
    RESTOREDC(0x14d0,uVar2);
    iVar1 = GETWINDOW(0x14d0,5);
    if (iVar1 != 0) {
      local_c = GETWINDOW(0x14d0,1);
      while (local_c != 0) {
        FUN_1010_2767(param_1,local_c);
        local_c = GETWINDOW((char *)s_windows_1160_100f + 1,3);
      }
    }
  }
  return;
}



/* ---- FUN_1010_28b2 @ 1010:28b2  (255 octets) ---- */

void __cdecl16far FUN_1010_28b2(undefined4 param_1,undefined4 param_2)

{
  undefined2 uVar1;
  undefined2 unaff_SS;
  undefined2 *puVar2;
  undefined *puVar3;
  undefined *puStack_4a;
  undefined *puStack_48;
  char *pcStack_46;
  undefined2 uStack_44;
  undefined *puStack_42;
  undefined *puStack_40;
  undefined *puStack_3e;
  undefined2 uStack_3c;
  undefined2 uStack_3a;
  undefined2 uStack_38;
  undefined *puStack_36;
  undefined *puStack_34;
  undefined2 uStack_32;
  undefined2 uStack_30;
  undefined2 uStack_2e;
  undefined2 uStack_2c;
  undefined *puStack_2a;
  undefined2 uStack_28;
  undefined2 uStack_26;
  undefined2 uStack_24;
  int local_22;
  undefined2 local_20;
  int local_1e;
  undefined2 local_1c;
  undefined2 local_1a;
  undefined2 local_18;
  undefined2 local_16;
  undefined2 local_14;
  undefined2 local_12;
  undefined2 local_10;
  undefined2 local_e;
  undefined2 local_c;
  undefined *local_a;
  undefined2 local_8;
  undefined2 local_6;
  
  local_6 = 0x28bd;
  FUN_1158_0444();
  local_6 = 0;
  uStack_24 = 0;
  uStack_26 = 0x1158;
  uStack_28 = 0x28cf;
  uStack_2e = GETDC();
  local_12 = 0;
  local_10 = 0;
  local_1c = (undefined2)((ulong)param_2 >> 0x10);
  local_1e = (int)param_2;
  uStack_26 = 0x14d0;
  uStack_28 = 0x28ac;
  uStack_2c = DAT_1160_1858;
  uStack_30 = 0x14d0;
  uStack_32 = 0x28f9;
  DAT_1160_1858 = (undefined **)&uStack_2c;
  puStack_2a = &stack0xfffe;
  local_8 = uStack_2e;
  local_a = (undefined *)CREATECOMPATIBLEDC();
  uStack_30 = 0x14d0;
  uStack_32 = 0x28a6;
  puStack_36 = (undefined *)DAT_1160_1858;
  local_20 = (undefined2)((ulong)param_1 >> 0x10);
  local_22 = (int)param_1;
  uStack_38 = local_8;
  uStack_3a = *(undefined2 *)(local_22 + 0x22);
  uStack_3c = *(undefined2 *)(local_22 + 0x24);
  puStack_3e = (undefined *)0x14d0;
  puStack_40 = (undefined *)0x2923;
  DAT_1160_1858 = &puStack_36;
  puStack_34 = &stack0xfffe;
  uStack_44 = CREATECOMPATIBLEBITMAP();
  local_1a = 0;
  local_18 = 0;
  local_16 = *(undefined2 *)(local_22 + 0x22);
  local_14 = *(undefined2 *)(local_22 + 0x24);
  uStack_3a = 0x14d0;
  uStack_3c = 0x289c;
  puStack_40 = (undefined *)DAT_1160_1858;
  puStack_42 = local_a;
  pcStack_46 = (char *)0x14d0;
  puStack_48 = (undefined *)0x295a;
  DAT_1160_1858 = &puStack_40;
  puStack_3e = &stack0xfffe;
  local_e = uStack_44;
  local_c = SELECTOBJECT();
  uStack_44 = 0x14d0;
  pcStack_46 = (char *)0x2896;
  puStack_4a = (undefined *)DAT_1160_1858;
  puVar2 = &local_1a;
  DAT_1160_1858 = &puStack_4a;
  puVar3 = local_a;
  puStack_48 = &stack0xfffe;
  uVar1 = FUN_1128_16c0((int)*(undefined4 *)(local_1e + 0x9e),
                        (int)((ulong)*(undefined4 *)(local_1e + 0x9e) >> 0x10));
  FILLRECT(0x1128,uVar1,puVar2,unaff_SS);
  uVar1 = FUN_1138_62b9(local_1e,local_1c);
  FUN_1010_2767(&stack0xfffe,uVar1);
  DAT_1160_1858 = (undefined **)puVar3;
  pcStack_46 = (char *)s_windows_1160_100f + 1;
  puStack_48 = (undefined *)0x29b1;
  puStack_4a = local_a;
  SELECTOBJECT((char *)s_windows_1160_100f + 1,local_c);
  return;
}



/* ---- FUN_1010_2a64 @ 1010:2a64  (864 octets) ---- */

void __cdecl16far FUN_1010_2a64(undefined2 param_1,undefined2 param_2,undefined4 param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  uint uVar6;
  undefined2 uVar7;
  int iVar8;
  undefined2 uVar9;
  undefined2 unaff_CS;
  undefined2 uVar10;
  undefined4 uVar11;
  undefined2 uVar12;
  undefined2 uVar13;
  undefined2 uVar14;
  undefined2 uVar15;
  undefined *puStack_5e;
  undefined *puStack_5c;
  undefined2 uStack_5a;
  undefined2 uStack_58;
  undefined2 uStack_56;
  undefined2 *puStack_54;
  undefined2 uStack_4a;
  undefined *puStack_48;
  undefined2 *puStack_46;
  char *pcStack_44;
  undefined2 uStack_42;
  undefined2 uStack_40;
  undefined4 uStack_3e;
  undefined4 local_36;
  undefined2 local_32;
  int local_30;
  undefined4 local_2e;
  undefined2 local_2a;
  int local_28;
  int local_26;
  int local_24;
  uint local_22;
  int local_20;
  int local_1e;
  int local_1c;
  uint local_1a;
  int local_18;
  undefined2 local_16;
  undefined2 local_14;
  undefined2 local_12;
  undefined4 local_10;
  undefined4 local_a;
  undefined2 local_6;
  
  _local_6 = CONCAT22(unaff_CS,0x2a6f);
  FUN_1158_0444();
  uVar9 = (undefined2)((ulong)param_3 >> 0x10);
  iVar8 = (int)param_3;
  uStack_40 = 0x1158;
  uStack_42 = 0x2a7c;
  uStack_3e._0_2_ = iVar8;
  uStack_3e._2_2_ = uVar9;
  FUN_1138_6286();
  local_2e = param_3;
  uStack_40 = 0x1138;
  uVar10 = 0x1148;
  uStack_42 = 0x2a8c;
  uStack_3e._0_2_ = iVar8;
  uStack_3e._2_2_ = uVar9;
  iVar2 = FUN_1148_527d();
  iVar3 = iVar2 + -1;
  if (SBORROW2(iVar2,1)) {
    uStack_3e._2_2_ = 0x1148;
    uVar10 = 0x1158;
    uStack_3e._0_2_ = 0x2a96;
    iVar3 = FUN_1158_043e();
  }
  _local_32 = CONCAT22(iVar3,local_32);
  if (-1 < iVar3) {
    local_28 = 0;
    while( true ) {
      uStack_3e._2_2_ = local_28;
      uStack_3e._0_2_ = (int)((ulong)local_2e >> 0x10);
      uStack_40 = (undefined2)local_2e;
      pcStack_44 = (char *)0x2ab5;
      uStack_42 = uVar10;
      uStack_3e = FUN_1148_5246();
      uStack_40 = 0x1138;
      uStack_42 = 0x5c1;
      pcStack_44 = (char *)0x1148;
      uVar10 = 0x1158;
      puStack_46 = (undefined2 *)&DAT_1160_2ac4;
      cVar1 = FUN_1158_2255();
      if (cVar1 != '\0') {
        uStack_3e._2_2_ = local_28;
        uStack_3e._0_2_ = (int)((ulong)local_2e >> 0x10);
        uStack_40 = (undefined2)local_2e;
        uStack_42 = 0x1158;
        pcStack_44 = (char *)0x2ad5;
        uStack_3e = FUN_1148_5246();
        uStack_40 = 0x1138;
        uStack_42 = 0x5c1;
        pcStack_44 = (char *)0x1148;
        puStack_46 = (undefined2 *)0x2ae4;
        uVar11 = FUN_1158_2273();
        uStack_40 = 0x1158;
        uVar10 = 0x1138;
        uStack_42 = 0x2aef;
        uStack_3e = uVar11;
        FUN_1138_6286();
      }
      if (local_28 == local_30) break;
      local_28 = local_28 + 1;
    }
  }
  uStack_3e._2_2_ = (int)((ulong)DAT_1160_2c2a >> 0x10);
  uStack_3e._0_2_ = (int)DAT_1160_2c2a;
  uStack_42 = 0x2b02;
  uStack_40 = uVar10;
  FUN_1140_7303();
  uStack_40 = param_2;
  uStack_42 = param_1;
  pcStack_44 = (char *)0x1140;
  puStack_46 = (undefined2 *)&DAT_1160_2b1c;
  uStack_3e._0_2_ = iVar8;
  uStack_3e._2_2_ = uVar9;
  local_2e._0_2_ = iVar8;
  local_2e._2_2_ = uVar9;
  local_6 = FUN_1010_28b2();
  pcStack_44 = (char *)s_windows_1160_100f + 1;
  puStack_46 = (undefined2 *)0x2a5e;
  uStack_4a = DAT_1160_1858;
  local_30 = (int)((ulong)DAT_1160_2c54 >> 0x10);
  local_32 = (undefined2)DAT_1160_2c54;
  DAT_1160_1858 = (undefined **)&uStack_4a;
  puStack_48 = &stack0xfffe;
  local_36 = FUN_10f0_2a04();
  local_16 = FUN_1128_5a9e();
  puStack_54 = &local_14;
  uStack_56 = 0x1128;
  uStack_58 = 0x2b6a;
  FUN_1128_37e4();
  FUN_1158_0416();
  local_a = FUN_1150_0476();
  DAT_1160_1858 = (undefined **)&stack0xffae;
  puStack_54 = (undefined2 *)0x0;
  uStack_56 = local_12;
  uStack_58 = local_14;
  uStack_5a = 0x1150;
  puStack_5c = (undefined *)0x2b9d;
  uStack_56 = GLOBALALLOC();
  uStack_58 = 0x14d0;
  uStack_5a = 0x2ba8;
  local_2a = uStack_56;
  local_10 = GLOBALLOCK();
  uStack_58 = 0x14d0;
  uStack_5a = 0x2a4a;
  puStack_5e = (undefined *)DAT_1160_1858;
  DAT_1160_1858 = &puStack_5e;
  puStack_5c = &stack0xfffe;
  FUN_1128_38b5(local_10,local_a,0,local_16);
  local_22 = *(uint *)((int)local_a + 4);
  local_20 = *(int *)((int)local_a + 6);
  local_26 = *(int *)((int)local_a + 8);
  local_24 = *(int *)((int)local_a + 10);
  local_1e = local_26;
  local_1c = local_24;
  local_1a = local_22;
  local_18 = local_20;
  if (*(char *)((int)local_2e + 0xf7) == '\x01') {
    uVar9 = FUN_1158_0416();
    uVar10 = FUN_1128_21d2(local_36);
    uVar4 = GETDEVICECAPS(0x1128,0x58);
    uVar5 = FUN_1140_3811((int)local_2e,local_2e._2_2_);
    local_22 = MULDIV(0x1140,uVar5,uVar4);
    local_20 = (int)local_22 >> 0xf;
    FUN_1158_0416(uVar10,uVar9);
    FUN_1128_21d2(local_36);
    uVar9 = GETDEVICECAPS(0x1128,0x5a);
    uVar10 = FUN_1140_3811((int)local_2e,local_2e._2_2_);
    local_26 = MULDIV(0x1140,uVar10,uVar9);
    local_24 = local_26 >> 0xf;
  }
  else if (*(char *)((int)local_2e + 0xf7) == '\x02') {
    uVar9 = FUN_1158_0416();
    uVar10 = FUN_10f0_2a72(local_32,local_30);
    uVar9 = FUN_1158_0416(uVar10,uVar9);
    local_22 = MULDIV(0x1158,uVar9,uVar10);
    local_20 = (int)local_22 >> 0xf;
    uVar6 = FUN_10f0_2a9a(local_32,local_30);
    if ((local_20 < (int)uVar6 >> 0xf) || ((local_20 <= (int)uVar6 >> 0xf && (local_22 < uVar6)))) {
      local_26 = FUN_10f0_2a72(local_32,local_30);
    }
    else {
      local_22 = FUN_10f0_2a9a(local_32,local_30);
      local_20 = (int)local_22 >> 0xf;
      uVar9 = FUN_1158_0416();
      uVar10 = FUN_10f0_2a9a(local_32,local_30);
      uVar9 = FUN_1158_0416(uVar10,uVar9);
      local_26 = MULDIV(0x1158,uVar9,uVar10);
    }
    local_24 = local_26 >> 0xf;
  }
  uVar11 = FUN_10f0_2a04(local_32,local_30);
  uVar9 = FUN_1128_21d2(uVar11);
  uVar15 = 0;
  uVar14 = 0;
  uVar10 = FUN_1158_0416(0,0);
  uVar4 = FUN_1158_0416(uVar10);
  uVar13 = 0;
  uVar12 = 0;
  uVar5 = FUN_1158_0416(0,0,uVar4);
  uVar7 = FUN_1158_0416(uVar5);
  STRETCHDIBITS(0x1158,0x20,0xcc,0,local_a,(undefined2)local_10,local_10._2_2_,uVar7,uVar5,uVar12,
                uVar13,uVar4,uVar10,uVar14,uVar15);
  DAT_1160_1858 = (undefined **)uVar9;
  puStack_5e = (undefined *)0x14d0;
  GLOBALUNLOCK(0x14d0,local_2a,0x2dc4);
  GLOBALFREE(0x14d0,local_2a);
  return;
}



/* ---- FUN_1010_2f2e @ 1010:2f2e  (28 octets) ---- */

void __stdcall16far FUN_1010_2f2e(undefined4 param_1,undefined *param_2)

{
  FUN_1158_0444();
  *param_2 = *(undefined *)((int)param_1 + 0x1b4);
  return;
}



/* ---- FUN_1010_2f4a @ 1010:2f4a  (67 octets) ---- */

void __stdcall16far FUN_1010_2f4a(undefined4 param_1,undefined2 param_2)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 unaff_SS;
  undefined *puVar3;
  undefined local_102 [252];
  undefined2 uStack_6;
  
  uStack_6 = 0x2f55;
  FUN_1158_0444();
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  *(undefined2 *)(iVar1 + 0x1b7) = param_2;
  puVar3 = local_102;
  FUN_1150_08a9(*(int *)(iVar1 + 0x1b7),*(int *)(iVar1 + 0x1b7) >> 0xf);
  FUN_1138_1d8c((int)*(undefined4 *)(iVar1 + 0x1a0),
                (int)((ulong)*(undefined4 *)(iVar1 + 0x1a0) >> 0x10),puVar3,unaff_SS);
  return;
}



/* ---- FUN_1010_2f8d @ 1010:2f8d  (67 octets) ---- */

void __stdcall16far FUN_1010_2f8d(undefined4 param_1,undefined2 param_2)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 unaff_SS;
  undefined *puVar3;
  undefined local_102 [252];
  undefined2 uStack_6;
  
  uStack_6 = 0x2f98;
  FUN_1158_0444();
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  *(undefined2 *)(iVar1 + 0x1b5) = param_2;
  puVar3 = local_102;
  FUN_1150_08a9(*(int *)(iVar1 + 0x1b5),*(int *)(iVar1 + 0x1b5) >> 0xf);
  FUN_1138_1d8c((int)*(undefined4 *)(iVar1 + 0x1a8),
                (int)((ulong)*(undefined4 *)(iVar1 + 0x1a8) >> 0x10),puVar3,unaff_SS);
  return;
}



/* ---- FUN_1010_2fd0 @ 1010:2fd0  (86 octets) ---- */

void __stdcall16far FUN_1010_2fd0(undefined4 param_1,byte *param_2)

{
  byte *pbVar1;
  byte *pbVar2;
  undefined4 uVar3;
  uint uVar4;
  byte *pbVar5;
  undefined2 uVar6;
  undefined2 unaff_SS;
  byte local_102;
  byte abStack_101 [251];
  undefined2 uStack_6;
  
  uStack_6 = 0x2fdb;
  FUN_1158_0444();
  pbVar5 = (byte *)param_2;
  local_102 = *param_2;
  pbVar2 = abStack_101;
  for (uVar4 = (uint)local_102; pbVar5 = pbVar5 + 1, uVar4 != 0; uVar4 = uVar4 - 1) {
    pbVar1 = pbVar2;
    pbVar2 = pbVar2 + 1;
    *pbVar1 = *pbVar5;
  }
  uVar6 = (undefined2)((ulong)param_1 >> 0x10);
  FUN_1158_17e7(0xff,(int)param_1 + 0x1b9,uVar6,&local_102,unaff_SS);
  uVar3 = *(undefined4 *)((int)param_1 + 0x1ac);
  FUN_1138_1d8c((int)uVar3,(int)((ulong)uVar3 >> 0x10),&local_102,unaff_SS);
  return;
}



/* ---- FUN_1010_3026 @ 1010:3026  (36 octets) ---- */

void __stdcall16far FUN_1010_3026(undefined4 param_1)

{
  undefined2 uVar1;
  
  FUN_1158_0444();
  uVar1 = (undefined2)((ulong)param_1 >> 0x10);
  FUN_1010_3062((int)param_1,uVar1,1);
  *(undefined2 *)((int)param_1 + 0x104) = 2;
  return;
}



/* ---- FUN_1010_3062 @ 1010:3062  (112 octets) ---- */

void __cdecl16far FUN_1010_3062(undefined4 param_1,byte param_2)

{
  undefined2 uVar1;
  undefined2 uVar2;
  undefined *puStack_16;
  undefined *puStack_14;
  undefined2 uStack_12;
  undefined2 uStack_10;
  undefined2 uStack_e;
  undefined *puStack_c;
  undefined2 uStack_a;
  undefined2 uStack_8;
  undefined2 uStack_6;
  
  uVar2 = 0x1158;
  uStack_6 = 0x306d;
  FUN_1158_0444();
  uStack_8 = 0x1158;
  uStack_a = 0x305c;
  uStack_e = DAT_1160_1858;
  uVar1 = (undefined2)((ulong)DAT_1160_2c54 >> 0x10);
  if ((param_2 & *(byte *)((int)DAT_1160_2c54 + 0x18)) != 0) {
    uStack_10 = 0x1158;
    uStack_12 = 0x304a;
    DAT_1160_1858 = &puStack_16;
    uVar2 = 0x10f0;
    puStack_16 = (undefined *)&uStack_e;
    puStack_14 = &stack0xfffe;
    puStack_c = &stack0xfffe;
    FUN_10f0_258d((int)DAT_1160_2c54,uVar1);
  }
  DAT_1160_1858 = (undefined **)uStack_e;
  uStack_a = 0x30fa;
  *(byte *)((int)param_1 + 0x1b4) = param_2;
  puStack_c = (undefined *)((ulong)DAT_1160_2c2a >> 0x10);
  uStack_e = (undefined2)DAT_1160_2c2a;
  uStack_12 = 0x30f9;
  uStack_10 = uVar2;
  uStack_8 = uVar2;
  FUN_1140_7303();
  return;
}



/* ---- FUN_1010_311a @ 1010:311a  (181 octets) ---- */

void __stdcall16far
FUN_1010_311a(undefined4 param_1,undefined2 param_2,undefined2 param_3,undefined4 param_4)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 unaff_SS;
  undefined *puVar3;
  undefined2 uStack_20e;
  undefined *puStack_20c;
  undefined2 uStack_20a;
  undefined2 uStack_208;
  undefined local_202 [508];
  undefined2 uStack_6;
  
  uStack_6 = 0x3125;
  FUN_1158_0444();
  uStack_208 = (undefined2)((ulong)DAT_1160_2c2a >> 0x10);
  uStack_20a = (undefined2)DAT_1160_2c2a;
  puStack_20c = (undefined *)0x1158;
  uStack_20e = 0x3134;
  FUN_1140_7303();
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  if (((int)param_4 != 0 || param_4._2_2_ != 0) && *(char *)(iVar1 + 0x1b4) == '\0') {
    uStack_208 = 0x1140;
    uStack_20a = 0x3100;
    uStack_20e = DAT_1160_1858;
    if (*(char *)(iVar1 + 0x2c1) == '\0') {
      DAT_1160_1858 = &uStack_20e;
      puStack_20c = &stack0xfffe;
      FUN_10f0_269a((int)DAT_1160_2c54,(int)((ulong)DAT_1160_2c54 >> 0x10));
    }
    else {
      DAT_1160_1858 = &uStack_20e;
      *(undefined *)(iVar1 + 0x2c1) = 0;
      puStack_20c = &stack0xfffe;
    }
    FUN_1010_2f4a(iVar1,uVar2,*(undefined2 *)((int)DAT_1160_2c54 + 0xc));
    puVar3 = local_202;
    FUN_1138_1d53((int)param_4,param_4._2_2_);
    FUN_1010_2fd0(iVar1,uVar2,puVar3,unaff_SS);
    uVar2 = param_2;
    FUN_1010_2a64(param_2,param_3,(int)param_4,param_4._2_2_);
    DAT_1160_1858 = (undefined2 *)uVar2;
  }
  return;
}



/* ---- FUN_1010_3272 @ 1010:3272  (41 octets) ---- */

void __stdcall16far FUN_1010_3272(undefined4 param_1)

{
  undefined4 uVar1;
  undefined2 uVar2;
  
  FUN_1158_0444();
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  uVar1 = *(undefined4 *)((int)param_1 + 0x1b0);
  FUN_1118_2749((int)uVar1,(int)((ulong)uVar1 >> 0x10),0);
  FUN_1010_32c6((int)param_1,uVar2);
  return;
}



/* ---- FUN_1010_329b @ 1010:329b  (31 octets) ---- */

void __stdcall16far FUN_1010_329b(undefined4 param_1)

{
  undefined4 uVar1;
  
  FUN_1158_0444();
  uVar1 = *(undefined4 *)((int)param_1 + 0x1b0);
  FUN_1118_2749((int)uVar1,(int)((ulong)uVar1 >> 0x10),1);
  return;
}



/* ---- FUN_1010_32c6 @ 1010:32c6  (169 octets) ---- */

void __cdecl16far FUN_1010_32c6(undefined4 param_1)

{
  undefined2 uVar1;
  int iVar2;
  undefined2 uVar3;
  undefined *puStack_18;
  char *pcStack_16;
  undefined2 uStack_14;
  undefined2 uStack_12;
  int iStack_10;
  undefined2 uStack_e;
  undefined2 uStack_c;
  undefined2 uStack_a;
  undefined *puStack_8;
  undefined2 uStack_6;
  
  uStack_6 = 0x32d0;
  FUN_1158_0444();
  uStack_6 = 0x32c0;
  uStack_a = DAT_1160_1858;
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  iVar2 = (int)param_1;
  if (*(int *)(iVar2 + 699) != 0) {
    uStack_c = 0;
    uStack_12 = 0x1158;
    uStack_14 = 0x32f3;
    DAT_1160_1858 = (undefined **)&uStack_a;
    iStack_10 = iVar2;
    uStack_e = uVar3;
    puStack_8 = &stack0xfffe;
    FUN_1010_3062();
    uStack_12 = (undefined2)((ulong)DAT_1160_2c54 >> 0x10);
    uStack_14 = (undefined2)DAT_1160_2c54;
    pcStack_16 = (char *)s_windows_1160_100f + 1;
    puStack_18 = (undefined *)0x32fe;
    FUN_10f0_25a8();
    uStack_12 = 0x10f0;
    uStack_14 = 0x32ba;
    puStack_18 = (undefined *)DAT_1160_1858;
    DAT_1160_1858 = &puStack_18;
    uVar1 = *(undefined2 *)(iVar2 + 0x2bd);
    pcStack_16 = &stack0xfffe;
    (*(code *)*(undefined2 *)(iVar2 + 0x2b9))
              (0x10f0,*(undefined2 *)(iVar2 + 0x2bd),*(undefined2 *)(iVar2 + 0x2bf),iVar2,uVar3);
    DAT_1160_1858 = (undefined **)uVar1;
    FUN_1140_7303((int)DAT_1160_2c2a,(int)((ulong)DAT_1160_2c2a >> 0x10));
    uVar3 = (undefined2)((ulong)DAT_1160_2c54 >> 0x10);
    if (*(char *)((int)DAT_1160_2c54 + 0x18) != '\0') {
      FUN_10f0_2655((int)DAT_1160_2c54,uVar3);
    }
    return;
  }
  *(undefined *)(iVar2 + 0x1b4) = 1;
  *(undefined2 *)(iVar2 + 0x104) = 1;
  return;
}



/* ---- FUN_1010_34c6 @ 1010:34c6  (50 octets) ---- */

uint __cdecl16far FUN_1010_34c6(void)

{
  uint uVar1;
  uint uVar2;
  
  FUN_1158_0444();
  uVar1 = MESSAGEBOX(0x1158,0x1041,0x4e4,0x1160,0x4d2,0x1160);
  uVar2 = uVar1 & 0xff00;
  if (uVar1 == 1) {
    uVar2 = uVar2 + 1;
  }
  return uVar2;
}



/* ---- FUN_1010_352b @ 1010:352b  (189 octets) ---- */

void __cdecl16far FUN_1010_352b(void)

{
  undefined2 *puVar1;
  undefined4 *puVar2;
  undefined extraout_AH;
  int iVar3;
  undefined2 uVar4;
  undefined4 uVar5;
  
  FUN_1158_0444();
  uVar5 = FUN_1140_2553(0x3393,(char *)s_windows_1160_100f + 1,CONCAT11(extraout_AH,1),
                        (undefined2)DAT_1160_2c2a,DAT_1160_2c2a._2_2_);
  uVar4 = (undefined2)((ulong)uVar5 >> 0x10);
  iVar3 = (int)uVar5;
  FUN_1138_1d8c(uVar5,0x34f8,0x1140);
  puVar2 = (undefined4 *)*(undefined4 *)((int)*(undefined4 *)(iVar3 + 0x184) + 0xec);
  puVar1 = (undefined2 *)((int)*puVar2 + 0x30);
  (*(code *)*puVar1)(0x1138,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10));
  puVar2 = (undefined4 *)*(undefined4 *)((int)*(undefined4 *)(iVar3 + 0x184) + 0xec);
  puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
  (*(code *)*puVar1)(0x1138,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),0x3508,0x1138);
  puVar2 = (undefined4 *)*(undefined4 *)((int)*(undefined4 *)(iVar3 + 0x184) + 0xec);
  puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
  (*(code *)*puVar1)(0x1138,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),0x3509,0x1138);
  FUN_1138_1ed5((int)*(undefined4 *)(iVar3 + 0x184),
                (int)((ulong)*(undefined4 *)(iVar3 + 0x184) >> 0x10),0xffff,0xff);
  MESSAGEBEEP(0x1138,0x30);
  *(undefined *)(iVar3 + 0x188) = 1;
  FUN_1140_5d45(uVar5);
  return;
}



/* ---- FUN_1010_35e8 @ 1010:35e8  (23 octets) ---- */

void __stdcall16far FUN_1010_35e8(undefined4 param_1)

{
  FUN_1158_0444();
  *(undefined *)((int)param_1 + 0x188) = 1;
  return;
}



/* ---- FUN_1010_35ff @ 1010:35ff  (21 octets) ---- */

void __stdcall16far FUN_1010_35ff(undefined2 param_1_00,undefined2 param_2,undefined *param_1)

{
  FUN_1158_0444();
  *param_1 = 2;
  return;
}



/* ---- FUN_1010_3614 @ 1010:3614  (35 octets) ---- */

void __stdcall16far FUN_1010_3614(undefined4 param_1)

{
  undefined4 uVar1;
  undefined extraout_AH;
  undefined2 uVar2;
  
  FUN_1158_0444();
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  uVar1 = *(undefined4 *)((int)param_1 + 0x180);
  FUN_1118_2749((int)uVar1,(int)((ulong)uVar1 >> 0x10),
                CONCAT11(extraout_AH,*(undefined *)((int)param_1 + 0x188)));
  return;
}



/* ---- FUN_1010_3637 @ 1010:3637  (41 octets) ---- */

void __stdcall16far FUN_1010_3637(undefined4 param_1)

{
  undefined4 uVar1;
  undefined2 uVar2;
  
  FUN_1158_0444();
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  uVar1 = *(undefined4 *)((int)param_1 + 0x180);
  FUN_1118_2749((int)uVar1,(int)((ulong)uVar1 >> 0x10),0);
  FUN_1140_5556((int)param_1,uVar2);
  return;
}



/* ---- FUN_1010_3675 @ 1010:3675  (108 octets) ---- */

void __cdecl16far FUN_1010_3675(void)

{
  undefined2 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined extraout_AH;
  undefined2 uVar4;
  undefined4 uVar5;
  
  FUN_1158_0444();
  uVar5 = FUN_1140_2553(0x3393,(char *)s_windows_1160_100f + 1,CONCAT11(extraout_AH,1),
                        (undefined2)DAT_1160_2c2a,DAT_1160_2c2a._2_2_);
  uVar4 = (undefined2)((ulong)uVar5 >> 0x10);
  FUN_1138_1d8c(uVar5,0x3660,0x1140);
  uVar2 = *(undefined4 *)((int)uVar5 + 0x184);
  puVar3 = (undefined4 *)*(undefined4 *)((int)uVar2 + 0xec);
  puVar1 = (undefined2 *)((int)*puVar3 + 0x30);
  (*(code *)*puVar1)(0x1138,(undefined4 *)puVar3,(int)((ulong)puVar3 >> 0x10));
  *(undefined *)((int)uVar5 + 0x188) = 1;
  FUN_1140_5d45(uVar5);
  return;
}



/* ---- FUN_1010_36fb @ 1010:36fb  (135 octets) ---- */

void __cdecl16far FUN_1010_36fb(void)

{
  undefined2 *puVar1;
  undefined4 *puVar2;
  undefined extraout_AH;
  int iVar3;
  undefined2 uVar4;
  undefined4 uVar5;
  
  FUN_1158_0444();
  uVar5 = FUN_1140_2553(0x3393,(char *)s_windows_1160_100f + 1,CONCAT11(extraout_AH,1),
                        (undefined2)DAT_1160_2c2a,DAT_1160_2c2a._2_2_);
  uVar4 = (undefined2)((ulong)uVar5 >> 0x10);
  iVar3 = (int)uVar5;
  FUN_1138_1d8c(uVar5,0x36e1,0x1140);
  puVar2 = (undefined4 *)*(undefined4 *)((int)*(undefined4 *)(iVar3 + 0x184) + 0xec);
  puVar1 = (undefined2 *)((int)*puVar2 + 0x30);
  (*(code *)*puVar1)(0x1138,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10));
  MESSAGEBEEP(0x1138,0x30);
  FUN_1138_1ed5((int)*(undefined4 *)(iVar3 + 0x184),
                (int)((ulong)*(undefined4 *)(iVar3 + 0x184) >> 0x10),0xff,0);
  *(undefined *)(iVar3 + 0x188) = 0;
  FUN_1140_5d45(uVar5);
  return;
}



/* ---- FUN_1010_37d1 @ 1010:37d1  (169 octets) ---- */

void __cdecl16far FUN_1010_37d1(void)

{
  undefined2 *puVar1;
  undefined4 *puVar2;
  undefined extraout_AH;
  int iVar3;
  undefined2 uVar4;
  undefined4 uVar5;
  
  FUN_1158_0444();
  uVar5 = FUN_1140_2553(0x3393,(char *)s_windows_1160_100f + 1,CONCAT11(extraout_AH,1),
                        (undefined2)DAT_1160_2c2a,DAT_1160_2c2a._2_2_);
  uVar4 = (undefined2)((ulong)uVar5 >> 0x10);
  iVar3 = (int)uVar5;
  FUN_1138_1d8c(uVar5,0x3782,0x1140);
  puVar2 = (undefined4 *)*(undefined4 *)((int)*(undefined4 *)(iVar3 + 0x184) + 0xec);
  puVar1 = (undefined2 *)((int)*puVar2 + 0x30);
  (*(code *)*puVar1)(0x1138,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10));
  puVar2 = (undefined4 *)*(undefined4 *)((int)*(undefined4 *)(iVar3 + 0x184) + 0xec);
  puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
  (*(code *)*puVar1)(0x1138,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),0x3791,0x1138);
  puVar2 = (undefined4 *)*(undefined4 *)((int)*(undefined4 *)(iVar3 + 0x184) + 0xec);
  puVar1 = (undefined2 *)((int)*puVar2 + 0x24);
  (*(code *)*puVar1)(0x1138,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),0x37b3,0x1138);
  MESSAGEBEEP(0x1138,0x30);
  *(undefined *)(iVar3 + 0x188) = 1;
  FUN_1140_5d45(uVar5);
  return;
}



/* ---- FUN_1010_38c2 @ 1010:38c2  (231 octets) ---- */

/* WARNING: Removing unreachable block (ram,0x1010397a) */

void __stdcall16far FUN_1010_38c2(char param_1)

{
  undefined2 unaff_SS;
  undefined *puVar1;
  undefined2 uVar2;
  undefined local_304 [256];
  undefined2 local_204;
  undefined local_202 [256];
  undefined local_102;
  undefined local_101 [251];
  undefined2 uStack_6;
  
  uStack_6 = 0x38cd;
  FUN_1158_0444();
  FUN_1158_17e7(0xff,&local_102,unaff_SS,0x387a,0x1158);
  FUN_1158_17e7(0xff,local_202,unaff_SS,0x3891,0x1158);
  if (param_1 == '\0') {
    local_204 = 0x30;
  }
  else {
    puVar1 = local_304;
    uVar2 = unaff_SS;
    FUN_1158_17cd(local_202,unaff_SS);
    FUN_1158_184c(0x38ac,0x1158);
    FUN_1158_184c(0x38ac,0x1158);
    FUN_1158_184c(0x38ae,0x1158);
    FUN_1158_17e7(0xff,local_202,unaff_SS,puVar1,uVar2);
    local_204 = 0x10;
  }
  puVar1 = local_304;
  uVar2 = unaff_SS;
  FUN_1158_17cd(local_202,unaff_SS);
  FUN_1158_184c(0x38c0,0x1158);
  FUN_1158_17e7(0xff,local_202,unaff_SS,puVar1,uVar2);
  MESSAGEBEEP(0x1158,0x30);
  FUN_1140_75f9((int)DAT_1160_2c2a,(int)((ulong)DAT_1160_2c2a >> 0x10),local_204,local_101);
  return;
}



/* ---- FUN_1010_39ca @ 1010:39ca  (93 octets) ---- */

undefined2 __cdecl16far FUN_1010_39ca(void)

{
  undefined2 uVar1;
  undefined2 unaff_SS;
  undefined local_204 [256];
  undefined local_104;
  undefined local_103 [253];
  undefined2 uStack_6;
  
  uStack_6 = 0x39d5;
  FUN_1158_0444();
  FUN_1158_17e7(0xff,&local_104,unaff_SS,0x39a9,0x1158);
  FUN_1158_17e7(0xff,local_204,unaff_SS,0x39b3,0x1158);
  MESSAGEBEEP(0x1158,0x20);
  uVar1 = FUN_1140_75f9((int)DAT_1160_2c2a,(int)((ulong)DAT_1160_2c2a >> 0x10),0x23,local_103);
  return uVar1;
}



/* ---- FUN_1010_3a48 @ 1010:3a48  (93 octets) ---- */

undefined2 __cdecl16far FUN_1010_3a48(void)

{
  undefined2 uVar1;
  undefined2 unaff_SS;
  undefined local_204 [256];
  undefined local_104;
  undefined local_103 [253];
  undefined2 uStack_6;
  
  uStack_6 = 0x3a53;
  FUN_1158_0444();
  FUN_1158_17e7(0xff,&local_104,unaff_SS,0x3a27,0x1158);
  FUN_1158_17e7(0xff,local_204,unaff_SS,0x3a31,0x1158);
  MESSAGEBEEP(0x1158,0x20);
  uVar1 = FUN_1140_75f9((int)DAT_1160_2c2a,(int)((ulong)DAT_1160_2c2a >> 0x10),0x24,local_103);
  return uVar1;
}



/* ---- FUN_1010_3b3a @ 1010:3b3a  (93 octets) ---- */

undefined2 __cdecl16far FUN_1010_3b3a(void)

{
  undefined2 uVar1;
  undefined2 unaff_SS;
  undefined local_204 [256];
  undefined local_104;
  undefined local_103 [253];
  undefined2 uStack_6;
  
  uStack_6 = 0x3b45;
  FUN_1158_0444();
  FUN_1158_17e7(0xff,&local_104,unaff_SS,0x3aa5,0x1158);
  FUN_1158_17e7(0xff,local_204,unaff_SS,0x3aba,0x1158);
  MESSAGEBEEP(0x1158,0x20);
  uVar1 = FUN_1140_75f9((int)DAT_1160_2c2a,(int)((ulong)DAT_1160_2c2a >> 0x10),0x23,local_103);
  return uVar1;
}



/* ---- FUN_1010_3bda @ 1010:3bda  (183 octets) ---- */

undefined2 __stdcall16far FUN_1010_3bda(char param_1)

{
  undefined2 uVar1;
  undefined2 unaff_SS;
  undefined *puVar2;
  undefined local_304 [256];
  undefined local_204;
  undefined local_203 [255];
  undefined local_104 [254];
  undefined2 uStack_6;
  
  uStack_6 = 0x3be5;
  FUN_1158_0444();
  FUN_1158_17e7(0xff,&local_204,unaff_SS,0x3b97,0x1158);
  FUN_1158_17e7(0xff,local_104,unaff_SS,0x3bac,0x1158);
  if (param_1 == '\0') {
    puVar2 = local_304;
    uVar1 = unaff_SS;
    FUN_1158_17cd(local_104,unaff_SS);
    FUN_1158_184c(0x3bc3,0x1158);
    FUN_1158_17e7(0xff,local_104,unaff_SS,puVar2,uVar1);
  }
  puVar2 = local_304;
  uVar1 = unaff_SS;
  FUN_1158_17cd(local_104,unaff_SS);
  FUN_1158_184c(0x3bd8,0x1158);
  FUN_1158_17e7(0xff,local_104,unaff_SS,puVar2,uVar1);
  MESSAGEBEEP(0x1158,0x20);
  uVar1 = FUN_1140_75f9((int)DAT_1160_2c2a,(int)((ulong)DAT_1160_2c2a >> 0x10),0x24,local_203);
  return uVar1;
}



/* ---- FUN_1010_3d28 @ 1010:3d28  (199 octets) ---- */

undefined2 __stdcall16far FUN_1010_3d28(undefined4 param_1,int param_2)

{
  undefined2 uVar1;
  undefined2 unaff_SS;
  undefined *puVar2;
  undefined *puVar3;
  undefined2 uVar4;
  undefined local_404 [256];
  undefined local_304 [256];
  undefined local_204 [256];
  undefined local_104;
  undefined local_103 [253];
  undefined2 uStack_6;
  
  uStack_6 = 0x3d33;
  FUN_1158_0444();
  puVar3 = local_404;
  uVar4 = unaff_SS;
  FUN_1158_17cd(0x3c91,0x1158);
  puVar2 = local_304;
  uVar1 = unaff_SS;
  FUN_1150_08a9(param_2,param_2 >> 0xf);
  FUN_1158_184c(puVar2,uVar1);
  FUN_1158_184c(0x3cac,0x1158);
  FUN_1158_17e7(0xff,&local_104,unaff_SS,puVar3,uVar4);
  FUN_1158_17e7(0xff,local_204,unaff_SS,0x3cae,0x1158);
  puVar3 = local_304;
  uVar1 = unaff_SS;
  FUN_1158_17cd(local_204,unaff_SS);
  FUN_1158_184c((int)param_1,(int)((ulong)param_1 >> 0x10));
  FUN_1158_184c(0x3d25,0x1158);
  FUN_1158_184c(0x3cac,0x1158);
  FUN_1158_17e7(0xff,local_204,unaff_SS,puVar3,uVar1);
  MESSAGEBEEP(0x1158,0x20);
  uVar1 = FUN_1140_75f9((int)DAT_1160_2c2a,(int)((ulong)DAT_1160_2c2a >> 0x10),0x23,local_103);
  return uVar1;
}



/* ---- FUN_1010_3df6 @ 1010:3df6  (37 octets) ---- */

undefined2 __stdcall16far FUN_1010_3df6(undefined2 param_1)

{
  undefined2 uVar1;
  
  FUN_1158_0444();
  uVar1 = FUN_1010_3d28(0x3def,0x1158,param_1);
  return uVar1;
}



/* ---- FUN_1010_3e91 @ 1010:3e91  (226 octets) ---- */

undefined2 __stdcall16far FUN_1010_3e91(char param_1,int param_2)

{
  undefined2 uVar1;
  undefined2 unaff_SS;
  undefined *puVar2;
  undefined *puVar3;
  undefined2 uVar4;
  undefined local_404 [256];
  undefined local_304 [256];
  undefined local_204 [256];
  undefined local_104;
  undefined local_103 [253];
  undefined2 uStack_6;
  
  uStack_6 = 0x3e9c;
  FUN_1158_0444();
  puVar3 = local_404;
  uVar4 = unaff_SS;
  FUN_1158_17cd(0x3e48,0x1158);
  puVar2 = local_304;
  uVar1 = unaff_SS;
  FUN_1150_08a9(param_2,param_2 >> 0xf);
  FUN_1158_184c(puVar2,uVar1);
  FUN_1158_184c(0x3e63,0x1158);
  FUN_1158_17e7(0xff,&local_104,unaff_SS,puVar3,uVar4);
  FUN_1158_17e7(0xff,local_204,unaff_SS,0x3e65,0x1158);
  if (param_1 == '\0') {
    puVar3 = local_304;
    uVar1 = unaff_SS;
    FUN_1158_17cd(local_204,unaff_SS);
    FUN_1158_184c(0x3e7c,0x1158);
    FUN_1158_17e7(0xff,local_204,unaff_SS,puVar3,uVar1);
  }
  puVar3 = local_304;
  uVar1 = unaff_SS;
  FUN_1158_17cd(local_204,unaff_SS);
  FUN_1158_184c(0x3e63,0x1158);
  FUN_1158_17e7(0xff,local_204,unaff_SS,puVar3,uVar1);
  MESSAGEBEEP(0x1158,0x20);
  uVar1 = FUN_1140_75f9((int)DAT_1160_2c2a,(int)((ulong)DAT_1160_2c2a >> 0x10),0x24,local_103);
  return uVar1;
}




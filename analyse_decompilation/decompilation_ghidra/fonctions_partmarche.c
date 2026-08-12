/* ===== FUN_1008_2858 @ 1008:2858  (2924 octets) ===== */

void __stdcall16far FUN_1008_2858(undefined4 param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  undefined2 uVar8;
  char *pcVar9;
  char *pcVar10;
  undefined2 unaff_SS;
  undefined *puVar11;
  undefined2 uVar12;
  undefined *puVar13;
  undefined2 uVar14;
  undefined2 uVar15;
  undefined2 uVar16;
  undefined local_30a [256];
  undefined local_20a [256];
  undefined local_10a [220];
  int local_2e;
  int local_2c;
  undefined local_2a;
  int local_26;
  uint local_24;
  uint local_22;
  undefined local_20;
  int local_1e;
  int local_1c;
  uint local_1a;
  undefined local_18;
  int local_16;
  int local_14;
  undefined local_12;
  undefined uStack_11;
  undefined4 local_e;
  int local_a;
  int local_8;
  int local_6;
  int iVar17;
  
  local_6 = 0x2863;
  FUN_1158_0444();
  uVar8 = (undefined2)((ulong)param_1 >> 0x10);
  iVar7 = (int)param_1;
  FUN_1008_161f(iVar7,uVar8);
  local_e._2_2_ = (int)((ulong)*(undefined4 *)(iVar7 + 0x20c) >> 0x10);
  local_e._0_2_ = (undefined2)*(undefined4 *)(iVar7 + 0x20c);
  FUN_10d8_31d2((undefined2)local_e,local_e._2_2_);
  FUN_10e0_2ffb((undefined2)local_e,local_e._2_2_,1);
  FUN_10e0_2ed2((undefined2)local_e,local_e._2_2_,0);
  FUN_10d8_31bf((undefined2)local_e,local_e._2_2_);
  local_e._2_2_ = (int)((ulong)*(undefined4 *)(iVar7 + 0x1c8) >> 0x10);
  local_e._0_2_ = (undefined2)*(undefined4 *)(iVar7 + 0x1c8);
  FUN_10d8_31d2((undefined2)local_e,local_e._2_2_);
  FUN_10e0_2ffb((undefined2)local_e,local_e._2_2_,1);
  FUN_10e0_2ed2((undefined2)local_e,local_e._2_2_,0);
  FUN_10d8_31bf((undefined2)local_e,local_e._2_2_);
  local_e._2_2_ = (int)((ulong)*(undefined4 *)(iVar7 + 0x1d0) >> 0x10);
  local_e._0_2_ = (undefined2)*(undefined4 *)(iVar7 + 0x1d0);
  FUN_10d8_31d2((undefined2)local_e,local_e._2_2_);
  FUN_10e0_2ffb((undefined2)local_e,local_e._2_2_,1);
  FUN_10e0_2ed2((undefined2)local_e,local_e._2_2_,0);
  FUN_10d8_31bf((undefined2)local_e,local_e._2_2_);
  local_e._2_2_ = (int)((ulong)*(undefined4 *)(iVar7 + 0x1c4) >> 0x10);
  local_e._0_2_ = (undefined2)*(undefined4 *)(iVar7 + 0x1c4);
  FUN_10d8_31d2((undefined2)local_e,local_e._2_2_);
  FUN_10e0_2ffb((undefined2)local_e,local_e._2_2_,1);
  FUN_10e0_2ed2((undefined2)local_e,local_e._2_2_,0);
  FUN_10d8_31bf((undefined2)local_e,local_e._2_2_);
  local_e._2_2_ = (int)((ulong)*(undefined4 *)(iVar7 + 0x1d4) >> 0x10);
  local_e._0_2_ = (undefined2)*(undefined4 *)(iVar7 + 0x1d4);
  FUN_10d8_31d2((undefined2)local_e,local_e._2_2_);
  FUN_10e0_2ffb((undefined2)local_e,local_e._2_2_,1);
  FUN_10e0_2ed2((undefined2)local_e,local_e._2_2_,0);
  FUN_10d8_31bf((undefined2)local_e,local_e._2_2_);
  local_e._2_2_ = (int)((ulong)*(undefined4 *)(iVar7 + 0x1c0) >> 0x10);
  local_e._0_2_ = (undefined2)*(undefined4 *)(iVar7 + 0x1c0);
  FUN_10d8_31d2((undefined2)local_e,local_e._2_2_);
  FUN_10e0_2ffb((undefined2)local_e,local_e._2_2_,1);
  FUN_10e0_2ed2((undefined2)local_e,local_e._2_2_,0);
  FUN_10d8_31bf((undefined2)local_e,local_e._2_2_);
  local_e._2_2_ = (int)((ulong)*(undefined4 *)(iVar7 + 0x1bc) >> 0x10);
  local_e._0_2_ = (undefined2)*(undefined4 *)(iVar7 + 0x1bc);
  FUN_10d8_31d2((undefined2)local_e,local_e._2_2_);
  FUN_10e0_2ffb((undefined2)local_e,local_e._2_2_,1);
  FUN_10e0_2ed2((undefined2)local_e,local_e._2_2_,0);
  FUN_10d8_31bf((undefined2)local_e,local_e._2_2_);
  local_e = *(undefined4 *)(iVar7 + 0x1c8);
  local_16 = *(int *)(iVar7 + 0x39f);
  local_14 = local_16 >> 0xf;
  local_12 = 0;
  pcVar9 = (char *)s_iTime_1160_10dc + 4;
  cVar2 = FUN_10e0_2895((int)local_e,(int)((ulong)local_e >> 0x10),0,&local_16,unaff_SS);
  if (cVar2 == '\0') {
    pcVar9 = (char *)s_devices_1160_1007 + 1;
    FUN_1008_0c19(iVar7,uVar8);
  }
  uVar16 = 0;
  uVar15 = 0;
  puVar13 = local_20a;
  uVar14 = unaff_SS;
  FUN_1158_17cd(0x26b9,pcVar9);
  puVar11 = local_10a;
  uVar1 = *(undefined4 *)((int)*(undefined4 *)(iVar7 + 0x294) + 0xd8);
  uVar12 = unaff_SS;
  FUN_1148_1519((int)uVar1,(int)((ulong)uVar1 >> 0x10),0x26b5,0x1158);
  FUN_1158_184c(puVar11,uVar12);
  FUN_1158_184c(0x26bd,0x1158);
  puVar11 = local_30a;
  uVar12 = unaff_SS;
  FUN_1150_08a9(*(int *)(iVar7 + 0x39f),*(int *)(iVar7 + 0x39f) >> 0xf);
  FUN_1158_184c(puVar11,uVar12);
  pcVar9 = (char *)0x10f8;
  FUN_10f8_9b08((int)*param_2,(int)((ulong)*param_2 >> 0x10),puVar13,uVar14,uVar15,uVar16);
  local_a = *(int *)(iVar7 + 0x4a5);
  local_e = CONCAT22(DAT_1160_014e,(undefined2)local_e);
  if (0 < DAT_1160_014e) {
    iVar17 = 1;
    while( true ) {
      uVar1 = *(undefined4 *)(iVar7 + 0x1c4);
      local_14 = (int)uVar1;
      local_12 = (undefined)((ulong)uVar1 >> 0x10);
      uStack_11 = (undefined)((ulong)uVar1 >> 0x18);
      uVar3 = *(int *)(iVar7 + 0x39f) - 1;
      if (SBORROW2(*(int *)(iVar7 + 0x39f),1)) {
        uVar3 = FUN_1158_043e(pcVar9);
      }
      local_22 = (int)uVar3 >> 0xf;
      local_20 = 0;
      uVar6 = iVar17 >> 0xf;
      local_18 = 0;
      pcVar9 = (char *)s_iTime_1160_10dc + 4;
      local_24 = uVar3;
      local_1c = iVar17;
      local_1a = uVar6;
      cVar2 = FUN_10e0_2895(local_14,(int)(CONCAT13(uStack_11,CONCAT12(local_12,local_14)) >> 0x10),
                            1,&local_24,unaff_SS);
      if (cVar2 == '\0') {
        pcVar9 = (char *)s_devices_1160_1007 + 1;
        FUN_1008_0c19(iVar7,uVar8);
      }
      local_12 = (undefined)local_a;
      uStack_11 = (undefined)((uint)local_a >> 8);
      if (0 < local_a) {
        local_6 = 1;
        while( true ) {
          local_14 = (int)((ulong)*(undefined4 *)(iVar7 + 0x20c) >> 0x10);
          local_16 = (int)*(undefined4 *)(iVar7 + 0x20c);
          local_1c = local_6 >> 0xf;
          local_1e = local_6;
          local_1a = local_1a & 0xff00;
          cVar2 = FUN_10e0_2895(local_16,local_14,0,&local_1e,unaff_SS);
          if (cVar2 == '\0') {
            FUN_1008_0c19(iVar7,uVar8);
          }
          local_14 = (int)((ulong)*(undefined4 *)(iVar7 + 0x1d0) >> 0x10);
          local_16 = (int)*(undefined4 *)(iVar7 + 0x1d0);
          local_26 = *(int *)(iVar7 + 0x39f);
          local_24 = local_26 >> 0xf;
          local_22 = local_22 & 0xff00;
          local_1c = local_6 >> 0xf;
          local_1e = local_6;
          local_1a = local_1a & 0xff00;
          pcVar9 = (char *)s_iTime_1160_10dc + 4;
          cVar2 = FUN_10e0_2895(local_16,local_14,1,&local_26,unaff_SS);
          if (cVar2 == '\0') {
            pcVar9 = (char *)s_devices_1160_1007 + 1;
            FUN_1008_0c19(iVar7,uVar8);
          }
          local_14 = (int)((ulong)*(undefined4 *)(iVar7 + 0x1d4) >> 0x10);
          local_16 = (int)*(undefined4 *)(iVar7 + 0x1d4);
          iVar4 = *(int *)(iVar7 + 0x39f) + -1;
          if (SBORROW2(*(int *)(iVar7 + 0x39f),1)) {
            iVar4 = FUN_1158_043e(pcVar9);
          }
          local_2c = iVar4 >> 0xf;
          local_2a = 0;
          local_22 = local_22 & 0xff00;
          local_1c = local_6 >> 0xf;
          local_1e = local_6;
          local_1a = local_1a & 0xff00;
          local_2e = iVar4;
          local_26 = iVar17;
          local_24 = uVar6;
          cVar2 = FUN_10e0_2895(local_16,local_14,2,&local_2e,unaff_SS);
          if (cVar2 == '\0') {
            FUN_1008_0c19(iVar7,uVar8);
          }
          local_14 = (int)((ulong)*(undefined4 *)(iVar7 + 0x1c0) >> 0x10);
          local_16 = (int)*(undefined4 *)(iVar7 + 0x1c0);
          local_2e = *(int *)(iVar7 + 0x39f);
          local_2c = local_2e >> 0xf;
          local_2a = 0;
          local_22 = local_22 & 0xff00;
          local_1c = local_6 >> 0xf;
          local_1e = local_6;
          local_1a = local_1a & 0xff00;
          local_26 = iVar17;
          local_24 = uVar6;
          cVar2 = FUN_10e0_2895(local_16,local_14,2,&local_2e,unaff_SS);
          if (cVar2 == '\0') {
            FUN_1008_0c19(iVar7,uVar8);
          }
          local_14 = (int)((ulong)*(undefined4 *)(iVar7 + 0x1bc) >> 0x10);
          local_16 = (int)*(undefined4 *)(iVar7 + 0x1bc);
          local_2e = *(int *)(iVar7 + 0x39f);
          local_2c = local_2e >> 0xf;
          local_2a = 0;
          local_22 = local_22 & 0xff00;
          local_1c = local_6 >> 0xf;
          local_1e = local_6;
          local_1a = local_1a & 0xff00;
          pcVar9 = (char *)s_iTime_1160_10dc + 4;
          local_26 = iVar17;
          local_24 = uVar6;
          cVar2 = FUN_10e0_2895(local_16,local_14,2,&local_2e,unaff_SS);
          if (cVar2 == '\0') {
            pcVar9 = (char *)s_devices_1160_1007 + 1;
            FUN_1008_0c19(iVar7,uVar8);
          }
          local_8 = 3;
          iVar4 = iVar17 + -1;
          pcVar10 = pcVar9;
          if (SBORROW2(iVar17,1)) {
            pcVar10 = (char *)0x1158;
            iVar4 = FUN_1158_043e(pcVar9);
          }
          iVar5 = (int)((long)iVar4 * (long)local_a);
          pcVar9 = pcVar10;
          if ((long)iVar5 != (long)iVar4 * (long)local_a) {
            pcVar9 = (char *)0x1158;
            iVar5 = FUN_1158_043e(pcVar10);
          }
          iVar4 = iVar5 + local_6;
          pcVar10 = pcVar9;
          if (SCARRY2(iVar5,local_6)) {
            pcVar10 = (char *)0x1158;
            iVar4 = FUN_1158_043e(pcVar9);
          }
          pcVar9 = (char *)s_devices_1160_1007 + 1;
          FUN_1008_236d(&stack0xfffe,0x26c2,pcVar10,0x26bf,pcVar10,&local_8,unaff_SS,iVar4);
          iVar4 = iVar17 + -1;
          if (SBORROW2(iVar17,1)) {
            pcVar9 = (char *)0x1158;
            iVar4 = FUN_1158_043e((char *)s_devices_1160_1007 + 1);
          }
          iVar5 = (int)((long)iVar4 * (long)local_a);
          pcVar10 = pcVar9;
          if ((long)iVar5 != (long)iVar4 * (long)local_a) {
            pcVar10 = (char *)0x1158;
            iVar5 = FUN_1158_043e(pcVar9);
          }
          iVar4 = iVar5 + local_6;
          pcVar9 = pcVar10;
          if (SCARRY2(iVar5,local_6)) {
            pcVar9 = (char *)0x1158;
            iVar4 = FUN_1158_043e(pcVar10);
          }
          pcVar10 = (char *)s_devices_1160_1007 + 1;
          FUN_1008_2516(&stack0xfffe,0x26db,pcVar9,0x26d4,pcVar9,&local_8,unaff_SS,iVar4);
          iVar4 = iVar17 + -1;
          if (SBORROW2(iVar17,1)) {
            pcVar10 = (char *)0x1158;
            iVar4 = FUN_1158_043e((char *)s_devices_1160_1007 + 1);
          }
          iVar5 = (int)((long)iVar4 * (long)local_a);
          pcVar9 = pcVar10;
          if ((long)iVar5 != (long)iVar4 * (long)local_a) {
            pcVar9 = (char *)0x1158;
            iVar5 = FUN_1158_043e(pcVar10);
          }
          iVar4 = iVar5 + local_6;
          pcVar10 = pcVar9;
          if (SCARRY2(iVar5,local_6)) {
            pcVar10 = (char *)0x1158;
            iVar4 = FUN_1158_043e(pcVar9);
          }
          pcVar9 = (char *)s_devices_1160_1007 + 1;
          FUN_1008_2516(&stack0xfffe,0x26e5,pcVar10,0x26d4,pcVar10,&local_8,unaff_SS,iVar4);
          iVar4 = iVar17 + -1;
          if (SBORROW2(iVar17,1)) {
            pcVar9 = (char *)0x1158;
            iVar4 = FUN_1158_043e((char *)s_devices_1160_1007 + 1);
          }
          iVar5 = (int)((long)iVar4 * (long)local_a);
          pcVar10 = pcVar9;
          if ((long)iVar5 != (long)iVar4 * (long)local_a) {
            pcVar10 = (char *)0x1158;
            iVar5 = FUN_1158_043e(pcVar9);
          }
          iVar4 = iVar5 + local_6;
          pcVar9 = pcVar10;
          if (SCARRY2(iVar5,local_6)) {
            pcVar9 = (char *)0x1158;
            iVar4 = FUN_1158_043e(pcVar10);
          }
          pcVar10 = (char *)s_devices_1160_1007 + 1;
          FUN_1008_2516(&stack0xfffe,0x26f1,pcVar9,0x26d4,pcVar9,&local_8,unaff_SS,iVar4);
          iVar4 = iVar17 + -1;
          if (SBORROW2(iVar17,1)) {
            pcVar10 = (char *)0x1158;
            iVar4 = FUN_1158_043e((char *)s_devices_1160_1007 + 1);
          }
          iVar5 = (int)((long)iVar4 * (long)local_a);
          pcVar9 = pcVar10;
          if ((long)iVar5 != (long)iVar4 * (long)local_a) {
            pcVar9 = (char *)0x1158;
            iVar5 = FUN_1158_043e(pcVar10);
          }
          iVar4 = iVar5 + local_6;
          pcVar10 = pcVar9;
          if (SCARRY2(iVar5,local_6)) {
            pcVar10 = (char *)0x1158;
            iVar4 = FUN_1158_043e(pcVar9);
          }
          pcVar9 = (char *)s_devices_1160_1007 + 1;
          FUN_1008_2516(&stack0xfffe,0x2701,pcVar10,0x26d4,pcVar10,&local_8,unaff_SS,iVar4);
          iVar4 = iVar17 + -1;
          if (SBORROW2(iVar17,1)) {
            pcVar9 = (char *)0x1158;
            iVar4 = FUN_1158_043e((char *)s_devices_1160_1007 + 1);
          }
          iVar5 = (int)((long)iVar4 * (long)local_a);
          pcVar10 = pcVar9;
          if ((long)iVar5 != (long)iVar4 * (long)local_a) {
            pcVar10 = (char *)0x1158;
            iVar5 = FUN_1158_043e(pcVar9);
          }
          iVar4 = iVar5 + local_6;
          pcVar9 = pcVar10;
          if (SCARRY2(iVar5,local_6)) {
            pcVar9 = (char *)0x1158;
            iVar4 = FUN_1158_043e(pcVar10);
          }
          pcVar10 = (char *)s_devices_1160_1007 + 1;
          FUN_1008_2516(&stack0xfffe,0x270d,pcVar9,0x26bf,pcVar9,&local_8,unaff_SS,iVar4);
          local_8 = local_8 + 1;
          iVar4 = iVar17 + -1;
          if (SBORROW2(iVar17,1)) {
            pcVar10 = (char *)0x1158;
            iVar4 = FUN_1158_043e((char *)s_devices_1160_1007 + 1);
          }
          iVar5 = (int)((long)iVar4 * (long)local_a);
          pcVar9 = pcVar10;
          if ((long)iVar5 != (long)iVar4 * (long)local_a) {
            pcVar9 = (char *)0x1158;
            iVar5 = FUN_1158_043e(pcVar10);
          }
          iVar4 = iVar5 + local_6;
          pcVar10 = pcVar9;
          if (SCARRY2(iVar5,local_6)) {
            pcVar10 = (char *)0x1158;
            iVar4 = FUN_1158_043e(pcVar9);
          }
          pcVar9 = (char *)s_devices_1160_1007 + 1;
          FUN_1008_236d(&stack0xfffe,0x271e,pcVar10,0x26d4,pcVar10,&local_8,unaff_SS,iVar4);
          iVar4 = iVar17 + -1;
          if (SBORROW2(iVar17,1)) {
            pcVar9 = (char *)0x1158;
            iVar4 = FUN_1158_043e((char *)s_devices_1160_1007 + 1);
          }
          iVar5 = (int)((long)iVar4 * (long)local_a);
          pcVar10 = pcVar9;
          if ((long)iVar5 != (long)iVar4 * (long)local_a) {
            pcVar10 = (char *)0x1158;
            iVar5 = FUN_1158_043e(pcVar9);
          }
          iVar4 = iVar5 + local_6;
          pcVar9 = pcVar10;
          if (SCARRY2(iVar5,local_6)) {
            pcVar9 = (char *)0x1158;
            iVar4 = FUN_1158_043e(pcVar10);
          }
          pcVar10 = (char *)s_devices_1160_1007 + 1;
          FUN_1008_2516(&stack0xfffe,0x2723,pcVar9,0x26d4,pcVar9,&local_8,unaff_SS,iVar4);
          iVar4 = iVar17 + -1;
          if (SBORROW2(iVar17,1)) {
            pcVar10 = (char *)0x1158;
            iVar4 = FUN_1158_043e((char *)s_devices_1160_1007 + 1);
          }
          iVar5 = (int)((long)iVar4 * (long)local_a);
          pcVar9 = pcVar10;
          if ((long)iVar5 != (long)iVar4 * (long)local_a) {
            pcVar9 = (char *)0x1158;
            iVar5 = FUN_1158_043e(pcVar10);
          }
          iVar4 = iVar5 + local_6;
          pcVar10 = pcVar9;
          if (SCARRY2(iVar5,local_6)) {
            pcVar10 = (char *)0x1158;
            iVar4 = FUN_1158_043e(pcVar9);
          }
          pcVar9 = (char *)s_devices_1160_1007 + 1;
          FUN_1008_236d(&stack0xfffe,0x2732,pcVar10,0x26d4,pcVar10,&local_8,unaff_SS,iVar4);
          iVar4 = iVar17 + -1;
          if (SBORROW2(iVar17,1)) {
            pcVar9 = (char *)0x1158;
            iVar4 = FUN_1158_043e((char *)s_devices_1160_1007 + 1);
          }
          iVar5 = (int)((long)iVar4 * (long)local_a);
          pcVar10 = pcVar9;
          if ((long)iVar5 != (long)iVar4 * (long)local_a) {
            pcVar10 = (char *)0x1158;
            iVar5 = FUN_1158_043e(pcVar9);
          }
          iVar4 = iVar5 + local_6;
          pcVar9 = pcVar10;
          if (SCARRY2(iVar5,local_6)) {
            pcVar9 = (char *)0x1158;
            iVar4 = FUN_1158_043e(pcVar10);
          }
          pcVar10 = (char *)s_devices_1160_1007 + 1;
          FUN_1008_2516(&stack0xfffe,0x273c,pcVar9,0x26d4,pcVar9,&local_8,unaff_SS,iVar4);
          iVar4 = iVar17 + -1;
          if (SBORROW2(iVar17,1)) {
            pcVar10 = (char *)0x1158;
            iVar4 = FUN_1158_043e((char *)s_devices_1160_1007 + 1);
          }
          iVar5 = (int)((long)iVar4 * (long)local_a);
          pcVar9 = pcVar10;
          if ((long)iVar5 != (long)iVar4 * (long)local_a) {
            pcVar9 = (char *)0x1158;
            iVar5 = FUN_1158_043e(pcVar10);
          }
          iVar4 = iVar5 + local_6;
          pcVar10 = pcVar9;
          if (SCARRY2(iVar5,local_6)) {
            pcVar10 = (char *)0x1158;
            iVar4 = FUN_1158_043e(pcVar9);
          }
          pcVar9 = (char *)s_devices_1160_1007 + 1;
          FUN_1008_2516(&stack0xfffe,0x274b,pcVar10,0x26d4,pcVar10,&local_8,unaff_SS,iVar4);
          iVar4 = iVar17 + -1;
          if (SBORROW2(iVar17,1)) {
            pcVar9 = (char *)0x1158;
            iVar4 = FUN_1158_043e((char *)s_devices_1160_1007 + 1);
          }
          iVar5 = (int)((long)iVar4 * (long)local_a);
          pcVar10 = pcVar9;
          if ((long)iVar5 != (long)iVar4 * (long)local_a) {
            pcVar10 = (char *)0x1158;
            iVar5 = FUN_1158_043e(pcVar9);
          }
          iVar4 = iVar5 + local_6;
          pcVar9 = pcVar10;
          if (SCARRY2(iVar5,local_6)) {
            pcVar9 = (char *)0x1158;
            iVar4 = FUN_1158_043e(pcVar10);
          }
          pcVar10 = (char *)s_devices_1160_1007 + 1;
          FUN_1008_2516(&stack0xfffe,0x2755,pcVar9,0x26d4,pcVar9,&local_8,unaff_SS,iVar4);
          iVar4 = iVar17 + -1;
          if (SBORROW2(iVar17,1)) {
            pcVar10 = (char *)0x1158;
            iVar4 = FUN_1158_043e((char *)s_devices_1160_1007 + 1);
          }
          iVar5 = (int)((long)iVar4 * (long)local_a);
          pcVar9 = pcVar10;
          if ((long)iVar5 != (long)iVar4 * (long)local_a) {
            pcVar9 = (char *)0x1158;
            iVar5 = FUN_1158_043e(pcVar10);
          }
          iVar4 = iVar5 + local_6;
          pcVar10 = pcVar9;
          if (SCARRY2(iVar5,local_6)) {
            pcVar10 = (char *)0x1158;
            iVar4 = FUN_1158_043e(pcVar9);
          }
          pcVar9 = (char *)s_devices_1160_1007 + 1;
          FUN_1008_236d(&stack0xfffe,0x2763,pcVar10,0x26bf,pcVar10,&local_8,unaff_SS,iVar4);
          iVar4 = iVar17 + -1;
          if (SBORROW2(iVar17,1)) {
            pcVar9 = (char *)0x1158;
            iVar4 = FUN_1158_043e((char *)s_devices_1160_1007 + 1);
          }
          iVar5 = (int)((long)iVar4 * (long)local_a);
          pcVar10 = pcVar9;
          if ((long)iVar5 != (long)iVar4 * (long)local_a) {
            pcVar10 = (char *)0x1158;
            iVar5 = FUN_1158_043e(pcVar9);
          }
          iVar4 = iVar5 + local_6;
          pcVar9 = pcVar10;
          if (SCARRY2(iVar5,local_6)) {
            pcVar9 = (char *)0x1158;
            iVar4 = FUN_1158_043e(pcVar10);
          }
          pcVar10 = (char *)s_devices_1160_1007 + 1;
          FUN_1008_2516(&stack0xfffe,0x2774,pcVar9,0x26d4,pcVar9,&local_8,unaff_SS,iVar4);
          iVar4 = iVar17 + -1;
          if (SBORROW2(iVar17,1)) {
            pcVar10 = (char *)0x1158;
            iVar4 = FUN_1158_043e((char *)s_devices_1160_1007 + 1);
          }
          iVar5 = (int)((long)iVar4 * (long)local_a);
          pcVar9 = pcVar10;
          if ((long)iVar5 != (long)iVar4 * (long)local_a) {
            pcVar9 = (char *)0x1158;
            iVar5 = FUN_1158_043e(pcVar10);
          }
          iVar4 = iVar5 + local_6;
          pcVar10 = pcVar9;
          if (SCARRY2(iVar5,local_6)) {
            pcVar10 = (char *)0x1158;
            iVar4 = FUN_1158_043e(pcVar9);
          }
          pcVar9 = (char *)s_devices_1160_1007 + 1;
          FUN_1008_2516(&stack0xfffe,0x2788,pcVar10,0x26d4,pcVar10,&local_8,unaff_SS,iVar4);
          iVar4 = iVar17 + -1;
          if (SBORROW2(iVar17,1)) {
            pcVar9 = (char *)0x1158;
            iVar4 = FUN_1158_043e((char *)s_devices_1160_1007 + 1);
          }
          iVar5 = (int)((long)iVar4 * (long)local_a);
          pcVar10 = pcVar9;
          if ((long)iVar5 != (long)iVar4 * (long)local_a) {
            pcVar10 = (char *)0x1158;
            iVar5 = FUN_1158_043e(pcVar9);
          }
          iVar4 = iVar5 + local_6;
          pcVar9 = pcVar10;
          if (SCARRY2(iVar5,local_6)) {
            pcVar9 = (char *)0x1158;
            iVar4 = FUN_1158_043e(pcVar10);
          }
          pcVar10 = (char *)s_devices_1160_1007 + 1;
          FUN_1008_236d(&stack0xfffe,0x279a,pcVar9,0x26bf,pcVar9,&local_8,unaff_SS,iVar4);
          iVar4 = iVar17 + -1;
          if (SBORROW2(iVar17,1)) {
            pcVar10 = (char *)0x1158;
            iVar4 = FUN_1158_043e((char *)s_devices_1160_1007 + 1);
          }
          iVar5 = (int)((long)iVar4 * (long)local_a);
          pcVar9 = pcVar10;
          if ((long)iVar5 != (long)iVar4 * (long)local_a) {
            pcVar9 = (char *)0x1158;
            iVar5 = FUN_1158_043e(pcVar10);
          }
          iVar4 = iVar5 + local_6;
          pcVar10 = pcVar9;
          if (SCARRY2(iVar5,local_6)) {
            pcVar10 = (char *)0x1158;
            iVar4 = FUN_1158_043e(pcVar9);
          }
          pcVar9 = (char *)s_devices_1160_1007 + 1;
          FUN_1008_2516(&stack0xfffe,0x27ac,pcVar10,0x26d4,pcVar10,&local_8,unaff_SS,iVar4);
          local_8 = local_8 + 1;
          iVar4 = iVar17 + -1;
          if (SBORROW2(iVar17,1)) {
            pcVar9 = (char *)0x1158;
            iVar4 = FUN_1158_043e((char *)s_devices_1160_1007 + 1);
          }
          iVar5 = (int)((long)iVar4 * (long)local_a);
          pcVar10 = pcVar9;
          if ((long)iVar5 != (long)iVar4 * (long)local_a) {
            pcVar10 = (char *)0x1158;
            iVar5 = FUN_1158_043e(pcVar9);
          }
          iVar4 = iVar5 + local_6;
          pcVar9 = pcVar10;
          if (SCARRY2(iVar5,local_6)) {
            pcVar9 = (char *)0x1158;
            iVar4 = FUN_1158_043e(pcVar10);
          }
          pcVar10 = (char *)s_devices_1160_1007 + 1;
          FUN_1008_2516(&stack0xfffe,0x27c4,pcVar9,0x27bd,pcVar9,&local_8,unaff_SS,iVar4);
          iVar4 = iVar17 + -1;
          if (SBORROW2(iVar17,1)) {
            pcVar10 = (char *)0x1158;
            iVar4 = FUN_1158_043e((char *)s_devices_1160_1007 + 1);
          }
          iVar5 = (int)((long)iVar4 * (long)local_a);
          pcVar9 = pcVar10;
          if ((long)iVar5 != (long)iVar4 * (long)local_a) {
            pcVar9 = (char *)0x1158;
            iVar5 = FUN_1158_043e(pcVar10);
          }
          iVar4 = iVar5 + local_6;
          pcVar10 = pcVar9;
          if (SCARRY2(iVar5,local_6)) {
            pcVar10 = (char *)0x1158;
            iVar4 = FUN_1158_043e(pcVar9);
          }
          pcVar9 = (char *)s_devices_1160_1007 + 1;
          FUN_1008_2516(&stack0xfffe,0x27d1,pcVar10,0x27bd,pcVar10,&local_8,unaff_SS,iVar4);
          iVar4 = iVar17 + -1;
          if (SBORROW2(iVar17,1)) {
            pcVar9 = (char *)0x1158;
            iVar4 = FUN_1158_043e((char *)s_devices_1160_1007 + 1);
          }
          iVar5 = (int)((long)iVar4 * (long)local_a);
          pcVar10 = pcVar9;
          if ((long)iVar5 != (long)iVar4 * (long)local_a) {
            pcVar10 = (char *)0x1158;
            iVar5 = FUN_1158_043e(pcVar9);
          }
          iVar4 = iVar5 + local_6;
          pcVar9 = pcVar10;
          if (SCARRY2(iVar5,local_6)) {
            pcVar9 = (char *)0x1158;
            iVar4 = FUN_1158_043e(pcVar10);
          }
          pcVar10 = (char *)s_devices_1160_1007 + 1;
          FUN_1008_2516(&stack0xfffe,0x27dd,pcVar9,0x27bd,pcVar9,&local_8,unaff_SS,iVar4);
          iVar4 = iVar17 + -1;
          if (SBORROW2(iVar17,1)) {
            pcVar10 = (char *)0x1158;
            iVar4 = FUN_1158_043e((char *)s_devices_1160_1007 + 1);
          }
          iVar5 = (int)((long)iVar4 * (long)local_a);
          pcVar9 = pcVar10;
          if ((long)iVar5 != (long)iVar4 * (long)local_a) {
            pcVar9 = (char *)0x1158;
            iVar5 = FUN_1158_043e(pcVar10);
          }
          iVar4 = iVar5 + local_6;
          pcVar10 = pcVar9;
          if (SCARRY2(iVar5,local_6)) {
            pcVar10 = (char *)0x1158;
            iVar4 = FUN_1158_043e(pcVar9);
          }
          pcVar9 = (char *)s_devices_1160_1007 + 1;
          FUN_1008_2516(&stack0xfffe,0x27ec,pcVar10,0x27bd,pcVar10,&local_8,unaff_SS,iVar4);
          iVar4 = iVar17 + -1;
          if (SBORROW2(iVar17,1)) {
            pcVar9 = (char *)0x1158;
            iVar4 = FUN_1158_043e((char *)s_devices_1160_1007 + 1);
          }
          iVar5 = (int)((long)iVar4 * (long)local_a);
          pcVar10 = pcVar9;
          if ((long)iVar5 != (long)iVar4 * (long)local_a) {
            pcVar10 = (char *)0x1158;
            iVar5 = FUN_1158_043e(pcVar9);
          }
          iVar4 = iVar5 + local_6;
          pcVar9 = pcVar10;
          if (SCARRY2(iVar5,local_6)) {
            pcVar9 = (char *)0x1158;
            iVar4 = FUN_1158_043e(pcVar10);
          }
          pcVar10 = (char *)s_devices_1160_1007 + 1;
          FUN_1008_2516(&stack0xfffe,0x27fc,pcVar9,0x27bd,pcVar9,&local_8,unaff_SS,iVar4);
          local_8 = local_8 + 1;
          iVar4 = iVar17 + -1;
          if (SBORROW2(iVar17,1)) {
            pcVar10 = (char *)0x1158;
            iVar4 = FUN_1158_043e((char *)s_devices_1160_1007 + 1);
          }
          iVar5 = (int)((long)iVar4 * (long)local_a);
          pcVar9 = pcVar10;
          if ((long)iVar5 != (long)iVar4 * (long)local_a) {
            pcVar9 = (char *)0x1158;
            iVar5 = FUN_1158_043e(pcVar10);
          }
          iVar4 = iVar5 + local_6;
          pcVar10 = pcVar9;
          if (SCARRY2(iVar5,local_6)) {
            pcVar10 = (char *)0x1158;
            iVar4 = FUN_1158_043e(pcVar9);
          }
          pcVar9 = (char *)s_devices_1160_1007 + 1;
          FUN_1008_2516(&stack0xfffe,0x280b,pcVar10,0x26bf,pcVar10,&local_8,unaff_SS,iVar4);
          iVar4 = iVar17 + -1;
          if (SBORROW2(iVar17,1)) {
            pcVar9 = (char *)0x1158;
            iVar4 = FUN_1158_043e((char *)s_devices_1160_1007 + 1);
          }
          iVar5 = (int)((long)iVar4 * (long)local_a);
          pcVar10 = pcVar9;
          if ((long)iVar5 != (long)iVar4 * (long)local_a) {
            pcVar10 = (char *)0x1158;
            iVar5 = FUN_1158_043e(pcVar9);
          }
          iVar4 = iVar5 + local_6;
          pcVar9 = pcVar10;
          if (SCARRY2(iVar5,local_6)) {
            pcVar9 = (char *)0x1158;
            iVar4 = FUN_1158_043e(pcVar10);
          }
          pcVar10 = (char *)s_devices_1160_1007 + 1;
          FUN_1008_2516(&stack0xfffe,0x2812,pcVar9,0x27bd,pcVar9,&local_8,unaff_SS,iVar4);
          iVar4 = iVar17 + -1;
          if (SBORROW2(iVar17,1)) {
            pcVar10 = (char *)0x1158;
            iVar4 = FUN_1158_043e((char *)s_devices_1160_1007 + 1);
          }
          iVar5 = (int)((long)iVar4 * (long)local_a);
          pcVar9 = pcVar10;
          if ((long)iVar5 != (long)iVar4 * (long)local_a) {
            pcVar9 = (char *)0x1158;
            iVar5 = FUN_1158_043e(pcVar10);
          }
          iVar4 = iVar5 + local_6;
          pcVar10 = pcVar9;
          if (SCARRY2(iVar5,local_6)) {
            pcVar10 = (char *)0x1158;
            iVar4 = FUN_1158_043e(pcVar9);
          }
          pcVar9 = (char *)s_devices_1160_1007 + 1;
          FUN_1008_2516(&stack0xfffe,0x281d,pcVar10,0x26bf,pcVar10,&local_8,unaff_SS,iVar4);
          iVar4 = iVar17 + -1;
          if (SBORROW2(iVar17,1)) {
            pcVar9 = (char *)0x1158;
            iVar4 = FUN_1158_043e((char *)s_devices_1160_1007 + 1);
          }
          iVar5 = (int)((long)iVar4 * (long)local_a);
          pcVar10 = pcVar9;
          if ((long)iVar5 != (long)iVar4 * (long)local_a) {
            pcVar10 = (char *)0x1158;
            iVar5 = FUN_1158_043e(pcVar9);
          }
          iVar4 = iVar5 + local_6;
          pcVar9 = pcVar10;
          if (SCARRY2(iVar5,local_6)) {
            pcVar9 = (char *)0x1158;
            iVar4 = FUN_1158_043e(pcVar10);
          }
          pcVar10 = (char *)s_devices_1160_1007 + 1;
          FUN_1008_2516(&stack0xfffe,0x2832,pcVar9,0x26bf,pcVar9,&local_8,unaff_SS,iVar4);
          local_8 = local_8 + 1;
          iVar4 = iVar17 + -1;
          if (SBORROW2(iVar17,1)) {
            pcVar10 = (char *)0x1158;
            iVar4 = FUN_1158_043e((char *)s_devices_1160_1007 + 1);
          }
          iVar5 = (int)((long)iVar4 * (long)local_a);
          pcVar9 = pcVar10;
          if ((long)iVar5 != (long)iVar4 * (long)local_a) {
            pcVar9 = (char *)0x1158;
            iVar5 = FUN_1158_043e(pcVar10);
          }
          iVar4 = iVar5 + local_6;
          pcVar10 = pcVar9;
          if (SCARRY2(iVar5,local_6)) {
            pcVar10 = (char *)0x1158;
            iVar4 = FUN_1158_043e(pcVar9);
          }
          pcVar9 = (char *)s_devices_1160_1007 + 1;
          FUN_1008_2516(&stack0xfffe,0x283f,pcVar10,0x26d4,pcVar10,&local_8,unaff_SS,iVar4);
          iVar4 = iVar17 + -1;
          if (SBORROW2(iVar17,1)) {
            pcVar9 = (char *)0x1158;
            iVar4 = FUN_1158_043e((char *)s_devices_1160_1007 + 1);
          }
          iVar5 = (int)((long)iVar4 * (long)local_a);
          pcVar10 = pcVar9;
          if ((long)iVar5 != (long)iVar4 * (long)local_a) {
            pcVar10 = (char *)0x1158;
            iVar5 = FUN_1158_043e(pcVar9);
          }
          iVar4 = iVar5 + local_6;
          pcVar9 = pcVar10;
          if (SCARRY2(iVar5,local_6)) {
            pcVar9 = (char *)0x1158;
            iVar4 = FUN_1158_043e(pcVar10);
          }
          pcVar10 = (char *)s_devices_1160_1007 + 1;
          FUN_1008_2516(&stack0xfffe,0x2842,pcVar9,0x26d4,pcVar9,&local_8,unaff_SS,iVar4);
          iVar4 = iVar17 + -1;
          if (SBORROW2(iVar17,1)) {
            pcVar10 = (char *)0x1158;
            iVar4 = FUN_1158_043e((char *)s_devices_1160_1007 + 1);
          }
          iVar5 = (int)((long)iVar4 * (long)local_a);
          pcVar9 = pcVar10;
          if ((long)iVar5 != (long)iVar4 * (long)local_a) {
            pcVar9 = (char *)0x1158;
            iVar5 = FUN_1158_043e(pcVar10);
          }
          iVar4 = iVar5 + local_6;
          pcVar10 = pcVar9;
          if (SCARRY2(iVar5,local_6)) {
            pcVar10 = (char *)0x1158;
            iVar4 = FUN_1158_043e(pcVar9);
          }
          pcVar9 = (char *)s_devices_1160_1007 + 1;
          FUN_1008_2516(&stack0xfffe,0x284d,pcVar10,0x26d4,pcVar10,&local_8,unaff_SS,iVar4);
          if (local_6 == CONCAT11(uStack_11,local_12)) break;
          local_6 = local_6 + 1;
        }
      }
      if (iVar17 == local_e._2_2_) break;
      iVar17 = iVar17 + 1;
    }
  }
  FUN_1140_3fd0(iVar7,uVar8,*(undefined2 *)(iVar7 + 0x31c),*(undefined2 *)(iVar7 + 0x31e));
  FUN_10d8_31d2((int)*(undefined4 *)(iVar7 + 0x1bc),
                (int)((ulong)*(undefined4 *)(iVar7 + 0x1bc) >> 0x10));
  FUN_10d8_31d2((int)*(undefined4 *)(iVar7 + 0x1c0),
                (int)((ulong)*(undefined4 *)(iVar7 + 0x1c0) >> 0x10));
  FUN_10d8_31d2((int)*(undefined4 *)(iVar7 + 0x1d4),
                (int)((ulong)*(undefined4 *)(iVar7 + 0x1d4) >> 0x10));
  FUN_10d8_31d2((int)*(undefined4 *)(iVar7 + 0x1c4),
                (int)((ulong)*(undefined4 *)(iVar7 + 0x1c4) >> 0x10));
  FUN_10d8_31d2((int)*(undefined4 *)(iVar7 + 0x1d0),
                (int)((ulong)*(undefined4 *)(iVar7 + 0x1d0) >> 0x10));
  FUN_10d8_31d2((int)*(undefined4 *)(iVar7 + 0x1c8),
                (int)((ulong)*(undefined4 *)(iVar7 + 0x1c8) >> 0x10));
  FUN_10d8_31d2((int)*(undefined4 *)(iVar7 + 0x20c),
                (int)((ulong)*(undefined4 *)(iVar7 + 0x20c) >> 0x10));
  return;
}



/* ===== FUN_1020_5051 @ 1020:5051  (616 octets) ===== */

void __stdcall16far FUN_1020_5051(undefined4 param_1)

{
  undefined2 *puVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  undefined2 uVar8;
  undefined2 unaff_SS;
  bool bVar9;
  undefined4 *puVar10;
  long lVar11;
  undefined local_112 [256];
  undefined4 local_12;
  undefined4 local_e;
  uint local_a;
  int local_8;
  uint local_6;
  int iVar12;
  
  local_6 = 0x505c;
  FUN_1158_0444();
  uVar7 = (undefined2)((ulong)param_1 >> 0x10);
  iVar5 = (int)param_1;
  FUN_1020_7d90(iVar5,CONCAT42(0x11585016,uVar7),0xffff,0xffff);
  uVar8 = (undefined2)((ulong)*(undefined4 *)(iVar5 + 0x2e8) >> 0x10);
  uVar6 = (undefined2)*(undefined4 *)(iVar5 + 0x2e8);
  FUN_10d8_31d2(uVar6,uVar8);
  FUN_10e0_2ffb();
  FUN_10e0_2ed2();
  FUN_10d8_31bf(uVar6,uVar8);
  uVar2 = DAT_1160_1ea2;
  iVar4 = (int)DAT_1160_1ea2 >> 0xf;
  if ((-1 < iVar4) && ((0 < iVar4 || (DAT_1160_1ea2 != 0)))) {
    local_6 = 1;
    iVar12 = 0;
    while( true ) {
      local_12 = 0;
      local_a = 1;
      local_8 = 0;
      while( true ) {
        cVar3 = FUN_10e0_2895();
        if (cVar3 == '\0') {
          FUN_1020_10f6(iVar5,uVar7);
        }
        puVar10 = (undefined4 *)FUN_10d8_3b9b();
        puVar1 = (undefined2 *)((int)*puVar10 + 0x44);
        local_e = (*(code *)*puVar1)();
        FUN_1020_122d(iVar5,uVar7,0,0xc,(double)local_e);
        FUN_1158_17e7();
        uVar6 = FUN_1158_0416();
        uVar8 = FUN_1158_0416(uVar6);
        FUN_10f8_9b08((int)*(undefined4 *)(iVar5 + 0x198),
                      CONCAT42((undefined *)CONCAT22(unaff_SS,local_112),
                               (int)((ulong)*(undefined4 *)(iVar5 + 0x198) >> 0x10)),uVar8,uVar6);
        lVar11 = CONCAT22(local_12._2_2_ + local_e._2_2_ +
                          (uint)CARRY2((uint)local_12,(uint)local_e),(uint)local_12 + (uint)local_e)
        ;
        if (SCARRY2(local_12._2_2_,local_e._2_2_) !=
            SCARRY2(local_12._2_2_ + local_e._2_2_,(uint)CARRY2((uint)local_12,(uint)local_e))) {
          lVar11 = FUN_1158_043e(0x10f8);
        }
        local_12 = lVar11;
        if ((local_8 == 0) && (local_a == 2)) break;
        bVar9 = 0xfffe < local_a;
        local_a = local_a + 1;
        local_8 = local_8 + (uint)bVar9;
      }
      FUN_1020_122d(iVar5,uVar7,0,0xc,(double)local_12);
      FUN_1158_17e7();
      uVar8 = 3;
      uVar6 = FUN_1158_0416(3);
      FUN_10f8_9b08((int)*(undefined4 *)(iVar5 + 0x198),
                    CONCAT42((undefined *)CONCAT22(unaff_SS,local_112),
                             (int)((ulong)*(undefined4 *)(iVar5 + 0x198) >> 0x10)),uVar6,uVar8);
      if ((iVar12 == iVar4) && (local_6 == uVar2)) break;
      bVar9 = 0xfffe < local_6;
      local_6 = local_6 + 1;
      iVar12 = iVar12 + (uint)bVar9;
    }
  }
  FUN_10d8_31d2((int)*(undefined4 *)(iVar5 + 0x2e8),
                (int)((ulong)*(undefined4 *)(iVar5 + 0x2e8) >> 0x10));
  *(undefined *)(iVar5 + 0x85d) = 0;
  *(undefined8 *)(iVar5 + 0x866) = 0;
  FUN_1020_146f(iVar5,uVar7);
  FUN_1020_2ba2();
  return;
}



/* ===== FUN_1020_66ee @ 1020:66ee  (672 octets) ===== */

void __stdcall16far FUN_1020_66ee(undefined4 param_1,int param_2)

{
  double dVar1;
  undefined2 *puVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  char cVar5;
  undefined2 uVar6;
  int iVar7;
  undefined2 uVar8;
  int iVar9;
  undefined2 uVar10;
  char *pcVar11;
  undefined2 unaff_SS;
  bool bVar12;
  longdouble in_ST0;
  longdouble lVar13;
  longdouble in_ST1;
  longdouble in_ST2;
  longdouble in_ST3;
  longdouble in_ST4;
  longdouble in_ST5;
  longdouble in_ST6;
  undefined4 *puVar14;
  undefined *puVar15;
  undefined2 uVar16;
  undefined local_226 [4];
  undefined local_222 [228];
  uint local_13e;
  int local_13c;
  undefined local_13a;
  uint local_136;
  int local_134;
  undefined local_132;
  int local_12e;
  int local_12c;
  undefined local_12a;
  uint local_126;
  int local_124;
  undefined4 local_122;
  undefined4 local_11e;
  undefined local_11a [256];
  undefined8 local_1a;
  undefined8 local_12;
  uint local_a;
  int local_8;
  uint local_6;
  int iVar17;
  
  local_6 = 0x66f9;
  FUN_1158_0444();
  uVar10 = (undefined2)((ulong)param_1 >> 0x10);
  iVar9 = (int)param_1;
  FUN_1020_7d90(iVar9,uVar10,0x66c7,0x1158,0xffff,param_2);
  local_11e._2_2_ = (int)((ulong)*(undefined4 *)(iVar9 + 0x2e4) >> 0x10);
  local_11e._0_2_ = (uint)*(undefined4 *)(iVar9 + 0x2e4);
  FUN_10d8_31d2((uint)local_11e,local_11e._2_2_);
  FUN_10e0_2ffb((uint)local_11e,local_11e._2_2_,1);
  FUN_10e0_2ed2((uint)local_11e,local_11e._2_2_,0);
  FUN_10d8_31bf((uint)local_11e,local_11e._2_2_);
  local_11e = (long)DAT_1160_1ea2;
  if ((-1 < DAT_1160_1ea2 >> 0xf) && ((0 < DAT_1160_1ea2 >> 0xf || (DAT_1160_1ea2 != 0)))) {
    local_6 = 1;
    iVar17 = 0;
    while( true ) {
      local_122 = *(undefined4 *)(iVar9 + 0x2e4);
      local_1a = 0.0;
      local_124 = (int)DAT_1160_014e >> 0xf;
      local_126 = DAT_1160_014e;
      dVar1 = 0.0;
      if ((-1 < local_124) && ((0 < local_124 || (dVar1 = local_1a, DAT_1160_014e != 0)))) {
        local_a = 1;
        local_8 = 0;
        lVar13 = in_ST0;
        in_ST0 = in_ST1;
        in_ST1 = in_ST2;
        in_ST2 = in_ST3;
        in_ST3 = in_ST4;
        in_ST4 = in_ST5;
        in_ST5 = in_ST6;
        local_1a = 0.0;
        while( true ) {
          local_13e = local_6;
          local_13a = 0;
          local_136 = local_a;
          local_134 = local_8;
          local_132 = 0;
          local_12c = param_2 >> 0xf;
          local_12e = param_2;
          local_12a = 0;
          pcVar11 = (char *)s_iTime_1160_10dc + 4;
          in_ST6 = in_ST5;
          local_13c = iVar17;
          cVar5 = FUN_10e0_2895((int)local_122,(int)((ulong)local_122 >> 0x10),2,&local_13e,unaff_SS
                               );
          if (cVar5 == '\0') {
            pcVar11 = (char *)0x1020;
            FUN_1020_10f6(iVar9,uVar10);
          }
          puVar14 = (undefined4 *)
                    FUN_10d8_3b9b((int)local_122,(int)((ulong)local_122 >> 0x10),0x66db,pcVar11);
          puVar2 = (undefined2 *)((int)*puVar14 + 0x40);
          (*(code *)*puVar2)(0x10d8,puVar14);
          dVar1 = (double)lVar13;
          puVar15 = local_226;
          local_12._6_2_ = (undefined2)((qword)dVar1 >> 0x30);
          uVar3 = local_12._6_2_;
          local_12._4_2_ = (undefined2)((qword)dVar1 >> 0x20);
          uVar6 = local_12._4_2_;
          local_12._2_2_ = (undefined2)((qword)dVar1 >> 0x10);
          uVar8 = local_12._2_2_;
          local_12._0_2_ = SUB82(dVar1,0);
          uVar16 = unaff_SS;
          uVar4 = (undefined2)local_12;
          local_12 = dVar1;
          FUN_1020_122d(iVar9,uVar10,2,0xc,uVar4,uVar8,uVar6,uVar3);
          FUN_1158_17e7(0xff,local_11a,unaff_SS,puVar15,uVar16);
          uVar8 = FUN_1158_0416();
          uVar6 = FUN_1158_0416(uVar8);
          FUN_10f8_9b08((int)*(undefined4 *)(iVar9 + 0x198),
                        (int)((ulong)*(undefined4 *)(iVar9 + 0x198) >> 0x10),local_11a,unaff_SS,
                        uVar6,uVar8);
          local_1a = local_1a + local_12;
          if ((local_8 == local_124) && (dVar1 = local_1a, local_a == local_126)) break;
          bVar12 = 0xfffe < local_a;
          local_a = local_a + 1;
          local_8 = local_8 + (uint)bVar12;
          lVar13 = in_ST0;
          in_ST0 = in_ST1;
          in_ST1 = in_ST2;
          in_ST2 = in_ST3;
          in_ST3 = in_ST4;
          in_ST4 = in_ST5;
          in_ST5 = in_ST6;
        }
      }
      local_1a = dVar1;
      puVar15 = local_222;
      uVar8 = unaff_SS;
      FUN_1020_122d(iVar9,uVar10,0,0xc,(undefined2)local_1a,local_1a._2_2_,local_1a._4_2_,
                    local_1a._6_2_);
      FUN_1158_17e7(0xff,local_11a,unaff_SS,puVar15,uVar8);
      iVar7 = DAT_1160_014e + 1;
      if (SCARRY2(DAT_1160_014e,1)) {
        iVar7 = FUN_1158_043e(0x1158);
      }
      uVar8 = FUN_1158_0416(iVar7);
      FUN_10f8_9b08((int)*(undefined4 *)(iVar9 + 0x198),
                    (int)((ulong)*(undefined4 *)(iVar9 + 0x198) >> 0x10),local_11a,unaff_SS,uVar8,
                    iVar7);
      if ((iVar17 == local_11e._2_2_) && (local_6 == (uint)local_11e)) break;
      bVar12 = 0xfffe < local_6;
      local_6 = local_6 + 1;
      iVar17 = iVar17 + (uint)bVar12;
    }
  }
  FUN_10d8_31d2((int)*(undefined4 *)(iVar9 + 0x2e4),
                (int)((ulong)*(undefined4 *)(iVar9 + 0x2e4) >> 0x10));
  *(undefined *)(iVar9 + 0x85d) = 0;
  *(undefined8 *)(iVar9 + 0x866) = 0;
  FUN_1020_146f(iVar9,uVar10);
  FUN_1020_2ba2(iVar9,uVar10,iVar9,uVar10);
  return;
}



/* ===== FUN_1020_6be2 @ 1020:6be2  (621 octets) ===== */

void __stdcall16far FUN_1020_6be2(undefined4 param_1,int param_2)

{
  double dVar1;
  undefined2 *puVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  char cVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  int iVar8;
  undefined2 uVar9;
  char *pcVar10;
  undefined2 unaff_SS;
  bool bVar11;
  longdouble in_ST0;
  longdouble lVar12;
  longdouble in_ST1;
  longdouble in_ST2;
  longdouble in_ST3;
  longdouble in_ST4;
  longdouble in_ST5;
  longdouble in_ST6;
  undefined4 *puVar13;
  undefined *puVar14;
  undefined2 uVar15;
  undefined local_222 [232];
  uint local_13a;
  int local_138;
  undefined local_136;
  int local_132;
  int local_130;
  undefined local_12e;
  uint local_12a;
  int local_128;
  undefined local_126;
  undefined4 local_122;
  undefined4 local_11e;
  undefined local_11a [256];
  undefined8 local_1a;
  undefined8 local_12;
  uint local_a;
  int local_8;
  uint local_6;
  int iVar16;
  
  local_6 = 0x6bed;
  FUN_1158_0444();
  uVar9 = (undefined2)((ulong)param_1 >> 0x10);
  iVar8 = (int)param_1;
  FUN_1020_7d90(iVar8,uVar9,0x6bbb,0x1158,0xffff,param_2);
  local_11e._2_2_ = (int)((ulong)*(undefined4 *)(iVar8 + 0x2e4) >> 0x10);
  local_11e._0_2_ = (uint)*(undefined4 *)(iVar8 + 0x2e4);
  FUN_10d8_31d2((uint)local_11e,local_11e._2_2_);
  FUN_10e0_2ffb((uint)local_11e,local_11e._2_2_,1);
  FUN_10e0_2ed2((uint)local_11e,local_11e._2_2_,0);
  FUN_10d8_31bf((uint)local_11e,local_11e._2_2_);
  local_11e = (long)DAT_1160_1ea2;
  if ((-1 < DAT_1160_1ea2 >> 0xf) && ((0 < DAT_1160_1ea2 >> 0xf || (DAT_1160_1ea2 != 0)))) {
    local_6 = 1;
    iVar16 = 0;
    while( true ) {
      local_122 = *(undefined4 *)(iVar8 + 0x2e4);
      local_a = 1;
      local_8 = 0;
      lVar12 = in_ST0;
      in_ST0 = in_ST1;
      in_ST1 = in_ST2;
      in_ST2 = in_ST3;
      in_ST3 = in_ST4;
      in_ST4 = in_ST5;
      in_ST5 = in_ST6;
      local_1a = 0.0;
      while( true ) {
        local_13a = local_6;
        local_136 = 0;
        local_130 = param_2 >> 0xf;
        local_132 = param_2;
        local_12e = 0;
        local_12a = local_a;
        local_128 = local_8;
        local_126 = 0;
        pcVar10 = (char *)s_iTime_1160_10dc + 4;
        in_ST6 = in_ST5;
        local_138 = iVar16;
        cVar5 = FUN_10e0_2895((int)local_122,(int)((ulong)local_122 >> 0x10),2,&local_13a,unaff_SS);
        if (cVar5 == '\0') {
          pcVar10 = (char *)0x1020;
          FUN_1020_10f6(iVar8,uVar9);
        }
        puVar13 = (undefined4 *)
                  FUN_10d8_3b9b((int)local_122,(int)((ulong)local_122 >> 0x10),0x6bcf,pcVar10);
        puVar2 = (undefined2 *)((int)*puVar13 + 0x40);
        (*(code *)*puVar2)(0x10d8,puVar13);
        dVar1 = (double)lVar12;
        puVar14 = local_222;
        local_12._6_2_ = (undefined2)((qword)dVar1 >> 0x30);
        uVar3 = local_12._6_2_;
        local_12._4_2_ = (undefined2)((qword)dVar1 >> 0x20);
        uVar7 = local_12._4_2_;
        local_12._2_2_ = (undefined2)((qword)dVar1 >> 0x10);
        uVar6 = local_12._2_2_;
        local_12._0_2_ = SUB82(dVar1,0);
        uVar15 = unaff_SS;
        uVar4 = (undefined2)local_12;
        local_12 = dVar1;
        FUN_1020_122d(iVar8,uVar9,2,0xc,uVar4,uVar6,uVar7,uVar3);
        FUN_1158_17e7(0xff,local_11a,unaff_SS,puVar14,uVar15);
        uVar6 = FUN_1158_0416();
        uVar7 = FUN_1158_0416(uVar6);
        FUN_10f8_9b08((int)*(undefined4 *)(iVar8 + 0x198),
                      (int)((ulong)*(undefined4 *)(iVar8 + 0x198) >> 0x10),local_11a,unaff_SS,uVar7,
                      uVar6);
        dVar1 = local_1a + local_12;
        local_1a = dVar1;
        if ((local_8 == 0) && (local_a == 2)) break;
        bVar11 = 0xfffe < local_a;
        local_a = local_a + 1;
        local_8 = local_8 + (uint)bVar11;
        lVar12 = in_ST0;
        in_ST0 = in_ST1;
        in_ST1 = in_ST2;
        in_ST2 = in_ST3;
        in_ST3 = in_ST4;
        in_ST4 = in_ST5;
        in_ST5 = in_ST6;
      }
      puVar14 = local_222;
      local_1a._6_2_ = (undefined2)((qword)dVar1 >> 0x30);
      uVar3 = local_1a._6_2_;
      local_1a._4_2_ = (undefined2)((qword)dVar1 >> 0x20);
      uVar7 = local_1a._4_2_;
      local_1a._2_2_ = (undefined2)((qword)dVar1 >> 0x10);
      uVar6 = local_1a._2_2_;
      local_1a._0_2_ = SUB82(dVar1,0);
      uVar15 = unaff_SS;
      uVar4 = (undefined2)local_1a;
      FUN_1020_122d(iVar8,uVar9,0,0xc,uVar4,uVar6,uVar7,uVar3);
      FUN_1158_17e7(0xff,local_11a,unaff_SS,puVar14,uVar15);
      uVar7 = 3;
      uVar6 = FUN_1158_0416(3);
      FUN_10f8_9b08((int)*(undefined4 *)(iVar8 + 0x198),
                    (int)((ulong)*(undefined4 *)(iVar8 + 0x198) >> 0x10),local_11a,unaff_SS,uVar6,
                    uVar7);
      if ((iVar16 == local_11e._2_2_) && (local_6 == (uint)local_11e)) break;
      bVar11 = 0xfffe < local_6;
      local_6 = local_6 + 1;
      iVar16 = iVar16 + (uint)bVar11;
    }
  }
  FUN_10d8_31d2((int)*(undefined4 *)(iVar8 + 0x2e4),
                (int)((ulong)*(undefined4 *)(iVar8 + 0x2e4) >> 0x10));
  *(undefined *)(iVar8 + 0x85d) = 0;
  *(undefined8 *)(iVar8 + 0x866) = 0;
  FUN_1020_146f(iVar8,uVar9);
  FUN_1020_2ba2(iVar8,uVar9,iVar8,uVar9);
  return;
}



/* ===== FUN_1030_3fc2 @ 1030:3fc2  (4178 octets) ===== */

void __stdcall16far FUN_1030_3fc2(undefined4 param_1)

{
  double *pdVar1;
  int *piVar2;
  uint *puVar3;
  double dVar4;
  uint uVar5;
  uint uVar6;
  undefined2 *puVar7;
  byte bVar8;
  undefined2 uVar9;
  undefined2 uVar10;
  undefined uVar11;
  char cVar12;
  int iVar13;
  int iVar14;
  undefined2 uVar15;
  int iVar16;
  undefined2 extraout_DX;
  int iVar17;
  double *pdVar18;
  undefined2 uVar19;
  undefined2 uVar20;
  longdouble in_ST0;
  longdouble lVar21;
  longdouble lVar22;
  longdouble lVar23;
  longdouble lVar24;
  longdouble lVar25;
  longdouble lVar26;
  longdouble lVar27;
  longdouble in_ST1;
  longdouble lVar28;
  longdouble in_ST2;
  longdouble in_ST3;
  longdouble in_ST4;
  longdouble in_ST5;
  longdouble in_ST6;
  longdouble in_ST7;
  undefined4 uVar29;
  undefined4 *puVar30;
  undefined4 uVar31;
  long lVar32;
  int iVar33;
  undefined8 local_42;
  int iStack_3a;
  int local_38;
  ulong local_36;
  int local_32;
  int local_30;
  char local_2e;
  char cStack_2d;
  undefined local_2c;
  undefined uStack_2b;
  int local_2a;
  char local_28;
  byte bStack_27;
  undefined2 local_26;
  undefined2 local_24;
  int local_22;
  undefined4 local_20;
  int local_1c;
  undefined2 local_1a;
  undefined8 local_18;
  double local_10;
  int local_8;
  int local_6;
  
  local_6 = 0x3fcd;
  FUN_1158_0444();
  uVar19 = (undefined2)((ulong)param_1 >> 0x10);
  iVar17 = (int)param_1;
  local_1a = (undefined2)((ulong)*(undefined4 *)(iVar17 + 0x244) >> 0x10);
  local_1c = (int)*(undefined4 *)(iVar17 + 0x244);
  FUN_10d8_31d2();
  FUN_10e0_2ffb();
  FUN_10e0_2ed2();
  FUN_10d8_31bf();
  local_1a = (undefined2)((ulong)*(undefined4 *)(iVar17 + 0x238) >> 0x10);
  local_1c = (int)*(undefined4 *)(iVar17 + 0x238);
  FUN_10d8_31d2();
  FUN_10e0_2ffb();
  FUN_10e0_2ed2();
  FUN_10d8_31bf();
  local_1a = (undefined2)((ulong)*(undefined4 *)(iVar17 + 0x23c) >> 0x10);
  local_1c = (int)*(undefined4 *)(iVar17 + 0x23c);
  FUN_10d8_31d2();
  FUN_10e0_2ffb();
  FUN_10e0_2ed2();
  FUN_10d8_31bf();
  local_1a = (undefined2)((ulong)*(undefined4 *)(iVar17 + 0x240) >> 0x10);
  local_1c = (int)*(undefined4 *)(iVar17 + 0x240);
  FUN_10d8_31d2();
  FUN_10e0_2ffb();
  FUN_10e0_2ed2();
  FUN_10d8_31bf();
  local_1a = (undefined2)((ulong)*(undefined4 *)(iVar17 + 0x268) >> 0x10);
  local_1c = (int)*(undefined4 *)(iVar17 + 0x268);
  FUN_10d8_31d2();
  FUN_10e0_2ffb();
  FUN_10e0_2ed2();
  FUN_10d8_31bf();
  _local_1c = CONCAT22(uVar19,iVar17 + 0x41d);
  local_20._2_2_ = (int)((ulong)*(undefined4 *)(iVar17 + 0x244) >> 0x10);
  local_20._0_2_ = (double *)*(undefined4 *)(iVar17 + 0x244);
  local_22 = DAT_1160_014e;
  if (0 < DAT_1160_014e) {
    iVar14 = 1;
    while( true ) {
      local_32 = *(int *)(iVar17 + 0x318);
      local_30 = local_32 >> 0xf;
      local_2e = 0;
      local_28 = (char)(iVar14 >> 0xf);
      local_26._0_1_ = 0;
      local_2a = iVar14;
      bStack_27 = local_28;
      cVar12 = FUN_10e0_2895();
      if (cVar12 == '\0') {
        FUN_1030_0733();
      }
      iVar16 = FUN_1158_0416();
      local_26 = (double *)((int)_local_1c + iVar16 * 7 + -7);
      local_24._0_1_ = (undefined)((ulong)_local_1c >> 0x10);
      local_24._1_1_ = (undefined)((ulong)_local_1c >> 0x18);
      puVar30 = (undefined4 *)FUN_10d8_3b9b((double *)local_20,CONCAT42(0x11583dd5,local_20._2_2_));
      puVar7 = (undefined2 *)((int)*puVar30 + 0x38);
      uVar11 = (*(code *)*puVar7)();
      *(undefined *)CONCAT13(local_24._1_1_,CONCAT12((undefined)local_24,local_26)) = uVar11;
      puVar30 = (undefined4 *)FUN_10d8_3b9b();
      puVar7 = (undefined2 *)((int)*puVar30 + 0x38);
      uVar11 = (*(code *)*puVar7)();
      *(undefined *)((int)local_26 + 1) = uVar11;
      puVar30 = (undefined4 *)FUN_10d8_3b9b((double *)local_20,CONCAT42(0x10d83dfd,local_20._2_2_));
      puVar7 = (undefined2 *)((int)*puVar30 + 0x38);
      uVar11 = (*(code *)*puVar7)();
      *(undefined *)((int)local_26 + 2) = uVar11;
      puVar30 = (undefined4 *)FUN_10d8_3b9b((double *)local_20,local_20._2_2_,0x3e13);
      puVar7 = (undefined2 *)((int)*puVar30 + 0x38);
      uVar11 = (*(code *)*puVar7)(0x10d8,(undefined4 *)puVar30);
      *(undefined *)((int)local_26 + 3) = uVar11;
      puVar30 = (undefined4 *)FUN_10d8_3b9b((double *)local_20,local_20._2_2_,0x3e27,0x10d8);
      puVar7 = (undefined2 *)((int)*puVar30 + 0x38);
      uVar11 = (*(code *)*puVar7)(0x10d8,puVar30);
      *(undefined *)((int)local_26 + 4) = uVar11;
      puVar30 = (undefined4 *)FUN_10d8_3b9b((double *)local_20,local_20._2_2_,0x3e3c,0x10d8);
      puVar7 = (undefined2 *)((int)*puVar30 + 0x38);
      uVar11 = (*(code *)*puVar7)(0x10d8,puVar30);
      *(undefined *)((int)local_26 + 5) = uVar11;
      puVar30 = (undefined4 *)FUN_10d8_3b9b((double *)local_20,local_20._2_2_,0x3e4c,0x10d8);
      puVar7 = (undefined2 *)((int)*puVar30 + 0x38);
      uVar11 = (*(code *)*puVar7)(0x10d8,puVar30);
      *(undefined *)((int)local_26 + 6) = uVar11;
      if (iVar14 == local_22) break;
      iVar14 = iVar14 + 1;
    }
  }
  local_20 = (double *)*(undefined4 *)(iVar17 + 0x238);
  local_22 = DAT_1160_014e;
  if (0 < DAT_1160_014e) {
    iVar14 = 1;
    while( true ) {
      local_6 = 1;
      lVar27 = in_ST2;
      in_ST2 = in_ST5;
      while( true ) {
        iStack_3a = *(int *)(iVar17 + 0x318);
        local_38 = iStack_3a >> 0xf;
        local_36 = local_36 & 0xffffff00;
        local_30 = iVar14 >> 0xf;
        local_2e = 0;
        local_2a = local_6;
        local_28 = (char)(local_6 >> 0xf);
        local_26._0_1_ = 0;
        local_32 = iVar14;
        bStack_27 = local_28;
        cVar12 = FUN_10e0_2895();
        if (cVar12 == '\0') {
          FUN_1030_0733();
        }
        iVar16 = FUN_1158_0416();
        iVar16 = iVar16 << 5;
        iVar13 = FUN_1158_0416();
        local_26 = (double *)((int)_local_1c + iVar13 * 0x40 + iVar16 + -0x28);
        local_24._0_1_ = (undefined)((ulong)_local_1c >> 0x10);
        local_24._1_1_ = (undefined)((ulong)_local_1c >> 0x18);
        puVar30 = (undefined4 *)
                  FUN_10d8_3b9b((int)local_20,CONCAT42(0x11583e64,(int)((ulong)local_20 >> 0x10)));
        puVar7 = (undefined2 *)((int)*puVar30 + 0x40);
        (*(code *)*puVar7)();
        *(double *)CONCAT13(local_24._1_1_,CONCAT12((undefined)local_24,local_26)) = (double)in_ST0;
        in_ST5 = in_ST7;
        puVar30 = (undefined4 *)FUN_10d8_3b9b();
        puVar7 = (undefined2 *)((int)*puVar30 + 0x40);
        in_ST0 = in_ST3;
        in_ST3 = in_ST6;
        (*(code *)*puVar7)();
        *(double *)((int)local_26 + 8) = (double)in_ST1;
        in_ST6 = in_ST5;
        puVar30 = (undefined4 *)
                  FUN_10d8_3b9b((int)local_20,CONCAT42(0x10d83e73,(int)((ulong)local_20 >> 0x10)));
        puVar7 = (undefined2 *)((int)*puVar30 + 0x40);
        in_ST1 = in_ST4;
        in_ST4 = in_ST7;
        (*(code *)*puVar7)();
        *(double *)((int)local_26 + 0x10) = (double)lVar27;
        in_ST7 = in_ST6;
        puVar30 = (undefined4 *)FUN_10d8_3b9b((int)local_20,(int)((ulong)local_20 >> 0x10),0x3e85);
        puVar7 = (undefined2 *)((int)*puVar30 + 0x44);
        uVar31 = (*(code *)*puVar7)(0x10d8,(undefined4 *)puVar30);
        uVar20 = (undefined2)
                 (CONCAT13(local_24._1_1_,CONCAT12((undefined)local_24,local_26)) >> 0x10);
        *(undefined2 *)((int)local_26 + 0x18) = (int)uVar31;
        *(undefined2 *)((int)local_26 + 0x1a) = (int)((ulong)uVar31 >> 0x10);
        puVar30 = (undefined4 *)
                  FUN_10d8_3b9b((int)local_20,(int)((ulong)local_20 >> 0x10),0x3e96,0x10d8);
        puVar7 = (undefined2 *)((int)*puVar30 + 0x44);
        uVar31 = (*(code *)*puVar7)(0x10d8,puVar30);
        uVar20 = (undefined2)
                 (CONCAT13(local_24._1_1_,CONCAT12((undefined)local_24,local_26)) >> 0x10);
        *(undefined2 *)((int)local_26 + 0x1c) = (int)uVar31;
        *(undefined2 *)((int)local_26 + 0x1e) = (int)((ulong)uVar31 >> 0x10);
        if (local_6 == 2) break;
        local_6 = local_6 + 1;
        lVar27 = in_ST2;
        in_ST2 = in_ST5;
      }
      if (iVar14 == local_22) break;
      iVar14 = iVar14 + 1;
    }
  }
  local_20 = (double *)*(undefined4 *)(iVar17 + 0x240);
  local_22 = DAT_1160_014e;
  if (0 < DAT_1160_014e) {
    iVar14 = 1;
    while( true ) {
      local_6 = 1;
      while( true ) {
        iStack_3a = *(int *)(iVar17 + 0x318);
        local_38 = iStack_3a >> 0xf;
        local_36 = local_36 & 0xffffff00;
        local_2e = 0;
        local_2a = local_6;
        local_28 = (char)(local_6 >> 0xf);
        local_26._0_1_ = 0;
        local_32 = iVar14;
        local_30 = iVar14 >> 0xf;
        bStack_27 = local_28;
        cVar12 = FUN_10e0_2895();
        if (cVar12 == '\0') {
          FUN_1030_0733();
        }
        iVar16 = FUN_1158_0416();
        iVar16 = iVar16 * 0x30;
        iVar13 = FUN_1158_0416();
        local_26 = (double *)((int)_local_1c + iVar13 * 0x60 + iVar16 + 0x1a8);
        local_24._0_1_ = (undefined)((ulong)_local_1c >> 0x10);
        local_24._1_1_ = (undefined)((ulong)_local_1c >> 0x18);
        puVar30 = (undefined4 *)
                  FUN_10d8_3b9b((int)local_20,CONCAT42(0x11583ec0,(int)((ulong)local_20 >> 0x10)));
        puVar7 = (undefined2 *)((int)*puVar30 + 0x44);
        (*(code *)*puVar7)();
        puVar30 = (undefined4 *)
                  FUN_10d8_3b9b((int)local_20,CONCAT42(0x10d83eaf,(int)((ulong)local_20 >> 0x10)));
        puVar7 = (undefined2 *)((int)*puVar30 + 0x44);
        uVar31 = (*(code *)*puVar7)();
        puVar30 = (undefined4 *)
                  FUN_10d8_3b9b((int)local_20,(int)((ulong)local_20 >> 0x10),0x3ea8,0x10d8);
        puVar7 = (undefined2 *)((int)*puVar30 + 0x44);
        uVar29 = (*(code *)*puVar7)(0x10d8);
        iVar33 = (int)((ulong)puVar30 >> 0x10);
        iVar13 = (int)((ulong)uVar29 >> 0x10);
        uVar6 = (uint)CARRY2((uint)uVar29,(uint)(undefined4 *)puVar30);
        iVar16 = iVar13 + iVar33;
        uVar29 = CONCAT22(iVar16 + uVar6,(uint)uVar29 + (int)(undefined4 *)puVar30);
        if (SCARRY2(iVar13,iVar33) != SCARRY2(iVar16,uVar6)) {
          uVar29 = FUN_1158_043e(0x10d8);
        }
        iVar13 = (int)((ulong)uVar29 >> 0x10);
        iVar33 = (int)((ulong)uVar31 >> 0x10);
        uVar6 = (uint)CARRY2((uint)uVar29,(uint)uVar31);
        iVar16 = iVar13 + iVar33;
        uVar31 = CONCAT22(iVar16 + uVar6,(uint)uVar29 + (uint)uVar31);
        if (SCARRY2(iVar13,iVar33) != SCARRY2(iVar16,uVar6)) {
          uVar31 = FUN_1158_043e();
        }
        puVar7 = (undefined2 *)CONCAT13(local_24._1_1_,CONCAT12((undefined)local_24,local_26));
        *puVar7 = (int)uVar31;
        *(undefined2 *)((int)local_26 + 2) = (int)((ulong)uVar31 >> 0x10);
        puVar30 = (undefined4 *)FUN_10d8_3b9b((int)local_20,(int)((ulong)local_20 >> 0x10),0x3ecd);
        puVar7 = (undefined2 *)((int)*puVar30 + 0x40);
        (*(code *)*puVar7)(0x10d8);
        *(double *)((int)local_26 + 0x14) = (double)in_ST0;
        in_ST0 = in_ST7;
        puVar30 = (undefined4 *)
                  FUN_10d8_3b9b((int)local_20,(int)((ulong)local_20 >> 0x10),0x3ed9,0x10d8);
        puVar7 = (undefined2 *)((int)*puVar30 + 0x44);
        uVar31 = (*(code *)*puVar7)(0x10d8,puVar30);
        uVar20 = (undefined2)
                 (CONCAT13(local_24._1_1_,CONCAT12((undefined)local_24,local_26)) >> 0x10);
        *(undefined2 *)((int)local_26 + 4) = (int)uVar31;
        *(undefined2 *)((int)local_26 + 6) = (int)((ulong)uVar31 >> 0x10);
        puVar30 = (undefined4 *)
                  FUN_10d8_3b9b((int)local_20,(int)((ulong)local_20 >> 0x10),0x3ee1,0x10d8);
        puVar7 = (undefined2 *)((int)*puVar30 + 0x44);
        uVar31 = (*(code *)*puVar7)(0x10d8,puVar30);
        uVar20 = (undefined2)
                 (CONCAT13(local_24._1_1_,CONCAT12((undefined)local_24,local_26)) >> 0x10);
        *(undefined2 *)((int)local_26 + 8) = (int)uVar31;
        *(undefined2 *)((int)local_26 + 10) = (int)((ulong)uVar31 >> 0x10);
        puVar30 = (undefined4 *)
                  FUN_10d8_3b9b((int)local_20,(int)((ulong)local_20 >> 0x10),0x3ef6,0x10d8);
        puVar7 = (undefined2 *)((int)*puVar30 + 0x40);
        (*(code *)*puVar7)(0x10d8,puVar30);
        *(double *)((int)local_26 + 0x1c) = (double)in_ST1;
        puVar30 = (undefined4 *)FUN_10d8_3b9b();
        puVar7 = (undefined2 *)((int)*puVar30 + 0x44);
        lVar32 = (*(code *)*puVar7)();
        local_2a = (int)lVar32;
        local_28 = (char)((ulong)lVar32 >> 0x10);
        bStack_27 = (byte)((ulong)lVar32 >> 0x18);
        lVar27 = (longdouble)lVar32;
        iVar16 = FUN_1158_0416(puVar30);
        iVar16 = iVar16 << 5;
        iVar13 = FUN_1158_0416();
        in_ST1 = in_ST0;
        FUN_1080_2fa6((double)(lVar27 * (longdouble)
                                        *(double *)((int)_local_1c + iVar13 * 0x40 + iVar16 + -0x28)
                              ));
        local_42 = SUB108(in_ST2,0);
        iStack_3a = (int)((unkuint10)in_ST2 >> 0x40);
        puVar30 = (undefined4 *)
                  FUN_10d8_3b9b((int)local_20,
                                CONCAT42(&UNK_1080_3eaf,(int)((ulong)local_20 >> 0x10)));
        puVar7 = (undefined2 *)((int)*puVar30 + 0x44);
        lVar32 = (*(code *)*puVar7)();
        local_2e = (char)lVar32;
        cStack_2d = (char)((ulong)lVar32 >> 8);
        local_2c = (undefined)((ulong)lVar32 >> 0x10);
        uStack_2b = (undefined)((ulong)lVar32 >> 0x18);
        lVar27 = (longdouble)lVar32;
        local_38 = SUB102(lVar27,0);
        local_36 = (ulong)((unkuint10)lVar27 >> 0x10);
        local_32 = (int)((unkuint10)lVar27 >> 0x30);
        local_30 = (int)((unkuint10)lVar27 >> 0x40);
        puVar30 = (undefined4 *)FUN_10d8_3b9b();
        puVar7 = (undefined2 *)((int)*puVar30 + 0x40);
        (*(code *)*puVar7)();
        in_ST2 = in_ST1;
        FUN_1080_2fa6((double)((longdouble)
                               CONCAT28(local_30,CONCAT26(local_32,CONCAT42(local_36,local_38))) *
                              in_ST3));
        lVar27 = (longdouble)CONCAT28(iStack_3a,local_42) + in_ST4;
        in_ST3 = in_ST2;
        puVar30 = (undefined4 *)
                  FUN_10d8_3b9b((int)local_20,CONCAT42(0x10803ec0,(int)((ulong)local_20 >> 0x10)));
        puVar7 = (undefined2 *)((int)*puVar30 + 0x44);
        lVar32 = (*(code *)*puVar7)();
        puVar30 = (undefined4 *)FUN_10d8_3b9b();
        puVar7 = (undefined2 *)((int)*puVar30 + 0x40);
        (*(code *)*puVar7)();
        in_ST4 = in_ST3;
        FUN_1080_2fa6((double)((longdouble)lVar32 * in_ST5));
        *(double *)((int)local_26 + 0xc) = (double)(lVar27 + in_ST6);
        in_ST5 = in_ST4;
        in_ST6 = in_ST4;
        puVar30 = (undefined4 *)
                  FUN_10d8_3b9b((int)local_20,CONCAT42(0x10803f21,(int)((ulong)local_20 >> 0x10)));
        puVar7 = (undefined2 *)((int)*puVar30 + 0x40);
        (*(code *)*puVar7)();
        *(double *)((int)local_26 + 0x24) = (double)in_ST7;
        iVar16 = *(int *)(iVar17 + 0x318) + -1;
        in_ST7 = in_ST6;
        if (SBORROW2(*(int *)(iVar17 + 0x318),1)) {
          iVar16 = FUN_1158_043e();
        }
        local_38 = iVar16 >> 0xf;
        local_36 = local_36 & 0xffffff00;
        local_2e = 0;
        local_2a = local_6;
        local_28 = (char)(local_6 >> 0xf);
        local_26._0_1_ = 0;
        iStack_3a = iVar16;
        local_32 = iVar14;
        local_30 = iVar14 >> 0xf;
        bStack_27 = local_28;
        cVar12 = FUN_10e0_2895((int)local_20,(int)((ulong)local_20 >> 0x10),2,&iStack_3a);
        if (cVar12 == '\0') {
          FUN_1030_0733(iVar17);
        }
        iVar16 = FUN_1158_0416();
        iVar16 = iVar16 * 0x30;
        iVar13 = FUN_1158_0416();
        local_26 = (double *)((int)_local_1c + iVar13 * 0x60 + iVar16 + 0x1a8);
        local_24._0_1_ = (undefined)((ulong)_local_1c >> 0x10);
        local_24._1_1_ = (undefined)((ulong)_local_1c >> 0x18);
        puVar30 = (undefined4 *)FUN_10d8_3b9b((int)local_20,(int)((ulong)local_20 >> 0x10),0x3ed9);
        puVar7 = (undefined2 *)((int)*puVar30 + 0x44);
        uVar31 = (*(code *)*puVar7)(0x10d8,(undefined4 *)puVar30);
        uVar20 = (undefined2)
                 (CONCAT13(local_24._1_1_,CONCAT12((undefined)local_24,local_26)) >> 0x10);
        *(undefined2 *)((int)local_26 + 0x2c) = (int)uVar31;
        *(undefined2 *)((int)local_26 + 0x2e) = (int)((ulong)uVar31 >> 0x10);
        if (local_6 == 2) break;
        local_6 = local_6 + 1;
      }
      if (iVar14 == local_22) break;
      iVar14 = iVar14 + 1;
    }
  }
  local_20._2_2_ = (int)((ulong)*(undefined4 *)(iVar17 + 0x23c) >> 0x10);
  local_20._0_2_ = (double *)*(undefined4 *)(iVar17 + 0x23c);
  local_22 = DAT_1160_014e;
  if (0 < DAT_1160_014e) {
    iVar14 = 1;
    while( true ) {
      local_32 = *(int *)(iVar17 + 0x318);
      local_30 = local_32 >> 0xf;
      local_2e = 0;
      local_28 = (char)(iVar14 >> 0xf);
      local_26._0_1_ = 0;
      local_2a = iVar14;
      bStack_27 = local_28;
      cVar12 = FUN_10e0_2895();
      if (cVar12 == '\0') {
        FUN_1030_0733();
      }
      iVar16 = FUN_1158_0416();
      local_26 = (double *)((int)_local_1c + iVar16 * 0x38 + 0x500);
      local_24._0_1_ = (undefined)((ulong)_local_1c >> 0x10);
      local_24._1_1_ = (undefined)((ulong)_local_1c >> 0x18);
      puVar30 = (undefined4 *)FUN_10d8_3b9b((double *)local_20,CONCAT42(0x11583f2d,local_20._2_2_));
      puVar7 = (undefined2 *)((int)*puVar30 + 0x40);
      (*(code *)*puVar7)();
      *(double *)((int)local_26 + 8) = (double)in_ST0;
      lVar21 = in_ST7;
      puVar30 = (undefined4 *)FUN_10d8_3b9b();
      puVar7 = (undefined2 *)((int)*puVar30 + 0x40);
      (*(code *)*puVar7)();
      pdVar1 = (double *)CONCAT13(local_24._1_1_,CONCAT12((undefined)local_24,local_26));
      *pdVar1 = (double)(in_ST1 + (longdouble)*(double *)((int)local_26 + 8));
      lVar22 = lVar21;
      puVar30 = (undefined4 *)FUN_10d8_3b9b((double *)local_20,CONCAT42(0x10d83f3f,local_20._2_2_));
      puVar7 = (undefined2 *)((int)*puVar30 + 0x40);
      (*(code *)*puVar7)();
      *(double *)((int)local_26 + 0x10) = (double)in_ST2;
      lVar28 = lVar22;
      puVar30 = (undefined4 *)FUN_10d8_3b9b((double *)local_20,local_20._2_2_,0x3f4d);
      puVar7 = (undefined2 *)((int)*puVar30 + 0x40);
      (*(code *)*puVar7)(0x10d8,(undefined4 *)puVar30);
      *(double *)((int)local_26 + 0x18) = (double)in_ST3;
      lVar23 = lVar28;
      puVar30 = (undefined4 *)FUN_10d8_3b9b((double *)local_20,local_20._2_2_,0x3f63,0x10d8);
      puVar7 = (undefined2 *)((int)*puVar30 + 0x40);
      (*(code *)*puVar7)(0x10d8,puVar30);
      local_30 = SUB102(in_ST4,0);
      local_2e = (char)((unkuint10)in_ST4 >> 0x10);
      cStack_2d = (char)((unkuint10)in_ST4 >> 0x18);
      local_2c = (undefined)((unkuint10)in_ST4 >> 0x20);
      uStack_2b = (undefined)((unkuint10)in_ST4 >> 0x28);
      local_2a = (int)((unkuint10)in_ST4 >> 0x30);
      local_28 = (char)((unkuint10)in_ST4 >> 0x40);
      bStack_27 = (byte)((unkuint10)in_ST4 >> 0x48);
      puVar30 = (undefined4 *)FUN_10d8_3b9b((double *)local_20,local_20._2_2_,0x3f6b,0x10d8);
      puVar7 = (undefined2 *)((int)*puVar30 + 0x40);
      (*(code *)*puVar7)(0x10d8,puVar30);
      in_ST5 = (longdouble)
               CONCAT19(bStack_27,
                        CONCAT18(local_28,CONCAT26(local_2a,CONCAT15(uStack_2b,
                                                                     CONCAT14(local_2c,CONCAT13(
                                                  cStack_2d,CONCAT12(local_2e,local_30))))))) +
               in_ST5;
      iStack_3a = SUB102(in_ST5,0);
      local_38 = (int)((unkuint10)in_ST5 >> 0x10);
      local_36 = (ulong)((unkuint10)in_ST5 >> 0x20);
      local_32 = (int)((unkuint10)in_ST5 >> 0x40);
      lVar24 = lVar23;
      puVar30 = (undefined4 *)FUN_10d8_3b9b((double *)local_20,local_20._2_2_,0x3f39,0x10d8);
      puVar7 = (undefined2 *)((int)*puVar30 + 0x40);
      (*(code *)*puVar7)(0x10d8,puVar30);
      lVar27 = (longdouble)CONCAT28(local_32,CONCAT44(local_36,CONCAT22(local_38,iStack_3a)));
      lVar25 = lVar24;
      puVar30 = (undefined4 *)FUN_10d8_3b9b();
      puVar7 = (undefined2 *)((int)*puVar30 + 0x40);
      (*(code *)*puVar7)();
      lVar26 = lVar25;
      puVar30 = (undefined4 *)FUN_10d8_3b9b((double *)local_20,CONCAT42(0x10d83f86,local_20._2_2_));
      puVar7 = (undefined2 *)((int)*puVar30 + 0x40);
      (*(code *)*puVar7)();
      local_10 = (double)(lVar27 + in_ST6 + in_ST7 + lVar21);
      in_ST0 = lVar26;
      in_ST1 = lVar26;
      puVar30 = (undefined4 *)FUN_10d8_3b9b();
      puVar7 = (undefined2 *)((int)*puVar30 + 0x40);
      (*(code *)*puVar7)();
      lVar22 = lVar22 + (longdouble)local_10;
      local_30 = SUB102(lVar22,0);
      local_2e = (char)((unkuint10)lVar22 >> 0x10);
      cStack_2d = (char)((unkuint10)lVar22 >> 0x18);
      local_2c = (undefined)((unkuint10)lVar22 >> 0x20);
      uStack_2b = (undefined)((unkuint10)lVar22 >> 0x28);
      local_2a = (int)((unkuint10)lVar22 >> 0x30);
      local_28 = (char)((unkuint10)lVar22 >> 0x40);
      bStack_27 = (byte)((unkuint10)lVar22 >> 0x48);
      puVar30 = (undefined4 *)FUN_10d8_3b9b((double *)local_20,CONCAT42(0x10d83f95,local_20._2_2_));
      puVar7 = (undefined2 *)((int)*puVar30 + 0x40);
      (*(code *)*puVar7)();
      lVar28 = (longdouble)
               CONCAT19(bStack_27,
                        CONCAT18(local_28,CONCAT26(local_2a,CONCAT15(uStack_2b,
                                                                     CONCAT14(local_2c,CONCAT13(
                                                  cStack_2d,CONCAT12(local_2e,local_30))))))) +
               lVar28;
      iStack_3a = SUB102(lVar28,0);
      local_38 = (int)((unkuint10)lVar28 >> 0x10);
      local_36 = (ulong)((unkuint10)lVar28 >> 0x20);
      local_32 = (int)((unkuint10)lVar28 >> 0x40);
      in_ST2 = in_ST1;
      puVar30 = (undefined4 *)FUN_10d8_3b9b();
      puVar7 = (undefined2 *)((int)*puVar30 + 0x40);
      (*(code *)*puVar7)();
      dVar4 = (double)((longdouble)
                       CONCAT28(local_32,CONCAT44(local_36,CONCAT22(local_38,iStack_3a))) + lVar23);
      local_18._6_2_ = (undefined2)((qword)dVar4 >> 0x30);
      uVar9 = local_18._6_2_;
      local_18._4_2_ = (undefined2)((qword)dVar4 >> 0x20);
      uVar15 = local_18._4_2_;
      local_18._2_2_ = (undefined2)((qword)dVar4 >> 0x10);
      uVar20 = local_18._2_2_;
      local_18._0_2_ = SUB82(dVar4,0);
      in_ST3 = in_ST2;
      in_ST4 = in_ST2;
      uVar10 = (undefined2)local_18;
      local_18 = dVar4;
      FUN_1080_2ea7(uVar10,uVar20,uVar15,uVar9,local_10._0_2_,(int6)((qword)local_10 >> 0x10));
      *(double *)((int)local_26 + 0x28) = (double)(lVar24 * (longdouble)100.0);
      in_ST5 = in_ST4;
      puVar30 = (undefined4 *)
                FUN_10d8_3b9b((double *)local_20,CONCAT42(&UNK_1030_3f78,local_20._2_2_));
      puVar7 = (undefined2 *)((int)*puVar30 + 0x40);
      (*(code *)*puVar7)();
      local_30 = SUB102(lVar25,0);
      local_2e = (char)((unkuint10)lVar25 >> 0x10);
      cStack_2d = (char)((unkuint10)lVar25 >> 0x18);
      local_2c = (undefined)((unkuint10)lVar25 >> 0x20);
      uStack_2b = (undefined)((unkuint10)lVar25 >> 0x28);
      local_2a = (int)((unkuint10)lVar25 >> 0x30);
      local_28 = (char)((unkuint10)lVar25 >> 0x40);
      bStack_27 = (byte)((unkuint10)lVar25 >> 0x48);
      puVar30 = (undefined4 *)FUN_10d8_3b9b((double *)local_20,local_20._2_2_,0x3fa2);
      puVar7 = (undefined2 *)((int)*puVar30 + 0x40);
      (*(code *)*puVar7)(0x10d8,(undefined4 *)puVar30);
      *(double *)((int)local_26 + 0x20) =
           (double)((longdouble)
                    CONCAT19(bStack_27,
                             CONCAT18(local_28,CONCAT26(local_2a,CONCAT15(uStack_2b,
                                                                          CONCAT14(local_2c,CONCAT13
                                                  (cStack_2d,CONCAT12(local_2e,local_30))))))) +
                   lVar26);
      in_ST6 = in_ST5;
      if (iVar14 == local_22) break;
      iVar14 = iVar14 + 1;
      in_ST7 = in_ST5;
    }
  }
  local_20._2_2_ = (int)((ulong)*(undefined4 *)(iVar17 + 0x268) >> 0x10);
  local_20._0_2_ = (double *)(double *)*(undefined4 *)(iVar17 + 0x268);
  local_6 = 1;
  while( true ) {
    local_30 = *(undefined2 *)(iVar17 + 0x318);
    local_2e = (char)(local_30 >> 0xf);
    local_2c = 0;
    local_28 = (char)local_6;
    bStack_27 = (byte)((uint)local_6 >> 8);
    local_26._0_1_ = (char)bStack_27 >> 7;
    local_24._0_1_ = 0;
    cStack_2d = local_2e;
    local_26._1_1_ = (char)local_26;
    cVar12 = FUN_10e0_2895();
    if (cVar12 == '\0') {
      FUN_1030_0733();
    }
    iVar14 = FUN_1158_0416();
    local_22 = (int)((ulong)_local_1c >> 0x10);
    local_24 = (undefined2 *)((int)_local_1c + iVar14 * 0x18 + 0x6e0);
    puVar30 = (undefined4 *)FUN_10d8_3b9b((double *)local_20,CONCAT42(0x11583fb1,local_20._2_2_));
    puVar7 = (undefined2 *)((int)*puVar30 + 0x40);
    (*(code *)*puVar7)();
    uVar20 = extraout_DX;
    uVar15 = FUN_1158_102f();
    *(undefined2 *)CONCAT22(local_22,local_24) = uVar15;
    local_24[1] = uVar20;
    if (local_6 == 2) break;
    local_6 = local_6 + 1;
  }
  local_20 = (double *)CONCAT22(DAT_1160_014e,(double *)local_20);
  if (0 < DAT_1160_014e) {
    iVar17 = 1;
    while( true ) {
      iVar14 = FUN_1158_0416();
      lVar27 = (longdouble)*(double *)((int)_local_1c + iVar14 * 0x60 + 0x1ec);
      iVar14 = FUN_1158_0416();
      lVar27 = lVar27 + (longdouble)*(double *)((int)_local_1c + iVar14 * 0x60 + 0x21c);
      iVar14 = FUN_1158_0416();
      *(double *)((int)_local_1c + iVar14 * 0x38 + 0x530) = (double)lVar27;
      if (iVar17 == local_20._2_2_) break;
      iVar17 = iVar17 + 1;
    }
  }
  local_6 = 1;
  while( true ) {
    iVar17 = FUN_1158_0416();
    uVar19 = (undefined2)((ulong)_local_1c >> 0x10);
    iVar17 = (int)_local_1c + iVar17 * 0x18;
    local_20 = (double *)CONCAT22(uVar19,(double *)(iVar17 + 0x6e0));
    *(undefined2 *)(iVar17 + 0x6e4) = 0;
    *(undefined2 *)(iVar17 + 0x6e6) = 0;
    *(undefined2 *)(iVar17 + 0x6e8) = 0;
    *(undefined2 *)(iVar17 + 0x6ea) = 0;
    *(undefined2 *)(iVar17 + 0x6ec) = 0;
    *(undefined2 *)(iVar17 + 0x6ee) = 0;
    local_22 = DAT_1160_014e;
    if (0 < DAT_1160_014e) {
      iVar17 = 1;
      while( true ) {
        iVar14 = FUN_1158_0416();
        iVar14 = iVar14 * 0x30;
        iVar16 = FUN_1158_0416();
        uVar19 = (undefined2)((ulong)_local_1c >> 0x10);
        iVar14 = (int)_local_1c + iVar16 * 0x60 + iVar14;
        uVar6 = *(uint *)(iVar14 + 0x1d4);
        iVar14 = *(int *)(iVar14 + 0x1d6);
        uVar19 = (undefined2)((ulong)local_20 >> 0x10);
        pdVar1 = (double *)local_20 + 1;
        piVar2 = (int *)((int)(double *)local_20 + 10);
        uVar5 = (uint)CARRY2(uVar6,*(uint *)pdVar1);
        iVar16 = iVar14 + *piVar2;
        uVar31 = CONCAT22(iVar16 + uVar5,uVar6 + *(int *)pdVar1);
        if (SCARRY2(iVar14,*piVar2) != SCARRY2(iVar16,uVar5)) {
          uVar31 = FUN_1158_043e();
        }
        uVar19 = (undefined2)((ulong)local_20 >> 0x10);
        *(int *)((double *)local_20 + 1) = (int)uVar31;
        *(undefined2 *)((int)(double *)local_20 + 10) = (int)((ulong)uVar31 >> 0x10);
        iVar14 = FUN_1158_0416();
        iVar14 = iVar14 * 0x30;
        iVar16 = FUN_1158_0416();
        uVar19 = (undefined2)((ulong)_local_1c >> 0x10);
        iVar14 = (int)_local_1c + iVar16 * 0x60 + iVar14;
        uVar6 = *(uint *)(iVar14 + 0x1ac);
        iVar14 = *(int *)(iVar14 + 0x1ae);
        uVar19 = (undefined2)((ulong)local_20 >> 0x10);
        puVar3 = (uint *)((int)(double *)local_20 + 4);
        piVar2 = (int *)((int)(double *)local_20 + 6);
        uVar5 = (uint)CARRY2(uVar6,*puVar3);
        iVar16 = iVar14 + *piVar2;
        uVar31 = CONCAT22(iVar16 + uVar5,uVar6 + *puVar3);
        if (SCARRY2(iVar14,*piVar2) != SCARRY2(iVar16,uVar5)) {
          uVar31 = FUN_1158_043e();
        }
        uVar19 = (undefined2)((ulong)local_20 >> 0x10);
        *(undefined2 *)((int)(double *)local_20 + 4) = (int)uVar31;
        *(undefined2 *)((int)(double *)local_20 + 6) = (int)((ulong)uVar31 >> 0x10);
        iVar14 = FUN_1158_0416();
        iVar14 = iVar14 * 0x30;
        iVar16 = FUN_1158_0416();
        uVar19 = (undefined2)((ulong)_local_1c >> 0x10);
        iVar14 = (int)_local_1c + iVar16 * 0x60 + iVar14;
        uVar6 = *(uint *)(iVar14 + 0x1b0);
        iVar14 = *(int *)(iVar14 + 0x1b2);
        uVar19 = (undefined2)((ulong)local_20 >> 0x10);
        puVar3 = (uint *)((int)(double *)local_20 + 0xc);
        piVar2 = (int *)((int)(double *)local_20 + 0xe);
        uVar5 = (uint)CARRY2(uVar6,*puVar3);
        iVar16 = iVar14 + *piVar2;
        uVar31 = CONCAT22(iVar16 + uVar5,uVar6 + *puVar3);
        if (SCARRY2(iVar14,*piVar2) != SCARRY2(iVar16,uVar5)) {
          uVar31 = FUN_1158_043e();
        }
        uVar19 = (undefined2)((ulong)local_20 >> 0x10);
        *(undefined2 *)((int)(double *)local_20 + 0xc) = (int)uVar31;
        *(undefined2 *)((int)(double *)local_20 + 0xe) = (int)((ulong)uVar31 >> 0x10);
        if (iVar17 == local_22) break;
        iVar17 = iVar17 + 1;
      }
    }
    uVar19 = (undefined2)((ulong)local_20 >> 0x10);
    pdVar18 = (double *)local_20;
    uVar6 = (uint)(*(uint *)((int)pdVar18 + 4) < *(uint *)(pdVar18 + 1));
    iVar17 = *(int *)((int)pdVar18 + 6) - *(int *)((int)pdVar18 + 10);
    lVar32 = CONCAT22(iVar17 - uVar6,*(uint *)((int)pdVar18 + 4) - *(int *)(pdVar18 + 1));
    if (SBORROW2(*(int *)((int)pdVar18 + 6),*(int *)((int)pdVar18 + 10)) != SBORROW2(iVar17,uVar6))
    {
      lVar32 = FUN_1158_043e();
    }
    local_22 = (int)((ulong)lVar32 >> 0x10);
    local_24._0_1_ = (undefined)lVar32;
    local_24._1_1_ = (undefined)((ulong)lVar32 >> 8);
    lVar27 = in_ST6;
    FUN_1080_2ea7((double)*(long *)((double *)local_20 + 1),(double)lVar32);
    ((double *)local_20)[2] = (double)(in_ST0 * (longdouble)100.0);
    if (local_6 == 2) break;
    local_6 = local_6 + 1;
    in_ST0 = in_ST1;
    in_ST1 = in_ST2;
    in_ST2 = in_ST3;
    in_ST3 = in_ST4;
    in_ST4 = in_ST5;
    in_ST5 = in_ST6;
    in_ST6 = lVar27;
  }
  local_6 = 1;
  while( true ) {
    iVar17 = FUN_1158_0416();
    uVar19 = (undefined2)((ulong)_local_1c >> 0x10);
    iVar17 = (int)_local_1c + iVar17 * 0x28;
    local_20 = (double *)CONCAT22(uVar19,(double *)(iVar17 + 0x700));
    *(double *)(iVar17 + 0x700) = 0.0;
    *(undefined8 *)(iVar17 + 0x718) = 0;
    *(undefined8 *)(iVar17 + 0x708) = 0;
    *(undefined8 *)(iVar17 + 0x710) = 0;
    *(undefined8 *)(iVar17 + 0x720) = 0;
    local_8 = 0;
    local_22 = DAT_1160_014e;
    if (0 < DAT_1160_014e) {
      iVar17 = 1;
      while( true ) {
        iVar14 = FUN_1158_0416();
        iVar14 = iVar14 << 5;
        iVar16 = FUN_1158_0416();
        iVar14 = (int)_local_1c + iVar16 * 0x40 + iVar14;
        local_26 = (double *)(iVar14 + -0x28);
        local_24._0_1_ = (undefined)((ulong)_local_1c >> 0x10);
        local_24._1_1_ = (undefined)((ulong)_local_1c >> 0x18);
        dVar4 = *local_26;
        bVar8 = (byte)(((uint)(dVar4 == 0.0) << 0xe) >> 8);
        bStack_27 = dVar4 < 0.0 | (byte)(((uint)NAN(dVar4) << 10) >> 8) | bVar8;
        local_28 = 0;
        if (dVar4 >= 0.0 && bVar8 == 0) {
          uVar19 = (undefined2)((ulong)local_20 >> 0x10);
          pdVar18 = (double *)local_20;
          *local_20 = *local_20 +
                      *(double *)CONCAT13(local_24._1_1_,CONCAT12((undefined)local_24,local_26));
          pdVar18[1] = pdVar18[1] + *(double *)(iVar14 + -0x20);
          pdVar18[2] = pdVar18[2] + *(double *)(iVar14 + -0x18);
          pdVar18[3] = (double)*(long *)(iVar14 + -0x10) + pdVar18[3];
          pdVar18[4] = (double)*(long *)(iVar14 + -0xc) + pdVar18[4];
          local_8 = local_8 + 1;
        }
        if (iVar17 == local_22) break;
        iVar17 = iVar17 + 1;
      }
    }
    uVar19 = (undefined2)((ulong)local_20 >> 0x10);
    pdVar18 = (double *)local_20;
    lVar26 = lVar27;
    FUN_1080_2ea7((double)local_8,*(undefined2 *)local_20,
                  CONCAT42(CONCAT22(*(undefined2 *)((int)pdVar18 + 6),
                                    *(undefined2 *)((int)pdVar18 + 4)),
                           *(undefined2 *)((int)pdVar18 + 2)));
    uVar19 = (undefined2)((ulong)local_20 >> 0x10);
    pdVar18 = (double *)local_20;
    *local_20 = (double)in_ST1;
    in_ST1 = in_ST6;
    lVar25 = lVar26;
    FUN_1080_2ea7((double)local_8,*(undefined2 *)(pdVar18 + 1),
                  CONCAT42(CONCAT22(*(undefined2 *)((int)pdVar18 + 0xe),
                                    *(undefined2 *)((int)pdVar18 + 0xc)),
                           *(undefined2 *)((int)pdVar18 + 10)));
    uVar19 = (undefined2)((ulong)local_20 >> 0x10);
    pdVar18 = (double *)local_20;
    pdVar18[1] = (double)in_ST2;
    in_ST2 = lVar27;
    lVar24 = lVar25;
    FUN_1080_2ea7((double)local_8,*(undefined2 *)(pdVar18 + 2),
                  CONCAT42(CONCAT22(*(undefined2 *)((int)pdVar18 + 0x16),
                                    *(undefined2 *)((int)pdVar18 + 0x14)),
                           *(undefined2 *)((int)pdVar18 + 0x12)));
    uVar19 = (undefined2)((ulong)local_20 >> 0x10);
    pdVar18 = (double *)local_20;
    pdVar18[2] = (double)in_ST3;
    in_ST3 = lVar26;
    in_ST6 = lVar24;
    FUN_1080_2ea7((double)local_8,*(undefined2 *)(pdVar18 + 3),
                  CONCAT42(CONCAT22(*(undefined2 *)((int)pdVar18 + 0x1e),
                                    *(undefined2 *)((int)pdVar18 + 0x1c)),
                           *(undefined2 *)((int)pdVar18 + 0x1a)));
    uVar19 = (undefined2)((ulong)local_20 >> 0x10);
    pdVar18 = (double *)local_20;
    pdVar18[3] = (double)in_ST4;
    in_ST4 = lVar25;
    lVar27 = in_ST6;
    FUN_1080_2ea7((double)local_8,*(undefined2 *)(pdVar18 + 4),
                  CONCAT42(CONCAT22(*(undefined2 *)((int)pdVar18 + 0x26),
                                    *(undefined2 *)((int)pdVar18 + 0x24)),
                           *(undefined2 *)((int)pdVar18 + 0x22)));
    ((double *)local_20)[4] = (double)in_ST5;
    if (local_6 == 2) break;
    local_6 = local_6 + 1;
    in_ST5 = lVar24;
  }
  FUN_10d8_31d2();
  FUN_10d8_31d2();
  FUN_10d8_31d2();
  FUN_10d8_31d2();
  FUN_10d8_31d2();
  return;
}



/* ===== FUN_10b8_1bc2 @ 10b8:1bc2  (388 octets) ===== */

void __stdcall16far FUN_10b8_1bc2(undefined4 param_1)

{
  undefined4 uVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  
  FUN_1158_0444();
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  uVar1 = *(undefined4 *)((int)param_1 + 0x22);
  uVar4 = (undefined2)((ulong)uVar1 >> 0x10);
  uVar2 = (undefined2)uVar1;
  FUN_10d8_2aa1(uVar2,uVar4,0,0,3,0x1adb,0x1158);
  FUN_10d8_2aa1(uVar2,uVar4,0,0,3,0x1ae5,0x10d8);
  FUN_10d8_2aa1(uVar2,uVar4,0,2,8,0x1aef,0x10d8);
  FUN_10d8_2aa1(uVar2,uVar4,0,2,8,0x1afb,0x10d8);
  FUN_10d8_2aa1(uVar2,uVar4,0,2,8,0x1b07,0x10d8);
  FUN_10d8_2aa1(uVar2,uVar4,0,2,8,0x1b1a,0x10d8);
  FUN_10d8_2aa1(uVar2,uVar4,0,2,8,0x1b26,0x10d8);
  FUN_10d8_2aa1(uVar2,uVar4,0,2,8,0x1b30,0x10d8);
  FUN_10d8_2aa1(uVar2,uVar4,0,2,8,0x1b3f,0x10d8);
  FUN_10d8_2aa1(uVar2,uVar4,0,2,8,0x1b4f,0x10d8);
  FUN_10d8_2aa1(uVar2,uVar4,0,2,8,0x1b5b,0x10d8);
  FUN_10d8_2aa1(uVar2,uVar4,0,2,8,0x1b68,0x10d8);
  FUN_10d8_2aa1(uVar2,uVar4,0,0,3,0x1b7a,0x10d8);
  FUN_10d8_2aa1(uVar2,uVar4,0,2,8,0x1b8d,0x10d8);
  FUN_10d8_2aa1(uVar2,uVar4,0,0,3,0x1b9f,0x10d8);
  uVar1 = *(undefined4 *)((int)param_1 + 0x178);
  FUN_10e0_18f6((int)uVar1,(int)((ulong)uVar1 >> 0x10),3,0x1bae,0x10d8,0x1ba7,0x10d8);
  return;
}



/* ===== FUN_10b8_3f1c @ 10b8:3f1c  (661 octets) ===== */

void __stdcall16far FUN_10b8_3f1c(undefined4 param_1)

{
  undefined4 uVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  
  FUN_1158_0444();
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  uVar1 = *(undefined4 *)((int)param_1 + 0x22);
  uVar4 = (undefined2)((ulong)uVar1 >> 0x10);
  uVar2 = (undefined2)uVar1;
  FUN_10d8_2aa1(uVar2,uVar4,0,0,3,0x3d83,0x1158);
  FUN_10d8_2aa1(uVar2,uVar4,0,0,3,0x3d8d,0x10d8);
  FUN_10d8_2aa1(uVar2,uVar4,0,0,3,0x3d9a,0x10d8);
  FUN_10d8_2aa1(uVar2,uVar4,0,2,8,0x3da4,0x10d8);
  FUN_10d8_2aa1(uVar2,uVar4,0,2,8,0x3dae,0x10d8);
  FUN_10d8_2aa1(uVar2,uVar4,0,2,8,0x3db7,0x10d8);
  FUN_10d8_2aa1(uVar2,uVar4,0,2,8,0x3dbf,0x10d8);
  FUN_10d8_2aa1(uVar2,uVar4,0,2,8,0x3dcb,0x10d8);
  FUN_10d8_2aa1(uVar2,uVar4,0,2,8,0x3dd8,0x10d8);
  FUN_10d8_2aa1(uVar2,uVar4,0,0,3,0x3de4,0x10d8);
  FUN_10d8_2aa1(uVar2,uVar4,0,0,3,0x3dec,0x10d8);
  FUN_10d8_2aa1(uVar2,uVar4,0,0,3,0x3df3,0x10d8);
  FUN_10d8_2aa1(uVar2,uVar4,0,0,3,0x3e08,0x10d8);
  FUN_10d8_2aa1(uVar2,uVar4,0,2,8,0x3e15,0x10d8);
  FUN_10d8_2aa1(uVar2,uVar4,0,0,3,0x3e20,0x10d8);
  FUN_10d8_2aa1(uVar2,uVar4,0,2,8,0x3e29,0x10d8);
  FUN_10d8_2aa1(uVar2,uVar4,0,2,8,0x3e35,0x10d8);
  FUN_10d8_2aa1(uVar2,uVar4,0,0,3,0x3e46,0x10d8);
  FUN_10d8_2aa1(uVar2,uVar4,0,2,8,0x3e57,0x10d8);
  FUN_10d8_2aa1(uVar2,uVar4,0,0,3,0x3e69,0x10d8);
  FUN_10d8_2aa1(uVar2,uVar4,0,2,8,0x3e76,0x10d8);
  FUN_10d8_2aa1(uVar2,uVar4,0,2,8,0x3e84,0x10d8);
  FUN_10d8_2aa1(uVar2,uVar4,0,2,8,0x3e96,0x10d8);
  FUN_10d8_2aa1(uVar2,uVar4,0,2,8,0x3ea2,0x10d8);
  FUN_10d8_2aa1(uVar2,uVar4,0,2,8,0x3eb6,0x10d8);
  FUN_10d8_2aa1(uVar2,uVar4,0,0,6,0x3ec5,0x10d8);
  FUN_10d8_2aa1(uVar2,uVar4,0,0,3,0x3edb,0x10d8);
  FUN_10d8_2aa1(uVar2,uVar4,0,0,3,0x3eec,0x10d8);
  uVar1 = *(undefined4 *)((int)param_1 + 0x178);
  FUN_10e0_18f6((int)uVar1,(int)((ulong)uVar1 >> 0x10),3,0x3efb,0x10d8,0x3ef4,0x10d8);
  return;
}



/* ===== FUN_10b8_46a0 @ 10b8:46a0  (136 octets) ===== */

void __stdcall16far FUN_10b8_46a0(undefined4 param_1)

{
  undefined4 uVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  
  FUN_1158_0444();
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  uVar1 = *(undefined4 *)((int)param_1 + 0x22);
  uVar4 = (undefined2)((ulong)uVar1 >> 0x10);
  uVar2 = (undefined2)uVar1;
  FUN_10d8_2aa1(uVar2,uVar4,0,0,3,0x4664,0x1158);
  FUN_10d8_2aa1(uVar2,uVar4,0,0,3,0x466e,0x10d8);
  FUN_10d8_2aa1(uVar2,uVar4,0,2,8,0x4678,0x10d8);
  uVar1 = *(undefined4 *)((int)param_1 + 0x178);
  FUN_10e0_18f6((int)uVar1,(int)((ulong)uVar1 >> 0x10),3,0x468c,0x10d8,0x4685,0x10d8);
  return;
}



/* ===== FUN_1088_4c86 @ 1088:4c86  (4906 octets) ===== */

/* WARNING: Removing unreachable block (ram,0x10885d44) */
/* WARNING: Removing unreachable block (ram,0x1088557f) */
/* WARNING: Removing unreachable block (ram,0x10885c88) */

int __stdcall16far FUN_1088_4c86(undefined4 param_1)

{
  undefined2 *puVar1;
  double dVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined2 uVar7;
  byte extraout_AH;
  byte extraout_AH_00;
  byte bVar8;
  int iVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  undefined2 uVar13;
  undefined2 uVar14;
  undefined2 uVar15;
  char *pcVar16;
  undefined2 unaff_SS;
  bool bVar17;
  longdouble in_ST0;
  longdouble lVar18;
  longdouble lVar19;
  longdouble lVar20;
  longdouble lVar21;
  longdouble lVar22;
  longdouble lVar23;
  longdouble lVar24;
  longdouble lVar25;
  longdouble lVar26;
  longdouble lVar27;
  longdouble lVar28;
  longdouble lVar29;
  longdouble in_ST1;
  longdouble in_ST2;
  longdouble in_ST3;
  longdouble in_ST4;
  longdouble lVar30;
  longdouble in_ST5;
  longdouble lVar31;
  longdouble in_ST6;
  longdouble lVar32;
  longdouble in_ST7;
  long lVar33;
  undefined4 uVar34;
  undefined *puVar35;
  undefined local_192 [252];
  uint local_96;
  uint local_94;
  undefined local_92;
  byte bStack_91;
  undefined local_90;
  byte bStack_8f;
  uint local_8e;
  int local_8c;
  char local_89;
  uint local_88;
  int local_86;
  undefined local_84 [8];
  int local_7c;
  undefined2 local_7a;
  undefined2 local_78;
  undefined2 local_76;
  undefined2 local_74;
  undefined4 local_72;
  double local_6e;
  double local_66 [4];
  double local_46;
  undefined8 local_3e;
  undefined4 *local_36;
  undefined4 *local_32;
  undefined4 *local_2e;
  undefined4 *local_2a;
  undefined4 *local_26;
  double local_22;
  undefined4 *local_1a;
  undefined2 local_16;
  undefined2 local_14;
  char local_11;
  undefined4 local_10;
  undefined2 uStack_6;
  
  uStack_6 = 0x4c91;
  FUN_1158_0444();
  if (DAT_1160_1e06 < 3) {
    local_86 = 1;
  }
  else {
    local_86 = 2;
  }
  uVar13 = (undefined2)((ulong)param_1 >> 0x10);
  iVar9 = (int)param_1;
  local_7a = *(undefined2 *)(iVar9 + 0x1bc);
  local_78 = *(undefined2 *)(iVar9 + 0x1be);
  local_76 = *(undefined2 *)(iVar9 + 0x1c0);
  local_74 = *(undefined2 *)(iVar9 + 0x1c2);
  local_8c = (int)((ulong)*(undefined4 *)(iVar9 + 400) >> 0x10);
  local_8e = (uint)*(undefined4 *)(iVar9 + 400);
  local_36 = (undefined4 *)FUN_10d8_3b9b(local_8e,local_8c,0x4a2c,0x1158);
  puVar1 = (undefined2 *)((int)*local_36 + 0x40);
  (*(code *)*puVar1)(0x10d8,local_36);
  local_66[1] = (double)in_ST0;
  bVar8 = (byte)(((uint)(local_66[1] == 100.0) << 0xe) >> 8);
  bStack_91 = local_66[1] < 100.0 | (byte)(((uint)NAN(local_66[1]) << 10) >> 8) | bVar8;
  local_92 = 0;
  bStack_8f = local_66[1] < 0.0 | (byte)(((uint)NAN(local_66[1]) << 10) >> 8) |
              (byte)(((uint)(local_66[1] == 0.0) << 0xe) >> 8);
  local_90 = 0;
  if (local_66[1] < 0.0 || local_66[1] >= 100.0 && bVar8 == 0) {
    uVar14 = (undefined2)((ulong)local_36 >> 0x10);
    *(undefined2 *)((undefined4 *)local_36 + 3) = 1;
    *(undefined2 *)((int)(undefined4 *)local_36 + 0xe) = 0;
  }
  lVar18 = in_ST7;
  local_22 = local_66[1];
  local_32 = (undefined4 *)FUN_10d8_3b9b(local_8e,local_8c,0x4a42,(char *)s_sThousand_1160_1088);
  puVar1 = (undefined2 *)((int)*local_32 + 0x40);
  (*(code *)*puVar1)(0x10d8,local_32);
  local_66[2] = (double)in_ST1;
  bVar8 = (byte)(((uint)(local_66[2] == 100.0) << 0xe) >> 8);
  bStack_91 = local_66[2] < 100.0 | (byte)(((uint)NAN(local_66[2]) << 10) >> 8) | bVar8;
  local_92 = 0;
  bStack_8f = local_66[2] < 0.0 | (byte)(((uint)NAN(local_66[2]) << 10) >> 8) |
              (byte)(((uint)(local_66[2] == 0.0) << 0xe) >> 8);
  local_90 = 0;
  if (local_66[2] < 0.0 || local_66[2] >= 100.0 && bVar8 == 0) {
    uVar14 = (undefined2)((ulong)local_32 >> 0x10);
    *(undefined2 *)((undefined4 *)local_32 + 3) = 1;
    *(undefined2 *)((int)(undefined4 *)local_32 + 0xe) = 0;
  }
  lVar19 = lVar18;
  local_22 = local_66[2];
  local_2e = (undefined4 *)FUN_10d8_3b9b(local_8e,local_8c,0x4a4e,(char *)s_sThousand_1160_1088);
  puVar1 = (undefined2 *)((int)*local_2e + 0x40);
  (*(code *)*puVar1)(0x10d8,local_2e);
  local_66[3] = (double)in_ST2;
  bVar8 = (byte)(((uint)(local_66[3] == 100.0) << 0xe) >> 8);
  bStack_91 = local_66[3] < 100.0 | (byte)(((uint)NAN(local_66[3]) << 10) >> 8) | bVar8;
  local_92 = 0;
  bStack_8f = local_66[3] < 0.0 | (byte)(((uint)NAN(local_66[3]) << 10) >> 8) |
              (byte)(((uint)(local_66[3] == 0.0) << 0xe) >> 8);
  local_90 = 0;
  if (local_66[3] < 0.0 || local_66[3] >= 100.0 && bVar8 == 0) {
    uVar14 = (undefined2)((ulong)local_2e >> 0x10);
    *(undefined2 *)((undefined4 *)local_2e + 3) = 1;
    *(undefined2 *)((int)(undefined4 *)local_2e + 0xe) = 0;
  }
  lVar20 = lVar19;
  local_22 = local_66[3];
  local_2a = (undefined4 *)FUN_10d8_3b9b(local_8e,local_8c,0x4a60,(char *)s_sThousand_1160_1088);
  puVar1 = (undefined2 *)((int)*local_2a + 0x40);
  (*(code *)*puVar1)(0x10d8,local_2a);
  local_46 = (double)in_ST3;
  bVar8 = (byte)(((uint)(local_46 == 100.0) << 0xe) >> 8);
  bStack_91 = local_46 < 100.0 | (byte)(((uint)NAN(local_46) << 10) >> 8) | bVar8;
  local_92 = 0;
  puVar12 = (undefined4 *)local_2a;
  uVar14 = (undefined2)((ulong)local_2a >> 0x10);
  if (local_46 < 0.0 || local_46 >= 100.0 && bVar8 == 0) {
    *(undefined2 *)(puVar12 + 3) = 1;
    *(undefined2 *)((int)puVar12 + 0xe) = 0;
  }
  puVar10 = (undefined4 *)local_32;
  uVar7 = (undefined2)((ulong)local_32 >> 0x10);
  if ((2 < DAT_1160_1e06) && (local_66[2] < local_66[1])) {
    uVar15 = (undefined2)((ulong)local_36 >> 0x10);
    *(undefined2 *)((undefined4 *)local_36 + 3) = 1;
    *(undefined2 *)((int)(undefined4 *)local_36 + 0xe) = 0;
    *(undefined2 *)(puVar10 + 3) = 1;
    *(undefined2 *)((int)puVar10 + 0xe) = 0;
  }
  if (DAT_1160_1e06 < 4) {
    bVar8 = (byte)(((uint)(local_66[2] == local_46) << 0xe) >> 8);
    bStack_8f = local_66[2] < local_46 |
                (byte)(((uint)(NAN(local_66[2]) || NAN(local_46)) << 10) >> 8) | bVar8;
    if (local_66[2] >= local_46 && bVar8 == 0) {
      *(undefined2 *)(puVar10 + 3) = 1;
      *(undefined2 *)((int)puVar10 + 0xe) = 0;
      *(undefined2 *)(puVar12 + 3) = 1;
      *(undefined2 *)((int)puVar12 + 0xe) = 0;
    }
  }
  else {
    puVar11 = (undefined4 *)local_2e;
    uVar15 = (undefined2)((ulong)local_2e >> 0x10);
    if (local_66[3] < local_66[2]) {
      *(undefined2 *)(puVar10 + 3) = 1;
      *(undefined2 *)((int)puVar10 + 0xe) = 0;
      *(undefined2 *)(puVar11 + 3) = 1;
      *(undefined2 *)((int)puVar11 + 0xe) = 0;
    }
    bVar8 = (byte)(((uint)(local_66[3] == local_46) << 0xe) >> 8);
    bStack_8f = local_66[3] < local_46 |
                (byte)(((uint)(NAN(local_66[3]) || NAN(local_46)) << 10) >> 8) | bVar8;
    if (local_66[3] >= local_46 && bVar8 == 0) {
      *(undefined2 *)(puVar11 + 3) = 1;
      *(undefined2 *)((int)puVar11 + 0xe) = 0;
      *(undefined2 *)(puVar12 + 3) = 1;
      *(undefined2 *)((int)puVar12 + 0xe) = 0;
    }
  }
  local_90 = 0;
  lVar21 = lVar20;
  local_22 = local_46;
  local_1a = (undefined4 *)FUN_10d8_3b9b(local_8e,local_8c,0x4a73,(char *)s_sThousand_1160_1088);
  puVar1 = (undefined2 *)((int)*local_1a + 0x40);
  (*(code *)*puVar1)(0x10d8,local_1a);
  local_22 = (double)in_ST4;
  bVar8 = (byte)(((uint)(local_22 == 100.0) << 0xe) >> 8);
  bStack_91 = local_22 < 100.0 | (byte)(((uint)NAN(local_22) << 10) >> 8) | bVar8;
  local_92 = 0;
  bStack_8f = local_22 < 0.0 | (byte)(((uint)NAN(local_22) << 10) >> 8) |
              (byte)(((uint)(local_22 == 0.0) << 0xe) >> 8);
  local_90 = 0;
  if (local_22 < 0.0 || local_22 >= 100.0 && bVar8 == 0) {
    uVar14 = (undefined2)((ulong)local_1a >> 0x10);
    *(undefined2 *)((undefined4 *)local_1a + 3) = 1;
    *(undefined2 *)((int)(undefined4 *)local_1a + 0xe) = 0;
  }
  lVar22 = lVar21;
  local_1a = (undefined4 *)FUN_10d8_3b9b(local_8e,local_8c,0x4a7b,(char *)s_sThousand_1160_1088);
  puVar1 = (undefined2 *)((int)*local_1a + 0x40);
  (*(code *)*puVar1)(0x10d8,local_1a);
  local_22 = (double)in_ST5;
  bVar8 = (byte)(((uint)(local_22 == 100.0) << 0xe) >> 8);
  bStack_91 = local_22 < 100.0 | (byte)(((uint)NAN(local_22) << 10) >> 8) | bVar8;
  local_92 = 0;
  bStack_8f = local_22 < 0.0 | (byte)(((uint)NAN(local_22) << 10) >> 8) |
              (byte)(((uint)(local_22 == 0.0) << 0xe) >> 8);
  local_90 = 0;
  if (local_22 < 0.0 || local_22 >= 100.0 && bVar8 == 0) {
    uVar14 = (undefined2)((ulong)local_1a >> 0x10);
    *(undefined2 *)((undefined4 *)local_1a + 3) = 1;
    *(undefined2 *)((int)(undefined4 *)local_1a + 0xe) = 0;
  }
  local_8c = (int)((ulong)*(undefined4 *)(iVar9 + 400) >> 0x10);
  local_8e = (uint)*(undefined4 *)(iVar9 + 400);
  lVar23 = lVar22;
  local_1a = (undefined4 *)FUN_10d8_3b9b(local_8e,local_8c,0x4a82,(char *)s_sThousand_1160_1088);
  puVar1 = (undefined2 *)((int)*local_1a + 0x40);
  (*(code *)*puVar1)(0x10d8,local_1a);
  local_22 = (double)in_ST6;
  bVar8 = (byte)(((uint)(local_22 == 0.0) << 0xe) >> 8);
  bStack_8f = local_22 < 0.0 | (byte)(((uint)NAN(local_22) << 10) >> 8) | bVar8;
  local_90 = 0;
  if (local_22 < 0.0 || bVar8 != 0) {
    uVar14 = (undefined2)((ulong)local_1a >> 0x10);
    *(undefined2 *)((undefined4 *)local_1a + 3) = 1;
    *(undefined2 *)((int)(undefined4 *)local_1a + 0xe) = 0;
  }
  lVar24 = lVar23;
  local_1a = (undefined4 *)FUN_10d8_3b9b(local_8e,local_8c,0x4a93,(char *)s_sThousand_1160_1088);
  puVar1 = (undefined2 *)((int)*local_1a + 0x40);
  (*(code *)*puVar1)(0x10d8,local_1a);
  local_22 = (double)in_ST7;
  bVar8 = (byte)(((uint)(local_22 == 0.0) << 0xe) >> 8);
  bStack_8f = local_22 < 0.0 | (byte)(((uint)NAN(local_22) << 10) >> 8) | bVar8;
  local_90 = 0;
  if (local_22 < 0.0 || bVar8 != 0) {
    uVar14 = (undefined2)((ulong)local_1a >> 0x10);
    *(undefined2 *)((undefined4 *)local_1a + 3) = 1;
    *(undefined2 *)((int)(undefined4 *)local_1a + 0xe) = 0;
  }
  lVar25 = lVar24;
  local_1a = (undefined4 *)FUN_10d8_3b9b(local_8e,local_8c,0x4aa6,(char *)s_sThousand_1160_1088);
  puVar1 = (undefined2 *)((int)*local_1a + 0x40);
  (*(code *)*puVar1)(0x10d8,local_1a);
  local_84 = (undefined  [8])(double)lVar18;
  bVar8 = (byte)(((uint)((double)local_84 == 0.0) << 0xe) >> 8);
  bStack_8f = (double)local_84 < 0.0 | (byte)(((uint)NAN((double)local_84) << 10) >> 8) | bVar8;
  local_90 = 0;
  if ((double)local_84 < 0.0 || bVar8 != 0) {
    uVar14 = (undefined2)((ulong)local_1a >> 0x10);
    *(undefined2 *)((undefined4 *)local_1a + 3) = 1;
    *(undefined2 *)((int)(undefined4 *)local_1a + 0xe) = 0;
  }
  lVar18 = lVar25;
  local_1a = (undefined4 *)FUN_10d8_3b9b(local_8e,local_8c,0x4ab7,(char *)s_sThousand_1160_1088);
  puVar1 = (undefined2 *)((int)*local_1a + 0x40);
  (*(code *)*puVar1)(0x10d8,local_1a);
  local_22 = (double)lVar19;
  bVar8 = (byte)(((uint)(local_22 == (double)local_84) << 0xe) >> 8);
  bStack_91 = local_22 < (double)local_84 |
              (byte)(((uint)(NAN(local_22) || NAN((double)local_84)) << 10) >> 8) | bVar8;
  local_92 = 0;
  bStack_8f = local_22 < 0.0 | (byte)(((uint)NAN(local_22) << 10) >> 8) |
              (byte)(((uint)(local_22 == 0.0) << 0xe) >> 8);
  local_90 = 0;
  if (local_22 < 0.0 || local_22 >= (double)local_84 && bVar8 == 0) {
    uVar14 = (undefined2)((ulong)local_1a >> 0x10);
    *(undefined2 *)((undefined4 *)local_1a + 3) = 1;
    *(undefined2 *)((int)(undefined4 *)local_1a + 0xe) = 0;
  }
  lVar19 = lVar18;
  local_1a = (undefined4 *)FUN_10d8_3b9b(local_8e,local_8c,0x4acb,(char *)s_sThousand_1160_1088);
  puVar1 = (undefined2 *)((int)*local_1a + 0x40);
  (*(code *)*puVar1)(0x10d8,local_1a);
  local_22 = (double)lVar20;
  bStack_8f = local_22 < 0.0 | (byte)(((uint)NAN(local_22) << 10) >> 8) |
              (byte)(((uint)(local_22 == 0.0) << 0xe) >> 8);
  local_90 = 0;
  if (local_22 < 0.0) {
    uVar14 = (undefined2)((ulong)local_1a >> 0x10);
    *(undefined2 *)((undefined4 *)local_1a + 3) = 1;
    *(undefined2 *)((int)(undefined4 *)local_1a + 0xe) = 0;
  }
  lVar20 = lVar19;
  local_1a = (undefined4 *)FUN_10d8_3b9b(local_8e,local_8c,0x4ada,(char *)s_sThousand_1160_1088);
  puVar1 = (undefined2 *)((int)*local_1a + 0x40);
  (*(code *)*puVar1)(0x10d8,local_1a);
  local_22 = (double)lVar21;
  bVar8 = (byte)(((uint)(local_22 == 0.0) << 0xe) >> 8);
  bStack_8f = local_22 < 0.0 | (byte)(((uint)NAN(local_22) << 10) >> 8) | bVar8;
  local_90 = 0;
  if (local_22 < 0.0 || bVar8 != 0) {
    uVar14 = (undefined2)((ulong)local_1a >> 0x10);
    *(undefined2 *)((undefined4 *)local_1a + 3) = 1;
    *(undefined2 *)((int)(undefined4 *)local_1a + 0xe) = 0;
  }
  lVar21 = lVar20;
  local_1a = (undefined4 *)FUN_10d8_3b9b(local_8e,local_8c,0x4aed,(char *)s_sThousand_1160_1088);
  puVar1 = (undefined2 *)((int)*local_1a + 0x40);
  (*(code *)*puVar1)(0x10d8,local_1a);
  local_22 = (double)lVar22;
  bVar8 = (byte)(((uint)(local_22 == 0.0) << 0xe) >> 8);
  bStack_8f = local_22 < 0.0 | (byte)(((uint)NAN(local_22) << 10) >> 8) | bVar8;
  local_90 = 0;
  if (local_22 < 0.0 || bVar8 != 0) {
    uVar14 = (undefined2)((ulong)local_1a >> 0x10);
    *(undefined2 *)((undefined4 *)local_1a + 3) = 1;
    *(undefined2 *)((int)(undefined4 *)local_1a + 0xe) = 0;
  }
  lVar22 = lVar21;
  local_1a = (undefined4 *)FUN_10d8_3b9b(local_8e,local_8c,0x4afe,(char *)s_sThousand_1160_1088);
  puVar1 = (undefined2 *)((int)*local_1a + 0x40);
  (*(code *)*puVar1)(0x10d8,local_1a);
  local_22 = (double)lVar23;
  bVar8 = (byte)(((uint)(local_22 == 0.0) << 0xe) >> 8);
  bStack_8f = local_22 < 0.0 | (byte)(((uint)NAN(local_22) << 10) >> 8) | bVar8;
  local_90 = 0;
  if (local_22 < 0.0 || bVar8 != 0) {
    uVar14 = (undefined2)((ulong)local_1a >> 0x10);
    *(undefined2 *)((undefined4 *)local_1a + 3) = 1;
    *(undefined2 *)((int)(undefined4 *)local_1a + 0xe) = 0;
  }
  lVar23 = lVar22;
  local_1a = (undefined4 *)FUN_10d8_3b9b(local_8e,local_8c,0x4b0d,(char *)s_sThousand_1160_1088);
  puVar1 = (undefined2 *)((int)*local_1a + 0x40);
  (*(code *)*puVar1)(0x10d8,local_1a);
  local_22 = (double)lVar24;
  bStack_8f = local_22 < 0.0 | (byte)(((uint)NAN(local_22) << 10) >> 8) |
              (byte)(((uint)(local_22 == 0.0) << 0xe) >> 8);
  local_90 = 0;
  if (local_22 < 0.0) {
    uVar14 = (undefined2)((ulong)local_1a >> 0x10);
    *(undefined2 *)((undefined4 *)local_1a + 3) = 1;
    *(undefined2 *)((int)(undefined4 *)local_1a + 0xe) = 0;
  }
  lVar24 = lVar23;
  local_1a = (undefined4 *)FUN_10d8_3b9b(local_8e,local_8c,0x4b1c,(char *)s_sThousand_1160_1088);
  puVar1 = (undefined2 *)((int)*local_1a + 0x40);
  (*(code *)*puVar1)(0x10d8,local_1a);
  local_22 = (double)lVar25;
  bStack_8f = local_22 < 0.0 | (byte)(((uint)NAN(local_22) << 10) >> 8) |
              (byte)(((uint)(local_22 == 0.0) << 0xe) >> 8);
  local_90 = 0;
  if (local_22 < 0.0) {
    uVar14 = (undefined2)((ulong)local_1a >> 0x10);
    *(undefined2 *)((undefined4 *)local_1a + 3) = 1;
    *(undefined2 *)((int)(undefined4 *)local_1a + 0xe) = 0;
  }
  lVar25 = lVar24;
  local_1a = (undefined4 *)FUN_10d8_3b9b(local_8e,local_8c,0x4b2f,(char *)s_sThousand_1160_1088);
  puVar1 = (undefined2 *)((int)*local_1a + 0x40);
  (*(code *)*puVar1)(0x10d8,local_1a);
  local_22 = (double)lVar18;
  bVar8 = (byte)(((uint)(local_22 == 100.0) << 0xe) >> 8);
  bStack_91 = local_22 < 100.0 | (byte)(((uint)NAN(local_22) << 10) >> 8) | bVar8;
  local_92 = 0;
  bStack_8f = local_22 < 0.0 | (byte)(((uint)NAN(local_22) << 10) >> 8) |
              (byte)(((uint)(local_22 == 0.0) << 0xe) >> 8);
  local_90 = 0;
  if (local_22 < 0.0 || local_22 >= 100.0 && bVar8 == 0) {
    uVar14 = (undefined2)((ulong)local_1a >> 0x10);
    *(undefined2 *)((undefined4 *)local_1a + 3) = 1;
    *(undefined2 *)((int)(undefined4 *)local_1a + 0xe) = 0;
  }
  lVar18 = lVar25;
  local_1a = (undefined4 *)FUN_10d8_3b9b(local_8e,local_8c,0x4b3f,(char *)s_sThousand_1160_1088);
  puVar1 = (undefined2 *)((int)*local_1a + 0x40);
  (*(code *)*puVar1)(0x10d8,local_1a);
  local_22 = (double)lVar19;
  bStack_8f = local_22 < 0.0 | (byte)(((uint)NAN(local_22) << 10) >> 8) |
              (byte)(((uint)(local_22 == 0.0) << 0xe) >> 8);
  local_90 = 0;
  if (local_22 < 0.0) {
    uVar14 = (undefined2)((ulong)local_1a >> 0x10);
    *(undefined2 *)((undefined4 *)local_1a + 3) = 1;
    *(undefined2 *)((int)(undefined4 *)local_1a + 0xe) = 0;
  }
  lVar19 = lVar18;
  local_1a = (undefined4 *)FUN_10d8_3b9b(local_8e,local_8c,0x4b48,(char *)s_sThousand_1160_1088);
  puVar1 = (undefined2 *)((int)*local_1a + 0x40);
  (*(code *)*puVar1)(0x10d8,local_1a);
  local_22 = (double)lVar20;
  bStack_8f = local_22 < 0.0 | (byte)(((uint)NAN(local_22) << 10) >> 8) |
              (byte)(((uint)(local_22 == 0.0) << 0xe) >> 8);
  local_90 = 0;
  if (local_22 < 0.0) {
    uVar14 = (undefined2)((ulong)local_1a >> 0x10);
    *(undefined2 *)((undefined4 *)local_1a + 3) = 1;
    *(undefined2 *)((int)(undefined4 *)local_1a + 0xe) = 0;
  }
  lVar20 = lVar19;
  local_1a = (undefined4 *)FUN_10d8_3b9b(local_8e,local_8c,0x4b56,(char *)s_sThousand_1160_1088);
  puVar1 = (undefined2 *)((int)*local_1a + 0x40);
  (*(code *)*puVar1)(0x10d8,local_1a);
  local_22 = (double)lVar21;
  bStack_8f = local_22 < 0.0 | (byte)(((uint)NAN(local_22) << 10) >> 8) |
              (byte)(((uint)(local_22 == 0.0) << 0xe) >> 8);
  local_90 = 0;
  if (local_22 < 0.0) {
    uVar14 = (undefined2)((ulong)local_1a >> 0x10);
    *(undefined2 *)((undefined4 *)local_1a + 3) = 1;
    *(undefined2 *)((int)(undefined4 *)local_1a + 0xe) = 0;
  }
  lVar21 = lVar20;
  local_1a = (undefined4 *)FUN_10d8_3b9b(local_8e,local_8c,0x4b68,(char *)s_sThousand_1160_1088);
  puVar1 = (undefined2 *)((int)*local_1a + 0x44);
  local_10 = (*(code *)*puVar1)(0x10d8,local_1a);
  if (local_10 < 1) {
    uVar14 = (undefined2)((ulong)local_1a >> 0x10);
    *(undefined2 *)((undefined4 *)local_1a + 3) = 1;
    *(undefined2 *)((int)(undefined4 *)local_1a + 0xe) = 0;
  }
  local_1a = (undefined4 *)FUN_10d8_3b9b(local_8e,local_8c,0x4b7b,0x10d8);
  puVar1 = (undefined2 *)((int)*local_1a + 0x40);
  (*(code *)*puVar1)(0x10d8,local_1a);
  local_22 = (double)lVar22;
  bVar8 = (byte)(((uint)(local_22 == 4.0) << 0xe) >> 8);
  bStack_91 = local_22 < 4.0 | (byte)(((uint)NAN(local_22) << 10) >> 8) | bVar8;
  local_92 = 0;
  bStack_8f = local_22 < 0.0 | (byte)(((uint)NAN(local_22) << 10) >> 8) |
              (byte)(((uint)(local_22 == 0.0) << 0xe) >> 8);
  local_90 = 0;
  if (local_22 < 0.0 || local_22 >= 4.0 && bVar8 == 0) {
    uVar14 = (undefined2)((ulong)local_1a >> 0x10);
    *(undefined2 *)((undefined4 *)local_1a + 3) = 1;
    *(undefined2 *)((int)(undefined4 *)local_1a + 0xe) = 0;
  }
  lVar22 = lVar21;
  local_1a = (undefined4 *)FUN_10d8_3b9b(local_8e,local_8c,0x4b8b,(char *)s_sThousand_1160_1088);
  puVar1 = (undefined2 *)((int)*local_1a + 0x40);
  (*(code *)*puVar1)(0x10d8,local_1a);
  local_22 = (double)lVar23;
  bVar8 = (byte)(((uint)(local_22 == 100.0) << 0xe) >> 8);
  bStack_91 = local_22 < 100.0 | (byte)(((uint)NAN(local_22) << 10) >> 8) | bVar8;
  local_92 = 0;
  bStack_8f = local_22 < 0.0 | (byte)(((uint)NAN(local_22) << 10) >> 8) |
              (byte)(((uint)(local_22 == 0.0) << 0xe) >> 8);
  local_90 = 0;
  if (local_22 < 0.0 || local_22 >= 100.0 && bVar8 == 0) {
    uVar14 = (undefined2)((ulong)local_1a >> 0x10);
    *(undefined2 *)((undefined4 *)local_1a + 3) = 1;
    *(undefined2 *)((int)(undefined4 *)local_1a + 0xe) = 0;
  }
  lVar23 = lVar22;
  local_1a = (undefined4 *)FUN_10d8_3b9b(local_8e,local_8c,0x4b9b,(char *)s_sThousand_1160_1088);
  puVar1 = (undefined2 *)((int)*local_1a + 0x40);
  (*(code *)*puVar1)(0x10d8,local_1a);
  local_22 = (double)lVar24;
  dVar2 = ABS(local_22);
  bVar8 = (byte)(((uint)(dVar2 == 50.0) << 0xe) >> 8);
  bStack_8f = dVar2 < 50.0 | (byte)(((uint)NAN(dVar2) << 10) >> 8) | bVar8;
  local_90 = 0;
  if (dVar2 >= 50.0 && bVar8 == 0) {
    uVar14 = (undefined2)((ulong)local_1a >> 0x10);
    *(undefined2 *)((undefined4 *)local_1a + 3) = 1;
    *(undefined2 *)((int)(undefined4 *)local_1a + 0xe) = 0;
  }
  local_8c = local_86;
  if (0 < local_86) {
    local_7c = 1;
    while( true ) {
      lVar24 = lVar23;
      iVar5 = FUN_1158_0416();
      uVar34 = *(undefined4 *)(local_84 + iVar5 * 4 + 6);
      local_8e = (uint)((ulong)uVar34 >> 0x10);
      local_90 = (undefined)uVar34;
      bStack_8f = (byte)((ulong)uVar34 >> 8);
      local_1a = (undefined4 *)FUN_10d8_3b9b((int)uVar34,local_8e,0x4bb2,0x1158);
      puVar1 = (undefined2 *)((int)*local_1a + 0x40);
      (*(code *)*puVar1)(0x10d8,local_1a);
      local_66[0] = (double)lVar25;
      bVar8 = (byte)(((uint)(local_66[0] == 0.0) << 0xe) >> 8);
      bStack_91 = local_66[0] < 0.0 | (byte)(((uint)NAN(local_66[0]) << 10) >> 8) | bVar8;
      local_92 = 0;
      if (local_66[0] < 0.0 || bVar8 != 0) {
        uVar14 = (undefined2)((ulong)local_1a >> 0x10);
        *(undefined2 *)((undefined4 *)local_1a + 3) = 1;
        *(undefined2 *)((int)(undefined4 *)local_1a + 0xe) = 0;
      }
      lVar26 = lVar24;
      local_22 = local_66[0];
      local_1a = (undefined4 *)
                 FUN_10d8_3b9b(CONCAT11(bStack_8f,local_90),local_8e,0x4bbe,
                               (char *)s_sThousand_1160_1088);
      puVar1 = (undefined2 *)((int)*local_1a + 0x40);
      (*(code *)*puVar1)(0x10d8,local_1a);
      local_6e = (double)lVar18;
      bVar8 = (byte)(((uint)(local_6e == local_66[0]) << 0xe) >> 8);
      bStack_91 = local_6e < local_66[0] |
                  (byte)(((uint)(NAN(local_6e) || NAN(local_66[0])) << 10) >> 8) | bVar8;
      local_92 = 0;
      if (local_6e < local_66[0] || bVar8 != 0) {
        uVar14 = (undefined2)((ulong)local_1a >> 0x10);
        *(undefined2 *)((undefined4 *)local_1a + 3) = 1;
        *(undefined2 *)((int)(undefined4 *)local_1a + 0xe) = 0;
      }
      lVar27 = lVar26;
      local_22 = local_6e;
      local_1a = (undefined4 *)FUN_10d8_3b9b(CONCAT11(bStack_8f,local_90),local_8e,0x4bca,0x10d8);
      puVar1 = (undefined2 *)((int)*local_1a + 0x40);
      (*(code *)*puVar1)(0x10d8,local_1a);
      local_22 = (double)lVar19;
      local_94 = (uint)(local_22 < 0.5) << 8 | (uint)NAN(local_22) << 10 |
                 (uint)(local_22 == 0.5) << 0xe;
      bStack_91 = local_22 < -0.5 | (byte)(((uint)NAN(local_22) << 10) >> 8) |
                  (byte)(((uint)(local_22 == -0.5) << 0xe) >> 8);
      local_92 = 0;
      if (local_22 < -0.5 || local_22 >= 0.5 && (local_22 == 0.5) == 0) {
        uVar14 = (undefined2)((ulong)local_1a >> 0x10);
        *(undefined2 *)((undefined4 *)local_1a + 3) = 1;
        *(undefined2 *)((int)(undefined4 *)local_1a + 0xe) = 0;
      }
      lVar29 = lVar27;
      local_1a = (undefined4 *)
                 FUN_10d8_3b9b(CONCAT11(bStack_8f,local_90),local_8e,0x4be5,
                               (char *)s_sThousand_1160_1088);
      puVar1 = (undefined2 *)((int)*local_1a + 0x40);
      (*(code *)*puVar1)(0x10d8,local_1a);
      local_22 = (double)lVar20;
      bVar8 = (byte)(((uint)(local_22 == 0.0) << 0xe) >> 8);
      bStack_91 = local_22 < 0.0 | (byte)(((uint)NAN(local_22) << 10) >> 8) | bVar8;
      local_92 = 0;
      if (local_22 < 0.0 || bVar8 != 0) {
        uVar14 = (undefined2)((ulong)local_1a >> 0x10);
        *(undefined2 *)((undefined4 *)local_1a + 3) = 1;
        *(undefined2 *)((int)(undefined4 *)local_1a + 0xe) = 0;
      }
      local_89 = '\0';
      lVar25 = lVar29;
      local_36 = (undefined4 *)
                 FUN_10d8_3b9b(CONCAT11(bStack_8f,local_90),local_8e,0x4bf1,
                               (char *)s_sThousand_1160_1088);
      puVar1 = (undefined2 *)((int)*local_36 + 0x40);
      (*(code *)*puVar1)(0x10d8,local_36);
      local_66[1] = (double)lVar21;
      local_94 = (uint)(local_66[1] < 1.0) << 8 | (uint)NAN(local_66[1]) << 10 |
                 (uint)(local_66[1] == 1.0) << 0xe;
      bStack_91 = local_66[1] < 0.0 | (byte)(((uint)NAN(local_66[1]) << 10) >> 8) |
                  (byte)(((uint)(local_66[1] == 0.0) << 0xe) >> 8);
      local_92 = 0;
      if (local_66[1] < 0.0 || local_66[1] >= 1.0 && (local_66[1] == 1.0) == 0) {
        uVar14 = (undefined2)((ulong)local_1a >> 0x10);
        *(undefined2 *)((undefined4 *)local_1a + 3) = 1;
        *(undefined2 *)((int)(undefined4 *)local_1a + 0xe) = 0;
        local_89 = '\x01';
      }
      lVar18 = lVar25;
      local_32 = (undefined4 *)
                 FUN_10d8_3b9b(CONCAT11(bStack_8f,local_90),local_8e,0x4bff,
                               (char *)s_sThousand_1160_1088);
      puVar1 = (undefined2 *)((int)*local_32 + 0x40);
      (*(code *)*puVar1)(0x10d8,local_32);
      local_66[2] = (double)lVar22;
      local_94 = (uint)(local_66[2] < 1.0) << 8 | (uint)NAN(local_66[2]) << 10 |
                 (uint)(local_66[2] == 1.0) << 0xe;
      bStack_91 = local_66[2] < 0.0 | (byte)(((uint)NAN(local_66[2]) << 10) >> 8) |
                  (byte)(((uint)(local_66[2] == 0.0) << 0xe) >> 8);
      local_92 = 0;
      if (local_66[2] < 0.0 || local_66[2] >= 1.0 && (local_66[2] == 1.0) == 0) {
        uVar14 = (undefined2)((ulong)local_1a >> 0x10);
        *(undefined2 *)((undefined4 *)local_1a + 3) = 1;
        *(undefined2 *)((int)(undefined4 *)local_1a + 0xe) = 0;
        local_89 = '\x01';
      }
      lVar19 = lVar18;
      local_2e = (undefined4 *)
                 FUN_10d8_3b9b(CONCAT11(bStack_8f,local_90),local_8e,0x4c0e,
                               (char *)s_sThousand_1160_1088);
      puVar1 = (undefined2 *)((int)*local_2e + 0x40);
      (*(code *)*puVar1)(0x10d8,local_2e);
      local_66[3] = (double)lVar23;
      local_94 = (uint)(local_66[3] < 1.0) << 8 | (uint)NAN(local_66[3]) << 10 |
                 (uint)(local_66[3] == 1.0) << 0xe;
      bStack_91 = local_66[3] < 0.0 | (byte)(((uint)NAN(local_66[3]) << 10) >> 8) |
                  (byte)(((uint)(local_66[3] == 0.0) << 0xe) >> 8);
      local_92 = 0;
      if (local_66[3] < 0.0 || local_66[3] >= 1.0 && (local_66[3] == 1.0) == 0) {
        uVar14 = (undefined2)((ulong)local_1a >> 0x10);
        *(undefined2 *)((undefined4 *)local_1a + 3) = 1;
        *(undefined2 *)((int)(undefined4 *)local_1a + 0xe) = 0;
        local_89 = '\x01';
      }
      lVar20 = lVar19;
      local_2a = (undefined4 *)
                 FUN_10d8_3b9b(CONCAT11(bStack_8f,local_90),local_8e,0x4c1e,
                               (char *)s_sThousand_1160_1088);
      puVar1 = (undefined2 *)((int)*local_2a + 0x40);
      (*(code *)*puVar1)(0x10d8,local_2a);
      local_46 = (double)lVar24;
      local_94 = (uint)(local_46 < 1.0) << 8 | (uint)NAN(local_46) << 10 |
                 (uint)(local_46 == 1.0) << 0xe;
      bStack_91 = local_46 < 0.0 | (byte)(((uint)NAN(local_46) << 10) >> 8) |
                  (byte)(((uint)(local_46 == 0.0) << 0xe) >> 8);
      local_92 = 0;
      if (local_46 < 0.0 || local_46 >= 1.0 && (local_46 == 1.0) == 0) {
        uVar14 = (undefined2)((ulong)local_1a >> 0x10);
        *(undefined2 *)((undefined4 *)local_1a + 3) = 1;
        *(undefined2 *)((int)(undefined4 *)local_1a + 0xe) = 0;
        local_89 = '\x01';
      }
      lVar21 = lVar20;
      local_26 = (undefined4 *)
                 FUN_10d8_3b9b(CONCAT11(bStack_8f,local_90),local_8e,0x4c2a,
                               (char *)s_sThousand_1160_1088);
      puVar1 = (undefined2 *)((int)*local_26 + 0x40);
      (*(code *)*puVar1)(0x10d8,local_26);
      local_3e = (double)lVar26;
      local_94 = (uint)(local_3e < 1.0) << 8 | (uint)NAN(local_3e) << 10 |
                 (uint)(local_3e == 1.0) << 0xe;
      pcVar16 = (char *)s_sThousand_1160_1088;
      bStack_91 = local_3e < 0.0 | (byte)(((uint)NAN(local_3e) << 10) >> 8) |
                  (byte)(((uint)(local_3e == 0.0) << 0xe) >> 8);
      local_92 = 0;
      if (local_3e < 0.0 || local_3e >= 1.0 && (local_3e == 1.0) == 0) {
        uVar14 = (undefined2)((ulong)local_1a >> 0x10);
        *(undefined2 *)((undefined4 *)local_1a + 3) = 1;
        *(undefined2 *)((int)(undefined4 *)local_1a + 0xe) = 0;
        local_89 = '\x01';
      }
      lVar22 = lVar21;
      if (local_89 == '\0') {
        local_88 = 0;
        local_10._0_2_ = 1;
        local_10._2_2_ = 0;
        while( true ) {
          iVar5 = local_10._2_2_;
          iVar4 = FUN_1158_0416();
          lVar28 = (longdouble)local_66[iVar4] * (longdouble)100.0;
          lVar23 = lVar27;
          lVar24 = lVar29;
          lVar26 = lVar25;
          lVar30 = lVar18;
          lVar31 = lVar19;
          lVar32 = lVar20;
          lVar22 = lVar21;
          uVar6 = FUN_1158_102f();
          lVar27 = lVar28;
          lVar29 = lVar23;
          lVar25 = lVar24;
          lVar18 = lVar26;
          lVar19 = lVar30;
          lVar20 = lVar31;
          lVar21 = lVar32;
          if (SCARRY2((int)local_88 >> 0xf,iVar5) !=
              SCARRY2(((int)local_88 >> 0xf) + iVar5,(uint)CARRY2(local_88,uVar6))) {
            FUN_1158_043e(0x1158);
            lVar27 = lVar28;
            lVar29 = lVar23;
            lVar25 = lVar24;
            lVar18 = lVar26;
            lVar19 = lVar30;
            lVar20 = lVar31;
            lVar21 = lVar32;
          }
          pcVar16 = (char *)0x1158;
          local_88 = FUN_1158_0416();
          if ((local_10._2_2_ == 0) && ((uint)local_10 == 5)) break;
          bVar17 = 0xfffe < (uint)local_10;
          local_10._0_2_ = (uint)local_10 + 1;
          local_10._2_2_ = local_10._2_2_ + (uint)bVar17;
        }
        if (local_88 != 100) {
          local_10._0_2_ = 1;
          local_10._2_2_ = 0;
          while( true ) {
            pcVar16 = (char *)0x1158;
            iVar5 = FUN_1158_0416();
            uVar34 = *(undefined4 *)((int)&local_3e + iVar5 * 4 + 4);
            uVar14 = (undefined2)((ulong)uVar34 >> 0x10);
            iVar5 = (int)uVar34;
            *(undefined2 *)(iVar5 + 0xc) = 1;
            *(undefined2 *)(iVar5 + 0xe) = 0;
            if ((local_10._2_2_ == 0) && ((uint)local_10 == 5)) break;
            bVar17 = 0xfffe < (uint)local_10;
            local_10._0_2_ = (uint)local_10 + 1;
            local_10._2_2_ = local_10._2_2_ + (uint)bVar17;
          }
        }
      }
      local_1a = (undefined4 *)FUN_10d8_3b9b(CONCAT11(bStack_8f,local_90),local_8e,0x4c47,pcVar16);
      puVar1 = (undefined2 *)((int)*local_1a + 0x40);
      (*(code *)*puVar1)(0x10d8,local_1a);
      local_22 = (double)lVar27;
      local_94 = (uint)(local_22 < 1.0) << 8 | (uint)NAN(local_22) << 10 |
                 (uint)(local_22 == 1.0) << 0xe;
      bStack_91 = local_22 < 0.0 | (byte)(((uint)NAN(local_22) << 10) >> 8) |
                  (byte)(((uint)(local_22 == 0.0) << 0xe) >> 8);
      local_92 = 0;
      if (local_22 < 0.0 || local_22 >= 1.0 && (local_22 == 1.0) == 0) {
        uVar14 = (undefined2)((ulong)local_1a >> 0x10);
        *(undefined2 *)((undefined4 *)local_1a + 3) = 1;
        *(undefined2 *)((int)(undefined4 *)local_1a + 0xe) = 0;
      }
      lVar23 = lVar22;
      local_1a = (undefined4 *)
                 FUN_10d8_3b9b(CONCAT11(bStack_8f,local_90),local_8e,0x4c59,
                               (char *)s_sThousand_1160_1088);
      puVar1 = (undefined2 *)((int)*local_1a + 0x44);
      lVar33 = (*(code *)*puVar1)(0x10d8,local_1a);
      if (lVar33 < 0) {
        uVar14 = (undefined2)((ulong)local_1a >> 0x10);
        *(undefined2 *)((undefined4 *)local_1a + 3) = 1;
        *(undefined2 *)((int)(undefined4 *)local_1a + 0xe) = 0;
      }
      local_72 = lVar33;
      local_1a = (undefined4 *)FUN_10d8_3b9b(CONCAT11(bStack_8f,local_90),local_8e,0x4c6c,0x10d8);
      puVar1 = (undefined2 *)((int)*local_1a + 0x40);
      (*(code *)*puVar1)(0x10d8,local_1a);
      local_22 = (double)lVar29;
      local_96 = (uint)(local_22 < 0.0) << 8 | (uint)NAN(local_22) << 10 |
                 (uint)(local_22 == 0.0) << 0xe;
      local_94 = (uint)(local_22 < local_6e) << 8 | (uint)(NAN(local_22) || NAN(local_6e)) << 10 |
                 (uint)(local_22 == local_6e) << 0xe;
      bStack_91 = local_22 < 0.0 | (byte)(((uint)NAN(local_22) << 10) >> 8) |
                  (byte)(((uint)(local_22 == 0.0) << 0xe) >> 8);
      local_92 = 0;
      if ((local_22 < 0.0 || local_22 >= local_6e && (local_22 == local_6e) == 0) ||
          (local_22 == 0.0) != 0 && 0 < local_72) {
        uVar14 = (undefined2)((ulong)local_1a >> 0x10);
        *(undefined2 *)((undefined4 *)local_1a + 3) = 1;
        *(undefined2 *)((int)(undefined4 *)local_1a + 0xe) = 0;
      }
      if (local_7c == local_8c) break;
      local_7c = local_7c + 1;
    }
  }
  local_11 = '\0';
  iVar5 = FUN_1148_527d(iVar9,uVar13);
  uVar6 = iVar5 - 1;
  lVar33 = local_10;
  if (SBORROW2(iVar5,1)) {
    uVar6 = FUN_1158_043e(0x1148);
    lVar33 = local_10;
  }
  local_8c = (int)uVar6 >> 0xf;
  local_10._0_2_ = 0;
  local_8e = uVar6;
  if (-1 < local_8c) {
    local_10._0_2_ = 0;
    local_10._2_2_ = 0;
    while( true ) {
      uVar14 = FUN_1158_0416();
      uVar34 = FUN_1148_5246(iVar9,uVar13,uVar14);
      cVar3 = FUN_1158_2255(0x399,0x1138,uVar34);
      if (cVar3 != '\0') {
        uVar14 = FUN_1158_0416();
        uVar34 = FUN_1148_5246(iVar9,uVar13,uVar14);
        uVar34 = FUN_1158_2273(0x399,0x1138,uVar34);
        if (*(char *)((int)uVar34 + 0x29) != '\0') {
          uVar14 = FUN_1158_0416();
          uVar34 = FUN_1148_5246(iVar9,uVar13,uVar14);
          cVar3 = FUN_1158_2255(0x22,0x10d0,uVar34);
          if (cVar3 != '\0') {
            uVar14 = FUN_1158_0416();
            uVar34 = FUN_1148_5246(iVar9,uVar13,uVar14);
            cVar3 = FUN_1158_2255(0x22,0x10d0,uVar34);
            if (cVar3 != '\0') {
              uVar14 = FUN_1158_0416();
              uVar34 = FUN_1148_5246(iVar9,uVar13,uVar14);
              uVar34 = FUN_1158_2273(0x22,0x10d0,uVar34);
              local_92 = (undefined)uVar34;
              bStack_91 = (byte)((ulong)uVar34 >> 8);
              local_90 = (undefined)((ulong)uVar34 >> 0x10);
              bStack_8f = (byte)((ulong)uVar34 >> 0x18);
              puVar35 = local_192;
              uVar14 = unaff_SS;
              FUN_10d0_1a9f((int)uVar34,(int)((ulong)uVar34 >> 0x10));
              uVar34 = FUN_10d0_1a5f(CONCAT11(bStack_91,local_92),
                                     (int)(CONCAT13(bStack_8f,
                                                    CONCAT12(local_90,CONCAT11(bStack_91,local_92)))
                                          >> 0x10));
              uVar34 = *(undefined4 *)((int)uVar34 + 0x1a);
              local_1a = (undefined4 *)
                         FUN_10d8_3b9b((int)uVar34,(int)((ulong)uVar34 >> 0x10),puVar35,uVar14);
            }
            local_16 = 0xfffa;
            local_14 = 0xffff;
            uVar14 = (undefined2)((ulong)local_1a >> 0x10);
            puVar12 = (undefined4 *)local_1a;
            if ((*(int *)((int)puVar12 + 0xe) == 0) && (*(int *)(puVar12 + 3) == 1)) {
              local_16 = 0xff;
              local_14 = 0;
              local_11 = '\x01';
            }
            if ((*(int *)((int)puVar12 + 0xe) == 0) && (*(int *)(puVar12 + 3) == 2)) {
              local_16 = 0x80;
              local_14 = 0;
            }
            *(undefined2 *)(puVar12 + 3) = 0;
            *(undefined2 *)((int)puVar12 + 0xe) = 0;
            uVar14 = FUN_1158_0416();
            uVar34 = FUN_1148_5246(iVar9,uVar13,uVar14);
            cVar3 = FUN_1158_2255(0x22,0x10d0,uVar34);
            if (cVar3 != '\0') {
              uVar14 = FUN_1158_0416();
              uVar34 = FUN_1148_5246(iVar9,uVar13,uVar14);
              uVar34 = FUN_1158_2273(0x22,0x10d0,uVar34);
              local_92 = (undefined)uVar34;
              bStack_91 = (byte)((ulong)uVar34 >> 8);
              local_90 = (undefined)((ulong)uVar34 >> 0x10);
              bStack_8f = (byte)((ulong)uVar34 >> 0x18);
              uVar14 = local_14;
              uVar7 = FUN_1158_0416();
              FUN_1138_1ed5(CONCAT11(bStack_91,local_92),
                            (int)(CONCAT13(bStack_8f,CONCAT12(local_90,CONCAT11(bStack_91,local_92))
                                          ) >> 0x10),uVar7,uVar14);
            }
          }
        }
      }
      lVar33 = CONCAT22(local_10._2_2_,(uint)local_10);
      if ((local_10._2_2_ == local_8c) && ((uint)local_10 == local_8e)) break;
      bVar17 = 0xfffe < (uint)local_10;
      local_10._0_2_ = (uint)local_10 + 1;
      local_10._2_2_ = local_10._2_2_ + (uint)bVar17;
    }
  }
  if (*(char *)(iVar9 + 0x48d) != '\0') {
    uVar6 = (uint)local_10 & 0xff00;
    if (local_11 == '\0') {
      uVar6 = uVar6 + 1;
    }
    *(undefined *)(iVar9 + 0x490) = (char)uVar6;
    local_10 = lVar33;
    FUN_1120_6e11((int)*(undefined4 *)(iVar9 + 0x464),
                  (int)((ulong)*(undefined4 *)(iVar9 + 0x464) >> 0x10),
                  CONCAT11((char)(uVar6 >> 8),*(undefined *)(iVar9 + 0x490)));
    lVar33 = local_10;
  }
  local_10 = lVar33;
  if (local_11 == '\0') {
    FUN_1010_3675();
    bVar8 = extraout_AH_00;
  }
  else {
    FUN_1010_36fb();
    bVar8 = extraout_AH;
  }
  iVar9 = (uint)bVar8 * 0x100;
  if (local_11 == '\0') {
    iVar9 = iVar9 + 1;
  }
  return iVar9;
}




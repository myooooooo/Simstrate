/* Simstrat (FR).EXE - segment Code35 - 82 fonctions
   Decompile par Ghidra 11.2.1 (x86 16 bits, chargeur NE). */

/* ---- FUN_1110_07e1 @ 1110:07e1  (654 octets) ---- */

void __stdcall16far
FUN_1110_07e1(char param_1,char param_2,char param_3,char param_4,int param_5,undefined4 param_6,
             undefined4 param_7,undefined4 param_8)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 unaff_SS;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  int local_10;
  undefined2 local_e;
  undefined2 local_c;
  undefined2 local_a;
  int local_8;
  int local_6;
  char local_3;
  
  if (((param_4 == '\0') && (DAT_1160_2c0c != '\0')) || (param_4 == '\x02')) {
    local_3 = '\x01';
  }
  else {
    local_3 = '\0';
  }
  uVar2 = (undefined2)((ulong)param_6 >> 0x10);
  FUN_1158_161b(8,&local_c,unaff_SS,(int)param_6,uVar2);
  uVar3 = (undefined2)((ulong)param_7 >> 0x10);
  iVar1 = (int)param_7;
  local_10 = iVar1;
  local_e = uVar3;
  if (local_3 == '\0') {
    FUN_1128_13da((int)*(undefined4 *)(iVar1 + 0xb),
                  (int)((ulong)*(undefined4 *)(iVar1 + 0xb) >> 0x10),0xfff9,0xffff);
    FUN_1128_1684((int)*(undefined4 *)(local_10 + 0xf),
                  (int)((ulong)*(undefined4 *)(local_10 + 0xf) >> 0x10),0xfff0,0xffff);
    FUN_1128_177c((int)*(undefined4 *)(local_10 + 0xf),
                  (int)((ulong)*(undefined4 *)(local_10 + 0xf) >> 0x10),0);
    FUN_1128_1e22(local_10,local_e,local_6,local_8,local_a,local_c);
    if (param_3 != '\0') {
      FUN_1128_2164(local_10,local_e,0xfff0,0xffff,local_a,local_c);
      FUN_1128_2164(local_10,local_e,0xfff0,0xffff,local_6 + -1,local_c);
      FUN_1128_2164(local_10,local_e,0xfff0,0xffff,local_a,local_8 + -1);
      FUN_1128_2164(local_10,local_e,0xfff0,0xffff,local_6 + -1,local_8 + -1);
    }
    if (param_1 != '\0') {
      INFLATERECT(0x1128,0xffff,0xffff,&local_c);
      FUN_1128_177c((int)*(undefined4 *)(local_10 + 0xf),
                    (int)((ulong)*(undefined4 *)(local_10 + 0xf) >> 0x10),1);
      FUN_1128_1e22(local_10,local_e,local_6,local_8,local_a,local_c);
    }
    INFLATERECT(0x1128,0xffff,0xffff,&local_c);
    if (param_2 == '\0') {
      FUN_1118_18ea(param_5,0xffef,0xffff,0xffeb,0xffff,&local_c,unaff_SS,iVar1,uVar3);
    }
    else {
      FUN_1128_13da((int)*(undefined4 *)(local_10 + 0xb),
                    (int)((ulong)*(undefined4 *)(local_10 + 0xb) >> 0x10),0xffef,0xffff);
      local_1c = FUN_1148_066e(local_6 + -1,local_c);
      local_18 = FUN_1148_066e(local_a,local_c);
      local_14 = FUN_1148_066e(local_a,local_8);
      FUN_1128_1de1(local_10,local_e,2,&local_1c,unaff_SS);
    }
  }
  else {
    FUN_1128_1684((int)*(undefined4 *)(iVar1 + 0xf),
                  (int)((ulong)*(undefined4 *)(iVar1 + 0xf) >> 0x10),0xfff0,0xffff);
    FUN_1128_177c((int)*(undefined4 *)(local_10 + 0xf),
                  (int)((ulong)*(undefined4 *)(local_10 + 0xf) >> 0x10),0);
    FUN_1128_1ce5(local_10,local_e,&local_c,unaff_SS);
    if (param_2 == '\0') {
      FUN_1118_18ea(1,0xfff9,0xffff,0xffef,0xffff,&local_c,unaff_SS,iVar1,uVar3);
      FUN_1118_18ea(1,0xffef,0xffff,0xffeb,0xffff,&local_c,unaff_SS,iVar1,uVar3);
    }
    else {
      FUN_1118_18ea(1,0xffeb,0xffff,0xffef,0xffff,&local_c,unaff_SS,iVar1,uVar3);
      FUN_1118_18ea(1,0xffef,0xffff,0xfff9,0xffff,&local_c,unaff_SS,iVar1,uVar3);
    }
  }
  uVar3 = (undefined2)param_8;
  FUN_1158_161b(8,uVar3,(int)((ulong)param_8 >> 0x10),(int)param_6,uVar2);
  INFLATERECT(0x1158,-param_5,-param_5,uVar3);
  if (param_2 != '\0') {
    OFFSETRECT(0x14d0,1,1,uVar3);
  }
  return;
}



/* ---- FUN_1110_0a6f @ 1110:0a6f  (140 octets) ---- */

undefined4 FUN_1110_0a6f(char param_1)

{
  undefined2 uVar1;
  undefined4 uVar2;
  
  if (*(int *)(param_1 * 4 + 0x2ae0) == 0 && *(int *)(param_1 * 4 + 0x2ae2) == 0) {
    uVar2 = FUN_1128_56bd(0x83f,0x1128,1);
    *(undefined2 *)(param_1 * 4 + 0x2ae0) = (int)uVar2;
    *(undefined2 *)(param_1 * 4 + 0x2ae2) = (int)((ulong)uVar2 >> 0x10);
    uVar1 = LOADBITMAP(0x1128,*(undefined2 *)(param_1 * 4 + 0xdb0),
                       *(undefined2 *)(param_1 * 4 + 0xdb2));
    uVar2 = *(undefined4 *)(param_1 * 4 + 0x2ae0);
    FUN_1128_6104((int)uVar2,(int)((ulong)uVar2 >> 0x10),uVar1);
  }
  return CONCAT22(*(undefined2 *)(param_1 * 4 + 0x2ae2),*(undefined2 *)(param_1 * 4 + 0x2ae0));
}



/* ---- FUN_1110_0bd3 @ 1110:0bd3  (31 octets) ---- */

int FUN_1110_0bd3(undefined2 param_1_00,int param_1,int param_2)

{
  undefined2 local_4;
  
  local_4 = param_2;
  if (param_1 < param_2) {
    local_4 = param_1;
  }
  return local_4;
}



/* ---- FUN_1110_0bf2 @ 1110:0bf2  (214 octets) ---- */

void __stdcall16far FUN_1110_0bf2(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined2 uVar3;
  int iVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  long lVar8;
  undefined2 local_6;
  undefined2 local_4;
  
  uVar6 = (undefined2)((ulong)param_1 >> 0x10);
  iVar4 = (int)param_1;
  if (param_2 != *(int *)(iVar4 + 4)) {
    iVar1 = (param_2 + 0xf) / 0x10 << 1;
    iVar2 = (*(int *)(iVar4 + 4) + 0xf) / 0x10 << 1;
    if (iVar1 != iVar2) {
      if (iVar1 == 0) {
        lVar8 = 0;
      }
      else {
        lVar8 = FUN_1158_0182(iVar1);
        FUN_1158_1ee5(0,iVar1,lVar8);
      }
      local_4 = (undefined2)((ulong)lVar8 >> 0x10);
      local_6 = (undefined2)lVar8;
      if (iVar2 != 0) {
        if (lVar8 != 0) {
          uVar7 = (undefined2)((ulong)*(undefined4 *)(iVar4 + 6) >> 0x10);
          uVar5 = (undefined2)*(undefined4 *)(iVar4 + 6);
          uVar3 = FUN_1110_0bd3(&stack0xfffe,iVar1,iVar2);
          FUN_1158_1ec1(uVar3,lVar8,uVar5,uVar7);
        }
        FUN_1158_019c(iVar2,*(undefined2 *)(iVar4 + 6),*(undefined2 *)(iVar4 + 8));
      }
      *(undefined2 *)(iVar4 + 6) = local_6;
      *(undefined2 *)(iVar4 + 8) = local_4;
    }
    *(int *)(iVar4 + 4) = param_2;
  }
  return;
}



/* ---- FUN_1110_0cc8 @ 1110:0cc8  (109 octets) ---- */

void __stdcall16far FUN_1110_0cc8(undefined4 param_1,char param_2,int param_3)

{
  uint *puVar1;
  undefined4 uVar2;
  byte bVar3;
  undefined2 uVar4;
  
  uVar4 = (undefined2)((ulong)param_1 >> 0x10);
  if (param_2 == '\0') {
    bVar3 = (byte)(param_3 % 0x10);
    if (bVar3 < 0x10) {
      bVar3 = bVar3 & 0xf;
      uVar2 = *(undefined4 *)((int)param_1 + 6);
      puVar1 = (uint *)((int)uVar2 + (param_3 / 0x10) * 2);
      *puVar1 = *puVar1 & (-2 << bVar3 | 0xfffeU >> 0x10 - bVar3);
    }
  }
  else {
    bVar3 = (byte)(param_3 % 0x10);
    if (bVar3 < 0x10) {
      bVar3 = bVar3 & 0xf;
      uVar2 = *(undefined4 *)((int)param_1 + 6);
      puVar1 = (uint *)((int)uVar2 + (param_3 / 0x10) * 2);
      *puVar1 = *puVar1 | 1 << bVar3 | 1U >> 0x10 - bVar3;
    }
  }
  return;
}



/* ---- FUN_1110_0d35 @ 1110:0d35  (69 octets) ---- */

undefined4 __stdcall16far FUN_1110_0d35(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  
  iVar3 = param_2 / 0x10;
  uVar4 = param_2 % 0x10;
  if ((byte)uVar4 < 0x10) {
    bVar2 = (byte)uVar4 & 0xf;
    iVar3 = param_2 % 0x10;
    uVar4 = (param_2 / 0x10) * 2;
    uVar1 = *(undefined4 *)((int)param_1 + 6);
    if ((*(uint *)((int)uVar1 + uVar4) & (1 << bVar2 | 1U >> 0x10 - bVar2)) != 0) {
      uVar4 = CONCAT11((char)(uVar4 >> 8),1);
      goto LAB_1110_0d70;
    }
  }
  uVar4 = uVar4 & 0xff00;
LAB_1110_0d70:
  return CONCAT22(iVar3,uVar4);
}



/* ---- FUN_1110_0d7a @ 1110:0d7a  (178 octets) ---- */

int __stdcall16far FUN_1110_0d7a(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined2 uVar3;
  byte local_9;
  int local_6;
  
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  iVar2 = (int)param_1;
  iVar1 = (*(int *)(iVar2 + 4) + 0xf) / 0x10 + -1;
  if (-1 < iVar1) {
    local_6 = 0;
    while( true ) {
      if (*(int *)((int)*(undefined4 *)(iVar2 + 6) + local_6 * 2) != -1) {
        local_9 = 0;
        while( true ) {
          if ((0xf < local_9) ||
             ((*(uint *)((int)*(undefined4 *)(iVar2 + 6) + local_6 * 2) &
              (1 << (local_9 & 0xf) | 1U >> 0x10 - (local_9 & 0xf))) == 0)) {
            iVar1 = local_6 * 0x10 + (int)(char)local_9;
            if (iVar1 < *(int *)(iVar2 + 4)) {
              return iVar1;
            }
            return -1;
          }
          if (local_9 == 0xf) break;
          local_9 = local_9 + 1;
        }
      }
      if (local_6 == iVar1) break;
      local_6 = local_6 + 1;
    }
  }
  return -1;
}



/* ---- FUN_1110_0e2c @ 1110:0e2c  (86 octets) ---- */

undefined4 __stdcall16far
FUN_1110_0e2c(undefined4 param_1,char param_2,undefined2 param_3,undefined2 param_4)

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
  FUN_1128_6945(iVar1,uVar2,0,param_3,param_4);
  uVar3 = FUN_1158_1f50(0xb1b,0x1110,CONCAT11(extraout_AH,1));
  *(undefined2 *)(iVar1 + 0x1a) = (int)uVar3;
  *(undefined2 *)(iVar1 + 0x1c) = (int)((ulong)uVar3 >> 0x10);
  if (param_2 != '\0') {
    DAT_1160_1858 = uStack_a;
  }
  return param_1;
}



/* ---- FUN_1110_0e82 @ 1110:0e82  (45 octets) ---- */

void __stdcall16far FUN_1110_0e82(undefined4 param_1,char param_2)

{
  undefined4 uVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  uVar1 = *(undefined4 *)((int)param_1 + 0x1a);
  FUN_1158_1f7f((int)uVar1,(int)((ulong)uVar1 >> 0x10));
  FUN_1128_6a01((int)param_1,uVar2,0);
  if (param_2 != '\0') {
    FUN_1158_200f();
  }
  return;
}



/* ---- FUN_1110_0eaf @ 1110:0eaf  (93 octets) ---- */

int __stdcall16far FUN_1110_0eaf(undefined4 param_1)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 local_4;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  local_4 = FUN_1110_0d7a((int)*(undefined4 *)(iVar1 + 0x1a),
                          (int)((ulong)*(undefined4 *)(iVar1 + 0x1a) >> 0x10));
  if (local_4 == -1) {
    local_4 = FUN_1128_6b52(iVar1,uVar2,0,0,0,0);
    FUN_1110_0bf2((int)*(undefined4 *)(iVar1 + 0x1a),
                  (int)((ulong)*(undefined4 *)(iVar1 + 0x1a) >> 0x10),local_4 + 1);
  }
  FUN_1110_0cc8((int)*(undefined4 *)(iVar1 + 0x1a),
                (int)((ulong)*(undefined4 *)(iVar1 + 0x1a) >> 0x10),1,local_4);
  return local_4;
}



/* ---- FUN_1110_0f0c @ 1110:0f0c  (56 octets) ---- */

undefined2 __stdcall16far
FUN_1110_0f0c(undefined4 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4,
             undefined2 param_5)

{
  undefined2 uVar1;
  int iVar2;
  undefined2 uVar3;
  
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  iVar2 = (int)param_1;
  uVar1 = FUN_1110_0eaf(iVar2,uVar3);
  FUN_1128_6be4(iVar2,uVar3,param_2,param_3,param_4,param_5,uVar1);
  *(int *)(iVar2 + 0x1e) = *(int *)(iVar2 + 0x1e) + 1;
  return uVar1;
}



/* ---- FUN_1110_0f44 @ 1110:0f44  (56 octets) ---- */

undefined2 __stdcall16far
FUN_1110_0f44(undefined4 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4,
             undefined2 param_5)

{
  undefined2 uVar1;
  int iVar2;
  undefined2 uVar3;
  
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  iVar2 = (int)param_1;
  uVar1 = FUN_1110_0eaf(iVar2,uVar3);
  FUN_1128_6cfa(iVar2,uVar3,param_2,param_3,param_4,param_5,uVar1);
  *(int *)(iVar2 + 0x1e) = *(int *)(iVar2 + 0x1e) + 1;
  return uVar1;
}



/* ---- FUN_1110_0f7c @ 1110:0f7c  (51 octets) ---- */

void __stdcall16far FUN_1110_0f7c(undefined4 param_1,undefined2 param_2)

{
  char cVar1;
  int iVar2;
  undefined2 uVar3;
  
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  iVar2 = (int)param_1;
  cVar1 = FUN_1110_0d35((int)*(undefined4 *)(iVar2 + 0x1a),
                        (int)((ulong)*(undefined4 *)(iVar2 + 0x1a) >> 0x10),param_2);
  if (cVar1 != '\0') {
    *(int *)(iVar2 + 0x1e) = *(int *)(iVar2 + 0x1e) + -1;
    FUN_1110_0cc8((int)*(undefined4 *)(iVar2 + 0x1a),
                  (int)((ulong)*(undefined4 *)(iVar2 + 0x1a) >> 0x10),0,param_2);
  }
  return;
}



/* ---- FUN_1110_0faf @ 1110:0faf  (80 octets) ---- */

undefined4 __stdcall16far FUN_1110_0faf(undefined4 param_1,char param_2)

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
  FUN_1158_1f50(iVar1,uVar2,0);
  uVar3 = FUN_1158_1f50(0x2a3,0x1148,CONCAT11(extraout_AH,1));
  *(undefined2 *)(iVar1 + 4) = (int)uVar3;
  *(undefined2 *)(iVar1 + 6) = (int)((ulong)uVar3 >> 0x10);
  if (param_2 != '\0') {
    DAT_1160_1858 = uStack_a;
  }
  return param_1;
}



/* ---- FUN_1110_0fff @ 1110:0fff  (45 octets) ---- */

void __stdcall16far FUN_1110_0fff(undefined4 param_1,char param_2)

{
  undefined4 uVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  uVar1 = *(undefined4 *)((int)param_1 + 4);
  FUN_1158_1f7f((int)uVar1,(int)((ulong)uVar1 >> 0x10));
  FUN_1158_1f66((int)param_1,uVar2,0);
  if (param_2 != '\0') {
    FUN_1158_200f();
  }
  return;
}



/* ---- FUN_1110_102c @ 1110:102c  (138 octets) ---- */

undefined4 __stdcall16far FUN_1110_102c(undefined4 param_1,int param_2,int param_3)

{
  undefined2 uVar1;
  int iVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  int local_8;
  
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  iVar2 = (int)param_1;
  local_8 = *(int *)((int)*(undefined4 *)(iVar2 + 4) + 8) + -1;
  if (-1 < local_8) {
    while( true ) {
      uVar4 = FUN_1148_0dd0((int)*(undefined4 *)(iVar2 + 4),
                            (int)((ulong)*(undefined4 *)(iVar2 + 4) >> 0x10),local_8);
      uVar1 = (undefined2)((ulong)uVar4 >> 0x10);
      if ((param_3 == *(int *)((int)uVar4 + 4)) && (param_2 == *(int *)((int)uVar4 + 6))) {
        return uVar4;
      }
      if (local_8 == 0) break;
      local_8 = local_8 + -1;
    }
  }
  uVar4 = FUN_1110_0e2c(0xb44,0x1110,1,param_2,param_3);
  FUN_1148_0c2b((int)*(undefined4 *)(iVar2 + 4),(int)((ulong)*(undefined4 *)(iVar2 + 4) >> 0x10),
                uVar4);
  return uVar4;
}



/* ---- FUN_1110_10b6 @ 1110:10b6  (57 octets) ---- */

void __stdcall16far FUN_1110_10b6(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  if (((int)param_2 != 0 || param_2._2_2_ != 0) && (*(int *)((int)param_2 + 0x1e) == 0)) {
    uVar1 = *(undefined4 *)((int)param_1 + 4);
    FUN_1148_0fa7((int)uVar1,(int)((ulong)uVar1 >> 0x10),(int)param_2,param_2._2_2_);
    FUN_1158_1f7f((int)param_2,param_2._2_2_);
  }
  return;
}



/* ---- FUN_1110_10ef @ 1110:10ef  (31 octets) ---- */

uint __stdcall16far FUN_1110_10ef(undefined4 param_1)

{
  undefined4 uVar1;
  uint in_AX;
  uint uVar2;
  
  uVar1 = *(undefined4 *)((int)param_1 + 4);
  uVar2 = in_AX & 0xff00;
  if (*(int *)((int)uVar1 + 8) == 0) {
    uVar2 = uVar2 + 1;
  }
  return uVar2;
}



/* ---- FUN_1110_110e @ 1110:110e  (193 octets) ---- */

undefined4 __stdcall16far FUN_1110_110e(undefined4 param_1,char param_2)

{
  undefined extraout_AH;
  int iVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined4 uVar5;
  undefined2 uStack_c;
  char local_3;
  
  if (param_2 != '\0') {
    FUN_1158_1fe2();
  }
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  FUN_1158_1f50(iVar1,uVar3,0);
  uVar5 = FUN_1128_56bd(0x83f,0x1128,CONCAT11(extraout_AH,1));
  *(undefined2 *)(iVar1 + 4) = (int)uVar5;
  *(undefined2 *)(iVar1 + 6) = (int)((ulong)uVar5 >> 0x10);
  uVar4 = (undefined2)((ulong)*(undefined4 *)(iVar1 + 4) >> 0x10);
  iVar2 = (int)*(undefined4 *)(iVar1 + 4);
  *(undefined2 *)(iVar2 + 4) = 0x12a9;
  *(undefined2 *)(iVar2 + 6) = 0x1110;
  *(int *)(iVar2 + 8) = iVar1;
  *(undefined2 *)(iVar2 + 10) = uVar3;
  *(undefined2 *)(iVar1 + 0x14) = 0x8080;
  *(undefined2 *)(iVar1 + 0x16) = 0;
  *(undefined *)(iVar1 + 0x18) = 1;
  for (local_3 = '\0'; *(undefined2 *)(iVar1 + local_3 * 2 + 0xc) = 0xffff,
      uVar5 = CONCAT22(DAT_1160_2b0c._2_2_,(int)DAT_1160_2b0c), local_3 != '\x03';
      local_3 = local_3 + '\x01') {
  }
  if ((int)DAT_1160_2b0c == 0 && DAT_1160_2b0c._2_2_ == 0) {
    uVar5 = FUN_1110_0faf(0xb6f,0x1110,1);
  }
  DAT_1160_2b0c._2_2_ = (int)((ulong)uVar5 >> 0x10);
  DAT_1160_2b0c._0_2_ = (int)uVar5;
  if (param_2 != '\0') {
    DAT_1160_1858 = uStack_c;
  }
  return param_1;
}



/* ---- FUN_1110_11cf @ 1110:11cf  (96 octets) ---- */

void __stdcall16far FUN_1110_11cf(undefined4 param_1,char param_2)

{
  char cVar1;
  int iVar2;
  undefined2 uVar3;
  
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  iVar2 = (int)param_1;
  FUN_1158_1f7f((int)*(undefined4 *)(iVar2 + 4),(int)((ulong)*(undefined4 *)(iVar2 + 4) >> 0x10));
  FUN_1110_122f(iVar2,uVar3);
  if (DAT_1160_2b0c._2_2_ != 0) {
    cVar1 = FUN_1110_10ef((int)DAT_1160_2b0c,DAT_1160_2b0c._2_2_);
    if (cVar1 != '\0') {
      FUN_1158_1f7f((int)DAT_1160_2b0c,(int)((ulong)DAT_1160_2b0c >> 0x10));
      DAT_1160_2b0c = 0;
    }
  }
  FUN_1158_1f66(iVar2,uVar3,0);
  if (param_2 != '\0') {
    FUN_1158_200f();
  }
  return;
}



/* ---- FUN_1110_122f @ 1110:122f  (122 octets) ---- */

void __stdcall16far FUN_1110_122f(undefined4 param_1)

{
  int iVar1;
  undefined2 uVar2;
  undefined local_3;
  
  local_3 = '\0';
  while( true ) {
    uVar2 = (undefined2)((ulong)param_1 >> 0x10);
    iVar1 = (int)param_1;
    if (*(int *)(iVar1 + local_3 * 2 + 0xc) != -1) {
      FUN_1110_0f7c((int)*(undefined4 *)(iVar1 + 8),(int)((ulong)*(undefined4 *)(iVar1 + 8) >> 0x10)
                    ,*(undefined2 *)(iVar1 + local_3 * 2 + 0xc));
    }
    *(undefined2 *)(iVar1 + local_3 * 2 + 0xc) = 0xffff;
    if (local_3 == '\x03') break;
    local_3 = local_3 + '\x01';
  }
  FUN_1110_10b6((int)DAT_1160_2b0c,(int)((ulong)DAT_1160_2b0c >> 0x10),*(undefined2 *)(iVar1 + 8),
                *(undefined2 *)(iVar1 + 10));
  *(undefined2 *)(iVar1 + 8) = 0;
  *(undefined2 *)(iVar1 + 10) = 0;
  return;
}



/* ---- FUN_1110_12a9 @ 1110:12a9  (86 octets) ---- */

void __stdcall16far FUN_1110_12a9(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  if ((param_3 == *(int *)(iVar1 + 6)) && (param_2 == *(int *)(iVar1 + 4))) {
    uVar3 = FUN_1128_5b26((int)*(undefined4 *)(iVar1 + 4),
                          (int)((ulong)*(undefined4 *)(iVar1 + 4) >> 0x10));
    *(undefined2 *)(iVar1 + 0x14) = (int)uVar3;
    *(undefined2 *)(iVar1 + 0x16) = (int)((ulong)uVar3 >> 0x10);
    FUN_1110_122f(iVar1,uVar2);
    if (*(int *)(iVar1 + 0x1b) != 0) {
      (*(code *)*(undefined2 *)(iVar1 + 0x19))
                (0x1110,*(undefined2 *)(iVar1 + 0x1d),*(undefined2 *)(iVar1 + 0x1f),iVar1,uVar2);
    }
  }
  return;
}



/* ---- FUN_1110_12ff @ 1110:12ff  (179 octets) ---- */

void __stdcall16far FUN_1110_12ff(undefined4 param_1,undefined4 *param_2)

{
  undefined2 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined2 uVar4;
  int iVar5;
  undefined2 uVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  int local_4;
  
  uVar6 = (undefined2)((ulong)param_1 >> 0x10);
  iVar5 = (int)param_1;
  FUN_1110_122f(iVar5,uVar6);
  puVar2 = (undefined4 *)*(undefined4 *)(iVar5 + 4);
  puVar1 = (undefined2 *)((int)*puVar2 + 8);
  (*(code *)*puVar1)(0x1110,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),(undefined4 *)param_2,
                     param_2._2_2_);
  if (((undefined4 *)param_2 != (undefined4 *)0x0 || param_2._2_2_ != 0) &&
     (puVar1 = (undefined2 *)((int)*param_2 + 0x18),
     iVar3 = (*(code *)*puVar1)(0x1110,(undefined4 *)param_2,param_2._2_2_), 0 < iVar3)) {
    uVar7 = FUN_1128_5b26((undefined4 *)param_2,param_2._2_2_);
    *(undefined2 *)(iVar5 + 0x14) = (int)uVar7;
    *(undefined2 *)(iVar5 + 0x16) = (int)((ulong)uVar7 >> 0x10);
    puVar1 = (undefined2 *)((int)*param_2 + 0x18);
    uVar4 = (*(code *)*puVar1)(0x1128,(undefined4 *)param_2,param_2._2_2_);
    puVar1 = (undefined2 *)((int)*param_2 + 0x1c);
    puVar8 = (undefined4 *)param_2;
    iVar3 = (*(code *)*puVar1)(0x1128,(undefined4 *)param_2,param_2._2_2_,uVar4);
    if (iVar3 % (int)puVar8 == 0) {
      puVar1 = (undefined2 *)((int)*param_2 + 0x18);
      uVar4 = (*(code *)*puVar1)(0x1128,(undefined4 *)param_2,param_2._2_2_);
      puVar1 = (undefined2 *)((int)*param_2 + 0x1c);
      iVar3 = (*(code *)*puVar1)(0x1128,(undefined4 *)param_2,param_2._2_2_,uVar4);
      iVar3 = iVar3 / (int)(undefined4 *)param_2;
      local_4 = iVar3;
      if (4 < iVar3) {
        local_4 = 1;
      }
      FUN_1110_13b2(iVar5,uVar6,CONCAT11((char)((uint)iVar3 >> 8),(undefined)local_4));
    }
  }
  return;
}



/* ---- FUN_1110_13b2 @ 1110:13b2  (42 octets) ---- */

void __stdcall16far FUN_1110_13b2(undefined4 param_1,char param_2)

{
  int iVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  if ((param_2 != *(char *)(iVar1 + 0x18)) && ('\0' < param_2)) {
    FUN_1110_122f(iVar1,uVar2);
    *(char *)(iVar1 + 0x18) = param_2;
  }
  return;
}



/* ---- FUN_1110_13e8 @ 1110:13e8  (1234 octets) ---- */

int __stdcall16far FUN_1110_13e8(undefined4 param_1,char param_2)

{
  undefined2 *puVar1;
  char cVar2;
  undefined2 uVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  undefined2 uVar7;
  undefined2 unaff_SS;
  undefined4 uVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined2 uVar11;
  undefined2 uVar12;
  int *piVar13;
  int *piStack_4e;
  char local_21;
  int local_20 [4];
  int local_18;
  int local_16;
  undefined2 local_10;
  int local_e;
  undefined4 local_c;
  undefined4 local_8;
  int local_4;
  
  iVar5 = (int)param_1;
  uVar7 = (undefined2)((ulong)param_1 >> 0x10);
  if ((param_2 == '\x02') && (*(char *)(iVar5 + 0x18) < '\x03')) {
    param_2 = '\0';
  }
  local_4 = *(int *)(iVar5 + param_2 * 2 + 0xc);
  if (local_4 == -1) {
    puVar9 = (undefined4 *)*(undefined4 *)(iVar5 + 4);
    puVar1 = (undefined2 *)((int)*puVar9 + 0x1c);
    local_e = (*(code *)*puVar1)();
    local_e = local_e / (int)(undefined4 *)puVar9;
    puVar1 = (undefined2 *)((int)*(undefined4 *)*(undefined4 *)(iVar5 + 4) + 0x18);
    local_10 = (*(code *)*puVar1)();
    if (*(int *)(iVar5 + 8) == 0 && *(int *)(iVar5 + 10) == 0) {
      if ((int)DAT_1160_2b0c == 0 && DAT_1160_2b0c._2_2_ == 0) {
        DAT_1160_2b0c = FUN_1110_0faf();
      }
      uVar8 = FUN_1110_102c();
      *(undefined2 *)(iVar5 + 8) = (int)uVar8;
      *(undefined2 *)(iVar5 + 10) = (int)((ulong)uVar8 >> 0x10);
    }
    local_8 = (int *)FUN_1128_56bd();
    DAT_1160_1858 = (int **)&stack0xffc6;
    puVar1 = (undefined2 *)((int)*(undefined4 *)local_8 + 0x28);
    (*(code *)*puVar1)();
    piVar6 = (int *)local_8;
    puVar1 = (undefined2 *)((int)*(undefined4 *)local_8 + 0x24);
    (*(code *)*puVar1)();
    piStack_4e = (int *)0x0;
    FUN_1148_0688(local_10,local_e);
    piStack_4e = &local_18;
    FUN_1158_161b(8);
    piStack_4e = (int *)local_8;
    uVar8 = FUN_1128_5a0f();
    piStack_4e = (int *)(int *)*(undefined4 *)((int)uVar8 + 0xf);
    FUN_1128_1684();
    local_21 = param_2;
    if (*(char *)(iVar5 + 0x18) <= param_2) {
      local_21 = '\0';
    }
    piStack_4e = (int *)0x0;
    FUN_1148_0688(local_10,(local_21 + 1) * local_e);
    piStack_4e = local_20;
    FUN_1158_161b(8);
    uVar3 = (undefined2)((ulong)local_8 >> 0x10);
    if ((param_2 == '\0') || (param_2 == '\x02')) {
      piStack_4e = (int *)*(int *)(iVar5 + 4);
      piVar13 = local_20;
      uVar11 = *(undefined2 *)(iVar5 + 0x16);
      uVar12 = *(undefined2 *)(iVar5 + 0x14);
      uVar8 = FUN_1128_5a0f((int *)local_8,uVar3);
      FUN_1128_1923(uVar8,uVar12,uVar11,piVar13);
      uVar3 = FUN_1110_0f0c((int)*(undefined4 *)(iVar5 + 8),
                            (int)((ulong)*(undefined4 *)(iVar5 + 8) >> 0x10),0,0,(int *)local_8,
                            local_8._2_2_);
      *(undefined2 *)(iVar5 + param_2 * 2 + 0xc) = uVar3;
    }
    else if (param_2 == '\x03') {
      piStack_4e = (int *)(int *)*(undefined4 *)(iVar5 + 4);
      piStack_4e = (int *)FUN_1128_5a0f();
      piVar13 = local_20;
      uVar8 = FUN_1128_5a0f((int *)local_8,(int)((ulong)local_8 >> 0x10));
      FUN_1128_1b10(uVar8,piVar13,unaff_SS);
      piStack_4e = (int *)*(int *)(iVar5 + 0x14);
      uVar3 = FUN_1110_0f44((int)*(undefined4 *)(iVar5 + 8),
                            (int)((ulong)*(undefined4 *)(iVar5 + 8) >> 0x10));
      *(undefined2 *)(iVar5 + 0x12) = uVar3;
    }
    else if (param_2 == '\x01') {
      if (*(char *)(iVar5 + 0x18) < '\x02') {
        piStack_4e = (int *)0x1158;
        puVar9 = (undefined4 *)FUN_1128_56bd();
        puVar10 = (undefined4 *)puVar9;
        piStack_4e = (int *)DAT_1160_1858;
        puVar1 = (undefined2 *)((int)*puVar9 + 8);
        DAT_1160_1858 = &piStack_4e;
        local_c = puVar9;
        (*(code *)*puVar1)(0x1128,puVar9,*(undefined2 *)(iVar5 + 4),*(undefined2 *)(iVar5 + 6));
        uVar11 = 0;
        uVar3 = 0;
        uVar8 = FUN_1128_5a0f(puVar9);
        uVar8 = *(undefined4 *)((int)uVar8 + 0xf);
        FUN_1128_1684((int)uVar8,(int)((ulong)uVar8 >> 0x10),uVar3,uVar11);
        puVar1 = (undefined2 *)((int)*puVar9 + 0x28);
        (*(code *)*puVar1)(0x1128,puVar9,local_e);
        cVar2 = FUN_1128_5af4(puVar9);
        if (cVar2 != '\0') {
          uVar11 = 0xff;
          uVar3 = 0xffff;
          uVar8 = FUN_1128_5a0f(puVar9);
          uVar8 = *(undefined4 *)((int)uVar8 + 7);
          FUN_1128_0fdf((int)uVar8,(int)((ulong)uVar8 >> 0x10),uVar3,uVar11);
          FUN_1128_6226(puVar9,0);
          uVar11 = 0xff;
          uVar3 = 0xffff;
          uVar8 = FUN_1128_5a0f(puVar9);
          uVar8 = *(undefined4 *)((int)uVar8 + 0xf);
          FUN_1128_1684((int)uVar8,(int)((ulong)uVar8 >> 0x10),uVar3,uVar11);
        }
        FUN_1128_6226(puVar9,1);
        uVar8 = FUN_1128_5a0f((int *)local_8,(int)((ulong)local_8 >> 0x10));
        uVar3 = (undefined2)((ulong)uVar8 >> 0x10);
        iVar4 = (int)uVar8;
        FUN_1128_1684((int)*(undefined4 *)(iVar4 + 0xf),
                      (int)((ulong)*(undefined4 *)(iVar4 + 0xf) >> 0x10),0xfff0,0xffff);
        FUN_1128_1ce5(uVar8,&local_18,unaff_SS);
        FUN_1128_1684((int)*(undefined4 *)(iVar4 + 0xf),
                      (int)((ulong)*(undefined4 *)(iVar4 + 0xf) >> 0x10),0,0);
        FUN_1128_0fdf((int)*(undefined4 *)(iVar4 + 7),
                      (int)((ulong)*(undefined4 *)(iVar4 + 7) >> 0x10),0xffff,0xff);
        *(undefined2 *)(iVar4 + 0x17) = 0x226;
        *(undefined2 *)(iVar4 + 0x19) = 0xbb;
        FUN_1128_1b9b(uVar8,(undefined4 *)local_c,local_c._2_2_,local_16 + 1,local_18 + 1);
        *(undefined2 *)(iVar4 + 0x17) = 0xc6;
        *(undefined2 *)(iVar4 + 0x19) = 0x88;
        FUN_1128_1b9b(uVar8,(undefined4 *)local_c,local_c._2_2_,local_16,local_18);
        FUN_1128_1684((int)*(undefined4 *)(iVar4 + 0xf),
                      (int)((ulong)*(undefined4 *)(iVar4 + 0xf) >> 0x10),0xffef,0xffff);
        FUN_1128_0fdf((int)*(undefined4 *)(iVar4 + 7),
                      (int)((ulong)*(undefined4 *)(iVar4 + 7) >> 0x10),0,0);
        *(undefined2 *)(iVar4 + 0x17) = 0x86;
        *(undefined2 *)(iVar4 + 0x19) = 0xee;
        FUN_1128_1b9b(uVar8,(undefined4 *)local_c,local_c._2_2_,local_16,local_18);
        *(undefined2 *)(iVar4 + 0x17) = 0x20;
        *(undefined2 *)(iVar4 + 0x19) = 0xcc;
        uVar3 = FUN_1110_0f0c((int)*(undefined4 *)(iVar5 + 8),
                              (int)((ulong)*(undefined4 *)(iVar5 + 8) >> 0x10),0,0,(int *)local_8,
                              local_8._2_2_);
        DAT_1160_1858 = (int **)puVar10;
        *(undefined2 *)(iVar5 + 0xe) = uVar3;
        iVar5 = FUN_1158_1f7f((undefined4 *)local_c,(int)((ulong)local_c >> 0x10));
        return iVar5;
      }
      piStack_4e = (int *)*(int *)(iVar5 + 4);
      piVar13 = local_20;
      uVar11 = *(undefined2 *)(iVar5 + 0x16);
      uVar12 = *(undefined2 *)(iVar5 + 0x14);
      uVar8 = FUN_1128_5a0f((int *)local_8,uVar3);
      FUN_1128_1923(uVar8,uVar12,uVar11,piVar13);
      uVar3 = FUN_1110_0f0c((int)*(undefined4 *)(iVar5 + 8),
                            (int)((ulong)*(undefined4 *)(iVar5 + 8) >> 0x10),0,0,(int *)local_8,
                            local_8._2_2_);
      *(undefined2 *)(iVar5 + 0xe) = uVar3;
    }
    DAT_1160_1858 = (int **)piVar6;
    iVar5 = FUN_1158_1f7f();
    return iVar5;
  }
  return local_4;
}



/* ---- FUN_1110_18da @ 1110:18da  (111 octets) ---- */

void __stdcall16far
FUN_1110_18da(undefined4 param_1,undefined param_2,undefined2 param_3,undefined2 param_4,
             undefined2 param_5,undefined2 param_6)

{
  undefined2 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined2 uVar7;
  undefined2 uVar8;
  undefined2 uVar9;
  
  uVar7 = (undefined2)((ulong)param_1 >> 0x10);
  iVar4 = (int)param_1;
  if (*(int *)(iVar4 + 4) != 0 || *(int *)(iVar4 + 6) != 0) {
    puVar2 = (undefined4 *)*(undefined4 *)(iVar4 + 4);
    uVar8 = (undefined2)((ulong)puVar2 >> 0x10);
    puVar5 = (undefined4 *)puVar2;
    puVar1 = (undefined2 *)((int)*puVar2 + 0x1c);
    iVar3 = (*(code *)*puVar1)();
    if (iVar3 != 0) {
      puVar2 = (undefined4 *)*(undefined4 *)(iVar4 + 4);
      uVar9 = (undefined2)((ulong)puVar2 >> 0x10);
      puVar6 = (undefined4 *)puVar2;
      puVar1 = (undefined2 *)((int)*puVar2 + 0x18);
      iVar3 = (*(code *)*puVar1)();
      if (iVar3 != 0) {
        uVar8 = FUN_1110_13e8(iVar4,uVar7,param_2,puVar6,uVar9,puVar5,uVar8);
        FUN_1128_6e46((int)*(undefined4 *)(iVar4 + 8),
                      (int)((ulong)*(undefined4 *)(iVar4 + 8) >> 0x10),uVar8,param_3,param_4,param_5
                      ,param_6);
      }
    }
  }
  return;
}



/* ---- FUN_1110_1949 @ 1110:1949  (260 octets) ---- */

void __stdcall16far
FUN_1110_1949(undefined2 param_1_00,undefined2 param_2_00,char param_1,undefined *param_2,
             undefined *param_3,undefined4 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined2 uVar6;
  undefined2 unaff_SS;
  undefined local_10a [256];
  undefined local_a [8];
  
  puVar5 = local_a;
  puVar4 = (undefined *)param_2;
  for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
    puVar2 = puVar5;
    puVar5 = puVar5 + 1;
    puVar1 = puVar4;
    puVar4 = puVar4 + 1;
    *puVar2 = *puVar1;
  }
  FUN_1150_0d4c((undefined *)param_3,(int)((ulong)param_3 >> 0x10),local_10a,unaff_SS);
  uVar6 = (undefined2)((ulong)param_4 >> 0x10);
  iVar3 = (int)param_4;
  FUN_1128_177c((int)*(undefined4 *)(iVar3 + 0xf),(int)((ulong)*(undefined4 *)(iVar3 + 0xf) >> 0x10)
                ,1);
  if (param_1 == '\x01') {
    OFFSETRECT(0x1128,1,1,local_a);
    FUN_1128_0fdf((int)*(undefined4 *)(iVar3 + 7),(int)((ulong)*(undefined4 *)(iVar3 + 7) >> 0x10),
                  0xffff,0xff);
    FUN_1128_21d2(iVar3,uVar6);
    DRAWTEXT(0x1128,0,local_a,unaff_SS,*param_3,local_10a,unaff_SS);
    OFFSETRECT(0x14d0,0xffff,0xffff,local_a);
    FUN_1128_0fdf((int)*(undefined4 *)(iVar3 + 7),(int)((ulong)*(undefined4 *)(iVar3 + 7) >> 0x10),
                  0x8080,0x80);
    FUN_1128_21d2(iVar3,uVar6);
    DRAWTEXT(0x1128,0,local_a,unaff_SS,*param_3,local_10a,unaff_SS);
  }
  else {
    FUN_1128_21d2(iVar3,uVar6);
    DRAWTEXT(0x1128,0x25,local_a,unaff_SS,0xffff,local_10a,unaff_SS);
  }
  return;
}



/* ---- FUN_1110_1a4d @ 1110:1a4d  (873 octets) ---- */

void __stdcall16far
FUN_1110_1a4d(undefined4 param_1,int *param_2,int *param_3,int param_4,int param_5,byte param_6,
             char *param_7,int *param_8,undefined4 param_9)

{
  undefined2 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  undefined4 *puVar9;
  int *piVar10;
  int *piVar11;
  undefined2 uVar12;
  undefined2 uVar13;
  undefined2 unaff_SS;
  undefined4 uVar14;
  undefined *puVar15;
  undefined2 uVar16;
  undefined local_120 [10];
  undefined local_116 [256];
  undefined4 local_16;
  undefined4 local_12;
  undefined4 local_e;
  undefined4 local_a;
  int local_6;
  int local_4;
  
  uVar12 = (undefined2)((ulong)param_8 >> 0x10);
  piVar7 = (int *)param_8;
  local_a = FUN_1148_066e(piVar7[3] - piVar7[1],piVar7[2] - *param_8);
  uVar13 = (undefined2)((ulong)param_1 >> 0x10);
  iVar8 = (int)param_1;
  if (*(int *)(iVar8 + 4) == 0 && *(int *)(iVar8 + 6) == 0) {
    local_e = FUN_1148_066e(0,0);
  }
  else {
    iVar5 = (int)*(char *)(iVar8 + 0x18);
    puVar2 = (undefined4 *)*(undefined4 *)(iVar8 + 4);
    puVar9 = (undefined4 *)puVar2;
    puVar1 = (undefined2 *)((int)*puVar2 + 0x1c);
    iVar6 = (*(code *)*puVar1)(0x1148,puVar9,(int)((ulong)puVar2 >> 0x10),iVar5);
    puVar2 = (undefined4 *)*(undefined4 *)(iVar8 + 4);
    puVar1 = (undefined2 *)((int)*puVar2 + 0x18);
    uVar13 = (*(code *)*puVar1)(0x1148,(undefined4 *)puVar2,(int)((ulong)puVar2 >> 0x10),
                                iVar6 / (int)puVar9);
    local_e = FUN_1148_066e(uVar13,iVar5);
  }
  piVar10 = (int *)param_2;
  uVar13 = (undefined2)((ulong)param_2 >> 0x10);
  if (*param_7 == '\0') {
    puVar15 = local_120;
    FUN_1148_0688(0,0,0,0);
    FUN_1158_161b(8,piVar10,uVar13,puVar15,unaff_SS);
  }
  else {
    puVar15 = local_120;
    uVar16 = unaff_SS;
    FUN_1148_0688(0,piVar7[2] - *param_8,0,0);
    FUN_1158_161b(8,piVar10,uVar13,puVar15,uVar16);
    FUN_1128_21d2((int)param_9,(int)((ulong)param_9 >> 0x10));
    uVar14 = FUN_1150_0d4c((char *)param_7,(int)((ulong)param_7 >> 0x10),local_116,unaff_SS);
    DRAWTEXT(0x1150,0x400,piVar10,uVar13,0xffff,uVar14);
  }
  local_12 = FUN_1148_066e(piVar10[3] - piVar10[1],piVar10[2] - *param_2);
  iVar5 = (int)((ulong)local_12 >> 0x10);
  iVar8 = (int)local_12;
  piVar11 = (int *)param_3;
  uVar13 = (undefined2)((ulong)param_3 >> 0x10);
  if (param_6 < 2) {
    piVar11[1] = local_a._2_2_ / 2 - local_e._2_2_ / 2;
    local_4 = local_a._2_2_ / 2 - iVar5 / 2;
  }
  else {
    *param_3 = (int)local_a / 2 - (int)local_e / 2;
    local_6 = (int)local_a / 2 - iVar8 / 2;
  }
  if ((iVar8 == 0) || ((int)local_e == 0)) {
    param_4 = 0;
  }
  if (param_5 == -1) {
    if (param_4 == -1) {
      local_16 = FUN_1148_066e(local_e._2_2_ + iVar5,(int)local_e + iVar8);
      if (param_6 < 2) {
        param_5 = (int)local_a - (int)local_16;
      }
      else {
        param_5 = local_a._2_2_ - (int)((ulong)local_16 >> 0x10);
      }
      param_5 = param_5 / 3;
      param_4 = param_5;
      uVar14 = local_12;
      uVar3 = local_e;
      uVar4 = local_a;
    }
    else {
      local_16 = FUN_1148_066e(local_e._2_2_ + param_4 + iVar5,(int)local_e + param_4 + iVar8);
      uVar14 = local_12;
      uVar3 = local_e;
      uVar4 = local_a;
      if (param_6 < 2) {
        param_5 = (int)local_a / 2 - (int)local_16 / 2;
      }
      else {
        param_5 = local_a._2_2_ / 2 - (int)((ulong)local_16 >> 0x10) / 2;
      }
    }
  }
  else {
    uVar14 = local_12;
    uVar3 = local_e;
    uVar4 = local_a;
    if (param_4 == -1) {
      local_16 = FUN_1148_066e(local_a._2_2_ - (param_5 + local_e._2_2_),
                               (int)local_a - (param_5 + (int)local_e));
      uVar14 = local_12;
      uVar3 = local_e;
      uVar4 = local_a;
      if (param_6 < 2) {
        param_4 = (int)local_16 / 2 - (int)local_12 / 2;
      }
      else {
        param_4 = (int)((ulong)local_16 >> 0x10) / 2 - local_12._2_2_ / 2;
      }
    }
  }
  local_a._2_2_ = (int)((ulong)uVar4 >> 0x10);
  local_a._0_2_ = (int)uVar4;
  local_e._2_2_ = (int)((ulong)uVar3 >> 0x10);
  local_e._0_2_ = (int)uVar3;
  local_12._2_2_ = (int)((ulong)uVar14 >> 0x10);
  local_12._0_2_ = (int)uVar14;
  if (param_6 == 0) {
    *param_3 = param_5;
    local_6 = *param_3 + (int)local_e + param_4;
  }
  else if (param_6 == 1) {
    *param_3 = ((int)local_a - param_5) - (int)local_e;
    local_6 = (*param_3 - param_4) - (int)local_12;
  }
  else if (param_6 == 2) {
    piVar11[1] = param_5;
    local_4 = piVar11[1] + local_e._2_2_ + param_4;
  }
  else if (param_6 == 3) {
    piVar11[1] = (local_a._2_2_ - param_5) - local_e._2_2_;
    local_4 = (piVar11[1] - param_4) - local_12._2_2_;
  }
  *param_3 = *param_3 + *param_8;
  piVar11[1] = piVar11[1] + piVar7[1];
  local_12 = uVar14;
  local_e = uVar3;
  local_a = uVar4;
  OFFSETRECT(0x1148,local_4 + piVar7[1],local_6 + *param_8,piVar10);
  return;
}



/* ---- FUN_1110_1db6 @ 1110:1db6  (127 octets) ---- */

void __stdcall16far
FUN_1110_1db6(undefined4 param_1,undefined param_2,undefined2 param_3,undefined2 param_4,
             undefined param_5,undefined4 param_6,undefined4 param_7,undefined2 param_8,
             undefined2 param_9,undefined4 param_10)

{
  undefined extraout_AH;
  undefined extraout_AH_00;
  undefined2 uVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 unaff_SS;
  undefined local_e [8];
  undefined2 local_6;
  undefined2 local_4;
  
  uVar2 = (undefined2)((ulong)param_6 >> 0x10);
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  uVar1 = (undefined2)param_1;
  FUN_1110_1a4d(uVar1,uVar3,local_e,unaff_SS,&local_6,unaff_SS,param_3,param_4,param_5,(int)param_6,
                uVar2,(int)param_7,(int)((ulong)param_7 >> 0x10),param_8,param_9);
  FUN_1110_18da(uVar1,uVar3,CONCAT11(extraout_AH,param_2),local_4,local_6,param_8,param_9);
  FUN_1110_1949(uVar1,uVar3,CONCAT11(extraout_AH_00,param_2),local_e,unaff_SS,(int)param_6,uVar2,
                param_8,param_9);
  FUN_1158_161b(8,(int)param_10,(int)((ulong)param_10 >> 0x10),local_e,unaff_SS);
  return;
}



/* ---- FUN_1110_1e35 @ 1110:1e35  (242 octets) ---- */

void __cdecl16near FUN_1110_1e35(void)

{
  undefined2 *puVar1;
  undefined4 uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined2 uVar7;
  undefined2 uVar8;
  undefined local_12 [8];
  undefined4 local_a;
  int local_6;
  int local_4;
  
  DAT_1160_2b10 = (undefined4 *)FUN_1128_56bd(0x83f,0x1128,1);
  puVar1 = (undefined2 *)((int)*DAT_1160_2b10 + 0x28);
  (*(code *)*puVar1)(0x1128,DAT_1160_2b10,8);
  puVar1 = (undefined2 *)((int)*DAT_1160_2b10 + 0x24);
  (*(code *)*puVar1)(0x1128,(undefined4 *)DAT_1160_2b10,(int)((ulong)DAT_1160_2b10 >> 0x10),8);
  local_a = FUN_1128_5a0f((undefined4 *)DAT_1160_2b10,(int)((ulong)DAT_1160_2b10 >> 0x10));
  uVar2 = *(undefined4 *)((int)local_a + 0xf);
  FUN_1128_177c((int)uVar2,(int)((ulong)uVar2 >> 0x10),0);
  FUN_1128_1684((int)*(undefined4 *)((int)local_a + 0xf),
                (int)((ulong)*(undefined4 *)((int)local_a + 0xf) >> 0x10),0xfff0,0xffff);
  uVar7 = (undefined2)((ulong)DAT_1160_2b10 >> 0x10);
  puVar5 = (undefined4 *)DAT_1160_2b10;
  puVar1 = (undefined2 *)((int)*DAT_1160_2b10 + 0x1c);
  uVar3 = (*(code *)*puVar1)(0x1128,puVar5,uVar7,0,0,local_12);
  uVar8 = (undefined2)((ulong)DAT_1160_2b10 >> 0x10);
  puVar6 = (undefined4 *)DAT_1160_2b10;
  puVar1 = (undefined2 *)((int)*DAT_1160_2b10 + 0x18);
  uVar4 = (*(code *)*puVar1)(0x1128,puVar6,uVar8,uVar3);
  FUN_1148_0688(uVar4,puVar6,uVar8,uVar3);
  FUN_1128_1ce5(local_a,puVar5,uVar7);
  local_6 = 0;
  while( true ) {
    local_4 = 0;
    while( true ) {
      if (local_6 % 2 == local_4 % 2) {
        FUN_1128_2164(local_a,0xffff,0xff,local_6,local_4);
      }
      if (local_4 == 7) break;
      local_4 = local_4 + 1;
    }
    if (local_6 == 7) break;
    local_6 = local_6 + 1;
  }
  return;
}



/* ---- FUN_1110_1f27 @ 1110:1f27  (185 octets) ---- */

undefined4 * __stdcall16far
FUN_1110_1f27(undefined4 *param_1,char param_2,undefined2 param_3,undefined2 param_4)

{
  undefined2 *puVar1;
  undefined extraout_AH;
  undefined4 *puVar2;
  int iVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  
  if (param_2 != '\0') {
    FUN_1158_1fe2();
  }
  uVar4 = (undefined2)((ulong)param_1 >> 0x10);
  puVar2 = (undefined4 *)param_1;
  FUN_1138_6886(puVar2,uVar4,0,param_3,param_4);
  puVar1 = (undefined2 *)((int)*param_1 + 0x4c);
  puVar7 = puVar2;
  (*(code *)*puVar1)(0x1138,puVar2,uVar4,0x19,0x19,0,0);
  *(undefined2 *)((int)puVar2 + 0x26) = 0xc2;
  uVar6 = FUN_1110_110e(0xb9b,0x1110,CONCAT11(extraout_AH,1));
  *(int *)(puVar2 + 0x24) = (int)uVar6;
  *(undefined2 *)((int)puVar2 + 0x92) = (int)((ulong)uVar6 >> 0x10);
  uVar5 = (undefined2)((ulong)puVar2[0x24] >> 0x10);
  iVar3 = (int)puVar2[0x24];
  *(undefined2 *)(iVar3 + 0x19) = 0x240c;
  *(undefined2 *)(iVar3 + 0x1b) = 0x1110;
  *(undefined2 *)(iVar3 + 0x1d) = puVar2;
  *(undefined2 *)(iVar3 + 0x1f) = uVar4;
  FUN_1138_1e3e(puVar2,uVar4,1);
  *(undefined2 *)(puVar2 + 0x26) = 4;
  *(undefined2 *)((int)puVar2 + 0x9a) = 0xffff;
  *(undefined *)((int)puVar2 + 0x97) = 0;
  DAT_1160_2b14 = DAT_1160_2b14 + 1;
  if (param_2 != '\0') {
    DAT_1160_1858 = puVar7;
  }
  return param_1;
}



/* ---- FUN_1110_1fe0 @ 1110:1fe0  (76 octets) ---- */

void __stdcall16far FUN_1110_1fe0(undefined4 param_1,char param_2)

{
  undefined4 uVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  uVar1 = *(undefined4 *)((int)param_1 + 0x90);
  FUN_1158_1f7f((int)uVar1,(int)((ulong)uVar1 >> 0x10));
  DAT_1160_2b14 = DAT_1160_2b14 + -1;
  if (DAT_1160_2b14 == 0) {
    FUN_1158_1f7f((int)DAT_1160_2b10,(int)((ulong)DAT_1160_2b10 >> 0x10));
    DAT_1160_2b10 = 0;
  }
  FUN_1138_68f0((int)param_1,uVar2,0);
  if (param_2 != '\0') {
    FUN_1158_200f();
  }
  return;
}



/* ---- FUN_1110_202c @ 1110:202c  (326 octets) ---- */

void __stdcall16far FUN_1110_202c(undefined4 param_1)

{
  undefined4 uVar1;
  undefined uVar2;
  undefined extraout_AH;
  undefined extraout_AH_00;
  int iVar3;
  undefined2 uVar4;
  undefined2 unaff_SS;
  undefined *puVar5;
  undefined *puVar6;
  undefined2 uVar7;
  undefined2 uVar8;
  undefined2 uVar9;
  undefined2 uVar10;
  undefined local_112 [240];
  undefined local_22 [8];
  undefined local_1a [16];
  undefined local_a [4];
  int local_6;
  int local_4;
  
  uVar4 = (undefined2)((ulong)param_1 >> 0x10);
  iVar3 = (int)param_1;
  if ((*(char *)(iVar3 + 0x2a) == '\0') && ((*(byte *)(iVar3 + 0x18) & 0x10) == 0)) {
    *(undefined *)(iVar3 + 0x9c) = 1;
    *(undefined *)(iVar3 + 0x95) = 0;
  }
  else if (*(char *)(iVar3 + 0x9c) == '\x01') {
    *(undefined *)(iVar3 + 0x9c) = 0;
  }
  FUN_1128_2099((int)*(undefined4 *)(iVar3 + 0x8a),
                (int)((ulong)*(undefined4 *)(iVar3 + 0x8a) >> 0x10),*(undefined2 *)(iVar3 + 0x34),
                *(undefined2 *)(iVar3 + 0x36));
  puVar6 = local_22;
  uVar9 = *(undefined2 *)(iVar3 + 0x8c);
  uVar8 = *(undefined2 *)(iVar3 + 0x8a);
  puVar5 = local_1a;
  uVar7 = unaff_SS;
  uVar10 = unaff_SS;
  FUN_1148_0688(*(undefined2 *)(iVar3 + 0x24),*(undefined2 *)(iVar3 + 0x22),0,0);
  if ((*(byte *)(iVar3 + 0x9c) < 2) || (3 < *(byte *)(iVar3 + 0x9c))) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  FUN_1110_07e1(0,CONCAT11(extraout_AH,uVar2),0,1,1,puVar5,uVar7,uVar8,uVar9);
  FUN_1158_161b(8,local_a,unaff_SS,puVar6,uVar10);
  if (*(char *)(iVar3 + 0x9c) == '\x03') {
    if ((int)DAT_1160_2b10 == 0 && DAT_1160_2b10._2_2_ == 0) {
      FUN_1110_1e35();
    }
    uVar1 = *(undefined4 *)((int)*(undefined4 *)(iVar3 + 0x8a) + 0xf);
    FUN_1128_162d((int)uVar1,(int)((ulong)uVar1 >> 0x10),(int)DAT_1160_2b10,DAT_1160_2b10._2_2_);
    local_6 = local_6 + -1;
    local_4 = local_4 + -1;
    FUN_1128_1ce5((int)*(undefined4 *)(iVar3 + 0x8a),
                  (int)((ulong)*(undefined4 *)(iVar3 + 0x8a) >> 0x10),local_a,unaff_SS);
  }
  uVar9 = *(undefined2 *)(iVar3 + 0x8c);
  uVar8 = *(undefined2 *)(iVar3 + 0x8a);
  puVar6 = local_a;
  puVar5 = local_112;
  uVar7 = unaff_SS;
  FUN_1138_1d53(iVar3,uVar4);
  FUN_1110_1db6((int)*(undefined4 *)(iVar3 + 0x90),
                (int)((ulong)*(undefined4 *)(iVar3 + 0x90) >> 0x10),
                CONCAT11(extraout_AH_00,*(undefined *)(iVar3 + 0x9c)),*(undefined2 *)(iVar3 + 0x98),
                *(undefined2 *)(iVar3 + 0x9a),CONCAT11(extraout_AH_00,*(undefined *)(iVar3 + 0x97)),
                puVar5,unaff_SS,puVar6,uVar7,uVar8,uVar9);
  return;
}



/* ---- FUN_1110_2172 @ 1110:2172  (79 octets) ---- */

void __stdcall16far
FUN_1110_2172(undefined4 *param_1,undefined2 param_2,undefined2 param_3,undefined param_4,
             char param_5)

{
  undefined2 *puVar1;
  undefined4 *puVar2;
  undefined2 uVar3;
  
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  puVar2 = (undefined4 *)param_1;
  FUN_1138_27c0(puVar2,uVar3,param_2,param_3,param_4,param_5);
  if (param_5 == '\0') {
    if (*(char *)((int)puVar2 + 0x2a) != '\0') {
      if (*(char *)(puVar2 + 0x25) == '\0') {
        *(undefined *)(puVar2 + 0x27) = 2;
        puVar1 = (undefined2 *)((int)*param_1 + 0x48);
        (*(code *)*puVar1)(0x1138,puVar2,uVar3);
      }
      *(undefined *)((int)puVar2 + 0x95) = 1;
    }
  }
  return;
}



/* ---- FUN_1110_21c1 @ 1110:21c1  (150 octets) ---- */

void __stdcall16far FUN_1110_21c1(undefined4 *param_1,int param_2,int param_3,undefined param_4)

{
  undefined2 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined2 uVar4;
  char local_3;
  
  uVar4 = (undefined2)((ulong)param_1 >> 0x10);
  puVar3 = (undefined4 *)param_1;
  FUN_1138_2af2(puVar3,uVar4,param_2,param_3,param_4);
  if (*(char *)((int)puVar3 + 0x95) != '\0') {
    if (*(char *)(puVar3 + 0x25) == '\0') {
      local_3 = '\0';
    }
    else {
      local_3 = '\x03';
    }
    if (-1 < param_3) {
      iVar2 = FUN_1138_18a9(puVar3,uVar4);
      if ((param_3 < iVar2) && (-1 < param_2)) {
        iVar2 = FUN_1138_18f4(puVar3,uVar4);
        if (param_2 <= iVar2) {
          if (*(char *)(puVar3 + 0x25) == '\0') {
            local_3 = '\x02';
          }
          else {
            local_3 = '\x03';
          }
        }
      }
    }
    if (local_3 != *(char *)(puVar3 + 0x27)) {
      *(char *)(puVar3 + 0x27) = local_3;
      puVar1 = (undefined2 *)((int)*param_1 + 0x48);
      (*(code *)*puVar1)(0x1138,puVar3,uVar4);
    }
  }
  return;
}



/* ---- FUN_1110_2257 @ 1110:2257  (206 octets) ---- */

void __stdcall16far
FUN_1110_2257(undefined4 *param_1,int param_2,int param_3,undefined param_4,undefined param_5)

{
  undefined2 *puVar1;
  bool bVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  
  uVar5 = (undefined2)((ulong)param_1 >> 0x10);
  puVar4 = (undefined4 *)param_1;
  uVar3 = FUN_1138_2b65(puVar4,uVar5,param_2,param_3,param_4,param_5);
  if (*(char *)((int)puVar4 + 0x95) != '\0') {
    *(undefined *)((int)puVar4 + 0x95) = 0;
    if ((((param_3 < 0) || (uVar3 = FUN_1138_18a9(puVar4,uVar5), (int)uVar3 <= param_3)) ||
        (param_2 < 0)) || (uVar3 = FUN_1138_18f4(puVar4,uVar5), (int)uVar3 < param_2)) {
      uVar3 = uVar3 & 0xff00;
      bVar2 = false;
    }
    else {
      uVar3 = CONCAT11((char)(uVar3 >> 8),1);
      bVar2 = true;
    }
    uVar6 = 0x1138;
    *(undefined *)(puVar4 + 0x27) = 0;
    if (*(int *)((int)puVar4 + 0x8e) == 0) {
      puVar1 = (undefined2 *)((int)*param_1 + 0x48);
      (*(code *)*puVar1)(0x1138,puVar4,uVar5);
    }
    else if (bVar2) {
      uVar3 = uVar3 & 0xff00;
      if (*(char *)(puVar4 + 0x25) == '\0') {
        uVar3 = uVar3 + 1;
      }
      uVar6 = 0x1110;
      FUN_1110_2470(puVar4,uVar5,uVar3);
    }
    else {
      if (*(char *)(puVar4 + 0x25) != '\0') {
        *(undefined *)(puVar4 + 0x27) = 3;
      }
      puVar1 = (undefined2 *)((int)*param_1 + 0x48);
      (*(code *)*puVar1)(0x1138,puVar4,uVar5);
    }
    if (bVar2) {
      FUN_1158_206a(uVar6,puVar4,uVar5);
    }
  }
  return;
}



/* ---- FUN_1110_2325 @ 1110:2325  (17 octets) ---- */

void __stdcall16far FUN_1110_2325(undefined4 param_1)

{
  FUN_1138_2773((int)param_1,(int)((ulong)param_1 >> 0x10));
  return;
}



/* ---- FUN_1110_2336 @ 1110:2336  (35 octets) ---- */

undefined2 __stdcall16far FUN_1110_2336(undefined4 param_1)

{
  undefined2 uVar1;
  undefined4 uVar2;
  
  uVar2 = FUN_1110_2359((int)param_1,(int)((ulong)param_1 >> 0x10));
  uVar1 = FUN_1128_5b0d(uVar2);
  return uVar1;
}



/* ---- FUN_1110_2359 @ 1110:2359  (36 octets) ---- */

undefined4 __stdcall16far FUN_1110_2359(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined2 uVar3;
  
  uVar1 = *(undefined4 *)((int)param_1 + 0x90);
  uVar3 = (undefined2)((ulong)uVar1 >> 0x10);
  iVar2 = (int)uVar1;
  return CONCAT22(*(undefined2 *)(iVar2 + 6),*(undefined2 *)(iVar2 + 4));
}



/* ---- FUN_1110_237d @ 1110:237d  (40 octets) ---- */

void __stdcall16far FUN_1110_237d(undefined4 *param_1,undefined2 param_2,undefined2 param_3)

{
  undefined2 *puVar1;
  undefined4 uVar2;
  undefined2 uVar3;
  
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  uVar2 = ((undefined4 *)param_1)[0x24];
  FUN_1110_12ff((int)uVar2,(int)((ulong)uVar2 >> 0x10),param_2,param_3);
  puVar1 = (undefined2 *)((int)*param_1 + 0x44);
  (*(code *)*puVar1)(0x1110,(undefined4 *)param_1,uVar3);
  return;
}



/* ---- FUN_1110_23a5 @ 1110:23a5  (26 octets) ---- */

undefined __stdcall16far FUN_1110_23a5(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)((int)param_1 + 0x90);
  return *(undefined *)((int)uVar1 + 0x18);
}



/* ---- FUN_1110_23bf @ 1110:23bf  (77 octets) ---- */

void __stdcall16far FUN_1110_23bf(undefined4 *param_1,char param_2)

{
  undefined2 *puVar1;
  undefined4 *puVar2;
  undefined2 uVar3;
  
  if (param_2 < '\0') {
    param_2 = '\x01';
  }
  else if ('\x04' < param_2) {
    param_2 = '\x04';
  }
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  puVar2 = (undefined4 *)param_1;
  if (param_2 != *(char *)((int)puVar2[0x24] + 0x18)) {
    FUN_1110_13b2((int)puVar2[0x24],(int)((ulong)puVar2[0x24] >> 0x10),param_2);
    puVar1 = (undefined2 *)((int)*param_1 + 0x44);
    (*(code *)*puVar1)(0x1110,puVar2,uVar3);
  }
  return;
}



/* ---- FUN_1110_240c @ 1110:240c  (19 octets) ---- */

void __stdcall16far FUN_1110_240c(undefined4 *param_1)

{
  undefined2 *puVar1;
  
  puVar1 = (undefined2 *)((int)*param_1 + 0x44);
  (*(code *)*puVar1)();
  return;
}



/* ---- FUN_1110_241f @ 1110:241f  (81 octets) ---- */

void __stdcall16far FUN_1110_241f(undefined4 param_1)

{
  undefined2 unaff_SS;
  undefined2 local_e;
  undefined2 local_c;
  int local_a;
  undefined2 local_8;
  undefined2 local_6;
  undefined2 local_4;
  
  local_8 = (undefined2)((ulong)param_1 >> 0x10);
  local_a = (int)param_1;
  if ((*(int *)(local_a + 0x8e) != 0) &&
     (*(int *)(local_a + 0x1a) != 0 || *(int *)(local_a + 0x1c) != 0)) {
    local_e = 0xf18;
    local_c = *(undefined2 *)(local_a + 0x8e);
    local_6 = 0;
    local_4 = 0;
    FUN_1138_3a43((int)*(undefined4 *)(local_a + 0x1a),
                  (int)((ulong)*(undefined4 *)(local_a + 0x1a) >> 0x10),&local_e,unaff_SS);
  }
  return;
}



/* ---- FUN_1110_2470 @ 1110:2470  (116 octets) ---- */

void __stdcall16far FUN_1110_2470(undefined4 *param_1,char param_2)

{
  undefined2 *puVar1;
  undefined4 *puVar2;
  undefined2 uVar3;
  
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  puVar2 = (undefined4 *)param_1;
  if (*(int *)((int)puVar2 + 0x8e) == 0) {
    param_2 = '\0';
  }
  if ((param_2 != *(char *)(puVar2 + 0x25)) &&
     ((*(char *)(puVar2 + 0x25) == '\0' || (*(char *)((int)puVar2 + 0x96) != '\0')))) {
    *(char *)(puVar2 + 0x25) = param_2;
    if (param_2 == '\0') {
      *(undefined *)(puVar2 + 0x27) = 0;
    }
    else {
      *(undefined *)(puVar2 + 0x27) = 3;
    }
    puVar1 = (undefined2 *)((int)*param_1 + 0x44);
    (*(code *)*puVar1)();
    if (param_2 != '\0') {
      FUN_1110_241f(puVar2,uVar3);
    }
  }
  return;
}



/* ---- FUN_1110_24e4 @ 1110:24e4  (35 octets) ---- */

void __stdcall16far FUN_1110_24e4(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  if (*(int *)(iVar1 + 0x8e) != param_2) {
    *(int *)(iVar1 + 0x8e) = param_2;
    FUN_1110_241f(iVar1,uVar2);
  }
  return;
}



/* ---- FUN_1110_2507 @ 1110:2507  (37 octets) ---- */

void __stdcall16far FUN_1110_2507(undefined4 *param_1,char param_2)

{
  undefined2 *puVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  if (*(char *)((int)(undefined4 *)param_1 + 0x97) != param_2) {
    *(char *)((int)(undefined4 *)param_1 + 0x97) = param_2;
    puVar1 = (undefined2 *)((int)*param_1 + 0x44);
    (*(code *)*puVar1)();
  }
  return;
}



/* ---- FUN_1110_252c @ 1110:252c  (43 octets) ---- */

void __stdcall16far FUN_1110_252c(undefined4 *param_1,int param_2)

{
  undefined2 *puVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  if ((param_2 != *(int *)((int)(undefined4 *)param_1 + 0x9a)) && (-2 < param_2)) {
    *(int *)((int)(undefined4 *)param_1 + 0x9a) = param_2;
    puVar1 = (undefined2 *)((int)*param_1 + 0x44);
    (*(code *)*puVar1)();
  }
  return;
}



/* ---- FUN_1110_2557 @ 1110:2557  (37 octets) ---- */

void __stdcall16far FUN_1110_2557(undefined4 *param_1,int param_2)

{
  undefined2 *puVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  if (param_2 != *(int *)((undefined4 *)param_1 + 0x26)) {
    *(int *)((undefined4 *)param_1 + 0x26) = param_2;
    puVar1 = (undefined2 *)((int)*param_1 + 0x44);
    (*(code *)*puVar1)();
  }
  return;
}



/* ---- FUN_1110_257c @ 1110:257c  (35 octets) ---- */

void __stdcall16far FUN_1110_257c(undefined4 param_1,char param_2)

{
  int iVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  if (*(char *)(iVar1 + 0x96) != param_2) {
    *(char *)(iVar1 + 0x96) = param_2;
    FUN_1110_241f(iVar1,uVar2);
  }
  return;
}



/* ---- FUN_1110_259f @ 1110:259f  (44 octets) ---- */

void __stdcall16far FUN_1110_259f(undefined4 param_1,undefined2 param_2,undefined2 param_3)

{
  int iVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  FUN_1138_2912(iVar1,uVar2,param_2,param_3);
  if (*(char *)(iVar1 + 0x94) != '\0') {
    FUN_1158_206a(0x1138,iVar1,uVar2);
  }
  return;
}



/* ---- FUN_1110_25cb @ 1110:25cb  (19 octets) ---- */

void __stdcall16far FUN_1110_25cb(undefined4 *param_1)

{
  undefined2 *puVar1;
  
  puVar1 = (undefined2 *)((int)*param_1 + 0x44);
  (*(code *)*puVar1)();
  return;
}



/* ---- FUN_1110_25de @ 1110:25de  (127 octets) ---- */

void __stdcall16far FUN_1110_25de(undefined4 *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined2 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  undefined2 uVar6;
  
  iVar5 = (int)((ulong)param_1 >> 0x10);
  puVar3 = (undefined4 *)param_1;
  uVar6 = (undefined2)((ulong)param_2 >> 0x10);
  iVar4 = (int)param_2;
  if ((-1 < *(int *)((int)puVar3 + 0x8e)) && (*(int *)(iVar4 + 2) == *(int *)((int)puVar3 + 0x8e)))
  {
    puVar1 = (undefined4 *)*(int *)(iVar4 + 4);
    iVar4 = *(int *)(iVar4 + 6);
    if ((iVar4 != iVar5) || (puVar1 != puVar3)) {
      if (*(char *)(puVar1 + 0x25) != '\0') {
        if (*(char *)(puVar3 + 0x25) != '\0') {
          *(undefined *)(puVar3 + 0x25) = 0;
          *(undefined *)(puVar3 + 0x27) = 0;
          puVar2 = (undefined2 *)((int)*param_1 + 0x44);
          (*(code *)*puVar2)();
        }
      }
      *(undefined *)((int)puVar3 + 0x96) = *(undefined *)((int)puVar1 + 0x96);
    }
  }
  return;
}



/* ---- FUN_1110_26c2 @ 1110:26c2  (19 octets) ---- */

void __stdcall16far FUN_1110_26c2(undefined4 *param_1)

{
  undefined2 *puVar1;
  
  puVar1 = (undefined2 *)((int)*param_1 + 0x44);
  (*(code *)*puVar1)();
  return;
}



/* ---- FUN_1110_26d5 @ 1110:26d5  (19 octets) ---- */

void __stdcall16far FUN_1110_26d5(undefined4 *param_1)

{
  undefined2 *puVar1;
  
  puVar1 = (undefined2 *)((int)*param_1 + 0x44);
  (*(code *)*puVar1)();
  return;
}



/* ---- FUN_1110_26e8 @ 1110:26e8  (22 octets) ---- */

void __stdcall16far FUN_1110_26e8(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)((int)param_1 + 0x90);
  FUN_1110_122f((int)uVar1,(int)((ulong)uVar1 >> 0x10));
  return;
}



/* ---- FUN_1110_26fe @ 1110:26fe  (178 octets) ---- */

undefined4 __stdcall16far
FUN_1110_26fe(undefined4 param_1,char param_2,undefined2 param_3,undefined2 param_4)

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
  FUN_1120_69b0(iVar1,uVar3,0,param_3,param_4);
  uVar5 = FUN_1110_110e(0xb9b,0x1110,CONCAT11(extraout_AH,1));
  *(undefined2 *)(iVar1 + 0xe4) = (int)uVar5;
  *(undefined2 *)(iVar1 + 0xe6) = (int)((ulong)uVar5 >> 0x10);
  uVar4 = (undefined2)((ulong)*(undefined4 *)(iVar1 + 0xe4) >> 0x10);
  iVar2 = (int)*(undefined4 *)(iVar1 + 0xe4);
  *(undefined2 *)(iVar2 + 0x19) = 0x2c79;
  *(undefined2 *)(iVar2 + 0x1b) = 0x1110;
  *(int *)(iVar2 + 0x1d) = iVar1;
  *(undefined2 *)(iVar2 + 0x1f) = uVar3;
  uVar5 = FUN_1128_17b8(0x560,0x1128,0x2c01);
  *(undefined2 *)(iVar1 + 0xe0) = (int)uVar5;
  *(undefined2 *)(iVar1 + 0xe2) = (int)((ulong)uVar5 >> 0x10);
  *(undefined *)(iVar1 + 0xe8) = 0;
  *(undefined *)(iVar1 + 0xe9) = 0;
  *(undefined *)(iVar1 + 0xea) = 0;
  *(undefined2 *)(iVar1 + 0xeb) = 4;
  *(undefined2 *)(iVar1 + 0xed) = 0xffff;
  if (param_2 != '\0') {
    DAT_1160_1858 = uStack_a;
  }
  return param_1;
}



/* ---- FUN_1110_27b0 @ 1110:27b0  (61 octets) ---- */

void __stdcall16far FUN_1110_27b0(undefined4 param_1,char param_2)

{
  int iVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  FUN_1158_1f7f((int)*(undefined4 *)(iVar1 + 0xe4),
                (int)((ulong)*(undefined4 *)(iVar1 + 0xe4) >> 0x10));
  FUN_1158_1f7f((int)*(undefined4 *)(iVar1 + 0xe0),
                (int)((ulong)*(undefined4 *)(iVar1 + 0xe0) >> 0x10));
  FUN_1138_2efc(iVar1,uVar2,0);
  if (param_2 != '\0') {
    FUN_1158_200f();
  }
  return;
}



/* ---- FUN_1110_27ed @ 1110:27ed  (49 octets) ---- */

void __stdcall16far FUN_1110_27ed(undefined4 param_1,undefined4 param_2)

{
  undefined2 uVar1;
  int iVar2;
  undefined2 uVar3;
  
  uVar3 = (undefined2)((ulong)param_2 >> 0x10);
  iVar2 = (int)param_2;
  FUN_1120_6aff((int)param_1,(int)((ulong)param_1 >> 0x10),iVar2,uVar3);
  uVar1 = *(undefined2 *)(iVar2 + 6);
  *(uint *)(iVar2 + 4) = *(uint *)(iVar2 + 4) | 0xb;
  *(undefined2 *)(iVar2 + 6) = uVar1;
  return;
}



/* ---- FUN_1110_281e @ 1110:281e  (35 octets) ---- */

void __stdcall16far FUN_1110_281e(undefined4 param_1,char param_2)

{
  int iVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  if (param_2 != *(char *)(iVar1 + 0xef)) {
    *(char *)(iVar1 + 0xef) = param_2;
    FUN_1138_22c6(iVar1,uVar2);
  }
  return;
}



/* ---- FUN_1110_2841 @ 1110:2841  (183 octets) ---- */

void __stdcall16far FUN_1110_2841(undefined4 param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  int local_a;
  int local_8;
  
  iVar3 = (int)((ulong)param_1 >> 0x10);
  iVar2 = (int)param_1;
  if (*(char *)(iVar2 + 0xe9) == '\x06') {
    lVar4 = FUN_1140_17a8(iVar2,iVar3);
    if (lVar4 == 0) {
      FUN_1120_6a15(iVar2,iVar3);
    }
    else {
      FUN_1140_5556(lVar4);
    }
  }
  else {
    local_a = iVar2;
    local_8 = iVar3;
    if (*(char *)(iVar2 + 0xe9) == '\x03') {
      for (; (local_a != 0 || local_8 != 0 &&
             (*(int *)(local_a + 0xac) == 0 && *(int *)(local_a + 0xae) == 0)); local_8 = *piVar1) {
        piVar1 = (int *)(local_a + 0x1c);
        local_a = *(int *)(local_a + 0x1a);
      }
      if (local_a == 0 && local_8 == 0) {
        FUN_1120_6a15(iVar2,iVar3);
      }
      else {
        FUN_1140_7792((int)DAT_1160_2c2a,(int)((ulong)DAT_1160_2c2a >> 0x10),
                      *(undefined2 *)(local_a + 0xac),*(undefined2 *)(local_a + 0xae));
      }
    }
    else {
      FUN_1120_6a15(iVar2,iVar3);
    }
  }
  return;
}



/* ---- FUN_1110_28f8 @ 1110:28f8  (49 octets) ---- */

void __stdcall16far FUN_1110_28f8(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  
  uVar1 = *(undefined4 *)((int)param_2 + 4);
  uVar3 = (undefined2)((ulong)uVar1 >> 0x10);
  iVar2 = (int)uVar1;
  uVar4 = (undefined2)((ulong)param_1 >> 0x10);
  *(undefined2 *)(iVar2 + 6) = *(undefined2 *)((int)param_1 + 0x22);
  *(undefined2 *)(iVar2 + 8) = *(undefined2 *)((int)param_1 + 0x24);
  return;
}



/* ---- FUN_1110_2929 @ 1110:2929  (26 octets) ---- */

void __stdcall16far FUN_1110_2929(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)((int)param_2 + 4);
  FUN_1110_2943((int)param_1,(int)((ulong)param_1 >> 0x10),(int)uVar1,(int)((ulong)uVar1 >> 0x10));
  return;
}



/* ---- FUN_1110_2943 @ 1110:2943  (585 octets) ---- */

void __stdcall16far FUN_1110_2943(undefined4 *param_1,undefined4 param_2)

{
  undefined2 *puVar1;
  undefined4 uVar2;
  byte extraout_AH;
  byte bVar4;
  int iVar3;
  undefined extraout_AH_00;
  int iVar5;
  undefined4 *puVar6;
  undefined2 uVar7;
  undefined2 uVar8;
  undefined2 unaff_SS;
  undefined *puVar9;
  undefined2 uVar10;
  undefined4 *puVar11;
  undefined *puVar12;
  undefined2 uVar13;
  undefined2 uVar14;
  undefined *puVar15;
  undefined2 uVar16;
  undefined local_120 [8];
  undefined local_118 [248];
  undefined local_20 [8];
  undefined2 local_18;
  undefined local_16 [8];
  undefined local_e [8];
  undefined local_6;
  char local_5;
  char local_4;
  char local_3;
  
  uVar7 = (undefined2)((ulong)param_2 >> 0x10);
  iVar5 = (int)param_2;
  uVar8 = (undefined2)((ulong)param_1 >> 0x10);
  puVar6 = (undefined4 *)param_1;
  FUN_1128_225d((int)puVar6[0x38],(int)((ulong)puVar6[0x38] >> 0x10),*(undefined2 *)(iVar5 + 0xc));
  local_3 = (*(uint *)(iVar5 + 8) & 1) != 0;
  local_4 = (*(uint *)(iVar5 + 8) & 0x10) != 0;
  if (*(char *)((int)puVar6 + 0x2a) == '\0') {
    local_6 = 1;
  }
  else if ((bool)local_3) {
    local_6 = 2;
  }
  else {
    local_6 = 0;
  }
  if (((*(char *)(puVar6 + 0x3a) == '\0') && (DAT_1160_2c0c != '\0')) ||
     (*(char *)(puVar6 + 0x3a) == '\x02')) {
    local_5 = '\x01';
  }
  else {
    local_5 = '\0';
  }
  FUN_1128_2099((int)puVar6[0x38],(int)((ulong)puVar6[0x38] >> 0x10),*(undefined2 *)(puVar6 + 0xd),
                *(undefined2 *)((int)puVar6 + 0x36));
  if (local_5 != '\0') {
    if ((local_4 == '\0') && (*(char *)((int)puVar6 + 0xef) == '\0')) {
      uVar2 = *(undefined4 *)((int)puVar6[0x38] + 7);
      FUN_1128_1233((int)uVar2,(int)((ulong)uVar2 >> 0x10),0);
    }
    else {
      uVar2 = *(undefined4 *)((int)puVar6[0x38] + 7);
      FUN_1128_1233((int)uVar2,(int)((ulong)uVar2 >> 0x10),1);
    }
  }
  if (local_5 == '\0') {
    local_18 = 2;
  }
  else {
    local_18 = 1;
  }
  uVar7 = *(undefined2 *)((int)puVar6 + 0xe2);
  uVar14 = *(undefined2 *)(puVar6 + 0x38);
  puVar12 = local_20;
  puVar1 = (undefined2 *)((int)*param_1 + 0x34);
  puVar11 = puVar6;
  uVar10 = uVar8;
  uVar13 = unaff_SS;
  (*(code *)*puVar1)(0x1128,puVar6,uVar8,puVar12);
  iVar5 = (uint)extraout_AH * 0x100;
  if (local_5 == '\0') {
    iVar5 = iVar5 + 1;
  }
  bVar4 = (byte)((uint)iVar5 >> 8);
  if ((local_4 == '\0') && (*(char *)((int)puVar6 + 0xef) == '\0')) {
    iVar3 = (uint)bVar4 << 8;
  }
  else {
    iVar3 = CONCAT11(bVar4,1);
  }
  FUN_1110_07e1(iVar3,CONCAT11(bVar4,local_3),iVar5,
                CONCAT11(extraout_AH,*(undefined *)(puVar6 + 0x3a)),local_18,puVar11,uVar10,puVar12,
                uVar13);
  FUN_1158_161b(8,local_e,unaff_SS,uVar14,uVar7);
  puVar15 = local_120;
  uVar7 = *(undefined2 *)((int)puVar6 + 0xe2);
  uVar14 = *(undefined2 *)(puVar6 + 0x38);
  puVar12 = local_e;
  puVar9 = local_118;
  uVar10 = unaff_SS;
  uVar13 = unaff_SS;
  uVar16 = unaff_SS;
  FUN_1138_1d53(puVar6,uVar8);
  FUN_1110_1db6((int)puVar6[0x39],(int)((ulong)puVar6[0x39] >> 0x10),
                CONCAT11(extraout_AH_00,local_6),*(undefined2 *)((int)puVar6 + 0xeb),
                *(undefined2 *)((int)puVar6 + 0xed),
                CONCAT11(extraout_AH_00,*(undefined *)((int)puVar6 + 0xea)),puVar9,uVar10,puVar12,
                uVar13,uVar14,uVar7);
  FUN_1158_161b(8,local_16,unaff_SS,puVar15,uVar16);
  if (local_4 != '\0') {
    uVar2 = *(undefined4 *)((int)puVar6[0x38] + 0xf);
    uVar7 = 0x1128;
    FUN_1128_1684((int)uVar2,(int)((ulong)uVar2 >> 0x10),0xfff0,0xffff);
    if (local_5 != '\0') {
      uVar7 = 0x1158;
      FUN_1158_161b(8,local_16,unaff_SS,local_e,unaff_SS);
    }
    if (local_5 == '\0') {
      INFLATERECT(uVar7,1,1,local_16);
    }
    else {
      INFLATERECT(uVar7,0xfffe,0xfffe,local_16);
      if (local_3 != '\0') {
        OFFSETRECT(0x14d0,0xffff,0xffff,local_16);
      }
    }
    FUN_1128_21d2((int)puVar6[0x38],(int)((ulong)puVar6[0x38] >> 0x10));
    DRAWFOCUSRECT(0x1128,local_16,unaff_SS);
  }
  FUN_1128_225d((int)puVar6[0x38],(int)((ulong)puVar6[0x38] >> 0x10),0);
  return;
}



/* ---- FUN_1110_2b8c @ 1110:2b8c  (35 octets) ---- */

void __stdcall16far FUN_1110_2b8c(undefined4 *param_1,undefined2 param_2,undefined2 param_3)

{
  undefined2 *puVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  FUN_1138_573a((undefined4 *)param_1,uVar2,param_2,param_3);
  puVar1 = (undefined2 *)((int)*param_1 + 0x44);
  (*(code *)*puVar1)(0x1138,(undefined4 *)param_1,uVar2);
  return;
}



/* ---- FUN_1110_2baf @ 1110:2baf  (35 octets) ---- */

void __stdcall16far FUN_1110_2baf(undefined4 *param_1,undefined2 param_2,undefined2 param_3)

{
  undefined2 *puVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  FUN_1138_56b3((undefined4 *)param_1,uVar2,param_2,param_3);
  puVar1 = (undefined2 *)((int)*param_1 + 0x44);
  (*(code *)*puVar1)(0x1138,(undefined4 *)param_1,uVar2);
  return;
}



/* ---- FUN_1110_2bd2 @ 1110:2bd2  (35 octets) ---- */

void __stdcall16far FUN_1110_2bd2(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_2 >> 0x10);
  iVar1 = (int)param_2;
  FUN_1138_24bb((int)param_1,(int)((ulong)param_1 >> 0x10),*(undefined2 *)(iVar1 + 4),
                *(undefined2 *)(iVar1 + 6),*(undefined2 *)(iVar1 + 2),0x201);
  return;
}



/* ---- FUN_1110_2bf5 @ 1110:2bf5  (35 octets) ---- */

undefined2 __stdcall16far FUN_1110_2bf5(undefined4 param_1)

{
  undefined2 uVar1;
  undefined4 uVar2;
  
  uVar2 = FUN_1110_2c55((int)param_1,(int)((ulong)param_1 >> 0x10));
  uVar1 = FUN_1128_5b0d(uVar2);
  return uVar1;
}



/* ---- FUN_1110_2c18 @ 1110:2c18  (61 octets) ---- */

void __stdcall16far FUN_1110_2c18(undefined4 *param_1,undefined2 param_2,undefined2 param_3)

{
  undefined2 *puVar1;
  undefined4 *puVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  
  uVar4 = FUN_1158_2273(0x83f,0x1128,param_2,param_3);
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  puVar2 = (undefined4 *)param_1;
  FUN_1110_12ff((int)puVar2[0x39],(int)((ulong)puVar2[0x39] >> 0x10),uVar4);
  *(undefined *)(puVar2 + 0x3c) = 1;
  puVar1 = (undefined2 *)((int)*param_1 + 0x44);
  (*(code *)*puVar1)(0x1110,puVar2,uVar3);
  return;
}



/* ---- FUN_1110_2c55 @ 1110:2c55  (36 octets) ---- */

undefined4 __stdcall16far FUN_1110_2c55(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined2 uVar3;
  
  uVar1 = *(undefined4 *)((int)param_1 + 0xe4);
  uVar3 = (undefined2)((ulong)uVar1 >> 0x10);
  iVar2 = (int)uVar1;
  return CONCAT22(*(undefined2 *)(iVar2 + 6),*(undefined2 *)(iVar2 + 4));
}



/* ---- FUN_1110_2c79 @ 1110:2c79  (19 octets) ---- */

void __stdcall16far FUN_1110_2c79(undefined4 *param_1)

{
  undefined2 *puVar1;
  
  puVar1 = (undefined2 *)((int)*param_1 + 0x44);
  (*(code *)*puVar1)();
  return;
}



/* ---- FUN_1110_2c8c @ 1110:2c8c  (31 octets) ---- */

uint __stdcall16far FUN_1110_2c8c(undefined4 param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = FUN_1110_2e1c((int)param_1,(int)((ulong)param_1 >> 0x10));
  uVar2 = uVar1 & 0xff00;
  if ((char)uVar1 == '\0') {
    uVar2 = uVar2 + 1;
  }
  return uVar2;
}



/* ---- FUN_1110_2cab @ 1110:2cab  (37 octets) ---- */

void __stdcall16far FUN_1110_2cab(undefined4 *param_1,char param_2)

{
  undefined2 *puVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  if (param_2 != *(char *)((undefined4 *)param_1 + 0x3a)) {
    *(char *)((undefined4 *)param_1 + 0x3a) = param_2;
    puVar1 = (undefined2 *)((int)*param_1 + 0x44);
    (*(code *)*puVar1)();
  }
  return;
}



/* ---- FUN_1110_2cd0 @ 1110:2cd0  (262 octets) ---- */

void __stdcall16far FUN_1110_2cd0(undefined4 *param_1,char param_2)

{
  undefined2 uVar1;
  undefined2 *puVar2;
  undefined uVar3;
  undefined4 *puVar4;
  undefined2 uVar5;
  undefined2 unaff_CS;
  undefined2 unaff_SS;
  undefined4 uVar6;
  undefined *puVar7;
  undefined local_202 [256];
  char local_102;
  
  uVar5 = (undefined2)((ulong)param_1 >> 0x10);
  puVar4 = (undefined4 *)param_1;
  if (param_2 != *(char *)((int)puVar4 + 0xe9)) {
    if (param_2 != '\0') {
      if ((param_2 == '\x01') || (param_2 == '\x04')) {
        uVar3 = 1;
      }
      else {
        uVar3 = 0;
      }
      FUN_1120_6abc(puVar4,uVar5,uVar3);
      if ((param_2 == '\x02') || (param_2 == '\x05')) {
        uVar3 = 1;
      }
      else {
        uVar3 = 0;
      }
      *(undefined *)((int)puVar4 + 0xdb) = uVar3;
      if (((((*(byte *)(puVar4 + 6) & 1) != 0) && (FUN_1138_1d53(puVar4,uVar5), local_102 == '\0'))
          || ((*(byte *)(puVar4 + 6) & 1) == 0)) && (*(int *)(param_2 * 2 + 0xe24) != 0)) {
        puVar7 = local_202;
        FUN_1150_092b(*(undefined2 *)(param_2 * 2 + 0xe24));
        FUN_1138_1d8c(puVar4,uVar5,puVar7,unaff_SS);
      }
      uVar1 = *(undefined2 *)(param_2 * 2 + 0xe3a);
      *(undefined2 *)((int)puVar4 + 0xde) = uVar1;
      uVar6 = FUN_1110_0a6f(CONCAT11((char)((uint)uVar1 >> 8),param_2));
      FUN_1110_12ff((int)puVar4[0x39],(int)((ulong)puVar4[0x39] >> 0x10),uVar6);
      unaff_CS = 0x1110;
      FUN_1110_2edb(puVar4,uVar5,2);
      *(undefined *)(puVar4 + 0x3c) = 0;
    }
    *(char *)((int)puVar4 + 0xe9) = param_2;
    puVar2 = (undefined2 *)((int)*param_1 + 0x44);
    (*(code *)*puVar2)(unaff_CS,puVar4,uVar5);
  }
  return;
}



/* ---- FUN_1110_2e1c @ 1110:2e1c  (128 octets) ---- */

undefined __stdcall16far FUN_1110_2e1c(undefined4 param_1)

{
  int iVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  iVar1 = (int)param_1;
  if (*(char *)(iVar1 + 0xe9) != '\0') {
    if (((*(char *)(iVar1 + 0xe9) != '\x01') && (*(char *)(iVar1 + 0xe9) != '\x04')) ||
       (*(char *)(iVar1 + 0xda) != '\0')) {
      if (((*(char *)(iVar1 + 0xe9) != '\x02') && (*(char *)(iVar1 + 0xe9) != '\x05')) ||
         (*(char *)(iVar1 + 0xdb) != '\0')) {
        if ((*(int *)(*(char *)(iVar1 + 0xe9) * 2 + 0xe3a) == *(int *)(iVar1 + 0xde)) &&
           (*(char *)(iVar1 + 0xf0) == '\0')) goto LAB_1110_2e8a;
      }
    }
    *(undefined *)(iVar1 + 0xe9) = 0;
  }
LAB_1110_2e8a:
  return *(undefined *)(iVar1 + 0xe9);
}



/* ---- FUN_1110_2e9c @ 1110:2e9c  (37 octets) ---- */

void __stdcall16far FUN_1110_2e9c(undefined4 *param_1,char param_2)

{
  undefined2 *puVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  if (*(char *)((int)(undefined4 *)param_1 + 0xea) != param_2) {
    *(char *)((int)(undefined4 *)param_1 + 0xea) = param_2;
    puVar1 = (undefined2 *)((int)*param_1 + 0x44);
    (*(code *)*puVar1)();
  }
  return;
}



/* ---- FUN_1110_2ec1 @ 1110:2ec1  (26 octets) ---- */

undefined __stdcall16far FUN_1110_2ec1(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)((int)param_1 + 0xe4);
  return *(undefined *)((int)uVar1 + 0x18);
}



/* ---- FUN_1110_2edb @ 1110:2edb  (77 octets) ---- */

void __stdcall16far FUN_1110_2edb(undefined4 *param_1,char param_2)

{
  undefined2 *puVar1;
  undefined4 *puVar2;
  undefined2 uVar3;
  
  if (param_2 < '\0') {
    param_2 = '\x01';
  }
  else if ('\x04' < param_2) {
    param_2 = '\x04';
  }
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  puVar2 = (undefined4 *)param_1;
  if (param_2 != *(char *)((int)puVar2[0x39] + 0x18)) {
    FUN_1110_13b2((int)puVar2[0x39],(int)((ulong)puVar2[0x39] >> 0x10),param_2);
    puVar1 = (undefined2 *)((int)*param_1 + 0x44);
    (*(code *)*puVar1)(0x1110,puVar2,uVar3);
  }
  return;
}



/* ---- FUN_1110_2f28 @ 1110:2f28  (37 octets) ---- */

void __stdcall16far FUN_1110_2f28(undefined4 *param_1,int param_2)

{
  undefined2 *puVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  if (*(int *)((int)(undefined4 *)param_1 + 0xeb) != param_2) {
    *(int *)((int)(undefined4 *)param_1 + 0xeb) = param_2;
    puVar1 = (undefined2 *)((int)*param_1 + 0x44);
    (*(code *)*puVar1)();
  }
  return;
}



/* ---- FUN_1110_2f4d @ 1110:2f4d  (43 octets) ---- */

void __stdcall16far FUN_1110_2f4d(undefined4 *param_1,int param_2)

{
  undefined2 *puVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  if ((param_2 != *(int *)((int)(undefined4 *)param_1 + 0xed)) && (-2 < param_2)) {
    *(int *)((int)(undefined4 *)param_1 + 0xed) = param_2;
    puVar1 = (undefined2 *)((int)*param_1 + 0x44);
    (*(code *)*puVar1)();
  }
  return;
}



/* ---- FUN_1110_2f78 @ 1110:2f78  (41 octets) ---- */

void __cdecl16far FUN_1110_2f78(void)

{
  undefined4 uVar1;
  undefined local_3;
  
  local_3 = '\0';
  while( true ) {
    uVar1 = *(undefined4 *)(local_3 * 4 + 0x2ae0);
    FUN_1158_1f7f((int)uVar1,(int)((ulong)uVar1 >> 0x10));
    if (local_3 == '\n') break;
    local_3 = local_3 + '\x01';
  }
  return;
}



/* ---- FUN_1110_2fa1 @ 1110:2fa1  (32 octets) ---- */

void __cdecl16far FUN_1110_2fa1(void)

{
  FUN_1158_1ee5(0,0x2c,0x2ae0,0x1160);
  FUN_1150_0574(0x2f78,0x1110);
  return;
}




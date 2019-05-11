
/* WARNING (jumptable): Heritage AFTER dead removal. Example location: r0x004227d0 : 0x001f2594 */
/* WARNING: Heritage AFTER dead removal. Example location: r0x004227d8 : 0x00159455 */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Could not reconcile some variable overlaps */
/* WARNING: Restarted to delay deadcode elimination for space: ram */

ulong * PyEval_EvalFrameEx(long lParm1,ulong uParm2)

{
  byte *pbVar1;
  long lVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined8 uVar8;
  long *plVar9;
  long lVar10;
  sem_t *__sem;
  uint uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  int iVar14;
  int iVar15;
  int *piVar16;
  long lVar17;
  undefined8 uVar18;
  long *plVar19;
  ushort **ppuVar20;
  undefined1 *puVar21;
  ulong **ppuVar22;
  uint uVar23;
  uint uVar24;
  ulong *puVar25;
  ulong uVar26;
  ulong *puVar27;
  ulong extraout_RDX;
  undefined8 extraout_RDX_00;
  long extraout_RDX_01;
  undefined8 extraout_RDX_02;
  long extraout_RDX_03;
  undefined8 extraout_RDX_04;
  undefined8 extraout_RDX_05;
  byte bVar28;
  uint uVar29;
  byte bVar32;
  long *plVar30;
  ulong *puVar31;
  ulong **ppuVar33;
  char *pcVar34;
  byte *pbVar35;
  byte *pbVar36;
  uint uVar37;
  code *UNRECOVERED_JUMPTABLE;
  int iVar38;
  uint uVar39;
  ulong **ppuVar40;
  uint uVar41;
  ulong uVar42;
  ulong **ppuVar43;
  ulong *puVar44;
  undefined1 *puVar45;
  long *plVar46;
  long lVar47;
  int iVar48;
  ulong uVar49;
  bool bVar50;
  undefined auVar51 [16];
  undefined auVar52 [16];
  long local_100;
  ulong *puVar53;
  ulong local_f8;
  long local_f0;
  ulong *local_e8;
  undefined1 *local_e0;
  long local_d8;
  long local_d0;
  ulong **local_c8;
  long local_c0;
  uint local_ac;
  int local_a8;
  uint local_a4;
  long local_a0;
  long local_98;
  ulong **local_90;
  ulong **ppuStack96;
  ulong **ppuStack88;
  ulong *local_50;
  undefined1 *local_48;
  ulong *local_40;
  
  local_100 = _PyThreadState_Current;
  ppuVar40 = (ulong **)(local_f8 & 0xffffffff00000000 | uParm2 & 0xffffffff);
  if (lParm1 == 0) {
    return (ulong *)0x0;
  }
  uVar23 = *(int *)(_PyThreadState_Current + 0x18) + 1;
  *(uint *)(_PyThreadState_Current + 0x18) = uVar23;
  if (_Py_CheckRecursionLimit < (int)uVar23) {
    iVar15 = _Py_CheckRecursiveCall(&DAT_003c15fc,uParm2,local_100,(ulong)uVar23);
    if (iVar15 != 0) {
      return (ulong *)0;
    }
    *(long *)(local_100 + 0x10) = lParm1;
    if (*(int *)(local_100 + 0x20) != 0) goto LAB_001f94a0;
  }
  else {
    uVar23 = *(uint *)(local_100 + 0x20);
    *(long *)(local_100 + 0x10) = lParm1;
    if (uVar23 == 0) {
      local_a0 = *(long *)(lParm1 + 0x20);
      local_a8 = -1;
      local_d0 = *(long *)(local_a0 + 0x30);
      local_c0 = *(long *)(local_a0 + 0x28);
      local_a4 = 0xffffffff;
      local_f0 = *(long *)(local_a0 + 0x20) + 0x24;
      local_98 = lParm1 + 0x178 + (long)*(int *)(local_a0 + 0x14) * 8;
      pbVar35 = (byte *)(*(long *)(local_a0 + 0x20) + 0x25 + (long)*(int *)(lParm1 + 0x78));
      local_90 = *(ulong ***)(lParm1 + 0x48);
      *(undefined8 *)(lParm1 + 0x48) = 0;
      local_ac = 0;
      local_e8 = (ulong *)0x0;
      local_e0 = (undefined1 *)0x0;
      if ((int)(uParm2 & 0xffffffff) != 0) {
        uVar49 = 2;
        puVar27 = (ulong *)_Py_NoneStruct;
        goto LAB_001f2d8b;
      }
      puVar45 = _Py_NoneStruct;
      ppuVar22 = local_90;
      goto LAB_001f09c5;
    }
LAB_001f94a0:
    if (((*(long *)(local_100 + 0x30) != 0) &&
        (iVar15 = FUN_00276e10(*(long *)(local_100 + 0x30),*(undefined8 *)(local_100 + 0x40),lParm1,
                               0), lVar47 = local_100, iVar15 != 0)) ||
       ((*(long *)(local_100 + 0x28) != 0 &&
        (iVar15 = FUN_00276e10(*(long *)(local_100 + 0x28),*(undefined8 *)(local_100 + 0x38),lParm1,
                               0,_Py_NoneStruct), lVar47 = local_100, iVar15 != 0)))) {
      local_e8 = (ulong *)0x0;
      goto LAB_001f16f6;
    }
  }
  local_a0 = *(long *)(lParm1 + 0x20);
  lVar47 = *(long *)(local_a0 + 0x20);
  local_d0 = *(long *)(local_a0 + 0x30);
  local_c0 = *(long *)(local_a0 + 0x28);
  local_f0 = lVar47 + 0x24;
  local_98 = lParm1 + 0x178 + (long)*(int *)(local_a0 + 0x14) * 8;
  local_90 = *(ulong ***)(lParm1 + 0x48);
  *(undefined8 *)(lParm1 + 0x48) = 0;
  pbVar35 = (byte *)(lVar47 + 0x25 + (long)*(int *)(lParm1 + 0x78));
  if ((int)ppuVar40 != 0) {
    uVar23 = 0;
    uVar49 = 2;
    local_a8 = -1;
    local_ac = 0;
    local_a4 = 0xffffffff;
    local_e8 = (ulong *)0x0;
    local_e0 = (undefined1 *)0x0;
    puVar27 = (ulong *)_Py_NoneStruct;
    goto LAB_001f2d8b;
  }
  puVar45 = _Py_NoneStruct;
  local_ac = 0;
  local_a8 = -1;
  local_a4 = 0xffffffff;
  local_e8 = (ulong *)0x0;
  local_e0 = (undefined1 *)0x0;
  ppuVar22 = local_90;
LAB_001f09c5:
  uVar23 = _Py_CheckInterval;
  local_d8 = lParm1 + 0x178;
  _Py_Ticker = _Py_Ticker - 1;
  if (-1 < (int)_Py_Ticker) {
    uVar49 = (ulong)DAT_004a25b8;
    local_90 = ppuVar22;
    goto LAB_001f09e9;
  }
  if (*pbVar35 == 0x7a) {
LAB_001f69a0:
    uVar49 = (ulong)DAT_004a25b8;
    local_90 = ppuVar22;
LAB_001f09e9:
    uVar23 = (uint)((ulong)ppuVar40 >> 0x20);
    iVar15 = (int)local_f0;
    uVar11 = (int)pbVar35 - iVar15;
    *(uint *)(lParm1 + 0x78) = uVar11;
    if ((((int)uVar49 != 0) && (*(long *)(local_100 + 0x30) != 0)) &&
       (*(int *)(local_100 + 0x1c) == 0)) {
      *(ulong ***)(lParm1 + 0x48) = local_90;
      uVar18 = *(undefined8 *)(local_100 + 0x40);
      uVar8 = *(undefined8 *)(local_100 + 0x30);
      if (((int)uVar11 < local_a8) && ((int)local_ac <= (int)uVar11)) {
        iVar14 = *(int *)(lParm1 + 0x7c);
      }
      else {
        lVar47 = *(long *)(*(long *)(lParm1 + 0x20) + 0x68);
        pbVar35 = (byte *)(lVar47 + 0x24);
        iVar14 = *(int *)(*(long *)(lParm1 + 0x20) + 0x60);
        uVar49 = (long)((*(ulong *)(lVar47 + 0x10) >> 0x3f) + *(ulong *)(lVar47 + 0x10)) >> 1;
        iVar48 = (int)uVar49;
        uVar49 = uVar49 & 0xffffffff;
        uVar41 = (uint)uVar49;
        if (iVar48 < 1) {
          local_ac = 0;
LAB_001f8b56:
          local_a8 = 0x7fffffff;
        }
        else {
          bVar28 = *(byte *)(lVar47 + 0x24);
          uVar42 = (ulong)bVar28;
          local_ac = 0;
          if ((int)uVar11 < (int)(uint)bVar28) {
            uVar24 = 0;
          }
          else {
            uVar41 = iVar48 - 1;
            uVar29 = uVar41 & 3;
            if (uVar29 == 0) {
              uVar26 = 0;
              pbVar36 = pbVar35;
            }
            else {
              local_ac = 0;
              if (*(byte *)(lVar47 + 0x25) != 0) {
                local_ac = (uint)bVar28;
              }
              uVar37 = (uint)*(byte *)(lVar47 + 0x26) + (uint)bVar28;
              iVar14 = iVar14 + (uint)*(byte *)(lVar47 + 0x25);
              uVar49 = (ulong)uVar41;
              pbVar35 = (byte *)(lVar47 + 0x26);
              uVar24 = (uint)bVar28;
              if ((int)uVar11 < (int)uVar37) goto LAB_001f7522;
              uVar42 = (ulong)uVar37;
              if (uVar29 == 1) {
                uVar26 = (ulong)local_ac;
                pbVar36 = pbVar35;
              }
              else {
                uVar39 = uVar37;
                if (uVar29 != 2) {
                  pbVar35 = (byte *)(lVar47 + 0x28);
                  if (*(byte *)(lVar47 + 0x27) != 0) {
                    local_ac = uVar37;
                  }
                  uVar39 = (uint)*(byte *)(lVar47 + 0x28) + uVar37;
                  iVar14 = iVar14 + (uint)*(byte *)(lVar47 + 0x27);
                  uVar41 = iVar48 - 2;
                  uVar24 = uVar37;
                  if ((int)uVar11 < (int)uVar39) goto LAB_001f7522;
                }
                pbVar36 = pbVar35 + 1;
                if (*pbVar36 != 0) {
                  local_ac = uVar39;
                }
                pbVar35 = pbVar35 + 2;
                iVar14 = iVar14 + (uint)*pbVar36;
                uVar41 = uVar41 - 1;
                uVar49 = (ulong)uVar41;
                uVar42 = (ulong)((uint)*pbVar35 + uVar39);
                uVar24 = uVar39;
                if ((int)uVar11 < (int)((uint)*pbVar35 + uVar39)) goto LAB_001f7522;
                uVar26 = (ulong)local_ac;
                pbVar36 = pbVar35;
              }
            }
            do {
              pbVar35 = pbVar36 + 2;
              iVar48 = (int)uVar49;
              uVar41 = iVar48 - 1;
              if (pbVar36[1] != 0) {
                uVar26 = uVar42;
              }
              local_ac = (uint)uVar26;
              iVar14 = iVar14 + (uint)pbVar36[1];
              if (uVar41 == 0) goto LAB_001f8b56;
              uVar29 = (uint)*pbVar35 + (uint)uVar42;
              uVar24 = (uint)uVar42;
              if ((int)uVar11 < (int)uVar29) break;
              if (pbVar36[3] != 0) {
                uVar26 = (ulong)uVar29;
              }
              local_ac = (uint)uVar26;
              pbVar35 = pbVar36 + 4;
              iVar14 = iVar14 + (uint)pbVar36[3];
              uVar41 = iVar48 - 2;
              uVar37 = (uint)*pbVar35 + uVar29;
              uVar24 = uVar29;
              if ((int)uVar11 < (int)uVar37) break;
              pbVar35 = pbVar36 + 6;
              if (pbVar36[5] != 0) {
                uVar26 = (ulong)uVar37;
              }
              local_ac = (uint)uVar26;
              iVar14 = iVar14 + (uint)pbVar36[5];
              uVar41 = iVar48 - 3;
              uVar29 = (uint)pbVar36[6] + uVar37;
              uVar24 = uVar37;
              if ((int)uVar11 < (int)uVar29) break;
              pbVar35 = pbVar36 + 8;
              pbVar1 = pbVar36 + 8;
              if (pbVar36[7] != 0) {
                uVar26 = (ulong)uVar29;
              }
              local_ac = (uint)uVar26;
              uVar42 = (ulong)((uint)*pbVar1 + uVar29);
              iVar14 = iVar14 + (uint)pbVar36[7];
              uVar41 = iVar48 - 4;
              uVar49 = (ulong)uVar41;
              pbVar36 = pbVar35;
              uVar24 = uVar29;
            } while ((int)((uint)*pbVar1 + uVar29) <= (int)uVar11);
          }
LAB_001f7522:
          local_a8 = (uint)*pbVar35 + uVar24;
          if ((pbVar35[1] == 0) && (iVar48 = uVar41 - 2, iVar48 != -1)) {
            local_a8 = local_a8 + (uint)pbVar35[2];
            bVar28 = pbVar35[3];
            pbVar35 = pbVar35 + 4;
            while ((bVar28 == 0 && (iVar48 = iVar48 + -1, iVar48 != -1))) {
              local_a8 = local_a8 + (uint)*pbVar35;
              bVar28 = pbVar35[1];
              pbVar35 = pbVar35 + 2;
            }
          }
        }
      }
      if (((int)uVar11 < (int)local_a4) || (local_ac == uVar11)) {
        *(int *)(lParm1 + 0x7c) = iVar14;
        iVar14 = FUN_00276300(uVar8,uVar18,lParm1);
        local_a4 = *(uint *)(lParm1 + 0x78);
        ppuVar22 = *(ulong ***)(lParm1 + 0x48);
        ppuVar40 = (ulong **)CONCAT44(uVar23,iVar14);
        pbVar35 = (byte *)((long)(int)local_a4 + local_f0);
        if (ppuVar22 != (ulong **)0x0) {
          *(undefined8 *)(lParm1 + 0x48) = 0;
          local_90 = ppuVar22;
        }
        if (iVar14 != 0) {
          bVar50 = false;
          ppuVar22 = local_90;
          goto LAB_001f2d6d;
        }
      }
      else {
        pbVar35 = (byte *)((long)(int)uVar11 + local_f0);
        if (local_90 == (ulong **)0x0) {
          ppuVar40 = (ulong **)((ulong)uVar23 << 0x20);
          local_a4 = uVar11;
        }
        else {
          *(undefined8 *)(lParm1 + 0x48) = 0;
          ppuVar40 = (ulong **)((ulong)uVar23 << 0x20);
          local_a4 = uVar11;
        }
      }
    }
    lVar47 = _PyThreadState_Current;
    puVar21 = _Py_NoneStruct;
    uVar23 = (uint)((ulong)ppuVar40 >> 0x20);
    uVar26 = (ulong)*pbVar35;
    uVar42 = 0;
    pbVar36 = pbVar35 + 1;
    if (0x59 < *pbVar35) {
      uVar42 = (ulong)((uint)pbVar35[2] * 0x100 + (uint)pbVar35[1]);
      pbVar36 = pbVar35 + 3;
    }
LAB_001f0a21:
    pbVar35 = pbVar36;
    uVar11 = (uint)uVar42;
    bVar28 = (byte)uVar42;
    bVar32 = (byte)(uVar42 >> 8);
    iVar14 = (int)pbVar35;
    switch(uVar26) {
    default:
      uVar23 = PyFrame_GetLineNumber(lParm1);
      uVar49 = 2;
      __fprintf_chk(stderr,1,"XXX lineno: %d, opcode: %d\n",(ulong)uVar23,uVar26);
      PyErr_SetString();
      goto LAB_001f571f;
    case 1:
      goto code_r0x001f0aab;
    case 2:
      local_e0 = (undefined1 *)local_90[-2];
                    /* WARNING: Load size is inaccurate */
      auVar51 = shufpd(*(undefined *)(local_90 + -2),*(undefined *)(local_90 + -2),1);
      *(int *)(local_90 + -2) = SUB164(auVar51,0);
      *(undefined4 *)((long)local_90 + -0xc) = SUB164(auVar51 >> 0x20,0);
      *(int *)(local_90 + -1) = SUB164(auVar51 >> 0x40,0);
      *(undefined4 *)((long)local_90 + -4) = SUB164(auVar51 >> 0x60,0);
      uVar49 = (ulong)DAT_004a25b8;
      if (DAT_004a25b8 == 0) {
        *(int *)(lParm1 + 0x78) = iVar14 - iVar15;
                    /* WARNING: Could not recover jumptable at 0x001f1e8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar18 = (*(code *)(&PTR_LAB_0040cae0)[(ulong)*pbVar35])();
        return (ulong *)uVar18;
      }
      goto LAB_001f09e9;
    case 3:
      local_e0 = (undefined1 *)local_90[-2];
      puVar27 = local_90[-1];
      puVar45 = (undefined1 *)local_90[-3];
      *(undefined1 **)(local_90 + -1) = local_e0;
      *(undefined1 **)(local_90 + -2) = puVar45;
      local_90[-3] = puVar27;
      uVar49 = (ulong)DAT_004a25b8;
      if (DAT_004a25b8 == 0) {
        *(undefined4 *)(lParm1 + 0x78) = (int)(pbVar35 + -local_f0);
                    /* WARNING: Could not recover jumptable at 0x001f255b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar18 = (*(code *)(&PTR_LAB_0040cae0)[(ulong)*pbVar35])
                           (pbVar35 + -local_f0,(&PTR_LAB_0040cae0)[(ulong)*pbVar35],uVar26,uVar49,
                            pbVar35 + 1);
        return (ulong *)uVar18;
      }
      goto LAB_001f09e9;
    case 4:
      puVar27 = local_90[-1];
      *puVar27 = *puVar27 + 1;
      *local_90 = puVar27;
      uVar49 = (ulong)DAT_004a25b8;
      local_90 = local_90 + 1;
      if (DAT_004a25b8 == 0) {
        *(int *)(lParm1 + 0x78) = iVar14 - iVar15;
                    /* WARNING: Could not recover jumptable at 0x001f20df. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar18 = (*(code *)(&PTR_LAB_0040cae0)[(ulong)*pbVar35])();
        return (ulong *)uVar18;
      }
      goto LAB_001f09e9;
    case 5:
      local_e0 = (undefined1 *)local_90[-3];
                    /* WARNING: Load size is inaccurate */
                    /* WARNING: Load size is inaccurate */
                    /* WARNING: Load size is inaccurate */
      puVar45 = (undefined1 *)local_90[-4];
      auVar52 = shufpd(*(undefined *)(local_90 + -2),*(undefined *)(local_90 + -4),1);
      auVar51 = shufpd(*(undefined *)(local_90 + -4),*(undefined *)(local_90 + -2),1);
      *(int *)(local_90 + -4) = SUB164(auVar52,0);
      *(undefined4 *)((long)local_90 + -0x1c) = SUB164(auVar52 >> 0x20,0);
      *(int *)(local_90 + -3) = SUB164(auVar52 >> 0x40,0);
      *(undefined4 *)((long)local_90 + -0x14) = SUB164(auVar52 >> 0x60,0);
      *(int *)(local_90 + -2) = SUB164(auVar51,0);
      *(undefined4 *)((long)local_90 + -0xc) = SUB164(auVar51 >> 0x20,0);
      *(int *)(local_90 + -1) = SUB164(auVar51 >> 0x40,0);
      *(undefined4 *)((long)local_90 + -4) = SUB164(auVar51 >> 0x60,0);
      uVar49 = (ulong)DAT_004a25b8;
      if (DAT_004a25b8 == 0) {
        *(int *)(lParm1 + 0x78) = iVar14 - iVar15;
                    /* WARNING: Could not recover jumptable at 0x001fa67f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar18 = (*(code *)(&PTR_LAB_0040cae0)[(ulong)*pbVar35])();
        return (ulong *)uVar18;
      }
      goto LAB_001f09e9;
    case 9:
      uVar49 = (ulong)DAT_004a25b8;
      if (DAT_004a25b8 == 0) {
        *(int *)(lParm1 + 0x78) = iVar14 - iVar15;
        UNRECOVERED_JUMPTABLE = (code *)(&PTR_LAB_0040cae0)[(ulong)*pbVar35];
        goto LAB_001590ac;
      }
      goto LAB_001f09e9;
    case 10:
      puVar27 = local_90[-1];
      puVar45 = (undefined1 *)PyNumber_Positive();
      *puVar27 = *puVar27 - 1;
      if (*puVar27 == 0) {
        (**(code **)(puVar27[1] + 0x30))();
      }
      uVar23 = (uint)((ulong)ppuVar40 >> 0x20);
      *(undefined1 **)(local_90 + -1) = puVar45;
      if ((ulong *)puVar45 == (ulong *)0x0) {
        bVar50 = false;
        ppuVar22 = local_90;
        goto LAB_001f2d6d;
      }
      _Py_Ticker = _Py_Ticker - 1;
      ppuVar22 = local_90;
      if ((int)_Py_Ticker < 0) goto LAB_001f09c5;
      uVar49 = (ulong)DAT_004a25b8;
      if (DAT_004a25b8 == 0) {
        *(int *)(lParm1 + 0x78) = iVar14 - iVar15;
                    /* WARNING: Could not recover jumptable at 0x001f41ad. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar18 = (*(code *)(&PTR_LAB_0040cae0)[(ulong)*pbVar35])();
        return (ulong *)uVar18;
      }
      goto LAB_001f09e9;
    case 0xb:
      puVar27 = local_90[-1];
      puVar45 = (undefined1 *)PyNumber_Negative();
      *puVar27 = *puVar27 - 1;
      if (*puVar27 == 0) {
        (**(code **)(puVar27[1] + 0x30))();
      }
      uVar23 = (uint)((ulong)ppuVar40 >> 0x20);
      *(undefined1 **)(local_90 + -1) = puVar45;
      if ((ulong *)puVar45 == (ulong *)0x0) {
        bVar50 = false;
        ppuVar22 = local_90;
        goto LAB_001f2d6d;
      }
      _Py_Ticker = _Py_Ticker - 1;
      ppuVar22 = local_90;
      if ((int)_Py_Ticker < 0) goto LAB_001f09c5;
      uVar49 = (ulong)DAT_004a25b8;
      if (DAT_004a25b8 == 0) {
        *(int *)(lParm1 + 0x78) = iVar14 - iVar15;
                    /* WARNING: Could not recover jumptable at 0x001f30d6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar18 = (*(code *)(&PTR_LAB_0040cae0)[(ulong)*pbVar35])
                           ((ulong)*pbVar35,&PTR_LAB_0040cae0,(&PTR_LAB_0040cae0)[(ulong)*pbVar35],
                            uVar49,pbVar35 + 1);
        return (ulong *)uVar18;
      }
      goto LAB_001f09e9;
    case 0xc:
      puVar27 = local_90[-1];
      iVar14 = PyObject_IsTrue();
      *puVar27 = *puVar27 - 1;
      if (*puVar27 == 0) {
        (**(code **)(puVar27[1] + 0x30))();
      }
      uVar23 = (uint)((ulong)pbVar35 >> 0x20);
      if (iVar14 == 0) {
        _Py_TrueStruct._0_8_ = _Py_TrueStruct._0_8_ + 1;
        *(undefined1 **)(local_90 + -1) = _Py_TrueStruct;
        _Py_Ticker = _Py_Ticker - 1;
        if ((int)_Py_Ticker < 0) goto LAB_001f9870;
      }
      else {
        if (iVar14 < 1) {
          bVar50 = false;
          ppuVar22 = local_90 + -1;
          goto LAB_001f2d6d;
        }
        _Py_ZeroStruct._0_8_ = _Py_ZeroStruct._0_8_ + 1;
        *(undefined1 **)(local_90 + -1) = _Py_ZeroStruct;
        _Py_Ticker = _Py_Ticker - 1;
        if ((int)_Py_Ticker < 0) {
          ppuVar40 = (ulong **)((ulong)uVar23 << 0x20);
          ppuVar22 = local_90;
          goto LAB_001f09c5;
        }
      }
      uVar49 = (ulong)DAT_004a25b8;
      ppuVar40 = (ulong **)((ulong)pbVar35 & 0xffffffff00000000);
      if (DAT_004a25b8 == 0) {
        *(int *)(lParm1 + 0x78) = (int)pbVar35 - iVar15;
                    /* WARNING: Could not recover jumptable at 0x001f267e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar18 = (*(code *)(&PTR_LAB_0040cae0)[(ulong)*pbVar35])();
        return (ulong *)uVar18;
      }
      goto LAB_001f09e9;
    case 0xd:
      puVar27 = local_90[-1];
      puVar45 = (undefined1 *)PyObject_Repr();
      *puVar27 = *puVar27 - 1;
      if (*puVar27 == 0) {
        (**(code **)(puVar27[1] + 0x30))();
      }
      uVar23 = (uint)((ulong)ppuVar40 >> 0x20);
      *(undefined1 **)(local_90 + -1) = puVar45;
      if ((ulong *)puVar45 == (ulong *)0x0) {
        bVar50 = false;
        ppuVar22 = local_90;
        goto LAB_001f2d6d;
      }
      _Py_Ticker = _Py_Ticker - 1;
      ppuVar22 = local_90;
      if ((int)_Py_Ticker < 0) goto LAB_001f09c5;
      uVar49 = (ulong)DAT_004a25b8;
      if (DAT_004a25b8 == 0) {
        *(int *)(lParm1 + 0x78) = iVar14 - iVar15;
                    /* WARNING: Could not recover jumptable at 0x001fa70c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar18 = (*(code *)(&PTR_LAB_0040cae0)[(ulong)*pbVar35])();
        return (ulong *)uVar18;
      }
      goto LAB_001f09e9;
    case 0xf:
      puVar27 = local_90[-1];
      auVar51 = PyNumber_Invert();
      uVar18 = SUB168(auVar51 >> 0x40,0);
      puVar45 = (undefined1 *)SUB168(auVar51,0);
      *puVar27 = *puVar27 - 1;
      if (*puVar27 == 0) {
        (**(code **)(puVar27[1] + 0x30))();
        uVar18 = extraout_RDX_02;
      }
      uVar23 = (uint)((ulong)ppuVar40 >> 0x20);
      *(undefined1 **)(local_90 + -1) = puVar45;
      if ((ulong *)puVar45 == (ulong *)0x0) {
        bVar50 = false;
        ppuVar22 = local_90;
        goto LAB_001f2d6d;
      }
      _Py_Ticker = _Py_Ticker - 1;
      ppuVar22 = local_90;
      if ((int)_Py_Ticker < 0) goto LAB_001f09c5;
      uVar49 = (ulong)DAT_004a25b8;
      if (DAT_004a25b8 == 0) {
        *(int *)(lParm1 + 0x78) = iVar14 - iVar15;
                    /* WARNING: Could not recover jumptable at 0x001f424a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar18 = (*(code *)(&PTR_LAB_0040cae0)[(ulong)*pbVar35])
                           ((ulong)*pbVar35,(&PTR_LAB_0040cae0)[(ulong)*pbVar35],uVar18,uVar49,
                            pbVar35 + 1);
        return (ulong *)uVar18;
      }
      goto LAB_001f09e9;
    case 0x13:
      puVar27 = local_90[-2];
      local_e0 = (undefined1 *)local_90[-1];
      ppuVar22 = local_90 + -1;
      puVar45 = (undefined1 *)FUN_0027a170(puVar27,local_e0,_Py_NoneStruct);
      *puVar27 = *puVar27 - 1;
      if (*puVar27 == 0) {
        puVar21 = (undefined1 *)puVar27[1];
        if (*(code **)(puVar21 + 0x30) == FUN_00233e90) {
          if (puVar21 == PyFloat_Type) {
            *(ulong **)(puVar27 + 1) = DAT_00485738;
            DAT_00485738 = puVar27;
          }
          else {
            (**(code **)(puVar21 + 0x140))(puVar27);
          }
        }
        else {
          (**(code **)(puVar21 + 0x30))(puVar27);
        }
      }
      uVar49 = *(ulong *)local_e0;
      *(ulong *)local_e0 = uVar49 - 1;
      if (uVar49 - 1 == 0) {
        (**(code **)(((ulong *)local_e0)[1] + 0x30))();
      }
      uVar23 = (uint)((ulong)ppuVar40 >> 0x20);
      *(undefined1 **)(local_90 + -2) = puVar45;
      if ((ulong *)puVar45 == (ulong *)0x0) {
        bVar50 = false;
        goto LAB_001f2d6d;
      }
      _Py_Ticker = _Py_Ticker - 1;
      if ((int)_Py_Ticker < 0) goto LAB_001f09c5;
      uVar49 = (ulong)DAT_004a25b8;
      local_90 = ppuVar22;
      if (DAT_004a25b8 == 0) {
        *(int *)(lParm1 + 0x78) = iVar14 - iVar15;
                    /* WARNING: Could not recover jumptable at 0x001f27e9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar18 = (*(code *)(&PTR_LAB_0040cae0)[(ulong)*pbVar35])();
        return (ulong *)uVar18;
      }
      goto LAB_001f09e9;
    case 0x14:
      puVar27 = local_90[-2];
      local_e0 = (undefined1 *)local_90[-1];
      ppuVar22 = local_90 + -1;
      puVar45 = (undefined1 *)PyNumber_Multiply(puVar27);
      *puVar27 = *puVar27 - 1;
      if (*puVar27 == 0) {
        puVar21 = (undefined1 *)puVar27[1];
        if (*(code **)(puVar21 + 0x30) == FUN_00233e90) {
          if (puVar21 == PyFloat_Type) {
            *(ulong **)(puVar27 + 1) = DAT_00485738;
            DAT_00485738 = puVar27;
          }
          else {
            (**(code **)(puVar21 + 0x140))(puVar27);
          }
        }
        else {
          (**(code **)(puVar21 + 0x30))(puVar27);
        }
      }
      uVar49 = *(ulong *)local_e0;
      *(ulong *)local_e0 = uVar49 - 1;
      if (uVar49 - 1 == 0) {
        (**(code **)(((ulong *)local_e0)[1] + 0x30))();
      }
      uVar23 = (uint)((ulong)ppuVar40 >> 0x20);
      *(undefined1 **)(local_90 + -2) = puVar45;
      if ((ulong *)puVar45 == (ulong *)0x0) {
        bVar50 = false;
        goto LAB_001f2d6d;
      }
      _Py_Ticker = _Py_Ticker - 1;
      if ((int)_Py_Ticker < 0) goto LAB_001f09c5;
      uVar49 = (ulong)DAT_004a25b8;
      local_90 = ppuVar22;
      if (DAT_004a25b8 == 0) {
        *(int *)(lParm1 + 0x78) = iVar14 - iVar15;
                    /* WARNING: Could not recover jumptable at 0x001f1e39. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar18 = (*(code *)(&PTR_LAB_0040cae0)[(ulong)*pbVar35])();
        return (ulong *)uVar18;
      }
      goto LAB_001f09e9;
    case 0x15:
      if (_Py_QnewFlag != 0) goto code_r0x001f3d2f;
      puVar27 = local_90[-2];
      local_e0 = (undefined1 *)local_90[-1];
      ppuVar22 = local_90 + -1;
      puVar45 = (undefined1 *)FUN_002356b0(puVar27,local_e0,0x18);
      if (puVar45 == _Py_NotImplementedStruct) {
        puVar45 = (undefined1 *)FUN_00238a20(puVar27,local_e0,&DAT_00306978);
      }
      *puVar27 = *puVar27 - 1;
      if (*puVar27 == 0) {
        puVar21 = (undefined1 *)puVar27[1];
        if (*(code **)(puVar21 + 0x30) == FUN_00233e90) {
          if (puVar21 == PyFloat_Type) {
            *(ulong **)(puVar27 + 1) = DAT_00485738;
            DAT_00485738 = puVar27;
          }
          else {
            (**(code **)(puVar21 + 0x140))();
          }
        }
        else {
          (**(code **)(puVar21 + 0x30))();
        }
      }
      uVar49 = *(ulong *)local_e0;
      *(ulong *)local_e0 = uVar49 - 1;
      if (uVar49 - 1 == 0) {
        puVar21 = (undefined1 *)((ulong *)local_e0)[1];
        if (*(code **)(puVar21 + 0x30) == FUN_00233e90) {
          if (puVar21 == PyFloat_Type) {
            puVar27 = (ulong *)local_e0;
            *(ulong **)((ulong *)local_e0 + 1) = DAT_00485738;
            DAT_00485738 = puVar27;
          }
          else {
            (**(code **)(puVar21 + 0x140))();
          }
        }
        else {
          (**(code **)(puVar21 + 0x30))();
        }
      }
      uVar23 = (uint)((ulong)ppuVar40 >> 0x20);
      *(undefined1 **)(local_90 + -2) = puVar45;
      if ((ulong *)puVar45 == (ulong *)0x0) {
        bVar50 = false;
        goto LAB_001f2d6d;
      }
      _Py_Ticker = _Py_Ticker - 1;
      if ((int)_Py_Ticker < 0) goto LAB_001f09c5;
      uVar49 = (ulong)DAT_004a25b8;
      local_90 = ppuVar22;
      if (DAT_004a25b8 == 0) {
        *(int *)(lParm1 + 0x78) = iVar14 - iVar15;
                    /* WARNING: Could not recover jumptable at 0x001f2ab0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar18 = (*(code *)(&PTR_LAB_0040cae0)[(ulong)*pbVar35])();
        return (ulong *)uVar18;
      }
      goto LAB_001f09e9;
    case 0x16:
      local_e0 = (undefined1 *)local_90[-1];
      puVar27 = local_90[-2];
      ppuVar22 = local_90 + -1;
      if (((undefined1 *)puVar27[1] == PyString_Type) &&
         (((((undefined1 *)((ulong *)local_e0)[1])[0xab] & 8) == 0 ||
          ((undefined1 *)((ulong *)local_e0)[1] == PyString_Type)))) {
        puVar45 = (undefined1 *)PyString_Format(puVar27);
      }
      else {
        puVar45 = (undefined1 *)FUN_002356b0(puVar27,local_e0,0x20);
        if (puVar45 == _Py_NotImplementedStruct) {
          puVar45 = (undefined1 *)FUN_00238a20(puVar27,local_e0,&DAT_00320d58);
        }
      }
      *puVar27 = *puVar27 - 1;
      if (*puVar27 == 0) {
        (**(code **)(puVar27[1] + 0x30))(puVar27);
      }
      uVar49 = *(ulong *)local_e0;
      *(ulong *)local_e0 = uVar49 - 1;
      if (uVar49 - 1 == 0) {
        (**(code **)(((ulong *)local_e0)[1] + 0x30))(local_e0);
      }
      uVar23 = (uint)((ulong)ppuVar40 >> 0x20);
      *(undefined1 **)(local_90 + -2) = puVar45;
      if ((ulong *)puVar45 == (ulong *)0x0) {
        bVar50 = false;
        goto LAB_001f2d6d;
      }
      _Py_Ticker = _Py_Ticker - 1;
      if ((int)_Py_Ticker < 0) goto LAB_001f09c5;
      uVar49 = (ulong)DAT_004a25b8;
      local_90 = ppuVar22;
      if (DAT_004a25b8 == 0) {
        *(int *)(lParm1 + 0x78) = iVar14 - iVar15;
                    /* WARNING: Could not recover jumptable at 0x001f28c7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar18 = (*(code *)(&PTR_LAB_0040cae0)[(ulong)*pbVar35])();
        return (ulong *)uVar18;
      }
      goto LAB_001f09e9;
    case 0x17:
      puVar27 = local_90[-2];
      local_e0 = (undefined1 *)local_90[-1];
      if (((undefined1 *)puVar27[1] == PyInt_Type) &&
         ((undefined1 *)((ulong *)local_e0)[1] == PyInt_Type)) {
        uVar49 = puVar27[2] + ((ulong *)local_e0)[2];
        if (((long)(puVar27[2] ^ uVar49) < 0) && ((long)(((ulong *)local_e0)[2] ^ uVar49) < 0)) {
LAB_001f69b8:
          puVar45 = (undefined1 *)PyNumber_Add(puVar27);
        }
        else {
          puVar45 = (undefined1 *)PyInt_FromLong();
        }
        *puVar27 = *puVar27 - 1;
        if (*puVar27 == 0) {
          (**(code **)(puVar27[1] + 0x30))(puVar27);
        }
      }
      else {
        if (((undefined1 *)puVar27[1] != PyString_Type) ||
           ((undefined1 *)((ulong *)local_e0)[1] != PyString_Type)) goto LAB_001f69b8;
        puVar45 = (undefined1 *)FUN_002151d0(puVar27,local_e0,lParm1,pbVar35);
      }
      uVar49 = *(ulong *)local_e0;
      *(ulong *)local_e0 = uVar49 - 1;
      if (uVar49 - 1 == 0) {
        (**(code **)(((ulong *)local_e0)[1] + 0x30))();
      }
      uVar23 = (uint)((ulong)ppuVar40 >> 0x20);
      *(undefined1 **)(local_90 + -2) = puVar45;
      if ((ulong *)puVar45 == (ulong *)0x0) {
        bVar50 = false;
        ppuVar22 = local_90 + -1;
        goto LAB_001f2d6d;
      }
      _Py_Ticker = _Py_Ticker - 1;
      if ((int)_Py_Ticker < 0) goto LAB_001f77b0;
      uVar49 = (ulong)DAT_004a25b8;
      local_90 = local_90 + -1;
      if (DAT_004a25b8 == 0) {
        *(int *)(lParm1 + 0x78) = iVar14 - iVar15;
                    /* WARNING: Could not recover jumptable at 0x001f17fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar18 = (*(code *)(&PTR_LAB_0040cae0)[(ulong)*pbVar35])();
        return (ulong *)uVar18;
      }
      goto LAB_001f09e9;
    case 0x18:
      local_e0 = (undefined1 *)local_90[-1];
      puVar27 = local_90[-2];
      ppuVar22 = local_90 + -1;
      if (((undefined1 *)puVar27[1] == PyInt_Type) &&
         ((undefined1 *)((ulong *)local_e0)[1] == PyInt_Type)) {
        uVar49 = puVar27[2] - ((ulong *)local_e0)[2];
        if (((long)(puVar27[2] ^ uVar49) < 0) && (-1 < (long)(((ulong *)local_e0)[2] ^ uVar49)))
        goto LAB_001f6f3e;
        puVar45 = (undefined1 *)PyInt_FromLong();
      }
      else {
LAB_001f6f3e:
        puVar45 = (undefined1 *)FUN_002356b0(puVar27,local_e0,8);
        if (puVar45 == _Py_NotImplementedStruct) {
          puVar45 = (undefined1 *)FUN_00238a20(puVar27,local_e0,&DAT_002fc0f7);
        }
      }
      *puVar27 = *puVar27 - 1;
      if (*puVar27 == 0) {
        (**(code **)(puVar27[1] + 0x30))(puVar27);
      }
      uVar49 = *(ulong *)local_e0;
      *(ulong *)local_e0 = uVar49 - 1;
      if (uVar49 - 1 == 0) {
        (**(code **)(((ulong *)local_e0)[1] + 0x30))();
      }
      uVar23 = (uint)((ulong)ppuVar40 >> 0x20);
      *(undefined1 **)(local_90 + -2) = puVar45;
      if ((ulong *)puVar45 == (ulong *)0x0) {
        bVar50 = false;
        goto LAB_001f2d6d;
      }
      _Py_Ticker = _Py_Ticker - 1;
      if ((int)_Py_Ticker < 0) goto LAB_001f09c5;
      uVar49 = (ulong)DAT_004a25b8;
      local_90 = ppuVar22;
      if (DAT_004a25b8 == 0) {
        *(int *)(lParm1 + 0x78) = iVar14 - iVar15;
                    /* WARNING: Could not recover jumptable at 0x001f1c4a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar18 = (*(code *)(&PTR_LAB_0040cae0)[(ulong)*pbVar35])();
        return (ulong *)uVar18;
      }
      goto LAB_001f09e9;
    case 0x19:
      local_e0 = (undefined1 *)local_90[-1];
      puVar27 = local_90[-2];
      if (((undefined1 *)puVar27[1] == PyList_Type) &&
         ((undefined1 *)((ulong *)local_e0)[1] == PyInt_Type)) {
        if ((PyInt_Type._168_8_ & 0x800000) == 0) {
          if ((PyInt_Type._168_8_ & 0x1000000) == 0) {
            uVar49 = PyInt_AsLong();
          }
          else {
            uVar49 = PyLong_AsSsize_t();
          }
        }
        else {
          uVar49 = ((ulong *)local_e0)[2];
        }
        if ((((long)uVar49 < 0) && (uVar49 = uVar49 + puVar27[2], (long)uVar49 < 0)) ||
           ((long)puVar27[2] <= (long)uVar49)) goto LAB_001f60a1;
        puVar45 = *(undefined1 **)(puVar27[3] + uVar49 * 8);
        *(ulong *)puVar45 = *(ulong *)puVar45 + 1;
        *puVar27 = *puVar27 - 1;
        if (*puVar27 == 0) goto LAB_001f72e0;
        uVar49 = *(ulong *)local_e0;
        *(ulong *)local_e0 = uVar49 - 1;
        if (uVar49 - 1 == 0) goto LAB_001f7810;
        *(undefined1 **)(local_90 + -2) = puVar45;
      }
      else {
LAB_001f60a1:
        puVar45 = (undefined1 *)PyObject_GetItem();
        *puVar27 = *puVar27 - 1;
        if (*puVar27 == 0) {
LAB_001f72e0:
          (**(code **)(puVar27[1] + 0x30))();
        }
        uVar49 = *(ulong *)local_e0;
        *(ulong *)local_e0 = uVar49 - 1;
        if (uVar49 - 1 == 0) {
LAB_001f7810:
          (**(code **)(((ulong *)local_e0)[1] + 0x30))();
        }
        uVar23 = (uint)((ulong)ppuVar40 >> 0x20);
        *(undefined1 **)(local_90 + -2) = puVar45;
        if ((ulong *)puVar45 == (ulong *)0x0) {
          bVar50 = false;
          ppuVar22 = local_90 + -1;
          goto LAB_001f2d6d;
        }
      }
      _Py_Ticker = _Py_Ticker - 1;
      if (-1 < (int)_Py_Ticker) {
        uVar49 = (ulong)DAT_004a25b8;
        local_90 = local_90 + -1;
        if (DAT_004a25b8 == 0) {
          *(int *)(lParm1 + 0x78) = iVar14 - iVar15;
                    /* WARNING: Could not recover jumptable at 0x001f14e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar18 = (*(code *)(&PTR_LAB_0040cae0)[(ulong)*pbVar35])();
          return (ulong *)uVar18;
        }
        goto LAB_001f09e9;
      }
LAB_001f77b0:
      ppuVar22 = local_90 + -1;
      goto LAB_001f09c5;
    case 0x1a:
      puVar27 = local_90[-2];
      local_e0 = (undefined1 *)local_90[-1];
      ppuVar22 = local_90 + -1;
      puVar45 = (undefined1 *)FUN_002356b0(puVar27,local_e0,0x110);
      if (puVar45 == _Py_NotImplementedStruct) {
        puVar45 = (undefined1 *)FUN_00238a20(puVar27,local_e0,&DAT_00306977);
      }
      *puVar27 = *puVar27 - 1;
      if (*puVar27 == 0) {
        (**(code **)(puVar27[1] + 0x30))();
      }
      uVar49 = *(ulong *)local_e0;
      *(ulong *)local_e0 = uVar49 - 1;
      if (uVar49 - 1 == 0) {
        (**(code **)(((ulong *)local_e0)[1] + 0x30))();
      }
      uVar23 = (uint)((ulong)ppuVar40 >> 0x20);
      *(undefined1 **)(local_90 + -2) = puVar45;
      if ((ulong *)puVar45 == (ulong *)0x0) {
        bVar50 = false;
        goto LAB_001f2d6d;
      }
      _Py_Ticker = _Py_Ticker - 1;
      if ((int)_Py_Ticker < 0) goto LAB_001f09c5;
      uVar49 = (ulong)DAT_004a25b8;
      local_90 = ppuVar22;
      if (DAT_004a25b8 == 0) {
        *(int *)(lParm1 + 0x78) = iVar14 - iVar15;
                    /* WARNING: Could not recover jumptable at 0x001f3804. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar18 = (*(code *)(&PTR_LAB_0040cae0)[(ulong)*pbVar35])();
        return (ulong *)uVar18;
      }
      goto LAB_001f09e9;
    case 0x1b:
code_r0x001f3d2f:
      puVar27 = local_90[-2];
      local_e0 = (undefined1 *)local_90[-1];
      ppuVar22 = local_90 + -1;
      puVar45 = (undefined1 *)FUN_002356b0(puVar27,local_e0,0x118);
      if (puVar45 == _Py_NotImplementedStruct) {
        puVar45 = (undefined1 *)FUN_00238a20(puVar27,local_e0,&DAT_00306978);
      }
      *puVar27 = *puVar27 - 1;
      if (*puVar27 == 0) {
        (**(code **)(puVar27[1] + 0x30))();
      }
      uVar49 = *(ulong *)local_e0;
      *(ulong *)local_e0 = uVar49 - 1;
      if (uVar49 - 1 == 0) {
        (**(code **)(((ulong *)local_e0)[1] + 0x30))();
      }
      uVar23 = (uint)((ulong)ppuVar40 >> 0x20);
      *(undefined1 **)(local_90 + -2) = puVar45;
      if ((ulong *)puVar45 == (ulong *)0x0) {
        bVar50 = false;
        goto LAB_001f2d6d;
      }
      _Py_Ticker = _Py_Ticker - 1;
      if ((int)_Py_Ticker < 0) goto LAB_001f09c5;
      uVar49 = (ulong)DAT_004a25b8;
      local_90 = ppuVar22;
      if (DAT_004a25b8 == 0) {
        *(int *)(lParm1 + 0x78) = iVar14 - iVar15;
                    /* WARNING: Could not recover jumptable at 0x001f3df0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar18 = (*(code *)(&PTR_LAB_0040cae0)[(ulong)*pbVar35])();
        return (ulong *)uVar18;
      }
      goto LAB_001f09e9;
    case 0x1c:
      puVar27 = local_90[-2];
      local_e0 = (undefined1 *)local_90[-1];
      ppuVar22 = local_90 + -1;
      puVar45 = (undefined1 *)PyNumber_InPlaceFloorDivide();
      *puVar27 = *puVar27 - 1;
      if (*puVar27 == 0) {
        (**(code **)(puVar27[1] + 0x30))();
      }
      uVar49 = *(ulong *)local_e0;
      *(ulong *)local_e0 = uVar49 - 1;
      if (uVar49 - 1 == 0) {
        (**(code **)(((ulong *)local_e0)[1] + 0x30))();
      }
      uVar23 = (uint)((ulong)ppuVar40 >> 0x20);
      *(undefined1 **)(local_90 + -2) = puVar45;
      if ((ulong *)puVar45 == (ulong *)0x0) {
        bVar50 = false;
        goto LAB_001f2d6d;
      }
      _Py_Ticker = _Py_Ticker - 1;
      if ((int)_Py_Ticker < 0) goto LAB_001f09c5;
      uVar49 = (ulong)DAT_004a25b8;
      local_90 = ppuVar22;
      if (DAT_004a25b8 == 0) {
        *(int *)(lParm1 + 0x78) = iVar14 - iVar15;
                    /* WARNING: Could not recover jumptable at 0x001f4bf5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar18 = (*(code *)(&PTR_LAB_0040cae0)[(ulong)*pbVar35])();
        return (ulong *)uVar18;
      }
      goto LAB_001f09e9;
    case 0x1d:
      goto LAB_00159a05;
    case 0x1e:
    case 0x1f:
    case 0x20:
    case 0x21:
      local_e0 = (undefined1 *)0x0;
      if ((uVar26 & 2) == 0) {
        local_e0 = (undefined1 *)local_90[-1];
        local_90 = local_90 + -1;
      }
      if ((uVar26 & 1) == 0) {
        local_c8 = (ulong **)0x0;
        ppuVar22 = local_90;
      }
      else {
        local_c8 = (ulong **)local_90[-1];
        ppuVar22 = local_90 + -1;
      }
      puVar27 = ppuVar22[-1];
      if ((*(long *)(puVar27[1] + 0x68) == 0) ||
         (*(long *)(*(long *)(puVar27[1] + 0x68) + 0x20) == 0)) {
LAB_001f7f2f:
        plVar30 = (long *)PySlice_New(local_c8,local_e0,0);
        if (plVar30 == (long *)0x0) {
          puVar45 = (undefined1 *)0x0;
        }
        else {
          puVar45 = (undefined1 *)PyObject_GetItem(puVar27,plVar30);
          *plVar30 = *plVar30 + -1;
          if (*plVar30 == 0) {
            (**(code **)(plVar30[1] + 0x30))(plVar30);
          }
        }
      }
      else {
        if (local_c8 != (ulong **)0x0) {
          uVar49 = *(ulong *)((long)local_c8[1] + 0xa8);
          if (((uVar49 & 0x1800000) == 0) &&
             (((lVar47 = *(long *)((long)local_c8[1] + 0x60), lVar47 == 0 ||
               ((uVar49 & 0x20000) == 0)) || (*(long *)(lVar47 + 0x130) == 0)))) goto LAB_001f7f2f;
        }
        if ((ulong *)local_e0 != (ulong *)0x0) {
          uVar49 = *(ulong *)(((ulong *)local_e0)[1] + 0xa8);
          if (((uVar49 & 0x1800000) == 0) &&
             (((lVar47 = *(long *)(((ulong *)local_e0)[1] + 0x60), lVar47 == 0 ||
               ((uVar49 & 0x20000) == 0)) || (*(long *)(lVar47 + 0x130) == 0)))) goto LAB_001f7f2f;
        }
        local_48 = (undefined1 *)0x0;
        local_40 = (ulong *)0x7fffffffffffffff;
        iVar48 = _PyEval_SliceIndex(local_c8);
        if ((iVar48 == 0) || (iVar48 = _PyEval_SliceIndex(local_e0), iVar48 == 0)) {
          puVar45 = (undefined1 *)0x0;
        }
        else {
          puVar45 = (undefined1 *)PySequence_GetSlice(puVar27,local_48,local_40);
        }
      }
      *puVar27 = *puVar27 - 1;
      if (*puVar27 == 0) {
        (**(code **)(puVar27[1] + 0x30))(puVar27);
      }
      if ((local_c8 != (ulong **)0x0) &&
         (uVar49 = (ulong)*local_c8, *(ulong *)local_c8 = uVar49 - 1, uVar49 - 1 == 0)) {
        (**(code **)((long)local_c8[1] + 0x30))(local_c8);
      }
      if (((ulong *)local_e0 != (ulong *)0x0) &&
         (uVar49 = *(ulong *)local_e0, *(ulong *)local_e0 = uVar49 - 1, uVar49 - 1 == 0)) {
        (**(code **)(((ulong *)local_e0)[1] + 0x30))();
      }
      uVar23 = (uint)((ulong)ppuVar40 >> 0x20);
      *(undefined1 **)(ppuVar22 + -1) = puVar45;
      if ((ulong *)puVar45 == (ulong *)0x0) {
        bVar50 = false;
        goto LAB_001f2d6d;
      }
      _Py_Ticker = _Py_Ticker - 1;
      if ((int)_Py_Ticker < 0) goto LAB_001f09c5;
      uVar49 = (ulong)DAT_004a25b8;
      local_90 = ppuVar22;
      if (DAT_004a25b8 == 0) {
        *(int *)(lParm1 + 0x78) = iVar14 - iVar15;
                    /* WARNING: Could not recover jumptable at 0x001f242f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar18 = (*(code *)(&PTR_LAB_0040cae0)[(ulong)*pbVar35])();
        return (ulong *)uVar18;
      }
      goto LAB_001f09e9;
    case 0x28:
    case 0x29:
    case 0x2a:
    case 0x2b:
      if ((uVar26 & 2) == 0) {
        local_e0 = (undefined1 *)0x0;
      }
      else {
        local_e0 = (undefined1 *)local_90[-1];
        local_90 = local_90 + -1;
      }
      puVar27 = (ulong *)0x0;
      if ((uVar26 & 1) != 0) {
        puVar27 = local_90[-1];
        local_90 = local_90 + -1;
      }
      puVar25 = local_90[-1];
      ppuVar22 = local_90 + -2;
      puVar31 = local_90[-2];
      uVar12 = FUN_00237050(puVar25,puVar27,local_e0);
      *puVar31 = *puVar31 - 1;
      ppuVar40 = (ulong **)CONCAT44(uVar23,uVar12);
      if (*puVar31 == 0) {
        (**(code **)(puVar31[1] + 0x30))();
      }
      *puVar25 = *puVar25 - 1;
      if (*puVar25 == 0) {
        (**(code **)(puVar25[1] + 0x30))();
      }
      if ((puVar27 != (ulong *)0x0) && (*puVar27 = *puVar27 - 1, *puVar27 == 0)) {
        (**(code **)(puVar27[1] + 0x30))();
      }
      if (((ulong *)local_e0 != (ulong *)0x0) &&
         (uVar49 = *(ulong *)local_e0, *(ulong *)local_e0 = uVar49 - 1, uVar49 - 1 == 0)) {
        (**(code **)(((ulong *)local_e0)[1] + 0x30))();
      }
      uVar23 = (uint)((ulong)ppuVar40 >> 0x20);
      if ((int)ppuVar40 == 0) goto LAB_001f44de;
      bVar50 = false;
      goto LAB_001f2d6d;
    case 0x32:
    case 0x33:
    case 0x34:
    case 0x35:
      if ((uVar26 & 2) == 0) {
        local_e0 = (undefined1 *)local_90[-1];
        local_90 = local_90 + -1;
      }
      else {
        local_e0 = (undefined1 *)0x0;
      }
      if ((uVar26 & 1) == 0) {
        puVar27 = local_90[-1];
        ppuVar22 = local_90 + -1;
        uVar12 = FUN_00237050(puVar27,0,local_e0);
        *puVar27 = *puVar27 - 1;
        ppuVar40 = (ulong **)CONCAT44(uVar23,uVar12);
        if (*puVar27 == 0) {
          puVar25 = (ulong *)0x0;
          goto LAB_0015a088;
        }
      }
      else {
        puVar25 = local_90[-1];
        puVar27 = local_90[-2];
        ppuVar22 = local_90 + -2;
        uVar12 = FUN_00237050(puVar27,puVar25,local_e0,0);
        *puVar27 = *puVar27 - 1;
        ppuVar40 = (ulong **)CONCAT44(uVar23,uVar12);
        if (*puVar27 == 0) {
LAB_0015a088:
          (**(code **)(puVar27[1] + 0x30))();
        }
        if ((puVar25 != (ulong *)0x0) && (*puVar25 = *puVar25 - 1, *puVar25 == 0)) {
          (**(code **)(puVar25[1] + 0x30))();
        }
      }
      if (((ulong *)local_e0 != (ulong *)0x0) &&
         (uVar49 = *(ulong *)local_e0, *(ulong *)local_e0 = uVar49 - 1, uVar49 - 1 == 0)) {
        (**(code **)(((ulong *)local_e0)[1] + 0x30))();
      }
      uVar23 = (uint)((ulong)ppuVar40 >> 0x20);
      if ((int)ppuVar40 != 0) {
        bVar50 = false;
        goto LAB_001f2d6d;
      }
LAB_001f44de:
      _Py_Ticker = _Py_Ticker - 1;
      if ((int)_Py_Ticker < 0) goto LAB_001f09c5;
      uVar49 = (ulong)DAT_004a25b8;
      local_90 = ppuVar22;
      if (DAT_004a25b8 == 0) {
        *(undefined4 *)(lParm1 + 0x78) = (int)(pbVar35 + -local_f0);
                    /* WARNING: Could not recover jumptable at 0x001f4530. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar18 = (*(code *)(&PTR_LAB_0040cae0)[(ulong)*pbVar35])
                           (&_Py_Ticker,(&PTR_LAB_0040cae0)[(ulong)*pbVar35],pbVar35 + -local_f0,
                            &PTR_LAB_0040cae0,pbVar35 + 1);
        return (ulong *)uVar18;
      }
      goto LAB_001f09e9;
    case 0x36:
      puVar27 = local_90[-2];
      local_e0 = (undefined1 *)local_90[-1];
      ppuVar22 = local_90 + -2;
      iVar48 = PyDict_SetItem(local_90[-3],local_e0,puVar27);
      *puVar27 = *puVar27 - 1;
      if (*puVar27 == 0) {
        (**(code **)(puVar27[1] + 0x30))();
      }
      uVar49 = *(ulong *)local_e0;
      *(ulong *)local_e0 = uVar49 - 1;
      if (uVar49 - 1 == 0) {
        (**(code **)(((ulong *)local_e0)[1] + 0x30))();
      }
      uVar23 = (uint)(uVar49 >> 0x20);
      if (iVar48 != 0) {
        bVar50 = false;
        goto LAB_001f2d6d;
      }
      _Py_Ticker = _Py_Ticker - 1;
      if ((int)_Py_Ticker < 0) goto LAB_001f7deb;
      ppuVar40 = (ulong **)(uVar49 & 0xffffffff00000000);
      uVar49 = (ulong)DAT_004a25b8;
      local_90 = ppuVar22;
      if (DAT_004a25b8 == 0) {
        *(int *)(lParm1 + 0x78) = iVar14 - iVar15;
                    /* WARNING: Could not recover jumptable at 0x001f2971. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar18 = (*(code *)(&PTR_LAB_0040cae0)[(ulong)*pbVar35])();
        return (ulong *)uVar18;
      }
      goto LAB_001f09e9;
    case 0x37:
      puVar27 = local_90[-2];
      local_e0 = (undefined1 *)local_90[-1];
      ppuVar22 = local_90 + -1;
      if (((undefined1 *)puVar27[1] == PyInt_Type) &&
         ((undefined1 *)((ulong *)local_e0)[1] == PyInt_Type)) {
        uVar49 = puVar27[2] + ((ulong *)local_e0)[2];
        if (((long)(puVar27[2] ^ uVar49) < 0) && ((long)(((ulong *)local_e0)[2] ^ uVar49) < 0)) {
LAB_001f6d54:
          puVar45 = (undefined1 *)PyNumber_InPlaceAdd(puVar27);
        }
        else {
          puVar45 = (undefined1 *)PyInt_FromLong();
        }
        *puVar27 = *puVar27 - 1;
        if (*puVar27 == 0) {
          (**(code **)(puVar27[1] + 0x30))(puVar27);
        }
      }
      else {
        if (((undefined1 *)puVar27[1] != PyString_Type) ||
           ((undefined1 *)((ulong *)local_e0)[1] != PyString_Type)) goto LAB_001f6d54;
        puVar45 = (undefined1 *)FUN_002151d0(puVar27,local_e0,lParm1);
      }
      uVar49 = *(ulong *)local_e0;
      *(ulong *)local_e0 = uVar49 - 1;
      if (uVar49 - 1 == 0) {
        (**(code **)(((ulong *)local_e0)[1] + 0x30))();
      }
      uVar23 = (uint)((ulong)ppuVar40 >> 0x20);
      *(undefined1 **)(local_90 + -2) = puVar45;
      if ((ulong *)puVar45 == (ulong *)0x0) {
        bVar50 = false;
        goto LAB_001f2d6d;
      }
      _Py_Ticker = _Py_Ticker - 1;
      if ((int)_Py_Ticker < 0) goto LAB_001f09c5;
      uVar49 = (ulong)DAT_004a25b8;
      local_90 = ppuVar22;
      if (DAT_004a25b8 == 0) {
        *(int *)(lParm1 + 0x78) = iVar14 - iVar15;
                    /* WARNING: Could not recover jumptable at 0x001f1f6f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar18 = (*(code *)(&PTR_LAB_0040cae0)[(ulong)*pbVar35])();
        return (ulong *)uVar18;
      }
      goto LAB_001f09e9;
    case 0x38:
      local_e0 = (undefined1 *)local_90[-1];
      puVar27 = local_90[-2];
      ppuVar22 = local_90 + -1;
      if (((undefined1 *)puVar27[1] == PyInt_Type) &&
         ((undefined1 *)((ulong *)local_e0)[1] == PyInt_Type)) {
        uVar49 = puVar27[2] - ((ulong *)local_e0)[2];
        if (((long)(puVar27[2] ^ uVar49) < 0) && (-1 < (long)(((ulong *)local_e0)[2] ^ uVar49)))
        goto LAB_001f8902;
        puVar45 = (undefined1 *)PyInt_FromLong();
      }
      else {
LAB_001f8902:
        puVar45 = (undefined1 *)PyNumber_InPlaceSubtract(puVar27);
      }
      *puVar27 = *puVar27 - 1;
      if (*puVar27 == 0) {
        (**(code **)(puVar27[1] + 0x30))(puVar27);
      }
      uVar49 = *(ulong *)local_e0;
      *(ulong *)local_e0 = uVar49 - 1;
      if (uVar49 - 1 == 0) {
        (**(code **)(((ulong *)local_e0)[1] + 0x30))();
      }
      uVar23 = (uint)((ulong)ppuVar40 >> 0x20);
      *(undefined1 **)(local_90 + -2) = puVar45;
      if ((ulong *)puVar45 == (ulong *)0x0) {
        bVar50 = false;
        goto LAB_001f2d6d;
      }
      _Py_Ticker = _Py_Ticker - 1;
      if ((int)_Py_Ticker < 0) goto LAB_001f09c5;
      uVar49 = (ulong)DAT_004a25b8;
      local_90 = ppuVar22;
      if (DAT_004a25b8 == 0) {
        *(int *)(lParm1 + 0x78) = iVar14 - iVar15;
                    /* WARNING: Could not recover jumptable at 0x001f5211. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar18 = (*(code *)(&PTR_LAB_0040cae0)[(ulong)*pbVar35])();
        return (ulong *)uVar18;
      }
      goto LAB_001f09e9;
    case 0x39:
      puVar27 = local_90[-2];
      local_e0 = (undefined1 *)local_90[-1];
      ppuVar22 = local_90 + -1;
      puVar45 = (undefined1 *)PyNumber_InPlaceMultiply();
      *puVar27 = *puVar27 - 1;
      if (*puVar27 == 0) {
        (**(code **)(puVar27[1] + 0x30))();
      }
      uVar49 = *(ulong *)local_e0;
      *(ulong *)local_e0 = uVar49 - 1;
      if (uVar49 - 1 == 0) {
        (**(code **)(((ulong *)local_e0)[1] + 0x30))();
      }
      uVar23 = (uint)((ulong)ppuVar40 >> 0x20);
      *(undefined1 **)(local_90 + -2) = puVar45;
      if ((ulong *)puVar45 == (ulong *)0x0) {
        bVar50 = false;
        goto LAB_001f2d6d;
      }
      _Py_Ticker = _Py_Ticker - 1;
      if ((int)_Py_Ticker < 0) goto LAB_001f09c5;
      uVar49 = (ulong)DAT_004a25b8;
      local_90 = ppuVar22;
      if (DAT_004a25b8 == 0) {
        *(int *)(lParm1 + 0x78) = iVar14 - iVar15;
                    /* WARNING: Could not recover jumptable at 0x001f5471. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar18 = (*(code *)(&PTR_LAB_0040cae0)[(ulong)*pbVar35])();
        return (ulong *)uVar18;
      }
      goto LAB_001f09e9;
    case 0x3a:
      if (_Py_QnewFlag == 0) {
        puVar27 = local_90[-2];
        ppuVar22 = local_90 + -1;
        local_e0 = (undefined1 *)local_90[-1];
        puVar45 = (undefined1 *)PyNumber_InPlaceDivide();
        *puVar27 = *puVar27 - 1;
        if (*puVar27 == 0) {
          (**(code **)(puVar27[1] + 0x30))();
        }
        uVar49 = *(ulong *)local_e0;
        *(ulong *)local_e0 = uVar49 - 1;
        if (uVar49 - 1 == 0) {
          (**(code **)(((ulong *)local_e0)[1] + 0x30))();
        }
        uVar23 = (uint)((ulong)ppuVar40 >> 0x20);
        *(undefined1 **)(local_90 + -2) = puVar45;
        if ((ulong *)puVar45 == (ulong *)0x0) {
          bVar50 = false;
          goto LAB_001f2d6d;
        }
        _Py_Ticker = _Py_Ticker - 1;
        if ((int)_Py_Ticker < 0) goto LAB_001f09c5;
        uVar49 = (ulong)DAT_004a25b8;
        local_90 = ppuVar22;
        if (DAT_004a25b8 == 0) {
          *(int *)(lParm1 + 0x78) = iVar14 - iVar15;
                    /* WARNING: Could not recover jumptable at 0x001f53a6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar18 = (*(code *)(&PTR_LAB_0040cae0)[(ulong)*pbVar35])();
          return (ulong *)uVar18;
        }
      }
      else {
LAB_00159a05:
        puVar27 = local_90[-2];
        local_e0 = (undefined1 *)local_90[-1];
        puVar45 = (undefined1 *)PyNumber_InPlaceTrueDivide(puVar27);
        *puVar27 = *puVar27 - 1;
        if (*puVar27 == 0) {
          (**(code **)(puVar27[1] + 0x30))(puVar27);
        }
        uVar49 = *(ulong *)local_e0;
        *(ulong *)local_e0 = uVar49 - 1;
        if (uVar49 - 1 == 0) {
          (**(code **)(((ulong *)local_e0)[1] + 0x30))();
        }
        uVar23 = (uint)((ulong)ppuVar40 >> 0x20);
        ppuVar22 = local_90 + -1;
        *(undefined1 **)(local_90 + -2) = puVar45;
        if ((ulong *)puVar45 == (ulong *)0x0) {
          bVar50 = false;
          goto LAB_001f2d6d;
        }
        _Py_Ticker = _Py_Ticker - 1;
        if ((int)_Py_Ticker < 0) goto LAB_001f09c5;
        uVar49 = (ulong)DAT_004a25b8;
        local_90 = ppuVar22;
        if (DAT_004a25b8 == 0) {
          *(int *)(lParm1 + 0x78) = iVar14 - iVar15;
          UNRECOVERED_JUMPTABLE = (code *)(&PTR_LAB_0040cae0)[(ulong)*pbVar35];
LAB_001590ac:
                    /* WARNING: Could not recover jumptable at 0x001590ae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar18 = (*UNRECOVERED_JUMPTABLE)(UNRECOVERED_JUMPTABLE);
          return (ulong *)uVar18;
        }
      }
      goto LAB_001f09e9;
    case 0x3b:
      puVar27 = local_90[-2];
      local_e0 = (undefined1 *)local_90[-1];
      ppuVar22 = local_90 + -1;
      puVar45 = (undefined1 *)PyNumber_InPlaceRemainder();
      *puVar27 = *puVar27 - 1;
      if (*puVar27 == 0) {
        (**(code **)(puVar27[1] + 0x30))();
      }
      uVar49 = *(ulong *)local_e0;
      *(ulong *)local_e0 = uVar49 - 1;
      if (uVar49 - 1 == 0) {
        (**(code **)(((ulong *)local_e0)[1] + 0x30))();
      }
      uVar23 = (uint)((ulong)ppuVar40 >> 0x20);
      *(undefined1 **)(local_90 + -2) = puVar45;
      if ((ulong *)puVar45 == (ulong *)0x0) {
        bVar50 = false;
        goto LAB_001f2d6d;
      }
      _Py_Ticker = _Py_Ticker - 1;
      if ((int)_Py_Ticker < 0) goto LAB_001f09c5;
      uVar49 = (ulong)DAT_004a25b8;
      local_90 = ppuVar22;
      if (DAT_004a25b8 == 0) {
        *(int *)(lParm1 + 0x78) = iVar14 - iVar15;
                    /* WARNING: Could not recover jumptable at 0x001f8977. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar18 = (*(code *)(&PTR_LAB_0040cae0)[(ulong)*pbVar35])();
        return (ulong *)uVar18;
      }
      goto LAB_001f09e9;
    case 0x3c:
      puVar27 = local_90[-2];
      puVar25 = local_90[-3];
      ppuVar22 = local_90 + -3;
      local_e0 = (undefined1 *)local_90[-1];
      iVar14 = PyObject_SetItem(puVar27,local_e0,puVar25);
      *puVar25 = *puVar25 - 1;
      if (*puVar25 == 0) {
        (**(code **)(puVar25[1] + 0x30))();
      }
      *puVar27 = *puVar27 - 1;
      if (*puVar27 == 0) {
        (**(code **)(puVar27[1] + 0x30))();
      }
      uVar23 = (uint)(*(ulong *)local_e0 >> 0x20);
      uVar49 = *(ulong *)local_e0 - 1;
      *(ulong *)local_e0 = uVar49;
      if (uVar49 == 0) {
        (**(code **)(((ulong *)local_e0)[1] + 0x30))();
        uVar23 = (uint)((ulong)pbVar35 >> 0x20);
      }
      if (iVar14 != 0) {
        bVar50 = false;
        goto LAB_001f2d6d;
      }
      _Py_Ticker = _Py_Ticker - 1;
      local_90 = ppuVar22;
      if ((int)_Py_Ticker < 0) {
LAB_001f9870:
        ppuVar40 = (ulong **)((ulong)uVar23 << 0x20);
        ppuVar22 = local_90;
        goto LAB_001f09c5;
      }
      if (DAT_004a25b8 == 0) {
        *(int *)(lParm1 + 0x78) = (int)pbVar35 - iVar15;
                    /* WARNING: Could not recover jumptable at 0x001f1d87. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar18 = (*(code *)(&PTR_LAB_0040cae0)[(ulong)*pbVar35])();
        return (ulong *)uVar18;
      }
      uVar49 = (ulong)DAT_004a25b8;
      ppuVar40 = (ulong **)((ulong)uVar23 << 0x20);
      local_90 = ppuVar22;
      goto LAB_001f09e9;
    case 0x3d:
      puVar27 = local_90[-2];
      local_e0 = (undefined1 *)local_90[-1];
      ppuVar22 = local_90 + -2;
      uVar12 = PyObject_DelItem();
      *puVar27 = *puVar27 - 1;
      ppuVar40 = (ulong **)CONCAT44(uVar23,uVar12);
      if (*puVar27 == 0) {
        (**(code **)(puVar27[1] + 0x30))();
      }
      uVar49 = *(ulong *)local_e0;
      *(ulong *)local_e0 = uVar49 - 1;
      if (uVar49 - 1 == 0) {
        (**(code **)(((ulong *)local_e0)[1] + 0x30))();
      }
      uVar23 = (uint)((ulong)ppuVar40 >> 0x20);
      if ((int)ppuVar40 != 0) {
        bVar50 = false;
        goto LAB_001f2d6d;
      }
      _Py_Ticker = _Py_Ticker - 1;
      if ((int)_Py_Ticker < 0) goto LAB_001f09c5;
      uVar49 = (ulong)DAT_004a25b8;
      local_90 = ppuVar22;
      if (DAT_004a25b8 == 0) {
        *(int *)(lParm1 + 0x78) = iVar14 - iVar15;
                    /* WARNING: Could not recover jumptable at 0x001f395c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar18 = (*(code *)(&PTR_LAB_0040cae0)[(ulong)*pbVar35])();
        return (ulong *)uVar18;
      }
      goto LAB_001f09e9;
    case 0x3e:
      puVar27 = local_90[-2];
      local_e0 = (undefined1 *)local_90[-1];
      ppuVar22 = local_90 + -1;
      puVar45 = (undefined1 *)FUN_002356b0(puVar27,local_e0,0x60);
      if (puVar45 == _Py_NotImplementedStruct) {
        puVar45 = (undefined1 *)FUN_00238a20(puVar27,local_e0,&DAT_0030697a);
      }
      *puVar27 = *puVar27 - 1;
      if (*puVar27 == 0) {
        (**(code **)(puVar27[1] + 0x30))(puVar27);
      }
      uVar49 = *(ulong *)local_e0;
      *(ulong *)local_e0 = uVar49 - 1;
      if (uVar49 - 1 == 0) {
        (**(code **)(((ulong *)local_e0)[1] + 0x30))();
      }
      uVar23 = (uint)((ulong)ppuVar40 >> 0x20);
      *(undefined1 **)(local_90 + -2) = puVar45;
      if ((ulong *)puVar45 == (ulong *)0x0) {
        bVar50 = false;
        goto LAB_001f2d6d;
      }
      _Py_Ticker = _Py_Ticker - 1;
      if ((int)_Py_Ticker < 0) goto LAB_001f09c5;
      uVar49 = (ulong)DAT_004a25b8;
      local_90 = ppuVar22;
      if (DAT_004a25b8 == 0) {
        *(int *)(lParm1 + 0x78) = iVar14 - iVar15;
                    /* WARNING: Could not recover jumptable at 0x001f3046. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar18 = (*(code *)(&PTR_LAB_0040cae0)[(ulong)*pbVar35])();
        return (ulong *)uVar18;
      }
      goto LAB_001f09e9;
    case 0x3f:
      puVar27 = local_90[-2];
      local_e0 = (undefined1 *)local_90[-1];
      ppuVar22 = local_90 + -1;
      puVar45 = (undefined1 *)FUN_002356b0(puVar27,local_e0,0x68);
      if (puVar45 == _Py_NotImplementedStruct) {
        puVar45 = (undefined1 *)FUN_00238a20(puVar27,local_e0,&DAT_0030697d);
      }
      *puVar27 = *puVar27 - 1;
      if (*puVar27 == 0) {
        (**(code **)(puVar27[1] + 0x30))(puVar27);
      }
      uVar49 = *(ulong *)local_e0;
      *(ulong *)local_e0 = uVar49 - 1;
      if (uVar49 - 1 == 0) {
        (**(code **)(((ulong *)local_e0)[1] + 0x30))();
      }
      uVar23 = (uint)((ulong)ppuVar40 >> 0x20);
      *(undefined1 **)(local_90 + -2) = puVar45;
      if ((ulong *)puVar45 == (ulong *)0x0) {
        bVar50 = false;
        goto LAB_001f2d6d;
      }
      _Py_Ticker = _Py_Ticker - 1;
      if ((int)_Py_Ticker < 0) goto LAB_001f09c5;
      uVar49 = (ulong)DAT_004a25b8;
      local_90 = ppuVar22;
      if (DAT_004a25b8 == 0) {
        *(int *)(lParm1 + 0x78) = iVar14 - iVar15;
                    /* WARNING: Could not recover jumptable at 0x001f2cf7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar18 = (*(code *)(&PTR_LAB_0040cae0)[(ulong)*pbVar35])();
        return (ulong *)uVar18;
      }
      goto LAB_001f09e9;
    case 0x40:
      puVar27 = local_90[-2];
      local_e0 = (undefined1 *)local_90[-1];
      ppuVar22 = local_90 + -1;
      puVar45 = (undefined1 *)FUN_002356b0(puVar27,local_e0,0x70);
      if (puVar45 == _Py_NotImplementedStruct) {
        puVar45 = (undefined1 *)FUN_00238a20(puVar27,local_e0,&DAT_0031cb9d);
      }
      *puVar27 = *puVar27 - 1;
      if (*puVar27 == 0) {
        (**(code **)(puVar27[1] + 0x30))(puVar27);
      }
      uVar49 = *(ulong *)local_e0;
      *(ulong *)local_e0 = uVar49 - 1;
      if (uVar49 - 1 == 0) {
        (**(code **)(((ulong *)local_e0)[1] + 0x30))(local_e0);
      }
      uVar23 = (uint)((ulong)ppuVar40 >> 0x20);
      *(undefined1 **)(local_90 + -2) = puVar45;
      if ((ulong *)puVar45 == (ulong *)0x0) {
        bVar50 = false;
        goto LAB_001f2d6d;
      }
      _Py_Ticker = _Py_Ticker - 1;
      if ((int)_Py_Ticker < 0) goto LAB_001f09c5;
      uVar49 = (ulong)DAT_004a25b8;
      local_90 = ppuVar22;
      if (DAT_004a25b8 == 0) {
        *(int *)(lParm1 + 0x78) = iVar14 - iVar15;
                    /* WARNING: Could not recover jumptable at 0x001f21b5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar18 = (*(code *)(&PTR_LAB_0040cae0)[(ulong)*pbVar35])();
        return (ulong *)uVar18;
      }
      goto LAB_001f09e9;
    case 0x41:
      puVar27 = local_90[-2];
      local_e0 = (undefined1 *)local_90[-1];
      ppuVar22 = local_90 + -1;
      puVar45 = (undefined1 *)FUN_002356b0(puVar27,local_e0,0x78);
      if (puVar45 == _Py_NotImplementedStruct) {
        puVar45 = (undefined1 *)FUN_00238a20(puVar27,local_e0,&DAT_00306980);
      }
      *puVar27 = *puVar27 - 1;
      if (*puVar27 == 0) {
        (**(code **)(puVar27[1] + 0x30))();
      }
      uVar49 = *(ulong *)local_e0;
      *(ulong *)local_e0 = uVar49 - 1;
      if (uVar49 - 1 == 0) {
        (**(code **)(((ulong *)local_e0)[1] + 0x30))();
      }
      uVar23 = (uint)((ulong)ppuVar40 >> 0x20);
      *(undefined1 **)(local_90 + -2) = puVar45;
      if ((ulong *)puVar45 == (ulong *)0x0) {
        bVar50 = false;
        goto LAB_001f2d6d;
      }
      _Py_Ticker = _Py_Ticker - 1;
      uVar42 = (ulong)_Py_Ticker;
      if ((int)_Py_Ticker < 0) goto LAB_001f09c5;
      uVar49 = (ulong)DAT_004a25b8;
      local_90 = ppuVar22;
      if (DAT_004a25b8 == 0) {
        *(int *)(lParm1 + 0x78) = iVar14 - iVar15;
                    /* WARNING: Could not recover jumptable at 0x001f430e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar18 = (*(code *)(&PTR_LAB_0040cae0)[(ulong)*pbVar35])
                           (uVar42,(&PTR_LAB_0040cae0)[(ulong)*pbVar35],&_Py_Ticker,
                            &PTR_LAB_0040cae0,pbVar35 + 1);
        return (ulong *)uVar18;
      }
      goto LAB_001f09e9;
    case 0x42:
      puVar27 = local_90[-2];
      local_e0 = (undefined1 *)local_90[-1];
      ppuVar22 = local_90 + -1;
      puVar45 = (undefined1 *)FUN_002356b0(puVar27,local_e0,0x80);
      if (puVar45 == _Py_NotImplementedStruct) {
        puVar45 = (undefined1 *)FUN_00238a20(puVar27,local_e0,&DAT_00306982);
      }
      *puVar27 = *puVar27 - 1;
      if (*puVar27 == 0) {
        (**(code **)(puVar27[1] + 0x30))();
      }
      uVar49 = *(ulong *)local_e0;
      *(ulong *)local_e0 = uVar49 - 1;
      if (uVar49 - 1 == 0) {
        (**(code **)(((ulong *)local_e0)[1] + 0x30))();
      }
      uVar23 = (uint)((ulong)ppuVar40 >> 0x20);
      *(undefined1 **)(local_90 + -2) = puVar45;
      if ((ulong *)puVar45 == (ulong *)0x0) {
        bVar50 = false;
        goto LAB_001f2d6d;
      }
      _Py_Ticker = _Py_Ticker - 1;
      uVar42 = (ulong)_Py_Ticker;
      if ((int)_Py_Ticker < 0) goto LAB_001f09c5;
      uVar49 = (ulong)DAT_004a25b8;
      local_90 = ppuVar22;
      if (DAT_004a25b8 == 0) {
        *(int *)(lParm1 + 0x78) = iVar14 - iVar15;
                    /* WARNING: Could not recover jumptable at 0x001f3c7a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar18 = (*(code *)(&PTR_LAB_0040cae0)[(ulong)*pbVar35])
                           (uVar42,(&PTR_LAB_0040cae0)[(ulong)*pbVar35],&_Py_Ticker,
                            &PTR_LAB_0040cae0,pbVar35 + 1);
        return (ulong *)uVar18;
      }
      goto LAB_001f09e9;
    case 0x43:
      puVar27 = local_90[-2];
      local_e0 = (undefined1 *)local_90[-1];
      ppuVar22 = local_90 + -1;
      puVar45 = (undefined1 *)PyNumber_InPlacePower(puVar27,local_e0,_Py_NoneStruct);
      *puVar27 = *puVar27 - 1;
      if (*puVar27 == 0) {
        (**(code **)(puVar27[1] + 0x30))();
      }
      uVar49 = *(ulong *)local_e0;
      *(ulong *)local_e0 = uVar49 - 1;
      if (uVar49 - 1 == 0) {
        (**(code **)(((ulong *)local_e0)[1] + 0x30))();
      }
      uVar23 = (uint)((ulong)ppuVar40 >> 0x20);
      *(undefined1 **)(local_90 + -2) = puVar45;
      if ((ulong *)puVar45 == (ulong *)0x0) {
        bVar50 = false;
        goto LAB_001f2d6d;
      }
      _Py_Ticker = _Py_Ticker - 1;
      if ((int)_Py_Ticker < 0) goto LAB_001f09c5;
      uVar49 = (ulong)DAT_004a25b8;
      local_90 = ppuVar22;
      if (DAT_004a25b8 == 0) {
        *(int *)(lParm1 + 0x78) = iVar14 - iVar15;
                    /* WARNING: Could not recover jumptable at 0x001f8a69. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar18 = (*(code *)(&PTR_LAB_0040cae0)[(ulong)*pbVar35])();
        return (ulong *)uVar18;
      }
      goto LAB_001f09e9;
    case 0x44:
      puVar27 = local_90[-1];
      puVar45 = (undefined1 *)PyObject_GetIter();
      *puVar27 = *puVar27 - 1;
      if (*puVar27 == 0) {
        (**(code **)(puVar27[1] + 0x30))();
      }
      uVar23 = (uint)((ulong)ppuVar40 >> 0x20);
      if ((ulong *)puVar45 == (ulong *)0x0) {
        bVar50 = false;
        ppuVar22 = local_90 + -1;
        goto LAB_001f2d6d;
      }
      *(undefined1 **)(local_90 + -1) = puVar45;
      _Py_Ticker = _Py_Ticker - 1;
      ppuVar22 = local_90;
      if ((int)_Py_Ticker < 0) goto LAB_001f09c5;
      uVar49 = (ulong)DAT_004a25b8;
      if (DAT_004a25b8 == 0) {
        *(int *)(lParm1 + 0x78) = iVar14 - iVar15;
                    /* WARNING: Could not recover jumptable at 0x001f1ccb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar18 = (*(code *)(&PTR_LAB_0040cae0)[(ulong)*pbVar35])();
        return (ulong *)uVar18;
      }
      goto LAB_001f09e9;
    case 0x46:
      local_c8 = local_90 + -1;
      puVar27 = local_90[-1];
      local_e0 = (undefined1 *)PySys_GetObject();
      if ((ulong *)local_e0 == (ulong *)0x0) {
        PyErr_SetString();
        uVar23 = (uint)((ulong)local_c8 >> 0x20);
LAB_00158ed8:
        *puVar27 = *puVar27 - 1;
        bVar50 = false;
        puVar45 = (undefined1 *)0x0;
        ppuVar22 = local_c8;
        if (*puVar27 != 0) goto LAB_001f2d6d;
        ppuVar40 = (ulong **)CONCAT44(uVar23,0xffffffff);
LAB_00158ef6:
        (**(code **)(puVar27[1] + 0x30))();
LAB_00158f0a:
        uVar23 = (uint)((ulong)ppuVar40 >> 0x20);
        bVar50 = false;
        ppuVar22 = local_c8;
        if ((ulong *)puVar45 == (ulong *)0x0) goto LAB_001f2d6d;
      }
      else {
        if ((int)ppuVar40 != 0) {
          *puVar27 = *puVar27 - 1;
          if (*puVar27 == 0) goto LAB_00158ef6;
          goto LAB_00158f0a;
        }
        puVar45 = (undefined1 *)PyTuple_Pack();
        uVar23 = (uint)((ulong)ppuVar40 >> 0x20);
        if ((ulong *)puVar45 == (ulong *)0x0) goto LAB_00158ed8;
        local_e0 = (undefined1 *)PyEval_CallObjectWithKeywords(local_e0,puVar45,0);
        if ((ulong *)local_e0 == (ulong *)0x0) {
          ppuVar40 = (ulong **)CONCAT44((int)((ulong)ppuVar40 >> 0x20),0xffffffff);
        }
        else {
          uVar49 = *(ulong *)local_e0;
          *(ulong *)local_e0 = uVar49 - 1;
          if (uVar49 - 1 == 0) {
            (**(code **)(((ulong *)local_e0)[1] + 0x30))();
          }
        }
        *puVar27 = *puVar27 - 1;
        if (*puVar27 == 0) goto LAB_00158ef6;
      }
      uVar23 = (uint)((ulong)ppuVar40 >> 0x20);
      uVar49 = *(ulong *)puVar45;
      bVar50 = (int)ppuVar40 == 0;
      *(ulong *)puVar45 = uVar49 - 1;
      ppuVar22 = local_c8;
      if (uVar49 - 1 == 0) {
        (**(code **)(((ulong *)puVar45)[1] + 0x30))();
        uVar23 = (uint)((ulong)local_c8 >> 0x20);
        ppuVar22 = local_c8;
      }
      goto LAB_001f2d6d;
    case 0x47:
      puVar25 = local_90[-1];
      ppuVar22 = local_90 + -1;
      puVar27 = (ulong *)0x0;
LAB_001f57aa:
      local_e0 = (undefined1 *)PySys_GetObject(0x2fc227);
      uVar12 = (undefined4)((ulong)ppuVar40 >> 0x20);
      if ((ulong *)local_e0 == (ulong *)0x0) {
        PyErr_SetString();
        ppuVar40 = (ulong **)CONCAT44(uVar12,0xffffffff);
      }
      else {
LAB_001f57d8:
        *(ulong *)local_e0 = *(ulong *)local_e0 + 1;
        iVar48 = PyFile_SoftSpace();
        uVar12 = (undefined4)((ulong)ppuVar40 >> 0x20);
        if (iVar48 != 0) {
          uVar13 = PyFile_WriteString();
          ppuVar40 = (ulong **)CONCAT44(uVar12,uVar13);
        }
        uVar23 = (uint)((ulong)ppuVar40 >> 0x20);
        if ((int)ppuVar40 == 0) {
LAB_001f582e:
          iVar48 = PyFile_WriteObject(puVar25,local_e0,1);
          ppuVar40 = (ulong **)CONCAT44(uVar23,iVar48);
          if (iVar48 == 0) {
            if ((*(ulong *)(puVar25[1] + 0xa8) & 0x8000000) == 0) {
              if ((*(ulong *)(puVar25[1] + 0xa8) & 0x10000000) == 0) {
                PyFile_SoftSpace();
              }
              else {
                if (puVar25[2] == 0) goto LAB_001f58a4;
                uVar23 = *(uint *)((puVar25[3] - 4) + puVar25[2] * 4);
                if (uVar23 < 0x80) {
                  if ((_Py_ascii_whitespace[(ulong)uVar23] == 0) || (uVar23 == 0x20))
                  goto LAB_001f58a4;
                }
                else {
                  iVar48 = _PyUnicodeUCS4_IsWhitespace();
                  if (iVar48 == 0) goto LAB_001f58a4;
                }
              }
            }
            else {
              uVar49 = puVar25[2];
              if (uVar49 != 0) {
                ppuVar20 = __ctype_b_loc();
                bVar28 = *(byte *)((long)puVar25 + uVar49 + 0x23);
                if (((*(byte *)((long)*ppuVar20 + (ulong)bVar28 * 2 + 1) & 0x20) != 0) &&
                   (bVar28 != 0x20)) goto LAB_001f58c7;
              }
LAB_001f58a4:
              PyFile_SoftSpace();
            }
          }
LAB_001f58c7:
          if ((ulong *)local_e0 == (ulong *)0x0) goto LAB_001f58e9;
        }
        uVar49 = *(ulong *)local_e0;
        *(ulong *)local_e0 = uVar49 - 1;
        if (uVar49 - 1 == 0) {
          (**(code **)(((ulong *)local_e0)[1] + 0x30))();
        }
      }
LAB_001f58e9:
      *puVar25 = *puVar25 - 1;
      if (*puVar25 == 0) {
LAB_001f8991:
        (**(code **)(puVar25[1] + 0x30))();
      }
      if (puVar27 != (ulong *)0x0) goto LAB_001f8982;
      goto LAB_001f58ff;
    case 0x48:
      puVar27 = (ulong *)0x0;
      ppuVar22 = local_90;
      goto code_r0x001f5490;
    case 0x49:
      puVar27 = local_90[-1];
      ppuVar22 = local_90 + -2;
      puVar25 = local_90[-2];
      if ((puVar27 == (ulong *)0x0) || (puVar27 == (ulong *)_Py_NoneStruct)) goto LAB_001f57aa;
      local_e0 = (undefined1 *)puVar27;
      if (puVar27 != (ulong *)0x0) goto LAB_001f57d8;
      local_e0 = (undefined1 *)puVar27;
      if ((int)ppuVar40 == 0) goto LAB_001f582e;
      *puVar25 = *puVar25 - 1;
      local_e0 = (undefined1 *)puVar27;
      if (*puVar25 == 0) goto LAB_001f8991;
LAB_001f8982:
      *puVar27 = *puVar27 - 1;
      if (*puVar27 == 0) {
        (**(code **)(puVar27[1] + 0x30))();
      }
LAB_001f58ff:
      uVar23 = (uint)((ulong)ppuVar40 >> 0x20);
      if ((int)ppuVar40 != 0) {
        bVar50 = false;
        goto LAB_001f2d6d;
      }
      _Py_Ticker = _Py_Ticker - 1;
      if ((int)_Py_Ticker < 0) goto LAB_001f09c5;
      uVar49 = (ulong)DAT_004a25b8;
      local_90 = ppuVar22;
      if (DAT_004a25b8 == 0) {
        *(int *)(lParm1 + 0x78) = iVar14 - iVar15;
                    /* WARNING: Could not recover jumptable at 0x001f5961. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar18 = (*(code *)(&PTR_LAB_0040cae0)[(ulong)*pbVar35])
                           ((&PTR_LAB_0040cae0)[(ulong)*pbVar35]);
        return (ulong *)uVar18;
      }
      goto LAB_001f09e9;
    case 0x4a:
      puVar27 = local_90[-1];
      ppuVar22 = local_90 + -1;
      local_e0 = (undefined1 *)puVar27;
code_r0x001f5490:
      if ((puVar27 == (ulong *)_Py_NoneStruct) || (puVar27 == (ulong *)0x0)) {
        local_e0 = (undefined1 *)PySys_GetObject(0x2fc227);
        uVar23 = (uint)((ulong)ppuVar40 >> 0x20);
        if ((ulong *)local_e0 != (ulong *)0x0) goto LAB_001f54b0;
        PyErr_SetString();
        if (puVar27 == (ulong *)0x0) {
          uVar49 = 2;
          local_90 = ppuVar22;
          goto LAB_001f571f;
        }
        uVar49 = 2;
      }
      else {
        if ((ulong *)local_e0 == (ulong *)0x0) {
          uVar49 = 1;
        }
        else {
LAB_001f54b0:
          *(ulong *)local_e0 = *(ulong *)local_e0 + 1;
          iVar15 = PyFile_WriteString();
          ppuVar40 = (ulong **)CONCAT44(uVar23,iVar15);
          if (iVar15 == 0) {
            PyFile_SoftSpace();
          }
          uVar49 = *(ulong *)local_e0;
          *(ulong *)local_e0 = uVar49 - 1;
          if (uVar49 - 1 == 0) {
            (**(code **)(((ulong *)local_e0)[1] + 0x30))();
          }
          uVar23 = (uint)((ulong)ppuVar40 >> 0x20);
          uVar49 = 1;
          if (puVar27 == (ulong *)0x0) {
            bVar50 = (ulong *)puVar45 != (ulong *)0x0 && (int)ppuVar40 == 0;
            goto LAB_001f2d6d;
          }
        }
      }
      *puVar27 = *puVar27 - 1;
      if (*puVar27 == 0) {
        (**(code **)(puVar27[1] + 0x30))();
      }
      goto LAB_001f36b6;
    case 0x4b:
      puVar27 = local_90[-2];
      local_e0 = (undefined1 *)local_90[-1];
      ppuVar22 = local_90 + -1;
      puVar45 = (undefined1 *)FUN_0024dcf0(puVar27,local_e0,0xe8);
      if (puVar45 == _Py_NotImplementedStruct) {
        puVar45 = (undefined1 *)FUN_00238a20(puVar27,local_e0,&DAT_00306984);
      }
      *puVar27 = *puVar27 - 1;
      if (*puVar27 == 0) {
        (**(code **)(puVar27[1] + 0x30))(puVar27);
      }
      uVar49 = *(ulong *)local_e0;
      *(ulong *)local_e0 = uVar49 - 1;
      if (uVar49 - 1 == 0) {
        (**(code **)(((ulong *)local_e0)[1] + 0x30))(local_e0);
      }
      uVar23 = (uint)((ulong)ppuVar40 >> 0x20);
      *(undefined1 **)(local_90 + -2) = puVar45;
      if ((ulong *)puVar45 == (ulong *)0x0) {
        bVar50 = false;
        goto LAB_001f2d6d;
      }
      _Py_Ticker = _Py_Ticker - 1;
      if ((int)_Py_Ticker < 0) goto LAB_001f09c5;
      uVar49 = (ulong)DAT_004a25b8;
      local_90 = ppuVar22;
      if (DAT_004a25b8 == 0) {
        *(int *)(lParm1 + 0x78) = iVar14 - iVar15;
                    /* WARNING: Could not recover jumptable at 0x001f2b7b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar18 = (*(code *)(&PTR_LAB_0040cae0)[(ulong)*pbVar35])();
        return (ulong *)uVar18;
      }
      goto LAB_001f09e9;
    case 0x4c:
      puVar27 = local_90[-2];
      local_e0 = (undefined1 *)local_90[-1];
      ppuVar22 = local_90 + -1;
      puVar45 = (undefined1 *)PyNumber_InPlaceRshift();
      *puVar27 = *puVar27 - 1;
      if (*puVar27 == 0) {
        (**(code **)(puVar27[1] + 0x30))();
      }
      uVar49 = *(ulong *)local_e0;
      *(ulong *)local_e0 = uVar49 - 1;
      if (uVar49 - 1 == 0) {
        (**(code **)(((ulong *)local_e0)[1] + 0x30))();
      }
      uVar23 = (uint)((ulong)ppuVar40 >> 0x20);
      *(undefined1 **)(local_90 + -2) = puVar45;
      if ((ulong *)puVar45 == (ulong *)0x0) {
        bVar50 = false;
        goto LAB_001f2d6d;
      }
      _Py_Ticker = _Py_Ticker - 1;
      uVar42 = (ulong)_Py_Ticker;
      if ((int)_Py_Ticker < 0) goto LAB_001f09c5;
      uVar49 = (ulong)DAT_004a25b8;
      local_90 = ppuVar22;
      if (DAT_004a25b8 == 0) {
        *(undefined4 *)(lParm1 + 0x78) = (int)(pbVar35 + -local_f0);
                    /* WARNING: Could not recover jumptable at 0x001f5122. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar18 = (*(code *)(&PTR_LAB_0040cae0)[(ulong)*pbVar35])
                           (uVar42,(&PTR_LAB_0040cae0)[(ulong)*pbVar35],pbVar35 + -local_f0,
                            &PTR_LAB_0040cae0,pbVar35 + 1);
        return (ulong *)uVar18;
      }
      goto LAB_001f09e9;
    case 0x4d:
      puVar27 = local_90[-2];
      local_e0 = (undefined1 *)local_90[-1];
      ppuVar22 = local_90 + -1;
      puVar45 = (undefined1 *)PyNumber_InPlaceAnd();
      *puVar27 = *puVar27 - 1;
      if (*puVar27 == 0) {
        (**(code **)(puVar27[1] + 0x30))();
      }
      uVar49 = *(ulong *)local_e0;
      *(ulong *)local_e0 = uVar49 - 1;
      if (uVar49 - 1 == 0) {
        (**(code **)(((ulong *)local_e0)[1] + 0x30))();
      }
      uVar23 = (uint)((ulong)ppuVar40 >> 0x20);
      *(undefined1 **)(local_90 + -2) = puVar45;
      if ((ulong *)puVar45 == (ulong *)0x0) {
        bVar50 = false;
        goto LAB_001f2d6d;
      }
      _Py_Ticker = _Py_Ticker - 1;
      uVar42 = (ulong)_Py_Ticker;
      if ((int)_Py_Ticker < 0) goto LAB_001f09c5;
      uVar49 = (ulong)DAT_004a25b8;
      local_90 = ppuVar22;
      if (DAT_004a25b8 == 0) {
        *(undefined4 *)(lParm1 + 0x78) = (int)(pbVar35 + -local_f0);
                    /* WARNING: Could not recover jumptable at 0x001f440b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar18 = (*(code *)(&PTR_LAB_0040cae0)[(ulong)*pbVar35])
                           (uVar42,(&PTR_LAB_0040cae0)[(ulong)*pbVar35],pbVar35 + -local_f0,
                            &PTR_LAB_0040cae0,pbVar35 + 1);
        return (ulong *)uVar18;
      }
      goto LAB_001f09e9;
    case 0x4e:
      puVar27 = local_90[-2];
      local_e0 = (undefined1 *)local_90[-1];
      ppuVar22 = local_90 + -1;
      puVar45 = (undefined1 *)PyNumber_InPlaceXor();
      *puVar27 = *puVar27 - 1;
      if (*puVar27 == 0) {
        (**(code **)(puVar27[1] + 0x30))();
      }
      uVar49 = *(ulong *)local_e0;
      *(ulong *)local_e0 = uVar49 - 1;
      if (uVar49 - 1 == 0) {
        (**(code **)(((ulong *)local_e0)[1] + 0x30))();
      }
      uVar23 = (uint)((ulong)ppuVar40 >> 0x20);
      *(undefined1 **)(local_90 + -2) = puVar45;
      if ((ulong *)puVar45 == (ulong *)0x0) {
        bVar50 = false;
        goto LAB_001f2d6d;
      }
      _Py_Ticker = _Py_Ticker - 1;
      if ((int)_Py_Ticker < 0) goto LAB_001f09c5;
      uVar49 = (ulong)DAT_004a25b8;
      local_90 = ppuVar22;
      if (DAT_004a25b8 == 0) {
        *(int *)(lParm1 + 0x78) = iVar14 - iVar15;
                    /* WARNING: Could not recover jumptable at 0x001f4f52. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar18 = (*(code *)(&PTR_LAB_0040cae0)[(ulong)*pbVar35])();
        return (ulong *)uVar18;
      }
      goto LAB_001f09e9;
    case 0x4f:
      puVar27 = local_90[-2];
      local_e0 = (undefined1 *)local_90[-1];
      ppuVar22 = local_90 + -1;
      puVar45 = (undefined1 *)PyNumber_InPlaceOr();
      *puVar27 = *puVar27 - 1;
      if (*puVar27 == 0) {
        (**(code **)(puVar27[1] + 0x30))();
      }
      uVar49 = *(ulong *)local_e0;
      *(ulong *)local_e0 = uVar49 - 1;
      if (uVar49 - 1 == 0) {
        (**(code **)(((ulong *)local_e0)[1] + 0x30))();
      }
      uVar23 = (uint)((ulong)ppuVar40 >> 0x20);
      *(undefined1 **)(local_90 + -2) = puVar45;
      if ((ulong *)puVar45 == (ulong *)0x0) {
        bVar50 = false;
        goto LAB_001f2d6d;
      }
      _Py_Ticker = _Py_Ticker - 1;
      if ((int)_Py_Ticker < 0) goto LAB_001f09c5;
      uVar49 = (ulong)DAT_004a25b8;
      local_90 = ppuVar22;
      if (DAT_004a25b8 == 0) {
        *(int *)(lParm1 + 0x78) = iVar14 - iVar15;
                    /* WARNING: Could not recover jumptable at 0x001f4cbb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar18 = (*(code *)(&PTR_LAB_0040cae0)[(ulong)*pbVar35])();
        return (ulong *)uVar18;
      }
      goto LAB_001f09e9;
    case 0x50:
      uVar49 = 0x10;
      goto LAB_001f128a;
    case 0x51:
      ppuVar22 = local_90 + -1;
      puVar27 = local_90[-1];
      puVar25 = local_90[-2];
      if (puVar27 == (ulong *)_Py_NoneStruct) {
        puVar21 = _Py_NoneStruct;
        *(undefined1 **)(local_90 + -2) = _Py_NoneStruct;
        local_e0 = _Py_NoneStruct;
      }
      else {
        if ((*(byte *)(puVar27[1] + 0xaa) & 0x80) == 0) {
          local_e0 = (undefined1 *)local_90[-3];
          puVar31 = local_90[-4];
          local_90[-2] = puVar27;
          local_90[-3] = puVar25;
          *(undefined1 **)(local_90 + -4) = local_e0;
          puVar21 = (undefined1 *)puVar25;
          puVar25 = puVar31;
        }
        else {
          if ((puVar27[2] == 8) || (puVar27[2] == 0x20)) {
            auVar51 = ZEXT816(puVar25);
            puVar25 = local_90[-3];
            local_e0 = _Py_NoneStruct;
            auVar51 = movhps(auVar51,puVar27);
            *(int *)(local_90 + -3) = SUB164(auVar51,0);
            *(undefined4 *)((long)local_90 + -0x14) = SUB164(auVar51 >> 0x20,0);
            *(int *)(local_90 + -2) = SUB164(auVar51 >> 0x40,0);
            *(undefined4 *)((long)local_90 + -0xc) = SUB164(auVar51 >> 0x60,0);
            puVar27 = (ulong *)puVar21;
          }
          else {
            local_90[-2] = puVar27;
            local_e0 = _Py_NoneStruct;
            puVar27 = (ulong *)puVar21;
          }
        }
      }
      puVar45 = (undefined1 *)PyObject_CallFunctionObjArgs(puVar25,puVar27,puVar21);
      uVar23 = (uint)((ulong)puVar25 >> 0x20);
      *puVar25 = *puVar25 - 1;
      if (*puVar25 == 0) {
        (**(code **)(puVar25[1] + 0x30))();
        uVar23 = (uint)((ulong)ppuVar22 >> 0x20);
      }
      if ((ulong *)puVar45 == (ulong *)0x0) {
        bVar50 = false;
      }
      else {
        if (puVar27 == (ulong *)_Py_NoneStruct) {
          *(ulong *)puVar45 = *(ulong *)puVar45 - 1;
          if (*(ulong *)puVar45 == 0) {
            (**(code **)(((ulong *)puVar45)[1] + 0x30))();
            uVar23 = (uint)((ulong)ppuVar22 >> 0x20);
            bVar50 = true;
          }
          else {
            bVar50 = true;
          }
        }
        else {
          iVar15 = PyObject_IsTrue();
          *(ulong *)puVar45 = *(ulong *)puVar45 - 1;
          if (*(ulong *)puVar45 == 0) {
            (**(code **)(((ulong *)puVar45)[1] + 0x30))();
          }
          uVar23 = (uint)((ulong)ppuVar22 >> 0x20);
          bVar50 = iVar15 == 0;
          if (0 < iVar15) {
            ppuVar22 = local_90 + -3;
            _Py_NoneStruct._0_8_ = _Py_NoneStruct._0_8_ + 1;
            *(undefined1 **)(local_90 + -4) = _Py_NoneStruct;
            *puVar27 = *puVar27 - 1;
            if (*puVar27 == 0) {
              (**(code **)(puVar27[1] + 0x30))();
            }
            *(ulong *)puVar21 = *(ulong *)puVar21 - 1;
            if (*(ulong *)puVar21 == 0) {
              (**(code **)(((ulong *)puVar21)[1] + 0x30))();
            }
            uVar23 = (uint)(*(ulong *)local_e0 >> 0x20);
            uVar49 = *(ulong *)local_e0 - 1;
            *(ulong *)local_e0 = uVar49;
            if (uVar49 == 0) {
              (**(code **)(((ulong *)local_e0)[1] + 0x30))();
              uVar23 = (uint)((ulong)ppuVar22 >> 0x20);
              bVar50 = true;
            }
            else {
              bVar50 = true;
            }
          }
        }
      }
      goto LAB_001f2d6d;
    case 0x52:
      puVar45 = *(undefined1 **)(lParm1 + 0x38);
      if ((ulong *)puVar45 == (ulong *)0x0) {
        PyErr_SetString();
        bVar50 = false;
        ppuVar22 = local_90;
        goto LAB_001f2d6d;
      }
      *(ulong *)puVar45 = *(ulong *)puVar45 + 1;
      *(undefined1 **)local_90 = puVar45;
      _Py_Ticker = _Py_Ticker - 1;
      ppuVar22 = local_90 + 1;
      if ((int)_Py_Ticker < 0) goto LAB_001f09c5;
      uVar49 = (ulong)DAT_004a25b8;
      local_90 = local_90 + 1;
      if (DAT_004a25b8 == 0) {
        *(int *)(lParm1 + 0x78) = iVar14 - iVar15;
                    /* WARNING: Could not recover jumptable at 0x001f48b2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar18 = (*(code *)(&PTR_LAB_0040cae0)[(ulong)*pbVar35])
                           (&DAT_003075c0,(&PTR_LAB_0040cae0)[(ulong)*pbVar35],&_Py_Ticker,
                            &PTR_LAB_0040cae0,pbVar35 + 1);
        return (ulong *)uVar18;
      }
      goto LAB_001f09e9;
    case 0x53:
      local_e8 = local_90[-1];
      uVar49 = 8;
      local_90 = local_90 + -1;
      goto LAB_001f128a;
    case 0x54:
      local_c8 = local_90 + -1;
      puVar27 = local_90[-1];
      PyFrame_FastToLocals(lParm1);
      puVar45 = *(undefined1 **)(lParm1 + 0x38);
      if ((ulong *)puVar45 == (ulong *)0x0) {
        PyErr_SetString();
        uVar23 = (uint)((ulong)local_c8 >> 0x20);
        *puVar27 = *puVar27 - 1;
        bVar50 = false;
        ppuVar22 = local_c8;
        if (*puVar27 == 0) {
          (**(code **)(puVar27[1] + 0x30))();
          uVar23 = (uint)((ulong)local_c8 >> 0x20);
          bVar50 = false;
          ppuVar22 = local_c8;
        }
        goto LAB_001f2d6d;
      }
      plVar30 = (long *)PyObject_GetAttrString(puVar27);
      if (plVar30 == (long *)0x0) {
        iVar48 = PyErr_ExceptionMatches(PyExc_AttributeError);
        if (iVar48 != 0) {
          PyErr_Clear();
          plVar46 = (long *)PyObject_GetAttrString(puVar27,0x3039a1);
          if (plVar46 == (long *)0x0) {
            iVar48 = PyErr_ExceptionMatches(PyExc_AttributeError);
            if (iVar48 != 0) {
              PyErr_SetString(PyExc_ImportError);
            }
          }
          else {
            plVar30 = (long *)PyObject_CallMethod(plVar46,0x2fd269,0);
            *plVar46 = *plVar46 + -1;
            if (*plVar46 == 0) {
              (**(code **)(plVar46[1] + 0x30))(plVar46);
            }
            if (plVar30 != (long *)0x0) {
              bVar50 = true;
              goto LAB_001f49fb;
            }
          }
        }
        PyFrame_LocalsToFast();
        uVar23 = (uint)((ulong)local_c8 >> 0x20);
        *puVar27 = *puVar27 - 1;
        if (*puVar27 != 0) goto LAB_0015a3d1;
        ppuVar40 = (ulong **)CONCAT44(uVar23,0xffffffff);
        goto LAB_0015a3e1;
      }
      bVar50 = false;
LAB_001f49fb:
      iVar48 = 0;
      ppuVar40 = local_c8;
      goto LAB_001f4a87;
    case 0x55:
      puVar27 = local_90[-3];
      local_e0 = (undefined1 *)local_90[-1];
      ppuVar22 = local_90 + -3;
      puVar25 = local_90[-2];
      puVar31 = puVar25;
      puVar44 = (ulong *)local_e0;
      puVar53 = puVar27;
      if ((*(byte *)(puVar27[1] + 0xab) & 4) == 0) {
LAB_001f46a0:
        if (puVar31 == (ulong *)_Py_NoneStruct) {
          puVar31 = (ulong *)(*_PyThreadState_GetFrame)(_PyThreadState_Current);
          if (puVar31 == (ulong *)0x0) {
            if (puVar44 != (ulong *)_Py_NoneStruct) goto LAB_0015a8a8;
LAB_001f9f51:
            puVar44 = (ulong *)PyEval_GetLocals();
            bVar50 = true;
          }
          else {
            puVar31 = (ulong *)puVar31[6];
            if (puVar44 == (ulong *)_Py_NoneStruct) goto LAB_001f9f51;
LAB_0015a88d:
            bVar50 = false;
          }
          if ((puVar31 == (ulong *)0x0) || (puVar44 == (ulong *)0x0)) goto LAB_0015a8a8;
        }
        else {
LAB_001f46ab:
          bVar50 = false;
          if (puVar44 == (ulong *)_Py_NoneStruct) {
            puVar44 = puVar31;
          }
        }
        puVar21 = (undefined1 *)puVar27[1];
        if (((puVar21 == PyCode_Type || puVar21 == PyFile_Type) ||
            ((*(ulong *)(puVar21 + 0xa8) & 0x18000000) != 0)) ||
           (iVar15 = PyType_IsSubtype(puVar21,PyFile_Type), iVar15 != 0)) {
          if ((*(byte *)(puVar31[1] + 0xab) & 0x20) == 0) {
            iVar15 = -1;
            PyErr_SetString();
          }
          else {
            iVar15 = PyMapping_Check(puVar44);
            if (iVar15 == 0) {
              iVar15 = -1;
              PyErr_SetString();
            }
            else {
              lVar47 = PyDict_GetItemString(puVar31);
              if (lVar47 == 0) {
                PyDict_SetItemString(puVar31,"__builtins__",*(undefined8 *)(lParm1 + 0x28));
              }
              puVar21 = (undefined1 *)puVar27[1];
              if (puVar21 == PyCode_Type) {
                if (0 < *(long *)(puVar27[8] + 0x10)) {
                  iVar15 = -1;
                  PyErr_SetString();
                  goto LAB_001f47c4;
                }
                auVar51 = PyEval_EvalCodeEx(puVar27,puVar31,puVar44,0,0,0,0,0,0,0);
LAB_001f479f:
                plVar30 = SUB168(auVar51,0);
                if (bVar50) {
                  PyFrame_LocalsToFast(lParm1,0,SUB168(auVar51 >> 0x40,0));
                }
                iVar15 = -1;
                if (plVar30 != (long *)0x0) {
                  *plVar30 = *plVar30 + -1;
                  iVar15 = 0;
                  if (*plVar30 == 0) {
                    (**(code **)(plVar30[1] + 0x30))();
                  }
                }
              }
              else {
                if ((puVar21 == PyFile_Type) || (iVar15 = PyType_IsSubtype(puVar21), iVar15 != 0)) {
                  uVar18 = PyFile_AsFile(puVar27);
                  PyFile_Name(puVar27);
                  lVar47 = PyString_AsString();
                  if (lVar47 != 0) {
                    local_40 = (ulong *)((ulong)local_40 & 0xffffffff00000000);
                    lVar17 = (*_PyThreadState_GetFrame)(_PyThreadState_Current);
                    if ((lVar17 == 0) ||
                       (uVar23 = *(uint *)(*(long *)(lVar17 + 0x20) + 0x1c) & 0x3e000, uVar23 == 0))
                    {
                      if ((uint)local_40 == 0) {
                        auVar51 = PyRun_FileExFlags(uVar18,lVar47,0x101,puVar31,puVar44,0,0,
                                                    (ulong)local_40 & 0xffffffff);
                        goto LAB_001f479f;
                      }
                    }
                    else {
                      local_40 = (ulong *)((ulong)local_40 & 0xffffffff00000000 |
                                          (ulong)((uint)local_40 | uVar23));
                    }
                    uVar18 = PyRun_FileExFlags(uVar18,lVar47,0x101,puVar31,puVar44,0,&local_40);
                    auVar51 = CONCAT88(lVar17,uVar18);
                    goto LAB_001f479f;
                  }
                  iVar15 = -1;
                  goto LAB_001f47c4;
                }
                local_48 = (undefined1 *)((ulong)local_48 & 0xffffffff00000000);
                local_90 = (ulong **)0x0;
                if ((puVar21[0xab] & 0x10) == 0) {
LAB_001f9e3a:
                  iVar15 = PyString_AsStringAndSize(puVar27,&local_40,0);
                  if (iVar15 == 0) {
                    lVar47 = (*_PyThreadState_GetFrame)(_PyThreadState_Current);
                    if ((lVar47 == 0) ||
                       (uVar23 = *(uint *)(*(long *)(lVar47 + 0x20) + 0x1c) & 0x3e000, uVar23 == 0))
                    {
                      if ((uint)local_48 != 0) goto LAB_001f9eee;
                      ppuVar40 = (ulong **)0x0;
                    }
                    else {
                      local_48 = (undefined1 *)
                                 ((ulong)local_48 & 0xffffffff00000000 |
                                 (ulong)((uint)local_48 | uVar23));
LAB_001f9eee:
                      ppuVar40 = &local_48;
                    }
                    auVar51 = PyRun_StringFlags(local_40,0x101,puVar31,puVar44,ppuVar40);
                    if ((local_90 != (ulong **)0x0) &&
                       (uVar49 = (ulong)*local_90, *(ulong *)local_90 = uVar49 - 1, uVar49 - 1 == 0)
                       ) {
                      (**(code **)((long)local_90[1] + 0x30))();
                      auVar51 = auVar51 & (undefined  [16])0xffffffffffffffff |
                                ZEXT816(extraout_RDX) << 0x40;
                    }
                    goto LAB_001f479f;
                  }
                }
                else {
                  puVar27 = (ulong *)PyUnicodeUCS4_AsUTF8String();
                  if (puVar27 != (ulong *)0x0) {
                    local_48 = (undefined1 *)((ulong)local_48 | 0x100);
                    local_90 = (ulong **)puVar27;
                    goto LAB_001f9e3a;
                  }
                }
                iVar15 = -1;
              }
            }
          }
        }
        else {
          iVar15 = -1;
          PyErr_SetString();
        }
      }
      else {
        puVar31 = puVar25;
        puVar44 = (ulong *)local_e0;
        puVar53 = puVar27;
        if (puVar25 != (ulong *)_Py_NoneStruct) goto LAB_001f46ab;
        if (local_e0 == _Py_NoneStruct) {
          iVar15 = PyTuple_Size(puVar27);
          if (iVar15 == 2) {
            puVar31 = (ulong *)PyTuple_GetItem(puVar27);
            puVar53 = puVar27;
LAB_0015aae8:
            puVar27 = (ulong *)PyTuple_GetItem(puVar53);
            puVar44 = (ulong *)puVar21;
            goto LAB_001f46a0;
          }
          if (iVar15 == 3) {
            puVar53 = puVar27;
            puVar31 = (ulong *)PyTuple_GetItem(puVar27,1);
            puVar21 = (undefined1 *)PyTuple_GetItem(puVar27);
            goto LAB_0015aae8;
          }
          puVar31 = (ulong *)(*_PyThreadState_GetFrame)(_PyThreadState_Current);
          puVar53 = puVar27;
          if (puVar31 != (ulong *)0x0) {
            puVar31 = (ulong *)puVar31[6];
            puVar53 = puVar27;
          }
          goto LAB_001f9f51;
        }
        lVar47 = (*_PyThreadState_GetFrame)(_PyThreadState_Current);
        puVar53 = puVar27;
        if (lVar47 != 0) {
          puVar31 = *(ulong **)(lVar47 + 0x30);
          puVar44 = (ulong *)local_e0;
          puVar53 = puVar27;
          goto LAB_0015a88d;
        }
LAB_0015a8a8:
        iVar15 = -1;
        PyErr_SetString();
      }
LAB_001f47c4:
      uVar49 = *puVar53;
      *puVar53 = uVar49 - 1;
      if (uVar49 - 1 == 0) {
        (**(code **)(puVar53[1] + 0x30))();
      }
      uVar49 = *puVar25;
      *puVar25 = uVar49 - 1;
      if (uVar49 - 1 == 0) {
        (**(code **)(puVar25[1] + 0x30))();
      }
      uVar23 = (uint)(*(ulong *)local_e0 >> 0x20);
      uVar49 = *(ulong *)local_e0 - 1;
      *(ulong *)local_e0 = uVar49;
      bVar50 = (ulong *)puVar45 != (ulong *)0x0 && iVar15 == 0;
      if (uVar49 == 0) {
        (**(code **)(((ulong *)local_e0)[1] + 0x30))();
        uVar23 = (uint)((ulong)ppuVar22 >> 0x20);
      }
      goto LAB_001f2d6d;
    case 0x56:
      local_e8 = local_90[-1];
      iVar15 = 0x40;
      *(ulong ***)(lParm1 + 0x48) = local_90 + -1;
      goto LAB_001f16d0;
    case 0x57:
      if (*(int *)(lParm1 + 0x80) < 1) {
                    /* WARNING: Subroutine does not return */
        Py_FatalError("XXX block stack underflow");
      }
      iVar48 = *(int *)(lParm1 + 0x80) + -1;
      *(int *)(lParm1 + 0x80) = iVar48;
      if (*(int *)(lParm1 + 0x8c + (long)iVar48 * 0xc) <
          (int)((long)((long)local_90 - *(long *)(lParm1 + 0x40)) >> 3)) {
        do {
          local_90 = local_90 + -1;
          puVar27 = *local_90;
          *puVar27 = *puVar27 - 1;
          if (*puVar27 == 0) {
            (**(code **)(puVar27[1] + 0x30))();
          }
        } while (*(int *)(lParm1 + (long)iVar48 * 0xc + 0x8c) <
                 (int)((long)((long)local_90 - *(long *)(lParm1 + 0x40)) >> 3));
      }
      _Py_Ticker = _Py_Ticker - 1;
      ppuVar22 = local_90;
      if ((int)_Py_Ticker < 0) goto LAB_001f09c5;
      uVar49 = (ulong)DAT_004a25b8;
      if (DAT_004a25b8 == 0) {
        *(int *)(lParm1 + 0x78) = iVar14 - iVar15;
                    /* WARNING: Could not recover jumptable at 0x001f1ab9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar18 = (*(code *)(&PTR_LAB_0040cae0)[(ulong)*pbVar35])();
        return (ulong *)uVar18;
      }
      goto LAB_001f09e9;
    case 0x58:
      puVar25 = local_90[-1];
      ppuVar22 = local_90 + -1;
      uVar49 = *(ulong *)((undefined1 *)puVar25[1] + 0xa8);
      if ((uVar49 & 0x800000) == 0) {
        if (((undefined1 *)puVar25[1] == PyClass_Type) ||
           ((((uVar49 & 0x80000000) != 0 && ((*(byte *)((long)puVar25 + 0xab) & 0x40) != 0)) ||
            ((uVar49 & 0x8000000) != 0)))) {
          local_e0 = (undefined1 *)local_90[-2];
          uVar49 = 4;
          PyErr_Restore(puVar25,local_e0,local_90[-3]);
          local_90 = local_90 + -3;
          goto LAB_001f571f;
        }
        if (puVar25 == (ulong *)_Py_NoneStruct) {
          uVar49 = 1;
        }
        else {
          uVar49 = 2;
          PyErr_SetString();
        }
      }
      else {
        iVar15 = (int)puVar25[2];
        uVar49 = puVar25[2] & 0xffffffff;
        if ((iVar15 == 8) || (iVar15 == 0x20)) {
          local_e8 = local_90[-2];
          ppuVar22 = local_90 + -2;
        }
      }
      *puVar25 = *puVar25 - 1;
      uVar42 = *puVar25;
      goto joined_r0x00159700;
    case 0x59:
      puVar27 = local_90[-1];
      local_e0 = (undefined1 *)local_90[-3];
      ppuVar22 = local_90 + -2;
      puVar25 = local_90[-2];
      if (((*(byte *)(puVar27[1] + 0xab) & 0x20) == 0) ||
         (puVar21 = (undefined1 *)PyDict_GetItemString(puVar27,"__metaclass__"),
         (long *)puVar21 == (long *)0x0)) {
        if (((*(byte *)(puVar25[1] + 0xab) & 4) == 0) || ((long)puVar25[2] < 1)) {
          lVar47 = (*_PyThreadState_GetFrame)(_PyThreadState_Current);
          if ((((lVar47 == 0) || (lVar47 = *(long *)(lVar47 + 0x30), lVar47 == 0)) ||
              ((*(byte *)(*(long *)(lVar47 + 8) + 0xab) & 0x20) == 0)) ||
             (puVar21 = (undefined1 *)PyDict_GetItemString(lVar47,"__metaclass__"),
             (long *)puVar21 == (long *)0x0)) {
            puVar21 = PyClass_Type;
          }
          goto LAB_001f8012;
        }
        uVar49 = puVar25[3];
        puVar21 = (undefined1 *)PyObject_GetAttrString(uVar49,"__class__");
        if ((long *)puVar21 == (long *)0x0) {
          PyErr_Clear();
          puVar21 = *(undefined1 **)(uVar49 + 8);
          *(long *)puVar21 = *(long *)puVar21 + 1;
        }
      }
      else {
LAB_001f8012:
        *(long *)puVar21 = *(long *)puVar21 + 1;
      }
      puVar45 = (undefined1 *)PyObject_CallFunctionObjArgs(puVar21,local_e0,puVar25,puVar27);
      *(long *)puVar21 = *(long *)puVar21 + -1;
      if (*(long *)puVar21 == 0) {
        (**(code **)(((long *)puVar21)[1] + 0x30))();
      }
      if (((ulong *)puVar45 == (ulong *)0x0) && (iVar15 = PyErr_ExceptionMatches(), iVar15 != 0)) {
        PyErr_Fetch(&local_50,&local_48,&local_40);
        puVar31 = (ulong *)local_48;
        if (((*(byte *)(((ulong *)local_48)[1] + 0xab) & 8) != 0) &&
           ((puVar44 = (ulong *)PyString_FromFormat("Error when calling the metaclass bases\n    %s"
                                                    ,(long)local_48 + 0x24),
            puVar31 = (ulong *)local_48, puVar44 != (ulong *)0x0 &&
            (*(ulong *)local_48 = *(ulong *)local_48 - 1, puVar31 = puVar44, *(ulong *)local_48 == 0
            )))) {
          (**(code **)(((ulong *)local_48)[1] + 0x30))();
          puVar31 = puVar44;
        }
        local_48 = (undefined1 *)puVar31;
        PyErr_Restore(local_50,local_48,local_40);
      }
      *(undefined1 **)(local_90 + -3) = puVar45;
      *puVar27 = *puVar27 - 1;
      if (*puVar27 == 0) {
        (**(code **)(puVar27[1] + 0x30))();
      }
      *puVar25 = *puVar25 - 1;
      if (*puVar25 == 0) {
        (**(code **)(puVar25[1] + 0x30))();
      }
      uVar23 = (uint)((ulong)ppuVar40 >> 0x20);
      uVar49 = *(ulong *)local_e0;
      *(ulong *)local_e0 = uVar49 - 1;
      bVar50 = (int)ppuVar40 == 0 && (ulong *)puVar45 != (ulong *)0x0;
      if (uVar49 - 1 == 0) {
        (**(code **)(((ulong *)local_e0)[1] + 0x30))();
        uVar23 = (uint)((ulong)ppuVar22 >> 0x20);
      }
      goto LAB_001f2d6d;
    case 0x5a:
      puVar45 = *(undefined1 **)(lParm1 + 0x38);
      ppuVar22 = local_90 + -1;
      puVar27 = local_90[-1];
      local_e0 = *(undefined1 **)(local_d0 + 0x18 + (long)(int)uVar11 * 8);
      if ((ulong *)puVar45 == (ulong *)0x0) {
        plVar30 = (long *)PyObject_Repr();
        uVar23 = (uint)((ulong)ppuVar22 >> 0x20);
        bVar50 = false;
        if (plVar30 != (long *)0x0) {
          PyErr_Format(PyExc_SystemError,"no locals found when storing %s",(long)plVar30 + 0x24);
          uVar23 = (uint)((ulong)ppuVar22 >> 0x20);
          *plVar30 = *plVar30 + -1;
          bVar50 = false;
          if (*plVar30 == 0) {
            (**(code **)(plVar30[1] + 0x30))();
            uVar23 = (uint)((ulong)ppuVar22 >> 0x20);
            bVar50 = false;
          }
        }
        goto LAB_001f2d6d;
      }
      if ((undefined1 *)((ulong *)puVar45)[1] == PyDict_Type) {
        iVar48 = PyDict_SetItem();
        local_90 = ppuVar22;
      }
      else {
        iVar48 = PyObject_SetItem(puVar45,local_e0,puVar27);
        local_90 = ppuVar22;
      }
      *puVar27 = *puVar27 - 1;
      if (*puVar27 == 0) {
        (**(code **)(puVar27[1] + 0x30))();
      }
      uVar23 = (uint)((ulong)local_90 >> 0x20);
      if (iVar48 != 0) {
        bVar50 = false;
        ppuVar22 = local_90;
        goto LAB_001f2d6d;
      }
      _Py_Ticker = _Py_Ticker - 1;
      if (-1 < (int)_Py_Ticker) {
        ppuVar40 = (ulong **)((ulong)local_90 & 0xffffffff00000000);
        uVar49 = (ulong)DAT_004a25b8;
        if (DAT_004a25b8 == 0) {
          *(int *)(lParm1 + 0x78) = iVar14 - iVar15;
                    /* WARNING: Could not recover jumptable at 0x001f2f7f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar18 = (*(code *)(&PTR_LAB_0040cae0)[(ulong)*pbVar35])();
          return (ulong *)uVar18;
        }
        goto LAB_001f09e9;
      }
      break;
    case 0x5b:
      puVar45 = *(undefined1 **)(lParm1 + 0x38);
      local_e0 = *(undefined1 **)(local_d0 + 0x18 + (long)(int)uVar11 * 8);
      if ((ulong *)puVar45 == (ulong *)0x0) {
        plVar30 = (long *)PyObject_Repr();
        uVar23 = (uint)((ulong)local_90 >> 0x20);
        bVar50 = false;
        ppuVar22 = local_90;
        if (plVar30 != (long *)0x0) {
          PyErr_Format(PyExc_SystemError,"no locals when deleting %s",(long)local_e0 + 0x24);
          uVar23 = (uint)((ulong)local_90 >> 0x20);
          *plVar30 = *plVar30 + -1;
          bVar50 = false;
          ppuVar22 = local_90;
          if (*plVar30 == 0) {
            (**(code **)(plVar30[1] + 0x30))();
            uVar23 = (uint)((ulong)local_90 >> 0x20);
            bVar50 = false;
            ppuVar22 = local_90;
          }
        }
      }
      else {
        iVar15 = PyObject_DelItem();
        uVar23 = (uint)((ulong)local_90 >> 0x20);
        bVar50 = true;
        ppuVar22 = local_90;
        if (iVar15 != 0) {
          FUN_002773b0(PyExc_NameError,"name \'%.200s\' is not defined",local_e0);
          uVar23 = (uint)((ulong)local_90 >> 0x20);
          bVar50 = false;
          ppuVar22 = local_90;
        }
      }
      goto LAB_001f2d6d;
    case 0x5c:
      puVar27 = local_90[-1];
      ppuVar22 = local_90 + -1;
      if ((undefined1 *)puVar27[1] == PyTuple_Type) {
        if (puVar27[2] == (long)(int)uVar11) {
          if (uVar11 == 0) {
            uVar49 = *puVar27 - 1;
            *puVar27 = uVar49;
          }
          else {
            uVar23 = uVar11 - 1;
            puVar25 = puVar27 + 3;
            local_e0 = (undefined1 *)puVar25[(long)(int)uVar23];
            *(ulong *)local_e0 = *(ulong *)local_e0 + 1;
            *(undefined1 **)ppuVar22 = local_e0;
            if (uVar23 != 0) {
              local_e0 = (undefined1 *)puVar25[(long)(int)(uVar11 - 2)];
              *(ulong *)local_e0 = *(ulong *)local_e0 + 1;
              *(undefined1 **)local_90 = local_e0;
              if (uVar11 - 2 != 0) {
                local_e0 = (undefined1 *)puVar25[(long)(int)(uVar11 - 3)];
                *(ulong *)local_e0 = *(ulong *)local_e0 + 1;
                *(undefined1 **)(local_90 + 1) = local_e0;
                if (uVar11 - 3 != 0) {
                  iVar48 = uVar11 - 5;
                  local_e0 = (undefined1 *)puVar25[(long)(int)(uVar11 - 4)];
                  *(ulong *)local_e0 = *(ulong *)local_e0 + 1;
                  *(undefined1 **)(local_90 + 2) = local_e0;
                  ppuVar22 = local_90 + 3;
                  if (uVar11 - 4 != 0) {
                    do {
                      lVar47 = (long)iVar48;
                      iVar48 = iVar48 + -1;
                      local_e0 = (undefined1 *)puVar25[lVar47];
                      *(ulong *)local_e0 = *(ulong *)local_e0 + 1;
                      *(undefined1 **)ppuVar22 = local_e0;
                      ppuVar22 = ppuVar22 + 1;
                    } while (iVar48 != -1);
                  }
                }
              }
            }
            *puVar27 = *puVar27 - 1;
            uVar49 = *puVar27;
            ppuVar22 = local_90 + (ulong)uVar23;
          }
          if (uVar49 == 0) {
            (**(code **)(puVar27[1] + 0x30))();
          }
          _Py_Ticker = _Py_Ticker - 1;
          if ((int)_Py_Ticker < 0) goto LAB_001f09c5;
          uVar49 = (ulong)DAT_004a25b8;
          local_90 = ppuVar22;
          if (DAT_004a25b8 == 0) {
            *(int *)(lParm1 + 0x78) = iVar14 - iVar15;
                    /* WARNING: Could not recover jumptable at 0x001f16b6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            uVar18 = (*(code *)(&PTR_LAB_0040cae0)[(ulong)*pbVar35])();
            return (ulong *)uVar18;
          }
          goto LAB_001f09e9;
        }
      }
      else {
        if (((undefined1 *)puVar27[1] == PyList_Type) && (puVar27[2] == (long)(int)uVar11)) {
          uVar49 = 1;
          if (uVar11 != 0) {
            uVar49 = puVar27[3];
            uVar23 = uVar11 - 1;
            local_e0 = *(undefined1 **)(uVar49 + (long)(int)uVar23 * 8);
            *(ulong *)local_e0 = *(ulong *)local_e0 + 1;
            *(undefined1 **)ppuVar22 = local_e0;
            if (uVar23 != 0) {
              local_e0 = *(undefined1 **)(uVar49 + (long)(int)(uVar11 - 2) * 8);
              *(ulong *)local_e0 = *(ulong *)local_e0 + 1;
              *(undefined1 **)local_90 = local_e0;
              if (uVar11 - 2 != 0) {
                local_e0 = *(undefined1 **)(uVar49 + (long)(int)(uVar11 - 3) * 8);
                *(ulong *)local_e0 = *(ulong *)local_e0 + 1;
                *(undefined1 **)(local_90 + 1) = local_e0;
                if (uVar11 - 3 != 0) {
                  iVar15 = uVar11 - 5;
                  local_e0 = *(undefined1 **)(uVar49 + (long)(int)(uVar11 - 4) * 8);
                  *(ulong *)local_e0 = *(ulong *)local_e0 + 1;
                  *(undefined1 **)(local_90 + 2) = local_e0;
                  ppuVar22 = local_90 + 3;
                  if (uVar11 - 4 != 0) {
                    do {
                      lVar47 = (long)iVar15;
                      iVar15 = iVar15 + -1;
                      local_e0 = *(undefined1 **)(uVar49 + lVar47 * 8);
                      *(ulong *)local_e0 = *(ulong *)local_e0 + 1;
                      *(undefined1 **)ppuVar22 = local_e0;
                      ppuVar22 = ppuVar22 + 1;
                    } while (iVar15 != -1);
                  }
                }
              }
            }
            uVar49 = 1;
            ppuVar22 = local_90 + (ulong)uVar23;
          }
          goto LAB_001fa1f1;
        }
      }
      ppuVar43 = ppuVar22 + (long)(int)uVar11;
      plVar30 = (long *)PyObject_GetIter();
      if (plVar30 == (long *)0x0) goto LAB_0015a1aa;
      if ((int)uVar11 < 1) {
        uVar11 = 0;
        ppuVar33 = ppuVar43;
        goto LAB_001f5fb9;
      }
      puVar25 = (ulong *)PyIter_Next(plVar30);
      if (puVar25 == (ulong *)0x0) {
        uVar49 = 0;
      }
      else {
        ppuVar43[-1] = puVar25;
        ppuVar33 = ppuVar43 + -1;
        if (uVar11 == 1) goto LAB_001f5fb9;
        puVar25 = (ulong *)PyIter_Next();
        if (puVar25 == (ulong *)0x0) {
          uVar49 = 1;
          lVar47 = *(long *)(_PyThreadState_Current + 0x48);
          ppuVar33 = ppuVar43 + -1;
          uVar11 = 1;
          goto joined_r0x001fa55e;
        }
        ppuVar43[-2] = puVar25;
        ppuVar33 = ppuVar43 + -2;
        if (uVar11 == 2) goto LAB_001f5fb9;
        puVar25 = (ulong *)PyIter_Next(plVar30);
        if (puVar25 == (ulong *)0x0) {
          uVar49 = 2;
          ppuVar43 = ppuVar43 + -2;
        }
        else {
          ppuVar43[-3] = puVar25;
          ppuVar33 = ppuVar43 + -3;
          if (uVar11 == 3) goto LAB_001f5fb9;
          puVar25 = (ulong *)PyIter_Next(plVar30);
          if (puVar25 == (ulong *)0x0) {
            uVar49 = 3;
            ppuVar43 = ppuVar43 + -3;
          }
          else {
            ppuVar43[-4] = puVar25;
            ppuVar33 = ppuVar43 + -4;
            if (uVar11 == 4) goto LAB_001f5fb9;
            puVar25 = (ulong *)PyIter_Next(plVar30);
            if (puVar25 != (ulong *)0x0) {
              ppuVar33 = ppuVar43 + -5;
              ppuVar43[-5] = puVar25;
              if (uVar11 == 5) goto LAB_001f5fb9;
              uVar49 = 5;
              goto LAB_001f5f7d;
            }
            uVar49 = 4;
            ppuVar43 = ppuVar43 + -4;
          }
        }
      }
      uVar11 = (uint)uVar49;
      lVar47 = *(long *)(_PyThreadState_Current + 0x48);
      ppuVar33 = ppuVar43;
      goto joined_r0x001fa55e;
    case 0x5d:
      puVar45 = (undefined1 *)(**(code **)(local_90[-1][1] + 0xe0))();
      if ((ulong *)puVar45 != (ulong *)0x0) {
        *(undefined1 **)local_90 = puVar45;
        local_90 = local_90 + 1;
        _Py_Ticker = _Py_Ticker - 1;
        ppuVar22 = local_90;
        if (-1 < (int)_Py_Ticker) {
          iVar14 = iVar14 - iVar15;
          goto joined_r0x001f1b48;
        }
        goto LAB_001f09c5;
      }
      if (*(long *)(_PyThreadState_Current + 0x48) != 0) {
        iVar15 = PyErr_ExceptionMatches();
        uVar23 = (uint)((ulong)ppuVar40 >> 0x20);
        if (iVar15 == 0) {
          bVar50 = false;
          puVar45 = (undefined1 *)0x0;
          ppuVar22 = local_90;
          goto LAB_001f2d6d;
        }
        PyErr_Clear();
      }
      puVar45 = (undefined1 *)local_90[-1];
      *(ulong *)puVar45 = *(ulong *)puVar45 - 1;
      if (*(ulong *)puVar45 == 0) {
        (**(code **)(((ulong *)puVar45)[1] + 0x30))();
      }
      pbVar35 = pbVar35 + (long)(int)uVar11;
      _Py_Ticker = _Py_Ticker - 1;
      ppuVar22 = local_90 + -1;
      if ((int)_Py_Ticker < 0) goto LAB_001f09c5;
      uVar49 = (ulong)DAT_004a25b8;
      local_90 = local_90 + -1;
      if (DAT_004a25b8 == 0) {
        *(undefined4 *)(lParm1 + 0x78) = (int)(pbVar35 + -local_f0);
                    /* WARNING: Could not recover jumptable at 0x001f6b77. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar18 = (*(code *)(&PTR_LAB_0040cae0)[(ulong)*pbVar35])
                           (&PTR_LAB_0040cae0,pbVar35 + -local_f0,
                            (&PTR_LAB_0040cae0)[(ulong)*pbVar35],uVar49,pbVar35 + 1);
        return (ulong *)uVar18;
      }
      goto LAB_001f09e9;
    case 0x5e:
      local_e0 = (undefined1 *)local_90[-1];
      ppuVar22 = local_90 + -1;
      iVar48 = PyList_Append(ppuVar22[(long)(int)-uVar11],local_e0);
      uVar49 = *(ulong *)local_e0;
      *(ulong *)local_e0 = uVar49 - 1;
      if (uVar49 - 1 == 0) {
        (**(code **)(((ulong *)local_e0)[1] + 0x30))();
      }
      uVar23 = (uint)(uVar49 >> 0x20);
      if (iVar48 != 0) {
        bVar50 = false;
        goto LAB_001f2d6d;
      }
      _Py_Ticker = _Py_Ticker - 1;
      uVar42 = (ulong)_Py_Ticker;
      if ((int)_Py_Ticker < 0) goto LAB_001f7deb;
      uVar26 = (ulong)DAT_004a25b8;
      ppuVar40 = (ulong **)(uVar49 & 0xffffffff00000000);
      uVar49 = (ulong)DAT_004a25b8;
      local_90 = ppuVar22;
      if (DAT_004a25b8 == 0) {
        *(int *)(lParm1 + 0x78) = iVar14 - iVar15;
                    /* WARNING: Could not recover jumptable at 0x001f272e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar18 = (*(code *)(&PTR_LAB_0040cae0)[(ulong)*pbVar35])
                           (uVar42,(&PTR_LAB_0040cae0)[(ulong)*pbVar35],&_Py_Ticker,uVar26,
                            pbVar35 + 1);
        return (ulong *)uVar18;
      }
      goto LAB_001f09e9;
    case 0x5f:
      puVar27 = local_90[-1];
      ppuVar22 = local_90 + -2;
      puVar25 = *ppuVar22;
      local_e0 = *(undefined1 **)(local_d0 + 0x18 + (long)(int)uVar11 * 8);
      uVar11 = PyObject_SetAttr(puVar27,local_e0,puVar25);
      *puVar27 = *puVar27 - 1;
      if (*puVar27 == 0) {
        ppuVar40 = (ulong **)((ulong)ppuVar40 & 0xffffffff00000000 | (ulong)uVar11);
        (**(code **)(puVar27[1] + 0x30))();
        uVar11 = (uint)ppuVar40;
      }
      *puVar25 = *puVar25 - 1;
      if (*puVar25 == 0) {
        ppuVar40 = (ulong **)((ulong)ppuVar40 & 0xffffffff00000000 | (ulong)uVar11);
        (**(code **)(puVar25[1] + 0x30))();
        uVar11 = (uint)ppuVar40;
      }
      uVar23 = (uint)((ulong)ppuVar40 >> 0x20);
      if (uVar11 != 0) {
        bVar50 = false;
        goto LAB_001f2d6d;
      }
      _Py_Ticker = _Py_Ticker - 1;
      if ((int)_Py_Ticker < 0) {
LAB_001f7deb:
        ppuVar40 = (ulong **)((ulong)uVar23 << 0x20);
        goto LAB_001f09c5;
      }
      ppuVar40 = (ulong **)((ulong)ppuVar40 & 0xffffffff00000000);
      uVar49 = (ulong)DAT_004a25b8;
      local_90 = ppuVar22;
      if (DAT_004a25b8 == 0) {
        *(undefined4 *)(lParm1 + 0x78) = (int)(pbVar35 + -local_f0);
                    /* WARNING: Could not recover jumptable at 0x001f18b2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar18 = (*(code *)(&PTR_LAB_0040cae0)[(ulong)*pbVar35])
                           (&PTR_LAB_0040cae0,(&PTR_LAB_0040cae0)[(ulong)*pbVar35],
                            pbVar35 + -local_f0,&_Py_Ticker,pbVar35 + 1);
        return (ulong *)uVar18;
      }
      goto LAB_001f09e9;
    case 0x60:
      ppuVar22 = local_90 + -1;
      puVar27 = local_90[-1];
      local_e0 = *(undefined1 **)(local_d0 + 0x18 + (long)(int)uVar11 * 8);
      iVar15 = PyObject_SetAttr(puVar27,local_e0,0);
      uVar23 = (uint)((ulong)ppuVar22 >> 0x20);
      uVar49 = *puVar27;
      *puVar27 = uVar49 - 1;
      if (uVar49 - 1 == 0) {
        (**(code **)(puVar27[1] + 0x30))();
        uVar23 = (uint)((ulong)ppuVar22 >> 0x20);
        bVar50 = (ulong *)puVar45 != (ulong *)0x0 && iVar15 == 0;
      }
      else {
        bVar50 = (ulong *)puVar45 != (ulong *)0x0 && iVar15 == 0;
      }
      goto LAB_001f2d6d;
    case 0x61:
      ppuVar22 = local_90 + -1;
      puVar27 = local_90[-1];
      local_e0 = *(undefined1 **)(local_d0 + 0x18 + (long)(int)uVar11 * 8);
      uVar12 = PyDict_SetItem(*(undefined8 *)(lParm1 + 0x30),local_e0,puVar27);
      *puVar27 = *puVar27 - 1;
      ppuVar40 = (ulong **)CONCAT44(uVar23,uVar12);
      if (*puVar27 == 0) {
        (**(code **)(puVar27[1] + 0x30))();
      }
      uVar23 = (uint)((ulong)ppuVar40 >> 0x20);
      if ((int)ppuVar40 != 0) {
        bVar50 = false;
        goto LAB_001f2d6d;
      }
      _Py_Ticker = _Py_Ticker - 1;
      if ((int)_Py_Ticker < 0) goto LAB_001f09c5;
      uVar49 = (ulong)DAT_004a25b8;
      local_90 = ppuVar22;
      if (DAT_004a25b8 == 0) {
        *(int *)(lParm1 + 0x78) = iVar14 - iVar15;
                    /* WARNING: Could not recover jumptable at 0x001f506f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar18 = (*(code *)(&PTR_LAB_0040cae0)[(ulong)*pbVar35])();
        return (ulong *)uVar18;
      }
      goto LAB_001f09e9;
    case 0x62:
      local_e0 = *(undefined1 **)(local_d0 + 0x18 + (long)(int)uVar11 * 8);
      iVar15 = PyDict_DelItem();
      uVar23 = (uint)((ulong)local_90 >> 0x20);
      bVar50 = (ulong *)puVar45 != (ulong *)0x0;
      ppuVar22 = local_90;
      if (iVar15 != 0) {
        FUN_002773b0(PyExc_NameError,"global name \'%.200s\' is not defined",local_e0);
        uVar23 = (uint)((ulong)local_90 >> 0x20);
        bVar50 = false;
        ppuVar22 = local_90;
      }
      goto LAB_001f2d6d;
    case 99:
      if (uVar11 == 2) {
        puVar45 = (undefined1 *)local_90[-1];
        *(ulong *)puVar45 = *(ulong *)puVar45 + 1;
        local_e0 = (undefined1 *)local_90[-2];
        *(ulong *)local_e0 = *(ulong *)local_e0 + 1;
        *(undefined1 **)local_90 = local_e0;
        uVar23 = DAT_004a25b8;
        *(undefined1 **)(local_90 + 1) = puVar45;
        uVar49 = (ulong)uVar23;
        local_90 = local_90 + 2;
        if (uVar23 == 0) {
          *(int *)(lParm1 + 0x78) = iVar14 - iVar15;
                    /* WARNING: Could not recover jumptable at 0x001f3e67. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar18 = (*(code *)(&PTR_LAB_0040cae0)[(ulong)*pbVar35])();
          return (ulong *)uVar18;
        }
      }
      else {
        if (uVar11 != 3) {
                    /* WARNING: Subroutine does not return */
          Py_FatalError("invalid argument to DUP_TOPX (bytecode corruption?)");
        }
        puVar45 = (undefined1 *)local_90[-1];
        *(ulong *)puVar45 = *(ulong *)puVar45 + 1;
        local_e0 = (undefined1 *)local_90[-2];
        *(ulong *)local_e0 = *(ulong *)local_e0 + 1;
        puVar27 = local_90[-3];
        *puVar27 = *puVar27 + 1;
        *local_90 = puVar27;
        uVar23 = DAT_004a25b8;
        *(undefined1 **)(local_90 + 2) = puVar45;
        *(undefined1 **)(local_90 + 1) = local_e0;
        uVar49 = (ulong)uVar23;
        local_90 = local_90 + 3;
        if (uVar23 == 0) {
          *(int *)(lParm1 + 0x78) = iVar14 - iVar15;
          UNRECOVERED_JUMPTABLE = (code *)(&PTR_LAB_0040cae0)[(ulong)*pbVar35];
          goto LAB_001590ac;
        }
      }
      goto LAB_001f09e9;
    case 100:
      puVar45 = *(undefined1 **)(local_c0 + 0x18 + (long)(int)uVar11 * 8);
      *(ulong *)puVar45 = *(ulong *)puVar45 + 1;
      *(undefined1 **)local_90 = puVar45;
      uVar49 = (ulong)DAT_004a25b8;
      local_90 = local_90 + 1;
      if (DAT_004a25b8 == 0) {
        *(int *)(lParm1 + 0x78) = iVar14 - iVar15;
                    /* WARNING: Could not recover jumptable at 0x001f59ca. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar18 = (*(code *)(&PTR_LAB_0040cae0)[(ulong)*pbVar35])();
        return (ulong *)uVar18;
      }
      goto LAB_001f09e9;
    case 0x65:
      local_e0 = *(undefined1 **)(local_d0 + 0x18 + (long)(int)uVar11 * 8);
      if (*(long *)(lParm1 + 0x38) == 0) {
        uVar49 = 2;
        plVar30 = (long *)PyObject_Repr();
        if (plVar30 != (long *)0x0) {
          PyErr_Format(PyExc_SystemError,"no locals when loading %s",(long)local_e0 + 0x24);
          *plVar30 = *plVar30 + -1;
          if (*plVar30 == 0) {
            (**(code **)(plVar30[1] + 0x30))();
          }
        }
        goto LAB_001f571f;
      }
      if (*(undefined1 **)(*(long *)(lParm1 + 0x38) + 8) == PyDict_Type) {
        puVar45 = (undefined1 *)PyDict_GetItem();
        if ((ulong *)puVar45 == (ulong *)0x0) goto LAB_001f7a50;
      }
      else {
        puVar45 = (undefined1 *)PyObject_GetItem();
        if ((ulong *)puVar45 != (ulong *)0x0) goto LAB_001f2e50;
        if (*(long *)(_PyThreadState_Current + 0x48) != 0) {
          iVar48 = PyErr_ExceptionMatches();
          uVar23 = (uint)((ulong)ppuVar40 >> 0x20);
          if (iVar48 != 0) {
            PyErr_Clear();
            goto LAB_001f7a50;
          }
          bVar50 = false;
          ppuVar22 = local_90;
          goto LAB_001f2d6d;
        }
LAB_001f7a50:
        puVar45 = (undefined1 *)PyDict_GetItem(*(undefined8 *)(lParm1 + 0x30),local_e0);
        if (((ulong *)puVar45 == (ulong *)0x0) &&
           (puVar45 = (undefined1 *)PyDict_GetItem(*(undefined8 *)(lParm1 + 0x28),local_e0),
           (ulong *)puVar45 == (ulong *)0x0)) {
          FUN_002773b0(PyExc_NameError,"name \'%.200s\' is not defined",local_e0);
          uVar23 = (uint)((ulong)local_90 >> 0x20);
          bVar50 = false;
          ppuVar22 = local_90;
          goto LAB_001f2d6d;
        }
      }
      *(ulong *)puVar45 = *(ulong *)puVar45 + 1;
LAB_001f2e50:
      *(undefined1 **)local_90 = puVar45;
      _Py_Ticker = _Py_Ticker - 1;
      ppuVar22 = local_90 + 1;
      if ((int)_Py_Ticker < 0) goto LAB_001f09c5;
      uVar49 = (ulong)DAT_004a25b8;
      local_90 = local_90 + 1;
      if (DAT_004a25b8 == 0) {
        *(int *)(lParm1 + 0x78) = iVar14 - iVar15;
                    /* WARNING: Could not recover jumptable at 0x001f2ea9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar18 = (*(code *)(&PTR_LAB_0040cae0)[(ulong)*pbVar35])();
        return (ulong *)uVar18;
      }
      goto LAB_001f09e9;
    case 0x66:
      puVar45 = (undefined1 *)PyTuple_New();
      uVar23 = (uint)((ulong)ppuVar40 >> 0x20);
      if ((ulong *)puVar45 == (ulong *)0x0) {
        bVar50 = false;
        ppuVar22 = local_90;
        goto LAB_001f2d6d;
      }
      uVar23 = uVar11 - 1;
      if ((int)uVar23 < 0) {
        ppuVar22 = local_90 + 1;
      }
      else {
        local_e0 = (undefined1 *)local_90[-1];
        *(undefined1 **)((ulong *)puVar45 + (long)(int)uVar23 + 3) = local_e0;
        if (uVar11 - 2 != -1) {
          local_e0 = (undefined1 *)local_90[-2];
          *(undefined1 **)((ulong *)puVar45 + (long)(int)(uVar11 - 2) + 3) = local_e0;
          if (uVar11 - 3 != -1) {
            local_e0 = (undefined1 *)local_90[-3];
            *(undefined1 **)((ulong *)puVar45 + (long)(int)(uVar11 - 3) + 3) = local_e0;
            if (uVar11 - 4 != -1) {
              local_e0 = (undefined1 *)local_90[-4];
              iVar48 = uVar11 - 5;
              *(undefined1 **)((ulong *)puVar45 + (long)(int)(uVar11 - 4) + 3) = local_e0;
              if (iVar48 != -1) {
                lVar17 = (long)iVar48;
                lVar47 = 0;
                do {
                  local_e0 = *(undefined1 **)((long)local_90 + lVar47 + -0x28);
                  iVar48 = iVar48 + -1;
                  *(undefined1 **)((long)puVar45 + lVar47 + lVar17 * 8 + 0x18) = local_e0;
                  lVar47 = lVar47 + -8;
                } while (iVar48 != -1);
              }
            }
          }
        }
        ppuVar22 = local_90 + (ulong)uVar23 * 0x1fffffffffffffff;
        local_90 = local_90 + ~(ulong)uVar23;
      }
      *(undefined1 **)local_90 = puVar45;
      _Py_Ticker = _Py_Ticker - 1;
      if ((int)_Py_Ticker < 0) goto LAB_001f09c5;
      uVar49 = (ulong)DAT_004a25b8;
      local_90 = ppuVar22;
      if (DAT_004a25b8 == 0) {
        *(int *)(lParm1 + 0x78) = iVar14 - iVar15;
                    /* WARNING: Could not recover jumptable at 0x001f1a2d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar18 = (*(code *)(&PTR_LAB_0040cae0)[(ulong)*pbVar35])();
        return (ulong *)uVar18;
      }
      goto LAB_001f09e9;
    case 0x67:
      puVar45 = (undefined1 *)PyList_New();
      uVar23 = (uint)((ulong)ppuVar40 >> 0x20);
      if ((ulong *)puVar45 == (ulong *)0x0) {
        bVar50 = false;
        ppuVar22 = local_90;
        goto LAB_001f2d6d;
      }
      uVar23 = uVar11 - 1;
      if ((int)uVar23 < 0) {
        ppuVar22 = local_90 + 1;
      }
      else {
        local_e0 = (undefined1 *)local_90[-1];
        *(undefined1 **)(((ulong *)puVar45)[3] + (long)(int)uVar23 * 8) = local_e0;
        if (uVar11 - 2 != -1) {
          local_e0 = (undefined1 *)local_90[-2];
          *(undefined1 **)(((ulong *)puVar45)[3] + (long)(int)(uVar11 - 2) * 8) = local_e0;
          if (uVar11 - 3 != -1) {
            local_e0 = (undefined1 *)local_90[-3];
            iVar15 = uVar11 - 4;
            ppuVar22 = local_90 + -3;
            *(undefined1 **)(((ulong *)puVar45)[3] + (long)(int)(uVar11 - 3) * 8) = local_e0;
            if (iVar15 != -1) {
              lVar47 = (long)iVar15 << 3;
              do {
                ppuVar22 = ppuVar22 + -1;
                local_e0 = (undefined1 *)*ppuVar22;
                iVar15 = iVar15 + -1;
                *(undefined1 **)(((ulong *)puVar45)[3] + lVar47) = local_e0;
                lVar47 = lVar47 + -8;
              } while (iVar15 != -1);
            }
          }
        }
        ppuVar22 = local_90 + (ulong)uVar23 * 0x1fffffffffffffff;
        local_90 = local_90 + ~(ulong)uVar23;
      }
      *(undefined1 **)local_90 = puVar45;
      _Py_Ticker = _Py_Ticker - 1;
      uVar42 = (ulong)_Py_Ticker;
      if ((int)_Py_Ticker < 0) goto LAB_001f09c5;
      uVar49 = (ulong)DAT_004a25b8;
      local_90 = ppuVar22;
      if (DAT_004a25b8 == 0) {
        *(undefined4 *)(lParm1 + 0x78) = (int)(pbVar35 + -local_f0);
                    /* WARNING: Could not recover jumptable at 0x001f2091. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar18 = (*(code *)(&PTR_LAB_0040cae0)[(ulong)*pbVar35])
                           (pbVar35 + -local_f0,(&PTR_LAB_0040cae0)[(ulong)*pbVar35],uVar42,uVar49,
                            pbVar35 + 1);
        return (ulong *)uVar18;
      }
      goto LAB_001f09e9;
    case 0x68:
      puVar45 = (undefined1 *)PySet_New();
      uVar23 = (uint)((ulong)ppuVar40 >> 0x20);
      if ((ulong *)puVar45 == (ulong *)0x0) {
        bVar50 = false;
        ppuVar22 = local_90;
        goto LAB_001f2d6d;
      }
      local_90 = local_90 + (long)(int)-uVar11;
      ppuVar22 = local_90;
      while( true ) {
        uVar23 = (uint)((ulong)ppuVar40 >> 0x20);
        if ((int)uVar42 < 1) break;
        local_e0 = (undefined1 *)*ppuVar22;
        if ((int)ppuVar40 == 0) {
          uVar12 = PySet_Add();
          ppuVar40 = (ulong **)CONCAT44(uVar23,uVar12);
        }
        *(ulong *)local_e0 = *(ulong *)local_e0 - 1;
        if (*(ulong *)local_e0 == 0) {
          (**(code **)(((ulong *)local_e0)[1] + 0x30))();
        }
        uVar42 = (ulong)((int)uVar42 - 1);
        ppuVar22 = ppuVar22 + 1;
      }
      if ((int)ppuVar40 != 0) {
        *(ulong *)puVar45 = *(ulong *)puVar45 - 1;
        bVar50 = false;
        ppuVar22 = local_90;
        if (*(ulong *)puVar45 == 0) {
          (**(code **)(((ulong *)puVar45)[1] + 0x30))();
          uVar23 = (uint)((ulong)local_90 >> 0x20);
          bVar50 = false;
          ppuVar22 = local_90;
        }
        goto LAB_001f2d6d;
      }
      *(undefined1 **)local_90 = puVar45;
      _Py_Ticker = _Py_Ticker - 1;
      ppuVar22 = local_90 + 1;
      if ((int)_Py_Ticker < 0) goto LAB_001f09c5;
      uVar49 = (ulong)DAT_004a25b8;
      local_90 = local_90 + 1;
      if (DAT_004a25b8 == 0) {
        *(undefined4 *)(lParm1 + 0x78) = (int)(pbVar35 + -local_f0);
                    /* WARNING: Could not recover jumptable at 0x001f9ff7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar18 = (*(code *)(&PTR_LAB_0040cae0)[(ulong)*pbVar35])
                           ((ulong)*pbVar35,(&PTR_LAB_0040cae0)[(ulong)*pbVar35],pbVar35 + -local_f0
                            ,uVar49,pbVar35 + 1);
        return (ulong *)uVar18;
      }
      goto LAB_001f09e9;
    case 0x69:
      puVar45 = (undefined1 *)PyDict_New();
      uVar23 = (uint)((ulong)ppuVar40 >> 0x20);
      ppuVar22 = local_90 + 1;
      bVar50 = 5 < (int)uVar11 && (ulong *)puVar45 != (ulong *)0x0;
      if (bVar50) {
        iVar15 = FUN_001c2780();
        uVar23 = (uint)((ulong)ppuVar40 >> 0x20);
        if (iVar15 == -1) {
          *(ulong *)puVar45 = *(ulong *)puVar45 - 1;
          if (*(ulong *)puVar45 == 0) {
            puVar27 = (ulong *)puVar45 + 1;
            puVar45 = (undefined1 *)0x0;
            (**(code **)(*puVar27 + 0x30))();
            uVar23 = (uint)((ulong)local_90 >> 0x20);
            bVar50 = false;
            *local_90 = (ulong *)0x0;
          }
          else {
            *local_90 = (ulong *)0x0;
            bVar50 = false;
            puVar45 = (undefined1 *)0x0;
          }
          goto LAB_001f2d6d;
        }
        *(undefined1 **)local_90 = puVar45;
      }
      else {
        *(undefined1 **)local_90 = puVar45;
        if ((ulong *)puVar45 == (ulong *)0x0) goto LAB_001f2d6d;
      }
      _Py_Ticker = _Py_Ticker - 1;
      if ((int)_Py_Ticker < 0) goto LAB_001f09c5;
      uVar49 = (ulong)DAT_004a25b8;
      local_90 = ppuVar22;
      if (DAT_004a25b8 == 0) {
        *(undefined4 *)(lParm1 + 0x78) = (int)(pbVar35 + -local_f0);
                    /* WARNING: Could not recover jumptable at 0x001f24da. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar18 = (*(code *)(&PTR_LAB_0040cae0)[(ulong)*pbVar35])
                           ((ulong)*pbVar35,(&PTR_LAB_0040cae0)[(ulong)*pbVar35],pbVar35 + -local_f0
                            ,uVar49,pbVar35 + 1);
        return (ulong *)uVar18;
      }
      goto LAB_001f09e9;
    case 0x6a:
      local_e0 = *(undefined1 **)(local_d0 + 0x18 + (long)(int)uVar11 * 8);
      puVar27 = local_90[-1];
      puVar45 = (undefined1 *)PyObject_GetAttr();
      *puVar27 = *puVar27 - 1;
      if (*puVar27 == 0) {
        (**(code **)(puVar27[1] + 0x30))();
      }
      uVar23 = (uint)((ulong)ppuVar40 >> 0x20);
      *(undefined1 **)(local_90 + -1) = puVar45;
      if ((ulong *)puVar45 == (ulong *)0x0) {
        bVar50 = false;
        ppuVar22 = local_90;
        goto LAB_001f2d6d;
      }
      _Py_Ticker = _Py_Ticker - 1;
      ppuVar22 = local_90;
      if ((int)_Py_Ticker < 0) goto LAB_001f09c5;
      uVar49 = (ulong)DAT_004a25b8;
      if (DAT_004a25b8 == 0) {
        *(int *)(lParm1 + 0x78) = iVar14 - iVar15;
                    /* WARNING: Could not recover jumptable at 0x001f5a98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar18 = (*(code *)(&PTR_LAB_0040cae0)[(ulong)*pbVar35])();
        return (ulong *)uVar18;
      }
      goto LAB_001f09e9;
    case 0x6b:
      local_e0 = (undefined1 *)local_90[-1];
      ppuVar22 = local_90 + -1;
      puVar27 = local_90[-2];
      puVar45 = (undefined1 *)((ulong *)local_e0)[1];
      if (puVar45 == PyInt_Type) {
        puVar45 = (undefined1 *)puVar27[1];
        if (puVar45 != PyInt_Type) {
          puVar45 = PyInt_Type;
          goto LAB_001f1156;
        }
        uVar49 = puVar27[2];
        uVar26 = ((ulong *)local_e0)[2];
        switch(uVar42) {
        case 0:
          bVar50 = (long)uVar49 < (long)uVar26;
          break;
        case 1:
          bVar50 = (long)uVar49 <= (long)uVar26;
          break;
        case 2:
          goto joined_r0x001f5cb3;
        case 3:
joined_r0x001f5cb3:
          if (uVar49 == uVar26) goto code_r0x001f5c5a;
          goto code_r0x001f5cb5;
        case 4:
          bVar50 = (long)uVar26 < (long)uVar49;
          break;
        case 5:
          bVar50 = (long)uVar26 <= (long)uVar49;
          break;
        case 8:
          bVar50 = puVar27 == (ulong *)local_e0;
          break;
        case 9:
          bVar50 = puVar27 != (ulong *)local_e0;
          break;
        default:
          goto LAB_001f1156;
        }
        if (bVar50) {
code_r0x001f5cb5:
          puVar45 = _Py_TrueStruct;
        }
        else {
code_r0x001f5c5a:
          puVar45 = _Py_ZeroStruct;
        }
        *(ulong *)puVar45 = *(ulong *)puVar45 + 1;
        *puVar27 = *puVar27 - 1;
        if (*puVar27 == 0) goto LAB_001f6a2a;
        uVar49 = *(ulong *)local_e0;
        *(ulong *)local_e0 = uVar49 - 1;
        if (uVar49 - 1 == 0) goto LAB_001f6a57;
        *(undefined1 **)(local_90 + -2) = puVar45;
        goto joined_r0x001f5ca5;
      }
LAB_001f1156:
      switch(uVar11) {
      case 6:
        if ((((puVar45[0xa8] & 2) == 0) || (*(long *)(puVar45 + 0x68) == 0)) ||
           (UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(puVar45 + 0x68) + 0x38),
           UNRECOVERED_JUMPTABLE == (code *)0x0)) {
          uVar23 = _PySequence_IterSearch(local_e0,puVar27,3);
        }
        else {
          uVar23 = (*UNRECOVERED_JUMPTABLE)();
        }
        if ((int)uVar23 < 0) goto code_r0x001f8b89;
        goto joined_r0x001f126f;
      case 7:
        iVar48 = PySequence_Contains();
        if (iVar48 < 0) goto code_r0x001f8b89;
        uVar23 = (uint)(iVar48 == 0);
        goto joined_r0x001f126f;
      case 8:
        if (puVar27 == (ulong *)local_e0) goto code_r0x001f1257;
        goto code_r0x001f11bd;
      case 9:
        uVar23 = (uint)(puVar27 != (ulong *)local_e0);
        goto joined_r0x001f126f;
      default:
        puVar45 = (undefined1 *)PyObject_RichCompare(puVar27,local_e0,uVar42);
        uVar23 = (uint)((ulong)ppuVar40 >> 0x20);
        *puVar27 = *puVar27 - 1;
        if (*puVar27 == 0) goto LAB_001f6a2a;
        uVar49 = *(ulong *)local_e0;
        *(ulong *)local_e0 = uVar49 - 1;
        if (uVar49 - 1 == 0) goto LAB_001f6a57;
        *(undefined1 **)(local_90 + -2) = puVar45;
        if ((ulong *)puVar45 != (ulong *)0x0) goto joined_r0x001f5ca5;
        bVar50 = false;
        goto LAB_001f2d6d;
      case 10:
        goto code_r0x001f5d02;
      }
    case 0x6c:
      local_e0 = *(undefined1 **)(local_d0 + 0x18 + (long)(int)uVar11 * 8);
      plVar30 = (long *)PyDict_GetItemString(*(undefined8 *)(lParm1 + 0x28),0x301d16);
      uVar23 = (uint)((ulong)ppuVar40 >> 0x20);
      if (plVar30 == (long *)0x0) {
        puVar45 = (undefined1 *)0x0;
        PyErr_SetString();
        bVar50 = false;
        ppuVar22 = local_90;
        goto LAB_001f2d6d;
      }
      *plVar30 = *plVar30 + 1;
      puVar27 = local_90[-2];
      ppuVar22 = local_90 + -1;
      puVar25 = local_90[-1];
      lVar47 = PyInt_AsLong(puVar27);
      if (lVar47 == -1) {
        if (*(long *)(_PyThreadState_Current + 0x48) != 0) {
          PyErr_Clear();
          goto LAB_001f8a6c;
        }
        local_e0 = (undefined1 *)PyTuple_Pack(4,local_e0,*(undefined8 *)(lParm1 + 0x30));
      }
      else {
LAB_001f8a6c:
        local_e0 = (undefined1 *)PyTuple_Pack(5,local_e0,*(undefined8 *)(lParm1 + 0x30));
      }
      *puVar25 = *puVar25 - 1;
      if (*puVar25 == 0) {
        (**(code **)(puVar25[1] + 0x30))(puVar25);
      }
      *puVar27 = *puVar27 - 1;
      if (*puVar27 == 0) {
        (**(code **)(puVar27[1] + 0x30))(puVar27);
      }
      uVar23 = (uint)((ulong)ppuVar40 >> 0x20);
      if ((ulong *)local_e0 == (ulong *)0x0) {
        *plVar30 = *plVar30 + -1;
        ppuVar22 = local_90 + -2;
        if (*plVar30 == 0) {
          (**(code **)(plVar30[1] + 0x30))();
          uVar23 = (uint)((ulong)ppuVar22 >> 0x20);
          puVar45 = (undefined1 *)0x0;
          bVar50 = false;
        }
        else {
          puVar45 = (undefined1 *)0x0;
          bVar50 = false;
        }
        goto LAB_001f2d6d;
      }
      puVar45 = (undefined1 *)PyEval_CallObjectWithKeywords(plVar30,local_e0,0);
      *plVar30 = *plVar30 + -1;
      if (*plVar30 == 0) {
        (**(code **)(plVar30[1] + 0x30))(plVar30);
      }
      uVar49 = *(ulong *)local_e0;
      *(ulong *)local_e0 = uVar49 - 1;
      if (uVar49 - 1 == 0) {
        (**(code **)(((ulong *)local_e0)[1] + 0x30))();
      }
      uVar23 = (uint)((ulong)ppuVar40 >> 0x20);
      *(undefined1 **)(local_90 + -2) = puVar45;
      if ((ulong *)puVar45 == (ulong *)0x0) {
        bVar50 = false;
        goto LAB_001f2d6d;
      }
      _Py_Ticker = _Py_Ticker - 1;
      if ((int)_Py_Ticker < 0) goto LAB_001f09c5;
      uVar49 = (ulong)DAT_004a25b8;
      local_90 = ppuVar22;
      if (DAT_004a25b8 == 0) {
        *(int *)(lParm1 + 0x78) = iVar14 - iVar15;
                    /* WARNING: Could not recover jumptable at 0x001f3ba4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar18 = (*(code *)(&PTR_LAB_0040cae0)[(ulong)*pbVar35])();
        return (ulong *)uVar18;
      }
      goto LAB_001f09e9;
    case 0x6d:
      local_e0 = *(undefined1 **)(local_d0 + 0x18 + (long)(int)uVar11 * 8);
      puVar45 = (undefined1 *)PyObject_GetAttr();
      ppuVar22 = local_90 + 1;
      if ((ulong *)puVar45 != (ulong *)0x0) {
        *(undefined1 **)local_90 = puVar45;
        _Py_Ticker = _Py_Ticker - 1;
        if ((int)_Py_Ticker < 0) goto LAB_001f09c5;
        uVar49 = (ulong)DAT_004a25b8;
        local_90 = ppuVar22;
        if (DAT_004a25b8 == 0) {
          *(int *)(lParm1 + 0x78) = iVar14 - iVar15;
                    /* WARNING: Could not recover jumptable at 0x001f3a18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar18 = (*(code *)(&PTR_LAB_0040cae0)[(ulong)*pbVar35])();
          return (ulong *)uVar18;
        }
        goto LAB_001f09e9;
      }
      iVar15 = PyErr_ExceptionMatches();
      if (iVar15 != 0) {
        uVar18 = PyString_AsString(local_e0);
        PyErr_Format(PyExc_ImportError,"cannot import name %.230s",uVar18);
      }
      *local_90 = (ulong *)0x0;
      goto LAB_001f36c0;
    case 0x6e:
      uVar49 = (ulong)DAT_004a25b8;
      pbVar35 = pbVar35 + (long)(int)uVar11;
      if (DAT_004a25b8 == 0) {
        *(undefined4 *)(lParm1 + 0x78) = (int)(pbVar35 + -local_f0);
                    /* WARNING: Could not recover jumptable at 0x001f1901. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar18 = (*(code *)(&PTR_LAB_0040cae0)[(ulong)*pbVar35])
                           (pbVar35 + -local_f0,(&PTR_LAB_0040cae0)[(ulong)*pbVar35],
                            &PTR_LAB_0040cae0,uVar49,pbVar35 + 1);
        return (ulong *)uVar18;
      }
      goto LAB_001f09e9;
    case 0x6f:
      local_e0 = (undefined1 *)local_90[-1];
      if (local_e0 == _Py_TrueStruct) {
        _Py_TrueStruct._0_8_ = _Py_TrueStruct._0_8_ + -1;
        if (_Py_TrueStruct._0_8_ == 0) {
          (**(code **)(_Py_TrueStruct._8_8_ + 0x30))();
        }
        uVar49 = (ulong)DAT_004a25b8;
        local_90 = local_90 + -1;
        if (DAT_004a25b8 == 0) {
          *(int *)(lParm1 + 0x78) = iVar14 - iVar15;
LAB_001f25c9:
                    /* WARNING: Could not recover jumptable at 0x001f25e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar18 = (*(code *)(&PTR_LAB_0040cae0)[(ulong)*pbVar35])();
          return (ulong *)uVar18;
        }
        goto LAB_001f09e9;
      }
      if (local_e0 == _Py_ZeroStruct) {
        pbVar35 = (byte *)((long)(int)uVar11 + local_f0);
        uVar49 = (ulong)DAT_004a25b8;
        if (DAT_004a25b8 == 0) {
          *(uint *)(lParm1 + 0x78) = uVar11;
          goto LAB_001f25c9;
        }
        goto LAB_001f09e9;
      }
      iVar14 = PyObject_IsTrue();
      if (iVar14 < 1) {
        if (iVar14 != 0) {
          bVar50 = false;
          ppuVar22 = local_90;
          goto LAB_001f2d6d;
        }
        pbVar35 = (byte *)(local_f0 + (long)(int)uVar11);
      }
      else {
        local_90 = local_90 + -1;
        uVar23 = (uint)(*(ulong *)local_e0 >> 0x20);
        uVar49 = *(ulong *)local_e0 - 1;
        *(ulong *)local_e0 = uVar49;
        if (uVar49 == 0) {
          (**(code **)(((ulong *)local_e0)[1] + 0x30))();
          uVar23 = (uint)((ulong)local_90 >> 0x20);
        }
      }
      _Py_Ticker = _Py_Ticker - 1;
      uVar42 = (ulong)_Py_Ticker;
      if (-1 < (int)_Py_Ticker) {
        uVar49 = (ulong)DAT_004a25b8;
        if (DAT_004a25b8 == 0) {
          *(int *)(lParm1 + 0x78) = (int)pbVar35 - iVar15;
                    /* WARNING: Could not recover jumptable at 0x001f9a8a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar18 = (*(code *)(&PTR_LAB_0040cae0)[(ulong)*pbVar35])
                             (uVar42,&PTR_LAB_0040cae0,(&PTR_LAB_0040cae0)[(ulong)*pbVar35],uVar49,
                              pbVar35 + 1);
          return (ulong *)uVar18;
        }
        ppuVar40 = (ulong **)((ulong)uVar23 << 0x20);
        goto LAB_001f09e9;
      }
      break;
    case 0x70:
      local_e0 = (undefined1 *)local_90[-1];
      if (local_e0 == _Py_ZeroStruct) {
        _Py_ZeroStruct._0_8_ = _Py_ZeroStruct._0_8_ + -1;
        if (_Py_ZeroStruct._0_8_ == 0) {
          (**(code **)(_Py_ZeroStruct._8_8_ + 0x30))();
        }
        uVar49 = (ulong)DAT_004a25b8;
        local_90 = local_90 + -1;
        if (DAT_004a25b8 == 0) {
          *(int *)(lParm1 + 0x78) = iVar14 - iVar15;
                    /* WARNING: Could not recover jumptable at 0x001f8860. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar18 = (*(code *)(&PTR_LAB_0040cae0)[(ulong)*pbVar35])();
          return (ulong *)uVar18;
        }
        goto LAB_001f09e9;
      }
      if (local_e0 == _Py_TrueStruct) {
        pbVar35 = (byte *)((long)(int)uVar11 + local_f0);
        uVar49 = (ulong)DAT_004a25b8;
        if (DAT_004a25b8 == 0) {
          *(uint *)(lParm1 + 0x78) = uVar11;
                    /* WARNING: Could not recover jumptable at 0x001f8808. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar18 = (*(code *)(&PTR_LAB_0040cae0)[(ulong)*pbVar35])();
          return (ulong *)uVar18;
        }
        goto LAB_001f09e9;
      }
      iVar14 = PyObject_IsTrue();
      if (iVar14 < 1) {
        if (iVar14 != 0) {
          bVar50 = false;
          ppuVar22 = local_90;
          goto LAB_001f2d6d;
        }
        local_90 = local_90 + -1;
        uVar23 = (uint)(*(ulong *)local_e0 >> 0x20);
        uVar49 = *(ulong *)local_e0 - 1;
        *(ulong *)local_e0 = uVar49;
        lVar47 = extraout_RDX_01;
        if (uVar49 == 0) {
          (**(code **)(((ulong *)local_e0)[1] + 0x30))();
          uVar23 = (uint)((ulong)local_90 >> 0x20);
          lVar47 = extraout_RDX_03;
        }
      }
      else {
        pbVar35 = (byte *)(local_f0 + (long)(int)uVar11);
        lVar47 = local_f0;
      }
      _Py_Ticker = _Py_Ticker - 1;
      if (-1 < (int)_Py_Ticker) {
        uVar49 = (ulong)DAT_004a25b8;
        if (DAT_004a25b8 == 0) {
          *(int *)(lParm1 + 0x78) = (int)pbVar35 - iVar15;
                    /* WARNING: Could not recover jumptable at 0x001f2c31. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar18 = (*(code *)(&PTR_LAB_0040cae0)[(ulong)*pbVar35])
                             (&PTR_LAB_0040cae0,(&PTR_LAB_0040cae0)[(ulong)*pbVar35],lVar47,uVar49,
                              pbVar35 + 1,&_Py_Ticker,local_100,(ulong)uVar23 << 0x20);
          return (ulong *)uVar18;
        }
        ppuVar40 = (ulong **)((ulong)uVar23 << 0x20);
        goto LAB_001f09e9;
      }
      break;
    case 0x71:
      pbVar35 = (byte *)((long)(int)uVar11 + local_f0);
      _Py_Ticker = _Py_Ticker - 1;
      ppuVar22 = local_90;
      if ((int)_Py_Ticker < 0) goto LAB_001f09c5;
      uVar49 = (ulong)DAT_004a25b8;
      if (DAT_004a25b8 == 0) {
        *(uint *)(lParm1 + 0x78) = uVar11;
                    /* WARNING: Could not recover jumptable at 0x001f5bee. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar18 = (*(code *)(&PTR_LAB_0040cae0)[(ulong)*pbVar35])();
        return (ulong *)uVar18;
      }
      goto LAB_001f09e9;
    case 0x72:
      ppuVar22 = local_90 + -1;
      local_e0 = (undefined1 *)local_90[-1];
      if (local_e0 == _Py_TrueStruct) {
        _Py_TrueStruct._0_8_ = _Py_TrueStruct._0_8_ + -1;
        if (_Py_TrueStruct._0_8_ == 0) {
          (**(code **)(_Py_TrueStruct._8_8_ + 0x30))();
          uVar49 = (ulong)DAT_004a25b8;
          if (DAT_004a25b8 == 0) {
            *(int *)(lParm1 + 0x78) = iVar14 - iVar15;
            UNRECOVERED_JUMPTABLE = (code *)(&PTR_LAB_0040cae0)[(ulong)*pbVar35];
            goto LAB_001590ac;
          }
          local_e0 = _Py_TrueStruct;
          local_90 = ppuVar22;
        }
        else {
          uVar49 = (ulong)DAT_004a25b8;
          if (DAT_004a25b8 == 0) {
            *(int *)(lParm1 + 0x78) = iVar14 - iVar15;
                    /* WARNING: Could not recover jumptable at 0x001f5b09. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            uVar18 = (*(code *)(&PTR_LAB_0040cae0)[(ulong)*pbVar35])
                               (&PTR_LAB_0040cae0,(&PTR_LAB_0040cae0)[(ulong)*pbVar35],ppuVar22,
                                uVar49,pbVar35 + 1);
            return (ulong *)uVar18;
          }
          local_e0 = _Py_TrueStruct;
          local_90 = ppuVar22;
        }
        goto LAB_001f09e9;
      }
      if (local_e0 == _Py_ZeroStruct) {
        _Py_ZeroStruct._0_8_ = _Py_ZeroStruct._0_8_ + -1;
        if (_Py_ZeroStruct._0_8_ == 0) {
          (**(code **)(_Py_ZeroStruct._8_8_ + 0x30))();
          pbVar35 = (byte *)((long)(int)uVar11 + local_f0);
          uVar49 = (ulong)DAT_004a25b8;
          local_90 = ppuVar22;
          if (DAT_004a25b8 == 0) {
            *(uint *)(lParm1 + 0x78) = uVar11;
            UNRECOVERED_JUMPTABLE = (code *)(&PTR_LAB_0040cae0)[(ulong)*pbVar35];
            goto LAB_001590ac;
          }
        }
        else {
          pbVar35 = (byte *)((long)(int)uVar11 + local_f0);
          uVar49 = (ulong)DAT_004a25b8;
          local_90 = ppuVar22;
          if (DAT_004a25b8 == 0) {
            *(uint *)(lParm1 + 0x78) = uVar11;
                    /* WARNING: Could not recover jumptable at 0x001f1043. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            uVar18 = (*(code *)(&PTR_LAB_0040cae0)[(ulong)*pbVar35])
                               (&DAT_003075c0,(&PTR_LAB_0040cae0)[(ulong)*pbVar35],ppuVar22,uVar49,
                                pbVar35 + 1);
            return (ulong *)uVar18;
          }
        }
        goto LAB_001f09e9;
      }
      iVar14 = PyObject_IsTrue();
      uVar23 = (uint)(*(ulong *)local_e0 >> 0x20);
      uVar49 = *(ulong *)local_e0 - 1;
      *(ulong *)local_e0 = uVar49;
      local_90 = ppuVar22;
      if (uVar49 == 0) {
        local_90 = ppuVar22;
        (**(code **)(((ulong *)local_e0)[1] + 0x30))();
        uVar23 = (uint)((ulong)local_90 >> 0x20);
      }
      if (iVar14 < 1) {
        if (iVar14 != 0) {
          bVar50 = false;
          ppuVar22 = local_90;
          goto LAB_001f2d6d;
        }
        pbVar35 = (byte *)(local_f0 + (long)(int)uVar11);
      }
      _Py_Ticker = _Py_Ticker - 1;
      if (-1 < (int)_Py_Ticker) {
        if (DAT_004a25b8 == 0) {
          *(int *)(lParm1 + 0x78) = (int)pbVar35 - iVar15;
                    /* WARNING: Could not recover jumptable at 0x001f6896. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar18 = (*(code *)(&PTR_LAB_0040cae0)[(ulong)*pbVar35])();
          return (ulong *)uVar18;
        }
        uVar49 = (ulong)DAT_004a25b8;
        ppuVar40 = (ulong **)((ulong)uVar23 << 0x20);
        goto LAB_001f09e9;
      }
      break;
    case 0x73:
      local_e0 = (undefined1 *)local_90[-1];
      local_90 = local_90 + -1;
      if (local_e0 == _Py_ZeroStruct) {
        _Py_ZeroStruct._0_8_ = _Py_ZeroStruct._0_8_ + -1;
        if (_Py_ZeroStruct._0_8_ == 0) {
          (**(code **)(_Py_ZeroStruct._8_8_ + 0x30))();
        }
        uVar49 = (ulong)DAT_004a25b8;
        if (DAT_004a25b8 == 0) {
          *(int *)(lParm1 + 0x78) = iVar14 - iVar15;
                    /* WARNING: Could not recover jumptable at 0x001f6bd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar18 = (*(code *)(&PTR_LAB_0040cae0)[(ulong)*pbVar35])();
          return (ulong *)uVar18;
        }
        local_e0 = _Py_ZeroStruct;
        goto LAB_001f09e9;
      }
      if (local_e0 == _Py_TrueStruct) {
        _Py_TrueStruct._0_8_ = _Py_TrueStruct._0_8_ + -1;
        if (_Py_TrueStruct._0_8_ == 0) {
          (**(code **)(_Py_TrueStruct._8_8_ + 0x30))();
        }
        pbVar35 = (byte *)((long)(int)uVar11 + local_f0);
        uVar49 = (ulong)DAT_004a25b8;
        if (DAT_004a25b8 == 0) {
          *(uint *)(lParm1 + 0x78) = uVar11;
                    /* WARNING: Could not recover jumptable at 0x001f1572. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar18 = (*(code *)(&PTR_LAB_0040cae0)[(ulong)*pbVar35])
                             ((&PTR_LAB_0040cae0)[(ulong)*pbVar35]);
          return (ulong *)uVar18;
        }
        local_e0 = _Py_TrueStruct;
        goto LAB_001f09e9;
      }
      iVar14 = PyObject_IsTrue();
      uVar23 = (uint)(*(ulong *)local_e0 >> 0x20);
      uVar49 = *(ulong *)local_e0 - 1;
      *(ulong *)local_e0 = uVar49;
      if (uVar49 == 0) {
        (**(code **)(((ulong *)local_e0)[1] + 0x30))();
        uVar23 = (uint)((ulong)local_90 >> 0x20);
      }
      if (iVar14 < 1) {
        if (iVar14 != 0) {
          bVar50 = false;
          ppuVar22 = local_90;
          goto LAB_001f2d6d;
        }
      }
      else {
        pbVar35 = (byte *)(local_f0 + (long)(int)uVar11);
      }
      _Py_Ticker = _Py_Ticker - 1;
      if (-1 < (int)_Py_Ticker) {
        uVar49 = (ulong)DAT_004a25b8;
        if (DAT_004a25b8 == 0) {
          *(int *)(lParm1 + 0x78) = (int)pbVar35 - iVar15;
                    /* WARNING: Could not recover jumptable at 0x001f6205. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar18 = (*(code *)(&PTR_LAB_0040cae0)[(ulong)*pbVar35])();
          return (ulong *)uVar18;
        }
        ppuVar40 = (ulong **)((ulong)uVar23 << 0x20);
        goto LAB_001f09e9;
      }
      break;
    case 0x74:
      local_e0 = *(undefined1 **)(local_d0 + 0x18 + (long)(int)uVar11 * 8);
      if (((undefined1 *)((ulong *)local_e0)[1] == PyString_Type) &&
         (uVar49 = ((ulong *)local_e0)[3], uVar49 != 0xffffffffffffffff)) {
        puVar45 = (undefined1 *)
                  (**(code **)(*(long *)(lParm1 + 0x30) + 0x30))
                            (*(long *)(lParm1 + 0x30),local_e0,uVar49);
        uVar23 = (uint)((ulong)ppuVar40 >> 0x20);
        if ((ulong *)puVar45 == (ulong *)0x0) {
          bVar50 = false;
          ppuVar22 = local_90;
          goto LAB_001f2d6d;
        }
        puVar45 = (undefined1 *)((ulong *)puVar45)[2];
        if ((ulong *)puVar45 != (ulong *)0x0) {
          *(ulong *)puVar45 = *(ulong *)puVar45 + 1;
          *(undefined1 **)local_90 = puVar45;
          _Py_Ticker = _Py_Ticker - 1;
          ppuVar22 = local_90 + 1;
          if ((int)_Py_Ticker < 0) goto LAB_001f09c5;
          uVar49 = (ulong)DAT_004a25b8;
          local_90 = local_90 + 1;
          if (DAT_004a25b8 == 0) {
            *(int *)(lParm1 + 0x78) = iVar14 - iVar15;
                    /* WARNING: Could not recover jumptable at 0x001f111b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            uVar18 = (*(code *)(&PTR_LAB_0040cae0)[(ulong)*pbVar35])();
            return (ulong *)uVar18;
          }
          goto LAB_001f09e9;
        }
        puVar45 = (undefined1 *)
                  (**(code **)(*(long *)(lParm1 + 0x28) + 0x30))
                            (*(long *)(lParm1 + 0x28),local_e0,uVar49);
        uVar23 = (uint)((ulong)ppuVar40 >> 0x20);
        if ((ulong *)puVar45 == (ulong *)0x0) {
          bVar50 = false;
          ppuVar22 = local_90;
          goto LAB_001f2d6d;
        }
        puVar45 = (undefined1 *)((ulong *)puVar45)[2];
        if ((ulong *)puVar45 != (ulong *)0x0) {
          *(ulong *)puVar45 = *(ulong *)puVar45 + 1;
          *(undefined1 **)local_90 = puVar45;
          _Py_Ticker = _Py_Ticker - 1;
          ppuVar22 = local_90 + 1;
          if ((int)_Py_Ticker < 0) goto LAB_001f09c5;
          uVar49 = (ulong)DAT_004a25b8;
          local_90 = local_90 + 1;
          if (DAT_004a25b8 == 0) {
            *(int *)(lParm1 + 0x78) = iVar14 - iVar15;
                    /* WARNING: Could not recover jumptable at 0x001f0c06. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            uVar18 = (*(code *)(&PTR_LAB_0040cae0)[(ulong)*pbVar35])();
            return (ulong *)uVar18;
          }
          goto LAB_001f09e9;
        }
      }
      else {
        puVar45 = (undefined1 *)PyDict_GetItem();
        if (((ulong *)puVar45 != (ulong *)0x0) ||
           (puVar45 = (undefined1 *)PyDict_GetItem(), (ulong *)puVar45 != (ulong *)0x0)) {
          *(ulong *)puVar45 = *(ulong *)puVar45 + 1;
          *(undefined1 **)local_90 = puVar45;
          _Py_Ticker = _Py_Ticker - 1;
          ppuVar22 = local_90 + 1;
          if ((int)_Py_Ticker < 0) goto LAB_001f09c5;
          uVar49 = (ulong)DAT_004a25b8;
          local_90 = local_90 + 1;
          if (DAT_004a25b8 == 0) {
            *(int *)(lParm1 + 0x78) = iVar14 - iVar15;
            UNRECOVERED_JUMPTABLE = (code *)(&PTR_LAB_0040cae0)[(ulong)*pbVar35];
            goto LAB_001590ac;
          }
          goto LAB_001f09e9;
        }
      }
      puVar45 = (undefined1 *)0x0;
      FUN_002773b0(PyExc_NameError,"global name \'%.200s\' is not defined",local_e0);
      uVar23 = (uint)((ulong)pbVar35 >> 0x20);
      bVar50 = false;
      ppuVar22 = local_90;
      goto LAB_001f2d6d;
    case 0x77:
      local_e8 = (ulong *)PyInt_FromLong();
      uVar23 = (uint)((ulong)ppuVar40 >> 0x20);
      if (local_e8 != (ulong *)0x0) {
        uVar49 = 0x20;
        goto LAB_001f128a;
      }
      puVar45 = (undefined1 *)0x0;
      bVar50 = false;
      ppuVar22 = local_90;
      goto LAB_001f2d6d;
    case 0x78:
    case 0x79:
    case 0x7a:
      iVar48 = *(int *)(lParm1 + 0x80);
      lVar47 = *(long *)(lParm1 + 0x40);
      iVar14 = iVar14 - iVar15;
      if (0x13 < iVar48) goto LAB_00159df9;
      lVar17 = lParm1 + (long)iVar48 * 0xc;
      *(int *)(lParm1 + 0x80) = iVar48 + 1;
      *(int *)(lVar17 + 0x88) = uVar11 + iVar14;
      *(int *)(lVar17 + 0x84) = (int)uVar26;
      _Py_Ticker = _Py_Ticker - 1;
      *(undefined4 *)(lVar17 + 0x8c) = (int)((long)((long)local_90 - lVar47) >> 3);
      ppuVar22 = local_90;
      if ((int)_Py_Ticker < 0) goto LAB_001f09c5;
joined_r0x001f1b48:
      uVar49 = (ulong)DAT_004a25b8;
      if (DAT_004a25b8 == 0) {
        *(int *)(lParm1 + 0x78) = iVar14;
                    /* WARNING: Could not recover jumptable at 0x001f1b67. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar18 = (*(code *)(&PTR_LAB_0040cae0)[(ulong)*pbVar35])();
        return (ulong *)uVar18;
      }
      goto LAB_001f09e9;
    case 0x7c:
      puVar45 = *(undefined1 **)(local_d8 + (long)(int)uVar11 * 8);
      if ((ulong *)puVar45 == (ulong *)0x0) {
        puVar45 = (undefined1 *)0x0;
        uVar18 = PyTuple_GetItem(*(undefined8 *)(local_a0 + 0x38));
        FUN_002773b0(PyExc_UnboundLocalError,
                     "local variable \'%.200s\' referenced before assignment",uVar18);
        bVar50 = false;
        ppuVar22 = local_90;
        goto LAB_001f2d6d;
      }
      *(ulong *)puVar45 = *(ulong *)puVar45 + 1;
      *(undefined1 **)local_90 = puVar45;
      uVar49 = (ulong)DAT_004a25b8;
      local_90 = local_90 + 1;
      if (DAT_004a25b8 == 0) {
        *(int *)(lParm1 + 0x78) = iVar14 - iVar15;
                    /* WARNING: Could not recover jumptable at 0x001f0aa3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar18 = (*(code *)(&PTR_LAB_0040cae0)[(ulong)*pbVar35])();
        return (ulong *)uVar18;
      }
      goto LAB_001f09e9;
    case 0x7d:
      ppuVar22 = (ulong **)(local_d8 + (long)(int)uVar11 * 8);
      puVar27 = *ppuVar22;
      *ppuVar22 = local_90[-1];
      if ((puVar27 == (ulong *)0x0) || (*puVar27 = *puVar27 - 1, *puVar27 != 0)) {
        uVar49 = (ulong)DAT_004a25b8;
        local_90 = local_90 + -1;
        if (DAT_004a25b8 == 0) {
          *(undefined4 *)(lParm1 + 0x78) = (int)(pbVar35 + -local_f0);
                    /* WARNING: Could not recover jumptable at 0x001f0cef. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar18 = (*(code *)(&PTR_LAB_0040cae0)[(ulong)*pbVar35])
                             (pbVar35 + -local_f0,(&PTR_LAB_0040cae0)[(ulong)*pbVar35],uVar26,uVar49
                              ,pbVar35 + 1);
          return (ulong *)uVar18;
        }
      }
      else {
        (**(code **)(puVar27[1] + 0x30))();
        uVar49 = (ulong)DAT_004a25b8;
        local_90 = local_90 + -1;
        if (DAT_004a25b8 == 0) {
          *(int *)(lParm1 + 0x78) = iVar14 - iVar15;
                    /* WARNING: Could not recover jumptable at 0x001f6642. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar18 = (*(code *)(&PTR_LAB_0040cae0)[(ulong)*pbVar35])();
          return (ulong *)uVar18;
        }
      }
      goto LAB_001f09e9;
    case 0x7e:
      ppuVar22 = (ulong **)(local_d8 + (long)(int)uVar11 * 8);
      puVar45 = (undefined1 *)*ppuVar22;
      if ((ulong *)puVar45 == (ulong *)0x0) {
        uVar18 = PyTuple_GetItem(*(undefined8 *)(local_a0 + 0x38));
        FUN_002773b0(PyExc_UnboundLocalError,
                     "local variable \'%.200s\' referenced before assignment",uVar18);
        uVar23 = (uint)((ulong)local_90 >> 0x20);
        bVar50 = false;
        ppuVar22 = local_90;
        goto LAB_001f2d6d;
      }
      *ppuVar22 = (ulong *)0x0;
      *(ulong *)puVar45 = *(ulong *)puVar45 - 1;
      if (*(ulong *)puVar45 == 0) {
        (**(code **)(((ulong *)puVar45)[1] + 0x30))();
      }
      _Py_Ticker = _Py_Ticker - 1;
      ppuVar22 = local_90;
      if ((int)_Py_Ticker < 0) goto LAB_001f09c5;
      uVar49 = (ulong)DAT_004a25b8;
      if (DAT_004a25b8 == 0) {
        *(int *)(lParm1 + 0x78) = iVar14 - iVar15;
                    /* WARNING: Could not recover jumptable at 0x001f4659. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar18 = (*(code *)(&PTR_LAB_0040cae0)[(ulong)*pbVar35])();
        return (ulong *)uVar18;
      }
      goto LAB_001f09e9;
    case 0x82:
      puVar25 = (ulong *)0x0;
      puVar27 = (ulong *)0x0;
      if (uVar11 == 1) {
LAB_001f55c8:
        local_e0 = (undefined1 *)local_90[-1];
        local_90 = local_90 + -1;
        local_50 = (ulong *)local_e0;
        local_48 = (undefined1 *)puVar27;
        local_40 = puVar25;
        if ((ulong *)local_e0 == (ulong *)0x0) goto LAB_001f940e;
LAB_001f55f6:
        if (local_40 == (ulong *)_Py_NoneStruct) {
          _Py_NoneStruct._0_8_ = _Py_NoneStruct._0_8_ + -1;
          if (_Py_NoneStruct._0_8_ == 0) {
            (**(code **)(_Py_NoneStruct._8_8_ + 0x30))(_Py_NoneStruct);
          }
          local_40 = (ulong *)0x0;
        }
        else {
          if ((local_40 != (ulong *)0x0) && ((undefined1 *)local_40[1] != PyTraceBack_Type)) {
            PyErr_SetString(PyExc_TypeError);
            goto LAB_00158bdb;
          }
        }
LAB_001f560a:
        if ((ulong *)local_48 != (ulong *)0x0) goto LAB_001f562d;
      }
      else {
        if (1 < (int)uVar11) {
          ppuVar22 = local_90;
          if (uVar11 != 2) {
            if (uVar11 != 3) goto LAB_001fa790;
            puVar25 = local_90[-1];
            ppuVar22 = local_90 + -1;
          }
          local_90 = ppuVar22 + -1;
          puVar27 = ppuVar22[-1];
          goto LAB_001f55c8;
        }
        if (uVar11 != 0) {
LAB_001fa790:
          uVar49 = 2;
          PyErr_SetString();
          local_e0 = (undefined1 *)0x0;
          goto LAB_001f571f;
        }
LAB_001f940e:
        local_50 = *(ulong **)(_PyThreadState_Current + 0x60);
        if (*(ulong **)(_PyThreadState_Current + 0x60) == (ulong *)0x0) {
          local_50 = (ulong *)puVar21;
        }
        local_48 = *(undefined1 **)(_PyThreadState_Current + 0x68);
        local_40 = *(ulong **)(_PyThreadState_Current + 0x70);
        *local_50 = *local_50 + 1;
        if ((ulong *)local_48 != (ulong *)0x0) {
          *(ulong *)local_48 = *(ulong *)local_48 + 1;
          local_e0 = (undefined1 *)local_40;
          if (local_40 != (ulong *)0x0) goto LAB_001f9476;
          goto LAB_001f560a;
        }
        local_e0 = (undefined1 *)local_40;
        if (local_40 != (ulong *)0x0) {
LAB_001f9476:
          local_e0 = (undefined1 *)0x0;
          *local_40 = *local_40 + 1;
          goto LAB_001f55f6;
        }
      }
      _Py_NoneStruct._0_8_ = _Py_NoneStruct._0_8_ + 1;
      local_48 = _Py_NoneStruct;
      goto LAB_001f562d;
    case 0x83:
      uVar23 = (uint)bVar28;
      uVar49 = (ulong)uVar23;
      iVar48 = (uint)bVar32 + (uint)bVar32;
      iVar38 = uVar23 + iVar48;
      ppuVar22 = local_90 + (long)iVar38 * 0x1fffffffffffffff + -1;
      puVar27 = *ppuVar22;
      puVar45 = (undefined1 *)puVar27[1];
      if ((puVar45 != PyCFunction_Type) || (bVar32 != 0)) {
        if ((puVar45 == PyMethod_Type) && (puVar25 = (ulong *)puVar27[3], puVar25 != (ulong *)0x0))
        {
          *puVar25 = *puVar25 + 1;
          puVar27 = (ulong *)puVar27[2];
          *puVar27 = *puVar27 + 1;
          puVar31 = *ppuVar22;
          *ppuVar22 = puVar25;
          *puVar31 = *puVar31 - 1;
          if (*puVar31 != 0) {
            uVar23 = uVar23 + 1;
            uVar49 = (ulong)uVar23;
            iVar38 = iVar38 + 1;
            ppuStack96 = local_90;
            if ((undefined1 *)puVar27[1] == PyFunction_Type) goto LAB_001f633e;
            goto LAB_001f64b1;
          }
          uVar23 = uVar23 + 1;
          uVar49 = (ulong)uVar23;
          ppuStack96 = local_90;
          (**(code **)(puVar31[1] + 0x30))();
          iVar38 = iVar38 + 1;
          if ((undefined1 *)puVar27[1] != PyFunction_Type) goto LAB_001f64b1;
LAB_001f633e:
          lVar47 = _PyThreadState_Current;
          uVar42 = puVar27[4];
          uVar26 = puVar27[2];
          uVar7 = puVar27[3];
          if (uVar42 == 0) {
            if (((*(int *)(uVar26 + 0x10) != iVar38) || (bVar32 != 0)) ||
               (*(int *)(uVar26 + 0x1c) != 0x43)) {
              puVar45 = (undefined1 *)
                        PyEval_EvalCodeEx(uVar26,uVar7,0,
                                          ppuStack96 + (long)iVar38 * 0x1fffffffffffffff,uVar49,
                                          ppuStack96 + (long)iVar48 * 0x1fffffffffffffff,
                                          (ulong)bVar32,0,0,puVar27[5]);
            }
            else {
              plVar30 = (long *)PyFrame_New(_PyThreadState_Current,uVar26,uVar7);
              if (plVar30 == (long *)0x0) goto LAB_00159d23;
              if (iVar38 != 0) {
                ppuVar43 = ppuStack96 + (long)iVar38 * 0x1fffffffffffffff;
                **ppuVar43 = **ppuVar43 + 1;
                *(ulong **)(plVar30 + 0x2f) = *ppuVar43;
                if (iVar38 != 1) {
                  *ppuVar43[1] = *ppuVar43[1] + 1;
                  *(ulong **)(plVar30 + 0x30) = ppuVar43[1];
                  if (iVar38 != 2) {
                    *ppuVar43[2] = *ppuVar43[2] + 1;
                    *(ulong **)(plVar30 + 0x31) = ppuVar43[2];
                    if (iVar38 != 3) {
                      *ppuVar43[3] = *ppuVar43[3] + 1;
                      *(ulong **)(plVar30 + 0x32) = ppuVar43[3];
                      if (iVar38 != 4) {
                        lVar17 = 4;
                        do {
                          *ppuVar43[lVar17] = *ppuVar43[lVar17] + 1;
                          *(ulong **)(plVar30 + lVar17 + 0x2f) = ppuVar43[lVar17];
                          lVar17 = lVar17 + 1;
                        } while ((int)lVar17 < iVar38);
                      }
                    }
                  }
                }
              }
              puVar45 = (undefined1 *)PyEval_EvalFrameEx(plVar30);
              *(int *)(lVar47 + 0x18) = *(int *)(lVar47 + 0x18) + 1;
              *plVar30 = *plVar30 + -1;
              if (*plVar30 == 0) {
                (**(code **)(plVar30[1] + 0x30))(plVar30);
                *(int *)(lVar47 + 0x18) = *(int *)(lVar47 + 0x18) + -1;
              }
              else {
                *(int *)(lVar47 + 0x18) = *(int *)(lVar47 + 0x18) + -1;
              }
            }
          }
          else {
            puVar45 = (undefined1 *)
                      PyEval_EvalCodeEx(uVar26,uVar7,0,
                                        ppuStack96 + (long)iVar38 * 0x1fffffffffffffff,uVar49,
                                        ppuStack96 + (long)iVar48 * 0x1fffffffffffffff,(ulong)bVar32
                                        ,uVar42 + 0x18,*(undefined8 *)(uVar42 + 0x10),puVar27[5]);
          }
          goto LAB_001f6487;
        }
        *puVar27 = *puVar27 + 1;
        ppuStack96 = local_90;
        if (puVar45 == PyFunction_Type) goto LAB_001f633e;
LAB_001f64b1:
        if (bVar32 == 0) {
          plVar30 = (long *)PyTuple_New((long)(int)uVar23);
          if (plVar30 == (long *)0x0) goto LAB_00159d23;
          plVar46 = (long *)0x0;
          ppuVar43 = ppuStack96;
        }
        else {
          plVar46 = (long *)FUN_00215e00(0,(ulong)bVar32,&ppuStack96);
          if (plVar46 == (long *)0x0) {
LAB_00159d23:
            puVar45 = (undefined1 *)0x0;
            goto LAB_001f6487;
          }
          plVar30 = (long *)PyTuple_New((long)(int)uVar23);
          ppuVar43 = ppuStack96;
          if (plVar30 == (long *)0x0) {
            puVar45 = (undefined1 *)0x0;
            goto LAB_001f65cd;
          }
        }
        ppuStack96 = ppuVar43;
        if (uVar23 != 0) {
          ppuStack96 = ppuVar43 + -1;
          *(ulong **)(plVar30 + (long)(int)(uVar23 - 1) + 3) = ppuVar43[-1];
          if (uVar23 - 2 != -1) {
            ppuStack96 = ppuVar43 + -2;
            *(ulong **)(plVar30 + (long)(int)(uVar23 - 2) + 3) = ppuVar43[-2];
            if (uVar23 - 3 != -1) {
              ppuStack96 = ppuVar43 + -3;
              iVar48 = uVar23 - 4;
              *(ulong **)(plVar30 + (long)(int)(uVar23 - 3) + 3) = ppuVar43[-3];
              if (iVar48 != -1) {
                ppuVar43 = ppuVar43 + -4;
                do {
                  ppuStack96 = ppuVar43;
                  lVar47 = (long)iVar48;
                  iVar48 = iVar48 + -1;
                  *(ulong **)(plVar30 + lVar47 + 3) = *ppuStack96;
                  ppuVar43 = ppuStack96 + -1;
                } while (iVar48 != -1);
              }
            }
          }
        }
        lVar47 = _PyThreadState_Current;
        if ((undefined1 *)puVar27[1] == PyCFunction_Type) {
          if ((*(int *)(_PyThreadState_Current + 0x20) == 0) ||
             (*(long *)(_PyThreadState_Current + 0x28) == 0)) {
            puVar45 = (undefined1 *)PyCFunction_Call(puVar27,plVar30,plVar46);
          }
          else {
            iVar48 = FUN_00276300(*(long *)(_PyThreadState_Current + 0x28),
                                  *(undefined8 *)(_PyThreadState_Current + 0x38),
                                  *(undefined8 *)(_PyThreadState_Current + 0x10));
            if (iVar48 == 0) {
              puVar45 = (undefined1 *)PyCFunction_Call(puVar27,plVar30,plVar46);
              if (*(long *)(lVar47 + 0x28) != 0) {
                if ((ulong *)puVar45 == (ulong *)0x0) {
                  FUN_00276e10(*(long *)(lVar47 + 0x28),*(undefined8 *)(lVar47 + 0x38),
                               *(undefined8 *)(lVar47 + 0x10));
                }
                else {
                  iVar48 = FUN_00276300();
                  if (iVar48 != 0) {
                    *(ulong *)puVar45 = *(ulong *)puVar45 - 1;
                    if (*(ulong *)puVar45 != 0) goto LAB_001595ec;
                    (**(code **)(((ulong *)puVar45)[1] + 0x30))(puVar45);
                    puVar45 = (undefined1 *)(ulong *)0x0;
                  }
                }
              }
            }
            else {
LAB_001595ec:
              puVar45 = (undefined1 *)(ulong *)0x0;
            }
          }
          *plVar30 = *plVar30 + -1;
          if (*plVar30 == 0) {
            (**(code **)(plVar30[1] + 0x30))(plVar30);
          }
        }
        else {
          puVar45 = (undefined1 *)PyObject_Call(puVar27,plVar30,plVar46);
          *plVar30 = *plVar30 + -1;
          if (*plVar30 == 0) {
            (**(code **)(plVar30[1] + 0x30))(plVar30);
          }
        }
        if (plVar46 != (long *)0x0) {
LAB_001f65cd:
          *plVar46 = *plVar46 + -1;
          if (*plVar46 == 0) {
            (**(code **)(plVar46[1] + 0x30))(plVar46);
          }
        }
LAB_001f6487:
        *puVar27 = *puVar27 - 1;
        if (*puVar27 == 0) {
          (**(code **)(puVar27[1] + 0x30))(puVar27);
        }
      }
      else {
        puVar6 = (undefined8 *)puVar27[2];
        uVar11 = *(uint *)(puVar6 + 2);
        if ((uVar11 & 0xc) != 0) {
          UNRECOVERED_JUMPTABLE = (code *)puVar6[1];
          uVar49 = puVar27[3];
          if ((uVar11 & 4) == 0) {
            if (((uVar11 & 8) != 0) && (bVar28 == 1)) {
              iVar48 = *(int *)(_PyThreadState_Current + 0x20);
              puVar25 = local_90[-1];
joined_r0x00159690:
              if (iVar48 == 0) {
LAB_001f668f:
                ppuStack96 = local_90 + -1;
                puVar45 = (undefined1 *)(*UNRECOVERED_JUMPTABLE)(uVar49);
              }
              else {
                ppuStack96 = local_90 + -1;
                if (*(long *)(_PyThreadState_Current + 0x28) == 0) goto LAB_001f668f;
                iVar48 = FUN_00276300(*(long *)(_PyThreadState_Current + 0x28),
                                      *(undefined8 *)(_PyThreadState_Current + 0x38),
                                      *(undefined8 *)(_PyThreadState_Current + 0x10));
                if (iVar48 == 0) {
                  puVar45 = (undefined1 *)(*UNRECOVERED_JUMPTABLE)(uVar49);
                  if (*(long *)(lVar47 + 0x28) != 0) {
                    if ((ulong *)puVar45 == (ulong *)0x0) {
                      FUN_00276e10(*(long *)(lVar47 + 0x28),*(undefined8 *)(lVar47 + 0x38),
                                   *(undefined8 *)(lVar47 + 0x10));
                    }
                    else {
                      iVar48 = FUN_00276300();
                      if (iVar48 != 0) {
                        *(ulong *)puVar45 = *(ulong *)puVar45 - 1;
                        if (*(ulong *)puVar45 != 0) goto LAB_00158e80;
                        (**(code **)(((ulong *)puVar45)[1] + 0x30))(puVar45);
                        puVar45 = (undefined1 *)(ulong *)0x0;
                      }
                    }
                  }
                }
                else {
LAB_00158e80:
                  puVar45 = (undefined1 *)(ulong *)0x0;
                }
              }
              *puVar25 = *puVar25 - 1;
              uVar49 = *puVar25;
              goto joined_r0x001f669e;
            }
            uVar18 = *puVar6;
            pcVar34 = "%.200s() takes exactly one argument (%d given)";
LAB_00158e22:
            ppuStack96 = local_90;
            PyErr_Format(PyExc_TypeError,pcVar34,uVar18);
          }
          else {
            if (bVar28 != 0) {
              if (((uVar11 & 8) != 0) && (bVar28 == 1)) {
                iVar48 = *(int *)(_PyThreadState_Current + 0x20);
                puVar25 = local_90[-1];
                goto joined_r0x00159690;
              }
              uVar18 = *puVar6;
              pcVar34 = "%.200s() takes no arguments (%d given)";
              goto LAB_00158e22;
            }
            if ((*(int *)(_PyThreadState_Current + 0x20) == 0) ||
               (*(long *)(_PyThreadState_Current + 0x28) == 0)) {
              ppuStack96 = local_90;
              puVar45 = (undefined1 *)(*UNRECOVERED_JUMPTABLE)(uVar49);
              goto LAB_001f0e70;
            }
            ppuStack96 = local_90;
            iVar48 = FUN_00276300(*(long *)(_PyThreadState_Current + 0x28),
                                  *(undefined8 *)(_PyThreadState_Current + 0x38),
                                  *(undefined8 *)(_PyThreadState_Current + 0x10));
            if (iVar48 == 0) {
              puVar45 = (undefined1 *)(*UNRECOVERED_JUMPTABLE)(uVar49);
              if (*(long *)(lVar47 + 0x28) == 0) goto LAB_001f0e70;
              if ((ulong *)puVar45 == (ulong *)0x0) {
                FUN_00276e10(*(long *)(lVar47 + 0x28),*(undefined8 *)(lVar47 + 0x38),
                             *(undefined8 *)(lVar47 + 0x10));
                goto LAB_001f0e70;
              }
              iVar48 = FUN_00276300();
              if (iVar48 == 0) goto LAB_001f0e70;
              *(ulong *)puVar45 = *(ulong *)puVar45 - 1;
              if (*(ulong *)puVar45 == 0) {
                (**(code **)(((ulong *)puVar45)[1] + 0x30))(puVar45);
                puVar45 = (undefined1 *)(ulong *)0x0;
                goto LAB_001f0e70;
              }
            }
          }
          puVar45 = (undefined1 *)(ulong *)0x0;
          goto LAB_001f0e70;
        }
        ppuStack96 = local_90;
        puVar25 = (ulong *)PyTuple_New((long)(int)uVar23);
        ppuVar43 = ppuStack96;
        if ((puVar25 != (ulong *)0x0) && (ppuVar43 = ppuStack96, uVar23 - 1 != -1)) {
          *(ulong **)(puVar25 + (long)(int)(uVar23 - 1) + 3) = ppuStack96[-1];
          ppuVar43 = ppuStack96 + -1;
          if (uVar23 - 2 != -1) {
            *(ulong **)(puVar25 + (long)(int)(uVar23 - 2) + 3) = ppuStack96[-2];
            ppuVar43 = ppuStack96 + -2;
            if (uVar23 - 3 != -1) {
              iVar48 = uVar23 - 4;
              *(ulong **)(puVar25 + (long)(int)(uVar23 - 3) + 3) = ppuStack96[-3];
              ppuVar43 = ppuStack96 + -3;
              if (iVar48 != -1) {
                ppuVar33 = ppuStack96 + -4;
                do {
                  ppuVar43 = ppuVar33;
                  lVar17 = (long)iVar48;
                  iVar48 = iVar48 + -1;
                  *(ulong **)(puVar25 + lVar17 + 3) = *ppuVar43;
                  ppuVar33 = ppuVar43 + -1;
                } while (iVar48 != -1);
              }
            }
          }
        }
        ppuStack96 = ppuVar43;
        if ((*(int *)(lVar47 + 0x20) == 0) || (*(long *)(lVar47 + 0x28) == 0)) {
          puVar45 = (undefined1 *)PyCFunction_Call(puVar27,puVar25,0);
        }
        else {
          iVar48 = FUN_00276300(*(long *)(lVar47 + 0x28),*(undefined8 *)(lVar47 + 0x38),
                                *(undefined8 *)(lVar47 + 0x10));
          if (iVar48 == 0) {
            puVar45 = (undefined1 *)PyCFunction_Call(puVar27,puVar25,0);
            if (*(long *)(lVar47 + 0x28) != 0) {
              if ((ulong *)puVar45 == (ulong *)0x0) {
                FUN_00276e10(*(long *)(lVar47 + 0x28),*(undefined8 *)(lVar47 + 0x38),
                             *(undefined8 *)(lVar47 + 0x10));
              }
              else {
                iVar48 = FUN_00276300();
                if (iVar48 != 0) {
                  *(ulong *)puVar45 = *(ulong *)puVar45 - 1;
                  if (*(ulong *)puVar45 == 0) {
                    (**(code **)(((ulong *)puVar45)[1] + 0x30))(puVar45);
                  }
                  goto LAB_00159f42;
                }
              }
            }
          }
          else {
LAB_00159f42:
            puVar45 = (undefined1 *)0x0;
          }
        }
        if (puVar25 != (ulong *)0x0) {
          *puVar25 = *puVar25 - 1;
          uVar49 = *puVar25;
joined_r0x001f669e:
          if (uVar49 == 0) {
            (**(code **)(puVar25[1] + 0x30))(puVar25);
          }
        }
      }
LAB_001f0e70:
      while (uVar23 = (uint)((ulong)ppuVar40 >> 0x20), ppuVar22 < ppuStack96) {
        ppuVar43 = ppuStack96 + -1;
        puVar27 = ppuStack96[-1];
        *puVar27 = *puVar27 - 1;
        ppuStack96 = ppuVar43;
        if (*puVar27 == 0) {
          ppuStack96 = ppuVar43;
          (**(code **)(puVar27[1] + 0x30))();
        }
      }
      ppuVar22 = ppuStack96 + 1;
      *(undefined1 **)ppuStack96 = puVar45;
      if ((ulong *)puVar45 == (ulong *)0x0) {
        bVar50 = false;
        goto LAB_001f2d6d;
      }
      _Py_Ticker = _Py_Ticker - 1;
      if ((int)_Py_Ticker < 0) goto LAB_001f09c5;
      uVar49 = (ulong)DAT_004a25b8;
      local_90 = ppuVar22;
      if (DAT_004a25b8 == 0) {
        *(int *)(lParm1 + 0x78) = iVar14 - iVar15;
                    /* WARNING: Could not recover jumptable at 0x001f62a5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar18 = (*(code *)(&PTR_LAB_0040cae0)[(ulong)*pbVar35])();
        return (ulong *)uVar18;
      }
      goto LAB_001f09e9;
    case 0x84:
      puVar27 = local_90[-1];
      ppuVar22 = local_90 + -1;
      puVar25 = (ulong *)PyFunction_New();
      *puVar27 = *puVar27 - 1;
      if (*puVar27 == 0) {
        (**(code **)(puVar27[1] + 0x30))();
      }
      if (((int)uVar11 < 1) || (puVar25 == (ulong *)0x0)) goto LAB_001f2d53;
      puVar45 = (undefined1 *)PyTuple_New();
      uVar23 = (uint)((ulong)ppuVar22 >> 0x20);
      if ((ulong *)puVar45 != (ulong *)0x0) {
        local_e0 = (undefined1 *)local_90[-2];
        uVar41 = uVar11 - 1;
        *(undefined1 **)((ulong *)puVar45 + (long)(int)uVar41 + 3) = local_e0;
        if (uVar11 - 2 != -1) {
          local_e0 = (undefined1 *)local_90[-3];
          *(undefined1 **)((ulong *)puVar45 + (long)(int)(uVar11 - 2) + 3) = local_e0;
          if (uVar11 - 3 != -1) {
            ppuVar40 = local_90 + -4;
            local_e0 = (undefined1 *)local_90[-4];
            iVar15 = uVar11 - 4;
            *(undefined1 **)((ulong *)puVar45 + (long)(int)(uVar11 - 3) + 3) = local_e0;
            while (iVar15 != -1) {
              ppuVar40 = ppuVar40 + -1;
              local_e0 = (undefined1 *)*ppuVar40;
              lVar47 = (long)iVar15;
              iVar15 = iVar15 + -1;
              *(undefined1 **)((ulong *)puVar45 + lVar47 + 3) = local_e0;
            }
          }
        }
        local_90 = ppuVar22 + (ulong)uVar41 * 0x1fffffffffffffff;
        ppuVar22 = ppuVar22 + ~(ulong)uVar41;
        uVar12 = PyFunction_SetDefaults();
        *(ulong *)puVar45 = *(ulong *)puVar45 - 1;
        ppuVar40 = (ulong **)CONCAT44(uVar23,uVar12);
        if (*(ulong *)puVar45 == 0) {
          (**(code **)(((ulong *)puVar45)[1] + 0x30))();
        }
LAB_001f2d53:
        uVar23 = (uint)((ulong)ppuVar40 >> 0x20);
        *ppuVar22 = puVar25;
        bVar50 = (int)ppuVar40 == 0 && puVar25 != (ulong *)0x0;
        ppuVar22 = local_90;
        puVar45 = (undefined1 *)puVar25;
        goto LAB_001f2d6d;
      }
      *puVar25 = *puVar25 - 1;
      bVar50 = false;
      if (*puVar25 == 0) {
        (**(code **)(puVar25[1] + 0x30))();
        uVar23 = (uint)((ulong)ppuVar22 >> 0x20);
        bVar50 = false;
      }
      goto LAB_001f2d6d;
    case 0x85:
      local_e0 = (undefined1 *)local_90[-1];
      if (uVar11 == 3) {
        ppuVar22 = local_90 + -2;
        local_90 = local_90 + -1;
      }
      else {
        local_e0 = (undefined1 *)0x0;
        ppuVar22 = local_90 + -1;
      }
      puVar27 = local_90[-2];
      puVar25 = local_90[-1];
      puVar45 = (undefined1 *)PySlice_New(puVar27,puVar25,local_e0);
      *puVar27 = *puVar27 - 1;
      if (*puVar27 == 0) {
        (**(code **)(puVar27[1] + 0x30))();
      }
      *puVar25 = *puVar25 - 1;
      if (*puVar25 == 0) {
        (**(code **)(puVar25[1] + 0x30))();
      }
      if (((ulong *)local_e0 != (ulong *)0x0) &&
         (uVar49 = *(ulong *)local_e0, *(ulong *)local_e0 = uVar49 - 1, uVar49 - 1 == 0)) {
        (**(code **)(((ulong *)local_e0)[1] + 0x30))();
      }
      uVar23 = (uint)((ulong)ppuVar40 >> 0x20);
      *(undefined1 **)(local_90 + -2) = puVar45;
      if ((ulong *)puVar45 == (ulong *)0x0) {
        bVar50 = false;
        goto LAB_001f2d6d;
      }
      _Py_Ticker = _Py_Ticker - 1;
      uVar42 = (ulong)_Py_Ticker;
      if ((int)_Py_Ticker < 0) goto LAB_001f09c5;
      uVar49 = (ulong)DAT_004a25b8;
      local_90 = ppuVar22;
      if (DAT_004a25b8 == 0) {
        *(int *)(lParm1 + 0x78) = iVar14 - iVar15;
                    /* WARNING: Could not recover jumptable at 0x001f362e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar18 = (*(code *)(&PTR_LAB_0040cae0)[(ulong)*pbVar35])
                           (uVar42,&_Py_Ticker,(&PTR_LAB_0040cae0)[(ulong)*pbVar35],uVar49,
                            pbVar35 + 1);
        return (ulong *)uVar18;
      }
      goto LAB_001f09e9;
    case 0x86:
      puVar27 = local_90[-1];
      puVar45 = (undefined1 *)PyFunction_New();
      *puVar27 = *puVar27 - 1;
      if (*puVar27 == 0) {
        (**(code **)(puVar27[1] + 0x30))();
      }
      if ((ulong *)puVar45 == (ulong *)0x0) {
        ppuVar43 = local_90 + -1;
        uVar49 = 1;
        goto LAB_001f36a9;
      }
      ppuVar43 = local_90 + -2;
      puVar27 = local_90[-2];
      iVar15 = PyFunction_SetClosure();
      uVar49 = (ulong)(2 - (uint)(iVar15 == 0));
      *puVar27 = *puVar27 - 1;
      if (*puVar27 == 0) {
        (**(code **)(puVar27[1] + 0x30))();
      }
      if ((int)uVar11 < 1) goto LAB_001f36a9;
      puVar27 = (ulong *)PyTuple_New();
      ppuVar22 = ppuVar43;
      if (puVar27 == (ulong *)0x0) {
        uVar42 = *(ulong *)puVar45 - 1;
        *(ulong *)puVar45 = uVar42;
        ppuVar22 = ppuVar43;
        puVar25 = (ulong *)puVar45;
        puVar45 = (undefined1 *)puVar27;
joined_r0x00159700:
        if (uVar42 == 0) {
          (**(code **)(puVar25[1] + 0x30))();
        }
      }
      else {
        while( true ) {
          uVar23 = (int)uVar42 - 1;
          uVar42 = (ulong)uVar23;
          if (uVar23 == 0xffffffff) break;
          local_e0 = (undefined1 *)ppuVar22[-1];
          *(undefined1 **)(puVar27 + (long)(int)uVar23 + 3) = local_e0;
          ppuVar22 = ppuVar22 + -1;
        }
        ppuVar43 = ppuVar43 + (long)(int)uVar11 * 0x1fffffffffffffff;
        iVar15 = PyFunction_SetDefaults();
        if (iVar15 != 0) {
          uVar49 = 2;
        }
        *puVar27 = *puVar27 - 1;
        if (*puVar27 == 0) {
          (**(code **)(puVar27[1] + 0x30))();
        }
LAB_001f36a9:
        ppuVar22 = ppuVar43 + 1;
        *(undefined1 **)ppuVar43 = puVar45;
      }
      goto LAB_001f36b6;
    case 0x87:
      puVar45 = *(undefined1 **)(local_98 + (long)(int)uVar11 * 8);
      *(ulong *)puVar45 = *(ulong *)puVar45 + 1;
      *(undefined1 **)local_90 = puVar45;
      _Py_Ticker = _Py_Ticker - 1;
      ppuVar22 = local_90 + 1;
      if ((int)_Py_Ticker < 0) goto LAB_001f09c5;
      uVar49 = (ulong)DAT_004a25b8;
      local_90 = local_90 + 1;
      if (DAT_004a25b8 == 0) {
        *(int *)(lParm1 + 0x78) = iVar14 - iVar15;
                    /* WARNING: Could not recover jumptable at 0x001f388a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar18 = (*(code *)(&PTR_LAB_0040cae0)[(ulong)*pbVar35])
                           ((&PTR_LAB_0040cae0)[(ulong)*pbVar35]);
        return (ulong *)uVar18;
      }
      goto LAB_001f09e9;
    case 0x88:
      lVar47 = (long)(int)uVar11;
      puVar45 = *(undefined1 **)(local_98 + lVar47 * 8);
      if ((undefined1 *)((ulong *)puVar45)[1] == PyCell_Type) {
        plVar30 = (long *)((ulong *)puVar45)[2];
        if (plVar30 != (long *)0x0) {
          *plVar30 = *plVar30 + 1;
          local_e0 = (undefined1 *)((ulong *)puVar45)[2];
          if ((ulong *)local_e0 != (ulong *)0x0) {
            *(undefined1 **)local_90 = local_e0;
            _Py_Ticker = _Py_Ticker - 1;
            ppuVar22 = local_90 + 1;
            if ((int)_Py_Ticker < 0) goto LAB_001f09c5;
            uVar49 = (ulong)DAT_004a25b8;
            local_90 = local_90 + 1;
            if (DAT_004a25b8 == 0) {
              *(int *)(lParm1 + 0x78) = iVar14 - iVar15;
                    /* WARNING: Could not recover jumptable at 0x001f226c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              uVar18 = (*(code *)(&PTR_LAB_0040cae0)[(ulong)*pbVar35])();
              return (ulong *)uVar18;
            }
            goto LAB_001f09e9;
          }
        }
      }
      else {
        _PyErr_BadInternalCall("../Objects/cellobject.c",0x18);
        uVar23 = (uint)((ulong)local_90 >> 0x20);
      }
      local_e0 = *(undefined1 **)(_PyThreadState_Current + 0x48);
      if ((ulong *)local_e0 == (ulong *)0x0) {
        lVar17 = *(long *)(*(long *)(local_a0 + 0x48) + 0x10);
        if (lVar47 < lVar17) {
          FUN_002773b0(PyExc_UnboundLocalError,
                       "local variable \'%.200s\' referenced before assignment",
                       *(undefined8 *)(*(long *)(local_a0 + 0x48) + 0x18 + lVar47 * 8));
          uVar23 = (uint)((ulong)local_90 >> 0x20);
          bVar50 = false;
          ppuVar22 = local_90;
        }
        else {
          FUN_002773b0(PyExc_NameError,
                       "free variable \'%.200s\' referenced before assignment in enclosing scope",
                       *(undefined8 *)(*(long *)(local_a0 + 0x40) + 0x18 + (lVar47 - lVar17) * 8));
          uVar23 = (uint)((ulong)local_90 >> 0x20);
          bVar50 = false;
          ppuVar22 = local_90;
        }
      }
      else {
        local_e0 = (undefined1 *)0x0;
        bVar50 = false;
        ppuVar22 = local_90;
      }
      goto LAB_001f2d6d;
    case 0x89:
      local_e0 = (undefined1 *)local_90[-1];
      puVar45 = *(undefined1 **)(local_98 + (long)(int)uVar11 * 8);
      PyCell_Set();
      uVar49 = *(ulong *)local_e0;
      *(ulong *)local_e0 = uVar49 - 1;
      if (uVar49 - 1 == 0) {
        (**(code **)(((ulong *)local_e0)[1] + 0x30))();
      }
      _Py_Ticker = _Py_Ticker - 1;
      ppuVar22 = local_90 + -1;
      if ((int)_Py_Ticker < 0) goto LAB_001f09c5;
      uVar49 = (ulong)DAT_004a25b8;
      local_90 = local_90 + -1;
      if (DAT_004a25b8 == 0) {
        *(int *)(lParm1 + 0x78) = iVar14 - iVar15;
                    /* WARNING: Could not recover jumptable at 0x001f3d2a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar18 = (*(code *)(&PTR_LAB_0040cae0)[(ulong)*pbVar35])();
        return (ulong *)uVar18;
      }
      goto LAB_001f09e9;
    case 0x8c:
    case 0x8d:
    case 0x8e:
      uVar41 = (int)uVar26 - 0x83;
      uVar11 = uVar11 & 0xff;
      iVar48 = uVar11 + (uint)bVar32 * 2;
      uVar23 = uVar41 & 1;
      if ((uVar41 & 1) != 0) {
        uVar23 = 1;
        iVar48 = iVar48 + 1;
      }
      if ((uVar41 & 2) != 0) {
        iVar48 = iVar48 + 1;
      }
      puVar27 = (local_90 + (long)iVar48 * 0x1fffffffffffffff)[-1];
      ppuVar43 = local_90 + (long)iVar48 * 0x1fffffffffffffff + -1;
      if (((undefined1 *)puVar27[1] == PyMethod_Type) &&
         (puVar25 = (ulong *)puVar27[3], puVar25 != (ulong *)0x0)) {
        *puVar25 = *puVar25 + 1;
        puVar27 = (ulong *)puVar27[2];
        *puVar27 = *puVar27 + 1;
        puVar31 = *ppuVar43;
        *puVar31 = *puVar31 - 1;
        if (*puVar31 == 0) {
          (**(code **)((*ppuVar43)[1] + 0x30))();
        }
        uVar11 = uVar11 + 1;
        *ppuVar43 = puVar25;
      }
      else {
        *puVar27 = *puVar27 + 1;
      }
      if ((uVar41 & 2) == 0) {
        puVar25 = (ulong *)0x0;
        ppuStack88 = local_90;
      }
      else {
        ppuStack88 = local_90 + -1;
        puVar31 = local_90[-1];
        puVar25 = puVar31;
        if ((*(byte *)(puVar31[1] + 0xab) & 0x20) == 0) {
          puVar25 = (ulong *)PyDict_New();
          if (puVar25 != (ulong *)0x0) {
            iVar48 = PyDict_Update(puVar25);
            if (iVar48 == 0) {
              *puVar31 = *puVar31 - 1;
              if (*puVar31 == 0) {
                (**(code **)(puVar31[1] + 0x30))(puVar31);
              }
              goto LAB_001f3182;
            }
            *puVar25 = *puVar25 - 1;
            if (*puVar25 == 0) {
              (**(code **)(puVar25[1] + 0x30))(puVar25);
            }
            iVar48 = PyErr_ExceptionMatches();
            if (iVar48 != 0) {
              uVar18 = PyEval_GetFuncName(puVar27);
              PyErr_Format(PyExc_TypeError,
                           "%.200s%.200s argument after ** must be a mapping, not %.200s",uVar18);
            }
          }
          *puVar31 = *puVar31 - 1;
          puVar45 = (undefined1 *)0x0;
          if (*puVar31 == 0) {
            (**(code **)(puVar31[1] + 0x30))();
          }
          goto LAB_001f32fb;
        }
      }
LAB_001f3182:
      if (uVar23 == 0) {
        puVar45 = (undefined1 *)0x0;
      }
      else {
        ppuVar22 = ppuStack88 + -1;
        puVar31 = ppuStack88[-1];
        puVar45 = (undefined1 *)puVar31;
        ppuStack88 = ppuVar22;
        if ((*(byte *)(puVar31[1] + 0xab) & 4) == 0) {
          ppuStack88 = ppuVar22;
          puVar45 = (undefined1 *)PySequence_Tuple(puVar31);
          if ((ulong *)puVar45 == (ulong *)0x0) {
            iVar48 = PyErr_ExceptionMatches();
            if (((iVar48 != 0) && ((undefined1 *)puVar31[1] != PyGen_Type)) &&
               (iVar48 = PyType_IsSubtype(), iVar48 == 0)) {
              uVar18 = PyEval_GetFuncName(puVar27);
              PyErr_Format(PyExc_TypeError,
                           "%.200s%.200s argument after * must be an iterable, not %200s",uVar18);
            }
            if (puVar25 == (ulong *)0x0) {
              puVar45 = (undefined1 *)0x0;
              goto LAB_001f32f1;
            }
            *puVar25 = *puVar25 - 1;
            puVar44 = (ulong *)puVar45;
            if (*puVar25 == 0) goto LAB_001f85be;
            goto LAB_001f32f1;
          }
          *puVar31 = *puVar31 - 1;
          if (*puVar31 == 0) {
            (**(code **)(puVar31[1] + 0x30))(puVar31);
          }
        }
        uVar23 = *(uint *)((ulong *)puVar45 + 2);
      }
      if (bVar32 == 0) {
        puVar31 = (ulong *)PyTuple_New();
        if (puVar31 == (ulong *)0x0) {
          puVar44 = (ulong *)0x0;
          goto LAB_001f32dc;
        }
      }
      else {
        puVar25 = (ulong *)FUN_00215e00(puVar25,(ulong)bVar32,&ppuStack88);
        if (puVar25 == (ulong *)0x0) {
          puVar44 = (ulong *)0x0;
          goto LAB_001f32ec;
        }
        puVar31 = (ulong *)PyTuple_New();
        puVar44 = puVar31;
        if (puVar31 == (ulong *)0x0) goto LAB_001f32e1;
      }
      if (0 < (int)uVar23) {
        plVar30 = (long *)((ulong *)puVar45)[3];
        *plVar30 = *plVar30 + 1;
        *(long **)(puVar31 + (long)(int)uVar11 + 3) = plVar30;
        if (uVar23 != 1) {
          plVar30 = (long *)((ulong *)puVar45)[4];
          *plVar30 = *plVar30 + 1;
          *(long **)(puVar31 + (long)(int)(uVar11 + 1) + 3) = plVar30;
          if (uVar23 != 2) {
            plVar30 = (long *)((ulong *)puVar45)[5];
            *plVar30 = *plVar30 + 1;
            *(long **)(puVar31 + (long)(int)(uVar11 + 2) + 3) = plVar30;
            if (uVar23 != 3) {
              lVar47 = 3;
              do {
                plVar30 = (long *)((ulong *)puVar45)[lVar47 + 3];
                iVar48 = (int)lVar47;
                *plVar30 = *plVar30 + 1;
                lVar47 = lVar47 + 1;
                *(long **)(puVar31 + (long)(int)(uVar11 + iVar48) + 3) = plVar30;
              } while ((int)lVar47 < (int)uVar23);
            }
          }
        }
      }
      ppuVar22 = ppuStack88;
      if (uVar11 - 1 != -1) {
        *(ulong **)(puVar31 + (long)(int)(uVar11 - 1) + 3) = ppuStack88[-1];
        ppuVar22 = ppuStack88 + -1;
        if (uVar11 - 2 != -1) {
          iVar48 = uVar11 - 3;
          *(ulong **)(puVar31 + (long)(int)(uVar11 - 2) + 3) = ppuStack88[-2];
          ppuVar22 = ppuStack88 + -2;
          if (iVar48 != -1) {
            ppuVar33 = ppuStack88 + -3;
            do {
              ppuVar22 = ppuVar33;
              lVar47 = (long)iVar48;
              iVar48 = iVar48 + -1;
              *(ulong **)(puVar31 + lVar47 + 3) = *ppuVar22;
              ppuVar33 = ppuVar22 + -1;
            } while (iVar48 != -1);
          }
        }
      }
      ppuStack88 = ppuVar22;
      lVar47 = _PyThreadState_Current;
      if ((undefined1 *)puVar27[1] == PyCFunction_Type) {
        if ((*(int *)(_PyThreadState_Current + 0x20) == 0) ||
           (*(long *)(_PyThreadState_Current + 0x28) == 0)) {
          puVar44 = (ulong *)PyCFunction_Call(puVar27,puVar31,puVar25);
        }
        else {
          iVar48 = FUN_00276300(*(long *)(_PyThreadState_Current + 0x28),
                                *(undefined8 *)(_PyThreadState_Current + 0x38),
                                *(undefined8 *)(_PyThreadState_Current + 0x10));
          if (iVar48 == 0) {
            puVar44 = (ulong *)PyCFunction_Call(puVar27,puVar31,puVar25);
            if (*(long *)(lVar47 + 0x28) != 0) {
              if (puVar44 == (ulong *)0x0) {
                FUN_00276e10(*(long *)(lVar47 + 0x28),*(undefined8 *)(lVar47 + 0x38),
                             *(undefined8 *)(lVar47 + 0x10));
              }
              else {
                iVar48 = FUN_00276300();
                if (iVar48 != 0) {
                  *puVar44 = *puVar44 - 1;
                  if (*puVar44 != 0) goto LAB_00159448;
                  puVar53 = puVar44 + 1;
                  puVar44 = (ulong *)0x0;
                  (**(code **)(*puVar53 + 0x30))();
                }
              }
            }
          }
          else {
LAB_00159448:
            puVar44 = (ulong *)0x0;
          }
        }
      }
      else {
        puVar44 = (ulong *)PyObject_Call(puVar27,puVar31,puVar25);
      }
      *puVar31 = *puVar31 - 1;
      if (*puVar31 == 0) {
        (**(code **)(puVar31[1] + 0x30))();
      }
LAB_001f32dc:
      if (puVar25 != (ulong *)0x0) {
LAB_001f32e1:
        *puVar25 = *puVar25 - 1;
        puVar31 = (ulong *)puVar45;
        if (*puVar25 == 0) {
LAB_001f85be:
          (**(code **)(puVar25[1] + 0x30))();
          puVar45 = (undefined1 *)puVar31;
        }
      }
LAB_001f32ec:
      bVar50 = (ulong *)puVar45 != (ulong *)0x0;
      puVar31 = (ulong *)puVar45;
      puVar45 = (undefined1 *)puVar44;
      if (bVar50) {
LAB_001f32f1:
        *puVar31 = *puVar31 - 1;
        if (*puVar31 == 0) {
          (**(code **)(puVar31[1] + 0x30))();
        }
      }
LAB_001f32fb:
      ppuVar33 = ppuStack88;
      *puVar27 = *puVar27 - 1;
      if (*puVar27 == 0) {
        (**(code **)(puVar27[1] + 0x30))();
      }
      ppuVar22 = ppuVar33 + 1;
      if (ppuVar43 < ppuVar33) {
        local_e0 = (undefined1 *)ppuVar33[-1];
        uVar49 = *(ulong *)local_e0;
        *(ulong *)local_e0 = uVar49 - 1;
        if (uVar49 - 1 == 0) {
          (**(code **)(((ulong *)local_e0)[1] + 0x30))(local_e0);
        }
        if (ppuVar43 < ppuVar33 + -1) {
          local_e0 = (undefined1 *)ppuVar33[-2];
          ppuVar22 = ppuVar33 + -2;
          uVar49 = *(ulong *)local_e0;
          *(ulong *)local_e0 = uVar49 - 1;
          if (uVar49 - 1 == 0) {
            (**(code **)(((ulong *)local_e0)[1] + 0x30))();
          }
          while (ppuVar43 < ppuVar22) {
            ppuVar22 = ppuVar22 + -1;
            local_e0 = (undefined1 *)*ppuVar22;
            *(ulong *)local_e0 = *(ulong *)local_e0 - 1;
            if (*(ulong *)local_e0 == 0) {
              (**(code **)(((ulong *)local_e0)[1] + 0x30))(local_e0);
            }
          }
        }
        uVar49 = (ulong)((long)ppuVar33 + (-1 - (long)ppuVar43)) >> 3;
        ppuVar22 = ppuVar33 + uVar49 * 0x1fffffffffffffff;
        ppuVar33 = ppuVar33 + ~uVar49;
      }
      uVar23 = (uint)((ulong)ppuVar40 >> 0x20);
      *(undefined1 **)ppuVar33 = puVar45;
      if ((ulong *)puVar45 == (ulong *)0x0) {
        bVar50 = false;
        goto LAB_001f2d6d;
      }
      _Py_Ticker = _Py_Ticker - 1;
      if ((int)_Py_Ticker < 0) goto LAB_001f09c5;
      uVar49 = (ulong)DAT_004a25b8;
      local_90 = ppuVar22;
      if (DAT_004a25b8 == 0) {
        *(int *)(lParm1 + 0x78) = iVar14 - iVar15;
                    /* WARNING: Could not recover jumptable at 0x001f337b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar18 = (*(code *)(&PTR_LAB_0040cae0)[(ulong)*pbVar35])
                           ((&PTR_LAB_0040cae0)[(ulong)*pbVar35]);
        return (ulong *)uVar18;
      }
      goto LAB_001f09e9;
    case 0x8f:
      local_e0 = (undefined1 *)local_90[-1];
      if ((undefined1 *)((ulong *)local_e0)[1] == PyInstance_Type) {
        if (DAT_004a25f0 == 0) {
          puVar45 = (undefined1 *)PyObject_GetAttrString();
        }
        else {
          puVar45 = (undefined1 *)PyObject_GetAttr();
        }
        uVar23 = (uint)((ulong)ppuVar40 >> 0x20);
        if ((ulong *)puVar45 == (ulong *)0x0) {
          bVar50 = false;
          ppuVar22 = local_90;
          goto LAB_001f2d6d;
        }
      }
      else {
        puVar45 = (undefined1 *)FUN_001e5840(local_e0,"__exit__",&DAT_004a25f0);
        uVar23 = (uint)((ulong)ppuVar40 >> 0x20);
        if ((ulong *)puVar45 == (ulong *)0x0) {
          bVar50 = false;
          ppuVar22 = local_90;
          if (*(long *)(_PyThreadState_Current + 0x48) == 0) {
            PyErr_SetObject();
            uVar23 = (uint)((ulong)local_90 >> 0x20);
            bVar50 = false;
            ppuVar22 = local_90;
          }
          goto LAB_001f2d6d;
        }
      }
      *(undefined1 **)(local_90 + -1) = puVar45;
      if ((undefined1 *)((ulong *)local_e0)[1] == PyInstance_Type) {
        if (DAT_004a25e8 == 0) {
          plVar30 = (long *)PyObject_GetAttrString(local_e0);
        }
        else {
          plVar30 = (long *)PyObject_GetAttr(local_e0);
        }
        uVar49 = *(ulong *)local_e0;
        *(ulong *)local_e0 = uVar49 - 1;
        if (uVar49 - 1 == 0) goto LAB_0015a9a2;
LAB_001f924a:
        uVar23 = (uint)((ulong)ppuVar40 >> 0x20);
        if (plVar30 == (long *)0x0) {
          bVar50 = false;
          ppuVar22 = local_90;
          puVar45 = (undefined1 *)(ulong *)0x0;
          goto LAB_001f2d6d;
        }
      }
      else {
        plVar30 = (long *)FUN_001e5840(local_e0,"__enter__",&DAT_004a25e8);
        if (plVar30 == (long *)0x0) {
          if (*(long *)(_PyThreadState_Current + 0x48) == 0) {
            PyErr_SetObject();
          }
          uVar23 = (uint)((ulong)ppuVar40 >> 0x20);
          uVar49 = *(ulong *)local_e0;
          *(ulong *)local_e0 = uVar49 - 1;
          if (uVar49 - 1 == 0) {
LAB_0015a9a2:
            (**(code **)(((ulong *)local_e0)[1] + 0x30))();
            goto LAB_001f924a;
          }
          bVar50 = false;
          ppuVar22 = local_90;
          puVar45 = (undefined1 *)(ulong *)0x0;
          goto LAB_001f2d6d;
        }
        uVar49 = *(ulong *)local_e0;
        *(ulong *)local_e0 = uVar49 - 1;
        if (uVar49 - 1 == 0) goto LAB_0015a9a2;
      }
      puVar45 = (undefined1 *)PyObject_CallFunctionObjArgs();
      *plVar30 = *plVar30 + -1;
      if (*plVar30 == 0) {
        (**(code **)(plVar30[1] + 0x30))();
      }
      uVar23 = (uint)((ulong)ppuVar40 >> 0x20);
      if ((ulong *)puVar45 == (ulong *)0x0) {
        bVar50 = false;
        ppuVar22 = local_90;
        goto LAB_001f2d6d;
      }
      iVar48 = *(int *)(lParm1 + 0x80);
      lVar47 = *(long *)(lParm1 + 0x40);
      if (0x13 < iVar48) {
LAB_00159df9:
                    /* WARNING: Subroutine does not return */
        Py_FatalError("XXX block stack overflow");
      }
      lVar17 = lParm1 + (long)iVar48 * 0xc;
      *(int *)(lParm1 + 0x80) = iVar48 + 1;
      *(int *)(lVar17 + 0x88) = uVar11 + (iVar14 - iVar15);
      *(undefined4 *)(lVar17 + 0x84) = 0x8f;
      *(undefined4 *)(lVar17 + 0x8c) = (int)((long)((long)local_90 - lVar47) >> 3);
      *(undefined1 **)local_90 = puVar45;
      _Py_Ticker = _Py_Ticker - 1;
      ppuVar22 = local_90 + 1;
      if ((int)_Py_Ticker < 0) goto LAB_001f09c5;
      uVar49 = (ulong)DAT_004a25b8;
      local_90 = local_90 + 1;
      if (DAT_004a25b8 == 0) {
        *(int *)(lParm1 + 0x78) = iVar14 - iVar15;
                    /* WARNING: Could not recover jumptable at 0x001f3534. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar18 = (*(code *)(&PTR_LAB_0040cae0)[(ulong)*pbVar35])
                           (&_Py_Ticker,(&PTR_LAB_0040cae0)[(ulong)*pbVar35],&PTR_LAB_0040cae0,
                            uVar49,pbVar35 + 1);
        return (ulong *)uVar18;
      }
      goto LAB_001f09e9;
    case 0x91:
      goto code_r0x001f4325;
    case 0x92:
      ppuVar22 = local_90 + -1;
      local_e0 = (undefined1 *)local_90[-1];
      uVar12 = PySet_Add();
      ppuVar40 = (ulong **)CONCAT44(uVar23,uVar12);
      uVar49 = *(ulong *)local_e0;
      *(ulong *)local_e0 = uVar49 - 1;
      if (uVar49 - 1 == 0) {
        (**(code **)(((ulong *)local_e0)[1] + 0x30))();
      }
      uVar23 = (uint)((ulong)ppuVar40 >> 0x20);
      if ((int)ppuVar40 != 0) {
        bVar50 = false;
        goto LAB_001f2d6d;
      }
      _Py_Ticker = _Py_Ticker - 1;
      if ((int)_Py_Ticker < 0) goto LAB_001f09c5;
      uVar49 = (ulong)DAT_004a25b8;
      local_90 = ppuVar22;
      if (DAT_004a25b8 == 0) {
        *(int *)(lParm1 + 0x78) = iVar14 - iVar15;
                    /* WARNING: Could not recover jumptable at 0x001f52e1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar18 = (*(code *)(&PTR_LAB_0040cae0)[(ulong)*pbVar35])();
        return (ulong *)uVar18;
      }
      goto LAB_001f09e9;
    case 0x93:
      goto code_r0x001f406a;
    }
    ppuVar40 = (ulong **)((ulong)uVar23 << 0x20);
    ppuVar22 = local_90;
    goto LAB_001f09c5;
  }
  *(int *)(local_100 + 0x80) = *(int *)(local_100 + 0x80) + 1;
  _Py_Ticker = uVar23;
  if (DAT_00441e3c == 0) {
LAB_001f68ec:
    lVar47 = _PyThreadState_Current;
    if (DAT_0049fb38 != (sem_t *)0x0) {
      _PyThreadState_Current = 0;
      if (local_100 != lVar47) {
                    /* WARNING: Subroutine does not return */
        Py_FatalError("ceval: tstate mix-up");
      }
      iVar15 = sem_post(DAT_0049fb38);
      if (iVar15 != 0) {
        perror("sem_post");
      }
      __sem = DAT_0049fb38;
      iVar15 = sem_wait(DAT_0049fb38);
      if (iVar15 == -1) {
        piVar16 = __errno_location();
        iVar15 = *piVar16;
      }
      while (iVar15 == 4) {
        iVar15 = sem_wait(__sem);
        if (iVar15 == -1) {
          piVar16 = __errno_location();
          iVar15 = *piVar16;
        }
      }
      if (iVar15 != 0) {
        perror("sem_wait");
      }
      if (_PyThreadState_Current != 0) {
        _PyThreadState_Current = local_100;
                    /* WARNING: Subroutine does not return */
        Py_FatalError("ceval: orphan tstate");
      }
      puVar27 = *(ulong **)(local_100 + 0x88);
      _PyThreadState_Current = local_100;
      if (puVar27 != (ulong *)0x0) {
        uVar49 = 2;
        _PyThreadState_Current = local_100;
        *(undefined8 *)(local_100 + 0x88) = 0;
        PyErr_SetNone();
        uVar42 = *puVar27;
        *puVar27 = uVar42 - 1;
        local_90 = ppuVar22;
        puVar45 = (undefined1 *)puVar27;
        if (uVar42 - 1 == 0) {
          (**(code **)(puVar27[1] + 0x30))();
          local_90 = ppuVar22;
          puVar45 = (undefined1 *)puVar27;
        }
        goto LAB_001f571f;
      }
    }
    goto LAB_001f69a0;
  }
  iVar15 = Py_MakePendingCalls();
  if (-1 < iVar15) {
    if (DAT_00441e3c != 0) {
      _Py_Ticker = 0;
    }
    goto LAB_001f68ec;
  }
  uVar49 = 2;
  local_90 = ppuVar22;
  goto LAB_001f571f;
code_r0x001f406a:
  local_e0 = (undefined1 *)local_90[-1];
  puVar27 = local_90[-2];
  ppuVar22 = local_90 + -2;
  uVar12 = PyDict_SetItem(ppuVar22[(long)(int)-uVar11],local_e0,puVar27);
  *puVar27 = *puVar27 - 1;
  ppuVar40 = (ulong **)CONCAT44(uVar23,uVar12);
  if (*puVar27 == 0) {
    (**(code **)(puVar27[1] + 0x30))();
  }
  uVar49 = *(ulong *)local_e0;
  *(ulong *)local_e0 = uVar49 - 1;
  if (uVar49 - 1 == 0) {
    (**(code **)(((ulong *)local_e0)[1] + 0x30))();
  }
  uVar23 = (uint)((ulong)ppuVar40 >> 0x20);
  if ((int)ppuVar40 != 0) {
    bVar50 = false;
    goto LAB_001f2d6d;
  }
  _Py_Ticker = _Py_Ticker - 1;
  if ((int)_Py_Ticker < 0) goto LAB_001f09c5;
  uVar49 = (ulong)DAT_004a25b8;
  local_90 = ppuVar22;
  if (DAT_004a25b8 == 0) {
    *(int *)(lParm1 + 0x78) = iVar14 - iVar15;
                    /* WARNING: Could not recover jumptable at 0x001f411e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar18 = (*(code *)(&PTR_LAB_0040cae0)[(ulong)*pbVar35])();
    return (ulong *)uVar18;
  }
  goto LAB_001f09e9;
code_r0x001f4325:
  uVar26 = (ulong)*pbVar35;
  uVar42 = (ulong)(uVar11 << 0x10 | (uint)pbVar35[2] * 0x100 + (uint)pbVar35[1]);
  pbVar36 = pbVar35 + 3;
  goto LAB_001f0a21;
LAB_001f562d:
  puVar27 = (ulong *)local_50[1];
  bVar28 = *(byte *)((long)puVar27 + 0xab);
  do {
    if ((bVar28 & 4) == 0) {
LAB_001f5649:
      if ((puVar27 == (ulong *)PyClass_Type) ||
         (((puVar27[0x15] & 0x80000000) != 0 && ((*(byte *)((long)local_50 + 0xab) & 0x40) != 0))))
      {
        PyErr_NormalizeException(&local_50,&local_48,&local_40);
        puVar21 = (undefined1 *)((ulong *)local_48)[1];
        puVar27 = local_50;
        if ((puVar21 != PyInstance_Type) && (puVar27 = local_50, (puVar21[0xab] & 0x40) == 0)) {
          PyErr_Format(PyExc_TypeError,
                       "calling %s() should have returned an instance of BaseException, not \'%s\'",
                       local_50[3],*(undefined8 *)(puVar21 + 0x18));
          goto LAB_00158bdb;
        }
      }
      else {
        if ((puVar27 != (ulong *)PyInstance_Type) && ((puVar27[0x15] & 0x40000000) == 0)) {
          PyErr_Format(PyExc_TypeError,
                       "exceptions must be old-style classes or derived from BaseException, not %s",
                       puVar27[3]);
          goto LAB_00158bdb;
        }
        if (local_48 != _Py_NoneStruct) {
          PyErr_SetString(PyExc_TypeError);
          goto LAB_00158bdb;
        }
        _Py_NoneStruct._0_8_ = _Py_NoneStruct._0_8_ + -1;
        if (_Py_NoneStruct._0_8_ == 0) {
          (**(code **)(_Py_NoneStruct._8_8_ + 0x30))();
          puVar27 = (ulong *)local_50[1];
        }
        if (puVar27 == (ulong *)PyInstance_Type) {
          puVar27 = (ulong *)local_50[2];
        }
        *puVar27 = *puVar27 + 1;
        local_48 = (undefined1 *)local_50;
      }
      local_50 = puVar27;
      if (((Py_Py3kWarningFlag == 0) || ((undefined1 *)local_50[1] != PyClass_Type)) ||
         (iVar15 = PyErr_WarnEx(PyExc_DeprecationWarning,
                                "exceptions must derive from BaseException in 3.x",1), -1 < iVar15))
      {
        PyErr_Restore(local_50,local_48,local_40);
        uVar49 = (ulong)((-(uint)(local_40 == (ulong *)0x0) & 0xfffffffe) + 4);
      }
      else {
LAB_00158bdb:
        if (((ulong *)local_48 != (ulong *)0x0) &&
           (*(ulong *)local_48 = *(ulong *)local_48 - 1, *(ulong *)local_48 == 0)) {
          (**(code **)(((ulong *)local_48)[1] + 0x30))();
        }
        if ((local_50 != (ulong *)0x0) && (*local_50 = *local_50 - 1, *local_50 == 0)) {
          (**(code **)(local_50[1] + 0x30))();
        }
        uVar49 = 2;
        if ((local_40 != (ulong *)0x0) && (*local_40 = *local_40 - 1, *local_40 == 0)) {
          (**(code **)(local_40[1] + 0x30))();
        }
      }
      goto LAB_001f571f;
    }
    lVar47 = PyTuple_Size();
    if (lVar47 < 1) {
      puVar27 = (ulong *)local_50[1];
      goto LAB_001f5649;
    }
    puVar25 = (ulong *)local_50[3];
    *puVar25 = *puVar25 + 1;
    *local_50 = *local_50 - 1;
    if (*local_50 == 0) break;
    puVar27 = (ulong *)puVar25[1];
    bVar28 = *(byte *)((long)puVar27 + 0xab);
    local_50 = puVar25;
  } while( true );
  puVar27 = local_50 + 1;
  local_50 = puVar25;
  (**(code **)(*puVar27 + 0x30))();
  goto LAB_001f562d;
code_r0x001f5d02:
  uVar49 = *(ulong *)(puVar45 + 0xa8);
  if ((uVar49 & 0x4000000) != 0) {
    lVar17 = 0;
    lVar47 = PyTuple_Size(local_e0);
    if (lVar47 < 1) goto code_r0x001f5d32;
    goto code_r0x001f8f5c;
  }
  if ((uVar49 & 0x8000000) == 0) {
    if ((Py_Py3kWarningFlag == 0) ||
       (((uVar49 & 0x80000000) != 0 && ((*(byte *)((long)local_e0 + 0xab) & 0x40) != 0))))
    goto code_r0x001f5d32;
    pcVar34 = "catching classes that don\'t inherit from BaseException is not allowed in 3.x";
  }
  else {
    pcVar34 = "catching of string exceptions is deprecated";
  }
  iVar48 = PyErr_WarnEx(PyExc_DeprecationWarning,pcVar34,1);
  if (-1 < iVar48) goto code_r0x001f5d32;
  goto code_r0x001f8b89;
code_r0x001f8f5c:
  do {
    uVar49 = *(ulong *)(*(long *)(((ulong *)local_e0)[lVar17 + 3] + 8) + 0xa8);
    if ((uVar49 & 0x8000000) == 0) {
      if (((Py_Py3kWarningFlag != 0) && ((uVar49 & 0x4000000) == 0)) &&
         (((uVar49 & 0x80000000) == 0 ||
          ((*(byte *)(((ulong *)local_e0)[lVar17 + 3] + 0xab) & 0x40) == 0)))) {
        iVar48 = PyErr_WarnEx(PyExc_DeprecationWarning,
                                                            
                              "catching classes that don\'t inherit from BaseException is not allowed in 3.x"
                              ,1);
        goto joined_r0x00159f82;
      }
    }
    else {
      iVar48 = PyErr_WarnEx(PyExc_DeprecationWarning,"catching of string exceptions is deprecated",1
                           );
joined_r0x00159f82:
      if (iVar48 < 0) goto code_r0x001f8b89;
    }
    lVar17 = lVar17 + 1;
  } while (lVar47 != lVar17);
code_r0x001f5d32:
  uVar23 = PyErr_GivenExceptionMatches(puVar27);
joined_r0x001f126f:
  if (uVar23 == 0) {
code_r0x001f11bd:
    puVar45 = _Py_ZeroStruct;
  }
  else {
code_r0x001f1257:
    puVar45 = _Py_TrueStruct;
  }
  *(ulong *)puVar45 = *(ulong *)puVar45 + 1;
  *puVar27 = *puVar27 - 1;
  if (*puVar27 == 0) goto LAB_001f6a2a;
  uVar49 = *(ulong *)local_e0;
  *(ulong *)local_e0 = uVar49 - 1;
  if (uVar49 - 1 != 0) {
    *(undefined1 **)(local_90 + -2) = puVar45;
joined_r0x001f5ca5:
    _Py_Ticker = _Py_Ticker - 1;
    if ((int)_Py_Ticker < 0) goto LAB_001f09c5;
    uVar49 = (ulong)DAT_004a25b8;
    local_90 = ppuVar22;
    if (DAT_004a25b8 == 0) {
      *(int *)(lParm1 + 0x78) = iVar14 - iVar15;
                    /* WARNING: Could not recover jumptable at 0x001f1249. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar18 = (*(code *)(&PTR_LAB_0040cae0)[(ulong)*pbVar35])();
      return (ulong *)uVar18;
    }
    goto LAB_001f09e9;
  }
LAB_001f6a57:
  (**(code **)(((ulong *)local_e0)[1] + 0x30))();
LAB_001f6a74:
  uVar23 = (uint)((ulong)ppuVar40 >> 0x20);
  *(undefined1 **)(local_90 + -2) = puVar45;
  if ((ulong *)puVar45 == (ulong *)0x0) {
    bVar50 = false;
    goto LAB_001f2d6d;
  }
  _Py_Ticker = _Py_Ticker - 1;
  if ((int)_Py_Ticker < 0) goto LAB_001f09c5;
  uVar49 = (ulong)DAT_004a25b8;
  local_90 = ppuVar22;
  if (DAT_004a25b8 == 0) {
    *(int *)(lParm1 + 0x78) = iVar14 - iVar15;
                    /* WARNING: Could not recover jumptable at 0x001f6ad6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar18 = (*(code *)(&PTR_LAB_0040cae0)[(ulong)*pbVar35])();
    return (ulong *)uVar18;
  }
  goto LAB_001f09e9;
code_r0x001f8b89:
  uVar23 = (uint)((ulong)ppuVar40 >> 0x20);
  *puVar27 = *puVar27 - 1;
  if (*puVar27 == 0) {
    puVar45 = (undefined1 *)0x0;
LAB_001f6a2a:
    (**(code **)(puVar27[1] + 0x30))();
    uVar49 = *(ulong *)local_e0;
    *(ulong *)local_e0 = uVar49 - 1;
    if (uVar49 - 1 != 0) goto LAB_001f6a74;
  }
  else {
    uVar49 = *(ulong *)local_e0;
    *(ulong *)local_e0 = uVar49 - 1;
    if (uVar49 - 1 != 0) {
      local_90[-2] = (ulong *)0x0;
      bVar50 = false;
      puVar45 = (undefined1 *)0x0;
      goto LAB_001f2d6d;
    }
    puVar45 = (undefined1 *)0x0;
  }
  goto LAB_001f6a57;
LAB_001f5f7d:
  puVar25 = (ulong *)PyIter_Next();
  if (puVar25 != (ulong *)0x0) goto code_r0x001f5f8e;
  lVar47 = *(long *)(_PyThreadState_Current + 0x48);
  uVar11 = (uint)uVar49;
joined_r0x001fa55e:
  if (lVar47 == 0) {
    uVar11 = (uint)uVar49;
    PyErr_Format(PyExc_ValueError,"need more than %d value%s to unpack",uVar49);
  }
  goto LAB_001fa3e3;
code_r0x001f5f8e:
  ppuVar33 = ppuVar33 + -1;
  uVar23 = (uint)uVar49 + 1;
  uVar49 = (ulong)uVar23;
  *ppuVar33 = puVar25;
  if (uVar23 == uVar11) goto LAB_001f5fb9;
  goto LAB_001f5f7d;
LAB_001f4a87:
  plVar46 = (long *)PySequence_GetItem(plVar30,(long)iVar48);
  uVar23 = (uint)((ulong)ppuVar40 >> 0x20);
  if (plVar46 == (long *)0x0) goto LAB_001f9015;
  if (((bVar50) && ((*(byte *)(plVar46[1] + 0xab) & 8) != 0)) &&
     (*(char *)((long)plVar46 + 0x24) == '_')) {
    *plVar46 = *plVar46 + -1;
    if (*plVar46 == 0) {
      (**(code **)(plVar46[1] + 0x30))(plVar46);
    }
  }
  else {
    plVar19 = (long *)PyObject_GetAttr(puVar27,plVar46);
    if (plVar19 == (long *)0x0) {
      *plVar46 = *plVar46 + -1;
      if (*plVar46 != 0) goto LAB_00159ef3;
      (**(code **)(plVar46[1] + 0x30))();
      ppuVar40 = (ulong **)CONCAT44(uVar23,0xffffffff);
      goto LAB_001f905a;
    }
    if ((undefined1 *)((ulong *)puVar45)[1] == PyDict_Type) {
      uVar12 = PyDict_SetItem();
      ppuVar40 = (ulong **)CONCAT44(uVar23,uVar12);
    }
    else {
      uVar12 = PyObject_SetItem(puVar45,plVar46,plVar19);
      ppuVar40 = (ulong **)CONCAT44(uVar23,uVar12);
    }
    *plVar46 = *plVar46 + -1;
    if (*plVar46 == 0) {
      (**(code **)(plVar46[1] + 0x30))(plVar46);
    }
    *plVar19 = *plVar19 + -1;
    if (*plVar19 == 0) {
      (**(code **)(plVar19[1] + 0x30))(plVar19);
    }
    if ((int)ppuVar40 != 0) goto LAB_001f905a;
  }
  iVar48 = iVar48 + 1;
  goto LAB_001f4a87;
LAB_001f9015:
  iVar48 = PyErr_ExceptionMatches(PyExc_IndexError);
  uVar23 = (uint)((ulong)local_c8 >> 0x20);
  if (iVar48 == 0) {
LAB_00159ef3:
    ppuVar40 = (ulong **)CONCAT44(uVar23,0xffffffff);
  }
  else {
    PyErr_Clear();
    ppuVar40 = (ulong **)((ulong)uVar23 << 0x20);
  }
LAB_001f905a:
  *plVar30 = *plVar30 + -1;
  if (*plVar30 == 0) {
    (**(code **)(plVar30[1] + 0x30))(plVar30);
  }
  PyFrame_LocalsToFast();
  *puVar27 = *puVar27 - 1;
  uVar18 = extraout_RDX_05;
  if (*puVar27 == 0) {
LAB_0015a3e1:
    (**(code **)(puVar27[1] + 0x30))();
    uVar18 = extraout_RDX_00;
  }
  uVar23 = (uint)((ulong)ppuVar40 >> 0x20);
  if ((int)ppuVar40 != 0) {
LAB_0015a3d1:
    bVar50 = false;
    ppuVar22 = local_c8;
    goto LAB_001f2d6d;
  }
  _Py_Ticker = _Py_Ticker - 1;
  ppuVar22 = local_c8;
  if ((int)_Py_Ticker < 0) goto LAB_001f09c5;
  uVar49 = (ulong)DAT_004a25b8;
  local_90 = local_c8;
  if (DAT_004a25b8 == 0) {
    *(int *)(lParm1 + 0x78) = iVar14 - iVar15;
                    /* WARNING: Could not recover jumptable at 0x001f90f5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar18 = (*(code *)(&PTR_LAB_0040cae0)[(ulong)*pbVar35])
                       (&PTR_LAB_0040cae0,(&PTR_LAB_0040cae0)[(ulong)*pbVar35],uVar18,uVar49,
                        pbVar35 + 1);
    return (ulong *)uVar18;
  }
  goto LAB_001f09e9;
code_r0x001f0aab:
  puVar27 = local_90[-1];
  local_90 = local_90 + -1;
  *puVar27 = *puVar27 - 1;
  if (*puVar27 == 0) {
    (**(code **)(puVar27[1] + 0x30))();
    uVar49 = (ulong)DAT_004a25b8;
    if (DAT_004a25b8 == 0) {
      *(int *)(lParm1 + 0x78) = iVar14 - iVar15;
                    /* WARNING: Could not recover jumptable at 0x001f7de9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar18 = (*(code *)(&PTR_LAB_0040cae0)[(ulong)*pbVar35])
                         ((ulong)*pbVar35,(&PTR_LAB_0040cae0)[(ulong)*pbVar35],extraout_RDX_04,
                          uVar49,pbVar35 + 1);
      return (ulong *)uVar18;
    }
  }
  else {
    uVar49 = (ulong)DAT_004a25b8;
    if (DAT_004a25b8 == 0) {
      *(int *)(lParm1 + 0x78) = iVar14 - iVar15;
                    /* WARNING: Could not recover jumptable at 0x001f0af4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar18 = (*(code *)(&PTR_LAB_0040cae0)[(ulong)*pbVar35])();
      return (ulong *)uVar18;
    }
  }
  goto LAB_001f09e9;
LAB_001f5fb9:
  plVar46 = (long *)PyIter_Next();
  if (plVar46 == (long *)0x0) {
    if (*(long *)(_PyThreadState_Current + 0x48) != 0) goto LAB_001fa3e3;
    *plVar30 = *plVar30 + -1;
    if (*plVar30 == 0) {
      uVar49 = 1;
      (**(code **)(plVar30[1] + 0x30))();
      ppuVar22 = ppuVar43;
    }
    else {
      uVar49 = 1;
      ppuVar22 = ppuVar43;
    }
  }
  else {
    *plVar46 = *plVar46 + -1;
    if (*plVar46 == 0) {
      (**(code **)(plVar46[1] + 0x30))(plVar46);
    }
    PyErr_SetString(PyExc_ValueError,"too many values to unpack");
LAB_001fa3e3:
    ppuVar43 = ppuVar33 + (long)(int)uVar11;
    while (ppuVar33 != ppuVar43) {
      puVar25 = *ppuVar33;
      *puVar25 = *puVar25 - 1;
      if (*puVar25 == 0) {
        (**(code **)((*ppuVar33)[1] + 0x30))();
      }
      ppuVar33 = ppuVar33 + 1;
    }
    *plVar30 = *plVar30 + -1;
    if (*plVar30 == 0) {
      (**(code **)(plVar30[1] + 0x30))();
      uVar49 = 2;
    }
    else {
LAB_0015a1aa:
      uVar49 = 2;
    }
  }
LAB_001fa1f1:
  *puVar27 = *puVar27 - 1;
  if (*puVar27 == 0) {
    (**(code **)(puVar27[1] + 0x30))();
  }
LAB_001f36b6:
  local_90 = ppuVar22;
  if ((int)uVar49 == 1) {
LAB_001f36c0:
    uVar23 = (uint)((ulong)ppuVar40 >> 0x20);
    bVar50 = (ulong *)puVar45 != (ulong *)0x0 && (int)ppuVar40 == 0;
LAB_001f2d6d:
    ppuVar40 = (ulong **)((ulong)uVar23 << 0x20);
    uVar49 = 2;
    uVar23 = 0;
    local_90 = ppuVar22;
    puVar27 = (ulong *)_Py_NoneStruct;
    if (bVar50) goto LAB_001f09c5;
LAB_001f2d8b:
    puVar45 = (undefined1 *)puVar27;
    uVar12 = (undefined4)((ulong)ppuVar40 >> 0x20);
    if (*(long *)(_PyThreadState_Current + 0x48) == 0) {
      PyErr_SetString(PyExc_SystemError);
      PyTraceBack_Here();
      uVar12 = (undefined4)((ulong)local_90 >> 0x20);
      lVar47 = *(long *)(local_100 + 0x30);
joined_r0x001592ca:
      if (lVar47 != 0) {
        uVar18 = *(undefined8 *)(local_100 + 0x40);
        PyErr_Fetch(&local_50,&local_48,&local_40);
        if ((ulong *)local_48 == (ulong *)0x0) {
          local_48 = _Py_NoneStruct;
          _Py_NoneStruct._0_8_ = _Py_NoneStruct._0_8_ + 1;
        }
        plVar30 = (long *)PyTuple_Pack(3,local_50,local_48);
        if (plVar30 == (long *)0x0) {
          PyErr_Restore(local_50,local_48,local_40);
          uVar12 = (undefined4)((ulong)local_90 >> 0x20);
        }
        else {
          iVar15 = FUN_00276300(lVar47,uVar18,lParm1,1,plVar30);
          *plVar30 = *plVar30 + -1;
          if (*plVar30 == 0) {
            (**(code **)(plVar30[1] + 0x30))(plVar30);
          }
          uVar12 = (undefined4)((ulong)local_90 >> 0x20);
          if (iVar15 == 0) {
            PyErr_Restore(local_50,local_48,local_40);
            uVar12 = (undefined4)((ulong)local_90 >> 0x20);
          }
          else {
            if ((local_50 != (ulong *)0x0) && (*local_50 = *local_50 - 1, *local_50 == 0)) {
              (**(code **)(local_50[1] + 0x30))();
              uVar12 = (undefined4)((ulong)local_90 >> 0x20);
            }
            if (((ulong *)local_48 != (ulong *)0x0) &&
               (*(ulong *)local_48 = *(ulong *)local_48 - 1, *(ulong *)local_48 == 0)) {
              (**(code **)(((ulong *)local_48)[1] + 0x30))();
              uVar12 = (undefined4)((ulong)local_90 >> 0x20);
            }
            if ((local_40 != (ulong *)0x0) && (*local_40 = *local_40 - 1, *local_40 == 0)) {
              (**(code **)(local_40[1] + 0x30))();
              uVar12 = (undefined4)((ulong)local_90 >> 0x20);
            }
          }
        }
      }
    }
    else {
      if ((int)uVar49 == 2) {
        PyTraceBack_Here();
        uVar12 = (undefined4)((ulong)local_90 >> 0x20);
        lVar47 = *(long *)(local_100 + 0x30);
        goto joined_r0x001592ca;
      }
      if ((int)uVar49 != 4) {
        ppuVar40 = (ulong **)((ulong)ppuVar40 & 0xffffffff00000000 | (ulong)uVar23);
        goto LAB_001f128a;
      }
    }
    ppuVar40 = (ulong **)CONCAT44(uVar12,uVar23);
    uVar49 = 2;
  }
  else {
LAB_001f571f:
    uVar23 = (uint)ppuVar40;
    puVar27 = (ulong *)puVar45;
    if (((int)uVar49 - 2U & 0xfffffffd) == 0) goto LAB_001f2d8b;
  }
LAB_001f128a:
  iVar15 = (int)uVar49;
  if (0 < *(int *)(lParm1 + 0x80)) {
    iVar14 = *(int *)(lParm1 + 0x80) + -1;
    lVar47 = (long)iVar14;
    if ((*(int *)(lParm1 + 0x84 + lVar47 * 0xc) != 0x78) || (iVar15 != 0x20)) {
      lVar17 = *(long *)(lParm1 + 0x40);
      ppuVar22 = local_90;
      do {
        *(int *)(lParm1 + 0x80) = iVar14;
        lVar2 = lParm1 + lVar47 * 0xc;
        iVar14 = *(int *)(lVar2 + 0x8c);
        local_90 = ppuVar22;
        if (iVar14 < (int)((long)((long)ppuVar22 - lVar17) >> 3)) {
          puVar27 = ppuVar22[-1];
          local_90 = ppuVar22 + -1;
          if (puVar27 != (ulong *)0x0) {
            *puVar27 = *puVar27 - 1;
            if (*puVar27 == 0) {
              (**(code **)(puVar27[1] + 0x30))();
              lVar17 = *(long *)(lParm1 + 0x40);
              iVar14 = *(int *)(lVar2 + 0x8c);
            }
            else {
              lVar17 = *(long *)(lParm1 + 0x40);
              iVar14 = *(int *)(lVar2 + 0x8c);
            }
          }
          if (iVar14 < (int)((long)((long)local_90 - lVar17) >> 3)) {
            puVar27 = ppuVar22[-2];
            local_90 = ppuVar22 + -2;
            if (puVar27 != (ulong *)0x0) {
              *puVar27 = *puVar27 - 1;
              if (*puVar27 == 0) {
                (**(code **)(puVar27[1] + 0x30))();
                lVar17 = *(long *)(lParm1 + 0x40);
                iVar14 = *(int *)(lParm1 + 0x8c + lVar47 * 0xc);
              }
              else {
                lVar17 = *(long *)(lParm1 + 0x40);
                iVar14 = *(int *)(lParm1 + 0x8c + lVar47 * 0xc);
              }
            }
            if (iVar14 < (int)((long)((long)local_90 - lVar17) >> 3)) {
              do {
                local_90 = local_90 + -1;
                puVar27 = *local_90;
                if (puVar27 != (ulong *)0x0) {
                  *puVar27 = *puVar27 - 1;
                  if (*puVar27 == 0) {
                    (**(code **)(puVar27[1] + 0x30))();
                    lVar17 = *(long *)(lParm1 + 0x40);
                    iVar14 = *(int *)(lParm1 + lVar47 * 0xc + 0x8c);
                  }
                  else {
                    lVar17 = *(long *)(lParm1 + 0x40);
                    iVar14 = *(int *)(lParm1 + 0x8c + lVar47 * 0xc);
                  }
                }
              } while (iVar14 < (int)((long)((long)local_90 - lVar17) >> 3));
            }
          }
        }
        lVar10 = _PyThreadState_Current;
        lVar2 = lParm1 + lVar47 * 0xc;
        iVar14 = *(int *)(lVar2 + 0x84);
        if (iVar14 != 0x78) {
          if (iVar14 == 0x7a) {
LAB_001f7671:
            if (iVar15 == 2) goto LAB_001f6fc3;
            ppuVar22 = local_90 + 1;
            if ((uVar49 & 0x28) != 0) {
              *local_90 = local_e8;
              ppuVar22 = local_90 + 2;
              local_90 = local_90 + 1;
            }
            puVar27 = (ulong *)PyInt_FromLong();
            *local_90 = puVar27;
          }
          else {
            if ((iVar14 != 0x79) || (iVar15 != 2)) {
              if (iVar14 != 0x8f) goto LAB_001f6ea0;
              goto LAB_001f7671;
            }
LAB_001f6fc3:
            local_50 = *(ulong **)(_PyThreadState_Current + 0x48);
            local_48 = *(undefined1 **)(_PyThreadState_Current + 0x50);
            local_40 = *(ulong **)(_PyThreadState_Current + 0x58);
            puVar5 = (undefined4 *)(_PyThreadState_Current + 0x54);
            puVar4 = (undefined4 *)(_PyThreadState_Current + 0x50);
            puVar3 = (undefined4 *)(_PyThreadState_Current + 0x4c);
            *(undefined4 *)(_PyThreadState_Current + 0x48) = 0;
            *puVar3 = 0;
            *puVar4 = 0;
            *puVar5 = 0;
            *(undefined8 *)(lVar10 + 0x58) = 0;
            if ((ulong *)local_48 == (ulong *)0x0) {
              local_48 = _Py_NoneStruct;
              _Py_NoneStruct._0_8_ = _Py_NoneStruct._0_8_ + 1;
            }
            iVar15 = *(int *)(lParm1 + 0x84 + lVar47 * 0xc);
            if ((iVar15 == 0x79) || (iVar15 == 0x8f)) {
              PyErr_NormalizeException(&local_50,&local_48,&local_40);
              puVar31 = local_40;
              puVar25 = (ulong *)local_48;
              puVar27 = local_50;
              lVar17 = *(long *)(local_100 + 0x10);
              if (*(long *)(lVar17 + 0x58) == 0) {
                plVar30 = *(long **)(local_100 + 0x60);
                if (*(long **)(local_100 + 0x60) == (long *)0x0) {
                  _Py_NoneStruct._0_8_ = _Py_NoneStruct._0_8_ + 1;
                  *(undefined8 *)(local_100 + 0x60) = 0x431110;
                  plVar30 = (long *)_Py_NoneStruct;
                }
                *plVar30 = *plVar30 + 1;
                plVar30 = *(long **)(local_100 + 0x68);
                if (plVar30 != (long *)0x0) {
                  *plVar30 = *plVar30 + 1;
                }
                plVar30 = *(long **)(local_100 + 0x70);
                if (plVar30 != (long *)0x0) {
                  *plVar30 = *plVar30 + 1;
                }
                *(undefined8 *)(lVar17 + 0x58) = *(undefined8 *)(local_100 + 0x60);
                *(undefined8 *)(lVar17 + 0x60) = *(undefined8 *)(local_100 + 0x68);
                *(undefined8 *)(lVar17 + 0x68) = *(undefined8 *)(local_100 + 0x70);
              }
              plVar30 = *(long **)(local_100 + 0x60);
              plVar46 = *(long **)(local_100 + 0x68);
              plVar19 = *(long **)(local_100 + 0x70);
              *local_50 = *local_50 + 1;
              if ((ulong *)local_48 != (ulong *)0x0) {
                *(ulong *)local_48 = *(ulong *)local_48 + 1;
              }
              if (local_40 != (ulong *)0x0) {
                *local_40 = *local_40 + 1;
              }
              auVar51 = movhps(ZEXT816(local_50),local_48);
              *(ulong **)(local_100 + 0x70) = local_40;
              *(undefined4 *)(local_100 + 0x60) = SUB164(auVar51,0);
              *(undefined4 *)(local_100 + 100) = SUB164(auVar51 >> 0x20,0);
              *(undefined4 *)(local_100 + 0x68) = SUB164(auVar51 >> 0x40,0);
              *(undefined4 *)(local_100 + 0x6c) = SUB164(auVar51 >> 0x60,0);
              if ((plVar30 != (long *)0x0) && (*plVar30 = *plVar30 + -1, *plVar30 == 0)) {
                (**(code **)(plVar30[1] + 0x30))();
              }
              if ((plVar46 != (long *)0x0) && (*plVar46 = *plVar46 + -1, *plVar46 == 0)) {
                (**(code **)(plVar46[1] + 0x30))(plVar46);
              }
              if ((plVar19 != (long *)0x0) && (*plVar19 = *plVar19 + -1, *plVar19 == 0)) {
                (**(code **)(plVar19[1] + 0x30))(plVar19);
              }
              PySys_SetObject(0x2fd166,puVar27);
              PySys_SetObject(0x2fd171,puVar25);
              PySys_SetObject(0x2fd156,puVar31);
            }
            if (local_40 == (ulong *)0x0) {
              _Py_NoneStruct._0_8_ = _Py_NoneStruct._0_8_ + 1;
              *(undefined1 **)local_90 = _Py_NoneStruct;
            }
            else {
              *local_90 = local_40;
            }
            ppuVar22 = local_90 + 3;
            *(undefined1 **)(local_90 + 1) = local_48;
            local_90[2] = local_50;
          }
          pbVar35 = (byte *)((long)*(int *)(lParm1 + 0x88 + lVar47 * 0xc) + local_f0);
          goto LAB_001f09c5;
        }
        if (iVar15 == 0x10) {
          pbVar35 = (byte *)((long)*(int *)(lVar2 + 0x88) + local_f0);
          ppuVar22 = local_90;
          goto LAB_001f09c5;
        }
LAB_001f6ea0:
        if (*(int *)(lParm1 + 0x80) < 1) {
          if ((int)((long)((long)local_90 - lVar17) >> 3) == 0) goto LAB_001f6ec5;
          goto LAB_001f7ad0;
        }
        iVar14 = *(int *)(lParm1 + 0x80) + -1;
        lVar47 = (long)iVar14;
        ppuVar22 = local_90;
      } while ((*(int *)(lParm1 + 0x84 + lVar47 * 0xc) != 0x78) ||
              (ppuVar22 = local_90, iVar15 != 0x20));
    }
    uVar49 = *local_e8;
    pbVar35 = (byte *)(local_f0 + local_e8[2]);
    *local_e8 = uVar49 - 1;
    ppuVar22 = local_90;
    if (uVar49 - 1 == 0) {
      (**(code **)(local_e8[1] + 0x30))();
      ppuVar22 = local_90;
    }
    goto LAB_001f09c5;
  }
  lVar17 = *(long *)(lParm1 + 0x40);
  if ((int)((long)((long)local_90 - lVar17) >> 3) == 0) {
    if (iVar15 != 8) goto LAB_001f6ecf;
    if (*(int *)(local_100 + 0x20) == 0) {
      lVar17 = *(long *)(local_100 + 0x10);
      plVar30 = *(long **)(lVar17 + 0x58);
      lVar47 = local_100;
      if (plVar30 == (long *)0x0) {
        *(int *)(_PyThreadState_Current + 0x18) = *(int *)(_PyThreadState_Current + 0x18) + -1;
        *(undefined8 *)(local_100 + 0x10) = *(undefined8 *)(lParm1 + 0x18);
        return local_e8;
      }
      goto LAB_001f76bc;
    }
    lVar17 = *(long *)(local_100 + 0x30);
    lVar47 = local_100;
    if (lVar17 != 0) goto LAB_001f8cac;
    lVar17 = *(long *)(local_100 + 0x28);
    lVar47 = local_100;
    goto joined_r0x001f8d91;
  }
LAB_001f7ad0:
  puVar27 = local_90[-1];
  ppuVar40 = local_90;
  if (puVar27 != (ulong *)0x0) {
    *puVar27 = *puVar27 - 1;
    if (*puVar27 == 0) {
      ppuVar40 = local_90;
      (**(code **)(puVar27[1] + 0x30))();
      lVar17 = *(long *)(lParm1 + 0x40);
    }
    else {
      lVar17 = *(long *)(lParm1 + 0x40);
      ppuVar40 = local_90;
    }
  }
  if ((int)((long)local_90 + (-8 - lVar17) >> 3) != 0) {
    puVar27 = ppuVar40[-2];
    ppuVar40 = ppuVar40 + -2;
    while( true ) {
      if (puVar27 != (ulong *)0x0) {
        *puVar27 = *puVar27 - 1;
        if (*puVar27 == 0) {
          (**(code **)(puVar27[1] + 0x30))();
          lVar17 = *(long *)(lParm1 + 0x40);
        }
        else {
          lVar17 = *(long *)(lParm1 + 0x40);
        }
      }
      if ((int)((long)((long)ppuVar40 - lVar17) >> 3) == 0) break;
      ppuVar40 = ppuVar40 + -1;
      puVar27 = *ppuVar40;
    }
  }
LAB_001f6ec5:
  if (iVar15 != 8) {
LAB_001f6ecf:
    local_e8 = (ulong *)0x0;
  }
LAB_001f16d0:
  lVar47 = local_100;
  if (*(int *)(local_100 + 0x20) == 0) goto LAB_001f16e0;
  lVar17 = *(long *)(local_100 + 0x30);
  lVar47 = local_100;
  if (lVar17 == 0) {
LAB_001f8ccb:
    lVar17 = *(long *)(lVar47 + 0x28);
    if (lVar17 != 0) {
      if (iVar15 == 2) goto LAB_001f8d28;
LAB_001f8ce3:
      iVar15 = FUN_00276300(lVar17,*(undefined8 *)(lVar47 + 0x38),lParm1,3,local_e8);
      if (iVar15 != 0) {
        if ((local_e8 == (ulong *)0x0) ||
           (uVar49 = *local_e8, *local_e8 = uVar49 - 1, uVar49 - 1 != 0)) {
LAB_001f8d77:
          local_e8 = (ulong *)0x0;
        }
        else {
          (**(code **)(local_e8[1] + 0x30))(local_e8);
          local_e8 = (ulong *)0x0;
        }
      }
    }
  }
  else {
    lVar47 = local_100;
    if ((iVar15 == 8) || (lVar47 = local_100, iVar15 == 0x40)) {
LAB_001f8cac:
      iVar14 = FUN_00276300(lVar17,*(undefined8 *)(lVar47 + 0x40),lParm1,3,local_e8);
      if (iVar14 == 0) goto LAB_001f8ccb;
      if (local_e8 == (ulong *)0x0) {
        lVar17 = *(long *)(lVar47 + 0x28);
        if (lVar17 == 0) goto LAB_001f8d77;
      }
      else {
        uVar49 = *local_e8;
        *local_e8 = uVar49 - 1;
        if (uVar49 - 1 == 0) {
          (**(code **)(local_e8[1] + 0x30))();
          lVar17 = *(long *)(lVar47 + 0x28);
          if (lVar17 == 0) goto LAB_001f8d77;
          local_e8 = (ulong *)0x0;
        }
        else {
          lVar17 = *(long *)(lVar47 + 0x28);
          if (lVar17 == 0) goto LAB_001f8d77;
          local_e8 = (ulong *)0x0;
        }
      }
LAB_001f8d28:
      FUN_00276e10(lVar17,*(undefined8 *)(lVar47 + 0x38),lParm1,3,0);
    }
    else {
      if (iVar15 == 2) {
        lVar47 = local_100;
        FUN_00276e10(lVar17,*(undefined8 *)(local_100 + 0x40),lParm1,3,0);
        lVar17 = *(long *)(local_100 + 0x28);
        if (lVar17 != 0) goto LAB_001f8d28;
      }
      else {
        lVar17 = *(long *)(local_100 + 0x28);
        lVar47 = local_100;
joined_r0x001f8d91:
        if (lVar17 != 0) goto LAB_001f8ce3;
      }
    }
  }
LAB_001f16e0:
  lVar17 = *(long *)(lVar47 + 0x10);
  plVar30 = *(long **)(lVar17 + 0x58);
  if (plVar30 != (long *)0x0) {
LAB_001f76bc:
    plVar46 = *(long **)(lVar47 + 0x60);
    plVar19 = *(long **)(lVar47 + 0x68);
    plVar9 = *(long **)(lVar47 + 0x70);
    *plVar30 = *plVar30 + 1;
    plVar30 = *(long **)(lVar17 + 0x60);
    if (plVar30 != (long *)0x0) {
      *plVar30 = *plVar30 + 1;
    }
    plVar30 = *(long **)(lVar17 + 0x68);
    if (plVar30 != (long *)0x0) {
      *plVar30 = *plVar30 + 1;
    }
    *(undefined8 *)(lVar47 + 0x60) = *(undefined8 *)(lVar17 + 0x58);
    *(undefined8 *)(lVar47 + 0x68) = *(undefined8 *)(lVar17 + 0x60);
    *(undefined8 *)(lVar47 + 0x70) = *(undefined8 *)(lVar17 + 0x68);
    if ((plVar46 != (long *)0x0) && (*plVar46 = *plVar46 + -1, *plVar46 == 0)) {
      (**(code **)(plVar46[1] + 0x30))();
    }
    if ((plVar19 != (long *)0x0) && (*plVar19 = *plVar19 + -1, *plVar19 == 0)) {
      (**(code **)(plVar19[1] + 0x30))(plVar19);
    }
    if ((plVar9 != (long *)0x0) && (*plVar9 = *plVar9 + -1, *plVar9 == 0)) {
      (**(code **)(plVar9[1] + 0x30))(plVar9);
    }
    PySys_SetObject(0x2fd166,*(undefined8 *)(lVar17 + 0x58));
    PySys_SetObject(0x2fd171,*(undefined8 *)(lVar17 + 0x60));
    PySys_SetObject(0x2fd156,*(undefined8 *)(lVar17 + 0x68));
    plVar30 = *(long **)(lVar17 + 0x58);
    plVar46 = *(long **)(lVar17 + 0x60);
    plVar19 = *(long **)(lVar17 + 0x68);
    *(undefined4 *)(lVar17 + 0x58) = 0;
    *(undefined4 *)(lVar17 + 0x5c) = 0;
    *(undefined4 *)(lVar17 + 0x60) = 0;
    *(undefined4 *)(lVar17 + 100) = 0;
    *(undefined8 *)(lVar17 + 0x68) = 0;
    *plVar30 = *plVar30 + -1;
    if (*plVar30 == 0) {
      (**(code **)(plVar30[1] + 0x30))();
    }
    if ((plVar46 != (long *)0x0) && (*plVar46 = *plVar46 + -1, *plVar46 == 0)) {
      (**(code **)(plVar46[1] + 0x30))(plVar46);
    }
    if ((plVar19 != (long *)0x0) && (*plVar19 = *plVar19 + -1, *plVar19 == 0)) {
      (**(code **)(plVar19[1] + 0x30))(plVar19);
    }
  }
LAB_001f16f6:
  *(int *)(_PyThreadState_Current + 0x18) = *(int *)(_PyThreadState_Current + 0x18) + -1;
  *(undefined8 *)(lVar47 + 0x10) = *(undefined8 *)(lParm1 + 0x18);
  return local_e8;
}


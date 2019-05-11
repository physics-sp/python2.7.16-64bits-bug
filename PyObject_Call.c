
long PyObject_Call(long lParm1,undefined8 uParm2)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  
  pcVar1 = *(code **)(*(long *)(lParm1 + 8) + 0x80);
  if (pcVar1 == (code *)0x0) {
    PyErr_Format(PyExc_TypeError,"\'%.200s\' object is not callable",
                 *(undefined8 *)(*(long *)(lParm1 + 8) + 0x18));
    lVar3 = 0;
  }
  else {
    iVar4 = *(int *)(_PyThreadState_Current + 0x18) + 1;
    *(int *)(_PyThreadState_Current + 0x18) = iVar4;
    if (_Py_CheckRecursionLimit < iVar4) {
      iVar4 = _Py_CheckRecursiveCall(" while calling a Python object");
      if (iVar4 != 0) {
        return 0;
      }
      lVar3 = (*pcVar1)(lParm1,uParm2);
      lVar2 = _PyThreadState_Current;
      *(int *)(_PyThreadState_Current + 0x18) = *(int *)(_PyThreadState_Current + 0x18) + -1;
    }
    else {
      lVar3 = (*pcVar1)(lParm1);
      lVar2 = _PyThreadState_Current;
      *(int *)(_PyThreadState_Current + 0x18) = *(int *)(_PyThreadState_Current + 0x18) + -1;
    }
    if (lVar3 == 0) {
      lVar3 = *(long *)(lVar2 + 0x48);
      if (lVar3 == 0) {
        PyErr_SetString(PyExc_SystemError,"NULL result without error in PyObject_Call");
      }
      else {
        lVar3 = 0;
      }
    }
  }
  return lVar3;
}


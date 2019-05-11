#!/usr/bin/env python
# -*- coding: utf-8 -*-
import dis

def a(b, c):
    return b + c

print dis.dis(a)
print ''
print ''.join('\\x%.2x' % ord(i) for i in a.__code__.co_code)

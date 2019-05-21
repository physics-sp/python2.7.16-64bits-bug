# python2.7.16-64bits-bug

Original exploit for python2 32 bits: https://doar-e.github.io/blog/2014/04/17/deep-dive-into-pythons-vm-story-of-load_const-bug/

exploit.py redirects code execution to shellcode, however this is likely to fail due to NX protection.

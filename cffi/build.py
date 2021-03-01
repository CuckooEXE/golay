"""
build.py: Build the CFFI library

Author: Axel Persinger
License: MIT License
"""


"""
Imported Libraries

cffi - C Foreign Function Interface
"""
import cffi


if __name__ == '__main__':
    ffibuilder = cffi.FFI()
    
    ffibuilder.cdef("""
        int add(int, int);
    """)
    
    ffibuilder.set_source("pygolay",'#include "golay.h"',sources=["golay.c"])
    ffibuilder.compile()
#!/bin/bash

# gcc -S -m64 -fno-asynchronous-unwind-tables -fno-exceptions .\code.c
# gcc -c code.c
gcc code.o
./a.out
echo ""
#!/bin/bash

# gcc -c code.c
gcc -S -fno-asynchronous-unwind-tables -fno-exceptions code.c
gcc code.o
./a.out
echo ""
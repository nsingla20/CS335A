#!/bin/bash

flex assembly.l
g++ lex.yy.cc
./a.out 3AC.txt

g++ code.cpp
./a.out
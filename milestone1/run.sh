#!/bin/bash

cd src
./run.sh > /dev/null
cd ..
make
./javacompiler ./tests/sample.java
dot -Tpng -o out.png out.dot

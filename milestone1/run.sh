#!/bin/bash

cd src
./run.sh
cd ..
make
./javacompiler ./tests/sample.java

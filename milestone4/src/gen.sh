#!/bin/bash
make
mkdir ./../TAC
mkdir ./../S
rm -f ./../TAC/*
rm -f ./../S/*
for file in ./../tests/*.java;do
    name=$(basename $file)

    ./newcompiler $file
    # ./run.sh
    mv ./out.s ./../S/$name.S
    mv ./3AC.txt ./../TAC/$name.3ac
done


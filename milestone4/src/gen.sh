#!/bin/bash
make
for file in ./../tests/*.java;do
    name=$(basename $file)
    echo $file
    ./newcompiler $file
    # ./run.sh
    mv ./out.s ./../tests/$name.S
    mv ./3AC.txt ./../tests/$name.3ac
done
rm -f *.csv


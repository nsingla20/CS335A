#!/bin/bash
cd src
make
cd ../tmp

for f in ./../tests/*; do
    echo $f
    ./../src/newcompiler $f
    read -p "Press enter to continue"
    rm -f symbol_*
done




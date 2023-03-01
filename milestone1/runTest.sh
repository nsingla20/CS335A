#!/bin/bash

for f in ./tests/*; do
    echo $f
    ./javacompiler $f
    read -p "Press enter to continue"
done


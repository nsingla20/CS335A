#!/bin/bash
mkdir p2
for f in ./problem2-testcases/*;
do
./a.out $f
fa="$(basename -- $f)"

mv ans.csv ./p2/$fa.csv
done

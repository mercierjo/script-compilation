#!/bin/bash
# Author: Jordan Mercier
# Date: 05.12.2019

if [[ $# -ne 2 ]]; then
    echo "Define an output name for the program and an extension of file to compile"
    echo "example: ./compile-inf1.sh myprogram cpp"
else
    files=$(ls *.$2)
    g++ -Wall -Wconversion -Wextra -pedantic --std=c++14 -o $1 $files
    echo "compilation done."
fi
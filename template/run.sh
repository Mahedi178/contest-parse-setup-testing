#!/bin/bash
g++ -std=c++17 -O2 -Wall -Wextra -Wno-unused-result -Wno-char-subscripts -Wshadow -Wfloat-equal -Wconversion -Wformat-signedness -Wvla -Wduplicated-cond -Wlogical-op -Wredundant-decls -D_GLIBCXX_DEBUG -D_GLIBCXX_DEBUG_PEDANTIC main.cpp -o main 
./check.sh

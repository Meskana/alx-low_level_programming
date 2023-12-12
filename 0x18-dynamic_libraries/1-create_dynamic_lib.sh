#!/bin/bash
gcc -Wall -Wextra -Werror -pendantic -c -fPIC -c *.c
gcc -shared -o libdynamic.so *.o
export LD_LIBRARY_PATH=.:$LD_LIBRARY_PATH

#!/bin/bash
gcc -L *.c -c -fPIC
gcc *.o -shared -o liball.so

#!/bin/bash

# a script that creates a static library
# from all the .c files

gcc -c *.c
ar rc liball.a *.o
echo y | rm -I *.o

#!/bin/bash
 
# Script created to facilitate the compilation
# Using the terminal Debian GNU / Linux 8
# created by: Jeferson Juliani
# Compile the codes

gcc -c main.c
gcc -c funcoes.c
gcc -o prog main.o funcoes.o -lm

# Clear and Execute

clear
./prog


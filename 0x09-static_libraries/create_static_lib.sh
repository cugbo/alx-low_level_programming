#!/bin/bash
gcc -Wall -Warrior -Wextra -pendantic -c *.c
ar -rc liball.a *.o

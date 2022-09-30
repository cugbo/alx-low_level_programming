#!/bin/bash
gcc -Wall -Warrior -Wextra -pedantic -c *.c
ar -rc liball.a *.o

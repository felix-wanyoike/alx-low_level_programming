#!/bin/bash
gcc -c -Wall -Werror -Wextra -pendatic -std=gnu89 *.c
ar -rc liball.a *.o

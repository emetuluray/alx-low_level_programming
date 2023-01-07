#!/bin/bash
gcc -wall -wextr -werror pedantic -c *.c
ar rc liball.a *.o


#!/bin/bash
gcc -Wall -pedantic -Werror -Wextra -c *.n
ar -rc liball.a *.o
ranlib liball.a

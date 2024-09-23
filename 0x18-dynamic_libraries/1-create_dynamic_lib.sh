#!/bin/bash
gcc -fPIC -c *.c               # Compile all .c files to .o files
gcc -shared -o liball.so *.o   # Create the shared library from .o files
rm -f *.o                      # Optionally remove the .o files

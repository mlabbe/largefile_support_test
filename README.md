# Largefile Linux Support Test #

A simple program to test largefile support cases.  Large files (>2GB) is pretty messed up on Linux.  For instance, including `stdio.h` when invoking the compiler with g++ produces different calls than doing so with gcc.

Usage:

    python3 build.jfdi  # downloads build system
    python3 jfdi.py

    # now run the 4 created binaries

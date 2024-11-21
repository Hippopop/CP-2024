# CP-Practice-2024
This is a repository for competitive programming practice in C/C++. This is where my journey with competitive programming begins. I've added some simple tooling and code snippets to help me with my practice. And currently I'm working on vs-code, but I'm constantly looking for a better IDE.

This directory contains a `Makefile` and some simple vs-code code snippets for competitive programming in C/C++. And two separate directories for C and C++ files. And every problem has a top header section that contains the information about the problem.

### Makefile
The `Makefile` is a simple makefile that can be used to build and run any C/C++ file in the `C` and `C++` directories.
Just follow the following steps to use the `Makefile` and run any C/C++ file.

1. Open the `Makefile` in your text editor.
2. Change the `Name` of the C/C++ file you want to run. You can find `C_NAME`/`CPP_NAME` in the `Makefile`.
3. Optionally, you can change the `OUTPUT_DIRECTORY` in the `Makefile` to change the output directory.
4. Also to make things easier, you can change the `all` section depending on what type of file you're working with.
5. But finally run `make` to build and run the file. (*this will work if you've changed the `all` section*) Or just run `make cbuild` or `make cppbuild` to build the file.
6. And this will generate the output file in the `OUTPUT_DIRECTORY` you've specified. With the name of the file you've changed in the `Makefile`. And run it in the terminal.

Currently this configuration is using `gcc` and `g++` to build and run the C/C++ files. But you can change it to use `clang` or `clang++` if you want. Just have to change the `cbuild` and `cppbuild` sections in the `Makefile`.

> NOTE: If you don't want to submit the output files to github, make sure you have the output directory in your `.gitignore` file. For example, if you're using `bin` as the output directory, you can add `bin/` to your `.gitignore` file. You can also run the `make clean` command to remove the output directory.

### Current Status
Currently this directory has the following files:

1. C Language
    - array_app.c (`solved`)
    - taro_jiro.c (`unsolved`)
    - winter_sale_cf.c (`solved`)

2. C++
   - tricky_sum_cf.cpp (`in-progress`)
   - penchick_satay_sticks_cf.cpp (`solved`)
   - bitmask_cf.cpp (`solved(*took help)`) 
   - football_player.cpp (`solved`)
   - magic_spell.cpp (`solved`)

There's a high chance I might forget to include the new files or update the status of the existing files. So please don't look at this as the actual source of truth.😑

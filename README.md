# CP-Practice-2024
This is a repository for competitive programming practice in C/C++. This is where my journey with competitive programming begins. I've added some simple tooling and code snippets to help me with my practice. And currently I'm working on vs-code, but I'm constantly looking for a better IDE.

This directory contains a `Makefile` and some simple vs-code code snippets for competitive programming in C/C++. And two separate directories for C and C++ files.

### Makefile
The `Makefile` is a simple makefile that can be used to build and run any C/C++ file in the `C` and `C++` directories.
Just follow the following steps to use the `Makefile` and run any C/C++ file.

1. Open the `Makefile` in your text editor.
2. Change the `Name` of the C/C++ file you want to run. You can find `C_NAME`/`CPP_NAME` in the `Makefile`.
3. Optionally, you can change the `OUTPUT_DIRECTORY` in the `Makefile` to change the output directory.
4. Also to make things easier, you can change the `all` section depending on what type of file you're working with.
5. But finally run `make` to build and run the file. (*this will work if you've changed the `all` section*) Or just run `make cbuild` or `make cppbuild` to build the file.

Currently this configuration is using `gcc` and `g++` to build and run the C/C++ files. But you can change it to use `clang` or `clang++` if you want. Just have to change the `cbuild` and `cppbuild` sections in the `Makefile`.
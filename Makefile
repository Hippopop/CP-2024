# Global configuration!
OUTPUT_DIRECTORY = bin

# Configure for any C file!
C_NAME = array_app
C_COMPILER = gcc
C_FILE_NAME = $(C_NAME).c
C_DIRECTORY = C
C_OUTPUT_DIR = $(OUTPUT_DIRECTORY)/c-output
C_OUTPUT_PATH = $(C_OUTPUT_DIR)/$(C_NAME).out
C_I = $(C_DIRECTORY)/$(C_FILE_NAME)

# Configure for any C++ file!
CPP_NAME = tricky_sum_cf
CPP_COMPILER = g++
CPP_FILE_NAME = $(CPP_NAME).cpp
CPP_DIRECTORY = C++
CPP_OUTPUT_DIR = $(OUTPUT_DIRECTORY)/cpp-output
CPP_OUTPUT_PATH = $(CPP_OUTPUT_DIR)/$(CPP_NAME).out
CPP_I = $(CPP_DIRECTORY)/$(CPP_FILE_NAME)

all: crun

cbuild:
	mkdir -p $(C_OUTPUT_DIR)
	$(C_COMPILER) $(C_I) -o $(C_OUTPUT_PATH)

crun: cbuild
	./$(C_OUTPUT_PATH)

cppbuild:
	mkdir -p $(CPP_OUTPUT_DIR)
	$(CPP_COMPILER) $(CPP_I) -o $(CPP_OUTPUT_PATH)

cpprun: cppbuild
	./$(CPP_OUTPUT_PATH)

clean:
	rm -rf $(OUTPUT_DIRECTORY)

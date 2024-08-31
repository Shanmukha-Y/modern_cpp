# Lecture 2: Compilers, Compilation Process, Libraries, and Build Systems

## What is a compiler?

A compiler is a program that translates our code into binary code. You can compile a C++ program using the following command:

```bash
clang++ main.cpp
```

## Compilation Process

When you call the compiler, the following steps happen behind the scenes:

1. Pre-processing
2. Compilation
3. Assembly
4. Linking

### Pre-processing

In this step, the compiler ensures that all included functionalities (e.g., from iostream) are available to the current program.

To view the output of the pre-processing step:

```bash
clang++ -E main.cpp > main.i
```

### Compilation

This is where the compiler's actual work happens. The code is translated into assembly code.

```bash
clang++ -S main.i
```

### Assembly

In this step, we create an object file (binary code).

```bash
clang++ -c main.s
```

### Linking

The final step is to link the object files and produce the final executable.

```bash
clang++ main.o -o main
```

This command produces the final executable which we run to get the program output.

## Compilation Flags

Different flags can be used to specify various aspects of the compilation process:

- `-std`: Define the version of C++
- `-Wall`, `-Wextra`: Enable warnings
- Optimization options: These flags control optimizing steps (e.g., making computations at compile time instead of run time)

## Libraries

Libraries are collections of symbols and implementation details. There are two types of libraries:

1. Static Libraries
2. Dynamic Libraries

### Static Libraries

- Faster but result in larger executables
- Become a part of the final binary

### Dynamic Libraries

- Slower but can be copied or referenced by a program
- Used during run time

## Function Declaration and Definition

- Function declaration is an interface
- Definition is the actual implementation

## Header/Source Separation

- Using `#include`, we can call functions from different places
- Functions can be declared in one file (`.hpp` files) and implemented in another (`.cpp` or `.cc` files)
- When calling, we include the function declaration file, which in turn calls its implementation file
- If the implementation is missing, the linker will throw an error

## What is Linking?

- A library is a binary object that contains the compiled implementation of some methods
- Linking maps a function declaration to its compiled implementation
- To use a library, we need:
  1. Header file (e.g., `abc_api.h`)
  2. Compiled library object (e.g., `libabc.a`)

## How to Build Libraries

To build a library, follow these steps:

1. Declare functions in a header file (`.hpp`)
2. Define functions in a source file (`.cpp`)
3. Include the header file (`.hpp`) in different source files (`.cpp`) to use the functions
4. Run a series of commands to go through the compilation phase

Example:

```bash
# Compile the library source file
clang++ -c library.cpp -o library.o

# Create a static library
ar rcs liblibrary.a library.o

# Compile the main program
clang++ -c main.cpp -o main.o

# Link the main program with the library
clang++ main.o -L. -llibrary -o main_program
```

## Build Systems

Build systems automate the process of compiling and linking libraries and programs.

### Makefiles

- Makefiles are commonly used build systems
- They define rules and dependencies for building a project

Example of a simple Makefile:

```makefile
CC = clang++
CFLAGS = -Wall -std=c++17

all: main_program

main_program: main.o library.o
    $(CC) $(CFLAGS) main.o library.o -o main_program

main.o: main.cpp library.hpp
    $(CC) $(CFLAGS) -c main.cpp

library.o: library.cpp library.hpp
    $(CC) $(CFLAGS) -c library.cpp

clean:
    rm -f *.o main_program
```

### CMake

- CMake is a meta build system
- It generates Makefiles for us, making it easier to manage complex projects
- CMake is platform-independent and can generate build files for various systems

Example of a simple CMakeLists.txt file:

```cmake
cmake_minimum_required(VERSION 3.10)
project(MyProject)

set(CMAKE_CXX_STANDARD 17)

add_library(library library.cpp)
add_executable(main_program main.cpp)
target_link_libraries(main_program library)
```

To use CMake:

```bash
mkdir build
cd build
cmake ..
make
```

This process simplifies the build process, especially for larger projects with multiple dependencies.
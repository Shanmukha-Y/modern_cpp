# Modern C++ Course (2020)
## by Ignacio Vizzo and Cyrill Stachniss

### Why Learn C++?

1. **Performance**
   - Super fast execution
   - Helps save memory in resource-limited hardware
   - Efficient for smaller processors, which consume less energy

2. **Low-Level Control with High-Level Abstraction**
   - Assembly provides complete control over the program and is extremely fast
     - However, it's not platform-agnostic (e.g., Intel vs AMD) and is difficult to read
   - C/C++ create abstractions while maintaining platform agnosticism
   - C/C++ use a compiler to translate source code into assembly

3. **Object-Oriented Programming**
   - C doesn't support OOP
   - C++ introduced object-oriented programming concepts

4. **Modern C++**
   - Refers to C++ standards from C++11 onwards

### Design Philosophy of C++

C++ is built on three core principles:

1. **Safety**
   - Type safety: Strong typing system to catch errors at compile-time
   - Memory safety: Tools and practices to prevent memory leaks and undefined behavior
   - Exception handling: Mechanisms to handle and recover from runtime errors
   - RAII (Resource Acquisition Is Initialization): Ensures proper resource management

2. **Efficiency**
   - Zero-overhead principle: You don't pay for what you don't use
   - Direct mapping to hardware: Allows low-level optimizations
   - Compile-time optimizations: Enables the compiler to generate highly optimized machine code
   - Fine-grained control over memory layout and allocation

3. **Abstraction**
   - Object-Oriented Programming: Encapsulation, inheritance, and polymorphism
   - Generic programming: Templates for writing flexible, reusable code
   - Functional programming features: Lambda expressions, std::function, etc.
   - High-level abstractions with minimal runtime cost

These principles work together to create a language that provides powerful tools for developers while maintaining high performance and reliability. Modern C++ continues to evolve, introducing new features that enhance these core philosophies.

### Key Points

- C++ is ideal for applications requiring high performance and memory efficiency
- It bridges the gap between low-level programming (like assembly) and high-level abstractions
- The language continues to evolve, with "Modern C++" introducing new features and best practices

### Standard Input/Output Channels

In Linux, when a program runs:
- The kernel assigns three standard channels:
  1. STDIN (Standard Input)
  2. STDOUT (Standard Output)
  3. STDERR (Standard Error)
- By default:
  - STDIN receives input from the keyboard
  - STDOUT and STDERR display output on the monitor

### C++ Program Structure

1. **Main Function**
   - Every C++ program starts with the `main` function
   - The `main` function returns an error code
     - Error code 0 typically means the program executed successfully

2. **Include Statements**
   - Similar to `import` in Python
   - Used to include necessary libraries or header files

3. **Compilation Process**
   - C++ code needs to be compiled before it can be run
   - Common C++ compilers include:
     - GCC (GNU Compiler Collection)
     - Clang
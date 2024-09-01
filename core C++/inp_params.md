# Understanding argc and argv in C++

In C++, the `main` function can accept command-line arguments through two parameters: `argc` and `argv`. These allow you to pass information to your program when you run it from the command line.

## Explanation

1. `argc` (argument count):
   - An integer that represents the number of command-line arguments.
   - It is always at least 1, as the first argument is always the name of the program itself.

2. `argv` (argument vector):
   - An array of C-style strings (char*) that contains the actual arguments.
   - `argv[0]` is the name of the program.
   - `argv[1]` through `argv[argc-1]` are the additional arguments provided.

## Simple Example

Here's a simple C++ program that demonstrates the use of `argc` and `argv`:

```cpp
#include <iostream>
using namespace std;

int main(int argc, char* argv[]) {
    cout << "Number of arguments: " << argc << endl;
    
    cout << "Arguments:" << endl;
    for (int i = 0; i < argc; i++) {
        cout << i << ": " << argv[i] << endl;
    }
    
    return 0;
}
```

## How to Run

Compile the program (let's say it's named `argtest.cpp`):

```
g++ argtest.cpp -o argtest
```

Run the program with arguments:

```
./argtest hello world 123
```

## Example Output

```
Number of arguments: 4
Arguments:
0: ./argtest
1: hello
2: world
3: 123
```

In this output:
- `argc` is 4 (program name + 3 additional arguments)
- `argv[0]` is the program name (`./argtest`)
- `argv[1]` through `argv[3]` are the additional arguments provided

This simple program demonstrates how to access and use command-line arguments in your C++ programs, allowing for more flexible and interactive applications.
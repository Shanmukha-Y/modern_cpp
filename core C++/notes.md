# C++ Fundamentals: Keywords, Entities, and Concepts

## C++ Keywords

- Keywords are reserved words in C++ that have special meanings.
- They cannot be used as identifiers (e.g., variable names, function names).
- Examples of keywords include:
  - `const`
  - `auto`
  - `friend`
  - `false`

**Note:** Comments are ignored during translation.

**Tip:** Be aware of escape sequences like `\n` (newline) when working with strings.

## C++ Entities

Entities in C++ include:
- Values
- Objects
- Functions
- Enumerators
- And more

**Important:** Preprocessor macros are not C++ entities.

Example of a preprocessor macro (not a C++ entity):
```cpp
#define UGLY_MACRO(X) // This is not a C++ entity
```

## C++ Declarations

- Declarations introduce entities to the program.
- Examples of declarations:

```cpp
int foo;        // Declaration of a variable
void myfunc();  // Declaration of a function
```

- A declaration that defines all properties required to use an entity is called a definition.

Example of a definition:
```cpp
void myfunc() {
    // Function body (implementation)
}
```

## C++ Definitions

- Definitions consist of a sequence of statements and expressions.
- All statements in C++ end with a semicolon (`;`).

Example:
```cpp
int main() {
    int x = 5;  // Statement
    x += 3;     // Another statement
    return 0;   // Return statement
}
```

## C++ Names

- Names are associated with declarations.
- Each name has a scope that defines its validity within a part of the program.

Example:
```cpp
{
    int x = 5;  // 'x' is valid only within this block
}
// 'x' is not accessible here
```

## C++ Types

- Every object, reference, function, and expression must be associated with a type.
- Types can be:
  - Fundamental (built-in)
  - Compound
  - User-defined
  - Complete or incomplete

Examples:
```cpp
float f;             // Fundamental type
bool b;              // Fundamental type
myType c;            // User-defined type (might be incomplete if not defined yet)
std::vector<int> v;  // User-defined type (from the standard library)
```

## C++ Variables

- All declared objects and declared references are variables, except for non-static data members.

Examples:
```cpp
myType var;           // Variable
myType::static_var;   // Static data member (variable)
myObject.data_member; // Non-static data member (not a variable)
```

# C++ Control Structures

Control structures in C++ allow you to control the flow of your program's execution. Here are the main types of control structures:

## 1. Conditional Statements

### if Statement

The `if` statement allows you to execute a block of code only if a condition is true.

```cpp
if (condition) {
    // Code to execute if condition is true
}
```

### if-else Statement

The `if-else` statement allows you to execute one block of code if a condition is true, and another if it's false.

```cpp
if (condition) {
    // Code to execute if condition is true
} else {
    // Code to execute if condition is false
}
```

### else-if Statement

The `else-if` statement allows you to check multiple conditions.

```cpp
if (condition1) {
    // Code to execute if condition1 is true
} else if (condition2) {
    // Code to execute if condition2 is true
} else {
    // Code to execute if all conditions are false
}
```

### switch Statement

The `switch` statement allows you to select one of many code blocks to be executed.

```cpp
switch(expression) {
    case constant1:
        // Code to be executed if expression == constant1
        break;
    case constant2:
        // Code to be executed if expression == constant2
        break;
    default:
        // Code to be executed if expression doesn't match any constants
}
```

## 2. Loops

### for Loop

The `for` loop executes a block of code a specified number of times.

```cpp
for (initialization; condition; update) {
    // Code to be repeated
}
```

Example:
```cpp
for (int i = 0; i < 5; i++) {
    cout << i << endl;
}
```

### while Loop

The `while` loop executes a block of code as long as a specified condition is true.

```cpp
while (condition) {
    // Code to be repeated
}
```

### do-while Loop

The `do-while` loop is similar to the while loop, except that it executes the code block at least once before checking the condition.

```cpp
do {
    // Code to be repeated
} while (condition);
```

## 3. Jump Statements

### break Statement

The `break` statement terminates the loop or switch statement and transfers execution to the statement immediately following the loop or switch.

```cpp
for (int i = 0; i < 10; i++) {
    if (i == 5) {
        break;  // Exit the loop when i is 5
    }
    cout << i << endl;
}
```

### continue Statement

The `continue` statement skips the rest of the current iteration of a loop and continues with the next iteration.

```cpp
for (int i = 0; i < 10; i++) {
    if (i % 2 == 0) {
        continue;  // Skip even numbers
    }
    cout << i << endl;
}
```

### return Statement

The `return` statement terminates the execution of a function and returns control to the calling function. It can also return a value from a function.

```cpp
int sum(int a, int b) {
    return a + b;  // Return the sum and exit the function
}
```

### goto Statement

The `goto` statement transfers control to a labeled statement. However, it's generally discouraged in modern C++ programming due to its potential to create confusing code.

```cpp
goto label;
// Some code here
label:
    // Code to execute after goto
```

**Note:** While `goto` is available in C++, it's considered bad practice in most cases and should be avoided in favor of other control structures.
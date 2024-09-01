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
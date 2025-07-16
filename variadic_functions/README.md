# Variadic Functions

## Description
This project explores variadic functions in C programming. Variadic functions are functions that can accept a variable number of arguments, allowing for more flexible function designs.

## Learning Objectives
At the end of this project, you should be able to explain:
- What are variadic functions
- How to use `va_start`, `va_arg` and `va_end` macros
- Why and how to use the `const` type qualifier

## Requirements
### General
- Allowed editors: `vi`, `vim`, `emacs`
- All files will be compiled on Ubuntu 20.04 LTS using `gcc`
- All files should end with a new line
- A `README.md` file, at the root of the folder of the project is mandatory
- Code should use the Betty style (checked using `betty-style.pl` and `betty-doc.pl`)
- Not allowed to use global variables
- No more than 5 functions per file
- The only C standard library functions allowed are `malloc`, `free` and `exit`
- Allowed to use `_putchar`
- The prototypes of all functions and the prototype of the function `_putchar` should be included in the header file called `variadic_functions.h`
- All header files should be include guarded

### Compilation
```bash
gcc -Wall -Werror -Wextra -pedantic *.c
```

## Files Description

### Header File
- **`variadic_functions.h`** - Contains all function prototypes and necessary includes

### Tasks

#### 0. Beauty is variable, ugliness is constant
**File:** `0-sum_them_all.c`

Write a function that returns the sum of all its parameters.
- Prototype: `int sum_them_all(const unsigned int n, ...);`
- If `n == 0`, return `0`

**Example:**
```c
sum = sum_them_all(2, 98, 1024);
printf("%d\n", sum); // Output: 1122

sum = sum_them_all(4, 98, 1024, 402, -1024);
printf("%d\n", sum); // Output: 500
```

#### 1. To be is to be the value of a variable
**File:** `1-print_numbers.c`

Write a function that prints numbers, followed by a new line.
- Prototype: `void print_numbers(const char *separator, const unsigned int n, ...);`
- Where `separator` is the string to be printed between numbers
- And `n` is the number of integers passed to the function
- If separator is `NULL`, don't print it

#### 2. One woman's constant is another woman's variable
**File:** `2-print_strings.c`

Write a function that prints strings, followed by a new line.
- Prototype: `void print_strings(const char *separator, const unsigned int n, ...);`
- Where `separator` is the string to be printed between the strings
- And `n` is the number of strings passed to the function
- If separator is `NULL`, don't print it
- If one of the string is `NULL`, print `(nil)` instead

#### 3. To be is a to be or not to be
**File:** `3-print_all.c`

Write a function that prints anything.
- Prototype: `void print_all(const char * const format, ...);`
- Where `format` is a list of types of arguments passed to the function
  - `c`: char
  - `i`: integer
  - `f`: float
  - `s`: char * (if the string is NULL, print (nil) instead)
- Any other char should be ignored
- You are not allowed to use `for`, `goto`, `ternary operator`, `else`, `do ... while`

## Concepts
### Variadic Functions
Variadic functions allow you to create functions that accept a variable number of arguments. They use the `<stdarg.h>` library which provides:

- **`va_list`**: A type to hold the information about variable arguments
- **`va_start(ap, last)`**: Initializes `ap` for subsequent use by `va_arg()` and `va_end()`
- **`va_arg(ap, type)`**: Retrieves the next argument from the variable argument list
- **`va_end(ap)`**: Cleans up the variable argument list

### Basic Usage Pattern
```c
#include <stdarg.h>

int example_function(int fixed_arg, ...)
{
    va_list args;
    va_start(args, fixed_arg);
    
    // Process variable arguments
    int value = va_arg(args, int);
    
    va_end(args);
    return value;
}
```

## Compilation and Testing
To compile and test the functions:

```bash
# Compile individual task
gcc -Wall -Werror -Wextra -pedantic 0-main.c 0-sum_them_all.c -o test

# Run the test
./test
```

## Author
Project completed as part of Holberton School's Low Level Programming curriculum.
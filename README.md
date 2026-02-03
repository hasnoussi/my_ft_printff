*This project has been created as part of the 42 curriculum by <hassnous>.*
# ft_printf

## Description

The **ft_printf** project consists of recreating the standard C `printf` function.  
The goal is to handle different data types and understand variadic functions.

### Conversion Types
* %c : prints a single character.

* %s : prints a string of characters.

* %p : prints a pointer address in hexadecimal format.

* %d / %i : prints a signed decimal integer.

* %u : prints an unsigned decimal integer.

* %x : prints an unsigned integer in lowercase hexadecimal.

* %X : prints an unsigned integer in uppercase hexadecimal.

* %% : prints a literal % character.
### Algorithm and Data Structure

* Parse the format string character by character.

* Retrieve arguments using va_list.

* Separate functions for each conversion type (char, string, pointer, int, unsigned, hex).

* Each function prints the value and returns the number of characters written.

* Modular approach to make the code readable and maintainable.

## Instructions

### Clone the repository:
```bash
git clone <repository_url>
cd ft_printf
```

### Compile the project:
```bash
gcc -Wall -Wextra -Werror -c *.c
ar rcs libftprintf.a *.o
```
### Use the library in a project:
```bash
#include "ft_printf.h"

int main(void)
{
    ft_printf("Hello %s, number: %d\n", "42", 123);
    return 0;
}
```
### Compile with the library:
```bash
gcc main.c -L. -lftprintf -o main
./main
```

## Resources


### References

* Official C documentation: printf

* Tutorials on variadic functions in C

* AI usage: used only to structure and write this README, not for the code.

### Use of Artificial Intelligence
**AI tools were used as assistance resources to:**
* Understand new concepts related to the project
* Visualize the function and workflow of the algorithm
* Translate explanations into English for the README


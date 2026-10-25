# ft_printf

**ft_printf** is a custom recode of the standard C library `printf` function. This project provides a deep dive into variadic arguments in C (`stdarg.h`) and structured string formatting.

---

## Supported Conversions

The implementation handles the following core specifiers:

* `%c`: Prints a single character.
* `%s`: Prints a string of characters.
* `%p`: Prints a void * pointer argument in hexadecimal format.
* `%d` / `%i`: Prints a base 10 signed integer.
* `%u`: Prints an unsigned base 10 decimal number.
* `%x`: Prints a hexadecimal number in lowercase format.
* `%X`: Prints a hexadecimal number in uppercase format.
* `%%`: Prints a literal percentage sign.

---

## Installation & Compilation

The project compiles into a static library file (`libftprintf.a`) using the included `Makefile`.

**1. Clone and compile the library:**
```bash
make
```
*This produces the `libftprintf.a` file.*

**2. Clean temporary object files:**
```bash
make clean
```

**3. Wipe all binaries and object files:**
```bash
make fclean
```

---

## How to Integrate

To use `ft_printf` in your own C projects, include the header file in your code and link the compiled archive during compilation:

```c
#include "ft_printf.h"

int main(void)
{
    ft_printf("Hello %s! The answer is %d.\n", "World", 42);
    return (0);
}
```

Compile your execution file alongside your library:
```bash
gcc main.c libftprintf.a -o my_program
```

---
*Developed in full compliance with the 42 School Norm.*
